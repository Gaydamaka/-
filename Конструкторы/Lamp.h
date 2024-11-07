
class Lamp {
public:

    explicit Lamp();

    Lamp(int power, int voltage, int brightness, int colorTemperature, bool isOn);

    void SetPower(int power);
    int GetPower() const;

    void SetVoltage(int voltage);
    int GetVoltage() const;

    void SetBrightness(int brightness);
    int GetBrightness() const;

    void SetColorTemperature(int colorTemperature);
    int GetColorTemperature() const;

    void SetIsOn(bool isOn);
    bool GetIsOn() const;

    void TurnOn();
    void TurnOff();
    void Dim();
    void IncreaseBrightness();
    void ChangeColorTemperature(int temp);

private:
    int power;         
    int voltage;
    int brightness;
    int colorTemperature;
    bool isOn;
};

