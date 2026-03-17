#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int reverse_number = 0;
    int dup = n;

    while (n > 0) {
        int last_number = n % 10;
        reverse_number = reverse_number * 10 + last_number;
        n = n / 10;
    }

    if (dup == reverse_number)
        cout << "true";
    else
        cout << "false";

    return 0;   
}
