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
	struct<26> Local_18 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	char cLocal_25[32] = "";
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
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
	iLocal_24 = -99;
	StringCopy(&cLocal_25, "TRACKID", 32);
	unk_0x51CC1333A10C4E09();
	unk_0xF2CB0224D3BE0B42(&cLocal_25, 1);
	while (!unk_0xDCB78A15E5F495DC(1))
	{
		system::wait(0);
	}
	func_15();
	func_14();
	func_11();
	system::settimera(0);
	while (true)
	{
		system::wait(0);
		if (iLocal_31)
		{
			if (iLocal_33 < 101)
			{
				if (system::timera() > 30)
				{
					iLocal_33++;
					unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(23);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(1);
					func_10("CELL_4005");
					unk_0x330108B080A2132F(iLocal_33);
					unk_0xE6B753D52F4CA222();
					func_9(Global_20911, "DISPLAY_VIEW", 23f, system::to_float(0), -1082130432, -1082130432, -1082130432);
					system::settimera(0);
				}
			}
			else
			{
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(23);
				unk_0x330108B080A2132F(0);
				unk_0x330108B080A2132F(2);
				func_10("CELL_4006");
				func_10("CELL_4007");
				unk_0xE6B753D52F4CA222();
				func_9(Global_20911, "DISPLAY_VIEW", 23f, system::to_float(0), -1082130432, -1082130432, -1082130432);
				iLocal_32 = 1;
				iLocal_31 = 0;
			}
		}
		if (Global_20930.f_1 != 9)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					func_8();
					if (iLocal_30 == 0)
					{
						func_6();
					}
					break;
				
				case 8:
					if (func_5(2, Global_20898, 0))
					{
						func_4();
						iLocal_31 = 0;
						iLocal_32 = 0;
						Global_20908 = 1;
						func_14();
						if (Global_20930.f_1 > 3)
						{
							Global_20930.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_20932 = 6;
			func_2();
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
	iLocal_31 = 0;
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
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20919, 1);
	}
}

int func_5(int iParam0, var uParam1, int iParam2)
{
	if (unk_0x875A214D5EBCA509(iParam0, uParam1) || (iParam2 == 1 && unk_0xDEE3EFEA31A1F555(iParam0, uParam1)))
	{
		if (unk_0x761778199FE1211C())
		{
			if (unk_0x66DA7155B68E7638() == 0 || (unk_0xA43CD45F18522E3F() && unk_0xAE231F549813BBDF(2)))
			{
				return 0;
			}
		}
		if (unk_0x4D9174D8796EA622() || unk_0xB11671B812399BA2())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_6()
{
	if (system::timera() > 2200)
	{
		if (Global_20918)
		{
			func_7(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		iLocal_30 = 1;
	}
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_10(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		func_10(sParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam9))
	{
		func_10(sParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam10))
	{
		func_10(sParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam11))
	{
		func_10(sParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_8()
{
	if (Global_20908 == 0)
	{
		if (func_5(2, Global_20899, 0))
		{
			if ((iLocal_30 && iLocal_32 == 0) && iLocal_31 == 0)
			{
				iLocal_33 = 0;
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(23);
				unk_0x330108B080A2132F(0);
				unk_0x330108B080A2132F(1);
				func_10("CELL_4005");
				unk_0x330108B080A2132F(iLocal_33);
				unk_0xE6B753D52F4CA222();
				func_9(Global_20911, "DISPLAY_VIEW", 23f, system::to_float(0), -1082130432, -1082130432, -1082130432);
				if (Global_20918)
				{
					func_7(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					func_7(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
				}
				else
				{
					func_7(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					func_7(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_7(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8800, 17);
				iLocal_31 = 1;
				system::settimera(0);
			}
		}
	}
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_10(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_11()
{
	int iVar0;
	
	func_13(134, 1);
	iVar0 = unk_0xE1799BB6E4C1CDFB();
	switch (func_12(iVar0))
	{
		case 1:
			func_13(82, 1);
			break;
		
		case 2:
			func_13(81, 1);
			break;
		
		default:
			func_13(83, 1);
			break;
	}
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

void func_13(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	if (Global_59908[iParam0 /*7*/])
	{
		unk_0xDF7F16323520B858(Global_59908[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x1164A75E490C27B6(Global_59908[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_14()
{
	unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(23);
	unk_0x330108B080A2132F(0);
	unk_0x330108B080A2132F(0);
	func_10("CELL_4001");
	func_10(&Local_18);
	func_10(&(Local_18.f_16));
	func_10("CELL_4002");
	unk_0x330108B080A2132F(Local_18.f_24);
	func_10("CELL_4003");
	func_10(&(Local_18.f_25));
	func_10("CELL_4004");
	unk_0xE6B753D52F4CA222();
	func_9(Global_20911, "DISPLAY_VIEW", 23f, system::to_float(0), -1082130432, -1082130432, -1082130432);
	if (Global_20918)
	{
		if (iLocal_30)
		{
			func_7(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		func_7(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		if (iLocal_30)
		{
			func_7(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_7(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_7(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8800, 17);
}

void func_15()
{
	iLocal_24 = unk_0x6E5F2B4C6A398419();
	StringCopy(&Local_18, "", 64);
	StringIntConCat(&Local_18, iLocal_24, 64);
	StringConCat(&Local_18, "S", 64);
	StringCopy(&(Local_18.f_16), "", 32);
	StringIntConCat(&(Local_18.f_16), iLocal_24, 32);
	StringConCat(&(Local_18.f_16), "A", 32);
	StringCopy(&(Local_18.f_25), unk_0xA9CB3A11303C5801(), 24);
	if (!unk_0x6BA487C862DB8DDF(&Local_18))
	{
		StringCopy(&Local_18, "CELL_195", 64);
	}
	if (!unk_0x6BA487C862DB8DDF(&(Local_18.f_16)))
	{
		StringCopy(&(Local_18.f_16), "CELL_195", 32);
		StringCopy(&(Local_18.f_25), "CELL_195", 24);
	}
}

