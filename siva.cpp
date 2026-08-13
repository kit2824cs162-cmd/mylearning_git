#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"Hello World";
    }
};
class B : public A
{
    public:
    void display()
    {
        cout<<"Hello World from class B";
    }
};
class C : public B
{
    public:
    void display()
    {
        cout<<"Hello World from class C";
        cout<<"it is inheritance";
    }
};
int main()
{
    C obj;
    obj.display();
    return 0;
}