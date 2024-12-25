//estructuras condicionales, simples y dobles
//sentencia if y else

#include<iostream>

main(){
	int numero, dato = 5;
	std::cout<<"digite un numero"<<std::endl; std::cin>>numero;
	
	
	if (numero == dato){   //el operador de asignacion es ==  y la estructura en que se escribe la sintaxis es como en los demas lenguajes
	
	
	/*si queremos usar otro operado de asignacion podemos usar los siguientes:
	"!=" significa diferente los demas son < menor que, > mayor que entre otro */
	
		std::cout<<"El numero es correcto"<<std::endl;
		
	}
	else{
		std::cout<<"el numero es diferente"<<std::endl;
		
	}	
	return 0;
}
