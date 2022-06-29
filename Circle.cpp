#include<iostream>
#include<math.h>
using namespace std;

class Circle {
    public:
        int radius;
};

int getArea() {
    int area;
    int radius;

    cout << "Enter the radius of your circle: ";
    cin >> radius;

    area = radius * 2 * M_PI;

    cout << endl;
    cout << "Your area is: " << area;

    return 0;
}

int main() {
    getArea();
}