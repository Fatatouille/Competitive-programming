#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> dividir(string a){
    vector<string> numeros(100);
    int x=0;
    for (int i=0; i<a.size();i++){
        if(a[i]==' '){
            x++;
            continue;
        }
        numeros[x]+=a[i];
    }
    return numeros;
}
int main(){
    int N=1, M=1,suma, total;
    string C;
    while (N>0 && M>0){
        cin >> N >> M;
        if(N==-1 && M==-1){
            break;
        }
        cin.ignore();
        getline(cin, C);
        vector<string> numeros= dividir(C);
        suma=0;
        for (int i=0; i<N; i++){
            suma+=stoi(numeros[i]);
        }
        total=M*suma;
        cout << total << endl;
    }
    return 0;
}