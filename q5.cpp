/*Create any base class as per your wish and extend that into other derived class. You should be able to
understand the calling order or default constructors, parameterised constructors and destructors of all
the classes. You should implement hybrid inheritance in this example.*/
#include <iostream>
using namespace std;
class base
{
public:
int x;
};
class num1: public base
{
public:
num1()
{
x = 10;
}
};
class num2
{
public:
int y;
num2()
{
y = 3;
}
};
class num3: public num1, public num2
{
public:
void sum()
{
cout << "Sum = " << x + y;
}
};
int main()
{
    num3 obj1;
    obj1.sum();
    return 0;

}
