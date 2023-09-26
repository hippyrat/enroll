#include <stdlib.h>
#include <stdio.h>
void welcome() {
volatile const char* str = "Welcome to join Embedded Studio!";
puts(str);
exit(EXIT_SUCCESS);
}
int main () {
welcome();
}