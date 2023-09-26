#include <stddef.h>
unsigned long strlen(const char *str) {
    const char *s = str;
    while (*s) {
        s++;
    }
    return (unsigned long)(s - str);
}

void *memcpy(void *restrict dest, const void *restrict src, size_t n) {
    char *d = (char *)dest;
    const char *s = (const char *)src;
    
    while (n--) {
        *d++ = *s++;
    }
    
    return dest;
}

void *memset(void *s, int c, size_t n) {
    char *p = (char *)s;
    
    while (n--) {
        *p++ = (char)c;
    }
    
    return s;
}
