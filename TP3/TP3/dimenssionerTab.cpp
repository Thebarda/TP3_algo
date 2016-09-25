#include "main.h"

void dimensionnerTab(Liste * li, int pas) {
	int taille = (*li).tailleTab;
	int i;

	Elt * tmp = new Elt[pas + taille];
	for (i = 0; i < (*li).nbElem; i++) {
		*(tmp + i) = *((*li).tab + i);
	}
	delete (*li).tab;
	(*li).tab = new Elt[pas + taille];
	(*li).tailleTab = (*li).tailleTab + pas;
	for (i = 0; i < (*li).nbElem; i++) {
		*((*li).tab + i) = *(tmp + i);
	}
}