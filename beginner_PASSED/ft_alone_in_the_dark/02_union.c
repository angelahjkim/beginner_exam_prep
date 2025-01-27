/*  ulstr breakdown

Conceptual overview:
1. Write a full program that is called from the command line
2. Check if exactly 1 argument has been given (argc == 2)
	A. If a different number of arguments has been given, print a newline and exit
	B. Otherwise, continue to #3.
3. Step through the string given as argument, doing the following for each character:
	A. If the character is a null-terminator, stop going through the string.
	B. If the character is not a letter, print it.
	C. If the character is a letter, switch its case and print it.
4. Print a newline and exit.


---- C O D E ----

*/

#include <unistd.h>			//needed for write()

int		main(int ac, char **av)
{
	int		i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	i = 0;
	while (av[1][i] != '\0')	//keep going until you reach the end of the string
	{
		if ((av[1][i] >= 'A' && av[1][i] <= 'Z') || (av[1][i] >= 'a' && av[1][i] <= 'z'))
			av[1][i] = av[1][i] ^ 32;		//If current char is a letter, swap its case
		write(1, &av[1][i], 1);				//Write a single char
		i++;
	}

	write(1, "\n", 1);						//Don't forget your newline!
	return (0);
}

/*
-----------------

Test cases:
./ulstr "PeTEr PIpeR pICKeD A PeCK of pIckLEd PEPPers." | cat -e
./ulstr "[  97A pEcK OF picKLED pePPErS PeTEr PIpeR picked.]  " | cat -e
./ulstr "abc" "dec" | cat -e
./ulstr "" | cat -e

*/