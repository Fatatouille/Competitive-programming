import math
def main():
    a=int(input())
    b=int(input())
    c=a*b
    c-=1
    while (math.ceil(c/a)!=b):
        c-=1
    print(c)

if __name__ == "__main__":
    main()