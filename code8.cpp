#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "enter a : ";
    cin >> a;

    cout << "enter b : ";
    cin >> b;

    cout << "enter operator : ";
    cin >> op;



    //Switch
    switch (op)  
    {
    case '+': cout<< "a + b = " << (a + b) << endl;
        break;

    case '-': cout<< "a - b = " << (a - b) << endl;
        break;

    case '*': cout<< "a * b = " << (a * b) << endl;
        break;

    case '/': cout<< "a / b = " << (a / b) << endl;
        break;
    
    default: cout<< "Invalid OPerator "<< endl;
    
    }

    return 0;
}
    
