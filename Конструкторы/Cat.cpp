// Cat.cpp
#include "Cat.h"
#include <iostream>

// Конструктор по умолчанию
Cat::Cat() : name("Unnamed"), age(1), weight(2.5), energyLevel(50), health(100) {}

// Конструктор с параметрами, делегирующий конструктору по умолчанию
Cat::Cat(const std::string& name, int age, double weight, int energyLevel, int health) 
    : Cat() // Делегирование конструктору по умолчанию
{
    this->name = name;
    this->age = age;
    this->weight = weight;
    this->energyLevel = energyLevel;
    this->health = health;
}

// Реализация сеттеров и геттеров
void Cat::SetName(const std::string& name) {
    this->name = name;
}

std::string Cat::GetName() const {
    return name;
}

void Cat::SetAge(int age) {
    this->age = age;
}

int Cat::GetAge() const {
    return age;
}

void Cat::SetWeight(double weight) {
    this->weight = weight;
}

double Cat::GetWeight() const {
    return weight;
}

void Cat::SetEnergyLevel(int energyLevel) {
    this->energyLevel = (energyLevel >= 0 && energyLevel <= 100) ? energyLevel : this->energyLevel;
}

int Cat::GetEnergyLevel() const {
    return energyLevel;
}

void Cat::SetHealth(int health) {
    this->health = (health >= 0 && health <= 100) ? health : this->health;
}

int Cat::GetHealth() const {
    return health;
}

// Методы поведения
void Cat::Eat() {
    weight += 0.1;
    energyLevel += 10;
    if (energyLevel > 100) energyLevel = 100;
    std::cout << name << " is eating and gaining energy.\n";
}

void Cat::Play() {
    if (energyLevel >= 20) {
        energyLevel -= 20;
        health += 5;
        if (health > 100) health = 100;
        std::cout << name << " is playing and having fun!\n";
    } else {
        std::cout << name << " is too tired to play.\n";
    }
}

void Cat::Sleep() {
    energyLevel = 100;
    health += 10;
    if (health > 100) health = 100;
    std::cout << name << " is sleeping and restoring energy.\n";
}

void Cat::Hunt() {
    if (energyLevel >= 30) {
        energyLevel -= 30;
        weight += 0.2;
        std::cout << name << " is hunting and feeling fulfilled.\n";
    } else {
        std::cout << name << " is too tired to hunt.\n";
    }
}

void Cat::Rest() {
    energyLevel += 10;
    if (energyLevel > 100) energyLevel = 100;
    std::cout << name << " is resting and regaining energy.\n";
}
