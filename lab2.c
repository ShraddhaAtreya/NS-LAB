#include<stdio.h>
#include<string.h>

int main()
{
	char password[10];
	int passcheck = 0;
	printf("Enter the Password: \n");
	gets(password);
	if(strcmp(password, "root123")){
	  printf("Wrong Password\n");
}

	else {
	  printf("Access granted\n");
	  passcheck = 1;
        }

	if(passcheck){
	 printf("You are continued to wprk\n");
}

return 0;

}
