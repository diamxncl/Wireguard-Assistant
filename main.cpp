#include <iostream>
#include <unistd.h>

using namespace std;

int main () {
    system("sudo apt update");
    system("sudo apt install docker.io docker-compose -y");

    cout << "\033[32m" << "Actualizaciones e instalación de docker realizada." << "\033[0m" << endl;
    cout << endl << "\033[32m" << "Preparando la instalación del docker..." << "\033[0m" << endl;
    sleep(1);

    system("docker-compose up -d");
    cout << "\033[32m" << "Docker creado." << endl << endl << "Mostrando configuración peer..." << "\033[0m" << endl;
    sleep(2);
    system("cat ./config/peer1/peer1.conf");

    return 0;
}