import math

def main():
    b=[int(x) for x in input().split()]
    a=[int(z) for z in input().split()]
    
    A=[]
    B=[]
    for i in range (b[1]):
        A = []
        B = []
        sa=0
        sb=0
        x=0
        l, r = map(int, input().split())
        for j in range (l-1, r):    
            if(math.log2(a[j])==int(math.log2(a[j]))):
                A.append(a[j])
            elif(a[j]%2!=0):
                B.append(a[j])
            
        A.sort(reverse=True)
        B.sort(reverse=True)
        
        mini = min(len(A),len(B))
        
        if mini == 0:
            if (len(A)==len(B)):
                print("E")
            elif (len(A) > len(B)):
                print("A")
            else:
                print("B")
        else:
            for i in range(mini):
                sa+=A[i]
                sb+=B[i]
                x=i
            if (len(A)>len(B)):
                sa+=A[x+1]
            elif (len(A)<len(B)):
                sb+=B[x+1]
        
            if (sa==sb):
                print("E")
            elif (sa > sb):
                print("A")
            else:
                print("B")
                
        
if __name__ == "__main__":
    main()