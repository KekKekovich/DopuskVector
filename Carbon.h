//
// Created by M17-612 on 19.12.2017.
//

#ifndef UNTITLED16_CARBON_H
#define UNTITLED16_CARBON_H
#include <iostream>

#include <vector>
#include <string>

using namespace std;


class Carbon {
public:
    string name;
    double Elevel1;
    double Elevel2;
    double Elevel3;
    double Elevel4;
    double Elevel5;
    vector <Carbon> A;



    Carbon();
    Carbon(string name, double Elevel1, double Elevel2, double Elevel3, double Elevel4, double Elevel5);
    ~Carbon();

   void GetCarbon();

    void Add(Carbon A);


};


#endif //UNTITLED16_CARBON_H
