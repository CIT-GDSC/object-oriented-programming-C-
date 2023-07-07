// #include <iostream>
// using namespace std;
// using std::cout;
// using std::endl;
// using std::string;

// class Animal
// {
// public:
//     virtual void makeSound() = 0;
// };

// // derived class;
// class Dog : public Animal
// {
// public:
//     void makeSound() override
//     {
//         cout << "woof" << endl;
//     }
// };

// class Cat: public Animal {
//     public:
//         void makeSound() override{
//             cout << "meow" << endl;
//         }
// };
// int main()
// {
//     Animal* animal1 = new Dog();
//     Animal* animal2 = new Cat();

//     animal1->makeSound();
//     animal2->makeSound();

//     return 0;
// }

#include <iostream>
using namespace std;
using std::cout;
using std::endl;

class asking_for_promotion
{
    virtual void askPromotion() = 0;
};

class Employee : asking_for_promotion
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        this->Name = name;
    };
    // getter
    string getName()
    {
        return Name;
    };

    void setCompany(string company)
    {
        this->Company = company;
    };

    string getCompany()
    {
        return Company;
    };

    void setAge(int age)
    {
        // age > 18 ? this->Age = age : throw("validation error");
        this->Age = age;
    };

    int getAge()
    {
        return Age;
    }

    //constructor
    Employee( string name, string company, int age){
        this->Name = name;
        this->Company = company;
        this->Age = age;
    }
    void askPromotion (){
        if( Age >= 30)
            cout << "Congratulations you are legibe for promotion dear " << Name << endl;
                else cout<< "sorry, not eligible for promotion dear " << Name << endl;
    }
};

int main()
{
    Employee employee1 = Employee("Monica", "kplc", 25);
    Employee employee2 = Employee("ivy", "abno", 41);

    employee1.setAge(14);
    employee2.setAge(47);

    // cout << employee1.getName()<< "\tis\t" << employee1.getAge() << endl;
    // cout << employee2.getName()<< "\tis\t" << employee2.getAge() << endl;

    employee1.askPromotion();
    employee2.askPromotion();
    return 0;
}