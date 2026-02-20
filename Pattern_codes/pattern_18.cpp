// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****


#include <bits/stdc++.h>

using namespace std;

void print(int n)
{
    int space = 0;
    for (int i = 0; i < n; i++)
    {

        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        // stars

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        space += 2;
        cout << "\n";

    }

    space = 2*n-2;
    for (int i = 1; i <= n; i++)
    {

        // stars
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        // stars

        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }

        space -= 2;
        cout << "\n";

    }
}


 
int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;
    print(n);
}