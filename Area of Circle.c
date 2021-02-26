#include<stdio.h>
int
main ()
{
  int r;
  printf ("Enter Radius: ");
  scanf ("%d", &r);
  float area;
  area=22.0*r/7.0;
  printf("The area is %f",area);
  return 0;
}
