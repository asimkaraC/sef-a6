#include <stdio.h>
#include <string.h>

int main(void)
{
	char something[32] = "RCS for SEF";

	printf("%s", something);
	bool check = false;

	int size = strlen(something);

	if (size != NULL)
	{
		printf("%s", something);
	}

	return 0;
}