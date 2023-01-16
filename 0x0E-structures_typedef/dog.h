#ifndef Dog_h
#define Dog_h

/**
 * struct dog - struct with dog information
 * @name: first member
 * @age: second member
 * @owner: last member/third member
 * Description: stores data of diff types
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_a;

void init_dog(struct dog *d, char *name, char *owner, float age );
void print_dog(struct dog *d);
dog_a *new_dog(char *name, char *owner, float age);
void free_dog(dog_a *d);

#endif
