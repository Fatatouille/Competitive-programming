#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    vector<int> R, A, sum;

    int amigas, aux, minA, maxA;

    cin >> amigas;

    for (int i = 0; i < amigas; i++) {
        cin >> aux;

        R.push_back(aux);
    }

    for (int i = 0; i < amigas; i++) {
        cin >> aux;

        A.push_back(aux);
    }

    sort(R.begin(), R.end());
    sort(A.begin(), A.end(), greater<int>());

    for (int i = 0; i < amigas; i++) {
        sum.push_back(A[i]+R[i]);
    }

    minA = *min_element(sum.begin(), sum.end());
    maxA = *max_element(sum.begin(), sum.end());

    cout << abs(minA-maxA) << endl;
    
    return 0;
}