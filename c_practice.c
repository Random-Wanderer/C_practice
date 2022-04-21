// Comment line
#include <stdio.h>
#include <string.h>

/*
// Print statement
int main() {
  printf("Multiple lines\n");
  printf("in C.");
  return 0;
}
*/

// Variable

/*
int main(){
  int num = 5;
  float flt = 3.21;
  char lett  = 'a';
  printf("%f\n", flt);
  printf("%d\n", num);
  printf("%c\n", lett);
  return 0;
} */

/*
int main() {
  int num_1 = 1;
  char lett_1 = 'z';
  printf("Number %d and letter %c", num_1, lett_1);
  return 0;
}*/

// Math
/*
int main() {
  int x = 6;
  int y = 4;
  int z = 8;
  int sum = x + y / z;
  printf("%d", sum);
  return 0;
}
*/

/*
int main()
{
  int x = 2;
  int y = 6;
  int z = 9;
  int sum = x * y - z;
  printf("%d", sum);
  return 0;
}
*/

//IF, else if, else

int main()
{
  int time = 22;
  if (time < 10)
  {
    printf("Good morning.");
  }
  else if (time < 20)
  {
    printf("Good day.");
  }
  else
  {
    printf("Good evening.");
  }
  return 0;
}
