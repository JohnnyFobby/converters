#include <iostream>

int main()
{
    std::cout << "welcome to the all-in-one converter!!" << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    int user_pick{};
    const int option_1{ 1 };
    const int option_2{ 2 };
    const int option_3{ 3 };
    float convert{};

    std::cout << "Which converter would you like to use first? \n1) Km to miles\n2) Celsius to Fahrenheit\n3) kph to mph" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    std::cin >> user_pick;
    
    switch (user_pick)
    {
    case 1:
        std::cout << "Enter the number you would like to convert from km to miles: ";
        std::cin >> convert;
        convert = convert * 0.6213711922;
        std::cout << "km to miles equals: " << convert << std::endl;
        break;

    case 2:
        std::cout << "Enter the number you would like to convert from Celsius to Fahrenheit: ";
        std::cin >> convert;
        convert = (convert * 9 / 5) + 32;
        std::cout << "Celsius to Fahrenheit equals: " << convert << std::endl;
        break;

    case 3:
        std::cout << "Enter the number you would like to convert from kph to mph: ";
        std::cin >> convert;
        convert = convert / 1.609344;
        std::cout << "kph to mph equals: " << convert << std::endl;
        break;

    default:
        std::cout << "Sorry you did not enter a valid number :(" << std::endl;
        break;
    }

    return 0;
}