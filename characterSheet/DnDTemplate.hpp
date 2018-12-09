//
//  DnDTemplate.hpp
//  characterSheet
//
//  Created by Nathan on 12/9/18.
//  Copyright © 2018 Nathan. All rights reserved.
//

#ifndef DnDTemplate_hpp
#define DnDTemplate_hpp

#include <stdio.h>
#include "randomizer.hpp"

class DnDTemplate
{
public:
    DnDTemplate();
    int getStrength();
    int getDexterity();
    int getConstitution();
    int getIntelligence();
    int getWisdom();
    int getCharisma();
    
private:
    int strength;
    int dexterity;
    int constitution;
    int intelligence;
    int wisdom;
    int charisma;
};

#endif /* DnDTemplate_hpp */
