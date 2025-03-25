// Vd7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string> // Include string library
using namespace std;

int main() {
	 string name = "Alice";
	 cout << "Original: " << name << endl;
	
	      name.append(" Wonderland"); // Append text
	 cout << "Updated: " << name << endl; // Output: Alice Wonderland
	
		cout << "Length: " << name.length() << endl; // Get string length
	 return 0;
	
}

