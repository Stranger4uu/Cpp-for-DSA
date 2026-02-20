// A 
// B B 
// C C C 
// D D D D 
// E E E E E 

#include<bits/stdc++.h>

using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        char ch = 'A' + i;
        for(int j=0;j<=i;j++){

        cout<<ch<<" ";

    }
    cout<<endl;
}
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    print(n);
}