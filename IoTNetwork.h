#ifndef IOTNETWORK_H
#define IOTNETWORK_H

#include <queue>
#include <stack>
#include <string>
using namespace std;

class IoTNetwork {
public:
    IoTNetwork();
    string addSensor(int id, const string &location, const string &type);
    void addMeasurement(int sensorId, double value);
    void removeSensor(int id);
    void findSensors(const string &location);
    void displaySensors();
    void sortAndDisplaySensorsByLocation();
    void undoLastMeasurement(int sensorId);
    double getAverageMeasurement(int sensorId);
    ~IoTNetwork();
private:
    struct SensorNode {
        int id;
        string location;
        string type;
        SensorNode *next;
        queue<double> measurements;
        stack<double> measurementHistory;
        SensorNode(int i, string loc, string t)
            : id(i), location(loc), type(t), next(nullptr) {}
    };
    SensorNode *head;
};

#endif
