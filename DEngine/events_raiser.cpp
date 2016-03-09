#include "events_raiser.h"
#include <string>
#include <iostream>

d_engine::events_raiser::events_raiser()
{
}

void d_engine::events_raiser::test()
{
	std::string my_type = typeid(events_raiser).name();
	std::cout << "Testing 3 DLL for " << my_type << std::endl;
}