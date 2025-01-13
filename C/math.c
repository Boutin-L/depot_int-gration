/****** Module manipulant des fonctions mathématiques **********/
#include "math.h"

/****************** Recherche du maximum ***********************/
float maximum (float n1, float n2 )
{
	if (n1 > n2) {
		return n1;
	}
   else {
	   return n2;
	}
}

/****************** Recherche du minimum ***********************/
float minimum (float n1, float n2 )
{
	if (n1 < n2) {
		return n1;
	}
   else {
	   return n2;
	}
   return 0;
}

/******************* Addition de nombres ***********************/
float addition (float n1, float n2 )
{
	n = n1 + n2;
   return n;
}

