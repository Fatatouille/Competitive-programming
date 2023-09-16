#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class tejo {
	public:
		int x;
		int y;
	
		void setter(int xp, int yp) {
			x = xp;
			y = yp;
		}
};

int main(){
	int jugadas, alto, ancho, x, y, contR=0, contA=0;
	
	float dcR, dcA;
	
	vector<float> dR, dA;
	
	vector<tejo> R, A;
	tejo T, taux;
	
	cin >> jugadas;
	
	cin >> ancho >> alto >> x >> y;
	
	dcR = sqrt(2*pow(10000,2));
	dcA = sqrt(2*pow(10000,2));
	
	T.setter(x, y);
	
	for (int i = 0; i < jugadas; i++){
		cin >> x >> y;	
		taux.setter(x, y);
			
		A.push_back(taux);
	}
	
	for (int i = 0; i < jugadas; i++){
		cin >> x >> y;	
		taux.setter(x, y);
			
		R.push_back(taux);
	}
	
	for (int i = 0; i < jugadas; i++){
		dR.push_back(sqrt(pow(R[i].x-T.x,2)+pow(R[i].y-T.y,2)));
		dA.push_back(sqrt(pow(A[i].x-T.x,2)+pow(A[i].y-T.y,2)));
		
		if (dcR > dR[i]) {
			dcR = dR[i];
		}
		
		if (dcA > dA[i]) {
			dcA = dA[i];
		}
	}
	
	sort(dR.begin(), dR.end());
	sort(dA.begin(), dA.end());
	
	for (int i = 0; i < jugadas; i++) {
		if (i>0) {
			if (dA[i] > dR[i-1]) break;
		}
		
		if (dA[i] < dR[i]) contA++;
	}
	
	for (int i = 0; i < jugadas; i++) {
		if (i > 0) {
			if (dR[i] > dA[i-1]) break;
		}
		
		if (dA[i] > dR[i]) contR++;
	}
	
	if (dcA < dcR) cout << "A"<<endl << contA<<endl;
	else cout << "R" <<endl << contR <<endl;
	
	return 0;
}