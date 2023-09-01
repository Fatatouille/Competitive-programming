#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    int total, n1, n2;
    string p1, p2;
    char resultado;
    for (int i=0; i<t; i++){
        resultado = 'B';
        cin >> total;
        cin >> n1;
        cin >> p1;
        for (int x=0; x<total-1; x++){
            cin >> n2;
            cin >> p2;
            if (p1==p2 || n1==n2){
                resultado = 'M';
            }
            p1=p2;
            n1=n2;
        }
        cout << resultado << endl;
    }
    return 0;
}