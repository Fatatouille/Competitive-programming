#include <iostream>
#include <string>
using namespace std;

int main(){
    int l, x, sum=0, out=0;
    string a;
    cin >> l >> x;
    cin.ignore();

    for (int i=0; i<x; i++){
        getline(cin, a);
        
        if(a[0]=='e'){
            if(sum+((int) a[a.size()-1]-'0')>l){
                out++;
            }else{
                sum+=((int) a[a.size()-1]-'0');
            }
        }
        if(a[0]=='l'){
            sum-=((int) a[a.size()-1]-'0');
        }
    }

    cout << out;

    return 0;
}