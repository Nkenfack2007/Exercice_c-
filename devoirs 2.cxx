#include <iostream>

float L, l, s, p;

int main(int argc, char *argv[]) {
    std::cout << "Saisir la longueur du rectangle: ";
    std::cin >> L;
    std::cout << "Saisir la largeur: ";
    std::cin >> l;

    p = (L + l) * 2; 
    s = L * l;     
    if (L<=l){
        std::cout<<"la longueur d'un rectangle n'est jamais inferieur a la largeur"<<std::endl;} else{
    std::cout << "Longueur: " << L << std::endl;
    std::cout << "Largeur: " << l << std::endl;
    std::cout << "Périmètre: " << p << std::endl; 
    std::cout << "Surface: " << s << std::endl;  
        }
    return 0; 
}
