#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - a new type with 3 elements
 * @name: name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;

} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - returns  the length of a string
 * @s: is the string to check the length
 * Return: returns the length of a string
 */

int _strlen(char *s);

/**
 * _strcpy - copies a string
 * @dest: the destination to be copied to
 * @src: the source to copy from
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src);


void free_dog(dog_t *d);

#endif /* dog.h */
