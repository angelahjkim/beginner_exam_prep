/*  rostring breakdown

Conceptual overview:

skip_whitespace

MAIN
If exactly 0 arguments have been given
	print a newline and exit
set char *str to the beginning of the first argument
create an array named "words" containing several thousand char * pointers initialized to NULL
set int i to 0
while str points to a non-'\0' character
	while str points to a whitespace, non-'\0' character
		set the character pointed to by str to '\0'
		increment str forward one character
	if str points to a non-'\0' character
		set element i in the array words to the value of str
	while str points to a non-whitespace, non-'\0' character
		increment str forward one character
	if str points to a non-'\0' character
		set i to its own value plus 1
set int i to 1
while element i of the array words is a non-NULL pointer
	print the string pointed to by element i of words
	set i to its own value plus 1
if element 0 of the array words is a non-NULL pointer
	print the string pointed to by element 0 of words
print a newline

---- C O D E ----

*/




/*  Test Cases

./rostring "Que la      lumiere soit et la lumiere fut"
./rostring "     AkjhZ zLKIJz , 23y"
./rostring "first" "2" "11000000"
./rostring "abc"
./rostring " abc"
./rostring "abc "
./rostring "abc def"
./rostring "abc  def   ghi    "
./rostring ""
./rostring " "

*/