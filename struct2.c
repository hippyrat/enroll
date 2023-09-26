#include <stdio.h>
#include <stddef.h>

struct Enroll {
    char *a;
    short b;
    double c;
    char d;
    float e;
    char f;
    long g;
    int h;
} rec;


int main() {
    struct Enroll rec;
    
    printf("Offset of a: %zu\n", offsetof(struct Enroll, a));
    printf("Offset of b: %zu\n", offsetof(struct Enroll, b));
    printf("Offset of c: %zu\n", offsetof(struct Enroll, c));
    printf("Offset of d: %zu\n", offsetof(struct Enroll, d));
    printf("Offset of e: %zu\n", offsetof(struct Enroll, e));
    printf("Offset of f: %zu\n", offsetof(struct Enroll, f));
    printf("Offset of g: %zu\n", offsetof(struct Enroll, g));
    printf("Offset of h: %zu\n", offsetof(struct Enroll, h));
    printf("结构体 Enroll 大小为: %zu 字节\n", sizeof(struct Enroll));
    
    return 0;
}





