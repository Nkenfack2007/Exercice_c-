#include<iostream>

float b,h,c,p,s;

int main(int argc, char *argv[]){
	
	std::cout << "saisir le cote du triangle:";
	std::cin >> c;
	std::cout << "saisir la base d'un triangle:";
	std::cin >> b;
	std::cout << " saisir la hauteur d'un triangle:";
	std::cin >> h;
	
	p= c+c+c;
	s=(b*h)/2;
	
	std::cout << "cote:"<< c << std::endl;
	std::cout << "base:"<< b << std::endl;
	std::cout << "hauteur:"<< h << std::endl;
	std::cout << "perimetre:"<< p << std::endl;
	std::cout<<"surface:"<< s <<std::endl;
	
	return 0;
	
	
}