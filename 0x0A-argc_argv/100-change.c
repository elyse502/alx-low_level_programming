#include <stdio.h>
#include <stdlib.h>
/**
 *main-prints the minimum number of coins
 *@argc:number of commandline arguments.
 *@argv:pointer to an array of commmand line arguments.
 *Return:0 when successful, Non-zero-fail.
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, leastcoins = 0, money = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= coins[i])
		{
			leastcoins += money / coins[i];
			money = money % coins[i];
			if (money % coins[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", leastcoins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
