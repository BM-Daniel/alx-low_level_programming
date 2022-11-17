#ifndef DOG_H
#define DOG_H


/**
 * struct dog -Dog structure
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Define a new type struct dog with the following elements;
 * name, age, owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};



void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;


#endif
