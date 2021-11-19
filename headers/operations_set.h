#ifndef OPERATIONS_SET_H
#define OPERATIONS_SET_H

#define NAME_LENGTH ???
#define NAME_SIZE ???

struct oplist
{
	char* name;
	uint8_t value;
}

const struct oplist list[ LIST_SIZE ];

list[ 0 ]->name = "exit";
list[ 0 ]->value = 1;

list[ 1 ]->name = "new";
list[ 1 ]->value = 2;

list[ 2 ]->name = "assign";
list[ 2 ]->value = 3;

list[ 3 ]->name = "del";
list[ 3 ]->value = 4;

list[ 4 ]->name = "done";
list[ 4 ]->value = 6;

list[ 5 ]->name = "undone";
list[ 5 ]->value = 7;

list[ 6 ]->name = "rename";
list[ 6 ]->value = 8;

#endif
