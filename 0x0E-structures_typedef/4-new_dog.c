#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog.
 * @name: pointer to dog name.
 * @age: dog age.
 * @owner: Dog owner.
 * Return: dog_t structure.
 */

/**
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i, len;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	for (len = 0; name[len] != '\0'; len++)
		;
	new->name = malloc((1 + len) * sizeof(char));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		new->name[i] = name[i];
	new->name[i] = '\0';

	for (len = 0; owner[len] != '\0'; len++)
		;
	new->owner = malloc((1 + len) * sizeof(char));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		new->owner[i] = owner[i];
	new->owner[i] = '\0';

	new->age = age;

	return (new);
}
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t nd;
	dog_t *new;

	nd.name = name;
	nd.age = age;
	nd.owner = owner;

	new = &nd;
	return (new);
}
