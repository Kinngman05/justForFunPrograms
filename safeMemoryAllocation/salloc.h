#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "salloc.c"
#ifdef __SAFE_ALLOC
// ALL THE FUNCTIONS
extern unsigned int getMemoryStatus();	//Gets the currrent allocated addresses.
extern void *smalloc(unsigned int size);	//allocated memory and push into the linked list.
extern void *srealloc(void *pointerAddress,unsigned int size);		//reallocates a new piece of memory and updates __memoryTable
extern unsigned int sfree(void *pointerAddress);	//free memory and pop it from the linked list.
extern unsigned int freeAllMemeory();	//free all the allocated memory
#endif
