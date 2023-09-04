#include <iostream>
#include <string>
using namespace std;
int main(){
    int N=1, M=1,suma, i, anterior, a, b;
    string C;
    while (N>0 && M>0){
        cin >> N >> M;
        if(N==-1 && M==-1){
            break;
        }
        cin.ignore();
        getline(cin, C);
        string num[N];
        suma=0;
        a=0;
        for (i=0; i<C.size(); i++){
            num[a]+=C[i];
            if (C[i]==' ' || i==(C.size()-1)){
                anterior=0;
                if(suma==0){
                    anterior=0;
                }else{
                    for(b=a-1; b!=-1; b--){
                        anterior+=stoi(num[b])*M;
                    }
                }
                suma+=(stoi(num[a])*M)+anterior;
                a++;
            }
        }
        cout << suma << endl;
        for (a=a; a!=-1; a--){
            num[a]=" ";
        }
    }
    return 0;
}