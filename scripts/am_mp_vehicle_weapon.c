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
	var uLocal_101 = 32;
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
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	struct<150> Local_135 = { 4, 0, 0, 0, 0, 0, 0, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6 } ;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	struct<21> Local_148 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_61 = ((0,05f + 0,275f) - 0,01f);
	fLocal_63 = 0f;
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_206(ScriptParam_148);
	}
	else
	{
		func_197(0);
	}
	while (true)
	{
		func_196();
		if (func_188())
		{
			func_197(0);
		}
		if (func_185())
		{
			func_197(0);
		}
		func_2();
		if (unk_0x93E08E0F531E2C35())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	func_182();
	if (func_181(0))
	{
		func_169();
	}
	else if (func_181(1))
	{
		if (func_168())
		{
			func_139();
		}
		else
		{
			func_131();
		}
	}
	else if (func_181(2))
	{
		if (func_114())
		{
			func_113(3);
		}
		func_104();
		if (func_100())
		{
			return;
		}
		func_91();
		func_90();
		func_61();
		func_50();
		func_48();
		func_3();
	}
	else if (func_181(3))
	{
		func_197(1);
	}
}

void func_3()
{
	func_47();
	func_40(0);
	func_25();
	func_6();
	func_5(1);
	func_4(2);
}

void func_4(int iParam0)
{
	Global_1577937 = iParam0;
}

void func_5(int iParam0)
{
	Global_1670224.f_1163 = iParam0;
}

void func_6()
{
	int iVar0;
	
	if (!BitTest(Local_135.f_5, 4))
	{
		if (func_23(0, -1, 0))
		{
			func_22(-1);
			func_21(21, "BLIP_184", -1);
			if (unk_0xAE231F549813BBDF(0))
			{
				func_21(29, "CELL_284", -1);
			}
			else
			{
				func_21(20, "CELL_284", -1);
			}
			iVar0 = 208;
			if (unk_0xAE231F549813BBDF(0))
			{
				iVar0 = 237;
			}
			func_20(iVar0, "BLIP_39", -1, 0);
			func_20(80, "MOVE_DRONE_RE", -1, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_135.f_5), 4);
		}
	}
	else
	{
		func_7(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0xAE231F549813BBDF(0))
	{
		if (!BitTest(Local_135.f_5, 6))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_135.f_5), 6);
			unk_0x8744D2E3FC95740E(&(Local_135.f_5), 4);
		}
	}
	else if (BitTest(Local_135.f_5, 6))
	{
		unk_0x8744D2E3FC95740E(&(Local_135.f_5), 6);
		unk_0x8744D2E3FC95740E(&(Local_135.f_5), 4);
	}
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_19(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_16(bParam4, bParam8))
	{
		return;
	}
	if (func_14())
	{
		return;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_10(unk_0x259BE71D8A81D4FA(), 0))
		{
			return;
		}
	}
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x66DA7155B68E7638() == 0 || unk_0xA43CD45F18522E3F())
		{
			return;
		}
	}
	if (Global_23831.f_5326 != 0)
	{
		if (unk_0x7811C74D5B749F76(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (Global_23831.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), unk_0xE934399D6F2C3AC5(2, Global_23831.f_5625[iVar1], 1), 64);
				}
				else if (Global_23831.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), unk_0xF761D79754BC3043(2, Global_23831.f_5640[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_23831.f_5327 = 0;
		}
		if (!Global_23831.f_5327)
		{
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x74BF156C860580D4((1f - (Global_23831.f_5684 / 100f)));
			unk_0xE6B753D52F4CA222();
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(1);
				unk_0xE6B753D52F4CA222();
			}
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (unk_0x70E57E9927B6BA58(&(Global_23831.f_5553[iVar1 /*4*/])) != unk_0x70E57E9927B6BA58("PREV"))
				{
					unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x330108B080A2132F(iVar1);
					func_9(&(Global_23831.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && unk_0x70E57E9927B6BA58(&(Global_23831.f_5553[iVar2 /*4*/])) == unk_0x70E57E9927B6BA58("PREV"))
					{
						func_9(&(Global_23831.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23831.f_5610[iVar1] == -1)
					{
						func_8(&(Global_23831.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23831.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x882AEFD55B8D51FB(&(Global_23831.f_5553[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xBD34A69071611974(iVar3, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(iVar3);
						}
						unk_0xCFAD3D478C87321A();
					}
					if (unk_0x761778199FE1211C())
					{
						if (Global_23831.f_5625[iVar1] != 365 && BitTest(Global_23831.f_5655, iVar1))
						{
							unk_0x557F1E2300EF1A3E(1);
							unk_0x330108B080A2132F(Global_23831.f_5625[iVar1]);
						}
						else
						{
							unk_0x557F1E2300EF1A3E(0);
							unk_0x330108B080A2132F(365);
						}
					}
					unk_0xE6B753D52F4CA222();
				}
				iVar1++;
			}
			if (unk_0x70E57E9927B6BA58(&(Global_4541740.f_16)) != unk_0x70E57E9927B6BA58(""))
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x330108B080A2132F(Global_23831.f_5326);
				func_9(&Global_4541740);
				if (Global_4541740.f_20 == -1)
				{
					func_8(&(Global_4541740.f_16));
				}
				else
				{
					iVar4 = Global_23831.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x882AEFD55B8D51FB(&(Global_4541740.f_16));
					if (bParam5)
					{
						unk_0xBD34A69071611974(iVar4, 70);
					}
					else
					{
						unk_0x511D14ED2DA887E1(iVar4);
					}
					unk_0xCFAD3D478C87321A();
				}
				unk_0xE6B753D52F4CA222();
			}
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(80);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23831.f_5685)
			{
				unk_0x330108B080A2132F(1);
			}
			else
			{
				unk_0x330108B080A2132F(0);
			}
			unk_0xE6B753D52F4CA222();
			Global_23831.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23831.f_5326)
		{
			if (Global_23831.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x330108B080A2132F(iVar1);
					unk_0x882AEFD55B8D51FB(&(Global_23831.f_5553[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xBD34A69071611974(iParam2, 70);
					}
					else
					{
						unk_0x511D14ED2DA887E1(iParam2);
					}
					unk_0xCFAD3D478C87321A();
					unk_0xE6B753D52F4CA222();
				}
			}
			iVar1++;
		}
		if (Global_4541740.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x330108B080A2132F(iVar1);
				unk_0x882AEFD55B8D51FB(&(Global_4541740.f_16));
				if (bParam5)
				{
					unk_0xBD34A69071611974(iParam2, 70);
				}
				else
				{
					unk_0x511D14ED2DA887E1(iParam2);
				}
				unk_0xCFAD3D478C87321A();
				unk_0xE6B753D52F4CA222();
			}
		}
		unk_0x9A122D542F2BB60E(76, 66);
		unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23831.f_9116)
			{
				unk_0x36A472841BBC9D4A(15, 0f, -0,0375f);
				Global_23831.f_9116 = 1;
			}
		}
		else if (Global_23831.f_9116)
		{
			unk_0xDCFF86AAD108A201(15);
			Global_23831.f_9116 = 0;
		}
		unk_0x90B531766063C5CD();
		if (Global_23831.f_5658)
		{
			unk_0x9A122D542F2BB60E(82, 66);
			unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
			unk_0x6D16B99FEB0AFFF1(Global_23831.f_6263[iVar0 /*10*/], Global_23831.f_5656, Global_23831.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x90B531766063C5CD();
		}
		else
		{
			unk_0xA91A4C18A2DB01BD(Global_23831.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_8(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_9(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

bool func_10(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_13(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1574926;
}

int func_13(var uParam0)
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

int func_14()
{
	struct<3> Var0;
	
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	if (func_15())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x78C4EBB0251847E2(&Var0);
		if (Global_20875 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_15()
{
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_16(bool bParam0, bool bParam1)
{
	if (Global_2672855.f_1728.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9390801B06EE998F() || (func_18(8, -1) && func_17() != 65)) || (unk_0x05AA183DA1344935() != 0 && !bParam1)) || (unk_0x3555462DB47B7AB1() && !bParam0)) || unk_0x2B8BAF9BA2A3D36B()) || Global_79650) || Global_23831.f_9115) || unk_0xB11671B812399BA2()) || Global_101585.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_17()
{
	return Global_1575011;
}

var func_18(int iParam0, int iParam1)
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

int func_19(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x76CD105BCAC6EB9F() && unk_0xE8DB952A4BA8F328())
		{
			iParam2 = unk_0xF25E5B7C1279A85B();
		}
	}
	StringCopy(&cVar0, unk_0x1AF90EB93E0012D6(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x70E57E9927B6BA58(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23831.f_6324[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23831.f_6324[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23831.f_6324[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_20(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xE934399D6F2C3AC5(2, iParam0, 1);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_23831.f_5655), Global_23831.f_5326);
	}
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = iParam0;
	Global_23831.f_5640[Global_23831.f_5326] = 32;
	Global_23831.f_5326++;
}

void func_21(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xF761D79754BC3043(2, iParam0, 1);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	unk_0x8744D2E3FC95740E(&(Global_23831.f_5655), Global_23831.f_5326);
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = 365;
	Global_23831.f_5640[Global_23831.f_5326] = iParam0;
	Global_23831.f_5326++;
}

void func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_23831.f_5326 = 0;
	Global_23831.f_5327 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23831.f_5553[iVar0 /*4*/]), "", 16);
		Global_23831.f_5610[iVar0] = -1;
		Global_23831.f_5625[iVar0] = 365;
		Global_23831.f_5640[iVar0] = 32;
		iVar0++;
	}
	Global_23831.f_5655 = 0;
	StringCopy(&(Global_4541740.f_16), "", 16);
	Global_4541740.f_20 = -1;
	if (unk_0x761778199FE1211C())
	{
		if (!func_19(&iVar1, 0, iParam0))
		{
			return;
		}
		if (unk_0xA0C7B98BCF1EEF9E(Global_23831.f_6263[iVar1 /*10*/]))
		{
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			unk_0x557F1E2300EF1A3E(0);
			unk_0xE6B753D52F4CA222();
		}
	}
}

bool func_23(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_19(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23831.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_6238[iVar0 /*4*/])))
	{
		unk_0xF2CB0224D3BE0B42(&(Global_23831.f_6238[iVar0 /*4*/]), 9);
		Global_23831.f_6231[iVar0] = 1;
		if (!unk_0xCC2EFE4B1D0EE422(&(Global_23831.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xD0D00ED689D6CA81("CommonMenu", 0);
	unk_0xD0D00ED689D6CA81("Shared", 1);
	if (!unk_0x38D063D8CF6D1967("Shared"))
	{
		bVar1 = false;
	}
	Global_23831.f_6217[iVar0] = 1;
	if (!unk_0x38D063D8CF6D1967("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xD0D00ED689D6CA81("MPShopSale", 0);
		Global_23831.f_6224[iVar0] = 1;
		if (!unk_0x38D063D8CF6D1967("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23831.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_24(&(Global_23831.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_24(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				*uParam0 = unk_0x8DE4F68A9728925E(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
					{
						uParam0->f_8 = unk_0x1DD05E817C89C737();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1DD05E817C89C737();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				uParam0->f_8 = unk_0x1DD05E817C89C737();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_25()
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	float fVar9;
	
	if (func_168())
	{
		if (!unk_0xA0C7B98BCF1EEF9E(Local_135.f_62))
		{
			Local_135.f_62 = unk_0x8DE4F68A9728925E(func_39());
			return;
		}
		func_38("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_38("SET_DETONATE_METER_IS_VISIBLE", 0);
		if (Local_135.f_8 > -1 || BitTest(Local_135.f_5, 3))
		{
			func_38("SET_RETICLE_IS_VISIBLE", 0);
		}
		else
		{
			func_38("SET_RETICLE_IS_VISIBLE", 1);
		}
		func_38("SET_HEADING_METER_IS_VISIBLE", 1);
		func_38("SET_ZOOM_METER_IS_VISIBLE", 1);
		func_38("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
		func_38("SET_MISSILE_METER_IS_VISIBLE", 1);
		func_38("SET_INFO_LIST_IS_VISIBLE", 0);
		func_38("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_38("SET_DETONATE_METER_IS_VISIBLE", 0);
		func_38("SET_BOOST_METER_IS_VISIBLE", 0);
		func_38("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_38("SET_WARNING_IS_VISIBLE", 0);
		func_37(0);
		func_36(0);
		func_34();
		if (unk_0x78411E34CF90EA8C(Local_135.f_61))
		{
			Var0 = { unk_0x9DDBEF363FADFA4C(Local_135.f_61, 2) };
			func_33(system::round(-Var0.f_2));
		}
		func_32(Local_135.f_33);
	}
	else if (unk_0x78411E34CF90EA8C(Local_135.f_61))
	{
		Var1 = { unk_0x9DDBEF363FADFA4C(Local_135.f_61, 2) };
		fVar2 = Var1.f_2;
		if (unk_0xFC8BFE4B41177C22(func_31()))
		{
			if (!unk_0x1C2F771CDC87A3A5(func_31(), 0))
			{
				Var8 = { unk_0xD1A6A821F5AC81DB(func_31(), 1) };
				fVar4 = unk_0xCFC0C995455A6204(func_31());
			}
		}
		while (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		while (fVar2 > 360f)
		{
			fVar2 = (fVar2 - 360f);
		}
		while (fVar4 < 0f)
		{
			fVar4 = (fVar4 + 360f);
		}
		while (fVar4 > 360f)
		{
			fVar4 = (fVar4 - 360f);
		}
		fVar7 = fVar2;
		func_26(&fVar9);
		fVar5 = (fVar4 - fVar9);
		fVar6 = (fVar4 + fVar9);
		if (fVar7 < fVar5 && (fVar7 + 360f) <= fVar6)
		{
			fVar7 = (fVar7 + 360f);
		}
		if (fVar7 > fVar6 && (fVar7 - 360f) >= fVar5)
		{
			fVar7 = (fVar7 - 360f);
		}
		fVar3 = ((fVar7 - fVar5) / (fVar6 - fVar5));
		if (fVar3 == 2f)
		{
			fVar3 = 0f;
		}
		else if (fVar3 == -1f)
		{
			fVar3 = 1f;
		}
		else if (fVar3 < 0f && fVar3 >= -0,5f)
		{
			fVar3 = 0f;
		}
		else if (fVar3 < 0f && fVar3 > -1f)
		{
			fVar3 = 1f;
		}
		else if (fVar3 > 1,5f && fVar3 < 2f)
		{
			fVar3 = 0f;
		}
		else if (fVar3 > 2f || fVar3 < -1f)
		{
			fVar3 = 0,5f;
		}
		unk_0x88F483FBD433696A(Local_135.f_62, "SET_ALT_FOV_HEADING");
		unk_0x74BF156C860580D4(Var8.f_2);
		unk_0x74BF156C860580D4(fVar3);
		unk_0x74BF156C860580D4(fVar2);
		unk_0xE6B753D52F4CA222();
		unk_0x88F483FBD433696A(Local_135.f_62, "SET_CAM_LOGO");
		unk_0x330108B080A2132F(0);
		unk_0xE6B753D52F4CA222();
	}
	unk_0xA4F67CEB594AE064(1);
	unk_0xA91A4C18A2DB01BD(Local_135.f_62, 255, 255, 255, 0, 0);
}

void func_26(var uParam0)
{
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		*uParam0 = 360f;
	}
	else
	{
		*uParam0 = 180f;
	}
}

int func_27(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0x4B423FAA24E8ABF0(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_30())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_30())
			{
				return func_28(Global_2657971[iParam0 /*465*/].f_322.f_8) == 12;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
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
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
	}
	return -1;
}

int func_29(int iParam0, bool bParam1, bool bParam2)
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

int func_30()
{
	return -1;
}

int func_31()
{
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (unk_0xFC8BFE4B41177C22(Global_1663307))
		{
			return Global_1663307;
		}
		if (Global_1845120 != -1)
		{
			if (unk_0xFC8BFE4B41177C22(Global_1962036[Global_1845120]))
			{
				return Global_1962036[Global_1845120];
			}
		}
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		return unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	}
	return -1;
}

void func_32(int iParam0)
{
	unk_0x88F483FBD433696A(Local_135.f_62, "SET_MISSILE_PERCENTAGE");
	unk_0x330108B080A2132F(uParam0);
	unk_0xE6B753D52F4CA222();
}

void func_33(int iParam0)
{
	unk_0x88F483FBD433696A(Local_135.f_62, "SET_HEADING");
	unk_0x330108B080A2132F(iParam0);
	unk_0xE6B753D52F4CA222();
}

void func_34()
{
	if (Local_135.f_59 <= 60f && Local_135.f_59 > 55f)
	{
		func_35(0);
	}
	else if (Local_135.f_59 <= 55f && Local_135.f_59 > 50f)
	{
		func_35(1);
	}
	else if (Local_135.f_59 <= 50f && Local_135.f_59 > 45f)
	{
		func_35(2);
	}
	else if (Local_135.f_59 <= 45f && Local_135.f_59 > 40f)
	{
		func_35(3);
	}
	else if (Local_135.f_59 <= 40f && Local_135.f_59 > 30f)
	{
		func_35(4);
	}
}

void func_35(int iParam0)
{
	unk_0x88F483FBD433696A(Local_135.f_62, "SET_ZOOM");
	unk_0x330108B080A2132F(iParam0);
	unk_0xE6B753D52F4CA222();
}

void func_36(int iParam0)
{
	unk_0x88F483FBD433696A(Local_135.f_62, "SET_RETICLE_STATE");
	unk_0x330108B080A2132F(iParam0);
	unk_0xE6B753D52F4CA222();
}

void func_37(int iParam0)
{
	unk_0x88F483FBD433696A(Local_135.f_62, "SET_RETICLE_ON_TARGET");
	unk_0x557F1E2300EF1A3E(iParam0);
	unk_0xE6B753D52F4CA222();
}

void func_38(char* sParam0, int iParam1)
{
	unk_0x88F483FBD433696A(Local_135.f_62, sParam0);
	unk_0x557F1E2300EF1A3E(iParam1);
	unk_0xE6B753D52F4CA222();
}

char* func_39()
{
	if (func_168())
	{
		return "DRONE_CAM";
	}
	else
	{
		return "heli_cam";
	}
	return "";
}

void func_40(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_45(0))
		{
			func_41(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_41(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_44())
		{
			func_43(1, 1);
		}
		else
		{
			func_43(0, 0);
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
	if (!func_42())
	{
		Global_20930.f_1 = 3;
	}
}

int func_42()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_43(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_45(0))
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

bool func_44()
{
	return BitTest(Global_1956920, 5);
}

int func_45(int iParam0)
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

bool func_46()
{
	return BitTest(Global_1956920, 19);
}

void func_47()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 4);
}

void func_48()
{
	int iVar0;
	bool bVar1;
	var uVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	
	if (!func_168())
	{
		return;
	}
	bVar1 = false;
	while (bVar1 <= 5)
	{
		if (((unk_0x78411E34CF90EA8C(Local_135.f_61) && unk_0x8DE2438443E6A145(Local_135.f_61)) && func_49(Local_135.f_84[bVar1])) && func_49(func_31()))
		{
			Var6 = { unk_0xA452B06E281A9014(Local_135.f_61) };
			Var7 = { unk_0xD1A6A821F5AC81DB(Local_135.f_84[bVar1], 1) };
			switch (Local_135.f_10[bVar1])
			{
				case 0:
					Local_135.f_98[bVar1] = unk_0x120E577522852984(Var6, Var7, 511, 0, 7);
					if (Local_135.f_98[bVar1] != 0)
					{
						Local_135.f_10[bVar1] = 1;
					}
					break;
				
				case 1:
					iVar5 = unk_0x0E7DD1EBCA8D2DE3(Local_135.f_98[bVar1], &iVar0, &Var3, &uVar2, &iVar4);
					if (iVar5 == 2)
					{
						if (iVar0 == 0)
						{
							Local_135.f_17[bVar1] = 1;
							Var3 = { 0f, 0f, 0f };
							if (BitTest(Local_135.f_7, bVar1))
							{
								unk_0x8744D2E3FC95740E(&(Local_135.f_7), bVar1);
							}
						}
						else
						{
							Local_135.f_17[bVar1] = 2;
							if (BitTest(Local_135.f_7, bVar1))
							{
								unk_0x8744D2E3FC95740E(&(Local_135.f_7), bVar1);
							}
							if (unk_0xFC8BFE4B41177C22(iVar4))
							{
								if (Local_135.f_84[bVar1] == iVar4)
								{
									if (!BitTest(Local_135.f_7, bVar1))
									{
										unk_0x0B0C9A0F9AAEB7F0(&(Local_135.f_7), bVar1);
									}
								}
							}
							Local_135.f_98[bVar1] = 0;
							Local_135.f_10[bVar1] = 0;
						}
					}
					else if (iVar5 == 0)
					{
						Local_135.f_10[bVar1] = 0;
					}
					break;
			}
		}
		else if (BitTest(Local_135.f_7, bVar1))
		{
			unk_0x8744D2E3FC95740E(&(Local_135.f_7), bVar1);
		}
		bVar1++;
	}
}

int func_49(int iParam0)
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

void func_50()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	struct<3> Var14;
	struct<3> Var15;
	
	if (!func_168())
	{
		return;
	}
	iVar0 = 208;
	if (unk_0xAE231F549813BBDF(0))
	{
		iVar0 = 237;
	}
	if ((unk_0x6D05C5731A838CB3(2, iVar0) || unk_0x4465D55576678706(2, iVar0)) || BitTest(Local_135.f_5, 5))
	{
		iVar1 = 250;
		uVar2 = func_60();
		if (Local_135.f_8 > -1)
		{
			if (!BitTest(Local_135.f_5, 3))
			{
				if (!func_59(&(Local_135.f_115)))
				{
					func_58(&(Local_135.f_115), 0, 0);
					Local_135.f_31 = 0;
					unk_0x0B0C9A0F9AAEB7F0(&(Local_135.f_5), 5);
				}
				else if (func_57(&(Local_135.f_115), 300, 0) || Local_135.f_31 == 0)
				{
					if (Local_135.f_31 < 0 || Local_135.f_31 >= 6)
					{
						Local_135.f_31 = 0;
					}
					if (unk_0xFC8BFE4B41177C22(Local_135.f_84[Local_135.f_31]) && !unk_0x1C2F771CDC87A3A5(Local_135.f_84[Local_135.f_31], 0))
					{
						iVar3 = unk_0x365DC1E8054AF31A(func_31(), func_56());
						if (iVar3 != -1)
						{
							Var4 = { unk_0x75DF72FC74EED046(func_31(), iVar3) + func_55(Local_135.f_31) };
							Var5 = { unk_0x958849BB56EC0F07(2) };
							Var6 = { (-system::sin(Var5.f_2) * system::cos(Var5.f_0)), (system::cos(Var5.f_2) * system::cos(Var5.f_0)), system::sin(Var5.f_0) };
							Var7 = { 1f, 1f, 1f };
							Var8 = { Var4 + Var6 * Var7 };
							unk_0x5733B7E88AFB2E3B(Var4, Var8, iVar1, 1, func_54(0), unk_0x4A8C381C258A124D(), 1, 1, -1082130432, uVar2, 0, 0, Local_135.f_84[Local_135.f_31], 1, 0, 1, 0);
							unk_0xF37CDE164C892195(-1, "Fire", Var4, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
							Local_135.f_32++;
							func_53(&(Local_135.f_115), 0, 0);
						}
					}
					if (Local_135.f_32 == Local_135.f_8)
					{
						Local_135.f_31 = 0;
						Local_135.f_33 = 0;
						Local_135.f_32 = -1;
						unk_0x0B0C9A0F9AAEB7F0(&(Local_135.f_5), 3);
						unk_0x8744D2E3FC95740E(&(Local_135.f_5), 5);
						func_58(&(Local_135.f_119), 0, 0);
						func_52(&(Local_135.f_115));
					}
					Local_135.f_31++;
				}
			}
		}
		else if (!BitTest(Local_135.f_5, 1))
		{
			if (Local_135.f_31 < 0 || Local_135.f_31 >= 6)
			{
				Local_135.f_31 = 0;
			}
			iVar9 = unk_0x365DC1E8054AF31A(func_31(), func_56());
			if (iVar9 != -1)
			{
				Var10 = { unk_0x75DF72FC74EED046(func_31(), iVar9) + func_55(Local_135.f_31) };
				Var11 = { unk_0x02AF3EA0F67D2329() };
				Var12 = { unk_0x958849BB56EC0F07(2) };
				Var13 = { (-system::sin(Var12.f_2) * system::cos(Var12.f_0)), (system::cos(Var12.f_2) * system::cos(Var12.f_0)), system::sin(Var12.f_0) };
				Var14 = { 10f, 10f, 10f };
				if (!func_51(Local_135.f_56))
				{
					Var14.f_0 = unk_0xED977E2AE2CB16EE(Local_135.f_56, Var11, 0);
					Var14.f_1 = unk_0xED977E2AE2CB16EE(Local_135.f_56, Var11, 0);
					Var14.f_2 = unk_0xED977E2AE2CB16EE(Local_135.f_56, Var11, 0);
				}
				Var15 = { Var11 + Var13 * Var14 };
				unk_0x5733B7E88AFB2E3B(Var10, Var15, iVar1, 1, func_54(1), unk_0x4A8C381C258A124D(), 1, 1, -1082130432, uVar2, 0, 0, 0, 1, 0, 1, 0);
				unk_0xF37CDE164C892195(-1, "Fire", Var10, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_135.f_5), true);
				Local_135.f_33 = 0;
				func_58(&(Local_135.f_134), 0, 0);
				Local_135.f_31++;
			}
		}
	}
}

int func_51(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_52(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_53(var uParam0, bool bParam1, bool bParam2)
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

int func_54(int iParam0)
{
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (iParam0 == 0)
		{
			return joaat("vehicle_weapon_hacker_missile_homing");
		}
		else
		{
			return joaat("vehicle_weapon_hacker_missile");
		}
	}
	return 0;
}

Vector3 func_55(int iParam0)
{
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		switch (iParam0)
		{
			case 0:
				return -0,6f, -0,6f, 0,9f;
			
			case 1:
				return -0,3f, -0,3f, 0,8f;
			
			case 2:
				return -0,1f, -0,1f, 0,8f;
			
			case 3:
				return 0,1f, 0,1f, 0,8f;
			
			case 4:
				return 0,3f, 0,3f, 0,8f;
			
			case 5:
				return 0,6f, 0,6f, 0,9f;
			
			case 6:
				return 0f, 0f, 0,8f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_56()
{
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		return "misc_c";
	}
	return "";
}

int func_57(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_58(uParam0, bParam2, 0);
	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_58(var uParam0, bool bParam1, bool bParam2)
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

bool func_59(var uParam0)
{
	return uParam0->f_1;
}

int func_60()
{
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		return Global_1663307;
	}
	return -1;
}

void func_61()
{
	int iVar0;
	int iVar1;
	
	if (!func_168())
	{
		return;
	}
	if (BitTest(Local_135.f_5, 3))
	{
		if (func_59(&(Local_135.f_119)))
		{
			if (!func_57(&(Local_135.f_119), 5000, 0))
			{
				iVar0 = (100 * unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Local_135.f_119)));
				Local_135.f_33 = (iVar0 / 5000);
				func_89();
				return;
			}
			else
			{
				func_52(&(Local_135.f_119));
				unk_0x8744D2E3FC95740E(&(Local_135.f_5), 3);
				Local_135.f_32 = -1;
				Local_135.f_33 = 100;
			}
		}
	}
	if (BitTest(Local_135.f_5, 1))
	{
		if (func_59(&(Local_135.f_134)))
		{
			if (!func_57(&(Local_135.f_134), 1500, 0))
			{
				iVar1 = (100 * unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Local_135.f_134)));
				Local_135.f_33 = (iVar1 / 1500);
				func_89();
				return;
			}
			else
			{
				func_52(&(Local_135.f_134));
				unk_0x8744D2E3FC95740E(&(Local_135.f_5), true);
				Local_135.f_33 = 100;
			}
		}
	}
	if (!BitTest(Local_135.f_5, 1) && !BitTest(Local_135.f_5, 5))
	{
		switch (Local_135.f_111)
		{
			case 0:
				func_86();
				break;
			
			case 1:
				func_76();
				break;
		}
		func_69();
	}
	func_63();
	func_62();
}

void func_62()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	
	if ((unk_0x78411E34CF90EA8C(Local_135.f_61) && unk_0x8DE2438443E6A145(Local_135.f_61)) && func_49(func_31()))
	{
		Var4 = { unk_0x02AF3EA0F67D2329() };
		Var5 = { unk_0x958849BB56EC0F07(2) };
		Var6 = { (-system::sin(Var5.f_2) * system::cos(Var5.f_0)), (system::cos(Var5.f_2) * system::cos(Var5.f_0)), system::sin(Var5.f_0) };
		Var7 = { 300f, 300f, 300f };
		Var8 = { Var4 + Var6 * Var7 };
		Var9 = { Var4 + Var6 * Vector(1f, 1f, 1f) };
		switch (Local_135.f_27)
		{
			case 0:
				Local_135.f_106 = unk_0x120E577522852984(Var9, Var8, 511, func_31(), 7);
				if (Local_135.f_106 != 0)
				{
					Local_135.f_27 = 1;
				}
				break;
			
			case 1:
				iVar3 = unk_0x0E7DD1EBCA8D2DE3(Local_135.f_106, &iVar0, &(Local_135.f_56), &uVar1, &uVar2);
				if (iVar3 == 2)
				{
					if (iVar0 == 0)
					{
						Local_135.f_26 = 1;
						Local_135.f_56 = { 300f, 300f, 300f };
					}
					else
					{
						Local_135.f_26 = 2;
						Local_135.f_27 = 0;
					}
				}
				else if (iVar3 == 0)
				{
					Local_135.f_27 = 0;
				}
				break;
			}
	}
}

void func_63()
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 5)
	{
		func_64(Local_135.f_84[bVar0], 0, bVar0);
		bVar0++;
	}
}

void func_64(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0x38D063D8CF6D1967("helicopterhud"))
	{
		unk_0xA4F67CEB594AE064(1);
		if (Local_135.f_8 > -1)
		{
			if (func_49(iParam0))
			{
				unk_0x2F8A75C70AF54208(unk_0xD1A6A821F5AC81DB(iParam0, 1), &fVar1, &fVar2);
				fVar0 = 0,03f;
				if (((fVar1 > 0,1f && fVar1 < 0,9f) && fVar2 > 0,1f) && fVar2 < 0,9f)
				{
					if (unk_0x0101C509A6E67F99(iParam0))
					{
						iVar7 = unk_0xBD545F8729E9F413(iParam0);
						if (unk_0x501EBB0523078750(iVar7))
						{
							iVar8 = unk_0x1C1C92A1CBAE364B(iVar7);
							if (func_29(iVar8, 1, 1))
							{
								if (func_68(iVar8, -1))
								{
									unk_0xD501B0D4146A6A30(unk_0x6EF03BE64E058E2F(iVar7, 0), 2);
								}
							}
						}
					}
					else if (unk_0x55B80B6E7AB61270(iParam0))
					{
						iVar9 = unk_0xFD5C5BBD1FE92BB7(unk_0xE93EDE86BBB66532(iParam0), -1, 0);
						if (unk_0xFC8BFE4B41177C22(iVar9))
						{
							if (unk_0x501EBB0523078750(iVar9))
							{
								iVar10 = unk_0x1C1C92A1CBAE364B(iVar9);
								if (func_29(iVar10, 1, 1))
								{
									unk_0xD501B0D4146A6A30(unk_0xE93EDE86BBB66532(iParam0), 2);
								}
							}
						}
					}
					if (!BitTest(Local_135.f_48, bParam2))
					{
						if ((unk_0x9F0C06CFBACDD6A1(Local_135.f_34[bParam2]) && Local_135.f_34[bParam2] == -1) && !func_67())
						{
							Local_135.f_34[bParam2] = unk_0xCA369FBC0DE29517();
							unk_0xBF3D28CA44F3BE2D(Local_135.f_34[bParam2], "VULKAN_LOCK_ON_AMBER", 0, 1);
							func_58(&(Local_135.f_136[bParam2 /*2*/]), 0, 0);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_135.f_48), bParam2);
						}
					}
					else if (!BitTest(Local_135.f_48, bParam2 + 6))
					{
						if (func_59(&(Local_135.f_136[bParam2 /*2*/])))
						{
							if (func_57(&(Local_135.f_136[bParam2 /*2*/]), 1000, 0))
							{
								func_66(bParam2, 0);
								if (unk_0x9F0C06CFBACDD6A1(Local_135.f_41[bParam2]) && Local_135.f_41[bParam2] == -1)
								{
									Local_135.f_41[bParam2] = unk_0xCA369FBC0DE29517();
									unk_0xBF3D28CA44F3BE2D(Local_135.f_41[bParam2], "VULKAN_LOCK_ON_RED", 0, 1);
									func_58(&(Local_135.f_149[bParam2 /*2*/]), 0, 0);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_135.f_48), bParam2 + 6);
								}
							}
						}
					}
					else if (func_59(&(Local_135.f_149[bParam2 /*2*/])))
					{
						if (func_57(&(Local_135.f_149[bParam2 /*2*/]), 700, 0))
						{
							func_65(bParam2, 0);
						}
					}
					unk_0xB56F2B356187E2E0(unk_0xD1A6A821F5AC81DB(iParam0, 1), 0);
					if (!BitTest(Local_135.f_48, bParam2 + 6))
					{
						unk_0xA306E6FD2A6558E6(15, &uVar3, &uVar4, &uVar5, &uVar6);
					}
					else
					{
						unk_0xA306E6FD2A6558E6(6, &uVar3, &uVar4, &uVar5, &uVar6);
					}
					if (!bParam1)
					{
						unk_0xFFA2B456A81EA1EB("helicopterhud", "hud_corner", (-fVar0 * 0,6f), -fVar0, (fVar0 * 1,5f), (fVar0 * 1,5f), 0f, uVar3, uVar4, uVar5, uVar6, 1, 0);
					}
					unk_0xFFA2B456A81EA1EB("helicopterhud", "hud_corner", (fVar0 * 0,6f), -fVar0, (fVar0 * 1,5f), (fVar0 * 1,5f), 90f, uVar3, uVar4, uVar5, uVar6, 1, 0);
					unk_0xFFA2B456A81EA1EB("helicopterhud", "hud_corner", (-fVar0 * 0,6f), fVar0, (fVar0 * 1,5f), (fVar0 * 1,5f), 270f, uVar3, uVar4, uVar5, uVar6, 1, 0);
					unk_0xFFA2B456A81EA1EB("helicopterhud", "hud_corner", (fVar0 * 0,6f), fVar0, (fVar0 * 1,5f), (fVar0 * 1,5f), 180f, uVar3, uVar4, uVar5, uVar6, 1, 0);
					unk_0xCE3DA51E28972A56();
				}
				else
				{
					func_66(bParam2, 1);
					func_65(bParam2, 1);
				}
			}
			else
			{
				func_66(bParam2, 1);
				func_65(bParam2, 1);
			}
		}
		else
		{
			func_66(bParam2, 1);
			func_65(bParam2, 1);
		}
	}
}

void func_65(bool bParam0, bool bParam1)
{
	if (BitTest(Local_135.f_48, bParam0 + 6))
	{
		if (!unk_0x9F0C06CFBACDD6A1(Local_135.f_41[bParam0]))
		{
			unk_0x8E4825CCACA34B58(Local_135.f_41[bParam0]);
			unk_0x394AFAC073E1F277(Local_135.f_41[bParam0]);
		}
		Local_135.f_41[bParam0] = -1;
		if (bParam1)
		{
			unk_0x8744D2E3FC95740E(&(Local_135.f_48), bParam0 + 6);
		}
		func_52(&(Local_135.f_149[bParam0 /*2*/]));
	}
}

void func_66(bool bParam0, bool bParam1)
{
	if (BitTest(Local_135.f_48, bParam0))
	{
		if (!unk_0x9F0C06CFBACDD6A1(Local_135.f_34[bParam0]))
		{
			unk_0x8E4825CCACA34B58(Local_135.f_34[bParam0]);
			unk_0x394AFAC073E1F277(Local_135.f_34[bParam0]);
		}
		Local_135.f_34[bParam0] = -1;
		if (bParam1)
		{
			unk_0x8744D2E3FC95740E(&(Local_135.f_48), bParam0);
		}
		func_52(&(Local_135.f_136[bParam0 /*2*/]));
	}
}

int func_67()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!unk_0x9F0C06CFBACDD6A1(Local_135.f_34[iVar0]) || !unk_0x9F0C06CFBACDD6A1(Local_135.f_41[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_68(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_29(iParam0, 1, 1))
	{
		if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iParam0), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iParam0), 0);
			if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
			{
				if (unk_0x4A8C381C258A124D() == unk_0xFD5C5BBD1FE92BB7(uVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_69()
{
	bool bVar0;
	int iVar1;
	
	iVar1 = -1;
	bVar0 = false;
	while (bVar0 <= 5)
	{
		if (unk_0xFC8BFE4B41177C22(Local_135.f_84[bVar0]))
		{
			if (unk_0xFC8BFE4B41177C22(Local_135.f_84[bVar0]))
			{
				if (!BitTest(Local_135.f_7, bVar0))
				{
					if (func_59(&(Local_135.f_121[bVar0 /*2*/])))
					{
						if (func_57(&(Local_135.f_121[bVar0 /*2*/]), 1000, 0))
						{
							Local_135.f_84[bVar0] = -1;
							if (Local_135.f_8 > -1)
							{
								Local_135.f_17[bVar0] = 0;
								func_52(&(Local_135.f_121[bVar0 /*2*/]));
								Local_135.f_8 = (Local_135.f_8 - 1);
							}
						}
					}
					else
					{
						func_58(&(Local_135.f_121[bVar0 /*2*/]), 0, 0);
					}
				}
				else
				{
					func_52(&(Local_135.f_121[bVar0 /*2*/]));
				}
				if ((!func_75(Local_135.f_84[bVar0]) || !unk_0xFC8BFE4B41177C22(Local_135.f_84[bVar0])) || !func_70(Local_135.f_84[bVar0]))
				{
					if (!unk_0xFC8BFE4B41177C22(Local_135.f_84[bVar0]))
					{
					}
					if (!func_75(Local_135.f_84[bVar0]))
					{
					}
					Local_135.f_84[bVar0] = -1;
					if (Local_135.f_8 > -1)
					{
						Local_135.f_17[bVar0] = 0;
						func_52(&(Local_135.f_121[bVar0 /*2*/]));
						Local_135.f_8 = (Local_135.f_8 - 1);
					}
				}
			}
		}
		if (unk_0xFC8BFE4B41177C22(Local_135.f_84[bVar0]))
		{
			iVar1++;
		}
		bVar0++;
	}
	if (Local_135.f_8 != iVar1)
	{
		Local_135.f_8 = iVar1;
	}
}

int func_70(int iParam0)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x55B80B6E7AB61270(iParam0))
		{
			if (func_74(unk_0xE93EDE86BBB66532(iParam0), 0, 0))
			{
				return 1;
			}
			if (func_73(unk_0x4B423FAA24E8ABF0(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0101C509A6E67F99(iParam0))
		{
			iVar0 = unk_0xBD545F8729E9F413(iParam0);
			if (unk_0x501EBB0523078750(iVar0))
			{
				if (!func_71(unk_0x1C1C92A1CBAE364B(iVar0), unk_0x259BE71D8A81D4FA()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_72(iParam0);
	if (func_13(iVar0))
	{
		if (iVar0 == func_72(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_72(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_30();
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
		
		case joaat("polgauntlet"):
		case joaat("pranger"):
		case joaat("police5"):
		case 1249425552:
		case 1452003510:
		case 1737348074:
		case -1628000569:
		case -773802025:
			return 1;
			break;
	}
	return 0;
}

int func_74(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x2EEC0612337D20CE(iParam0) + 1;
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0xC39AE5D390581AD5(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0xFD5C5BBD1FE92BB7(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0xFC8BFE4B41177C22(iVar2))
					{
						if (unk_0x501EBB0523078750(iVar2))
						{
							if (!bParam2 && func_71(unk_0x1C1C92A1CBAE364B(iVar2), unk_0x259BE71D8A81D4FA()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!unk_0x4FAFF4BCB7633475(iVar2))
				{
					if (unk_0x501EBB0523078750(iVar2))
					{
						if (!bParam2 && func_71(unk_0x1C1C92A1CBAE364B(iVar2), unk_0x259BE71D8A81D4FA()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_75(int iParam0)
{
	float fVar0;
	float fVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		unk_0x2F8A75C70AF54208(unk_0xD1A6A821F5AC81DB(iParam0, 1), &fVar0, &fVar1);
		if (((fVar0 < 0,1f || fVar0 > 0,9f) || fVar1 < 0,1f) || fVar1 > 0,9f)
		{
			return 0;
		}
	}
	return 1;
}

void func_76()
{
	if (Local_135.f_28 < 0 || Local_135.f_28 >= 20)
	{
		Local_135.f_28 = 0;
	}
	else if (unk_0xFC8BFE4B41177C22(Local_135.f_63[Local_135.f_28]) && !unk_0x1C2F771CDC87A3A5(Local_135.f_63[Local_135.f_28], 0))
	{
		func_84(Local_135.f_63[Local_135.f_28]);
		if (func_57(&(Local_135.f_117), 1000, 0))
		{
			if (Local_135.f_112 == 2)
			{
				if (BitTest(Local_135.f_5, 0))
				{
					if (Local_135.f_8 < 5)
					{
						if (func_83(Local_135.f_63[Local_135.f_28]))
						{
							Local_135.f_63[Local_135.f_28] = -1;
							unk_0x8744D2E3FC95740E(&(Local_135.f_5), false);
							func_52(&(Local_135.f_117));
							Local_135.f_28++;
						}
					}
					else
					{
						if (func_80(Local_135.f_63[Local_135.f_28]))
						{
							func_77(Local_135.f_63[Local_135.f_28]);
						}
						Local_135.f_63[Local_135.f_28] = -1;
						unk_0x8744D2E3FC95740E(&(Local_135.f_5), false);
						Local_135.f_25 = 0;
						func_52(&(Local_135.f_117));
						Local_135.f_28++;
					}
				}
				else
				{
					Local_135.f_25 = 0;
					Local_135.f_63[Local_135.f_28] = -1;
					unk_0x8744D2E3FC95740E(&(Local_135.f_5), false);
					func_53(&(Local_135.f_117), 0, 0);
					Local_135.f_28++;
				}
			}
		}
	}
	else
	{
		Local_135.f_63[Local_135.f_28] = -1;
		Local_135.f_25 = 0;
		func_52(&(Local_135.f_117));
		Local_135.f_28++;
	}
	if (Local_135.f_28 == 20)
	{
		Local_135.f_111 = 0;
		Local_135.f_25 = 0;
		func_52(&(Local_135.f_117));
		Local_135.f_28 = 0;
	}
}

void func_77(int iParam0)
{
	if (func_78() != -1 && func_78() < 6)
	{
		if (unk_0xFC8BFE4B41177C22(Local_135.f_84[func_78()]) && unk_0xFC8BFE4B41177C22(iParam0))
		{
			Local_135.f_84[func_78()] = iParam0;
		}
	}
}

int func_78()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	
	iVar0 = -1;
	fVar1 = 0f;
	if (unk_0x78411E34CF90EA8C(Local_135.f_61) && unk_0x8DE2438443E6A145(Local_135.f_61))
	{
		Var2 = { unk_0xA452B06E281A9014(Local_135.f_61) };
		iVar3 = 0;
		while (iVar3 <= 5)
		{
			if (unk_0xFC8BFE4B41177C22(Local_135.f_84[iVar3]) && !unk_0x1C2F771CDC87A3A5(Local_135.f_84[iVar3], 0))
			{
				Var4 = { unk_0xD1A6A821F5AC81DB(Local_135.f_84[iVar3], 1) - Var2 };
				fVar5 = func_79(Var4);
				if (fVar5 > fVar1)
				{
					fVar1 = fVar5;
					iVar0 = iVar3;
				}
			}
			iVar3++;
		}
	}
	Local_135.f_9 = iVar0;
	return iVar0;
}

float func_79(struct<3> Param0)
{
	return system::sqrt((((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)) + (Param0.f_2 * Param0.f_2)));
}

int func_80(int iParam0)
{
	if (func_78() != -1)
	{
		if ((func_49(Local_135.f_84[func_78()]) && func_49(iParam0)) && func_49(func_82()))
		{
			if (func_81(func_82(), Local_135.f_84[func_78()], 1) > func_81(func_82(), iParam0, 1) && func_81(Local_135.f_84[func_78()], iParam0, 1) > 5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_81(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	if (!unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam1, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Var1, iParam2);
}

int func_82()
{
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (unk_0x383461852896D73D() != -1)
		{
			return Global_2672855.f_957[unk_0x383461852896D73D()];
		}
	}
	return -1;
}

int func_83(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!unk_0xFC8BFE4B41177C22(Local_135.f_84[iVar0]))
		{
			Local_135.f_84[iVar0] = uParam0;
			Local_135.f_8++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_84(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	int iVar5;
	
	if (((unk_0x78411E34CF90EA8C(Local_135.f_61) && unk_0x8DE2438443E6A145(Local_135.f_61)) && func_49(iParam0)) && func_49(func_31()))
	{
		Var0 = { unk_0xA452B06E281A9014(Local_135.f_61) };
		Var1 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
		switch (Local_135.f_25)
		{
			case 0:
				Local_135.f_105 = unk_0x120E577522852984(Var0, Var1, 511, 0, 7);
				if (Local_135.f_105 != 0)
				{
					Local_135.f_25 = 1;
				}
				break;
			
			case 1:
				Local_135.f_112 = unk_0x0E7DD1EBCA8D2DE3(Local_135.f_105, &iVar2, &Var4, &uVar3, &iVar5);
				if (Local_135.f_112 == 2)
				{
					if (iVar2 == 0)
					{
						Local_135.f_24 = 1;
						Var4 = { 0f, 0f, 0f };
						if (BitTest(Local_135.f_5, 0))
						{
							unk_0x8744D2E3FC95740E(&(Local_135.f_5), false);
						}
					}
					else
					{
						Local_135.f_24 = 2;
						if (unk_0xFC8BFE4B41177C22(iVar5))
						{
							if (unk_0x55B80B6E7AB61270(iVar5) || (unk_0x0101C509A6E67F99(iVar5) && unk_0x501EBB0523078750(unk_0xBD545F8729E9F413(iVar5))))
							{
								if (iVar5 == func_85(iParam0))
								{
									if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
									{
										if (!BitTest(Local_135.f_5, 0))
										{
											unk_0x0B0C9A0F9AAEB7F0(&(Local_135.f_5), false);
										}
									}
								}
							}
							else if (BitTest(Local_135.f_5, 0))
							{
								unk_0x8744D2E3FC95740E(&(Local_135.f_5), false);
							}
						}
						Local_135.f_105 = 0;
						Local_135.f_25 = 0;
					}
				}
				else if (Local_135.f_112 == 0)
				{
					Local_135.f_25 = 0;
				}
				break;
		}
	}
	else if (BitTest(Local_135.f_5, 0))
	{
		unk_0x8744D2E3FC95740E(&(Local_135.f_5), false);
	}
}

int func_85(int iParam0)
{
	return iParam0;
}

void func_86()
{
	int iVar0;
	int iVar1;
	var uVar2[100];
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x78411E34CF90EA8C(Local_135.f_61) && unk_0x8DE2438443E6A145(Local_135.f_61))
	{
		if (func_29(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (func_49(func_82()))
			{
				iVar5 = unk_0x0D308D56EF4A935A(&uVar2);
				if (iVar5 > 0)
				{
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (!unk_0xFC8BFE4B41177C22(uVar2[iVar0]))
						{
						}
						else if ((!unk_0x55B80B6E7AB61270(uVar2[iVar0]) || uVar2[iVar0] == func_31()) || !func_70(uVar2[iVar0]))
						{
							Jump @274; //curOff = 148
						}
						else if (func_88(uVar2[iVar0]) && !func_87(uVar2[iVar0]))
						{
							if (func_75(uVar2[iVar0]) && func_81(uVar2[iVar0], func_82(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_135.f_63[iVar1] = uVar2[iVar0];
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						else
						{
							}
						else
						{
							}
						}
						iVar0++;
					}
				}
				iVar0 = 0;
				while (iVar0 < 32)
				{
					if (unk_0x762604C40829DB72(unk_0xB23E0F9B63D009A8(iVar0)))
					{
						iVar3 = unk_0xB23E0F9B63D009A8(iVar0);
						iVar4 = unk_0x56E414973C2A8C0E(iVar3);
						if ((iVar3 == unk_0x259BE71D8A81D4FA() || !func_70(iVar4)) || unk_0x1C2F771CDC87A3A5(iVar4, 0))
						{
						}
						else if (func_88(iVar4) && !func_87(iVar4))
						{
							if (func_81(iVar4, func_82(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_135.f_63[iVar1] = iVar4;
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						}
					}
					iVar0++;
				}
				Local_135.f_111 = 1;
			}
		}
	}
}

int func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (((unk_0xFC8BFE4B41177C22(Local_135.f_84[iVar0]) && !unk_0x1C2F771CDC87A3A5(Local_135.f_84[iVar0], 0)) && unk_0xFC8BFE4B41177C22(iParam0)) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			if (iParam0 == Local_135.f_84[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_88(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			if (iParam0 == Local_135.f_63[iVar0])
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_89()
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= 5)
	{
		func_66(bVar0, 1);
		func_65(bVar0, 1);
		bVar0++;
	}
}

void func_90()
{
	int iVar0;
	
	if ((func_49(func_31()) && unk_0x78411E34CF90EA8C(Local_135.f_61)) && unk_0x8DE2438443E6A145(Local_135.f_61))
	{
		iVar0 = unk_0x365DC1E8054AF31A(func_31(), func_56());
		if (iVar0 != -1)
		{
			if (!BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_401, 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_401), false);
			}
		}
	}
	else if (BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_401, 0))
	{
		unk_0x8744D2E3FC95740E(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_401), false);
	}
}

void func_91()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	int iVar16;
	struct<3> Var17;
	float fVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	float fVar25;
	float fVar26;
	float fVar27;
	int iVar28;
	struct<3> Var29;
	int iVar30;
	int iVar31;
	
	if (((unk_0x78411E34CF90EA8C(Local_135.f_61) && (unk_0x8DE2438443E6A145(Local_135.f_61) || !BitTest(Local_135.f_5, 2))) && func_49(func_31())) && func_31() != -1)
	{
		fVar0 = 0,25f;
		fVar1 = 0f;
		func_99(&fVar1);
		if (unk_0xAE231F549813BBDF(0))
		{
			fVar0 = (fVar0 * 6f);
		}
		fVar14 = 128f;
		func_98(&fVar8, &fVar7);
		func_97(&fVar10, &fVar9);
		func_96(&fVar12, &fVar11);
		func_26(&fVar13);
		unk_0xE0EEB603997F273F(2);
		unk_0x4CC1CF98851922CE(0, 39);
		if (unk_0xAE231F549813BBDF(0))
		{
			fVar14 = 15f;
			fVar5 = (unk_0xC3B77DE416935168(0, 291) * -fVar14);
			fVar6 = (unk_0xC3B77DE416935168(0, 290) * fVar14);
		}
		else
		{
			iVar4 = system::floor((unk_0xC3B77DE416935168(0, 291) * -fVar14));
			iVar3 = system::floor((unk_0xC3B77DE416935168(0, 290) * fVar14));
		}
		iVar2 = system::floor((unk_0xF069618D9974EB9D(0, 39) * fVar14));
		if (!unk_0xAE231F549813BBDF(0))
		{
			iVar16 = system::round((IntToFloat(iVar16) * fVar14));
			if (unk_0x510D0699BE9C6D06(iVar2) < iVar16)
			{
				iVar2 = 0;
			}
			Var17 = { IntToFloat(iVar4), IntToFloat(iVar3), 0f };
			if (system::vmag(Var17) < IntToFloat(iVar16))
			{
				iVar4 = 0;
				iVar3 = 0;
			}
		}
		fVar18 = ((Var15.f_0 / fVar7) * 0,5f);
		if (fVar18 > 0f)
		{
			fVar18 = (fVar18 + 1f);
		}
		else
		{
			fVar18 = 1f;
		}
		if (unk_0xAE231F549813BBDF(0))
		{
			Local_135[2] = ((fVar5 * Local_135.f_59) * fVar1);
			Local_135[3] = (((fVar6 * Local_135.f_59) * fVar1) * fVar18);
		}
		else
		{
			Local_135[2] = (((system::to_float(iVar4) * Local_135.f_59) * fVar1) * system::timestep());
			Local_135[3] = ((((system::to_float(iVar3) * Local_135.f_59) * fVar1) * fVar18) * system::timestep());
		}
		Local_135[3] = func_95(Local_135[3], fVar12, fVar11);
		if (iVar4 != 0 && iVar3 != 0)
		{
			Var15 = { unk_0x9DDBEF363FADFA4C(Local_135.f_61, 2) };
		}
		if (!func_94(unk_0xA452B06E281A9014(Local_135.f_61), 0f, 0f, 0f, 0))
		{
			if (!unk_0x1C2F771CDC87A3A5(func_31(), 0))
			{
				fVar19 = unk_0xCFC0C995455A6204(func_31());
				fVar20 = (fVar19 - Var15.f_2);
				while (unk_0x1D5CD3EAAA7422B0(fVar20) >= 180f && iVar21 < 30)
				{
					if (fVar20 < 0f)
					{
						fVar20 = (fVar20 + 360f);
					}
					else
					{
						fVar20 = (fVar20 - 360f);
					}
					iVar21++;
					if (iVar21 == 30)
					{
					}
				}
				if (fVar20 >= fVar11)
				{
					if (fVar20 > 0f)
					{
						Var15.f_2 = (fVar19 - fVar11);
					}
					else
					{
						Var15.f_2 = (fVar19 + fVar11);
					}
				}
				if (fVar20 < fVar12)
				{
					if (fVar20 > 0f)
					{
						Var15.f_2 = (fVar19 - unk_0x1D5CD3EAAA7422B0(fVar12));
					}
					else
					{
						Var15.f_2 = (fVar19 + unk_0x1D5CD3EAAA7422B0(fVar12));
					}
				}
			}
			fVar22 = 0f;
			fVar23 = 0f;
			if (func_94(Local_135.f_50, 0f, 0f, 0f, 0))
			{
				Local_135.f_50 = { unk_0x88124E0D60FB8D11(func_31(), 2) };
			}
			else
			{
				Var24 = { unk_0x88124E0D60FB8D11(func_31(), 2) };
				fVar25 = ((unk_0x1D5CD3EAAA7422B0(Local_135.f_53.f_2) - 90f) / -90f);
				fVar22 = (fVar22 + ((Var24.f_0 - Local_135.f_50) * fVar25));
				fVar23 = (fVar23 + (Var24.f_2 - Local_135.f_50.f_2));
				if (fVar23 > 180f)
				{
					fVar23 = (fVar23 - 360f);
				}
				if (fVar23 < -180f)
				{
					fVar23 = (fVar23 + 360f);
				}
				if (Var24.f_0 < -80f || Var24.f_0 > 80f)
				{
					fVar22 = 0f;
					fVar23 = 0f;
				}
				if (unk_0xD1F1A906BA9226BE(func_31()))
				{
					fVar22 = 0f;
					fVar23 = 0f;
				}
				Local_135.f_50 = { Var24 };
			}
			if ((((Local_135[2] != 0f || Local_135[3] != 0f) || fVar22 != 0f) || fVar23 != 0f) || !BitTest(Local_135.f_5, 2))
			{
				fVar26 = (((Local_135.f_59 - (fVar10 - 1f)) / (fVar9 - (fVar10 - 1f))) * 6f);
				if (fVar26 < 3f)
				{
					fVar26 = 3f;
				}
				Local_135[2] = (Local_135[2] * fVar26);
				Local_135[3] = (Local_135[3] * fVar26);
				Local_135.f_53 = (Local_135.f_53 + Local_135[2]);
				Local_135.f_53.f_2 = (Local_135.f_53.f_2 - Local_135[3]);
				Local_135.f_53 = (Local_135.f_53 - fVar22);
				Local_135.f_53.f_2 = (Local_135.f_53.f_2 - fVar23);
				if (Local_135.f_53 < fVar8)
				{
					Local_135.f_53 = fVar8;
				}
				if (Local_135.f_53 > fVar7)
				{
					Local_135.f_53 = fVar7;
				}
				if (fVar13 >= 360f)
				{
					while (Local_135.f_53.f_2 > 180f)
					{
						Local_135.f_53.f_2 = (Local_135.f_53.f_2 - 360f);
					}
					while (Local_135.f_53.f_2 < -180f)
					{
						Local_135.f_53.f_2 = (Local_135.f_53.f_2 + 360f);
					}
				}
				else
				{
					if (Local_135.f_53.f_2 < (-fVar13 / 2f))
					{
						Local_135.f_53.f_2 = (-fVar13 / 2f);
					}
					if (Local_135.f_53.f_2 > (fVar13 / 2f))
					{
						Local_135.f_53.f_2 = (fVar13 / 2f);
					}
				}
			}
			if (!BitTest(Local_135.f_5, 2))
			{
				if (func_168())
				{
					Local_135.f_53 = { fVar8, 0f, 0f };
				}
				else
				{
					Local_135.f_53 = { fVar7, 0f, 0f };
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Local_135.f_5), 2);
			}
			if (!func_93(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_402[0 /*3*/], Local_135.f_53, 0f, Local_135.f_53.f_2, 1056964608, 0))
			{
				Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_402[0 /*3*/] = { Local_135.f_53, 0f, Local_135.f_53.f_2 };
			}
			if (func_168())
			{
				unk_0x52013BF2765685F4(Local_135.f_61, func_31(), unk_0x365DC1E8054AF31A(func_31(), "weapon_1d"), 1, Local_135.f_53, 0f, Local_135.f_53.f_2, func_92(), 1);
			}
			else
			{
				unk_0x52013BF2765685F4(Local_135.f_61, func_31(), 0, 1, Local_135.f_53, 0f, Local_135.f_53.f_2, func_92(), 1);
			}
		}
		Local_135.f_59 = (Local_135.f_59 + (((system::to_float(iVar2) / 5f) * system::timestep()) * fVar0));
		if (Local_135.f_59 > fVar9)
		{
			Local_135.f_59 = fVar9;
		}
		if (Local_135.f_59 < fVar10)
		{
			Local_135.f_59 = fVar10;
		}
		unk_0x9B669C0440D2AB57(1f);
		unk_0x58BDA5D9262F5D30(Local_135.f_61, Local_135.f_59);
		fVar27 = ((Local_135.f_59 - 5f) / 42f);
		unk_0x8AFA674B4DE9BCAE(fVar27);
		if (unk_0x91476A70AA1CB09A("SCRIPT\POLICE_CHOPPER_CAM", 0, -1))
		{
			if ((unk_0x510D0699BE9C6D06(iVar2) > 0 && Local_135.f_59 <= fVar9) && Local_135.f_59 >= fVar10)
			{
				iVar28 = Local_135.f_29;
				if (iVar28 != -1)
				{
					if (unk_0x9F0C06CFBACDD6A1(iVar28))
					{
						unk_0xBF3D28CA44F3BE2D(iVar28, "COP_HELI_CAM_ZOOM", 0, 1);
					}
					unk_0x3F002AA9562BF0BE(iVar28, "Ctrl", system::to_float(iVar2));
					if (iVar2 < 0)
					{
						unk_0x3F002AA9562BF0BE(iVar28, "Dir", -1f);
					}
					else
					{
						unk_0x3F002AA9562BF0BE(iVar28, "Dir", 1f);
					}
				}
			}
			else if (Local_135.f_29 != -1)
			{
				if (!unk_0x9F0C06CFBACDD6A1(Local_135.f_29))
				{
					unk_0x8E4825CCACA34B58(Local_135.f_29);
				}
			}
			Var29 = { -Vector(unk_0xC3B77DE416935168(0, 290), 0f, unk_0xC3B77DE416935168(0, 291)) };
			if (system::vmag(Var29) > 0f)
			{
				iVar30 = Local_135.f_30;
				if (iVar30 != -1)
				{
					if (unk_0x9F0C06CFBACDD6A1(iVar30))
					{
						unk_0xBF3D28CA44F3BE2D(iVar30, "COP_HELI_CAM_TURN", 0, 1);
					}
					unk_0x3F002AA9562BF0BE(iVar30, "Ctrl", system::vmag(Var29));
				}
			}
			else
			{
				iVar31 = Local_135.f_30;
				if (iVar31 != -1)
				{
					if (!unk_0x9F0C06CFBACDD6A1(iVar31))
					{
						unk_0x8E4825CCACA34B58(iVar31);
					}
				}
			}
		}
	}
}

Vector3 func_92()
{
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		return -0,25f, -1f, 1,1f;
	}
	if (unk_0xFC8BFE4B41177C22(func_31()))
	{
		switch (unk_0x4B423FAA24E8ABF0(func_31()))
		{
			case joaat("maverick"):
				return 0f, 2,75f, -1,25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_93(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

bool func_94(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

float func_95(float fParam0, float fParam1, float fParam2)
{
	while (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + 360f);
	}
	while (fParam0 > fParam2)
	{
		fParam0 = (fParam0 - 360f);
	}
	return fParam0;
}

void func_96(var uParam0, var uParam1)
{
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		*uParam0 = 0f;
		*uParam1 = 45f;
	}
	else
	{
		*uParam0 = 0f;
		*uParam1 = 180f;
	}
}

void func_97(var uParam0, var uParam1)
{
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
	else
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
}

void func_98(var uParam0, var uParam1)
{
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		*uParam0 = 5f;
		*uParam1 = 40f;
	}
	else
	{
		*uParam0 = -80f;
		*uParam1 = 0f;
	}
}

void func_99(float fParam0)
{
	*fParam0 = 0,0015f;
}

int func_100()
{
	if (unk_0x4D9174D8796EA622() || unk_0x2B8BAF9BA2A3D36B())
	{
		return 1;
	}
	if (func_103(1))
	{
		return 1;
	}
	if (func_101(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_102())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_102()
{
	return BitTest(Global_2621446, 3);
}

bool func_103(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23692.f_4 && Global_23692.f_104 == 4);
	}
	return Global_23692.f_4;
}

void func_104()
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_112())
	{
		func_111(1);
	}
	unk_0xC2F71CC2AB70CFB1(0, 1);
	if (func_168())
	{
		func_110();
	}
	else if (unk_0xFC8BFE4B41177C22(Local_135.f_107))
	{
		unk_0xA612CEAF809E9032(Local_135.f_107);
	}
	Var0 = { unk_0x02AF3EA0F67D2329() };
	if ((((unk_0x4D9174D8796EA622() || func_109()) || unk_0x875A214D5EBCA509(2, 199)) || unk_0x6D05C5731A838CB3(2, 199)) || unk_0x2645430E708CBFAC(2, 199))
	{
		unk_0x83F9B9189E65251B(Var0.f_0, Var0.f_1);
		unk_0x2474C1A1D3FE2888(Var0.f_0, Var0.f_1, 0);
		if (unk_0x4D9174D8796EA622() || func_109())
		{
			if (unk_0xC450B06E5AAA0985(unk_0x413A91F497E3428F()))
			{
				unk_0xF42EBD7CD0682A8B(unk_0x413A91F497E3428F(), 255);
			}
		}
	}
	else if (func_168())
	{
		if (unk_0xC450B06E5AAA0985(unk_0x413A91F497E3428F()))
		{
			unk_0xF42EBD7CD0682A8B(unk_0x413A91F497E3428F(), 0);
		}
	}
	unk_0x43F4B7E163A31644(Var0.f_0, Var0.f_1);
	unk_0xBB6D152B544953A3();
	unk_0xE1945100CB123CBF();
	if (unk_0x78411E34CF90EA8C(Local_135.f_61))
	{
		unk_0x29BBAB7031C36984(Local_135.f_61, 1);
	}
	unk_0x4D2F1CB87CBF249D(0);
	if (func_168())
	{
		Var1 = { unk_0x958849BB56EC0F07(0) };
		Var1 = { func_108(Var1) };
		if (!unk_0xC450B06E5AAA0985(Local_135.f_109))
		{
			Local_135.f_108 = func_106(Var0, 0);
			unk_0x4C905FB262965D5D(Local_135.f_108, 425);
			unk_0x89FE619BFBB2024B(Local_135.f_108, 0);
			unk_0xF55F62DA99DB0C2F(Local_135.f_108, 4);
			unk_0x61183D6239A9D7B8(Local_135.f_108, func_105(2));
			unk_0xD5888E94B9AE2B51(Local_135.f_108, 1, 11);
			unk_0x5D3946F818C6B331(Local_135.f_108, 0,54f);
			unk_0x1456FD5C0C438B19(Local_135.f_108, 13 + 1);
			Local_135.f_109 = func_106(Var0, 0);
			unk_0x4C905FB262965D5D(Local_135.f_109, 425);
			unk_0x89FE619BFBB2024B(Local_135.f_109, 0);
			unk_0xF55F62DA99DB0C2F(Local_135.f_109, 4);
			unk_0x61183D6239A9D7B8(Local_135.f_109, func_105(18));
			unk_0xD5888E94B9AE2B51(Local_135.f_109, 1, 11);
			unk_0x5D3946F818C6B331(Local_135.f_109, 0,44f);
			unk_0x1456FD5C0C438B19(Local_135.f_109, 13 + 1);
			unk_0xA1DFF583C8070610(Local_135.f_109, 1);
			unk_0x0C4EDD88E2185B8F(Local_135.f_109, system::round(unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1)));
			unk_0xA1DFF583C8070610(Local_135.f_108, 1);
			unk_0x0C4EDD88E2185B8F(Local_135.f_108, system::round(unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1)));
		}
		else
		{
			unk_0xDABC73EF230B6665(Local_135.f_109, Var0);
			unk_0x0C4EDD88E2185B8F(Local_135.f_109, system::round(unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1)));
			unk_0xF55F62DA99DB0C2F(Local_135.f_109, 5);
			unk_0xDABC73EF230B6665(Local_135.f_108, Var0);
			unk_0x0C4EDD88E2185B8F(Local_135.f_108, system::round(unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1)));
			unk_0xF55F62DA99DB0C2F(Local_135.f_108, 5);
		}
	}
}

int func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xA306E6FD2A6558E6(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

var func_106(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_107(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

float func_107(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_108(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0.f_0 = system::cos(Param0.f_0);
	Var0.f_1 = system::cos(Param0.f_2);
	Var0.f_2 = system::sin(Param0.f_0);
	Var0.f_1 = (Var0.f_1 * Var0.f_0);
	Var0.f_0 = (Var0.f_0 * -system::sin(Param0.f_2));
	return Var0;
}

bool func_109()
{
	return unk_0x05AA183DA1344935() != 0;
}

void func_110()
{
	Global_1574847 = 1;
}

void func_111(int iParam0)
{
	Global_2698794 = iParam0;
}

bool func_112()
{
	return Global_2698794;
}

void func_113(int iParam0)
{
	if (Local_135.f_110 != iParam0)
	{
		Local_135.f_110 = iParam0;
	}
}

int func_114()
{
	struct<3> Var0;
	float fVar1;
	
	if (func_130() && !func_100())
	{
		if ((func_128(0) || func_103(1)) || func_127())
		{
		}
		else
		{
			if (func_168())
			{
				if (unk_0x875A214D5EBCA509(2, 80) || unk_0xDEE3EFEA31A1F555(2, 80))
				{
					return 1;
				}
			}
			else
			{
				if (unk_0x875A214D5EBCA509(0, 51) || unk_0xDEE3EFEA31A1F555(0, 51))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_135.f_107, 0))
					{
						unk_0x97FB44DEA703EB10(Local_135.f_107, 1f);
						unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
					}
					return 1;
				}
				if (func_49(func_31()))
				{
					if (unk_0x78411E34CF90EA8C(Local_135.f_61))
					{
						Var0 = { unk_0xA452B06E281A9014(Local_135.f_61) };
						if (unk_0xB1EAADCB692D69CE(Var0, &fVar1, 0, 0))
						{
							if (system::vdist(Var0, Var0.f_0, Var0.f_1, fVar1) < 2f)
							{
								return 1;
							}
						}
					}
					if (unk_0x69799E0840A34AFB(func_31()))
					{
						return 1;
					}
					if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Local_135.f_107, 0))
					{
						unk_0x97FB44DEA703EB10(Local_135.f_107, 1f);
						unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
					}
				}
				else
				{
					return 1;
				}
			}
			if (func_125())
			{
				return 1;
			}
		}
	}
	if (func_123(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (func_117())
	{
		return 1;
	}
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (func_49(func_115()))
		{
			if ((unk_0x8034325BF6D6E41F() % 30) == 0)
			{
				if (unk_0x5105BE70DEF1F5FB(func_115(), -136,1614f, 4617,176f, 124,5134f, -490,3058f, 4924,749f, 159,0677f, 19,5f, 0, 1, 0))
				{
					return 1;
				}
			}
			if (unk_0xD1F1A906BA9226BE(func_115()))
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

int func_115()
{
	if (Global_1845120 != func_30())
	{
		if (!func_116(Global_1845120))
		{
			if (unk_0xFC8BFE4B41177C22(Global_1663307))
			{
				return Global_1663307;
			}
			if (unk_0xFC8BFE4B41177C22(Global_1962036[Global_1845120]))
			{
				return Global_1962036[Global_1845120];
			}
		}
	}
	return -1;
}

int func_116(int iParam0)
{
	if (iParam0 != func_30())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_3, 4);
	}
	return 0;
}

int func_117()
{
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (Global_1845120 != func_30())
		{
			if (func_116(Global_1845120) || func_122(Global_1845120))
			{
				return 1;
			}
			if (func_121(Global_1845120))
			{
				if (func_28(func_120(Global_1845120)) == 11)
				{
					if (func_28(func_119(Global_1845120)) == 11)
					{
						if (func_118(Global_1845120) == 5)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_118(int iParam0)
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657971[iParam0 /*465*/].f_322.f_3, 28, 31);
}

int func_119(int iParam0)
{
	if (iParam0 != func_30() && func_29(iParam0, 1, 1))
	{
		return Global_2657971[iParam0 /*465*/].f_322.f_19;
	}
	return -1;
}

int func_120(int iParam0)
{
	if (iParam0 != func_30() && func_29(iParam0, 1, 1))
	{
		return Global_2657971[iParam0 /*465*/].f_322.f_18;
	}
	return -1;
}

int func_121(int iParam0)
{
	if (iParam0 != func_30() && func_29(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 4);
	}
	return 0;
}

int func_122(int iParam0)
{
	if (iParam0 != func_30())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_370, 14);
	}
	return 0;
}

int func_123(int iParam0)
{
	if (iParam0 != func_30() && func_29(iParam0, 1, 1))
	{
		if (func_124(iParam0) && !func_121(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	if (iParam0 != func_30() && func_29(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 3);
	}
	return 0;
}

int func_125()
{
	int iVar0;
	int iVar1;
	
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (unk_0xFC8BFE4B41177C22(func_31()))
		{
			iVar0 = unk_0xFD5C5BBD1FE92BB7(func_31(), -1, 0);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				if (unk_0x501EBB0523078750(iVar0))
				{
					iVar1 = unk_0x1C1C92A1CBAE364B(iVar0);
					if (func_29(iVar1, 1, 1))
					{
						if (func_126(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_126(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1887305[iVar0 /*610*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_127()
{
	return Global_23692.f_135;
	return 0;
}

int func_128(bool bParam0)
{
	if (unk_0x22C925E7C63C5628())
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (func_129(unk_0x4A8C381C258A124D()))
			{
				if (unk_0x6D05C5731A838CB3(0, 25) || unk_0x6D05C5731A838CB3(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23692.f_130)
	{
		return 0;
	}
	if (unk_0x6D05C5731A838CB3(0, 19) || (!bParam0 && unk_0x4465D55576678706(0, 19)))
	{
		return 1;
	}
	if (unk_0x761778199FE1211C())
	{
		if (((unk_0x6D05C5731A838CB3(0, 166) || unk_0x6D05C5731A838CB3(0, 167)) || unk_0x6D05C5731A838CB3(0, 168)) || unk_0x6D05C5731A838CB3(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x4465D55576678706(0, 166) || unk_0x4465D55576678706(0, 167)) || unk_0x4465D55576678706(0, 168)) || unk_0x4465D55576678706(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	
	if (unk_0x5EA7A06A1491D450())
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			unk_0x23B29877D0BE9547(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_130()
{
	return BitTest(Global_1956900, 1);
}

void func_131()
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (func_138())
	{
		if (!unk_0x78411E34CF90EA8C(Local_135.f_61))
		{
			Local_135.f_61 = unk_0xBB209150C6081BBE(26379945, 1);
			unk_0x58BDA5D9262F5D30(Local_135.f_61, Local_135.f_59);
			Var0 = { unk_0x88124E0D60FB8D11(func_31(), 2) };
			unk_0x5E5CEC33463AD803(Local_135.f_61, 0f, 0f, Var0.f_2, 2);
			unk_0x03F10D56CCA2C055(Local_135.f_61, func_31(), func_137(), 1);
			func_134(1);
			func_133(1);
			func_91();
			unk_0x80F87A4A3B930613();
		}
		else if (BitTest(Local_135.f_5, 2))
		{
			func_104();
			func_3();
			unk_0xE37AF9002E782BA0(1, 0, 0, 1, 1, 0);
			unk_0x5C483F4653DC993C("eyeinthesky");
			if (Local_135.f_49 == -1)
			{
				Local_135.f_49 = unk_0xCA369FBC0DE29517();
				unk_0xBF3D28CA44F3BE2D(Local_135.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
			}
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				Local_135.f_107 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				Var1 = { unk_0xD1A6A821F5AC81DB(Local_135.f_107, 1) };
				unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
				unk_0xDAC27BA46D21818F(unk_0x4A8C381C258A124D(), Local_135.f_107, 0, 0, Var1, 4, 0f, -1f, -1f, -1, -1, -1082130432, 0);
				unk_0x97FB44DEA703EB10(Local_135.f_107, 0f);
			}
			func_132("HUNTGUN_2b", -1);
			func_113(2);
		}
	}
	else
	{
		func_113(3);
	}
}

void func_132(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_133(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_370, 25))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_370), 25);
		}
	}
	else if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_370, 25))
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_370), 25);
	}
}

void func_134(bool bParam0)
{
	if (bParam0)
	{
		if (!func_130())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956900, true);
		}
	}
	else
	{
		if (func_130())
		{
			unk_0x8744D2E3FC95740E(&Global_1956900, true);
		}
		func_135(0);
	}
}

void func_135(bool bParam0)
{
	if (bParam0)
	{
		if (!func_136())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956900, 2);
		}
	}
	else if (func_136())
	{
		unk_0x8744D2E3FC95740E(&Global_1956900, 2);
	}
}

bool func_136()
{
	return BitTest(Global_1956900, 2);
}

Vector3 func_137()
{
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		return 0f, 0f, 3,3f;
	}
	if (unk_0xFC8BFE4B41177C22(func_31()))
	{
		switch (unk_0x4B423FAA24E8ABF0(func_31()))
		{
			case joaat("maverick"):
				return 0f, 2,75f, -1,25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_138()
{
	if (!unk_0xFC8BFE4B41177C22(func_31()))
	{
		return 0;
	}
	if (unk_0xFC8BFE4B41177C22(func_31()) && unk_0x1C2F771CDC87A3A5(func_31(), 0))
	{
		return 0;
	}
	return 1;
}

void func_139()
{
	struct<3> Var0;
	
	if (func_138())
	{
		if (func_151())
		{
			if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			{
				func_140(unk_0x259BE71D8A81D4FA(), 0, 32768, 0);
			}
			if (!func_59(&(Local_135.f_113)))
			{
				if (func_49(func_31()))
				{
					if (unk_0x4A3280817398D754(unk_0xD1A6A821F5AC81DB(func_31(), 1), 100f, 1))
					{
						func_58(&(Local_135.f_113), 0, 0);
					}
				}
			}
			else if (func_57(&(Local_135.f_113), 2000, 0))
			{
				unk_0xD410E6FC0A0C97D2(func_31());
			}
		}
		if (func_59(&(Local_135.f_113)))
		{
			if (func_57(&(Local_135.f_113), 5000, 0))
			{
				if (unk_0x9E2D35FA908F57B4())
				{
					if (!unk_0x78411E34CF90EA8C(Local_135.f_61))
					{
						Local_135.f_61 = unk_0xBB209150C6081BBE(26379945, 1);
						unk_0x58BDA5D9262F5D30(Local_135.f_61, Local_135.f_59);
						Var0 = { unk_0x88124E0D60FB8D11(func_31(), 2) };
						unk_0x5E5CEC33463AD803(Local_135.f_61, 0f, 0f, Var0.f_2, 2);
						unk_0x03F10D56CCA2C055(Local_135.f_61, func_31(), func_137(), 1);
						func_134(1);
						func_133(1);
						func_91();
						unk_0x80F87A4A3B930613();
						unk_0xCAC4020CCF361AC8("DLC_GR_MOC_Turret_View_Scene");
					}
					else if (BitTest(Local_135.f_5, 2))
					{
						func_104();
						func_3();
						unk_0x6981C3213B841071();
						unk_0xE37AF9002E782BA0(1, 0, 0, 1, 1, 0);
						if (Local_135.f_49 == -1)
						{
							Local_135.f_49 = unk_0xCA369FBC0DE29517();
							unk_0xBF3D28CA44F3BE2D(Local_135.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
						}
						func_113(2);
					}
				}
			}
		}
	}
	else
	{
		func_113(3);
	}
}

void func_140(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x828F3FAE99DA791A())
		{
			unk_0x6FF322107B12B749(0);
		}
	}
	if (func_150())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		uVar0 = iParam2;
		unk_0x4686BC3BFDBB5348(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x834C960822A4683F())
		{
			bVar1 = false;
		}
		if (!func_148())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x762604C40829DB72(iParam0) && (unk_0x75EAB09F5E974116(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x56E414973C2A8C0E(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x76CD105BCAC6EB9F())
				{
					unk_0x6E2FA5434737D22F(1);
				}
				else if (bVar14 || ((!func_10(unk_0x259BE71D8A81D4FA(), 0) && !func_102()) && !func_101(unk_0x259BE71D8A81D4FA())))
				{
					unk_0x4285E11B28063EE0(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x76CD105BCAC6EB9F() && !bVar19)
					{
						unk_0x6E2FA5434737D22F(0);
					}
					Global_2657971[iParam0 /*465*/].f_255 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_145(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_144(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(uVar27, true, 0);
					}
				}
				if (!unk_0xA3736D76B0E93E93(uVar27))
				{
					if (!bVar21)
					{
						unk_0x5D7CD709B34C90F0(uVar27, false);
					}
					unk_0x11C125313CB8ADA2(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5D7CD709B34C90F0(uVar27, false);
				}
				unk_0x3F58BFCF656F0DF1(uVar27, true);
				unk_0x2B52F77101390E6F(iParam0, 0);
				unk_0x6C4F5AA91D39455C(iParam0, 0);
				if (unk_0x4CEC77F224BCD884(uVar27) && unk_0x69CD279BFCFE278E(uVar27))
				{
					unk_0xAF8337BF5A296283(uVar27);
				}
				unk_0x9FF00EA9A61211D2(uVar27, 1);
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_143();
					func_142();
				}
				if (unk_0x705A7AB2D4BC0A9B())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x787F8EE1F6FBDC6D())
				{
				}
				Global_2657971[iParam0 /*465*/].f_256 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697540)
				{
					unk_0xDD98B34A4A3AFA89(1);
					unk_0xDD98B34A4A3AFA89(1);
					Global_2697540 = 0;
				}
				if (Global_2635563.f_2981)
				{
					Global_2635563.f_2981 = 0;
				}
			}
			else
			{
				if (!func_144(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(uVar27, !bVar15, 0);
					}
					if (!unk_0xA3736D76B0E93E93(uVar27))
					{
						if (!bVar21)
						{
							unk_0x5D7CD709B34C90F0(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x11C125313CB8ADA2(uVar27, 1);
						}
					}
					if (func_141(Global_4718592.f_185586))
					{
						unk_0x5D7CD709B34C90F0(uVar27, true);
					}
				}
				if (Global_1575055)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x2B52F77101390E6F(iParam0, 0);
				}
				else
				{
					unk_0x2B52F77101390E6F(iParam0, 1);
				}
				unk_0x3F58BFCF656F0DF1(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xBFD01C2045360289(uVar27) && !unk_0x7F420695E3F776FB(uVar27, 0))
					{
						unk_0x19626F992DC71FB9(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x4686BC3BFDBB5348(iParam0, bParam1, iVar28);
		}
	}
}

bool func_141(int iParam0)
{
	return iParam0 == 17;
}

void func_142()
{
	struct<3> Var0;
	
	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { Var0 };
}

void func_143()
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
}

int func_144(int iParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_145(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xFC8BFE4B41177C22(iParam1))
		{
			if (unk_0x501EBB0523078750(iParam1))
			{
				if (!unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), unk_0x1C1C92A1CBAE364B(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_147();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x07938654FF332D78(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), true);
			}
		}
		if (func_10(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_146(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_146(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_147()
{
	int iVar0;
	
	if (!unk_0xAD15761928FCF79C())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0xBCF87EE3DC296C2A(iVar0);
				iVar0++;
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), false);
		}
	}
}

int func_148()
{
	if (func_149() == 0)
	{
		return 1;
	}
	return 0;
}

int func_149()
{
	return Global_1574633.f_18;
}

int func_150()
{
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	if (Global_1582014 != -1 || Global_1582020 != -1)
	{
		if (((unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_152())
		{
			return 0;
		}
	}
	return 0;
}

int func_152()
{
	int iVar0;
	
	if (func_167(unk_0x259BE71D8A81D4FA()))
	{
		iVar0 = func_166(unk_0x259BE71D8A81D4FA());
		if (func_29(iVar0, 0, 1))
		{
			if ((((((func_124(iVar0) && func_28(func_120(iVar0)) == 4) && unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar0))) && !unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(iVar0))) && unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iVar0), 0)) && unk_0xFC8BFE4B41177C22(unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iVar0), 0))) && func_165(unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iVar0), 0)))
			{
				return 1;
			}
			if (!func_164(Global_4718592.f_127178))
			{
				if (func_167(iVar0))
				{
					if (func_163(iVar0))
					{
						return 1;
					}
					else if (func_124(unk_0x259BE71D8A81D4FA()) || func_162())
					{
						return 1;
					}
				}
			}
		}
	}
	if (func_161(8))
	{
		if (Global_1574981)
		{
			return 1;
		}
	}
	else if (Global_1956949)
	{
		return 1;
	}
	if (func_160(unk_0x259BE71D8A81D4FA()) && BitTest(Global_1575008, 12))
	{
		return 1;
	}
	if (func_159(unk_0x259BE71D8A81D4FA()))
	{
		iVar0 = func_158(unk_0x259BE71D8A81D4FA());
		if (func_29(iVar0, 0, 1))
		{
			if ((((((func_124(iVar0) && func_28(func_120(iVar0)) == 9) && unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar0))) && !unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(iVar0))) && unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iVar0), 0)) && unk_0xFC8BFE4B41177C22(unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iVar0), 0))) && unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iVar0), 0)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_157(iVar0))
			{
				return 1;
			}
			else if (func_156(iVar0))
			{
				return 1;
			}
			else if (func_124(unk_0x259BE71D8A81D4FA()) || func_162())
			{
				return 1;
			}
		}
	}
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		iVar0 = func_155(unk_0x259BE71D8A81D4FA());
		if (func_29(iVar0, 0, 1))
		{
			if ((((Global_1845120 != func_30() && func_124(Global_1845120)) && func_28(func_120(Global_1845120)) == 11) && func_68(Global_1845120, -1)) && unk_0x2E6A27037F1DC473(unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(Global_1845120), 0), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_116(iVar0))
			{
				return 1;
			}
			else if (func_124(unk_0x259BE71D8A81D4FA()) || func_162())
			{
				return 1;
			}
		}
	}
	if (func_154(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x259BE71D8A81D4FA() != func_30())
		{
			iVar0 = Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_11;
			if (func_29(iVar0, 0, 1))
			{
				if (func_124(unk_0x259BE71D8A81D4FA()) || func_162())
				{
					return 1;
				}
			}
		}
	}
	if (func_159(unk_0x259BE71D8A81D4FA()) || func_160(unk_0x259BE71D8A81D4FA()))
	{
		switch (Global_1582020)
		{
			case 1:
				if (Global_262145.f_22740)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22741)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22742)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1582018 == 1)
	{
		return 1;
	}
	if (func_153(3))
	{
		if (Global_1835504 == 186)
		{
			if (Global_1836714 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_153(int iParam0)
{
	return Global_262145.f_4707[iParam0] == Global_4718592.f_127178;
}

int func_154(int iParam0)
{
	if (iParam0 != func_30())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_30())
			{
				return func_28(Global_2657971[iParam0 /*465*/].f_322.f_8) == 20;
			}
		}
	}
	return 0;
}

int func_155(int iParam0)
{
	if (iParam0 == func_30())
	{
		return iParam0;
	}
	return Global_2657971[iParam0 /*465*/].f_322.f_11;
}

int func_156(int iParam0)
{
	if (iParam0 != func_30())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_6, 16);
	}
	return 0;
}

int func_157(int iParam0)
{
	if (iParam0 != func_30())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_2, 6);
	}
	return 0;
}

int func_158(int iParam0)
{
	if (iParam0 == func_30())
	{
		return iParam0;
	}
	return Global_2657971[iParam0 /*465*/].f_322.f_11;
}

int func_159(int iParam0)
{
	if (iParam0 != func_30())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_30())
			{
				return func_28(Global_2657971[iParam0 /*465*/].f_322.f_8) == 8;
			}
		}
	}
	return 0;
}

int func_160(int iParam0)
{
	if (iParam0 != func_30())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_28(Global_2657971[iParam0 /*465*/].f_322.f_8) == 10;
			}
		}
	}
	return 0;
}

bool func_161(int iParam0)
{
	return Global_4718592.f_185587 >= iParam0;
}

var func_162()
{
	return BitTest(Global_1943520, 6);
}

int func_163(int iParam0)
{
	if (iParam0 != func_30())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 6);
	}
	return 0;
}

bool func_164(int iParam0)
{
	return Global_262145.f_4698[4] == iParam0;
}

int func_165(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(uParam0) == joaat("hauler2") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)
{
	if (iParam0 == func_30())
	{
		return iParam0;
	}
	return Global_2657971[iParam0 /*465*/].f_322.f_11;
}

int func_167(int iParam0)
{
	if (iParam0 != func_30())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_30())
			{
				return func_28(Global_2657971[iParam0 /*465*/].f_322.f_8) == 5;
			}
		}
	}
	return 0;
}

bool func_168()
{
	return BitTest(Local_135.f_5, 7);
}

void func_169()
{
	if (!func_100())
	{
		if (func_29(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!func_175())
			{
				if (func_168())
				{
					if ((func_171() && !func_151()) && func_170("MP_HTRUCK_T_2"))
					{
						if (unk_0x2645430E708CBFAC(2, 176) || unk_0x61C3701AD6D746B2(2, 176))
						{
							func_135(1);
							func_113(1);
							unk_0x428C32CC68809A35(1);
						}
					}
				}
				else if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					if ((!unk_0x4C705AAF75363287() && !unk_0x3273F980CC5E02CD()) && !func_170("HUNTGUN_1b"))
					{
						func_132("HUNTGUN_1b", -1);
					}
					else if (!func_170("HUNTGUN_1b"))
					{
						unk_0x428C32CC68809A35(1);
					}
					else if (unk_0x875A214D5EBCA509(0, 51) || unk_0xDEE3EFEA31A1F555(0, 51))
					{
						func_135(1);
						func_113(1);
						unk_0x428C32CC68809A35(1);
					}
				}
				else if (func_170("HUNTGUN_1b"))
				{
					unk_0x428C32CC68809A35(1);
				}
			}
			else if (func_170("HUNTGUN_1b"))
			{
				unk_0x428C32CC68809A35(1);
			}
		}
	}
}

bool func_170(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_171()
{
	if ((func_27(unk_0x259BE71D8A81D4FA(), 0) && Global_1582014 == 2) && func_172())
	{
		return 1;
	}
	return 0;
}

int func_172()
{
	if (Global_1582014 != -1 || Global_1582020 != -1)
	{
		if ((((unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_173(unk_0x4A8C381C258A124D(), joaat("script_task_go_straight_to_coord")))
		{
			return 0;
		}
		if (((((!unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_152())
		{
			return 0;
		}
	}
	return 1;
}

int func_173(int iParam0, int iParam1)
{
	if (func_174(iParam0))
	{
		if (unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 1 || unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_174(int iParam0)
{
	if (func_49(uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_175()
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (Global_262145.f_24249)
		{
			return 1;
		}
	}
	if (func_180())
	{
		return 1;
	}
	if (func_179())
	{
		return 1;
	}
	if (unk_0x4D9174D8796EA622())
	{
		return 1;
	}
	if (func_178())
	{
		return 1;
	}
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (func_116(Global_1845120))
		{
			return 1;
		}
	}
	if (func_126(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (func_45(0))
	{
		return 1;
	}
	if (func_177())
	{
		return 1;
	}
	if (func_176())
	{
		return 1;
	}
	if (!func_138())
	{
		return 1;
	}
	if (func_117())
	{
		return 1;
	}
	if (Global_1582018)
	{
		return 1;
	}
	if (func_27(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (func_49(func_115()))
		{
			if (unk_0x5105BE70DEF1F5FB(func_115(), -136,1614f, 4617,176f, 124,5134f, -490,3058f, 4924,749f, 159,0677f, 19,5f, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xD1F1A906BA9226BE(func_115()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (func_125())
	{
		return 1;
	}
	if (!func_168())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (func_49(uVar0))
			{
				Var1 = { unk_0xD1A6A821F5AC81DB(uVar0, 1) };
				if (unk_0xB1EAADCB692D69CE(Var1, &fVar2, 0, 0))
				{
					if (system::vdist(Var1, Var1.f_0, Var1.f_1, fVar2) < 3f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_176()
{
	return Global_98822;
}

int func_177()
{
	if (unk_0x486FF5D06E9659F1(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_178()
{
	return Global_1943520.f_559;
}

int func_179()
{
	if (Global_2672855.f_990.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_180()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

bool func_181(int iParam0)
{
	return Local_135.f_110 == iParam0;
}

void func_182()
{
	struct<3> Var0;
	
	if (func_181(1) || func_181(2))
	{
		if (func_49(func_31()))
		{
			Var0 = { unk_0xD1A6A821F5AC81DB(func_31(), 1) };
			unk_0x1A3EA72E4830538F(Var0, 100f, 200f);
			unk_0x87B6357C65356CB1();
			if ((unk_0x8034325BF6D6E41F() % 120) == 0)
			{
				unk_0x2485C562F3C50736(Var0, 300f, 30);
			}
		}
	}
	if (func_181(2))
	{
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			func_140(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
		}
		func_183();
		unk_0xB211E45F1FE1ED2D(0, 19, 1);
		unk_0xB211E45F1FE1ED2D(0, 166, 1);
		unk_0xB211E45F1FE1ED2D(0, 167, 1);
		unk_0xB211E45F1FE1ED2D(0, 168, 1);
		unk_0xB211E45F1FE1ED2D(0, 169, 1);
		unk_0xB211E45F1FE1ED2D(2, 218, 1);
		unk_0xB211E45F1FE1ED2D(2, 219, 1);
		unk_0xB211E45F1FE1ED2D(2, 220, 1);
		unk_0xB211E45F1FE1ED2D(2, 221, 1);
		unk_0xB211E45F1FE1ED2D(2, 205, 1);
		unk_0xB211E45F1FE1ED2D(2, 206, 1);
		unk_0xB211E45F1FE1ED2D(2, 207, 1);
		unk_0xB211E45F1FE1ED2D(2, 208, 1);
		unk_0xB211E45F1FE1ED2D(2, 209, 1);
		unk_0xB211E45F1FE1ED2D(2, 210, 1);
		unk_0xB211E45F1FE1ED2D(2, 202, 1);
		unk_0xB211E45F1FE1ED2D(2, 80, 1);
		unk_0xB211E45F1FE1ED2D(2, 51, 1);
		unk_0xB211E45F1FE1ED2D(2, 190, 1);
		unk_0xB211E45F1FE1ED2D(2, 199, 1);
		unk_0xB211E45F1FE1ED2D(2, 200, 1);
		if (unk_0xAE231F549813BBDF(0))
		{
			unk_0xB211E45F1FE1ED2D(0, 238, 1);
			unk_0xB211E45F1FE1ED2D(0, 237, 1);
		}
		if (unk_0x4D9174D8796EA622())
		{
			unk_0xB211E45F1FE1ED2D(0, 201, 1);
			unk_0xB211E45F1FE1ED2D(0, 202, 1);
			unk_0xB211E45F1FE1ED2D(0, 188, 1);
			unk_0xB211E45F1FE1ED2D(0, 187, 1);
			unk_0xB211E45F1FE1ED2D(0, 189, 1);
			unk_0xB211E45F1FE1ED2D(2, 195, 1);
			unk_0xB211E45F1FE1ED2D(2, 196, 1);
			unk_0xB211E45F1FE1ED2D(2, 198, 1);
			unk_0xB211E45F1FE1ED2D(2, 197, 1);
		}
	}
}

void func_183()
{
	func_184();
}

void func_184()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 365)
	{
		unk_0x66EFB3D6110055C4(0, iVar0, 1);
		iVar0++;
	}
}

int func_185()
{
	if (!func_148())
	{
		return 1;
	}
	if (func_187())
	{
		return 1;
	}
	if (!func_168())
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (!func_186(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
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

int func_186(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0) == unk_0x4A8C381C258A124D() && unk_0xC39AE5D390581AD5(iParam0, 0, 1))
		{
			switch (unk_0x4B423FAA24E8ABF0(iParam0))
			{
				case joaat("maverick"):
					return 0;
					break;
				}
			}
	}
	return 0;
}

bool func_187()
{
	return BitTest(Global_1956900, 0);
}

int func_188()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_195())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_194())
	{
		return 1;
	}
	if (func_193(159))
	{
		if (!func_192())
		{
			return 1;
		}
	}
	if (func_193(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_189() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_189()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_189()
{
	switch (func_191())
	{
		case 0:
			return func_190();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_190()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_191()
{
	return Global_32948;
}

bool func_192()
{
	return Global_2684504.f_700;
}

int func_193(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_194()
{
	return Global_2696172;
}

bool func_195()
{
	return Global_2684504.f_695;
}

void func_196()
{
	system::wait(0);
}

void func_197(bool bParam0)
{
	int iVar0;
	
	if (!func_168())
	{
		if (func_170("HUNTGUN_1b"))
		{
			unk_0x428C32CC68809A35(1);
		}
		unk_0x80F87A4A3B930613();
	}
	if (func_49(func_31()))
	{
		unk_0xE3F88173F42C071B();
	}
	unk_0x633E3833FB96BCCB("helicopterhud");
	unk_0x633E3833FB96BCCB("droneHUD");
	unk_0xD314260005F064BF(&(Local_135.f_62));
	func_205();
	func_204();
	if (func_112())
	{
		func_111(0);
	}
	unk_0xF3E3EA936C653F22();
	unk_0x33311EBA9464741D();
	if (func_148() && !func_124(unk_0x259BE71D8A81D4FA()))
	{
		if (!unk_0x705A7AB2D4BC0A9B())
		{
			func_140(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), false);
		}
	}
	func_52(&(Local_135.f_113));
	func_52(&(Local_135.f_115));
	func_52(&(Local_135.f_117));
	func_52(&(Local_135.f_119));
	func_134(0);
	func_133(0);
	Local_135.f_32 = -1;
	Local_135.f_31 = 0;
	Local_135.f_5 = 0;
	Local_135.f_24 = 0;
	Local_135.f_26 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_135.f_17[iVar0] = 0;
		func_52(&(Local_135.f_121[iVar0 /*2*/]));
		iVar0++;
	}
	func_89();
	if (BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_401, 0))
	{
		unk_0x8744D2E3FC95740E(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_401), false);
	}
	Local_135.f_48 = 0;
	func_203();
	func_201(1, -1);
	if (unk_0xC450B06E5AAA0985(Local_135.f_108))
	{
		unk_0xFE54B8568B2ABD12(&(Local_135.f_108));
	}
	if (unk_0xC450B06E5AAA0985(Local_135.f_109))
	{
		unk_0xFE54B8568B2ABD12(&(Local_135.f_109));
	}
	if (!bParam0)
	{
		func_200(0);
		func_199();
	}
	else
	{
		func_198(0);
	}
}

void func_198(bool bParam0)
{
	int iVar0;
	
	Local_135.f_33 = 100;
	Local_135.f_59 = 50f;
	Local_135.f_62 = unk_0x8DE4F68A9728925E(func_39());
	unk_0x91476A70AA1CB09A("SCRIPT\POLICE_CHOPPER_CAM", 0, -1);
	unk_0xD0D00ED689D6CA81("helicopterhud", 0);
	unk_0xD0D00ED689D6CA81("droneHUD", 0);
	Local_135.f_29 = unk_0xCA369FBC0DE29517();
	Local_135.f_30 = unk_0xCA369FBC0DE29517();
	func_113(0);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_135.f_34[iVar0] = -1;
		Local_135.f_41[iVar0] = -1;
		iVar0++;
	}
	if (bParam0)
	{
	}
}

void func_199()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		if (!func_187())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956900, false);
		}
	}
	else if (func_187())
	{
		unk_0x8744D2E3FC95740E(&Global_1956900, false);
	}
}

void func_201(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_19(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23831.f_9116)
	{
		unk_0xDCFF86AAD108A201(15);
		Global_23831.f_9116 = 0;
	}
	unk_0x043244A32AD6E17D(0f);
	if (Global_23831.f_6231[iVar0])
	{
		unk_0xA790E8E6FD7393AC(9, 0);
		Global_23831.f_6231[iVar0] = 0;
	}
	if (Global_23831.f_6217[iVar0])
	{
		unk_0x633E3833FB96BCCB("CommonMenu");
		Global_23831.f_6217[iVar0] = 0;
	}
	if (Global_23831.f_6224[iVar0])
	{
		unk_0x633E3833FB96BCCB("MPShopSale");
		Global_23831.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_202(&(Global_23831.f_6263[iVar0 /*10*/]));
		Global_23831.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23831.f_6324[iVar0] = 0;
	}
	unk_0x633E3833FB96BCCB("Shared");
}

void func_202(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			unk_0xD314260005F064BF(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

void func_203()
{
	if (Local_135.f_30 != -1)
	{
		unk_0x8E4825CCACA34B58(Local_135.f_30);
		unk_0x394AFAC073E1F277(Local_135.f_30);
		Local_135.f_30 = -1;
	}
	if (Local_135.f_29 != -1)
	{
		unk_0x8E4825CCACA34B58(Local_135.f_29);
		unk_0x394AFAC073E1F277(Local_135.f_29);
		Local_135.f_29 = -1;
	}
	if (Local_135.f_49 != -1)
	{
		unk_0x8E4825CCACA34B58(Local_135.f_49);
		unk_0x394AFAC073E1F277(Local_135.f_49);
		Local_135.f_49 = -1;
	}
	unk_0xB43467C43086A6A1("DLC_GR_MOC_Turret_View_Scene");
	unk_0x37EFCB45A4F13EB5();
}

void func_204()
{
	if (Local_135.f_6 == -1)
	{
		unk_0x8E4825CCACA34B58(Local_135.f_6);
		unk_0x394AFAC073E1F277(Local_135.f_6);
		Local_135.f_6 = -1;
	}
}

void func_205()
{
	if (unk_0x78411E34CF90EA8C(Local_135.f_61))
	{
		unk_0x85E6A1E36B5E2E4D(Local_135.f_61, 0);
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		unk_0x80F87A4A3B930613();
	}
}

void func_206(struct<19> Param0, var uParam1, var uParam2)
{
	unk_0xDB2434E51017FFCC(32, 0, Param0.f_16);
	func_209(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&uLocal_134, 1, 0);
	unk_0x7B13DC83218D9AF5(&uLocal_101, 33, 0);
	if (!func_208())
	{
		func_197(0);
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
	}
	else
	{
		func_197(0);
	}
	if (Param0.f_18 == 1)
	{
		func_207(1);
	}
	else
	{
		func_207(0);
	}
	func_198(1);
}

void func_207(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Local_135.f_5, 7))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_135.f_5), 7);
		}
	}
	else if (BitTest(Local_135.f_5, 7))
	{
		unk_0x8744D2E3FC95740E(&(Local_135.f_5), 7);
	}
}

int func_208()
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
		if (func_195())
		{
			return 0;
		}
		if (func_193(157))
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

int func_209(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_199();
			}
			else
			{
				return 0;
			}
		}
		if (!func_210(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_199();
					}
					else
					{
						return 0;
					}
				}
				if (func_195())
				{
					if (!bParam2)
					{
						func_199();
					}
					else
					{
						return 0;
					}
				}
				if (func_193(157))
				{
					if (!bParam2)
					{
						func_199();
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
					func_199();
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
				func_199();
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
			func_199();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_210(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

