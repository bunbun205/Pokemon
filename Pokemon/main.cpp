#include <iostream>
#include <string>

int main() {
    std::string playerName;

    std::cout << "Enter your name: ";
    std::cin >> playerName;

    std::cout << "\nWelcome to the world of Pokémon, " << playerName << "! I am Professor Oak.\n";
    std::cout << "You can choose one of the following Pokémon:\n";
    std::cout << "1. Ivysaur\n2. Charmeleon\n3. Jigglypuff\n";
    std::cout << "Which Pokémon would you like to choose? Enter the number: ";

    int choice;
    std::cin >> choice;
    std::cout << std::endl;

    if (choice == 1) {
        std::cout << "You chose Ivysaur! A balanced and powerful choice, perfect for a strategic trainer.\n";
    } else if (choice == 2) {
        std::cout << "You chose Charmeleon! A fiery and bold choice, ready to blaze through battles.\n";
    } else if (choice == 3) {
        std::cout << "You chose Jigglypuff! A cute and charming choice, with a voice that can lull opponents to sleep.\n";
    } else {
        std::cout << "Invalid choice! Please restart the game.\n";
        return 0;
    }

    std::cout << "\nAh, an excellent choice!\n";
    std::cout << "But beware, Trainer,\n";
    std::cout << "this is only the beginning.\n";
    std::cout << "Your journey is about to unfold.\n";
    std::cout << "Now let’s see if you’ve got what it takes to keep going!\n";
    std::cout << "Good luck, and remember… Choose wisely!\n";

    return 0;
}

