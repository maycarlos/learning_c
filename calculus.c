#include <math.h>
#include <stdio.h>

#define square(x) (x) * (x)

float myfunction(float x);
double derivative(float (*function)(float), float x, double h);

int main() {
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
