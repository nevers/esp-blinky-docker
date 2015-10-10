# esp-blinky-docker
A simple ESP8266 application using the docker to build it.

## Hardware setup
TODO

## How to use it
* Only if you use boot2docker: first stop your the docker VM. Then, connect your RS232 adapter to your computer. Assuming the adapter is recognised on your machine, go to your VirtualBox configuration screen and and instruct your boot2docker VM to share your USB adapter in the VM. You can check if your adapter is working fine by running the docker-connect script. If you don't see any stack-traces you should be fine.
* Refer to [esp-open-sdk-docker](https://github.com/nevers/esp-open-sdk-docker) and build the docker container as detailed in the instructions. 
* Run docker-flash to make the binaries and flash them to your ESP8266 SoC. 
