// operations.c
#include "operations.h"

// Addiert zwei Zahlen und gibt das Ergebnis zurück.
int add(int a, int b) {
    return a + b;
}

// Subtrahiert die zweite Zahl von der ersten und gibt das Ergebnis zurück.
int subtract(int a, int b) {
    return a - b;
}

// Multipliziert zwei Zahlen und gibt das Ergebnis zurück.
int multiply(int a, int b) {
    return a * b;
}

// Teilt die erste Zahl durch die zweite und gibt das Ergebnis zurück.
// Achtung: Division durch Null wird hier nicht behandelt!
int divide(int a, int b) {
    return a / b;
}