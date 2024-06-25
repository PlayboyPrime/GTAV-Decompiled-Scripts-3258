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
	int iLocal_16 = 0;
	struct<3> Local_17 = { 0, 0, 0 } ;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
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
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (BitTest(Global_1681448, 1))
		{
			func_25();
		}
		else
		{
			unk_0xDB2434E51017FFCC(32, 0, -1);
			func_22(0, -1, 0);
			unk_0xAECC5FA98C879D67(0);
			iLocal_18 = 1;
		}
	}
	else if (unk_0x96CFB880BAC634CE(2))
	{
		func_25();
	}
	while (true)
	{
		system::wait(0);
		if (iLocal_18 == 1)
		{
			if (func_14())
			{
				func_25();
			}
		}
		if (unk_0xFC8BFE4B41177C22(uScriptParam_19))
		{
			if (unk_0x71C1A46B17126AA4(uScriptParam_19))
			{
				switch (iLocal_16)
				{
					case 0:
						if (unk_0xF98CC1C0E657B6CB(uScriptParam_19))
						{
							Local_17 = { unk_0xD1A6A821F5AC81DB(uScriptParam_19, 1) };
							iLocal_16 = 1;
						}
						break;
					
					case 1:
						if ((unk_0x1C3788A51C49D6AD(uScriptParam_19, 0) && unk_0xE5E2AE8B19267B8A(uScriptParam_19)) && !unk_0x110821AE6C63DD4F(uScriptParam_19))
						{
							func_1();
							iLocal_16 = 2;
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = unk_0xC5935DFB3F39785A(70, 121);
	if (unk_0x76CD105BCAC6EB9F())
	{
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = unk_0xC5935DFB3F39785A(50, 101);
		iVar3 = func_13(iVar3, 1);
	}
	unk_0x0B0C9A0F9AAEB7F0(&uVar2, 3);
	unk_0x0B0C9A0F9AAEB7F0(&uVar2, 4);
	unk_0xEC9DAA34BBB4658C(iVar0);
	while (!unk_0x6252BC0DD8A320DB(iVar0))
	{
		system::wait(0);
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_2(iVar1, unk_0x165E2DDD2BD0F07D(Local_17, 1067030938, 1069547520), uVar2, iVar3, iVar0, 0, 0);
	}
	else
	{
		unk_0x8D4CAF9A056EA9E4(iVar1, unk_0x165E2DDD2BD0F07D(Local_17, 1067030938, 1069547520), uVar2, iVar3, 0, iVar0);
	}
}

struct<5> func_2(int iParam0, struct<3> Param1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	struct<5> Var0;
	
	Var0 = 123;
	if (func_12() && func_11(iParam0))
	{
		Var0 = { func_3(iParam0, Param1, uParam2, iParam3, iParam4, bParam5) };
	}
	else
	{
		Var0.f_4 = unk_0xD0DDC0D0D8D33E57(iParam0, Param1, uParam2, iParam3, iParam4, bParam5, iParam6);
	}
	return Var0;
}

struct<5> func_3(int iParam0, struct<3> Param1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	struct<5> Var0;
	int iVar1;
	struct<5> Var2;
	int iVar3;
	
	Var0 = 123;
	if (func_10() == -1)
	{
		return Var0;
	}
	iVar1 = func_9(-1);
	if (iVar1 == -1)
	{
		return Var0;
	}
	Var2 = 123;
	Var2.f_0 = iParam0;
	Var2.f_1 = { Param1 };
	if (func_4(&Var2) != -1)
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

int func_4(var uParam0)
{
	int iVar0;
	
	if (!func_7(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_5(uParam0, &(Global_2652592.f_2452[iVar0 /*16*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_5(var uParam0, var uParam1)
{
	if ((*uParam0 == *uParam1 && func_6(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4 == uParam1->f_4)
	{
		return 1;
	}
	return 0;
}

bool func_6(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_7(var uParam0)
{
	if ((*uParam0 == 123 || func_8(uParam0->f_1)) || uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_8(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_9(int iParam0)
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
		if (!func_7(&(Global_1906887[iParam0 /*304*/].f_101.f_21[iVar1 /*14*/])))
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

int func_10()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_7(&(Global_2652592.f_2452[iVar1 /*16*/])))
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

int func_11(int iParam0)
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

var func_12()
{
	return Global_262145.f_30251;
}

int func_13(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (system::to_float(iParam0) * Global_262145);
				iParam0 = system::round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_14()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_21())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	if (func_19(159))
	{
		if (!func_18())
		{
			return 1;
		}
	}
	if (func_19(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_15() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_15()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_15()
{
	switch (func_17())
	{
		case 0:
			return func_16();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_16()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_17()
{
	return Global_32948;
}

bool func_18()
{
	return Global_2684504.f_700;
}

int func_19(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_20()
{
	return Global_2696172;
}

bool func_21()
{
	return Global_2684504.f_695;
}

int func_22(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_24();
			}
			else
			{
				return 0;
			}
		}
		if (!func_23(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_24();
					}
					else
					{
						return 0;
					}
				}
				if (func_21())
				{
					if (!bParam2)
					{
						func_24();
					}
					else
					{
						return 0;
					}
				}
				if (func_19(157))
				{
					if (!bParam2)
					{
						func_24();
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
					func_24();
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
				func_24();
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
			func_24();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_23(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_24()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_25()
{
	unk_0xBBC29EBE6E1A48FA();
}

