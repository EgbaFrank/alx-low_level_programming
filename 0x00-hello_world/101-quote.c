#include <stdio.h>
#include <unistd.h>

/**
  * main - prints a message using write
  *
  * Return: Always (0) success;
  */
int main(void)
{
	char message[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, message, sizeof(message));

	return (1);
}
