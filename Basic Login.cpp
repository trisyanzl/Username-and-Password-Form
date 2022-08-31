// Basic Login.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {

	string uname, usernamePassword, temp;		//declare a string variable to store username and password data
	int lengthUser, lengthPass;			//variable to store character length of username and password

	cout << "Account Login" << endl;						// input user data with no spaces allowed
	cout << "PLEASE FOR NO SPACES!!!" << endl << endl;

	cout << "Username : ";
	cin >> uname;

	cout << "Password : ";
	cin >> temp;

	//count the character length of the user's username and password
	lengthUser = uname.length();
	lengthPass = temp.length();
	usernamePassword = uname + temp;		// this variable will store username and password data into one package

	system("cls");

	cout << lengthUser << uname << lengthPass << temp << endl << endl;

	//function to print username
	// this for loop will count the number of characters for the username then print it for the number of characters < lengthUser.
	cout << "Your username	: ";
	for (int i = 0; i < (lengthUser); i++) {
		cout << usernamePassword[i];

		//if the number of characters for the username is met then the function will print the password.
		if (i == lengthUser - 1) {
			cout << "\nYour Password : ";
			/* in order for the for loop to stop, the number of characters for this password must be less than the number of characters 
			from the username and password because the string starts at 0*/
			for (int j = i; j < (lengthUser + lengthPass); j++) {
				/* because the characters for the username have already been printed, to print the password must be given + 1 so that it doesn't happen
				repeating characters in front of the password
				*/
				cout << usernamePassword[j + 1];
			}
		}
	}

	// so that the data is not saved then the variable will be declared to be 0 again or empty.
	usernamePassword = temp = "";
	lengthUser = lengthPass = 0;

	cout << endl << endl;

	system("Pause");
	return 0;
}
