/*
 * This program takes a string, a starting position and length of the substring.
 * Then It calculates the substring from the starting position to the size.
 */
#include <stdio.h>
#include <string.h>
int main() {
  char str[200], substr[100];
  // m is the start position
  // n is the length of the substring
  int i = 0, j = 0, n, m;

  printf("enter the string: ");
  if (fgets(str, sizeof(str), stdin) == NULL) {
    printf("Erroneous input.\n");
    return 1;
  }

  str[strcspn(str, "\n")] = '\0';

  printf("Enter the starting position of the substring: ");
  if (scanf("%d", &m) != 1) {
    fprintf(stderr, "Invalid input! Exiting!\n");
    return 1;
  }

  printf("Enter the length of the substring: ");
  if (scanf("%d", &n) != 1) {
    fprintf(stderr, "Invalid Input! Exiting.\n");
    return 1;
  }

  // We start the loop from m because that's where the substring will start from
  i = m;

  while (str[i] != '\0' && n > 0) {
    substr[j] = str[i];
    i++;
    j++;
    n--;
  }

  substr[j] = '\0';
  printf("\n The substring is: ");
  puts(substr);

  return 0;
}
