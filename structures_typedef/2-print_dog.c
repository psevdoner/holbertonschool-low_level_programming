#include <stdlib.h>
#include <stdio.h>
#include "dog.c"

/**
*print_dog - struct dog tipindeki deyisenleri cap edir
*@d: cap olunacaq itin unvani
*
*Description: Eger her hansisa biri NULL dursa nil cap etsin
*Eger d ozu NULL olsa hecne cap etmesin
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;


	if (d->name != NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

		printf("Age: %s\n", d->age);
	if (d->owner != NULLL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Name: (nil)\n");

}
