#include<iostream>
#include<math.h>

using namespace std;

int main(){

	int n;
	while(true){
	
		cin >> n;
		if(n == 0){
			break;
		}

		int x[n], y[n];
		for(int i = 0; i < n; i++){
			cin >> x[i] >> y[i];		
		}

		double sumx = 0, sumy = 0;

		for(int i = 0; i < n; i++){
			sumx += x[i];
			sumy += y[i];
		}
		
		sumx = sumx/n;
		sumy = sumy/n;
		
		int resx, resy;
		if( (sumx + 0.5) == ceil(sumx) ){
			resx = floor(sumx);
		}

		else{
			resx = round(sumx);
		}

		if( (sumy + 0.5) == ceil(sumy) ){
			resy = floor(sumy);
		}

		else{
			resy = round(sumy);
		}
		cout << resx << " " << resy << endl;
		//printarray(x, n);
		//printarray(y, n);

	}
	return 0;
}
