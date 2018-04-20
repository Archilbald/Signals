#include <stdio.h>	// perror()
#include <unistd.h>	// pause()
#include <signal.h>	// signal(), "SIGINT"

void sig_handler(int sig)
{
	printf("SIGINT received\n");
}

int main(void)
{
	signal(SIGINT, sig_handler);
	while(1)
	{
		pause();
		perror("pause()");
	}
	return 0;
}
