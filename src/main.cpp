#include <iostream>
#include <fstream>
#include <PersonalVerwaltung.h>

using namespace std; 

int main() {
    PersonalVerwaltung personalVerwaltung();

    bool weiter = false;
    char w;
    do {
        string name; 
        int gehalt, id;
        cout << "Gib einen Namen ein: "; 
        cin >> name; 
        cout << "Gib das Gehalt ein: "; 
        cin >> gehalt;
        cout << "Gib die Id ein: "; 
        cin >> id;

        Mitarbeiter mitarbeiter(name, gehalt, id);
        
        cout << "möchten Sie weitere Mitarbeiter hinzufuegen? [j/n]"; 
        cin >> w;
        if (w == 'j') {
            weiter = true;
        }
        else if(w == 'n'){
            weiter = false;
        }
    }
    while(weiter);

}