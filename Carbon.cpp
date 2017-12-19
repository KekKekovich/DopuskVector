//
// Created by M17-612 on 19.12.2017.
//

#include "Carbon.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;

Carbon::Carbon () {

}

Carbon::Carbon (string name, double Elevel1, double Elevel2, double Elevel3, double Elevel4, double Elevel5) {
    Carbon::name = name;
    Carbon::Elevel1 = Elevel1;
    Carbon::Elevel2 = Elevel2;
    Carbon::Elevel3 = Elevel3;
    Carbon::Elevel4 = Elevel4;
    Carbon::Elevel5 = Elevel5;
}

void Carbon:: Add(Carbon X) {
    A.push_back(X);
}

void Carbon::GetCarbon() {
        cout << "name =" << name << endl;
        cout << "Elevel-1 =" << Elevel1 << endl;
        cout << "Elevel-2 =" << Elevel2 << endl;
        cout << "Elevel-3 =" << Elevel3 << endl;
        cout << "Elevel-4 =" << Elevel4 << endl;
        cout << "Elevel-5 =" << Elevel5 << endl;


    }

Carbon::~Carbon() {

}

