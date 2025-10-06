#include <iostream>

int main() {

    std::string playerName;

    std::cout << "Enter your name: ";
    std::cin >> playerName;

    std::cout << "Welcome to the world of Pokémon " << playerName << "! I am Professor Oak.\n";
    std::cout << "You can choose one of the following Pokémon:\n";
    std::cout << "1. Ivysaur\n2. Charmeleon\n3. Jigglypuff\n";
    std::cout << "Which Pokémon would you like to choose? Enter the number: ";

    int choice;
    std::cin >> choice;

    if (choice == 1) std::cout << "You chose Ivysaur!\n";
    else if (choice == 2) std::cout << "You chose Charmeleon!\n";
    else if (choice == 3) std::cout << "You chose Jigglypuff!\n";
    else std::cout << "Invalid choice! Restart the game\n";

    return 0;
}
