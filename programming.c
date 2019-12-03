#include <stdio.h>
void move(int *xpos, int *ypos);
int main(void)
{
int x = 10;
int y = 20;
printf("current place(%d, %d) \n", x, y);
move(&x, &y);
printf("next place (%d, %d) \n", x, y);
return 0;
}
void move(int *xpos, int *ypos)
{
*xpos = *xpos + 1;
*ypos = *ypos + 1;
}
