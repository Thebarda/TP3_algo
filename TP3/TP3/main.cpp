#include "main.h"

void main() {
	Liste * li = new Liste;
	int cont = true;
	while (cont) {
		int choix;
		int pos;
		Elt element;
		do {
			menu();
			cout << "Que voulez-vous faire ? ";
			cin >> choix;
		} while ((choix <= 0) && (choix >= 8));
		switch (choix) {
		case 1: init(li);
			break;
		case 2: desinit(li);
			break;
		case 3:
			cout << "Saisir la position : ";
			cin >> pos;
			cout << "Saisir l'element (entier)";
			cin >> element;
			if ((pos >= 0) && (pos <= (*li).nbElem)) {
				adjElemList(li, element, pos);
				cout << "élément ajouté avec succés" << endl;
			}
			else {
				cout << "Erreur : pos en dehors de la liste" << endl;
			}
			break;
		case 4:
			cout << "Saisir la position : ";
			cin >> pos;
			if ((pos >= 0) && (pos <= (*li).nbElem)) {
				supElemList(li, pos);
				cout << "élément supprimé avec succés" << endl;
			}
			else {
				cout << "Erreur : pos en dehors de la liste" << endl;
			}
			break;
		case 5:
			if ((*li).tab == NULL) {
				cout << "Erreur : liste nulle" << endl;
			}
			else {
				affList(li);
			}
			break;
		case 6:
			cout<<longueurList(li)<<endl;
			break;
		default:
			cont = false;
			system("PAUSE");
			break;
		}
	}
}