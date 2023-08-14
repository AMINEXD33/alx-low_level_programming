#ifndef DOG_H
#define DOG_H
/**
 *struct dog- its a struct for DOGGO
 *@name: name of doggo
 *@owner: the name of the owner of doggo
 *@age: age of doggo
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H*/
