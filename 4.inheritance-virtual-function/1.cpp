/*
Create a class Figure with data members to represent a single and
appropriate function members to read member. Derive two classes square
and circle from class Figure. Define separate member function in each
derived class to calculate and display its corresponding area.
*/

#include <iostream>
using namespace std;

class Figure {
protected:
    double dimension;
public:
    void read() {
        cout << "Enter dimension: ";
        cin >> dimension;
    }
};

class Square : public Figure {
public:
    void Area() {
        double area = dimension * dimension;
        cout << "Area of square: " << area << endl;
    }
};

class Circle : public Figure {
public:
    void Area() {
        double area = 3.14 * dimension * dimension;
        cout << "Area of circle: " << area << endl;
    }
};

int main() {
    Square square;
    square.read();
    square.Area();
    
    Circle circle;
    circle.read();
    circle.Area();
    
    return 0;
}
/*
Enter dimension: 2
Area of square: 4
Enter dimension: 2
Area of circle: 12.56
*/



