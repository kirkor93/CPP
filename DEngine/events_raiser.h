#pragma once
#include "singleton.h"
#include "DEngine.h"

namespace d_engine
{
	enum game_loop_event
	{
		UPDATE, 
	};

	class events_raiser
	{
	public:
		DENGINE_API static void test();

	protected:
		events_raiser();
	private:
	
	};	
}
