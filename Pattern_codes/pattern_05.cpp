// * * * * * 
// * * * * 
// * * * 
// * * 
// * 
#include<iostream>

using namespace std;

void print1(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter a number how many times u need to print the pattern : ";
    cin>>n;
    print1(n);
}