/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : joueur
 * @created     : samedi sept. 28, 2019 17:48:13 CEST
 */
#ifndef JOUEUR_HPP
#define JOUEUR_HPP
#include <string>
#include <iostream>

class Joueur
{
    public:
	virtual ~Joueur ();
        Joueur ();
	Joueur(std::string, int argent, int nourriture);
	Joueur(const Joueur& joueur);
	Joueur& operator=(const Joueur& joueur);
	friend std::ostream& operator<<(std::ostream& os, const Joueur& joueur);

    private:
	std::string nom;
	int argent,nourriture;

        /* private data */
};

#endif /* end of include guard JOUEUR_HPP */

