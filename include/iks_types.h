/*
  iks_types.h
*/
#ifndef __IKS_TYPES_H
#define __IKS_TYPES_H

#include "comp_tree.h"

#define IKS_NOTYPE 0
#define IKS_INT 1
#define IKS_FLOAT 2
#define IKS_CHAR 3
#define IKS_STRING 4
#define IKS_BOOL 5

// if global, scope=NULL . if local, scope=ast node of the function
comp_tree_t *scope; 



#endif
