using namespace std;
#include <iostream>

void printName() {
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Your name is " + name;
}

int main() {
    printName();

    return 0;
}

