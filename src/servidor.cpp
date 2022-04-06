#include <string>
#include <vector>
#include "servidor.h"
using namespace std;

Servidor::Servidor(int usuarioDonoId_, string nome_) {
	usuarioDonoId = usuarioDonoId_;
	nome = nome_;
}
string Servidor::getnome() {
	return nome;
}
int  Servidor::getdonoid() {
	return usuarioDonoId;
}
string Servidor::getdesc() {
	return descricao;
}
void Servidor::setdesc(string desc) {
	descricao = desc;
}
string Servidor::getconvite() {
	return codigoConvite;
}

void Servidor::setconvite(std::string convitecode) {
	codigoConvite = convitecode;
}
void Servidor::addparti(int p) {
	for (auto it= participantesIDs.begin(); it!=participantesIDs.end(); it++) {
		if (*it == p) {
			return;
		}
	}
	participantesIDs.push_back(p);
}

bool Servidor::removeparti(int p) {
	for (auto it = participantesIDs.begin(); it != participantesIDs.end(); it++) {
		if (*it == p) {
			participantesIDs.erase(it);
			return true;
		}
	}
	return false;
}
void Servidor::serverreduc(std::vector<userptr>& users) {
	for (auto it = participantesIDs.begin(); it != participantesIDs.end(); it++) {
		users[*it]->servern--;
	}
}
void Servidor::printparti(std::vector<userptr>& users) {
	for (auto it = participantesIDs.begin(); it != participantesIDs.end(); it++) {
			cout << users[*it]->nome<<endl;
	}
}
void Servidor::printcanais() {
	int n = (int)canaisTexto.size();
	for (int ii=0; ii<n ; ii++) {
			cout <<canaisTexto[ii]->getnome()<<endl;
	}
}
void Servidor::addcanal(canalptr c) {
	canaisTexto.push_back(c);
}
int Servidor::findcanal(string cname) {
	int n = (int)canaisTexto.size();
	for (int ii=0; ii < n; ii++) {
		if (cname == canaisTexto[ii]->getnome()) {
			return ii;
		}
	}
	return -1;
}
canalptr Servidor::returncptr(string cname) {
	int canalid = findcanal(cname);
	return canaisTexto[canalid];
}