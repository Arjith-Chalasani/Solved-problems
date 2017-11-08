#include<iostream>

using namespace std;

int main(){

	int cases;
	cin >> cases;

	int i = 0;

	while(i < cases){
		getchar();
		int c, e;
		cin >> c >> e;

		double cse[c], ec[e];
		double sumcse = 0, sumec = 0;		
		for(int i = 0; i < c; i++){
			cin >> cse[i];
			sumcse += cse[i];
		}
		getchar();

		for(int i = 0; i < e; i++){
			cin >> ec[i];
			sumec += ec[i];
		}
		getchar();

		double avgcse = sumcse/c;
		double avgec = sumec/e;

		int jokes = 0;
		for(int i = 0; i < c; i++){
			double modsumcse = sumcse - cse[i];
			double avgmodcse = ( modsumcse/(c-1) );
			double avgmodec = (sumec + cse[i])/(e + 1);

			if( (avgmodcse > avgcse) and (avgmodec > avgec)){
				jokes++;
			}
		}

		cout << jokes << endl;
		i++;
	}
	return 0;
}
