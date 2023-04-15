#!/bin/bash

echo "cargando..."
sudo apt-get update -y > /dev/null 
sudo apt-get install figlet curl -y > /dev/null

clear
figlet wireguard
echo ""
echo "$(tput setaf 7)[$(tput setaf 1)+$(tput setaf 7)] Instalando docker."

sudo apt-get install docker.io docker-compose -y > /dev/null

clear
figlet wireguard
echo ""
echo "$(tput setaf 7)[$(tput setaf 1)*$(tput setaf 7)] Docker instalado."
echo ""
echo "$(tput setaf 7)[$(tput setaf 1)+$(tput setaf 7)] Creando docker wireguard."
echo ""
sleep 0.5

docker-compose up -d > /dev/null

clear
figlet wireguard
echo ""
echo "$(tput setaf 7)[$(tput setaf 1)*$(tput setaf 7)] Docker instalado."
echo ""
echo "$(tput setaf 7)[$(tput setaf 1)*$(tput setaf 7)] Docker creado."
echo ""
echo "$(tput setaf 7)[$(tput setaf 1)+$(tput setaf 7)] Mostrando configuación peer:"
echo ""
curl ifconfig.me > ip_publica.txt
sleep 0.5

clear
figlet wireguard
echo ""
echo "$(tput setaf 7)[$(tput setaf 1)*$(tput setaf 7)] Docker instalado."
echo ""
echo "$(tput setaf 7)[$(tput setaf 1)*$(tput setaf 7)] Docker creado."
echo ""
echo "$(tput setaf 7)[$(tput setaf 1)+$(tput setaf 7)] Mostrando configuación peer:"
echo ""

sleep 1.5

sudo chmod 777 program.out
sudo ./program.out

sleep 0.5

cat ./config/peer1/peer1.conf
echo ""

