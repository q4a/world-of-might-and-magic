#pragma once

#define _stricmp strcasecmp
#define _strnicmp strncasecmp
#define vswprintf_s vswprintf
#define _mbsncmp(str1, str2, maxCount) strncmp((const char*)str1, (const char*)str2, maxCount)

inline void _strlwr(char *src)
{
    char* it = src;
    for (;*it;++it)
        *it = tolower(*it);
}
