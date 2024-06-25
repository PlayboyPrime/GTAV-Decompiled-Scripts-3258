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
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	char cLocal_28[16] = "";
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	char cLocal_31[16] = "";
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	char cLocal_34[16] = "";
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	char cLocal_37[16] = "";
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	char cLocal_40[16] = "";
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	char cLocal_43[16] = "";
	var uLocal_44 = 0;
	var uLocal_45 = 0;
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
	StringCopy(&cLocal_28, "CELL_212", 16);
	StringCopy(&cLocal_31, "CELL_213", 16);
	StringCopy(&cLocal_34, "CELL_39", 16);
	StringCopy(&cLocal_37, "CELL_MP_300", 16);
	StringCopy(&cLocal_40, "CELL_MP_301", 16);
	StringCopy(&cLocal_43, "CELL_MP_302", 16);
	unk_0x51CC1333A10C4E09();
	func_47(&uLocal_26);
	func_38();
	while (true)
	{
		system::wait(0);
		if (!unk_0xBF52D447C795492B())
		{
			func_36(1);
			func_35();
		}
		if (!Global_20930.f_1 == 9 && Global_20930.f_1 > 3)
		{
			func_3();
			if (Global_20930.f_1 != 8)
			{
				if (func_2())
				{
					func_35();
				}
			}
		}
		if (func_1())
		{
			func_35();
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

int func_2()
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

void func_3()
{
	if (func_31(&uLocal_26))
	{
		if (func_17())
		{
			if (Global_2696111)
			{
				unk_0xF2EE6216DEB74ACC(0);
				func_10(1080503477, func_11(1, 1));
				Global_2696111 = 0;
			}
			else
			{
				unk_0xF2EE6216DEB74ACC(1);
				func_10(1793940769, func_11(1, 1));
				Global_2696111 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)
{
	if (func_9())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_8())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_20930.f_1 = 3;
	}
}

int func_5()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)
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

bool func_8()
{
	return BitTest(Global_1956920, 5);
}

bool func_9()
{
	return BitTest(Global_1956920, 19);
}

void func_10(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0.f_0 = 800157557;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam0;
	Var0.f_4 = unk_0xC5935DFB3F39785A(0, 9999);
	if (!iParam1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F())
		{
			unk_0x71A6F836422FDD2B(1, &Var0, 5, iParam1, Var0.f_0);
		}
	}
}

int func_11(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar1);
		if (func_16(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
				else if (!func_12(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_12(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_15(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_13(-1, 0) == 8;
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

int func_13(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
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

int func_14()
{
	return Global_1574926;
}

int func_15(var uParam0)
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

int func_16(int iParam0, bool bParam1, bool bParam2)
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

int func_17()
{
	if (!func_25(unk_0x259BE71D8A81D4FA(), 1) && func_18())
	{
		return 1;
	}
	return 0;
}

int func_18()
{
	if (!func_19())
	{
		return 0;
	}
	return 1;
}

int func_19()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_24())
	{
		return 1;
	}
	if (func_23())
	{
		return 1;
	}
	return func_20(120, -1);
}

int func_20(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_21(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_21(var uParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_22(uParam1));
}

int func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

bool func_23()
{
	return Global_1575071;
}

bool func_24()
{
	return Global_1575073;
}

bool func_25(int iParam0, bool bParam1)
{
	if (func_30() != 0)
	{
		return func_29(iParam0) != 0;
	}
	return func_26(iParam0, bParam1, 0);
}

int func_26(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_27(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845281[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_27(int iParam0)
{
	return func_28(iParam0);
}

var func_28(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

int func_29(int iParam0)
{
	if (func_16(iParam0, 0, 1))
	{
		return Global_2657971[iParam0 /*465*/].f_1;
	}
	return 0;
}

int func_30()
{
	return Global_32948;
}

int func_31(var uParam0)
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
	func_32();
	Global_20908 = 1;
	return 1;
}

void func_32()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20919, 1);
		func_33();
	}
}

void func_33()
{
	if (func_34())
	{
		unk_0xBF3F90E670404C44(5);
	}
}

int func_34()
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

void func_35()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_36(bool bParam0)
{
	if (bParam0)
	{
		func_37();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_20930.f_1 == 1)
	{
		if (!Global_20930.f_1 == 0)
		{
			Global_20930.f_1 = 3;
		}
	}
}

void func_37()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

void func_38()
{
	if (!Global_20930.f_1 == 7)
	{
		Global_20930.f_1 = 7;
	}
	func_46(Global_20911, "SET_DATA_SLOT_EMPTY", system::to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_17())
	{
		if (Global_2696111)
		{
			func_45(Global_20911, "SET_DATA_SLOT", system::to_float(13), system::to_float(0), system::to_float(12), -1f, -1f, &cLocal_40, 0, 0, 0, 0);
		}
		else
		{
			func_45(Global_20911, "SET_DATA_SLOT", system::to_float(13), system::to_float(0), system::to_float(12), -1f, -1f, &cLocal_37, 0, 0, 0, 0);
		}
	}
	else
	{
		func_45(Global_20911, "SET_DATA_SLOT", system::to_float(13), system::to_float(0), system::to_float(12), -1f, -1f, &cLocal_43, 0, 0, 0, 0);
	}
	func_46(Global_20911, "DISPLAY_VIEW", system::to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_42(&cLocal_34);
	if (func_17())
	{
		func_39(13, &cLocal_28, 1, "", 4, &cLocal_31, &uLocal_26);
	}
	else
	{
		func_39(1, "", 1, "", 4, &cLocal_31, &uLocal_26);
	}
}

void func_39(int iParam0, char[4] cParam1, int iParam2, char[4] cParam3, int iParam4, char[4] cParam5, var uParam6)
{
	func_40(2, iParam0, cParam1, 0, uParam6, -1);
	func_40(1, iParam2, cParam3, 1, uParam6, 17);
	func_40(3, iParam4, cParam5, 2, uParam6, -1);
}

void func_40(int iParam0, int iParam1, char[4] cParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_45(Global_20911, "SET_SOFT_KEYS", system::to_float(iParam0), 0f, system::to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(uParam4, iParam3);
		func_41(iParam5, 0);
		return;
	}
	if (Global_20918)
	{
		func_45(Global_20911, "SET_SOFT_KEYS", system::to_float(iParam0), 1f, system::to_float(iParam1), -1f, -1f, cParam2, 0, 0, 0, 0);
		unk_0x0B0C9A0F9AAEB7F0(uParam4, iParam3);
		func_41(iParam5, 1);
		return;
	}
	func_45(Global_20911, "SET_SOFT_KEYS", system::to_float(iParam0), 1f, system::to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0B0C9A0F9AAEB7F0(uParam4, iParam3);
	func_41(iParam5, 1);
}

void func_41(int iParam0, bool bParam1)
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

void func_42(char[4] cParam0)
{
	func_43(Global_20911, "SET_HEADER", cParam0, 0, 0, 0, 0);
}

void func_43(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_44(uParam2);
	if (!unk_0xD6F9DEE4765092A9(iParam3))
	{
		func_44(iParam3);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam4))
	{
		func_44(iParam4);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam5))
	{
		func_44(iParam5);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam6))
	{
		func_44(iParam6);
	}
	unk_0xE6B753D52F4CA222();
}

void func_44(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_45(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!unk_0xD6F9DEE4765092A9(cParam7))
	{
		func_44(cParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam8))
	{
		func_44(iParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam9))
	{
		func_44(iParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_44(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_44(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_46(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_47(var uParam0)
{
	*uParam0 = 0;
}

