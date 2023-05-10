#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main()
{
    int pid = fork(); // Creare un processo figlio
    if (pid == -1) 
	{
        perror("fork"); // Gestione dell'errore
        exit(1);
    } 
	else if (pid == 0)
   	{
        // Codice per lo script per aprire il video di YouTube
        system("open https://www.youtube.com/watch?v=dQw4w9WgXcQ");
        exit(0);
    }
   	else
   	{
	   	// Codice del processo padre (principale)
		int i = 0;
		char str[1000];

		bzero(&str, 1000);

		do {
		printf("Scrivi qualcosa: ");
		scanf("%s", str);
		printf("ti ripeto: %s", str);
		printf("\n");
		i++;
		} while(i <= 15);
		sleep(180);
        }
	return(0);
    }
