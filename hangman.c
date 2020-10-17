#include "header.h"


void mulai1()
{
	system("cls");
	
	char namaFakultas[8][20] = {"teknik", "mipa", "hukum", "kedokteran", "psikologi", "fisip", "farmasi", "fasilkom"};
	char namaKota[8][20] = {"jakarta", "medan", "makasar", "semarang", "bandung", "surabaya", "serang", "denpasar"};
	char namaHantu[8][20] = {"pocong", "kuyang", "genderuwo", "kuntil anak", "suster ngesot", "sundel bolong", "tuyul", "babi ngepet"};
	int i, panjangKata;
	srand(time(NULL));
	int random = rand()%8;
	char soal[1][100];
	int tema;
	
	
	printf ("\t\t\t   ________________________________________________________________      \n");
    printf ("\t\t\t  / ______________________________________________________________ \\    \n");
    printf ("\t\t\t / /                                                              \\ \\        \n");                                                              
    printf ("\t\t\t | |                                                              | |    \n");                                                                                                             
    printf ("\t\t\t | |                                                              | |    \n");                                                                                                        
    printf ("\t\t\t | |                  Select your theme:                          | |      \n");                                                                                                   
    printf ("\t\t\t | |                                                              | |         \n");      
	printf ("\t\t\t | |                                                              | |   \n");                                                                                              
    printf ("\t\t\t | |                                                              | |    \n");                                                                                         
    printf ("\t\t\t | |        1. Faculty at the University of Indonesia             | |   \n");                                                                                    
    printf ("\t\t\t | |                                                              | |   \n");                                                                               
    printf ("\t\t\t | |        2. Capital City in Indonesia                          | |    \n");                                                                          
    printf ("\t\t\t | |                                                              | |  \n");                                                                     
    printf ("\t\t\t | |        3. Types of Ghost in Indonesia                        | |  \n");                                                                
    printf ("\t\t\t | |                                                              | |   \n");                                                           
    printf ("\t\t\t | |                                                              | |  \n");                                                               
    printf ("\t\t\t | |                                                              | |           \n");                                                                                                               
    printf ("\t\t\t | |                                                              | |       \n");                                                                                                                   
    printf ("\t\t\t | |                                                              | |      \n");                                                                                                                    
    printf ("\t\t\t | |                                                              | |      \n");                                                                                                                    
    printf ("\t\t\t | |                                                              | |      \n");                                                                                                                    
    printf ("\t\t\t \\ \\______________________________________________________________/ /      \n");                                                             
    printf ("\t\t\t  \\________________________________________________________________/\n");
	
	switch (getch())
	{
		case '1':
			panjangKata = strlen(namaFakultas[random]);
			tema = 1;
			mulai2(namaFakultas[random], panjangKata, random, tema);
			break;
		case '2':
			panjangKata = strlen(namaKota[random]);
			tema = 2;
			mulai2(namaKota[random], panjangKata, random, tema);
			break;
		case '3':
			panjangKata = strlen(namaHantu[random]);
			tema = 3;
			mulai2(namaHantu[random], panjangKata, random, tema);
			break;
		default:
			printf ("\aInvalid input!\n");
			printf ("Please input again\n");
			Sleep(500);
			mulai1();
			break;
	}
	
}

void mulai2(char soal[], int panjangKata, int random, int tema)
{
	int urutanHuruf[20];
	char hurufTebak;
	int i;
	int nyawa = 3;
	int selesai = 0;
	int benarAwal = 0;
	int benarAkhir = 0;

	
	
	for (i = 0; i < 20; i++)
	{
		urutanHuruf[i] = 0;
	}	
	
	while (benarAkhir < panjangKata)
	{
		system("cls");
		printf ("\t\t\tTheme: ");
		if (tema == 1)
		{
			printf ("Faculty at the University of Indonesia");
		}
		else if (tema == 2)
		{
			printf ("Capital City in Indonesia");
		}
		else if (tema == 3)
		{
			printf ("Types of Ghost in Indonesia");
		}
		
		printf ("\n\n");
		
		if (nyawa == 3)
		{
			three();
		}
		else if (nyawa == 2)
		{
			two();
		}
		else if (nyawa == 1)
		{
			one();
		}
		
		printf ("\t\t\t");
		for (i = 0; i < panjangKata; i++)
		{
			if (urutanHuruf[i] == 1)
			{
				printf ("%c ", soal[i]);
			}
			else
			{
				printf ("_ ");
			}
		}
		
		printf ("\n\n\n\t\t\tGuess a Letter: ");
		scanf ("%c", &hurufTebak);
		fflush(stdin);
		
		benarAwal = benarAkhir;
		
			
		for (i = 0; i < panjangKata; i++)
		{
			if (urutanHuruf[i] == 1)
			{
				continue;
			}
			
			if (hurufTebak == soal[i])
			{
				urutanHuruf[i] = 1;
				benarAkhir++;	
			}
				
		}
		
		if (benarAwal == benarAkhir)
		{
			nyawa--;
			printf ("\n\t\t\tWrong!\n");
			
			if (nyawa == 0)
			{
				break;
			}
		}
		
		else
		{
			printf ("\n\t\t\tCorrect! :)\n");
		}
		Sleep(1500);
	}
	
	if (nyawa == 0)
	{
		system ("cls");
		lose();
		dead();
		printf ("The correct word is ");
		printf (RED_BG"%s"RESET, soal);
		Sleep (1500);
    	printf ("\n\nPress any key to continue");
    	
		for (i = 0; i < 4; i ++)
		{
			printf (" . ");
			Sleep (500);
		}
		getch();
		ulangKalah();
	}
	else
	{
		system ("cls");
		win();
		alive();
		Sleep (1500);
    	printf ("\n\n\t\tPress any key to continue");
    	
		for (i = 0; i < 4; i ++)
		{
			printf ("      (*)      \n ");
		printf ("   ( '' )      \n  ");
		printf ("  \\||||/        \n  ");
		printf ("   (||)         \n");
			Sleep (500);
		}
		getch();
		ulangMenang();
		
		
	}
	
	
}

