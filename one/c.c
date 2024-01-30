#include <stdio.h>
int main(void)
{
  for(register int i = 0; i < 10;++i)
  {
    printf("Some deep text.\n");
  }
  fprintf(stdout, "Hello World!!");//Something went wrong
  char *pointer = (char *)malloc(sizeof(char) * 25ULL);
  for(register int i = 0; i < 10;++i)
  {
    printf("Some wrong text.\n");
  }
  return 0;
}