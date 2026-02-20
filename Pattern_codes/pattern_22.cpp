//      1 
//     1 1 
//    1 2 1 
//   1 3 3 1 
//  1 4 6 4 1
 #include <bits/stdc++.h>
using namespace std;



void print(int n){
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        
        //spaces
        for (int space = 0; space < rows - i; space++) {
            cout << " ";
        }

        int value = 1;   // First value of each row

        //value
        for (int j = 0; j <= i; j++) {
            cout << value << " ";

        
            value = value * (i - j) / (j + 1);
        }

        cout << endl;
    }

}
int main() {
    int n;
    print(n);
   
}
