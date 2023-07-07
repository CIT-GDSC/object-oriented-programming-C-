#include <iostream>
using namespace std;
using std::cout;
using std::endl;
using std::string;

// encapsulation is the process of making the fields in a class private and providing access to the fields via public methods
// this way the implementation details of the class can be hidden from the user
class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name){
        this->Name = name;
    };
    //getter
    string getName(){
        return Name;
    };

    void setCompany( string company){
        this->Company = company;
    };

    string getCompany(){
        return Company;
    };

    void setAge( int age){ 
        // age > 18 ? this->Age = age : throw("validation error");
        if(age!= 18){
            cout << "age has to be greater than 18";
        } else{
            this->Age = age;
        }
    };

    int getAge(){
        return Age;
    }


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
    Employee employee1 = Employee("Martin", "marvel",  0);
    Employee employee2 = Employee("console", "javascript",  0);
    // employee1.introduce_yourself();
    

    //tests the setters
    employee1.setAge(4);
    cout << employee1.getName()<<"\t"<< "is\t"<< employee1.getAge() << endl;
    employee2.setAge(10);
    cout << employee2.getName()<<"\t"<< "is\t"<< employee2.getAge() << endl;
}