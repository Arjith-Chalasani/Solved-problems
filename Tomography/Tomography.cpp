#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void printarray(int arr[], int size){
	
	for(int i = 0; i < size; i++){
		cout << arr[i];
	}
	cout << endl;
}

bool check(int cs[], int c){
	
	for(int i = 0; i < c; i++){
		if(cs[i] < 0){
			return false;
		}
	}
	return true;

}

int main(){
	
	int r, c;
	cin >> r >> c;
	int rs[r];
	int cs[c];
	
	for(int i = 0; i < r; i++){
		cin >> rs[i]; 
	}
	
	for(int i = 0; i < c; i++){
		cin >> cs[i];
	}

	for(int i = 0; i < r; i++){
		int k = rs[i];
		size_t s = sizeof(cs)/sizeof(cs[0]);
		sort(cs, cs+s, std::greater<int>());
		for(int j = 0; j < k ; j++){
			cs[j] = cs[j] - 1;
		}
	}

	int sum = 0;
	if(check(cs, c)){
		for(int i = 0; i < c; i++){
			sum = sum + cs[i];
		}
		if(sum == 0){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	else{
		cout << "No" << endl;
	}
	
	return 0;

}
