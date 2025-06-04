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
    string addMeasurement(int sensorId, double value);
    string removeSensor(int id);
    string findSensors(const string &location);
    string displaySensors();
    string sortAndDisplaySensorsByLocation();
    string undoLastMeasurement(int sensorId);
    string getAverageMeasurement(int sensorId);
    string displayMeasurement(int sensorId);
    string loadRandomSampleData(int count);
    string loadRandomMeasurementsToAll(int jumlahPengukuranPerSensor);
    string testCase();
    string clearNetwork();
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
