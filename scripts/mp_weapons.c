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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
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
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65[72] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0,0375f;
	fLocal_32 = 0,17f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0,05f + 0,275f) - 0,01f);
	iLocal_63 = 4;
	iLocal_64 = 12;
	if (func_164() == 2)
	{
		while (true)
		{
			system::wait(0);
		}
	}
	unk_0xB1A3B2B046340845(1);
	unk_0x51CC1333A10C4E09();
	Global_1574600 = 1;
	iVar0 = 0;
	Global_1666925.f_281 = 1;
	Global_1666627.f_1 = 0;
	Global_1666627.f_3 = 0;
	Global_1666627.f_5 = 0;
	func_162(&Global_1666925);
	func_161(&Global_1666925);
	func_160(&Global_1666925);
	func_156();
	func_155(0, &Global_1666925);
	unk_0xA4F67CEB594AE064(7);
	unk_0x9BC444D671469DCD(337714004);
	unk_0x9BC444D671469DCD(-1884422346);
	unk_0x3F85C0CA5FE1527D(0);
	func_153();
	iVar5 = 1;
	switch (iScriptParam_68)
	{
		case 3:
			while (iVar0 == 0)
			{
				system::wait(0);
				if (iVar5 == 1)
				{
					if (iVar6 == 0)
					{
						if (unk_0x1CF551BF1611A6F6())
						{
							unk_0x26CE50366B7C2760();
							iVar6 = 1;
						}
					}
				}
				if (func_152(201))
				{
					if (iVar5 == 0)
					{
						unk_0xBF3D28CA44F3BE2D(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						Global_1666627.f_1 = 0;
						Global_1666627.f_3 = 0;
						iVar5 = 1;
						func_155(0, &Global_1666925);
						func_161(&Global_1666925);
						func_160(&Global_1666925);
						func_151(&Global_1666925, &Global_1666627);
						unk_0xF3F7B05FC4684A7C("MENU_SHIFT_DEPTH");
						unk_0x330108B080A2132F(1);
						unk_0xE6B753D52F4CA222();
					}
				}
				if (iVar5 == 0)
				{
					if (func_152(189) || func_152(190))
					{
						iVar0 = 1;
					}
				}
				if (func_152(202))
				{
					func_149();
					if (iVar5 == 1)
					{
						unk_0xF3F7B05FC4684A7C("MENU_SHIFT_DEPTH");
						unk_0x330108B080A2132F(-1);
						unk_0xE6B753D52F4CA222();
						unk_0xBF3D28CA44F3BE2D(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						unk_0xB4CD52D6B8305BD4(337714004);
						unk_0x3F85C0CA5FE1527D(0);
						func_161(&Global_1666925);
						func_160(&Global_1666925);
						func_155(-1, &Global_1666925);
						iVar5 = 0;
					}
					else
					{
						unk_0xBF3D28CA44F3BE2D(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						iVar0 = 1;
						unk_0x9A6119E875538DA1();
					}
				}
				if (unk_0x6462E92135CA5CC1())
				{
					unk_0xB6249BA74349F6AB(&iVar2, &uVar3);
				}
				if (unk_0x0A5BC2689B1DF62B())
				{
					unk_0xE869B507D3624306(&uVar1, &iVar2, &uVar3);
					iVar4 = iVar2 + 1000;
					if (iVar4 >= 0)
					{
						if (iVar4 >= 9)
						{
							iVar4 = 8;
						}
						Global_1666627.f_1 = (iVar4 % 3);
						Global_1666627.f_3 = (iVar4 / 3);
						func_155(iVar4, &Global_1666925);
						func_160(&Global_1666925);
					}
				}
				unk_0xD0D00ED689D6CA81("MPWeaponsCommon", 0);
				unk_0xD0D00ED689D6CA81("MPWeaponsGang0", 0);
				unk_0xD0D00ED689D6CA81("MPWeaponsGang1", 0);
				func_9(&Global_1666925, &Global_1666627);
				if (iVar5 == 1)
				{
					func_1(&Global_1666925, &Global_1666627, &uLocal_66);
				}
			}
			break;
		
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
	unk_0x9A6119E875538DA1();
	unk_0xB1A3B2B046340845(0);
	Global_1574600 = 0;
	unk_0xA4F67CEB594AE064(4);
	while (true)
	{
		system::wait(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_8(uParam2) || (func_8(uParam2) && func_7(uParam2, 250, 0)))
	{
		iVar0 = 1;
	}
	if ((unk_0x6D05C5731A838CB3(2, 187) || func_6(187, &(Global_1668667.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_285), false);
	}
	if ((unk_0x6D05C5731A838CB3(2, 188) || func_6(188, &(Global_1668667.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_285), true);
	}
	if (((unk_0x6D05C5731A838CB3(2, 189) || unk_0x6D05C5731A838CB3(2, 241)) || func_6(189, &(Global_1668667.f_1060), 1)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_285), 2);
	}
	if (((unk_0x6D05C5731A838CB3(2, 190) || unk_0x6D05C5731A838CB3(2, 242)) || func_6(190, &(Global_1668667.f_1060), 1)) && iVar0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_285), 3);
		func_5(uParam2);
		func_4(uParam2, 0, 0);
	}
	if (BitTest(uParam0->f_285, 1))
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_285), true);
		unk_0xBF3D28CA44F3BE2D(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		uParam1->f_3 = (uParam1->f_3 - 1);
		if (uParam1->f_3 < 0)
		{
			uParam1->f_3 = 2;
		}
		func_155(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
		func_161(uParam0);
		func_160(uParam0);
		func_151(uParam0, uParam1);
	}
	if (BitTest(uParam0->f_285, 0))
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_285), false);
		unk_0xBF3D28CA44F3BE2D(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		uParam1->f_3++;
		if (uParam1->f_3 > 2)
		{
			uParam1->f_3 = 0;
		}
		func_155(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
		func_161(uParam0);
		func_160(uParam0);
		func_151(uParam0, uParam1);
	}
	if (BitTest(uParam0->f_285, 2))
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_285), 2);
		uParam1->f_1 = (uParam1->f_1 - 1);
		if (uParam1->f_1 < 0)
		{
			if (iLocal_63 > 1)
			{
				func_162(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			if (uParam1->f_5 > 0)
			{
				uParam1->f_5 = (uParam1->f_5 - 1);
				uParam1->f_1 = 2;
			}
			else
			{
				uParam1->f_5 = iLocal_63;
				uParam1->f_1 = 2;
				iVar1 = (uParam1->f_1 + uParam1->f_3 * 3);
				if (iVar1 >= iLocal_64)
				{
					uParam1->f_1 = ((iLocal_64 - 1) % 3);
					uParam1->f_3 = ((iLocal_64 - 1) / 3);
				}
			}
		}
		unk_0xBF3D28CA44F3BE2D(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_155(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
		func_161(uParam0);
		func_160(uParam0);
		func_151(uParam0, uParam1);
	}
	if (BitTest(uParam0->f_285, 3))
	{
		unk_0x8744D2E3FC95740E(&(uParam0->f_285), 3);
		uParam1->f_1++;
		iVar2 = (uParam1->f_1 + uParam1->f_3 * 3);
		if (uParam1->f_1 > 2 || (uParam1->f_5 == iLocal_63 && iVar2 >= iLocal_64))
		{
			if (iLocal_63 > 1)
			{
				func_162(uParam0);
				*uParam0 = 0;
				func_2(uParam0);
			}
			uParam1->f_1 = 0;
			uParam1->f_5++;
			if (uParam1->f_5 > iLocal_63)
			{
				uParam1->f_5 = 0;
			}
		}
		unk_0xBF3D28CA44F3BE2D(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_155(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
		func_161(uParam0);
		func_160(uParam0);
		func_151(uParam0, uParam1);
	}
}

void func_2(var uParam0)
{
	uParam0->f_281 = 0;
}

int func_3(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (*uParam0 + *uParam1 * 3);
	switch (iParam3)
	{
		case 188:
			if (iParam2 == iLocal_63)
			{
				if (iVar0 > (iLocal_64 - 1))
				{
					*uParam1 = 0;
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 187:
			if (iParam2 == iLocal_63)
			{
				if (iVar0 > (iLocal_64 - 1))
				{
					if (*uParam1 > 0)
					{
						*uParam1 = (*uParam1 - 1);
					}
					else
					{
						*uParam1 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 189:
			break;
		
		case 190:
			if (iParam2 == iLocal_63)
			{
				if (*uParam0 == 0)
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 > (iLocal_64 - 1))
						{
							*uParam1 = (*uParam1 - 1);
							iVar0 = (*uParam0 + *uParam1 * 3);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
				else if (iVar0 > (iLocal_64 - 1))
				{
					if (*uParam0 > 0)
					{
						*uParam0 = (*uParam0 - 1);
					}
					else
					{
						*uParam0 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
	}
	return iVar0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				*uParam0 = unk_0x0728E77B2BF91D54();
			}
		}
		else
		{
			*uParam0 = unk_0x1DD05E817C89C737();
		}
		uParam0->f_1 = 1;
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (unk_0x6C29A57AC29D7033(2, 195) - 127);
	iVar1 = (unk_0x6C29A57AC29D7033(2, 196) - 127);
	iVar2 = (unk_0x6C29A57AC29D7033(2, 197) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < unk_0x1DD05E817C89C737() || iParam2 == 0)
				{
					*uParam1 = unk_0x1DD05E817C89C737() + 250;
					return 1;
				}
			}
			break;
		
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < unk_0x1DD05E817C89C737() || iParam2 == 0)
				{
					*uParam1 = unk_0x1DD05E817C89C737() + 250;
					return 1;
				}
			}
			break;
		
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < unk_0x1DD05E817C89C737() || iParam2 == 0)
				{
					*uParam1 = unk_0x1DD05E817C89C737() + 250;
					return 1;
				}
			}
			break;
		
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < unk_0x1DD05E817C89C737() || iParam2 == 0)
				{
					*uParam1 = unk_0x1DD05E817C89C737() + 250;
					return 1;
				}
			}
			break;
		
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < unk_0x1DD05E817C89C737() || iParam2 == 0)
				{
					*uParam1 = unk_0x1DD05E817C89C737() + 250;
					return 1;
				}
			}
			break;
		
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < unk_0x1DD05E817C89C737() || iParam2 == 0)
				{
					*uParam1 = unk_0x1DD05E817C89C737() + 250;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9(var uParam0, var uParam1)
{
	if ((unk_0x38D063D8CF6D1967("MPWeaponsCommon") && unk_0x38D063D8CF6D1967("MPWeaponsGang0")) && unk_0x38D063D8CF6D1967("MPWeaponsGang1"))
	{
		if (func_148(8, -1) == 0)
		{
			*uParam1 = func_147();
		}
		func_153();
		switch (uParam1->f_5)
		{
			case 0:
				if (!uParam0->f_1[0])
				{
					func_111(joaat("weapon_pistol"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_combatpistol"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_appistol"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_microsmg"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_smg"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_assaultrifle"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_carbinerifle"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_advancedrifle"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_mg"), uParam0, *uParam1, 0);
				}
				break;
			
			case 1:
				if (!uParam0->f_1[0])
				{
					func_111(joaat("weapon_combatmg"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_assaultsmg"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_pumpshotgun"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_assaultshotgun"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_sniperrifle"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_heavysniper"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_grenadelauncher"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_minigun"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_rpg"), uParam0, *uParam1, 0);
				}
				break;
			
			case 2:
				if (!uParam0->f_1[0])
				{
					func_111(joaat("weapon_knife"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_nightstick"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_bat"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_crowbar"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_golfclub"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_molotov"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_grenade"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_smokegrenade"), uParam0, *uParam1, 0);
					func_111(joaat("weapon_stickybomb"), uParam0, *uParam1, 0);
				}
				break;
			
			default:
				if (!uParam0->f_1[0])
				{
					func_99(uParam0, uParam1);
				}
				break;
		}
		func_10(uParam0, func_98(uParam0));
	}
}

void func_10(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_2(uParam0);
	}
	if (*uParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 8)
		{
			iVar5 = 0;
			iVar6 = 0;
			iVar7 = 0;
			if (uParam0->f_1[iVar0] == 1)
			{
				if (uParam0->f_85[iVar0] != 0)
				{
					if (func_97(uParam0->f_85[iVar0]))
					{
						if (func_95(joaat("component_gunrun_mk2_upgrade"), func_96(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_91(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
				}
				bVar3 = func_88(uParam0->f_85[iVar0], uParam0->f_276, 0);
				iVar1 = 0;
				while (iVar1 <= 35)
				{
					iVar4 = func_86(uParam0->f_85[iVar0], iVar1);
					if (!bVar3)
					{
						func_70(iVar4, uParam0->f_85[iVar0], 0, 0, 0);
						func_65(iVar4, uParam0->f_85[iVar0], 0);
						func_59(iVar4, uParam0->f_85[iVar0], 0);
					}
					if (unk_0x1B79E937E91F40C3(func_58(iVar4, uParam0->f_85[iVar0]), "WCT_CLIP1"))
					{
						func_70(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_65(iVar4, uParam0->f_85[iVar0], 1);
							func_59(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if (unk_0x1B79E937E91F40C3(func_58(iVar4, uParam0->f_85[iVar0]), "WCT_SCOPE_LRG"))
					{
						func_70(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						if (!bVar3)
						{
							func_65(iVar4, uParam0->f_85[iVar0], 1);
							func_59(iVar4, uParam0->f_85[iVar0], 1);
						}
					}
					if ((uParam0->f_85[iVar0] == joaat("weapon_bullpupshotgun") || uParam0->f_85[iVar0] == joaat("weapon_pistol50")) || uParam0->f_85[iVar0] == joaat("weapon_snspistol"))
					{
						func_70(iVar4, uParam0->f_85[iVar0], 1, 0, 0);
						func_65(iVar4, uParam0->f_85[iVar0], 1);
						func_59(iVar4, uParam0->f_85[iVar0], 1);
					}
					if (bVar3 && func_53(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (bVar2 && func_95(iVar4, uParam0->f_85[iVar0], uParam0->f_276))
						{
							iVar5 = (iVar5 + func_51(iVar4, uParam0->f_85[iVar0], 8));
							iVar6 = (iVar6 + func_49(iVar4, uParam0->f_85[iVar0], 8));
							iVar7 = (iVar7 + func_47(iVar4, uParam0->f_85[iVar0], 8));
						}
					}
					else if (iVar4 != 0)
					{
						iVar5 = (iVar5 + func_51(iVar4, uParam0->f_85[iVar0], 4));
						iVar6 = (iVar6 + func_49(iVar4, uParam0->f_85[iVar0], 4));
						iVar7 = (iVar7 + func_47(iVar4, uParam0->f_85[iVar0], 4));
					}
					iVar1++;
				}
			}
			iVar8 = 0;
			if (uParam0->f_85[iVar0] != 0)
			{
				if (bVar3)
				{
					if (func_97(uParam0->f_85[iVar0]))
					{
						if (func_95(joaat("component_gunrun_mk2_upgrade"), func_96(uParam0->f_85[iVar0]), -1))
						{
							bVar2 = true;
						}
						else
						{
							bVar2 = false;
						}
					}
					else if (func_91(uParam0->f_85[iVar0], uParam0->f_276, 0))
					{
						bVar2 = true;
					}
					else
					{
						bVar2 = false;
					}
					if (((bVar2 || (uParam0->f_85[iVar0] == joaat("weapon_pistol") && unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_pistol"), 0))) || func_45(uParam0->f_85[iVar0])) || func_27(uParam0->f_85[iVar0], uParam0->f_276))
					{
						if (func_97(uParam0->f_85[iVar0]))
						{
							if (bVar2)
							{
								iVar8++;
							}
							else
							{
								iVar8 += 2;
							}
						}
						else
						{
							iVar8++;
						}
					}
					else
					{
						iVar8 += 2;
					}
				}
				else
				{
					iVar8 += 4;
				}
			}
			if (uParam0->f_1[iVar0] == 0 || unk_0x1B79E937E91F40C3(func_24(uParam0->f_85[iVar0], 0), func_24(0, 0)))
			{
				iVar8 = 0;
			}
			unk_0xF3F7B05FC4684A7C("SET_DATA_SLOT");
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(iVar0);
			unk_0x330108B080A2132F(iVar0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(uParam0->f_85[iVar0]);
			unk_0x330108B080A2132F(iVar5);
			unk_0x330108B080A2132F(iVar8);
			unk_0x330108B080A2132F(iVar6);
			unk_0x330108B080A2132F(iVar7);
			unk_0xE6B753D52F4CA222();
			iVar0++;
		}
		unk_0xF3F7B05FC4684A7C("DISPLAY_DATA_SLOT");
		unk_0x330108B080A2132F(0);
		unk_0xE6B753D52F4CA222();
		*uParam0 = 1;
	}
	func_21(uParam0, func_23(uParam0));
	func_14(uParam0, func_20(uParam0));
	func_11(uParam0, func_13(uParam0));
}

void func_11(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_279 = 0;
		func_12(uParam0);
	}
	if (uParam0->f_279 == 0)
	{
		unk_0xF3F7B05FC4684A7C("SET_COLUMN_HIGHLIGHT");
		unk_0x330108B080A2132F(0);
		unk_0x330108B080A2132F(uParam0->f_277);
		unk_0x557F1E2300EF1A3E(0);
		unk_0x557F1E2300EF1A3E(1);
		unk_0x557F1E2300EF1A3E(1);
		unk_0xE6B753D52F4CA222();
		uParam0->f_279 = 1;
	}
}

void func_12(var uParam0)
{
	uParam0->f_283 = 0;
}

int func_13(var uParam0)
{
	return uParam0->f_283;
}

void func_14(var uParam0, int iParam1)
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, " ", 16);
	if (iParam1 == 1)
	{
		uParam0->f_280 = 0;
		func_19(uParam0);
	}
	if (uParam0->f_280 == 0)
	{
		if (uParam0->f_277 > -1)
		{
			unk_0xF3F7B05FC4684A7C("SET_DESCRIPTION");
			iVar1 = (uParam0->f_215[uParam0->f_277] - uParam0->f_165[uParam0->f_277]);
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
			unk_0x330108B080A2132F(0);
			func_18(&(uParam0->f_11[uParam0->f_277 /*4*/]));
			func_18(&(uParam0->f_48[uParam0->f_277 /*4*/]));
			unk_0x330108B080A2132F(uParam0->f_95[uParam0->f_277]);
			unk_0x330108B080A2132F(uParam0->f_105[uParam0->f_277]);
			unk_0x74BF156C860580D4(uParam0->f_135[uParam0->f_277]);
			unk_0x74BF156C860580D4(uParam0->f_115[uParam0->f_277]);
			unk_0x330108B080A2132F(uParam0->f_145[uParam0->f_277]);
			unk_0x330108B080A2132F(uParam0->f_155[uParam0->f_277]);
			unk_0x330108B080A2132F(uParam0->f_165[uParam0->f_277]);
			unk_0x330108B080A2132F(uParam0->f_185[uParam0->f_277]);
			unk_0x330108B080A2132F(uParam0->f_195[uParam0->f_277]);
			unk_0x330108B080A2132F(uParam0->f_205[uParam0->f_277]);
			unk_0x330108B080A2132F(uParam0->f_225[uParam0->f_277]);
			unk_0x330108B080A2132F(iVar1);
			unk_0x330108B080A2132F(uParam0->f_125[uParam0->f_277]);
			unk_0x330108B080A2132F(uParam0->f_175[uParam0->f_277]);
			unk_0x330108B080A2132F(uParam0->f_235[uParam0->f_277]);
			unk_0x330108B080A2132F(func_16(uParam0->f_85[uParam0->f_277]));
			unk_0xE6B753D52F4CA222();
			if (func_15(uParam0->f_85[uParam0->f_277]))
			{
				unk_0xF3F7B05FC4684A7C("SET_COLUMN_TITLE");
				unk_0x330108B080A2132F(0);
				func_18(&Var0);
				unk_0x330108B080A2132F(2);
				unk_0xE6B753D52F4CA222();
				unk_0xF3F7B05FC4684A7C("SET_COLUMN_TITLE");
				unk_0x330108B080A2132F(0);
				func_18(&Var0);
				unk_0x330108B080A2132F(3);
				unk_0xE6B753D52F4CA222();
				unk_0xF3F7B05FC4684A7C("SET_COLUMN_TITLE");
				unk_0x330108B080A2132F(0);
				func_18(&Var0);
				unk_0x330108B080A2132F(4);
				unk_0xE6B753D52F4CA222();
				unk_0xF3F7B05FC4684A7C("SET_COLUMN_TITLE");
				unk_0x330108B080A2132F(0);
				func_18(&Var0);
				unk_0x330108B080A2132F(8);
				unk_0xE6B753D52F4CA222();
				unk_0xF3F7B05FC4684A7C("SET_COLUMN_TITLE");
				unk_0x330108B080A2132F(0);
				func_18(&Var0);
				unk_0x330108B080A2132F(9);
				unk_0xE6B753D52F4CA222();
			}
			else
			{
				unk_0xF3F7B05FC4684A7C("SET_COLUMN_TITLE");
				unk_0x330108B080A2132F(0);
				func_18("PM_ACCURACY");
				unk_0x330108B080A2132F(2);
				unk_0xE6B753D52F4CA222();
				unk_0xF3F7B05FC4684A7C("SET_COLUMN_TITLE");
				unk_0x330108B080A2132F(0);
				func_18("PM_RANGE");
				unk_0x330108B080A2132F(3);
				unk_0xE6B753D52F4CA222();
				unk_0xF3F7B05FC4684A7C("SET_COLUMN_TITLE");
				unk_0x330108B080A2132F(0);
				func_18("PM_CLIPSIZE");
				unk_0x330108B080A2132F(4);
				unk_0xE6B753D52F4CA222();
				unk_0xF3F7B05FC4684A7C("SET_COLUMN_TITLE");
				unk_0x330108B080A2132F(0);
				func_18("PM_KD_RATIO");
				unk_0x330108B080A2132F(7);
				unk_0xE6B753D52F4CA222();
				unk_0xF3F7B05FC4684A7C("SET_COLUMN_TITLE");
				unk_0x330108B080A2132F(0);
				func_18("PM_HEADSHOTS");
				unk_0x330108B080A2132F(8);
				unk_0xE6B753D52F4CA222();
				unk_0xF3F7B05FC4684A7C("SET_COLUMN_TITLE");
				unk_0x330108B080A2132F(0);
				func_18("PM_MY_ACCURACY");
				unk_0x330108B080A2132F(9);
				unk_0xE6B753D52F4CA222();
			}
		}
		uParam0->f_280 = 1;
	}
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_bat"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_grenade"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_molotov"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_proxmine"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_machete"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_switchblade"):
		case joaat("weapon_battleaxe"):
		case joaat("weapon_pipebomb"):
		case joaat("weapon_poolcue"):
		case joaat("weapon_wrench"):
		case joaat("weapon_stone_hatchet"):
		case joaat("weapon_candycane"):
		case -624951259:
			return 1;
			break;
	}
	return 0;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 0;
			break;
		
		case joaat("weapon_knife"):
			return 0;
			break;
		
		case joaat("weapon_microsmg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 29;
			break;
		
		case joaat("weapon_nightstick"):
			return 3;
			break;
		
		case joaat("weapon_combatpistol"):
			return 9;
			break;
		
		case joaat("weapon_smg"):
			return 11;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 24;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 21;
			break;
		
		case joaat("weapon_stickybomb"):
			return 0;
			break;
		
		case joaat("weapon_petrolcan"):
			return 20;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 17;
			break;
		
		case joaat("weapon_appistol"):
			return 33;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 0;
			break;
		
		case joaat("weapon_grenade"):
			return 0;
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_17(3741, -1))
			{
				return 0;
			}
			else
			{
				return 42;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 37;
			break;
		
		case joaat("weapon_molotov"):
			if (func_17(3741, -1))
			{
				return 0;
			}
			else
			{
				return 31;
			}
			break;
		
		case joaat("weapon_mg"):
			return 50;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 70;
			break;
		
		case joaat("weapon_combatmg"):
			return 80;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 60;
			break;
		
		case joaat("weapon_heavysniper"):
			return 90;
			break;
		
		case joaat("weapon_rpg"):
			return 100;
			break;
		
		case joaat("weapon_minigun"):
			return 120;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 0;
			break;
		
		case joaat("weapon_golfclub"):
			return 0;
			break;
		
		case joaat("weapon_crowbar"):
			return 0;
			break;
		
		case joaat("weapon_bat"):
			return 0;
			break;
	}
	return 0;
}

bool func_17(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_147();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

void func_18(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_19(var uParam0)
{
	uParam0->f_284 = 0;
}

int func_20(var uParam0)
{
	return uParam0->f_284;
}

void func_21(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		uParam0->f_278 = 0;
		func_22(uParam0);
	}
	if (uParam0->f_278 == 0)
	{
		if (uParam0->f_275 != 9999)
		{
			unk_0xF3F7B05FC4684A7C("SET_INPUT_EVENT");
			unk_0x330108B080A2132F(uParam0->f_275);
			unk_0xE6B753D52F4CA222();
			uParam0->f_275 = 9999;
			uParam0->f_278 = 1;
		}
	}
}

void func_22(var uParam0)
{
	uParam0->f_282 = 0;
}

int func_23(var uParam0)
{
	return uParam0->f_282;
}

char* func_24(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("weapon_autoshotgun"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("weapon_battleaxe"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("weapon_compactlauncher"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("weapon_minismg"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("weapon_pipebomb"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("weapon_poolcue"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("weapon_wrench"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("weapon_pistol_mk2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("weapon_doubleaction"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case joaat("weapon_stone_hatchet"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case joaat("weapon_raypistol"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case joaat("weapon_raycarbine"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case joaat("weapon_rayminigun"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case joaat("weapon_navyrevolver"):
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case joaat("weapon_ceramicpistol"):
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		case joaat("weapon_gadgetpistol"):
			if (bParam1)
			{
				return "WTU_GDGTPST";
			}
			else
			{
				return "WT_GDGTPST";
			}
			break;
		
		case joaat("weapon_militaryrifle"):
			if (bParam1)
			{
				return "WTU_MLTRYRFL";
			}
			else
			{
				return "WT_MLTRYRFL";
			}
			break;
		
		case joaat("weapon_combatshotgun"):
			if (bParam1)
			{
				return "WTU_CMBSHGN";
			}
			else
			{
				return "WT_CMBSHGN";
			}
			break;
		
		case joaat("vehicle_weapon_turret_dinghy5_50cal"):
			if (bParam1)
			{
				return "WTU_VEH_DINGHY_50C";
			}
			else
			{
				return "WTU_VEH_DINGHY_50C";
			}
			break;
		
		case joaat("weapon_fertilizercan"):
			if (bParam1)
			{
				return "WTU_FERTCAN";
			}
			else
			{
				return "WT_FERTCAN";
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			if (bParam1)
			{
				return "WTU_HEAVYRIFLE";
			}
			else
			{
				return "WT_HEAVYRIFLE";
			}
			break;
		
		case joaat("weapon_emplauncher"):
			if (bParam1)
			{
				return "WTU_EMPL";
			}
			else
			{
				return "WT_EMPL";
			}
			break;
		
		case joaat("weapon_stungun_mp"):
			if (bParam1)
			{
				return "WTU_STNGUNMP";
			}
			else
			{
				return "WT_STNGUNMP";
			}
			break;
		
		case joaat("weapon_tacticalrifle"):
			if (bParam1)
			{
				return "WTU_TACRIFLE";
			}
			else
			{
				return "WT_TACRIFLE";
			}
			break;
		
		case joaat("weapon_precisionrifle"):
			if (bParam1)
			{
				return "WTU_PRCSRIFLE";
			}
			else
			{
				return "WT_PRCSRIFLE";
			}
			break;
		
		case joaat("weapon_bzgas"):
			if (bParam1)
			{
				return "WTU_BZGAS";
			}
			else
			{
				return "WTU_BZGAS";
			}
			break;
		
		case joaat("weapon_stinger"):
			if (bParam1)
			{
				return "WTU_STINGER";
			}
			else
			{
				return "WTU_STINGER";
			}
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			if (bParam1)
			{
				return "WTU_GR_LAUN_SM";
			}
			else
			{
				return "WTU_GR_LAUN_SM";
			}
			break;
		
		case joaat("weapon_pistolxm3"):
			if (bParam1)
			{
				return "WTU_PISTOLXM3";
			}
			else
			{
				return "WT_PISTOLXM3";
			}
			break;
		
		case joaat("weapon_candycane"):
			if (bParam1)
			{
				return "WTU_CANDYCANE";
			}
			else
			{
				return "WT_CANDYCANE";
			}
			break;
		
		case joaat("weapon_railgunxm3"):
			if (bParam1)
			{
				return "WTU_RAILGUNXM3";
			}
			else
			{
				return "WT_RAILGUNXM3";
			}
			break;
		
		case 350597077:
			if (bParam1)
			{
				return "WTU_TECPISTOL";
			}
			else
			{
				return "WT_TECPISTOL";
			}
			break;
		
		case joaat("vehicle_weapon_trailer_dualaa"):
			if (bParam1)
			{
				return "WT_UV_DUALAA";
			}
			else
			{
				return "WT_V_DUALAA";
			}
			break;
		
		case joaat("weapon_snowball"):
			if (bParam1)
			{
				return "FMMC_U_SNOWBALL";
			}
			else
			{
				return "FMMC_SNOWBALL";
			}
			break;
		
		case joaat("weapon_battlerifle"):
			if (bParam1)
			{
				return "WTU_BATTLERIFLE";
			}
			else
			{
				return "WT_BATTLERIFLE";
			}
			break;
		
		case joaat("weapon_snowlauncher"):
			if (bParam1)
			{
				return "WTU_SNOWLNCHR";
			}
			else
			{
				return "WT_SNOWLNCHR";
			}
			break;
		
		case -624951259:
			if (bParam1)
			{
				return "WTU_STUNROD";
			}
			else
			{
				return "WT_STUNROD";
			}
			break;
		
		default:
			if (func_26(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_25(&(Var0.f_31));
				}
				else
				{
					return func_25(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_25(var uParam0)
{
	return uParam0;
}

int func_26(int iParam0, var uParam1)
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

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (func_42() == 0)
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	iVar0 = func_40(iParam0);
	if (iVar0 != 524 && func_38(iVar0, -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	uVar1 = func_31(iParam0, iParam1);
	iVar2 = func_29(iParam0);
	return BitTest(uVar1, func_28(iVar2));
}

int func_28(int iParam0)
{
	return (iParam0 % 32);
}

int func_29(int iParam0)
{
	return func_30(iParam0);
}

int func_30(int iParam0)
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

var func_31(int iParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_32(func_35(iParam0), uParam1);
	return uVar0;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_33(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_33(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_34(uParam1));
}

int func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_147();
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

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iParam0);
	iVar1 = func_37(iVar0);
	if ((func_164() == 0 || func_36() == 0) || (func_164() == 999 && func_36() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 686;
				break;
			
			case 1:
				return 687;
				break;
			
			case 2:
				return 2421;
				break;
			
			case 3:
				return 10277;
				break;
			
			case 4:
				return 12214;
				break;
			
			case 5:
				return 12302;
				break;
		}
	}
	return 14835;
}

int func_36()
{
	return Global_32949;
}

int func_37(int iParam0)
{
	return (iParam0 / 32);
}

int func_38(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_39(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_39(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_34(uParam1));
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 17;
			break;
		
		case joaat("weapon_combatpistol"):
			return 19;
			break;
		
		case joaat("weapon_appistol"):
			return 23;
			break;
		
		case joaat("weapon_pistol50"):
			return 21;
			break;
		
		case joaat("weapon_smg"):
			return 27;
			break;
		
		case joaat("weapon_microsmg"):
			return 25;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 31;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 33;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 35;
			break;
		
		case joaat("weapon_mg"):
			return 37;
			break;
		
		case joaat("weapon_combatmg"):
			return 39;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 43;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 45;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 49;
			break;
		
		case joaat("weapon_heavysniper"):
			return 55;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 53;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 59;
			break;
		
		case joaat("weapon_rpg"):
			return 61;
			break;
		
		case joaat("weapon_minigun"):
			return 63;
			break;
		
		case joaat("weapon_grenade"):
			return 65;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 67;
			break;
		
		case joaat("weapon_stickybomb"):
			return 69;
			break;
		
		case joaat("weapon_molotov"):
			return 71;
			break;
		
		case joaat("weapon_petrolcan"):
			return 74;
			break;
		
		case joaat("gadget_parachute"):
			return 73;
			break;
		
		case joaat("weapon_knife"):
			return 1;
			break;
		
		case joaat("weapon_nightstick"):
			return 3;
			break;
		
		case joaat("weapon_hammer"):
			return 11;
			break;
		
		case joaat("weapon_bat"):
			return 13;
			break;
		
		case joaat("weapon_crowbar"):
			return 5;
			break;
		
		case joaat("weapon_golfclub"):
			return 15;
			break;
		
		case -572349828:
			return 41;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 29;
			break;
		
		case 392730790:
			return 57;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 47;
			break;
		
		case joaat("weapon_bottle"):
			return 142;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 356;
			break;
		
		case joaat("weapon_snspistol"):
			return 144;
			break;
		
		case joaat("weapon_heavypistol"):
			return 354;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 358;
			break;
		
		case joaat("weapon_gusenberg"):
			return 360;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 383;
			break;
		
		case joaat("weapon_dagger"):
			return 381;
			break;
		
		case joaat("weapon_musket"):
			return 387;
			break;
		
		case joaat("weapon_firework"):
			return 385;
			break;
		
		case joaat("weapon_flaregun"):
			return 375;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 399;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 401;
			break;
		
		case joaat("weapon_proxmine"):
			return 405;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 407;
			break;
		
		case joaat("weapon_hatchet"):
			return 403;
			break;
		
		case joaat("weapon_combatpdw"):
			return 409;
			break;
		
		case joaat("weapon_knuckle"):
			return 411;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 413;
			break;
		
		case joaat("weapon_machete"):
			return 415;
			break;
		
		case joaat("weapon_machinepistol"):
			return 417;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 422;
			break;
		
		case joaat("weapon_compactrifle"):
			return 420;
			break;
		
		case joaat("weapon_flashlight"):
			return 424;
			break;
		
		case joaat("weapon_revolver"):
			return 427;
			break;
		
		case joaat("weapon_switchblade"):
			return 429;
			break;
		
		case joaat("weapon_autoshotgun"):
			return 434;
			break;
		
		case joaat("weapon_minismg"):
			return 440;
			break;
		
		case joaat("weapon_compactlauncher"):
			return 438;
			break;
		
		case joaat("weapon_battleaxe"):
			return 436;
			break;
		
		case joaat("weapon_pipebomb"):
			return 442;
			break;
		
		case joaat("weapon_poolcue"):
			return 444;
			break;
		
		case joaat("weapon_wrench"):
			return 9;
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			return 31;
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			return 33;
			break;
		
		case joaat("weapon_combatmg_mk2"):
			return 39;
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			return 55;
			break;
		
		case joaat("weapon_pistol_mk2"):
			return 17;
			break;
		
		case joaat("weapon_smg_mk2"):
			return 27;
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			return 47;
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			return 401;
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			return 43;
			break;
		
		case joaat("weapon_revolver_mk2"):
			return 427;
			break;
		
		case joaat("weapon_snspistol_mk2"):
			return 144;
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			return 356;
			break;
		
		case joaat("weapon_doubleaction"):
			return 468;
			break;
		
		case joaat("weapon_raypistol"):
			return 476;
			break;
		
		case joaat("weapon_raycarbine"):
			return 478;
			break;
		
		case joaat("weapon_rayminigun"):
			return 480;
			break;
		
		case joaat("weapon_stone_hatchet"):
			return 474;
			break;
		
		case joaat("weapon_navyrevolver"):
			return 484;
			break;
		
		case joaat("weapon_ceramicpistol"):
			return 482;
			break;
		
		case joaat("weapon_gadgetpistol"):
			return 490;
			break;
		
		case joaat("weapon_militaryrifle"):
			return 492;
			break;
		
		case joaat("weapon_combatshotgun"):
			return 488;
			break;
		
		case joaat("weapon_heavyrifle"):
			return 496;
			break;
		
		case joaat("weapon_emplauncher"):
			return 494;
			break;
		
		case joaat("weapon_fertilizercan"):
			return 498;
			break;
		
		case joaat("weapon_stungun_mp"):
			return 500;
			break;
		
		case joaat("weapon_metaldetector"):
			return 502;
			break;
		
		case joaat("weapon_tacticalrifle"):
			return 504;
			break;
		
		case joaat("weapon_precisionrifle"):
			return 506;
			break;
		
		case joaat("weapon_pistolxm3"):
			return 508;
			break;
		
		case joaat("weapon_candycane"):
			return 510;
			break;
		
		case joaat("weapon_railgunxm3"):
			return 512;
			break;
		
		case 350597077:
			return 514;
			break;
		
		case joaat("weapon_battlerifle"):
			return 516;
			break;
		
		case joaat("weapon_snowlauncher"):
			return 518;
			break;
		
		case -624951259:
			return 522;
			break;
	}
	return 524;
}

bool func_41()
{
	return Global_1575062;
}

int func_42()
{
	if (func_44() && func_43(0))
	{
		return 1;
	}
	return 0;
}

var func_43(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_44()
{
	return func_43(func_147() + 1);
}

int func_45(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
			bVar0 = true;
			iVar3 = 494;
			break;
		
		case joaat("weapon_golfclub"):
			bVar0 = true;
			iVar3 = 248;
			break;
		
		case joaat("weapon_bat"):
			bVar0 = true;
			iVar3 = 241;
			break;
		
		case joaat("weapon_crowbar"):
			bVar0 = true;
			iVar3 = 213;
			break;
	}
	if (bVar0)
	{
		iVar1 = func_46(unk_0x259BE71D8A81D4FA());
		iVar2 = func_16(iParam0);
		if (iVar1 >= iVar2)
		{
			if (func_32(iVar3, -1) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_46(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_206.f_6;
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_48(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_smg_mk2"):
			switch (iParam0)
			{
				case joaat("component_at_scope_macro_02_smg_mk2"):
					return 1;
					break;
				
				case joaat("component_at_scope_small_smg_mk2"):
					return 2;
					break;
				
				case joaat("component_at_sb_barrel_01"):
					return 4;
					break;
				
				case joaat("component_at_sb_barrel_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			switch (iParam0)
			{
				case joaat("component_at_scope_large_mk2"):
					return 2;
					break;
				
				case joaat("component_at_sr_barrel_01"):
					return 4;
					break;
				
				case joaat("component_at_sr_barrel_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			switch (iParam0)
			{
				case joaat("component_at_scope_small_mk2"):
					return 1;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 2;
					break;
				
				case joaat("component_at_mg_barrel_01"):
					return 4;
					break;
				
				case joaat("component_at_mg_barrel_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_at_scope_macro_mk2"):
					return 1;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 2;
					break;
				
				case joaat("component_at_ar_barrel_01"):
					return 4;
					break;
				
				case joaat("component_at_ar_barrel_02"):
					return 8;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_at_scope_macro_mk2"):
					return 1;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 2;
					break;
				
				case joaat("component_at_cr_barrel_01"):
					return 4;
					break;
				
				case joaat("component_at_cr_barrel_02"):
					return 8;
					break;
			}
			break;
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_50(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
		
		case 7:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				
				case 1:
					return 512;
					break;
				
				case 8:
					return 2048;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				
				case 1:
					return 4096;
					break;
				
				case 8:
					return 16384;
					break;
			}
			break;
		
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 131072;
					break;
			}
			break;
		
		case 64:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 1048576;
					break;
			}
			break;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_smg_mk2"):
		case joaat("weapon_heavysniper_mk2"):
		case joaat("weapon_carbinerifle_mk2"):
		case joaat("weapon_assaultrifle_mk2"):
		case joaat("weapon_combatmg_mk2"):
			switch (iParam0)
			{
				case joaat("component_at_muzzle_01"):
					return 1;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 2;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 4;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 7;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 16;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 32;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 64;
					break;
				
				case joaat("component_at_muzzle_08"):
					return 1;
					break;
				
				case joaat("component_at_muzzle_09"):
					return 2;
					break;
			}
			break;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_52(iParam0, iParam1);
	switch (iVar0)
	{
		case 1:
			switch (iParam2)
			{
				case 4:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 8:
					return 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam2)
			{
				case 4:
					return 16;
					break;
				
				case 1:
					return 8;
					break;
				
				case 8:
					return 32;
					break;
			}
			break;
		
		case 4:
			switch (iParam2)
			{
				case 4:
					return 128;
					break;
				
				case 1:
					return 64;
					break;
				
				case 8:
					return 256;
					break;
			}
			break;
		
		case 8:
			switch (iParam2)
			{
				case 4:
					return 1024;
					break;
				
				case 1:
					return 512;
					break;
				
				case 8:
					return 2048;
					break;
			}
			break;
		
		case 16:
			switch (iParam2)
			{
				case 4:
					return 8192;
					break;
				
				case 1:
					return 4096;
					break;
				
				case 8:
					return 16384;
					break;
			}
			break;
		
		case 32:
			switch (iParam2)
			{
				case 4:
					return 65536;
					break;
				
				case 1:
					return 32768;
					break;
				
				case 8:
					return 131072;
					break;
			}
			break;
		
		case 256:
			switch (iParam2)
			{
				case 4:
					return 33554432;
					break;
				
				case 1:
					return 16777216;
					break;
				
				case 8:
					return 67108864;
					break;
			}
			break;
		
		case 64:
			switch (iParam2)
			{
				case 4:
					return 524288;
					break;
				
				case 1:
					return 262144;
					break;
				
				case 8:
					return 1048576;
					break;
			}
			break;
		
		case 128:
			switch (iParam2)
			{
				case 4:
					return 4194304;
					break;
				
				case 1:
					return 2097152;
					break;
				
				case 8:
					return 8388608;
					break;
			}
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 16;
				
				case joaat("component_pistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 16;
				
				case joaat("component_pistol50_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 16;
				
				case joaat("component_combatpistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 16;
				
				case joaat("component_appistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 16;
				
				case joaat("component_microsmg_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_scope_macro"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 16;
				
				case joaat("component_assaultsmg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_at_scope_macro"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 16;
				
				case joaat("component_smg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
				
				case joaat("component_at_scope_macro_02"):
					return 64;
				
				case joaat("component_smg_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 16;
				
				case joaat("component_assaultrifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_macro"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_assaultrifle_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 16;
				
				case joaat("component_carbinerifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_medium"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
				
				case joaat("component_carbinerifle_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 16;
				
				case joaat("component_specialcarbine_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_medium"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_specialcarbine_clip_03"):
					return 256;
				
				default:
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 16;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 16;
				
				case joaat("component_heavypistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_flsh"):
					return 2;
				
				case joaat("component_at_pi_supp"):
					return 1;
				
				default:
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 16;
				
				case joaat("component_snspistol_clip_02"):
					return 32;
				
				default:
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 16;
				
				case joaat("component_advancedrifle_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 16;
				
				case joaat("component_mg_clip_02"):
					return 32;
				
				case joaat("component_at_scope_small_02"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 16;
				
				case joaat("component_combatmg_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_scope_medium"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 1;
				
				case joaat("component_at_ar_flsh"):
					return 2;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 16;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 32;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_at_scope_max"):
					return 4;
				
				case joaat("component_at_scope_large"):
					return 64;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_at_scope_max"):
					return 4;
				
				case joaat("component_at_scope_large"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_scope_small"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 16;
				
				case joaat("component_vintagepistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_supp"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 16;
				
				case joaat("component_gusenberg_clip_02"):
					return 32;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 16;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 32;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 16;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 32;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 64;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_supp"):
					return 1;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 16;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 16;
				
				case joaat("component_combatpdw_clip_02"):
					return 32;
				
				case joaat("component_at_scope_small"):
					return 64;
				
				case joaat("component_at_ar_flsh"):
					return 2;
				
				case joaat("component_at_ar_afgrip"):
					return 128;
				
				case joaat("component_combatpdw_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 16;
				
				case joaat("component_machinepistol_clip_02"):
					return 32;
				
				case joaat("component_at_pi_supp"):
					return 1;
				
				case joaat("component_machinepistol_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 16;
				
				case joaat("component_compactrifle_clip_02"):
					return 32;
				
				case joaat("component_compactrifle_clip_03"):
					return 256;
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam0)
			{
				case joaat("component_minismg_clip_01"):
					return 16;
				
				case joaat("component_minismg_clip_02"):
					return 32;
					break;
			}
			break;
		
		case joaat("weapon_pistol_mk2"):
			switch (iParam0)
			{
				case joaat("component_pistol_mk2_clip_01"):
					return 16;
					break;
				
				case joaat("component_pistol_mk2_clip_02"):
					return 32;
					break;
				
				case joaat("component_pistol_mk2_clip_fmj"):
					return 256;
					break;
				
				case joaat("component_pistol_mk2_clip_hollowpoint"):
					return 256;
					break;
				
				case joaat("component_pistol_mk2_clip_incendiary"):
					return 256;
					break;
				
				case joaat("component_pistol_mk2_clip_tracer"):
					return 256;
					break;
				
				case joaat("component_at_pi_flsh_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_rail"):
					return 128;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 1;
					break;
				
				case joaat("component_at_pi_comp"):
					return 128;
					break;
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			switch (iParam0)
			{
				case joaat("component_smg_mk2_clip_01"):
					return 16;
					break;
				
				case joaat("component_smg_mk2_clip_02"):
					return 32;
					break;
				
				case joaat("component_smg_mk2_clip_fmj"):
					return 256;
					break;
				
				case joaat("component_smg_mk2_clip_hollowpoint"):
					return 256;
					break;
				
				case joaat("component_smg_mk2_clip_incendiary"):
					return 256;
					break;
				
				case joaat("component_smg_mk2_clip_tracer"):
					return 256;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 2;
					break;
				
				case joaat("component_at_sights_smg"):
					return 64;
					break;
				
				case joaat("component_at_scope_macro_02_smg_mk2"):
					return 4;
					break;
				
				case joaat("component_at_scope_small_smg_mk2"):
					return 64;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_mk2_clip_01"):
					return 16;
					break;
				
				case joaat("component_heavysniper_mk2_clip_02"):
					return 32;
					break;
				
				case joaat("component_heavysniper_mk2_clip_armorpiercing"):
					return 256;
					break;
				
				case joaat("component_heavysniper_mk2_clip_explosive"):
					return 256;
					break;
				
				case joaat("component_heavysniper_mk2_clip_fmj"):
					return 256;
					break;
				
				case joaat("component_heavysniper_mk2_clip_incendiary"):
					return 256;
					break;
				
				case joaat("component_at_scope_large"):
					return 4;
					break;
				
				case joaat("component_at_scope_max"):
					return 64;
					break;
				
				case joaat("component_at_scope_nv"):
					return 8;
					break;
				
				case joaat("component_at_scope_thermal"):
					return 8;
					break;
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			switch (iParam0)
			{
				case joaat("component_combatmg_mk2_clip_01"):
					return 16;
					break;
				
				case joaat("component_combatmg_mk2_clip_02"):
					return 32;
					break;
				
				case joaat("component_combatmg_mk2_clip_armorpiercing"):
					return 256;
					break;
				
				case joaat("component_combatmg_mk2_clip_fmj"):
					return 256;
					break;
				
				case joaat("component_combatmg_mk2_clip_incendiary"):
					return 256;
					break;
				
				case joaat("component_combatmg_mk2_clip_tracer"):
					return 256;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 128;
					break;
				
				case joaat("component_at_sights"):
					return 64;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_mk2_clip_01"):
					return 16;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
					return 256;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_fmj"):
					return 256;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_incendiary"):
					return 256;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_tracer"):
					return 256;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 128;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 2;
					break;
				
				case joaat("component_at_sights"):
					return 64;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 4;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 8;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 1;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_mk2_clip_01"):
					return 16;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_02"):
					return 32;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
					return 256;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_fmj"):
					return 256;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_incendiary"):
					return 256;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_tracer"):
					return 256;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 128;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 2;
					break;
				
				case joaat("component_at_sights"):
					return 64;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 4;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 8;
					break;
				
				case joaat("component_at_ar_supp"):
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_53(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	uVar0 = func_56(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return BitTest(uVar0, func_28(iVar1));
}

int func_54(int iParam0, int iParam1)
{
	return func_55(iParam0, iParam1);
}

int func_55(int iParam0, int iParam1)
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

var func_56(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_32(func_57(iParam0, iParam1), iParam2);
	return uVar0;
}

int func_57(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_37(iVar0);
	if ((func_164() == 0 || func_36() == 0) || (func_164() == 999 && func_36() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 682;
				break;
			
			case 1:
				return 683;
				break;
			
			case 2:
				return 684;
				break;
			
			case 3:
				return 685;
				break;
			
			case 4:
				return 1752;
				break;
			
			case 5:
				return 2434;
				break;
			
			case 6:
				return 2827;
				break;
			
			case 7:
				return 5501;
				break;
			
			case 8:
				return 5505;
				break;
			
			case 9:
				return 5509;
			
			case 10:
				return 5622;
			
			case 11:
				return 5626;
				break;
			
			case 12:
				return 5630;
				break;
			
			case 13:
				return 5634;
				break;
			
			case 14:
				return 6373;
				break;
			
			case 15:
				return 6496;
				break;
			
			case 16:
				return 6516;
				break;
			
			case 17:
				return 6522;
				break;
			
			case 18:
				return 10272;
				break;
			
			case 19:
				return 12006;
				break;
		}
	}
	return 1752;
}

char* func_58(int iParam0, int iParam1)
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
				iVar0 = func_26(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < unk_0x660FA55F8D417CAB(iVar0))
					{
						if (unk_0x737024F2814ABDDD(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_25(&(Var3.f_6));
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

void func_59(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_64(iParam0, iParam1, -1))
		{
			func_60(iParam0, iParam1, 1);
		}
	}
	else if (func_64(iParam0, iParam1, -1))
	{
		func_60(iParam0, iParam1, 0);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_63(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, func_28(iVar1));
		}
		else
		{
			unk_0x8744D2E3FC95740E(&uVar0, func_28(iVar1));
		}
		func_61(func_62(iParam0, iParam1), uVar0, -1, 1);
	}
}

void func_61(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_33(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, uParam1, iParam3);
		}
	}
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_37(iVar0);
	if ((func_164() == 0 || func_36() == 0) || (func_164() == 999 && func_36() == 999))
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

var func_63(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_32(func_62(iParam0, iParam1), iParam2);
	return uVar0;
}

int func_64(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	uVar0 = func_63(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return BitTest(uVar0, func_28(iVar1));
}

void func_65(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_95(iParam0, iParam1, -1))
		{
			func_66(iParam0, iParam1, 1);
		}
	}
	else if (func_95(iParam0, iParam1, -1))
	{
		func_66(iParam0, iParam1, 0);
	}
}

void func_66(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_69(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, func_28(iVar1));
		}
		else
		{
			unk_0x8744D2E3FC95740E(&uVar0, func_28(iVar1));
		}
		func_67(func_68(iParam0, iParam1), uVar0, -1);
	}
}

void func_67(int iParam0, var uParam1, int iParam2)
{
	func_61(iParam0, uParam1, iParam2, 1);
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_37(iVar0);
	if ((func_164() == 0 || func_36() == 0) || (func_164() == 999 && func_36() == 999))
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

var func_69(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_32(func_68(iParam0, iParam1), iParam2);
	return uVar0;
}

void func_70(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_53(iParam0, iParam1, -1))
		{
			func_85(iParam0, iParam1, 1);
		}
		if (bParam3)
		{
			if (func_83(iParam0, iParam1) == 0)
			{
				func_78(16, func_58(iParam0, 0), func_82(iParam0, 0), func_81(iParam1), func_80(iParam1), -1, 0, 0, 0, -1, 0);
				func_76(iParam0, iParam1, 1);
			}
		}
		if (bParam4)
		{
			func_71(iParam0, iParam1, 1);
		}
	}
	else if (func_53(iParam0, iParam1, -1))
	{
		func_85(iParam0, iParam1, 0);
	}
}

void func_71(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_75(iParam0, iParam1, -1))
		{
			func_72(iParam0, iParam1, 1);
		}
	}
	else if (func_75(iParam0, iParam1, -1))
	{
		func_72(iParam0, iParam1, 0);
	}
}

void func_72(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_74(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, func_28(iVar1));
		}
		else
		{
			unk_0x8744D2E3FC95740E(&uVar0, func_28(iVar1));
		}
		func_61(func_73(iParam0, iParam1), uVar0, -1, 1);
	}
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_37(iVar0);
	if ((func_164() == 0 || func_36() == 0) || (func_164() == 999 && func_36() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 655;
				break;
			
			case 1:
				return 656;
				break;
			
			case 2:
				return 657;
				break;
			
			case 3:
				return 658;
				break;
			
			case 4:
				return 1754;
				break;
			
			case 5:
				return 2436;
				break;
			
			case 6:
				return 2829;
				break;
			
			case 7:
				return 5503;
				break;
			
			case 8:
				return 5507;
				break;
			
			case 9:
				return 5511;
				break;
			
			case 10:
				return 5624;
				break;
			
			case 11:
				return 5628;
				break;
			
			case 12:
				return 5632;
				break;
			
			case 13:
				return 5636;
				break;
			
			case 14:
				return 6375;
				break;
			
			case 15:
				return 6498;
				break;
			
			case 16:
				return 6518;
				break;
			
			case 17:
				return 6524;
				break;
			
			case 18:
				return 10274;
				break;
			
			case 19:
				return 12008;
				break;
		}
	}
	return 14835;
}

var func_74(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_32(func_73(iParam0, iParam1), iParam2);
	return uVar0;
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	uVar0 = func_74(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return BitTest(uVar0, func_28(iVar1));
}

void func_76(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_54(iParam0, iParam1);
	if (iVar0 > -1)
	{
		if (bParam2)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2749863.f_991[func_77(iParam0, iParam1)]), func_28(iVar0));
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_2749863.f_991[func_77(iParam0, iParam1)]), func_28(iVar0));
		}
	}
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_54(iParam0, iParam1);
	switch (func_37(iVar0))
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
	}
	return 0;
}

void func_78(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_79(&Global_1677354);
	Global_1677354[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1677354[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1677354[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1677354[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1677354[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1677354[iVar0 /*106*/].f_97 = iParam5;
	Global_1677354[iVar0 /*106*/].f_104 = iParam9;
	Global_1677354[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		StringCopy(&(Global_1677354[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_79(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_80(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("weapon_stungun"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_pistol"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_appistol"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("gadget_parachute"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_smg"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_specialcarbine"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_snspistol"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_grenade"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_stickybomb"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_combatmg"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_rpg"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_heavysniper"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_microsmg"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_mg"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_minigun"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_combatpistol"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_molotov"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("weapon_petrolcan"):
			return "MPWeaponsUnusedForNow";
			break;
	}
	return "";
}

char* func_81(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			return "W_ME_KNIFE_01";
			break;
		
		case joaat("weapon_stungun"):
			return "W_PI_Stungun";
			break;
		
		case joaat("weapon_pistol"):
			return "W_PI_Pistol";
			break;
		
		case joaat("gadget_parachute"):
			return "Parachute_Main";
			break;
		
		case joaat("weapon_smg"):
			return "W_SB_SMG";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "W_SR_SniperRifle";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "W_AR_CarbineRifle";
			break;
		
		case joaat("weapon_specialcarbine"):
			return "W_AR_DLC_SpecialCarbine";
			break;
		
		case joaat("weapon_snspistol"):
			return "W_AR_DLC_SNSPISTOL";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "W_SG_PumpShotgun";
			break;
		
		case joaat("weapon_grenade"):
			return "W_Ex_GrenadeFrag";
			break;
		
		case joaat("weapon_stickybomb"):
			return "W_Ex_PE";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "W_R_GrenadeLauncher";
			break;
		
		case joaat("weapon_combatmg"):
			return "W_MG_CombatMG";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "W_SG_AssaultShotgun";
			break;
		
		case joaat("weapon_appistol"):
			return "W_PI_AppPistol";
			break;
		
		case joaat("weapon_rpg"):
			return "W_LR_RPG";
			break;
		
		case joaat("weapon_heavysniper"):
			return "W_SR_HeavySniper";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "W_AR_AdvancedRifle";
			break;
		
		case joaat("weapon_microsmg"):
			return "W_SB_MicroSMG";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "W_AR_AssaultRifle";
			break;
		
		case joaat("weapon_mg"):
			return "W_MG_MG";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "W_SG_SAWNOFF";
			break;
		
		case joaat("weapon_minigun"):
			return "W_MG_Minigun";
			break;
		
		case joaat("weapon_combatpistol"):
			return "W_PI_CombatPistol";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "W_Ex_GrenadeSmoke";
			break;
		
		case joaat("weapon_petrolcan"):
			return "W_AM_Jerrycan";
			break;
		
		case joaat("weapon_molotov"):
			return "W_EX_Molotov";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "rocket";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "rocket";
			break;
	}
	return "";
}

char* func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<15> Var3;
	
	switch (iParam0)
	{
		case 0:
			return "WCD_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCD_AT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCD_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCD_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCD_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCD_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCD_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCD_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCD_AR_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCD_AR_SUPP2";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCD_SR_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCD_P_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCD_P_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCD_CP_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCD_CP_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCD_AP_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCD_AP_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCDMSMG_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCDMSMG_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCD_SMG_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCD_SMG_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCD_AR_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCD_AR_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCD_CR_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCD_CR_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCD_ADR_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCD_ADR_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCD_MG_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCD_MG_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCDCMG_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCDCMG_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCD_AS_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCD_AS_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCD_SR_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCD_HS_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCD_MIG_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCD_ASMG_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCD_ASMG_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCD_P50_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCD_P50_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCD_VAR_AR";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCD_VAR_ADR";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCD_VAR_CR";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCD_VAR_AP";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCD_VAR_P";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCD_VAR_P50";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCD_VAR_HPST";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCD_VAR_SMG";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCD_VAR_MSMG";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCD_VAR_SOF";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCD_VAR_SNP";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCD_VAR_MKRF";
			break;
		
		case joaat("component_knuckle_varmod_pimp"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_ballas"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_dollar"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_diamond"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_hate"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_love"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_player"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_king"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_vagos"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCD_VAR_ASMG";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCD_VAR_BPR";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCD_VAR_CBMG";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCD_VAR_CBP";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCD_VAR_MG";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCD_VAR_PSHT";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCD_VAR_SNS";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCD_VAR_SCAR";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCD_P_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCD_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCD_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCD_CLIP3";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCD_CLIP3";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCD_CLIP3";
			break;
		
		case joaat("component_gunrun_mk2_upgrade"):
			return "WCD_VAR_GUN";
			break;
		
		case joaat("component_snspistol_mk2_clip_02"):
			return "WCD_CLIP2";
			break;
		
		case joaat("component_at_scope_macro_02_mk2"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small_mk2"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("component_raypistol_varmod_xmas18"):
			return "WCD_VAR_RAY18";
			break;
		
		case joaat("component_ceramicpistol_clip_02"):
			return "WCD_CLIP2";
			break;
		
		case joaat("component_ceramicpistol_supp"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("component_heavyrifle_camo1"):
			return "WCD_VAR_HRF";
			break;
		
		case joaat("component_microsmg_varmod_security"):
			return "WCD_VAR_MSMG";
			break;
		
		case joaat("component_appistol_varmod_security"):
			return "WCD_VAR_AP";
			break;
		
		case joaat("component_pumpshotgun_varmod_security"):
			return "WCD_VAR_PSHT";
			break;
		
		case joaat("component_pumpshotgun_varmod_xm3"):
			return "WCD_VAR_PSHT";
			break;
		
		case joaat("component_pistol_mk2_varmod_xm3"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_microsmg_varmod_xm3"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_pistolxm3_clip_01"):
			return "WCD_PXM3_CLIP1";
			break;
		
		case joaat("component_pistolxm3_supp"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("component_bat_varmod_xm3"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_bat_varmod_xm3_01"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_bat_varmod_xm3_02"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_bat_varmod_xm3_03"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_bat_varmod_xm3_04"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_bat_varmod_xm3_05"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_bat_varmod_xm3_06"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_bat_varmod_xm3_07"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_bat_varmod_xm3_08"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_bat_varmod_xm3_09"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knife_varmod_xm3"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knife_varmod_xm3_01"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knife_varmod_xm3_02"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knife_varmod_xm3_03"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knife_varmod_xm3_04"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knife_varmod_xm3_05"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knife_varmod_xm3_06"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knife_varmod_xm3_07"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knife_varmod_xm3_08"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knife_varmod_xm3_09"):
			return "WCD_VAR_DESC";
			break;
		
		case 1694268374:
			return "WCD_VAR_DESC";
			break;
		
		case 1605520746:
			return "WCD_VAR_DESC";
			break;
		
		case -1240142720:
			return "WCD_VAR_DESC";
			break;
		
		case 943088878:
			return "WCD_TECP_CLIP1";
			break;
		
		case 310778254:
			return "WCD_TECP_CLIP2";
			break;
		
		case -292433650:
			return "WCD_BTRIF_CLIP1";
			break;
		
		case 494808810:
			return "WCD_BTRIF_CLIP2";
			break;
		
		case 1400690398:
			return "WCD_VAR_DESC";
			break;
		
		case 221907180:
			return "WCD_VAR_DESC";
			break;
		
		case 302671608:
			return "WCD_VAR_DESC";
			break;
		
		case -1675905033:
			return "WCD_VAR_DESC";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_26(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < unk_0x660FA55F8D417CAB(iVar0))
					{
						if (unk_0x737024F2814ABDDD(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_25(&(Var3.f_14));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCD_INVALID";
}

int func_83(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_84(iParam0, iParam1);
	iVar1 = func_54(iParam0, iParam1);
	return BitTest(uVar0, func_28(iVar1));
}

var func_84(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_2749863.f_991[func_77(iParam0, iParam1)];
	return uVar0;
}

void func_85(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_56(iParam0, iParam1, -1);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > -1)
	{
		if (bParam2)
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, func_28(iVar1));
		}
		else
		{
			unk_0x8744D2E3FC95740E(&uVar0, func_28(iVar1));
		}
		func_61(func_57(iParam0, iParam1), uVar0, -1, 1);
	}
}

int func_86(int iParam0, int iParam1)
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
				iVar1 = func_26(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x660FA55F8D417CAB(iVar1))
					{
						if (unk_0x737024F2814ABDDD(iVar1, iVar2, &Var5))
						{
							if (!func_87(Var5.f_3))
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

int func_87(int iParam0)
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

int func_88(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_41())
	{
		return 0;
	}
	uVar0 = func_89(iParam0, iParam1);
	iVar1 = func_29(iParam0);
	return BitTest(uVar0, func_28(iVar1));
}

var func_89(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_32(func_90(iParam0), iParam1);
	return uVar0;
}

int func_90(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iParam0);
	iVar1 = func_37(iVar0);
	if (((func_164() == 0 || func_36() == 0) || (func_164() == 999 && func_36() == 999)) || (func_164() == 1000 && func_36() == 1000))
	{
		switch (iVar1)
		{
			case 0:
				return 680;
				break;
			
			case 1:
				return 681;
				break;
			
			case 2:
				return 2429;
				break;
			
			case 3:
				return 10280;
				break;
			
			case 4:
				return 12217;
				break;
			
			case 5:
				return 12305;
				break;
		}
	}
	return 14835;
}

int func_91(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_41())
	{
		return 0;
	}
	if (func_42() == 0)
	{
		return 0;
	}
	if (iParam0 != joaat("gadget_parachute") && iParam0 != joaat("weapon_railgun"))
	{
		if (func_38(func_94(iParam0), -1))
		{
			return 0;
		}
	}
	uVar0 = func_92(iParam0, iParam1);
	iVar1 = func_29(iParam0);
	return BitTest(uVar0, func_28(iVar1));
}

var func_92(int iParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_32(func_93(iParam0), uParam1);
	return uVar0;
}

int func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iParam0);
	iVar1 = func_37(iVar0);
	if ((func_164() == 0 || func_36() == 0) || (func_164() == 999 && func_36() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 800;
				break;
			
			case 1:
				return 801;
				break;
			
			case 2:
				return 2420;
				break;
			
			case 3:
				return 10276;
				break;
			
			case 4:
				return 12213;
				break;
			
			case 5:
				return 12301;
				break;
			}
	}
	return 14835;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 18;
			break;
		
		case joaat("weapon_grenade"):
			return 66;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 68;
			break;
		
		case joaat("weapon_stickybomb"):
			return 70;
			break;
		
		case joaat("weapon_molotov"):
			return 72;
			break;
		
		case joaat("weapon_pistol"):
			return 18;
			break;
		
		case joaat("weapon_combatpistol"):
			return 40;
			break;
		
		case joaat("weapon_pistol50"):
			return 22;
			break;
		
		case joaat("weapon_appistol"):
			return 24;
			break;
		
		case joaat("weapon_microsmg"):
			return 26;
			break;
		
		case joaat("weapon_smg"):
			return 28;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 30;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 32;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 34;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 36;
			break;
		
		case joaat("weapon_mg"):
			return 38;
			break;
		
		case -572349828:
			return 42;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 44;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 46;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 48;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 50;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 54;
			break;
		
		case joaat("weapon_heavysniper"):
			return 56;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 60;
			break;
		
		case joaat("weapon_rpg"):
			return 62;
			break;
		
		case joaat("weapon_minigun"):
			return 64;
			break;
		
		case joaat("weapon_stungun"):
			return 52;
			break;
		
		case joaat("weapon_petrolcan"):
			return 75;
			break;
		
		case joaat("weapon_knife"):
			return 2;
			break;
		
		case joaat("weapon_nightstick"):
			return 4;
			break;
		
		case joaat("weapon_hammer"):
			return 12;
			break;
		
		case joaat("weapon_bat"):
			return 14;
			break;
		
		case joaat("weapon_crowbar"):
			return 6;
			break;
		
		case joaat("weapon_golfclub"):
			return 16;
			break;
		
		case 392730790:
			return 58;
			break;
		
		case joaat("weapon_combatmg"):
			return 40;
			break;
		
		case joaat("weapon_bottle"):
			return 143;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 357;
			break;
		
		case joaat("weapon_snspistol"):
			return 145;
			break;
		
		case joaat("weapon_heavypistol"):
			return 355;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 359;
			break;
		
		case joaat("weapon_gusenberg"):
			return 361;
			break;
		
		case joaat("weapon_dagger"):
			return 382;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 384;
			break;
		
		case joaat("weapon_firework"):
			return 386;
			break;
		
		case joaat("weapon_musket"):
			return 388;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 400;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 402;
			break;
		
		case joaat("weapon_proxmine"):
			return 406;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 408;
			break;
		
		case joaat("weapon_combatpdw"):
			return 410;
			break;
		
		case joaat("weapon_knuckle"):
			return 412;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 414;
			break;
		
		case joaat("weapon_hatchet"):
			return 404;
			break;
		
		case joaat("weapon_machete"):
			return 416;
			break;
		
		case joaat("weapon_machinepistol"):
			return 418;
			break;
		
		case joaat("weapon_compactrifle"):
			return 421;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 423;
			break;
		
		case joaat("weapon_flashlight"):
			return 425;
			break;
		
		case joaat("weapon_revolver"):
			return 428;
			break;
		
		case joaat("weapon_switchblade"):
			return 430;
			break;
		
		case joaat("weapon_autoshotgun"):
			return 435;
			break;
		
		case joaat("weapon_minismg"):
			return 441;
			break;
		
		case joaat("weapon_compactlauncher"):
			return 439;
			break;
		
		case joaat("weapon_battleaxe"):
			return 437;
			break;
		
		case joaat("weapon_pipebomb"):
			return 443;
			break;
		
		case joaat("weapon_poolcue"):
			return 445;
			break;
		
		case joaat("weapon_wrench"):
			return 10;
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			return 32;
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			return 34;
			break;
		
		case joaat("weapon_combatmg_mk2"):
			return 40;
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			return 56;
			break;
		
		case joaat("weapon_pistol_mk2"):
			return 18;
			break;
		
		case joaat("weapon_smg_mk2"):
			return 28;
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			return 48;
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			return 402;
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			return 44;
			break;
		
		case joaat("weapon_revolver_mk2"):
			return 428;
			break;
		
		case joaat("weapon_snspistol_mk2"):
			return 145;
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			return 357;
			break;
		
		case joaat("weapon_doubleaction"):
			return 469;
			break;
		
		case joaat("weapon_stone_hatchet"):
			return 475;
			break;
		
		case joaat("weapon_raypistol"):
			return 477;
			break;
		
		case joaat("weapon_raycarbine"):
			return 477;
			break;
		
		case joaat("weapon_rayminigun"):
			return 477;
			break;
		
		case joaat("weapon_navyrevolver"):
			return 485;
			break;
		
		case joaat("weapon_ceramicpistol"):
			return 483;
			break;
		
		case joaat("weapon_hazardcan"):
			return 487;
			break;
		
		case joaat("weapon_gadgetpistol"):
			return 491;
			break;
		
		case joaat("weapon_militaryrifle"):
			return 493;
			break;
		
		case joaat("weapon_combatshotgun"):
			return 489;
			break;
		
		case joaat("weapon_heavyrifle"):
			return 497;
			break;
		
		case joaat("weapon_emplauncher"):
			return 495;
			break;
		
		case joaat("weapon_fertilizercan"):
			return 499;
			break;
		
		case joaat("weapon_stungun_mp"):
			return 501;
			break;
		
		case joaat("weapon_metaldetector"):
			return 503;
			break;
		
		case joaat("weapon_tacticalrifle"):
			return 505;
			break;
		
		case joaat("weapon_precisionrifle"):
			return 507;
			break;
		
		case joaat("weapon_pistolxm3"):
			return 509;
			break;
		
		case joaat("weapon_candycane"):
			return 511;
			break;
		
		case joaat("weapon_railgunxm3"):
			return 513;
			break;
		
		case 350597077:
			return 515;
			break;
		
		case joaat("weapon_battlerifle"):
			return 517;
			break;
		
		case joaat("weapon_snowlauncher"):
			return 519;
			break;
		
		case -624951259:
			return 523;
			break;
	}
	return 2;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0;
	}
	uVar0 = func_69(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return BitTest(uVar0, func_28(iVar1));
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol_mk2"):
			return joaat("weapon_pistol");
		
		case joaat("weapon_smg_mk2"):
			return joaat("weapon_smg");
		
		case joaat("weapon_assaultrifle_mk2"):
			return joaat("weapon_assaultrifle");
		
		case joaat("weapon_carbinerifle_mk2"):
			return joaat("weapon_carbinerifle");
		
		case joaat("weapon_combatmg_mk2"):
			return joaat("weapon_combatmg");
		
		case joaat("weapon_heavysniper_mk2"):
			return joaat("weapon_heavysniper");
		
		case joaat("weapon_bullpuprifle_mk2"):
			return joaat("weapon_bullpuprifle");
		
		case joaat("weapon_marksmanrifle_mk2"):
			return joaat("weapon_marksmanrifle");
		
		case joaat("weapon_pumpshotgun_mk2"):
			return joaat("weapon_pumpshotgun");
		
		case joaat("weapon_revolver_mk2"):
			return joaat("weapon_revolver");
		
		case joaat("weapon_snspistol_mk2"):
			return joaat("weapon_snspistol");
		
		case joaat("weapon_specialcarbine_mk2"):
			return joaat("weapon_specialcarbine");
		
		default:
	}
	return 0;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol_mk2"):
		case joaat("weapon_smg_mk2"):
		case joaat("weapon_heavysniper_mk2"):
		case joaat("weapon_combatmg_mk2"):
		case joaat("weapon_assaultrifle_mk2"):
		case joaat("weapon_carbinerifle_mk2"):
		case joaat("weapon_snspistol_mk2"):
		case joaat("weapon_revolver_mk2"):
		case joaat("weapon_bullpuprifle_mk2"):
		case joaat("weapon_specialcarbine_mk2"):
		case joaat("weapon_pumpshotgun_mk2"):
		case joaat("weapon_marksmanrifle_mk2"):
			return 1;
			break;
	}
	return 0;
}

int func_98(var uParam0)
{
	return uParam0->f_281;
}

void func_99(var uParam0, var uParam1)
{
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_hammer")) && iLocal_65[10] == uParam1->f_5)
	{
		func_111(joaat("weapon_hammer"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_pistol50")) && iLocal_65[0] == uParam1->f_5)
	{
		func_111(joaat("weapon_pistol50"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_bullpupshotgun")) && iLocal_65[1] == uParam1->f_5)
	{
		func_111(joaat("weapon_bullpupshotgun"), uParam0, *uParam1, 0);
	}
	if (func_109(1, 0))
	{
		if (unk_0x2A9ED010C087BF2B(joaat("weapon_sawnoffshotgun")) && iLocal_65[2] == uParam1->f_5)
		{
			func_111(joaat("weapon_sawnoffshotgun"), uParam0, *uParam1, 0);
		}
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_bottle")) && iLocal_65[3] == uParam1->f_5)
	{
		func_111(joaat("weapon_bottle"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_snspistol")) && iLocal_65[4] == uParam1->f_5)
	{
		func_111(joaat("weapon_snspistol"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_gusenberg")) && iLocal_65[11] == uParam1->f_5)
	{
		func_111(joaat("weapon_gusenberg"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_heavypistol")) && iLocal_65[7] == uParam1->f_5)
	{
		func_111(joaat("weapon_heavypistol"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_specialcarbine")) && iLocal_65[5] == uParam1->f_5)
	{
		func_111(joaat("weapon_specialcarbine"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_bullpuprifle")) && iLocal_65[6] == uParam1->f_5)
	{
		func_111(joaat("weapon_bullpuprifle"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_dagger")) && iLocal_65[8] == uParam1->f_5)
	{
		func_111(joaat("weapon_dagger"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_vintagepistol")) && iLocal_65[9] == uParam1->f_5)
	{
		func_111(joaat("weapon_vintagepistol"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_firework")) && iLocal_65[14] == uParam1->f_5)
	{
		func_111(joaat("weapon_firework"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_musket")) && iLocal_65[13] == uParam1->f_5)
	{
		func_111(joaat("weapon_musket"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_flaregun")) && iLocal_65[12] == uParam1->f_5)
	{
		func_111(joaat("weapon_flaregun"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_heavyshotgun")) && iLocal_65[15] == uParam1->f_5)
	{
		func_111(joaat("weapon_heavyshotgun"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_marksmanrifle")) && iLocal_65[16] == uParam1->f_5)
	{
		func_111(joaat("weapon_marksmanrifle"), uParam0, *uParam1, 0);
	}
	if (func_108() || Global_262145.f_19963)
	{
		if (unk_0x2A9ED010C087BF2B(joaat("weapon_hatchet")) && iLocal_65[22] == uParam1->f_5)
		{
			func_111(joaat("weapon_hatchet"), uParam0, *uParam1, 0);
		}
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_proxmine")) && iLocal_65[17] == uParam1->f_5)
	{
		func_111(joaat("weapon_proxmine"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_hominglauncher")) && iLocal_65[18] == uParam1->f_5)
	{
		func_111(joaat("weapon_hominglauncher"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_combatpdw")) && iLocal_65[19] == uParam1->f_5)
	{
		func_111(joaat("weapon_combatpdw"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_marksmanpistol")) && iLocal_65[20] == uParam1->f_5)
	{
		func_111(joaat("weapon_marksmanpistol"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_knuckle")) && iLocal_65[21] == uParam1->f_5)
	{
		func_111(joaat("weapon_knuckle"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_machete")) && iLocal_65[23] == uParam1->f_5)
	{
		func_111(joaat("weapon_machete"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_machinepistol")) && iLocal_65[24] == uParam1->f_5)
	{
		func_111(joaat("weapon_machinepistol"), uParam0, *uParam1, 0);
	}
	if ((Global_262145.f_12036 && unk_0x2A9ED010C087BF2B(joaat("weapon_flashlight"))) && iLocal_65[25] == uParam1->f_5)
	{
		func_111(joaat("weapon_flashlight"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_revolver")) && iLocal_65[26] == uParam1->f_5)
	{
		func_111(joaat("weapon_revolver"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_switchblade")) && iLocal_65[27] == uParam1->f_5)
	{
		func_111(joaat("weapon_switchblade"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_dbshotgun")) && iLocal_65[28] == uParam1->f_5)
	{
		func_111(joaat("weapon_dbshotgun"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_compactrifle")) && iLocal_65[29] == uParam1->f_5)
	{
		func_111(joaat("weapon_compactrifle"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_autoshotgun")) && iLocal_65[30] == uParam1->f_5)
	{
		func_111(joaat("weapon_autoshotgun"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_battleaxe")) && iLocal_65[31] == uParam1->f_5)
	{
		func_111(joaat("weapon_battleaxe"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_compactlauncher")) && iLocal_65[32] == uParam1->f_5)
	{
		func_111(joaat("weapon_compactlauncher"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_minismg")) && iLocal_65[33] == uParam1->f_5)
	{
		func_111(joaat("weapon_minismg"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_pipebomb")) && iLocal_65[34] == uParam1->f_5)
	{
		func_111(joaat("weapon_pipebomb"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_poolcue")) && iLocal_65[35] == uParam1->f_5)
	{
		func_111(joaat("weapon_poolcue"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_wrench")) && iLocal_65[36] == uParam1->f_5)
	{
		func_111(joaat("weapon_wrench"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_assaultrifle_mk2")) && iLocal_65[37] == uParam1->f_5)
	{
		func_111(joaat("weapon_assaultrifle_mk2"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_carbinerifle_mk2")) && iLocal_65[38] == uParam1->f_5)
	{
		func_111(joaat("weapon_carbinerifle_mk2"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_combatmg_mk2")) && iLocal_65[39] == uParam1->f_5)
	{
		func_111(joaat("weapon_combatmg_mk2"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_heavysniper_mk2")) && iLocal_65[40] == uParam1->f_5)
	{
		func_111(joaat("weapon_heavysniper_mk2"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_pistol_mk2")) && iLocal_65[41] == uParam1->f_5)
	{
		func_111(joaat("weapon_pistol_mk2"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_smg_mk2")) && iLocal_65[42] == uParam1->f_5)
	{
		func_111(joaat("weapon_smg_mk2"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_bullpuprifle_mk2")) && iLocal_65[43] == uParam1->f_5)
	{
		func_111(joaat("weapon_bullpuprifle_mk2"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_marksmanrifle_mk2")) && iLocal_65[44] == uParam1->f_5)
	{
		func_111(joaat("weapon_marksmanrifle_mk2"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_pumpshotgun_mk2")) && iLocal_65[45] == uParam1->f_5)
	{
		func_111(joaat("weapon_pumpshotgun_mk2"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_revolver_mk2")) && iLocal_65[46] == uParam1->f_5)
	{
		func_111(joaat("weapon_revolver_mk2"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_snspistol_mk2")) && iLocal_65[47] == uParam1->f_5)
	{
		func_111(joaat("weapon_snspistol_mk2"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_specialcarbine_mk2")) && iLocal_65[48] == uParam1->f_5)
	{
		func_111(joaat("weapon_specialcarbine_mk2"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_doubleaction")) && iLocal_65[49] == uParam1->f_5)
	{
		if (Global_262145.f_23088 && (func_107() || Global_1962240))
		{
			func_111(joaat("weapon_doubleaction"), uParam0, *uParam1, 0);
		}
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_stone_hatchet")) && iLocal_65[50] == uParam1->f_5)
	{
		if (Global_262145.f_23762 && func_105())
		{
			func_111(joaat("weapon_stone_hatchet"), uParam0, *uParam1, 0);
		}
	}
	if ((unk_0x2A9ED010C087BF2B(joaat("weapon_raycarbine")) && iLocal_65[51] == uParam1->f_5) && Global_262145.f_26321)
	{
		func_111(joaat("weapon_raycarbine"), uParam0, *uParam1, 0);
	}
	if ((unk_0x2A9ED010C087BF2B(joaat("weapon_rayminigun")) && iLocal_65[52] == uParam1->f_5) && Global_262145.f_26320)
	{
		func_111(joaat("weapon_rayminigun"), uParam0, *uParam1, 0);
	}
	if ((unk_0x2A9ED010C087BF2B(joaat("weapon_raypistol")) && (((func_17(25007, -1) || func_17(25002, -1)) || func_91(joaat("weapon_raypistol"), -1, 0)) || Global_262145.f_25360)) && iLocal_65[53] == uParam1->f_5)
	{
		func_111(joaat("weapon_raypistol"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_ceramicpistol")) && iLocal_65[54] == uParam1->f_5)
	{
		func_111(joaat("weapon_ceramicpistol"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_navyrevolver")) && iLocal_65[55] == uParam1->f_5)
	{
		if (Global_262145.f_27944 && (func_104() || Global_1962246))
		{
			func_111(joaat("weapon_navyrevolver"), uParam0, *uParam1, 0);
		}
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_militaryrifle")) && iLocal_65[56] == uParam1->f_5)
	{
		func_111(joaat("weapon_militaryrifle"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_combatshotgun")) && iLocal_65[57] == uParam1->f_5)
	{
		if (func_17(30632, -1))
		{
			func_111(joaat("weapon_combatshotgun"), uParam0, *uParam1, 0);
		}
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_gadgetpistol")) && iLocal_65[58] == uParam1->f_5)
	{
		if (func_102(106, -1))
		{
			func_111(joaat("weapon_gadgetpistol"), uParam0, *uParam1, 0);
		}
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_emplauncher")) && iLocal_65[59] == uParam1->f_5)
	{
		func_111(joaat("weapon_emplauncher"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_stungun_mp")) && iLocal_65[60] == uParam1->f_5)
	{
		func_111(joaat("weapon_stungun_mp"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_heavyrifle")) && iLocal_65[61] == uParam1->f_5)
	{
		func_111(joaat("weapon_heavyrifle"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_tacticalrifle")) && iLocal_65[62] == uParam1->f_5)
	{
		if (((Global_262145.f_32191 || func_91(joaat("weapon_tacticalrifle"), -1, 0)) || func_38(func_94(joaat("weapon_tacticalrifle")), -1)) || func_100(joaat("weapon_tacticalrifle")))
		{
			func_111(joaat("weapon_tacticalrifle"), uParam0, *uParam1, 0);
		}
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_precisionrifle")) && iLocal_65[63] == uParam1->f_5)
	{
		func_111(joaat("weapon_precisionrifle"), uParam0, *uParam1, 0);
	}
	if ((unk_0x2A9ED010C087BF2B(joaat("weapon_pistolxm3")) && (func_91(joaat("weapon_pistolxm3"), -1, 0) || func_27(joaat("weapon_pistolxm3"), -1))) && iLocal_65[64] == uParam1->f_5)
	{
		func_111(joaat("weapon_pistolxm3"), uParam0, *uParam1, 0);
	}
	if ((unk_0x2A9ED010C087BF2B(joaat("weapon_candycane")) && (func_91(joaat("weapon_candycane"), -1, 0) || func_27(joaat("weapon_candycane"), -1))) && iLocal_65[65] == uParam1->f_5)
	{
		func_111(joaat("weapon_candycane"), uParam0, *uParam1, 0);
	}
	if ((Global_262145.f_33232 && unk_0x2A9ED010C087BF2B(joaat("weapon_railgunxm3"))) && iLocal_65[67] == uParam1->f_5)
	{
		func_111(joaat("weapon_railgunxm3"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(350597077) && iLocal_65[68] == uParam1->f_5)
	{
		func_111(350597077, uParam0, *uParam1, 0);
	}
	if ((unk_0x2A9ED010C087BF2B(joaat("weapon_battlerifle")) && (Global_262145.f_34963 || Global_262145.f_35086)) && iLocal_65[69] == uParam1->f_5)
	{
		func_111(joaat("weapon_battlerifle"), uParam0, *uParam1, 0);
	}
	if ((unk_0x2A9ED010C087BF2B(joaat("weapon_snowlauncher")) && Global_262145.f_34964) && iLocal_65[70] == uParam1->f_5)
	{
		func_111(joaat("weapon_snowlauncher"), uParam0, *uParam1, 0);
	}
	if (unk_0x2A9ED010C087BF2B(-624951259) && iLocal_65[71] == uParam1->f_5)
	{
		func_111(-624951259, uParam0, *uParam1, 0);
	}
}

int func_100(int iParam0)
{
	if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), iParam0, 0))
	{
		return 1;
	}
	if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), iParam0, 0))
	{
		if (func_101(iParam0) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return 0;
	}
	return 1;
}

int func_102(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_103(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_103(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(10, uParam0, func_34(uParam1));
}

int func_104()
{
	if (func_17(28158, -1))
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	if (func_106(7315, -1) >= 6)
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_147();
	}
	return unk_0x03CFFD51CE515454(iParam0, iParam1);
}

int func_107()
{
	if (func_106(18981, -1) >= 4)
	{
		return 1;
	}
	return 0;
}

int func_108()
{
	var uVar0;
	
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
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 6);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x76CA59C648318506())
				{
					uVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, false);
					unk_0xED11291F7127888E(uVar0);
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

int func_109(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (BitTest(Global_113969.f_668.f_1320, 2))
		{
			return 1;
		}
	}
	if (unk_0xFE087BC8EB584AA2())
	{
		if (!bParam1 || unk_0x261E3728EE56B3AC())
		{
			if (!unk_0x0BA1A956D36B210F() && !func_110())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0xB0DF27929B02C57E())
		{
			return 0;
		}
	}
	if (unk_0xFE087BC8EB584AA2())
	{
		return 1;
	}
	return 0;
}

bool func_110()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

void func_111(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	char cVar1[16];
	float fVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	struct<5> Var7;
	struct<5> Var8;
	struct<5> Var9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	
	iParam3 = iParam3;
	StringCopy(&Var0, func_24(iParam0, 0), 16);
	if (((iParam0 == joaat("weapon_doubleaction") || iParam0 == joaat("weapon_compactrifle")) || iParam0 == joaat("weapon_compactlauncher")) || iParam0 == joaat("weapon_marksmanrifle"))
	{
		StringCopy(&cVar1, func_141(iParam0, 1), 16);
	}
	else
	{
		StringCopy(&cVar1, func_141(iParam0, 0), 16);
	}
	fVar2 = func_138(iParam0);
	uVar3 = func_137(iParam0, iParam2);
	uVar4 = func_136(iParam0, iParam2);
	iVar5 = func_135(iParam0, iParam2);
	uVar6 = func_134(iParam0, iParam2);
	unk_0x78640AA034DC7BAF(iParam0, &Var7);
	Var7.f_2 = unk_0xF4E66F9577F22476(iParam0);
	bVar13 = false;
	iVar12 = 0;
	while (iVar12 <= 8)
	{
		if (uParam1->f_1[iVar12] == 0 && unk_0x2A9ED010C087BF2B(iParam0))
		{
			if (func_97(iParam0))
			{
				if (func_95(joaat("component_gunrun_mk2_upgrade"), func_96(iParam0), -1))
				{
					bVar13 = true;
				}
				else
				{
					bVar13 = false;
				}
			}
			else if (func_91(iParam0, iParam2, 0))
			{
				bVar13 = true;
				if (bVar13)
				{
				}
			}
			else
			{
				bVar13 = false;
			}
			iVar11 = 0;
			while (iVar11 <= 35)
			{
				iVar10 = func_86(iParam0, iVar11);
				if (iVar10 != 0)
				{
					if (func_53(iVar10, iParam0, iParam2) && bVar13)
					{
						if (unk_0xF4CFBABEEF287C00(iVar10, &Var8))
						{
							Var9.f_0 = (Var9.f_0 + Var8.f_0);
							Var9.f_1 = (Var9.f_1 + Var8.f_1);
							Var9.f_3 = (Var9.f_3 + Var8.f_3);
							Var9.f_4 = (Var9.f_4 + Var8.f_4);
						}
					}
					if (func_64(iVar10, iParam0, iParam2))
					{
						if (func_133(iVar10))
						{
							Var9.f_2 = func_132(iParam0);
						}
						else if (func_131(iVar10))
						{
							Var9.f_2 = func_130(iParam0);
						}
					}
					if (func_95(iVar10, iParam0, iParam2))
					{
					}
				}
				iVar11++;
			}
			if (Var9.f_2 == 0)
			{
				Var9.f_2 = Var7.f_2;
			}
			func_129(iVar12, &Var0, &cVar1, uParam1);
			func_128(iVar12, Var7.f_0, uParam1);
			func_127(iVar12, Var9.f_0, uParam1);
			if (func_15(iParam0))
			{
				func_126(iVar12, -1, uParam1);
				func_125(iVar12, Var9.f_3, uParam1);
				func_124(iVar12, -1, uParam1);
				func_123(iVar12, Var9.f_4, uParam1);
				func_122(iVar12, -1, uParam1);
				func_121(iVar12, Var9.f_2, uParam1);
			}
			else
			{
				func_126(iVar12, Var7.f_3, uParam1);
				func_125(iVar12, Var9.f_3, uParam1);
				func_124(iVar12, Var7.f_4, uParam1);
				func_123(iVar12, Var9.f_4, uParam1);
				func_122(iVar12, Var7.f_2, uParam1);
				func_121(iVar12, Var9.f_2, uParam1);
			}
			func_120(iVar12, uVar4, uParam1);
			func_119(iVar12, uVar3, uParam1);
			if (func_15(iParam0))
			{
				func_118(iVar12, -1f, uParam1);
				func_117(iVar12, -1, uParam1);
			}
			else
			{
				func_118(iVar12, fVar2, uParam1);
				func_117(iVar12, iVar5, uParam1);
			}
			func_116(iVar12, uVar6, uParam1);
			func_115(iVar12, Var7.f_1, uParam1);
			func_114(iVar12, Var9.f_1, uParam1);
			func_113(iVar12, iParam0, uParam1);
			func_112(iParam2, uParam1);
			uParam1->f_1[iVar12] = 1;
			iVar12 = 9;
		}
		iVar12++;
	}
}

void func_112(int iParam0, var uParam1)
{
	uParam1->f_276 = iParam0;
}

void func_113(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_85[iParam0] = iParam1;
}

void func_114(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_205[iParam0] = uParam1;
}

void func_115(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_155[iParam0] = uParam1;
}

void func_116(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_135[iParam0] = uParam1;
}

void func_117(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_125[iParam0] = iParam1;
}

void func_118(int iParam0, float fParam1, var uParam2)
{
	uParam2->f_115[iParam0] = fParam1;
}

void func_119(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_95[iParam0] = uParam1;
}

void func_120(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_105[iParam0] = uParam1;
}

void func_121(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_215[iParam0] = uParam1;
}

void func_122(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_165[iParam0] = iParam1;
}

void func_123(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_235[iParam0] = uParam1;
}

void func_124(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_175[iParam0] = iParam1;
}

void func_125(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_225[iParam0] = uParam1;
}

void func_126(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_185[iParam0] = iParam1;
}

void func_127(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_195[iParam0] = uParam1;
}

void func_128(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_145[iParam0] = uParam1;
}

void func_129(int iParam0, char* sParam1, char* sParam2, var uParam3)
{
	StringCopy(&(uParam3->f_11[iParam0 /*4*/]), sParam1, 16);
	StringCopy(&(uParam3->f_48[iParam0 /*4*/]), sParam2, 16);
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 16;
		
		case joaat("weapon_combatpistol"):
			return 16;
		
		case joaat("weapon_appistol"):
			return 36;
		
		case joaat("weapon_pistol_mk2"):
			return 16;
		
		case joaat("weapon_microsmg"):
			return 30;
		
		case joaat("weapon_smg"):
			return 60;
		
		case joaat("weapon_smg_mk2"):
			return 60;
		
		case joaat("weapon_assaultrifle"):
			return 60;
		
		case joaat("weapon_carbinerifle"):
			return 60;
		
		case joaat("weapon_advancedrifle"):
			return 60;
		
		case joaat("weapon_assaultrifle_mk2"):
			return 60;
		
		case joaat("weapon_carbinerifle_mk2"):
			return 60;
		
		case joaat("weapon_mg"):
			return 100;
		
		case joaat("weapon_combatmg"):
			return 200;
		
		case joaat("weapon_combatmg_mk2"):
			return 200;
		
		case joaat("weapon_assaultshotgun"):
			return 32;
		
		case joaat("weapon_pistol50"):
			return 12;
		
		case joaat("weapon_assaultsmg"):
			return 60;
		
		case joaat("weapon_snspistol"):
			return 12;
		
		case joaat("weapon_specialcarbine"):
			return 60;
		
		case joaat("weapon_bullpuprifle"):
			return 60;
		
		case joaat("weapon_heavypistol"):
			return 36;
		
		case joaat("weapon_vintagepistol"):
			return 14;
		
		case joaat("weapon_gusenberg"):
			return 50;
		
		case joaat("weapon_marksmanrifle"):
			return 16;
		
		case joaat("weapon_heavyshotgun"):
			return 12;
		
		case joaat("weapon_combatpdw"):
			return 60;
		
		case joaat("weapon_compactrifle"):
			return 60;
		
		case joaat("weapon_machinepistol"):
			return 20;
		
		case joaat("weapon_minismg"):
			return 30;
		
		default:
	}
	return 0;
	return 0;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_appistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_microsmg_clip_02"):
			return 1;
			break;
		
		case joaat("component_smg_clip_02"):
			return 1;
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_mg_clip_02"):
			return 1;
			break;
		
		case joaat("component_combatmg_clip_02"):
			return 1;
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return 1;
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return 1;
			break;
		
		case joaat("component_pistol50_clip_02"):
			return 1;
			break;
		
		case -507117574:
			return 1;
			break;
		
		case 1048471894:
			return 1;
			break;
		
		case joaat("component_heavyrifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_specialcarbine_clip_02"):
			return 1;
			break;
		
		case joaat("component_bullpuprifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_heavypistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_snspistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_gusenberg_clip_02"):
			return 1;
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return 1;
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return 1;
			break;
		
		case joaat("component_compactrifle_clip_02"):
			return 1;
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return 1;
			break;
		
		case joaat("component_assaultrifle_mk2_clip_02"):
			return 1;
			break;
		
		case joaat("component_carbinerifle_mk2_clip_02"):
			return 1;
			break;
		
		case joaat("component_combatmg_mk2_clip_02"):
			return 1;
			break;
		
		case joaat("component_heavysniper_mk2_clip_02"):
			return 1;
			break;
		
		case joaat("component_pistol_mk2_clip_02"):
			return 1;
			break;
		
		case joaat("component_smg_mk2_clip_02"):
			return 1;
			break;
		
		case joaat("component_minismg_clip_02"):
			return 1;
			break;
	}
	return 0;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_smg"):
			return 100;
		
		case joaat("weapon_assaultrifle"):
			return 100;
		
		case joaat("weapon_carbinerifle"):
			return 100;
		
		case joaat("weapon_smg_mk2"):
			return 100;
		
		case joaat("weapon_assaultrifle_mk2"):
			return 100;
		
		case joaat("weapon_carbinerifle_mk2"):
			return 100;
		
		case joaat("weapon_specialcarbine"):
			return 100;
		
		case joaat("weapon_heavyshotgun"):
			return 30;
		
		case joaat("weapon_combatpdw"):
			return 100;
		
		case joaat("weapon_compactrifle"):
			return 100;
		
		case joaat("weapon_machinepistol"):
			return 30;
		
		default:
	}
	return 0;
	return 0;
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_assaultrifle_clip_03"):
			return 1;
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return 1;
			break;
		
		case joaat("component_combatpdw_clip_03"):
			return 1;
			break;
		
		case joaat("component_compactrifle_clip_03"):
			return 1;
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return 1;
			break;
		
		case joaat("component_machinepistol_clip_03"):
			return 1;
			break;
		
		case joaat("component_smg_clip_03"):
			return 1;
			break;
		
		case joaat("component_specialcarbine_clip_03"):
			return 1;
			break;
	}
	return 0;
}

float func_134(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
		case joaat("weapon_pistol_mk2"):
			return (system::to_float(func_32(251, iParam1)) / system::to_float(func_32(252, iParam1)));
		
		case joaat("weapon_combatpistol"):
			return (system::to_float(func_32(261, iParam1)) / system::to_float(func_32(262, iParam1)));
		
		case joaat("weapon_appistol"):
			return (system::to_float(func_32(281, iParam1)) / system::to_float(func_32(282, iParam1)));
		
		case joaat("weapon_microsmg"):
			return (system::to_float(func_32(291, iParam1)) / system::to_float(func_32(292, iParam1)));
		
		case joaat("weapon_smg"):
		case joaat("weapon_smg_mk2"):
			return (system::to_float(func_32(301, iParam1)) / system::to_float(func_32(302, iParam1)));
		
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_assaultrifle_mk2"):
			return (system::to_float(func_32(321, iParam1)) / system::to_float(func_32(322, iParam1)));
		
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_carbinerifle_mk2"):
			return (system::to_float(func_32(330, iParam1)) / system::to_float(func_32(331, iParam1)));
		
		case joaat("weapon_advancedrifle"):
			return (system::to_float(func_32(339, iParam1)) / system::to_float(func_32(340, iParam1)));
		
		case joaat("weapon_mg"):
			return (system::to_float(func_32(348, iParam1)) / system::to_float(func_32(349, iParam1)));
		
		case joaat("weapon_combatmg"):
		case joaat("weapon_combatmg_mk2"):
			return (system::to_float(func_32(357, iParam1)) / system::to_float(func_32(358, iParam1)));
		
		case joaat("weapon_pumpshotgun"):
			return (system::to_float(func_32(375, iParam1)) / system::to_float(func_32(376, iParam1)));
		
		case joaat("weapon_sawnoffshotgun"):
			return (system::to_float(func_32(384, iParam1)) / system::to_float(func_32(385, iParam1)));
		
		case joaat("weapon_assaultshotgun"):
			return (system::to_float(func_32(403, iParam1)) / system::to_float(func_32(404, iParam1)));
		
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_heavysniper_mk2"):
			return (system::to_float(func_32(422, iParam1)) / system::to_float(func_32(423, iParam1)));
		
		case joaat("weapon_heavysniper"):
			return (system::to_float(func_32(431, iParam1)) / system::to_float(func_32(432, iParam1)));
		
		case joaat("weapon_grenadelauncher"):
			return (system::to_float(func_32(442, iParam1)) / system::to_float(func_32(443, iParam1)));
		
		case joaat("weapon_rpg"):
			return (system::to_float(func_32(449, iParam1)) / system::to_float(func_32(450, iParam1)));
		
		case joaat("weapon_minigun"):
			return (system::to_float(func_32(456, iParam1)) / system::to_float(func_32(457, iParam1)));
		
		case joaat("weapon_grenade"):
			return (system::to_float(func_32(465, iParam1)) / system::to_float(func_32(466, iParam1)));
		
		case joaat("weapon_smokegrenade"):
			return (system::to_float(func_32(473, iParam1)) / system::to_float(func_32(474, iParam1)));
		
		case joaat("weapon_stickybomb"):
			return (system::to_float(func_32(482, iParam1)) / system::to_float(func_32(483, iParam1)));
		
		case joaat("weapon_molotov"):
			return (system::to_float(func_32(490, iParam1)) / system::to_float(func_32(491, iParam1)));
		
		case joaat("weapon_stungun"):
			return (system::to_float(func_32(412, iParam1)) / system::to_float(func_32(413, iParam1)));
		
		case joaat("weapon_knife"):
			return (system::to_float(func_32(194, iParam1)) / system::to_float(func_32(196, iParam1)));
		
		case joaat("weapon_nightstick"):
			return (system::to_float(func_32(202, iParam1)) / system::to_float(func_32(204, iParam1)));
		
		case joaat("weapon_hammer"):
			return (system::to_float(func_32(230, iParam1)) / system::to_float(func_32(232, iParam1)));
		
		case joaat("weapon_bat"):
			return (system::to_float(func_32(237, iParam1)) / system::to_float(func_32(239, iParam1)));
		
		case joaat("weapon_crowbar"):
			return (system::to_float(func_32(209, iParam1)) / system::to_float(func_32(211, iParam1)));
		
		case joaat("weapon_golfclub"):
			return (system::to_float(func_32(244, iParam1)) / system::to_float(func_32(246, iParam1)));
		
		case joaat("weapon_pistol50"):
			return (system::to_float(func_32(271, iParam1)) / system::to_float(func_32(272, iParam1)));
		
		case joaat("weapon_assaultsmg"):
			return (system::to_float(func_32(311, iParam1)) / system::to_float(func_32(312, iParam1)));
		
		case joaat("weapon_bullpupshotgun"):
			return (system::to_float(func_32(394, iParam1)) / system::to_float(func_32(395, iParam1)));
		
		case -572349828:
			return (system::to_float(func_32(366, iParam1)) / system::to_float(func_32(367, iParam1)));
		
		case 392730790:
			return (system::to_float(func_32(321, iParam1)) / system::to_float(func_32(322, iParam1)));
		
		case joaat("weapon_heavyrifle"):
			return (system::to_float(func_32(431, iParam1)) / system::to_float(func_32(432, iParam1)));
		
		case -1887867191:
			return (system::to_float(func_32(321, iParam1)) / system::to_float(func_32(322, iParam1)));
		
		case joaat("weapon_bottle"):
			return (system::to_float(func_32(1731, iParam1)) / system::to_float(func_32(1732, iParam1)));
		
		case joaat("weapon_snspistol"):
			return (system::to_float(func_32(1741, iParam1)) / system::to_float(func_32(1742, iParam1)));
		
		case joaat("weapon_specialcarbine"):
			return (system::to_float(func_32(12450, iParam1)) / system::to_float(func_32(12451, iParam1)));
		
		case joaat("weapon_bullpuprifle"):
			return (system::to_float(func_32(12460, iParam1)) / system::to_float(func_32(12461, iParam1)));
		
		case joaat("weapon_heavypistol"):
			return (system::to_float(func_32(12440, iParam1)) / system::to_float(func_32(12441, iParam1)));
		
		case joaat("weapon_dagger"):
			return (system::to_float(func_32(12727, iParam1)) / system::to_float(func_32(12728, iParam1)));
		
		case joaat("weapon_vintagepistol"):
			return (system::to_float(func_32(12737, iParam1)) / system::to_float(func_32(12738, iParam1)));
		
		case joaat("weapon_gusenberg"):
			return (system::to_float(func_32(12470, iParam1)) / system::to_float(func_32(12471, iParam1)));
		
		case joaat("weapon_musket"):
			return (system::to_float(func_32(12757, iParam1)) / system::to_float(func_32(12758, iParam1)));
		
		case joaat("weapon_firework"):
			return (system::to_float(func_32(12747, iParam1)) / system::to_float(func_32(12748, iParam1)));
		
		case joaat("weapon_heavyshotgun"):
			return (system::to_float(func_32(12835, iParam1)) / system::to_float(func_32(12836, iParam1)));
		
		case joaat("weapon_marksmanrifle"):
			return (system::to_float(func_32(12845, iParam1)) / system::to_float(func_32(12846, iParam1)));
		
		case joaat("weapon_hominglauncher"):
			return (system::to_float(func_32(12871, iParam1)) / system::to_float(func_32(12872, iParam1)));
		
		case joaat("weapon_proxmine"):
			return (system::to_float(func_32(12863, iParam1)) / system::to_float(func_32(12864, iParam1)));
		
		case joaat("weapon_combatpdw"):
			return (system::to_float(func_32(12879, iParam1)) / system::to_float(func_32(12880, iParam1)));
		
		case joaat("weapon_marksmanpistol"):
			return (system::to_float(func_32(12896, iParam1)) / system::to_float(func_32(12897, iParam1)));
		
		case joaat("weapon_knuckle"):
			return (system::to_float(func_32(12889, iParam1)) / system::to_float(func_32(12890, iParam1)));
		
		case joaat("weapon_machete"):
			return (system::to_float(func_32(12906, iParam1)) / system::to_float(func_32(12907, iParam1)));
		
		case joaat("weapon_machinepistol"):
			return (system::to_float(func_32(12914, iParam1)) / system::to_float(func_32(12915, iParam1)));
		
		case joaat("weapon_flashlight"):
			return (system::to_float(func_32(12952, iParam1)) / system::to_float(func_32(12953, iParam1)));
		
		case joaat("weapon_switchblade"):
			return (system::to_float(func_32(12980, iParam1)) / system::to_float(func_32(12981, iParam1)));
		
		case joaat("weapon_revolver"):
			return (system::to_float(func_32(12970, iParam1)) / system::to_float(func_32(12971, iParam1)));
		
		case joaat("weapon_dbshotgun"):
			return (system::to_float(func_32(12942, iParam1)) / system::to_float(func_32(12943, iParam1)));
		
		case joaat("weapon_compactrifle"):
			return (system::to_float(func_32(12932, iParam1)) / system::to_float(func_32(12933, iParam1)));
		
		case joaat("weapon_hatchet"):
			return (system::to_float(func_32(12855, iParam1)) / system::to_float(func_32(12856, iParam1)));
		
		case joaat("weapon_autoshotgun"):
			return (system::to_float(func_32(13021, iParam1)) / system::to_float(func_32(13022, iParam1)));
		
		case joaat("weapon_battleaxe"):
			return (system::to_float(func_32(13031, iParam1)) / system::to_float(func_32(13032, iParam1)));
		
		case joaat("weapon_compactlauncher"):
			return (system::to_float(func_32(13037, iParam1)) / system::to_float(func_32(13038, iParam1)));
		
		case joaat("weapon_minismg"):
			return (system::to_float(func_32(13047, iParam1)) / system::to_float(func_32(13048, iParam1)));
		
		case joaat("weapon_pipebomb"):
			return (system::to_float(func_32(13057, iParam1)) / system::to_float(func_32(13058, iParam1)));
		
		case joaat("weapon_poolcue"):
			return (system::to_float(func_32(13065, iParam1)) / system::to_float(func_32(13066, iParam1)));
		
		case joaat("weapon_wrench"):
			return (system::to_float(func_32(223, iParam1)) / system::to_float(func_32(225, iParam1)));
		
		case joaat("weapon_bullpuprifle_mk2"):
			return (system::to_float(func_32(13529, iParam1)) / system::to_float(func_32(13530, iParam1)));
		
		case joaat("weapon_marksmanrifle_mk2"):
			return (system::to_float(func_32(13549, iParam1)) / system::to_float(func_32(13550, iParam1)));
		
		case joaat("weapon_pumpshotgun_mk2"):
			return (system::to_float(func_32(13539, iParam1)) / system::to_float(func_32(13540, iParam1)));
		
		case joaat("weapon_revolver_mk2"):
			return (system::to_float(func_32(13559, iParam1)) / system::to_float(func_32(13560, iParam1)));
		
		case joaat("weapon_snspistol_mk2"):
			return (system::to_float(func_32(13579, iParam1)) / system::to_float(func_32(13580, iParam1)));
		
		case joaat("weapon_specialcarbine_mk2"):
			return (system::to_float(func_32(13589, iParam1)) / system::to_float(func_32(13590, iParam1)));
		
		case joaat("weapon_doubleaction"):
			return (system::to_float(func_32(13569, iParam1)) / system::to_float(func_32(13570, iParam1)));
		
		case joaat("weapon_stone_hatchet"):
			return (system::to_float(func_32(13792, iParam1)) / system::to_float(func_32(13793, iParam1)));
		
		case joaat("weapon_raypistol"):
			return (system::to_float(func_32(13949, iParam1)) / system::to_float(func_32(13950, iParam1)));
		
		case joaat("weapon_raycarbine"):
			return (system::to_float(func_32(13959, iParam1)) / system::to_float(func_32(13960, iParam1)));
		
		case joaat("weapon_rayminigun"):
			return (system::to_float(func_32(13969, iParam1)) / system::to_float(func_32(13970, iParam1)));
		
		case joaat("weapon_navyrevolver"):
			return (system::to_float(func_32(14400, iParam1)) / system::to_float(func_32(14401, iParam1)));
		
		case joaat("weapon_ceramicpistol"):
			return (system::to_float(func_32(14390, iParam1)) / system::to_float(func_32(14391, iParam1)));
		
		case joaat("weapon_militaryrifle"):
			return (system::to_float(func_32(14560, iParam1)) / system::to_float(func_32(14561, iParam1)));
		
		case joaat("weapon_combatshotgun"):
			return (system::to_float(func_32(14540, iParam1)) / system::to_float(func_32(14541, iParam1)));
		
		case joaat("weapon_gadgetpistol"):
			return (system::to_float(func_32(14550, iParam1)) / system::to_float(func_32(14551, iParam1)));
		
		case joaat("weapon_emplauncher"):
			return (system::to_float(func_32(14591, iParam1)) / system::to_float(func_32(14592, iParam1)));
		
		case joaat("weapon_stungun_mp"):
			return (system::to_float(func_32(14613, iParam1)) / system::to_float(func_32(14614, iParam1)));
		
		case joaat("weapon_precisionrifle"):
			return (system::to_float(func_32(14691, iParam1)) / system::to_float(func_32(14692, iParam1)));
		
		case joaat("weapon_tacticalrifle"):
			return (system::to_float(func_32(14681, iParam1)) / system::to_float(func_32(14682, iParam1)));
		
		case joaat("weapon_pistolxm3"):
			return (system::to_float(func_32(14701, iParam1)) / system::to_float(func_32(14702, iParam1)));
		
		case joaat("weapon_candycane"):
			return (system::to_float(func_32(14711, iParam1)) / system::to_float(func_32(14712, iParam1)));
		
		case joaat("weapon_railgunxm3"):
			return (system::to_float(func_32(14721, iParam1)) / system::to_float(func_32(14722, iParam1)));
		
		case 350597077:
			return (system::to_float(func_32(14785, iParam1)) / system::to_float(func_32(14786, iParam1)));
		
		case joaat("weapon_battlerifle"):
			return (system::to_float(func_32(14795, iParam1)) / system::to_float(func_32(14796, iParam1)));
		
		case joaat("weapon_snowlauncher"):
			return (system::to_float(func_32(14805, iParam1)) / system::to_float(func_32(14806, iParam1)));
		
		case -624951259:
			return (system::to_float(func_32(14825, iParam1)) / system::to_float(func_32(14826, iParam1)));
		
		default:
	}
	return 0f;
}

int func_135(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_32(255, iParam1);
		
		case joaat("weapon_combatpistol"):
			return func_32(265, iParam1);
		
		case joaat("weapon_appistol"):
			return func_32(285, iParam1);
		
		case joaat("weapon_microsmg"):
			return func_32(295, iParam1);
		
		case joaat("weapon_smg"):
			return func_32(305, iParam1);
		
		case joaat("weapon_assaultrifle"):
			return func_32(325, iParam1);
		
		case joaat("weapon_carbinerifle"):
			return func_32(334, iParam1);
		
		case joaat("weapon_advancedrifle"):
			return func_32(343, iParam1);
		
		case joaat("weapon_mg"):
			return func_32(352, iParam1);
		
		case joaat("weapon_combatmg"):
			return func_32(361, iParam1);
		
		case joaat("weapon_pumpshotgun"):
			return func_32(379, iParam1);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_32(388, iParam1);
		
		case joaat("weapon_assaultshotgun"):
			return func_32(407, iParam1);
		
		case joaat("weapon_sniperrifle"):
			return func_32(426, iParam1);
		
		case joaat("weapon_heavysniper"):
			return func_32(435, iParam1);
		
		case joaat("weapon_minigun"):
			return func_32(460, iParam1);
		
		case joaat("weapon_pistol50"):
			return func_32(275, iParam1);
		
		case joaat("weapon_assaultsmg"):
			return func_32(315, iParam1);
		
		case joaat("weapon_heavyrifle"):
			return func_32(435, iParam1);
		
		case joaat("weapon_bullpupshotgun"):
			return func_32(398, iParam1);
		
		case -572349828:
			return func_32(370, iParam1);
		
		case 392730790:
			return func_32(325, iParam1);
		
		case -1887867191:
			return func_32(325, iParam1);
		
		case -837150131:
			return func_32(325, iParam1);
		
		case joaat("weapon_snspistol"):
			return func_32(1745, iParam1);
		
		case joaat("weapon_specialcarbine"):
			return func_32(12454, iParam1);
		
		case joaat("weapon_bullpuprifle"):
			return func_32(12464, iParam1);
		
		case joaat("weapon_heavypistol"):
			return func_32(12444, iParam1);
		
		case joaat("weapon_vintagepistol"):
			return func_32(12741, iParam1);
		
		case joaat("weapon_gusenberg"):
			return func_32(12474, iParam1);
		
		case joaat("weapon_musket"):
			return func_32(12761, iParam1);
		
		case joaat("weapon_firework"):
			return func_32(12751, iParam1);
		
		case joaat("weapon_heavyshotgun"):
			return func_32(12839, iParam1);
		
		case joaat("weapon_marksmanrifle"):
			return func_32(12849, iParam1);
		
		case joaat("weapon_combatpdw"):
			return func_32(12883, iParam1);
		
		case joaat("weapon_marksmanpistol"):
			return func_32(12900, iParam1);
		
		case joaat("weapon_machinepistol"):
			return func_32(12918, iParam1);
		
		case joaat("weapon_revolver"):
			return func_32(12974, iParam1);
		
		case joaat("weapon_dbshotgun"):
			return func_32(12946, iParam1);
		
		case joaat("weapon_compactrifle"):
			return func_32(12936, iParam1);
		
		case joaat("weapon_autoshotgun"):
			return func_32(13025, iParam1);
		
		case joaat("weapon_minismg"):
			return func_32(13051, iParam1);
		
		case joaat("weapon_pistol_mk2"):
			return func_32(255, iParam1);
		
		case joaat("weapon_smg_mk2"):
			return func_32(305, iParam1);
		
		case joaat("weapon_heavysniper_mk2"):
			return func_32(435, iParam1);
		
		case joaat("weapon_combatmg_mk2"):
			return func_32(361, iParam1);
		
		case joaat("weapon_assaultrifle_mk2"):
			return func_32(325, iParam1);
		
		case joaat("weapon_carbinerifle_mk2"):
			return func_32(334, iParam1);
		
		case joaat("weapon_bullpuprifle_mk2"):
			return func_32(13533, iParam1);
		
		case joaat("weapon_marksmanrifle_mk2"):
			return func_32(13553, iParam1);
		
		case joaat("weapon_pumpshotgun_mk2"):
			return func_32(13543, iParam1);
		
		case joaat("weapon_revolver_mk2"):
			return func_32(13563, iParam1);
		
		case joaat("weapon_snspistol_mk2"):
			return func_32(13583, iParam1);
		
		case joaat("weapon_specialcarbine_mk2"):
			return func_32(13593, iParam1);
		
		case joaat("weapon_doubleaction"):
			return func_32(13573, iParam1);
		
		case joaat("weapon_raypistol"):
			return func_32(13953, iParam1);
		
		case joaat("weapon_raycarbine"):
			return func_32(13963, iParam1);
		
		case joaat("weapon_rayminigun"):
			return func_32(13973, iParam1);
		
		case joaat("weapon_militaryrifle"):
			return func_32(14564, iParam1);
		
		case joaat("weapon_combatshotgun"):
			return func_32(14544, iParam1);
		
		case joaat("weapon_gadgetpistol"):
			return func_32(14554, iParam1);
		
		case joaat("weapon_emplauncher"):
			return func_32(14595, iParam1);
		
		case joaat("weapon_stungun_mp"):
			return func_32(14617, iParam1);
		
		case joaat("weapon_precisionrifle"):
			return func_32(14695, iParam1);
		
		case joaat("weapon_tacticalrifle"):
			return func_32(14685, iParam1);
		
		case joaat("weapon_pistolxm3"):
			return func_32(14705, iParam1);
		
		case joaat("weapon_candycane"):
			return func_32(14715, iParam1);
		
		case joaat("weapon_railgunxm3"):
			return func_32(14725, iParam1);
		
		case 350597077:
			return func_32(14789, iParam1);
		
		case joaat("weapon_battlerifle"):
			return func_32(14799, iParam1);
		
		case joaat("weapon_snowlauncher"):
			return func_32(14809, iParam1);
		
		case -624951259:
			return func_32(14829, iParam1);
		
		default:
	}
	return 0;
}

int func_136(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_32(252, iParam1);
		
		case joaat("weapon_combatpistol"):
			return func_32(262, iParam1);
		
		case joaat("weapon_appistol"):
			return func_32(282, iParam1);
		
		case joaat("weapon_microsmg"):
			return func_32(292, iParam1);
		
		case joaat("weapon_smg"):
			return func_32(302, iParam1);
		
		case joaat("weapon_assaultrifle"):
			return func_32(322, iParam1);
		
		case joaat("weapon_carbinerifle"):
			return func_32(331, iParam1);
		
		case joaat("weapon_advancedrifle"):
			return func_32(340, iParam1);
		
		case joaat("weapon_mg"):
			return func_32(349, iParam1);
		
		case joaat("weapon_combatmg"):
			return func_32(358, iParam1);
		
		case joaat("weapon_pumpshotgun"):
			return func_32(376, iParam1);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_32(385, iParam1);
		
		case joaat("weapon_assaultshotgun"):
			return func_32(404, iParam1);
		
		case joaat("weapon_sniperrifle"):
			return func_32(423, iParam1);
		
		case joaat("weapon_heavysniper"):
			return func_32(432, iParam1);
		
		case joaat("weapon_grenadelauncher"):
			return func_32(443, iParam1);
		
		case joaat("weapon_rpg"):
			return func_32(450, iParam1);
		
		case joaat("weapon_minigun"):
			return func_32(457, iParam1);
		
		case joaat("weapon_grenade"):
			return func_32(466, iParam1);
		
		case joaat("weapon_smokegrenade"):
			return func_32(474, iParam1);
		
		case joaat("weapon_stickybomb"):
			return func_32(483, iParam1);
		
		case joaat("weapon_molotov"):
			return func_32(491, iParam1);
		
		case joaat("weapon_stungun"):
			return func_32(413, iParam1);
		
		case joaat("weapon_knife"):
			return func_32(196, iParam1);
		
		case joaat("weapon_nightstick"):
			return func_32(204, iParam1);
		
		case joaat("weapon_hammer"):
			return func_32(232, iParam1);
		
		case joaat("weapon_bat"):
			return func_32(239, iParam1);
		
		case joaat("weapon_crowbar"):
			return func_32(211, iParam1);
		
		case joaat("weapon_golfclub"):
			return func_32(246, iParam1);
		
		case joaat("weapon_pistol50"):
			return func_32(272, iParam1);
		
		case joaat("weapon_assaultsmg"):
			return func_32(312, iParam1);
		
		case joaat("weapon_heavyrifle"):
			return func_32(432, iParam1);
		
		case joaat("weapon_bullpupshotgun"):
			return func_32(395, iParam1);
		
		case -572349828:
			return func_32(367, iParam1);
		
		case 392730790:
			return func_32(322, iParam1);
		
		case -1887867191:
			return func_32(322, iParam1);
		
		case -837150131:
			return func_32(322, iParam1);
		
		case joaat("weapon_bottle"):
			return func_32(1732, iParam1);
		
		case joaat("weapon_snspistol"):
			return func_32(1742, iParam1);
		
		case joaat("weapon_specialcarbine"):
			return func_32(12451, iParam1);
		
		case joaat("weapon_bullpuprifle"):
			return func_32(12461, iParam1);
		
		case joaat("weapon_heavypistol"):
			return func_32(12441, iParam1);
		
		case joaat("weapon_dagger"):
			return func_32(12728, iParam1);
		
		case joaat("weapon_vintagepistol"):
			return func_32(12738, iParam1);
		
		case joaat("weapon_gusenberg"):
			return func_32(12471, iParam1);
		
		case joaat("weapon_musket"):
			return func_32(12758, iParam1);
		
		case joaat("weapon_firework"):
			return func_32(12748, iParam1);
		
		case joaat("weapon_heavyshotgun"):
			return func_32(12836, iParam1);
		
		case joaat("weapon_marksmanrifle"):
			return func_32(12846, iParam1);
		
		case joaat("weapon_proxmine"):
			return func_32(12864, iParam1);
		
		case joaat("weapon_hominglauncher"):
			return func_32(12872, iParam1);
		
		case joaat("weapon_combatpdw"):
			return func_32(12880, iParam1);
		
		case joaat("weapon_marksmanpistol"):
			return func_32(12897, iParam1);
		
		case joaat("weapon_knuckle"):
			return func_32(12890, iParam1);
		
		case joaat("weapon_machete"):
			return func_32(12907, iParam1);
		
		case joaat("weapon_machinepistol"):
			return func_32(12915, iParam1);
		
		case joaat("weapon_flashlight"):
			return func_32(12953, iParam1);
		
		case joaat("weapon_switchblade"):
			return func_32(12981, iParam1);
		
		case joaat("weapon_revolver"):
			return func_32(12971, iParam1);
		
		case joaat("weapon_dbshotgun"):
			return func_32(12943, iParam1);
		
		case joaat("weapon_compactrifle"):
			return func_32(12933, iParam1);
		
		case joaat("weapon_hatchet"):
			return func_32(12856, iParam1);
		
		case joaat("weapon_autoshotgun"):
			return func_32(13022, iParam1);
		
		case joaat("weapon_battleaxe"):
			return func_32(13032, iParam1);
		
		case joaat("weapon_compactlauncher"):
			return func_32(13038, iParam1);
		
		case joaat("weapon_minismg"):
			return func_32(13048, iParam1);
		
		case joaat("weapon_pipebomb"):
			return func_32(13058, iParam1);
		
		case joaat("weapon_poolcue"):
			return func_32(13066, iParam1);
		
		case joaat("weapon_wrench"):
			return func_32(225, iParam1);
		
		case joaat("weapon_pistol_mk2"):
			return func_32(252, iParam1);
		
		case joaat("weapon_smg_mk2"):
			return func_32(302, iParam1);
		
		case joaat("weapon_heavysniper_mk2"):
			return func_32(432, iParam1);
		
		case joaat("weapon_combatmg_mk2"):
			return func_32(358, iParam1);
		
		case joaat("weapon_assaultrifle_mk2"):
			return func_32(322, iParam1);
		
		case joaat("weapon_carbinerifle_mk2"):
			return func_32(331, iParam1);
		
		case joaat("weapon_bullpuprifle_mk2"):
			return func_32(13530, iParam1);
		
		case joaat("weapon_marksmanrifle_mk2"):
			return func_32(13550, iParam1);
		
		case joaat("weapon_pumpshotgun_mk2"):
			return func_32(13540, iParam1);
		
		case joaat("weapon_revolver_mk2"):
			return func_32(13560, iParam1);
		
		case joaat("weapon_snspistol_mk2"):
			return func_32(13580, iParam1);
		
		case joaat("weapon_specialcarbine_mk2"):
			return func_32(13590, iParam1);
		
		case joaat("weapon_doubleaction"):
			return func_32(13570, iParam1);
		
		case joaat("weapon_stone_hatchet"):
			return func_32(13793, iParam1);
		
		case joaat("weapon_raypistol"):
			return func_32(13950, iParam1);
		
		case joaat("weapon_raycarbine"):
			return func_32(13960, iParam1);
		
		case joaat("weapon_rayminigun"):
			return func_32(13970, iParam1);
		
		case joaat("weapon_navyrevolver"):
			return func_32(14401, iParam1);
		
		case joaat("weapon_ceramicpistol"):
			return func_32(14391, iParam1);
		
		case joaat("weapon_gadgetpistol"):
			return func_32(14551, iParam1);
		
		case joaat("weapon_militaryrifle"):
			return func_32(14561, iParam1);
		
		case joaat("weapon_combatshotgun"):
			return func_32(14541, iParam1);
		
		case joaat("weapon_emplauncher"):
			return func_32(14592, iParam1);
		
		case joaat("weapon_stungun_mp"):
			return func_32(14614, iParam1);
		
		case joaat("weapon_precisionrifle"):
			return func_32(14692, iParam1);
		
		case joaat("weapon_tacticalrifle"):
			return func_32(14682, iParam1);
		
		case joaat("weapon_pistolxm3"):
			return func_32(14702, iParam1);
		
		case joaat("weapon_candycane"):
			return func_32(14712, iParam1);
		
		case joaat("weapon_railgunxm3"):
			return func_32(14722, iParam1);
		
		case 350597077:
			return func_32(14786, iParam1);
		
		case joaat("weapon_battlerifle"):
			return func_32(14796, iParam1);
		
		case joaat("weapon_snowlauncher"):
			return func_32(14806, iParam1);
		
		case -624951259:
			return func_32(14826, iParam1);
		
		default:
	}
	return 0;
}

int func_137(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_32(251, iParam1);
		
		case joaat("weapon_combatpistol"):
			return func_32(261, iParam1);
		
		case joaat("weapon_appistol"):
			return func_32(281, iParam1);
		
		case joaat("weapon_microsmg"):
			return func_32(291, iParam1);
		
		case joaat("weapon_smg"):
			return func_32(301, iParam1);
		
		case joaat("weapon_assaultrifle"):
			return func_32(321, iParam1);
		
		case joaat("weapon_carbinerifle"):
			return func_32(330, iParam1);
		
		case joaat("weapon_advancedrifle"):
			return func_32(339, iParam1);
		
		case joaat("weapon_mg"):
			return func_32(348, iParam1);
		
		case joaat("weapon_combatmg"):
			return func_32(357, iParam1);
		
		case joaat("weapon_pumpshotgun"):
			return func_32(375, iParam1);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_32(384, iParam1);
		
		case joaat("weapon_assaultshotgun"):
			return func_32(403, iParam1);
		
		case joaat("weapon_sniperrifle"):
			return func_32(422, iParam1);
		
		case joaat("weapon_heavysniper"):
			return func_32(431, iParam1);
		
		case joaat("weapon_grenadelauncher"):
			return func_32(442, iParam1);
		
		case joaat("weapon_rpg"):
			return func_32(449, iParam1);
		
		case joaat("weapon_minigun"):
			return func_32(456, iParam1);
		
		case joaat("weapon_grenade"):
			return func_32(465, iParam1);
		
		case joaat("weapon_smokegrenade"):
			return func_32(473, iParam1);
		
		case joaat("weapon_stickybomb"):
			return func_32(482, iParam1);
		
		case joaat("weapon_molotov"):
			return func_32(490, iParam1);
		
		case joaat("weapon_stungun"):
			return func_32(412, iParam1);
		
		case joaat("weapon_knife"):
			return func_32(194, iParam1);
		
		case joaat("weapon_nightstick"):
			return func_32(202, iParam1);
		
		case joaat("weapon_hammer"):
			return func_32(230, iParam1);
		
		case joaat("weapon_bat"):
			return func_32(237, iParam1);
		
		case joaat("weapon_crowbar"):
			return func_32(209, iParam1);
		
		case joaat("weapon_golfclub"):
			return func_32(244, iParam1);
		
		case joaat("weapon_pistol50"):
			return func_32(271, iParam1);
		
		case joaat("weapon_assaultsmg"):
			return func_32(311, iParam1);
		
		case joaat("weapon_heavyrifle"):
			return func_32(431, iParam1);
		
		case joaat("weapon_bullpupshotgun"):
			return func_32(394, iParam1);
		
		case -572349828:
			return func_32(366, iParam1);
		
		case 392730790:
			return func_32(321, iParam1);
		
		case -1887867191:
			return func_32(321, iParam1);
		
		case -837150131:
			return func_32(321, iParam1);
		
		case joaat("weapon_bottle"):
			return func_32(1731, iParam1);
		
		case joaat("weapon_snspistol"):
			return func_32(1741, iParam1);
		
		case joaat("weapon_specialcarbine"):
			return func_32(12450, iParam1);
		
		case joaat("weapon_bullpuprifle"):
			return func_32(12460, iParam1);
		
		case joaat("weapon_heavypistol"):
			return func_32(12440, iParam1);
		
		case joaat("weapon_dagger"):
			return func_32(12727, iParam1);
		
		case joaat("weapon_vintagepistol"):
			return func_32(12737, iParam1);
		
		case joaat("weapon_gusenberg"):
			return func_32(12470, iParam1);
		
		case joaat("weapon_musket"):
			return func_32(12757, iParam1);
		
		case joaat("weapon_firework"):
			return func_32(12747, iParam1);
		
		case joaat("weapon_heavyshotgun"):
			return func_32(12835, iParam1);
		
		case joaat("weapon_marksmanrifle"):
			return func_32(12845, iParam1);
		
		case joaat("weapon_proxmine"):
			return func_32(12863, iParam1);
		
		case joaat("weapon_hominglauncher"):
			return func_32(12871, iParam1);
		
		case joaat("weapon_combatpdw"):
			return func_32(12879, iParam1);
		
		case joaat("weapon_marksmanpistol"):
			return func_32(12896, iParam1);
		
		case joaat("weapon_knuckle"):
			return func_32(12889, iParam1);
		
		case joaat("weapon_machete"):
			return func_32(12906, iParam1);
		
		case joaat("weapon_machinepistol"):
			return func_32(12914, iParam1);
		
		case joaat("weapon_flashlight"):
			return func_32(12952, iParam1);
		
		case joaat("weapon_switchblade"):
			return func_32(12980, iParam1);
		
		case joaat("weapon_revolver"):
			return func_32(12970, iParam1);
		
		case joaat("weapon_dbshotgun"):
			return func_32(12942, iParam1);
		
		case joaat("weapon_compactrifle"):
			return func_32(12932, iParam1);
		
		case joaat("weapon_hatchet"):
			return func_32(12855, iParam1);
		
		case joaat("weapon_autoshotgun"):
			return func_32(13021, iParam1);
		
		case joaat("weapon_battleaxe"):
			return func_32(13031, iParam1);
		
		case joaat("weapon_compactlauncher"):
			return func_32(13037, iParam1);
		
		case joaat("weapon_minismg"):
			return func_32(13047, iParam1);
		
		case joaat("weapon_pipebomb"):
			return func_32(13057, iParam1);
		
		case joaat("weapon_poolcue"):
			return func_32(13065, iParam1);
		
		case joaat("weapon_wrench"):
			return func_32(223, iParam1);
		
		case joaat("weapon_pistol_mk2"):
			return func_32(251, iParam1);
		
		case joaat("weapon_smg_mk2"):
			return func_32(301, iParam1);
		
		case joaat("weapon_heavysniper_mk2"):
			return func_32(431, iParam1);
		
		case joaat("weapon_combatmg_mk2"):
			return func_32(357, iParam1);
		
		case joaat("weapon_assaultrifle_mk2"):
			return func_32(321, iParam1);
		
		case joaat("weapon_carbinerifle_mk2"):
			return func_32(330, iParam1);
		
		case joaat("weapon_bullpuprifle_mk2"):
			return func_32(13529, iParam1);
		
		case joaat("weapon_marksmanrifle_mk2"):
			return func_32(13549, iParam1);
		
		case joaat("weapon_pumpshotgun_mk2"):
			return func_32(13539, iParam1);
		
		case joaat("weapon_revolver_mk2"):
			return func_32(13559, iParam1);
		
		case joaat("weapon_snspistol_mk2"):
			return func_32(13579, iParam1);
		
		case joaat("weapon_specialcarbine_mk2"):
			return func_32(13589, iParam1);
		
		case joaat("weapon_doubleaction"):
			return func_32(13569, iParam1);
		
		case joaat("weapon_stone_hatchet"):
			return func_32(13792, iParam1);
		
		case joaat("weapon_raypistol"):
			return func_32(13949, iParam1);
		
		case joaat("weapon_raycarbine"):
			return func_32(13959, iParam1);
		
		case joaat("weapon_rayminigun"):
			return func_32(13969, iParam1);
		
		case joaat("weapon_navyrevolver"):
			return func_32(14400, iParam1);
		
		case joaat("weapon_ceramicpistol"):
			return func_32(14390, iParam1);
		
		case joaat("weapon_gadgetpistol"):
			return func_32(14550, iParam1);
		
		case joaat("weapon_militaryrifle"):
			return func_32(14560, iParam1);
		
		case joaat("weapon_combatshotgun"):
			return func_32(14540, iParam1);
		
		case joaat("weapon_emplauncher"):
			return func_32(14540, iParam1);
		
		case joaat("weapon_stungun_mp"):
			return func_32(14613, iParam1);
		
		case joaat("weapon_precisionrifle"):
			return func_32(14691, iParam1);
		
		case joaat("weapon_tacticalrifle"):
			return func_32(14681, iParam1);
		
		case joaat("weapon_pistolxm3"):
			return func_32(14701, iParam1);
		
		case joaat("weapon_candycane"):
			return func_32(14711, iParam1);
		
		case joaat("weapon_railgunxm3"):
			return func_32(14721, iParam1);
		
		case 350597077:
			return func_32(14785, iParam1);
		
		case joaat("weapon_battlerifle"):
			return func_32(14795, iParam1);
		
		case joaat("weapon_snowlauncher"):
			return func_32(14805, iParam1);
		
		case -624951259:
			return func_32(14825, iParam1);
		
		default:
	}
	return 0;
}

float func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			iVar0 = 253;
			iVar1 = 254;
			break;
		
		case joaat("weapon_pistol_mk2"):
			iVar0 = 253;
			iVar1 = 254;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar0 = 263;
			iVar1 = 264;
			break;
		
		case joaat("weapon_appistol"):
			iVar0 = 283;
			iVar1 = 284;
			break;
		
		case joaat("weapon_microsmg"):
			iVar0 = 293;
			iVar1 = 294;
			break;
		
		case joaat("weapon_smg"):
			iVar0 = 303;
			iVar1 = 304;
			break;
		
		case joaat("weapon_smg_mk2"):
			iVar0 = 303;
			iVar1 = 304;
			break;
		
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_assaultrifle_mk2"):
			iVar0 = 323;
			iVar1 = 324;
			break;
		
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_carbinerifle_mk2"):
			iVar0 = 332;
			iVar1 = 333;
			break;
		
		case joaat("weapon_specialcarbine"):
			iVar0 = 12452;
			iVar1 = 12453;
			break;
		
		case joaat("weapon_snspistol"):
			iVar0 = 1743;
			iVar1 = 1744;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar0 = 341;
			iVar1 = 342;
			break;
		
		case joaat("weapon_mg"):
			iVar0 = 350;
			iVar1 = 351;
			break;
		
		case joaat("weapon_combatmg"):
		case joaat("weapon_combatmg_mk2"):
			iVar0 = 359;
			iVar1 = 360;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar0 = 386;
			iVar1 = 387;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar0 = 377;
			iVar1 = 378;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar0 = 405;
			iVar1 = 406;
			break;
		
		case joaat("weapon_sniperrifle"):
			iVar0 = 424;
			iVar1 = 425;
			break;
		
		case joaat("weapon_heavysniper"):
		case joaat("weapon_heavysniper_mk2"):
			iVar0 = 433;
			iVar1 = 434;
			break;
		
		case joaat("weapon_grenadelauncher"):
			iVar0 = 444;
			iVar1 = 442;
			break;
		
		case joaat("weapon_minigun"):
			iVar0 = 458;
			iVar1 = 459;
			break;
		
		case joaat("weapon_rpg"):
			iVar0 = 451;
			iVar1 = 449;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			iVar0 = 396;
			iVar1 = 397;
			break;
		
		case joaat("weapon_assaultsmg"):
			iVar0 = 313;
			iVar1 = 314;
			break;
		
		case joaat("weapon_pistol50"):
			iVar0 = 273;
			iVar1 = 274;
			break;
		
		case joaat("weapon_heavypistol"):
			iVar0 = 12442;
			iVar1 = 12443;
			break;
		
		case joaat("weapon_bullpuprifle"):
			iVar0 = 12462;
			iVar1 = 12463;
			break;
		
		case joaat("weapon_gusenberg"):
			iVar0 = 12472;
			iVar1 = 12473;
			break;
		
		case joaat("weapon_vintagepistol"):
			iVar0 = 12739;
			iVar1 = 12740;
			break;
		
		case joaat("weapon_musket"):
			iVar0 = 12759;
			iVar1 = 12760;
			break;
		
		case joaat("weapon_firework"):
			iVar0 = 12749;
			iVar1 = 12750;
			break;
		
		case joaat("weapon_flaregun"):
			iVar0 = 12492;
			iVar1 = 12493;
			break;
		
		case joaat("weapon_heavyshotgun"):
			iVar0 = 12837;
			iVar1 = 12838;
			break;
		
		case joaat("weapon_marksmanrifle"):
			iVar0 = 12847;
			iVar1 = 12848;
			break;
		
		case joaat("weapon_hominglauncher"):
			iVar0 = 12873;
			iVar1 = 12871;
			break;
		
		case joaat("weapon_proxmine"):
			iVar0 = 12865;
			iVar1 = 12863;
			break;
		
		case joaat("weapon_combatpdw"):
			iVar0 = 12881;
			iVar1 = 12882;
			break;
		
		case joaat("weapon_marksmanpistol"):
			iVar0 = 12898;
			iVar1 = 12899;
			break;
		
		case joaat("weapon_machinepistol"):
			iVar0 = 12916;
			iVar1 = 12917;
			break;
		
		case joaat("weapon_compactrifle"):
			iVar0 = 12934;
			iVar1 = 12935;
			break;
		
		case joaat("weapon_dbshotgun"):
			iVar0 = 12944;
			iVar1 = 12945;
			break;
		
		case joaat("weapon_revolver"):
			iVar0 = 12972;
			iVar1 = 12973;
			break;
		
		case joaat("weapon_autoshotgun"):
			iVar0 = 13023;
			iVar1 = 13024;
			break;
		
		case joaat("weapon_minismg"):
			iVar0 = 13049;
			iVar1 = 13050;
			break;
		
		case joaat("weapon_compactlauncher"):
			iVar0 = 13039;
			iVar1 = 13037;
			break;
		
		case joaat("weapon_doubleaction"):
			iVar0 = 13571;
			iVar1 = 13572;
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			iVar1 = 13529;
			iVar0 = 13531;
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			iVar1 = 13549;
			iVar0 = 13551;
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			iVar1 = 13539;
			iVar0 = 13541;
			break;
		
		case joaat("weapon_revolver_mk2"):
			iVar1 = 13559;
			iVar0 = 13561;
			break;
		
		case joaat("weapon_snspistol_mk2"):
			iVar1 = 13579;
			iVar0 = 13581;
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			iVar1 = 13589;
			iVar0 = 13591;
			break;
		
		case joaat("weapon_raycarbine"):
			iVar0 = 13961;
			iVar1 = 13962;
			break;
		
		case joaat("weapon_rayminigun"):
			iVar0 = 13971;
			iVar1 = 13972;
			break;
		
		case joaat("weapon_raypistol"):
			iVar0 = 13951;
			iVar1 = 13952;
			break;
		
		case joaat("weapon_navyrevolver"):
			iVar0 = 14402;
			iVar1 = 14403;
			break;
		
		case joaat("weapon_ceramicpistol"):
			iVar0 = 14392;
			iVar1 = 14393;
			break;
		
		case joaat("weapon_combatshotgun"):
			iVar0 = 14542;
			iVar1 = 14543;
			break;
		
		case joaat("weapon_gadgetpistol"):
			iVar0 = 14552;
			iVar1 = 14553;
			break;
		
		case joaat("weapon_militaryrifle"):
			iVar0 = 14562;
			iVar1 = 14563;
			break;
		
		case joaat("weapon_heavyrifle"):
			iVar0 = 14603;
			iVar1 = 14604;
			break;
		
		case joaat("weapon_emplauncher"):
			iVar0 = 14593;
			iVar1 = 14594;
			break;
		
		case joaat("weapon_stungun_mp"):
			iVar0 = 14615;
			iVar1 = 14616;
			break;
		
		case joaat("weapon_tacticalrifle"):
			iVar0 = 14683;
			iVar1 = 14684;
			break;
		
		case joaat("weapon_precisionrifle"):
			iVar0 = 14693;
			iVar1 = 14694;
			break;
		
		case joaat("weapon_pistolxm3"):
			iVar0 = 14703;
			iVar1 = 14704;
			break;
		
		case joaat("weapon_candycane"):
			iVar0 = 14713;
			iVar1 = 14714;
			break;
		
		case joaat("weapon_railgunxm3"):
			iVar0 = 14723;
			iVar1 = 14724;
			break;
		
		case 350597077:
			iVar0 = 14787;
			iVar1 = 14788;
			break;
		
		case joaat("weapon_battlerifle"):
			iVar0 = 14797;
			iVar1 = 14798;
			break;
		
		case joaat("weapon_snowlauncher"):
			iVar0 = 14807;
			iVar1 = 14808;
			break;
		
		case -624951259:
			iVar0 = 14827;
			iVar1 = 14828;
			break;
	}
	if ((func_140(iParam0) || iParam0 == joaat("weapon_flashlight")) || func_139(iParam0, 0))
	{
	}
	else
	{
		fVar2 = system::to_float(func_32(iVar0, -1));
		fVar3 = system::to_float(func_32(iVar1, -1));
		if (fVar2 > 0f)
		{
			fVar4 = (fVar3 / fVar2);
			if (fVar4 > 1f)
			{
				fVar4 = 1f;
			}
			fVar4 = (fVar4 * 100f);
			iVar5 = system::round(fVar4);
			fVar4 = system::to_float(iVar5);
			return fVar4;
		}
	}
	return 0f;
}

int func_139(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case joaat("weapon_pipebomb"):
			return 1;
			break;
	}
	if (iParam1 && iParam0 == joaat("weapon_snowball"))
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
		case joaat("weapon_battleaxe"):
		case joaat("weapon_poolcue"):
		case joaat("weapon_wrench"):
		case joaat("weapon_stone_hatchet"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_candycane"):
		case -624951259:
			return 1;
		
		default:
	}
	return 0;
}

char* func_141(int iParam0, bool bParam1)
{
	struct<16> Var0;
	struct<16> Var1;
	struct<16> Var2;
	struct<16> Var3;
	
	if (func_143(iParam0) && !bParam1)
	{
		switch (iParam0)
		{
			case joaat("weapon_marksmanrifle"):
				if (unk_0x76CD105BCAC6EB9F())
				{
					if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_marksmanrifle_mk2"), 0))
					{
						return "WCD_MK1_LOCK";
					}
				}
				return "WTDE2_MKRIFLE";
				break;
			
			case joaat("weapon_compactrifle"):
				return "WTDE2_CMPRIFLE";
				break;
			
			case joaat("weapon_compactlauncher"):
				return "WTDE2_CMPGL";
				break;
			
			default:
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		
		case joaat("weapon_unarmed"):
			return "";
			break;
		
		case joaat("weapon_pistol"):
			return "WT_PIST_DESC";
			break;
		
		case joaat("weapon_combatpistol"):
			return "WTD_PIST_CBT";
			break;
		
		case joaat("weapon_appistol"):
			return "WTD_PIST_AP";
			break;
		
		case joaat("weapon_smg"):
			return "WTD_SMG";
			break;
		
		case joaat("weapon_microsmg"):
			return "WTD_SMG_MCR";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "WTD_RIFLE_ASL";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "WTD_RIFLE_CBN";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "WTD_RIFLE_ADV";
			break;
		
		case joaat("weapon_mg"):
			return "WTD_MG";
			break;
		
		case joaat("weapon_combatmg"):
			return "WTD_MG_CBT";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "WTD_SG_PMP";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "WTD_SG_SOF";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "WTD_SG_ASL";
			break;
		
		case joaat("weapon_heavysniper"):
			return "WTD_SNIP_HVY";
			break;
		
		case joaat("weapon_remotesniper"):
			return "WTD_SNIP_RMT";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "WTD_SNIP_RIF";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "WTD_GL";
			break;
		
		case joaat("weapon_rpg"):
			return "WTD_RPG";
			break;
		
		case joaat("weapon_minigun"):
			return "WTD_MINIGUN";
			break;
		
		case joaat("weapon_grenade"):
			return "WTD_GNADE";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "WTD_GNADE_SMK";
			break;
		
		case joaat("weapon_stickybomb"):
			return "WTD_GNADE_STK";
			break;
		
		case joaat("weapon_molotov"):
			return "WTD_MOLOTOV";
			break;
		
		case joaat("weapon_stungun"):
			return "WTD_STUN";
			break;
		
		case joaat("weapon_petrolcan"):
			return "WTD_PETROL";
			break;
		
		case joaat("weapon_digiscanner"):
			return "WTD_DIGI";
			break;
		
		case joaat("weapon_electric_fence"):
			return "WTD_ELCFEN";
			break;
		
		case joaat("vehicle_weapon_tank"):
			return "";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "";
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			return "";
			break;
		
		case joaat("object"):
			return "";
			break;
		
		case joaat("gadget_parachute"):
			return "WTD_PARA";
			break;
		
		case joaat("AMMO_RPG"):
			return "";
			break;
		
		case joaat("AMMO_TANK"):
			return "";
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			return "";
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			return "";
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			return "";
			break;
		
		case joaat("weapon_knife"):
			return "WTD_KNIFE";
			break;
		
		case joaat("weapon_nightstick"):
			return "WTD_NGTSTK";
			break;
		
		case joaat("weapon_hammer"):
			return "WTD_HAMMER";
			break;
		
		case joaat("weapon_bat"):
			return "WTD_BAT";
			break;
		
		case joaat("weapon_crowbar"):
			return "WTD_CROWBAR";
			break;
		
		case joaat("weapon_golfclub"):
			return "WTD_GOLFCLUB";
			break;
		
		case joaat("weapon_hatchet"):
			return "WTD_DLC_HATCHET";
			break;
		
		case joaat("weapon_rammed_by_car"):
			return "";
			break;
		
		case joaat("weapon_run_over_by_car"):
			return "";
			break;
		
		case joaat("weapon_assaultsmg"):
			return "WTD_SMG_ASL";
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return "WTD_SG_BLP";
			break;
		
		case joaat("weapon_pistol50"):
			return "WTD_PIST_50";
			break;
		
		case joaat("weapon_vintagepistol"):
			return "WTD_VPISTOL";
			break;
		
		case joaat("weapon_dagger"):
			return "WTD_DAGGER";
			break;
		
		case joaat("weapon_proxmine"):
			return "WTD_PRXMINE";
			break;
		
		case joaat("weapon_hominglauncher"):
			return "WTD_HOMLNCH";
			break;
		
		case joaat("weapon_machete"):
			return "WTD_MACHETE";
			break;
		
		case joaat("weapon_machinepistol"):
			return "WTD_MCHPIST";
			break;
		
		case joaat("weapon_flashlight"):
			return "WTD_FLASHLIGHT";
			break;
		
		case joaat("weapon_dbshotgun"):
			return "WTD_DBSHGN";
			break;
		
		case joaat("weapon_compactrifle"):
			return "WTD_CMPRIFLE";
			break;
		
		case joaat("weapon_switchblade"):
			return "WTD_SWBLADE";
			break;
		
		case joaat("weapon_revolver"):
			return "WTD_REVOLVER";
			break;
		
		case joaat("weapon_doubleaction"):
			if (func_142(joaat("mpply_headshotchlengecompleted")) || bParam1)
			{
				return "WTD_REV_DA";
			}
			else if (unk_0xFE087BC8EB584AA2())
			{
				return "WTD_REV_DA_2";
			}
			else
			{
				return "WTD_REV_SIGNUP";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_specialcarbine_mk2"), 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_26(iParam0, &Var0) != -1)
			{
				return func_25(&(Var0.f_15));
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_marksmanrifle_mk2"), 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_26(iParam0, &Var1) != -1)
			{
				return func_25(&(Var1.f_15));
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x66B90BA528CFEBCE(unk_0x4A8C381C258A124D(), joaat("weapon_bullpuprifle_mk2"), 0))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_26(iParam0, &Var2) != -1)
			{
				return func_25(&(Var2.f_15));
			}
			break;
		
		case joaat("weapon_raypistol"):
			return "WTD_RAYPISTOL";
			break;
		
		case joaat("weapon_raycarbine"):
			return "WTD_RAYCARBINE";
			break;
		
		case joaat("weapon_rayminigun"):
			return "WTD_RAYMINIGUN";
			break;
		
		case joaat("weapon_navyrevolver"):
			return "WTD_REV_NV";
			break;
		
		case joaat("weapon_ceramicpistol"):
			return "WTD_CERPST";
			break;
		
		case joaat("weapon_militaryrifle"):
			return "WTD_MLTRYRFL";
			break;
		
		case joaat("weapon_gadgetpistol"):
			return "WTD_GDGTPST";
			break;
		
		case joaat("weapon_combatshotgun"):
			return "WTD_CMBSHGN";
			break;
		
		case joaat("weapon_snowlauncher"):
			return "WTD_SNOWLNCHR";
			break;
		
		default:
			if (func_26(iParam0, &Var3) != -1)
			{
				return func_25(&(Var3.f_15));
			}
			break;
	}
	return "WT_INVALID";
}

int func_142(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_143(int iParam0)
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_144())
		{
			if ((iParam0 == joaat("weapon_marksmanrifle") || iParam0 == joaat("weapon_compactrifle")) || iParam0 == joaat("weapon_compactlauncher"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_144()
{
	return (func_146() || func_145());
}

int func_145()
{
	switch (unk_0xB83FBB552E8DBF61())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_146()
{
	switch (unk_0xEF05628918C6842D())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_147()
{
	return Global_1574926;
}

int func_148(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

void func_149()
{
	func_150(0, -1, -1, 0, 0);
}

void func_150(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	unk_0xF3F7B05FC4684A7C("SET_COLUMN_SCROLL");
	unk_0x330108B080A2132F(iParam0);
	unk_0x330108B080A2132F(iParam1);
	unk_0x330108B080A2132F(iParam2);
	unk_0x330108B080A2132F(-1);
	if (!unk_0xD6F9DEE4765092A9(sParam3))
	{
		unk_0x882AEFD55B8D51FB(sParam3);
		unk_0x511D14ED2DA887E1(iParam1);
		unk_0x511D14ED2DA887E1(iParam2);
		unk_0xCFAD3D478C87321A();
	}
	else
	{
		func_18("");
	}
	unk_0x557F1E2300EF1A3E(iParam4);
	unk_0xE6B753D52F4CA222();
}

void func_151(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	func_153();
	iVar0 = 9;
	iVar1 = uParam0->f_277;
	if (uParam1->f_5 < iLocal_63)
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	else
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	iVar2 = uParam1->f_5 + 1;
	uVar3 = iLocal_63 + 1;
	func_150(0, iVar2, uVar3, "HUD_PAGE", 0);
}

int func_152(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = iParam0;
	iVar1 = func_37(iVar0);
	bVar2 = func_28(iVar0);
	if ((unk_0x2645430E708CBFAC(2, iParam0) || unk_0x61C3701AD6D746B2(2, iParam0)) || func_6(iParam0, &(Global_1668667.f_1060), 1))
	{
		if (!BitTest(Global_1668667.f_1049[iVar1], bVar2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1668667.f_1049[iVar1]), bVar2);
			return 1;
		}
	}
	else if (BitTest(Global_1668667.f_1049[iVar1], bVar2))
	{
		unk_0x8744D2E3FC95740E(&(Global_1668667.f_1049[iVar1]), bVar2);
	}
	return 0;
}

void func_153()
{
	iLocal_64 = 0;
	iLocal_63 = 3;
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_hammer")))
	{
		iLocal_65[10] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[10] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_pistol50")))
	{
		iLocal_65[0] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[0] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_bullpupshotgun")))
	{
		iLocal_65[1] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[1] = -1;
	}
	if (func_109(1, 0))
	{
		if (unk_0x2A9ED010C087BF2B(joaat("weapon_sawnoffshotgun")))
		{
			iLocal_65[2] = ((iLocal_64 / 9) + iLocal_63);
			iLocal_64++;
		}
		else
		{
			iLocal_65[2] = -1;
		}
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_bottle")))
	{
		iLocal_65[3] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[3] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_snspistol")))
	{
		iLocal_65[4] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[4] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_gusenberg")))
	{
		iLocal_65[11] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[11] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_heavypistol")))
	{
		iLocal_65[7] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[7] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_specialcarbine")))
	{
		iLocal_65[5] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[5] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_bullpuprifle")))
	{
		iLocal_65[6] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[6] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_dagger")))
	{
		iLocal_65[8] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[8] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_vintagepistol")))
	{
		iLocal_65[9] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[9] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_firework")))
	{
		iLocal_65[14] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[14] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_musket")))
	{
		iLocal_65[13] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[13] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_heavyshotgun")))
	{
		iLocal_65[15] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[15] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_marksmanrifle")))
	{
		iLocal_65[16] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[16] = -1;
	}
	if (func_108() || Global_262145.f_19963)
	{
		if (unk_0x2A9ED010C087BF2B(joaat("weapon_hatchet")))
		{
			iLocal_65[22] = ((iLocal_64 / 9) + iLocal_63);
			iLocal_64++;
		}
		else
		{
			iLocal_65[22] = -1;
		}
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_hominglauncher")))
	{
		iLocal_65[18] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[18] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_proxmine")))
	{
		iLocal_65[17] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[17] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_flaregun")))
	{
		iLocal_65[12] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[12] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_combatpdw")))
	{
		iLocal_65[19] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[19] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_marksmanpistol")))
	{
		iLocal_65[20] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[20] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_knuckle")))
	{
		iLocal_65[21] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[21] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_machete")))
	{
		iLocal_65[23] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[23] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_machinepistol")))
	{
		iLocal_65[24] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[24] = -1;
	}
	if (Global_262145.f_12036 && unk_0x2A9ED010C087BF2B(joaat("weapon_flashlight")))
	{
		iLocal_65[25] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[25] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_revolver")))
	{
		iLocal_65[26] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[26] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_switchblade")))
	{
		iLocal_65[27] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[27] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_dbshotgun")))
	{
		iLocal_65[28] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[28] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_compactrifle")))
	{
		iLocal_65[29] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[29] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_autoshotgun")))
	{
		iLocal_65[30] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[30] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_battleaxe")))
	{
		iLocal_65[31] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[31] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_compactlauncher")))
	{
		iLocal_65[32] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[32] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_minismg")))
	{
		iLocal_65[33] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[33] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_pipebomb")))
	{
		iLocal_65[34] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[34] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_poolcue")))
	{
		iLocal_65[35] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[35] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_wrench")))
	{
		iLocal_65[36] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[36] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_assaultrifle_mk2")))
	{
		iLocal_65[37] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[37] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_carbinerifle_mk2")))
	{
		iLocal_65[38] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[38] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_combatmg_mk2")))
	{
		iLocal_65[39] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[39] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_heavysniper_mk2")))
	{
		iLocal_65[40] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[40] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_pistol_mk2")))
	{
		iLocal_65[41] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[41] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_smg_mk2")))
	{
		iLocal_65[42] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[42] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_bullpuprifle_mk2")))
	{
		iLocal_65[43] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[43] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_marksmanrifle_mk2")))
	{
		iLocal_65[44] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[44] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_pumpshotgun_mk2")))
	{
		iLocal_65[45] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[45] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_revolver_mk2")))
	{
		iLocal_65[46] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[46] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_snspistol_mk2")))
	{
		iLocal_65[47] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[47] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_specialcarbine_mk2")))
	{
		iLocal_65[48] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[48] = -1;
	}
	if ((Global_262145.f_23088 && unk_0x2A9ED010C087BF2B(joaat("weapon_doubleaction"))) && (func_107() || Global_1962240))
	{
		iLocal_65[49] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[49] = -1;
	}
	if ((Global_262145.f_23762 && unk_0x2A9ED010C087BF2B(joaat("weapon_stone_hatchet"))) && func_105())
	{
		iLocal_65[50] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[50] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_raycarbine")) && Global_262145.f_26321)
	{
		iLocal_65[51] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[51] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_rayminigun")) && Global_262145.f_26320)
	{
		iLocal_65[52] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[52] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_raypistol")) && (((func_17(25007, -1) || func_17(25002, -1)) || func_91(joaat("weapon_raypistol"), -1, 0)) || Global_262145.f_25360))
	{
		iLocal_65[53] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[53] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_ceramicpistol")))
	{
		iLocal_65[54] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[54] = -1;
	}
	if ((Global_262145.f_27944 && unk_0x2A9ED010C087BF2B(joaat("weapon_navyrevolver"))) && (func_104() || Global_1962246))
	{
		iLocal_65[55] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[55] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_militaryrifle")))
	{
		iLocal_65[56] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[56] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_combatshotgun")) && func_17(30632, -1))
	{
		iLocal_65[57] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[57] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_gadgetpistol")) && func_102(106, -1))
	{
		iLocal_65[58] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[58] = -1;
	}
	if ((Global_262145.f_27944 && unk_0x2A9ED010C087BF2B(joaat("weapon_navyrevolver"))) && (func_104() || Global_1962246))
	{
		iLocal_65[55] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[55] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_emplauncher")))
	{
		iLocal_65[59] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[59] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_stungun_mp")))
	{
		iLocal_65[60] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[60] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_heavyrifle")))
	{
		iLocal_65[61] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[61] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_tacticalrifle")) && (((Global_262145.f_32191 || func_91(joaat("weapon_tacticalrifle"), -1, 0)) || func_38(func_94(joaat("weapon_tacticalrifle")), -1)) || func_100(joaat("weapon_tacticalrifle"))))
	{
		iLocal_65[62] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[62] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_precisionrifle")))
	{
		iLocal_65[63] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[63] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_pistolxm3")) && (func_91(joaat("weapon_pistolxm3"), -1, 0) || func_27(joaat("weapon_pistolxm3"), -1)))
	{
		iLocal_65[64] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[64] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_candycane")) && (func_91(joaat("weapon_candycane"), -1, 0) || func_27(joaat("weapon_candycane"), -1)))
	{
		iLocal_65[65] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[65] = -1;
	}
	if (Global_262145.f_33232 && unk_0x2A9ED010C087BF2B(joaat("weapon_railgunxm3")))
	{
		iLocal_65[67] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[67] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(350597077))
	{
		iLocal_65[68] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[68] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(joaat("weapon_battlerifle")) && ((Global_262145.f_34963 || Global_262145.f_35086) || func_154(joaat("weapon_battlerifle"))))
	{
		iLocal_65[69] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[69] = -1;
	}
	if (Global_262145.f_34964 && unk_0x2A9ED010C087BF2B(joaat("weapon_snowlauncher")))
	{
		iLocal_65[70] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[70] = -1;
	}
	if (unk_0x2A9ED010C087BF2B(-624951259) && (Global_262145.f_35585 || func_154(-624951259)))
	{
		iLocal_65[71] = ((iLocal_64 / 9) + iLocal_63);
		iLocal_64++;
	}
	else
	{
		iLocal_65[71] = -1;
	}
	if (iLocal_64 == 0)
	{
		iLocal_63 = 2;
		iLocal_64 = 9;
	}
	else
	{
		iLocal_63 = (iLocal_63 + (iLocal_64 / 9));
		iLocal_64 = (iLocal_64 - (9 * (iLocal_64 / 9)));
		if (iLocal_64 == 0)
		{
			iLocal_63 = (iLocal_63 - 1);
			iLocal_64 = 9;
		}
	}
}

int func_154(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0 || iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam0 == Global_262145.f_33273[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_155(int iParam0, var uParam1)
{
	uParam1->f_277 = iParam0;
}

void func_156()
{
	func_153();
	func_157();
	func_150(0, 1, iLocal_63 + 1, "HUD_PAGE", 0);
}

void func_157()
{
	func_158(1);
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		func_159(0, 3, 0, 2, 0, 0);
	}
	else
	{
		func_159(0, 2, 0, 2, 1, 0);
	}
}

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xF3F7B05FC4684A7C("INIT_COLUMN_SCROLL");
	unk_0x330108B080A2132F(iParam0);
	unk_0x557F1E2300EF1A3E(0);
	unk_0x330108B080A2132F(iParam1);
	unk_0x330108B080A2132F(iParam2);
	unk_0x330108B080A2132F(iParam3);
	unk_0x557F1E2300EF1A3E(1);
	unk_0x330108B080A2132F(iParam4);
	unk_0x557F1E2300EF1A3E(iParam5);
	unk_0xE6B753D52F4CA222();
}

void func_160(var uParam0)
{
	uParam0->f_284 = 1;
}

void func_161(var uParam0)
{
	uParam0->f_283 = 1;
}

void func_162(var uParam0)
{
	func_163(uParam0);
	uParam0->f_281 = 1;
}

void func_163(var uParam0)
{
	*uParam0 = { Global_1666639 };
}

int func_164()
{
	return Global_32948;
}

