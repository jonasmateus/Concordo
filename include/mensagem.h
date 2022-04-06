#pragma once
#include <string>
#include <ctime>
#include<sstream>
#include <iomanip>

class Mensagem{
public:
	std::string dataHora; //<! data e hora enviada da mensagem
	int enviadaPor; //<! id do usuario que a enviou
	std::string conteudo; //<! conteúdo da mensagem

	/**
	 * @brief constroi uma mensagem dado seu conteudo e o id de quem a enviou
	*/
	Mensagem(std::string conteudo_, int enviadaPor_);
};

