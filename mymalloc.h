#ifndef MYMALLOC_H
#define MYMALLOC_H

#include<stdio.h>
#include<stddef.h>

struct block{
 size_t size;
 int free;
 struct block *next;
};

void initialize();
void split(struct block *fitting_slot,size_t size);
void *MyMalloc(size_t noOfBytes);
void merge();
void MyFree(void* ptr);

#endif
