#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {

    printf("A punto de suspender ejecucion por tres segundos\n");
    sleep(3);
    printf("Suspendido por tres segundos\n");

    return(EXIT_SUCCESS);
}
