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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 1176255488;
	var uScriptParam_4 = 1;
	var uScriptParam_5 = -1;
	var uScriptParam_6 = -1;
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
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	func_44(&uScriptParam_42);
	while (true)
	{
		func_43();
		if (func_34())
		{
		}
		else
		{
			func_15();
		}
	}
	func_1();
}

void func_1()
{
	func_3(&uLocal_35);
	func_2();
}

void func_2()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_3(var uParam0)
{
	struct<7> Var0;
	
	func_4(0, 1, 1, 0, 0, 0, 0);
	if (unk_0x78411E34CF90EA8C(uParam0->f_6))
	{
		unk_0x85E6A1E36B5E2E4D(uParam0->f_6, 0);
	}
	unk_0x490EA3A0CF334F58(unk_0x4A8C381C258A124D());
	*uParam0 = { Var0 };
}

void func_4(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_14(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_13())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_14(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_10(unk_0x259BE71D8A81D4FA())) && !func_6(unk_0x259BE71D8A81D4FA(), 0)) && !func_5()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_10(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_5()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_6(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_7(-1, 0) == 8;
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

int func_7(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1574926;
}

int func_9(var uParam0)
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

int func_10(int iParam0)
{
	if (func_6(iParam0, 0))
	{
		return 1;
	}
	if (func_11())
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

bool func_11()
{
	return BitTest(Global_2621446, 3);
}

int func_12(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x4A0B7E53EBC937D5() != iParam0 && uParam2)
		{
			unk_0x7882946B06ED216B(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_13()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 13);
	}
}

void func_15()
{
	if (func_16(&uLocal_35))
	{
		func_1();
	}
}

int func_16(var uParam0)
{
	unk_0x43AE50D2A33F6E2A();
	unk_0x0C9B2F8C2BD128C2();
	func_31(1);
	unk_0x6C978B200DAA54DE();
	func_25(0);
	if (unk_0x4D9174D8796EA622())
	{
		unk_0x915FA95E87D33FF5(0);
	}
	switch (func_24(uParam0))
	{
		case 0:
			func_19(uParam0);
			break;
		
		case 1:
			func_17(uParam0);
			break;
		
		case 2:
			return 1;
	}
	return 0;
}

void func_17(var uParam0)
{
	var uVar0;
	
	uVar0 = unk_0x643DC062EE904FCA(uParam0->f_5);
	if (unk_0xBD3B265153D3BA2D(uVar0) >= 0,9f)
	{
		unk_0xF2E51EC84D76A2B6(uParam0->f_5);
		unk_0xE37AF9002E782BA0(0, 1, 3000, 1, 0, 0);
		unk_0x8EAC8FBDF8A3830E(unk_0x259BE71D8A81D4FA(), 1f, 2000, 0, 1, 0, 0);
		func_18(uParam0, 2);
	}
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_19(var uParam0)
{
	var uVar0;
	
	uVar0 = func_21();
	unk_0x80813AC549A1E8AE(uVar0);
	if (!unk_0xE100DD4F82A51BDE(uVar0))
	{
		return;
	}
	unk_0x10B228D2FDB7AF16(800);
	func_18(uParam0, 1);
	func_20(uParam0);
}

void func_20(var uParam0)
{
	var uVar0;
	
	uVar0 = func_21();
	uParam0->f_5 = unk_0xBC5D9A293974F095(uParam0->f_1, 0f, 0f, uParam0->f_4, 2, 0, 0, 1065353216, 0, 1065353216);
	unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), uParam0->f_5, uVar0, "action", 1000f, -1,5f, 0, 0, 1148846080, 0);
	unk_0xE7101255AD6F1952(uParam0->f_5);
	unk_0x2C09C6B54CFCFAF1(unk_0x4A8C381C258A124D(), "HS4F_IG25_BEACH", 0);
	unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
	uParam0->f_6 = unk_0xBB209150C6081BBE(964613260, 1);
	unk_0x73D04EA6A13117B7(uParam0->f_6, "action_camera", uVar0, uParam0->f_1, 0f, 0f, uParam0->f_4, 0, 2);
	unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
	unk_0x268BE77F77533D03(uVar0);
}

char* func_21()
{
	if (func_22())
	{
		return "ANIM@SCRIPTED@HEIST@IG25_BEACH@HEELED@";
	}
	return "ANIM@SCRIPTED@HEIST@IG25_BEACH@MALE@";
}

bool func_22()
{
	return func_23(unk_0x259BE71D8A81D4FA());
}

int func_23(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_24(var uParam0)
{
	return *uParam0;
}

void func_25(int iParam0)
{
	if (func_30())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_29(0))
		{
			func_26(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_26(int iParam0)
{
	if (func_30())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_28())
		{
			func_27(1, 1);
		}
		else
		{
			func_27(0, 0);
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
	if (!func_13())
	{
		Global_20930.f_1 = 3;
	}
}

void func_27(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_29(0))
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

bool func_28()
{
	return BitTest(Global_1956920, 5);
}

int func_29(int iParam0)
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

bool func_30()
{
	return BitTest(Global_1956920, 19);
}

void func_31(bool bParam0)
{
	if (bParam0)
	{
		func_33();
	}
	func_32(4, -1);
	func_32(6, -1);
	func_32(7, -1);
	func_32(3, -1);
	func_32(1, -1);
	func_32(2, -1);
	func_32(11, -1);
	func_32(13, -1);
	func_32(14, -1);
	func_32(16, -1);
}

void func_32(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1668667.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1668667.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_33()
{
	Global_2738934.f_4651 = 0;
}

int func_34()
{
	if (func_35())
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_42())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_41())
	{
		return 1;
	}
	if (func_40(159))
	{
		if (!func_39())
		{
			return 1;
		}
	}
	if (func_40(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_36() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_36()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_36()
{
	switch (func_38())
	{
		case 0:
			return func_37();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_37()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_38()
{
	return Global_32948;
}

bool func_39()
{
	return Global_2684504.f_700;
}

int func_40(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_41()
{
	return Global_2696172;
}

bool func_42()
{
	return Global_2684504.f_695;
}

void func_43()
{
	system::wait(0);
}

void func_44(var uParam0)
{
	unk_0xDB2434E51017FFCC(32, 0, -1);
	func_45(&uLocal_35, *uParam0, uParam0->f_3);
}

void func_45(var uParam0, struct<3> Param1, var uParam2)
{
	func_47(uParam0, Param1);
	func_46(uParam0, uParam2);
	func_4(1, 1, 1, 0, 0, 0, 0);
	unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Param1, 1, 0, 0, 1);
	if (unk_0x15CCE8886267624F())
	{
		unk_0x12C01FC00B0CBB6B();
	}
}

void func_46(var uParam0, var uParam1)
{
	uParam0->f_4 = uParam1;
}

void func_47(var uParam0, struct<3> Param1)
{
	uParam0->f_1 = { Param1 };
}

