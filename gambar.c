#include "header.h"

//Tampilan hangman disaat nyawa = 3
void three()
{
	printf ("\t\t\t     ________________________________________       \n");
	printf ("\t\t\t    |    HANGMAN                             |           /\\/\\  /\\/\\  /\\/\\   \n");
	printf ("\t\t\t    |    ____________________________________|           \\  /  \\  /  \\  /       \n");
	printf ("\t\t\t    |   |                              \\   /              \\/    \\/    \\/          \n");
	printf ("\t\t\t    |   |                               \\ /                         \n");
	printf ("\t\t\t    |   |                                |                                  \n");
	printf ("\t\t\t    |   |                                |                                 \n");
	printf ("\t\t\t    |   |                                |                                  \n");
	printf ("\t\t\t    |   |                               _|_                                  \n");
	printf ("\t\t\t    |   |                              |___|                                   \n");
	printf ("\t\t\t    |   |                              _____                                  \n");
	printf ("\t\t\t    |   |                             | ^ ^ |                                \n");
    printf ("\t\t\t    |   |                             |__>__|                                     \n");
	printf ("\t\t\t    |   |                               _|_                                 \n");
	printf ("\t\t\t    |   |                              / | \\                                  \n");
	printf ("\t\t\t    |   |                             /  |  \\                                 \n");
	printf ("\t\t\t    |   |                                |                                  \n");
    printf ("\t\t\t    |   |                               / \\                                  \n");
    printf ("\t\t\t    |   |                              /   \\                                  \n");
    printf ("\t\t\t    |___|===================================================        \n");
}

//Tampilan hangman disaat nyawa = 2
void two()
{
	printf ("\t\t\t    "BROWN_BG"                                          "RESET"               \n");
	printf ("\t\t\t    "BROWN_BG"     HANGMAN                              "RESET"         /\\/\\  /\\/\\    \n");
	printf ("\t\t\t    "BROWN_BG"                                          "RESET"         \\  /  \\  /     \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                              \\   /            \\/    \\/     \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                               \\ /     \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                                |          \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                                |       \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                                |  \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                                |     \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                                |    \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                              __|__   \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                             | 0 0 | \n");
    printf ("\t\t\t    "BROWN_BG"     "RESET"                             |_---_|   \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                               |_|    \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                              / | \\   \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                             /  |  \\       \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                                |     \n");
    printf ("\t\t\t    "BROWN_BG"     "RESET"                               / \\                                  \n");
    printf ("\t\t\t    "BROWN_BG"     "RESET"                              /   \\                                  \n");
    printf ("\t\t\t    "BROWN_BG"     "RESET"===================================================         \n");

}

//Tampilan hangman disaat nyawa = 1
void one ()
{


	printf ("\t\t\t    "BROWN_BG"                                          "RESET"               \n");
	printf ("\t\t\t    "BROWN_BG"     HANGMAN                              "RESET"         /\\/\\                      \n");
	printf ("\t\t\t    "BROWN_BG"                                          "RESET"         \\  /          \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                              \\   /            \\/                    \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                               \\ /                            \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                                |                                \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                                |                                  \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                              __|__                                  \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                             | _ _ |                               \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                             |__+__|                               \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                               |_|                                 \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                              / | \\                           \n");
    printf ("\t\t\t    "BROWN_BG"     "RESET"                             /  |  \\                             \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                                |                                 \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                               / \\                              \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                              /   \\                          \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                                                                  \n");
    printf ("\t\t\t    "BROWN_BG"     "RESET"                                                             \n");
    printf ("\t\t\t    "BROWN_BG"     "RESET"                                                                \n");
    printf ("\t\t\t    "BROWN_BG"     "RESET"===================================================             \n");

}

//Tampilan hangman disaat nyawa = 0
void dead()
{

	printf ("\t\t\t    "BROWN_BG"                                          "RESET"      \n");
	printf ("\t\t\t    "BROWN_BG"     HANGMAN                              "RESET"                               \n");
	printf ("\t\t\t    "BROWN_BG"                                          "RESET"   \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                              \\   /                              \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                               \\ /                            \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                                |                                \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                                |                                  \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"    ==YOU LOSE==              __|__                                  \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"     TRY AGAIN               | X X |                               \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                             |_===_|                               \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                               |_|                                 \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                              / | \\                           \n");
    printf ("\t\t\t    "BROWN_BG"     "RESET"                             /  |  \\                             \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                               |                                 \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                               / \\                              \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                              /   \\                          \n");
	printf ("\t\t\t    "BROWN_BG"     "RESET"                                                                  \n");
    printf ("\t\t\t    "BROWN_BG"     "RESET"                                                            \n");
    printf ("\t\t\t    "BROWN_BG"     "RESET"                                                                \n");
    printf ("\t\t\t    "BROWN_BG"     "RESET"===================================================       \n");

}


//Tampilan hangman disaat nyawa tidak habis
void alive()
{

    printf ("\t\t\t     ________________________________________      \n");
	printf ("\t\t\t    |    HANGMAN                             |             \n");
	printf ("\t\t\t    |    ____________________________________|              \n");
	printf ("\t\t\t    |   |                              \\   /                    \n");
	printf ("\t\t\t    |   |                               \\ /                         \n");
	printf ("\t\t\t    |   |                                |                                  \n");
	printf ("\t\t\t    |   |    =YOU WIN=                   |                                 \n");
	printf ("\t\t\t    |   |    LETS DANCE                  |                                  \n");
	printf ("\t\t\t    |   |     TOGETHER                  _|_                                  \n");
	printf ("\t\t\t    |   |                              |___|                                   \n");
	printf ("\t\t\t    |   |                              _____                                  \n");
	printf ("\t\t\t    |   |                             | ^ ^ |                                \n");
    printf ("\t\t\t    |   |                             |_'>'_|                                     \n");
	printf ("\t\t\t    |   |                               _|_                                 \n");
	printf ("\t\t\t    |   |                         \\_/\\_/ |\\_/\\_/                                  \n");
	printf ("\t\t\t    |   |                                |                                   \n");
	printf ("\t\t\t    |   |                                |                                  \n");
    printf ("\t\t\t    |   |                               / \\                                  \n");
    printf ("\t\t\t    |   |                              /   \\                                  \n");
    printf ("\t\t\t    |___|===================================================    \n");


}
