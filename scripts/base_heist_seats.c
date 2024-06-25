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
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
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
	struct<14> Local_45[30];
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = -1;
	var uLocal_52 = -1;
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
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
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	if (func_74())
	{
		while (!func_63())
		{
			func_11();
			system::wait(0);
		}
	}
	func_1();
}

void func_1()
{
	unk_0x8744D2E3FC95740E(&Global_1836224, 1);
	func_3(&Local_45);
	func_2();
}

void func_2()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_3(int iParam0)
{
	func_9(&(iParam0->f_421.f_5));
	func_4(iParam0, 1);
}

void func_4(var uParam0, bool bParam1)
{
	if (func_5(uParam0))
	{
		unk_0x428C32CC68809A35(1);
	}
	if (bParam1)
	{
		func_9(&(uParam0->f_421.f_5));
	}
}

bool func_5(var uParam0)
{
	char* sVar0;
	char* sVar1;
	
	func_7(uParam0, uParam0->f_421.f_2, &sVar0);
	func_7(uParam0, uParam0->f_421.f_2, &sVar1);
	return (func_6(&sVar0) || func_6(&sVar1));
}

var func_6(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_7(var uParam0, int iParam1, char* sParam2)
{
	if (func_8(&(uParam0->f_421), 7))
	{
		Stack.Push(uParam0[iParam1 /*14*/]);
		Stack.Push(iParam1);
		Stack.Push(sParam2);
		Call_Loc(uParam0->f_421.f_14);
	}
	else
	{
		StringCopy(sParam2, "MPJAC_EXIT", 16);
	}
}

bool func_8(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_9(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_10(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_11()
{
	func_19(&Local_45);
	if (Global_1845118 == unk_0x259BE71D8A81D4FA() && !BitTest(Global_1882632[unk_0x383461852896D73D() /*146*/].f_43.f_27, 5))
	{
		if (func_18(&Local_45, 1, 1))
		{
			func_17(&Local_45);
		}
		if (func_18(&Local_45, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1836224, 1);
			if ((((((iLocal_62 == 0 && !BitTest(Global_1882632[unk_0x383461852896D73D() /*146*/].f_43.f_27, 3)) && !func_16()) && !unk_0x4D9174D8796EA622()) && !func_15(0)) && !func_14()) && unk_0xDEE3EFEA31A1F555(0, 225))
			{
				func_12(&Local_45);
			}
		}
		else
		{
			unk_0x8744D2E3FC95740E(&Global_1836224, 1);
		}
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_1836224, 1);
	}
	iLocal_62 = 0;
	if (BitTest(Global_1882632[unk_0x383461852896D73D() /*146*/].f_43.f_27, 3))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_62, 0);
	}
	if (func_16())
	{
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_62, 1);
	}
	if (unk_0x4D9174D8796EA622())
	{
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_62, 2);
	}
	if (func_14())
	{
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_62, 4);
	}
	if (func_15(0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iLocal_62, 3);
	}
}

void func_12(int iParam0)
{
	func_13(&(iParam0->f_421), 10);
}

void func_13(var uParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(uParam0, iParam1);
}

bool func_14()
{
	return Global_76498;
}

int func_15(int iParam0)
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

int func_16()
{
	if (Global_2672855.f_990.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)
{
	func_13(&(iParam0->f_421), 9);
}

bool func_18(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0->f_421.f_4 > 2 && (iParam1 || func_8(&(iParam0->f_421), 11))) && (iParam2 || iParam0->f_421.f_4 < 8));
}

void func_19(int iParam0)
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	func_61(iParam0);
	func_59(iParam0);
	Var2.f_1.f_6 = 1061158912;
	Var2 = { *(iParam0[iParam0->f_421.f_2 /*14*/]) };
	switch (iParam0->f_421.f_4)
	{
		case 0:
			func_58(&(iParam0->f_421), 11);
			func_57(iParam0, 1);
			break;
		
		case 1:
			if (func_56(iParam0))
			{
				iParam0->f_421.f_6 = unk_0x1DD05E817C89C737();
				func_57(iParam0, 2);
			}
			break;
		
		case 2:
			if (func_55(unk_0x4A8C381C258A124D(), iParam0[iParam0->f_421.f_2 /*14*/]))
			{
				if ((func_54(iParam0) || func_52(iParam0)) || !func_51(iParam0))
				{
					func_4(iParam0, 1);
					func_57(iParam0, 1);
				}
				else if (iParam0->f_421.f_5 == -1)
				{
					if ((unk_0x1DD05E817C89C737() - iParam0->f_421.f_6) > 150)
					{
						func_50(&(iParam0->f_421.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
					}
				}
				else if (unk_0x875A214D5EBCA509(0, 51))
				{
					func_9(&(iParam0->f_421.f_5));
					func_47(iParam0);
					func_57(iParam0, 3);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_57(iParam0, 1);
			}
			break;
		
		case 3:
			func_46(iParam0, &sVar0);
			unk_0x80813AC549A1E8AE(&sVar0);
			if (unk_0xE100DD4F82A51BDE(&sVar0))
			{
				func_57(iParam0, 4);
			}
			break;
		
		case 4:
			func_46(iParam0, &sVar0);
			func_45(iParam0, &sVar1);
			if (Var2.f_0 != 3)
			{
				Var3 = { unk_0xBE8776D2466E9EA6(&sVar0, &sVar1, func_44(iParam0), func_43(iParam0), 0, 2) };
				Var4 = { unk_0x7A6103DCF5EE8CC3(&sVar0, &sVar1, func_44(iParam0), func_43(iParam0), 0, 2) };
				uVar5 = Var4.f_2;
				unk_0x63C8DCBEC1CF8225(unk_0x4A8C381C258A124D(), Var3, 1f, 500, uVar5, 0,15f);
			}
			func_57(iParam0, 5);
			break;
		
		case 5:
			func_32(iParam0);
			func_46(iParam0, &sVar0);
			func_45(iParam0, &sVar1);
			if (Var2.f_0 == 3)
			{
				iVar6 = unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_achieve_heading"));
			}
			else
			{
				iVar6 = unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_go_straight_to_coord"));
			}
			if (iVar6 != 1 && iVar6 != 0)
			{
				iParam0->f_421.f_1 = unk_0xBC5D9A293974F095(func_44(iParam0), func_43(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), iParam0->f_421.f_1, &sVar0, &sVar1, 2f, -1000f, 13, 16, 1,5f, 0);
				unk_0xE7101255AD6F1952(iParam0->f_421.f_1);
				iParam0->f_421.f_8.f_4 = unk_0x1DD05E817C89C737();
				func_13(&(iParam0->f_421), 8);
				func_57(iParam0, 6);
			}
			break;
		
		case 6:
			if (func_8(&(iParam0->f_421), 10))
			{
				func_58(&(iParam0->f_421), 10);
				func_31(iParam0);
			}
			func_32(iParam0);
			func_26(iParam0);
			uVar7 = unk_0x643DC062EE904FCA(iParam0->f_421.f_1);
			if (unk_0x5266F1D2AEF6F73A(uVar7))
			{
				if (unk_0xBD3B265153D3BA2D(uVar7) >= 1f)
				{
					func_20(iParam0, 0);
					func_46(iParam0, &sVar0);
					func_45(iParam0, &sVar1);
					iParam0->f_421.f_1 = unk_0xBC5D9A293974F095(func_44(iParam0), func_43(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), iParam0->f_421.f_1, &sVar0, &sVar1, 4f, -1,5f, 13, 16, 1000f, 0);
					unk_0xE7101255AD6F1952(iParam0->f_421.f_1);
					func_13(&(iParam0->f_421), 8);
					func_13(&(iParam0->f_421), 11);
				}
				else
				{
					func_58(&(iParam0->f_421), 8);
				}
			}
			else if (!func_8(&(iParam0->f_421), 8))
			{
				func_57(iParam0, 8);
			}
			break;
		
		case 7:
			unk_0xF2E51EC84D76A2B6(iParam0->f_421.f_1);
			func_57(iParam0, 8);
			break;
		
		case 8:
			uVar8 = unk_0x643DC062EE904FCA(iParam0->f_421.f_1);
			if (unk_0x5266F1D2AEF6F73A(uVar8))
			{
				if ((unk_0xBD3B265153D3BA2D(uVar8) >= 1f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 364629851)) || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 2116425869))
				{
					unk_0xF2E51EC84D76A2B6(iParam0->f_421.f_1);
					func_4(iParam0, 1);
					func_57(iParam0, 0);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_57(iParam0, 0);
			}
			break;
	}
}

void func_20(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_21(uParam0);
		if (iVar1 != uParam0->f_421.f_8.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_421.f_8.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_421.f_8.f_2;
		}
		iVar1 = uParam0->f_421.f_8.f_1;
	}
	else if (uParam0->f_421.f_8.f_2 == 5)
	{
		iVar1 = uParam0->f_421.f_8.f_1;
		iVar2 = 3;
		iVar0 = unk_0xC5935DFB3F39785A(0, iVar2);
		if (iVar0 == uParam0->f_421.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_421.f_8.f_2 > 6)
		{
			iVar1 = func_21(uParam0);
			uParam0->f_421.f_8.f_4 = unk_0x1DD05E817C89C737();
		}
		else
		{
			iVar1 = uParam0->f_421.f_8.f_1;
		}
		if ((unk_0x1DD05E817C89C737() - uParam0->f_421.f_8.f_4) >= 90000)
		{
			iVar1 = func_21(uParam0);
			if (iVar1 != uParam0->f_421.f_8.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_421.f_8.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_421.f_8.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_421.f_8.f_3 = uParam0->f_421.f_8.f_2;
	uParam0->f_421.f_8.f_2 = iVar0;
	uParam0->f_421.f_8.f_1 = iVar1;
}

int func_21(var uParam0)
{
	if (uParam0->f_421.f_8 == 2)
	{
		return uParam0->f_421.f_8.f_1;
	}
	return (uParam0->f_421.f_8.f_1 + 1 % func_22(uParam0->f_421.f_8));
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return func_23(func_24(), 4, 5);
		
		case 2:
			return 5;
		
		default:
	}
	return 0;
}

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_24()
{
	return func_25(unk_0x259BE71D8A81D4FA());
}

int func_25(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_26(var uParam0)
{
	struct<3> Var0;
	float fVar1;
	
	if (uParam0->f_421.f_4 == 6)
	{
		Var0 = { unk_0xB504E1B50AA21FC5(0, 218), unk_0xB504E1B50AA21FC5(0, 219), 0f };
		fVar1 = system::vmag(Var0);
		if ((uParam0->f_421.f_4 == 6 && !unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), -1322051853)) && !func_8(&(uParam0->f_421), 12))
		{
			if (fVar1 >= 0,35f)
			{
				func_30(uParam0);
			}
		}
		if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), -1322051853))
		{
			func_4(uParam0, 1);
		}
		else if (func_29(uParam0))
		{
			func_4(uParam0, 1);
		}
		else
		{
			unk_0xE0EEB603997F273F(2);
			unk_0x66EFB3D6110055C4(0, 24, 1);
			unk_0x66EFB3D6110055C4(0, 257, 1);
			unk_0x66EFB3D6110055C4(0, 142, 1);
			unk_0x66EFB3D6110055C4(0, 141, 1);
			unk_0x66EFB3D6110055C4(0, 140, 1);
			unk_0x66EFB3D6110055C4(0, 263, 1);
			unk_0x66EFB3D6110055C4(0, 264, 1);
			unk_0x66EFB3D6110055C4(0, 143, 1);
			unk_0x66EFB3D6110055C4(2, 200, 1);
			if (((((!unk_0x4D9174D8796EA622() && !func_8(&(uParam0->f_421), 0)) && !func_8(&(uParam0->f_421), 4)) && !func_16()) && !func_27(1)) && uParam0->f_421.f_8.f_2 != 3)
			{
				if (uParam0->f_421.f_5 == -1)
				{
					func_50(&(uParam0->f_421.f_5), 4, "MPJAC_EXIT", 0, 0, 0, 0);
				}
				if (uParam0->f_421.f_4 == 6)
				{
					if (unk_0x875A214D5EBCA509(0, 51))
					{
						func_31(uParam0);
					}
				}
			}
		}
	}
	func_58(&(uParam0->f_421), 9);
}

int func_27(bool bParam0)
{
	if (unk_0x22C925E7C63C5628())
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (func_28(unk_0x4A8C381C258A124D()))
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

int func_28(var uParam0)
{
	int iVar0;
	
	if (unk_0x5EA7A06A1491D450())
	{
		if (!unk_0x4FAFF4BCB7633475(uParam0))
		{
			unk_0x23B29877D0BE9547(uParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_29(var uParam0)
{
	return func_8(&(uParam0->f_421), 9);
}

void func_30(var uParam0)
{
	char* sVar0;
	char* sVar1;
	
	if (((func_21(uParam0) != uParam0->f_421.f_8.f_1 && uParam0->f_421.f_8.f_2 < 6) && uParam0->f_421.f_8.f_2 != 3) && uParam0->f_421.f_8.f_2 != 4)
	{
		func_20(uParam0, 1);
		func_46(uParam0, &sVar0);
		func_45(uParam0, &sVar1);
		uParam0->f_421.f_1 = unk_0xBC5D9A293974F095(func_44(uParam0), func_43(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
		unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), uParam0->f_421.f_1, &sVar0, &sVar1, 4f, -1,5f, 13, 16, 1000f, 0);
		unk_0xE7101255AD6F1952(uParam0->f_421.f_1);
		func_13(&(uParam0->f_421), 8);
		unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
	}
}

void func_31(var uParam0)
{
	char* sVar0;
	
	uParam0->f_421.f_1 = unk_0xBC5D9A293974F095(func_44(uParam0), func_43(uParam0), 2, 1, 0, 1065353216, 0, 1065353216);
	func_46(uParam0, &sVar0);
	unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), uParam0->f_421.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	unk_0xE7101255AD6F1952(uParam0->f_421.f_1);
	func_9(&(uParam0->f_421.f_5));
	func_57(uParam0, 8);
}

void func_32(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_421.f_4)
	{
		case 4:
		case 8:
			func_37(1);
		
		case 6:
			unk_0x513E63C787EE96A7();
			unk_0x92D8C10950A06B6D(0);
			unk_0xFC14A38C4235E772(0);
			unk_0x4EB223432F8FA0A0(19);
			unk_0x4EB223432F8FA0A0(2);
			unk_0xF25C7C5177203507();
			func_36();
			if (unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar0, 1) && iVar0 != joaat("weapon_unarmed"))
			{
				unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
			}
			unk_0x66EFB3D6110055C4(0, 37, 1);
			func_34(1);
			func_33();
			break;
	}
}

void func_33()
{
	Global_23692.f_6 = 1;
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		if (func_35())
		{
			Global_2684504.f_41 = 1;
		}
	}
	else
	{
		Global_2684504.f_41 = 0;
	}
}

bool func_35()
{
	return BitTest(Global_2684504.f_2, 11);
}

void func_36()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 4);
}

void func_37(int iParam0)
{
	if (func_42())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_15(0))
		{
			func_38(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_38(int iParam0)
{
	if (func_42())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_41())
		{
			func_40(1, 1);
		}
		else
		{
			func_40(0, 0);
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
	if (!func_39())
	{
		Global_20930.f_1 = 3;
	}
}

int func_39()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_40(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

bool func_41()
{
	return BitTest(Global_1956920, 5);
}

bool func_42()
{
	return BitTest(Global_1956920, 19);
}

Vector3 func_43(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { (uParam0[uParam0->f_421.f_2 /*14*/])->f_8.f_3 };
	if (func_24() && uParam0->f_421.f_8 == 0)
	{
		Var0.f_2 = (Var0.f_2 - 4f);
	}
	return Var0;
}

Vector3 func_44(var uParam0)
{
	return (uParam0[uParam0->f_421.f_2 /*14*/])->f_8;
}

void func_45(var uParam0, char* sParam1)
{
	switch (uParam0->f_421.f_8.f_2)
	{
		case 0:
			StringCopy(sParam1, "IDLE_A", 16);
			break;
		
		case 1:
			StringCopy(sParam1, "IDLE_B", 16);
			break;
		
		case 2:
			StringCopy(sParam1, "IDLE_C", 16);
			break;
		
		case 3:
			StringCopy(sParam1, "ENTER", 16);
			break;
		
		case 5:
			StringCopy(sParam1, "BASE", 16);
			break;
		
		case 4:
			StringCopy(sParam1, "EXIT", 16);
			break;
		
		case 7:
			StringCopy(sParam1, "A_TO_B", 16);
			break;
		
		case 8:
			StringCopy(sParam1, "B_TO_C", 16);
			break;
		
		case 9:
			StringCopy(sParam1, "C_TO_D", 16);
			break;
		
		case 10:
			StringCopy(sParam1, "D_TO_E", 16);
			break;
		
		case 12:
			StringCopy(sParam1, "B_TO_E", 16);
			break;
		
		case 13:
			StringCopy(sParam1, "C_TO_A", 16);
			break;
		
		case 14:
			StringCopy(sParam1, "D_TO_A", 16);
			break;
		
		case 15:
			StringCopy(sParam1, "E_TO_A", 16);
			break;
		
		default:
			StringCopy(sParam1, "invalid_clip", 16);
			break;
	}
}

void func_46(var uParam0, char* sParam1)
{
	switch (uParam0->f_421.f_8)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
	}
	if (func_24())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_421.f_8)
	{
		case 1:
		case 0:
			switch (uParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@BASE@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@BASE@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@BASE@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@BASE@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@BASE@", 64);
					break;
			}
			break;
		
		case 2:
			switch (uParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
	}
}

void func_47(var uParam0)
{
	uParam0->f_421.f_8 = func_49((*uParam0)[uParam0->f_421.f_2 /*14*/]);
	uParam0->f_421.f_8.f_1 = func_48(uParam0);
	uParam0->f_421.f_8.f_2 = 3;
	uParam0->f_421.f_8.f_3 = 3;
}

int func_48(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_421.f_8)
	{
		case 2:
			iVar0 = unk_0xC5935DFB3F39785A(0, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		
		default:
			iVar0 = unk_0xC5935DFB3F39785A(0, func_22(uParam0->f_421.f_8));
			break;
	}
	return iVar0;
}

int func_49(int iParam0)
{
	if (iParam0 >= 11)
	{
		return 0;
	}
	else if (iParam0 >= 9)
	{
		return 0;
	}
	else if (iParam0 >= 7)
	{
		return 0;
	}
	else if (iParam0 >= 4)
	{
		return 0;
	}
	else if (iParam0 > 1)
	{
		return 2;
	}
	return 0;
}

void func_50(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x486FF5D06E9659F1(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x3555462DB47B7AB1())
	{
		if (!*uParam0 == -1)
		{
			func_9(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/] = 1;
			Global_44799[iVar0 /*32*/].f_1 = Global_45000;
			Global_45000++;
			Global_44799[iVar0 /*32*/].f_4 = 0;
			Global_44799[iVar0 /*32*/].f_29 = 0;
			Global_44799[iVar0 /*32*/].f_5 = 0;
			Global_44799[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44799[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44799[iVar0 /*32*/].f_6 = iParam3;
			Global_44799[iVar0 /*32*/].f_31 = unk_0x8F76B2250AC806FA();
			Global_44799[iVar0 /*32*/].f_7 = 0;
			Global_44799[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xD6F9DEE4765092A9(sParam4))
			{
				Global_44799[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44799[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44799[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44799[iVar0 /*32*/].f_12 = 0;
				Global_44799[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_44799[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_51(var uParam0)
{
	Stack.Push(!func_8(&(uParam0->f_421), 5));
	Stack.Push(uParam0[uParam0->f_421.f_2 /*14*/]);
	Stack.Push(uParam0->f_421.f_2);
	Call_Loc(uParam0->f_421.f_13);
	return (StackVal || StackVal);
}

int func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			iVar1 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0));
			if ((iVar1 != unk_0x259BE71D8A81D4FA() && func_53(iVar1, 1, 1)) && func_55(unk_0x56E414973C2A8C0E(iVar1), uParam0[uParam0->f_421.f_2 /*14*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_53(int iParam0, bool bParam1, bool bParam2)
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

bool func_54(var uParam0)
{
	return uParam0->f_421 & 31 > 0;
}

bool func_55(var uParam0, var uParam1)
{
	return unk_0x5105BE70DEF1F5FB(uParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, 1, 0);
}

int func_56(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_55(unk_0x4A8C381C258A124D(), uParam0[uParam0->f_421.f_2 /*14*/]))
		{
			return 1;
		}
		else
		{
			uParam0->f_421.f_2 = (uParam0->f_421.f_2 + 1 % 30);
		}
		iVar0++;
	}
	return 0;
}

void func_57(var uParam0, int iParam1)
{
	uParam0->f_421.f_4 = iParam1;
}

void func_58(var uParam0, int iParam1)
{
	unk_0x8744D2E3FC95740E(uParam0, iParam1);
}

void func_59(var uParam0)
{
	if (uParam0->f_421.f_4 == 6)
	{
	}
	else if (uParam0->f_421.f_4 > 4)
	{
		unk_0x159356D054E19158(unk_0x4A8C381C258A124D());
		unk_0x04FC75A7251431C6(unk_0x4A8C381C258A124D(), func_60(uParam0));
		uParam0->f_421.f_7 = unk_0x8034325BF6D6E41F();
	}
	else if (uParam0->f_421.f_4 > 1)
	{
		unk_0x04FC75A7251431C6(unk_0x4A8C381C258A124D(), func_60(uParam0));
		uParam0->f_421.f_7 = unk_0x8034325BF6D6E41F();
	}
	else if ((unk_0x8034325BF6D6E41F() - uParam0->f_421.f_7) < 5)
	{
		unk_0x04FC75A7251431C6(unk_0x4A8C381C258A124D(), func_60(uParam0));
	}
}

float func_60(var uParam0)
{
	switch ((*uParam0)[uParam0->f_421.f_2 /*14*/])
	{
		case 12:
		case 10:
		case 6:
			return 0,24f;
		
		case 2:
			return 0,16f;
		
		case 3:
			return 0,18f;
		
		default:
	}
	return 0,13f;
}

void func_61(var uParam0)
{
	func_62(&(uParam0->f_421), 4, func_14());
	func_62(&(uParam0->f_421), 1, unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0));
	func_62(&(uParam0->f_421), 3, unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1));
	func_62(&(uParam0->f_421), 0, func_15(0));
	func_62(&(uParam0->f_421), 2, unk_0x24433628C02BED5F(unk_0x4A8C381C258A124D()));
}

void func_62(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	uVar0 = iParam1;
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam0, uVar0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(uParam0, iVar0);
	}
}

int func_63()
{
	if (!func_73(unk_0x4A8C381C258A124D()))
	{
		return 1;
	}
	if (func_65())
	{
		return 1;
	}
	if (Global_1845118 == func_64())
	{
		return 1;
	}
	return 0;
}

int func_64()
{
	return -1;
}

int func_65()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_72())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_71())
	{
		return 1;
	}
	if (func_70(159))
	{
		if (!func_69())
		{
			return 1;
		}
	}
	if (func_70(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_66() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_66()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_66()
{
	switch (func_68())
	{
		case 0:
			return func_67();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_67()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_68()
{
	return Global_32948;
}

bool func_69()
{
	return Global_2684504.f_700;
}

int func_70(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_71()
{
	return Global_2696172;
}

bool func_72()
{
	return Global_2684504.f_695;
}

bool func_73(var uParam0)
{
	return unk_0x5105BE70DEF1F5FB(uParam0, 354,4375f, 4877,2f, -62,34054f, 345,1211f, 4864,095f, -55,11187f, 16f, 0, 1, 0);
}

int func_74()
{
	if (Global_1845118 != func_64())
	{
		if (unk_0x99F8FC8A6D8E20C0("base_heist_seats", Global_1845118, 1, 0))
		{
			return 0;
		}
		unk_0xDB2434E51017FFCC(32, 0, Global_1845118);
		func_86(0, -1, 0);
		unk_0xAECC5FA98C879D67(0);
		func_75();
		return 1;
	}
	return 0;
}

void func_75()
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_85() };
	Var1 = { func_84() };
	func_81(0, func_83(343,93f, 4875,389f, -60,44f, -90f), -90f, Var0, Var1);
	func_81(1, func_83(344,08f, 4874,239f, -60,44f, -86f), -86f, Var0, Var1);
	func_81(2, func_83(344,33f, 4873,189f, -60,44f, -78f), -78f, Var0, Var1);
	func_81(3, func_83(344,7f, 4872,239f, -60,44f, -72f), -72f, Var0, Var1);
	func_81(4, func_83(345,06f, 4871,48f, -60,44f, -67f), -67f, Var0, Var1);
	func_81(5, func_83(345,86f, 4870,289f, -60,44f, -60f), -60f, Var0, Var1);
	func_81(6, func_83(350,41f, 4867,05f, -60,44f, -26f), -26f, Var0, Var1);
	func_81(7, func_83(351,51f, 4866,75f, -60,44f, -17f), -17f, Var0, Var1);
	func_81(8, func_83(352,66f, 4866,6f, -60,44f, -10f), -10f, Var0, Var1);
	func_81(9, func_83(353,6f, 4866,58f, -60,44f, -4f), -4f, Var0, Var1);
	func_81(10, func_83(354,7f, 4866,68f, -60,44f, 4f), 4f, Var0, Var1);
	func_81(11, func_83(355,85f, 4866,91f, -60,44f, 10f), 10f, Var0, Var1);
	func_81(12, func_83(346,02f, 4876,871f, -60,838f, -102f), -102f, Var0, Var1);
	func_81(13, func_83(345,97f, 4875,721f, -60,838f, -93f), -93f, Var0, Var1);
	func_81(14, func_83(346,19f, 4874,21f, -60,838f, -81f), -81f, Var0, Var1);
	func_81(15, func_83(346,62f, 4873,01f, -60,838f, -73f), -73f, Var0, Var1);
	func_81(16, func_83(347,27f, 4871,86f, -60,838f, -62f), -62f, Var0, Var1);
	func_81(17, func_83(351,57f, 4868,86f, -60,838f, -20f), -20f, Var0, Var1);
	func_81(18, func_83(352,89f, 4868,65f, -60,838f, -9f), -9f, Var0, Var1);
	func_81(19, func_83(354,17f, 4868,68f, -60,838f, 0f), 0f, Var0, Var1);
	func_81(20, func_83(355,12f, 4868,85f, -60,838f, 10f), 8f, Var0, Var1);
	func_81(21, func_83(356,58f, 4869,38f, -60,838f, 10f), 20f, Var0, Var1);
	func_81(22, func_83(348,2f, 4876,56f, -61,24f, -101f), -101f, Var0, Var1);
	func_81(23, func_83(348,2f, 4875,31f, -61,24f, -88f), -88f, Var0, Var1);
	func_81(24, func_83(348,47f, 4874,28f, -61,24f, -76f), -76f, Var0, Var1);
	func_81(25, func_83(349,17f, 4872,97f, -61,24f, -60f), -60f, Var0, Var1);
	func_81(26, func_83(352,12f, 4870,98f, -61,24f, -20f), -20f, Var0, Var1);
	func_81(27, func_83(353,42f, 4870,84f, -61,24f, -6f), -6f, Var0, Var1);
	func_81(28, func_83(354,67f, 4870,995f, -61,24f, 8f), 8f, Var0, Var1);
	func_81(29, func_83(356,02f, 4871,545f, -61,24f, 25f), 25f, Var0, Var1);
	func_76(&Local_45, 8043);
}

void func_76(int iParam0, int iParam1)
{
	iParam0->f_421.f_13 = iParam1;
	func_13(&(iParam0->f_421), 5);
}

bool func_77(var uParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	bool bVar5;
	
	if (iParam1 < 22)
	{
		return 1;
	}
	if (!unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()) || unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		return 0;
	}
	if (func_80(unk_0x259BE71D8A81D4FA()) || BitTest(iLocal_62, 0))
	{
		return 0;
	}
	Var0 = { uParam0->f_1 };
	Var1 = { uParam0->f_1.f_3 };
	Var0.f_2 = 0f;
	Var1.f_2 = 0f;
	Var2 = { func_79(Var0 - Var1) };
	Var3 = { unk_0x90D0E0397D3F7690(unk_0x4A8C381C258A124D()) };
	fVar4 = func_78(Var2, Var3);
	bVar5 = fVar4 > 0,36f;
	return bVar5;
}

float func_78(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_79(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_80(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_53(iParam0, 1, 1))
		{
			if (BitTest(Global_1882632[iParam0 /*146*/].f_43.f_27, 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_81(int iParam0, struct<3> Param1, float fParam2, struct<3> Param3, struct<3> Param4)
{
	Local_45[iParam0 /*14*/] = 3;
	Local_45[iParam0 /*14*/].f_1 = { Param1 + func_82(Param3, (fParam2 - 180f)) };
	Local_45[iParam0 /*14*/].f_1.f_3 = { Param1 + func_82(Param4, (fParam2 - 180f)) };
	Local_45[iParam0 /*14*/].f_1.f_6 = 1f;
	Local_45[iParam0 /*14*/].f_8 = { Param1 };
	Local_45[iParam0 /*14*/].f_8.f_3 = { 0f, 0f, fParam2 };
}

Vector3 func_82(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	
	fVar1 = system::sin(fParam1);
	fVar2 = system::cos(fParam1);
	Var0.f_0 = ((Param0.f_0 * fVar2) - (Param0.f_1 * fVar1));
	Var0.f_1 = ((Param0.f_0 * fVar1) + (Param0.f_1 * fVar2));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_83(struct<3> Param0, float fParam1)
{
	return Param0 + func_82(0f, 0,01f, 0,015f, fParam1);
}

Vector3 func_84()
{
	return 0f, -0,7f, -1f;
}

Vector3 func_85()
{
	return 0f, 0,1f, 1f;
}

int func_86(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_87(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_72())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_70(157))
				{
					if (!bParam2)
					{
						func_2();
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
					func_2();
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
				func_2();
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
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_87(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

