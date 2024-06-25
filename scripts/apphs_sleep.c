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
	int iLocal_16[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	int iLocal_27 = 0;
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
	fLocal_23 = 0,82f;
	fLocal_24 = 0,42f;
	fLocal_25 = 0f;
	fLocal_26 = 0f;
	unk_0x51CC1333A10C4E09();
	func_28();
	iLocal_22 = 1;
	func_27();
	func_26();
	while (true)
	{
		system::wait(0);
		if (Global_20930.f_1 != 9)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					func_21();
					if (iLocal_22)
					{
						func_18();
					}
					else
					{
						func_12();
					}
					break;
				
				case 8:
					func_21();
					func_12();
					if (func_11(2, Global_20898, 0))
					{
						func_10();
						Global_20908 = 1;
						func_9(Global_20911, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
						if (Global_20930.f_1 > 3)
						{
							Global_20930.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
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
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_3()
{
	if (Global_9605[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9605[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9605[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x8744D2E3FC95740E(&Global_8800, 25);
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 11);
}

int func_4(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_44042);
}

int func_6(int iParam0, int iParam1)
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

void func_7()
{
	func_28();
	Global_9605[Global_20930 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
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

void func_10()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20919, 1);
	}
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x875A214D5EBCA509(iParam0, iParam1) || (iParam2 == 1 && unk_0xDEE3EFEA31A1F555(iParam0, iParam1)))
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

void func_12()
{
	if (Global_20908 == 0)
	{
		if (func_11(2, Global_20899, 0))
		{
			func_15();
			Global_20908 = 1;
			func_28();
			unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
			uLocal_19 = unk_0x6CA3F2B87712B6A4();
			while (!unk_0xA6F779AA284EB20E(uLocal_19))
			{
				system::wait(0);
			}
			Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_259 = iLocal_16[unk_0x5DEF122A58D4F685(uLocal_19)];
			func_13(Global_20911, "SET_HEADER", &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
			{
				func_9(Global_20911, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else
			{
				func_9(Global_20911, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_14(sParam2);
	if (!unk_0xD6F9DEE4765092A9(iParam3))
	{
		func_14(iParam3);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam4))
	{
		func_14(iParam4);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam5))
	{
		func_14(iParam5);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam6))
	{
		func_14(iParam6);
	}
	unk_0xE6B753D52F4CA222();
}

void func_14(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_15()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20919, 1);
		func_16();
	}
}

void func_16()
{
	if (func_17())
	{
		unk_0xBF3F90E670404C44(5);
	}
}

int func_17()
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

void func_18()
{
	Global_20908 = 1;
	iLocal_21 = 0;
	iLocal_22 = 0;
	func_19();
}

void func_19()
{
	int iVar0[15];
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_9(Global_20911, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_28();
	iLocal_17 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_84[iVar3] = 5000;
		while (iVar2 < 9)
		{
			if (Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_124[iVar2] == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_84[iVar2] < Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_84[iVar3])
					{
						iVar3 = iVar2;
						func_20(Global_20911, "SET_DATA_SLOT", system::to_float(13), system::to_float(iVar1), system::to_float(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_104[iVar3]), -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[iVar3 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar2++;
		}
		iLocal_16[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_124[iVar1] == 1)
		{
			iLocal_17++;
		}
		iVar1++;
	}
	func_9(Global_20911, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20911, "SET_HEADER", &(Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_7[Global_9605[Global_20930 /*2811*/][iLocal_21 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_20918)
	{
		func_20(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8800, 17);
}

void func_20(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_14(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam8))
	{
		func_14(iParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam9))
	{
		func_14(iParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_14(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_14(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_21()
{
	if (iLocal_27)
	{
		if (system::timera() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		if (func_11(2, 181, 0))
		{
			if (iLocal_18 > 0)
			{
				iLocal_18 = (iLocal_18 - 1);
			}
			func_24();
		}
		if (func_11(2, 180, 0))
		{
			iLocal_18++;
			if (iLocal_18 == iLocal_17)
			{
				iLocal_18 = 0;
			}
			func_22();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_11(2, Global_20906, 0))
		{
			if (iLocal_18 > 0)
			{
				iLocal_18 = (iLocal_18 - 1);
			}
			func_24();
			iLocal_27 = 1;
			system::settimera(0);
		}
		if (func_11(2, Global_20907, 0))
		{
			iLocal_18++;
			if (iLocal_18 == iLocal_17)
			{
				iLocal_18 = 0;
			}
			func_22();
			iLocal_27 = 1;
			system::settimera(0);
		}
	}
}

void func_22()
{
	func_9(Global_20911, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_23();
}

void func_23()
{
	if (func_17())
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

void func_24()
{
	func_9(Global_20911, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_25();
}

void func_25()
{
	if (func_17())
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

void func_26()
{
	int iVar0[15];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_17 = 0;
	iVar1 = 0;
	func_28();
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_9605[Global_20930 /*2811*/][iVar3 /*281*/] = 5000;
		while (iVar2 < 9)
		{
			if (Global_9605[Global_20930 /*2811*/][iVar2 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (iVar2 == 0)
					{
						if (Global_9605[Global_20930 /*2811*/][iVar2 /*281*/] < Global_9605[Global_20930 /*2811*/][iVar3 /*281*/])
						{
							iVar3 = iVar2;
							func_20(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), -1f, -1f, -1f, &(Global_9605[Global_20930 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_16[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_9605[Global_20930 /*2811*/][iVar1 /*281*/].f_280 == 1)
		{
			iLocal_17++;
		}
		iVar1++;
	}
	func_9(Global_20911, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_20911, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_20918)
	{
		func_20(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8800, 17);
}

void func_27()
{
	if (Global_44042 != 15)
	{
		func_28();
		Global_9605[Global_20930 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

void func_28()
{
	if (func_35(14))
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
		Global_20930 = func_29();
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

var func_29()
{
	func_30();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_30()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_33(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_32(unk_0x4A8C381C258A124D());
			if (func_31(iVar0) && (!func_35(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_31(Global_113969.f_2366.f_539.f_4321))
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

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_34(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_35(int iParam0)
{
	return Global_44042 == iParam0;
}

