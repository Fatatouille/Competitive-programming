import math
def main():
    t=int(input())
    for i in range (t):
        n=int(input())
        b=n*(n+1)/2
        c=math.floor(((-1)+((1+8*n)**0.5))/2)
        print(c)

if __name__ == "__main__":
    main()