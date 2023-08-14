#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *copy_str-copy and str of len to a dest of the same len
 *@str: string
 *@dest: destination str
 *@len: len of both str
 */
void copy_str(char *str, char*dest, int len)
{
	int x;

	for (x = 0; x < len; x++)
	{
		dest[x] = str[x];
	}
	dest[x] = '\0';
}
/**
 *len - calc len of an str
 *@str: string
 */
int len(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 *new_dog-create a new dog struct
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner
 *Return: the new created struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_;
	char *name2;
	char *owner2;
	dog_t *new_dog_ptr;

	if (name == NULL || owner == NULL)
		return (NULL);

	len_ = len(name);
	name2 = malloc(sizeof(char) * (len_ + 1));
	if (name2 == NULL)
		return (NULL);
	copy_str(name, name2 , len_);

	len_ = len(owner);
	owner2 = malloc(sizeof(char) * (len_ + 1));
	if (owner2 == NULL)
		return (NULL);
	copy_str(owner, owner2, len_);


	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	{
		free(name2);
		free(owner2);
		return (NULL);
	}
	new_dog_ptr->name = name2;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner;


	return(new_dog_ptr);
}
