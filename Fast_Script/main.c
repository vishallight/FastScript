#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
#include "color.c"
#include "browser.c"
#include "intro.c"
#include "wifi.c"	
 
wifi(int c);
man();
  
void main()
{
		log(); 				//Sysyem Log info
		
		 intro(); 			//introduction loading function
		man();				//Real programm starts
		
}
man()
{
			int ch;
			char ping[1000],p_s[10000],a[100];		//ping variables
			char nmap[10000],n_s[1000];				//open_port_scan variable (nmap)
			
			puts(YEL"\tYOUR PUBLIC IP :"RESET);
				system("curl ifconfig.me");
			puts(YEL"\n\tYOUR Sysyem name :"RESET);
				system("hostname"); 
			
		
		puts(RED "ENTER THE NUMBERS TO DO THE BELOW ACTIONS" RESET);
	 	puts(BBLU"[0].Enable WIFI BACK");	
	 	puts(BYEL"[1].Wlan Monitor START \t[10].Wlan Monitor STOP"); 
		puts(BGRN"[2].Netdiscover \n[3].Browser");
		puts("[4].Public Ip");
		puts("[5].Apache2 Start \t[6].Apache2 Stop");
		puts("[7].Ping");
		puts("[8].Open Ports Scan");
		puts("[9].SCAN Network");
		puts("[11].Cut your Neighbour's Internet");
		
		puts(CYN"\n\t\t\t\t\t\t\tTO EXIT ENTER close\n"RESET);
		
		scanf("%d",&ch);
				clear;
		switch(ch)
			 {
				case 2:
				puts(BGRN);
					system("netdiscover");
					clear;
					man();
				case 3:
					browser();				//browser function
					clear;
					man();
				case 4:						//Public ip
					 system("curl ifconfig.me");
					 puts("Enter EXIT to exit");
					 scanf("%s",&a);
					 clear;
					 man();
				case 5:						//apache2 start
					 system("service apache2 start");
					 clear;
					 man();
				case 6:						//apache2 stop
					 system("service apache2 stop");
					 clear;
					 man();
				case 7:						//ping
					  clear;
					puts(BGRN"Enter The Site/IP to START "RESET);
						scanf("%s",&ping);
					sprintf(p_s,"ping %s",ping);
				puts(BRED);
					system(p_s);  puts(RESET);
					clear;
					man();
				case 8:						//open port scan (nmap)
					puts(BGRN"Enter The Site/IP to START "RESET);
					puts(MAG);	scanf("%s",&nmap);	puts(RESET);
						sprintf(n_s,"nmap %s",nmap);
					system(n_s);
					puts(BCYN"Enter EXIT to exit"RESET);
					scanf("%s",&a);
						clear;
					man();
				case 9:
				case 0:
				case 1:
				case 10:
					wifi(ch);
					man();
			 	case 11:
					wifi_kill();
					man();
							
				 default:
					puts(BGRN"\n\n\n\n\t\t\tClosing Program............DONE"RESET);
					exit(1);
			}
  
 
		
	}
	

	
	
