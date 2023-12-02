# WireGuard-Assistant

This program will create a VPN using Wireguard, located in the port 51820 UDP, for 1 or more peers.

## How it works?
This program will update your system, install docker.io and docker-compose.

Then he will pull the [wireguard docker](https://github.com/linuxserver/docker-wireguard) made by linuxserver.

Then the docker will run automatically, and the program will show you the full config for your peer, if you use more peers, it wont show the rest of the peers.

## How to build

First you need to clone this repository.

  ```bash
  git clone https://github.com/diamxncl/Wireguard-Assistant
  ```
Go into the directory you just cloned:

  ```bash
  cd Wireguard-Assistant
  ```

You will need to give program.out execute pemissions:
  ```bash
  bash install.sh
  ```
