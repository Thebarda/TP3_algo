#ifndef _MAIN_
#define _MAIN_

#include <iostream>
using namespace std;

typedef int Elt;

struct Liste {
	int nbElem;
	int tailleTab;
	Elt * tab;
};

//Procedure qui initialise une liste
//Pré-condition
//	liste nulle
//Post-condition
//	liste initialisé
void init(Liste * li);

//Procedure qui desinitialise une liste
//Post-condition
//	liste desinitialisé
void desinit(Liste * li);

//Procedure qui ajoute un élément à la liste en une position donnée
//	li : la liste
//	x : entier à ajouter
//	pos : la position à laquelle on ajoute l'élément
//Pré-condition
//	0<=pos<=tailleTab
//Post-condition
//	élément ajouté à la liste à la position
void adjElemList(Liste * li, Elt x, int pos);

//Procedure qui supprime un élément en une position donnée
//	li : la liste
//	pos : la position à laquelle on supprime l'élément
//Pré-condition
//	0<=pos<=tailleTab
//	liste non vide
//Post-condition
//	élément supprimé de la liste
void supElemList(Liste * li, int pos);

//Procedure qui affiche la liste
//	li : la liste
//Pré-condition
//	Liste non vide
void affList(Liste * li);

//Fonction qui récupère la longueur de la liste
//	li : la liste
//Retourne 0 si la liste est vide, nbElem sinon
int longueurList(Liste * li);

//Procedure qui dimensionne un tableau
//	li : la liste
//	pas : le nombre qui doit être ajouté ou supprimé du tableau
//Pré-condition
//	liste non vide
//Post-condition
//	tableau redimenssioné
void dimensionnerTab(Liste * li, int pas);

#endif