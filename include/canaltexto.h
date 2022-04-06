#ifndef CANALTEXTO_H
#define CANALTEXTO_H
#include <string>
#include <iostream>
#include <vector>
#include <memory>

#include "mensagem.h"
#include "usuario.h"

using mensagemptr = std::shared_ptr<Mensagem>;

class CanalTexto{
private:
	std::string nome; //<! nome do canaltexto
	std::vector<mensagemptr> mensagens; //<! mensagems do canaltexto

public:
	/**
	 * @brief constroi um CanalTexto dado seu nome
	 *		@param nome_ o nome do CanalTexto a ser construido
	*/
	CanalTexto(std::string nome_);

	/**
	 * @brief retorna o nome do CanalTexto
	 *		@return o nome do CanalTexto
	*/
	std::string getnome();

	/**
	 * @brief adiciona uma mensagem ao vetor mensagems
	 *		@param m mensagem a ser adicionada
	*/
	void addmensagemc(std::string conteudo, int id);

	/**
	 * @brief imprime todas as mensagems do canaltexto
	 *		@param users vetor de usuarios que contem os nomes dos usuarios que mandaram mensagens no canaltexto
	 *		@return true se imprimiu alguma mensagem, false caso contrário
	*/
	bool printmensagensc(std::vector<userptr>& users);
};

#endif
