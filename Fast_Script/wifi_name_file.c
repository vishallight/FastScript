 #include<stdio.h>						//creating file to save wlan moniter mode name//whulw installing onlky one time
 #include<string.h>
 main()
 {
	 FILE *wlan;
	 char wlan_n[1000];//wlan_re[1000];
	 wlan=fopen("wlan_name.txt","w");			//opening file to write wlanmon name
	 
	 puts("enter the waln monitor mode name DEFAULT [wlan0mon] PRESS 'd'");
	  gets(wlan_n);								//getting wlan moniter name
	  
	  if(strcmp(wlan_n,"D")==0||strcmp(wlan_n,"d")==0)
		 {
			fprintf(wlan,"wlan0mon");
		}
	  else
			fprintf(wlan,wlan_n);
			
	   fclose(wlan);							//closing  (write) file
 
	
		wlan=fopen("wlan_name.txt","r");		//opening file to read mode	wlanmon name
		
	 fscanf(wlan,"%s",wlan_n);
		printf("%s",wlan_n);
	 fclose(wlan);	
	
	 							//closing  (read) file
 }
	 
