def main():
    a, b = map(int, input().split())
    f=[]
    c=[int(x) for x in input().split()]
    x=0
    i=0
    while len(f) != a:
        if f.empty():
            if(c[i]+c[i+1])!=b:
                f.append(c[i])
                c.pop(i)
        if f[x]+c[i]:
            f.append(c[i])
            c.pop(i)
        if i == a:
            i=0
        else:
            i+=1
            
    for j in range (len(f)):
        if j <a-1:
            print(f[j], " ")
        else:
            print(f[j])
            
if __name__ =="__main__":
    main()