#include <stdio.h>

void hanoi(int n, int a, int b)
{
  if (n == 1) 
    printf("move stone 1 from %d to %d\n", a, b);
  else
  {
    hanoi(n - 1, a, 6 - a);
    printf("move stone %d from %d to %d\n", n, a, b);
    hanoi(n, 6 - a - b, b);
  }
}

int main()
{
  int n = 4;

  hanoi(n, 1, 2);
  return 0;
}
