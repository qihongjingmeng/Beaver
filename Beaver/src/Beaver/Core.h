#pragma once

#ifdef BV_PLATFORM_WINDOWS
  #ifdef BV_BUILD_DLL
    #define BV_API __declspec(dllexport)
  #else
    #define BV_API __declspec(dllimport)
  #endif
#else
  #error Beaver only support Windows
#endif
