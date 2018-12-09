//
//  main.cpp
//  characterSheet
//
//  Created by Nathan on 12/9/18.
//  Copyright © 2018 Nathan. All rights reserved.
//

#include <iostream>
#include <string>
#include "randomizer.hpp"
#include "DnDTemplate.hpp"

int main(int argc, const char * argv[]) {
    std::string userName;
    std::cout << "Hello..."  << userName << std::endl;
    std::cout << "Let's create a Dungeons and Dragons character. What is your character's name?" << std::endl;
    std::cin >> userName;
    
    DnDTemplate userCharacter;
    std::cout << "Strength: \t\n" << userCharacter.getStrength() << std::endl;
    std::cout << "Dexterity: \t\n" << userCharacter.getDexterity() << std::endl;
    std::cout << "Constitution: \t\n" << userCharacter.getConstitution() << std::endl;
    std::cout << "Intelligence: \t\n" << userCharacter.getIntelligence() << std::endl;
    std::cout << "Wisdom: \t\n" << userCharacter.getWisdom() << std::endl;
    std::cout << "Charisma: \t\n" << userCharacter.getCharisma() << std::endl;
    return 0;
}
