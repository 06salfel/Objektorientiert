#pragma once
#include <iostream>

using namespace std;

class Mitarbeiter {

    public: 
        Mitarbeiter();

        Mitarbeiter(string _name, int _gehalt, int _id);

        string toString();

        string name; 
        int gehalt;
        int id;

};