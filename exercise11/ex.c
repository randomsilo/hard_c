#include <stdio.h>

int main(int argc, char *argv[])
{
  int numbers[4] = { 0 };
  char name[4] = { 'a' };

  // first, print them out raw
  printf("%d %d %d %d \n"
    , numbers[0]
    , numbers[1]
    , numbers[2]
    , numbers[3]
  );

  printf("%c %c %c %c \n"
    , name[0]
    , name[1]
    , name[2]
    , name[3]
  );

  printf("name: %s\n", name);

  // set up the numbers
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  name[0] = 'D';
  name[1] = 'a';
  name[2] = 'n';
  name[3] = '\0';

  // print them out initialized
  printf("%d %d %d %d \n"
    , numbers[0]
    , numbers[1]
    , numbers[2]
    , numbers[3]
  );

  printf("%c %c %c %c \n"
    , name[0]
    , name[1]
    , name[2]
    , name[3]
  );

  printf("name: %s\n", name);


  // another way to use name
  char *another = "Dan";

  printf("another: %s\n", another);

  printf("another each: %c %c %c %c \n"
    , another[0]
    , another[1]
    , another[2]
    , another[3]
  );

  return 0;
}
