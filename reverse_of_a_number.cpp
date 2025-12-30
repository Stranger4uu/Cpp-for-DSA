#include<iostream>

using namespace std;

int reverse(int n){
    int reverse_number = 0;
    while(n>0){
        int last_number = n % 10;
        reverse_number = (reverse_number * 10) + last_number;
        n = n / 10;
    }
    return reverse_number;
}

int main(){
    int n;
    cout<<"Enter numbers to reverse : ";
    cin>>n;
    cout<<"Reverse of numbers is : " << reverse(n) << endl;

}