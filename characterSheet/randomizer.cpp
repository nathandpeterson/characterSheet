//
//  randomizer.cpp
//  characterSheet
//
//  Created by Nathan on 12/9/18.
//  Copyright © 2018 Nathan. All rights reserved.
//

#include "randomizer.hpp"
#include <cstdlib>
#include <time.h>

int getRandom(int max)
{
    int randomNumber;
    // Add a seed value for the randomizer.
    srand( static_cast<unsigned int> (time(NULL)));
    randomNumber = rand() % max + 1;
    return randomNumber;
}
