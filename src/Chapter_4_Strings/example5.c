#include <stdio.h>
#include <string.h>
void swap(char *a, char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  char str[50];

  // Take a string
  printf("Enter a string to swap: ");
  if (fgets(str, sizeof(str), stdin) == NULL) {
    printf("Erroneous input!\n");
    return 1;
  }
  str[strcspn(str, "\n")] = '\0';
  int i = 0;
  int j = strlen(str) - 1;

  while (i < j) {
    swap(&str[i], &str[j]);
    i++;
    j--;
  }

  printf("\nThe reversed string is %s\n", str);
  return 0;
}
