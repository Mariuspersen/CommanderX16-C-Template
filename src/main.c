#include <cx16.h>
#include <stdio.h>

int main(void) {
    printf("Hello world!\nThis computer has %d banks of memory\nOS Type is %d",get_numbanks(),get_ostype());
    return 0;
}