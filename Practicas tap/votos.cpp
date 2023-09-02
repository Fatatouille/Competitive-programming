#include <iostream>
using namespace std;
int main(){
    int N, v[10], a,total = 0;
    cin >> N;
    double porcentaje1, porcentaje2, maximo1=0, maximo2=0;
    for (int i=0; i<N; i++){
        cin >> a;
        v[i] = a;
        total= total+a;
        if (v[i]>maximo1){
            maximo2=maximo1;
            maximo1=v[i];
        }else if(v[i]>maximo2){
            maximo2=v[i];
        }
    }
    porcentaje1=(maximo1/total)*100;
    porcentaje2=(maximo2/total)*100;
    if(porcentaje1>45 || (porcentaje1-porcentaje2)>= 10){
        a=1;
    }else{
        a=2;
    }
    cout << a;
    return 0;
}