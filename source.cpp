#include <iostream>
using std::string;

class Employee
{
public:
    string Name;
    string Company;
    int Age;
    
    void introduce_yourself (){
        std::cout << "Name\t" << Name << std::endl;
        std::cout << "company\t" << Company << std::endl;
        std::cout << "Age\t" << Age << std::endl;
    }
    //constructor 
    Employee(string name, string company,  int age){
        Name = name;
        Company = company;
        Age= age;
    }
};

int main()
{
    Employee employee1 = Employee("Alpha", "domains18", 54);
    employee1.introduce_yourself();

    Employee employee2 = Employee("beta", "domains21", 24);
    employee2.introduce_yourself();
}
