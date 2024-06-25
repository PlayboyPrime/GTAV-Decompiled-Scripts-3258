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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	struct<17> Local_18 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_19 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	if (unk_0x96CFB880BAC634CE(50))
	{
		func_23();
	}
	while (true)
	{
		if (Global_113969.f_20413.f_145 > 0 || Global_112606)
		{
			if (!Global_112606)
			{
				if ((Global_44042 != 6 && Global_44042 != 15) && !Global_97520)
				{
					func_23();
				}
				if (!Global_112605)
				{
					if (Global_113969.f_20413.f_145 > 0)
					{
						if (func_20(&(Global_113969.f_20413[iLocal_19 /*16*/])))
						{
							if (func_18(func_19()))
							{
								if (BitTest(Global_113969.f_20413[iLocal_19 /*16*/].f_11, func_12()))
								{
									if (Global_113969.f_20413[iLocal_19 /*16*/].f_12 == Global_113969.f_20413.f_146[func_12()])
									{
										if (unk_0x1DD05E817C89C737() > Global_112608)
										{
											if (unk_0x1DD05E817C89C737() > Global_113969.f_20413[iLocal_19 /*16*/].f_8)
											{
												if (unk_0x1B79E937E91F40C3(&(Global_113969.f_20413[iLocal_19 /*16*/].f_4), ""))
												{
													unk_0x3EC26139639016E5(1);
													func_11(&(Global_113969.f_20413[iLocal_19 /*16*/]));
												}
												else
												{
													unk_0x3EC26139639016E5(1);
													func_10(&(Global_113969.f_20413[iLocal_19 /*16*/]), &(Global_113969.f_20413[iLocal_19 /*16*/].f_4));
												}
												if (Global_113969.f_20413[iLocal_19 /*16*/].f_13 != 0)
												{
													func_9(Global_113969.f_20413[iLocal_19 /*16*/].f_13, 0);
												}
												Local_18 = { Global_113969.f_20413[iLocal_19 /*16*/] };
												Local_18.f_4 = { Global_113969.f_20413[iLocal_19 /*16*/].f_4 };
												Local_18.f_8 = Global_113969.f_20413[iLocal_19 /*16*/].f_8;
												Local_18.f_10 = Global_113969.f_20413[iLocal_19 /*16*/].f_10;
												Local_18.f_9 = Global_113969.f_20413[iLocal_19 /*16*/].f_9;
												Local_18.f_11 = Global_113969.f_20413[iLocal_19 /*16*/].f_11;
												Local_18.f_12 = Global_113969.f_20413[iLocal_19 /*16*/].f_12;
												Local_18.f_13 = Global_113969.f_20413[iLocal_19 /*16*/].f_13;
												Local_18.f_14 = Global_113969.f_20413[iLocal_19 /*16*/].f_14;
												Local_18.f_15 = Global_113969.f_20413[iLocal_19 /*16*/].f_15;
												Local_18.f_16 = 0;
												Global_112609 = { Global_113969.f_20413[iLocal_19 /*16*/] };
												Global_112607 = unk_0x1DD05E817C89C737();
												iVar0 = iLocal_19;
												while (iVar0 <= (Global_113969.f_20413.f_145 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_113969.f_20413.f_145 - 1));
												Global_113969.f_20413.f_145 = (Global_113969.f_20413.f_145 - 1);
												func_6();
												Global_112606 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (unk_0x1B79E937E91F40C3(&(Local_18.f_4), ""))
				{
					if (func_3(&Local_18))
					{
						unk_0x428C32CC68809A35(0);
					}
				}
				else if (func_2(&Local_18, &(Local_18.f_4)))
				{
					unk_0x428C32CC68809A35(0);
				}
				if ((unk_0x1DD05E817C89C737() - Global_112607) > 4000 || Local_18.f_16)
				{
					if (Local_18.f_14 != 0)
					{
						func_9(Local_18.f_14, 0);
					}
					Global_112608 = unk_0x1DD05E817C89C737() + 250;
				}
				else
				{
					if (Local_18.f_10 != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_18, &(Local_18.f_4), Local_18.f_12, 1000, iVar1, Local_18.f_9, Local_18.f_11, Local_18.f_13, Local_18.f_14, Local_18.f_15);
				}
				StringCopy(&Local_18, "", 16);
				StringCopy(&(Local_18.f_4), "", 16);
				Local_18.f_8 = 0;
				Local_18.f_9 = 0;
				Local_18.f_10 = -1;
				Local_18.f_11 = 0;
				Local_18.f_12 = 0;
				Local_18.f_13 = 0;
				Local_18.f_14 = 0;
				Local_18.f_15 = 0;
				Local_18.f_16 = 0;
				Global_112607 = 0;
				Global_112606 = 0;
			}
			if (!unk_0x1B79E937E91F40C3(&(Global_113969.f_20413[iLocal_19 /*16*/]), &Local_18) && !unk_0x1B79E937E91F40C3(&(Global_113969.f_20413[iLocal_19 /*16*/]), ""))
			{
				if (Global_113969.f_20413[iLocal_19 /*16*/].f_10 != -1)
				{
					if (unk_0x1DD05E817C89C737() > Global_113969.f_20413[iLocal_19 /*16*/].f_10)
					{
						iVar2 = iLocal_19;
						while (iVar2 <= (Global_113969.f_20413.f_145 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_113969.f_20413.f_145 - 1));
						Global_113969.f_20413.f_145 = (Global_113969.f_20413.f_145 - 1);
						func_6();
					}
				}
			}
			iLocal_19++;
			if (iLocal_19 >= Global_113969.f_20413.f_145)
			{
				iLocal_19 = 0;
			}
		}
		else if ((Global_44042 != 6 && Global_44042 != 15) && !Global_97520)
		{
			func_23();
		}
		system::wait(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x1B79E937E91F40C3(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (unk_0x1B79E937E91F40C3(&(Global_113969.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113969.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = (unk_0x1DD05E817C89C737() + iParam3);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = ((unk_0x1DD05E817C89C737() + iParam3) + iParam4);
		}
		else
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_113969.f_20413.f_145++;
		func_6();
	}
}

bool func_2(var uParam0, var uParam1)
{
	unk_0x39DCBE5519BD783A(uParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

bool func_3(var uParam0)
{
	unk_0x39DCBE5519BD783A(uParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_4()
{
	if (unk_0xFD216000DC314A92())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_18.f_9 != -1 && (unk_0x1DD05E817C89C737() - Global_112607) > Local_18.f_9)
	{
		return 0;
	}
	if (Global_112605)
	{
		return 0;
	}
	if (unk_0xFD216000DC314A92())
	{
		return 0;
	}
	if (unk_0x1B79E937E91F40C3(&(Local_18.f_4), ""))
	{
		if (!func_3(&Local_18))
		{
			Local_18.f_16 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_18, &(Local_18.f_4)))
	{
		Local_18.f_16 = 1;
		return 0;
	}
	return 1;
}

int func_5()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113969.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[0])
			{
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[1])
			{
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[2])
			{
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_113969.f_20413[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_113969.f_20413[iParam0 /*16*/].f_4), "", 16);
	Global_113969.f_20413[iParam0 /*16*/].f_8 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = -1;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)
{
	Global_113969.f_20413[iParam0 /*16*/] = { Global_113969.f_20413[iParam1 /*16*/] };
	Global_113969.f_20413[iParam0 /*16*/].f_4 = { Global_113969.f_20413[iParam1 /*16*/].f_4 };
	Global_113969.f_20413[iParam0 /*16*/].f_8 = Global_113969.f_20413[iParam1 /*16*/].f_8;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = Global_113969.f_20413[iParam1 /*16*/].f_10;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = Global_113969.f_20413[iParam1 /*16*/].f_9;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = Global_113969.f_20413[iParam1 /*16*/].f_11;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = Global_113969.f_20413[iParam1 /*16*/].f_12;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = Global_113969.f_20413[iParam1 /*16*/].f_13;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = Global_113969.f_20413[iParam1 /*16*/].f_14;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = Global_113969.f_20413[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_113969.f_8616[iParam0] = 1;
	Global_113969.f_8616.f_236[iParam0] = (unk_0x1DD05E817C89C737() + iParam1);
}

void func_10(var uParam0, var uParam1)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

void func_11(var uParam0)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

bool func_12()
{
	func_13();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_13()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_16(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_15(unk_0x4A8C381C258A124D());
			if (func_18(iVar0) && (!func_14(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_18(Global_113969.f_2366.f_539.f_4321))
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

bool func_14(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_17(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_17(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19()
{
	func_13();
	return Global_113969.f_2366.f_539.f_4321;
}

int func_20(var uParam0)
{
	if (unk_0x4C705AAF75363287())
	{
		return 0;
	}
	if (unk_0xFD216000DC314A92())
	{
		return 0;
	}
	if (!unk_0x9390801B06EE998F())
	{
		return 0;
	}
	if (unk_0xB11671B812399BA2())
	{
		return 0;
	}
	if (func_22())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (uParam0->f_12 < 3)
	{
		if (func_21())
		{
			return 0;
		}
		if (Global_79387)
		{
			return 0;
		}
		if (Global_98433)
		{
			return 0;
		}
		if (!BitTest(uParam0->f_15, 1))
		{
			if (Global_98441)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_21()
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

int func_22()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

void func_23()
{
	if (Global_112606)
	{
		if (unk_0x1B79E937E91F40C3(&(Local_18.f_4), ""))
		{
			if (func_3(&Local_18))
			{
				unk_0x428C32CC68809A35(1);
			}
		}
		else if (func_2(&Local_18, &(Local_18.f_4)))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	Global_112607 = 0;
	Global_112606 = 0;
	unk_0xBBC29EBE6E1A48FA();
}

