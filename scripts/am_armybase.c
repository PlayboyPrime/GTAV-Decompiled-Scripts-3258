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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
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
	struct<3> Local_100 = { 0, 0, 0 } ;
	struct<4> Local_101 = { 2, 0, 0, 3 } ;
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
	var uLocal_119 = 2;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 2;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<8> Local_125[32];
	struct<184> Local_126 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_127 = 0;
	bool bLocal_128 = 0;
	bool bLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	struct<21> Local_140 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_63 = ((0,05f + 0,275f) - 0,01f);
	fLocal_65 = 0f;
	Local_100 = { -2357,12f, 3250,68f, 106,04f };
	iLocal_135 = -1;
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_184(ScriptParam_140);
	}
	else
	{
		func_181();
	}
	while (true)
	{
		func_180();
		func_172();
		if (func_164() || unk_0xF859473E4AD09F30())
		{
			func_181();
		}
		if (unk_0x76CD105BCAC6EB9F())
		{
			if ((func_160() && !Global_262145.f_21655) && !unk_0x834C960822A4683F())
			{
				func_151();
			}
			if (func_44())
			{
				func_181();
			}
			if (func_41(unk_0x259BE71D8A81D4FA()))
			{
				if (!BitTest(Local_126.f_182, 3))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_182), 3);
				}
			}
			if (((((((((((!Global_1836226 && !func_40(2)) && !func_37(unk_0x259BE71D8A81D4FA(), 0)) && !unk_0x3555462DB47B7AB1()) && unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) && !func_35(unk_0x259BE71D8A81D4FA())) && !func_33(func_34(unk_0x259BE71D8A81D4FA()))) && !func_31(unk_0x259BE71D8A81D4FA(), 146)) && !func_26(unk_0x259BE71D8A81D4FA())) && !func_25(unk_0x259BE71D8A81D4FA())) && !func_24()) && func_23() != 0)
			{
				if (func_22(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 3, 1000, 0) || func_21(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 1000))
				{
					if (!BitTest(Global_2738934.f_4676, 0))
					{
						if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
						{
							if (!func_160())
							{
								func_20();
								if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()) || unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
								{
									if (func_22(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 3, 0, 0) || func_21(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 0))
									{
										if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 4)
										{
											unk_0x80A39DDADDA2585C(unk_0x259BE71D8A81D4FA(), 36, (unk_0x30C1D2072FB75567(4) - unk_0x30C1D2072FB75567(unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()))));
										}
										else
										{
											unk_0x873D736C20070A10(unk_0x259BE71D8A81D4FA());
										}
									}
									else if (!func_19(&(Local_126.f_3)))
									{
										func_16(&(Local_126.f_3));
									}
									else if (func_13(&(Local_126.f_3)) > 20f || Local_126.f_177)
									{
										if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 4)
										{
											unk_0x80A39DDADDA2585C(unk_0x259BE71D8A81D4FA(), 36, (unk_0x30C1D2072FB75567(4) - unk_0x30C1D2072FB75567(unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()))));
										}
										else
										{
											unk_0x873D736C20070A10(unk_0x259BE71D8A81D4FA());
										}
									}
								}
								else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 4)
								{
									unk_0x80A39DDADDA2585C(unk_0x259BE71D8A81D4FA(), 36, (unk_0x30C1D2072FB75567(4) - unk_0x30C1D2072FB75567(unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()))));
								}
								else
								{
									unk_0x873D736C20070A10(unk_0x259BE71D8A81D4FA());
								}
							}
							else
							{
								if (Global_2738934.f_6934)
								{
									bLocal_128 = false;
									Global_2738934.f_6934 = 0;
								}
								if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0 && !iLocal_132)
								{
									iLocal_132 = 1;
								}
								if (Global_262145.f_21639 && !func_11(unk_0x259BE71D8A81D4FA()))
								{
									if ((!bLocal_128 && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) != 0) && iLocal_132)
									{
										unk_0x3C482AC51A8E85DC(unk_0x259BE71D8A81D4FA());
										unk_0xDAE61414743C8D1D(0);
										iLocal_131 = 1;
									}
									if (func_3() && !bLocal_128)
									{
										bLocal_128 = true;
										unk_0xDAE61414743C8D1D(func_2());
									}
								}
								if (func_3() && !bLocal_128)
								{
									bLocal_128 = true;
								}
								if (bLocal_128)
								{
									if (bLocal_129)
									{
										if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 2)
										{
											unk_0x80A39DDADDA2585C(unk_0x259BE71D8A81D4FA(), 36, (unk_0x30C1D2072FB75567(2) - unk_0x30C1D2072FB75567(unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()))));
										}
										else
										{
											unk_0x873D736C20070A10(unk_0x259BE71D8A81D4FA());
										}
									}
									else if (bLocal_130)
									{
										if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 3)
										{
											unk_0x80A39DDADDA2585C(unk_0x259BE71D8A81D4FA(), 36, (unk_0x30C1D2072FB75567(3) - unk_0x30C1D2072FB75567(unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()))));
										}
										else
										{
											unk_0x873D736C20070A10(unk_0x259BE71D8A81D4FA());
										}
									}
									else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < Global_262145.f_21595)
									{
										unk_0x80A39DDADDA2585C(unk_0x259BE71D8A81D4FA(), 36, (unk_0x30C1D2072FB75567(Global_262145.f_21595) - unk_0x30C1D2072FB75567(unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()))));
									}
									else
									{
										unk_0x873D736C20070A10(unk_0x259BE71D8A81D4FA());
									}
								}
							}
						}
						else
						{
							if (func_19(&(Local_126.f_3)))
							{
								func_1(&(Local_126.f_3));
							}
							if (Local_126.f_177)
							{
								Local_126.f_177 = 0;
							}
							func_20();
						}
					}
					else
					{
						if (!Local_126.f_177)
						{
							Local_126.f_177 = 1;
						}
						func_20();
					}
				}
				else
				{
					if (Local_126.f_177)
					{
						Local_126.f_177 = 0;
					}
					func_20();
				}
			}
			else
			{
				func_20();
			}
		}
		else
		{
			func_181();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()
{
	if (func_23() != -1)
	{
		return func_23();
	}
	return 5;
}

int func_3()
{
	int iVar0;
	
	if ((((func_22(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 3, 1000, 0) || func_21(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 1000)) && !func_10()) && !func_25(unk_0x259BE71D8A81D4FA())) && !Global_4456449.f_5 == 6)
	{
		if (Global_262145.f_21589)
		{
			return 0;
		}
		if (((func_9() || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -2346,975f, 3259,757f, 31,81074f, -2349,507f, 3261,232f, 33,81074f, 9,5625f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1792,908f, 3091,104f, 31,81257f, -1812,707f, 3102,736f, 39,46682f, 18,187f, 0, 1, 0)) || func_8(unk_0x259BE71D8A81D4FA()))
		{
			bLocal_129 = false;
			bLocal_130 = false;
			return 1;
		}
		if (Global_262145.f_21596)
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if (unk_0xFDA2576D37032738(iVar0))
				{
					if (func_7(iVar0))
					{
						if ((!func_6(iVar0, 1) && !func_5(iVar0)) && !func_4(iVar0))
						{
							bLocal_129 = true;
							bLocal_130 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0xFDA2576D37032738(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
			{
				if ((!func_6(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 1) && !func_5(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0))) && !func_4(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
				{
					bLocal_129 = true;
					bLocal_130 = false;
					return 1;
				}
			}
		}
		if (Global_2738934.f_6932 || Global_2738934.f_6933)
		{
			if (Global_2738934.f_6933)
			{
				bLocal_129 = false;
				bLocal_130 = true;
			}
			else
			{
				bLocal_129 = true;
				bLocal_130 = false;
			}
			Global_2738934.f_6932 = 0;
			Global_2738934.f_6933 = 0;
			return 1;
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	var uVar0;
	
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0x77B62CAA5DF0922A("MPBitset", 3) && unk_0xD130E7CDEE903624(iParam0, "MPBitset"))
		{
			uVar0 = unk_0xE2F6FE9B61232165(iParam0, "MPBitset");
			if (BitTest(uVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_5(int iParam0)
{
	if ((unk_0x77B62CAA5DF0922A("CreatedByPegasus", 2) && unk_0xD130E7CDEE903624(iParam0, "CreatedByPegasus")) && unk_0x3F40AE65F056B43D(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1)
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

int func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(iParam0);
	switch (iVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case joaat("firetruk"):
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
		
		default:
	}
	return 0;
}

int func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xF8F35890F43ED2AE(unk_0x56E414973C2A8C0E(iParam0));
	iVar1 = unk_0x0556019E7EE8EC9A(-2346,975f, 3259,757f, 31,81074f, "v_tower");
	if (unk_0xF8A8852F99E201DD(iVar0) && unk_0xF8A8852F99E201DD(iVar1))
	{
		if ((iVar0 == iVar1 && !unk_0x5105BE70DEF1F5FB(unk_0x56E414973C2A8C0E(iParam0), -2345,4f, 3270,1f, 31,81f, -2347,9f, 3265,8f, 34,811f, 8,25f, 0, 1, 0)) && !unk_0x5105BE70DEF1F5FB(unk_0x56E414973C2A8C0E(iParam0), -2349,3f, 3266,7f, 31,81f, -2350f, 3265,5f, 34,811f, 5,15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_9()
{
	return (!Global_262145.f_32158 && unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -2054,865f, 3240,977f, 30,51001f, -2056,552f, 3237,846f, 32,50156f, 4,0625f, 0, 1, 0));
}

bool func_10()
{
	return Global_4718592 == 3;
}

int func_11(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_12(iParam0, 9);
	}
	return 0;
}

var func_12(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

float func_13(var uParam0)
{
	if (func_19(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_14(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = system::to_float(unk_0x1DD05E817C89C737());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		iVar2 = unk_0x7E3F74F641EE6B27();
		fVar3 = system::to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (system::to_float(unk_0x1DD05E817C89C737()) / 1000f);
}

bool func_15(var uParam0)
{
	return BitTest(*uParam0, 2);
}

void func_16(var uParam0)
{
	if (!func_19(uParam0))
	{
		func_17(uParam0);
	}
}

void func_17(var uParam0)
{
	func_18(uParam0, 0f);
}

void func_18(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_14(BitTest(*uParam0, 4)) - fParam1);
	unk_0x0B0C9A0F9AAEB7F0(uParam0, 1);
	unk_0x8744D2E3FC95740E(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_19(var uParam0)
{
	return BitTest(*uParam0, 1);
}

void func_20()
{
	if (iLocal_131)
	{
		unk_0xDAE61414743C8D1D(func_2());
	}
	Global_2738934.f_6932 = 0;
	Global_2738934.f_6933 = 0;
	iLocal_131 = 0;
	bLocal_128 = false;
	bLocal_129 = false;
	iLocal_132 = 0;
}

int func_21(struct<3> Param0, int iParam1)
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	Var0[0 /*3*/] = { -1877,436f, 2783,151f, 31,80618f };
	Var1[0 /*3*/] = { -1797,873f, 2924,37f, (307,1106f + IntToFloat(iParam1)) };
	fVar2[0] = 88f;
	Var0[1 /*3*/] = { -1761,116f, 2834,651f, 31,80622f };
	Var1[1 /*3*/] = { -1720,887f, 2906,419f, (281,8062f + IntToFloat(iParam1)) };
	fVar2[1] = 88f;
	Var0[2 /*3*/] = { -1761,493f, 2817,68f, 32,37125f };
	Var1[2 /*3*/] = { -1769,704f, 2913,734f, (281,8066f + IntToFloat(iParam1)) };
	fVar2[2] = 88f;
	Var0[3 /*3*/] = { -1879,297f, 2772,653f, 29,57795f };
	Var1[3 /*3*/] = { -1864,521f, 2825,472f, (281,8062f + IntToFloat(iParam1)) };
	fVar2[3] = 88f;
	Var0[4 /*3*/] = { -2676,74f, 3366,988f, 29,92394f };
	Var1[4 /*3*/] = { -2744,79f, 3340,347f, (37,80379f + IntToFloat(iParam1)) };
	fVar2[4] = 9f;
	Var0[5 /*3*/] = { -2676,74f, 3366,988f, 29,92394f };
	Var1[5 /*3*/] = { -2744,79f, 3340,347f, (37,80379f + IntToFloat(iParam1)) };
	fVar2[5] = 9,5f;
	Var0[6 /*3*/] = { -2807,397f, 3264,226f, 29,92764f };
	Var1[6 /*3*/] = { -2879,805f, 3309,01f, (37,57864f + IntToFloat(iParam1)) };
	fVar2[6] = 9,5f;
	Var0[7 /*3*/] = { -2808,236f, 3264,634f, 29,92764f };
	Var1[7 /*3*/] = { -2747,55f, 3187,8f, (37,45682f + IntToFloat(iParam1)) };
	fVar2[7] = 9,5f;
	Var0[8 /*3*/] = { -2530,996f, 3064,151f, 29,71081f };
	Var1[8 /*3*/] = { -2748,557f, 3189,939f, (37,45682f + IntToFloat(iParam1)) };
	fVar2[8] = 9,5f;
	Var0[9 /*3*/] = { -2533,902f, 3062,491f, 29,70715f };
	Var1[9 /*3*/] = { -2520,674f, 2996,817f, (37,45715f + IntToFloat(iParam1)) };
	fVar2[9] = 9,5f;
	Var0[10 /*3*/] = { -2500,716f, 2927,103f, 29,45663f };
	Var1[10 /*3*/] = { -2445,696f, 2896,657f, (37,68009f + IntToFloat(iParam1)) };
	fVar2[10] = 9,5f;
	Var0[11 /*3*/] = { -2020,543f, 2810,747f, 29,45658f };
	Var1[11 /*3*/] = { -1927,949f, 2785,779f, (37,67057f + IntToFloat(iParam1)) };
	fVar2[11] = 9,5f;
	Var0[12 /*3*/] = { -2261,899f, 3376,549f, 29,77859f };
	Var1[12 /*3*/] = { -2141,067f, 3376,773f, (37,90019f + IntToFloat(iParam1)) };
	fVar2[12] = 9,5f;
	iVar3 = 13;
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

int func_22(struct<3> Param0, int iParam1, int iParam2, bool bParam3)
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

int func_23()
{
	return Global_2738934.f_6936;
}

bool func_24()
{
	return Global_2738934.f_6935;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		return Global_2708056;
	}
	else
	{
		iVar0 = unk_0x56E414973C2A8C0E(iParam0);
		if (unk_0xFC8BFE4B41177C22(iVar0))
		{
			iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_26(int iParam0)
{
	return func_27(func_28(iParam0));
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_28(int iParam0)
{
	if (func_30(iParam0))
	{
		if (func_29(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_29(int iParam0, int iParam1)
{
	if (func_30(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_30(var uParam0)
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

int func_31(int iParam0, int iParam1)
{
	if (Global_1887305[iParam0 /*610*/] == iParam1)
	{
		return func_32(iParam0);
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_32(unk_0x259BE71D8A81D4FA()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/];
	}
	return -1;
}

int func_35(int iParam0)
{
	if (func_37(iParam0, 0))
	{
		return 1;
	}
	if (func_36())
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

bool func_36()
{
	return BitTest(Global_2621446, 3);
}

bool func_37(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_30(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_38(-1, 0) == 8;
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

int func_38(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_39();
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

int func_39()
{
	return Global_1574926;
}

bool func_40(int iParam0)
{
	return BitTest(Global_1836225, iParam0);
}

int func_41(int iParam0)
{
	if (iParam0 != func_43() && func_42(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 3);
	}
	return 0;
}

int func_42(int iParam0, bool bParam1, bool bParam2)
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

int func_43()
{
	return -1;
}

int func_44()
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x93E08E0F531E2C35())
	{
		if (func_128())
		{
			iVar0 = 1;
		}
	}
	if (func_45())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_45()
{
	int iVar0;
	
	switch (Local_126.f_6)
	{
		case 0:
			func_127();
			if ((((((((func_124(unk_0x259BE71D8A81D4FA(), 1, 0) && func_123()) || func_28(unk_0x259BE71D8A81D4FA()) == 159) || func_28(unk_0x259BE71D8A81D4FA()) == 225) || func_28(unk_0x259BE71D8A81D4FA()) == 233) || func_122(unk_0x259BE71D8A81D4FA())) || func_24()) || Global_1836681) || (unk_0x834C960822A4683F() && func_10()))
			{
				unk_0xCCA6D8A84EE8C88A(joaat("rhino"), 1);
			}
			func_120(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/]), 1);
			Local_126.f_176 = 1;
			Local_126.f_6 = 1;
			break;
		
		case 1:
			if (func_119())
			{
				func_120(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/]), 2);
				Local_126.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_118(Local_101.f_20, 1))
			{
				Local_126.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_124(unk_0x259BE71D8A81D4FA(), 1, 0) && !func_123()) && !func_160())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_112(iVar0);
					iVar0++;
				}
			}
			if (unk_0x76CD105BCAC6EB9F())
			{
				if ((((func_110() && !func_124(unk_0x259BE71D8A81D4FA(), 1, 0)) && !func_123()) && !unk_0x834C960822A4683F()) && func_108(unk_0x259BE71D8A81D4FA()) != 6)
				{
					func_53();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_46(iVar0);
				iVar0++;
			}
			if (((((func_28(unk_0x259BE71D8A81D4FA()) == 225 || func_28(unk_0x259BE71D8A81D4FA()) == 233) || func_122(unk_0x259BE71D8A81D4FA())) || Global_1836681) || func_24()) || (unk_0x834C960822A4683F() && func_10()))
			{
				unk_0xCCA6D8A84EE8C88A(joaat("rhino"), 1);
			}
			if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), -2076,374f, 3112,294f, 33,13584f) >= 1030225f)
			{
				Local_126.f_6 = 4;
			}
			break;
		
		case 4:
			if ((((((((func_124(unk_0x259BE71D8A81D4FA(), 1, 0) && func_123()) || func_28(unk_0x259BE71D8A81D4FA()) == 159) || func_28(unk_0x259BE71D8A81D4FA()) == 225) || func_28(unk_0x259BE71D8A81D4FA()) == 233) || func_122(unk_0x259BE71D8A81D4FA())) || Global_1836681) || func_24()) || (unk_0x834C960822A4683F() && func_10()))
			{
				unk_0xCCA6D8A84EE8C88A(joaat("rhino"), 0);
			}
			return 1;
			break;
	}
	return 0;
}

void func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (Local_101.f_3[iParam0 /*5*/].f_2 > 2 && unk_0x93BF17E19A9F0E9B(Local_101.f_3[iParam0 /*5*/]))
	{
		if (unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_101.f_3[iParam0 /*5*/]), 0))
		{
			if (unk_0xC450B06E5AAA0985(Local_126.f_172[iParam0]))
			{
				unk_0xFE54B8568B2ABD12(&(Local_126.f_172[iParam0]));
			}
		}
		else if (!unk_0xC450B06E5AAA0985(Local_126.f_172[iParam0]) && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) >= 2)
		{
			Local_126.f_172[iParam0] = unk_0x18E23E031A9B798F(unk_0xF5014688C9788D5F(Local_101.f_3[iParam0 /*5*/]));
			unk_0x61183D6239A9D7B8(Local_126.f_172[iParam0], 1);
		}
	}
	else if (unk_0xC450B06E5AAA0985(Local_126.f_172[iParam0]))
	{
		unk_0xFE54B8568B2ABD12(&(Local_126.f_172[iParam0]));
	}
	switch (Local_101.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_4[iParam0], 16))
			{
				Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_4[iParam0] = 0;
				func_51(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_4[iParam0], 1))
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					if (unk_0xC5F2281709805477(unk_0x4A8C381C258A124D()) || unk_0xFE90F09EC43D7D44(unk_0x4A8C381C258A124D()))
					{
						if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) >= 4)
						{
							if (func_22(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 3, 500, 0))
							{
								func_51(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_4[iParam0], 2))
			{
				if (func_50(iParam0))
				{
					iVar2 = unk_0x56E414973C2A8C0E(Local_101.f_3[iParam0 /*5*/].f_4);
					iVar0 = unk_0xC35A3A4C05A4831B(Local_101.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0xE38610F405049F71(Local_101.f_3[iParam0 /*5*/]);
					if (!unk_0x1C2F771CDC87A3A5(iVar2, 0))
					{
						if (unk_0xC5F2281709805477(iVar2))
						{
							iVar3 = unk_0x6EF03BE64E058E2F(iVar2, 0);
							if ((!unk_0x1C2F771CDC87A3A5(iVar0, 0) && !unk_0x1C2F771CDC87A3A5(iVar1, 0)) && !unk_0x1C2F771CDC87A3A5(iVar3, 0))
							{
								unk_0x8737E7B1F3150A9F(iVar0, iVar1, iVar3, iVar2, unk_0xD1A6A821F5AC81DB(iVar2, 1), 6, 70f, -1f, 30f, 500, 50, 1);
								unk_0xE26BDA5FFA4CA294(iVar0, joaat("vehicle_weapon_space_rocket"));
								unk_0xD724351CCF90F653(iVar0, 0);
							}
						}
					}
				}
				if (func_49(iParam0))
				{
					iVar0 = unk_0xC35A3A4C05A4831B(Local_101.f_3[iParam0 /*5*/].f_1);
					iVar2 = unk_0x56E414973C2A8C0E(Local_101.f_3[iParam0 /*5*/].f_4);
					if (!unk_0x1C2F771CDC87A3A5(iVar2, 0))
					{
						if (unk_0xC5F2281709805477(iVar2))
						{
							unk_0xD2A388162B1121E3(iVar0, iVar2, unk_0xD1A6A821F5AC81DB(iVar2, 1));
						}
					}
				}
				if (func_48(iParam0, 6))
				{
					func_51(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_4[iParam0], 8))
			{
				if (func_50(iParam0))
				{
					iVar0 = unk_0xC35A3A4C05A4831B(Local_101.f_3[iParam0 /*5*/].f_1);
					iVar1 = unk_0xE38610F405049F71(Local_101.f_3[iParam0 /*5*/]);
					if (!unk_0x1C2F771CDC87A3A5(iVar0, 0) && !unk_0x1C2F771CDC87A3A5(iVar1, 0))
					{
						unk_0x8737E7B1F3150A9F(iVar0, iVar1, 0, 0, -2076,374f, 3112,294f, 33,13584f, 9, 70f, -1f, 30f, 500, 50, 1);
					}
				}
				if (func_48(iParam0, 9))
				{
					func_51(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (unk_0x2FC2FDC413532977(Local_101.f_3[iParam0 /*5*/]) || unk_0x2FC2FDC413532977(Local_101.f_3[iParam0 /*5*/].f_1))
			{
				if (!unk_0x7B780C491DEC834E(unk_0xD1A6A821F5AC81DB(unk_0xF5014688C9788D5F(Local_101.f_3[iParam0 /*5*/]), 0), 10f) && !unk_0x809E97B5B52A6418(unk_0xD1A6A821F5AC81DB(unk_0xF5014688C9788D5F(Local_101.f_3[iParam0 /*5*/]), 0), 10f))
				{
					if (unk_0x93BF17E19A9F0E9B(Local_101.f_3[iParam0 /*5*/].f_1) && unk_0xEADBDBE0422CF7E6(Local_101.f_3[iParam0 /*5*/].f_1))
					{
						uVar4 = unk_0xF5014688C9788D5F(Local_101.f_3[iParam0 /*5*/].f_1);
						unk_0x81A7F3CD719DD53B(&uVar4);
					}
					if (unk_0x93BF17E19A9F0E9B(Local_101.f_3[iParam0 /*5*/]) && unk_0xEADBDBE0422CF7E6(Local_101.f_3[iParam0 /*5*/]))
					{
						uVar5 = unk_0xF5014688C9788D5F(Local_101.f_3[iParam0 /*5*/]);
						unk_0x81A7F3CD719DD53B(&uVar5);
					}
				}
			}
			else if (func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_4[iParam0], 16))
			{
				func_47(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x93BF17E19A9F0E9B(Local_101.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = unk_0xE38610F405049F71(Local_101.f_3[iParam0 /*5*/]);
	if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		return 1;
	}
	if (unk_0x927395DFE42BE071(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0)
{
	int iVar0;
	
	if (!unk_0x93BF17E19A9F0E9B(Local_101.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = unk_0xC35A3A4C05A4831B(Local_101.f_3[iParam0 /*5*/].f_1);
	if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x1B1A446EFA398EB5(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_50(int iParam0)
{
	int iVar0;
	
	if (!unk_0x93BF17E19A9F0E9B(Local_101.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = unk_0xE38610F405049F71(Local_101.f_3[iParam0 /*5*/]);
	if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x1B1A446EFA398EB5(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_52(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_53()
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<6> Var3;
	
	func_107();
	func_102();
	Var2 = { Local_100 };
	if (((func_22(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 3, 1000, 0) || func_21(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 1000)) || func_100(unk_0x4A8C381C258A124D())) && func_99(unk_0x4A8C381C258A124D()))
	{
		bVar0 = true;
	}
	else
	{
		Local_126.f_178 = 0;
	}
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1588,977f, 2793,941f, 14,98289f, -1575,664f, 2779,558f, 26,11536f, 29,75f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -2306,916f, 3390,545f, 29,17826f, -2322,245f, 3401,719f, 35,63131f, 36f, 0, 1, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_126.f_179 = 0;
	}
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1588,977f, 2793,941f, 14,98289f, -1575,664f, 2779,558f, 26,11536f, 29,75f, 0, 1, 0))
	{
		Var2 = { -1592,1f, 2797,2f, 17,1f };
		Local_126.f_181 = 1;
	}
	else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -2306,916f, 3390,545f, 29,17826f, -2322,245f, 3401,719f, 35,63131f, 36f, 0, 1, 0))
	{
		Var2 = { -2303,9f, 3388f, 31,3f };
		Local_126.f_181 = 2;
	}
	if (func_97(bVar0, bVar1))
	{
		func_95();
		if (!func_94())
		{
			Global_1835500 = 1;
			func_93(&(Local_126.f_7), 2);
			func_92(&(Local_126.f_7), 2);
			func_91(&(Local_126.f_7), 2, 0, "AIRMECH", 0, 1);
			func_90(&(Local_126.f_7), 2, Var2);
			Global_21575.f_162 = { Var2 };
			Var3 = { func_89() };
			if (!unk_0xD6F9DEE4765092A9(&Var3))
			{
				if (func_68(&(Local_126.f_7), "SMGFZAU", &Var3, 7, 0, 0, 0))
				{
					func_54(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_94())
	{
		if (!BitTest(Local_126.f_182, 2))
		{
			Global_1835500 = 0;
			func_93(&(Local_126.f_7), 2);
			func_92(&(Local_126.f_7), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_182), 2);
		}
	}
}

void func_54(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_67(16000, -1))
		{
			func_66(16000, 1, -1);
			if (Global_2738934.f_6941)
			{
				if (func_60())
				{
					func_58("AB_ENTRY_HT");
					Local_126.f_180 = 1;
				}
			}
			else if (func_60())
			{
				func_57("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_67(16001, -1))
		{
			func_66(16001, 1, -1);
			if (Global_2738934.f_6941)
			{
				if (func_60())
				{
					func_58("AB_ENTRY_HT");
					Local_126.f_180 = 1;
				}
			}
			else if (func_60())
			{
				func_57("AB_ENTRY_HT", -1);
			}
		}
		Local_126.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_67(15999, -1))
		{
			func_66(15999, 1, -1);
			if (Global_2738934.f_6941)
			{
				if (func_60())
				{
					func_58("AB_ENTRY_HT");
					Local_126.f_180 = 1;
				}
			}
			else if (func_60())
			{
				func_57("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_126.f_181 == 1)
		{
			if (!func_67(16002, -1))
			{
				func_66(16002, 1, -1);
				if (Global_2738934.f_6941)
				{
					if (func_60())
					{
						func_58("AB_ENTRY_HT");
						Local_126.f_180 = 1;
					}
				}
				else if (func_60())
				{
					func_57("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_126.f_181 == 2)
		{
			if (func_56(18097, -1) == 0)
			{
				func_55(18097, 1, -1);
				if (Global_2738934.f_6941)
				{
					if (func_60())
					{
						func_58("AB_ENTRY_HT");
						Local_126.f_180 = 1;
					}
				}
				else if (func_60())
				{
					func_57("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_126.f_179 = 1;
		Local_126.f_181 = 0;
	}
	if (BitTest(Local_126.f_182, 2))
	{
		unk_0x8744D2E3FC95740E(&(Local_126.f_182), 2);
	}
}

void func_55(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_39();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	unk_0x0F575D68F532124C(iParam0, iParam1, iParam2);
}

int func_56(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_39();
	}
	return unk_0x03CFFD51CE515454(iParam0, iParam1);
}

void func_57(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_58(char* sParam0)
{
	if (unk_0x4C705AAF75363287())
	{
		unk_0x428C32CC68809A35(1);
	}
	if (!func_59(sParam0))
	{
		func_57(sParam0, -1);
	}
}

bool func_59(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_60()
{
	if (func_63(unk_0x259BE71D8A81D4FA()) && !func_61(unk_0x259BE71D8A81D4FA(), 0))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, bool bParam1)
{
	if (!func_30(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_62(iParam0))
		{
			return 0;
		}
	}
	return func_30(Global_1887305[iParam0 /*610*/].f_10);
}

int func_62(int iParam0)
{
	if (func_30(iParam0))
	{
		if (func_30(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (func_65(iParam0))
	{
		iVar0 = func_64(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (iParam0 != func_43())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_297;
	}
	return 0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_43())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_297 != 0;
	}
	return 0;
}

void func_66(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_39();
	}
	unk_0xA595AA1819B05EA0(iParam0, iParam1, iParam2);
}

bool func_67(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_39();
	}
	return unk_0xA6D3C21763E25496(iParam0, iParam1);
}

bool func_68(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_69(sParam2, iParam3, 0);
}

int func_69(char* sParam0, int iParam1, bool bParam2)
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_87();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1F9EB85925C3ECD7())
		{
			return 0;
		}
		if (func_86(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_85();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			unk_0x8744D2E3FC95740E(&Global_8800, 20);
			unk_0x8744D2E3FC95740E(&Global_8801, 17);
			unk_0x8744D2E3FC95740E(&Global_8802, 0);
			if (bParam2)
			{
				func_77();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (func_76())
				{
					return 0;
				}
				if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x08DAD6B08438A17C(unk_0x4A8C381C258A124D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_79389)
				{
					if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
					{
						return 0;
					}
					if (unk_0x74CD4FE549433E92(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_75())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_74();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_73();
		func_70();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_87();
	}
	return 0;
}

void func_70()
{
	if (!func_71())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

int func_71()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_43())
	{
		return 0;
	}
	if (func_72(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	return 1;
}

bool func_72(int iParam0)
{
	return func_12(iParam0, 20);
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0F15249D24BC5ADA(0);
	Global_22286 = 1;
}

void func_74()
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	unk_0x8744D2E3FC95740E(&Global_8801, 16);
}

int func_75()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_76()
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
	{
		iVar0 = 0;
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar1, 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x196704C916969409() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_77()
{
	if (func_84(14))
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
		Global_20930 = func_78();
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

var func_78()
{
	func_79();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_79()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_82(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_81(unk_0x4A8C381C258A124D());
			if (func_80(iVar0) && (!func_84(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_80(Global_113969.f_2366.f_539.f_4321))
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

bool func_80(int iParam0)
{
	return iParam0 < 3;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_83(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_84(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

bool func_86(int iParam0, int iParam1)
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

void func_87()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if ((unk_0xE87F28FD4128D063() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = uParam5;
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

struct<6> func_89()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1588,977f, 2793,941f, 14,98289f, -1575,664f, 2779,558f, 26,11536f, 29,75f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -2306,916f, 3390,545f, 29,17826f, -2322,245f, 3401,719f, 35,63131f, 36f, 0, 1, 0))
	{
		if (!func_67(15999, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_67(16002, -1) || func_56(18097, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_22(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 3, 1000, 0) || func_21(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 1000)) || func_100(unk_0x4A8C381C258A124D())) && func_99(unk_0x4A8C381C258A124D()))
	{
		if (!func_67(16000, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_67(16001, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_90(var uParam0, int iParam1, struct<3> Param2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { Param2 };
}

void func_91(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
	{
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 0);
			}
			else
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x26C12212366CBF6E(iParam2, 0);
			}
			else
			{
				unk_0x26C12212366CBF6E(iParam2, 1);
			}
		}
	}
}

void func_92(var uParam0, int iParam1)
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_93(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_94()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

void func_95()
{
	Global_21152 = 0;
	func_96();
}

void func_96()
{
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0xC78B293A5F4EACF9();
		Global_23297 = 0;
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

int func_97(bool bParam0, bool bParam1)
{
	if (func_25(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!Local_126.f_178)
		{
			if (BitTest(Local_126.f_182, 1))
			{
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
				{
					if (!func_67(16000, -1) || !func_67(16001, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_126.f_179)
		{
			if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || func_98())
				{
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -1588,977f, 2793,941f, 14,98289f, -1575,664f, 2779,558f, 26,11536f, 29,75f, 0, 1, 0))
					{
						if (!func_67(15999, -1) || !func_67(16002, -1))
						{
							if (unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()) >= -25f && unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), -2306,916f, 3390,545f, 29,17826f, -2322,245f, 3401,719f, 35,63131f, 36f, 0, 1, 0))
					{
						if (!func_67(15999, -1) || func_56(18097, -1) == 0)
						{
							if (unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()) >= 160f && unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_98()
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (unk_0xFDA2576D37032738(iVar0))
		{
			if (func_7(iVar0))
			{
				if (!func_6(iVar0, 1) && !func_5(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_99(int iParam0)
{
	if (unk_0xC5F2281709805477(iParam0) || unk_0xFE90F09EC43D7D44(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0) && func_101(iParam0))
	{
		if ((unk_0x5105BE70DEF1F5FB(iParam0, -2013,3f, 2878,6f, 1000f, -2864,6f, 3357,6f, 31f, 400f, 0, 1, 0) || unk_0x5105BE70DEF1F5FB(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, 1, 0)) || unk_0x5105BE70DEF1F5FB(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0)
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

void func_102()
{
	if (Local_126.f_180)
	{
		if (!func_106(&(Local_126.f_183)))
		{
			func_105(&(Local_126.f_183), 0, 0);
		}
		else if (!func_104(&(Local_126.f_183), 17000, 0))
		{
			if (!func_59("AB_ENTRY_HT"))
			{
				func_57("AB_ENTRY_HT", -1);
			}
		}
		else if (func_104(&(Local_126.f_183), 17000, 0))
		{
			if (func_59("AB_ENTRY_HT"))
			{
				unk_0x428C32CC68809A35(1);
			}
			func_103(&(Local_126.f_183));
			Local_126.f_180 = 0;
		}
	}
}

void func_103(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_104(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_105(uParam0, bParam2, 0);
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

void func_105(var uParam0, bool bParam1, bool bParam2)
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

bool func_106(var uParam0)
{
	return uParam0->f_1;
}

void func_107()
{
	if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
	{
		if ((func_22(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 3, 1000, 0) || func_21(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), 1000)) || func_100(unk_0x4A8C381C258A124D()))
		{
			if (!BitTest(Local_126.f_182, 0))
			{
				if ((((func_99(unk_0x4A8C381C258A124D()) && unk_0x3F18810075C77D41(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0))) && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0) && func_98()) && !Global_1956832)
				{
					if (!BitTest(Local_126.f_182, 1) && !BitTest(Local_126.f_182, 3))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_182), 1);
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_182), 0);
			}
		}
		else
		{
			if (BitTest(Local_126.f_182, 0))
			{
				unk_0x8744D2E3FC95740E(&(Local_126.f_182), 0);
			}
			if (BitTest(Local_126.f_182, 1))
			{
				unk_0x8744D2E3FC95740E(&(Local_126.f_182), 1);
			}
			if (BitTest(Local_126.f_182, 3))
			{
				unk_0x8744D2E3FC95740E(&(Local_126.f_182), 3);
			}
			if (Global_1956832)
			{
				Global_1956832 = 0;
			}
		}
	}
}

int func_108(int iParam0)
{
	if (func_28(iParam0) == 233)
	{
		return func_109(iParam0);
	}
	return -1;
}

int func_109(int iParam0)
{
	if (func_29(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

int func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_63(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xB23E0F9B63D009A8(iVar0);
		if (func_42(iVar1, 0, 1))
		{
			if (iVar1 != unk_0x259BE71D8A81D4FA())
			{
				if (func_111(unk_0x56E414973C2A8C0E(unk_0x259BE71D8A81D4FA()), unk_0x56E414973C2A8C0E(iVar1)))
				{
					iVar2 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iVar1), 0);
					if (unk_0xFD5C5BBD1FE92BB7(iVar2, -1, 0) == unk_0x56E414973C2A8C0E(iVar1))
					{
						if (func_63(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_111(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0x7F420695E3F776FB(iParam0, 0) || !unk_0x7F420695E3F776FB(iParam1, 0))
	{
		return 0;
	}
	return unk_0x6EF03BE64E058E2F(iParam0, 0) == unk_0x6EF03BE64E058E2F(iParam1, 0);
}

void func_112(int iParam0)
{
	int iVar0;
	
	if (!unk_0x93BF17E19A9F0E9B(Local_101[iParam0]))
	{
		return;
	}
	iVar0 = unk_0xC35A3A4C05A4831B(Local_101[iParam0]);
	if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		return;
	}
	switch (Local_101.f_21[iParam0])
	{
		case 0:
			if (!func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0], 64))
			{
				Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0] = 0;
				func_51(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iVar0, 1)) <= 900f)
					{
						func_51(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if ((!func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0], 2) && system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iVar0, 1)) <= 900f) && !func_25(unk_0x259BE71D8A81D4FA()))
			{
				func_91(&(Local_126.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_117(&(Local_126.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_51(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0], 4))
			{
				if (func_116(iParam0))
				{
					unk_0x646DE293036A3499(iVar0, func_115(iParam0), -1, 0);
				}
				if (func_114(iParam0, joaat("script_task_aim_gun_at_entity")))
				{
					func_51(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0], 8) && system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), unk_0xD1A6A821F5AC81DB(iVar0, 1)) <= 900f) && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) < 1)
			{
				if (!func_19(&Local_126))
				{
					func_16(&Local_126);
				}
				if (func_13(&Local_126) >= 7f && !func_25(unk_0x259BE71D8A81D4FA()))
				{
					func_51(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0]), 8);
					func_117(&(Local_126.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_19(&Local_126))
			{
				func_1(&Local_126);
			}
			if (!func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0], 16))
			{
				if (func_113(iParam0) && system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), unk_0xD1A6A821F5AC81DB(iVar0, 1)) <= 900f)
				{
					func_51(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0]), 16);
					if (!func_160())
					{
						unk_0x80A39DDADDA2585C(unk_0x259BE71D8A81D4FA(), 36, unk_0x30C1D2072FB75567(4));
					}
					else
					{
						unk_0x80A39DDADDA2585C(unk_0x259BE71D8A81D4FA(), 36, unk_0x30C1D2072FB75567(Global_262145.f_21595));
					}
				}
			}
			if (func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iVar0, 1)) > 900f)
					{
						func_47(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0], 16))
			{
				if (func_113(iParam0) && system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), unk_0xD1A6A821F5AC81DB(iVar0, 1)) <= 900f)
				{
					func_51(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0]), 16);
					if (!func_160())
					{
						unk_0x80A39DDADDA2585C(unk_0x259BE71D8A81D4FA(), 36, (unk_0x30C1D2072FB75567(4) - unk_0x30C1D2072FB75567(unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()))));
					}
					else
					{
						unk_0x80A39DDADDA2585C(unk_0x259BE71D8A81D4FA(), 36, (unk_0x30C1D2072FB75567(Global_262145.f_21595) - unk_0x30C1D2072FB75567(unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()))));
					}
				}
			}
			if (func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0], 1))
			{
				if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
				{
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iVar0, 1)) > 900f)
					{
						func_47(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_114(iParam0, joaat("script_task_aim_gun_at_entity")))
			{
				if (func_116(iParam0))
				{
					unk_0x646DE293036A3499(iVar0, func_115(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_52(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0], 4))
			{
				if (func_116(iParam0))
				{
					unk_0x974022927CB47E68(iVar0);
				}
				if (!func_114(iParam0, joaat("script_task_any")))
				{
					func_47(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0]), 4);
					func_47(&(Local_125[unk_0xAE032CEDCF23C6D5() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_113(int iParam0)
{
	int iVar0;
	
	if (!unk_0x93BF17E19A9F0E9B(Local_101[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0xC35A3A4C05A4831B(Local_101[iParam0]);
	if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		return 0;
	}
	if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		return 0;
	}
	if (unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D()))
	{
		return 1;
	}
	if (unk_0xE5D813FA6F741B01(unk_0x259BE71D8A81D4FA(), iVar0))
	{
		return 1;
	}
	if (unk_0x41754DC6001F6313(unk_0x259BE71D8A81D4FA(), iVar0))
	{
		return 1;
	}
	if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iVar0, 1)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x93BF17E19A9F0E9B(Local_101[iParam0]))
	{
		return 1;
	}
	iVar0 = unk_0xC35A3A4C05A4831B(Local_101[iParam0]);
	if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		return 1;
	}
	if (unk_0x9B5C1660CCDF7189(iVar0, iParam1) != 1 && unk_0x9B5C1660CCDF7189(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			iVar2 = unk_0x56E414973C2A8C0E(unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0)));
			if (!unk_0x1C2F771CDC87A3A5(iVar2, 0))
			{
				fVar4 = system::vdist2(unk_0xD1A6A821F5AC81DB(iVar2, 1), unk_0xD1A6A821F5AC81DB(unk_0xF5014688C9788D5F(Local_101[iParam0]), 1));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_116(int iParam0)
{
	int iVar0;
	
	if (!unk_0x93BF17E19A9F0E9B(Local_101[iParam0]))
	{
		return 0;
	}
	iVar0 = unk_0xC35A3A4C05A4831B(Local_101[iParam0]);
	if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x1B1A446EFA398EB5(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_117(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 1;
	return func_69(sParam2, iParam3, 0);
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_119()
{
	if (!unk_0x6252BC0DD8A320DB(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(joaat("lazer")))
	{
		return 0;
	}
	if (!unk_0x6252BC0DD8A320DB(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_120(var uParam0, int iParam1)
{
	func_121(uParam0, iParam1);
}

void func_121(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_122(int iParam0)
{
	if (func_34(iParam0) == 236 || func_34(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

bool func_123()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 0);
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_125(iParam0))
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

bool func_125(int iParam0)
{
	return func_126(iParam0);
}

var func_126(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

void func_127()
{
	unk_0xEC9DAA34BBB4658C(joaat("s_m_y_marine_01"));
	unk_0xEC9DAA34BBB4658C(joaat("lazer"));
	unk_0xEC9DAA34BBB4658C(joaat("s_m_y_pilot_01"));
}

int func_128()
{
	int iVar0;
	
	switch (Local_101.f_19)
	{
		case 0:
			if (func_150())
			{
				Local_101.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_149())
			{
				Local_101.f_19 = 2;
			}
			break;
		
		case 2:
			if (((((((func_124(unk_0x259BE71D8A81D4FA(), 1, 0) || func_123()) || func_28(unk_0x259BE71D8A81D4FA()) == 225) || func_28(unk_0x259BE71D8A81D4FA()) == 233) || func_122(unk_0x259BE71D8A81D4FA())) || func_24()) || Global_1836681) || (unk_0x834C960822A4683F() && func_10()))
			{
				func_120(&(Local_101.f_20), 1);
				Local_101.f_19 = 3;
			}
			else if (func_147())
			{
				func_120(&(Local_101.f_20), 1);
				Local_101.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_124(unk_0x259BE71D8A81D4FA(), 1, 0) && !func_123())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_144(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_131(iVar0);
					iVar0++;
				}
			}
			if (((((func_28(unk_0x259BE71D8A81D4FA()) == 225 || func_28(unk_0x259BE71D8A81D4FA()) == 233) || func_122(unk_0x259BE71D8A81D4FA())) || Global_1836681) || func_24()) || (unk_0x834C960822A4683F() && func_10()))
			{
				func_130();
			}
			if (func_129())
			{
				Local_101.f_19 = 4;
			}
			break;
		
		case 4:
			func_130();
			return 1;
			break;
	}
	return 0;
}

int func_129()
{
	if (unk_0x7F258099B06D4C7C() > 1)
	{
		return 0;
	}
	if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), -2076,374f, 3112,294f, 33,13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_130()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_101[iVar0]))
		{
			uVar1 = unk_0xC35A3A4C05A4831B(Local_101[iVar0]);
			if (!unk_0x1C2F771CDC87A3A5(uVar1, 0))
			{
				unk_0xF09E30AF1B8FB379(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_101.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = unk_0xC35A3A4C05A4831B(Local_101.f_3[iVar0 /*5*/].f_1);
			if (!unk_0x1C2F771CDC87A3A5(iVar1, 0))
			{
				unk_0xF09E30AF1B8FB379(&iVar1);
			}
		}
		if (unk_0x93BF17E19A9F0E9B(Local_101.f_3[iVar0 /*5*/]))
		{
			uVar2 = unk_0xE38610F405049F71(Local_101.f_3[iVar0 /*5*/]);
			if (!unk_0x1C2F771CDC87A3A5(uVar2, 0))
			{
				unk_0x68298CA6191CDFDB(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_131(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	struct<3> Var3;
	int iVar4;
	
	if (Local_101.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (unk_0x93BF17E19A9F0E9B(Local_101.f_3[iParam0 /*5*/].f_1))
		{
			if (!unk_0x1C2F771CDC87A3A5(unk_0xC35A3A4C05A4831B(Local_101.f_3[iParam0 /*5*/].f_1), 0))
			{
				uVar0 = unk_0xC35A3A4C05A4831B(Local_101.f_3[iParam0 /*5*/].f_1);
				Var1 = { unk_0xD1A6A821F5AC81DB(uVar0, 1) };
				if (Var1.f_2 <= -150f)
				{
					unk_0xF09E30AF1B8FB379(&iVar0);
					if (unk_0x93BF17E19A9F0E9B(Local_101.f_3[iParam0 /*5*/]))
					{
						if (!unk_0x1C2F771CDC87A3A5(unk_0xE38610F405049F71(Local_101.f_3[iParam0 /*5*/]), 0))
						{
							uVar2 = unk_0xE38610F405049F71(Local_101.f_3[iParam0 /*5*/]);
							unk_0x68298CA6191CDFDB(&uVar2);
						}
					}
				}
			}
		}
	}
	switch (Local_101.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_143(iParam0, 16))
			{
				Local_101.f_3[iParam0 /*5*/].f_4 = -1;
				Local_101.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_141(iParam0))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			Var3 = { func_140(iParam0) };
			if (!func_139(Var3))
			{
				if (!unk_0x809E97B5B52A6418(Var3, 20f) && !unk_0x7B780C491DEC834E(Var3, 20f))
				{
					if (func_134(Var3, unk_0xCFC0C995455A6204(unk_0x56E414973C2A8C0E(Local_101.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_101.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_143(iParam0, 2))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar4 = unk_0x56E414973C2A8C0E(Local_101.f_3[iParam0 /*5*/].f_4);
			if (!unk_0xFC8BFE4B41177C22(iVar4))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0x1C2F771CDC87A3A5(iVar4, 0))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (unk_0xC5F2281709805477(iVar4) || unk_0xFE90F09EC43D7D44(iVar4))
			{
				if (func_133(unk_0x6EF03BE64E058E2F(iVar4, 0)))
				{
					Local_101.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_143(iParam0, 8))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 6;
				Local_101.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_132(iParam0, 16))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_141(iParam0))
			{
				Local_101.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			if (func_52(Local_125[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		if (unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_134(struct<3> Param0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x93E08E0F531E2C35())
	{
		return 1;
	}
	iVar0 = 1;
	if (!unk_0x93BF17E19A9F0E9B(Local_101.f_3[iParam2 /*5*/]))
	{
		if (!func_136(&(Local_101.f_3[iParam2 /*5*/]), joaat("lazer"), Param0, uParam1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			unk_0xC2A036647DD761E4(unk_0xE38610F405049F71(Local_101.f_3[iParam2 /*5*/]), 3);
		}
	}
	if (unk_0x93BF17E19A9F0E9B(Local_101.f_3[iParam2 /*5*/]))
	{
		if (!unk_0x93BF17E19A9F0E9B(Local_101.f_3[iParam2 /*5*/].f_1))
		{
			if (!func_135(&(Local_101.f_3[iParam2 /*5*/].f_1), Local_101.f_3[iParam2 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				unk_0xE26BDA5FFA4CA294(unk_0xC35A3A4C05A4831B(Local_101.f_3[iParam2 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				unk_0xD724351CCF90F653(unk_0xC35A3A4C05A4831B(Local_101.f_3[iParam2 /*5*/].f_1), 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_135(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
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

int func_136(var uParam0, int iParam1, struct<3> Param2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
	iVar1 = unk_0x5779387E956077A6(iParam1, Param2, uParam3, iParam5, iParam4, iParam12);
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
			func_137(Param2, uParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_137(struct<3> Param0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_138(unk_0x259BE71D8A81D4FA(), Param0, iParam2) > -1)
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
		Global_2635563.f_3230[1 /*6*/].f_3 = uParam1;
		Global_2635563.f_3230[1 /*6*/].f_4 = iParam2;
		Global_2635563.f_3230[1 /*6*/].f_5 = iParam3;
	}
}

int func_138(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
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

int func_139(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_140(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0x56E414973C2A8C0E(Local_101.f_3[iParam0 /*5*/].f_4);
	if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	Var1 = { unk_0xF10F2A2453AF1DFB(unk_0xD1A6A821F5AC81DB(iVar0, 1), unk_0xCFC0C995455A6204(iVar0), 0f, -250f, (40f * system::to_float(iParam0))) };
	if (Var1.f_2 < 100f)
	{
		Var1.f_2 = 100f;
	}
	return Var1;
}

int func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			iVar1 = unk_0x56E414973C2A8C0E(unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0)));
			if (!func_142(unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0))))
			{
				if (unk_0xC5F2281709805477(iVar1) || unk_0xFE90F09EC43D7D44(iVar1))
				{
					if (unk_0xE7B45027762DEFE7(unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0))) >= 4)
					{
						Var2 = { unk_0xD1A6A821F5AC81DB(iVar1, 0) };
						if (func_22(Var2, 3, 1000, 0) && Var2.f_2 > 90f)
						{
							Local_101.f_3[iParam0 /*5*/].f_4 = unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x56E414973C2A8C0E(iParam0);
	if (!unk_0xFC8BFE4B41177C22(iVar0))
	{
		return 1;
	}
	if (unk_0x1C2F771CDC87A3A5(iVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = unk_0x56E414973C2A8C0E(Local_101.f_3[iVar1 /*5*/].f_4);
		if (unk_0xFC8BFE4B41177C22(iVar2))
		{
			if (iParam0 == Local_101.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			if (!func_52(Local_125[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_144(int iParam0)
{
	switch (Local_101.f_21[iParam0])
	{
		case 0:
			if (func_146(iParam0, 64))
			{
				Local_101.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_145(iParam0, 1))
			{
				Local_101.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_145(iParam0, 2))
			{
				Local_101.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_146(iParam0, 4))
			{
				Local_101.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_145(iParam0, 8))
			{
				Local_101.f_21[iParam0] = 5;
			}
			if (!func_145(iParam0, 1))
			{
				Local_101.f_21[iParam0] = 7;
			}
			if (func_145(iParam0, 16))
			{
				Local_101.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_145(iParam0, 16))
			{
				Local_101.f_21[iParam0] = 6;
			}
			if (!func_145(iParam0, 1))
			{
				Local_101.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_145(iParam0, 4))
			{
				Local_101.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			if (func_52(Local_125[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_146(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			if (!func_52(Local_125[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_147()
{
	int iVar0;
	
	if (!unk_0x93E08E0F531E2C35())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_148(&(Local_101[0]), 29, joaat("s_m_y_marine_01"), -2308,4f, 3391f, 30,0601f, 55,8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x93BF17E19A9F0E9B(Local_101[0]))
	{
		unk_0xB41DEC3AAC1AA107(unk_0xC35A3A4C05A4831B(Local_101[0]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	if (!func_148(&(Local_101[1]), 29, joaat("s_m_y_marine_01"), -1588,9f, 2792,9f, 16,1385f, 229,437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (unk_0x93BF17E19A9F0E9B(Local_101[1]))
	{
		unk_0xB41DEC3AAC1AA107(unk_0xC35A3A4C05A4831B(Local_101[1]), joaat("weapon_assaultrifle"), 200, 1, 1);
	}
	return iVar0;
}

int func_148(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	var uVar0;
	
	if (!unk_0xADCE9BCAFCB83364(1))
	{
		return 0;
	}
	uVar0 = unk_0xB1DBFEB95C0EFB88(iParam1, iParam2, Param3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0x9F7A52B1537567AC(uVar0);
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		unk_0x11C125313CB8ADA2(uVar0, iParam7);
		if (unk_0xC8D49539708A80B4(iVar0))
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

int func_149()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)))
		{
			if (!func_118(Local_125[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_150()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar1)))
		{
			if (!func_118(Local_125[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_151()
{
	if (!func_156())
	{
		return;
	}
	if (func_106(&uLocal_138) && func_104(&uLocal_138, Global_262145.f_21656, 0))
	{
		func_103(&uLocal_138);
	}
	if (func_106(&uLocal_136) && func_104(&uLocal_136, Global_262145.f_21657, 0))
	{
		func_103(&uLocal_136);
		iLocal_133 = 0;
	}
	if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) <= 0)
	{
		if (func_152())
		{
			if (!Global_2738934.f_6942)
			{
				Global_2738934.f_6942 = 1;
				func_57("BASE_EXP_WARN", -1);
			}
			if (!iLocal_133)
			{
				iLocal_133 = 1;
				func_105(&uLocal_138, 0, 0);
				func_105(&uLocal_136, 0, 0);
			}
			else if (!func_106(&uLocal_138))
			{
				unk_0xDAE61414743C8D1D(func_2());
				bLocal_128 = true;
				bLocal_129 = true;
				iLocal_133 = 0;
				func_103(&uLocal_138);
				func_103(&uLocal_136);
			}
		}
	}
}

int func_152()
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_155(&uLocal_134, iVar1);
		iLocal_135 = func_154();
		if (iLocal_135 >= 0)
		{
			uVar0 = func_153(iLocal_135);
			if (unk_0xFC8BFE4B41177C22(uVar0) && unk_0x0101C509A6E67F99(iVar0))
			{
				if (unk_0xBD545F8729E9F413(iVar0) == unk_0x4A8C381C258A124D())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

var func_153(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -1773,944f, 3287,334f, 30f, -2029,776f, 2845,083f, 1250f, 255f);
			break;
		
		case 1:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2725,889f, 3291,099f, 30f, -2009,182f, 2879,835f, 1250f, 180f);
			break;
		
		case 2:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2442,026f, 3326,699f, 30f, -2033,928f, 3089,049f, 1250f, 205f);
			break;
		
		case 3:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -1917,165f, 3374,209f, 30f, -2016,791f, 3195,058f, 1250f, 86,25f);
			break;
		
		case 4:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2192,753f, 3373,278f, 30f, -2191,544f, 3150,417f, 1250f, 150f);
			break;
		
		case 5:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2077,663f, 3344,514f, 30f, -2191,544f, 3150,417f, 1250f, 140,5f);
			break;
		
		case 6:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2861,755f, 3352,661f, 30f, -2715,871f, 3269,916f, 1250f, 90f);
			break;
		
		case 7:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2005,574f, 3364,533f, 30f, -1977,569f, 3330,888f, 1250f, 100f);
			break;
		
		case 8:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -1682,235f, 3004,285f, 30f, -1942,747f, 2947,441f, 1250f, 248,75f);
			break;
		
		case 9:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2393,295f, 2936,406f, 31,6801f, -2453,037f, 3006,863f, 52,31003f, 128f);
			break;
		
		case 10:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2347,185f, 3023,83f, 31,56573f, -2517,33f, 2989,063f, 49,95644f, 127,25f);
			break;
		
		case 11:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2259,922f, 3358,04f, 29,99972f, -2299,772f, 3385,79f, 38,06014f, 16f);
			break;
		
		case 12:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2476,309f, 3363,914f, 31,67933f, -2431,981f, 3287,669f, 39,97826f, 214,25f);
			break;
		
		case 13:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2103,081f, 2797,783f, 29,37864f, -2096,821f, 2874,423f, 57,80989f, 65,75f);
			break;
		
		case 14:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -1877,436f, 2783,151f, 31,80618f, -1797,873f, 2924,37f, 1307,111f, 88f);
			break;
		
		case 15:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -1761,116f, 2834,651f, 31,80622f, -1720,887f, 2906,419f, 1281,806f, 88f);
			break;
		
		case 16:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -1761,493f, 2817,68f, 32,37125f, -1769,704f, 2913,734f, 1281,807f, 88f);
			break;
		
		case 17:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -1879,297f, 2772,653f, 29,57795f, -1864,521f, 2825,472f, 1281,806f, 88f);
			break;
		
		case 18:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2676,74f, 3366,988f, 29,92394f, -2744,79f, 3340,347f, 1037,804f, 9f);
			break;
		
		case 19:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2676,74f, 3366,988f, 29,92394f, -2744,79f, 3340,347f, 1037,804f, 9,5f);
			break;
		
		case 20:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2807,397f, 3264,226f, 29,92764f, -2744,79f, 3340,347f, 1037,804f, 9,5f);
			break;
		
		case 21:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2808,236f, 3264,634f, 29,92764f, -2747,55f, 3187,8f, 1037,457f, 9,5f);
			break;
		
		case 22:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2530,996f, 3064,151f, 29,71081f, -2748,557f, 3189,939f, 1037,457f, 9,5f);
			break;
		
		case 23:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2533,902f, 3062,491f, 29,70715f, -2520,674f, 2996,817f, 1037,457f, 9,5f);
			break;
		
		case 24:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2500,716f, 2927,103f, 29,45663f, -2445,696f, 2896,657f, 1037,68f, 9,5f);
			break;
		
		case 25:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2020,543f, 2810,747f, 29,45658f, -1927,949f, 2785,779f, 1037,671f, 9,5f);
			break;
		
		case 26:
			uVar0 = unk_0xCBE5AFAE59C1BB3A(uLocal_134, -2261,899f, 3376,549f, 29,77859f, -2141,067f, 3376,773f, 1037,9f, 9,5f);
			break;
	}
	return uVar0;
}

int func_154()
{
	if (unk_0x9D27D35452DED6B5(uLocal_134, -1773,944f, 3287,334f, 30f, -2029,776f, 2845,083f, 1250f, 255f))
	{
		return 0;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2725,889f, 3291,099f, 30f, -2009,182f, 2879,835f, 1250f, 180f))
	{
		return 1;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2442,026f, 3326,699f, 30f, -2033,928f, 3089,049f, 1250f, 205f))
	{
		return 2;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -1917,165f, 3374,209f, 30f, -2016,791f, 3195,058f, 1250f, 86,25f))
	{
		return 3;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2192,753f, 3373,278f, 30f, -2191,544f, 3150,417f, 1250f, 150f))
	{
		return 4;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2077,663f, 3344,514f, 30f, -2191,544f, 3150,417f, 1250f, 140,5f))
	{
		return 5;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2861,755f, 3352,661f, 30f, -2715,871f, 3269,916f, 1250f, 90f))
	{
		return 6;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2005,574f, 3364,533f, 30f, -1977,569f, 3330,888f, 1250f, 100f))
	{
		return 7;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -1682,235f, 3004,285f, 30f, -1942,747f, 2947,441f, 1250f, 248,75f))
	{
		return 8;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2393,295f, 2936,406f, 31,6801f, -2453,037f, 3006,863f, 52,31003f, 128f))
	{
		return 9;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2347,185f, 3023,83f, 31,56573f, -2517,33f, 2989,063f, 49,95644f, 127,25f))
	{
		return 10;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2259,922f, 3358,04f, 29,99972f, -2299,772f, 3385,79f, 38,06014f, 16f))
	{
		return 11;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2476,309f, 3363,914f, 31,67933f, -2431,981f, 3287,669f, 39,97826f, 214,25f))
	{
		return 12;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2103,081f, 2797,783f, 29,37864f, -2096,821f, 2874,423f, 57,80989f, 65,75f))
	{
		return 13;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -1877,436f, 2783,151f, 31,80618f, -1797,873f, 2924,37f, 1307,111f, 88f))
	{
		return 14;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -1761,116f, 2834,651f, 31,80622f, -1720,887f, 2906,419f, 1281,806f, 88f))
	{
		return 15;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -1761,493f, 2817,68f, 32,37125f, -1769,704f, 2913,734f, 1281,807f, 88f))
	{
		return 16;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -1879,297f, 2772,653f, 29,57795f, -1864,521f, 2825,472f, 1281,806f, 88f))
	{
		return 17;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2676,74f, 3366,988f, 29,92394f, -2744,79f, 3340,347f, 1037,804f, 9f))
	{
		return 18;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2676,74f, 3366,988f, 29,92394f, -2744,79f, 3340,347f, 1037,804f, 9,5f))
	{
		return 19;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2807,397f, 3264,226f, 29,92764f, -2744,79f, 3340,347f, 1037,804f, 9,5f))
	{
		return 20;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2808,236f, 3264,634f, 29,92764f, -2747,55f, 3187,8f, 1037,457f, 9,5f))
	{
		return 21;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2530,996f, 3064,151f, 29,71081f, -2748,557f, 3189,939f, 1037,457f, 9,5f))
	{
		return 22;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2533,902f, 3062,491f, 29,70715f, -2520,674f, 2996,817f, 1037,457f, 9,5f))
	{
		return 23;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2500,716f, 2927,103f, 29,45663f, -2445,696f, 2896,657f, 1037,68f, 9,5f))
	{
		return 24;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2020,543f, 2810,747f, 29,45658f, -1927,949f, 2785,779f, 1037,671f, 9,5f))
	{
		return 25;
	}
	else if (unk_0x9D27D35452DED6B5(uLocal_134, -2261,899f, 3376,549f, 29,77859f, -2141,067f, 3376,773f, 1037,9f, 9,5f))
	{
		return 26;
	}
	return -1;
}

void func_155(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_156()
{
	int iVar0;
	
	if (func_159(unk_0x259BE71D8A81D4FA(), 150) == 2)
	{
		return 0;
	}
	if (func_2() == 0)
	{
		return 0;
	}
	if (func_63(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (func_158(1))
	{
		iVar0 = func_157();
		if (iVar0 != func_43())
		{
			if (func_63(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_157()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10;
}

bool func_158(bool bParam0)
{
	return func_61(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_159(int iParam0, int iParam1)
{
	if (func_34(iParam0) == iParam1)
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_476;
	}
	return -1;
}

int func_160()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (func_159(unk_0x259BE71D8A81D4FA(), 150) == 2)
	{
		return 1;
	}
	if (func_63(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (func_158(1))
	{
		iVar0 = func_157();
		if (iVar0 != func_43())
		{
			if (func_63(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar1);
		if (func_42(iVar2, 0, 1))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA())
			{
				if (func_158(1))
				{
					if (func_162(unk_0x259BE71D8A81D4FA(), iVar2))
					{
						if (func_63(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_161(unk_0x56E414973C2A8C0E(unk_0x259BE71D8A81D4FA()), unk_0x56E414973C2A8C0E(iVar2)))
				{
					uVar3 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iVar2), 0);
					if (unk_0xFD5C5BBD1FE92BB7(uVar3, -1, 0) == unk_0x56E414973C2A8C0E(iVar2))
					{
						if (func_63(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_161(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0) && unk_0xFC8BFE4B41177C22(uParam1))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0) && !unk_0x1C2F771CDC87A3A5(iParam1, 0))
		{
			if (unk_0x7F420695E3F776FB(iParam0, 0) && unk_0x7F420695E3F776FB(iParam1, 0))
			{
				iVar0 = unk_0x6EF03BE64E058E2F(iParam0, 0);
				iVar1 = unk_0x6EF03BE64E058E2F(iParam1, 0);
				if (unk_0xFC8BFE4B41177C22(iVar0) && unk_0xFC8BFE4B41177C22(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_162(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_163(iParam0);
	if (func_30(iVar0))
	{
		if (iVar0 == func_163(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_163(int iParam0)
{
	if (func_30(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_43();
}

int func_164()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_171())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_170())
	{
		return 1;
	}
	if (func_169(159))
	{
		if (!func_168())
		{
			return 1;
		}
	}
	if (func_169(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_165() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_165()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_165()
{
	switch (func_167())
	{
		case 0:
			return func_166();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_166()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_167()
{
	return Global_32948;
}

bool func_168()
{
	return Global_2684504.f_700;
}

int func_169(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return Global_2696172;
}

bool func_171()
{
	return Global_2684504.f_695;
}

void func_172()
{
	if (unk_0xA0522491D076C1E6(false, 0) != 5)
	{
		if (func_179(5, 0, 1))
		{
			if (unk_0x594FD1B13DCC309E(0) <= 5)
			{
				unk_0x17C7D9B3979F5759(5);
			}
		}
	}
	if (unk_0xF46F370442FAD8F9(false, 0) != 3)
	{
		if (func_173(3, 0, 1))
		{
			if (unk_0x92D994BC2EF590F9(0) <= 3)
			{
				unk_0x552B3BADB43FF551(3);
			}
		}
	}
}

bool func_173(int iParam0, bool bParam1, bool bParam2)
{
	return func_174(1, iParam0, 1, bParam1, bParam2);
}

int func_174(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1681448, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_178(iParam0) - func_177(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_177(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_178(iParam0) - func_176(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_177(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_178(iParam0) - func_177(iParam0, 1));
		}
		if (!bParam4 && Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_175(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_175(int iParam0)
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

int func_176(int iParam0)
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

int func_177(int iParam0, bool bParam1)
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

int func_178(int iParam0)
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

bool func_179(int iParam0, bool bParam1, bool bParam2)
{
	return func_174(0, iParam0, 1, bParam1, bParam2);
}

void func_180()
{
	system::wait(0);
}

void func_181()
{
	int iVar0;
	
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (unk_0x93E08E0F531E2C35())
		{
			if (func_129())
			{
				func_130();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xC450B06E5AAA0985(Local_126.f_172[iVar0]))
		{
			unk_0xFE54B8568B2ABD12(&(Local_126.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_131)
	{
		unk_0xDAE61414743C8D1D(func_2());
		iLocal_131 = 0;
	}
	Global_1956832 = 0;
	func_183();
	func_182();
}

void func_182()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_183()
{
	if (!Local_126.f_176)
	{
		return;
	}
	if (unk_0x6252BC0DD8A320DB(joaat("s_m_y_marine_01")))
	{
		unk_0x55098D9E9AD58806(joaat("s_m_y_marine_01"));
	}
	if (unk_0x6252BC0DD8A320DB(joaat("lazer")))
	{
		unk_0x55098D9E9AD58806(joaat("lazer"));
	}
	if (unk_0x6252BC0DD8A320DB(joaat("s_m_y_pilot_01")))
	{
		unk_0x55098D9E9AD58806(joaat("s_m_y_pilot_01"));
	}
}

void func_184(struct<21> Param0)
{
	func_188(func_189(Param0.f_0), Param0);
	func_186(0, -1, 0);
	unk_0x17C7D9B3979F5759(5);
	unk_0x552B3BADB43FF551(3);
	unk_0x6F4A865F87C7A3AD(&Local_101, 27, 0);
	unk_0x7B13DC83218D9AF5(&Local_125, 257, 0);
	unk_0xAECC5FA98C879D67(0);
	if (!func_185())
	{
		func_181();
	}
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_181();
	}
	Global_2738934.f_6934 = 0;
}

int func_185()
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
		if (func_171())
		{
			return 0;
		}
		if (func_169(157))
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

int func_186(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_182();
			}
			else
			{
				return 0;
			}
		}
		if (!func_187(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_182();
					}
					else
					{
						return 0;
					}
				}
				if (func_171())
				{
					if (!bParam2)
					{
						func_182();
					}
					else
					{
						return 0;
					}
				}
				if (func_169(157))
				{
					if (!bParam2)
					{
						func_182();
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
					func_182();
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
				func_182();
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
			func_182();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_187(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_188(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_182();
	}
	unk_0xDB2434E51017FFCC(uParam0, 0, Param1.f_16);
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 197:
			return 32;
		
		case 198:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 209:
			return 32;
		
		case 210:
			return 32;
		
		case 199:
			return 32;
		
		case 200:
			return 32;
		
		case 204:
			return 32;
		
		case 202:
			return 32;
		
		case 203:
			return 32;
		
		case 207:
			return 32;
		
		case 208:
			return 32;
		
		case 205:
			return 32;
		
		case 206:
			return 32;
		
		case 211:
			return 32;
		
		case 212:
			return 32;
		
		case 213:
			return 32;
		
		case 214:
			return 32;
		
		case 215:
			return 2;
		
		case 220:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 4;
		
		case 218:
			return 2;
		
		case 219:
			return 2;
		
		case 201:
			return 1;
		
		case 221:
			return 2;
		
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
			return 0;
		
		case 243:
			return 1;
		
		case 228:
			return 4;
		
		case 231:
			return 4;
		
		case 232:
			return 1;
		
		case 233:
			return 1;
		
		case 239:
			return 1;
		
		case 235:
			return 2;
		
		case 240:
			return 1;
		
		case 236:
			return 1;
		
		case 234:
			return 2;
		
		case 237:
			return 8;
		
		case 238:
			return 8;
		
		case 241:
			return 1;
		
		case 242:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 179:
			return 1;
		
		case 196:
			return 1;
		
		case 229:
			return 16;
		
		case 230:
			return 32;
		
		default:
	}
	switch (func_190(func_191(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 314:
			return 0;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		case 322:
			return 0;
		
		case 323:
			return 2;
		
		case 324:
			return 0;
		
		case 325:
			return 0;
		
		case 326:
			return 0;
		
		case 327:
			return 0;
		
		case 328:
			return 0;
		
		case 329:
			return 0;
		
		case 330:
			return 0;
		
		case 331:
			return 0;
		
		case 332:
			return 0;
		
		case 333:
			return 0;
		
		case 337:
			return 0;
		
		case 338:
			return 0;
		
		case 339:
			return 0;
		
		case 340:
			return 0;
		
		default:
	}
	return -1;
}

int func_191(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 215:
			return 15;
		
		case 222:
			return 8;
		
		case 216:
			return 14;
		
		case 220:
			return 122;
		
		case 223:
			return 1;
		
		case 221:
			return 5;
		
		case 224:
			return 6;
		
		case 217:
			return 11;
		
		case 225:
			return 0;
		
		case 226:
			return 2;
		
		case 218:
			return 13;
		
		case 227:
			return 3;
		
		case 219:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 314;
		
		case 176:
			return 315;
		
		case 177:
			return 316;
		
		case 178:
			return 317;
		
		case 179:
			return 318;
		
		case 180:
			return 320;
		
		case 181:
			return 322;
		
		case 182:
			return 323;
		
		case 183:
			return 324;
		
		case 184:
			return 325;
		
		case 185:
			return 326;
		
		case 186:
			return 327;
		
		case 187:
			return 328;
		
		case 188:
			return 329;
		
		case 189:
			return 330;
		
		case 190:
			return 331;
		
		case 191:
			return 332;
		
		case 192:
			return 333;
		
		case 193:
			return 337;
		
		case 194:
			return 338;
		
		case 195:
			return 339;
		
		case 196:
			return 340;
		
		default:
	}
	if (bParam1)
	{
	}
	return 343;
}

