def main():
    t=int(input())

    for l in range (t):
        input()
        c=[int(y) for y in input().split()]
        g=[int(x) for x in input().split()]
        m=[int(z) for z in input().split()]

        mayor= "Godzilla" if max(g)>=max(m) else "MechaGodzilla"

        print(mayor)
        
if __name__=="__main__":
    main()       