#include <iostream>

int main(){
    double temp;
    char unit;
    std::cout << "\n***** Temperature conversion *****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n\n";
    std::cout << "What unit you would like to convert to: ";
    std::cin >> unit;
    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;
        temp = (temp * 1.8) + 32.0;
        std::cout << "Temperature is: " << temp << "F";
    }
    else if (unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = (temp - 32.0) / 1.8;
        std::cout << "Temperature is: " << temp << "C";
    } else {
        std::cout << "Please enter a valid unit";
    }
    std::cout << "\n**********************************\n";
    return 0;
}