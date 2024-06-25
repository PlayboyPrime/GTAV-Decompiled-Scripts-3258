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
	int iLocal_17 = 0;
	int iLocal_18 = 0;
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
	if (unk_0x96CFB880BAC634CE(2) || unk_0xD5FD8DD00FB16F99())
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	func_1();
}

void func_1()
{
	struct<3> Var0;
	var uVar1;
	
	while (!func_9(&iLocal_18))
	{
		system::wait(0);
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_18))
	{
		if (!Global_98008)
		{
			unk_0xEE0BCDB1B5E36BCB(iLocal_18, 1, 1);
			if (unk_0x9B5C1660CCDF7189(iLocal_18, joaat("script_task_any")) != 7)
			{
				unk_0x974022927CB47E68(iLocal_18);
			}
			Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
			unk_0xAAA71DD7E9059338(iLocal_18, 1);
			unk_0xB5396F1FB088FE38(&uVar1);
			if (!unk_0x7F420695E3F776FB(iLocal_18, 0))
			{
				if (!unk_0x1B32E388988DD296(iLocal_18, 0) && !unk_0x7F420695E3F776FB(iLocal_18, 0))
				{
					unk_0xCD76801E1106CABE(0, Var0, 6000);
				}
			}
			unk_0xE237FA90A8AFEE59(0, Var0, 6000, 0, 2);
			unk_0x93C0674FC00824D0(uVar1);
			unk_0x4BD42B0527065BB6(iLocal_18, uVar1);
		}
		func_2(iLocal_18);
	}
	while (!unk_0x15CCE8886267624F())
	{
		system::wait(0);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_18))
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_18))
		{
			unk_0x44FB298D6382876D(iLocal_18, 1);
		}
		unk_0xF09E30AF1B8FB379(&iLocal_18);
	}
	Global_98008 = 0;
	unk_0xBBC29EBE6E1A48FA();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1DD05E817C89C737() + 1000;
	while (unk_0x1DD05E817C89C737() < iVar0 && !unk_0x15CCE8886267624F())
	{
		system::wait(0);
	}
	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (iLocal_17 == 1)
		{
			switch (func_5(unk_0x4A8C381C258A124D()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3, 0);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3, 0);
					break;
			}
		}
		else if (iLocal_17 == 2)
		{
			switch (func_5(unk_0x4A8C381C258A124D()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3, 0);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3, 0);
					break;
			}
		}
		else if (iLocal_17 == 0)
		{
			switch (func_5(unk_0x4A8C381C258A124D()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3, 0);
					break;
				
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3, 0);
					break;
				}
			}
	}
}

void func_3(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x4CAD907F190E6F10(uParam0, sParam1, sParam2, func_4(iParam3), iParam4);
}

int func_4(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_8(iParam0))
	{
		return func_7(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_7(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_8(int iParam0)
{
	return iParam0 < 3;
}

int func_9(var uParam0)
{
	int iVar0;
	
	iLocal_16 = 0;
	while (iLocal_16 < 9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98882[iLocal_16]) && !unk_0x4FAFF4BCB7633475(Global_98882[iLocal_16]))
		{
			if (Global_98882[iLocal_16] != unk_0x4A8C381C258A124D())
			{
				if (!unk_0x110821AE6C63DD4F(Global_98882[iLocal_16]))
				{
					if (unk_0x7F420695E3F776FB(Global_98882[iLocal_16], 0) || !unk_0xA3736D76B0E93E93(Global_98882[iLocal_16]))
					{
						if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(Global_98882[iLocal_16], 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 1) < 10f)
						{
							iLocal_17 = func_5(Global_98882[iLocal_16]);
							if ((iLocal_17 == 0 || iLocal_17 == 2) || iLocal_17 == 1)
							{
								if (iLocal_17 != func_10())
								{
									if (unk_0xAD915B5E38F323E5(Global_98882[iLocal_16], unk_0x4A8C381C258A124D(), 17))
									{
										if (unk_0x7F420695E3F776FB(Global_98882[iLocal_16], 0))
										{
											iVar0 = unk_0x6EF03BE64E058E2F(Global_98882[iLocal_16], 0);
										}
										if ((unk_0xFC8BFE4B41177C22(iVar0) && unk_0xD9F5E1FEFD1329E4(iVar0, 0)) || !unk_0xFC8BFE4B41177C22(iVar0))
										{
											*uParam0 = Global_98882[iLocal_16];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_16++;
	}
	if (unk_0x15CCE8886267624F())
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_6(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_5(unk_0x4A8C381C258A124D());
			if (func_8(iVar0) && (!func_12(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_8(Global_113969.f_2366.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return Global_44042 == iParam0;
}

