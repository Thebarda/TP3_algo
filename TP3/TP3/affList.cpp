#include "main.h"

void affList(Liste * li) {
	int i;
	for (i = 0; i < (*li).nbElem; i++) {
		cout << "tab["<< i<< "] : " << *((*li).tab + i) << endl;
	}
}