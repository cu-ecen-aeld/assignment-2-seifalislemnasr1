#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

int main(int argc, char *argv[]){
	
	
    if (argc < 3) {
        fprintf(stderr, "Argument(s) missing");
        return 1;
    }
    const char *path = argv[1];
    const char *word = argv[2];
    FILE *f;
    f = fopen(path,"w");
    if (f == NULL){
    	openlog("Writer", LOG_PID, LOG_USER);
    	syslog(LOG_ERR,"Error accessing %s",path);
    	closelog();
    	fclose(f);	
    	return 1;
    	}

    else {	
    	fprintf(f,"%s\n",word);
    	fclose(f);
    	openlog("Writer", LOG_PID, LOG_USER);
    	syslog(LOG_DEBUG, "Writing %s to %s",word,path);
    	closelog();
    	return 0;
    	}

}    
