#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> v_puntJug;
	
	int cantJug, puntJug, sumGe = 0, sumGi = 0, puntGe = 0, puntGi = 0, pase = 0;
	
	cin >> cantJug;
	
	for (int i = 0; i < cantJug; i++) {
		cin >> puntJug;
		
		v_puntJug.push_back(puntJug);
	}
	
	sort(v_puntJug.begin(), v_puntJug.end(), greater<int>());
	
	for (int i = 0; i < cantJug; i+=2) {
		for (int j = i+2; j < cantJug; j+=2) {
			sumGe += max(v_puntJug[j],v_puntJug[j+1]);
			sumGi += min(v_puntJug[j],v_puntJug[j+1]);
		}
		
		if (min(v_puntJug[i], v_puntJug[i+1])+sumGe+puntGe > max(v_puntJug[i], v_puntJug[i+1])+sumGi+puntGi) {
			pase++;
			puntGe += min(v_puntJug[i], v_puntJug[i+1]);
			puntGi += max(v_puntJug[i], v_puntJug[i+1]);
		} else {
			puntGe += max(v_puntJug[i], v_puntJug[i+1]);
			puntGi += min(v_puntJug[i], v_puntJug[i+1]);
		}
		
		sumGe = 0;
		sumGi = 0;
	}
	
	if (puntGe == puntGi) pase=-1;
	
    cout << pase << endl;
	
	return 0;
}