#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> n;

    for (int i=0; i < 3; i++) {
        int a;

        cin >> a;

        n.push_back(a);
    }

    sort(n.begin(), n.end());

    if (n[0]+n[1] > n[2]) cout << "N" << "\n";
    else cout << "S" << "\n";
    
    return 0;
}