// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
#include<bits/stdc++.h>

using namespace std;

void print(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<<num <<" ";
        num = num+1;
    }
    cout<<"\n";
}
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    print(n);

}