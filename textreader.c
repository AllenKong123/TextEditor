#include <stdio.h>
#include <string.h>
int main()
{
char text[50];
FILE *fp;

fp=fopen("./textoutput.txt", "r");
fread(text,50,1,fp);
printf("%s", text);
fclose(fp);

}
