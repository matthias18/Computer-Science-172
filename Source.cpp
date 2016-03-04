#include <iostream> 
#include <string>
#include "Event.h"
#include "Venue.h"
using namespace std;
int main() //I affirm that all code given below was written solely by me, Matthias Carroll, and that any help I received adhered to the rules stated for this exam. // 
{
	Venue Traphouse; 
	Traphouse.AddEvent(8, "Wake up, shape up");
	Traphouse.AddEvent(9, "Cooking in the Kitchen");
	Traphouse.AddEvent(9, "Hoes"); //shouldn't compile//
	Traphouse.AddEvent(10, "Slow singing shower");
	Traphouse.AddEvent(11, "Clean, Cut, and Capital");
	Traphouse.AddEvent(12, "Study Session"); 
	Traphouse.AddEvent(2, "Munchin Luncheon");
	Traphouse.AddEvent(4, "Uncle Earl's Communion");
	Traphouse.AddEvent(5, "Spicy Saga Supper");
	Traphouse.AddEvent(7, "Homework mind honing");
	Traphouse.AddEvent(9, "No New Friends");
	Traphouse.AddEvent(11, "Gas out pass out");
	//time-based lookup//
	cout << Traphouse.FindEvent(12) << endl;
	//name-based lookup// 
	cout << Traphouse.FindEvent("Uncle Earl's Communion") << endl;
	//erroneous event lookup// 
	cout << Traphouse.FindEvent("Hoes") << endl; /* no time for hoes */
	return 0; 
}