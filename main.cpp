#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <ios>

using namespace std;

double celsius_to_fahrenheit_converter(double temperature_in_celsius)
{
    // 9.0 instead of 9 to avoid integer division
    double temperature_in_fahrenheit = ((9.0 / 5) * temperature_in_celsius) + 32;
    return temperature_in_fahrenheit;
};

int main()
{

    double my_temperature = 0;
    cout << "Give the temperature of your choice in Celsius:!" << endl;
    cin >> my_temperature;
    cout << my_temperature << "˚C is " << celsius_to_fahrenheit_converter(my_temperature) << "˚F" << endl;
    return 0;
};
