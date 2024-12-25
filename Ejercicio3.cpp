/*Realizar un programa que lea la entrada de los siguientes datos
edad: 
sex:
altura:
y mostrarlos en una salida estandar */

#include<iostream>

main(){
	
	int edad;
	char sex[10]; // como la edad es un tipo letra, y char solo acepta un caracte, definimos la capacidad
	float altura; //como es un dato decimal hacemos uso de un float 
	
	std::cout<<"digite su edad"<<std::endl; std::cin>>edad;
	std::cout<<"digite su sexo(masculino o femenino)"<<std::endl; std::cin>>sex;
	std::cout<<"digite su altura"<<std::endl; std::cin>>sex;
	
	std::cout<<"su edad es:"<<edad<<std::endl;
	std::cout<<"su sexo es:"<<sex<<std::endl;
	std::cout<<"su altura es:"<<altura<<std::endl;
	
	
	
	
	
	
	return 0;
}
