def main():
    t=int(input())

    for l in range (t):
        input()
        c=[int(y) for y in input().split()]
        g=[int(x) for x in input().split()]
        m=[int(z) for z in input().split()]
        for i in range (c[0]):
            for j in range (c[1]):
                if (g[i]<m[j]):
                    g[i]=0
                else:
                    m[j]=0
        god=sum(g)
        mec=sum(m)
        if(god>mec):
            print("Godzilla")
        else:
            print("MechaGodzilla")

if __name__=="__main__":
    main()        