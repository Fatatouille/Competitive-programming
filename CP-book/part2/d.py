import math

def main():
    t=int(input())
    for i in range (t):
        n, m= map(int, input().split(" "))
        s=(math.floor((n/3))*math.floor((m/3)))
        print(s)

if __name__ == "__main__":
    main()