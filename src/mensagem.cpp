#include <string>
#include <sstream>
#include <iomanip>
#include "mensagem.h"
using namespace std;

Mensagem::Mensagem(std::string conteudo_, int enviadaPor_) {
	conteudo = conteudo_;
	enviadaPor = enviadaPor_;
	time_t agora;
	tm  data;
	time(&agora);
	data=*localtime(&agora);

	int ano = data.tm_year + 1900;
	int mes = data.tm_mon + 1;
	int dia = data.tm_mday;
	int hora = data.tm_hour;
	int minuto = data.tm_min;

	stringstream ss;
	ss << "<" << dia << "/" << mes << "/" << ano <<
		" - " << setfill('0') << setw(2) << hora << ":" << setfill('0') << setw(2) << minuto <<  ">";
	string dataHoraFormatada;
	getline(ss, dataHoraFormatada);
	dataHora = dataHoraFormatada;
}