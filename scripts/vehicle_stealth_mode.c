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
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
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
	iLocal_26 = 3;
	fLocal_27 = 0f;
	fLocal_31 = -0,0375f;
	fLocal_32 = 0,17f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	if (func_92(&uLocal_44))
	{
		while (!func_83())
		{
			func_71(&uLocal_44);
			if (func_61(&uLocal_44))
			{
			}
			else
			{
				func_17(&uLocal_44);
				system::wait(0);
			}
		}
	}
	func_1(&uLocal_44);
}

void func_1(var uParam0)
{
	func_16();
	if (func_10(uParam0))
	{
		unk_0x428C32CC68809A35(1);
	}
	if (func_8(&uLocal_44))
	{
		func_4(&uLocal_44);
	}
	unk_0xDAE61414743C8D1D(5);
	func_3();
	unk_0x62013EEF72D4454F(unk_0x259BE71D8A81D4FA(), 0);
	func_2();
}

void func_2()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_3()
{
	unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_865), 3);
}

void func_4(var uParam0)
{
	func_7(0, 1);
	func_6(0, -1, 1);
	func_5(&(uParam0->f_6), 5);
}

void func_5(var uParam0, int iParam1)
{
	unk_0x8744D2E3FC95740E(uParam0, iParam1);
}

void func_6(bool bParam0, int iParam1, bool bParam2)
{
	if ((!unk_0xF40767E41852FB72(Global_2647061.f_1582) || Global_2647061.f_1582 == unk_0x8F76B2250AC806FA()) || bParam2)
	{
		if (bParam0)
		{
			Global_2647061.f_1582 = unk_0x8F76B2250AC806FA();
			Global_2647061.f_1583 = unk_0x7E3F74F641EE6B27();
		}
		else
		{
			Global_2647061.f_1582 = -1;
		}
		Global_2647061.f_1585 = iParam1;
		Global_2647061.f_1587 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_7(bool bParam0, bool bParam1)
{
	if ((!unk_0xF40767E41852FB72(Global_2647061.f_1598) || Global_2647061.f_1598 == unk_0x8F76B2250AC806FA()) || bParam1)
	{
		if (bParam0)
		{
			Global_2647061.f_1598 = unk_0x8F76B2250AC806FA();
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_74.f_2), 23);
		}
		else
		{
			Global_2647061.f_1598 = -1;
			unk_0x8744D2E3FC95740E(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_74.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

bool func_8(var uParam0)
{
	return func_9(&(uParam0->f_6), 5);
}

bool func_9(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

int func_10(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		if (func_14("STEALTH_OFF", func_15(uParam0->f_2), func_15(uParam0->f_2)) || func_13("STEALTH_ON_P", func_15(uParam0->f_2)))
		{
			return 1;
		}
	}
	return ((func_12("STEALTH_ON") || func_12(func_11())) || func_12("STEALTH_OFF_P"));
}

char* func_11()
{
	return "STEALTH_WARN";
}

var func_12(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

var func_13(char* sParam0, var uParam1)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

var func_14(char* sParam0, var uParam1, var uParam2)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0xACF853FB3F6EA7D4(uParam2);
	return unk_0x7EBCD400E7DE179C(0);
}

var func_15(int iParam0)
{
	if (iParam0 == joaat("annihilator2"))
	{
		return "ANNIH_2_STEALTH";
	}
	return unk_0x93E7527CFECC7CD8(iParam0);
}

void func_16()
{
	unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_865), 1);
}

void func_17(var uParam0)
{
	func_58(uParam0);
	func_57(uParam0);
	if (func_56(uParam0))
	{
		if (((func_55(uParam0) && !func_54(uParam0)) && unk_0x1B1A446EFA398EB5(uParam0->f_1)) && !func_53())
		{
			func_51(uParam0, 1);
			func_50(uParam0);
		}
		else if (func_9(&(uParam0->f_6), 6) && func_54(uParam0))
		{
			if (unk_0x1B1A446EFA398EB5(uParam0->f_1) && !func_53())
			{
				func_51(uParam0, 0);
				func_5(&(uParam0->f_6), 6);
				func_5(&(uParam0->f_6), 2);
			}
		}
	}
	if (func_49(uParam0))
	{
		unk_0x62013EEF72D4454F(unk_0x259BE71D8A81D4FA(), 1);
		func_48();
		func_47(uParam0);
		if (func_46())
		{
			func_45(1);
		}
	}
	else if (func_44(uParam0))
	{
		unk_0x62013EEF72D4454F(unk_0x259BE71D8A81D4FA(), 0);
		func_16();
		func_47(uParam0);
		func_43(uParam0, 5);
		if (func_46())
		{
			func_45(0);
		}
	}
	if (func_54(uParam0) && !func_55(uParam0))
	{
		func_41(uParam0);
		func_40();
		func_43(uParam0, 2);
		if (func_37(uParam0))
		{
			func_35(uParam0);
		}
	}
	else
	{
		func_18(uParam0);
	}
	func_3();
	unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_865), 4);
}

void func_18(var uParam0)
{
	var uVar0;
	
	if (((((((!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 2)) && !unk_0x4C705AAF75363287()) && func_34(uParam0)) && !func_33(0)) && !func_32()) && func_30()) && unk_0xFC8BFE4B41177C22(unk_0xFD5C5BBD1FE92BB7(uParam0->f_1, -1, 0)))
	{
		func_26(uParam0, 1);
		func_25(&(uParam0->f_6), 3);
		uVar0 = func_24(uParam0->f_6.f_2, 3333, 10000);
		uParam0->f_6.f_2 = 0;
		if (func_56(uParam0))
		{
			func_21(func_22(uParam0), func_15(uParam0->f_2), func_15(uParam0->f_2), uVar0);
		}
		else
		{
			func_20(func_22(uParam0), func_15(uParam0->f_2), uVar0);
		}
		func_19(uParam0);
		func_25(&(uParam0->f_6), 0);
	}
}

void func_19(var uParam0)
{
	func_25(&(uParam0->f_6), 2);
}

void func_20(var uParam0, var uParam1, var uParam2)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, uParam2);
}

void func_21(var uParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0xACF853FB3F6EA7D4(uParam1);
	unk_0xACF853FB3F6EA7D4(uParam2);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, uParam3);
}

char* func_22(var uParam0)
{
	if (func_56(uParam0))
	{
		if (func_23(uParam0->f_2))
		{
			return "STEALTH_OFF_S";
		}
		else
		{
			return "STEALTH_OFF";
		}
	}
	return "STEALTH_OFF_P";
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case joaat("raiju"):
			return 1;
			break;
	}
	return 0;
}

int func_24(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_25(var uParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(uParam0, iParam1);
}

void func_26(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_56(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("akula"):
				iVar1 = 19004;
				break;
			
			case joaat("annihilator2"):
				iVar1 = 36624;
				break;
			
			case joaat("raiju"):
				iVar1 = 36625;
				break;
		}
		iVar0 = (func_29(iVar1, -1) + iParam1);
		if (iVar0 >= 0)
		{
			func_27(iVar1, iVar0, -1);
		}
	}
}

void func_27(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_28();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	unk_0x0F575D68F532124C(iParam0, iParam1, iParam2);
}

int func_28()
{
	return Global_1574926;
}

int func_29(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_28();
	}
	return unk_0x03CFFD51CE515454(iParam0, iParam1);
}

bool func_30()
{
	return (!BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_865, 4) && !func_31());
}

bool func_31()
{
	return ((Global_4718592.f_117195 == 6 || Global_4718592.f_117195 == 7) && Global_4718592.f_2 == 20);
}

bool func_32()
{
	return Global_76498;
}

int func_33(int iParam0)
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

int func_34(var uParam0)
{
	if (func_56(uParam0))
	{
		switch (uParam0->f_2)
		{
			case joaat("akula"):
				return func_29(19004, -1) < 3;
			
			case joaat("annihilator2"):
				return func_29(36624, -1) < 3;
			
			case joaat("raiju"):
				return func_29(36625, -1) < 3;
			}
		
		default:
	}
	return 1;
}

void func_35(var uParam0)
{
	if (!unk_0x4C705AAF75363287())
	{
		if (func_23(uParam0->f_2))
		{
			func_36("STEALTH_WARN_S", 3000);
		}
		else
		{
			func_36("STEALTH_WARN", 3000);
		}
	}
}

void func_36(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_37(var uParam0)
{
	int iVar0;
	
	if (func_33(0) || func_32())
	{
		return 0;
	}
	iVar0 = func_38(uParam0);
	switch (iVar0)
	{
		case 1:
			if ((unk_0xDEE3EFEA31A1F555(0, 114) || unk_0xDEE3EFEA31A1F555(0, 99)) || unk_0xDEE3EFEA31A1F555(0, 100))
			{
				return 1;
			}
			break;
		
		case 0:
			if (unk_0xDEE3EFEA31A1F555(0, 114))
			{
				return 1;
			}
			break;
		
		case 2:
			if (unk_0xDEE3EFEA31A1F555(0, 92))
			{
				return 1;
			}
			break;
		
		case 3:
			if (unk_0xDEE3EFEA31A1F555(0, 68))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_38(var uParam0)
{
	if (!func_39(uParam0))
	{
		return 4;
	}
	switch (uParam0->f_2)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
		case joaat("raiju"):
			switch (uParam0->f_4)
			{
				case -1:
					return 1;
				
				case 0:
					return 2;
				
				default:
			}
			return 4;
			break;
	}
	return 4;
}

bool func_39(var uParam0)
{
	return (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0));
}

void func_40()
{
	unk_0x66EFB3D6110055C4(0, 24, 1);
	unk_0x66EFB3D6110055C4(0, 66, 1);
	unk_0x66EFB3D6110055C4(0, 67, 1);
	unk_0x66EFB3D6110055C4(0, 68, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	unk_0x66EFB3D6110055C4(0, 69, 1);
	unk_0x66EFB3D6110055C4(0, 70, 1);
	unk_0x66EFB3D6110055C4(0, 91, 1);
	unk_0x66EFB3D6110055C4(0, 92, 1);
	unk_0x66EFB3D6110055C4(0, 99, 1);
	unk_0x66EFB3D6110055C4(0, 100, 1);
	unk_0x66EFB3D6110055C4(0, 37, 1);
}

void func_41(var uParam0)
{
	var uVar0;
	
	if (((((((!func_9(&(uParam0->f_6), 0) && !func_9(&(uParam0->f_6), 1)) && !unk_0x4C705AAF75363287()) && func_9(&(uParam0->f_6), 3)) && !func_33(0)) && !func_32()) && func_30()) && unk_0xFC8BFE4B41177C22(unk_0xFD5C5BBD1FE92BB7(uParam0->f_1, -1, 0)))
	{
		uVar0 = func_24(uParam0->f_6.f_2, 3333, 10000);
		uParam0->f_6.f_2 = 0;
		if (func_56(uParam0))
		{
			func_36(func_42(uParam0), uVar0);
		}
		else
		{
			func_21(func_42(uParam0), func_15(uParam0->f_2), func_15(uParam0->f_2), uVar0);
		}
		func_50(uParam0);
		func_25(&(uParam0->f_6), 0);
	}
}

char* func_42(var uParam0)
{
	if (func_56(uParam0))
	{
		if (func_23(uParam0->f_2))
		{
			return "STEALTH_ON_S";
		}
		else
		{
			return "STEALTH_ON";
		}
	}
	return "STEALTH_ON_P";
}

void func_43(var uParam0, int iParam1)
{
	if (func_55(uParam0))
	{
		return;
	}
	if (unk_0xD6436470CD2C1484() != iParam1)
	{
		unk_0xDAE61414743C8D1D(iParam1);
	}
	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > iParam1)
	{
		unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), iParam1, 0);
	}
}

bool func_44(var uParam0)
{
	return (!func_9(uParam0, 0) && func_9(uParam0, 1));
}

void func_45(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_865), 6);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_865), 6);
	}
}

int func_46()
{
	if (Global_1845135)
	{
		return 0;
	}
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_865, 5);
}

void func_47(var uParam0)
{
	func_5(&(uParam0->f_6), 0);
	if (func_10(uParam0))
	{
		unk_0x428C32CC68809A35(1);
	}
	if (!func_56(uParam0))
	{
		if (func_54(uParam0))
		{
			func_5(&(uParam0->f_6), 1);
		}
		else
		{
			func_5(&(uParam0->f_6), 2);
		}
	}
}

void func_48()
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_865), 1);
}

bool func_49(var uParam0)
{
	return (func_9(uParam0, 0) && !func_9(uParam0, 1));
}

void func_50(var uParam0)
{
	func_25(&(uParam0->f_6), 1);
}

void func_51(var uParam0, bool bParam1)
{
	func_52(uParam0->f_1, bParam1);
}

void func_52(int iParam0, bool bParam1)
{
	if (unk_0xFC8BFE4B41177C22(uParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		switch (unk_0x4B423FAA24E8ABF0(iParam0))
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				unk_0x89D51606F3FCA194(iParam0, !bParam1, 0);
				break;
			
			case joaat("raiju"):
				unk_0x0C02468829E4AA65(iParam0, !bParam1);
				break;
			}
	}
}

bool func_53()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_865, 3);
}

bool func_54(var uParam0)
{
	return func_9(uParam0, 0);
}

bool func_55(var uParam0)
{
	return func_9(uParam0, 2);
}

bool func_56(var uParam0)
{
	return ((func_39(uParam0) && uParam0->f_3 == unk_0x4A8C381C258A124D()) || unk_0xFD5C5BBD1FE92BB7(uParam0->f_1, -1, 0) == unk_0x4A8C381C258A124D());
}

void func_57(var uParam0)
{
	if (func_10(uParam0) && (func_33(0) || func_32()))
	{
		uParam0->f_6.f_2 = 1;
		unk_0x428C32CC68809A35(1);
		func_5(&(uParam0->f_6), 0);
		if (func_54(uParam0))
		{
			func_5(&(uParam0->f_6), 1);
		}
		else
		{
			func_5(&(uParam0->f_6), 2);
			if (func_56(uParam0))
			{
				func_26(uParam0, -1);
			}
		}
	}
}

void func_58(var uParam0)
{
	if (func_54(uParam0))
	{
		if (func_8(uParam0))
		{
			if (func_60())
			{
				func_4(uParam0);
			}
		}
		else if (!func_60())
		{
			func_59(uParam0);
		}
	}
	else if (func_8(uParam0))
	{
		func_4(uParam0);
	}
	unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_865), 2);
}

void func_59(var uParam0)
{
	func_7(1, 1);
	func_6(1, -1, 1);
	func_25(&(uParam0->f_6), 5);
}

bool func_60()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_865, 2);
}

int func_61(var uParam0)
{
	if (!func_39(uParam0))
	{
		return 1;
	}
	if (!func_70(uParam0))
	{
		return 1;
	}
	if (!func_69(uParam0->f_2))
	{
		return 1;
	}
	if (func_68(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		return 1;
	}
	if (func_67(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (func_64(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (func_62(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2657971[iParam0 /*465*/].f_247 > -1)
		{
			if (func_63(Global_2657971[iParam0 /*465*/].f_247) == 4)
			{
				return 1;
			}
		}
		if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

int func_64(int iParam0)
{
	if (iParam0 != func_66() && func_65(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 3);
	}
	return 0;
}

int func_65(int iParam0, bool bParam1, bool bParam2)
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

int func_66()
{
	return -1;
}

int func_67(int iParam0)
{
	if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 14))
	{
		return 1;
	}
	if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 11))
	{
		return 1;
	}
	return 0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_66())
	{
		return 0;
	}
	if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case joaat("akula"):
		case joaat("annihilator2"):
		case joaat("raiju"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_70(var uParam0)
{
	return (unk_0xFC8BFE4B41177C22(uParam0->f_1) && unk_0xD9F5E1FEFD1329E4(uParam0->f_1, 0));
}

void func_71(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	bVar0 = func_9(uParam0, 4);
	bVar1 = func_9(uParam0, 0);
	func_82(uParam0);
	if (bVar0)
	{
		func_25(uParam0, 3);
	}
	else
	{
		func_5(uParam0, 3);
	}
	if (bVar1)
	{
		func_25(uParam0, 1);
	}
	else
	{
		func_5(uParam0, 1);
	}
	if (func_39(uParam0))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uParam0->f_1 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
			if (func_70(uParam0))
			{
				uParam0->f_2 = unk_0x4B423FAA24E8ABF0(uParam0->f_1);
				if (unk_0x12623527E5B8AB7C(unk_0x4A8C381C258A124D(), 2))
				{
					func_25(uParam0, 2);
				}
			}
		}
	}
	if (func_70(uParam0))
	{
		if (!unk_0xC39AE5D390581AD5(uParam0->f_1, -1, 0))
		{
			iVar2 = unk_0xFD5C5BBD1FE92BB7(uParam0->f_1, -1, 0);
			if ((unk_0xFC8BFE4B41177C22(iVar2) && !unk_0x1C2F771CDC87A3A5(iVar2, 0)) && unk_0x501EBB0523078750(iVar2))
			{
				uParam0->f_3 = iVar2;
				if (iVar2 == unk_0x4A8C381C258A124D())
				{
					func_25(uParam0, 4);
					if (!func_9(uParam0, 3))
					{
						func_25(&(uParam0->f_6), 6);
					}
				}
			}
		}
		if (func_39(uParam0))
		{
			uParam0->f_4 = func_81(unk_0x4A8C381C258A124D(), 0);
		}
		if (func_56(uParam0))
		{
			if (func_80() && func_74(uParam0))
			{
				func_25(uParam0, 0);
			}
		}
		else
		{
			func_72(uParam0);
		}
	}
	if (func_49(uParam0))
	{
		uParam0->f_6.f_3 = unk_0x7E3F74F641EE6B27();
	}
}

void func_72(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0->f_3) && func_73(unk_0x1C1C92A1CBAE364B(uParam0->f_3)))
	{
		func_25(uParam0, 0);
	}
	else
	{
		func_5(uParam0, 0);
	}
}

bool func_73(int iParam0)
{
	return (iParam0 != -1 && BitTest(Global_1845281[iParam0 /*883*/].f_865, 1));
}

bool func_74(var uParam0)
{
	bool bVar0;
	
	bVar0 = func_79();
	if (unk_0x1B1A446EFA398EB5(uParam0->f_1))
	{
		func_78(uParam0);
		switch (uParam0->f_2)
		{
			case joaat("akula"):
			case joaat("annihilator2"):
				bVar0 = !unk_0xA347DA69520FE64A(uParam0->f_1);
				break;
			
			case joaat("raiju"):
				bVar0 = !unk_0xEA4743874D515F13(uParam0->f_1);
				break;
		}
	}
	else if (func_77(uParam0))
	{
		if (func_76(uParam0))
		{
			unk_0xF093E270C0B6B318(uParam0->f_1);
		}
	}
	else
	{
		func_75(uParam0);
	}
	return bVar0;
}

void func_75(var uParam0)
{
	func_25(&(uParam0->f_6), 4);
	uParam0->f_6.f_1 = unk_0x1DD05E817C89C737();
}

bool func_76(var uParam0)
{
	return (unk_0x1DD05E817C89C737() - uParam0->f_6.f_1) >= 200;
}

bool func_77(var uParam0)
{
	return func_9(&(uParam0->f_6), 4);
}

void func_78(var uParam0)
{
	func_5(&(uParam0->f_6), 4);
}

var func_79()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_865, 1);
}

bool func_80()
{
	return !func_31();
}

int func_81(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (unk_0x7F420695E3F776FB(iParam0, iParam1))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(iParam0, iParam1);
			if (unk_0xFC8BFE4B41177C22(uVar0))
			{
				iVar1 = unk_0xDC1AA2FE20EEB2E9(unk_0x4B423FAA24E8ABF0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xC39AE5D390581AD5(iVar0, iVar3, 0))
					{
						if (unk_0xFD5C5BBD1FE92BB7(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_82(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_83()
{
	if (func_84())
	{
		return 1;
	}
	return 0;
}

int func_84()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_91())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_90())
	{
		return 1;
	}
	if (func_89(159))
	{
		if (!func_88())
		{
			return 1;
		}
	}
	if (func_89(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_85() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_85()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_85()
{
	switch (func_87())
	{
		case 0:
			return func_86();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_86()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_87()
{
	return Global_32948;
}

bool func_88()
{
	return Global_2684504.f_700;
}

int func_89(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_90()
{
	return Global_2696172;
}

bool func_91()
{
	return Global_2684504.f_695;
}

int func_92(var uParam0)
{
	bool bVar0;
	
	func_71(uParam0);
	if (func_70(uParam0))
	{
		if (func_56(uParam0))
		{
			if (unk_0x1B1A446EFA398EB5(uParam0->f_1))
			{
				bVar0 = true;
				if (func_53())
				{
					bVar0 = false;
				}
				else if (func_93())
				{
					func_48();
					func_5(&(uParam0->f_6), 6);
					bVar0 = false;
				}
				if (bVar0)
				{
					func_51(uParam0, 0);
				}
				else
				{
					func_25(&(uParam0->f_6), 3);
				}
			}
		}
		else
		{
			func_25(&(uParam0->f_6), 3);
		}
	}
	return 1;
}

int func_93()
{
	if (func_46() && func_94())
	{
		return 1;
	}
	return 0;
}

var func_94()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_865, 6);
}

