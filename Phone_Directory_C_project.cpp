#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct phoneDirec
{
    char name[25];
    char nickName[25];
    char address[50];
    char Surname[30];
    char mother_name[30];
    char mble_no[20];
    char gmailAdress[50];
    int postal_code;
    char work[50];
    char Network[30];
    char city[50];
    char relationship[50];
    int citision_no;
};
 
//Function prototypes
void printInfo(phoneDirec[]);
void printlist(phoneDirec []) ;
void SortInteger(phoneDirec[]);
void SortString(phoneDirec []);
void searchByName(phoneDirec []);
void searchByPostalCode(phoneDirec []);
void DeleteEntry(phoneDirec []);
void input(phoneDirec *);
void output(phoneDirec);
void createCont(phoneDirec []);
void modifyRecord(phoneDirec []);
void checkDupli(phoneDirec []);
void mergeDubli(phoneDirec []);
void hideFromCont(phoneDirec []);

 //main func 
    int main()
    {
    	
   phoneDirec D[20]= {
	{"Tariq", "Teoro",  "Bhittai Crossing",     "IShfaq",  "Amna",    "03305613777",    "tariq4@gmail.com",  1041,"Doctor",   "Ufone",     "Karachi",     "Brother",        2002},	
	{"Hafsa", "Bella",  "Travis Smith Rd,GA",   "Hashim",  "Fatima",  "03355613777",    "WAsfa@gmail.com",   1042,"Teacher",  "Zong",      "Georgia",     "Sister",         3052},
	{"Amir",  "abcd",   "Garden Deer Prk,TX",   "ADDULLAH","maryam",  "03335055477",    "mEamir@gmail.com",  1043,"CEO",      "Telenr",   "Texas",       "Uncle",          3759},
	{"Kainat","abcd",   "Duke Fort Smith,AR",   "AADID",   "maha",    "03314510105",    "Kicnt@gmail.com",   1044,"S.Pipal",   "EMble",  "Arkansas",    "Aunty",          1005},
	{"Haris", "Fyt",    "SE 72nd Ocala,FL",     "AHMED",   "malaika", "03406662367",    "emHris@gmail.com",  1045,"enginer",   "O2",        "Florida",     "Brother",    4472},
	{"Maha",  "Grte",   "H. Grove Oakland",     "HASSAN",  "elsa",    "03321556062",    "maha12@gmail.com",  1046,"Labour",    "V.Mble",  "Tennesee",   "Sister",     3806},
	{"Nabela","Arc",    "Gar Springs Oakland",  "FAIZAN",  "hiba",    "03155400331",    "NAbela@gmail.com",  1047,"as.mngr",   "Three", "Tennesee",   "Aunty",          9380},
	{"Ali",   "Bnxcb",  "Center Oak Oakland",   "AZAL",    "Amina",   "03127566741",    "ali78@gmail.com",   1048,"labour",    "T.Mbie",  "Tennesee",   "Father",     2232},
	{"Zenat", "Cghd",   "M.A.Jinnah Road",      "HAROON",  "ASMA",    "03137546522",    "Zenat@gmail.com",   1049,"S.inarge",  "Jazzz",      "Lahore",      "Aunty",          8721},
	{"Malik", "Dytz",   "Hasrat Mohani Road",   "UZAIR",   "maheeda", "03105070341",    "AMalik@gmail.com",  1050,"l.inrge",   "Warid",     "multan",      "uncle",          9821},
	{"Nelam", "Etyx",   "Paris Road 1d21d",     "KHIZER",  "ASMA",    "03340420000",    "Nelam@gmail.com",   1051,"l.engir",   "telnor",   "Sailkot",     "sister",         9856},
	{"Noor",  "Absx",   "St.#10, Cantt.uyt",    "ASAD",    "maryam",  "03345737563",    "noorZf@gmail.com",  1052,"w.develr",  "Jazz",      "Rwalpindi",   "sister",  4783},
	{"Naima", "Bxii",   "INÖNÜ C N 33/8jk",     "JALAL",   "elsabe",  "03412400553",    "Naimi@gamil.com",   1053,"Programer", "T.Telm", "Izmir",       "Khala",          3257},	
	{"Miral", "Dimpii", "C 4.S N 4 Merktez",    "AZIZ",    "ASMA",    "03105026542",    "Miral@gmail.com",   1054,"Designer",  "V.fone",  "Antalya",     "CZN",            2008},
	{"Rizwan","Ciraz",  "1.C N 43/C, Demevler", "Karzan",  "Laiba",   "03334425307",    "Rizoy@gmail.com",   1055,"tailor",    "VOXI",      "Ankara",      "CXN",            2088},
	{"Laiba", "aska",    "CB 71 Rehmatabad",    "TAHIR",   "Nagena",  "03201235423",    "Laiba2@gmail.com",  1056,"And.deve",  "ufone",     "Abbotabad",   "Sister",         7654},
	{"Nimra", "Bimo",    "st.8 Rawalpindi yt",  "TAHIR",   "Memo",    "03025412451",    "Nimra@gmail.com",   1057,"D.Biotec",  "Zong",     "Rawalpidi",   "Sister",         3421},
	{"Hamid", "Abdul",  "St.2 j.town Karchi",   "KAZIM",   "Amna",    "03004532672",    "Hamid@gmail.com",   1058,"Pubg plyr", "VOXI",      "karachi",   "Brother",       7832},
	{"Kinza", "Azka",   "St.4 Near Balakot",    "AMIR ",   "Hafsa",   "03027612224",    "Kinza@gmail.com",   1059,"civil.eng", "Zong",      "BAlakot",   "B Czn",          9784},
	{"Laiba", "aska",   "CB 71 Rehmatabad",    "TAHIR",   "Nagena",   "03262363323",     "emlai@gmail.com",   1060,"And.deve",   "jazz",     "Abbotabad",   "Sister",        7654}

			
	}; 
int ch;	
do{
    	printf("\t----------------------------------------------------------------------------------\n");
    	printf("\t\t\t\tWelcome to contact managment system\n");
    	printf("\t----------------------------------------------------------------------------------\n");
    	
		printf("\n\n\n\t\t\t\t\tMAIN MENU\n\t\t\t\t=============================\n\t\t\t\t[1] List all Contacts\n\t\t\t\t[2] Display in tabular form\n\t\t\t\t[3] Print All Alphabatically\n\t\t\t\t[4] Sort by number\n\t\t\t\t[5] Search by Name\n\t\t\t\t[6] Search by Postal code\n\t\t\t\t[7] Delete Entry\n\t\t\t\t[8] Modify Record\n\t\t\t\t[9] Create Contact\n\t\t\t\t[10] Check Dublicate\n\t\t\t\t[11] Put mble_no under Dubli name\n\t\t\t\t[12] Hide From Contact List\n\t\t\t\t[13] Exit All\n\t\t\t\t=============================\n\t\t\t\t");
        printf("Plz Enter Option.......:");
    	scanf("%d",&ch);
switch(ch)
{
	case 1:
		printInfo(D);
		break;
	case 2:
		printlist(D);
		break;
	case 3:
		SortString(D);
		break;
	case 4:
		SortInteger(D);
		break;
	case 5:
	  searchByName(D);
	  break;
	case 6:
	  searchByPostalCode(D);
		break;
	case 7:
	    DeleteEntry(D);
		break;
	case 8:
	    modifyRecord(D)	;
	    break;
	case 9:
		createCont(D);
		break;
	case 10:	
		checkDupli(D);
		break;
	case 11:	
		mergeDubli(D);
		break;
	case 12:		
        hideFromCont(D);
        break;
	    			
}
}while(ch<13);
}
 
//function definations
  
   //print info in list
	void printInfo(phoneDirec D[])
{
	int k;
		for(k = 0; k <= 19; k++)
		 {
	    printf(" ------------\n");
		printf("| Record: %d |\n", 1+k);
		printf(" ------------\n");
		printf("Name: %s \n", D[k].name);
		printf("Nick Name: %s \n", D[k].nickName);
		printf("Father Name: %s \n", D[k].Surname);
		printf("Mother Name: %s \n", D[k].mother_name);
		printf("Address: %s \n", D[k].address);
		printf("Mble_no: %s \n", D[k].mble_no);
		printf("gmailAdress: %s \n", D[k].gmailAdress);
		printf("Postal_code: %d \n", D[k].postal_code);
		printf("Designation/work: %s \n", D[k].work);
		printf("Network: %s\n", D[k].Network);
		printf("Area: %s \n", D[k].city);
		printf("Relation: %s \n", D[k].relationship);
		printf("Citision_no: %d \n", D[k].citision_no);
    	printf("****************************************\n");
	    }
	    printf("\n\n");
}

//print info in tabular form
void printlist(phoneDirec b[]) 
{	
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("NAME\t ADDRESS\t         MOBILE NUMBER\t     GMAIL \t     CTZEN NO.\tPS CODE     DESIGNATION\t       NETWORK\t      CITY\t      RELATION\t\n");
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");	    
	for(int k = 0; k <= 19; k++) {
		printf("%s\t %s\t %s\t  %s\t %d\t  %d\t      %s\t        %s\t      %s\t      %s\t   \n", b[k].name, b[k].address , b[k].mble_no , b[k].gmailAdress, b[k].citision_no, b[k].postal_code, b[k].work, b[k].Network, b[k].city, b[k].relationship);
	    
	}printf("\n\n");
}

//sort by ps_code
void SortInteger(phoneDirec b[]) {	
for (int j=0; j <= 19; j++) {
	for (int i=0; i <= 18; i++) {
		if(b[i].postal_code > b[i+1].postal_code) {
			phoneDirec t = b[i];
			b[i] = b[i+1];
			b[i+1] = t;
		}
	}
}
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("NAME\t ADDRESS\t         MOBILE NUMBER\t     GMAIL \t     CTZEN NO.\tPS CODE     DESIGNATION\t       NETWORK\t      CITY\t      RELATION\t\n");
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");	    
	for(int k = 0; k <= 19; k++) {
		printf("%s\t %s\t %s\t  %s\t %d\t  %d\t      %s\t        %s\t      %s\t      %s\t   \n", b[k].name, b[k].address , b[k].mble_no , b[k].gmailAdress, b[k].citision_no, b[k].postal_code, b[k].work, b[k].Network, b[k].city, b[k].relationship);
	}printf("\n\n");
}

//sort by name
void SortString(phoneDirec b[]) {
for (int j=0; j <= 19; j++) 
{
	for (int i=0; i <= 18; i++) 
	{
		if(strcmp(b[i].name, b[i+1].name) == 1) 
		{
			phoneDirec t = b[i];
			b[i] = b[i+1];
			b[i+1] = t;
		}
	}
}
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("NAME\t ADDRESS\t         MOBILE NUMBER\t     GMAIL \t     CTZEN NO.\tPS CODE     DESIGNATION\t       NETWORK\t      CITY\t    RELATIONSHIP\t\n");
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");	    
	for(int k = 0; k <= 19; k++) {
		printf("%s\t %s\t %s\t  %s\t %d\t  %d\t      %s\t        %s\t      %s\t      %s\t   \n", b[k].name, b[k].address , b[k].mble_no , b[k].gmailAdress, b[k].citision_no, b[k].postal_code, b[k].work, b[k].Network, b[k].city, b[k].relationship);
	}
	printf("\n\n");
}

//search by string(name)
void searchByName(phoneDirec D[])
{
	char name[100];
	printf("\n\n\t\t  Enter name to search its respective info :");
	scanf("%s", name);
    int flg=0;
	for(int k=0;k<20;k++)
	{
		if(strcmp(name,D[k].name)==0)
		{
		flg=1;
        printf("___________________________________\n\n");
		printf("| Name         : %s    \n", D[k].name);
		printf("| Nick Name    : %s      \n", D[k].nickName);
		printf("| Sur Name     : %s      \n", D[k].Surname);
		printf("| MotherName   : %s     \n", D[k].mother_name);
		printf("| Address      : %s         \n", D[k].address);
		printf("| Mble_no      : %s           \n", D[k].mble_no);
		printf("| gmailAdress  : %s        \n", D[k].gmailAdress);
		printf("| Postal_code  : %d            \n", D[k].postal_code);
		printf("| Designation  : %s            \n", D[k].work);
		printf("| Network      : %s            \n", D[k].Network);
		printf("| Area         : %s            \n", D[k].city);
		printf("| Reltionship  : %s            \n", D[k].relationship);
		printf("| Citision_no  : %d            \n", D[k].citision_no);
        printf("___________________________________\n");
		    
		}
	}
		if(flg==0){
		printf("\nRecord does't exist\n\\n");
		}	
		printf("\n\n");
}

//search by int(postal code)
void searchByPostalCode(phoneDirec D[])
{
    int postal_code;
	printf("\n\n\t\t  Enter postal_code(4 digit)to get respective info :");
    scanf("%d",&postal_code);
    int flg=0;
	for(int k=0;k<=19;k++)
	{
		if(postal_code==D[k].postal_code)
		{
	flg=1;
	printf("\nRecord found___\n\n");
		printf("| Name         : %s \n", D[k].name);
		printf("| Nick Name    : %s  \n", D[k].nickName);
		printf("| Sur Name     : %s  \n", D[k].Surname);
		printf("| MotherName   : %s \n", D[k].mother_name);
		printf("| Address      : %s  \n", D[k].address);
		printf("| Mble_no      : %d  \n", D[k].mble_no);
		printf("| gmailAdress  : %s  \n", D[k].gmailAdress);
		printf("| Postal_code  : %d  \n", D[k].postal_code);
		printf("| Designation  : %s  \n", D[k].work);
		printf("| Network      : %s  \n", D[k].Network);
		printf("| Area         : %s  \n", D[k].city);
		printf("| Reltionship  : %s   \n", D[k].relationship);
		printf("| Citision_no  : %d   \n", D[k].citision_no);
        printf("\n\n\n");
	}
}
	if(flg==0){
		printf("\nRecord does't exist\n\n");
	}
	printf("\n\n");	
}

//input fun	
void input(phoneDirec *b)
{
	printf("\nEnter Information for new entry :\n");
	
	        printf(" Name:");
            scanf("%s",b->name);
            fflush(stdin);
            
	        printf("Nick name:");
            gets(b->nickName);
            
            printf("Address:");
            gets(b->address);
            
             printf("Surname:");
            gets(b->Surname);
            
            printf("mother_name:");
            gets(b->mother_name);
            
            printf("mbl no:");
            gets(b->mble_no);
            
            printf("gmail Address:");
            gets(b->gmailAdress);
            
            printf("Designation:");
            gets(b->work);
            
            printf("Network:");
            gets(b->Network);
            
            printf("City:");
            gets(b->city);
            
            printf("relationship:");
            gets(b->relationship);
            
            printf("postal code:");
            scanf("%d",&b->postal_code);
            
			printf("citizen no:");
            scanf("%d",&b->citision_no);
  }
 //ouput fun 
void output(phoneDirec b)
{
//	printf("Name:%s\n Nick Name: %s\n Address: %s\n Surname: %s\n mother_name: %s\n mble_no:   %c\n gmailAdress: %s\n postal_code: %d\n Designation: %s\n Network: %s\n city: %s\n relationship: %s\n Citizen_no: %d\n",
	
//	b.name,b.nickName,	b.address,b.Surname ,b.mother_name ,b.mble_no,b.gmailAdress, b.postal_code,b.work,b.Network,b.city,b.relationship,b.citision_no);  
	           
printf("%s\t %s\t %s\t  %s\t %d\t  %d\t      %s\t        %s\t      %s\t      %s\t   \n", b.name, b.address , b.mble_no , b.gmailAdress, b.citision_no, b.postal_code, b.work, b.Network, b.city, b.relationship);
}  
  	
//add new contact and its info
void createCont(phoneDirec b[])
{
	
	phoneDirec b1;
	input(&b1);
	system("cls");
	  	
	 printf("\n\t\t\t\t\t***************************\n");
	 printf("\t\t\t                  UPDAED CONTACTS INFO:") ;
	 printf("\n\t\t\t\t\t***************************\n");
	 
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("NAME\t ADDRESS\t         MOBILE NUMBER\t     GMAIL \t     CTZEN NO.\tPS CODE     DESIGNATION\t       NETWORK\t      CITY\t    RELATIONSHIP\t\n");
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	
	 output(b1);
	 for (int k = 0; k < 20; k++)
    {
           
printf("%s\t %s\t %s\t  %s\t %d\t  %d\t      %s\t        %s\t      %s\t      %s\t   \n", b[k].name, b[k].address , b[k].mble_no , b[k].gmailAdress, b[k].citision_no, b[k].postal_code, b[k].work, b[k].Network, b[k].city, b[k].relationship);
	
   }
}
	  		
//delete entry
void DeleteEntry (phoneDirec b[])
{    
  char name[25];
   int  k, index = -1;
            
			printf(" Name:");
            scanf("%s",name);

 for(k = 0; k < 20; k++)
    {
        
		if(strcmp(b[k].name,name) == 0) 
        {
            index = k;
            break;
        }
    }

    if(index != -1)
    {
        //shift all the element from index+1 by one position to the left
        for(k = index; k < 19; k++)
            b[k] = b[k+1];
            
        printf("\n\t\t\t\t\t******************************");
        printf("\n\t\t\t                    AFTER DELETION UPDATED INFO IS");
        printf("\n\t\t\t\t\t******************************\n");
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("NAME\t ADDRESS\t         MOBILE NUMBER\t     GMAIL \t     CTZEN NO.\tPS CODE     DESIGNATION\t       NETWORK\t      CITY\t    RELATIONSHIP\t\n");
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        
        for(k = 0; k < 19; k++){
     printf("%s\t %s\t %s\t  %s\t %d\t  %d\t      %s\t        %s\t      %s\t      %s\t   \n", b[k].name, b[k].address , b[k].mble_no , 
	 b[k].gmailAdress, b[k].citision_no, b[k].postal_code, b[k].work, b[k].Network, b[k].city, b[k].relationship);
		}
    }
    else
        printf("Element Not Found\n");
   
} 
//mogify contact information
 void modifyRecord(phoneDirec  b[])
{
	int flg=0;
	char Modifier_Name[100];
	fflush(stdin);
	printf("Enter Modifier Name:");
	scanf("%s",Modifier_Name);
	
	for (int k=0;k<20;k++)
	{
	flg==0;
		if(strcmp(Modifier_Name,b[k].name)==0)
	{
	printf("\nPlease Enter New Details  \n\n");
    fflush(stdin);
    
	printf("Name:");
    gets(b[k].name);
    fflush(stdin);
	
    printf("Nick name:");
    gets(b[k].nickName);
    
    printf("address:");
    gets(b[k].address);
    
   printf("Surname:");
   gets(b[k].Surname);
            
     printf("mother_name:");
    gets(b[k].mother_name);
            
    printf("mbl no:");
    gets(b[k].mble_no);
           
    printf("gmail Address:");
    gets(b[k].gmailAdress);
           
     printf("Network:");
    gets(b[k].Network);
        
   printf("City:");
   gets(b[k].city);
            
    printf("Relationship:");
    gets(b[k].relationship);
            
    printf("Designation:");
    gets(b[k].work);
            
    printf("postal code:");
    scanf("%d",&b[k].postal_code); 
    
	printf("Citizen no:");
    scanf("%d",&b[k].citision_no);
            
      printf("\n\t\t\t\t***************************\n");
	 printf("\t\t\t          MODIFIED CONTACTS INFO:") ;
	 printf("\n\t\t\t\t***************************\n");       
    printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("NAME\t ADDRESS\t         MOBILE NUMBER\t     GMAIL \t     CTZEN NO.\tPS CODE     DESIGNATION\t       NETWORK\t      CITY\t    RELATIONSHIP\t\n");
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");	    
    printf("%s\t %s\t %s\t  %s\t %d\t  %d\t      %s\t        %s\t      %s\t      %s\t   \n", b[k].name, b[k].address , b[k].mble_no , b[k].gmailAdress, b[k].citision_no, b[k].postal_code, b[k].work, b[k].Network, b[k].city, b[k].relationship);
	 
flg=1;

    }
}	
     printf("\n\t\t\t\t***************************\n");
	 printf("\t\t\t             CONTACTS  INFO:") ;
	 printf("\n\t\t\t\t***************************\n");
	 
	 printlist(b);
	 
    if(flg==0)
	printf("sorry! no match found.\n");
}
		
////duplicate checker (name)
void checkDupli(phoneDirec b[])
{
    printf("\n--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("NAME\t ADDRESS\t         MOBILE NUMBER\t     GMAIL \t     CTZEN NO.\tPS CODE     DESIGNATION\t       NETWORK\t      CITY\t    RELATIONSHIP\t\n");
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	for(int i = 0; i < 20; i++) 
	{    
        for(int k = i + 1; k < 20; k++) 
		{    
            if(strcmp(b[i].name,b[k].name)==0)  
			{
	     printf("%s\t %s\t %s\t  %s\t %d\t  %d\t      %s\t        %s\t      %s\t      %s\t   \n", b[k].name, b[k].address , b[k].mble_no , b[k].gmailAdress, b[k].citision_no, b[k].postal_code, b[k].work, b[k].Network, b[k].city, b[k].relationship);	    
	     
			}   	    
	   }
    }	 
}
//merge mble_no of dubli name
void mergeDubli(phoneDirec b[])
{
	printf("\n\t\t******************************\n");
       printf("\t\t  MBLE NO. OF DUBLICATE NAME:");
       printf("\n\t\t******************************\n");
   for(int i = 0; i < 20; i++) 
	{    
        for(int k = i + 1; k < 20; k++) 
		{    
            if( strcmp(b[i].name,b[k].name)==0)  
			{
		 printf("\t\tPerson name:%s\n\n", b[k].name);
		 printf("\t\tMobile numbers:\n");
	     printf("\t\t%s\n",b[k].mble_no);
			} 	  	    
	    }   
    }	
}

//hide from cont
void hideFromCont(phoneDirec b[])
{
	 char hiderName[20]; 
	// empty string to hide info
    char nullStr[20] = {"\0"}; 
    
    printf("\nEnter name to hide its data: ");
    scanf("%s", hiderName); 
    
    int flg=0;
            
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("NAME\t ADDRESS\t         MOBILE NUMBER\t     GMAIL \t     CTZEN NO.\tPS CODE     DESIGNATION\t       NETWORK\t      CITY\t    RELATIONSHIP\t\n");
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    for (int k = 0; k < 20; k++)
    {
        if (strcmp(hiderName, b[k].name) == 0) 
            {	
            	
				flg=1;
                    strcpy(b[k].name, nullStr);//Put null 
					strcpy(b[k].address, nullStr);
					strcpy(b[k].gmailAdress, nullStr);
					strcpy(b[k].Network, nullStr);
					strcpy(b[k].city, nullStr);
					strcpy(b[k].mble_no, nullStr);
					strcpy(b[k].work, nullStr);
					strcpy(b[k].relationship, nullStr);
				    b[k].citision_no=0;
				    b[k].postal_code=0;
		 }	    
printf("%s\t %s\t %s\t  %s\t %d\t  %d\t      %s\t        %s\t      %s\t      %s\t   \n", b[k].name, b[k].address , b[k].mble_no , b[k].gmailAdress, b[k].citision_no, b[k].postal_code, b[k].work, b[k].Network, b[k].city, b[k].relationship);
	
   }
    if(flg==0)
	printf("Sorry! no match found.\n");
}

