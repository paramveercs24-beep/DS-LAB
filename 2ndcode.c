#include<stdio.h>

int main() {

    char *names[] = {"rohan", "Prince", "Manas", "Pruthvi"};


    for (int i = 0; i < 4; i++) {
        printf("Name is: %s, Address: %p\n", names[i], (void*)names[i]);
    }

    return 0;
}
