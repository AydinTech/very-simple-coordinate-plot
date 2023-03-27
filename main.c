#include <stdio.h>
int x = 0;
int y = 0;
int count;

int main() {
    for(count = y; count > 0; count--) {
        printf("\n");
    }
    for(count = x; count > 0; count--) {
        printf(" ");
    }
    printf(".");
    return 0;
}
