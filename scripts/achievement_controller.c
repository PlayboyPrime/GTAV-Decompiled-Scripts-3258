#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0,001f;
	iLocal_15 = -1;
	sLocal_16 = "NULL";
	iLocal_19 = 3;
	fLocal_20 = 0f;
	fLocal_24 = -0,0375f;
	fLocal_25 = 0,17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_53 = 0f;
	iLocal_61 = 1000;
	iLocal_62 = 3333;
	fLocal_63 = 0f;
	bLocal_70 = true;
	unk_0x51CC1333A10C4E09();
	if (unk_0x96CFB880BAC634CE(32))
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	iLocal_56 = unk_0x1DD05E817C89C737();
	iLocal_65 = 0;
	func_158(iLocal_66);
	func_157();
	func_155(&Global_4543384);
	func_154(&Global_4543384, 1);
	func_152(&uLocal_67);
	while (true)
	{
		if (Global_33199 != iLocal_65)
		{
			if (iLocal_65 == 0 && Global_33199 != 0)
			{
				if (unk_0x0BA1A956D36B210F() || func_151())
				{
					func_150("CHEAT_TROPHIE", -1);
				}
				else
				{
					func_150("CHEAT_ACHIEVE", -1);
				}
			}
			if (iLocal_65 != 0 && Global_33199 == 0)
			{
			}
		}
		iLocal_65 = Global_33199;
		if (!func_149(14))
		{
			if (!unk_0x37088D2C63AC4C01(24))
			{
				func_140();
			}
			if (!unk_0x37088D2C63AC4C01(25))
			{
				func_138();
			}
			if (Global_32958)
			{
				if (!unk_0x37088D2C63AC4C01(12))
				{
					iVar0 = func_123(1);
					if (iVar0 > 0)
					{
						func_122(12, iVar0);
						unk_0x1164A75E490C27B6(joaat("num_gold_medals_obtained"), iVar0, 1);
					}
					if (iVar0 >= 70)
					{
						func_116(12, 1);
					}
				}
				Global_32958 = 0;
			}
			if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					iLocal_66++;
					if (unk_0x1DD05E817C89C737() > iLocal_56)
					{
						func_105(0);
						iLocal_56 = (unk_0x1DD05E817C89C737() + iLocal_61);
					}
					if (unk_0x1DD05E817C89C737() > iLocal_57)
					{
						if (!unk_0x37088D2C63AC4C01(14) || iLocal_64 == 1)
						{
							if (func_104(53))
							{
								func_103();
							}
						}
						iLocal_57 = (unk_0x1DD05E817C89C737() + iLocal_62);
					}
				}
			}
			func_95(&Global_4543384);
			func_1();
		}
		else
		{
			func_95(&Global_4543384);
			func_1();
		}
		system::wait(0);
	}
}

void func_1()
{
	var uVar0;
	int iVar1;
	
	if (!func_94(&Global_4543384))
	{
		return;
	}
	if (!Global_79389)
	{
		if (iLocal_72)
		{
			iLocal_72 = 0;
		}
		return;
	}
	if (!func_91())
	{
		return;
	}
	if (bLocal_70)
	{
		if (!func_89(3, -1))
		{
			return;
		}
		if (!func_89(5, -1))
		{
			return;
		}
	}
	if (iLocal_72)
	{
		return;
	}
	uVar0 = unk_0x616C54D34FFE092C(&iVar1);
	if (iVar1 == -1 && iLocal_71 == 0)
	{
	}
	if (uVar0 && iVar1 == 0)
	{
		func_88();
		iLocal_72 = 1;
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	int iVar0;
	
	if (!unk_0x37088D2C63AC4C01(33))
	{
		if (func_85())
		{
			func_116(33, 1);
		}
	}
	if (!unk_0x37088D2C63AC4C01(29))
	{
		if (func_81(&uLocal_67) > 5f)
		{
			func_22(unk_0x4A8C381C258A124D());
			func_152(&uLocal_67);
		}
	}
	iVar0 = func_19(func_21(-1), 0);
	if (iVar0 >= 100)
	{
		if (!unk_0x37088D2C63AC4C01(36))
		{
			func_116(36, 1);
		}
	}
	if (iVar0 >= 50)
	{
		if (!unk_0x37088D2C63AC4C01(35))
		{
			func_116(35, 1);
		}
	}
	if (iVar0 >= 25)
	{
		if (!unk_0x37088D2C63AC4C01(34))
		{
			func_116(34, 1);
		}
	}
	if (!unk_0x37088D2C63AC4C01(37))
	{
		func_16(0);
	}
	if (!unk_0x37088D2C63AC4C01(38))
	{
		if (func_15(joaat("mpply_total_custom_races_won")) >= 5)
		{
			func_116(38, 1);
		}
	}
	if (!unk_0x37088D2C63AC4C01(39))
	{
		if (func_13(48, -1) >= 10)
		{
			func_116(39, 1);
		}
	}
	if (!unk_0x37088D2C63AC4C01(40))
	{
		if (func_13(52, -1) > 0)
		{
			func_116(40, 1);
		}
	}
	if (!unk_0x37088D2C63AC4C01(41))
	{
		if (BitTest(Global_2738934.f_2342.f_18, 1))
		{
			func_116(41, 1);
		}
	}
	if (!unk_0x37088D2C63AC4C01(43))
	{
		if (func_11(756, -1) >= 30)
		{
			func_116(43, 1);
		}
	}
	if (!unk_0x37088D2C63AC4C01(44))
	{
		if (func_13(14, -1) >= 20)
		{
			func_116(44, 1);
		}
	}
	if (!unk_0x37088D2C63AC4C01(45))
	{
		func_9(0);
	}
	if (!unk_0x37088D2C63AC4C01(48))
	{
		if (func_8(11, -1))
		{
			func_116(48, 1);
		}
	}
	if (!unk_0x37088D2C63AC4C01(49))
	{
		func_3(0);
	}
}

int func_3(bool bParam0)
{
	if (!func_91())
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x37088D2C63AC4C01(49))
	{
		return 0;
	}
	if (bParam0 == 1)
	{
	}
	if (!func_4(100, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	if (!func_4(102, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	if (!func_4(101, -1))
	{
		if (bParam0 == 1)
		{
		}
		return 0;
	}
	func_116(49, 1);
	return 1;
}

int func_4(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_5(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_5(var uParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_6(uParam1));
}

int func_6(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_7()
{
	return Global_1574926;
}

bool func_8(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

int func_9(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!func_91())
	{
		return 0;
	}
	if (unk_0x37088D2C63AC4C01(45))
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	uVar2 = func_11(757, -1);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(uVar2, iVar0, bParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		func_116(45, 1);
		return 1;
	}
	return 0;
}

int func_10(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	uVar0 = BitTest(uParam0, iParam1);
	if (!bParam2)
	{
		return uVar0;
	}
	switch (iParam1)
	{
		case 0:
			return uVar0;
		
		case 1:
			return uVar0;
		
		case 2:
			return uVar0;
		
		case 3:
			return uVar0;
		
		case 4:
			return uVar0;
		
		case 5:
			return uVar0;
		
		case 6:
			return uVar0;
		
		case 7:
			return uVar0;
		
		case 8:
			return uVar0;
		
		default:
	}
	return 0;
}

int func_11(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_12(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_12(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_6(uParam1));
}

int func_13(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_14(iParam0, iParam1);
	if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_14(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(8, uParam0, func_6(uParam1));
}

int func_15(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_16(bool bParam0)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(37))
	{
		return 0;
	}
	if (!func_91())
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (bParam0)
	{
		iVar0 = func_13(21, -1);
		iVar0 = (iVar0 - func_13(58, -1));
		iVar0 = (iVar0 - func_13(57, -1));
	}
	if (func_17(8, -1))
	{
		func_116(37, 1);
		return 1;
	}
	return 0;
}

int func_17(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_18(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_18(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(10, uParam0, func_6(uParam1));
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (func_20(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_20(iVar3) < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((system::to_float(iVar1) - system::to_float(iVar2)) / 2f) + system::to_float(iVar2));
		iVar3 = system::round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return joaat("pyro_sub_bass_synth");
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_21(int iParam0)
{
	return func_11(640, iParam0);
}

void func_22(int iParam0)
{
	int iVar0;
	struct<222> Var1;
	
	Var1 = 44;
	Var1.f_221 = 51;
	if (unk_0x37088D2C63AC4C01(29))
	{
		return;
	}
	func_77(iParam0, &Var1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1.f_0)
	{
		if (func_23(iParam0, Var1[iVar0 /*5*/]))
		{
			func_116(29, 1);
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1.f_221)
	{
		if (func_23(iParam0, Var1.f_221[iVar0 /*5*/]))
		{
			func_116(29, 1);
			return;
		}
		iVar0++;
	}
}

int func_23(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<7> Var7;
	
	if (iParam1 == -61829581)
	{
		return 0;
	}
	if (iParam1 == joaat("weapon_knuckle"))
	{
		return 0;
	}
	if (unk_0x4FAFF4BCB7633475(iParam0))
	{
		return 0;
	}
	if (!unk_0x66B90BA528CFEBCE(iParam0, iParam1, 0))
	{
		return 0;
	}
	iVar1 = func_76(iParam1, &uVar0);
	if (((((((((((((((((((((iParam1 != joaat("weapon_pistol") && iParam1 != joaat("weapon_appistol")) && iParam1 != joaat("weapon_combatpistol")) && iParam1 != joaat("weapon_microsmg")) && iParam1 != joaat("weapon_smg")) && iParam1 != joaat("weapon_pumpshotgun")) && iParam1 != joaat("weapon_assaultshotgun")) && iParam1 != joaat("weapon_sawnoffshotgun")) && iParam1 != joaat("weapon_assaultrifle")) && iParam1 != joaat("weapon_carbinerifle")) && iParam1 != joaat("weapon_advancedrifle")) && iParam1 != joaat("weapon_sniperrifle")) && iParam1 != joaat("weapon_heavysniper")) && iParam1 != joaat("weapon_mg")) && iParam1 != joaat("weapon_combatmg")) && iParam1 != joaat("weapon_grenadelauncher")) && iParam1 != -572349828) && iParam1 != joaat("weapon_assaultsmg")) && iParam1 != 392730790) && iParam1 != joaat("weapon_bullpupshotgun")) && iParam1 != joaat("weapon_pistol50")) && (iVar1 == -1 || unk_0x660FA55F8D417CAB(iVar1) < 3))
	{
		return 0;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	while (func_26(&Var7, iParam1, iVar6, 0))
	{
		if (Var7.f_4 == joaat("WAPClip"))
		{
			iVar3++;
		}
		if (Var7.f_4 == joaat("WAPScop"))
		{
			iVar2++;
		}
		if (func_24(iParam0, iParam1, Var7.f_0))
		{
			if (Var7.f_4 == joaat("WAPClip"))
			{
				iVar5 = Var7.f_6;
			}
			else if (Var7.f_4 == joaat("WAPScop"))
			{
				iVar4 = Var7.f_6;
			}
		}
		else if ((((Var7.f_4 == joaat("WAPClip") || Var7.f_4 == joaat("WAPScop")) || Var7.f_4 == joaat("WAPRail")) || Var7.f_4 == joaat("gun_root")) || Var7.f_4 == -31573710)
		{
		}
		else
		{
			return 0;
		}
		iVar6++;
	}
	if (iVar2 > iVar4)
	{
		return 0;
	}
	if (iVar3 > iVar5)
	{
		return 0;
	}
	if (unk_0xB302C203285E8234(iParam1) > 0 && unk_0x6C81F95CADD1E6D0(iParam0, iParam1) == 0)
	{
		return 0;
	}
	return 1;
}

int func_24(int iParam0, int iParam1, int iParam2)
{
	if (func_25(iParam0))
	{
		return unk_0x5EDED4B3E1A48E68(iParam0, iParam1, iParam2);
	}
	return 0;
}

int func_25(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_26(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0[37];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	struct<4> Var18;
	
	func_75(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			if (func_74(iLocal_54))
			{
				if (!func_71(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_pistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					
					case 5:
						func_75(uParam0, 1400690398, joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_appistol"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					
					case 5:
						func_75(uParam0, joaat("component_appistol_varmod_security"), joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_75(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					
					case 6:
						func_75(uParam0, joaat("component_microsmg_varmod_security"), joaat("gun_root"), 2, 0);
						break;
					
					case 7:
						func_75(uParam0, joaat("component_microsmg_varmod_xm3"), joaat("gun_root"), 3, 0);
						break;
					
					case 8:
						func_75(uParam0, 1694268374, joaat("gun_root"), 4, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_75(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_smg"):
			if (func_74(iLocal_54))
			{
				if (!func_71(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_smg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_75(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_75(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_75(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_75(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (func_74(iLocal_54))
			{
				if (!func_71(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_assaultrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_75(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_75(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_75(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_75(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_74(iLocal_54))
			{
				if (!func_71(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_carbinerifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_75(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_75(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
						
						case 9:
							func_75(uParam0, 1605520746, joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_75(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_75(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					
					case 8:
						func_75(uParam0, 1605520746, joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_75(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_75(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_75(uParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (func_74(iLocal_54))
			{
				if (!func_71(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_combatmg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (func_74(iLocal_54))
			{
				if (!func_71(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_heavysniper"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
						
						case 4:
							func_75(uParam0, 221907180, joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
						break;
					
					case 3:
						func_75(uParam0, 221907180, joaat("gun_root"), 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_75(uParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_assaultrifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_assaultrifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_assaultrifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_assaultrifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_assaultrifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_75(uParam0, joaat("component_assaultrifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_75(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 7:
					func_75(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 8:
					func_75(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 9:
					func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 10:
					func_75(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 11:
					func_75(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 12:
					func_75(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 13:
					func_75(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 14:
					func_75(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_75(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_75(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_75(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_75(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_75(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_75(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_75(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_75(uParam0, joaat("component_at_ar_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_75(uParam0, joaat("component_at_ar_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_75(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_75(uParam0, joaat("component_assaultrifle_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_75(uParam0, joaat("component_assaultrifle_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_75(uParam0, joaat("component_assaultrifle_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_75(uParam0, joaat("component_assaultrifle_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_75(uParam0, joaat("component_assaultrifle_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_75(uParam0, joaat("component_assaultrifle_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_75(uParam0, joaat("component_assaultrifle_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_75(uParam0, joaat("component_assaultrifle_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_75(uParam0, joaat("component_assaultrifle_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_75(uParam0, joaat("component_assaultrifle_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_75(uParam0, joaat("component_assaultrifle_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_carbinerifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_carbinerifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_carbinerifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_carbinerifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_carbinerifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_75(uParam0, joaat("component_carbinerifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_75(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_75(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_75(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_75(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 11:
					func_75(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 12:
					func_75(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 13:
					func_75(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 14:
					func_75(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_75(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_75(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_75(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_75(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_75(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_75(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_75(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_75(uParam0, joaat("component_at_cr_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_75(uParam0, joaat("component_at_cr_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_75(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_75(uParam0, joaat("component_carbinerifle_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_75(uParam0, joaat("component_carbinerifle_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_75(uParam0, joaat("component_carbinerifle_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_75(uParam0, joaat("component_carbinerifle_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_75(uParam0, joaat("component_carbinerifle_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_75(uParam0, joaat("component_carbinerifle_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_75(uParam0, joaat("component_carbinerifle_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_75(uParam0, joaat("component_carbinerifle_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_75(uParam0, joaat("component_carbinerifle_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_75(uParam0, joaat("component_carbinerifle_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_75(uParam0, joaat("component_carbinerifle_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_combatmg_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_combatmg_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_combatmg_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_combatmg_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_combatmg_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_75(uParam0, joaat("component_combatmg_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_75(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_75(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_75(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_75(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_75(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_75(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_75(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_75(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_75(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_75(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_75(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_75(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_75(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_75(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_75(uParam0, joaat("component_at_mg_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 21:
					func_75(uParam0, joaat("component_at_mg_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 22:
					func_75(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 23:
					func_75(uParam0, joaat("component_combatmg_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 24:
					func_75(uParam0, joaat("component_combatmg_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 25:
					func_75(uParam0, joaat("component_combatmg_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 26:
					func_75(uParam0, joaat("component_combatmg_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 27:
					func_75(uParam0, joaat("component_combatmg_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 28:
					func_75(uParam0, joaat("component_combatmg_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 29:
					func_75(uParam0, joaat("component_combatmg_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 30:
					func_75(uParam0, joaat("component_combatmg_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 31:
					func_75(uParam0, joaat("component_combatmg_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 32:
					func_75(uParam0, joaat("component_combatmg_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 33:
					func_75(uParam0, joaat("component_combatmg_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_heavysniper_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_heavysniper_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_heavysniper_mk2_clip_incendiary"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_heavysniper_mk2_clip_armorpiercing"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_heavysniper_mk2_clip_fmj"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_75(uParam0, joaat("component_heavysniper_mk2_clip_explosive"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_75(uParam0, joaat("component_at_scope_large_mk2"), joaat("WAPScop"), 1, 0);
					break;
				
				case 7:
					func_75(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 1);
					break;
				
				case 8:
					func_75(uParam0, joaat("component_at_scope_nv"), joaat("WAPScop"), 3, 0);
					break;
				
				case 9:
					func_75(uParam0, joaat("component_at_scope_thermal"), joaat("WAPScop"), 4, 0);
					break;
				
				case 10:
					func_75(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_75(uParam0, joaat("component_at_sr_supp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_75(uParam0, joaat("component_at_muzzle_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_75(uParam0, joaat("component_at_muzzle_09"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 14:
					func_75(uParam0, joaat("component_at_sr_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 15:
					func_75(uParam0, joaat("component_at_sr_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 16:
					func_75(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 17:
					func_75(uParam0, joaat("component_heavysniper_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 18:
					func_75(uParam0, joaat("component_heavysniper_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 19:
					func_75(uParam0, joaat("component_heavysniper_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 20:
					func_75(uParam0, joaat("component_heavysniper_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 21:
					func_75(uParam0, joaat("component_heavysniper_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 22:
					func_75(uParam0, joaat("component_heavysniper_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 23:
					func_75(uParam0, joaat("component_heavysniper_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 24:
					func_75(uParam0, joaat("component_heavysniper_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 25:
					func_75(uParam0, joaat("component_heavysniper_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 26:
					func_75(uParam0, joaat("component_heavysniper_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 27:
					func_75(uParam0, joaat("component_heavysniper_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol_mk2"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_pistol_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_pistol_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_pistol_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_pistol_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_pistol_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_75(uParam0, joaat("component_pistol_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_75(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 7:
					func_75(uParam0, joaat("component_at_pi_rail"), joaat("WAPScop"), 2, 0);
					break;
				
				case 8:
					func_75(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_75(uParam0, joaat("component_at_pi_flsh_02"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_75(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_75(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_75(uParam0, joaat("component_at_pi_comp"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_75(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_75(uParam0, joaat("component_pistol_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_75(uParam0, joaat("component_pistol_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_75(uParam0, joaat("component_pistol_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_75(uParam0, joaat("component_pistol_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_75(uParam0, joaat("component_pistol_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_75(uParam0, joaat("component_pistol_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_75(uParam0, joaat("component_pistol_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_75(uParam0, joaat("component_pistol_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_75(uParam0, joaat("component_pistol_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_75(uParam0, joaat("component_pistol_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_75(uParam0, joaat("component_pistol_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
				
				case 25:
					func_75(uParam0, joaat("component_pistol_mk2_varmod_xm3"), joaat("gun_root"), 13, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_smg_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_smg_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_smg_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_smg_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_smg_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_75(uParam0, joaat("component_smg_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_75(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_75(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_75(uParam0, joaat("component_at_sights_smg"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_75(uParam0, joaat("component_at_scope_macro_02_smg_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_75(uParam0, joaat("component_at_scope_small_smg_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_75(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 13:
					func_75(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp_2"), 1, 0);
					break;
				
				case 14:
					func_75(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 15:
					func_75(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 16:
					func_75(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 17:
					func_75(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 18:
					func_75(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 19:
					func_75(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 20:
					func_75(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 21:
					func_75(uParam0, joaat("component_at_sb_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 22:
					func_75(uParam0, joaat("component_at_sb_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 23:
					func_75(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 24:
					func_75(uParam0, joaat("component_smg_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 25:
					func_75(uParam0, joaat("component_smg_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 26:
					func_75(uParam0, joaat("component_smg_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 27:
					func_75(uParam0, joaat("component_smg_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 28:
					func_75(uParam0, joaat("component_smg_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 29:
					func_75(uParam0, joaat("component_smg_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 30:
					func_75(uParam0, joaat("component_smg_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 31:
					func_75(uParam0, joaat("component_smg_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 32:
					func_75(uParam0, joaat("component_smg_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 33:
					func_75(uParam0, joaat("component_smg_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 34:
					func_75(uParam0, joaat("component_smg_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (func_74(iLocal_54))
			{
				if (!func_71(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_pumpshotgun"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_pumpshotgun_varmod_security"), joaat("gun_root"), 2, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_pumpshotgun_varmod_xm3"), joaat("gun_root"), 3, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_pumpshotgun_varmod_security"), joaat("gun_root"), 2, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_pumpshotgun_varmod_xm3"), joaat("gun_root"), 3, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (func_74(iLocal_54))
			{
				if (!func_71(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_specialcarbine"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 8:
							func_75(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 9:
							func_75(uParam0, 302671608, joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_75(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 8:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_75(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					
					case 8:
						func_75(uParam0, 302671608, joaat("gun_root"), 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_75(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (func_74(iLocal_54))
			{
				if (!func_71(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_snspistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (func_74(iLocal_54))
			{
				if (!func_71(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_marksmanrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_75(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_75(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_75(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_revolver"):
			if (func_74(iLocal_54))
			{
				if (!func_71(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_revolver"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (func_74(iLocal_54))
			{
				if (!func_71(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_bullpuprifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_75(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_75(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_75(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_75(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 3:
							func_75(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_75(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_75(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_75(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_clip_incendiary"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_clip_hollowpoint"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_clip_armorpiercing"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_clip_explosive"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_75(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 6:
					func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 7:
					func_75(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 8:
					func_75(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 9:
					func_75(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 10:
					func_75(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 11:
					func_75(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 12:
					func_75(uParam0, joaat("component_at_sr_supp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 13:
					func_75(uParam0, joaat("component_at_muzzle_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 14:
					func_75(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 15:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 16:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 17:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 18:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 19:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 20:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 21:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 22:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 23:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 24:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 25:
					func_75(uParam0, joaat("component_pumpshotgun_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_specialcarbine_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_specialcarbine_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_specialcarbine_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_specialcarbine_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_specialcarbine_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_75(uParam0, joaat("component_specialcarbine_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_75(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_75(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_75(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_75(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_75(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_75(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_75(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_75(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_75(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_75(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_75(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_75(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_75(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 21:
					func_75(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 22:
					func_75(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 23:
					func_75(uParam0, joaat("component_at_sc_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_75(uParam0, joaat("component_at_sc_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_75(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_75(uParam0, joaat("component_specialcarbine_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_75(uParam0, joaat("component_specialcarbine_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_75(uParam0, joaat("component_specialcarbine_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_75(uParam0, joaat("component_specialcarbine_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_75(uParam0, joaat("component_specialcarbine_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_75(uParam0, joaat("component_specialcarbine_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_75(uParam0, joaat("component_specialcarbine_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_75(uParam0, joaat("component_specialcarbine_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_75(uParam0, joaat("component_specialcarbine_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_75(uParam0, joaat("component_specialcarbine_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_75(uParam0, joaat("component_specialcarbine_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_snspistol_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_snspistol_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_snspistol_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_snspistol_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_snspistol_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_75(uParam0, joaat("component_snspistol_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_75(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_75(uParam0, joaat("component_at_pi_flsh_03"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_75(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_75(uParam0, joaat("component_at_pi_rail_02"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_75(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 11:
					func_75(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 12:
					func_75(uParam0, joaat("component_at_pi_comp_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 13:
					func_75(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_75(uParam0, joaat("component_snspistol_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_75(uParam0, joaat("component_snspistol_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_75(uParam0, joaat("component_snspistol_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_75(uParam0, joaat("component_snspistol_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_75(uParam0, joaat("component_snspistol_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_75(uParam0, joaat("component_snspistol_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_75(uParam0, joaat("component_snspistol_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_75(uParam0, joaat("component_snspistol_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_75(uParam0, joaat("component_snspistol_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_75(uParam0, joaat("component_snspistol_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_75(uParam0, joaat("component_snspistol_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_75(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_75(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 9:
					func_75(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 10:
					func_75(uParam0, joaat("component_at_scope_large_fixed_zoom_mk2"), joaat("WAPScop_2"), 4, 1);
					break;
				
				case 11:
					func_75(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 12:
					func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 13:
					func_75(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 14:
					func_75(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 15:
					func_75(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 16:
					func_75(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 17:
					func_75(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 18:
					func_75(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 19:
					func_75(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 20:
					func_75(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 21:
					func_75(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 22:
					func_75(uParam0, joaat("component_at_mrfl_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 23:
					func_75(uParam0, joaat("component_at_mrfl_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 24:
					func_75(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 25:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 26:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 27:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 28:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 29:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 30:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 31:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 32:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 33:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 34:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 35:
					func_75(uParam0, joaat("component_marksmanrifle_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_revolver_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_revolver_mk2_clip_tracer"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_revolver_mk2_clip_incendiary"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_revolver_mk2_clip_hollowpoint"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_revolver_mk2_clip_fmj"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_75(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 6:
					func_75(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 7:
					func_75(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 8:
					func_75(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_75(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_75(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_75(uParam0, joaat("component_at_pi_comp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_75(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 13:
					func_75(uParam0, joaat("component_revolver_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 14:
					func_75(uParam0, joaat("component_revolver_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 15:
					func_75(uParam0, joaat("component_revolver_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 16:
					func_75(uParam0, joaat("component_revolver_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 17:
					func_75(uParam0, joaat("component_revolver_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 18:
					func_75(uParam0, joaat("component_revolver_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 19:
					func_75(uParam0, joaat("component_revolver_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 20:
					func_75(uParam0, joaat("component_revolver_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 21:
					func_75(uParam0, joaat("component_revolver_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 22:
					func_75(uParam0, joaat("component_revolver_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 23:
					func_75(uParam0, joaat("component_revolver_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_75(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_75(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_75(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_75(uParam0, joaat("component_at_scope_macro_02_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_75(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_75(uParam0, joaat("component_at_bp_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 13:
					func_75(uParam0, joaat("component_at_bp_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 14:
					func_75(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 15:
					func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 16:
					func_75(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 17:
					func_75(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 18:
					func_75(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 19:
					func_75(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 20:
					func_75(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 21:
					func_75(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 22:
					func_75(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 23:
					func_75(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 24:
					func_75(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 25:
					func_75(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_camo"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_camo_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_camo_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_camo_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_camo_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_camo_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_camo_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_camo_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_camo_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_camo_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_75(uParam0, joaat("component_bullpuprifle_mk2_camo_ind_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_raypistol"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_raypistol_varmod_xmas18"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_ceramicpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_ceramicpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_ceramicpistol_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_heavyrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_heavyrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_heavyrifle_sight_01"), joaat("WAPScop"), 1, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 2, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_75(uParam0, joaat("component_heavyrifle_camo1"), joaat("gun_root"), 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, joaat("component_heavyrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_75(uParam0, joaat("component_heavyrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_75(uParam0, joaat("component_heavyrifle_sight_01"), joaat("WAPScop"), 1, 0);
						break;
					
					case 3:
						func_75(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 2, 0);
						break;
					
					case 4:
						func_75(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_tacticalrifle"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, joaat("component_tacticalrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, joaat("component_tacticalrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_at_ar_flsh_reh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_75(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_75(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_knife"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				iVar1 = func_58(iParam1, &iVar0);
				if ((iVar1 > 0 && iParam2 >= 0) && iParam2 < iVar0)
				{
					switch (iVar0[iParam2])
					{
						case joaat("component_knife_varmod_xm3"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 1, 0);
							break;
						
						case joaat("component_knife_varmod_xm3_01"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 2, 0);
							break;
						
						case joaat("component_knife_varmod_xm3_02"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 3, 0);
							break;
						
						case joaat("component_knife_varmod_xm3_03"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 4, 0);
							break;
						
						case joaat("component_knife_varmod_xm3_04"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 5, 0);
							break;
						
						case joaat("component_knife_varmod_xm3_05"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 6, 0);
							break;
						
						case joaat("component_knife_varmod_xm3_06"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 7, 0);
							break;
						
						case joaat("component_knife_varmod_xm3_07"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 8, 0);
							break;
						
						case joaat("component_knife_varmod_xm3_08"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 9, 0);
							break;
						
						case joaat("component_knife_varmod_xm3_09"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 10, 0);
							break;
						}
					}
			}
			break;
		
		case joaat("weapon_bat"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				iVar1 = func_58(iParam1, &iVar0);
				if ((iVar1 > 0 && iParam2 >= 0) && iParam2 < iVar0)
				{
					switch (iVar0[iParam2])
					{
						case joaat("component_bat_varmod_xm3"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 1, 0);
							break;
						
						case joaat("component_bat_varmod_xm3_01"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 2, 0);
							break;
						
						case joaat("component_bat_varmod_xm3_02"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 3, 0);
							break;
						
						case joaat("component_bat_varmod_xm3_03"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 4, 0);
							break;
						
						case joaat("component_bat_varmod_xm3_04"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 5, 0);
							break;
						
						case joaat("component_bat_varmod_xm3_05"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 6, 0);
							break;
						
						case joaat("component_bat_varmod_xm3_06"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 7, 0);
							break;
						
						case joaat("component_bat_varmod_xm3_07"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 8, 0);
							break;
						
						case joaat("component_bat_varmod_xm3_08"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 9, 0);
							break;
						
						case joaat("component_bat_varmod_xm3_09"):
							func_75(uParam0, iVar0[iParam2], joaat("gun_root"), 10, 0);
							break;
						}
					}
			}
			break;
		
		case joaat("weapon_rpg"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				switch (iParam2)
				{
					case 0:
						func_75(uParam0, -1240142720, joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_battlerifle"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -292433650, joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_75(uParam0, 494808810, joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_75(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 3, 0);
					break;
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			switch (iParam2)
			{
				case 0:
					func_75(uParam0, -1675905033, joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		default:
			iVar14 = func_76(iParam1, &uVar17);
			if (iVar14 != -1)
			{
				iVar15 = 0;
				while (iVar15 < unk_0x660FA55F8D417CAB(iVar14))
				{
					if (unk_0x737024F2814ABDDD(iVar14, iVar15, &Var18))
					{
						if (!func_57(Var18.f_3))
						{
							if (Var18.f_0 == joaat("WAPClip") || Var18.f_0 == joaat("WAPClip_2"))
							{
								iVar3++;
							}
							else if (Var18.f_0 == joaat("WAPFlshLasr") || Var18.f_0 == joaat("WAPFlshLasr_2"))
							{
								iVar4++;
							}
							else if (Var18.f_0 == joaat("WAPScop") || Var18.f_0 == joaat("WAPScop_2"))
							{
								iVar5++;
							}
							else if (Var18.f_0 == joaat("WAPRail") || Var18.f_0 == joaat("WAPRail_2"))
							{
								iVar6++;
							}
							else if (Var18.f_0 == joaat("WAPGrip") || Var18.f_0 == joaat("WAPGrip_2"))
							{
								iVar7++;
							}
							else if (Var18.f_0 == joaat("WAPSupp") || Var18.f_0 == joaat("WAPSupp_2"))
							{
								iVar8++;
							}
							else if (Var18.f_0 == 1731751835)
							{
								iVar9++;
							}
							else if (Var18.f_0 == joaat("gun_root"))
							{
								iVar10++;
							}
							else if (Var18.f_0 == -31573710)
							{
								iVar11++;
							}
							else if (Var18.f_0 == -1312077031)
							{
								iVar12++;
							}
							else
							{
								iVar13++;
							}
							if (iVar16 == iParam2)
							{
								if (Var18.f_0 == joaat("WAPClip") || Var18.f_0 == joaat("WAPClip_2"))
								{
									iVar2 = iVar3;
								}
								else if (Var18.f_0 == joaat("WAPFlshLasr") || Var18.f_0 == joaat("WAPFlshLasr_2"))
								{
									iVar2 = iVar4;
								}
								else if (Var18.f_0 == joaat("WAPScop") || Var18.f_0 == joaat("WAPScop_2"))
								{
									iVar2 = iVar5;
								}
								else if (Var18.f_0 == joaat("WAPRail") || Var18.f_0 == joaat("WAPRail_2"))
								{
									iVar2 = iVar6;
								}
								else if (Var18.f_0 == joaat("WAPGrip") || Var18.f_0 == joaat("WAPGrip_2"))
								{
									iVar2 = iVar7;
								}
								else if (Var18.f_0 == joaat("WAPSupp") || Var18.f_0 == joaat("WAPSupp_2"))
								{
									iVar2 = iVar8;
								}
								else if (Var18.f_0 == 1731751835)
								{
									iVar2 = iVar9;
								}
								else if (Var18.f_0 == joaat("gun_root"))
								{
									iVar2 = iVar10;
								}
								else if (Var18.f_0 == -31573710)
								{
									iVar2 = iVar11;
								}
								else if (Var18.f_0 == -1312077031)
								{
									iVar2 = iVar12;
								}
								else
								{
									iVar2 = iVar13;
								}
								func_75(uParam0, Var18.f_3, Var18.f_0, iVar2, Var18.f_1);
							}
							iVar16++;
						}
					}
					iVar15++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_27(iParam1, *uParam0);
	}
	return uParam0->f_4 != 989182658;
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<6> Var5;
	int iVar6;
	int iVar7;
	var uVar8;
	struct<6> Var9;
	char* sVar10;
	struct<4> Var11;
	float fVar12;
	
	iVar0 = 0;
	fVar1 = 2,5f;
	if (!unk_0x76CD105BCAC6EB9F())
	{
		fVar1 = 2,5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 729;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 735;
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = 14500;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 730;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 775;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 134;
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 810;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 105;
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 812;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 450;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = 15600;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 559;
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = 14000;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 975;
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = 16900;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 920;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = 17600;
						break;
				}
				if (func_56() && (func_55() || func_54()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						break;
				}
				if (func_56() && (func_55() || func_54()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 20000;
						break;
				}
				if (func_56() && (func_55() || func_54()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 3612;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 1020;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 5000;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 1760;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 710;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4800;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 12000;
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = 4900;
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = 5600;
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = 5500;
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = 5200;
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = 4600;
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = 4700;
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = 4800;
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = 4300;
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = 4000;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = 9950;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2575;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 11350;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = 16600;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 29;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = 9150;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = 13900;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = 9975;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2525;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 11550;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = 18000;
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_76(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < unk_0x660FA55F8D417CAB(iVar2))
					{
						if (unk_0x737024F2814ABDDD(iVar2, iVar3, &Var5))
						{
							if (!func_57(Var5.f_3))
							{
								if (Var5.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_52(iParam1))
									{
										Var5.f_5 = -1;
									}
									if (Var5.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var5.f_5;
									}
									if (iParam0 == joaat("weapon_hammer"))
									{
										if (func_56() && (func_55() || func_54()))
										{
											iVar0 = 0;
										}
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2,5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 9175;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2812));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4030));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4031));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_262145.f_11067;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4092));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_20916;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = Global_262145.f_20814;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2813));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4032));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_20815;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4033));
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = Global_262145.f_12415;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4089));
						break;
					
					case 1400690398:
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 9400;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2815));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4034));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4035));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_262145.f_11066;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4085));
						break;
					
					case joaat("component_appistol_varmod_security"):
						iVar0 = Global_262145.f_31329;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 9325;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2816));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4038));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4040));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4039));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_262145.f_11070;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4091));
						break;
					
					case joaat("component_microsmg_varmod_security"):
						iVar0 = Global_262145.f_31328;
						break;
					
					case joaat("component_microsmg_varmod_xm3"):
						iVar0 = 0;
						break;
					
					case 1694268374:
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 9475;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2817));
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = Global_262145.f_16527;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4041));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4043));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4042));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_262145.f_11069;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4096));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_20917;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 9550;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2819));
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = Global_262145.f_16522;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4051));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4048));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4050));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4049));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_262145.f_11063;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4086));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_20919;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 9775;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2820));
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = Global_262145.f_16521;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4055));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4052));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4054));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4053));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_262145.f_11065;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4087));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_20920;
						break;
					
					case 1605520746:
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 9925;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2821));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4056));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4058));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4057));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_262145.f_11064;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4084));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 9850;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2822));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4059));
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = Global_262145.f_12416;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4090));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 10000;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2823));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4074));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4075));
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = Global_262145.f_12417;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4088));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_20918;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4060));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4061));
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = Global_262145.f_12412;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4094));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22583;
						break;
					
					case joaat("component_pumpshotgun_varmod_security"):
						iVar0 = Global_262145.f_31326;
						break;
					
					case joaat("component_pumpshotgun_varmod_xm3"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 9625;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2824));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4064));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4065));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4066));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 12400;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4067));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4068));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4069));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_262145.f_11072;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4097));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 99;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4070));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4071));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_20921;
						break;
					
					case 221907180:
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4076));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4072));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4073));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2818));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4044));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4047));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4045));
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = Global_262145.f_12413;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4046));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_262145.f_7136;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_262145.f_7834;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = Global_262145.f_12414;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22588;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_262145.f_7838;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = Global_262145.f_16524;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_7841;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_7837;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_7835;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_7840;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = Global_262145.f_12418;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22584;
						break;
					
					case 302671608:
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_262145.f_7839;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_7842;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_7836;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_262145.f_7861;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_262145.f_7845;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_7847;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_7843;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_7844;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_7846;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = Global_262145.f_12419;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22587;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_262145.f_8319;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_8320;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_262145.f_8904;
						break;
					
					case joaat("component_heavyshotgun_clip_03"):
						iVar0 = Global_262145.f_16528;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_8905;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_8906;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_8907;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_262145.f_8910;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_8911;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_8913;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_8914;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8915;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22585;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_15085));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4062));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4063));
						break;
				}
				if (func_56() && (func_55() || func_54()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_2814));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4036));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4037));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_262145.f_11068;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4093));
						break;
				}
				if (func_56() && (func_55() || func_54()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_262145.f_11071;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4095));
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = Global_262145.f_11392;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4098));
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = Global_262145.f_11393;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4099));
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = Global_262145.f_11394;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4100));
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = Global_262145.f_11395;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4101));
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = Global_262145.f_11396;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4102));
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = Global_262145.f_11397;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4103));
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = Global_262145.f_11398;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4104));
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = Global_262145.f_11399;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4105));
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = Global_262145.f_11400;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4106));
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = Global_262145.f_11416;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4107));
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = Global_262145.f_16526;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_11417;
						iVar0 = system::floor((system::to_float(iVar0) * Global_262145.f_4108));
						break;
				}
				break;
			
			case joaat("weapon_switchblade"):
				switch (iParam1)
				{
					case joaat("component_switchblade_varmod_base"):
						iVar0 = 0;
						break;
					
					case joaat("component_switchblade_varmod_var1"):
						iVar0 = Global_262145.f_13243;
						break;
					
					case joaat("component_switchblade_varmod_var2"):
						iVar0 = Global_262145.f_13244;
						break;
				}
				break;
			
			case joaat("weapon_revolver"):
				switch (iParam1)
				{
					case joaat("component_revolver_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_revolver_varmod_boss"):
						iVar0 = Global_262145.f_13301;
						break;
					
					case joaat("component_revolver_varmod_goon"):
						iVar0 = Global_262145.f_13242;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_22586;
						break;
				}
				break;
			
			case joaat("weapon_compactrifle"):
				switch (iParam1)
				{
					case joaat("component_compactrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_compactrifle_clip_02"):
						iVar0 = Global_262145.f_15022;
						break;
					
					case joaat("component_compactrifle_clip_03"):
						iVar0 = Global_262145.f_16523;
						break;
				}
				break;
			
			case joaat("weapon_dbshotgun"):
				switch (iParam1)
				{
					case joaat("component_dbshotgun_clip_01"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_minismg"):
				switch (iParam1)
				{
					case joaat("component_minismg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_minismg_clip_02"):
						iVar0 = Global_262145.f_18852;
						break;
				}
				break;
			
			case joaat("weapon_combatpdw"):
				switch (iParam1)
				{
					case joaat("component_combatpdw_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_combatpdw_clip_02"):
						iVar0 = Global_262145.f_20810;
						break;
					
					case joaat("component_combatpdw_clip_03"):
						iVar0 = Global_262145.f_16525;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_20811;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_20813;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_20812;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_02"):
						iVar0 = Global_262145.f_20922;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_20923;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_20924;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_20925;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_20926;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_20927;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_20928;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_20929;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_20930;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_20931;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_20932;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_20933;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_20934;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_20935;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_20936;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_20937;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_20938;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_20939;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_20940;
						break;
					
					case joaat("component_at_ar_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_barrel_02"):
						iVar0 = Global_262145.f_20941;
						break;
					
					case joaat("component_assaultrifle_mk2_camo"):
						iVar0 = Global_262145.f_21050;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_02"):
						iVar0 = Global_262145.f_21051;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_03"):
						iVar0 = Global_262145.f_21052;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_04"):
						iVar0 = Global_262145.f_21053;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_05"):
						iVar0 = Global_262145.f_21054;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_06"):
						iVar0 = Global_262145.f_21055;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_07"):
						iVar0 = Global_262145.f_21056;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_08"):
						iVar0 = Global_262145.f_21057;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_09"):
						iVar0 = Global_262145.f_21058;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_10"):
						iVar0 = Global_262145.f_21059;
						break;
					
					case joaat("component_assaultrifle_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21060;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_02"):
						iVar0 = Global_262145.f_20942;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_20943;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_20944;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_20945;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_20946;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_20947;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_20948;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_20949;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_20950;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_20951;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_20952;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_20953;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_20954;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_20955;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_20956;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_20957;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_20958;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_20959;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_20960;
						break;
					
					case joaat("component_at_cr_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_cr_barrel_02"):
						iVar0 = Global_262145.f_20961;
						break;
					
					case joaat("component_carbinerifle_mk2_camo"):
						iVar0 = Global_262145.f_21050;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_02"):
						iVar0 = Global_262145.f_21051;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_03"):
						iVar0 = Global_262145.f_21052;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_04"):
						iVar0 = Global_262145.f_21053;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_05"):
						iVar0 = Global_262145.f_21054;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_06"):
						iVar0 = Global_262145.f_21055;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_07"):
						iVar0 = Global_262145.f_21056;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_08"):
						iVar0 = Global_262145.f_21057;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_09"):
						iVar0 = Global_262145.f_21058;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_10"):
						iVar0 = Global_262145.f_21059;
						break;
					
					case joaat("component_carbinerifle_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21060;
						break;
				}
				break;
			
			case joaat("weapon_combatmg_mk2"):
				switch (iParam1)
				{
					case joaat("component_combatmg_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_combatmg_mk2_clip_02"):
						iVar0 = Global_262145.f_20962;
						break;
					
					case joaat("component_combatmg_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_20963;
						break;
					
					case joaat("component_combatmg_mk2_clip_fmj"):
						iVar0 = Global_262145.f_20964;
						break;
					
					case joaat("component_combatmg_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_20965;
						break;
					
					case joaat("component_combatmg_mk2_clip_tracer"):
						iVar0 = Global_262145.f_20966;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_20967;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_20968;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_20969;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_20970;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_20971;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_20972;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_20973;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_20974;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_20975;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_20976;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_20977;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_20978;
						break;
					
					case joaat("component_at_mg_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_mg_barrel_02"):
						iVar0 = Global_262145.f_20979;
						break;
					
					case joaat("component_combatmg_mk2_camo"):
						iVar0 = Global_262145.f_21050;
						break;
					
					case joaat("component_combatmg_mk2_camo_02"):
						iVar0 = Global_262145.f_21051;
						break;
					
					case joaat("component_combatmg_mk2_camo_03"):
						iVar0 = Global_262145.f_21052;
						break;
					
					case joaat("component_combatmg_mk2_camo_04"):
						iVar0 = Global_262145.f_21053;
						break;
					
					case joaat("component_combatmg_mk2_camo_05"):
						iVar0 = Global_262145.f_21054;
						break;
					
					case joaat("component_combatmg_mk2_camo_06"):
						iVar0 = Global_262145.f_21055;
						break;
					
					case joaat("component_combatmg_mk2_camo_07"):
						iVar0 = Global_262145.f_21056;
						break;
					
					case joaat("component_combatmg_mk2_camo_08"):
						iVar0 = Global_262145.f_21057;
						break;
					
					case joaat("component_combatmg_mk2_camo_09"):
						iVar0 = Global_262145.f_21058;
						break;
					
					case joaat("component_combatmg_mk2_camo_10"):
						iVar0 = Global_262145.f_21059;
						break;
					
					case joaat("component_combatmg_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21060;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper_mk2"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavysniper_mk2_clip_02"):
						iVar0 = Global_262145.f_20980;
						break;
					
					case joaat("component_heavysniper_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_20981;
						break;
					
					case joaat("component_heavysniper_mk2_clip_fmj"):
						iVar0 = Global_262145.f_20983;
						break;
					
					case joaat("component_heavysniper_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_20984;
						break;
					
					case joaat("component_heavysniper_mk2_clip_explosive"):
						iVar0 = Global_262145.f_20982;
						break;
					
					case joaat("component_at_scope_large_mk2"):
						iVar0 = Global_262145.f_20985;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_scope_nv"):
						iVar0 = Global_262145.f_20986;
						break;
					
					case joaat("component_at_scope_thermal"):
						iVar0 = Global_262145.f_20987;
						break;
					
					case joaat("component_at_sr_supp_03"):
						iVar0 = Global_262145.f_20988;
						break;
					
					case joaat("component_at_muzzle_08"):
						iVar0 = Global_262145.f_20989;
						break;
					
					case joaat("component_at_muzzle_09"):
						iVar0 = Global_262145.f_20990;
						break;
					
					case joaat("component_at_sr_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_sr_barrel_02"):
						iVar0 = Global_262145.f_20991;
						break;
					
					case joaat("component_heavysniper_mk2_camo"):
						iVar0 = Global_262145.f_21050;
						break;
					
					case joaat("component_heavysniper_mk2_camo_02"):
						iVar0 = Global_262145.f_21051;
						break;
					
					case joaat("component_heavysniper_mk2_camo_03"):
						iVar0 = Global_262145.f_21052;
						break;
					
					case joaat("component_heavysniper_mk2_camo_04"):
						iVar0 = Global_262145.f_21053;
						break;
					
					case joaat("component_heavysniper_mk2_camo_05"):
						iVar0 = Global_262145.f_21054;
						break;
					
					case joaat("component_heavysniper_mk2_camo_06"):
						iVar0 = Global_262145.f_21055;
						break;
					
					case joaat("component_heavysniper_mk2_camo_07"):
						iVar0 = Global_262145.f_21056;
						break;
					
					case joaat("component_heavysniper_mk2_camo_08"):
						iVar0 = Global_262145.f_21057;
						break;
					
					case joaat("component_heavysniper_mk2_camo_09"):
						iVar0 = Global_262145.f_21058;
						break;
					
					case joaat("component_heavysniper_mk2_camo_10"):
						iVar0 = Global_262145.f_21059;
						break;
					
					case joaat("component_heavysniper_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21060;
						break;
				}
				break;
			
			case joaat("weapon_pistol_mk2"):
				switch (iParam1)
				{
					case joaat("component_pistol_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol_mk2_clip_02"):
						iVar0 = Global_262145.f_20992;
						break;
					
					case joaat("component_pistol_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_20994;
						break;
					
					case joaat("component_pistol_mk2_clip_fmj"):
						iVar0 = Global_262145.f_20993;
						break;
					
					case joaat("component_pistol_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_20995;
						break;
					
					case joaat("component_pistol_mk2_clip_tracer"):
						iVar0 = Global_262145.f_20996;
						break;
					
					case joaat("component_at_pi_flsh_02"):
						iVar0 = Global_262145.f_20997;
						break;
					
					case joaat("component_at_pi_rail"):
						iVar0 = Global_262145.f_20998;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_262145.f_20999;
						break;
					
					case joaat("component_at_pi_comp"):
						iVar0 = Global_262145.f_21000;
						break;
					
					case joaat("component_pistol_mk2_camo"):
						iVar0 = Global_262145.f_21050;
						break;
					
					case joaat("component_pistol_mk2_camo_02"):
						iVar0 = Global_262145.f_21051;
						break;
					
					case joaat("component_pistol_mk2_camo_03"):
						iVar0 = Global_262145.f_21052;
						break;
					
					case joaat("component_pistol_mk2_camo_04"):
						iVar0 = Global_262145.f_21053;
						break;
					
					case joaat("component_pistol_mk2_camo_05"):
						iVar0 = Global_262145.f_21054;
						break;
					
					case joaat("component_pistol_mk2_camo_06"):
						iVar0 = Global_262145.f_21055;
						break;
					
					case joaat("component_pistol_mk2_camo_07"):
						iVar0 = Global_262145.f_21056;
						break;
					
					case joaat("component_pistol_mk2_camo_08"):
						iVar0 = Global_262145.f_21057;
						break;
					
					case joaat("component_pistol_mk2_camo_09"):
						iVar0 = Global_262145.f_21058;
						break;
					
					case joaat("component_pistol_mk2_camo_10"):
						iVar0 = Global_262145.f_21059;
						break;
					
					case joaat("component_pistol_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21060;
						break;
					
					case joaat("component_pistol_mk2_varmod_xm3"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_smg_mk2"):
				switch (iParam1)
				{
					case joaat("component_smg_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_smg_mk2_clip_02"):
						iVar0 = Global_262145.f_21001;
						break;
					
					case joaat("component_smg_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_21003;
						break;
					
					case joaat("component_smg_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21002;
						break;
					
					case joaat("component_smg_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21004;
						break;
					
					case joaat("component_smg_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21005;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21006;
						break;
					
					case joaat("component_at_sights_smg"):
						iVar0 = Global_262145.f_21007;
						break;
					
					case joaat("component_at_scope_macro_02_smg_mk2"):
						iVar0 = Global_262145.f_21008;
						break;
					
					case joaat("component_at_scope_small_smg_mk2"):
						iVar0 = Global_262145.f_21009;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_21010;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_21011;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_21012;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_21013;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_21014;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_21015;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_21016;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_21017;
						break;
					
					case joaat("component_at_sb_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_sb_barrel_02"):
						iVar0 = Global_262145.f_21018;
						break;
					
					case joaat("component_smg_mk2_camo"):
						iVar0 = Global_262145.f_21050;
						break;
					
					case joaat("component_smg_mk2_camo_02"):
						iVar0 = Global_262145.f_21051;
						break;
					
					case joaat("component_smg_mk2_camo_03"):
						iVar0 = Global_262145.f_21052;
						break;
					
					case joaat("component_smg_mk2_camo_04"):
						iVar0 = Global_262145.f_21053;
						break;
					
					case joaat("component_smg_mk2_camo_05"):
						iVar0 = Global_262145.f_21054;
						break;
					
					case joaat("component_smg_mk2_camo_06"):
						iVar0 = Global_262145.f_21055;
						break;
					
					case joaat("component_smg_mk2_camo_07"):
						iVar0 = Global_262145.f_21056;
						break;
					
					case joaat("component_smg_mk2_camo_08"):
						iVar0 = Global_262145.f_21057;
						break;
					
					case joaat("component_smg_mk2_camo_09"):
						iVar0 = Global_262145.f_21058;
						break;
					
					case joaat("component_smg_mk2_camo_10"):
						iVar0 = Global_262145.f_21059;
						break;
					
					case joaat("component_smg_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21060;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun_mk2"):
				switch (iParam1)
				{
					case joaat("component_pumpshotgun_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_22615;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_explosive"):
						iVar0 = Global_262145.f_22616;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_22614;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_22613;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_22642;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_22643;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_22644;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_22645;
						break;
					
					case joaat("component_at_sr_supp_03"):
						iVar0 = Global_262145.f_22646;
						break;
					
					case joaat("component_at_muzzle_08"):
						iVar0 = Global_262145.f_22647;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo"):
						iVar0 = Global_262145.f_21050;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_02"):
						iVar0 = Global_262145.f_21051;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_03"):
						iVar0 = Global_262145.f_21052;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_04"):
						iVar0 = Global_262145.f_21053;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_05"):
						iVar0 = Global_262145.f_21054;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_06"):
						iVar0 = Global_262145.f_21055;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_07"):
						iVar0 = Global_262145.f_21056;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_08"):
						iVar0 = Global_262145.f_21057;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_09"):
						iVar0 = Global_262145.f_21058;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_10"):
						iVar0 = Global_262145.f_21059;
						break;
					
					case joaat("component_pumpshotgun_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21060;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine_mk2"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_02"):
						iVar0 = Global_262145.f_22617;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_22621;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_fmj"):
						iVar0 = Global_262145.f_22619;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_22620;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_tracer"):
						iVar0 = Global_262145.f_22618;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_22648;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_22649;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_22650;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_22651;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_22652;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_22653;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_22654;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_22655;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_22656;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_22657;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_22658;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_22659;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_22660;
						break;
					
					case joaat("component_at_sc_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_sc_barrel_02"):
						iVar0 = Global_262145.f_22661;
						break;
					
					case joaat("component_specialcarbine_mk2_camo"):
						iVar0 = Global_262145.f_21050;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_02"):
						iVar0 = Global_262145.f_21051;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_03"):
						iVar0 = Global_262145.f_21052;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_04"):
						iVar0 = Global_262145.f_21053;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_05"):
						iVar0 = Global_262145.f_21054;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_06"):
						iVar0 = Global_262145.f_21055;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_07"):
						iVar0 = Global_262145.f_21056;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_08"):
						iVar0 = Global_262145.f_21057;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_09"):
						iVar0 = Global_262145.f_21058;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_10"):
						iVar0 = Global_262145.f_21059;
						break;
					
					case joaat("component_specialcarbine_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21060;
						break;
				}
				break;
			
			case joaat("weapon_snspistol_mk2"):
				switch (iParam1)
				{
					case joaat("component_snspistol_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_mk2_clip_02"):
						iVar0 = Global_262145.f_23525;
						break;
					
					case joaat("component_snspistol_mk2_clip_fmj"):
						iVar0 = Global_262145.f_22637;
						break;
					
					case joaat("component_snspistol_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_22639;
						break;
					
					case joaat("component_snspistol_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_22638;
						break;
					
					case joaat("component_snspistol_mk2_clip_tracer"):
						iVar0 = Global_262145.f_22636;
						break;
					
					case joaat("component_at_pi_flsh_03"):
						iVar0 = Global_262145.f_22693;
						break;
					
					case joaat("component_at_pi_rail_02"):
						iVar0 = Global_262145.f_22694;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_262145.f_22695;
						break;
					
					case joaat("component_at_pi_comp_02"):
						iVar0 = Global_262145.f_22696;
						break;
					
					case joaat("component_snspistol_mk2_camo"):
						iVar0 = Global_262145.f_21050;
						break;
					
					case joaat("component_snspistol_mk2_camo_02"):
						iVar0 = Global_262145.f_21051;
						break;
					
					case joaat("component_snspistol_mk2_camo_03"):
						iVar0 = Global_262145.f_21052;
						break;
					
					case joaat("component_snspistol_mk2_camo_04"):
						iVar0 = Global_262145.f_21053;
						break;
					
					case joaat("component_snspistol_mk2_camo_05"):
						iVar0 = Global_262145.f_21054;
						break;
					
					case joaat("component_snspistol_mk2_camo_06"):
						iVar0 = Global_262145.f_21055;
						break;
					
					case joaat("component_snspistol_mk2_camo_07"):
						iVar0 = Global_262145.f_21056;
						break;
					
					case joaat("component_snspistol_mk2_camo_08"):
						iVar0 = Global_262145.f_21057;
						break;
					
					case joaat("component_snspistol_mk2_camo_09"):
						iVar0 = Global_262145.f_21058;
						break;
					
					case joaat("component_snspistol_mk2_camo_10"):
						iVar0 = Global_262145.f_21059;
						break;
					
					case joaat("component_snspistol_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21060;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_02"):
						iVar0 = Global_262145.f_22622;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_22626;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_22624;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_22625;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_22623;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_22662;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_22663;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_22664;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom_mk2"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_22665;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_22666;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_22667;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_22668;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_22669;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_22670;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_22671;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_22672;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_22673;
						break;
					
					case joaat("component_at_mrfl_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_mrfl_barrel_02"):
						iVar0 = Global_262145.f_22674;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo"):
						iVar0 = Global_262145.f_21050;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_02"):
						iVar0 = Global_262145.f_21051;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_03"):
						iVar0 = Global_262145.f_21052;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_04"):
						iVar0 = Global_262145.f_21053;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_05"):
						iVar0 = Global_262145.f_21054;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_06"):
						iVar0 = Global_262145.f_21055;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_07"):
						iVar0 = Global_262145.f_21056;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_08"):
						iVar0 = Global_262145.f_21057;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_09"):
						iVar0 = Global_262145.f_21058;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_10"):
						iVar0 = Global_262145.f_21059;
						break;
					
					case joaat("component_marksmanrifle_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21060;
						break;
				}
				break;
			
			case joaat("weapon_revolver_mk2"):
				switch (iParam1)
				{
					case joaat("component_revolver_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_revolver_mk2_clip_tracer"):
						iVar0 = Global_262145.f_22627;
						break;
					
					case joaat("component_revolver_mk2_clip_fmj"):
						iVar0 = Global_262145.f_22628;
						break;
					
					case joaat("component_revolver_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_22630;
						break;
					
					case joaat("component_revolver_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_22629;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_22675;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_22676;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_22677;
						break;
					
					case joaat("component_at_pi_comp_03"):
						iVar0 = Global_262145.f_22678;
						break;
					
					case joaat("component_revolver_mk2_camo"):
						iVar0 = Global_262145.f_21050;
						break;
					
					case joaat("component_revolver_mk2_camo_02"):
						iVar0 = Global_262145.f_21051;
						break;
					
					case joaat("component_revolver_mk2_camo_03"):
						iVar0 = Global_262145.f_21052;
						break;
					
					case joaat("component_revolver_mk2_camo_04"):
						iVar0 = Global_262145.f_21053;
						break;
					
					case joaat("component_revolver_mk2_camo_05"):
						iVar0 = Global_262145.f_21054;
						break;
					
					case joaat("component_revolver_mk2_camo_06"):
						iVar0 = Global_262145.f_21055;
						break;
					
					case joaat("component_revolver_mk2_camo_07"):
						iVar0 = Global_262145.f_21056;
						break;
					
					case joaat("component_revolver_mk2_camo_08"):
						iVar0 = Global_262145.f_21057;
						break;
					
					case joaat("component_revolver_mk2_camo_09"):
						iVar0 = Global_262145.f_21058;
						break;
					
					case joaat("component_revolver_mk2_camo_10"):
						iVar0 = Global_262145.f_21059;
						break;
					
					case joaat("component_revolver_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21060;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_02"):
						iVar0 = Global_262145.f_22631;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_22635;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_22633;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_22634;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_22632;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_22679;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_22680;
						break;
					
					case joaat("component_at_scope_macro_02_mk2"):
						iVar0 = Global_262145.f_22681;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_22682;
						break;
					
					case joaat("component_at_bp_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_bp_barrel_02"):
						iVar0 = Global_262145.f_22692;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_22683;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_22684;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_22685;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_22686;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_22687;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_22688;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_22689;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_22690;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_22691;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo"):
						iVar0 = Global_262145.f_21050;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_02"):
						iVar0 = Global_262145.f_21051;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_03"):
						iVar0 = Global_262145.f_21052;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_04"):
						iVar0 = Global_262145.f_21053;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_05"):
						iVar0 = Global_262145.f_21054;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_06"):
						iVar0 = Global_262145.f_21055;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_07"):
						iVar0 = Global_262145.f_21056;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_08"):
						iVar0 = Global_262145.f_21057;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_09"):
						iVar0 = Global_262145.f_21058;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_10"):
						iVar0 = Global_262145.f_21059;
						break;
					
					case joaat("component_bullpuprifle_mk2_camo_ind_01"):
						iVar0 = Global_262145.f_21060;
						break;
				}
				break;
			
			case joaat("weapon_raypistol"):
				switch (iParam1)
				{
					case joaat("component_raypistol_varmod_xmas18"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_ceramicpistol"):
				switch (iParam1)
				{
					case joaat("component_ceramicpistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_ceramicpistol_clip_02"):
						iVar0 = Global_262145.f_28220;
						break;
					
					case joaat("component_ceramicpistol_supp"):
						iVar0 = Global_262145.f_28221;
						break;
				}
				break;
			
			case joaat("weapon_combatshotgun"):
				switch (iParam1)
				{
					case joaat("component_combatshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_30160;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_30161;
						break;
				}
				break;
			
			case joaat("weapon_gadgetpistol"):
				switch (iParam1)
				{
					case joaat("component_gadgetpistol_clip_01"):
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_militaryrifle"):
				switch (iParam1)
				{
					case joaat("component_militaryrifle_clip_01"):
						iVar0 = Global_262145.f_30147;
						break;
					
					case joaat("component_militaryrifle_clip_02"):
						iVar0 = Global_262145.f_30148;
						break;
					
					case joaat("component_militaryrifle_sight_01"):
						iVar0 = Global_262145.f_30149;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_30150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_30151;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_30152;
						break;
				}
				break;
			
			case joaat("weapon_heavyrifle"):
				switch (iParam1)
				{
					case joaat("component_heavyrifle_clip_01"):
						iVar0 = Global_262145.f_31295;
						break;
					
					case joaat("component_heavyrifle_clip_02"):
						iVar0 = Global_262145.f_31296;
						break;
					
					case joaat("component_heavyrifle_camo1"):
						iVar0 = Global_262145.f_31327;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_31301;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_31299;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_31298;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_31300;
						break;
					
					case joaat("component_heavyrifle_sight_01"):
						iVar0 = Global_262145.f_31297;
						break;
				}
				break;
			
			case joaat("weapon_tacticalrifle"):
				switch (iParam1)
				{
					case joaat("component_tacticalrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_tacticalrifle_clip_02"):
						iVar0 = Global_262145.f_32508;
						break;
					
					case joaat("component_at_ar_flsh_reh"):
						iVar0 = Global_262145.f_32510;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_32511;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_32509;
						break;
				}
				break;
			
			case joaat("weapon_knife"):
				switch (iParam1)
				{
					case joaat("component_knife_varmod_xm3"):
						iVar0 = Global_262145.f_33515;
						break;
					
					case joaat("component_knife_varmod_xm3_01"):
						iVar0 = Global_262145.f_33519;
						break;
					
					case joaat("component_knife_varmod_xm3_02"):
						iVar0 = Global_262145.f_33516;
						break;
					
					case joaat("component_knife_varmod_xm3_03"):
						iVar0 = Global_262145.f_33517;
						break;
					
					case joaat("component_knife_varmod_xm3_04"):
						iVar0 = Global_262145.f_33520;
						break;
					
					case joaat("component_knife_varmod_xm3_05"):
						iVar0 = Global_262145.f_33518;
						break;
					
					case joaat("component_knife_varmod_xm3_06"):
						iVar0 = Global_262145.f_33522;
						break;
					
					case joaat("component_knife_varmod_xm3_07"):
						iVar0 = Global_262145.f_33521;
						break;
					
					case joaat("component_knife_varmod_xm3_08"):
						iVar0 = Global_262145.f_33523;
						break;
					
					case joaat("component_knife_varmod_xm3_09"):
						iVar0 = Global_262145.f_33524;
						break;
				}
				break;
			
			case joaat("weapon_bat"):
				switch (iParam1)
				{
					case joaat("component_bat_varmod_xm3"):
						iVar0 = Global_262145.f_33505;
						break;
					
					case joaat("component_bat_varmod_xm3_01"):
						iVar0 = Global_262145.f_33506;
						break;
					
					case joaat("component_bat_varmod_xm3_02"):
						iVar0 = Global_262145.f_33508;
						break;
					
					case joaat("component_bat_varmod_xm3_03"):
						iVar0 = Global_262145.f_33509;
						break;
					
					case joaat("component_bat_varmod_xm3_04"):
						iVar0 = Global_262145.f_33510;
						break;
					
					case joaat("component_bat_varmod_xm3_05"):
						iVar0 = Global_262145.f_33511;
						break;
					
					case joaat("component_bat_varmod_xm3_06"):
						iVar0 = Global_262145.f_33512;
						break;
					
					case joaat("component_bat_varmod_xm3_07"):
						iVar0 = Global_262145.f_33513;
						break;
					
					case joaat("component_bat_varmod_xm3_08"):
						iVar0 = Global_262145.f_33514;
						break;
					
					case joaat("component_bat_varmod_xm3_09"):
						iVar0 = Global_262145.f_33507;
						break;
				}
				break;
			
			case joaat("weapon_pistolxm3"):
				switch (iParam1)
				{
					case joaat("component_pistolxm3_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistolxm3_supp"):
						iVar0 = Global_262145.f_33488;
						break;
				}
				break;
			
			case 350597077:
				switch (iParam1)
				{
					case 943088878:
						iVar0 = Global_262145.f_34934;
						break;
					
					case 310778254:
						iVar0 = Global_262145.f_34935;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_34937;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = Global_262145.f_34936;
						break;
				}
				break;
			
			case joaat("weapon_rpg"):
				switch (iParam1)
				{
					case -1240142720:
						iVar0 = 0;
						break;
				}
				break;
			
			case joaat("weapon_battlerifle"):
				switch (iParam1)
				{
					case -292433650:
						iVar0 = 0;
						break;
					
					case 494808810:
						iVar0 = Global_262145.f_35075;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_35076;
						break;
				}
				break;
			
			case joaat("weapon_stungun_mp"):
				switch (iParam1)
				{
					case -1675905033:
						iVar0 = 0;
						break;
				}
				break;
			
			default:
				iVar6 = func_76(iParam0, &uVar8);
				if (iVar6 != -1)
				{
					iVar7 = 0;
					while (iVar7 < unk_0x660FA55F8D417CAB(iVar6))
					{
						if (unk_0x737024F2814ABDDD(iVar6, iVar7, &Var9))
						{
							if (!func_57(Var9.f_3))
							{
								if (Var9.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var9.f_5 == -1)
									{
										iVar0 = -1;
									}
									else
									{
										iVar0 = Var9.f_5;
									}
								}
							}
						}
						iVar7++;
					}
				}
				break;
			}
	}
	if (unk_0x76CD105BCAC6EB9F() && func_50())
	{
		StringCopy(&Var11, func_48(iParam1, iParam0), 16);
		func_39(&sVar10, Var11, unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()), 3, 1, func_46(iParam0), func_45(iParam0), -1, 0, 0, 2);
		if (unk_0xABE86AEC64720F91(&sVar10))
		{
			iVar0 = unk_0xD2ACF01ED6E6D7C6(unk_0x70E57E9927B6BA58(&sVar10), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar12 = func_28(iParam0, &iVar0, fVar1);
		if (fVar12 != 1f)
		{
		}
	}
	return iVar0;
}

float func_28(int iParam0, int iParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (unk_0x76CD105BCAC6EB9F() && func_50())
	{
		fVar1 = (fVar1 + func_38());
		fVar0 = (1f - fVar1);
		*iParam1 = system::round((system::to_float(*iParam1) * fVar0));
		return fVar0;
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		*iParam1 = system::round((system::to_float(*iParam1) * fParam2));
	}
	if (!Global_79389)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_29(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0,1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0,15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0,25f;
			}
		}
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		fVar1 = (fVar1 + fLocal_53);
		fVar1 = (fVar1 + func_38());
	}
	fVar0 = (1f - fVar1);
	*iParam1 = system::round((system::to_float(*iParam1) * fVar0));
	return fVar0;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar4;
	
	iVar0 = func_33();
	if (iParam0 == 0 || !func_32(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 5;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_30(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = func_30(1, iVar0);
		iVar3[1] = func_30(3, iVar0);
		iVar3[2] = func_30(2, iVar0);
		iVar3[3] = func_30(4, iVar0);
		iVar3[4] = func_30(5, iVar0);
		iVar3[5] = func_30(0, iVar0);
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 1;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 2;
		}
		bVar4 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar4 = true;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 3;
		}
	}
	return -1;
}

int func_30(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_31(iVar0, iParam1);
	if (func_31(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_31(iVar1, iParam1);
	}
	if (func_31(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_31(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_31(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_31(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_31(int iParam0, int iParam1)
{
	return Global_113969.f_19150[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

bool func_32(int iParam0)
{
	return iParam0 < 3;
}

int func_33()
{
	func_34();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_34()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_36(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_35(unk_0x4A8C381C258A124D());
			if (func_32(iVar0) && (!func_149(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_32(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_32(iParam0))
	{
		return func_37(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

float func_38()
{
	return Global_101585.f_2096;
}

void func_39(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)
{
	switch (unk_0x70E57E9927B6BA58(&cParam1))
	{
		case 64715401:
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case joaat("GSA_TYPE_FW"):
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 1:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam6 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 2:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
		
		case 4:
			if (iParam4 == Global_76458)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam4 == Global_76459)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == Global_76460)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam4 == Global_76461)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam4 == Global_76462)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == func_44())
			{
				StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (iParam4 == func_43())
			{
				if (iParam6 == 40)
				{
					StringCopy(sParam0, "VEU_BRICKADE2_t0_v0", 64);
				}
				else if (iParam6 == 2)
				{
					StringCopy(sParam0, "VE_BRICKADE2_t2_v38", 64);
				}
				else if (iParam6 == 1)
				{
					StringCopy(sParam0, "VE_BRICKADE2_t1_v38", 64);
				}
				else
				{
					StringCopy(sParam0, "VE_BRICKADE2_t0_v38", 64);
				}
			}
			else if (iParam4 == func_42())
			{
				if (iParam6 == 1)
				{
					StringCopy(sParam0, "VE_MANCHEZ3_t1_v4", 64);
				}
				else
				{
					StringCopy(sParam0, "VE_MANCHEZ3_t0_v4", 64);
				}
			}
			else if (iParam4 == joaat("avenger3"))
			{
				if (iParam6 == 40)
				{
					if (iParam12 == 61)
					{
						StringCopy(sParam0, "VEU_AVENGER3_t0_v0", 64);
					}
					else if (iParam12 == 103)
					{
						if (!func_40())
						{
							StringCopy(sParam0, "VEU_AVENGER3_t1_v0", 64);
						}
						else
						{
							StringCopy(sParam0, "VEU_AVENGER3_t1_v1", 64);
						}
					}
				}
				else
				{
					StringCopy(sParam0, "VE_AVENGER_t0_v33", 64);
				}
			}
			else if (iParam4 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam6 == 24 || iParam6 == 25)
				{
					if (iParam8 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam8 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam8 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam9 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam9 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam9 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam9 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam9 == 7)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam8 = -1;
				}
				else if (iParam6 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam6 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else if (iParam6 == 22)
			{
				StringCopy(&cParam1, unk_0x93E7527CFECC7CD8(iParam4), 16);
				if (unk_0xD6F9DEE4765092A9(&cParam1) || unk_0x70E57E9927B6BA58(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam6 == 40)
			{
				switch (iParam4)
				{
					case joaat("fcr2"):
						StringCopy(&cParam1, "FCR2", 16);
						break;
					
					case joaat("diablous2"):
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					
					case joaat("comet3"):
						StringCopy(&cParam1, "COMET3", 16);
						break;
					
					default:
						StringCopy(&cParam1, unk_0x93E7527CFECC7CD8(iParam4), 16);
						if (unk_0xD6F9DEE4765092A9(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
			}
			break;
	}
	if (bParam11)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

bool func_40()
{
	return func_41();
}

bool func_41()
{
	return Global_1586521[189 /*142*/].f_66 == joaat("thruster");
}

int func_42()
{
	return joaat("manchez3");
}

int func_43()
{
	return joaat("brickade2");
}

int func_44()
{
	return joaat("kosatka");
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol_mk2"):
		case joaat("weapon_smg_mk2"):
		case joaat("weapon_assaultrifle_mk2"):
		case joaat("weapon_carbinerifle_mk2"):
		case joaat("weapon_combatmg_mk2"):
		case joaat("weapon_heavysniper_mk2"):
		case joaat("weapon_pumpshotgun_mk2"):
		case joaat("weapon_specialcarbine_mk2"):
		case joaat("weapon_snspistol_mk2"):
		case joaat("weapon_marksmanrifle_mk2"):
		case joaat("weapon_revolver_mk2"):
		case joaat("weapon_bullpuprifle_mk2"):
			return 2;
			break;
	}
	return -1;
}

int func_46(int iParam0)
{
	return func_47(iParam0);
}

int func_47(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
		
		case joaat("weapon_autoshotgun"):
			return 72;
			break;
		
		case joaat("weapon_minismg"):
			return 73;
			break;
		
		case joaat("weapon_compactlauncher"):
			return 74;
			break;
		
		case joaat("weapon_battleaxe"):
			return 75;
			break;
		
		case joaat("weapon_pipebomb"):
			return 76;
			break;
		
		case joaat("weapon_poolcue"):
			return 77;
			break;
		
		case joaat("weapon_wrench"):
			return 78;
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			return 9;
			break;
		
		case joaat("weapon_combatmg_mk2"):
			return 13;
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			return 21;
			break;
		
		case joaat("weapon_pistol_mk2"):
			return 1;
			break;
		
		case joaat("weapon_smg_mk2"):
			return 5;
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			return 22;
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			return 46;
			break;
		
		case joaat("weapon_snspistol_mk2"):
			return 47;
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			return 56;
			break;
		
		case joaat("weapon_revolver_mk2"):
			return 70;
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			return 48;
			break;
		
		case joaat("weapon_doubleaction"):
			return 79;
			break;
		
		case joaat("weapon_stone_hatchet"):
			return 80;
			break;
		
		case joaat("weapon_raypistol"):
			return 81;
			break;
		
		case joaat("weapon_raycarbine"):
			return 82;
			break;
		
		case joaat("weapon_rayminigun"):
			return 83;
			break;
		
		case joaat("weapon_navyrevolver"):
			return 84;
			break;
		
		case joaat("weapon_ceramicpistol"):
			return 85;
			break;
		
		case joaat("weapon_combatshotgun"):
			return 86;
			break;
		
		case joaat("weapon_militaryrifle"):
			return 88;
			break;
		
		case joaat("weapon_gadgetpistol"):
			return 87;
			break;
		
		case joaat("weapon_heavyrifle"):
			return 10;
			break;
		
		case joaat("weapon_emplauncher"):
			return 89;
			break;
		
		case joaat("weapon_fertilizercan"):
			return 90;
			break;
		
		case joaat("weapon_stungun_mp"):
			return 91;
			break;
		
		case joaat("weapon_metaldetector"):
			return 92;
			break;
		
		case joaat("weapon_tacticalrifle"):
			return 93;
			break;
		
		case joaat("weapon_precisionrifle"):
			return 94;
			break;
		
		case joaat("weapon_pistolxm3"):
			return 95;
			break;
		
		case joaat("weapon_candycane"):
			return 96;
			break;
		
		case joaat("weapon_railgunxm3"):
			return 97;
			break;
		
		case 350597077:
			return 98;
			break;
		
		case joaat("weapon_battlerifle"):
			return 99;
			break;
		
		case joaat("weapon_snowlauncher"):
			return 100;
			break;
		
		case -624951259:
			return 101;
			break;
	}
	return 0;
}

char* func_48(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var3;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
		}
	}
	else if (iParam1 == joaat("weapon_bat"))
	{
		switch (iParam0)
		{
			case joaat("component_bat_varmod_xm3"):
				return "WCT_BAT_XM3";
				break;
			
			case joaat("component_bat_varmod_xm3_01"):
				return "WCT_BAT_XM301";
				break;
			
			case joaat("component_bat_varmod_xm3_02"):
				return "WCT_BAT_XM302";
				break;
			
			case joaat("component_bat_varmod_xm3_03"):
				return "WCT_BAT_XM303";
				break;
			
			case joaat("component_bat_varmod_xm3_04"):
				return "WCT_BAT_XM304";
				break;
			
			case joaat("component_bat_varmod_xm3_05"):
				return "WCT_BAT_XM305";
				break;
			
			case joaat("component_bat_varmod_xm3_06"):
				return "WCT_BAT_XM306";
				break;
			
			case joaat("component_bat_varmod_xm3_07"):
				return "WCT_BAT_XM307";
				break;
			
			case joaat("component_bat_varmod_xm3_08"):
				return "WCT_BAT_XM308";
				break;
			
			case joaat("component_bat_varmod_xm3_09"):
				return "WCT_BAT_XM309";
				break;
		}
	}
	else if (iParam1 == joaat("weapon_knife"))
	{
		switch (iParam0)
		{
			case joaat("component_knife_varmod_xm3"):
				return "WCT_KNIFE_XM3";
				break;
			
			case joaat("component_knife_varmod_xm3_01"):
				return "WCT_KNIFE_XM301";
				break;
			
			case joaat("component_knife_varmod_xm3_02"):
				return "WCT_KNIFE_XM302";
				break;
			
			case joaat("component_knife_varmod_xm3_03"):
				return "WCT_KNIFE_XM303";
				break;
			
			case joaat("component_knife_varmod_xm3_04"):
				return "WCT_KNIFE_XM304";
				break;
			
			case joaat("component_knife_varmod_xm3_05"):
				return "WCT_KNIFE_XM305";
				break;
			
			case joaat("component_knife_varmod_xm3_06"):
				return "WCT_KNIFE_XM306";
				break;
			
			case joaat("component_knife_varmod_xm3_07"):
				return "WCT_KNIFE_XM307";
				break;
			
			case joaat("component_knife_varmod_xm3_08"):
				return "WCT_KNIFE_XM308";
				break;
			
			case joaat("component_knife_varmod_xm3_09"):
				return "WCT_KNIFE_XM309";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_tacticalrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_tacticalrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_gunrun_mk2_upgrade"):
			return "WCT_VAR_GUN";
			break;
		
		case joaat("component_marksmanrifle_mk2_camo_ind_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("component_snspistol_mk2_camo_ind_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("component_snspistol_mk2_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_macro_02_mk2"):
			return "WCT_SCOPE_MAC2";
			break;
		
		case joaat("component_at_scope_small_mk2"):
			return "WCT_SCOPE_SML2";
			break;
		
		case joaat("component_raypistol_varmod_xmas18"):
			return "WCT_VAR_RAY18";
			break;
		
		case joaat("component_ceramicpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_ceramicpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_ceramicpistol_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_heavyrifle_camo1"):
			return "WCT_VAR_FAM";
			break;
		
		case joaat("component_microsmg_varmod_security"):
			return "WCT_VAR_WEED";
			break;
		
		case joaat("component_appistol_varmod_security"):
			return "WCT_VAR_STUD";
			break;
		
		case joaat("component_pumpshotgun_varmod_security"):
			return "WCT_VAR_BONE";
			break;
		
		case joaat("component_pistol_mk2_varmod_xm3"):
			return "WCT_PISTMK2_XM3";
			break;
		
		case joaat("component_microsmg_varmod_xm3"):
			return "WCT_MSMG_XM3";
			break;
		
		case joaat("component_pumpshotgun_varmod_xm3"):
			return "WCT_PUMPSHT_XM3";
			break;
		
		case joaat("component_pistolxm3_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistolxm3_supp"):
			return "WCT_SUPP";
			break;
		
		case 1694268374:
			return "WCT_MSMGFRN_VAR";
			break;
		
		case 1605520746:
			return "WCT_CRBNMIC_VAR";
			break;
		
		case -1240142720:
			return "WCT_RPGTVR_VAR";
			break;
		
		case 943088878:
			return "WCT_CLIP1";
			break;
		
		case 310778254:
			return "WCT_CLIP2";
			break;
		
		case -292433650:
			return "WCT_CLIP1";
			break;
		
		case 494808810:
			return "WCT_CLIP2";
			break;
		
		case 1400690398:
			return "WCT_COMPIST_XM";
			break;
		
		case 221907180:
			return "WCT_HVSP_XM";
			break;
		
		case 302671608:
			return "WCT_SPCR_XM";
			break;
		
		case -1675905033:
			return "WCT_STNGN_BAIL";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_76(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < unk_0x660FA55F8D417CAB(iVar0))
					{
						if (unk_0x737024F2814ABDDD(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_49(&(Var3.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_49(var uParam0)
{
	return uParam0;
}

int func_50()
{
	if (unk_0x76CD105BCAC6EB9F() && func_51())
	{
		return 1;
	}
	return 0;
}

int func_51()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_52(int iParam0)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		switch (iParam0)
		{
			case joaat("component_assaultrifle_clip_03"):
			case joaat("component_carbinerifle_clip_03"):
			case joaat("component_combatpdw_clip_03"):
			case joaat("component_compactrifle_clip_03"):
			case joaat("component_heavyshotgun_clip_03"):
			case joaat("component_machinepistol_clip_03"):
			case joaat("component_smg_clip_03"):
			case joaat("component_specialcarbine_clip_03"):
				return 0;
			
			default:
		}
	}
	else if (func_53(iParam0))
	{
		return Global_262145.f_20911;
	}
	return 1;
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo_ind_01"):
		case joaat("component_smg_mk2_camo_ind_01"):
		case joaat("component_heavysniper_mk2_camo_ind_01"):
		case joaat("component_combatmg_mk2_camo_ind_01"):
		case joaat("component_assaultrifle_mk2_camo_ind_01"):
		case joaat("component_carbinerifle_mk2_camo_ind_01"):
		case joaat("component_pumpshotgun_mk2_camo_ind_01"):
		case joaat("component_specialcarbine_mk2_camo_ind_01"):
		case joaat("component_snspistol_mk2_camo_ind_01"):
		case joaat("component_marksmanrifle_mk2_camo_ind_01"):
		case joaat("component_revolver_mk2_camo_ind_01"):
		case joaat("component_bullpuprifle_mk2_camo_ind_01"):
			return 1;
			break;
	}
	return 0;
}

int func_54()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (BitTest(Global_26, 6))
	{
		if (BitTest(Global_26, 2) || BitTest(Global_26, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (BitTest(uVar0, 6))
		{
			if (BitTest(uVar0, 2) || BitTest(uVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x7A207DD1AEF9D26E(0))
	{
		if (Global_152850.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xDF7F16323520B858(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		iVar3 = unk_0x38640D2193CB547F(866);
		if (BitTest(iVar3, 2) || BitTest(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_55()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (BitTest(Global_26, 5))
	{
		if (BitTest(Global_26, 1) || BitTest(Global_26, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (BitTest(uVar0, 5))
		{
			if (BitTest(uVar0, 1) || BitTest(uVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0x7A207DD1AEF9D26E(0))
	{
		if (Global_152850.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xDF7F16323520B858(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		iVar3 = unk_0x38640D2193CB547F(866);
		if (BitTest(iVar3, 1) || BitTest(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x753B42F8D561B8E2())
			{
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				unk_0x0B0C9A0F9AAEB7F0(&iVar4, 1);
				unk_0x0B0C9A0F9AAEB7F0(&iVar4, 3);
				unk_0x0B0C9A0F9AAEB7F0(&iVar4, 5);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 1);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 3);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 5);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (unk_0x76CA59C648318506())
				{
					iVar4 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&iVar4, 1);
					unk_0x0B0C9A0F9AAEB7F0(&iVar4, 3);
					unk_0xED11291F7127888E(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_56()
{
	int iVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
	{
		return 0;
	}
	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 6);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x76CA59C648318506())
				{
					iVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&iVar0, 0);
					unk_0xED11291F7127888E(iVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		if (BitTest(unk_0x38640D2193CB547F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_mk2_camo_slide"):
		case joaat("component_pistol_mk2_camo_02_slide"):
		case joaat("component_pistol_mk2_camo_03_slide"):
		case joaat("component_pistol_mk2_camo_04_slide"):
		case joaat("component_pistol_mk2_camo_05_slide"):
		case joaat("component_pistol_mk2_camo_06_slide"):
		case joaat("component_pistol_mk2_camo_07_slide"):
		case joaat("component_pistol_mk2_camo_08_slide"):
		case joaat("component_pistol_mk2_camo_09_slide"):
		case joaat("component_pistol_mk2_camo_10_slide"):
		case joaat("component_pistol_mk2_camo_ind_01_slide"):
		case joaat("component_snspistol_mk2_camo_slide"):
		case joaat("component_snspistol_mk2_camo_02_slide"):
		case joaat("component_snspistol_mk2_camo_03_slide"):
		case joaat("component_snspistol_mk2_camo_04_slide"):
		case joaat("component_snspistol_mk2_camo_05_slide"):
		case joaat("component_snspistol_mk2_camo_06_slide"):
		case joaat("component_snspistol_mk2_camo_07_slide"):
		case joaat("component_snspistol_mk2_camo_08_slide"):
		case joaat("component_snspistol_mk2_camo_09_slide"):
		case joaat("component_snspistol_mk2_camo_10_slide"):
		case joaat("component_snspistol_mk2_camo_ind_01_slide"):
		case joaat("component_pistol_mk2_varmod_xm3_slide"):
			return 1;
			break;
	}
	return 0;
}

int func_58(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				if (func_59(joaat("component_knife_varmod_xm3"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_knife_varmod_xm3");
					iVar0++;
				}
				if (func_59(joaat("component_knife_varmod_xm3_01"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_knife_varmod_xm3_01");
					iVar0++;
				}
				if (func_59(joaat("component_knife_varmod_xm3_02"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_knife_varmod_xm3_02");
					iVar0++;
				}
				if (func_59(joaat("component_knife_varmod_xm3_03"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_knife_varmod_xm3_03");
					iVar0++;
				}
				if (func_59(joaat("component_knife_varmod_xm3_04"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_knife_varmod_xm3_04");
					iVar0++;
				}
				if (func_59(joaat("component_knife_varmod_xm3_05"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_knife_varmod_xm3_05");
					iVar0++;
				}
				if (func_59(joaat("component_knife_varmod_xm3_06"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_knife_varmod_xm3_06");
					iVar0++;
				}
				if (func_59(joaat("component_knife_varmod_xm3_07"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_knife_varmod_xm3_07");
					iVar0++;
				}
				if (func_59(joaat("component_knife_varmod_xm3_08"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_knife_varmod_xm3_08");
					iVar0++;
				}
				if (func_59(joaat("component_knife_varmod_xm3_09"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_knife_varmod_xm3_09");
					iVar0++;
				}
			}
			break;
		
		case joaat("weapon_bat"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				if (func_59(joaat("component_bat_varmod_xm3"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_bat_varmod_xm3");
					iVar0++;
				}
				if (func_59(joaat("component_bat_varmod_xm3_01"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_bat_varmod_xm3_01");
					iVar0++;
				}
				if (func_59(joaat("component_bat_varmod_xm3_02"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_bat_varmod_xm3_02");
					iVar0++;
				}
				if (func_59(joaat("component_bat_varmod_xm3_03"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_bat_varmod_xm3_03");
					iVar0++;
				}
				if (func_59(joaat("component_bat_varmod_xm3_04"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_bat_varmod_xm3_04");
					iVar0++;
				}
				if (func_59(joaat("component_bat_varmod_xm3_05"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_bat_varmod_xm3_05");
					iVar0++;
				}
				if (func_59(joaat("component_bat_varmod_xm3_06"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_bat_varmod_xm3_06");
					iVar0++;
				}
				if (func_59(joaat("component_bat_varmod_xm3_07"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_bat_varmod_xm3_07");
					iVar0++;
				}
				if (func_59(joaat("component_bat_varmod_xm3_08"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_bat_varmod_xm3_08");
					iVar0++;
				}
				if (func_59(joaat("component_bat_varmod_xm3_09"), iParam0, &uVar1, &uVar2) && uVar1)
				{
					(*iParam1)[iVar0] = joaat("component_bat_varmod_xm3_09");
					iVar0++;
				}
			}
			break;
	}
	return iVar0;
}

int func_59(int iParam0, int iParam1, var uParam2, var uParam3)
{
	*uParam2 = 1;
	*uParam3 = 0;
	switch (iParam1)
	{
		case joaat("weapon_bat"):
			if ((!Global_262145.f_33309 && func_70(iLocal_54, 0)) || func_60(iParam0, iParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
			if (Global_262145.f_33309 || !func_70(iLocal_54, 0))
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
			return 1;
			break;
		
		case joaat("weapon_knife"):
			if ((!Global_262145.f_33309 && func_70(iLocal_54, 0)) || func_60(iParam0, iParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
			if (Global_262145.f_33309)
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
			return 1;
			break;
	}
	return 0;
}

int func_60(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (func_69())
	{
		return 0;
	}
	uVar0 = func_64(iParam0, iParam1, iParam2);
	iVar1 = func_62(iParam0, iParam1);
	return BitTest(uVar0, func_61(iVar1));
}

int func_61(int iParam0)
{
	return (iParam0 % 32);
}

int func_62(int iParam0, int iParam1)
{
	return func_63(iParam0, iParam1);
}

int func_63(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 211;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 186;
					break;
				
				case 1400690398:
					return 613;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 164;
					break;
				
				case joaat("component_appistol_varmod_security"):
					return 569;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 15;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 16;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 17;
					break;
				
				case joaat("component_at_scope_macro"):
					return 18;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 19;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 174;
					break;
				
				case joaat("component_microsmg_varmod_security"):
					return 570;
					break;
				
				case 1694268374:
					return 605;
					break;
				
				case joaat("component_microsmg_varmod_xm3"):
					return 602;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_smg_clip_03"):
					return 207;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 212;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 201;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 213;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 202;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 214;
					break;
				
				case 1605520746:
					return 604;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 44;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 45;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 47;
					break;
				
				case joaat("component_at_scope_small"):
					return 48;
					break;
				
				case joaat("component_at_ar_supp"):
					return 49;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 163;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 50;
					break;
				
				case joaat("component_mg_clip_02"):
					return 51;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 52;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 187;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 188;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 215;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 59;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 60;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 193;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 389;
					break;
				
				case joaat("component_pumpshotgun_varmod_security"):
					return 571;
					break;
				
				case joaat("component_pumpshotgun_varmod_xm3"):
					return 603;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 64;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 65;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 66;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 67;
					break;
				
				case joaat("component_at_ar_supp"):
					return 68;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 69;
					break;
				
				case joaat("component_at_scope_large"):
					return 70;
					break;
				
				case joaat("component_at_scope_max"):
					return 71;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 72;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 180;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 216;
					break;
				
				case 221907180:
					return 614;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 78;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 79;
					break;
				
				case joaat("component_at_scope_small"):
					return 80;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 83;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 84;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 85;
					break;
				
				case joaat("component_at_scope_macro"):
					return 86;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 87;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 189;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 88;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 89;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 91;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 92;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 93;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 94;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("component_at_scope_large"):
					return 96;
					break;
				
				case joaat("component_at_scope_max"):
					return 97;
					break;
				
				case joaat("component_at_ar_supp"):
					return 98;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 107;
					break;
				
				case joaat("component_at_scope_medium"):
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 111;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 112;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 208;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 113;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 114;
					break;
				
				case joaat("component_at_scope_medium"):
					return 115;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 116;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 190;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 390;
					break;
				
				case 302671608:
					return 615;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 117;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 118;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 119;
					break;
				
				case joaat("component_at_pi_supp"):
					return 120;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 191;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 391;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 121;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 122;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 123;
					break;
				
				case joaat("component_at_pi_supp"):
					return 124;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 171;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 131;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 132;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 127;
					break;
				
				case joaat("component_at_ar_supp"):
					return 128;
					break;
				
				case joaat("component_at_scope_small"):
					return 129;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 130;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 192;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 394;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 125;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 133;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 134;
					break;
				
				case joaat("component_at_pi_supp"):
					return 136;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 137;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 140;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 205;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 145;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 146;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 147;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 138;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 139;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 141;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 142;
					break;
				
				case joaat("component_at_ar_supp"):
					return 143;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 144;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 172;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 392;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 149;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 150;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 203;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 151;
					break;
				
				case joaat("component_at_scope_small"):
					return 152;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 153;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 178;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 154;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 155;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 156;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 157;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 158;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 159;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 160;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 161;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 162;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 184;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 185;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 206;
					break;
				
				case joaat("component_at_pi_supp"):
					return 183;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 194;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 195;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 196;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 197;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 198;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 393;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 199;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 200;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 204;
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam0)
			{
				case joaat("component_minismg_clip_01"):
					return 209;
					break;
				
				case joaat("component_minismg_clip_02"):
					return 210;
					break;
			}
			break;
		
		case joaat("weapon_pistol_mk2"):
			switch (iParam0)
			{
				case joaat("component_pistol_mk2_clip_01"):
					return 217;
					break;
				
				case joaat("component_pistol_mk2_clip_02"):
					return 218;
					break;
				
				case joaat("component_pistol_mk2_clip_fmj"):
					return 219;
					break;
				
				case joaat("component_pistol_mk2_clip_hollowpoint"):
					return 220;
					break;
				
				case joaat("component_pistol_mk2_clip_incendiary"):
					return 221;
					break;
				
				case joaat("component_pistol_mk2_clip_tracer"):
					return 222;
					break;
				
				case joaat("component_at_pi_flsh_02"):
					return 223;
					break;
				
				case joaat("component_at_pi_rail"):
					return 224;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 225;
					break;
				
				case joaat("component_at_pi_comp"):
					return 226;
					break;
				
				case joaat("component_pistol_mk2_camo"):
					return 367;
					break;
				
				case joaat("component_pistol_mk2_camo_02"):
					return 368;
					break;
				
				case joaat("component_pistol_mk2_camo_03"):
					return 369;
					break;
				
				case joaat("component_pistol_mk2_camo_04"):
					return 370;
					break;
				
				case joaat("component_pistol_mk2_camo_05"):
					return 371;
					break;
				
				case joaat("component_pistol_mk2_camo_06"):
					return 372;
					break;
				
				case joaat("component_pistol_mk2_camo_07"):
					return 373;
					break;
				
				case joaat("component_pistol_mk2_camo_08"):
					return 374;
					break;
				
				case joaat("component_pistol_mk2_camo_09"):
					return 375;
					break;
				
				case joaat("component_pistol_mk2_camo_10"):
					return 376;
					break;
				
				case joaat("component_pistol_mk2_camo_ind_01"):
					return 377;
					break;
				
				case joaat("component_pistol_mk2_varmod_xm3"):
					return 601;
					break;
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			switch (iParam0)
			{
				case joaat("component_smg_mk2_clip_01"):
					return 227;
					break;
				
				case joaat("component_smg_mk2_clip_02"):
					return 228;
					break;
				
				case joaat("component_smg_mk2_clip_fmj"):
					return 229;
					break;
				
				case joaat("component_smg_mk2_clip_hollowpoint"):
					return 230;
					break;
				
				case joaat("component_smg_mk2_clip_incendiary"):
					return 231;
					break;
				
				case joaat("component_smg_mk2_clip_tracer"):
					return 232;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 233;
					break;
				
				case joaat("component_at_sights_smg"):
					return 234;
					break;
				
				case joaat("component_at_scope_macro_02_smg_mk2"):
					return 235;
					break;
				
				case joaat("component_at_scope_small_smg_mk2"):
					return 236;
					break;
				
				case joaat("component_at_pi_supp"):
					return 237;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 238;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 239;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 240;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 241;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 242;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 243;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 244;
					break;
				
				case joaat("component_at_sb_barrel_01"):
					return 245;
					break;
				
				case joaat("component_at_sb_barrel_02"):
					return 246;
					break;
				
				case joaat("component_smg_mk2_camo"):
					return 378;
					break;
				
				case joaat("component_smg_mk2_camo_02"):
					return 379;
					break;
				
				case joaat("component_smg_mk2_camo_03"):
					return 380;
					break;
				
				case joaat("component_smg_mk2_camo_04"):
					return 381;
					break;
				
				case joaat("component_smg_mk2_camo_05"):
					return 382;
					break;
				
				case joaat("component_smg_mk2_camo_06"):
					return 383;
					break;
				
				case joaat("component_smg_mk2_camo_07"):
					return 384;
					break;
				
				case joaat("component_smg_mk2_camo_08"):
					return 385;
					break;
				
				case joaat("component_smg_mk2_camo_09"):
					return 386;
					break;
				
				case joaat("component_smg_mk2_camo_10"):
					return 387;
					break;
				
				case joaat("component_smg_mk2_camo_ind_01"):
					return 388;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_mk2_clip_01"):
					return 247;
					break;
				
				case joaat("component_heavysniper_mk2_clip_02"):
					return 248;
					break;
				
				case joaat("component_heavysniper_mk2_clip_armorpiercing"):
					return 249;
					break;
				
				case joaat("component_heavysniper_mk2_clip_explosive"):
					return 250;
					break;
				
				case joaat("component_heavysniper_mk2_clip_fmj"):
					return 251;
					break;
				
				case joaat("component_heavysniper_mk2_clip_incendiary"):
					return 252;
					break;
				
				case joaat("component_at_scope_large_mk2"):
					return 253;
					break;
				
				case joaat("component_at_scope_max"):
					return 254;
					break;
				
				case joaat("component_at_scope_nv"):
					return 255;
					break;
				
				case joaat("component_at_scope_thermal"):
					return 256;
					break;
				
				case joaat("component_at_sr_supp_03"):
					return 257;
					break;
				
				case joaat("component_at_muzzle_08"):
					return 258;
					break;
				
				case joaat("component_at_muzzle_09"):
					return 259;
					break;
				
				case joaat("component_at_sr_barrel_01"):
					return 260;
					break;
				
				case joaat("component_at_sr_barrel_02"):
					return 261;
					break;
				
				case joaat("component_heavysniper_mk2_camo"):
					return 356;
					break;
				
				case joaat("component_heavysniper_mk2_camo_02"):
					return 357;
					break;
				
				case joaat("component_heavysniper_mk2_camo_03"):
					return 358;
					break;
				
				case joaat("component_heavysniper_mk2_camo_04"):
					return 359;
					break;
				
				case joaat("component_heavysniper_mk2_camo_05"):
					return 360;
					break;
				
				case joaat("component_heavysniper_mk2_camo_06"):
					return 361;
					break;
				
				case joaat("component_heavysniper_mk2_camo_07"):
					return 362;
					break;
				
				case joaat("component_heavysniper_mk2_camo_08"):
					return 363;
					break;
				
				case joaat("component_heavysniper_mk2_camo_09"):
					return 364;
					break;
				
				case joaat("component_heavysniper_mk2_camo_10"):
					return 365;
					break;
				
				case joaat("component_heavysniper_mk2_camo_ind_01"):
					return 366;
					break;
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			switch (iParam0)
			{
				case joaat("component_combatmg_mk2_clip_01"):
					return 262;
					break;
				
				case joaat("component_combatmg_mk2_clip_02"):
					return 263;
					break;
				
				case joaat("component_combatmg_mk2_clip_armorpiercing"):
					return 264;
					break;
				
				case joaat("component_combatmg_mk2_clip_fmj"):
					return 265;
					break;
				
				case joaat("component_combatmg_mk2_clip_incendiary"):
					return 266;
					break;
				
				case joaat("component_combatmg_mk2_clip_tracer"):
					return 267;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 268;
					break;
				
				case joaat("component_at_sights"):
					return 269;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 270;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 271;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 272;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 273;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 274;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 275;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 276;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 277;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 278;
					break;
				
				case joaat("component_at_mg_barrel_01"):
					return 279;
					break;
				
				case joaat("component_at_mg_barrel_02"):
					return 280;
					break;
				
				case joaat("component_combatmg_mk2_camo"):
					return 345;
					break;
				
				case joaat("component_combatmg_mk2_camo_02"):
					return 346;
					break;
				
				case joaat("component_combatmg_mk2_camo_03"):
					return 347;
					break;
				
				case joaat("component_combatmg_mk2_camo_04"):
					return 348;
					break;
				
				case joaat("component_combatmg_mk2_camo_05"):
					return 349;
					break;
				
				case joaat("component_combatmg_mk2_camo_06"):
					return 350;
					break;
				
				case joaat("component_combatmg_mk2_camo_07"):
					return 351;
					break;
				
				case joaat("component_combatmg_mk2_camo_08"):
					return 352;
					break;
				
				case joaat("component_combatmg_mk2_camo_09"):
					return 353;
					break;
				
				case joaat("component_combatmg_mk2_camo_10"):
					return 354;
					break;
				
				case joaat("component_combatmg_mk2_camo_ind_01"):
					return 355;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_mk2_clip_01"):
					return 281;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_02"):
					return 282;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
					return 283;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_fmj"):
					return 284;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_incendiary"):
					return 285;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_tracer"):
					return 286;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 287;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 288;
					break;
				
				case joaat("component_at_sights"):
					return 289;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 290;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 291;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 292;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 293;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 294;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 295;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 296;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 297;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 298;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 299;
					break;
				
				case joaat("component_at_ar_barrel_01"):
					return 300;
					break;
				
				case joaat("component_at_ar_barrel_02"):
					return 301;
					break;
				
				case joaat("component_assaultrifle_mk2_camo"):
					return 323;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_02"):
					return 324;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_03"):
					return 325;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_04"):
					return 326;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_05"):
					return 327;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_06"):
					return 328;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_07"):
					return 329;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_08"):
					return 330;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_09"):
					return 331;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_10"):
					return 332;
					break;
				
				case joaat("component_assaultrifle_mk2_camo_ind_01"):
					return 333;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_mk2_clip_01"):
					return 302;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_02"):
					return 303;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
					return 304;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_fmj"):
					return 305;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_incendiary"):
					return 306;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_tracer"):
					return 307;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 308;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 309;
					break;
				
				case joaat("component_at_sights"):
					return 310;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 311;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 312;
					break;
				
				case joaat("component_at_ar_supp"):
					return 313;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 314;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 315;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 316;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 317;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 318;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 319;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 320;
					break;
				
				case joaat("component_at_cr_barrel_01"):
					return 321;
					break;
				
				case joaat("component_at_cr_barrel_02"):
					return 322;
					break;
				
				case joaat("component_carbinerifle_mk2_camo"):
					return 334;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_02"):
					return 335;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_03"):
					return 336;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_04"):
					return 337;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_05"):
					return 338;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_06"):
					return 339;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_07"):
					return 340;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_08"):
					return 341;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_09"):
					return 342;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_10"):
					return 343;
					break;
				
				case joaat("component_carbinerifle_mk2_camo_ind_01"):
					return 344;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			switch (iParam0)
			{
				case joaat("component_pumpshotgun_mk2_clip_01"):
					return 395;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_armorpiercing"):
					return 396;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_explosive"):
					return 397;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_hollowpoint"):
					return 398;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_incendiary"):
					return 399;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 400;
					break;
				
				case joaat("component_at_sights"):
					return 401;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 402;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 403;
					break;
				
				case joaat("component_at_sr_supp_03"):
					return 404;
					break;
				
				case joaat("component_at_muzzle_08"):
					return 405;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo"):
					return 488;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_02"):
					return 489;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_03"):
					return 490;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_04"):
					return 491;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_05"):
					return 492;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_06"):
					return 493;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_07"):
					return 494;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_08"):
					return 495;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_09"):
					return 496;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_10"):
					return 497;
					break;
				
				case joaat("component_pumpshotgun_mk2_camo_ind_01"):
					return 498;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_mk2_clip_01"):
					return 406;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_02"):
					return 407;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_armorpiercing"):
					return 408;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_fmj"):
					return 409;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_incendiary"):
					return 410;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_tracer"):
					return 411;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 412;
					break;
				
				case joaat("component_at_sights"):
					return 413;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 414;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 415;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 416;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 417;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 418;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 419;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 420;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 421;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 422;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 423;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 424;
					break;
				
				case joaat("component_at_sc_barrel_01"):
					return 425;
					break;
				
				case joaat("component_at_sc_barrel_02"):
					return 426;
					break;
				
				case joaat("component_specialcarbine_mk2_camo"):
					return 532;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_02"):
					return 533;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_03"):
					return 534;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_04"):
					return 535;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_05"):
					return 536;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_06"):
					return 537;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_07"):
					return 538;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_08"):
					return 539;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_09"):
					return 540;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_10"):
					return 541;
					break;
				
				case joaat("component_specialcarbine_mk2_camo_ind_01"):
					return 542;
					break;
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			switch (iParam0)
			{
				case joaat("component_snspistol_mk2_clip_01"):
					return 427;
					break;
				
				case joaat("component_snspistol_mk2_clip_02"):
					return 428;
					break;
				
				case joaat("component_snspistol_mk2_clip_fmj"):
					return 429;
					break;
				
				case joaat("component_snspistol_mk2_clip_hollowpoint"):
					return 430;
					break;
				
				case joaat("component_snspistol_mk2_clip_incendiary"):
					return 431;
					break;
				
				case joaat("component_snspistol_mk2_clip_tracer"):
					return 432;
					break;
				
				case joaat("component_at_pi_flsh_03"):
					return 433;
					break;
				
				case joaat("component_at_pi_rail_02"):
					return 434;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 435;
					break;
				
				case joaat("component_at_pi_comp_02"):
					return 436;
					break;
				
				case joaat("component_snspistol_mk2_camo"):
					return 510;
					break;
				
				case joaat("component_snspistol_mk2_camo_02"):
					return 511;
					break;
				
				case joaat("component_snspistol_mk2_camo_03"):
					return 512;
					break;
				
				case joaat("component_snspistol_mk2_camo_04"):
					return 513;
					break;
				
				case joaat("component_snspistol_mk2_camo_05"):
					return 514;
					break;
				
				case joaat("component_snspistol_mk2_camo_06"):
					return 515;
					break;
				
				case joaat("component_snspistol_mk2_camo_07"):
					return 516;
					break;
				
				case joaat("component_snspistol_mk2_camo_08"):
					return 517;
					break;
				
				case joaat("component_snspistol_mk2_camo_09"):
					return 518;
					break;
				
				case joaat("component_snspistol_mk2_camo_10"):
					return 519;
					break;
				
				case joaat("component_snspistol_mk2_camo_ind_01"):
					return 520;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_mk2_clip_01"):
					return 437;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_02"):
					return 438;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_armorpiercing"):
					return 439;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_fmj"):
					return 440;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_incendiary"):
					return 441;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_tracer"):
					return 442;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 443;
					break;
				
				case joaat("component_at_sights"):
					return 444;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 445;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom_mk2"):
					return 446;
					break;
				
				case joaat("component_at_ar_supp"):
					return 447;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 448;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 449;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 450;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 451;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 452;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 453;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 454;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 455;
					break;
				
				case joaat("component_at_mrfl_barrel_01"):
					return 456;
					break;
				
				case joaat("component_at_mrfl_barrel_02"):
					return 457;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo"):
					return 521;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_02"):
					return 522;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_03"):
					return 523;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_04"):
					return 524;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_05"):
					return 525;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_06"):
					return 526;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_07"):
					return 527;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_08"):
					return 528;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_09"):
					return 529;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_10"):
					return 530;
					break;
				
				case joaat("component_marksmanrifle_mk2_camo_ind_01"):
					return 531;
					break;
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			switch (iParam0)
			{
				case joaat("component_revolver_mk2_clip_01"):
					return 458;
					break;
				
				case joaat("component_revolver_mk2_clip_fmj"):
					return 459;
					break;
				
				case joaat("component_revolver_mk2_clip_hollowpoint"):
					return 460;
					break;
				
				case joaat("component_revolver_mk2_clip_incendiary"):
					return 461;
					break;
				
				case joaat("component_revolver_mk2_clip_tracer"):
					return 462;
					break;
				
				case joaat("component_at_sights"):
					return 463;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 464;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 465;
					break;
				
				case joaat("component_at_pi_comp_03"):
					return 466;
					break;
				
				case joaat("component_revolver_mk2_camo"):
					return 499;
					break;
				
				case joaat("component_revolver_mk2_camo_02"):
					return 500;
					break;
				
				case joaat("component_revolver_mk2_camo_03"):
					return 501;
					break;
				
				case joaat("component_revolver_mk2_camo_04"):
					return 502;
					break;
				
				case joaat("component_revolver_mk2_camo_05"):
					return 503;
					break;
				
				case joaat("component_revolver_mk2_camo_06"):
					return 504;
					break;
				
				case joaat("component_revolver_mk2_camo_07"):
					return 505;
					break;
				
				case joaat("component_revolver_mk2_camo_08"):
					return 506;
					break;
				
				case joaat("component_revolver_mk2_camo_09"):
					return 507;
					break;
				
				case joaat("component_revolver_mk2_camo_10"):
					return 508;
					break;
				
				case joaat("component_revolver_mk2_camo_ind_01"):
					return 509;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_mk2_clip_01"):
					return 467;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_02"):
					return 468;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_armorpiercing"):
					return 469;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_fmj"):
					return 470;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_incendiary"):
					return 471;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_tracer"):
					return 472;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 473;
					break;
				
				case joaat("component_at_sights"):
					return 474;
					break;
				
				case joaat("component_at_scope_macro_02_mk2"):
					return 475;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 476;
					break;
				
				case joaat("component_at_bp_barrel_01"):
					return 477;
					break;
				
				case joaat("component_at_bp_barrel_02"):
					return 478;
					break;
				
				case joaat("component_at_ar_supp"):
					return 479;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 480;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 481;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 482;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 483;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 484;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 485;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 486;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 487;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo"):
					return 543;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_02"):
					return 544;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_03"):
					return 545;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_04"):
					return 546;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_05"):
					return 547;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_06"):
					return 548;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_07"):
					return 549;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_08"):
					return 550;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_09"):
					return 551;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_10"):
					return 552;
					break;
				
				case joaat("component_bullpuprifle_mk2_camo_ind_01"):
					return 553;
					break;
			}
			break;
		
		case joaat("weapon_raypistol"):
			switch (iParam0)
			{
				case joaat("component_raypistol_varmod_xmas18"):
					return 554;
					break;
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			switch (iParam0)
			{
				case joaat("component_ceramicpistol_clip_01"):
					return 555;
					break;
				
				case joaat("component_ceramicpistol_clip_02"):
					return 556;
					break;
				
				case joaat("component_ceramicpistol_supp"):
					return 557;
					break;
			}
			break;
		
		case joaat("weapon_combatshotgun"):
			switch (iParam0)
			{
				case joaat("component_combatshotgun_clip_01"):
					return 559;
				
				case joaat("component_at_ar_flsh"):
					return 560;
					break;
				
				case joaat("component_at_ar_supp"):
					return 561;
					break;
			}
			break;
		
		case joaat("weapon_militaryrifle"):
			switch (iParam0)
			{
				case joaat("component_militaryrifle_clip_01"):
					return 562;
					break;
				
				case joaat("component_militaryrifle_clip_02"):
					return 563;
					break;
				
				case joaat("component_militaryrifle_sight_01"):
					return 564;
					break;
				
				case joaat("component_at_scope_small"):
					return 565;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 566;
					break;
				
				case joaat("component_at_ar_supp"):
					return 567;
					break;
			}
			break;
		
		case joaat("weapon_gadgetpistol"):
			switch (iParam0)
			{
				case joaat("component_gadgetpistol_clip_01"):
					return 558;
					break;
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			switch (iParam0)
			{
				case joaat("component_heavyrifle_clip_01"):
					return 99;
					break;
				
				case joaat("component_heavyrifle_clip_02"):
					return 100;
					break;
				
				case joaat("component_heavyrifle_camo1"):
					return 568;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 101;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 102;
					break;
				
				case joaat("component_at_scope_medium"):
					return 103;
					break;
				
				case joaat("component_at_ar_supp"):
					return 104;
					break;
				
				case joaat("component_heavyrifle_sight_01"):
					return 572;
					break;
			}
			break;
		
		case joaat("weapon_tacticalrifle"):
			switch (iParam0)
			{
				case joaat("component_tacticalrifle_clip_01"):
					return 573;
					break;
				
				case joaat("component_tacticalrifle_clip_02"):
					return 574;
					break;
				
				case joaat("component_at_ar_flsh_reh"):
					return 575;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 576;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 577;
					break;
			}
			break;
		
		case joaat("weapon_pistolxm3"):
			switch (iParam0)
			{
				case joaat("component_pistolxm3_clip_01"):
					return 578;
					break;
				
				case joaat("component_pistolxm3_supp"):
					return 579;
					break;
			}
			break;
		
		case 350597077:
			switch (iParam0)
			{
				case 943088878:
					return 607;
					break;
				
				case 310778254:
					return 608;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 609;
					break;
				
				case joaat("component_at_scope_macro"):
					return 610;
					break;
			}
			break;
		
		case joaat("weapon_railgunxm3"):
			switch (iParam0)
			{
				case joaat("component_railgunxm3_clip_01"):
					return 580;
					break;
			}
			break;
		
		case joaat("weapon_bat"):
			switch (iParam0)
			{
				case joaat("component_bat_varmod_xm3"):
					return 581;
					break;
				
				case joaat("component_bat_varmod_xm3_01"):
					return 583;
					break;
				
				case joaat("component_bat_varmod_xm3_02"):
					return 584;
					break;
				
				case joaat("component_bat_varmod_xm3_03"):
					return 585;
					break;
				
				case joaat("component_bat_varmod_xm3_04"):
					return 586;
					break;
				
				case joaat("component_bat_varmod_xm3_05"):
					return 587;
					break;
				
				case joaat("component_bat_varmod_xm3_06"):
					return 588;
					break;
				
				case joaat("component_bat_varmod_xm3_07"):
					return 589;
					break;
				
				case joaat("component_bat_varmod_xm3_08"):
					return 590;
					break;
				
				case joaat("component_bat_varmod_xm3_09"):
					return 591;
					break;
			}
			break;
		
		case joaat("weapon_knife"):
			switch (iParam0)
			{
				case joaat("component_knife_varmod_xm3"):
					return 582;
					break;
				
				case joaat("component_knife_varmod_xm3_01"):
					return 592;
					break;
				
				case joaat("component_knife_varmod_xm3_02"):
					return 593;
					break;
				
				case joaat("component_knife_varmod_xm3_03"):
					return 594;
					break;
				
				case joaat("component_knife_varmod_xm3_04"):
					return 595;
					break;
				
				case joaat("component_knife_varmod_xm3_05"):
					return 596;
					break;
				
				case joaat("component_knife_varmod_xm3_06"):
					return 597;
					break;
				
				case joaat("component_knife_varmod_xm3_07"):
					return 598;
					break;
				
				case joaat("component_knife_varmod_xm3_08"):
					return 599;
					break;
				
				case joaat("component_knife_varmod_xm3_09"):
					return 600;
					break;
			}
			break;
		
		case joaat("weapon_rpg"):
			switch (iParam0)
			{
				case -1240142720:
					return 606;
					break;
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			switch (iParam0)
			{
				case -1675905033:
					return 617;
					break;
			}
			break;
		
		case joaat("weapon_battlerifle"):
			switch (iParam0)
			{
				case -292433650:
					return 611;
					break;
				
				case 494808810:
					return 612;
					break;
				
				case joaat("component_at_ar_supp"):
					return 616;
					break;
			}
			break;
	}
	return 0;
}

var func_64(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_11(func_65(iParam0, iParam1), iParam2);
	return uVar0;
}

int func_65(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_62(iParam0, iParam1);
	iVar1 = func_68(iVar0);
	if ((func_67() == 0 || func_66() == 0) || (func_67() == 999 && func_66() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 811;
				break;
			
			case 1:
				return 812;
				break;
			
			case 2:
				return 813;
				break;
			
			case 3:
				return 814;
				break;
			
			case 4:
				return 1753;
				break;
			
			case 5:
				return 2435;
				break;
			
			case 6:
				return 2828;
				break;
			
			case 7:
				return 5502;
				break;
			
			case 8:
				return 5506;
				break;
			
			case 9:
				return 5510;
				break;
			
			case 10:
				return 5623;
				break;
			
			case 11:
				return 5627;
				break;
			
			case 12:
				return 5631;
				break;
			
			case 13:
				return 5635;
				break;
			
			case 14:
				return 6374;
				break;
			
			case 15:
				return 6497;
				break;
			
			case 16:
				return 6517;
				break;
			
			case 17:
				return 6523;
				break;
			
			case 18:
				return 10273;
				break;
			
			case 19:
				return 12007;
				break;
			}
	}
	return 14835;
}

int func_66()
{
	return Global_32949;
}

int func_67()
{
	return Global_32948;
}

int func_68(int iParam0)
{
	return (iParam0 / 32);
}

bool func_69()
{
	return Global_1575062;
}

int func_70(int iParam0, bool bParam1)
{
	if (iParam0 == 58)
	{
		if (bParam1)
		{
			return Global_101585.f_329[58] < 5f;
		}
		return 1;
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (func_69())
	{
		return 0;
	}
	uVar0 = func_72(iParam0, iParam1, iParam2);
	iVar1 = func_62(iParam0, iParam1);
	return BitTest(uVar0, func_61(iVar1));
}

var func_72(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_11(func_73(iParam0, iParam1), iParam2);
	return uVar0;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_62(iParam0, iParam1);
	iVar1 = func_68(iVar0);
	if ((func_67() == 0 || func_66() == 0) || (func_67() == 999 && func_66() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 688;
				break;
			
			case 1:
				return 689;
				break;
			
			case 2:
				return 690;
				break;
			
			case 3:
				return 691;
				break;
			
			case 4:
				return 1755;
				break;
			
			case 5:
				return 2437;
				break;
			
			case 6:
				return 2830;
				break;
			
			case 7:
				return 5504;
				break;
			
			case 8:
				return 5508;
				break;
			
			case 9:
				return 5512;
				break;
			
			case 10:
				return 5625;
				break;
			
			case 11:
				return 5629;
				break;
			
			case 12:
				return 5633;
				break;
			
			case 13:
				return 5637;
				break;
			
			case 14:
				return 6376;
				break;
			
			case 15:
				return 6499;
				break;
			
			case 16:
				return 6519;
				break;
			
			case 17:
				return 6525;
				break;
			
			case 18:
				return 10275;
				break;
			
			case 19:
				return 12009;
				break;
		}
	}
	return 1755;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
		case 56:
		case 59:
		case 60:
			return 1;
		
		default:
	}
	return 0;
}

void func_75(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_76(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9A7818E159C72516();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xDF94727C5BBB298F(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_77(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_80(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xBCEDAE6CA2B2046E(iParam0, func_80(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x1149D67DB429787A(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x6C81F95CADD1E6D0(iParam0, Var4.f_0);
					Var4.f_4 = unk_0xB92D606AB30C334C(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xACBE463290141D49(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_79(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x5EDED4B3E1A48E68(iParam0, Var4.f_0, iVar2))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_79(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = unk_0xAFA659708600A8CD();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((unk_0xA40B513DA7201333(iVar5, &Var7) && !func_78(Var7.f_1)) && iVar9 < 51)
			{
				if (!unk_0x4BFA043D318BF9AE(Var7.f_0))
				{
					Var4.f_0 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x1149D67DB429787A(iParam0, Var4.f_0);
					if (unk_0x66B90BA528CFEBCE(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x6C81F95CADD1E6D0(iParam0, Var4.f_0);
						Var4.f_4 = unk_0xB92D606AB30C334C(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xACBE463290141D49(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x0A334014DFD4952C(iVar5))
					{
						if (unk_0x38A1582CAC3F4E95(iVar5, iVar1, &Var8))
						{
							if (!func_57(Var8.f_3))
							{
								if (unk_0x5EDED4B3E1A48E68(iParam0, Var4.f_0, Var8.f_3))
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x66B90BA528CFEBCE(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_78(int iParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
			case joaat("weapon_gadgetpistol"):
			case joaat("weapon_militaryrifle"):
			case joaat("weapon_combatshotgun"):
			case joaat("weapon_emplauncher"):
			case joaat("weapon_fertilizercan"):
			case joaat("weapon_stungun_mp"):
			case joaat("weapon_metaldetector"):
			case joaat("weapon_precisionrifle"):
			case joaat("weapon_tacticalrifle"):
			case joaat("weapon_pistolxm3"):
			case joaat("weapon_candycane"):
			case joaat("weapon_railgunxm3"):
			case 350597077:
			case joaat("weapon_battlerifle"):
			case joaat("weapon_snowlauncher"):
			case -624951259:
				return 1;
				break;
			}
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
				
				case 5:
					iVar0 = 1400690398;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
				
				case 5:
					iVar0 = joaat("component_appistol_varmod_security");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
				
				case 6:
					iVar0 = joaat("component_microsmg_varmod_security");
					break;
				
				case 7:
					iVar0 = joaat("component_microsmg_varmod_xm3");
					break;
				
				case 8:
					iVar0 = 1694268374;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
				
				case 10:
					iVar0 = 1605520746;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
				
				case 3:
					iVar0 = joaat("component_pumpshotgun_varmod_security");
					break;
				
				case 4:
					iVar0 = joaat("component_pumpshotgun_varmod_xm3");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 4:
					iVar0 = 221907180;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
				
				case 8:
					iVar0 = 302671608;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		case joaat("weapon_bat"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bat_varmod_xm3");
					break;
				
				case 1:
					iVar0 = joaat("component_bat_varmod_xm3_01");
					break;
				
				case 2:
					iVar0 = joaat("component_bat_varmod_xm3_02");
					break;
				
				case 3:
					iVar0 = joaat("component_bat_varmod_xm3_03");
					break;
				
				case 4:
					iVar0 = joaat("component_bat_varmod_xm3_04");
					break;
				
				case 5:
					iVar0 = joaat("component_bat_varmod_xm3_05");
					break;
				
				case 6:
					iVar0 = joaat("component_bat_varmod_xm3_06");
					break;
				
				case 7:
					iVar0 = joaat("component_bat_varmod_xm3_07");
					break;
				
				case 8:
					iVar0 = joaat("component_bat_varmod_xm3_08");
					break;
				
				case 9:
					iVar0 = joaat("component_bat_varmod_xm3_09");
					break;
			}
			break;
		
		case joaat("weapon_rpg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = -1240142720;
					break;
			}
			break;
		
		case joaat("weapon_battlerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = -292433650;
					break;
				
				case 1:
					iVar0 = 494808810;
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			switch (iParam1)
			{
				case 0:
					iVar0 = -1675905033;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_76(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x660FA55F8D417CAB(iVar1))
					{
						if (unk_0x737024F2814ABDDD(iVar1, iVar2, &Var5))
						{
							if (!func_57(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

float func_81(var uParam0)
{
	if (func_84(uParam0))
	{
		if (func_83(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_82(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_82(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = system::to_float(unk_0x1DD05E817C89C737());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		iVar2 = unk_0x7E3F74F641EE6B27();
		fVar3 = system::to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (system::to_float(unk_0x1DD05E817C89C737()) / 1000f);
}

bool func_83(var uParam0)
{
	return BitTest(*uParam0, 2);
}

bool func_84(var uParam0)
{
	return BitTest(*uParam0, 1);
}

int func_85()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_87())
	{
		return 1;
	}
	if (func_86())
	{
		return 1;
	}
	return func_4(124, -1);
}

bool func_86()
{
	return Global_1575071;
}

bool func_87()
{
	return Global_1575073;
}

void func_88()
{
	int iVar0;
	
	iVar0 = 1;
	while (iVar0 <= 49)
	{
		if (!unk_0x37088D2C63AC4C01(iVar0))
		{
			if (unk_0xF841B04B93D27BA9(iVar0))
			{
				func_116(iVar0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 51;
	while (iVar0 <= 59)
	{
		if (!unk_0x37088D2C63AC4C01(iVar0))
		{
			if (unk_0xF841B04B93D27BA9(iVar0))
			{
				func_116(iVar0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 70;
	while (iVar0 <= 77)
	{
		if (!unk_0x37088D2C63AC4C01(iVar0))
		{
			if (unk_0xF841B04B93D27BA9(iVar0))
			{
				func_116(iVar0, 1);
			}
		}
		iVar0++;
	}
}

bool func_89(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	uVar0 = func_90(iParam1);
	uVar1 = unk_0x38640D2193CB547F(uVar0);
	return BitTest(uVar1, iParam0);
}

int func_90(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_7();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

int func_91()
{
	if (func_93() && func_92(0))
	{
		return 1;
	}
	return 0;
}

var func_92(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_93()
{
	return func_92(func_7() + 1);
}

bool func_94(var uParam0)
{
	return uParam0->f_79 == 1;
}

void func_95(var uParam0)
{
	float fVar0;
	
	fVar0 = Global_4543383;
	uParam0->f_80 = (uParam0->f_80 + unk_0x0B852B0BF94A8DC1());
	if (!func_94(uParam0))
	{
		return;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
		return;
	}
	if (func_149(14))
	{
		fVar0 = 10f;
	}
	if (func_102(uParam0) < fVar0)
	{
		return;
	}
	if (func_100(uParam0, 0))
	{
		return;
	}
	if (func_98((*uParam0)[0]))
	{
		func_97(uParam0);
		func_96(uParam0);
		func_101(uParam0, 0);
	}
}

void func_96(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_100(uParam0, iVar0))
		{
			iVar0 = *uParam0 + 100;
		}
		iVar0++;
	}
}

void func_97(var uParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if (func_100(uParam0, 0))
	{
		return;
	}
	while (iVar0 < *uParam0)
	{
		(*uParam0)[(iVar0 - 1)] = (*uParam0)[iVar0];
		iVar0++;
	}
}

int func_98(int iParam0)
{
	if (unk_0x37088D2C63AC4C01(iParam0))
	{
		return 0;
	}
	if (func_149(14) && !func_99(iParam0))
	{
		return 0;
	}
	if (!unk_0x584E143398F9661C(iParam0))
	{
		return 0;
	}
	if (unk_0x37088D2C63AC4C01(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_100(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_101(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_102(var uParam0)
{
	return uParam0->f_80;
}

int func_103()
{
	float fVar0;
	
	if (unk_0x76CD105BCAC6EB9F() || Global_79389)
	{
		return 0;
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			fVar0 = unk_0x6FF69BB93DBFAF25();
			if (fVar0 > 0,01f && unk_0x761778199FE1211C())
			{
				func_122(14, system::floor((fVar0 * 100f)));
			}
			if (fVar0 >= 0,975f)
			{
				func_116(14, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_104(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

void func_105(bool bParam0)
{
	if (Global_79389)
	{
		if (bParam0)
		{
			func_9(bParam0);
		}
		func_3(bParam0);
		func_16(bParam0);
		if (bParam0)
		{
		}
	}
	func_115(bParam0);
	func_108(bParam0);
	func_107();
	func_106();
	if (bParam0)
	{
		if (func_84(&uLocal_58))
		{
		}
	}
}

int func_106()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x37088D2C63AC4C01(50))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (iVar0 + unk_0x4F256B9F00ACB695(joaat("first_person_cam_time")) * 24);
	iVar0 = (iVar0 + unk_0xDF21396D0886D8F7(joaat("first_person_cam_time")));
	iVar1 = (iVar1 + unk_0x4F256B9F00ACB695(joaat("mp_first_person_cam_time")) * 24);
	iVar1 = (iVar1 + unk_0xDF21396D0886D8F7(joaat("mp_first_person_cam_time")));
	if ((iVar0 + iVar1) >= 15)
	{
		func_116(50, 1);
		return 1;
	}
	return 0;
}

int func_107()
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(22))
	{
		return 0;
	}
	iVar0 = unk_0x2FED6B8DCEAE8D75();
	if (iVar0 > 0)
	{
		if (Global_33214 < iVar0)
		{
			if (Global_33214 >= 0)
			{
				func_122(22, iVar0);
			}
			Global_33214 = iVar0;
		}
	}
	if (unk_0x2FED6B8DCEAE8D75() >= 50)
	{
		func_116(22, 1);
		return 1;
	}
	return 0;
}

int func_108(bool bParam0)
{
	var uVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x37088D2C63AC4C01(17))
	{
		return 0;
	}
	uVar0[0] = func_114();
	uVar0[1] = func_113();
	uVar0[2] = func_112();
	uVar0[3] = func_111();
	uVar0[4] = func_110();
	uVar0[5] = func_109();
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (uVar0[iVar2])
		{
			iVar1++;
		}
		iVar2++;
	}
	unk_0xDF7F16323520B858(joaat("num_discipline_gold_earned"), &iVar3, -1);
	if (iVar1 > iVar3 && iVar1 > 0)
	{
		unk_0x1164A75E490C27B6(joaat("num_discipline_gold_earned"), iVar1, 1);
		func_122(17, iVar1);
	}
	if (bParam0)
	{
	}
	if (!uVar0[0])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[1])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[2])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[3])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[4])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	if (!uVar0[5])
	{
		if (bParam0)
		{
		}
		return 0;
	}
	func_116(17, 1);
	return 1;
}

int func_109()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_113969.f_1991[0 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		else if (Global_113969.f_1991[1 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		else if (Global_113969.f_1991[2 /*121*/][iVar0 /*10*/].f_8 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_110()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (Global_113969.f_19150[0 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		else if (Global_113969.f_19150[1 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		else if (Global_113969.f_19150[2 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_111()
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (BitTest(Global_113969.f_24979.f_1, bVar0))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int func_112()
{
	bool bVar0;
	
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 5)
	{
		if (BitTest(Global_113969.f_24982.f_2, bVar0))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int func_113()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_113969.f_19019.f_19[iVar0] == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_114()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_113969.f_20014[iVar0] == 1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_115(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x37088D2C63AC4C01(27))
	{
		return 0;
	}
	if (unk_0xDF7F16323520B858(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDF7F16323520B858(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xDF7F16323520B858(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xDF7F16323520B858(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x1164A75E490C27B6(joaat("num_cash_spent"), iVar1, 1);
		func_122(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_116(27, 1);
	return 1;
}

int func_116(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_117(iParam0, iParam1);
}

int func_117(int iParam0, int iParam1)
{
	if (func_149(14) && !func_99(iParam0))
	{
		return 0;
	}
	if (unk_0x37088D2C63AC4C01(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33199 != 0 && !Global_79389)
	{
		return 0;
	}
	if (func_94(&Global_4543384))
	{
		if (func_120(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_118(&Global_4543384, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x584E143398F9661C(iParam0))
		{
			return 0;
		}
		if (unk_0x37088D2C63AC4C01(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_118(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_149(14) && !func_99(iParam1))
	{
		return 0;
	}
	if (func_120(uParam0, iParam1))
	{
		return 0;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
	}
	func_155(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_119(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_119(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_149(14) && !func_99(iParam1))
	{
		return 0;
	}
	if (func_120(uParam0, iParam1))
	{
		return 0;
	}
	if (func_102(uParam0) < 0f)
	{
		func_101(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_100(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_120(var uParam0, int iParam1)
{
	return func_121(uParam0, iParam1) != -1;
}

int func_121(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_122(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xB3E8CE9ABB5AD331(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xE3872E56266EDEDC(iParam0, iParam1);
	}
	return 0;
}

int func_123(bool bParam0)
{
	int iVar0;
	
	iVar0 = (func_136(bParam0) + func_124(bParam0));
	if (bParam0)
	{
	}
	return iVar0;
}

int func_124(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	
	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_18577)
	{
		if (Global_113969.f_18577[iVar0 /*6*/].f_3 != -1 && func_134(iVar0, 7))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar5 = 0;
			while (iVar5 < func_132(iVar0, 7))
			{
				iVar7 = func_130(iVar0, 7, iVar5);
				if (!Global_64391[iVar7 /*13*/].f_7)
				{
					if (func_127(iVar7) == 1)
					{
						iVar4++;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_126(iVar4, iVar3, 0);
			iVar2 = func_125(fVar6);
			if (iVar0 >= 52 && iVar0 <= 56)
			{
				if (bParam0)
				{
				}
				iVar2 = Global_113969.f_2355[(iVar0 - 52) /*2*/];
				fVar6 = 0f;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_125(float fParam0)
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_126(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (system::to_float(iParam0) / system::to_float(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = system::to_float(system::ceil(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_127(int iParam0)
{
	if (func_128(iParam0, func_129(Global_64391[iParam0 /*13*/].f_4)))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_64391[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_113969.f_24907[4 /*4*/] == func_33())
	{
		Global_64391[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_64391[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_64391[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_64391[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (unk_0xDF7F16323520B858(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			return Global_92301[iParam0 /*34*/].f_17[iParam2];
			break;
		
		case 7:
			return func_131(iParam0, iParam2);
			break;
		
		default:
			break;
	}
	return 914;
}

int func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
				
				case 1:
					return 742;
				
				default:
			}
			return -1;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
				
				case 1:
					return 744;
				
				default:
			}
			return -1;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
				
				case 1:
					return 746;
				
				default:
			}
			return -1;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
				
				case 1:
					return 748;
				
				default:
			}
			return -1;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
				
				default:
			}
			return -1;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
				
				default:
			}
			return -1;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
				
				case 1:
					return 752;
				
				default:
			}
			return -1;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
				
				case 1:
					return 754;
				
				default:
			}
			return -1;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
				
				case 1:
					return 756;
				
				case 2:
					return 757;
				
				default:
			}
			return -1;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
				
				case 1:
					return 759;
				
				default:
			}
			return -1;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
				
				case 1:
					return 761;
				
				default:
			}
			return -1;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
				
				default:
			}
			return -1;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
				
				default:
			}
			return -1;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
				
				case 1:
					return 765;
				
				default:
			}
			return -1;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
				
				default:
			}
			return -1;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
				
				case 1:
					return 768;
				
				case 2:
					return 769;
				
				default:
			}
			return -1;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
				
				case 1:
					return 771;
				
				default:
			}
			return -1;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
				
				case 1:
					return 773;
				
				default:
			}
			return -1;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
				
				case 1:
					return 775;
				
				default:
			}
			return -1;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
				
				case 1:
					return 777;
				
				default:
			}
			return -1;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
				
				case 1:
					return 779;
				
				default:
			}
			return -1;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
				
				case 1:
					return 781;
				
				case 2:
					return 782;
				
				default:
			}
			return -1;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
				
				case 1:
					return 784;
				
				default:
			}
			return -1;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
				
				case 1:
					return 786;
				
				default:
			}
			return -1;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
				
				case 1:
					return 788;
				
				default:
			}
			return -1;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
				
				default:
			}
			return -1;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
				
				case 1:
					return 791;
				
				case 2:
					return 792;
				
				default:
			}
			return -1;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
				
				case 1:
					return 794;
				
				case 2:
					return 795;
				
				default:
			}
			return -1;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
				
				case 1:
					return 797;
				
				default:
			}
			return -1;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
				
				case 1:
					return 799;
				
				default:
			}
			return -1;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
				
				case 1:
					return 801;
				
				default:
			}
			return -1;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
				
				case 1:
					return 803;
				
				default:
			}
			return -1;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
				
				case 1:
					return 805;
				
				default:
			}
			return -1;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
				
				default:
			}
			return -1;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
				
				case 1:
					return 808;
				
				case 2:
					return 809;
				
				default:
			}
			return -1;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
				
				case 1:
					return 829;
				
				case 2:
					return 830;
				
				default:
			}
			return -1;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
				
				case 1:
					return 832;
				
				case 2:
					return 833;
				
				default:
			}
			return -1;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
				
				case 1:
					return 835;
				
				case 2:
					return 836;
				
				default:
			}
			return -1;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
				
				case 1:
					return 838;
				
				case 2:
					return 839;
				
				default:
			}
			return -1;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
				
				case 1:
					return 841;
				
				case 2:
					return 842;
				
				default:
			}
			return -1;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
				
				case 1:
					return 844;
				
				case 2:
					return 845;
				
				default:
			}
			return -1;
		
		default:
	}
	return -1;
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return Global_92301[iParam0 /*34*/].f_16;
			break;
		
		case 7:
			return func_133(iParam0);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		
		case 3:
			return 2;
		
		case 5:
			return 2;
		
		case 6:
			return 2;
		
		case 8:
			return 1;
		
		case 12:
			return 1;
		
		case 14:
			return 2;
		
		case 16:
			return 2;
		
		case 17:
			return 3;
		
		case 18:
			return 2;
		
		case 19:
			return 2;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 2;
		
		case 23:
			return 1;
		
		case 25:
			return 3;
		
		case 26:
			return 2;
		
		case 28:
			return 2;
		
		case 29:
			return 2;
		
		case 30:
			return 2;
		
		case 32:
			return 2;
		
		default:
	}
	switch (iParam0)
	{
		case 33:
			return 3;
		
		case 34:
			return 2;
		
		case 38:
			return 2;
		
		case 39:
			return 2;
		
		case 40:
			return 1;
		
		case 41:
			return 3;
		
		case 42:
			return 3;
		
		case 43:
			return 2;
		
		case 46:
			return 2;
		
		case 47:
			return 2;
		
		case 49:
			return 2;
		
		case 50:
			return 2;
		
		case 51:
			return 1;
		
		case 57:
			return 3;
		
		case 58:
			return 3;
		
		case 59:
			return 3;
		
		case 60:
			return 3;
		
		case 61:
			return 3;
		
		case 62:
			return 3;
		
		case 24:
			return 3;
		
		default:
	}
	return 0;
}

int func_134(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return !BitTest(Global_92301[iParam0 /*34*/].f_15, 5);
			break;
		
		case 7:
			return func_135(iParam0);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_136(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	iVar3 = 0;
	iVar4 = 0;
	if (bParam0)
	{
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_9088.f_330)
	{
		if (Global_113969.f_9088.f_330[iVar0 /*6*/].f_3 != -1 && func_134(iVar0, 1))
		{
			iVar3 = 0;
			iVar4 = 0;
			iVar8 = -1;
			iVar5 = 0;
			while (iVar5 < func_132(iVar0, 1))
			{
				iVar7 = func_130(iVar0, 1, iVar5);
				if (!Global_64391[iVar7 /*13*/].f_7)
				{
					if (func_127(iVar7) == 1)
					{
						iVar4++;
					}
					switch (iVar7)
					{
						case 42:
						case 55:
						case 85:
						case 70:
						case 101:
							iVar8 = func_137(iVar7);
							if (iVar8 >= 2147483647)
							{
								iVar8 = 1;
							}
							break;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_126(iVar4, iVar3, 0);
			iVar2 = func_125(fVar6);
			if (iVar8 > -1)
			{
				iVar2 = iVar8;
			}
			if (fVar6 >= 100f || iVar2 == 3)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_137(int iParam0)
{
	int iVar0;
	
	iVar0 = func_129(Global_64391[iParam0 /*13*/].f_4);
	if (iVar0 > -2)
	{
		return iVar0;
	}
	return 0;
}

void func_138()
{
	var uVar0;
	int iVar1;
	
	unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0);
	if (!unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
	{
		return;
	}
	if (unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "creatures@shark@move", "attack_player", 3))
	{
		func_116(25, 1);
		return;
	}
	if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		uVar0 = unk_0x836392D80E4F106A(unk_0x4A8C381C258A124D());
		if (unk_0x0101C509A6E67F99(uVar0))
		{
			iVar1 = unk_0xBD545F8729E9F413(uVar0);
			if (func_139(iVar1))
			{
				if (unk_0x4B423FAA24E8ABF0(iVar1) == joaat("a_c_sharktiger"))
				{
					func_116(25, 1);
					return;
				}
			}
		}
	}
}

bool func_139(int iParam0)
{
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	return !unk_0x1C2F771CDC87A3A5(iParam0, 0);
}

void func_140()
{
	switch (iLocal_55)
	{
		case 0:
			fLocal_63 = 0f;
			if (!unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
			{
				return;
			}
			if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				return;
			}
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) >= 3 && unk_0x3D2EB53CF281A77E() == 0)
			{
				if (func_145() == 2)
				{
					func_152(&uLocal_58);
					iLocal_55++;
				}
			}
			break;
		
		case 1:
			if (func_144() || unk_0x3555462DB47B7AB1())
			{
				return;
			}
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 3)
			{
				func_143(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (unk_0x3D2EB53CF281A77E() == 1)
			{
				func_143(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (func_145() < 2)
			{
				func_143(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
			{
				func_143(&uLocal_58);
				iLocal_55 = 0;
				return;
			}
			fLocal_63 = func_142(&uLocal_58);
			if (fLocal_63 >= 180f)
			{
				func_116(24, 1);
				func_141(&uLocal_58);
				iLocal_55++;
			}
			break;
		
		case 2:
			iLocal_55++;
			break;
	}
}

void func_141(var uParam0)
{
	if (func_84(uParam0))
	{
		if (!func_83(uParam0))
		{
			uParam0->f_2 = (func_82(BitTest(*uParam0, 4)) - uParam0->f_1);
			unk_0x0B0C9A0F9AAEB7F0(uParam0, 2);
		}
	}
}

float func_142(var uParam0)
{
	if (func_84(uParam0))
	{
		if (func_83(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_82(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_143(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_144()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_145()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_147(2);
	if (func_146(iVar1, 0) || BitTest(Global_97364, 2))
	{
		iVar0++;
	}
	iVar1 = func_147(1);
	if (func_146(iVar1, 0) || BitTest(Global_97364, 1))
	{
		iVar0++;
	}
	iVar1 = func_147(0);
	if (func_146(iVar1, 0) || BitTest(Global_97364, 0))
	{
		iVar0++;
	}
	return iVar0;
}

int func_146(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		bVar0 = func_35(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_147(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x4A8C381C258A124D())
			{
				return 0;
			}
		}
		if (BitTest(Global_97366, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_147(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_33())
	{
		return unk_0x4A8C381C258A124D();
	}
	return Global_98991[func_148(iParam0)];
}

int func_148(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

bool func_149(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_150(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

var func_151()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

void func_152(var uParam0)
{
	func_153(uParam0, 0f);
}

void func_153(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_82(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_154(var uParam0, int iParam1)
{
	uParam0->f_79 = iParam1;
	if (uParam0->f_79)
	{
		func_101(uParam0, 0);
	}
}

void func_155(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_156(uParam0, iVar0);
		iVar0++;
	}
	func_101(uParam0, (Global_4543383 - 0,5f));
}

void func_156(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_157()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 78;
	iVar0 = 1;
	while (iVar0 <= (iVar1 - 1))
	{
		if (unk_0x37088D2C63AC4C01(iVar0))
		{
		}
		iVar0++;
	}
}

void func_158(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

