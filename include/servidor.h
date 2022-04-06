#ifndef SERVIDOR_H
#define SERVIDOR_H
#include <string>
#include <vector>
#include <ctime>
#include <memory>

#include "canaltexto.h"
#include "usuario.h"

using canalptr = std::shared_ptr<CanalTexto>;

class Servidor{
private: 
	int usuarioDonoId; //<! id do usuario dono
	std::string nome; //<! nome do servidor
	std::string descricao; //<! descrição do servidor
	std::string codigoConvite; //<! codigoConvite do servirdor
	std::vector<canalptr> canaisTexto; //<! vetor com os canais do servidor
	std::vector<int> participantesIDs; //<! vetor com os ids dos usuarios participantes do servidor

public: 
	/**
	 * @brief constrói um servidor dado seu nome e o id do usuario dono
	 *		@param usuarioDonoId_ id do usuario dono
	 *		@param nome_ nome do servidor
	*/
	Servidor(int usuarioDonoId_, std::string nome_);

	/**
	 * @brief retorna o nome do servidor
	 *		@return nome do servidor
	*/
	std::string getnome();

	/**
	 * @brief retorna o id do usuario dono
	 *		@return id do usuario dono
	*/
	int getdonoid();

	/**
	 * @brief retorna a descricao do servidor
	 *		@return a descricao do servidor
	*/
	std::string getdesc();

	/**
	 * @brief seta a descricao do servidor
	 *		@param desc descricao a ser setada
	*/
	void setdesc(std::string desc);

	/**
	 * @brief retorna o codigoConvite do servidor
	 *		@return codigoConvite do servidor
	*/
	std::string getconvite();

	/**
	 * @brief seta o codigoConvite do servidor
	 *		@param convitecode codigoConvite a ser setado
	*/
	void setconvite(std::string convitecode);

	/**
	 * @brief adiciona um id de usuario ao vetor participantesIDs
	 *		@param p id do usuario a ser adicionado
	*/
	void addparti(int p);

	/**
	 * @brief remove um id de usuario do vetor participantesIDs
	 *		@param p id de usuario a ser removido
	 *		@return true se o id de usuario estava presente no vetor participantesIDs ou false se não
	*/
	bool removeparti(int p);

	/**
	 * @brief reduz o contador de servidores entrados dos usuarios presentes em participantesIDs
	 *		@param users vetor de usuarios a ser fornecido
	*/
	void serverreduc(std::vector<userptr>& users);

	/**
	 * @brief imprime todos os nomes dos usuarios presentes em participantesIDs
	 *		@param users vetor de usuarios a ser fornecido 
	 *		@return uma string com todos os nomes dos usuarios presentes em participantesIDs
	*/
	void printparti(std::vector<userptr>& users);

	/**
	 * @brief imprime todos os nomes dos canais presentes em canaisTexto
	 * @return 
	*/
	void printcanais();

	/**
	 * @brief adiciona um canaltexto ao vetor canaisTexto
	 *		@param c canaltexto a ser adicionado
	*/
	void addcanal(canalptr c);

	/**
	 * @brief retorna o indice de posição de um canaltexto no vetor canaisTexto ou -1 se não encontrado
	 *		@param cname nome do canaltexto
	 *		@return o indice de posição do canaltexto no vetor canaisTexto ou -1 se não encontrado
	*/
	int findcanal(std::string cname);

	/**
	 * @brief retorna o canal com o nome fornecido
	 *		@param cname nome do canal a ser fornecido
	 *		@return canal com o nome fornecido
	*/
	canalptr returncptr(std::string cname);
};

#endif
