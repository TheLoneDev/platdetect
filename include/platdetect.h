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

#endif
