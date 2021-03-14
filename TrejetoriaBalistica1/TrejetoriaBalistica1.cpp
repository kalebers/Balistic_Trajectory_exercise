#include <iostream>
#include <cmath>

// definindo os valores fixos gerais de PI e gravidade passados no exercício
// define é usado para passar argumentos constantes que serão usados pelo
// programa.
#define PI 3.141592654
#define G 9.8


int main() {
    // iniciando variaveis 
    double v0, distancia;
    double altura, tempo, theta, seno, angulo_graus;


    // Entrada dos valores de Velocidade Inicial e Distancia
    std::cout << "Velocidade Inicial (m/s): ";
    std::cin >> v0;

    std::cout << "Distancia (m): ";
    std::cin >> distancia;

    // Cálculo do ângulo, altura e tempo, fazendo a conversão do ângulo
    // de radianos para graus.
    seno = (distancia * G) / (pow(v0, 2));
    theta = asin(seno) / 2;
    altura = pow(v0, 2) * pow(sin(theta), 2) / (2 * G);
    tempo = 2 * v0 * sin(theta) / G;
    angulo_graus = theta * 180 / PI;


    // Prints da saída dos resultados
    std::cout << "Altura: " << altura << " m" << std::endl;
    std::cout << "Ângulo: " << angulo_graus << " graus" << std::endl;
    std::cout << "Tempo: " << tempo << " s" << std::endl;

    return 0;
}