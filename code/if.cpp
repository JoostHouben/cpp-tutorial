#include <iostream>
using namespace std;

int main(){
	cout << "voer je leeftijd in:" << endl;
	int leeftijd;
	cin >> leeftijd;
	if(leeftijd >= 18){
		cout << "Je bent volwassen!" << endl;
	} else {
		cout << "Je bent nog een kind!" << endl;
	}
}
