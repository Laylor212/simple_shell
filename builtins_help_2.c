#include "main.h"

void help_env(void);
void help_setenv(void);
void help_unsetenv(void);
void help_history(void);

/**
<<<<<<< HEAD
 * help_env - Displays information on the shellby builtin command 'env'.
 */
void help_env(void)
{
	char *msg = "env: env\n\tPrints the current environmaent.\n;

	write(STDOUT_FILENO, msg, _strlen(msg));

}

/**
 * help_setenv - Displays imformation on the shellby builtin command 'setenv';
=======
 * help_env - Displays information on the shell builtin command 'env'
 */
void help_env(void)
{
	char *msg = "env: env\n\tPrints the current environment.\n";

	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * help_setenv - Displays information on the shell builtin command 'setenv'
>>>>>>> 684715145c71230c6d6610f63d048749b3c3d07c
 */
void help_setenv(void)
{
	char *msg = "setenv: setenv [VARIABLE] [VALUE]\n\tInitializes a new";

	write(STDOUT_FILENO, msg, _strlen(msg));
<<<<<<< HEAD
	msg = "environment variable, or modifies an existing one.\n\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "\tUpon failure, prints a message to stderr.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));

}

/**
 * help_unsetenv - Displays information on the shellby builtin command
 * 'unsetenv'
 */
void help_unsetenv(void)
{
	char *msg = "unsetenv: unsetenv [VARIABLE]\n\tRemoves an ";

	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "environmental variable.\n\n\tUpon failure, prints a ";
	write(STDOUT_FILENO, masg, _strlen(msg));
	msg = "message to stderr.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));

=======
	msg = "environment variable, or modifies an existing one.\n\n!";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "\tUpon failure, prints a message to stderr.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
}

/**
 * help_unsetenv - Displays information on the shell builtin command 'unsetenv'
 */
void help_unsetenv(void)
{
	char *msg = "unsetenv: unsetenv [VARIABLE]\n\Removes an ";
	
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "environmental variable.\n\n\tUpon failure, prints a ";
	write(STDOUT_FILENO, msg, _strlen(msg));
	msg = "message to stderr.\n";
	write(STDOUT_FILENO, msg, _strlen(msg));
>>>>>>> 684715145c71230c6d6610f63d048749b3c3d07c
}
