#include <stdio.h>
#include <string.h>

#define match(c) ((c) == 'w')

int word_count(char *str)
{
  int count = 0;
  char *s;

  while(match(*str))
    str++;
  s = str;

  while(*str)
  {
    while(*s && !match(*s))
      s++;
    if(str-s)
      count++;
    while(match(*s))
      s++;
    str = s;
  }

  return count;
}

int main()
{
  char input[50];
  printf("Enter text: ");  
  fgets(input,50,stdin);
  printf("number of results: %d", word_count(input));
  getchar();
  return 0;
}