#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(string name, int amount) : name(name), amount(amount) {}
    bool operator>(const Person &g);
    bool operator==(const Person &g);
    bool operator>=(const Person &g);
    bool operator<(const Person &g);
    bool operator<=(const Person &g);
    bool operator!=(const Person &g);
    bool operator>(const int g);
    bool operator>=(const int g);
    bool operator<(const int g);
    bool operator<=(const int g);
    bool operator!=(const int g);
    bool operator==(const int g);
    friend bool operator>(const int i, const Person g);
    friend bool operator>=(const int i, const Person g);
    friend bool operator<(const int i, const Person g);
    friend bool operator<=(const int i, const Person g);
    friend bool operator!=(const int i, const Person g);
    friend bool operator==(const int i, const Person g);
    int getAmount() const;
    friend ostream &operator<<(ostream &out, const Person &g);

private:
    string name;
    int amount;
};

bool Person::operator>(const Person &g) {
    return amount > g.amount;
}

bool Person::operator==(const Person &g) {
    return amount == g.amount;
}

bool Person::operator>=(const Person &g) {
    return amount >= g.amount;
}

bool Person::operator<(const Person &g) {
    return amount < g.amount;
}

bool Person::operator<=(const Person &g) {
    return amount <= g.amount;
}

bool Person::operator!=(const Person &g) {
    return amount != g.amount;
}

bool Person::operator>(const int g) {
    return amount > g;
}

bool Person::operator>=(const int g) {
    return amount >= g;
}

bool Person::operator<(const int g) {
    return amount < g;
}

bool Person::operator<=(const int g) {
    return amount <= g;
}

bool Person::operator!=(const int g) {
    return amount != g;
}

bool Person::operator==(const int g) {
    return amount == g;
}

bool operator>(const int i, const Person g) {
    return i > g.amount;
}

bool operator>=(const int i, const Person g) {
    return i >= g.amount;
}

bool operator<(const int i, const Person g) {
    return i < g.amount;
}

bool operator<=(const int i, const Person g) {
    return i <= g.amount;
}

bool operator==(const int i, const Person g) {
    return i == g.amount;
}

bool operator!=(const int i, const Person g) {
    return i != g.amount;
}

int Person::getAmount() const {
    return amount;
}

ostream &operator<<(ostream &out, const Person &g) {
    out << g.name << ": " << g.amount;
    return out;
}