#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int t,p,a,u,A,B;

    t = p = a = u = 0;

    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i]=='T') t++;
        if (s[i]=='P') p++;
        if (s[i]=='A') a++;
        if (s[i]=='U') u++;
    }

    A = min(t,p);
    B=min(A, u+a);

    cout << B << "\n";
    
    return 0;
}