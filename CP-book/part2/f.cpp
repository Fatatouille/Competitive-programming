#include <iostream>
using namespace std;

int main(){
    long int t, a, b;

    while(scanf("%d %d", &a, &b) !=EOF){
        if (a>b){
            t=a-b;
        }else{
            t=b-a;
        }
        printf("%d\n", t);
    }

    return 0;
}