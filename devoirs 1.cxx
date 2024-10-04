#include <iostream>

float pi = 3.14;
float r, d, p, s;

int main(int argc, char *argv[]) {
    std::cout << "Saisir le rayon du cercle : ";
    std::cin >> r;

    d = 2 * r;           // Calculer le diamètre
    p = d * pi;         // Calculer la circonférence
    s = r * r * pi;     // Calculer l'aire

    std::cout << "Diamètre : " << d << std::endl;
    std::cout << "Circonférence : " << p << std::endl;
    std::cout << "Aire : " << s << std::endl;

    return 0;
}
