#include <stdio.h>
#define pi 3.14
int main(void) {
  int r;
  float promień[100];
  printf ("Wprowadź promień: ");
  fgets(promień,100,stdin);
  r=atoi(promień);
  if (r<0)
  {printf("Niepoprawne dane\n");}
  else
  {double pole;
  pole=r*r*pi;
  printf("Pole wynosi %f\n", pole);}
  return 0;
}