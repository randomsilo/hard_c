#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[] = "Dan";
  char last_name[] = "Dawson";

  printf("You are %d miles away. \n", distance);
  printf("You have %f levels of power. \n", power);
  printf("You have %f levels of super powers. \n", super_power);
  printf("I have initial %c \n", initial);
  printf("I have a first name %s. \n", first_name);
  printf("I have a last name %s. \n", last_name);
  printf("My whole name is %s %c %s. \n", first_name, initial, last_name);

  int bugs = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs at an imaginary rate of %f. \n", bugs, bug_rate);


  return 0;
}
