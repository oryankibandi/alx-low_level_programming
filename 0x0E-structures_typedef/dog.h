#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;

/**
 * struct dog - dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * This struct represents a dog
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
