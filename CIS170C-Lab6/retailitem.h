// ---------------------------------------------------------------
// Programming Assignment:	LAB6
// Developer:			          Travis Stanfield
// Date Written:			12/6/2020
// Purpose:				Retail Item Program 
// ---------------------------------------------------------------
#pragma once
#include <string>
#include <iostream>
using namespace std;

class retailItem {
private:
	string description;
	int unitsOnHand;
	double price;
public:
	retailItem(string d, int u, double p); //Constructor
	retailItem(); //default constructor

	void setDescription(string mk);
	string getDescription() ;
	void setUnits(int u);
	int getUnits() ;
	void setPrice(double p);
	double getPrice() ;

	

};
