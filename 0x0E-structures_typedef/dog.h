#ifndef DOG_H
#define DOG_H

/**
* struct dog - dog
* @name: wemalo
* @age: habibi
* @owner: malo
*
* Description: bs
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
