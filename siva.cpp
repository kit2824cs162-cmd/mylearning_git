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
class D : public C
{
    public:
    void display()
    {
        cout<<"Hello World from class D";
        cout<<"it is inheritance";
    }
};
class E : public D
{
    public:
    void display()
    {
        cout<<"Hello World from class E";
        cout<<"it is inheritance";
    }
};
int main()
{
    E obj;
    obj.display();
    return 0;
}