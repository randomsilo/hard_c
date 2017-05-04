#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = { 10, 12, 13, 14, 20 };
  char name[] = "Dan";
  char full_name[] = { 'D', 'a', 'n', ' ', 'D', 'a', 'w', 's', 'o', 'n', '\0' };

  printf("%s: %ld\n", "Size of an int", sizeof(int));
  printf("%s: %ld\n", "Size of areas (int[])", sizeof(areas));
  printf("%s: %ld\n", "Number of ints in areas", sizeof(areas) / sizeof(int));
  printf("First area is %d, Second area is %d\n", areas[0], areas[1]);

  printf("%s: %ld\n", "Size of a char", sizeof(char));
  printf("%s: %ld\n", "Size of name", sizeof(name));
  printf("%s: %ld\n", "Number of chars in name", sizeof(name) / sizeof(char));

  printf("%s: %ld\n", "Size of full name", sizeof(full_name));
  printf("%s: %ld\n", "Number of chars in full name", sizeof(full_name) / sizeof(char));

  printf("name = \"%s\" full_name = \"%s\" \n", name, full_name);

  return 0;
}
