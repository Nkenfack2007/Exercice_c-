#include<iostream>
#include<cmath>
float a,b,c;
int main(int argc, char *argv[])
{
	std::cout<<"saisir la longueur du triangle:";
	std::cin>>a;
	std::cout<<"saisir une autre longueur du trangle:";
	std::cin>>b;
	std::cout<<"saisir une autre longueur du triangle";
	std::cin>>c;
	if( a == b && b == c) {
	    std::cout<< " ce triangle est equilateral"<<std::endl;
	} else if ((a == b && b != c) || (a ==c && c != b) || (b == c && b != a)){
	    std :: cout <<" ce triangle est isocele " << std :: endl;
	} else if (a*a == b*b + c*c ||  b*b == a*a + c*c ||  c*c == a*a + b*b){
	    std :: cout <<" ce triangle est rectangle " << std :: endl;
	} else if (a != b && b != c && c != a ){
	    std :: cout <<" ce triangle est quelconque" << std :: endl;
	}
	 
	 return 0; 

}