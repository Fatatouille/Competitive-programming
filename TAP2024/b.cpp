#include <bits/stdc++.h>

using namespace std;

int main(){
     long long n;
    vector< long long> m;

    cin >> n;

    for ( long long i = 2; i < n; i++) {
        bool f = false;
        if (n%i==0) {
            for ( long long j = 0; j < m.size(); j++) {
                if (i%m[j]==0) {
                    m[j] = i;
                    f=true;
                }
            }

            if (!f) {
                m.push_back(i);
            }
        }
    }


    if (m.size() == 0) {
        cout << "1" << "\n" << "1 1" << "\n";
    } else {
        cout << m.size() << "\n";
        for ( long long i = 0; i < m.size(); i++) {
            cout << 1 << " " << m[i] << "\n";
        }
    }
    
    return 0;
}