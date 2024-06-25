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
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
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
	float fLocal_45 = 0f;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
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
	int iLocal_90 = 0;
	struct<2> Local_91 = { 0, 0 } ;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	struct<2> Local_94 = { 0, 0 } ;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	struct<2> Local_97 = { 0, 0 } ;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	struct<2> Local_100 = { 0, 0 } ;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<2> Local_103 = { 0, 0 } ;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	struct<2> Local_106 = { 0, 0 } ;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
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
	fLocal_26 = 0f;
	fLocal_30 = -0,0375f;
	fLocal_31 = 0,17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_45 = ((0,05f + 0,275f) - 0,01f);
	fLocal_63 = 0f;
	StringCopy(&Local_91, "CELL_206", 16);
	StringCopy(&Local_94, "CELL_214", 16);
	StringCopy(&Local_97, "CELL_243", 16);
	StringCopy(&Local_100, "CELL_244", 16);
	StringCopy(&Local_103, "CELL_265", 16);
	StringCopy(&Local_106, "CELL_300", 16);
	unk_0x51CC1333A10C4E09();
	func_102(&uLocal_112);
	iLocal_109 = 0;
	func_100();
	func_99(Global_20911, "SET_THEME", system::to_float(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_89(0);
	while (true)
	{
		system::wait(0);
		func_88();
		func_87();
		if (!Global_20930.f_1 == 9 && Global_20930.f_1 > 3)
		{
			switch (iLocal_90)
			{
				case 0:
					func_49();
					break;
				
				case 1:
					func_33();
					break;
				
				case 3:
					func_5();
					break;
				
				case 2:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_20930.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_20930.f_1 == 1 || Global_20930.f_1 == 3) || Global_20930.f_1 == 0) || Global_20874 == 1)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	Global_1882108.f_6 = 0;
	unk_0xBBC29EBE6E1A48FA();
}

int func_3()
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
}

void func_5()
{
	int iVar0;
	
	Global_1882108.f_6 = 1;
	if (iLocal_111)
	{
		if (unk_0x2645430E708CBFAC(2, Global_20899))
		{
			iLocal_111 = 0;
		}
		return;
	}
	if (unk_0x2645430E708CBFAC(2, 201))
	{
		iLocal_90 = 1;
		iVar0 = func_31(iLocal_109, 0);
		func_6(iVar0);
		return;
	}
	if (unk_0x2645430E708CBFAC(2, 202))
	{
		iLocal_90 = 1;
		return;
	}
	hud::set_warning_message_with_header("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, false, -1, 0, 0, true, 0);
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1882108.f_7[iParam0 /*8*/].f_2;
	if (Global_1882108.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_110 == iVar0)
	{
		func_27(iVar0, Global_1882108.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}
	Global_1882108.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)
{
	if (func_12())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_11())
		{
			func_9(1, 1);
		}
		else
		{
			func_9(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
	}
	if (unk_0xE87F28FD4128D063())
	{
		unk_0x0F15249D24BC5ADA(0);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 30);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 30);
	}
	if (!func_8())
	{
		Global_20930.f_1 = 3;
	}
}

int func_8()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				unk_0x78C4EBB0251847E2(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			unk_0x6B7EA0158D00C600(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			unk_0x6B7EA0158D00C600(Global_20867);
		}
		else
		{
			unk_0x6B7EA0158D00C600(Global_20858);
		}
	}
}

int func_10(int iParam0)
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

bool func_11()
{
	return BitTest(Global_1956920, 5);
}

bool func_12()
{
	return BitTest(Global_1956920, 19);
}

void func_13(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		if (Global_1882108.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (BitTest(Global_1882108.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_26();
				if (Global_1882108.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_26();
				}
				else
				{
					Global_1882108.f_4 = (Global_1882108.f_4 - 1);
					if (Global_1882108.f_4 < 0)
					{
						Global_1882108.f_4 = 0;
					}
					func_18();
				}
			}
			unk_0x8744D2E3FC95740E(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_22), Global_1882108.f_7[iParam0 /*8*/].f_2);
			unk_0xFE3A52C5B7AE3101(Global_1882108.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1882108.f_7[iVar0 /*8*/] = { Global_1882108.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_1882108.f_7[9 /*8*/].f_1 = 0;
		Global_1882108.f_7[9 /*8*/].f_2 = func_14();
	}
}

int func_14()
{
	return -1;
}

void func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1882108.f_3), iParam0);
	}
}

bool func_16(int iParam0)
{
	return BitTest(Global_1882108.f_3, iParam0);
}

void func_17()
{
	Global_1882108 = (Global_1882108 - 1);
}

void func_18()
{
	Global_23349 = (Global_23349 - 1);
	if (Global_23349 < 0)
	{
		func_25("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_19();
}

void func_19()
{
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_99(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_20(1);
			func_99(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_23354 = 0;
	Global_9405 = iParam0;
	func_24();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_23(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar2 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21149 = 0;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar2);
								unk_0xE6B753D52F4CA222();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_21(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113969.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113969.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113969.f_14144[iVar3 /*104*/].f_99[Global_20930] == 1)
											{
												Global_23354++;
											}
										}
									}
									iVar3++;
								}
								func_21(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79389)
								{
									iVar4 = 0;
									iVar4 = Global_4541818;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541819[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541819[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541819[iVar5 /*104*/].f_99[Global_20930] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_21(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20930)
									{
										case 0:
											iVar6 = Global_45261;
											break;
										
										case 1:
											iVar6 = Global_45262;
											break;
										
										case 2:
											iVar6 = Global_45263;
											break;
										
										default:
											break;
									}
									func_21(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_21(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(Global_8806);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8801, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar7);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar8 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21149 = 0;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar8);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 8)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if ((iVar1 == 23 && unk_0x1B79E937E91F40C3(&(Global_8807[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8801, 6))
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_22(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_21(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_21(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_21(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam6));
	}
	if (!unk_0xD6F9DEE4765092A9(sParam7))
	{
		func_22(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		func_22(sParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam9))
	{
		func_22(sParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam10))
	{
		func_22(sParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam11))
	{
		func_22(sParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_22(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

bool func_23(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_24()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_25(char* sParam0)
{
	if (Global_23349 != 0)
	{
		if (!unk_0xD6F9DEE4765092A9(sParam0))
		{
		}
		Global_23349 = 0;
	}
}

void func_26()
{
	Global_1882108.f_1 = (Global_1882108.f_1 - 1);
	if (Global_1882108.f_1 < 0)
	{
		Global_1882108.f_1 = 0;
	}
}

void func_27(int iParam0, var uParam1)
{
	if (Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_26 == func_14())
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_26 = iParam0;
			Global_2738934.f_5249.f_228 = uParam1;
			func_28(func_29(iParam0));
		}
	}
}

void func_28(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = -627920584;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	if (!iParam0 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 3, iParam0, Var0.f_0);
	}
}

int func_29(int iParam0)
{
	var uVar0;
	
	if (func_30(iParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam0);
	}
	return uVar0;
}

int func_30(var uParam0)
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

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_32())
	{
		if (Global_1882108.f_7[iVar0 /*8*/].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 1);
			if (iParam0 < 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32()
{
	return Global_1882108;
}

void func_33()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iLocal_109, 0);
	if (iLocal_109 == -1)
	{
		func_89(1);
		return;
	}
	iVar1 = Global_1882108.f_7[iVar0 /*8*/].f_2;
	if (!func_48(iVar1, 0, 1) || iLocal_110 != iVar1)
	{
		func_89(1);
		return;
	}
	func_43(&uLocal_112);
	if (func_41(&uLocal_112))
	{
		func_89(1);
		return;
	}
	if (func_40(&uLocal_112))
	{
		func_13(iVar0);
		func_89(1);
		return;
	}
	if (func_36(&uLocal_112))
	{
		if (func_35())
		{
			iLocal_111 = 1;
			iLocal_90 = 3;
		}
		else if (Global_1882108.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1882108.f_7[iVar0 /*8*/] == 1)
		{
			func_34(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_34(int iParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_1836148, 15);
	func_13(iParam0);
	Global_1882108.f_6 = 0;
	func_7(0);
}

bool func_35()
{
	return Global_1574582;
}

int func_36(var uParam0)
{
	if (!BitTest(*uParam0, 0))
	{
		return 0;
	}
	if (Global_20908)
	{
		return 0;
	}
	if (!unk_0x9390801B06EE998F())
	{
		return 0;
	}
	if (!unk_0x875A214D5EBCA509(2, Global_20899))
	{
		return 0;
	}
	func_37();
	Global_20908 = 1;
	return 1;
}

void func_37()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20919, 1);
		func_38();
	}
}

void func_38()
{
	if (func_39())
	{
		unk_0xBF3F90E670404C44(5);
	}
}

int func_39()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xBF03D0685ADC793B();
	iVar1 = unk_0xBCF87EE3DC296C2A(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4543362 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_40(var uParam0)
{
	if (!BitTest(*uParam0, 1))
	{
		return 0;
	}
	if (Global_20908)
	{
		return 0;
	}
	if (!unk_0x9390801B06EE998F())
	{
		return 0;
	}
	if (!unk_0x875A214D5EBCA509(2, Global_20902))
	{
		return 0;
	}
	func_37();
	Global_20908 = 1;
	return 1;
}

int func_41(var uParam0)
{
	if (!BitTest(*uParam0, 2))
	{
		return 0;
	}
	if (Global_20908)
	{
		return 0;
	}
	if (!unk_0x9390801B06EE998F())
	{
		return 0;
	}
	if (!unk_0x875A214D5EBCA509(2, Global_20900))
	{
		return 0;
	}
	func_42();
	Global_20908 = 1;
	return 1;
}

void func_42()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20919, 1);
	}
}

void func_43(var uParam0)
{
	if (unk_0x1DD05E817C89C737() < uParam0->f_1)
	{
		return;
	}
	if (!unk_0x9390801B06EE998F())
	{
		return;
	}
	if (unk_0x875A214D5EBCA509(2, Global_20906) || unk_0x875A214D5EBCA509(2, 181))
	{
		func_46();
		uParam0->f_1 = unk_0x1DD05E817C89C737() + 50;
	}
	if (unk_0x875A214D5EBCA509(2, Global_20907) || unk_0x875A214D5EBCA509(2, 180))
	{
		func_44();
		uParam0->f_1 = unk_0x1DD05E817C89C737() + 50;
	}
}

void func_44()
{
	func_99(Global_20911, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_45();
}

void func_45()
{
	if (func_39())
	{
		if (Global_21150 == 0)
		{
			unk_0xBF3F90E670404C44(2);
		}
		else
		{
			unk_0xBF3F90E670404C44(1);
		}
	}
}

void func_46()
{
	func_99(Global_20911, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_47();
}

void func_47()
{
	if (func_39())
	{
		if (Global_21150 == 0)
		{
			unk_0xBF3F90E670404C44(1);
		}
		else
		{
			unk_0xBF3F90E670404C44(2);
		}
	}
}

int func_48(int iParam0, bool bParam1, bool bParam2)
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

void func_49()
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_32() > 1)
	{
		func_43(&uLocal_112);
	}
	if (func_36(&uLocal_112))
	{
		unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
		uVar0 = unk_0x6CA3F2B87712B6A4();
		while (!unk_0xA6F779AA284EB20E(uVar0))
		{
			system::wait(0);
		}
		iLocal_109 = unk_0x5DEF122A58D4F685(uVar0);
		iVar1 = func_31(iLocal_109, 0);
		switch (Global_1882108.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_51();
				break;
			
			default:
				return;
		}
		Global_20930.f_1 = 8;
		return;
	}
	if (func_40(&uLocal_112))
	{
		unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
		uVar2 = unk_0x6CA3F2B87712B6A4();
		while (!unk_0xA6F779AA284EB20E(uVar2))
		{
			system::wait(0);
		}
		iLocal_109 = unk_0x5DEF122A58D4F685(uVar2);
		iVar3 = func_31(iLocal_109, 0);
		switch (Global_1882108.f_7[iVar3 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_13(iVar3);
				func_89(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_16(0))
	{
		func_50(0);
		func_89(0);
	}
}

void func_50(int iParam0)
{
	if (func_16(iParam0))
	{
		unk_0x8744D2E3FC95740E(&(Global_1882108.f_3), iParam0);
	}
}

void func_51()
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	var uVar6[3];
	bool bVar7;
	int iVar8;
	int iVar9;
	char cVar10[16];
	struct<16> Var11;
	char cVar12[16];
	
	if (Global_20930.f_1 != 8)
	{
		Global_20930.f_1 = 8;
	}
	func_99(Global_20911, "SET_DATA_SLOT_EMPTY", system::to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_31(iLocal_109, 0);
	iLocal_110 = Global_1882108.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_1882108.f_7[iVar3 /*8*/].f_2;
	unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(26);
	unk_0x330108B080A2132F(0);
	if (func_48(iVar4, 0, 1))
	{
		Var5 = { func_86(iVar4) };
		unk_0x882AEFD55B8D51FB("STRING");
		unk_0x4E5A3D96808F7F84(func_80(iVar4));
		unk_0x60D332F23943B34F(&Var5);
		unk_0xCFAD3D478C87321A();
		bVar0 = true;
	}
	else
	{
		func_22("");
	}
	if (Global_1882108.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_15367)
		{
			bVar7 = func_79(iVar4);
			iVar8 = 0;
			while (iVar8 < 3)
			{
				if (iVar9 < 3)
				{
					if (Global_1887305[iVar4 /*610*/].f_10.f_11[iVar8] != func_14())
					{
						if (func_48(Global_1887305[iVar4 /*610*/].f_10.f_11[iVar8], 0, 1))
						{
							uVar6[iVar9] = Global_1887305[iVar4 /*610*/].f_10.f_11[iVar8];
							iVar9++;
						}
					}
				}
				iVar8++;
			}
			if (iVar9 == 0)
			{
				if (bVar7)
				{
					func_22("BA_APP_BODYCTA");
				}
				else
				{
					func_22("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar10, "BA_APP_BODY_T4", 16);
				if (bVar7)
				{
					StringCopy(&cVar10, "BA_APP_BODYCT4", 16);
				}
				if (iVar9 == 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar9 > 2)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T6", 16);
					}
				}
				unk_0x882AEFD55B8D51FB(&cVar10);
				iVar8 = 0;
				while (iVar8 < iVar9)
				{
					Var11 = { func_86(uVar6[iVar8]) };
					unk_0x60D332F23943B34F(&Var11);
					iVar8++;
				}
				unk_0xCFAD3D478C87321A();
			}
		}
		else
		{
			if (Global_1882108.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1882108.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar12, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar12, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1882108.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar12, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar12, "BA_APP_BODY_T10", 16);
			}
			unk_0x882AEFD55B8D51FB(&cVar12);
			unk_0x511D14ED2DA887E1(Global_1882108.f_88[iVar3 /*5*/]);
			unk_0x511D14ED2DA887E1(func_78(iVar4));
			unk_0x511D14ED2DA887E1(Global_1882108.f_88[iVar3 /*5*/].f_3);
			unk_0x511D14ED2DA887E1(Global_1882108.f_88[iVar3 /*5*/].f_4);
			unk_0xCFAD3D478C87321A();
		}
	}
	else if (Global_1882108.f_7[iVar3 /*8*/] == 1)
	{
		unk_0x882AEFD55B8D51FB("BA_APP_BODY_DM2");
		unk_0x4E5A3D96808F7F84(func_80(Global_1882108.f_7[iVar3 /*8*/].f_2));
		unk_0x60D332F23943B34F(func_63(Global_1882108.f_7[iVar3 /*8*/].f_2));
		unk_0xCFAD3D478C87321A();
	}
	if (bVar0)
	{
		iVar2 = func_57(Global_1882108.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			sVar1 = unk_0x008C0EB38E4459EE(iVar2);
		}
	}
	if (bVar0)
	{
		unk_0x3585BEBEDC67FCC7(sVar1);
	}
	else
	{
		func_22(&Local_106);
	}
	unk_0xE6B753D52F4CA222();
	func_99(Global_20911, "DISPLAY_VIEW", system::to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_55(&Local_103);
	func_52(13, &Local_97, 12, &Local_100, 4, &Local_91, &uLocal_112);
	iLocal_90 = 1;
}

void func_52(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, var uParam6)
{
	func_53(2, iParam0, sParam1, 0, uParam6, -1);
	func_53(1, iParam2, sParam3, 1, uParam6, 17);
	func_53(3, iParam4, sParam5, 2, uParam6, -1);
}

void func_53(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_21(Global_20911, "SET_SOFT_KEYS", system::to_float(iParam0), 0f, system::to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(uParam4, iParam3);
		func_54(iParam5, 0);
		return;
	}
	if (Global_20918)
	{
		func_21(Global_20911, "SET_SOFT_KEYS", system::to_float(iParam0), 1f, system::to_float(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(uParam4, iParam3);
		func_54(iParam5, 1);
		return;
	}
	func_21(Global_20911, "SET_SOFT_KEYS", system::to_float(iParam0), 1f, system::to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0B0C9A0F9AAEB7F0(uParam4, iParam3);
	func_54(iParam5, 1);
}

void func_54(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, iParam0);
		return;
	}
	unk_0x8744D2E3FC95740E(&Global_8800, iParam0);
}

void func_55(char* sParam0)
{
	func_56(Global_20911, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_56(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_22(sParam2);
	if (!unk_0xD6F9DEE4765092A9(sParam3))
	{
		func_22(sParam3);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam4))
	{
		func_22(sParam4);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam5))
	{
		func_22(sParam5);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam6))
	{
		func_22(sParam6);
	}
	unk_0xE6B753D52F4CA222();
}

int func_57(int iParam0)
{
	int iVar0;
	
	iVar0 = func_60(iParam0);
	if (iVar0 == -1)
	{
		func_58(iParam0, 1);
		return 0;
	}
	Global_1681225[iVar0 /*5*/].f_4 = 1;
	return Global_1681225[iVar0 /*5*/].f_2;
}

void func_58(int iParam0, bool bParam1)
{
	if (!func_48(iParam0, 0, 1))
	{
		return;
	}
	if (func_60(iParam0) != -1)
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
	if (func_59(iParam0))
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

int func_59(int iParam0)
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

int func_60(int iParam0)
{
	int iVar0;
	
	if (!func_48(iParam0, 0, 1))
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
			func_61(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_61(int iParam0)
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
	func_62(&(Global_1681225[iVar2 /*5*/]));
	Global_1681386 = (Global_1681386 - 1);
}

void func_62(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x76CD105BCAC6EB9F())
	{
		uParam0->f_3 = unk_0x7E3F74F641EE6B27();
	}
}

char* func_63(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!func_30(iParam0))
	{
		uVar0 = func_73(iParam0, 0);
		return uVar0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		uVar0 = func_72(&(Global_1887305[iParam0 /*610*/].f_10.f_105));
		return uVar0;
	}
	if (Global_1887305[iParam0 /*610*/].f_10.f_121 != Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_121)
	{
		uVar0 = func_73(iParam0, 0);
		return uVar0;
	}
	if (((func_71(iParam0, 28) || func_71(unk_0x259BE71D8A81D4FA(), 28)) || func_68(iParam0)) && !func_66(iParam0))
	{
		return func_73(iParam0, 0);
	}
	iVar1 = func_65(iParam0);
	if (iVar1 != func_14())
	{
		if (iVar1 != unk_0x259BE71D8A81D4FA())
		{
			if (Global_262145.f_34983)
			{
				return func_73(iVar1, 0);
			}
			if (!func_64() && !unk_0x8FF2665359043205(0, -1, 1))
			{
				return func_73(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_14())
	{
		uVar0 = func_72(&(Global_1887305[iVar1 /*610*/].f_10.f_105));
		if (unk_0xD6F9DEE4765092A9(uVar0))
		{
			return func_73(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

bool func_64()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_65(int iParam0)
{
	if (func_30(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_14();
}

int func_66(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_67(iParam0) };
	if (func_64())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
		else if (unk_0x97DD063A9C6137F8(0))
		{
			if (unk_0x8EF8E27D73EB5271(&Var0) && unk_0x9F633448E4C73207(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_67(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

int func_68(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_14())
	{
		Var0 = { func_67(iParam0) };
		if (func_70(&Var0))
		{
			return 1;
		}
		if (!unk_0x9F633448E4C73207(&Var0))
		{
			return 1;
		}
		if ((unk_0x3B880DE16766E9C3() && !unk_0x716271729B9FB8E6()) || unk_0x761778199FE1211C())
		{
			if (unk_0x97DD063A9C6137F8(0))
			{
				return 0;
			}
		}
		else if (func_64() || unk_0x716271729B9FB8E6())
		{
			if (unk_0x97DD063A9C6137F8(0))
			{
				if (unk_0x8EF8E27D73EB5271(&Var0))
				{
					return 0;
				}
			}
		}
		if ((func_69(Var0) && unk_0xC9AFD0C222C7CA74(&Var0)) && !unk_0x8EF8E27D73EB5271(&Var0))
		{
			return 1;
		}
	}
	return 1;
}

bool func_69(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

int func_70(var uParam0)
{
	int iVar0;
	
	if (!func_69(*uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (func_69(Global_1979806[iVar0 /*13*/]))
		{
			if (unk_0xD43ED7463CB7671C(&(Global_1979806[iVar0 /*13*/]), uParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

var func_71(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

var func_72(var uParam0)
{
	return uParam0;
}

var func_73(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_75(iParam0, 1))
		{
			return func_74();
		}
	}
	return unk_0xFACCDE46E24AD056("GB_REST_ACC");
}

var func_74()
{
	return unk_0xFACCDE46E24AD056("GB_REST_ACCM");
}

bool func_75(int iParam0, bool bParam1)
{
	return func_76(iParam0, bParam1, 1);
}

int func_76(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_30(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_77(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_30(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	if (func_30(iParam0))
	{
		if (func_30(Global_1887305[iParam0 /*610*/].f_10))
		{
			if (Global_1887305[iParam0 /*610*/].f_10 == iParam0 && Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_78(int iParam0)
{
	if (func_65(iParam0) == func_14())
	{
		return 0;
	}
	return Global_1887305[iParam0 /*610*/].f_10.f_19;
}

int func_79(int iParam0)
{
	if (!func_30(iParam0))
	{
		return 0;
	}
	return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 26);
}

int func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = func_83(iParam0);
	if (iVar0 != -1)
	{
		return func_81(iVar0);
	}
	return 1;
}

int func_81(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_82(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_82(int iParam0)
{
	return Global_2648938.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_83(int iParam0)
{
	if (func_30(iParam0))
	{
		if (func_84(iParam0, 1))
		{
			return Global_2648938.f_818.f_11[func_65(iParam0)];
		}
	}
	return -1;
}

int func_84(int iParam0, bool bParam1)
{
	if (!func_30(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_85(iParam0))
		{
			return 0;
		}
	}
	return func_30(Global_1887305[iParam0 /*610*/].f_10);
}

int func_85(int iParam0)
{
	if (func_30(iParam0))
	{
		if (func_30(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

struct<16> func_86(var uParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, unk_0xBD6CA019F46AB947(uParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_87()
{
	if (Global_1882108.f_6)
	{
		if (iLocal_90 != 3)
		{
			if (!unk_0xB11671B812399BA2())
			{
				Global_1882108.f_6 = 0;
			}
		}
	}
}

void func_88()
{
	unk_0x4CC1CF98851922CE(0, 176);
	unk_0x4CC1CF98851922CE(0, 177);
}

void func_89(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_110 = func_14();
	if (!Global_20930.f_1 == 7)
	{
		Global_20930.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_109;
	}
	if (iVar0 >= Global_1680097)
	{
		iVar0 = 0;
	}
	if (Global_23346)
	{
		func_51();
		Global_23346 = 0;
		return;
	}
	iVar1 = func_32();
	iVar1 = (iVar1 - func_98());
	if ((func_84(unk_0x259BE71D8A81D4FA(), 0) && !func_97(1)) && iVar1 <= 0)
	{
		func_95();
		return;
	}
	func_90();
	func_99(Global_20911, "DISPLAY_VIEW", system::to_float(25), system::to_float(iVar0), -1082130432, -1082130432, -1082130432);
	func_55("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_52(13, &Local_94, 12, &Local_100, 4, &Local_91, &uLocal_112);
	}
	else
	{
		func_52(1, "", 1, "", 4, &Local_91, &uLocal_112);
	}
	iLocal_90 = 0;
}

void func_90()
{
	int iVar0;
	int iVar1;
	
	func_99(Global_20911, "SET_DATA_SLOT_EMPTY", system::to_float(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_32())
	{
		if (Global_1882108.f_7[iVar0 /*8*/].f_1 == 1 && Global_1882108.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1882108.f_7[iVar0 /*8*/])
			{
				case 0:
					if (func_94(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_92(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_91();
}

void func_91()
{
	bool bVar0;
	
	unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(25);
	unk_0x330108B080A2132F(0);
	if (func_85(unk_0x259BE71D8A81D4FA()))
	{
		func_22("BA_APP_NONEB");
	}
	else
	{
		func_22("BA_APP_NONE");
	}
	func_22("");
	unk_0x330108B080A2132F(-1);
	unk_0x330108B080A2132F(1);
	bVar0 = unk_0x76CD105BCAC6EB9F();
	unk_0x557F1E2300EF1A3E(bVar0);
	unk_0xE6B753D52F4CA222();
}

int func_92(int iParam0, int iParam1)
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	
	if (Global_1882108.f_7[iParam0 /*8*/].f_2 == func_14() || !func_48(Global_1882108.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(25);
	unk_0x330108B080A2132F(iParam1);
	Var0 = { func_86(Global_1882108.f_7[iParam0 /*8*/].f_2) };
	func_93(&Var0);
	unk_0x882AEFD55B8D51FB("BA_APP_BODY_DM1");
	unk_0xCFAD3D478C87321A();
	unk_0x330108B080A2132F(-1);
	iVar1 = 1;
	iVar2 = func_83(Global_1882108.f_7[iParam0 /*8*/].f_2);
	if (iVar2 != -1)
	{
		iVar1 = func_81(iVar2);
	}
	unk_0x330108B080A2132F(iVar1);
	unk_0x557F1E2300EF1A3E(true);
	unk_0xE6B753D52F4CA222();
	return 1;
}

void func_93(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

int func_94(int iParam0, int iParam1)
{
	struct<16> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1882108.f_7[iParam0 /*8*/].f_2 == func_14() || !func_48(Global_1882108.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(25);
	unk_0x330108B080A2132F(iParam1);
	Var0 = { func_86(Global_1882108.f_7[iParam0 /*8*/].f_2) };
	func_93(&Var0);
	bVar1 = func_79(Global_1882108.f_7[iParam0 /*8*/].f_2);
	iVar2 = func_78(Global_1882108.f_7[iParam0 /*8*/].f_2);
	if (iVar2 == 0)
	{
		if (bVar1)
		{
			func_22("BA_APP_BODYCT");
		}
		else
		{
			func_22("BA_APP_BODY_T");
		}
	}
	else if (iVar2 == 1)
	{
		if (bVar1)
		{
			unk_0x882AEFD55B8D51FB("BA_APP_BODYCT3");
		}
		else
		{
			unk_0x882AEFD55B8D51FB("BA_APP_BODY_T3");
		}
		unk_0x511D14ED2DA887E1(iVar2);
		unk_0xCFAD3D478C87321A();
	}
	else
	{
		if (bVar1)
		{
			unk_0x882AEFD55B8D51FB("BA_APP_BODYCT2");
		}
		else
		{
			unk_0x882AEFD55B8D51FB("BA_APP_BODY_T2");
		}
		unk_0x511D14ED2DA887E1(iVar2);
		unk_0xCFAD3D478C87321A();
	}
	unk_0x330108B080A2132F(-1);
	iVar3 = 1;
	iVar4 = func_83(Global_1882108.f_7[iParam0 /*8*/].f_2);
	if (iVar4 != -1)
	{
		iVar3 = func_81(iVar4);
	}
	unk_0x330108B080A2132F(iVar3);
	unk_0x557F1E2300EF1A3E(true);
	unk_0xE6B753D52F4CA222();
	return 1;
}

void func_95()
{
	func_99(Global_20911, "SET_DATA_SLOT_EMPTY", system::to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(26);
	unk_0x330108B080A2132F(0);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x4E5A3D96808F7F84(func_80(unk_0x259BE71D8A81D4FA()));
	unk_0x60D332F23943B34F(func_96());
	unk_0xCFAD3D478C87321A();
	func_22("BA_APP_NONEG");
	func_22("CELL_AGBOSSPIC");
	unk_0xE6B753D52F4CA222();
	func_99(Global_20911, "DISPLAY_VIEW", system::to_float(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_55("CELL_BOSSAGE");
	func_52(1, "", 1, "", 4, &Local_91, &uLocal_112);
	iLocal_90 = 2;
}

char* func_96()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_65(unk_0x259BE71D8A81D4FA());
	if (iVar0 != func_14())
	{
		if (iVar0 != unk_0x259BE71D8A81D4FA())
		{
			if (((func_71(iVar0, 28) || func_71(unk_0x259BE71D8A81D4FA(), 28)) || func_68(iVar0)) && !func_66(iVar0))
			{
				return func_73(iVar0, 0);
			}
			if (Global_262145.f_34983)
			{
				return func_73(iVar0, 0);
			}
			if (!func_64() && !unk_0x8FF2665359043205(0, -1, 1))
			{
				return func_73(iVar0, 0);
			}
		}
		uVar1 = func_72(&(Global_1887305[iVar0 /*610*/].f_10.f_105));
		if (unk_0xD6F9DEE4765092A9(uVar1))
		{
			return func_73(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_97(bool bParam0)
{
	return func_75(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_98()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_32())
	{
		if (Global_1882108.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_99(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam6));
	}
	unk_0xE6B753D52F4CA222();
}

void func_100()
{
	Global_1882108.f_1 = 0;
	func_101();
}

void func_101()
{
	Global_1882108.f_5 = 0;
}

void func_102(var uParam0)
{
	*uParam0 = 0;
}

