#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - tructure of a dog.
 * @name: pointer.
 * @age: age of dog.
 * @owner: pointer to the ouner name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d)

#endif
