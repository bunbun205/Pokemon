#include <iostream>
#include <string>

int main() {
    std::string playerName;

    std::cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
    std::cout << "Professor Oak: My name is Oak. People call me the Pokemon "
                 "Professor!\n";
    std::cout << "Professor Oak: But enough about me. Let's talk about you!\n";

    std::cout << "Professor Oak: First, tell me, what’s your name?\n";
    std::cin >> playerName;

    std::cout << "Professor Oak: Ah, " << playerName
              << "! What a fantastic name!\n";
    std::cout << "Professor Oak: You must be eager to start your adventure. But "
                 "first, you’ll need a Pokemon of your own!\n";

    std::cout << "Professor Oak: I have three Pokemon here with me. They’re all "
                 "quite feisty!\n";
    std::cout << "Professor Oak: Choose wisely...\n";
    std::cout << "1. Ivysaur - The grass/poison type. Balanced and strategic!\n";
    std::cout << "2. Charmeleon - The fire type. Bold and fiery!\n";
    std::cout << "3. Jigglypuff - The normal/fairy type. Cute and charming!\n";

    int choice;
    std::string chosenPokemon;
    std::cin >> choice;
    std::cout << std::endl;

    switch (choice) {
    case 1:
        std::cout << "You chose Ivysaur! A balanced and powerful choice, perfect for a strategic trainer.\n";
        chosenPokemon = "Ivysaur";
        break;
    case 2:
        std::cout << "You chose Charmeleon! A fiery and bold choice, ready to blaze through battles.\n";
        chosenPokemon = "Charmeleon";
        break;
    case 3:
        std::cout << "You chose Jigglypuff! A cute and charming choice, with a voice that can lull opponents to sleep.\n";
        chosenPokemon = "Jigglypuff";
        break;
    default:
        std::cout << "Hmm, that doesn't seem right. Let me choose for you...\n";
        chosenPokemon = "Pikachu";
        std::cout << "Just kidding! Let's go with Pikachu, the surprise guest!\n";
        break;
    }

    std::cout << "\nNow, young Trainer, \n";
    std::cout << "let’s see if you can make this code flawless.\n";
    std::cout << "Switch statements are the way of the future!\n";

    return 0;
}

