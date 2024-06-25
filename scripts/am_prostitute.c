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
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56[32];
	struct<21> Local_57 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
		func_52(ScriptParam_57);
	}
	else
	{
		func_46();
	}
	iLocal_51 = unk_0x1DD05E817C89C737();
	while (true)
	{
		func_45();
		if (((func_37() || unk_0xF859473E4AD09F30()) || (func_36(unk_0x259BE71D8A81D4FA()) || func_35(unk_0x259BE71D8A81D4FA()))) || func_32(unk_0x259BE71D8A81D4FA()))
		{
			func_46();
		}
		if (unk_0x76CD105BCAC6EB9F())
		{
			func_2();
			func_1();
			iLocal_52++;
			if (iLocal_52 >= unk_0x95C7A22DBE7AEF4C())
			{
				iLocal_52 = 0;
			}
		}
		else
		{
			func_46();
		}
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x383461852896D73D();
	bVar0 = false;
	while (bVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if ((iLocal_52 % bVar0) == 0)
		{
			if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(bVar0)))
			{
				iVar2 = unk_0x56E414973C2A8C0E(unk_0x4470BE79F5771783(unk_0xF0C9E5565CB32F4B(bVar0)));
				if (!unk_0x1C2F771CDC87A3A5(iVar2, 0))
				{
					if (Local_56[bVar0 /*3*/].f_2)
					{
						if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0), unk_0xD1A6A821F5AC81DB(iVar2, 1)) <= 22500f)
						{
							if (!iLocal_54)
							{
								unk_0x80813AC549A1E8AE("mini@prostitutes@sexlow_veh");
								unk_0x80813AC549A1E8AE("mini@prostitutes@sexnorm_veh");
								unk_0x80813AC549A1E8AE("mini@prostitutes@sexlow_veh_first_person");
								unk_0x80813AC549A1E8AE("mini@prostitutes@sexnorm_veh_first_person");
								unk_0x80813AC549A1E8AE("anim@mini@prostitutes@sex@veh_vstr@");
								iLocal_54 = 1;
							}
							if (!BitTest(iLocal_53, bVar0))
							{
								unk_0x0B0C9A0F9AAEB7F0(&iLocal_53, bVar0);
							}
						}
						else if (BitTest(iLocal_53, bVar0))
						{
							unk_0x8744D2E3FC95740E(&iLocal_53, bVar0);
						}
					}
					else if (BitTest(iLocal_53, bVar0))
					{
						unk_0x8744D2E3FC95740E(&iLocal_53, bVar0);
					}
				}
				else if (BitTest(iLocal_53, bVar0))
				{
					unk_0x8744D2E3FC95740E(&iLocal_53, bVar0);
				}
			}
		}
		bVar0++;
	}
	if ((iLocal_53 == 0 && iLocal_54) && !Local_56[iVar1 /*3*/].f_2)
	{
		unk_0x268BE77F77533D03("mini@prostitutes@sexlow_veh");
		unk_0x268BE77F77533D03("mini@prostitutes@sexnorm_veh");
		unk_0x268BE77F77533D03("mini@prostitutes@sexlow_veh_first_person");
		unk_0x268BE77F77533D03("mini@prostitutes@sexnorm_veh_first_person");
		unk_0x268BE77F77533D03("anim@mini@prostitutes@sex@veh_vstr@");
		iLocal_54 = 0;
	}
}

void func_2()
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		return;
	}
	if (iLocal_51 > unk_0x1DD05E817C89C737())
	{
		return;
	}
	iVar0 = 0;
	iVar2 = unk_0x383461852896D73D();
	bVar3 = false;
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar1 = unk_0x4A8C381C258A124D();
			if (func_31(&uVar1))
			{
				bVar3 = true;
			}
		}
	}
	switch (iLocal_50)
	{
		case 0:
			if (((func_28(unk_0x259BE71D8A81D4FA(), 1, 0) || func_27()) || !bVar3) || func_18())
			{
				iLocal_50 = 4;
			}
			else
			{
				iVar0 = func_14();
				if (iVar0 != func_13(iVar2) && iVar0 != 0)
				{
					func_12(iVar0);
					iLocal_51 = unk_0x1DD05E817C89C737();
					iLocal_50 = 2;
				}
				else
				{
					iLocal_51 = unk_0x1DD05E817C89C737() + 500;
				}
			}
			break;
		
		case 2:
			if (func_4())
			{
				Global_33103 = 0f;
				unk_0x97A5024CE91641F1("pb_prostitute");
				iLocal_51 = unk_0x1DD05E817C89C737() + 250;
				Local_56[iVar2 /*3*/].f_2 = 0;
				iLocal_50 = 3;
			}
			else
			{
				iLocal_51 = unk_0x1DD05E817C89C737() + 250;
			}
			break;
		
		case 3:
			if ((unk_0xA6E4F7A73ABC4A76("pb_prostitute") && unk_0x486FF5D06E9659F1(joaat("pb_prostitute")) <= 0) && !unk_0x99F8FC8A6D8E20C0("pb_prostitute", unk_0x383461852896D73D(), 1, 0))
			{
				iVar4 = func_13(iVar2);
				iLocal_55 = system::start_new_script_with_args("pb_prostitute", &iVar4, 1, 2050);
				unk_0xFD49725F3FE7EE13("pb_prostitute");
				iLocal_50 = 0;
			}
			iLocal_51 = unk_0x1DD05E817C89C737();
			break;
		
		case 4:
			if (func_4())
			{
				Local_56[iVar2 /*3*/].f_2 = 0;
				iLocal_51 = unk_0x1DD05E817C89C737() + 250;
				iLocal_50 = 5;
			}
			else
			{
				iLocal_51 = unk_0x1DD05E817C89C737() + 500;
			}
			break;
		
		case 5:
			if (((!func_28(unk_0x259BE71D8A81D4FA(), 1, 0) && !func_27()) && bVar3) && !func_3())
			{
				iLocal_51 = unk_0x1DD05E817C89C737() + 250;
				iLocal_50 = 0;
			}
			else
			{
				iLocal_51 = unk_0x1DD05E817C89C737() + 500;
			}
			break;
	}
}

bool func_3()
{
	return Global_1962252;
}

int func_4()
{
	if (unk_0x486FF5D06E9659F1(joaat("pb_prostitute")) <= 0 && !unk_0x99F8FC8A6D8E20C0("pb_prostitute", unk_0x383461852896D73D(), 1, 0))
	{
		return 1;
	}
	if (iLocal_55 == 0)
	{
		return 1;
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_5();
	}
	else
	{
		unk_0x3A9A35C27C7B6D3C("pb_prostitute", 1);
	}
	return 0;
}

void func_5()
{
	struct<2> Var0;
	int iVar1;
	
	Var0.f_0 = 666659573;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	iVar1 = func_6(1, 1);
	if (iVar1 != 0)
	{
		unk_0x71A6F836422FDD2B(1, &Var0, 3, iVar1, Var0.f_0);
	}
}

var func_6(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(iVar1);
		if (func_11(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, iVar1);
				}
				else if (!func_7(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_7(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_10(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_8(-1, 0) == 8;
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

int func_8(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_9();
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

int func_9()
{
	return Global_1574926;
}

int func_10(var uParam0)
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

int func_11(int iParam0, bool bParam1, bool bParam2)
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

void func_12(int iParam0)
{
	Local_56[unk_0x383461852896D73D() /*3*/] = iParam0;
}

int func_13(int iParam0)
{
	if (iParam0 == -1)
	{
		return Local_56[unk_0x383461852896D73D() /*3*/];
	}
	return Local_56[iParam0 /*3*/];
}

int func_14()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	
	iVar0 = func_15();
	iVar1 = unk_0x383461852896D73D();
	if (!unk_0xFC8BFE4B41177C22(func_13(iVar1)))
	{
		func_12(0);
		return iVar0;
	}
	if (iLocal_55 != 0 && unk_0xF40767E41852FB72(iLocal_55))
	{
		if (Local_56[iVar1 /*3*/].f_2)
		{
			return func_13(iVar1);
		}
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				uVar2 = unk_0x4A8C381C258A124D();
				if (func_31(&uVar2))
				{
					uVar3 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					if (unk_0xFC8BFE4B41177C22(uVar3))
					{
						if (func_13(iVar1) == unk_0xFD5C5BBD1FE92BB7(uVar3, 0, 0) || unk_0xCECDBB848D53DEB2(func_13(iVar1), uVar3, 1))
						{
							Local_56[iVar1 /*3*/].f_2 = 1;
							return func_13(iVar1);
						}
					}
					if (iVar0 == 0)
					{
						return func_13(iVar1);
					}
					Var4 = { unk_0xD1A6A821F5AC81DB(func_13(iVar1), 0) };
					Var5 = { unk_0xD1A6A821F5AC81DB(iVar0, 0) };
					Var6 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
					fVar7 = system::vdist(Var4, Var6);
					fVar8 = system::vdist(Var6, Var5);
					if (fVar7 > fVar8)
					{
						if ((fVar7 - fVar8) > 25f)
						{
							return iVar0;
						}
						else if (fVar8 < 6f && fVar7 > 11f)
						{
							return iVar0;
						}
						else
						{
							return func_13(iVar1);
						}
					}
					else
					{
						return func_13(iVar1);
					}
				}
			}
		}
	}
	return iVar0;
}

int func_15()
{
	int iVar0;
	var uVar1[8];
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar2 = unk_0xAA3F0A9E20917995(unk_0x4A8C381C258A124D(), &uVar1, -1);
	if (iVar2 > 0)
	{
		iVar3 = 0;
		while (iVar3 <= 7)
		{
			if (!unk_0x4FAFF4BCB7633475(uVar1[iVar3]))
			{
				if (unk_0x282B0289FBD3C119(uVar1[iVar3], "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS") || unk_0x282B0289FBD3C119(uVar1[iVar3], "WORLD_HUMAN_PROSTITUTE_LOW_CLASS"))
				{
					if (func_17(uVar1[iVar3]))
					{
						if (!func_16(uVar1[iVar3]))
						{
							if (!unk_0xCA038E64C65D1F9D(uVar1[iVar3]))
							{
								return uVar1[iVar3];
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

int func_16(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Local_56[iVar0 /*3*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_17(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar1 = unk_0xED22194AB8539910(uParam0, &uVar0);
	if (!unk_0xD6F9DEE4765092A9(uVar1))
	{
		if (unk_0x1B79E937E91F40C3(uVar1, "GB_VEHICLE_EXPORT"))
		{
			return 0;
		}
		if (unk_0x1B79E937E91F40C3(uVar1, "BUSINESS_BATTLES_SELL"))
		{
			return 0;
		}
		if (unk_0x1B79E937E91F40C3(uVar1, "BUSINESS_BATTLES"))
		{
			return 0;
		}
		if (unk_0x1B79E937E91F40C3(uVar1, "GB_CASINO"))
		{
			return 0;
		}
		if (unk_0x1B79E937E91F40C3(uVar1, "GB_CASINO_HEIST"))
		{
			return 0;
		}
	}
	return 1;
}

int func_18()
{
	if (func_3())
	{
		return 1;
	}
	if (func_25(unk_0x259BE71D8A81D4FA()) != -1)
	{
		return 1;
	}
	if (func_23(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (func_21(unk_0x259BE71D8A81D4FA()) == 309 || func_19(unk_0x259BE71D8A81D4FA()) == 309)
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0)
{
	if (func_20(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_32;
	}
	return -1;
}

int func_20(int iParam0, int iParam1)
{
	if (func_10(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_32 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_33 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0)
{
	if (func_10(iParam0))
	{
		if (func_22(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_22(int iParam0, int iParam1)
{
	if (func_10(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_23(int iParam0)
{
	if (func_24(func_21(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_25(int iParam0)
{
	if (func_21(iParam0) == 237 || func_21(iParam0) == 250)
	{
		return func_26(iParam0);
	}
	return -1;
}

int func_26(int iParam0)
{
	if (func_22(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

bool func_27()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 0);
}

int func_28(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_29(iParam0))
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

bool func_29(int iParam0)
{
	return func_30(iParam0);
}

var func_30(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

int func_31(var uParam0)
{
	if (unk_0x7F420695E3F776FB(*uParam0, 0))
	{
		if (unk_0xFD5C5BBD1FE92BB7(unk_0xCDA725BC2F170795(*uParam0), -1, 0) == *uParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	if (iParam0 != func_34())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_33(Global_2657971[iParam0 /*465*/].f_322.f_8) == 11;
			}
		}
	}
	return 0;
}

int func_33(int iParam0)
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

int func_34()
{
	return -1;
}

bool func_35(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 7;
}

bool func_36(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 2;
}

int func_37()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_44())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_43())
	{
		return 1;
	}
	if (func_42(159))
	{
		if (!func_41())
		{
			return 1;
		}
	}
	if (func_42(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_38() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_38()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_38()
{
	switch (func_40())
	{
		case 0:
			return func_39();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_39()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_40()
{
	return Global_32948;
}

bool func_41()
{
	return Global_2684504.f_700;
}

int func_42(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_43()
{
	return Global_2696172;
}

bool func_44()
{
	return Global_2684504.f_695;
}

void func_45()
{
	system::wait(0);
}

void func_46()
{
	if (iLocal_54)
	{
		unk_0x268BE77F77533D03("mini@prostitutes@sexlow_veh");
		unk_0x268BE77F77533D03("mini@prostitutes@sexnorm_veh");
		unk_0x268BE77F77533D03("mini@prostitutes@sexlow_veh_first_person");
		unk_0x268BE77F77533D03("mini@prostitutes@sexnorm_veh_first_person");
		unk_0x268BE77F77533D03("anim@mini@prostitutes@sex@veh_vstr@");
	}
	if ((!func_51(unk_0x259BE71D8A81D4FA()) && !func_50(unk_0x259BE71D8A81D4FA())) && !func_49(unk_0x259BE71D8A81D4FA()))
	{
		func_48();
	}
	func_4();
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_5();
	}
	else
	{
		unk_0x3A9A35C27C7B6D3C("pb_prostitute", 1);
	}
	Global_2738934.f_4 = 0;
	func_47();
}

void func_47()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_48()
{
	if (Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 0;
	}
}

int func_49(int iParam0)
{
	if (iParam0 != func_34())
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_5, 4);
	}
	return 0;
}

int func_50(int iParam0)
{
	if (iParam0 != func_34())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_370, 29);
	}
	return 0;
}

int func_51(int iParam0)
{
	if (iParam0 != func_34())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_433.f_2, 16);
	}
	return 0;
}

void func_52(struct<21> Param0)
{
	func_55(func_56(Param0.f_0), Param0);
	func_53(0, -1, 0);
	unk_0x7B13DC83218D9AF5(&Local_56, 97, 0);
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_5();
	}
	else
	{
		unk_0x3A9A35C27C7B6D3C("pb_prostitute", 1);
	}
	unk_0xAECC5FA98C879D67(0);
}

int func_53(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_47();
			}
			else
			{
				return 0;
			}
		}
		if (!func_54(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_47();
					}
					else
					{
						return 0;
					}
				}
				if (func_44())
				{
					if (!bParam2)
					{
						func_47();
					}
					else
					{
						return 0;
					}
				}
				if (func_42(157))
				{
					if (!bParam2)
					{
						func_47();
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
					func_47();
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
				func_47();
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
			func_47();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_54(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_55(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_47();
	}
	unk_0xDB2434E51017FFCC(uParam0, 0, Param1.f_16);
}

int func_56(int iParam0)
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
	switch (func_57(func_58(iParam0, 1)))
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

int func_57(int iParam0)
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

int func_58(int iParam0, bool bParam1)
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

