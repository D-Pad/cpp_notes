#include <iostream>
#include <iomanip>
using namespace std;


void PrecisionTest() {
 
    // Showpoint
    double beansInJar = 237.0;
    cout << "Beans in jar // double = 237.0" << endl;
    cout << setprecision(3) << beansInJar << endl;
    cout << setprecision(3) << showpoint << beansInJar << endl << endl;

    double miles = 17.342154;
    
    // Fixed point value output
    cout << "Miles driven // double = 17.342154" << endl;
    cout << "FIXED: " << fixed << miles << endl; 
    
    // Using 'setprecision' to control the number of decimal places shown
    cout << "SET PREC 1: " << setprecision(1) << miles << endl; 
    cout << "SET PREC 2: " << setprecision(2) << miles << endl; 
    cout << "SET PREC 4: " << setprecision(4) << miles << endl; 
    
    // Scientific notation
    cout << "SCIENTIFIC: " << scientific << miles << endl << endl;

    // Grid
    cout << setfill('-') << setw(30) << "" << endl;
    cout << setfill(' ');
    cout << setw(15) << left << "| Dog age" << "|";
    cout << setw(14) << right << "Human age |" << endl;
    cout << setfill('-') << setw(30) << "" << endl;
    cout << setfill(' ');
    cout << setw(15) << left << "| 2 months" << "|";
    cout << setw(14) << right << "14 months |" << endl;
    cout << setw(15) << left << "| 6 months" << "|";
    cout << setw(14) << right << "42 months |" << endl;
    
    cout << setfill('-') << setw(30) << "" << endl;
    cout << setfill(' ');

}


void FormattingExample() {

    PrecisionTest();

}


