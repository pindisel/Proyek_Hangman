#include "header.h"

int main()
{
	system("cls");
	pembuka();
	MENU:
	mainMenu();
	ULANG:
	switch (getch())
	{
		case '1':
			mulai1();
			break;
		case '2':
			petunjuk();
			goto MENU;
			break;
		case '3':
			tema();
			goto MENU;
			break;
		case '4':
			penutup();
			exit(0);
			break;
			
		deafult:
			printf ("\a\n\nInvalid Input\n");
            printf ("Please enter another choice.\n");
            getch();
            goto MENU;
            break;
	}
	goto ULANG;
	
	penutup();

    return 0;
}
