# esp-blinky-docker
A simple ESP8266 application using the docker to build it. 
It inverts the GPIO2 every second. The ESP-12 board has a led connected to this pin. 

## How to use it
* Only if you use VirtalBox (with boot2docker or docker-machine): first stop the docker VM and then connect your RS232 adapter to the computer. Assuming the adapter is recognised on your machine, go to the VirtualBox configuration screen and and instruct the VM to share your USB adapter. Then start the docker VM again. You can check if your adapter is working fine by running the docker-connect script. If you don't see any stack-traces you should be fine.
* Refer to [esp-open-sdk-docker](https://github.com/nevers/esp-open-sdk-docker) and build the docker container as detailed in the instructions. 
* Run docker-build to build the development environment image.
* Run docker-flash to make the binaries and flash them to your ESP8266 SoC. 

## Hardware setup
For the ESP-12 board, refer to https://github.com/nevers/esp-open-sdk-docker
