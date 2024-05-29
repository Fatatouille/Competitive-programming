#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string c;

    cin >> n;
    cin.ignore();
    getline(cin, c);

    while(n>0){
        if(n>2){
            cout << n << " bottles of "<< c <<" on the wall, "<<n<<" bottles of "<< c << "." << endl;
            cout << "Take one down, pass it around, " << n-1 << " bottles of "<< c <<" on the wall." << endl << endl;
        }
        else if(n==2){
            cout << n << " bottles of "<< c <<" on the wall, "<<n<<" bottles of "<< c << "." << endl;
            cout << "Take one down, pass it around, 1 bottle of "<< c <<" on the wall." << endl << endl;
        }
        else{
            cout << "1 bottle of "<< c <<" on the wall, 1 bottle of "<< c << "." << endl << "Take it down, pass it around, no more bottles "<< c << ".";
        }
        n--;
    }

    return 0;
}