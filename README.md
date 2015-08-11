# esp-blinky-docker
A simple ESP8266 application using the esp-open-sdk docker container to build it.
To use it, refer to esp-open-sdk-docker and build the docker container. Then, build this container using the docker-build script and run docker-flash to make the binaries and flash them to your ESP8266 SoC. If you use boot2docker, make sure you've added your serial device to the boot2docker VM so docker can use it.
