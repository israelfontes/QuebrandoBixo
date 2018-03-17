#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "jogada.hpp"

using namespace std;

std::vector<Jogada> jogadas;

int main(void){

	ifstream arquivo("../src/jogadas.csv");

    if(arquivo.is_open())
    {
        u_int chave;
        Date data;
        u_short horario;
        u_short bicho;
        u_short ordem;
        
        string temp;

        while(!arquivo.eof())
        {
            
            getline(arquivo,temp,',');
            chave = stoi(temp);
            
            getline(arquivo,temp,'/');       
            data.dia = stoi(temp);
            getline(arquivo,temp,'/');
            data.mes = stoi(temp);
            getline(arquivo,temp,',');    
            data.ano = stoi(temp);
            
            getline(arquivo,temp,',');
            horario = stoi(temp);
            
            getline(arquivo,temp,',');
            bicho = stoi(temp);
            
            getline(arquivo,temp,'\n');
            ordem = stoi(temp);

            jogadas.push_back(Jogada(chave, data, horario, bicho, ordem));

            cout << chave << " " << data.dia << "/" << data.mes << "/" << data.ano << " " << horario << " " << bicho << " " << ordem << endl;
        }
        arquivo.close();
   
    }

	return 0;
}