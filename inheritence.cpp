#include<iostream>
using namespace std;
class person
{
    public:
    char name;
    int age;
    void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }
};
class student:public person
{
    public:
    int roll;
    void getdata()
    {
        person::getdata();
        cout<<"Enter roll number: ";
        cin>>roll;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll number: "<<roll<<endl;
    }
};
class teacher:public person
{
    public:
    char subject;
    void getdata()
    {
        person::getdata();
        cout<<"Enter subject: ";
        cin>>subject;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
};
int main()
{
    student s;
    teacher t;
    cout<<"Enter student details:"<<endl;
    s.getdata();
    cout<<"Enter teacher details:"<<endl;
    t.getdata();
    cout<<"Student details:"<<endl;
    s.display();
    cout<<"Teacher details:"<<endl;
    t.display();
    return 0;
}
