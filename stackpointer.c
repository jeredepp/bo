#include <stdio.h>

int main(void) {
        char buffer[256];
        char buffer2[6];
        printf("First var: 0x%x\n", &buffer);
        printf("Next var: 0x%x\n", &buffer2);
        return 0;
}
