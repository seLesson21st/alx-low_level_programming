#ifndef dog_h
#define dog_h

/**
 * struct dog - used to identify a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
 /**
  * dog_t - The new name of sturct dog
  */

typedef struct dog dog_t;

#endif
