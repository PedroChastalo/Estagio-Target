#include <stdio.h>
#include <stdlib.h>

void inv(char* s)
{
if (s[0] != '\0')
{
inv(&s[1]);
printf("%c", s[0]);
}
}

int main()
{
    char palavra[] = "palavra";
    inv(&palavra[0]);
    return 0;
}
