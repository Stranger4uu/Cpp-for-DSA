//     A    
//    ABA   
//   ABCBA  
//  ABCDCBA 
// ABCDEDCBA

#include<iostream>

using namespace std;


void print(int n){
    for(int i=0;i<n;i++){

        for(int j = 0; j<n-i-1; j++){
        cout<<" ";
        }

        char ch='A';
        int breakpoint=(2*i+1)/2;

        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;

        }

        for(int j = 0; j<n-i-1; j++){
            cout<<" ";

        
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