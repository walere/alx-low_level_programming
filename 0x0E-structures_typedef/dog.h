#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog_t - type of dog struct
 */
typedef struct dog dog_t;

/**
 * struct dog - struct that stores dog info
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: struct called "dog"
 */

struct dog
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
