// ---------------------------------------------------------------
// Programming Assignment:	LAB6
// Developer:			          Travis Stanfield
// Date Written:			12/6/2020
// Purpose:				Retail Item Program 
// ---------------------------------------------------------------
#include "retailitem.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



int main() {
	

	retailItem r1;
	retailItem r2;
	retailItem r3;//Default input
	double p; //price
	int u; //units on hand
	string d; //description
	//int totalInventory;
	cout << "\nWelcome to the Retail store!\n" << endl;
	cout << "Price must be greater than 0." << endl;
	
	
		cout << "Please enter the price of item: $";
		cin >> p;
		r1.setPrice(p);
		cout << "Inventory must be greater than 0." << endl;
		cout << "Please enter the units on hand: ";
		cin >> u;
		r1.setUnits(u);
		cout << "Please enter the description: ";
		cin >> d;
		r1.setDescription(d);

		cout << "\nPlease enter the price of item: $";
		cin >> p;
		r2.setPrice(p);
		cout << "Inventory must be greater than 0." << endl;
		cout << "Please enter the units on hand: ";
		cin >> u;
		r2.setUnits(u);
		cout << "Please enter the description: ";
		cin >> d;
		r2.setDescription(d);
		


		
	int totalInventory = r1.getUnits()+ r2.getUnits()+ r3.getUnits(); // Total Inventory
	

	cout << "\n\nDescription: " << r1.getDescription() << endl;
	cout << "Units on hand: " << r1.getUnits() << endl;
	cout << "Price: $" << r1.getPrice() << endl;

	
	cout << "\nDescription: " << r2.getDescription() << endl;
	cout << "Units on hand: " << r2.getUnits() << endl;
	cout << "Price: $" << r2.getPrice() << endl;
	
	//Default Item Entry
	cout << "\nDescription: " << r3.getDescription() << endl;
	cout << "Units on hand: " << r3.getUnits() << endl;
	cout << "Price: $" << r3.getPrice() << endl;


	cout << "\nDisplay the total inventory\n"<<endl;
	cout << "The total inventory is "<< totalInventory <<".\n"<< endl;

	system("pause");
}