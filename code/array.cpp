#include <iostream>
using namespace std;

int main(){

	int kwadraten[10];

	for(int i = 0; i < 10; i++){
		kwadraten[i] = i*i;
	}

	int som = 0;
	for(int i = 0; i < 10; i++){
		som += kwadraten[i];
	}

	cout << "de som is " << som << endl;

	return 0;
}
