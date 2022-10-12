#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: struct dog
 * @name: string for name
 * @age: integer for age
 * @owner: string for owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (dog != NULL)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
	}
}
