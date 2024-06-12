import math

def main():
    m, p, l, e, r, s, n = map(int, input().split())
    cont=0
    while(cont<n):
        el=m*e
        m=0
        cont+=1
        pn=math.floor(el/r)
        cont+=1
        if cont>=(n-1):
            break
        m=math.floor(pn/s)
        cont+=1
    cont=0
    while(cont<n):
        mt=math.floor(p/s)
        cont+=1
        el=mt*e
        if cont>=(n-1):
            break
        mt=0
        cont+=1
        p=math.floor(el/r)
        cont+=1
    cont=0
    m+=mt
    while(cont<n):
        p=math.floor(l/r)
        cont+=1
        if cont>=(n-1):
            break
        mt=math.floor(p/s)
        cont+=1
        l=mt*e
        if cont>=(n-1):
            break
        mt=0
        cont+=1
    m+=mt
    print(m)

if __name__=="__main__":
    main()