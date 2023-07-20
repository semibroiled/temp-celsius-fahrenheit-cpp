#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <ios>

using namespace std;

double area_of_hexagon(double side)
{
    double area = (1.5 * sqrt(3)) * pow(side,2);
    return area;
};

int main()
{

    double my_side = 0;

    cout << "Give the length of your regular hexagon" << endl;
    cin >> my_side;
    cout << "The area of you hexagon is " << area_of_hexagon(my_side) << endl;
    return 0;
};