#include "delay.c"
#define clear system("clear");

 
log()					//SYSTEM LOG INFO
{ 
	 FILE *log;						
	 log=fopen("log.txt","a");
	fprintf(log,"File Opened on Time : %s	Date :%s\n", __TIME__ ,__DATE__);  
	fclose(log);
}
 


void intro()
{
	char a[100];
	int i=0;
	clear;
	 printf(RED"                \t\t");	  	printf(BRED"><<<<<<<<      ><         ><< <<  ><<< ><<<<<<       ><< <<      ><<                     ><<< ><<<<<< \n");
    printf("         ÜÛßÛÛÛÜ\t\t");			printf(BRED"><<           >< <<     ><<    ><<     ><<         ><<    ><< ><<   ><<        ><             ><<    \n"); 
    printf("         ÛÛÛÛÛÛÛÛ\t\t");		printf(BRED"><<          ><  ><<     ><<           ><<          ><<      ><<       >< ><<<   >< ><<       ><<    \n");
    printf("         ÛÛÛÛÛßßß\t\t");		printf(BRED"><<<<<<     ><<   ><<      ><<         ><<            ><<    ><<        ><<   ><<><  ><<      ><<    \n");
	printf(" Û      ÜÛÛÛÛßßß \t\t");		printf(BBLU"><<        ><<<<<< ><<        ><<      ><<               ><< ><<        ><<   ><<><   ><<     ><<    \n");
    printf(" ÛÛÜ  ÜÛÛÛÛÛÛÜÜÜ \t\t");		printf(BBLU"><<       ><<       ><< ><<    ><<     ><<         ><<    ><< ><<   ><< ><<   ><<><< ><<      ><<    \n");
    printf(" ßÛÛÛÛÛÛÛÛÛÛÛ  ß \t\t");		printf(BBLU"><<      ><<         ><<  ><< <<       ><<           ><< <<     ><<<<  ><<<   ><<><<          ><<    \n");
    printf("   ßÛÛÛÛÛÛÛß     \t\t");		printf(BBLU"                                                                                 ><<                      \n");
    printf("    ÛÛß ßÛ       \n");
	printf("    ÛÜ   ÛÜ      "RESET);
puts(GRN "\n\n\n\n\n\n\n\n\t\t\tEnter To move on -->"RESET);
	gets(a);
	
	clear;
		while(i<100)
		{
			
			 delay(10000);
			printf(BGRN"%d \n"RESET,i);
			if(i==99)
				delay(900000);
			i++;
			 
		}
		clear;
		puts(GRN"100%"RESET "LOADING"BLU "........." RESET " OVER \n\n\n\t\t"BCYN" Press any Key \n"RESET);
			gets(a);
		clear;
		
}
