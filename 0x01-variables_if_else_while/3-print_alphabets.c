#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints alphabet in lowercase then inupper case
*
* Return: always 0 (success)
*/
int main(void)
{
char ch;
char ch = 'a';
char ch = 'A';

/*print a-z*/
while (ch < = 'z')
{
	putchar(ch);
++ch;
}

/*print A-Z*/
while (ch < = 'Z')
{
	putchar(ch);
++ch;
}
putchar ('\n');
return (0);
}
