#include <iostream>
#include <cmath>
#include "./TrejetoriaBalistica1.h"

int main() {
    // iniciando variaveis 
    double v0, distancia;
    double altura, tempo, theta, seno, angulo_graus;

    // Entrada dos valores de Velocidade Inicial e Distancia
    std::cout << "Velocidade Inicial (m/s): ";
    std::cin >> v0;

    std::cout << "Distancia (m): ";
    std::cin >> distancia;

    // Chamando as funções
    theta = calculo_theta(distancia, v0);
    altura = calculo_altura(theta, v0);
    tempo = calculo_tempo(theta, v0);
    angulo_graus = radianos_para_graus(theta);
    
    // Prints da saída dos resultados
    std::cout << "Altura: " << altura << " m" << std::endl;
    std::cout << "Angulo: " << angulo_graus << " graus" << std::endl;
    std::cout << "Tempo: " << tempo << " s" << std::endl;

    return 0;
}

double calculo_theta(double distancia, double v0) {
    // Funçao para calcular o ângulo theta
    double seno, theta;
    seno = (distancia * G) / (pow(v0, 2));
    theta = asin(seno) / 2;
    return theta;
}

double calculo_altura(double theta, double v0) {\
    // Função para calcular a aultura
    double altura;
    altura = pow(v0, 2) * pow(sin(theta), 2) / (2 * G);
    return altura;
}

double calculo_tempo(double theta, double v0) {
    //Função para calcular o tempo
    double tempo;
    tempo = 2 * v0 * sin(theta) / G;
    return tempo;
}

double radianos_para_graus(double theta) {
    // Função para transformar o ângulo theta de radianos para graus
    double angulo_graus;
    angulo_graus = theta * 180 / PI;
    return angulo_graus;
}