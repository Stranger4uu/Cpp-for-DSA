#include <iostream>
using namespace std;

void fizzBuzz(int number) {
    if (number % 3 == 0 && number % 5 == 0) {
        cout << "FizzBuzz";
    }
    else if (number % 3 == 0) {
        cout << "Fizz";
    }
    else if (number % 5 == 0) {
        cout << "Buzz";
    }
    else {
        cout << number;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    fizzBuzz(n);   // ✅ function call

    return 0;
}
