//Preprocessor directives
#include <iostream>
using namespace std;

int main() {

        //Loop through to find all prime numbers
        for (int i = 2; i < 100; i++) {
                for (int j = 2; j < i; j++) {
                        if (i % j == 0) {
                                break;
                        }
                        else if (i == j + 1) {
                                cout << i << " ";
                        }
                }
        }
        return 0;
}
