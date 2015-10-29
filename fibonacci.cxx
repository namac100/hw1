#include <iostream>
using namespace std;

int main(){
	int f0, f1, f, N;
	
	cout << "N = ";
	cin >> N;

	if(N < 0){
		cout << "invalid" << endl;
	}

	if(N == 0){
		f = 0;
		cout << "f = " << f << endl;
	}

	if(N == 1){
		f = 1;
		cout << "f = " << f << endl;
	}

	if(N > 1){
		f0 = 0;
		f1 = 1;
		
		for(int i = 1; i < N; i++){
			f = f0 + f1;
			f0 = f1;
			f1 = f;
		}
		cout << "f = " << f << endl;
	}
	return 0;
}