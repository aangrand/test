#include <stdio.h>
#include <unistd.h>

int main ()
{	
	char c = 'Q';
	write(1, &c, 1);	
}
