#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's info
 * @name: the name of the dog
 * @age: a float indicating the age of the dog
 * @owner: a string showing the name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

