//
//  DnDTemplate.cpp
//  characterSheet
//
//  Created by Nathan on 12/9/18.
//  Copyright © 2018 Nathan. All rights reserved.
//

#include "DnDTemplate.hpp"
#include <string>

DnDTemplate::DnDTemplate()
{
    this->strength = getRandom(20, 1);
    this->dexterity = getRandom(20, 2);
    this->constitution = getRandom(20, 3);
    this->intelligence = getRandom(20, 4);
    this->wisdom = getRandom(20, 5);
    this->charisma = getRandom(20, 6);
}

int DnDTemplate::getStrength()
{
    return this->strength;
}

int DnDTemplate::getDexterity()
{
    return this->dexterity;
}

int DnDTemplate::getConstitution()
{
    return this->constitution;
}

int DnDTemplate::getIntelligence()
{
    return this->intelligence;
}

int DnDTemplate::getWisdom()
{
    return this->wisdom;
}

int DnDTemplate::getCharisma()
{
    return this->charisma;
}


