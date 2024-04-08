#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, P;
    string word;

    cin >> N >> P;
    cin.ignore();
    
    for (int i=0; i<N; i++){
        getline(cin, word);
    }

    cout << P;
    return 0;
}