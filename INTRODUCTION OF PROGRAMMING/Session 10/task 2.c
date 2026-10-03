#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	char fname[30],uname[5];
	printf("Enter Your Full Name : ");
	gets(fname);
	
	if (strlen(fname) < 5)
    {
        strcpy(uname, fname);
    }
    else
    {
        strncpy(uname, fname, 5);
        uname[5] = '\0';
    }
    
    printf("\nUserName : %s",uname);

	getch();
}
