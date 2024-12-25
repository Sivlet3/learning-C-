//ejercicio 4; soluciona la exprecion (a + b/c) / (d+ e/f)

#include<iostream>

main(){
	
	float a,b,c,d,e,f, resultado= 0;
	std::cout<<"a continuacion digite todos sus valores para la exprecion: (a + b/c) / (d + e/f)"<<std::endl;
	std::cout<<"digite a:"<<std::endl; std::cin>>a;
	std::cout<<"digite b:"<<std::endl; std::cin>>b;
	std::cout<<"digite c:"<<std::endl; std::cin>>c;
	std::cout<<"digite d:"<<std::endl; std::cin>>d;
	std::cout<<"digite e:"<<std::endl; std::cin>>e;
	std::cout<<"digite f:"<<std::endl; std::cin>>f;
	
	resultado = (a +(b/c))/(d+(e/f));
	std::cout<<"el resultado de la exprecion es: \n"<<resultado<<std::endl;
	
	return 0;
}
