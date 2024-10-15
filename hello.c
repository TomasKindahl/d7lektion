#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ^ 2 = %d\n", i, i*i);
    }
    return 0;
}