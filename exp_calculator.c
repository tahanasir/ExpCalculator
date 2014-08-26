
#include <stdio.h>

float power(float base, unsigned int exponent);

int main(void)
{
  float a, result;
  unsigned int n;

  printf("\nEnter the base: ");
  scanf(" %f", &a);

  printf("Enter the exponent: ");
  scanf(" %d", &n);

  result = power(a,n);
  printf("\nThe result is: %.1f\n\n", result);
  return(0);
}

float power(float base, unsigned int exponent){
  if (exponent == 0)
    return 1;
  else if (exponent % 2)
    return base * power(base, exponent - 1);
  else {
    float temp = power(base, exponent / 2);
    return temp * temp;
  }
}







