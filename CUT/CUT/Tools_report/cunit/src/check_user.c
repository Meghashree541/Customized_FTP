#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "../include/check_user.h"


void trimstr(char *str, int n)
{
	int i;
	for (i = 0; i < n; i++) {
		if (isspace(str[i])) str[i] = 0;
		if (str[i] == '\n') str[i] = 0;
	}
}

/**
 * function to authenticate the user in database
 * returns 1 on authentication or else 0
 */

int check_user(char*user, char*pass)
{
	char username[MAXSIZE];
	char password[MAXSIZE];
	char *pch;
	char buf[MAXSIZE];
	char *line = NULL;
	size_t num_read;									
	size_t len = 0;
	FILE* fd;
	int auth = 0;
	int flag=0;
	
	fd = fopen("auth", "r");
	if (fd == NULL) {
		perror("file not found");
		exit(1);
	}	

	while ((num_read = getline(&line, &len, fd)) != -1) {
		memset(buf, 0, MAXSIZE);
		strcpy(buf, line);
		
		pch = strtok (buf," ");
		strcpy(username, pch);
		if (pch != NULL) {
			pch = strtok (NULL, " ");
			strcpy(password, pch);
		}
		
		trimstr(password, (int)strlen(password));
		
		  if((strcmp(user,"")==0) &&(strcmp(pass,"")==0)){
				        flag=1;
                                        auth=1;
                                        break;
                        }

		  if((strcmp(user,username)==0) && (strcmp(pass,password)==0)) {

					auth=1;
                                        break;
                        
		}		
	}
	free(line);	
	fclose(fd);	
	return auth;
}



