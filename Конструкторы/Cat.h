#include <string>
using namespace std

class Cat {
public:

    explicit Cat();

    Cat(const string& name, int age, double weight, int energyLevel, int health);

    // Сеттеры и геттеры для полей
    void SetName(const std::string& name);
    string GetName() const;

    void SetAge(int age);
    int GetAge() const;

    void SetWeight(double weight);
    double GetWeight() const;

    void SetEnergyLevel(int energyLevel);
    int GetEnergyLevel() const;

    void SetHealth(int health);
    int GetHealth() const;

    void Eat();
    void Play();
    void Sleep();
    void Hunt();
    void Rest();

private:
    string name;
    int age;
    double weight;
    int energyLevel;
    int health;
};
