#include "bootpack.h"

int string_len(char* s)
{
	int i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	return i;
}

void update_date_time(struct SHEET *sht_back)
{
	struct BOOTINFO *binfo = (struct BOOTINFO *) ADR_BOOTINFO;
	int y,m,d;
	char s[30];
	y=get_year();m=get_mon_hex();d=get_day_of_month();
	char result[10];
	if(m==1||m==2) {
  	m+=12;
 	y--;
 	}
  	int iWeek=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1;
    	
  	switch(iWeek)
  	{
  		case 1:
   			strcpy(result,"Mon.");
    		break;
    	case 2:
  	  		strcpy(result,"Tues.");
 	   		break;
    	case 3:
    		strcpy(result,"Wed.");
    		break;
    	case 4:
    		strcpy(result,"Thur.");
    		break;
    	case 5:
    		strcpy(result,"Fri.");
    		break;
    	case 6:
    		strcpy(result,"Sat.");
    		break;
   		case 7:
   			strcpy(result,"Sun.");
   			break;
	}		
	//?Ž¦“úŠú
	sprintf(s, "%02d/%02d/%02d %s", get_year()%100, get_mon_hex(), get_day_of_month(),result);
	putfonts8_asc_sht(sht_back, binfo->scrnx - 174, binfo->scrny -20, 0, BACKC, s, 15);
		//?Ž¦??
	sprintf(s, "%02d:%02d:%02d", get_hour_hex(), get_min_hex(),get_sec_hex());
	putfonts8_asc_sht(sht_back, binfo->scrnx - 69, binfo->scrny -20, 0, BACKC, s, 8);
}

void put_71gn(struct CONSOLE *cons)
{
	cons_putstr0(cons,"\n _______     ___     _______   ____     _\n|____   |   /   |   / ______| |    \\   | |\n     / /   /_/| |  | |   ___  | |\\  \\  | |\n    / /       | |  | |  |_    | | \\  \\ | |\n   / /        | |  | |____| | | |  \\  \\| |\n  /_/         |_|  |________| |_|   \\____|    Deep Space\n\n");
}

void put_w24(struct CONSOLE *cons)
{
	cons_putstr0(cons,"\n _    _   _____   _   _\n| |  | | |___  | | | | |\n| |  | |  ___| | | |_| |_\n| |  | | |  ___| |___   _| \n| |/\\| | | |___      | |\n \\_/\\_/  |_____|     |_|Studio\n\n");
}
