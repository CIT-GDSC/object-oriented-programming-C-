#include <iostream>
using namespace std;
using std::string;




int main () {
    int a = 10;
    int *p = &a;
    cout << "a = " << a << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "&a = " << &a << endl;
    cout << "&p = " << &p << endl;
    return 0;
}