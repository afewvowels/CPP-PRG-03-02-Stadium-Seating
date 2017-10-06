//
//  main.cpp
//  PRG-3-2-Stadium-Seating
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  There are three seating categories at a stadium. For a softball game, Class A seats cost
//  $15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
//  many tickets for each class of seats were sold, then displays the amount of income generated
//  from ticket sales. Format your dollar amount in fixed-point notation, with two
//  decimal places of precision, and be sure the decimal is always displayed.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Declare int seat numbers, will cast as floats later
    int intSeatsSoldClassA,
    intSeatsSoldClassB,
    intSeatsSoldClassC;
    
    //Declare ints for calculating revenue, will force decimal later
    int intSeatRevenueClassA,
    intSeatRevenueClassB,
    intSeatRevenueClassC,
    intSeatRevenueTotal;
    
    //Delare and initialize seat prices since they're fixed (no user inputs here)
    //Will type-cast as floats later
    int intSeatCostClassA = 15,
    intSeatCostClassB = 12,
    intSeatCostClassC = 9;
    
    //Get total number of seats sold from user inputs + data validation
    cout << "How many Class A seat tickets were sold?\n";
    cin >> intSeatsSoldClassA;
    while(!cin || intSeatsSoldClassA < 0 || intSeatsSoldClassA > 10000)
    {
        cout << "Please enter a value between 0 and 10,000 seats.\n";
        cin.clear();
        cin.ignore();
        cin >> intSeatsSoldClassA;
    }
    
    cout << "How many Class B seat tickets were sold?\n";
    cin >> intSeatsSoldClassB;
    while(!cin || intSeatsSoldClassB < 0 || intSeatsSoldClassB > 10000)
    {
        cout << "Please enter a value between 0 and 10,000 seats.\n";
        cin.clear();
        cin.ignore();
        cin >> intSeatsSoldClassB;
    }
    
    cout << "How many Class C seat tickets were sold?\n";
    cin >> intSeatsSoldClassC;
    while(!cin || intSeatsSoldClassC < 0 || intSeatsSoldClassC > 10000)
    {
        cout << "Please enter a value between 0 and 10,000 seats.\n";
        cin.clear();
        cin.ignore();
        cin >> intSeatsSoldClassC;
    }
    
    //Calculate revenue generated from ticket sales
    intSeatRevenueClassA = intSeatsSoldClassA * intSeatCostClassA;
    intSeatRevenueClassB = intSeatsSoldClassB * intSeatCostClassB;
    intSeatRevenueClassC = intSeatsSoldClassC * intSeatCostClassC;
    
    //Calculate total seat income
    intSeatRevenueTotal = intSeatRevenueClassA + intSeatRevenueClassB
    + intSeatRevenueClassC;
    
    // Configure decimal for dollar amount display
    cout << setprecision(2) << fixed << showpoint;
    
    // Display seat revenue to user
    cout << "Revenue for Class A seats was: " << endl;
    cout << "$" << static_cast<float>(intSeatRevenueClassA) << endl;
    
    cout << "Revenue for Class B seats was: " << endl;
    cout << "$" << static_cast<float>(intSeatRevenueClassB) << endl;
    
    cout << "Revenue for Class C seats was: " << endl;
    cout << "$" << static_cast<float>(intSeatRevenueClassC) << endl;
    
    cout << "Revenue for all seats was: " << endl;
    cout << "$" << static_cast<float>(intSeatRevenueTotal) << endl;
    
    return 0;
}


