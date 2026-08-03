#include <stdio.h>
#include <string.h>

int main() {
  int i = 0, same = 0, len1 = 0, len2 = 0;
  char str1[50], str2[50];

  // Take the first string str1
  printf("\nEnter a string: ");
  fgets(str1, sizeof(str1), stdin);

  len1 = strlen(str1);

  // Take the second string
  printf("Enter another string: ");
  fgets(str2, sizeof(str2), stdin);

  len2 = strlen(str2);

  if (len1 == len2) {
    while (i < len1) {
      if (str1[i] == str2[i])
        i++;
      else
        break;
    }
    if (i == len1) {
      same = 1;
      printf("\n The two strings are equal.\n");
    }
  }

  if (len1 != len2)
    printf("\n The two strings are not equal.");
  if (same == 0) {
    if (str1[i] < str2[i])
      printf("\n String 1 is less than string 2");
    else
      printf("\n String 1 is greater than string2.\n");
  }
  return 0;
}
