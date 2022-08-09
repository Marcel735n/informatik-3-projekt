#pragma once

#define MAX_SIZE 150
#define STRING_LENGTH 51

struct hersteller {
	char name[MAX_SIZE][STRING_LENGTH] = { 0 };
	char strasse[MAX_SIZE][STRING_LENGTH] = { 0 };
	int haus_nr[MAX_SIZE];
	int plz[MAX_SIZE];
	char ort[MAX_SIZE][STRING_LENGTH] = { 0 };
	char internetseite[MAX_SIZE][STRING_LENGTH] = { 0 };
};

struct Bauteil {
	unsigned int id_nummer[MAX_SIZE];
	char bauteil_bez[MAX_SIZE][STRING_LENGTH] = { "/0" };
	char typ_bez[MAX_SIZE][STRING_LENGTH] = { "/0" };
	char erg_daten[MAX_SIZE][STRING_LENGTH] = { "/0" };
	char neu_gebraucht[MAX_SIZE][STRING_LENGTH] = { "/0" };
	int anzahl[MAX_SIZE];
	char lagerort[MAX_SIZE][STRING_LENGTH] = { "/0" };
	int array_length = 0;		//Anzahl eingetragener Bauteil

	hersteller hersteller;
};