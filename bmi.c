#include <cs50.h>
#include <stdio.h>


int main(void) {
  float x = get_float("Mass: ");
  int h = get_float("height: ");
  int y = h ^ 2;

      int BMI = x / y;

   printf("Your BodyMassIndex(BMI) is : %ikg/m\n", BMI);

}
