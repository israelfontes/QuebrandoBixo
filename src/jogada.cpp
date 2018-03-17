#include "jogada.hpp"

void Jogada::setChave(u_int _chave){ chave = _chave; }

void Jogada::setData(Date _data){ data = _data; }

void Jogada::setHorario(u_short _horario){ horario = _horario; }

void Jogada::setBicho(u_short _bicho){ bicho = _bicho; }

void Jogada::setOrdem(u_short _ordem){ ordem = _ordem; }

u_int Jogada::getChave(){
	return chave;
}

Date Jogada::getData(){
	return data;
}

u_short Jogada::getHorario(){
	return horario;
}

u_short Jogada::getBicho(){
	return bicho;
}

u_short Jogada::getOrdem(){
	return ordem;
}