#include<stdio.h>

int main()

{

char c;

printf("Enter any character: ");

scanf("%c",&c);

if( (c>='a' && c<='z') || (c>='A' && c<='Z'))

printf("The entered character is an Alphabet",c);

else

printf("The entered character is not an Alphabet",c);

return 0;

}
