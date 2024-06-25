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
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	bool bLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = 0;
	bool bLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	struct<3> Local_37[70];
	float fLocal_38 = 0f;
	struct<3> Local_39 = { 0, 0, 0 } ;
	struct<3> Local_40 = { 0, 0, 0 } ;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	float fLocal_43 = 0f;
	struct<3> Local_44 = { 0, 0, 0 } ;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	struct<2> Local_47 = { 0, 5 } ;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 5;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	fLocal_38 = 40000f;
	Local_44 = { ScriptParam_47.f_1[0 /*3*/] };
	if (unk_0x96CFB880BAC634CE(34))
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	if ((func_54(13) || func_54(14)) || func_53(0))
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	func_31();
	func_30();
	func_27();
	func_26();
	while (true)
	{
		system::wait(0);
		func_25();
		func_18();
		if (unk_0x173751E886F8E9AB())
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				func_17();
				switch (iLocal_25)
				{
					case 0:
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Local_37[bLocal_29 /*3*/]) < fLocal_38)
							{
								if (unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()) || unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
								{
									if ((((((((((((((bLocal_29 == 33 || bLocal_29 == 34) || bLocal_29 == 35) || bLocal_29 == 36) || bLocal_29 == 50) || bLocal_29 == 51) || bLocal_29 == 52) || bLocal_29 == 53) || bLocal_29 == 54) || bLocal_29 == 55) || bLocal_29 == 56) || bLocal_29 == 57) || bLocal_29 == 58) || bLocal_29 == 59) || bLocal_29 == 60)
									{
										bLocal_36 = true;
									}
									else
									{
										bLocal_36 = false;
									}
									if (unk_0xD9F5E1FEFD1329E4(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0))
									{
										if (func_16())
										{
											if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_39, Local_40, fLocal_43, 0, 1, 0))
											{
												bLocal_31 = true;
												iLocal_25 = 1;
											}
											if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_41, Local_42, fLocal_43, 0, 1, 0))
											{
												bLocal_32 = true;
												iLocal_25 = 1;
											}
										}
									}
								}
							}
						}
						system::settimera(0);
						break;
					
					case 1:
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							if (!unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()) && !unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
							{
								func_15();
							}
							else if (!unk_0xD9F5E1FEFD1329E4(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0))
							{
								func_15();
							}
							else if (!unk_0x3F18810075C77D41(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
							{
								func_15();
							}
							if (bLocal_31)
							{
								if (iLocal_35)
								{
									if (iLocal_34)
									{
										if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_39, Local_40, fLocal_43, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_41, Local_42, fLocal_43, 0, 1, 0))
										{
											func_15();
											func_1();
											unk_0xA62957B100C8DE6D(3f, 1073741824, 3);
										}
									}
									else if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_39, Local_40, fLocal_43, 0, 1, 0) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_41, Local_42, fLocal_43, 0, 1, 0))
									{
										iLocal_34 = 1;
									}
									else if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_39, Local_40, fLocal_43, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_41, Local_42, fLocal_43, 0, 1, 0))
									{
										func_15();
									}
								}
								else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_39, Local_40, fLocal_43, 0, 1, 0) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_41, Local_42, fLocal_43, 0, 1, 0))
								{
									iLocal_35 = 1;
								}
								else if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_39, Local_40, fLocal_43, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_41, Local_42, fLocal_43, 0, 1, 0))
								{
									func_15();
								}
							}
							else if (bLocal_32)
							{
								if (iLocal_35)
								{
									if (iLocal_33)
									{
										if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_39, Local_40, fLocal_43, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_41, Local_42, fLocal_43, 0, 1, 0))
										{
											func_15();
											func_1();
											unk_0xA62957B100C8DE6D(3f, 1073741824, 3);
										}
									}
									else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_39, Local_40, fLocal_43, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_41, Local_42, fLocal_43, 0, 1, 0))
									{
										iLocal_33 = 1;
									}
									else if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_39, Local_40, fLocal_43, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_41, Local_42, fLocal_43, 0, 1, 0))
									{
										func_15();
									}
								}
								else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_39, Local_40, fLocal_43, 0, 1, 0) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_41, Local_42, fLocal_43, 0, 1, 0))
								{
									iLocal_35 = 1;
								}
								else if (!unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_39, Local_40, fLocal_43, 0, 1, 0) && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Local_41, Local_42, fLocal_43, 0, 1, 0))
								{
									func_15();
								}
							}
						}
						break;
					}
			}
		}
		else if (iLocal_26 == 0)
		{
			unk_0xBBC29EBE6E1A48FA();
		}
	}
}

void func_1()
{
	bool bVar0;
	
	if (bLocal_29 < 32)
	{
		bVar0 = BitTest(Global_113969.f_10052.f_96, bLocal_29);
	}
	else if (bLocal_29 < 64)
	{
		bVar0 = BitTest(Global_113969.f_10052.f_97, (bLocal_29 - 32));
	}
	else
	{
		bVar0 = BitTest(Global_113969.f_10052.f_98, (bLocal_29 - 64));
	}
	if (bVar0)
	{
	}
	else
	{
		if (!bLocal_45)
		{
			if (bLocal_36)
			{
				unk_0x3CAC0DB32E69B1B8(joaat("sp_knife_flights_count"), 1f);
			}
			else
			{
				unk_0x3CAC0DB32E69B1B8(joaat("sp_under_the_bridge_count"), 1f);
			}
			func_3(func_9(), 5, 3);
			func_2();
		}
		if (bLocal_29 < 32)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_96), bLocal_29);
		}
		else if (bLocal_29 < 64)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_97), (bLocal_29 - 32));
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_10052.f_98), (bLocal_29 - 64));
		}
		Global_97958 = 1;
		func_31();
		iLocal_27 = 1;
	}
}

int func_2()
{
	if (func_53(0))
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

void func_3(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_8(iVar1, -1);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_4(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_4(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_5(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_5(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_6(uParam1));
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

int func_8(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_5(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_10()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_13(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_12(unk_0x4A8C381C258A124D());
			if (func_11(iVar0) && (!func_54(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_11(Global_113969.f_2366.f_539.f_4321))
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

bool func_11(int iParam0)
{
	return iParam0 < 3;
}

int func_12(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_13(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_13(int iParam0)
{
	if (func_11(iParam0))
	{
		return func_14(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_14(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_15()
{
	bLocal_31 = false;
	bLocal_32 = false;
	iLocal_33 = 0;
	iLocal_34 = 0;
	iLocal_35 = 0;
	iLocal_25 = 0;
}

int func_16()
{
	if (bLocal_36)
	{
		if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x032CEF99C0D59B73(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) > -0,6f && unk_0x032CEF99C0D59B73(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)) < 0,6f)
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

void func_17()
{
	if ((unk_0x1DD05E817C89C737() - iLocal_46) > 500)
	{
		if (bLocal_29 == 29)
		{
			if (BitTest(Global_113969.f_10052.f_96, bLocal_29))
			{
				bLocal_45 = true;
			}
		}
		iLocal_46 = unk_0x1DD05E817C89C737();
	}
}

void func_18()
{
	switch (iLocal_26)
	{
		case 0:
			if (iLocal_27 && !bLocal_45)
			{
				if (!func_24())
				{
					uLocal_28 = unk_0x8DE4F68A9728925E("MIDSIZED_MESSAGE");
					while (!unk_0xA0C7B98BCF1EEF9E(uLocal_28))
					{
						system::wait(0);
					}
					unk_0x88F483FBD433696A(uLocal_28, "SHOW_BRIDGES_KNIVES_PROGRESS");
					if (bLocal_36)
					{
						func_23("FU_KNIFE");
						unk_0x330108B080A2132F(15);
					}
					else
					{
						func_23("FU_TITLE");
						unk_0x330108B080A2132F(50);
					}
					func_23("FU_PASS");
					if (bLocal_36)
					{
						func_23("FU_CHALL_KN");
					}
					else
					{
						func_23("FU_CHALLENGE");
					}
					unk_0x330108B080A2132F(func_31());
					unk_0xE6B753D52F4CA222();
					iLocal_30 = func_31();
					Global_33184 = iLocal_30;
					system::settimerb(0);
					unk_0xBF3D28CA44F3BE2D(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
				}
				iLocal_26 = 1;
			}
			break;
		
		case 1:
			if ((((((system::timerb() > 3750 || unk_0x15CCE8886267624F()) || !unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA())) || func_24()) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || func_22()) || func_21())
			{
				unk_0x88F483FBD433696A(uLocal_28, "SHARD_ANIM_OUT");
				unk_0x330108B080A2132F(1);
				unk_0x74BF156C860580D4(0,33f);
				unk_0xE6B753D52F4CA222();
				system::settimerb(0);
				iLocal_26 = 2;
			}
			else
			{
				func_20();
				if (Global_33184 > iLocal_30)
				{
					iLocal_26 = 3;
				}
			}
			break;
		
		case 2:
			if ((((((system::timerb() > 500 || unk_0x15CCE8886267624F()) || !unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA())) || func_24()) || !unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) || func_22()) || func_21())
			{
				iLocal_26 = 3;
			}
			else
			{
				func_20();
				if (Global_33184 > iLocal_30)
				{
					iLocal_26 = 3;
				}
			}
			break;
		
		case 3:
			func_19();
			iLocal_27 = 0;
			func_27();
			bLocal_45 = true;
			iLocal_26 = 0;
			break;
	}
}

void func_19()
{
	if (unk_0xA0C7B98BCF1EEF9E(uLocal_28))
	{
		unk_0xD314260005F064BF(&uLocal_28);
	}
}

void func_20()
{
	if (!func_24())
	{
		if (unk_0xA0C7B98BCF1EEF9E(uLocal_28))
		{
			unk_0x6D16B99FEB0AFFF1(uLocal_28, 0,5f, 0,5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}

int func_21()
{
	if (Global_44042 == 9 || Global_44042 == 10)
	{
		return Global_112616;
	}
	Global_112616 = 0;
	return 0;
}

int func_22()
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

void func_23(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

int func_24()
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

void func_25()
{
}

void func_26()
{
}

void func_27()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (func_29(Local_44, Local_37[iVar0 /*3*/], 1056964608, 0))
		{
			if (iVar0 == 65 || iVar0 == 66)
			{
				fLocal_38 = 490000f;
				bLocal_29 = 29;
			}
			else
			{
				bLocal_29 = iVar0;
			}
		}
		iVar0++;
	}
	if (bLocal_29 < 32)
	{
		if (BitTest(Global_113969.f_10052.f_96, bLocal_29))
		{
			bLocal_45 = true;
		}
	}
	else if (bLocal_29 < 64)
	{
		if (BitTest(Global_113969.f_10052.f_97, (bLocal_29 - 32)))
		{
			bLocal_45 = true;
		}
	}
	else if (BitTest(Global_113969.f_10052.f_98, (bLocal_29 - 64)))
	{
		bLocal_45 = true;
	}
	if (bLocal_45)
	{
	}
	else
	{
		func_28(bLocal_29);
	}
}

void func_28(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			Local_39 = { 1103,014f, -233,0374f, 56,13004f };
			Local_40 = { 1073,191f, -214,8478f, 66,0593f };
			fLocal_43 = 30f;
			Local_41 = { 1093,589f, -248,5926f, 56,88639f };
			Local_42 = { 1063,774f, -230,1425f, 66,67847f };
			break;
		
		case 1:
			Local_39 = { 1044,182f, -324,5904f, 49,33408f };
			Local_40 = { 1016,71f, -307,7383f, 64,81343f };
			fLocal_43 = 30f;
			Local_41 = { 1007,983f, -320,6159f, 48,4543f };
			Local_42 = { 1036,007f, -337,4204f, 64,4808f };
			break;
		
		case 2:
			Local_39 = { 916,599f, -419,8782f, 35,62748f };
			Local_40 = { 910,3793f, -383,8826f, 47,54339f };
			fLocal_43 = 7f;
			Local_41 = { 912,1362f, -420,5161f, 35,38034f };
			Local_42 = { 906,8952f, -384,6779f, 47,24926f };
			break;
		
		case 3:
			Local_39 = { 757,7189f, -472,924f, 19,2535f };
			Local_40 = { 696,5936f, -420,2115f, 35,46084f };
			fLocal_43 = 20,75f;
			Local_41 = { 744,9114f, -480,7373f, 19,06514f };
			Local_42 = { 682,5614f, -429,5533f, 37,0266f };
			break;
		
		case 4:
			Local_39 = { 680,3677f, -581,1792f, 14,2145f };
			Local_40 = { 599,8101f, -528,3059f, 33,40958f };
			fLocal_43 = 45f;
			Local_41 = { 667,3692f, -610,5356f, 13,85401f };
			Local_42 = { 582,8433f, -556,7818f, 33,40335f };
			break;
		
		case 5:
			Local_39 = { 644,2497f, -844,7504f, 12,36707f };
			Local_40 = { 526,8608f, -845,2521f, 35,9896f };
			fLocal_43 = 25f;
			Local_41 = { 644,3659f, -859,3878f, 12,59677f };
			Local_42 = { 526,8615f, -857,5208f, 36,32857f };
			break;
		
		case 6:
			Local_39 = { 634,972f, -1011,64f, 10,92594f };
			Local_40 = { 539,6501f, -1024,017f, 35,95852f };
			fLocal_43 = 25f;
			Local_41 = { 634,9612f, -1029,123f, 10,61846f };
			Local_42 = { 543,4893f, -1038,261f, 35,9593f };
			break;
		
		case 7:
			Local_39 = { 645,7223f, -1191,215f, 10,45198f };
			Local_40 = { 524,3018f, -1197,167f, 39,61172f };
			fLocal_43 = 50f;
			Local_41 = { 645,7223f, -1228,966f, 10,98015f };
			Local_42 = { 521,9379f, -1217,607f, 39,47172f };
			break;
		
		case 8:
			Local_39 = { 642,1216f, -1295,73f, 9,005976f };
			Local_40 = { 568,1702f, -1375,351f, 20,12989f };
			fLocal_43 = 7f;
			Local_41 = { 644,7772f, -1298,168f, 9,128529f };
			Local_42 = { 571,6342f, -1378,644f, 20,35802f };
			break;
		
		case 9:
			Local_39 = { 686,5675f, -1444,71f, 9,065001f };
			Local_40 = { 598,9328f, -1444,438f, 25,68846f };
			fLocal_43 = 25f;
			Local_41 = { 682,3027f, -1429,872f, 9,890836f };
			Local_42 = { 593,8217f, -1432,995f, 25,60072f };
			break;
		
		case 10:
			Local_39 = { 718,7617f, -1734,313f, 9,082874f };
			Local_40 = { 615,0017f, -1725,897f, 27,54585f };
			fLocal_43 = 30f;
			Local_41 = { 717,5355f, -1748,646f, 9,363478f };
			Local_42 = { 614,218f, -1734,848f, 27,35708f };
			break;
		
		case 11:
			Local_39 = { 694,3165f, -2049,806f, 0,009695f };
			Local_40 = { 618,6845f, -2040,014f, 25,83412f };
			fLocal_43 = 30f;
			Local_41 = { 693,1836f, -2063,225f, 0,429037f };
			Local_42 = { 607,5944f, -2055,326f, 26,91816f };
			break;
		
		case 12:
			Local_39 = { 642,6671f, -2494,551f, 0,468485f };
			Local_40 = { 570,1807f, -2513,959f, 11,78794f };
			fLocal_43 = 20f;
			Local_41 = { 647,0339f, -2506,202f, 0,583701f };
			Local_42 = { 571,1415f, -2522,975f, 10,45045f };
			break;
		
		case 13:
			Local_39 = { 691,8235f, -2558,219f, 0,363352f };
			Local_40 = { 645,8863f, -2600,311f, 9,898791f };
			fLocal_43 = 10,25f;
			Local_41 = { 695,7928f, -2561,034f, 0,346731f };
			Local_42 = { 656,3919f, -2601,972f, 9,643657f };
			break;
		
		case 14:
			Local_39 = { 723,6254f, -2562,171f, 0,255647f };
			Local_40 = { 720,752f, -2619,77f, 15,73211f };
			fLocal_43 = 20f;
			Local_41 = { 735,765f, -2561,935f, 0,311182f };
			Local_42 = { 736,1214f, -2618,767f, 15,79061f };
			break;
		
		case 15:
			Local_39 = { 891,4387f, -2603,12f, 0f };
			Local_40 = { 704,4932f, -2634,793f, 45f };
			fLocal_43 = 20f;
			Local_41 = { 893,2578f, -2616,235f, 0f };
			Local_42 = { 707,7261f, -2647,696f, 45f };
			break;
		
		case 16:
			Local_39 = { -2669,587f, 2491,96f, 2,043799f };
			Local_40 = { -2617,765f, 2841,595f, 14,0822f };
			fLocal_43 = 26,5f;
			Local_41 = { -2687,606f, 2494,868f, 2,608733f };
			Local_42 = { -2637,085f, 2846,875f, 14,15988f };
			break;
		
		case 17:
			Local_39 = { -1986,173f, 4521,799f, 0f };
			Local_40 = { -1809,903f, 4699,551f, 53,5088f };
			fLocal_43 = 17f;
			Local_41 = { -1995,668f, 4531,259f, 0f };
			Local_42 = { -1817,543f, 4708,395f, 53,50917f };
			break;
		
		case 18:
			Local_39 = { -526,0265f, 4472,442f, 0f };
			Local_40 = { -505,5714f, 4335,725f, 86,73311f };
			fLocal_43 = 10f;
			Local_41 = { -519,9281f, 4476,346f, 0f };
			Local_42 = { -500,7313f, 4336,389f, 86,71289f };
			break;
		
		case 19:
			Local_39 = { 98,1615f, 3384,489f, 45,45169f };
			Local_40 = { 154,974f, 3350,694f, 30,03358f };
			fLocal_43 = 8f;
			Local_41 = { 152,6802f, 3346,793f, 45,02156f };
			Local_42 = { 95,57188f, 3380,091f, 30,43284f };
			break;
		
		case 20:
			Local_39 = { 147,8606f, 3406,796f, 38,03672f };
			Local_40 = { 126,1329f, 3416,927f, 30,02987f };
			fLocal_43 = 14,5f;
			Local_41 = { 130,0916f, 3425,417f, 38,05672f };
			Local_42 = { 151,8703f, 3415,391f, 30,0578f };
			break;
		
		case 21:
			Local_39 = { 2830,972f, 4967,14f, 34,56013f };
			Local_40 = { 2818,719f, 4992,298f, 51,2909f };
			fLocal_43 = 10f;
			Local_41 = { 2826,767f, 4964,185f, 34,10636f };
			Local_42 = { 2814,216f, 4989,983f, 51,21849f };
			break;
		
		case 22:
			Local_39 = { -151,5764f, 4264,417f, 31,04735f };
			Local_40 = { -193,1962f, 4224,604f, 43,87255f };
			fLocal_43 = 10f;
			Local_41 = { -148,3842f, 4261,071f, 31,57409f };
			Local_42 = { -190,4719f, 4222,076f, 43,95443f };
			break;
		
		case 23:
			Local_39 = { -426,6919f, 2964,272f, 14,848f };
			Local_40 = { -396,2298f, 2959,278f, 23,50637f };
			fLocal_43 = 7f;
			Local_41 = { -425,0283f, 2967,861f, 15,22699f };
			Local_42 = { -395,6073f, 2962,607f, 24,38079f };
			break;
		
		case 24:
			Local_39 = { -192,3414f, 2864,916f, 30,72595f };
			Local_40 = { -170,1509f, 2857,128f, 43,94182f };
			fLocal_43 = 10f;
			Local_41 = { -192,0129f, 2871,603f, 29,99943f };
			Local_42 = { -169,5957f, 2863,838f, 44,03251f };
			break;
		
		case 25:
			Local_39 = { 2539,185f, 2228,772f, 18,6102f };
			Local_40 = { 2574,373f, 2169,401f, 27,26598f };
			fLocal_43 = 10f;
			Local_41 = { 2543,708f, 2231,402f, 18,331f };
			Local_42 = { 2578,079f, 2171,584f, 27,26057f };
			break;
		
		case 26:
			Local_39 = { 2954,087f, 815,7209f, 0,037901f };
			Local_40 = { 2933,189f, 796,4688f, 12,98392f };
			fLocal_43 = 35f;
			Local_41 = { 2966,123f, 806,8889f, 0,544056f };
			Local_42 = { 2950,801f, 786,7816f, 11,74596f };
			break;
		
		case 27:
			Local_39 = { 2329,673f, -459,6648f, 70,24277f };
			Local_40 = { 2413,384f, -361,2188f, 91,77886f };
			fLocal_43 = 12f;
			Local_41 = { 2324,752f, -455,5238f, 70,25145f };
			Local_42 = { 2407,409f, -356,2003f, 91,43083f };
			break;
		
		case 28:
			Local_39 = { 1943,428f, -753,251f, 80,17905f };
			Local_40 = { 1850,365f, -760,9587f, 93,02522f };
			fLocal_43 = 7f;
			Local_41 = { 1943,366f, -758,287f, 80,32291f };
			Local_42 = { 1851,354f, -765,1807f, 92,93546f };
			break;
		
		case 29:
			Local_39 = { -655,1467f, -2138,094f, -0,339008f };
			Local_40 = { -146,0279f, -2493,724f, 54,67567f };
			fLocal_43 = 47,75f;
			Local_41 = { -672,2213f, -2162,675f, -0,082912f };
			Local_42 = { -163,5556f, -2519,058f, 54,72249f };
			break;
		
		case 30:
			Local_39 = { -1483f, 2691,428f, -10f };
			Local_40 = { -1377,168f, 2600,769f, 15,95528f };
			fLocal_43 = 12f;
			Local_41 = { -1478,152f, 2696,688f, -10f };
			Local_42 = { -1378,503f, 2608,698f, 15,60924f };
			break;
		
		case 31:
			Local_39 = { 222,1519f, -2343,487f, 0,039199f };
			Local_40 = { 222,6849f, -2297,407f, 7,088753f };
			fLocal_43 = 12f;
			Local_41 = { 216,959f, -2343,487f, 0,207734f };
			Local_42 = { 216,602f, -2295,445f, 7,424279f };
			break;
		
		case 32:
			Local_39 = { 346,4622f, -2244,374f, 0,159779f };
			Local_40 = { 346,8347f, -2389,591f, 7,852059f };
			fLocal_43 = 20f;
			Local_41 = { 359,609f, -2244,468f, 0,129684f };
			Local_42 = { 355,4054f, -2390,258f, 7,080691f };
			break;
		
		case 33:
			Local_39 = { -1859,68f, -322,6357f, 56,16368f };
			Local_40 = { -1836,614f, -335,4141f, 96,1161f };
			fLocal_43 = 7,5f;
			Local_41 = { -1860,27f, -327,8634f, 57,543f };
			Local_42 = { -1837,271f, -339,2227f, 95,69325f };
			break;
		
		case 34:
			Local_39 = { -680,2632f, -600,818f, 69,11289f };
			Local_40 = { -706,6613f, -600,7515f, 30,47604f };
			fLocal_43 = 31,5f;
			Local_41 = { -680,6077f, -618,3658f, 69,27496f };
			Local_42 = { -706,3596f, -618,2385f, 30,31235f };
			break;
		
		case 35:
			Local_39 = { -1468,096f, -591,7158f, 67,05518f };
			Local_40 = { -1454,7f, -573,4518f, 29,56736f };
			fLocal_43 = 11,75f;
			Local_41 = { -1474,903f, -591,1215f, 67,08091f };
			Local_42 = { -1457,173f, -568,1316f, 29,44059f };
			break;
		
		case 36:
			Local_39 = { -1544,958f, -537,1475f, 72,44347f };
			Local_40 = { -1564,616f, -551,1829f, 32,86163f };
			fLocal_43 = 11,75f;
			Local_41 = { -1541,008f, -541,5494f, 71,61972f };
			Local_42 = { -1561,219f, -555,868f, 32,9279f };
			break;
		
		case 37:
			Local_39 = { 333,2108f, -2727,274f, 20,71663f };
			Local_40 = { 333,4297f, -2791,609f, 41,99023f };
			fLocal_43 = 20f;
			Local_41 = { 343,1127f, -2727,236f, 20,23613f };
			Local_42 = { 343,6678f, -2791,602f, 41,37928f };
			break;
		
		case 38:
			Local_39 = { 1928,071f, 6228,355f, 43,49398f };
			Local_40 = { 2039,882f, 6167,397f, 55,46405f };
			fLocal_43 = 13f;
			Local_41 = { 1931,82f, 6235,634f, 43,37382f };
			Local_42 = { 2039,598f, 6176,525f, 55,25597f };
			break;
		
		case 39:
			Local_39 = { -736,4309f, -1590,921f, 10,80892f };
			Local_40 = { -710,811f, -1516,349f, -0,098598f };
			fLocal_43 = 15f;
			Local_41 = { -727,2307f, -1585,221f, 11,78027f };
			Local_42 = { -700,0201f, -1511,783f, -0,341655f };
			break;
		
		case 40:
			Local_39 = { -686,3775f, -1548,553f, 12,33747f };
			Local_40 = { -669,329f, -1507,063f, -0,788618f };
			fLocal_43 = 25f;
			Local_41 = { -654,203f, -1536,146f, 9,191055f };
			Local_42 = { -645,9954f, -1500,219f, -2,406948f };
			break;
		
		case 41:
			Local_39 = { -624,2344f, -1537,045f, 12,60193f };
			Local_40 = { -622,1749f, -1472,877f, -0,292606f };
			fLocal_43 = 8f;
			Local_41 = { -615,4003f, -1536,65f, 12,40271f };
			Local_42 = { -619,7385f, -1472,937f, -0,243267f };
			break;
		
		case 42:
			Local_39 = { -492,5057f, -1632,457f, 24,3307f };
			Local_40 = { -418,2088f, -1487,452f, 0f };
			fLocal_43 = 25f;
			Local_41 = { -486,2016f, -1636,095f, 24,20805f };
			Local_42 = { -398,7648f, -1490,44f, 0f };
			break;
		
		case 43:
			Local_39 = { -359,3541f, -1639,693f, 13,13455f };
			Local_40 = { -388,4955f, -1690,945f, -0,183164f };
			fLocal_43 = 25f;
			Local_41 = { -378,1518f, -1705,66f, 12,47196f };
			Local_42 = { -348,9591f, -1654,411f, 0,193478f };
			break;
		
		case 44:
			Local_39 = { -243,4436f, -1814,623f, 25,69465f };
			Local_40 = { -183,9987f, -1780,645f, -0,085802f };
			fLocal_43 = 25f;
			Local_41 = { -235,1319f, -1822,094f, 25,86542f };
			Local_42 = { -175,5105f, -1788,275f, -0,506062f };
			break;
		
		case 45:
			Local_39 = { 84,55537f, -2046,159f, 13,30767f };
			Local_40 = { 17,93164f, -2045,152f, -0,031946f };
			fLocal_43 = 25f;
			Local_41 = { 17,90788f, -2035,773f, 12,62706f };
			Local_42 = { 84,57207f, -2034,184f, 0,048385f };
			break;
		
		case 46:
			Local_39 = { -3064,973f, 780,1677f, 18,70642f };
			Local_40 = { -3093,958f, 757,2886f, 29,19696f };
			fLocal_43 = 5f;
			Local_41 = { -3063,054f, 778,0165f, 18,67167f };
			Local_42 = { -3092,175f, 754,9156f, 29,1458f };
			break;
		
		case 47:
			Local_39 = { -1471,517f, 2406,815f, 2,485338f };
			Local_40 = { -1489,422f, 2404,39f, 21,76938f };
			fLocal_43 = 15f;
			Local_41 = { -1468,889f, 2400,668f, 2,60396f };
			Local_42 = { -1487,055f, 2398,087f, 21,83768f };
			break;
		
		case 48:
			Local_39 = { 2326,57f, 1096,031f, 76,31458f };
			Local_40 = { 2290,332f, 1136,131f, 58,85706f };
			fLocal_43 = 21f;
			Local_41 = { 2334,453f, 1103,067f, 76,26603f };
			Local_42 = { 2297,846f, 1142,897f, 58,84243f };
			break;
		
		case 49:
			Local_39 = { 2379,442f, 1150,776f, 58,79632f };
			Local_40 = { 2327,658f, 1212,366f, 72,8333f };
			fLocal_43 = 12f;
			Local_41 = { 2374,064f, 1146,282f, 58,83331f };
			Local_42 = { 2320,895f, 1209,596f, 72,79299f };
			break;
		
		case 50:
			Local_39 = { -1179,405f, -355,2554f, 56,53003f };
			Local_40 = { -1198,064f, -357,8363f, 35,35551f };
			fLocal_43 = 12,5f;
			Local_41 = { -1178,385f, -361,8784f, 56,15081f };
			Local_42 = { -1197,104f, -364,7004f, 36,49475f };
			break;
		
		case 51:
			Local_39 = { -921,3846f, -384,94f, 137,0181f };
			Local_40 = { -912,4324f, -429,229f, 36,70113f };
			fLocal_43 = 16f;
			Local_41 = { -914,1658f, -387,9444f, 137,0794f };
			Local_42 = { -906,2534f, -424,691f, 47,11882f };
			break;
		
		case 52:
			Local_39 = { -740,2564f, 246,4529f, 132,2922f };
			Local_40 = { -718,3602f, 201,0042f, 80,95571f };
			fLocal_43 = 20f;
			Local_41 = { -726,6429f, 253,0676f, 132,3319f };
			Local_42 = { -705,5858f, 210,4336f, 78,70573f };
			break;
		
		case 53:
			Local_39 = { -771,2068f, 268,2729f, 132,1689f };
			Local_40 = { -778,3417f, 313,1148f, 84,27054f };
			fLocal_43 = 16f;
			Local_41 = { -770,8035f, 310,8625f, 137,4161f };
			Local_42 = { -763,0681f, 269,044f, 83,31474f };
			break;
		
		case 54:
			Local_39 = { 259,2205f, 135,4146f, 136,7083f };
			Local_40 = { 279,2396f, 128,1379f, 100,8233f };
			fLocal_43 = 16f;
			Local_41 = { 261,9694f, 142,9676f, 136,6889f };
			Local_42 = { 281,7203f, 134,9551f, 100,7704f };
			break;
		
		case 55:
			Local_39 = { 393,548f, -30,87166f, 152,6635f };
			Local_40 = { 369,9622f, -23,88461f, 88,35776f };
			fLocal_43 = 8f;
			Local_41 = { 390,5358f, -36,08882f, 152,7813f };
			Local_42 = { 368,1275f, -28,81888f, 88,69447f };
			break;
		
		case 56:
			Local_39 = { 114,3139f, -648,4297f, 261,8488f };
			Local_40 = { 131,0782f, -733,7684f, 39,34393f };
			fLocal_43 = 20f;
			Local_41 = { 124,8467f, -646,6575f, 261,8488f };
			Local_42 = { 140,0502f, -737,427f, 39,3493f };
			break;
		
		case 57:
			Local_39 = { -215,919f, -823,8436f, 126,0224f };
			Local_40 = { -193,2237f, -761,7781f, 27,91382f };
			fLocal_43 = 20f;
			Local_41 = { -225,397f, -820,3937f, 126,0812f };
			Local_42 = { -202,9433f, -758,257f, 27,47734f };
			break;
		
		case 58:
			Local_39 = { -296,4725f, -802,0815f, 95,40108f };
			Local_40 = { -278,1352f, -747,7841f, 50,40046f };
			fLocal_43 = 20f;
			Local_41 = { -305,4602f, -798,8369f, 95,48194f };
			Local_42 = { -285,7376f, -745,0959f, 49,57651f };
			break;
		
		case 59:
			Local_39 = { -292,3034f, -823,3569f, 95,37621f };
			Local_40 = { -258,5991f, -835,5632f, 27,97946f };
			fLocal_43 = 20f;
			Local_41 = { -288,9206f, -814,022f, 95,37556f };
			Local_42 = { -255,2116f, -826,256f, 27,7375f };
			break;
		
		case 60:
			Local_39 = { -256,3589f, -714,7838f, 110,1617f };
			Local_40 = { -212,9054f, -730,532f, 32,21946f };
			fLocal_43 = 20f;
			Local_41 = { -253,7723f, -705,6632f, 110,1736f };
			Local_42 = { -210,0588f, -722,6748f, 32,46536f };
			break;
		
		case 61:
			Local_39 = { 1808,214f, 1949,246f, 71,73707f };
			Local_40 = { 1837,906f, 2127,283f, 52,80491f };
			fLocal_43 = 9,75f;
			Local_41 = { 1802,786f, 1950,262f, 71,74002f };
			Local_42 = { 1831,994f, 2127,433f, 52,83893f };
			break;
		
		case 62:
			Local_39 = { 2388,733f, 2931,941f, 46,62681f };
			Local_40 = { 2426,681f, 2883,066f, 36,21524f };
			fLocal_43 = 10f;
			Local_41 = { 2392,547f, 2934,867f, 46,6268f };
			Local_42 = { 2430,333f, 2885,908f, 36,28148f };
			break;
		
		case 63:
			Local_39 = { 2700,056f, 4836,381f, 42,07854f };
			Local_40 = { 2685,673f, 4893,38f, 30,90867f };
			fLocal_43 = 20,75f;
			Local_41 = { 2685,672f, 4821,653f, 42,18471f };
			Local_42 = { 2672,812f, 4880,356f, 31,13311f };
			break;
		
		case 64:
			Local_39 = { -1053,446f, 4766,245f, 234,3251f };
			Local_40 = { -1040,263f, 4737,157f, 204,4916f };
			fLocal_43 = 5f;
			Local_41 = { -1051,414f, 4767,193f, 234,4293f };
			Local_42 = { -1037,954f, 4738,354f, 204,5282f };
			break;
		
		case 67:
			Local_39 = { 1001,145f, -987,1138f, 42,62456f };
			Local_40 = { 1078,645f, -963,7435f, 28,93338f };
			fLocal_43 = 14f;
			Local_41 = { 1002,864f, -992,8986f, 42,62456f };
			Local_42 = { 1080,484f, -969,9034f, 28,88377f };
			break;
		
		case 68:
			Local_39 = { 952,5042f, -847,6615f, 43,01844f };
			Local_40 = { 1021,093f, -844,5063f, 29,71967f };
			fLocal_43 = 20f;
			Local_41 = { 945,5494f, -835,9777f, 43,15658f };
			Local_42 = { 1016,364f, -835,3861f, 29,7297f };
			break;
		
		case 69:
			Local_39 = { 1212,477f, -1183,013f, 46,4739f };
			Local_40 = { 1267,189f, -1161,997f, 32,48297f };
			fLocal_43 = 40f;
			Local_41 = { 1206,01f, -1157,063f, 47,93699f };
			Local_42 = { 1258,374f, -1140,68f, 32,42903f };
			break;
	}
}

int func_29(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x1D5CD3EAAA7422B0((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_30()
{
	Local_37[0 /*3*/] = { 1083f, -231f, 60f };
	Local_37[1 /*3*/] = { 1024f, -325f, 60f };
	Local_37[2 /*3*/] = { 910f, -401f, 43f };
	Local_37[3 /*3*/] = { 721f, -457f, 26f };
	Local_37[4 /*3*/] = { 643f, -579f, 26f };
	Local_37[5 /*3*/] = { 590f, -851f, 26f };
	Local_37[6 /*3*/] = { 590f, -1023f, 16f };
	Local_37[7 /*3*/] = { 582f, -1205f, 24f };
	Local_37[8 /*3*/] = { 608f, -1335f, 16f };
	Local_37[9 /*3*/] = { 640f, -1434f, 16f };
	Local_37[10 /*3*/] = { 671f, -1742f, 20f };
	Local_37[11 /*3*/] = { 651f, -2046f, 16f };
	Local_37[12 /*3*/] = { 603f, -2505f, 9f };
	Local_37[13 /*3*/] = { 673f, -2582f, 4f };
	Local_37[14 /*3*/] = { 728f, -2594f, 10f };
	Local_37[15 /*3*/] = { 794f, -2624f, 27f };
	Local_37[16 /*3*/] = { -2663f, 2594f, 7,5f };
	Local_37[17 /*3*/] = { -1902f, 4617f, 30f };
	Local_37[18 /*3*/] = { -513f, 4427f, 40f };
	Local_37[19 /*3*/] = { 126f, 3366f, 40f };
	Local_37[20 /*3*/] = { 143f, 3418f, 36f };
	Local_37[21 /*3*/] = { 2822f, 4978f, 40f };
	Local_37[22 /*3*/] = { -162f, 4249f, 40f };
	Local_37[23 /*3*/] = { -408f, 2964f, 20f };
	Local_37[24 /*3*/] = { -181f, 2862f, 38f };
	Local_37[25 /*3*/] = { 2558f, 2201f, 24f };
	Local_37[26 /*3*/] = { 2950f, 803f, 8f };
	Local_37[27 /*3*/] = { 2369f, -409f, 80f };
	Local_37[28 /*3*/] = { 1906f, -755f, 84f };
	Local_37[29 /*3*/] = { -403f, -2333f, 40f };
	Local_37[30 /*3*/] = { -1429f, 2649f, 10f };
	Local_37[31 /*3*/] = { 219f, -2315f, 5f };
	Local_37[32 /*3*/] = { 350f, -2315f, 5f };
	Local_37[33 /*3*/] = { -1848f, -333f, 75f };
	Local_37[34 /*3*/] = { -693f, -608f, 69f };
	Local_37[35 /*3*/] = { -1461f, -582f, 53f };
	Local_37[36 /*3*/] = { -1553f, -546f, 59f };
	Local_37[37 /*3*/] = { 338f, -2758f, 23f };
	Local_37[38 /*3*/] = { 1985f, 6201f, 53f };
	Local_37[39 /*3*/] = { -713f, -1538f, 13f };
	Local_37[40 /*3*/] = { -659f, -1518f, 13f };
	Local_37[41 /*3*/] = { -620f, -1502f, 16f };
	Local_37[42 /*3*/] = { -445f, -1575f, 26f };
	Local_37[43 /*3*/] = { -373f, -1680f, 19f };
	Local_37[44 /*3*/] = { -212f, -1805f, 29f };
	Local_37[45 /*3*/] = { 47f, -2040f, 18f };
	Local_37[46 /*3*/] = { -3080f, 766f, 25f };
	Local_37[47 /*3*/] = { -1478f, 2400f, 20f };
	Local_37[48 /*3*/] = { 2308f, 1124f, 78f };
	Local_37[49 /*3*/] = { 2349f, 1174f, 79f };
	Local_37[50 /*3*/] = { -1186f, -365f, 46f };
	Local_37[51 /*3*/] = { -916f, -407f, 93f };
	Local_37[52 /*3*/] = { -726f, 235f, 105f };
	Local_37[53 /*3*/] = { -774f, 286f, 112f };
	Local_37[54 /*3*/] = { 271f, 134f, 125f };
	Local_37[55 /*3*/] = { 377f, -28f, 125f };
	Local_37[56 /*3*/] = { 121f, -703f, 150f };
	Local_37[57 /*3*/] = { -204f, -784f, 74f };
	Local_37[58 /*3*/] = { -287f, -774f, 72f };
	Local_37[59 /*3*/] = { -272f, -824f, 71f };
	Local_37[60 /*3*/] = { -230f, -723f, 80f };
	Local_37[61 /*3*/] = { 1822f, 2044f, 62f };
	Local_37[62 /*3*/] = { 2410f, 2907f, 44f };
	Local_37[63 /*3*/] = { 2686f, 4858f, 36f };
	Local_37[64 /*3*/] = { -1046f, 4751f, 244f };
	Local_37[65 /*3*/] = { -213f, -2463f, 38f };
	Local_37[66 /*3*/] = { -597f, -2192f, 38f };
	Local_37[67 /*3*/] = { 1036f, -980f, 41f };
	Local_37[68 /*3*/] = { 980f, -837f, 42f };
	Local_37[69 /*3*/] = { 1208f, -1173f, 38f };
}

int func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_52();
	iVar1 = func_50();
	if ((iVar2 + iVar1) > 0)
	{
		func_49(32, (iVar2 + iVar1));
	}
	if (bLocal_36)
	{
		iVar0 = iVar1;
		if (iVar1 >= 8)
		{
			func_45(291, 0, 0);
		}
	}
	else
	{
		iVar0 = iVar2;
		if (iVar2 >= 50)
		{
			unk_0x8DD7F37773EBD5B9(joaat("sp0_water_cannon_deaths"), 100, 0);
		}
		else if (iVar2 >= 38)
		{
			unk_0x8DD7F37773EBD5B9(joaat("sp0_water_cannon_deaths"), 75, 0);
		}
		else if (iVar2 >= 25)
		{
			func_45(290, 0, 0);
			unk_0x8DD7F37773EBD5B9(joaat("sp0_water_cannon_deaths"), 50, 0);
		}
		else if (iVar2 >= 13)
		{
			unk_0x8DD7F37773EBD5B9(joaat("sp0_water_cannon_deaths"), 25, 0);
		}
	}
	if (iVar1 == 15 && iVar2 == 50)
	{
		func_32(32, 1);
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_33(iParam0, iParam1);
}

int func_33(int iParam0, int iParam1)
{
	if (func_54(14) && !func_44(iParam0))
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
	if (func_43(&Global_4543384))
	{
		if (func_41(&Global_4543384, iParam0))
		{
			return 0;
		}
		if (func_34(&Global_4543384, iParam0))
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

int func_34(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_54(14) && !func_44(iParam1))
	{
		return 0;
	}
	if (func_41(uParam0, iParam1))
	{
		return 0;
	}
	if (func_40(uParam0) < 0f)
	{
		func_39(uParam0, 0);
	}
	func_37(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_35(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x37088D2C63AC4C01(iParam1))
	{
		return 0;
	}
	if (func_54(14) && !func_44(iParam1))
	{
		return 0;
	}
	if (func_41(uParam0, iParam1))
	{
		return 0;
	}
	if (func_40(uParam0) < 0f)
	{
		func_39(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_36(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_36(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_37(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_38(uParam0, iVar0);
		iVar0++;
	}
	func_39(uParam0, (Global_4543383 - 0,5f));
}

void func_38(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_39(var uParam0, float fParam1)
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

float func_40(var uParam0)
{
	return uParam0->f_80;
}

bool func_41(var uParam0, int iParam1)
{
	return func_42(uParam0, iParam1) != -1;
}

int func_42(var uParam0, int iParam1)
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

bool func_43(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_44(int iParam0)
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

void func_45(int iParam0, int iParam1, int iParam2)
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
		func_48((891 + iParam0), 1, -1);
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
		Global_113969.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113969.f_10197[iParam0 /*12*/].f_11 = iParam2;
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
		func_46();
	}
}

void func_46()
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
		func_49(13, system::floor(Global_113969.f_10197.f_3853));
	}
	if (!unk_0xB00920C3C99A34C5())
	{
		if (!Global_79389)
		{
			if (func_47() == 2 == 0 && !unk_0x76CD105BCAC6EB9F())
			{
				if (unk_0x5676319ACE5BEC37())
				{
					Global_113703 = 0;
				}
				if (!Global_64166)
				{
					func_2();
				}
			}
		}
	}
}

int func_47()
{
	return Global_32948;
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_7();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

int func_49(int iParam0, int iParam1)
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

int func_50()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (BitTest(Global_113969.f_10052.f_96, bVar1))
		{
			if (func_51(bVar1))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113969.f_10052.f_97, bVar1))
		{
			if (func_51(bVar1 + 32))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113969.f_10052.f_98, bVar1))
		{
			if (func_51(bVar1 + 64))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int func_51(bool bParam0)
{
	switch (bParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_52()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (BitTest(Global_113969.f_10052.f_96, bVar1))
		{
			if (!func_51(bVar1))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113969.f_10052.f_97, bVar1))
		{
			if (!func_51(bVar1 + 32))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113969.f_10052.f_98, bVar1))
		{
			if (!func_51(bVar1 + 64))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

int func_53(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

bool func_54(int iParam0)
{
	return Global_44042 == iParam0;
}

