#include "main.h"

int longueurList(Liste * li) {
	if ((*li).tab == NULL) {
		return 0;
	}
	else {
		return (*li).nbElem;
	}
}