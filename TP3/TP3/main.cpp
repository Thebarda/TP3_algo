#include "main.h"

int main(int argc, char * argv[]) {
	Liste * li = new Liste;
	while (true) {
		int choix;
		Elt element;
		do {
			menu();
			cout << "Que voulez-cous faire ? ";
			cin >> choix;
		} while ((choix <= 0) && (choix >= 8));
		switch (choix) {
		case 1: init(li);
			break;
		case 2: desinit(li);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		default:return 0;
			break;
		}
	}
}