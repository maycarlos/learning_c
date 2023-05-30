#include<stdio.h>

typedef struct {
    char *capital;
    char *code;
} Country;

int main(){

    Country Portugal;

    Portugal.capital = "Lisbon";
    Portugal.code = "PT";


    return 0;
}