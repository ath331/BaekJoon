#include<iostream>
using namespace std;

int main() {

	int num;
	cin >> num;

	for (int i = 1; i <= num; i++) { // ex) num=5일때 i = 0 1 2 3 4 
		for (int j = 0; j < num - i; j++) cout << " ";
		for (int k = 0; k <2*i -1; k++) cout << "*";
		cout << '\n';
	}

	for (int i = 1; i < num; i++) { //i=1 2 3 4 
		for (int j = 0; j < i; j++) cout << " "; // j=0 01 012 0123
		for (int k = 0; k < 2 * num - (2 * i + 1); k++) cout << "*";
		cout << "\n";

	}
	
}