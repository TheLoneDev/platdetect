#ifndef _H_PLATDETECT_H
#define _H_PLATDETECT_H

#ifdef __unix
  #define PLATFORM_UNIX 1
  #ifdef __linux
      #ifdef __ANDROID__
          #define PLATFORM_ANDROID 1
      #else
          #define PLATFORM_LINUX 1
      #endif
  #endif
#elif defined(_WIN32)
    #define PLATFORM_WINDOWS 1
#elif defined(__APPLE__)
    #ifdef TARGET_OS_OSX
        #define PLATFORM_MACOS 1
    #elif defined(TARGET_OS_IPHONE)
        #define PLATFORM_IOS 1
    #endif
#endif

#ifdef __STDC__
    #if __STDC_VERSION__ == 199409L
        #define PLATFORM_C_VER 1995
    #elif __STDC_VERSION__ == 199901L
        #define PLATFORM_C_VER 1999
    #elif __STDC_VERSION__ == 201112L
        #define PLATFORM_C_VER 2011
    #elif __STDC_VERSION__ == 201710L
        #define PLATFORM_C_VER 2017
    #endif
#endif

#ifdef __cplusplus
    #if __cplusplus == 199711L
        #define PLATFORM_CPP_VER 1998
    #elif __cplusplus == 201103L
        #define PLATFORM_CPP_VER 2011
    #elif __cplusplus == 201402L
        #define PLATFORM_CPP_VER 2014
    #elif __cplusplus == 201703L
        #define PLATFORM_CPP_VER 2017
    #elif __cplusplus == 202002L 
        #define PLATFORM_CPP_VER 2020
    #elif __cplusplus == 202302L
        #define PLATFORM_CPP_VER 2023
    #endif
#endif

#endif
