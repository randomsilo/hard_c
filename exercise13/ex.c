#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int i = 0;

  for (i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  // array of strings
  char *states[] = {
    "Alabama"
    , "Alaska"
    , "Arizona"
    , "Arkansas"
    , "California"
    , "Colorado"
    , "Connecticut"
    , "Delaware"
    , "Florida"
    , "Georgia"
    , "Hawaii"
    , "Idaho"
    , "Illinois"
    , "Indiana"
    , "Iowa"
    , "Kansas"
    , "Kentucky"
    , "Louisiana"
    , "Maine"
    , "Maryland"
    , "Massachusetts"
    , "Michigan"
    , "Minnesota"
    , "Mississippi"
    , "Missouri"
    , "Montana"
    , "Nebraska"
    , "Nevada"
    , "New Hampshire"
    , "New Jersey"
    , "New Mexico"
    , "New York"
    , "North Carolina"
    , "North Dakota"
    , "Ohio"
    , "Oklahoma"
    , "Oregon"
    , "Pennsylvania"
    , "Rhode Island"
    , "South Carolina"
    , "South Dakota"
    , "Tennessee"
    , "Texas"
    , "Utah"
    , "Vermont"
    , "Virginia"
    , "Washington"
    , "West Virginia"
    , "Wisconsin"
    , "Wyoming"
  };

  // get state count
  int num_states = sizeof(states) / sizeof(char*);
  printf("Number of States: %d\n", num_states);

  for (i = 0; i < num_states; i++) {
    printf("state %d: %s (%ld)\n", i+1, states[i], strlen(states[i]));
  }

  return 0;
}
