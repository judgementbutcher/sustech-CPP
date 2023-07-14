#include"match.h"

const char * match(const char *s, char ch)
{
    for(int i = 0;s[i] != '\0';i++)
    {
        if(s[i] == ch)
        {
            return &s[i];
        }
    }
    return nullptr;
}