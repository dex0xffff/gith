#ifndef GITH_HEADER
#define GITH_HEADER

#define CMD_SIZE 256

// print basic usage for the app
void printUsage(void);

// take the argument as execute it as a command 
int runCommand(char*);

// use argv to create command string and place into string provided
char* buildCommand(char**, char*);

// based on the argument, execute a saved command string
char* parseArg(char*);

// print the footer of the program
void printFooter(void);


#endif
