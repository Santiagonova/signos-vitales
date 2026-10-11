#include <iostream>
#include <string>

// 1. Función de temperatura (Compañero A)
double fahrenheitACelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

// 2. Función de frecuencia cardíaca (Compañero B)
std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) return "bradicardia";
    if (lpm <= 100) return "normal";
    return "taquicardia";
}

int main() {
    double fahrenheit;
    int lpm;

    std::cout << "Temperatura en Fahrenheit: ";
    std::cin >> fahrenheit;

    std::cout << "Frecuencia cardiaca (lpm): ";
    std::cin >> lpm;

    return 0;
}