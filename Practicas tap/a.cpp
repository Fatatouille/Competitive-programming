#include <iostream>
using namespace std;
int main(){
    int N, P1, P2, ge=0, gi=0, total=0, x=0;
    cin >> N;
    int max[N], alto[N/2];
    for (int i=0; i<(N); i+=2){
        cin >> P1;
        cin >> P2;
        max[i]=P1;
        max[i+1]=P2;
        if(P1>P2){
            alto[x]=P1;
        }else{
            alto[x]=P2;
        }
        x++;
        total+=P1+P2;
    }
    for (int i=0; i<(N/2); i++){
        
    }
    return 0;
}