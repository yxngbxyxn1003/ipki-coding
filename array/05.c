#include <stdio.h>

void main() {
    char data[5] = {1 , 2 , 3 , 4 , 5};
    int result = 0 , i;

    for (i=0; i<5; i++) {
        result = result + data[i];
    }

    printf("result = %d", result);
}