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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	struct<4> Local_35[10];
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var1;
	
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
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_43 = -1;
	iLocal_44 = -1;
	if (unk_0x96CFB880BAC634CE(19))
	{
		func_56();
	}
	if (!func_52())
	{
		func_56();
	}
	if (!func_51(uLocal_40))
	{
		func_56();
	}
	else
	{
		func_50();
		iLocal_41 = unk_0x1DD05E817C89C737();
		iLocal_43 = func_49();
		iLocal_42 = 0;
		func_48(1, &uLocal_46);
	}
	while (true)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (!func_51(uLocal_40))
			{
				func_56();
			}
			Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			Var1 = { unk_0xD1A6A821F5AC81DB(uLocal_40, 1) };
			if (system::vdist2(Var0, Var1) >= (100f * 100f))
			{
				func_56();
			}
			switch (iLocal_45)
			{
				case 0:
					func_43(Var1, Var0, 18000, 1101004800);
					if (func_25(&iLocal_40, 0))
					{
						func_24();
						func_16(0);
						func_12(Var1, Var0);
						unk_0x80813AC549A1E8AE(func_11());
						iLocal_45 = 1;
					}
					break;
				
				case 1:
					if (func_5(&iLocal_40, &uLocal_37, &iLocal_44))
					{
						iLocal_45 = 2;
					}
					break;
				
				case 2:
					if (!func_4(iLocal_40, joaat("script_task_smart_flee_ped")) && !unk_0xCA038E64C65D1F9D(iLocal_40))
					{
						if (!unk_0x13CCB1AD131C1082(iLocal_40, func_11(), func_3(), 3))
						{
							func_1();
						}
					}
					else
					{
						func_56();
					}
					break;
				}
		}
		system::wait(0);
	}
}

void func_1()
{
	if (func_51(iLocal_40))
	{
		func_2(&iLocal_40);
		unk_0xD844F5E50DAB6FF7(iLocal_40, unk_0x4A8C381C258A124D(), 10000f, -1, 0, 0);
		unk_0x44FB298D6382876D(iLocal_40, 1);
	}
}

void func_2(var uParam0)
{
	if (func_51(*uParam0))
	{
		unk_0x1CA08719184AFC6F(*uParam0, 2, 0);
		unk_0x1CA08719184AFC6F(*uParam0, 64, 0);
		unk_0x1CA08719184AFC6F(*uParam0, 128, 0);
		unk_0x1CA08719184AFC6F(*uParam0, 8, 0);
		unk_0x1CA08719184AFC6F(*uParam0, 1, 0);
		unk_0x1CA08719184AFC6F(*uParam0, 32, 0);
		unk_0xBE8796DB2B90A437(*uParam0, 5, 0);
		unk_0xBE8796DB2B90A437(*uParam0, 17, 1);
		unk_0x0428AFDCAA63B06E(*uParam0, 118, 1);
	}
}

char* func_3()
{
	return "female_Flee_Table_Left_Maude";
}

int func_4(var uParam0, int iParam1)
{
	if (func_51(uParam0))
	{
		if (unk_0x9B5C1660CCDF7189(uParam0, iParam1) == 1 || unk_0x9B5C1660CCDF7189(uParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_5(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (func_51(*uParam0))
	{
		if (unk_0x13CCB1AD131C1082(*uParam0, func_10(), func_9(), 3))
		{
			if (!unk_0x8BF5256C439DF778(*uParam0) || unk_0x0B3FC0E7676E79BF(*uParam0))
			{
				unk_0x80813AC549A1E8AE(func_11());
				if (unk_0xE100DD4F82A51BDE(func_11()))
				{
					*iParam2 = unk_0x2EC137C692A52458(2727,4f, 4145,56f, 43,68f, 0f, 0f, -92,17f, 2);
					unk_0xBF3497E24DEAD835(*iParam2, 0);
					unk_0xA7C372501A8A3B23(*iParam2, 0);
					if (func_4(*uParam0, joaat("script_task_synchronized_scene")))
					{
						unk_0xC0086E5CBF13BBF7(*uParam0, -1000f, 1);
					}
					unk_0x3DA436E63AB0F541(*uParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0, 1148846080, 0);
					unk_0xD8ED11B32DF72E0B(*uParam0, 0, 0);
					if (func_8(*uParam1))
					{
						if (unk_0x13CCB1AD131C1082(*uParam1, func_10(), func_7(), 3))
						{
							unk_0xC0086E5CBF13BBF7(*uParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						unk_0x381D671BCFC294D9(*uParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0, 1148846080);
					}
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

char* func_6()
{
	return "Female_Flee_Table_Left_Maude_Chair";
}

char* func_7()
{
	return "base_chair";
}

int func_8(int iParam0)
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

char* func_9()
{
	return "base";
}

char* func_10()
{
	return "special_ped@maude@base";
}

char* func_11()
{
	return "special_ped@maude@exit_flee";
}

void func_12(struct<3> Param0, struct<3> Param1)
{
	if (func_51(iLocal_40))
	{
		if (!unk_0x912159A05BE6B52E(iLocal_40))
		{
			if (system::vdist2(Param1, Param0) < (35f * 35f))
			{
				func_13(&iLocal_40, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	bool bVar0;
	
	if (func_51(*uParam0))
	{
		bVar0 = unk_0xE8B33D130955481B(*uParam0);
		if (bVar0)
		{
			unk_0xFD61BB3B8F1CDB6D(*uParam0, 0);
		}
		func_14(*uParam0, sParam1, sParam2, iParam3, 0);
		if (bVar0)
		{
			unk_0xFD61BB3B8F1CDB6D(*uParam0, 1);
		}
	}
}

void func_14(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	unk_0x4CAD907F190E6F10(uParam0, uParam1, uParam2, func_15(iParam3), iParam4);
}

int func_15(int iParam0)
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

void func_16(bool bParam0)
{
	struct<6> Var0;
	var uVar1;
	
	if (func_23())
	{
		Var0 = { func_22() };
		uVar1 = func_21();
		if (unk_0x1B79E937E91F40C3(&Var0, uVar1))
		{
			if (bParam0)
			{
				func_19();
			}
			else
			{
				func_17();
			}
		}
	}
}

void func_17()
{
	Global_21152 = 0;
	func_18();
}

void func_18()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

void func_19()
{
	Global_21152 = 0;
	func_20();
}

void func_20()
{
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0xC78B293A5F4EACF9();
		Global_23297 = 0;
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

char* func_21()
{
	if (BitTest(Global_113969.f_24989, 3))
	{
		return "BB4_loiter";
	}
	else if (BitTest(Global_113969.f_24989, 2))
	{
		return "BB3_loiter";
	}
	else if (BitTest(Global_113969.f_24989, 1))
	{
		return "BB2_loiter";
	}
	else if (BitTest(Global_113969.f_24989, 0))
	{
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

struct<6> func_22()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		return Global_21905;
	}
	return Var0;
}

int func_23()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	if (unk_0xFC8BFE4B41177C22(uLocal_39))
	{
		unk_0x5D7CD709B34C90F0(iLocal_39, 0);
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_38))
	{
		unk_0x5D7CD709B34C90F0(iLocal_38, 0);
	}
}

int func_25(var uParam0, bool bParam1)
{
	if (func_51(*uParam0))
	{
		if ((unk_0xF76AF9D45D6BDA45(*uParam0) || unk_0xFFF4FB66DA549D0F(*uParam0)) || unk_0x6E470765558FCD9E(*uParam0))
		{
			return 1;
		}
		if (unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), *uParam0))
			{
				return 1;
			}
			if (unk_0xFC8BFE4B41177C22(uLocal_37))
			{
				if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iLocal_37))
				{
					return 1;
				}
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_38))
			{
				if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iLocal_38))
				{
					return 1;
				}
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_39))
			{
				if (unk_0x685171EED42BC4DF(unk_0x4A8C381C258A124D(), iLocal_39))
				{
					return 1;
				}
			}
		}
		if (unk_0x613F3705BEA060B4(*uParam0, 61))
		{
			return 1;
		}
		if (unk_0x8BF5256C439DF778(*uParam0))
		{
			if (unk_0xFAA48325A90263BE(*uParam0, unk_0x4A8C381C258A124D(), 3f, 3f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
		if (unk_0x613F3705BEA060B4(*uParam0, 51))
		{
			return 1;
		}
		if (func_33(*uParam0, 1126825984))
		{
			return 1;
		}
		if (func_26(*uParam0, 1, 0, 0, 0))
		{
			return 1;
		}
		if (unk_0x8764A5B95AE1F967(-1, unk_0xD1A6A821F5AC81DB(*uParam0, 1), 15f))
		{
			return 1;
		}
		if (unk_0x613F3705BEA060B4(*uParam0, 73))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1,86f;
		fVar1 = 1,86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_8(unk_0x4A8C381C258A124D()) && func_8(iParam0))
	{
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_32(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x3C2402675D8FFADA(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
				{
					if (unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(iParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1,86f;
					fVar1 = 1,86f;
				}
				if (func_32(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_27(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	Var1 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var1.f_0 = (Var1.f_0 + fParam1);
	Var1.f_1 = (Var1.f_1 + fParam1);
	Var1.f_2 = (Var1.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x8EC0BB480F11446F(unk_0xD1A6A821F5AC81DB(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_28(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_28(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE94C7FA27FEB00DD(Var0, Var1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0xF67924A428A734EC(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xF67924A428A734EC(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xF67924A428A734EC(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xF67924A428A734EC(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xF67924A428A734EC(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_29(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_31(Param1 - unk_0xD1A6A821F5AC81DB(iParam0, 1)) };
	if (fParam2 < 0,1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x90D0E0397D3F7690(iParam0) };
	}
	else
	{
		Var1 = { func_31(unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 5f, 0f) - unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_30(Var1, Var0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_30(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_31(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_32(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
		{
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x398315D0C90DE6F6(unk_0xD1A6A821F5AC81DB(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_8(unk_0x4A8C381C258A124D()) && func_8(iParam0))
	{
		if (func_42(iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0))
		{
			if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_34(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_34(int iParam0, float fParam1)
{
	return func_35(iParam0, unk_0x4A8C381C258A124D(), fParam1, 1, 250, 7);
}

bool func_35(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_41(iParam0, iParam1);
	if (!func_8(iParam0) || !func_8(iParam1))
	{
		if (iVar2 != -1)
		{
			func_40(&(Local_35[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_39(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_38();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_35[iVar2 /*4*/].f_1 = iParam0;
		Local_35[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_36(&(Local_35[iVar2 /*4*/]), Var1, iParam1, &(Local_35[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1DD05E817C89C737() - Local_35[iVar2 /*4*/].f_3) < iParam4);
}

int func_36(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_8(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_37(iParam2, iParam5) };
		*uParam0 = unk_0x120E577522852984(Param1, Var1 + Var1 - Param1 * Vector(0,1f, 0,1f, 0,1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0x0E7DD1EBCA8D2DE3(*uParam0, &uVar0, &Var1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x0101C509A6E67F99(iVar3))
	{
		func_8(iVar3);
		if (unk_0xBD545F8729E9F413(iVar3) == iParam2)
		{
			if (bLocal_36)
			{
				unk_0x7B26600F66208BC6(Param1, unk_0xD1A6A821F5AC81DB(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x1DD05E817C89C737();
			return 1;
		}
		return 0;
	}
	if (unk_0x55B80B6E7AB61270(iVar3))
	{
		func_8(iVar3);
		if (unk_0x7F420695E3F776FB(iParam2, 0))
		{
			if (unk_0xE93EDE86BBB66532(iVar3) == unk_0x6EF03BE64E058E2F(iParam2, 0))
			{
				if (bLocal_36)
				{
					unk_0x7B26600F66208BC6(Param1, unk_0xD1A6A821F5AC81DB(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x1DD05E817C89C737();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xD1A6A821F5AC81DB(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x83FDC027F0BEA202(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xD1A6A821F5AC81DB(iParam0, 1);
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_35.f_0)
	{
		if ((Local_35[iVar0 /*4*/] == 0 && Local_35[iVar0 /*4*/].f_1 == 0) && Local_35[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_39(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_31(unk_0xD1A6A821F5AC81DB(iParam1, 1) - unk_0xD1A6A821F5AC81DB(iParam0, 1)) };
	if (fParam2 < 0,1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x90D0E0397D3F7690(iParam0) };
	}
	else
	{
		Var1 = { func_31(unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 5f, 0f) - unk_0x83FDC027F0BEA202(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_30(Var1, Var0);
	if (fVar2 <= system::cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_40(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_35.f_0)
	{
		if (Local_35[iVar0 /*4*/].f_1 == iParam0 && Local_35[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(var uParam0)
{
	if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), uParam0) && unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
	{
		return 1;
	}
	return 0;
}

int func_43(struct<3> Param0, struct<3> Param1, int iParam2, float fParam3)
{
	var uVar0;
	char[] cVar1[8];
	char* sVar2;
	
	if (iLocal_42 < iLocal_43)
	{
		if (!func_23())
		{
			if (system::vdist2(Param1, Param0) < (fParam3 * fParam3))
			{
				if (unk_0x1DD05E817C89C737() - iLocal_41) > (iParam2 + unk_0xC5935DFB3F39785A(0, 2000))
				{
					uVar0 = 16;
					func_47(&uVar0, 3, iLocal_40, "MAUDE", 0, 1);
					cVar1 = func_46();
					sVar2 = func_21();
					func_44(&uVar0, cVar1, sVar2, 7, 0, 0);
					iLocal_41 = unk_0x1DD05E817C89C737();
					iLocal_42++;
					return 1;
				}
			}
		}
		else
		{
			iLocal_41 = unk_0x1DD05E817C89C737();
		}
	}
	return 0;
}

void func_44(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x0B0C9A0F9AAEB7F0(&Global_21152, 0);
	Global_22289 = iParam3;
	StringCopy(&Global_22276, sParam2, 24);
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

char* func_46()
{
	if (BitTest(Global_113969.f_24989, 3))
	{
		return "BB4AUD";
	}
	else if (BitTest(Global_113969.f_24989, 2))
	{
		return "BB3AUD";
	}
	else if (BitTest(Global_113969.f_24989, 1))
	{
		return "BB2AUD";
	}
	else if (BitTest(Global_113969.f_24989, 0))
	{
		return "BB1AUD";
	}
	return "MAUDEAU";
}

void func_47(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 0);
			}
			else
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x26C12212366CBF6E(iParam2, 0);
			}
			else
			{
				unk_0x26C12212366CBF6E(iParam2, 1);
			}
		}
	}
}

void func_48(bool bParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 2711,198f, 4134,425f, 32,90168f };
	Var1 = { 2739,981f, 4155,221f, 50,28859f };
	if (bParam0)
	{
		*uParam1 = unk_0xA7B0B03284E7503C(Var0, Var1, 0, 1, 1, 1, 1);
		unk_0x89C4F1335B4A6633(Var0, Var1);
		unk_0xA63572E348CC4CFB(Var0, Var1, 0, 1);
		unk_0xC4BCE90F7242F354(Var0, Var1, 0);
		unk_0xD1B0AF388B711EBC(2697,222f, 4119,894f, 42,79107f, 2746,04f, 4162,974f, 43,62732f, 0, 1);
		unk_0x2094BC4B6731BA68(2728,333f, 4144,778f, 43,29292f, 7,5f, 1, 0, 0, 0);
	}
	else
	{
		unk_0xD7B6A43ACC36D868(*uParam1, 0);
		unk_0x93586F94C370857F();
		unk_0xA63572E348CC4CFB(Var0, Var1, 1, 1);
		unk_0x33B6B083EA6305A5(2697,222f, 4119,894f, 42,79107f, 2746,04f, 4162,974f, 43,62732f, 1);
	}
}

int func_49()
{
	if (BitTest(Global_113969.f_24989, 3))
	{
		return 4;
	}
	else if (BitTest(Global_113969.f_24989, 2))
	{
		return 4;
	}
	else if (BitTest(Global_113969.f_24989, 1))
	{
		return 4;
	}
	else if (BitTest(Global_113969.f_24989, 0))
	{
		return 3;
	}
	return 4;
}

void func_50()
{
	struct<3> Var0;
	
	if (func_51(iLocal_40))
	{
		if (!unk_0x110821AE6C63DD4F(iLocal_40))
		{
			unk_0xEE0BCDB1B5E36BCB(iLocal_40, 1, 0);
		}
		unk_0xAAA71DD7E9059338(iLocal_40, 1);
		unk_0x886FA295C1257AAA(iLocal_40, 0);
		unk_0x3F58BFCF656F0DF1(iLocal_40, 0);
		unk_0x3CEA1FD137ACE2D9(iLocal_40, joaat("player"));
		unk_0x176A19E4589CC2C6(iLocal_40, 0);
		unk_0x828D385CED572E95(iLocal_40, 0);
		unk_0x0428AFDCAA63B06E(iLocal_40, 118, 0);
		Var0 = { 2728,33f, 4145,6f, 43,89f };
		if (unk_0xE10356B235A70E70(Var0, 10f, joaat("prop_table_03b"), 0))
		{
			iLocal_38 = unk_0x8366ABB82B1ABC59(Var0, 10f, joaat("prop_table_03b"), 1, 0, 1);
			if (func_8(iLocal_38))
			{
				unk_0xB2BD5837A8D3CEDA(iLocal_38, 2727,4f, 4145,56f, 43,68f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(iLocal_38, -92,17f);
				unk_0x5D7CD709B34C90F0(iLocal_38, 1);
			}
		}
		if (unk_0xE10356B235A70E70(Var0, 10f, joaat("prop_laptop_01a"), 0))
		{
			iLocal_39 = unk_0x8366ABB82B1ABC59(Var0, 10f, joaat("prop_laptop_01a"), 0, 0, 1);
			if (func_8(iLocal_39))
			{
				if (!unk_0x110821AE6C63DD4F(iLocal_39))
				{
					unk_0xEE0BCDB1B5E36BCB(iLocal_39, 1, 0);
				}
				unk_0xB2BD5837A8D3CEDA(iLocal_39, 2727,686f, 4145,715f, 44,08f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(iLocal_39, 71f);
				unk_0x5D7CD709B34C90F0(iLocal_39, 1);
			}
		}
		if (unk_0xE10356B235A70E70(Var0, 10f, joaat("prop_table_03_chr"), 0))
		{
			iLocal_37 = unk_0x8366ABB82B1ABC59(Var0, 10f, joaat("prop_table_03_chr"), 0, 0, 1);
			if (func_8(iLocal_37))
			{
				if (!unk_0x110821AE6C63DD4F(iLocal_37))
				{
					unk_0xEE0BCDB1B5E36BCB(iLocal_37, 1, 0);
				}
				unk_0xB2BD5837A8D3CEDA(iLocal_37, 2728,35f, 4145,59f, 43,3f, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(iLocal_37, -91,28f);
			}
		}
	}
}

int func_51(int iParam0)
{
	if (func_8(uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_52()
{
	int iVar0;
	int iVar1;
	var uVar2[32];
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		iVar0 = unk_0xAA3F0A9E20917995(unk_0x4A8C381C258A124D(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (func_51(uVar2[iVar1]))
			{
				if (unk_0x4B423FAA24E8ABF0(uVar2[iVar1]) == func_53(62))
				{
					iLocal_40 = uVar2[iVar1];
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_53(int iParam0)
{
	if (!func_55(iParam0))
	{
		return func_54(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_54(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

void func_56()
{
	func_48(0, &uLocal_46);
	if (func_8(iLocal_39))
	{
		unk_0x5D7CD709B34C90F0(iLocal_39, 0);
	}
	func_58(&iLocal_39, 0);
	if (func_8(iLocal_38))
	{
		unk_0x5D7CD709B34C90F0(iLocal_38, 0);
	}
	func_58(&iLocal_38, 0);
	if (func_8(iLocal_37))
	{
		unk_0x5D7CD709B34C90F0(iLocal_37, 0);
		if (unk_0x13CCB1AD131C1082(iLocal_37, "special_ped@maude@base", "base_chair", 3))
		{
			unk_0x1D949F0AD44C7F05(iLocal_37, "base_chair", "special_ped@maude@base", -1000f);
			unk_0xC0086E5CBF13BBF7(iLocal_37, -1000f, 1);
		}
		else if (unk_0x13CCB1AD131C1082(iLocal_37, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3))
		{
			unk_0x1D949F0AD44C7F05(iLocal_37, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			unk_0xC0086E5CBF13BBF7(iLocal_37, -1000f, 1);
		}
	}
	func_58(&iLocal_37, 0);
	if (func_51(iLocal_40))
	{
		unk_0x44FB298D6382876D(iLocal_40, 1);
		unk_0x0428AFDCAA63B06E(iLocal_40, 118, 1);
	}
	func_57(&iLocal_40, 1, 0, 1);
	unk_0x268BE77F77533D03(func_11());
	unk_0xBBC29EBE6E1A48FA();
}

void func_57(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(*uParam0))
		{
			unk_0x788F35D395511DFE(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xBEB96F1A510EE9AA(*uParam0);
			}
			unk_0x44FB298D6382876D(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xAAA71DD7E9059338(*uParam0, 0);
			}
		}
		unk_0xF09E30AF1B8FB379(uParam0);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (unk_0x5B9219522937741D(*uParam0))
		{
			unk_0x837D67618BF89034(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xB3B56385ECA230B4(uParam0);
		}
		else
		{
			unk_0xC942CD0D37369DC4(*uParam0);
		}
	}
}

