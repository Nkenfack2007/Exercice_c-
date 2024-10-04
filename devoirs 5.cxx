#include<iostream>
#include<cmath>
float a,b,c,alpha;
int main(int argc, char *argv[])
{
	std::cout << "saisir la longueurs du cote d'un triangle:";
	std::cin >> a;
	std::cout << "saisir une autre longueur du cote d'un triangle:";
	std::cin >> b;
	std::cout << " saisir angle en radian entre les deux longueurs du cote du triangle:";
	std::cin>> alpha;
	
	 c = sqrt((a*a)+(b*b)-2*a*b *cos (alpha));
	 
	 std::cout << "la longueur du dernier cote :"<< c << std::endl;
	 
	 return 0;
	
}
