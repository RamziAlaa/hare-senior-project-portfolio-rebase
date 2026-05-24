#include "Event.h"
#include <iostream>

using namespace Events;

Event::~Event()							//Leave the destructor definition empty since we don't need to
{										//add anything here at the moment.
}

void Event::Update(SDL_Event* event)	//Leave the method definition empty since we don't need to
{										//add anything here.
}

void Event::ResetOnUpdate()				//Leave the method definition empty since we don't need to
{										//add anything here.
}

const char* Event::EventIDToChar()
{
	switch (eventID)
	{
	case EventID::None:
		return "None";
	case EventID::KeyboardEvent:
		return "KeyboardEvent";
	case EventID::PlayerController:
		return "PlayerController";
	}

	return "EventID not specifed in EventIDToChar()";
}
