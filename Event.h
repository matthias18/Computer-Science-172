#ifndef Event_h
#define Event_h
#include <string>
using namespace std;
class Event
{
private:
	string EventTitle;
	int ScheduledTime; /*double for half&quarter hour variations, 10:00 is a string*/

public:
	Event(int time, string namer)
	{
		this->ScheduledTime = time;
		this->EventTitle = namer;
	}
	void SetTime(int time)
	{
		this->ScheduledTime = time;
	}

	void SetTitle(string name)
	{
		this->EventTitle = name;
	}

	int ReturnTime()
	{
		return ScheduledTime;
	}

	string ReturnTitle()
	{
		return EventTitle;
	}
}; 
#endif