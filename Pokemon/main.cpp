#include <iostream>
#include <string>

enum class PokemonChoice {
    Ivysaur,
    Charmeleon,
    Jigglypuff,
    InvalidChoice
};

int main() {
    std::string playerName;

    std::cout << "Professor Oak: Hello there, young Trainer! Welcome to the world of Pokémon!\n";
    std::cout << "Professor Oak: First, tell me your name: ";
    std::cin >> playerName;

    std::cout << "Professor Oak: Ah, " << playerName << "! What a fantastic name!\n";
    std::cout << "Professor Oak: Now, you must choose your first Pokémon!\n\n";

    std::cout << "Professor Oak: Here are your choices:\n";
    std::cout << "1. Ivysaur - The grass type. Wise and balanced! 🍃\n";
    std::cout << "2. Charmeleon - The fire type. Bold and fiery! 🔥\n";
    std::cout << "3. Jigglypuff - The normal/fairy type. Cute and charming! 🎵\n";
    std::cout << "Enter the number corresponding to your choice: ";

    int input;
    std::cin >> input;

    PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice;

    switch (input) {
        case 1: chosen_pokemon = PokemonChoice::Ivysaur; break;
        case 2: chosen_pokemon = PokemonChoice::Charmeleon; break;
        case 3: chosen_pokemon = PokemonChoice::Jigglypuff; break;
        default:
            std::cout << "\nHmm, that’s not a valid choice. Don’t worry, I’ll pick one for you!\n";
            chosen_pokemon = PokemonChoice::Ivysaur;
            break;
    }

    std::cout << "\nProfessor Oak: That’s it, young Trainer!\n";
    std::cout << "You’ve made your choice: ";
    switch (chosen_pokemon) {
        case PokemonChoice::Ivysaur:
            std::cout << "Ivysaur! A wise and balanced companion! 🍃\n"; break;
        case PokemonChoice::Charmeleon:
            std::cout << "Charmeleon! A bold and fiery partner! 🔥\n"; break;
        case PokemonChoice::Jigglypuff:
            std::cout << "Jigglypuff! A cute and charming ally! 🎵\n"; break;
        default:
            std::cout << "Unknown Pokémon? That should never happen!\n"; break;
    }

    std::cout << "\nProfessor Oak: Now, take your first step into the vast world of Pokémon...\n";
    std::cout << "Who knows what mysteries await you?\n";
    std::cout << "Good luck, " << playerName << "! Your adventure begins now!\n";

    return 0;
}
