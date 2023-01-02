#pragma once

#include "Core.h"

namespace Cryo {

	class CRYO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// to be defined in client
	Application* CreateApplication();

}
