#include <iostream> 
#include <string>
#include "Event.h"
#include "Venue.h"
using namespace std;
int main() //I affirm that all code given below was written solely by me, Matthias Carroll, and that any help I received adhered to the rules stated for this exam. // 
{
	Venue Traphouse; 
	Traphouse.AddEvent(8:00, "Wake up, shape up");
	Traphouse.AddEvent(9:00, "Cooking in the Kitchen");
	Traphouse.AddEvent(9:00, "Hoes"); //shouldn't compile//
	Traphouse.AddEvent(10:00, "Slow singing shower");
	Traphouse.AddEvent(11:00, "Clean, Cut, and Capital");
	Traphouse.AddEvent(12:00, "Study Session"); 
	Traphouse.AddEvent(2:00, "Munchin Luncheon");
	Traphouse.AddEvent(4:00, "Uncle Earl's Communion");
	Traphouse.AddEvent(5:00, "Spicy Saga Supper");
	Traphouse.AddEvent(7:00, "Homework mind honing");
	Traphouse.AddEvent(9:00, "No New Friends");
	Traphouse.AddEvent(11:00, "Gas out pass out");
	//time-based lookup//
	cout << Traphouse.EventLookup(12:00).ReturnTitle() << endl;
	//name-based lookup// 
	cout << Traphouse.EventLookup("Uncle Earl's Communion").ReturnTime() << endl;
	//erroneous event lookup// 
	cout << Traphouse.EventLookup("Hoes").ReturnTime() << endl; /* no time for hoes */
	return 0; 
}