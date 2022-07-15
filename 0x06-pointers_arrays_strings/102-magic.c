#include <stdio.h>

/**
 * main -> the code line is executed here
 * @%p\n: param1
 * @&a: param2
 *Return: (0) succesful
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

printf("%p\n", &a[2]);
printf("%p\n", p);
for (int i = 0; i < 5; i++)
	printf("%p\n", p + (i + 1));
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
