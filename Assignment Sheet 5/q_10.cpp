#include <iostream>

using namespace std;

class Fruit {
protected:
    int numFruits;

public:
    Fruit() : numFruits(0) {}

    void setNumFruits(int count) {
        numFruits = count;
    }

    int getNumFruits() const {
        return numFruits;
    }
};

class Apples : public Fruit {
public:
    void setNumApples(int count) {
        setNumFruits(count);
    }

    int getNumApples() const {
        return getNumFruits();
    }
};

class Mangoes : public Fruit {
public:
    void setNumMangoes(int count) {
        setNumFruits(count);
    }

    int getNumMangoes() const {
        return getNumFruits();
    }
};

int main() {
    Apples apples;
    Mangoes mangoes;

    int numApples, numMangoes;

    cout << "Enter the number of apples: ";
    cin >> numApples;

    cout << "Enter the number of mangoes: ";
    cin >> numMangoes;

    apples.setNumApples(numApples);
    mangoes.setNumMangoes(numMangoes);

    cout << "Number of apples: " << apples.getNumApples() << endl;
    cout << "Number of mangoes: " << mangoes.getNumMangoes() << endl;

    int totalFruits = apples.getNumApples() + mangoes.getNumMangoes();
    cout << "Total number of fruits in the basket: " << totalFruits << endl;

    return 0;
}
