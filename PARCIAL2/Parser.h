#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED
#include "LinkedList.h"

int parser_loadFromText(char* fileName, LinkedList* lista);
int parser_generateInforme(char* fileName, LinkedList* lista);


#endif // PARSER_H_INCLUDED
