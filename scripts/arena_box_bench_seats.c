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
	struct<282> Local_100 = { 20, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1061158912, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_101 = -1;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = -1;
	var uLocal_107 = -1;
	var uLocal_108 = -1;
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
	struct<15> Local_119 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<2> Local_130[32];
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
	fLocal_61 = ((0,05f + 0,275f) - 0,01f);
	fLocal_63 = 0f;
	if (func_164())
	{
		while (!func_154())
		{
			system::wait(0);
			func_61(&Local_100, &Local_119);
			func_48();
			if (unk_0x76CD105BCAC6EB9F() && unk_0x93E08E0F531E2C35())
			{
				func_38(&Local_100, &Local_119);
				func_37();
			}
		}
	}
	func_1();
}

void func_1()
{
	func_3(&Local_100, &Local_119);
	Global_2707765 = 0;
	func_2();
}

void func_2()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_3(var uParam0, var uParam1)
{
	var uVar0;
	
	if (func_36(&(uParam0->f_281), 15))
	{
		func_35();
		unk_0x8744D2E3FC95740E(&Global_2707768, 8);
		func_34(&(uParam0->f_281), 15);
	}
	func_32(&(uParam0->f_281.f_6));
	func_27(uParam0, 1);
	if (uParam0->f_281.f_5 > 2)
	{
		if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
		{
			if (((unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) && unk_0x93BF17E19A9F0E9B(uParam1->f_14[uParam0->f_281.f_2])) && unk_0xEADBDBE0422CF7E6(uParam1->f_14[uParam0->f_281.f_2]))
			{
				if (unk_0x21478251925DBFD7(unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), unk_0x4A8C381C258A124D()))
				{
					unk_0x837D67618BF89034(unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), 0, 1);
					func_26(&(uParam1->f_14[uParam0->f_281.f_2]));
				}
			}
		}
		if ((!BitTest(Global_1963846, 7) && !BitTest(Global_1963846, 3)) && !func_24(unk_0x259BE71D8A81D4FA()))
		{
			func_23(-1);
			func_22(-1);
		}
		Global_2707766 = 0;
		unk_0x8744D2E3FC95740E(&Global_2707768, 6);
		uVar0 = unk_0x643DC062EE904FCA(uParam0->f_281.f_1);
		if (unk_0x5266F1D2AEF6F73A(uVar0))
		{
			unk_0xF2E51EC84D76A2B6(uParam0->f_281.f_1);
		}
		if ((uParam0->f_281.f_9 == 1 && !unk_0x787F8EE1F6FBDC6D()) && func_20())
		{
			func_5(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
		}
		func_4();
	}
}

void func_4()
{
	if (Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 0;
	}
}

void func_5(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_19())
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
		if (!func_20())
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
				else if (bVar14 || ((!func_15(unk_0x259BE71D8A81D4FA(), 0) && !func_14()) && !func_13(unk_0x259BE71D8A81D4FA())))
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
					func_10(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_9(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
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
					func_8();
					func_7();
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
				if (!func_9(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
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
					if (func_6(Global_4718592.f_185586))
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

bool func_6(int iParam0)
{
	return iParam0 == 17;
}

void func_7()
{
	struct<3> Var0;
	
	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { Var0 };
}

void func_8()
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
}

int func_9(var uParam0)
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

void func_10(int iParam0, int iParam1, int iParam2)
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
				func_12();
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
		if (func_15(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_11(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_12()
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

int func_13(int iParam0)
{
	if (func_15(iParam0, 0))
	{
		return 1;
	}
	if (func_14())
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

bool func_14()
{
	return BitTest(Global_2621446, 3);
}

bool func_15(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_18(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_16(-1, 0) == 8;
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

int func_16(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_17();
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

int func_17()
{
	return Global_1574926;
}

int func_18(var uParam0)
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

int func_19()
{
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	if (func_21() == 0)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	return Global_1574633.f_18;
}

void func_22(int iParam0)
{
	Global_2696199 = iParam0;
}

void func_23(int iParam0)
{
	Global_2696201 = iParam0;
	Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_873 = iParam0;
}

int func_24(bool bParam0)
{
	if (bParam0 != func_25())
	{
		return BitTest(Global_1845281[bParam0 /*883*/].f_268.f_370, 29);
	}
	return 0;
}

int func_25()
{
	return -1;
}

void func_26(var uParam0)
{
	var uVar0;
	
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		if (!unk_0xEADBDBE0422CF7E6(*uParam0))
		{
		}
	}
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x81A7F3CD719DD53B(&uVar0);
	}
}

void func_27(var uParam0, int iParam1)
{
	if (func_28())
	{
		unk_0x428C32CC68809A35(1);
	}
	if (iParam1 && uParam0->f_281.f_6 != -1)
	{
		func_32(&(uParam0->f_281.f_6));
		uParam0->f_281.f_6 = -1;
	}
}

int func_28()
{
	if ((BitTest(Global_4718592.f_32, 23) && !BitTest(Global_1963847, 13)) && !BitTest(Global_1963847, 19))
	{
		return 0;
	}
	if ((BitTest(Global_4718592.f_30, 25) && !BitTest(Global_1963847, 15)) && !BitTest(Global_1963847, 19))
	{
		return 0;
	}
	if ((((((((((((func_31("MPOFSEAT_PCEXIT") || func_31("MPOFSEAT_EXIT")) || func_31("ARENA_SEAT")) || func_31("ARENA_SEAT_PC")) || func_30("ARENA_SEAT1", Global_262145.f_26209, Global_262145.f_26210)) || func_30("ARENA_SEAT_PC1", Global_262145.f_26209, Global_262145.f_26210)) || func_29("ARENA_SEAT2", Global_262145.f_26209)) || func_29("ARENA_SEAT_PC2", Global_262145.f_26209)) || func_29("ARENA_SEAT3", Global_262145.f_26210)) || func_29("ARENA_SEAT_PC3", Global_262145.f_26210)) || func_31("ARENA_SEAT4")) || func_31("ARENA_SEAT_PC4")) || func_31("ARENA_SEAT_EX"))
	{
		return 1;
	}
	return 0;
}

bool func_29(char* sParam0, var uParam1)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

var func_30(char* sParam0, var uParam1, var uParam2)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x511D14ED2DA887E1(uParam2);
	return unk_0x7EBCD400E7DE179C(0);
}

bool func_31(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_32(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_33(*uParam0);
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

int func_33(int iParam0)
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

void func_34(var uParam0, bool bParam1)
{
	unk_0x8744D2E3FC95740E(uParam0, iParam1);
}

void func_35()
{
	unk_0x4E6A84BCEF2DCCBF();
}

bool func_36(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_37()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		iVar1 = 0;
		bVar2 = unk_0xB23E0F9B63D009A8(bVar0);
		if (bVar2 != func_25() && unk_0xCCD470854FB0E643(bVar2))
		{
			if (BitTest(Local_130[bVar2 /*2*/], 0))
			{
				if (!BitTest(Local_119.f_13, bVar2))
				{
					if (Local_130[bVar2 /*2*/].f_1 != 0)
					{
						if (BitTest(Local_130[bVar2 /*2*/].f_1, 0))
						{
							iVar3 = 0;
							while (iVar3 < 10)
							{
								if (Local_119.f_2[iVar3] < 0)
								{
									Local_119.f_2[iVar3] = bVar2;
									unk_0x0B0C9A0F9AAEB7F0(&(Local_119.f_13), bVar2);
								}
								else
								{
									iVar3++;
								}
							}
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < 10)
							{
								if (BitTest(Local_130[bVar2 /*2*/].f_1, iVar4 + 1))
								{
									Local_119.f_2[iVar4] = bVar2;
									unk_0x0B0C9A0F9AAEB7F0(&(Local_119.f_13), bVar2);
								}
								else
								{
									iVar4++;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar1 = 1;
			}
		}
		else
		{
			iVar1 = 1;
		}
		if (iVar1 && bVar2 != unk_0x259BE71D8A81D4FA())
		{
			if (BitTest(Local_119.f_13, bVar0))
			{
				iVar5 = 0;
				while (iVar5 < 10)
				{
					if (Local_119.f_2[iVar5] == bVar0)
					{
						if (unk_0x2FC2FDC413532977(Local_119.f_14[iVar5]))
						{
							if (unk_0xEADBDBE0422CF7E6(Local_119.f_14[iVar5]))
							{
								Local_119.f_2[iVar5] = -1;
								func_26(&(Local_119.f_14[iVar5]));
								unk_0x8744D2E3FC95740E(&(Local_119.f_13), bVar0);
							}
							else
							{
								unk_0x460D2A8B2C7DC7D4(Local_119.f_14[iVar5]);
							}
							else
							{
								Jump @393; //curOff = 369
								Local_119.f_2[iVar5] = -1;
								unk_0x8744D2E3FC95740E(&(Local_119.f_13), bVar0);
								iVar5++;
							}
							bVar0++;
						}

void func_38(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	unk_0x80813AC549A1E8AE(func_45());
	if (!unk_0xE100DD4F82A51BDE(func_45()))
	{
		return;
	}
	if (*uParam1)
	{
		if (!unk_0x93BF17E19A9F0E9B(uParam1->f_14[uParam0->f_281.f_4]))
		{
			iVar0 = joaat("xs_prop_arena_tablet_drone_01");
			unk_0xEC9DAA34BBB4658C(iVar0);
			if (!unk_0x6252BC0DD8A320DB(iVar0))
			{
				return;
			}
			if (func_39(unk_0xD1797191721E17CE(false, 1) + 1, 0, 1))
			{
				if (!BitTest(uParam1->f_1, uParam0->f_281.f_4))
				{
					unk_0x99C26F3C23B37F42(unk_0xD1797191721E17CE(false, 1) + 1);
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_1), uParam0->f_281.f_4);
				}
				else if (unk_0x78D35ABAF71764AD(1))
				{
					Var2 = { unk_0xBE8776D2466E9EA6(func_45(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0, 2) };
					Var3 = { unk_0x7A6103DCF5EE8CC3(func_45(), "enter_tablet", (uParam0[uParam0->f_281.f_4 /*14*/])->f_8, (uParam0[uParam0->f_281.f_4 /*14*/])->f_8.f_3, 0, 2) };
					uVar1 = unk_0x4E55EAB577C13329(iVar0, Var2, 1, 1, 0);
					unk_0x55098D9E9AD58806(iVar0);
					unk_0x999C62072AF920FD(uVar1, 0);
					unk_0x62C438C53BB57AFD(uVar1, Var2, 0, 0, 1);
					unk_0xCF39804E8C88080E(uVar1, Var3, 2, 1);
					unk_0x5D7CD709B34C90F0(uVar1, true);
					uParam1->f_14[uParam0->f_281.f_4] = unk_0x16FE0AE33E462D17(uVar1);
				}
			}
		}
		uParam0->f_281.f_4++;
		if (uParam0->f_281.f_4 >= 10)
		{
			uParam0->f_281.f_4 = 0;
		}
	}
}

bool func_39(int iParam0, bool bParam1, bool bParam2)
{
	return func_40(2, iParam0, 1, bParam1, bParam2);
}

int func_40(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681448, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_44(iParam0) - func_43(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_43(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_44(iParam0) - func_42(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_43(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_44(iParam0) - func_43(iParam0, 1));
		}
		if (!bParam4 && Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_41(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_41(int iParam0)
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

int func_42(int iParam0)
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

int func_43(int iParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = unk_0x259BE71D8A81D4FA();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657971[bVar0 /*465*/].f_220;
			}
			else
			{
				return unk_0xA0522491D076C1E6(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657971[bVar0 /*465*/].f_221;
			}
			else
			{
				return unk_0xF46F370442FAD8F9(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xE8DB952A4BA8F328())
			{
				return Global_2657971[bVar0 /*465*/].f_222;
			}
			else
			{
				return unk_0xD1797191721E17CE(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_44(int iParam0)
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

char* func_45()
{
	if (func_46())
	{
		return "anim@arena@amb@seat_drone_tablet@female@";
	}
	return "anim@arena@amb@seat_drone_tablet@male@";
}

bool func_46()
{
	return func_47(unk_0x259BE71D8A81D4FA());
}

int func_47(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_119.f_0)
	{
		iVar0 = 1;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_119.f_2[iVar1] == -1 || Local_119.f_2[iVar1] == unk_0x259BE71D8A81D4FA())
			{
				iVar0 = 0;
				if (Local_119.f_2[iVar1] == -1)
				{
					if ((iVar1 <= 7 && func_58()) && func_54())
					{
						unk_0xE226F16D30AF5945(func_53(iVar1), 0,5f, joaat("xs_prop_x18_vip_greeenlight"), 1);
					}
					else
					{
						unk_0xC94AE68759E1B3BD(func_53(iVar1), 0,5f, joaat("xs_prop_x18_vip_greeenlight"), 0);
					}
				}
				else
				{
					unk_0xE226F16D30AF5945(func_53(iVar1), 0,5f, joaat("xs_prop_x18_vip_greeenlight"), 1);
				}
			}
			else
			{
				unk_0xE226F16D30AF5945(func_53(iVar1), 0,5f, joaat("xs_prop_x18_vip_greeenlight"), 1);
			}
			iVar1++;
		}
		Global_2707765 = iVar0;
	}
	else
	{
		Global_2707765 = 0;
	}
	if (Local_100.f_281.f_5 == 4)
	{
		if (!BitTest(Local_130[unk_0x259BE71D8A81D4FA() /*2*/], 0))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_130[unk_0x259BE71D8A81D4FA() /*2*/]), false);
			if (func_52())
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_130[unk_0x259BE71D8A81D4FA() /*2*/].f_1), false);
			}
			else if (Local_100.f_281.f_9 == 1)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_130[unk_0x259BE71D8A81D4FA() /*2*/].f_1), Local_100.f_281.f_2 + 1);
			}
		}
		else if (BitTest(Local_119.f_13, unk_0x259BE71D8A81D4FA()))
		{
			if (func_51() < 0)
			{
				iVar2 = 0;
				while (iVar2 < 10)
				{
					if (Local_119.f_2[iVar2] == unk_0x259BE71D8A81D4FA())
					{
						func_23(iVar2);
					}
					iVar2++;
				}
			}
		}
	}
	else if ((!BitTest(Global_1963846, 7) && !BitTest(Global_1963846, 3)) && !func_24(unk_0x259BE71D8A81D4FA()))
	{
		if (func_52())
		{
			if (func_50() && unk_0x9390801B06EE998F())
			{
				func_49(0);
			}
		}
		if (BitTest(Local_130[unk_0x259BE71D8A81D4FA() /*2*/], 0))
		{
			if (!func_50() && func_51() < 0)
			{
				if (func_52())
				{
					func_49(0);
				}
				unk_0x8744D2E3FC95740E(&(Local_130[unk_0x259BE71D8A81D4FA() /*2*/]), false);
				Local_130[unk_0x259BE71D8A81D4FA() /*2*/].f_1 = 0;
			}
		}
	}
}

void func_49(int iParam0)
{
	Global_2707764 = iParam0;
}

int func_50()
{
	if (Global_2696199 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_51()
{
	return Global_2696201;
}

bool func_52()
{
	return Global_2707764;
}

Vector3 func_53(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2800,331f, -3922,829f, 181,4558f;
		
		case 1:
			return 2799,301f, -3922,829f, 181,4558f;
		
		case 2:
			return 2798,268f, -3922,829f, 181,4558f;
		
		case 3:
			return 2797,243f, -3922,829f, 181,4558f;
		
		case 4:
			return 2796,213f, -3922,829f, 181,4558f;
		
		case 5:
			return 2795,178f, -3922,829f, 181,4558f;
		
		case 6:
			return 2794,153f, -3922,829f, 181,4558f;
		
		case 7:
			return 2793,123f, -3922,829f, 181,4558f;
		
		case 8:
			return 2792,087f, -3922,829f, 181,4558f;
		
		case 9:
			return 2791,061f, -3922,829f, 181,4558f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_54()
{
	int iVar0;
	int iVar1;
	
	if (func_57() && !func_56())
	{
		return 1;
	}
	if (BitTest(Global_4718592.f_30, 25) || BitTest(Global_4718592.f_32, 23))
	{
		if (func_55())
		{
			return 1;
		}
	}
	iVar0 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (iVar0 > 4 || iVar0 < 0)
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
	return 0;
}

bool func_55()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

bool func_56()
{
	return Global_1574974;
}

var func_57()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1963846, 0));
}

int func_58()
{
	if (func_60() && !func_59())
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	return 0;
}

int func_59()
{
	if (Global_4718592.f_127755 == 1 || Global_4718592.f_127755 == 2)
	{
		return 1;
	}
	return 0;
}

var func_60()
{
	return BitTest(Global_4718592.f_178389, 12);
}

void func_61(var uParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	bool bVar6;
	int iVar7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	var uVar13;
	var uVar14;
	struct<3> Var15;
	struct<3> Var16;
	var uVar17;
	int iVar18;
	struct<3> Var19;
	struct<3> Var20;
	
	func_151(uParam0);
	func_149(uParam0);
	func_137(uParam0);
	switch (uParam0->f_281.f_5)
	{
		case 0:
			func_34(&(uParam0->f_281), 11);
			func_136(uParam0, 1);
			break;
		
		case 1:
			if (func_135(uParam0))
			{
				uParam0->f_281.f_7 = unk_0x1DD05E817C89C737();
				func_136(uParam0, 2);
			}
			else if (func_52())
			{
				uParam0->f_281.f_7 = unk_0x1DD05E817C89C737();
				func_136(uParam0, 2);
			}
			break;
		
		case 2:
			if ((func_134(unk_0x4A8C381C258A124D(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_133(unk_0x4A8C381C258A124D(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3)) && !func_52())
			{
				if ((((((func_132(uParam0) || Global_1928440) || func_130(uParam0)) || !func_129(uParam0)) || ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != unk_0x259BE71D8A81D4FA())) || ((uParam0->f_281.f_2 <= 7 && func_58()) && func_54())) || (uParam0->f_281.f_2 < 10 && Global_262145.f_26206))
				{
					if (!Global_1928440 && ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != unk_0x259BE71D8A81D4FA()))
					{
						uVar3 = unk_0x56E414973C2A8C0E(iParam1->f_2[uParam0->f_281.f_2]);
						if (unk_0xFC8BFE4B41177C22(uVar3) && !unk_0x5105BE70DEF1F5FB(iVar3, 2797,988f, -3954,898f, 181,0005f, 2797,949f, -3930,85f, 187,4114f, 30f, 0, 1, 0))
						{
							if (uParam0->f_281.f_6 == -1)
							{
								func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_FULL", 0, unk_0xBD6CA019F46AB947(iParam1->f_2[uParam0->f_281.f_2]), 0, 1);
							}
						}
						else
						{
							func_27(uParam0, 1);
							func_136(uParam0, 1);
						}
					}
					else if ((uParam0->f_281.f_2 <= 7 && func_58()) && func_54())
					{
						if (uParam0->f_281.f_6 == -1)
						{
							func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_NO", 0, 0, 0, 0);
						}
					}
					else
					{
						func_27(uParam0, 1);
						func_136(uParam0, 1);
					}
				}
				else if (uParam0->f_281.f_6 == -1)
				{
					if ((unk_0x1DD05E817C89C737() - uParam0->f_281.f_7) > 150)
					{
						if (uParam0->f_281.f_2 <= 9)
						{
							func_128(&(uParam0->f_281.f_6), 4, "AR_SEAT_PRMPT", 0, 0, 0, 0);
						}
						else
						{
							func_128(&(uParam0->f_281.f_6), 4, "MPJAC_SIT", 0, 0, 0, 0);
						}
					}
				}
				else if (unk_0x875A214D5EBCA509(0, 51))
				{
					func_32(&(uParam0->f_281.f_6));
					func_125(uParam0);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
						func_136(uParam0, 4);
					}
					else
					{
						func_136(uParam0, 3);
					}
				}
			}
			else if (func_52())
			{
				func_32(&(uParam0->f_281.f_6));
				func_136(uParam0, 4);
			}
			else
			{
				func_27(uParam0, 1);
				func_136(uParam0, 1);
			}
			break;
		
		case 4:
			if (func_51() >= 0)
			{
				if (func_52())
				{
					uParam0->f_281.f_2 = func_51();
					if (unk_0xE5E2AE8B19267B8A(unk_0x4A8C381C258A124D()))
					{
						unk_0x091AB029AFE429F2(unk_0x4A8C381C258A124D(), 0, 1);
					}
					func_124(&(uParam0->f_281), 14);
				}
				func_125(uParam0);
				func_136(uParam0, 3);
			}
			if (!func_52())
			{
				if ((uParam0->f_281.f_2 < 10 && iParam1->f_2[uParam0->f_281.f_2] != -1) && iParam1->f_2[uParam0->f_281.f_2] != unk_0x259BE71D8A81D4FA())
				{
					func_27(uParam0, 1);
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
					}
					func_4();
					func_136(uParam0, 1);
				}
			}
			break;
		
		case 3:
			func_123(uParam0, &sVar0);
			if (uParam0->f_281.f_9 == 1)
			{
				if (!unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]))
				{
					return;
				}
				if (!unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0x460D2A8B2C7DC7D4(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			unk_0x80813AC549A1E8AE(&sVar0);
			if (unk_0xE100DD4F82A51BDE(&sVar0))
			{
				func_122();
				func_136(uParam0, 5);
			}
			break;
		
		case 5:
			func_123(uParam0, &sVar0);
			func_121(uParam0, &sVar1, 0);
			Var4 = { unk_0xBE8776D2466E9EA6(&sVar0, &sVar1, func_120(uParam0), func_119(uParam0), 0, 2) };
			Var5 = { unk_0x7A6103DCF5EE8CC3(&sVar0, &sVar1, func_120(uParam0), func_119(uParam0), 0, 2) };
			if (func_36(&(uParam0->f_281), 14))
			{
				bVar6 = true;
				if (func_118() >= 0)
				{
					bVar6 = false;
				}
				if (func_106(Var4, Var5.f_2, 0, 0, 0, 0, 1, bVar6, 1, 0, 0) && Global_2707767)
				{
					func_136(uParam0, 6);
				}
				else if (!Global_2707767)
				{
				}
			}
			else if (Global_2707767)
			{
				if (uParam0->f_281.f_9 == 1)
				{
					if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
					{
						unk_0x460D2A8B2C7DC7D4(iParam1->f_14[uParam0->f_281.f_2]);
					}
				}
				unk_0x63C8DCBEC1CF8225(unk_0x4A8C381C258A124D(), Var4, 1f, 500, Var5.f_2, 0,05f);
				func_23(uParam0->f_281.f_2);
				func_136(uParam0, 6);
			}
			else if (!Global_2707767)
			{
			}
			break;
		
		case 6:
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0x460D2A8B2C7DC7D4(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			func_123(uParam0, &sVar0);
			func_121(uParam0, &sVar1, 0);
			iVar7 = unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_go_straight_to_coord"));
			Var8 = { unk_0x7A6103DCF5EE8CC3(&sVar0, &sVar1, func_120(uParam0), func_119(uParam0), 0, 2) };
			fVar9 = Var8.f_2;
			if (((iVar7 != 1 && iVar7 != 0) || func_105(unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()), fVar9, 5f)) || func_36(&(uParam0->f_281), 14))
			{
				fVar10 = 1f;
				fVar11 = 0f;
				Var12 = { func_120(uParam0) };
				if (func_36(&(uParam0->f_281), 14))
				{
					fVar10 = 2f;
					fVar11 = 0,9f;
				}
				uParam0->f_281.f_1 = unk_0xBC5D9A293974F095(Var12, func_119(uParam0), 2, 1, 0, 1065353216, fVar11, fVar10);
				unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), uParam0->f_281.f_1, &sVar0, &sVar1, 2f, -1000f, 13, 16, 1148846080, 0);
				unk_0xE7101255AD6F1952(uParam0->f_281.f_1);
				uParam0->f_281.f_9.f_4 = unk_0x1DD05E817C89C737();
				func_124(&(uParam0->f_281), 8);
				func_136(uParam0, 7);
			}
			break;
		
		case 7:
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0x460D2A8B2C7DC7D4(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			if (func_36(&(uParam0->f_281), 10))
			{
				func_34(&(uParam0->f_281), 10);
				if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
				{
					unk_0xBD618A73193F9982(uVar13, "Exit_Menu", unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
				}
				func_104(uParam0);
			}
			func_64(uParam0, iParam1);
			uVar2 = unk_0x643DC062EE904FCA(uParam0->f_281.f_1);
			if (unk_0x5266F1D2AEF6F73A(uVar2))
			{
				if (unk_0xBD3B265153D3BA2D(uVar2) >= 1f)
				{
					if (!Global_2707766)
					{
						if (!unk_0xE5E2AE8B19267B8A(unk_0x4A8C381C258A124D()) && !unk_0x6BF8FE9F26BBABDE(unk_0x4A8C381C258A124D()))
						{
							if (Global_1574973)
							{
								unk_0x6EF982A39E8D08FA(unk_0x4A8C381C258A124D(), 1, 1);
							}
						}
					}
					if (!func_50())
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								unk_0xBD618A73193F9982(uVar14, "Enter_Menu", unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
							}
							func_22(uParam0->f_281.f_2);
						}
						else
						{
							func_22(uParam0->f_281.f_2 + 20);
						}
						Global_2707766 = 1;
					}
					else
					{
						Global_2707766 = 1;
					}
					func_62(uParam0, 0);
					func_123(uParam0, &sVar0);
					func_121(uParam0, &sVar1, 0);
					uParam0->f_281.f_1 = unk_0xBC5D9A293974F095(func_120(uParam0), func_119(uParam0), 2, 1, 0, 1065353216, 0f, 1f);
					unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), uParam0->f_281.f_1, &sVar0, &sVar1, 4f, -1,5f, 13, 16, 1148846080, 0);
					unk_0xE7101255AD6F1952(uParam0->f_281.f_1);
					func_124(&(uParam0->f_281), 8);
					func_124(&(uParam0->f_281), 11);
				}
				else
				{
					if (uParam0->f_281.f_9 == 1 && (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 1374875855) || unk_0xBD3B265153D3BA2D(uVar2) > 0,25f))
					{
						if ((unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2])) && !unk_0x1C2F771CDC87A3A5(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), 0))
						{
							if (!unk_0xA3736D76B0E93E93(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2])))
							{
								unk_0x4D306DD94DD6FDBA(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), unk_0x4A8C381C258A124D(), unk_0x72F7E39FB49FC0BA(unk_0x4A8C381C258A124D(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
							}
						}
					}
					func_34(&(uParam0->f_281), 8);
				}
			}
			else if (!func_36(&(uParam0->f_281), 8) && uParam0->f_281.f_5 == 7)
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (unk_0xA3736D76B0E93E93(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2])))
						{
							unk_0x837D67618BF89034(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
						}
						func_26(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				func_136(uParam0, 9);
			}
			break;
		
		case 8:
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0x460D2A8B2C7DC7D4(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			unk_0xF2E51EC84D76A2B6(uParam0->f_281.f_1);
			if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
			{
				if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
				{
					if (unk_0xA3736D76B0E93E93(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2])))
					{
						unk_0x837D67618BF89034(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
					}
					Var15 = { unk_0xBE8776D2466E9EA6(func_45(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0, 2) };
					Var16 = { unk_0x7A6103DCF5EE8CC3(func_45(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0, 2) };
					unk_0x62C438C53BB57AFD(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), Var15, 0, 0, 1);
					unk_0xCF39804E8C88080E(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), Var16, 2, 1);
					unk_0x5D7CD709B34C90F0(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), true);
				}
			}
			func_136(uParam0, 9);
			break;
		
		case 9:
			if (func_36(&(uParam0->f_281), 15))
			{
				func_35();
				unk_0x8744D2E3FC95740E(&Global_2707768, 8);
				func_34(&(uParam0->f_281), 15);
			}
			if (uParam0->f_281.f_9 == 1)
			{
				if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && !unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
				{
					unk_0x460D2A8B2C7DC7D4(iParam1->f_14[uParam0->f_281.f_2]);
				}
			}
			uVar17 = unk_0x643DC062EE904FCA(uParam0->f_281.f_1);
			iVar18 = unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_synchronized_scene"));
			if (iVar18 == 0 || iVar18 == 1)
			{
				if (unk_0x5266F1D2AEF6F73A(uVar17))
				{
					if ((unk_0xBD3B265153D3BA2D(uVar17) >= 0,7f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 364629851)) || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 2116425869))
					{
						unk_0xF2E51EC84D76A2B6(uParam0->f_281.f_1);
						if ((!BitTest(Global_1963846, 7) && !BitTest(Global_1963846, 3)) && !func_24(unk_0x259BE71D8A81D4FA()))
						{
							func_23(-1);
							func_22(-1);
						}
						Global_2707766 = 0;
						unk_0x8744D2E3FC95740E(&Global_2707768, 6);
						func_27(uParam0, 1);
						func_34(&(uParam0->f_281), 14);
						if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
						{
							if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (unk_0xA3736D76B0E93E93(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2])))
								{
									unk_0x837D67618BF89034(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
								}
								Var19 = { unk_0xBE8776D2466E9EA6(func_45(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0, 2) };
								Var20 = { unk_0x7A6103DCF5EE8CC3(func_45(), "enter_tablet", (uParam0[uParam0->f_281.f_2 /*14*/])->f_8, (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3, 0, 2) };
								unk_0x62C438C53BB57AFD(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), Var19, 0, 0, 1);
								unk_0xCF39804E8C88080E(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), Var20, 2, 1);
								unk_0x5D7CD709B34C90F0(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), true);
							}
						}
						if (!unk_0x787F8EE1F6FBDC6D())
						{
							if (uParam0->f_281.f_9 == 1)
							{
								func_5(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
							}
						}
						func_4();
						func_136(uParam0, 0);
					}
					else if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), -641050666))
					{
						if (uParam0->f_281.f_9 == 1)
						{
							if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
							{
								if (unk_0xA3736D76B0E93E93(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2])))
								{
									unk_0x837D67618BF89034(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
								}
							}
						}
					}
				}
			}
			else
			{
				if (uParam0->f_281.f_9 == 1 && uParam0->f_281.f_2 >= 0)
				{
					if (unk_0x93BF17E19A9F0E9B(iParam1->f_14[uParam0->f_281.f_2]) && unk_0xEADBDBE0422CF7E6(iParam1->f_14[uParam0->f_281.f_2]))
					{
						if (unk_0xA3736D76B0E93E93(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2])))
						{
							unk_0x837D67618BF89034(unk_0xAB3646235DE50E93(iParam1->f_14[uParam0->f_281.f_2]), 0, 1);
						}
						func_26(&(iParam1->f_14[uParam0->f_281.f_2]));
					}
				}
				if ((!BitTest(Global_1963846, 7) && !BitTest(Global_1963846, 3)) && !func_24(unk_0x259BE71D8A81D4FA()))
				{
					func_23(-1);
					func_22(-1);
				}
				Global_2707766 = 0;
				unk_0x8744D2E3FC95740E(&Global_2707768, 6);
				func_27(uParam0, 1);
				func_34(&(uParam0->f_281), 14);
				if (!unk_0x787F8EE1F6FBDC6D())
				{
					if (uParam0->f_281.f_9 == 1)
					{
						func_5(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
					}
				}
				func_4();
				func_136(uParam0, 0);
			}
			break;
	}
}

void func_62(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_63(uParam0);
		if (iVar1 != uParam0->f_281.f_9.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_281.f_9.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_281.f_9.f_2;
		}
		iVar1 = uParam0->f_281.f_9.f_1;
	}
	else if (uParam0->f_281.f_9.f_2 == 5)
	{
		iVar1 = uParam0->f_281.f_9.f_1;
		iVar2 = 3;
		iVar0 = unk_0xC5935DFB3F39785A(0, iVar2);
		if (iVar0 == uParam0->f_281.f_9.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_281.f_9.f_2 > 6)
		{
			iVar1 = func_63(uParam0);
			uParam0->f_281.f_9.f_4 = unk_0x1DD05E817C89C737();
		}
		else
		{
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		if ((unk_0x1DD05E817C89C737() - uParam0->f_281.f_9.f_4) >= 90000)
		{
			iVar1 = func_63(uParam0);
			if (iVar1 != uParam0->f_281.f_9.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_281.f_9.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_281.f_9.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_281.f_9.f_3 = uParam0->f_281.f_9.f_2;
	uParam0->f_281.f_9.f_2 = iVar0;
	uParam0->f_281.f_9.f_1 = iVar1;
}

int func_63(var uParam0)
{
	return uParam0->f_281.f_9.f_1;
}

void func_64(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	
	if ((BitTest(Global_1963846, 7) || BitTest(Global_1963846, 3)) || func_24(unk_0x259BE71D8A81D4FA()))
	{
		if (uParam0->f_281.f_5 == 7 && unk_0x15CCE8886267624F())
		{
			func_3(uParam0, uParam1);
			func_136(uParam0, 9);
		}
	}
	if (func_36(&(uParam0->f_281), 13))
	{
		iVar0 = func_96(&(uParam0->f_281.f_17));
		if (iVar0 == 1)
		{
			if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
			{
				unk_0xBD618A73193F9982(uVar1, "Select_Turret", unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
			}
			unk_0x0B0C9A0F9AAEB7F0(&Global_1963846, 9);
			func_34(&(uParam0->f_281), 13);
		}
		else if (iVar0 == 2)
		{
			if (!BitTest(Global_2707768, 7))
			{
				unk_0x0B0C9A0F9AAEB7F0(&Global_2707768, 7);
			}
			unk_0xBF3D28CA44F3BE2D(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_34(&(uParam0->f_281), 13);
		}
	}
	if (uParam0->f_281.f_5 == 7)
	{
		if (unk_0x7811C74D5B749F76(2))
		{
			func_27(uParam0, 1);
		}
		if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), -1322051853))
		{
			func_27(uParam0, 1);
			if (func_36(&(uParam0->f_281), 15))
			{
				func_35();
				unk_0x8744D2E3FC95740E(&Global_2707768, 8);
				func_34(&(uParam0->f_281), 15);
			}
		}
		else if ((((((((((((((((((((((func_36(&(uParam0->f_281), 13) || !Global_1574973) || (!BitTest(Global_1963846, 23) && !func_95())) || Global_2710419) || Global_2710424) || BitTest(Global_1956920, 13)) || BitTest(Global_1963846, 14)) || BitTest(Global_1956920, 9)) || BitTest(Global_2707768, 0)) || BitTest(Global_1963846, 6)) || BitTest(Global_1963846, 7)) || BitTest(Global_1963846, 8)) || BitTest(Global_1963846, 9)) || BitTest(Global_1963846, 2)) || BitTest(Global_1963846, 3)) || BitTest(Global_1963846, 4)) || BitTest(Global_1963846, 5)) || func_24(unk_0x259BE71D8A81D4FA())) || func_52()) || unk_0x4465D55576678706(2, 19)) || !unk_0x9390801B06EE998F()) || func_92(unk_0x259BE71D8A81D4FA())) || Global_2707789 != 0)
		{
			func_27(uParam0, 1);
			if (!BitTest(Global_1963846, 23))
			{
				if (!func_36(&(uParam0->f_281), 15) && Global_2707789 == 0)
				{
					func_91("ARENA SPECTATOR BOX TABLETS");
					unk_0x0B0C9A0F9AAEB7F0(&Global_2707768, 8);
					func_124(&(uParam0->f_281), 15);
				}
			}
			else if (func_36(&(uParam0->f_281), 15))
			{
				func_35();
				unk_0x8744D2E3FC95740E(&Global_2707768, 8);
				func_34(&(uParam0->f_281), 15);
			}
		}
		else if (func_90(uParam0))
		{
			func_27(uParam0, 1);
			if (func_36(&(uParam0->f_281), 15))
			{
				func_35();
				unk_0x8744D2E3FC95740E(&Global_2707768, 8);
				func_34(&(uParam0->f_281), 15);
			}
		}
		else
		{
			if (!func_36(&(uParam0->f_281), 15))
			{
				func_91("ARENA SPECTATOR BOX TABLETS");
				unk_0x0B0C9A0F9AAEB7F0(&Global_2707768, 8);
				func_124(&(uParam0->f_281), 15);
			}
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
			bVar2 = false;
			if (func_89())
			{
				bVar2 = true;
			}
			if (func_29("ARENA_VIP_CASH1", Global_262145.f_26209))
			{
				unk_0x8744D2E3FC95740E(&Global_2707768, 5);
			}
			if (func_29("ARENA_VIP_CASH2", Global_262145.f_26210))
			{
				unk_0x8744D2E3FC95740E(&Global_2707768, 4);
			}
			if (func_31("ARENA_VIP_ABIL"))
			{
				unk_0x8744D2E3FC95740E(&Global_2707768, 7);
			}
			if (BitTest(Global_2707768, 4) && uParam0->f_281.f_6 == -1)
			{
				func_88("ARENA_VIP_CASH2", Global_262145.f_26210, 2000);
			}
			if (BitTest(Global_2707768, 5) && uParam0->f_281.f_6 == -1)
			{
				func_88("ARENA_VIP_CASH1", Global_262145.f_26209, 2000);
			}
			if (BitTest(Global_2707768, 7) && uParam0->f_281.f_6 == -1)
			{
				func_87("ARENA_VIP_ABIL", 2000);
			}
			if ((BitTest(Global_2707768, 4) || BitTest(Global_2707768, 5)) || BitTest(Global_2707768, 7))
			{
				func_27(uParam0, 1);
			}
			if ((((((((!unk_0x4D9174D8796EA622() && !Global_1928440) && !func_36(&(uParam0->f_281), 0)) && !func_36(&(uParam0->f_281), 4)) && !func_86()) && !func_84(1)) && uParam0->f_281.f_9.f_2 != 3) && !unk_0xB11671B812399BA2()) && !func_83())
			{
				if (bVar2)
				{
					if (func_58() && !func_54())
					{
						if (((((func_30("ARENA_SEAT_PC1", Global_262145.f_26209, Global_262145.f_26210) || func_29("ARENA_SEAT_PC2", Global_262145.f_26209)) || func_29("ARENA_SEAT_PC3", Global_262145.f_26210)) || func_30("ARENA_SEAT1", Global_262145.f_26209, Global_262145.f_26210)) || func_29("ARENA_SEAT2", Global_262145.f_26209)) || func_29("ARENA_SEAT3", Global_262145.f_26210))
						{
							func_27(uParam0, 1);
						}
					}
					else if (func_31("ARENA_SEAT_PC") || func_31("ARENA_SEAT"))
					{
						func_27(uParam0, 1);
					}
				}
				if ((((((!func_28() && !BitTest(Global_2707768, 4)) && !BitTest(Global_2707768, 5)) && !BitTest(Global_2707768, 7)) && !func_29("ARENA_VIP_CASH1", Global_262145.f_26209)) && !func_29("ARENA_VIP_CASH2", Global_262145.f_26210)) && !func_31("ARENA_VIP_ABIL"))
				{
					if (unk_0xAE231F549813BBDF(2))
					{
						if (bVar2)
						{
							if (func_58() && !func_54())
							{
								if ((func_30("ARENA_SEAT_PC1", Global_262145.f_26209, Global_262145.f_26210) || func_29("ARENA_SEAT_PC2", Global_262145.f_26209)) || func_29("ARENA_SEAT_PC3", Global_262145.f_26210))
								{
									func_27(uParam0, 1);
								}
								func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC", 0, 0, 0, 0);
							}
							else
							{
								if (func_31("ARENA_SEAT_PC"))
								{
									func_27(uParam0, 1);
								}
								if (!BitTest(Global_2707768, 2) && !BitTest(Global_2707768, 3))
								{
									func_82("ARENA_SEAT_PC1", Global_262145.f_26209, Global_262145.f_26210);
								}
								else if (BitTest(Global_2707768, 2) && !BitTest(Global_2707768, 3))
								{
									func_88("ARENA_SEAT_PC2", Global_262145.f_26209, -1);
								}
								else if (!BitTest(Global_2707768, 2) && BitTest(Global_2707768, 3))
								{
									func_88("ARENA_SEAT_PC3", Global_262145.f_26210, -1);
								}
								else
								{
									func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_PC4", 0, 0, 0, 0);
								}
							}
						}
						else
						{
							func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX", 0, 0, 0, 0);
						}
					}
					else if (bVar2)
					{
						if (func_58() && !func_54())
						{
							if ((func_30("ARENA_SEAT1", Global_262145.f_26209, Global_262145.f_26210) || func_29("ARENA_SEAT2", Global_262145.f_26209)) || func_29("ARENA_SEAT3", Global_262145.f_26210))
							{
								func_27(uParam0, 1);
							}
							func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT", 0, 0, 0, 0);
						}
						else
						{
							if (func_31("ARENA_SEAT"))
							{
								func_27(uParam0, 1);
							}
							if (!BitTest(Global_2707768, 2) && !BitTest(Global_2707768, 3))
							{
								func_82("ARENA_SEAT1", Global_262145.f_26209, Global_262145.f_26210);
							}
							else if (BitTest(Global_2707768, 2) && !BitTest(Global_2707768, 3))
							{
								func_88("ARENA_SEAT2", Global_262145.f_26209, -1);
							}
							else if (!BitTest(Global_2707768, 2) && BitTest(Global_2707768, 3))
							{
								func_88("ARENA_SEAT3", Global_262145.f_26210, -1);
							}
							else
							{
								func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT4", 0, 0, 0, 0);
							}
						}
					}
					else
					{
						func_128(&(uParam0->f_281.f_6), 4, "ARENA_SEAT_EX", 0, 0, 0, 0);
					}
				}
				if (uParam0->f_281.f_5 == 7)
				{
					if (func_58() && !func_54())
					{
						if (((((((((unk_0xDEE3EFEA31A1F555(2, 235) && !unk_0x875A214D5EBCA509(2, 223)) && !unk_0x875A214D5EBCA509(2, 225)) && !unk_0x875A214D5EBCA509(2, 224)) && !unk_0x875A214D5EBCA509(2, 222)) && !BitTest(Global_1963846, 6)) && !BitTest(Global_1963846, 7)) && !BitTest(Global_1963846, 8)) && !BitTest(Global_1963846, 9)) && !func_24(unk_0x259BE71D8A81D4FA()))
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								unk_0xBD618A73193F9982(uVar3, "Exit_Menu", unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
							}
							func_104(uParam0);
						}
						if ((((((((((unk_0xDEE3EFEA31A1F555(2, 223) && !unk_0xDEE3EFEA31A1F555(2, 235)) && !unk_0x875A214D5EBCA509(2, 225)) && !unk_0x875A214D5EBCA509(2, 224)) && !unk_0x875A214D5EBCA509(2, 222)) && !BitTest(Global_1963846, 6)) && !BitTest(Global_1963846, 7)) && !BitTest(Global_1963846, 8)) && !BitTest(Global_1963846, 9)) && !func_24(unk_0x259BE71D8A81D4FA())) && bVar2)
						{
							if (func_81())
							{
								func_27(uParam0, 1);
								unk_0x0B0C9A0F9AAEB7F0(&Global_1963846, 6);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0xBD618A73193F9982(uVar4, "Select_Drone", unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2707768, 7))
								{
									unk_0x0B0C9A0F9AAEB7F0(&Global_2707768, 7);
								}
								unk_0xBF3D28CA44F3BE2D(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							}
						}
						if ((((((((((unk_0xDEE3EFEA31A1F555(2, 225) && !unk_0xDEE3EFEA31A1F555(2, 235)) && !unk_0x875A214D5EBCA509(2, 223)) && !unk_0x875A214D5EBCA509(2, 224)) && !unk_0x875A214D5EBCA509(2, 222)) && !BitTest(Global_1963846, 6)) && !BitTest(Global_1963846, 7)) && !BitTest(Global_1963846, 8)) && !BitTest(Global_1963846, 9)) && !func_24(unk_0x259BE71D8A81D4FA())) && bVar2)
						{
							if (func_80())
							{
								func_27(uParam0, 1);
								unk_0x0B0C9A0F9AAEB7F0(&Global_1963846, 7);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0xBD618A73193F9982(uVar5, "Select_RC_Car", unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2707768, 7))
								{
									unk_0x0B0C9A0F9AAEB7F0(&Global_2707768, 7);
								}
								unk_0xBF3D28CA44F3BE2D(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							}
						}
						if ((((((((((unk_0xDEE3EFEA31A1F555(2, 224) && !unk_0xDEE3EFEA31A1F555(2, 235)) && !unk_0x875A214D5EBCA509(2, 223)) && !unk_0x875A214D5EBCA509(2, 225)) && !unk_0x875A214D5EBCA509(2, 222)) && !BitTest(Global_1963846, 6)) && !BitTest(Global_1963846, 7)) && !BitTest(Global_1963846, 8)) && !BitTest(Global_1963846, 9)) && !func_24(unk_0x259BE71D8A81D4FA())) && bVar2)
						{
							if (func_77())
							{
								func_27(uParam0, 1);
								unk_0x0B0C9A0F9AAEB7F0(&Global_1963846, 8);
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0xBD618A73193F9982(uVar6, "Select_Trap_Cam", unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
								}
							}
							else
							{
								if (!BitTest(Global_2707768, 7))
								{
									unk_0x0B0C9A0F9AAEB7F0(&Global_2707768, 7);
								}
								unk_0xBF3D28CA44F3BE2D(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							}
						}
						if ((((((((((unk_0xDEE3EFEA31A1F555(2, 222) && !unk_0xDEE3EFEA31A1F555(2, 235)) && !unk_0x875A214D5EBCA509(2, 223)) && !unk_0x875A214D5EBCA509(2, 225)) && !unk_0x875A214D5EBCA509(2, 224)) && !BitTest(Global_1963846, 6)) && !BitTest(Global_1963846, 7)) && !BitTest(Global_1963846, 8)) && !BitTest(Global_1963846, 9)) && !func_24(unk_0x259BE71D8A81D4FA())) && bVar2)
						{
							if (func_76())
							{
								func_27(uParam0, 1);
								if (func_36(&(uParam0->f_281), 15))
								{
									func_35();
									unk_0x8744D2E3FC95740E(&Global_2707768, 8);
									func_34(&(uParam0->f_281), 15);
								}
								func_124(&(uParam0->f_281), 13);
							}
							else
							{
								if (!BitTest(Global_2707768, 7))
								{
									unk_0x0B0C9A0F9AAEB7F0(&Global_2707768, 7);
								}
								unk_0xBF3D28CA44F3BE2D(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							}
						}
					}
					else
					{
						if (((unk_0xDEE3EFEA31A1F555(2, 235) && !unk_0x875A214D5EBCA509(2, 224)) && !Global_2710424) && !Global_2710419)
						{
							if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
							{
								unk_0xBD618A73193F9982(uVar7, "Exit_Menu", unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
							}
							func_104(uParam0);
						}
						if ((((unk_0xDEE3EFEA31A1F555(2, 223) && !unk_0xDEE3EFEA31A1F555(2, 235)) && !unk_0x875A214D5EBCA509(2, 224)) && bVar2) && !Global_262145.f_26207)
						{
							if (unk_0x0AF5E4A6C74DC312(Global_262145.f_26209, 0, 0, 1, -1, 0) || BitTest(Global_2707768, 3))
							{
								func_27(uParam0, 1);
								Global_2710424 = 1;
								Global_2710419 = 1;
								if (uParam0->f_281.f_2 >= 0 && uParam0->f_281.f_2 < 10)
								{
									unk_0xBD618A73193F9982(uVar8, "Select_Live_Stream", unk_0xAB3646235DE50E93(uParam1->f_14[uParam0->f_281.f_2]), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
								}
								func_74(73, -1);
								func_71();
								func_65();
							}
							else if (!BitTest(Global_2707768, 5))
							{
								unk_0x0B0C9A0F9AAEB7F0(&Global_2707768, 5);
							}
						}
					}
				}
			}
		}
	}
	func_34(&(uParam0->f_281), 9);
}

void func_65()
{
	func_66(7986, -1);
}

void func_66(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_69(iParam0, func_70(iParam1));
	iVar0++;
	func_67(iParam0, iVar0, iParam1, 1);
}

void func_67(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_68(iParam0, uParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_68(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_70(uParam1));
}

int func_69(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_68(iParam0, uParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
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

void func_71()
{
	int iVar0;
	
	iVar0 = func_72(73, -1);
	if (iVar0 >= 50)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_377.f_3), 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_377.f_3), 13);
	}
}

int func_72(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_73(iParam0, iParam1);
	if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_73(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(8, uParam0, func_70(uParam1));
}

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_72(iParam0, func_70(iParam1));
	iVar0++;
	func_75(iParam0, iVar0, iParam1);
}

void func_75(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = func_73(uParam0, uParam2);
	unk_0x1164A75E490C27B6(uVar0, iParam1, 1);
}

int func_76()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058116.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iVar1 /*25891*/].f_8552[iVar2], 26))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 4) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_78())
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058116.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iVar1 /*25891*/].f_8552[iVar2], 25))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_32, 1) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_78()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_80135 - 1))
	{
		if (!func_79(Global_4980736.f_80137[iVar0 /*242*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_79(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_80()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058116.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iVar1 /*25891*/].f_8552[iVar2], 24))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 14) && !bVar0)
	{
		return 1;
	}
	return 0;
}

int func_81()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (iVar1 > 4 || iVar1 < 0)
	{
		iVar1 = 0;
	}
	iVar2 = Global_1058116.f_14[iVar1];
	if (iVar2 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iVar1 /*25891*/].f_8552[iVar2], 23))
		{
			bVar0 = true;
		}
	}
	if (BitTest(Global_4718592.f_30, 13) && !bVar0)
	{
		return 1;
	}
	return 0;
}

void func_82(char* sParam0, var uParam1, var uParam2)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x511D14ED2DA887E1(uParam2);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, -1);
}

bool func_83()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

int func_84(bool bParam0)
{
	if (unk_0x22C925E7C63C5628())
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (func_85(unk_0x4A8C381C258A124D()))
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

int func_85(var uParam0)
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

int func_86()
{
	if (Global_2672855.f_990.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_87(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_88(char* sParam0, var uParam1, int iParam2)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam2);
}

int func_89()
{
	if (Global_2696199 >= 0 && Global_2696199 < 10)
	{
		return 1;
	}
	return 0;
}

bool func_90(var uParam0)
{
	return func_36(&(uParam0->f_281), 9);
}

void func_91(char* sParam0)
{
	unk_0x005E8B7CFA7D52A6(sParam0);
}

bool func_92(int iParam0)
{
	return func_93(iParam0) != 0;
}

int func_93(int iParam0)
{
	if (iParam0 == unk_0x259BE71D8A81D4FA() && !func_94())
	{
		return Global_2707795.f_1;
	}
	return Global_2648938.f_1400[iParam0 /*3*/].f_1;
}

int func_94()
{
	if (((Global_2707798 != 0 && Global_2707798 == Global_2707799) && Global_2707787 != 3) && Global_2707787 != 1)
	{
		return 0;
	}
	return 1;
}

int func_95()
{
	if (((((func_31("ARENA_SEAT_GM0") || func_31("ARENA_SEAT_GM1")) || func_31("TAGTM_HELP_2O")) || func_31("TAGTM_HELP_2P")) || func_31("TAGTM_HELP_2Pi")) || func_31("TAGTM_HELP_2G"))
	{
		return 1;
	}
	return 0;
}

int func_96(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		*uParam0 = func_102(1, 0, 0, 1, 1);
	}
	iVar0 = func_101(*uParam0);
	if (iVar0 == 1)
	{
		*uParam0 = 0;
	}
	else if (iVar0 != 0)
	{
		*uParam0 = 0;
		func_97(0, -1, -1);
	}
	return iVar0;
}

int func_97(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 0 && Global_2707792.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 != -1 && Global_2707792.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != -1 && Global_2707792 != iParam2)
	{
		return 0;
	}
	if (func_100())
	{
		return 0;
	}
	func_99();
	func_98(3);
	Global_2707792.f_1 = 0;
	Global_2707792.f_2 = -1;
	Global_2707792 = -1;
	Global_2707788 = 0;
	Global_2707790 = 0;
	Global_2707798 = unk_0x0728E77B2BF91D54();
	Global_2707791 = 1;
	return 1;
}

void func_98(int iParam0)
{
	Global_2707787 = iParam0;
}

void func_99()
{
	if (unk_0x486FF5D06E9659F1(joaat("turret_cam_script")) > 0)
	{
		Global_2707800 = 1;
	}
}

bool func_100()
{
	return (Global_2707787 == 3 || Global_2707787 == 0);
}

int func_101(int iParam0)
{
	if (Global_2707798 == iParam0)
	{
		if (Global_2707787 == 2)
		{
			if (Global_2707798 == Global_2707799)
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
		else if (Global_2707787 == 0)
		{
			return 2;
		}
	}
	else
	{
		return 2;
	}
	return 0;
}

var func_102(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<3> Var0;
	
	Var0.f_2 = -1;
	Var0.f_1 = iParam0;
	Var0.f_2 = iParam1;
	Var0.f_0 = iParam2;
	func_98(1);
	Global_2707792 = { Var0 };
	Global_2707788 = iParam3;
	Global_2707798 = unk_0x0728E77B2BF91D54();
	Global_2707790 = 0;
	func_103(&Global_2707790, 0, !bParam4);
	Global_2707791 = 1;
	return Global_2707798;
}

void func_103(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam0, iParam1);
	}
	else
	{
		unk_0x8744D2E3FC95740E(uParam0, bParam1);
	}
}

void func_104(var uParam0)
{
	char* sVar0;
	
	uParam0->f_281.f_1 = unk_0xBC5D9A293974F095(func_120(uParam0), func_119(uParam0), 2, 1, 0, 1065353216, 0f, 1f);
	func_123(uParam0, &sVar0);
	unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), uParam0->f_281.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1148846080, 0);
	unk_0xE7101255AD6F1952(uParam0->f_281.f_1);
	func_32(&(uParam0->f_281.f_6));
	unk_0x0B0C9A0F9AAEB7F0(&Global_2707768, 6);
	func_34(&(uParam0->f_281), 14);
	func_136(uParam0, 9);
}

int func_105(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_106(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, float fParam10)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	Global_23692.f_6 = 1;
	if (Global_2672855.f_1067 && Global_2672855.f_1075)
	{
		func_115(0, bParam7);
		return 1;
	}
	if (unk_0x3555462DB47B7AB1() && !bParam7)
	{
		if (Global_2672855.f_1067)
		{
			func_115(0, bParam7);
		}
		return 0;
	}
	if ((unk_0x787F8EE1F6FBDC6D() && !bParam7) && !unk_0x705A7AB2D4BC0A9B())
	{
		return 0;
	}
	if (!func_114(0))
	{
		if (func_113(unk_0x259BE71D8A81D4FA(), 1, 0) && !(func_57() || func_112()))
		{
			if (((bParam7 && func_111(unk_0x259BE71D8A81D4FA(), 1, 0)) && unk_0x3555462DB47B7AB1()) && Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_233 == 1)
			{
			}
			else if (func_110() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	if (fParam1 >= 360f)
	{
		fParam1 = (fParam1 + -360f);
	}
	if (!Global_2672855.f_1067 && !bParam9)
	{
		Var1 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
		if ((unk_0x1D5CD3EAAA7422B0((Var1.f_0 - Param0.f_0)) < 0,2f && unk_0x1D5CD3EAAA7422B0((Var1.f_1 - Param0.f_1)) < 0,2f) && unk_0x1D5CD3EAAA7422B0((Var1.f_2 - Param0.f_2)) < 1,2f)
		{
			fVar2 = (fParam1 - unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (unk_0x1D5CD3EAAA7422B0(fVar2) < 1f)
			{
				Global_2672855.f_1067 = 0;
				Global_2672855.f_1068 = 0;
				if (unk_0x705A7AB2D4BC0A9B())
				{
					unk_0xEB205B72FDDFDFC6();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2672855.f_1069 || !Param0.f_1 == Global_2672855.f_1069.f_1) || !Param0.f_2 == Global_2672855.f_1069.f_2) || !fParam1 == Global_2672855.f_1072)
	{
		if (Global_2672855.f_1067 == 1)
		{
			if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2672855.f_1073) < func_109(0))
			{
				return 0;
			}
			unk_0xEB205B72FDDFDFC6();
			Global_2672855.f_1068 = 1;
		}
		else
		{
			Global_2672855.f_1068 = 0;
		}
		Global_2672855.f_1069 = { Param0 };
		Global_2672855.f_1072 = fParam1;
		Global_2672855.f_1067 = 0;
	}
	if (bParam2)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
			if (unk_0xFC8BFE4B41177C22(uVar0) && unk_0x4B423FAA24E8ABF0(iVar0) == joaat("kosatka"))
			{
				bParam2 = false;
			}
		}
	}
	if (!Global_2672855.f_1067 && !unk_0x705A7AB2D4BC0A9B())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		bParam5 = bParam5;
		if (bParam5)
		{
		}
		if (bParam3)
		{
		}
		if (bParam6)
		{
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (!BitTest(Global_101585.f_1414[44], 16))
			{
				func_108(0);
			}
			if (!unk_0x51B462E1DEB9F762(unk_0x4A8C381C258A124D(), &(Global_2635563.f_502)))
			{
				Global_2635563.f_502 = 0;
			}
		}
		if (bParam2)
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
				if (unk_0xA6D8AF5A058A75F0(iVar0))
				{
					Global_2672855.f_1074 = 0;
				}
			}
		}
		if (Global_2672855.f_1074 > -1)
		{
			Global_2672855.f_1073 = unk_0x7E3F74F641EE6B27();
			Global_2672855.f_1067 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
						if (unk_0x1B1A446EFA398EB5(iVar0))
						{
							unk_0xB2BD5837A8D3CEDA(iVar0, Param0, 0, 1, 1, 1);
							unk_0x5C96CEA06531AB03(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								unk_0xCF39804E8C88080E(iVar0, fParam10, 0f, fParam1, 2, 1);
							}
						}
						else
						{
							unk_0xF093E270C0B6B318(iVar0);
						}
					}
					else
					{
						unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Param0, 0, 0, 0, 1);
						unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), fParam1);
					}
				}
				else
				{
					unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Param0, 0, 0, 0, 1);
					unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), fParam1);
				}
				func_115(bParam4, bParam7);
				return 1;
			}
			else
			{
				unk_0xE3F88173F42C071B();
				unk_0xCB7327FDCE6757E1(unk_0x259BE71D8A81D4FA(), Param0, fParam1, bParam2, iParam8, 0);
			}
			Global_2672855.f_1073 = unk_0x7E3F74F641EE6B27();
			Global_2672855.f_1067 = 1;
		}
	}
	if (Global_2672855.f_1067)
	{
		Global_23692.f_6 = 1;
		Global_2672855.f_1073 = unk_0x7E3F74F641EE6B27();
		if (Global_2672855.f_1074 > -1)
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
			}
			if (func_107(&(Global_2672855.f_1074), Param0, fParam1, iVar0))
			{
				func_115(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), Global_2672855.f_1069) < 2f)
				{
					if (unk_0x705A7AB2D4BC0A9B())
					{
						unk_0xEB205B72FDDFDFC6();
					}
					func_115(bParam4, bParam7);
					return 1;
				}
			}
			if (!unk_0x705A7AB2D4BC0A9B())
			{
				if (fParam10 != 0f)
				{
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
						unk_0xCF39804E8C88080E(iVar0, fParam10, 0f, fParam1, 2, 1);
						Global_2672855.f_1075 = 1;
						return 0;
					}
				}
				func_115(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_107(var uParam0, struct<3> Param1, float fParam2, var uParam3)
{
	if (unk_0xFC8BFE4B41177C22(Global_2672855.f_1076) && !unk_0x1C2F771CDC87A3A5(Global_2672855.f_1076, 0))
	{
		unk_0xF093E270C0B6B318(Global_2672855.f_1076);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2672855.f_1076 = uParam3;
			unk_0xF093E270C0B6B318(Global_2672855.f_1076);
			if (unk_0x1B1A446EFA398EB5(Global_2672855.f_1076))
			{
				if (!unk_0x1C2F771CDC87A3A5(Global_2672855.f_1076, 0))
				{
					unk_0x5C96CEA06531AB03(Global_2672855.f_1076, fParam2);
					unk_0xB2BD5837A8D3CEDA(Global_2672855.f_1076, Param1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_108(int iParam0)
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

int func_109(bool bParam0)
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

int func_110()
{
	return Global_1575011;
}

int func_111(int iParam0, bool bParam1, bool bParam2)
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

bool func_112()
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1963846, 12)) && Global_1963845 == 8);
}

int func_113(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2657971[iParam0 /*465*/].f_233 == 99)
	{
		if ((iParam2 && Global_2657971[iParam0 /*465*/].f_236 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2657971[iParam0 /*465*/].f_233 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_114(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_115(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		unk_0x64BB72494B9DF6DC(0f);
	}
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0x5EF96FB2D3902DC7(unk_0x4A8C381C258A124D());
	}
	if (!bParam1)
	{
		unk_0xE3F88173F42C071B();
	}
	if (unk_0x705A7AB2D4BC0A9B())
	{
		unk_0xEB205B72FDDFDFC6();
	}
	func_7();
	if (!BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_33, 14) && !func_117())
	{
		func_116();
	}
}

void func_116()
{
	Global_2748996.f_92 = 1;
}

int func_117()
{
	if (!unk_0x834C960822A4683F() && !func_114(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_194413[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	return Global_2696199;
}

Vector3 func_119(var uParam0)
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3;
}

Vector3 func_120(var uParam0)
{
	return (uParam0[uParam0->f_281.f_2 /*14*/])->f_8;
}

void func_121(var uParam0, char* sParam1, bool bParam2)
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_2)
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
			break;
		
		case 1:
			switch (uParam0->f_281.f_9.f_2)
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
			break;
	}
	if (bParam2)
	{
		StringConCat(sParam1, "_TABLET", 16);
	}
}

void func_122()
{
	if (!Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 1;
	}
}

void func_123(var uParam0, char* sParam1)
{
	switch (uParam0->f_281.f_9)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@ARENA@AMB@SEAT_DRONE_TABLET", 64);
			break;
	}
	if (func_46())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_281.f_9)
	{
		case 0:
			switch (uParam0->f_281.f_9.f_1)
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
		
		case 1:
			switch (uParam0->f_281.f_9.f_1)
			{
				case 0:
					StringConCat(sParam1, "@", 64);
					break;
			}
			break;
	}
}

void func_124(var uParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(uParam0, iParam1);
}

void func_125(var uParam0)
{
	uParam0->f_281.f_9 = func_127((*uParam0)[uParam0->f_281.f_2 /*14*/]);
	uParam0->f_281.f_9.f_1 = func_126(uParam0);
	uParam0->f_281.f_9.f_2 = 3;
	uParam0->f_281.f_9.f_3 = 3;
}

int func_126(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_281.f_9 == 0)
	{
		if (func_46())
		{
			iVar0 = unk_0xC5935DFB3F39785A(0, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 3;
				
				case 2:
					return 4;
				
				default:
			}
		}
		else
		{
			iVar0 = unk_0xC5935DFB3F39785A(0, 3);
			switch (iVar0)
			{
				case 0:
					return 0;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				}
			}
		
		default:
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x486FF5D06E9659F1(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x3555462DB47B7AB1())
	{
		if (!*uParam0 == -1)
		{
			func_32(uParam0);
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

bool func_129(var uParam0)
{
	Stack.Push(!func_36(&(uParam0->f_281), 5));
	Stack.Push(uParam0[uParam0->f_281.f_2 /*14*/]);
	Stack.Push(uParam0->f_281.f_2);
	Call_Loc(uParam0->f_281.f_14);
	return (StackVal || StackVal);
}

int func_130(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			iVar1 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0));
			if (iVar1 != unk_0x259BE71D8A81D4FA() && func_111(iVar1, 1, 1))
			{
				if (func_134(unk_0x56E414973C2A8C0E(iVar1), uParam0[uParam0->f_281.f_2 /*14*/]) || func_131(iVar1) == uParam0->f_281.f_2)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(int iParam0)
{
	if (iParam0 != func_25())
	{
		return Global_1845281[iParam0 /*883*/].f_873;
	}
	return -1;
}

bool func_132(var uParam0)
{
	if (((BitTest(Global_1963846, 6) || BitTest(Global_1963846, 7)) || BitTest(Global_1963846, 8)) || BitTest(Global_1963846, 9))
	{
		return 1;
	}
	return uParam0->f_281 & 31 > 0;
}

int func_133(int iParam0, struct<3> Param1)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (func_105(unk_0xCFC0C995455A6204(iParam0), (Param1.f_2 - 180f), 90f))
		{
			return 1;
		}
	}
	return 0;
}

bool func_134(int iParam0, var uParam1)
{
	return unk_0x5105BE70DEF1F5FB(uParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, 1, 0);
}

int func_135(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_134(unk_0x4A8C381C258A124D(), uParam0[uParam0->f_281.f_2 /*14*/]) && func_133(unk_0x4A8C381C258A124D(), (uParam0[uParam0->f_281.f_2 /*14*/])->f_8.f_3))
		{
			return 1;
		}
		else
		{
			uParam0->f_281.f_2 = (uParam0->f_281.f_2 + 1 % 20);
		}
		iVar0++;
	}
	return 0;
}

void func_136(var uParam0, int iParam1)
{
	uParam0->f_281.f_5 = iParam1;
}

void func_137(var uParam0)
{
	int iVar0;
	
	if (BitTest(Global_1963846, 7))
	{
		func_143(1);
	}
	switch (uParam0->f_281.f_5)
	{
		case 5:
		case 9:
			func_143(1);
		
		case 7:
			unk_0x513E63C787EE96A7();
			unk_0x92D8C10950A06B6D(0);
			unk_0xFC14A38C4235E772(0);
			unk_0x4EB223432F8FA0A0(19);
			unk_0x4EB223432F8FA0A0(2);
			unk_0xF25C7C5177203507();
			if (!func_142())
			{
				func_141();
			}
			if (unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar0, 1) && iVar0 != joaat("weapon_unarmed"))
			{
				unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("weapon_unarmed"), 1);
			}
			unk_0x66EFB3D6110055C4(0, 37, 1);
			func_139(1);
			func_138();
			break;
	}
}

void func_138()
{
	Global_23692.f_6 = 1;
}

void func_139(bool bParam0)
{
	if (bParam0)
	{
		if (func_140())
		{
			Global_2684504.f_41 = 1;
		}
	}
	else
	{
		Global_2684504.f_41 = 0;
	}
}

bool func_140()
{
	return BitTest(Global_2684504.f_2, 11);
}

void func_141()
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 4);
}

bool func_142()
{
	return BitTest(Global_1956920, 19);
}

void func_143(int iParam0)
{
	if (func_142())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_148(0))
		{
			func_144(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_144(int iParam0)
{
	if (func_142())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_147())
		{
			func_146(1, 1);
		}
		else
		{
			func_146(0, 0);
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
	if (!func_145())
	{
		Global_20930.f_1 = 3;
	}
}

int func_145()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_146(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_148(0))
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

bool func_147()
{
	return BitTest(Global_1956920, 5);
}

int func_148(int iParam0)
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

void func_149(var uParam0)
{
	if (uParam0->f_281.f_5 == 7)
	{
	}
	else if (uParam0->f_281.f_5 > 5)
	{
		unk_0x159356D054E19158(unk_0x4A8C381C258A124D());
		unk_0x04FC75A7251431C6(unk_0x4A8C381C258A124D(), func_150());
		uParam0->f_281.f_8 = unk_0x8034325BF6D6E41F();
	}
	else if ((unk_0x8034325BF6D6E41F() - uParam0->f_281.f_8) < 5)
	{
		unk_0x04FC75A7251431C6(unk_0x4A8C381C258A124D(), func_150());
	}
}

float func_150()
{
	return 0,13f;
}

void func_151(var uParam0)
{
	func_152(&(uParam0->f_281), 4, func_153());
	func_152(&(uParam0->f_281), 1, unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0));
	func_152(&(uParam0->f_281), 3, unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1));
	func_152(&(uParam0->f_281), 0, func_148(0));
	func_152(&(uParam0->f_281), 2, unk_0x24433628C02BED5F(unk_0x4A8C381C258A124D()));
}

void func_152(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	uVar0 = iParam1;
	if (bParam2)
	{
		unk_0x0B0C9A0F9AAEB7F0(uParam0, uVar0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(uParam0, bVar0);
	}
}

bool func_153()
{
	return Global_76498;
}

int func_154()
{
	if ((((!func_163() && !func_52()) && !BitTest(Global_1963846, 7)) && !BitTest(Global_1963846, 3)) && !func_24(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (BitTest(Global_1963846, 11) && unk_0x15CCE8886267624F())
	{
		return 1;
	}
	if (func_155())
	{
		return 1;
	}
	if (unk_0x486FF5D06E9659F1(unk_0x70E57E9927B6BA58("AM_MP_ARENA_BOX")) <= 0)
	{
		return 1;
	}
	if (!Global_2707762)
	{
		return 1;
	}
	return 0;
}

int func_155()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_162())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_161())
	{
		return 1;
	}
	if (func_160(159))
	{
		if (!func_159())
		{
			return 1;
		}
	}
	if (func_160(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_156() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_156()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_156()
{
	switch (func_158())
	{
		case 0:
			return func_157();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_157()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_158()
{
	return Global_32948;
}

bool func_159()
{
	return Global_2684504.f_700;
}

int func_160(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_161()
{
	return Global_2696172;
}

bool func_162()
{
	return Global_2684504.f_695;
}

int func_163()
{
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 2797,988f, -3943,898f, 181,0005f, 2797,949f, -3919,85f, 187,4114f, 30f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	int iVar0;
	
	if (unk_0x99F8FC8A6D8E20C0("arena_box_bench_seats", -1, 1, 0))
	{
		return 0;
	}
	unk_0xDB2434E51017FFCC(32, 0, -1);
	func_172(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_119, 25, 0);
	unk_0x7B13DC83218D9AF5(&Local_130, 65, 0);
	unk_0xAECC5FA98C879D67(0);
	func_171();
	func_165();
	if (unk_0x76CD105BCAC6EB9F() && unk_0x93E08E0F531E2C35())
	{
		if (!Local_119.f_0)
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_119.f_2[iVar0] = -1;
				iVar0++;
			}
			Local_119.f_0 = 1;
		}
	}
	return 1;
}

void func_165()
{
	func_166(0, &Local_100, 0, 2);
	func_166(1, &Local_100, 1, 2);
	func_166(2, &Local_100, 2, 2);
	func_166(3, &Local_100, 3, 2);
	func_166(4, &Local_100, 4, 2);
	func_166(5, &Local_100, 5, 2);
	func_166(6, &Local_100, 6, 2);
	func_166(7, &Local_100, 7, 2);
	func_166(8, &Local_100, 8, 2);
	func_166(9, &Local_100, 9, 2);
	func_166(10, &Local_100, 10, 1);
	func_166(11, &Local_100, 11, 1);
	func_166(12, &Local_100, 12, 1);
	func_166(13, &Local_100, 13, 1);
	func_166(14, &Local_100, 14, 1);
	func_166(15, &Local_100, 15, 1);
	func_166(16, &Local_100, 16, 1);
	func_166(17, &Local_100, 17, 1);
	func_166(18, &Local_100, 18, 1);
	func_166(19, &Local_100, 19, 1);
}

void func_166(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	float fVar1;
	
	func_170(iParam0, &Var0, &fVar1);
	(*uParam1)[iParam2 /*14*/] = iParam3;
	(uParam1[iParam2 /*14*/])->f_8 = { Var0 };
	(uParam1[iParam2 /*14*/])->f_8.f_3 = { 0f, 0f, fVar1 };
	(uParam1[iParam2 /*14*/])->f_1 = { func_168(func_169(), (fVar1 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_3 = { func_168(func_167(), (fVar1 - 180f)) + Var0 };
	(uParam1[iParam2 /*14*/])->f_1.f_6 = 1,25f;
}

Vector3 func_167()
{
	return 0,5f, -0,5f, 2f;
}

Vector3 func_168(struct<3> Param0, float fParam1)
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

Vector3 func_169()
{
	return -0,5f, -0,5f, 0f;
}

void func_170(int iParam0, var uParam1, var uParam2)
{
	if (func_46())
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799,885f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798,857f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797,821f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796,794f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795,764f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794,729f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793,706f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792,677f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791,638f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790,611f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799,913f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798,89f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797,817f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796,821f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795,784f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794,75f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793,711f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792,696f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791,635f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790,644f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 2799,864f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 1:
				*uParam1 = { 2798,837f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 2:
				*uParam1 = { 2797,8f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 3:
				*uParam1 = { 2796,774f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 4:
				*uParam1 = { 2795,744f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 5:
				*uParam1 = { 2794,708f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 6:
				*uParam1 = { 2793,685f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 7:
				*uParam1 = { 2792,657f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 8:
				*uParam1 = { 2791,618f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 9:
				*uParam1 = { 2790,59f, -3923,084f, 181,5353f };
				*uParam2 = 0f;
				break;
			
			case 10:
				*uParam1 = { 2799,913f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 11:
				*uParam1 = { 2798,89f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 12:
				*uParam1 = { 2797,817f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 13:
				*uParam1 = { 2796,821f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 14:
				*uParam1 = { 2795,784f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 15:
				*uParam1 = { 2794,75f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 16:
				*uParam1 = { 2793,711f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 17:
				*uParam1 = { 2792,696f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 18:
				*uParam1 = { 2791,635f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			
			case 19:
				*uParam1 = { 2790,644f, -3924,579f, 182,4198f };
				*uParam2 = 0f;
				break;
			}
	}
}

void func_171()
{
}

int func_172(int iParam0, int iParam1, bool bParam2)
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
		if (!func_114(0))
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
				if (func_162())
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
				if (func_160(157))
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

