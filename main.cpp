#include <iostream>
#include <vector>
#include <queue>
#include "Patient.h"
#include "QueueSystem.h"
using namespace std;

int main() {
    vector<Patient> patients;
    queue<Patient> urgentQueue, normalQueue;
    vector<Patient> inService, completed;

    patients.push_back(Patient("28501012345678", 'M', "14:30", "Urgent"));
    patients.push_back(Patient("28501012345679", 'F', "14:35", "Normal"));

    string currentTime = "14:30";
    dispatchPatients(patients, urgentQueue, normalQueue, currentTime);
    servePatients(urgentQueue, normalQueue, inService, 5);
    displayStatus(urgentQueue, normalQueue, inService, completed);

    return 0;
}
