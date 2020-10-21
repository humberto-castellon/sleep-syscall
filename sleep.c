#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {

    printf("A punto de suspender ejecucion por cinco segundos\n");
    sleep(5);
    printf("Suspendido por cinco segundos\n");

    return(EXIT_SUCCESS);
}
