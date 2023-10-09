#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - main function that returns length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	return (k);
}
/**
 * *_strcpy - copies string
 * @dest: destination of string
 * @src: string that is copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j, k;

	j = 0;

	while (src[j] != '\0')
	{
		j++;
	}

	for (k = 0; k < j; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';

	return (dest);
}
/**
 * new_dog - main function for new dog
 * @name: identity of the dog
 * @age: age of the dog
 * @owner: dog's owner
 * Return: pointer to the new dog (Success), otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int a, b;

	a = _strlen(name);
	b = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (a + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (b + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
