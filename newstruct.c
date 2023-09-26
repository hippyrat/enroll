#include <stdio.h>
#include <stddef.h>

struct Newstruct {
    double c;   // double是8字节对齐的
    long g;     // long是8字节对齐的
    int h;      // int是4字节对齐的
    char *a;    // char*通常是4字节对齐的
    float e;    // float是4字节对齐的
    short b;    // short是2字节对齐的
    char d;     // char是1字节对齐的
    char f;     // char是1字节对齐的
} rec;

int main() {
    struct Newstruct rec;
    
    printf("Offset of a: %zu\n", offsetof(struct Newstruct, a));
    printf("Offset of b: %zu\n", offsetof(struct Newstruct, b));
    printf("Offset of c: %zu\n", offsetof(struct Newstruct, c));
    printf("Offset of d: %zu\n", offsetof(struct Newstruct, d));
    printf("Offset of e: %zu\n", offsetof(struct Newstruct, e));
    printf("Offset of f: %zu\n", offsetof(struct Newstruct, f));
    printf("Offset of g: %zu\n", offsetof(struct Newstruct, g));
    printf("Offset of h: %zu\n", offsetof(struct Newstruct, h));
    
    printf("Size of Newstruct: %zu\n", sizeof(struct Newstruct));
    
    return 0;
}