#include <iostream>
using namespace std;

int main(){
    int x, n, p, t=0;
    
    cin >> x;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> p;
        t+=x;
        t-=p;
    }
    t+=x;

    cout << t;

    return 0;
}