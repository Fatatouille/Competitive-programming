#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> A,B,M;
    int N,Q;

    cin >> N >> Q;

    while (N--) {
        int a;

        cin >> a;

        M.push_back(a);
    }

    while (Q--) {
        int l,r;
        int sa=0,sb=0;

        cin >> l >> r;

        for (int i = l-1,t=0; i < r; i++,t++) {
            if (t%2==0 && M[i]==1) 
            if (log2(M[i])==int(log2(M[i]))) {
                A.push_back(M[i]);
            } else if (M[i]%2!=0) {
                B.push_back(M[i]);
            }
        }

        sort(A.begin(), A.end(), greater<int>());
        sort(B.begin(), B.end(), greater<int>());

        int mini = min(A.size(), B.size());

        if (mini == 0) {
            if (A.size() == B.size()) cout << "E" << "\n";
            else if (A.size() > B.size()) cout << "A" << "\n";
            else cout << "B" << "\n";
        } else {
            for (int i = 0; i < mini; i++) {
                sa+=A[i];
                sb+=B[i];
            }

            if (A.size() > B.size()) {
                sa+=A[mini];
            } else if (A.size() < B.size()) {
                sb+=B[mini];
            }

            if (sa == sb) cout << "E" << "\n";
            else if (sa > sb) cout << "A" << "\n";
            else cout << "B" << "\n";
        }

        A.clear();
        B.clear();
    }

    
    return 0;
}