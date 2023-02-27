#include <PersonalVerwaltung.h>
#include <fstream>

PersonalVerwaltung::PersonalVerwaltung() {
    for(int i = 0; i < sizeof(MitarbeiterListe); i++) {
        MitarbeiterListe[i] = NULL;
    }
}

void PersonalVerwaltung::mitarbeiterHinzufuegen(Mitarbeiter *mitarbeiter) {
    for(int i = 0; i < sizeof(MitarbeiterListe); i++) {
        if (MitarbeiterListe[i] == NULL) {
            MitarbeiterListe[i] = mitarbeiter;
        }
    }
}

void PersonalVerwaltung::ausgabe() {
    for(int i = 0; i < sizeof(MitarbeiterListe); i++) {
        Mitarbeiter *mitarbeiter = MitarbeiterListe[i];
        cout << "Der Name des Mitarbeiters ist: " + mitarbeiter->name + ", sein Gehalt beträgt: " + to_string(mitarbeiter->gehalt) + " und er hat die id: " + to_string(mitarbeiter->id);
    }
}

void PersonalVerwaltung::toFile(string path) {
    fstream file(path);

    for(int i = 0; i < sizeof(MitarbeiterListe); i++) {
        Mitarbeiter *mitarbeiter = MitarbeiterListe[i];

        file << mitarbeiter->name << "-" << to_string(mitarbeiter->gehalt) << "-" << to_string(mitarbeiter->id);
    }
    file.close();
}

void PersonalVerwaltung::readFile(string path) {
    fstream file(path);
    string text;

    while(getline(file, text)) {
        string name, gehalt, id;
        int stelle = 0;

        for (int i = 0; i < text.size(); i++) {
            if (text[i] == '-') {
                stelle++;
                continue;
            }
            switch(stelle) {
                case 0: 
                    name += text[i];
                case 1: 
                    gehalt += text[i];
                case 2: 
                    id += text[i];
            }
        }
        
        cout << "Der Name des Mitarbeiters ist: " + name + ", sein Gehalt beträgt: " + gehalt + " und er hat die id: " + id;
    }

}