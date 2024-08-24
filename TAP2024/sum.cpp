#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a,b,c;
    vector<long long> r;

    cin>>a;
    for (long long i = 0; i < a; i++)
    {
        long long k;
        cin>>k;
        r.push_back(k);
    }
    
    sort(r.begin(),r.end());

    b=r[0];
    c=r[r.size()-1];
    long long sum = (c*c+2*b*b)-(2*c*b+(b*b));
    cout <<sum <<"\n";

    
    return 0;
}