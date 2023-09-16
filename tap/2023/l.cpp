#include <iostream>
using namespace std;
int main(){
    int A=0, P=0, golA, golP;

    for (int i = 0; i < 2; i++) {
        cin >> golA >> golP;
        A += golA;
        P += golP;
    }

    if (A > P) cout << "A" << endl;
    else if (P > A) cout << "P" << endl;
    else cout << "D" << endl; 
}