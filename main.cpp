#include <iostream>
#include <unistd.h>

using namespace std;

int main () {
    system("clear");
    cout << "\033[32m" << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << "\033[0m" << endl;
    cout << endl << "\033[32m" << "[+] Comenzando actualizaciones e instalación de docker." << "\033[0m" << endl;
    system("sudo apt update");
    usleep(50000);
    system("sudo apt install docker.io docker-compose -y");

    system("clear");
    cout << endl << "\033[32m" << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << "\033[0m" << endl;
    cout << endl << "\033[32m" << "[*] Actualizaciones e instalación de docker realizada." << "\033[0m" << endl;
    cout << endl << "\033[32m" << "[+] Preparando la instalación del docker..." << "\033[0m" << endl << endl;
    usleep(500000);

    system("docker-compose up -d");
    cout << endl << "\033[32m" << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - " << "\033[0m" << endl;
    cout << "\033[32m" << "[+] Docker creado." << endl << endl << "[+] Mostrando configuración peer..." << "\033[0m" << endl << endl;

    system("curl ifconfig.me > ip_publica.txt");
    sleep(2);
    system("sed -i \"s/wireguard.domain.com/$(cat ip_publica.txt)/g\" ./config/peer1/peer1.conf");
    usleep(500000);
    system("cat ./config/peer1/peer1.conf");

    return 0;
}
