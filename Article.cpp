//Article.cpp
#include <iostream>
#include <string>
#include "Article.h"
using namespace std;
 
 
 
Article::Article(string titre, double prix)
{
	this->titre = titre;
	this->prix = prix;
}

double Article::getPrix() const
{
	return this->prix;
}

string Article::getTitre() const
{
	return this->titre;
}


void Article::setTitre(string titre)
{
	this->titre = titre;
}

void Article::setPrix(double prix)
{
	this->prix = prix;
}

