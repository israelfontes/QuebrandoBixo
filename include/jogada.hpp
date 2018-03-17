#ifndef _JOGADA_HPP_
#define _JOGADA_HPP_

#include <iostream>
#include <string>
using namespace std;
struct Date{
			u_short dia;
			u_short mes;
			u_short ano;	
		};

class Jogada{

	//public:
		

	private:
		u_int chave;    // Chave do jogo 
		Date data;	    // Data do jogo
		u_short horario; // Horário do jogo
		u_short bicho;  // Bicho dado no jogo
		u_short ordem;  // Ordem em que o bicho saiu

	public:
		Jogada(u_int _chave, Date _data, u_short _horario, u_short _bicho, u_short _ordem): 
			chave(_chave), data(_data), horario(_horario), bicho(_bicho), ordem(_ordem){} 

		void setChave(u_int _chave);
		void setData(Date _data);
		void setHorario(u_short _horario);
		void setBicho(u_short _bicho);
		void setOrdem(u_short _ordem);

		u_int getChave();
		Date getData();
		u_short getHorario();
		u_short getBicho();
		u_short getOrdem();
};

#endif