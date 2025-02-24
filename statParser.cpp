#include <iostream>
#include <vector>
#include "parser.h" // my own header file; will include them

int main()
{
    int hours;
    int minutes;
    int seconds;
    char stat;
    float delay;
    long perTick;
    std::string perTickAbb;

    std::cout << "Hours: ";
    std::cin >> hours;

    std::cout << "Minutes: ";
    std::cin >> minutes;

    std::cout << "Seconds: ";
    std::cin >> seconds;

    std::cout << "\nPsychic - 1\nBody Toughness - 2\nFist Strength - 3" << std::endl;
    std::cin >> stat;

    std::cout << "\nPer Tick: ";
    std::cin >> perTickAbb;

    perTick = parse(perTickAbb);
    // if you want to use this without my parser, uncomment the following line:
    // perTick = std::stol(perTickAbb);

    switch (stat)
    {
        case '1':
            delay = 1.5;
            break;
        case '2':
            delay = 1.25;
            break;
        case '3':
            delay = 1;
            break;
    }

    int answer = (hours * 3600) + minutes + (seconds / 60);
    // answer is now the total minutes spent training

    answer *= (delay * 60);

    answer *= (perTick * 60);

    std::cout << answer << std::endl;
    return 0;
}
