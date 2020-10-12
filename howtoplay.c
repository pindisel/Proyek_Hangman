#include "header.h"
    
    
void petunjuk()
{    
	system("cls");
    printf ("           __    __   ______  ____    ____    ___          \n");                                                                                    
    printf ("          |  |  |  | /  __  \\ \\   \\  /    \\  /  /        \n");                                                                       
    printf ("          |  |__|  | | |  | |  \\   \\/  /\\  \\/  /     \n"); 
	printf ("          |   __   | | |__| |   \\     /  \\    /      \n");                                                                                    
    printf ("          |__|  |__| \\______/    \\___/    \\__/       \n");                                                                       
    printf ("                                                        \n");                                                                                    
    printf ("                 __________    ______              \n");                                                                       
    printf ("                |___    ___|  /  __  \\          \n"); 
	printf ("                    |  |      | |  | |             \n");                                                                                    
    printf ("                    |  |      | |__| |             \n");                                                                       
    printf ("                    |__|      \\______/        \n");   
    printf ("                                                        \n");                                                                                    
    printf ("     ________                     _____    ___      ___             \n");                                                                       
    printf ("     |   __  \\   ___             /     \\   \\  \\    /  /           \n");
    printf ("     |  |__| |  |  |            /   _   \\   \\  \\__/  /         \n");                                                                                    
    printf ("     |  ____ /  |  |           /   / \\   \\   \\__  __/          \n");                                                                       
    printf ("     |   |      |  |          /   /   \\   \\    |  |            \n");
    printf ("     |   |      |  |_____    /   /     \\   \\   |  |                   \n");                                                                                    
    printf ("     |___|      |________|  /___/       \\___\\  |__|           \n");                                                                       
   
    printf ("                                                            \n");
    printf ("   ________________________________________________________________      \n");
    printf ("  / ______________________________________________________________ \\    \n");
    printf (" / /                                                              \\ \\        \n");                                                              
    printf (" | |                                                               | |     \n");                                                                                                             
    printf (" | |    * This game provides 3 themes of words                     | |      \n");                                                                                                        
    printf (" | |    * Each theme has 8 types of words                          | |    \n");                                                                                                   
    printf (" | |                                                               | |   \n");                                                                                              
    printf (" | |    1. First, you have to select one of the 3 available        | |   \n");                                                                                         
    printf (" | |        themes                                                 | |      \n");                                                                                    
    printf (" | |                                                               | |      \n"); 
    printf (" | |    2. You can only enter 1 letter each time to until          | |  \n");                                                                               
    printf (" | |        you complete the whole word                            | |   \n");                                                                          
    printf (" | |                                                               | |   \n");                                                                     
    printf (" | |    3. You only have 3 lives.                                  | |  \n");                                                                
    printf (" | |                                                               | |   \n");                                                           
    printf (" | |    4. Every time you enter the wrong letter, your life will   | |  \n");                                                      
    printf (" | |         be reduced and the hanged will be hung even more.     | |         \n");                                                                                                                 
    printf (" | |                                                               | |           \n");                                                                                                               
    printf (" | |    5. If your life runs out, you lose.                        | |       \n");                                                                                                                   
    printf (" | |                                                               | |      \n");                                                                                                                                  
    printf (" | |                                                               | |      \n");                                                                                                                    
    printf (" \\ \\______________________________________________________________/ /      \n");                                                             
    printf ("  \\________________________________________________________________/\n");
    Sleep (5000);
    printf ("\n\nPress any key to continue");
    int i;
	for (i; i < 4; i ++)
	{
		printf (" . ");
		Sleep (500);
	}
	getch();
	
}
