#include "header.h"

//Pilihan start playing
void mulai1()
{
	system("cls");
	
	//list tema dan kata yang ada di game
	char namaFakultas[8][20] = {"teknik", "mipa", "hukum", "kedokteran", "psikologi", "fisip", "farmasi", "fasilkom"};
	char namaKota[8][20] = {"jakarta", "medan", "makasar", "semarang", "bandung", "surabaya", "serang", "denpasar"};
	char namaHantu[8][20] = {"pocong", "kuyang", "genderuwo", "kuntilanak", "suster ngesot", "sundel bolong", "tuyul", "babi ngepet"};
	
	//variabel panjang kata untuk menjadi batas di loop
	int panjangKata;
	
	//random seed
	srand(time(NULL));
	
	//variabel 'random' diacak dengan range 0-7 sesuai size array kata-kata
	int random = rand()%8;
	
	//variabel untuk dipass ke fungsi berikutnya
	int tema;
	
	//tampilan pertama untuk memilih tema game hangman
	printf ("\t\t\t   ________________________________________________________________      \n");
    printf ("\t\t\t  / ______________________________________________________________ \\    \n");
    printf ("\t\t\t / /                                                              \\ \\        \n");                                                              
    printf ("\t\t\t | |                                                              | |    \n");                                                                                                             
    printf ("\t\t\t | |                                                              | |    \n");                                                                                                        
    printf ("\t\t\t | |                  Select your theme:                          | |      \n");                                                                                                   
    printf ("\t\t\t | |                                                              | |         \n");      
	printf ("\t\t\t | |                                                              | |   \n");                                                                                              
    printf ("\t\t\t | |                                                              | |    \n");                                                                                         
    printf ("\t\t\t | |        1. Faculty at University of Indonesia                 | |   \n");                                                                                   
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
		//tema nama fakultas
		case '1':
			//strlen untuk mencari panjang kata di array yang sudah dirandom indexnya
			panjangKata = strlen(namaFakultas[random]);
			//variabel tema menjadi 1 agar mudah dipass ke fungsi berikutnya
			tema = 1;
			//fungsi berikutnya dipanggil dengan menggunakan beberapa parameter
			mulai2(namaFakultas[random], panjangKata, random, tema);
			break;
		
		//tema nama kota
		case '2':
			//strlen untuk mencari panjang kata di array yang sudah dirandom indexnya
			panjangKata = strlen(namaKota[random]);
			//variabel tema menjadi 2 agar mudah dipass ke fungsi berikutnya
			tema = 2;
			//fungsi berikutnya dipanggil dengan menggunakan beberapa parameter
			mulai2(namaKota[random], panjangKata, random, tema);
			break;
			
		//tema nama hantu
		case '3':
			//strlen untuk mencari panjang kata di array yang sudah dirandom indexnya
			panjangKata = strlen(namaHantu[random]);
			//variabel tema menjadi 3 agar mudah dipass ke fungsi berikutnya
			tema = 3;
			//fungsi berikutnya dipanggil dengan menggunakan beberapa parameter
			mulai2(namaHantu[random], panjangKata, random, tema);
			break;
			
		//eror handling untuk input diluar 1-3
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
	//array yang digunakan untuk menyimpan posisi huruf per kata
	//20 sebagai index digunakan untuk berjaga-jaga agar array tidak terlalu kecil
	int urutanHuruf[20];
	
	//variabel untuk input huruf oleh pemain
	char hurufTebak;
	
	//variabel i untuk index di setiap for loop
	int i;
	
	//nyawa pemain hanya sebanyak 3
	int nyawa = 3;
	
	//variabel untuk keluar, akan diganti dengan 1 jika akan keluar dari game
	int selesai = 0;
	
	//jumlah berapa banyak kali pemain memasukan huruf yang benar
	int benarAwal = 0;
	int benarAkhir = 0;

	//loop untuk mengisi elemen array dengan angka 0
	for (i = 0; i < 20; i++)
	{
		urutanHuruf[i] = 0;
		//contoh kata = mipa
		//urutanHuruf[4] = [0, 0, 0, 0]
		//				 = [m, i, p, a]
	}	
	
	//loop yang akan berjalan selama game berjalan
	while (benarAkhir < panjangKata)
	{
		system("cls");
		//menampilkan tema yang dipilih oleh pemain
		printf ("\n\n\t\t\tTheme: ");
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
		
		printf ("\n\n\n\n\n");
		
		//menampilkan gambar hangman saat nyawa masih 3
		if (nyawa == 3)
		{
			three();
		}
		//menampilkan gambar hangman saat nyawa sudah 2
		else if (nyawa == 2)
		{
			two();
		}
		//menampilkan gambar hangman saat nyawa sisa 1
		else if (nyawa == 1)
		{
			one();
		}
		
		printf ("\n\n\t\t\t");
		for (i = 0; i < panjangKata; i++)
		{
			if (urutanHuruf[i] == 1)
			{
				//menampilkan huruf yang sudah ditebak
				printf (GREEN_TEXT"%c "RESET, soal[i]);
			}
			else
			{
				//menampilkan '_' untuk setiap huruf yang belum ditebak
				printf ("_ ");
			}
		}
		
		printf ("\n\n\n\t\t\tGuess a Letter: ");
		scanf ("%c", &hurufTebak);
		//untuk membersihkan terminal
		fflush(stdin);
		
		//    0   =   0 
		benarAwal = benarAkhir;
		
		//loop untuk membandingkan huruf yang dimasukan dengan yang ada di kata
		for (i = 0; i < panjangKata; i++)
		{
			//jika pemain menginput huruf yang sama dengan yang sudah dimasukan
			if (urutanHuruf[i] == 1)
			{
				//kembali ke for loop
				continue;
			}
			//jika pemain memasukan huruf yang benar
			if (hurufTebak == soal[i])
			{
				//array urutanHuruf 
				urutanHuruf[i] = 1;
				//contoh huruf = m
				//urutanHuruf[4] = [1, 0, 0, 0]
				//				 = [m, i, p, a]
				benarAkhir++;
				//benarAkhir +1	
			}

		}
		
		//jika salah, benarAkhir tidak di increment
		//jadi, isi dari benarAwal dan benarAkhir masih sama
		if (benarAwal == benarAkhir)
		{
			nyawa--;
			printf ("\n\t\t\tWrong!\n");
			
			if (nyawa == 0)
			{
				//nyawa menjadi 0 yang artinya sudah mati
				//keluar dari while loop
				break;
			}
		}
		//jika benar, benarAkhir di increment
		//jadi, isi dari benarAwal dan benarAkhir tidak sama
		else
		{
			printf ("\n\t\t\tCorrect! :)\n");
		}
		
		Sleep(1500);
	}
	
	//pemain sudah mati
	if (nyawa == 0)
	{
		system ("cls");
		lose();
		dead();
		printf ("The correct word is ");
		printf (RED_BG"%s"RESET, soal);
		Sleep (1500);
    	printf ("\n\nPress any key to continue");
    	
		for (i = 0; i < 3; i ++)
		{
			printf ("\n\t\t\t\t\t\t   (*) \n");
			printf ("\t\t\t\t\t\t  ( '' ) \n");
			printf ("\t\t\t\t\t\t  \\||||/ \n");
			printf ("\t\t\t\t\t\t   (||)\n");
			Sleep (500);
		}
		getch();
		ulangKalah();
	}
	
	//pemain masih hidup
	else
	{
		system ("cls");
		win();
		alive();
		Sleep (1500);
    	printf ("\n\n\t\tPress any key to continue");
    	
		for (i = 0; i < 3; i ++)
		{
			printf ("\n\t\t\t\t\t\t   (*) \n");
			printf ("\t\t\t\t\t\t  ( '' ) \n");
			printf ("\t\t\t\t\t\t  \\||||/ \n");
			printf ("\t\t\t\t\t\t   (||)\n");
			Sleep (500);
		}
		getch();
		ulangMenang();	
	}	
}
