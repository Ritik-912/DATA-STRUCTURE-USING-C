#include<stdio.h>
#include<string.h>

void partStr(const char *s1,const char *s2)
{
	const char *p = s1 ;
	int check = 0 ;
	while( *( p++ ) != '\0' ) ;
	while(p != s1){
		while( *( p-- ) != ' ' || p != s1 ) ;
printf("\n*p = '%c'\n",*p);
		while( *( p++ ) == ' ' && p != s1 ) ;
printf("\n*p = '%c'\n",*p);
		int j = strcmp(p,s2) ; printf("\nj=%d\n",j) ;
		if( j == 0 ){
			printf("\n \t yes it is part of string \t \n") ;
			check = 1 ;
		}
	}
	if( check == 0 )
		printf("\n \t no string not exist \t \n") ;
		
}

int main()
{
	printf("Enter String :\t") ;
	char s1[1000] ;
	char s2[100] ;
	gets(s1) ;
	printf("Enter String to check for :\t") ;
	scanf("%s", &s2) ;
	partStr(s1,s2) ;
	return 0;
}