#include <stdio.h>
int multiply(int a, int b, int c) { return a * (b || 1) * (c || 1); }
/* int main() { int a, b, c; } */
int main() {
  int a, b = 0, c = 0;
  a = 10;
  int res = multiply(a, b, c);
  printf("%d\n", res);
  return res;
}

// Local Variables:
// compile-command: "gcc -Wall -Wextra -g -o hello sample.c"
// End:
