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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	struct<96> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 3, 3, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<62> Local_64 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0,0375f;
	fLocal_31 = 0,17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_135(&uScriptParam_67);
	}
	else
	{
		func_126();
	}
	while (true)
	{
		func_125();
		unk_0x66EFB3D6110055C4(2, 199, 1);
		unk_0x66EFB3D6110055C4(2, 200, 1);
		if (func_117())
		{
			func_126();
		}
		if (func_116())
		{
			func_126();
		}
		func_1();
	}
}

void func_1()
{
	func_110(0);
	unk_0x0A0A06C514052E80(0);
	switch (Local_64.f_16)
	{
		case 0:
			func_107();
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	if (BitTest(Global_2707890, 1))
	{
		unk_0x8744D2E3FC95740E(&Global_2707890, true);
		func_97(Global_2707889);
	}
	if (Local_64.f_61 != Global_2708020)
	{
		Local_64.f_61 = { Global_2708020 };
	}
	else
	{
		Local_64.f_61.f_1 = 0;
		Local_64.f_61.f_2 = 0;
	}
	if (!unk_0x4D9174D8796EA622() && !func_96())
	{
		func_51();
		func_42();
		func_38();
		func_35();
		func_34();
		func_13();
	}
	func_10(&(Local_63.f_67), BitTest(Local_64.f_60, 3));
	func_3(&(Local_64.f_38), &(Local_64.f_39));
	unk_0x8744D2E3FC95740E(&Global_2707890, 4);
	unk_0x8744D2E3FC95740E(&(Local_64.f_60), true);
	unk_0x8744D2E3FC95740E(&(Local_64.f_60), 2);
	unk_0x8744D2E3FC95740E(&(Local_64.f_60), 3);
	unk_0x8744D2E3FC95740E(&(Local_64.f_60), 6);
	unk_0x8744D2E3FC95740E(&(Local_64.f_60), 7);
}

void func_3(var uParam0, var uParam1)
{
	struct<3> Var0;
	var uVar1;
	struct<3> Var2;
	
	func_9();
	Var0 = { unk_0x02AF3EA0F67D2329() };
	if ((((unk_0x4D9174D8796EA622() || func_8()) || unk_0x875A214D5EBCA509(2, 199)) || unk_0x6D05C5731A838CB3(2, 199)) || unk_0x2645430E708CBFAC(2, 199))
	{
		unk_0x83F9B9189E65251B(Var0.f_0, Var0.f_1);
		unk_0x2474C1A1D3FE2888(Var0.f_0, Var0.f_1, 0);
		if (unk_0x4D9174D8796EA622() || func_8())
		{
			if (unk_0xC450B06E5AAA0985(unk_0x413A91F497E3428F()))
			{
				unk_0xF42EBD7CD0682A8B(unk_0x413A91F497E3428F(), 255);
			}
		}
	}
	else if (unk_0xC450B06E5AAA0985(unk_0x413A91F497E3428F()))
	{
		unk_0xF42EBD7CD0682A8B(unk_0x413A91F497E3428F(), 0);
	}
	unk_0x43F4B7E163A31644(Var0.f_0, Var0.f_1);
	uVar1 = unk_0xFCB6553111578B2F();
	if (unk_0x78411E34CF90EA8C(uVar1))
	{
		unk_0x29BBAB7031C36984(uVar1, 1);
	}
	Var2 = { unk_0x958849BB56EC0F07(0) };
	Var2 = { func_7(Var2) };
	if (!unk_0xC450B06E5AAA0985(*uParam0))
	{
		*uParam1 = func_5(Var0, 0);
		unk_0x4C905FB262965D5D(*uParam1, 425);
		unk_0x89FE619BFBB2024B(*uParam1, 0);
		unk_0xF55F62DA99DB0C2F(*uParam1, 4);
		unk_0x61183D6239A9D7B8(*uParam1, func_4(2));
		unk_0xD5888E94B9AE2B51(*uParam1, 1, 11);
		unk_0x5D3946F818C6B331(*uParam1, 0,54f);
		unk_0x1456FD5C0C438B19(*uParam1, 13 + 1);
		*uParam0 = func_5(Var0, 0);
		unk_0x4C905FB262965D5D(*uParam0, 425);
		unk_0x89FE619BFBB2024B(*uParam0, 0);
		unk_0xF55F62DA99DB0C2F(*uParam0, 4);
		unk_0x61183D6239A9D7B8(*uParam0, func_4(18));
		unk_0xD5888E94B9AE2B51(*uParam0, 1, 11);
		unk_0x5D3946F818C6B331(*uParam0, 0,44f);
		unk_0x1456FD5C0C438B19(*uParam0, 13 + 1);
		unk_0xA1DFF583C8070610(*uParam0, 1);
		unk_0x0C4EDD88E2185B8F(*uParam0, system::round(unk_0x97BC40FFA2FFCCD2(Var2.f_0, Var2.f_1)));
		unk_0xA1DFF583C8070610(*uParam1, 1);
		unk_0x0C4EDD88E2185B8F(*uParam1, system::round(unk_0x97BC40FFA2FFCCD2(Var2.f_0, Var2.f_1)));
	}
	else
	{
		unk_0xDABC73EF230B6665(*uParam0, Var0);
		unk_0x0C4EDD88E2185B8F(*uParam0, system::round(unk_0x97BC40FFA2FFCCD2(Var2.f_0, Var2.f_1)));
		unk_0xF55F62DA99DB0C2F(*uParam0, 5);
		unk_0xDABC73EF230B6665(*uParam1, Var0);
		unk_0x0C4EDD88E2185B8F(*uParam1, system::round(unk_0x97BC40FFA2FFCCD2(Var2.f_0, Var2.f_1)));
		unk_0xF55F62DA99DB0C2F(*uParam1, 5);
	}
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xA306E6FD2A6558E6(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

var func_5(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_6(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_7(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0.f_0 = system::cos(Param0.f_0);
	Var0.f_1 = system::cos(Param0.f_2);
	Var0.f_2 = system::sin(Param0.f_0);
	Var0.f_1 = (Var0.f_1 * Var0.f_0);
	Var0.f_0 = (Var0.f_0 * -system::sin(Param0.f_2));
	return Var0;
}

bool func_8()
{
	return unk_0x05AA183DA1344935() != 0;
}

void func_9()
{
	Global_1574847 = 1;
}

void func_10(var uParam0, bool bParam1)
{
	if (unk_0xD6F9DEE4765092A9(uParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_12(uParam0))
		{
			unk_0x428C32CC68809A35(1);
		}
		return;
	}
	if (!func_12(uParam0))
	{
		unk_0x428C32CC68809A35(1);
		func_11(uParam0);
	}
}

void func_11(var uParam0)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

bool func_12(var uParam0)
{
	unk_0x39DCBE5519BD783A(uParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_13()
{
	if (BitTest(Global_2707890, 5))
	{
		unk_0x8744D2E3FC95740E(&Global_2707890, 5);
		Local_64.f_35 = 0;
	}
	func_14(&(Local_63.f_24), &(Local_64.f_35));
}

void func_14(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*uParam0 > 0)
	{
		bVar0 = func_32(0, -1, 0);
		if (bVar0)
		{
			if ((!*uParam1 || unk_0x7811C74D5B749F76(2)) || unk_0x7811C74D5B749F76(0))
			{
				func_31(-1);
				iVar1 = 0;
				while (iVar1 < *uParam0)
				{
					iVar2 = uParam0->f_34[iVar1];
					if (iVar2 < 32)
					{
						func_30(iVar2, &(uParam0->f_1[iVar1 /*4*/]), -1);
					}
					else
					{
						iVar3 = (iVar2 - 32);
						func_29(iVar3, &(uParam0->f_1[iVar1 /*4*/]), -1, 0);
					}
					iVar1++;
				}
				*uParam1 = 1;
			}
			func_28(1);
			func_15(0, -1, 0, 1, 0, 0, 1, 1, 0);
		}
	}
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_27(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_24(bParam4, bParam8))
	{
		return;
	}
	if (func_22())
	{
		return;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_18(unk_0x259BE71D8A81D4FA(), 0))
		{
			return;
		}
	}
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x66DA7155B68E7638() == 0 || unk_0xA43CD45F18522E3F())
		{
			return;
		}
	}
	if (Global_23831.f_5326 != 0)
	{
		if (unk_0x7811C74D5B749F76(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (Global_23831.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), unk_0xE934399D6F2C3AC5(2, Global_23831.f_5625[iVar1], 1), 64);
				}
				else if (Global_23831.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), unk_0xF761D79754BC3043(2, Global_23831.f_5640[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_23831.f_5327 = 0;
		}
		if (!Global_23831.f_5327)
		{
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x74BF156C860580D4((1f - (Global_23831.f_5684 / 100f)));
			unk_0xE6B753D52F4CA222();
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(1);
				unk_0xE6B753D52F4CA222();
			}
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (unk_0x70E57E9927B6BA58(&(Global_23831.f_5553[iVar1 /*4*/])) != unk_0x70E57E9927B6BA58("PREV"))
				{
					unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x330108B080A2132F(iVar1);
					func_17(&(Global_23831.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && unk_0x70E57E9927B6BA58(&(Global_23831.f_5553[iVar2 /*4*/])) == unk_0x70E57E9927B6BA58("PREV"))
					{
						func_17(&(Global_23831.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23831.f_5610[iVar1] == -1)
					{
						func_16(&(Global_23831.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23831.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x882AEFD55B8D51FB(&(Global_23831.f_5553[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xBD34A69071611974(iVar3, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(iVar3);
						}
						unk_0xCFAD3D478C87321A();
					}
					if (unk_0x761778199FE1211C())
					{
						if (Global_23831.f_5625[iVar1] != 365 && BitTest(Global_23831.f_5655, iVar1))
						{
							unk_0x557F1E2300EF1A3E(1);
							unk_0x330108B080A2132F(Global_23831.f_5625[iVar1]);
						}
						else
						{
							unk_0x557F1E2300EF1A3E(0);
							unk_0x330108B080A2132F(365);
						}
					}
					unk_0xE6B753D52F4CA222();
				}
				iVar1++;
			}
			if (unk_0x70E57E9927B6BA58(&(Global_4541740.f_16)) != unk_0x70E57E9927B6BA58(""))
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x330108B080A2132F(Global_23831.f_5326);
				func_17(&Global_4541740);
				if (Global_4541740.f_20 == -1)
				{
					func_16(&(Global_4541740.f_16));
				}
				else
				{
					iVar4 = Global_23831.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x882AEFD55B8D51FB(&(Global_4541740.f_16));
					if (bParam5)
					{
						unk_0xBD34A69071611974(iVar4, 70);
					}
					else
					{
						unk_0x511D14ED2DA887E1(iVar4);
					}
					unk_0xCFAD3D478C87321A();
				}
				unk_0xE6B753D52F4CA222();
			}
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(0);
			unk_0x330108B080A2132F(80);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23831.f_5685)
			{
				unk_0x330108B080A2132F(1);
			}
			else
			{
				unk_0x330108B080A2132F(0);
			}
			unk_0xE6B753D52F4CA222();
			Global_23831.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23831.f_5326)
		{
			if (Global_23831.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x330108B080A2132F(iVar1);
					unk_0x882AEFD55B8D51FB(&(Global_23831.f_5553[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xBD34A69071611974(iParam2, 70);
					}
					else
					{
						unk_0x511D14ED2DA887E1(iParam2);
					}
					unk_0xCFAD3D478C87321A();
					unk_0xE6B753D52F4CA222();
				}
			}
			iVar1++;
		}
		if (Global_4541740.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x330108B080A2132F(iVar1);
				unk_0x882AEFD55B8D51FB(&(Global_4541740.f_16));
				if (bParam5)
				{
					unk_0xBD34A69071611974(iParam2, 70);
				}
				else
				{
					unk_0x511D14ED2DA887E1(iParam2);
				}
				unk_0xCFAD3D478C87321A();
				unk_0xE6B753D52F4CA222();
			}
		}
		unk_0x9A122D542F2BB60E(76, 66);
		unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23831.f_9116)
			{
				unk_0x36A472841BBC9D4A(15, 0f, -0,0375f);
				Global_23831.f_9116 = 1;
			}
		}
		else if (Global_23831.f_9116)
		{
			unk_0xDCFF86AAD108A201(15);
			Global_23831.f_9116 = 0;
		}
		unk_0x90B531766063C5CD();
		if (Global_23831.f_5658)
		{
			unk_0x9A122D542F2BB60E(82, 66);
			unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
			unk_0x6D16B99FEB0AFFF1(Global_23831.f_6263[iVar0 /*10*/], Global_23831.f_5656, Global_23831.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x90B531766063C5CD();
		}
		else
		{
			unk_0xA91A4C18A2DB01BD(Global_23831.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_16(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_17(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_21(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_19(-1, 0) == 8;
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

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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

int func_20()
{
	return Global_1574926;
}

int func_21(var uParam0)
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

int func_22()
{
	struct<3> Var0;
	
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	if (func_23())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x78C4EBB0251847E2(&Var0);
		if (Global_20875 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_23()
{
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_24(bool bParam0, bool bParam1)
{
	if (Global_2672855.f_1728.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9390801B06EE998F() || (func_26(8, -1) && func_25() != 65)) || (unk_0x05AA183DA1344935() != 0 && !bParam1)) || (unk_0x3555462DB47B7AB1() && !bParam0)) || unk_0x2B8BAF9BA2A3D36B()) || Global_79650) || Global_23831.f_9115) || unk_0xB11671B812399BA2()) || Global_101585.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_25()
{
	return Global_1575011;
}

var func_26(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

int func_27(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x76CD105BCAC6EB9F() && unk_0xE8DB952A4BA8F328())
		{
			iParam2 = unk_0xF25E5B7C1279A85B();
		}
	}
	StringCopy(&cVar0, unk_0x1AF90EB93E0012D6(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x70E57E9927B6BA58(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23831.f_6324[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23831.f_6324[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23831.f_6324[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_28(int iParam0)
{
	Global_1670224.f_1163 = iParam0;
}

void func_29(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xE934399D6F2C3AC5(2, iParam0, 1);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_23831.f_5655), Global_23831.f_5326);
	}
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = iParam0;
	Global_23831.f_5640[Global_23831.f_5326] = 32;
	Global_23831.f_5326++;
}

void func_30(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xF761D79754BC3043(2, iParam0, 1);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	unk_0x8744D2E3FC95740E(&(Global_23831.f_5655), Global_23831.f_5326);
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = 365;
	Global_23831.f_5640[Global_23831.f_5326] = iParam0;
	Global_23831.f_5326++;
}

void func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_23831.f_5326 = 0;
	Global_23831.f_5327 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23831.f_5553[iVar0 /*4*/]), "", 16);
		Global_23831.f_5610[iVar0] = -1;
		Global_23831.f_5625[iVar0] = 365;
		Global_23831.f_5640[iVar0] = 32;
		iVar0++;
	}
	Global_23831.f_5655 = 0;
	StringCopy(&(Global_4541740.f_16), "", 16);
	Global_4541740.f_20 = -1;
	if (unk_0x761778199FE1211C())
	{
		if (!func_27(&iVar1, 0, iParam0))
		{
			return;
		}
		if (unk_0xA0C7B98BCF1EEF9E(Global_23831.f_6263[iVar1 /*10*/]))
		{
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			unk_0x557F1E2300EF1A3E(0);
			unk_0xE6B753D52F4CA222();
		}
	}
}

bool func_32(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_27(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23831.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_6238[iVar0 /*4*/])))
	{
		unk_0xF2CB0224D3BE0B42(&(Global_23831.f_6238[iVar0 /*4*/]), 9);
		Global_23831.f_6231[iVar0] = 1;
		if (!unk_0xCC2EFE4B1D0EE422(&(Global_23831.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xD0D00ED689D6CA81("CommonMenu", 0);
	unk_0xD0D00ED689D6CA81("Shared", 1);
	if (!unk_0x38D063D8CF6D1967("Shared"))
	{
		bVar1 = false;
	}
	Global_23831.f_6217[iVar0] = 1;
	if (!unk_0x38D063D8CF6D1967("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xD0D00ED689D6CA81("MPShopSale", 0);
		Global_23831.f_6224[iVar0] = 1;
		if (!unk_0x38D063D8CF6D1967("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23831.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_33(&(Global_23831.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_33(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				*uParam0 = unk_0x8DE4F68A9728925E(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
					{
						uParam0->f_8 = unk_0x1DD05E817C89C737();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1DD05E817C89C737();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				uParam0->f_8 = unk_0x1DD05E817C89C737();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_34()
{
	int iVar0;
	
	if (!BitTest(Local_64.f_60, 7))
	{
		iVar0 = unk_0x8960847E5FD7B48F();
		if (Local_64.f_56 != iVar0)
		{
			unk_0x5C483F4653DC993C("eyeinthesky");
			Local_64.f_56 = unk_0x8960847E5FD7B48F();
		}
	}
}

void func_35()
{
	if (BitTest(Local_64.f_60, 6))
	{
		if (BitTest(Local_64.f_60, 5))
		{
			func_37();
		}
	}
	else if (!BitTest(Local_64.f_60, 5) && !unk_0xD6F9DEE4765092A9(&(Local_63.f_80)))
	{
		func_36(&(Local_63.f_80));
	}
}

void func_36(var uParam0)
{
	if (unk_0xD6F9DEE4765092A9(uParam0))
	{
		return;
	}
	if (BitTest(Local_64.f_60, 5))
	{
	}
	else
	{
		unk_0x005E8B7CFA7D52A6(uParam0);
		unk_0x0B0C9A0F9AAEB7F0(&(Local_64.f_60), 5);
	}
}

void func_37()
{
	if (BitTest(Local_64.f_60, 5))
	{
		unk_0x4E6A84BCEF2DCCBF();
		unk_0x8744D2E3FC95740E(&(Local_64.f_60), 5);
	}
}

void func_38()
{
	struct<3> Var0;
	
	if (Local_63.f_17 == 4)
	{
		return;
	}
	if (BitTest(Local_64.f_60, 1))
	{
		return;
	}
	if (!unk_0xA0C7B98BCF1EEF9E(Local_64.f_36))
	{
		Local_64.f_36 = unk_0x8DE4F68A9728925E(Local_63.f_86.f_1);
		return;
	}
	Var0 = { unk_0x9DDBEF363FADFA4C(Local_64.f_0, 2) };
	switch (Local_63.f_17)
	{
		case 1:
		case 2:
		case 3:
			if (!Local_64.f_37)
			{
				Local_64.f_37 = 1;
				func_41(Local_64.f_36, Local_63.f_20);
				func_40(Local_64.f_36, Local_63.f_20.f_1, Local_63.f_20.f_2, Local_63.f_20.f_3);
			}
		
		case 0:
			func_39(Local_64.f_36, 0f, unk_0x4A1D1AB55229AAF0(Local_64.f_0), Local_63.f_4, Local_63.f_5, Var0.f_2);
			break;
	}
	unk_0xA4F67CEB594AE064(0);
	unk_0xA91A4C18A2DB01BD(Local_64.f_36, 255, 255, 255, 0, 0);
}

void func_39(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	unk_0x88F483FBD433696A(uParam0, "SET_ALT_FOV_HEADING");
	unk_0x74BF156C860580D4(fParam1);
	unk_0x74BF156C860580D4(fParam2);
	unk_0x74BF156C860580D4(fParam5);
	unk_0xE6B753D52F4CA222();
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x88F483FBD433696A(uParam0, "SET_WEAPON_VALUES");
	unk_0x330108B080A2132F(uParam1);
	unk_0x330108B080A2132F(uParam2);
	unk_0x330108B080A2132F(uParam3);
	unk_0xE6B753D52F4CA222();
}

void func_41(var uParam0, int iParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_ZOOM_VISIBLE");
	unk_0x557F1E2300EF1A3E(uParam1);
	unk_0xE6B753D52F4CA222();
}

void func_42()
{
	struct<4> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	
	if (Local_63.f_94 != 0)
	{
		Local_64.f_4 = { unk_0xD1A6A821F5AC81DB(Local_63.f_95, 1) };
		Local_64.f_4.f_3 = { unk_0x88124E0D60FB8D11(Local_63.f_95, 2) };
	}
	if (!BitTest(Local_64.f_60, 2))
	{
		Var0 = { func_47(Local_64.f_0, &(Local_64.f_1), Local_63, Local_63.f_6.f_1, Local_63.f_6) };
	}
	Var1 = { Local_63.f_91 + Local_64.f_1 };
	Var2 = { func_46(Local_63.f_71, Var1.f_2) };
	Var3 = { Local_63.f_88 + Var2 };
	switch (Local_63.f_94)
	{
		case 0:
			func_45(Local_64.f_0, Var3, Var1);
			break;
		
		case 1:
			func_44(Local_64.f_0, Var3, Var1, Local_63.f_95);
			break;
	}
	func_43(Local_64.f_40, Local_64.f_40.f_2, Local_64.f_40.f_8, Local_64.f_40.f_3, Local_64.f_40.f_9, Local_64.f_40.f_4, Local_64.f_40.f_10, Local_64.f_40.f_5, Local_64.f_40.f_11, Local_64.f_40.f_6, Local_64.f_40.f_12, Local_64.f_40.f_7, Var0.f_0, Var0.f_1, Local_64.f_61.f_1, Local_64.f_61.f_2 > 0);
	Local_64.f_4.f_6 = { unk_0xA452B06E281A9014(Local_64.f_0) };
	Local_64.f_4.f_9 = { unk_0x9DDBEF363FADFA4C(Local_64.f_0, 2) };
}

void func_43(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, float fParam12, struct<3> Param13, int iParam14, bool bParam15)
{
	float fVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	float fVar4;
	
	if (unk_0xD6F9DEE4765092A9(uParam0) || unk_0xD7E1DF759CD0FFF2(uParam0, 0, -1))
	{
		if (fParam12 != 0f)
		{
			if (iParam4 != -1)
			{
				if (unk_0x9F0C06CFBACDD6A1(iParam4))
				{
					unk_0xBF3D28CA44F3BE2D(iParam4, uParam5, uParam1, 1);
				}
				unk_0x3F002AA9562BF0BE(iParam4, "Ctrl", fParam12);
				if (fParam12 < 0f)
				{
					unk_0x3F002AA9562BF0BE(iParam4, "Dir", -1f);
				}
				else
				{
					unk_0x3F002AA9562BF0BE(iParam4, "Dir", 1f);
				}
			}
		}
		else if (iParam4 != -1)
		{
			if (!unk_0x9F0C06CFBACDD6A1(iParam4))
			{
				unk_0x8E4825CCACA34B58(iParam4);
			}
		}
		fVar0 = system::vmag(Param13);
		if (fVar0 > 0f)
		{
			if (iParam2 != -1)
			{
				if (unk_0x9F0C06CFBACDD6A1(iParam2))
				{
					unk_0xBF3D28CA44F3BE2D(iParam2, uParam3, sParam1, 1);
				}
				unk_0x3F002AA9562BF0BE(iParam2, "Ctrl", fVar0);
			}
		}
		else if (iParam2 != -1)
		{
			if (!unk_0x9F0C06CFBACDD6A1(iParam2))
			{
				unk_0x8E4825CCACA34B58(iParam2);
			}
		}
		if (iParam6 != -1)
		{
			if (unk_0x9F0C06CFBACDD6A1(iParam6))
			{
				unk_0xBF3D28CA44F3BE2D(iParam6, uParam7, sParam1, 1);
			}
		}
		uVar1 = unk_0x4A8C381C258A124D();
		if (unk_0x7F420695E3F776FB(uVar1, 0))
		{
			uVar2 = unk_0x6EF03BE64E058E2F(uVar1, 0);
		}
		else
		{
			uVar2 = uVar1;
		}
		if (iParam8 != -1)
		{
			bVar3 = bParam15;
			if (!bVar3)
			{
				fVar4 = system::to_float(unk_0xF8A78594664D23A6(uVar2));
				bVar3 = (IntToFloat(iParam14) / fVar4) > 0,1f;
			}
			if (bVar3)
			{
				if (unk_0x9F0C06CFBACDD6A1(iParam8))
				{
					unk_0xBF3D28CA44F3BE2D(iParam8, uParam9, uParam9, 1);
				}
			}
		}
		if (iParam10 != -1)
		{
			if ((IntToFloat(unk_0x8D91ADE44AC79BC9(uVar1)) / system::to_float(unk_0xF8A78594664D23A6(uVar1))) < 0,15f || (IntToFloat(unk_0x8D91ADE44AC79BC9(uVar2)) / system::to_float(unk_0xF8A78594664D23A6(uVar2))) < 0,15f)
			{
				if (unk_0x9F0C06CFBACDD6A1(iParam10))
				{
					unk_0xBF3D28CA44F3BE2D(iParam10, uParam11, sParam1, 1);
				}
			}
			else if (!unk_0x9F0C06CFBACDD6A1(iParam10))
			{
				unk_0x8E4825CCACA34B58(iParam10);
			}
		}
	}
}

void func_44(var uParam0, struct<3> Param1, struct<3> Param2, var uParam3)
{
	unk_0x03F10D56CCA2C055(uParam0, uParam3, Param1, 1);
	unk_0x5E5CEC33463AD803(uParam0, Param2 + unk_0x88124E0D60FB8D11(uParam3, 2), 2);
}

void func_45(var uParam0, struct<3> Param1, struct<3> Param2)
{
	unk_0x1761457F86AD0EE2(uParam0, Param1);
	unk_0x5E5CEC33463AD803(uParam0, Param2, 2);
}

Vector3 func_46(struct<3> Param0, float fParam1)
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

struct<4> func_47(var uParam0, var uParam1, struct<6> Param2, float fParam3, float fParam4)
{
	float fVar0;
	struct<4> Var1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	struct<3> Var10;
	bool bVar11;
	
	fVar0 = unk_0x4A1D1AB55229AAF0(uParam0);
	Var1.f_0 = -fVar0;
	Var1.f_1 = { -*uParam1 };
	fVar2 = unk_0xF069618D9974EB9D(0, 39);
	Var3 = { -Vector(unk_0xC3B77DE416935168(0, 290), 0f, unk_0xC3B77DE416935168(0, 291)) };
	if (unk_0xAE231F549813BBDF(2))
	{
		fParam3 = (fParam3 * 8f);
	}
	else
	{
		if (unk_0x1D5CD3EAAA7422B0(fVar2) < 0,06f)
		{
			fVar2 = 0f;
		}
		if (system::vmag(Var3) < 0,06f)
		{
			Var3 = { 0f, 0f, 0f };
		}
	}
	fVar4 = unk_0x0B852B0BF94A8DC1();
	fVar5 = func_50((fVar0 + ((fVar2 * fParam4) * fVar4)), Param2.f_4, Param2.f_5);
	unk_0x58BDA5D9262F5D30(uParam0, fVar5);
	unk_0x3AAB5D3F3D4028CC(uParam0, 0,01f);
	fVar6 = ((fVar5 - 5f) / 42f);
	unk_0x9B669C0440D2AB57(1f);
	unk_0x8AFA674B4DE9BCAE(fVar6);
	Var7.f_0 = Param2.f_2;
	Var7.f_1 = 0f;
	Var7.f_2 = Param2.f_0;
	Var8.f_0 = Param2.f_3;
	Var8.f_1 = 0f;
	Var8.f_2 = Param2.f_1;
	fVar9 = (((fVar4 * fVar5) * fParam3) * (1f + ((fVar5 - Param2.f_4) / (Param2.f_5 - Param2.f_4))));
	Var10 = { Var3 };
	Var10.f_2 = (Var10.f_2 * fVar9);
	Var10.f_0 = (Var10.f_0 * fVar9);
	*uParam1 = { *uParam1 + Var10 };
	bVar11 = Var7.f_2 > Var8.f_2;
	if (bVar11)
	{
		*uParam1 = func_50(*uParam1, Var7.f_0, Var8.f_0);
		uParam1->f_1 = func_50(uParam1->f_1, Var7.f_1, Var8.f_1);
		uParam1->f_2 = func_49(uParam1->f_2);
	}
	else
	{
		*uParam1 = { func_48(*uParam1, Var7, Var8) };
	}
	Var1.f_0 = (Var1.f_0 + fVar5);
	Var1.f_1 = { Var1.f_1 + *uParam1 };
	return Var1;
}

Vector3 func_48(struct<3> Param0, struct<3> Param1, struct<3> Param2)
{
	Param0.f_0 = func_50(Param0.f_0, Param1.f_0, Param2.f_0);
	Param0.f_1 = func_50(Param0.f_1, Param1.f_1, Param2.f_1);
	Param0.f_2 = func_50(Param0.f_2, Param1.f_2, Param2.f_2);
	return Param0;
}

float func_49(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

float func_50(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_51()
{
	switch (Local_63.f_8.f_1)
	{
		case 1:
			func_86();
			break;
		
		case 2:
			func_71();
			break;
		
		case 3:
			func_52();
			break;
	}
}

void func_52()
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	
	if (unk_0x486FF5D06E9659F1(joaat("am_mp_drone")) < 1)
	{
		if (!Local_64.f_29.f_5)
		{
			Local_64.f_29.f_5 = 1;
		}
		if (!func_66(4, 0f, 0f, 0f, Local_64.f_4.f_6, 0f, 0f, 0f))
		{
			if (func_65())
			{
				unk_0xBF3D28CA44F3BE2D(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
			return;
		}
	}
	if (Local_64.f_29)
	{
		if (unk_0x15CCE8886267624F())
		{
			if (Local_64.f_29.f_1)
			{
				if (func_63(unk_0x259BE71D8A81D4FA()))
				{
					unk_0x10B228D2FDB7AF16(250);
					unk_0xF37CDE164C892195(Local_64.f_40.f_13.f_2, Local_64.f_40.f_13.f_1, Local_64.f_29.f_2, Local_64.f_40.f_13, 1, 500, 0);
					Local_64.f_29.f_1 = 0;
					Local_64.f_29 = 0;
				}
			}
			else
			{
				Local_64.f_29.f_1 = 1;
				func_62(&(Local_64.f_17), 0, 0);
				unk_0x0B0C9A0F9AAEB7F0(&Global_2707890, 0);
				func_59(3f, 100f, &(Local_64.f_29.f_2), &uVar0, &uVar1, &Var2);
				func_58(1);
				func_56(Local_64.f_29.f_2, Var2);
			}
		}
	}
	if (func_55() || Local_64.f_29)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_64.f_60), 1);
		unk_0x0B0C9A0F9AAEB7F0(&(Local_64.f_60), 2);
		unk_0x0B0C9A0F9AAEB7F0(&(Local_64.f_60), 3);
		if (!Local_64.f_29)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_64.f_60), 6);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_64.f_60), 7);
		}
		return;
	}
	if (func_65())
	{
		if (func_53(&(Local_64.f_17), Local_63.f_8.f_2, 0))
		{
			Local_64.f_29 = 1;
			unk_0x8F72AF14CE5AACE4(250);
		}
		else
		{
			unk_0xBF3D28CA44F3BE2D(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		}
	}
}

int func_53(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_54(uParam0, bParam2, 0);
	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_54(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				*uParam0 = unk_0x0728E77B2BF91D54();
			}
		}
		else
		{
			*uParam0 = unk_0x1DD05E817C89C737();
		}
		uParam0->f_1 = 1;
	}
}

bool func_55()
{
	return BitTest(Global_1956920, 5);
}

void func_56(struct<3> Param0, struct<3> Param1)
{
	if (!func_57(Global_1956920.f_13, Param0, 0))
	{
		Global_1956920.f_13 = { Param0 };
		Param1 = { Param1 + Vector(0f, -180f, 180f) };
		Global_1956920.f_16 = { Param1 };
	}
}

bool func_57(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_58(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1956920.f_2, 4))
		{
			Global_1956920.f_2 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1956920.f_2), 4);
		}
	}
	else if (BitTest(Global_1956920.f_2, 4))
	{
		unk_0x8744D2E3FC95740E(&(Global_1956920.f_2), 4);
	}
}

void func_59(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	
	if (Local_63.f_74 == 0)
	{
		*uParam5 = { unk_0x9DDBEF363FADFA4C(Local_64.f_0, 2) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { Local_64.f_4.f_6 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { func_61(*uParam2, fParam1) };
	}
	else
	{
		Var0 = { func_7(unk_0x9DDBEF363FADFA4C(Local_64.f_0, 2)) };
		Var1 = { unk_0x0D1381B6E0F3987D(Local_63.f_95, Local_63.f_88) };
		Var2 = { unk_0x1D49B6C92B9A5B1C(Local_63.f_95, Local_63.f_74.f_1[0]) };
		Var3 = { Var2 - Var1 };
		*uParam2 = { Var2 };
		iVar4 = 0;
		fVar5 = func_60(Var3, Var0);
		iVar6 = 1;
		while (iVar6 <= (Local_63.f_74 - 1))
		{
			Var2 = { unk_0x1D49B6C92B9A5B1C(Local_63.f_95, Local_63.f_74.f_1[iVar6]) };
			Var3 = { Var2 - Var1 };
			fVar7 = func_60(Var3, Var0);
			if (fVar7 > fVar5)
			{
				fVar5 = fVar7;
				iVar4 = iVar6;
				*uParam2 = { Var2 };
			}
			iVar6++;
		}
		*uParam5 = { unk_0x8ED7A7A44B79007B(Local_63.f_95, Local_63.f_74.f_1[iVar4]) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { *uParam2 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { *uParam2 + Vector(fParam1, fParam1, fParam1) * *uParam4 };
	}
}

float func_60(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_61(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x958849BB56EC0F07(2) };
	Var1 = { func_7(Var0) };
	return Param0 + Vector(fParam1, fParam1, fParam1) * Var1;
}

void func_62(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7E3F74F641EE6B27();
		}
		else
		{
			*uParam0 = unk_0x0728E77B2BF91D54();
		}
	}
	else
	{
		*uParam0 = unk_0x1DD05E817C89C737();
	}
	uParam0->f_1 = 1;
}

int func_63(int iParam0)
{
	if (iParam0 != func_64())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_370, 26);
	}
	return 0;
}

int func_64()
{
	return -1;
}

bool func_65()
{
	return (BitTest(Global_2707890, 4) || unk_0xDEE3EFEA31A1F555(0, 229));
}

int func_66(int iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3)
{
	struct<9> Var0;
	
	if (func_70())
	{
		if (!func_69(&uLocal_46))
		{
			func_54(&uLocal_46, 0, 0);
		}
		else if (func_53(&uLocal_46, 8000, 0))
		{
			func_68(&uLocal_46);
			func_67(0);
		}
	}
	if (!unk_0xF40767E41852FB72(iLocal_48) && !unk_0x65F606616F48186B(joaat("am_mp_drone")))
	{
		unk_0x97A5024CE91641F1("AM_MP_DRONE");
	}
	if ((unk_0x65F606616F48186B(joaat("am_mp_drone")) && !unk_0xF40767E41852FB72(iLocal_48)) && !func_70())
	{
		Var0.f_1 = -1;
		Var0.f_0 = 0;
		Var0.f_2 = { Param1 };
		Var0.f_5 = { Param2 };
		Var0.f_8 = { Param3 };
		Var0.f_1 = iParam0;
		if (unk_0x486FF5D06E9659F1(joaat("am_mp_drone")) < 1)
		{
			if (!unk_0x99F8FC8A6D8E20C0("AM_MP_DRONE", Var0.f_0, 1, 0))
			{
				iLocal_48 = system::start_new_script_with_name_hash_and_args(joaat("am_mp_drone"), &Var0, 12, 1424);
				unk_0xD21650BDA0F10841(joaat("am_mp_drone"));
				func_68(&uLocal_46);
			}
			else
			{
				return 1;
			}
		}
	}
	else if (unk_0xF40767E41852FB72(iLocal_48) && !func_70())
	{
		return 1;
	}
	return 0;
}

void func_67(bool bParam0)
{
	if (bParam0)
	{
		if (unk_0x486FF5D06E9659F1(unk_0x70E57E9927B6BA58("AM_MP_DRONE")) > 0)
		{
			if (!func_70())
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 0);
			}
		}
	}
	else if (func_70())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, false);
	}
}

void func_68(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_69(var uParam0)
{
	return uParam0->f_1;
}

bool func_70()
{
	return BitTest(Global_1956920, 0);
}

void func_71()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	
	func_78();
	if (Local_64.f_22 != -1)
	{
		bVar0 = func_53(&(Local_64.f_22.f_2), 2000, 0);
		if (bVar0)
		{
			if (unk_0x55B80B6E7AB61270(Local_64.f_22.f_4))
			{
				uVar2 = unk_0xE93EDE86BBB66532(Local_64.f_22.f_4);
				unk_0xD501B0D4146A6A30(uVar2, 2);
			}
			func_77(&(Local_64.f_22.f_5));
			func_76(&(Local_64.f_22.f_6), "Bleep", "DLC_IE_Steal_EITS_Sounds", 1);
			iVar1 = 6;
		}
		else
		{
			if (unk_0x55B80B6E7AB61270(Local_64.f_22.f_4))
			{
				uVar3 = unk_0xE93EDE86BBB66532(Local_64.f_22.f_4);
				unk_0xD501B0D4146A6A30(uVar3, 1);
			}
			func_76(&(Local_64.f_22.f_5), "VULKAN_LOCK_ON_AMBER", 0, 1);
			iVar1 = 9;
		}
		func_73(Local_64.f_22.f_4, !bVar0, iVar1);
		if (func_65())
		{
			if (Local_63.f_16 != 0 && !unk_0x6252BC0DD8A320DB(Local_63.f_16))
			{
				unk_0xBF3D28CA44F3BE2D(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				return;
			}
			if (bVar0 && func_53(&(Local_64.f_17), Local_63.f_8.f_2, 0))
			{
				func_62(&(Local_64.f_17), 0, 0);
				func_72(1f, &Var4, &Var5);
				unk_0x5733B7E88AFB2E3B(Var4, Var5, Local_63.f_8.f_3, 1, Local_63.f_8, unk_0x4A8C381C258A124D(), 1, 1, -1082130432, Local_63.f_95, 0, 0, Local_64.f_22, 1, 0, Local_63.f_94 != 0, 0);
				unk_0xF37CDE164C892195(Local_64.f_40.f_13.f_2, Local_64.f_40.f_13.f_1, Var4, Local_64.f_40.f_13, 1, 500, 0);
			}
			else
			{
				unk_0xBF3D28CA44F3BE2D(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
		}
	}
}

void func_72(float fParam0, var uParam1, var uParam2)
{
	var uVar0;
	
	func_59(0f, fParam0, uParam1, uParam2, &uVar0, &uVar0);
}

void func_73(var uParam0, bool bParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	
	if (!unk_0x38D063D8CF6D1967("helicopterhud"))
	{
		return;
	}
	unk_0xA4F67CEB594AE064(1);
	Var2 = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	unk_0xB56F2B356187E2E0(Var2, 0);
	fVar0 = func_75(uParam0, Local_64.f_0, 0,5f);
	fVar0 = func_50(fVar0, 0,015f, fVar0);
	fVar1 = (fVar0 * unk_0x4AE9635532D92447(0));
	unk_0xA306E6FD2A6558E6(iParam2, &uVar3, &uVar4, &uVar5, &iVar6);
	uVar7 = func_74((bParam1 && (unk_0x1DD05E817C89C737() % 300) < 150), system::ceil((system::to_float(iVar6) / 4f)), iVar6);
	unk_0xFFA2B456A81EA1EB("helicopterhud", "hud_outline", 0f, 0f, fVar0, fVar1, 0f, uVar3, uVar4, uVar5, uVar7, 0, 0);
	unk_0xCE3DA51E28972A56();
}

int func_74(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_75(var uParam0, var uParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { unk_0xA452B06E281A9014(uParam1) };
	Var1 = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	fVar2 = unk_0xED977E2AE2CB16EE(Var0, Var1, 1);
	fVar3 = unk_0x4A1D1AB55229AAF0(uParam1);
	fVar4 = 1f;
	fVar5 = (fVar4 / unk_0xD1AA84345B760931((fVar3 / 2f)));
	fVar6 = ((fVar5 * fParam2) / fVar2);
	return fVar6;
}

void func_76(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		*uParam0 = unk_0xCA369FBC0DE29517();
		unk_0xBF3D28CA44F3BE2D(*uParam0, sParam1, sParam2, iParam3);
	}
}

void func_77(var uParam0)
{
	if (*uParam0 != -1)
	{
		unk_0x8E4825CCACA34B58(*uParam0);
		unk_0x394AFAC073E1F277(*uParam0);
		*uParam0 = -1;
	}
}

void func_78()
{
	bool bVar0;
	var uVar1;
	
	if (func_85(&(Local_64.f_22.f_1), Local_64.f_22.f_4, &bVar0))
	{
		if (bVar0)
		{
			if (Local_64.f_22 != Local_64.f_22.f_4)
			{
				func_62(&(Local_64.f_22.f_2), 0, 0);
				func_77(&(Local_64.f_22.f_5));
				func_77(&(Local_64.f_22.f_6));
			}
			Local_64.f_22 = Local_64.f_22.f_4;
		}
		else
		{
			func_84();
			uVar1 = func_82(Local_63.f_8.f_4);
			Local_64.f_22.f_4 = uVar1;
		}
		if (Local_64.f_22.f_4 != -1)
		{
			func_80(Local_64.f_22.f_4);
		}
	}
	if (Local_64.f_22 != -1)
	{
		if (((Local_64.f_22.f_4 != Local_64.f_22 || unk_0x1C2F771CDC87A3A5(Local_64.f_22, 0)) || func_79(Local_64.f_22) > 0,04f) || system::vmag(unk_0xD1A6A821F5AC81DB(Local_64.f_22, 1) - Local_64.f_4.f_6) > Local_63.f_8.f_4)
		{
			func_84();
		}
	}
}

float func_79(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	if (!unk_0x2F8A75C70AF54208(Var0, &Var0, &(Var0.f_1)))
	{
		return 1f;
	}
	Var0 = { Var0 - Vector(0f, 0,5f, 0,5f) };
	Var0.f_2 = 0f;
	return system::vmag2(Var0);
}

void func_80(var uParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0xA452B06E281A9014(Local_64.f_0) };
	Var1 = { unk_0xD1A6A821F5AC81DB(uParam0, 1) };
	Var1 = { Var1 + Vector(2f, 2f, 2f) * func_81(Var1 - Var0) };
	Local_64.f_22.f_1 = unk_0x120E577522852984(Var0, Var1, 511, 0, 4);
	if (Local_64.f_22.f_1 == 0)
	{
	}
}

Vector3 func_81(struct<3> Param0)
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

int func_82(float fParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	
	iVar0 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	bVar1 = iVar0 != -1;
	fVar3 = 0,005f;
	bVar4 = false;
	fVar5 = (fParam0 * fParam0);
	iVar6 = 0;
	while (iVar6 < 32)
	{
		iVar7 = iVar6;
		uVar8 = unk_0x56E414973C2A8C0E(iVar7);
		if (((!unk_0x762604C40829DB72(iVar7) || !func_83(iVar7, 1, 1)) || (bVar1 && unk_0x1864096A95E36EBA(iVar7) == iVar0)) || system::vmag2(Local_64.f_4.f_6 - unk_0xD1A6A821F5AC81DB(uVar8, 1)) > fVar5)
		{
		}
		else
		{
			fVar9 = func_79(uVar8);
			if (fVar9 < fVar3)
			{
				iVar2 = iVar7;
				fVar3 = fVar9;
				bVar4 = true;
			}
		}
		iVar6++;
	}
	if (bVar4)
	{
		uVar10 = unk_0x56E414973C2A8C0E(iVar2);
		if (unk_0x7F420695E3F776FB(uVar10, 0))
		{
			iVar11 = unk_0x6EF03BE64E058E2F(uVar10, 0);
			if (!unk_0x1C2F771CDC87A3A5(iVar11, 0))
			{
				return iVar11;
			}
		}
	}
	return -1;
}

int func_83(int iParam0, bool bParam1, bool bParam2)
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

void func_84()
{
	Local_64.f_22 = -1;
	Local_64.f_22.f_4 = -1;
	func_77(&(Local_64.f_22.f_5));
	func_77(&(Local_64.f_22.f_6));
}

int func_85(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	*uParam2 = 0;
	if (*uParam0 == 0 || iParam1 == -1)
	{
		return 1;
	}
	iVar4 = unk_0x0E7DD1EBCA8D2DE3(*uParam0, &iVar0, &uVar2, &uVar1, &iVar3);
	if (!unk_0x55B80B6E7AB61270(iVar3))
	{
		if (unk_0x0101C509A6E67F99(iVar3))
		{
			uVar5 = unk_0xBD545F8729E9F413(iVar3);
			if (unk_0x7F420695E3F776FB(uVar5, 0))
			{
				iVar3 = unk_0x6EF03BE64E058E2F(uVar5, 0);
			}
		}
	}
	if (iVar4 == 2)
	{
		if (iVar0 != 0)
		{
			if (unk_0xFC8BFE4B41177C22(iVar3))
			{
				*uParam2 = (iParam1 == iVar3 && !unk_0x1C2F771CDC87A3A5(iVar3, 0));
			}
		}
		return 1;
	}
	else if (iVar4 == 0)
	{
		return 1;
	}
	return 0;
}

void func_86()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	var uVar8;
	struct<3> Var9;
	struct<3> Var10;
	
	unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 452, 1);
	bVar0 = Local_63.f_13.f_1 > 0;
	bVar1 = (bVar0 && !func_53(&(Local_64.f_19), Local_63.f_13.f_2, 0));
	if (bVar0)
	{
		if (bVar1)
		{
			iVar2 = 6;
			sVar3 = "TC_RELOAD";
			iVar5 = Local_63.f_13.f_2;
			iVar4 = func_95(&(Local_64.f_19), 0, 0);
		}
		else
		{
			iVar2 = 1;
			sVar3 = "TC_AMMO";
			iVar5 = Local_63.f_13.f_1;
			iVar4 = (iVar5 - Local_64.f_19.f_2);
		}
		func_92(iVar4, iVar5, sVar3, iVar2, -1, 11, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
	}
	if (bVar0 && !bVar1)
	{
		if (unk_0xDEE3EFEA31A1F555(0, 225))
		{
			func_91();
		}
	}
	if (!bVar1 && func_90())
	{
		Local_64.f_19.f_2 = (Local_64.f_19.f_2 + system::round((unk_0x0B852B0BF94A8DC1() * 1000f)));
		if (func_53(&(Local_64.f_17), Local_63.f_8.f_2, 0))
		{
			func_62(&(Local_64.f_17), 0, 0);
			if (Local_63.f_13.f_1 > 0 && Local_64.f_19.f_2 >= Local_63.f_13.f_1)
			{
				func_62(&(Local_64.f_19), 0, 0);
				Local_64.f_19.f_2 = 0;
			}
			func_59(0f, Local_63.f_8.f_4, &Var6, &Var7, &uVar8, &Var9);
			Var10 = { Vector(Local_63.f_13, Local_63.f_13, Local_63.f_13) * func_87(0f, 0f, 0f, 1f) };
			Var10.f_1 = 0f;
			Var9 = { Var9 + Var10 };
			Var7 = { Var6 + FtoV(system::vmag(Var7 - Var6)) * func_7(Var9) };
			Var6.f_2 = (Var6.f_2 - 1f);
			unk_0x5733B7E88AFB2E3B(Var6, Var7, Local_63.f_8.f_3, 0, Local_63.f_8, unk_0x4A8C381C258A124D(), 1, 1, -1082130432, Local_63.f_95, 0, 0, 0, 1, 0, Local_63.f_94 != 0, 0);
			if (Local_64.f_40.f_13.f_2 != -1 && unk_0x9F0C06CFBACDD6A1(Local_64.f_40.f_13.f_2))
			{
				unk_0xF37CDE164C892195(Local_64.f_40.f_13.f_2, Local_64.f_40.f_13.f_1, Var6, Local_64.f_40.f_13, 1, 500, 0);
			}
		}
	}
	else if (Local_64.f_40.f_13.f_2 != -1 && !unk_0x9F0C06CFBACDD6A1(Local_64.f_40.f_13.f_2))
	{
		unk_0x8E4825CCACA34B58(Local_64.f_40.f_13.f_2);
	}
}

Vector3 func_87(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	
	fVar1 = (fParam1 * fParam1);
	iVar2 = 0;
	while (iVar2 < 20)
	{
		Var0 = { unk_0xD2AA6F822D3A55D2(-fParam1, fParam1), unk_0xD2AA6F822D3A55D2(-fParam1, fParam1), unk_0xD2AA6F822D3A55D2(-fParam1, fParam1) };
		if (system::vdist2(Var0, 0f, 0f, 0f) <= fVar1)
		{
			return Param0 + Var0;
		}
		iVar2++;
	}
	return func_88(Param0, fParam1);
}

Vector3 func_88(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	
	Var0 = { unk_0xD2AA6F822D3A55D2(-1f, 1f), unk_0xD2AA6F822D3A55D2(-1f, 1f), unk_0xD2AA6F822D3A55D2(-1f, 1f) };
	return Param0 + func_89(Var0, unk_0xD2AA6F822D3A55D2(0f, fParam1));
}

Vector3 func_89(struct<3> Param0, float fParam1)
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = system::vmag(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

var func_90()
{
	return (BitTest(Global_2707890, 4) || unk_0x4465D55576678706(0, 229));
}

void func_91()
{
	func_62(&(Local_64.f_19), 0, 0);
	Local_64.f_19.f_2 = 0;
}

void func_92(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_94(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_93(0, iVar0);
		Global_1670224.f_1177[iVar0] = iParam0;
		Global_1670224.f_1177.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1670224.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1670224.f_1177.f_194[iVar0] = iParam3;
		Global_1670224.f_1177.f_183[iVar0] = iParam4;
		Global_1670224.f_1177.f_227[iVar0] = iParam5;
		Global_1670224.f_1177.f_238[iVar0 /*3*/] = iParam6;
		Global_1670224.f_1177.f_238[iVar0 /*3*/].f_1 = iParam7;
		Global_1670224.f_1177.f_269[iVar0] = iParam8;
		Global_1670224.f_1177.f_280[iVar0] = iParam9;
		Global_1670224.f_1177.f_323[iVar0] = iParam10;
		Global_1670224.f_1177.f_334[iVar0] = iParam11;
		Global_1670224.f_1177.f_345[iVar0] = iParam12;
		Global_1670224.f_1177.f_356[iVar0] = iParam13;
		Global_1670224.f_1172 = 1;
		Global_1670224.f_1177.f_367[iVar0] = iParam14;
		Global_1670224.f_1177.f_378[iVar0] = iParam15;
		Global_1670224.f_1177.f_389[iVar0] = iParam16;
		Global_1670224.f_1177.f_400[iVar0] = iParam17;
		Global_1670224.f_1177.f_411[iVar0] = iParam18;
		Global_1670224.f_1177.f_422[iVar0] = iParam19;
		Global_1670224.f_1177.f_433[iVar0] = iParam20;
		Global_1670224.f_1177.f_444[iVar0] = iParam21;
		Global_1670224.f_1177.f_455[iVar0] = iParam22;
		Global_1670224.f_1177.f_466[iVar0] = iParam23;
		Global_1670224.f_1177.f_477[iVar0] = iParam24;
		Global_1670224.f_1177.f_205[iVar0] = iParam25;
		Global_1670224.f_1177.f_216[iVar0] = iParam39;
		Global_1670224.f_1177.f_488[iVar0] = iParam26;
		Global_1670224.f_1177.f_499[iVar0] = iParam27;
		Global_1670224.f_1177.f_510[iVar0] = iParam28;
		Global_1670224.f_1177.f_521[iVar0] = iParam29;
		Global_1670224.f_1177.f_532[iVar0] = iParam30;
		Global_1670224.f_1177.f_543[iVar0] = iParam31;
		Global_1670224.f_1177.f_554[iVar0] = iParam32;
		Global_1670224.f_1177.f_565[iVar0] = iParam33;
		Global_1670224.f_1177.f_576[iVar0] = iParam34;
		Global_1670224.f_1177.f_587[iVar0] = iParam35;
		Global_1670224.f_1177.f_598[iVar0] = iParam36;
		Global_1670224.f_1177.f_609[iVar0] = iParam37;
		Global_1670224.f_1177.f_620[iVar0] = iParam38;
	}
}

void func_93(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1670224.f_7064[iParam0]), iParam1);
}

int func_94(int iParam0, int iParam1)
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

var func_95(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0);
		}
		else
		{
			return unk_0x775142054EC39277(unk_0x0728E77B2BF91D54(), *uParam0);
		}
	}
	return unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0);
}

bool func_96()
{
	return Global_76498;
}

void func_97(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	func_104(iParam0);
	if (func_103(&uVar0, 2))
	{
		func_62(&(Local_64.f_17), 0, 0);
		Local_63.f_8 = { Global_2707802.f_8 };
	}
	if (func_103(&uVar0, 6))
	{
		Local_63.f_19 = Global_2707802.f_19;
	}
	if (func_103(&uVar0, 10))
	{
		Local_63.f_74 = { Global_2707802.f_74 };
	}
	if (func_103(&uVar0, 8))
	{
		Local_63.f_67 = { Global_2707802.f_67 };
	}
	if (func_103(&uVar0, 12))
	{
		Local_63.f_20 = { Global_2707802.f_20 };
	}
	func_98(iParam0);
}

void func_98(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	if (func_103(&uVar0, 0))
	{
	}
	if (func_103(&uVar0, 1))
	{
	}
	if (func_103(&uVar0, 2))
	{
		Local_63.f_8 = { Global_2707802.f_8 };
		switch (Local_63.f_8.f_1)
		{
			case 1:
				unk_0x036C12D7B5744CAF(1,5f);
				if (Local_64.f_19.f_2 == 0 && func_102())
				{
					func_99(&(Local_64.f_19), Local_63.f_13.f_2, 0, 0);
				}
				else
				{
					func_91();
				}
				break;
			
			case 2:
				Local_63.f_86 = "helicopterhud";
				Local_63.f_16 = Global_2707802.f_16;
				if (Local_63.f_16 != 0)
				{
					unk_0xEC9DAA34BBB4658C(Local_63.f_16);
				}
				break;
			
			default:
				break;
		}
		if (!unk_0xD6F9DEE4765092A9(Local_63.f_86))
		{
			unk_0xD0D00ED689D6CA81(Local_63.f_86, 0);
		}
	}
	if (func_103(&uVar0, 4))
	{
		switch (Local_63.f_17)
		{
			case 4:
				Local_63.f_86.f_1 = "";
				break;
			
			case 0:
				Local_63.f_86.f_1 = "turret_cam";
				break;
			
			case 1:
				Local_63.f_86.f_1 = "ARENA_GUN_CAM_APOCALYPSE";
				break;
			
			case 2:
				Local_63.f_86.f_1 = "ARENA_GUN_CAM_SCIFI";
				break;
			
			case 3:
				Local_63.f_86.f_1 = "ARENA_GUN_CAM_CONSUMER";
				break;
			
			default:
				Local_63.f_86.f_1 = "UNDEFINED";
				break;
		}
		if (!unk_0xD6F9DEE4765092A9(Local_63.f_86.f_1))
		{
			Local_64.f_36 = unk_0x8DE4F68A9728925E(Local_63.f_86.f_1);
		}
	}
	if (func_103(&uVar0, 6))
	{
		Local_64.f_40.f_13.f_2 = -1;
		switch (Local_63.f_19)
		{
			case 0:
				Local_64.f_40.f_13 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_64.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_64.f_40.f_13.f_2 = unk_0xCA369FBC0DE29517();
				break;
			
			case 1:
				Local_64.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_64.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_64.f_40.f_13.f_2 = unk_0xCA369FBC0DE29517();
				break;
			
			case 2:
				Local_64.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_64.f_40.f_13.f_1 = "Fire_Rockets_Oneshot";
				Local_64.f_40.f_13.f_2 = unk_0xCA369FBC0DE29517();
				break;
			
			case 3:
				Local_64.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_64.f_40.f_13.f_1 = "Launch_Piloted_Missile";
				Local_64.f_40.f_13.f_2 = unk_0xCA369FBC0DE29517();
				break;
			
			default:
				Local_64.f_40.f_13 = 0;
				Local_64.f_40.f_13.f_1 = 0;
				Local_64.f_40.f_13.f_2 = -1;
				break;
			}
	}
	if (func_103(&uVar0, 5))
	{
		Local_64.f_40.f_10 = -1;
		Local_64.f_40.f_8 = -1;
		Local_64.f_40.f_9 = -1;
		Local_64.f_40.f_11 = -1;
		Local_64.f_40.f_12 = -1;
		switch (Local_63.f_18)
		{
			case 0:
				Local_64.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_64.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_64.f_40.f_2 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_64.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_64.f_40.f_10 = unk_0xCA369FBC0DE29517();
				Local_64.f_40.f_3 = "Pan";
				Local_64.f_40.f_8 = unk_0xCA369FBC0DE29517();
				Local_64.f_40.f_4 = "Zoom";
				Local_64.f_40.f_9 = unk_0xCA369FBC0DE29517();
				break;
			
			case 1:
				Local_64.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_64.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_64.f_40.f_2 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_64.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_64.f_40.f_10 = unk_0xCA369FBC0DE29517();
				Local_64.f_40.f_3 = "Pan";
				Local_64.f_40.f_8 = unk_0xCA369FBC0DE29517();
				Local_64.f_40.f_4 = "Zoom";
				Local_64.f_40.f_9 = unk_0xCA369FBC0DE29517();
				Local_64.f_40.f_6 = "Take_Damage";
				Local_64.f_40.f_11 = unk_0xCA369FBC0DE29517();
				Local_64.f_40.f_7 = "Low_Health_Warning";
				Local_64.f_40.f_12 = unk_0xCA369FBC0DE29517();
				break;
			
			default:
				Local_64.f_40 = 0;
				Local_64.f_40.f_2 = 0;
				Local_64.f_40.f_5 = 0;
				Local_64.f_40.f_10 = -1;
				Local_64.f_40.f_3 = 0;
				Local_64.f_40.f_8 = -1;
				Local_64.f_40.f_4 = 0;
				Local_64.f_40.f_9 = -1;
				break;
		}
		if (!unk_0xD6F9DEE4765092A9(Local_64.f_40))
		{
			unk_0x533FC7490FC4937D(Local_64.f_40, 0, -1);
		}
	}
	if (func_103(&uVar0, 3))
	{
	}
	if (func_103(&uVar0, 7))
	{
		if (Local_63.f_24 > 0)
		{
			func_32(0, -1, 0);
		}
	}
	if (func_103(&uVar0, 8))
	{
	}
	if (func_103(&uVar0, 9))
	{
	}
	if (func_103(&uVar0, 10))
	{
	}
	if (func_103(&uVar0, 11))
	{
		if (!unk_0xD6F9DEE4765092A9(&(Local_63.f_80)))
		{
			func_36(&(Local_63.f_80));
		}
	}
	if (func_103(&uVar0, 12))
	{
	}
}

void func_99(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1 == 0)
	{
		*uParam0 = unk_0xAD5B43C219C4CB92(func_101(bParam2, bParam3), func_100(-iParam1, 0));
		uParam0->f_1 = 1;
	}
}

int func_100(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_101(bool bParam0, bool bParam1)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam0)
	{
		if (!bParam1)
		{
			return unk_0x7E3F74F641EE6B27();
		}
		else
		{
			return unk_0x0728E77B2BF91D54();
		}
	}
	return unk_0x1DD05E817C89C737();
}

bool func_102()
{
	return (!func_69(&(Local_64.f_19)) || func_53(&(Local_64.f_19), Local_63.f_13.f_2, 0));
}

int func_103(var uParam0, bool bParam1)
{
	if (BitTest(*uParam0, bParam1))
	{
		unk_0x8744D2E3FC95740E(uParam0, bParam1);
		return 1;
	}
	return 0;
}

void func_104(int iParam0)
{
	if (func_103(&iParam0, 0))
	{
	}
	if (func_103(&iParam0, 1))
	{
	}
	if (func_103(&iParam0, 2))
	{
		Local_64.f_37 = 0;
		switch (Local_63.f_8.f_1)
		{
			case 1:
				unk_0x036C12D7B5744CAF(1f);
				break;
			
			case 3:
				if (Local_64.f_29)
				{
					unk_0x10B228D2FDB7AF16(250);
				}
				Local_64.f_29.f_1 = 0;
				Local_64.f_29 = 0;
				if (Local_64.f_29.f_5)
				{
					Local_64.f_29.f_5 = 0;
					func_67(1);
				}
				break;
			
			case 2:
				func_84();
				if (Local_63.f_16 != 0)
				{
					unk_0x55098D9E9AD58806(Local_63.f_16);
					Local_63.f_16 = 0;
				}
				break;
		}
		if (!unk_0xD6F9DEE4765092A9(Local_63.f_86))
		{
			unk_0x633E3833FB96BCCB(Local_63.f_86);
			Local_63.f_86 = "";
		}
	}
	if (func_103(&iParam0, 3))
	{
	}
	if (func_103(&iParam0, 4))
	{
		Local_64.f_37 = 0;
		Local_63.f_86.f_1 = "";
		if (Local_64.f_36 != -1)
		{
			unk_0xD314260005F064BF(&(Local_64.f_36));
			Local_64.f_36 = -1;
		}
	}
	if (func_103(&iParam0, 6))
	{
		func_77(&(Local_64.f_40.f_13.f_2));
	}
	if (func_103(&iParam0, 5))
	{
		unk_0x3C6BB574B1895B94();
		unk_0xC0BE3854AFD77802();
		if (!unk_0xD6F9DEE4765092A9(Local_64.f_40))
		{
			unk_0x48FA483FE4F18CFE(Local_64.f_40);
		}
		func_77(&(Local_64.f_40.f_8));
		func_77(&(Local_64.f_40.f_9));
		func_77(&(Local_64.f_40.f_10));
		func_77(&(Local_64.f_40.f_11));
		func_77(&(Local_64.f_40.f_12));
	}
	if (func_103(&iParam0, 7))
	{
		if (Local_63.f_24 > 0)
		{
			func_105(1, -1);
		}
	}
	if (func_103(&iParam0, 8))
	{
		if (!unk_0xD6F9DEE4765092A9(&(Local_63.f_67)) && func_12(&(Local_63.f_67)))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
	if (func_103(&iParam0, 9))
	{
	}
	if (func_103(&iParam0, 10))
	{
	}
	if (func_103(&iParam0, 11))
	{
		if (!unk_0xD6F9DEE4765092A9(&(Local_63.f_80)))
		{
			func_37();
			StringCopy(&(Local_63.f_80), "", 16);
		}
	}
	if (func_103(&iParam0, 12))
	{
		Local_64.f_37 = 0;
	}
}

void func_105(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_27(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23831.f_9116)
	{
		unk_0xDCFF86AAD108A201(15);
		Global_23831.f_9116 = 0;
	}
	unk_0x043244A32AD6E17D(0f);
	if (Global_23831.f_6231[iVar0])
	{
		unk_0xA790E8E6FD7393AC(9, 0);
		Global_23831.f_6231[iVar0] = 0;
	}
	if (Global_23831.f_6217[iVar0])
	{
		unk_0x633E3833FB96BCCB("CommonMenu");
		Global_23831.f_6217[iVar0] = 0;
	}
	if (Global_23831.f_6224[iVar0])
	{
		unk_0x633E3833FB96BCCB("MPShopSale");
		Global_23831.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_106(&(Global_23831.f_6263[iVar0 /*10*/]));
		Global_23831.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23831.f_6324[iVar0] = 0;
	}
	unk_0x633E3833FB96BCCB("Shared");
}

void func_106(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			unk_0xD314260005F064BF(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

void func_107()
{
	if ((!unk_0x78ABC1D11B34F324() && !unk_0x15CCE8886267624F()) && BitTest(Local_63.f_84.f_1, 1))
	{
		unk_0x8F72AF14CE5AACE4(Local_63.f_84);
	}
	if (func_53(&(Local_64.f_58), Local_63.f_84, 0))
	{
		if (!BitTest(Local_63.f_84.f_1, 0) || func_109(Local_63.f_88, 0))
		{
			if (!unk_0x78411E34CF90EA8C(Local_64.f_0))
			{
				Local_64.f_0 = unk_0xBB209150C6081BBE(26379945, 1);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_64.f_60), 2);
				func_42();
				unk_0x8744D2E3FC95740E(&(Local_64.f_60), 2);
				unk_0x1AE8EF20D4D96E11(Local_64.f_4.f_6);
			}
			else
			{
				if (BitTest(Local_63.f_84.f_1, 0))
				{
					unk_0x6981C3213B841071();
				}
				unk_0xE37AF9002E782BA0(1, 0, 0, 1, 1, 0);
				func_3(&(Local_64.f_38), &(Local_64.f_39));
				func_38();
				if (!unk_0xD6F9DEE4765092A9(Local_64.f_40.f_1))
				{
					unk_0xCAC4020CCF361AC8(Local_64.f_40.f_1);
				}
				func_62(&(Local_64.f_17), 0, 0);
				unk_0x0B0C9A0F9AAEB7F0(&Global_2707890, 3);
				func_108(1);
				if (unk_0x8960847E5FD7B48F() >= 0)
				{
					Local_64.f_57 = 1;
					unk_0x74C42E6AE0F9355E();
				}
				unk_0x5C483F4653DC993C("eyeinthesky");
				Local_64.f_56 = unk_0x8960847E5FD7B48F();
				if (BitTest(Local_63.f_84.f_1, 2))
				{
					if (unk_0x78ABC1D11B34F324() || unk_0x15CCE8886267624F())
					{
						unk_0x10B228D2FDB7AF16(800);
					}
				}
			}
		}
	}
}

void func_108(int iParam0)
{
	Local_64.f_16 = iParam0;
}

int func_109(struct<3> Param0, int iParam1)
{
	if (BitTest(Local_64.f_60, 0))
	{
		if (unk_0x9E2D35FA908F57B4())
		{
			return 1;
		}
	}
	else if (unk_0x4A3280817398D754(Param0, 100f, iParam1))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_64.f_60), 0);
	}
	return 0;
}

void func_110(int iParam0)
{
	if (func_115())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_114(0))
		{
			func_111(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_111(int iParam0)
{
	if (func_115())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_55())
		{
			func_113(1, 1);
		}
		else
		{
			func_113(0, 0);
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
	if (!func_112())
	{
		Global_20930.f_1 = 3;
	}
}

int func_112()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_113(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_114(0))
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

int func_114(int iParam0)
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

bool func_115()
{
	return BitTest(Global_1956920, 19);
}

int func_116()
{
	if (Local_63.f_94 != 0)
	{
		if (!unk_0xFC8BFE4B41177C22(Local_63.f_95) || unk_0x1C2F771CDC87A3A5(Local_63.f_95, 0))
		{
			return 1;
		}
	}
	if (!func_83(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		return 1;
	}
	if (Global_2707800)
	{
		return 1;
	}
	return 0;
}

int func_117()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_124())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_123())
	{
		return 1;
	}
	if (func_122(159))
	{
		if (!func_121())
		{
			return 1;
		}
	}
	if (func_122(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_118() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_118()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_118()
{
	switch (func_120())
	{
		case 0:
			return func_119();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_119()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_120()
{
	return Global_32948;
}

bool func_121()
{
	return Global_2684504.f_700;
}

int func_122(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return Global_2696172;
}

bool func_124()
{
	return Global_2684504.f_695;
}

void func_125()
{
	system::wait(0);
}

void func_126()
{
	var uVar0;
	var uVar1;
	
	if (Local_64.f_16 == 0 && BitTest(Local_63.f_84.f_1, 1))
	{
		unk_0x10B228D2FDB7AF16(250);
	}
	func_104(-1);
	if (func_134())
	{
		func_133(0);
	}
	unk_0x0A0A06C514052E80(1);
	unk_0xF3E3EA936C653F22();
	unk_0x33311EBA9464741D();
	uVar0 = unk_0x4A8C381C258A124D();
	if (func_132(uVar0) && unk_0x7F420695E3F776FB(uVar0, 1))
	{
		uVar1 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (unk_0x1B1A446EFA398EB5(uVar1))
		{
			unk_0x4DC72C4B884A6C59(uVar1, 1);
			func_130(1);
		}
	}
	if (BitTest(Local_64.f_60, 4))
	{
		func_129();
	}
	unk_0xE0CE913C020B2907();
	unk_0x80F87A4A3B930613();
	if (Local_64.f_57)
	{
		unk_0x7232CF6DD26DC563();
	}
	func_128(Local_64.f_38);
	func_128(Local_64.f_39);
	Global_2707789 = 0;
	Global_2707890 = 0;
	func_127();
}

void func_127()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_128(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(uParam0))
	{
		unk_0xFE54B8568B2ABD12(&uParam0);
	}
}

void func_129()
{
	if (Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 0;
	}
}

void func_130(int iParam0)
{
	var uVar0;
	
	if (Global_2635563.f_2990 == 1)
	{
		Global_2635563.f_2990 = 0;
		return;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!Global_2635563.f_2992.f_1)
		{
			if (!Global_2635563.f_2988 == -1)
			{
				if (((Global_2635563.f_2988 < 255 && !func_131()) && !BitTest(Global_4718592.f_185622, 0)) && !(unk_0x7507A74A3D963966() && (Global_2635563.f_2989 == 0 && iParam0 == 0)))
				{
					unk_0x21880A4FCBA19269(Global_2635563.f_2988);
				}
				else if (Global_2635563.f_2988 >= 255)
				{
					unk_0x166878629B365828("OFF");
					uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					if (unk_0xFC8BFE4B41177C22(uVar0))
					{
						if (unk_0x1B1A446EFA398EB5(iVar0))
						{
							unk_0x38911F7BA2D48F10(iVar0, "OFF");
						}
					}
				}
			}
			Global_2635563.f_2988 = -1;
			Global_2635563.f_2992.f_1 = 1;
		}
	}
}

bool func_131()
{
	return Global_1881736;
}

int func_132(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_133(int iParam0)
{
	Global_2698794 = iParam0;
}

bool func_134()
{
	return Global_2698794;
}

void func_135(var uParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2707890, 2);
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0xDB2434E51017FFCC(32, 0, -1);
		func_153(0, -1, 0);
	}
	else
	{
		func_126();
	}
	func_136(uParam0);
}

void func_136(var uParam0)
{
	var uVar0;
	var uVar1;
	
	Local_63.f_88 = { *uParam0 };
	Local_63.f_91 = { uParam0->f_3 };
	Local_63.f_94 = uParam0->f_6;
	Local_63.f_95 = uParam0->f_7;
	Local_64.f_22.f_4 = -1;
	uVar0 = unk_0x4A8C381C258A124D();
	if (func_132(uVar0) && unk_0x7F420695E3F776FB(uVar0, 1))
	{
		uVar1 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (unk_0x1B1A446EFA398EB5(uVar1))
		{
			func_152(1);
			unk_0x4DC72C4B884A6C59(iVar1, 0);
		}
	}
	if (!func_151())
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_64.f_60), 4);
		func_150();
	}
	func_137();
}

void func_137()
{
	if (!BitTest(Global_2707888, 0))
	{
		func_149(-1028390912, 1119092736, -1036779520, 1110704128, 1106247680, 1114636288);
	}
	if (!BitTest(Global_2707888, 1))
	{
		func_148(1058642330, 1101004800);
	}
	if (!BitTest(Global_2707888, 2))
	{
		func_147();
	}
	if (!BitTest(Global_2707888, 3))
	{
		func_145(1, 1, 0, 500);
	}
	if (!BitTest(Global_2707888, 4))
	{
		func_144(0);
	}
	if (!BitTest(Global_2707888, 5))
	{
		func_143(0);
	}
	if (!BitTest(Global_2707888, 6))
	{
		func_142(0);
	}
	if (!BitTest(Global_2707888, 7))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_2707888, 7);
		Global_2707802.f_24 = 0;
	}
	if (!BitTest(Global_2707888, 8))
	{
		func_141(0);
	}
	if (!BitTest(Global_2707888, 9))
	{
		func_140(0f, 0f, 0f);
	}
	if (!BitTest(Global_2707888, 10))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_2707888, 10);
		Global_2707802.f_74 = 0;
	}
	if (!BitTest(Global_2707888, 11))
	{
		func_139(0);
	}
	if (!BitTest(Global_2707888, 12))
	{
		func_138(1, 3, 3, 3);
	}
	Local_63 = { Global_2707802 };
	func_98(Global_2707888);
	func_108(0);
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2707888, 12);
	Global_2707802.f_20 = iParam0;
	Global_2707802.f_20.f_1 = iParam1;
	Global_2707802.f_20.f_2 = iParam2;
	Global_2707802.f_20.f_3 = iParam3;
}

void func_139(char* sParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2707888, 11);
	StringCopy(&(Global_2707802.f_80), sParam0, 16);
}

void func_140(struct<3> Param0)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2707888, 9);
	Global_2707802.f_71 = { Param0 };
}

void func_141(char* sParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2707888, 8);
	StringCopy(&(Global_2707802.f_67), sParam0, 16);
}

void func_142(int iParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2707888, 6);
	Global_2707802.f_19 = iParam0;
}

void func_143(int iParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2707888, 5);
	Global_2707802.f_18 = iParam0;
}

void func_144(int iParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2707888, 4);
	Global_2707802.f_17 = iParam0;
}

void func_145(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2707888, 3);
	Global_2707802.f_84 = iParam3;
	func_146(&(Global_2707802.f_84.f_1), 1, bParam0);
	func_146(&(Global_2707802.f_84.f_1), 2, bParam1);
	func_146(&(Global_2707802.f_84.f_1), 0, bParam2);
}

void func_146(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam0, bParam1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(uParam0, bParam1);
	}
}

void func_147()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2707888, 2);
	Global_2707802.f_8.f_1 = 0;
}

void func_148(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2707888, true);
	Global_2707802.f_6.f_1 = iParam0;
	Global_2707802.f_6 = iParam1;
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_2707888, false);
	Global_2707802 = iParam0;
	Global_2707802.f_1 = iParam1;
	Global_2707802.f_2 = iParam2;
	Global_2707802.f_3 = iParam3;
	Global_2707802.f_4 = iParam4;
	Global_2707802.f_5 = iParam5;
}

void func_150()
{
	if (!Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 1;
	}
}

bool func_151()
{
	return Global_2672855.f_990.f_10;
}

void func_152(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2635563.f_2991;
	if ((unk_0x7507A74A3D963966() && Global_2635563.f_2989 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2635563.f_2988)
	{
		if (!unk_0xC47E3FF56898A28B())
		{
			Global_2635563.f_2988 = iVar0;
		}
	}
}

int func_153(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_127();
			}
			else
			{
				return 0;
			}
		}
		if (!func_154(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_127();
					}
					else
					{
						return 0;
					}
				}
				if (func_124())
				{
					if (!bParam2)
					{
						func_127();
					}
					else
					{
						return 0;
					}
				}
				if (func_122(157))
				{
					if (!bParam2)
					{
						func_127();
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
					func_127();
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
				func_127();
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
			func_127();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_154(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

