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
	struct<3> Local_18 = { 0, 0, 0 } ;
	float fLocal_19 = 0f;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
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
	fLocal_23 = 9,99f;
	fLocal_24 = 0f;
	fLocal_25 = 0f;
	fLocal_26 = 0f;
	unk_0x51CC1333A10C4E09();
	func_10();
	func_7();
	system::settimera(0);
	system::settimerb(0);
	while (true)
	{
		system::wait(0);
		if (Global_20930.f_1 != 9)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					if (system::timera() > 125)
					{
						func_10();
						system::settimera(0);
					}
					if (system::timerb() > system::floor(fLocal_25) * 30 && system::timerb() > 150)
					{
						unk_0x88F483FBD433696A(Global_20911, "APP_FUNCTION");
						unk_0x330108B080A2132F(1);
						unk_0xE6B753D52F4CA222();
						system::settimerb(0);
					}
					if (system::timerb() > 2000)
					{
						unk_0x88F483FBD433696A(Global_20911, "APP_FUNCTION");
						unk_0x330108B080A2132F(1);
						unk_0xE6B753D52F4CA222();
						system::settimerb(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_20898, 0))
					{
						func_5();
						Global_20908 = 1;
						func_10();
						func_7();
						if (Global_20930.f_1 > 3)
						{
							Global_20930.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	unk_0x8744D2E3FC95740E(&Global_8801, 22);
	unk_0xBBC29EBE6E1A48FA();
}

void func_3(int iParam0, int iParam1)
{
	Global_4543337[iParam0] = iParam1;
}

int func_4()
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20919, 1);
	}
}

int func_6(int iParam0, var uParam1, int iParam2)
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

void func_7()
{
	if (Global_20918)
	{
		func_8(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8800, 17);
}

void func_8(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_9(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam8))
	{
		func_9(iParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam9))
	{
		func_9(iParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_9(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_9(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_9(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_10()
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			Local_18 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			fLocal_19 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
			func_17();
			func_16();
			func_15();
			fLocal_20 = (360f - fLocal_19);
			fLocal_23 = (fLocal_23 - fLocal_20);
			if (fLocal_23 < 0f)
			{
				fLocal_23 = (fLocal_23 + 360f);
			}
			if (iLocal_27 == 0)
			{
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(23);
				unk_0x330108B080A2132F(0);
				if (BitTest(Global_8801, 30))
				{
					unk_0x330108B080A2132F(-99);
					unk_0x330108B080A2132F(0);
				}
				else
				{
					unk_0x330108B080A2132F(system::floor(fLocal_23));
					unk_0x330108B080A2132F(system::floor(fLocal_24));
				}
				unk_0x330108B080A2132F(100);
				if (BitTest(Global_8801, 22))
				{
					unk_0x330108B080A2132F(1);
				}
				else
				{
					unk_0x330108B080A2132F(0);
				}
				if (BitTest(Global_8801, 29))
				{
					unk_0x557F1E2300EF1A3E(0);
				}
				else
				{
					unk_0x557F1E2300EF1A3E(1);
				}
				if (BitTest(Global_8802, 1))
				{
					unk_0x74BF156C860580D4(fLocal_26);
				}
				unk_0xE6B753D52F4CA222();
			}
			if (fLocal_19 == fLocal_19)
			{
			}
			func_14(Global_20911, "DISPLAY_VIEW", 23f, system::to_float(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		Local_18 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		fLocal_19 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
		if (Global_4543359 > 21)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_4543359)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_20 = (360f - fLocal_19);
			fLocal_23 = (fLocal_23 - fLocal_20);
			if (fLocal_23 < 0f)
			{
				fLocal_23 = (fLocal_23 + 360f);
			}
			if (iLocal_27 == 0)
			{
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(23);
				unk_0x330108B080A2132F(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (BitTest(Global_4543084, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (BitTest(Global_4543084, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (BitTest(Global_4543084, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (BitTest(Global_4543084, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					unk_0x330108B080A2132F(-99);
					unk_0x330108B080A2132F(0);
				}
				else
				{
					unk_0x330108B080A2132F(system::floor(fLocal_23));
					unk_0x330108B080A2132F(system::floor(fLocal_24));
				}
				unk_0x330108B080A2132F(100);
				if (BitTest(Global_8801, 22))
				{
					unk_0x557F1E2300EF1A3E(1);
				}
				else
				{
					unk_0x557F1E2300EF1A3E(1);
				}
				if (BitTest(Global_8801, 29))
				{
					unk_0x557F1E2300EF1A3E(0);
				}
				else
				{
					unk_0x557F1E2300EF1A3E(1);
				}
				unk_0x74BF156C860580D4(fLocal_26);
				unk_0x330108B080A2132F(Global_4543337[iVar0]);
				unk_0xE6B753D52F4CA222();
			}
			if (fLocal_19 == fLocal_19)
			{
			}
			func_14(Global_20911, "DISPLAY_VIEW", 23f, system::to_float(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_21 = (Global_4543273[iParam0 /*3*/] - Local_18.f_0);
	fLocal_22 = (system::cos(((3,14159f / 180f) * Local_18.f_0)) * (Global_4543273[iParam0 /*3*/].f_1 - Local_18.f_1));
	fLocal_23 = unk_0x4964D7A2BFD2F9A3(fLocal_21, fLocal_22);
	if (fLocal_23 < 0f)
	{
		fLocal_23 = (fLocal_23 + 360f);
	}
	return fLocal_23;
}

float func_12(int iParam0)
{
	fLocal_25 = system::sqrt(system::vdist2(Global_4543273[iParam0 /*3*/], Local_18));
	fLocal_26 = (Global_4543273[iParam0 /*3*/].f_2 - Local_18.f_2);
	return fLocal_25;
}

float func_13(int iParam0)
{
	fLocal_24 = system::sqrt((((Global_4543273[iParam0 /*3*/] - Local_18.f_0) * (Global_4543273[iParam0 /*3*/] - Local_18.f_0)) + ((Global_4543273[iParam0 /*3*/].f_1 - Local_18.f_1) * (Global_4543273[iParam0 /*3*/].f_1 - Local_18.f_1))));
	return fLocal_24;
}

void func_14(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_15()
{
	fLocal_21 = (Global_23392 - Local_18.f_0);
	fLocal_22 = (system::cos(((3,14159f / 180f) * Local_18.f_0)) * (Global_23392.f_1 - Local_18.f_1));
	fLocal_23 = unk_0x4964D7A2BFD2F9A3(fLocal_21, fLocal_22);
	if (fLocal_23 < 0f)
	{
		fLocal_23 = (fLocal_23 + 360f);
	}
	return fLocal_23;
}

float func_16()
{
	fLocal_25 = system::sqrt(system::vdist2(Global_23392, Local_18));
	fLocal_26 = (Global_23392.f_2 - Local_18.f_2);
	return fLocal_25;
}

float func_17()
{
	fLocal_24 = system::sqrt((((Global_23392 - Local_18.f_0) * (Global_23392 - Local_18.f_0)) + ((Global_23392.f_1 - Local_18.f_1) * (Global_23392.f_1 - Local_18.f_1))));
	return fLocal_24;
}

int func_18()
{
	if (Global_79389 == 1)
	{
		return 1;
	}
	return 0;
}

