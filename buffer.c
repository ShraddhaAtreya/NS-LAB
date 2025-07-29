#include<stdio.h>
#include<string.h>

# define MAX 10

int main(){

 char buf[MAX];
 printf("Enter Characters: ");
 fgets(buf, MAX, stdin);
 printf("String is %s\n", buf);
return 0;
}
