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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
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
	unk_0x51CC1333A10C4E09();
	iLocal_19 = 0;
	if (iLocal_18 == 0)
	{
		func_10();
		func_9();
		iLocal_18 = 1;
	}
	while (true)
	{
		system::wait(0);
		if (Global_20930.f_1 != 9)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					if (iLocal_19 == 1)
					{
						if (func_8(2, Global_20899, 0))
						{
							unk_0xBF3D28CA44F3BE2D(-1, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", 1);
							Global_20908 = 1;
							func_10();
							func_5();
							system::settimera(0);
							system::settimerb(0);
						}
					}
					if (iLocal_19 == 2)
					{
						if (system::timerb() > 499)
						{
							system::settimerb(0);
						}
						if (system::timera() > 2200)
						{
							iLocal_19 = 3;
						}
					}
					if (iLocal_19 == 3)
					{
						Global_1836173 = 1;
					}
					break;
				
				case 8:
					if (func_8(2, Global_20898, 0))
					{
						func_4();
						Global_20908 = 1;
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
	unk_0x48FA483FE4F18CFE("DLC_MPHEIST/HEIST_HACK_SNAKE");
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

void func_5()
{
	if (Global_20918)
	{
		func_6(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8800, 17);
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_7(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam8))
	{
		func_7(iParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam9))
	{
		func_7(iParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_7(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_7(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_7(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

int func_8(int iParam0, var uParam1, int iParam2)
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

void func_9()
{
	if (Global_20918)
	{
		func_6(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8800, 17);
}

void func_10()
{
	if (iLocal_19 == 0)
	{
		unk_0xD7E1DF759CD0FFF2("DLC_MPHEIST/HEIST_HACK_SNAKE", 0, -1);
		while (unk_0xD7E1DF759CD0FFF2("DLC_MPHEIST/HEIST_HACK_SNAKE", 0, -1) == 0)
		{
			system::wait(0);
		}
		func_11(Global_20911, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
		unk_0x330108B080A2132F(23);
		unk_0x330108B080A2132F(0);
		unk_0x330108B080A2132F(-99);
		unk_0x330108B080A2132F(0);
		unk_0x330108B080A2132F(100);
		unk_0x330108B080A2132F(2);
		unk_0x557F1E2300EF1A3E(0);
		if (BitTest(Global_8802, 1))
		{
			unk_0x74BF156C860580D4(0f);
		}
		unk_0xE6B753D52F4CA222();
		func_11(Global_20911, "DISPLAY_VIEW", 23f, system::to_float(1), -1082130432, -1082130432, -1082130432);
		iLocal_19 = 1;
	}
	else if (iLocal_19 == 1)
	{
		func_11(Global_20911, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
		unk_0x330108B080A2132F(23);
		unk_0x330108B080A2132F(0);
		unk_0x330108B080A2132F(-99);
		unk_0x330108B080A2132F(0);
		unk_0x330108B080A2132F(100);
		unk_0x330108B080A2132F(3);
		unk_0x557F1E2300EF1A3E(0);
		if (BitTest(Global_8802, 1))
		{
			unk_0x74BF156C860580D4(0f);
		}
		unk_0xE6B753D52F4CA222();
		func_11(Global_20911, "DISPLAY_VIEW", 23f, system::to_float(1), -1082130432, -1082130432, -1082130432);
		iLocal_19 = 2;
	}
}

void func_11(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

