#include "main.h"
void adjElemList(Liste * li, Elt x, int pos) {
	int i;
	if ((*li).tab != NULL) {
		if ((*li).nbElem == (*li).tailleTab) {
			//dimensionnerTab(li, 10);
		}
	}
	else {
		init(li);
	}
	for (i = (*li).nbElem; i > pos; i--) {
		*((*li).tab + i+1) = *((*li).tab + i);
	}
	(*li).tab[pos] = x;
	(*li).nbElem++;
}