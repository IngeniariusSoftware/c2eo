#include <stdio.h>

char c = 'g';
char *c1 = &c;

int main() {
    printf("%c\n", c);
    printf("%c\n", *c1);
    return 0;
}
