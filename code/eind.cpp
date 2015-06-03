#include <iostream>
using namespace std;

int main(){

	int aantal;
	cout << "Voer het aantal personen in:" << endl;
	cin >> aantal;

	int som = 0;
	int kinderen = 0;

	for(int i=0; i<aantal; i++){
		int leeftijd;
		cout << "Wat is je leeftijd?" << endl;
		cin >> leeftijd;
		cout << "Dan ben je al meer dan ";
		cout << 356 * leeftijd;
		cout << " dagen oud!" << endl;

		som += leeftijd;
		if(leeftijd < 18)
			kinderen++;
	}

	cout << "De totale leeftijd is " << som << " jaar!" << endl;
	cout << "Er zijn " << kinderen << " kinderen"<<endl;

	return 0;
}
