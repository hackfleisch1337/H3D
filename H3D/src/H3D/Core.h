#pragma once

#ifdef H3D_PLATFORM_WINDOWS

	#ifdef H3D_BUILD_DLL
		#define H3D_API __declspec(dllexport)
	#else
		#define H3D_API __declspec(dllimport)
	#endif
#else
#error H3D does only run under Windows
#endif