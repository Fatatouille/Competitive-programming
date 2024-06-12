def main():
    l, x= map(int, input().split(" "))
    sum=0
    out=0

    for i in range (x):
        s, a=input().split()
        if(s== 'enter'):
            if (sum+int(a)>l):
                out+=1
            else:
                sum+=int(a)
        if(s=='leave'):
            sum-=int(a)
    print(out)

if __name__ == "__main__":
    main()