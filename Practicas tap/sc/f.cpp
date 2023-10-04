#include <iostream>
#include <list>
#include <string>

using namespace std;

void Escribir(list<int> lista){
    cout << '[';
    for(int i=0; i<lista.size(); i++){
        cout << lista.front();
        if(!(i+1==lista.size())){
            cout << ',';
        }else{
            cout << ']' << endl;
        }
        lista.pop_front();
    }
}

int main(){
    int C, T, j;
    string orden, cadena;
    cin >> C;
    list<int> lista;
    for (int i=0; i<C; i++){
        getline(cin, orden);
        cin >> T;
        getline(cin, cadena);
        for(j=0; j<cadena.size(); j++){
            if(cadena[j]=='[' || cadena[j]==']' || cadena[j]==','){
                continue;
            }else{
                lista.push_back(cadena[j]-'0');
            }
        }
        for(j=0; j<orden.size(); j++){
            if(orden[i]=='R'){
                lista.reverse();
            }
            if(orden[i]=='D'){
                if(lista.empty()){
                    if(j+1==orden.size()){
                        cout << "error" << endl;
                    }
                }else{
                    lista.pop_front();
                    if(j+1==orden.size()){
                        Escribir(lista);
                    }
                }
            }
        }
        lista.clear();
    }
    return 0;
}