#include <iostream>
#include <iomanip>
using namespace std;


string BoolTest(char input_val, char id, string fn) {
        
    bool cond;
        
    if (fn == "isalpha") {
        cond = isalpha(input_val);
    }
    else if (fn == "isdigit") {
        cond = isdigit(input_val);
    }
    else if (fn == "isspace") {
        cond = isspace(input_val);
    }

    if (cond) {
        return " true";
    }
    else {
        return " false";
    }

}


void CharOperations() {

    char x = 'a';
    char y = '1';
    char s = ' ';

    cout << "~~ Character Functions ~~" << endl;

    // Table setup
    cout << "+" << setfill('-') << setw(5) << "" << "+" 
         << setw(12) << "" << "+" 
         << setw(12) << "" << "+" 
         << setw(12) << "" << "+" 
         << endl;
    
    cout << setfill('#') << left;
    cout << "|" << setw(5) << ""
         << setfill(' ')
         << "|" << setw(12) << " isalpha()"
         << "|" << setw(12) << " isdigit()"
         << "|" << setw(12) << " isspace()" << "|" << endl;
    
    cout << "+" << setfill('-') << setw(5) << "" << "+" 
         << setw(12) << "" << "+" 
         << setw(12) << "" << "+" 
         << setw(12) << "" << "+" 
         << setfill(' ')
         << endl;

    cout << "| '" << x << "' "
         << setfill(' ')
         << "|" << setw(12) << BoolTest(x, 'x', "isalpha")
         << "|" << setw(12) << BoolTest(x, 'x', "isdigit")
         << "|" << setw(12) << BoolTest(x, 'x', "isspace") << "|" << endl;
    
    cout << "| '" << y << "' "
         << setfill(' ')
         << "|" << setw(12) << BoolTest(y, 'y', "isalpha")
         << "|" << setw(12) << BoolTest(y, 'y', "isdigit")
         << "|" << setw(12) << BoolTest(y, 'y', "isspace") << "|" << endl;
    
    cout << "| '" << s << "' "
         << setfill(' ')
         << "|" << setw(12) << BoolTest(s, 's', "isalpha")
         << "|" << setw(12) << BoolTest(s, 's', "isdigit")
         << "|" << setw(12) << BoolTest(s, 's', "isspace") << "|" << endl;
    
    cout << "+" << setfill('-') << setw(5) << "" << "+" 
         << setw(12) << "" << "+" 
         << setw(12) << "" << "+" 
         << setw(12) << "" << "+" 
         << setfill(' ')
         << endl;

    char upperA = toupper(x);
    char upperB = 'B';
    char lowerB = tolower(upperB);
    cout << endl 
         << "toupper('" << x << "') = " << upperA << endl
         << "tolower('" << upperB << "') = " << lowerB << endl;

}


