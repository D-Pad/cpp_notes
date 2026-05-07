#include <iostream>
#include <string>
using namespace std;


void WhileLoopTest() {

    const int MAX_COUNT = 20;
    int count = 0;
   
    // Fizz Buzz while loop
    while (count < MAX_COUNT) {
        count++;
        if (count % 3 == 0) {
            cout << "FIZZ";
        }
        if (count % 5 == 0) {
            cout << "BUZZ";
        }
        cout << " " << count << endl; 
    }

    // Looping through a string of text with while loops
    string sentence = "The brown dogs jumps over the orange cone";
    
    while (sentence.find("jumps") != string::npos) {
        
        int i = sentence.find("jumps");
        sentence.replace(i, 5, "flies");
        cout << sentence << endl;
    
    }

}

void ForLoopTest() {

    // -------- Integer for loops --------- //
    int i;

    // Count up 
    for (i = 0; i < 10; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // Count down
    for (i = 5; i > 0; --i) {
        cout << i << " ";
    }
    cout << endl;

    // Count by 2
    for (i = 0; i < 10; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    // ----------- Loop through string ------------ //
    string hw = "hello world!";
    for (char c : hw) {
        char upper = toupper(c);
        cout << upper; 
    }
    cout << endl;

    // ---------- Loop through arrays ----------- //
    string myMains[3] = {"Reinhardt", "Junkrat", "Ana"};
    for (string name : myMains) {
        cout << "I play " << name << " a lot" << endl; 
    }

}

