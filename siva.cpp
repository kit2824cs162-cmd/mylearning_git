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
int main()
{
    A obj;
    obj.display();
    return 0;
}