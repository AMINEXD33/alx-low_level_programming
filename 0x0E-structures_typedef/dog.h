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
#endif /* DOG_H*/
