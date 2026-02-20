// 1
// 01
// 101
// 0101
// 10101

#include <bits/stdc++.h>

using namespace std;

void print1(int n)
{

    int stars = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            stars = 1;
        }
        else
        {
            stars = 0;
        }

        for (int j = 0; j <= i; j++)
        {
            cout << stars;
            stars = 1 - stars;
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    print1(n);
}