#include <iostream>
using namespace std;
using std::string;
using std::cout;
using std::endl;
/*
explain how the member functions can be accessed using pointers in c++
*/
class myClass{
    public:
        void myFunction(){
            cout << "Hello World\n";
        }

        void myFunction2(){
            cout << "Hello World 2";
        }
};

int main () {
   //create an object of myClass
   myClass myObj;
    //create a pointer to myClass
    myClass *myPointer = &myObj;
    myPointer-> myFunction();
    myPointer-> myFunction2();

    return 0;
}