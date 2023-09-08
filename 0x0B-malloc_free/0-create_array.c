#include<stdio.h>


/**
* create_array - makes an array
*@size: sz
*@c: chat
*Return:ptr
*/


char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size);

	if (!size || ptr == NULL)
		return (NULL);
	while (sz--)
		ptr[sz] = c;
	return (ptr);

}
