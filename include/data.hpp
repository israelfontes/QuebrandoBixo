#ifndef _DATA_HPP_
#define _DATA_HPP_

struct data{
	
	short Dia;
	short Mes;
	short Ano;
};

class Date{

	private:

		data date_;
	
	public:

		data readData(	string _data ){
			char c;
			string subs;

			while(	c : _data ){
				if( c != '/' ){
					subs += c;
				}else{
					date_.dia = stoi(subs);
					subs = "";	
				}
			}
		}

		data getData(){
			return date_; 
		}
};

#endif