#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - tructure of a dog.
 * @name: pointer.
 * @age: age of dog.
 * @owner: pointer to the ouner name.
 */

typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
