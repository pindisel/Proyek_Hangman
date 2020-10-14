#ifndef HEADER_H

    #define HEADER_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <conio.h>
    #include <windows.h>
    #include <time.h>

    //menu.c
    void pembuka();
    void mainMenu();
    void ulang();

    //hangman.c
    void mulai1();
    void mulai2(char soal[], int panjangKata, int random, int tema);

	//howtoplay.c
	void petunjuk();
	
	//theme.c
	void tema();
	
	//gambar.c
	void three();
	void two();
	void one();
	void dead();
	void alive();
	
	//akhir.c
	void lose();
	void win();
	
	

#endif
