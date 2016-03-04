#ifndef Venue_h
#define Venue_h
#include <string>
#include "Event.h"
class Venue
{
public:
	//const int ScheduleSize = 12; array of event type having 12 listings// 
	Event TodaysItinerary[12]; 
	int NumberofEvents; 

	bool ValidAvailibleTime = true;

	void AddEvent(int time, string EventTitle) 
	{
		if (ValidAvailibleTime == true)
		{
			Event *pEvent = new Event(time, EventTitle);
			TodaysItinerary[time] = *pEvent; //new event// 
		}

		if (ValidAvailibleTime == false)
		{
			cout << "This time is unavailible, please try again. " << endl;
		}
	}

	string FindEvent(int time)
	{
		string unfilled ="";
		for (int i = 0; i < 12; i++)
		{
			if (time == TodaysItinerary[i].ReturnTime()) //please accept my variable// 
				unfilled = TodaysItinerary[i].ReturnTitle();
		}
		return unfilled;
	}
	
	string FindEvent(string EventTitle)
	{
		string empty = "";
		for (int j = 0; j < 12; j++)
		{
			if (EventTitle == TodaysItinerary[j].ReturnTitle()) //same//
				empty = TodaysItinerary[j].ReturnTime();
		}
		return empty;
	}
}; 
#endif