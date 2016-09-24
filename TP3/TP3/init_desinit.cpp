#include "main.h"

void init(Liste * li) {
	(*li).nbElem = 0;
	(*li).tailleTab = 10;
	(*li).tab = new int[(*li).tailleTab];
}

void desinit(Liste * li) {
	delete (*li).tab;
	(*li).nbElem = 0;
	(*li).tailleTab = 0;
}