/*
 NAME: Tolaz Hewa
 STUDENT NUMBER: 500590503
 SECTION: 02
 */

#include <stdlib.h>

size_t my_strlen(const char* s)
{
    size_t i = 0;
    
    while(s[i] != '\0')
    {
        i++;
    }
    
    return i;
}

char* my_strcpy(char* tgt, const char* src)
{
    
    while(*src != '\0')
    {
        *tgt = *src;
        tgt++;
        src++;
    }
    *tgt = '\0';
    return tgt;
}

int my_strcmp(const char* s1, const char* s2)
{
    while (*s1 != '\0'&& *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

char* my_strcat(char* tgt, const char* src)
{
    while(*tgt != '\0')
    {
        tgt++;
    }
    while(*src != '\0')
    {
        *tgt = *src;
        tgt++;
        src++;
    }
    *tgt = '\0';
    return tgt;
}

char* my_strchr(const char *s,  int c)
{
    char a = c;
    while(*s != '\0')
    {
        if(*s == a)
        {
            return (char *)s;
        }
        else
        {
            s++;
        }
    }
    return 0;
}

char* my_strrchr(const char *s,  int c)
{
    char a = c;
    int number = 0;
    
    while(*s != '\0')
    {
        s++;
        number++;
    }
    while(number >= 0)
    {
        if(*s == a)
        {
            return (char *)s;
        }
        number--;
        s--;
    }
    return 0;
}
