#ifndef MEMORY_WRITE_CARRIER_H
#define MEMORY_WRITE_CARRIER_H

#include <iostream>
#include <string>

using namespace std;

class Carrier {
    string recording_speed;
    string connection_interface;
    string memory_size;
    string manufacturer;
    string size;
};

Carrier(){}
Carrier(string recording_speed, string connection_interface, string memory_size, string manufacturer, string size) {
    this recording_speed = recording_speed;
    this connection_interface = connection_interface;
    this memory_size = memory_size;
    this manufacturer = manufacturer;
    this size = size;
}

#endif //MEMORY_WRITE_CARRIER_H
