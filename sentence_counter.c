#include<stdio.h>
#include<string.h>

int main()
{
char input[50];
char *s;
int sentences;

sentences=0;

fgets(input, 50, stdin);

for (int i=0; i<50; i++)
{
	if(strcmp (input[i], '.') == 0)
	{
		sentences++;

	}
}
printf("no. of sentences: %d", sentences);
getchar();
}
