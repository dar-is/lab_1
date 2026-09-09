#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("prog");
	getchar();
	puts("prog dalshe");
	return 0;
}