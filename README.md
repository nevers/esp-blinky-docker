# esp-blinky-docker
A simple ESP8266 application using the docker to build it.

## Hardware setup
TODO

## How to use it
* Only if you use boot2docker: first stop the docker VM using boot2docker stop. Then, connect your RS232 adapter to your computer. Assuming the adapter is recognised on your machine, go to the VirtualBox configuration screen and and instruct the boot2docker VM to share your USB adapter. Then start the docker VM again using boot2docker start. You can check if your adapter is working fine by running the docker-connect script. If you don't see any stack-traces you should be fine.
* Refer to [esp-open-sdk-docker](https://github.com/nevers/esp-open-sdk-docker) and build the docker container as detailed in the instructions. 
* Run docker-flash to make the binaries and flash them to your ESP8266 SoC. 
