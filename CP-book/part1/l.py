def main():
    n=int(input())
    s=1
    r=2
    for i in range (n):
        r+=s
        s*=2
    print(r**2)
if __name__ == "__main__":
    main()