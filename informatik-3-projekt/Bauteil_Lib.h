#pragma once

#define MAX_SIZE 150
#define STRING_LENGTH 51

typedef struct hersteller {
	char name[STRING_LENGTH] = { 0 };
	char strasse[STRING_LENGTH] = { 0 };
	int haus_nr = 0;
	int plz = 0;
	char ort[STRING_LENGTH] = { 0 };
	char internetseite[STRING_LENGTH] = { 0 };
};

typedef struct Bauteil {
	unsigned int id_nummer = 0;
	char bauteil_bez[STRING_LENGTH] = { 0 };
	char typ_bez[STRING_LENGTH] = { 0 };
	char erg_daten[STRING_LENGTH] = { 0 };
	bool neu_gebraucht;
	hersteller hersteller;
	int anzahl = 0;
	char lagerort[STRING_LENGTH] = { 0 };
};