#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct that contains variables
 * @name: Name of the dog as a char array
 * @age: Age of a dog as float
 * @owner: Name of the onwer as a char array
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
