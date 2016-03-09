#pragma once

namespace d_engine
{
	template<class t>
	class singleton
	{
	protected:
		singleton() { }
		singleton(const t&) { }
		virtual ~singleton() { }
		singleton& operator=(const singleton&) { return get_instance(); }

	public:
		static t get_instance()
		{
			static t instance;
			return instance;
		}
	};
}
