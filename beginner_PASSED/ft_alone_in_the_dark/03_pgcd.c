/*  pgcd breakdown

Conceptual overview:
If exactly 2 arguments have been given
	print a newline and exit
set int x to integer value of first argument
set int y to integer value of second argument
set int test to the smaller of x and y
while test is greater than 0
	if test divides x evenly and test divides y evenly
		print test and exit
	else
		set test to its own value minus 1
print a newline and exit.

---- C O D E ----

*/



/* Test Cases

./pgcd "920556" "1980488"
./pgcd "1803684" "3539916"
./pgcd "15" "18"
./pgcd "1" "17"

*/