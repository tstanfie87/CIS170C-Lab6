// ---------------------------------------------------------------
// Programming Assignment:	LAB6
// Developer:			          Travis Stanfield
// Date Written:			12/6/2020
// Purpose:				Retail Item Program 
// ---------------------------------------------------------------
#include "retailitem.h"
using namespace std;

retailItem::retailItem(string d, int u, double p) { //Constructor
	description = d;
	unitsOnHand = u;
	price = p;
}
retailItem::retailItem() { //Constructor
	description = "shirt"; 
	unitsOnHand = 10;
	price = 33.00;
}

void retailItem::setDescription(string d) {
	description = d;
}
string retailItem::getDescription() {
	return description;
}
void retailItem::setUnits(int u) {
	unitsOnHand = u;
}
int retailItem::getUnits() {
	return unitsOnHand;
}
void retailItem::setPrice(double p) {
	price = p;
}


double retailItem::getPrice() {
	return price;
}






