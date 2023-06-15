#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints Passwords for the crackme5 executable.
 * @argc: The Number of arguments supplied to the Program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), i, Tmp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	Tmp = (len ^ 59) & 63;
	password[0] = codex[Tmp];

	Tmp = 0;
	for (i = 0; i < len; i++)
		Tmp += argv[1][i];
	password[1] = codex[(Tmp ^ 79) & 63];

	Tmp = 1;
	for (i = 0; i < len; i++)
		Tmp *= argv[1][i];
	password[2] = codex[(Tmp ^ 85) & 63];

	Tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > Tmp)
			Tmp = argv[1][i];
	}
	srand(Tmp ^ 14);
	password[3] = codex[rand() & 63];

	Tmp = 0;
	for (i = 0; i < len; i++)
		Tmp += (argv[1][i] * argv[1][i]);
	password[4] = codex[(Tmp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		Tmp = rand();
	password[5] = codex[(Tmp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}

