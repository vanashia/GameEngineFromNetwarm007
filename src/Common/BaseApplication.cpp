#include "BaseApplication.hpp"

namespace My
{
	int	BaseApplication::Initialize()
		{
			m_bQuit = false;
			return 0;
		}
		
	void BaseApplication::Finalize()
		{
			
		}
		
	void BaseApplication::Tick()
		{
			
		}
	
	bool BaseApplication::isQuit()
		{
			return m_bQuit;
		}
}

