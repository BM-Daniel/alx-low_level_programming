#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);


/**
 * _strlen - Function for length of a string
 * @str: Pointer to string
 *
 * Return: Exit with string length
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length])
		length++;

	return (length);
}


/**
 * _strcpy - Copy string from src to dest
 *
 * @dest: String destination
 * @src: String source
 *
 * Return: Exit with copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}



/**
 * new_dog - Write a function that creates a new dog
 *
 * @name: Structure name variable
 * @age: Structure age variable
 * @owner: Structure owner variable
 *
 * Return: Exit with new structure
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogCopy;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	dogCopy = malloc(sizeof(dog_t));

	if (dogCopy == NULL)
		return (NULL);


	dogCopy->name = malloc(sizeof(dogCopy->name) * _strlen(name));

	if (dogCopy->name == NULL)
	{
		free(dogCopy);
		return (NULL);
	}

	dogCopy->owner = malloc(sizeof(dogCopy->owner) * _strlen(owner));

	if (dogCopy->owner == NULL)
	{
		free(dogCopy->name);
		free(dogCopy);
		return (NULL);
	}


	dogCopy->name = _strcpy(dogCopy->name, name);
	dogCopy->age = age;
	dogCopy->owner = _strcpy(dogCopy->owner, owner);


	return (dogCopy);
}
