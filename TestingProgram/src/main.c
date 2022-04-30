 /*
  * Author: Charlotte Ruth, Joshua Obiero, Ernest Wambua
  * Purpose: Testing
  * Date: 27/01/2021
  * 
  * */
 
 #include <stdio.h>

 int secret ( const char *s1, const char *s2 );
 int main( void ){
	 char first[ 30 ];
	 char second[ 30 ];
	 printf( "Enter two strings: " );
	 scanf( "%s%s", first , second);
	 printf( "The outcome is %d\n", secret (first, second) );
	 return 0;
 }
 
 int secret ( const char *s1, const char *s2 ){
	 for ( ; *s1 != '\0' && *s2 != '\0'; s1++, s2++ ) {
		 if ( *s1 != *s2 )
			return 0;
	 }
	return 1;
 } 