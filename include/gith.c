#ifndef GITH_C
#define GITH_C

void 
printUsage(void) {
    printf( "usage: gith [local|push]\n");
    
    printf( 
            "\tlocal - sync up the local git directory \n"
            "\t\tthis runs git status, git add ., and git commit\n"
          );
}



int
runCommand(char* command){
    // select the commnd to run based on input command line
    int result = system(command);
    if (result == 0) { 
        return 0; 
    } else { 
        return 1; 
    }
}

char*
buildCommand(char** argv, char* command) {
    strcpy(command, argv[1] " " argv[2]);
    return command;
}

char* 
parseArg(char* argument) {
    if ((strcmp(argument,"local")) == 0 ) {
        return "git add . && git status && git commit";
    } else if ((strcmp(argument,"push")) == 0 ) {
        return "git config --global credential.helper cache --timeout --replace-all && git push origin master";
    } else {
        return "echo \"try another option\"";
    }
}
#endif
