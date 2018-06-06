#include <stdio.h>

int main()
{
  float radius;
  float area;

  printf("\nEnter the radius of circle\n");
  scanf("%f", &radius);

  area = 3.14*radius*radius;
  printf("Area of circle : %f\n", area);

  return 0;
}
