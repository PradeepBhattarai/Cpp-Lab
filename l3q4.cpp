#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
    float radius;

public:
    void readData()
    {
        cout << "Enter the radius of circle:";
        cin >> radius;
    }
    float findArea()
    {
        float area = M_PI * pow(radius, 2);
        return area;
    }
    float findPerimeter()
    {
        float perimeter = 2 * M_PI * radius;
        return perimeter;
    }
    void showData()
    {
        cout << "Area of Circle of radius " << radius << " = " << findArea() << endl;
        cout << "Perimeter of Circle of radius " << radius << " = " << findPerimeter() << endl;
    }
};
class Rectangle
{
private:
    float length, breadth;

public:
    void readData()
    {
        cout << "Enter the length and breadth :";
        cin >> length;
        cin >> breadth;
    }
    float findArea()
    {
        float area = length * breadth;
        return area;
    }
    float findPerimeter()
    {
        float perimeter = 2 * (length + breadth);
        return perimeter;
    }
    void showData()
    {
        cout << "Area of rectangle of dimension " << length << " X " << breadth << " = " << findArea() << endl;
        cout << "Perimeter of rectangle of dimension " << length << " X " << breadth << " = " << findPerimeter() << endl;
    }
};
class Triangle
{
private:
    float l1, l2, l3;

public:
    void readData()
    {
        cout << "Enter the length of sides of triangle:";
        cin >> l1>>l2>>l3;
    }
    float findArea()
    {
        float s = (l1 + l2 + l3) / 2;
        float area = sqrt(s * (s - l1) * (s - l2) * (s - l3));
        return area;
    }
    float findPerimeter()
    {
        float perimeter = l1 + l2 + l3;
        return perimeter;
    }
    void showData()
    {
        cout << "Area of triangle of sides " << l1 << ", " << l2 << " " << l3 << ", = " << findArea() << endl;
        cout << "Perimeter of triangle of sides " << l1 << ", " << l2 << ", " << l3 << " = " << findPerimeter() << endl;
    }
};

int main()
{
    Circle c1;
    Rectangle r1;
    Triangle t1;
    int choice;
    cout << "Choose For what object you want to find area and perimeter \n1.Circle\n2.Rectangle\n3.Triangle\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        c1.readData();
        c1.findArea();
        c1.findPerimeter();
        c1.showData();
        break;
    }
    case 2:
    {
        r1.readData();
        r1.findArea();
        r1.findPerimeter();
        r1.showData();
        break;
    }
    case 3:
    {
        t1.readData();
        t1.findArea();
        t1.findPerimeter();
        t1.showData();
        break;
    }

    default:
        cout << "Invalid Choice!\n";
        break;
    }
    return 0;
}