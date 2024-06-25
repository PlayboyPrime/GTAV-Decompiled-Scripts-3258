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
	int iLocal_16[4] = { 0, 0, 0, 0 };
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	int iLocal_25 = 0;
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
	fLocal_21 = 0,72f;
	fLocal_22 = 0,42f;
	fLocal_23 = 0f;
	fLocal_24 = 0f;
	unk_0x51CC1333A10C4E09();
	Global_23352 = 0;
	Global_21144 = 0;
	func_18();
	Global_20930.f_1 = 7;
	func_17(Global_20911, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_16(Global_20911, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
	while (true)
	{
		system::wait(0);
		if (Global_20930.f_1 != 9)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					if (Global_23352 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
				
				case 8:
					if (Global_23352 == 1)
					{
						func_5();
					}
					break;
				
				case 3:
					unk_0xBBC29EBE6E1A48FA();
					break;
				
				default:
					break;
			}
			if (Global_23352 == 0)
			{
				if (func_4())
				{
					func_3();
				}
			}
			else if (func_2(2, Global_20898, 0))
			{
				Global_20908 = 1;
				Global_23352 = 0;
				Global_20930.f_1 = 7;
				func_18();
				func_17(Global_20911, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_16(Global_20911, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
			}
		}
		if (func_1())
		{
			func_3();
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

int func_2(int iParam0, int iParam1, int iParam2)
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

void func_3()
{
	unk_0xBBC29EBE6E1A48FA();
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
	unk_0x81645EE95A114FAE(0,824f, 0,5f, 0,253f, 0,313f, 0, 0, 0, 155, 0);
	func_6();
}

void func_6()
{
	int iVar0;
	
	fLocal_23 = fLocal_21;
	fLocal_24 = fLocal_22;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(fLocal_23, fLocal_24, &(Global_2169[Global_23574[iLocal_19 /*9*/] /*29*/].f_3), 0);
	fLocal_23 = (fLocal_23 + 0,07f);
	func_10(255, 255, 255, 205);
	if (Global_23574[iLocal_19 /*9*/].f_2.f_1 < 10)
	{
		func_7(fLocal_23, fLocal_24, "CELL_506", Global_23574[iLocal_19 /*9*/].f_2.f_2, Global_23574[iLocal_19 /*9*/].f_2.f_1);
	}
	else
	{
		func_7(fLocal_23, fLocal_24, "CELL_503", Global_23574[iLocal_19 /*9*/].f_2.f_2, Global_23574[iLocal_19 /*9*/].f_2.f_1);
	}
	fLocal_23 = (fLocal_23 + 0,07f);
	func_10(255, 255, 255, 205);
	func_7(fLocal_23, fLocal_24, "CELL_505", Global_23574[iLocal_19 /*9*/].f_2.f_3, Global_23574[iLocal_19 /*9*/].f_2.f_4);
	fLocal_23 = fLocal_21;
	func_10(255, 255, 255, 205);
	fLocal_24 = (fLocal_24 + 0,02f);
	if (Global_23405[Global_23574[iLocal_19 /*9*/].f_1 /*42*/].f_8 == 0)
	{
		func_9();
	}
	unk_0xE05EB1EAE7CCDC59(0f, 0,93f);
	func_8(fLocal_23, fLocal_24, &(Global_23405[Global_23574[iLocal_19 /*9*/].f_1 /*42*/].f_4), 0);
	fLocal_24 = (fLocal_24 + 0,07f);
	iVar0 = 1;
	while (iVar0 <= Global_23405[Global_23574[iLocal_19 /*9*/].f_1 /*42*/].f_9)
	{
		func_10(255, 255, 255, 255);
		fLocal_24 = (fLocal_24 + 0,04f);
		if (Global_23405[Global_23574[iLocal_19 /*9*/].f_1 /*42*/].f_32[iVar0] == -1)
		{
			func_8(fLocal_23, fLocal_24, &(Global_23405[Global_23574[iLocal_19 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), 0);
		}
		else
		{
			func_7(fLocal_23, fLocal_24, &(Global_23405[Global_23574[iLocal_19 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), Global_23405[Global_23574[iLocal_19 /*9*/].f_1 /*42*/].f_27[iVar0], Global_23405[Global_23574[iLocal_19 /*9*/].f_1 /*42*/].f_32[iVar0]);
		}
		iVar0++;
	}
}

void func_7(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x511D14ED2DA887E1(uParam3);
	unk_0x511D14ED2DA887E1(uParam4);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, 0);
}

void func_8(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xEAEB6E7D3FAEBD5B(uParam2);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, iParam3);
}

void func_9()
{
	unk_0xBFE94E91C83D8794(0,4f, 0,4f);
	unk_0x5A18938160AE52D0(255, 128, 0, 255);
	unk_0xB91BC43E3A58E2C8(1, 0, 78, 255, 255);
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xBFE94E91C83D8794(0,3f, 0,3f);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(1, 0, 0, 0, 205);
	unk_0xEA62FB8CA7210CF3(1);
	unk_0x8413CD3BCEEAD8DC(0);
	unk_0x5A18938160AE52D0(iParam0, iParam1, iParam2, iParam3);
}

void func_11()
{
	if (func_2(2, Global_20899, 0))
	{
		iLocal_19 = iLocal_16[iLocal_18];
		Global_23352 = 1;
		func_12(Global_20911, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287", "CELL_280", "CELL_285", "CELL_284", 0);
		func_17(Global_20911, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_16(Global_20911, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
		Global_20930.f_1 = 8;
		Global_23352 = 1;
	}
}

void func_12(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
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
		func_13(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		func_13(sParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam9))
	{
		func_13(iParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_13(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_13(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_13(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_14()
{
	if (iLocal_25)
	{
		if (system::timera() > 50)
		{
			iLocal_25 = 0;
		}
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		if (func_2(2, 181, 0))
		{
			if (iLocal_18 > 0)
			{
				iLocal_18 = (iLocal_18 - 1);
			}
		}
		if (func_2(2, 180, 0))
		{
			iLocal_18++;
			if (iLocal_18 == iLocal_17)
			{
				iLocal_18 = 0;
			}
		}
	}
	if (iLocal_25 == 0)
	{
		if (func_2(2, Global_20906, 0))
		{
			if (iLocal_18 > 0)
			{
				iLocal_18 = (iLocal_18 - 1);
			}
			iLocal_25 = 1;
			system::settimera(0);
		}
		if (func_2(2, Global_20907, 0))
		{
			iLocal_18++;
			if (iLocal_18 == iLocal_17)
			{
				iLocal_18 = 0;
			}
			iLocal_25 = 1;
			system::settimera(0);
		}
	}
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	fLocal_23 = fLocal_21;
	fLocal_24 = fLocal_22;
	iLocal_20 = iLocal_17;
	while (iVar0 < iLocal_20)
	{
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_18)
		{
			func_9();
		}
		func_8(fLocal_23, fLocal_24, &(Global_2169[Global_23574[iLocal_16[iVar0] /*9*/] /*29*/].f_3), 0);
		fLocal_23 = (fLocal_23 + 0,07f);
		func_10(255, 255, 255, 205);
		if (Global_23574[iLocal_16[iVar0] /*9*/].f_2.f_1 < 10)
		{
			func_7(fLocal_23, fLocal_24, "CELL_506", Global_23574[iLocal_16[iVar0] /*9*/].f_2.f_2, Global_23574[iLocal_16[iVar0] /*9*/].f_2.f_1);
		}
		else
		{
			func_7(fLocal_23, fLocal_24, "CELL_503", Global_23574[iLocal_16[iVar0] /*9*/].f_2.f_2, Global_23574[iLocal_16[iVar0] /*9*/].f_2.f_1);
		}
		fLocal_23 = (fLocal_23 + 0,07f);
		func_10(255, 255, 255, 205);
		func_7(fLocal_23, fLocal_24, "CELL_505", Global_23574[iLocal_16[iVar0] /*9*/].f_2.f_3, Global_23574[iLocal_16[iVar0] /*9*/].f_2.f_4);
		fLocal_23 = fLocal_21;
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_18)
		{
			func_9();
		}
		fLocal_24 = (fLocal_24 + 0,02f);
		unk_0xE05EB1EAE7CCDC59(0f, 0,93f);
		func_8(fLocal_23, fLocal_24, &(Global_23405[Global_23574[iLocal_16[iVar0] /*9*/].f_1 /*42*/]), 0);
		fLocal_24 = (fLocal_24 + 0,05f);
		iVar0++;
	}
}

void func_16(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_13(sParam2);
	if (!unk_0xD6F9DEE4765092A9(iParam3))
	{
		func_13(iParam3);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam4))
	{
		func_13(iParam4);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam5))
	{
		func_13(iParam5);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam6))
	{
		func_13(iParam6);
	}
	unk_0xE6B753D52F4CA222();
}

void func_17(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_18()
{
	int iVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_17 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		iVar3 = 3;
		Global_23574[iVar3 /*9*/].f_2 = -1;
		Global_23574[iVar3 /*9*/].f_2.f_1 = 0;
		Global_23574[iVar3 /*9*/].f_2.f_2 = 0;
		Global_23574[iVar3 /*9*/].f_2.f_3 = 0;
		Global_23574[iVar3 /*9*/].f_2.f_5 = 0;
		while (iVar2 < 4)
		{
			if (iVar0[iVar2] == 0)
			{
				if (Global_23574[iVar2 /*9*/].f_8 != 0)
				{
					if (func_19(Global_23574[iVar2 /*9*/].f_2, Global_23574[iVar3 /*9*/].f_2))
					{
						iVar3 = iVar2;
					}
				}
			}
			iVar2++;
		}
		iLocal_16[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_23574[iVar1 /*9*/].f_8 != 0)
		{
			iLocal_17++;
		}
		iVar1++;
	}
	func_12(Global_20911, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287", "CELL_280", 0, 0, 0);
}

int func_19(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

