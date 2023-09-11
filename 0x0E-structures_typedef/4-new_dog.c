#include "dog.h"
#include<stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);

/**
 * _strlen - Function that gets the length of a string
 * @str: string to be calculated
 * Return: length of string @str
 */

int _strlen(char *str)
{
	int x = 0;

	while (*str++)
		x++;
	return (x);
}

/**
 * _strycopy - fuction that copies a string from source to destination
 * @src: string to be copied
 * @dest: destination of copied string
 * Return: @dest
 */

char *_strcopy(char *dest, char *src)
{
	int y;

	for (y = 0; src[y]; y++)
		dest[y] = src[y];
	dest[y] = '\0';

	return (dest);
}

/**
 * new_dog - function that reats a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * Rturn: pointer of dog, NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *z;

	if (!name || age < 0 || !owner)
		return (NULL);
	z = malloc(sizeof(dog_t));
	if (z == NULL)
		return (NULL);

	z->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*z).name == NULL)
	{
		free(z);
		return (NULL);
	}
	z->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*z).owner == NULL)
	{
		free(z->name);
		free(z);
		return (NULL);
	}
	z->name = _strcopy(z->name, name);
	z->age = age;
	z->owner = _strcopy(z->owner, owner);
	return (z);
}

