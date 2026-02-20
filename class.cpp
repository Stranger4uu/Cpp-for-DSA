
// class first
// {
//     public:
//         int a,b;
//         void name();
// };
// void first:: name() {
//     cout << "Yash" << "\n";
// }

// int main() {
//     first f1,f2;
//     f1.a = 10;
//     f2.b = 30;
//     cout<<f1.a<<"\n";
//     cout<<f2.b<<"\n";
//     f1.name();
// }

// create a class named item , data in public is name(string) and price (int) then create 2 function 
// 1st function named set to set value of name and price (outside the class)
// 2nd function named show to show the name and price ( inside the class)
// 3 objects will be used

// #include <iostream>
// #include <string>
// using namespace std;



// class item{
//     public:
//         string name;
//         int price;
//         void show(){
//             cout<<name;
//             cout<<endl; 
//             cout<<price<<"$";
//             cout<<endl; 
//         }
//         void set();
// };

// void item:: set(){
//     cout<<"Enter the product name : ";
//     cin>>name;
//     cout<<"Enter the product price : ";
//     cin>>price;
    
// }

// int main(){
//     item obj; 
//     obj.set();
//     obj.show(); 
//     return 0;
// }

#include<iostream>
using namespace std;

class first{
    private:
        int a;
    private:
        void get_a(){
            cout<<"Enter a number : ";
            cin>>a;
        }
    public:
        void show(){
            get_a();
            cout<<a;
        }
};

int main(){
    first f1;
    
    f1.show();

    return 0;

}

// if we want to use any private data or function , we need use public function to access it 

