
#include <stdio.h>
#include <unistd.h>
// #include <Windows.h>  Inkludieren bei Visual Studio-Compiler. Bitte "sleep(1) durch "Sleep(1000) ersetzen.


int main() {

    printf("Testing with manual flushing:\n");
    for (int i = 0; i < 5; i++) {

        printf("Line %d\n", i);
        fflush(stdout);     // hier flushen wir und warten für eine Sekunde
        sleep(1);
    }

    printf("\nTesting without flushing:\n");
    for (int i = 0; i < 5; i++) {

        printf("Line %d\n", i);
        sleep(1);           // Kein Flushen, nur schlafen :)
    }

    return 0;
}

