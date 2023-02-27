#pragma once
#include <Mitarbeiter.h>

class PersonalVerwaltung {
    public:
        PersonalVerwaltung();

        void mitarbeiterHinzufuegen(Mitarbeiter *mitarbeiter);

        void ausgabe();

        void toFile(string path);

        void readFile(string path);

        Mitarbeiter *MitarbeiterListe[100];
};

