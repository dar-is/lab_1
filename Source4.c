#include <stdio.h>
#include <locale.h>
void name()
{
	setlocale(LC_CTYPE, "RUS");
	puts(" * * * * * * * * * * * * * * * * * * * * * * ");
	puts(" *                                         * ");
	puts(" * тема: Разработка консольного приложения * ");
	puts(" *                                         * ");
	puts(" *     Выполнила Башкатова Д.А.            * ");
	puts(" *                                         * ");
	puts(" * * * * * * * * * * * * * * * * * * * * * * ");
}
void date()
{ 
	puts("16. 05. 08");
	puts("  _    _  _    _  _ ");
	puts("||_   | ||_   | ||_|");
	puts("||_|. |_| _|. |_||_|");
}
int main()
{
	setlocale(LC_CTYPE, "RUS");

	name();
	date();

	return 0;
}