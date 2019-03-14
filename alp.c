#include <stdio.h>

int main()
{
    char c;
    printf("enter character:");
    scanf("%c",&c);
    if((c>='a') ||(c>='A'))

{
    printf("ALPHABET");
}
else
{
    printf("NO");
}
    return 0;
}
