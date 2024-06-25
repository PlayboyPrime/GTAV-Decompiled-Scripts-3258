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
	var uLocal_92 = -1;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 32;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	struct<117> Local_156 = { 0, -1, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, -1073741824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<18> Local_157 = { 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
		func_122(ScriptParam_157);
	}
	else
	{
		func_119();
	}
	while (true)
	{
		func_118();
		if (func_110())
		{
			func_119();
		}
		if (func_102())
		{
			func_119();
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
	switch (Local_156.f_65)
	{
		case 0:
			func_96();
			break;
		
		case 1:
			func_74();
			break;
		
		case 2:
			func_44();
			break;
	}
	func_42();
	func_3();
}

void func_3()
{
	switch (Local_156.f_116)
	{
		case 1:
			func_41();
			break;
		
		case 2:
			func_37();
			break;
		
		case 3:
			func_29();
			break;
		
		case 4:
			func_24();
			break;
		
		case 5:
			func_8();
			break;
	}
	func_4();
}

void func_4()
{
	if (Local_156.f_116 > 0 && !unk_0xFC8BFE4B41177C22(Local_156.f_64))
	{
		if (Local_156.f_8 != -1)
		{
			unk_0x8E4825CCACA34B58(Local_156.f_8);
			unk_0x394AFAC073E1F277(Local_156.f_8);
			Local_156.f_8 = -1;
		}
		if (Local_156.f_7 != -1)
		{
			unk_0x8E4825CCACA34B58(Local_156.f_7);
			unk_0x394AFAC073E1F277(Local_156.f_7);
			Local_156.f_7 = -1;
		}
		unk_0x268BE77F77533D03(func_7(Local_156.f_10));
		func_6(0);
		func_5(&(Local_156.f_11));
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_6(int iParam0)
{
	Local_156.f_116 = iParam0;
}

char* func_7(bool bParam0)
{
	char* sVar0;
	
	sVar0 = "ANIM_HEIST@ARCADE@FORTUNE@MALE@";
	if (bParam0)
	{
		sVar0 = "ANIM_HEIST@ARCADE@FORTUNE@FEMALE@";
	}
	return sVar0;
}

void func_8()
{
	struct<16> Var0;
	
	if (unk_0x13CCB1AD131C1082(Local_156.f_64, func_7(Local_156.f_10), "prop_body_loop_outro", 3))
	{
		return;
	}
	if (Local_156.f_8 != -1)
	{
		unk_0x8E4825CCACA34B58(Local_156.f_8);
		unk_0x394AFAC073E1F277(Local_156.f_8);
		Local_156.f_8 = -1;
	}
	if (Local_156.f_7 != -1)
	{
		unk_0x8E4825CCACA34B58(Local_156.f_7);
		unk_0x394AFAC073E1F277(Local_156.f_7);
		Local_156.f_7 = -1;
	}
	StringCopy(&Var0, "HS3MN_EXIT", 64);
	func_10(Var0, 1);
	unk_0x268BE77F77533D03(func_7(Local_156.f_10));
	func_6(0);
	func_5(&(Local_156.f_11));
	Local_156.f_6 = 0;
	Local_156.f_9 = -1;
	func_9(9);
}

void func_9(bool bParam0)
{
	if (BitTest(Local_156.f_0, bParam0))
	{
		unk_0x8744D2E3FC95740E(&Local_156, bParam0);
	}
}

void func_10(char[64] cParam0, bool bParam1)
{
	Local_156.f_9 = func_22(unk_0x259BE71D8A81D4FA());
	Local_156.f_76.f_36 = 11;
	Local_156.f_76.f_35 = Local_156.f_9;
	Local_156.f_76 = { cParam0 };
	Local_156.f_76.f_33 = 1;
	func_11(&(Local_156.f_76), bParam1);
}

void func_11(var uParam0, bool bParam1)
{
	struct<40> Var0;
	bool bVar1;
	int iVar2;
	
	Var0.f_0 = 1300457931;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = { *uParam0 };
	Var0.f_35 = uParam0->f_34;
	Var0.f_38 = bParam1;
	Var0.f_36 = uParam0->f_35;
	Var0.f_37 = uParam0->f_36;
	Var0.f_39 = uParam0->f_33;
	if (!func_21(&(uParam0->f_37)))
	{
		func_20(&(uParam0->f_37), 0, 0);
	}
	bVar1 = true;
	if (unk_0x1B79E937E91F40C3(&(uParam0->f_16), &(Var0.f_3)))
	{
		if (func_21(&(uParam0->f_37)) && !func_19(&(uParam0->f_37), 1000, 0))
		{
			bVar1 = false;
		}
		else
		{
			func_5(&(uParam0->f_37));
		}
	}
	else
	{
		uParam0->f_16 = { Var0.f_3 };
		func_5(&(uParam0->f_37));
	}
	uParam0->f_32 = 0;
	if (bVar1)
	{
		iVar2 = func_18(unk_0x259BE71D8A81D4FA());
		if (bParam1)
		{
			iVar2 = func_12(1, 1);
		}
		if (iVar2 != 0)
		{
			uParam0->f_32 = 1;
			unk_0x71A6F836422FDD2B(1, &Var0, 40, iVar2, Var0.f_0);
		}
	}
}

var func_12(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar1);
		if (func_17(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
				else if (!func_13(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_13(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_16(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_14(-1, 0) == 8;
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

int func_14(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_15();
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

int func_15()
{
	return Global_1574926;
}

int func_16(var uParam0)
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

int func_17(int iParam0, bool bParam1, bool bParam2)
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

var func_18(bool bParam0)
{
	var uVar0;
	
	if (func_16(iParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam0);
	}
	return uVar0;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
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

void func_20(var uParam0, bool bParam1, bool bParam2)
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

bool func_21(var uParam0)
{
	return uParam0->f_1;
}

int func_22(int iParam0)
{
	if (iParam0 != func_23())
	{
		return Global_2657971[iParam0 /*465*/].f_438.f_1;
	}
	return -1;
}

int func_23()
{
	return -1;
}

void func_24()
{
	if (func_21(&(Local_156.f_11)))
	{
		if (func_19(&(Local_156.f_11), Local_156.f_6, 0))
		{
			if (func_28())
			{
				if (!func_27(6))
				{
					unk_0xE1C7B23ECC5080B5(Local_156.f_64, 1, 1);
					unk_0xE1C7B23ECC5080B5(Local_156.f_64, 0, 1);
					func_26(6);
				}
				if (unk_0x5ED9595F4AC7D134(Local_156.f_64, "prop_body_loop_outro", func_7(Local_156.f_10), 0,125f, 0, 0, 0, 0, 0))
				{
					if (func_25(unk_0x259BE71D8A81D4FA(), Local_156.f_64))
					{
						Local_156.f_8 = unk_0xCA369FBC0DE29517();
						unk_0xF37CDE164C892195(Local_156.f_8, "fortune_bell", unk_0xD1A6A821F5AC81DB(Local_156.f_64, 1), "dlc_ch_nazar_speaks_sounds", 0, 0, 0);
					}
					func_9(6);
					func_6(5);
				}
			}
		}
	}
}

int func_25(int iParam0, var uParam1)
{
	struct<3> Var0;
	float fVar1;
	
	if ((!unk_0xFC8BFE4B41177C22(uParam1) || !unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iParam0))) || unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(iParam0), 0))
	{
		return 0;
	}
	Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 1) };
	fVar1 = Var0.f_2;
	if (fVar1 <= -48f)
	{
		return unk_0xED977E2AE2CB16EE(Var0, unk_0xD1A6A821F5AC81DB(uParam1, 1), 1) <= 4f;
	}
	return 0;
}

void func_26(bool bParam0)
{
	if (!BitTest(Local_156.f_0, bParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Local_156, bParam0);
	}
}

bool func_27(int iParam0)
{
	return BitTest(Local_156.f_0, iParam0);
}

bool func_28()
{
	unk_0x80813AC549A1E8AE(func_7(Local_156.f_10));
	return unk_0xE100DD4F82A51BDE(func_7(Local_156.f_10));
}

void func_29()
{
	if (func_21(&(Local_156.f_11)))
	{
		if (func_19(&(Local_156.f_11), func_35(Local_156.f_4) + 2000, 0))
		{
			func_10(func_34(Local_156.f_3), 0);
			if (Local_156.f_76.f_32)
			{
				func_33(&(Local_156.f_11), 0, 0);
				Local_156.f_6 = func_30();
				func_26(9);
				func_6(4);
			}
		}
	}
}

int func_30()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 5200;
	iVar1 = func_35(Local_156.f_4);
	iVar2 = func_31(Local_156.f_3);
	switch (iVar1)
	{
		case 2000:
			switch (iVar2)
			{
				case 5000:
					iVar0 = 5200;
					break;
				
				case 8000:
					iVar0 = 9400;
					break;
				
				case 12500:
					iVar0 = 16800;
					break;
			}
			break;
		
		case 4000:
			switch (iVar2)
			{
				case 5000:
					iVar0 = 6500;
					break;
				
				case 8000:
					iVar0 = 11000;
					break;
				
				case 12500:
					iVar0 = 15300;
					break;
			}
			break;
		
		case 7000:
			switch (iVar2)
			{
				case 5000:
					iVar0 = 4300;
					break;
				
				case 8000:
					iVar0 = 8700;
					break;
				
				case 12500:
					iVar0 = 16200;
					break;
			}
			break;
	}
	return iVar0;
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 5000;
	iVar1 = func_32(iParam0);
	if (iVar1 <= 5000)
	{
		iVar0 = 5000;
	}
	else if (iVar1 > 5000 && iVar1 <= 8000)
	{
		iVar0 = 8000;
	}
	else if (iVar1 > 8000)
	{
		iVar0 = 12500;
	}
	return iVar0;
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5000;
		
		case 1:
			return 8000;
		
		case 2:
			return 7000;
		
		case 3:
			return 14000;
		
		case 4:
			return 9000;
		
		case 5:
			return 7000;
		
		case 6:
			return 7000;
		
		case 7:
			return 6000;
		
		case 8:
			return 7000;
		
		case 9:
			return 1000;
		
		case 10:
			return 9000;
		
		case 11:
			return 7000;
		
		case 12:
			return 6000;
		
		case 13:
			return 9000;
		
		case 14:
			return 8000;
		
		case 15:
			return 11000;
		
		case 16:
			return 3000;
		
		case 17:
			return 3000;
		
		case 18:
			return 7000;
		
		case 19:
			return 7000;
		
		case 20:
			return 9000;
		
		case 21:
			return 9000;
		
		case 22:
			return 4000;
		
		case 23:
			return 5000;
		
		case 24:
			return 4000;
		
		case 25:
			return 8000;
		
		case 26:
			return 8000;
		
		case 27:
			return 7000;
		
		case 28:
			return 7000;
		
		case 29:
			return 7000;
		
		case 30:
			return 4000;
		
		case 31:
			return 4000;
		
		case 32:
			return 6000;
		
		case 33:
			return 7000;
		
		case 34:
			return 7000;
		
		case 35:
			return 6000;
		
		case 36:
			return 5000;
		
		case 37:
			return 4000;
		
		case 38:
			return 6000;
		
		case 39:
			return 5000;
		
		case 40:
			return 7000;
		
		case 41:
			return 6000;
		
		case 42:
			return 7000;
		
		case 43:
			return 6000;
		
		case 44:
			return 7000;
		
		case 45:
			return 7000;
		
		case 46:
			return 7000;
		
		case 47:
			return 7000;
		
		case 48:
			return 7000;
		
		default:
	}
	return 0;
}

void func_33(var uParam0, bool bParam1, bool bParam2)
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

struct<16> func_34(int iParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "HS3MN_FT_", 64);
	if (iParam0 > 28)
	{
		StringIntConCat(&Var0, iParam0 + 2, 64);
	}
	else
	{
		StringIntConCat(&Var0, iParam0 + 1, 64);
	}
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "HS3MN_FT_130", 64);
			break;
		
		case 41:
			switch (unk_0x60B554F782F2E6A6())
			{
				case joaat("rain"):
					StringCopy(&Var0, "HS3MN_FT_43", 64);
					break;
				
				case 1840358669:
				case joaat("Neutral"):
				case joaat("clear"):
					StringCopy(&Var0, "HS3MN_FT_44", 64);
					break;
				
				case joaat("OVERCAST"):
				case 282916021:
					StringCopy(&Var0, "HS3MN_FT_45", 64);
					break;
				
				case -318724249:
				case joaat("clouds"):
					StringCopy(&Var0, "HS3MN_FT_46", 64);
					break;
				
				case joaat("THUNDER"):
					StringCopy(&Var0, "HS3MN_FT_47", 64);
					break;
				
				case joaat("snow"):
				case -1429616491:
					StringCopy(&Var0, "HS3MN_FT_48", 64);
					break;
				
				default:
					StringCopy(&Var0, "HS3MN_FT_44", 64);
					break;
			}
			break;
		
		case 42:
			StringCopy(&Var0, "HS3MN_FT_55", 64);
			break;
		
		case 43:
			StringCopy(&Var0, "HS3MN_FT_56", 64);
			break;
		
		case 44:
			StringCopy(&Var0, "HS3MN_FT_50", 64);
			break;
		
		case 45:
			StringCopy(&Var0, "HS3MN_FT_51", 64);
			break;
		
		case 46:
			StringCopy(&Var0, "HS3MN_FT_57", 64);
			break;
		
		case 47:
			StringCopy(&Var0, "HS3MN_FT_58", 64);
			break;
		
		case 48:
			StringCopy(&Var0, "HS3MN_FT_53", 64);
			break;
	}
	return Var0;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2000;
	iVar1 = func_36(iParam0);
	if (iVar1 <= 2000)
	{
		iVar0 = 2000;
	}
	else if (iVar1 > 2000 && iVar1 <= 4000)
	{
		iVar0 = 4000;
	}
	else if (iVar1 > 4000)
	{
		iVar0 = 7000;
	}
	return iVar0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4000;
		
		case 1:
			return 4000;
		
		case 2:
			return 3000;
		
		case 3:
			return 3000;
		
		case 4:
			return 2000;
		
		case 5:
			return 4000;
		
		case 6:
			return 3000;
		
		case 7:
			return 4000;
		
		case 8:
			return 7000;
		
		case 9:
			return 3000;
		
		default:
	}
	return 0;
}

void func_37()
{
	float fVar0;
	
	if (unk_0x13CCB1AD131C1082(Local_156.f_64, func_7(Local_156.f_10), "prop_body_loop_intro", 3))
	{
		fVar0 = unk_0x82E64DE58A6B84A8(Local_156.f_64, func_7(Local_156.f_10), "prop_body_loop_intro");
		if (fVar0 >= 0,96f)
		{
			if (func_39())
			{
				func_38();
				func_6(3);
			}
		}
	}
	else if (func_39())
	{
		func_38();
		func_6(3);
	}
}

void func_38()
{
	struct<20> Var0;
	
	Local_156.f_19 = 1;
	Local_156.f_19.f_1 = func_7(Local_156.f_10);
	Local_156.f_19.f_2 = "prop_body_loop";
	Local_156.f_19.f_3 = 0f;
	Local_156.f_19.f_4 = 1f;
	Local_156.f_19.f_5 = 1f;
	Local_156.f_19.f_17 = 0,125f;
	Local_156.f_19.f_18 = 0,125f;
	Local_156.f_19.f_19 = -1;
	Local_156.f_19.f_20 = 1;
	Local_156.f_19.f_21 = 0;
	Local_156.f_41 = 1;
	Local_156.f_41.f_1 = func_7(Local_156.f_10);
	Local_156.f_41.f_2 = "prop_mouth_loop";
	Local_156.f_41.f_3 = 0f;
	Local_156.f_41.f_4 = 1f;
	Local_156.f_41.f_5 = 1f;
	Local_156.f_41.f_17 = 0,125f;
	Local_156.f_41.f_18 = 0,125f;
	Local_156.f_41.f_19 = -1;
	Local_156.f_41.f_20 = 289;
	Local_156.f_41.f_21 = 0;
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	unk_0x24E88846ADF60E68(Local_156.f_64, &(Local_156.f_19), &(Local_156.f_41), &Var0, 0,125f, 0,125f);
	func_20(&(Local_156.f_11), 0, 0);
}

bool func_39()
{
	struct<16> Var0;
	
	Var0 = { func_40(Local_156.f_4) };
	func_10(Var0, 0);
	return Local_156.f_76.f_32;
}

struct<16> func_40(int iParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "HS3MN_PRE", 64);
	if (iParam0 > 0)
	{
		StringConCat(&Var0, "_", 64);
		StringIntConCat(&Var0, iParam0 + 1, 64);
	}
	return Var0;
}

void func_41()
{
	if (func_28())
	{
		if (unk_0x5ED9595F4AC7D134(Local_156.f_64, "prop_body_loop_intro", func_7(Local_156.f_10), 0,125f, 0, 0, 0, 0, 0))
		{
			if (func_25(unk_0x259BE71D8A81D4FA(), Local_156.f_64))
			{
				Local_156.f_7 = unk_0xCA369FBC0DE29517();
				unk_0xF37CDE164C892195(Local_156.f_7, "fortune_mech_loop", unk_0xD1A6A821F5AC81DB(Local_156.f_64, 1), "dlc_ch_nazar_speaks_sounds", 0, 0, 0);
			}
			func_6(2);
		}
	}
}

void func_42()
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
			case 174:
				unk_0xFCEF367B86651ED3(1, iVar0, &iVar2, 3);
				switch (iVar2)
				{
					case 1461088877:
						if (Global_1683951.f_846)
						{
							return;
						}
						func_43(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_43(int iParam0)
{
	struct<7> Var0;
	
	if (unk_0xFCEF367B86651ED3(1, iParam0, &Var0, 7))
	{
		if (unk_0xCCD470854FB0E643(Var0.f_1))
		{
			if (unk_0xFC8BFE4B41177C22(Local_156.f_64))
			{
				Local_156.f_3 = Var0.f_5;
				Local_156.f_4 = Var0.f_4;
				Local_156.f_9 = Var0.f_6;
				Local_156.f_10 = Var0.f_3;
				func_6(1);
			}
		}
	}
}

void func_44()
{
	if (func_73("ARC_CAB_FRT_TLL_H"))
	{
		unk_0x428C32CC68809A35(1);
	}
	func_68();
	Local_156.f_0 = 0;
	Local_156.f_1 = -1;
	Local_156.f_10 = 0;
	func_5(&(Local_156.f_13));
	func_5(&(Local_156.f_15));
	func_67(0);
	func_66(&(Local_156.f_65), 0);
	func_26(8);
	func_58();
	func_45(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
}

void func_45(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_57())
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
		if (!func_55())
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
				else if (bVar14 || ((!func_13(unk_0x259BE71D8A81D4FA(), 0) && !func_54()) && !func_53(unk_0x259BE71D8A81D4FA())))
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
					func_50(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_49(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(uVar27, true, 0);
					}
				}
				if (!unk_0xA3736D76B0E93E93(uVar27))
				{
					if (!bVar21)
					{
						unk_0x5D7CD709B34C90F0(uVar27, false);
					}
					unk_0x11C125313CB8ADA2(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5D7CD709B34C90F0(uVar27, false);
				}
				unk_0x3F58BFCF656F0DF1(uVar27, true);
				unk_0x2B52F77101390E6F(iParam0, 0);
				unk_0x6C4F5AA91D39455C(iParam0, 0);
				if (unk_0x4CEC77F224BCD884(uVar27) && unk_0x69CD279BFCFE278E(uVar27))
				{
					unk_0xAF8337BF5A296283(uVar27);
				}
				unk_0x9FF00EA9A61211D2(uVar27, 1);
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_48();
					func_47();
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
				if (!func_49(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(uVar27, !bVar15, 0);
					}
					if (!unk_0xA3736D76B0E93E93(uVar27))
					{
						if (!bVar21)
						{
							unk_0x5D7CD709B34C90F0(uVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x11C125313CB8ADA2(uVar27, 1);
						}
					}
					if (func_46(Global_4718592.f_185586))
					{
						unk_0x5D7CD709B34C90F0(uVar27, true);
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
				unk_0x3F58BFCF656F0DF1(uVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xBFD01C2045360289(uVar27) && !unk_0x7F420695E3F776FB(uVar27, 0))
					{
						unk_0x19626F992DC71FB9(uVar27);
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

bool func_46(int iParam0)
{
	return iParam0 == 17;
}

void func_47()
{
	struct<3> Var0;
	
	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { Var0 };
}

void func_48()
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
}

int func_49(var uParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x9B5C1660CCDF7189(uParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_50(int iParam0, int iParam1, int iParam2)
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
				func_52();
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
		if (func_13(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_51(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_52()
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

int func_53(int iParam0)
{
	if (func_13(iParam0, 0))
	{
		return 1;
	}
	if (func_54())
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

bool func_54()
{
	return BitTest(Global_2621446, 3);
}

int func_55()
{
	if (func_56() == 0)
	{
		return 1;
	}
	return 0;
}

int func_56()
{
	return Global_1574633.f_18;
}

int func_57()
{
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_58()
{
	if (Local_156.f_2 == 19)
	{
		if (!func_65(27247, -1))
		{
			func_64(27247, 1, -1);
			func_63(1);
			func_64(28191, 1, -1);
			func_62(10);
			func_59(18, 0);
		}
	}
	else if (Local_156.f_2 == 41)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_45253, true);
	}
	else if (Local_156.f_2 == 42)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_45253, 2);
	}
	else if (Local_156.f_2 == 43)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_45253, 3);
	}
	else if (Local_156.f_2 == 44)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_45253, 4);
	}
	else if (Local_156.f_2 == 45)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_45253, 5);
	}
	else if (Local_156.f_2 == 46)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_45253, 7);
	}
	else if (Local_156.f_2 == 47)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_45253, 10);
	}
	else if (Local_156.f_2 == 48)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_45253, 8);
	}
	else if (Local_156.f_2 == 22)
	{
		func_64(28250, 1, -1);
	}
	else if (Local_156.f_2 == 23)
	{
		func_64(28251, 1, -1);
	}
	else if (Local_156.f_2 == 24)
	{
		func_64(28252, 1, -1);
	}
}

void func_59(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_60(6);
	}
	switch (iParam0)
	{
		case 0:
			func_60(3);
			break;
		
		case 1:
			func_60(12);
			break;
		
		case 7:
			func_60(21);
			break;
		
		case 8:
			func_60(31);
			break;
		
		case 9:
			func_60(32);
			break;
		
		case 10:
			func_60(33);
			break;
		
		case 11:
			func_60(34);
			break;
		
		case 12:
			func_60(35);
			break;
		
		case 13:
			func_60(36);
			break;
		
		case 14:
			func_60(37);
			break;
		
		case 15:
			func_60(38);
			break;
		
		case 16:
			func_60(39);
			break;
		
		case 17:
			func_60(40);
			break;
		
		case 18:
			func_60(41);
			break;
		
		case 4:
			func_60(59);
			break;
		
		case 19:
			func_60(70);
			break;
	}
}

void func_60(int iParam0)
{
	bool bVar0;
	
	if (!func_61(iParam0))
	{
		bVar0 = iParam0;
		if (bVar0 > 31)
		{
			if (bVar0 <= 63)
			{
				bVar0 = (bVar0 - 32);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_6965), bVar0);
			}
			else if (bVar0 <= 95)
			{
				bVar0 = (bVar0 - 64);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_6966), bVar0);
			}
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_6964), bVar0);
		}
	}
}

bool func_61(var uParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = uParam0;
	uVar1 = Global_2738934.f_6964;
	if (iVar0 > 31)
	{
		if (iVar0 <= 63)
		{
			uVar1 = Global_2738934.f_6965;
			iVar0 = (iVar0 - 32);
		}
		else if (iVar0 <= 95)
		{
			uVar1 = Global_2738934.f_6966;
			iVar0 = (iVar0 - 64);
		}
	}
	return BitTest(uVar1, iVar0);
}

void func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_60(0);
			break;
		
		case 1:
			func_60(1);
			break;
		
		case 2:
			func_60(2);
			break;
		
		case 3:
			func_60(5);
			break;
		
		case 4:
			func_60(7);
			break;
		
		case 5:
			func_60(8);
			break;
		
		case 9:
			func_60(14);
			break;
		
		case 6:
			func_60(9);
			break;
		
		case 7:
			func_60(10);
			break;
		
		case 8:
			func_60(11);
			break;
		
		case 10:
			func_60(15);
			break;
		
		case 11:
			func_60(16);
			break;
		
		case 12:
			func_60(17);
			break;
		
		case 13:
			func_60(18);
			break;
		
		case 14:
			func_60(19);
			break;
		
		case 15:
			func_60(20);
			break;
		
		case 20:
			func_60(22);
			break;
		
		case 21:
			func_60(23);
			break;
		
		case 22:
			func_60(24);
			break;
		
		case 23:
			func_60(25);
			break;
		
		case 24:
			func_60(26);
			break;
		
		case 25:
			func_60(27);
			break;
		
		case 26:
			func_60(28);
			break;
		
		case 27:
			func_60(29);
			break;
		
		case 28:
			func_60(30);
			break;
		
		case 29:
			func_60(43);
			break;
		
		case 30:
			func_60(44);
			break;
		
		case 31:
			func_60(45);
			break;
		
		case 32:
			func_60(46);
			break;
		
		case 33:
			func_60(47);
			break;
		
		case 34:
			func_60(48);
			break;
		
		case 35:
			func_60(49);
			break;
		
		case 36:
			func_60(50);
			break;
		
		case 37:
			func_60(51);
			break;
		
		case 38:
			func_60(52);
			break;
		
		case 16:
			func_60(53);
			break;
		
		case 17:
			func_60(54);
			break;
		
		case 18:
			func_60(55);
			break;
		
		case 19:
			func_60(56);
			break;
		
		case 39:
			func_60(61);
			break;
		
		case 40:
			func_60(65);
			break;
		
		case 41:
			func_60(66);
			break;
		
		case 43:
			func_60(64);
			break;
		
		case 42:
			func_60(63);
			break;
		
		case 44:
			func_60(67);
			break;
		
		case 45:
			func_60(68);
			break;
		
		case 46:
			func_60(69);
			break;
		
		case 47:
			func_60(72);
			break;
		
		case 48:
			func_60(76);
			break;
		
		case 49:
			func_60(74);
			break;
		
		case 50:
			func_60(75);
			break;
		
		case 51:
			func_60(73);
			break;
	}
}

void func_63(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_433.f_2, 14))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_433.f_2), 14);
		}
	}
	else if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_433.f_2, 14))
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_433.f_2), 14);
	}
}

void func_64(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_15();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

bool func_65(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

void func_66(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

void func_67(int iParam0)
{
	Local_156.f_115 = iParam0;
}

void func_68()
{
	struct<11> Var0;
	struct<16> Var1;
	
	Var0.f_0 = -438538740;
	Var0.f_2 = 1;
	Var0.f_6 = unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Local_156.f_13));
	Var1 = { func_34(Local_156.f_2) };
	Var0.f_8 = unk_0x70E57E9927B6BA58(func_72(&Var1));
	if (Local_156.f_2 == 19)
	{
		Var0.f_9 = 1;
	}
	if (unk_0x259BE71D8A81D4FA() != func_23())
	{
		if (func_71(unk_0x259BE71D8A81D4FA()))
		{
			Var0.f_10 = 589001948;
		}
		else if (func_69(unk_0x259BE71D8A81D4FA()))
		{
			Var0.f_10 = 2003554330;
		}
		else
		{
			Var0.f_10 = 0;
		}
	}
	else
	{
		Var0.f_10 = 0;
	}
	unk_0x2970B68950960A6C(&Var0);
}

int func_69(int iParam0)
{
	if (iParam0 != func_23())
	{
		if (func_17(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_70(Global_2657971[iParam0 /*465*/].f_322.f_8) == 17;
			}
		}
	}
	return 0;
}

int func_70(int iParam0)
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

int func_71(int iParam0)
{
	if (iParam0 != func_23())
	{
		if (func_17(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_70(Global_2657971[iParam0 /*465*/].f_322.f_8) == 22;
			}
		}
	}
	return 0;
}

var func_72(var uParam0)
{
	return uParam0;
}

bool func_73(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_74()
{
	switch (Local_156.f_115)
	{
		case 0:
			func_95();
			break;
		
		case 1:
			func_89();
			break;
		
		case 2:
			func_86();
			break;
		
		case 3:
			func_82();
			break;
		
		case 4:
			func_75();
			break;
	}
}

void func_75()
{
	if (!func_27(5))
	{
		Local_156.f_67.f_4 = 0;
		Local_156.f_67.f_3 = 0;
		func_81(&(Local_156.f_67), 11);
		if (Local_156.f_67.f_5)
		{
			func_26(5);
		}
	}
	else if (func_76(unk_0x4A8C381C258A124D(), 11))
	{
		func_66(&(Local_156.f_65), 2);
	}
}

int func_76(var uParam0, int iParam1)
{
	struct<18> Var0;
	
	if (func_80(uParam0))
	{
		Var0.f_2 = 14;
		func_77(Local_156.f_66, iParam1, 0, &Var0);
		return unk_0x13CCB1AD131C1082(uParam0, &(Var0.f_17), Var0.f_1, 3);
	}
	return 0;
}

void func_77(var uParam0, int iParam1, int iParam2, var uParam3)
{
	if (!func_78())
	{
		StringCopy(&(uParam3->f_17), "anim_heist@arcade@fortune@male@", 64);
	}
	else
	{
		StringCopy(&(uParam3->f_17), "anim_heist@arcade@fortune@female@", 64);
	}
	switch (iParam1)
	{
		case 0:
			uParam3->f_1 = "start_game";
			break;
		
		case 1:
			uParam3->f_1 = "idle";
			break;
		
		case 11:
			uParam3->f_1 = "exit";
			break;
		
		case 21:
			uParam3->f_1 = "reaction_amused";
			break;
		
		case 22:
			uParam3->f_1 = "reaction_angry";
			break;
		
		case 23:
			uParam3->f_1 = "reaction_confused";
			break;
		
		case 24:
			uParam3->f_1 = "reaction_disgusted";
			break;
		
		case 25:
			uParam3->f_1 = "reaction_insulted";
			break;
		
		case 26:
			uParam3->f_1 = "reaction_pondering";
			break;
		
		case 27:
			uParam3->f_1 = "reaction_surprised";
			break;
	}
}

bool func_78()
{
	return func_79(unk_0x259BE71D8A81D4FA());
}

int func_79(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0)
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

void func_81(var uParam0, int iParam1)
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
			unk_0x8744D2E3FC95740E(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_438), true);
			bVar1 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_21(&(uParam0->f_1)))
	{
		func_20(&(uParam0->f_1), 0, 0);
	}
	bVar2 = true;
	if (*uParam0 == iParam1 && !bVar1)
	{
		if (func_21(&(uParam0->f_1)) && !func_19(&(uParam0->f_1), 1000, 0))
		{
			bVar2 = false;
		}
		else
		{
			func_5(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_5(&(uParam0->f_1));
	}
	if (bVar2)
	{
		iVar3 = func_18(unk_0x259BE71D8A81D4FA());
		if (iVar3 != -1)
		{
			unk_0x71A6F836422FDD2B(1, &Var0, 9, iVar3, Var0.f_0);
			uParam0->f_5 = 1;
		}
	}
}

void func_82()
{
	if (!func_27(2))
	{
		if (func_27(9) && func_19(&(Local_156.f_11), (func_32(Local_156.f_3) / 3) * 2, 0))
		{
			Local_156.f_67.f_4 = 0;
			Local_156.f_67.f_3 = 0;
			func_81(&(Local_156.f_67), Local_156.f_63);
			func_9(9);
			func_26(2);
		}
	}
	else if (func_83())
	{
		func_67(4);
	}
}

bool func_83()
{
	float fVar0;
	
	if (!func_27(3))
	{
		if (func_76(unk_0x4A8C381C258A124D(), Local_156.f_63))
		{
			func_26(3);
		}
	}
	else if (!func_27(4))
	{
		Local_156.f_1 = unk_0x643DC062EE904FCA(func_85());
		fVar0 = func_84(Local_156.f_63);
		if (unk_0xBD3B265153D3BA2D(Local_156.f_1) >= fVar0)
		{
			func_26(4);
		}
	}
	return func_27(4);
}

float func_84(int iParam0)
{
	float fVar0;
	
	fVar0 = 0,96f;
	switch (iParam0)
	{
		case 22:
			fVar0 = 0,65f;
			break;
		
		case 23:
			fVar0 = 0,85f;
			break;
		
		case 26:
			fVar0 = 0,9f;
			break;
		
		case 27:
			fVar0 = 0,9f;
			break;
	}
	return fVar0;
}

var func_85()
{
	return Global_1971394.f_1;
}

void func_86()
{
	if (func_19(&(Local_156.f_15), 2100, 0))
	{
		func_5(&(Local_156.f_15));
		Local_156.f_9 = func_22(unk_0x259BE71D8A81D4FA());
		func_87(Local_156.f_2, Local_156.f_5, Local_156.f_9, Local_156.f_10);
		func_67(3);
	}
}

void func_87(var uParam0, var uParam1, var uParam2, var uParam3)
{
	struct<7> Var0;
	int iVar1;
	
	Var0.f_0 = 1461088877;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = uParam3;
	Var0.f_4 = uParam1;
	Var0.f_5 = uParam0;
	Var0.f_6 = uParam2;
	iVar1 = func_88(1);
	if (!iVar1 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 7, iVar1, Var0.f_0);
	}
}

var func_88(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)))
		{
			iVar2 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar1));
			if (func_17(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_89()
{
	Local_156.f_2 = func_94();
	Local_156.f_63 = func_91(Local_156.f_2);
	Local_156.f_5 = func_90();
	func_67(2);
}

int func_90()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 10);
	iVar1 = 0;
	while (iVar0 == Local_156.f_5 && iVar1 < 10)
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, 10);
		iVar1++;
	}
	if (iVar1 >= 10)
	{
		iVar0 = unk_0xC5935DFB3F39785A(0, 10);
	}
	return iVar0;
}

var func_91(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			uVar0 = func_93(23, 26);
			break;
		
		case 1:
			uVar0 = func_93(26, 27);
			break;
		
		case 2:
			uVar0 = func_93(21, 27);
			break;
		
		case 3:
			uVar0 = func_93(21, 26);
			break;
		
		case 4:
			uVar0 = func_93(23, 23);
			break;
		
		case 5:
			uVar0 = func_93(22, 23);
			break;
		
		case 6:
			uVar0 = func_93(26, 26);
			break;
		
		case 7:
			uVar0 = func_93(27, 23);
			break;
		
		case 8:
			uVar0 = func_93(23, 26);
			break;
		
		case 9:
			uVar0 = func_93(23, 23);
			break;
		
		case 10:
			uVar0 = func_93(22, 25);
			break;
		
		case 11:
			uVar0 = func_93(22, 21);
			break;
		
		case 12:
			uVar0 = func_93(22, 25);
			break;
		
		case 13:
			uVar0 = func_93(23, 26);
			break;
		
		case 14:
			uVar0 = func_93(27, 26);
			break;
		
		case 15:
			uVar0 = func_93(21, 24);
			break;
		
		case 16:
			uVar0 = func_93(23, 22);
			break;
		
		case 17:
			uVar0 = func_93(23, 26);
			break;
		
		case 18:
			uVar0 = func_93(22, 23);
			break;
		
		case 19:
			uVar0 = func_93(27, 27);
			break;
		
		case 20:
			uVar0 = func_93(27, 27);
			break;
		
		case 21:
			uVar0 = func_93(22, 25);
			break;
		
		case 22:
			uVar0 = func_93(23, 26);
			break;
		
		case 23:
			uVar0 = func_93(23, 26);
			break;
		
		case 24:
			uVar0 = func_93(23, 26);
			break;
		
		case 25:
			uVar0 = func_93(21, 21);
			break;
		
		case 26:
			uVar0 = func_93(27, 26);
			break;
		
		case 27:
			uVar0 = func_93(21, 22);
			break;
		
		case 28:
			uVar0 = func_93(23, 25);
			break;
		
		case 29:
			uVar0 = func_93(23, 26);
			break;
		
		case 30:
			uVar0 = func_93(23, 26);
			break;
		
		case 31:
			uVar0 = func_93(23, 26);
			break;
		
		case 32:
			uVar0 = func_93(23, 26);
			break;
		
		case 33:
			uVar0 = func_93(23, 26);
			break;
		
		case 34:
			uVar0 = func_93(23, 26);
			break;
		
		case 35:
			uVar0 = func_93(23, 26);
			break;
		
		case 36:
			uVar0 = func_93(23, 26);
			break;
		
		case 37:
			uVar0 = func_93(23, 26);
			break;
		
		case 38:
			uVar0 = func_93(23, 26);
			break;
		
		case 39:
			uVar0 = func_93(23, 26);
			break;
		
		case 40:
			uVar0 = func_93(23, 26);
			break;
		
		case 41:
			uVar0 = func_92();
			break;
		
		case 42:
			uVar0 = func_93(22, 25);
			break;
		
		case 43:
			uVar0 = func_93(27, 26);
			break;
		
		case 44:
			uVar0 = func_93(22, 25);
			break;
		
		case 45:
			uVar0 = func_93(22, 25);
			break;
		
		case 46:
			uVar0 = func_93(22, 25);
			break;
		
		case 47:
			uVar0 = func_93(22, 25);
			break;
		
		case 48:
			uVar0 = func_93(23, 26);
			break;
	}
	return uVar0;
}

int func_92()
{
	int iVar0;
	int iVar1;
	
	switch (unk_0x60B554F782F2E6A6())
	{
		case joaat("rain"):
			iVar0 = 24;
			iVar1 = 22;
			break;
		
		case 1840358669:
		case joaat("Neutral"):
		case joaat("clear"):
			iVar0 = 21;
			iVar1 = 27;
			break;
		
		case joaat("OVERCAST"):
		case 282916021:
			iVar0 = 26;
			iVar1 = 23;
			break;
		
		case -318724249:
		case joaat("clouds"):
			iVar0 = 26;
			iVar1 = 23;
			break;
		
		case joaat("THUNDER"):
			iVar0 = 22;
			iVar1 = 24;
			break;
		
		case joaat("snow"):
		case -1429616491:
			iVar0 = 27;
			iVar1 = 27;
			break;
		
		default:
			iVar0 = 26;
			iVar1 = 26;
			break;
	}
	return func_93(iVar0, iVar1);
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 2);
	iVar1 = -1;
	switch (iVar0)
	{
		case 0:
			iVar1 = iParam0;
			if (Local_156.f_63 == iParam0)
			{
				iVar1 = iParam1;
			}
			break;
		
		case 1:
			iVar1 = iParam1;
			if (Local_156.f_63 == iParam1)
			{
				iVar1 = iParam0;
			}
			break;
	}
	return iVar1;
}

int func_94()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	iVar0 = 49;
	if (Global_45253 != 0)
	{
		iVar0 = 41;
	}
	else if (!Global_262145.f_26683)
	{
		iVar0 = 48;
	}
	iVar1 = unk_0xC5935DFB3F39785A(0, iVar0);
	uVar2 = func_65(27247, -1);
	uVar3 = func_65(28250, -1);
	uVar4 = func_65(28251, -1);
	uVar5 = func_65(28252, -1);
	iVar6 = 0;
	while ((((iVar1 == Local_156.f_2 || (iVar1 == 19 && uVar2)) || (iVar1 == 22 && uVar3)) || (iVar1 == 23 && uVar4)) || ((iVar1 == 24 && uVar5) && iVar6 < 10))
	{
		iVar1 = unk_0xC5935DFB3F39785A(0, iVar0);
		iVar6++;
	}
	if (iVar6 >= 10)
	{
		iVar1 = unk_0xC5935DFB3F39785A(0, 19);
	}
	return iVar1;
}

void func_95()
{
	Local_156.f_10 = func_78();
	Local_156.f_67.f_4 = 0;
	Local_156.f_67.f_3 = 0;
	func_81(&(Local_156.f_67), 1);
	func_20(&(Local_156.f_13), 0, 0);
	func_67(1);
}

void func_96()
{
	if (func_99())
	{
		func_66(&(Local_156.f_65), 1);
	}
	else if (func_98(unk_0x259BE71D8A81D4FA()) == Local_156.f_66 && Local_156.f_66 == 11)
	{
		func_97();
	}
	else if (func_21(&(Local_156.f_17)))
	{
		func_5(&(Local_156.f_17));
	}
}

void func_97()
{
	struct<16> Var0;
	
	if (!func_21(&(Local_156.f_17)))
	{
		if (func_27(8))
		{
			func_9(8);
			func_33(&(Local_156.f_17), 0, 0);
		}
		else
		{
			StringCopy(&Var0, "HS3MN_ATTRCT", 64);
			func_10(Var0, 0);
			if (Local_156.f_76.f_32)
			{
				func_33(&(Local_156.f_17), 0, 0);
			}
		}
	}
	else if (func_19(&(Local_156.f_17), 40000, 0))
	{
		func_5(&(Local_156.f_17));
	}
}

int func_98(int iParam0)
{
	if (iParam0 != func_23())
	{
		return Global_2657971[iParam0 /*465*/].f_438.f_3;
	}
	return -1;
}

int func_99()
{
	if (!func_101(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (!func_100(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (func_98(unk_0x259BE71D8A81D4FA()) != Local_156.f_66)
	{
		return 0;
	}
	return 1;
}

int func_100(int iParam0)
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_438, 1);
	}
	return 0;
}

int func_101(int iParam0)
{
	if (iParam0 != func_23())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_438, 0);
	}
	return 0;
}

int func_102()
{
	if (func_109())
	{
		return 1;
	}
	if (!func_55())
	{
		return 1;
	}
	if (func_106(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (func_105(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (func_103(11))
	{
		return 1;
	}
	return 0;
}

bool func_103(int iParam0)
{
	return BitTest(Global_1971394, func_104(iParam0));
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		default:
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

int func_105(int iParam0)
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

int func_106(int iParam0)
{
	if (iParam0 != func_23() && func_17(iParam0, 1, 1))
	{
		if (func_108(iParam0) && !func_107(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_107(int iParam0)
{
	if (iParam0 != func_23() && func_17(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 4);
	}
	return 0;
}

int func_108(int iParam0)
{
	if (iParam0 != func_23() && func_17(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 3);
	}
	return 0;
}

bool func_109()
{
	return BitTest(Global_1971394, 0);
}

int func_110()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_117())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (func_115(159))
	{
		if (!func_114())
		{
			return 1;
		}
	}
	if (func_115(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_111() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_111()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_111()
{
	switch (func_113())
	{
		case 0:
			return func_112();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_112()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_113()
{
	return Global_32948;
}

bool func_114()
{
	return Global_2684504.f_700;
}

int func_115(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_116()
{
	return Global_2696172;
}

bool func_117()
{
	return Global_2684504.f_695;
}

void func_118()
{
	system::wait(0);
}

void func_119()
{
	func_121(11, 0);
	func_120();
}

void func_120()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_121(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_103(iParam0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&Global_1971394, func_104(iParam0));
		}
	}
	else if (func_103(iParam0))
	{
		unk_0x8744D2E3FC95740E(&Global_1971394, func_104(iParam0));
	}
}

void func_122(struct<18> Param0)
{
	unk_0xDB2434E51017FFCC(32, 0, Param0.f_0);
	func_125(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&uLocal_155, 1, 0);
	unk_0x7B13DC83218D9AF5(&uLocal_122, 33, 0);
	if (!func_124())
	{
		func_119();
	}
	Local_156.f_64 = Param0.f_1;
	Local_156.f_66 = Param0.f_17;
	if (unk_0x76CD105BCAC6EB9F())
	{
	}
	else
	{
		func_119();
	}
	func_123();
}

void func_123()
{
	func_121(11, 0);
}

int func_124()
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
		if (func_117())
		{
			return 0;
		}
		if (func_115(157))
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

int func_125(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_120();
			}
			else
			{
				return 0;
			}
		}
		if (!func_126(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_120();
					}
					else
					{
						return 0;
					}
				}
				if (func_117())
				{
					if (!bParam2)
					{
						func_120();
					}
					else
					{
						return 0;
					}
				}
				if (func_115(157))
				{
					if (!bParam2)
					{
						func_120();
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
					func_120();
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
				func_120();
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
			func_120();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_126(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

