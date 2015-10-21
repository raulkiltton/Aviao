#ifndef AVIAO_H
#define AVIAO_H

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;


class Aviao
{
public:
	Aviao();
	~Aviao();
	
	
	
	void decolar();
	
private:

	int tamanho;
	int anofabricacao;
	int anomodelo;
	float velocidade;
	float potencia;
	float autonomia;
	string marca;
	string modelo;

};

#endif // AVIAO_H
