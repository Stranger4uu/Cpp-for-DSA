#include<iostream>

using namespace std;

class student{
    public:
        int roll_no;
        int reg_no;
        string name;
    void display(){
        cout<<roll_no<<endl;
        cout<<reg_no<<endl;
        cout<<name<<endl;
    }
    void get_data();
};

void student:: get_data(){
    cout<<"Enter roll no. : ";
    cin>>roll_no;
    cout<<"Enter reg no. : ";
    cin>>reg_no;
    cout<<"Enter name : ";
    cin>>name;
}

class marks{
    public:
        int marks1;
        int marks2;
    void get_marks();
    void show();
    void average(){
       int avg = (marks1 + marks2)/2;
       cout<<"Your average is : "<<avg;
    }
};

void marks:: get_marks(){
    cout<<"Enter mark 1 : ";
    cin>>marks1;
    cout<<"Enter mark 2 : ";
    cin>>marks2;
}
void marks:: show(){
    cout<<marks1<<endl;
    cout<<marks2<<endl;
}

int main(){
    student obj;
    marks obj2;
    obj.get_data();
    obj2.get_marks();
    obj.display();    
    obj2.show();
    obj2.average();

    return 0;
}
