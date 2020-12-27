/*
* Author: Ernest Wambua
* Date: 27/12/20 11:00
* Purpose: Understand the relationship between arrays and pointers
*/

# include <stdio.h>


int main(int argc, char **argv)
{
	char name[] = "Ernest";
	printf("name = %s name[0] = %c &name = %p &name[0] = %p name = %p", name, name[0], &name, &name[0], name);
	return 0;
	/*
	 * name => contents of the name array: Ernest
	 * name[0] => first element in the name array: E
	 * &name => address of the name array: points to the first element in the array
	 * &name[0] => address of the first element in the array
	 * name => points to the first element in the name array
	*/
}