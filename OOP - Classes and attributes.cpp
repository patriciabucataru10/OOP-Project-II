// OOP - Classes and attributes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using std::string;
class Pisica
{
//DECLARAREA ATRIBUTELOR
public:
    string nume;
    string rasa;
    int varsta;
    string blanita;
    string hrana_preferata;
//CONSTRUCTOR

    Pisica(string Nume, string Rasa, int Varsta, string Blanita, string Hrana_preferata)
    {
        nume = Nume;
        rasa = Rasa;
        varsta = Varsta;
        blanita = Blanita;
        hrana_preferata = Hrana_preferata;
        
    }
    void descriere_pisica()
    {
        std::cout << "Pisica se numeste " << this->nume << ", are " << varsta << "an,rasa este " << rasa << " ,blanita este " << blanita << " si iubeste sa manance " << hrana_preferata << std::endl;

    }
 //GETTERI SI SETTERI
    //SETTER HRANA PREFERATA
    void set_hrana_preferata(string hrana_preferata)
    {
        this->hrana_preferata = hrana_preferata;
    }
    //GETTER HRANA PREFERATA
    string get_hrana_preferata()
    {
        return this->hrana_preferata;
    }
    //SETTER NUME PISICA
    void set_nume(string nume)
    {
        this->nume = nume;
    }
    //GETTER NUME PISICA

    string get_nume()
    {
        return this->nume;
    }
};

//INHERITANCE
class PuiPisica : Pisica
{
    bool dinti_lapte;

//CONSTRUCTOR
    PuiPisica(string nume, string rasa, int varsta, string blanita, string hrana_preferata, bool dinti_lapte):Pisica(nume,rasa,varsta,blanita,hrana_preferata)
    {
        this->dinti_lapte = dinti_lapte;
    }
};
//MULTILEVEL INHERITANCE

class PuiPisicaNevoiSpeciale : PuiPisica
{
    string probleme_sanatate;
};
int main()
{
    Pisica Merlin = Pisica("Merlin", "comuna", 1,"medie", "carne de vita");
    Merlin.descriere_pisica();
   std::cout<< Merlin.get_nume();
}

