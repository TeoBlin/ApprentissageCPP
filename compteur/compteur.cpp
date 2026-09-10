#include "compteur.h"

Compteur::Compteur(int _valeurInit, int _pas) :
    valeur(_valeurInit),
    pas(_pas)
{
}

Compteur::~Compteur()
{
}

void Compteur::Incrementer()
{
    valeur += pas;
}

void Compteur::Decrementer()
{
    valeur -= pas;
}

void Compteur::Reinitialiser()
{
    valeur = 0;
}

int Compteur::getValeur() const
{
    int resultat = valeur;
    return resultat;
}
void Compteur::setValeur(int _v)
{
    valeur = _v;
}

int Compteur::getPas() const
{
    int resultat = pas;
    return resultat;
}

void Compteur::setPas(int _p)
{
    pas = _p;
}

Compteur Compteur::operator+(const Compteur &_autre) const
{
    Compteur resultat(valeur + _autre.valeur, pas);
    return resultat;
}

bool Compteur::operator==(const Compteur &_autre) const
{
    bool estEgal = (valeur == _autre.valeur && pas == _autre.pas);
    return estEgal;
}

std::ostream& operator<<(std::ostream &_flux, const Compteur &_cpt)
{
    _flux << "Compteur (valeur=" << _cpt.valeur << ", pas=" << _cpt.pas << ")";
    return _flux;
}