#include <Mitarbeiter.h>

using namespace std;

Mitarbeiter::Mitarbeiter() {};

Mitarbeiter::Mitarbeiter(string _name, int _gehalt, int _id) {
    name = _name; 
    gehalt = _gehalt; 
    id = _id;
}

string Mitarbeiter::toString() {
    return "Der Name des Mitarbeiters ist: " + name + ", sein Gehalt beträgt: " + to_string(gehalt) + " und er hat die id: " + to_string(id);
}

