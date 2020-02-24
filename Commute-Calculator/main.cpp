//
//  main.cpp
//  Commute Calculator
//
//  Created by Apaulture on 2/24/20.
//  Copyright © 2020 Apaulture. All rights reserved.
//

#include "io.hpp"
#include "calculate.hpp"
#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "- - - Commute Calculator - - -\n";
    std::cout << "This program calculates your daily, monthly, yearly cost of commute and weighs it with your annual income.\n\n";
    std::cout << "Would you like to use imperial or metric units?";
    
    std::string distanceUnits();
    std::string volumeUnits();
    
    if (processInput(getInput()))
    {
        std::cout << "Imperial units, got it.\n\n";
        // distanceUnits = "miles";
        // volumeUnits = "gallons";
    }
    else
    {
        std::cout << "Metric units, got it.\n\n";
        // distanceUnits = "km";
        // volumeUnits = "liters";
    }
    
    std::cout << "Enter distance to work: ";
    float distance(getNumericInput());
    
    std::cout << "Gas cost in dollars: ";
    float cost(getNumericInput());
    
    std::cout << "Enter your vehicle's fuel efficiency: ";
    float efficiency(getNumericInput());
    
    std::cout << "What is your annual salary?";
    float salary(getNumericInput());
    
    float dailyCost(calculateDailyCost(distance, cost, efficiency));
    float yearlyCost(dailyCost * 365.25f);
    float commuteCost((yearlyCost / salary) * 100.0f);
    
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "\nTotal distance driven: \t" << distance * 2.0f << ' ' << distanceUnits;
    std::cout << "\nCost per gallon: \t\t$" << cost;
    std::cout << "\nVehicle efficiency: \t" << efficiency << ' ' << distanceUnits << '/' << volumeUnits;
    std::cout << "\n-------------------------------------\n";
    std::cout << "Daily cost: \t\t\t$" << dailyCost << '\n';
    std::cout << "Monthly cost: \t\t\t$" << dailyCost * 365.25f / 12.0f << '\n';
    std::cout << "Yearly cost: \t\t\t$" << yearlyCost;
    std::cout << "\n-------------------------------------\n";
    std::cout << "Your commute makes up " << commuteCost << "% of your salary.\n";
    
    if (commuteCost >= 4.0f)
    {
        std::cout << "! Consider purchasing a hybrid or an EV, or moving closer.\n";
    }
    else if (commuteCost >= 3.0f)
    {
        std::cout << "! Corolla gang rise up.\n";
    }
    else if (commuteCost >= 1.0f)
    {
        std::cout << "! TSLA stonksssss.\n";
    }
    
    return 0;
}
