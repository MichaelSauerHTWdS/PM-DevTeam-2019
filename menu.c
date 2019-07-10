#include <stdio.h>
#include "scanflib.h"

#define ITEM_HILFE  0
#define ITEM_KOM1   1
#define ITEM_KOM2   2
#define ITEM_KOM3   3
#define ITEM_KOM101 101
#define ITEM_ENDE   4
#define ITEM_KOM20  20


int steuerMenu(void);

int main(int argc, char* argv[])
  {
  return steuerMenu();
  }

int steuerMenu()
{
	int kommando = 1;

	do
	{
		printf("$:");
		if (readInteger(&kommando) != NO_ERROR)
		{
			printf("keine Zahl");
		}

		switch (kommando)
		{
			case  0:  printf("%s", "Hilfetext\n");
				break;
			case  1:   printf("%s", "Michael Sauer\n");
				break;
			case  19:   printf("%s", "Janet Schmidt\n");

			case  2:   printf("%s", "Noah Hoffmann\n");
				break;
			case  3:   printf("%s", ",,,\n");
				break;
			case  4:   printf("%s", "Vivien Kraemer\n");
				break; 
			case 101: printf("%s", "Georgi Kehayov\n");
				break;
			case 20:   printf("%s", "Bjoern Mackensy");
				break;
			case 18: printf("%s", "Michael Bojtschuk");
				break;

			default: printf("\nkein Kommando\n");
		}
	} while (kommando != 20);

	return(0);
}
