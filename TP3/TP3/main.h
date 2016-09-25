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
//Pr�-condition
//	liste nulle
//Post-condition
//	liste initialis�
void init(Liste * li);

//Procedure qui desinitialise une liste
//Post-condition
//	liste desinitialis�
void desinit(Liste * li);

//Procedure qui ajoute un �l�ment � la liste en une position donn�e
//	li : la liste
//	x : entier � ajouter
//	pos : la position � laquelle on ajoute l'�l�ment
//Pr�-condition
//	0<=pos<=tailleTab
//Post-condition
//	�l�ment ajout� � la liste � la position
void adjElemList(Liste * li, Elt x, int pos);

//Procedure qui supprime un �l�ment en une position donn�e
//	li : la liste
//	pos : la position � laquelle on supprime l'�l�ment
//Pr�-condition
//	0<=pos<=tailleTab
//	liste non vide
//Post-condition
//	�l�ment supprim� de la liste
void supElemList(Liste * li, int pos);

//Procedure qui affiche la liste
//	li : la liste
//Pr�-condition
//	Liste non vide
void affList(Liste * li);

//Fonction qui r�cup�re la longueur de la liste
//	li : la liste
//Retourne 0 si la liste est vide, nbElem sinon
int longueurList(Liste * li);

//Procedure qui dimensionne un tableau
//	li : la liste
//	pas : le nombre qui doit �tre ajout� ou supprim� du tableau
//Pr�-condition
//	liste non vide
//Post-condition
//	tableau redimenssion�
void dimensionnerTab(Liste * li, int pas);

#endif