<<<<<<< HEAD
//escribir un programa que intercambie los valores de las variables

#include<iostream>

main(){
	
	int x,y,aux;
	
	std::cout<<"digite el valor de x"<<std::endl; std::cin>>x;
	std::cout<<"digite el valor de y"<<std::endl; std::cin>>y;
	
	/*
	si suponemos que x = 10 
	y= 5
	entonces con la ayuda de el auxiliar intercambiaremos, diciendo que la variable aux nos va a guardar el valor de x
	y que x va a ser reemplazada por el valor de y, entonces como la variable aux ya tiene el valor de y, hay que
	decir que y va a valer aux en su estado original, osea en primera instacia que es x:
	*/
	aux = x;
	x= y;
	y= aux;
	
	std::cout<<"el nuevo valor de x es: \n"<<x<<std::endl;
	std::cout<<"el nuevo valor de y es: \n"<<y<<std::endl;
	return 0;
}
=======
//escribir un programa que intercambie los valores de las variables

#include<iostream>

main(){
	
	int x,y,aux;
	
	std::cout<<"digite el valor de x"<<std::endl; std::cin>>x;
	std::cout<<"digite el valor de y"<<std::endl; std::cin>>y;
	
	/*
	si suponemos que x = 10 
	y= 5
	entonces con la ayuda de el auxiliar intercambiaremos, diciendo que la variable aux nos va a guardar el valor de x
	y que x va a ser reemplazada por el valor de y, entonces como la variable aux ya tiene el valor de y, hay que
	decir que y va a valer aux en su estado original, osea en primera instacia que es x:
	*/
	aux = x;
	x= y;
	y= aux;
	
	std::cout<<"el nuevo valor de x es: \n"<<x<<std::endl;
	std::cout<<"el nuevo valor de y es: \n"<<y<<std::endl;
	return 0;
}
>>>>>>> da8c362 (condicionales y funciones matematicas)
