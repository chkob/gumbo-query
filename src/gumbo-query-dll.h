#pragma once

#ifdef _WIN32
#   ifdef GUMBO_QUERY_EXPORT
#       define GUMBO_QUERY_API __declspec(dllexport)
#   elif defined(GUMBO_QUERY_IMPORT)
#       define GUMBO_QUERY_API __declspec(dllimport)
#   else
#       define GUMBO_QUERY_API
#   endif
#elif __GNUC__ >= 4
#   define GUMBO_QUERY_API __attribute__((visibility("default")))
#else
#   define GUMBO_QUERY_API
#endif
