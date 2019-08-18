#include <stdio.h>

int main()
{
  printf("Wie ist dein name?\n");
  char name[20];
  scanf("%s", name);
  printf("Schön dich kennenzulernen, %s\n", name);
  return 0;
}
