					//BROWSER
 #define clear system("clear");
  browser()
{
	
	int bro,c;
	
	char bro_s[1000000],sear[1000];
	char a,brows_over[10000];
 
	puts("\n\t\t\t Select the Browser  \n1.FIREFOX \n2.CHROME\n");
		scanf("%d",&bro);		//selcting the browser
		clear;
	puts("\t\t\t Enter the word to SEARCH in \n");
		scanf("%s",&sear);		// search in to
		clear;
		if(bro==1)
			sprintf(bro_s,"firefox");
		else if(bro==2)
			sprintf(bro_s,"google-chrome");
			 
	sprintf(brows_over,"%s www.google.com/search?q=%s",bro_s,sear);
		system(brows_over);
		clear;
		
}
