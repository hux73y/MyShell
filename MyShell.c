#include<stdio.h>
#include<unistd.h>


void type_prompt()
{
	char *s = "% ";
	write(STDOUT_FILENO, s, 2);
}

int main()
{
	type_prompt();
	return 0;
}
