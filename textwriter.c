#include <stdio.h>
#include <string.h>
int main()
{
char text[50];
FILE *fp;
printf("what would you like to write?\n");
fgets(text, 50, stdin);
fp=fopen("./textoutput.txt", "w");
fprintf(fp, text);
printf("writing...");
fclose(fp);
printf("done.\n");
printf("wrote to file textoutput.txt");
}