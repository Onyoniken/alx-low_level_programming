#ifndef dog_h
#define dog_h

/**
 * struct dog - defines a dog
 * @name: first parameter
 * @age: second parameter
 * @owner: third parametr
 *
 * Description: more elaborate
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - dog type
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _srtlen(char *s);

#endif
