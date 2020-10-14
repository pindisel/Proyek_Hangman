#include "header.h"
    
    
void petunjuk()
{    
	system("cls");
    printf ("\t\t\t           __    __   ______  ____    ____    ___          \n");                                                                                    
    printf ("\t\t\t          |  |  |  | /  __  \\ \\   \\  /    \\  /  /        \n");                                                                       
    printf ("\t\t\t          |  |__|  | | |  | |  \\   \\/  /\\  \\/  /     \n"); 
	printf ("\t\t\t         |   __   | | |__| |   \\     /  \\    /      \n");                                                                                    
    printf ("\t\t\t          |__|  |__| \\______/    \\___/    \\__/       \n");                                                                       
    printf ("\t\t\t                                                       \n");                                                                                    
    printf ("\t\t\t                 __________    ______              \n");                                                                       
    printf ("\t\t\t                |___    ___|  /  __  \\          \n"); 
	printf ("\t\t\t                    |  |      | |  | |             \n");                                                                                    
    printf ("\t\t\t                    |  |      | |__| |             \n");                                                                       
    printf ("\t\t\t                    |__|      \\______/        \n");   
    printf ("\t\t\t                                                        \n");                                                                                    
    printf ("\t\t\t     ________                     _____    ___      ___             \n");                                                                       
    printf ("\t\t\t     |   __  \\   ___             /     \\   \\  \\    /  /           \n");
    printf ("\t\t\t     |  |__| |  |  |            /   _   \\   \\  \\__/  /         \n");                                                                                    
    printf ("\t\t\t     |  ____ /  |  |           /   / \\   \\   \\__  __/          \n");                                                                       
    printf ("\t\t\t     |   |      |  |          /   /   \\   \\    |  |            \n");
    printf ("\t\t\t     |   |      |  |_____    /   /     \\   \\   |  |                   \n");                                                                                    
    printf ("\t\t\t     |___|      |________|  /___/       \\___\\  |__|           \n");                                                                       
   
    printf ("\t\t\t                                                            \n");
    printf ("\t\t\t   ________________________________________________________________      \n");
    printf ("\t\t\t  / ______________________________________________________________ \\    \n");
    printf ("\t\t\t / /                                                              \\ \\        \n");                                                              
    printf ("\t\t\t | |                                                               | |     \n");                                                                                                             
    printf ("\t\t\t | |    * This game provides 3 themes of words                     | |      \n");                                                                                                        
    printf ("\t\t\t | |    * Each theme has 8 types of words                          | |    \n");                                                                                                   
    printf ("\t\t\t | |                                                               | |   \n");                                                                                              
    printf ("\t\t\t | |    1. First, you have to select one of the 3 available        | |   \n");                                                                                         
    printf ("\t\t\t | |        themes                                                 | |      \n");                                                                                    
    printf ("\t\t\t | |                                                               | |      \n"); 
    printf ("\t\t\t | |    2. You can only enter 1 letter each time to until          | |  \n");                                                                               
    printf ("\t\t\t | |        you complete the whole word                            | |   \n");                                                                          
    printf ("\t\t\t | |                                                               | |   \n");                                                                     
    printf ("\t\t\t | |    3. You only have 3 lives.                                  | |  \n");                                                                
    printf ("\t\t\t | |                                                               | |   \n");                                                           
    printf ("\t\t\t | |    4. Every time you enter the wrong letter, your life will   | |  \n");                                                      
    printf ("\t\t\t | |         be reduced and the hanged will be hung even more.     | |         \n");                                                                                                                 
    printf ("\t\t\t | |                                                               | |           \n");                                                                                                               
    printf ("\t\t\t | |    5. If your life runs out, you lose.                        | |       \n");                                                                                                                   
    printf ("\t\t\t | |                                                               | |      \n");                                                                                                                                  
    printf ("\t\t\t | |                                                               | |      \n");                                                                                                                    
    printf ("\t\t\t \\ \\______________________________________________________________/ /      \n");                                                             
    printf ("\t\t\t  \\________________________________________________________________/\n");
    Sleep (1500);
    printf ("\n\nPress any key to continue");
    int i;
	for (i; i < 4; i ++)
	{
		printf (" . ");
		Sleep (500);
	}
	getch();
	
}
