#include "header.h"
#include <windows.h>
#define BOLD "\x1b[1m"
#define RESET "\x1b[0m"

/*
    system ("XY")
    X = background
    Y = text
    0 = Black   8 = Gray
    1 = Blue    9 = Light Blue
    2 = Green   A = Light Green
    3 = Aqua    B = Light Aqua
    4 = Red     C = Light Red
    5 = Purple  D = Light Purple
    6 = Yellow  E = Light Yellow
    7 = White   F = Bright White
    */

void pembuka()
{
	system ("cls");
	printf ("\t\t\t        ______      ______   ______________    ______           ______          _______________     _____\n");
	printf ("\t\t\t       /     /     /     /  /             /   /     /          /     /         /               \\   /    /\n");                                              
    printf ("\t\t\t      /     /     /     /  /     ________/   /     /          /     /         /    ______      /  /    /\n");                                       
    printf ("\t\t\t     /     /_____/     /  /     /_____      /     /          /     /         /    /      \\    /  /    / \n");                                                          
    printf ("\t\t\t    /                 /  /           /     /     /          /     /         /    /       /   /  /    / \n");                                         
    printf ("\t\t\t   /     ______      /  /     ______/     /     /          /     /         /    /       /   /  /    / \n");                                            
    printf ("\t\t\t  /     /     /     /  /     /________   /     /_______   /     /_______  /     \\______/   /  /____/\n");                                                                                    
    printf ("\t\t\t /     /     /     /  /              /  /             /  /             / /                /  _____  \n");                                                                       
    printf ("\t\t\t/_____/     /_____/  /______________/  /_____________/  /_____________/  \\_______________/  /____/\n");
	Sleep (5000);
}

void mainMenu()
{
	system ("cls");
	printf ("\t\t\t              \\        / ___ |  ___  ___         ___\n");                                                                                                                                  
    printf ("\t\t\t               \\  /\\  / |___|| /    / . \\ |/\\/\\ |___|\n");                                                                                                                                       
    printf ("\t\t\t                \\/  \\/  \\___ | \\___ \\___/ | | | \\___\n");
    printf ("\t\t\t   ________________________________________________________________\n");
    printf ("\t\t\t  / ______________________________________________________________ \\\n");
    printf ("\t\t\t / /                                    __                        \\ \\\n");                                                              
    printf ("\t\t\t | |                     |_|  /\\  |\\ | /  _                       | |\n");                                                                                                             
    printf ("\t\t\t | |                     | | /  \\ | \\| \\__/                       | |\n");                                                                                                        
    printf ("\t\t\t | |                                                              | |\n");                                                                                                   
    printf ("\t\t\t | |                      |\\  /|  /\\  |\\ |                        | |\n");                                                                                              
    printf ("\t\t\t | |                      | \\/ | /  \\ | \\|                        | |\n");                                                                                         
    printf ("\t\t\t | |                                                              | |\n");                                                                                    
    printf ("\t\t\t | |                                                              | |\n");                                                                               
    printf ("\t\t\t | |                                                              | |\n");                                                                          
    printf ("\t\t\t | |                           MENU                               | |\n");                                                                     
    printf ("\t\t\t | |                                                              | |\n");                                                                
    printf ("\t\t\t | |                     1. Start playing                         | |\n");                                                           
    printf ("\t\t\t | |                     2. How to Play                           | |\n");                                                      
    printf ("\t\t\t | |                     3. Themes                                | |\n");                                                                                                                 
    printf ("\t\t\t | |                     4. Exit                                  | |\n");                                                                                                               
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                   
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                    
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                   
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                    
    printf ("\t\t\t \\ \\______________________________________________________________/ /\n");                                                             
    printf ("\t\t\t  \\________________________________________________________________/\n");
    
}

void ulang()
{
	   printf ("\t\t\t   ________________________________________________________________\n");
    printf ("\t\t\t  / ______________________________________________________________ \\\n");
    printf ("\t\t\t / /                                    __                        \\ \\\n");                                                              
    printf ("\t\t\t | |                     |_|  /\\  |\\ | /  _                       | |\n");                                                                                                             
    printf ("\t\t\t | |                     | | /  \\ | \\| \\__/                       | |\n");                                                                                                        
    printf ("\t\t\t | |                                                              | |\n");                                                                                                   
    printf ("\t\t\t | |                      |\\  /|  /\\  |\\ |                        | |\n");                                                                                              
    printf ("\t\t\t | |                      | \\/ | /  \\ | \\|                        | |\n");                                                                                         
    printf ("\t\t\t | |                                                              | |\n");                                                                                    
    printf ("\t\t\t | |                                                              | |\n");                                                                               
    printf ("\t\t\t | |                                                              | |\n");                                                                          
    printf ("\t\t\t | |                           MENU                               | |\n");                                                                     
    printf ("\t\t\t | |                                                              | |\n");                                                                
    printf ("\t\t\t | |                     1. Play again                            | |\n");                                                           
    printf ("\t\t\t | |                     2. How to play                           | |\n");                                                      
    printf ("\t\t\t | |                     3. Exit                                  | |\n");                                                                                                                 
    printf ("\t\t\t | |                                                              | |\n");                                                                                                               
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                   
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                    
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                   
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                    
    printf ("\t\t\t \\ \\______________________________________________________________/ /\n");                                                             
    printf ("\t\t\t  \\________________________________________________________________/\n");
	
}
