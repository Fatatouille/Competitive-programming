def main():
    fin=True
    a=0
    while(fin):
        try:
            coso=input()
            if not coso:
                break
            n=int(input())
            a+=1
            print('Case %d:' % a)
            for x in range (n):
                i, j =map(int, input().split())
                inicial=coso[min(i, j)]
                if (inicial=='0'):
                    res= "No" if (coso.find("1", min(i, j), max(i, j)+1) !=-1) else "Yes"
                else:
                    res= "No" if (coso.find("0", min(i, j), max(i, j)+1) !=-1) else "Yes"
                print(res)
        except EOFError:
            break
                    
if __name__=="__main__":
    main()