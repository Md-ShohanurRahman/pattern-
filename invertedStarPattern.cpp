#include <iostream>
using namespace std;

int main() {
     int n =4;
// approach 1 
    for (int i = 1; i <= 4; i++) {
        for (int j = i; j <=4; j++) {
            cout << "*";
        }
        cout << endl;
    }
// approach 2 
    for (int i = 1; i <= 4; i++) {
            for (int j = 4; j >=i; j--) {
            cout << "*";
            }
            cout << endl;
        }

        return 0;
    }
