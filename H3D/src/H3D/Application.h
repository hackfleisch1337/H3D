#pragma once

#include "Core.h"

namespace h3d {
	class H3D_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* Main();

}


