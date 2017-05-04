#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  if (argc == 1) {
    printf("You only have one arguement. \n");
  } else if (argc > 1 && argc < 4) {
    printf("Here are your arguements: ");

    for (i=0; i < argc; i++) {
      printf("%s ", argv[i]);
    }
    printf("\n");
  } else {
    printf("Too many arguements! \n");
  }


  return 0;
}
