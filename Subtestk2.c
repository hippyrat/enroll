#include <stdio.h>
int main() {
#if defined TEST && defined LOCAL
printf("You got this message.\n");
#elif defined TEST || defined LOCAL
printf("You got another message.\n");
#else
printf("Don't print me\n");
#endif
return 0;
}
