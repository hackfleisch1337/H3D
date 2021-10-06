#pragma once

#ifdef H3D_PLATFORM_WINDOWS
#include "Application.h"

extern h3d::Application* h3d::Main();

int main(int argc, char** argv) {

	auto app = h3d::Main();
	app->Run();
	delete app;

	return 0;
}

#endif