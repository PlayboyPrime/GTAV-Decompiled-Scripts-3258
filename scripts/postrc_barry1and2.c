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
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	char* sLocal_42 = NULL;
	char* sLocal_43 = NULL;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<3> Local_48 = { 0, 0, 0 } ;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	sLocal_42 = "RCMBarryLeadInOut";
	sLocal_43 = "idle";
	Local_47 = { 189,5964f, -956,0344f, 29,5771f };
	Local_48 = { 190,2424f, -956,379f, 28,63f };
	unk_0x66EFB3D6110055C4(0, 26, 1);
	if (func_25(unk_0x4A8C381C258A124D()))
	{
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) != 0)
		{
			unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
		}
	}
	if (unk_0x96CFB880BAC634CE(83))
	{
		func_22(0);
	}
	unk_0x80813AC549A1E8AE(sLocal_42);
	unk_0xF2CB0224D3BE0B42("BARY1", 7);
	while (!unk_0xE100DD4F82A51BDE(sLocal_42) || !unk_0xDCB78A15E5F495DC(7))
	{
		unk_0x66EFB3D6110055C4(0, 26, 1);
		system::wait(0);
	}
	unk_0x66EFB3D6110055C4(0, 26, 1);
	func_25(unk_0x4A8C381C258A124D());
	iLocal_44 = unk_0x1DD05E817C89C737() + 13000;
	iLocal_45 = unk_0xC5935DFB3F39785A(0, 5);
	func_19();
	while (!func_13(&uLocal_41, 49, Local_48, func_18(1,12f), 0))
	{
		unk_0x66EFB3D6110055C4(0, 26, 1);
		system::wait(0);
	}
	unk_0x66EFB3D6110055C4(0, 26, 1);
	func_12();
	iLocal_46 = unk_0x1DD05E817C89C737() + 1000;
	unk_0x66EFB3D6110055C4(0, 26, 1);
	while (true)
	{
		func_25(unk_0x4A8C381C258A124D());
		if (unk_0x1DD05E817C89C737() < iLocal_46)
		{
			unk_0x66EFB3D6110055C4(0, 26, 1);
		}
		func_11();
		if (!func_25(uLocal_41))
		{
			func_22(0);
		}
		if (func_3())
		{
		}
		if (func_2(unk_0x4A8C381C258A124D(), Local_48, 1) > 70f)
		{
			func_1(&uLocal_38, 0);
			func_1(&uLocal_39, 0);
			func_1(&uLocal_40, 0);
			func_22(0);
		}
		system::wait(0);
	}
}

void func_1(var uParam0, bool bParam1)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (unk_0x5B9219522937741D(*uParam0))
		{
			unk_0x837D67618BF89034(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xB3B56385ECA230B4(uParam0);
		}
		else
		{
			unk_0xC942CD0D37369DC4(*uParam0);
		}
	}
}

float func_2(var uParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Param1, iParam2);
}

int func_3()
{
	var uVar0;
	
	if (((((func_10(unk_0x4A8C381C258A124D()) && func_10(uLocal_41)) && !func_9()) && unk_0x1DD05E817C89C737() > iLocal_44) && func_8(unk_0x4A8C381C258A124D(), uLocal_41, 1) < 20f) && !unk_0x3D2EB53CF281A77E())
	{
		uVar0 = 16;
		func_7(&uVar0, 0, uLocal_41, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_44 = (unk_0x1DD05E817C89C737() + unk_0xC5935DFB3F39785A(12000, 18000));
		return 1;
	}
	return 0;
}

void func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x0B0C9A0F9AAEB7F0(&Global_21152, 0);
	Global_22289 = iParam3;
	StringCopy(&Global_22276, sParam2, 24);
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

char* func_6()
{
	char* sVar0;
	
	switch (iLocal_45)
	{
		case 0:
			sVar0 = "BARY1_RCMLI1";
			break;
		
		case 1:
			sVar0 = "BARY1_RCMLI2";
			break;
		
		case 2:
			sVar0 = "BARY1_RCMLI3";
			break;
		
		case 3:
			sVar0 = "BARY1_RCMLI4";
			break;
		
		case 4:
			sVar0 = "BARY1_RCMLI5";
			break;
	}
	iLocal_45++;
	if (iLocal_45 > 4)
	{
		iLocal_45 = 0;
	}
	return sVar0;
}

void func_7(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
	{
		if (!unk_0x4FAFF4BCB7633475(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC1BC1B8A5AA67C6B(uParam2, 0);
			}
			else
			{
				unk_0xC1BC1B8A5AA67C6B(uParam2, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x26C12212366CBF6E(uParam2, 0);
			}
			else
			{
				unk_0x26C12212366CBF6E(uParam2, 1);
			}
		}
	}
}

float func_8(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 0) };
	}
	if (!unk_0x1C2F771CDC87A3A5(uParam1, 0))
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(uParam1, 1) };
	}
	else
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(uParam1, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Var1, iParam2);
}

int func_9()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	if (unk_0x8764A5B95AE1F967(-1, Local_48, 5f))
	{
		if (func_10(uLocal_41))
		{
			unk_0x5D7CD709B34C90F0(uLocal_41, 0);
			unk_0x39AB1812D20C2C99(uLocal_41, 1000, 1, 0, 0);
		}
		if (func_10(uLocal_39))
		{
			unk_0x5D7CD709B34C90F0(uLocal_39, 0);
		}
		if (func_10(uLocal_38))
		{
			unk_0x5D7CD709B34C90F0(uLocal_38, 0);
		}
	}
}

void func_12()
{
	if (func_10(uLocal_41))
	{
		if (!unk_0x110821AE6C63DD4F(uLocal_41))
		{
			unk_0xEE0BCDB1B5E36BCB(uLocal_41, 1, 0);
		}
		unk_0x7F08C4791E6D6969(uLocal_41, 1, 0, 0, 0, 1);
		unk_0xAAA71DD7E9059338(uLocal_41, 1);
		unk_0x886FA295C1257AAA(uLocal_41, 0);
		unk_0x3F58BFCF656F0DF1(uLocal_41, 0);
		unk_0xEB418CA245FFE897(uLocal_41, "POSTBARRY");
		unk_0x3CEA1FD137ACE2D9(uLocal_41, joaat("player"));
		unk_0x44C48AC14D3C09ED(uLocal_41, 0, 0);
		unk_0x5D7CD709B34C90F0(uLocal_41, 1);
		unk_0xB2BD5837A8D3CEDA(uLocal_41, Local_48, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(uLocal_41, func_18(1,12f));
		unk_0x5D7CD709B34C90F0(uLocal_41, 1);
		unk_0x10425721983AE158(uLocal_41, sLocal_42, sLocal_43, 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0xE67051907958B5EB(uLocal_41, unk_0x4A8C381C258A124D(), -1, 0, 2);
	}
}

int func_13(var uParam0, int iParam1, struct<3> Param2, var uParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_17(iParam1))
	{
		iVar0 = func_15(iParam1);
		unk_0xEC9DAA34BBB4658C(iVar0);
		if (unk_0x6252BC0DD8A320DB(iVar0))
		{
			if (unk_0xFC8BFE4B41177C22(*uParam0))
			{
				unk_0x734A9F4537A31459(uParam0);
			}
			*uParam0 = unk_0xB1DBFEB95C0EFB88(26, iVar0, Param2, uParam3, 0, 0);
			unk_0x77EFA99E6A8FFC43(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xC0120BBCC298EA2F(*uParam0, 3) == 0)
				{
					unk_0xD1C578C204015E1F(*uParam0, 5, 2, 0, 0);
				}
			}
			func_14(*uParam0, iParam1);
			if (bParam4)
			{
				unk_0x55098D9E9AD58806(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_97347[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_15(int iParam0)
{
	if (!func_17(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

float func_18(float fParam0)
{
	return (fParam0 * 57,29578f);
}

void func_19()
{
	if (unk_0xE10356B235A70E70(190,56f, -956,4f, 28,63f, 20f, joaat("prop_protest_table_01"), 0))
	{
		uLocal_39 = unk_0x8366ABB82B1ABC59(190,56f, -956,4f, 28,63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_25(uLocal_39))
		{
			if (!unk_0x110821AE6C63DD4F(uLocal_39))
			{
				unk_0xEE0BCDB1B5E36BCB(uLocal_39, 1, 0);
			}
			Local_47 = { 189,5964f, -956,0344f, 29,54f };
			unk_0xB2BD5837A8D3CEDA(uLocal_39, Local_47, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(uLocal_39, func_18(-2,01f));
			unk_0x5D7CD709B34C90F0(uLocal_39, 1);
		}
	}
	if (unk_0xE10356B235A70E70(190,56f, -956,4f, 28,63f, 20f, joaat("prop_chair_08"), 0))
	{
		uLocal_38 = unk_0x8366ABB82B1ABC59(190,56f, -956,4f, 28,63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_25(uLocal_38))
		{
			if (!unk_0x110821AE6C63DD4F(uLocal_38))
			{
				unk_0xEE0BCDB1B5E36BCB(uLocal_38, 1, 0);
			}
			Local_47 = { 190,2574f, -956,3513f, 29,621f };
			unk_0xB2BD5837A8D3CEDA(uLocal_38, Local_47, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(uLocal_38, func_18(-1,68f));
			unk_0x5D7CD709B34C90F0(uLocal_38, 1);
		}
	}
	else
	{
		Local_47 = { 190,2574f, -956,3513f, 29,621f };
		func_20(&uLocal_38, joaat("prop_chair_08"), Local_47, func_18(-1,68f));
		unk_0xB2BD5837A8D3CEDA(uLocal_38, Local_47, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(uLocal_38, func_18(-1,68f));
		unk_0x5D7CD709B34C90F0(uLocal_38, 1);
	}
	Local_47 = { 192,4462f, -953,5946f, 29,0919f };
	if (unk_0xE10356B235A70E70(Local_47, 25f, joaat("prop_protest_sign_01"), 0))
	{
		uLocal_40 = unk_0x8366ABB82B1ABC59(Local_47, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_25(uLocal_40))
		{
			if (!unk_0x110821AE6C63DD4F(uLocal_40))
			{
				unk_0xEE0BCDB1B5E36BCB(uLocal_40, 1, 0);
			}
			Local_47.f_2 = 29,603f;
			unk_0xB2BD5837A8D3CEDA(uLocal_40, Local_47, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(uLocal_40, 23,45f);
		}
	}
	else
	{
		func_20(&uLocal_40, joaat("prop_protest_sign_01"), Local_47, 23,45f);
		unk_0xB2BD5837A8D3CEDA(uLocal_40, Local_47, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(uLocal_40, 23,45f);
	}
}

void func_20(var uParam0, int iParam1, struct<3> Param2, float fParam3)
{
	func_21(uParam0);
	*uParam0 = unk_0x4E55EAB577C13329(iParam1, Param2, 1, 1, 0);
	unk_0x5C96CEA06531AB03(*uParam0, fParam3);
}

void func_21(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (unk_0x5B9219522937741D(*uParam0))
		{
			unk_0x837D67618BF89034(*uParam0, 1, 1);
		}
		unk_0x51C8BEA2005931AB(uParam0);
	}
}

void func_22(bool bParam0)
{
	if (bParam0)
	{
		func_24(&uLocal_41);
	}
	else
	{
		func_23(&uLocal_41, 1, 0, 1);
	}
	if (func_10(uLocal_39))
	{
		unk_0x5D7CD709B34C90F0(uLocal_39, 0);
	}
	if (func_10(uLocal_38))
	{
		unk_0x5D7CD709B34C90F0(uLocal_38, 0);
	}
	if (bParam0)
	{
		func_21(&uLocal_38);
		func_21(&uLocal_39);
		func_21(&uLocal_40);
	}
	else
	{
		func_1(&uLocal_38, 0);
		func_1(&uLocal_39, 0);
		func_1(&uLocal_40, 0);
	}
	unk_0x268BE77F77533D03(sLocal_42);
	unk_0xA790E8E6FD7393AC(7, 0);
	unk_0xBBC29EBE6E1A48FA();
}

void func_23(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(*uParam0))
		{
			unk_0x788F35D395511DFE(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xBEB96F1A510EE9AA(*uParam0);
			}
			unk_0x44FB298D6382876D(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xAAA71DD7E9059338(*uParam0, 0);
			}
		}
		unk_0xF09E30AF1B8FB379(uParam0);
	}
}

void func_24(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(*uParam0, 0))
		{
			unk_0x788F35D395511DFE(*uParam0, 0, 1);
		}
		if (!unk_0x110821AE6C63DD4F(*uParam0))
		{
			unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 0);
		}
		unk_0x734A9F4537A31459(uParam0);
	}
}

bool func_25(var uParam0)
{
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	return !unk_0x1C2F771CDC87A3A5(uParam0, 0);
}

