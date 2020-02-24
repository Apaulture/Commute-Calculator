//
//  io.cpp
//  Commute Calculator
//
//  Created by Apaulture on 2/24/20.
//  Copyright © 2020 Apaulture. All rights reserved.
//

#include "io.hpp"
#include <iostream>

float getNumericInput()
{
    float input;
    std::cout << "\n> ";
    std::cin >> input;
    
    return input;
}

std::string getInput()
{
    std::string input;
    std::cout << "\n> ";
    std::cin >> input;
    
    return input;
}
