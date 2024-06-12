#include <iostream>
#include <string>
using namespace std;

int main(){
    int cont=0;
    string a;
    getline(cin, a);
    
    for (int i=0; i<a.size(); i++){
        if(a[i]=='s'){
            cont++;
        }else{
            if(cont<2){
                cont=0;
            }
        }
    }
    if (cont >=2){
        cout << "hiss";
        }
    else{
        cout << "no hiss";
    }

    return 0;
}