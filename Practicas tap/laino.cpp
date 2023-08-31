#include <iostream>
#include <string>
using namespace std;
int main(){
    string palabra;
    char i = 'i';
    while(getline(cin, palabra) && !palabra.empty()){
        if(int(palabra.find(i))!=-1){
            cout << "N" << endl;
        }else{
            cout << "S" << endl;
        }
    }
    return 0;
}