#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if (age >= 18) {
        cout<< "can vote"<< endl;
    } 
    if(age >= 35) {
        cout << "contest for elections " << endl;
    } else {
        cout << "CANNOT vote" <<endl;
    }
    return 0;
}






