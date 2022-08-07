#include<stdio.h>
#include<string.h>

int main()
{
	char s[1000] ;
	printf("Enter a word:");
	gets(s) ;
	printf("Length of given String is %d",strlen(s));
	return 0 ;
}