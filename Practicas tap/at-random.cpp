//Idea de crear arrays los que en primera instancia, o primer vector, ordenará las cartas repetidas ([3c, 8b, etc]). Luego vectores llamados en c++ los cuales separarán en "" por cada carta para separar numero y palo ([3, c]; [8,b]). Luego en un ciclo for verificar numero por número, si se encuentra i==i+1 y luego verificar sus palos. Esto se hará con dos contadores. Uno que incrementará una vez se verifiquen todas las cartas y otro que se incrementará por cada carta. (No muy eficiente pero tal vez útil) 

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int cartas;
    cout <<"";
    cin >> cartas;
    string valor, numeros[]={};
    char * p;
    for (int i=0;i<cartas;i++){
        cout << "";
        cin >> valor;
        numeros[i]= valor;
    }
}