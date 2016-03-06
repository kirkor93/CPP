#pragma once
#include "singleton.h"
#include <boost/signals2.hpp>

enum game_loop_event
{
	UPDATE, 
};

class events_raiser : public singleton<events_raiser>
{
public:
	
private:
	
};