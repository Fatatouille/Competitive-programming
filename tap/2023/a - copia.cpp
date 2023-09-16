#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<long int> A,E;

    long int N, M, aux;

    cin >> N >> M;

    for (long int i = 0; i < N; i++) {
        cin >> aux;

        A.push_back(aux);
    }

    for (long int i = 0; i < M; i++) {
        cin >> aux;

        E.push_back(aux);
    }

    for (long int i = 0; i < N; i++) {
        for (long int j = 0; j < M; j++) {
            if (A[i] >= E[j]) {
                A[i] = A[i] - floor(float(A[i])/E[j]) * E[j];
            }
        }
    }

    for (long int i = 0; i < A.size(); i++) {
        cout << A[i] << endl;
    }

    return 0;
}