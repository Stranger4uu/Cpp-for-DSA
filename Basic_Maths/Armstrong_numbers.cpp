#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int dup = n;
    int sum = 0;
    while(n>0){
        int lastdigit = n%10;
        sum = sum + (lastdigit*lastdigit*lastdigit);
        n = n/10;
    }
    if(dup == sum){
        cout<<"It is an armstrong number";
    }
    else{
        cout<<"It is not an armstrong number";
    }
}