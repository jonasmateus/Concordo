#include <string>
#include <vector>
#include "canaltexto.h"
using namespace std;

CanalTexto::CanalTexto(std::string nome_) {
	nome = nome_;
}
string CanalTexto::getnome() {
	return nome;
}
void CanalTexto::addmensagemc(string conteudo, int id) {
	mensagemptr m = make_shared<Mensagem>(conteudo, id);
	mensagens.push_back(m);
}
bool CanalTexto::printmensagensc(std::vector<userptr>& users) {
	if (mensagens.empty()) {
		return false;
	}
	for (auto it = mensagens.begin(); it != mensagens.end(); it++) {
		cout << users[(*it)->enviadaPor]->nome << (*it)->dataHora << ": " << (*it)->conteudo<<endl;
	}
	return true;
}