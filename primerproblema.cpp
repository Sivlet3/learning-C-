/* escribe un programa donde se ingresen de entrada  2 numeros y muestre en la salida  su suma,
resta, multiplicacion y division. */

#include<iostream>

main(){
	
	int n1,n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	std::cout<< "Digite un numero" <<std::endl; std::cin >>n1;
	std::cout<< "digite el segundo numero" <<std::endl;  std::cin >>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
	std::cout<< " el resultado de la suma es: " <<suma <<std::endl;
	std::cout<<"el resultado de la resta es:" <<resta <<std::endl;
	std::cout<<"el resultado de la multiplicacion es:"<<multiplicacion <<std::endl;
	std::cout<<"el resultado de la division es: "<<division <<std::endl;

	
	
	
	
	
	return 0;
}
