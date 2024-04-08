#include <iostream>
using namespace std;

int main(){
    int t, n, k, p, c=0;

    cin >> t;
    for (int j=0; j<t; j++){
        cin >> n >> k >> p;
        cin.ignore();
        for (int i=0; i<p; i++){
            if(k==n){
                k=0;
            }
            k++;
        }
        cout << "Case " << j+1 << ": " << k << endl;
    }

    return 0;
}