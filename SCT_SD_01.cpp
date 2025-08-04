#include <iostream>
using namespace std;
void convertTemperature(double value, char unit) {
    double celsius, fahrenheit, kelvin;
    if (unit == 'C' || unit == 'c') {
        celsius = value;
        fahrenheit = (value * 9 / 5) + 32;
        kelvin = value + 273.15;
    } else if (unit == 'F' || unit == 'f') {
        celsius = (value - 32) * 5 / 9;
        fahrenheit = value;
        kelvin = celsius + 273.15;
    } else if (unit == 'K' || unit == 'k') {
        kelvin = value;
        celsius = value - 273.15;
        fahrenheit = (celsius * 9 / 5) + 32;
    } else {
        cout << "Invalid unit. Use 'C', 'F', or 'K'." << endl;
        return;
    }
    cout << "Celsius: " << celsius << " °C" << endl;
    cout << "Fahrenheit: " << fahrenheit << " °F" << endl;
    cout << "Kelvin: " << kelvin << " K" << endl;
}
int main() {
    double temperature;
    char unit;
    cout << "Enter temperature value: ";
    cin >> temperature;
    cout << "Enter unit (C/F/K): ";
    cin >> unit;
    convertTemperature(temperature, unit);
    return 0;
}
