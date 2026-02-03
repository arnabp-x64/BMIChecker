// BMIChecker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

# include <iostream>
#include <chrono>
#include <thread>
# include <iomanip>

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;


void TypeWriter(const string text, int delay=30) {
    for (char c : text) {
        cout << c << flush;
        sleep_for(milliseconds(delay));
    }
}


int main(){

    TypeWriter("=============================");
    cout << endl << setw(4);
    TypeWriter("Welcome to BMIChecker");
    cout << endl;
    TypeWriter("=============================");
    cout << endl << endl;

    TypeWriter("Instructions:\n");
    TypeWriter("1. Type your Age \n");
    TypeWriter("2. Type your Height in miters\n");
    TypeWriter("3. Type your Weight in Kilograms\n");



    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
