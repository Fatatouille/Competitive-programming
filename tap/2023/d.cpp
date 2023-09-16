#include <iostream>
#include <vector>
using namespace std;
int calculo(int N, vector<int> E, vector<int> P, int restantes, vector<int> nocero){
    for (int i=0; i<N; i++){
        if(P[0]==0){
            return 0;
        }
        if(P[i]!=0){
            nocero.push_back(P[i]);
            restantes=P[i];
        }
        if(P[i]==0){
            for (int x=nocero.size()-1; x>=0; x--){
                if(nocero[x]>E[i]){
                    nocero[x]-=E[i];
                    restantes-=E[i];
                }
            }
        }
    }
    return restantes;
}
int main(){
    int N, e, p, resto=0, posibilidades=0;
    vector<int>E, P, nocero={0};
    cin >> N;
    for (int i=0; i<N; i++){
        cin >> e;
        E.push_back(e);
    }
    for (int i=0; i<N; i++){
        cin >> p;
        P.push_back(p);
        resto+=p;
    }
    while(resto>0){
        resto-=calculo(N, E, P, resto, nocero);
        posibilidades++;
    }
    cout << posibilidades << endl;
    return 0;
}