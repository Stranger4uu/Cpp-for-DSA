#include<iostream>
using namespace std;

int count(int n){
    int count = 0;
    while(n>0){
        count = count + 1;
        n = n/10;

    };
    return count;
}
int main(){
    int a;
    cout<<"Enter digits u need to count : ";
    cin>>a;
    cout<<count(a);
    cout<<endl;
}