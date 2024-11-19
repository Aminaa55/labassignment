#include <iostream>
#include <string>
using namespace std;

class Patient {
public:
    string id;
    char gender;
    string arrival_time;
    string type;

    Patient(string id, char gender, string arrival_time, string type);
};
