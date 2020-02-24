//
//  calculate.cpp
//  Commute Calculator
//
//  Created by Apaulture on 2/24/20.
//  Copyright © 2020 Apaulture. All rights reserved.
//

#include "calculate.hpp"

bool processInput(std::string input)
{
    return (input == "imperial");
}

float calculateDailyCost(float distance, float cost, float efficiency)
{
    distance *= 2.0f; // round trip conversion
    float volumePerDistance = 1 / efficiency;
    
    return distance * volumePerDistance * cost;
}
