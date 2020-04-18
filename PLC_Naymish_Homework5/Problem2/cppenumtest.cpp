#include<iostream>

using namespace std;

enum Numbers{
    ONE = 1,
    TWO = 2,
    THREE = 3,
    FOUR = 4,
};

enum Values {
    VALUE1 = 10,
    VALUE2 = 25,
    VALUE3 = 23,
    VALUE4 = 17,
    VALUE5 = 49,

};

int main() {
    cout<< (ONE + VALUE1) << endl;
    cout<< (THREE^VALUE3) << endl;
    cout<< (VALUE5 - FOUR) << endl; 
    cout<< (VALUE5 & FOUR) << endl; 
    cout<< (VALUE4 / THREE) << endl;
    cout<< (VALUE4 | THREE) << endl;  
    cout<< (TWO * VALUE3) << endl; 
    cout<< (TWO >> VALUE3) << endl;   
    cout<< (VALUE2 % FIVE) << endl;
    cout<< (VALUE2 << FIVE) << endl;

    return 0;
}