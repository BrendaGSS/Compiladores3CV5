/*Algoritmo de subconjuntos 
Brenda Gpe.Sánchez Sánchez
Compiladores
*/


#include <bits/stdc++.h>
using namespace std;


vector<int> epsilon;//agregar los estados posibles a ir con Epsilon
vector <vector<int>> nuevosEstados>; // nuevos estados después del proceso
stack <vector> verifEstados1;
stack <vector> verifEstados2;
void epsilonCerradura(vector<int> Estados){ // vector que contienen todos los estados con transición a epsilon
	for (int i=0;i<Estados.size();i++){
		if (transitionTable[Estados[i]][E]==1); 
			epsilon.push_back(i);
	}
}
v
void  moverSimb(vector <int> Estados,vector<char>Simbolos){ //Se prueban los estados con cada símbolo
	for (int i=0;i<Estados.size();i++){
		for (int j=0;j<Simbolos.size();j++){
			if(transitionTable[Estados[i]][Simbolos[j]]=1)
				EstadoGenerado.push_back();
		}
	}
}

bool ExisteEstado(vector<int> EstadoGenerado){ //Verificación de la existencia de un estado generado
	vector<int> EnPila;
	if verifEstados1.empty()==true //VerifEstados1 guarda todos los estados que se van generando
		verifEstados1.push_back(EstadoGenerado);
	while (!verifEstados1.empty()){
		if(EstadoGenerado.size()==verifEstados1.pop().size())
			return false;
		EnPila=verifEstados1.top();
		sort(EstadoGenerado.begin(),EstadoGenerado.end());
		sort(EnPila.begin(), EnPila.end());
		for (int i = 0; i < EstadoGenerado.size(); ++i)
		{
			if(EstadoGenerado[i]!=EnPila[i])
				return false			
		}
		verifEstados2.push_back(EnPila.top()); //pila auxiliar para intercambiar estados dela pila1 a la pila2
		verifEstados1.pop();
	}
	while(!=verifEstados2.empty()){ //Una vez que se comprueba que no hay estados repetidos se regresan a la pila 1 
		verifEstados1.push_back(verifEstados2.top())
		verifEstados2.pop();
	}
	verifEstados1.push_back(EstadoGenerado);

}
 
