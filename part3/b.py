def main():
    a= int(input())
    b =[int(x) for x in input().split()]
    sum=0
    cont=0
    for i in range (a):
        if(b[i]!=-1):
            sum+=b[i]
            cont+=1
    print (sum/cont)
if __name__ == "__main__":
    main()