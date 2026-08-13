#include<iostream>
using namespace std;
class Student
{
    public:
    void display()
    {
        cout<<"Hello World";
    }
};

class Graduate : public Student
{
    public:
    void display()
    {
        cout<<"Hello World from class Graduate";
        cout<<"it is writting for siva";
    }
};

int main()
{
    Student obj;
    obj.display();
    return 0;
}