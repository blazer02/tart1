#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void game()
{
	int ret = rand() % 100 + 1;
	int a;

	while (1)
	{
		printf("the number you guess:");
		scanf("%d", &a);

		if (a > ret)
			printf("the number is bigger\n");
		else if (a < ret)
			printf("the number is smaller\n");
		else
		{
			printf("right congratulations!!!\n");
			break;
		}
	}
}
int main()
{
	int s;
	srand((unsigned int)time(NULL));


	do
	{
		printf("*****************\n");
		printf("*****TART Q******\n");
		printf("*****************\n");
		printf("please input(1or0):");
		scanf("%d", &s);
		switch (s)
		{
		case 1:
			printf("game start\n");
			game();
		case 0:
			printf("game end\n");
			break;
		default:
			printf("wrong input\n");
		}
	} while (s);

	return 0;
}