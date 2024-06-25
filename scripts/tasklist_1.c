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
	var uLocal_16[3] = { 0, 0, 0 };
	int iLocal_17 = 0;
	var uLocal_18[3] = { 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
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
	if (unk_0x96CFB880BAC634CE(2))
	{
		func_11();
	}
	while (true)
	{
		system::wait(250);
		switch (iLocal_19)
		{
			case 0:
				if (uLocal_16[0])
				{
					StringCopy(&(Global_23405[1 /*42*/]), "CL_C1A", 16);
					StringCopy(&(Global_23405[1 /*42*/].f_4), "CL_C1A_BR", 16);
					Global_23405[1 /*42*/].f_8 = 0;
					Global_23405[1 /*42*/].f_9 = 2;
					StringCopy(&(Global_23405[1 /*42*/].f_10[1 /*4*/]), "CL_C1A_J1", 16);
					Global_23405[1 /*42*/].f_37[1] = 0;
					Global_23405[1 /*42*/].f_32[1] = 3;
					Global_23405[1 /*42*/].f_27[1] = 0;
					StringCopy(&(Global_23405[1 /*42*/].f_10[2 /*4*/]), "CL_C1A_J2", 16);
					Global_23405[1 /*42*/].f_37[2] = 0;
					Global_23405[1 /*42*/].f_32[2] = 3;
					Global_23405[1 /*42*/].f_27[2] = 0;
					iLocal_17 = 0;
					while (iLocal_17 < Global_23405[1 /*42*/].f_32[1])
					{
						Global_33003[iLocal_17] = 0;
						Global_32999[iLocal_17] = 0;
						iLocal_17++;
					}
					func_4(1, 1, 1, 1);
					func_3("CL_ADDED", "CL_C1A", 3000, 1);
					iLocal_19 = 1;
				}
				break;
			
			case 1:
				iLocal_17 = 0;
				while (iLocal_17 < Global_23405[1 /*42*/].f_32[1])
				{
					if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (unk_0xFC8BFE4B41177C22(uLocal_18[iLocal_17]))
						{
							if (unk_0x4FAFF4BCB7633475(uLocal_18[iLocal_17]))
							{
								if (unk_0x9B3D4335E0EDB0BE(uLocal_18[iLocal_17], unk_0x4A8C381C258A124D(), 1))
								{
									if (!Global_32999[iLocal_17])
									{
										Global_23405[1 /*42*/].f_27[1]++;
										func_2("CL_C1A_J1", Global_23405[1 /*42*/].f_27[1], Global_23405[1 /*42*/].f_32[1], 2000, 1);
										Global_32999[iLocal_17] = 1;
									}
									if (unk_0x1C2F771CDC87A3A5(uLocal_18[iLocal_17], 0))
									{
										if (!Global_33003[iLocal_17])
										{
											if (unk_0xA637EDD71DA667DB(uLocal_18[iLocal_17]) && func_1())
											{
												Global_23405[1 /*42*/].f_27[2]++;
												func_2("CL_C1A_J2", Global_23405[1 /*42*/].f_27[2], Global_23405[1 /*42*/].f_32[2], 2000, 1);
												Global_33003[iLocal_17] = 1;
											}
										}
									}
									if (Global_23405[1 /*42*/].f_27[1] >= Global_23405[1 /*42*/].f_32[1] && Global_23405[1 /*42*/].f_27[2] >= Global_23405[1 /*42*/].f_32[2])
									{
										func_3("CL_COMPLETE", "CL_C1A", 3000, 1);
										Global_23405[1 /*42*/].f_8 = 1;
										iLocal_19 = 2;
									}
								}
							}
						}
					}
					iLocal_17++;
				}
				break;
			
			case 2:
				break;
		}
		system::wait(250);
		switch (iLocal_20)
		{
			case 0:
				if (uLocal_16[1])
				{
					StringCopy(&(Global_23405[2 /*42*/]), "CL_C1B", 16);
					StringCopy(&(Global_23405[2 /*42*/].f_4), "CL_C1B_BR", 16);
					Global_23405[2 /*42*/].f_8 = 0;
					Global_23405[2 /*42*/].f_9 = 3;
					StringCopy(&(Global_23405[2 /*42*/].f_10[1 /*4*/]), "CL_C1B_J1", 16);
					Global_23405[2 /*42*/].f_37[1] = 0;
					Global_23405[2 /*42*/].f_32[1] = -1;
					Global_23405[2 /*42*/].f_27[1] = -1;
					StringCopy(&(Global_23405[2 /*42*/].f_10[2 /*4*/]), "CL_C1B_J2", 16);
					Global_23405[2 /*42*/].f_37[2] = 0;
					Global_23405[2 /*42*/].f_32[2] = -1;
					Global_23405[2 /*42*/].f_27[2] = -1;
					StringCopy(&(Global_23405[2 /*42*/].f_10[3 /*4*/]), "CL_C1B_J3", 16);
					Global_23405[2 /*42*/].f_37[3] = 0;
					Global_23405[2 /*42*/].f_32[3] = -1;
					Global_23405[2 /*42*/].f_27[3] = -1;
					func_4(136, 2, 1, 1);
					func_3("CL_ADDED", "CL_C1B", 3000, 1);
					iLocal_20 = 1;
				}
				break;
			
			case 1:
				if (!Global_23405[2 /*42*/].f_37[1])
				{
				}
				if (!Global_23405[2 /*42*/].f_37[2])
				{
				}
				if (!Global_23405[2 /*42*/].f_37[3])
				{
				}
				if ((Global_23405[2 /*42*/].f_37[1] == 1 && Global_23405[2 /*42*/].f_37[2] == 1) && Global_23405[2 /*42*/].f_37[3] == 1)
				{
					func_3("CL_COMPLETE", "CL_C1B", 3000, 1);
					Global_23405[2 /*42*/].f_8 = 1;
					iLocal_20 = 2;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_1()
{
	if (Global_23322)
	{
		return 1;
	}
	return 0;
}

void func_2(char* sParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x511D14ED2DA887E1(uParam2);
	unk_0x0A3136AD174470CC(iParam3, 0);
}

void func_3(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0x0A3136AD174470CC(iParam2, 0);
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_10())
	{
		return 0;
	}
	if (func_5(iParam0, iParam1, bParam2, iParam3) == 1)
	{
		return 1;
	}
	return 0;
}

int func_5(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (unk_0x486FF5D06E9659F1(joaat("appsidetask")) > 0)
	{
		return 0;
	}
	if (func_8() == 0)
	{
		func_7();
		return 0;
	}
	func_6(Global_23404);
	Global_23574[Global_23404 /*9*/].f_1 = uParam1;
	Global_23574[Global_23404 /*9*/] = uParam0;
	if (iParam3 == 0)
	{
	}
	else
	{
		Global_23574[Global_23404 /*9*/].f_8 = iParam3;
	}
	if (bParam2)
	{
	}
	return 1;
}

void func_6(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x4BA5A16068183C5E();
	uVar1 = unk_0x18E502A71E28968C();
	uVar2 = unk_0x5295501D0862870D();
	uVar3 = unk_0xB12880C92EA6EE15();
	uVar4 = unk_0x8825A6E0A30BDCB8() + 1;
	uVar5 = unk_0x7598FE4545010A75();
	Global_23574[iParam0 /*9*/].f_2 = uVar0;
	Global_23574[iParam0 /*9*/].f_2.f_1 = uVar1;
	Global_23574[iParam0 /*9*/].f_2.f_2 = uVar2;
	Global_23574[iParam0 /*9*/].f_2.f_3 = uVar3;
	Global_23574[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_23574[iParam0 /*9*/].f_2.f_5 = uVar5;
}

void func_7()
{
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_23574[iVar0 /*9*/].f_8 == 0)
		{
			Global_23404 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_23404 = 3;
	Global_23574[Global_23404 /*9*/].f_2 = -1;
	Global_23574[Global_23404 /*9*/].f_2.f_1 = 0;
	Global_23574[Global_23404 /*9*/].f_2.f_2 = 0;
	Global_23574[Global_23404 /*9*/].f_2.f_3 = 0;
	Global_23574[Global_23404 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_23574[iVar0 /*9*/].f_8 == 0 || Global_23574[iVar0 /*9*/].f_8 == 1)
		{
			if (!func_9(Global_23574[iVar0 /*9*/].f_2, Global_23574[Global_23404 /*9*/].f_2))
			{
				Global_23404 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_23404 == 3)
	{
		return 0;
	}
	return 1;
}

int func_9(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_10()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	unk_0xBBC29EBE6E1A48FA();
}

