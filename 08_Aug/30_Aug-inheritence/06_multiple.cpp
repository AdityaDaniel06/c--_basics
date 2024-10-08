#include <iostream>
using namespace std;

class Sbi
{
public:
    Sbi()
    {
        cout << "Sbi constructor" << endl;
    }
    ~Sbi()
    {
        cout << "Sbi destructor" << endl;
    }
};

class Axis
{
public:
    Axis()
    {
        cout << "Axis constructor" << endl;
    }
    ~Axis()
    {
        cout << "Axis destructor" << endl;
    }
};

class Customer : public Axis, public Sbi
// order of memory allocation Axis-- Sbi--Customer
//  order of memory deletion Customer--> Sbi--> AXis
{
public:
    Customer()
    {
        cout << "Customer constructor" << endl;
    }
    ~Customer()
    {
        cout << "Customer destructor" << endl;
    }
};

int main()
{
    Customer c;
    return 0;
}