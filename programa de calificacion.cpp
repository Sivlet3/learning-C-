/*la calificacion media de un estudiante es la media ponderada de 3 notas
la nota de practica vale 30% del tota, la nota teorica vale 60% y la de participacion 10%
escribir un programa que lea de la entrada estandar las 3 notas de un alumno y escriba en la salida la nota final */

#include<iostream>

main(){
	float a,b,c, notafinal= 0;
	std::cout<<"Digite la nota practica:"<<std::endl; std::cin>>a;
	std::cout<<"Digite la nota teorica:"<<std::endl; std::cin>>b;
	std::cout<<"Digite la nota de participacion"<<std::endl; std::cin>>c;
	
	a = a*0.30; 
	b = b*0.60;
	c= c*0.10;
	notafinal = a+b+c;
	
	std::cout<<"La nota final del estudiante es: \n"<<notafinal<<std::endl; 
	
	
	return 0;
}
