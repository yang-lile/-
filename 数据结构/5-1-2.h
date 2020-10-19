#pragma once
#include <stdlib.h>

typedef int Elemtype;
typedef int Status;

typedef struct TriNode
{
	Elemtype e;
	int i, j;
}TriNode;

typedef struct TriManager {
	int len;
	int N,M;
	TriNode *arr;
}TriManager;

Status initTriManager(TriManager* t,int max_N ,int max_M){
	t->arr = (TriNode*)malloc(sizeof(TriNode)*max_N*max_M);
	t->len = 0;
	t->M = max_M;
	t->N = max_N;
}

Status _add(TriManager* tm, TriNode * tn) {
	if ()
}
