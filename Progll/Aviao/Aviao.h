#ifndef AVIAO_H
#define AVIAO_H

#include <iostream>
using std::cout;
using std::endl;
using namespace std;

#include <string>
using std::string;


class Aviao
{
	
	
public:
	Aviao(int = 0, float = 0, float = 0, const string & = "", bool = "");
	
	
	
	~Aviao();
	
	
	void acelerar();
	void decolar();
	void pousar ();
	void ligarmotores ();
	
	
	
	
	
	
private:

	int tamanho;
	float velocidade;
	float velocidadeat;
	string modelo;
	bool condvoo;
	
	
};

#endif // AVIAO_H
