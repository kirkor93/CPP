#pragma once
#include <thread>

template<class t>
class singleton
{
private:
	singleton()	{ }
	singleton(const t&) { };
	~singleton() { }
	singleton& operator=(const singleton&) { return get_instance(); }
	

public:
	t get_instance()
	{
		
		static t instance;
		return instance;
	}
};