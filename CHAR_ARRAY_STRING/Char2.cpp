#include <iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

bool cmp(char first, char second) {
        return first > second;
}

bool compare(int a, int b) {
        cout << "First number is: " << a ;
        cout << " Second number is: " << b << endl << endl; 
        return a > b;
}

int main() {

        map<int, char> meraMap;
        //insertion
        meraMap[0] = 'a';
        meraMap[1] = 'b';
        meraMap[25] = 'z';

        //access
        cout << "Your ans is: " << meraMap[1] << endl;





  return 0;
}