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
	var uLocal_100 = -1;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	struct<26> Local_108 = { 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<6> Local_112[8];
	struct<1297> Local_113 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 } ;
	var uLocal_114 = 10;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 4;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	struct<21> Local_131 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
		if (func_689(unk_0x259BE71D8A81D4FA(), 0, 1))
		{
			if (!func_685(ScriptParam_131))
			{
				func_678();
			}
		}
		else
		{
			func_678();
		}
	}
	else
	{
		func_678();
	}
	while (true)
	{
		func_677();
		if (func_670())
		{
			func_678();
		}
		if (func_669(0))
		{
			func_678();
		}
		func_665();
		func_659();
		switch (func_658(unk_0x30DE412C1194FCDD()))
		{
			case 0:
				if (func_657() == 1 && func_656())
				{
					func_655(1);
				}
				break;
			
			case 1:
				switch (func_657())
				{
					case 1:
						func_320();
						break;
					
					case 2:
						func_655(2);
						break;
				}
				break;
			
			case 2:
				func_678();
				break;
		}
		if (unk_0x93E08E0F531E2C35())
		{
			switch (func_657())
			{
				case 0:
					if (func_61())
					{
						func_60(1);
					}
					break;
				
				case 1:
					func_1();
					break;
				
				case 2:
					func_678();
					break;
				}
		}
	}
}

void func_1()
{
	if (func_59() > 0)
	{
		func_44();
		func_41();
		func_18();
		func_4();
	}
	switch (func_59())
	{
		case 0:
			func_3(1);
			break;
		
		case 1:
			if (func_2() == 0)
			{
			}
			else
			{
				func_3(5);
			}
			break;
		
		case 5:
			func_60(2);
			break;
	}
}

int func_2()
{
	return Local_108.f_6;
}

void func_3(int iParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	Local_108.f_1 = iParam0;
}

void func_4()
{
	if (func_2() != 0)
	{
		return;
	}
	if (func_16(2))
	{
		func_15(1);
		return;
	}
	if (func_16(1))
	{
		func_15(5);
		return;
	}
	if (!func_12())
	{
		func_15(4);
		return;
	}
	if (func_11() == 7)
	{
		func_15(2);
		return;
	}
	if (!func_6(func_9()))
	{
		if (func_5() == 1 && !func_16(7))
		{
			return;
		}
		func_15(3);
		return;
	}
}

int func_5()
{
	return Local_108.f_19;
}

bool func_6(int iParam0)
{
	return unk_0xF4244288C3EF3306(iParam0, func_7());
}

int func_7()
{
	return unk_0xE38610F405049F71(func_8());
}

var func_8()
{
	return Local_108.f_17;
}

int func_9()
{
	return unk_0xC35A3A4C05A4831B(func_10());
}

var func_10()
{
	return Local_108.f_10;
}

int func_11()
{
	return Local_108.f_10.f_1;
}

bool func_12()
{
	return func_13(func_8());
}

int func_13(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		return !func_14(unk_0xE38610F405049F71(uParam0));
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_15(int iParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	Local_108.f_6 = iParam0;
}

bool func_16(int iParam0)
{
	return func_17(&(Local_108.f_2), iParam0);
}

var func_17(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

void func_18()
{
	if (!func_40())
	{
		return;
	}
	switch (func_39())
	{
		case 0:
			if (func_23())
			{
				func_22(1);
			}
			break;
		
		case 1:
			if (func_16(5) && func_20(&(Local_108.f_21), 500, 0))
			{
				func_22(2);
			}
			break;
		
		case 2:
			if (func_16(6))
			{
				func_22(3);
			}
			break;
		
		case 3:
			if (func_16(7))
			{
				func_22(4);
			}
			break;
		
		case 4:
			if (func_20(&(Local_108.f_23), 8000, 0))
			{
				func_19(&(Local_108.f_23));
				func_22(5);
			}
			break;
	}
}

void func_19(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_20(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_21(uParam0, bParam2, 0);
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

void func_21(var uParam0, bool bParam1, bool bParam2)
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

void func_22(int iParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	Local_108.f_20 = iParam0;
}

int func_23()
{
	int iVar0;
	bool bVar1;
	
	if (func_37(1))
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			bVar1 = func_33(func_36(), iVar0);
			if (((bVar1 != func_32() && func_689(bVar1, 0, 1)) && func_30(bVar1)) && !unk_0xE39406DC2A852B0E(bVar1, func_25(142), func_24()))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

bool func_24()
{
	return Local_108.f_7;
}

char* func_25(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "AM_HOLD_UP";
		
		case 32:
			return "AM_JOYRIDER";
		
		case 33:
			return "AM_PLANE_TAKEDOWN";
		
		case 34:
			return "AM_DISTRACT_COPS";
		
		case 35:
			return "AM_DESTROY_VEH";
		
		case 36:
			return "AM_HOT_TARGET";
		
		case 37:
			return "AM_KILL_LIST";
		
		case 38:
			return "AM_TIME_TRIAL";
		
		case 39:
			return "AM_CP_COLLECTION";
		
		case 40:
			return "AM_CHALLENGES";
		
		case 41:
			return "AM_PENNED_IN";
		
		case 42:
			return "AM_PASS_THE_PARCEL";
		
		case 43:
			return "AM_HOT_PROPERTY";
		
		case 44:
			return "AM_DEAD_DROP";
		
		case 45:
			return "AM_KING_OF_THE_CASTLE";
		
		case 46:
			return "AM_CRIMINAL_DAMAGE";
		
		case 47:
			return "AM_HUNT_THE_BEAST";
		
		case 48:
			return "GB_LIMO_ATTACK";
		
		case 49:
			return "GB_DEATHMATCH";
		
		case 50:
			return "GB_STEAL_VEH";
		
		case 51:
			return "GB_POINT_TO_POINT";
		
		case 52:
			return "GB_TERMINATE";
		
		case 53:
			return "GB_YACHT_ROB";
		
		case 54:
			return "GB_BELLYBEAST";
		
		case 55:
			return "GB_FIVESTAR";
		
		case 56:
			return "GB_ROB_SHOP";
		
		case 57:
			return "GB_COLLECT_MONEY";
		
		case 58:
			return "GB_ASSAULT";
		
		case 59:
			return "GB_VEH_SURV";
		
		case 60:
			return "GB_SIGHTSEER";
		
		case 61:
			return "GB_FLYING_IN_STYLE";
		
		case 62:
			return "GB_FINDERSKEEPERS";
		
		case 63:
			return "GB_HUNT_THE_BOSS";
		
		case 64:
			return "GB_CARJACKING";
		
		case 65:
			return "GB_HEADHUNTER";
		
		case 66:
			return "GB_CONTRABAND_BUY";
		
		case 67:
			return "GB_CONTRABAND_SELL";
		
		case 68:
			return "GB_CONTRABAND_DEFEND";
		
		case 69:
			return "GB_AIRFREIGHT";
		
		case 70:
			return "GB_CASHING_OUT";
		
		case 71:
			return "GB_SALVAGE";
		
		case 72:
			return "GB_FRAGILE_GOODS";
		
		case 228:
			return "dont_cross_the_line";
		
		case 231:
			return "grid_arcade_cabinet";
		
		case 232:
			return "scroll_arcade_cabinet";
		
		case 233:
			return "example_arcade";
		
		case 234:
			return "road_arcade";
		
		case 239:
			return "Degenatron Games";
		
		case 235:
			return "gunslinger_arcade";
		
		case 240:
			return "ggsm_arcade";
		
		case 236:
			return "wizard_arcade";
		
		case 237:
			return "AM_CASINO_LIMO";
		
		case 238:
			return "AM_CASINO_LUXURY_CAR";
		
		case 241:
			return "puzzle";
		
		case 242:
			return "camhedz_arcade";
		
		case 73:
		case 74:
			return "GB_VEHICLE_EXPORT";
		
		case 84:
			return "GB_BIKER_JOUST";
		
		case 83:
			return "GB_BIKER_RACE_P2P";
		
		case 85:
			return "GB_BIKER_UNLOAD_WEAPONS";
		
		case 86:
			return "";
		
		case 87:
			return "GB_BIKER_BAD_DEAL";
		
		case 88:
			return "GB_BIKER_RESCUE_CONTACT";
		
		case 89:
			return "GB_BIKER_LAST_RESPECTS";
		
		case 90:
			return "GB_BIKER_CONTRACT_KILLING";
		
		case 91:
			return "GB_BIKER_CONTRABAND_SELL";
		
		case 92:
			return "GB_BIKER_CONTRABAND_DEFEND";
		
		case 93:
			return "GB_ILLICIT_GOODS_RESUPPLY";
		
		case 94:
			return "GB_BIKER_DRIVEBY_ASSASSIN";
		
		case 102:
			return "GB_BIKER_CRIMINAL_MISCHIEF";
		
		case 95:
			return "GB_BIKER_RIPPIN_IT_UP";
		
		case 75:
			return "GB_PLOUGHED";
		
		case 76:
			return "GB_FULLY_LOADED";
		
		case 77:
			return "GB_AMPHIBIOUS_ASSAULT";
		
		case 78:
			return "GB_TRANSPORTER";
		
		case 79:
			return "GB_FORTIFIED";
		
		case 80:
			return "GB_VELOCITY";
		
		case 81:
			return "GB_RAMPED_UP";
		
		case 82:
			return "GB_STOCKPILING";
		
		case 96:
			return "GB_BIKER_FREE_PRISONER";
		
		case 97:
			return "GB_BIKER_SAFECRACKER";
		
		case 98:
			return "GB_BIKER_STEAL_BIKES";
		
		case 99:
			return "GB_BIKER_SEARCH_AND_DESTROY";
		
		case 100:
			return "AM_PENNED_IN";
		
		case 101:
			return "GB_BIKER_STAND_YOUR_GROUND";
		
		case 103:
			return "GB_BIKER_DESTROY_VANS";
		
		case 104:
			return "GB_BIKER_BURN_ASSETS";
		
		case 105:
			return "GB_BIKER_SHUTTLE";
		
		case 106:
			return "GB_BIKER_WHEELIE_RIDER";
		
		case 107:
		case 108:
			return "GB_GUNRUNNING";
		
		case 109:
			return "GB_GUNRUNNING_DEFEND";
		
		case 110:
		case 111:
		case 112:
			return "GB_SMUGGLER";
		
		case 113:
			return "GB_GANGOPS";
		
		case 114:
			return "BUSINESS_BATTLES";
		
		case 115:
			return "BUSINESS_BATTLES_SELL";
		
		case 116:
			return "BUSINESS_BATTLES_DEFEND";
		
		case 117:
			return "GB_SECURITY_VAN";
		
		case 118:
			return "GB_TARGET_PURSUIT";
		
		case 119:
			return "GB_JEWEL_STORE_GRAB";
		
		case 120:
			return "GB_BANK_JOB";
		
		case 121:
			return "GB_DATA_HACK";
		
		case 122:
			return "GB_INFILTRATION";
		
		case 123:
			return "BUSINESS_BATTLES_DEFEND";
		
		case 124:
			return "BUSINESS_BATTLES_SELL";
		
		case 125:
			return "GB_CASINO";
		
		case 126:
			return "GB_CASINO_HEIST";
		
		case 127:
			return "fm_content_business_battles";
		
		case 151:
			return "fm_content_crime_scene";
		
		case 128:
			return "fm_content_drug_vehicle";
		
		case 129:
			return "fm_content_movie_props";
		
		case 130:
			return "fm_content_island_heist";
		
		case 131:
			return "fm_content_island_dj";
		
		case 133:
			return "fm_content_golden_gun";
		
		case 3:
			return "AM_CR_SELL_DRUGS";
		
		case 12:
			return "AM_Safehouse";
		
		case 16:
			return "MG_RACE_TO_POINT";
		
		case 18:
			return "AM_CRATE_DROP";
		
		case 28:
			return "AM_AMMO_DROP";
		
		case 29:
			return "AM_VEHICLE_DROP";
		
		case 30:
			return "AM_BRU_BOX";
		
		case 31:
			return "AM_GA_PICKUPS";
		
		case 26:
			return "AM_backup_heli";
		
		case 27:
			return "AM_airstrike";
		
		case 17:
			return "AM_PI_MENU";
		
		case 197:
			return "AM_BOAT_TAXI";
		
		case 198:
			return "AM_HELI_TAXI";
		
		case 19:
			return "AM_IMP_EXP";
		
		case 22:
			return "AM_TAXI";
		
		case 23:
			return "AM_TAXI_LAUNCHER";
		
		case 24:
			return "AM_GANG_CALL";
		
		case 25:
			return "heli_gun";
		
		case 211:
			return "am_rollercoaster";
		
		case 212:
			return "am_ferriswheel";
		
		case 213:
			return "AM_LAUNCHER";
		
		case 214:
			return "AM_DAILY_OBJECTIVES";
		
		case 4:
			return "AM_STRIPPER";
		
		case 13:
			return "AM_Hitchhiker";
		
		case 5:
			return "stripclub_mp";
		
		case 6:
			return "AM_ArmWrestling";
		
		case 8:
			return "AM_Tennis";
		
		case 9:
			return "AM_Darts";
		
		case 7:
			return "AM_ImportExport";
		
		case 10:
			return "AM_FistFight";
		
		case 11:
			return "AM_DropOffHooker";
		
		case 15:
			return "AM_DOORS";
		
		case 20:
			return "FM_INTRO";
		
		case 21:
			return "AM_PROSTITUTE";
		
		case 199:
			return "fm_hold_up_tut";
		
		case 200:
			return "AM_CAR_MOD_TUT";
		
		case 201:
			return "AM_CONTACT_REQUESTS";
		
		case 202:
			return "am_mission_launch";
		
		case 203:
			return "am_npc_invites";
		
		case 204:
			return "am_lester_cut";
		
		case 207:
			return "AM_VEHICLE_SPAWN";
		
		case 208:
			return "am_ronTrevor_Cut";
		
		case 209:
			return "AM_ARMYBASE";
		
		case 210:
			return "AM_PRISON";
		
		case 215:
			return "AM_ArmWrestling";
		
		case 222:
			return "fm_Bj_race_controler";
		
		case 216:
			return "AM_Darts";
		
		case 223:
			return "fm_deathmatch_controler";
		
		case 221:
			return "FM_Impromptu_DM_Controler";
		
		case 224:
			return "fm_hideout_controler";
		
		case 217:
			return "golf_mp";
		
		case 220:
			return "Pilot_School_MP";
		
		case 225:
			return func_27();
		
		case 226:
			return "FM_Race_Controler";
		
		case 218:
			return "Range_Modern_MP";
		
		case 227:
			if (func_26(Global_4718592.f_185586))
			{
				return "FM_Survival_Controller";
			}
			else
			{
				return "FM_Horde_Controler";
			}
			break;
		
		case 219:
			return "tennis_network_mp";
		
		case 205:
			return "am_heist_int";
		
		case 206:
			return "am_lowrider_int";
		
		case 229:
			return "am_darts_apartment";
		
		case 230:
			return "AM_Armwrestling_Apartment";
		
		case 243:
			return "SCTV";
		
		case 0:
			return "";
	}
	switch (iParam0)
	{
		case 132:
			return "AM_ISLAND_BACKUP_HELI";
		
		case 134:
			return "fm_content_tuner_robbery";
		
		case 135:
			return "fm_content_vehicle_list";
		
		case 136:
			return "tuner_sandbox_activity";
		
		case 137:
			return "fm_content_auto_shop_delivery";
		
		case 138:
			return "fm_content_payphone_hit";
		
		case 139:
			return "fm_content_security_contract";
		
		case 140:
			return "fm_content_vip_contract_1";
		
		case 141:
			return "fm_content_metal_detector";
		
		case 142:
			return "am_agency_suv";
		
		case 143:
			return "fm_content_phantom_car";
		
		case 144:
			return "fm_content_slasher";
		
		case 145:
			return "fm_content_sightseeing";
		
		case 146:
			return "fm_content_smuggler_trail";
		
		case 148:
			return "fm_content_skydive";
		
		case 149:
			return "fm_content_cerberus";
		
		case 147:
			return "fm_content_smuggler_plane";
		
		case 150:
			return "fm_content_parachuter";
		
		case 152:
			return "fm_content_bar_resupply";
		
		case 153:
			return "fm_content_bike_shop_delivery";
		
		case 154:
			return "fm_content_clubhouse_contracts";
		
		case 155:
			return "fm_content_cargo";
		
		case 156:
			return "fm_content_export_cargo";
		
		case 157:
			return "fm_content_ammunation";
		
		case 158:
			return "fm_content_gunrunning";
		
		case 159:
			return "fm_content_source_research";
		
		case 160:
			return "fm_content_club_management";
		
		case 161:
			return "fm_content_club_odd_jobs";
		
		case 162:
			return "fm_content_club_source";
		
		case 163:
			return "fm_content_convoy";
		
		case 164:
			return "fm_content_robbery";
		
		case 165:
			return "fm_content_acid_lab_setup";
		
		case 166:
			return "fm_content_acid_lab_source";
		
		case 167:
			return "fm_content_acid_lab_sell";
		
		case 168:
			return "fm_content_drug_lab_work";
		
		case 169:
			return "fm_content_stash_house";
		
		case 170:
			return "fm_content_taxi_driver";
		
		case 171:
			return "fm_content_xmas_mugger";
		
		case 172:
			return "fm_content_bank_shootout";
		
		case 173:
			return "fm_content_armoured_truck";
		
		case 174:
			return "fm_content_ghosthunt";
		
		case 175:
			return "fm_content_ufo_abduction";
		
		case 176:
			return "fm_content_smuggler_sell";
		
		case 177:
			return "fm_content_smuggler_resupply";
		
		case 178:
			return "fm_content_smuggler_ops";
		
		case 179:
			return "fm_content_bicycle_time_trial";
		
		case 180:
			return "fm_content_possessed_animals";
		
		case 181:
			return "fm_content_chop_shop_delivery";
		
		case 182:
			return "fm_content_xmas_truck";
		
		case 183:
			return "fm_content_tow_truck_work";
		
		case 184:
			return "fm_content_vehrob_scoping";
		
		case 185:
			return "fm_content_vehrob_task";
		
		case 186:
			return "fm_content_vehrob_prep";
		
		case 187:
			return "fm_content_vehrob_disrupt";
		
		case 188:
			return "fm_content_vehrob_cargo_ship";
		
		case 189:
			return "fm_content_vehrob_police";
		
		case 190:
			return "fm_content_vehrob_arena";
		
		case 191:
			return "fm_content_vehrob_casino_prize";
		
		case 192:
			return "fm_content_vehrob_submarine";
		
		case 193:
			return "fm_content_bounty_targets";
		
		case 194:
			return "fm_content_daily_bounty";
		
		case 195:
			return "fm_content_dispatch_work";
		
		case 196:
			return "fm_content_pizza_delivery";
		
		default:
	}
	return "";
}

bool func_26(int iParam0)
{
	return iParam0 == 998;
}

char* func_27()
{
	if (func_28())
	{
		return "fm_mission_controller";
	}
	return "fm_mission_controller_2020";
}

int func_28()
{
	if (func_29(2))
	{
		return 0;
	}
	return 1;
}

bool func_29(int iParam0)
{
	return Global_4718592.f_185587 >= iParam0;
}

bool func_30(bool bParam0)
{
	return func_31(bParam0, 18);
}

var func_31(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_6, iParam1);
}

int func_32()
{
	return -1;
}

int func_33(bool bParam0, int iParam1)
{
	if (func_34(bParam0))
	{
		if (iParam1 > -1 && iParam1 < 7)
		{
			return Global_1887305[bParam0 /*610*/].f_10.f_11[iParam1];
		}
	}
	return func_32();
}

int func_34(bool bParam0)
{
	if (func_35(bParam0))
	{
		if (func_35(Global_1887305[bParam0 /*610*/].f_10))
		{
			return Global_1887305[bParam0 /*610*/].f_10 == bParam0;
		}
	}
	return 0;
}

int func_35(var uParam0)
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

bool func_36()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10;
}

bool func_37(bool bParam0)
{
	return func_38(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_38(bool bParam0, bool bParam1)
{
	if (!func_35(bParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_34(bParam0))
		{
			return 0;
		}
	}
	return func_35(Global_1887305[bParam0 /*610*/].f_10);
}

int func_39()
{
	return Local_108.f_20;
}

int func_40()
{
	if (func_5() != 1)
	{
		return 0;
	}
	if (func_39() == 5)
	{
		return 0;
	}
	return 1;
}

void func_41()
{
	if (func_43() > 0)
	{
		if (func_43() != 2)
		{
			if (!func_12())
			{
				func_42(2);
			}
		}
	}
	switch (func_43())
	{
		case 0:
			func_42(1);
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
}

void func_42(int iParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	Local_108.f_17.f_1 = iParam0;
}

int func_43()
{
	return Local_108.f_17.f_1;
}

void func_44()
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	uVar0 = func_10();
	if (unk_0x93BF17E19A9F0E9B(uVar0))
	{
		iVar1 = func_9();
		bVar2 = true;
		bVar3 = !unk_0x4FAFF4BCB7633475(iVar1);
	}
	if (func_11() > 0)
	{
		if (func_11() != 7)
		{
			if (!bVar3)
			{
				func_58(7);
			}
		}
		if (func_54())
		{
			func_58(6);
		}
	}
	switch (func_11())
	{
		case 0:
			if (bVar2)
			{
				switch (func_5())
				{
					case 0:
						func_58(1);
						break;
					
					case 1:
						func_58(3);
						break;
					}
			}
			break;
		
		case 1:
			if ((((!func_52(func_53()) && func_12()) && unk_0xFC8BFE4B41177C22(func_51())) && func_6(func_51())) && func_16(4))
			{
				func_58(2);
			}
			break;
		
		case 2:
			if (func_12() && !func_16(4))
			{
				func_58(4);
			}
			else if (func_50(0))
			{
				func_48(func_49(func_7(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
				func_58(3);
			}
			break;
		
		case 4:
			if (func_50(1))
			{
				func_58(1);
			}
			break;
		
		case 3:
			switch (func_5())
			{
				case 0:
					if (unk_0xDE3B10768F6103AD(func_7(), 0, 1) == 0)
					{
						func_46(2);
					}
					break;
				
				case 1:
					if (func_16(7) && unk_0xDE3B10768F6103AD(func_7(), 0, 1) == 0)
					{
						func_58(5);
					}
					break;
			}
			break;
		
		case 5:
			switch (func_5())
			{
				case 1:
					if (func_45(iVar1, joaat("script_task_vehicle_drive_wander"), 1))
					{
						func_46(2);
					}
					break;
			}
			break;
		
		case 7:
			break;
	}
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x9B5C1660CCDF7189(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_46(int iParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	if (func_47(&(Local_108.f_2), iParam0))
	{
	}
}

int func_47(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (!BitTest((*uParam0)[iVar1], bVar2))
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

void func_48(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<10> Var0;
	
	Var0.f_0 = -503325966;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_8 = iParam6;
	Var0.f_5 = iParam1;
	Var0.f_6 = iParam4;
	Var0.f_3 = fParam2;
	Var0.f_4 = iParam3;
	Var0.f_7 = iParam5;
	Var0.f_9 = unk_0x8034325BF6D6E41F();
	if (!iParam0 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 10, iParam0, Var0.f_0);
	}
}

int func_49(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar3 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_689(iVar3, 1, 0))
		{
			if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iVar3), iParam3))
			{
				if (!unk_0x423F801F012D944B(bVar3))
				{
					iVar2 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(bVar3), iParam3);
					if (iVar2 == iParam0)
					{
						if (unk_0x1864096A95E36EBA(bVar3) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) || !bParam2)
						{
							if (bVar3 != unk_0x259BE71D8A81D4FA() || iParam1)
							{
								unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
							}
						}
					}
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_50(int iParam0)
{
	return func_17(&(Local_108.f_4), iParam0);
}

int func_51()
{
	return unk_0x56E414973C2A8C0E(func_24());
}

int func_52(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_53()
{
	return Local_108.f_10.f_2;
}

int func_54()
{
	if (!func_57())
	{
		return 0;
	}
	if (!func_12())
	{
		return 1;
	}
	if (func_55())
	{
		return 1;
	}
	if (!func_6(func_9()))
	{
		return 1;
	}
	return 0;
}

bool func_55()
{
	return func_56(func_7());
}

int func_56(int iParam0)
{
	if (((unk_0xA24B9FF9863A909D(iParam0, 0, 7000) || unk_0xA24B9FF9863A909D(iParam0, 3, 30000)) || unk_0xA24B9FF9863A909D(iParam0, 2, 30000)) || unk_0xA24B9FF9863A909D(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	if (func_11() == 6)
	{
		return 0;
	}
	if (func_5() == 1 && !func_16(7))
	{
		return 0;
	}
	return 1;
}

void func_58(int iParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	Local_108.f_10.f_1 = iParam0;
}

int func_59()
{
	return Local_108.f_1;
}

void func_60(int iParam0)
{
	Local_108.f_0 = iParam0;
}

int func_61()
{
	bool bVar0;
	
	if (!func_16(0))
	{
		if (func_38(unk_0x259BE71D8A81D4FA(), 0))
		{
			bVar0 = func_36();
		}
		else
		{
			bVar0 = unk_0x259BE71D8A81D4FA();
		}
		func_319(bVar0);
		func_318();
		if (func_30(bVar0))
		{
			func_317(1);
		}
		else
		{
			func_317(0);
		}
		func_315();
		func_46(0);
	}
	if (func_314())
	{
		return 0;
	}
	if (!func_67())
	{
		return 0;
	}
	if (!func_62())
	{
		return 0;
	}
	return 1;
}

int func_62()
{
	if (unk_0x93BF17E19A9F0E9B(func_10()))
	{
		return 1;
	}
	if (func_65(func_66()) && func_64(&(Local_108.f_10), func_8(), 26, func_66(), -1, 1, 1, 1))
	{
		func_63();
		unk_0x55098D9E9AD58806(func_66());
		return 1;
	}
	return 0;
}

void func_63()
{
	int iVar0;
	
	iVar0 = func_9();
	unk_0xAAA71DD7E9059338(iVar0, 1);
	unk_0xBE8796DB2B90A437(iVar0, 1, 1);
	unk_0xBE8796DB2B90A437(iVar0, 3, 0);
	unk_0x9E6CC93E007219AC(iVar0, 1);
	unk_0x3CEA1FD137ACE2D9(iVar0, Global_1837309);
	unk_0x44FB298D6382876D(iVar0, 1);
	unk_0x176A19E4589CC2C6(iVar0, 0);
	unk_0x0428AFDCAA63B06E(iVar0, 251, 1);
	unk_0x6D618646705A0465(iVar0, 1f);
	unk_0xD1C578C204015E1F(iVar0, 0, 0, 0, 0);
	unk_0xD1C578C204015E1F(iVar0, 2, 2, 0, 0);
	unk_0xD1C578C204015E1F(iVar0, 3, 0, 2, 0);
	unk_0xD1C578C204015E1F(iVar0, 4, 0, 2, 0);
	unk_0xD1C578C204015E1F(iVar0, 5, 0, 0, 0);
	unk_0xD1C578C204015E1F(iVar0, 6, 0, 0, 0);
	unk_0xD1C578C204015E1F(iVar0, 11, 0, 0, 0);
	unk_0x7F08C4791E6D6969(iVar0, 1, 0, 0, 0, 1);
	if (func_5() == 1)
	{
		unk_0x4285E11B28063EE0(iVar0, false, 0);
	}
}

int func_64(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xADCE9BCAFCB83364(1))
	{
		return 0;
	}
	if (!unk_0x2FC2FDC413532977(uParam1))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(unk_0xE38610F405049F71(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x9F7A52B1537567AC(unk_0x8728A378EF2B46B2(unk_0xE38610F405049F71(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		unk_0x11C125313CB8ADA2(unk_0xC35A3A4C05A4831B(*uParam0), iParam7);
		if (unk_0xC8D49539708A80B4(unk_0xC35A3A4C05A4831B(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x3C1752E361ED8FC9(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_65(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xEC9DAA34BBB4658C(iParam0);
	return unk_0x6252BC0DD8A320DB(iParam0);
}

int func_66()
{
	return joaat("s_m_m_highsec_05");
}

int func_67()
{
	int iVar0;
	struct<103> Var1;
	int iVar2;
	
	if (unk_0x93BF17E19A9F0E9B(func_8()))
	{
		return 1;
	}
	if (func_65(func_313()) && func_159())
	{
		unk_0x2094BC4B6731BA68(Local_108.f_25, 5f, 1, 0, 0, 0);
		if (func_156(&(Local_108.f_17), func_313(), Local_108.f_25, Local_108.f_25.f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = func_7();
			unk_0x9452FE4900245259(iVar0, 0f);
			func_155(iVar0);
			unk_0x70BAF7723F26069A(iVar0, 1);
			Var1 = { func_153() };
			func_68(iVar0, &Var1, 0, 1, 1);
			if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
			{
				if (unk_0xD130E7CDEE903624(iVar0, "MPBitset"))
				{
					iVar2 = unk_0xE2F6FE9B61232165(iVar0, "MPBitset");
				}
				unk_0x0B0C9A0F9AAEB7F0(&iVar2, 11);
				unk_0xEE8559BBFC27701B(iVar0, "MPBitset", iVar2);
			}
			if (unk_0x77B62CAA5DF0922A("Not_Allow_As_Saved_Veh", 3))
			{
				unk_0xEE8559BBFC27701B(iVar0, "Not_Allow_As_Saved_Veh", 1);
			}
			if (unk_0x77B62CAA5DF0922A("Company_SUV", 3) && !unk_0xD130E7CDEE903624(iVar0, "Company_SUV"))
			{
				unk_0xEE8559BBFC27701B(iVar0, "Company_SUV", unk_0x3351FEF40EC734DB(unk_0x259BE71D8A81D4FA()));
			}
			switch (func_5())
			{
				case 0:
					unk_0x89E19F9D79DDCA80(iVar0, 1);
					unk_0xB2CA6639924FA111(iVar0, 1);
					unk_0x0B1BCFB3741AF8B2(iVar0, 1);
					unk_0x1F4C790D1AC5AFF9(iVar0, 1, 3);
					break;
				
				case 1:
					unk_0x5D7CD709B34C90F0(iVar0, true);
					unk_0x4285E11B28063EE0(iVar0, false, 0);
					unk_0x44C48AC14D3C09ED(iVar0, false, 0);
					unk_0x935364B4448CD584(iVar0, 1);
					break;
			}
			unk_0x55098D9E9AD58806(func_313());
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if ((unk_0x76CD105BCAC6EB9F() && unk_0x1B1A446EFA398EB5(iParam0)) || !unk_0x76CD105BCAC6EB9F())
		{
			iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
			if (unk_0x259BE71D8A81D4FA() != func_32())
			{
				uParam1->f_100 = unk_0x259BE71D8A81D4FA();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_128(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					unk_0x439C904840715871(iParam0, 1);
					unk_0x519F76A38952BBD0(iParam0, 0);
				}
				else if (uParam1->f_102 == 1)
				{
					unk_0x439C904840715871(iParam0, 0);
					unk_0x519F76A38952BBD0(iParam0, 0);
				}
				else if (uParam1->f_102 == 3)
				{
					unk_0x439C904840715871(iParam0, 1);
					unk_0x519F76A38952BBD0(iParam0, 1);
				}
			}
			if (func_127(unk_0x4B423FAA24E8ABF0(iParam0)))
			{
				if (uParam1->f_9[44] == 2)
				{
					unk_0xF5706A3E4A060916(iParam0, 0, 1);
				}
				else
				{
					unk_0xF5706A3E4A060916(iParam0, 1, 1);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				unk_0x7BEAE55022AB21EB(iParam0, 1, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				unk_0x315A149C242011DE(iParam0, uParam1->f_79);
			}
			if (func_126(uParam1->f_66, &fVar1) && uParam1->f_80 != fVar1)
			{
				uParam1->f_80 = fVar1;
			}
			unk_0x4DC7FAAC148F9B2F(iParam0, uParam1->f_80);
			if (uParam1->f_97 >= 0)
			{
				unk_0xC0C8E6AAA00F1A58(iParam0, uParam1->f_97);
			}
			if (uParam1->f_99 >= 0)
			{
				unk_0x77B012A683295B6E(iParam0, uParam1->f_99);
			}
			if (func_125(iParam0))
			{
				func_119(iParam0, func_122(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (unk_0xCB19A1CF94809167(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				unk_0x5081B6C697A334D4(iParam0, uParam1->f_98);
			}
			if (BitTest(uParam1->f_95, 0))
			{
				func_89(iParam0, &(uParam1->f_81));
			}
			if ((!func_79(4) && !bParam4) && !unk_0x834C960822A4683F())
			{
				func_73(iParam0);
			}
			if (func_72(iVar0))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						unk_0xC87E4FAD00AEDD4B(iParam0, 16);
						break;
					
					case 1:
						unk_0xC87E4FAD00AEDD4B(iParam0, 16);
						if ((unk_0x2E6A27037F1DC473(iParam0, joaat("scarab")) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab2"))) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab3")))
						{
							unk_0x8450270DC5896D39(iParam0, 16, 0, false);
						}
						else
						{
							unk_0x8450270DC5896D39(iParam0, 16, 2, false);
						}
						break;
					
					case 2:
						unk_0xC87E4FAD00AEDD4B(iParam0, 16);
						if ((unk_0x2E6A27037F1DC473(iParam0, joaat("scarab")) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab2"))) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab3")))
						{
							unk_0x8450270DC5896D39(iParam0, 16, 1, false);
						}
						else
						{
							unk_0x8450270DC5896D39(iParam0, 16, 3, false);
						}
						break;
					
					case 3:
						unk_0xC87E4FAD00AEDD4B(iParam0, 16);
						if ((unk_0x2E6A27037F1DC473(iParam0, joaat("scarab")) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab2"))) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab3")))
						{
							unk_0x8450270DC5896D39(iParam0, 16, 2, false);
						}
						else
						{
							unk_0x8450270DC5896D39(iParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							unk_0xC87E4FAD00AEDD4B(iParam0, 16);
							if ((unk_0x2E6A27037F1DC473(iParam0, joaat("scarab")) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab2"))) || unk_0x2E6A27037F1DC473(iParam0, joaat("scarab3")))
							{
								unk_0x8450270DC5896D39(iParam0, 16, 2, false);
							}
							else
							{
								unk_0x8450270DC5896D39(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			if (func_70(unk_0x4B423FAA24E8ABF0(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						unk_0xB57A96BF24464D21(iParam0, 0);
						unk_0xD05AF216D970F274(iParam0, 1);
						if (uParam1->f_9[16] == 5)
						{
							unk_0x271D0AA5ADF266EA(iParam0, (Global_262145.f_21454 + 0,05f));
						}
						else
						{
							unk_0x271D0AA5ADF266EA(iParam0, Global_262145.f_21454);
						}
						unk_0xA964B154E331B3E9(iParam0, 1);
						break;
					
					default:
						unk_0xB57A96BF24464D21(iParam0, 0);
						unk_0x271D0AA5ADF266EA(iParam0, 1f);
						unk_0xA964B154E331B3E9(iParam0, 1);
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (BitTest(uParam1->f_95, 3))
						{
						}
					}
					else if (unk_0x77B62CAA5DF0922A("Player_Vehicle", 3))
					{
						unk_0xEE8559BBFC27701B(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (unk_0x77B62CAA5DF0922A("Veh_Modded_By_Player", 3))
						{
							unk_0xEE8559BBFC27701B(iParam0, "Veh_Modded_By_Player", unk_0x3351FEF40EC734DB(unk_0x259BE71D8A81D4FA()));
						}
					}
					else if (unk_0x77B62CAA5DF0922A("Veh_Modded_By_Player", 3))
					{
						if (func_69(uParam1->f_81) && unk_0xBE0146369C46314B(&(uParam1->f_81)))
						{
							unk_0xEE8559BBFC27701B(iParam0, "Veh_Modded_By_Player", unk_0x3351FEF40EC734DB(unk_0xA34132DD5D4FE383(&(uParam1->f_81))));
						}
						else
						{
							unk_0xEE8559BBFC27701B(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

var func_69(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

bool func_70(int iParam0)
{
	return (func_127(iParam0) && !func_71(iParam0));
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case joaat("coureur"):
		case joaat("monstrociti"):
		case joaat("turismo3"):
		case joaat("baller8"):
		case 1121330119:
			return 1;
			break;
	}
	return 0;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("speedo5"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return 1;
			break;
	}
	return 0;
}

void func_73(int iParam0)
{
	struct<3> Var0;
	
	if (Global_262145.f_19899)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0))
		{
			if (unk_0xC8D49539708A80B4(iParam0))
			{
				Var0.f_0 = unk_0x4B423FAA24E8ABF0(iParam0);
				Var0.f_1 = unk_0x70E57E9927B6BA58(unk_0xCA7159F2C5FF745A(iParam0));
				if (unk_0x77B62CAA5DF0922A("RandomID", 3))
				{
					if (!unk_0xD130E7CDEE903624(iParam0, "RandomID"))
					{
						Var0.f_2 = unk_0xC5935DFB3F39785A(0, 65535);
						unk_0xEE8559BBFC27701B(iParam0, "RandomID", Var0.f_2);
					}
					else
					{
						Var0.f_2 = unk_0xE2F6FE9B61232165(iParam0, "RandomID");
					}
				}
				func_74(Var0);
			}
		}
	}
}

void func_74(struct<3> Param0)
{
	struct<4> Var0;
	
	Var0.f_0 = -1251853784;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = Param0.f_0;
	Var0.f_3.f_1 = Param0.f_1;
	Var0.f_3.f_2 = Param0.f_2;
	unk_0x71A6F836422FDD2B(1, &Var0, 6, func_75(1, 1), Var0.f_0);
}

var func_75(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_689(bVar2, 0, 0))
		{
			if (bVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
				else if (!func_76(bVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_76(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_35(bParam0))
	{
		return 0;
	}
	if (bParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_77(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[bParam0 /*883*/].f_206 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x762604C40829DB72(bParam0))
		{
			bVar0 = unk_0x1864096A95E36EBA(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_77(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_78();
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

int func_78()
{
	return Global_1574926;
}

int func_79(int iParam0)
{
	int iVar0;
	
	if (func_88())
	{
		iVar0 = 0;
		while (iVar0 < 61)
		{
			if (func_87(iVar0) == iParam0)
			{
				if (func_80(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_80(int iParam0)
{
	return func_81(iParam0, 6, 1);
}

int func_81(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_86() == 0)
		{
			return BitTest(func_82(func_85(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_83(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_83(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_84(uParam1));
}

int func_84(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_78();
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

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_86()
{
	return Global_32948;
}

int func_87(int iParam0)
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

bool func_88()
{
	return Global_101585.f_394 > 0;
}

int func_89(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	if (!func_99(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		iVar0 = unk_0xCF9D3F0358793BA8(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_97(iParam0))
		{
			bVar1 = unk_0xA34132DD5D4FE383(uParam1);
			if (func_92(&iParam0, bVar1))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_90(iParam0))
	{
	}
	return 0;
}

int func_90(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		iVar0 = unk_0xCF9D3F0358793BA8(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				iVar1 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				iVar1 = unk_0x1DD05E817C89C737();
			}
			iVar2 = unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(iVar1, Global_1577952));
			iVar3 = 20000;
			if (Global_1836681)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				unk_0x932EFF1079425E72(iParam0);
				func_91(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_91(int iParam0)
{
	var uVar0;
	
	if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "MPBitset"))
			{
				uVar0 = unk_0xE2F6FE9B61232165(iParam0, "MPBitset");
			}
		}
	}
	if (!BitTest(uVar0, 16))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, 16);
		unk_0xEE8559BBFC27701B(iParam0, "MPBitset", uVar0);
	}
}

int func_92(int iParam0, bool bParam1)
{
	func_96();
	if (Global_1574633.f_18 != 0 || unk_0x38779AA6147A1831(*iParam0))
	{
		Global_1943409.f_11 = unk_0xF7553BA24C0AB0B2(*iParam0);
		if (Global_1943409.f_11 < 0f)
		{
			Global_1943409.f_11 = 0f;
		}
	}
	func_94(*iParam0, &Global_1943409, &(Global_1943409.f_1), &(Global_1943409.f_4), &(Global_1943409.f_7), &(Global_1943409.f_10));
	Global_1943409.f_1.f_2 = (Global_1943409.f_1.f_2 - Global_1943409.f_11);
	if (Global_1943409.f_4.f_2 < 0f)
	{
		Global_1943409.f_12 = 1;
	}
	Global_1943409.f_13 = 200;
	if (unk_0x4B423FAA24E8ABF0(*iParam0) == joaat("windsor") || unk_0x4B423FAA24E8ABF0(*iParam0) == joaat("comet4"))
	{
		Global_1943409.f_13 = 255;
	}
	if (Global_1943409.f_12)
	{
		if (func_93(iParam0, bParam1, Global_1943409, Global_1943409.f_1, Global_1943409.f_4, Global_1943409.f_7, Global_1943409.f_10, 0, Global_1943409.f_13))
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				Global_1577952 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				Global_1577952 = unk_0x1DD05E817C89C737();
			}
			return 1;
		}
	}
	else
	{
		Global_1943409.f_14 = { Global_1943409.f_1 };
		Global_1943409.f_14 = (Global_1943409.f_14 * -1f);
		Global_1943409.f_17 = { Global_1943409.f_4 };
		Global_1943409.f_17 = (Global_1943409.f_17 * -1f);
		Global_1943409.f_20 = { Global_1943409.f_7 };
		Global_1943409.f_20.f_1 = (Global_1943409.f_20.f_1 * -1f);
		Global_1943409.f_20.f_2 = (Global_1943409.f_20.f_2 * -1f);
		if (!unk_0x0BCE48C8677F9824(*iParam0, 0))
		{
			Global_1943409.f_23 = unk_0xCF9D3F0358793BA8(*iParam0, 0);
		}
		else
		{
			Global_1943409.f_23 = 3;
		}
		Global_1943409.f_24 = unk_0xCF9D3F0358793BA8(*iParam0, 1);
		if (!unk_0x0BCE48C8677F9824(*iParam0, 1))
		{
			Global_1943409.f_24 = unk_0xCF9D3F0358793BA8(*iParam0, 1);
		}
		else
		{
			Global_1943409.f_24 = 3;
		}
		if (((Global_1943409.f_23 == 0 && func_93(iParam0, bParam1, Global_1943409, Global_1943409.f_1, Global_1943409.f_4, Global_1943409.f_7, Global_1943409.f_10, 0, Global_1943409.f_13)) || Global_1943409.f_23 != 0) && ((Global_1943409.f_24 == 0 && func_93(iParam0, bParam1, Global_1943409, Global_1943409.f_14, Global_1943409.f_17, Global_1943409.f_20, Global_1943409.f_10, 1, Global_1943409.f_13)) || Global_1943409.f_24 != 0))
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				Global_1577952 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				Global_1577952 = unk_0x1DD05E817C89C737();
			}
			return 1;
		}
	}
	return 0;
}

bool func_93(var uParam0, bool bParam1, var uParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, var uParam6, int iParam7, var uParam8)
{
	return unk_0x6A808266C74B0678(*uParam0, unk_0x56E414973C2A8C0E(bParam1), uParam2, Param3, Param4, Param5, uParam6, iParam7, uParam8);
}

int func_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xFC8BFE4B41177C22(iParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	*uParam1 = unk_0x365DC1E8054AF31A(iParam0, "chassis_dummy");
	if (((!func_95(Global_1943435, 0f, 0f, 0f, 0) && !func_95(Global_1943438, 0f, 0f, 0f, 0)) && !func_95(Global_1943441, 0f, 0f, 0f, 0)) && !Global_1943444 == 0f)
	{
		*uParam2 = { Global_1943435 };
		*uParam3 = { Global_1943438 };
		*uParam4 = { Global_1943441 };
		*uParam5 = Global_1943444;
		return 1;
	}
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = unk_0x365DC1E8054AF31A(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = unk_0x365DC1E8054AF31A(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("adder"):
			*uParam2 = { 0f, 1,54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("akuma"):
			*uParam2 = { 0f, 0,06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("asea"):
			*uParam2 = { 0f, 1,5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bagger"):
			*uParam2 = { -1f, 0,16f, 0,283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("baller"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller2"):
			*uParam2 = { 0f, 1,55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("banshee"):
			*uParam2 = { 0f, 0,94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("bati"):
			*uParam2 = { 0f, 0,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("bati2"):
			*uParam2 = { 0f, 0,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0,08f, 0,19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bison"):
			*uParam2 = { 0f, 1,99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bjxl"):
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("blista"):
			*uParam2 = { 0f, 1,49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1,68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,65f;
			break;
		
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2,01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("buffalo"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("bullet"):
			*uParam2 = { -1,57f, 0,07f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0,09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1,45f, 1f };
			*uParam3 = { 0f, -0,11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1,51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1,59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cheetah"):
			*uParam2 = { -1,61f, 0,26f, 0,17f };
			*uParam3 = { 0,9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1,42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("comet2"):
			*uParam2 = { 0f, 1,35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("coquette"):
			*uParam2 = { 0f, 0,96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case joaat("daemon"):
			*uParam2 = { 0f, 0,06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = { 0f, 1,59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dloader"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("double"):
			*uParam2 = { 0f, 0,08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("dubsta"):
			*uParam2 = { -1,71f, 0,31f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,75f;
			break;
		
		case joaat("elegy2"):
			*uParam2 = { 0f, 1,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("emperor"):
			*uParam2 = { 0f, 1,31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("emperor2"):
			*uParam2 = { 0f, 1,31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("entityxf"):
			*uParam2 = { -1,52f, 0,41f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("exemplar"):
			*uParam2 = { 0f, 1,32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("f620"):
			*uParam2 = { 0f, 1,28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = { -1f, -0,48f, -0,11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("felon"):
			*uParam2 = { 0f, 1,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("felon2"):
			*uParam2 = { 0f, 1,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fq2"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("fugitive"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("fusilade"):
			*uParam2 = { 0f, 0,98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("futo"):
			*uParam2 = { 0f, 1,28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1,735f, 1,05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("granger"):
			*uParam2 = { 0f, 2,07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("gresley"):
			*uParam2 = { 0f, 1,75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("habanero"):
			*uParam2 = { 0f, 1,69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("hexer"):
			*uParam2 = { 0f, -0,46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,14f;
			break;
		
		case joaat("hotknife"):
			*uParam2 = { -1,43f, -0,14f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("infernus"):
			*uParam2 = { -1f, 0,33f, 0,08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,06f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("ingot"):
			*uParam2 = { 0f, 1,58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("intruder"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("issi2"):
			*uParam2 = { 0f, 1,21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jackal"):
			*uParam2 = { 0f, 1,36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("jb700"):
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = { 0f, 1,46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,475f;
			break;
		
		case joaat("landstalker"):
			*uParam2 = { 0f, 1,83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("manana"):
			*uParam2 = { 0f, 0,86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("mesa"):
			*uParam2 = { 0f, 1,47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("mesa3"):
			*uParam2 = { 0f, 1,47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("minivan"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("monroe"):
			*uParam2 = { 0f, 1,23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case joaat("nemesis"):
			*uParam2 = { 0f, 0,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("ninef"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ninef2"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("oracle"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("oracle2"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("patriot"):
			*uParam2 = { 0f, 1,75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("pcj"):
			*uParam2 = { 0f, 0,02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("penumbra"):
			*uParam2 = { 0f, 1,46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("peyote"):
			*uParam2 = { -1f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("phoenix"):
			*uParam2 = { 0f, 1,833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,44f;
			break;
		
		case joaat("picador"):
			*uParam2 = { 0f, 1,43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,425f;
			break;
		
		case joaat("prairie"):
			*uParam2 = { 0f, 1,41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,31f;
			break;
		
		case joaat("premier"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("primo"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("radi"):
			*uParam2 = { 0f, 1,74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1,54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1,263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1,263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = { -1,78f, 0,52f, 0,52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("rebel"):
			*uParam2 = { -1,22f, 0,6f, 0,44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rebel2"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("regina"):
			*uParam2 = { 0f, 1,473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rocoto"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("romero"):
			*uParam2 = { 0f, 1,83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ruffian"):
			*uParam2 = { 0f, -0,02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,19f;
			break;
		
		case joaat("ruiner"):
			*uParam2 = { 0f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,015f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("sadler"):
			*uParam2 = { 0f, 2,26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sandking"):
			*uParam2 = { 0f, 2,496f, 1,55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = { 0f, 2,286f, 1,55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("schafter2"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1,43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("seminole"):
			*uParam2 = { 0f, 1,45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sentinel"):
			*uParam2 = { 0f, 1,18f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("serrano"):
			*uParam2 = { 0f, 1,68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,49f;
			break;
		
		case joaat("stanier"):
			*uParam2 = { 0f, 1,55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("stinger"):
			*uParam2 = { 0f, 1,3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = { -1f, -0,17f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("stratum"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sultan"):
			*uParam2 = { 0f, 1,77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("superd"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("surano"):
			*uParam2 = { 0f, 1,38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("surfer"):
			*uParam2 = { 0f, 2,48f, 0,26f };
			*uParam3 = { 0f, -1f, -0,212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,32f;
			break;
		
		case joaat("surfer2"):
			*uParam2 = { 0f, 2,48f, 0,26f };
			*uParam3 = { 0f, -1f, -0,212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,32f;
			break;
		
		case joaat("surge"):
			*uParam2 = { 0f, 1,69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tailgater"):
			*uParam2 = { 0f, 1,783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tornado"):
			*uParam2 = { -1,23f, 0,11f, -0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tornado2"):
			*uParam2 = { 0f, 1,44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tornado3"):
			*uParam2 = { 0f, 1,44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("vacca"):
			*uParam2 = { 0f, 1,76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("vader"):
			*uParam2 = { 0f, 0,08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("vigero"):
			*uParam2 = { -1f, 0,11f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("voltic"):
			*uParam2 = { 0f, 1,763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("washington"):
			*uParam2 = { 0f, 1,61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("youga"):
			*uParam2 = { 0f, 2,352f, 1,003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("zion"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zion2"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("ztype"):
			*uParam2 = { -0,96f, -0,69f, 0,35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0,5f;
			break;
	}
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0,18f, 0,1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("paradise"):
			*uParam2 = { 0f, 2,23f, 1f };
			*uParam3 = { 0f, -0,22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("alpha"):
			*uParam2 = { -1f, 0,18f, -0,05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("huntley"):
			*uParam2 = { 0f, 1,52f, 0,99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("zentorno"):
			*uParam2 = { -1,24f, 0,3f, -0,07f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jester"):
			*uParam2 = { -1f, 0,17f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,05f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("massacro"):
			*uParam2 = { 0f, 1,37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("turismor"):
			*uParam2 = { -1f, 0,3f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("thrust"):
			*uParam2 = { -1f, 0,405f, 0,4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1625f;
			break;
		
		case joaat("btype"):
			*uParam2 = { 0f, 1,143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,7125f;
			break;
		
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0,47f, -0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2625f;
			break;
		
		case joaat("glendale"):
			*uParam2 = { 0f, 1,683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("warrener"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("blade"):
			*uParam2 = { -1f, 0,445f, 0,2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,325f;
			break;
		
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0,335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0,34f, 0,2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("pigalle"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("coquette2"):
			*uParam2 = { -1f, -0,1775f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("innovation"):
			*uParam2 = { 0f, 0,15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0,27f, 0,845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0,2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = { -1,78f, 0,52f, 0,52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("slamvan"):
			*uParam2 = { -1f, 0,275f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0,0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3875f;
			break;
		
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0,0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4375f;
			break;
		
		case joaat("blista2"):
			*uParam2 = { -1f, 0,5325f, 0,245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2875f;
			break;
		
		case joaat("casco"):
			*uParam2 = { 0f, 0,94f, 1,03f };
			*uParam3 = { 0f, -0,03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("enduro"):
			*uParam2 = { 0f, -0,17f, 1f };
			*uParam3 = { 0f, 0,34f, -0,786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2,32f, 0,94f };
			*uParam3 = { 0f, -0,182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("guardian"):
			*uParam2 = { -1,94f, 1,07f, 0,38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0,2475f, -0,175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,435f;
			break;
		
		case joaat("lectro"):
			*uParam2 = { 0f, 0,3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("feltzer3"):
			*uParam1 = unk_0x365DC1E8054AF31A(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,597f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("osiris"):
			*uParam2 = { -1f, 0,27f, -0,03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("virgo"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("windsor"):
			*uParam2 = { -1,2f, -0,39f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("brawler"):
			*uParam2 = { -1f, -0,21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("chino"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("coquette3"):
			*uParam2 = { -1f, -0,1775f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("t20"):
			*uParam2 = { -1f, 0,4f, -0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("vindicator"):
			*uParam2 = { -1f, 0,21f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2,01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("chino2"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1,713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1,713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("primo2"):
			*uParam2 = { -1f, 0,42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("voodoo"):
			*uParam2 = { -1,12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0,5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,015f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("tornado5"):
			*uParam2 = { -1f, 0,15f, -0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0,1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0,1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("minivan2"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0,275f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("btype2"):
			*uParam2 = { -1f, -0,1f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0,3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("baller3"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller4"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller5"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller6"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cog55"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cog552"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("mamba"):
			*uParam2 = { -1f, -0,18f, 0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("nightshade"):
			*uParam2 = { -1f, -0,2f, 0,17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("schafter3"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter4"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter5"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter6"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0,21f, 0,03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("banshee2"):
			*uParam2 = { -1f, -0,4f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1,77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("btype3"):
			*uParam2 = { -1f, -0,1f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0,06f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("seven70"):
			*uParam2 = { -1f, -0,21f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fmj"):
			*uParam2 = { -1f, -0,06f, 0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("pfister811"):
			*uParam2 = { -1f, 0,06f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("prototipo"):
			*uParam2 = { -1f, 0,3f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("reaper"):
			*uParam2 = { -1f, 0,48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2,103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("windsor2"):
			*uParam2 = { -1,2f, 0,03f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("xls"):
			*uParam2 = { -1f, 0,36f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("xls2"):
			*uParam2 = { -1f, 0,36f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("brioso"):
			*uParam2 = { -1f, -0,06f, 0,565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("contender"):
			*uParam2 = { 0f, 2,33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("le7b"):
			*uParam2 = { -1f, -0,12f, 0,235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("omnis"):
			*uParam2 = { -1f, 0,03f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("avarus"):
			*uParam2 = { -1f, 0,27f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("daemon2"):
			*uParam2 = { -1f, 0,27f, 0,29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0,34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,125f;
			break;
		
		case joaat("esskey"):
			*uParam2 = { -1f, 0,335f, 0,31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0,27f, 0,845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("nightblade"):
			*uParam2 = { 0f, -0,133f, 0,61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,125f;
			break;
		
		case joaat("ratbike"):
			*uParam2 = { -1f, 0,31f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("shotaro"):
			*uParam2 = { -1f, 0,06f, 0,325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("zombiea"):
			*uParam2 = { -1f, 0,3f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("zombieb"):
			*uParam2 = { -1f, 0,2f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("vortex"):
			*uParam2 = { -1f, 0,18f, 0,37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,095f;
			break;
		
		case joaat("tornado6"):
			*uParam2 = { -1f, -0,03f, -0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("youga2"):
			*uParam2 = { 0f, 2,352f, 0,253f };
			*uParam3 = { 0f, -1f, -0,256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0,33f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("faggio3"):
			*uParam2 = { -1f, -0,54f, -0,11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("faggio"):
			*uParam2 = { -0,9875f, -0,0175f, -0,01f };
			*uParam3 = { 0,8975f, -0,26f, -0,0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1625f;
			break;
		
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("diablous"):
			*uParam2 = { -1f, 0,006f, 0,382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("diablous2"):
			*uParam2 = { -1f, 0,225f, 0,541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("elegy"):
			*uParam2 = { 0f, 1,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fcr"):
			*uParam2 = { -1f, 0,234f, 0,376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("fcr2"):
			*uParam2 = { -1f, 0,234f, 0,376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("italigtb"):
			*uParam2 = { -1f, -0,024f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0,024f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("nero"):
			*uParam2 = { -1f, 0,237f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("nero2"):
			*uParam2 = { -1f, 0,237f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("penetrator"):
			*uParam2 = { -1f, 0,153f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("ruiner2"):
			*uParam2 = { 0,363f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("ruiner3"):
			*uParam2 = { 0,363f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("specter"):
			*uParam2 = { -1f, -0,273f, -0,02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("specter2"):
			*uParam2 = { -1f, -0,273f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("technical2"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("voltic2"):
			*uParam2 = { 0f, 1,763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("infernus2"):
			*uParam2 = { -1f, 0,33f, 0,06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,06f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("ruston"):
			*uParam2 = { -1f, -0,273f, 0,084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("turismo2"):
			*uParam2 = { -1f, 0,159f, -0,193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("ardent"):
			*uParam2 = { -1f, 0,309f, 0,276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("cheetah2"):
			*uParam2 = { -1f, 0,159f, -0,127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("halftrack"):
			*uParam2 = { -1f, 0,501f, 0,531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("nightshark"):
			*uParam2 = { -1,5f, 0,42f, 0,584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("oppressor"):
			*uParam2 = { -1f, 0,306f, 0,355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,08f;
			break;
		
		case joaat("tampa3"):
			*uParam2 = { 0f, 1,515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,275f;
			break;
		
		case joaat("technical3"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case joaat("torero"):
			*uParam2 = { -1f, 0,201f, 0,114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("vagner"):
			*uParam2 = { -1,5f, 0,906f, 0,071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("xa21"):
			*uParam2 = { -1f, 0,441f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("phantom3"):
			*uParam2 = { -1,3f, 2,045f, 0,802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("hauler2"):
			*uParam2 = { -1,627f, 2,456f, 0,745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cyclone"):
			*uParam2 = { -1f, 0,186f, 0,382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("visione"):
			*uParam2 = { -1f, 0,432f, 0,031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("vigilante"):
			*uParam2 = { -1f, 0,232f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("retinue"):
			*uParam2 = { -1f, -0,018f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("rapidgt3"):
			*uParam2 = { 0f, 1,972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("avenger"):
		case joaat("avenger3"):
			*uParam2 = { -2,02f, 6,45f, -0,716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("deluxo"):
			*uParam2 = { -1f, -0,291f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("stromberg"):
			*uParam2 = { -1f, 0,23f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("riot2"):
			*uParam2 = { -1,891f, 2,144f, 0,657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("chernobog"):
			*uParam2 = { -2,127f, 5,413f, 1,132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,34f;
			break;
		
		case joaat("khanjali"):
			*uParam2 = { -0,897f, 1,391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("barrage"):
			*uParam2 = { -1,51f, 0,71f, 0,451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("comet4"):
			*uParam2 = { -1f, 0,298f, 0,257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,36f;
			break;
		
		case joaat("neon"):
			*uParam2 = { -1f, 0,181f, -0,066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("streiter"):
			*uParam2 = { -1f, 0,301f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sentinel3"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("yosemite"):
			*uParam2 = { -1f, 0,252f, 0,201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("sc1"):
			*uParam2 = { -1f, 0,616f, -0,131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("autarch"):
			*uParam2 = { -1f, 0f, 0,116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("gt500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("hustler"):
			*uParam2 = { -1f, -0,228f, 0,321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("revolter"):
			*uParam2 = { -1f, 0,203f, 0,126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("pariah"):
			*uParam2 = { -1f, -0,126f, 0,208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("raiden"):
			*uParam2 = { -1f, 0,252f, -0,095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("savestra"):
			*uParam2 = { -1f, 0f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("riata"):
			*uParam2 = { -1,3f, 0,18f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("hermes"):
			*uParam2 = { -1f, -0,134f, 0,158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("comet5"):
			*uParam2 = { -1f, 0,002f, 0,031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("z190"):
			*uParam2 = { -1f, -0,175f, 0,242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("viseris"):
			*uParam2 = { -1f, 0f, 0,244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,275f;
			break;
		
		case joaat("kamacho"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
	}
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("gb200"):
			*uParam2 = { -1f, 0f, 0,407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,225f;
			break;
		
		case joaat("fagaloa"):
			*uParam2 = { -1f, 0f, 0,225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("ellie"):
			*uParam2 = { -1f, 0,441f, -0,128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("issi3"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("michelli"):
			*uParam2 = { -1f, 0f, 0,0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("flashgt"):
			*uParam2 = { 0f, 1,592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("hotring"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tezeract"):
			*uParam2 = { -1f, 0,679f, 0,514f };
			*uParam3 = { 1f, 0f, -0,75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("tyrant"):
			*uParam2 = { -1,588f, 0,315f, 0,337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("dominator3"):
			*uParam2 = { -1f, 0f, 0,221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("taipan"):
			*uParam2 = { -1f, 0f, 0,219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("entity2"):
			*uParam2 = { -1,52f, 0,41f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0,297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("cheburek"):
			*uParam2 = { -1f, 0,393f, 0,162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("caracara"):
			*uParam2 = { -1f, 1,266f, 0,4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("speedo4"):
		case joaat("speedo5"):
			*uParam2 = { -1,5f, 0,833f, 0,391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("mule4"):
			*uParam2 = { -1,125f, 2,691f, 0,318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("pounder2"):
			*uParam2 = { -1,5f, 1,853f, 0,779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,38f;
			break;
		
		case joaat("swinger"):
			*uParam2 = { -1f, 0,195f, 0,105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("menacer"):
			*uParam2 = { -1,73f, 0,159f, 0,61f };
			*uParam3 = { 1f, 0,12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("scramjet"):
			*uParam2 = { -1f, -0,188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("patriot2"):
			*uParam2 = { -1,213f, 1,546f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("stafford"):
			*uParam2 = { -1f, 0,036f, 0,096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("freecrawler"):
			*uParam2 = { -1f, 0,249f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("oppressor2"):
			*uParam2 = { -1f, 0,306f, 0,355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,08f;
			break;
		
		case joaat("terbyte"):
			*uParam2 = { -1,73f, 3,397f, 0,724f };
			*uParam3 = { 1f, 0,12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("bruiser"):
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("bruiser2"):
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("bruiser3"):
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("brutus"):
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("brutus2"):
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("brutus3"):
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("cerberus"):
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cerberus2"):
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cerberus3"):
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("clique"):
			*uParam2 = { -1f, 0,167f, 0,159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("deveste"):
			*uParam2 = { -1,5f, 1,066f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("deviant"):
			*uParam2 = { -1f, 0,111f, 0,123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("dominator4"):
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("dominator5"):
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("dominator6"):
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("impaler"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("impaler2"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("impaler3"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("impaler4"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("imperator"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("imperator2"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("imperator3"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("issi4"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("issi5"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("issi6"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("italigto"):
			*uParam2 = { -1f, -0,091f, 0,207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("monster3"):
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("monster4"):
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("monster5"):
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("schlagen"):
			*uParam2 = { -1f, -0,105f, 0,262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("slamvan4"):
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("slamvan5"):
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("slamvan6"):
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("toros"):
			*uParam2 = { -1f, 0,415f, 0,394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tulip"):
			*uParam2 = { -1f, 0,171f, 0,223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("vamos"):
			*uParam2 = { -1f, 0f, 0,163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("zr380"):
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zr3802"):
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zr3803"):
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("caracara2"):
			*uParam2 = { -1f, 0,687f, 0,4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("drafter"):
			*uParam2 = { -1,045f, 0,15f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("dynasty"):
			*uParam2 = { -1f, 0,12f, 0,334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("emerus"):
			*uParam2 = { -1f, 0,372f, 0,439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("gauntlet3"):
			*uParam2 = { -1f, 0f, 0,222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("gauntlet4"):
			*uParam2 = { -1f, 0f, 0,222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("hellion"):
			*uParam2 = { -1f, 0,27f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("issi7"):
			*uParam2 = { -1f, 0,195f, -0,063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("jugular"):
			*uParam2 = { -1f, 0,213f, 0,213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("krieger"):
			*uParam2 = { -1f, 0,576f, -0,123f };
			*uParam3 = { 0,997f, -0,105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("locust"):
			*uParam2 = { -1f, -0,207f, 0,042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("nebula"):
		case 1690421418:
			*uParam2 = { -1f, 0,012f, 0,147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("neo"):
			*uParam2 = { -1f, 0,216f, 0,216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("novak"):
			*uParam2 = { -1f, 0,24f, 0,255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("paragon"):
			*uParam2 = { -1f, 0f, 0,156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("paragon2"):
			*uParam2 = { -1f, 0f, 0,156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("peyote2"):
			*uParam2 = { -1f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("s80"):
			*uParam2 = { -1f, 0,357f, 0,256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("thrax"):
			*uParam2 = { -1f, 0,426f, 0,339f };
			*uParam3 = { 1f, 0,06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("zion3"):
			*uParam2 = { -1f, 0,108f, 0,234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("zorrusso"):
			*uParam2 = { -1f, 0,273f, -0,06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("slamvan2"):
			*uParam2 = { -1f, 0,35f, 0,456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("rebla"):
			*uParam2 = { 0f, 1,9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("asbo"):
			*uParam2 = { -1f, 0,104f, 0,339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("sugoi"):
			*uParam2 = { -1f, 0,104f, 0,223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("komoda"):
			*uParam2 = { -1f, 0,104f, 0,155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("vstr"):
			*uParam2 = { -1f, 0,104f, 0,155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sultan2"):
			*uParam2 = { -1f, 0,313f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("kanjo"):
			*uParam2 = { -1f, 0,313f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("jb7002"):
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("yosemite2"):
			*uParam2 = { -1f, 0,252f, 0,201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("retinue2"):
			*uParam2 = { -1f, -0,018f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("furia"):
			*uParam2 = { -1f, 0,0965f, 0,149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("everon"):
			*uParam2 = { 0f, 2,019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("imorgon"):
			*uParam2 = { -1,5f, 0,42f, -0,2f };
			*uParam3 = { 1f, -0,0997f, 0,0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zhaba"):
			*uParam2 = { -1,202f, 0,034f, 0,6635f };
			*uParam3 = { 1f, -0,002f, 0f };
			*uParam4 = { 0f, -0,7398f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("gauntlet5"):
			*uParam2 = { -1,5f, 0,379f, 0,297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,24f;
			break;
		
		case joaat("dukes3"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("manana2"):
			*uParam2 = { -1,76f, 0,105f, 0,009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case joaat("club"):
			*uParam2 = { 0f, 1,252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,31f;
			break;
		
		case joaat("glendale2"):
			*uParam2 = { 0f, 2,135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,205f;
			break;
		
		case joaat("youga3"):
			*uParam2 = { 0f, 2,352f, 0,3f };
			*uParam3 = { 0f, -1f, -0,256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,135f;
			break;
		
		case joaat("yosemite3"):
			*uParam2 = { -1f, 0,252f, 0,203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,21f;
			break;
		
		case joaat("seminole2"):
			*uParam2 = { 0f, 1,654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("penumbra2"):
			*uParam2 = { -1,08f, 0,28f, -0,093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("landstalker2"):
			*uParam2 = { -1,64f, 0,7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("coquette4"):
			*uParam2 = { -1f, -0,021f, 0,273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("tigon"):
			*uParam2 = { -1f, 0,156f, 0,099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("peyote3"):
			*uParam2 = { -1,5f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("brioso2"):
			*uParam2 = { -1f, 0,275f, 0,215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("slamtruck"):
			*uParam2 = { -1f, 1,454f, 0,485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("italirsx"):
			*uParam2 = { -1f, 0,109f, 0,129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("toreador"):
			*uParam2 = { -1f, 0,194f, 0,342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("weevil"):
			*uParam2 = { -1f, 0,111f, 0,168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("zr350"):
			*uParam2 = { 0f, 1,632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,19f;
			break;
		
		case joaat("calico"):
			*uParam2 = { -1f, 0,497f, 0,212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jester4"):
			*uParam2 = { -1f, 0f, 0,181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("comet6"):
			*uParam2 = { -1f, 0,205f, 0,074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("warrener2"):
			*uParam2 = { -1f, 0,408f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("remus"):
			*uParam2 = { -1f, 0,204f, 0,357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("vectre"):
			*uParam2 = { -1f, 0,249f, 0,164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("dominator7"):
			*uParam2 = { -1f, 0,253f, 0,142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("cypher"):
		case 258105345:
			*uParam2 = { -1f, 0,223f, 0,185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("rt3000"):
			*uParam2 = { -1f, 0f, 0,189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("sultan3"):
			*uParam2 = { -1f, 0,42f, 0,309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,23f;
			break;
		
		case joaat("tailgater2"):
			*uParam2 = { -1f, 0,337f, 0,283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("previon"):
			*uParam2 = { -1f, 0,14f, -0,155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("dominator8"):
			*uParam2 = { -1f, 0,153f, -0,006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("futo2"):
			*uParam2 = { -1f, 0,318f, -0,013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("euros"):
			*uParam2 = { -1f, 0,101f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("growler"):
			*uParam2 = { -1f, 0,151f, 0,149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("cinquemila"):
			*uParam2 = { -1f, 0,533f, 0,197f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("champion"):
			*uParam2 = { -1f, 0,076f, 0,122f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("granger2"):
			*uParam2 = { -1f, 0,461f, 0,264f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("deity"):
			*uParam2 = { -1f, 0,279f, 0,235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("buffalo4"):
			*uParam2 = { -1f, 0,251f, 0,149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("baller7"):
			*uParam2 = { -1,194f, 0,182f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("zeno"):
			*uParam2 = { -1,194f, 0,409f, 0,199f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case joaat("comet7"):
			*uParam2 = { -1f, 0,05f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("astron"):
			*uParam2 = { -1f, 0,249f, 0,39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("patriot3"):
			*uParam2 = { -1,2f, 0,474f, 0,335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,23f;
			break;
		
		case joaat("jubilee"):
			*uParam2 = { -1,037f, 0,438f, 0,31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("shinobi"):
			*uParam2 = { 0f, 0,306f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,045f;
			break;
		
		case joaat("reever"):
			*uParam2 = { -1f, 0,292f, 0,29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("iwagen"):
			*uParam2 = { -1f, 0,387f, 0,209f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("brioso3"):
			*uParam2 = { -1f, 0,15f, 0,2f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("corsita"):
			*uParam2 = { -1f, 0,1f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("greenwood"):
			*uParam2 = { -1f, 0,2f, 0,138f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("kanjosj"):
			*uParam2 = { -1f, 0,1f, 0,26f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("postlude"):
			*uParam2 = { -1f, 0f, 0,28f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("rhinehart"):
			*uParam2 = { 0f, 1,317f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("tenf"):
			*uParam2 = { -1f, 0,74f, 0,19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("tenf2"):
			*uParam2 = { -1f, 0,74f, 0,19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("torero2"):
			*uParam2 = { -1f, 0f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("vigero2"):
			*uParam2 = { -1f, -0,07f, 0,3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("weevil2"):
			*uParam2 = { -1f, 0,07f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("draugur"):
			*uParam2 = { -1f, 0,5f, 0,48f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("ruiner4"):
			*uParam2 = { -1f, 0,5f, 0,182f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("sentinel4"):
		case -986656474:
			*uParam2 = { -1f, 0,147f, 0,239f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sm722"):
			*uParam2 = { -1f, -0,4f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("omnisegt"):
			*uParam2 = { 0f, 1,462f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("powersurge"):
			*uParam2 = { -1f, 0,3f, 0,37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("entity3"):
			*uParam2 = { -1f, 0,5f, 0,225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("manchez3"):
			*uParam2 = { -1f, 0,066f, 0,329f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("surfer3"):
			*uParam2 = { -1f, 1,19f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("boor"):
			*uParam2 = { -1f, 0,25f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("eudora"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,7f;
			break;
		
		case joaat("tulip2"):
			*uParam2 = { -1f, 0f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("r300"):
			*uParam2 = { -1f, 0f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("virtue"):
			*uParam2 = { -1f, 0f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("issi8"):
			*uParam2 = { -1f, 0,3f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("broadway"):
			*uParam2 = { -1f, -0,4f, 0,375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("panthere"):
			*uParam2 = { -1f, 0,069f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("tahoma"):
			*uParam2 = { -1f, -0,253f, 0,39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("everon2"):
			*uParam2 = { -1f, 0,101f, 0,227f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,6f;
			break;
	}
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("l35"):
			*uParam2 = { -1f, 0,2f, 0,43f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("brigham"):
			*uParam2 = { -0,003f, 2,764f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("gauntlet6"):
			*uParam2 = { -1,5f, 0,4f, 0,1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,24f;
			break;
		
		case joaat("stingertt"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("buffalo5"):
			*uParam2 = { 0f, 1,5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("ratel"):
			*uParam2 = { -1f, 0,128f, 0,212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,42f;
			break;
		
		case joaat("clique2"):
			*uParam2 = { -1f, 0,088f, 0,438f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("coureur"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("monstrociti"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("driftfr36"):
			*uParam2 = { -1f, 0,1f, 0,026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,44f;
			break;
		
		case joaat("driftyosemite"):
			*uParam2 = { -1f, 0,252f, 0,201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("driftremus"):
			*uParam2 = { -1f, 0,204f, 0,357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("drifteuros"):
			*uParam2 = { -1f, 0,101f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("driftfuto"):
			*uParam2 = { -1f, 0,318f, -0,013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("driftjester"):
			*uParam2 = { -1f, 0f, 0,181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("driftzr350"):
			*uParam2 = { 0f, 1,632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,19f;
			break;
		
		case joaat("aleutian"):
			*uParam2 = { 0f, 2,1f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("dominator9"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("fr36"):
			*uParam2 = { -1f, 0,1f, 0,026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,44f;
			break;
		
		case joaat("cavalcade3"):
			*uParam2 = { -1,6f, 0,585f, 0,3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("impaler5"):
			*uParam2 = { -1f, 0,16f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case joaat("asterope2"):
			*uParam2 = { -1f, 0,15f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,46f;
			break;
		
		case joaat("dorado"):
			*uParam2 = { -1f, 0,229f, 0,37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,36f;
			break;
		
		case joaat("impaler6"):
			*uParam2 = { -1f, 0,216f, 0,124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,41f;
			break;
		
		case joaat("vivanite"):
			*uParam2 = { -1f, 0,475f, 0,05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1240172147:
		case -143587026:
			*uParam2 = { 0f, 1,141f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 1249425552:
			*uParam2 = { -1f, 0,16f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case 1307736079:
			*uParam2 = { -1f, 0,315f, 0,1587f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,0455f };
			*uParam5 = 0,4f;
			break;
		
		case 1452003510:
			*uParam2 = { -1f, 0,216f, 0,124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,41f;
			break;
		
		case -223461503:
			*uParam2 = { -1f, -0,0897f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2375f;
			break;
		
		case 1121330119:
			*uParam2 = { -1f, 0f, 0,2702f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case 1579902654:
			*uParam2 = { -1f, 0f, 0,0653f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1896488056:
			*uParam2 = { -1,229f, 0,6f, 0,361f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -999594302:
			*uParam2 = { 0f, 1,71f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 1881415402:
			*uParam2 = { -1f, 0,175f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1958428933:
			*uParam2 = { -1f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -946047670:
			*uParam2 = { -1f, 0f, 0,175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1968807591:
			*uParam2 = { 0f, 1,0569f, 1f };
			*uParam3 = { 0f, -0,5995f, -1f };
			*uParam4 = { -0,4071f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
	}
	return 1;
}

bool func_95(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_96()
{
	Global_1943409 = 0;
	Global_1943409.f_1 = { 0f, 0f, 0f };
	Global_1943409.f_4 = { 0f, 0f, 0f };
	Global_1943409.f_7 = { 0f, 0f, 0f };
	Global_1943409.f_10 = 0f;
	Global_1943409.f_11 = 0f;
	Global_1943409.f_12 = 0;
	Global_1943409.f_13 = 0;
	Global_1943409.f_14 = { 0f, 0f, 0f };
	Global_1943409.f_17 = { 0f, 0f, 0f };
	Global_1943409.f_20 = { 0f, 0f, 0f };
	Global_1943409.f_23 = 0;
	Global_1943409.f_24 = 0;
}

int func_97(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x0BCE48C8677F9824(iParam0, 0) || func_98(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_98(int iParam0)
{
	var uVar0;
	
	if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "MPBitset"))
			{
				uVar0 = unk_0xE2F6FE9B61232165(iParam0, "MPBitset");
				return BitTest(uVar0, 16);
			}
		}
	}
	return 0;
}

int func_99(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (unk_0xA8F635A578C0CE07(uParam1, 13) && unk_0xBE0146369C46314B(uParam1))
	{
		bVar0 = unk_0xA34132DD5D4FE383(uParam1);
	}
	else
	{
		bVar0 = func_32();
	}
	bVar1 = false;
	if (bVar0 == unk_0x259BE71D8A81D4FA())
	{
		if (func_111(15, 0))
		{
			bVar1 = true;
		}
		else if (func_107(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((!bVar1 && unk_0xFC8BFE4B41177C22(iParam0)) && !unk_0x1C2F771CDC87A3A5(iParam0, 0)) && ((unk_0xA8F635A578C0CE07(uParam1, 13) && unk_0x7260716F2E4D7661()) && unk_0xE582BF3EDDBB1A68(uParam1)))
	{
		iVar2 = Global_2359296[func_106() /*5570*/].f_681.f_2;
		if (iVar2 > -1 && iVar2 < 517)
		{
			if (BitTest(Global_1586521[iVar2 /*142*/].f_103, 8))
			{
				bVar1 = true;
			}
		}
	}
	if (((((((!(unk_0xFC8BFE4B41177C22(iParam0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0)) || !unk_0x1B1A446EFA398EB5(iParam0)) || !unk_0x8FF2665359043205(0, -1, 1)) || !((unk_0xA8F635A578C0CE07(uParam1, 13) && unk_0x7260716F2E4D7661()) && unk_0xE582BF3EDDBB1A68(uParam1))) || bVar0 == func_32()) || !func_689(bVar0, 0, 0)) || !bVar1) || func_100(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_100(int iParam0)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 1;
	}
	if (func_102(unk_0x259BE71D8A81D4FA()) == 3)
	{
		if (func_101(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1943434)
	{
		return 1;
	}
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
		case joaat("stryder"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("squaddie"):
		case joaat("winky"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("verus"):
		case joaat("lm87"):
		case joaat("gp1"):
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("thruster"):
		case joaat("terbyte"):
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
		case joaat("blazer2"):
		case joaat("burrito2"):
		case joaat("ignus"):
		case joaat("draugur"):
		case joaat("brickade2"):
		case joaat("journey2"):
		case joaat("stingertt"):
		case joaat("drifttampa"):
		case joaat("turismo3"):
		case joaat("polgauntlet"):
		case joaat("police5"):
		case joaat("police4"):
		case joaat("baller8"):
		case joaat("vigero3"):
		case joaat("terminus"):
		case 1249425552:
		case 1452003510:
		case 1737348074:
		case -1628000569:
		case -773802025:
			return 1;
			break;
		
		case joaat("youga"):
		case joaat("youga2"):
			if (unk_0x94C9CD3D66808551(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
			if (unk_0x94C9CD3D66808551(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case joaat("club"):
			if ((unk_0x94C9CD3D66808551(iParam0, 7) == 0 || unk_0x94C9CD3D66808551(iParam0, 7) == 1) || unk_0x94C9CD3D66808551(iParam0, 7) == 7)
			{
				return 1;
			}
			break;
		
		case joaat("yosemite3"):
			if ((unk_0x94C9CD3D66808551(iParam0, 45) == 4 || unk_0x94C9CD3D66808551(iParam0, 45) == 5) || unk_0x94C9CD3D66808551(iParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_101(int iParam0)
{
	if (unk_0x77B62CAA5DF0922A("FMDeliverableID", 3))
	{
		if (unk_0xD130E7CDEE903624(iParam0, "FMDeliverableID"))
		{
			return unk_0xE2F6FE9B61232165(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_102(bool bParam0)
{
	if (func_105(bParam0) == 233)
	{
		return func_103(bParam0);
	}
	return -1;
}

int func_103(int iParam0)
{
	if (func_104(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

int func_104(int iParam0, int iParam1)
{
	if (func_35(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_105(int iParam0)
{
	if (func_35(iParam0))
	{
		if (func_104(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_106()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_107(bool bParam0)
{
	return func_108(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_108(bool bParam0, bool bParam1)
{
	return func_109(bParam0, bParam1, 1);
}

int func_109(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_35(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_110(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_35(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0, int iParam1)
{
	if (func_35(iParam0))
	{
		if (func_35(Global_1887305[iParam0 /*610*/].f_10))
		{
			if (Global_1887305[iParam0 /*610*/].f_10 == iParam0 && Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_111(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	if (func_116(unk_0x259BE71D8A81D4FA()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return 1;
				break;
			}
	}
	uVar0 = func_113(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_112(iVar1));
}

int func_112(int iParam0)
{
	return (iParam0 % 32);
}

var func_113(int iParam0)
{
	var uVar0;
	
	uVar0 = func_82(func_114(iParam0), -1);
	return uVar0;
}

int func_114(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_115(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1291;
			break;
	}
	return 1291;
}

int func_115(int iParam0)
{
	return (iParam0 / 32);
}

int func_116(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_117(bParam0) && Global_2657971[bParam0 /*465*/].f_322.f_11 == bParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_117(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_689(bParam0, 1, 1))
		{
			if (Global_2657971[bParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_118(Global_2657971[bParam0 /*465*/].f_322.f_8) == 22;
			}
		}
	}
	return 0;
}

int func_118(int iParam0)
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

void func_119(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_121(iParam1);
	func_120(iVar1, &uVar0);
	unk_0x77B012A683295B6E(iParam0, uVar0);
}

bool func_120(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		
		case 1:
			*uParam1 = 5;
			break;
		
		case 2:
			*uParam1 = 6;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 111;
			break;
		
		case 5:
			*uParam1 = 112;
			break;
		
		case 6:
			*uParam1 = 107;
			break;
		
		case 7:
			*uParam1 = 104;
			break;
		
		case 8:
			*uParam1 = 98;
			break;
		
		case 9:
			*uParam1 = 100;
			break;
		
		case 10:
			*uParam1 = 102;
			break;
		
		case 11:
			*uParam1 = 99;
			break;
		
		case 12:
			*uParam1 = 105;
			break;
		
		case 13:
			*uParam1 = 106;
			break;
		
		case 14:
			*uParam1 = 37;
			break;
		
		case 15:
			*uParam1 = 90;
			break;
		
		case 16:
			*uParam1 = 88;
			break;
		
		case 17:
			*uParam1 = 89;
			break;
		
		case 18:
			*uParam1 = 91;
			break;
		
		case 19:
			*uParam1 = 38;
			break;
		
		case 20:
			*uParam1 = 138;
			break;
		
		case 21:
			*uParam1 = 36;
			break;
		
		case 22:
			*uParam1 = 27;
			break;
		
		case 23:
			*uParam1 = 28;
			break;
		
		case 24:
			*uParam1 = 29;
			break;
		
		case 25:
			*uParam1 = 150;
			break;
		
		case 26:
			*uParam1 = 30;
			break;
		
		case 27:
			*uParam1 = 31;
			break;
		
		case 28:
			*uParam1 = 32;
			break;
		
		case 29:
			*uParam1 = 35;
			break;
		
		case 30:
			*uParam1 = 135;
			break;
		
		case 31:
			*uParam1 = 137;
			break;
		
		case 32:
			*uParam1 = 136;
			break;
		
		case 33:
			*uParam1 = 71;
			break;
		
		case 34:
			*uParam1 = 145;
			break;
		
		case 35:
			*uParam1 = 63;
			break;
		
		case 36:
			*uParam1 = 64;
			break;
		
		case 37:
			*uParam1 = 65;
			break;
		
		case 38:
			*uParam1 = 66;
			break;
		
		case 39:
			*uParam1 = 67;
			break;
		
		case 40:
			*uParam1 = 68;
			break;
		
		case 41:
			*uParam1 = 69;
			break;
		
		case 42:
			*uParam1 = 73;
			break;
		
		case 43:
			*uParam1 = 70;
			break;
		
		case 44:
			*uParam1 = 74;
			break;
		
		case 45:
			*uParam1 = 51;
			break;
		
		case 46:
			*uParam1 = 53;
			break;
		
		case 47:
			*uParam1 = 54;
			break;
		
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_122(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((unk_0x76CD105BCAC6EB9F() && func_123()) && Global_1576239)
	{
		if ((iParam0 == Global_1576240 && iParam1 == Global_1576241) && iParam2 == Global_1576242)
		{
			return 13;
		}
	}
	return 0;
}

int func_123()
{
	struct<13> Var0;
	
	if (unk_0x99DFE4CAC19D527F())
	{
		if ((unk_0x261E3728EE56B3AC() && unk_0x5F9F81C08516558E()) && unk_0xFE087BC8EB584AA2())
		{
			Var0 = { func_124() };
			if (unk_0x7260716F2E4D7661() && unk_0xE582BF3EDDBB1A68(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_124()
{
	struct<13> Var0;
	
	unk_0x677540FE33795D26(&Var0, 13);
	return Var0;
}

int func_125(int iParam0)
{
	switch (unk_0x4B423FAA24E8ABF0(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_126(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case joaat("alphaz1"):
			*uParam1 = 0,2f;
			break;
		
		case joaat("bombushka"):
			*uParam1 = 0,15f;
			break;
		
		case joaat("howard"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("hunter"):
			*uParam1 = 0,5f;
			break;
		
		case joaat("microlight"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("mogul"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("molotok"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("nokota"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("pyro"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("rogue"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("seabreeze"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("starling"):
			*uParam1 = 0,5f;
			break;
		
		case joaat("tula"):
			*uParam1 = 0,15f;
			break;
		
		case joaat("khanjali"):
			*uParam1 = 0,6f;
			break;
		
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("greenwood"):
		case joaat("omnisegt"):
		case joaat("virtue"):
		case joaat("r300"):
		case joaat("stingertt"):
		case joaat("buffalo5"):
		case joaat("coureur"):
		case joaat("monstrociti"):
		case joaat("aleutian"):
		case joaat("turismo3"):
		case joaat("baller8"):
		case joaat("terminus"):
		case 1121330119:
		case -946047670:
			return 1;
			break;
	}
	return 0;
}

void func_128(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_151(iParam0))
		{
			if (unk_0x70E57E9927B6BA58(&(uParam1->f_1)) != 0)
			{
				unk_0x3FEAE59CDE6D3946(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x20DE4C1439E0FC92())
			{
				unk_0x05D3F682DDA06C20(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_150(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_150(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_150(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_150(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_150(iVar2)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_150(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_150(iVar3)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_150(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_150(iVar4)))
					{
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_150(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("surfer3"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_150(iVar5)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_150(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_150(4)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_150(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x94C9CD3D66808551(iParam0, 10) != 0)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_150(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_150(iVar6)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_150(iVar6));
				}
				iVar6++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xE0ACB5BC9D603F02(iParam0, 0);
			if (unk_0x94C9CD3D66808551(iParam0, 5) != -1)
			{
				unk_0xE0ACB5BC9D603F02(iParam0, 1);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			unk_0x84F5FD9CD27457EE(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x963D9A7202C06F65(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			unk_0x593A3115B8AE759B(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x588D8FDC61F7CFAD(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_148(uParam1->f_5) || func_148(uParam1->f_6))
			{
			}
			else
			{
				unk_0xD133EF7430EDCD09(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xBB361D7264AC4FD8(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_147(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_146())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x5DA0536AEAD1FF31(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_145(uParam1->f_66))
		{
			unk_0xFE620ED8E0A3C209(iParam0, 0);
		}
		else
		{
			unk_0xFE620ED8E0A3C209(iParam0, 0);
			unk_0xFE620ED8E0A3C209(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			unk_0x439C904840715871(iParam0, 0);
			unk_0x519F76A38952BBD0(iParam0, 0);
		}
		if (bParam2)
		{
			unk_0x0B74F181ADFC39BF(iParam0, uParam1->f_70);
		}
		unk_0xEAB8A43F6621850F(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xE62930EC6FAABCA5(iParam0, 2, BitTest(uParam1->f_77, 28));
		unk_0xE62930EC6FAABCA5(iParam0, 3, BitTest(uParam1->f_77, 29));
		unk_0xE62930EC6FAABCA5(iParam0, 0, BitTest(uParam1->f_77, 30));
		unk_0xE62930EC6FAABCA5(iParam0, 1, BitTest(uParam1->f_77, 31));
		unk_0xD37CA6D6F8993BB9(iParam0, BitTest(uParam1->f_77, 10));
		if (unk_0xBA3ECE95D3094B0F(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xA1C03303EC67320B(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(iParam0)))
			{
				if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_144(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_144(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x7943BD10E2A03FAC(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xD6B15DF382A594C7(iParam0, 1);
			}
			else
			{
				unk_0x232B023FE4D977E2(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_136(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xBA16CD57E37AC32A(uParam1->f_66) && !unk_0xEA4F815FDC353FEF(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_150(iVar7 + 1)))
				{
					if (!unk_0x5318DF85BEB6B95F(iParam0, iVar7 + 1))
					{
						unk_0xD772F6AA66750D2B(iParam0, iVar7 + 1, false);
					}
				}
				else if (unk_0x5318DF85BEB6B95F(iParam0, iVar7 + 1))
				{
					unk_0xD772F6AA66750D2B(iParam0, iVar7 + 1, true);
				}
				iVar7++;
			}
		}
		if ((unk_0x4B423FAA24E8ABF0(iParam0) == joaat("sheava") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("omnis")) || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("le7b"))
		{
			if (unk_0x94C9CD3D66808551(iParam0, 0) == -1)
			{
				unk_0xD772F6AA66750D2B(iParam0, 1, false);
			}
		}
		if ((((func_131() && unk_0x00C6FDED3EB75117(uParam1->f_66)) && unk_0x8EC15ED9ECD1E9D0(iParam0)) && !unk_0x2E6A27037F1DC473(iParam0, joaat("avenger"))) && !unk_0x2E6A27037F1DC473(iParam0, func_130(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (!BitTest(uParam1->f_77, 22) && func_129(iParam0, 5f))
				{
					unk_0xC2A036647DD761E4(iParam0, 3);
				}
				else
				{
					unk_0xC2A036647DD761E4(iParam0, 2);
				}
			}
			else
			{
				unk_0xC2A036647DD761E4(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			unk_0xF46ECFD5526E8FF7(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xF46ECFD5526E8FF7(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_129(int iParam0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
		if (unk_0xB1EAADCB692D69CE(Var0, &fVar1, 0, 0))
		{
			if (unk_0x1D5CD3EAAA7422B0((Var0.f_2 - fVar1)) > fParam1)
			{
				return 1;
			}
		}
		else if (Var0.f_2 > (unk_0xFAF53F2F65D5EE26(Var0.f_0, Var0.f_1) + fParam1))
		{
			return 1;
		}
		else if (Var0.f_2 > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_130(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_131()
{
	if ((((Global_4718592.f_117195 == 6 || Global_4718592.f_117195 == 7) || Global_4718592.f_117195 == 18) || Global_4718592.f_117195 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_135(7))
	{
		if (func_133(Global_2672855.f_4.f_16) || func_132(Global_2672855.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_132(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1882632[iVar0 /*146*/].f_82.f_63 != 0;
	}
	return 0;
}

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_134(iParam0, 9);
	}
	return 0;
}

var func_134(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

bool func_135(int iParam0)
{
	return func_17(&(Global_2672855.f_194), iParam0);
}

int func_136(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x90E3EAFF8AAA1A42(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xB5AD06DDA85E2E8F(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0xF5501FF9869DAC7C(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0xF5501FF9869DAC7C(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x89D1FDCA3735A1E0(*iParam0, 255);
				}
				else
				{
					unk_0x89D1FDCA3735A1E0(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0xF5501FF9869DAC7C(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x94C9CD3D66808551(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xC87E4FAD00AEDD4B(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					unk_0x8450270DC5896D39(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					unk_0x8450270DC5896D39(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_142(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					unk_0x8450270DC5896D39(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_141(unk_0x4B423FAA24E8ABF0(*iParam0), 1) && unk_0x94C9CD3D66808551(*iParam0, 24) != func_139(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x8450270DC5896D39(*iParam0, 24, func_139(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_138(iParam0);
	if (func_137(*iParam0))
	{
		unk_0xD05AF216D970F274(*iParam0, 1);
		unk_0x5FE0938FDE9B0958(*iParam0, 1);
	}
	return 1;
}

int func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0)) && unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
	{
		unk_0xB5AD06DDA85E2E8F(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x94C9CD3D66808551(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x1340575A0EEE0622(iParam0, iVar1, unk_0x94C9CD3D66808551(iParam0, iVar1)), 32);
				iVar2 = unk_0x70E57E9927B6BA58(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x70E57E9927B6BA58("MNU_CAGE") || iVar2 == unk_0x70E57E9927B6BA58("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_138(var uParam0)
{
	switch (unk_0x4B423FAA24E8ABF0(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x94C9CD3D66808551(*uParam0, 4) == 0)
			{
				unk_0x8450270DC5896D39(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xC87E4FAD00AEDD4B(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x8450270DC5896D39(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		switch (unk_0x4B423FAA24E8ABF0(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
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
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = func_140(iParam0, 38) + 1;
		iVar1 = func_140(iParam0, 24) + 1;
		fVar2 = (system::to_float(iParam1 + 1) / system::to_float(iVar0));
		iVar3 = (system::floor((system::to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((unk_0x441B9C85D0FFA9ED(Global_152860) && unk_0x2E6A27037F1DC473(iParam0, Global_152860)) && Global_152861 == iParam1)
	{
		return Global_152862;
	}
	iVar0 = (unk_0x5B59C12A02157D00(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_142(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_141(int iParam0, int iParam1)
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

int func_142(int iParam0, int iParam1, int iParam2)
{
	if (!func_143() && unk_0xAF82FE1B3E949337(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_143()
{
	return 0;
}

void func_144(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x90E3EAFF8AAA1A42(iParam0) > 0)
	{
		unk_0xB5AD06DDA85E2E8F(iParam0, 0);
		iVar0 = unk_0x94C9CD3D66808551(iParam0, 24);
		iVar1 = unk_0xEFDD8C5443F6C9E4(iParam0, 24);
		unk_0xE33678A9AE50A01B(iParam0, uParam1);
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("tornado6") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xC87E4FAD00AEDD4B(iParam0, 24);
		}
		else
		{
			unk_0x8450270DC5896D39(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

var func_146()
{
	return unk_0x087611B922B50F13(joaat("mpindependence"));
}

int func_147(int iParam0)
{
	var uVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
			{
				if (unk_0xD130E7CDEE903624(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xE2F6FE9B61232165(iParam0, "MPBitset");
				}
				return BitTest(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_148(int iParam0)
{
	if (!func_143() && func_149(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_151(int iParam0)
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!func_152(unk_0x259BE71D8A81D4FA(), -1))
		{
			iParam0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		}
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	if (func_102(unk_0x259BE71D8A81D4FA()) == 3)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (func_101(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_152(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (func_689(bParam0, 1, 1))
	{
		if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(bParam0), 0))
		{
			iVar0 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(bParam0), 0);
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

struct<103> func_153()
{
	struct<103> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Var0.f_66 = func_313();
	StringCopy(&(Var0.f_1), "FCP1", 16);
	Var0.f_5 = 4;
	Var0.f_6 = 0;
	Var0.f_7 = 5;
	Var0.f_8 = 0;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_98 = 0;
	Var0.f_65 = 1;
	Var0.f_69 = 3;
	Var0.f_62 = 255;
	Var0.f_63 = 255;
	Var0.f_64 = 255;
	Var0.f_74 = 255;
	Var0.f_76 = 255;
	unk_0x0B0C9A0F9AAEB7F0(&(Var0.f_77), 9);
	Var0.f_9[1] = 14;
	Var0.f_9[2] = 8;
	Var0.f_9[3] = 6;
	Var0.f_9[4] = 6;
	Var0.f_9[7] = 6;
	Var0.f_9[11] = 2;
	Var0.f_9[12] = 1;
	Var0.f_9[13] = 1;
	Var0.f_9[15] = 2;
	Var0.f_9[22] = 1;
	if (func_154(unk_0x259BE71D8A81D4FA()))
	{
		Var0.f_9[5] = 1;
	}
	return Var0;
}

int func_154(bool bParam0)
{
	if (bParam0 != func_32())
	{
		return BitTest(Global_1845281[bParam0 /*883*/].f_268.f_513.f_1, 21);
	}
	return 0;
}

void func_155(int iParam0)
{
	if (!Global_262145.f_4373)
	{
		unk_0xF977D20CFFFD341F(iParam0, 0);
	}
}

int func_156(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x441B9C85D0FFA9ED(iParam1))
	{
		return 0;
	}
	if (!unk_0x2E9F58AD6FE93DFF(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0x60040CDD28AA1BC3(Param2, fVar0, 0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x5779387E956077A6(iParam1, Param2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0xFC8BFE4B41177C22(iVar1))
	{
		*uParam0 = unk_0x913A6486719A87D2(iVar1);
		Global_2738934.f_6799 = iVar1;
		if (unk_0x2FC2FDC413532977(*uParam0))
		{
			if (bParam13)
			{
				unk_0x32C336953C18A3CE(iVar1, 1);
			}
			unk_0x11C125313CB8ADA2(iVar1, iParam8);
			if (unk_0xC8D49539708A80B4(iVar1))
			{
				if (bParam6)
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 1);
				}
				else
				{
					unk_0x3C1752E361ED8FC9(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0x4C48F052678AA7EF(*uParam0, unk_0x259BE71D8A81D4FA(), 1);
				}
			}
			unk_0xD37CA6D6F8993BB9(iVar1, iParam7);
			unk_0xA133EF296C37D6E6(iVar1, 1);
			if (bParam10)
			{
				unk_0x8E18C9CFBC30C9FF(iVar1);
				unk_0x3E13A302AA0F06BF(iVar1, 5, 5, 1f);
			}
			func_157(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_157(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_158(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
	{
		if ((Global_2635563.f_3230[1 /*6*/].f_5 == iParam3 && Global_2635563.f_3230[1 /*6*/].f_4 == iParam2) && system::vdist(Global_2635563.f_3230[1 /*6*/], Param0) < 0,5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635563.f_3230[iVar0 /*6*/] = { Global_2635563.f_3230[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635563.f_3230[1 /*6*/] = { Param0 };
		Global_2635563.f_3230[1 /*6*/].f_3 = fParam1;
		Global_2635563.f_3230[1 /*6*/].f_4 = iParam2;
		Global_2635563.f_3230[1 /*6*/].f_5 = iParam3;
	}
}

int func_158(bool bParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = bParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x1D5CD3EAAA7422B0((Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (system::vdist(Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0,5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_159()
{
	if (func_16(9))
	{
		return 1;
	}
	switch (func_5())
	{
		case 0:
			if (func_163(func_311(), &(Local_108.f_25), &(Local_108.f_25.f_3)))
			{
				func_46(9);
				return 1;
			}
			break;
		
		case 1:
			Local_108.f_25 = { func_160() };
			Local_108.f_25 = { Local_108.f_25 + Vector(-30f, 0f, 0f) };
			func_46(9);
			return 1;
	}
	return 0;
}

Vector3 func_160()
{
	switch (func_161())
	{
		case 1:
			return 372,1165f, -82,8836f, 66,3691f;
		
		case 2:
			return -1062,248f, -415,1499f, 34,9021f;
		
		case 3:
			return -617,4594f, -732,0776f, 26,8563f;
		
		case 4:
			return -988,6414f, -789,0513f, 15,30545f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_161()
{
	var uVar0;
	
	uVar0 = func_162(func_24());
	return uVar0;
}

int func_162(int iParam0)
{
	if (iParam0 != func_32())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_513;
	}
	return 0;
}

int func_163(struct<3> Param0, var uParam1, float fParam2)
{
	struct<31> Var0;
	
	Var0.f_4 = 1125515264;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0.f_8 = 1082130432;
	Var0.f_9 = 1176255488;
	Var0.f_10 = 1;
	Var0.f_13 = 1;
	Var0.f_15 = 2;
	Var0.f_22 = 2;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_29 = 1123024896;
	Var0.f_30 = 1;
	Var0.f_0 = func_310();
	Var0.f_4 = 1000f;
	Var0.f_27 = 1;
	if (func_5() == 1)
	{
		Var0.f_25 = 0;
		Var0.f_26 = 0;
		if (!func_669(6))
		{
			func_307();
			func_306(6);
		}
	}
	if (func_165(Param0, 0f, 0f, 0f, func_313(), 1, uParam1, fParam2, &Var0))
	{
		if (func_669(6))
		{
			func_164();
		}
		return 1;
	}
	return 0;
}

void func_164()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2635563.f_2055[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2635563.f_2054 = 0;
}

int func_165(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!func_303())
	{
		return 0;
	}
	if (func_302() && !Global_2635563.f_680 == unk_0x8034325BF6D6E41F())
	{
		if (!Global_2635563.f_676 == 0)
		{
			Global_2635563.f_676 = 0;
			func_301();
			func_164();
		}
	}
	if (!unk_0x8F76B2250AC806FA() == Global_2635563.f_675)
	{
		if (!Global_2635563.f_676 == 0)
		{
			if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_679) < func_300(0))
			{
				return 0;
			}
			else
			{
				Global_2635563.f_676 = 0;
			}
		}
	}
	else
	{
		if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_677) > 30000)
		{
			Global_2635563.f_676 = 0;
		}
		if (!Global_2635563.f_676 == 0)
		{
			if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_679) > func_300(1))
			{
				Global_2635563.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_294(Param0))
		{
			if (func_293(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2635563.f_676 == 0)
	{
		if (system::vdist(Global_2635563.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2635563.f_698 != iParam2)
		{
			return 0;
		}
	}
	unk_0x693ACD1AA0BDB375((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2635563.f_676 == 0)
	{
		Global_2635563.f_682 = 0;
		Global_2635563.f_677 = unk_0x0728E77B2BF91D54();
		Global_2635563.f_675 = unk_0x8F76B2250AC806FA();
		Global_2635563.f_679 = unk_0x0728E77B2BF91D54();
		Global_2635563.f_695 = { Param0 };
		Global_2635563.f_698 = iParam2;
		Global_2635563.f_681 = unk_0x0728E77B2BF91D54();
		func_292();
		func_301();
		if (!uParam6->f_27 || (((((((((func_291(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2738934.f_957) && !Global_2738934.f_945) && !Global_2738934.f_953) && !Global_2738934.f_958) && !Global_2738934.f_975) && !Global_2738934.f_987) && !Global_2738934.f_959) && !Global_2738934.f_1009))
		{
			func_270(Param0, iParam2);
		}
		if (func_255(Param0))
		{
			func_270(Param0, iParam2);
		}
		Global_2635563.f_676 = 2;
	}
	switch (Global_2635563.f_676)
	{
		case 2:
			if (unk_0xFFEB5F24B372DFF6((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2635563.f_683 = { Param0 };
				Global_2635563.f_686 = 0f;
				if (Global_2738934.f_957)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && func_250(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !func_248(Param0, *uParam5, iParam2, unk_0x259BE71D8A81D4FA(), 0))
				{
					Global_2635563.f_683 = { Param0 };
					Global_2635563.f_686 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2635563.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_192(&(Global_2635563.f_683), &(Global_2635563.f_686), &Var5);
				}
				func_190(Global_2635563.f_683, Global_2635563.f_686, iParam2, &(Global_2635563.f_673));
				Global_2635563.f_671 = 0;
				Global_2635563.f_672 = 0;
				Global_2635563.f_682++;
				Global_2635563.f_678 = unk_0x0728E77B2BF91D54();
				Global_2635563.f_677 = unk_0x0728E77B2BF91D54();
				Global_2635563.f_676 = 3;
			}
			break;
		
		case 3:
			if (Global_2635563.f_671)
			{
				if (Global_2635563.f_673 == Global_2635563.f_674)
				{
					if (Global_2635563.f_672)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (func_189(Global_2635563.f_683, Global_2635563.f_686, iParam2, 1, 1036831949))
							{
								Global_2635563.f_676 = 4;
								Global_2635563.f_700 = unk_0x0728E77B2BF91D54();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_187(Global_2635563.f_683, 0);
						func_186(-1);
					}
				}
				else
				{
					Global_2635563.f_671 = 0;
					Global_2635563.f_672 = 0;
				}
			}
			else if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_678) > 3000)
			{
				func_186(-1);
			}
			break;
		
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_700) < 10000)
				{
					if (unk_0x8256312AC2E5471D(Global_2635563.f_699))
					{
						if (unk_0x31B34E18DE46CC94(Global_2635563.f_699))
						{
							if (!unk_0xF8EEEE15D7483100(Global_2635563.f_699))
							{
								if (func_185(Global_2635563.f_683, Global_2635563.f_686, iParam2, unk_0x259BE71D8A81D4FA(), 0) || func_167(Global_2635563.f_683, Global_2635563.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_187(Global_2635563.f_683, 0);
									func_186(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_187(Global_2635563.f_683, 0);
								func_186(-1);
							}
						}
					}
					else
					{
						func_186(-1);
					}
				}
				else
				{
					func_186(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2635563.f_683 = { Param0 };
			Global_2635563.f_686 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3,5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_192(&(Global_2635563.f_683), &(Global_2635563.f_686), &Var6);
			Global_2635563.f_676 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2635563.f_695 = { Param0 };
	Global_2635563.f_698 = iParam2;
	Global_2635563.f_679 = unk_0x0728E77B2BF91D54();
	if (bVar0)
	{
		Global_2635563.f_516 = 0;
		*uParam4 = { Global_2635563.f_683 };
		*uParam5 = Global_2635563.f_686;
		func_166(1);
		return 1;
	}
	return 0;
}

void func_166(bool bParam0)
{
	Global_2635563.f_676 = 0;
	func_292();
	func_301();
	if (bParam0)
	{
		func_164();
	}
}

int func_167(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam7 == 1 && unk_0x259BE71D8A81D4FA() != bVar1) || iParam7 == 0)
		{
			if (func_689(bVar1, bParam3, bParam4))
			{
				if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bVar1))
				{
					if (!bParam6 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(bVar1)) && func_184(bVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(bVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && iParam8) && bParam5) && func_179(bVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(bVar1)))
							{
								fVar2 = 0,1f;
								if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(bVar1), 0))
								{
									iVar3 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(bVar1), 0);
									if (unk_0xFC8BFE4B41177C22(iVar3) && !unk_0x1C2F771CDC87A3A5(iVar3, 0))
									{
										iVar4 = unk_0x4B423FAA24E8ABF0(iVar3);
										Var5 = { unk_0xD1A6A821F5AC81DB(iVar3, 0) };
										fVar6 = unk_0xCFC0C995455A6204(iVar3);
										if (func_178(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_168(func_177(bVar1), Param0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_168(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (system::vdist(Param0, Param1) < func_176(iParam3, 1008981770))
	{
		func_169(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
		if (unk_0x26715B0ED6702C87(Param0, Var0, Var1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_169(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_175(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(system::vmag(Var0)) };
	func_170(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0,5f * unk_0x1D5CD3EAAA7422B0((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0,5f * unk_0x1D5CD3EAAA7422B0((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = unk_0x1D5CD3EAAA7422B0((Var2.f_0 - Var1.f_0));
}

void func_170(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x441B9C85D0FFA9ED(iParam0))
	{
		unk_0xC93BAF616F1C680F(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_173(iParam0);
		if (iVar0 != 0)
		{
			func_171(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_171(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_172(iParam0, &Global_1578033);
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

void func_172(int iParam0, var uParam1)
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

int func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_174(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_175(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = system::cos(Param1.f_0);
	fVar1 = system::sin(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = system::cos(Param1.f_1);
	fVar1 = system::sin(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = system::cos(Param1.f_2);
	fVar1 = system::sin(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_176(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_170(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (system::sqrt(((((Var2.f_0 * 0,5f) * (Var2.f_0 * 0,5f)) + ((Var2.f_1 * 0,5f) * (Var2.f_1 * 0,5f))) + ((Var2.f_2 * 0,5f) * (Var2.f_2 * 0,5f)))) + fParam1);
	return fVar3;
}

Vector3 func_177(bool bParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(bParam0), 0);
}

int func_178(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6)
{
	if (func_168(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_169(Param0, fParam1, iParam2, &Global_1975334, &(Global_1975334.f_3), &(Global_1975334.f_6), 1036831949);
	func_169(Param3, fParam4, iParam5, &(Global_1975334.f_7), &(Global_1975334.f_10), &(Global_1975334.f_13), 1036831949);
	if (unk_0x298E7BBD04F29848(Global_1975334, Global_1975334.f_3, Global_1975334.f_6, Global_1975334.f_7, Global_1975334.f_10, Global_1975334.f_13))
	{
		return 1;
	}
	return 0;
}

int func_179(bool bParam0)
{
	if (func_183(unk_0x259BE71D8A81D4FA(), bParam0))
	{
		return 1;
	}
	Global_2707307 = { func_182(bParam0) };
	if (unk_0xEDD63461767A518C(&Global_2707307))
	{
		return 1;
	}
	if (func_180(unk_0x259BE71D8A81D4FA(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_180(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_181(bParam0);
	if (func_35(iVar0))
	{
		if (iVar0 == func_181(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_181(int iParam0)
{
	if (func_35(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_32();
}

struct<13> func_182(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(uParam0, &Var0, 13);
	return Var0;
}

int func_183(bool bParam0, var uParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2707307 = { func_182(bParam0) };
		Global_2707320 = { func_182(uParam1) };
		if (unk_0xE582BF3EDDBB1A68(&Global_2707307))
		{
			if (unk_0xE582BF3EDDBB1A68(&Global_2707320))
			{
				unk_0xC07B1AA6155EC337(&Global_2707237, 35, &Global_2707307);
				unk_0xC07B1AA6155EC337(&Global_2707272, 35, &Global_2707320);
				if (Global_2707237 == Global_2707272)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_184(bool bParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(bParam0)) || Global_2657971[bParam0 /*465*/].f_256)
	{
		return 1;
	}
	return 0;
}

int func_185(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam3 == iVar0 || iParam4 == 1)
		{
			bVar1 = iVar0;
			if (func_689(bVar1, 0, 1) && func_689(bParam3, 0, 1))
			{
				if (Global_2648938.f_261[iVar0])
				{
					if (func_168(Global_2648938.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_168(func_177(bVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2648938.f_261[iVar0])
			{
				if (func_168(Global_2648938.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_689(bVar1, 0, 0))
			{
				if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(bVar1)))
				{
					if (func_168(func_177(bVar1), Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_186(int iParam0)
{
	if (Global_2635563.f_682 < 20 && unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_681) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2635563.f_682 < iParam0))
		{
			Global_2635563.f_676 = 2;
		}
		else
		{
			Global_2635563.f_676 = 5;
		}
	}
	else
	{
		Global_2635563.f_676 = 5;
	}
}

void func_187(struct<3> Param0, int iParam1)
{
	struct<3> Var0;
	
	if (iParam1 == 0 && func_188(Param0, 0,01f))
	{
		return;
	}
	if (iParam1 < 30 && system::vmag(Param0) > 0f)
	{
		Var0 = { Global_2635563.f_3037[iParam1 /*3*/] };
		Global_2635563.f_3037[iParam1 /*3*/] = { Param0 };
		func_187(Var0, iParam1 + 1);
	}
}

int func_188(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (system::vdist(Param0, Global_2635563.f_3037[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_189(struct<3> Param0, float fParam1, int iParam2, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	float fVar4;
	
	if (!unk_0x93E08E0F531E2C35())
	{
		return 0;
	}
	else
	{
		func_301();
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_2635563.f_687[iVar3] == -1 && unk_0x93E08E0F531E2C35())
			{
				func_169(Param0, fParam1, iParam2, &Var0, &Var1, &uVar2, fParam4);
				if (bParam3)
				{
					fVar4 = unk_0x1D5CD3EAAA7422B0((Var0.f_2 - Var1.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar4 * 0,5f) - 2f));
					Var1.f_2 = (Var1.f_2 + (fVar4 * 0,5f));
				}
				Global_2635563.f_687[iVar3] = unk_0x48FE6369FE249FD2(Var0, Var1, fParam4);
				Global_2635563.f_691[iVar3] = unk_0x8F76B2250AC806FA();
				Global_2635563.f_699 = Global_2635563.f_687[iVar3];
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_190(struct<3> Param0, var uParam1, int iParam2, var uParam3)
{
	struct<9> Var0;
	
	*uParam3 = func_191(&Param0, &uParam1, &iParam2);
	Var0.f_0 = 323285304;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = { Param0 };
	Var0.f_6 = uParam1;
	Var0.f_7 = iParam2;
	Var0.f_8 = *uParam3;
	unk_0x71A6F836422FDD2B(1, &Var0, 9, func_75(1, 1), Var0.f_0);
}

var func_191(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	var uVar1;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, system::round(*uParam0), 64);
	StringIntConCat(&cVar0, system::round(uParam0->f_1), 64);
	StringIntConCat(&cVar0, system::round(uParam0->f_2), 64);
	StringIntConCat(&cVar0, system::round(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	uVar1 = unk_0x70E57E9927B6BA58(&cVar0);
	return uVar1;
}

void func_192(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2635563.f_2054 > 0)
	{
		iVar0 = 0;
		while (func_243(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_193(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_193(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!system::vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_239(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999,9f;
	}
	if (uParam2->f_48)
	{
		if (func_234(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2,75f;
			fVar12 = 7,5f;
			break;
		
		default:
			fVar11 = 2,5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2643454.f_162 = 0;
	Global_2643454.f_163 = 0;
	Global_2643454.f_164 = -99;
	Global_2643454.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2643454[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2643454.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_173(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = unk_0x990DA6AEDBBBA89A(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (unk_0x2EE1ADDFD32F7C35(iVar6))
		{
			unk_0xAAB540AD076E01F8(iVar6, &Var1);
			bVar10 = false;
			if (Global_2643454.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2643454.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xD2507ABB3A05C571(iVar6)) || unk_0x8D4953B2FFED058B(iVar6))
			{
				unk_0x99FBD9356770254E(Var1, &uVar4, &uVar5);
				if (system::vdist(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_227(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_224(Var1))
									{
										Var1 = { func_219(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (system::vmag(Var1) > 0f)
										{
											if (!func_218(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_214(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_234(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (system::vmag(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && system::vdist(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_213(Var1, fVar2, uParam2->f_34, unk_0x259BE71D8A81D4FA(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_239(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0,375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0,375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_212(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_250(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_250(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_167(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_202(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2643454.f_162)
																										{
																											Global_2643454[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2643454.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2643454.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2643454.f_162 == 0)
																									{
																										Global_2643454[0 /*3*/] = { Var1 };
																										Global_2643454.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2643454.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (system::vdist2(Var1, uParam2->f_35) < system::vdist2(Global_2643454[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_201(Var1, fVar2, iVar14);
																													iVar14 = Global_2643454.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2643454.f_162++;
																									if (Global_2643454.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643454.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2643454[Global_2643454.f_162 /*3*/] = { Var1 };
																									Global_2643454.f_121[Global_2643454.f_162] = fVar2;
																									Global_2643454.f_162++;
																									if (func_214(Var1, uParam2))
																									{
																										Global_2643454.f_163++;
																									}
																									if (Global_2643454.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643454.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2643454.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2643454[0 /*3*/] };
						*uParam1 = Global_2643454.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2643454.f_163 > 0 && !Global_2643454.f_163 == Global_2643454.f_162)
						{
							func_199(0, uParam2);
						}
						iVar24 = unk_0xC5935DFB3F39785A(0, Global_2643454.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2643454[0 /*3*/] };
						uVar26 = Global_2643454.f_121[0];
						Global_2643454[0 /*3*/] = { Global_2643454[iVar24 /*3*/] };
						Global_2643454.f_121[0] = Global_2643454.f_121[iVar24];
						Global_2643454[iVar24 /*3*/] = { Var25 };
						Global_2643454.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2643454[0 /*3*/] };
						*uParam1 = Global_2643454.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_198(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_239(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_234(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999,9f;
								uParam2->f_7 = 9999,9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_194(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2643454.f_164 = iVar6;
	}
	return 0;
}

void func_194(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = system::vdist(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_195(*(uParam0[iVar2 /*4*/]), 5f, unk_0x259BE71D8A81D4FA(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

int func_195(struct<3> Param0, float fParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_197(Param0, fParam1, bParam2, iParam3, 0) || func_196(Param0, bParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_196(struct<3> Param0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam1 == iVar0 || iParam2 == 1)
		{
			bVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_168(Param0, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_689(bVar2, 0, 1) && func_689(bParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_197(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam2 == iVar0 || iParam3 == 1)
		{
			bVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_689(bVar1, 0, 1) && func_689(bParam2, 0, 1))
				{
					if (unk_0x1864096A95E36EBA(bVar1) == unk_0x1864096A95E36EBA(bParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_689(bVar1, 0, 1) && func_689(bParam2, 0, 1))
				{
					if (Global_2648938.f_261[iVar0])
					{
						if (system::vdist(Global_2648938.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (system::vdist(func_177(bVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2648938.f_261[iVar0])
				{
					if (system::vdist(Global_2648938.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_689(bVar1, 0, 1))
				{
					if (system::vdist(func_177(bVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_198(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = unk_0xC5935DFB3F39785A((1 + iParam0), (40 + iParam0));
		if (unk_0x6009FBA2EAAA60BE(Param1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10))
		{
			if (system::vmag(*uParam3) > 0f)
			{
				*uParam3 = { func_219(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) };
				if (!func_224(*uParam3))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_199(int iParam0, var uParam1)
{
	if (!func_214(Global_2643454[iParam0 /*3*/], uParam1))
	{
		Global_2643454.f_162 = (Global_2643454.f_162 - 1);
		func_200(iParam0);
		if (Global_2643454.f_162 > Global_2643454.f_163)
		{
			func_199(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_199(iParam0 + 1, uParam1);
	}
}

void func_200(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2643454[iParam0 /*3*/] = { Global_2643454[iParam0 + 1 /*3*/] };
			Global_2643454.f_121[iParam0] = Global_2643454.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_201(struct<3> Param0, float fParam1, int iParam2)
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { Global_2643454[iParam2 /*3*/] };
	uVar1 = Global_2643454.f_121[iParam2];
	Global_2643454[iParam2 /*3*/] = { Param0 };
	Global_2643454.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2643454.f_162 && iParam2 < 39)
	{
		if (system::vmag(Var0) > 0f)
		{
			func_201(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_202(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999,9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar3 = iVar0;
		if (func_203(bVar3))
		{
			Var1 = { func_177(bVar3) };
			fVar5 = system::vdist(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_203(bool bParam0)
{
	if (func_689(bParam0, 0, 1))
	{
		if (!func_210(bParam0))
		{
			if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bParam0))
			{
				if (!unk_0x1864096A95E36EBA(bParam0) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
				{
					if (func_207(unk_0x259BE71D8A81D4FA(), 1, 0))
					{
						if (!func_204(unk_0x1864096A95E36EBA(bParam0), unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()), 0, -1))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x1864096A95E36EBA(bParam0) == -1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
				{
					if (!func_207(unk_0x259BE71D8A81D4FA(), 1, 0))
					{
						if (!func_179(bParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_204(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058116.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25622, bVar0))
			{
				bVar1 = Global_1058116.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_205(iParam0, bVar0, iParam1, bVar1) || !func_205(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_205(iParam0, bVar0, iParam1, bVar1) || !func_205(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_205(iParam0, bVar0, iParam1, bVar1) || !func_205(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_205(iParam0, bVar0, iParam1, bVar1) || !func_205(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_205(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25623, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3592[iParam2 /*25891*/].f_25623, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		iVar4 = unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		bVar1 = iVar5;
		if (((!func_689(bVar1, 1, 1) || func_76(bVar1, 0)) || BitTest(Global_2657971[bVar1 /*465*/].f_200, 2)) || func_206(bVar1))
		{
		}
		else if (unk_0x1864096A95E36EBA(bVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = unk_0x56E414973C2A8C0E(bVar1);
			if (unk_0x4FAFF4BCB7633475(iVar2))
			{
			}
			else
			{
				iVar3 = unk_0x4B423FAA24E8ABF0(iVar2);
				if (iVar4 == joaat("mp_f_freemode_01") || iVar4 == joaat("mp_m_freemode_01"))
				{
					if (iVar3 == joaat("mp_f_freemode_01") || iVar3 == joaat("mp_m_freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_206(bool bParam0)
{
	return BitTest(Global_1845281[bParam0 /*883*/].f_36.f_18, 14);
}

int func_207(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_208(bParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845281[bParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_208(int iParam0)
{
	return func_209(iParam0);
}

var func_209(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

int func_210(bool bParam0)
{
	if (func_76(bParam0, 0))
	{
		return 1;
	}
	if (func_211())
	{
		if (bParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[bParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_211()
{
	return BitTest(Global_2621446, 3);
}

int func_212(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0xF0CA45A211FFDCD9(Param0, 30f, 0, iVar0);
	if (unk_0xFC8BFE4B41177C22(iVar1) && !unk_0x1C2F771CDC87A3A5(iVar1, 0))
	{
		iVar2 = unk_0x4B423FAA24E8ABF0(iVar1);
		Var3 = { unk_0xD1A6A821F5AC81DB(iVar1, 0) };
		fVar4 = unk_0xCFC0C995455A6204(iVar1);
		if (func_178(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0xF0CA45A211FFDCD9(Param0, 30f, 0, iVar0);
	if (unk_0xFC8BFE4B41177C22(iVar1) && !unk_0x1C2F771CDC87A3A5(iVar1, 0))
	{
		iVar2 = unk_0x4B423FAA24E8ABF0(iVar1);
		Var3 = { unk_0xD1A6A821F5AC81DB(iVar1, 0) };
		fVar4 = unk_0xCFC0C995455A6204(iVar1);
		if (func_178(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_213(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	if (func_185(Param0, fParam1, iParam2, bParam3, iParam4) || func_248(Param0, fParam1, iParam2, bParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_214(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_217(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_215(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x26715B0ED6702C87(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_215(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_216(&Param1, &Param2);
	if (((!Param0.f_0 >= Param1.f_0 || !Param0.f_1 >= Param1.f_1) || !Param0.f_0 <= Param2.f_0) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

void func_216(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_217(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
		return system::vdist(Param0, Param1) < (fParam2 + 0,01f);
	}
	else if (bParam3)
	{
		if (Param0.f_2 > Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return system::vdist(Param0, Param1) < (fParam2 + 0,01f);
	}
	else if (bParam4)
	{
		if (Param0.f_2 < Param1.f_2)
		{
			Param0.f_2 = Param1.f_2;
		}
		return system::vdist(Param0, Param1) < (fParam2 + 0,01f);
	}
	return system::vdist(Param0, Param1) < (fParam2 + 0,01f);
}

int func_218(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_207(unk_0x259BE71D8A81D4FA(), 1, 0))
	{
		if (Global_4980736.f_47367 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_47367)
			{
				if (Global_4980736.f_47368[iVar0 /*163*/].f_7 != 0)
				{
					if (func_168(Param0, Global_4980736.f_47368[iVar0 /*163*/], Global_4980736.f_47368[iVar0 /*163*/].f_6, Global_4980736.f_47368[iVar0 /*163*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_6999 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_6999)
			{
				if (Global_4980736.f_7002[iVar0 /*609*/].f_15 != 0)
				{
					if (func_168(Param0, Global_4980736.f_7002[iVar0 /*609*/], Global_4980736.f_7002[iVar0 /*609*/].f_3, Global_4980736.f_7002[iVar0 /*609*/].f_15, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_98444 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_98444)
			{
				if (Global_4980736.f_98448[iVar0 /*600*/].f_12 != 0)
				{
					if (func_168(Param0, Global_4980736.f_98448[iVar0 /*600*/], Global_4980736.f_98448[iVar0 /*600*/].f_3, Global_4980736.f_98448[iVar0 /*600*/].f_12, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058116.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058116.f_268)
			{
				if (unk_0xFC8BFE4B41177C22(Global_1058116.f_233[iVar0]) && !unk_0x1C2F771CDC87A3A5(Global_1058116.f_233[iVar0], 0))
				{
					if (func_168(Param0, unk_0xD1A6A821F5AC81DB(Global_1058116.f_233[iVar0], 1), unk_0xCFC0C995455A6204(Global_1058116.f_233[iVar0]), unk_0x4B423FAA24E8ABF0(Global_1058116.f_233[iVar0]), 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058116.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058116.f_266)
			{
				if (unk_0xFC8BFE4B41177C22(Global_1058116.f_119[iVar0]) && !unk_0x1C2F771CDC87A3A5(Global_1058116.f_119[iVar0], 0))
				{
					if (func_168(Param0, unk_0xD1A6A821F5AC81DB(Global_1058116.f_119[iVar0], 1), unk_0xCFC0C995455A6204(Global_1058116.f_119[iVar0]), unk_0x4B423FAA24E8ABF0(Global_1058116.f_119[iVar0]), 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_219(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	
	if (bParam11)
	{
		if (system::vmag(Param4) > 0f)
		{
			if (!func_222(Param0, *uParam1, Param4))
			{
				*uParam1 = (*uParam1 + 180f);
			}
		}
		return Param0;
	}
	unk_0x99FBD9356770254E(Param0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		unk_0x748728E3BFD8E371(Param0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (unk_0xBA16CD57E37AC32A(iParam7) && func_221(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*uParam1 = (*uParam1 + 180f);
			if (*uParam1 > 360f)
			{
				*uParam1 = (*uParam1 + -360f);
			}
		}
		if (*uParam1 <= 90f || *uParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4,2f * (system::to_float(iVar4) * 0,5f));
				}
				else
				{
					fVar7 = (4,2f * system::to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4,2f * (system::to_float(iVar5) * 0,5f));
				}
				else
				{
					fVar7 = (4,2f * system::to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0,95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0,5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4,2f * -0,5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_220(iParam7, 3,5f);
				}
				else
				{
					fVar10 = func_220(iParam7, 1,5f);
				}
				if (fVar10 > 1,8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1,8f) * -0,5f));
				}
			}
		}
	}
	if (system::vmag(Param4) > 0f)
	{
		if (!func_222(Param0, *uParam1, Param4))
		{
			if ((bParam3 || uParam12) || ((uVar2 & 1024 != 0 || Param0.f_2 == 0f) && bParam6))
			{
				*uParam1 = (*uParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	Var0 = { unk_0xF10F2A2453AF1DFB(Param0, *uParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x5053D36357207FD6(Param0, *uParam1, &Var11))
		{
			Var12 = { Var11 - Param0 };
			if (!iParam7 == 0)
			{
				Var13 = { Var12 / FtoV(system::vmag(Var12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_220(iParam7, 3,5f);
				}
				else
				{
					fVar10 = func_220(iParam7, 1,5f);
				}
				Var13 = { Var13 * FtoV((fVar10 * 0,5f)) };
				Var12 = { Var12 - Var13 };
				Var11 = { Param0 + Var12 };
			}
			Var13 = { Var0 - Var11 };
			Var0 = { Var11 };
		}
	}
	return Var0;
}

float func_220(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_170(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_221(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0xB1EAADCB692D69CE(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_222(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_175(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_223(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_223(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_224(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_226(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2643161[iVar1])
	{
		if (func_225(Param0, &(Global_2642458[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2643161[8])
	{
		if (func_225(Param0, &(Global_2642458[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_225(struct<3> Param0, var uParam1)
{
	return unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_226(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2642449[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2642449[1])
	{
		if (Param0.f_0 < Global_2642453[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2642449[2])
	{
		if (Param0.f_0 < Global_2642453[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2642453[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2642453[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_227(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_233(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = unk_0xD2AA6F822D3A55D2(0,01f, 360f);
			func_232(&Var1, Global_2635563.f_593, Global_2635563.f_596, 1036831949, 0, fVar2);
			if (func_228(Var1, &uVar0) || func_233(Var1))
			{
				Var1 = { *uParam0 };
				func_232(&Var1, Global_2635563.f_593, Global_2635563.f_596, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_228(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_231())
	{
		return 0;
	}
	iVar1 = func_230();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2635563.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (func_229(Param0, &(Global_2635563.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_229(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_217(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635563.f_3035) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_215(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
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
				return unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_230()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635563.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_231()
{
	return Global_1943520.f_559;
}

void func_232(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (system::vmag(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(system::vmag(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_175(&Var0, 0f, 0f, unk_0xD2AA6F822D3A55D2(0f, 360f));
		}
		else
		{
			func_175(&Var0, 0f, 0f, fParam5);
		}
	}
	Var0 = { Var0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		Var1 = { Param1 + Var0 };
	}
	else
	{
		Var1 = { Param1 - Var0 };
	}
	*uParam0 = Var1.f_0;
	uParam0->f_1 = Var1.f_1;
}

int func_233(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2635563.f_596 > 0f)
	{
		fVar0 = system::vdist(Param0, Global_2635563.f_593);
		if (fVar0 < Global_2635563.f_596)
		{
			return 1;
		}
	}
	return 0;
}

bool func_234(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2635563.f_26.f_18)
	{
		switch (Global_2635563.f_26.f_17)
		{
			case 0:
				if (func_217(*uParam0, Global_2635563.f_26.f_10, Global_2635563.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_215(*uParam0, Global_2635563.f_26.f_10, Global_2635563.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x26715B0ED6702C87(*uParam0, Global_2635563.f_26.f_10, Global_2635563.f_26.f_13, Global_2635563.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_235(*uParam0, Global_2635563.f_26.f_10, Global_2635563.f_26.f_13, Global_2635563.f_26.f_16, Global_2635563.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_235(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_232(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_238(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_236(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x8B777C12D64DF209(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_217(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_215(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x26715B0ED6702C87(Var1, Param1, Param2, fParam3, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_236(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { func_237(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(system::vmag(Var2)) };
	fVar3 = (system::vmag(Var1) * system::sin(unk_0x20A3B1C2EC4167BB(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
	if (fVar3 < (fParam3 * 0,5f))
	{
		if (!bParam5)
		{
			if (func_223(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0,5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0,5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_223(Var2, Var1) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fParam3 * 0,5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fParam3 * 0,5f) + fVar3) + fParam4)) };
		}
		Var4 = { *uParam0 + Var2 };
		fVar6 = system::vdist(Param1.f_0, Param1.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
		Var7 = { Param1 + Param2 / Vector(2f, 2f, 2f) };
		Var7.f_2 = 0f;
		Var2 = { func_237(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(system::vmag(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0,5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_237(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(system::vmag(Var2)) };
		fVar3 = (system::vmag(Var11) * system::sin(unk_0x20A3B1C2EC4167BB(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
		if (!bParam5)
		{
			if (func_223(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0,5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0,5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_223(Var2, Var11) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fVar6 * 0,5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fVar6 * 0,5f) + fVar3) + fParam4)) };
		}
		Var5 = { *uParam0 + Var2 };
		if (system::vdist(Var4, *uParam0, uParam0->f_1, 0f) < system::vdist(Var5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var4 };
		}
		else
		{
			*uParam0 = { Var5 };
		}
	}
}

Vector3 func_237(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}

void func_238(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1.f_0);
	fVar2 = (*uParam0 - Param3.f_0);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	Var0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				Var0.f_0 = (Param1.f_0 - fParam5);
			}
			else
			{
				Var0.f_0 = (Param3.f_0 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			Var0.f_1 = (Param1.f_1 - fParam5);
		}
		else
		{
			Var0.f_1 = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			Var0.f_0 = (Param3.f_0 + fParam5);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		Var0.f_1 = (Param3.f_1 + fParam5);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam5);
	}
	*uParam0 = { Var0 };
}

int func_239(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_294(Param0))
	{
		if (func_242(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_240(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_188(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (system::vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_232(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_240(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_228(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_241(&Var2, &(Global_2635563.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_228(Var2, &uVar1) || func_233(Var2))
			{
				Var2 = { *uParam0 };
				func_241(&Var2, &(Global_2635563.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_241(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_235(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635563.f_3035) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_235(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_235(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_232(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635563.f_3035) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_238(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_236(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_242(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_2640820[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2640820[iVar0 /*17*/].f_16))
			{
				if (func_229(*uParam0, &(Global_2640820[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2640820[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2640820[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_241(&Var1, &(Global_2640820[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_242(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_241(&Var1, &(Global_2640820[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_243(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	
	if (Global_2635563.f_2054 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!system::vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_239(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_234(uParam0, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
		Global_2643454.f_162 = 0;
		Global_2643454.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2643454[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2643454.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			func_246(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_245();
		}
		else
		{
			func_244();
		}
		iVar1 = 0;
		while (iVar1 < Global_2635563.f_2054)
		{
			iVar2 = Global_2635563.f_2460[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2635563.f_2055[iVar2 /*4*/] };
				fVar4 = Global_2635563.f_2055[iVar2 /*4*/].f_3;
				if (system::vmag(Var3) > 0f)
				{
					if ((uParam2->f_57 && system::vdist(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && system::vdist(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_213(Var3, fVar4, uParam2->f_34, unk_0x259BE71D8A81D4FA(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_239(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0,375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0,375f);
												}
											}
										}
										bVar10 = false;
										if (!func_212(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_250(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_250(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_167(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = func_202(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2643454.f_162)
															{
																Global_2643454[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2643454.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2643454.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2643454.f_162 == 0)
														{
															Global_2643454[0 /*3*/] = { Var3 };
															Global_2643454.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2643454.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (system::vdist2(Var3, uParam2->f_35) < system::vdist2(Global_2643454[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_201(Var3, fVar4, iVar5);
																		iVar5 = Global_2643454.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2643454.f_162++;
														if (Global_2643454.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635563.f_2054;
															}
															else if (Global_2643454.f_162 == 40)
															{
																iVar1 = Global_2635563.f_2054;
															}
														}
													}
													else
													{
														Global_2643454[Global_2643454.f_162 /*3*/] = { Var3 };
														Global_2643454.f_121[Global_2643454.f_162] = fVar4;
														Global_2643454.f_162++;
														if (Global_2643454.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635563.f_2054;
															}
															else if (Global_2643454.f_162 == 40)
															{
																iVar1 = Global_2635563.f_2054;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2643454.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2643454[0 /*3*/] };
				*uParam1 = Global_2643454.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2643454.f_163 > 0 && !Global_2643454.f_163 == Global_2643454.f_162)
				{
					func_199(0, uParam2);
				}
				iVar0 = unk_0xC5935DFB3F39785A(0, Global_2643454.f_162);
				Var13 = { Global_2643454[0 /*3*/] };
				uVar14 = Global_2643454.f_121[0];
				Global_2643454[0 /*3*/] = { Global_2643454[iVar0 /*3*/] };
				Global_2643454.f_121[0] = Global_2643454.f_121[iVar0];
				Global_2643454[iVar0 /*3*/] = { Var13 };
				Global_2643454.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2643454[0 /*3*/] };
				*uParam1 = Global_2643454.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2635563.f_2054 > 0)
			{
				iVar0 = unk_0xC5935DFB3F39785A(0, Global_2635563.f_2054);
				*uParam0 = { Global_2635563.f_2055[iVar0 /*4*/] };
				*uParam1 = Global_2635563.f_2055[iVar0 /*4*/].f_3;
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

void func_244()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2635563.f_2054)
	{
		Global_2635563.f_2460[iVar0] = iVar0;
		iVar0++;
	}
}

void func_245()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2635563.f_2054)
	{
		Global_2635563.f_2460[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2635563.f_2054)
	{
		iVar1 = unk_0xC5935DFB3F39785A(0, Global_2635563.f_2054);
		iVar2 = unk_0xC5935DFB3F39785A(0, Global_2635563.f_2054);
		uVar3 = Global_2635563.f_2460[iVar1];
		Global_2635563.f_2460[iVar1] = Global_2635563.f_2460[iVar2];
		Global_2635563.f_2460[iVar2] = uVar3;
		iVar0++;
	}
}

void func_246(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2635563.f_2054)
	{
		uVar1 = func_247(Param0, fVar0, &fVar0);
		Global_2635563.f_2460[iVar2] = uVar1;
		iVar2++;
	}
}

int func_247(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2635563.f_2054)
	{
		fVar2 = system::vdist2(Param0, Global_2635563.f_2055[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

int func_248(struct<3> Param0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!bParam3 == iVar0 || iParam4 == 1)
		{
			bVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_249(Param0, iParam2, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_178(Param0, fParam1, iParam2, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_689(bVar2, 0, 1) && func_689(bParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_249(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_176(iParam1, 1008981770);
	fVar1 = func_176(iParam3, 1008981770);
	fVar2 = system::vdist(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_250(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2635563.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x913602ADD2D86A7A(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x2DBCF31839B069B4(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x2DBCF31839B069B4(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0x80F249EA6DFE8476(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (bParam11)
	{
		if (unk_0xE8D2BD34CCB74431(Param0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (fParam12 > 0f)
	{
		if (func_254(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_251(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635563.f_2++;
	return 1;
}

int func_251(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_689(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_252(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x7B780C491DEC834E(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_689(bVar1, 1, 1))
		{
			if (!func_76(bVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && bVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_184(bVar1) || !bParam8) && !Global_2657971[bVar1 /*465*/].f_271)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x1864096A95E36EBA(bVar1) == -1)
							{
								if (unk_0x1864096A95E36EBA(bVar1) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x1864096A95E36EBA(bVar1) != unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))) || unk_0x1864096A95E36EBA(bVar1) == -1)
							{
								if (unk_0xED977E2AE2CB16EE(func_252(bVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x267FC71D3F0D131A(bVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x1864096A95E36EBA(bVar1) != iParam6 || unk_0x1864096A95E36EBA(bVar1) == -1)
						{
							if (unk_0xED977E2AE2CB16EE(func_252(bVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x267FC71D3F0D131A(bVar1, Param0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_252(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_253() && Global_1845281[iVar0 /*883*/].f_860) && !func_52(Global_1845281[iVar0 /*883*/].f_861))
	{
		return Global_1845281[iVar0 /*883*/].f_861;
	}
	return func_177(bParam0);
}

var func_253()
{
	return Global_2684504.f_19;
}

int func_254(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x259BE71D8A81D4FA() != bVar1) || iParam6 == 0)
		{
			if (func_689(bVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), bVar1))
				{
					if (!bParam5 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(bVar1)) && func_184(bVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(bVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && uParam7) && bParam4) && func_179(bVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(bVar1)))
							{
								if (unk_0xED977E2AE2CB16EE(func_177(bVar1), Param0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_255(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2738934.f_957 && func_256(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_256(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam1 = -1;
	iVar2 = func_269(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_257(iVar1))
			{
				if (func_269(Global_1943520.f_573[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_257(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_268(iParam0);
	if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_297 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10;
	if (iVar1 != func_32())
	{
		if (Global_1845281[iVar1 /*883*/].f_268.f_297 == iVar0)
		{
			return 1;
		}
	}
	if (func_267() == iParam0)
	{
		return 1;
	}
	if (func_266(unk_0x259BE71D8A81D4FA(), 0) || (func_263(unk_0x259BE71D8A81D4FA()) && func_118(func_262(unk_0x259BE71D8A81D4FA())) == 12))
	{
		return 1;
	}
	if (func_261(unk_0x259BE71D8A81D4FA()) || (func_263(unk_0x259BE71D8A81D4FA()) && func_118(func_262(unk_0x259BE71D8A81D4FA())) == 8))
	{
		return 1;
	}
	if (func_260(unk_0x259BE71D8A81D4FA()) || (func_263(unk_0x259BE71D8A81D4FA()) && func_118(func_262(unk_0x259BE71D8A81D4FA())) == 5))
	{
		return 1;
	}
	if (func_259(unk_0x259BE71D8A81D4FA()) || (func_263(unk_0x259BE71D8A81D4FA()) && func_118(func_262(unk_0x259BE71D8A81D4FA())) == 10))
	{
		return 1;
	}
	if (func_258(unk_0x259BE71D8A81D4FA()) || (func_263(unk_0x259BE71D8A81D4FA()) && func_118(func_262(unk_0x259BE71D8A81D4FA())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_258(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_689(bParam0, 1, 1))
		{
			if (Global_2657971[bParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_118(Global_2657971[bParam0 /*465*/].f_322.f_8) == 6;
			}
		}
	}
	return 0;
}

int func_259(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_689(bParam0, 1, 1))
		{
			if (Global_2657971[bParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_118(Global_2657971[bParam0 /*465*/].f_322.f_8) == 10;
			}
		}
	}
	return 0;
}

int func_260(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_689(bParam0, 1, 1))
		{
			if (Global_2657971[bParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[bParam0 /*465*/].f_322.f_11 != func_32())
			{
				return func_118(Global_2657971[bParam0 /*465*/].f_322.f_8) == 5;
			}
		}
	}
	return 0;
}

int func_261(bool bParam0)
{
	if (bParam0 != func_32())
	{
		if (func_689(bParam0, 1, 1))
		{
			if (Global_2657971[bParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[bParam0 /*465*/].f_322.f_11 != func_32())
			{
				return func_118(Global_2657971[bParam0 /*465*/].f_322.f_8) == 8;
			}
		}
	}
	return 0;
}

int func_262(bool bParam0)
{
	if (bParam0 != func_32() && func_689(bParam0, 1, 1))
	{
		return Global_2657971[bParam0 /*465*/].f_322.f_18;
	}
	return -1;
}

int func_263(bool bParam0)
{
	if (bParam0 != func_32() && func_689(bParam0, 1, 1))
	{
		if (func_265(bParam0) && !func_264(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_264(bool bParam0)
{
	if (bParam0 != func_32() && func_689(bParam0, 1, 1))
	{
		return BitTest(Global_2657971[bParam0 /*465*/].f_322, 4);
	}
	return 0;
}

int func_265(bool bParam0)
{
	if (bParam0 != func_32() && func_689(bParam0, 1, 1))
	{
		return BitTest(Global_2657971[bParam0 /*465*/].f_322, 3);
	}
	return 0;
}

int func_266(bool bParam0, bool bParam1)
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
	if (bParam0 != func_32())
	{
		if (func_689(bParam0, 1, 1))
		{
			if (Global_2657971[bParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[bParam0 /*465*/].f_322.f_11 != func_32())
			{
				return func_118(Global_2657971[bParam0 /*465*/].f_322.f_8) == 12;
			}
		}
	}
	return 0;
}

int func_267()
{
	return Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_8;
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_269(struct<3> Param0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_2640820[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (func_229(Param0, &(Global_2640820[iVar0 /*17*/]), 0,1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_270(struct<3> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar3[3];
	
	if (Global_2635563.f_45.f_319)
	{
		return;
	}
	if (!func_290())
	{
		if (iParam1 == 0)
		{
		}
		iVar1 = func_289(Param0);
		if (iVar1 > -1)
		{
			func_164();
			switch (iVar1)
			{
				case 0:
					func_288(-1139,678f, -2694,165f, 12,949f, 283,4298f);
					func_288(-1137,455f, -2690,167f, 12,9448f, 283,0835f);
					func_288(-1135,02f, -2685,912f, 12,9412f, 283,8219f);
					func_288(-1099,898f, -2688,611f, 12,9473f, 295,3925f);
					func_288(-1110,51f, -2693,236f, 12,9595f, 298,84f);
					func_288(-1081,807f, -2690,015f, 12,7567f, 219,1729f);
					func_288(-1075,586f, -2697,09f, 12,7567f, 224,8977f);
					func_288(-1095,133f, -2659,995f, 12,7567f, 190,9326f);
					func_288(-1096,511f, -2649,483f, 12,6066f, 182,7913f);
					break;
				
				case 1:
					func_288(-1411,731f, -533,6462f, 30,2703f, 215,116f);
					func_288(-1416,407f, -527,0309f, 30,6453f, 215,2683f);
					func_288(-1432,146f, -580,9922f, 29,5263f, 118,3858f);
					func_288(-1438,8f, -584,4678f, 29,595f, 118,1207f);
					break;
				
				case 2:
					func_288(-780,5905f, 292,8159f, 84,673f, 97,2697f);
					func_288(-788,6147f, 291,8073f, 84,72f, 97,7348f);
					func_288(-765,572f, 294,4459f, 84,5182f, 93,9327f);
					func_288(-756,9962f, 294,8176f, 84,4061f, 93,9545f);
					break;
				
				case 3:
					func_288(-647,9388f, 40,9257f, 38,9494f, 356,4108f);
					func_288(-647,239f, 49,2068f, 40,7135f, 355,9723f);
					func_288(-620,1517f, 3,6633f, 40,5904f, 98,3813f);
					func_288(-610,5603f, 5,1258f, 41,2404f, 98,696f);
					break;
				
				case 4:
					func_288(-943,2437f, -487,8443f, 35,7504f, 208,6441f);
					func_288(-949,2938f, -476,3759f, 36,0878f, 208,1432f);
					func_288(-955,3208f, -465,3984f, 36,3328f, 206,9198f);
					func_288(-959,5925f, -457,0372f, 36,5226f, 207,7534f);
					break;
				
				case 5:
					func_288(-966,1365f, -401,5364f, 36,6824f, 27,6587f);
					func_288(-934,9108f, -413,4091f, 36,5161f, 118,0149f);
					func_288(-920,2501f, -405,6656f, 36,5869f, 117,2407f);
					func_288(-971,7031f, -390,5213f, 36,7118f, 26,8016f);
					break;
				
				case 6:
					func_288(-58,1347f, -573,486f, 36,5789f, 341,8442f);
					func_288(-64,227f, -590,2214f, 35,1654f, 338,972f);
					func_288(-67,0332f, -599,2827f, 35,1787f, 341,5854f);
					func_288(-71,8651f, -612,8891f, 35,1574f, 339,8537f);
					break;
				
				case 7:
					func_288(-232,1917f, -978,1431f, 28,166f, 160,2115f);
					func_288(-229,6225f, -970,9731f, 28,1636f, 160,2397f);
					func_288(-251,993f, -998,3963f, 28,3747f, 249,3297f);
					func_288(-262,222f, -994,5226f, 29,23f, 249,4673f);
					break;
				
				case 8:
					func_288(151,624f, -1309,343f, 28,2023f, 243,201f);
					func_288(152,7886f, -1305,608f, 28,2023f, 243,9973f);
					func_288(145,8017f, -1287,19f, 28,312f, 120,6275f);
					func_288(142,8935f, -1282,286f, 28,3156f, 120,3024f);
					break;
				
				case 9:
					func_288(-2333,575f, 272,6518f, 168,4671f, 23,0287f);
					func_288(-2322,187f, 277,638f, 168,4671f, 23,4249f);
					func_288(-2316,222f, 279,9105f, 168,4671f, 23,0175f);
					func_288(-2314,396f, 290,9f, 168,4671f, 114,3983f);
					func_288(-2316,81f, 296,424f, 168,4671f, 113,6228f);
					func_288(-2318,572f, 299,2423f, 168,4671f, 293,83f);
					func_288(-2327,902f, 291,6653f, 168,4671f, 294,1158f);
					func_288(-2330,711f, 274,0757f, 168,4671f, 205,2184f);
					func_288(-2345,082f, 277,3852f, 168,4671f, 113,4219f);
					func_288(-2347,777f, 282,6038f, 168,4671f, 292,7772f);
					func_288(-2339,33f, 293,4399f, 168,4671f, 114,2739f);
					func_288(-2352,681f, 294,4205f, 168,4671f, 115,5597f);
					break;
				
				case 10:
					func_286(78);
					break;
				
				case 11:
					func_286(79);
					break;
				
				case 12:
					func_286(82);
					break;
				
				case 13:
					func_286(81);
					break;
				
				case 14:
					func_286(73);
					break;
				
				case 15:
					func_288(382,9244f, 443,8122f, 142,9934f, 78,3408f);
					func_288(391,2023f, 442,4812f, 142,5089f, 82,2125f);
					func_288(400,1477f, 441,0816f, 142,0776f, 83,4259f);
					func_288(414,2964f, 439,2628f, 141,5056f, 80,8689f);
					break;
				
				case 16:
					func_286(75);
					break;
				
				case 17:
					func_286(76);
					break;
				
				case 18:
					func_286(77);
					break;
				
				case 19:
					func_288(-921,9734f, 704,0754f, 150,8142f, 96,5139f);
					func_288(-904,7881f, 708,9782f, 149,8261f, 108,2109f);
					func_288(-931,6637f, 703,693f, 151,369f, 87,7447f);
					func_288(-943,8763f, 704,2332f, 152,0993f, 87,6764f);
					break;
				
				case 20:
					func_286(80);
					break;
				
				case 21:
				case 25:
					func_286(87);
					break;
				
				case 22:
				case 26:
					func_286(88);
					break;
				
				case 23:
				case 27:
					func_286(89);
					break;
				
				case 24:
				case 28:
					func_286(90);
					break;
				
				case 29:
				case 30:
					if (func_285(iParam1))
					{
						func_286(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_35);
					}
					break;
				
				case 31:
					func_288(-352,53f, -1836,742f, 21,924f, 274,8f);
					func_288(-336,412f, -1837,341f, 22,497f, 264,6f);
					func_288(-320,707f, -1840,342f, 23,195f, 257,4f);
					func_288(-304,646f, -1843,295f, 24,219f, 261,599f);
					func_288(-288,991f, -1844,123f, 25,228f, 269,599f);
					func_288(-273,031f, -1842,69f, 26,27f, 278,199f);
					func_288(-361,271f, -1814,526f, 21,63f, 96,399f);
					func_288(-343,939f, -1813,331f, 22,368f, 87,999f);
					func_288(-326,881f, -1814,914f, 23,106f, 78,799f);
					func_288(-310,941f, -1818,223f, 23,957f, 78,799f);
					func_288(-294,16f, -1820,207f, 25,092f, 89,199f);
					func_288(-277,392f, -1819,237f, 26,283f, 100,199f);
					func_288(-257,213f, -1838,977f, 27,318f, 285,799f);
					func_288(-261,286f, -1815,615f, 27,439f, 110,399f);
					func_288(-246,086f, -1808,691f, 28,576f, 117,398f);
					func_288(-231,901f, -1800,767f, 28,619f, 119,398f);
					func_288(-199,77f, -1989,34f, 26,62f, 180,997f);
					func_288(-201,159f, -1971,41f, 26,62f, 190,798f);
					func_288(-205,571f, -1954,537f, 26,62f, 199,998f);
					func_288(-197,879f, -1940,822f, 26,62f, 114,998f);
					func_288(-141,311f, -1967,41f, 21,805f, 91,997f);
					func_288(-141,145f, -1977,861f, 21,813f, 91,997f);
					func_288(-140,565f, -1988,289f, 21,815f, 91,997f);
					func_288(-145,045f, -2032,168f, 21,956f, 73,597f);
					func_288(-147,923f, -2041,781f, 21,956f, 73,597f);
					func_288(-185,791f, -1948,005f, 26,62f, 18,596f);
					func_288(-181,155f, -1965,422f, 26,62f, 8,196f);
					func_288(-179,172f, -1984,332f, 26,62f, 1,396f);
					func_288(-225,88f, -1824,637f, 28,897f, 299,596f);
					func_288(-211,722f, -1816,401f, 28,859f, 300,796f);
					func_288(-217,99f, -1792,624f, 28,649f, 119,196f);
					func_288(-203,828f, -1784,264f, 28,678f, 119,996f);
					func_288(-194,254f, -2018,756f, 26,62f, 75f);
					func_288(-186,956f, -2031,369f, 26,62f, 338f);
					func_288(-194,916f, -2047,94f, 26,62f, 329,8f);
					func_288(-205,565f, -2064,553f, 26,62f, 320,2f);
					func_288(-218,606f, -2077,97f, 26,62f, 311,2f);
					func_288(-233,372f, -2089,601f, 26,62f, 304f);
					func_288(-207,822f, -2002,11f, 26,62f, 173,799f);
					func_288(-207,567f, -2027,579f, 26,62f, 158,599f);
					func_288(-215,235f, -2042,272f, 26,62f, 148,999f);
					func_288(-227,643f, -2058,498f, 26,62f, 138,799f);
					func_288(-242,977f, -2071,452f, 26,62f, 125,798f);
					func_288(-256,624f, -2087,982f, 26,62f, 204,198f);
					func_288(-249,549f, -2098,767f, 26,62f, 294,198f);
					func_288(-228,998f, -2048,889f, 26,62f, 141,198f);
					func_288(-176,963f, -2009,239f, 24,519f, 261,597f);
					func_288(-195,128f, -1806,447f, 28,814f, 299,997f);
					func_288(-180,02f, -1797,414f, 28,797f, 299,997f);
					func_288(-165,796f, -1787,672f, 28,788f, 304,597f);
					func_288(-188,124f, -1774,765f, 28,711f, 123,197f);
					func_288(-417,428f, -1836,374f, 19,238f, 121,797f);
					func_288(-430,967f, -1844,844f, 18,468f, 121,797f);
					func_288(-444,94f, -1853,739f, 17,786f, 121,797f);
					break;
			}
		}
		else if (func_281(Param0, &iVar2, &iVar3) || (func_256(Param0, &(iVar2[0])) && (unk_0x00C6FDED3EB75117(iParam1) || unk_0xBA16CD57E37AC32A(iParam1))))
		{
			func_164();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar3[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2635563.f_516 = 1;
				}
				if (!iVar3[iVar0] && func_280(iVar2[iVar0], -1))
				{
					if (func_285(iParam1))
					{
						func_286(iVar2[iVar0]);
					}
				}
				else if (iVar3[iVar0])
				{
					if (((func_279(unk_0x4A8C381C258A124D()) || func_277(unk_0x4A8C381C258A124D())) && unk_0x00C6FDED3EB75117(iParam1)) || unk_0xBA16CD57E37AC32A(iParam1))
					{
						if (func_276(iParam1))
						{
							func_275(iVar2[iVar0]);
						}
						else if (func_274(iParam1))
						{
							func_273(iVar2[iVar0]);
							func_275(iVar2[iVar0]);
						}
						else
						{
							func_273(iVar2[iVar0]);
							func_275(iVar2[iVar0]);
						}
					}
					else
					{
						func_271(iVar2[iVar0], iParam1);
					}
				}
				else
				{
					func_286(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_271(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_288(434,1898f, 6535,824f, 27,0084f, 66,9998f);
			func_288(434,9146f, 6539,661f, 26,9691f, 66,9998f);
			func_288(435,1928f, 6543,298f, 26,889f, 66,9998f);
			func_288(429,8495f, 6506,581f, 27,1807f, 59,7997f);
			func_288(429,8463f, 6511,11f, 27,0717f, 60,9997f);
			func_288(434,2748f, 6581,816f, 26,1303f, 85,1993f);
			func_288(443,1016f, 6580,717f, 26,0739f, 85,1993f);
			func_288(451,9748f, 6579,937f, 26,0319f, 85,1993f);
			break;
		
		case 26:
			func_288(-148,9694f, 6325,552f, 30,4564f, 224,1983f);
			func_288(-154,9585f, 6331,287f, 30,5809f, 225,7983f);
			func_288(-136,8806f, 6347,622f, 30,4906f, 43,9982f);
			func_288(-142,1459f, 6342,532f, 30,49f, 44,7982f);
			func_288(-136,6504f, 6357,062f, 30,4907f, 43,9982f);
			func_288(-151,1909f, 6358,461f, 30,4907f, 223,398f);
			func_288(-141,4154f, 6365,831f, 30,4907f, 43,3979f);
			func_288(-147,8279f, 6378,042f, 30,5012f, 312,7973f);
			break;
		
		case 24:
			func_288(60,7522f, 6465,807f, 30,3941f, 213,3973f);
			func_288(57,4131f, 6462,55f, 30,3663f, 213,3973f);
			func_288(48,0438f, 6452,668f, 30,3245f, 213,3973f);
			func_288(40,6765f, 6445,235f, 30,3475f, 213,3973f);
			func_288(37,8298f, 6442,521f, 30,3489f, 213,3973f);
			func_288(35,0212f, 6439,866f, 30,3332f, 213,3973f);
			func_288(32,1837f, 6437,21f, 30,2991f, 213,3973f);
			func_288(29,4732f, 6434,526f, 30,3702f, 213,3973f);
			break;
		
		case 25:
			func_288(-377,1927f, 6142,805f, 30,3409f, 315,3965f);
			func_288(-383,3481f, 6136,154f, 30,3752f, 315,3965f);
			func_288(-395,8286f, 6123,635f, 30,2987f, 46,3965f);
			func_288(-389,1636f, 6117,241f, 30,3641f, 46,3965f);
			func_288(-370,6174f, 6129,779f, 30,4414f, 45,7965f);
			func_288(-360,983f, 6130,575f, 30,4401f, 45,7965f);
			func_288(-416,8689f, 6103,411f, 30,3852f, 325,7964f);
			func_288(-420,9229f, 6095,657f, 30,3155f, 334,7964f);
			break;
		
		case 22:
			func_288(45,2181f, 6341,107f, 30,2296f, 14,3964f);
			func_288(41,6057f, 6339,476f, 30,2306f, 14,3964f);
			func_288(39,2508f, 6359,469f, 30,2398f, 207,3965f);
			func_288(36,3203f, 6356,893f, 30,2398f, 207,3965f);
			func_288(51,6043f, 6365,022f, 30,2399f, 33,5965f);
			func_288(65,6465f, 6380,626f, 30,2398f, 212,9964f);
			func_288(24,8587f, 6366,36f, 30,2286f, 32,7965f);
			func_288(19,6254f, 6360,736f, 30,2305f, 32,7965f);
			break;
		
		case 28:
			func_288(94,0245f, 181,2181f, 103,5566f, 160,3953f);
			func_288(91,0039f, 182,2811f, 103,6179f, 160,3953f);
			func_288(68,365f, 148,2105f, 103,5812f, 339,9951f);
			func_288(62,2104f, 150,5185f, 103,6101f, 339,9951f);
			func_288(69,5198f, 186,4278f, 103,9415f, 69,7949f);
			func_288(62,59f, 189,0833f, 103,9981f, 69,7949f);
			func_288(55,6095f, 191,8089f, 104,2827f, 69,7949f);
			func_288(154,7309f, 182,1333f, 104,6903f, 160,1945f);
			break;
		
		case 31:
			func_288(322,4916f, -714,5293f, 28,1574f, 158,5941f);
			func_288(329,5591f, -694,4284f, 28,1656f, 158,5941f);
			func_288(324,565f, -684,3934f, 28,3133f, 247,194f);
			func_288(326,4054f, -679,9403f, 28,3192f, 247,194f);
			func_288(297,1177f, -804,3891f, 28,4859f, 160,594f);
			func_288(288,5461f, -814,6994f, 28,1563f, 163,194f);
			func_288(286,0127f, -821,7357f, 28,3093f, 163,194f);
			func_288(283,6725f, -828,9533f, 28,1247f, 158,994f);
			break;
		
		case 29:
			func_288(-1448,551f, -355,0512f, 43,3715f, 313,3925f);
			func_288(-1454,819f, -359,998f, 42,7885f, 311,3925f);
			func_288(-1462,675f, -360,1352f, 42,9255f, 223,392f);
			func_288(-1447,965f, -368,3028f, 42,5412f, 5,9918f);
			func_288(-1468,678f, -353,4619f, 43,2024f, 217,7916f);
			func_288(-1473,219f, -346,7773f, 43,5318f, 213,9913f);
			func_288(-1490,742f, -420,1957f, 35,9291f, 229,1911f);
			func_288(-1496,003f, -395,7657f, 38,1394f, 45,7909f);
			break;
		
		case 30:
			func_288(-1174,491f, -1381,01f, 3,9253f, 116,5903f);
			func_288(-1183,148f, -1392,559f, 3,6319f, 304,9901f);
			func_288(-1160,964f, -1417,759f, 3,7043f, 65,7899f);
			func_288(-1151,611f, -1411,377f, 3,9411f, 63,5895f);
			func_288(-1167,187f, -1424,07f, 3,4884f, 123,5897f);
			func_288(-1148,22f, -1409,164f, 4,0217f, 63,5895f);
			func_288(-1137,11f, -1372,818f, 3,8993f, 27,5895f);
			func_288(-1140,608f, -1365,747f, 4,0573f, 27,5895f);
			break;
		
		case 27:
			func_288(1414,237f, -1656,344f, 60,2449f, 332,7893f);
			func_288(1416,668f, -1659,933f, 60,6982f, 332,7893f);
			func_288(1419,327f, -1663,972f, 61,2382f, 332,7893f);
			func_288(1421,557f, -1667,367f, 61,7479f, 332,7893f);
			func_288(1423,744f, -1670,853f, 62,3125f, 332,7893f);
			func_288(1412,157f, -1652,746f, 59,9105f, 332,7893f);
			func_288(1426,201f, -1673,598f, 62,7133f, 330,1893f);
			func_288(1435,804f, -1694,73f, 65,0743f, 352,5892f);
			break;
		
		case 33:
			func_288(2810,787f, 4435,92f, 47,5295f, 20,7996f);
			func_288(2808,413f, 4443,922f, 47,3732f, 14,7995f);
			func_288(2806,298f, 4451,786f, 47,1865f, 15,3995f);
			func_288(2803,925f, 4459,858f, 46,9823f, 15,3995f);
			func_288(2801,756f, 4467,755f, 46,8147f, 15,3995f);
			func_288(2893,563f, 4430,258f, 47,338f, 105,9994f);
			func_288(2903,725f, 4425,854f, 47,3523f, 23,1992f);
			func_288(2907,076f, 4418,059f, 47,6301f, 23,1992f);
			break;
		
		case 36:
			func_288(1680,448f, 4821,131f, 41,0599f, 186,399f);
			func_288(1679,76f, 4829,447f, 40,9167f, 186,399f);
			func_288(1678,668f, 4838,03f, 41,0221f, 187,7989f);
			func_288(1677,612f, 4846,028f, 41,0452f, 187,7989f);
			func_288(1675,851f, 4860,434f, 41,0901f, 187,7989f);
			func_288(1674,843f, 4868,343f, 41,0684f, 187,7989f);
			func_288(1673,543f, 4875,752f, 41,0684f, 186,7986f);
			func_288(1672,525f, 4884,972f, 41,0478f, 186,7986f);
			break;
		
		case 34:
			func_288(422,863f, 3583,901f, 32,2386f, 313,5986f);
			func_288(426,6211f, 3583,208f, 32,2386f, 313,5986f);
			func_288(430,466f, 3582,042f, 32,2386f, 313,5986f);
			func_288(434,2751f, 3580,881f, 32,2386f, 313,5986f);
			func_288(438,1525f, 3579,911f, 32,2386f, 313,5986f);
			func_288(442,0173f, 3578,948f, 32,2386f, 313,5986f);
			func_288(420,2694f, 3572,995f, 32,2385f, 353,7984f);
			func_288(424,4825f, 3572,1f, 32,2386f, 348,1984f);
			break;
		
		case 35:
			func_288(627,005f, 2726,019f, 40,7692f, 4,3984f);
			func_288(620,9771f, 2725,759f, 40,7897f, 4,3984f);
			func_288(614,8536f, 2725,355f, 40,8321f, 4,3984f);
			func_288(611,1158f, 2737,387f, 40,9734f, 185,3984f);
			func_288(598,9713f, 2736,261f, 41,0602f, 186,5986f);
			func_288(592,6151f, 2735,886f, 41,0602f, 186,5986f);
			func_288(586,0421f, 2735,9f, 41,0535f, 186,5986f);
			func_288(627,4468f, 2742,742f, 40,8963f, 183,5979f);
			break;
		
		case 32:
			func_288(214,3318f, 2492,26f, 53,9736f, 312,7978f);
			func_288(213,9953f, 2496,666f, 53,8128f, 312,7978f);
			func_288(213,7524f, 2501,251f, 53,5958f, 312,7978f);
			func_288(213,6645f, 2505,908f, 53,3477f, 312,7978f);
			func_288(213,4478f, 2510,734f, 53,1055f, 312,7978f);
			func_288(212,9148f, 2515,268f, 52,9376f, 312,7978f);
			func_288(211,5983f, 2519,216f, 52,6753f, 312,7978f);
			func_288(210,1288f, 2523,187f, 52,3493f, 312,7978f);
			break;
		
		case 38:
			func_288(153,6785f, -2476,192f, 4,9877f, 178,4004f);
			func_288(150,9209f, -2516,979f, 4,9909f, 179,9999f);
			func_288(150,9499f, -2524,965f, 4,9905f, 179,9999f);
			func_288(153,866f, -2467,242f, 4,9877f, 178,4004f);
			func_288(150,8115f, -2533,139f, 4,9895f, 180,0004f);
			func_288(153,8647f, -2433,386f, 5,2336f, 170,2002f);
			func_288(142,7427f, -2536,147f, 5f, 205,0002f);
			func_288(138,8267f, -2535,865f, 5f, 205,0002f);
			break;
		
		case 41:
			func_288(-341,4255f, -2734,451f, 5,0413f, 314,8f);
			func_288(-334,0134f, -2741,43f, 5,0269f, 314,8f);
			func_288(-329,7832f, -2745,604f, 5,0196f, 314,8f);
			func_288(-336,4781f, -2716,139f, 5,0028f, 134,1994f);
			func_288(-334,2752f, -2718,888f, 5,0048f, 135,1992f);
			func_288(-327,6603f, -2725,645f, 5,0103f, 135,1992f);
			func_288(-323,1619f, -2730,345f, 5,0099f, 135,1992f);
			func_288(-316,3481f, -2737,087f, 5,0033f, 135,1992f);
			break;
		
		case 39:
			func_288(-260,5913f, -2615,255f, 5,0502f, 274,5953f);
			func_288(-253,2161f, -2614,896f, 5,0502f, 271,5953f);
			func_288(-245,6569f, -2614,862f, 5,0502f, 271,5953f);
			func_288(-238,214f, -2614,847f, 5,0502f, 271,5953f);
			func_288(-238,013f, -2630,961f, 5,0331f, 271,3949f);
			func_288(-260,9724f, -2631,418f, 5,0355f, 276,9951f);
			func_288(-253,401f, -2631,108f, 5,0319f, 272,195f);
			func_288(-245,5563f, -2631,06f, 5,0323f, 272,195f);
			break;
		
		case 40:
			func_288(653,1188f, -2700,255f, 5,2101f, 24,7971f);
			func_288(656,1305f, -2707,245f, 5,214f, 24,7971f);
			func_288(659,3307f, -2714,378f, 5,2188f, 22,7968f);
			func_288(662,2627f, -2722,228f, 5,2188f, 19,1968f);
			func_288(649,2115f, -2728,359f, 5,1124f, 20,5967f);
			func_288(646,2606f, -2720,833f, 5,1103f, 21,3967f);
			func_288(643,4582f, -2713,846f, 5,1099f, 21,3967f);
			func_288(640,3513f, -2706,571f, 5,108f, 21,3967f);
			break;
		
		case 37:
			func_288(1143,73f, -3105,091f, 4,8989f, 146,1979f);
			func_288(1140,009f, -3104,954f, 4,8985f, 146,1979f);
			func_288(1136,267f, -3104,69f, 4,8969f, 146,1979f);
			func_288(1132,732f, -3104,277f, 4,8944f, 146,1979f);
			func_288(1128,724f, -3104,54f, 4,896f, 146,1979f);
			func_288(1125,106f, -3104,057f, 4,8942f, 146,1979f);
			func_288(1117,8f, -3103,674f, 4,8922f, 146,1979f);
			func_288(1114,015f, -3103,448f, 4,8931f, 146,1979f);
			break;
		
		case 83:
			func_288(-1190,795f, -3371,393f, 12,945f, 348,399f);
			func_288(-1185,634f, -3373,893f, 12,945f, 348,399f);
			func_288(-1114,818f, -3414,185f, 12,945f, 314,199f);
			func_288(-1110,976f, -3416,37f, 12,945f, 314,199f);
			func_288(-1098,621f, -3460,792f, 12,9453f, 329,799f);
			func_288(-1093,31f, -3463,464f, 12,9453f, 329,799f);
			func_288(-1089,433f, -3443,234f, 12,945f, 329,799f);
			func_288(-1084,271f, -3446,31f, 12,945f, 329,799f);
			func_288(-1093,808f, -3452,407f, 12,9451f, 329,799f);
			func_288(-1088,383f, -3455,466f, 12,9451f, 329,799f);
			func_288(-1118,474f, -3411,385f, 12,9451f, 313,199f);
			func_288(-1181,003f, -3375,658f, 12,945f, 346,799f);
			func_288(-1212,071f, -3382,283f, 12,9451f, 328,999f);
			func_288(-1217,708f, -3378,623f, 12,9451f, 328,999f);
			func_288(-1216,986f, -3390,396f, 12,9452f, 328,999f);
			func_288(-1222,566f, -3386,707f, 12,9452f, 328,999f);
			func_288(-1222,06f, -3398,882f, 12,9452f, 328,999f);
			func_288(-1227,698f, -3394,946f, 12,9451f, 328,999f);
			func_288(-1097,517f, -3472,086f, 12,9453f, 328,999f);
			func_288(-1102,951f, -3468,619f, 12,9452f, 328,999f);
			func_288(-1227,253f, -3407,38f, 12,9452f, 328,999f);
			func_288(-1232,836f, -3403,572f, 12,9452f, 328,999f);
			break;
		
		case 84:
			func_288(-1364,879f, -3285,201f, 12,945f, 330,2f);
			func_288(-1359,229f, -3288,52f, 12,945f, 330,2f);
			func_288(-1369,636f, -3293,617f, 12,945f, 330,2f);
			func_288(-1363,881f, -3296,796f, 12,945f, 330,2f);
			func_288(-1432,898f, -3247,702f, 12,945f, 330,2f);
			func_288(-1437,282f, -3255,429f, 12,945f, 330,2f);
			func_288(-1441,623f, -3262,969f, 12,945f, 330,2f);
			func_288(-1443,954f, -3251,006f, 12,945f, 330,2f);
			func_288(-1374,159f, -3301,61f, 12,945f, 330,2f);
			func_288(-1368,508f, -3304,924f, 12,945f, 330,2f);
			func_288(-1359,905f, -3276,118f, 12,9448f, 330,4f);
			func_288(-1354,228f, -3279,63f, 12,9448f, 330,4f);
			func_288(-1406,493f, -3246,223f, 12,9449f, 344,5997f);
			func_288(-1411,058f, -3243,62f, 12,9449f, 344,5997f);
			func_288(-1415,326f, -3241,014f, 12,9449f, 344,5997f);
			func_288(-1419,899f, -3238,116f, 12,9449f, 344,5997f);
			func_288(-1370,986f, -3268,945f, 12,9449f, 322,3996f);
			func_288(-1365,735f, -3272,363f, 12,9449f, 322,3996f);
			func_288(-1373,341f, -3313,206f, 12,9448f, 329,5996f);
			func_288(-1379,091f, -3310,004f, 12,9448f, 330,7996f);
			func_288(-1436,989f, -3228,515f, 12,9449f, 343,9996f);
			func_288(-1444,064f, -3273,751f, 12,945f, 330,7996f);
			break;
		
		case 85:
			func_288(-2060,105f, 3186,159f, 31,81f, 329,599f);
			func_288(-2065,521f, 3189,007f, 31,81f, 150,199f);
			func_288(-2055,006f, 3194,989f, 31,81f, 329,599f);
			func_288(-2060,471f, 3197,816f, 31,81f, 150,199f);
			func_288(-2049,611f, 3204,032f, 31,81f, 329,599f);
			func_288(-2055,048f, 3206,958f, 31,81f, 150,199f);
			func_288(-2049,627f, 3216,253f, 31,81f, 150,199f);
			func_288(-2039,024f, 3222,121f, 31,81f, 329,599f);
			func_288(-2044,17f, 3213,208f, 31,81f, 329,599f);
			func_288(-2044,672f, 3224,638f, 31,81f, 150,199f);
			func_288(-2060,486f, 3165,928f, 31,8103f, 133,9988f);
			func_288(-2055,707f, 3163,053f, 31,8103f, 133,9988f);
			func_288(-2050,911f, 3160,092f, 31,8103f, 133,9988f);
			func_288(-1974,635f, 3137,847f, 31,8103f, 149,5986f);
			func_288(-1970,354f, 3145,22f, 31,8103f, 149,5986f);
			func_288(-1965,709f, 3153,221f, 31,8103f, 149,5986f);
			func_288(-1960,991f, 3161,346f, 31,8103f, 149,5986f);
			func_288(-1983,17f, 3131,33f, 31,8103f, 149,5986f);
			func_288(-1976,614f, 3127,627f, 31,8103f, 149,5986f);
			func_288(-1991,582f, 3127,264f, 31,8103f, 167,7985f);
			func_288(-1995,584f, 3129,369f, 31,8103f, 167,7985f);
			func_288(-1999,335f, 3131,182f, 31,8103f, 167,7985f);
			break;
		
		case 86:
			func_288(-1843,828f, 3085,094f, 31,81f, 165,8f);
			func_288(-1828,571f, 3084,114f, 31,841f, 329,2f);
			func_288(-1823,414f, 3092,762f, 31,843f, 330f);
			func_288(-1819,045f, 3100,435f, 31,845f, 330f);
			func_288(-1833,313f, 3075,722f, 31,838f, 330f);
			func_288(-1847,648f, 3076,8f, 31,835f, 165,8f);
			func_288(-1838,479f, 3078,576f, 31,863f, 150,599f);
			func_288(-1833,605f, 3086,784f, 31,863f, 150,599f);
			func_288(-1828,424f, 3095,617f, 31,863f, 150,599f);
			func_288(-1823,95f, 3102,821f, 31,862f, 150,599f);
			func_288(-1819,284f, 3110,67f, 31,8615f, 150,2f);
			func_288(-1814,545f, 3108,229f, 31,8476f, 330,6f);
			func_288(-1853,939f, 3076,271f, 31,8105f, 176,7996f);
			func_288(-1857,726f, 3078,668f, 31,8105f, 176,7996f);
			func_288(-1861,626f, 3080,777f, 31,8105f, 176,7996f);
			func_288(-1865,584f, 3083,136f, 31,8103f, 176,7996f);
			func_288(-1869,255f, 3085,565f, 31,8103f, 176,7996f);
			func_288(-1913,263f, 3125,342f, 31,8103f, 150,7988f);
			func_288(-1917,546f, 3127,678f, 31,8103f, 150,7988f);
			func_288(-1922,74f, 3130,555f, 31,8103f, 150,7988f);
			func_288(-1927,676f, 3133,413f, 31,8103f, 150,7988f);
			func_288(-1932,418f, 3136,273f, 31,8103f, 150,7988f);
			break;
		
		case 87:
			func_288(-2538,561f, 3303,172f, 31,814f, 296,999f);
			func_288(-2530,309f, 3307,445f, 31,816f, 296,999f);
			func_288(-2521,733f, 3311,833f, 31,817f, 296,999f);
			func_288(-2512,881f, 3316,428f, 31,819f, 296,999f);
			func_288(-2502,952f, 3321,518f, 31,821f, 296,999f);
			func_288(-2542,613f, 3310,728f, 31,814f, 296,999f);
			func_288(-2534,195f, 3314,753f, 31,815f, 296,999f);
			func_288(-2525,635f, 3318,97f, 31,817f, 296,999f);
			func_288(-2516,674f, 3323,545f, 31,819f, 296,999f);
			func_288(-2507,153f, 3328,454f, 31,82f, 296,999f);
			func_288(-2547,689f, 3298,791f, 31,812f, 296,999f);
			func_288(-2551,261f, 3306,304f, 31,8123f, 296,999f);
			func_288(-2497,446f, 3333,296f, 31,821f, 296,999f);
			func_288(-2494,089f, 3326,065f, 31,8218f, 296,999f);
			func_288(-2453,405f, 3255,388f, 31,8276f, 167,1986f);
			func_288(-2449,37f, 3253,417f, 31,8276f, 167,1986f);
			func_288(-2445,49f, 3251,138f, 31,8276f, 167,1986f);
			func_288(-2441,575f, 3248,888f, 31,8276f, 167,1986f);
			func_288(-2437,319f, 3246,554f, 31,8277f, 167,1986f);
			func_288(-2432,723f, 3244,232f, 31,8277f, 167,1986f);
			func_288(-2485,273f, 3330,891f, 31,8239f, 298,1979f);
			func_288(-2488,82f, 3338,365f, 31,8226f, 298,1979f);
			break;
		
		case 89:
			if (Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_59 == 0)
			{
				func_288(1284,416f, 2890,299f, 45,0276f, 336,3999f);
				func_288(1273,248f, 2901,428f, 45,0426f, 338,3999f);
				func_288(1262,945f, 2911,535f, 43,2959f, 341,9999f);
				func_288(1272,094f, 2873,387f, 45,3443f, 328,5991f);
				func_288(1259,785f, 2892,217f, 45,1126f, 339,9999f);
				func_288(1231,279f, 2910,881f, 43,3085f, 12f);
				func_288(1306,515f, 2839,475f, 46,8947f, 132,3996f);
				func_288(1307,453f, 2825,276f, 45,1566f, 127,1998f);
				func_288(1257,029f, 2872,157f, 45,9766f, 338,5992f);
				func_288(1225,764f, 2930,095f, 41,6173f, 14,7999f);
			}
			else
			{
				func_288(1265,123f, 2836,949f, 47,1021f, 119,9996f);
				func_288(1258,145f, 2831,643f, 46,4503f, 135,7993f);
				func_288(1240,847f, 2828,721f, 46,4388f, 39,5992f);
				func_288(1236,877f, 2835,49f, 46,3491f, 22,9991f);
				func_288(1235,697f, 2843,403f, 46,0231f, 2,7991f);
				func_288(1237,686f, 2850,607f, 45,5261f, 335,5991f);
				func_288(1241,126f, 2858,816f, 45,0176f, 339,7991f);
				func_288(1249,715f, 2810,588f, 47,2648f, 255,1992f);
				func_288(1257,696f, 2808,609f, 47,014f, 266,1992f);
				func_288(1265,577f, 2808,353f, 46,7598f, 277,199f);
				func_288(1273,808f, 2808,484f, 46,3872f, 263,999f);
				func_288(1282,535f, 2807,134f, 45,9705f, 250,7989f);
				func_288(1290,168f, 2803,745f, 45,8005f, 238,7988f);
				func_288(1296,445f, 2798,777f, 46,0903f, 228,9988f);
				func_288(1302,041f, 2792,33f, 45,957f, 221,7987f);
				func_288(1251,389f, 2825,818f, 45,9856f, 119,1982f);
				func_288(1285,48f, 2819,238f, 45,044f, 228,3993f);
				func_288(1293,023f, 2814,164f, 44,8859f, 233,399f);
				func_288(1242,18f, 2814,153f, 47,7108f, 227,3991f);
				func_288(1236,362f, 2819,623f, 47,6845f, 224,399f);
				func_288(1231,532f, 2825,855f, 47,4649f, 210,5992f);
				func_288(1228,177f, 2833,423f, 47,3171f, 197,5993f);
				func_288(1243,095f, 2866,749f, 44,6219f, 353,7992f);
				func_288(1307,346f, 2785,787f, 46,1136f, 219,9997f);
				func_288(1300,752f, 2808,224f, 44,5688f, 228,9997f);
				func_288(1306,571f, 2802,468f, 44,6275f, 224,1992f);
				func_288(1244,465f, 2875,697f, 44,5839f, 353,7992f);
				func_288(1312,441f, 2795,427f, 45,2701f, 218,5991f);
			}
			break;
		
		case 90:
			if (Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_59 == 0)
			{
				func_288(14,4916f, 2660,726f, 79,0178f, 310,1999f);
				func_288(3,855f, 2672,388f, 78,437f, 319,2f);
				func_288(-7,057f, 2682,247f, 77,472f, 319,2f);
				func_288(-14,041f, 2663,43f, 77,4221f, 319,2f);
				func_288(41,8086f, 2597,059f, 81,3524f, 301,9997f);
				func_288(60,2273f, 2609,745f, 79,5672f, 305,9998f);
				func_288(34,0188f, 2659,723f, 78,9894f, 314,2f);
				func_288(29,4879f, 2675,34f, 76,0202f, 314,2f);
				func_288(19,0088f, 2686,16f, 75,6897f, 314,2f);
				func_288(7,6101f, 2697,113f, 76,2923f, 314,2f);
			}
			else
			{
				func_288(50,6405f, 2633,902f, 79,4503f, 305,1998f);
				func_288(46,2894f, 2639,951f, 79,9122f, 305,1998f);
				func_288(55,3668f, 2627,773f, 79,6363f, 305,1998f);
				func_288(59,9522f, 2620,408f, 80,0499f, 305,1998f);
				func_288(42,1486f, 2646,073f, 80,108f, 305,1998f);
				func_288(68,1481f, 2630,07f, 77,0725f, 305,1998f);
				func_288(62,6048f, 2637,014f, 76,1722f, 305,1998f);
				func_288(57,3543f, 2643,56f, 75,5301f, 305,1998f);
				func_288(52,611f, 2649,698f, 76,1354f, 305,1998f);
				func_288(74,5845f, 2640,475f, 72,602f, 305,1998f);
				func_288(68,5462f, 2646,784f, 71,6298f, 305,1998f);
				func_288(62,426f, 2652,977f, 71,7029f, 305,1998f);
				func_288(79,5597f, 2650,835f, 68,668f, 305,1998f);
				func_288(72,6035f, 2656,857f, 67,3294f, 305,1998f);
				func_288(83,4156f, 2660,237f, 64,3198f, 305,1998f);
				func_288(102,851f, 2688,009f, 51,732f, 224f);
				func_288(109,815f, 2681,012f, 51,112f, 224f);
				func_288(116,355f, 2674,26f, 50,529f, 224f);
				func_288(125,138f, 2665,98f, 49,8f, 224f);
				func_288(132,228f, 2659,865f, 49,26f, 228,4f);
				func_288(139,354f, 2653,536f, 48,737f, 228,4f);
				func_288(88,512f, 2702,995f, 53,042f, 224,199f);
				func_288(81,565f, 2710,357f, 53,67f, 224,199f);
				func_288(75,156f, 2716,981f, 54,223f, 224,199f);
				func_288(68,442f, 2723,806f, 54,775f, 226,199f);
				func_288(61,449f, 2730,606f, 55,308f, 226,199f);
				func_288(53,702f, 2738,167f, 55,855f, 226,199f);
				func_288(91,2443f, 2667,262f, 59,9931f, 314,599f);
			}
			break;
		
		case 91:
			if (Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_59 == 0)
			{
				func_288(2772,011f, 3889,062f, 42,94f, 145,4f);
				func_288(2785,592f, 3880,409f, 43,695f, 146,199f);
				func_288(2788,387f, 3898,107f, 45,364f, 140,999f);
				func_288(2801,558f, 3912,485f, 44,931f, 131,999f);
				func_288(2805,531f, 3892,253f, 47,01f, 106,399f);
				func_288(2824,791f, 3894,787f, 47,4293f, 105,3989f);
				func_288(2761,739f, 3945,948f, 44,59f, 135,398f);
				func_288(2814,589f, 3930,404f, 44,816f, 134,9978f);
				func_288(2747,627f, 3930,92f, 43,8497f, 138,3978f);
				func_288(2796,312f, 3928,316f, 42,6106f, 134,5979f);
			}
			else
			{
				func_288(2730,174f, 3890,294f, 42,435f, 54,6f);
				func_288(2714,633f, 3918,283f, 42,938f, 16f);
				func_288(2716,533f, 3910,15f, 42,699f, 19,6f);
				func_288(2757,499f, 3874,045f, 42,724f, 64,8f);
				func_288(2747,99f, 3878,676f, 42,561f, 62,8f);
				func_288(2738,337f, 3884,314f, 42,614f, 57,2f);
				func_288(2711,836f, 3926,255f, 42,931f, 21,6f);
				func_288(2707,586f, 3934,558f, 42,984f, 27,6f);
				func_288(2702,361f, 3943,039f, 42,951f, 30,6f);
				func_288(2696,696f, 3951,317f, 43,012f, 34,8f);
				func_288(2766,778f, 3868,911f, 42,822f, 59,8f);
				func_288(2775,397f, 3863,697f, 43,204f, 54,2f);
				func_288(2738,841f, 3869,927f, 42,492f, 242,799f);
				func_288(2746,49f, 3865,861f, 42,808f, 239,599f);
				func_288(2754,829f, 3861,039f, 42,906f, 240,799f);
				func_288(2762,616f, 3856,316f, 42,895f, 240,799f);
				func_288(2770,463f, 3851,383f, 43,216f, 233,199f);
				func_288(2778,129f, 3844,914f, 43,26f, 229,199f);
				func_288(2785,341f, 3837,918f, 43,141f, 224,999f);
				func_288(2730,65f, 3875,186f, 42,437f, 231,999f);
				func_288(2724,14f, 3880,885f, 42,469f, 224,599f);
				func_288(2718,541f, 3887,508f, 42,614f, 217,399f);
				func_288(2783,246f, 3857,409f, 43,175f, 45,199f);
				func_288(2790,716f, 3850,631f, 43,125f, 45,199f);
				func_288(2690,655f, 3959,246f, 43,255f, 40,199f);
				func_288(2797,912f, 3842,523f, 43,166f, 40,199f);
				func_288(2791,836f, 3830,845f, 43,14f, 221,999f);
				func_288(2712,952f, 3894,566f, 42,484f, 14,799f);
			}
			break;
		
		case 92:
			if (Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_59 == 0)
			{
				func_288(3374,661f, 5559,709f, 12,3726f, 138,7999f);
				func_288(3366,365f, 5569,449f, 13,9704f, 112,8f);
				func_288(3358,493f, 5581,463f, 16,1783f, 112,8f);
				func_288(3356,705f, 5595,363f, 15,4029f, 112,8f);
				func_288(3336,662f, 5552,357f, 19,491f, 249,6f);
				func_288(3336,791f, 5567,825f, 20,432f, 249,6f);
				func_288(3335,259f, 5599,046f, 22,4606f, 249,6f);
				func_288(3336,811f, 5613,029f, 22,2159f, 249,6f);
				func_288(3354,696f, 5609,699f, 15,9453f, 111,3999f);
				func_288(3354,006f, 5624,206f, 16,018f, 111,3999f);
			}
			else
			{
				func_288(3372,053f, 5506,134f, 20,8174f, 99,5999f);
				func_288(3374,923f, 5520,177f, 20,3207f, 86f);
				func_288(3350,643f, 5490,432f, 18,8423f, 139,9997f);
				func_288(3364,189f, 5502,98f, 19,648f, 125,7999f);
				func_288(3354,101f, 5484,773f, 19,619f, 116,399f);
				func_288(3365,919f, 5519,949f, 18,8008f, 102,9988f);
				func_288(3341,889f, 5506,809f, 19,584f, 161,199f);
				func_288(3338,581f, 5497,709f, 19,376f, 161,199f);
				func_288(3335,674f, 5489,348f, 19,542f, 161,199f);
				func_288(3332,019f, 5479,563f, 19,738f, 150,998f);
				func_288(3327,404f, 5470,857f, 19,302f, 159,398f);
				func_288(3323,903f, 5461,49f, 18,492f, 156,398f);
				func_288(3320,016f, 5452,957f, 17,834f, 153,198f);
				func_288(3315,782f, 5444,61f, 17,115f, 150,798f);
				func_288(3335,451f, 5455,723f, 18,2323f, 162,1979f);
				func_288(3338,788f, 5464,803f, 18,8631f, 163,7977f);
				func_288(3362,476f, 5488,211f, 20,4432f, 108,5979f);
				func_288(3371,259f, 5491,274f, 21,5286f, 104,9989f);
				func_288(3342,201f, 5517,014f, 19,642f, 170,199f);
				func_288(3343,267f, 5526,085f, 18,902f, 175,598f);
				func_288(3343,531f, 5536,075f, 18,217f, 178,598f);
				func_288(3357,257f, 5496,71f, 18,9729f, 132,5977f);
				func_288(3342,346f, 5473,345f, 19,1235f, 159,3987f);
				func_288(3347,236f, 5480,447f, 19,4672f, 131,199f);
				func_288(3357,623f, 5516,9f, 16,9016f, 118,7991f);
				func_288(3361,366f, 5545,886f, 15,5532f, 118,7991f);
				func_288(3352,612f, 5541,013f, 16,3238f, 131,999f);
				func_288(3343,349f, 5546,494f, 17,8738f, 173,9988f);
			}
			break;
		
		case 93:
			if (Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_59 == 0)
			{
				func_288(43,848f, 6845,657f, 13,379f, 247,2f);
				func_288(50,379f, 6861,146f, 15,105f, 247,2f);
				func_288(32,501f, 6871,777f, 13,3283f, 247,2f);
				func_288(38,437f, 6885,796f, 13,3627f, 247,2f);
				func_288(55,806f, 6875,081f, 14,824f, 247,2f);
				func_288(11,616f, 6877,079f, 11,466f, 247,2f);
				func_288(18,954f, 6891,633f, 11,37f, 247,2f);
				func_288(26,68f, 6907,587f, 11,869f, 247,2f);
				func_288(7,479f, 6907,895f, 12,024f, 247,2f);
				func_288(44,9981f, 6901,352f, 11,9426f, 247,2f);
			}
			else
			{
				func_288(35,591f, 6836,608f, 13,288f, 274,4f);
				func_288(36,028f, 6830,135f, 13,801f, 270,8f);
				func_288(35,114f, 6823,884f, 14,527f, 260,8f);
				func_288(48,779f, 6838,693f, 14,337f, 273,6f);
				func_288(56,738f, 6821,8f, 15,244f, 244,8f);
				func_288(48,377f, 6825,895f, 14,656f, 249,8f);
				func_288(49,11f, 6831,439f, 13,991f, 274,8f);
				func_288(53,544f, 6818,275f, 16,342f, 243f);
				func_288(46,162f, 6821,945f, 15,483f, 249,8f);
				func_288(60,129f, 6836,8f, 15,605f, 269,6f);
				func_288(40,88f, 6802,952f, 20,113f, 242,6f);
				func_288(48,203f, 6799,134f, 20,897f, 244,4f);
				func_288(70,449f, 6809,271f, 16,846f, 243f);
				func_288(61,436f, 6814,266f, 16,71f, 244,2f);
				func_288(56,142f, 6793,458f, 19,806f, 242,6f);
				func_288(65,759f, 6791,12f, 18,433f, 276,4f);
				func_288(77,305f, 6805,391f, 18,558f, 245,6f);
				func_288(85,893f, 6800,243f, 18,535f, 249,8f);
				func_288(56,85f, 6780,582f, 18,822f, 297,999f);
				func_288(65,636f, 6784,669f, 18,789f, 293,799f);
				func_288(74,121f, 6788,498f, 18,739f, 293,799f);
				func_288(97,779f, 6796,32f, 19,02f, 276,799f);
				func_288(106,76f, 6796,983f, 18,914f, 272,599f);
				func_288(112,387f, 6802,858f, 18,994f, 210,599f);
				func_288(117,58f, 6802,644f, 18,663f, 209,399f);
				func_288(122,481f, 6802,693f, 18,468f, 209,399f);
				func_288(127,182f, 6802,686f, 18,218f, 209,399f);
				func_288(132,429f, 6801,882f, 17,949f, 209,399f);
			}
			break;
		
		case 94:
			if (Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_59 == 0)
			{
				func_288(-2213,552f, 2283,726f, 31,7464f, 293,7993f);
				func_288(-2196,71f, 2290,824f, 32,0819f, 293,7993f);
				func_288(-2232,397f, 2274,252f, 31,602f, 296,7993f);
				func_288(-2180,471f, 2296,206f, 32,9612f, 287,5992f);
				func_288(-2180,87f, 2419,649f, 0,2324f, 147,7987f);
				func_288(-2180,166f, 2436,91f, 0,2325f, 144,5987f);
				func_288(-2185,271f, 2457,022f, 0,2062f, 160,1985f);
				func_288(-2329,465f, 2393,603f, 2,5699f, 289,7982f);
				func_288(-2328,978f, 2380,406f, 2,7911f, 289,7982f);
				func_288(-2333,665f, 2366,641f, 3,4939f, 289,7982f);
			}
			else
			{
				func_288(-2239,671f, 2390,292f, 10,756f, 189,2002f);
				func_288(-2217,413f, 2392,471f, 12,2202f, 189,2002f);
				func_288(-2238,863f, 2381,56f, 13,1388f, 185,2003f);
				func_288(-2215,695f, 2383,035f, 14,9809f, 189,4004f);
				func_288(-2238,044f, 2372,67f, 15,07f, 187,4004f);
				func_288(-2215,96f, 2374,251f, 17,0939f, 187,4004f);
				func_288(-2237,494f, 2364,467f, 15,3155f, 186,2004f);
				func_288(-2216,857f, 2365,651f, 18,9029f, 173,0005f);
				func_288(-2218,526f, 2357,065f, 20,7893f, 179,0004f);
				func_288(-2237,625f, 2348,108f, 20,9097f, 179,0004f);
				func_288(-2218,447f, 2348,733f, 22,9621f, 179,0004f);
				func_288(-2238,18f, 2339,141f, 22,5602f, 174,8003f);
				func_288(-2218,771f, 2340,131f, 25,5237f, 177,2002f);
				func_288(-2238,998f, 2330,958f, 25,7263f, 175,8005f);
				func_288(-2219,221f, 2331,934f, 28,5604f, 177,8006f);
				func_288(-2219,077f, 2324,066f, 30,9043f, 198,8006f);
				func_288(-2239,413f, 2322,913f, 28,0647f, 177,8008f);
				func_288(-2240,014f, 2313,951f, 29,5314f, 170,6008f);
				func_288(-2241,543f, 2305,819f, 30,7136f, 163,4006f);
				func_288(-2244,904f, 2298,388f, 31,4166f, 148,2005f);
				func_288(-2249,31f, 2290,892f, 31,5742f, 139,2004f);
				func_288(-2211,896f, 2319,581f, 31,7538f, 259,4002f);
				func_288(-2203,961f, 2320,016f, 31,9895f, 271,4001f);
				func_288(-2255,106f, 2285,415f, 31,617f, 130,3999f);
				func_288(-2196,17f, 2320,341f, 32,2704f, 270,6003f);
				func_288(-2261,335f, 2280,203f, 31,6562f, 130,0002f);
				func_288(-2268,447f, 2275,528f, 31,7095f, 124,4001f);
				func_288(-2188,258f, 2319,985f, 32,5649f, 267,3998f);
			}
			break;
		
		case 95:
			if (Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_59 == 0)
			{
				func_288(4,0332f, 3378,618f, 41,0822f, 247,1989f);
				func_288(38,819f, 3321,2f, 37,0283f, 203,999f);
				func_288(26,877f, 3309,062f, 37,93f, 191,9991f);
				func_288(15,6727f, 3297,846f, 39,0535f, 191,9991f);
				func_288(-24,2865f, 3367,527f, 41,4783f, 264,399f);
				func_288(-23,1279f, 3352,254f, 40,52f, 280,399f);
				func_288(-25,5802f, 3337,243f, 40,7142f, 320,1988f);
				func_288(97,4844f, 3335,385f, 34,6164f, 7,9981f);
				func_288(20,409f, 3370,839f, 38,8393f, 235,799f);
				func_288(48,457f, 3336,586f, 35,8912f, 270,3979f);
			}
			else
			{
				func_288(25,9869f, 3349,706f, 36,0366f, 273,9994f);
				func_288(25,0176f, 3356,915f, 36,4258f, 276,9998f);
				func_288(36,2443f, 3351,358f, 36,2386f, 272,5997f);
				func_288(35,9352f, 3358,816f, 37,0033f, 276,7998f);
				func_288(25,9651f, 3342,673f, 36,2157f, 270,7997f);
				func_288(30,027f, 3292,351f, 38,604f, 140,199f);
				func_288(49,1614f, 3358,589f, 35,9759f, 263,5988f);
				func_288(48,288f, 3352,494f, 35,5841f, 261,1988f);
				func_288(23,897f, 3283,152f, 39,381f, 145,399f);
				func_288(60,9182f, 3356,21f, 35,8814f, 255,3988f);
				func_288(18,723f, 3274,025f, 40,054f, 155,799f);
				func_288(59,0177f, 3350,004f, 35,3204f, 255,7989f);
				func_288(36,958f, 3298,847f, 38,001f, 127,799f);
				func_288(54,165f, 3311,582f, 36,517f, 303,799f);
				func_288(61,607f, 3317,105f, 35,916f, 306,999f);
				func_288(68,994f, 3323,129f, 35,364f, 308,199f);
				func_288(76,266f, 3329,467f, 34,805f, 311,399f);
				func_288(82,757f, 3335,915f, 34,344f, 316,598f);
				func_288(46,5977f, 3306,196f, 37,1628f, 304,9976f);
				func_288(14,664f, 3263,688f, 40,931f, 160,398f);
				func_288(50,8234f, 3324,118f, 36,2129f, 305,1976f);
				func_288(11,7852f, 3256,101f, 41,7031f, 159,198f);
				func_288(89,575f, 3343,311f, 33,932f, 318,398f);
				func_288(58,4154f, 3329,423f, 35,6197f, 305,5979f);
				func_288(65,3201f, 3334,253f, 35,1903f, 306,5977f);
				func_288(72,1063f, 3339,793f, 34,8449f, 308,5977f);
				func_288(95,6614f, 3349,917f, 33,696f, 316,1977f);
				func_288(85,4387f, 3353,183f, 33,8047f, 317,9978f);
			}
			break;
		
		case 96:
			if (Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_59 == 0)
			{
				func_288(2135,708f, 1757,503f, 102,073f, 40,999f);
				func_288(2148,674f, 1764,557f, 102,75f, 40,999f);
				func_288(2160,511f, 1771,173f, 104,149f, 40,999f);
				func_288(2172,842f, 1777,391f, 105,369f, 40,999f);
				func_288(2127,938f, 1736,353f, 100,835f, 222,199f);
				func_288(2141,682f, 1739,865f, 99,833f, 222,199f);
				func_288(2152,786f, 1747,776f, 99,785f, 222,199f);
				func_288(2166,356f, 1754,682f, 100,07f, 220,399f);
				func_288(2090,66f, 1701,805f, 101,681f, 243,199f);
				func_288(2066,149f, 1716,735f, 102,112f, 228,2f);
			}
			else
			{
				func_288(2073,044f, 1725,935f, 102,5096f, 225,2f);
				func_288(2077,24f, 1730,299f, 102,5247f, 225,2f);
				func_288(2081,68f, 1734,742f, 102,5588f, 225,2f);
				func_288(2086,052f, 1739,045f, 102,6618f, 225,2f);
				func_288(2090,55f, 1743,53f, 102,6058f, 225,2f);
				func_288(2095,295f, 1748,274f, 102,3022f, 225,2f);
				func_288(2101,779f, 1721,807f, 101,927f, 225,2f);
				func_288(2107,08f, 1727,001f, 101,932f, 225,2f);
				func_288(2095,867f, 1716,475f, 101,925f, 225,2f);
				func_288(2112,387f, 1732,492f, 101,849f, 225,2f);
				func_288(2089,718f, 1710,779f, 101,978f, 225,2f);
				func_288(2111,639f, 1717,132f, 100,855f, 225,2f);
				func_288(2117,297f, 1722,655f, 100,704f, 225,2f);
				func_288(2105,821f, 1711,672f, 101,065f, 225,2f);
				func_288(2098,759f, 1704,866f, 101,209f, 225,2f);
				func_288(2121,208f, 1713,145f, 99,65f, 225,2f);
				func_288(2115,34f, 1707,542f, 99,829f, 225,2f);
				func_288(2109,211f, 1702,247f, 100,079f, 225,2f);
				func_288(2124,167f, 1704,036f, 98,584f, 225,2f);
				func_288(2118,181f, 1698,253f, 98,645f, 225,2f);
				func_288(2127,253f, 1694,878f, 97,078f, 225,2f);
				func_288(2117,786f, 1738,219f, 101,839f, 225,2f);
				func_288(2122,34f, 1728,011f, 100,627f, 225,2f);
				func_288(2126,288f, 1718,542f, 99,501f, 225,2f);
				func_288(2129,762f, 1709,847f, 98,352f, 225,2f);
				func_288(2132,765f, 1700,777f, 96,999f, 225,2f);
				func_288(2120,399f, 1689,165f, 97,388f, 225,2f);
				func_288(2098,994f, 1747,929f, 102,2403f, 225,2f);
			}
			break;
		
		case 97:
			if (Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_59 == 0)
			{
				func_288(1871,691f, 358,5369f, 162,1067f, 153,1979f);
				func_288(1858,966f, 351,2935f, 161,7614f, 166,598f);
				func_288(1873,611f, 342,6637f, 161,6936f, 142,998f);
				func_288(1887,645f, 343,1557f, 162,1659f, 138,5979f);
				func_288(1888,644f, 328,0839f, 161,7489f, 139,398f);
				func_288(1898,596f, 315,2232f, 161,4418f, 173,7979f);
				func_288(1896,729f, 266,5388f, 161,1619f, 113,5978f);
				func_288(1900,167f, 281,3884f, 161,7807f, 115,197f);
				func_288(1856,286f, 294,624f, 161,442f, 167,9966f);
				func_288(1868,622f, 309,7907f, 162,6084f, 155,1968f);
			}
			else
			{
				func_288(1856,378f, 255,9146f, 162,7158f, 147,6202f);
				func_288(1837,279f, 227,3696f, 165,2592f, 164,3995f);
				func_288(1835,192f, 219,3931f, 167,5468f, 169,9994f);
				func_288(1833,557f, 211,859f, 169,864f, 169,9994f);
				func_288(1839,534f, 194,4053f, 171,3841f, 172,9989f);
				func_288(1838,289f, 185,8157f, 171,2585f, 174,1989f);
				func_288(1837,478f, 177,0607f, 170,7063f, 174,1989f);
				func_288(1840,463f, 202,6959f, 170,8702f, 174,1989f);
				func_288(1836,296f, 168,7307f, 170,5786f, 174,1989f);
				func_288(1835,412f, 159,3162f, 170,4163f, 171,1989f);
				func_288(1826,91f, 214,9648f, 172,2502f, 18,7986f);
				func_288(1823,805f, 223,0288f, 172,0794f, 21,7986f);
				func_288(1820,599f, 231,144f, 172,2987f, 21,7986f);
				func_288(1817,245f, 239,1232f, 172,0878f, 21,7986f);
				func_288(1814,089f, 247,0423f, 171,7386f, 24,9986f);
				func_288(1810,879f, 255,6553f, 171,7517f, 19,3986f);
				func_288(1807,729f, 265,4899f, 172,2307f, 15,1986f);
				func_288(1823,147f, 197,3122f, 172,235f, 192,3984f);
				func_288(1824,641f, 184,4241f, 171,5948f, 183,3985f);
				func_288(1825,019f, 171,2314f, 170,5843f, 183,3985f);
				func_288(1824,748f, 162,8998f, 170,4961f, 173,1985f);
				func_288(1817,345f, 214,6964f, 172,5223f, 203,9982f);
				func_288(1813,466f, 222,3717f, 172,3316f, 200,9982f);
				func_288(1809,114f, 230,8225f, 172,346f, 205,1983f);
				func_288(1805,594f, 239,3896f, 172,0033f, 197,9984f);
				func_288(1802,515f, 247,4269f, 171,8964f, 197,9984f);
				func_288(1833,982f, 150,4025f, 170,411f, 163,7985f);
				func_288(1823,079f, 154,5105f, 170,8194f, 163,7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_272(896,357f, -3,23695f, 77,7645f, 147,3987f, iParam1, 0);
			func_272(899,759f, -5,54885f, 77,7645f, 147,3987f, iParam1, 0);
			func_272(903,021f, -7,62495f, 77,7645f, 147,3987f, iParam1, 0);
			func_272(906,474f, -9,70314f, 77,7645f, 147,3987f, iParam1, 0);
			func_272(909,884f, -11,888f, 77,7645f, 147,3987f, iParam1, 0);
			func_272(913,209f, -14,0965f, 77,7645f, 147,3987f, iParam1, 0);
			func_272(879,578f, 7,26725f, 77,7646f, 147,3987f, iParam1, 0);
			func_272(876,642f, 9,05555f, 77,7646f, 147,3987f, iParam1, 0);
			func_272(873,534f, 10,8622f, 77,7646f, 147,3987f, iParam1, 0);
			func_272(869,685f, -7,55887f, 77,7646f, 237,3985f, iParam1, 0);
			func_272(867,866f, -10,464f, 77,7646f, 237,3985f, iParam1, 0);
			func_272(866,077f, -13,4579f, 77,7646f, 237,3985f, iParam1, 0);
			func_272(864,322f, -16,4335f, 77,7646f, 237,3985f, iParam1, 0);
			func_272(862,534f, -19,2652f, 77,7644f, 237,3985f, iParam1, 0);
			func_272(887,524f, -18,7251f, 77,7647f, 237,3985f, iParam1, 0);
			func_272(885,594f, -21,7041f, 77,7647f, 237,3985f, iParam1, 0);
			func_272(883,691f, -24,7685f, 77,7647f, 237,3985f, iParam1, 0);
			func_272(881,827f, -27,7084f, 77,7644f, 237,3985f, iParam1, 0);
			func_272(880,013f, -30,5612f, 77,7644f, 237,3985f, iParam1, 0);
			func_272(884,931f, -17,2169f, 77,7646f, 57,5983f, iParam1, 0);
			func_272(883,043f, -20,1063f, 77,7646f, 57,5983f, iParam1, 0);
			func_272(881,118f, -22,9962f, 77,7644f, 57,5983f, iParam1, 0);
			func_272(879,345f, -25,9389f, 77,7644f, 57,5983f, iParam1, 0);
			func_272(877,631f, -28,8543f, 77,7644f, 57,5983f, iParam1, 0);
			func_272(903,231f, -28,6965f, 77,7647f, 57,5983f, iParam1, 0);
			func_272(901,368f, -31,6316f, 77,7647f, 57,5983f, iParam1, 0);
			func_272(899,552f, -34,4844f, 77,7647f, 57,5983f, iParam1, 0);
			func_272(897,669f, -37,4419f, 77,7647f, 57,5983f, iParam1, 0);
			func_272(895,831f, -40,3309f, 77,7647f, 57,5983f, iParam1, 0);
			func_272(932,842f, -25,6631f, 77,7647f, 147,798f, iParam1, 0);
			func_272(935,693f, -27,516f, 77,7647f, 147,798f, iParam1, 0);
			func_272(938,593f, -29,5809f, 77,7647f, 147,798f, iParam1, 0);
			break;
		
		case 165:
			func_272(-14,562f, -1298,237f, 28,323f, 181,7987f, iParam1, 0);
			func_272(-18,7554f, -1298,321f, 28,3238f, 181,7987f, iParam1, 0);
			func_272(-8,76f, -1306,764f, 28,4274f, 270,5988f, iParam1, 0);
			func_272(-0,9861f, -1306,989f, 29,0661f, 268,5986f, iParam1, 0);
			func_272(7,095f, -1306,788f, 29,081f, 269,7986f, iParam1, 0);
			func_272(15,0002f, -1306,983f, 28,1188f, 269,7986f, iParam1, 0);
			func_272(22,4783f, -1307,613f, 28,2369f, 270,5979f, iParam1, 0);
			func_272(30,1251f, -1307,55f, 28,2089f, 270,5979f, iParam1, 0);
			func_272(-58,9301f, -1319,509f, 28,1072f, 89,1976f, iParam1, 0);
			func_272(-66,4231f, -1319,25f, 28,0882f, 89,1976f, iParam1, 0);
			break;
		
		case 162:
			func_272(-215,8533f, 6310,631f, 30,2933f, 315,3986f, iParam1, 0);
			func_272(-221,6996f, 6304,683f, 30,2887f, 315,3986f, iParam1, 0);
			func_272(-227,5227f, 6298,887f, 30,2886f, 315,3986f, iParam1, 0);
			func_272(-233,4945f, 6293,001f, 30,2907f, 315,3986f, iParam1, 0);
			func_272(-199,5962f, 6321,835f, 30,4171f, 315,3986f, iParam1, 0);
			func_272(-219,9854f, 6323,075f, 30,3012f, 135,3982f, iParam1, 0);
			func_272(-214,4723f, 6328,419f, 30,3033f, 135,3982f, iParam1, 0);
			func_272(-228,3779f, 6314,325f, 30,2951f, 135,3982f, iParam1, 0);
			func_272(-233,6126f, 6309,157f, 30,2805f, 135,3982f, iParam1, 0);
			func_272(-239,0836f, 6303,774f, 30,3162f, 135,3982f, iParam1, 0);
			break;
		
		case 166:
			func_272(1199,392f, -1274,646f, 34,2218f, 264,5996f, iParam1, 0);
			func_272(1199,823f, -1270,842f, 34,2267f, 264,5996f, iParam1, 0);
			func_272(1211,786f, -1273,506f, 34,2265f, 84,7993f, iParam1, 0);
			func_272(1211,396f, -1277,511f, 34,2265f, 84,7993f, iParam1, 0);
			func_272(1198,322f, -1289,711f, 34,2104f, 265,7991f, iParam1, 0);
			func_272(1190,971f, -1289,033f, 33,9762f, 265,7991f, iParam1, 0);
			func_272(1183,631f, -1288,772f, 33,8503f, 265,7991f, iParam1, 0);
			func_272(1212,653f, -1290,968f, 34,2268f, 265,7991f, iParam1, 0);
			func_272(1219,916f, -1291,57f, 34,2231f, 265,7991f, iParam1, 0);
			func_272(1227,248f, -1292,124f, 34,2049f, 214,5982f, iParam1, 0);
			break;
		
		case 164:
			func_272(-513,4792f, -1725,954f, 18,2396f, 233,7993f, iParam1, 0);
			func_272(-502,8869f, -1724,655f, 18,3531f, 191,7995f, iParam1, 0);
			func_272(-500,5194f, -1731,936f, 17,9393f, 202,9996f, iParam1, 0);
			func_272(-519,8862f, -1723,571f, 18,186f, 326,1996f, iParam1, 0);
			func_272(-522,9067f, -1721,466f, 18,2f, 326,1996f, iParam1, 0);
			func_272(-525,8917f, -1719,232f, 18,2055f, 326,1996f, iParam1, 0);
			func_272(-528,915f, -1717,209f, 18,2224f, 326,1996f, iParam1, 0);
			func_272(-532,0991f, -1714,769f, 18,2197f, 326,1996f, iParam1, 0);
			func_272(-541,5544f, -1713,429f, 18,159f, 260,1992f, iParam1, 0);
			func_272(-547,5757f, -1708,499f, 18,0875f, 214,5982f, iParam1, 0);
			break;
		
		case 163:
			func_272(2503,975f, 4105,65f, 37,3197f, 333,9991f, iParam1, 0);
			func_272(2500,563f, 4098,364f, 37,2041f, 333,9991f, iParam1, 0);
			func_272(2496,892f, 4090,868f, 37,0864f, 333,9991f, iParam1, 0);
			func_272(2493,136f, 4083,078f, 36,9669f, 333,9991f, iParam1, 0);
			func_272(2489,554f, 4075,2f, 36,8805f, 333,9991f, iParam1, 0);
			func_272(2491,659f, 4121,725f, 37,1767f, 155,199f, iParam1, 0);
			func_272(2488,214f, 4123,271f, 37,1377f, 155,199f, iParam1, 0);
			func_272(2484,734f, 4124,911f, 37,0531f, 155,199f, iParam1, 0);
			func_272(2484,46f, 4113,972f, 37,0647f, 336,7987f, iParam1, 0);
			func_272(2480,877f, 4115,492f, 37,0647f, 336,7987f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_272(struct<3> Param0, float fParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (!iParam2 == 0)
	{
		func_170(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
		fVar2 = (Var1.f_1 - Var0.f_1);
		if (bParam3)
		{
			fVar2 = (fVar2 * -1f);
		}
		fVar2 = (fVar2 * 0,5f);
		Var3 = { 0f, fVar2, 0f };
		Var4 = { unk_0xF10F2A2453AF1DFB(Param0, fParam1, Var3) };
		func_288(Var4, fParam1);
	}
	else
	{
		func_288(Param0, fParam1);
	}
}

void func_273(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_288(-1133,454f, -3371,672f, 12,945f, 329,799f);
			func_288(-1119,748f, -3379,991f, 12,945f, 329,799f);
			func_288(-1147,602f, -3363,505f, 12,945f, 329,799f);
			func_288(-1161,988f, -3354,852f, 12,945f, 329,799f);
			func_288(-1116,563f, -3358,99f, 12,945f, 329,799f);
			func_288(-1131,23f, -3350,104f, 12,945f, 329,799f);
			func_288(-1145,252f, -3341,608f, 12,945f, 329,799f);
			func_288(-1115,202f, -3339,265f, 12,945f, 329,799f);
			func_288(-1129,559f, -3330,697f, 12,945f, 329,799f);
			func_288(-1114,664f, -3320,954f, 12,945f, 329,799f);
			func_288(-1199,923f, -3369,502f, 12,945f, 350,399f);
			func_288(-1212,069f, -3363,568f, 12,945f, 350,399f);
			func_288(-1223,637f, -3356,694f, 12,945f, 350,399f);
			func_288(-1102,284f, -3420,613f, 12,945f, 354,599f);
			func_288(-1091,131f, -3427,396f, 12,945f, 354,599f);
			func_288(-1079,372f, -3434,306f, 12,945f, 354,599f);
			func_288(-1067,498f, -3441,878f, 13,114f, 354,599f);
			func_288(-1055,714f, -3448,819f, 12,977f, 354,599f);
			func_288(-1043,37f, -3455,796f, 13,146f, 354,599f);
			func_288(-1017,023f, -3382,777f, 12,8401f, 330,6f);
			func_288(-1010,608f, -3386,103f, 12,8401f, 330,6f);
			func_288(-1004,658f, -3389,823f, 12,8401f, 330,6f);
			func_288(-998,3798f, -3393,644f, 12,8401f, 330,6f);
			func_288(-991,5242f, -3397,297f, 12,8401f, 330,6f);
			func_288(-985,0826f, -3401,247f, 12,8401f, 330,6f);
			func_288(-978,2733f, -3405,031f, 12,8401f, 330,6f);
			func_288(-971,724f, -3409,109f, 12,8401f, 330,6f);
			func_288(-964,4719f, -3413,202f, 13,1463f, 330,6f);
			func_288(-1022,94f, -3392,372f, 12,8401f, 330,6f);
			func_288(-1016,219f, -3395,82f, 12,8401f, 330,6f);
			func_288(-1009,873f, -3399,143f, 12,8401f, 330,6f);
			func_288(-1003,436f, -3402,982f, 12,8401f, 330,6f);
			func_288(-997,0872f, -3406,928f, 12,8401f, 330,6f);
			func_288(-990,2305f, -3410,548f, 12,8401f, 330,6f);
			func_288(-983,4429f, -3414,093f, 12,8401f, 330,6f);
			func_288(-976,8809f, -3417,846f, 12,8401f, 330,6f);
			func_288(-969,4039f, -3421,727f, 13,1463f, 330,6f);
			func_288(-1028,251f, -3401,834f, 12,8401f, 330,6f);
			func_288(-1021,631f, -3405,433f, 12,8401f, 330,6f);
			func_288(-1015,209f, -3408,563f, 12,8401f, 330,6f);
			func_288(-1008,81f, -3412,484f, 12,8401f, 330,6f);
			func_288(-1002,277f, -3415,987f, 12,8401f, 330,6f);
			func_288(-995,7023f, -3419,97f, 12,8401f, 330,6f);
			func_288(-989,1453f, -3423,988f, 12,8401f, 330,6f);
			func_288(-982,6298f, -3427,981f, 12,8401f, 330,6f);
			func_288(-974,9305f, -3431,833f, 13,1463f, 330,6f);
			break;
		
		case 84:
			func_288(-1356,991f, -3242,228f, 12,945f, 330f);
			func_288(-1369,313f, -3234,758f, 12,945f, 330f);
			func_288(-1381,751f, -3227,408f, 12,945f, 330f);
			func_288(-1394,302f, -3220,021f, 12,945f, 330f);
			func_288(-1354,339f, -3223,129f, 12,945f, 330f);
			func_288(-1366,302f, -3215,809f, 12,945f, 330f);
			func_288(-1378,492f, -3208,645f, 12,945f, 330f);
			func_288(-1350,322f, -3203,405f, 12,945f, 330f);
			func_288(-1362,684f, -3196,451f, 12,945f, 330f);
			func_288(-1347,089f, -3182,69f, 12,945f, 330f);
			func_288(-1452,642f, -3222,367f, 12,945f, 347,799f);
			func_288(-1464,229f, -3215,108f, 12,945f, 347,799f);
			func_288(-1476,133f, -3207,652f, 12,945f, 347,799f);
			func_288(-1488,295f, -3200,033f, 12,945f, 347,799f);
			func_288(-1336,877f, -3272,344f, 12,945f, 8,199f);
			func_288(-1323,381f, -3279,614f, 12,945f, 8,199f);
			func_288(-1309,671f, -3287,749f, 12,945f, 8,199f);
			func_288(-1296,963f, -3294,511f, 12,945f, 8,199f);
			func_288(-1501,978f, -3193,849f, 12,945f, 350,599f);
			func_288(-1344,716f, -3288,333f, 12,9445f, 331,2f);
			func_288(-1338,141f, -3290,335f, 12,9445f, 331,2f);
			func_288(-1331,473f, -3294,178f, 12,9445f, 331,2f);
			func_288(-1324,921f, -3297,998f, 12,9445f, 331,2f);
			func_288(-1318,129f, -3301,957f, 12,9445f, 331,2f);
			func_288(-1350,466f, -3294,226f, 12,9445f, 331,2f);
			func_288(-1343,482f, -3297,576f, 12,9445f, 331,2f);
			func_288(-1336,398f, -3302,456f, 12,9445f, 331,2f);
			func_288(-1329,82f, -3306,82f, 12,945f, 331,2f);
			func_288(-1322,761f, -3310,353f, 12,945f, 331,2f);
			func_288(-1316,587f, -3314,556f, 12,945f, 331,2f);
			func_288(-1326,538f, -3318,499f, 12,945f, 331,2f);
			func_288(-1335,74f, -3313,678f, 12,945f, 331,2f);
			func_288(-1350,848f, -3302,619f, 12,9446f, 331,2f);
			func_288(-1357,961f, -3306,886f, 12,945f, 331,2f);
			func_288(-1335,202f, -3322,428f, 12,9452f, 331,2f);
			func_288(-1351,401f, -3311,566f, 12,9452f, 331,2f);
			func_288(-1344,255f, -3305,965f, 12,9451f, 331,2f);
			func_288(-1299,832f, -3305,573f, 12,945f, 331,2f);
			func_288(-1293,414f, -3309,413f, 12,945f, 331,2f);
			func_288(-1286,835f, -3313,157f, 12,945f, 331,2f);
			func_288(-1303,988f, -3313,1f, 12,945f, 331,2f);
			func_288(-1297,402f, -3316,699f, 12,945f, 331,2f);
			func_288(-1290,969f, -3320,519f, 12,945f, 331,2f);
			func_288(-1308,27f, -3320,612f, 12,945f, 331,2f);
			func_288(-1301,968f, -3324,714f, 12,945f, 331,2f);
			func_288(-1295,483f, -3328,422f, 12,945f, 331,2f);
			break;
		
		case 85:
			func_288(-2039,992f, 3132,191f, 31,81f, 149,399f);
			func_288(-2025,075f, 3128,63f, 31,81f, 197,599f);
			func_288(-2049,589f, 3142,464f, 31,81f, 109,199f);
			func_288(-2088,648f, 3081,327f, 31,81f, 150,599f);
			func_288(-2070,669f, 3111,575f, 31,81f, 123,399f);
			func_288(-2053,385f, 3109,703f, 31,81f, 150,599f);
			func_288(-2044,448f, 3094,012f, 31,81f, 181,799f);
			func_288(-2071,825f, 3093,477f, 31,81f, 150,599f);
			func_288(-2060,579f, 3085,924f, 31,81f, 150,599f);
			func_288(-2062,712f, 3066,073f, 31,81f, 150,599f);
			func_288(-2094,385f, 3190,445f, 31,81f, 117,799f);
			func_288(-2083,056f, 3182,885f, 31,81f, 117,799f);
			func_288(-2071,578f, 3175,554f, 31,81f, 117,799f);
			func_288(-2120,249f, 3173,97f, 31,81f, 25,199f);
			func_288(-2067,547f, 3146,325f, 31,81f, 14,998f);
			func_288(-2080,506f, 3154,591f, 31,81f, 15,798f);
			func_288(-2093,278f, 3159,793f, 31,81f, 14,798f);
			func_288(-2106,614f, 3167,605f, 31,81f, 21,198f);
			func_288(-2106,347f, 3196,902f, 31,81f, 117,799f);
			func_288(-2024,425f, 3102,707f, 31,8103f, 150,7997f);
			func_288(-2018,074f, 3099,056f, 31,8103f, 150,7997f);
			func_288(-2009,032f, 3094,171f, 31,8103f, 150,7997f);
			func_288(-2002,923f, 3090,669f, 31,8103f, 150,7997f);
			func_288(-1996,542f, 3087,201f, 31,8103f, 150,7997f);
			func_288(-1990,232f, 3083,534f, 31,8103f, 150,7997f);
			func_288(-1983,518f, 3080,033f, 31,8103f, 150,7997f);
			func_288(-2029,16f, 3094,357f, 31,8103f, 150,7997f);
			func_288(-2022,431f, 3090,703f, 31,8103f, 150,7997f);
			func_288(-2013,702f, 3086,015f, 31,8103f, 150,7997f);
			func_288(-2007,67f, 3082,42f, 31,8103f, 150,7997f);
			func_288(-2001,211f, 3078,569f, 31,8103f, 150,7997f);
			func_288(-1994,644f, 3074,654f, 31,8103f, 150,7997f);
			func_288(-1987,934f, 3070,654f, 31,8103f, 150,7997f);
			func_288(-2033,776f, 3086,031f, 31,8103f, 150,7997f);
			func_288(-2026,929f, 3082,094f, 31,8103f, 150,7997f);
			func_288(-2018,663f, 3077,341f, 31,8103f, 150,7997f);
			func_288(-2012,345f, 3073,707f, 31,8103f, 150,7997f);
			func_288(-2006,052f, 3070,089f, 31,8103f, 150,7997f);
			func_288(-1999,169f, 3066,132f, 31,8103f, 150,7997f);
			func_288(-1992,542f, 3062,257f, 31,8103f, 150,7997f);
			func_288(-2038,545f, 3077,344f, 31,8103f, 150,7997f);
			func_288(-2031,587f, 3073,344f, 31,8103f, 150,7997f);
			func_288(-2021,909f, 3067,715f, 31,8103f, 150,7997f);
			func_288(-2012,886f, 3063,219f, 31,8103f, 150,7997f);
			func_288(-2003,481f, 3057,141f, 31,8103f, 150,7997f);
			func_288(-1996,618f, 3053,195f, 31,8103f, 150,7997f);
			break;
		
		case 86:
			func_288(-1885,187f, 3095,344f, 31,81f, 150,2f);
			func_288(-1898,637f, 3072,816f, 31,811f, 150,2f);
			func_288(-1886,469f, 3065,78f, 31,811f, 150,2f);
			func_288(-1874,621f, 3058,437f, 31,81f, 150,2f);
			func_288(-1862,818f, 3051,244f, 31,81f, 150,2f);
			func_288(-1915,317f, 3041,652f, 31,811f, 150,2f);
			func_288(-1896,724f, 2997,848f, 31,81f, 150,2f);
			func_288(-1932,975f, 3011,781f, 31,81f, 150,2f);
			func_288(-1875,668f, 3034,438f, 31,811f, 150,2f);
			func_288(-1886,144f, 3016,285f, 31,81f, 150,2f);
			func_288(-1913,706f, 3104,196f, 31,81f, 118,599f);
			func_288(-1925,44f, 3112,236f, 31,81f, 118,599f);
			func_288(-1938,08f, 3119,383f, 31,81f, 118,599f);
			func_288(-1927,822f, 3072,679f, 31,81f, 13,399f);
			func_288(-1940,575f, 3079,031f, 31,81f, 13,399f);
			func_288(-1953,344f, 3084,888f, 31,81f, 13,399f);
			func_288(-1965,91f, 3091,929f, 31,81f, 13,399f);
			func_288(-1978,86f, 3100,029f, 31,81f, 13,399f);
			func_288(-1950,928f, 3126,457f, 31,81f, 118,999f);
			func_288(-1975,282f, 3083,046f, 31,8103f, 150,1997f);
			func_288(-1969,362f, 3079,909f, 31,8103f, 150,1997f);
			func_288(-1963,673f, 3076,887f, 31,8103f, 150,1997f);
			func_288(-1958,524f, 3073,899f, 31,8103f, 150,1997f);
			func_288(-1979,828f, 3074,704f, 31,8103f, 150,1997f);
			func_288(-1973,901f, 3071,418f, 31,8103f, 150,1997f);
			func_288(-1967,917f, 3068,089f, 31,8103f, 150,1997f);
			func_288(-1949,916f, 3068,72f, 31,8103f, 150,1997f);
			func_288(-1961,934f, 3064,6f, 31,8103f, 150,1997f);
			func_288(-1984,332f, 3067,03f, 31,8103f, 150,1997f);
			func_288(-1978,182f, 3063,286f, 31,8103f, 150,1997f);
			func_288(-1972,061f, 3060,191f, 31,8103f, 150,1997f);
			func_288(-1952,61f, 3059,551f, 31,8103f, 150,1997f);
			func_288(-1956,958f, 3051,589f, 31,8103f, 150,1997f);
			func_288(-1988,778f, 3059,135f, 31,8103f, 150,1997f);
			func_288(-1982,174f, 3055,591f, 31,8103f, 150,1997f);
			func_288(-1975,579f, 3051,898f, 31,8103f, 150,1997f);
			func_288(-1969,139f, 3048,28f, 31,8103f, 150,1997f);
			func_288(-1962,25f, 3044,256f, 31,8103f, 150,1997f);
			func_288(-1989,48f, 3050,467f, 31,8103f, 150,1997f);
			func_288(-1977,325f, 3043,786f, 31,8103f, 150,1997f);
			func_288(-1971,07f, 3040,306f, 31,8103f, 150,1997f);
			func_288(-1964,409f, 3037,118f, 31,8103f, 150,1997f);
			func_288(-1998,375f, 3042,349f, 31,8103f, 150,1997f);
			func_288(-1991,769f, 3038,47f, 31,8103f, 150,1997f);
			func_288(-1978,718f, 3035,164f, 31,8103f, 150,1997f);
			func_288(-1971,483f, 3031,316f, 31,8103f, 150,1997f);
			break;
		
		case 87:
			func_288(-2484,323f, 3249,294f, 31,828f, 151f);
			func_288(-2495,313f, 3255,746f, 31,828f, 151f);
			func_288(-2472,644f, 3242,684f, 31,828f, 151f);
			func_288(-2506,313f, 3262,27f, 31,823f, 151f);
			func_288(-2461,494f, 3235,93f, 31,828f, 151f);
			func_288(-2505,602f, 3238,049f, 31,828f, 151f);
			func_288(-2481,937f, 3224,8f, 31,828f, 151f);
			func_288(-2516,813f, 3244,266f, 31,823f, 151f);
			func_288(-2470,03f, 3217,899f, 31,828f, 151f);
			func_288(-2493,933f, 3231,308f, 31,828f, 151f);
			func_288(-2443,467f, 3227,753f, 31,828f, 175,8f);
			func_288(-2431,365f, 3220,9f, 31,828f, 175,8f);
			func_288(-2419,883f, 3214,708f, 31,828f, 175,8f);
			func_288(-2501,903f, 3272,865f, 31,822f, 123,999f);
			func_288(-2513,555f, 3280,176f, 31,817f, 123,999f);
			func_288(-2524,776f, 3287,276f, 31,973f, 123,999f);
			func_288(-2407,718f, 3208,055f, 31,827f, 176,199f);
			func_288(-2395,689f, 3201,125f, 31,827f, 176,199f);
			func_288(-2383,498f, 3194,211f, 31,833f, 176,199f);
			func_288(-2426,219f, 3238,211f, 31,8616f, 150,5996f);
			func_288(-2419,052f, 3233,866f, 31,8726f, 150,5996f);
			func_288(-2412,069f, 3229,854f, 31,8859f, 150,5996f);
			func_288(-2405,282f, 3225,809f, 31,8841f, 150,5996f);
			func_288(-2398,624f, 3222,135f, 31,9249f, 150,5996f);
			func_288(-2391,729f, 3218,229f, 31,9354f, 150,5996f);
			func_288(-2384,727f, 3214,524f, 31,9585f, 150,5996f);
			func_288(-2377,55f, 3210,461f, 31,9192f, 150,5996f);
			func_288(-2369,96f, 3205,835f, 31,8267f, 150,5996f);
			func_288(-2404,498f, 3235,728f, 31,8959f, 150,5996f);
			func_288(-2397,481f, 3232,375f, 31,9879f, 150,5996f);
			func_288(-2390,524f, 3228,125f, 31,9758f, 150,5996f);
			func_288(-2383,986f, 3223,995f, 31,986f, 150,5996f);
			func_288(-2377,176f, 3219,695f, 31,9615f, 150,5996f);
			func_288(-2370,524f, 3215,946f, 32,002f, 150,5996f);
			func_288(-2400,23f, 3243,846f, 31,8311f, 150,5996f);
			func_288(-2393,28f, 3240,281f, 32,0164f, 150,5996f);
			func_288(-2386,355f, 3236,819f, 32,0616f, 150,5996f);
			func_288(-2379,382f, 3232,74f, 32,0318f, 150,5996f);
			func_288(-2372,314f, 3229,196f, 32,0177f, 150,5996f);
			func_288(-2365,153f, 3225,732f, 32,0145f, 150,5996f);
			func_288(-2395,04f, 3252,644f, 31,8557f, 150,5996f);
			func_288(-2388,684f, 3249,092f, 32,0198f, 150,5996f);
			func_288(-2382,127f, 3245,045f, 32,0086f, 150,5996f);
			func_288(-2374,905f, 3240,938f, 32,0085f, 150,5996f);
			func_288(-2368,14f, 3237,328f, 32,0177f, 150,5996f);
			func_288(-2361,068f, 3233,396f, 31,9573f, 150,5996f);
			break;
		
		default:
			break;
	}
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
		case joaat("conada"):
		case joaat("conada2"):
			return 1;
		
		default:
	}
	return 0;
}

void func_275(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_288(-947,712f, -3367,704f, 12,944f, 60f);
			func_288(-904,692f, -3293,072f, 12,944f, 60f);
			func_288(-863,71f, -3221,978f, 12,944f, 60f);
			func_288(-966,418f, -3162,773f, 12,944f, 60f);
			func_288(-1007,435f, -3233,93f, 12,944f, 60f);
			func_288(-1050,455f, -3308,559f, 12,944f, 60f);
			func_288(-1145,673f, -3253,456f, 12,944f, 60f);
			func_288(-1098,386f, -3181,428f, 12,944f, 60f);
			func_288(-1060,474f, -3108,903f, 12,944f, 60f);
			func_288(-1155,391f, -3053,632f, 12,944f, 60f);
			func_288(-1196,114f, -3125,146f, 12,948f, 60f);
			func_288(-1235,552f, -3201,86f, 12,944f, 60f);
			func_288(-1344,446f, -3139,177f, 12,944f, 60f);
			func_288(-1301,308f, -3064,341f, 12,944f, 60f);
			func_288(-1260,135f, -2992,912f, 12,944f, 60f);
			func_288(-1364,244f, -2932,9f, 12,98f, 60f);
			func_288(-1405,284f, -3004,108f, 12,96f, 60f);
			func_288(-1448,29f, -3078,72f, 12,95f, 60f);
			func_288(-1535,732f, -3028,318f, 12,945f, 60f);
			func_288(-1492,639f, -2953,558f, 12,945f, 60f);
			func_288(-1451,506f, -2882,2f, 12,944f, 60f);
			func_288(-1553,927f, -2823,12f, 13,002f, 60f);
			func_288(-1595,097f, -2894,571f, 12,944f, 60f);
			func_288(-1637,836f, -2968,714f, 12,945f, 60f);
			func_288(-1740,971f, -2911,484f, 12,944f, 330f);
			func_288(-1696,293f, -2833,978f, 12,944f, 330f);
			func_288(-1651,502f, -2756,273f, 12,945f, 330f);
			func_288(-1588,258f, -2647,575f, 12,944f, 330f);
			func_288(-1536,862f, -2681,378f, 12,945f, 330f);
			func_288(-1529,025f, -2544,485f, 12,944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_288(-1970,422f, 2825,696f, 31,81f, 60,4f);
			func_288(-2033,307f, 2855,526f, 31,83f, 60,4f);
			func_288(-2091,018f, 2888,691f, 31,81f, 60,4f);
			func_288(-2206,717f, 2955,363f, 31,81f, 60,4f);
			func_288(-2268,817f, 2990,846f, 31,81f, 60,4f);
			func_288(-2324,039f, 3023,154f, 31,811f, 60,4f);
			func_288(-2435,806f, 3087,705f, 31,824f, 60,4f);
			func_288(-2543,753f, 3149,909f, 31,821f, 60,4f);
			func_288(-1944,848f, 2898,798f, 31,81f, 125,398f);
			func_288(-1978,705f, 2924,367f, 31,846f, 151,999f);
			func_288(-2064,849f, 2955,153f, 31,867f, 151,199f);
			func_288(-2106,165f, 2980,687f, 31,81f, 104,599f);
			func_288(-2302,367f, 3088,676f, 31,814f, 150,598f);
			func_288(-2152,113f, 2924,162f, 31,81f, 60,198f);
			func_288(-2488,232f, 3118,146f, 31,822f, 59,798f);
			func_288(-2277,922f, 3133,756f, 31,811f, 120,598f);
			func_288(-2604,776f, 3185,186f, 31,812f, 59,998f);
			func_288(-2608,107f, 3305,049f, 31,812f, 60,198f);
			func_288(-2718,936f, 3323,203f, 31,81f, 201,198f);
			func_288(-2658,718f, 3216,499f, 31,812f, 59,998f);
			func_288(-2380,372f, 3055,341f, 31,826f, 60,4f);
			func_288(-2790,616f, 3286,24f, 31,812f, 240,397f);
			func_288(-2770,946f, 3322,605f, 31,812f, 240,397f);
			func_288(-2678,805f, 3339,186f, 31,812f, 199,597f);
			func_288(-2743,882f, 3224,094f, 31,81f, 303,397f);
			func_288(-2701,354f, 3203,092f, 31,994f, 328,397f);
			func_288(-2249,816f, 2944,609f, 31,937f, 330,196f);
			func_288(-2586,579f, 3137,286f, 31,935f, 330,196f);
			func_288(-2134,76f, 2878,728f, 31,81f, 330,196f);
			func_288(-1949,075f, 2861,21f, 31,811f, 58,798f);
			break;
		
		default:
			break;
	}
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("alkonost"):
		case joaat("streamer216"):
		case joaat("raiju"):
			return 1;
		
		default:
	}
	return 0;
}

int func_277(int iParam0)
{
	if (func_278(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_278(int iParam0)
{
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (system::vdist(unk_0xD1A6A821F5AC81DB(iParam0, 1), -1308,118f, -2934,27f, 13,7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_279(int iParam0)
{
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	if (system::vdist(unk_0xD1A6A821F5AC81DB(iParam0, 1), -2270,245f, 3127,913f, 31,8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_280(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_281(struct<3> Param0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	fVar3 = 50f;
	fVar5 = 300f;
	iVar6 = -1;
	iVar0 = 1;
	while (iVar0 <= 131)
	{
		if (iVar2 < *uParam1)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (system::vdist(Param0.f_0, Param0.f_1, 0f, Global_1312298[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312298[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam1)[iVar2] = iVar0;
					(*uParam2)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 172)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_257(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_283(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		iVar7 = 0;
		if (iVar0 >= 162 && iVar0 <= 166)
		{
			iVar7 = func_282(iVar0, Param0, fVar3, 1);
		}
		if (iVar2 < *uParam1)
		{
			fVar4 = system::vdist(Param0.f_0, Param0.f_1, 0f, Global_1943520.f_573[iVar0 /*3*/], Global_1943520.f_573[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3 || iVar7)
			{
				if (iVar0 >= 83 && iVar0 <= 87)
				{
					if (fVar4 <= fVar5)
					{
						fVar5 = fVar4;
						if (iVar6 != -1)
						{
							(*uParam1)[iVar6] = iVar0;
						}
						else
						{
							iVar6 = iVar2;
							(*uParam1)[iVar2] = iVar0;
							(*uParam2)[iVar2] = 1;
							iVar2++;
						}
					}
				}
				else
				{
					(*uParam1)[iVar2] = iVar0;
					(*uParam2)[iVar2] = 1;
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_282(int iParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	float fVar0;
	
	if (iParam0 == -1 || func_118(iParam0) != 28)
	{
		return 0;
	}
	fVar0 = 0f;
	switch (iParam0)
	{
		case 166:
		case 162:
		case 163:
		case 165:
			fVar0 = system::vdist(Param1.f_0, Param1.f_1, 0f, Global_1943520.f_573[iParam0 /*3*/], Global_1943520.f_573[iParam0 /*3*/].f_1, 0f);
			if (fVar0 < fParam2 && (!bParam3 || (bParam3 && Param1.f_2 >= 0f)))
			{
				return 1;
			}
			break;
		
		case 164:
			if (unk_0x26715B0ED6702C87(Param1, -500f, -1664,247f, 18,34956f, -544,0528f, -1720,754f, 28,37445f, 75f, 0, 1) || unk_0x26715B0ED6702C87(Param1, -474,9512f, -1681,646f, 17,89098f, -496,4081f, -1762,774f, 27,64551f, 45f, 0, 1))
			{
				return 1;
			}
			if (!bParam3 && Param1.f_2 <= 0f)
			{
				fVar0 = system::vdist(Param1.f_0, Param1.f_1, 0f, Global_1943520.f_573[iParam0 /*3*/], Global_1943520.f_573[iParam0 /*3*/].f_1, 0f);
			}
			break;
	}
	return 0;
}

int func_283(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_284(iParam0);
	if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_304 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10;
	if (iVar1 != func_32())
	{
		if (Global_1845281[iVar1 /*883*/].f_268.f_304 == iVar0)
		{
			return 1;
		}
	}
	if (func_267() == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_284(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_285(int iParam0)
{
	if ((unk_0x78B050AFBA6D1517(iParam0) || unk_0x9910CD0D8626AA28(iParam0)) || unk_0x3801E353091A2E42(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_286(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_288(-602,6942f, 690,0488f, 148,1567f, 75,0245f);
			func_288(-612,8933f, 692,116f, 148,7577f, 79,1005f);
			func_288(-626,1633f, 694,6517f, 149,6835f, 75,1121f);
			func_288(-639,3558f, 696,9992f, 150,5134f, 77,481f);
			break;
		
		case 79:
			func_288(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			func_288(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_288(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_288(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			break;
		
		case 82:
			func_288(382,9244f, 443,8122f, 142,9934f, 78,3408f);
			func_288(391,2023f, 442,4812f, 142,5089f, 82,2125f);
			func_288(400,1477f, 441,0816f, 142,0776f, 83,4259f);
			func_288(414,2964f, 439,2628f, 141,5056f, 80,8689f);
			break;
		
		case 81:
			func_288(-1294,64f, 468,1975f, 96,4245f, 141,8551f);
			func_288(-1300,508f, 468,0167f, 96,8298f, 139,6287f);
			func_288(-1283,894f, 467,2136f, 95,4036f, 95,058f);
			func_288(-1273,584f, 454,4406f, 94,2269f, 30,8724f);
			break;
		
		case 73:
			func_288(-209,2598f, 509,0326f, 130,7979f, 97,2043f);
			func_288(-221,7214f, 507,2553f, 128,5651f, 92,2773f);
			func_288(-237,2848f, 506,8763f, 125,8112f, 85,9315f);
			func_288(-255,5678f, 507,9559f, 122,3364f, 85,1752f);
			break;
		
		case 75:
			func_288(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			func_288(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_288(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_288(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			break;
		
		case 76:
			func_288(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			func_288(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_288(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_288(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			break;
		
		case 77:
			func_288(128,4334f, 578,7522f, 182,2934f, 106,5458f);
			func_288(97,7791f, 576,8907f, 181,5599f, 91,3539f);
			func_288(83,5896f, 576,4791f, 181,0832f, 89,7262f);
			func_288(69,9599f, 575,9902f, 180,5019f, 91,4926f);
			break;
		
		case 80:
			func_288(-872,1293f, 698,7591f, 148,5084f, 339,673f);
			func_288(-916,5449f, 695,5253f, 150,5625f, 272,7097f);
			func_288(-907,3458f, 695,8158f, 150,396f, 270,6491f);
			func_288(-923,6974f, 691,4489f, 150,9506f, 357,4356f);
			break;
		
		case 87:
			if (func_287())
			{
				func_288(-1608,297f, -556,875f, 33,406f, 310f);
				func_288(-1616,095f, -563,402f, 33,049f, 309,4f);
				func_288(-1560,29f, -531,69f, 34,576f, 35,3994f);
				func_288(-1555,303f, -538,781f, 34,044f, 35,3994f);
			}
			else
			{
				func_288(-1605,148f, -552,5016f, 33,4606f, 309,4211f);
				func_288(-1616,306f, -561,6959f, 32,9867f, 309,4369f);
				func_288(-1582,681f, -534,1682f, 34,4171f, 307,8589f);
				func_288(-1619,657f, -531,5862f, 33,4254f, 128,9132f);
				func_288(-1560,257f, -532,3268f, 34,5436f, 216,0882f);
				func_288(-1553,698f, -541,3412f, 33,8662f, 215,8465f);
				func_288(-1611,769f, -601,588f, 31,2908f, 50,7362f);
				func_288(-1600,63f, -610,1141f, 30,5087f, 51,7297f);
			}
			break;
		
		case 88:
			if (func_287())
			{
				func_288(-1402,362f, -511,396f, 30,888f, 35,4f);
				func_288(-1356,617f, -531,0343f, 29,7588f, 124,9982f);
				func_288(-1407,634f, -503,839f, 31,35f, 35,4f);
				func_288(-1346,007f, -523,3546f, 30,6339f, 125,9976f);
			}
			else
			{
				func_288(-1390,604f, -528,6405f, 29,8387f, 35,4572f);
				func_288(-1357,085f, -531,4611f, 29,7218f, 125,0906f);
				func_288(-1346,236f, -523,9114f, 30,6f, 124,7302f);
				func_288(-1337,852f, -518,1096f, 31,2329f, 124,6998f);
				func_288(-1336,39f, -556,0637f, 29,7514f, 33,8088f);
				func_288(-1340,214f, -508,9828f, 31,4089f, 98,7714f);
				func_288(-1348,607f, -510,3536f, 30,9263f, 99,2425f);
				func_288(-1380,764f, -536,3867f, 29,3128f, 63,6203f);
			}
			break;
		
		case 89:
			if (func_287())
			{
				func_288(-102,737f, -597,379f, 35,053f, 160,999f);
				func_288(-97,793f, -589,568f, 35,082f, 134,799f);
				func_288(-110,357f, -619,402f, 35,055f, 160,599f);
				func_288(-112,561f, -627,723f, 35,046f, 165,399f);
			}
			else
			{
				func_288(-108,2604f, -613,6386f, 35,055f, 160,8063f);
				func_288(-103,0375f, -598,4797f, 35,0538f, 161,1968f);
				func_288(-112,84f, -629,6357f, 35,0662f, 174,9843f);
				func_288(-98,7403f, -590,3209f, 35,075f, 139,7632f);
				func_288(-98,3748f, -612,642f, 35,137f, 161,1124f);
				func_288(-92,595f, -595,4065f, 35,1888f, 161,3083f);
				func_288(-104,4742f, -630,1472f, 35,1396f, 161,184f);
				func_288(-74,1068f, -619,9417f, 35,1488f, 340,9123f);
			}
			break;
		
		case 90:
			if (func_287())
			{
				func_288(-59,349f, -779,238f, 43,134f, 228,398f);
				func_288(-41,6311f, -789,1425f, 43,1323f, 255,5993f);
				func_288(-65,212f, -772,66f, 43,151f, 219,398f);
				func_288(-33,0648f, -789,3544f, 43,1287f, 279,5989f);
			}
			else
			{
				func_288(-59,684f, -779,4568f, 43,114f, 228,7591f);
				func_288(-52,7425f, -784,7151f, 43,1134f, 237,7756f);
				func_288(-45,2736f, -788,4313f, 43,1133f, 250,2438f);
				func_288(-35,9308f, -789,8549f, 43,1167f, 271,1923f);
				func_288(-64,6911f, -762,4548f, 43,1316f, 35,6897f);
				func_288(-24,9853f, -786,8022f, 43,1163f, 297,8276f);
				func_288(-86,2083f, -739,3044f, 43,0546f, 204,9405f);
				func_288(-9,239f, -773,0505f, 43,0788f, 318,0367f);
			}
			break;
		
		case 91:
			func_288(246,5035f, -1798,749f, 26,1131f, 212,5996f);
			func_288(247,8968f, -1797,017f, 26,1131f, 212,5996f);
			func_288(249,3848f, -1795,374f, 26,1131f, 212,5996f);
			func_288(250,8498f, -1793,695f, 26,1131f, 212,5996f);
			func_288(262,9285f, -1784,205f, 26,1131f, 164,5991f);
			func_288(266,8129f, -1787,476f, 26,1131f, 164,5991f);
			func_288(264,814f, -1785,801f, 26,1131f, 164,5991f);
			func_288(269,0069f, -1789,16f, 26,1131f, 164,5991f);
			break;
		
		case 92:
			func_288(-1464,5f, -927,9f, 9f, 296,7991f);
			func_288(-1466f, -926,1f, 9f, 296,7991f);
			func_288(-1467,9f, -924,7f, 9f, 296,7991f);
			func_288(-1469,7f, -923,7f, 9f, 296,7991f);
			func_288(-1462,481f, -931,2933f, 9,1294f, 296,5982f);
			func_288(-1460,639f, -932,9284f, 9,1315f, 296,5982f);
			func_288(-1454,923f, -931,1019f, 9,0872f, 237,1973f);
			func_288(-1450,848f, -934,5874f, 8,4514f, 237,1973f);
			break;
		
		case 93:
			func_288(30,0784f, -1024,16f, 28,4469f, 234,5994f);
			func_288(29,1695f, -1026,719f, 28,4453f, 234,5994f);
			func_288(28,2538f, -1029,296f, 28,4421f, 234,5994f);
			func_288(27,3737f, -1031,767f, 28,3937f, 234,5994f);
			func_288(32,6932f, -1017,063f, 28,4531f, 234,5994f);
			func_288(33,672f, -1014,399f, 28,4552f, 234,5994f);
			func_288(37,488f, -1014,344f, 28,4781f, 175,5986f);
			func_288(39,4909f, -1015,097f, 28,484f, 175,5986f);
			break;
		
		case 94:
			func_288(45,0033f, 2784,392f, 56,8782f, 103,5999f);
			func_288(43,316f, 2785,903f, 56,8782f, 103,5999f);
			func_288(41,6126f, 2787,36f, 56,8782f, 103,5999f);
			func_288(39,9584f, 2788,773f, 56,8782f, 103,5999f);
			func_288(35,2347f, 2792,135f, 56,8781f, 208,7997f);
			func_288(33,7771f, 2790,379f, 56,8781f, 208,7997f);
			func_288(30,7578f, 2786,8f, 56,8781f, 208,7997f);
			func_288(29,3121f, 2785,045f, 56,8745f, 208,7997f);
			break;
		
		case 95:
			func_288(-332,5679f, 6069,145f, 30,2175f, 152,9999f);
			func_288(-334,2811f, 6070,787f, 30,2212f, 152,9999f);
			func_288(-335,9948f, 6072,454f, 30,2455f, 152,9999f);
			func_288(-337,675f, 6074,252f, 30,2727f, 152,9999f);
			func_288(-339,3682f, 6075,904f, 30,3074f, 152,9999f);
			func_288(-341,0913f, 6077,729f, 30,3114f, 152,9999f);
			func_288(-342,9239f, 6079,522f, 30,3122f, 152,9999f);
			func_288(-344,6985f, 6081,302f, 30,3097f, 152,9999f);
			break;
		
		case 96:
			func_288(1738,422f, 3716,779f, 33,0787f, 6,9999f);
			func_288(1736,207f, 3715,989f, 33,094f, 6,9999f);
			func_288(1748,442f, 3714,17f, 33,0889f, 39,399f);
			func_288(1750,475f, 3715,007f, 33,1067f, 39,399f);
			func_288(1747,18f, 3721,102f, 33,007f, 95,199f);
			func_288(1746,413f, 3723,255f, 32,9738f, 95,199f);
			func_288(1740,67f, 3717,613f, 33,0616f, 8,199f);
			func_288(1733,937f, 3715,08f, 33,1236f, 8,199f);
			break;
		
		case 97:
			func_288(947,9371f, -1452,737f, 30,143f, 331,5991f);
			func_288(950,2141f, -1452,826f, 30,1364f, 331,5991f);
			func_288(952,4588f, -1452,882f, 30,129f, 331,5991f);
			func_288(954,6608f, -1452,869f, 30,1303f, 331,5991f);
			func_288(935,1006f, -1452,701f, 30,1907f, 316,999f);
			func_288(932,5459f, -1452,579f, 30,2194f, 316,999f);
			func_288(929,9319f, -1452,567f, 30,2647f, 316,999f);
			func_288(927,4857f, -1452,446f, 30,3167f, 316,999f);
			break;
		
		case 98:
			func_288(186,6051f, 306,8702f, 104,389f, 162,3999f);
			func_288(184,3881f, 306,7666f, 104,3845f, 162,3999f);
			func_288(182,1681f, 306,6823f, 104,375f, 162,3999f);
			func_288(183,3219f, 296,2871f, 104,3707f, 350,7995f);
			func_288(180,9933f, 296,3411f, 104,3704f, 350,7995f);
			func_288(178,6569f, 296,4709f, 104,3701f, 350,7995f);
			func_288(195,1475f, 304,4284f, 104,4644f, 77,3989f);
			func_288(195,0814f, 301,8218f, 104,5287f, 77,3989f);
			break;
		
		case 99:
			func_288(-31,2801f, -200,3394f, 51,3551f, 5,3995f);
			func_288(-33,3895f, -199,7716f, 51,355f, 5,3995f);
			func_288(-35,4307f, -199,1125f, 51,3549f, 5,3995f);
			func_288(-37,5545f, -198,5244f, 51,3549f, 5,3995f);
			func_288(-17,9628f, -206,2525f, 51,3702f, 29,399f);
			func_288(-14,8043f, -207,5648f, 51,4707f, 29,399f);
			func_288(-11,8482f, -208,6405f, 51,5633f, 29,399f);
			func_288(-9,1304f, -209,4894f, 51,6472f, 29,399f);
			break;
		
		case 100:
			func_288(2478,52f, 4082,137f, 36,8208f, 227,5999f);
			func_288(2477,557f, 4079,946f, 36,8014f, 227,5999f);
			func_288(2465,123f, 4081,35f, 37,0655f, 167,4f);
			func_288(2463,017f, 4082,271f, 37,0653f, 167,4f);
			func_288(2467,7f, 4080,332f, 37,0649f, 167,4f);
			func_288(2469,587f, 4079,538f, 37,061f, 167,4f);
			func_288(2481,354f, 4088,553f, 36,9131f, 209,4f);
			func_288(2482,442f, 4091,023f, 36,9472f, 209,4f);
			break;
		
		case 101:
			func_288(-32,1085f, 6407,398f, 30,4903f, 291,1999f);
			func_288(-29,4917f, 6404,578f, 30,4903f, 291,1999f);
			func_288(-26,4319f, 6401,523f, 30,4903f, 291,1999f);
			func_288(-23,3427f, 6398,638f, 30,4903f, 291,1999f);
			func_288(-20,7035f, 6395,76f, 30,4885f, 291,1999f);
			func_288(-23,7283f, 6412,838f, 30,4904f, 176,5999f);
			func_288(-20,5405f, 6409,805f, 30,4905f, 176,5999f);
			func_288(-17,3045f, 6406,66f, 30,4904f, 176,5999f);
			break;
		
		case 102:
			func_288(-1138,057f, -1572,18f, 3,4157f, 125,9996f);
			func_288(-1142,03f, -1574,983f, 3,4133f, 125,9996f);
			func_288(-1145,05f, -1592,81f, 3,3855f, 306,5991f);
			func_288(-1139,933f, -1589,211f, 3,3978f, 306,5991f);
			func_288(-1124,295f, -1578,776f, 3,3854f, 306,5991f);
			func_288(-1119,954f, -1575,551f, 3,3852f, 306,5991f);
			func_288(-1124,942f, -1562,985f, 3,2916f, 168,9988f);
			func_288(-1127,039f, -1564,395f, 3,292f, 168,9988f);
			break;
		
		default:
			break;
	}
}

bool func_287()
{
	return Global_2684504.f_17;
}

void func_288(struct<3> Param0, float fParam1)
{
	if (Global_2635563.f_2054 < 101)
	{
		if (system::vmag(Param0) <= 0,01f)
		{
			return;
		}
		Global_2635563.f_2055[Global_2635563.f_2054 /*4*/] = { Param0 };
		Global_2635563.f_2055[Global_2635563.f_2054 /*4*/].f_3 = fParam1;
		Global_2635563.f_2054++;
	}
}

int func_289(struct<3> Param0)
{
	int iVar0;
	
	if (system::vdist(Global_2635563.f_3213, Param0) < Global_2635563.f_3221)
	{
		return Global_2635563.f_3216;
	}
	Global_2635563.f_3213 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2643215[iVar0 /*7*/].f_2 + Global_2643215[iVar0 /*7*/].f_3.f_2) * 0,5f);
		}
		if (func_225(Param0, &(Global_2643215[iVar0 /*7*/])))
		{
			Global_2635563.f_3216 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2635563.f_3216 = -1;
	return -1;
}

int func_290()
{
	if (BitTest(Global_4718592.f_13, 0) && !Global_2685444.f_6486)
	{
		return 0;
	}
	return 0;
}

int func_291(struct<2> Param0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam2)
		{
			if (func_257(iVar0))
			{
				fVar1 = fParam3;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam3;
		}
		fVar2 = system::vdist(Param0.f_0, Param0.f_1, 0f, Global_1943520.f_573[iVar0 /*3*/], Global_1943520.f_573[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_292()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2635563.f_3037[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_293(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2643171[iVar0 /*7*/].f_2 + Global_2643171[iVar0 /*7*/].f_3.f_2) * 0,5f);
		}
		if (func_225(Var1, &(Global_2643171[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_236(&Var1, Global_2643171[iVar0 /*7*/], Global_2643171[iVar0 /*7*/].f_3, Global_2643171[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_294(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2635563.f_515 && !Global_2635563.f_516)
	{
		if (!Global_2635563.f_45.f_317)
		{
			if (!func_298(unk_0x259BE71D8A81D4FA(), 1))
			{
				return 1;
			}
			if (!func_297(Param0, 1008981770))
			{
				if (!func_242(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_242(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_296(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_295(&(Global_2635563.f_45[iVar0 /*12*/])) };
					if (!func_242(&Var1, 0, 0, 0, 1))
					{
						if (!func_242(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_295(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0,5f, 0,5f, 0,5f);
			break;
	}
	return *uParam0;
}

int func_296(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635563.f_45[iVar0 /*12*/].f_9)
		{
			if (func_229(Param0, &(Global_2635563.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_297(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635563.f_45[iVar0 /*12*/].f_9)
		{
			if (func_229(Param0, &(Global_2635563.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_298(bool bParam0, bool bParam1)
{
	if (func_86() != 0)
	{
		return func_299(bParam0) != 0;
	}
	return func_207(bParam0, bParam1, 0);
}

int func_299(bool bParam0)
{
	if (func_689(bParam0, 0, 1))
	{
		return Global_2657971[bParam0 /*465*/].f_1;
	}
	return 0;
}

int func_300(bool bParam0)
{
	if (unk_0x15CCE8886267624F())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

void func_301()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xF40767E41852FB72(Global_2635563.f_691[iVar0]))
		{
			if (unk_0x8F76B2250AC806FA() == Global_2635563.f_691[iVar0])
			{
				if (!Global_2635563.f_687[iVar0] == -1)
				{
					if (unk_0x8256312AC2E5471D(Global_2635563.f_687[iVar0]))
					{
						unk_0x0C2A05549FF0EB55(Global_2635563.f_687[iVar0]);
						Global_2635563.f_687[iVar0] = -1;
					}
					else
					{
						Global_2635563.f_687[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2635563.f_687[iVar0] == -1)
		{
			Global_2635563.f_687[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_302()
{
	if (!Global_2635563.f_606 == 0 && unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_611) < func_300(0))
	{
		return 1;
	}
	return 0;
}

int func_303()
{
	if (unk_0x3555462DB47B7AB1())
	{
		if (!unk_0x6D231A0D52134FC1() > 7 && !unk_0x6D231A0D52134FC1() == 5)
		{
			return 0;
		}
	}
	if (Global_2635563.f_517 == unk_0x8034325BF6D6E41F())
	{
		return 0;
	}
	if (!func_305(unk_0x259BE71D8A81D4FA()) && !func_304(0))
	{
		return 0;
	}
	return 1;
}

bool func_304(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

int func_305(bool bParam0)
{
	if (!func_35(bParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, bParam0);
}

void func_306(int iParam0)
{
	if (func_47(&(Local_113.f_133), iParam0))
	{
	}
}

int func_307()
{
	func_164();
	switch (func_309())
	{
		case 0:
			func_288(func_308(), 148,7996f);
			func_288(-1053,594f, -2541,364f, 19,0804f, 149,9996f);
			func_288(-1067,801f, -2565,903f, 19,0786f, 149,7995f);
			break;
		
		case 1:
			func_288(func_308(), 319,5993f);
			func_288(-1633,602f, -982,0679f, 12,0174f, 140,1986f);
			func_288(-1621,295f, -967,3729f, 12,0176f, 140,1985f);
			break;
		
		case 2:
			func_288(func_308(), 254,1978f);
			func_288(-398,3749f, 1174,289f, 324,6416f, 279,9978f);
			func_288(-422,421f, 1181,459f, 324,6416f, 224,7975f);
			break;
		
		case 3:
			func_288(func_308(), 179,7976f);
			func_288(827,0105f, -2963,529f, 4,9008f, 179,7976f);
			func_288(827,0532f, -2992,452f, 4,903f, 179,1978f);
			break;
		
		case 4:
			func_288(func_308(), 249,3976f);
			func_288(220,4448f, -852,2534f, 29,1105f, 249,9977f);
			func_288(238,0792f, -959,2108f, 28,2027f, 160,1973f);
			break;
		
		case 5:
			func_288(func_308(), 186,5969f);
			func_288(-3200,642f, 910,3599f, 13,3531f, 246,597f);
			func_288(-3224,672f, 1084,223f, 9,7721f, 165,9965f);
			break;
		
		case 6:
			func_288(func_308(), 228,996f);
			func_288(-1885,713f, 2019,198f, 139,8078f, 165,3959f);
			func_288(-1902,797f, 2041,478f, 139,7425f, 160,9958f);
			break;
		
		case 7:
			func_288(func_308(), 120,1956f);
			func_288(1833,963f, 3656,37f, 33,2724f, 120,1956f);
			func_288(1847,383f, 3751,398f, 32,1719f, 29,9954f);
			break;
		
		case 8:
			func_288(func_308(), 5,7954f);
			func_288(1696,236f, 4729,696f, 41,2005f, 20,1947f);
			func_288(1661,13f, 4872,803f, 41,043f, 187,7946f);
			break;
		
		case 9:
			func_288(func_308(), 134,9944f);
			func_288(-139,9687f, 6440,638f, 30,3298f, 225,5942f);
			func_288(-229,6591f, 6312,966f, 30,2937f, 135,3941f);
			break;
	}
	return 0;
}

Vector3 func_308()
{
	switch (func_309())
	{
		case 0:
			return -1026,925f, -2495,26f, 19,0826f;
		
		case 1:
			return -1612,793f, -974,2093f, 12,0174f;
		
		case 2:
			return -411,0467f, 1174,991f, 324,6416f;
		
		case 3:
			return 826,9172f, -2978,489f, 4,9068f;
		
		case 4:
			return 242,5445f, -860,3193f, 28,5547f;
		
		case 5:
			return -3232,715f, 967,5353f, 12,0342f;
		
		case 6:
			return -1914,514f, 2067,441f, 139,3692f;
		
		case 7:
			return 1931,294f, 3713,554f, 31,3825f;
		
		case 8:
			return 1678,432f, 4824,156f, 41,0081f;
		
		case 9:
			return -318,2824f, 6068,81f, 30,1976f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_309()
{
	return Global_1887305[func_24() /*610*/].f_10.f_311;
}

float func_310()
{
	switch (func_5())
	{
		case 1:
			return 0f;
		
		default:
	}
	return 10f;
}

Vector3 func_311()
{
	switch (func_5())
	{
		case 1:
			return func_308();
		
		default:
	}
	return func_312();
}

Vector3 func_312()
{
	struct<3> Var0;
	
	if (func_689(func_24(), 0, 1))
	{
		Var0 = { func_177(func_24()) };
	}
	return Var0;
}

int func_313()
{
	return joaat("jubilee");
}

int func_314()
{
	if (func_5() == 0)
	{
		if (!func_20(&(Local_108.f_8), 10000, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_315()
{
	func_316(17);
}

void func_316(bool bParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_6), bParam0);
}

void func_317(int iParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	Local_108.f_19 = iParam0;
}

void func_318()
{
	struct<3> Var0;
	
	if (func_689(func_24(), 0, 1))
	{
		Var0 = { func_177(func_24()) };
	}
	Local_113.f_143 = { Var0 };
}

void func_319(bool bParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	Local_108.f_7 = bParam0;
}

void func_320()
{
	if (func_59() > 0)
	{
		func_646();
		func_636();
		func_624();
		func_606();
		func_602();
		func_599();
		func_598();
		func_591();
		func_568();
		func_562();
		func_560();
		func_555();
		func_543();
		func_336();
		func_326();
	}
	if (func_325(unk_0x30DE412C1194FCDD()) != 5 && func_59() == 5)
	{
		func_324(5);
	}
	switch (func_325(unk_0x30DE412C1194FCDD()))
	{
		case 0:
			if (func_59() > 0)
			{
				switch (func_5())
				{
					case 0:
						if (func_322())
						{
							func_321(0);
						}
						func_324(2);
						break;
					
					case 1:
						if (func_30(unk_0x259BE71D8A81D4FA()))
						{
							func_324(4);
						}
						else
						{
							func_324(2);
						}
						break;
					}
			}
			break;
		
		case 2:
			if ((func_322() && func_12()) && func_6(unk_0x4A8C381C258A124D()))
			{
				func_324(3);
			}
			break;
		
		case 3:
			if ((func_322() && func_12()) && !func_6(unk_0x4A8C381C258A124D()))
			{
				func_324(2);
			}
			break;
		
		case 4:
			break;
		
		case 5:
			break;
	}
}

void func_321(int iParam0)
{
	if (func_47(&(Local_113.f_135), iParam0))
	{
	}
}

bool func_322()
{
	return func_323(unk_0x259BE71D8A81D4FA());
}

var func_323(int iParam0)
{
	return func_31(iParam0, 16);
}

void func_324(int iParam0)
{
	Local_112[unk_0xAE032CEDCF23C6D5() /*6*/].f_1 = iParam0;
}

int func_325(int iParam0)
{
	return Local_112[iParam0 /*6*/].f_1;
}

void func_326()
{
	struct<3> Var0;
	float fVar1;
	
	if (!func_335())
	{
		return;
	}
	if ((!func_334(unk_0x30DE412C1194FCDD(), 3) && !func_16(7)) && func_332(func_8()))
	{
		Var0 = { func_308() };
		fVar1 = 0f;
		if (func_163(Var0, &Var0, &fVar1))
		{
			unk_0x5D7CD709B34C90F0(func_7(), false);
			unk_0x4285E11B28063EE0(func_7(), true, 0);
			unk_0x44C48AC14D3C09ED(func_7(), true, 0);
			unk_0x935364B4448CD584(func_7(), 0);
			unk_0xB2BD5837A8D3CEDA(func_7(), Var0, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(func_7(), fVar1);
			func_157(Var0, fVar1, func_313(), func_7());
			func_328();
			func_327(3);
		}
	}
}

void func_327(int iParam0)
{
	if (func_47(&(Local_112[unk_0xAE032CEDCF23C6D5() /*6*/].f_2), iParam0))
	{
	}
}

void func_328()
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_322())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = -1;
	iVar5 = 0;
	iVar6 = 0;
	switch (func_5())
	{
		case 0:
			Var0 = { func_331() };
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 1:
			Var0 = { func_160() };
			iVar2 = func_330(func_161());
			iVar3 = func_329(func_309());
			iVar4 = 6;
			iVar5 = 1;
			break;
	}
	if (func_12())
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(func_7(), 0) };
	}
	unk_0x0EA2F05FA7C5B9D4(iVar2, Var0.f_0, Var0.f_1, Var0.f_2, iVar3, Var1.f_0, Var1.f_1, Var1.f_2, iVar4, iVar5, iVar6);
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1128277155;
		
		case 1:
			return -1115834150;
		
		case 2:
			return -135620656;
		
		case 3:
			return -112056340;
		
		case 4:
			return -1063956049;
		
		case 5:
			return -829605638;
		
		case 6:
			return 252240118;
		
		case 7:
			return 327903191;
		
		case 8:
			return 1768450980;
		
		case 9:
			return 1978986468;
		
		default:
	}
	return -1;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 288198753;
		
		case 2:
			return 1220378990;
		
		case 3:
			return 896667476;
		
		case 4:
			return 1434879160;
		
		default:
	}
	return -1;
}

Vector3 func_331()
{
	return Local_113.f_143;
}

int func_332(var uParam0)
{
	if (unk_0xEADBDBE0422CF7E6(uParam0) || (!unk_0xB0AB1F334666E337(uParam0) && unk_0x93E08E0F531E2C35()))
	{
		if (func_333(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_333(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		unk_0x460D2A8B2C7DC7D4(uParam0);
		return unk_0xEADBDBE0422CF7E6(uParam0);
	}
	return 0;
}

bool func_334(int iParam0, int iParam1)
{
	return func_17(&(Local_112[iParam0 /*6*/].f_2), iParam1);
}

int func_335()
{
	if (func_5() != 1)
	{
		return 0;
	}
	if (func_39() != 3)
	{
		return 0;
	}
	return 1;
}

void func_336()
{
	if (!func_542())
	{
		return;
	}
	switch (func_39())
	{
		case 0:
			break;
		
		case 1:
			if (!func_334(unk_0x30DE412C1194FCDD(), 1))
			{
				unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
				unk_0xEBA229B2E0BB05E0(unk_0x4A8C381C258A124D(), func_7(), 20000, func_536(), 1073741824, 16, 0, 0);
				func_327(1);
			}
			break;
		
		case 2:
			func_354();
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 5:
			if (unk_0x15CCE8886267624F())
			{
				unk_0xF42836467278195A(0, 0, 1065353216);
				unk_0x10B228D2FDB7AF16(800);
			}
			else if (unk_0x9390801B06EE998F())
			{
				if (func_353(unk_0x4A8C381C258A124D(), func_7()) && !func_45(unk_0x4A8C381C258A124D(), joaat("script_task_leave_any_vehicle"), 1))
				{
					unk_0x092B9247AF00F5CF(unk_0x4A8C381C258A124D(), 0, 0);
				}
				else
				{
					func_342(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
					func_339(0);
					func_337();
				}
			}
			break;
	}
}

void func_337()
{
	func_338(18);
}

void func_338(bool bParam0)
{
	unk_0x8744D2E3FC95740E(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_6), iParam0);
}

void func_339(bool bParam0)
{
	if (bParam0)
	{
		if (!func_669(8))
		{
			Global_2738934.f_6958 = 1;
			func_306(8);
		}
	}
	else if (func_669(8))
	{
		Global_2738934.f_6958 = 0;
		func_340(8);
	}
}

void func_340(int iParam0)
{
	if (func_341(&(Local_113.f_133), iParam0))
	{
	}
}

int func_341(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (BitTest((*uParam0)[iVar1], bVar2))
	{
		unk_0x8744D2E3FC95740E(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

void func_342(bool bParam0, bool bParam1, int iParam2, int iParam3)
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
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x828F3FAE99DA791A())
		{
			unk_0x6FF322107B12B749(false);
		}
	}
	if (func_352())
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
		unk_0x4686BC3BFDBB5348(bParam0, bParam1, uVar0);
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
		if (!func_350())
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
		if (unk_0x762604C40829DB72(bParam0) && (unk_0x75EAB09F5E974116(bParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(bParam0), 0))
			{
				return;
			}
			iVar27 = unk_0x56E414973C2A8C0E(bParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x76CD105BCAC6EB9F())
				{
					unk_0x6E2FA5434737D22F(1);
				}
				else if (bVar14 || ((!func_76(unk_0x259BE71D8A81D4FA(), 0) && !func_211()) && !func_210(unk_0x259BE71D8A81D4FA())))
				{
					unk_0x4285E11B28063EE0(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x76CD105BCAC6EB9F() && !bVar19)
					{
						unk_0x6E2FA5434737D22F(0);
					}
					Global_2657971[bParam0 /*465*/].f_255 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_347(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_346(iVar27) && !unk_0xB431D60610E7F85F(iVar27))
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
				unk_0x2B52F77101390E6F(bParam0, 0);
				unk_0x6C4F5AA91D39455C(bParam0, 0);
				if (unk_0x4CEC77F224BCD884(iVar27) && unk_0x69CD279BFCFE278E(iVar27))
				{
					unk_0xAF8337BF5A296283(iVar27);
				}
				unk_0x9FF00EA9A61211D2(iVar27, 1);
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_345();
					func_344();
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
				Global_2657971[bParam0 /*465*/].f_256 = 0;
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
				if (!func_346(iVar27) && !unk_0xB431D60610E7F85F(iVar27))
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
					if (func_343(Global_4718592.f_185586))
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
					unk_0x2B52F77101390E6F(bParam0, 0);
				}
				else
				{
					unk_0x2B52F77101390E6F(bParam0, 1);
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
			unk_0x4686BC3BFDBB5348(bParam0, bParam1, iVar28);
		}
	}
}

bool func_343(int iParam0)
{
	return iParam0 == 17;
}

void func_344()
{
	struct<3> Var0;
	
	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { Var0 };
}

void func_345()
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
}

int func_346(int iParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(iParam0, 1))
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

void func_347(int iParam0, int iParam1, int iParam2)
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
				func_349();
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
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), true);
			}
		}
		if (func_76(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_348(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_348(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_349()
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
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), false);
		}
	}
}

int func_350()
{
	if (func_351() == 0)
	{
		return 1;
	}
	return 0;
}

int func_351()
{
	return Global_1574633.f_18;
}

int func_352()
{
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_353(int iParam0, int iParam1)
{
	if (unk_0xFC8BFE4B41177C22(iParam0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0xFC8BFE4B41177C22(iParam1) && !unk_0x1C2F771CDC87A3A5(iParam1, 0))
		{
			if (unk_0xF4244288C3EF3306(iParam0, iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_354()
{
	func_535();
	if (!func_334(unk_0x30DE412C1194FCDD(), 2))
	{
		func_534();
		if (unk_0xAE231F549813BBDF(0))
		{
			unk_0x66EFB3D6110055C4(0, 210, 1);
		}
		else
		{
			unk_0x66EFB3D6110055C4(0, 51, 1);
		}
		if (func_355())
		{
			func_327(2);
		}
	}
}

int func_355()
{
	if (!func_669(7))
	{
		if (func_416())
		{
			func_401(&(Local_113.f_861), func_415(), func_414(), func_413(), func_412(), func_411(), func_410(), func_409(), func_411(), func_408(), func_407(), func_406(), 0, 0, 0);
			func_399(&(Local_113.f_861), func_400());
			unk_0xEC73DFE5CE55E19C(func_160(), 25f, 0);
			func_396(1);
			func_306(7);
		}
	}
	else
	{
		if (Local_113.f_861.f_386)
		{
			func_357(&(Local_113.f_861), 0, 1);
		}
		if (!Local_113.f_861.f_386)
		{
			func_356(&(Local_113.f_1296));
			func_396(0);
			return 1;
		}
	}
	return 0;
}

void func_356(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0->f_1[iVar0]))
		{
			unk_0x734A9F4537A31459(&(uParam0->f_1[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_12))
	{
		unk_0x8C1F7D7A31B2A38E(&(uParam0->f_12));
	}
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		unk_0x8C1F7D7A31B2A38E(uParam0);
	}
}

void func_357(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!uParam0->f_386)
	{
		return;
	}
	if (uParam0->f_382 == 0 && !BitTest(uParam0->f_379, uParam0->f_382))
	{
		if (func_395(uParam0->f_1, 32))
		{
			unk_0xCBF07B57F6F01E05();
		}
		unk_0x61780C0351CEFAD1(0, func_395(uParam0->f_1, 4));
		if (!Global_2672855.f_3585)
		{
			func_392(1, 1, func_395(uParam0->f_1, 128), 1);
		}
		iVar0 = 0;
		if (func_395(uParam0->f_1, 8))
		{
			func_391(&iVar0, 524288);
		}
		if (func_395(uParam0->f_1, 16))
		{
			func_391(&iVar0, 1048576);
		}
		if (func_350())
		{
			func_342(unk_0x259BE71D8A81D4FA(), 0, iVar0, 0);
		}
		uParam0->f_376 = unk_0x1DD05E817C89C737();
	}
	if (uParam0->f_383 == 0 && !uParam0->f_385)
	{
		uParam0->f_384 = unk_0x1DD05E817C89C737();
		uParam0->f_385 = 1;
	}
	if (!BitTest(uParam0->f_379, uParam0->f_382))
	{
		uParam0->f_374 = unk_0x1DD05E817C89C737();
		if (!unk_0x78411E34CF90EA8C(uParam0->f_387))
		{
			if (BitTest(*uParam0, 0))
			{
				uParam0->f_387 = unk_0xBB209150C6081BBE(964613260, 1);
			}
			else
			{
				uParam0->f_387 = unk_0xBB209150C6081BBE(26379945, 1);
			}
			unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
		}
		iVar1 = uParam0->f_18[uParam0->f_382 /*36*/];
		if (uParam0->f_18[uParam0->f_382 /*36*/].f_26 > 0 && uParam0->f_18[uParam0->f_382 /*36*/].f_26 < uParam0->f_18[uParam0->f_382 /*36*/])
		{
			iVar1 = (iVar1 - uParam0->f_18[uParam0->f_382 /*36*/].f_26);
		}
		else if (uParam0->f_18[uParam0->f_382 /*36*/] < uParam0->f_18[uParam0->f_382 /*36*/].f_26)
		{
		}
		if (unk_0x78411E34CF90EA8C(uParam0->f_387))
		{
			if (BitTest(*uParam0, 0))
			{
				if (BitTest(*uParam0, 1))
				{
					uParam0->f_394 = unk_0x2EC137C692A52458(uParam0->f_427, uParam0->f_430, uParam0->f_434);
					unk_0xF9B66DAE101B699C(uParam0->f_387, uParam0->f_394, &(uParam0->f_411), &(uParam0->f_395));
					unk_0x0B0C9A0F9AAEB7F0(uParam0, 2);
				}
				else
				{
					unk_0x73D04EA6A13117B7(uParam0->f_387, &(uParam0->f_411), &(uParam0->f_395), uParam0->f_427, uParam0->f_430, uParam0->f_433, uParam0->f_434);
				}
			}
			else
			{
				unk_0xA3774254665BAA82(uParam0->f_387, uParam0->f_18[uParam0->f_382 /*36*/].f_1, uParam0->f_18[uParam0->f_382 /*36*/].f_7, uParam0->f_18[uParam0->f_382 /*36*/].f_13, 0, 1, 1, 2);
				if ((!func_52(uParam0->f_18[uParam0->f_382 /*36*/].f_4) && !func_52(uParam0->f_18[uParam0->f_382 /*36*/].f_10)) && uParam0->f_18[uParam0->f_382 /*36*/].f_14 != 0f)
				{
					unk_0xA3774254665BAA82(uParam0->f_387, uParam0->f_18[uParam0->f_382 /*36*/].f_4, uParam0->f_18[uParam0->f_382 /*36*/].f_10, uParam0->f_18[uParam0->f_382 /*36*/].f_14, iVar1, uParam0->f_18[uParam0->f_382 /*36*/].f_27, uParam0->f_18[uParam0->f_382 /*36*/].f_28, 2);
				}
				unk_0x584EE85BE0BFA70E(uParam0->f_387, 1);
				if (uParam0->f_18[uParam0->f_382 /*36*/].f_15 > 0f)
				{
					unk_0x2A09425009DAD0F5(uParam0->f_387, "Hand_shake", uParam0->f_18[uParam0->f_382 /*36*/].f_15);
				}
			}
		}
		if (uParam0->f_18[uParam0->f_382 /*36*/].f_24 > 0)
		{
			unk_0x10B228D2FDB7AF16(uParam0->f_18[uParam0->f_382 /*36*/].f_24);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_379), uParam0->f_382);
	}
	if (unk_0x78411E34CF90EA8C(uParam0->f_387))
	{
		if (uParam0->f_18[uParam0->f_382 /*36*/].f_29)
		{
			unk_0xB6387DEFC12580A6();
			unk_0x3089A583C66DAC0E(uParam0->f_387, 1);
			unk_0x75C0D0B8F3E221F1(uParam0->f_387, uParam0->f_18[uParam0->f_382 /*36*/].f_31, uParam0->f_18[uParam0->f_382 /*36*/].f_33, uParam0->f_18[uParam0->f_382 /*36*/].f_34, uParam0->f_18[uParam0->f_382 /*36*/].f_32);
			unk_0x4396EEBF487EDFB1(uParam0->f_387, uParam0->f_18[uParam0->f_382 /*36*/].f_30);
		}
		else
		{
			unk_0x3089A583C66DAC0E(uParam0->f_387, 0);
			unk_0x4396EEBF487EDFB1(uParam0->f_387, 0f);
		}
	}
	if (uParam0->f_18[uParam0->f_382 /*36*/].f_25 > 0)
	{
		if (!BitTest(uParam0->f_381, uParam0->f_382))
		{
			if (unk_0x1DD05E817C89C737() >= ((uParam0->f_374 + uParam0->f_18[uParam0->f_382 /*36*/]) - uParam0->f_18[uParam0->f_382 /*36*/].f_25))
			{
				unk_0x8F72AF14CE5AACE4(uParam0->f_18[uParam0->f_382 /*36*/].f_25);
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_381), uParam0->f_382);
			}
		}
	}
	iVar2 = uParam0->f_18[uParam0->f_382 /*36*/];
	uParam0->f_375 = (unk_0x1DD05E817C89C737() - uParam0->f_374);
	uParam0->f_377 = (unk_0x1DD05E817C89C737() - uParam0->f_376);
	if (uParam0->f_375 >= iVar2)
	{
		if (uParam0->f_382 == (uParam0->f_372 - 1))
		{
			func_359(uParam0, func_395(uParam0->f_1, 2), bParam1, bParam2, func_395(uParam0->f_1, 64), 1);
		}
		else
		{
			uParam0->f_382++;
			uParam0->f_375 = 0;
		}
	}
	if (uParam0->f_386)
	{
		if ((unk_0x1DD05E817C89C737() - uParam0->f_384) >= uParam0->f_307[uParam0->f_383 /*8*/].f_1)
		{
			if (!BitTest(uParam0->f_380, uParam0->f_383))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_380), uParam0->f_383);
				if (!unk_0xD6F9DEE4765092A9(&(uParam0->f_307[uParam0->f_383 /*8*/].f_2)))
				{
					unk_0x428C32CC68809A35(1);
					func_358(&(uParam0->f_307[uParam0->f_383 /*8*/].f_2), uParam0->f_307[uParam0->f_383 /*8*/]);
					if (uParam0->f_383 + 1 < uParam0->f_373)
					{
						uParam0->f_383++;
					}
				}
			}
		}
	}
}

void func_358(var uParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_359(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	
	if (!uParam0->f_386)
	{
		return;
	}
	if (!bParam2)
	{
		func_390(uParam0);
	}
	if (bParam3)
	{
		func_361(1, 0, bParam4, bParam5);
	}
	bVar0 = unk_0x828F3FAE99DA791A();
	if (!bParam1)
	{
		func_342(unk_0x259BE71D8A81D4FA(), 1, 524288, 0);
	}
	if (unk_0x828F3FAE99DA791A() != bVar0)
	{
		unk_0x6FF322107B12B749(bVar0);
	}
	func_360(uParam0);
	unk_0x8744D2E3FC95740E(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_535), false);
	Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_535.f_1 = 0;
}

void func_360(var uParam0)
{
	uParam0->f_379 = 0;
	uParam0->f_380 = 0;
	uParam0->f_382 = 0;
	uParam0->f_383 = 0;
	uParam0->f_386 = 0;
	uParam0->f_374 = 0;
	uParam0->f_384 = 0;
	uParam0->f_381 = 0;
	uParam0->f_385 = 0;
	uParam0->f_377 = 0;
	uParam0->f_375 = 0;
	uParam0->f_1 = 0;
}

void func_361(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_388();
	if (bParam0)
	{
		func_386(1);
		unk_0x428C32CC68809A35(1);
	}
	unk_0x406CBCEA35499884();
	func_378();
	unk_0x2F30818D75D66C5B(0);
	func_374(0, 1, 1, 0, 0, bParam2, 0);
	func_373();
	func_372(12, 0, -1);
	func_371(1);
	unk_0xD7C0EA10993D3214(0, -1);
	unk_0x37B894853929BF1A(1);
	unk_0x747786364137DC63(1);
	func_370();
	unk_0x938C85923AD6778A(1);
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (bParam3)
		{
			if (unk_0x0721B5D4CF3ACD02())
			{
				unk_0x42B4970D598C8A72(0, 0);
			}
		}
	}
	func_369(0);
	if (((((func_368() == 0 && func_367() == 0) && iParam1) && !func_210(unk_0x259BE71D8A81D4FA())) && !unk_0x787F8EE1F6FBDC6D()) && func_350())
	{
		func_342(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
	}
	Global_2672855.f_3585 = 0;
	func_362();
}

void func_362()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x76CD105BCAC6EB9F() && func_366(&Global_2748794))
	{
		if (!func_20(&Global_2748794, 3500, 1) || unk_0xCF580EB76CEC15FD(unk_0x259BE71D8A81D4FA()))
		{
			if (!func_365())
			{
				if (unk_0x15CCE8886267624F())
				{
					func_364(&Global_2748794, 1, 0);
				}
				else if (!func_76(unk_0x259BE71D8A81D4FA(), 0))
				{
					if ((unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_parachute")) != 1 && unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_parachute")) != 0) && (unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) == -1 || Global_2748864))
					{
						unk_0xA6DFB7FC64F53E33(1);
						unk_0x8DDE9E4E8A102CD9(unk_0x259BE71D8A81D4FA(), 1);
					}
					unk_0xC1DAC4DA85BB166D(unk_0x4A8C381C258A124D(), 255, 0);
				}
			}
			else
			{
				func_364(&Global_2748794, 1, 0);
			}
		}
		else
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				unk_0xC14A2FED36D0EBB9(unk_0x4A8C381C258A124D());
			}
			func_19(&Global_2748794);
		}
	}
	if (Global_2748798 > 0)
	{
		bVar0 = false;
		while (bVar0 < 32)
		{
			if (BitTest(Global_2748798, bVar0))
			{
				bVar1 = unk_0xB23E0F9B63D009A8(bVar0);
				if (func_689(bVar1, 1, 1))
				{
					func_363(bVar1);
				}
			}
			bVar0++;
		}
	}
}

void func_363(bool bParam0)
{
	if (BitTest(Global_2748798, bParam0) && unk_0x76CD105BCAC6EB9F())
	{
		if (!func_20(&(Global_2748799[bParam0 /*2*/]), 3500, 1) || unk_0xCF580EB76CEC15FD(bParam0))
		{
			if (!func_365())
			{
				if (unk_0x15CCE8886267624F())
				{
					func_364(&(Global_2748799[bParam0 /*2*/]), 1, 0);
				}
				else if (!func_76(bParam0, 0))
				{
					unk_0x8DDE9E4E8A102CD9(bParam0, 1);
					if (!unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(bParam0), 0))
					{
						unk_0xC1DAC4DA85BB166D(unk_0x56E414973C2A8C0E(bParam0), 255, 0);
					}
				}
			}
			else
			{
				func_364(&(Global_2748799[bParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(bParam0), 0))
			{
				unk_0xC14A2FED36D0EBB9(unk_0x56E414973C2A8C0E(bParam0));
			}
			func_19(&(Global_2748799[bParam0 /*2*/]));
			unk_0x8744D2E3FC95740E(&Global_2748798, bParam0);
		}
	}
}

void func_364(var uParam0, bool bParam1, bool bParam2)
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

int func_365()
{
	if (unk_0xFD216000DC314A92() || unk_0x0721B5D4CF3ACD02())
	{
		return 1;
	}
	return 0;
}

var func_366(var uParam0)
{
	return uParam0->f_1;
}

int func_367()
{
	return BitTest(Global_2684504, 7);
}

int func_368()
{
	return Global_1575083;
}

void func_369(int iParam0)
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

void func_370()
{
	Global_23692.f_5 = 0;
}

void func_371(int iParam0)
{
	Global_2738934.f_4650 = iParam0;
}

void func_372(bool bParam0, bool bParam1, int iParam2)
{
	switch (bParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1668667.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1668667.f_1046), bParam0);
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Global_1668667.f_1046), bParam0);
			}
			break;
	}
}

void func_373()
{
	func_371(1);
	func_372(4, 0, -1);
	func_372(6, 0, -1);
	func_372(7, 0, -1);
	func_372(3, 0, -1);
	func_372(1, 0, -1);
	func_372(2, 0, -1);
	func_372(11, 0, -1);
	func_372(13, 0, -1);
	func_372(14, 0, -1);
	func_372(16, 0, -1);
}

void func_374(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x6A84D4B060E73EF5(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 1);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 1);
		func_369(1);
		unk_0xC138265FD0CDEA4E();
		unk_0x5C6622EF2CEA902F();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (unk_0xE87F28FD4128D063())
			{
				unk_0x0F15249D24BC5ADA(0);
			}
			if (!func_377())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_376(1, iParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_369(0);
		unk_0xCCC82B30A1C53626();
		Global_64172 = 0;
		if (bParam1)
		{
			unk_0x714097CFC7878BD0();
		}
		unk_0xAC50C24F47D00104(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xDAA51A56DBEC0391(unk_0x259BE71D8A81D4FA(), 0);
		func_376(0, iParam3, iParam2, 0);
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((((((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_210(unk_0x259BE71D8A81D4FA())) && !func_76(unk_0x259BE71D8A81D4FA(), 0)) && !func_375()) && !bParam4) && !bParam5) && !unk_0xAD15761928FCF79C())
			{
				unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
			}
		}
		else if (((!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !func_210(unk_0x259BE71D8A81D4FA())) && !bParam4) && !bParam5)
		{
			unk_0x935364B4448CD584(unk_0x4A8C381C258A124D(), 0);
		}
		Global_79387 = 0;
	}
}

bool func_375()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

int func_376(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_377()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_378()
{
	func_379(0);
}

void func_379(bool bParam0)
{
	if (bParam0)
	{
		func_385();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_384(0))
		{
			func_380(0);
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

void func_380(int iParam0)
{
	if (func_383())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_382())
		{
			func_381(1, 1);
		}
		else
		{
			func_381(0, 0);
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
	if (!func_377())
	{
		Global_20930.f_1 = 3;
	}
}

void func_381(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_384(0))
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

bool func_382()
{
	return BitTest(Global_1956920, 5);
}

bool func_383()
{
	return BitTest(Global_1956920, 19);
}

int func_384(int iParam0)
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

void func_385()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

void func_386(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112618)
	{
		unk_0x665A7E873A6664BC(iVar0, iParam0);
		func_387(iVar0);
		iVar0++;
	}
}

void func_387(int iParam0)
{
	Global_112618[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112618[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112618[iParam0 /*28*/].f_4), "", 64);
	Global_112618[iParam0 /*28*/].f_23 = 0;
	Global_112618[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112618[iParam0 /*28*/].f_27 = 0;
	Global_112618[iParam0 /*28*/].f_20 = 0;
	Global_112618[iParam0 /*28*/].f_22 = 0;
}

void func_388()
{
	if (!Global_1574755)
	{
		return;
	}
	func_389();
}

void func_389()
{
	Global_1574755 = 0;
	StringCopy(&(Global_1574755.f_1), "", 32);
	Global_1574755.f_9 = 0;
}

void func_390(var uParam0)
{
	if (unk_0x78411E34CF90EA8C(uParam0->f_387))
	{
		if (unk_0xBC886554B5888A64(uParam0->f_387))
		{
			unk_0x4CBC5D1BC117616B(uParam0->f_387, 0);
		}
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		unk_0x584EE85BE0BFA70E(uParam0->f_387, 1);
		unk_0x85E6A1E36B5E2E4D(uParam0->f_387, 0);
	}
}

void func_391(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_392(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_394();
	func_386(1);
	unk_0x428C32CC68809A35(1);
	unk_0x406CBCEA35499884();
	func_374(1, 1, 1, 0, 0, 0, bParam2);
	func_393();
	func_372(12, 1, -1);
	func_371(0);
	if (bParam3)
	{
		unk_0xD7C0EA10993D3214(1, -1);
	}
	unk_0x37B894853929BF1A(0);
	unk_0x747786364137DC63(0);
	func_386(1);
	func_369(1);
	Global_2672855.f_3585 = 1;
	if (bParam0)
	{
		if (!unk_0x0721B5D4CF3ACD02())
		{
			unk_0x42B4970D598C8A72(1, iParam1);
		}
	}
}

void func_393()
{
	func_371(0);
	func_372(4, 1, -1);
	func_372(6, 1, -1);
	func_372(7, 1, -1);
	func_372(3, 1, -1);
	func_372(1, 1, -1);
	func_372(2, 1, -1);
	func_372(11, 1, -1);
	func_372(13, 1, -1);
	func_372(14, 1, -1);
	func_372(16, 1, -1);
}

void func_394()
{
	Global_1574755 = 1;
	StringCopy(&(Global_1574755.f_1), unk_0x1AF90EB93E0012D6(), 32);
	Global_1574755.f_9 = unk_0x70E57E9927B6BA58(&(Global_1574755.f_1));
}

bool func_395(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_396(bool bParam0)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			func_398(iVar0, &Var1, &iVar2, &iVar3);
			if (!func_52(Var1) && iVar2 != 0)
			{
				Local_113.f_1309[iVar0] = unk_0x8366ABB82B1ABC59(Var1, 1f, iVar2, 0, 0, 0);
				if (unk_0xFC8BFE4B41177C22(Local_113.f_1309[iVar0]))
				{
					unk_0x20FF02ED0F707CBC(Local_113.f_1309[iVar0], func_397(iVar3));
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xFC8BFE4B41177C22(Local_113.f_1309[iVar0]))
			{
				unk_0x20FF02ED0F707CBC(Local_113.f_1309[iVar0], func_397(3));
				Local_113.f_1309[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_397(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 0;
		
		case 0:
			return 1;
		
		default:
	}
	return 3;
}

void func_398(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0;
	*uParam3 = 3;
	switch (func_161())
	{
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1078,832f, -400,099f, 35,6866f };
					*uParam2 = joaat("prop_traffic_01b");
					*uParam3 = 0;
					break;
				
				case 1:
					*uParam1 = { -1112,352f, -389,5655f, 35,5553f };
					*uParam2 = joaat("prop_traffic_01b");
					*uParam3 = 0;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -620,2317f, -639,3665f, 30,7662f };
					*uParam2 = joaat("prop_traffic_01b");
					*uParam3 = 2;
					break;
				
				case 1:
					*uParam1 = { -649,6973f, -678,2882f, 30,4513f };
					*uParam2 = joaat("prop_traffic_01b");
					*uParam3 = 2;
					break;
				
				case 2:
					*uParam1 = { -657,0476f, -646,7035f, 30,6344f };
					*uParam2 = joaat("prop_traffic_01b");
					*uParam3 = 0;
					break;
				
				case 3:
					*uParam1 = { -617,908f, -670,8911f, 30,6263f };
					*uParam2 = joaat("prop_traffic_01b");
					*uParam3 = 0;
					break;
			}
			break;
	}
}

void func_399(var uParam0, var uParam1)
{
	if (uParam0->f_372 > 0)
	{
		if (!uParam0->f_386 && !BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_535, 0))
		{
			func_360(uParam0);
			uParam0->f_1 = uParam1;
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_535), false);
			Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_535.f_1 = unk_0x70E57E9927B6BA58(&(uParam0->f_2));
			uParam0->f_386 = 1;
		}
	}
	else
	{
		func_360(uParam0);
	}
}

int func_400()
{
	return 90;
}

void func_401(var uParam0, int iParam1, char* sParam2, struct<3> Param3, struct<3> Param4, var uParam5, struct<3> Param6, struct<3> Param7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	if (uParam0->f_372 == 8)
	{
		return;
	}
	uParam0->f_18[uParam0->f_372 /*36*/] = iParam1;
	StringCopy(&(uParam0->f_18[uParam0->f_372 /*36*/].f_16), sParam2, 32);
	uParam0->f_18[uParam0->f_372 /*36*/].f_1 = { Param3 };
	uParam0->f_18[uParam0->f_372 /*36*/].f_7 = { Param4 };
	uParam0->f_18[uParam0->f_372 /*36*/].f_13 = uParam5;
	uParam0->f_18[uParam0->f_372 /*36*/].f_4 = { Param6 };
	uParam0->f_18[uParam0->f_372 /*36*/].f_10 = { Param7 };
	uParam0->f_18[uParam0->f_372 /*36*/].f_14 = uParam8;
	uParam0->f_18[uParam0->f_372 /*36*/].f_15 = uParam9;
	uParam0->f_18[uParam0->f_372 /*36*/].f_24 = uParam10;
	uParam0->f_18[uParam0->f_372 /*36*/].f_25 = uParam11;
	uParam0->f_18[uParam0->f_372 /*36*/].f_27 = iParam12;
	uParam0->f_18[uParam0->f_372 /*36*/].f_28 = iParam13;
	uParam0->f_18[uParam0->f_372 /*36*/].f_26 = iParam14;
	uParam0->f_394 = -1;
	uParam0->f_372++;
	uParam0->f_378 = (uParam0->f_378 + iParam1);
	unk_0x8744D2E3FC95740E(uParam0, false);
	unk_0x8744D2E3FC95740E(uParam0, true);
	func_402(uParam0, (uParam0->f_372 - 1));
}

void func_402(var uParam0, int iParam1)
{
	func_403(&(uParam0->f_390), &(uParam0->f_393), uParam0->f_389, uParam0->f_372, &(uParam0->f_18), iParam1);
}

void func_403(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam5 >= 0 && iParam5 < iParam3)
	{
		if (bParam2)
		{
			(uParam4[iParam5 /*36*/])->f_1 = { func_405(uParam0, uParam1, (uParam4[iParam5 /*36*/])->f_1) };
			(uParam4[iParam5 /*36*/])->f_7.f_2 = func_404(uParam1, (uParam4[iParam5 /*36*/])->f_7.f_2);
			(uParam4[iParam5 /*36*/])->f_4 = { func_405(uParam0, uParam1, (uParam4[iParam5 /*36*/])->f_4) };
			(uParam4[iParam5 /*36*/])->f_10.f_2 = func_404(uParam1, (uParam4[iParam5 /*36*/])->f_10.f_2);
		}
	}
}

float func_404(var uParam0, float fParam1)
{
	float fVar0;
	
	fVar0 = (fParam1 + *uParam0);
	while (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	while (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

Vector3 func_405(var uParam0, var uParam1, struct<3> Param2)
{
	return unk_0xF10F2A2453AF1DFB(*uParam0, *uParam1, Param2);
}

int func_406()
{
	return system::round(800f);
}

int func_407()
{
	return system::round(800f);
}

float func_408()
{
	return 0f;
}

Vector3 func_409()
{
	switch (func_161())
	{
		case 1:
			return -0,3468f, 0f, 123,3084f;
		
		case 2:
			return -2,4184f, 0f, 3,5321f;
		
		case 3:
			return 2,9576f, 0f, 16,5467f;
		
		case 4:
			return 2,7453f, 0f, 83,1987f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_410()
{
	switch (func_161())
	{
		case 1:
			return 387,9253f, -92,0965f, 69,6932f;
		
		case 2:
			return -1072,019f, -439,7911f, 42,7951f;
		
		case 3:
			return -623,5024f, -747,2415f, 30,2106f;
		
		case 4:
			return -979,7598f, -802,8293f, 20,6507f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_411()
{
	switch (func_161())
	{
		case 1:
			return 50f;
		
		case 2:
			return 43,7377f;
		
		case 3:
			return 35,3051f;
		
		case 4:
			return 37,769f;
		
		default:
	}
	return 50f;
}

Vector3 func_412()
{
	switch (func_161())
	{
		case 1:
			return 2,791f, 0f, 133,6721f;
		
		case 2:
			return -2,4184f, 0f, 8,8612f;
		
		case 3:
			return 1,675f, 0f, 18,1662f;
		
		case 4:
			return -1,1798f, 0f, 91,2695f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_413()
{
	switch (func_161())
	{
		case 1:
			return 391,8478f, -87,0746f, 69,3953f;
		
		case 2:
			return -1067,894f, -447,6443f, 41,52f;
		
		case 3:
			return -620,9467f, -757,3182f, 28,5867f;
		
		case 4:
			return -970,7542f, -802,6863f, 20,8027f;
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_414()
{
	return "Agency SUV (warp)";
}

int func_415()
{
	return 7000;
}

int func_416()
{
	int iVar0;
	
	iVar0 = func_7();
	if (unk_0xFC8BFE4B41177C22(iVar0) && !unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		if (func_422(&iVar0, &(Local_113.f_1296), func_533()) && unk_0xFC8BFE4B41177C22(Local_113.f_1296.f_1[0]))
		{
			unk_0x44C48AC14D3C09ED(Local_113.f_1296, true, 0);
			unk_0xC7D381E526A969D3(Local_113.f_1296, 0);
			unk_0x4285E11B28063EE0(Local_113.f_1296, true, 0);
			unk_0x935364B4448CD584(Local_113.f_1296, 1);
			unk_0xB2BD5837A8D3CEDA(Local_113.f_1296, func_160(), 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(Local_113.f_1296, func_421());
			unk_0xC229299217554C78(Local_113.f_1296, 0, 0, 0);
			unk_0xD0F1DB0E50B367AD(Local_113.f_1296, 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0x1DE99C193C7EC64B(Local_113.f_1296, 1084227584);
			unk_0x5D7CD709B34C90F0(Local_113.f_1296, false);
			func_417();
			return 1;
		}
	}
	return 0;
}

void func_417()
{
	if (unk_0xFC8BFE4B41177C22(Local_113.f_1296.f_1[0]) && !unk_0x4FAFF4BCB7633475(Local_113.f_1296.f_1[0]))
	{
		unk_0xCF6CC9EA0D2EFE23(Local_113.f_1296.f_1[0], Local_113.f_1296, func_420(), func_419(), 0, unk_0x4B423FAA24E8ABF0(Local_113.f_1296), func_418(), -1f, -1f);
	}
}

int func_418()
{
	return 1076369440;
}

float func_419()
{
	return 7,5f;
}

Vector3 func_420()
{
	switch (func_161())
	{
		case 1:
			return 299,3784f, -83,9257f, 69,12186f;
		
		case 2:
			return -976,7491f, -420,7071f, 36,79263f;
		
		case 3:
			return -624,5375f, -570,2725f, 33,98444f;
		
		case 4:
			return -1053,569f, -753,4311f, 18,12809f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_421()
{
	switch (func_161())
	{
		case 1:
			return 188,5496f;
		
		case 2:
			return 119,1112f;
		
		case 3:
			return 89,7715f;
		
		case 4:
			return 161,2939f;
		
		default:
	}
	return 0f;
}

int func_422(int iParam0, var uParam1, var uParam2)
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!unk_0xFC8BFE4B41177C22(*iParam0) || unk_0x1C2F771CDC87A3A5(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFC8BFE4B41177C22(*uParam1))
	{
		if (func_532(uParam2, 1))
		{
			unk_0x5D7CD709B34C90F0(*uParam1, true);
		}
		if (!unk_0x1C2F771CDC87A3A5(*uParam1, 0))
		{
			unk_0x62C438C53BB57AFD(*uParam1, unk_0xD1A6A821F5AC81DB(*iParam0, 1), 0, 0, 1);
			unk_0xCF39804E8C88080E(*uParam1, unk_0x88124E0D60FB8D11(*iParam0, 2), 2, 1);
		}
		if (func_532(uParam2, 2))
		{
			unk_0x1DE99C193C7EC64B(*uParam1, 1084227584);
		}
		if (func_532(uParam2, 4))
		{
			if (unk_0xFC8BFE4B41177C22(uParam1->f_12) && !unk_0x1C2F771CDC87A3A5(uParam1->f_12, 0))
			{
				unk_0xF89624E52FCBE454(*uParam1, uParam1->f_12, 1065353216);
			}
		}
		return 1;
	}
	else if (func_530(uParam1, *iParam0, 10f, 20f, 15f, unk_0xCFC0C995455A6204(*iParam0), 0, 0))
	{
		if (unk_0xFC8BFE4B41177C22(*uParam1))
		{
			Var0.f_9 = 49;
			Var0.f_59 = 2;
			Var0.f_78 = -1;
			Var0.f_79 = -1;
			Var0.f_96 = -1;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_100 = -1;
			func_510(*iParam0, &Var0);
			func_68(*uParam1, &Var0, 1, 1, 0);
			func_509(*iParam0, uParam1);
			unk_0x44C48AC14D3C09ED(*uParam1, false, 0);
			unk_0x4285E11B28063EE0(*uParam1, false, 0);
			unk_0x935364B4448CD584(*uParam1, 1);
			unk_0x6BFFBDE3C98A828E(*uParam1, 0);
			iVar1 = unk_0x4B423FAA24E8ABF0(*uParam1);
			if (((((!unk_0x78B050AFBA6D1517(iVar1) && !unk_0x3801E353091A2E42(iVar1)) && !unk_0xEA4F815FDC353FEF(iVar1)) && !func_508(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
			{
				unk_0xD2F21CFC29C914AE(*uParam1, 0);
			}
			unk_0x9FFEA38DBCE391EC(*iParam0, &iVar2, &iVar3);
			if (iVar2 != 0)
			{
				unk_0xBA3C1A9AA7FD9616(*uParam1, 2);
			}
			if (iVar3 != 0)
			{
				unk_0x2F12C305B28C6C59(*uParam1, 1);
			}
			unk_0xC229299217554C78(*uParam1, 1, 1, 0);
			if (!func_532(uParam2, 32))
			{
				func_424(iParam0, uParam1, &(uParam1->f_1), func_532(uParam2, 16), func_532(uParam2, 128), func_532(uParam2, 64), !func_532(uParam2, 256), 0, 1, 1);
			}
			if (func_532(uParam2, 4))
			{
				func_423(iParam0, &(uParam1->f_12));
				if (func_532(uParam2, 8))
				{
					iVar4 = 0;
					while (iVar4 <= 7)
					{
						if (unk_0x548F6F43A7CB6F45(*uParam1, 0, 0))
						{
							unk_0xF516E954BCB89C18(*uParam1, iVar4);
						}
						iVar4++;
					}
				}
			}
			if (func_532(uParam2, 8))
			{
				iVar5 = 0;
				while (iVar5 <= 7)
				{
					if (unk_0x548F6F43A7CB6F45(*uParam1, 0, 0))
					{
						unk_0xF516E954BCB89C18(*uParam1, iVar5);
					}
					iVar5++;
				}
			}
		}
	}
	return 0;
}

int func_423(var uParam0, var uParam1)
{
	int iVar0;
	struct<101> Var1;
	
	if (!unk_0xFC8BFE4B41177C22(*uParam0))
	{
		return 0;
	}
	if (unk_0xFC8BFE4B41177C22(*uParam1))
	{
		return 1;
	}
	if (unk_0x20974C28142EB370(*uParam0, &iVar0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
		{
			if (func_530(uParam1, iVar0, 10f, 10f, 15f, unk_0xCFC0C995455A6204(iVar0), 0, 0))
			{
				if (unk_0xFC8BFE4B41177C22(*uParam1))
				{
					Var1.f_9 = 49;
					Var1.f_59 = 2;
					Var1.f_78 = -1;
					Var1.f_79 = -1;
					Var1.f_96 = -1;
					Var1.f_97 = 1;
					Var1.f_99 = 132;
					Var1.f_100 = -1;
					func_510(iVar0, &Var1);
					func_68(*uParam1, &Var1, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_424(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!unk_0xFC8BFE4B41177C22(*uParam0))
	{
		return 0;
	}
	if (!unk_0xFC8BFE4B41177C22(*uParam1))
	{
		return 0;
	}
	iVar2 = 8;
	if (bParam7)
	{
		iVar2 = -1;
	}
	iVar0 = -1;
	while (iVar0 <= iVar2)
	{
		iVar1 = iVar0 + 1;
		iVar3 = iVar0;
		if (!unk_0xC39AE5D390581AD5(*uParam0, iVar3, 0))
		{
			iVar4 = unk_0xFD5C5BBD1FE92BB7(*uParam0, iVar3, 0);
			if (unk_0xFC8BFE4B41177C22(iVar4) && (func_507(iVar4) || bParam5))
			{
				if (bParam3 && !unk_0x501EBB0523078750(iVar4))
				{
				}
				else if (!unk_0xF4244288C3EF3306(iVar4, *uParam0))
				{
				}
				else if (unk_0x9B5C1660CCDF7189(iVar4, joaat("script_task_leave_vehicle")) == 1)
				{
				}
				else
				{
					if (!unk_0xFC8BFE4B41177C22((*uParam2)[iVar1]))
					{
						func_425(uParam2[iVar1], iVar4, iParam8, bParam6, bParam9);
					}
					if (unk_0xFC8BFE4B41177C22((*uParam2)[iVar1]) && (func_507((*uParam2)[iVar1]) || bParam5))
					{
						if (!unk_0x4CEC77F224BCD884((*uParam2)[iVar1]) || !unk_0x69CD279BFCFE278E((*uParam2)[iVar1]))
						{
							if (bParam4)
							{
								return 0;
							}
						}
						iVar5 = unk_0xFD5C5BBD1FE92BB7(*uParam1, iVar3, 0);
						if (!unk_0xFC8BFE4B41177C22(iVar5))
						{
							if (func_507(*uParam1))
							{
								unk_0x5D7CD709B34C90F0((*uParam2)[iVar1], false);
								unk_0x73CAFD2038E812B3((*uParam2)[iVar1], *uParam1, iVar3);
							}
						}
						if (iVar0 == 7 && unk_0x4B423FAA24E8ABF0(*uParam0) == joaat("insurgent3"))
						{
							unk_0x3E13A302AA0F06BF(*uParam1, 5, 5, 1f);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_425(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<3> Var0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam1))
	{
		return 0;
	}
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		return 0;
	}
	*uParam0 = unk_0xEA797D2F13BCD0AA(iParam1, 0, 0, uParam2);
	if (func_507(iParam1))
	{
		unk_0x935364B4448CD584(*uParam0, 1);
		func_506(*uParam0);
		if (bParam4)
		{
			unk_0x0428AFDCAA63B06E(*uParam0, 185, 1);
		}
		if (func_440(iParam1) || func_426(iParam1))
		{
			unk_0xECF7FE1783A38672(*uParam0, 1);
		}
		else
		{
			unk_0xECF7FE1783A38672(*uParam0, 0);
			unk_0xE4E1DBF4388028C0(*uParam0, 1);
			unk_0x09397806857F5DFB(*uParam0, 0, 1);
		}
		if (bParam3)
		{
			Var0 = { unk_0xD1A6A821F5AC81DB(*uParam0, 0) };
			Var0.f_2 = (Var0.f_2 - 10f);
			unk_0xB2BD5837A8D3CEDA(*uParam0, Var0, 0, 0, 0, 1);
			unk_0x5D7CD709B34C90F0(*uParam0, true);
			unk_0x44C48AC14D3C09ED(*uParam0, false, 0);
		}
		unk_0xAF8337BF5A296283(*uParam0);
		return 1;
	}
	return 0;
}

int func_426(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = unk_0x4B423FAA24E8ABF0(iParam0);
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		iVar2 = iVar1;
		iVar4 = func_434(iParam0, iVar2);
		if (func_430(iVar5, 14, iVar4, -1))
		{
			return 1;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar3 = iVar0;
		if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
		{
			iVar4 = func_427(iParam0, iVar3);
			if (func_430(iVar5, iVar3, iVar4, -1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_427(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x4FAFF4BCB7633475(iParam0))
	{
		return -99;
	}
	iVar0 = func_429(iParam1);
	iVar1 = unk_0xC0120BBCC298EA2F(iParam0, iVar0);
	iVar2 = unk_0xD6AED6BFCC58AF7F(iParam0, iVar0);
	return func_428(iParam0, iVar1, iVar2, iParam1);
}

int func_428(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_429(iParam3);
	iVar1 = unk_0x1A4EFE92822E3123(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + unk_0x8401C77F508D70FD(iParam0, iVar0, iVar3));
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

int func_429(int iParam0)
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

int func_430(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_431(iParam0, iParam2, 14, 3);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 1) || unk_0x304A39EB177D246B(func_431(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_431(iParam0, iParam2, 1, 3);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(func_431(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_431(iParam0, iParam2, 14, 4);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 1) || unk_0x304A39EB177D246B(func_431(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_431(iParam0, iParam2, 1, 4);
						}
						return (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(func_431(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_431(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar1 = (iParam1 - func_433(iParam0));
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
		iVar4 = (iParam1 - func_432(iParam0, func_429(iParam2)));
		if (iVar4 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_79322.f_26[iParam2] && iParam1 == Global_79322[iParam2]) && Global_79322.f_13[iParam2] != 0)
		{
			return Global_79322.f_13[iParam2];
		}
		iVar5 = unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_429(iParam2));
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

int func_432(int iParam0, int iParam1)
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

int func_433(int iParam0)
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

int func_434(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x4FAFF4BCB7633475(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0xB204F40D393426B6(iParam0, iParam1, 1);
	if (iVar0 == -1)
	{
		return func_439(iParam1);
	}
	iVar1 = unk_0x0DC23FA727759F9F(iParam0, iParam1);
	return func_435(iParam0, iVar0, iVar1, iParam1);
}

int func_435(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_439(iParam3);
	}
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	iVar1 = unk_0x6B7AEB5F3D578298(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_437(unk_0x4B423FAA24E8ABF0(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_437(unk_0x4B423FAA24E8ABF0(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x4D0F04723A52D0E9(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x1D77F90D87ACD2BA(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_436(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_439(iParam3);
}

int func_436(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
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
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_437(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 12)
	{
		iVar2 = unk_0xF2DDA7CE028AB9CB(iParam3, 0);
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			unk_0x808A8ABE207631DF(iVar1, &Var0);
			if (Var0.f_1 == iParam1)
			{
				return (func_438(iParam0) + iVar1);
			}
			iVar1++;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 1, -1, -1);
		iVar3 = unk_0x289EDE99827978AD(iParam1);
		if (iVar3 != -1)
		{
			return (func_433(iParam0) + iVar3);
		}
	}
	else
	{
		unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_429(iParam2));
		iVar4 = unk_0x55FF07D3A2FE8317(iParam1);
		if (iVar4 != -1)
		{
			return (func_432(iParam0, func_429(iParam2)) + iVar4);
		}
	}
	return -99;
}

int func_438(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 53;
			break;
		
		case joaat("player_one"):
			return 47;
			break;
		
		case joaat("player_two"):
			return 48;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 26;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 28;
			break;
	}
	return -99;
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
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
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_440(int iParam0)
{
	if (!unk_0x6DBAC05AFA907A23(iParam0) && !func_441(unk_0x4B423FAA24E8ABF0(iParam0), 14, func_442(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_441(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_431(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x304A39EB177D246B(iParam3, joaat("helmet"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_431(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x304A39EB177D246B(iParam3, joaat("helmet"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_442(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_443(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_443(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_434(iParam0, iParam2);
			}
		}
		else
		{
			return func_427(iParam0, iParam1);
		}
	}
	return -99;
}

int func_443(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	
	if (unk_0x4FAFF4BCB7633475(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	Global_79172[1 /*14*/] = { func_458(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_79172[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_454(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_443(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_451(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_443(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_79172[2 /*14*/] = { func_458(iVar0, 14, iVar6, -1) };
									if (Global_79172[2 /*14*/].f_12 == iVar5)
									{
										if (func_443(iParam0, 14, iVar6))
										{
											if (!func_447(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_79172[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_427(iParam0, iVar4);
						Global_79172[2 /*14*/] = { func_458(iVar0, iVar4, iVar1, -1) };
						if (!func_447(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_79172[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (func_82(1759, Global_79169) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { func_451(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_443(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xB204F40D393426B6(iParam0, Global_79172[1 /*14*/].f_12, 1) == Global_79172[1 /*14*/].f_3 && (unk_0x0DC23FA727759F9F(iParam0, Global_79172[1 /*14*/].f_12) == Global_79172[1 /*14*/].f_4 || Global_79172[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_79172[1 /*14*/].f_12 == 0 && BitTest(Global_79172[1 /*14*/].f_6, 6)) && unk_0x304A39EB177D246B(Global_2883588, joaat("helmet"), 1)) && unk_0xCD6EB4A3CCA20602(Global_2883588) > 0)
		{
			iVar16 = unk_0xCD6EB4A3CCA20602(Global_2883588);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				unk_0x5C6B8DD2E15C6B3C(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					unk_0x7A491C9A90975007(&Var17);
					unk_0x09A485A642AEADEF(iVar13, &Var17);
					if (Var17.f_3 == unk_0xB204F40D393426B6(iParam0, Global_79172[1 /*14*/].f_12, 1) && Var17.f_4 == unk_0x0DC23FA727759F9F(iParam0, Global_79172[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_79172[1 /*14*/].f_3 == unk_0xC0120BBCC298EA2F(iParam0, func_429(iParam1)) && Global_79172[1 /*14*/].f_4 == unk_0xD6AED6BFCC58AF7F(iParam0, func_429(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_79171++;
			if (Global_79171 == 1)
			{
				if (func_446(iVar0, 11, func_427(iParam0, 11), -1))
				{
					if (func_445(iVar0, 4, iParam2, &uVar18))
					{
						return func_443(iParam0, 4, uVar18);
					}
				}
				else if (func_444(iVar0, 4, iParam2, &uVar18))
				{
					return func_443(iParam0, 4, uVar18);
				}
			}
			Global_79171 = (Global_79171 - 1);
		}
	}
	return 0;
}

int func_444(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_431(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x5A3F0A3B7ECCBD32(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x0249B53AB91BF9D0(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!unk_0x304A39EB177D246B(iVar3, joaat("dress_legs"), 0))
										{
											*uParam3 = func_437(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_445(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_431(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x5A3F0A3B7ECCBD32(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x0249B53AB91BF9D0(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (unk_0x304A39EB177D246B(iVar3, joaat("dress_legs"), 0))
										{
											*uParam3 = func_437(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_446(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_431(iParam0, iParam2, 11, 4);
						}
						return unk_0x304A39EB177D246B(iParam3, joaat("dress"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

int func_447(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_451(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_450(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_449(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_448(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_430(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_449(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_448(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_430(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_449(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_448(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_430(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_448(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_431(iParam0, iParam2, 1, 3);
					}
					if (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(iParam3, joaat("hair_shrink"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_431(iParam0, iParam2, 1, 4);
					}
					if (unk_0x304A39EB177D246B(iParam3, joaat("hat"), 0) || unk_0x304A39EB177D246B(iParam3, joaat("hair_shrink"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_449(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_431(iParam0, iParam2, 14, 3);
					}
					return unk_0x304A39EB177D246B(iParam3, joaat("glasses"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_431(iParam0, iParam2, 14, 4);
					}
					return unk_0x304A39EB177D246B(iParam3, joaat("glasses"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_450(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

struct<10> func_451(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_453(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_453(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_453(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_453(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_453(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_453(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_453(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_453(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_453(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_453(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_453(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_452(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_453(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_453(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_453(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_453(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_453(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_453(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_453(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_453(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_453(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_453(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_452(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_453(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_453(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_453(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_453(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_453(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_453(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_453(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_453(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_453(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_453(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_452(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_453(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_453(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_453(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_453(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_453(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_453(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_453(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_453(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_453(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_453(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_453(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_453(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_453(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_453(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_453(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_453(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_453(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_453(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_453(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_453(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_453(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_453(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_453(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_453(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_453(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_453(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_452(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_453(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_453(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_453(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_453(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_453(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_453(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_453(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_453(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_453(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_453(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_453(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_453(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_453(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_453(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_453(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_453(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_453(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_453(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_453(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_453(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_453(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_453(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_453(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_453(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_453(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_452(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_452(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x565B95D20273E8CD(iParam2, &Var1);
		if (!unk_0x4BFA043D318BF9AE(Var1.f_0))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0xCD4F2395AE80D510(Var1.f_1, iVar3, &Var2) && Var2.f_2 != -1)
				{
					if ((Var2.f_0 != 0 && Var2.f_0 != -1) && Var2.f_0 != joaat("0"))
					{
						(*iParam0)[Var2.f_2] = func_437(iParam1, Var2.f_0, 14, iVar0);
					}
					else if (Var2.f_1 != -1)
					{
						(*iParam0)[Var2.f_2] = Var2.f_1;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_453(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_454(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_113969.f_9088.f_99.f_58[120])
					{
						func_457(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_457(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_457(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_457(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_457(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_457(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_457(&Var1, -99, -99, Global_113969.f_2366.f_539.f_196[0], Global_113969.f_2366.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_457(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_457(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_457(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_457(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_457(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_457(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_457(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_457(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_457(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_457(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_457(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_457(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_457(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_457(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_457(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_457(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_457(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_457(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_457(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_457(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_457(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_457(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_457(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_457(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_457(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_457(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_457(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_457(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_457(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_457(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_457(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_457(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_457(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_457(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_457(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_457(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_457(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_457(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_457(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_457(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_457(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_457(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_457(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_457(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_457(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_457(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_457(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_455(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_457(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_457(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_457(&Var1, -99, -99, Global_113969.f_2366.f_539.f_196[1], Global_113969.f_2366.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_457(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_457(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_457(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_457(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_457(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_457(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_457(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_457(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_457(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_457(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_457(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_457(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_457(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_457(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_457(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_457(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_457(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_457(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_457(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_457(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_457(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_457(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_457(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_457(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_457(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_457(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_457(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_457(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_457(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_457(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_457(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_457(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_457(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_457(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_457(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_457(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_457(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_457(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_457(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_457(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_457(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_457(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_457(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_457(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_455(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_457(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_457(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_457(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_457(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_457(&Var1, -99, -99, Global_113969.f_2366.f_539.f_196[2], Global_113969.f_2366.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_457(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_457(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_457(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_457(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_457(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_457(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_457(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_457(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_457(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_457(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_457(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_457(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_457(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_457(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_457(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_457(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_457(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_457(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_457(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_457(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_457(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_457(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_457(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_457(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_457(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_457(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_457(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_457(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_457(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_457(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_457(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_457(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_457(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_457(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_457(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_457(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_457(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_457(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_457(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_457(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_457(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_457(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_457(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_455(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_457(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_457(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_457(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_457(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_457(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_457(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_457(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_457(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_457(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_457(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_457(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_457(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_457(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_457(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_457(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_457(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_457(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_457(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_457(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_457(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_457(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_457(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_457(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_457(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_457(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_457(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_455(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_457(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_457(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_457(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_457(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_457(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_457(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_457(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_457(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_457(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_457(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_457(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_457(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_457(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_457(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_457(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_457(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_457(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_457(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_457(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_457(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_457(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_457(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_457(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_457(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_457(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_457(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_457(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_457(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_455(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_455(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0xF2DDA7CE028AB9CB(iVar0, 0);
	unk_0x808A8ABE207631DF((iParam2 - iParam3), &Var1);
	if (!unk_0x4BFA043D318BF9AE(Var1.f_0))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0xABE43EB6EBE5F2F5(Var1.f_1, iVar4, &Var2))
			{
				if ((Var2.f_0 != 0 && Var2.f_0 != -1) && Var2.f_0 != joaat("0"))
				{
					if (Var2.f_2 == 10)
					{
						unk_0x15D20F88F06530A5(&Var3);
						unk_0xA5690D702773BED4(Var2.f_0, &Var3);
						if (Var2.f_0 != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var2.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_456(Var2.f_2)] = Var2.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_456(Var2.f_2)] = func_437(iParam1, Var2.f_0, func_456(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*uParam0)[func_456(Var2.f_2)] = Var2.f_1;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_456(int iParam0)
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

void func_457(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

struct<14> func_458(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_505();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_489(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_459(iParam1, iParam2, iParam3);
	}
	return Global_79172[0 /*14*/];
}

void func_459(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_488(iParam1, iParam2);
			break;
		
		case 11:
			func_487(iParam1, iParam2);
			break;
		
		case 8:
			func_482(iParam1, iParam2);
			break;
		
		case 9:
			func_481(iParam1, iParam2);
			break;
		
		case 3:
			func_480(iParam1, iParam2);
			break;
		
		case 4:
			func_479(iParam1, iParam2);
			break;
		
		case 6:
			func_478(iParam1, iParam2);
			break;
		
		case 1:
			func_477(iParam1, iParam2);
			break;
		
		case 7:
			func_476(iParam1, iParam2);
			break;
		
		case 10:
			func_475(iParam1, iParam2);
			break;
		
		case 14:
			func_474(iParam1, iParam2);
			break;
		
		case 12:
			func_473(iParam1, iParam2);
			break;
		
		case 5:
			func_472(iParam1, iParam2);
			break;
		
		case 0:
			func_470(iParam1, iParam2);
			break;
		
		case 13:
			func_460(iParam1);
			break;
	}
}

void func_460(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	switch (iParam0)
	{
		case 31:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			break;
	}
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_461(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_469(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x70E57E9927B6BA58(sParam3) != unk_0x70E57E9927B6BA58("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), false);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 5);
		}
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 6);
		if (func_468(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x304A39EB177D246B(Global_2883588, joaat("rebreather"), 0))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_466(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_466(Global_2883588, 2, 1, 1, -1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_466(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_466(Global_2883588, 2, 1, 1, -1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_466(Global_2883588, 1, 1, 1, -1))
			{
				unk_0x8744D2E3FC95740E(&(uParam0->f_6), 2);
			}
			if (!func_466(Global_2883588, 2, 1, 1, -1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
			}
		}
		if (unk_0x4BFA043D318BF9AE(Global_2883589))
		{
			unk_0x8744D2E3FC95740E(&(uParam0->f_6), true);
			unk_0x8744D2E3FC95740E(&(uParam0->f_6), false);
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), false);
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 5);
		if (func_465(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
		}
		if (func_465(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
		if (!func_465(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_468(14))
			{
				return;
			}
			uVar0 = func_82(func_464(iParam1, uParam0->f_2), Global_79169);
			if (BitTest(uVar0, uParam0->f_1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
			}
			uVar0 = func_82(func_463(iParam1, uParam0->f_2), Global_79169);
			if (BitTest(uVar0, uParam0->f_1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
			}
			if (func_462(iParam1, uParam0->f_2, &iVar1))
			{
				uVar0 = func_82(iVar1, Global_79169);
				if (!BitTest(uVar0, uParam0->f_1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), true);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam0->f_6), 2);
		}
	}
}

bool func_462(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 979;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 3:
					*uParam2 = 1430;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 10:
					*uParam2 = 1441;
					break;
				
				case 1:
					*uParam2 = 1012;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
				
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 9:
					*uParam2 = 1440;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
				
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 7:
					*uParam2 = 1444;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
				
				case 6:
					*uParam2 = 1011;
					break;
				
				case 8:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 995;
					break;
				
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}
	return *uParam2 != 979;
}

int func_463(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 3:
					return 1415;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 10:
					return 1426;
					break;
				
				case 1:
					return 960;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
				
				case 12:
					return 979;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 9:
					return 1425;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 7:
					return 1429;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				
				case 6:
					return 959;
					break;
				
				case 8:
					return 1423;
					break;
				
				case 11:
					return 943;
					break;
				
				case 14:
					return 975;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_464(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 3:
					return 1400;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 10:
					return 1411;
					break;
				
				case 1:
					return 908;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
				
				case 12:
					return 927;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				
				case 6:
					return 907;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 891;
					break;
				
				case 14:
					return 923;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

int func_465(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/][iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/][iParam3]), bParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/][iParam3], bParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3]), bParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_4[iParam3], bParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3]), bParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_8[iParam3], bParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_12[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_16[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_20[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_24[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_28[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_32[iParam3], bParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_36[iParam3], bParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_40[iParam3], bParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_44[iParam3], bParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_48[iParam3], bParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_52[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_56[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_60[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_64[iParam3], bParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3]), bParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_68[iParam3], bParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_72[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_76[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_80[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_84[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_88[iParam3], bParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3]), bParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_92[iParam3], bParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_96[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_100[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_104[iParam3], bParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3]), bParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_108[iParam3], bParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_112[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_116[iParam3], bParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_120[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_124[iParam3], bParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_128[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_132[iParam3], bParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3]), bParam4);
		}
		return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_136[iParam3], bParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_140[iParam3], bParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_144[iParam3], bParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_148[iParam3], bParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_152[iParam3], bParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_156[iParam3], bParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x8744D2E3FC95740E(&(Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3]), bParam4);
			}
			return BitTest(Global_113969.f_2366[iParam1 /*164*/].f_160[iParam3], bParam4);
		}
	}
	return 0;
}

int func_466(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_79169;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_467(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		uVar3 = func_82(iVar2, iVar0);
		return BitTest(uVar3, uVar1);
	}
	return 0;
}

bool func_467(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 14835;
	if ((bParam4 && Global_4540270) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_m_phead_15_0"):
					case joaat("dlc_mp_stunt_m_phead_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_1"):
					case joaat("dlc_mp_stunt_m_phead_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_2"):
					case joaat("dlc_mp_stunt_m_phead_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_3"):
					case joaat("dlc_mp_stunt_m_phead_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_4"):
					case joaat("dlc_mp_stunt_m_phead_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_5"):
					case joaat("dlc_mp_stunt_m_phead_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_6"):
					case joaat("dlc_mp_stunt_m_phead_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_7"):
					case joaat("dlc_mp_stunt_m_phead_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_0"):
					case joaat("dlc_mp_biker_m_special_2_0"):
					case joaat("dlc_mp_biker_m_special_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_1"):
					case joaat("dlc_mp_biker_m_special_2_1"):
					case joaat("dlc_mp_biker_m_special_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_2"):
					case joaat("dlc_mp_biker_m_special_2_2"):
					case joaat("dlc_mp_biker_m_special_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_3"):
					case joaat("dlc_mp_biker_m_special_2_3"):
					case joaat("dlc_mp_biker_m_special_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_4"):
					case joaat("dlc_mp_biker_m_special_2_4"):
					case joaat("dlc_mp_biker_m_special_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_5"):
					case joaat("dlc_mp_biker_m_special_2_5"):
					case joaat("dlc_mp_biker_m_special_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_7"):
					case joaat("dlc_mp_biker_m_special_2_7"):
					case joaat("dlc_mp_biker_m_special_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_8"):
					case joaat("dlc_mp_biker_m_special_2_8"):
					case joaat("dlc_mp_biker_m_special_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("dlc_mp_biker_m_special_0_11"):
					case joaat("dlc_mp_biker_m_special_2_11"):
					case joaat("dlc_mp_biker_m_special_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_m_phead_15_0"):
					case joaat("dlc_mp_stunt_m_phead_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_1"):
					case joaat("dlc_mp_stunt_m_phead_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_2"):
					case joaat("dlc_mp_stunt_m_phead_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_3"):
					case joaat("dlc_mp_stunt_m_phead_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_4"):
					case joaat("dlc_mp_stunt_m_phead_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_5"):
					case joaat("dlc_mp_stunt_m_phead_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_6"):
					case joaat("dlc_mp_stunt_m_phead_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_m_phead_15_7"):
					case joaat("dlc_mp_stunt_m_phead_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_f_phead_15_0"):
					case joaat("dlc_mp_stunt_f_phead_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_1"):
					case joaat("dlc_mp_stunt_f_phead_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_2"):
					case joaat("dlc_mp_stunt_f_phead_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_3"):
					case joaat("dlc_mp_stunt_f_phead_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_4"):
					case joaat("dlc_mp_stunt_f_phead_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_5"):
					case joaat("dlc_mp_stunt_f_phead_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_6"):
					case joaat("dlc_mp_stunt_f_phead_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_7"):
					case joaat("dlc_mp_stunt_f_phead_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("dlc_mp_stunt_f_phead_15_0"):
					case joaat("dlc_mp_stunt_f_phead_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_1"):
					case joaat("dlc_mp_stunt_f_phead_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_2"):
					case joaat("dlc_mp_stunt_f_phead_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_3"):
					case joaat("dlc_mp_stunt_f_phead_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_4"):
					case joaat("dlc_mp_stunt_f_phead_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_5"):
					case joaat("dlc_mp_stunt_f_phead_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_6"):
					case joaat("dlc_mp_stunt_f_phead_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("dlc_mp_stunt_f_phead_15_7"):
					case joaat("dlc_mp_stunt_f_phead_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4540270)
		{
			iVar0 = unk_0x82ADFEA98A0C26DC(iParam0);
		}
		else
		{
			iVar0 = unk_0x6F4B2AB7CFB2F472(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x82ADFEA98A0C26DC(iParam0);
	}
	else
	{
		iVar0 = unk_0x6F4B2AB7CFB2F472(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1761;
					break;
				
				case 1:
					*uParam2 = 1762;
					break;
				
				case 2:
					*uParam2 = 1763;
					break;
				
				case 3:
					*uParam2 = 1764;
					break;
				
				case 4:
					*uParam2 = 1765;
					break;
				
				case 5:
					*uParam2 = 1766;
					break;
				
				case 6:
					*uParam2 = 1773;
					break;
				
				case 7:
					*uParam2 = 1774;
					break;
				
				case 8:
					*uParam2 = 1775;
					break;
				
				case 9:
					*uParam2 = 1776;
					break;
				
				case 10:
					*uParam2 = 1777;
					break;
				
				case 11:
					*uParam2 = 1778;
					break;
				
				case 12:
					*uParam2 = 1779;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2391;
					break;
				
				case 38:
					*uParam2 = 2392;
					break;
				
				case 39:
					*uParam2 = 2393;
					break;
				
				case 40:
					*uParam2 = 2394;
					break;
				
				case 41:
					*uParam2 = 2453;
					break;
				
				case 42:
					*uParam2 = 2454;
					break;
				
				case 43:
					*uParam2 = 2455;
					break;
				
				case 44:
					*uParam2 = 2456;
					break;
				
				case 45:
					*uParam2 = 2457;
					break;
				
				case 46:
					*uParam2 = 2458;
					break;
				
				case 47:
					*uParam2 = 2459;
					break;
				
				case 48:
					*uParam2 = 2460;
					break;
				
				case 49:
					*uParam2 = 2461;
					break;
				
				case 50:
					*uParam2 = 2462;
					break;
				
				case 51:
					*uParam2 = 2592;
					break;
				
				case 52:
					*uParam2 = 2593;
					break;
				
				case 53:
					*uParam2 = 2594;
					break;
				
				case 54:
					*uParam2 = 2595;
					break;
				
				case 55:
					*uParam2 = 2596;
					break;
				
				case 56:
					*uParam2 = 2597;
					break;
				
				case 57:
					*uParam2 = 2598;
					break;
				
				case 58:
					*uParam2 = 2599;
					break;
				
				case 59:
					*uParam2 = 2600;
					break;
				
				case 60:
					*uParam2 = 2601;
					break;
				
				case 61:
					*uParam2 = 2602;
					break;
				
				case 62:
					*uParam2 = 3199;
					break;
				
				case 63:
					*uParam2 = 3200;
					break;
				
				case 64:
					*uParam2 = 3201;
					break;
				
				case 65:
					*uParam2 = 3202;
					break;
				
				case 66:
					*uParam2 = 3203;
					break;
				
				case 67:
					*uParam2 = 3204;
					break;
				
				case 68:
					*uParam2 = 3672;
					break;
				
				case 69:
					*uParam2 = 3673;
					break;
				
				case 70:
					*uParam2 = 3674;
					break;
				
				case 71:
					*uParam2 = 3675;
					break;
				
				case 72:
					*uParam2 = 3676;
					break;
				
				case 73:
					*uParam2 = 3677;
					break;
				
				case 74:
					*uParam2 = 3678;
					break;
				
				case 75:
					*uParam2 = 3679;
					break;
				
				case 76:
					*uParam2 = 3680;
					break;
				
				case 77:
					*uParam2 = 3681;
					break;
				
				case 78:
					*uParam2 = 3795;
					break;
				
				case 79:
					*uParam2 = 3796;
					break;
				
				case 80:
					*uParam2 = 3797;
					break;
				
				case 81:
					*uParam2 = 3798;
					break;
				
				case 82:
					*uParam2 = 3799;
					break;
				
				case 83:
					*uParam2 = 3800;
					break;
				
				case 84:
					*uParam2 = 3801;
					break;
				
				case 85:
					*uParam2 = 3802;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5340;
					break;
				
				case 90:
					*uParam2 = 5341;
					break;
				
				case 91:
					*uParam2 = 5342;
					break;
				
				case 92:
					*uParam2 = 5343;
					break;
				
				case 93:
					*uParam2 = 5344;
					break;
				
				case 94:
					*uParam2 = 5345;
					break;
				
				case 95:
					*uParam2 = 5346;
					break;
				
				case 96:
					*uParam2 = 5347;
					break;
				
				case 97:
					*uParam2 = 5348;
					break;
				
				case 98:
					*uParam2 = 5349;
					break;
				
				case 99:
					*uParam2 = 5350;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5351;
					break;
				
				case 101:
					*uParam2 = 5397;
					break;
				
				case 102:
					*uParam2 = 5398;
					break;
				
				case 103:
					*uParam2 = 5399;
					break;
				
				case 104:
					*uParam2 = 5400;
					break;
				
				case 105:
					*uParam2 = 5401;
					break;
				
				case 106:
					*uParam2 = 5402;
					break;
				
				case 107:
					*uParam2 = 5403;
					break;
				
				case 108:
					*uParam2 = 5404;
					break;
				
				case 109:
					*uParam2 = 5405;
					break;
				
				case 110:
					*uParam2 = 5406;
					break;
				
				case 111:
					*uParam2 = 5407;
					break;
				
				case 112:
					*uParam2 = 5408;
					break;
				
				case 113:
					*uParam2 = 5409;
					break;
				
				case 114:
					*uParam2 = 5410;
					break;
				
				case 115:
					*uParam2 = 5411;
					break;
				
				case 116:
					*uParam2 = 5412;
					break;
				
				case 117:
					*uParam2 = 5413;
					break;
				
				case 118:
					*uParam2 = 5414;
					break;
				
				case 119:
					*uParam2 = 5415;
					break;
				
				case 120:
					*uParam2 = 5416;
					break;
				
				case 121:
					*uParam2 = 5417;
					break;
				
				case 122:
					*uParam2 = 5418;
					break;
				
				case 123:
					*uParam2 = 5419;
					break;
				
				case 124:
					*uParam2 = 6125;
					break;
				
				case 125:
					*uParam2 = 6126;
					break;
				
				case 126:
					*uParam2 = 6127;
					break;
				
				case 127:
					*uParam2 = 6128;
					break;
				
				case 128:
					*uParam2 = 6129;
					break;
				
				case 129:
					*uParam2 = 6130;
					break;
				
				case 130:
					*uParam2 = 6131;
					break;
				
				case 131:
					*uParam2 = 6132;
					break;
				
				case 132:
					*uParam2 = 6133;
					break;
				
				case 133:
					*uParam2 = 6134;
					break;
				
				case 134:
					*uParam2 = 6135;
					break;
				
				case 135:
					*uParam2 = 6136;
					break;
				
				case 136:
					*uParam2 = 6137;
					break;
				
				case 137:
					*uParam2 = 6138;
					break;
				
				case 138:
					*uParam2 = 6139;
					break;
				
				case 139:
					*uParam2 = 6438;
					break;
				
				case 140:
					*uParam2 = 6439;
					break;
				
				case 141:
					*uParam2 = 6440;
					break;
				
				case 142:
					*uParam2 = 6441;
					break;
				
				case 143:
					*uParam2 = 6442;
					break;
				
				case 144:
					*uParam2 = 6443;
					break;
				
				case 145:
					*uParam2 = 6444;
					break;
				
				case 146:
					*uParam2 = 6445;
					break;
				
				case 147:
					*uParam2 = 6446;
					break;
				
				case 148:
					*uParam2 = 6447;
					break;
				
				case 149:
					*uParam2 = 6448;
					break;
				
				case 150:
					*uParam2 = 6449;
					break;
				
				case 151:
					*uParam2 = 6450;
					break;
				
				case 152:
					*uParam2 = 6451;
					break;
				
				case 153:
					*uParam2 = 6452;
					break;
				
				case 154:
					*uParam2 = 7269;
					break;
				
				case 155:
					*uParam2 = 7270;
					break;
				
				case 156:
					*uParam2 = 7271;
					break;
				
				case 157:
					*uParam2 = 7272;
					break;
				
				case 158:
					*uParam2 = 7273;
					break;
				
				case 159:
					*uParam2 = 7274;
					break;
				
				case 160:
					*uParam2 = 7275;
					break;
				
				case 161:
					*uParam2 = 7882;
					break;
				
				case 162:
					*uParam2 = 7883;
					break;
				
				case 163:
					*uParam2 = 7884;
					break;
				
				case 164:
					*uParam2 = 7885;
					break;
				
				case 165:
					*uParam2 = 7886;
					break;
				
				case 166:
					*uParam2 = 7887;
					break;
				
				case 167:
					*uParam2 = 7888;
					break;
				
				case 168:
					*uParam2 = 7889;
					break;
				
				case 169:
					*uParam2 = 7890;
					break;
				
				case 170:
					*uParam2 = 7891;
					break;
				
				case 171:
					*uParam2 = 7892;
					break;
				
				case 172:
					*uParam2 = 7893;
					break;
				
				case 173:
					*uParam2 = 7894;
					break;
				
				case 174:
					*uParam2 = 7895;
					break;
				
				case 175:
					*uParam2 = 7896;
					break;
				
				case 176:
					*uParam2 = 8302;
					break;
				
				case 177:
					*uParam2 = 8303;
					break;
				
				case 178:
					*uParam2 = 8304;
					break;
				
				case 179:
					*uParam2 = 8305;
					break;
				
				case 180:
					*uParam2 = 8306;
					break;
				
				case 181:
					*uParam2 = 8307;
					break;
				
				case 182:
					*uParam2 = 8308;
					break;
				
				case 183:
					*uParam2 = 8309;
					break;
				
				case 184:
					*uParam2 = 8310;
					break;
				
				case 185:
					*uParam2 = 8311;
					break;
				
				case 186:
					*uParam2 = 8312;
					break;
				
				case 187:
					*uParam2 = 8313;
					break;
				
				case 188:
					*uParam2 = 8314;
					break;
				
				case 189:
					*uParam2 = 8315;
					break;
				
				case 190:
					*uParam2 = 8316;
					break;
				
				case 191:
					*uParam2 = 8317;
					break;
				
				case 192:
					*uParam2 = 8318;
					break;
				
				case 193:
					*uParam2 = 8319;
					break;
				
				case 194:
					*uParam2 = 8320;
					break;
				
				case 195:
					*uParam2 = 8321;
					break;
				
				case 196:
					*uParam2 = 8322;
					break;
				
				case 197:
					*uParam2 = 8323;
					break;
				
				case 198:
					*uParam2 = 8324;
					break;
				
				case 199:
					*uParam2 = 8325;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8326;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9424;
					break;
				
				case 207:
					*uParam2 = 9425;
					break;
				
				case 208:
					*uParam2 = 9426;
					break;
				
				case 209:
					*uParam2 = 9427;
					break;
				
				case 210:
					*uParam2 = 9428;
					break;
				
				case 211:
					*uParam2 = 9429;
					break;
				
				case 212:
					*uParam2 = 9430;
					break;
				
				case 213:
					*uParam2 = 9431;
					break;
				
				case 214:
					*uParam2 = 9432;
					break;
				
				case 215:
					*uParam2 = 9433;
					break;
				
				case 216:
					*uParam2 = 9434;
					break;
				
				case 217:
					*uParam2 = 9435;
					break;
				
				case 218:
					*uParam2 = 9436;
					break;
				
				case 219:
					*uParam2 = 9437;
					break;
				
				case 220:
					*uParam2 = 9438;
					break;
				
				case 221:
					*uParam2 = 9439;
					break;
				
				case 222:
					*uParam2 = 9440;
					break;
				
				case 223:
					*uParam2 = 9441;
					break;
				
				case 224:
					*uParam2 = 9442;
					break;
				
				case 225:
					*uParam2 = 9443;
					break;
				
				case 226:
					*uParam2 = 9444;
					break;
				
				case 227:
					*uParam2 = 9445;
					break;
				
				case 228:
					*uParam2 = 9446;
					break;
				
				case 229:
					*uParam2 = 9447;
					break;
				
				case 230:
					*uParam2 = 9448;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10304;
					break;
				
				case 232:
					*uParam2 = 10305;
					break;
				
				case 233:
					*uParam2 = 10306;
					break;
				
				case 234:
					*uParam2 = 10307;
					break;
				
				case 235:
					*uParam2 = 10308;
					break;
				
				case 236:
					*uParam2 = 10309;
					break;
				
				case 237:
					*uParam2 = 10310;
					break;
				
				case 238:
					*uParam2 = 10311;
					break;
				
				case 239:
					*uParam2 = 10312;
					break;
				
				case 240:
					*uParam2 = 10313;
					break;
				
				case 241:
					*uParam2 = 10314;
					break;
				
				case 242:
					*uParam2 = 10315;
					break;
				
				case 243:
					*uParam2 = 10316;
					break;
				
				case 244:
					*uParam2 = 10317;
					break;
				
				case 245:
					*uParam2 = 10318;
					break;
				
				case 246:
					*uParam2 = 10319;
					break;
				
				case 247:
					*uParam2 = 10320;
					break;
				
				case 248:
					*uParam2 = 10321;
					break;
				
				case 249:
					*uParam2 = 10322;
					break;
				
				case 250:
					*uParam2 = 10323;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10420;
					break;
				
				case 252:
					*uParam2 = 10421;
					break;
				
				case 253:
					*uParam2 = 10422;
					break;
				
				case 254:
					*uParam2 = 10423;
					break;
				
				case 255:
					*uParam2 = 10424;
					break;
				
				case 256:
					*uParam2 = 10425;
					break;
				
				case 257:
					*uParam2 = 10426;
					break;
				
				case 258:
					*uParam2 = 10427;
					break;
				
				case 259:
					*uParam2 = 10428;
					break;
				
				case 260:
					*uParam2 = 10429;
					break;
				
				case 261:
					*uParam2 = 11847;
					break;
				
				case 262:
					*uParam2 = 11848;
					break;
				
				case 263:
					*uParam2 = 11849;
					break;
				
				case 264:
					*uParam2 = 11850;
					break;
				
				case 265:
					*uParam2 = 11851;
					break;
				
				case 266:
					*uParam2 = 11852;
					break;
				
				case 267:
					*uParam2 = 11853;
					break;
				
				case 268:
					*uParam2 = 11854;
					break;
				
				case 269:
					*uParam2 = 11855;
					break;
				
				case 270:
					*uParam2 = 11856;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11878;
					break;
				
				case 272:
					*uParam2 = 11879;
					break;
				
				case 273:
					*uParam2 = 11880;
					break;
				
				case 274:
					*uParam2 = 11881;
					break;
				
				case 275:
					*uParam2 = 11882;
					break;
				
				case 276:
					*uParam2 = 11883;
					break;
				
				case 277:
					*uParam2 = 11884;
					break;
				
				case 278:
					*uParam2 = 11885;
					break;
				
				case 279:
					*uParam2 = 11886;
					break;
				
				case 280:
					*uParam2 = 11887;
					break;
				
				case 281:
					*uParam2 = 11888;
					break;
				
				case 282:
					*uParam2 = 11889;
					break;
				
				case 283:
					*uParam2 = 11976;
					break;
				
				case 284:
					*uParam2 = 11977;
					break;
				
				case 285:
					*uParam2 = 11978;
					break;
				
				case 286:
					*uParam2 = 11979;
					break;
				
				case 287:
					*uParam2 = 11980;
					break;
				
				case 288:
					*uParam2 = 11981;
					break;
				
				case 289:
					*uParam2 = 11982;
					break;
				
				case 290:
					*uParam2 = 11983;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 291:
					*uParam2 = 11984;
					break;
				
				case 292:
					*uParam2 = 11985;
					break;
				
				case 293:
					*uParam2 = 11986;
					break;
				
				case 294:
					*uParam2 = 11987;
					break;
				
				case 295:
					*uParam2 = 11988;
					break;
				
				case 296:
					*uParam2 = 11989;
					break;
				
				case 297:
					*uParam2 = 11990;
					break;
				
				case 298:
					*uParam2 = 12190;
					break;
				
				case 299:
					*uParam2 = 12191;
					break;
				
				case 300:
					*uParam2 = 12192;
					break;
				
				case 301:
					*uParam2 = 12193;
					break;
				
				case 302:
					*uParam2 = 12194;
					break;
				
				case 303:
					*uParam2 = 12195;
					break;
				
				case 304:
					*uParam2 = 12196;
					break;
				
				case 305:
					*uParam2 = 12197;
					break;
				
				case 306:
					*uParam2 = 12332;
					break;
				
				case 307:
					*uParam2 = 12333;
					break;
				
				case 308:
					*uParam2 = 12334;
					break;
				
				case 309:
					*uParam2 = 12335;
					break;
				
				case 310:
					*uParam2 = 12336;
					break;
			}
			break;
		
		case 2:
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1767;
					break;
				
				case 1:
					*uParam2 = 1768;
					break;
				
				case 2:
					*uParam2 = 1769;
					break;
				
				case 3:
					*uParam2 = 1770;
					break;
				
				case 4:
					*uParam2 = 1771;
					break;
				
				case 5:
					*uParam2 = 1772;
					break;
				
				case 6:
					*uParam2 = 1780;
					break;
				
				case 7:
					*uParam2 = 1781;
					break;
				
				case 8:
					*uParam2 = 1782;
					break;
				
				case 9:
					*uParam2 = 1783;
					break;
				
				case 10:
					*uParam2 = 1784;
					break;
				
				case 11:
					*uParam2 = 1785;
					break;
				
				case 12:
					*uParam2 = 1786;
					break;
				
				case 13:
					*uParam2 = 1789;
					break;
				
				case 14:
					*uParam2 = 1790;
					break;
				
				case 15:
					*uParam2 = 1891;
					break;
				
				case 16:
					*uParam2 = 1892;
					break;
				
				case 17:
					*uParam2 = 1922;
					break;
				
				case 18:
					*uParam2 = 1940;
					break;
				
				case 19:
					*uParam2 = 1941;
					break;
				
				case 20:
					*uParam2 = 1942;
					break;
				
				case 21:
					*uParam2 = 1943;
					break;
				
				case 22:
					*uParam2 = 1944;
					break;
				
				case 23:
					*uParam2 = 2045;
					break;
				
				case 24:
					*uParam2 = 2046;
					break;
				
				case 25:
					*uParam2 = 2080;
					break;
				
				case 26:
					*uParam2 = 2081;
					break;
				
				case 27:
					*uParam2 = 2082;
					break;
				
				case 28:
					*uParam2 = 2083;
					break;
				
				case 29:
					*uParam2 = 2084;
					break;
				
				case 30:
					*uParam2 = 2085;
					break;
				
				case 31:
					*uParam2 = 2086;
					break;
				
				case 32:
					*uParam2 = 2087;
					break;
				
				case 33:
					*uParam2 = 2088;
					break;
				
				case 34:
					*uParam2 = 2089;
					break;
				
				case 35:
					*uParam2 = 2328;
					break;
				
				case 36:
					*uParam2 = 2329;
					break;
				
				case 37:
					*uParam2 = 2395;
					break;
				
				case 38:
					*uParam2 = 2396;
					break;
				
				case 39:
					*uParam2 = 2397;
					break;
				
				case 40:
					*uParam2 = 2398;
					break;
				
				case 41:
					*uParam2 = 2463;
					break;
				
				case 42:
					*uParam2 = 2464;
					break;
				
				case 43:
					*uParam2 = 2465;
					break;
				
				case 44:
					*uParam2 = 2466;
					break;
				
				case 45:
					*uParam2 = 2467;
					break;
				
				case 46:
					*uParam2 = 2468;
					break;
				
				case 47:
					*uParam2 = 2469;
					break;
				
				case 48:
					*uParam2 = 2470;
					break;
				
				case 49:
					*uParam2 = 2471;
					break;
				
				case 50:
					*uParam2 = 2472;
					break;
				
				case 51:
					*uParam2 = 2603;
					break;
				
				case 52:
					*uParam2 = 2604;
					break;
				
				case 53:
					*uParam2 = 2605;
					break;
				
				case 54:
					*uParam2 = 2606;
					break;
				
				case 55:
					*uParam2 = 2607;
					break;
				
				case 56:
					*uParam2 = 2608;
					break;
				
				case 57:
					*uParam2 = 2609;
					break;
				
				case 58:
					*uParam2 = 2610;
					break;
				
				case 59:
					*uParam2 = 2611;
					break;
				
				case 60:
					*uParam2 = 2612;
					break;
				
				case 61:
					*uParam2 = 2613;
					break;
				
				case 62:
					*uParam2 = 3205;
					break;
				
				case 63:
					*uParam2 = 3206;
					break;
				
				case 64:
					*uParam2 = 3207;
					break;
				
				case 65:
					*uParam2 = 3208;
					break;
				
				case 66:
					*uParam2 = 3209;
					break;
				
				case 67:
					*uParam2 = 3210;
					break;
				
				case 68:
					*uParam2 = 3682;
					break;
				
				case 69:
					*uParam2 = 3683;
					break;
				
				case 70:
					*uParam2 = 3684;
					break;
				
				case 71:
					*uParam2 = 3685;
					break;
				
				case 72:
					*uParam2 = 3686;
					break;
				
				case 73:
					*uParam2 = 3687;
					break;
				
				case 74:
					*uParam2 = 3688;
					break;
				
				case 75:
					*uParam2 = 3689;
					break;
				
				case 76:
					*uParam2 = 3690;
					break;
				
				case 77:
					*uParam2 = 3691;
					break;
				
				case 78:
					*uParam2 = 3803;
					break;
				
				case 79:
					*uParam2 = 3804;
					break;
				
				case 80:
					*uParam2 = 3805;
					break;
				
				case 81:
					*uParam2 = 3806;
					break;
				
				case 82:
					*uParam2 = 3807;
					break;
				
				case 83:
					*uParam2 = 3808;
					break;
				
				case 84:
					*uParam2 = 3809;
					break;
				
				case 85:
					*uParam2 = 3810;
					break;
				
				case 86:
					*uParam2 = 3908;
					break;
				
				case 87:
					*uParam2 = 3909;
					break;
				
				case 88:
					*uParam2 = 3910;
					break;
				
				case 89:
					*uParam2 = 5352;
					break;
				
				case 90:
					*uParam2 = 5353;
					break;
				
				case 91:
					*uParam2 = 5354;
					break;
				
				case 92:
					*uParam2 = 5355;
					break;
				
				case 93:
					*uParam2 = 5356;
					break;
				
				case 94:
					*uParam2 = 5357;
					break;
				
				case 95:
					*uParam2 = 5358;
					break;
				
				case 96:
					*uParam2 = 5359;
					break;
				
				case 97:
					*uParam2 = 5360;
					break;
				
				case 98:
					*uParam2 = 5361;
					break;
				
				case 99:
					*uParam2 = 5362;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5363;
					break;
				
				case 101:
					*uParam2 = 5420;
					break;
				
				case 102:
					*uParam2 = 5421;
					break;
				
				case 103:
					*uParam2 = 5422;
					break;
				
				case 104:
					*uParam2 = 5423;
					break;
				
				case 105:
					*uParam2 = 5424;
					break;
				
				case 106:
					*uParam2 = 5425;
					break;
				
				case 107:
					*uParam2 = 5426;
					break;
				
				case 108:
					*uParam2 = 5427;
					break;
				
				case 109:
					*uParam2 = 5428;
					break;
				
				case 110:
					*uParam2 = 5429;
					break;
				
				case 111:
					*uParam2 = 5430;
					break;
				
				case 112:
					*uParam2 = 5431;
					break;
				
				case 113:
					*uParam2 = 5432;
					break;
				
				case 114:
					*uParam2 = 5433;
					break;
				
				case 115:
					*uParam2 = 5434;
					break;
				
				case 116:
					*uParam2 = 5435;
					break;
				
				case 117:
					*uParam2 = 5436;
					break;
				
				case 118:
					*uParam2 = 5437;
					break;
				
				case 119:
					*uParam2 = 5438;
					break;
				
				case 120:
					*uParam2 = 5439;
					break;
				
				case 121:
					*uParam2 = 5440;
					break;
				
				case 122:
					*uParam2 = 5441;
					break;
				
				case 123:
					*uParam2 = 5442;
					break;
				
				case 124:
					*uParam2 = 6140;
					break;
				
				case 125:
					*uParam2 = 6141;
					break;
				
				case 126:
					*uParam2 = 6142;
					break;
				
				case 127:
					*uParam2 = 6143;
					break;
				
				case 128:
					*uParam2 = 6144;
					break;
				
				case 129:
					*uParam2 = 6145;
					break;
				
				case 130:
					*uParam2 = 6146;
					break;
				
				case 131:
					*uParam2 = 6147;
					break;
				
				case 132:
					*uParam2 = 6148;
					break;
				
				case 133:
					*uParam2 = 6149;
					break;
				
				case 134:
					*uParam2 = 6150;
					break;
				
				case 135:
					*uParam2 = 6151;
					break;
				
				case 136:
					*uParam2 = 6152;
					break;
				
				case 137:
					*uParam2 = 6153;
					break;
				
				case 138:
					*uParam2 = 6154;
					break;
				
				case 139:
					*uParam2 = 6453;
					break;
				
				case 140:
					*uParam2 = 6454;
					break;
				
				case 141:
					*uParam2 = 6455;
					break;
				
				case 142:
					*uParam2 = 6456;
					break;
				
				case 143:
					*uParam2 = 6457;
					break;
				
				case 144:
					*uParam2 = 6458;
					break;
				
				case 145:
					*uParam2 = 6459;
					break;
				
				case 146:
					*uParam2 = 6460;
					break;
				
				case 147:
					*uParam2 = 6461;
					break;
				
				case 148:
					*uParam2 = 6462;
					break;
				
				case 149:
					*uParam2 = 6463;
					break;
				
				case 150:
					*uParam2 = 6464;
					break;
				
				case 151:
					*uParam2 = 6465;
					break;
				
				case 152:
					*uParam2 = 6466;
					break;
				
				case 153:
					*uParam2 = 6467;
					break;
				
				case 154:
					*uParam2 = 7276;
					break;
				
				case 155:
					*uParam2 = 7277;
					break;
				
				case 156:
					*uParam2 = 7278;
					break;
				
				case 157:
					*uParam2 = 7279;
					break;
				
				case 158:
					*uParam2 = 7280;
					break;
				
				case 159:
					*uParam2 = 7281;
					break;
				
				case 160:
					*uParam2 = 7282;
					break;
				
				case 161:
					*uParam2 = 7897;
					break;
				
				case 162:
					*uParam2 = 7898;
					break;
				
				case 163:
					*uParam2 = 7899;
					break;
				
				case 164:
					*uParam2 = 7900;
					break;
				
				case 165:
					*uParam2 = 7901;
					break;
				
				case 166:
					*uParam2 = 7902;
					break;
				
				case 167:
					*uParam2 = 7903;
					break;
				
				case 168:
					*uParam2 = 7904;
					break;
				
				case 169:
					*uParam2 = 7905;
					break;
				
				case 170:
					*uParam2 = 7906;
					break;
				
				case 171:
					*uParam2 = 7907;
					break;
				
				case 172:
					*uParam2 = 7908;
					break;
				
				case 173:
					*uParam2 = 7909;
					break;
				
				case 174:
					*uParam2 = 7910;
					break;
				
				case 175:
					*uParam2 = 7911;
					break;
				
				case 176:
					*uParam2 = 8327;
					break;
				
				case 177:
					*uParam2 = 8328;
					break;
				
				case 178:
					*uParam2 = 8329;
					break;
				
				case 179:
					*uParam2 = 8330;
					break;
				
				case 180:
					*uParam2 = 8331;
					break;
				
				case 181:
					*uParam2 = 8332;
					break;
				
				case 182:
					*uParam2 = 8333;
					break;
				
				case 183:
					*uParam2 = 8334;
					break;
				
				case 184:
					*uParam2 = 8335;
					break;
				
				case 185:
					*uParam2 = 8336;
					break;
				
				case 186:
					*uParam2 = 8337;
					break;
				
				case 187:
					*uParam2 = 8338;
					break;
				
				case 188:
					*uParam2 = 8339;
					break;
				
				case 189:
					*uParam2 = 8340;
					break;
				
				case 190:
					*uParam2 = 8341;
					break;
				
				case 191:
					*uParam2 = 8342;
					break;
				
				case 192:
					*uParam2 = 8343;
					break;
				
				case 193:
					*uParam2 = 8344;
					break;
				
				case 194:
					*uParam2 = 8345;
					break;
				
				case 195:
					*uParam2 = 8346;
					break;
				
				case 196:
					*uParam2 = 8347;
					break;
				
				case 197:
					*uParam2 = 8348;
					break;
				
				case 198:
					*uParam2 = 8349;
					break;
				
				case 199:
					*uParam2 = 8350;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8351;
					break;
				
				case 201:
					*uParam2 = 8946;
					break;
				
				case 202:
					*uParam2 = 8947;
					break;
				
				case 203:
					*uParam2 = 8948;
					break;
				
				case 204:
					*uParam2 = 8949;
					break;
				
				case 205:
					*uParam2 = 8950;
					break;
				
				case 206:
					*uParam2 = 9449;
					break;
				
				case 207:
					*uParam2 = 9450;
					break;
				
				case 208:
					*uParam2 = 9451;
					break;
				
				case 209:
					*uParam2 = 9452;
					break;
				
				case 210:
					*uParam2 = 9453;
					break;
				
				case 211:
					*uParam2 = 9454;
					break;
				
				case 212:
					*uParam2 = 9455;
					break;
				
				case 213:
					*uParam2 = 9456;
					break;
				
				case 214:
					*uParam2 = 9457;
					break;
				
				case 215:
					*uParam2 = 9458;
					break;
				
				case 216:
					*uParam2 = 9459;
					break;
				
				case 217:
					*uParam2 = 9460;
					break;
				
				case 218:
					*uParam2 = 9461;
					break;
				
				case 219:
					*uParam2 = 9462;
					break;
				
				case 220:
					*uParam2 = 9463;
					break;
				
				case 221:
					*uParam2 = 9464;
					break;
				
				case 222:
					*uParam2 = 9465;
					break;
				
				case 223:
					*uParam2 = 9466;
					break;
				
				case 224:
					*uParam2 = 9467;
					break;
				
				case 225:
					*uParam2 = 9468;
					break;
				
				case 226:
					*uParam2 = 9469;
					break;
				
				case 227:
					*uParam2 = 9470;
					break;
				
				case 228:
					*uParam2 = 9471;
					break;
				
				case 229:
					*uParam2 = 9472;
					break;
				
				case 230:
					*uParam2 = 9473;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 231:
					*uParam2 = 10324;
					break;
				
				case 232:
					*uParam2 = 10325;
					break;
				
				case 233:
					*uParam2 = 10326;
					break;
				
				case 234:
					*uParam2 = 10327;
					break;
				
				case 235:
					*uParam2 = 10328;
					break;
				
				case 236:
					*uParam2 = 10329;
					break;
				
				case 237:
					*uParam2 = 10330;
					break;
				
				case 238:
					*uParam2 = 10331;
					break;
				
				case 239:
					*uParam2 = 10332;
					break;
				
				case 240:
					*uParam2 = 10333;
					break;
				
				case 241:
					*uParam2 = 10334;
					break;
				
				case 242:
					*uParam2 = 10335;
					break;
				
				case 243:
					*uParam2 = 10336;
					break;
				
				case 244:
					*uParam2 = 10337;
					break;
				
				case 245:
					*uParam2 = 10338;
					break;
				
				case 246:
					*uParam2 = 10339;
					break;
				
				case 247:
					*uParam2 = 10340;
					break;
				
				case 248:
					*uParam2 = 10341;
					break;
				
				case 249:
					*uParam2 = 10342;
					break;
				
				case 250:
					*uParam2 = 10343;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 251:
					*uParam2 = 10430;
					break;
				
				case 252:
					*uParam2 = 10431;
					break;
				
				case 253:
					*uParam2 = 10432;
					break;
				
				case 254:
					*uParam2 = 10433;
					break;
				
				case 255:
					*uParam2 = 10434;
					break;
				
				case 256:
					*uParam2 = 10435;
					break;
				
				case 257:
					*uParam2 = 10436;
					break;
				
				case 258:
					*uParam2 = 10437;
					break;
				
				case 259:
					*uParam2 = 10438;
					break;
				
				case 260:
					*uParam2 = 10439;
					break;
				
				case 261:
					*uParam2 = 11857;
					break;
				
				case 262:
					*uParam2 = 11858;
					break;
				
				case 263:
					*uParam2 = 11859;
					break;
				
				case 264:
					*uParam2 = 11860;
					break;
				
				case 265:
					*uParam2 = 11861;
					break;
				
				case 266:
					*uParam2 = 11862;
					break;
				
				case 267:
					*uParam2 = 11863;
					break;
				
				case 268:
					*uParam2 = 11864;
					break;
				
				case 269:
					*uParam2 = 11865;
					break;
				
				case 270:
					*uParam2 = 11866;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 271:
					*uParam2 = 11890;
					break;
				
				case 272:
					*uParam2 = 11891;
					break;
				
				case 273:
					*uParam2 = 11892;
					break;
				
				case 274:
					*uParam2 = 11893;
					break;
				
				case 275:
					*uParam2 = 11894;
					break;
				
				case 276:
					*uParam2 = 11895;
					break;
				
				case 277:
					*uParam2 = 11896;
					break;
				
				case 278:
					*uParam2 = 11897;
					break;
				
				case 279:
					*uParam2 = 11898;
					break;
				
				case 280:
					*uParam2 = 11899;
					break;
				
				case 281:
					*uParam2 = 11900;
					break;
				
				case 282:
					*uParam2 = 11901;
					break;
				
				case 283:
					*uParam2 = 11991;
					break;
				
				case 284:
					*uParam2 = 11992;
					break;
				
				case 285:
					*uParam2 = 11993;
					break;
				
				case 286:
					*uParam2 = 11994;
					break;
				
				case 287:
					*uParam2 = 11995;
					break;
				
				case 288:
					*uParam2 = 11996;
					break;
				
				case 289:
					*uParam2 = 11997;
					break;
				
				case 290:
					*uParam2 = 11998;
					break;
			}
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 291:
					*uParam2 = 11999;
					break;
				
				case 292:
					*uParam2 = 12000;
					break;
				
				case 293:
					*uParam2 = 12001;
					break;
				
				case 294:
					*uParam2 = 12002;
					break;
				
				case 295:
					*uParam2 = 12003;
					break;
				
				case 296:
					*uParam2 = 12004;
					break;
				
				case 297:
					*uParam2 = 12005;
					break;
				
				case 298:
					*uParam2 = 12198;
					break;
				
				case 299:
					*uParam2 = 12199;
					break;
				
				case 300:
					*uParam2 = 12200;
					break;
				
				case 301:
					*uParam2 = 12201;
					break;
				
				case 302:
					*uParam2 = 12202;
					break;
				
				case 303:
					*uParam2 = 12203;
					break;
				
				case 304:
					*uParam2 = 12204;
					break;
				
				case 305:
					*uParam2 = 12205;
					break;
				
				case 306:
					*uParam2 = 12337;
					break;
				
				case 307:
					*uParam2 = 12338;
					break;
				
				case 308:
					*uParam2 = 12339;
					break;
				
				case 309:
					*uParam2 = 12340;
					break;
				
				case 310:
					*uParam2 = 12341;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 14835;
}

bool func_468(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_469(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
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
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_470(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	Global_79172[0 /*14*/].f_5 = 4;
	func_471(iVar0, iParam0, 0, iParam1);
}

void func_471(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<10> Var9;
	int iVar10;
	int iVar11;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_79172[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar3 = (iParam1 - iParam2);
		if (iVar3 >= 0)
		{
			iVar4 = unk_0xF2DDA7CE028AB9CB(uVar1, 0);
			if (iVar4 > iVar3)
			{
				unk_0x808A8ABE207631DF(iVar3, &Var2);
				Global_2883588 = Var2.f_1;
				Global_2883589 = Var2.f_0;
				func_461(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_461(&(Global_79172[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x7A491C9A90975007(&Var5);
		iVar7 = (iParam1 - iParam2);
		if (iVar7 >= 0)
		{
			iVar8 = unk_0x7B6C0A0D604E68FA(iVar1, 10, -1, 1, -1, -1);
			if (iVar8 > iVar7)
			{
				unk_0x2DBB2D25D50A5392(iVar7, &Var5);
				if (Var5.f_6 == 0)
				{
					iVar6 = 9;
				}
				else if (Var5.f_6 == 1)
				{
					iVar6 = 10;
				}
				else if (Var5.f_6 == 2)
				{
					iVar6 = 2;
				}
				else if (Var5.f_6 == 3)
				{
					iVar6 = 3;
				}
				else if (Var5.f_6 == 4)
				{
					iVar6 = 4;
				}
				else if (Var5.f_6 == 5)
				{
					iVar6 = 5;
				}
				else if (Var5.f_6 == 6)
				{
					iVar6 = 6;
				}
				else if (Var5.f_6 == 7)
				{
					iVar6 = 7;
				}
				else if (Var5.f_6 == 8)
				{
					iVar6 = 8;
				}
				else
				{
					iVar6 = -1;
				}
				Global_2883588 = Var5.f_1;
				Global_2883589 = Var5.f_0;
				func_461(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var5.f_9), Var5.f_3, Var5.f_4, Var5.f_5, unk_0x304A39EB177D246B(Var5.f_1, joaat("outfit_only"), 0), iVar6, 2, Var5.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0x15D20F88F06530A5(&Var9);
		if (iParam3 != -1 && Global_79370)
		{
			unk_0xA5690D702773BED4(iParam3, &Var9);
			Global_2883588 = Var9.f_1;
			Global_2883589 = Var9.f_0;
			func_461(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x304A39EB177D246B(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 != 0);
			return;
		}
		iVar10 = (iParam1 - iParam2);
		if (iVar10 >= 0)
		{
			iVar11 = unk_0x7B6C0A0D604E68FA(iVar1, 10, -1, 0, -1, func_429(iParam0));
			if (iVar11 > iVar10)
			{
				unk_0xD36906FE7BBBDB62(iVar10, &Var9);
				Global_2883588 = Var9.f_1;
				Global_2883589 = Var9.f_0;
				func_461(&(Global_79172[0 /*14*/]), iParam0, iParam1, &(Var9.f_9), Var9.f_3, Var9.f_4, Var9.f_5, unk_0x304A39EB177D246B(Var9.f_1, joaat("outfit_only"), 0), -1, 2, Var9.f_1 != 0);
				return;
			}
		}
	}
}

void func_472(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 4;
			func_471(iVar7, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_473(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 4;
			func_471(iVar7, iParam0, 28, iParam1);
			return;
			break;
	}
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_474(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	iVar8 = 0;
	switch (iParam0)
	{
		case 0:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 235;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 5000;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 400;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 375;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 325;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 255;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 360;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 3970;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1355;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 230;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 515;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 545;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 1440;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 50;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 575;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 605;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 285;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 2125;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 295;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 855;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1615;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 1130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 165;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 390;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 395;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 425;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 600;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 590;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 555;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 1060;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 1400;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 1315;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 1230;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 1145;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 8450;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 675;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 8750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 975;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 865;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 890;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 730;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 650;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 645;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 755;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 13850;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 2900;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 2895;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 12500;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 15000;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 14750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 13150;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 2925;
			iVar5 = 0;
			iVar8 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 970;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 595;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 545;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 590;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1125;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 740;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 805;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 6250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 3585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 4075;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 4935;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 5600;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 4790;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 2245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 210;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 1205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 2215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 2835;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 2450;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 2515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 5000;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 2820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 2435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 2500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 4815;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 4795;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 4965;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 480;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 465;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4320;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 2390;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 2005;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 2070;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 70;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 570;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 525;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 4275;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 3660;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 4165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 3670;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 3620;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 3610;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 4140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 1490;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 1105;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 1170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 825;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
	}
	if (iVar8 == 1)
	{
		iVar9 = (iParam0 - 10);
		if (iVar9 >= 0 && iVar9 < 121)
		{
			if (iVar9 > 8)
			{
				iVar9 = (iVar9 - 1);
			}
			iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_2039[iVar9]) * Global_298067.f_20));
		}
	}
	else if (iVar8 == 2)
	{
		iVar10 = (iParam0 - 131);
		if (iVar10 >= 0 && iVar10 < 24)
		{
			iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_2160[iVar10]) * Global_298067.f_21));
		}
	}
	else if (iVar8 == 3)
	{
		iVar11 = (iParam0 - 155);
		if (iVar11 >= 0 && iVar11 < 128)
		{
			iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_2185[iVar11]) * Global_298067.f_44));
		}
	}
	else if (iVar8 == 4)
	{
		iVar12 = (iParam0 - 319);
		if (iVar12 >= 0 && iVar12 < 10)
		{
			iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_2314[iVar12]) * Global_298067.f_22));
		}
	}
	if (iParam0 >= 327)
	{
		Global_79172[0 /*14*/].f_5 = 4;
		func_471(iVar7, iParam0, 327, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			if (unk_0x304A39EB177D246B(Global_2883588, joaat("hat"), 1))
			{
				Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_20));
			}
			else if (unk_0x304A39EB177D246B(Global_2883588, joaat("glasses"), 1))
			{
				Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_44));
			}
			else if (unk_0x304A39EB177D246B(Global_2883588, joaat("watch"), 1))
			{
				Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_22));
			}
		}
	}
	else
	{
		func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_475(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 4;
			func_471(iVar7, iParam0, 6, iParam1);
			return;
			break;
	}
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_476(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			if (Global_262145.f_3853 != -1)
			{
				iVar1 = Global_262145.f_3853;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			if (Global_262145.f_3854 != -1)
			{
				iVar1 = Global_262145.f_3854;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			if (Global_262145.f_3855 != -1)
			{
				iVar1 = Global_262145.f_3855;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			if (Global_262145.f_3856 != -1)
			{
				iVar1 = Global_262145.f_3856;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			if (Global_262145.f_3857 != -1)
			{
				iVar1 = Global_262145.f_3857;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			if (Global_262145.f_3858 != -1)
			{
				iVar1 = Global_262145.f_3858;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			if (Global_262145.f_3859 != -1)
			{
				iVar1 = Global_262145.f_3859;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			if (Global_262145.f_3860 != -1)
			{
				iVar1 = Global_262145.f_3860;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			if (Global_262145.f_3861 != -1)
			{
				iVar1 = Global_262145.f_3861;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			if (Global_262145.f_3862 != -1)
			{
				iVar1 = Global_262145.f_3862;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			if (Global_262145.f_3863 != -1)
			{
				iVar1 = Global_262145.f_3863;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			if (Global_262145.f_3864 != -1)
			{
				iVar1 = Global_262145.f_3864;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			if (Global_262145.f_3865 != -1)
			{
				iVar1 = Global_262145.f_3865;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			if (Global_262145.f_3866 != -1)
			{
				iVar1 = Global_262145.f_3866;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			if (Global_262145.f_3867 != -1)
			{
				iVar1 = Global_262145.f_3867;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			if (Global_262145.f_3868 != -1)
			{
				iVar1 = Global_262145.f_3868;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			if (Global_262145.f_3869 != -1)
			{
				iVar1 = Global_262145.f_3869;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar3 = 3;
			iVar4 = 5;
			if (Global_262145.f_3870 != -1)
			{
				iVar1 = Global_262145.f_3870;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 2;
			if (Global_262145.f_3871 != -1)
			{
				iVar1 = Global_262145.f_3871;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 3;
			if (Global_262145.f_3872 != -1)
			{
				iVar1 = Global_262145.f_3872;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 4;
			if (Global_262145.f_3873 != -1)
			{
				iVar1 = Global_262145.f_3873;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 5;
			if (Global_262145.f_3874 != -1)
			{
				iVar1 = Global_262145.f_3874;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar3 = 6;
			iVar4 = 0;
			if (Global_262145.f_3875 != -1)
			{
				iVar1 = Global_262145.f_3875;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 1;
			if (Global_262145.f_3876 != -1)
			{
				iVar1 = Global_262145.f_3876;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 2;
			if (Global_262145.f_3877 != -1)
			{
				iVar1 = Global_262145.f_3877;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 3;
			if (Global_262145.f_3878 != -1)
			{
				iVar1 = Global_262145.f_3878;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 4;
			if (Global_262145.f_3879 != -1)
			{
				iVar1 = Global_262145.f_3879;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 5;
			if (Global_262145.f_3880 != -1)
			{
				iVar1 = Global_262145.f_3880;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar3 = 7;
			iVar4 = 0;
			if (Global_262145.f_3881 != -1)
			{
				iVar1 = Global_262145.f_3881;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 1;
			if (Global_262145.f_3882 != -1)
			{
				iVar1 = Global_262145.f_3882;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar3 = 9;
			iVar4 = 0;
			if (Global_262145.f_3883 != -1)
			{
				iVar1 = Global_262145.f_3883;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 4;
			func_471(iVar7, iParam0, 55, iParam1);
			if (Global_79172[0 /*14*/].f_7 > 0)
			{
				Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_46));
			}
			return;
			break;
	}
	iVar1 = system::round((system::to_float(iVar1) * Global_298067.f_46));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_477(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 4;
			func_471(iVar7, iParam0, 26, iParam1);
			if (Global_79172[0 /*14*/].f_7 > 0)
			{
				Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_23));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = (iParam0 - 1);
	if (iVar8 >= 0 && iVar8 < 26)
	{
		iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_2012[iVar8]) * Global_298067.f_23));
	}
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_478(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_1755[iVar8]) * Global_298067.f_19));
	}
	if (iParam0 >= 256)
	{
		Global_79172[0 /*14*/].f_5 = 4;
		func_471(iVar7, iParam0, 256, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_19));
		}
	}
	else
	{
		func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_479(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 230;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_1241[iVar8]) * Global_298067.f_17));
	}
	if (iParam0 >= 256)
	{
		Global_79172[0 /*14*/].f_5 = 4;
		func_471(iVar7, iParam0, 256, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_17));
		}
	}
	else
	{
		func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_480(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 15;
			iVar4 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_79172[0 /*14*/].f_5 = 4;
		func_471(iVar7, iParam0, 16, iParam1);
		return;
	}
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_481(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 11:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 16:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 21:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 23:
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 24:
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 26:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 27:
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 28:
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 29:
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 30:
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 31:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 32:
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 33:
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 34:
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 35:
			iVar3 = 7;
			iVar4 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_79172[0 /*14*/].f_5 = 4;
		func_471(iVar7, iParam0, 36, iParam1);
		return;
	}
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_482(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 33:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 40;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 40;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 45;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 375;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 90;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 67:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 68:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 69:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 70:
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 90;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 95;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 95;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 150;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 65;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 145;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 1560;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 195;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 200;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 975;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 2670;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 480;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 400;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 2500;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2060;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2620;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 475;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 490;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2280;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 485;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 2390;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 2610;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1450;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 2720;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 4995;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[223]));
			break;
		
		case 119:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 325;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 450;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 465;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 4;
			func_471(iVar7, iParam0, 136, iParam1);
			if (Global_79172[0 /*14*/].f_7 > 0)
			{
				Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_18));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_483(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = system::round((system::to_float(1250) * Global_262145.f_2898));
		}
		else
		{
			iVar1 = system::round((system::to_float(40) * Global_262145.f_1498[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = system::round((system::to_float(450) * Global_262145.f_2897));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_483(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = system::round((system::to_float(500) * Global_262145.f_2896));
		}
		else
		{
			iVar1 = system::round((system::to_float(40) * Global_262145.f_1498[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 256)
		{
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[iVar8]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar9 = (iParam0 - 16);
		if (iVar9 >= 0 && iVar9 < 256)
		{
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_1498[iVar9]));
		}
	}
	iVar1 = system::round((system::to_float(iVar1) * Global_298067.f_18));
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

int func_483(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (func_485(iParam0) == 14835)
	{
		return 0;
	}
	uVar0 = func_484(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, func_112(iVar1));
}

var func_484(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_82(func_485(uParam0), iParam1);
	return uVar0;
}

int func_485(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_115(iVar0);
	if ((func_86() == 0 || func_486() == 0) || (func_86() == 999 && func_486() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1039;
				break;
			
			case 1:
				return 1040;
				break;
			
			case 2:
				return 1041;
				break;
			
			case 3:
				return 1042;
				break;
			
			case 4:
				return 1043;
				break;
			
			case 5:
				return 1503;
				break;
			
			case 6:
				return 1758;
				break;
			
			case 7:
				return 1952;
				break;
			
			case 8:
				return 1953;
				break;
			
			case 9:
				return 1954;
				break;
			
			case 10:
				return 1955;
				break;
			
			case 11:
				return 1956;
				break;
			
			case 12:
				return 1957;
				break;
			
			case 13:
				return 2424;
				break;
			
			case 14:
				return 2444;
				break;
			
			case 15:
				return 2447;
				break;
			
			case 16:
				return 2450;
				break;
			
			case 17:
				return 2614;
				break;
			
			case 18:
				return 2617;
				break;
			
			case 19:
				return 2620;
				break;
			
			case 20:
				return 3786;
				break;
			
			case 21:
				return 3789;
				break;
			
			case 22:
				return 3864;
				break;
			
			case 23:
				return 3867;
				break;
			
			case 24:
				return 3870;
				break;
			
			case 25:
				return 3873;
				break;
			
			case 26:
				return 5364;
				break;
			
			case 27:
				return 5367;
				break;
			
			case 28:
				return 5469;
				break;
			
			case 29:
				return 5472;
				break;
			
			case 30:
				return 6431;
				break;
			
			case 31:
				return 6434;
				break;
			
			case 32:
				return 7255;
				break;
			
			case 33:
				return 7258;
				break;
			
			case 34:
				return 7261;
				break;
			
			case 35:
				return 7970;
				break;
			
			case 36:
				return 7973;
				break;
			
			case 37:
				return 7976;
				break;
			
			case 38:
				return 7979;
				break;
			
			case 39:
				return 8501;
				break;
			
			case 40:
				return 8504;
				break;
			
			case 41:
				return 8507;
				break;
			
			case 42:
				return 8510;
				break;
			
			case 43:
				return 8906;
				break;
			
			case 44:
				return 8909;
				break;
			
			case 45:
				return 8912;
				break;
			
			case 46:
				return 10288;
				break;
			
			case 47:
				return 10291;
				break;
			
			case 48:
				return 10414;
				break;
			
			case 49:
				return 10417;
				break;
			
			case 50:
				return 11826;
				break;
			
			case 51:
				return 11829;
				break;
			
			case 52:
				return 12222;
				break;
			
			case 53:
				return 12225;
				break;
		}
	}
	return 14835;
}

int func_486()
{
	return Global_32949;
}

void func_487(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 40;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 == 4)
	{
		if (func_483(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = system::round(((system::to_float(1250) * Global_262145.f_2898) * Global_298067.f_18));
		}
		else
		{
			iVar1 = system::round(((system::to_float(40) * Global_262145.f_1498[4]) * Global_298067.f_18));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = system::round(((system::to_float(450) * Global_262145.f_2897) * Global_298067.f_18));
	}
	else if (iParam0 == 9)
	{
		if (func_483(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = system::round(((system::to_float(500) * Global_262145.f_2896) * Global_298067.f_18));
		}
		else
		{
			iVar1 = system::round(((system::to_float(40) * Global_262145.f_1498[9]) * Global_298067.f_18));
		}
	}
	else
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 256)
		{
			iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_1498[iVar8]) * Global_298067.f_18));
		}
	}
	if (iParam0 >= 256)
	{
		Global_79172[0 /*14*/].f_5 = 4;
		func_471(iVar7, iParam0, 256, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_18));
		}
	}
	else
	{
		func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_488(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[0]));
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[1]));
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 495;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[2]));
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 490;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[3]));
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 485;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[4]));
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 480;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[5]));
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 440;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[6]));
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 435;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[7]));
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 430;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[8]));
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 425;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[9]));
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 420;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[10]));
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 190;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[11]));
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 185;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[12]));
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 180;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[13]));
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 175;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[14]));
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 170;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[15]));
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 295;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[16]));
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 290;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[17]));
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 285;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[18]));
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 280;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[19]));
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 275;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[20]));
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 2000;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[21]));
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1995;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[22]));
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1990;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[23]));
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1985;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[24]));
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1980;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[25]));
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 1150;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[26]));
			break;
		
		case 31:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1145;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[27]));
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1140;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[28]));
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1135;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[29]));
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1130;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[30]));
			break;
		
		case 35:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 550;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[31]));
			break;
		
		case 36:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 545;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[32]));
			break;
		
		case 37:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 540;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[33]));
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 535;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[34]));
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 530;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[35]));
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 580;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[36]));
			break;
		
		case 42:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 575;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[37]));
			break;
		
		case 43:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 570;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[38]));
			break;
		
		case 44:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 565;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[39]));
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 560;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[40]));
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 1100;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[41]));
			break;
		
		case 48:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 1095;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[42]));
			break;
		
		case 49:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 1090;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[43]));
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 1085;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[44]));
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 1080;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[45]));
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 520;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[46]));
			break;
		
		case 54:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 515;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[47]));
			break;
		
		case 55:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 510;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[48]));
			break;
		
		case 56:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 505;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[49]));
			break;
		
		case 57:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 500;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[50]));
			break;
		
		case 58:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 395;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[51]));
			break;
		
		case 61:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 390;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[52]));
			break;
		
		case 62:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 385;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[53]));
			break;
		
		case 63:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 380;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[54]));
			break;
		
		case 64:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 375;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[55]));
			break;
		
		case 65:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 1050;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[56]));
			break;
		
		case 68:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 1045;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[57]));
			break;
		
		case 69:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 1040;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[58]));
			break;
		
		case 70:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 1035;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[59]));
			break;
		
		case 71:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 1030;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[60]));
			break;
		
		case 72:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 1200;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[61]));
			break;
		
		case 74:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 1195;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[62]));
			break;
		
		case 75:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 1190;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[63]));
			break;
		
		case 76:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 1185;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[64]));
			break;
		
		case 77:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1180;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[65]));
			break;
		
		case 78:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 79:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 475;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[66]));
			break;
		
		case 80:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 470;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[67]));
			break;
		
		case 81:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 465;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[68]));
			break;
		
		case 82:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 460;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[69]));
			break;
		
		case 83:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 455;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[70]));
			break;
		
		case 84:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 950;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[71]));
			break;
		
		case 86:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 945;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[72]));
			break;
		
		case 87:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 940;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[73]));
			break;
		
		case 88:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 935;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[74]));
			break;
		
		case 89:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 930;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2435[75]));
			break;
		
		case 90:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 4;
			func_471(iVar7, iParam0, 92, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_489(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_504(iParam1, iParam2);
			break;
		
		case 11:
			func_503(iParam1, iParam2);
			break;
		
		case 8:
			func_502(iParam1, iParam2);
			break;
		
		case 9:
			func_501(iParam1, iParam2);
			break;
		
		case 3:
			func_500(iParam1, iParam2);
			break;
		
		case 4:
			func_499(iParam1, iParam2);
			break;
		
		case 6:
			func_498(iParam1, iParam2);
			break;
		
		case 1:
			func_497(iParam1, iParam2);
			break;
		
		case 7:
			func_496(iParam1, iParam2);
			break;
		
		case 10:
			func_495(iParam1, iParam2);
			break;
		
		case 14:
			func_494(iParam1, iParam2);
			break;
		
		case 12:
			func_493(iParam1, iParam2);
			break;
		
		case 5:
			func_492(iParam1, iParam2);
			break;
		
		case 0:
			func_491(iParam1, iParam2);
			break;
		
		case 13:
			func_490(iParam1);
			break;
	}
}

void func_490(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	switch (iParam0)
	{
		case 31:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			break;
	}
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_491(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	Global_79172[0 /*14*/].f_5 = 3;
	func_471(iVar0, iParam0, 0, iParam1);
}

void func_492(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_471(iVar7, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_493(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_471(iVar7, iParam0, 26, iParam1);
			return;
			break;
	}
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_494(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	iVar8 = 0;
	switch (iParam0)
	{
		case 0:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 235;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 320;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 185;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 245;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 415;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 315;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 265;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 570;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 560;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 260;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 215;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 430;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 200;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 165;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 100;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 1715;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 3900;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 1550;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 4250;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 4460;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 4970;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 290;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 305;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 4170;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 335;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 4940;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 275;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 5000;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 3620;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 350;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 365;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 380;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 600;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 590;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 395;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 555;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 1060;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 1400;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 1315;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 1230;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 1145;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 8450;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 675;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 8750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 975;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 865;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 890;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 730;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 650;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 645;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 755;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 13850;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 2900;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 2895;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 12500;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 15000;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 14750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 13150;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 2925;
			iVar5 = 0;
			iVar8 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 380;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 390;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 950;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 565;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 630;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 70;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 95;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 265;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 330;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 210;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 610;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 675;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 4050;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 4060;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 1760;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 1375;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 1440;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 185;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 1445;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 530;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 1170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 785;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 850;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 4260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 4310;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 4130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1885;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 1500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 1565;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 4290;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 4150;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 4295;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 6240;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 4955;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 5590;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 4920;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 4990;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 4780;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 4775;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 4800;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 2835;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 2450;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 2515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 385;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 310;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 3655;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 4055;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 3595;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 3605;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 3645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 320;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 2820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 2435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 2500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 230;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 1605;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 2230;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 185;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 2070;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 2205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 1690;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 2715;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 2330;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 2395;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 95;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 485;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 545;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 695;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
	}
	if (iVar8 == 1)
	{
		iVar9 = (iParam0 - 10);
		if (iVar9 >= 0 && iVar9 < 121)
		{
			if (iVar9 > 8)
			{
				iVar9 = (iVar9 - 1);
			}
			iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_950[iVar9]) * Global_298067.f_12));
		}
	}
	else if (iVar8 == 2)
	{
		iVar10 = (iParam0 - 131);
		if (iVar10 >= 0 && iVar10 < 24)
		{
			iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_1071[iVar10]) * Global_298067.f_13));
		}
	}
	else if (iVar8 == 3)
	{
		iVar11 = (iParam0 - 155);
		if (iVar11 >= 0 && iVar11 < 128)
		{
			iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_1096[iVar11]) * Global_298067.f_14));
		}
	}
	else if (iVar8 == 4)
	{
		iVar12 = (iParam0 - 319);
		if (iVar12 >= 0 && iVar12 < 15)
		{
			iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_1225[iVar12]) * Global_298067.f_15));
		}
	}
	if (iParam0 >= 327)
	{
		Global_79172[0 /*14*/].f_5 = 3;
		func_471(iVar7, iParam0, 327, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			if (unk_0x304A39EB177D246B(Global_2883588, joaat("hat"), 1))
			{
				Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_12));
			}
			else if (unk_0x304A39EB177D246B(Global_2883588, joaat("glasses"), 1))
			{
				Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_14));
			}
			else if (unk_0x304A39EB177D246B(Global_2883588, joaat("watch"), 1))
			{
				Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_15));
			}
		}
	}
	else
	{
		func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_495(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_471(iVar7, iParam0, 7, iParam1);
			return;
			break;
	}
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_496(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 17:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 31:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 39:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 40:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 41:
			iVar3 = 10;
			iVar4 = 0;
			if (Global_262145.f_3884 != -1)
			{
				iVar1 = Global_262145.f_3884;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar3 = 10;
			iVar4 = 1;
			if (Global_262145.f_3885 != -1)
			{
				iVar1 = Global_262145.f_3885;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar3 = 10;
			iVar4 = 2;
			if (Global_262145.f_3886 != -1)
			{
				iVar1 = Global_262145.f_3886;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 50:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 59:
			iVar3 = 11;
			iVar4 = 2;
			if (Global_262145.f_3890 != -1)
			{
				iVar1 = Global_262145.f_3890;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 61:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 62:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 63:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 64:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 12;
			iVar4 = 0;
			if (Global_262145.f_3887 != -1)
			{
				iVar1 = Global_262145.f_3887;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar3 = 12;
			iVar4 = 1;
			if (Global_262145.f_3888 != -1)
			{
				iVar1 = Global_262145.f_3888;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar3 = 12;
			iVar4 = 2;
			if (Global_262145.f_3889 != -1)
			{
				iVar1 = Global_262145.f_3889;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 90:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 91:
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_471(iVar7, iParam0, 92, iParam1);
			if (Global_79172[0 /*14*/].f_7 > 0)
			{
				Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_45));
			}
			return;
			break;
	}
	iVar1 = system::round((system::to_float(iVar1) * Global_298067.f_45));
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_497(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_471(iVar7, iParam0, 26, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = (iParam0 - 1);
	if (iVar8 >= 0 && iVar8 < 26)
	{
		iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_923[iVar8]) * Global_298067.f_16));
	}
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_498(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 690;
			break;
	}
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_666[iVar8]) * Global_298067.f_11));
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 >= 256)
	{
		Global_79172[0 /*14*/].f_5 = 3;
		func_471(iVar7, iParam0, 256, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_11));
		}
	}
	else
	{
		func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_499(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 141:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar3 = 15;
			iVar4 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar3 = 15;
			iVar4 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar3 = 15;
			iVar4 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar3 = 15;
			iVar4 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = iParam0;
	if (iVar8 >= 0 && iVar8 < 256)
	{
		iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_171[iVar8]) * Global_298067.f_9));
	}
	if (iParam0 >= 256)
	{
		Global_79172[0 /*14*/].f_5 = 3;
		func_471(iVar7, iParam0, 256, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_9));
		}
	}
	else
	{
		func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_500(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_471(iVar7, iParam0, 16, iParam1);
			return;
			break;
	}
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_501(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 11:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 16:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 18:
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 21:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 23:
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 24:
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 26:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 27:
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 28:
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 29:
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 30:
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 31:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 32:
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 33:
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 34:
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 35:
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 36:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 37:
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 38:
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 39:
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 40:
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 41:
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 42:
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 43:
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 44:
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 45:
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_471(iVar7, iParam0, 46, iParam1);
			return;
			break;
	}
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_502(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar3 = 1;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar3 = 1;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			if (Global_262145.f_3893 != -1)
			{
				iVar1 = Global_262145.f_3893;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			if (Global_262145.f_3901 != -1)
			{
				iVar1 = Global_262145.f_3901;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			if (Global_262145.f_3896 != -1)
			{
				iVar1 = Global_262145.f_3896;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			if (Global_262145.f_3893 != -1)
			{
				iVar1 = Global_262145.f_3893;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			if (Global_262145.f_3901 != -1)
			{
				iVar1 = Global_262145.f_3901;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			if (Global_262145.f_3896 != -1)
			{
				iVar1 = Global_262145.f_3896;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 80;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[80]));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 45;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[81]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[82]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 50;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[87]));
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			if (Global_262145.f_3914 != -1)
			{
				iVar1 = Global_262145.f_3914;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			if (Global_262145.f_3912 != -1)
			{
				iVar1 = Global_262145.f_3912;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			if (Global_262145.f_3892 != -1)
			{
				iVar1 = Global_262145.f_3892;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			if (Global_262145.f_3906 != -1)
			{
				iVar1 = Global_262145.f_3906;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			if (Global_262145.f_3891 != -1)
			{
				iVar1 = Global_262145.f_3891;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			if (Global_262145.f_3908 != -1)
			{
				iVar1 = Global_262145.f_3908;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			if (Global_262145.f_3911 != -1)
			{
				iVar1 = Global_262145.f_3911;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			if (Global_262145.f_3907 != -1)
			{
				iVar1 = Global_262145.f_3907;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			if (Global_262145.f_3900 != -1)
			{
				iVar1 = Global_262145.f_3900;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			if (Global_262145.f_3905 != -1)
			{
				iVar1 = Global_262145.f_3905;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			if (Global_262145.f_3903 != -1)
			{
				iVar1 = Global_262145.f_3903;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			if (Global_262145.f_3913 != -1)
			{
				iVar1 = Global_262145.f_3913;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			if (Global_262145.f_3899 != -1)
			{
				iVar1 = Global_262145.f_3899;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			if (Global_262145.f_3894 != -1)
			{
				iVar1 = Global_262145.f_3894;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			if (Global_262145.f_3909 != -1)
			{
				iVar1 = Global_262145.f_3909;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			if (Global_262145.f_3902 != -1)
			{
				iVar1 = Global_262145.f_3902;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			if (Global_262145.f_3914 != -1)
			{
				iVar1 = Global_262145.f_3914;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			if (Global_262145.f_3912 != -1)
			{
				iVar1 = Global_262145.f_3912;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			if (Global_262145.f_3892 != -1)
			{
				iVar1 = Global_262145.f_3892;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			if (Global_262145.f_3906 != -1)
			{
				iVar1 = Global_262145.f_3906;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			if (Global_262145.f_3891 != -1)
			{
				iVar1 = Global_262145.f_3891;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			if (Global_262145.f_3908 != -1)
			{
				iVar1 = Global_262145.f_3908;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			if (Global_262145.f_3911 != -1)
			{
				iVar1 = Global_262145.f_3911;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			if (Global_262145.f_3907 != -1)
			{
				iVar1 = Global_262145.f_3907;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			if (Global_262145.f_3900 != -1)
			{
				iVar1 = Global_262145.f_3900;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			if (Global_262145.f_3905 != -1)
			{
				iVar1 = Global_262145.f_3905;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			if (Global_262145.f_3903 != -1)
			{
				iVar1 = Global_262145.f_3903;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			if (Global_262145.f_3913 != -1)
			{
				iVar1 = Global_262145.f_3913;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			if (Global_262145.f_3899 != -1)
			{
				iVar1 = Global_262145.f_3899;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			if (Global_262145.f_3894 != -1)
			{
				iVar1 = Global_262145.f_3894;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			if (Global_262145.f_3909 != -1)
			{
				iVar1 = Global_262145.f_3909;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			if (Global_262145.f_3902 != -1)
			{
				iVar1 = Global_262145.f_3902;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			if (Global_262145.f_3914 != -1)
			{
				iVar1 = Global_262145.f_3914;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			if (Global_262145.f_3912 != -1)
			{
				iVar1 = Global_262145.f_3912;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			if (Global_262145.f_3898 != -1)
			{
				iVar1 = Global_262145.f_3898;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			if (Global_262145.f_3906 != -1)
			{
				iVar1 = Global_262145.f_3906;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			if (Global_262145.f_3891 != -1)
			{
				iVar1 = Global_262145.f_3891;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			if (Global_262145.f_3908 != -1)
			{
				iVar1 = Global_262145.f_3908;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			if (Global_262145.f_3897 != -1)
			{
				iVar1 = Global_262145.f_3897;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			if (Global_262145.f_3911 != -1)
			{
				iVar1 = Global_262145.f_3911;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			if (Global_262145.f_3907 != -1)
			{
				iVar1 = Global_262145.f_3907;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			if (Global_262145.f_3900 != -1)
			{
				iVar1 = Global_262145.f_3900;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			if (Global_262145.f_3905 != -1)
			{
				iVar1 = Global_262145.f_3905;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			if (Global_262145.f_3903 != -1)
			{
				iVar1 = Global_262145.f_3903;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			if (Global_262145.f_3895 != -1)
			{
				iVar1 = Global_262145.f_3895;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			if (Global_262145.f_3910 != -1)
			{
				iVar1 = Global_262145.f_3910;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			if (Global_262145.f_3913 != -1)
			{
				iVar1 = Global_262145.f_3913;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			if (Global_262145.f_3904 != -1)
			{
				iVar1 = Global_262145.f_3904;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			if (Global_262145.f_3914 != -1)
			{
				iVar1 = Global_262145.f_3914;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			if (Global_262145.f_3912 != -1)
			{
				iVar1 = Global_262145.f_3912;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			if (Global_262145.f_3898 != -1)
			{
				iVar1 = Global_262145.f_3898;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			if (Global_262145.f_3906 != -1)
			{
				iVar1 = Global_262145.f_3906;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			if (Global_262145.f_3891 != -1)
			{
				iVar1 = Global_262145.f_3891;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			if (Global_262145.f_3908 != -1)
			{
				iVar1 = Global_262145.f_3908;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			if (Global_262145.f_3897 != -1)
			{
				iVar1 = Global_262145.f_3897;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			if (Global_262145.f_3911 != -1)
			{
				iVar1 = Global_262145.f_3911;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			if (Global_262145.f_3907 != -1)
			{
				iVar1 = Global_262145.f_3907;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			if (Global_262145.f_3900 != -1)
			{
				iVar1 = Global_262145.f_3900;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			if (Global_262145.f_3905 != -1)
			{
				iVar1 = Global_262145.f_3905;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			if (Global_262145.f_3903 != -1)
			{
				iVar1 = Global_262145.f_3903;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			if (Global_262145.f_3895 != -1)
			{
				iVar1 = Global_262145.f_3895;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			if (Global_262145.f_3910 != -1)
			{
				iVar1 = Global_262145.f_3910;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			if (Global_262145.f_3913 != -1)
			{
				iVar1 = Global_262145.f_3913;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			if (Global_262145.f_3904 != -1)
			{
				iVar1 = Global_262145.f_3904;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 45;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[16]));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 60;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[17]));
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 40;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[19]));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 315;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[20]));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 215;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[21]));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 265;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[22]));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 45;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[23]));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 205;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[24]));
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			bVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			bVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 60;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[27]));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 55;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[28]));
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			bVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 170;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[30]));
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			bVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_483(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = system::round((system::to_float(1250) * Global_262145.f_2898));
		}
		else
		{
			iVar1 = system::round((system::to_float(45) * Global_262145.f_428[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = system::round((system::to_float(450) * Global_262145.f_2897));
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_483(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = system::round((system::to_float(500) * Global_262145.f_2896));
		}
		else
		{
			iVar1 = system::round((system::to_float(55) * Global_262145.f_428[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 237)
		{
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[iVar8]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar9 = (iParam0 - 32);
		if (iVar9 >= 0 && iVar9 < 237)
		{
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[iVar9]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar10 = (iParam0 - 160) + 124;
		if (iVar10 >= 0 && iVar10 < 237)
		{
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[iVar10]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar11 = (iParam0 - 160) + 188;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_428[iVar11]));
		}
	}
	iVar1 = system::round((system::to_float(iVar1) * Global_298067.f_10));
	if (iParam0 >= 241)
	{
		Global_79172[0 /*14*/].f_5 = 3;
		func_471(iVar7, iParam0, 241, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_10));
		}
	}
	else
	{
		func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_503(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar3 = 3;
			iVar4 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar3 = 3;
			iVar4 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 3125;
			break;
		
		case 79:
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 128:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 129:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar3 = 9;
			iVar4 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar3 = 9;
			iVar4 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar3 = 9;
			iVar4 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar3 = 9;
			iVar4 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 160:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 161:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar3 = 15;
			iVar4 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	if (iParam0 == 23)
	{
		if (func_483(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = system::round(((system::to_float(1250) * Global_262145.f_2898) * Global_298067.f_10));
		}
		else
		{
			iVar1 = system::round(((system::to_float(45) * Global_262145.f_428[23]) * Global_298067.f_10));
		}
	}
	else if (iParam0 == 17)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = system::round(((system::to_float(450) * Global_262145.f_2897) * Global_298067.f_10));
	}
	else if (iParam0 == 28)
	{
		if (func_483(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = system::round(((system::to_float(500) * Global_262145.f_2896) * Global_298067.f_10));
		}
		else
		{
			iVar1 = system::round(((system::to_float(55) * Global_262145.f_428[28]) * Global_298067.f_10));
		}
	}
	else
	{
		iVar8 = iParam0;
		if (iVar8 >= 0 && iVar8 < 237)
		{
			iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_428[iVar8]) * Global_298067.f_10));
		}
	}
	if (iParam0 >= 237)
	{
		Global_79172[0 /*14*/].f_5 = 3;
		func_471(iVar7, iParam0, 237, iParam1);
		if (Global_79172[0 /*14*/].f_7 > 0)
		{
			Global_79172[0 /*14*/].f_7 = system::round((system::to_float(Global_79172[0 /*14*/].f_7) * Global_298067.f_10));
		}
	}
	else
	{
		func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_504(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[0]));
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 190;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[1]));
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 185;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[2]));
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 180;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[3]));
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 175;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[4]));
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 170;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[5]));
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 580;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[6]));
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 575;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[7]));
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 570;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[8]));
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 565;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[9]));
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 560;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[10]));
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 1100;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[11]));
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 1095;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[12]));
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 1090;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[13]));
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 1085;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[14]));
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 1080;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[15]));
			break;
		
		case 18:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 520;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[16]));
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 515;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[17]));
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 510;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[18]));
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 505;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[19]));
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 500;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[20]));
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 25:
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 295;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[21]));
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 290;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[22]));
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 285;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[23]));
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 280;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[24]));
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 275;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[25]));
			break;
		
		case 31:
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 950;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[26]));
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 945;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[27]));
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 940;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[28]));
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 935;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[29]));
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 930;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[30]));
			break;
		
		case 37:
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 440;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[31]));
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 435;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[32]));
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 430;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[33]));
			break;
		
		case 41:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 425;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[34]));
			break;
		
		case 42:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 420;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[35]));
			break;
		
		case 43:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 44:
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 1150;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[36]));
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 1145;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[37]));
			break;
		
		case 47:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 1140;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[38]));
			break;
		
		case 48:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1135;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[39]));
			break;
		
		case 49:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1130;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[40]));
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 395;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[41]));
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 390;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[42]));
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 385;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[43]));
			break;
		
		case 53:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 380;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[44]));
			break;
		
		case 54:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 375;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[45]));
			break;
		
		case 55:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 56:
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 0;
			break;
		
		case 57:
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 500;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[46]));
			break;
		
		case 58:
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 495;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[47]));
			break;
		
		case 59:
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 490;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[48]));
			break;
		
		case 60:
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 485;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[49]));
			break;
		
		case 61:
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 480;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[50]));
			break;
		
		case 62:
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 63:
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 1050;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[51]));
			break;
		
		case 64:
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 1045;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[52]));
			break;
		
		case 65:
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 1040;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[53]));
			break;
		
		case 66:
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 1035;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[54]));
			break;
		
		case 67:
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 1030;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[55]));
			break;
		
		case 68:
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 69:
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 550;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[56]));
			break;
		
		case 70:
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 545;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[57]));
			break;
		
		case 71:
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 540;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[58]));
			break;
		
		case 72:
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 535;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[59]));
			break;
		
		case 73:
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 530;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[60]));
			break;
		
		case 74:
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 1200;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[61]));
			break;
		
		case 75:
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 1195;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[62]));
			break;
		
		case 76:
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 1190;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[63]));
			break;
		
		case 77:
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 1185;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[64]));
			break;
		
		case 78:
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1180;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[65]));
			break;
		
		case 79:
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		case 80:
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 2000;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[66]));
			break;
		
		case 81:
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 1995;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[67]));
			break;
		
		case 82:
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 1990;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[68]));
			break;
		
		case 83:
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 1985;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[69]));
			break;
		
		case 84:
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 1980;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[70]));
			break;
		
		case 85:
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 475;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[71]));
			break;
		
		case 86:
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 470;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[72]));
			break;
		
		case 87:
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 465;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[73]));
			break;
		
		case 88:
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 460;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[74]));
			break;
		
		case 89:
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 455;
			iVar1 = system::round((system::to_float(iVar1) * Global_262145.f_2512[75]));
			break;
		
		case 90:
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			break;
		
		default:
			Global_79172[0 /*14*/].f_5 = 3;
			func_471(iVar7, iParam0, 91, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_461(&(Global_79172[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_505()
{
	Global_79172[0 /*14*/].f_1 = -1;
	Global_79172[0 /*14*/].f_2 = -1;
	Global_79172[0 /*14*/].f_5 = -1;
	Global_79172[0 /*14*/].f_3 = -1;
	Global_79172[0 /*14*/].f_4 = -1;
	Global_79172[0 /*14*/].f_7 = 0;
	Global_79172[0 /*14*/].f_6 = 0;
	Global_79172[0 /*14*/].f_13 = -1;
	Global_79172[0 /*14*/].f_12 = 0;
	Global_79172[0 /*14*/] = 0;
	StringCopy(&(Global_79172[0 /*14*/].f_8), "NO_LABEL", 16);
}

void func_506(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		unk_0x4BD214FCF7332FF6(iParam0, 0);
		unk_0xAAA71DD7E9059338(iParam0, 1);
		unk_0x999C62072AF920FD(iParam0, 0);
		unk_0x0FB8E752BCC547A9(iParam0, 249, 1);
		unk_0x84D421ACEBF9E529(iParam0, 0);
		unk_0x00941975834A0817(iParam0, 1);
		unk_0x81E9E7612B0E4BCE(iParam0, 0);
		unk_0x0428AFDCAA63B06E(iParam0, 208, 1);
		unk_0x0428AFDCAA63B06E(iParam0, 118, 0);
		unk_0x0428AFDCAA63B06E(iParam0, 202, 1);
		unk_0x9FF00EA9A61211D2(iParam0, 0);
	}
}

int func_507(int iParam0)
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

int func_508(int iParam0)
{
	if ((unk_0xEA4F815FDC353FEF(iParam0) || iParam0 == joaat("submersible")) || iParam0 == joaat("avisa"))
	{
		return 1;
	}
	return 0;
}

void func_509(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && !unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
	}
	if (unk_0xFC8BFE4B41177C22(*uParam1) && !unk_0x1C2F771CDC87A3A5(*uParam1, 0))
	{
	}
	if (unk_0x4B423FAA24E8ABF0(iParam0) != unk_0x4B423FAA24E8ABF0(*uParam1))
	{
	}
	iVar0 = 1;
	while (iVar0 <= 14)
	{
		if (unk_0x579FA5568DE0C2A0(iParam0, iVar0))
		{
			unk_0xD772F6AA66750D2B(*uParam1, iVar0, !unk_0x5318DF85BEB6B95F(iParam0, iVar0));
		}
		iVar0++;
	}
}

void func_510(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_527(iParam0, uParam1);
		unk_0x8744D2E3FC95740E(&(uParam1->f_95), false);
		if (BitTest(uParam1->f_77, 11))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_95), false);
		}
		if (func_97(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_95), false);
		}
		if (func_90(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_95), false);
		}
		if (unk_0xE6BE8A525BA6BD44(iParam0) && !unk_0x4497678941C27E46(iParam0))
		{
			uParam1->f_102 = 2;
		}
		else if (!unk_0xE6BE8A525BA6BD44(iParam0))
		{
			uParam1->f_102 = 1;
		}
		else if (unk_0x4497678941C27E46(iParam0))
		{
			uParam1->f_102 = 3;
		}
		if (uParam1->f_70 == 0)
		{
			uParam1->f_70 = 1;
		}
		uParam1->f_78 = unk_0xCDF8A102C63845CC(iParam0);
		uParam1->f_79 = unk_0xEEDADE9115768A64(iParam0);
		uParam1->f_80 = unk_0xD1DBD3830272ECAA(iParam0);
		unk_0xE10BD9712D7B0CBF(iParam0, &(uParam1->f_97));
		unk_0x4C5611B5008205EB(iParam0, &(uParam1->f_99));
		uParam1->f_98 = unk_0xE423A13CB489E307(iParam0);
		iVar0 = func_513(iParam0, &(uParam1->f_94), &(uParam1->f_96));
		unk_0x8744D2E3FC95740E(&(uParam1->f_95), 3);
		if (!iVar0 == func_32())
		{
			unk_0x464E131FD68B953F(iVar0, &(uParam1->f_81), 13);
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_95), true);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_95), true);
		}
		if (iVar0 == unk_0x259BE71D8A81D4FA())
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_95), 2);
			if (uParam1->f_94 == 1)
			{
				if (func_512(iParam0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_95), 3);
				}
			}
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_95), 2);
		}
		if (unk_0x2E6A27037F1DC473(iParam0, joaat("deathbike2")))
		{
			uParam1->f_99 = func_511(func_122(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		}
	}
}

var func_511(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_121(iParam0);
	func_120(iVar1, &uVar0);
	return uVar0;
}

int func_512(int iParam0)
{
	if (Global_2738934.f_301 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool func_513(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0) && unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (func_526(iParam0, 1))
		{
			*uParam1 = 1;
			if (unk_0x77B62CAA5DF0922A("PV_Slot", 3))
			{
				if (unk_0xD130E7CDEE903624(iParam0, "PV_Slot"))
				{
					*uParam2 = unk_0xE2F6FE9B61232165(iParam0, "PV_Slot");
				}
			}
			return func_525(iParam0);
		}
		else if (func_524(iParam0, 1))
		{
			return func_523(iParam0, 1, 0);
		}
		else if (func_522(iParam0, 1))
		{
			return func_521(iParam0, 1, 0);
		}
		else if (func_520(iParam0, 1))
		{
			return func_519(iParam0, 1, 0);
		}
		else if (func_518(iParam0, 1))
		{
			return func_517(iParam0, 1, 0);
		}
		else if (func_516(iParam0, 1))
		{
			*uParam1 = 2;
			return func_514(iParam0);
		}
		else if (!unk_0xC39AE5D390581AD5(iParam0, -1, 0))
		{
			iVar0 = unk_0xFD5C5BBD1FE92BB7(iParam0, -1, 0);
			if (unk_0xFC8BFE4B41177C22(iVar0))
			{
				if (unk_0x501EBB0523078750(iVar0))
				{
					*uParam1 = 3;
					return unk_0x1C1C92A1CBAE364B(iVar0);
				}
			}
		}
	}
	*uParam1 = 4;
	return unk_0x259BE71D8A81D4FA();
}

bool func_514(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xE2F6FE9B61232165(iParam0, "Veh_Modded_By_Player");
	return func_515(iVar0, 0, 1, 0);
}

bool func_515(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			bVar0 = unk_0xB23E0F9B63D009A8(iVar1);
			if (func_689(bVar0, 0, 1) || (iParam1 && unk_0x89BE185F885B6CD6(bVar0)))
			{
				if (iParam0 == unk_0x3351FEF40EC734DB(bVar0))
				{
					return bVar0;
				}
			}
			bVar1++;
		}
	}
	else if (func_689(bParam3, 0, 1) || (iParam1 && unk_0x89BE185F885B6CD6(bParam3)))
	{
		if (iParam0 == unk_0x3351FEF40EC734DB(bParam3))
		{
			return bParam3;
		}
	}
	return func_32();
}

int func_516(int iParam0, bool bParam1)
{
	if (Global_79389)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_517(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_518(iParam0, 1))
	{
		return func_32();
	}
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar0 = unk_0xE2F6FE9B61232165(iParam0, "Player_Support_Bike_Vehicle");
		return func_515(iVar0, 0, bParam1, bParam2);
	}
	return func_32();
}

int func_518(int iParam0, bool bParam1)
{
	if (Global_79389)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Support_Bike_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_519(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_520(iParam0, 1))
	{
		return func_32();
	}
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar0 = unk_0xE2F6FE9B61232165(iParam0, "Player_Acid_Lab");
		return func_515(iVar0, 0, bParam1, bParam2);
	}
	return func_32();
}

int func_520(int iParam0, bool bParam1)
{
	if (Global_79389)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Acid_Lab"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_521(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_522(iParam0, 1))
	{
		return func_32();
	}
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar0 = unk_0xE2F6FE9B61232165(iParam0, "Player_Hacker_Truck");
		return func_515(iVar0, 0, bParam1, bParam2);
	}
	return func_32();
}

int func_522(int iParam0, bool bParam1)
{
	if (Global_79389)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_523(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_524(iParam0, 1))
	{
		return func_32();
	}
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar0 = unk_0xE2F6FE9B61232165(iParam0, "Player_Truck");
		return func_515(iVar0, 0, bParam1, bParam2);
	}
	return func_32();
}

int func_524(int iParam0, bool bParam1)
{
	if (Global_79389)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_525(int iParam0)
{
	int iVar0;
	
	if (!func_526(iParam0, 1))
	{
		return func_32();
	}
	iVar0 = unk_0xE2F6FE9B61232165(iParam0, "Player_Vehicle");
	return func_515(iVar0, 0, 1, 0);
}

int func_526(int iParam0, bool bParam1)
{
	if (Global_79389)
	{
		if (unk_0xFC8BFE4B41177C22(iParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0xD130E7CDEE903624(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_527(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		func_529(uParam1);
		uParam1->f_66 = unk_0x4B423FAA24E8ABF0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xCA7159F2C5FF745A(iParam0), 16);
		*uParam1 = unk_0x4F06416A18248EA0(iParam0);
		unk_0xFF4B16F297D9CB3E(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x741D9B0685E67684(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x9D35AABAEE206518(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xDA63CE76F9AAB439(iParam0);
		uParam1->f_67 = unk_0xA089B04A208DBD0B(iParam0);
		uParam1->f_69 = unk_0x6A375D21624F9187(iParam0);
		uParam1->f_70 = unk_0x38A100E16C95161B(iParam0);
		unk_0x04434FA56DED5500(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x64FEACF0AD019F1F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xF1B79038130E3C08(iParam0, 2))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 28);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 3))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 29);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 30);
		}
		if (unk_0xF1B79038130E3C08(iParam0, 1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_145(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7943BD10E2A03FAC(iParam0, 0))
		{
			uParam1->f_68 = unk_0x54DA32C15F7A6ABA(iParam0);
		}
		if (unk_0x00C6FDED3EB75117(uParam1->f_66))
		{
			if (unk_0x61F41693A4648B46(iParam0))
			{
				switch (unk_0x68F7F7C5DF6717F8(iParam0))
				{
					case 3:
					case 0:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 23);
						unk_0x8744D2E3FC95740E(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xE6BE8A525BA6BD44(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 9);
		}
		if (unk_0xFDA2576D37032738(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 10);
		}
		if (unk_0xA9D64A14804D119B(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 13);
			unk_0xD9B9D4D1CCED7CA6(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x2C0B2BB7913E8DBA(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 12);
		}
		func_528(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5318DF85BEB6B95F(iParam0, iVar0 + 1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_150(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x0BCE48C8677F9824(iParam0, 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 11);
		}
		if (unk_0xD130E7CDEE903624(iParam0, "IgnoredByQuickSave") && unk_0x3F40AE65F056B43D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(uParam1->f_77), 27);
		}
	}
}

int func_528(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD9F5E1FEFD1329E4(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x90E3EAFF8AAA1A42(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x1D5A665629D417A7(*iParam0, iVar1))
			{
				switch (unk_0xD6BA8C57BDF9DEB9(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x94C9CD3D66808551(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xEFDD8C5443F6C9E4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_529(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_530(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	func_531(&Global_1964549);
	if (unk_0xD9F5E1FEFD1329E4(iParam1, 0))
	{
		iVar0 = unk_0x4B423FAA24E8ABF0(iParam1);
		func_510(iParam1, &Global_1964549);
	}
	if (!unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
	{
		*uParam0 = unk_0x5779387E956077A6(iVar0, Param2, fParam3, iParam4, iParam5, 0);
		func_68(*uParam0, &Global_1964549, 1, 1, 0);
		if (((!unk_0x78B050AFBA6D1517(iVar0) && !unk_0xEA4F815FDC353FEF(iVar0)) && iVar0 != joaat("kosatka")) && iVar0 != joaat("avisa"))
		{
			iVar1 = 0;
			while (iVar1 <= 5)
			{
				if (unk_0xAD830DCD82C63F31(iParam1, iVar1))
				{
					unk_0x89E9F387C190061F(*uParam0, iVar1, 1);
				}
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (!unk_0x01D37530E5C420F5(iParam1, iVar1))
				{
					unk_0x8E470D78FC866126(*uParam0, iVar1);
				}
				iVar1++;
			}
		}
		if ((!unk_0xEA4F815FDC353FEF(iVar0) && iVar0 != joaat("kosatka")) && iVar0 != joaat("avisa"))
		{
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (unk_0x548F6F43A7CB6F45(iParam1, iVar1, 1))
				{
					unk_0xE488FDAA43A181AE(*uParam0, iVar1, 1, 1148846080);
				}
				else if (unk_0x548F6F43A7CB6F45(iParam1, iVar1, 0))
				{
					unk_0xE488FDAA43A181AE(*uParam0, iVar1, 0, 1148846080);
				}
				iVar1++;
			}
		}
		unk_0xF9639F1B33AF0EF8(iParam1, *uParam0);
		if ((iVar0 == joaat("dominator4") || iVar0 == joaat("dominator5")) || iVar0 == joaat("dominator6"))
		{
			if (!unk_0x583536248E014455(iParam1))
			{
				unk_0x8EA0917E9BF68ABF(*uParam0, 1);
			}
		}
	}
	if (unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_531(var uParam0)
{
	func_529(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

bool func_532(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_533()
{
	return 1;
}

void func_534()
{
	Global_2685444.f_4342.f_820 = 1;
}

void func_535()
{
	unk_0x66EFB3D6110055C4(0, 75, 1);
}

int func_536()
{
	int iVar0;
	
	if (func_541() || !func_37(0))
	{
		return 2;
	}
	iVar0 = func_537(func_36(), unk_0x259BE71D8A81D4FA());
	switch (iVar0)
	{
		case 0:
			return 1;
		
		case 1:
			return 0;
		
		case 2:
			return 3;
		
		case 3:
			return 4;
		
		default:
	}
	return -2;
}

int func_537(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (func_34(bParam0))
	{
		if (func_539(bParam1, bParam0, 0) || func_538(bParam1, bParam0))
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_33(bParam0, iVar0) == bParam1)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_538(int iParam0, bool bParam1)
{
	if (bParam1 != func_32())
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_26 != func_32())
		{
			return bParam1 == Global_1887305[iParam0 /*610*/].f_10.f_26;
		}
	}
	return 0;
}

int func_539(int iParam0, bool bParam1, bool bParam2)
{
	if (func_35(bParam1))
	{
		if (!bParam2)
		{
			if (func_540(iParam0, bParam1))
			{
				return 0;
			}
		}
		if (Global_1887305[iParam0 /*610*/].f_10 != func_32())
		{
			return bParam1 == Global_1887305[iParam0 /*610*/].f_10;
		}
	}
	return 0;
}

int func_540(int iParam0, int iParam1)
{
	if (iParam1 != func_32())
	{
		if (iParam0 != func_32())
		{
			if (Global_1887305[iParam0 /*610*/].f_10 != func_32())
			{
				if (Global_1887305[iParam0 /*610*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_541()
{
	return func_34(unk_0x259BE71D8A81D4FA());
}

int func_542()
{
	if (!func_30(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_325(unk_0x30DE412C1194FCDD()) != 4)
	{
		return 0;
	}
	return 1;
}

void func_543()
{
	struct<3> Var0;
	var uVar1;
	
	if (!func_554())
	{
		return;
	}
	if (func_551())
	{
		if (!func_550(unk_0x259BE71D8A81D4FA()))
		{
			func_549();
		}
	}
	else if (func_550(unk_0x259BE71D8A81D4FA()))
	{
		func_548();
	}
	switch (func_547())
	{
		case 0:
			if (func_546(unk_0x259BE71D8A81D4FA()))
			{
				func_545(1);
			}
			break;
		
		case 1:
			func_48(func_49(func_7(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
			func_545(2);
			break;
		
		case 2:
			if ((func_332(func_8()) && func_332(func_10())) && unk_0xDE3B10768F6103AD(func_7(), 0, 1) == 0)
			{
				unk_0x091AB029AFE429F2(func_7(), 0, 1);
				unk_0x091AB029AFE429F2(func_9(), 0, 1);
				unk_0x5D7CD709B34C90F0(func_7(), true);
				unk_0x52528272B59EBA11(func_7(), 0, 0);
				func_545(3);
			}
			break;
		
		case 3:
			if (!unk_0xE5E2AE8B19267B8A(func_7()) && !unk_0xE5E2AE8B19267B8A(func_9()))
			{
				func_545(4);
			}
			break;
		
		case 4:
			if (func_20(&(Local_113.f_141), 10000, 0))
			{
				func_19(&(Local_113.f_141));
				func_545(5);
			}
			break;
		
		case 5:
			if (func_332(func_8()) && func_163(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), &Var0, &uVar1))
			{
				unk_0xB2BD5837A8D3CEDA(func_7(), Var0, 1, 0, 0, 1);
				unk_0x5C96CEA06531AB03(func_7(), uVar1);
				unk_0x6EF982A39E8D08FA(func_7(), 1, 0);
				unk_0x6EF982A39E8D08FA(func_9(), 0, 1);
				unk_0x5D7CD709B34C90F0(func_7(), false);
				unk_0x52528272B59EBA11(func_7(), 1, 0);
				func_545(6);
			}
			break;
		
		case 6:
			if (!unk_0x6BF8FE9F26BBABDE(func_7()) && !unk_0x6BF8FE9F26BBABDE(func_9()))
			{
				func_544();
				func_318();
				func_545(0);
			}
			break;
	}
}

void func_544()
{
	func_338(20);
}

void func_545(int iParam0)
{
	Local_113.f_140 = iParam0;
}

bool func_546(bool bParam0)
{
	return func_31(bParam0, 20);
}

int func_547()
{
	return Local_113.f_140;
}

void func_548()
{
	func_338(19);
}

void func_549()
{
	func_316(19);
}

bool func_550(bool bParam0)
{
	return func_31(bParam0, 19);
}

int func_551()
{
	if (func_546(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!func_12())
	{
		return 0;
	}
	if (func_553() != 0)
	{
		func_552(0);
	}
	if (func_334(unk_0x30DE412C1194FCDD(), 5))
	{
		if (func_553() == 0)
		{
			func_552(1);
		}
		return 0;
	}
	if (func_16(8))
	{
		return 0;
	}
	return 1;
}

void func_552(int iParam0)
{
	Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_312 = iParam0;
}

int func_553()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_312;
}

int func_554()
{
	if (func_5() != 0)
	{
		return 0;
	}
	if (!func_322())
	{
		return 0;
	}
	return 1;
}

void func_555()
{
	if (!func_559())
	{
		return;
	}
	switch (func_11())
	{
		case 1:
			if (func_558(unk_0x30DE412C1194FCDD(), 2))
			{
				func_557(2);
			}
			break;
		
		case 2:
			if (func_12())
			{
				if (!func_558(unk_0x30DE412C1194FCDD(), 0))
				{
					if (func_669(5))
					{
						func_556(0);
					}
				}
				else if (!func_558(unk_0x30DE412C1194FCDD(), 1))
				{
					if (unk_0x1CE980E99A2A6FB6(func_7()) && func_669(5))
					{
						func_328();
						func_556(1);
					}
				}
			}
			break;
		
		case 4:
			if (!func_558(unk_0x30DE412C1194FCDD(), 2))
			{
				if (unk_0x1CE980E99A2A6FB6(func_7()))
				{
					func_556(2);
				}
			}
			break;
	}
}

void func_556(int iParam0)
{
	if (func_47(&(Local_112[unk_0xAE032CEDCF23C6D5() /*6*/].f_4), iParam0))
	{
	}
}

void func_557(int iParam0)
{
	if (func_341(&(Local_112[unk_0xAE032CEDCF23C6D5() /*6*/].f_4), iParam0))
	{
	}
}

bool func_558(int iParam0, int iParam1)
{
	return func_17(&(Local_112[iParam0 /*6*/].f_4), iParam1);
}

int func_559()
{
	if (func_322())
	{
		return 1;
	}
	return 0;
}

void func_560()
{
	if (!func_561())
	{
		return;
	}
	if (!func_669(2))
	{
		if (func_333(func_10()) && func_333(func_8()))
		{
			unk_0x8FC511FC963C67E5(func_10(), 0);
			unk_0x8FC511FC963C67E5(func_8(), 0);
			func_306(2);
		}
	}
}

int func_561()
{
	if (func_5() != 0)
	{
		return 0;
	}
	if (!func_322())
	{
		return 0;
	}
	return 1;
}

void func_562()
{
	if (((!func_52(func_53()) && func_325(unk_0x30DE412C1194FCDD()) == 3) && func_12()) && func_564(func_53()))
	{
		func_306(5);
		if (func_11() == 1 && !unk_0x4D9174D8796EA622())
		{
			func_321(1);
		}
	}
	else
	{
		func_340(5);
		func_563(1);
	}
}

void func_563(int iParam0)
{
	if (func_341(&(Local_113.f_135), iParam0))
	{
	}
}

int func_564(struct<3> Param0)
{
	if (!func_52(Param0) && unk_0x65FFA94B82A71741(func_7(), Param0, func_566(), func_566(), func_565(), 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

float func_565()
{
	return 20f;
}

float func_566()
{
	switch (func_567())
	{
		case 1:
			return 35f;
		
		case 2:
			return 20f;
		
		case 3:
			return 10f;
		
		case 4:
			return 10f;
		
		case 5:
			return 10f;
		
		default:
	}
	return 45f;
}

int func_567()
{
	return Local_108.f_10.f_6;
}

void func_568()
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	
	if (!func_588())
	{
		return;
	}
	Var0 = { func_586() };
	if (!func_95(Local_113.f_147, Var0, 1))
	{
		if (func_573(Var0, &Var1, &uVar2))
		{
			Local_113.f_147 = { Var0 };
			uVar3 = func_572(Local_113.f_147);
			func_569(Var1, uVar2, uVar3);
		}
	}
}

void func_569(struct<3> Param0, var uParam1, var uParam2)
{
	func_570(Param0, uParam1, uParam2);
}

void func_570(struct<3> Param0, var uParam1, var uParam2)
{
	struct<9> Var0;
	int iVar1;
	
	Var0.f_0 = -1616114832;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = unk_0x8034325BF6D6E41F();
	Var0.f_4 = { Param0 };
	Var0.f_7 = uParam1;
	Var0.f_8 = uParam2;
	iVar1 = func_571(1);
	if (iVar1 != 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 9, iVar1, Var0.f_0);
	}
}

var func_571(int iParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)))
		{
			bVar2 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar1));
			if (func_689(bVar2, 0, 0))
			{
				if (bVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_572(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 79,8987f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 939,3043f, 88,76195f, 77,97077f, 890,7938f, 6,552929f, 82,88f, 12,5f, 0, 1))
	{
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 66,6327f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 356,632f, -80,94928f, 63,78246f, 402,5039f, -97,71112f, 70,91248f, 25f, 0, 1))
	{
		return 2;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 36,5367f;
	}
	if (unk_0x26715B0ED6702C87(Var0, -1021,344f, -373,519f, 35,69508f, -1070,55f, -399,1198f, 40,07037f, 10f, 0, 1))
	{
		return 3;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 29,8949f;
	}
	if (unk_0x26715B0ED6702C87(Var0, -629,3671f, -671,434f, 34,67063f, -629,457f, -714,6146f, 27,22458f, 17,5f, 0, 1))
	{
		return 4;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 18,0513f;
	}
	if (unk_0x26715B0ED6702C87(Var0, -1027,292f, -731,5537f, 22,79104f, -1057,755f, -757,6599f, 17,22033f, 15f, 0, 1))
	{
		return 5;
	}
	return 0;
}

int func_573(struct<3> Param0, var uParam1, var uParam2)
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	struct<3> Var9;
	int iVar10;
	int iVar11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	float fVar15;
	int iVar16;
	int iVar17;
	
	unk_0x693ACD1AA0BDB375((Param0.f_0 - 1000f), (Param0.f_1 - 1000f), (Param0.f_0 + 1000f), (Param0.f_1 + 1000f));
	if (unk_0xFFEB5F24B372DFF6((Param0.f_0 - 1000f), (Param0.f_1 - 1000f), (Param0.f_0 + 1000f), (Param0.f_1 + 1000f)))
	{
		iVar3 = 1;
		if (!func_585(Param0))
		{
			func_391(&iVar3, 8);
		}
		fVar4 = 3f;
		if (Param0.f_2 == 1f)
		{
			fVar4 = 0f;
		}
		while (!bVar0 && iVar5 < 2)
		{
			iVar5++;
			Local_113.f_150++;
			iVar6 = 0;
			if (unk_0x6009FBA2EAAA60BE(Param0, Local_113.f_150, &Var1, &fVar2, &iVar6, iVar3, fVar4, 2,5f))
			{
				uVar7 = unk_0x97C50CC028477E0D(Var1, 1, iVar3, 1077936128, 0);
				if (unk_0x2EE1ADDFD32F7C35(uVar7))
				{
					Var8 = { 0f, 0f, 0f };
					Var9 = { 0f, 0f, 0f };
					iVar10 = 0;
					iVar11 = 0;
					fVar12 = 0f;
					if (unk_0x748728E3BFD8E371(Var1, 1f, 1, &Var9, &Var8, &iVar11, &iVar10, &fVar12, 1))
					{
						if (fVar2 < 90f || fVar2 >= 270f)
						{
							bVar13 = true;
						}
						else
						{
							bVar13 = false;
						}
						if (bVar13)
						{
							if (iVar6 == iVar11)
							{
								bVar14 = true;
							}
						}
						else if (iVar6 == iVar10)
						{
							bVar14 = true;
						}
						if (fVar12 < 0f)
						{
							fVar15 = 0f;
						}
						else if (unk_0xD2507ABB3A05C571(iVar7) || !unk_0x8D4953B2FFED058B(iVar7))
						{
							fVar15 = 0f;
						}
						else
						{
							if (bVar13)
							{
								if (bVar14)
								{
									fVar15 = ((4,5f * IntToFloat(iVar11)) * 0,5f);
								}
								else
								{
									fVar15 = (4,5f * IntToFloat(iVar11));
								}
								if (bVar14)
								{
									if (iVar11 > 2)
									{
										fVar15 = (fVar15 + (IntToFloat((iVar11 - 2)) * 1f));
									}
								}
								else if (iVar11 > 1)
								{
									fVar15 = (fVar15 + (IntToFloat((iVar11 - 1)) * 1f));
								}
							}
							else
							{
								if (bVar14)
								{
									fVar15 = ((4,5f * system::to_float(iVar10)) * 0,5f);
								}
								else
								{
									fVar15 = (4,5f * system::to_float(iVar10));
								}
								if (bVar14)
								{
									if (iVar10 > 2)
									{
										fVar15 = (fVar15 + IntToFloat((iVar10 - 2)));
									}
								}
								else if (iVar10 > 1)
								{
									fVar15 = (fVar15 + IntToFloat((iVar10 - 1)));
								}
							}
							iVar16 = 0;
							iVar17 = 0;
							if (unk_0x99FBD9356770254E(Var1, &iVar16, &iVar17))
							{
								if (func_395(iVar17, 64))
								{
									fVar15 = (fVar15 + (0,9f * fVar12));
								}
								if (func_395(iVar17, 4))
								{
									fVar15 = (fVar15 + -0,7f);
								}
							}
						}
						if (func_584(Param0, Var1) || unk_0x1D5CD3EAAA7422B0((Param0.f_2 - Var1.f_2)) < 0,5f)
						{
							Var1 = { unk_0xF10F2A2453AF1DFB(Var1, fVar2, fVar15, 0f, 0f) };
							if (!unk_0xD7813C7A74CA9AF9(Var1, 3f, 3f, 3f, func_7()))
							{
								if (func_574(Var1, &Var1, &fVar2))
								{
								}
								bVar0 = true;
							}
						}
					}
				}
			}
			if (Local_113.f_150 == 50)
			{
				Var1 = { Param0 };
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		*uParam1 = { Var1 };
		*uParam2 = fVar2;
		Local_113.f_150 = 0;
		return 1;
	}
	return 0;
}

int func_574(struct<3> Param0, var uParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1[6];
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	bool bVar6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	float fVar11;
	float fVar12;
	
	if (func_582(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam1 = { 1261,58f, -3332,685f, 5,4191f };
		*fParam2 = 163,87f;
		return 1;
	}
	if (func_582(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam1 = { -1577,16f, 5166,51f, 19,1864f };
		*fParam2 = 0f;
		return 1;
	}
	if (func_582(Param0, -874,9833f, 125,7645f, -100f, -768,6254f, 193,0297f, 100f))
	{
		*uParam1 = { -856,6151f, 163,7361f, 65,093f };
		*fParam2 = 355,3355f;
		return 1;
	}
	if (func_582(Param0, -39,2005f, -1473,55f, -100f, 10,6133f, -1430,099f, 100f))
	{
		*uParam1 = { -15,5181f, -1456,4f, 29,4244f };
		*fParam2 = 94,6893f;
		return 1;
	}
	if (func_582(Param0, 1964,742f, 3792,59f, -100f, 1992,636f, 3840,253f, 100f))
	{
		*uParam1 = { 1996,372f, 3818,831f, 31,1612f };
		*fParam2 = 170,0221f;
		return 1;
	}
	if (unk_0x26715B0ED6702C87(Param0, -68,2187f, -1086,951f, -100f, -10,54518f, -1106,895f, 100f, 43,5f, 0, 1))
	{
		*uParam1 = { -63,5854f, -1074,732f, 26,0995f };
		*fParam2 = 324,1257f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28f;
	}
	if (unk_0x26715B0ED6702C87(Var0, -209,3372f, -2011,099f, 26,62037f, -257,2225f, -2076,963f, 36,62037f, 30f, 0, 1))
	{
		*uParam1 = { -211,8546f, -2030,771f, 26,6204f };
		*fParam2 = 154,4302f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 159f;
	}
	if (unk_0x26715B0ED6702C87(Var0, -804,05f, 4216,412f, 204,4872f, -509,0679f, 4135,19f, 123,2502f, 250f, 0, 1))
	{
		*uParam1 = { -623,3622f, 3996f, 120,7669f };
		*fParam2 = 37,8784f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 180f;
	}
	if (unk_0x26715B0ED6702C87(Var0, -2203,167f, 183,3549f, 167,4022f, -2311,587f, 434,3828f, 195,4669f, 138,5f, 0, 1))
	{
		*uParam1 = { -2294,945f, 376,2506f, 173,4669f };
		*fParam2 = 296,6963f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 10f;
	}
	if (unk_0x26715B0ED6702C87(Var0, -2041,478f, -553,2159f, -0,089962f, -1787,08f, -768,0886f, 37,99918f, 220f, 0, 1))
	{
		*uParam1 = { -1897,077f, -557,3334f, 10,7279f };
		*fParam2 = 228,7709f;
		if (unk_0x26715B0ED6702C87(Var0, -1882,883f, -541,7442f, 4,675224f, -1929,626f, -598,6026f, 40,4298f, 35f, 0, 1))
		{
			return 1;
		}
		else
		{
			Var1[0 /*3*/] = { -1962,468f, -503,4229f, 10,8349f };
			Var1[1 /*3*/] = { -1924,472f, -534,7357f, 10,8181f };
			Var1[2 /*3*/] = { -1896,324f, -557,768f, 10,7256f };
			Var1[3 /*3*/] = { -1850,661f, -595,8367f, 10,4649f };
			Var1[4 /*3*/] = { -1809f, -632,1207f, 10,0016f };
			Var1[5 /*3*/] = { -1745,043f, -694,4053f, 9,1245f };
			iVar2 = 0;
			fVar3 = system::vdist2(Var1[0 /*3*/], Var0);
			iVar4 = 1;
			while (iVar4 <= 5)
			{
				fVar5 = system::vdist2(Var1[iVar4 /*3*/], Var0);
				if (fVar5 < fVar3)
				{
					fVar3 = fVar5;
					iVar2 = iVar4;
				}
				iVar4++;
			}
			*uParam1 = { Var1[iVar2 /*3*/] };
			switch (iVar2)
			{
				case 0:
					*fParam2 = 234,3999f;
					break;
				
				case 1:
					*fParam2 = 232,2255f;
					break;
				
				case 2:
					*fParam2 = 228,2855f;
					break;
				
				case 3:
					*fParam2 = 231,4914f;
					break;
				
				case 4:
					*fParam2 = 230,6703f;
					break;
				
				case 5:
					*fParam2 = 228,7709f;
					break;
			}
			return 1;
		}
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 330f;
	}
	if (unk_0x26715B0ED6702C87(Var0, -446,12f, 1057,452f, 318,6169f, -405,8336f, 1194,486f, 337,0966f, 106,25f, 0, 1))
	{
		*uParam1 = { -411,3629f, 1174,587f, 324,6421f };
		*fParam2 = 255,2881f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 20f;
	}
	if (unk_0x26715B0ED6702C87(Var0, -1362,091f, -29,26777f, -100f, -1377,953f, 152,2389f, 100f, 50f, 0, 1))
	{
		switch (unk_0xC5935DFB3F39785A(0, 8))
		{
			case 0:
				*uParam1 = { -1380,101f, 95,1566f, 53,5054f };
				*fParam2 = 4,555f;
				break;
			
			case 1:
				*uParam1 = { -1379,139f, 84,2472f, 53,0592f };
				*fParam2 = 6,9278f;
				break;
			
			case 2:
				*uParam1 = { -1378,427f, 74,5077f, 52,6622f };
				*fParam2 = 2,6813f;
				break;
			
			case 3:
				*uParam1 = { -1384,177f, 73,9207f, 52,7438f };
				*fParam2 = 5,542f;
				break;
			
			case 4:
				*uParam1 = { -1381,118f, 35,7838f, 52,659f };
				*fParam2 = 7,6687f;
				break;
			
			case 5:
				*uParam1 = { -1383,741f, 64,1491f, 52,6647f };
				*fParam2 = 2,5572f;
				break;
			
			case 6:
				*uParam1 = { -1382,616f, 49,6876f, 52,6585f };
				*fParam2 = 3,0185f;
				break;
			
			case 7:
				*uParam1 = { -1383,299f, 54,4598f, 52,6562f };
				*fParam2 = 6,2155f;
				break;
		}
		return 1;
	}
	if (unk_0x26715B0ED6702C87(Param0, 48,31006f, -1120,669f, 28,0305f, -12,12345f, -1112,084f, 36,08567f, 60f, 0, 1))
	{
		switch (unk_0xC5935DFB3F39785A(0, 8))
		{
			case 0:
				*uParam1 = { 50,9889f, -1092,525f, 28,2152f };
				*fParam2 = 150,8833f;
				break;
			
			case 1:
				*uParam1 = { 46,7725f, -1099,751f, 28,1639f };
				*fParam2 = 149,4322f;
				break;
			
			case 2:
				*uParam1 = { 41,6146f, -1107,742f, 28,1318f };
				*fParam2 = 154,1378f;
				break;
			
			case 3:
				*uParam1 = { 38,1922f, -1113,394f, 28,1507f };
				*fParam2 = 146,3778f;
				break;
			
			case 4:
				*uParam1 = { 13,0436f, -1124,767f, 27,7359f };
				*fParam2 = 91,163f;
				break;
			
			case 5:
				*uParam1 = { 1,4336f, -1125,042f, 27,1705f };
				*fParam2 = 91,0578f;
				break;
			
			case 6:
				*uParam1 = { -11,1811f, -1125,811f, 26,3688f };
				*fParam2 = 91,866f;
				break;
			
			case 7:
				*uParam1 = { 21,9431f, -1124,573f, 27,9417f };
				*fParam2 = 91,6961f;
				break;
		}
		return 1;
	}
	if (unk_0x26715B0ED6702C87(Param0, -1061,018f, -2540,235f, 18,66932f, -1023,332f, -2562,115f, 31,57616f, 250f, 0, 1))
	{
		switch (unk_0xC5935DFB3F39785A(0, 8))
		{
			case 0:
				*uParam1 = { -1023,982f, -2489,882f, 19,0755f };
				*fParam2 = 148,7004f;
				break;
			
			case 1:
				*uParam1 = { -1029,968f, -2500,438f, 19,0803f };
				*fParam2 = 148,7144f;
				break;
			
			case 2:
				*uParam1 = { -1070,546f, -2570,859f, 19,0836f };
				*fParam2 = 150,0955f;
				break;
			
			case 3:
				*uParam1 = { -1056,065f, -2545,662f, 19,0809f };
				*fParam2 = 149,5649f;
				break;
			
			case 4:
				*uParam1 = { -1050,578f, -2536,219f, 19,0824f };
				*fParam2 = 150,7363f;
				break;
			
			case 5:
				*uParam1 = { -1036,032f, -2510,902f, 19,0794f };
				*fParam2 = 147,2113f;
				break;
			
			case 6:
				*uParam1 = { -1044,487f, -2525,534f, 19,079f };
				*fParam2 = 150,7597f;
				break;
			
			case 7:
				*uParam1 = { -1064,5f, -2560,653f, 19,0905f };
				*fParam2 = 150,7081f;
				break;
		}
		return 1;
	}
	if (unk_0x26715B0ED6702C87(Param0, -1061,059f, -2540,254f, 10,94467f, -1023,297f, -2562,052f, 18,51685f, 250f, 0, 1))
	{
		switch (unk_0xC5935DFB3F39785A(0, 8))
		{
			case 0:
				*uParam1 = { -1044,741f, -2528,786f, 12,7568f };
				*fParam2 = 150,9439f;
				break;
			
			case 1:
				*uParam1 = { -1050,763f, -2539,498f, 12,7566f };
				*fParam2 = 150,851f;
				break;
			
			case 2:
				*uParam1 = { -1054,952f, -2546,86f, 12,7566f };
				*fParam2 = 149,9285f;
				break;
			
			case 3:
				*uParam1 = { -1060,397f, -2556,898f, 12,6066f };
				*fParam2 = 150,8244f;
				break;
			
			case 4:
				*uParam1 = { -1020,744f, -2490,084f, 12,6396f };
				*fParam2 = 148,6134f;
				break;
			
			case 5:
				*uParam1 = { -1076,904f, -2589,179f, 12,6858f };
				*fParam2 = 149,0112f;
				break;
			
			case 6:
				*uParam1 = { -1026,387f, -2501,952f, 12,6923f };
				*fParam2 = 149,7553f;
				break;
			
			case 7:
				*uParam1 = { -1070,506f, -2578,389f, 12,6932f };
				*fParam2 = 148,5232f;
				break;
		}
		return 1;
	}
	if (unk_0x26715B0ED6702C87(Param0, -1043,364f, -2747,29f, 16,96057f, -991,5368f, -2657,682f, 69,12349f, 200f, 0, 1))
	{
		switch (unk_0xC5935DFB3F39785A(0, 8))
		{
			case 0:
				*uParam1 = { -1067,846f, -2708,94f, 19,0588f };
				*fParam2 = 230,9025f;
				break;
			
			case 1:
				*uParam1 = { -1058,224f, -2716,217f, 19,06f };
				*fParam2 = 237,1285f;
				break;
			
			case 2:
				*uParam1 = { -1004,567f, -2744,797f, 19,0811f };
				*fParam2 = 255,6885f;
				break;
			
			case 3:
				*uParam1 = { -1049,509f, -2721,58f, 19,0546f };
				*fParam2 = 242,3581f;
				break;
			
			case 4:
				*uParam1 = { -1017,154f, -2740,117f, 19,0525f };
				*fParam2 = 243,5798f;
				break;
			
			case 5:
				*uParam1 = { -1042,087f, -2726,077f, 19,0452f };
				*fParam2 = 240,2381f;
				break;
			
			case 6:
				*uParam1 = { -1027,353f, -2734,462f, 19,0509f };
				*fParam2 = 239,8703f;
				break;
			
			case 7:
				*uParam1 = { -1033,74f, -2730,746f, 19,0521f };
				*fParam2 = 239,9237f;
				break;
		}
		return 1;
	}
	if (unk_0x26715B0ED6702C87(Param0, -1047,646f, -2754,947f, 2,941969f, -991,7314f, -2653,153f, 16,89228f, 200f, 0, 1))
	{
		switch (unk_0xC5935DFB3F39785A(0, 8))
		{
			case 0:
				*uParam1 = { -971,9154f, -2749,122f, 12,6069f };
				*fParam2 = 265,8022f;
				break;
			
			case 1:
				*uParam1 = { -980,6166f, -2748,535f, 12,757f };
				*fParam2 = 263,5472f;
				break;
			
			case 2:
				*uParam1 = { -987,6072f, -2747,273f, 12,6069f };
				*fParam2 = 257,2886f;
				break;
			
			case 3:
				*uParam1 = { -1006,815f, -2739,345f, 12,6334f };
				*fParam2 = 242,1315f;
				break;
			
			case 4:
				*uParam1 = { -1051,83f, -2713,553f, 12,6333f };
				*fParam2 = 239,9312f;
				break;
			
			case 5:
				*uParam1 = { -1041,004f, -2719,647f, 12,6402f };
				*fParam2 = 240,1081f;
				break;
			
			case 6:
				*uParam1 = { -1023,832f, -2729,465f, 12,6445f };
				*fParam2 = 239,6737f;
				break;
			
			case 7:
				*uParam1 = { -1012,848f, -2735,172f, 12,6656f };
				*fParam2 = 237,6545f;
				break;
		}
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 20f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 845,7216f, -990,7473f, 37,4696f, 846,3397f, -1066,88f, 16,96623f, 90f, 0, 1))
	{
		switch (unk_0xC5935DFB3F39785A(0, 8))
		{
			case 0:
				*uParam1 = { 868,1039f, -995,9224f, 29,7369f };
				*fParam2 = 93,132f;
				break;
			
			case 1:
				*uParam1 = { 859,283f, -996,4102f, 28,7865f };
				*fParam2 = 92,2581f;
				break;
			
			case 2:
				*uParam1 = { 849,4288f, -997,1062f, 27,5347f };
				*fParam2 = 92,714f;
				break;
			
			case 3:
				*uParam1 = { 841,1268f, -997,4826f, 26,5744f };
				*fParam2 = 92,8628f;
				break;
			
			case 4:
				*uParam1 = { 831,2605f, -1009,556f, 25,599f };
				*fParam2 = 268,6186f;
				break;
			
			case 5:
				*uParam1 = { 844,6506f, -1010,09f, 26,9894f };
				*fParam2 = 270,076f;
				break;
			
			case 6:
				*uParam1 = { 852,2498f, -1010,132f, 27,8091f };
				*fParam2 = 269,722f;
				break;
			
			case 7:
				*uParam1 = { 861,4028f, -1010,025f, 28,808f };
				*fParam2 = 270,7686f;
				break;
		}
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 20f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 767,3736f, -1077,429f, -10,78654f, 682,8284f, -1080,686f, 79,67303f, 60f, 0, 1))
	{
		switch (unk_0xC5935DFB3F39785A(0, 8))
		{
			case 0:
				*uParam1 = { 703,2726f, -1067,7f, 21,4765f };
				*fParam2 = 181,3629f;
				break;
			
			case 1:
				*uParam1 = { 715,2089f, -1070,399f, 21,2708f };
				*fParam2 = 175,4362f;
				break;
			
			case 2:
				*uParam1 = { 715,2911f, -1059,42f, 21,0876f };
				*fParam2 = 181,0347f;
				break;
			
			case 3:
				*uParam1 = { 709,6841f, -1086,78f, 21,419f };
				*fParam2 = 233,169f;
				break;
			
			case 4:
				*uParam1 = { 703,807f, -1057,866f, 21,4152f };
				*fParam2 = 170,1609f;
				break;
			
			case 5:
				*uParam1 = { 708,1994f, -1048,194f, 21,216f };
				*fParam2 = 134,2729f;
				break;
			
			case 6:
				*uParam1 = { 711,1124f, -1069,423f, 21,3129f };
				*fParam2 = 177,9198f;
				break;
			
			case 7:
				*uParam1 = { 703,545f, -1078,718f, 21,3987f };
				*fParam2 = 180,5686f;
				break;
		}
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 31f;
	}
	if (func_579(3, Var0) && func_578(Var0, 3, 0, 0))
	{
		*uParam1 = { -1520,121f, 2731,511f, 16,6437f };
		*fParam2 = 48,1572f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 77,2f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 1535,987f, -2041,497f, 68,21275f, 1529,357f, -2204,463f, 96,11195f, 105f, 0, 1))
	{
		*uParam1 = { 1540,75f, -2051,49f, 76,85f };
		*fParam2 = 255,41f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 51,1739f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 1185,81f, -1768,367f, 28,31145f, 1369,068f, -1701,452f, 66,25389f, 70f, 1, 1))
	{
		if (func_577(Var0, 1283,326f, -1731,522f, 51,78555f, 17f))
		{
			*uParam1 = { 1283,326f, -1731,522f, 51,78555f };
			*fParam2 = 275,4274f;
			return 1;
		}
		if (func_577(Var0, 1334,386f, -1709,762f, 55,70131f, 41f))
		{
			*uParam1 = { 1334,386f, -1709,762f, 55,70131f };
			*fParam2 = 275,4411f;
			return 1;
		}
		if (func_577(Var0, 1246,166f, -1750,625f, 45,35691f, 28f))
		{
			*uParam1 = { 1246,166f, -1750,625f, 45,35691f };
			*fParam2 = 301,2981f;
			return 1;
		}
		if (func_577(Var0, 1196,272f, -1753,051f, 37,63976f, 32f))
		{
			*uParam1 = { 1196,272f, -1753,051f, 37,63976f };
			*fParam2 = 209,4354f;
			return 1;
		}
		*uParam1 = { 1283,326f, -1731,522f, 51,78555f };
		*fParam2 = 275,4274f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 25f;
	}
	if (func_577(Var0, -1693,302f, -1109,13f, 17,8977f, 240f))
	{
		if ((unk_0x26715B0ED6702C87(Var0, -1538,981f, -941,1323f, 10,56623f, -1715,57f, -1139,766f, 52,20361f, 110f, 0, 1) || unk_0x26715B0ED6702C87(Var0, -1739,989f, -1115,973f, 10,08726f, -1800,515f, -1187,18f, 52,0172f, 25f, 0, 1)) || unk_0x26715B0ED6702C87(Var0, -1801,766f, -1180,252f, 4,017236f, -1857,718f, -1244,628f, 38,49653f, 85f, 0, 1))
		{
			*uParam1 = { -1624,445f, -976,9755f, 12,0175f };
			*fParam2 = 141,167f;
			return 1;
		}
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 10f;
	}
	if (unk_0x26715B0ED6702C87(Var0, -1140,89f, -1573,135f, -6,566939f, -1067,084f, -1675,976f, 23,53153f, 52f, 0, 1))
	{
		*uParam1 = { -1095,63f, -1577,24f, 3,82f };
		*fParam2 = 216,12f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 114f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 1324,172f, 1110,748f, 99,65493f, 1523,097f, 1110,473f, 132,8859f, 170f, 0, 1))
	{
		switch (unk_0xC5935DFB3F39785A(0, 3))
		{
			case 0:
				*uParam1 = { 1369,246f, 1147,653f, 112,7592f };
				*fParam2 = 182,0998f;
				break;
			
			case 1:
				*uParam1 = { 1360,848f, 1139,121f, 112,7592f };
				*fParam2 = 83,3356f;
				break;
			
			case 2:
				*uParam1 = { 1364,751f, 1154,367f, 112,7592f };
				*fParam2 = 223,2795f;
				break;
		}
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 40f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 1737,39f, 3287,795f, 35,13897f, 1724,345f, 3337,854f, 57,20038f, 40f, 0, 1))
	{
		*uParam1 = { 1782,19f, 3300,076f, 40,4593f };
		*fParam2 = 142,426f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 7f;
	}
	if (unk_0x26715B0ED6702C87(Var0, -695,7981f, -1379,678f, 24,48124f, -777,3731f, -1491,13f, -3,594945f, 72f, 0, 1))
	{
		*uParam1 = { -658,2056f, -1388,789f, 9,499f };
		*fParam2 = 174,6945f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 325f;
	}
	if (func_576(Var0, -75,59782f, -818,6082f, 325,1745f, 58f))
	{
		*uParam1 = { -142,367f, -895,0251f, 28,191f };
		*fParam2 = 71,6555f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 36,1141f;
	}
	if (func_579(7, Var0) && func_578(Var0, 7, 0, 0))
	{
		*uParam1 = { -1012,31f, -465,1634f, 36,1141f };
		*fParam2 = 112,1485f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 12,7091f;
	}
	if (func_579(2, Var0) && func_578(Var0, 2, 0, 0))
	{
		switch (unk_0xC5935DFB3F39785A(0, 8))
		{
			case 0:
				*uParam1 = { -1023,982f, -2489,882f, 19,0755f };
				*fParam2 = 148,7004f;
				break;
			
			case 1:
				*uParam1 = { -1029,968f, -2500,438f, 19,0803f };
				*fParam2 = 148,7144f;
				break;
			
			case 2:
				*uParam1 = { -1070,546f, -2570,859f, 19,0836f };
				*fParam2 = 150,0955f;
				break;
			
			case 3:
				*uParam1 = { -1056,065f, -2545,662f, 19,0809f };
				*fParam2 = 149,5649f;
				break;
			
			case 4:
				*uParam1 = { -1050,578f, -2536,219f, 19,0824f };
				*fParam2 = 150,7363f;
				break;
			
			case 5:
				*uParam1 = { -1036,032f, -2510,902f, 19,0794f };
				*fParam2 = 147,2113f;
				break;
			
			case 6:
				*uParam1 = { -1044,487f, -2525,534f, 19,079f };
				*fParam2 = 150,7597f;
				break;
			
			case 7:
				*uParam1 = { -1064,5f, -2560,653f, 19,0905f };
				*fParam2 = 150,7081f;
				break;
		}
		return 1;
	}
	Var0 = { Param0 };
	bVar6 = false;
	Var7 = { -509,5746f, 4938,918f, 146,3271f };
	fVar8 = 232,0109f;
	fVar9 = func_575(Param0, Var7);
	Var10 = { 2450,604f, 5129,224f, 45,9722f };
	fVar11 = 241,1957f;
	fVar12 = func_575(Param0, Var10);
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 400f;
	}
	if (unk_0x26715B0ED6702C87(Var0, -148,8777f, 4862,204f, 305,6442f, 454,6274f, 5573,104f, 804,097f, 250f, 0, 1))
	{
		bVar6 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 200f;
	}
	if (unk_0x26715B0ED6702C87(Var0, -482,8931f, 4990,255f, 155,1601f, 7,830751f, 5009,371f, 430,7604f, 250f, 0, 1))
	{
		bVar6 = true;
	}
	if (bVar6)
	{
		*uParam1 = { Var7 };
		*fParam2 = fVar8;
		if (fVar12 < fVar9)
		{
			*uParam1 = { Var10 };
			*fParam2 = fVar11;
		}
		return 1;
	}
	bVar6 = false;
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 700f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 441,3999f, 5579,99f, 802,5138f, 965,7776f, 5675,921f, 601,2646f, 250f, 0, 1))
	{
		bVar6 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 300f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 954,1139f, 5641,051f, 646,5054f, 2140,375f, 5377,753f, 149,1221f, 250f, 0, 1))
	{
		bVar6 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 100f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 2117,348f, 5377,259f, 173,3297f, 2439,934f, 5297,445f, 62,68662f, 100f, 0, 1))
	{
		bVar6 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 65f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 2393,347f, 5321,58f, 107,0624f, 2523,946f, 5124,746f, 41,68384f, 70f, 0, 1))
	{
		bVar6 = true;
	}
	if (bVar6)
	{
		*uParam1 = { Var10 };
		*fParam2 = fVar11;
		if (fVar9 < fVar12)
		{
			*uParam1 = { Var7 };
			*fParam2 = fVar8;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 6f;
	}
	if (func_576(Var0, -99,68751f, -2448,891f, 5,01731f, 230f))
	{
		if ((((unk_0x26715B0ED6702C87(Var0, 85,05448f, -2511,884f, -2,996267f, -57,59977f, -2412,716f, 15,00095f, 75f, 0, 1) || unk_0x26715B0ED6702C87(Var0, 7,516524f, -2546,741f, 1,331557f, -177,3268f, -2417,047f, 19,16044f, 80f, 0, 1)) || unk_0x26715B0ED6702C87(Var0, -260,0354f, -2419,978f, 1,399635f, -27,26375f, -2423,848f, 25,00064f, 80f, 0, 1)) || unk_0x26715B0ED6702C87(Var0, -187,4256f, -2516,086f, -6,849975f, -186,7518f, -2438,149f, 25,0016f, 40f, 0, 1)) || unk_0x26715B0ED6702C87(Var0, -73,60813f, -2538,564f, -6,989857f, -183,2556f, -2465,145f, 25,0203f, 70f, 0, 1))
		{
			switch (unk_0xC5935DFB3F39785A(0, 2))
			{
				case 0:
					*uParam1 = { 29,5582f, -2553,587f, 5,0004f };
					*fParam2 = 253,9545f;
					break;
				
				case 1:
					*uParam1 = { -189,6824f, -2531,649f, 5,0031f };
					*fParam2 = 0,0408f;
					break;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28,4f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 412,279f, 6481,868f, 25,80821f, 468,9353f, 6442,752f, 45,60727f, 24f, 0, 1))
	{
		*uParam1 = { 445,231f, 6476,948f, 28,4862f };
		*fParam2 = 219,4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28,2065f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 476,5394f, -1301,548f, 44,82458f, 499,5822f, -1339,025f, 26,31703f, 35f, 0, 1))
	{
		*uParam1 = { 498,185f, -1288,535f, 28,1923f };
		*fParam2 = 181,3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28,2065f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 496,9816f, -1412,255f, 43,29391f, 497,269f, -1339,364f, 26,31648f, 40f, 0, 1))
	{
		*uParam1 = { 504,1738f, -1421,251f, 28,2065f };
		*fParam2 = 83,2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 73f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 951,1704f, -147,0047f, 71,54326f, 1005,245f, -98,44745f, 95,62679f, 70f, 0, 1))
	{
		*uParam1 = { 961,3104f, -150,1964f, 73,4016f };
		*fParam2 = 58,9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 52f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 1137,022f, 89,06853f, 74,89022f, 1267,821f, 292,0106f, 102,9904f, 195f, 0, 1))
	{
		*uParam1 = { 1118,751f, 262,0209f, 79,8555f };
		*fParam2 = 52,3086f;
		return 1;
	}
	else if (unk_0x26715B0ED6702C87(Var0, 1137,022f, 89,06853f, 71,89022f, 1010,046f, -91,56699f, 103,4568f, 180f, 0, 1))
	{
		*uParam1 = { 1134,053f, 53,1835f, 79,7553f };
		*fParam2 = 145,5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 30,6f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 191,8731f, -723,553f, 40,23576f, 79,58656f, -687,6684f, 29,54734f, 85f, 0, 1))
	{
		switch (unk_0xC5935DFB3F39785A(0, 2))
		{
			case 0:
				*uParam1 = { 182,6361f, -753,5836f, 31,8051f };
				*fParam2 = 162,0019f;
				break;
			
			case 1:
				*uParam1 = { 81,5318f, -675,4875f, 30,5695f };
				*fParam2 = 341,8541f;
				break;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 33,5f;
	}
	if (unk_0x26715B0ED6702C87(Var0, -40f, -687,7f, 36,6f, -72,7f, -682f, 29,6f, 15f, 0, 1) || unk_0x26715B0ED6702C87(Var0, -45,3f, -687,8f, 29,3f, 5,9f, -688,7f, 36,8f, 55f, 0, 1))
	{
		*uParam1 = { -88,4f, -660,9f, 35f };
		*fParam2 = -20f;
		return 1;
	}
	else if (unk_0x26715B0ED6702C87(Var0, 8,1f, -685,5f, 31,2f, 26,3f, -665,7f, 35,2f, 10f, 0, 1))
	{
		*uParam1 = { 61,4f, -653,2f, 32f };
		*fParam2 = 160f;
		return 1;
	}
	if (unk_0x26715B0ED6702C87(Param0, 496,2593f, -3116,586f, 13,6414f, 471,4366f, -3116,258f, 5,7109f, 10f, 0, 1))
	{
		*uParam1 = { 484,0132f, -3033,162f, 5,0717f };
		*fParam2 = 140,7302f;
		return 1;
	}
	Var0 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var0.f_2 = 28f;
	}
	if (unk_0x26715B0ED6702C87(Var0, 400,9871f, -1659,756f, 26,91615f, 437,6566f, -1617,479f, 48,34185f, 45f, 0, 1))
	{
		switch (unk_0xC5935DFB3F39785A(0, 2))
		{
			case 0:
				*uParam1 = { 413,7399f, -1608,911f, 28,161f };
				*fParam2 = 238,2568f;
				break;
			
			case 1:
				*uParam1 = { 416,8107f, -1666,514f, 28,1758f };
				*fParam2 = 144,8478f;
				break;
		}
		return 1;
	}
	if (unk_0x26715B0ED6702C87(Var0, -1112,586f, -2674,767f, 12,56804f, -1215,468f, -2854,589f, 19,44588f, 41,25f, 0, 1))
	{
		switch (unk_0xC5935DFB3F39785A(0, 2))
		{
			case 0:
				*uParam1 = { -1094,492f, -2662,27f, 12,6066f };
				*fParam2 = 196,0365f;
				break;
			
			case 1:
				*uParam1 = { -1076,736f, -2684,039f, 12,807f };
				*fParam2 = 211,7278f;
				break;
		}
		return 1;
	}
	return 0;
}

float func_575(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return system::vdist2(Param0.f_0, Param0.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
}

bool func_576(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return system::vdist2(Param0, Param1) <= (fParam2 * fParam2);
}

bool func_577(struct<3> Param0, struct<3> Param1, float fParam2)
{
	struct<3> Var0;
	
	Var0 = { Param1 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam2 * fParam2);
}

int func_578(struct<3> Param0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332,211f, 100,4608f, 40,38437f };
			Var1[0 /*3*/] = { -1094,238f, 148,4274f, 73f };
			fVar2[0] = 171,25f;
			Var0[1 /*3*/] = { -999,7344f, -110,2231f, 25,25706f };
			Var1[1 /*3*/] = { -1149,494f, 109,2558f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035,113f, -84,95885f, 28,2746f };
			Var1[2 /*3*/] = { -1261,103f, 50,08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804,3439f, -3346,5f, 10f };
			Var1[0 /*3*/] = { -1816,954f, -2768,893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911,488f, -2934,197f, 10f };
			Var1[1 /*3*/] = { -968,6236f, -3477,748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844,9433f, -2802,785f, 10f };
			Var1[2 /*3*/] = { -1011,081f, -3086,904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185,5f;
			Var0[3 /*3*/] = { -1021,086f, -2952,277f, 10f };
			Var1[3 /*3*/] = { -1599,008f, -2616,271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027,136f, -2436,457f, 10f };
			Var1[4 /*3*/] = { -1392,61f, -2226,763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193,5f;
			Var0[5 /*3*/] = { -1497,549f, -2408,712f, 10f };
			Var1[5 /*3*/] = { -1136,917f, -2617,955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234,5f;
			Var0[6 /*3*/] = { -982,7924f, -2831,709f, 12,93313f };
			Var1[6 /*3*/] = { -966,4677f, -2803,458f, 16,68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110,083f, -3496,806f, 12f };
			Var1[7 /*3*/] = { -1955,298f, -3010,431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886,899f, -3193,024f, 12f };
			Var1[8 /*3*/] = { -1836,143f, -3105,268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134,337f, -3535,648f, 12f };
			Var1[9 /*3*/] = { -1259,649f, -3463,486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30,75f;
			Var0[10 /*3*/] = { -969,1279f, -3463,899f, 12f };
			Var1[10 /*3*/] = { -896,3734f, -3505,715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369,491f, -2173,579f, 10f };
			Var1[11 /*3*/] = { -1685,626f, -2720,364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29,25f;
			Var0[12 /*3*/] = { -1010,926f, -3550,943f, 10f };
			Var1[12 /*3*/] = { -1110,198f, -3493,617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773,944f, 3287,334f, 30f };
			Var1[0 /*3*/] = { -2029,776f, 2845,083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			Var0[1 /*3*/] = { -2725,889f, 3291,099f, 30f };
			Var1[1 /*3*/] = { -2009,182f, 2879,835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442,026f, 3326,699f, 30f };
			Var1[2 /*3*/] = { -2033,928f, 3089,049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			Var0[3 /*3*/] = { -1917,165f, 3374,209f, 30f };
			Var1[3 /*3*/] = { -2016,791f, 3195,058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86,25f;
			Var0[4 /*3*/] = { -2192,753f, 3373,278f, 30f };
			Var1[4 /*3*/] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150,5f;
			Var0[5 /*3*/] = { -2077,663f, 3344,514f, 30f };
			Var1[5 /*3*/] = { -2191,544f, 3150,417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140,5f;
			Var0[6 /*3*/] = { -2861,755f, 3352,661f, 30f };
			Var1[6 /*3*/] = { -2715,871f, 3269,916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005,574f, 3364,533f, 30f };
			Var1[7 /*3*/] = { -1977,569f, 3330,888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682,235f, 3004,285f, 30f };
			Var1[8 /*3*/] = { -1942,747f, 2947,441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248,75f;
			Var0[9 /*3*/] = { -2393,295f, 2936,406f, 31,6801f };
			Var1[9 /*3*/] = { -2453,037f, 3006,863f, 52,31003f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347,185f, 3023,83f, 31,56573f };
			Var1[10 /*3*/] = { -2517,33f, 2989,063f, 49,95644f };
			fVar2[10] = 140f;
			Var0[11 /*3*/] = { -2259,922f, 3358,04f, 29,99972f };
			Var1[11 /*3*/] = { -2299,772f, 3385,79f, 38,06014f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476,309f, 3363,914f, 31,67933f };
			Var1[12 /*3*/] = { -2431,981f, 3287,669f, 39,97826f };
			fVar2[12] = 214,25f;
			Var0[13 /*3*/] = { -2103,081f, 2797,783f, 29,37864f };
			Var1[13 /*3*/] = { -2096,821f, 2874,423f, 57,80989f };
			fVar2[13] = 65,75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541,607f, 2527,555f, 40f };
			Var1[0 /*3*/] = { 1815,575f, 2535,06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788,879f, 2445,727f, 40f };
			Var1[1 /*3*/] = { 1716,96f, 2502,957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88,5f;
			Var0[2 /*3*/] = { 1601,157f, 2436,244f, 40f };
			Var1[2 /*3*/] = { 1650,078f, 2515,923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133,25f;
			Var0[3 /*3*/] = { 1706,331f, 2407,597f, 40f };
			Var1[3 /*3*/] = { 1698,555f, 2460,208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104,5f;
			Var0[4 /*3*/] = { 1712,452f, 2756,218f, 40f };
			Var1[4 /*3*/] = { 1718,848f, 2589,162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121,75f;
			Var0[5 /*3*/] = { 1830,228f, 2661,24f, 40f };
			Var1[5 /*3*/] = { 1774,812f, 2679,419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84,5f;
			Var0[6 /*3*/] = { 1559,05f, 2632,22f, 40f };
			Var1[6 /*3*/] = { 1657,208f, 2595,484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103,75f;
			Var0[7 /*3*/] = { 1612,021f, 2716,869f, 40f };
			Var1[7 /*3*/] = { 1657,165f, 2669,721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104,25f;
			Var0[8 /*3*/] = { 1809,872f, 2729,827f, 40f };
			Var1[8 /*3*/] = { 1789,855f, 2705,037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818,789f, 2605,948f, 40f };
			Var1[9 /*3*/] = { 1783,114f, 2606,783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51,25f;
			iVar3 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411,002f, 3663,185f, 20f };
			Var1[0 /*3*/] = { 3615,583f, 3626,194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45,75f;
			Var0[1 /*3*/] = { 3426,66f, 3733,078f, 20f };
			Var1[1 /*3*/] = { 3643,801f, 3694,362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446,036f, 3795,688f, 20f };
			Var1[2 /*3*/] = { 3650,914f, 3766,152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81,5f;
			iVar3 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526,053f, -3391,497f, -10f };
			Var1[0 /*3*/] = { 523,2289f, -3118,678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459,4397f, -3199,99f, 4,819676f };
			Var1[1 /*3*/] = { 593,8928f, -3199,998f, 30,06926f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552,8467f, -3111,054f, 4,819394f };
			Var1[2 /*3*/] = { 585,3137f, -3111,844f, 17,56923f };
			fVar2[2] = 12,5f;
			Var0[3 /*3*/] = { 598,4666f, -3140,147f, 4,819257f };
			Var1[3 /*3*/] = { 597,4973f, -3117,063f, 17,31926f };
			fVar2[3] = 9,75f;
			iVar3 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108,55f, -570,8798f, 20f };
			Var1[0 /*3*/] = { -1187,811f, -477,5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201,378f, -485,9673f, 20f };
			Var1[1 /*3*/] = { -1215,796f, -464,8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985,6311f, -525,4233f, 20f };
			Var1[2 /*3*/] = { -1013,393f, -475,2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055,849f, -477,8226f, 20f };
			Var1[3 /*3*/] = { -1073,333f, -498,717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461,5684f, -984,572f, 29,43951f };
			Var1[0 /*3*/] = { 471,17f, -984,4292f, 40,14212f };
			fVar2[0] = 7,75f;
			Var0[1 /*3*/] = { 457,3404f, -984,756f, 34,43951f };
			Var1[1 /*3*/] = { 457,2084f, -993,7189f, 29,38958f };
			fVar2[1] = 14,75f;
			Var0[2 /*3*/] = { 477,6227f, -986,6f, 40,00819f };
			Var1[2 /*3*/] = { 424,8687f, -986,3279f, 48,71241f };
			fVar2[2] = 31,5f;
			Var0[3 /*3*/] = { 474,3889f, -974,4613f, 39,55761f };
			Var1[3 /*3*/] = { 474,0358f, -1021,972f, 49,10033f };
			fVar2[3] = 30,5f;
			Var0[4 /*3*/] = { 442,1768f, -974,1888f, 29,68951f };
			Var1[4 /*3*/] = { 442,1855f, -979,8635f, 33,43951f };
			fVar2[4] = 6,75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x26715B0ED6702C87(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, 1))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_579(int iParam0, struct<3> Param1)
{
	return system::vdist2(Param1, func_581(iParam0)) < func_580(iParam0);
}

float func_580(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_581(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1155,877f, 48,3426f, 52,4985f;
			break;
		
		case 2:
			return -1245,12f, -2818,38f, 12,94f;
			break;
		
		case 3:
			return -2176,19f, 3092,07f, 31,81f;
			break;
		
		case 4:
			return 1701,666f, 2586,261f, 51,4925f;
			break;
		
		case 5:
			return 3525,058f, 3711,323f, 35,6423f;
			break;
		
		case 6:
			return 548,1421f, -3157,961f, 5,0696f;
			break;
		
		case 7:
			return -1142,411f, -526,4487f, 31,6878f;
			break;
		
		case 8:
			return 456,8879f, -985,2783f, 35,6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_582(struct<3> Param0, struct<3> Param1, struct<3> Param2)
{
	if ((func_583(Param0, Param1, Param2) && Param0.f_2 >= Param1.f_2) && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

int func_583(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5)
{
	if ((Param0.f_0 >= Param2.f_0 && Param0.f_0 <= Param4.f_0) && (Param0.f_1 >= Param2.f_1 && Param0.f_1 <= Param4.f_1))
	{
		return 1;
	}
	return 0;
}

int func_584(struct<3> Param0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	
	if (Param0.f_2 == 1f)
	{
		return 1;
	}
	fVar0 = unk_0x1D5CD3EAAA7422B0((Param1.f_2 - Param0.f_2));
	fVar1 = (system::vdist(Param0, Param1) / 1,75f);
	if (fVar0 < fVar1)
	{
		return 1;
	}
	return 0;
}

int func_585(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0xDAEDE051F3F4FD45(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0x1B79E937E91F40C3("SanAnd", uVar0) || unk_0x1B79E937E91F40C3("Alamo", uVar0)) || unk_0x1B79E937E91F40C3("ArmyB", uVar0)) || unk_0x1B79E937E91F40C3("BhamCa", uVar0)) || unk_0x1B79E937E91F40C3("Baytre", uVar0)) || unk_0x1B79E937E91F40C3("BradT", uVar0)) || unk_0x1B79E937E91F40C3("BradP", uVar0)) || unk_0x1B79E937E91F40C3("CANNY", uVar0)) || unk_0x1B79E937E91F40C3("CCreak", uVar0)) || unk_0x1B79E937E91F40C3("ChamH", uVar0)) || unk_0x1B79E937E91F40C3("CHU", uVar0)) || unk_0x1B79E937E91F40C3("COSI", uVar0)) || unk_0x1B79E937E91F40C3("CMSW", uVar0)) || unk_0x1B79E937E91F40C3("Cypre", uVar0)) || unk_0x1B79E937E91F40C3("Desrt", uVar0)) || unk_0x1B79E937E91F40C3("ELGorl", uVar0)) || unk_0x1B79E937E91F40C3("Galli", uVar0)) || unk_0x1B79E937E91F40C3("Galfish", uVar0)) || unk_0x1B79E937E91F40C3("Harmo", uVar0)) || unk_0x1B79E937E91F40C3("HumLab", uVar0)) || unk_0x1B79E937E91F40C3("Jail", uVar0)) || unk_0x1B79E937E91F40C3("LAct", uVar0)) || unk_0x1B79E937E91F40C3("LDam", uVar0)) || unk_0x1B79E937E91F40C3("Lago", uVar0)) || unk_0x1B79E937E91F40C3("MTChil", uVar0)) || unk_0x1B79E937E91F40C3("MTJose", uVar0)) || unk_0x1B79E937E91F40C3("MTGordo", uVar0)) || unk_0x1B79E937E91F40C3("NCHU", uVar0)) || unk_0x1B79E937E91F40C3("Oceana", uVar0)) || unk_0x1B79E937E91F40C3("Palmpow", uVar0)) || unk_0x1B79E937E91F40C3("PBluff", uVar0)) || unk_0x1B79E937E91F40C3("Paleto", uVar0)) || unk_0x1B79E937E91F40C3("PalCov", uVar0)) || unk_0x1B79E937E91F40C3("PalFor", uVar0)) || unk_0x1B79E937E91F40C3("PalHigh", uVar0)) || unk_0x1B79E937E91F40C3("RTRAK", uVar0)) || unk_0x1B79E937E91F40C3("Rancho", uVar0)) || unk_0x1B79E937E91F40C3("SANDY", uVar0)) || unk_0x1B79E937E91F40C3("TongvaH", uVar0)) || unk_0x1B79E937E91F40C3("TongvaV", uVar0)) || unk_0x1B79E937E91F40C3("Zenora", uVar0)) || unk_0x1B79E937E91F40C3("Slab", uVar0)) || unk_0x1B79E937E91F40C3("WindF", uVar0)) || unk_0x1B79E937E91F40C3("Zancudo", uVar0)) || unk_0x1B79E937E91F40C3("SanChia", uVar0)) || unk_0x1B79E937E91F40C3("zQ_UAR", uVar0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_586()
{
	struct<3> Var0;
	var uVar1;
	
	uVar1 = unk_0xD56419CB9E15983F(unk_0x2A3612A4B836469E());
	if (unk_0xC450B06E5AAA0985(uVar1))
	{
		Var0 = { unk_0x3CF9D442F2C902BD(uVar1) };
	}
	else
	{
		Var0 = { func_587() };
	}
	return Var0;
}

Vector3 func_587()
{
	switch (func_161())
	{
		case 1:
			return 400,0766f, -93,09241f, 66,30355f;
		
		case 2:
			return -1045,499f, -388,2172f, 36,64295f;
		
		case 3:
			return -627,717f, -688,1001f, 29,8949f;
		
		case 4:
			return -1045,31f, -748,3319f, 18,0513f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_588()
{
	if (func_558(unk_0x30DE412C1194FCDD(), 0))
	{
		return 0;
	}
	if (!func_590())
	{
		return 0;
	}
	if (!func_589())
	{
		return 0;
	}
	if (!func_12())
	{
		return 0;
	}
	return 1;
}

int func_589()
{
	switch (func_11())
	{
		case 1:
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

int func_590()
{
	switch (func_325(unk_0x30DE412C1194FCDD()))
	{
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

void func_591()
{
	if (!func_597())
	{
		return;
	}
	if (func_596(unk_0x4A8C381C258A124D(), func_7(), 120f, 1))
	{
		if (!func_334(unk_0x30DE412C1194FCDD(), 5))
		{
			func_327(5);
		}
	}
	else if (func_334(unk_0x30DE412C1194FCDD(), 5))
	{
		func_595(5);
	}
	if (!func_334(unk_0x30DE412C1194FCDD(), 4) && func_592())
	{
		func_327(4);
	}
}

int func_592()
{
	if (func_322())
	{
		if (!func_596(unk_0x4A8C381C258A124D(), func_7(), 1000f, 1))
		{
			return 1;
		}
		if (func_594(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			return 1;
		}
		if (func_593(unk_0x259BE71D8A81D4FA()))
		{
			return 1;
		}
		if (func_265(unk_0x259BE71D8A81D4FA()))
		{
			return 1;
		}
	}
	else if (!unk_0xCCD470854FB0E643(func_24()))
	{
		return 1;
	}
	return 0;
}

int func_593(bool bParam0)
{
	if (BitTest(Global_1845281[bParam0 /*883*/].f_268.f_33, 14))
	{
		return 1;
	}
	if (BitTest(Global_1845281[bParam0 /*883*/].f_268.f_33, 11))
	{
		return 1;
	}
	return 0;
}

int func_594(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == func_32())
	{
		return 0;
	}
	if (BitTest(Global_1845281[bParam0 /*883*/].f_268.f_33, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845281[bParam0 /*883*/].f_268.f_33, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657971[bParam0 /*465*/].f_322.f_8 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_595(int iParam0)
{
	if (func_341(&(Local_112[unk_0xAE032CEDCF23C6D5() /*6*/].f_2), iParam0))
	{
	}
}

bool func_596(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return system::vdist2(unk_0xD1A6A821F5AC81DB(uParam0, iParam3), unk_0xD1A6A821F5AC81DB(iParam1, iParam3)) <= (fParam2 * fParam2);
}

int func_597()
{
	if (func_5() == 0 && func_12())
	{
		return 1;
	}
	return 0;
}

void func_598()
{
	if (func_12())
	{
		if (func_669(1))
		{
			if (!func_6(unk_0x4A8C381C258A124D()))
			{
				func_340(1);
			}
		}
		else if (func_6(unk_0x4A8C381C258A124D()))
		{
			func_306(1);
		}
	}
	if (func_669(1))
	{
		if (func_669(2))
		{
			unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 376, 1);
		}
	}
	else if (func_334(unk_0x30DE412C1194FCDD(), 0))
	{
		func_595(0);
	}
}

void func_599()
{
	int iVar0;
	
	if (func_541())
	{
		iVar0 = 1;
	}
	else if (func_37(0))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 0;
	}
	if (iVar0 != func_601())
	{
		switch (func_601())
		{
			case 2:
				if (!func_669(0) && iVar0 == 0)
				{
					func_306(0);
				}
				break;
			
			case 0:
				if ((func_322() && !func_334(unk_0x30DE412C1194FCDD(), 4)) && iVar0 == 2)
				{
					func_327(4);
				}
				break;
		}
		func_600(iVar0);
	}
}

void func_600(int iParam0)
{
	Local_113.f_139 = iParam0;
}

int func_601()
{
	return Local_113.f_139;
}

void func_602()
{
	if (!func_604())
	{
		return;
	}
	unk_0x66EFB3D6110055C4(0, 80, 1);
	unk_0x66EFB3D6110055C4(0, 73, 1);
	if (unk_0x875A214D5EBCA509(0, 177))
	{
		if (func_334(unk_0x30DE412C1194FCDD(), 0))
		{
			func_595(0);
		}
		else
		{
			func_327(0);
		}
		func_603();
	}
	if (unk_0x875A214D5EBCA509(0, 176))
	{
		if (!func_558(unk_0x30DE412C1194FCDD(), 3))
		{
			func_556(3);
			func_603();
		}
	}
}

void func_603()
{
	if (!func_669(4))
	{
		func_306(4);
	}
}

int func_604()
{
	if (!func_322())
	{
		return 0;
	}
	if (!func_590())
	{
		return 0;
	}
	if (!func_12())
	{
		return 0;
	}
	if (func_558(unk_0x30DE412C1194FCDD(), 0))
	{
		return 0;
	}
	if (func_669(5))
	{
		return 0;
	}
	if (func_605())
	{
		return 0;
	}
	if (func_384(0))
	{
		return 0;
	}
	if (!func_350())
	{
		return 0;
	}
	return 1;
}

int func_605()
{
	if (Global_2672855.f_990.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_606()
{
	if (!func_623())
	{
		return;
	}
	if (func_622())
	{
		if (unk_0xA0C7B98BCF1EEF9E(Local_113.f_151))
		{
			func_321(2);
			if (func_621())
			{
				func_620();
				Local_113.f_852 = { func_619() };
				func_617(&(Local_113.f_152));
				if (func_334(unk_0x30DE412C1194FCDD(), 0))
				{
					func_616(0, 177, "AMASUV_IB_STOP", &(Local_113.f_152), 0, 365);
					if (!func_558(unk_0x30DE412C1194FCDD(), 3) && !func_50(2))
					{
						func_616(0, 176, "AMASUV_IB_HRRY", &(Local_113.f_152), 0, 365);
					}
				}
				else
				{
					func_616(0, 177, "AMASUV_IB_STRT", &(Local_113.f_152), 0, 365);
				}
			}
			unk_0x61055542D9D877AE(unk_0xB803C9D209A7C3DC());
			unk_0xA66AC5949E305457(0);
			func_615(1);
			func_614(1);
			func_607(&(Local_113.f_151), &(Local_113.f_852), &(Local_113.f_152), func_613(&(Local_113.f_152)));
		}
		else
		{
			Local_113.f_151 = unk_0x8DE4F68A9728925E("instructional_buttons");
			func_603();
		}
	}
	else if (unk_0xA0C7B98BCF1EEF9E(Local_113.f_151))
	{
		unk_0xD314260005F064BF(&(Local_113.f_151));
	}
}

void func_607(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x7811C74D5B749F76(2))
	{
		*uParam2 = 0;
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(0);
				unk_0xE6B753D52F4CA222();
			}
			unk_0x88F483FBD433696A(*uParam0, "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
		}
		func_612(uParam2);
	}
	if (Global_1577937 < 2)
	{
		func_614(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			*uParam0 = unk_0x8DE4F68A9728925E("instructional_buttons");
		}
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			unk_0xB750FE3C9F094356(*uParam0, "CLEAR_ALL");
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(1);
				unk_0xE6B753D52F4CA222();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						uVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						uVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_611(unk_0xE934399D6F2C3AC5(uVar1, uVar2, 1));
						if (iVar3 < 365)
						{
							func_611(unk_0xE934399D6F2C3AC5(uVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						uVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_611(unk_0xF761D79754BC3043(uVar4, uVar5, 1));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0xBD34A69071611974(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xCFAD3D478C87321A();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x60D332F23943B34F(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						func_610(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x761778199FE1211C())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							unk_0x557F1E2300EF1A3E(1);
							unk_0x330108B080A2132F(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							unk_0x557F1E2300EF1A3E(0);
							unk_0x330108B080A2132F(365);
						}
					}
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(bVar0);
					func_611(&(uParam2->f_1[bVar0 /*57*/]));
					if (!unk_0xD6F9DEE4765092A9(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_611(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0xBD34A69071611974(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xCFAD3D478C87321A();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x60D332F23943B34F(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						func_610(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x761778199FE1211C())
					{
						unk_0x557F1E2300EF1A3E(0);
						unk_0x330108B080A2132F(365);
					}
					unk_0xE6B753D52F4CA222();
				}
				bVar0++;
			}
			unk_0x88F483FBD433696A(*uParam0, "SET_MAX_WIDTH");
			unk_0x74BF156C860580D4(uParam2->f_699);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x330108B080A2132F(false);
			unk_0xE6B753D52F4CA222();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0,05f;
	uParam2->f_696 = 0,045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1 && unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		func_609(*uParam0, uParam1);
	}
	func_608();
}

void func_608()
{
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(9);
}

void func_609(var uParam0, var uParam1)
{
	unk_0xA91A4C18A2DB01BD(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_610(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_611(var uParam0)
{
	unk_0xCE3E870AC37B4253(uParam0);
}

void func_612(var uParam0)
{
	Global_1979636 = 0;
	uParam0->f_692 = 0;
}

int func_613(var uParam0)
{
	return (Global_1979636 || uParam0->f_692);
}

void func_614(int iParam0)
{
	Global_1577937 = iParam0;
}

void func_615(int iParam0)
{
	Global_1670224.f_1163 = iParam0;
}

void func_616(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	bVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[bVar0 /*57*/].f_32), sParam2, 16);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_689), bVar0);
	uParam3->f_1[bVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[bVar0 /*57*/].f_55 = iParam1;
	uParam3->f_1[bVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_691), bVar0);
		if (iParam5 < 365)
		{
		}
	}
	uParam3->f_693++;
}

void func_617(var uParam0)
{
	func_618(uParam0);
	uParam0->f_692 = 1;
}

void func_618(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 365;
		uParam0->f_1[iVar0 /*57*/].f_56 = 365;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
	Global_1979636 = 0;
}

struct<9> func_619()
{
	struct<9> Var0;
	
	Var0.f_0 = 0,5f;
	Var0.f_1 = 0,5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_620()
{
	if (func_669(4))
	{
		func_340(4);
	}
}

bool func_621()
{
	return func_669(4);
}

int func_622()
{
	if (!func_604())
	{
		return 0;
	}
	return 1;
}

int func_623()
{
	if (!func_322())
	{
		return 0;
	}
	if (func_5() != 0)
	{
		return 0;
	}
	return 1;
}

void func_624()
{
	int iVar0;
	int iVar1;
	
	if (!func_632())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		if (func_630(iVar1))
		{
			func_628(iVar1);
			if (func_627(iVar1))
			{
				func_563(iVar1);
			}
			if (func_626(iVar1))
			{
				func_625(iVar1);
			}
		}
		else
		{
			iVar0++;
		}
	}
}

void func_625(int iParam0)
{
	if (func_47(&(Local_113.f_137), iParam0))
	{
	}
}

int func_626(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		
		default:
	}
	return 1;
}

int func_627(int iParam0)
{
	return 0;
}

void func_628(int iParam0)
{
	func_358(func_629(iParam0), -1);
}

char* func_629(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMASUV_HT_INTR";
		
		case 1:
			return "AMASUV_HT_CLSE";
		
		case 2:
			return "AMASUV_HT_CTRL";
		
		default:
	}
	return "";
}

int func_630(int iParam0)
{
	if (func_631(iParam0))
	{
		return 0;
	}
	return func_17(&(Local_113.f_135), iParam0);
}

bool func_631(var uParam0)
{
	return func_17(&(Local_113.f_137), uParam0);
}

int func_632()
{
	if (((((((((func_689(unk_0x259BE71D8A81D4FA(), 1, 1) && !func_635()) && !func_634()) && !func_633()) && !unk_0x4C705AAF75363287()) && !unk_0x4D9174D8796EA622()) && !unk_0xBE259DBA45F2996E()) && !unk_0x15CCE8886267624F()) && !unk_0xDDED2C93E8FD5B69()) && !unk_0x78ABC1D11B34F324())
	{
		return 1;
	}
	return 0;
}

bool func_633()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

bool func_634()
{
	return Global_76498;
}

bool func_635()
{
	return Global_2672855.f_2557[0 /*80*/].f_1 != 0;
}

void func_636()
{
	if (func_43() > 0)
	{
		func_639();
	}
	switch (func_43())
	{
		case 0:
			break;
		
		case 1:
			func_637();
			break;
		
		case 2:
			break;
	}
}

void func_637()
{
	if (!func_638())
	{
		return;
	}
	if (func_669(2))
	{
		switch (unk_0x405766A9221AFD99(func_7(), 1))
		{
			case 3:
				if (unk_0xDE3B10768F6103AD(func_7(), 0, 1) > 1)
				{
					unk_0x1F4C790D1AC5AFF9(func_7(), 1, 1);
				}
				break;
			
			case 1:
				if (unk_0xDE3B10768F6103AD(func_7(), 0, 1) < 2)
				{
					unk_0x1F4C790D1AC5AFF9(func_7(), 1, 3);
				}
				break;
			}
	}
}

int func_638()
{
	if (func_5() != 0)
	{
		return 0;
	}
	if (!func_12())
	{
		return 0;
	}
	return 1;
}

void func_639()
{
	if (func_645())
	{
		if (!unk_0xC450B06E5AAA0985(Local_113.f_146))
		{
			Local_113.f_146 = unk_0x18E23E031A9B798F(func_7());
			unk_0x4C905FB262965D5D(Local_113.f_146, func_644());
			func_641(&(Local_113.f_146), func_643());
			unk_0x594D5D0D7071B0DE(Local_113.f_146, func_640());
			unk_0x861AC9C2D48CEA7F(Local_113.f_146, 1);
			unk_0xB562F84CE9B07D89(Local_113.f_146, 250);
			unk_0x8D777E1B885E428C(Local_113.f_146, 7000);
		}
		if (unk_0xC450B06E5AAA0985(Local_113.f_146))
		{
			unk_0xA1BA8AD71EF8F11A(Local_113.f_146, unk_0xCFC0C995455A6204(func_7()));
		}
	}
	else if (unk_0xC450B06E5AAA0985(Local_113.f_146))
	{
		unk_0xFE54B8568B2ABD12(&(Local_113.f_146));
	}
}

char* func_640()
{
	return "AMASUV_BLP_SUV";
}

void func_641(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		uVar0 = func_642(iParam1);
		unk_0x61183D6239A9D7B8(*uParam0, uVar0);
	}
}

int func_642(int iParam0)
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

int func_643()
{
	return 9;
}

int func_644()
{
	return 812;
}

int func_645()
{
	if (func_5() != 0)
	{
		return 0;
	}
	if (!unk_0x93BF17E19A9F0E9B(func_8()))
	{
		return 0;
	}
	if (func_43() != 1)
	{
		return 0;
	}
	if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), func_7(), 0))
	{
		return 0;
	}
	if (!func_12())
	{
		return 0;
	}
	if (func_546(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

void func_646()
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	struct<3> Var5;
	
	uVar0 = func_10();
	if (unk_0x93BF17E19A9F0E9B(uVar0))
	{
		uVar1 = func_9();
		bVar2 = true;
		bVar3 = !unk_0x4FAFF4BCB7633475(uVar1);
	}
	if (bVar2)
	{
		func_653();
	}
	if ((func_669(2) && func_16(3)) && func_669(3))
	{
		unk_0x974022927CB47E68(iVar1);
		func_340(3);
		func_651(0);
	}
	switch (func_11())
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (bVar2 && bVar3)
			{
				if ((func_669(2) && !func_45(iVar1, joaat("script_task_perform_sequence"), 1)) && func_12())
				{
					unk_0xB5396F1FB088FE38(&uVar4);
					unk_0x6C33493626F3C0D1(0, func_7(), func_53(), func_650(), func_649(), func_566());
					unk_0x2D864CC37DDFA963(0, func_7(), func_53(), func_648(), func_647(), 60f, 1);
					unk_0x93C0674FC00824D0(uVar4);
					unk_0x4BD42B0527065BB6(func_9(), uVar4);
					unk_0xD0557B139A542F12(&uVar4);
				}
			}
			break;
		
		case 4:
			if (bVar2 && bVar3)
			{
				if ((func_669(2) && !func_45(iVar1, joaat("script_task_vehicle_mission"), 1)) && func_12())
				{
					unk_0xB3DA477F44309390(iVar1, func_7(), func_7(), 22, func_650(), func_649(), -1f, -1f, 1);
				}
			}
			break;
		
		case 3:
			break;
		
		case 6:
			if (bVar2 && bVar3)
			{
				if (func_669(2) && !func_45(iVar1, -251125078, 1))
				{
					unk_0xAAA71DD7E9059338(iVar1, 1);
					unk_0xBE8796DB2B90A437(iVar1, 3, 1);
					unk_0xBE8796DB2B90A437(iVar1, 5, 0);
					unk_0xBE8796DB2B90A437(iVar1, 17, 1);
					unk_0x1CA08719184AFC6F(iVar1, 1024, 1);
					unk_0x1CA08719184AFC6F(iVar1, 32768, 0);
					Var5 = { unk_0xD1A6A821F5AC81DB(iVar1, 0) };
					unk_0xFD251F92B546F389(iVar1, Var5, 10000f, -1, 0, 0);
				}
			}
			break;
		
		case 5:
			if (bVar2 && bVar3)
			{
				if ((func_332(uVar0) && !func_45(iVar1, joaat("script_task_vehicle_drive_wander"), 1)) && func_12())
				{
					unk_0x7C8E9DE09D4AD3FF(iVar1, func_7(), func_650(), func_649());
				}
			}
			break;
		
		case 7:
			break;
	}
}

int func_647()
{
	switch (func_567())
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
		
		default:
	}
	return 3;
}

var func_648()
{
	return Local_108.f_10.f_5;
}

int func_649()
{
	if (func_50(2))
	{
		return 1076631588;
	}
	return 1076369579;
}

float func_650()
{
	if (func_50(2))
	{
		return 50f;
	}
	return 15f;
}

void func_651(int iParam0)
{
	func_652(iParam0);
}

void func_652(var uParam0)
{
	struct<5> Var0;
	int iVar1;
	
	Var0.f_0 = -1457947843;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = unk_0x8034325BF6D6E41F();
	Var0.f_4 = uParam0;
	iVar1 = func_571(1);
	if (iVar1 != 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 5, iVar1, Var0.f_0);
	}
}

void func_653()
{
	var uVar0;
	bool bVar1;
	
	if (!func_558(unk_0x30DE412C1194FCDD(), 3))
	{
		if (func_654())
		{
			uVar0 = func_9();
			if (unk_0x613F3705BEA060B4(uVar0, 125))
			{
				bVar1 = true;
			}
			if (unk_0x613F3705BEA060B4(uVar0, 126))
			{
				bVar1 = true;
			}
			if (unk_0x613F3705BEA060B4(uVar0, 84))
			{
				bVar1 = true;
			}
			if (unk_0x613F3705BEA060B4(uVar0, 97))
			{
				bVar1 = true;
			}
			if (unk_0x613F3705BEA060B4(uVar0, 116))
			{
				bVar1 = true;
			}
			if (unk_0x613F3705BEA060B4(uVar0, 94))
			{
				bVar1 = true;
			}
			if (unk_0x613F3705BEA060B4(uVar0, 124))
			{
				bVar1 = true;
			}
			if (unk_0x613F3705BEA060B4(uVar0, 29))
			{
				bVar1 = true;
			}
			if (unk_0x613F3705BEA060B4(uVar0, 23))
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_603();
				func_556(3);
			}
		}
	}
	else if (func_11() == 1)
	{
		func_603();
		func_557(3);
	}
}

int func_654()
{
	if (func_325(unk_0x30DE412C1194FCDD()) != 3)
	{
		return 0;
	}
	if (func_11() != 2)
	{
		return 0;
	}
	return 1;
}

void func_655(int iParam0)
{
	Local_112[unk_0xAE032CEDCF23C6D5() /*6*/] = iParam0;
}

int func_656()
{
	func_315();
	if (func_5() == 1)
	{
		func_339(1);
	}
	return 1;
}

int func_657()
{
	return Local_108.f_0;
}

int func_658(int iParam0)
{
	return Local_112[iParam0 /*6*/];
}

void func_659()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < unk_0x703C4F7316B7195D(1))
	{
		iVar0 = unk_0x4BC3E5D2FB0A1665(1, iVar2);
		switch (iVar0)
		{
			case 174:
				unk_0xFCEF367B86651ED3(1, iVar2, &iVar1, 3);
				switch (iVar1)
				{
					case -1616114832:
						func_662(iVar2);
						break;
					
					case -1457947843:
						func_660(iVar2);
						break;
				}
				break;
			
			case 186:
				break;
		}
		iVar2++;
	}
}

void func_660(int iParam0)
{
	struct<5> Var0;
	
	if (unk_0xFCEF367B86651ED3(1, iParam0, &Var0, 5))
	{
		if (Var0.f_4)
		{
			if (unk_0x93E08E0F531E2C35())
			{
				if (!func_16(3))
				{
					func_46(3);
				}
			}
			if (!func_669(3))
			{
				func_306(3);
			}
		}
		else
		{
			if (unk_0x93E08E0F531E2C35())
			{
				if (func_16(3))
				{
					func_661(3);
				}
			}
			if (func_669(3))
			{
				func_340(3);
			}
		}
	}
}

void func_661(int iParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	if (func_341(&(Local_108.f_2), iParam0))
	{
	}
}

void func_662(int iParam0)
{
	struct<9> Var0;
	
	if (unk_0x93E08E0F531E2C35() && unk_0xFCEF367B86651ED3(1, iParam0, &Var0, 9))
	{
		func_664(Var0.f_4, Var0.f_7);
		func_663(Var0.f_8);
		if (func_11() != 1)
		{
			func_651(1);
		}
	}
}

void func_663(var uParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	Local_108.f_10.f_6 = uParam0;
}

void func_664(struct<3> Param0, var uParam1)
{
	Local_108.f_10.f_2 = { Param0 };
	Local_108.f_10.f_5 = uParam1;
}

void func_665()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	bVar1 = false;
	while (bVar1 < 8)
	{
		Local_113.f_33[bVar1 /*3*/] = func_32();
		Local_113.f_33[bVar1 /*3*/].f_1 = -1;
		Local_113.f_33[bVar1 /*3*/].f_2 = 0;
		unk_0x8744D2E3FC95740E(&(Local_113.f_130), bVar1);
		unk_0x8744D2E3FC95740E(&(Local_113.f_132), bVar1);
		bVar1++;
	}
	bVar0 = false;
	while (bVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		Local_113[bVar0 /*4*/] = func_668();
		Local_113[bVar0 /*4*/].f_1 = -1;
		Local_113[bVar0 /*4*/].f_2 = 0;
		Local_113[bVar0 /*4*/].f_3 = 0;
		unk_0x8744D2E3FC95740E(&(Local_113.f_131), bVar0);
		bVar0++;
	}
	bVar7 = true;
	bVar8 = true;
	bVar0 = false;
	while (bVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(bVar0))
		{
			Local_113[bVar0 /*4*/] = bVar0;
			unk_0x0B0C9A0F9AAEB7F0(&(Local_113.f_131), bVar0);
			bVar2 = unk_0x4470BE79F5771783(Local_113[bVar0 /*4*/]);
			bVar1 = bVar2;
			if (func_689(bVar2, 0, 1))
			{
				Local_113[bVar0 /*4*/].f_1 = bVar1;
				Local_113.f_33[bVar1 /*3*/] = bVar2;
				Local_113.f_33[bVar1 /*3*/].f_1 = bVar0;
				Local_113.f_33[bVar1 /*3*/].f_2 = unk_0x56E414973C2A8C0E(bVar2);
				unk_0x0B0C9A0F9AAEB7F0(&(Local_113.f_130), bVar1);
				if (unk_0x1C2F771CDC87A3A5(Local_113.f_33[bVar1 /*3*/].f_2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_113.f_132), bVar1);
				}
				if (func_34(Local_113.f_33[bVar1 /*3*/]))
				{
					Local_113[bVar0 /*4*/].f_2 = 1;
				}
				else if (func_38(Local_113.f_33[bVar1 /*3*/], 0))
				{
					Local_113[bVar0 /*4*/].f_3 = 1;
				}
				if (unk_0x93E08E0F531E2C35())
				{
					if (!bVar3)
					{
						if (func_334(Local_113[bVar0 /*4*/], 0))
						{
							bVar3 = true;
						}
					}
					if (!bVar4)
					{
						if (func_334(Local_113[bVar0 /*4*/], 5))
						{
							bVar4 = true;
						}
					}
					if (!func_50(0))
					{
						if (func_558(Local_113[bVar0 /*4*/], 1))
						{
							func_667(0);
						}
					}
					if (!bVar5)
					{
						if (func_558(Local_113[bVar0 /*4*/], 2))
						{
							bVar5 = true;
						}
					}
					if (!bVar6)
					{
						if (func_558(Local_113[bVar0 /*4*/], 3))
						{
							bVar6 = true;
						}
					}
					switch (func_39())
					{
						case 1:
							if (bVar7)
							{
								if (func_30(Local_113.f_33[bVar1 /*3*/]) && !func_334(Local_113[bVar0 /*4*/], 1))
								{
									bVar7 = false;
								}
							}
							break;
						
						case 2:
							if (bVar8)
							{
								if (func_30(Local_113.f_33[bVar1 /*3*/]) && !func_334(Local_113[bVar0 /*4*/], 2))
								{
									bVar8 = false;
								}
							}
							break;
					}
					if (!func_16(1))
					{
						if (func_334(Local_113[bVar0 /*4*/], 4))
						{
							func_46(1);
						}
					}
					if (!func_16(7))
					{
						if (func_334(Local_113[bVar0 /*4*/], 3))
						{
							func_46(7);
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (unk_0x93E08E0F531E2C35())
	{
		if (bVar3)
		{
			if (!func_16(4))
			{
				func_46(4);
				func_651(1);
			}
		}
		else if (func_16(4))
		{
			func_661(4);
			func_651(1);
		}
		if (bVar4)
		{
			if (!func_16(8))
			{
				func_46(8);
			}
		}
		else if (func_16(8))
		{
			func_661(8);
		}
		if (bVar5)
		{
			if (!func_50(1))
			{
				func_667(1);
			}
		}
		else if (func_50(1))
		{
			func_666(1);
		}
		if (bVar6)
		{
			if (!func_50(2))
			{
				func_667(2);
				func_651(1);
			}
		}
		else if (func_50(2))
		{
			func_666(2);
			func_651(1);
		}
		if (func_5() == 1)
		{
			switch (func_39())
			{
				case 1:
					if (!func_16(5) && bVar7)
					{
						func_46(5);
					}
					break;
				
				case 2:
					if (!func_16(6) && bVar8)
					{
						func_46(6);
					}
					break;
				}
			}
	}
}

void func_666(int iParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	if (func_341(&(Local_108.f_4), iParam0))
	{
	}
}

void func_667(int iParam0)
{
	if (!unk_0x93E08E0F531E2C35())
	{
		return;
	}
	if (func_47(&(Local_108.f_4), iParam0))
	{
	}
}

int func_668()
{
	return -1;
}

bool func_669(int iParam0)
{
	return func_17(&(Local_113.f_133), iParam0);
}

int func_670()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_676())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_675())
	{
		return 1;
	}
	if (func_674(159))
	{
		if (!func_673())
		{
			return 1;
		}
	}
	if (func_674(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_671() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_671()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_671()
{
	switch (func_86())
	{
		case 0:
			return func_672();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_672()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_673()
{
	return Global_2684504.f_700;
}

int func_674(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_675()
{
	return Global_2696172;
}

bool func_676()
{
	return Global_2684504.f_695;
}

void func_677()
{
	system::wait(0);
}

void func_678()
{
	if (func_322())
	{
		func_684();
	}
	if (func_683(unk_0x259BE71D8A81D4FA()))
	{
		func_682();
	}
	if (func_550(unk_0x259BE71D8A81D4FA()))
	{
		func_548();
	}
	if (func_546(unk_0x259BE71D8A81D4FA()))
	{
		func_544();
	}
	if (func_553() != 0)
	{
		func_552(0);
	}
	if (func_30(unk_0x259BE71D8A81D4FA()))
	{
		if (!unk_0x9390801B06EE998F())
		{
			unk_0x10B228D2FDB7AF16(800);
		}
		func_337();
	}
	if (func_5() == 1)
	{
		if (func_669(6))
		{
			func_164();
			func_340(6);
		}
		if (func_669(8))
		{
			func_339(0);
		}
		func_396(0);
	}
	if (func_669(2))
	{
		if (func_12())
		{
			if (unk_0x405766A9221AFD99(func_7(), 1) != 1)
			{
				unk_0x1F4C790D1AC5AFF9(func_7(), 1, 1);
			}
			unk_0x8FC511FC963C67E5(func_8(), 1);
		}
		if (unk_0x93BF17E19A9F0E9B(func_10()))
		{
			unk_0x8FC511FC963C67E5(func_10(), 1);
		}
		func_340(2);
	}
	if ((((func_2() == 1 && unk_0x93BF17E19A9F0E9B(func_10())) && !unk_0x4FAFF4BCB7633475(func_9())) && func_12()) && func_332(func_10()))
	{
		func_48(func_49(func_7(), 1, 0, 0), 0, 0f, 0, 0, 0, -1);
	}
	if (func_2() != 0)
	{
		func_681();
		func_679();
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_679()
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_10();
	if (unk_0x93BF17E19A9F0E9B(uVar0))
	{
		if (unk_0xEADBDBE0422CF7E6(uVar0))
		{
			uVar1 = func_9();
			if (!unk_0x1C2F771CDC87A3A5(uVar1, 0))
			{
				unk_0xAAA71DD7E9059338(iVar1, 0);
			}
		}
		func_680(&uVar0);
	}
}

void func_680(var uParam0)
{
	var uVar0;
	
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x76AD45C3946F87DD(&uVar0);
	}
}

void func_681()
{
	var uVar0;
	
	uVar0 = func_8();
	if (unk_0x93BF17E19A9F0E9B(uVar0))
	{
		func_680(&uVar0);
	}
}

void func_682()
{
	func_338(17);
}

bool func_683(int iParam0)
{
	return func_31(iParam0, 17);
}

void func_684()
{
	func_338(16);
	Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10.f_311 = -1;
}

int func_685(struct<21> Param0)
{
	func_688(8, Param0);
	unk_0x17C7D9B3979F5759(1);
	unk_0x552B3BADB43FF551(1);
	func_686(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_108, 29, 0);
	unk_0x7B13DC83218D9AF5(&Local_112, 49, 0);
	unk_0xAECC5FA98C879D67(0);
	return 1;
}

int func_686(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_687();
			}
			else
			{
				return 0;
			}
		}
		if (!func_304(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_687();
					}
					else
					{
						return 0;
					}
				}
				if (func_676())
				{
					if (!bParam2)
					{
						func_687();
					}
					else
					{
						return 0;
					}
				}
				if (func_674(157))
				{
					if (!bParam2)
					{
						func_687();
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
					func_687();
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
				func_687();
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
			func_687();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_687()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_688(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_687();
	}
	unk_0xDB2434E51017FFCC(iParam0, 0, Param1.f_16);
}

int func_689(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(bParam0))
		{
			if (bParam1)
			{
				if (!unk_0x75EAB09F5E974116(bParam0))
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

