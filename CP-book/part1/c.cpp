#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, P, R;
    
    cin >> N >> P;
    cin.ignore();
    R=(P*2)-N;
    cout << R;

    return 0;
}