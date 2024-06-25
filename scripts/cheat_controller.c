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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	char* sLocal_68 = NULL;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	float fLocal_76 = 0f;
	int iLocal_77 = 0;
	int iLocal_78[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
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
	iLocal_44 = 1;
	iLocal_45 = 1;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = joaat("bmx");
	iLocal_71 = 300000;
	fLocal_76 = 1f;
	if (unk_0x96CFB880BAC634CE(34))
	{
		func_113();
	}
	Global_33198 = 0;
	Global_33197 = 0;
	Global_33199 = 0;
	Global_33200 = 0;
	Global_33202 = 0;
	Global_33201 = 0;
	func_112();
	while (true)
	{
		func_2();
		if (((unk_0x76CD105BCAC6EB9F() && func_1(unk_0x259BE71D8A81D4FA(), 1, 1)) && !Global_1836461) && Global_32948 == 0)
		{
			func_113();
		}
		system::wait(0);
	}
}

int func_1(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x75EAB09F5E974116(uParam0))
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

void func_2()
{
	func_88();
	func_68();
	func_22();
	func_3(iLocal_65);
}

void func_3(int iParam0)
{
	switch (iLocal_44)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (unk_0x4B7DCB210992A9F7())
			{
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_44 = 1;
			}
			else
			{
				func_20(iParam0);
			}
			break;
		
		case 4:
			func_4(iParam0);
			break;
		
		default:
			break;
	}
}

void func_4(int iParam0)
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	
	bVar2 = false;
	if (unk_0x6252BC0DD8A320DB(iParam0))
	{
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0xFC8BFE4B41177C22(iLocal_66))
			{
				if (!unk_0x1C2F771CDC87A3A5(iLocal_66, 0))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_66, 0))
					{
						Var0 = { unk_0xD1A6A821F5AC81DB(iLocal_66, 1) };
						fVar1 = unk_0xCFC0C995455A6204(iLocal_66);
						unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Var0.f_0, Var0.f_1, (Var0.f_2 + 4f), 1, 0, 0, 1);
						bVar2 = true;
					}
				}
				unk_0x8C1F7D7A31B2A38E(&iLocal_66);
			}
			if (!bVar2)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					Var0 = { unk_0x0D1381B6E0F3987D(unk_0x4A8C381C258A124D(), -1,5f, 3,5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					Var0 = { unk_0x0D1381B6E0F3987D(unk_0x4A8C381C258A124D(), 0f, 6f, 2f) };
				}
				else
				{
					Var0 = { unk_0x0D1381B6E0F3987D(unk_0x4A8C381C258A124D(), 0f, 3,5f, 1f) };
				}
				fVar1 = (unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D()) + 90f);
			}
			if (func_18(iParam0, Var0, fVar1))
			{
				iLocal_66 = unk_0x5779387E956077A6(iParam0, Var0, fVar1, 0, 1, 0);
				unk_0x1DE99C193C7EC64B(iLocal_66, 1084227584);
				unk_0x55098D9E9AD58806(iParam0);
				unk_0x68298CA6191CDFDB(&iLocal_66);
				func_16(sLocal_68);
				func_5(20);
			}
			else
			{
				unk_0x55098D9E9AD58806(iParam0);
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_44 = 1;
		}
	}
}

void func_5(int iParam0)
{
	if (!func_15(14) && !func_14(""))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_33199, iParam0);
		Global_33202 = 1;
		func_6();
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			func_7(joaat("sp0_times_cheated"), 1);
			break;
		
		case 1:
			func_7(joaat("sp1_times_cheated"), 1);
			break;
		
		case 2:
			func_7(joaat("sp2_times_cheated"), 1);
			break;
	}
}

void func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xDF7F16323520B858(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x1164A75E490C27B6(iParam0, iVar0, 1);
}

int func_8()
{
	func_9();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_9()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_12(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_11(unk_0x4A8C381C258A124D());
			if (func_10(iVar0) && (!func_15(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_10(Global_113969.f_2366.f_539.f_4321))
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

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return func_13(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_13(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

int func_14(char* sParam0)
{
	if (iLocal_82 != 0)
	{
		if (func_15(14) && unk_0x9390801B06EE998F())
		{
			if (unk_0x1B79E937E91F40C3(sParam0, "CHEAT_SUPER_JUMP") && unk_0x4B7DCB210992A9F7())
			{
				return 0;
			}
			if ((unk_0x1B79E937E91F40C3(sParam0, "CHEAT_GRAVITY_MOON") && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0)) && unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_16(char* sParam0)
{
	if (func_14(""))
	{
	}
	else
	{
		unk_0xCCDB0041859B85A6("CHEAT_ACTIVATED");
		unk_0xACF853FB3F6EA7D4(sParam0);
		func_17(unk_0x25ABFB435E16C7D9(0, 1));
		unk_0xDB98FB9902F6B17C(sParam0);
	}
}

void func_17(int iParam0)
{
	iLocal_78[iLocal_79] = iParam0;
	iLocal_79++;
	if (iLocal_79 >= 10)
	{
		iLocal_79 = 0;
	}
}

int func_18(int iParam0, struct<3> Param1, float fParam2)
{
	struct<3> Var0[9];
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	
	unk_0xC93BAF616F1C680F(iParam0, &Var1, &Var2);
	Var3.f_0 = (unk_0x1D5CD3EAAA7422B0((Var2.f_0 - Var1.f_0)) / 2f);
	Var3.f_1 = (unk_0x1D5CD3EAAA7422B0((Var2.f_1 - Var1.f_1)) / 2f);
	Var3.f_2 = (unk_0x1D5CD3EAAA7422B0((Var2.f_2 - Var1.f_2)) / 2f);
	Var0[0 /*3*/] = { Param1 };
	Var0[1 /*3*/] = { unk_0xF10F2A2453AF1DFB(Param1, fParam2, -Var3.f_0, -Var3.f_1, -Var3.f_2) };
	Var0[2 /*3*/] = { unk_0xF10F2A2453AF1DFB(Param1, fParam2, Var3.f_0, -Var3.f_1, -Var3.f_2) };
	Var0[3 /*3*/] = { unk_0xF10F2A2453AF1DFB(Param1, fParam2, Var3.f_0, Var3.f_1, -Var3.f_2) };
	Var0[4 /*3*/] = { unk_0xF10F2A2453AF1DFB(Param1, fParam2, -Var3.f_0, Var3.f_1, -Var3.f_2) };
	Var0[5 /*3*/] = { unk_0xF10F2A2453AF1DFB(Param1, fParam2, -Var3.f_0, -Var3.f_1, Var3.f_2) };
	Var0[6 /*3*/] = { unk_0xF10F2A2453AF1DFB(Param1, fParam2, Var3.f_0, -Var3.f_1, Var3.f_2) };
	Var0[7 /*3*/] = { unk_0xF10F2A2453AF1DFB(Param1, fParam2, Var3.f_0, Var3.f_1, Var3.f_2) };
	Var0[8 /*3*/] = { unk_0xF10F2A2453AF1DFB(Param1, fParam2, -Var3.f_0, Var3.f_1, Var3.f_2) };
	if (!unk_0x7830326EF9D54DBB(Param1))
	{
		return 0;
	}
	uVar13 = unk_0x14C30F326F5883DA(func_19(unk_0x259BE71D8A81D4FA()) + Vector(1f, 0f, 0f), Param1, 87, unk_0x4A8C381C258A124D(), 0);
	unk_0x0E7DD1EBCA8D2DE3(uVar13, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	uVar7 = unk_0x14C30F326F5883DA(Var0[1 /*3*/], Var0[3 /*3*/], 87, unk_0x4A8C381C258A124D(), 0);
	unk_0x0E7DD1EBCA8D2DE3(uVar7, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	uVar8 = unk_0x14C30F326F5883DA(Var0[2 /*3*/], Var0[4 /*3*/], 87, unk_0x4A8C381C258A124D(), 0);
	unk_0x0E7DD1EBCA8D2DE3(uVar8, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	uVar9 = unk_0x14C30F326F5883DA(Var0[5 /*3*/], Var0[7 /*3*/], 87, unk_0x4A8C381C258A124D(), 0);
	unk_0x0E7DD1EBCA8D2DE3(uVar9, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	uVar10 = unk_0x14C30F326F5883DA(Var0[6 /*3*/], Var0[8 /*3*/], 87, unk_0x4A8C381C258A124D(), 0);
	unk_0x0E7DD1EBCA8D2DE3(uVar10, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	uVar11 = unk_0x14C30F326F5883DA(Var0[1 /*3*/], Var0[8 /*3*/], 87, unk_0x4A8C381C258A124D(), 0);
	unk_0x0E7DD1EBCA8D2DE3(uVar11, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	uVar12 = unk_0x14C30F326F5883DA(Var0[2 /*3*/], Var0[7 /*3*/], 87, unk_0x4A8C381C258A124D(), 0);
	unk_0x0E7DD1EBCA8D2DE3(uVar12, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_19(var uParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(uParam0), 0);
}

void func_20(int iParam0)
{
	if (unk_0xE7D342E0F16AAA8F(uParam0))
	{
		unk_0xEC9DAA34BBB4658C(uParam0);
		if (unk_0x6252BC0DD8A320DB(uParam0))
		{
			iLocal_44 = 4;
		}
	}
}

void func_21(char* sParam0)
{
	if (!func_15(14))
	{
		unk_0xCCDB0041859B85A6("CHEAT_DENIED");
		unk_0xACF853FB3F6EA7D4(sParam0);
		func_17(unk_0x25ABFB435E16C7D9(0, 1));
	}
}

void func_22()
{
	func_65();
	func_64();
	func_45();
	func_44();
	func_43();
	func_39();
	func_36();
	func_32();
	func_23();
}

void func_23()
{
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 4:
			func_31(19, 1);
			func_30();
			break;
		
		case 5:
			if ((((!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_28()) || func_27(23)) || func_27(21)) || func_27(19))
			{
				iLocal_64 = 9;
				return;
			}
			func_25();
			break;
		
		case 9:
			func_24("CHEAT_AIM_SLOW_MO");
			func_31(19, 0);
			unk_0xE6AC149D1121535D(1f);
			iLocal_75 = 0;
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_24(char* sParam0)
{
	if (func_14(sParam0))
	{
	}
	else
	{
		unk_0xCCDB0041859B85A6("CHEAT_DEACTIVATED");
		unk_0xACF853FB3F6EA7D4(sParam0);
		func_17(unk_0x25ABFB435E16C7D9(0, 1));
	}
}

void func_25()
{
	if (unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x6D05C5731A838CB3(2, 25))
		{
			if (func_26(unk_0x4A8C381C258A124D()) != joaat("weapon_unarmed") && func_26(unk_0x4A8C381C258A124D()) != joaat("object"))
			{
				unk_0xE6AC149D1121535D(fLocal_76);
			}
			else
			{
				unk_0xE6AC149D1121535D(1f);
			}
		}
		else
		{
			unk_0xE6AC149D1121535D(1f);
		}
	}
}

int func_26(int iParam0)
{
	var uVar0;
	
	unk_0x23B29877D0BE9547(iParam0, &uVar0, 1);
	return uVar0;
}

int func_27(bool bParam0)
{
	if (BitTest(Global_33197, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_28()
{
	if (((((((func_15(0) || func_15(11)) || func_15(4)) || func_15(9)) || func_15(10)) || func_15(3)) || func_15(2)) || func_29(35))
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_58[iParam0];
}

void func_30()
{
	iLocal_75++;
	if (iLocal_75 > 3)
	{
		iLocal_75 = 0;
		iLocal_64 = 9;
		return;
	}
	switch (iLocal_75)
	{
		case 1:
			func_16("CHEAT_AIM_SLOW_MO1");
			fLocal_76 = 0,6f;
			break;
		
		case 2:
			func_16("CHEAT_AIM_SLOW_MO2");
			fLocal_76 = 0,4f;
			break;
		
		case 3:
			func_16("CHEAT_AIM_SLOW_MO3");
			fLocal_76 = 0,2f;
			break;
		
		default:
			break;
	}
	iLocal_64 = 5;
}

void func_31(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_33198, bParam0);
		func_5(bParam0);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_33198, bParam0);
	}
}

void func_32()
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_31(16, 1);
			func_35();
			break;
		
		case 5:
			unk_0x66EFB3D6110055C4(2, 37, 1);
			unk_0x66EFB3D6110055C4(2, 19, 1);
			if ((((((((!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_28()) || func_34()) || func_33(1)) || unk_0xDEE3EFEA31A1F555(2, 37)) || unk_0xDEE3EFEA31A1F555(2, 19)) || func_27(23)) || func_27(21)) || func_27(16))
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			unk_0x66EFB3D6110055C4(2, 37, 1);
			unk_0x66EFB3D6110055C4(2, 19, 1);
			func_24("CHEAT_SLOW_MO");
			func_31(16, 0);
			iLocal_74 = 0;
			unk_0xE6AC149D1121535D(1f);
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

bool func_33(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23692.f_4 && Global_23692.f_104 == 4);
	}
	return Global_23692.f_4;
}

int func_34()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

void func_35()
{
	iLocal_74++;
	if (iLocal_74 > 3)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_74)
	{
		case 1:
			func_16("CHEAT_SLOW_MO1");
			unk_0xE6AC149D1121535D(0,6f);
			break;
		
		case 2:
			func_16("CHEAT_SLOW_MO2");
			unk_0xE6AC149D1121535D(0,4f);
			break;
		
		case 3:
			func_16("CHEAT_SLOW_MO3");
			unk_0xE6AC149D1121535D(0,2f);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_36()
{
	struct<3> Var0;
	var uVar1;
	float fVar2;
	
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 2:
			func_31(17, 1);
			unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
			unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 1);
			unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0xB41DEC3AAC1AA107(unk_0x4A8C381C258A124D(), joaat("gadget_parachute"), 1, 0, 1);
			Var0 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
			uVar1 = unk_0xCFC0C995455A6204(unk_0x4A8C381C258A124D());
			unk_0xB1EAADCB692D69CE(Var0, &fVar2, 0, 0);
			fVar2 = (fVar2 + 500f);
			unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), Var0.f_0, Var0.f_1, fVar2, 1, 0, 0, 1);
			unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), uVar1);
			iLocal_70 = unk_0x1DD05E817C89C737();
			unk_0x8F72AF14CE5AACE4(0);
			iLocal_62 = 3;
			break;
		
		case 3:
			if (func_38(1000, iLocal_70))
			{
				unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
				iLocal_70 = unk_0x1DD05E817C89C737();
				iLocal_62 = 4;
			}
			break;
		
		case 4:
			if (func_38(1000, iLocal_70))
			{
				unk_0x66EFB3D6110055C4(0, 144, 1);
				unk_0x66EFB3D6110055C4(0, 149, 1);
				if (func_8() == 0)
				{
					unk_0xD1C578C204015E1F(unk_0x4A8C381C258A124D(), 9, 0, 0, 0);
				}
				else
				{
					unk_0xD1C578C204015E1F(unk_0x4A8C381C258A124D(), 8, 0, 0, 0);
				}
				unk_0x10B228D2FDB7AF16(250);
				iLocal_70 = unk_0x1DD05E817C89C737();
				func_16("CHEAT_SKYFALL");
				unk_0xF6ECB54A7941386F(2);
				iLocal_62 = 5;
			}
			break;
		
		case 5:
			if ((((!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_28()) || func_27(23)) || func_27(21)) || func_27(17))
			{
				iLocal_62 = 9;
				break;
			}
			unk_0x66EFB3D6110055C4(0, 144, 1);
			unk_0x4EB223432F8FA0A0(2);
			if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
			{
				unk_0xE592D924D5438108(unk_0x4A8C381C258A124D(), 1, 0f, 200f, 2,5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (unk_0x14E25ED5E75102C8(unk_0x4A8C381C258A124D()))
				{
					iLocal_62 = 9;
				}
			}
			else
			{
				iLocal_62 = 9;
			}
			break;
		
		case 9:
			func_37();
			func_24("CHEAT_SKYFALL");
			func_31(17, 0);
			iLocal_62 = 1;
			break;
		
		default:
			break;
	}
}

void func_37()
{
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x4F07124B9C56ED6F(unk_0x4A8C381C258A124D(), joaat("gadget_parachute"));
	}
	if (iLocal_60 != 5)
	{
		unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 0);
		unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	unk_0xF6ECB54A7941386F(0);
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x1DD05E817C89C737();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	struct<3> Var0;
	
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_INVINCIBILITY");
			func_31(15, 1);
			iLocal_60 = 5;
			iLocal_72 = unk_0x1DD05E817C89C737();
			unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 1);
			unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 1, 1, 1, 1, 1, 0, 0, 0);
			break;
		
		case 5:
			if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				iLocal_60 = 9;
				return;
			}
			Var0 = { func_19(unk_0x259BE71D8A81D4FA()) };
			if (((((func_28() || func_34()) || func_27(23)) || func_27(21)) || func_27(15)) || Var0.f_2 <= -170f)
			{
				iLocal_60 = 9;
				return;
			}
			iLocal_73 = (unk_0x1DD05E817C89C737() - iLocal_72);
			if (unk_0x486FF5D06E9659F1(joaat("appinternet")) == 0)
			{
				func_40((iLocal_71 - iLocal_73), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			if (iLocal_73 >= (iLocal_71 - 1000))
			{
				iLocal_60 = 9;
				return;
			}
			unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 1);
			unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 1, 1, 1, 1, 1, 0, 0, 0);
			unk_0xB2C27348224E729C();
			break;
		
		case 9:
			func_24("CHEAT_INVINCIBILITY_OFF");
			func_31(15, 0);
			iLocal_60 = 1;
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 0);
				unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_42(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_41(7, iVar0);
		Global_1670224.f_4714[iVar0] = iParam0;
		StringCopy(&(Global_1670224.f_4714.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4714.f_172[iVar0] = iParam2;
		Global_1670224.f_4714.f_216[iVar0] = iParam3;
		Global_1670224.f_4714.f_183[iVar0] = iParam4;
		Global_1670224.f_4714.f_194[iVar0] = iParam5;
		Global_1670224.f_4714.f_249[iVar0] = iParam6;
		Global_1670224.f_4714.f_260[iVar0] = iParam7;
		Global_1670224.f_4714.f_205[iVar0] = iParam8;
		Global_1670224.f_4714.f_314[iVar0] = iParam9;
		Global_1670224.f_4714.f_325[iVar0] = iParam10;
		Global_1670224.f_4714.f_357[iVar0] = iParam11;
		Global_1670224.f_4714.f_238[iVar0] = iParam12;
		Global_1670224.f_4714.f_271[iVar0] = iParam13;
		Global_1670224.f_4714.f_368[iVar0] = iParam14;
		Global_1670224.f_4714.f_379[iVar0] = iParam15;
		Global_1670224.f_4714.f_390[iVar0] = iParam16;
		Global_1670224.f_4714.f_227[iVar0] = iParam17;
	}
}

void func_41(int iParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1670224.f_7064[iParam0]), iParam1);
}

int func_42(int iParam0, int iParam1)
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

void func_43()
{
	switch (iLocal_57)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FLAMING_BULLETS");
			func_31(12, 1);
			iLocal_57 = 5;
			break;
		
		case 5:
			if (((!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_27(23)) || func_27(21)) || func_27(12))
			{
				iLocal_57 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_57 = 9;
				return;
			}
			unk_0x6966C09904B48D54(unk_0x259BE71D8A81D4FA());
			break;
		
		case 9:
			func_24("CHEAT_FLAMING_BULLETS");
			func_31(12, 0);
			iLocal_57 = 1;
			break;
		
		default:
			break;
	}
}

void func_44()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_EXPLOSIVE_MELEE");
			func_31(13, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if ((((!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_27(23)) || func_27(21)) || func_27(13)) || func_28())
			{
				iLocal_58 = 9;
				return;
			}
			unk_0x7F2AA4BA999DE234(unk_0x259BE71D8A81D4FA());
			break;
		
		case 9:
			func_24("CHEAT_EXPLOSIVE_MELEE");
			func_31(13, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_45()
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_DRUNK");
			func_31(18, 1);
			func_60(unk_0x4A8C381C258A124D());
			func_58(30000, 1050253722, 1065353216, 0);
			iLocal_63 = 5;
			break;
		
		case 5:
			if ((((func_28() || !unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA())) || func_27(23)) || func_27(21)) || func_27(18))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			func_24("CHEAT_DRUNK");
			func_31(18, 0);
			func_49(unk_0x4A8C381C258A124D());
			func_48(1000);
			iLocal_63 = 1;
			break;
		
		case 10:
			func_46(1);
			func_31(18, 0);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

void func_46(bool bParam0)
{
	unk_0x9B669C0440D2AB57(0f);
	unk_0xC30B691CAD767629(0f);
	unk_0xB3CAD109683148E3(0f);
	unk_0x9AFEC71EEA2F7754(1);
	unk_0xAD0E20104A60B568(0f);
	unk_0xDB37962FDFC63FD7(1);
	unk_0xC5EE3F8EC7822462(0);
	if (unk_0xBC2EE32DE886BD08("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xB43467C43086A6A1("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xD6F9DEE4765092A9(&Global_45228))
	{
		if (unk_0xBC2EE32DE886BD08(&Global_45228))
		{
			unk_0xB43467C43086A6A1(&Global_45228);
		}
	}
	if (unk_0x78411E34CF90EA8C(Global_45216))
	{
		if (unk_0xDD87838D03B64B0A(Global_45216))
		{
			unk_0x17F06E9D89A05855(Global_45216, 0f);
			unk_0x584EE85BE0BFA70E(Global_45216, 1);
		}
	}
	if (unk_0x12B42434831D668E())
	{
		unk_0xB9AB3B8920F1AA69(0);
	}
	if (bParam0)
	{
		if (unk_0x8960847E5FD7B48F() != -1 || unk_0x765B41E82372AA97() != -1)
		{
			unk_0x80F87A4A3B930613();
		}
		else if (unk_0x3555462DB47B7AB1())
		{
			unk_0x80F87A4A3B930613();
		}
	}
	Global_45223 = 0f;
	StringCopy(&Global_45224, "", 16);
	StringCopy(&Global_45228, "", 64);
	StringCopy(&Global_45244, "", 16);
	func_47();
}

void func_47()
{
	Global_45215 = 0;
	Global_45216 = 0;
	Global_45217 = 0;
	Global_45218 = 30000;
	Global_45219 = 0f;
	Global_45221 = 0f;
	Global_45220 = 0f;
	Global_45222 = 1f;
	Global_45223 = 0f;
	StringCopy(&Global_45224, "", 16);
}

void func_48(int iParam0)
{
	int iVar0;
	
	if (!Global_45215)
	{
		return;
	}
	iVar0 = unk_0x1DD05E817C89C737();
	Global_45217 = (iVar0 + iParam0);
	Global_45218 = iParam0;
}

void func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return;
	}
	iVar0 = func_57(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_45036[iVar0 /*5*/];
		func_52(1, iVar1, 1);
		return;
	}
	iVar2 = func_51(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_50(iVar2);
}

void func_50(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_45005[iParam0 /*6*/].f_1 == 0)
	{
		if (Global_45005[iParam0 /*6*/].f_1 == unk_0x4A8C381C258A124D())
		{
			Global_45248 = 0;
		}
	}
	Global_45005[iParam0 /*6*/] = 13;
	Global_45005[iParam0 /*6*/].f_1 = 0;
	Global_45005[iParam0 /*6*/].f_2 = 0;
	Global_45005[iParam0 /*6*/].f_3 = 0;
	Global_45005[iParam0 /*6*/].f_4 = 0;
	Global_45003 = (Global_45003 - 1);
	if (Global_45003 < 0)
	{
		Global_45003 = 0;
	}
}

int func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_45005[iVar0 /*6*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	func_53(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_55(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_54();
	if (iVar0 == -1)
	{
		return;
	}
	Global_45117[iVar0 /*6*/] = iParam0;
	Global_45117[iVar0 /*6*/].f_1 = iParam1;
	Global_45117[iVar0 /*6*/].f_2 = iParam2;
	Global_45117[iVar0 /*6*/].f_3 = iParam3;
	Global_45117[iVar0 /*6*/].f_4 = iParam4;
	Global_45117[iVar0 /*6*/].f_5 = iParam5;
}

int func_54()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_45117[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	if (func_56(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_45117[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_45117[iVar0 /*6*/])
			{
				if (iParam1 == Global_45117[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_45036[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_45036[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_58(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_59(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_59(int iParam0, var uParam1, float fParam2, float fParam3, var uParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_4)
	{
		return;
	}
	if (Global_45215)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0x7F2356076C3D052D())
	{
		unk_0xD5681045964A2975("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0x0E9A1CE27A31950D())
	{
		unk_0xE31C735DEE2BF705("DRUNK_SHAKE", (fParam3 * Global_45214));
	}
	if (unk_0x78411E34CF90EA8C(uParam4))
	{
		unk_0x2A09425009DAD0F5(uParam4, "DRUNK_SHAKE", fParam3);
		Global_45216 = uParam4;
	}
	else
	{
		Global_45216 = 0;
	}
	Global_45215 = 1;
	iVar0 = unk_0x1DD05E817C89C737();
	Global_45217 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_45217 = -1;
		}
	}
	Global_45218 = uParam1;
	Global_45219 = fParam2;
	Global_45221 = fParam3;
	Global_45220 = fParam3;
}

int func_60(int iParam0)
{
	return func_61(iParam0, -1, 1, -1082130432);
}

int func_61(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	iVar0 = func_63(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_51(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_62();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_45005[iVar2 /*6*/] = 0;
	Global_45005[iVar2 /*6*/].f_1 = iParam0;
	Global_45005[iVar2 /*6*/].f_2 = iParam1;
	Global_45005[iVar2 /*6*/].f_3 = iParam1;
	Global_45005[iVar2 /*6*/].f_4 = 0;
	Global_45005[iVar2 /*6*/].f_5 = iParam3;
	if (iParam0 == unk_0x4A8C381C258A124D())
	{
		Global_45248 = 1;
	}
	Global_45003++;
	return 1;
}

int func_62()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_45005[iVar0 /*6*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_45036[iVar0 /*5*/].f_1)
		{
			return Global_45036[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_64()
{
	switch (iLocal_56)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_BANG_BANG");
			func_31(11, 1);
			iLocal_56 = 5;
			break;
		
		case 5:
			if (((!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_27(23)) || func_27(21)) || func_27(11))
			{
				iLocal_56 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_56 = 9;
				return;
			}
			unk_0x35A960C1E2064D55(unk_0x259BE71D8A81D4FA());
			break;
		
		case 9:
			func_24("CHEAT_BANG_BANG");
			func_31(11, 0);
			iLocal_56 = 1;
			break;
		
		default:
			break;
	}
}

void func_65()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_5(14);
			func_31(14, 1);
			func_67();
			break;
		
		case 5:
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if ((((((!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_28()) || func_27(23)) || func_27(21)) || func_27(14)) || func_66(17)) || unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
				{
					iLocal_59 = 9;
				}
			}
			else
			{
				iLocal_59 = 9;
			}
			break;
		
		case 9:
			func_24("CHEAT_GRAVITY_MOON");
			func_31(14, 0);
			unk_0x446CF90BF0024020(0);
			iLocal_77 = 0;
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

int func_66(bool bParam0)
{
	if (BitTest(Global_33198, bParam0))
	{
		return 1;
	}
	return 0;
}

void func_67()
{
	iLocal_77++;
	if (iLocal_77 > 1)
	{
		iLocal_59 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_16("CHEAT_GRAVITY_MOON");
			unk_0x446CF90BF0024020(1);
			break;
		
		default:
			break;
	}
	iLocal_59 = 5;
}

void func_68()
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_74();
	func_73();
	func_72();
	func_69();
}

void func_69()
{
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_27(23) || func_27(22)) || func_27(10))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			func_16("CHEAT_GIVE_PARACHUTE");
			unk_0xB41DEC3AAC1AA107(unk_0x4A8C381C258A124D(), joaat("gadget_parachute"), 1, 1, 1);
			func_5(10);
		}
	}
}

int func_70()
{
	if (iLocal_81)
	{
		iLocal_81 = 0;
		return 0;
	}
	if (func_71(0))
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
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

void func_72()
{
	int iVar0;
	
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((func_27(23) || func_27(22)) || func_27(9))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0xD6436470CD2C1484() == 0)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());
			if (iVar0 > 0)
			{
				func_16("CHEAT_WANTED_DOWN");
				unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), (iVar0 - 1), 0);
				func_5(9);
			}
			else
			{
				func_21("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_73()
{
	int iVar0;
	
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((func_27(23) || func_27(22)) || func_27(8))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (unk_0xD6436470CD2C1484() == 0)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA());
			if (iVar0 < unk_0xD6436470CD2C1484())
			{
				unk_0xE20A252886E4FE1D(unk_0x259BE71D8A81D4FA(), iVar0 + 1, 0);
				unk_0x42C9A22D6724F283(unk_0x259BE71D8A81D4FA(), 0);
				func_16("CHEAT_WANTED_UP");
				func_5(8);
			}
			else
			{
				func_21("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_74()
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((((((func_27(23) || func_27(22)) || func_27(7)) || func_15(9)) || func_15(10)) || !unk_0x10140D9546976B7F(func_75())) || !unk_0x3BBF563E688265AF(unk_0x259BE71D8A81D4FA(), 0))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x15263A2A8A135DF3(unk_0x259BE71D8A81D4FA(), 1, 0);
			func_16("CHEAT_SPECIAL_ABILITY");
			func_5(7);
		}
	}
}

int func_75()
{
	return unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D());
}

void func_76()
{
	int iVar0;
	
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((((func_27(23) || func_27(22)) || func_27(6)) || func_15(9)) || func_15(10))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			func_16("CHEAT_HEALTH_ARMOR");
			func_5(6);
			unk_0xD25E9BDC14A0B649(unk_0x4A8C381C258A124D(), unk_0xF8A78594664D23A6(unk_0x4A8C381C258A124D()), 0, 0);
			unk_0x2E20E7B6C4BBA61D(unk_0x4A8C381C258A124D(), (unk_0xD69C6BA96938C9C1(unk_0x259BE71D8A81D4FA()) - unk_0xE5E6F6EFCE07789A(unk_0x4A8C381C258A124D())));
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0xCDA725BC2F170795(unk_0x4A8C381C258A124D());
				if (unk_0xFC8BFE4B41177C22(iVar0))
				{
					if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
					{
						unk_0xF698038C13845696(iVar0);
					}
				}
			}
		}
	}
}

void func_77()
{
	if (iLocal_50 == 4)
	{
		iLocal_50 = 1;
		if ((func_27(23) || func_27(22)) || func_27(5))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_5(5);
		switch (iLocal_69)
		{
			case 0:
				iLocal_69 = 1;
			
			case 1:
				unk_0xE38A58649E049502("EXTRASUNNY");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_69 = 2;
				break;
			
			case 2:
				unk_0xE38A58649E049502("CLEAR");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_69 = 3;
				break;
			
			case 3:
				unk_0xE38A58649E049502("CLOUDS");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_69 = 4;
				break;
			
			case 4:
				unk_0xE38A58649E049502("SMOG");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_69 = 6;
				break;
			
			case 6:
				unk_0xE38A58649E049502("OVERCAST");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_69 = 7;
				break;
			
			case 7:
				unk_0xE38A58649E049502("RAIN");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_RAIN");
				func_31(5, 1);
				iLocal_69 = 8;
				break;
			
			case 8:
				unk_0xE38A58649E049502("THUNDER");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_69 = 9;
				break;
			
			case 9:
				unk_0xE38A58649E049502("CLEARING");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_69 = 11;
				break;
			
			case 11:
				unk_0xE38A58649E049502("XMAS");
				unk_0xA21EFB60FCA3D0F6();
				func_16("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_69 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_78()
{
	if (iLocal_49 == 4)
	{
		iLocal_49 = 1;
		if ((func_27(23) || func_27(22)) || func_27(4))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_16("CHEAT_GIVE_WEAPONS");
		func_5(4);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x4BD3F83B0D7E1417(unk_0x4A8C381C258A124D(), joaat("weapon_knife"), -1, 0);
			unk_0x4BD3F83B0D7E1417(unk_0x4A8C381C258A124D(), joaat("weapon_smg"), 300, 0);
			unk_0x4BD3F83B0D7E1417(unk_0x4A8C381C258A124D(), joaat("weapon_assaultrifle"), 300, 1);
			unk_0x4BD3F83B0D7E1417(unk_0x4A8C381C258A124D(), joaat("weapon_pumpshotgun"), 150, 0);
			unk_0x4BD3F83B0D7E1417(unk_0x4A8C381C258A124D(), joaat("weapon_sniperrifle"), 30, 0);
			unk_0x4BD3F83B0D7E1417(unk_0x4A8C381C258A124D(), joaat("weapon_grenade"), 5, 0);
			unk_0x4BD3F83B0D7E1417(unk_0x4A8C381C258A124D(), joaat("weapon_rpg"), 5, 0);
		}
	}
}

void func_79()
{
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FAST_SWIM");
			func_31(3, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_27(23)) || func_27(22)) || func_27(3))
			{
				iLocal_48 = 9;
			}
			else
			{
				unk_0x289497A4BA9049E0(unk_0x259BE71D8A81D4FA(), 1,49f);
				unk_0xB2C27348224E729C();
			}
			break;
		
		case 9:
			unk_0x289497A4BA9049E0(unk_0x259BE71D8A81D4FA(), 1f);
			func_24("CHEAT_FAST_SWIM");
			func_31(3, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FAST_RUN");
			func_31(2, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D())) || func_27(23)) || func_27(22)) || func_27(2))
			{
				iLocal_47 = 9;
			}
			else
			{
				if (unk_0x24433628C02BED5F(unk_0x4A8C381C258A124D()) || (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()) && !unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())))
				{
					unk_0xA52E1AE3848A506B(unk_0x259BE71D8A81D4FA(), 1,49f);
				}
				else
				{
					unk_0xA52E1AE3848A506B(unk_0x259BE71D8A81D4FA(), 1f);
				}
				unk_0xB2C27348224E729C();
			}
			break;
		
		case 9:
			unk_0xA52E1AE3848A506B(unk_0x259BE71D8A81D4FA(), 1f);
			func_24("CHEAT_FAST_RUN");
			func_31(2, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_81()
{
	int iVar0;
	
	switch (iLocal_46)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_SLIDEY_CARS");
			func_31(1, 1);
			iLocal_46 = 5;
			break;
		
		case 5:
			if (((!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_27(23)) || func_27(22)) || func_27(1))
			{
				iLocal_46 = 9;
			}
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if (!unk_0x1C2F771CDC87A3A5(iVar0, 0))
				{
					if (unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) == unk_0x4A8C381C258A124D())
					{
						if (iLocal_67 == 0)
						{
							iLocal_67 = iVar0;
							if (!unk_0x1C2F771CDC87A3A5(iLocal_67, 0))
							{
								if (func_82(1))
								{
									unk_0xF8EC8E90E8D24CA7(iLocal_67, 1);
								}
								else
								{
									iLocal_67 = 0;
								}
							}
						}
						else if (iLocal_67 != iVar0)
						{
							if (!unk_0x1C2F771CDC87A3A5(iLocal_67, 0))
							{
								unk_0xF8EC8E90E8D24CA7(iLocal_67, 0);
							}
							iLocal_67 = 0;
						}
					}
				}
			}
			break;
		
		case 9:
			func_24("CHEAT_SLIDEY_CARS");
			iLocal_46 = 10;
			break;
		
		case 10:
			if (!unk_0x1C2F771CDC87A3A5(iLocal_67, 0))
			{
				unk_0xF8EC8E90E8D24CA7(iLocal_67, 0);
				iLocal_67 = 0;
			}
			func_31(1, 0);
			iLocal_46 = 1;
			break;
		
		default:
			break;
	}
}

int func_82(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		uVar0 = unk_0xDC8D5832207C2EAD();
		if (unk_0xFC8BFE4B41177C22(uVar0))
		{
			if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
			{
				iVar1 = unk_0x4B423FAA24E8ABF0(iVar0);
				iVar2 = func_8();
				if (iParam0 & 1 != 0)
				{
					if (!unk_0xD3CE8D1E6564B011(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!unk_0x78B050AFBA6D1517(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!unk_0xBA16CD57E37AC32A(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!unk_0xEA4F815FDC353FEF(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (unk_0x365DC1E8054AF31A(iVar0, "door_dside_r") != -1 || unk_0x365DC1E8054AF31A(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (unk_0x365DC1E8054AF31A(iVar0, "door_dside_r") == -1 || unk_0x365DC1E8054AF31A(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (unk_0x78B050AFBA6D1517(iVar1))
					{
						if (unk_0x365DC1E8054AF31A(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (unk_0x365DC1E8054AF31A(iVar0, "seat_dside_r") != -1 || unk_0x365DC1E8054AF31A(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (unk_0x365DC1E8054AF31A(iVar0, "seat_dside_r") == -1 || unk_0x365DC1E8054AF31A(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_10(iVar2))
					{
						return 0;
					}
					if (func_85(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!unk_0xD3CE8D1E6564B011(iVar1) && !unk_0x78B050AFBA6D1517(iVar1))
					{
						return 0;
					}
					if (unk_0x9E20DC08879FF3FC(iVar0))
					{
						return 0;
					}
					uVar4 = unk_0xED22194AB8539910(iVar0, &uVar3);
					if (!unk_0xD6F9DEE4765092A9(uVar4))
					{
						if (unk_0x70E57E9927B6BA58(uVar4) == unk_0x70E57E9927B6BA58("taxiService"))
						{
							return 0;
						}
					}
					if (func_83(iVar0, iVar2, 0))
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

int func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xFC8BFE4B41177C22(uParam0) || !unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_84(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113969.f_7232[iVar2], 0))
		{
			if (unk_0xFE448E8C2209CA31(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_84(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_85(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_86(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_86(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113969.f_9088.f_99.f_58[128] && !Global_113969.f_9088.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113969.f_9088.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113969.f_9088.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_87()
{
	switch (iLocal_45)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_SUPER_JUMP");
			func_31(0, 1);
			iLocal_45 = 5;
			break;
		
		case 5:
			if ((((!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()) || func_27(23)) || func_27(22)) || func_27(0)) || unk_0x4B7DCB210992A9F7())
			{
				iLocal_45 = 9;
				return;
			}
			unk_0x353BF8D85390AA39(unk_0x259BE71D8A81D4FA());
			unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 217, 1);
			break;
		
		case 9:
			func_24("CHEAT_SUPER_JUMP");
			func_31(0, 0);
			iLocal_45 = 1;
			break;
		
		default:
			break;
	}
}

void func_88()
{
	if ((func_111() || iLocal_82 != 0) || func_15(14))
	{
		unk_0x66EFB3D6110055C4(2, 243, 1);
	}
	func_110();
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return;
	}
	if (unk_0x7FB6C108C1694163(unk_0x4A8C381C258A124D()))
	{
		return;
	}
	if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		return;
	}
	if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
	{
		return;
	}
	if (func_34() || unk_0x3555462DB47B7AB1())
	{
		return;
	}
	if (func_109())
	{
		if (!iLocal_80)
		{
			func_108();
			iLocal_80 = 1;
		}
		return;
	}
	iLocal_80 = 0;
	iLocal_81 = 0;
	if ((func_107(988027572, 12) || unk_0x4590C086096F07D8(joaat("buzzoff"))) || func_106(20, joaat("buzzard")))
	{
		func_103(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_107(-1134279030, 11) || unk_0x4590C086096F07D8(joaat("bandit"))) || func_106(20, joaat("bmx")))
	{
		func_103(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_107(971352167, 10) || unk_0x4590C086096F07D8(joaat("holein1"))) || func_106(20, joaat("caddy")))
	{
		func_103(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_107(-269863225, 10) || unk_0x4590C086096F07D8(joaat("comet"))) || func_106(20, joaat("comet2")))
	{
		func_103(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_107(458579068, 12) || unk_0x4590C086096F07D8(joaat("flyspray"))) || func_106(20, joaat("duster")))
	{
		func_103(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_107(-666513193, 12) || unk_0x4590C086096F07D8(joaat("rocket"))) || func_106(20, joaat("pcj")))
	{
		func_103(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_107(-1245984749, 10) || unk_0x4590C086096F07D8(joaat("rapidgt"))) || func_106(20, joaat("rapidgt")))
	{
		func_103(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_107(2076774618, 12) || unk_0x4590C086096F07D8(joaat("offroad"))) || func_106(20, joaat("sanchez")))
	{
		func_103(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_107(855685457, 9) || unk_0x4590C086096F07D8(joaat("vinewood"))) || func_106(20, joaat("stretch")))
	{
		func_103(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_107(-591395876, 12) || unk_0x4590C086096F07D8(joaat("barnstorm"))) || func_106(20, joaat("stunt")))
	{
		func_103(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_107(-1399217582, 10) || unk_0x4590C086096F07D8(joaat("trashed"))) || func_106(20, joaat("trash")))
	{
		func_103(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_102())
	{
		if ((func_107(-375917581, 10) || unk_0x4590C086096F07D8(joaat("extinct"))) || func_106(20, joaat("dodo")))
		{
			func_103(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_107(-2124307881, 10) || unk_0x4590C086096F07D8(joaat("deathcar"))) || func_106(20, joaat("dukes2")))
		{
			func_103(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_107(1028964594, 9) || unk_0x4590C086096F07D8(joaat("bubbles"))) || func_106(20, joaat("submersible2")))
		{
			func_103(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_107(-393416581, 11) || unk_0x4590C086096F07D8(joaat("hoptoit"))) || func_106(0, 0))
	{
		func_101();
	}
	if ((func_107(-296509791, 8) || unk_0x4590C086096F07D8(joaat("snowday"))) || func_106(1, 0))
	{
		func_100();
	}
	if ((func_107(1120820643, 7) || unk_0x4590C086096F07D8(joaat("catchme"))) || func_106(2, 0))
	{
		func_99();
	}
	if ((func_107(-421458016, 9) || unk_0x4590C086096F07D8(joaat("gotgills"))) || func_106(3, 0))
	{
		func_98();
	}
	if ((func_107(372390926, 12) || unk_0x4590C086096F07D8(joaat("toolup"))) || func_106(4, 0))
	{
		iLocal_49 = 4;
	}
	if ((func_107(606506837, 8) || unk_0x4590C086096F07D8(joaat("makeitrain"))) || func_106(5, 0))
	{
		iLocal_50 = 4;
	}
	if ((func_107(453014206, 12) || unk_0x4590C086096F07D8(joaat("turtle"))) || func_106(6, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_107(1773187142, 9) || unk_0x4590C086096F07D8(joaat("powerup"))) || func_106(7, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_107(1173296014, 10) || unk_0x4590C086096F07D8(joaat("fugitive"))) || func_106(8, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_107(-381269753, 10) || unk_0x4590C086096F07D8(joaat("lawyerup"))) || func_106(9, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_107(-2023988698, 11) || unk_0x4590C086096F07D8(joaat("skydive"))) || func_106(10, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_107(-835863906, 12) || unk_0x4590C086096F07D8(joaat("highex"))) || func_106(11, 0))
	{
		func_97();
	}
	if ((func_107(1958387485, 12) || unk_0x4590C086096F07D8(joaat("incendiary"))) || func_106(12, 0))
	{
		func_96();
	}
	if ((func_107(-903985180, 9) || unk_0x4590C086096F07D8(joaat("hothands"))) || func_106(13, 0))
	{
		func_95();
	}
	if ((func_107(2087642905, 9) || unk_0x4590C086096F07D8(joaat("floater"))) || func_106(14, 0))
	{
		func_94();
	}
	if ((func_107(1257820019, 10) || unk_0x4590C086096F07D8(joaat("painkiller"))) || func_106(15, 0))
	{
		func_93();
	}
	if ((func_107(1540206179, 7) || unk_0x4590C086096F07D8(joaat("slowmo"))) || func_106(16, 0))
	{
		func_92();
	}
	if ((func_107(115565392, 16) || unk_0x4590C086096F07D8(joaat("skyfall"))) || func_106(17, 0))
	{
		func_91();
	}
	if ((func_107(-1276513277, 8) || unk_0x4590C086096F07D8(joaat("liquor"))) || func_106(18, 0))
	{
		func_90();
	}
	if ((func_107(2040433593, 9) || unk_0x4590C086096F07D8(joaat("deadeye"))) || func_106(19, 0))
	{
		func_89();
	}
}

void func_89()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_61 != 1)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_64 = 4;
	}
}

void func_90()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_63 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_63 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(18))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_63 = 1;
		return;
	}
	if (iLocal_63 == 1)
	{
		iLocal_63 = 4;
	}
	else if (iLocal_63 == 5)
	{
		iLocal_63 = 9;
	}
}

void func_91()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (unk_0x4B7DCB210992A9F7())
	{
		func_21("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_62 != 1)
	{
		func_21("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_27(23) || func_27(21)) || func_27(17)) || func_66(0)) || unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0)) || !unk_0x174DBD3C5DB3557B())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if ((unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 0)) || unk_0x486FF5D06E9659F1(joaat("respawn_controller")) > 0)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_62 = 2;
}

void func_92()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_61 = 4;
	}
}

void func_93()
{
	struct<3> Var0;
	
	Var0 = { func_19(unk_0x259BE71D8A81D4FA()) };
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_27(23) || func_27(21)) || func_27(15)) || Var0.f_2 <= -170f)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_94()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_27(23) || func_27(21)) || func_27(14)) || func_66(17)) || unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_59 = 4;
}

void func_95()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(13))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_96()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_57 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_57 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(12))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_57 = 1;
		return;
	}
	if (iLocal_57 == 1)
	{
		iLocal_57 = 4;
	}
	else if (iLocal_57 == 5)
	{
		iLocal_57 = 9;
	}
}

void func_97()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_56 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_56 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(11))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_56 = 1;
		return;
	}
	if (iLocal_56 == 1)
	{
		iLocal_56 = 4;
	}
	else if (iLocal_56 == 5)
	{
		iLocal_56 = 9;
	}
}

void func_98()
{
	if ((((func_27(23) || func_27(22)) || func_27(3)) || func_15(9)) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_99()
{
	if ((((func_27(23) || func_27(22)) || func_27(2)) || func_15(9)) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

void func_100()
{
	if ((func_27(23) || func_27(22)) || func_27(1))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_46 == 1)
	{
		iLocal_46 = 4;
	}
	else if (iLocal_46 == 5)
	{
		iLocal_46 = 9;
	}
}

void func_101()
{
	if (((func_27(23) || func_27(22)) || func_27(0)) || unk_0x4B7DCB210992A9F7())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_45 == 1)
	{
		iLocal_45 = 4;
	}
	else if (iLocal_45 == 5)
	{
		iLocal_45 = 9;
	}
}

int func_102()
{
	var uVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
	{
		return 0;
	}
	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 6);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x76CA59C648318506())
				{
					iVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&iVar0, false);
					unk_0xED11291F7127888E(iVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		if (BitTest(unk_0x38640D2193CB547F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_103(int iParam0, char* sParam1)
{
	if (iLocal_44 == 1)
	{
		if (((((func_15(9) || unk_0x486FF5D06E9659F1(joaat("barry1")) > 0) || unk_0x486FF5D06E9659F1(joaat("tennis")) > 0) || func_27(23)) || func_27(22)) || func_27(20))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_104(iParam0))
		{
			func_21("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_65 = iParam0;
		sLocal_68 = sParam1;
		iLocal_44 = 2;
	}
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_105(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_105(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_105(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_105(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_32753[iParam0], iParam1);
}

int func_106(bool bParam0, int iParam1)
{
	if (BitTest(Global_33200, bParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_33201)
			{
				unk_0x8744D2E3FC95740E(&Global_33200, bParam0);
				iLocal_81 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			unk_0x8744D2E3FC95740E(&Global_33200, bParam0);
			iLocal_81 = 1;
			return 1;
		}
	}
	return 0;
}

int func_107(int iParam0, int iParam1)
{
	if (!func_15(14))
	{
		return unk_0x1DBC8A6F227520FD(iParam0, iParam1);
	}
	return 0;
}

void func_108()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_78[iVar0] != -1)
		{
			unk_0xFE3A52C5B7AE3101(iLocal_78[iVar0]);
			iLocal_78[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_109()
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

void func_110()
{
	if (func_15(14) || (!unk_0x9390801B06EE998F() && iLocal_82 != 0))
	{
		iLocal_82 = unk_0x1DD05E817C89C737();
	}
	if (iLocal_82 != 0)
	{
		if (!func_15(14))
		{
			if ((unk_0x1DD05E817C89C737() - iLocal_82) > 1000)
			{
				iLocal_82 = 0;
			}
		}
	}
}

int func_111()
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

void func_112()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_78[iVar0] = -1;
		iVar0++;
	}
	iLocal_80 = 0;
	iLocal_79 = 0;
}

void func_113()
{
	unk_0x44182C1D103A97D2(0);
	if (iLocal_62 == 5)
	{
		func_37();
	}
	if (iLocal_63 == 5)
	{
		func_46(1);
	}
	if (iLocal_61 == 5 || iLocal_64 == 5)
	{
		unk_0xE6AC149D1121535D(1f);
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (iLocal_60 == 5)
		{
			unk_0x2B52F77101390E6F(unk_0x259BE71D8A81D4FA(), 0);
			unk_0xD0F1DB0E50B367AD(unk_0x4A8C381C258A124D(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		unk_0xA52E1AE3848A506B(unk_0x259BE71D8A81D4FA(), 1f);
		unk_0x289497A4BA9049E0(unk_0x259BE71D8A81D4FA(), 1f);
	}
	unk_0x446CF90BF0024020(0);
	Global_33198 = 0;
	Global_33197 = 0;
	Global_33199 = 0;
	Global_33200 = 0;
	Global_33202 = 0;
	Global_33201 = 0;
	unk_0xBBC29EBE6E1A48FA();
}

