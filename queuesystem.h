#include <iostream>
#include <vector>
#include <queue>
#include "Patient.h"
using namespace std;

void dispatchPatients(vector<Patient>& patients, queue<Patient>& urgentQueue, queue<Patient>& normalQueue, const string& currentTime);
void servePatients(queue<Patient>& urgentQueue, queue<Patient>& normalQueue, vector<Patient>& inService, int maxServe);
void displayStatus(const queue<Patient>& urgentQueue, const queue<Patient>& normalQueue, const vector<Patient>& inService, const vector<Patient>& completed);
