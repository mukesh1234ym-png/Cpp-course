#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, breadth;

public:
    // Constructor
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    // Function to calculate area
    float getArea() {
        return length * breadth;
    }

    // Function to calculate perimeter
    float getPerimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    float l, b;
    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter breadth of rectangle: ";
    cin >> b;

    Rectangle rect(l, b);

    cout << "Area of rectangle: " << rect.getArea() << endl;
    cout << "Perimeter of rectangle: " << rect.getPerimeter() << endl;

    return 0;
}
