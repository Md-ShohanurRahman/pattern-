#include <iostream>
using namespace std;

int main() {
    int n =4;
    for (int i = 1; i <= 4; i++) {
        for (int j = i; j <=4; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
