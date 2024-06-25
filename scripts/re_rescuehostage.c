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
	int iLocal_12 = 0;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
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
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	bool bLocal_66 = 0;
	bool bLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	char* sLocal_80 = NULL;
	char* sLocal_81 = NULL;
	char* sLocal_82 = NULL;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	struct<10> Local_91[16];
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	char* sLocal_97 = NULL;
	struct<18> Local_98 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_13 = 0,001f;
	iLocal_16 = -1;
	iLocal_17 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0,0375f;
	fLocal_26 = 0,17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_57 = 8000;
	iLocal_62 = -1;
	bLocal_77 = true;
	sLocal_82 = "NULL";
	fLocal_83 = -120f;
	fLocal_84 = 120f;
	fLocal_85 = 40f;
	fLocal_86 = 90f;
	bLocal_88 = true;
	sLocal_97 = "RANDOM@RESCUE_HOSTAGE";
	Local_44 = { ScriptParam_98.f_1[0 /*3*/] };
	fLocal_45 = ScriptParam_98.f_17[0];
	if (unk_0x96CFB880BAC634CE(11))
	{
		func_163();
	}
	if (Global_40980[0] == 1)
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	if (func_121(Local_44, -1, 0, 0, 0))
	{
		func_118(-1);
	}
	else
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	func_117();
	func_116();
	while (true)
	{
		system::wait(0);
		func_115();
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x9C931A1395CC1AE9(unk_0x259BE71D8A81D4FA());
		}
		if (unk_0x173751E886F8E9AB())
		{
			switch (iLocal_43)
			{
				case 0:
					if (func_112())
					{
						iLocal_89 = unk_0x1DD05E817C89C737();
						iLocal_43 = 1;
					}
					else if (func_111())
					{
						func_163();
					}
					break;
				
				case 1:
					if (iLocal_58 == 0)
					{
						iLocal_58 = unk_0x18B384412B836744(101, -104,982f, 6408,737f, 30,4905f, 180000f);
					}
					func_110();
					if (!unk_0x4FAFF4BCB7633475(iLocal_47))
					{
						func_109();
					}
					else if (!unk_0x4FAFF4BCB7633475(iLocal_48))
					{
						func_105();
						func_104();
					}
					else
					{
						func_163();
					}
					if (bLocal_66)
					{
						func_102();
					}
					if (!unk_0x4FAFF4BCB7633475(iLocal_46))
					{
						if (!func_101())
						{
							if (func_89())
							{
								func_163();
							}
							func_74();
						}
						else if (!bLocal_66)
						{
							func_57();
						}
					}
					else
					{
						if (Local_91[1 /*10*/].f_7)
						{
							if (unk_0xC450B06E5AAA0985(uLocal_51))
							{
								unk_0xFE54B8568B2ABD12(&uLocal_51);
							}
							if (unk_0xC450B06E5AAA0985(uLocal_52))
							{
								unk_0xFE54B8568B2ABD12(&uLocal_52);
							}
							func_56(&Local_91, 1);
							func_54();
						}
						if (!unk_0x4FAFF4BCB7633475(iLocal_47))
						{
							if (bLocal_66)
							{
								if (unk_0x5266F1D2AEF6F73A(uLocal_61))
								{
									if (unk_0xBD3B265153D3BA2D(iLocal_61) == 1f)
									{
										if (!unk_0x4FAFF4BCB7633475(iLocal_47))
										{
											unk_0x9FF00EA9A61211D2(iLocal_47, 1);
											unk_0xD25E9BDC14A0B649(iLocal_47, 0, 0, 0);
										}
									}
								}
							}
							else
							{
								if (func_53())
								{
									iLocal_43 = 3;
								}
								if (!unk_0x4FAFF4BCB7633475(iLocal_48))
								{
								}
							}
						}
					}
					break;
				
				case 2:
					uLocal_50 = unk_0x66D94742BB3D032F(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 35f, 0, 101383);
					if (unk_0xD9F5E1FEFD1329E4(uLocal_50, 0))
					{
						if (!bLocal_90)
						{
							unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 2, 0);
							unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
						}
						func_163();
					}
					if (!iLocal_76)
					{
						if (unk_0x70DA4F87B396F9F9(7, Local_44, 2, 0f, &uLocal_78, 0, 0))
						{
							iLocal_76 = 1;
						}
					}
					break;
				
				case 3:
					if (iLocal_74)
					{
						if (system::timera() > 5000)
						{
							if (!unk_0x4FAFF4BCB7633475(iLocal_47))
							{
								unk_0x44FB298D6382876D(iLocal_47, 1);
								func_28();
							}
							func_163();
						}
					}
					else
					{
						if (func_53())
						{
							if (!bLocal_67)
							{
								if (bLocal_77)
								{
									if (func_5(&Local_91, "RERHOAU", "RERHO_THANK", 4, iLocal_96, 0, 0))
									{
										bLocal_67 = true;
									}
								}
								else if (func_5(&Local_91, "RERHOAU", "RERHO_NOGUN", 4, iLocal_96, 0, 0))
								{
									bLocal_67 = true;
								}
							}
						}
						func_3();
						if (!unk_0x4FAFF4BCB7633475(iLocal_47))
						{
							if (unk_0x1DD05E817C89C737() > iLocal_60 + 100)
							{
								func_1(iLocal_47, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24, 0);
								iLocal_60 = unk_0x1DD05E817C89C737();
							}
						}
						if (bLocal_67)
						{
							if (!iLocal_75)
							{
								if (!unk_0x4FAFF4BCB7633475(iLocal_48))
								{
									if (func_5(&Local_91, "RERHOAU", "RERHO_CONS", 4, iLocal_96, 0, 0))
									{
										iLocal_75 = 1;
									}
								}
							}
						}
						uLocal_50 = unk_0x66D94742BB3D032F(Local_44, 5f, joaat("ambulance"), 0);
						if (unk_0xD9F5E1FEFD1329E4(uLocal_50, 0))
						{
							system::settimera(0);
							iLocal_74 = 1;
						}
						iLocal_49 = unk_0xFA4D35AD36BDA1FE(Local_44, 1,5f, 1,5f, 1,5f, -1);
						if (!unk_0x4FAFF4BCB7633475(iLocal_49))
						{
							system::settimera(5000);
							iLocal_74 = 1;
						}
						if (!iLocal_76 && iLocal_75)
						{
							if (unk_0x70DA4F87B396F9F9(5, Local_44, 2, 0f, &uLocal_79, 0, 0))
							{
								iLocal_76 = 1;
							}
						}
						if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_44) > 5625f && !unk_0x7B780C491DEC834E(Local_44, 10f))
						{
							func_28();
						}
					}
					break;
			}
		}
		else if (iLocal_43 == 3)
		{
			func_28();
		}
		else
		{
			func_163();
		}
	}
}

void func_1(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x4CAD907F190E6F10(iParam0, sParam1, sParam2, func_2(iParam3), iParam4);
}

int func_2(int iParam0)
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

void func_3()
{
	if (func_4())
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_47))
		{
			unk_0xAAA71DD7E9059338(iLocal_47, 0);
			unk_0xFD251F92B546F389(iLocal_47, Local_44, 50f, -1, 0, 0);
			unk_0x44FB298D6382876D(iLocal_47, 1);
			unk_0xF09E30AF1B8FB379(&iLocal_47);
			func_54();
		}
		if (!unk_0x4FAFF4BCB7633475(iLocal_48))
		{
			unk_0xAAA71DD7E9059338(iLocal_48, 0);
			unk_0xFD251F92B546F389(iLocal_48, Local_44, 50f, -1, 0, 0);
			unk_0x44FB298D6382876D(iLocal_48, 1);
			unk_0xF09E30AF1B8FB379(&iLocal_48);
			func_54();
		}
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_47))
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_47, unk_0x4A8C381C258A124D(), 1))
		{
			if (unk_0x8BF5256C439DF778(iLocal_47))
			{
				unk_0xD25E9BDC14A0B649(iLocal_47, 0, 0, 0);
			}
		}
		else if (unk_0x8BF5256C439DF778(iLocal_47))
		{
			unk_0xAAA71DD7E9059338(iLocal_47, 0);
			unk_0xFD251F92B546F389(iLocal_47, Local_44, 50f, -1, 0, 0);
			unk_0x44FB298D6382876D(iLocal_47, 1);
			unk_0xF09E30AF1B8FB379(&iLocal_47);
			func_54();
			if (!unk_0x4FAFF4BCB7633475(iLocal_48))
			{
				unk_0xAAA71DD7E9059338(iLocal_48, 0);
				unk_0xFD251F92B546F389(iLocal_48, Local_44, 50f, -1, 0, 0);
				unk_0x44FB298D6382876D(iLocal_48, 1);
				unk_0xF09E30AF1B8FB379(&iLocal_48);
				func_54();
			}
		}
	}
	else if (!unk_0x4FAFF4BCB7633475(iLocal_48))
	{
		unk_0xAAA71DD7E9059338(iLocal_48, 0);
		unk_0xFD251F92B546F389(iLocal_48, Local_44, 50f, -1, 0, 0);
		unk_0x44FB298D6382876D(iLocal_48, 1);
		unk_0xF09E30AF1B8FB379(&iLocal_48);
		func_54();
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_48))
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_48, unk_0x4A8C381C258A124D(), 1))
		{
			if (unk_0x8BF5256C439DF778(iLocal_48))
			{
				unk_0xD25E9BDC14A0B649(iLocal_48, 0, 0, 0);
			}
		}
		else if (unk_0x8BF5256C439DF778(iLocal_48))
		{
			unk_0xAAA71DD7E9059338(iLocal_48, 0);
			unk_0xFD251F92B546F389(iLocal_48, Local_44, 50f, -1, 0, 0);
			unk_0x44FB298D6382876D(iLocal_48, 1);
			unk_0xF09E30AF1B8FB379(&iLocal_48);
			func_54();
			if (!unk_0x4FAFF4BCB7633475(iLocal_47))
			{
				unk_0xAAA71DD7E9059338(iLocal_47, 0);
				unk_0xFD251F92B546F389(iLocal_47, Local_44, 50f, -1, 0, 0);
				unk_0x44FB298D6382876D(iLocal_47, 1);
				unk_0xF09E30AF1B8FB379(&iLocal_47);
				func_54();
			}
		}
	}
	else if (!unk_0x4FAFF4BCB7633475(iLocal_47))
	{
		unk_0xAAA71DD7E9059338(iLocal_47, 0);
		unk_0xFD251F92B546F389(iLocal_47, Local_44, 50f, -1, 0, 0);
		unk_0x44FB298D6382876D(iLocal_47, 1);
		unk_0xF09E30AF1B8FB379(&iLocal_47);
		func_54();
	}
}

bool func_4()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	Var1 = { 15f, 15f, 10f };
	Var2 = { -15f, -15f, -10f };
	if (!unk_0x4FAFF4BCB7633475(iLocal_47))
	{
		if (unk_0x398315D0C90DE6F6(unk_0x83FDC027F0BEA202(iLocal_47, 31086, 0f, 0f, 0f), 15f, 1))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + unk_0x83FDC027F0BEA202(iLocal_47, 31086, 0f, 0f, 0f) };
		Var2 = { Var2 + unk_0x83FDC027F0BEA202(iLocal_47, 31086, 0f, 0f, 0f) };
		if ((unk_0x7A082DC02E5E00C1(Var2, Var1, joaat("weapon_smokegrenade"), 1) || unk_0x7A082DC02E5E00C1(Var2, Var1, joaat("weapon_grenade"), 1)) || unk_0x7A082DC02E5E00C1(Var2, Var1, joaat("weapon_stickybomb"), 1))
		{
			bLocal_88 = true;
			bVar0 = true;
		}
		if (unk_0x9D27D35452DED6B5(-1, -90,68654f, 6411,883f, 36,00729f, -103,86f, 6398,848f, 30,19453f, 23f) || unk_0x8764A5B95AE1F967(-1, unk_0x83FDC027F0BEA202(iLocal_47, 31086, 0f, 0f, 0f), 20f))
		{
			bLocal_88 = true;
			bVar0 = true;
		}
		if (unk_0x5713DE6DB59E98EB(unk_0x83FDC027F0BEA202(iLocal_47, 31086, 0f, 0f, 0f), 6f))
		{
			bVar0 = true;
			bLocal_88 = true;
		}
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_48))
	{
		if (unk_0x9B3D4335E0EDB0BE(iLocal_48, unk_0x4A8C381C258A124D(), 1))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_26();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1F9EB85925C3ECD7())
		{
			return 0;
		}
		if (func_25(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_24();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			unk_0x8744D2E3FC95740E(&Global_8800, 20);
			unk_0x8744D2E3FC95740E(&Global_8801, 17);
			unk_0x8744D2E3FC95740E(&Global_8802, 0);
			if (bParam2)
			{
				func_16();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x08DAD6B08438A17C(unk_0x4A8C381C258A124D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_79389)
				{
					if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
					{
						return 0;
					}
					if (unk_0x74CD4FE549433E92(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_14())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_12();
		func_7();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_26();
	}
	return 0;
}

void func_7()
{
	if (!func_8())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

int func_8()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_11())
	{
		return 0;
	}
	if (func_9(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	return 1;
}

bool func_9(int iParam0)
{
	return func_10(iParam0, 20);
}

var func_10(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_11()
{
	return -1;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0F15249D24BC5ADA(0);
	Global_22286 = 1;
}

void func_13()
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	unk_0x8744D2E3FC95740E(&Global_8801, 16);
}

int func_14()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
	{
		iVar0 = 0;
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar1, 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x196704C916969409() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1))
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

void func_16()
{
	if (func_23(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_17();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

int func_17()
{
	func_18();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_18()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_21(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_20(unk_0x4A8C381C258A124D());
			if (func_19(iVar0) && (!func_23(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_19(Global_113969.f_2366.f_539.f_4321))
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

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return func_22(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_22(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_23(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_24()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
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

void func_26()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if ((unk_0xE87F28FD4128D063() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_28()
{
	unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
	func_52();
	func_32(-1, 0);
	func_29();
	func_163();
}

void func_29()
{
	func_30();
}

int func_30()
{
	if (func_31(0))
	{
		return 0;
	}
	if (Global_101572.f_8)
	{
		if (Global_101572.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101572.f_10 > 1)
	{
		return 0;
	}
	Global_101572.f_10++;
	return 1;
}

int func_31(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_32(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_49(iParam0))
	{
		func_48(iParam0, iParam1);
		if (!func_47(51))
		{
			func_43("RE_REWARD", 1, 0, 4000, 10000, func_46(), 0, 138, 0);
			func_42(51);
		}
		if (func_41(iParam0))
		{
			Global_113969.f_24998.f_2 = 3;
		}
		if (func_40(iParam0, iParam1) != 322)
		{
			func_34(func_40(iParam0, iParam1), Local_42.f_0, Local_42.f_1);
		}
		Global_113957 = iParam1;
		if (Global_113955 == 0)
		{
			if (((Global_113958 == 1 || Global_113958 == 5) || Global_113958 == 11) || Global_113958 == 25)
			{
				func_33(2);
			}
			else if ((Global_113958 == 26 || Global_113958 == 8) || Global_113958 == 17)
			{
				func_33(7);
			}
			else
			{
				func_33(1);
			}
		}
	}
}

void func_33(int iParam0)
{
	Global_113955 = iParam0;
}

void func_34(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_38((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113969.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113969.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113969.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113969.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113969.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x8DD7F37773EBD5B9(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_35();
	}
}

void func_35()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113705 = 0;
	Global_113706 = 0;
	Global_113707 = 0;
	Global_113708 = 0;
	Global_113709 = 0;
	Global_113710 = 0;
	Global_113711 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113969.f_10197.f_3853;
	Global_113969.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113969.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113969.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113705++;
					fVar1 = (fVar1 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113706++;
					fVar2 = (fVar2 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113707++;
					fVar3 = (fVar3 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113708++;
					fVar4 = (fVar4 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113709++;
					fVar5 = (fVar5 + (Global_113969.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113710++;
					fVar6 = (fVar6 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113711++;
					fVar7 = (fVar7 + Global_113969.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113688 > 0)
	{
		if (Global_113705 == Global_113688)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113689 > 0)
	{
		if (Global_113706 == Global_113689)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113690 > 0)
	{
		if (Global_113707 == Global_113690)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113691 > 0)
	{
		if (Global_113708 == Global_113691)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113692 > 0)
	{
		if (((Global_113709 == Global_113692 || (Global_113692 * 10 / Global_113709) < 41) || Global_113709 > Global_113695) || Global_113709 == Global_113695)
		{
			if (!BitTest(Global_113969.f_10197.f_3856, 14))
			{
				if (Global_113709 == Global_113692)
				{
					unk_0x8DD7F37773EBD5B9(joaat("num_rndevents_completed"), Global_113692, 0);
					unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113693 > 0)
	{
		if (Global_113710 == Global_113693)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113694 > 0)
	{
		if (Global_113711 == Global_113694)
		{
			fVar7 = 5f;
		}
	}
	Global_113969.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113709 > Global_113695 || Global_113709 == Global_113695)
	{
		iVar9 = Global_113695;
	}
	else
	{
		iVar9 = Global_113709;
	}
	unk_0x1164A75E490C27B6(joaat("num_missions_completed"), Global_113705, 1);
	unk_0x1164A75E490C27B6(joaat("num_missions_available"), Global_113688, 1);
	unk_0x1164A75E490C27B6(joaat("num_minigames_completed"), Global_113706, 1);
	unk_0x1164A75E490C27B6(joaat("num_minigames_available"), Global_113689, 1);
	unk_0x1164A75E490C27B6(joaat("num_oddjobs_completed"), Global_113707, 1);
	unk_0x1164A75E490C27B6(joaat("num_oddjobs_available"), Global_113690, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndpeople_completed"), Global_113708, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndpeople_available"), Global_113691, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x1164A75E490C27B6(joaat("num_rndevents_available"), Global_113695, 1);
	unk_0x1164A75E490C27B6(joaat("num_misc_completed"), (Global_113711 + Global_113710), 1);
	unk_0x1164A75E490C27B6(joaat("num_misc_available"), (Global_113694 + Global_113693), 1);
	Global_113712 = (Global_113705 * 100 / Global_113688);
	Global_113714 = ((Global_113707 + Global_113706) * 100 / (Global_113690 + Global_113689));
	Global_113713 = ((Global_113708 + iVar9) * 100 / (Global_113691 + Global_113695));
	Global_113715 = ((Global_113710 + Global_113711) * 100 / (Global_113693 + Global_113694));
	unk_0x4F8678C02360C3D2(joaat("total_progress_made"), Global_113969.f_10197.f_3853, 1);
	unk_0x1164A75E490C27B6(joaat("percent_story_missions"), Global_113712, 1);
	unk_0x1164A75E490C27B6(joaat("percent_ambient_missions"), Global_113713, 1);
	unk_0x1164A75E490C27B6(joaat("percent_oddjobs"), Global_113714, 1);
	if (fVar8 > 0f && system::floor(fVar8) < system::floor(Global_113969.f_10197.f_3853))
	{
		func_37(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_36() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_30();
				}
			}
		}
	}
}

int func_36()
{
	return Global_32948;
}

int func_37(int iParam0, int iParam1)
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

void func_38(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_39();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_39()
{
	return Global_1574926;
}

int func_40(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_20413.f_150[iVar1]), iVar0);
	}
}

void func_43(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_44(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_44(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_45();
	}
}

void func_45()
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

int func_46()
{
	func_18();
	switch (Global_113969.f_2366.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113969.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_48(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_24998.f_8[iParam0]), iParam1);
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_50()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x1AF90EB93E0012D6(), 64);
	uVar1 = func_51(Var0);
	return uVar1;
}

int func_51(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x70E57E9927B6BA58(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_52()
{
	return 1;
}

int func_53()
{
	if (!iLocal_71)
	{
		system::wait(0);
		if (!unk_0x4FAFF4BCB7633475(iLocal_47))
		{
			if (iLocal_62 == -1)
			{
				unk_0x9FF00EA9A61211D2(iLocal_47, 0);
				unk_0x28CC6EA9A96AA5D4(5, 0,5f);
				unk_0x986164755D8E9A93(5, 1f);
				unk_0x338FB3F98A204FD0(iLocal_47, 1);
				unk_0xE915224DCA36212A(iLocal_47, 1);
				unk_0x10425721983AE158(iLocal_47, sLocal_97, "girl_villian_shot", 8f, -2f, -1, 10, 0, 0, 0, 0);
				iLocal_62 = unk_0x2EC137C692A52458(Local_64, Local_65, 2);
				if (!unk_0x4FAFF4BCB7633475(iLocal_48))
				{
					unk_0x3CEA1FD137ACE2D9(iLocal_48, uLocal_53);
					if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -91,30704f, 6391,854f, 30,6403f, -102,5595f, 6403,103f, 32,45444f, 8,5f, 0, 1, 0))
					{
						unk_0x3DA436E63AB0F541(iLocal_48, iLocal_62, sLocal_97, "bystander_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
					}
					else
					{
						unk_0xAAA71DD7E9059338(iLocal_48, 0);
					}
				}
				unk_0x3DA436E63AB0F541(iLocal_47, iLocal_62, sLocal_97, "girl_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
			}
			else if (unk_0x5266F1D2AEF6F73A(iLocal_62))
			{
				if (unk_0xBD3B265153D3BA2D(iLocal_62) > 0,1f)
				{
					func_3();
				}
				if (!iLocal_68)
				{
					if (bLocal_77)
					{
						if (unk_0xBD3B265153D3BA2D(iLocal_62) > 0,5f)
						{
							if (func_5(&Local_91, "RERHOAU", "RERHO_SAINT", 4, iLocal_96, 0, 0))
							{
								iLocal_68 = 1;
							}
						}
					}
					else if (func_5(&Local_91, "RERHOAU", "RERHO_THANK", 4, iLocal_96, 0, 0))
					{
						iLocal_68 = 1;
					}
				}
				if (unk_0xBD3B265153D3BA2D(iLocal_62) == 1f)
				{
					iLocal_62 = unk_0x2EC137C692A52458(Local_64, Local_65, 2);
					func_1(iLocal_47, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24, 0);
					unk_0xBF3497E24DEAD835(iLocal_62, 1);
					if (!unk_0x4FAFF4BCB7633475(iLocal_48))
					{
						if (bLocal_77)
						{
							unk_0x3DA436E63AB0F541(iLocal_48, iLocal_62, sLocal_97, "bystander_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
						}
						else
						{
							unk_0xB5396F1FB088FE38(&uLocal_69);
							unk_0xE67051907958B5EB(0, iLocal_47, -1, 1024, 2);
							unk_0xAB3658A740EED98E(0, iLocal_47, 20000, 3f, 1f, 1073741824, 0);
							unk_0x0FD8B5F4BB15CD71(0, -1);
							unk_0x93C0674FC00824D0(uLocal_69);
							unk_0x4BD42B0527065BB6(iLocal_48, uLocal_69);
						}
						unk_0x44FB298D6382876D(iLocal_48, 1);
						unk_0x3CEA1FD137ACE2D9(iLocal_48, uLocal_55);
					}
					unk_0x3DA436E63AB0F541(iLocal_47, iLocal_62, sLocal_97, "girl_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
					unk_0x44FB298D6382876D(iLocal_47, 1);
					unk_0x3CEA1FD137ACE2D9(iLocal_47, uLocal_55);
					unk_0x9FF00EA9A61211D2(iLocal_47, 1);
					unk_0x425BBE19F25A57AB(1f);
					iLocal_71 = 1;
				}
			}
		}
	}
	return iLocal_71;
}

void func_54()
{
	Global_21152 = 0;
	func_55();
}

void func_55()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
	}
}

void func_56(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_57()
{
	if (((((((((((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -91,30704f, 6391,854f, 30,6403f, -102,5595f, 6403,103f, 32,45444f, 8,5f, 0, 1, 0) && unk_0x7E54CB377175F94E(iLocal_46, unk_0x4A8C381C258A124D())) || (func_67(iLocal_46, &uLocal_56, &iLocal_57, 0, 0, 1077936128, 0) && unk_0x7E54CB377175F94E(iLocal_46, unk_0x4A8C381C258A124D()))) || (func_66(1) && unk_0x7E54CB377175F94E(iLocal_46, unk_0x4A8C381C258A124D()))) || func_64()) || func_63()) || func_4()) || func_62()) || unk_0x8BF5256C439DF778(iLocal_46)) || func_61()) || func_60()) || func_58(iLocal_46))
	{
		if (!unk_0x729CB628AF931FC1(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x690AB6F5DB2A3A54(iLocal_46, joaat("weapon_stungun"), 0))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_47))
				{
					if (!unk_0x8BF5256C439DF778(iLocal_46))
					{
						iLocal_61 = unk_0x2EC137C692A52458(Local_64, Local_65, 2);
						unk_0xBF3497E24DEAD835(iLocal_61, 0);
						unk_0x3DA436E63AB0F541(iLocal_47, iLocal_61, sLocal_97, "girl_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
						unk_0x3DA436E63AB0F541(iLocal_46, iLocal_61, sLocal_97, "villian_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
						unk_0x44FB298D6382876D(iLocal_47, 1);
						unk_0x9FF00EA9A61211D2(iLocal_47, 0);
					}
				}
				if (!unk_0x4FAFF4BCB7633475(iLocal_48))
				{
					unk_0x9FF00EA9A61211D2(iLocal_48, 1);
				}
				bLocal_66 = true;
			}
			else
			{
				unk_0xD25E9BDC14A0B649(iLocal_46, 50, 0, 0);
			}
		}
	}
	else if (system::timera() > 6000)
	{
		if ((unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iLocal_46) && unk_0x7E54CB377175F94E(iLocal_46, unk_0x4A8C381C258A124D())) || (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iLocal_46) && unk_0x7E54CB377175F94E(iLocal_46, unk_0x4A8C381C258A124D())))
		{
			if (unk_0xC450B06E5AAA0985(uLocal_51))
			{
				unk_0x89FE619BFBB2024B(uLocal_51, 1);
			}
			if (!iLocal_70)
			{
				if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -91,30704f, 6391,854f, 30,6403f, -102,5595f, 6403,103f, 32,45444f, 8,5f, 0, 1, 0))
				{
					if (func_5(&Local_91, "RERHOAU", sLocal_81, 4, 0, 0, 0))
					{
						iLocal_57 = 24000;
					}
					system::settimera(0);
					iLocal_70 = 1;
				}
			}
		}
		else if (unk_0x1B79E937E91F40C3(sLocal_82, "NULL"))
		{
			switch (unk_0xC5935DFB3F39785A(0, 10))
			{
				case 6:
				case 5:
				case 4:
				case 3:
				case 0:
				case 9:
				case 8:
				case 7:
				case 1:
					if (iLocal_87)
					{
						sLocal_82 = "RERHO_HELP";
						iLocal_87 = 0;
					}
					else
					{
						sLocal_82 = "RERHO_RANT";
						iLocal_87 = 1;
					}
					break;
				
				case 2:
					sLocal_82 = "RERHO_SCREAM";
					break;
			}
		}
		else if (func_5(&Local_91, "RERHOAU", sLocal_82, 4, iLocal_96, 0, 0))
		{
			system::settimera(0);
		}
	}
	else
	{
		sLocal_82 = "NULL";
	}
}

int func_58(int iParam0)
{
	var uVar0;
	bool bVar1;
	
	bVar1 = false;
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (unk_0x4FAFF4BCB7633475(iParam0))
	{
		return 0;
	}
	unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &uVar0, 1);
	if (unk_0x5EDED4B3E1A48E68(unk_0x4A8C381C258A124D(), uVar0, joaat("component_at_ar_flsh")))
	{
		if (unk_0x85718B993F8FC553(unk_0x4A8C381C258A124D(), uVar0, joaat("component_at_ar_flsh")))
		{
			bVar1 = true;
		}
	}
	else if (unk_0x5EDED4B3E1A48E68(unk_0x4A8C381C258A124D(), uVar0, joaat("component_at_pi_flsh")))
	{
		if (unk_0x85718B993F8FC553(unk_0x4A8C381C258A124D(), uVar0, joaat("component_at_pi_flsh")))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iParam0) || unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0))
		{
			if (system::vdist(unk_0xD1A6A821F5AC81DB(iParam0, 1), func_59(unk_0x259BE71D8A81D4FA())) < 8f)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_59(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

int func_60()
{
	if (func_101())
	{
		if (unk_0x1DD05E817C89C737() > (iLocal_89 + 60000))
		{
			bLocal_90 = true;
			return 1;
		}
	}
	else if (unk_0x1DD05E817C89C737() > (iLocal_89 + 120000))
	{
		bLocal_90 = true;
		return 1;
	}
	return 0;
}

int func_61()
{
	float fVar0;
	var uVar1[32];
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	fVar0 = 75f;
	iVar4 = unk_0xFA4D35AD36BDA1FE(unk_0xD1A6A821F5AC81DB(iLocal_46, 0), fVar0, fVar0, fVar0, -1);
	if (!unk_0x4FAFF4BCB7633475(iVar4))
	{
		if (unk_0x4B423FAA24E8ABF0(iVar4) == joaat("s_f_y_cop_01") || unk_0x4B423FAA24E8ABF0(iVar4) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	uVar5 = unk_0x66D94742BB3D032F(unk_0xD1A6A821F5AC81DB(iLocal_46, 0), fVar0, 0, 66561);
	if (unk_0xD9F5E1FEFD1329E4(uVar5, 0))
	{
		return 1;
	}
	iVar3 = unk_0xD65B4E942A960E26(iLocal_46, &uVar1);
	if (iVar3 > 0)
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (unk_0xD9F5E1FEFD1329E4(uVar1[iVar2], 0))
			{
				if (((unk_0x4B423FAA24E8ABF0(uVar1[iVar2]) == joaat("police") || unk_0x4B423FAA24E8ABF0(uVar1[iVar2]) == joaat("pranger")) || unk_0x4B423FAA24E8ABF0(uVar1[iVar2]) == joaat("sheriff")) || unk_0x4B423FAA24E8ABF0(uVar1[iVar2]) == joaat("sheriff2"))
				{
					return 1;
				}
			}
			iVar2++;
		}
	}
	return 0;
}

int func_62()
{
	if (unk_0xFAA48325A90263BE(iLocal_46, unk_0x4A8C381C258A124D(), 2f, 2f, 1,5f, 0, 1, 0))
	{
		if (unk_0xC1204DBD7B8A643E(unk_0x259BE71D8A81D4FA(), iLocal_46))
		{
			return 1;
		}
	}
	return 0;
}

bool func_63()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) == joaat("bulldozer"))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_48))
			{
				if (unk_0x685171EED42BC4DF(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), iLocal_48))
				{
					bVar0 = true;
				}
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_47))
			{
				if (unk_0x685171EED42BC4DF(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), iLocal_47))
				{
					bVar0 = true;
				}
			}
			if (!unk_0x4FAFF4BCB7633475(iLocal_46))
			{
				if (unk_0x685171EED42BC4DF(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), iLocal_46))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_64()
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	var uVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	var uVar7;
	var uVar8;
	
	bVar0 = false;
	bVar1 = false;
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)), &uVar3, &Var4);
		fVar6 = Var4.f_1;
		if (unk_0xA6D8AF5A058A75F0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
		{
			if (unk_0x20974C28142EB370(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), &uVar8))
			{
				unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(uVar8), &uVar3, &Var4);
				fVar6 = (fVar6 + Var4.f_1);
				fVar6 = (fVar6 + 3f);
			}
		}
		if (unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 15f)
		{
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_46, (fVar6 + 17f), (fVar6 + 17f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
		else if (unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 10f)
		{
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_46, (fVar6 + 12f), (fVar6 + 12f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
		else if (unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 5f)
		{
			if (unk_0xFAA48325A90263BE(unk_0x4A8C381C258A124D(), iLocal_46, (fVar6 + 8f), (fVar6 + 8f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
	}
	if (bVar1)
	{
		Var2 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) - Local_44 };
		fVar5 = unk_0x97BC40FFA2FFCCD2(Var2.f_0, Var2.f_1);
		if (func_65(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), fVar5, 15f))
		{
			bVar0 = true;
		}
		Var2 = { Local_44 - unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		fVar5 = unk_0x97BC40FFA2FFCCD2(Var2.f_0, Var2.f_1);
		if (func_65(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), fVar5, 15f))
		{
			bVar0 = true;
		}
	}
	uVar7 = unk_0xDC8D5832207C2EAD();
	if (unk_0xFC8BFE4B41177C22(uVar7))
	{
		if (unk_0x5105BE70DEF1F5FB(iVar7, -91,56341f, 6391,747f, 30,6397f, -101,2611f, 6401,7f, 32,45449f, 7,5f, 0, 1, 0))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_65(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		fVar0 = unk_0xCFC0C995455A6204(uParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_66(int iParam0)
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

int func_67(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	bVar2 = false;
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0) && !bParam4)
	{
		if (unk_0x5B3431FA66D59A4C(uParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0) && !bParam4)
		{
			Var3 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			Var4 = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
			fVar5 = system::vdist(Var3, Var4);
			if (!BitTest(iParam3, 3))
			{
				if (func_73(iParam0, iParam6))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_72("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_71(iParam0);
					return 1;
				}
			}
			if (!BitTest(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x398315D0C90DE6F6(Var4, fParam5, 1))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_72("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_71(iParam0);
					return 1;
				}
				if (unk_0xE94C7FA27FEB00DD(Var4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_72("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_71(iParam0);
					return 1;
				}
			}
			if (!BitTest(iParam3, 2))
			{
				fVar0 = unk_0xD6F4FF37FC8730A1(unk_0x4A8C381C258A124D());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0x11552FA9DCB8E126(unk_0x4A8C381C258A124D(), 6))
				{
					if (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iParam0) || unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (unk_0xAD915B5E38F323E5(iParam0, unk_0x4A8C381C258A124D(), 17))
							{
								func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_72("	aggro Ped knows player is pointing gun\n");
								func_68("		lockOnTimer = ", *iParam2);
								func_72("\n");
								func_68("		time since not LockedOn = ", (unk_0x1DD05E817C89C737() - iLocal_2));
								func_72("\n");
								bVar2 = true;
								if (unk_0x1DD05E817C89C737() > (iLocal_2 + *iParam2))
								{
									func_72("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_71(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!BitTest(iParam3, 0))
			{
				if (unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0))
				{
					func_72("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_72("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_71(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_2 = unk_0x1DD05E817C89C737();
	}
	return 0;
}

void func_68(char* sParam0, int iParam1)
{
	func_70(sParam0);
	func_69(iParam1);
}

void func_69(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_70(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3(uParam0, uParam0))
	{
	}
}

void func_71(var uParam0)
{
	unk_0xDCD95AE65EFC28CE(uParam0);
}

void func_72(char* sParam0)
{
	func_70(sParam0);
}

int func_73(int iParam0, int iParam1)
{
	if (unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x9B3D4335E0EDB0BE(uParam0, unk_0x4A8C381C258A124D(), 1))
		{
			return 1;
		}
	}
	else if (unk_0x9B3D4335E0EDB0BE(iParam0, unk_0x4A8C381C258A124D(), 1))
	{
		if ((unk_0x3C8EDE4003ABACA0(iParam0) - unk_0x8D91ADE44AC79BC9(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_74()
{
	if (((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -62,6571f, 6447,08f, 40,49928f, -153,6411f, 6354,579f, 23,99063f, 144,25f, 0, 1, 0) || unk_0x7B780C491DEC834E(Local_44, 15f)) || bLocal_66) || func_4())
	{
		uLocal_51 = func_85(iLocal_46, 1, 0);
		if (unk_0xC450B06E5AAA0985(uLocal_51))
		{
			unk_0x89FE619BFBB2024B(uLocal_51, 0);
		}
		func_75(1);
		iLocal_89 = unk_0x1DD05E817C89C737();
		unk_0xD682DD0578BF5392(0);
	}
	else
	{
		func_57();
	}
}

int func_75(int iParam0)
{
	if (func_79())
	{
		Global_113959 = 1;
		Global_113956 = unk_0x1DD05E817C89C737();
		if (func_41(Global_113958))
		{
			func_76(0);
		}
		unk_0xB51A8DA1DD0D2E4E(1, "RE_TITLE");
		if (iParam0 && func_41(Global_113958))
		{
			unk_0x2716F9D3A99349AB();
		}
		return 1;
	}
	return 0;
}

void func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113969.f_24998.f_2 < 3)
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_77(func_78(iParam0), -1);
					Global_113969.f_24998.f_2++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113965, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113965, 1))
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_77(func_78(iParam0), -1);
					Global_113969.f_24998.f_3++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113965, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113965, 2))
			{
				if (!unk_0x3273F980CC5E02CD())
				{
					func_77(func_78(iParam0), -1);
					Global_113969.f_24998.f_4++;
					unk_0x0B0C9A0F9AAEB7F0(&Global_113965, 2);
				}
			}
			break;
	}
}

void func_77(var uParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

char* func_78(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_79()
{
	switch (func_80(&Global_33008, 0, 5, 0, unk_0x8F76B2250AC806FA()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_80(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98991.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_84(0))
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		unk_0x2B52F77101390E6F(unk_0xB6B621402486C3E4(), 0);
		Global_23692.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xB1495D79F52B9EEE(8);
		}
		Global_44042 = iParam2;
		Global_44004 = *uParam0;
		Global_44005 = iParam4;
		Global_44003 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_44003 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_44003)
			{
				if (Global_44009[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_44004 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_82(iParam2))
		{
			return 0;
		}
		if (Global_44003 == 8)
		{
			return 0;
		}
		Global_44006++;
		*uParam0 = Global_44006;
		Global_44009[Global_44003 /*4*/] = Global_44006;
		Global_44009[Global_44003 /*4*/].f_1 = iParam1;
		Global_44009[Global_44003 /*4*/].f_2 = iParam2;
		Global_44009[Global_44003 /*4*/].f_3 = 0;
		Global_44003++;
		if (iParam4 != 0)
		{
			func_81(uParam0, iParam4);
		}
	}
	return 2;
}

void func_81(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_44003 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_44003)
	{
		if (Global_44009[iVar0 /*4*/] == *uParam0)
		{
			Global_44009[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_82(int iParam0)
{
	return func_83(iParam0, Global_44042);
}

int func_83(int iParam0, int iParam1)
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

int func_84(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_82(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_85(var uParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_86(uParam0, bParam1, 145);
}

var func_86(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_87(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xC450B06E5AAA0985(uVar0)) && unk_0x6BA487C862DB8DDF(&(Global_2169[iParam2 /*29*/].f_3)))
	{
		unk_0x594D5D0D7071B0DE(uVar0, &(Global_2169[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_87(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_88(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_88(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_88(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

float func_88(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_89()
{
	if (!func_82(5))
	{
		return 1;
	}
	if (func_97())
	{
		return 1;
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_96())
		{
			return 0;
		}
	}
	if (func_90(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_90(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (func_19(func_17()))
		{
			iVar5 = func_46();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113969.f_18577[iVar1 /*6*/], 2) && !BitTest(Global_113969.f_18577[iVar1 /*6*/], 3))
				{
					func_91(iVar1, &Var0);
					fVar4 = unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var0.f_6, 1);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_91(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_92(uParam1, "Abigail1", func_94(iParam0), 0, 0, 4, -1604,668f, 5239,1f, 3,01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 1:
			func_92(uParam1, "Abigail2", func_94(iParam0), 0, 0, 4, -1592,84f, 5214,04f, 3,01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 2:
			func_92(uParam1, "Barry1", func_94(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 3:
			func_92(uParam1, "Barry2", func_94(iParam0), 0, 1, 4, 190,26f, -956,35f, 29,63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 4:
			func_92(uParam1, "Barry3", func_94(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 5:
			func_92(uParam1, "Barry3A", func_94(iParam0), 1, 1, 0, 1199,27f, -1255,63f, 34,23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 6:
			func_92(uParam1, "Barry3C", func_94(iParam0), 3, 1, 0, -468,9f, -1713,06f, 18,21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 7:
			func_92(uParam1, "Barry4", func_94(iParam0), 0, 1, 4, 237,65f, -385,41f, 44,4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_93(iParam0), 0, 0);
			break;
		
		case 8:
			func_92(uParam1, "Dreyfuss1", func_94(iParam0), 0, 2, 4, -1458,97f, 485,99f, 115,38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 9:
			func_92(uParam1, "Epsilon1", func_94(iParam0), 0, 3, 4, -1622,89f, 4204,87f, 83,3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 10:
			func_92(uParam1, "Epsilon2", func_94(iParam0), 0, 3, 4, 242,7f, 362,7f, 104,74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 11:
			func_92(uParam1, "Epsilon3", func_94(iParam0), 0, 3, 4, 1835,53f, 4705,86f, 38,1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 12:
			func_92(uParam1, "Epsilon4", func_94(iParam0), 0, 3, 4, 1826,13f, 4698,88f, 38,92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 13:
			func_92(uParam1, "Epsilon5", func_94(iParam0), 0, 3, 4, 637,02f, 119,7093f, 89,5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 14:
			func_92(uParam1, "Epsilon6", func_94(iParam0), 0, 3, 4, -2892,93f, 3192,37f, 11,66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 15:
			func_92(uParam1, "Epsilon7", func_94(iParam0), 0, 3, 4, 524,43f, 3079,82f, 39,48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 16:
			func_92(uParam1, "Epsilon8", func_94(iParam0), 0, 3, 4, -697,75f, 45,38f, 43,03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 17:
			func_92(uParam1, "Extreme1", func_94(iParam0), 0, 4, 4, -188,22f, 1296,1f, 302,86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 18:
			func_92(uParam1, "Extreme2", func_94(iParam0), 0, 4, 4, -954,19f, -2760,05f, 14,64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 19:
			func_92(uParam1, "Extreme3", func_94(iParam0), 0, 4, 4, -63,8f, -809,5f, 321,8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 20:
			func_92(uParam1, "Extreme4", func_94(iParam0), 0, 4, 4, 1731,41f, 96,96f, 170,39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 21:
			func_92(uParam1, "Fanatic1", func_94(iParam0), 0, 5, 4, -1877,82f, -440,649f, 45,05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_93(iParam0), 1, 0);
			break;
		
		case 22:
			func_92(uParam1, "Fanatic2", func_94(iParam0), 0, 5, 4, 809,66f, 1279,76f, 360,49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_93(iParam0), 1, 0);
			break;
		
		case 23:
			func_92(uParam1, "Fanatic3", func_94(iParam0), 0, 5, 4, -915,6f, 6139,2f, 5,5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_93(iParam0), 0, 1);
			break;
		
		case 24:
			func_92(uParam1, "Hao1", func_94(iParam0), 0, 6, 4, -72,29f, -1260,63f, 28,14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_93(iParam0), 0, 1);
			break;
		
		case 25:
			func_92(uParam1, "Hunting1", func_94(iParam0), 0, 7, 4, 1804,32f, 3931,33f, 32,82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 26:
			func_92(uParam1, "Hunting2", func_94(iParam0), 0, 7, 4, -684,17f, 5839,16f, 16,09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 27:
			func_92(uParam1, "Josh1", func_94(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 28:
			func_92(uParam1, "Josh2", func_94(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 29:
			func_92(uParam1, "Josh3", func_94(iParam0), 0, 8, 4, 565,39f, -1772,88f, 29,77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 30:
			func_92(uParam1, "Josh4", func_94(iParam0), 0, 8, 4, -1104,93f, 291,25f, 64,3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 31:
			func_92(uParam1, "Maude1", func_94(iParam0), 0, 9, 4, 2726,1f, 4145f, 44,3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 32:
			func_92(uParam1, "Minute1", func_94(iParam0), 0, 10, 4, 327,85f, 3405,7f, 35,73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 33:
			func_92(uParam1, "Minute2", func_94(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 34:
			func_92(uParam1, "Minute3", func_94(iParam0), 0, 10, 4, -303,82f, 6211,29f, 31,05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 35:
			func_92(uParam1, "MrsPhilips1", func_94(iParam0), 0, 11, 4, 1972,59f, 3816,43f, 32,42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 36:
			func_92(uParam1, "MrsPhilips2", func_94(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 37:
			func_92(uParam1, "Nigel1", func_94(iParam0), 0, 12, 4, -1097,16f, 790,01f, 164,52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 38:
			func_92(uParam1, "Nigel1A", func_94(iParam0), 0, 12, 1, -558,65f, 284,49f, 90,86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 39:
			func_92(uParam1, "Nigel1B", func_94(iParam0), 0, 12, 1, -1034,15f, 366,08f, 80,11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
			break;
		
		case 40:
			func_92(uParam1, "Nigel1C", func_94(iParam0), 0, 12, 1, -623,91f, -266,17f, 37,76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
			break;
		
		case 41:
			func_92(uParam1, "Nigel1D", func_94(iParam0), 0, 12, 1, -1096,85f, 67,68f, 52,95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_93(iParam0), 1, 1);
			break;
		
		case 42:
			func_92(uParam1, "Nigel2", func_94(iParam0), 0, 12, 4, -1310,7f, -640,22f, 26,54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 43:
			func_92(uParam1, "Nigel3", func_94(iParam0), 0, 12, 4, -44,75f, -1288,67f, 28,21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 1);
			break;
		
		case 44:
			func_92(uParam1, "Omega1", func_94(iParam0), 0, 13, 4, 2468,51f, 3437,39f, 49,9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 45:
			func_92(uParam1, "Omega2", func_94(iParam0), 0, 13, 4, 2319,44f, 2583,58f, 46,76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 46:
			func_92(uParam1, "Paparazzo1", func_94(iParam0), 0, 14, 4, -149,75f, 285,81f, 93,67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 47:
			func_92(uParam1, "Paparazzo2", func_94(iParam0), 0, 14, 4, -70,71f, 301,43f, 106,79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 48:
			func_92(uParam1, "Paparazzo3", func_94(iParam0), 0, 14, 4, -257,22f, 292,85f, 90,63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 49:
			func_92(uParam1, "Paparazzo3A", func_94(iParam0), 0, 14, 2, 305,52f, 157,19f, 102,94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 50:
			func_92(uParam1, "Paparazzo3B", func_94(iParam0), 0, 14, 2, 1040,96f, -534,42f, 60,17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 51:
			func_92(uParam1, "Paparazzo4", func_94(iParam0), 0, 14, 4, -484,2f, 229,68f, 82,21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 52:
			func_92(uParam1, "Rampage1", func_94(iParam0), 0, 15, 4, 908f, 3643,7f, 32,2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 54:
			func_92(uParam1, "Rampage3", func_94(iParam0), 0, 15, 4, 465,1f, -1849,3f, 27,8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 55:
			func_92(uParam1, "Rampage4", func_94(iParam0), 0, 15, 4, -161f, -1669,7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 56:
			func_92(uParam1, "Rampage5", func_94(iParam0), 0, 15, 4, -1298,2f, 2504,14f, 21,09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_93(iParam0), 0, 0);
			break;
		
		case 53:
			func_92(uParam1, "Rampage2", func_94(iParam0), 0, 15, 4, 1181,5f, -400,1f, 67,5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_93(iParam0), 1, 0);
			break;
		
		case 57:
			func_92(uParam1, "TheLastOne", func_94(iParam0), 0, 16, 4, -1298,98f, 4640,16f, 105,67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 58:
			func_92(uParam1, "Tonya1", func_94(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 59:
			func_92(uParam1, "Tonya2", func_94(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 60:
			func_92(uParam1, "Tonya3", func_94(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 61:
			func_92(uParam1, "Tonya4", func_94(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		case 62:
			func_92(uParam1, "Tonya5", func_94(iParam0), 0, 17, 4, -14,39f, -1472,69f, 29,58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_93(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_92(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_93(int iParam0)
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

struct<2> func_94(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_95(iParam0) };
	if (unk_0xD6F9DEE4765092A9(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_95(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_96()
{
	if (unk_0x761778199FE1211C())
	{
		if (unk_0xAB154BFC15F33733() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_97()
{
	if (func_100() && !func_96())
	{
		return 1;
	}
	if (func_99() && func_98())
	{
		return 1;
	}
	return 0;
}

bool func_98()
{
	return Global_113687 > 0;
}

int func_99()
{
	if (Global_98435 != -1)
	{
		return 1;
	}
	return 0;
}

int func_100()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 20);
	}
	return 0;
}

int func_101()
{
	if ((Global_113958 == func_50() && unk_0x9FA91AA1AC724CD0()) && Global_113959)
	{
		return 1;
	}
	return 0;
}

void func_102()
{
	if (unk_0xC450B06E5AAA0985(uLocal_51))
	{
		unk_0x89FE619BFBB2024B(uLocal_51, 1);
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_46))
	{
		unk_0x0FB8E752BCC547A9(iLocal_46, 156, 1);
		if (unk_0x5266F1D2AEF6F73A(iLocal_61))
		{
			if (unk_0xBD3B265153D3BA2D(iLocal_61) > 0,1f)
			{
				if (!iLocal_72)
				{
					if (!unk_0x4FAFF4BCB7633475(iLocal_47))
					{
						unk_0xC7AF90C5FC07B06B(iLocal_46, unk_0x83FDC027F0BEA202(iLocal_47, 31086, 0f, 0f, -0,1f), 0);
					}
					iLocal_72 = 1;
					iLocal_70 = 1;
					func_103();
				}
			}
		}
		else if (!unk_0x4FAFF4BCB7633475(iLocal_47))
		{
			unk_0x9FF00EA9A61211D2(iLocal_47, 1);
			unk_0xD25E9BDC14A0B649(iLocal_47, 0, 0, 0);
		}
		if (unk_0x5266F1D2AEF6F73A(iLocal_61))
		{
			if (unk_0xBD3B265153D3BA2D(iLocal_61) > 0,6f)
			{
				func_103();
			}
		}
		else if (!unk_0x4FAFF4BCB7633475(iLocal_47))
		{
			unk_0x9FF00EA9A61211D2(iLocal_47, 1);
			unk_0xD25E9BDC14A0B649(iLocal_47, 0, 0, 0);
		}
		if (unk_0x5266F1D2AEF6F73A(iLocal_61))
		{
			if (unk_0xBD3B265153D3BA2D(iLocal_61) == 1f)
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_47))
				{
					unk_0x9FF00EA9A61211D2(iLocal_47, 1);
					unk_0xD25E9BDC14A0B649(iLocal_47, 0, 0, 0);
				}
			}
		}
		else
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_47))
			{
				unk_0x9FF00EA9A61211D2(iLocal_47, 1);
				unk_0xD25E9BDC14A0B649(iLocal_47, 0, 0, 0);
			}
			func_103();
		}
	}
}

void func_103()
{
	if (!iLocal_73)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_46))
		{
			unk_0x974022927CB47E68(iLocal_46);
			unk_0xD414C47AFF81382A(5, uLocal_54, uLocal_53);
			unk_0xD414C47AFF81382A(5, uLocal_53, uLocal_54);
			unk_0xD414C47AFF81382A(0, uLocal_55, uLocal_53);
			unk_0xD414C47AFF81382A(2, uLocal_55, uLocal_54);
			unk_0xD414C47AFF81382A(2, uLocal_54, uLocal_55);
			if (unk_0xFAA48325A90263BE(iLocal_46, unk_0x4A8C381C258A124D(), 50f, 50f, 50f, 0, 1, 0))
			{
				unk_0x62A5310368A20EFA(iLocal_46, unk_0x4A8C381C258A124D(), 0, 16);
				unk_0x570AAA413775DFFB(iLocal_46, 1);
			}
			else
			{
				unk_0xD844F5E50DAB6FF7(iLocal_46, unk_0x4A8C381C258A124D(), 200f, -1, 0, 0);
			}
			unk_0x44FB298D6382876D(iLocal_46, 1);
			func_5(&Local_91, "RERHOAU", "RERHO_DIE", 4, 0, 0, 0);
			iLocal_73 = 1;
		}
	}
}

void func_104()
{
	if (bLocal_88)
	{
		unk_0xAAA71DD7E9059338(iLocal_48, 0);
		unk_0xFD251F92B546F389(iLocal_48, Local_44, 50f, -1, 0, 0);
		unk_0x44FB298D6382876D(iLocal_48, 1);
		unk_0xF09E30AF1B8FB379(&iLocal_48);
		func_54();
	}
}

void func_105()
{
	if (Local_91[2 /*10*/].f_7)
	{
		func_56(&Local_91, 2);
	}
	func_108();
	unk_0x3875519517101875(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), &Local_44, 1, 1077936128, 0);
	unk_0x28CC6EA9A96AA5D4(1, 0,5f);
	unk_0x986164755D8E9A93(1, 1f);
	if (Local_91[1 /*10*/].f_7)
	{
		if (unk_0xC450B06E5AAA0985(uLocal_51))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_51);
		}
		func_56(&Local_91, 1);
	}
	if (iLocal_70)
	{
		if (!unk_0x1AC621DBDFE4ECA0(iLocal_48, joaat("weapon_pistol"), 0) && unk_0x4FAFF4BCB7633475(iLocal_46))
		{
			if (!bLocal_90)
			{
				iLocal_43 = 2;
			}
			else if (func_107(&Local_91, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_96, 0))
			{
				iLocal_43 = 2;
			}
		}
		else
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_48))
			{
				if (!unk_0x4FAFF4BCB7633475(iLocal_46))
				{
					unk_0xD844F5E50DAB6FF7(iLocal_48, iLocal_46, 100f, -1, 0, 0);
				}
				else
				{
					unk_0xD844F5E50DAB6FF7(iLocal_48, unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
				}
				unk_0x44FB298D6382876D(iLocal_48, 1);
				if (!bLocal_90)
				{
					if (func_107(&Local_91, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_96, 0))
					{
					}
					else
					{
						func_106(iLocal_48, "GENERIC_SHOCKED_HIGH", 24);
					}
				}
				else
				{
					func_106(iLocal_48, "GENERIC_SHOCKED_HIGH", 24);
				}
				system::wait(0);
			}
			unk_0x425BBE19F25A57AB(1f);
			unk_0xD682DD0578BF5392(1);
			iLocal_43 = 2;
		}
	}
	else
	{
		func_163();
	}
}

void func_106(int iParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(iParam0, sParam1, func_2(iParam2), 1);
}

bool func_107(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22293 = 0;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 1;
	StringCopy(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_108()
{
	if (func_4())
	{
		bLocal_88 = true;
	}
	if (bLocal_88 == 0)
	{
		if (!unk_0x4FAFF4BCB7633475(iLocal_48) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (iLocal_70)
			{
				unk_0xB5396F1FB088FE38(&uLocal_69);
				unk_0xAB3658A740EED98E(0, unk_0x4A8C381C258A124D(), 20000, 5f, 1073741824, 1073741824, 0);
				unk_0xE67051907958B5EB(0, unk_0x4A8C381C258A124D(), -1, 2048, 2);
				unk_0x10425721983AE158(0, sLocal_97, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
				unk_0xD844F5E50DAB6FF7(0, unk_0x4A8C381C258A124D(), 150f, -1, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_69);
				unk_0x4BD42B0527065BB6(iLocal_48, uLocal_69);
				unk_0xD0557B139A542F12(&uLocal_69);
				unk_0x44FB298D6382876D(iLocal_48, 1);
			}
			else
			{
				unk_0xB5396F1FB088FE38(&uLocal_69);
				unk_0x63C8DCBEC1CF8225(0, Local_44, 1f, 20000, 1193033728, 1056964608);
				unk_0xE237FA90A8AFEE59(0, Local_44, -1, 2048, 2);
				unk_0x10425721983AE158(0, sLocal_97, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
				unk_0x93C0674FC00824D0(uLocal_69);
				unk_0x4BD42B0527065BB6(iLocal_48, uLocal_69);
				unk_0xD0557B139A542F12(&uLocal_69);
				unk_0x44FB298D6382876D(iLocal_48, 1);
			}
		}
	}
}

void func_109()
{
	if (unk_0x9B3D4335E0EDB0BE(iLocal_47, unk_0x4A8C381C258A124D(), 1))
	{
		if (!unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 2))
		{
			unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 2, 0);
			unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
		}
		unk_0x9FF00EA9A61211D2(iLocal_47, 1);
		unk_0xD25E9BDC14A0B649(iLocal_47, 0, 0, 0);
		bLocal_66 = true;
		iLocal_70 = 1;
		func_103();
	}
	else if (!unk_0x912159A05BE6B52E(iLocal_47))
	{
		unk_0xEBA2204AAD092B47(iLocal_47, 4, 0, 0);
	}
}

void func_110()
{
	if (unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_44, 50f, 50f, 25f, 0, 1, 0))
	{
		iLocal_96 = 0;
	}
	else
	{
		iLocal_96 = 1;
	}
}

int func_111()
{
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_96())
		{
			return 0;
		}
	}
	if (func_97())
	{
		return 1;
	}
	if (func_90(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	Local_44 = { -96,4f, 6398,201f, 30,4542f };
	fLocal_45 = 0f;
	iVar0 = joaat("a_m_m_hillbilly_02");
	iVar1 = joaat("a_m_m_business_01");
	iVar2 = joaat("a_f_m_tourist_01");
	sVar3 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
	unk_0xEC9DAA34BBB4658C(iVar0);
	unk_0xEC9DAA34BBB4658C(iVar2);
	unk_0xEC9DAA34BBB4658C(iVar1);
	unk_0x80813AC549A1E8AE(sLocal_97);
	if (((unk_0x6252BC0DD8A320DB(iVar0) && unk_0x6252BC0DD8A320DB(iVar2)) && unk_0x6252BC0DD8A320DB(iVar1)) && unk_0xE100DD4F82A51BDE(sLocal_97))
	{
		unk_0x2094BC4B6731BA68(Local_44, 5f, 1, 1, 0, 0);
		iLocal_47 = unk_0xB1DBFEB95C0EFB88(5, iVar2, Local_44, fLocal_45, 1, 1);
		unk_0xE915224DCA36212A(iLocal_47, 1);
		unk_0x397CF4F4C8B17365(iLocal_47, sVar3);
		unk_0x0428AFDCAA63B06E(iLocal_47, 20, 1);
		iLocal_46 = unk_0xB1DBFEB95C0EFB88(22, iVar0, Local_44, fLocal_45, 1, 1);
		unk_0xD25E9BDC14A0B649(iLocal_46, 125, 0, 0);
		unk_0x36A20106D0B42723(iLocal_46, 125);
		unk_0x1CA08719184AFC6F(iLocal_46, 128, 1);
		unk_0xE915224DCA36212A(iLocal_46, 1);
		unk_0x0428AFDCAA63B06E(iLocal_46, 42, 1);
		unk_0x35365D1E3ADB7109(iLocal_46, 1,5f);
		unk_0xFD61BB3B8F1CDB6D(iLocal_46, 1);
		unk_0x25DBF9F9C6BDFFEA(iLocal_46, 40f);
		unk_0x0428AFDCAA63B06E(iLocal_46, 20, 1);
		unk_0x3C7306C2CE967C57(iLocal_46, fLocal_83);
		unk_0xC8DEC2468E748263(iLocal_46, fLocal_84);
		unk_0xAF30637CFE0F3A89(iLocal_46, fLocal_85);
		unk_0xA6102F762BBA9BC9(iLocal_46, fLocal_86);
		iLocal_48 = unk_0xB1DBFEB95C0EFB88(4, iVar1, -98,113f, 6405,354f, 30,6005f, fLocal_45, 1, 1);
		unk_0xCA32E959324DBA6C(Vector(31,64024f, 6405,058f, -98,41389f) - Vector(5f, 5f, 5f), Vector(31,64024f, 6405,058f, -98,41389f) + Vector(5f, 5f, 5f), 0, 0, 1, 0);
		uLocal_59 = unk_0xA7B0B03284E7503C(Vector(31,64024f, 6405,058f, -98,41389f) - Vector(40f, 40f, 40f), Vector(31,64024f, 6405,058f, -98,41389f) + Vector(40f, 40f, 40f), 0, 1, 1, 1, 1);
		unk_0x3F58BFCF656F0DF1(iLocal_48, 0);
		unk_0xFD61BB3B8F1CDB6D(iLocal_48, 1);
		Local_44.f_2 = (Local_44.f_2 + 1f);
		Local_64 = { Local_44 };
		Local_65 = { 0f, 0f, fLocal_45 };
		iLocal_61 = unk_0x2EC137C692A52458(Local_64, Local_65, 2);
		unk_0xBF3497E24DEAD835(iLocal_61, 1);
		unk_0x3DA436E63AB0F541(iLocal_46, iLocal_61, sLocal_97, "villian_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
		unk_0x3DA436E63AB0F541(iLocal_47, iLocal_61, sLocal_97, "girl_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
		uLocal_63 = unk_0x2EC137C692A52458(Local_64, Local_65, 2);
		unk_0xBF3497E24DEAD835(uLocal_63, 1);
		unk_0x3DA436E63AB0F541(iLocal_48, iLocal_63, sLocal_97, "bystander_taking_cover", 1000f, -1,5f, 5, 0, 1148846080, 0);
		unk_0x0428AFDCAA63B06E(iLocal_48, 185, 1);
		unk_0xB41DEC3AAC1AA107(iLocal_46, joaat("weapon_pistol"), -1, 1, 1);
		unk_0x4BD214FCF7332FF6(iLocal_46, 1);
		unk_0x06CD913C241C765E("re_rescuehostage relManager", &uLocal_55);
		unk_0x06CD913C241C765E("re_rescuehostage relBadGuy", &uLocal_54);
		uLocal_53 = unk_0x2A661A0285B74A27(unk_0x4A8C381C258A124D());
		unk_0xD414C47AFF81382A(5, uLocal_54, uLocal_53);
		unk_0xD414C47AFF81382A(5, uLocal_53, uLocal_54);
		unk_0x3CEA1FD137ACE2D9(iLocal_48, uLocal_55);
		unk_0x3CEA1FD137ACE2D9(iLocal_46, uLocal_54);
		unk_0xAAA71DD7E9059338(iLocal_47, 1);
		unk_0xAAA71DD7E9059338(iLocal_48, 1);
		unk_0xAAA71DD7E9059338(iLocal_46, 1);
		unk_0xBE8796DB2B90A437(iLocal_48, 11, 1);
		unk_0xBE8796DB2B90A437(iLocal_48, 17, 1);
		unk_0xBE8796DB2B90A437(iLocal_48, 13, 0);
		unk_0xBE8796DB2B90A437(iLocal_48, 5, 0);
		unk_0x176A19E4589CC2C6(iLocal_48, 0);
		unk_0xBE8796DB2B90A437(iLocal_47, 11, 1);
		unk_0x176A19E4589CC2C6(iLocal_47, 0);
		unk_0xBE8796DB2B90A437(iLocal_47, 13, 0);
		unk_0xBE8796DB2B90A437(iLocal_47, 5, 0);
		func_114(&Local_91, 0, unk_0x4A8C381C258A124D(), sLocal_80, 0, 1);
		func_114(&Local_91, 1, iLocal_46, "RHCriminal", 0, 1);
		func_114(&Local_91, 2, iLocal_47, "RHHostage", 0, 1);
		func_114(&Local_91, 3, iLocal_48, "RHBystander", 0, 1);
		unk_0xD682DD0578BF5392(0);
		unk_0x425BBE19F25A57AB(0f);
		func_113(1);
		unk_0xBAAB54D57B40765E(-89f, 6392f, 32f, 3f, 2);
		system::settimera(8000);
		return 1;
	}
	return 0;
}

void func_113(bool bParam0)
{
	if (bParam0)
	{
		Global_33183 = 1;
	}
	else
	{
		Global_33183 = 0;
	}
}

void func_114(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_115()
{
}

void func_116()
{
}

void func_117()
{
	switch (func_17())
	{
		case 0:
			sLocal_80 = "MICHAEL";
			sLocal_81 = "RERHO_MDOWN";
			break;
		
		case 1:
			sLocal_80 = "FRANKLIN";
			sLocal_81 = "RERHO_FDOWN";
			break;
		
		case 2:
			sLocal_80 = "TREVOR";
			sLocal_81 = "RERHO_TDOWN";
			break;
	}
}

void func_118(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_120(iParam0);
	unk_0x21EA3DC8C16770EF(0);
	unk_0x7EA65A7D5C6CBDB5(1);
	Global_113955 = 0;
	func_119();
}

void func_119()
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			unk_0xCCA6D8A84EE8C88A(unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)), 1);
		}
		unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 32, 0);
	}
}

void func_120(int iParam0)
{
	Global_113958 = iParam0;
}

int func_121(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_152557)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_50();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_162())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			if (system::vmag2(unk_0xE5741C6B6539231F(unk_0x4A8C381C258A124D())) > 1369f && !func_96())
			{
				return 0;
			}
		}
		if (!Global_113969.f_9088)
		{
			return 0;
		}
		if (func_31(0))
		{
			return 0;
		}
		if (func_97())
		{
			return 0;
		}
		if (func_161())
		{
			return 0;
		}
		if (Global_113958 != -1)
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_90(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) && !bParam4)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_160(iParam1))
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_159(func_17()) == 4 || func_159(func_17()) == 5)
			{
				return 0;
			}
		}
		if (func_19(func_17()))
		{
			if (!func_158(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!func_157(Global_113969.f_24998.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0x1DD05E817C89C737() - Global_113960) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_156())
		{
			return 0;
		}
		if (unk_0x3D2EB53CF281A77E())
		{
			return 0;
		}
		if (unk_0x9FA91AA1AC724CD0())
		{
			return 0;
		}
		if (!func_147(4))
		{
			return 0;
		}
		if (!func_82(5))
		{
			return 0;
		}
		if (func_146(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_4 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0xF8A8852F99E201DD(unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D())))
		{
			if ((unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(377,153f, -717,567f, 10,0536f) || unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(320,9934f, 265,2515f, 82,1221f)) || unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D()) == unk_0x0E171121A3A25363(-1425,564f, -244,3f, 15,8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !func_146(0, 0))
		{
			return 0;
		}
		if (Global_33095)
		{
			return 0;
		}
		if (func_160(30) && !func_146(30, 0))
		{
			if (iParam1 != 30)
			{
				if (system::vdist2(Var1, -61,2745f, -1100,468f, 25,3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_19(func_17()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113969.f_2366.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113969.f_2366.f_539.f_2296[iVar2];
				if (func_145(iVar4))
				{
					if (func_123(iVar2))
					{
						if (!func_122(Var3, 0f, 0f, 0f, 0))
						{
							if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Var3) < (210f * 210f))
							{
								if (func_17() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_122(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113969.f_2366.f_539.f_2296[iParam0];
	return func_124(iVar0);
}

int func_124(int iParam0)
{
	return func_125(iParam0, 1);
}

int func_125(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_145(iParam0))
	{
		return 0;
	}
	func_126(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_127(func_138(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_127(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_137(iParam0, iParam1))
	{
		iVar0 = func_136(iParam1);
		iVar1 = func_134(iParam0);
		iVar2 = (func_134(iParam0) - func_134(iParam1));
		iVar3 = (func_136(iParam0) - func_136(iParam1));
		iVar4 = (func_133(iParam0) - func_133(iParam1));
		iVar5 = (func_132(iParam0) - func_132(iParam1));
		iVar6 = (func_131(iParam0) - func_131(iParam1));
		iVar7 = (func_130(iParam0) - func_130(iParam1));
	}
	else
	{
		iVar0 = func_136(iParam0);
		iVar1 = func_134(iParam1);
		iVar2 = (func_134(iParam1) - func_134(iParam0));
		iVar3 = (func_136(iParam1) - func_136(iParam0));
		iVar4 = (func_133(iParam1) - func_133(iParam0));
		iVar5 = (func_132(iParam1) - func_132(iParam0));
		iVar6 = (func_131(iParam1) - func_131(iParam0));
		iVar7 = (func_130(iParam1) - func_130(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_129(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = system::round(func_128(system::to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_128(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(system::round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_129(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_130(int iParam0)
{
	return system::shift_right(iParam0, 20) & 63;
}

int func_131(int iParam0)
{
	return system::shift_right(iParam0, 14) & 63;
}

int func_132(int iParam0)
{
	return system::shift_right(iParam0, 9) & 31;
}

int func_133(int iParam0)
{
	return system::shift_right(iParam0, 4) & 31;
}

int func_134(int iParam0)
{
	return (system::shift_right(iParam0, 26) & 31 * func_135(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_135(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_136(int iParam0)
{
	return iParam0 & 15;
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_145(iParam1) || !func_145(iParam0))
	{
		return 1;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	iVar1 = func_132(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	iVar1 = func_131(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	iVar1 = func_130(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_138()
{
	var uVar0;
	
	func_144(&uVar0, unk_0x4BA5A16068183C5E());
	func_143(&uVar0, unk_0x18E502A71E28968C());
	func_142(&uVar0, unk_0x5295501D0862870D());
	func_141(&uVar0, unk_0xB12880C92EA6EE15());
	func_140(&uVar0, unk_0x8825A6E0A30BDCB8());
	func_139(&uVar0, unk_0x7598FE4545010A75());
	return uVar0;
}

void func_139(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || system::shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || system::shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_140(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_141(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_136(*uParam0);
	iVar1 = func_134(*uParam0);
	if (iParam1 < 1 || iParam1 > func_129(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 4));
}

void func_142(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 9));
}

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 14));
}

void func_144(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || system::shift_left(iParam1, 20));
}

int func_145(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_131(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_132(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_134(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_136(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_133(iParam0);
	if (iVar5 < 1 || iVar5 > func_129(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_146(int iParam0, bool bParam1)
{
	if (BitTest(Global_113969.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iVar0 = func_17();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_155()) || Global_113016) || Global_32951) || func_154()) || func_25(8, -1)) || func_153()) || func_152()) || func_151()) || func_150()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1) || func_155()) || Global_32951) || func_154()) || func_25(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_155()) || Global_113016) || Global_32951) || func_154()) || func_25(8, -1)) || func_151()) || func_153()) || func_152()) || func_150()) || Global_113969.f_7691.f_919[iVar0] == 5) || Global_44589 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || func_155()) || Global_113016) || Global_32951) || func_154()) || func_25(8, -1)) || func_153()) || func_152()) || func_150()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_155() || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || func_25(8, -1)) || func_150()) || func_149()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_25(8, -1) || func_153()) || func_152()) || func_149()) || func_148())
						{
							return 0;
						}
						if ((unk_0x3555462DB47B7AB1() && unk_0x1403FEB4554982F8() != 3) && unk_0x6D231A0D52134FC1() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
						{
							if ((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_155()) || Global_32951) || func_154()) || func_25(8, -1)) || func_152()) || func_151()) || func_150()) || Global_113969.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || func_155()) || func_152()) || Global_113016) || Global_32951) || func_154()) || Global_45250) || func_25(8, -1)) || func_151()) || func_149()) || func_150()) || Global_113969.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || !unk_0x9390801B06EE998F()) || unk_0x3EE1A6D743332852(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1)) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D())) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1)) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || func_155()) || Global_113016) || Global_32951) || func_154()) || func_25(8, -1)) || func_151()) || func_149()) || func_153()) || func_152()) || func_150())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_148()
{
	return Global_101572.f_1;
}

int func_149()
{
	if (Global_98435 != -1)
	{
		return BitTest(Global_92301[Global_98435 /*34*/].f_15, 13);
	}
	return 0;
}

int func_150()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_151()
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

bool func_152()
{
	return Global_101585.f_394 > 0;
}

bool func_153()
{
	return Global_101585.f_393 > 0;
}

var func_154()
{
	return Global_1575083;
}

int func_155()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

int func_156()
{
	func_16();
	if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_157(int iParam0)
{
	return func_137(func_138(), iParam0);
}

int func_158(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_17();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_159(int iParam0)
{
	if (!func_19(iParam0))
	{
		return 7;
	}
	return Global_113969.f_7691.f_919[iParam0];
}

int func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_162())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113969.f_24998, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113969.f_24998.f_1, iVar0);
	}
	return iVar1;
}

int func_161()
{
	var uVar0;
	
	if (Global_33100)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
			{
				if (!unk_0x4FAFF4BCB7633475(unk_0xFD5C5BBD1FE92BB7(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_162()
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

void func_163()
{
	if (func_101())
	{
		unk_0x425BBE19F25A57AB(1f);
		unk_0xD682DD0578BF5392(1);
	}
	if (iLocal_43 != 0)
	{
		unk_0x2B1BDC32466B40A9(uLocal_54);
		unk_0x2B1BDC32466B40A9(uLocal_55);
		unk_0x0D7BAEA1C3D6BDB6(20000);
		unk_0xD7B6A43ACC36D868(uLocal_59, 0);
		unk_0x6E8A7BB566D1F7AF(iLocal_58);
		func_113(0);
	}
	if (!unk_0x4FAFF4BCB7633475(iLocal_46) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0xD844F5E50DAB6FF7(iLocal_46, unk_0x4A8C381C258A124D(), 100f, -1, 0, 0);
		unk_0x44FB298D6382876D(iLocal_46, 1);
		system::wait(0);
	}
	func_164(-1);
	unk_0xBBC29EBE6E1A48FA();
}

void func_164(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_50();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_101())
	{
		func_168(iParam0);
		unk_0xB51A8DA1DD0D2E4E(0, 0);
		Global_113960 = unk_0x1DD05E817C89C737();
		func_167(30000);
		StringCopy(&cVar0, func_166(Global_113958, 1), 64);
		if (func_49(Global_113958) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113957, 64);
		}
		unk_0x3AF124228E3EAF07(&cVar0, Global_113955, (unk_0x1DD05E817C89C737() - Global_113956), 0);
	}
	else if (BitTest(Global_113965, 0) && Global_113969.f_24998.f_2 < 3)
	{
		unk_0x8744D2E3FC95740E(&Global_113965, 0);
	}
	func_165(&Global_33008);
	Global_113959 = 0;
	func_120(-1);
}

void func_165(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_44004)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_44003 = 0;
	Global_44005 = 0;
	Global_44042 = 15;
	Global_64163 = 0;
	Global_64164 = 0;
}

char* func_166(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_167(int iParam0)
{
	Global_44593 = (unk_0x1DD05E817C89C737() + iParam0);
}

void func_168(int iParam0)
{
	func_169(iParam0, 0, func_174(iParam0));
}

void func_169(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_138();
	func_172(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_171(iParam0, &uVar0);
	Var1 = { func_170(&uVar0) };
}

struct<16> func_170(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_132(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_131(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_130(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_133(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_136(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_134(*uParam0), 64);
	return Var0;
}

void func_171(int iParam0, var uParam1)
{
	Global_113969.f_24998.f_43[iParam0] = *uParam1;
}

void func_172(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_134(*uParam0);
	iVar1 = func_136(*uParam0);
	iVar2 = func_133(*uParam0);
	iVar3 = func_132(*uParam0);
	iVar4 = func_131(*uParam0);
	iVar5 = func_130(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_129(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_129(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_173(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_173(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_144(uParam0, iParam1);
	func_143(uParam0, iParam2);
	func_142(uParam0, iParam3);
	func_140(uParam0, iParam5);
	func_141(uParam0, iParam4);
	func_139(uParam0, iParam6);
}

int func_174(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

