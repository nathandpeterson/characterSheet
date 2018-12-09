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

int getRandom(int max);

int main(int argc, const char * argv[]) {
    std::string userName;
    int userNumber;
    std::cout << "What is your name?" << std::endl;
    std::cin >> userName;
    std::cout << "Hello "  << userName << std::endl;
    std::cout << "What is the max value for your random number?" << std::endl;
    std::cin >> userNumber;
    if( !userNumber )
    {
        std::cout << "Sorr, but that does not compute" << std::endl;
    } else
    {
        std::cout << "Here is a random number: " << getRandom(userNumber) << std::endl;
    }
    
    return 0;
}
