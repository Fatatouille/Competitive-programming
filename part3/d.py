def main():
    m=input()
    mayor=0
    carta={}

    for j in m:
        if j!=' ' and j!='C' and j!='D' and j!='H' and j!='S':
            if j not in carta:
                carta[j]=1
            else:
                carta[j]+=1
            if(carta[j]>mayor):
                mayor=carta[j]
    
    print (mayor)

if __name__ == "__main__":
    main()