// recursion codes 
/*
#include<iostream>

using namespace std;

int cnt = 0;
void print(){
    if(cnt == 3)return;
    cout<<cnt<<endl;
    cnt++;
    print();
}
int main(){
    print();
}

*/

// #include<iostream>
// using namespace std;

// int cnt = 0;
// void print(){
//     if (cnt==5)return;
//     cout<<"Yash"<<endl;
//     cnt++;
//     print();
// }

// int main (){
//     print();
// }

// Or

// Print Name n times 

// #include<iostream>
// using namespace std;


// void f(int i,int n){
//     if(i>n)return;
//     cout<<"YASH"<<endl;
//     f(i+1,n);
// }

// int main (){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     f(1,n);
// }

// Print (1-N)

// #include<iostream>
// using namespace std; 

// void f(int i, int n){
//     if(i>n)return;
//     cout<<i<<endl;
//     f(i+1,n);
// }

// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     f(1,n);
// }

// Print in terms on (N-1)

// #include<iostream>
// using namespace std;

// void f(int i, int n){
//     if(i<1)return;
//     cout<<i<<endl;
//     f(i-1,n);
// }

// int main (){
//     int n;
//     cout<<"Enter a number :";
//     cin>>n;
//     f(n,n);
// }


