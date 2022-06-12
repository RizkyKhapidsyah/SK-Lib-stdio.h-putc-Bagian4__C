#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main(void) {
    int ret_code = 0;
    for (char c = 'a'; (ret_code != EOF) && (c != 'z'); c++) {
        ret_code = putc(c, stdout);
    }

    if (ret_code == EOF){
        if (ferror(stdout)) {
            perror("putc()");
            fprintf(stderr, "putc() failed in file %s at line # %d\n", __FILE__, __LINE__ - 7);
            exit(EXIT_FAILURE);
        }
    }
        
    putc('\n', stdout);

    _getch();
    return EXIT_SUCCESS;
}