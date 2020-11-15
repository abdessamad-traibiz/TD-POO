#pragma once

class Complexe {

public:
	Complexe();                      //Methode1: constructeur sans parametres (il suffit de choisir un seul constructeur parmis les 3Methodes)
	Complexe(double, double);       //Methode2: constructeur avec parametres
	Complexe(const Complexe& z);   //Methode3: constructeur de recopie
	void m_afficher();      //prototype de la fonction membre pour l'affichage
	double m_module();      //prototype de la fonction membre pour le module 
	Complexe m_conjugue();  //prototype de la fonction membre pour le conjugue
	void m_conjugue1();  // Methode2
	Complexe m_conjugue3(); // Methode3
	Complexe operator +(const Complexe& z); //Surchager l'operateur +
	Complexe operator +(double); //surcharger l'operateur (complexe + double)
	Complexe operator *(const Complexe& z); // surcharger l'operateur *
	bool operator == (const Complexe& z); // surcharger l'operateur == 
   //int nbre_objets(); // Methode public pour donner la main a acceder le nbre_instance1 qu'on a declarer public




	//~Complexe();             //destructeur ne prend aucun parametre ,pour supprimer l'objet courant 

private:
	double Re; //attribut d'instance membre 
	double Im;
   // static int nbre_instance; 


public:
	static int nbre_instance ; // M1 attribut de classe
};