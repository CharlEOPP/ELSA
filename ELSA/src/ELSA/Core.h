#pragma once

#ifdef EL_PLATFORM_WINDOWS
	#ifdef EL_BUILD_DLL
		#define ELSA_API __declspec(dllexport)
	#else
		#define ELSA_API __declspec(dllimport)
	#endif
#else
	#error Only Windows is supported!
#endif