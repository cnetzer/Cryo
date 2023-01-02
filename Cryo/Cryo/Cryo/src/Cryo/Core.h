#pragma once

#ifdef CRYO_PLATFORM_WINDOWS
	#ifdef CRYO_BUILD_DLL
		#define CRYO_API __declspec(dllexport)
	#else
		#define CRYO_API __declspec(dllimport)
	#endif
#else
	#error Cryo Engine only supports Windows
#endif