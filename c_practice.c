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
/*
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
*/

// Ternary
/*
int main(){
  int x = 23;
  (x < 20) ? printf("Less than") : printf("Greater than");
  return 0;
}
*/

// Switch
/*
int main() {
  int day = 1;
  switch (day) {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Friday");
      break;
    default:
      printf("Weekend");
  }
  return 0;
}
*/

// While
/*
int main() {
  int i = 0;

  while (i < 3) {
    printf("%d\n", i);
    i++;
  }
  return 0;
}
*/

// Do/while
/*
int main() {
  int i = 0;

  do {
    printf("%d\n", i);
    i++;
  }
  while (i < 3);

  return 0;
}
*/

// For loop
/*
int main() {
  int i;

  for (i = 0; i <= 10; i = i + 2) {
    printf("%d\n", i);
  }
  return 0;
}
*/

// Break/continue
/*
int main() {
  int i = 0;

  while (i < 3) {
    if (i == 2) {
      break;
    }
    printf("%d\n", i);
    i++;
  }
  return 0;
}
*/
/*
int main(){
  int i = 0;

  while (i < 5) {
    i++;
    if (i == 4) {
      continue;
    }
    printf("%d\n", i);
  }
  return 0;
}
*/
