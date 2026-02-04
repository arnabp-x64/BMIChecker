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
	
	sleep_for(seconds(2));

	TypeWriter("Instructions:\n");
	cout << endl;
	sleep_for(seconds(1));
	TypeWriter("1. Type your Height in miters(If in other scale write hight and unit,like 5.1 ft)\n");
	sleep_for(seconds(1));
	TypeWriter("2. Type your Weight in Kilograms\n");
	sleep_for(seconds(1));
	TypeWriter("       - Press enter and see the magic...\n");
	cout << endl;
	cin.get();
	bool YN = true;

	long double height, weight, bmi;
	string Unit;
	

	while (YN) {

		
		TypeWriter("Enter your Height+Unit: ");
		cin >> height >> Unit;

		TypeWriter("Enter your Weight (in kilograms): ");
		cin >> weight;

		if (Unit == "cm" || Unit == "centimeters") {
			height = height / 100;
		}
		else if (Unit == "mm" || Unit == "millimeters") {
			height = height / 1000;
		}
		else if (Unit == "in" || Unit == "inches") {
			height = height * 0.0254;
		}
		else if (Unit == "ft" || Unit == "feet") {
			height = height * 0.3048;
		}
		else if (Unit == "yd" || Unit == "yards") {
			height = height * 0.9144;
		}



		bmi = weight / (height * height);

		string bmix = to_string(bmi);
		if (bmi < 18.5) {
			TypeWriter("\nYour BMI is " + bmix + ", you are underweight.\n");
		}
		else if (bmi >= 18.5 && bmi < 24.9) {
			TypeWriter("\nYour BMI is " + bmix + ", you have a normal weight.\n");
		}
		else if (bmi >= 25 && bmi < 29.9) {
			TypeWriter("\nYour BMI is " + bmix + ", you are overweight.\n");
		}
		else {
			TypeWriter("\nYour BMI is " + bmix + ", you are obese.\n");
		}

		cout << endl;

		TypeWriter("Do you want to calculate again? (y/n): ");
		char response;
		cin >> response;
		if (response == 'y' || response == 'Y') {
			YN = true;
			cout << endl;
		}
		else {
			YN = false;
			cout << endl;
			TypeWriter("Thank you for using BMIChecker. Goodbye!\n");
			cout << endl;
			cin.ignore();
			cin.clear();
			cin.get();
		}
	}

	return 0;
}

