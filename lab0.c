#include <stdio.h>
// lab 0

int main(void) {
    printf("Hello, World!\n");
    int i, sum;
    i = 1;
    sum = 0;
    while (i < 200) {
        if (i % 2 == 0)
            sum += i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
    
}

