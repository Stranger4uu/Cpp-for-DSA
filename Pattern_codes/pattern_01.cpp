// ******
// ******
// ******
// ******
// ******
// ******

// #include<iostream>
// using namespace std;

// int main(){
//     int i,j;
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

void print1(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout<<"Enter how many times u need pattern : ";
    cin >> n;
    print1(n);
}
