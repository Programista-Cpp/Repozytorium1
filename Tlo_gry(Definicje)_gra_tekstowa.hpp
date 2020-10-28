#include <random>
#include <iostream>
using namespace std;
struct Gracz
{
	short Sila;
	short Zycie;
	string Imie;
	string Nazwisko;
	enum Bron {MIECZ, LUK, STRZALY, KUSZA, NOZ, TOPOR, null};
	enum Slabosci { enum Strachprzed { CIEMNOSC, PAJAKI, SZCZURY, PSZCZOLY, STRACH, null }, SLODYCZE, NIEPELNOSPRAWNOSC, null };
	auto Atakuj(Bron bron, Przeciwnik Wrog)
	{
		int wybor=0;
		cout << "Czym chcesz atakowac? (1-miecz, 2-luk, 3-kusza,4-topor) : " << endl;
		if(        bron == MIECZ && GraczMaTakaBron(MieczGracza))
			Wrog.Zycie -= (bron.Sila + Gracz.Sila - Wrog.Pancerz);
		else if(bron == MIECZ && !GraczMaTakaBron(MieczGracza)) cerr<<"Nie masz miecza!"<<endl;

		else if(bron == LUK     &&  GraczMaTakaBron(LukGracza))
			Wrog.Zycie -= (bron.Sila + Gracz.Sila - Wrog.Pancerz);
		else if(bron == LUK     && !GraczMaTakabron(LukGracza))      cerr<<"Nie masz luku!"<<endl;

		else if(bron == KUSZA&& GraczMaTakaBron(KuszaGracza))
			Wrog.Zycie -= (bron.Sila + Gracz.Sila - Wrog.Pancerz);
		else if(bron == KUSZA&& !GraczMaTakaBron(KuszaGracza))  cerr<<"Nie masz kuszy!"<<endl;

		else if(bron == TOPOR&& GraczMaTakaBron(ToporGracza))
			Wrog.Zycie -= (bron.Sila + Gracz.Sila - Wrog.Pancerz);
		else if(bron == TOPOR&& !GraczMaTakaBron(ToporGracza)) cerr<<"Nie masz toporu!"<<endl;
		return Wrog.Zycie;
	}
	auto BronSie(Przeciwnik.Bron bron_wroga, Przeciwnik Wrog)
	{
		Gracz.Zycie -= (bron_wroga.Sila + Wrog.Sila - (LosujObrone() + PancerzGracza));
		return Gracz.Zycie;
	}
	