#include <math.h>
#include <stdio.h>

#define square(x) (x) * (x)

float myfunction(float x);
double derivative(float (*function)(float), float x, double h);

int main(int argc, char **argv) {

  printf("%d\n", argc);
  for (int i = 0; i < argc; i++) {
    printf("%s\n", argv[1]);
  }

  float x = 4;
  double h = 0.0001;

  double res = derivative(myfunction, x, h);
  printf("%f\n", res);

  return 0;
}

float myfunction(float x) { return square(x); }

double derivative(float (*function)(float), float x, double h) {
  return (function(x + h) - function(x)) / h;
}