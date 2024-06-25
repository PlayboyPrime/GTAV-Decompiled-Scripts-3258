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
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
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
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
#endregion

void __EntryFunction__()
{
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_52 = 2;
	unk_0x51CC1333A10C4E09();
	if (unk_0x96CFB880BAC634CE(32))
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	while (true)
	{
		func_106();
		switch (iLocal_53)
		{
			case 0:
				func_101();
				break;
			
			case 1:
				func_92();
				func_2();
				Global_98797 = 0;
				break;
			
			case 2:
				func_1();
				break;
		}
		system::wait(0);
	}
}

void func_1()
{
	iLocal_53 = 0;
}

void func_2()
{
	int iVar0;
	bool bVar1;
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
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	
	if (iLocal_59)
	{
		iLocal_59 = 0;
	}
	else
	{
		iLocal_54++;
	}
	bLocal_58 = false;
	if (unk_0x76CD105BCAC6EB9F())
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = func_87();
	}
	if (iVar0 != iLocal_57)
	{
		iLocal_57 = iVar0;
		bLocal_58 = true;
		iLocal_65 = 0;
		iLocal_66 = 0;
		iLocal_73 = 0;
		iLocal_79 = 0;
	}
	if (iLocal_57 == 145)
	{
		return;
	}
	bVar1 = false;
	if ((iLocal_54 == 6 && func_86(64)) || (iLocal_54 == 5 && unk_0x486FF5D06E9659F1(joaat("pilot_school")) > 0))
	{
		bVar1 = true;
		iLocal_59 = 1;
	}
	func_80();
	if (Global_98795 || (Global_98796 && !func_77(0)))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			iVar2 = 0;
			while (iVar2 < 8)
			{
				func_76(iLocal_57, iVar2);
				iVar2++;
			}
			Global_98795 = 0;
		}
	}
	if (!bVar1)
	{
		if (((((((((unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) || (!unk_0x76CD105BCAC6EB9F() && !func_75(iLocal_57))) || unk_0x3555462DB47B7AB1()) || func_74()) || unk_0xFD216000DC314A92()) || unk_0x15CCE8886267624F()) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || Global_79387) || Global_98797) || iLocal_60)
		{
			iLocal_81 = 1;
			iLocal_82 = unk_0x1DD05E817C89C737();
			if (unk_0x76CD105BCAC6EB9F())
			{
				uLocal_83 = unk_0x7E3F74F641EE6B27();
			}
			return;
		}
		if (iLocal_81)
		{
			if ((!unk_0x76CD105BCAC6EB9F() && (unk_0x1DD05E817C89C737() - iLocal_82) > 3000) || (unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_83, 3000))))
			{
				iLocal_81 = 0;
			}
			else
			{
				return;
			}
		}
	}
	if (((!unk_0x76CD105BCAC6EB9F() && (unk_0x1DD05E817C89C737() - iLocal_55) > 2000) || (unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_56, 2000)))) || bLocal_58)
	{
		if (iLocal_54 >= 8)
		{
			iLocal_54 = 0;
			iLocal_55 = unk_0x1DD05E817C89C737();
			if (unk_0x76CD105BCAC6EB9F())
			{
				uLocal_56 = unk_0x7E3F74F641EE6B27();
			}
		}
		iVar11 = 1;
		if (bLocal_58)
		{
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = true;
			if (bLocal_58)
			{
				iVar8 = iVar12;
			}
			else
			{
				iVar8 = iLocal_54;
			}
			func_73(iLocal_57, iVar8, &iVar6, &iVar7);
			if (unk_0x76CD105BCAC6EB9F())
			{
				iVar3 = func_72(iVar7, -1);
			}
			else if (iVar8 == 0)
			{
				iVar3 = Global_113969.f_2366.f_539.f_2387[iLocal_57];
			}
			else
			{
				unk_0xDF7F16323520B858(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = func_71(iVar3, 0, 100);
			if (func_58(iLocal_57, iVar8, iVar3, &iVar4))
			{
				if (unk_0x76CD105BCAC6EB9F())
				{
					func_56(iVar7, iVar4, -1, 1);
				}
				else if (iVar8 == 0)
				{
					if (Global_113969.f_2366.f_539.f_2387[iLocal_57] == 0)
					{
						bVar13 = false;
					}
					Global_113969.f_2366.f_539.f_2387[iLocal_57] = iVar4;
				}
				else
				{
					unk_0x1164A75E490C27B6(iVar6, iVar4, 1);
				}
				if (iVar4 > func_54(iLocal_57, iVar8, -1))
				{
					if (unk_0x76CD105BCAC6EB9F())
					{
						if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_39, 19))
						{
							bVar13 = false;
						}
					}
					else if ((!Global_113969.f_9088 && !func_53(0)) || !BitTest(Global_113969.f_9088.f_2[27 /*3*/], 2))
					{
						bVar13 = false;
					}
					iVar14 = iVar4;
					iVar15 = (iVar14 - (iVar14 % func_52(iLocal_57, iVar8)));
					if ((iVar14 % func_52(iLocal_57, iVar8)) >= 0)
					{
						iVar15 = (iVar15 + func_52(iLocal_57, iVar8));
					}
					if (iVar14 >= iVar15)
					{
						iVar14 = iVar15;
					}
					else
					{
						iVar14 = (iVar15 - func_52(iLocal_57, iVar8));
					}
					if (iVar4 > iVar14)
					{
						bVar13 = false;
					}
					if (func_46())
					{
						bVar13 = false;
					}
					if (bVar13)
					{
						if (!bLocal_58)
						{
							if (unk_0x76CD105BCAC6EB9F())
							{
								if (func_45(117, -1) == 0)
								{
									if (!unk_0x4C705AAF75363287() && func_9())
									{
										func_8("STAT_HELP2", -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							iLocal_60 = 1;
							iLocal_63 = (iVar4 - iVar3);
							iLocal_63 = (iLocal_63 + (iVar3 % func_52(iLocal_57, iVar8)));
							iLocal_64 = iVar4;
							iLocal_61 = iLocal_57;
							iLocal_62 = iVar8;
						}
					}
					if (iVar4 >= 100)
					{
						if (func_3(iLocal_57, iVar8, &iVar9))
						{
							if (iLocal_57 == 0)
							{
								unk_0xDF7F16323520B858(joaat("sp0_total_playing_time"), &iVar10, -1);
								unk_0x1164A75E490C27B6(iVar9, iVar10, 1);
							}
							else if (iLocal_57 == 1)
							{
								unk_0xDF7F16323520B858(joaat("sp1_total_playing_time"), &iVar10, -1);
								unk_0x1164A75E490C27B6(iVar9, iVar10, 1);
							}
							else if (iLocal_57 == 2)
							{
								unk_0xDF7F16323520B858(joaat("sp2_total_playing_time"), &iVar10, -1);
								unk_0x1164A75E490C27B6(iVar9, iVar10, 1);
							}
							else if (iLocal_57 == 3)
							{
							}
						}
					}
				}
				func_76(iLocal_57, iVar8);
			}
			else if (iVar4 < iVar5)
			{
				bVar16 = true;
				if (unk_0x76CD105BCAC6EB9F())
				{
					func_56(iVar7, iVar4, -1, 1);
				}
				else if (iVar8 == 0)
				{
					Global_113969.f_2366.f_539.f_2387[iLocal_57] = iVar4;
					bVar16 = false;
				}
				else
				{
					unk_0x1164A75E490C27B6(iVar6, iVar4, 1);
				}
				if (bVar16)
				{
					func_76(iLocal_57, iVar8);
				}
			}
			iVar12++;
		}
	}
	else
	{
		iLocal_59 = 1;
	}
}

bool func_3(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = joaat("last_playing_time");
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability_maxed");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability_maxed");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_maxed");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina_maxed");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity_maxed");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength_maxed");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability_maxed");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability_maxed");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability_maxed");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability_maxed");
					break;
			}
			break;
	}
	return *uParam2 != joaat("last_playing_time");
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_5(iParam0, iParam2);
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, iParam3);
	}
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

void func_8(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_9()
{
	int iVar0;
	
	iVar0 = unk_0x8034325BF6D6E41F();
	if (Global_1928629 == iVar0)
	{
		return Global_1928630;
	}
	else
	{
		Global_1928629 = iVar0;
		Global_1928630 = 0;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_39, 19))
		{
			return 0;
		}
	}
	if ((unk_0xC5D15A335232A15D() && unk_0xBE259DBA45F2996E()) && !func_44(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (Global_1928631 == 1)
	{
		return 0;
	}
	if (Global_1928440 == 1)
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (unk_0xB2E86D4871B30979())
	{
		return 0;
	}
	if (Global_1836667 == 1)
	{
		return 0;
	}
	if (unk_0xF6D8C7059C3C2495())
	{
		return 0;
	}
	if (Global_1057441)
	{
		return 0;
	}
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 16))
	{
		return 0;
	}
	if (func_42())
	{
		return 0;
	}
	if (func_41())
	{
		return 0;
	}
	if (func_40())
	{
		if (!func_41())
		{
			if (!func_39(3, -1))
			{
				if (func_37(&Global_2698837, 300000, 0) == 1)
				{
					func_36(&Global_2698835);
					func_34(3, -1);
				}
				else if (func_37(&Global_2698835, 7000, 0) == 0)
				{
					return 0;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_33())
	{
		return 0;
	}
	if (func_32())
	{
		return 0;
	}
	if (func_30())
	{
		return 0;
	}
	if (func_29())
	{
		return 0;
	}
	if (func_28())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	if (unk_0x0721B5D4CF3ACD02())
	{
		return 0;
	}
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (unk_0x5EA7A06A1491D450())
	{
		if (func_26(unk_0x4A8C381C258A124D()) == joaat("weapon_sniperrifle") || func_26(unk_0x4A8C381C258A124D()) == joaat("weapon_heavysniper"))
		{
			return 0;
		}
	}
	if (unk_0x15CCE8886267624F())
	{
		return 0;
	}
	if (func_25(8, -1))
	{
		return 0;
	}
	if (func_24(12, -1))
	{
		return 0;
	}
	if (unk_0x7B035E8A1D320F1B(19))
	{
		return 0;
	}
	if (func_23())
	{
		return 0;
	}
	if (func_22())
	{
		return 0;
	}
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2))
	{
		return 0;
	}
	if (Global_1836451)
	{
		return 0;
	}
	if (Global_1836455)
	{
		return 0;
	}
	if (Global_1836457)
	{
		return 0;
	}
	if (Global_2672855.f_3737.f_39)
	{
		return 0;
	}
	if (func_21(0))
	{
		return 0;
	}
	if (func_20())
	{
		return 0;
	}
	if (Global_2738934.f_4084)
	{
		return 0;
	}
	if (Global_2672855.f_3603)
	{
		return 0;
	}
	if (!func_19(unk_0x259BE71D8A81D4FA(), 1, 0))
	{
		return 0;
	}
	if (func_18(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (Global_2672855.f_3737.f_39 == 1)
	{
		return 0;
	}
	if (Global_2685444.f_2847.f_26 == 1)
	{
		return 0;
	}
	if (func_17(1))
	{
		return 0;
	}
	if (func_15())
	{
		return 0;
	}
	if (unk_0x7B035E8A1D320F1B(16))
	{
		return 0;
	}
	if (func_14())
	{
		return 0;
	}
	if (func_13())
	{
		return 0;
	}
	if (unk_0x3273F980CC5E02CD())
	{
		if (func_12("FHU_HELP3"))
		{
			return 0;
		}
	}
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 6))
	{
		return 0;
	}
	if (func_10(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	Global_1928630 = 1;
	return 1;
}

int func_10(int iParam0)
{
	if (iParam0 != func_11())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_370, 26);
	}
	return 0;
}

int func_11()
{
	return -1;
}

bool func_12(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

bool func_13()
{
	return Global_2672855.f_1728.f_701 != 0;
}

bool func_14()
{
	return Global_2672855.f_2881.f_582;
}

bool func_15()
{
	return func_16();
}

bool func_16()
{
	return Global_1663588.f_40 == 3;
}

bool func_17(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23692.f_4 && Global_23692.f_104 == 4);
	}
	return Global_23692.f_4;
}

bool func_18(int iParam0)
{
	return BitTest(Global_1882632[iParam0 /*146*/].f_17, 0);
}

int func_19(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x75EAB09F5E974116(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if (unk_0x486FF5D06E9659F1(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_22()
{
	return Global_1668667.f_112;
}

bool func_23()
{
	return Global_2672855.f_2557[0 /*80*/].f_1 != 0;
}

int func_24(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1668667.f_137[iParam1])
				{
					return 1;
				}
				if (Global_1668667.f_170[iParam1])
				{
					return 1;
				}
			}
			break;
		
		default:
			if (BitTest(Global_1668667.f_1046, bParam0))
			{
				return 1;
			}
			if (BitTest(Global_1668667.f_1047, bParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_25(int iParam0, int iParam1)
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

int func_26(int iParam0)
{
	var uVar0;
	
	unk_0x23B29877D0BE9547(iParam0, &uVar0, 1);
	return uVar0;
}

bool func_27()
{
	return Global_2684504.f_694;
}

bool func_28()
{
	return BitTest(Global_1048576.f_10, 13);
}

bool func_29()
{
	return Global_2684504.f_693;
}

int func_30()
{
	if (func_31() == 1 || func_31() == 4)
	{
		return 1;
	}
	return 0;
}

int func_31()
{
	return Global_1574633.f_18;
}

int func_32()
{
	if (func_31() == 3 || func_31() == 2)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (unk_0x486FF5D06E9659F1(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_34(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	if (unk_0x76CA59C648318506() == 0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0:
			unk_0x1A169A00A9C3A74E(0, iParam1);
			iVar1 = func_35(iParam1);
			iVar0 = unk_0x38640D2193CB547F(iVar1);
			break;
		
		default:
			iVar1 = func_35(iParam1);
			iVar0 = unk_0x38640D2193CB547F(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&iVar0, bParam0);
				unk_0x1A169A00A9C3A74E(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_4(120, 0, iParam1, 1);
			func_4(124, 0, iParam1, 1);
			func_4(115, 0, iParam1, 1);
			func_4(119, 0, iParam1, 1);
			func_4(121, 0, iParam1, 1);
			func_4(122, 0, iParam1, 1);
			func_4(125, 0, iParam1, 1);
			func_56(1304, 0, iParam1, 1);
			func_56(7236, 0, iParam1, 1);
			break;
	}
}

int func_35(int iParam0)
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

void func_36(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_37(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_38(uParam0, bParam2, 0);
	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
		{
			func_36(uParam0);
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
	{
		func_36(uParam0);
		return 1;
	}
	return 0;
}

void func_38(var uParam0, bool bParam1, bool bParam2)
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

bool func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	iVar0 = func_35(iParam1);
	iVar1 = unk_0x38640D2193CB547F(iVar0);
	return BitTest(iVar1, iParam0);
}

int func_40()
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
					unk_0x0B0C9A0F9AAEB7F0(&iVar0, false);
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

bool func_41()
{
	return Global_1575083;
}

bool func_42()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_193 != 0;
}

bool func_43()
{
	return Global_2708056;
}

bool func_44(int iParam0)
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_3, 13);
}

int func_45(int iParam0, int iParam1)
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

int func_46()
{
	if (!func_50(1))
	{
		return 0;
	}
	if (func_47())
	{
		return 0;
	}
	return Global_1941100;
}

bool func_47()
{
	return func_48(unk_0x259BE71D8A81D4FA());
}

int func_48(int iParam0)
{
	if (func_49(iParam0))
	{
		if (func_49(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_49(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

bool func_50(bool bParam0)
{
	return func_51(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_51(int iParam0, bool bParam1)
{
	if (!func_49(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_48(iParam0))
		{
			return 0;
		}
	}
	return func_49(Global_1887305[iParam0 /*610*/].f_10);
}

int func_52(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 20;
					break;
				
				case 3:
					return 20;
					break;
				
				case 2:
					return 20;
					break;
				
				case 4:
					return 20;
					break;
				
				case 5:
					return 20;
					break;
				
				case 6:
					return 20;
					break;
				
				case 7:
					return 20;
					break;
			}
			break;
	}
	return 1;
}

int func_53(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		if (func_55(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 47;
					break;
				
				case 3:
					return 22;
					break;
				
				case 2:
					return 21;
					break;
				
				case 4:
					return 54;
					break;
				
				case 5:
					return 31;
					break;
				
				case 6:
					return 79;
					break;
				
				case 7:
					return 81;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 51;
					break;
				
				case 3:
					return 46;
					break;
				
				case 2:
					return 49;
					break;
				
				case 4:
					return 71;
					break;
				
				case 5:
					return 19;
					break;
				
				case 6:
					return 24;
					break;
				
				case 7:
					return 21;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 23;
					break;
				
				case 3:
					return 28;
					break;
				
				case 2:
					return 79;
					break;
				
				case 4:
					return 31;
					break;
				
				case 5:
					return 82;
					break;
				
				case 6:
					return 69;
					break;
				
				case 7:
					return 49;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_72(1225, iParam2);
					break;
				
				case 3:
					return func_72(1231, iParam2);
					break;
				
				case 2:
					return func_72(1227, iParam2);
					break;
				
				case 4:
					return func_72(1230, iParam2);
					break;
				
				case 5:
					return func_72(1229, iParam2);
					break;
				
				case 6:
					return func_72(1226, iParam2);
					break;
				
				case 7:
					return func_72(1228, iParam2);
					break;
			}
			break;
	}
	return 0;
}

bool func_55(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_56(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_57(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

int func_57(int iParam0, int iParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_6(iParam1));
}

int func_58(int iParam0, int iParam1, int iParam2, var uParam3)
{
	*uParam3 = func_59(iParam0, iParam1, 0, -1);
	if (*uParam3 > iParam2)
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;
	float fVar1;
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
	float fVar12;
	
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
				fVar0 = system::to_float(iVar3);
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
				fVar0 = system::to_float(iVar3);
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
				fVar0 = system::to_float(iVar3);
			}
			else if (iParam0 == 3)
			{
				fVar0 = system::to_float(func_72(64, iParam3));
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				unk_0x2F0966A034F5ADC6(joaat("sp0_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113969.f_2366.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 1)
			{
				unk_0x2F0966A034F5ADC6(joaat("sp1_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113969.f_2366.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 2)
			{
				unk_0x2F0966A034F5ADC6(joaat("sp2_dist_running"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113969.f_2366.f_539.f_2355[iParam0]) / 175f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_69(20, iParam3) / 175f);
				func_66(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + system::to_float(func_65(joaat("sp0_time_swimming"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + system::to_float(func_65(joaat("sp1_time_swimming"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + system::to_float(func_65(joaat("sp2_time_swimming"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + system::to_float(func_65(func_57(50, iParam3))));
				func_66(&fVar0);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + system::to_float(func_65(joaat("sp0_time_driving_bicycle"))));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + system::to_float(func_65(joaat("sp1_time_driving_bicycle"))));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + system::to_float(func_65(joaat("sp2_time_driving_bicycle"))));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + system::to_float(func_65(func_57(47, iParam3))));
				func_66(&fVar0);
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 + ((4f * Global_262145.f_23918) * IntToFloat(func_72(7237, -1))));
			}
			if (iParam0 == 3)
			{
				fVar0 = (fVar0 * 0,25f);
			}
			break;
		
		case 3:
			if (iParam0 == 0)
			{
				fVar0 = (system::to_float(func_64(joaat("sp0_time_underwater"))) / 30f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (system::to_float(func_64(joaat("sp1_time_underwater"))) / 30f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (system::to_float(func_64(joaat("sp2_time_underwater"))) / 30f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (system::to_float(func_64(func_57(52, iParam3))) / 30f);
				func_66(&fVar0);
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("sp0_unarmed_hits"), &iVar3, -1);
				fVar0 = (system::to_float((iVar3 - Global_113969.f_2366.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("sp1_unarmed_hits"), &iVar3, -1);
				fVar0 = (system::to_float((iVar3 - Global_113969.f_2366.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("sp2_unarmed_hits"), &iVar3, -1);
				fVar0 = (system::to_float((iVar3 - Global_113969.f_2366.f_539.f_2359[iParam0])) / 20f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (system::to_float(func_72(1500, iParam3)) / 20f);
				func_66(&fVar0);
			}
			break;
		
		case 4:
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("sp0_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (system::to_float((iVar3 - Global_113969.f_2366.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("sp1_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (system::to_float((iVar3 - Global_113969.f_2366.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("sp2_number_near_miss"), &iVar3, -1);
				fVar0 = (fVar0 + (system::to_float((iVar3 - Global_113969.f_2366.f_539.f_2363[iParam0])) / 50f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat((func_72(113, iParam3) / 50)));
				func_66(&fVar0);
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				fVar0 = (system::to_float(func_65(joaat("sp0_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 1)
			{
				fVar0 = (system::to_float(func_65(joaat("sp1_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 2)
			{
				fVar0 = (system::to_float(func_65(joaat("sp2_time_driving_plane"))) / 10f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (system::to_float(func_65(func_57(43, iParam3))) / 10f);
			}
			if (iParam0 == 0)
			{
				fVar0 = (fVar0 + (system::to_float(func_65(joaat("sp0_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 1)
			{
				fVar0 = (fVar0 + (system::to_float(func_65(joaat("sp1_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 2)
			{
				fVar0 = (fVar0 + (system::to_float(func_65(joaat("sp2_time_driving_heli"))) / 10f));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + (system::to_float(func_65(func_57(45, iParam3))) / 10f));
			}
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("sp0_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + system::to_float(iVar3));
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("sp1_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + system::to_float(iVar3));
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("sp2_plane_landings"), &iVar3, -1);
				fVar0 = (fVar0 + system::to_float(iVar3));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_72(61, iParam3)));
				func_66(&fVar0);
			}
			if (iParam0 == 3)
			{
				if (BitTest(Global_1575008, 15))
				{
					fVar0 = 100f;
				}
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar4 = func_63(iParam0, 0);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 1);
				if (iParam0 == 2)
				{
					if (iVar4 == 3)
					{
						fVar0 = (fVar0 + 10f);
					}
					else if (iVar4 == 2)
					{
						fVar0 = (fVar0 + 7f);
					}
					else if (iVar4 == 1)
					{
						fVar0 = (fVar0 + 5f);
					}
				}
				else if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 2);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 3);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 6);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 4);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 5f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 3f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 2f);
				}
				iVar4 = func_63(iParam0, 5);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 7);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 8);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
				iVar4 = func_63(iParam0, 11);
				if (iVar4 == 3)
				{
					fVar0 = (fVar0 + 12f);
				}
				else if (iVar4 == 2)
				{
					fVar0 = (fVar0 + 9f);
				}
				else if (iVar4 == 1)
				{
					fVar0 = (fVar0 + 7f);
				}
			}
			break;
		
		case 7:
			if (iParam0 == 0)
			{
				unk_0x2F0966A034F5ADC6(joaat("sp0_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113969.f_2366.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 1)
			{
				unk_0x2F0966A034F5ADC6(joaat("sp1_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113969.f_2366.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 2)
			{
				unk_0x2F0966A034F5ADC6(joaat("sp2_dist_walk_st"), &fVar1, -1);
				fVar0 = ((fVar1 - Global_113969.f_2366.f_539.f_2367[iParam0]) / 45f);
			}
			else if (iParam0 == 3)
			{
				fVar0 = (func_69(19, iParam3) / 45f);
			}
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("sp0_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((system::to_float((iVar3 - Global_113969.f_2366.f_539.f_2371[iParam0])) / 2f) * 1,5f));
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("sp1_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((system::to_float((iVar3 - Global_113969.f_2366.f_539.f_2371[iParam0])) / 2f) * 1,5f));
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("sp2_kills_stealth"), &iVar3, -1);
				fVar0 = (fVar0 + ((system::to_float((iVar3 - Global_113969.f_2366.f_539.f_2371[iParam0])) / 2f) * 1,5f));
			}
			else if (iParam0 == 3)
			{
				iVar3 = func_72(34, iParam3);
				fVar0 = (fVar0 + ((system::to_float(iVar3) / 2f) * 1,5f));
				func_66(&fVar0);
			}
			break;
		
		case 6:
			if (iParam0 == 0)
			{
				unk_0xDF7F16323520B858(joaat("sp0_hits_mission"), &iVar5, -1);
				unk_0xDF7F16323520B858(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (system::to_float((iVar5 - Global_113969.f_2366.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (system::to_float((iVar6 - Global_113969.f_2366.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 1)
			{
				unk_0xDF7F16323520B858(joaat("sp1_hits_mission"), &iVar5, -1);
				unk_0xDF7F16323520B858(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (system::to_float((iVar5 - Global_113969.f_2366.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (system::to_float((iVar6 - Global_113969.f_2366.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 2)
			{
				unk_0xDF7F16323520B858(joaat("sp2_hits_mission"), &iVar5, -1);
				unk_0xDF7F16323520B858(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
				iVar6 = (iVar6 - iVar5);
				fVar0 = (system::to_float((iVar5 - Global_113969.f_2366.f_539.f_2375[iParam0])) / 40f);
				fVar0 = (fVar0 + (system::to_float((iVar6 - Global_113969.f_2366.f_539.f_2379[iParam0])) / 80f));
			}
			else if (iParam0 == 3)
			{
				iVar6 = func_72(172, iParam3);
				fVar0 = (fVar0 + (system::to_float(iVar6) / 80f));
			}
			if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
			{
				iVar7 = 0;
				while (iVar7 < 22)
				{
					switch (func_62(iVar7, iParam0))
					{
						case 3:
							iVar8++;
							break;
						
						case 2:
							iVar9++;
							break;
						
						case 1:
							iVar10++;
							break;
					}
					iVar7++;
				}
				fVar0 = (fVar0 + IntToFloat(iVar8 * 3));
				fVar0 = (fVar0 + IntToFloat(iVar9 * 2));
				fVar0 = (fVar0 + IntToFloat(iVar10 * 1));
			}
			else if (iParam0 == 3)
			{
				fVar0 = (fVar0 + IntToFloat(func_61(joaat("mpply_shootingrange_wins")) * 1));
				func_66(&fVar0);
			}
			break;
	}
	if (iParam1 != 0)
	{
		iVar11 = func_54(iParam0, iParam1, iParam3);
		fVar0 = (fVar0 + IntToFloat(iVar11));
		fVar0 = (fVar0 + IntToFloat(func_60(iParam0, iParam1, iParam3)));
	}
	if (bParam2)
	{
		fVar12 = (fVar0 - (fVar0 % IntToFloat(func_52(iParam0, iParam1))));
		if ((fVar0 % IntToFloat(func_52(iParam0, iParam1))) >= 0f)
		{
			fVar12 = (fVar12 + IntToFloat(func_52(iParam0, iParam1)));
		}
		if (fVar0 >= fVar12)
		{
			fVar0 = fVar12;
		}
		else
		{
			fVar0 = (fVar12 - IntToFloat(func_52(iParam0, iParam1)));
		}
	}
	iVar2 = system::floor(fVar0);
	iVar2 = func_71(iVar2, 0, 100);
	return iVar2;
}

int func_60(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 2:
				case 4:
				case 5:
				case 6:
				case 7:
					return Global_113969.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0];
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 1:
					return func_72(72, iParam2);
					break;
				
				case 3:
					return func_72(74, iParam2);
					break;
				
				case 2:
					return func_72(73, iParam2);
					break;
				
				case 4:
					return func_72(75, iParam2);
					break;
				
				case 5:
					return func_72(76, iParam2);
					break;
				
				case 6:
					return func_72(77, iParam2);
					break;
				
				case 7:
					return func_72(78, iParam2);
					break;
			}
			break;
	}
	return 0;
}

int func_61(int iParam0)
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

int func_62(int iParam0, int iParam1)
{
	return Global_113969.f_19150[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

int func_63(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > 2)
	{
		return 0;
	}
	return Global_113969.f_1991[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

int func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + (unk_0x4F256B9F00ACB695(iParam0) * 86400));
	iVar0 = (iVar0 + unk_0xDF21396D0886D8F7(iParam0) * 3600);
	iVar0 = (iVar0 + unk_0xE44C8536D6F264FC(iParam0) * 60);
	iVar0 = (iVar0 + unk_0x77A7B5685F038D01(iParam0));
	return iVar0;
}

int func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = (iVar0 + unk_0x4F256B9F00ACB695(iParam0) * 1440);
	iVar0 = (iVar0 + unk_0xDF21396D0886D8F7(iParam0) * 60);
	iVar0 = (iVar0 + unk_0xE44C8536D6F264FC(iParam0));
	return iVar0;
}

var func_66(float fParam0)
{
	if (func_46())
	{
		if (func_67() < Global_262145.f_13138)
		{
			if (*fParam0 + (IntToFloat(func_67()) * Global_262145.f_13137)) <= IntToFloat(Global_262145.f_13147)
			{
				*fParam0 = (*fParam0 + (IntToFloat(func_67()) * Global_262145.f_13137));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

int func_67()
{
	if (func_50(1))
	{
		return Global_1845281[func_68() /*883*/].f_206.f_6;
	}
	return 0;
}

int func_68()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10;
}

float func_69(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_70(iParam0, iParam1);
	if (unk_0x2F0966A034F5ADC6(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

var func_70(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(1, uParam0, func_6(uParam1));
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_72(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_57(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_73(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_74()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

bool func_75(int iParam0)
{
	return iParam0 < 3;
}

void func_76(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_73(iParam0, iParam1, &uVar2, &iVar3);
	if (unk_0x76CD105BCAC6EB9F())
	{
		iVar0 = func_72(iVar3, -1);
	}
	else
	{
		unk_0xDF7F16323520B858(uVar2, &iVar0, -1);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0,8f + (0,4f * (system::to_float(iVar0) / 100f)));
			unk_0xA8762533460B016B(unk_0x259BE71D8A81D4FA(), fVar1, 1);
			break;
		
		case 7:
			if (unk_0x486FF5D06E9659F1(joaat("armenian3")) != 0 || unk_0x486FF5D06E9659F1(joaat("trevor3")) != 0)
			{
				Global_98796 = 1;
			}
			else
			{
				fVar1 = (1f - (system::to_float(iVar0) / 100f));
				unk_0xF75E68D9DCB8C80B(unk_0x259BE71D8A81D4FA(), fVar1);
				unk_0x92F9E3A242F41E98(unk_0x259BE71D8A81D4FA(), fVar1);
				unk_0x048D90B19F701DC3(unk_0x259BE71D8A81D4FA(), fVar1);
			}
			break;
	}
}

int func_77(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_78(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_78(int iParam0)
{
	return func_79(iParam0, Global_44042);
}

int func_79(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_80()
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (((unk_0xFC8BFE4B41177C22(uVar0) && unk_0xD9F5E1FEFD1329E4(uVar0, 0)) && unk_0xFD5C5BBD1FE92BB7(uVar0, -1, 0) == unk_0x4A8C381C258A124D()) && (((unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(uVar0)) || unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(uVar0))) || unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(uVar0))) || unk_0x9910CD0D8626AA28(unk_0x4B423FAA24E8ABF0(uVar0))))
		{
			iVar1 = 1;
		}
	}
	func_85(&uVar0, &iVar1);
	func_84(&uVar0, &iVar1);
	func_81();
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iLocal_79)
	{
		if (iLocal_57 == 3)
		{
			if (Global_2359296[func_83() /*5570*/].f_681.f_7)
			{
				iLocal_76 = func_64(func_57(148, -1));
				Global_2359296[func_83() /*5570*/].f_681.f_7 = 0;
			}
			else
			{
				iLocal_76 = Global_2359296[func_83() /*5570*/].f_681.f_6;
			}
			if (Global_2359296[func_83() /*5570*/].f_681.f_4 == 0)
			{
				Global_2359296[func_83() /*5570*/].f_681.f_4 = unk_0x39D1D336459711BE();
			}
			iLocal_78 = Global_2359296[func_83() /*5570*/].f_681.f_4;
			iLocal_77 = Global_2359296[func_83() /*5570*/].f_681.f_5;
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_2292[iLocal_57])
			{
				switch (iLocal_57)
				{
					case 0:
						iLocal_76 = func_64(joaat("sp0_total_wheelie_time"));
						break;
					
					case 1:
						iLocal_76 = func_64(joaat("sp1_total_wheelie_time"));
						break;
					
					case 2:
						iLocal_76 = func_64(joaat("sp2_total_wheelie_time"));
						break;
				}
				Global_113969.f_2366.f_539.f_2292[iLocal_57] = 0;
			}
			else
			{
				iLocal_76 = Global_113969.f_2366.f_539.f_2288[iLocal_57];
			}
			if (Global_113969.f_2366.f_539.f_2280[iLocal_57] == 0)
			{
				Global_113969.f_2366.f_539.f_2280[iLocal_57] = unk_0x39D1D336459711BE();
			}
			iLocal_78 = Global_113969.f_2366.f_539.f_2280[iLocal_57];
			iLocal_77 = Global_113969.f_2366.f_539.f_2284[iLocal_57];
		}
		iLocal_79 = 1;
		iLocal_80 = 1;
	}
	else if ((unk_0x39D1D336459711BE() - iLocal_78) > 86400)
	{
		iLocal_79 = 0;
		iLocal_80 = 0;
		iLocal_78 = unk_0x39D1D336459711BE();
		iLocal_77 = 0;
		if (iLocal_57 == 3)
		{
			Global_2359296[func_83() /*5570*/].f_681.f_7 = 1;
		}
		else
		{
			Global_113969.f_2366.f_539.f_2292[iLocal_57] = 1;
		}
	}
	if (iLocal_80)
	{
		switch (iLocal_57)
		{
			case 0:
				iVar0 = func_64(joaat("sp0_total_wheelie_time"));
				break;
			
			case 1:
				iVar0 = func_64(joaat("sp1_total_wheelie_time"));
				break;
			
			case 2:
				iVar0 = func_64(joaat("sp2_total_wheelie_time"));
				break;
			
			case 3:
				iVar0 = func_64(func_57(148, -1));
				break;
		}
		iVar1 = (iVar0 - iLocal_76);
		iVar2 = (system::floor((system::to_float(iVar1) / 15f)) - iLocal_77);
		if (iVar2 > 0)
		{
			func_82(iLocal_57, 4, iVar2);
			iLocal_77 = (iLocal_77 + iVar2);
		}
		if (iVar0 > (iLocal_76 + (unk_0x91C8345B22D52DEC() / 1000) * 60))
		{
			iLocal_80 = 0;
		}
	}
	if (iLocal_57 == 3)
	{
		Global_2359296[func_83() /*5570*/].f_681.f_4 = iLocal_78;
		Global_2359296[func_83() /*5570*/].f_681.f_5 = iLocal_77;
	}
	else
	{
		Global_113969.f_2366.f_539.f_2280[iLocal_57] = iLocal_78;
		Global_113969.f_2366.f_539.f_2284[iLocal_57] = iLocal_77;
	}
}

void func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113969.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_113969.f_2366.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 14835;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 14835)
			{
				iVar0 = func_72(iVar1, -1);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_56(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

int func_83()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_84(var uParam0, int iParam1)
{
	bool bVar0;
	
	if (iLocal_73)
	{
		bVar0 = true;
		if ((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && *iParam1) && !unk_0x3F18810075C77D41(*uParam0))
		{
			bVar0 = false;
			if (unk_0xDF93B3CFAC96698F(*uParam0) >= 53f)
			{
				func_82(iLocal_57, 4, 2);
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			iLocal_73 = 0;
			iLocal_74 = unk_0x1DD05E817C89C737();
			if (unk_0x76CD105BCAC6EB9F())
			{
				uLocal_75 = unk_0x7E3F74F641EE6B27();
			}
		}
	}
	else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && *iParam1) && unk_0xDF93B3CFAC96698F(*uParam0) < 20f) && !unk_0x3F18810075C77D41(*uParam0))
	{
		if ((!unk_0x76CD105BCAC6EB9F() && (unk_0x1DD05E817C89C737() - iLocal_74) > 10000) || (unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_75, 10000))))
		{
			iLocal_73 = 1;
		}
	}
}

void func_85(var uParam0, int iParam1)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (*iParam1)
	{
		if (iLocal_65)
		{
			if (!unk_0x3F18810075C77D41(*uParam0))
			{
				if ((!unk_0x76CD105BCAC6EB9F() && (unk_0x1DD05E817C89C737() - iLocal_67) > 1500) || (unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_68, 1500))))
				{
					iLocal_69 = unk_0x1DD05E817C89C737();
					if (unk_0x76CD105BCAC6EB9F())
					{
						uLocal_70 = unk_0x7E3F74F641EE6B27();
					}
					iLocal_66 = 1;
				}
				iLocal_65 = 0;
			}
		}
		if (iLocal_66)
		{
			if (!unk_0x3F18810075C77D41(*uParam0))
			{
				if (unk_0xD2A0543EC400E1A5(*uParam0))
				{
					if ((((!unk_0x76CD105BCAC6EB9F() && (unk_0x1DD05E817C89C737() - iLocal_69) > 20) || (!unk_0x76CD105BCAC6EB9F() && (unk_0x1DD05E817C89C737() - iLocal_69) == 0)) || (unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_70, 20)))) || (unk_0x76CD105BCAC6EB9F() && unk_0xCFF17EF1F3F6FF43(unk_0x7E3F74F641EE6B27(), uLocal_70)))
					{
					}
					else
					{
						func_82(iLocal_57, 4, 1);
					}
					StringCopy(&cVar1, "Player landed on all wheels in ", 64);
					StringIntConCat(&cVar1, (unk_0x1DD05E817C89C737() - iLocal_69), 64);
					StringConCat(&cVar1, "ms", 64);
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
		}
		if (!iLocal_65 && !iLocal_66)
		{
			if ((!unk_0x76CD105BCAC6EB9F() && (unk_0x1DD05E817C89C737() - iLocal_71) > 1000) || (unk_0x76CD105BCAC6EB9F() && unk_0xDBA141080166EAA2(unk_0x7E3F74F641EE6B27(), unk_0xAD5B43C219C4CB92(uLocal_72, 1000))))
			{
				if (unk_0x3F18810075C77D41(*uParam0))
				{
					if (!iLocal_65)
					{
						iLocal_67 = unk_0x1DD05E817C89C737();
						if (unk_0x76CD105BCAC6EB9F())
						{
							uLocal_68 = unk_0x7E3F74F641EE6B27();
						}
						iLocal_65 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_65 || iLocal_66)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iLocal_71 = unk_0x1DD05E817C89C737();
		if (unk_0x76CD105BCAC6EB9F())
		{
			uLocal_72 = unk_0x7E3F74F641EE6B27();
		}
		iLocal_65 = 0;
		iLocal_66 = 0;
	}
}

bool func_86(int iParam0)
{
	return (Global_113054 && iParam0) != 0;
}

int func_87()
{
	func_88();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_88()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_90(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_89(unk_0x4A8C381C258A124D());
			if (func_75(iVar0) && (!func_55(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_75(Global_113969.f_2366.f_539.f_4321))
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

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_90(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_90(int iParam0)
{
	if (func_75(iParam0))
	{
		return func_91(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_91(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_92()
{
	char* sVar0;
	int iVar1;
	
	if (iLocal_60)
	{
		if (iLocal_61 != iLocal_57)
		{
			iLocal_60 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_61)
		{
			case 0:
				sVar0 = "CHAR_MICHAEL";
				break;
			
			case 1:
				sVar0 = "CHAR_FRANKLIN";
				break;
			
			case 2:
				sVar0 = "CHAR_TREVOR";
				break;
			
			case 3:
				iVar1 = func_95(unk_0x259BE71D8A81D4FA());
				if (iVar1 == 0)
				{
					return;
				}
				else
				{
					sVar0 = unk_0x008C0EB38E4459EE(iVar1);
				}
				break;
		}
		unk_0xCCDB0041859B85A6("PS_UPDATE");
		unk_0x511D14ED2DA887E1(iLocal_64);
		unk_0x0AAAE599E05E67D2(func_94(iLocal_62), func_93(iLocal_62), iLocal_63, (iLocal_64 - iLocal_63), 0, sVar0, sVar0);
		iLocal_81 = 1;
		iLocal_82 = unk_0x1DD05E817C89C737() + 5000;
		if (unk_0x76CD105BCAC6EB9F())
		{
			uLocal_83 = unk_0xAD5B43C219C4CB92(unk_0x7E3F74F641EE6B27(), 5000);
		}
		iLocal_60 = 0;
	}
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 23;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 24;
			break;
		
		case 2:
			return 25;
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 17;
			break;
		
		case 7:
			return 28;
			break;
	}
	return -1;
}

char* func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PSF_SPEC_AB";
			break;
		
		case 1:
			return "PSF_STAMINA";
			break;
		
		case 3:
			return "PSF_LUNG";
			break;
		
		case 2:
			return "PSF_STRENGTH";
			break;
		
		case 4:
			return "PSF_DRIVING";
			break;
		
		case 5:
			return "PSF_FLYING";
			break;
		
		case 6:
			return "PSF_SHOOTING";
			break;
		
		case 7:
			return "PSF_STEALTH";
			break;
	}
	return "ERROR";
}

int func_95(int iParam0)
{
	int iVar0;
	
	iVar0 = func_98(iParam0);
	if (iVar0 == -1)
	{
		func_96(iParam0, 1);
		return 0;
	}
	Global_1681225[iVar0 /*5*/].f_4 = 1;
	return Global_1681225[iVar0 /*5*/].f_2;
}

void func_96(int iParam0, bool bParam1)
{
	if (!func_19(iParam0, 0, 1))
	{
		return;
	}
	if (func_98(iParam0) != -1)
	{
		return;
	}
	if (Global_1681388)
	{
		if (iParam0 == Global_1681388.f_1)
		{
			return;
		}
	}
	if (func_97(iParam0))
	{
		return;
	}
	if (Global_1681426 >= 32)
	{
		return;
	}
	Global_1681393[Global_1681426] = iParam0;
	Global_1681426++;
	if (bParam1)
	{
	}
}

int func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681426)
	{
		if (Global_1681393[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (!func_19(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1681386 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681386)
	{
		if (Global_1681225[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xCF3FA9D6B87D2277(Global_1681225[iVar0 /*5*/].f_2) && unk_0x445B6F53EA9E6A6F(Global_1681225[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_99(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_99(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1681386)
	{
		return;
	}
	if (unk_0xCF3FA9D6B87D2277(Global_1681225[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1681225[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x008C0EB38E4459EE(Global_1681225[iParam0 /*5*/].f_2), 64);
			unk_0x4CF6314488B07405(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x697995B2B26B6CD4(Global_1681225[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1681386)
	{
		Global_1681225[iVar2 /*5*/] = { Global_1681225[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_100(&(Global_1681225[iVar2 /*5*/]));
	Global_1681386 = (Global_1681386 - 1);
}

void func_100(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x76CD105BCAC6EB9F())
	{
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();
	}
}

void func_101()
{
	float fVar0;
	int iVar1;
	
	if (unk_0xC5C8FC4D42BFD749() != 1)
	{
		return;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_105(unk_0x259BE71D8A81D4FA()))
		{
			return;
		}
		if (func_104() != 0)
		{
			return;
		}
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_104() == 0)
		{
			iLocal_52 = 1;
		}
	}
	else
	{
		iLocal_52 = 0;
	}
	if (!func_103())
	{
		func_102();
	}
	iLocal_54 = 0;
	iLocal_55 = 0;
	if (unk_0x76CD105BCAC6EB9F())
	{
		uLocal_56 = unk_0x7E3F74F641EE6B27();
	}
	iLocal_71 = unk_0x1DD05E817C89C737();
	if (unk_0x76CD105BCAC6EB9F())
	{
		uLocal_72 = unk_0x7E3F74F641EE6B27();
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!BitTest(Global_2359296[func_83() /*5570*/].f_681.f_1274, 2))
		{
			fVar0 = (system::to_float(func_72(193, -1)) / 20f);
			iVar1 = system::floor(fVar0);
			iVar1 = func_71(iVar1, 0, 100);
			func_82(3, 2, iVar1);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2359296[func_83() /*5570*/].f_681.f_1274), 2);
		}
	}
	bLocal_58 = true;
	iLocal_53 = 1;
}

void func_102()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != 0)
			{
				func_73(3, iVar0, &uVar1, &iVar2);
				func_56(iVar2, func_54(3, iVar0, -1), -1, 1);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_98795 = 1;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			iVar4 = 0;
			while (iVar4 < 8)
			{
				if (iVar4 != 0)
				{
					func_73(iVar3, iVar4, &iVar5, &uVar6);
					unk_0x1164A75E490C27B6(iVar5, func_54(iVar3, iVar4, -1), 1);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_113969.f_2366.f_539.f_2387[0] = func_54(0, 0, -1);
		Global_113969.f_2366.f_539.f_2387[1] = func_54(1, 0, -1);
		Global_113969.f_2366.f_539.f_2387[2] = func_54(2, 0, -1);
		Global_113969.f_2366.f_539.f_2354 = 1;
		Global_98795 = 1;
	}
}

int func_103()
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		return 1;
	}
	return Global_113969.f_2366.f_539.f_2354;
}

int func_104()
{
	return Global_32948;
}

int func_105(var uParam0)
{
	if (!func_49(uParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, uParam0);
}

void func_106()
{
	if (iLocal_53 != 0 && iLocal_52 != 2)
	{
		if (iLocal_52 == 0)
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				iLocal_52 = 2;
			}
			if (!func_103())
			{
				iLocal_52 = 2;
			}
		}
		else if (iLocal_52 == 1)
		{
			if ((!unk_0x76CD105BCAC6EB9F() || !func_105(unk_0x259BE71D8A81D4FA())) || func_104() != 0)
			{
				iLocal_52 = 2;
			}
		}
		if (iLocal_52 == 2)
		{
			iLocal_53 = 2;
		}
	}
}

