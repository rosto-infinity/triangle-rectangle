#include <iostream>
#include <cmath>

using namespace std;

bool estTriangleRectangle(double a, double b, double c) {
    double hypotenuse, cote1, cote2;

    // Identifier l'hypoténuse et les autres côtés
    if (a >= b && a >= c) {
        hypotenuse = a;
        cote1 = b;
        cote2 = c;
    } else if (b >= a && b >= c) {
        hypotenuse = b;
        cote1 = a;
        cote2 = c;
    } else {
        hypotenuse = c;
        cote1 = a;
        cote2 = b;
    }

    // Vérifier la relation de Pythagore
    return (hypotenuse * hypotenuse == cote1 * cote1 + cote2 * cote2);
}

int main() {
    double a, b, c;

    // Lire les longueurs des côtés
    cout << "Entrez la longueur du côté a : ";
    cin >> a;
    cout << "Entrez la longueur du côté b : ";
    cin >> b;
    cout << "Entrez la longueur du côté c : ";
    cin >> c;

    // Vérifier si les longueurs peuvent former un triangle rectangle
    if (estTriangleRectangle(a, b, c)) {
        cout << "Les longueurs peuvent former un triangle rectangle." << endl;
    } else {
        cout << "Les longueurs ne peuvent pas former un triangle rectangle." << endl;
    }

    return 0;
}
