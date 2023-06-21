#include <iostream>

using namespace std;

template <typename type>
type get_user_value() {
    type value;
    cin >> value;
    return value;
}

class Triangle
{
private:
    double base;
    double height;

public:
    Triangle(double base, double height) {
        if (check_value(base) || check_value(height)) {
            this->base = base;
            this->height = height;
        }
        else {
            print_error_msg();
        }
        
    }

    double calculate_area() {
        return 0.5 * base * height;
    }

private:
    bool check_value(double value) {
        return value > 0;
    }

    void print_error_msg() {
        cout << "You specified a negative value for Triangle!";
    }
};

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double length, double width) {
        if (check_value(length) || check_value(width)) {
            this->length = length;
            this->width = width;
        }            
        else {
            print_error_msg();
        }                   
    }

    double calculate_area() {
        return length * width;
    }

private:
    bool check_value(double value) {
        return value > 0;
    }

    void print_error_msg() {
        cout << "You specified a negative value for Rectangle!";
    }
};

class Rhombu
{
private:
    double diagonal_one;
    double diagonal_two;

public:
    Rhombu(double diagonal_one, double diagonal_two) {
        if (check_value(diagonal_one) || check_value(diagonal_two)) {
            this->diagonal_one = diagonal_one;
            this->diagonal_two = diagonal_two;
        }
        else {
            print_error_msg();
        }
        
    }

    double calculate_area() {
        return 0.5 * diagonal_one * diagonal_two;
    }

private:
    bool check_value(double value) {
        return value > 0;
    }

    void print_error_msg() {
        cout << "You specified a negative value for Rhombu!";
    }
};

int main()
{
    double triangle_base, triangle_height,
           rectangle_length, rectangle_width,
           rhombu_diagonal_one, rhombu_diagonal_two;

    cout << "Enter the base of the triangle: ";
    triangle_base = get_user_value<double>();
    cout << "Enter the height of the triangle: ";
    triangle_height = get_user_value<double>();

    cout << "Enter the length of the rectangle: ";
    rectangle_length = get_user_value<double>();
    cout << "Enter the width of the rectangle: ";
    rectangle_width = get_user_value<double>();

    cout << "Enter the lengths of the first diagonal of the rhombu: ";
    rhombu_diagonal_one = get_user_value<double>();
    cout << "Enter the lengths of the second diagonal of the rhombu: ";
    rhombu_diagonal_two = get_user_value<double>();

    Triangle triangle(triangle_base, triangle_height);
    Rectangle rectangle(rectangle_length, rectangle_width);
    Rhombu rhombu(rhombu_diagonal_one, rhombu_diagonal_two);

    double triangle_area = triangle.calculate_area();
    double rectangle_area = rectangle.calculate_area();
    double rhombu_area = rhombu.calculate_area();

    cout << "Triangle area: " << triangle_area << endl;
    cout << "Rectangle area: " << rectangle_area << endl;
    cout << "Rhombu area: " << rhombu_area << endl;

    return 0;
}