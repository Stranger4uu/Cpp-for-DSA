#include <iostream>
using namespace std;

void checkArmstrong(int n) {
    int duplicate = n;
    int temp = n;
    int sum = 0;
    int digits = 0;

    // Step 1: count digits
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;  // reset temp

    // Step 2: calculate sum of digit^digits
    while (temp > 0) {
        int last_digit = temp % 10;

        int power = 1;
        for (int i = 1; i <= digits; i++) {
            power = power * last_digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    // Step 3: check
    if (sum == duplicate) {
        cout << "It's an Armstrong number";
    } else {
        cout << "It's not an Armstrong number";
    }
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    checkArmstrong(n);
    cout << endl;

    return 0;
}
