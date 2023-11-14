#include <iostream>
using namespace std;

void printCounting(int n) {
	//base case
	if(n == 0) {
		return;
	}

	cout << n << " ";
	
	printCounting(n-1);	
}

int main() {

	int n;
	cout << "Enter the value of n  " << endl;
	cin >> n;

	printCounting(n);
	cout << endl;

	return 0;
}