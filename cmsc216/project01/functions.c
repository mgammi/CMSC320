#include "functions.h"
#include <stdio.h>
int classify_triangle(int side1, int side2, int side3) {
  int num = 0;

  if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
    if (side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2) {
      return -1;
    }
  }

  if (side1 == side2 && side1 == side3) {
    num = 3;
  } else if (side1 == side2 && side1 != side3) {
    num = 2;
  } else {
    num = 0;
  }

  return num;
}

long reverse_digits(long n) {
  long reversed = 0;
  int multiply = 1;
  int start = 1;
  long copy = n;
  if (n < 0 || (n % 10 == 0 && n >= 10)) {
    return -1;
  }

  while(copy > 0) {
    copy = (copy - (copy % 10)) / 10;
    multiply = start;
    start *= 10;
  }

  while(n > 0) {
    reversed += (n % 10) * multiply;
    n = (n - (n % 10)) / 10;
    multiply /= 10;
  }

  return reversed;
}

unsigned long catalan(short int n) {
  if (n < 0) {
    return -1;
  }

  if (n == 0) {
    return 1;
  }

  return (2 * ((2 * n) -1) * catalan(n - 1)) / (n + 1);
}
