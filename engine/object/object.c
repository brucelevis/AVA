#ifdef CONFIG_H
#include CONFIG_H
#endif

#ifdef OBJECT_C
#pragma once
#define REFLECT_C
#endif

#include "object_reflect.c"
