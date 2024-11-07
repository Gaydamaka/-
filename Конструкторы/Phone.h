using namespace std;
#include <string>

class Phone {
public:
    Phone();

    Phone(int batteryLevel, int storage, const std::string& model, bool screenOn, int signalStrength);

    void SetBatteryLevel(int batteryLevel);
    int GetBatteryLevel() const;

    void SetStorage(int storage);
    int GetStorage() const;

    void SetModel(const std::string& model);
    string GetModel() const;

    void SetScreenOn(bool screenOn);
    bool IsScreenOn() const;

    void SetSignalStrength(int signalStrength);
    int GetSignalStrength() const;

    void MakeCall();
    void ChargeBattery();
    void InstallApp(int size);
    void IncreaseSignal();
    void PowerButton();

private:
    int batteryLevel;
    int storage;    
    string model;
    bool screenOn;  
    int signalStrength;
};
