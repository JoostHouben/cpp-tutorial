#include <iostream>
using namespace std;

int main(){
	cout << "alle kwadraten onder 1000" << endl;

	int n = 0;
	while(n * n <= 1000){
		cout << (n * n) << endl;
		n = n+1;
	}

	return 0;
}
