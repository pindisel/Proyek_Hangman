#ifndef HEADER_H

    #define HEADER_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <conio.h>
    #include <windows.h>
    #include <time.h>
    
    #define RED_BG "\x1B[41m"
	#define RED_TEXT "\x1B[31m"
	#define RESET "\x1b[0m"
	#define BROWN_TEXT "\x1B[38;2;89;60;31m"
	#define BROWN_BG "\x1B[48;2;89;60;31m"
	#define LIGHTGRAY_TEXT "\x1B[38;2;202;204;206m"
	#define LAWNGREEN_TEXT "\x1B[38;2;124;252;0m"
	#define DARKGREEN_TEXT "\x1B[38;2;0;97;62m"
	#define YELLOW_TEXT "\x1B[38;2;249;215;28m"
	#define BLUE_TEXT "\x1B[38;2;0;170;238m"
	#define TANGERINE_TEXT "\x1B[38;2;242;133;0m"
	#define PINK_TEXT "\x1B[38;2;255;105;180m"
	#define GREEN_TEXT "\x1B[32m"

    //menu.c
    void pembuka();
    void mainMenu();
    void ulangMenang();
    void ulangKalah();
    void penutup();

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
