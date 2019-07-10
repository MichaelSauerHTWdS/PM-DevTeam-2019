#include <stdio.h>
#include "scanflib.h"

#define ITEM_HILFE  0
#define ITEM_KOM1   1
#define ITEM_KOM2   2
#define ITEM_KOM3   3
#define ITEM_KOM101 101
#define ITEM_ENDE   4


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
<<<<<<< HEAD
		 /* 
		for (int i = 0; i < (sizeof(komMenu) / sizeof(char *)); i++)
=======
		for (int i = 0; i < 20 ; i++)
>>>>>>> bd4d237226a8d8d0526873afe788de7c9357ac04
		{
			printf("%s", ".....\n");
		}
		*/
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
			case  2:   printf("%s", "Noah Hoffmann\n");
				break;
			case  3:   printf("%s", ",,,\n");
				break;
			case  4:   printf("%s", "Vivien Kraemer\n");
				break; 
			case 101: printf("%s", "Georgi Kehayov\n");
				break;
			case 18: printf("%s", "Michael Bojtschuk");
				break;
			default: printf("\nkein Kommando\n");
		}
	} while (kommando != 20);

	return(0);
}
