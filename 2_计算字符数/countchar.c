#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char str;
    printf("What is the input string?");
    scanf("%s",&str);
    printf("%s has %d characters",str,strlen(str));

    return 0;
}