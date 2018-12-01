#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char quote;
    char name;

    printf("What is the quote?");
    scanf("%s",&quote);
    printf("Who said it?");
    scanf("%s",&name);

    printf("Who said it? %s",quote);
    printf("%s says,%s",name,quote);

    return 0;
}