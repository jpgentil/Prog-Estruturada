#include <stdio.h>

int main()
{
  char c;
  int x;
  float y;
  
  scanf("%c %d %f", &c, &x, &y);
  printf("%c %d %f\n", c, x, y);
  printf("%c\t%d\t%f\n", c, x, y); 
  printf("%c\n%d\n%f\n", c, x, y);
  return 0;
}
