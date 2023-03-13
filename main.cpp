#include <iostream>
#include <unistd.h>

/***
Este programa tendrá 
	- Sudo apt update
	- Sudo apt install docker.io docker-compose

Después tendrá que ejecutar automáticamente
Docker-compose -d
***/ 

using namespace std;

int main () {
    system("sudo apt update");
    system("sudo apt install docker.io docker-compose -y");

    cout << "Actualizaciones e instalación de docker realizada." << endl;
    cout << endl << "Preparando la instalación del docker..." << endl;
    sleep(1);

    system("docker-compose up -d");
    cout << "Docker creado." << endl << endl << "Mostrando configuración peer" << endl;
    system("cat ./config/peer1/peer1.conf");

    return 0;
}