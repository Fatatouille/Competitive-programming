#include <iostream>
#include <string>
using namespace std;
int main(){
    int N, cont=0, n;
    cin >> N;
    char aux, tablero[N][N];
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            cin >> aux;
            tablero[i][j]=aux;
        }
    }
    for (int i=0; i<N; i++){
        n=0;
        for (int j=0; j<N; j++){
            if(tablero[i][j]=='N'){
                n++;
            }else{
                n=0;
            }
            if(n==2){
                cont++;
                n=0;
            }
        }
    }
    cout << cont << endl;
    return 0;
}