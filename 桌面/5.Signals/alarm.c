#include <unistd.h>	// alarm()

int main(int argc, char **argv)
{
	alarm(2);
	while(2);
	return 0;
}
