#include<stdio.h>
int main ()
{
  float area, r;
  printf ("Enter Radius: ");
  scanf ("%f", &r);
  area = 22.0 * r *r/ 7.0;
  printf ("The area is %.2f", area);
  return 0;
}

