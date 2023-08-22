#include "main.h"

/** 
 * *_strcpy - ptr to function
 * @dest: da awelhom
 * @src: we da el tany
 *
 * Return: da beytl3 char yad
 */

char *_strcpy(char *dest, char *src)
{ int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] !- '\0');

	return (dest);
}
