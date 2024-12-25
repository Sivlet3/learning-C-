<<<<<<< HEAD
/* problema 4, escribir expresiones, a /b + 1 */


#include<iostream>
main(){
	
	float a,b, resultado = 0; // como es una operacion colocamos flotantes para admitir todos los numeros y la variable resultado la iniciamos en 0 
	
	std::cout<<"A continuacion digite su exprecion 1 a 1"<<std::endl;
	std::cout<<"digite  A"<<std::endl; std::cin>>a;
	std::cout<<"digite B"<<std::endl; std::cin>>b;
	resultado = (a/b) + 1;
	std::cout.precision(2); //esto sirve para que redonde los decimales 
	
	std::cout<<"el resultado de la exprecion a/b + 1 es:\n "<<resultado<<std::endl; 

	return 0;
}
=======
/* problema 4, escribir expresiones, a /b + 1 */


#include<iostream>
main(){
	
	float a,b, resultado = 0; // como es una operacion colocamos flotantes para admitir todos los numeros y la variable resultado la iniciamos en 0 
	
	std::cout<<"A continuacion digite su exprecion 1 a 1"<<std::endl;
	std::cout<<"digite  A"<<std::endl; std::cin>>a;
	std::cout<<"digite B"<<std::endl; std::cin>>b;
	resultado = (a/b) + 1;
	std::cout.precision(2); //esto sirve para que redonde los decimales 
	
	std::cout<<"el resultado de la exprecion a/b + 1 es:\n "<<resultado<<std::endl; 

	return 0;
}
>>>>>>> da8c362 (condicionales y funciones matematicas)
