#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    int score = 0;
    char playAgain;

    do {
        int r1 = std::rand() % 1000 + 1;
        int r2 = std::rand() % 1000 + 1;
        int r3 = std::rand() % 1000 + 1;
        int connectionType = std::rand() % 2;

        std::cout << "Resistor R1: " << r1 << " ohms\n";
        std::cout << "Resistor R2: " << r2 << " ohms\n";
        std::cout << "Resistor R3: " << r3 << " ohms\n";

        double correctResistance;
        if (connectionType == 0) {
            std::cout << "Connection: Series\n";
            correctResistance = static_cast<double>(r1 + r2 + r3);
        } else {
            std::cout << "Connection: Parallel\n";
            correctResistance = 1.0 / (1.0 / r1 + 1.0 / r2 + 1.0 / r3);
        }

        double userAnswer;
        std::cout << "Enter the total resistance: ";
        while (!(std::cin >> userAnswer)) {
            std::cout << "Invalid input. Please enter a number: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        if (std::abs(userAnswer - correctResistance) < 0.01) {
            std::cout << "Correct!\n";
            score++;
        } else {
            std::cout << "Incorrect. The correct answer was: " << correctResistance << " ohms\n";
        }

        std::cout << "Your current score: " << score << "\n";
        std::cout << "Play again? (y/n): ";
        std::cin >> playAgain;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thanks for playing! Final score: " << score << "\n";

    return 0;
}