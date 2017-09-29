/*
Justin Hollmer 9/25/17 - 3rd Period
Take_in_Data : 
Intro to the cin command and taking in data by asking user questions and storing answers and data.
*/

// Libraries
#include <iostream> // gives access to cin, cout, cndl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std; //*

//Functions()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	char Last_letter; // What is the last letter in the name of your favorite color?
	int Sibling_count; // How many siblings do you have?
	bool Sitting; // Are you sitting right now?
	double What_is_pi; // What is pi rounded to the nearest hundredth?


	cout << "What is the last letter in the name of your favorite color? Ex. e (Purple) ";
		
	cin >> Last_letter;

	cout << "How many siblings do you have? ";

	cin >> Sibling_count;

	cout << "Are you sitting right now? (1/0) (1=yes; 0=no) ";

	cin >> Sitting;

	cout << "What is pi rounded to the nearest hundredth place? ";

	cin >> What_is_pi;


	// Display Text

	cout << "The last letter of the name of your favorite color is " << Last_letter << "." << endl;

	cout << "You have " << Sibling_count << " siblings." << endl;

	cout << boolalpha << "It is " << Sitting << " that you are sitting." << endl;

	cout << "Pi rounded to the nearest hundredths place is " << What_is_pi << "." << endl;
		 





	pause();
}

