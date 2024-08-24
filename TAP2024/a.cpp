#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, c=0, T=0;

    cin >> t;

    while (t--) {
        int a;

        cin >> a;

        if (a==1) {
            T++;
            c++;

            if (c>=3) {
                T++;
            }
        } else {
            T--;
            c=0;
        }
    }

    cout << T;
    
    return 0;
}