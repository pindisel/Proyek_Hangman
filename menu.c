#include "header.h"

//Tampilan pertama saat program pertama kali dijalankan
void pembuka()
{
	system ("cls");
	printf (PINK_TEXT"\t\t\t        ______      ______   ______________    ______           ______          _______________     _____\n");
	printf ("\t\t\t       /     /     /     /  /             /   /     /          /     /         /               \\   /    /\n");                                              
    printf ("\t\t\t      /     /     /     /  /     ________/   /     /          /     /         /    ______      /  /    /\n");                                       
    printf ("\t\t\t     /     /_____/     /  /     /_____      /     /          /     /         /    /      \\    /  /    / \n");                                                          
    printf ("\t\t\t    /                 /  /           /     /     /          /     /         /    /       /   /  /    / \n");                                         
    printf ("\t\t\t   /     ______      /  /     ______/     /     /          /     /         /    /       /   /  /    / \n");                                            
    printf ("\t\t\t  /     /     /     /  /     /________   /     /_______   /     /_______  /     \\______/   /  /____/\n");                                                                                    
    printf ("\t\t\t /     /     /     /  /              /  /             /  /             / /                /  _____  \n");                                                                       
    printf ("\t\t\t/_____/     /_____/  /______________/  /_____________/  /_____________/  \\_______________/  /____/\n"RESET);
	Sleep (5000);
}

//Tampilan menu utama
void mainMenu()
{
	system ("cls");
	printf (GREEN_TEXT"\t\t\t              \\        / ___ |  ___  ___         ___\n");                                                                                                                                  
    printf ("\t\t\t               \\  /\\  / |___|| /    / . \\ |/\\/\\ |___|\n");                                                                                                                                       
    printf ("\t\t\t                \\/  \\/  \\___ | \\___ \\___/ | | | \\___\n"RESET);
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

//Tampilan menu utama setelah pemain menang
void ulangMenang()
{
	system ("cls");
	printf (YELLOW_TEXT"\t\t\t\t      `.`               `.`               `.`         \n"); 
    printf ("\t\t\t\t```````````````   ```````````````   ```````````````    \n");
    printf ("\t\t\t\t````.`````..```   ````.`````..```   ````.`````..```     \n");
    printf ("\t\t\t\t   `````````         `````````         `````````        \n");
    printf ("\t\t\t\t   `.`````.`        `.`````.`         `.`````.`         \n");
    printf ("\t\t\t\t  ```     ```      ```     ```       ```     ```        \n"RESET);

	printf ("\t\t\t   ________________________________________________________________\n");
    printf ("\t\t\t  / ______________________________________________________________ \\\n");
    printf ("\t\t\t / /                                    __                        \\ \\\n");                                                              
    printf ("\t\t\t | |                     |_|  /\\  |\\ | /  _                       | |\n");                                                                                                             
    printf ("\t\t\t | |                     | | /  \\ | \\| \\__/                       | |\n");                                                                                                        
    printf ("\t\t\t | |                                                              | |\n");                                                                                                   
    printf ("\t\t\t | |                      |\\  /|  /\\  |\\ |                        | |\n");                                                                                              
    printf ("\t\t\t | |                      | \\/ | /  \\ | \\|                        | |\n");                                                                                         
    printf ("\t\t\t | |                                                              | |\n");                                                                                    
    printf ("\t\t\t | |                         YOU WIN!!!                           | |\n");                                                                               
    printf ("\t\t\t | |                                                              | |\n");                                                                          
    printf ("\t\t\t | |                           MENU                               | |\n");                                                                     
    printf ("\t\t\t | |                                                              | |\n");                                                                
    printf ("\t\t\t | |                     1. Play again                            | |\n");                                                           
    printf ("\t\t\t | |                     2. How to play                           | |\n");                                                      
    printf ("\t\t\t | |                     3. Themes                                | |\n");     
    printf ("\t\t\t | |                     4. Exit                                  | |\n");                                                                                                               
    printf ("\t\t\t | |                                                              | |\n");          
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                    
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                   
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                    
    printf ("\t\t\t \\ \\______________________________________________________________/ /\n");                                                             
    printf ("\t\t\t  \\________________________________________________________________/\n");
	
}

//Tampilan menu utama setelah pemain kalah
void ulangKalah()
{
	system ("cls");
	printf (GRAY_TEXT"\t\t\t      _____________                                                     \n");
	printf ("\t\t\t     |\\/\\/\\/\\/\\/\\/\\|                                         \n");
	printf ("\t\t\t     |    rest     |                                         \n");
	printf ("\t\t\t     |     in      |                                         \n");
	printf ("\t\t\t     |    peace    |                                         \n");
	printf ("\t\t\t     |   HANGMAN   |___________________________________          \n");
	printf ("\t\t\t     |_____________/    .,;.,;.,;,.,.,,;,.,.,;,.     |       \n");
	printf ("\t\t\t     |\\|||||||||||/ .  ,.;,.'/,.'  ;,.     ,,.;       |       \n");
	printf ("\t\t\t     | \\|||||||||/  ,.''   /,....  ...   /,./ ..  ,.  |       \n");
	printf ("\t\t\t     |__\\_______/____________________________________|          \n"RESET);
	printf ("\t\t\t   ________________________________________________________________           \n");
    printf ("\t\t\t  / ______________________________________________________________ \\\n");
    printf ("\t\t\t / /                                    __                        \\ \\\n");                                                              
    printf ("\t\t\t | |                     |_|  /\\  |\\ | /  _                       | |\n");                                                                                                             
    printf ("\t\t\t | |                     | | /  \\ | \\| \\__/                       | |\n");                                                                                                        
    printf ("\t\t\t | |                                                              | |\n");                                                                                                   
    printf ("\t\t\t | |                      |\\  /|  /\\  |\\ |                        | |\n");                                                                                              
    printf ("\t\t\t | |                      | \\/ | /  \\ | \\|                        | |\n");                                                                                         
    printf ("\t\t\t | |                                                              | |\n");                                                                                    
    printf ("\t\t\t | |                         YOU LOSE!!!                          | |\n");                                                                               
    printf ("\t\t\t | |                                                              | |\n");                                                                          
    printf ("\t\t\t | |                           MENU                               | |\n");                                                                     
    printf ("\t\t\t | |                                                              | |\n");                                                                
    printf ("\t\t\t | |                     1. Play again                            | |\n");                                                           
    printf ("\t\t\t | |                     2. How to play                           | |\n");                                                      
    printf ("\t\t\t | |                     3. Themes                                | |\n");                                                                                                                 
    printf ("\t\t\t | |                     4. Exit                                  | |\n");                                                                                                               
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                   
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                    
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                   
    printf ("\t\t\t | |                                                              | |\n");                                                                                                                    
    printf ("\t\t\t \\ \\______________________________________________________________/ /\n");                                                             
    printf ("\t\t\t  \\________________________________________________________________/\n");
	
}

//Tampilan saat ingin keluar dari program
void penutup()
{
	system("cls");
	printf(PINK_TEXT"\t\t\t  ___________________   ______      ______   ___________          ______          ______    ______     ______                 \n");                                                                                                            
    printf("\t\t\t /                  /  /     /     /     /  /    ___    |        /      \\        /     /   /     /   _/    _/                \n");                                                     
    printf("\t\t\t/_____        _____/  /     /     /     /  /    /  |    |       /        \\      /     /   /     /  _/    _/                  \n");                                                      
    printf("\t\t\t      /      /       /     /_____/     /  /    /   |    |      /          \\    /     /   /     /__/    _/                    \n");                                               
    printf("\t\t\t     /      /       /                 /  /    /____|    |     /     /\\     \\  /     /   /            _/                     \n");                                   
    printf("\t\t\t    /      /       /     ______      /  /     _____     |    /     /  \\     \\/     /   /           _/                       \n");                                 
    printf("\t\t\t   /      /       /     /     /     /  /     /     |    |   /     /    \\          /   /     /\\     \\                       \n");                           
    printf("\t\t\t  /      /       /     /     /     /  /     /      |    |  /     /      \\        /   /     /  \\     \\                      \n");                      
    printf("\t\t\t /______/       /_____/     /_____/  /_____/       |____| /_____/        \\______/   /_____/    \\_____\\                     \n");                                                          


    printf ("\t\t\t                 _____      _____    ________________      ______    ______      _____                  \n");
    printf ("\t\t\t                 \\    \\    /    /   /                \\    /     /   /     /     /    /               \n");
    printf ("\t\t\t                  \\    \\  /    /   /    ______       /   /     /   /     /     /    /                 \n");                       
    printf ("\t\t\t                   \\    \\/    /   /    /      \\     /   /     /   /     /     /    /                 \n");      
    printf ("\t\t\t                    \\        /   /    /       /    /   /     /   /     /     /    /                    \n");                 
    printf ("\t\t\t                     |      /   /    /       /    /   /     /   /     /     /    /                      \n");
    printf ("\t\t\t                    /      /   /     \\______/    /   /      \\__/     /     /____/                     \n");                               
    printf ("\t\t\t                   /      /   /                 /   /               /     _____                         \n");                                  
    printf ("\t\t\t                  /______/    \\________________/    \\______________/     /____/                       \n"RESET);
}
