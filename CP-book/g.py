def main():
    fin=True
    while fin:
        buy=[]
        buyx=[]
        s=[input().split()]
        if s[0]== "buy":
            suma=int(s[1])*int(s[2])
            buy.append(suma)
            buyx.append(int(s[1]))

if __name__=="__main__":
    main()