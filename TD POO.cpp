// TD POO.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Complexe.h"
using namespace std;
int main()
{ 
	cout << "le nombre d'objets initiale est : " << Complexe :: nbre_instance << endl;
	Complexe z1(5.5, 3.5);
	cout << "le nombre d'instance est : " << Complexe :: nbre_instance << endl;  // ou bien z1.nbre_instance
	Complexe z2(z1); // <==> z2(5.5,3.5)
	cout << "le nombre d'instance est : "<< Complexe :: nbre_instance << endl;
	Complexe z3, z4, z5; // 5 instance
	cout << "le nombre d'instance est : "<< Complexe :: nbre_instance << endl;
	cout << "******************************************************************" << endl;
	cout << "Le nombre complexe est :"; z1.m_afficher() ;
	cout << "******************************************************************" << endl;
	cout << "Le nombre complexe est :"; z2.m_afficher();
	cout << "******************************************************************" << endl;
	z3 = z1.operator+(z2);  // meme chose si on fait z1+z2 
	cout << "La somme des deux nombres complexe :"; z3.m_afficher() ;
	cout << "******************************************************************" << endl;
	z4 = z2 + 5.4;// ou bien z2.operator+(5.4)
	cout << "La somme des deux nombre complexe :"; z4.m_afficher();
	cout << "******************************************************************" << endl;
	z5 = z1 * z4; // || z1.operator*(z4)
	cout << "La multiplication des deux nombre complexe :"; z5.m_afficher();
	cout << "******************************************************************" << endl;
	cout << z1.operator==(z2) << endl; // test d'egalite z1 et z2
	cout << "******************************************************************" << endl;
	cout << z4.operator==(z2) << endl; 
	cout << "******************************************************************" << endl;
	cout << "le nombre d'instance est : " << Complexe::nbre_instance << endl; // le nombre des objets 
	cout << "******************************************************************" << endl;
	double module = z1.m_module();
	cout << "Le module est :" << module << endl;
	cout << "******************************************************************" << endl;
	Complexe conj = z1.m_conjugue(); 
	cout << "Le conjugue est :";  conj.m_afficher();   // <==>z1.m_conjugue().m_afficher();

	




}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
