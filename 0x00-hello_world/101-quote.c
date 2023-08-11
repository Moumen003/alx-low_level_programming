#include <unistd.h>

/**
 * main - start
 *
 * Description: test
 *
 * Return: bs
*/

int main(void)
{
const char *sentence =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, sentence, sizeof(sentence) - 1);
return (1);
}
