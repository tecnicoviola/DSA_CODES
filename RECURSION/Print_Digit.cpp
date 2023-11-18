#include <iostream>
#include<vector>
using namespace std;

void printDigits(int n) {
        //base case
        cout << "Prining value of n "  << n << endl;
        if(n == 0 ) {
                return ;
        }

        printDigits( n / 10);

        int digit = n % 10;
        cout << digit << " ";
}

int main() {

        int n = 0647;
        cout << n << endl;
        if(n == 0)
                cout << 0 << endl;
        
        printDigits(n);

        return 0;
}