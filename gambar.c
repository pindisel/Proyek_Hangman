#include "header.h"

//Tampilan hangman disaat nyawa = 3
void three()
{
	printf ("     ________________________________________       \n");
	printf ("    |    HANGMAN                             |           /\\/\\  /\\/\\  /\\/\\   \n");
	printf ("    |    ____________________________________|           \\  /  \\  /  \\  /       \n");
	printf ("    |   |                              \\   /              \\/    \\/    \\/          \n");
	printf ("    |   |                               \\ /                         \n");
	printf ("    |   |                                |                                  \n");
	printf ("    |   |                                |                                 \n");
	printf ("    |   |                                |                                  \n");
	printf ("    |   |                               _|_                                  \n");
	printf ("    |   |                              |___|                                   \n");
	printf ("    |   |                              _____                                  \n");
	printf ("    |   |                             | ^ ^ |                                \n");
    printf ("    |   |                             |__>__|                                     \n");
	printf ("    |   |                               _|_                                 \n");
	printf ("    |   |                              / | \\                                  \n");
	printf ("    |   |                             /  |  \\                                 \n");
	printf ("    |   |                                |                                  \n");
    printf ("    |   |                               / \\                                  \n");
    printf ("    |   |                              /   \\                                  \n");
    printf ("    |___|===================================================        \n");
}

//Tampilan hangman disaat nyawa = 2
void two()
{
	printf ("     ________________________________________          \n");
	printf ("    |    HANGMAN                             |         /\\/\\  /\\/\\    \n");
	printf ("    |    ____________________________________|         \\  /  \\  /     \n");
	printf ("    |   |                              \\   /            \\/    \\/     \n");
	printf ("    |   |                               \\ /     \n");
	printf ("    |   |                                |          \n");
	printf ("    |   |                                |       \n");
	printf ("    |   |                                |  \n");
	printf ("    |   |                                |     \n");
	printf ("    |   |                                |    \n");
	printf ("    |   |                              __|__   \n");
	printf ("    |   |                             | 0 0 | \n");
    printf ("    |   |                             |_---_|   \n");
	printf ("    |   |                               |_|    \n");
	printf ("    |   |                              / | \\   \n");
	printf ("    |   |                             /  |  \\       \n");
	printf ("    |   |                                |     \n");
    printf ("    |   |                               / \\                                  \n");
    printf ("    |   |                              /   \\                                  \n");
    printf ("    |___|===================================================         \n");

}

//Tampilan hangman disaat nyawa = 1
void one ()
{

	printf ("     ________________________________________                 \n");
	printf ("    |    HANGMAN                             |         /\\/\\                      \n");
	printf ("    |    ____________________________________|         \\  /          \n");
	printf ("    |   |                              \\   /            \\/                    \n");
	printf ("    |   |                               \\ /                            \n");
	printf ("    |   |                                |                                \n");
	printf ("    |   |                                |                                  \n");
	printf ("    |   |                              __|__                                  \n");
	printf ("    |   |                             | _ _ |                               \n");
	printf ("    |   |                             |__+__|                               \n");
	printf ("    |   |                               |_|                                 \n");
	printf ("    |   |                              / | \\                           \n");
    printf ("    |   |                             /  |  \\                             \n");
	printf ("    |   |                                |                                 \n");
	printf ("    |   |                               / \\                              \n");
	printf ("    |   |                              /   \\                          \n");
	printf ("    |   |                                                                  \n");
    printf ("    |   |                                                             \n");
    printf ("    |   |                                                                \n");
    printf ("    |___|===================================================             \n");

}

//Tampilan hangman disaat nyawa = 0
void dead()
{
	printf ("     ________________________________________       \n");
	printf ("    |    HANGMAN                             |                               \n");
	printf ("    |    ____________________________________|   \n");
	printf ("    |   |                              \\   /                              \n");
	printf ("    |   |                               \\ /                            \n");
	printf ("    |   |                                |                                \n");
	printf ("    |   |                                |                                  \n");
	printf ("    |   |    ==YOU LOSE==              __|__                                  \n");
	printf ("    |   |     TRY AGAIN               | X X |                               \n");
	printf ("    |   |                             |_===_|                               \n");
	printf ("    |   |                               |_|                                 \n");
	printf ("    |   |                              / | \\                           \n");
    printf ("    |   |                             /  |  \\                             \n");
	printf ("    |   |                                |                                 \n");
	printf ("    |   |                               / \\                              \n");
	printf ("    |   |                              /   \\                          \n");
	printf ("    |   |                                                                  \n");
    printf ("    |   |                                                             \n");
    printf ("    |   |                                                                \n");
    printf ("    |___|===================================================       \n");

}

//Tampilan hangman disaat nyawa tidak habis
void alive()
{
    printf ("     ________________________________________      \n");
	printf ("    |    HANGMAN                             |             \n");
	printf ("    |    ____________________________________|              \n");
	printf ("    |   |                              \\   /                    \n");
	printf ("    |   |                               \\ /                         \n");
	printf ("    |   |                                |                                  \n");
	printf ("    |   |    =YOU WIN=                   |                                 \n");
	printf ("    |   |    LETS DANCE                  |                                  \n");
	printf ("    |   |     TOGETHER                  _|_                                  \n");
	printf ("    |   |                              |___|                                   \n");
	printf ("    |   |                              _____                                  \n");
	printf ("    |   |                             | ^ ^ |                                \n");
    printf ("    |   |                             |_'>'_|                                     \n");
	printf ("    |   |                               _|_                                 \n");
	printf ("    |   |                         \\_/\\_/ |\\_/\\_/                                  \n");
	printf ("    |   |                                |                                   \n");
	printf ("    |   |                                |                                  \n");
    printf ("    |   |                               / \\                                  \n");
    printf ("    |   |                              /   \\                                  \n");
    printf ("    |___|===================================================    \n");


}
