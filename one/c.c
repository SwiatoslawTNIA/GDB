#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void myFunc(void);
int main(void)
{
  fprintf(stdout, "Hello World!!");//Something went wrong

  for(register int i = 0; i < 10;++i)
  {
    printf("Some deep text.\n");
  }
  char *pointer = (char *)malloc(sizeof(char) * 25);
  for(register int i = 0; i < 10; ++i)
  {
    printf("Some wrong text.\n");
  }
  fprintf(stdout, "Enter a string: ");
  fgets(pointer, 25, stdin);//get the chars
  myFunc();
  return 0;
}
void myFunc(void)
{
  printf("Doing something very important.");
  char *str = malloc(sizeof(char) *45 );
  if(str == NULL)
  {
    fprintf(stderr, "Unable to allocate memory, exiting.");
    exit(EXIT_FAILURE);
  }
  puts("The allocation completed successfully.");
  free(str);
}