#include "main.h"

void supElemList(Liste * li, int pos) {
	int i;
	if ((*li).tab != NULL) {
		for (i = pos; i < (*li).nbElem; i++) {
			(*li).tab[i] = (*li).tab[i + 1];
		}
		(*li).nbElem--;
		if (((*li).nbElem != 0) && ((*li).nbElem % 10 == 0)) {
			//dimenssionner
		}
	}
}