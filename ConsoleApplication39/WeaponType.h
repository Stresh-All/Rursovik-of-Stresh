#pragma once
#include "level.h"
#include <time.h>

enum WeaponType
{
	WeaponNo,
	WeaponFist,
	Weapo�Stick,
	WeaponClub,
	WeaponSpear,
	WeaponSaber,
	WeaponSword,
	WeaponWhip,
	WeaponMoustache,
	WeaponFalx,
	WeaponMMA,
	WeaponWorkBook,
	WeaponCi,
	WeaponSvito
};

const char* WeaponName_None = "BERESHNOV";
const char* WeaponName_Fist = "Fist of Semich";
const char* WeaponName_Stick = "Stick of Truth";
const char* WeaponName_Club = "MICHOLAPOV's mom";
const char* WeaponName_Spear = "Pika of Vlados-Dydos";
const char* WeaponName_Saber = "Saber of usless Toxa";
const char* WeaponName_Sword = "Seva's Sword";
const char* WeaponName_Whip = "Castelvania";
const char* WeaponName_Moustache = "Legendary Moustache";
const char* WeaponName_Falx = "Falx of stupid Artur";
const char* WeaponName_MMA = "Sbornik Kysnecova dla TR";
const char* WeaponName_WorkBook = "Churnal Starosti";
const char* WeaponName_Ci = "Bag in Labs";
const char* WeaponName_Svito = "Chrenovie STUTOCHKI";

const char* GetWeaponName(WeaponType weaponType)
{
	switch (weaponType)
	{
	case WeaponFist:           return WeaponName_Fist;
	case Weapo�Stick:          return WeaponName_Stick;
	case WeaponClub:           return WeaponName_Club;
	case WeaponSpear:          return WeaponName_Spear;
	case WeaponSaber:          return WeaponName_Saber;
	case WeaponSword:          return WeaponName_Sword;
	case WeaponWhip:           return WeaponName_Whip;
	case WeaponMoustache:      return WeaponName_Moustache;
	case WeaponFalx:           return WeaponName_Falx;
	case WeaponCi:             return WeaponName_Ci;
	case WeaponMMA:            return WeaponName_MMA;
	case WeaponWorkBook:       return WeaponName_WorkBook;
	case WeaponSvito:          return WeaponName_Svito;
	}

	return WeaponName_None;
}

int GetWeaponDamage(WeaponType weaponType)
{
	switch (weaponType)
	{
	case WeaponFist:           return 7;
	case Weapo�Stick:          return 17;
	case WeaponClub:           return 26;
	case WeaponSpear:          return 32;
	case WeaponSaber:          return 41;
	case WeaponSword:          return 59;
	case WeaponWhip:           return 44;
	case WeaponMoustache:      return 499;
	case WeaponFalx:           return 29;
	case WeaponMMA:            return 49;
	case WeaponCi:             return 59;
	case WeaponSvito:          return 59;
	case WeaponWorkBook:       return 44;
	}

	return 0;
}

WeaponType GetWeaponTypeFromCell(unsigned char cellSymbol)
{
	switch (cellSymbol)
	{
	case SymbolStick:          return Weapo�Stick;
	case SymbolClub:           return WeaponClub;
	case SymbolSpear:          return WeaponSpear;
	case SymbolSaber:          return WeaponSaber;
	case SymbolSword:          return WeaponSword;
	case SymbolWhip:           return WeaponWhip;
	case SymbolMoustache:      return WeaponMoustache;
	case SymbolFalx:           return WeaponFalx;
	case SymbolMMA:            return WeaponMMA;
	case SymbolWorkBook:       return WeaponWorkBook;
	case SymbolCi:             return WeaponCi;
	case SymbolS:              return WeaponSvito;
	}

	return WeaponNo;
}