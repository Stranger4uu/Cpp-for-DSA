// *****
// *   *
// *   *
// *   *
// *****

#include<bits/stdc++.h>

using namespace std;

void print(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){


            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }

            else cout<<" ";
        }

      cout<<"\n";
    }
}


int main(){

    int n;
    cout<<"Eneter a number : ";
    cin>>n;

    print(n);
}