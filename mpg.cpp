#include <iostream>

int main() {
    // Variable declarations using double to preserve fractional values
    double gallons = 16.0;
    double miles = 312.0;
    double mpg = 0.0;

    // Perform calculation before printing
    mpg = miles / gallons;

    // Display labelled output with units
    std::cout << "Miles driven: " << miles << " miles" << std::endl;
    std::cout << "Gas consumed: " << gallons << " gallons" << std::endl;
    std::cout << "Fuel efficiency: " << mpg << " miles per gallon (MPG)" << std::endl;

    return 0;
}