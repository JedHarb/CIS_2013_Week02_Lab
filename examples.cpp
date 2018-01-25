#include<iostream>
using namespace std;

int main()	//int is the return type of our function. void specifically will not return anything when it is done.
{
	int room_length = 6;	//Declaring a variable called "a" and setting it equal to 5. The type of variable is called "int" (integer).
	int room_width = 5;
	float room_radius = 10.0;
	float room_circle_area = (room_radius * room_radius) * 3.14;
	bool keep_running = true;
	char question = 'y';

	while (keep_running) {

		cout << "Enter the room length: ";
		cin >> room_length;
		cout << "Enter the room width: ";
		cin >> room_width;

		cout << "The room length is " << room_length << "\n"; //Print this text plus whatever variable "a" is equal to.
		cout << "The room width is " << room_width << "\n";

		if (room_length == room_width)
		{
			cout << "Length and Width are the same." << "\n";
		}
		else
		{
			cout << "Length and Width are NOT the same. ";
			if (room_length > room_width)
			{
				cout << "The Length is greater than the Width." << "\n";
			}
			else
			{
				cout << "The Width is greater than the Legnth." << "\n";
			}
		}
		cout << "Run again? (y/n): ";
		cin >> question;

		if (question != 'y') { keep_running = false; }
	}

	// Finding the area of our room by multiplying length times width
	cout << "If you multiply them together, you get " << room_length * room_width << "\n";
	// Find the area of our room if it is a circle
	cout << "Unless your room's a circle, then it would be " << room_circle_area << "\n";
	return 0; //The code will run without this line, but it is good practice to include a return at the end of code.
}