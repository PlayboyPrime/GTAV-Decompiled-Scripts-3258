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
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
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
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = -1;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	float fLocal_116 = 0f;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	struct<143> Local_122 = { 0, 0, 5, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, -1861623876, 0, 0, 0, 0, 0, 0, -1296747938, 500, 3, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_123 = 0;
	struct<2> Local_124[32];
	struct<46> Local_125 = { 31, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
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
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0,0375f;
	fLocal_32 = 0,17f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_61 = ((0,05f + 0,275f) - 0,01f);
	fLocal_63 = 0f;
	fLocal_75 = 3f;
	fLocal_76 = 0f;
	fLocal_77 = 2f;
	fLocal_78 = 100f;
	iLocal_114 = -1;
	fLocal_116 = 0,5f;
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_44(ScriptParam_125))
		{
			func_42();
		}
	}
	while (true)
	{
		func_41();
		if (func_33())
		{
			func_42();
		}
		switch (func_32(unk_0xAE032CEDCF23C6D5()))
		{
			case 0:
				if (func_31() == 1)
				{
					Local_124[unk_0xAE032CEDCF23C6D5() /*2*/] = 1;
				}
				else if (func_31() == 4)
				{
					Local_124[unk_0xAE032CEDCF23C6D5() /*2*/] = 3;
				}
				break;
			
			case 1:
				if (func_31() == 4)
				{
					Local_124[unk_0xAE032CEDCF23C6D5() /*2*/] = 3;
				}
				if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_122.f_138, 200f, 200f, 200f, 0, 1, 0))
				{
					Local_124[unk_0xAE032CEDCF23C6D5() /*2*/] = 4;
				}
				break;
			
			case 3:
				func_29(&(Local_122.f_142));
				if (func_28(&(Local_122.f_142)))
				{
					Local_124[unk_0xAE032CEDCF23C6D5() /*2*/] = 4;
				}
				break;
			
			case 2:
				Local_124[unk_0xAE032CEDCF23C6D5() /*2*/] = 4;
			
			case 4:
				func_42();
				break;
		}
		if (unk_0x93E08E0F531E2C35())
		{
			switch (func_31())
			{
				case 0:
					if (func_21())
					{
						Local_122.f_0 = 1;
					}
					break;
				
				case 1:
					func_3();
					if (func_1())
					{
						Local_122.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	return 0;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!BitTest(Local_122.f_2[iVar0 /*27*/].f_6, 1))
		{
			func_4(iVar0);
			if (Local_122.f_2[iVar0 /*27*/].f_26 > 5)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_122.f_2[iVar0 /*27*/].f_6), 1);
			}
			Local_122.f_2[iVar0 /*27*/].f_26++;
		}
		iVar0++;
	}
}

void func_4(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xFC8BFE4B41177C22(Local_122.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4))
		{
			if (unk_0x1B1A446EFA398EB5(Local_122.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4))
			{
				func_5(&(Local_122.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/]), unk_0xD1A6A821F5AC81DB(Local_122.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4, 1) + Vector((0,046f * 1,5f), 0f, 0f));
			}
		}
		iVar0++;
	}
}

void func_5(var uParam0, struct<3> Param1)
{
	if (func_20() && func_19(*uParam0))
	{
		func_6(uParam0, Param1);
	}
	else
	{
		unk_0xB2BD5837A8D3CEDA(uParam0->f_4, Param1, 1, 0, 0, 1);
	}
}

void func_6(var uParam0, struct<3> Param1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	
	iVar1 = func_18(uParam0, -1);
	if (iVar1 != -1)
	{
		uVar0 = Global_1906887[unk_0x383461852896D73D() /*304*/].f_101.f_21[iVar1 /*14*/].f_4;
		Global_1906887[unk_0x383461852896D73D() /*304*/].f_101.f_21[iVar1 /*14*/].f_5 = { Param1 };
	}
	else
	{
		iVar1 = func_13(uParam0);
		if (iVar1 != -1)
		{
			uVar0 = Global_1906826[iVar1 /*6*/].f_5;
		}
	}
	if (unk_0xFC8BFE4B41177C22(uVar0))
	{
		unk_0xB2BD5837A8D3CEDA(uVar0, Param1, 1, 0, 0, 1);
	}
	iVar2 = func_7(1, 1);
	if (iVar2 != 0)
	{
		Var3.f_3 = 123;
		Var3.f_0 = -1731262701;
		Var3.f_1 = unk_0x259BE71D8A81D4FA();
		Var3.f_3 = { *uParam0 };
		Var3.f_8 = { Param1 };
		unk_0x71A6F836422FDD2B(1, &Var3, 11, iVar2, Var3.f_0);
	}
}

var func_7(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
				else if (!func_8(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_8(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_11(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_9(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			bVar0 = unk_0x1864096A95E36EBA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_9(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_10();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_10()
{
	return Global_1574926;
}

int func_11(var uParam0)
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

int func_12(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(uParam0))
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

int func_13(var uParam0)
{
	int iVar0;
	
	if (!func_16(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_14(uParam0, &(Global_2652592.f_2452[iVar0 /*16*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_14(var uParam0, var uParam1)
{
	if ((*uParam0 == *uParam1 && func_15(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4 == uParam1->f_4)
	{
		return 1;
	}
	return 0;
}

bool func_15(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_16(var uParam0)
{
	if ((*uParam0 == 123 || func_17(uParam0->f_1)) || uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_17(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_18(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_16(uParam0))
	{
		return -1;
	}
	if (iParam1 == -1)
	{
		iParam1 = unk_0x383461852896D73D();
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_14(uParam0, &(Global_1906887[iParam1 /*304*/].f_101.f_21[iVar0 /*14*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pickup_money_variable"):
		case joaat("pickup_money_case"):
		case joaat("pickup_money_wallet"):
		case joaat("pickup_money_purse"):
		case joaat("pickup_money_dep_bag"):
		case joaat("pickup_money_med_bag"):
		case joaat("pickup_money_paper_bag"):
		case joaat("pickup_money_security_case"):
		case joaat("pickup_gang_attack_money"):
		case joaat("pickup_vehicle_money_variable"):
			return 1;
		
		default:
	}
	return 0;
}

var func_20()
{
	return Global_262145.f_30251;
}

int func_21()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_22(iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_22(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	if (func_17(Local_122.f_2[iParam0 /*27*/].f_2) || BitTest(Local_122.f_2[iParam0 /*27*/].f_6, 0))
	{
		return 1;
	}
	iVar2 = 0;
	unk_0x0B0C9A0F9AAEB7F0(&iVar2, 3);
	unk_0x0B0C9A0F9AAEB7F0(&iVar2, 4);
	switch (Local_122.f_2[iParam0 /*27*/].f_7)
	{
		case 0:
			if (unk_0x4D64DFA5BE3B2871(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!unk_0xFC8BFE4B41177C22(Local_122.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4))
					{
						Var1 = { unk_0xF10F2A2453AF1DFB(Local_122.f_2[iParam0 /*27*/].f_2, Local_122.f_2[iParam0 /*27*/].f_5, (0,6f - (IntToFloat(iVar0) * 0,4f)), 0f, 0,1f) };
						Local_122.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/] = { func_24(joaat("pickup_gang_attack_money"), Var1, iVar2, Local_122.f_2[iParam0 /*27*/].f_9, 0, 1, 1) };
					}
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 2:
			if (unk_0x4D64DFA5BE3B2871(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!unk_0xFC8BFE4B41177C22(Local_122.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4))
					{
						Var1 = { unk_0xF10F2A2453AF1DFB(Local_122.f_2[iParam0 /*27*/].f_2, Local_122.f_2[iParam0 /*27*/].f_5, 0f, (0,25f - (IntToFloat(iVar0) * 0,25f)), 0,1f) };
						Local_122.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/] = { func_24(Local_122.f_2[iParam0 /*27*/].f_8, Var1, iVar2, -1, 0, 1, 1) };
					}
					iVar0++;
				}
				if (func_23(iParam0, 2))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (unk_0x4D64DFA5BE3B2871(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!unk_0xFC8BFE4B41177C22(Local_122.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/].f_4))
					{
						Var1 = { unk_0xF10F2A2453AF1DFB(Local_122.f_2[iParam0 /*27*/].f_2, Local_122.f_2[iParam0 /*27*/].f_5, 0f, (0,25f - (IntToFloat(iVar0) * 0,25f)), 0,2f) };
						Local_122.f_2[iParam0 /*27*/].f_10[iVar0 /*5*/] = { func_24(joaat("pickup_ammo_bullet_mp"), Var1, iVar2, Local_122.f_2[iParam0 /*27*/].f_9, 0, 1, 1) };
					}
					iVar0++;
				}
				if (func_23(iParam0, 2))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_23(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = 0;
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, 3);
	unk_0x0B0C9A0F9AAEB7F0(&iVar1, 4);
	if (unk_0x4D64DFA5BE3B2871(0, 0, 0, 1))
	{
		if (!unk_0xFC8BFE4B41177C22(Local_122.f_2[iParam0 /*27*/].f_10[iParam1 /*5*/].f_4))
		{
			Var0 = { unk_0xF10F2A2453AF1DFB(Local_122.f_2[iParam0 /*27*/].f_2, Local_122.f_2[iParam0 /*27*/].f_5, 0f, (0,25f - (IntToFloat(iParam1) * 0,25f)), 0,1f) };
			Local_122.f_2[iParam0 /*27*/].f_10[iParam1 /*5*/] = { func_24(joaat("pickup_gang_attack_money"), Var0, iVar1, Global_262145.f_4120, 0, 1, 1) };
		}
		return 1;
	}
	return 0;
}

struct<5> func_24(int iParam0, struct<3> Param1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	struct<5> Var0;
	
	Var0 = 123;
	if (func_20() && func_19(iParam0))
	{
		Var0 = { func_25(iParam0, Param1, iParam2, iParam3, iParam4, bParam5) };
	}
	else
	{
		Var0.f_4 = unk_0xD0DDC0D0D8D33E57(iParam0, Param1, iParam2, iParam3, iParam4, bParam5, iParam6);
	}
	return Var0;
}

struct<5> func_25(int iParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	struct<5> Var0;
	int iVar1;
	struct<5> Var2;
	int iVar3;
	
	Var0 = 123;
	if (func_27() == -1)
	{
		return Var0;
	}
	iVar1 = func_26(-1);
	if (iVar1 == -1)
	{
		return Var0;
	}
	Var2 = 123;
	Var2.f_0 = iParam0;
	Var2.f_1 = { Param1 };
	if (func_13(&Var2) != -1)
	{
		return Var0;
	}
	unk_0x0B0C9A0F9AAEB7F0(&uParam2, 5);
	Var2.f_4 = unk_0x192C5E68A3552FDC(iParam0, Param1, uParam2, uParam3, uParam4, bParam5, 0);
	iVar3 = unk_0x383461852896D73D();
	if (bParam5)
	{
		Global_1906887[iVar3 /*304*/].f_101.f_21[iVar1 /*14*/].f_12 = unk_0x931D15B1D60C81B0();
		Global_1906887[iVar3 /*304*/].f_101.f_21[iVar1 /*14*/].f_13 = unk_0x4C7F9ACFABADEB9E();
		if (Global_1906887[iVar3 /*304*/].f_101.f_21[iVar1 /*14*/].f_13 == 0)
		{
			Global_1906887[iVar3 /*304*/].f_101.f_21[iVar1 /*14*/].f_13 = unk_0xF25E5B7C1279A85B();
			Global_1906887[iVar3 /*304*/].f_101.f_21[iVar1 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1906887[iVar3 /*304*/].f_101.f_21[iVar1 /*14*/].f_11 = 2;
		}
	}
	Global_1906887[iVar3 /*304*/].f_101.f_21[iVar1 /*14*/] = { Var2 };
	Global_1906887[iVar3 /*304*/].f_101.f_21[iVar1 /*14*/].f_5 = { Param1 };
	Global_1906887[iVar3 /*304*/].f_101.f_21[iVar1 /*14*/].f_8 = uParam2;
	Global_1906887[iVar3 /*304*/].f_101.f_21[iVar1 /*14*/].f_9 = uParam3;
	Global_1906887[iVar3 /*304*/].f_101.f_21[iVar1 /*14*/].f_10 = uParam4;
	return Var2;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = unk_0x383461852896D73D();
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_16(&(Global_1906887[iParam0 /*304*/].f_101.f_21[iVar1 /*14*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_16(&(Global_2652592.f_2452[iVar1 /*16*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_28(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_29(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x93E08E0F531E2C35())
		{
			func_30(uParam0, 0, 0);
		}
	}
}

void func_30(var uParam0, bool bParam1, bool bParam2)
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

int func_31()
{
	return Local_122.f_0;
}

int func_32(int iParam0)
{
	return Local_124[iParam0 /*2*/];
}

int func_33()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_40())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_39())
	{
		return 1;
	}
	if (func_38(159))
	{
		if (!func_37())
		{
			return 1;
		}
	}
	if (func_38(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_34() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_34()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	switch (func_36())
	{
		case 0:
			return func_35();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_35()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_36()
{
	return Global_32948;
}

bool func_37()
{
	return Global_2684504.f_700;
}

int func_38(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_39()
{
	return Global_2696172;
}

bool func_40()
{
	return Global_2684504.f_695;
}

void func_41()
{
	system::wait(0);
}

void func_42()
{
	func_43();
}

void func_43()
{
	unk_0xBBC29EBE6E1A48FA();
}

int func_44(struct<41> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<21> Var0;
	int iVar1;
	
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_0 = Param0.f_0;
	Var0.f_16 = Param0.f_1;
	func_48(func_49(Param0.f_0), Var0);
	func_46(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_122, 144, 0);
	unk_0x7B13DC83218D9AF5(&Local_124, 65, 0);
	if (!func_45())
	{
		return 0;
	}
	unk_0xAECC5FA98C879D67(0);
	if (unk_0x93E08E0F531E2C35())
	{
		Local_122.f_141 = Param0.f_1;
		Local_122.f_138 = { Param0.f_2 };
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!BitTest(Param0.f_5, 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_122.f_2[iVar1 /*27*/].f_6), 0);
			}
			Local_122.f_2[iVar1 /*27*/].f_2 = { Param0.f_6[iVar1 /*3*/] };
			Local_122.f_2[iVar1 /*27*/].f_5 = Param0.f_22[iVar1];
			Local_122.f_2[iVar1 /*27*/].f_7 = Param0.f_28[iVar1];
			Local_122.f_2[iVar1 /*27*/].f_8 = Param0.f_34[iVar1];
			Local_122.f_2[iVar1 /*27*/].f_9 = Param0.f_40[iVar1];
			iVar1++;
		}
	}
	Local_124[unk_0xAE032CEDCF23C6D5() /*2*/] = 0;
	return 1;
}

int func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 0;
		}
		if (unk_0x37F4AB46DE999660())
		{
			return 1;
		}
		if (func_40())
		{
			return 0;
		}
		if (func_38(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

int func_46(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_43();
			}
			else
			{
				return 0;
			}
		}
		if (!func_47(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_43();
					}
					else
					{
						return 0;
					}
				}
				if (func_40())
				{
					if (!bParam2)
					{
						func_43();
					}
					else
					{
						return 0;
					}
				}
				if (func_38(157))
				{
					if (!bParam2)
					{
						func_43();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBF52D447C795492B())
			{
				if (!bParam2)
				{
					func_43();
				}
				else
				{
					return 0;
				}
			}
		}
		system::wait(0);
		iVar0 = unk_0xDFF16B5B12604EFF();
	}
	if (iParam1 > -1)
	{
		Global_1574667 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			if (!bParam2)
			{
				func_43();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBF52D447C795492B())
	{
		if (!bParam2)
		{
			func_43();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_47(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_48(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_43();
	}
	unk_0xDB2434E51017FFCC(uParam0, 0, Param1.f_16);
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 197:
			return 32;
		
		case 198:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 209:
			return 32;
		
		case 210:
			return 32;
		
		case 199:
			return 32;
		
		case 200:
			return 32;
		
		case 204:
			return 32;
		
		case 202:
			return 32;
		
		case 203:
			return 32;
		
		case 207:
			return 32;
		
		case 208:
			return 32;
		
		case 205:
			return 32;
		
		case 206:
			return 32;
		
		case 211:
			return 32;
		
		case 212:
			return 32;
		
		case 213:
			return 32;
		
		case 214:
			return 32;
		
		case 215:
			return 2;
		
		case 220:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 4;
		
		case 218:
			return 2;
		
		case 219:
			return 2;
		
		case 201:
			return 1;
		
		case 221:
			return 2;
		
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
			return 0;
		
		case 243:
			return 1;
		
		case 228:
			return 4;
		
		case 231:
			return 4;
		
		case 232:
			return 1;
		
		case 233:
			return 1;
		
		case 239:
			return 1;
		
		case 235:
			return 2;
		
		case 240:
			return 1;
		
		case 236:
			return 1;
		
		case 234:
			return 2;
		
		case 237:
			return 8;
		
		case 238:
			return 8;
		
		case 241:
			return 1;
		
		case 242:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 179:
			return 1;
		
		case 196:
			return 1;
		
		case 229:
			return 16;
		
		case 230:
			return 32;
		
		default:
	}
	switch (func_50(func_51(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 314:
			return 0;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		case 337:
			return 0;
		
		case 338:
			return 0;
		
		case 339:
			return 0;
		
		case 340:
			return 0;
		
		default:
	}
	return -1;
}

int func_51(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 215:
			return 15;
		
		case 222:
			return 8;
		
		case 216:
			return 14;
		
		case 220:
			return 122;
		
		case 223:
			return 1;
		
		case 221:
			return 5;
		
		case 224:
			return 6;
		
		case 217:
			return 11;
		
		case 225:
			return 0;
		
		case 226:
			return 2;
		
		case 218:
			return 13;
		
		case 227:
			return 3;
		
		case 219:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 314;
		
		case 176:
			return 315;
		
		case 177:
			return 316;
		
		case 178:
			return 317;
		
		case 179:
			return 318;
		
		case 180:
			return 320;
		
		case 181:
			return 322;
		
		case 182:
			return 323;
		
		case 183:
			return 324;
		
		case 184:
			return 325;
		
		case 185:
			return 326;
		
		case 186:
			return 327;
		
		case 187:
			return 328;
		
		case 188:
			return 329;
		
		case 189:
			return 330;
		
		case 190:
			return 331;
		
		case 191:
			return 332;
		
		case 192:
			return 333;
		
		case 193:
			return 337;
		
		case 194:
			return 338;
		
		case 195:
			return 339;
		
		case 196:
			return 340;
		
		default:
	}
	if (bParam1)
	{
	}
	return 343;
}

