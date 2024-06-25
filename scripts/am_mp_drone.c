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
	var uLocal_48 = 0;
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
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
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
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	struct<3> Local_101[32];
	var uLocal_102 = 0;
	struct<349> Local_103 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<12> Local_109 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_26 = 0f;
	fLocal_30 = -0,0375f;
	fLocal_31 = 0,17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0,05f + 0,275f) - 0,01f);
	fLocal_63 = 0f;
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_540(ScriptParam_109);
	}
	else
	{
		func_507(0);
	}
	while (true)
	{
		func_506();
		if (func_498())
		{
			func_507(0);
		}
		if (func_492())
		{
			func_507(0);
		}
		func_2();
		if (unk_0x93E08E0F531E2C35())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (!func_491(6))
	{
		func_490();
		func_489();
		func_488();
		func_484();
		func_483();
	}
	func_480();
	func_478();
	func_474();
	func_471();
	if (func_491(0))
	{
		func_420();
	}
	else if (func_491(1))
	{
		if (!func_419())
		{
			func_412();
			func_395();
		}
		else
		{
			func_394(1);
			func_393(7);
		}
	}
	else if (func_491(2))
	{
		func_386();
	}
	else if (func_491(3))
	{
		func_378();
	}
	else if (func_491(4))
	{
		func_377();
		func_376();
		func_374();
		func_373();
		func_372();
		func_371();
		func_370();
		func_361();
		func_357();
		func_341();
		func_339();
		func_296();
		func_295();
		func_279();
		func_386();
		func_276();
		if (func_269(0))
		{
			func_268();
			return;
		}
		func_264();
		func_258();
		func_246(0);
		func_230();
		func_221();
		func_213();
		func_191();
		func_184();
		func_182();
		func_109();
		func_94();
		func_92();
		func_91();
	}
	else if (func_491(5))
	{
		func_40();
	}
	else if (func_491(7))
	{
		func_33();
	}
	if (!func_491(4) && !func_491(6))
	{
		func_27();
	}
	func_5();
	func_4();
	func_3();
}

void func_3()
{
	Local_103.f_45++;
	if (Local_103.f_45 >= 32)
	{
		Local_103.f_45 = 0;
	}
}

void func_4()
{
	if (Local_103.f_45 != -1)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_101[Local_103.f_45 /*3*/].f_2))
		{
			if (Global_1906887[unk_0x259BE71D8A81D4FA() /*304*/].f_67[Local_103.f_45] != unk_0xAB3646235DE50E93(Local_101[Local_103.f_45 /*3*/].f_2))
			{
				Global_1906887[unk_0x259BE71D8A81D4FA() /*304*/].f_67[Local_103.f_45] = unk_0xAB3646235DE50E93(Local_101[Local_103.f_45 /*3*/].f_2);
			}
		}
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = unk_0xB23E0F9B63D009A8(Local_103.f_45);
	if (unk_0x259BE71D8A81D4FA() != iVar0)
	{
		if (func_26(iVar0, 1, 1))
		{
			if (func_24(func_25()))
			{
				if (BitTest(Local_103.f_7, Local_103.f_45))
				{
					if (!unk_0xCCD470854FB0E643(iVar0) && !unk_0xE39406DC2A852B0E(iVar0, "AM_MP_DRONE", 0))
					{
						unk_0x8744D2E3FC95740E(&(Local_103.f_7), Local_103.f_45);
					}
				}
				if (func_15(iVar0, 0))
				{
					if (!BitTest(Local_103.f_7, Local_103.f_45) && func_10(iVar0))
					{
						func_7(iVar0, 1);
						unk_0x4C48F052678AA7EF(Local_103.f_159, iVar0, 1);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_7), Local_103.f_45);
					}
				}
				else if ((system::vdist2(func_6(iVar0), Local_103.f_150) > 504100f && !func_491(1)) && !func_491(3))
				{
					if (BitTest(Local_103.f_7, Local_103.f_45))
					{
						func_7(iVar0, 0);
						unk_0x4C48F052678AA7EF(Local_103.f_159, iVar0, 0);
						unk_0x8744D2E3FC95740E(&(Local_103.f_7), Local_103.f_45);
						unk_0x8744D2E3FC95740E(&(Local_103.f_8), Local_103.f_45);
					}
				}
			}
			else if (func_15(iVar0, 1) && func_10(iVar0))
			{
				if (!BitTest(Local_103.f_8, Local_103.f_45))
				{
					func_7(iVar0, 1);
					unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_8), Local_103.f_45);
				}
			}
			else if (BitTest(Local_103.f_8, Local_103.f_45))
			{
				func_7(iVar0, 0);
				unk_0x8744D2E3FC95740E(&(Local_103.f_8), Local_103.f_45);
				unk_0x8744D2E3FC95740E(&(Local_103.f_7), Local_103.f_45);
			}
		}
	}
}

Vector3 func_6(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

void func_7(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar1;
	
	Var0.f_0 = 1982590640;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam1;
	iVar1 = func_8(iParam0);
	if (!iVar1 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 4, iVar1, Var0.f_0);
	}
}

var func_8(int iParam0)
{
	var uVar0;
	
	if (func_9(iParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam0);
	}
	return uVar0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
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
	if (func_14(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_12(iParam0))
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_11(int iParam0)
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

int func_12(int iParam0)
{
	if (iParam0 != func_13() && func_26(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 3);
	}
	return 0;
}

int func_13()
{
	return -1;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_13())
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

int func_15(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	if (func_14(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_12(iParam0))
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	if (func_22(2) && func_18(unk_0x259BE71D8A81D4FA()) == 2)
	{
		return 0;
	}
	Var0 = { func_6(iParam0) };
	if (bParam1)
	{
		if (func_17())
		{
			if (func_24(func_16()))
			{
				if (system::vdist2(Var0, unk_0xD1A6A821F5AC81DB(func_16(), 1)) < 490000f)
				{
					return 1;
				}
			}
		}
	}
	else if (system::vdist2(Var0, Local_103.f_150) < 490000f)
	{
		return 1;
	}
	return 0;
}

int func_16()
{
	if (Global_1845121 != func_13())
	{
		if (unk_0xFC8BFE4B41177C22(Global_1663315))
		{
			return Global_1663315;
		}
		if (unk_0xFC8BFE4B41177C22(Global_1962102[Global_1845121]))
		{
			return Global_1962102[Global_1845121];
		}
	}
	return -1;
}

bool func_17()
{
	return BitTest(Global_1956920.f_2, 8);
}

int func_18(int iParam0)
{
	switch (func_21(iParam0))
	{
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
			return func_19(iParam0);
		
		default:
	}
	return -1;
}

int func_19(int iParam0)
{
	if (func_20(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

int func_20(int iParam0, int iParam1)
{
	if (func_9(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)
{
	if (func_9(iParam0))
	{
		if (func_20(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

var func_22(int iParam0)
{
	return func_23(&(Global_2672855.f_194), iParam0);
}

var func_23(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_24(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_25()
{
	if (unk_0x259BE71D8A81D4FA() != -1)
	{
		return Global_1956920.f_20;
	}
	return -1;
}

int func_26(int iParam0, bool bParam1, bool bParam2)
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

void func_27()
{
	int iVar0;
	
	if (Local_103.f_156)
	{
		if (func_32(&(Local_103.f_249)))
		{
			if (func_31())
			{
				iVar0 = Global_262145.f_24850;
			}
			else
			{
				iVar0 = Global_262145.f_24235;
			}
			if (func_29(&(Local_103.f_249), iVar0, 0))
			{
				func_28(&(Local_103.f_249));
				Local_103.f_18 = 100;
				unk_0x8744D2E3FC95740E(&(Local_103.f_5), 4);
				unk_0x8744D2E3FC95740E(&(Local_103.f_5), 3);
				unk_0x8744D2E3FC95740E(&(Local_103.f_5), 24);
				unk_0x8744D2E3FC95740E(&Global_1956920, 29);
				Local_103.f_156 = 0;
			}
		}
	}
}

void func_28(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_29(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_30(uParam0, bParam2, 0);
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

void func_30(var uParam0, bool bParam1, bool bParam2)
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

bool func_31()
{
	return BitTest(Global_1956920.f_2, 2);
}

bool func_32(var uParam0)
{
	return uParam0->f_1;
}

void func_33()
{
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		if (unk_0xEADBDBE0422CF7E6(Local_103.f_159))
		{
			if (!func_34())
			{
				func_507(1);
			}
			else
			{
				func_507(0);
			}
		}
		else
		{
			unk_0x460D2A8B2C7DC7D4(Local_103.f_159);
		}
	}
	else if (!func_34())
	{
		func_507(1);
	}
	else
	{
		func_507(0);
	}
}

int func_34()
{
	if (func_39())
	{
		return 1;
	}
	if (func_38())
	{
		return 1;
	}
	if (func_37() && func_35(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_36(Global_2657971[iParam0 /*465*/].f_322.f_8) == 17;
			}
		}
	}
	return 0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
	}
	return -1;
}

bool func_37()
{
	return BitTest(Global_1956920.f_2, 5);
}

bool func_38()
{
	return BitTest(Global_1956920, 24);
}

bool func_39()
{
	return BitTest(Global_1956920, 16);
}

void func_40()
{
	int iVar0;
	
	unk_0x4EB223432F8FA0A0(9);
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(8);
	unk_0x43AE50D2A33F6E2A();
	unk_0x66EFB3D6110055C4(0, 199, 1);
	unk_0x66EFB3D6110055C4(0, 200, 1);
	func_90();
	func_88();
	func_81(1);
	if (!BitTest(Local_103.f_5, 1))
	{
		if (!func_80())
		{
			if (!func_48() && !func_47())
			{
				if ((func_46() || func_31()) || func_45())
				{
					unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
				}
			}
		}
		if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
		{
			unk_0xBF861D73D95BF415(unk_0xAB3646235DE50E93(Local_103.f_159), 1);
		}
		if (unk_0x9F0C06CFBACDD6A1(Local_103.f_34))
		{
			Local_103.f_34 = unk_0xCA369FBC0DE29517();
			unk_0xBF3D28CA44F3BE2D(Local_103.f_34, "HUD_Static_Loop", Local_103.f_157, 1);
		}
		if (!func_44())
		{
			unk_0x97A041099E92C69F(0, 300, 100);
			unk_0x5C483F4653DC993C(func_43());
			unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_6), 0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 1);
	}
	else if (!func_32(&(Local_103.f_245)))
	{
		func_30(&(Local_103.f_245), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_42())
		{
			iVar0 = 500;
		}
		else if (func_17() && func_41())
		{
			iVar0 = 150;
		}
		if (func_29(&(Local_103.f_245), iVar0, 0) || func_44())
		{
			if (Local_103.f_38 == -1)
			{
				if (unk_0x9F0C06CFBACDD6A1(Local_103.f_38))
				{
					Local_103.f_38 = unk_0xCA369FBC0DE29517();
					unk_0xBF3D28CA44F3BE2D(Local_103.f_38, "HUD_Disconnect", Local_103.f_157, 1);
				}
			}
			func_394(1);
			func_393(7);
		}
	}
}

bool func_41()
{
	return Global_2738934.f_373;
}

bool func_42()
{
	return BitTest(Global_1956920.f_2, 4);
}

char* func_43()
{
	if (func_17())
	{
		return "MissileOutOfRange";
	}
	return "RemixDrone";
}

bool func_44()
{
	return BitTest(Global_1956920, 20);
}

bool func_45()
{
	return BitTest(Global_1956920.f_2, 3);
}

bool func_46()
{
	return BitTest(Global_1956920, 11);
}

bool func_47()
{
	return Global_2707763;
}

int func_48()
{
	if ((func_79(unk_0x259BE71D8A81D4FA(), 0) && Global_1582014 == 1) && func_49())
	{
		return 1;
	}
	return 0;
}

int func_49()
{
	char* sVar0;
	
	if ((Global_1582014 != -1 || Global_1582020 != -1) || Global_1582023 != -1)
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
		if (func_71(unk_0x4A8C381C258A124D()))
		{
			sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
		}
		if ((((((((unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), sVar0, "enter_left", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), sVar0, "enter", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), sVar0, "exit", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), sVar0, "exit_left", 3)) || func_69(unk_0x4A8C381C258A124D(), joaat("script_task_go_straight_to_coord")))
		{
			return 0;
		}
		if (((((((((!unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), sVar0, "base", 3)) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), sVar0, "idle_a", 3)) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), sVar0, "idle_b", 3)) && !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), sVar0, "idle_c", 3))
		{
			return 0;
		}
		if (func_50())
		{
			return 0;
		}
	}
	return 1;
}

int func_50()
{
	int iVar0;
	
	if (func_68(unk_0x259BE71D8A81D4FA()))
	{
		iVar0 = func_67(unk_0x259BE71D8A81D4FA());
		if (func_26(iVar0, 0, 1))
		{
			if ((((((func_12(iVar0) && func_36(func_66(iVar0)) == 4) && unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar0))) && !unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(iVar0))) && unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iVar0), 0)) && unk_0xFC8BFE4B41177C22(unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iVar0), 0))) && func_65(unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iVar0), 0)))
			{
				return 1;
			}
			if (!func_64(Global_4718592.f_127178))
			{
				if (func_68(iVar0))
				{
					if (func_63(iVar0))
					{
						return 1;
					}
					else if (func_12(unk_0x259BE71D8A81D4FA()) || func_62())
					{
						return 1;
					}
				}
			}
		}
	}
	if (func_61(8))
	{
		if (Global_1574981)
		{
			return 1;
		}
	}
	else if (Global_1956949)
	{
		return 1;
	}
	if (func_60(unk_0x259BE71D8A81D4FA()) && BitTest(Global_1575008, 12))
	{
		return 1;
	}
	if (func_59(unk_0x259BE71D8A81D4FA()))
	{
		iVar0 = func_58(unk_0x259BE71D8A81D4FA());
		if (func_26(iVar0, 0, 1))
		{
			if ((((((func_12(iVar0) && func_36(func_66(iVar0)) == 9) && unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar0))) && !unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(iVar0))) && unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iVar0), 0)) && unk_0xFC8BFE4B41177C22(unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iVar0), 0))) && unk_0x4B423FAA24E8ABF0(unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iVar0), 0)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_57(iVar0))
			{
				return 1;
			}
			else if (func_56(iVar0))
			{
				return 1;
			}
			else if (func_12(unk_0x259BE71D8A81D4FA()) || func_62())
			{
				return 1;
			}
		}
	}
	if (func_79(unk_0x259BE71D8A81D4FA(), 0))
	{
		iVar0 = func_55(unk_0x259BE71D8A81D4FA());
		if (func_26(iVar0, 0, 1))
		{
			if ((((Global_1845120 != func_13() && func_12(Global_1845120)) && func_36(func_66(Global_1845120)) == 11) && func_54(Global_1845120, -1)) && unk_0x2E6A27037F1DC473(unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(Global_1845120), 0), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_53(iVar0))
			{
				return 1;
			}
			else if (func_12(unk_0x259BE71D8A81D4FA()) || func_62())
			{
				return 1;
			}
		}
	}
	if (func_52(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x259BE71D8A81D4FA() != func_13())
		{
			iVar0 = Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_11;
			if (func_26(iVar0, 0, 1))
			{
				if (func_12(unk_0x259BE71D8A81D4FA()) || func_62())
				{
					return 1;
				}
			}
		}
	}
	if (func_59(unk_0x259BE71D8A81D4FA()) || func_60(unk_0x259BE71D8A81D4FA()))
	{
		switch (Global_1582020)
		{
			case 1:
				if (Global_262145.f_22740)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22741)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22742)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1582018 == 1)
	{
		return 1;
	}
	if (func_51(3))
	{
		if (Global_1835504 == 186)
		{
			if (Global_1836714 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_51(int iParam0)
{
	return Global_262145.f_4707[iParam0] == Global_4718592.f_127178;
}

int func_52(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_13())
			{
				return func_36(Global_2657971[iParam0 /*465*/].f_322.f_8) == 20;
			}
		}
	}
	return 0;
}

int func_53(int iParam0)
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_3, 4);
	}
	return 0;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_26(iParam0, 1, 1))
	{
		if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iParam0), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iParam0), 0);
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				if (unk_0x4A8C381C258A124D() == unk_0xFD5C5BBD1FE92BB7(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_55(int iParam0)
{
	if (iParam0 == func_13())
	{
		return iParam0;
	}
	return Global_2657971[iParam0 /*465*/].f_322.f_11;
}

int func_56(int iParam0)
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_6, 16);
	}
	return 0;
}

int func_57(int iParam0)
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_2, 6);
	}
	return 0;
}

int func_58(int iParam0)
{
	if (iParam0 == func_13())
	{
		return iParam0;
	}
	return Global_2657971[iParam0 /*465*/].f_322.f_11;
}

int func_59(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_13())
			{
				return func_36(Global_2657971[iParam0 /*465*/].f_322.f_8) == 8;
			}
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_36(Global_2657971[iParam0 /*465*/].f_322.f_8) == 10;
			}
		}
	}
	return 0;
}

bool func_61(int iParam0)
{
	return Global_4718592.f_185587 >= iParam0;
}

var func_62()
{
	return BitTest(Global_1943520, 6);
}

int func_63(int iParam0)
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 6);
	}
	return 0;
}

bool func_64(int iParam0)
{
	return Global_262145.f_4698[4] == iParam0;
}

int func_65(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(uParam0) == joaat("hauler2") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0)
{
	if (iParam0 != func_13() && func_26(iParam0, 1, 1))
	{
		return Global_2657971[iParam0 /*465*/].f_322.f_18;
	}
	return -1;
}

int func_67(int iParam0)
{
	if (iParam0 == func_13())
	{
		return iParam0;
	}
	return Global_2657971[iParam0 /*465*/].f_322.f_11;
}

int func_68(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_13())
			{
				return func_36(Global_2657971[iParam0 /*465*/].f_322.f_8) == 5;
			}
		}
	}
	return 0;
}

int func_69(int iParam0, int iParam1)
{
	if (func_70(iParam0))
	{
		if (unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 1 || unk_0x9B5C1660CCDF7189(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	if (func_24(iParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_77(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_73(iVar0, iVar1, 6, 4);
			iVar3 = func_72(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && unk_0x304A39EB177D246B(iVar2, joaat("high_heels"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x304A39EB177D246B(iParam0, joaat("draw_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x304A39EB177D246B(iParam0, joaat("draw_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x7A491C9A90975007(&Var0);
		iVar1 = (iParam1 - func_76(iParam0));
		if (iVar1 < 0)
		{
			return -1;
		}
		iVar2 = unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 1, -1, -1);
		if (iVar2 <= iVar1)
		{
			return -1;
		}
		unk_0x2DBB2D25D50A5392(iVar1, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0x15D20F88F06530A5(&Var3);
		iVar4 = (iParam1 - func_74(iParam0, func_75(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_79322.f_26[iParam2] && iParam1 == Global_79322[iParam2]) && Global_79322.f_13[iParam2] != 0)
		{
			return Global_79322.f_13[iParam2];
		}
		iVar5 = unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_75(iParam2));
		if (iVar5 <= iVar4)
		{
			return -1;
		}
		unk_0xD36906FE7BBBDB62(iVar4, &Var3);
		Global_79322.f_13[iParam2] = Var3.f_1;
		Global_79322[iParam2] = iParam1;
		Global_79322.f_26[iParam2] = iParam0;
		return Var3.f_1;
	}
	return -1;
}

int func_74(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_77(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x4FAFF4BCB7633475(uParam0))
	{
		return -99;
	}
	uVar0 = func_75(iParam1);
	iVar1 = unk_0xC0120BBCC298EA2F(iParam0, uVar0);
	iVar2 = unk_0xD6AED6BFCC58AF7F(iParam0, uVar0);
	return func_78(iParam0, iVar1, iVar2, iParam1);
}

int func_78(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = func_75(iParam3);
	iVar1 = unk_0x1A4EFE92822E3123(uParam0, uVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + unk_0x8401C77F508D70FD(uParam0, uVar0, iVar3));
		}
		else
		{
			iVar2 = (iVar2 + iParam2);
			return iVar2;
		}
		iVar3++;
	}
	return -99;
}

int func_79(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			if (unk_0x4B423FAA24E8ABF0(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_13())
			{
				return func_36(Global_2657971[iParam0 /*465*/].f_322.f_8) == 12;
			}
		}
	}
	return 0;
}

bool func_80()
{
	return BitTest(Global_1956920, 28);
}

void func_81(int iParam0)
{
	if (func_87())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_86(0))
		{
			func_82(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_82(int iParam0)
{
	if (func_87())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_85())
		{
			func_84(1, 1);
		}
		else
		{
			func_84(0, 0);
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
	if (!func_83())
	{
		Global_20930.f_1 = 3;
	}
}

int func_83()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_84(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_86(0))
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

bool func_85()
{
	return BitTest(Global_1956920, 5);
}

int func_86(int iParam0)
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

bool func_87()
{
	return BitTest(Global_1956920, 19);
}

void func_88()
{
	unk_0xC0964AABD3C0CC7E();
	func_89();
}

void func_89()
{
	Global_23692.f_134 = 1;
}

void func_90()
{
	Global_1574847 = 1;
}

void func_91()
{
	if (func_37())
	{
		if (func_38())
		{
			if (func_24(unk_0x4A8C381C258A124D()))
			{
				unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 124, 1);
			}
		}
	}
}

void func_92()
{
	char* sVar0;
	
	if (!func_93())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	unk_0xEBEE7DC21AB44EC9(sVar0);
	if (unk_0x939D49C9FAA8139A(sVar0))
	{
		if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
		{
			if (!unk_0x9CFFB7009B578840(Local_103.f_174[unk_0x259BE71D8A81D4FA()]))
			{
				unk_0xD03F4780B97A39AE(sVar0);
				if (func_42())
				{
					Local_103.f_174[unk_0x259BE71D8A81D4FA()] = unk_0x62750FD2BDD8BD49("scr_xs_guided_missile_trail", unk_0xAB3646235DE50E93(Local_103.f_159), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				else
				{
					Local_103.f_174[unk_0x259BE71D8A81D4FA()] = unk_0x62750FD2BDD8BD49("scr_xs_guided_missile_trail", unk_0xAB3646235DE50E93(Local_103.f_159), 0f, 0,25f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
				}
			}
		}
	}
}

int func_93()
{
	if (func_42())
	{
		return 1;
	}
	if (func_17())
	{
		return 1;
	}
	return 0;
}

void func_94()
{
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		if (!unk_0xFC8BFE4B41177C22(Local_103.f_161))
		{
			unk_0xEC9DAA34BBB4658C(func_108());
			if (unk_0x6252BC0DD8A320DB(func_108()))
			{
				if (!BitTest(Local_103.f_5, 6))
				{
					if (func_102(unk_0xD1797191721E17CE(false, 0) + 1, 0, 1))
					{
						unk_0x17C7D9B3979F5759(unk_0x594FD1B13DCC309E(0) + 1);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 6);
					}
				}
				else if (unk_0xADCE9BCAFCB83364(1))
				{
					Local_103.f_161 = unk_0xB1DBFEB95C0EFB88(26, func_108(), Local_103.f_150, unk_0xCFC0C995455A6204(unk_0xAB3646235DE50E93(Local_103.f_159)), 0, 0);
					unk_0x935364B4448CD584(Local_103.f_161, 1);
					unk_0x4285E11B28063EE0(Local_103.f_161, false, 0);
					unk_0xBF861D73D95BF415(Local_103.f_161, 0);
					unk_0xAAA71DD7E9059338(Local_103.f_161, 1);
					unk_0x55098D9E9AD58806(func_108());
					unk_0x0428AFDCAA63B06E(Local_103.f_161, 118, 0);
					unk_0x0428AFDCAA63B06E(Local_103.f_161, 108, 1);
					unk_0x0428AFDCAA63B06E(Local_103.f_161, 208, 1);
					unk_0xD0F1DB0E50B367AD(Local_103.f_161, 1, 1, 1, 1, 1, 0, 0, 0);
					unk_0x4D306DD94DD6FDBA(Local_103.f_161, unk_0xAB3646235DE50E93(Local_103.f_159), -1, 0f, 0f, -0,25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
					unk_0x52528272B59EBA11(Local_103.f_161, 0, 0);
					Global_1956920.f_23 = Local_103.f_161;
				}
			}
		}
		else if (func_24(Local_103.f_161))
		{
			if (unk_0xE5E2AE8B19267B8A(Local_103.f_161))
			{
				unk_0x4285E11B28063EE0(Local_103.f_161, false, 0);
			}
			if (!func_100(unk_0x259BE71D8A81D4FA()) && !func_97(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
				{
					func_96(Global_1837320);
				}
			}
			else if ((Global_1956920.f_4 == -1 || Global_1956920.f_4 == 0) || Global_1956920.f_4 == Global_1837309)
			{
				func_96(Global_1837320);
			}
			if (unk_0x4001C3C533FE6925(Local_103.f_161) != func_95())
			{
				unk_0x3CEA1FD137ACE2D9(Local_103.f_161, func_95());
			}
			if (!unk_0xA3736D76B0E93E93(Local_103.f_161))
			{
				unk_0x4D306DD94DD6FDBA(Local_103.f_161, unk_0xAB3646235DE50E93(Local_103.f_159), -1, 0f, 0f, -0,25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				unk_0x52528272B59EBA11(Local_103.f_161, 0, 0);
			}
		}
	}
}

int func_95()
{
	if (Global_1956920.f_4 != -1 && Global_1956920.f_4 != 0)
	{
		return Global_1956920.f_4;
	}
	return Global_1837320;
}

void func_96(int iParam0)
{
	if (Global_1956920.f_4 != iParam0)
	{
		Global_1956920.f_4 = iParam0;
	}
}

int func_97(int iParam0)
{
	if (func_99(iParam0) == 236 || func_99(iParam0) == 150)
	{
		return func_98(iParam0);
	}
	return 0;
}

int func_98(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 7);
	}
	return 0;
}

int func_99(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/];
	}
	return -1;
}

bool func_100(int iParam0)
{
	return func_101(iParam0, 20);
}

var func_101(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

bool func_102(int iParam0, bool bParam1, bool bParam2)
{
	return func_103(2, iParam0, 1, bParam1, bParam2);
}

int func_103(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681448, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_107(iParam0) - func_106(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_106(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_107(iParam0) - func_105(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_106(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_107(iParam0) - func_106(iParam0, 1));
		}
		if (!bParam4 && Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_104(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1681448.f_1;
			break;
		
		case 1:
			return Global_1681448.f_2;
			break;
		
		case 2:
			return Global_1681448.f_3;
			break;
	}
	return 0;
}

int func_106(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x259BE71D8A81D4FA();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657971[iVar0 /*465*/].f_220;
			}
			else
			{
				return unk_0xA0522491D076C1E6(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657971[iVar0 /*465*/].f_221;
			}
			else
			{
				return unk_0xF46F370442FAD8F9(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657971[iVar0 /*465*/].f_222;
			}
			else
			{
				return unk_0xD1797191721E17CE(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1681456;
			break;
		
		case 1:
			return Global_1681457;
			break;
		
		case 2:
			return Global_1681458;
			break;
	}
	return 0;
}

int func_108()
{
	return joaat("g_m_m_chigoon_01");
}

void func_109()
{
	if (func_181())
	{
		return;
	}
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0))
	{
		if (unk_0x78411E34CF90EA8C(Local_103.f_169) && unk_0x8DE2438443E6A145(Local_103.f_169))
		{
			if (!func_93())
			{
				func_172();
				func_141();
			}
			else
			{
				func_122();
				func_112();
			}
			unk_0x9D0B099EEAD74270();
			func_111(1);
			func_110(2);
		}
	}
}

void func_110(int iParam0)
{
	Global_1577937 = iParam0;
}

void func_111(int iParam0)
{
	Global_1670224.f_1163 = iParam0;
}

void func_112()
{
	int iVar0;
	
	if (!unk_0xA0C7B98BCF1EEF9E(Local_103.f_170))
	{
		if (func_17())
		{
			Local_103.f_170 = func_121();
		}
		else
		{
			Local_103.f_170 = func_120();
		}
		return;
	}
	iVar0 = func_25();
	if (iVar0 < 0 || !func_24(iVar0))
	{
		return;
	}
	if (func_17())
	{
		func_116();
	}
	func_115(Local_103.f_170, 0);
	func_114(Local_103.f_170, 3, 3, 3);
	func_113(Local_103.f_170, 0f, 0f, 0f, 0f, (unk_0xCFC0C995455A6204(iVar0) + 180f));
	unk_0xA4F67CEB594AE064(1);
	unk_0xA91A4C18A2DB01BD(Local_103.f_170, 255, 255, 255, 0, 0);
}

void func_113(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	unk_0x88F483FBD433696A(uParam0, "SET_ALT_FOV_HEADING");
	unk_0x74BF156C860580D4(fParam1);
	unk_0x74BF156C860580D4(fParam2);
	unk_0x74BF156C860580D4(fParam5);
	unk_0xE6B753D52F4CA222();
}

void func_114(var uParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x88F483FBD433696A(uParam0, "SET_WEAPON_VALUES");
	unk_0x330108B080A2132F(iParam1);
	unk_0x330108B080A2132F(iParam2);
	unk_0x330108B080A2132F(iParam3);
	unk_0xE6B753D52F4CA222();
}

void func_115(var uParam0, int iParam1)
{
	unk_0x88F483FBD433696A(uParam0, "SET_ZOOM_VISIBLE");
	unk_0x557F1E2300EF1A3E(iParam1);
	unk_0xE6B753D52F4CA222();
}

void func_116()
{
	int iVar0;
	float fVar1;
	
	iVar0 = 1;
	if (func_17())
	{
		iVar0 = 10;
	}
	fVar1 = Local_103.f_120;
	if (fVar1 >= (func_119() - IntToFloat((50 * iVar0))))
	{
		if (unk_0x9F0C06CFBACDD6A1(Local_103.f_37))
		{
			Local_103.f_37 = unk_0xCA369FBC0DE29517();
			unk_0xBF3D28CA44F3BE2D(Local_103.f_37, "Out_Of_Bounds_Alarm_Loop", Local_103.f_157, 1);
		}
		if (fVar1 >= (func_119() - IntToFloat((50 * iVar0))) && fVar1 < (func_119() - IntToFloat((45 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,1f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((45 * iVar0))) && fVar1 < (func_119() - IntToFloat((40 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,2f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((40 * iVar0))) && fVar1 < (func_119() - IntToFloat((35 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,3f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((35 * iVar0))) && fVar1 < (func_119() - IntToFloat((30 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,4f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((30 * iVar0))) && fVar1 < (func_119() - IntToFloat((25 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,5f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((25 * iVar0))) && fVar1 < (func_119() - IntToFloat((20 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,6f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((20 * iVar0))) && fVar1 < (func_119() - IntToFloat((15 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,7f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((15 * iVar0))) && fVar1 < (func_119() - IntToFloat((10 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,8f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((10 * iVar0))) && fVar1 < (func_119() - IntToFloat((5 * iVar0))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,9f);
		}
		else if (fVar1 >= (func_119() - IntToFloat((5 * iVar0))) && fVar1 < func_119())
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(1f);
		}
	}
	else
	{
		func_118("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_37))
		{
			unk_0x8E4825CCACA34B58(Local_103.f_37);
			unk_0x394AFAC073E1F277(Local_103.f_37);
			Local_103.f_37 = -1;
		}
	}
}

void func_117(float fParam0)
{
	unk_0x88F483FBD433696A(Local_103.f_170, "SET_WARNING_FLASH_RATE");
	unk_0x74BF156C860580D4(fParam0);
	unk_0xE6B753D52F4CA222();
}

void func_118(char* sParam0, int iParam1)
{
	unk_0x88F483FBD433696A(Local_103.f_170, sParam0);
	unk_0x557F1E2300EF1A3E(iParam1);
	unk_0xE6B753D52F4CA222();
}

float func_119()
{
	if (Global_1956920.f_8 == 0f)
	{
		return Global_262145.f_24243;
	}
	return Global_1956920.f_8;
}

var func_120()
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_4718592.f_178456)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return unk_0x8DE4F68A9728925E(sVar0);
}

var func_121()
{
	char* sVar0;
	
	sVar0 = "SUBMARINE_MISSILES";
	return unk_0x8DE4F68A9728925E(sVar0);
}

void func_122()
{
	if (func_17())
	{
		if (!func_140())
		{
			return;
		}
	}
	if (!BitTest(Local_103.f_5, 16))
	{
		if (func_138(0, -1, 0))
		{
			func_137(-1);
			func_136(20, "DRONE_SPACE", -1);
			func_136(21, "DRONE_POSITION", -1);
			if (func_42())
			{
				if (!unk_0xAE231F549813BBDF(0))
				{
					func_135(208, "DRONE_SPEEDU", -1, 0);
					func_135(207, "DRONE_SLOWD", -1, 0);
				}
				else
				{
					func_135(209, "DRONE_SPEEDU", -1, 0);
					func_135(210, "DRONE_SLOWD", -1, 0);
				}
			}
			func_135(75, "MOVE_DRONE_RE", -1, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 16);
		}
	}
	else
	{
		func_123(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0xAE231F549813BBDF(0))
	{
		if (!BitTest(Local_103.f_5, 17))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 17);
			unk_0x8744D2E3FC95740E(&(Local_103.f_5), 16);
		}
	}
	else if (BitTest(Local_103.f_5, 17))
	{
		unk_0x8744D2E3FC95740E(&(Local_103.f_5), 17);
		unk_0x8744D2E3FC95740E(&(Local_103.f_5), 16);
	}
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_134(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_131(bParam4, bParam8))
	{
		return;
	}
	if (func_129())
	{
		return;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_126(unk_0x259BE71D8A81D4FA(), 0))
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
					func_125(&(Global_23831.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && unk_0x70E57E9927B6BA58(&(Global_23831.f_5553[iVar2 /*4*/])) == unk_0x70E57E9927B6BA58("PREV"))
					{
						func_125(&(Global_23831.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23831.f_5610[iVar1] == -1)
					{
						func_124(&(Global_23831.f_5553[iVar1 /*4*/]));
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
				func_125(&Global_4541740);
				if (Global_4541740.f_20 == -1)
				{
					func_124(&(Global_4541740.f_16));
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

void func_124(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_125(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

bool func_126(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_127(-1, 0) == 8;
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

int func_127(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_128();
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

int func_128()
{
	return Global_1574926;
}

int func_129()
{
	struct<3> Var0;
	
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	if (func_130())
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

int func_130()
{
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_131(bool bParam0, bool bParam1)
{
	if (Global_2672855.f_1728.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9390801B06EE998F() || (func_133(8, -1) && func_132() != 65)) || (unk_0x05AA183DA1344935() != 0 && !bParam1)) || (unk_0x3555462DB47B7AB1() && !bParam0)) || unk_0x2B8BAF9BA2A3D36B()) || Global_79650) || Global_23831.f_9115) || unk_0xB11671B812399BA2()) || Global_101585.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_132()
{
	return Global_1575011;
}

var func_133(int iParam0, int iParam1)
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

int func_134(var uParam0, bool bParam1, int iParam2)
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

void func_135(int iParam0, char* sParam1, int iParam2, bool bParam3)
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

void func_136(int iParam0, char* sParam1, int iParam2)
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

void func_137(int iParam0)
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
		if (!func_134(&iVar1, 0, iParam0))
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

bool func_138(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_134(&iVar0, 1, iParam1))
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
	bVar2 = func_139(&(Global_23831.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_139(var uParam0)
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

bool func_140()
{
	return BitTest(Local_103.f_6, 6);
}

void func_141()
{
	if (!unk_0xA0C7B98BCF1EEF9E(Local_103.f_170))
	{
		Local_103.f_170 = unk_0x8DE4F68A9728925E("DRONE_CAM");
		return;
	}
	if ((func_45() || func_87()) || func_170(0))
	{
		func_118("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_118("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_45() || func_87()) || func_31())
	{
		func_118("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_118("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_31())
	{
		func_118("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_118("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_45() && !func_87())
	{
		func_118("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_118("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_118("SET_HEADING_METER_IS_VISIBLE", 1);
	func_118("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (((!func_45() && !func_87()) && !func_31()) && func_169())
	{
		func_118("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_118("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	if (func_168())
	{
		func_118("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_118("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	}
	func_118("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_118("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_21(unk_0x259BE71D8A81D4FA()) == 240)
	{
		if (Local_103.f_120 >= (func_119() - 50f) || Local_103.f_121 >= IntToFloat((Global_262145.f_24242 - 50)))
		{
			func_118("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_167();
			if (BitTest(Local_103.f_5, 13))
			{
				unk_0x8744D2E3FC95740E(&(Local_103.f_5), 13);
			}
		}
		else
		{
			func_163(func_164());
			if (!BitTest(Local_103.f_5, 13))
			{
				func_118("SET_SOUND_WAVE_IS_VISIBLE", 1);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 13);
			}
		}
	}
	else
	{
		func_118("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_167();
	}
	func_118("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_45() && !func_87())
	{
		if (!func_31())
		{
			func_162(Local_103.f_18);
		}
		else
		{
			func_161(Local_103.f_18);
		}
		if (!func_170(0))
		{
			func_160(Local_103.f_19);
		}
	}
	if (func_168())
	{
		func_159(Local_103.f_24);
	}
	if (func_169())
	{
		func_158(Local_103.f_20);
	}
	func_157(0, "DRONE_ZOOM_1");
	func_157(1, "");
	func_157(2, "DRONE_ZOOM_2");
	func_157(3, "");
	func_157(4, "DRONE_ZOOM_3");
	func_155();
	func_153();
	func_151();
	func_150(system::round((unk_0xCFC0C995455A6204(unk_0xAB3646235DE50E93(Local_103.f_159)) + 180f)));
	if (func_21(unk_0x259BE71D8A81D4FA()) == 240)
	{
		func_149(func_164());
	}
	if (func_148())
	{
		func_143();
	}
	else if (func_31() || func_45())
	{
		func_142();
	}
	else if (func_38())
	{
		func_116();
	}
	unk_0xA4F67CEB594AE064(1);
	unk_0xA91A4C18A2DB01BD(Local_103.f_170, 255, 255, 255, 0, 0);
}

void func_142()
{
	if (Local_103.f_150.f_2 >= (func_119() - 20f))
	{
		if (unk_0x9F0C06CFBACDD6A1(Local_103.f_37))
		{
			Local_103.f_37 = unk_0xCA369FBC0DE29517();
			unk_0xBF3D28CA44F3BE2D(Local_103.f_37, "Out_Of_Bounds_Alarm_Loop", Local_103.f_157, 1);
		}
		if (Local_103.f_150.f_2 >= (func_119() - 20f) && Local_103.f_150.f_2 < (func_119() - 16f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,1f);
		}
		else if (Local_103.f_150.f_2 >= (func_119() - 16f) && Local_103.f_150.f_2 < (func_119() - 13f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,2f);
		}
		else if (Local_103.f_150.f_2 >= (func_119() - 13f) && Local_103.f_150.f_2 < (func_119() - 10f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,3f);
		}
		else if (Local_103.f_150.f_2 >= (func_119() - 10f) && Local_103.f_150.f_2 < (func_119() - 8f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,4f);
		}
		else if (Local_103.f_150.f_2 >= (func_119() - 8f) && Local_103.f_150.f_2 < (func_119() - 6f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,5f);
		}
		else if (Local_103.f_150.f_2 >= (func_119() - 6f) && Local_103.f_150.f_2 < (func_119() - 4f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,6f);
		}
		else if (Local_103.f_150.f_2 >= (func_119() - 4f) && Local_103.f_150.f_2 < (func_119() - 3f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,7f);
		}
		else if (Local_103.f_150.f_2 >= (func_119() - 3f) && Local_103.f_150.f_2 < (func_119() - 2f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,8f);
		}
		else if (Local_103.f_150.f_2 >= (func_119() - 2f) && Local_103.f_150.f_2 < (func_119() - 1f))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,9f);
		}
		else if (Local_103.f_150.f_2 >= (func_119() - 1f) && Local_103.f_150.f_2 < func_119())
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(1f);
		}
	}
	else
	{
		func_118("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_37))
		{
			unk_0x8E4825CCACA34B58(Local_103.f_37);
			unk_0x394AFAC073E1F277(Local_103.f_37);
			Local_103.f_37 = -1;
		}
	}
}

void func_143()
{
	if (Local_103.f_120 >= (func_119() - 50f) || Local_103.f_121 >= IntToFloat((Global_262145.f_24242 - 50)))
	{
		func_144();
		if (unk_0x9F0C06CFBACDD6A1(Local_103.f_37))
		{
			Local_103.f_37 = unk_0xCA369FBC0DE29517();
			unk_0xBF3D28CA44F3BE2D(Local_103.f_37, "Out_Of_Bounds_Alarm_Loop", Local_103.f_157, 1);
		}
		if ((Local_103.f_120 >= (func_119() - 50f) && Local_103.f_120 < (func_119() - 45f)) || (Local_103.f_121 >= IntToFloat((Global_262145.f_24242 - 50)) && Local_103.f_121 < IntToFloat((Global_262145.f_24242 - 45))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,1f);
		}
		else if ((Local_103.f_120 >= (func_119() - 45f) && Local_103.f_120 < (func_119() - 40f)) || (Local_103.f_121 >= IntToFloat((Global_262145.f_24242 - 45)) && Local_103.f_121 < IntToFloat((Global_262145.f_24242 - 40))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,2f);
		}
		else if ((Local_103.f_120 >= (func_119() - 40f) && Local_103.f_120 < (func_119() - 35f)) || (Local_103.f_121 >= IntToFloat((Global_262145.f_24242 - 40)) && Local_103.f_121 < IntToFloat((Global_262145.f_24242 - 35))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,3f);
		}
		else if ((Local_103.f_120 >= (func_119() - 35f) && Local_103.f_120 < (func_119() - 30f)) || (Local_103.f_121 >= IntToFloat((Global_262145.f_24242 - 35)) && Local_103.f_121 < IntToFloat((Global_262145.f_24242 - 30))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,4f);
		}
		else if ((Local_103.f_120 >= (func_119() - 30f) && Local_103.f_120 < (func_119() - 25f)) || (Local_103.f_121 >= IntToFloat((Global_262145.f_24242 - 30)) && Local_103.f_121 < IntToFloat((Global_262145.f_24242 - 25))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,5f);
		}
		else if ((Local_103.f_120 >= (func_119() - 25f) && Local_103.f_120 < (func_119() - 20f)) || (Local_103.f_121 >= IntToFloat((Global_262145.f_24242 - 25)) && Local_103.f_121 < IntToFloat((Global_262145.f_24242 - 20))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,6f);
		}
		else if ((Local_103.f_120 >= (func_119() - 20f) && Local_103.f_120 < (func_119() - 15f)) || (Local_103.f_121 >= IntToFloat((Global_262145.f_24242 - 20)) && Local_103.f_121 < IntToFloat((Global_262145.f_24242 - 15))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,7f);
		}
		else if ((Local_103.f_120 >= (func_119() - 15f) && Local_103.f_120 < (func_119() - 10f)) || (Local_103.f_121 >= IntToFloat((Global_262145.f_24242 - 15)) && Local_103.f_121 < IntToFloat((Global_262145.f_24242 - 10))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,8f);
		}
		else if ((Local_103.f_120 >= (func_119() - 10f) && Local_103.f_120 < (func_119() - 5f)) || (Local_103.f_121 >= IntToFloat((Global_262145.f_24242 - 10)) && Local_103.f_121 < IntToFloat((Global_262145.f_24242 - 5))))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(0,9f);
		}
		else if ((Local_103.f_120 >= (func_119() - 5f) && Local_103.f_120 < func_119()) || (Local_103.f_121 >= IntToFloat((Global_262145.f_24242 - 5)) && Local_103.f_121 < IntToFloat(Global_262145.f_24242)))
		{
			func_118("SET_WARNING_IS_VISIBLE", 1);
			func_117(1f);
		}
	}
	else
	{
		func_118("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_37))
		{
			unk_0x8E4825CCACA34B58(Local_103.f_37);
			unk_0x394AFAC073E1F277(Local_103.f_37);
			Local_103.f_37 = -1;
		}
	}
}

void func_144()
{
	int iVar0;
	
	if (unk_0x9390801B06EE998F() && !BitTest(Global_1943520.f_3, 15))
	{
		if (!unk_0x4C705AAF75363287())
		{
			iVar0 = func_147(22045, -1);
			if (iVar0 < 4)
			{
				func_146("HACK_DRONE_DIS", -1);
				iVar0++;
				func_145(22045, iVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1943520.f_3), 15);
			}
		}
	}
}

void func_145(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_128();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	unk_0x0F575D68F532124C(iParam0, iParam1, iParam2);
}

void func_146(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

var func_147(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_128();
	}
	return unk_0x03CFFD51CE515454(iParam0, iParam1);
}

bool func_148()
{
	return BitTest(Global_1956920.f_2, 1);
}

void func_149(float fParam0)
{
	unk_0x88F483FBD433696A(Local_103.f_170, "ATTENUATE_SOUND_WAVE");
	unk_0x74BF156C860580D4(fParam0);
	unk_0xE6B753D52F4CA222();
}

void func_150(int iParam0)
{
	unk_0x88F483FBD433696A(Local_103.f_170, "SET_HEADING");
	unk_0x330108B080A2132F(iParam0);
	unk_0xE6B753D52F4CA222();
}

void func_151()
{
	if (func_31())
	{
		if (BitTest(Local_103.f_5, 11) && !Local_103.f_156)
		{
			func_152(1);
		}
		else
		{
			func_152(0);
		}
	}
	else if (BitTest(Local_103.f_5, 11) || BitTest(Local_103.f_5, 23))
	{
		func_152(1);
	}
	else
	{
		func_152(0);
	}
}

void func_152(int iParam0)
{
	unk_0x88F483FBD433696A(Local_103.f_170, "SET_RETICLE_ON_TARGET");
	unk_0x557F1E2300EF1A3E(iParam0);
	unk_0xE6B753D52F4CA222();
}

void func_153()
{
	if (BitTest(Local_103.f_5, 4) || (BitTest(Local_103.f_5, 3) && func_31()))
	{
		if (Local_103.f_18 == 100)
		{
			func_154(1);
		}
		else if (Local_103.f_18 != 0 && Local_103.f_18 != 100)
		{
			func_154(2);
		}
	}
	else
	{
		func_154(0);
	}
}

void func_154(int iParam0)
{
	unk_0x88F483FBD433696A(Local_103.f_170, "SET_RETICLE_STATE");
	unk_0x330108B080A2132F(iParam0);
	unk_0xE6B753D52F4CA222();
}

void func_155()
{
	switch (Local_103.f_25)
	{
		case 0:
			func_156(0);
			break;
		
		case 1:
			func_156(2);
			break;
		
		case 2:
			func_156(4);
			break;
	}
}

void func_156(int iParam0)
{
	unk_0x88F483FBD433696A(Local_103.f_170, "SET_ZOOM");
	unk_0x330108B080A2132F(iParam0);
	unk_0xE6B753D52F4CA222();
}

void func_157(int iParam0, char* sParam1)
{
	unk_0x88F483FBD433696A(Local_103.f_170, "SET_ZOOM_LABEL");
	unk_0x330108B080A2132F(iParam0);
	func_124(sParam1);
	unk_0xE6B753D52F4CA222();
}

void func_158(int iParam0)
{
	unk_0x88F483FBD433696A(Local_103.f_170, "SET_BOOST_PERCENTAGE");
	unk_0x330108B080A2132F(uParam0);
	unk_0xE6B753D52F4CA222();
}

void func_159(int iParam0)
{
	unk_0x88F483FBD433696A(Local_103.f_170, "SET_TRANQUILIZE_PERCENTAGE");
	unk_0x330108B080A2132F(uParam0);
	unk_0xE6B753D52F4CA222();
}

void func_160(int iParam0)
{
	unk_0x88F483FBD433696A(Local_103.f_170, "SET_DETONATE_PERCENTAGE");
	unk_0x330108B080A2132F(uParam0);
	unk_0xE6B753D52F4CA222();
}

void func_161(int iParam0)
{
	unk_0x88F483FBD433696A(Local_103.f_170, "SET_EMP_PERCENTAGE");
	unk_0x330108B080A2132F(uParam0);
	unk_0xE6B753D52F4CA222();
}

void func_162(int iParam0)
{
	unk_0x88F483FBD433696A(Local_103.f_170, "SET_SHOCK_PERCENTAGE");
	unk_0x330108B080A2132F(uParam0);
	unk_0xE6B753D52F4CA222();
}

void func_163(float fParam0)
{
	if (unk_0x9F0C06CFBACDD6A1(Local_103.f_44))
	{
		Local_103.f_44 = unk_0xCA369FBC0DE29517();
		unk_0xBF3D28CA44F3BE2D(Local_103.f_44, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", 1);
		unk_0x3F002AA9562BF0BE(Local_103.f_44, "signalstrength", fParam0);
	}
	else
	{
		unk_0x3F002AA9562BF0BE(Local_103.f_44, "signalstrength", fParam0);
	}
}

float func_164()
{
	float fVar0;
	
	if (func_21(unk_0x259BE71D8A81D4FA()) == 240)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_103.f_159) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0))
		{
			fVar0 = func_165(unk_0xAB3646235DE50E93(Local_103.f_159), func_166(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0,1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0,2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0,3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0,4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0,5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0,6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0,7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0,8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0,9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_165(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Param1, iParam2);
}

Vector3 func_166()
{
	if (func_21(unk_0x259BE71D8A81D4FA()) == 240)
	{
		return Global_1962259;
	}
	return 0f, 0f, 0f;
}

void func_167()
{
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_44))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_44);
		unk_0x394AFAC073E1F277(Local_103.f_44);
		Local_103.f_44 = -1;
	}
}

bool func_168()
{
	return BitTest(Global_1956920.f_2, 6);
}

int func_169()
{
	if (func_168())
	{
		if (unk_0xF8A8852F99E201DD(Global_1956920.f_24))
		{
			return 0;
		}
	}
	return 1;
}

int func_170(bool bParam0)
{
	if (func_148())
	{
		if (bParam0)
		{
			if (BitTest(Local_103.f_5, 4))
			{
				return 1;
			}
		}
	}
	if (func_168())
	{
		return 1;
	}
	if (func_171())
	{
		return 1;
	}
	return 0;
}

bool func_171()
{
	return BitTest(Global_1956920, 27);
}

void func_172()
{
	int iVar0;
	int iVar1;
	
	if (func_87())
	{
		return;
	}
	if (!BitTest(Local_103.f_5, 16))
	{
		if (func_138(0, -1, 0))
		{
			func_137(-1);
			func_136(21, "DRONE_MOVE", -1);
			func_136(20, "DRONE_POSITION", -1);
			if (!unk_0xAE231F549813BBDF(0))
			{
				func_135(210, "CELL_284", -1, 0);
				if ((!func_45() && !func_31()) && func_169())
				{
					func_135(209, "BOOST_DRONE_E", -1, 0);
				}
				func_135(208, "MOVE_DRONE_UP", -1, 0);
				func_135(207, "MOVE_DRONE_DO", -1, 0);
			}
			else
			{
				func_136(29, "CELL_284", -1);
				if ((!func_45() && !func_31()) && func_169())
				{
					func_135(203, "BOOST_DRONE_E", -1, 0);
				}
				func_135(209, "MOVE_DRONE_UP", -1, 0);
				func_135(210, "MOVE_DRONE_DO", -1, 0);
			}
			if (!func_45())
			{
				iVar0 = 206;
				if (unk_0xAE231F549813BBDF(0))
				{
					iVar0 = 237;
				}
				if (func_31())
				{
					func_135(iVar0, "MOVE_DRONE_EM", -1, 0);
				}
				else
				{
					func_135(iVar0, "MOVE_DRONE_ST", -1, 0);
				}
				iVar1 = 205;
				if (unk_0xAE231F549813BBDF(0))
				{
					iVar1 = 238;
				}
				if (!func_170(0))
				{
					func_135(iVar1, "MOVE_DRONE_EX", -1, 0);
				}
				else if (func_179())
				{
					func_135(iVar1, "MOVE_DRONE_TRG", -1, 0);
				}
			}
			if (!func_31())
			{
				if ((((func_178(0) || func_178(1)) || func_177()) || unk_0xE7585CE3CDD6F47E()) || func_173(unk_0x259BE71D8A81D4FA()))
				{
				}
				else
				{
					func_135(201, "DRONE_PHOTO", -1, 0);
				}
			}
			func_135(80, "MOVE_DRONE_RE", -1, 0);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 16);
		}
	}
	else
	{
		func_123(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0xAE231F549813BBDF(0))
	{
		if (!BitTest(Local_103.f_5, 17))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 17);
			unk_0x8744D2E3FC95740E(&(Local_103.f_5), 16);
		}
	}
	else if (BitTest(Local_103.f_5, 17))
	{
		unk_0x8744D2E3FC95740E(&(Local_103.f_5), 17);
		unk_0x8744D2E3FC95740E(&(Local_103.f_5), 16);
	}
}

int func_173(int iParam0)
{
	if (func_176(func_21(iParam0)))
	{
		if (func_175() != func_13())
		{
			if (func_174() == func_175())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_174()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_35;
}

int func_175()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10;
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		
		default:
	}
	return 0;
}

int func_177()
{
	return Global_23692.f_135;
	return 0;
}

bool func_178(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23692.f_4 && Global_23692.f_104 == 4);
	}
	return Global_23692.f_4;
}

int func_179()
{
	if (func_180() <= 0)
	{
		return 0;
	}
	if (func_168())
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	return Global_1956920.f_6;
}

bool func_181()
{
	return BitTest(Global_1956920, 7);
}

void func_182()
{
	int iVar0;
	
	if (!func_183())
	{
		return;
	}
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0))
	{
		if (unk_0xEADBDBE0422CF7E6(Local_103.f_159))
		{
			if ((unk_0x78411E34CF90EA8C(Local_103.f_169) && unk_0x8DE2438443E6A145(Local_103.f_169)) && !func_87())
			{
				iVar0 = 80;
				if (func_93())
				{
					iVar0 = 75;
				}
				if (unk_0x875A214D5EBCA509(2, iVar0) || unk_0xDEE3EFEA31A1F555(2, iVar0))
				{
					if (!BitTest(Local_103.f_5, 7))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 7);
					}
				}
			}
		}
	}
}

int func_183()
{
	if (func_17())
	{
		if (!func_140())
		{
			return 0;
		}
	}
	return 1;
}

void func_184()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_190() || !func_173(unk_0x259BE71D8A81D4FA())) || !unk_0x76CD105BCAC6EB9F())
	{
		return;
	}
	iVar0 = func_189(1);
	func_188(iVar0);
	iVar1 = func_189(0);
	iVar2 = unk_0x8366ABB82B1ABC59(Local_103.f_141, 2f, iVar1, 0, 0, 0);
	if (unk_0xFC8BFE4B41177C22(iVar2) && iVar2 != Local_103.f_162)
	{
		if (unk_0x1AC621DBDFE4ECA0(iVar2, joaat("weapon_stungun"), 0) || unk_0x8D91ADE44AC79BC9(iVar2) == 999)
		{
			if (!BitTest(Local_103.f_5, 26))
			{
				func_187(func_175(), 1, 1, 0);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 26);
			}
		}
	}
	if (unk_0xFC8BFE4B41177C22(Local_103.f_162))
	{
		if (unk_0x1AC621DBDFE4ECA0(Local_103.f_162, joaat("weapon_stungun"), 0) || unk_0x8D91ADE44AC79BC9(Local_103.f_162) == 999)
		{
			if (!BitTest(Local_103.f_5, 26))
			{
				func_187(func_175(), 1, 1, 0);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 26);
			}
		}
	}
	if (BitTest(Local_103.f_5, 26))
	{
		iVar3 = unk_0x8366ABB82B1ABC59(Local_103.f_141, 2f, iVar0, 0, 0, 0);
		if (unk_0xFC8BFE4B41177C22(iVar3))
		{
			if (unk_0xFC8BFE4B41177C22(Local_103.f_162))
			{
				unk_0x4285E11B28063EE0(Local_103.f_162, false, 0);
			}
			if (unk_0xFC8BFE4B41177C22(iVar2))
			{
				unk_0x4285E11B28063EE0(iVar2, false, 0);
			}
			func_185(1);
		}
	}
}

void func_185(bool bParam0)
{
	if (bParam0)
	{
		if (!func_186())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 1);
		}
	}
	else if (func_186())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 1);
	}
}

bool func_186()
{
	return BitTest(Global_1956920, 1);
}

void func_187(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	int iVar1;
	
	Var0.f_0 = -171282281;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	iVar1 = 0;
	if (iParam0 != func_13())
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar1, iParam0);
	}
	if (!iVar1 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 6, iVar1, Var0.f_0);
	}
}

bool func_188(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

int func_189(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_1956920.f_19 != 0)
		{
			return Global_1956920.f_19;
		}
		else
		{
			return joaat("ba_prop_battle_secpanel");
		}
	}
	else
	{
		return joaat("ba_prop_battle_secpanel_dam");
	}
	return 0;
}

var func_190()
{
	return BitTest(Global_1956920, 14);
}

void func_191()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((BitTest(Local_103.f_5, 1) || func_202()) || func_201())
	{
		Local_103.f_18 = 0;
		Local_103.f_19 = 0;
		if (!BitTest(Local_103.f_5, 10))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 10);
		}
		return;
	}
	if (!func_201())
	{
		if (BitTest(Local_103.f_5, 10))
		{
			Local_103.f_18 = 100;
			unk_0x8744D2E3FC95740E(&(Local_103.f_5), 10);
		}
	}
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0))
	{
		if (unk_0xEADBDBE0422CF7E6(Local_103.f_159))
		{
			if ((unk_0x78411E34CF90EA8C(Local_103.f_169) && unk_0x8DE2438443E6A145(Local_103.f_169)) && !BitTest(Local_103.f_5, 2))
			{
				if ((!BitTest(Local_103.f_5, 4) && !BitTest(Local_103.f_5, 3)) && !Local_103.f_156)
				{
					iVar0 = 206;
					if (unk_0xAE231F549813BBDF(0))
					{
						iVar0 = 237;
					}
					if ((((unk_0x2645430E708CBFAC(2, iVar0) || unk_0x61C3701AD6D746B2(2, iVar0)) && !BitTest(Local_103.f_5, 5)) && !BitTest(Local_103.f_5, 24)) && !func_87())
					{
						unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 29);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 24);
						if (BitTest(Local_103.f_5, 11) || BitTest(Local_103.f_5, 23))
						{
							Local_103.f_27++;
						}
					}
					if (func_31() && !func_171())
					{
						func_198();
					}
					else
					{
						func_197();
					}
				}
				else if (func_32(&(Local_103.f_249)))
				{
					if (func_171())
					{
						iVar1 = 3000;
					}
					else if (func_31())
					{
						iVar1 = Global_262145.f_24850;
					}
					else
					{
						iVar1 = Global_262145.f_24235;
					}
					if (func_29(&(Local_103.f_249), iVar1, 0))
					{
						func_28(&(Local_103.f_249));
						Local_103.f_18 = 100;
						if (Local_103.f_32 != -1)
						{
							unk_0x8E4825CCACA34B58(Local_103.f_32);
							unk_0x394AFAC073E1F277(Local_103.f_32);
							Local_103.f_32 = -1;
						}
						if (unk_0x9F0C06CFBACDD6A1(Local_103.f_35))
						{
							unk_0x8E4825CCACA34B58(Local_103.f_35);
							unk_0x394AFAC073E1F277(Local_103.f_35);
							Local_103.f_35 = -1;
						}
						unk_0x8744D2E3FC95740E(&(Local_103.f_5), 4);
						unk_0x8744D2E3FC95740E(&(Local_103.f_5), 3);
						unk_0x8744D2E3FC95740E(&(Local_103.f_5), 24);
						unk_0x8744D2E3FC95740E(&Global_1956920, 29);
						Local_103.f_156 = 0;
					}
					else
					{
						iVar2 = (100 * unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Local_103.f_249)));
						Local_103.f_18 = (iVar2 / iVar1);
						if (!func_31())
						{
							if (unk_0x9F0C06CFBACDD6A1(Local_103.f_32))
							{
								Local_103.f_32 = unk_0xCA369FBC0DE29517();
								unk_0xBF3D28CA44F3BE2D(Local_103.f_32, "HUD_Shock_Recharge", Local_103.f_157, 1);
								unk_0x3F002AA9562BF0BE(Local_103.f_32, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_195();
				func_192();
			}
		}
		else
		{
			unk_0x460D2A8B2C7DC7D4(Local_103.f_159);
		}
	}
}

void func_192()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	
	if (func_179())
	{
		if (unk_0xAE231F549813BBDF(0))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!BitTest(Local_103.f_6, 5))
		{
			if (!BitTest(Local_103.f_6, 4))
			{
				if (unk_0x2645430E708CBFAC(2, iVar0) || unk_0x61C3701AD6D746B2(2, iVar0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_6), 4);
				}
			}
			else if (Local_103.f_13 == 1)
			{
				if (Local_103.f_244 == 2)
				{
					Var1 = { unk_0x02AF3EA0F67D2329() };
					Var2 = { unk_0x958849BB56EC0F07(2) };
					Var3 = { (-system::sin(Var2.f_2) * system::cos(Var2.f_0)), (system::cos(Var2.f_2) * system::cos(Var2.f_0)), system::sin(Var2.f_0) };
					Var4 = { 10f, 10f, 10f };
					Var5 = { Var1 + Var3 * Var4 };
					iVar6 = Global_262145.f_24236;
					if (BitTest(Local_103.f_5, 23))
					{
						iVar6 = Global_262145.f_24237;
					}
					unk_0x5733B7E88AFB2E3B(Local_103.f_150 + Vector(0f, 0f, 0f), Var5, iVar6, 1, joaat("weapon_tranquilizer"), unk_0x4A8C381C258A124D(), 1, 1, -1082130432, unk_0xAB3646235DE50E93(Local_103.f_159), 0, 0, 0, 1, 0, 0, 0);
					Local_103.f_24 = 100;
					unk_0x97A041099E92C69F(0, 300, system::round((150f * Local_103.f_131)));
					if (unk_0x9F0C06CFBACDD6A1(Local_103.f_81))
					{
						Local_103.f_81 = unk_0xCA369FBC0DE29517();
						unk_0xBD618A73193F9982(Local_103.f_81, "Remote_Perspective_Fire", unk_0xAB3646235DE50E93(Local_103.f_159), "DLC_H3_Drone_Tranq_Weapon_Sounds", 1, 0);
					}
					unk_0xBF3D28CA44F3BE2D(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", 1);
					if (BitTest(Local_103.f_5, 11) || BitTest(Local_103.f_5, 23))
					{
						Local_103.f_29++;
					}
					func_194((func_180() - 1));
					if (func_180() <= 0)
					{
						Local_103.f_24 = 0;
						unk_0x8744D2E3FC95740E(&(Local_103.f_5), 16);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_6), 5);
					func_30(&(Local_103.f_257), 0, 0);
				}
			}
		}
		else
		{
			func_193();
		}
	}
}

void func_193()
{
	int iVar0;
	int iVar1;
	
	if (func_180() > 0)
	{
		if (func_32(&(Local_103.f_257)))
		{
			iVar0 = Global_262145.f_24235;
			if (func_29(&(Local_103.f_257), iVar0, 0))
			{
				unk_0x8744D2E3FC95740E(&(Local_103.f_6), 5);
				unk_0x8744D2E3FC95740E(&(Local_103.f_6), 4);
				func_28(&(Local_103.f_257));
				Local_103.f_24 = 100;
				if (unk_0x9F0C06CFBACDD6A1(Local_103.f_35))
				{
					unk_0x8E4825CCACA34B58(Local_103.f_35);
					unk_0x394AFAC073E1F277(Local_103.f_35);
					Local_103.f_35 = -1;
				}
			}
			else
			{
				iVar1 = (100 * unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Local_103.f_257)));
				Local_103.f_24 = (iVar1 / iVar0);
			}
		}
	}
}

void func_194(int iParam0)
{
	if (Global_1956920.f_6 != iParam0)
	{
		Global_1956920.f_6 = iParam0;
	}
}

void func_195()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	Local_103.f_348.f_4 = 2;
	if (unk_0xAE231F549813BBDF(0))
	{
		Local_103.f_348.f_5 = 238;
	}
	else
	{
		Local_103.f_348.f_5 = 205;
	}
	iVar0 = Global_262145.f_24238;
	if (!BitTest(Local_103.f_5, 31))
	{
		Local_103.f_22 = 100;
	}
	if (func_31())
	{
		iVar0 = (iVar0 / 2);
		if (BitTest(Local_103.f_6, 1))
		{
			Local_103.f_21 = ((Local_103.f_23 * (Global_262145.f_24238 / 2)) / 100);
			Local_103.f_21 = ((Global_262145.f_24238 / 2) - Local_103.f_21);
			unk_0x8744D2E3FC95740E(&(Local_103.f_6), 1);
		}
		if (BitTest(Local_103.f_5, 31))
		{
			iVar0 = Local_103.f_21;
		}
	}
	else
	{
		Local_103.f_22 = 100;
	}
	if (!func_170(1))
	{
		if (!func_87() && func_196(&(Local_103.f_348), 1, iVar0, 0))
		{
			if (unk_0x9F0C06CFBACDD6A1(Local_103.f_36))
			{
				Local_103.f_36 = unk_0xCA369FBC0DE29517();
				unk_0xBD618A73193F9982(Local_103.f_36, "Destroyed", unk_0xAB3646235DE50E93(Local_103.f_159), Local_103.f_157, 1, 0);
			}
			unk_0x8875527DD4E42C07();
			iVar1 = 0;
			if (func_31())
			{
				iVar1 = 69;
			}
			unk_0x8F03CD462437C002(unk_0x4A8C381C258A124D(), Local_103.f_150, iVar1, 0,5f, 1, 0, 1065353216);
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 1)
			{
				unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), 0, 0);
				unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
			}
			unk_0x97A041099E92C69F(0, 300, system::round((200f * Local_103.f_131)));
			unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 2);
		}
	}
	if (func_32(&(Local_103.f_348)))
	{
		unk_0x97A041099E92C69F(0, 300, 20);
		if (!BitTest(Local_103.f_5, 5))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 5);
		}
		func_28(&(Local_103.f_273));
		if (!func_29(&(Local_103.f_348), iVar0, 0))
		{
			iVar2 = (Local_103.f_22 * unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Local_103.f_348)));
			if (!func_31())
			{
				Local_103.f_19 = (iVar2 / iVar0);
			}
			else if (!BitTest(Local_103.f_5, 31))
			{
				Local_103.f_19 = (iVar2 / iVar0);
			}
			else
			{
				Local_103.f_19 = (Local_103.f_23 + (iVar2 / iVar0));
			}
			if (unk_0x9F0C06CFBACDD6A1(Local_103.f_33))
			{
				Local_103.f_33 = unk_0xCA369FBC0DE29517();
				unk_0xBF3D28CA44F3BE2D(Local_103.f_33, "HUD_Detonate_Charge", Local_103.f_157, 1);
			}
		}
	}
	else if (BitTest(Local_103.f_5, 5))
	{
		unk_0x8744D2E3FC95740E(&(Local_103.f_5), 5);
		if (!func_31())
		{
			Local_103.f_19 = 0;
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 31);
			Local_103.f_22 = (100 - Local_103.f_19);
			Local_103.f_21 = (iVar0 - unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Local_103.f_348)));
			Local_103.f_23 = Local_103.f_19;
			func_28(&(Local_103.f_273));
		}
		if (Local_103.f_33 != -1)
		{
			unk_0x8E4825CCACA34B58(Local_103.f_33);
			unk_0x394AFAC073E1F277(Local_103.f_33);
			Local_103.f_33 = -1;
		}
	}
	else if (func_31())
	{
		if (Local_103.f_19 > 0)
		{
			if (Local_103.f_19 <= 2)
			{
				Local_103.f_19 = 0;
			}
			if (!func_32(&(Local_103.f_273)))
			{
				func_30(&(Local_103.f_273), 0, 0);
			}
			else
			{
				iVar3 = Global_262145.f_24238;
				if (!func_29(&(Local_103.f_273), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_103.f_22)) / system::to_float((iVar3 / unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Local_103.f_273)))));
					Local_103.f_19 = (Local_103.f_19 - system::round(fVar4));
					Local_103.f_23 = Local_103.f_19;
					Local_103.f_22 = (100 - Local_103.f_19);
					unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_6), 1);
				}
				else
				{
					Local_103.f_19 = 0;
				}
			}
		}
		else
		{
			func_28(&(Local_103.f_348));
			unk_0x8744D2E3FC95740E(&(Local_103.f_5), 31);
			unk_0x8744D2E3FC95740E(&(Local_103.f_6), 1);
		}
	}
}

int func_196(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (unk_0x6D05C5731A838CB3(uParam0->f_4, uParam0->f_5) || (unk_0x4465D55576678706(uParam0->f_4, uParam0->f_5) && iParam1))
	{
		if (!bParam3 || func_29(&(uParam0->f_2), 500, 0))
		{
			if (!func_32(uParam0))
			{
				func_30(uParam0, 0, 0);
			}
			else if (func_29(uParam0, iParam2, 0))
			{
				func_28(uParam0);
				func_28(&(uParam0->f_2));
				return 1;
			}
		}
	}
	else
	{
		func_28(uParam0);
		func_28(&(uParam0->f_2));
	}
	return 0;
}

void func_197()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	
	if (BitTest(Local_103.f_5, 24))
	{
		if (Local_103.f_13 == 1)
		{
			if (Local_103.f_244 == 2)
			{
				Var0 = { unk_0x02AF3EA0F67D2329() };
				Var1 = { unk_0x958849BB56EC0F07(2) };
				Var2 = { (-system::sin(Var1.f_2) * system::cos(Var1.f_0)), (system::cos(Var1.f_2) * system::cos(Var1.f_0)), system::sin(Var1.f_0) };
				Var3 = { 10f, 10f, 10f };
				Var4 = { Var0 + Var2 * Var3 };
				iVar5 = Global_262145.f_24236;
				if (BitTest(Local_103.f_5, 23))
				{
					iVar5 = Global_262145.f_24237;
				}
				if (func_168())
				{
					iVar5 = 1;
				}
				unk_0x5733B7E88AFB2E3B(Local_103.f_150 + Vector(0f, 0f, 0f), Var4, iVar5, 1, joaat("weapon_stungun"), unk_0x4A8C381C258A124D(), 1, 1, -1082130432, unk_0xAB3646235DE50E93(Local_103.f_159), 0, 0, 0, 1, 0, 0, 0);
				Local_103.f_18 = 100;
				Local_103.f_19 = 0;
				unk_0x97A041099E92C69F(0, 300, system::round((150f * Local_103.f_131)));
				if (unk_0x9F0C06CFBACDD6A1(Local_103.f_35))
				{
					Local_103.f_35 = unk_0xCA369FBC0DE29517();
					unk_0xBD618A73193F9982(Local_103.f_35, "Shock_Fire", unk_0xAB3646235DE50E93(Local_103.f_159), Local_103.f_157, 1, 0);
				}
				if (Local_103.f_33 != -1)
				{
					unk_0x8E4825CCACA34B58(Local_103.f_33);
					unk_0x394AFAC073E1F277(Local_103.f_33);
					Local_103.f_33 = -1;
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 4);
				func_30(&(Local_103.f_249), 0, 0);
			}
		}
	}
}

void func_198()
{
	if ((BitTest(Local_103.f_5, 24) && !BitTest(Local_103.f_5, 3)) && !Local_103.f_156)
	{
		if (unk_0x939D49C9FAA8139A("scr_xs_dr"))
		{
			if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
			{
				unk_0xD03F4780B97A39AE("scr_xs_dr");
				unk_0x51CD258B1EC7AB66("scr_xs_dr_emp", unk_0xAB3646235DE50E93(Local_103.f_159), 0f, -0,5f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
			}
		}
		Local_103.f_18 = 100;
		unk_0x97A041099E92C69F(0, 300, system::round((150f * Local_103.f_131)));
		if (unk_0x9F0C06CFBACDD6A1(Local_103.f_35))
		{
			Local_103.f_35 = unk_0xCA369FBC0DE29517();
			unk_0xBD618A73193F9982(Local_103.f_35, "Shock_Fire", unk_0xAB3646235DE50E93(Local_103.f_159), Local_103.f_157, 1, 0);
		}
		if (Local_103.f_33 != -1)
		{
			unk_0x8E4825CCACA34B58(Local_103.f_33);
			unk_0x394AFAC073E1F277(Local_103.f_33);
			Local_103.f_33 = -1;
		}
		func_199(unk_0xD1A6A821F5AC81DB(unk_0xAB3646235DE50E93(Local_103.f_159), 1), 0);
		unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 3);
		Local_103.f_156 = 1;
		func_30(&(Local_103.f_249), 0, 0);
	}
}

void func_199(struct<3> Param0, bool bParam1)
{
	struct<7> Var0;
	
	Var0.f_0 = 1872545935;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = { Param0 };
	Var0.f_6 = bParam1;
	if (!bParam1)
	{
		if (!func_200(1, 1) == 0)
		{
			unk_0x71A6F836422FDD2B(1, &Var0, 7, func_200(1, 1), Var0.f_0);
		}
	}
	else if (Global_1956920.f_21 != func_13())
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 7, func_8(Global_1956920.f_21), Var0.f_0);
	}
}

int func_200(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar1);
		if (func_26(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
				else if (!func_126(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_201()
{
	return BitTest(Global_1956920, 8);
}

int func_202()
{
	if ((unk_0x93BF17E19A9F0E9B(Local_103.f_159) && unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0)) && !BitTest(Local_103.f_5, 2))
	{
		return 1;
	}
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		if (func_173(unk_0x259BE71D8A81D4FA()) && BitTest(Global_2737663, 0))
		{
		}
		else if (func_212())
		{
			if (unk_0x14E25ED5E75102C8(unk_0xAB3646235DE50E93(Local_103.f_159)) || unk_0x28637BDE402A5913(unk_0xAB3646235DE50E93(Local_103.f_159)) != 0)
			{
				Local_103.f_26 = 1;
				return 1;
			}
		}
	}
	if (BitTest(Local_103.f_5, 2))
	{
		Local_103.f_26 = 4;
		return 1;
	}
	if (BitTest(Local_103.f_5, 9))
	{
		Local_103.f_26 = 1;
		return 1;
	}
	if (BitTest(Local_103.f_5, 7))
	{
		Local_103.f_26 = 0;
		return 1;
	}
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		if (unk_0x69799E0840A34AFB(unk_0xAB3646235DE50E93(Local_103.f_159)) || func_211(unk_0xF5014688C9788D5F(Local_103.f_159), 0))
		{
			if (BitTest(Local_103.f_5, 29))
			{
				Local_103.f_26 = 3;
				return 1;
			}
		}
	}
	if (func_209(unk_0x259BE71D8A81D4FA()))
	{
		Local_103.f_26 = 0;
		return 1;
	}
	if (func_148())
	{
		if (Global_1845120 != func_13())
		{
			if (func_53(Global_1845120))
			{
				Local_103.f_26 = 0;
				return 1;
			}
		}
	}
	if (func_208())
	{
		Local_103.f_26 = 1;
		return 1;
	}
	if (func_207(unk_0x259BE71D8A81D4FA()))
	{
		Local_103.f_26 = 0;
		return 1;
	}
	if (func_206())
	{
		Local_103.f_26 = 0;
		return 1;
	}
	if (func_205())
	{
		Local_103.f_26 = 0;
		return 1;
	}
	if (func_39())
	{
		Local_103.f_26 = 0;
		return 1;
	}
	if (func_44())
	{
		Local_103.f_26 = 0;
		return 1;
	}
	if (func_38())
	{
		if (unk_0x89568FA9A6BC0B4A(unk_0x4A8C381C258A124D(), 1))
		{
			Local_103.f_26 = 6;
			return 1;
		}
		if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) || unk_0xC00DCFE53DCBBABA(unk_0x4A8C381C258A124D()))
		{
			Local_103.f_26 = 6;
			return 1;
		}
		if (func_165(unk_0x4A8C381C258A124D(), Local_103.f_153, 1) > 2f)
		{
			Local_103.f_26 = 7;
			return 1;
		}
	}
	if (func_204())
	{
		return 1;
	}
	if (func_17())
	{
		if (func_41())
		{
			return 1;
		}
		if (func_203("AIRDEF_WARN"))
		{
			if (func_29(&(Local_103.f_346), 2000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_28(&(Local_103.f_346));
		}
	}
	return 0;
}

bool func_203(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_204()
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { -90000f, -90000f, -1600f };
	Var1 = { 90000f, 90000f, 2600f };
	if (!unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		return 0;
	}
	if (!unk_0xFCEB38AB3EDCF9BE(unk_0xAB3646235DE50E93(Local_103.f_159), Var0, Var1, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_205()
{
	return Global_98822;
}

bool func_206()
{
	return BitTest(Global_1956920, 9);
}

int func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1887305[iVar0 /*610*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_208()
{
	struct<3> Var0;
	
	if (Local_103.f_17 == joaat("v_faceoffice"))
	{
		if (func_24(unk_0xAB3646235DE50E93(Local_103.f_159)))
		{
			if (unk_0xAB74A6FE5E16479E(unk_0xAB3646235DE50E93(Local_103.f_159)) == joaat("GtaMloRoom001"))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0xAB3646235DE50E93(Local_103.f_159), 1) };
				if (Var0.f_2 >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		if (func_24(unk_0xAB3646235DE50E93(Local_103.f_159)))
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0xAB3646235DE50E93(Local_103.f_159), -1071,258f, -242,5484f, 48,02133f, -1069,456f, -245,9234f, 43,87983f, 3f, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0x5105BE70DEF1F5FB(unk_0xAB3646235DE50E93(Local_103.f_159), 2494,398f, -276,2f, -69,09f, 2494,342f, -277,4824f, -67,98756f, 0,7f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_209(int iParam0)
{
	if (iParam0 != func_13() && func_26(iParam0, 1, 1))
	{
		if (func_12(iParam0) && !func_210(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0)
{
	if (iParam0 != func_13() && func_26(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 4);
	}
	return 0;
}

int func_211(int iParam0, int iParam1)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0) || iParam1)
		{
			if (unk_0x69799E0840A34AFB(iParam0))
			{
				if (unk_0x837FF265C016E3B7(iParam0) >= 0,7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_212()
{
	return BitTest(Global_1956920, 15);
}

void func_213()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	int iVar9;
	bool bVar10;
	
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0))
	{
		if (unk_0xEADBDBE0422CF7E6(Local_103.f_159))
		{
			Var0 = { Local_103.f_150 };
			switch (Local_103.f_13)
			{
				case 0:
					Var1 = { unk_0x02AF3EA0F67D2329() };
					Var2 = { unk_0x958849BB56EC0F07(2) };
					Var3 = { (-system::sin(Var2.f_2) * system::cos(Var2.f_0)), (system::cos(Var2.f_2) * system::cos(Var2.f_0)), system::sin(Var2.f_0) };
					Var4 = { 10f, 10f, 10f };
					if (func_31())
					{
						Var4 = { Global_262145.f_24851, Global_262145.f_24851, Global_262145.f_24851 };
					}
					Var5 = { Var1 + Var3 * Var4 };
					Var0 = { unk_0xF10F2A2453AF1DFB(Local_103.f_150, unk_0xCFC0C995455A6204(unk_0xAB3646235DE50E93(Local_103.f_159)), 0f, -0,1f, 0f) };
					Local_103.f_167 = unk_0x120E577522852984(Var0, Var5, 123, unk_0xAB3646235DE50E93(Local_103.f_159), 7);
					if (Local_103.f_167 != 0)
					{
						Local_103.f_13 = 1;
					}
					break;
				
				case 1:
					Local_103.f_244 = unk_0x0E7DD1EBCA8D2DE3(Local_103.f_167, &iVar6, &Var8, &uVar7, &iVar9);
					if (Local_103.f_244 == 2)
					{
						if (iVar6 == 0)
						{
							Local_103.f_14 = 1;
							Var8 = { 0f, 0f, 0f };
							if (BitTest(Local_103.f_5, 11) && !func_31())
							{
								unk_0x8744D2E3FC95740E(&(Local_103.f_5), 11);
							}
							if (BitTest(Local_103.f_5, 23))
							{
								unk_0x8744D2E3FC95740E(&(Local_103.f_5), 23);
							}
							func_220();
						}
						else
						{
							Local_103.f_14 = 2;
							if (unk_0xFC8BFE4B41177C22(iVar9))
							{
								if (unk_0x0101C509A6E67F99(iVar9))
								{
									if (!unk_0x1C2F771CDC87A3A5(iVar9, 0))
									{
										if (unk_0x501EBB0523078750(unk_0xBD545F8729E9F413(iVar9)))
										{
											if (func_218(unk_0x259BE71D8A81D4FA(), unk_0x1C1C92A1CBAE364B(unk_0xBD545F8729E9F413(iVar9))))
											{
												bVar10 = true;
											}
										}
										else
										{
											if (!BitTest(Local_103.f_5, 23))
											{
												unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 23);
												if (BitTest(Local_103.f_5, 11) && !func_31())
												{
													unk_0x8744D2E3FC95740E(&(Local_103.f_5), 11);
												}
											}
											if (!func_100(unk_0x259BE71D8A81D4FA()) && !func_97(unk_0x259BE71D8A81D4FA()))
											{
												if ((func_217(unk_0xBD545F8729E9F413(iVar9)) || func_216(unk_0xBD545F8729E9F413(iVar9))) || func_215(unk_0xBD545F8729E9F413(iVar9)))
												{
													func_96(Global_1837320);
													func_214(&(Local_103.f_259), 0, 0);
												}
												else
												{
													func_220();
												}
											}
										}
										if ((((!BitTest(Local_103.f_5, 11) && !bVar10) && func_24(Global_1956920.f_23)) && unk_0xAD915B5E38F323E5(Global_1956920.f_23, iVar9, 511)) && (unk_0x501EBB0523078750(unk_0xBD545F8729E9F413(iVar9)) && unk_0x4A8C381C258A124D() != unk_0xBD545F8729E9F413(iVar9)))
										{
											unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 11);
											if (BitTest(Local_103.f_5, 23))
											{
												unk_0x8744D2E3FC95740E(&(Local_103.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_31())
									{
										if (BitTest(Local_103.f_5, 11))
										{
											unk_0x8744D2E3FC95740E(&(Local_103.f_5), 11);
										}
									}
									if (BitTest(Local_103.f_5, 23))
									{
										unk_0x8744D2E3FC95740E(&(Local_103.f_5), 23);
									}
									func_220();
								}
							}
							else
							{
								func_220();
							}
							Local_103.f_167 = 0;
							Local_103.f_13 = 0;
						}
					}
					else if (Local_103.f_244 == 0)
					{
						Local_103.f_13 = 0;
					}
					break;
			}
		}
		else
		{
			unk_0x460D2A8B2C7DC7D4(Local_103.f_159);
		}
	}
}

void func_214(var uParam0, bool bParam1, bool bParam2)
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

int func_215(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0x4001C3C533FE6925(iParam0) == -183807561)
		{
			return 1;
		}
	}
	return 0;
}

int func_216(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if ((((((((((((unk_0x0DFE7358172FC006(iParam0) == 7 || unk_0x0DFE7358172FC006(iParam0) == 8) || unk_0x0DFE7358172FC006(iParam0) == 9) || unk_0x0DFE7358172FC006(iParam0) == 10) || unk_0x0DFE7358172FC006(iParam0) == 11) || unk_0x0DFE7358172FC006(iParam0) == 12) || unk_0x0DFE7358172FC006(iParam0) == 13) || unk_0x0DFE7358172FC006(iParam0) == 14) || unk_0x0DFE7358172FC006(iParam0) == 15) || unk_0x0DFE7358172FC006(iParam0) == 16) || unk_0x0DFE7358172FC006(iParam0) == 17) || unk_0x0DFE7358172FC006(iParam0) == 18) || unk_0x0DFE7358172FC006(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_217(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if ((((unk_0x0DFE7358172FC006(iParam0) == 6 || unk_0x0DFE7358172FC006(iParam0) == 29) || unk_0x0DFE7358172FC006(iParam0) == 27) || unk_0x4001C3C533FE6925(iParam0) == joaat("army")) || unk_0x4001C3C533FE6925(iParam0) == joaat("COP"))
		{
			return 1;
		}
	}
	return 0;
}

int func_218(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_219(iParam0);
	if (func_9(iVar0))
	{
		if (iVar0 == func_219(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0)
{
	if (func_9(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_13();
}

void func_220()
{
	if (func_32(&(Local_103.f_259)))
	{
		if (func_29(&(Local_103.f_259), 60000, 0))
		{
			func_28(&(Local_103.f_259));
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) <= 0)
			{
				func_96(Global_1837309);
			}
		}
	}
}

void func_221()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	var uVar9;
	struct<3> Var10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (((func_42() || func_31()) || func_45()) || func_17())
	{
		if (!BitTest(Local_103.f_5, 29))
		{
			return;
		}
	}
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0))
	{
		if (unk_0x73DB31FD24210A89(unk_0xAB3646235DE50E93(Local_103.f_159)))
		{
			return;
		}
		if (unk_0xEADBDBE0422CF7E6(Local_103.f_159))
		{
			switch (Local_103.f_11)
			{
				case 0:
					if ((func_31() || func_45()) || func_42())
					{
						fVar5 = 0,3f;
					}
					else if (func_17())
					{
						fVar5 = 0,65f;
					}
					else
					{
						fVar5 = (func_224(Local_103.f_240) * 1,5f);
					}
					if (func_93())
					{
						Var6 = { Local_103.f_150 };
						Var1 = { unk_0x02AF3EA0F67D2329() };
						Var2 = { unk_0x958849BB56EC0F07(2) };
						Var3 = { (-system::sin(Var2.f_2) * system::cos(Var2.f_0)), (system::cos(Var2.f_2) * system::cos(Var2.f_0)), system::sin(Var2.f_0) };
						Var4 = { 0,9f, 0,9f, 0,9f };
						if (func_17())
						{
							Var4 = { 1,9f, 1,9f, 1,9f };
						}
						Var7 = { Var1 + Var3 * Var4 };
					}
					else
					{
						Var6 = { Local_103.f_150 };
						Var7 = { Local_103.f_150 };
					}
					Local_103.f_166 = unk_0x26C582EF5CD8A3A2(Var6, Var7, fVar5, 511, unk_0xAB3646235DE50E93(Local_103.f_159), 4);
					if (Local_103.f_166 != 0)
					{
						Local_103.f_11 = 1;
					}
					break;
				
				case 1:
					iVar12 = unk_0x0E7DD1EBCA8D2DE3(Local_103.f_166, &iVar8, &Var10, &uVar9, &iVar11);
					if (iVar12 == 2)
					{
						if (iVar8 == 0)
						{
							Local_103.f_12 = 1;
							Var10 = { 0f, 0f, 0f };
						}
						else
						{
							if (unk_0xFC8BFE4B41177C22(iVar11))
							{
								if (unk_0x55B80B6E7AB61270(iVar11))
								{
									if (!unk_0x1C2F771CDC87A3A5(iVar11, 0) && unk_0x4B423FAA24E8ABF0(iVar11) != Local_103.f_240)
									{
										if (unk_0xDF93B3CFAC96698F(iVar11) > 0,5f || func_222(unk_0x4B423FAA24E8ABF0(iVar11)))
										{
											if (!BitTest(Local_103.f_5, 9))
											{
												unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 9);
											}
										}
									}
								}
								else if (unk_0x0101C509A6E67F99(iVar11))
								{
									if (!unk_0x1C2F771CDC87A3A5(iVar11, 0))
									{
										if (!unk_0x501EBB0523078750(unk_0xBD545F8729E9F413(iVar11)))
										{
											if (Local_103.f_28 == 0)
											{
												iVar0 = unk_0xC5935DFB3F39785A(0, 3);
												if (iVar0 == 0)
												{
													iVar13 = 85;
												}
												else if (iVar0 == 1)
												{
													iVar13 = 90;
												}
												else
												{
													iVar13 = 79;
												}
												Local_103.f_28 = unk_0x18B384412B836744(iVar13, Local_103.f_150, 5000f);
												func_214(&(Local_103.f_265), 0, 0);
											}
										}
									}
								}
							}
							Local_103.f_12 = 2;
							unk_0x97A041099E92C69F(0, 300, 50);
							Local_103.f_166 = 0;
							Local_103.f_11 = 0;
						}
					}
					else if (iVar12 == 0)
					{
						Local_103.f_11 = 0;
					}
					break;
			}
			if (Local_103.f_28 != 0)
			{
				if (func_32(&(Local_103.f_265)))
				{
					if (func_29(&(Local_103.f_265), 5000, 0))
					{
						unk_0x6E8A7BB566D1F7AF(Local_103.f_28);
						func_28(&(Local_103.f_265));
						Local_103.f_28 = 0;
					}
				}
			}
		}
		else
		{
			unk_0x460D2A8B2C7DC7D4(Local_103.f_159);
		}
	}
}

int func_222(int iParam0)
{
	switch (iParam0)
	{
		case joaat("chernobog"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 1;
			break;
	}
	if (func_223(iParam0, 1))
	{
		return 1;
	}
	if (unk_0xBA16CD57E37AC32A(iParam0) || unk_0x00C6FDED3EB75117(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14701)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14702)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14700)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14703)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14705)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14704)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18948)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18950)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18954)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18951)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18958)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18956)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18961)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20834)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20835)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

float func_224(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	func_225(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	return unk_0x1D5CD3EAAA7422B0((Var0.f_2 - Var1.f_2));
}

void func_225(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x441B9C85D0FFA9ED(iParam0))
	{
		unk_0xC93BAF616F1C680F(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_228(iParam0);
		if (iVar0 != 0)
		{
			func_226(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (system::vmag(*uParam1) <= 0,01f || system::vmag(*uParam2) <= 0,01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20,7f)
			{
				fParam4 = 20,7f;
			}
			if (fParam3 < 137,2f)
			{
				fParam3 = 137,2f;
			}
			if (fParam5 < 21,1f)
			{
				fParam5 = 21,1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0,5f));
		*uParam2 = (0f + (fParam4 * 0,5f));
		uParam1->f_1 = (0f - (fParam3 * 0,5f));
		uParam2->f_1 = (0f + (fParam3 * 0,5f));
		uParam1->f_2 = (0f - (fParam5 * 0,5f));
		uParam2->f_2 = (0f + (fParam5 * 0,5f));
	}
}

void func_226(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_227(iParam0, &Global_1578033);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x441B9C85D0FFA9ED(Global_1578033[iVar0]))
		{
			unk_0xC93BAF616F1C680F(Global_1578033[iVar0], &(Global_1578037[iVar0 /*3*/]), &(Global_1578044[iVar0 /*3*/]));
		}
		if (system::vmag(Global_1578037[iVar0 /*3*/]) <= 0,01f || system::vmag(Global_1578044[iVar0 /*3*/]) <= 0,01f)
		{
			Global_1578037[iVar0 /*3*/] = (0f - (fParam4 * 0,5f));
			Global_1578044[iVar0 /*3*/] = (0f + (fParam4 * 0,5f));
			Global_1578037[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0,5f));
			Global_1578044[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0,5f));
			Global_1578037[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0,5f));
			Global_1578044[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0,5f));
		}
		Global_1578051[iVar0] = (Global_1578044[iVar0 /*3*/] - Global_1578037[iVar0 /*3*/]);
		Global_1578054[iVar0] = (Global_1578044[iVar0 /*3*/].f_1 - Global_1578037[iVar0 /*3*/].f_1);
		Global_1578057[iVar0] = (Global_1578044[iVar0 /*3*/].f_2 - Global_1578037[iVar0 /*3*/].f_2);
		if (Global_1578051[iVar0] > Global_1578060)
		{
			Global_1578060 = Global_1578051[iVar0];
		}
		if (Global_1578057[iVar0] > Global_1578061)
		{
			Global_1578061 = Global_1578057[iVar0];
		}
		iVar0++;
	}
	Global_1578062 = (Global_1578060 * -0,5f);
	Global_1578065 = (Global_1578060 * 0,5f);
	Global_1578062.f_1 = ((((0,5f * Global_1578054[0]) + Global_1578054[1]) + Global_1578033.f_3) * -1f);
	Global_1578065.f_1 = (0,5f * Global_1578054[0]);
	Global_1578062.f_2 = (Global_1578057[0] * -0,5f);
	Global_1578065.f_2 = (Global_1578057[0] * 0,5f);
	*uParam1 = { Global_1578062 };
	*uParam2 = { Global_1578065 };
}

void func_227(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2,6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2,6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0,5f;
			break;
	}
}

int func_228(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_229(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_229(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_230()
{
	int iVar0;
	
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		if (func_24(unk_0xAB3646235DE50E93(Local_103.f_159)))
		{
			iVar0 = func_233(unk_0xAB3646235DE50E93(Local_103.f_159));
			if (iVar0 != -1)
			{
				if (!func_232(&(Global_1835505.f_396), iVar0) && !func_232(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_537), iVar0))
				{
					func_231(1);
				}
			}
		}
	}
}

void func_231(bool bParam0)
{
	if (bParam0)
	{
		if (func_85())
		{
			if (!BitTest(Global_1956920, 9))
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 9);
			}
		}
	}
	else if (BitTest(Global_1956920, 9))
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 9);
	}
}

bool func_232(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest((*uParam0)[iVar0], iVar1);
}

int func_233(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		iVar0 = func_237(iParam0);
		if (iVar0 != -1)
		{
			return iVar0;
		}
		iVar1 = unk_0xF8F35890F43ED2AE(iParam0);
		if (iVar1 != 0)
		{
			iVar2 = 0;
			while (iVar2 < 43)
			{
				iVar3 = iVar2;
				func_234(iVar3);
				if (Global_1948680[iVar2] == iVar1)
				{
					return iVar3;
				}
				iVar2++;
			}
		}
	}
	return -1;
}

void func_234(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1948680[iVar0] == 0)
	{
		Global_1948680[iVar0] = unk_0x0556019E7EE8EC9A(func_236(iParam0), func_235(iParam0));
	}
}

char* func_235(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		case 34:
			return "v_foundry";
		
		case 35:
			return "v_refit";
		
		case 36:
			return "hei_int_mph_carrierhang3";
		
		case 37:
			return "hei_int_mph_carrierhang2";
		
		case 38:
			return "hei_int_mph_carrierhang1";
		
		case 39:
			return "hei_int_mph_carrierupper";
		
		case 40:
			return "hei_int_mph_carriercontrol1";
		
		case 41:
			return "hei_int_mph_carriercontrol2";
		
		case 42:
			return "ch3_01_trlr_int";
		
		default:
	}
	return "";
}

Vector3 func_236(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 983,2747f, -99,3188f, 73,8454f;
		
		case 0:
			return 443,2281f, -984,0744f, 29,6896f;
		
		case 2:
			return -1216,762f, -333,0008f, 36,8508f;
		
		case 3:
			return 145,4168f, -1039,277f, 28,4379f;
		
		case 4:
			return 309,7465f, -277,6442f, 53,2346f;
		
		case 5:
			return -355,4359f, -48,5326f, 48,1064f;
		
		case 6:
			return -109,4503f, 6467,768f, 30,4388f;
		
		case 7:
			return 1179,745f, 2706,985f, 37,1578f;
		
		case 8:
			return -2962,591f, 478,238f, 14,7669f;
		
		case 9:
			return -556,5089f, 286,3181f, 81,1763f;
		
		case 10:
			return -76,6618f, 6222,191f, 32,2412f;
		
		case 11:
			return -100,7106f, 6205,7f, 30,0499f;
		
		case 12:
			return -125,6972f, 6172,923f, 30,0499f;
		
		case 13:
			return -162,4785f, 6155,384f, 30,0499f;
		
		case 14:
			return 2449,785f, 4983,825f, 45,8106f;
		
		case 15:
			return -1426,362f, 6754,506f, 11,7821f;
		
		case 16:
			return -583,2097f, -1599,302f, 26,3052f;
		
		case 17:
			return 3522,845f, 3707,965f, 19,9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853,625f, 3687,826f, 33,2671f;
		
		case 22:
			return -447,5651f, 6013,988f, 30,7164f;
		
		case 23:
			return -28,1023f, -688,8687f, 34,4437f;
		
		case 24:
			return -40,2938f, -1097,321f, 25,4223f;
		
		case 27:
			return -1074,853f, -250,3996f, 36,7388f;
		
		case 25:
			return 982,233f, -2160,382f, 28,4761f;
		
		case 26:
			return -630,4205f, -236,7843f, 37,057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078,561f, -1678,615f, 3,5752f;
		
		case 30:
			return 479,88f, -1318,57f, 28,2f;
		
		case 31:
			return 1392,512f, 3603,185f, 38,5f;
		
		case 32:
			return 105,4557f, -745,4835f, 44,7548f;
		
		case 33:
			return 3522,845f, 3707,965f, 19,9918f;
		
		case 34:
			return 1087,195f, -1988,445f, 28,649f;
		
		case 35:
			return -583,1606f, -282,3967f, 35,394f;
		
		case 36:
			return 3053,565f, -4653,67f, 5,0773f;
		
		case 37:
			return 3058,002f, -4700,8f, 5,0773f;
		
		case 38:
			return 3080,619f, -4772,69f, 5,0773f;
		
		case 39:
			return 3088,469f, -4708,33f, 20,567f;
		
		case 40:
			return 3085,222f, -4690,66f, 26,2522f;
		
		case 41:
			return 3092,459f, -4711,389f, 26,2657f;
		
		case 42:
			return 2329,242f, 2571,494f, 45,6772f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_237(int iParam0)
{
	if (func_244(iParam0))
	{
		return 15;
	}
	if (func_242(iParam0))
	{
		return 28;
	}
	if (func_240(iParam0))
	{
		return 36;
	}
	if (func_239(iParam0))
	{
		return 23;
	}
	if (func_238(iParam0))
	{
		return 33;
	}
	return -1;
}

int func_238(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if ((unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 3833,558f, 3666,702f, -20,91209f, 3818,202f, 3654,002f, -26,37315f, 12,25f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 3765,784f, 3661,946f, -15,33658f, 3823,827f, 3654,624f, -24,84368f, 13,75f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 3519,188f, 3724,821f, -0,487321f, 3767,179f, 3661,705f, -32,33569f, 115f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_239(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(iParam0, 1), -16,2669f, -685,4531f, 31,3381f, 1) <= 80f)
		{
			if ((((((unk_0x5105BE70DEF1F5FB(iParam0, -73,06738f, -689,2972f, 31,96555f, -68,41993f, -676,6198f, 36,63721f, 4,25f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(iParam0, 25,07854f, -664,3469f, 30,40673f, 14,14475f, -690,1883f, 38,61758f, 16f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(iParam0, -18,7689f, -659,366f, 30,79917f, -15,31378f, -703,7052f, 38,08809f, 54,5f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(iParam0, 9,119493f, -710,9459f, 30,83068f, -39,76558f, -693,0358f, 38,08809f, 24,25f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(iParam0, -69,84457f, -683,3396f, 30,70474f, -39,69342f, -690,2305f, 36,58809f, 17,25f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(iParam0, -43,32302f, -693,9668f, 30,58809f, -72,39151f, -683,4483f, 39,48361f, 20f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(iParam0, -39,63783f, -686,181f, 30,58809f, -39,30408f, -662,2571f, 39,48083f, 20f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_240(int iParam0)
{
	return ((!unk_0x1C2F771CDC87A3A5(iParam0, 0) && unk_0x65FFA94B82A71741(iParam0, 3042,596f, -4667,915f, 34,26143f, 250f, 300f, 40f, 0, 1, 0)) || func_241());
}

int func_241()
{
	if (!unk_0x15CCE8886267624F())
	{
		if (system::vdist2(func_6(unk_0x259BE71D8A81D4FA()), 3042,596f, -4667,915f, 34,26143f) <= 25600f)
		{
			if (unk_0x7B780C491DEC834E(3042,596f, -4667,915f, 34,26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_242(int iParam0)
{
	return ((!unk_0x1C2F771CDC87A3A5(iParam0, 0) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -2016,6f, -1039,867f, -3,801932f, -2129,956f, -1003,351f, 22,18234f, 15,75f, 0, 1, 0)) || func_243());
}

int func_243()
{
	struct<3> Var0;
	
	if (!unk_0x15CCE8886267624F())
	{
		Var0 = { -2073,541f, -1021,104f, 14,99213f };
		if (system::vdist2(func_6(unk_0x259BE71D8A81D4FA()), Var0) <= 25600f)
		{
			if (unk_0x7B780C491DEC834E(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_244(int iParam0)
{
	return ((!unk_0x1C2F771CDC87A3A5(iParam0, 0) && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Vector(-3,801932f, -1039,867f, -2016,6f) + Vector(0f, 7773,967f, 654,731f), Vector(22,18234f, -1003,351f, -2129,956f) + Vector(0f, 7773,967f, 654,731f), 15,75f, 0, 1, 0)) || func_245());
}

int func_245()
{
	struct<3> Var0;
	
	if (!unk_0x15CCE8886267624F())
	{
		Var0 = { Vector(-3,801932f, -1039,867f, -2016,6f) + Vector(0f, 7773,967f, 654,731f) };
		if (system::vdist2(func_6(unk_0x259BE71D8A81D4FA()), Var0) <= 25600f)
		{
			if (unk_0x7B780C491DEC834E(Var0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_246(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_42())
	{
		return;
	}
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		if (unk_0x78411E34CF90EA8C(Local_103.f_169) && unk_0xBC886554B5888A64(Local_103.f_169))
		{
			if (unk_0x8DE2438443E6A145(Local_103.f_169) || iParam0)
			{
				if (!func_87())
				{
					func_81(0);
				}
				func_257(1);
				if ((!func_256() || BitTest(Local_103.f_5, 1)) || func_202())
				{
					unk_0x43AE50D2A33F6E2A();
				}
				else
				{
					unk_0x4EB223432F8FA0A0(9);
					unk_0x4EB223432F8FA0A0(7);
					unk_0x4EB223432F8FA0A0(8);
					func_90();
					func_254(1);
					uVar0 = unk_0xF8F35890F43ED2AE(unk_0xF5014688C9788D5F(Local_103.f_159));
					if (unk_0xF8A8852F99E201DD(uVar0))
					{
						Global_1956920.f_24 = uVar0;
						if (!BitTest(Local_103.f_5, 8))
						{
							Local_103.f_123 = func_253(unk_0xB70C73407E942734(uVar0));
							unk_0x97A631B5F81A6197(uVar0, &(Local_103.f_147), &(Local_103.f_17));
							unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 8);
						}
						iVar1 = 0;
						if (func_252(Local_103.f_150.f_2, 43f, 48,7f))
						{
							iVar1 = 1;
						}
						if (Global_1956920.f_9 == -1f)
						{
							unk_0xC4C6378884E06FBD(1f);
						}
						else
						{
							unk_0xC4C6378884E06FBD(Global_1956920.f_9);
						}
						if ((!func_173(unk_0x259BE71D8A81D4FA()) && !func_249(unk_0x259BE71D8A81D4FA())) && !func_17())
						{
							if (!func_248())
							{
								func_247(1);
							}
						}
						if (!func_17())
						{
							unk_0xC2F71CC2AB70CFB1(0, 0);
						}
						unk_0xF42A811582CF3AE1(Local_103.f_17, Local_103.f_147, Local_103.f_147.f_1, system::floor(Local_103.f_123), iVar1);
					}
					else
					{
						Local_103.f_17 = -1;
						if (Global_1956920.f_9 == -1f)
						{
							unk_0xC4C6378884E06FBD(0f);
						}
						else
						{
							unk_0xC4C6378884E06FBD(Global_1956920.f_9);
						}
						if (!func_248() && !func_17())
						{
							func_247(1);
						}
						if (!func_17())
						{
							unk_0xC2F71CC2AB70CFB1(0, 0);
						}
						Global_1956920.f_24 = -1;
						if (BitTest(Local_103.f_5, 8))
						{
							unk_0x8744D2E3FC95740E(&(Local_103.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_247(int iParam0)
{
	Global_2698794 = iParam0;
}

bool func_248()
{
	return Global_2698794;
}

int func_249(int iParam0)
{
	if (func_251(iParam0))
	{
		return 1;
	}
	if (func_250(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_101(iParam0, 9);
	}
	return 0;
}

int func_251(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

int func_252(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_253(float fParam0)
{
	return (fParam0 * 57,29578f);
}

void func_254(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_101585.f_8 = 1;
	}
	else
	{
		Global_101585.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_255(iVar0);
		iVar0++;
	}
}

void func_255(int iParam0)
{
	Global_101585.f_205[iParam0] = 1;
	Global_101585.f_204 = 1;
}

bool func_256()
{
	return BitTest(Global_1956920, 4);
}

void func_257(int iParam0)
{
	if (Global_2738934.f_4675 != iParam0)
	{
		Global_2738934.f_4675 = iParam0;
	}
}

void func_258()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var15;
	float fVar16;
	struct<3> Var17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	struct<3> Var22;
	struct<3> Var23;
	float fVar24;
	float fVar25;
	var uVar26;
	var uVar27;
	struct<3> Var28;
	
	if ((BitTest(Local_103.f_5, 1) || func_202()) || func_93())
	{
		return;
	}
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0))
	{
		if (unk_0xEADBDBE0422CF7E6(Local_103.f_159))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = unk_0x5E674CD80769B53A(unk_0xAB3646235DE50E93(Local_103.f_159));
			fVar5 = unk_0xED4193081E867405(unk_0xAB3646235DE50E93(Local_103.f_159));
			if (func_37())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * system::timestep());
			func_263();
			unk_0xE0EEB603997F273F(2);
			func_262(&(Local_103[0]), &(Local_103[1]), &(Local_103[2]), &(Local_103[3]), 0, 0);
			if (unk_0xAE231F549813BBDF(0))
			{
				iVar3 = 5;
				Local_103[2] = (Local_103[2] * iVar3);
				Local_103[3] = (Local_103[3] * iVar3);
			}
			if (unk_0x660D0B8C8AE85314())
			{
				Local_103[3] = (Local_103[3] * -1);
			}
			if (func_29(&(Local_103.f_277), 750, 0))
			{
				if (!unk_0xAE231F549813BBDF(0))
				{
					bVar7 = unk_0xDEE3EFEA31A1F555(0, 210);
				}
				else
				{
					bVar7 = (unk_0xDEE3EFEA31A1F555(0, 241) || unk_0xDEE3EFEA31A1F555(0, 242));
					if (unk_0xDEE3EFEA31A1F555(0, 241))
					{
						bVar8 = true;
					}
				}
				if (bVar7)
				{
					func_214(&(Local_103.f_277), 0, 0);
				}
			}
			if (bVar7 && !func_261())
			{
				if (!unk_0xAE231F549813BBDF(0))
				{
					Local_103.f_25++;
				}
				else if (bVar8)
				{
					Local_103.f_25 = (Local_103.f_25 - 1);
				}
				else
				{
					Local_103.f_25++;
				}
				if (unk_0x9F0C06CFBACDD6A1(Local_103.f_39))
				{
					Local_103.f_39 = unk_0xCA369FBC0DE29517();
					unk_0xBF3D28CA44F3BE2D(Local_103.f_39, "HUD_Zoom_Change", Local_103.f_157, 1);
				}
				if (Local_103.f_25 > 2)
				{
					Local_103.f_25 = 0;
				}
				else if (Local_103.f_25 < 0)
				{
					Local_103.f_25 = 2;
				}
			}
			else if (unk_0x9F0C06CFBACDD6A1(Local_103.f_39))
			{
				unk_0x8E4825CCACA34B58(Local_103.f_39);
				unk_0x394AFAC073E1F277(Local_103.f_39);
				Local_103.f_39 = -1;
			}
			Local_103.f_128 = (Local_103.f_128 + (((Local_103.f_126 - Local_103.f_128) * 0,06f) * fVar6));
			unk_0x58BDA5D9262F5D30(Local_103.f_169, Local_103.f_128);
			if (Local_103[2] != 0 || Local_103[3] != 0)
			{
				if (Local_103[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_103[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_103[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_103[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				Var14 = { unk_0x88124E0D60FB8D11(unk_0xAB3646235DE50E93(Local_103.f_159), 2) };
				fVar11 = (((fVar10 * 0,05f) * fVar6) * Local_103.f_130);
				fVar12 = -(((fVar9 * 0,05f) * fVar6) * Local_103.f_130);
				if ((fVar4 != 0f || Local_103[0] != 0) && !func_87())
				{
					if (Local_103[0] != 0)
					{
						fVar16 = (1f / (127f / IntToFloat(Local_103[0])));
						fVar13 = -(((fVar16 * 0,05f) * fVar6) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0,1f || fVar4 < -0,1f)
						{
							if (fVar4 > 0f)
							{
								fVar16 = -1f;
							}
							else
							{
								fVar16 = 1f;
							}
						}
						if (Var14.f_1 != 0f)
						{
							if (Var14.f_1 < 1,5f && Var14.f_1 > 0f)
							{
								fVar16 = 0,001f;
							}
							else if (Var14.f_1 > -1,5f && Var14.f_1 < 0f)
							{
								fVar16 = -0,001f;
							}
						}
						else
						{
							fVar16 = 0f;
						}
						fVar13 = -(((fVar16 * 0,05f) * fVar6) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar13 = 0f;
				}
				Var15 = { Vector(fVar12, fVar13, fVar11) + Var14 };
				if (fVar4 != 0f)
				{
					if (Local_103[0] == 0)
					{
						if (Var15.f_1 > fVar1)
						{
							Var15.f_1 = fVar1;
						}
						else if (Var15.f_1 < -fVar1)
						{
							Var15.f_1 = -fVar1;
						}
					}
					else if (Var15.f_1 > fVar1)
					{
						Var15.f_1 = fVar1;
					}
					else if (Var15.f_1 < -fVar1)
					{
						Var15.f_1 = -fVar1;
					}
				}
				if (Var15.f_0 > fVar2)
				{
					Var15.f_0 = fVar2;
				}
				else if (Var15.f_0 < -fVar2)
				{
					Var15.f_0 = -fVar2;
				}
				if (!BitTest(Local_103.f_5, 12))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 12);
				}
				unk_0xCF39804E8C88080E(unk_0xAB3646235DE50E93(Local_103.f_159), Vector(0f, 0f, 0f) + Vector(Var15.f_2, Var15.f_1, Var15.f_0), 2, 1);
			}
			else if (((Local_103[0] != 0 || Local_103[1] != 0) && !func_261()) && !func_87())
			{
				Var17 = { unk_0x88124E0D60FB8D11(unk_0xAB3646235DE50E93(Local_103.f_159), 2) };
				if (func_261())
				{
					if (func_260())
					{
						fVar19 = -1f;
						Local_103.f_129 = fVar19;
					}
				}
				else
				{
					if (Local_103[0] != 0)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_103[0])));
						Local_103.f_129 = fVar18;
					}
					else
					{
						fVar18 = 0f;
					}
					if (Local_103[1] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_103[1])));
						Local_103.f_129 = fVar18;
					}
					else
					{
						fVar19 = 0f;
					}
				}
				fVar20 = -(((fVar19 * 0,05f) * fVar6) * fVar0);
				fVar21 = -(((fVar18 * 0,05f) * fVar6) * fVar0);
				if (fVar4 != 0f)
				{
					if ((Local_103[0] == 0 && !func_87()) || func_261())
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar18 = -1f;
							}
							else
							{
								fVar18 = 1f;
							}
						}
						if (Var17.f_1 < 1,5f && Var17.f_1 > 0f)
						{
							fVar18 = 0,001f;
						}
						else if (Var17.f_1 > -1,5f && Var17.f_1 < 0f)
						{
							fVar18 = -0,001f;
						}
						fVar21 = -(((fVar18 * 0,05f) * fVar6) * (fVar0 - 25f));
					}
				}
				Var22 = { Vector(0f, fVar21, fVar20) + Var17 };
				if (Var22.f_1 > fVar1)
				{
					Var22.f_1 = fVar1;
				}
				else if (Var22.f_1 < -fVar1)
				{
					Var22.f_1 = -fVar1;
				}
				if (Var22.f_0 > fVar2)
				{
					Var22.f_0 = fVar2;
				}
				else if (Var22.f_0 < -fVar2)
				{
					Var22.f_0 = -fVar2;
				}
				if (BitTest(Local_103.f_5, 12))
				{
					unk_0x8744D2E3FC95740E(&(Local_103.f_5), 12);
				}
				unk_0xCF39804E8C88080E(unk_0xAB3646235DE50E93(Local_103.f_159), Vector(0f, 0f, 0f) + Vector(Var17.f_2, Var22.f_1, Var22.f_0), 2, 1);
			}
			else if (!func_260() && !func_261())
			{
				Local_103.f_129 = 0f;
				Var23 = { unk_0x88124E0D60FB8D11(unk_0xAB3646235DE50E93(Local_103.f_159), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var23.f_1 != 0f)
					{
						if (Var23.f_1 < 0f)
						{
							fVar24 = -1f;
						}
						else
						{
							fVar24 = 1f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var23.f_0 < 0f)
						{
							fVar25 = -1f;
						}
						else
						{
							fVar25 = 1f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (Var23.f_1 != 0f)
					{
						if (Var23.f_1 < 1,5f && Var23.f_1 > 0f)
						{
							fVar24 = 0,001f;
						}
						else if (Var23.f_1 > -1,5f && Var23.f_1 < 0f)
						{
							fVar24 = -0,001f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (Var23.f_0 != 0f)
					{
						if (Var23.f_0 < 1,5f && Var23.f_0 > 0f)
						{
							fVar25 = 0,001f;
						}
						else if (Var23.f_0 > -1,5f && Var23.f_0 < 0f)
						{
							fVar25 = -0,001f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					uVar26 = func_259(-(((fVar25 * 0,05f) * fVar6) * (fVar0 - 25f)));
					uVar27 = func_259(-(((fVar24 * 0,05f) * fVar6) * (fVar0 - 25f)));
					Var28 = { Vector(0f, uVar27, uVar26) + Var23 };
					if (BitTest(Local_103.f_5, 12))
					{
						Var28.f_0 = Var23.f_0;
					}
					unk_0xCF39804E8C88080E(unk_0xAB3646235DE50E93(Local_103.f_159), Vector(0f, 0f, 0f) + Vector(Var23.f_2, Var28.f_1, Var28.f_0), 2, 1);
				}
			}
		}
		else
		{
			unk_0x460D2A8B2C7DC7D4(Local_103.f_159);
		}
	}
}

float func_259(float fParam0)
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

bool func_260()
{
	return BitTest(Local_103.f_5, 22);
}

bool func_261()
{
	return BitTest(Local_103.f_5, 21);
}

void func_262(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = system::floor((unk_0x4AAE7492E7D81A57(2, 218) * 127f));
	*uParam1 = system::floor((unk_0x4AAE7492E7D81A57(2, 219) * 127f));
	*uParam2 = system::floor((unk_0x4AAE7492E7D81A57(2, 220) * 127f));
	*uParam3 = system::floor((unk_0x4AAE7492E7D81A57(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x5CCBA474776568B7(2, 218))
		{
			*uParam0 = system::floor((unk_0xC3B77DE416935168(2, 218) * 127f));
		}
		if (!unk_0x5CCBA474776568B7(2, 219))
		{
			*uParam1 = system::floor((unk_0xC3B77DE416935168(2, 219) * 127f));
		}
		if (!unk_0x5CCBA474776568B7(2, 220))
		{
			*uParam2 = system::floor((unk_0xC3B77DE416935168(2, 220) * 127f));
		}
		if (!unk_0x5CCBA474776568B7(2, 221))
		{
			*uParam3 = system::floor((unk_0xC3B77DE416935168(2, 221) * 127f));
		}
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		if (bParam5)
		{
			if (unk_0x660D0B8C8AE85314())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0xDD087A873D2E08F0())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_263()
{
	if (func_148())
	{
		switch (Local_103.f_25)
		{
			case 0:
				Local_103.f_127 = 90f;
				Local_103.f_126 = 90f;
				break;
			
			case 1:
				Local_103.f_127 = 75f;
				Local_103.f_126 = 75f;
				break;
			
			case 2:
				Local_103.f_127 = 45f;
				Local_103.f_126 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_103.f_25)
		{
			case 0:
				Local_103.f_127 = 90f;
				Local_103.f_126 = 90f;
				break;
			
			case 1:
				Local_103.f_127 = 80f;
				Local_103.f_126 = 80f;
				break;
			
			case 2:
				Local_103.f_127 = 70f;
				Local_103.f_126 = 70f;
				break;
			}
	}
}

void func_264()
{
	int iVar0;
	int iVar1;
	
	if (func_79(unk_0x259BE71D8A81D4FA(), 0))
	{
		iVar0 = func_189(0);
		Local_103.f_141 = { func_267(&Local_103) };
		if (!unk_0xFC8BFE4B41177C22(Local_103.f_162))
		{
			if (!func_266(Local_103.f_141))
			{
				if (func_188(iVar0))
				{
					Local_103.f_162 = unk_0x4E55EAB577C13329(iVar0, Local_103.f_141, 0, 0, 1);
					unk_0x62C438C53BB57AFD(Local_103.f_162, Local_103.f_141, 0, 0, 1);
					unk_0x44C48AC14D3C09ED(Local_103.f_162, true, 0);
					unk_0x788F35D395511DFE(Local_103.f_162, 1, 1);
					unk_0x3A95CBA6857C4C37(Local_103.f_162, 1);
					unk_0x5C96CEA06531AB03(Local_103.f_162, func_265());
					unk_0x5D7CD709B34C90F0(Local_103.f_162, true);
					unk_0x4285E11B28063EE0(Local_103.f_162, false, 0);
					unk_0x55098D9E9AD58806(iVar0);
				}
			}
		}
		else
		{
			iVar1 = unk_0x8366ABB82B1ABC59(Local_103.f_141, 2f, iVar0, 0, 0, 0);
			if (unk_0xFC8BFE4B41177C22(iVar1) && iVar1 != Local_103.f_162)
			{
				if (unk_0x1B1A446EFA398EB5(iVar1))
				{
					unk_0x52528272B59EBA11(iVar1, 0, 0);
					unk_0x5D7CD709B34C90F0(iVar1, true);
					unk_0x4285E11B28063EE0(iVar1, true, 0);
				}
				else
				{
					unk_0xF093E270C0B6B318(iVar1);
				}
			}
		}
	}
	else
	{
		Local_103.f_141 = { func_267(&Local_103) };
	}
}

float func_265()
{
	if (Global_1956920.f_7 != 0f)
	{
		return Global_1956920.f_7;
	}
	return 0f;
}

int func_266(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_267(var uParam0)
{
	if (!func_266(Global_1956920.f_10))
	{
		return Global_1956920.f_10;
	}
	else
	{
		return uParam0->f_141;
	}
	return 0f, 0f, 0f;
}

void func_268()
{
	if (Local_103.f_33 != -1)
	{
		unk_0x8E4825CCACA34B58(Local_103.f_33);
		unk_0x394AFAC073E1F277(Local_103.f_33);
		Local_103.f_33 = -1;
	}
}

int func_269(bool bParam0)
{
	if (unk_0x4D9174D8796EA622() || unk_0x2B8BAF9BA2A3D36B())
	{
		return 1;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return 1;
	}
	if (func_181())
	{
		return 1;
	}
	if (func_274(unk_0x259BE71D8A81D4FA()) && !func_273())
	{
		return 1;
	}
	if (func_173(unk_0x259BE71D8A81D4FA()))
	{
		if (BitTest(Global_2737663, 0))
		{
			return 1;
		}
	}
	if (Global_1928440 || Global_1574972)
	{
		func_272(1);
		return 1;
	}
	if (((func_270(0) || func_178(1)) || func_177()) && !bParam0)
	{
		func_81(0);
		func_90();
		func_109();
		return 1;
	}
	return 0;
}

int func_270(bool bParam0)
{
	if (unk_0x22C925E7C63C5628())
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (func_271(unk_0x4A8C381C258A124D()))
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

int func_271(int iParam0)
{
	int iVar0;
	
	if (unk_0x5EA7A06A1491D450())
	{
		if (!unk_0x4FAFF4BCB7633475(iParam0))
		{
			unk_0x23B29877D0BE9547(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_272(bool bParam0)
{
	if (bParam0)
	{
		if (!func_44())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 20);
		}
	}
	else if (func_44())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 20);
	}
}

bool func_273()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1963846, 0));
}

int func_274(int iParam0)
{
	if (func_126(iParam0, 0))
	{
		return 1;
	}
	if (func_275())
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

bool func_275()
{
	return BitTest(Global_2621446, 3);
}

void func_276()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	struct<3> Var18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	struct<3> Var23;
	struct<3> Var24;
	float fVar25;
	float fVar26;
	var uVar27;
	var uVar28;
	struct<3> Var29;
	var uVar30;
	
	if (!func_93() || func_202())
	{
		return;
	}
	if (func_42() && func_269(0))
	{
		return;
	}
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0))
	{
		if (unk_0xEADBDBE0422CF7E6(Local_103.f_159))
		{
			fVar0 = 40f;
			fVar1 = 30f;
			fVar2 = 30f;
			iVar3 = 1;
			fVar4 = unk_0x5E674CD80769B53A(unk_0xAB3646235DE50E93(Local_103.f_159));
			fVar5 = unk_0xED4193081E867405(unk_0xAB3646235DE50E93(Local_103.f_159));
			iVar6 = 1;
			if (func_17())
			{
				if (func_269(1))
				{
					iVar6 = 0;
				}
			}
			else if (func_269(0))
			{
				iVar6 = 0;
			}
			if (func_17())
			{
				if (!func_140())
				{
					iVar6 = 0;
				}
				fVar2 = 80f;
			}
			fVar7 = (30f * unk_0x0B852B0BF94A8DC1());
			func_263();
			unk_0xE0EEB603997F273F(2);
			func_262(&(Local_103[0]), &(Local_103[1]), &(Local_103[2]), &(Local_103[3]), 0, 0);
			if (unk_0xAE231F549813BBDF(0))
			{
				iVar3 = 2;
				if (func_17())
				{
					iVar3 = 3;
				}
				Local_103[2] = (Local_103[2] * iVar3);
				Local_103[3] = (Local_103[3] * iVar3);
			}
			if (unk_0x660D0B8C8AE85314())
			{
				Local_103[3] = (Local_103[3] * -1);
				Local_103[1] = (Local_103[1] * -1);
			}
			if (Local_103[3] != 0 && Local_103[2] != 0)
			{
				iVar8 = func_278(unk_0x510D0699BE9C6D06(Local_103[3]), unk_0x510D0699BE9C6D06(Local_103[2]));
				Local_103.f_129 = (1f / (127f / IntToFloat(iVar8)));
			}
			else if (Local_103[1] != 0 && Local_103[0] != 0)
			{
				iVar9 = func_278(unk_0x510D0699BE9C6D06(Local_103[1]), unk_0x510D0699BE9C6D06(Local_103[0]));
				Local_103.f_129 = (1f / (127f / IntToFloat(iVar9)));
			}
			else if (Local_103[3] != 0)
			{
				Local_103.f_129 = (1f / (127f / IntToFloat(Local_103[3])));
			}
			else if (Local_103[2] != 0)
			{
				Local_103.f_129 = (1f / (127f / IntToFloat(Local_103[2])));
			}
			else if (Local_103[1] != 0)
			{
				Local_103.f_129 = (1f / (127f / IntToFloat(Local_103[1])));
			}
			else if (Local_103[0] != 0)
			{
				Local_103.f_129 = (1f / (127f / IntToFloat(Local_103[0])));
			}
			else
			{
				Local_103.f_129 = 0f;
			}
			if (iVar6 && ((Local_103[2] != 0 || Local_103[3] != 0) || (Local_103[0] != 0 || Local_103[1] != 0)))
			{
				if (Local_103[2] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_103[2])));
				}
				else if (Local_103[0] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_103[0])));
				}
				else
				{
					fVar10 = 0f;
				}
				if (Local_103[3] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_103[3])));
				}
				else if (Local_103[1] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_103[1])));
				}
				else
				{
					fVar11 = 0f;
				}
				Var15 = { unk_0x88124E0D60FB8D11(unk_0xAB3646235DE50E93(Local_103.f_159), 2) };
				fVar12 = (((fVar11 * 0,05f) * fVar7) * Local_103.f_130);
				fVar13 = -(((fVar10 * 0,05f) * fVar7) * Local_103.f_130);
				if ((fVar4 != 0f || Local_103[2] != 0) || Local_103[0] != 0)
				{
					if (Local_103[2] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_103[2])));
						fVar14 = -(((fVar17 * 0,05f) * fVar7) * (fVar0 - 25f));
					}
					else if (Local_103[0] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_103[0])));
						fVar14 = -(((fVar17 * 0,05f) * fVar7) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0,1f || fVar4 < -0,1f)
						{
							if (fVar4 > 0f)
							{
								fVar17 = -1f;
							}
							else
							{
								fVar17 = 1f;
							}
						}
						if (Var15.f_1 != 0f)
						{
							if (Var15.f_1 < 2f && Var15.f_1 > 0f)
							{
								fVar17 = 0,0001f;
							}
							else if (Var15.f_1 > -2f && Var15.f_1 < 0f)
							{
								fVar17 = -0,0001f;
							}
						}
						else
						{
							fVar17 = 0f;
						}
						fVar14 = -(((fVar17 * 0,05f) * fVar7) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar14 = 0f;
				}
				Var16 = { Vector(fVar13, fVar14, fVar12) + Var15 };
				if (fVar4 != 0f)
				{
					if (Local_103[2] == 0 && Local_103[0] == 0)
					{
						if (Var16.f_1 > fVar1)
						{
							Var16.f_1 = fVar1;
						}
						else if (Var16.f_1 < -fVar1)
						{
							Var16.f_1 = -fVar1;
						}
					}
					else if (Var16.f_1 > fVar1)
					{
						Var16.f_1 = fVar1;
					}
					else if (Var16.f_1 < -fVar1)
					{
						Var16.f_1 = -fVar1;
					}
				}
				if (Var16.f_0 > fVar2)
				{
					Var16.f_0 = fVar2;
				}
				else if (Var16.f_0 < -fVar2)
				{
					Var16.f_0 = -fVar2;
				}
				if (!BitTest(Local_103.f_5, 12))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 12);
				}
				unk_0xCF39804E8C88080E(unk_0xAB3646235DE50E93(Local_103.f_159), Vector(0f, 0f, 0f) + Vector(Var16.f_2, Var16.f_1, Var16.f_0), 2, 1);
			}
			else if (iVar6 && (((Local_103[2] != 0 || Local_103[3] != 0) || Local_103[0] != 0) || Local_103[1] != 0))
			{
				Var18 = { unk_0x88124E0D60FB8D11(unk_0xAB3646235DE50E93(Local_103.f_159), 2) };
				if (func_261())
				{
					if (func_260())
					{
						fVar20 = -1f;
					}
				}
				else
				{
					if (Local_103[2] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_103[2])));
					}
					else if (Local_103[0] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_103[0])));
					}
					else
					{
						fVar19 = 0f;
					}
					if (Local_103[3] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_103[3])));
					}
					else if (Local_103[1] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_103[1])));
					}
					else
					{
						fVar20 = 0f;
					}
				}
				fVar21 = -(((fVar20 * 0,05f) * fVar7) * fVar0);
				fVar22 = -(((fVar19 * 0,05f) * fVar7) * fVar0);
				if (fVar4 != 0f)
				{
					if (Local_103[2] == 0 && Local_103[0] == 0)
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar19 = -1f;
							}
							else
							{
								fVar19 = 1f;
							}
						}
						if (Var18.f_1 < 2f && Var18.f_1 > 0f)
						{
							fVar19 = 0,0001f;
						}
						else if (Var18.f_1 > -2f && Var18.f_1 < 0f)
						{
							fVar19 = -0,0001f;
						}
						fVar22 = -(((fVar19 * 0,05f) * fVar7) * (fVar0 - 25f));
					}
				}
				Var23 = { Vector(0f, fVar22, fVar21) + Var18 };
				if (Var23.f_1 > fVar1)
				{
					Var23.f_1 = fVar1;
				}
				else if (Var23.f_1 < -fVar1)
				{
					Var23.f_1 = -fVar1;
				}
				if (Var23.f_0 > fVar2)
				{
					Var23.f_0 = fVar2;
				}
				else if (Var23.f_0 < -fVar2)
				{
					Var23.f_0 = -fVar2;
				}
				if (BitTest(Local_103.f_5, 12))
				{
					unk_0x8744D2E3FC95740E(&(Local_103.f_5), 12);
				}
				unk_0xCF39804E8C88080E(unk_0xAB3646235DE50E93(Local_103.f_159), Vector(0f, 0f, 0f) + Vector(Var18.f_2, Var23.f_1, Var23.f_0), 2, 1);
			}
			else
			{
				Var24 = { unk_0x88124E0D60FB8D11(unk_0xAB3646235DE50E93(Local_103.f_159), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var24.f_1 != 0f)
					{
						if (Var24.f_1 < 0f)
						{
							fVar25 = -1f;
						}
						else
						{
							fVar25 = 1f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var24.f_0 < 0f)
						{
							fVar26 = -1f;
						}
						else
						{
							fVar26 = 1f;
						}
					}
					else
					{
						fVar26 = 0f;
					}
					if (Var24.f_1 != 0f)
					{
						if (Var24.f_1 < 2f && Var24.f_1 > 0f)
						{
							fVar25 = 0,0001f;
						}
						else if (Var24.f_1 > -2f && Var24.f_1 < 0f)
						{
							fVar25 = -0,0001f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (Var24.f_0 != 0f)
					{
						if (Var24.f_0 < 2f && Var24.f_0 > 0f)
						{
							fVar26 = 0,0001f;
						}
						else if (Var24.f_0 > -2f && Var24.f_0 < 0f)
						{
							fVar26 = -0,0001f;
						}
					}
					else
					{
						fVar26 = 0f;
					}
					uVar27 = func_259(-(((fVar26 * 0,05f) * fVar7) * (fVar0 - 25f)));
					uVar28 = func_259(-(((fVar25 * 0,05f) * fVar7) * (fVar0 - 25f)));
					Var29 = { Vector(0f, uVar28, uVar27) + Var24 };
					if (BitTest(Local_103.f_5, 12))
					{
						Var29.f_0 = Var24.f_0;
					}
					uVar30 = Var24.f_2;
					if (func_17())
					{
						if (!func_140())
						{
							uVar30 = Local_103.f_116;
							Var29.f_1 = 0f;
						}
					}
					unk_0xCF39804E8C88080E(unk_0xAB3646235DE50E93(Local_103.f_159), Vector(0f, 0f, 0f) + Vector(uVar30, Var29.f_1, Var29.f_0), 2, 1);
					if (func_17())
					{
						if (unk_0x1D5CD3EAAA7422B0(fVar4) < 2,5f && unk_0x1D5CD3EAAA7422B0(fVar5) < 2,5f)
						{
							func_277(1);
						}
					}
				}
				else if (func_17())
				{
					func_277(1);
				}
			}
		}
		else
		{
			unk_0x460D2A8B2C7DC7D4(Local_103.f_159);
		}
	}
}

void func_277(bool bParam0)
{
	if (!bParam0)
	{
		if (BitTest(Local_103.f_6, 6))
		{
			unk_0x8744D2E3FC95740E(&(Local_103.f_6), 6);
		}
	}
	else if (!BitTest(Local_103.f_6, 6))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_6), 6);
	}
}

int func_278(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_279()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_42())
	{
		return;
	}
	if (func_256())
	{
		if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
		{
			if (!unk_0xC450B06E5AAA0985(Local_103.f_171))
			{
				Local_103.f_171 = func_294(Local_103.f_150, 0);
				unk_0x4C905FB262965D5D(Local_103.f_171, func_293());
				if (func_37() && !unk_0xC450B06E5AAA0985(Local_103.f_172))
				{
					Local_103.f_172 = func_290(unk_0x4A8C381C258A124D(), 0, 0);
					unk_0x4C905FB262965D5D(Local_103.f_172, 6);
					unk_0x89FE619BFBB2024B(Local_103.f_172, 0);
					unk_0x5D3946F818C6B331(Local_103.f_172, 0,7f);
					unk_0x1456FD5C0C438B19(Local_103.f_172, (13 - 1));
					if (func_287(unk_0x259BE71D8A81D4FA()) != -1)
					{
						func_283(&(Local_103.f_172), func_285(func_287(unk_0x259BE71D8A81D4FA())));
					}
					else
					{
						func_283(&(Local_103.f_172), func_282());
					}
					unk_0xA1DFF583C8070610(Local_103.f_172, 1);
				}
			}
			else
			{
				fVar0 = func_281(Local_103.f_124);
				fVar1 = Local_103.f_150;
				fVar2 = Local_103.f_150.f_1;
				unk_0xF55F62DA99DB0C2F(Local_103.f_171, 2);
				unk_0xDABC73EF230B6665(Local_103.f_171, Local_103.f_150);
				if (((func_31() || func_45()) && unk_0x4D9174D8796EA622()) && unk_0x834C960822A4683F())
				{
					if (!unk_0xD4C023FF0817F386())
					{
						fVar1 = -323,1f;
						fVar2 = -1970,9f;
						unk_0xDABC73EF230B6665(Local_103.f_171, fVar1, fVar2, 0f);
						unk_0x83F9B9189E65251B(fVar1, fVar2);
						unk_0xE1945100CB123CBF();
					}
				}
				unk_0x43F4B7E163A31644(fVar1, fVar2);
				unk_0x0C4EDD88E2185B8F(Local_103.f_171, system::round(fVar0));
				unk_0x5D3946F818C6B331(Local_103.f_171, 1f);
				unk_0x1456FD5C0C438B19(Local_103.f_171, 9);
				unk_0xCD1B743BDEC39145(system::round(fVar0));
				if (unk_0xC450B06E5AAA0985(Local_103.f_172))
				{
					unk_0x0C4EDD88E2185B8F(Local_103.f_172, func_280(unk_0x4A8C381C258A124D()));
				}
			}
		}
	}
}

int func_280(int iParam0)
{
	float fVar0;
	
	fVar0 = unk_0xC5A566D912050568(iParam0);
	return system::round(fVar0);
}

float func_281(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_282()
{
	return 10;
}

void func_283(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		iVar0 = func_284(iParam1);
		unk_0x61183D6239A9D7B8(*uParam0, iVar0);
	}
}

int func_284(int iParam0)
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

int func_285(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_286(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_286(int iParam0)
{
	return Global_2648938.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_287(int iParam0)
{
	if (func_9(iParam0))
	{
		if (func_288(iParam0, 1))
		{
			return Global_2648938.f_818.f_11[func_219(iParam0)];
		}
	}
	return -1;
}

int func_288(int iParam0, bool bParam1)
{
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_289(iParam0))
		{
			return 0;
		}
	}
	return func_9(Global_1887305[iParam0 /*610*/].f_10);
}

int func_289(int iParam0)
{
	if (func_9(iParam0))
	{
		if (func_9(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_290(int iParam0, bool bParam1, bool bParam2)
{
	return func_291(iParam0, !bParam1, bParam2);
}

int func_291(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_292(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_292(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_292(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

float func_292(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_293()
{
	if (func_17())
	{
		return 548;
	}
	return 627;
}

var func_294(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_292(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

void func_295()
{
	if (func_42())
	{
		if (Local_103.f_150.f_2 >= (func_119() - 20f))
		{
			if (unk_0x9F0C06CFBACDD6A1(Local_103.f_37))
			{
				Local_103.f_37 = unk_0xCA369FBC0DE29517();
				unk_0xBF3D28CA44F3BE2D(Local_103.f_37, "Out_Of_Bounds_Alarm_Loop", Local_103.f_157, 1);
			}
		}
		else if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_37))
		{
			unk_0x8E4825CCACA34B58(Local_103.f_37);
			unk_0x394AFAC073E1F277(Local_103.f_37);
			Local_103.f_37 = -1;
		}
	}
}

void func_296()
{
	if (((func_45() || func_148()) || func_37()) || func_168())
	{
		switch (Local_103.f_242)
		{
			case 0:
				func_319();
				break;
			
			case 1:
				func_306();
				break;
			
			case 2:
				func_304();
				break;
			
			case 3:
				func_297();
				break;
			}
	}
}

void func_297()
{
	func_82(1);
	if (!func_303())
	{
		unk_0x10B228D2FDB7AF16(500);
	}
	func_301(0);
	func_299(0);
	func_298(0);
}

void func_298(int iParam0)
{
	if (Local_103.f_242 != iParam0)
	{
		Local_103.f_242 = iParam0;
	}
}

void func_299(bool bParam0)
{
	if (bParam0)
	{
		if (!func_300())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 17);
		}
	}
	else if (func_300())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 17);
	}
}

bool func_300()
{
	return BitTest(Global_1956920, 17);
}

void func_301(bool bParam0)
{
	if (bParam0)
	{
		if (!func_302())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 18);
		}
	}
	else if (func_302())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 18);
	}
}

bool func_302()
{
	return BitTest(Global_1956920, 18);
}

bool func_303()
{
	return Global_1943520.f_559;
}

void func_304()
{
	if (func_302() || unk_0x4D9174D8796EA622())
	{
		func_82(1);
		func_305(0);
		unk_0x8744D2E3FC95740E(&(Local_103.f_5), 16);
		func_298(3);
	}
}

void func_305(bool bParam0)
{
	if (bParam0)
	{
		if (!func_87())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 19);
		}
	}
	else if (func_87())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 19);
	}
}

void func_306()
{
	if (unk_0x15CCE8886267624F())
	{
		if (func_29(&(Local_103.f_267), 3000, 0))
		{
			if (func_318())
			{
				if (BitTest(Global_4543084, 2) || func_29(&(Local_103.f_271), 8000, 0))
				{
					if (!BitTest(Global_4543084, 2))
					{
					}
					unk_0x10B228D2FDB7AF16(500);
					func_307(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
					func_28(&(Local_103.f_267));
					func_28(&(Local_103.f_271));
					func_298(2);
				}
			}
			else if (func_29(&(Local_103.f_271), 15000, 0))
			{
				func_28(&(Local_103.f_267));
				func_28(&(Local_103.f_271));
				func_82(1);
				func_305(0);
				unk_0x8744D2E3FC95740E(&(Local_103.f_5), 16);
				func_298(3);
			}
		}
	}
}

void func_307(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x828F3FAE99DA791A())
		{
			unk_0x6FF322107B12B749(0);
		}
	}
	if (func_317())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		uVar0 = iParam2;
		unk_0x4686BC3BFDBB5348(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x834C960822A4683F())
		{
			bVar1 = false;
		}
		if (!func_315())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x762604C40829DB72(iParam0) && (unk_0x75EAB09F5E974116(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x56E414973C2A8C0E(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x76CD105BCAC6EB9F())
				{
					unk_0x6E2FA5434737D22F(1);
				}
				else if (bVar14 || ((!func_126(unk_0x259BE71D8A81D4FA(), 0) && !func_275()) && !func_274(unk_0x259BE71D8A81D4FA())))
				{
					unk_0x4285E11B28063EE0(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x76CD105BCAC6EB9F() && !bVar19)
					{
						unk_0x6E2FA5434737D22F(0);
					}
					Global_2657971[iParam0 /*465*/].f_255 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_312(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_311(iVar27) && !unk_0xB431D60610E7F85F(iVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(iVar27, true, 0);
					}
				}
				if (!unk_0xA3736D76B0E93E93(iVar27))
				{
					if (!bVar21)
					{
						unk_0x5D7CD709B34C90F0(iVar27, false);
					}
					unk_0x11C125313CB8ADA2(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5D7CD709B34C90F0(iVar27, false);
				}
				unk_0x3F58BFCF656F0DF1(iVar27, true);
				unk_0x2B52F77101390E6F(iParam0, 0);
				unk_0x6C4F5AA91D39455C(iParam0, 0);
				if (unk_0x4CEC77F224BCD884(iVar27) && unk_0x69CD279BFCFE278E(iVar27))
				{
					unk_0xAF8337BF5A296283(iVar27);
				}
				unk_0x9FF00EA9A61211D2(iVar27, 1);
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_310();
					func_309();
				}
				if (unk_0x705A7AB2D4BC0A9B())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x787F8EE1F6FBDC6D())
				{
				}
				Global_2657971[iParam0 /*465*/].f_256 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697540)
				{
					unk_0xDD98B34A4A3AFA89(1);
					unk_0xDD98B34A4A3AFA89(1);
					Global_2697540 = 0;
				}
				if (Global_2635563.f_2981)
				{
					Global_2635563.f_2981 = 0;
				}
			}
			else
			{
				if (!func_311(iVar27) && !unk_0xB431D60610E7F85F(iVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(iVar27, !bVar15, 0);
					}
					if (!unk_0xA3736D76B0E93E93(iVar27))
					{
						if (!bVar21)
						{
							unk_0x5D7CD709B34C90F0(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x11C125313CB8ADA2(iVar27, 1);
						}
					}
					if (func_308(Global_4718592.f_185586))
					{
						unk_0x5D7CD709B34C90F0(iVar27, true);
					}
				}
				if (Global_1575055)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x2B52F77101390E6F(iParam0, 0);
				}
				else
				{
					unk_0x2B52F77101390E6F(iParam0, 1);
				}
				unk_0x3F58BFCF656F0DF1(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xBFD01C2045360289(iVar27) && !unk_0x7F420695E3F776FB(iVar27, 0))
					{
						unk_0x19626F992DC71FB9(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x4686BC3BFDBB5348(iParam0, bParam1, iVar28);
		}
	}
}

bool func_308(int iParam0)
{
	return iParam0 == 17;
}

void func_309()
{
	struct<3> Var0;
	
	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { Var0 };
}

void func_310()
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
}

int func_311(int iParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_312(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xFC8BFE4B41177C22(iParam1))
		{
			if (unk_0x501EBB0523078750(iParam1))
			{
				if (!unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), unk_0x1C1C92A1CBAE364B(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_314();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x07938654FF332D78(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 1);
			}
		}
		if (func_126(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_313(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_313(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_314()
{
	int iVar0;
	
	if (!unk_0xAD15761928FCF79C())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0xBCF87EE3DC296C2A(iVar0);
				iVar0++;
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 0);
		}
	}
}

int func_315()
{
	if (func_316() == 0)
	{
		return 1;
	}
	return 0;
}

int func_316()
{
	return Global_1574633.f_18;
}

int func_317()
{
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_318()
{
	if (unk_0x486FF5D06E9659F1(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_319()
{
	if (func_338())
	{
		if (unk_0x2645430E708CBFAC(2, 201) || unk_0x61C3701AD6D746B2(2, 201))
		{
			if (!func_318())
			{
				if (unk_0x9390801B06EE998F())
				{
					func_305(1);
					func_137(-1);
					func_307(unk_0x259BE71D8A81D4FA(), 0, 512, 0);
					unk_0x8F72AF14CE5AACE4(500);
					func_336(1, -1);
					func_320(3, 1, 1, 0);
					func_30(&(Local_103.f_267), 0, 0);
					func_30(&(Local_103.f_271), 0, 0);
					func_298(1);
				}
			}
		}
	}
}

int func_320(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_79389)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 23) && iParam0 != 1)
		{
			return 0;
		}
		if (!BitTest(Global_4543084, 14))
		{
			if (iParam0 == 17)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_4543084, 14);
				unk_0x0B0C9A0F9AAEB7F0(&Global_4543084, 16);
			}
			if (iParam0 == 3)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_4543084, 14);
				unk_0x0B0C9A0F9AAEB7F0(&Global_4543084, 15);
			}
			if (iParam0 == 23)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_4543084, 14);
				unk_0x0B0C9A0F9AAEB7F0(&Global_4543084, 27);
			}
			if (iParam0 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_4543084, 14);
				unk_0x0B0C9A0F9AAEB7F0(&Global_4543084, 29);
			}
		}
		if (Global_8807[iParam0 /*15*/].f_9 == 0)
		{
			func_332();
		}
		if (unk_0x486FF5D06E9659F1(Global_8807[iParam0 /*15*/].f_9) > 0)
		{
			unk_0x8744D2E3FC95740E(&Global_4543084, 14);
			unk_0x8744D2E3FC95740E(&Global_4543084, 16);
			unk_0x8744D2E3FC95740E(&Global_4543084, 15);
			unk_0x8744D2E3FC95740E(&Global_4543084, 27);
			unk_0x8744D2E3FC95740E(&Global_4543084, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_325();
	if (Global_20930.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_86(0) == 1)
		{
			return 0;
		}
	}
	if (Global_20896 == 1)
	{
		return 0;
	}
	if (Global_20930.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0xF40767E41852FB72(Global_20927))
	{
		if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_20930.f_1 < 4)
			{
				func_324("cellphone_flashhand");
				if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) == 0)
				{
					Global_20927 = system::start_new_script("cellphone_flashhand", 1424);
				}
				unk_0xFD49725F3FE7EE13("cellphone_flashhand");
			}
		}
	}
	while (!Global_20912)
	{
		system::wait(0);
	}
	func_332();
	func_321();
	if (unk_0x486FF5D06E9659F1(Global_8807[iParam0 /*15*/].f_9) == 0)
	{
		Global_9406 = 0;
		Global_20930.f_1 = 7;
		func_324(&(Global_8807[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x486FF5D06E9659F1(Global_8807[iParam0 /*15*/].f_9) == 0)
			{
				Global_20928 = system::start_new_script(&(Global_8807[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (unk_0x486FF5D06E9659F1(Global_8807[iParam0 /*15*/].f_9) == 0)
		{
			Global_20928 = system::start_new_script(&(Global_8807[iParam0 /*15*/].f_5), 2552);
		}
		unk_0xFD49725F3FE7EE13(&(Global_8807[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_321()
{
	if (Global_79389 == 0)
	{
		Global_8807[14 /*15*/].f_4 = -99;
		Global_8807[4 /*15*/].f_4 = -99;
		if (Global_2696167)
		{
			if (func_323(14))
			{
				func_322(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_322(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_322(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_322(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_322(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_8807[iParam0 /*15*/]), sParam1, 16);
	Global_8807[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8807[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8807[iParam0 /*15*/].f_9 = unk_0x70E57E9927B6BA58(sParam3);
	Global_8807[iParam0 /*15*/].f_10 = iParam4;
	Global_8807[iParam0 /*15*/].f_11 = iParam5;
	Global_8807[iParam0 /*15*/].f_12 = iParam6;
	Global_8807[iParam0 /*15*/].f_13 = iParam7;
	Global_8807[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8807[iParam0 /*15*/].f_12 == 0)
	{
		Global_8807[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8807[iParam0 /*15*/].f_13 == 0)
	{
		Global_8807[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8807[iParam0 /*15*/].f_14 == 0)
	{
		Global_8807[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_323(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_324(char* sParam0)
{
	unk_0x97A5024CE91641F1(sParam0);
	while (!unk_0xA6E4F7A73ABC4A76(sParam0))
	{
		system::wait(0);
	}
}

void func_325()
{
	if (func_323(14))
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
		Global_20930 = func_326();
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

var func_326()
{
	func_327();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_327()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_330(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_329(unk_0x4A8C381C258A124D());
			if (func_328(iVar0) && (!func_323(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_328(Global_113969.f_2366.f_539.f_4321))
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

bool func_328(int iParam0)
{
	return iParam0 < 3;
}

int func_329(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_330(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_330(int iParam0)
{
	if (func_328(iParam0))
	{
		return func_331(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_331(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_332()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_8807[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_79389 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_335(iVar2, Global_20930) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_322(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_322(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_322(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_44042 == 15 && func_334(0) == 0) && Global_8805 == 0)
		{
			func_322(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21148 = 0;
			Global_8806 = 255;
		}
		else
		{
			func_322(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_21148 = 1;
			Global_8806 = 42;
		}
		if (iVar1 == 1)
		{
			func_322(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_322(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_322(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_322(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_322(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_113969.f_14054.f_89 == 1)
		{
			func_322(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_113969.f_14054.f_88 == 1)
		{
			func_322(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_322(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_322(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_322(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_322(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_322(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_322(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_322(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_322(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_322(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_322(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_322(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_322(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_322(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_322(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_322(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_322(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_322(21, "CELL_37", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (BitTest(Global_4543084, 4))
		{
			func_322(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_322(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_322(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_322(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_322(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_322(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_322(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_322(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_322(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_322(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_322(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_322(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_322(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_322(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_322(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_322(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_322(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!BitTest(Global_4543084, 4))
		{
			if (Global_1836172)
			{
				func_322(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4543084, 20))
			{
				func_322(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4543084, 22))
			{
				func_322(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (BitTest(Global_4543084, 26))
			{
				if (func_333())
				{
					func_322(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
				}
				else
				{
					func_322(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
				}
			}
		}
		if ((((BitTest(Global_4543084, 4) == 0 && Global_1836172 == 0) && BitTest(Global_4543084, 20) == 0) && BitTest(Global_4543084, 22) == 0) && BitTest(Global_4543084, 26) == 0)
		{
			if (func_333())
			{
				func_322(23, "CELL_0", -99, "appContacts", 5, 1, 1, 0, 0);
			}
			else
			{
				func_322(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
			}
		}
	}
}

int func_333()
{
	if (Global_79389)
	{
		if (Global_1836576 || Global_1836577 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_334(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

int func_335(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_19[iParam1];
}

void func_336(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_134(&iVar0, 0, iParam1))
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
		func_337(&(Global_23831.f_6263[iVar0 /*10*/]));
		Global_23831.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23831.f_6324[iVar0] = 0;
	}
	unk_0x633E3833FB96BCCB("Shared");
}

void func_337(var uParam0)
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

int func_338()
{
	if (func_87())
	{
		return 0;
	}
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if ((func_178(0) || func_177()) || unk_0xE7585CE3CDD6F47E())
	{
		func_28(&(Local_103.f_275));
		func_30(&(Local_103.f_275), 0, 0);
		unk_0x8744D2E3FC95740E(&(Local_103.f_5), 16);
		func_109();
		return 0;
	}
	else if (func_32(&(Local_103.f_275)))
	{
		if (!func_29(&(Local_103.f_275), 2000, 0))
		{
			return 0;
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Local_103.f_5), 16);
			func_28(&(Local_103.f_275));
		}
	}
	if (func_173(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

void func_339()
{
	if (func_340())
	{
		if (unk_0x93BF17E19A9F0E9B(Local_103.f_159) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0))
		{
			if (unk_0xEADBDBE0422CF7E6(Local_103.f_159))
			{
				if (!BitTest(Local_103.f_5, 25))
				{
					unk_0x5D7CD709B34C90F0(unk_0xAB3646235DE50E93(Local_103.f_159), true);
					unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 25);
				}
			}
			else
			{
				unk_0x460D2A8B2C7DC7D4(Local_103.f_159);
			}
		}
	}
	else if (BitTest(Local_103.f_5, 25))
	{
		if (unk_0x93BF17E19A9F0E9B(Local_103.f_159) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0))
		{
			if (unk_0xEADBDBE0422CF7E6(Local_103.f_159))
			{
				unk_0x5D7CD709B34C90F0(unk_0xAB3646235DE50E93(Local_103.f_159), false);
				unk_0x8744D2E3FC95740E(&(Local_103.f_5), 25);
			}
			else
			{
				unk_0x460D2A8B2C7DC7D4(Local_103.f_159);
			}
		}
	}
}

int func_340()
{
	if (func_173(unk_0x259BE71D8A81D4FA()))
	{
		if (BitTest(Global_2737663, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_341()
{
	int iVar0;
	
	if (func_93())
	{
		Global_1956920.f_1 = 0;
	}
	if (func_348() || func_202())
	{
		if (!func_32(&(Local_103.f_247)))
		{
			func_30(&(Local_103.f_247), 0, 0);
		}
		else if (func_29(&(Local_103.f_247), Global_1956920.f_1, 0) || func_202())
		{
			func_28(&(Local_103.f_245));
			if (func_93())
			{
				if (func_24(unk_0x4A8C381C258A124D()))
				{
					unk_0x8F03CD462437C002(unk_0x4A8C381C258A124D(), func_347(), func_346(), func_345(), 1, 0, 1065353216);
				}
				else
				{
					unk_0xD2FD15A3D9DEE4CC(func_347(), func_346(), func_345(), 1, 0, 1065353216, 0);
				}
				unk_0x97A041099E92C69F(0, 300, system::round((200f * Local_103.f_131)));
				unk_0x8FC511FC963C67E5(Local_103.f_159, 1);
				unk_0xE3F88173F42C071B();
				iVar0 = unk_0xAB3646235DE50E93(Local_103.f_159);
				unk_0x51C8BEA2005931AB(&iVar0);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_6), 2);
			}
			if (func_38())
			{
				func_344(1);
				if (Local_103.f_26 == 0)
				{
					func_342(6, 0, 0);
				}
				else
				{
					func_342(5, 0, 0);
				}
			}
			func_394(1);
			func_393(5);
		}
	}
	else if (func_32(&(Local_103.f_247)))
	{
		func_214(&(Local_103.f_247), 0, 0);
	}
}

void func_342(int iParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	float fVar2;
	float fVar3;
	
	StringCopy(&cVar0, func_343(iParam0), 64);
	iVar1 = 5;
	if (bParam1)
	{
		iVar1 = 69;
	}
	fVar2 = 8f;
	fVar3 = -8f;
	Local_103.f_79 = unk_0xBC5D9A293974F095(Local_103.f_153, 0f, 0f, Local_103.f_118, 2, iParam2, bParam1, 1065353216, 0, 1065353216);
	unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_103.f_79, Local_103.f_158, &cVar0, fVar2, fVar3, iVar1, 0, 1148846080, 0);
	if (iParam0 == 0)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			unk_0xDEE175A01A05A2F7(unk_0xF5014688C9788D5F(Local_103.f_159), Local_103.f_79, Local_103.f_158, &cVar0, fVar2, fVar3, 8);
		}
	}
	StringCopy(&cVar0, func_343(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_160))
	{
		unk_0x5ED9595F4AC7D134(unk_0xF5014688C9788D5F(Local_103.f_160), &cVar0, Local_103.f_158, fVar2, bParam1, iParam2, 0, 0f, 0);
		unk_0x2B2ECB6F6371E59E(unk_0xF5014688C9788D5F(Local_103.f_160));
	}
	unk_0xE7101255AD6F1952(Local_103.f_79);
}

char* func_343(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ENTER";
		
		case 1:
			return "BASE";
		
		case 2:
			return "USE_01";
		
		case 3:
			return "USE_02";
		
		case 4:
			return "USE_03";
		
		case 5:
			return "FAIL";
		
		case 6:
			return "EXIT";
		
		default:
	}
	return "";
}

void func_344(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x643DC062EE904FCA(iVar0);
	if (unk_0x5266F1D2AEF6F73A(iVar0))
	{
		unk_0x83E8210E2B5723F2(iVar0);
		unk_0xF2E51EC84D76A2B6(iVar0);
		iVar0 = -1;
	}
	else if (bParam0)
	{
		if (func_24(unk_0x4A8C381C258A124D()))
		{
			unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
		}
	}
}

float func_345()
{
	if (func_17())
	{
		return 1f;
	}
	return 0,5f;
}

int func_346()
{
	if (func_17())
	{
		return 81;
	}
	return 72;
}

Vector3 func_347()
{
	if (func_17())
	{
		return unk_0xA452B06E281A9014(Local_103.f_169);
	}
	return Local_103.f_150;
}

int func_348()
{
	if ((unk_0x93BF17E19A9F0E9B(Local_103.f_159) && unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0)) && !BitTest(Local_103.f_5, 2))
	{
		return 1;
	}
	if (Local_103.f_12 == 2)
	{
		Local_103.f_26 = 1;
		return 1;
	}
	if (BitTest(Local_103.f_5, 1))
	{
		return 1;
	}
	if (func_356())
	{
		Local_103.f_26 = 5;
		return 1;
	}
	if (func_148() && func_350())
	{
		Local_103.f_26 = 5;
		return 1;
	}
	if (func_38() || func_17())
	{
		if (func_350())
		{
			Local_103.f_26 = 5;
			return 1;
		}
	}
	if (BitTest(Local_103.f_5, 2))
	{
		Local_103.f_26 = 4;
		return 1;
	}
	if (func_186())
	{
		if (!func_32(&(Local_103.f_255)))
		{
			func_30(&(Local_103.f_255), 0, 0);
		}
		else if (func_29(&(Local_103.f_255), 3000, 0))
		{
			Local_103.f_26 = 0;
			return 1;
		}
	}
	if (BitTest(Local_103.f_5, 7))
	{
		Local_103.f_26 = 0;
		return 1;
	}
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		if (unk_0x69799E0840A34AFB(unk_0xAB3646235DE50E93(Local_103.f_159)) || func_211(unk_0xF5014688C9788D5F(Local_103.f_159), 0))
		{
			if (BitTest(Local_103.f_5, 29))
			{
				Local_103.f_26 = 3;
				return 1;
			}
		}
	}
	if (!func_148() && !func_349())
	{
		if (Local_103.f_150.f_2 >= func_119())
		{
			Local_103.f_26 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_349()
{
	return BitTest(Global_1956920.f_2, 0);
}

int func_350()
{
	struct<3> Var0;
	int iVar1;
	
	if (func_355())
	{
		return 0;
	}
	if (func_26(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		if (unk_0x93BF17E19A9F0E9B(Local_103.f_159) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0))
		{
			if (func_148())
			{
				if (unk_0xFC8BFE4B41177C22(func_354()) && !unk_0x1C2F771CDC87A3A5(func_354(), 0))
				{
					Var0 = { unk_0xD1A6A821F5AC81DB(func_354(), 1) };
				}
			}
			else if (func_37())
			{
				if (!func_38())
				{
					iVar1 = func_351(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_11);
					switch (iVar1)
					{
						case 128:
							Var0 = { -245,64f, 6210,96f, 35,94f };
							break;
						
						case 129:
							Var0 = { 1695,88f, 4783,87f, 47,02f };
							break;
						
						case 130:
							Var0 = { -115,15f, -1771,65f, 38,86f };
							break;
						
						case 131:
							Var0 = { -600,96f, 280,47f, 87,04f };
							break;
						
						case 132:
							Var0 = { -1269,72f, -304,09f, 40f };
							break;
						
						case 133:
							Var0 = { 758,46f, -814,57f, 30,3f };
							break;
					}
				}
				else
				{
					Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
				}
			}
			else if (func_17())
			{
				if (func_24(func_16()))
				{
					Var0 = { unk_0xD1A6A821F5AC81DB(func_16(), 1) };
				}
			}
			else
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			}
			if (func_24(unk_0xAB3646235DE50E93(Local_103.f_159)))
			{
				Local_103.f_120 = func_165(unk_0xAB3646235DE50E93(Local_103.f_159), Var0, 1);
				if (Local_103.f_120 > func_119())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_13())
	{
		iVar0 = func_353(iParam0);
		if (iVar0 != 0)
		{
			return func_352(iVar0);
		}
	}
	return -1;
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 128;
		
		case 2:
			return 129;
		
		case 3:
			return 130;
		
		case 4:
			return 131;
		
		case 5:
			return 132;
		
		case 6:
			return 133;
		
		default:
	}
	return -1;
}

int func_353(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_433;
	}
	return 0;
}

int func_354()
{
	if (Global_1845120 != func_13())
	{
		if (!func_53(Global_1845120))
		{
			if (unk_0xFC8BFE4B41177C22(Global_1663307))
			{
				return Global_1663307;
			}
			if (unk_0xFC8BFE4B41177C22(Global_1962036[Global_1845120]))
			{
				return Global_1962036[Global_1845120];
			}
		}
	}
	return -1;
}

bool func_355()
{
	return BitTest(Global_1956920, 6);
}

int func_356()
{
	float fVar0;
	int iVar1;
	
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0))
	{
		iVar1 = Global_262145.f_24242;
		if (func_17())
		{
			iVar1 *= 10;
		}
		if (unk_0xB1EAADCB692D69CE(Local_103.f_150, &fVar0, 1, 0))
		{
			Local_103.f_121 = (Local_103.f_150.f_2 - fVar0);
			if (Local_103.f_121 > IntToFloat(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_357()
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if (!func_93())
	{
		return;
	}
	if ((unk_0x93BF17E19A9F0E9B(Local_103.f_159) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0)) && unk_0x78411E34CF90EA8C(Local_103.f_169))
	{
		if (unk_0xEADBDBE0422CF7E6(Local_103.f_159))
		{
			if (BitTest(Local_103.f_5, 1) || func_202())
			{
				return;
			}
			Var0 = { func_358(func_359()) };
			bVar3 = false;
			iVar4 = 1;
			iVar5 = 0;
			if (func_17())
			{
				bVar3 = true;
				iVar4 = 0;
				iVar5 = 0;
			}
			if (func_42())
			{
				if (!unk_0xAE231F549813BBDF(0))
				{
					if (unk_0x4AAE7492E7D81A57(2, 208) != 0f)
					{
						iVar1 = 1;
					}
					if (unk_0x4AAE7492E7D81A57(2, 207) != 0f)
					{
						iVar2 = 1;
					}
				}
				else
				{
					if (unk_0x4AAE7492E7D81A57(2, 209) != 0f)
					{
						iVar1 = 1;
					}
					if (unk_0x4AAE7492E7D81A57(2, 210) != 0f)
					{
						iVar2 = 1;
					}
				}
			}
			if (iVar1 && !func_269(bVar3))
			{
				Local_103.f_119 = 140f;
			}
			else if (iVar2 && !func_269(bVar3))
			{
				Local_103.f_119 = 60f;
			}
			else if (!func_17())
			{
				Local_103.f_119 = 100f;
			}
			unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), iVar5, Var0 * Vector(-Local_103.f_119, -Local_103.f_119, -Local_103.f_119), 0, 1, iVar4, 0);
		}
		else
		{
			unk_0x460D2A8B2C7DC7D4(Local_103.f_159);
		}
	}
}

Vector3 func_358(struct<3> Param0)
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

Vector3 func_359()
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_360(&Var0);
	return Var0;
}

void func_360(var uParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = system::cos(0f);
	fVar1 = system::sin(0f);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = system::cos(0f);
	fVar1 = system::sin(0f);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = system::cos(0f);
	fVar1 = system::sin(0f);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

void func_361()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	
	if (func_93())
	{
		return;
	}
	if ((unk_0x93BF17E19A9F0E9B(Local_103.f_159) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(Local_103.f_159), 0)) && unk_0x78411E34CF90EA8C(Local_103.f_169))
	{
		if (unk_0xEADBDBE0422CF7E6(Local_103.f_159))
		{
			fVar0 = 0f;
			if (!func_45() && !func_31())
			{
				if (!func_261())
				{
					if (func_32(&(Local_103.f_253)))
					{
						iVar1 = Global_262145.f_24240;
						if (func_31())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_29(&(Local_103.f_253), iVar1, 0))
						{
							iVar2 = (100 * unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Local_103.f_253)));
							Local_103.f_20 = (iVar2 / iVar1);
						}
						else
						{
							if (func_24(Local_103.f_161))
							{
								unk_0x4D306DD94DD6FDBA(Local_103.f_161, unk_0xAB3646235DE50E93(Local_103.f_159), -1, 0f, 0f, -0,25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
							}
							Local_103.f_20 = 100;
							func_28(&(Local_103.f_253));
							if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_43))
							{
								unk_0x8E4825CCACA34B58(Local_103.f_43);
								unk_0x394AFAC073E1F277(Local_103.f_43);
								Local_103.f_43 = -1;
							}
						}
					}
					if (!unk_0xAE231F549813BBDF(0))
					{
						bVar3 = unk_0xDEE3EFEA31A1F555(0, 209);
					}
					else
					{
						bVar3 = unk_0xDEE3EFEA31A1F555(0, 203);
					}
					if ((((bVar3 && Local_103.f_20 == 100) && !func_269(0)) && !func_87()) && func_169())
					{
						fVar0 = 120f;
						if (func_31())
						{
							fVar0 = 110f;
						}
						else if (func_37())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_103[1]) != 0f)
						{
							func_369(1);
						}
						else
						{
							func_369(0);
						}
						unk_0xDCAFFD08A08087EB("RaceTurbo", 0, 0);
						func_30(&(Local_103.f_251), 0, 0);
						func_368(1);
						if (unk_0x9F0C06CFBACDD6A1(Local_103.f_42))
						{
							Local_103.f_42 = unk_0xCA369FBC0DE29517();
							unk_0xBF3D28CA44F3BE2D(Local_103.f_42, "HUD_Boost_Loop", Local_103.f_157, 1);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_31())
					{
						fVar0 = 115f;
					}
					else if (func_37())
					{
						fVar0 = 49f;
					}
					if (unk_0x78411E34CF90EA8C(Local_103.f_169))
					{
						if (!unk_0xDD87838D03B64B0A(Local_103.f_169))
						{
							unk_0x2A09425009DAD0F5(Local_103.f_169, "DRONE_BOOST_SHAKE", 1065353216);
							unk_0x17F06E9D89A05855(Local_103.f_169, 0,15f);
						}
					}
					if (func_32(&(Local_103.f_251)))
					{
						if (func_29(&(Local_103.f_251), Global_262145.f_24239, 0))
						{
							Local_103.f_20 = 0;
							func_369(0);
							func_368(0);
							func_28(&(Local_103.f_253));
							func_30(&(Local_103.f_253), 0, 0);
							unk_0x584EE85BE0BFA70E(Local_103.f_169, 1);
							unk_0x9683D8208E71E46D(0);
							unk_0x21172E4DF035B893("RaceTurbo");
							func_28(&(Local_103.f_251));
							if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_42))
							{
								unk_0x8E4825CCACA34B58(Local_103.f_42);
								unk_0x394AFAC073E1F277(Local_103.f_42);
								Local_103.f_42 = -1;
							}
							if (unk_0x9F0C06CFBACDD6A1(Local_103.f_43))
							{
								Local_103.f_43 = unk_0xCA369FBC0DE29517();
								unk_0xBF3D28CA44F3BE2D(Local_103.f_43, "HUD_Boost_Recharge_Loop", Local_103.f_157, 1);
							}
						}
						else
						{
							fVar4 = (100f / (system::to_float(Global_262145.f_24239) / IntToFloat(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Local_103.f_251))));
							Local_103.f_20 = (100 - system::round(fVar4));
							unk_0x97A041099E92C69F(0, Global_262145.f_24239, system::round((255f * Local_103.f_131)));
						}
					}
				}
			}
			Var5 = { Local_103.f_150 };
			if (BitTest(Local_103.f_5, 1) || func_202())
			{
				return;
			}
			Var6 = { func_358(func_359()) };
			Var7 = { func_358(func_367(func_359())) };
			unk_0xB1EAADCB692D69CE(Var5, &fVar8, 1, 0);
			if (!func_366())
			{
				if (Local_103.f_10 == 2 || (Var5.f_2 - fVar8) < 2f)
				{
					fVar9 = 24f;
					if (Local_103[1] != 0)
					{
						unk_0x66EFB3D6110055C4(2, 207, 1);
					}
					if (unk_0x4AAE7492E7D81A57(2, 207) != 0f || Local_103[1] != 0)
					{
						if ((Var5.f_2 - fVar8) < 0,5f || unk_0x4AAE7492E7D81A57(2, 207) != 0f)
						{
							fVar9 = 24f;
						}
						else
						{
							fVar9 = 10f;
						}
					}
					else
					{
						fVar9 = 3f;
					}
					unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, 0f, 0f, fVar9, 0, 1, 1, 0);
				}
			}
			if (unk_0xAE231F549813BBDF(0))
			{
				if (Local_103[2] >= 127)
				{
					Local_103[2] = 127;
				}
				else if (Local_103[2] <= -127)
				{
					Local_103[2] = -127;
				}
				if (Local_103[0] >= 127)
				{
					Local_103[0] = 127;
				}
				else if (Local_103[0] <= -127)
				{
					Local_103[0] = -127;
				}
			}
			if (!unk_0xAE231F549813BBDF(0))
			{
				if (unk_0x4AAE7492E7D81A57(2, 208) != 0f)
				{
					iVar10 = 1;
				}
				if (unk_0x4AAE7492E7D81A57(2, 207) != 0f)
				{
					iVar11 = 1;
				}
			}
			else
			{
				if (unk_0x4AAE7492E7D81A57(2, 209) != 0f)
				{
					iVar10 = 1;
				}
				if (unk_0x4AAE7492E7D81A57(2, 210) != 0f)
				{
					iVar11 = 1;
				}
			}
			if (((iVar10 && func_365()) && !func_87()) || (func_261() && !func_260()))
			{
				fVar14 = Local_103.f_119;
				if (func_168())
				{
					fVar14 = 5f;
				}
				if (func_45() || func_31())
				{
					fVar13 = 10f;
				}
				if (func_261() && !func_260())
				{
					if (!unk_0xAE231F549813BBDF(0))
					{
						fVar12 = ((fVar14 + fVar0) / (1f / unk_0x4AAE7492E7D81A57(2, 208)));
					}
					else
					{
						fVar12 = ((fVar14 + fVar0) / (1f / unk_0x4AAE7492E7D81A57(2, 209)));
					}
				}
				else if (!unk_0xAE231F549813BBDF(0))
				{
					fVar12 = ((fVar14 + fVar13) / (1f / unk_0x4AAE7492E7D81A57(2, 208)));
				}
				else
				{
					fVar12 = ((fVar14 + fVar13) / (1f / unk_0x4AAE7492E7D81A57(2, 209)));
				}
				fVar12 = func_364(fVar12, -149f, 149f);
				Var15 = { Var7 * Vector(fVar12, fVar12, fVar12) };
				if (Var15.f_2 > 149f)
				{
					Var15.f_2 = 149f;
				}
				unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, Var15, 0, 1, 1, 0);
			}
			else if (((iVar11 && !func_87()) && func_365()) && !func_269(0))
			{
				if (func_45() || func_31())
				{
					fVar17 = 10f;
				}
				if (!unk_0xAE231F549813BBDF(0))
				{
					fVar16 = ((Local_103.f_119 + fVar17) / (1f / unk_0x4AAE7492E7D81A57(2, 207)));
				}
				else
				{
					fVar16 = ((Local_103.f_119 + fVar17) / (1f / unk_0x4AAE7492E7D81A57(2, 210)));
				}
				fVar16 = func_364(fVar16, -149f, 149f);
				unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, Var7 * Vector(-fVar16, -fVar16, -fVar16), 0, 1, 1, 0);
			}
			if (((Local_103[1] > 0 && !func_261()) && !func_269(0)) && !func_87())
			{
				fVar20 = func_363();
				fVar18 = (Local_103.f_119 / (127f / IntToFloat(Local_103[1])));
				fVar19 = (fVar20 / (127f / IntToFloat(Local_103[1])));
				fVar18 = func_364(fVar18, -149f, 149f);
				unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, Var6 * Vector(fVar18, fVar18, fVar18), 0, 1, 1, 0);
				unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, 0f, 0f, fVar19, 0, 1, 1, 0);
			}
			else if ((((Local_103[1] < 0 && !func_261()) && !func_269(0)) && !func_87()) || (func_261() && func_260()))
			{
				if (func_261() && func_260())
				{
					fVar23 = 50f;
					if (func_31())
					{
						fVar21 = (Local_103.f_119 / -1f);
					}
					else
					{
						fVar21 = ((Local_103.f_119 + fVar0) / -1f);
					}
					fVar22 = (fVar23 / -1f);
				}
				else
				{
					fVar23 = func_363();
					if (func_31())
					{
						fVar21 = (Local_103.f_119 / (127f / IntToFloat(Local_103[1])));
					}
					else
					{
						fVar21 = ((Local_103.f_119 + fVar0) / (127f / IntToFloat(Local_103[1])));
					}
					fVar22 = (fVar23 / (127f / IntToFloat(Local_103[1])));
				}
				fVar21 = func_364(fVar21, -149f, 149f);
				if (func_31())
				{
					if (!func_260())
					{
						unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, 0f, 0f, -fVar22, 0, 1, 1, 0);
						unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, Var6 * Vector(fVar21, fVar21, fVar21), 0, 1, 1, 0);
					}
					else
					{
						unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, 0f, 0f, 41f, 0, 1, 1, 0);
						unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, 0f, -149f, 0f, 0, 1, 1, 0);
					}
				}
				else
				{
					unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, 0f, 0f, -fVar22, 0, 1, 1, 0);
					unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, Var6 * Vector(fVar21, fVar21, fVar21), 0, 1, 1, 0);
				}
			}
			Var24 = { func_362(Var6, Var7) };
			if ((!func_261() && !func_269(0)) && !func_87())
			{
				if (Local_103[0] > 0)
				{
					fVar25 = -(Local_103.f_119 / (127f / IntToFloat(Local_103[0])));
					fVar26 = (8f / (127f / IntToFloat(Local_103[0])));
					fVar25 = func_364(fVar25, -149f, 149f);
					unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, Var24 * Vector(fVar25, fVar25, fVar25), 0, 1, 1, 0);
					unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, 0f, 0f, fVar26, 0, 1, 1, 0);
				}
				else if (Local_103[0] < 0)
				{
					fVar27 = -(Local_103.f_119 / (127f / IntToFloat(Local_103[0])));
					fVar28 = (8f / (127f / IntToFloat(Local_103[0])));
					fVar27 = func_364(fVar27, -149f, 149f);
					unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, Var24 * Vector(fVar27, fVar27, fVar27), 0, 1, 1, 0);
					unk_0x96CCECDBC57DA984(unk_0xAB3646235DE50E93(Local_103.f_159), 0, 0f, 0f, -fVar28, 0, 1, 1, 0);
				}
			}
		}
		else
		{
			unk_0x460D2A8B2C7DC7D4(Local_103.f_159);
		}
	}
}

Vector3 func_362(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}

float func_363()
{
	if (func_31() || func_45())
	{
		return 40f;
	}
	else if (func_37())
	{
		return 30f;
	}
	else if (func_168())
	{
		return 2,5f;
	}
	return 6,4f;
}

float func_364(float fParam0, float fParam1, float fParam2)
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

int func_365()
{
	if (func_269(0))
	{
		return 0;
	}
	if (func_261() && !func_260())
	{
		return 0;
	}
	return 1;
}

bool func_366()
{
	return BitTest(Global_1956920, 2);
}

Vector3 func_367(struct<2> Param0, var uParam1)
{
	struct<3> Var0;
	
	Var0 = { system::sin(Param0.f_1), (-system::sin(Param0.f_0) * system::cos(Param0.f_1)), (system::cos(Param0.f_0) * system::cos(Param0.f_1)) };
	return Var0;
}

void func_368(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Local_103.f_5, 21))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 21);
		}
	}
	else if (BitTest(Local_103.f_5, 21))
	{
		unk_0x8744D2E3FC95740E(&(Local_103.f_5), 21);
	}
}

void func_369(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Local_103.f_5, 22))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 22);
		}
	}
	else if (BitTest(Local_103.f_5, 22))
	{
		unk_0x8744D2E3FC95740E(&(Local_103.f_5), 22);
	}
}

void func_370()
{
	float fVar0;
	float fVar1;
	
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_103.f_159), 0))
		{
			if ((func_31() || func_45()) || func_42())
			{
				fVar0 = -323,1f;
				fVar1 = -1970,9f;
			}
			else
			{
				fVar0 = Local_103.f_150;
				fVar1 = Local_103.f_150.f_1;
			}
			unk_0x83F9B9189E65251B(fVar0, fVar1);
			unk_0x2474C1A1D3FE2888(fVar0, fVar1, 0);
			if (!unk_0xF8A8852F99E201DD(Global_1956920.f_24) && !func_42())
			{
				if (!BitTest(Local_103.f_5, 8))
				{
					unk_0xE1945100CB123CBF();
				}
				unk_0xBB6D152B544953A3();
			}
		}
	}
}

void func_371()
{
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		if (unk_0x9F0C06CFBACDD6A1(Local_103.f_41) && Local_103.f_41 == -1)
		{
			Local_103.f_41 = unk_0xCA369FBC0DE29517();
			unk_0xBF3D28CA44F3BE2D(Local_103.f_41, "HUD_Loop", Local_103.f_157, 1);
		}
	}
}

void func_372()
{
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		if (unk_0x9F0C06CFBACDD6A1(Local_103.f_31))
		{
			Local_103.f_31 = unk_0xCA369FBC0DE29517();
			unk_0xBD618A73193F9982(Local_103.f_31, "Flight_Loop", unk_0xAB3646235DE50E93(Local_103.f_159), Local_103.f_157, 0, 0);
			unk_0x3F002AA9562BF0BE(Local_103.f_31, "DroneRotationalSpeed", Local_103.f_129);
		}
		else
		{
			unk_0x3F002AA9562BF0BE(Local_103.f_31, "DroneRotationalSpeed", Local_103.f_129);
		}
		if (unk_0x9F0C06CFBACDD6A1(Local_103.f_40))
		{
			unk_0x394AFAC073E1F277(Local_103.f_40);
			Local_103.f_40 = -1;
		}
	}
}

void func_373()
{
	if (func_26(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 450, 1);
	}
}

void func_374()
{
	int iVar0;
	
	if (func_31())
	{
		iVar0 = unk_0xB23E0F9B63D009A8(Local_103.f_45);
		if (unk_0x93BF17E19A9F0E9B(Local_103.f_159) && func_26(iVar0, 1, 1))
		{
			if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iVar0), 0))
			{
				if (func_375(unk_0xAB3646235DE50E93(Local_103.f_159), unk_0x56E414973C2A8C0E(iVar0), Global_262145.f_24851, 1))
				{
					if (!func_218(unk_0x259BE71D8A81D4FA(), iVar0))
					{
						if (unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(iVar0) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 11);
							return;
						}
					}
				}
			}
		}
		unk_0x8744D2E3FC95740E(&(Local_103.f_5), 11);
	}
}

bool func_375(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return system::vdist2(unk_0xD1A6A821F5AC81DB(iParam0, iParam3), unk_0xD1A6A821F5AC81DB(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_376()
{
	int iVar0;
	
	if (((func_42() || func_31()) || func_45()) || func_17())
	{
		iVar0 = 1000;
		if (func_31() || func_45())
		{
			iVar0 = 7000;
		}
		else if (func_17())
		{
			iVar0 = 1100;
		}
		if (!BitTest(Local_103.f_5, 29))
		{
			if (unk_0x78411E34CF90EA8C(Local_103.f_169) && unk_0x8DE2438443E6A145(Local_103.f_169))
			{
				if (func_24(func_25()))
				{
					if (func_29(&(Local_103.f_269), iVar0, 0))
					{
						unk_0x52528272B59EBA11(func_25(), 1, 0);
						unk_0x44C48AC14D3C09ED(func_25(), true, 0);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 29);
					}
				}
			}
		}
	}
}

void func_377()
{
	if (!func_17() || unk_0x259BE71D8A81D4FA() == func_13())
	{
		return;
	}
	if (func_29(&(Local_103.f_281[unk_0x259BE71D8A81D4FA() /*2*/]), 2500, 0))
	{
		if (unk_0x9CFFB7009B578840(Local_103.f_207[unk_0x259BE71D8A81D4FA()]))
		{
			unk_0x182120534CCF9023(Local_103.f_207[unk_0x259BE71D8A81D4FA()], 0);
		}
		func_28(&(Local_103.f_281[unk_0x259BE71D8A81D4FA() /*2*/]));
	}
}

void func_378()
{
	char* sVar0;
	var uVar1;
	var uVar2;
	
	sVar0 = "scr_ih_sub";
	unk_0xEBEE7DC21AB44EC9(sVar0);
	if (unk_0x939D49C9FAA8139A(sVar0))
	{
		if (func_24(func_16()) && unk_0x259BE71D8A81D4FA() != func_13())
		{
			if (!unk_0x9CFFB7009B578840(Local_103.f_207[unk_0x259BE71D8A81D4FA()]))
			{
				unk_0xD03F4780B97A39AE(sVar0);
				uVar1 = func_385(unk_0x259BE71D8A81D4FA());
				uVar2 = unk_0x365DC1E8054AF31A(func_16(), uVar1);
				Local_103.f_207[unk_0x259BE71D8A81D4FA()] = unk_0x3B8EE54DFE24F06C("scr_ih_sub_missile_launch", func_16(), func_384(unk_0x259BE71D8A81D4FA()), 0f, 0f, 0f, uVar2, 5f, 0, 0, 0);
			}
			else
			{
				func_30(&(Local_103.f_281[unk_0x259BE71D8A81D4FA() /*2*/]), 0, 0);
			}
			if (func_32(&(Local_103.f_281[unk_0x259BE71D8A81D4FA() /*2*/])))
			{
				if (func_29(&(Local_103.f_281[unk_0x259BE71D8A81D4FA() /*2*/]), 1000, 0))
				{
					unk_0xABAD28B5A427340D(Local_103.f_207[unk_0x259BE71D8A81D4FA()], "flame", 0,15f, 0);
					func_380();
					func_276();
					func_357();
					if (!unk_0xE5E2AE8B19267B8A(unk_0xAB3646235DE50E93(Local_103.f_159)))
					{
						unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_103.f_159), true, 0);
					}
					func_379();
					if (unk_0x9F0C06CFBACDD6A1(Local_103.f_40))
					{
						Local_103.f_40 = unk_0xCA369FBC0DE29517();
						unk_0xBF3D28CA44F3BE2D(Local_103.f_40, "HUD_Startup", Local_103.f_157, 1);
					}
					func_279();
					func_112();
					func_246(1);
					unk_0x80F87A4A3B930613();
					unk_0x5C483F4653DC993C("IslandPeriscope");
					unk_0xE37AF9002E782BA0(1, 0, 0, 1, 1, 0);
					Local_103.f_173 = unk_0x7E3F74F641EE6B27();
					unk_0x935364B4448CD584(unk_0xAB3646235DE50E93(Local_103.f_159), 0);
					func_393(4);
				}
			}
		}
		else
		{
			func_394(1);
			func_393(7);
		}
	}
}

void func_379()
{
	if (func_148() || func_38())
	{
		if (!unk_0xBC2EE32DE886BD08("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			unk_0xCAC4020CCF361AC8("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_31())
	{
		if (!unk_0xBC2EE32DE886BD08("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			unk_0xCAC4020CCF361AC8("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_45())
	{
		if (!unk_0xBC2EE32DE886BD08("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			unk_0xCAC4020CCF361AC8("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_42())
	{
		if (!unk_0xBC2EE32DE886BD08("dlc_aw_arena_piloted_missile_scene"))
		{
			unk_0xCAC4020CCF361AC8("dlc_aw_arena_piloted_missile_scene");
		}
	}
	else if (func_17())
	{
		if (!unk_0xBC2EE32DE886BD08("dlc_hei4_submarine_guided_missile_Scene"))
		{
			unk_0xCAC4020CCF361AC8("dlc_hei4_submarine_guided_missile_Scene");
		}
	}
}

void func_380()
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	
	uVar1 = func_385(unk_0x259BE71D8A81D4FA());
	if (Global_1582023 == 1)
	{
		uVar0 = unk_0x365DC1E8054AF31A(func_16(), uVar1);
		Var2 = { unk_0x1D49B6C92B9A5B1C(func_16(), uVar0) };
		Local_103.f_144 = { unk_0xF10F2A2453AF1DFB(Var2, unk_0xCFC0C995455A6204(func_16()), 0f, 0f, -2,6f) };
	}
	else if (Global_1582023 == 2)
	{
		uVar0 = unk_0x365DC1E8054AF31A(func_16(), uVar1);
		Var2 = { unk_0x1D49B6C92B9A5B1C(func_16(), uVar0) };
		Local_103.f_144 = { unk_0xF10F2A2453AF1DFB(Var2, unk_0xCFC0C995455A6204(func_16()), 0f, 0f, -2,6f) };
	}
	Var3 = { unk_0x88124E0D60FB8D11(func_16(), 2) };
	unk_0xB2BD5837A8D3CEDA(unk_0xAB3646235DE50E93(Local_103.f_159), Local_103.f_144, 1, 0, 0, 1);
	func_382(Local_103.f_144, (Var3.f_0 + 90f), 180f, 0f);
	Var4 = { unk_0xD1A6A821F5AC81DB(func_16(), 1) };
	Var5 = { 0f, 0f, 0f };
	Local_103.f_116 = func_381(Var5, Var4);
	unk_0x5C96CEA06531AB03(unk_0xAB3646235DE50E93(Local_103.f_159), Local_103.f_116);
	unk_0xCF39804E8C88080E(unk_0xAB3646235DE50E93(Local_103.f_159), (Var3.f_0 - 90f), 0f, Local_103.f_116, 2, 1);
	if (unk_0x9F0C06CFBACDD6A1(Local_103.f_115))
	{
		Local_103.f_115 = unk_0xCA369FBC0DE29517();
		unk_0xBD618A73193F9982(Local_103.f_115, "Missile_Launch", unk_0xAB3646235DE50E93(Local_103.f_159), Local_103.f_157, 1, 0);
	}
}

var func_381(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return unk_0x97BC40FFA2FFCCD2((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1));
}

void func_382(struct<3> Param0, struct<3> Param1)
{
	if (!func_383(Global_1956920.f_13, Param0, 0))
	{
		Global_1956920.f_13 = { Param0 };
		Param1 = { Param1 + Vector(0f, -180f, 180f) };
		Global_1956920.f_16 = { Param1 };
	}
}

bool func_383(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_384(int iParam0)
{
	if (Local_103.f_82[iParam0] > 4)
	{
		return 0f, 0f, 1,5f;
	}
	return 0f, 0f, 1,5f;
}

char* func_385(int iParam0)
{
	if (iParam0 == func_13())
	{
		return "";
	}
	switch (Local_103.f_82[iParam0])
	{
		case 1:
			return "sub_hatch1";
		
		case 2:
			return "sub_hatch2";
		
		case 3:
			return "sub_hatch3";
		
		case 4:
			return "sub_hatch4";
		
		case 5:
			return "sub_hatch5";
		
		case 6:
			return "sub_hatch6";
		
		case 7:
			return "sub_hatch7";
		
		case 8:
			return "sub_hatch8";
		
		default:
	}
	return "sub_hatch4";
}

void func_386()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_392() || !func_38())
	{
		return;
	}
	switch (Local_103.f_80)
	{
		case 0:
			if (!unk_0x93BF17E19A9F0E9B(Local_103.f_160))
			{
				iVar0 = joaat("ch_prop_ch_phone_ing_01a");
				if (func_188(iVar0))
				{
					if (func_102(unk_0xD1797191721E17CE(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_103.f_6, 3))
						{
							unk_0x99C26F3C23B37F42(unk_0xD1797191721E17CE(false, 1) + 1);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_6), 3);
						}
						if (unk_0x78D35ABAF71764AD(1))
						{
							if (func_391(&(Local_103.f_160), iVar0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 0, 1, 1, 0, 0, 0, 1, 0))
							{
								unk_0x4C48F052678AA7EF(Local_103.f_160, unk_0x259BE71D8A81D4FA(), 1);
								iVar1 = unk_0x72F7E39FB49FC0BA(unk_0x4A8C381C258A124D(), 28422);
								unk_0x4D306DD94DD6FDBA(unk_0xAB3646235DE50E93(Local_103.f_160), unk_0x4A8C381C258A124D(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0);
								unk_0x55098D9E9AD58806(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_103.f_80 = 1;
			}
			break;
		
		case 1:
			if (unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_go_straight_to_coord")) != 0 && unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_go_straight_to_coord")) != 1)
			{
				func_342(0, 0, 0);
				Local_103.f_80 = 2;
			}
			break;
		
		case 2:
			if (func_390(0, "CREATE"))
			{
				func_372();
				if (func_389(Local_103.f_160))
				{
					if (!unk_0xE5E2AE8B19267B8A(unk_0xAB3646235DE50E93(Local_103.f_160)))
					{
						unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_103.f_160), true, 0);
					}
				}
				if (func_389(Local_103.f_159))
				{
					if (!unk_0xE5E2AE8B19267B8A(unk_0xAB3646235DE50E93(Local_103.f_159)))
					{
						unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(Local_103.f_159), true, 0);
						unk_0x4285E11B28063EE0(Local_103.f_163, false, 0);
					}
				}
			}
			if (func_387(1))
			{
				unk_0x4D306DD94DD6FDBA(Local_103.f_163, unk_0xAB3646235DE50E93(Local_103.f_159), -1, 0f, 0f, -0,8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
				unk_0x4285E11B28063EE0(Local_103.f_163, false, 0);
				unk_0x2B2ECB6F6371E59E(unk_0xF5014688C9788D5F(Local_103.f_159));
				unk_0x8F07CC6637F60B7F(unk_0xAB3646235DE50E93(Local_103.f_159));
				func_279();
				func_141();
				func_246(1);
				func_258();
				func_361();
				func_379();
				if (unk_0x9F0C06CFBACDD6A1(Local_103.f_40))
				{
					Local_103.f_40 = unk_0xCA369FBC0DE29517();
					unk_0xBF3D28CA44F3BE2D(Local_103.f_40, "HUD_Startup", Local_103.f_157, 1);
				}
				unk_0xE37AF9002E782BA0(1, 0, 0, 1, 1, 0);
				Local_103.f_173 = unk_0x7E3F74F641EE6B27();
				func_393(4);
				func_342(1, 1, 0);
				Local_103.f_80 = 3;
			}
			break;
		
		case 3:
			if (func_387(0))
			{
				iVar2 = unk_0xC5935DFB3F39785A(0, 3);
				switch (iVar2)
				{
					case 0:
						func_342(2, 0, 0);
						Local_103.f_243 = 2;
						break;
					
					case 1:
						func_342(3, 0, 0);
						Local_103.f_243 = 3;
						break;
					
					case 2:
						func_342(4, 0, 0);
						Local_103.f_243 = 4;
						break;
				}
				Local_103.f_80 = 4;
			}
			break;
		
		case 4:
			if (func_387(0))
			{
				func_342(1, 1, 0);
				Local_103.f_80 = 3;
			}
			break;
	}
}

int func_387(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x4A8C381C258A124D();
	if (func_24(iVar0))
	{
		fVar1 = func_388();
		iVar2 = unk_0x643DC062EE904FCA(Local_103.f_79);
		if (unk_0x5266F1D2AEF6F73A(iVar2) && unk_0xBD3B265153D3BA2D(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_344(0);
			}
			return 1;
		}
	}
	return 0;
}

float func_388()
{
	return 0,95f;
}

int func_389(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		unk_0x460D2A8B2C7DC7D4(uParam0);
		return unk_0xEADBDBE0422CF7E6(uParam0);
	}
	return 0;
}

int func_390(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = unk_0x643DC062EE904FCA(Local_103.f_79);
	if (iVar0 != -1)
	{
		if (unk_0x5266F1D2AEF6F73A(iVar0))
		{
			if ((unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), unk_0x70E57E9927B6BA58(sParam1)) || unk_0x5D640DD02AFD9F75(unk_0xAB3646235DE50E93(Local_103.f_160), unk_0x70E57E9927B6BA58(sParam1))) || unk_0x5D640DD02AFD9F75(unk_0xAB3646235DE50E93(Local_103.f_159), unk_0x70E57E9927B6BA58(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_391(var uParam0, int iParam1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (!unk_0x78D35ABAF71764AD(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x16FE0AE33E462D17(unk_0x43AFC452F25F3A2F(iParam1, Param2, iParam4, bParam3, iParam5, iParam10));
	}
	else
	{
		*uParam0 = unk_0x16FE0AE33E462D17(unk_0x4E55EAB577C13329(iParam1, Param2, iParam4, bParam3, iParam5));
	}
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		unk_0x11C125313CB8ADA2(unk_0xAB3646235DE50E93(*uParam0), iParam6);
		if (bParam8)
		{
			unk_0x32C336953C18A3CE(unk_0xAB3646235DE50E93(*uParam0), 1);
		}
		if (bParam9)
		{
			unk_0x4285E11B28063EE0(unk_0xAB3646235DE50E93(*uParam0), false, 0);
		}
		if (unk_0xC8D49539708A80B4(unk_0xAB3646235DE50E93(*uParam0)))
		{
			if (bParam3)
			{
				unk_0x3C1752E361ED8FC9(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool func_392()
{
	return BitTest(Global_1956920, 13);
}

void func_393(int iParam0)
{
	if (Local_103.f_241 != iParam0)
	{
		Local_103.f_241 = iParam0;
	}
}

void func_394(bool bParam0)
{
	if (bParam0)
	{
		if (!func_392())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 13);
		}
	}
	else if (func_392())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 13);
	}
}

void func_395()
{
	struct<3> Var0;
	
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		if (unk_0xEADBDBE0422CF7E6(Local_103.f_159))
		{
			if (!unk_0x78411E34CF90EA8C(Local_103.f_169) && BitTest(Local_103.f_5, 0))
			{
				if (func_406())
				{
					if (func_349())
					{
						func_307(unk_0x259BE71D8A81D4FA(), 0, 33280, 0);
					}
					else if (!func_42())
					{
						func_307(unk_0x259BE71D8A81D4FA(), 0, 512, 0);
					}
					if (!func_405())
					{
						unk_0xC5F6E5CC785FEC20();
					}
					else
					{
						unk_0x8875527DD4E42C07();
					}
					Local_103.f_169 = unk_0xBB209150C6081BBE(26379945, 1);
					unk_0x58BDA5D9262F5D30(Local_103.f_169, Local_103.f_125);
					unk_0x3AAB5D3F3D4028CC(Local_103.f_169, 0,01f);
					unk_0x1991568378B6C0D0(Local_103.f_169, 0,01f);
					unk_0x80F87A4A3B930613();
					if (func_42())
					{
						unk_0x5C483F4653DC993C("eyeinthesky");
					}
					Var0 = { func_404() };
					unk_0x0D5706D462271DC4(Local_103.f_169, unk_0xAB3646235DE50E93(Local_103.f_159), 0f, 0f, 180f, Var0, 1);
					if (func_42())
					{
						unk_0x5E5CEC33463AD803(Local_103.f_169, func_403() - Vector(0f, -180f, 180f), 2);
					}
					unk_0x1A3EA72E4830538F(Local_103.f_150, 75f, 75f);
					unk_0x2D8D239B3F1D13F9(Local_103.f_150, unk_0x9DDBEF363FADFA4C(Local_103.f_169, 2));
					if (!func_17())
					{
						unk_0x935364B4448CD584(unk_0xAB3646235DE50E93(Local_103.f_159), 0);
					}
					if (!func_349())
					{
						if (unk_0x9E2D35FA908F57B4())
						{
							unk_0x6981C3213B841071();
						}
					}
					if (!func_38() && !func_17())
					{
						func_379();
						if (unk_0x9F0C06CFBACDD6A1(Local_103.f_40))
						{
							Local_103.f_40 = unk_0xCA369FBC0DE29517();
							unk_0xBF3D28CA44F3BE2D(Local_103.f_40, "HUD_Startup", Local_103.f_157, 1);
						}
						func_279();
						if (func_93())
						{
							func_112();
						}
						else
						{
							func_141();
						}
						func_246(1);
						func_258();
						func_361();
						unk_0xE37AF9002E782BA0(1, 0, 0, 1, 1, 0);
						Local_103.f_173 = unk_0x7E3F74F641EE6B27();
					}
					func_400(1);
					func_399(1);
					func_397(158);
					unk_0x0B0C9A0F9AAEB7F0(&(Local_101[unk_0x259BE71D8A81D4FA() /*3*/]), 0);
					if (!func_38() && !func_17())
					{
						func_393(4);
					}
					else if (func_17())
					{
						func_393(3);
					}
					else
					{
						Local_103.f_153 = { func_6(unk_0x259BE71D8A81D4FA()) };
						unk_0xB1EAADCB692D69CE(Local_103.f_153, &(Local_103.f_153.f_2), 0, 0);
						Local_103.f_118 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
						func_396();
						Local_103.f_153 = { unk_0xF10F2A2453AF1DFB(Local_103.f_153, Local_103.f_118, -0,0695723f, 0,177497f, 0f) };
						func_393(2);
					}
				}
				else if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
				}
			}
			else
			{
				if (unk_0x78411E34CF90EA8C(Local_103.f_169))
				{
				}
				if (!BitTest(Local_103.f_5, 0))
				{
				}
			}
		}
		else
		{
			unk_0x460D2A8B2C7DC7D4(Local_103.f_159);
		}
	}
}

void func_396()
{
	int iVar0;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar0, 1);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
		}
	}
}

void func_397(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9090)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_398() /*5570*/].f_681.f_4244[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574744.f_1[iVar0] == -1)
			{
				Global_1574744.f_1[iVar0] = iParam0;
				Global_1574744 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_398()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_399(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_370, 26))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_370), 26);
		}
	}
	else if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_370, 26))
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_370), 26);
	}
}

void func_400(bool bParam0)
{
	if (bParam0)
	{
		if (!func_85())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 5);
		}
	}
	else
	{
		if (func_85())
		{
			unk_0x8744D2E3FC95740E(&Global_1956920, 5);
		}
		func_401(0);
	}
}

void func_401(bool bParam0)
{
	if (bParam0)
	{
		if (!func_402())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 12);
		}
	}
	else if (func_402())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 12);
	}
}

bool func_402()
{
	return BitTest(Global_1956920, 12);
}

Vector3 func_403()
{
	return Global_1956920.f_16;
}

Vector3 func_404()
{
	if (func_31() || func_45())
	{
		return 0f, -0,099f, -0,02f;
	}
	else if (func_42())
	{
		return 0f, -0,9f, 0f;
	}
	else if (func_37() || func_168())
	{
		return 0f, -0,038f, -0,006f;
	}
	else if (func_17())
	{
		return 0f, -5,48f, 0f;
	}
	return 0f, -0,038f, -0,004f;
}

bool func_405()
{
	return BitTest(Global_1956920, 10);
}

int func_406()
{
	if (func_46() && !func_48())
	{
		return 1;
	}
	if (func_410())
	{
		return 1;
	}
	if (func_409())
	{
		return 1;
	}
	if (func_48() && func_408())
	{
		return 1;
	}
	if (func_407() && func_408())
	{
		return 1;
	}
	if (!func_79(unk_0x259BE71D8A81D4FA(), 0) && !func_303())
	{
		return 1;
	}
	return 0;
}

int func_407()
{
	if (func_52(unk_0x259BE71D8A81D4FA()) && func_49())
	{
		if (Global_1582023 == 2 || Global_1582023 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_408()
{
	if (Global_1582014 != -1 || Global_1582020 != -1)
	{
		if (((unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_50())
		{
			return 0;
		}
	}
	return 0;
}

int func_409()
{
	return 0;
}

int func_410()
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		return 0;
	}
	if (func_48() || func_411())
	{
		return 0;
	}
	if (func_409())
	{
		return 0;
	}
	return 1;
}

int func_411()
{
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1421,593f, -3011,17f, -80,24994f, -1423,142f, -3012,295f, -77,74994f, 2f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1419,463f, -3009,145f, -80,49994f, -1420,684f, -3010,617f, -77,99994f, 2f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_412()
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	float fVar3;
	
	iVar0 = joaat("blazer5");
	if (func_188(Local_103.f_240) && func_188(iVar0))
	{
		if (!BitTest(Local_103.f_5, 0))
		{
			if (!unk_0x93BF17E19A9F0E9B(Local_103.f_159))
			{
				if (!func_349())
				{
					if (func_148())
					{
						if (func_24(func_354()))
						{
							Var1 = { unk_0xD1A6A821F5AC81DB(func_354(), 1) };
						}
					}
					else
					{
						Var1 = { Local_103.f_138 };
					}
					if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
					{
						func_307(unk_0x259BE71D8A81D4FA(), 0, 512, 0);
					}
					if (!BitTest(Local_103.f_5, 18))
					{
						if (unk_0x4A3280817398D754(Var1, 100f, 1))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 18);
						}
					}
					else if (unk_0x9E2D35FA908F57B4())
					{
						if (!BitTest(Local_103.f_5, 19))
						{
							if (func_418())
							{
								if (func_415())
								{
									unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 19);
								}
							}
							else
							{
								if (!func_266(func_414()))
								{
									Local_103.f_138 = { func_414() };
								}
								unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 19);
								if (func_17())
								{
									Local_103.f_138.f_2 = (Local_103.f_138.f_2 + 1000f);
								}
							}
						}
					}
				}
				if (BitTest(Local_103.f_5, 19) || func_349())
				{
					if (!BitTest(Local_103.f_5, 20))
					{
						Local_103.f_163 = unk_0x5779387E956077A6(iVar0, Local_103.f_138, 0f, 0, 0, 0);
						unk_0x935364B4448CD584(Local_103.f_163, 1);
						unk_0x62C438C53BB57AFD(Local_103.f_163, Local_103.f_138, 0, 0, 1);
						unk_0x52528272B59EBA11(Local_103.f_163, 0, 0);
						unk_0x4285E11B28063EE0(Local_103.f_163, false, 0);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 20);
					}
					else if (func_102(unk_0xD1797191721E17CE(false, 1) + 1, 0, 1))
					{
						if (!BitTest(Local_103.f_5, 30))
						{
							unk_0x99C26F3C23B37F42(unk_0xD1797191721E17CE(false, 1) + 1);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 30);
						}
						if (unk_0x78D35ABAF71764AD(1))
						{
							bVar2 = func_413();
							if (func_38())
							{
								Local_103.f_153 = { func_6(unk_0x259BE71D8A81D4FA()) };
								unk_0xB1EAADCB692D69CE(Local_103.f_153, &(Local_103.f_153.f_2), 0, 0);
								Local_103.f_138 = { unk_0xBE8776D2466E9EA6(Local_103.f_158, "ENTER", Local_103.f_153, unk_0x88124E0D60FB8D11(unk_0x4A8C381C258A124D(), 2), 0, 2) };
							}
							if (func_391(&(Local_103.f_159), Local_103.f_240, Local_103.f_138, 0, 1, 1, 1, 1, 0, bVar2, 0))
							{
								Global_1956920.f_20 = unk_0xAB3646235DE50E93(Local_103.f_159);
								unk_0x935364B4448CD584(unk_0xAB3646235DE50E93(Local_103.f_159), 1);
								if (func_148())
								{
									if (func_24(func_354()))
									{
										unk_0xCF39804E8C88080E(func_25(), unk_0x88124E0D60FB8D11(func_354(), 2), 2, 1);
										fVar3 = (unk_0xCFC0C995455A6204(func_354()) + 180f);
									}
								}
								Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_431 = { Local_103.f_138 };
								Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_434 = fVar3;
								Local_101[unk_0x259BE71D8A81D4FA() /*3*/].f_2 = Local_103.f_159;
								unk_0x4C48F052678AA7EF(Local_103.f_159, unk_0x259BE71D8A81D4FA(), 1);
								unk_0x6E562EEC4008A0C5(unk_0xF5014688C9788D5F(Local_103.f_159), 1);
								unk_0x788F35D395511DFE(unk_0xF5014688C9788D5F(Local_103.f_159), 1, 1);
								unk_0x62C438C53BB57AFD(func_25(), Local_103.f_138, 0, 0, 1);
								unk_0x5C96CEA06531AB03(func_25(), fVar3);
								unk_0x52C980E21BCCC469(func_25(), 1);
								if (!func_266(func_403()))
								{
									unk_0xCF39804E8C88080E(func_25(), func_403(), 2, 1);
								}
								if (func_42() || func_17())
								{
									unk_0x52528272B59EBA11(func_25(), 0, 0);
								}
								unk_0x6CBA9D07DDF3A4F4(Local_103.f_159, 1);
								if (func_173(unk_0x259BE71D8A81D4FA()))
								{
									unk_0xD25E9BDC14A0B649(func_25(), Global_262145.f_24241 * 5, 0, 0);
								}
								else if (func_17())
								{
									unk_0xD25E9BDC14A0B649(func_25(), 1, 0, 0);
									unk_0x3C1752E361ED8FC9(Local_103.f_159, 1);
									unk_0xF88FC425EC7D675D(unk_0xF5014688C9788D5F(Local_103.f_159), 700);
								}
								else
								{
									unk_0xD25E9BDC14A0B649(func_25(), Global_262145.f_24241, 0, 0);
								}
								unk_0x8FC511FC963C67E5(Local_103.f_159, 0);
								unk_0x3A95CBA6857C4C37(unk_0xF5014688C9788D5F(Local_103.f_159), 1);
								unk_0x1A3EA72E4830538F(Local_103.f_138, 100f, 200f);
								unk_0x2D8D239B3F1D13F9(unk_0xD1A6A821F5AC81DB(unk_0xF5014688C9788D5F(Local_103.f_159), 1), unk_0x88124E0D60FB8D11(unk_0xF5014688C9788D5F(Local_103.f_159), 2));
								unk_0x55098D9E9AD58806(Local_103.f_240);
								unk_0x55098D9E9AD58806(iVar0);
							}
						}
					}
				}
			}
			else
			{
				unk_0xBF861D73D95BF415(unk_0xAB3646235DE50E93(Local_103.f_159), 0);
				if (func_24(Local_103.f_163))
				{
					if (func_24(unk_0xF5014688C9788D5F(Local_103.f_159)))
					{
						unk_0x4D306DD94DD6FDBA(Local_103.f_163, unk_0xAB3646235DE50E93(Local_103.f_159), -1, 0f, 0f, -0,8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 0);
					}
				}
			}
		}
	}
}

int func_413()
{
	if (func_38())
	{
		return 1;
	}
	if (func_17())
	{
		return 1;
	}
	return 0;
}

Vector3 func_414()
{
	return Global_1956920.f_13;
}

int func_415()
{
	if (Local_103.f_16 == 0)
	{
		if (!BitTest(Local_103.f_5, 14))
		{
			if ((!func_173(unk_0x259BE71D8A81D4FA()) && func_148()) && func_24(func_354()))
			{
				Local_103.f_138 = { unk_0xF10F2A2453AF1DFB(unk_0xD1A6A821F5AC81DB(func_354(), 1), unk_0xCFC0C995455A6204(func_354()), -0,7f, 1,6f, 4f) };
				unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 14);
			}
			else
			{
				if (func_148() && func_24(func_354()))
				{
					Local_103.f_138 = { unk_0xF10F2A2453AF1DFB(unk_0xD1A6A821F5AC81DB(func_354(), 1), unk_0xCFC0C995455A6204(func_354()), -0,7f, 1,6f, 4f) };
				}
				Local_103.f_138 = unk_0xD2AA6F822D3A55D2((Local_103.f_138 - 1,5f), (Local_103.f_138 + 1,5f));
				Local_103.f_138.f_1 = unk_0xD2AA6F822D3A55D2((Local_103.f_138.f_1 - 1,5f), (Local_103.f_138.f_1 + 1,5f));
				Local_103.f_138.f_2 = unk_0xD2AA6F822D3A55D2((Local_103.f_138.f_2 + 0,5f), (Local_103.f_138.f_2 + 1,5f));
				if (!func_417(Local_103.f_138))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 14);
				}
			}
		}
		else if (BitTest(Local_103.f_5, 15))
		{
			Local_103.f_138 = unk_0xD2AA6F822D3A55D2((Local_103.f_138 - 1,5f), (Local_103.f_138 + 1,5f));
			Local_103.f_138.f_1 = unk_0xD2AA6F822D3A55D2((Local_103.f_138.f_1 - 1,5f), (Local_103.f_138.f_1 + 1,5f));
			Local_103.f_138.f_2 = unk_0xD2AA6F822D3A55D2((Local_103.f_138.f_2 + 0,5f), (Local_103.f_138.f_2 + 1,5f));
			if (!func_417(Local_103.f_138))
			{
				unk_0x8744D2E3FC95740E(&(Local_103.f_5), 15);
			}
		}
		func_416(Local_103.f_138);
	}
	else if (Local_103.f_16 == 1 && !func_417(Local_103.f_138))
	{
		return 1;
	}
	else
	{
		Local_103.f_16 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 15);
	}
	return 0;
}

void func_416(struct<3> Param0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	var uVar5;
	int iVar6;
	
	switch (Local_103.f_15)
	{
		case 0:
			if (func_148())
			{
				if (func_24(func_354()))
				{
					iVar0 = func_354();
				}
			}
			if (func_31() || func_45())
			{
				fVar1 = func_224(Local_103.f_240);
			}
			else
			{
				fVar1 = (func_224(Local_103.f_240) * 11f);
			}
			Local_103.f_168 = unk_0x26C582EF5CD8A3A2(Param0, Param0, fVar1, 511, iVar0, 4);
			if (Local_103.f_168 != 0)
			{
				Local_103.f_15 = 1;
			}
			break;
		
		case 1:
			iVar6 = unk_0x0E7DD1EBCA8D2DE3(Local_103.f_168, &iVar2, &Var4, &uVar3, &uVar5);
			if (iVar6 == 2)
			{
				if (iVar2 == 0)
				{
					Local_103.f_16 = 1;
					Var4 = { 0f, 0f, 0f };
				}
				else
				{
					Local_103.f_16 = 2;
					Local_103.f_168 = 0;
					Local_103.f_15 = 0;
				}
			}
			else if (iVar6 == 0)
			{
				Local_103.f_15 = 0;
			}
			break;
	}
}

int func_417(struct<3> Param0)
{
	if (unk_0x26715B0ED6702C87(Param0, -1036,27f, -228,704f, 53,76435f, -1096,765f, -258,69f, 35,77808f, 20f, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_418()
{
	if (func_148())
	{
		return 1;
	}
	if (func_37() && !func_38())
	{
		return 1;
	}
	return 0;
}

int func_419()
{
	if (func_303())
	{
		return Global_1943520.f_560 == 0;
	}
	return 0;
}

void func_420()
{
	if (func_26(unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		Local_103.f_141 = { func_267(&Local_103) };
		if (!func_266(func_414()))
		{
			Local_103.f_138 = { func_414() };
		}
		else
		{
			Local_103.f_138 = { func_6(unk_0x259BE71D8A81D4FA()) };
			Local_103.f_138 = { Local_103.f_138, Local_103.f_138.f_1, (Local_103.f_138.f_2 + 1,5f) };
		}
		if (func_79(unk_0x259BE71D8A81D4FA(), 0))
		{
			func_470(1);
		}
		if (func_79(unk_0x259BE71D8A81D4FA(), 0))
		{
			func_467();
		}
		else if (((func_465(unk_0x259BE71D8A81D4FA()) == 2 || func_465(unk_0x259BE71D8A81D4FA()) == 1) && !BitTest(Global_1963846, 6)) && !BitTest(Global_1963847, 0))
		{
			if (BitTest(Global_2707890, 0))
			{
				func_464(1);
				func_456(0, 0);
				func_455();
				func_401(1);
				func_393(1);
			}
		}
		else if ((func_47() && func_451()) && !BitTest(Global_1963846, 6))
		{
			func_436();
		}
		else if (BitTest(Global_1963846, 6) && BitTest(Global_1963847, 0))
		{
			func_456(0, 0);
			func_401(1);
			func_393(1);
		}
		else if (func_17())
		{
			func_422();
		}
		else if (func_38() && !func_421())
		{
			unk_0x428C32CC68809A35(1);
			func_146("PIM_DRONAMOS", -1);
			func_307(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
			func_393(7);
		}
		else if (func_266(Local_103.f_135))
		{
			Local_103.f_156 = 0;
			func_401(1);
			func_393(1);
		}
	}
}

bool func_421()
{
	return BitTest(Global_1956920, 23);
}

void func_422()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	
	if ((func_407() && !func_435()) && !func_426())
	{
		if (unk_0x6D05C5731A838CB3(2, 201) || unk_0x4465D55576678706(2, 201))
		{
			if (Global_1582023 == 1)
			{
				Local_103.f_82[unk_0x259BE71D8A81D4FA()] = unk_0xC5935DFB3F39785A(1, 5);
			}
			else
			{
				Local_103.f_82[unk_0x259BE71D8A81D4FA()] = unk_0xC5935DFB3F39785A(5, 9);
			}
			if (Global_1582023 == 1)
			{
				uVar0 = unk_0x365DC1E8054AF31A(func_16(), func_385(unk_0x259BE71D8A81D4FA()));
				Var1 = { unk_0x1D49B6C92B9A5B1C(func_16(), uVar0) };
				Local_103.f_144 = { unk_0xF10F2A2453AF1DFB(Var1, unk_0xCFC0C995455A6204(func_16()), 0f, 0f, -2,6f) };
			}
			else if (Global_1582023 == 2)
			{
				uVar0 = unk_0x365DC1E8054AF31A(func_16(), func_385(unk_0x259BE71D8A81D4FA()));
				Var1 = { unk_0x1D49B6C92B9A5B1C(func_16(), uVar0) };
				Local_103.f_144 = { unk_0xF10F2A2453AF1DFB(Var1, unk_0xCFC0C995455A6204(func_16()), 0f, 0f, -2,6f) };
			}
			Var2 = { unk_0x88124E0D60FB8D11(func_16(), 2) };
			func_382(Local_103.f_144, (Var2.f_0 + 90f), 180f, Var2.f_2);
			func_401(1);
			func_425(Local_103.f_82[unk_0x259BE71D8A81D4FA()]);
			func_393(1);
			func_424();
			func_423();
			unk_0x428C32CC68809A35(1);
		}
	}
	else if (!func_24(func_16()))
	{
	}
	if (func_435())
	{
		if (func_203("MP_SUBSEAT_2"))
		{
			unk_0x428C32CC68809A35(1);
		}
	}
}

void func_423()
{
	Global_2738934.f_368++;
}

void func_424()
{
	Global_2738934.f_368 = 0;
	Global_2738934.f_368.f_1 = 0;
}

void func_425(var uParam0)
{
	struct<4> Var0;
	int iVar1;
	
	Var0.f_0 = 1799415011;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = uParam0;
	iVar1 = func_200(0, 1);
	if (iVar1 != 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 4, iVar1, Var0.f_0);
	}
}

int func_426()
{
	struct<3> Var0;
	int iVar1;
	
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1420,915f, -3009,132f, -79,99994f, -1421,98f, -3009,121f, -77,74994f, 1f, 0, 1, 0))
	{
		return 1;
	}
	if (!func_24(unk_0x4A8C381C258A124D()) && BitTest(Global_1956920.f_2, 2))
	{
		return 1;
	}
	if (func_434())
	{
		return 1;
	}
	if (func_433())
	{
		return 1;
	}
	if (unk_0x4D9174D8796EA622())
	{
		return 1;
	}
	if (func_303())
	{
		return 1;
	}
	if (func_79(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (func_53(Global_1845120))
		{
			return 1;
		}
	}
	if (func_148())
	{
		if (func_432())
		{
			if (func_431())
			{
				return 1;
			}
			if (BitTest(Local_103.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_17())
	{
		if ((func_430() && Global_1582023 == 1) || (func_429() && Global_1582023 == 2))
		{
			return 1;
		}
		if (BitTest(Local_103.f_5, 28))
		{
			return 1;
		}
		if (!func_24(func_16()))
		{
			return 1;
		}
		Var0 = { unk_0xD1A6A821F5AC81DB(func_16(), 1) };
		if (Var0.f_2 <= -3f)
		{
			return 1;
		}
		iVar1 = unk_0xFD5C5BBD1FE92BB7(func_16(), -1, 0);
		if (func_24(iVar1))
		{
			if (unk_0x501EBB0523078750(iVar1))
			{
				if (func_207(unk_0x1C1C92A1CBAE364B(iVar1)))
				{
					return 1;
				}
			}
		}
	}
	if (func_207(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (func_86(0))
	{
		return 1;
	}
	if (func_318())
	{
		return 1;
	}
	if (func_148())
	{
		if (func_46())
		{
			if (func_26(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				if (func_165(unk_0x4A8C381C258A124D(), -1422,188f, -3015,926f, -80,1554f, 1) < 1,5f)
				{
					return 1;
				}
				if (func_428())
				{
					return 1;
				}
			}
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || func_427(unk_0x4A8C381C258A124D(), 1))
			{
				return 1;
			}
		}
	}
	if (func_205())
	{
		return 1;
	}
	if (Global_262145.f_24250)
	{
		return 1;
	}
	if (BitTest(Local_103.f_5, 27))
	{
		return 1;
	}
	if (func_79(unk_0x259BE71D8A81D4FA(), 0))
	{
		if (func_24(func_354()))
		{
			if ((unk_0x5105BE70DEF1F5FB(func_354(), -136,1614f, 4617,176f, 124,5134f, -490,3058f, 4924,749f, 159,0677f, 19,5f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(func_354(), 908,465f, 34,85726f, 79,35429f, 926,4139f, 64,37743f, 87,99218f, 19f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(func_354(), 946,8937f, -6,119501f, 77,90774f, 962,0698f, -5,454865f, 88,65581f, 10,75f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1582018)
	{
		return 1;
	}
	if (Global_2710424)
	{
		return 1;
	}
	if (Global_2710419)
	{
		return 1;
	}
	return 0;
}

int func_427(int iParam0, int iParam1)
{
	if (iParam1 && (!unk_0xFC8BFE4B41177C22(iParam0) || unk_0x1C2F771CDC87A3A5(iParam0, 0)))
	{
		return 0;
	}
	if (unk_0x12623527E5B8AB7C(iParam0, 2))
	{
		return 1;
	}
	if (unk_0xF9F8E3060F7CAEDB(iParam0) != 0 || unk_0x31945A289F1359A1(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_428()
{
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1420,588f, -3013,374f, -79,99994f, -1421,918f, -3012,804f, -77,99994f, 0,675f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_429()
{
	if (unk_0x259BE71D8A81D4FA() == func_13())
	{
		return 0;
	}
	if (Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_11 != func_13() && unk_0x259BE71D8A81D4FA() != func_13())
	{
		return BitTest(Global_1845281[Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_11 /*883*/].f_268.f_484, 2);
	}
	return 0;
}

int func_430()
{
	if (unk_0x259BE71D8A81D4FA() == func_13())
	{
		return 0;
	}
	if (Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_11 != func_13() && unk_0x259BE71D8A81D4FA() != func_13())
	{
		return BitTest(Global_1845281[Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_11 /*883*/].f_268.f_484, 1);
	}
	return 0;
}

int func_431()
{
	if (Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_11 != func_13() && unk_0x259BE71D8A81D4FA() != func_13())
	{
		return BitTest(Global_1845281[Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_11 /*883*/].f_268.f_370, 20);
	}
	return 0;
}

int func_432()
{
	if (func_173(unk_0x259BE71D8A81D4FA()) && Global_1956920.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_433()
{
	if (Global_2672855.f_990.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_434()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

int func_435()
{
	char* sVar0;
	
	sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
	if (func_71(unk_0x4A8C381C258A124D()))
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
	}
	if ((((((((unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), sVar0, "enter_left", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), sVar0, "enter", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), sVar0, "exit", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), sVar0, "exit_left", 3)) || func_69(unk_0x4A8C381C258A124D(), joaat("script_task_go_straight_to_coord")))
	{
		return 1;
	}
	return 0;
}

void func_436()
{
	struct<3> Var0;
	var uVar1;
	
	if (!func_426())
	{
		if ((((((func_450() || func_449()) && !Global_1928440) && func_451()) && !BitTest(Global_2707768, 6)) && Global_1574973) && !(func_450() && Global_262145.f_26208))
		{
			if ((((((unk_0x875A214D5EBCA509(2, 224) || unk_0xDEE3EFEA31A1F555(2, 224)) && !unk_0x875A214D5EBCA509(2, 223)) && !unk_0xDEE3EFEA31A1F555(2, 223)) && !unk_0x875A214D5EBCA509(2, 235)) && !unk_0xDEE3EFEA31A1F555(2, 235)) && !unk_0x4465D55576678706(2, 19))
			{
				if (unk_0x0AF5E4A6C74DC312(Global_262145.f_26210, 0, 0, 1, -1, 0) || BitTest(Global_2707768, 2))
				{
					unk_0x0B0C9A0F9AAEB7F0(&Global_2707768, 0);
					func_456(0, 0);
					func_401(1);
					func_393(1);
					func_444();
					func_442(73, -1);
					func_438();
					Var0 = { func_437() };
					func_382(Var0, 0f, 0f, 0f);
					if (func_450())
					{
						unk_0xBD618A73193F9982(uVar1, "Select_Spec_Drone", unk_0x4A8C381C258A124D(), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
					}
				}
				else if (!BitTest(Global_2707768, 4))
				{
					unk_0x0B0C9A0F9AAEB7F0(&Global_2707768, 4);
				}
			}
		}
	}
}

Vector3 func_437()
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	Var3 = { 2800f, -3800,2f, 170f };
	if ((Global_4718592.f_178456.f_1 == 3 || Global_4718592.f_178456.f_1 == 3) || Global_4718592.f_178456.f_1 == 3)
	{
		Var3.f_1 = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(unk_0xAE032CEDCF23C6D5()));
	fVar2 = (fVar2 * IntToFloat((unk_0xAE032CEDCF23C6D5() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return unk_0xF10F2A2453AF1DFB(Var3, fVar0, fVar1, fVar2, 0f);
}

void func_438()
{
	int iVar0;
	
	iVar0 = func_439(73, -1);
	if (iVar0 >= 50)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_377.f_3), 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_377.f_3), 13);
	}
}

int func_439(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_440(iParam0, iParam1);
	if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_440(var uParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(8, uParam0, func_441(uParam1));
}

int func_441(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_128();
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

void func_442(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_439(iParam0, func_441(iParam1));
	iVar0++;
	func_443(iParam0, iVar0, iParam1);
}

void func_443(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_440(uParam0, uParam2);
	unk_0x1164A75E490C27B6(iVar0, iParam1, 1);
}

void func_444()
{
	func_445(7985, -1);
}

void func_445(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_448(iParam0, func_441(iParam1));
	iVar0++;
	func_446(iParam0, iVar0, iParam1, 1);
}

void func_446(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_447(iParam0, uParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_447(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_441(uParam1));
}

int func_448(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_447(iParam0, uParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_449()
{
	return Global_2696200;
}

int func_450()
{
	if (Global_2696199 >= 0 && Global_2696199 < 10)
	{
		return 1;
	}
	return 0;
}

int func_451()
{
	int iVar0;
	int iVar1;
	
	if (func_454() && !func_453())
	{
		return 1;
	}
	iVar0 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_1058116.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((BitTest(Global_4718592.f_3592[iVar0 /*25891*/].f_8552[iVar1], 23) && BitTest(Global_4718592.f_3592[iVar0 /*25891*/].f_8552[iVar1], 24)) && BitTest(Global_4718592.f_3592[iVar0 /*25891*/].f_8552[iVar1], 25)) && BitTest(Global_4718592.f_3592[iVar0 /*25891*/].f_8552[iVar1], 26)) && BitTest(Global_4718592.f_32, 16))
		{
			return 1;
		}
	}
	if (!BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	else if (func_449() || func_452(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	return 0;
}

var func_452(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_36.f_18, 14);
}

int func_453()
{
	if (Global_4718592.f_127755 == 1 || Global_4718592.f_127755 == 2)
	{
		return 1;
	}
	return 0;
}

var func_454()
{
	return BitTest(Global_4718592.f_178389, 12);
}

void func_455()
{
	unk_0x8744D2E3FC95740E(&Global_2707890, 0);
}

void func_456(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	Local_103.f_119 = Global_262145.f_24244;
	Local_103.f_130 = 40f;
	if (func_171())
	{
		Local_103.f_119 = 200f;
		Local_103.f_130 = 90f;
	}
	else if (func_45() || func_31())
	{
		Local_103.f_119 = (Local_103.f_119 * 4,5f);
	}
	else if (func_42())
	{
		Local_103.f_119 = 100f;
		Local_103.f_130 = 26f;
	}
	else if (func_37())
	{
		Local_103.f_119 = 100f;
		Local_103.f_130 = 70f;
	}
	else if (func_168())
	{
		Local_103.f_119 = 10f;
		Local_103.f_130 = 35f;
	}
	else if (func_17())
	{
		Local_103.f_119 = 149f;
		Local_103.f_130 = 16f;
	}
	if (func_45())
	{
		Local_103.f_240 = joaat("xs_prop_arena_drone_01");
	}
	else if (func_31())
	{
		Local_103.f_240 = joaat("xs_prop_arena_drone_02");
	}
	else if (func_42())
	{
		Local_103.f_240 = joaat("xs_prop_arena_airmissile_01a");
		func_463(1);
	}
	else if (func_37())
	{
		if (!func_38())
		{
			iVar0 = func_462(unk_0x259BE71D8A81D4FA());
			switch (iVar0)
			{
				case 37:
					Local_103.f_240 = joaat("ch_prop_arcade_drone_01d");
					break;
				
				case 38:
					Local_103.f_240 = joaat("ch_prop_arcade_drone_01a");
					break;
				
				case 39:
					Local_103.f_240 = joaat("ch_prop_arcade_drone_01c");
					break;
				
				case 40:
					Local_103.f_240 = joaat("ch_prop_arcade_drone_01b");
					break;
			}
		}
		else
		{
			Local_103.f_240 = joaat("ch_prop_casino_drone_01a");
		}
	}
	else if (func_168())
	{
		Local_103.f_240 = joaat("ch_prop_casino_drone_01a");
	}
	else if (func_17())
	{
		Local_103.f_240 = joaat("h4_prop_h4_airmissile_01a");
		func_463(1);
	}
	else
	{
		Local_103.f_240 = joaat("ba_prop_battle_drone_quad");
	}
	if (bParam1)
	{
		Local_103.f_138 = { Local_103.f_144 };
	}
	Global_1956920.f_1 = 1500;
	func_461();
	func_460(1);
	func_459(1);
	if (func_45() || func_93())
	{
		func_458(1);
	}
	else if (func_31())
	{
		func_458(0);
	}
	if (func_38())
	{
		Local_103.f_158 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		unk_0x80813AC549A1E8AE(Local_103.f_158);
	}
	if (func_31())
	{
		unk_0xEBEE7DC21AB44EC9("scr_xs_dr");
	}
	if (func_38())
	{
		func_457(Global_262145.f_28314);
	}
	else if (func_37() && !func_38())
	{
		func_457(Global_262145.f_28315);
	}
	else if (func_17())
	{
		func_457(system::to_float(Global_262145.f_29636));
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			Local_103.f_46[iVar1] = -1;
			iVar1++;
		}
	}
	else if (!func_148() && !func_349())
	{
		func_457(200f);
	}
	func_96(Global_1837309);
	if (bParam0)
	{
	}
}

void func_457(float fParam0)
{
	if (Global_1956920.f_8 != fParam0)
	{
		Global_1956920.f_8 = fParam0;
	}
}

void func_458(bool bParam0)
{
	if (bParam0)
	{
		if (!func_201())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 8);
		}
	}
	else if (func_201())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 8);
	}
}

void func_459(bool bParam0)
{
	if (bParam0)
	{
		if (!func_366())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 2);
		}
	}
	else if (func_366())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 2);
	}
}

void func_460(bool bParam0)
{
	if (bParam0)
	{
		if (!func_256())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 4);
		}
	}
	else if (func_256())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 4);
	}
}

void func_461()
{
	if (!Local_103.f_156)
	{
		Local_103.f_18 = 100;
	}
	if (func_168())
	{
		Local_103.f_24 = 100;
	}
	Local_103.f_19 = 0;
	Local_103.f_20 = 100;
	Local_103.f_125 = 90f;
	Local_103.f_128 = 90f;
	if (!func_93())
	{
		Local_103.f_170 = unk_0x8DE4F68A9728925E("DRONE_CAM");
	}
	else if (func_17())
	{
		Local_103.f_170 = func_121();
	}
	else
	{
		Local_103.f_170 = func_120();
	}
	if (func_45())
	{
		Local_103.f_157 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_31())
	{
		Local_103.f_157 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_42())
	{
		Local_103.f_157 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else if (func_17())
	{
		Local_103.f_157 = "DLC_H4_Piloted_Missile_Sounds";
	}
	else
	{
		Local_103.f_157 = "DLC_BTL_Drone_Sounds";
	}
}

int func_462(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_2657971[iParam0 /*465*/].f_438.f_1;
	}
	return -1;
}

void func_463(bool bParam0)
{
	if (bParam0)
	{
		if (!func_212())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 15);
		}
	}
	else if (func_212())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 15);
	}
}

void func_464(bool bParam0)
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

int func_465(int iParam0)
{
	if (iParam0 == unk_0x259BE71D8A81D4FA() && !func_466())
	{
		return Global_2707795.f_1;
	}
	return Global_2648938.f_1400[iParam0 /*3*/].f_1;
}

int func_466()
{
	if (((Global_2707798 != 0 && Global_2707798 == Global_2707799) && Global_2707787 != 3) && Global_2707787 != 1)
	{
		return 0;
	}
	return 1;
}

void func_467()
{
	if (!func_426())
	{
		if (func_48())
		{
			if (func_410())
			{
				if (!unk_0x4C705AAF75363287() && !unk_0x3273F980CC5E02CD())
				{
					func_469("DRONE_TRIG");
				}
			}
			else if (func_203("DRONE_TRIG"))
			{
				unk_0x428C32CC68809A35(1);
			}
			if (func_48() || func_409())
			{
				if (unk_0x2645430E708CBFAC(2, 176) || unk_0x61C3701AD6D746B2(2, 176))
				{
					func_401(1);
					func_393(1);
					unk_0x428C32CC68809A35(1);
				}
			}
			else if (func_203("DRONE_TRIG"))
			{
				if ((unk_0x2645430E708CBFAC(2, 51) || unk_0x61C3701AD6D746B2(2, 51)) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					Local_103.f_156 = 0;
					func_401(1);
					func_393(1);
					unk_0x428C32CC68809A35(1);
				}
			}
		}
		else if ((func_46() && !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1420,684f, -3010,617f, -77,99994f, -1423,142f, -3012,295f, -77,74994f, 2f, 0, 1, 0)) && func_410())
		{
			if (!unk_0x4C705AAF75363287() && !unk_0x3273F980CC5E02CD())
			{
				func_469("DRONE_TRIG");
			}
			if (func_203("DRONE_TRIG"))
			{
				if (unk_0x2645430E708CBFAC(2, 51) || unk_0x61C3701AD6D746B2(2, 51))
				{
					Local_103.f_156 = 0;
					func_401(1);
					func_393(1);
					unk_0x428C32CC68809A35(1);
				}
			}
		}
		else if (func_203("DRONE_TRIG"))
		{
			unk_0x428C32CC68809A35(1);
		}
		if (func_468() || func_48())
		{
			if (func_203("DRONE_TRIG"))
			{
				unk_0x428C32CC68809A35(1);
			}
		}
	}
	else if (func_203("DRONE_TRIG"))
	{
		unk_0x428C32CC68809A35(1);
	}
}

int func_468()
{
	if ((((unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_69(unk_0x4A8C381C258A124D(), joaat("script_task_go_straight_to_coord")))
	{
		return 1;
	}
	if ((unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

void func_469(char* sParam0)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

void func_470(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1956920.f_2, 1))
		{
			Global_1956920.f_2 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1956920.f_2), 1);
		}
	}
	else if (BitTest(Global_1956920.f_2, 1))
	{
		unk_0x8744D2E3FC95740E(&(Global_1956920.f_2), 1);
	}
}

void func_471()
{
	char* sVar0;
	
	if (Local_103.f_45 == -1)
	{
		return;
	}
	if (!func_473(Local_103.f_45) && !func_472(Local_103.f_45))
	{
		return;
	}
	if (unk_0x93BF17E19A9F0E9B(Local_101[Local_103.f_45 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		unk_0xEBEE7DC21AB44EC9(sVar0);
		if (unk_0x939D49C9FAA8139A(sVar0))
		{
			if (!unk_0x9CFFB7009B578840(Local_103.f_174[Local_103.f_45]))
			{
				unk_0xD03F4780B97A39AE(sVar0);
				if (func_473(Local_103.f_45))
				{
					Local_103.f_174[Local_103.f_45] = unk_0x62750FD2BDD8BD49("scr_xs_guided_missile_trail", unk_0xAB3646235DE50E93(Local_101[Local_103.f_45 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				}
				else
				{
					Local_103.f_174[Local_103.f_45] = unk_0x62750FD2BDD8BD49("scr_xs_guided_missile_trail", unk_0xAB3646235DE50E93(Local_101[Local_103.f_45 /*3*/].f_2), 0f, 0,25f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
				}
			}
		}
	}
	else if (unk_0x9CFFB7009B578840(Local_103.f_174[Local_103.f_45]))
	{
		unk_0x182120534CCF9023(Local_103.f_174[Local_103.f_45], 0);
	}
}

int func_472(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Local_101[iParam0 /*3*/].f_1 == 8)
		{
			return 1;
		}
	}
	return 0;
}

int func_473(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Local_101[iParam0 /*3*/].f_1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_474()
{
	if (!func_491(6) && !func_477())
	{
		return;
	}
	if (Local_103.f_45 != -1)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_101[Local_103.f_45 /*3*/].f_2) && func_24(unk_0xAB3646235DE50E93(Local_101[Local_103.f_45 /*3*/].f_2)))
		{
			if (func_476(Local_103.f_45))
			{
				Local_103.f_157 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_475(Local_103.f_45))
			{
				Local_103.f_157 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_473(Local_103.f_45))
			{
				Local_103.f_157 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else if (func_472(Local_103.f_45))
			{
				Local_103.f_157 = "DLC_H4_Piloted_Missile_Sounds";
			}
			else
			{
				Local_103.f_157 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_103.f_46[Local_103.f_45] == -1)
			{
				Local_103.f_46[Local_103.f_45] = unk_0xCA369FBC0DE29517();
				unk_0xBD618A73193F9982(Local_103.f_46[Local_103.f_45], "Flight_Loop", unk_0xAB3646235DE50E93(Local_101[Local_103.f_45 /*3*/].f_2), Local_103.f_157, 0, 0);
				unk_0x3F002AA9562BF0BE(Local_103.f_46[Local_103.f_45], "DroneRotationalSpeed", 1f);
			}
			else
			{
				unk_0x3F002AA9562BF0BE(Local_103.f_46[Local_103.f_45], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_103.f_46[Local_103.f_45] != -1)
		{
			unk_0x8E4825CCACA34B58(Local_103.f_46[Local_103.f_45]);
			unk_0x394AFAC073E1F277(Local_103.f_46[Local_103.f_45]);
			Local_103.f_46[Local_103.f_45] = -1;
		}
	}
}

int func_475(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Local_101[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_476(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Local_101[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_477()
{
	return BitTest(Global_1943520.f_7, 14);
}

void func_478()
{
	int iVar0;
	var uVar1;
	char* sVar2;
	var uVar3;
	var uVar4;
	
	if (Local_103.f_45 == -1)
	{
		return;
	}
	iVar0 = Local_103.f_45;
	if (!func_26(iVar0, 1, 1))
	{
		return;
	}
	if (!func_491(6) && !func_477())
	{
		return;
	}
	if (BitTest(Local_103.f_117, Local_103.f_45))
	{
		uVar1 = func_479(Global_2657971[Local_103.f_45 /*465*/].f_322.f_11);
		if (!func_24(uVar1))
		{
			return;
		}
		sVar2 = "scr_ih_sub";
		unk_0xEBEE7DC21AB44EC9(sVar2);
		if (unk_0x939D49C9FAA8139A(sVar2))
		{
			if (!unk_0x9CFFB7009B578840(Local_103.f_207[iVar0]))
			{
				unk_0xD03F4780B97A39AE(sVar2);
				uVar3 = func_385(iVar0);
				uVar4 = unk_0x365DC1E8054AF31A(uVar1, uVar3);
				Local_103.f_207[iVar0] = unk_0x3B8EE54DFE24F06C("scr_ih_sub_missile_launch", iVar1, func_384(iVar0), 0f, 0f, 0f, uVar4, 5f, 0, 0, 0);
			}
			else if (!func_32(&(Local_103.f_281[iVar0 /*2*/])))
			{
				func_30(&(Local_103.f_281[iVar0 /*2*/]), 0, 0);
				unk_0xABAD28B5A427340D(Local_103.f_207[iVar0], "flame", 0,15f, 0);
			}
			if (func_32(&(Local_103.f_281[iVar0 /*2*/])))
			{
				if (func_29(&(Local_103.f_281[iVar0 /*2*/]), 3000, 0))
				{
					if (unk_0x9CFFB7009B578840(Local_103.f_207[iVar0]))
					{
						unk_0x182120534CCF9023(Local_103.f_207[iVar0], 0);
					}
					func_28(&(Local_103.f_281[iVar0 /*2*/]));
					unk_0x8744D2E3FC95740E(&(Local_103.f_117), Local_103.f_45);
				}
				else if (func_29(&(Local_103.f_281[iVar0 /*2*/]), 2000, 0))
				{
					unk_0xABAD28B5A427340D(Local_103.f_207[iVar0], "flame", 0f, 0);
				}
			}
		}
	}
}

int func_479(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (unk_0xFC8BFE4B41177C22(Global_1962102[iParam0]))
		{
			return Global_1962102[iParam0];
		}
	}
	return -1;
}

void func_480()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x703C4F7316B7195D(1))
	{
		iVar1 = unk_0x4BC3E5D2FB0A1665(1, iVar0);
		switch (iVar1)
		{
			case 186:
				if (!func_491(6))
				{
					func_482(iVar0);
				}
				break;
			
			case 174:
				unk_0xFCEF367B86651ED3(1, iVar0, &iVar2, 3);
				switch (iVar2)
				{
					case 1799415011:
						if (Global_1683951.f_855)
						{
							return;
						}
						func_481(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_481(int iParam0)
{
	struct<4> Var0;
	
	if (!func_491(6) && !func_477())
	{
		return;
	}
	if (unk_0xFCEF367B86651ED3(1, iParam0, &Var0, 4))
	{
		if (Var0.f_1 != func_13())
		{
			Local_103.f_82[Var0.f_1] = Var0.f_3;
			unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_117), Var0.f_1);
		}
	}
}

void func_482(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		if (unk_0xFCEF367B86651ED3(1, iParam0, &Var0, 13))
		{
			if (unk_0xFC8BFE4B41177C22(Var0.f_0) && unk_0xF5014688C9788D5F(Local_103.f_159) == Var0.f_0)
			{
				if (unk_0xFC8BFE4B41177C22(Var0.f_1))
				{
					if (unk_0x0101C509A6E67F99(Var0.f_1))
					{
						if (unk_0x501EBB0523078750(unk_0xBD545F8729E9F413(Var0.f_1)) && unk_0x4A8C381C258A124D() != unk_0xBD545F8729E9F413(Var0.f_1))
						{
							Local_103.f_26 = 2;
						}
					}
				}
			}
		}
	}
}

void func_483()
{
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_103.f_159), 0))
		{
			Local_103.f_150 = { unk_0xD1A6A821F5AC81DB(unk_0xE38610F405049F71(Local_103.f_159), 1) };
			Local_103.f_124 = unk_0xCFC0C995455A6204(unk_0xE38610F405049F71(Local_103.f_159));
			if (!func_32(&(Local_103.f_261)))
			{
				func_30(&(Local_103.f_261), 0, 0);
			}
			else if (func_29(&(Local_103.f_261), 1000, 0))
			{
				if (!func_383(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_431, Local_103.f_150, 0))
				{
					Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_431 = { Local_103.f_150 };
				}
				if (Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_434 != unk_0xCFC0C995455A6204(unk_0xE38610F405049F71(Local_103.f_159)))
				{
					Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_434 = unk_0xCFC0C995455A6204(unk_0xE38610F405049F71(Local_103.f_159));
				}
				func_28(&(Local_103.f_261));
			}
		}
	}
	if (func_24(Local_103.f_163))
	{
		if (unk_0xE5E2AE8B19267B8A(Local_103.f_163))
		{
			unk_0x4285E11B28063EE0(Local_103.f_163, false, 0);
		}
	}
	if (func_24(Local_103.f_161))
	{
		if (unk_0xE5E2AE8B19267B8A(Local_103.f_161))
		{
			unk_0x4285E11B28063EE0(Local_103.f_161, false, 0);
		}
	}
}

void func_484()
{
	if (func_491(4))
	{
		if ((((func_148() || func_31()) || func_45()) || (func_37() && !func_38())) || func_17())
		{
			if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
			{
				func_307(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
			}
		}
		unk_0x66EFB3D6110055C4(0, 37, 0);
		if (func_17())
		{
			func_487();
		}
		if (!func_42())
		{
			func_485();
			unk_0xB211E45F1FE1ED2D(0, 19, 1);
			unk_0xB211E45F1FE1ED2D(0, 166, 1);
			unk_0xB211E45F1FE1ED2D(0, 167, 1);
			unk_0xB211E45F1FE1ED2D(0, 168, 1);
			unk_0xB211E45F1FE1ED2D(0, 169, 1);
			unk_0xB211E45F1FE1ED2D(2, 218, 1);
			unk_0xB211E45F1FE1ED2D(2, 219, 1);
			unk_0xB211E45F1FE1ED2D(2, 220, 1);
			unk_0xB211E45F1FE1ED2D(2, 221, 1);
			unk_0xB211E45F1FE1ED2D(2, 205, 1);
			unk_0xB211E45F1FE1ED2D(2, 206, 1);
			unk_0xB211E45F1FE1ED2D(2, 207, 1);
			unk_0xB211E45F1FE1ED2D(2, 208, 1);
			unk_0xB211E45F1FE1ED2D(2, 209, 1);
			unk_0xB211E45F1FE1ED2D(2, 210, 1);
			unk_0xB211E45F1FE1ED2D(2, 202, 1);
			unk_0xB211E45F1FE1ED2D(2, 51, 1);
			unk_0xB211E45F1FE1ED2D(2, 190, 1);
			unk_0xB211E45F1FE1ED2D(2, 189, 1);
			unk_0xB211E45F1FE1ED2D(2, 188, 1);
			unk_0xB211E45F1FE1ED2D(2, 187, 1);
			unk_0xB211E45F1FE1ED2D(2, 201, 1);
			unk_0xB211E45F1FE1ED2D(2, 199, 1);
			unk_0xB211E45F1FE1ED2D(2, 200, 1);
			if (func_17())
			{
				unk_0xB211E45F1FE1ED2D(2, 20, 1);
			}
			if (unk_0xAE231F549813BBDF(0))
			{
				unk_0xB211E45F1FE1ED2D(0, 238, 1);
				unk_0xB211E45F1FE1ED2D(0, 237, 1);
				unk_0xB211E45F1FE1ED2D(2, 235, 1);
				unk_0xB211E45F1FE1ED2D(2, 234, 1);
				unk_0xB211E45F1FE1ED2D(2, 1, 1);
				unk_0xB211E45F1FE1ED2D(2, 174, 1);
				unk_0xB211E45F1FE1ED2D(2, 175, 1);
				unk_0xB211E45F1FE1ED2D(0, 174, 1);
				unk_0xB211E45F1FE1ED2D(0, 175, 1);
				unk_0xB211E45F1FE1ED2D(0, 245, 1);
				unk_0xB211E45F1FE1ED2D(0, 246, 1);
				unk_0xB211E45F1FE1ED2D(0, 247, 1);
				unk_0xB211E45F1FE1ED2D(0, 248, 1);
			}
			if (unk_0x4D9174D8796EA622())
			{
				unk_0xB211E45F1FE1ED2D(0, 201, 1);
				unk_0xB211E45F1FE1ED2D(0, 202, 1);
				unk_0xB211E45F1FE1ED2D(0, 188, 1);
				unk_0xB211E45F1FE1ED2D(0, 187, 1);
				unk_0xB211E45F1FE1ED2D(0, 189, 1);
				unk_0xB211E45F1FE1ED2D(2, 195, 1);
				unk_0xB211E45F1FE1ED2D(2, 196, 1);
				unk_0xB211E45F1FE1ED2D(2, 198, 1);
				unk_0xB211E45F1FE1ED2D(2, 197, 1);
				unk_0xB211E45F1FE1ED2D(2, 217, 1);
			}
		}
	}
}

void func_485()
{
	func_486();
}

void func_486()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 365)
	{
		unk_0x66EFB3D6110055C4(0, iVar0, 1);
		iVar0++;
	}
}

void func_487()
{
	Global_23692.f_6 = 1;
}

void func_488()
{
	if (BitTest(Local_103.f_5, 28))
	{
		if (!func_32(&(Local_103.f_263)))
		{
			func_30(&(Local_103.f_263), 0, 0);
		}
		else if (func_29(&(Local_103.f_263), 5000, 0))
		{
			unk_0x8744D2E3FC95740E(&(Local_103.f_5), 28);
			func_28(&(Local_103.f_263));
		}
	}
}

void func_489()
{
	int iVar0;
	
	if (BitTest(Local_103.f_5, 27))
	{
		if (Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_11 != func_13())
		{
			iVar0 = Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_11;
		}
		else if (Global_1845120 != func_13())
		{
			iVar0 = Global_1845120;
		}
		else if (func_288(unk_0x259BE71D8A81D4FA(), 0))
		{
			if (func_175() != func_13())
			{
				iVar0 = func_175();
			}
		}
		if (iVar0 != func_13())
		{
			if (unk_0x762604C40829DB72(iVar0))
			{
				if (unk_0x76CD105BCAC6EB9F())
				{
					func_187(iVar0, 0, 1, 0);
					unk_0x8744D2E3FC95740E(&(Local_103.f_5), 27);
				}
			}
		}
	}
}

void func_490()
{
	struct<3> Var0;
	
	if (func_148())
	{
		if (func_491(1))
		{
			if (func_24(func_354()))
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(func_354(), 1) };
				unk_0x1A3EA72E4830538F(Var0, 200f, 200f);
				unk_0x2485C562F3C50736(Local_103.f_150, 60f, 30);
			}
		}
	}
	if (func_491(1) || func_491(4))
	{
		if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
		{
			if (unk_0x78411E34CF90EA8C(Local_103.f_169) && unk_0x8DE2438443E6A145(Local_103.f_169))
			{
				if (func_491(4))
				{
					if (!func_266(Local_103.f_150))
					{
						unk_0x1A3EA72E4830538F(Local_103.f_150, 60f, 200f);
						unk_0x87B6357C65356CB1();
						unk_0x2D8D239B3F1D13F9(Local_103.f_150, unk_0xE5741C6B6539231F(unk_0xAB3646235DE50E93(Local_103.f_159)));
						if ((unk_0x8034325BF6D6E41F() % 120) == 0)
						{
							unk_0x2485C562F3C50736(Local_103.f_150, 60f, 30);
						}
					}
				}
			}
		}
	}
}

bool func_491(int iParam0)
{
	return Local_103.f_241 == iParam0;
}

int func_492()
{
	if (func_497())
	{
		return 1;
	}
	if (!func_315())
	{
		return 1;
	}
	if (unk_0x259BE71D8A81D4FA() != func_13())
	{
		if (!func_496())
		{
			if (func_274(unk_0x259BE71D8A81D4FA()) && !func_273())
			{
				return 1;
			}
		}
	}
	if (!func_24(unk_0x4A8C381C258A124D()) && BitTest(Global_1956920.f_2, 2))
	{
		return 1;
	}
	if (func_209(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (func_11(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (func_496())
	{
		if (func_495())
		{
			return 1;
		}
		if (func_14(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			return 1;
		}
		if (func_47())
		{
			return 1;
		}
		if (!func_494() && !func_493())
		{
			if (func_29(&(Local_103.f_279), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_28(&(Local_103.f_279));
		}
	}
	return 0;
}

int func_493()
{
	if (Global_1956920.f_22 != func_13())
	{
		if (Global_2657971[Global_1956920.f_22 /*465*/].f_322.f_11 != func_13())
		{
			if (func_24(Global_1962102[Global_2657971[Global_1956920.f_22 /*465*/].f_322.f_11]))
			{
				if (func_26(unk_0x259BE71D8A81D4FA(), 1, 1))
				{
					if (system::vdist2(func_6(unk_0x259BE71D8A81D4FA()), unk_0xD1A6A821F5AC81DB(Global_1962102[Global_2657971[Global_1956920.f_22 /*465*/].f_322.f_11], 1)) < 490000f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_494()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			if (BitTest(Local_101[iVar0 /*3*/], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_495()
{
	return BitTest(Global_1956920, 22);
}

bool func_496()
{
	return BitTest(Global_1956920.f_2, 9);
}

bool func_497()
{
	return BitTest(Global_1956920, 0);
}

int func_498()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_505())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_504())
	{
		return 1;
	}
	if (func_503(159))
	{
		if (!func_502())
		{
			return 1;
		}
	}
	if (func_503(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_499() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_499()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_499()
{
	switch (func_501())
	{
		case 0:
			return func_500();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_500()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_501()
{
	return Global_32948;
}

bool func_502()
{
	return Global_2684504.f_700;
}

int func_503(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_504()
{
	return Global_2696172;
}

bool func_505()
{
	return Global_2684504.f_695;
}

void func_506()
{
	system::wait(0);
}

void func_507(bool bParam0)
{
	if (!func_496())
	{
		func_514(bParam0);
	}
	else
	{
		func_508();
	}
}

void func_508()
{
	Global_1956920.f_22 = func_13();
	func_28(&(Local_103.f_279));
	func_513(0);
	func_512(0);
	func_511(0);
	func_510(0);
	func_509();
}

void func_509()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_510(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1956920.f_2, 9))
		{
			Global_1956920.f_2 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1956920.f_2), 9);
		}
	}
	else if (BitTest(Global_1956920.f_2, 9))
	{
		unk_0x8744D2E3FC95740E(&(Global_1956920.f_2), 9);
	}
}

void func_511(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1956920, 21))
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 21);
		}
	}
	else if (BitTest(Global_1956920, 21))
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 21);
	}
}

void func_512(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1956920, 22))
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 22);
		}
	}
	else if (BitTest(Global_1956920, 22))
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 22);
	}
}

void func_513(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_311, 31))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_311), 31);
		}
	}
	else if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_311, 31))
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_311), 31);
	}
}

void func_514(bool bParam0)
{
	var uVar0;
	struct<8> Var1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	struct<8> Var6;
	
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_159))
	{
		unk_0x8FC511FC963C67E5(Local_103.f_159, 1);
		if (unk_0xEADBDBE0422CF7E6(Local_103.f_159))
		{
			if (!BitTest(Local_103.f_6, 2))
			{
				if (func_93())
				{
					if (func_24(unk_0x4A8C381C258A124D()))
					{
						unk_0x8F03CD462437C002(unk_0x4A8C381C258A124D(), func_347(), func_346(), func_345(), 1, 0, 1065353216);
					}
					else
					{
						unk_0xD2FD15A3D9DEE4CC(func_347(), func_346(), func_345(), 1, 0, 1065353216, 0);
					}
					unk_0x97A041099E92C69F(0, 300, system::round((200f * Local_103.f_131)));
					unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_6), 2);
				}
			}
			unk_0xE3F88173F42C071B();
			uVar0 = unk_0xAB3646235DE50E93(Local_103.f_159);
			unk_0x091AB029AFE429F2(uVar0, 0, 1);
			unk_0x51C8BEA2005931AB(&uVar0);
		}
		else
		{
			unk_0x460D2A8B2C7DC7D4(Local_103.f_159);
			return;
		}
	}
	if (func_37() && !func_38())
	{
		Var1 = -1;
		Var1.f_6 = 1073741824;
		Var1.f_7 = -1073741824;
		Var1.f_3 = 0;
		Var1.f_4 = 0;
		func_539(&Var1, 11);
	}
	if (func_203("DRONE_TRIG"))
	{
		unk_0x428C32CC68809A35(1);
	}
	if (func_24(Local_103.f_161))
	{
		uVar2 = Local_103.f_161;
		unk_0x734A9F4537A31459(&uVar2);
	}
	if (unk_0xFC8BFE4B41177C22(Local_103.f_162))
	{
		unk_0x51C8BEA2005931AB(&(Local_103.f_162));
	}
	if (unk_0xC450B06E5AAA0985(Local_103.f_171))
	{
		unk_0xFE54B8568B2ABD12(&(Local_103.f_171));
	}
	if (unk_0xC450B06E5AAA0985(Local_103.f_172))
	{
		unk_0xFE54B8568B2ABD12(&(Local_103.f_172));
	}
	if (unk_0xFC8BFE4B41177C22(Local_103.f_163))
	{
		unk_0x8C1F7D7A31B2A38E(&(Local_103.f_163));
	}
	unk_0x8875527DD4E42C07();
	unk_0xF3E3EA936C653F22();
	unk_0x33311EBA9464741D();
	unk_0xC4C6378884E06FBD(0f);
	if (func_248())
	{
		func_247(0);
	}
	func_536();
	func_336(1, -1);
	func_535();
	if (func_38())
	{
		func_344(0);
	}
	if (unk_0x93BF17E19A9F0E9B(Local_103.f_160))
	{
		uVar3 = unk_0xAB3646235DE50E93(Local_103.f_160);
		unk_0x51C8BEA2005931AB(&uVar3);
	}
	if (!bParam0)
	{
		if (!unk_0xD6F9DEE4765092A9(Local_103.f_158))
		{
			unk_0x268BE77F77533D03(Local_103.f_158);
		}
		func_534(0);
	}
	func_257(0);
	if (func_532() && (!func_274(unk_0x259BE71D8A81D4FA()) || func_273()))
	{
		func_307(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), false);
	}
	Local_103.f_120 = 0f;
	Local_103.f_121 = 0f;
	Local_103.f_12 = 0;
	Local_103.f_14 = 0;
	Local_103.f_10 = 0;
	Local_103.f_16 = 0;
	func_28(&(Local_103.f_245));
	func_28(&(Local_103.f_247));
	if (!Local_103.f_156)
	{
		func_28(&(Local_103.f_249));
	}
	func_28(&(Local_103.f_253));
	func_28(&(Local_103.f_251));
	func_28(&(Local_103.f_255));
	func_28(&(Local_103.f_259));
	func_28(&(Local_103.f_265));
	func_28(&(Local_103.f_263));
	func_28(&(Local_103.f_261));
	func_28(&(Local_103.f_267));
	func_28(&(Local_103.f_269));
	func_28(&(Local_103.f_271));
	func_28(&(Local_103.f_275));
	func_28(&(Local_103.f_277));
	func_28(&(Local_103.f_257));
	func_28(&(Local_103.f_346));
	if (unk_0x259BE71D8A81D4FA() != func_13())
	{
		func_28(&(Local_103.f_281[unk_0x259BE71D8A81D4FA() /*2*/]));
	}
	Local_103.f_28 = 0;
	Local_103.f_5 = 0;
	Local_103.f_6 = 0;
	Global_1956920.f_4 = -1;
	func_531(-1f);
	func_457(0f);
	func_254(0);
	func_460(0);
	func_530(0);
	func_458(0);
	func_231(0);
	func_529(0);
	func_185(0);
	func_528(0);
	func_527(0);
	func_526(0);
	func_525(0);
	func_524(0);
	func_82(1);
	func_301(0);
	func_299(0);
	func_305(0);
	func_463(0);
	unk_0x8744D2E3FC95740E(&Global_1956920, 29);
	func_382(0f, 0f, 0f, 0f, 0f, 0f);
	func_523();
	Global_1956920.f_24 = -1;
	unk_0x8744D2E3FC95740E(&Global_2707768, 0);
	unk_0x8744D2E3FC95740E(&Global_1963847, 0);
	func_393(0);
	if (!func_522(0))
	{
		func_297();
	}
	if (func_85())
	{
		func_118("SET_WARNING_IS_VISIBLE", 0);
		if (func_148() || func_17())
		{
			if (Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_11 != func_13() && unk_0x762604C40829DB72(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_11))
			{
				iVar4 = Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_11;
			}
			else if ((func_148() && Global_1845120 != func_13()) && unk_0x762604C40829DB72(Global_1845120))
			{
				iVar4 = Global_1845120;
			}
			else if ((func_17() && Global_1845121 != func_13()) && unk_0x762604C40829DB72(Global_1845121))
			{
				iVar4 = Global_1845121;
			}
			else if (func_288(unk_0x259BE71D8A81D4FA(), 0))
			{
				if (func_175() != func_13() && unk_0x762604C40829DB72(func_175()))
				{
					iVar4 = func_175();
				}
			}
			if (iVar4 != func_13())
			{
				if (unk_0x762604C40829DB72(iVar4) && unk_0x76CD105BCAC6EB9F())
				{
					if (func_148())
					{
						func_187(iVar4, 0, 1, 0);
					}
					else if (func_17())
					{
						func_187(iVar4, 0, 8, Global_1582023);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 28);
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 27);
				}
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 27);
			}
		}
		else if (func_37() || func_168())
		{
			func_28(&Global_1956861);
			func_521(300000);
			func_520(1);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_103.f_5), 28);
		}
		func_400(0);
		func_399(0);
		unk_0x8744D2E3FC95740E(&(Local_101[unk_0x259BE71D8A81D4FA() /*3*/]), 0);
		iVar5 = unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Local_103.f_173));
		if (func_37() || func_168())
		{
			Var6.f_7 = Global_786547;
			Var6.f_1 = Global_786547.f_1;
			if (unk_0x834C960822A4683F())
			{
				Var6.f_0 = Global_4718592.f_127178;
			}
			else
			{
				Var6.f_0 = func_519(unk_0x259BE71D8A81D4FA());
			}
			Var6.f_6 = 1;
			Var6.f_4 = Local_103.f_27;
			Var6.f_5 = Local_103.f_29;
			Var6.f_3 = iVar5;
			Var6.f_2 = Local_103.f_26;
			unk_0xF13CC26EA89AA7F8(&Var6);
		}
		else
		{
			unk_0x4836A505A59A567B(iVar5, Local_103.f_26, Local_103.f_27);
		}
		if (func_17())
		{
			func_517(2, func_518());
		}
	}
	func_516();
	func_401(0);
	func_272(0);
	func_194(0);
	unk_0xD314260005F064BF(&(Local_103.f_170));
	if (func_189(1) != 0)
	{
		unk_0x55098D9E9AD58806(func_189(1));
	}
	if (func_189(0) != 0)
	{
		unk_0x55098D9E9AD58806(func_189(0));
	}
	func_394(0);
	func_336(1, -1);
	Local_103.f_26 = 0;
	Local_103.f_27 = 0;
	Local_103.f_29 = 0;
	unk_0x6E8A7BB566D1F7AF(Local_103.f_28);
	if (unk_0x9CFFB7009B578840(Local_103.f_174[unk_0x259BE71D8A81D4FA()]))
	{
		unk_0x182120534CCF9023(Local_103.f_174[unk_0x259BE71D8A81D4FA()], 0);
	}
	if (unk_0x9CFFB7009B578840(Local_103.f_207[unk_0x259BE71D8A81D4FA()]))
	{
		unk_0x182120534CCF9023(Local_103.f_207[unk_0x259BE71D8A81D4FA()], 0);
	}
	if (!bParam0)
	{
		if (!func_173(unk_0x259BE71D8A81D4FA()))
		{
			func_515(0f, 0f, 0f, 0f);
		}
		Global_1956920.f_2 = 0;
		func_509();
	}
	else
	{
		func_456(0, 1);
	}
}

void func_515(struct<3> Param0, float fParam1)
{
	if (!func_383(Global_1956920.f_10, Param0, 0))
	{
		Global_1956920.f_10 = { Param0 };
		Global_1956920.f_7 = fParam1;
	}
}

void func_516()
{
	int iVar0;
	
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_41))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_41);
		unk_0x394AFAC073E1F277(Local_103.f_41);
		Local_103.f_41 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_30))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_30);
		unk_0x394AFAC073E1F277(Local_103.f_30);
		Local_103.f_30 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_31))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_31);
		unk_0x394AFAC073E1F277(Local_103.f_31);
		Local_103.f_31 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_32))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_32);
		unk_0x394AFAC073E1F277(Local_103.f_32);
		Local_103.f_32 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_33))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_33);
		unk_0x394AFAC073E1F277(Local_103.f_33);
		Local_103.f_33 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_34))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_34);
		unk_0x394AFAC073E1F277(Local_103.f_34);
		Local_103.f_34 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_40))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_40);
		unk_0x394AFAC073E1F277(Local_103.f_40);
		Local_103.f_40 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_39))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_39);
		unk_0x394AFAC073E1F277(Local_103.f_39);
		Local_103.f_39 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_38))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_38);
		unk_0x394AFAC073E1F277(Local_103.f_38);
		Local_103.f_38 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_37))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_37);
		unk_0x394AFAC073E1F277(Local_103.f_37);
		Local_103.f_37 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_36))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_36);
		unk_0x394AFAC073E1F277(Local_103.f_36);
		Local_103.f_36 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_35))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_35);
		unk_0x394AFAC073E1F277(Local_103.f_35);
		Local_103.f_35 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_42))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_42);
		unk_0x394AFAC073E1F277(Local_103.f_42);
		Local_103.f_42 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_43))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_43);
		unk_0x394AFAC073E1F277(Local_103.f_43);
		Local_103.f_43 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_81))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_81);
		unk_0x394AFAC073E1F277(Local_103.f_81);
		Local_103.f_81 = -1;
	}
	if (!unk_0x9F0C06CFBACDD6A1(Local_103.f_115))
	{
		unk_0x8E4825CCACA34B58(Local_103.f_115);
		unk_0x394AFAC073E1F277(Local_103.f_115);
		Local_103.f_115 = -1;
	}
	if (func_496())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_103.f_46[iVar0] != -1)
			{
				unk_0x8E4825CCACA34B58(Local_103.f_46[iVar0]);
				unk_0x394AFAC073E1F277(Local_103.f_46[iVar0]);
				Local_103.f_46[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_167();
	if (unk_0xBC2EE32DE886BD08("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		unk_0xB43467C43086A6A1("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (unk_0xBC2EE32DE886BD08("dlc_aw_arena_piloted_missile_scene"))
	{
		unk_0xB43467C43086A6A1("dlc_aw_arena_piloted_missile_scene");
	}
	if (unk_0xBC2EE32DE886BD08("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		unk_0xB43467C43086A6A1("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (unk_0xBC2EE32DE886BD08("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		unk_0xB43467C43086A6A1("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
	if (unk_0xBC2EE32DE886BD08("dlc_hei4_submarine_guided_missile_Scene"))
	{
		unk_0xB43467C43086A6A1("dlc_hei4_submarine_guided_missile_Scene");
	}
}

void func_517(int iParam0, var uParam1)
{
	if (Global_2738934.f_368 > 0 || Global_2738934.f_368.f_1 > 0)
	{
		unk_0xC155FF33EAAF8C90(iParam0, uParam1, Global_2738934.f_368, Global_2738934.f_368.f_1);
	}
	func_424();
}

bool func_518()
{
	return Global_1845121 == unk_0x259BE71D8A81D4FA();
}

int func_519(int iParam0)
{
	if (func_21(iParam0) == 243)
	{
		return func_19(iParam0);
	}
	return -1;
}

void func_520(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_370, 20))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_370), 20);
		}
	}
	else if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_370, 20))
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_370), 20);
	}
}

void func_521(int iParam0)
{
	if (Global_1956920.f_5 != iParam0)
	{
		Global_1956920.f_5 = iParam0;
	}
}

bool func_522(int iParam0)
{
	return Local_103.f_242 == iParam0;
}

void func_523()
{
	if (func_181())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 7);
	}
}

void func_524(bool bParam0)
{
	if (bParam0)
	{
		if (func_85())
		{
			if (!BitTest(Global_1956920, 16))
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 16);
			}
		}
	}
	else if (BitTest(Global_1956920, 16))
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 16);
	}
}

void func_525(bool bParam0)
{
	if (bParam0)
	{
		if (!func_497())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 6);
		}
	}
	else if (func_497())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 6);
	}
}

void func_526(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1956920, 3))
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 3);
		}
	}
	else if (BitTest(Global_1956920, 3))
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 3);
	}
}

void func_527(bool bParam0)
{
	if (bParam0)
	{
		if (!func_80())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 28);
		}
	}
	else if (func_80())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 28);
	}
}

void func_528(bool bParam0)
{
	if (bParam0)
	{
		if (!func_171())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 27);
		}
	}
	else if (func_171())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 27);
	}
}

void func_529(bool bParam0)
{
	if (bParam0)
	{
		if (!func_405())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 10);
		}
	}
	else if (func_405())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 10);
	}
}

void func_530(bool bParam0)
{
	if (bParam0)
	{
		if (unk_0x486FF5D06E9659F1(unk_0x70E57E9927B6BA58("AM_MP_DRONE")) > 0)
		{
			if (!func_497())
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 0);
			}
		}
	}
	else if (func_497())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 0);
	}
}

void func_531(float fParam0)
{
	if (Global_1956920.f_9 != fParam0)
	{
		Global_1956920.f_9 = fParam0;
	}
}

int func_532()
{
	if (!func_315())
	{
		return 0;
	}
	if (func_12(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!func_85())
	{
		return 0;
	}
	if (func_93())
	{
		return 0;
	}
	if (func_171() && (!func_533(0) || !func_9(func_175())))
	{
		return 0;
	}
	return 1;
}

bool func_533(bool bParam0)
{
	return func_288(unk_0x259BE71D8A81D4FA(), bParam0);
}

void func_534(bool bParam0)
{
	if (bParam0)
	{
		if (!func_38())
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1956920, 24);
		}
	}
	else if (func_38())
	{
		unk_0x8744D2E3FC95740E(&Global_1956920, 24);
	}
}

void func_535()
{
	if (unk_0x78411E34CF90EA8C(Local_103.f_169))
	{
		unk_0x85E6A1E36B5E2E4D(Local_103.f_169, 0);
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		if (!func_44() || BitTest(Local_103.f_6, 0))
		{
			unk_0x80F87A4A3B930613();
		}
	}
}

void func_536()
{
	if (unk_0x78411E34CF90EA8C(Local_103.f_169))
	{
		if (func_538(unk_0x259BE71D8A81D4FA()))
		{
			func_537(0);
		}
	}
}

void func_537(bool bParam0)
{
	if (bParam0)
	{
		Global_1943520.f_3865 = bParam0;
	}
	if (!Global_1943520.f_3864)
	{
		Global_1943520.f_3864 = 1;
	}
}

int func_538(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (func_26(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
		else if ((Global_1575083 && iParam0 == unk_0x259BE71D8A81D4FA()) && func_26(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8 != -1;
		}
	}
	return 0;
}

void func_539(var uParam0, int iParam1)
{
	struct<9> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	Var0.f_6 = 1073741824;
	Var0.f_7 = -1073741824;
	Var0.f_0 = 66206781;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam1;
	Var0.f_4 = uParam0->f_3;
	Var0.f_5 = uParam0->f_4;
	Var0.f_6 = uParam0->f_6;
	Var0.f_7 = uParam0->f_7;
	Var0.f_8 = uParam0->f_8;
	bVar1 = false;
	if (iParam1 == 11)
	{
		if (BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_438, 1))
		{
			unk_0x8744D2E3FC95740E(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_438), 1);
			bVar1 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_32(&(uParam0->f_1)))
	{
		func_30(&(uParam0->f_1), 0, 0);
	}
	bVar2 = true;
	if (*uParam0 == iParam1 && !bVar1)
	{
		if (func_32(&(uParam0->f_1)) && !func_29(&(uParam0->f_1), 1000, 0))
		{
			bVar2 = false;
		}
		else
		{
			func_28(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_28(&(uParam0->f_1));
	}
	if (bVar2)
	{
		iVar3 = func_8(unk_0x259BE71D8A81D4FA());
		if (iVar3 != -1)
		{
			unk_0x71A6F836422FDD2B(1, &Var0, 9, iVar3, Var0.f_0);
			uParam0->f_5 = 1;
		}
	}
}

void func_540(struct<9> Param0, var uParam1, var uParam2, var uParam3)
{
	unk_0xDB2434E51017FFCC(32, 0, Param0.f_0);
	func_549(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&uLocal_102, 1, 0);
	unk_0x7B13DC83218D9AF5(&Local_101, 97, 0);
	if (!func_548())
	{
		func_507(0);
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_496())
		{
			Local_103.f_135 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (unk_0xFC8BFE4B41177C22(func_354()) && !unk_0x1C2F771CDC87A3A5(func_354(), 0))
					{
						Local_103.f_144 = { unk_0xF10F2A2453AF1DFB(unk_0xD1A6A821F5AC81DB(func_354(), 1), unk_0xCFC0C995455A6204(func_354()), 0f, 1,6f, 2,9f) };
						Local_103.f_138 = { Local_103.f_144 };
					}
					func_470(1);
					Local_101[unk_0x259BE71D8A81D4FA() /*3*/].f_1 = 1;
					Global_1906887[unk_0x259BE71D8A81D4FA() /*304*/].f_100 = 1;
					break;
				
				case 2:
					func_547(1);
					Local_103.f_144 = { Param0.f_5 };
					Local_101[unk_0x259BE71D8A81D4FA() /*3*/].f_1 = 2;
					Global_1906887[unk_0x259BE71D8A81D4FA() /*304*/].f_100 = 2;
					break;
				
				case 3:
					func_546(1);
					Local_103.f_144 = { Param0.f_5 };
					Local_101[unk_0x259BE71D8A81D4FA() /*3*/].f_1 = 3;
					Global_1906887[unk_0x259BE71D8A81D4FA() /*304*/].f_100 = 3;
					break;
				
				case 4:
					func_464(1);
					Local_103.f_144 = { Param0.f_5 };
					Local_101[unk_0x259BE71D8A81D4FA() /*3*/].f_1 = 4;
					Global_1906887[unk_0x259BE71D8A81D4FA() /*304*/].f_100 = 4;
					break;
				
				case 5:
					func_545(1);
					Local_103.f_144 = { Param0.f_5 };
					Local_101[unk_0x259BE71D8A81D4FA() /*3*/].f_1 = 5;
					Global_1906887[unk_0x259BE71D8A81D4FA() /*304*/].f_100 = 5;
					break;
				
				case 6:
					func_544(1);
					Local_103.f_144 = { Param0.f_5 };
					Local_101[unk_0x259BE71D8A81D4FA() /*3*/].f_1 = 6;
					Global_1906887[unk_0x259BE71D8A81D4FA() /*304*/].f_100 = 6;
					break;
				
				case 8:
					func_543(1);
					Local_103.f_144 = { Param0.f_5 };
					Local_101[unk_0x259BE71D8A81D4FA() /*3*/].f_1 = 8;
					Global_1906887[unk_0x259BE71D8A81D4FA() /*304*/].f_100 = 8;
					break;
				
				case 9:
					func_510(1);
					Local_101[unk_0x259BE71D8A81D4FA() /*3*/].f_1 = 9;
					Global_1906887[unk_0x259BE71D8A81D4FA() /*304*/].f_100 = 9;
					break;
				
				default:
					func_542(1);
					Local_103.f_144 = { Param0.f_5 };
					break;
			}
			Local_103.f_141 = { Param0.f_8 };
			if (func_266(func_414()))
			{
				func_382(Local_103.f_144, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_507(0);
	}
	if (!func_496())
	{
		func_456(1, 1);
	}
	else
	{
		func_541();
	}
}

void func_541()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_103.f_46[iVar0] = -1;
		iVar0++;
	}
	func_393(6);
}

void func_542(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1956920.f_2, 0))
		{
			Global_1956920.f_2 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1956920.f_2), 0);
		}
	}
	else if (BitTest(Global_1956920.f_2, 0))
	{
		unk_0x8744D2E3FC95740E(&(Global_1956920.f_2), 0);
	}
}

void func_543(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1956920.f_2, 8))
		{
			Global_1956920.f_2 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1956920.f_2), 8);
		}
	}
	else if (BitTest(Global_1956920.f_2, 8))
	{
		unk_0x8744D2E3FC95740E(&(Global_1956920.f_2), 8);
	}
}

void func_544(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1956920.f_2, 6))
		{
			Global_1956920.f_2 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1956920.f_2), 6);
		}
	}
	else if (BitTest(Global_1956920.f_2, 6))
	{
		unk_0x8744D2E3FC95740E(&(Global_1956920.f_2), 6);
	}
}

void func_545(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1956920.f_2, 5))
		{
			Global_1956920.f_2 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1956920.f_2), 5);
		}
	}
	else if (BitTest(Global_1956920.f_2, 5))
	{
		unk_0x8744D2E3FC95740E(&(Global_1956920.f_2), 5);
	}
}

void func_546(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1956920.f_2, 3))
		{
			Global_1956920.f_2 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1956920.f_2), 3);
		}
	}
	else if (BitTest(Global_1956920.f_2, 3))
	{
		unk_0x8744D2E3FC95740E(&(Global_1956920.f_2), 3);
	}
}

void func_547(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1956920.f_2, 2))
		{
			Global_1956920.f_2 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1956920.f_2), 2);
		}
	}
	else if (BitTest(Global_1956920.f_2, 2))
	{
		unk_0x8744D2E3FC95740E(&(Global_1956920.f_2), 2);
	}
}

int func_548()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 0;
		}
		if (unk_0x37F4AB46DE999660())
		{
			return 1;
		}
		if (func_505())
		{
			return 0;
		}
		if (func_503(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

int func_549(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_509();
			}
			else
			{
				return 0;
			}
		}
		if (!func_550(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_509();
					}
					else
					{
						return 0;
					}
				}
				if (func_505())
				{
					if (!bParam2)
					{
						func_509();
					}
					else
					{
						return 0;
					}
				}
				if (func_503(157))
				{
					if (!bParam2)
					{
						func_509();
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
					func_509();
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
				func_509();
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
			func_509();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_550(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

