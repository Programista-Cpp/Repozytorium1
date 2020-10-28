#include <random>
#include <iostream>
using namespace std;
struct Gracz
{
	short  Sila;															//Sila     Postaci Gracza
	short  Zycie;															//Zycie    Postaci Gracza
	string Imie;															//Imie     Postaci Gracza
	string Nazwisko;														//Nazwisko Postaci Gracza
	enum   Bron {MIECZ, LUK, STRZALY, KUSZA, NOZ, TOPOR, null};									//Bron     Postaci Gracza
	enum   Slabosci { enum Strachprzed { CIEMNOSC, PAJAKI, SZCZURY, PSZCZOLY, STRACH, null }, SLODYCZE, NIEPELNOSPRAWNOSC, null };	//Slabosci Postaci Gracza
	auto   Atakuj(Bron bron, Przeciwnik Wrog)
	{
		//int wybor=0;
		cout << "Czym chcesz atakowac? (1-miecz, 2-luk, 3-kusza,4-topor) : " << endl;						//Pytanie o bron
		if(     bron == MIECZ && GraczMaTakaBron(MieczGracza))									//Sprawdzenie czy gracz ma miecz
			Wrog.Zycie -= (bron.Sila + Gracz.Sila - Wrog.Pancerz);
		else if(bron == MIECZ && !GraczMaTakaBron(MieczGracza)) cerr<<"Nie masz miecza!"<<endl;					//Err jesli nie ma

		else if(bron == LUK   &&  GraczMaTakaBron(LukGracza))									//Sprawdzenie czy gracz ma luk
			Wrog.Zycie -= (bron.Sila + Gracz.Sila - Wrog.Pancerz);
		else if(bron == LUK   && !GraczMaTakabron(LukGracza))      cerr<<"Nie masz luku!"<<endl;				//Err jesli nie ma

		else if(bron == KUSZA && GraczMaTakaBron(KuszaGracza))									//Sprawdzenie czy grac ma kusze
			Wrog.Zycie -= (bron.Sila + Gracz.Sila - Wrog.Pancerz);
		else if(bron == KUSZA && !GraczMaTakaBron(KuszaGracza))  cerr<<"Nie masz kuszy!"<<endl;					//Err jesli nie ma

		else if(bron == TOPOR && GraczMaTakaBron(ToporGracza))									//Sprawdzenie czy gracz ma topor
			Wrog.Zycie -= (bron.Sila + Gracz.Sila - Wrog.Pancerz);
		else if(bron == TOPOR && !GraczMaTakaBron(ToporGracza)) cerr<<"Nie masz toporu!"<<endl;					//Err jesli nie ma
		return Wrog.Zycie;
	}
	auto   BronSie(Przeciwnik.Bron bron_wroga, Przeciwnik Wrog)
	{
		Gracz.Zycie -= (bron_wroga.Sila + Wrog.Sila - (LosujObrone() + PancerzGracza));
		return Gracz.Zycie;
	}
	
