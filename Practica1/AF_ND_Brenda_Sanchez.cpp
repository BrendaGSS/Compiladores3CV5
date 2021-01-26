/*Brenda Gudalupe S谩nchez S谩nchez
 grupo: 3CV5
 materia: Compiladores */

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
/*********************************************CLASE AUTOMATA FININTO DETERMINISTA**************************************/
/*Esta clase fue sencilla de modelar puesto que tiene transiciones con un s韒bolo a un solo estado
mietras que la clase AFN es complicada de maneja por los muchos estados a los que puede ir con un s韒bolo*/

class AFD{
private:
//atributos
	int inicial;
	vector<int> ef;
	vector <vector<vector<char>(122)>>transitionaTable;
	bool flagAFN, flagAFD;
public:
	AFD();
	void cargar_desde(string path);
	void guardar_en(string p);
	void agregar_transicion(int i, int f, char s);
	void eliminar_transicion(int i, int f, char s);
	int obtener_inicial();
	vector <int> obtener_finales();
	void establecer_inicial(int i);
	void establecer_final(int f);
	bool esAFN();
	bool esAFD();
	bool acepta(string s);
	string generar_cadena();
};
//constructor

 AFN::AFD(){
 	inicial=-1;
 }  
 //carga archivo
 void AFN::cargar_desde(string path){
 	ifstream archivo;
 	string linea;
 	archivo.open(path);
 	if(!archivo.is_open()) return;
 	else {
 		while (getline(archivo,linea)){
 			if(BSearch (linea,E))
 				flagAFN=true;
 			else
 				flagAFD=true;
 			int x,y;
 			x=getEdo1(line);
 			y=getEdo2(line)++
 			transitionTable[x][y].=1;
 		}
 	}
 }
 //guardar archivo
void AFD::guardar_en(string p){
	ofstream archivo;
	archivo.open(p);
	if (!archivo.is_open()) return;
			
	}
//obtener inicial
int AFD::obtener_inicial(){
	return inicial;
}
//obtener finales
vector <int> AFD::obtener_finales(){
	return ef;
}
//Inicial
void AFD::establecer_inicial(int i){
	inicial=i;

}
//final
void AFD::establecer_final(int f){
	ef.push_back(f);
}
//Agregar transici贸n 
void AFD::agregar_transicion(int i, int f, char s){

	transitionTable[i][s].push_back(f);
}
//Eliminar transici贸n
void AFD::eliminar_transicion(int i, int f, char s){
	transitionTable[i][s].pop_back(f);
}
//Es AFN
bool AFD::esAFD(){
	if (flagAFN==true)
		return true;
	else 
		return false;
}
//ES AFD
bool AFD::esAFD(){
	if (flagAFD==true)
	   return true;
	else
		return false;
}
//Acepta

bool AFD::acepta(string s){
	int i,f;
	i=inicial;
	char simb=s[0];
	for (int i;i<s.size();i++)
		if([i][simb]!=0){
			i=[i][simb];
			simb=simb[i++];
		}
	}
	if (BSearch(finales,i)==true)
		return true;
	else 
		return false;
}
//Genera cadena
string AFD::generar_cadena(){
	//no la supe implementar
}
/*********************************************CLASE AUTOMATA FININTO NO DETERMINISTA**************************************/
class TT {
	vector<char>simb;
};
class AFN{
private:
//atributos
	int inicial;
	vector<int> ef;
	vector <vector<vector<TT>>(122)> transitionTable;
	bool flagAFN, flagAFD;
public:
	AFN();
	void cargar_desde(string path);
	void guardar_en(string p);
	void agregar_transicion(int i, int f, char s);
	void eliminar_transicion(int i, int f, char s);
	int obtener_inicial();
	vector <int> obtener_finales();
	void establecer_inicial(int i);
	void establecer_final(int f);
	bool esAFN();
	bool esAFD();
	bool acepta(string s);
	string generar_cadena();
};
//constructor

 AFN::AFN(){
 	inicial=-1;
 }  
 //carga archivo
 void AFN::cargar_desde(string path){
 	ifstream archivo;
 	string linea;
 	archivo.open(path);
 	if(!archivo.is_open()) return;
 	else {
 		while (getline(archivo,linea)){
 			if(BSearch (linea,E))
 				flagAFN=true;
 			else
 				flagAFD=true;
 		}
 	}
 }
 //guardar archivo
void AFN::guardar_en(string p){
	ofstream archivo;
	archivo.open(p);
	if (!archivo.is_open()) return;
			
	}
//obtener inicial
int AFN::obtener_inicial(){
	return inicial;
}
//obtener finales
vector <int> AFN::obtener_finales(){
	return ef;
}
//Inicial
void AFN::establecer_inicial(int i){
	inicial=i;
}
//final
void AFN::establecer_final(int f){
	ef.push_back(f);
}
//Agregar transici贸n 
void AFN::agregar_transicion(int i, int f, char s){

	transitionTable[i][s].push_back(f);
}
//Eliminar transici贸n
void AFN::eliminar_transicion(int i, int f, char s){
	transitionTable[i][s].pop_back(f);
}
//Es AFN
bool AFN::esAFN(){
	if (flagAFN==true)
		return true;
	else 
		return false;
}
//ES AFD
bool AFN::esAFD(){
	if (flagAFD==true)
	   return true;
	else
		return false;
}

//Genera cadena
string AFN::generar_cadena(String){
	int i=0;
	char c=s[i];
	
		while (transitionTable[inicial][c].top()=1 and !transitionTable[inicial][s].empty()){
			incial=transitionTable[inicial][c].top();
			transitionTable[incial][c].pop();
			c=s[i++];		
	}
	if(BSearch(finales,inicial)==true)
		{
			return true;
		}
	return false;
}


/************************************************CLASE MAIN*******************************************/

int main (){
 
	AFN p= AFN();
	p.cargar_desde("entrada.af");
	p.guardar_en("salida.af");
	
return 0;
}
 
