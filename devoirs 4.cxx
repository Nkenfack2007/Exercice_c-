#include<iostream>
int fact, n, i;
int main(int argc, char *argv[])
{
	std::cout<<"saisir la valeur de n:";
	std::cin>> n;
	  fact = 1;
	 for ( i=1; i <=n; i++)
	 {
	     fact = fact * i;
	 }
	 std :: cout <<" le factoriel n est:"<< fact << std :: endl;
	 
	 return 0;
}

