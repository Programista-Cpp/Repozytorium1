#include <random>
#include <iostream>
using namespace std;
struct Gracz
{
	short  Strength;														// Strength of Player's Character
	short  Life;															// Life of Player's Character
	string Name;															// Name of Player's Character
	string Surname;															// Surname of Player's Character
	enum   Weapon { SWORD, BOW, ARROWS, XBOW, KNIFE, BATTLEAXE, null };								// Weapon of Player's Character
	enum   Weaks { enum FEAROF { DARK, SPIDERS, RATS, BEES, FEAR, null }, SWEETS, DISABILITY, null };				// Weaks of Player's Character
	
	auto   Attack(Weapon weapon, Oponent enemy)
	{
		//int choose=0;
		cout << "How you want to attack? (1-sword, 2-bow, 3-x-bow,4-battle-axe) : " << endl;					// Question about weapon
		if(weapon == SWORD && PlayerHasThisWeapon(PlayerSword))									// Check if Player has SWORD
			enemy.Life -= (weapon.Strength + Player.Strength - enemy.Plate);
		else if(weapon == SWORD && !PlayerHasThisWeapon(PlayerSword)) cerr << "You do not have sword!\n";			// Error if he has not

		else if(weapon == BOW   &&  PlayerHasThisWeapon(PlayerBow))								// Check if Player has bow
			enemy.Life -= (weapon.Strength + Player.Strength - enemy.Plate);
		else if(weapon == BOW   && !PlayerHasThisWeapon(PlayerBow)) cerr << "You do not have bow!\n";				// Error if he has not

		else if(weapon == XBOW && PlayerHasThisWeapon(PlayerXBow))								// Check if Player has X-bow
			enemy.Life -= (weapon.Strength + Player.Strength - enemy.Plate);
		else if(weapon == XBOW && !PlayerHasThisWeapon(PlayerXBow)) cerr << "You do not have X-bow!\n";				// Error if he has not

		else if(weapon == BATTLEAXE && PlayerHasThisWeapon(PlayerBattleAxe))							// Check if Player has battle-axe
			enemy.Life -= (weapon.Strength + Player.Strentgh - enemy.Plate);
		else if(weapon == BATTLEAXE && !PlayerHasThisWeapon(PlayerBattleAxe)) cerr << "You do not have battle-axe\n";		// Error if he has not
		return enemy.Life;
	}
	auto   Defend(Oponent.Weapon enemy_weapon, Oponent enemy)
	{
		Player.Life -= (enemy_weapon.Strength + enemy.Strength - (RandomDefense() + PlayerPlate));
		return Player.Life;
	}
	
