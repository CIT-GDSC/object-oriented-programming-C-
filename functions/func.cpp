// score calculator

#include<iostream>
using namespace std;
using std::cout;
using std::endl;
using std::string;


int main () {
    // int credit_score;
    // cout << "enter yout credit score" << endl;
    // cin >> credit_score;

    // switch(credit_score){
    //     case(5000):
    //         cout << "your credit score is 1"<< endl;
    //         break;
    //     case(0):
    //         cout << "Your credit score is 0" << endl;
    //         break;
    //     case(10000):
    //         cout << "Your credit score is 2" << endl;
    //         break;
    //     case(15000):
    //         cout << "Your credit score is 3"<< endl;
    //         break;
    //     default: 
    //         cout<< " not applicable" << endl;
    //         break;
    // };

    int hours = 50;
    if( hours == 40){
        cout<< " full time" << endl;
    } else if(hours < 40){
        cout<<"part time" << endl;
    } else{
        cout << "overtime due" << endl;
    };


    return 0;
}