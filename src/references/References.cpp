#include <iostream>
#include <iomanip>
using namespace std; 


void ComputeChange(
    int totCents,
    int& numDollars,
    int& numQuarters, 
    int& numDimes, 
    int& numNickles, 
    int& numPennies
) {
    int cents = totCents;
    numDollars = cents / 100;
    cents -= numDollars * 100;
    numQuarters = cents / 25;
    cents -= (numQuarters * 25);
    numDimes = cents / 10;
    cents -= numDimes * 10;
    numNickles = cents / 5;
    cents -= numNickles * 5;
    numPennies = cents;
}

void RefExample() {
    
    int userCents;
    int numDollars;
    int numQuarters;
    int numDimes;
    int numNickles;
    int numPennies;

    cout << "Enter total cents: ";
    cin >> userCents;

    // The function below will modify the reference variables that are passed
    // into it.
    ComputeChange(
        userCents, 
        numDollars, 
        numQuarters, 
        numDimes, 
        numNickles, 
        numPennies
    );

    cout << endl
         << "$" << fixed << setprecision(2) << userCents / 100.0 << endl 
         << "  Dollars : " << numDollars  << endl
         << "  Quarters: " << numQuarters << endl
         << "  Dimes   : " << numDimes    << endl
         << "  Nickles : " << numNickles  << endl
         << "  Pennies : " << numPennies  << endl;

    // If a reference variable is updated, the underlying value is also updated
    int numA = 30;
    int& numB = numA;
    numB += 5;
    
    cout << endl << "```" << endl 
         << " 1| int numA = 30;" << endl
         << " 2| int& numB = numA;" << endl
         << " 3| numB += 5;" << endl
         << " 4| cout << numA << endl;" << endl
         << "```" << endl
         << "Output == " << numA << endl;

}

