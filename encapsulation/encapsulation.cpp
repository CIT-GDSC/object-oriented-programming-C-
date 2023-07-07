#include <iostream>
using namespace std;
using std::cout;
using std::endl;
using std::string;

// encapsulation is the process of making the fields in a class private and providing access to the fields via public methods
// this way the implementation details of the class can be hidden from the user
class Employee
{
public:
    string Name;
    string Company;
    int Age;

public:
    void introduce_yourself()
    {
        cout << "Name\t" << Name << endl;
        cout << " company\t" << Company << endl;
        cout << "age\t" << Age << endl;
    }
    //comstructor
    Employee( string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{
    Employee employee1 = Employee("Martin", "marvel",  24);
    employee1.introduce_yourself();
}