//
//  main.cpp
//  QuantitativeRealism
//
//  Created by Michael Poulshock on 1/5/21.
//

#include <iostream>
using namespace std;


// Global parameters and settings
int N = 5;
float beta = 2;
float mu = 3;
float lambda = 0.99;
float alpha = 2.25;
float delta = 0.8;
float rho = 0.98;
int k = 10;


// Power structure object
class PowerStructure {
  public:
    string myString;
    float s;
    //float T[5][5];
    float T;

    PowerStructure(int s, float T) {
        this->s = s;
        this->T = T;
    }
    
    int N(void) {return 99;};
    
    void pretty() {
        cout << "pretty" << endl;
    }
};

// A function
string f() {
    return "Hello, world";
}

// Main function
int main(int argc, const char * argv[]) {
    
    PowerStructure ps(4,5);
    cout << to_string(ps.s) + "\n";
    return 0;
}


