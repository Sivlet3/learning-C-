//realizar un programa que calcule el valor que toma la sgt funcion para los valores de x e y; 
// funcion; f(x,y)= (raiz de x / (y elevado 2 -1)

#include<iostream>
#include<math.h> //libreria que nos permite realizar operaciones aritmeticas como raices etc
main(){
	float x,y,resultado = 0;
	std::cout<<"Digite el valor de x"<<std::endl; std::cin>>x;
	std::cout<<"Digite el valor de y"<<std::endl; std::cin>>y;
	
	resultado= (sqrt(x))/(pow(y,2)-1); //sqrt es la exprecion para raices cuadraticas y pow se utilzia para los elevados, esta misma diviendose en 2 partes
	std::cout<<"\n El resultado de la exprecion matematica es:"<<resultado<<std::endl;
	 
	return 0;
}
