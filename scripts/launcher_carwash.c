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
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	struct<24> Local_38[2];
	var uLocal_39 = 0;
	var uLocal_40 = 0;
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
	var uLocal_51 = -1;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	bool bLocal_56 = 0;
	struct<3> Local_57[2];
	var uLocal_58[2] = { 0, 0 };
	int iLocal_59[2] = { 0, 0 };
	struct<2> Local_60 = { 0, 5 } ;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
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
	var uLocal_76 = 5;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	var uVar1;
	struct<3> Var2;
	int iVar3;
	
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0,0375f;
	fLocal_27 = 0,17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	Var2 = { ScriptParam_60.f_1[0 /*3*/] };
	if (unk_0x486FF5D06E9659F1(joaat("launcher_carwash")) > 1)
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0x51CC1333A10C4E09();
		unk_0xAECC5FA98C879D67(0);
	}
	else if (unk_0x96CFB880BAC634CE(99))
	{
		func_76();
	}
	if (Global_2883694)
	{
		if (unk_0x486FF5D06E9659F1(-949873222) == 0)
		{
			unk_0x625263BFD08AE230(-949873222);
			while (!unk_0x65F606616F48186B(-949873222))
			{
				system::wait(0);
			}
			system::start_new_script_with_name_hash_and_args(-949873222, &ScriptParam_60, 23, 1424);
		}
		unk_0xBBC29EBE6E1A48FA();
	}
	if (func_75(unk_0x4A8C381C258A124D()))
	{
	}
	func_67();
	while (true)
	{
		func_75(unk_0x4A8C381C258A124D());
		if (func_66(unk_0x4A8C381C258A124D(), Var2, 0) > (100f + 20f))
		{
			func_76();
		}
		bVar0 = false;
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			uVar1 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			bVar0 = (func_62(uVar1) || func_61(uVar1));
			bLocal_56 = unk_0x9DB4F102351D5D9E(uVar1);
			func_60(bLocal_56);
		}
		iVar3 = 0;
		while (iVar3 < Local_38.f_0)
		{
			func_59(iVar3);
			iVar3++;
		}
		if (func_1(&Local_38, &uLocal_39, bVar0, 0, 1, 1424))
		{
			func_76();
		}
		system::wait(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_54(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_47(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_44(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (unk_0x3D2EB53CF281A77E() && uParam1->f_16 == 0))
						{
							func_43(uParam1, 6);
						}
						else if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
						{
							func_43(uParam1, 8);
						}
						else if (bParam2)
						{
							func_43(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_43(uParam1, 2);
						}
						else if (func_31() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_43(uParam1, 1);
						}
						else if (func_26())
						{
							func_43(uParam1, 7);
						}
						else
						{
							func_43(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_25(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_23(uParam1, uParam1->f_6);
			}
			if (func_19(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_43(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_14(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_19(iParam0[uParam1->f_12 /*24*/]) || func_31() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_43(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_23(uParam1, uParam1->f_1);
			}
			if (func_19(iParam0[uParam1->f_12 /*24*/]) || !func_47(uParam1->f_16))
			{
				func_43(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_23(uParam1, uParam1->f_3);
			}
			if ((func_19(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_47(uParam1->f_16))
			{
				func_43(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_23(uParam1, uParam1->f_5);
			}
			if (func_19(iParam0[uParam1->f_12 /*24*/]) || !func_47(uParam1->f_16))
			{
				func_43(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_23(uParam1, uParam1->f_4);
			}
			if (func_19(iParam0[uParam1->f_12 /*24*/]) || unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
			{
				func_43(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_13())
				{
					func_23(uParam1, uParam1->f_7);
				}
				else
				{
					func_23(uParam1, uParam1->f_8);
				}
			}
			if (func_19(iParam0[uParam1->f_12 /*24*/]) || func_10(iParam0[uParam1->f_12 /*24*/]))
			{
				func_43(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			unk_0x4CC1CF98851922CE(2, 51);
			unk_0x66EFB3D6110055C4(0, 101, 1);
			func_9();
			if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
			{
				func_43(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_43(uParam1, 2);
				return 0;
			}
			if (func_19(iParam0[uParam1->f_12 /*24*/]) || !func_47(uParam1->f_16))
			{
				func_43(uParam1, 0);
				return 0;
			}
			if (Global_76498)
			{
				return 0;
			}
			if (func_6(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) || func_5(unk_0x4A8C381C258A124D(), 0) != -1)
				{
					func_43(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (unk_0x3D2EB53CF281A77E() && uParam1->f_16 == 0))
			{
				func_43(uParam1, 6);
				return 0;
			}
			if (func_26())
			{
				func_43(uParam1, 7);
				return 0;
			}
			if (func_31() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_43(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_14(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && !unk_0x27E68848F0E5D7D9(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
			}
			if (unk_0x4D9174D8796EA622() || unk_0xEF37E704F02B50F3())
			{
				return 0;
			}
			if (unk_0x5B3431FA66D59A4C(unk_0x4A8C381C258A124D()))
			{
				if ((unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x2C807E70DCB4BB36(unk_0x4A8C381C258A124D())) || unk_0xE7895DBF72C7F282(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if ((unk_0x86521C678E8AA3FF(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x0B3FC0E7676E79BF(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x7CB06BFD42FB0E24(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0xDC91B9320E14F119(unk_0x4A8C381C258A124D()) || unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 0,05f)
				{
					return 0;
				}
			}
			if (unk_0x875A214D5EBCA509(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_10(iParam0[uParam1->f_12 /*24*/]))
				{
					func_43(uParam1, 9);
				}
				else
				{
					func_43(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_25(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_43(uParam1, 0);
				return 1;
			}
			unk_0x428C32CC68809A35(1);
			unk_0xEC73DFE5CE55E19C(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 20f, 0);
			if (!unk_0xD6F9DEE4765092A9((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				unk_0x97A5024CE91641F1((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!unk_0xA6E4F7A73ABC4A76((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_9();
					if (func_75(unk_0x4A8C381C258A124D()))
					{
						if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && !Global_79389)
						{
							func_2(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 2f, 1, 1056964608, 0, 1, 0);
							unk_0xE456FB21FF21AE99(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0);
						}
					}
					unk_0x4CC1CF98851922CE(2, 51);
					unk_0x97A5024CE91641F1((iParam0[uParam1->f_12 /*24*/])->f_5);
					unk_0x66EFB3D6110055C4(0, 101, 1);
					unk_0x66EFB3D6110055C4(0, 75, 1);
					unk_0x66EFB3D6110055C4(0, 23, 1);
					system::wait(0);
				}
				if (bParam3)
				{
					unk_0x8F72AF14CE5AACE4(250);
				}
				if (unk_0xA6E4F7A73ABC4A76((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!unk_0x15CCE8886267624F())
						{
							if (func_75(unk_0x4A8C381C258A124D()))
							{
								if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && !Global_79389)
								{
									func_2(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 2f, 1, 1056964608, 0, 1, 0);
									unk_0xE456FB21FF21AE99(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0);
								}
							}
							unk_0x4CC1CF98851922CE(2, 51);
							unk_0x66EFB3D6110055C4(0, 101, 1);
							unk_0x66EFB3D6110055C4(0, 75, 1);
							unk_0x66EFB3D6110055C4(0, 23, 1);
							func_9();
							system::wait(0);
						}
					}
					system::start_new_script((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					unk_0xFD49725F3FE7EE13((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_4(bParam5, bParam6);
	func_3(iParam0);
	if ((unk_0x1DD05E817C89C737() - Global_30) > 500)
	{
		unk_0xE5EE5C9DDF05D925(iParam0, fParam1, iParam2, iParam4);
	}
	Global_30 = unk_0x1DD05E817C89C737();
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_3(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0xA03728CC57F6DD36(iParam0))
		{
			if (unk_0x772683F12F46CE82(iParam0))
			{
				unk_0x5B29AF88D03CEB7A(iParam0, 0);
			}
		}
	}
}

void func_4(bool bParam0, bool bParam1)
{
	unk_0x66EFB3D6110055C4(0, 71, 1);
	unk_0x66EFB3D6110055C4(0, 72, 1);
	unk_0x66EFB3D6110055C4(0, 76, 1);
	unk_0x66EFB3D6110055C4(0, 73, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);
	if (bParam0)
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
	}
	unk_0x66EFB3D6110055C4(0, 80, 1);
	if (!bParam1)
	{
		unk_0x66EFB3D6110055C4(0, 69, 1);
		unk_0x66EFB3D6110055C4(0, 70, 1);
		unk_0x66EFB3D6110055C4(0, 68, 1);
	}
	unk_0x66EFB3D6110055C4(0, 74, 1);
	unk_0x66EFB3D6110055C4(0, 86, 1);
	unk_0x66EFB3D6110055C4(0, 81, 1);
	unk_0x66EFB3D6110055C4(0, 82, 1);
	unk_0x66EFB3D6110055C4(0, 138, 1);
	unk_0x66EFB3D6110055C4(0, 136, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	unk_0x66EFB3D6110055C4(0, 107, 1);
	unk_0x66EFB3D6110055C4(0, 110, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 87, 1);
	unk_0x66EFB3D6110055C4(0, 88, 1);
	unk_0x66EFB3D6110055C4(0, 113, 1);
	unk_0x66EFB3D6110055C4(0, 115, 1);
	unk_0x66EFB3D6110055C4(0, 116, 1);
	unk_0x66EFB3D6110055C4(0, 117, 1);
	unk_0x66EFB3D6110055C4(0, 118, 1);
	unk_0x66EFB3D6110055C4(0, 119, 1);
	unk_0x66EFB3D6110055C4(0, 352, 1);
	unk_0x66EFB3D6110055C4(0, 131, 1);
	unk_0x66EFB3D6110055C4(0, 132, 1);
	unk_0x66EFB3D6110055C4(0, 123, 1);
	unk_0x66EFB3D6110055C4(0, 126, 1);
	unk_0x66EFB3D6110055C4(0, 129, 1);
	unk_0x66EFB3D6110055C4(0, 130, 1);
	unk_0x66EFB3D6110055C4(0, 133, 1);
	unk_0x66EFB3D6110055C4(0, 134, 1);
	unk_0x1C74A3A76F738D39();
}

int func_5(int iParam0, int iParam1)
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

int func_6(bool bParam0)
{
	if (bParam0)
	{
		if (func_8())
		{
			return 1;
		}
	}
	if (func_7(14))
	{
		return 1;
	}
	return 0;
}

bool func_7(int iParam0)
{
	return Global_44042 == iParam0;
}

int func_8()
{
	if (Global_112911)
	{
		return 1;
	}
	if (!func_7(14) && unk_0x486FF5D06E9659F1(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_9()
{
	Global_23692.f_6 = 1;
}

int func_10(var uParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0x4A8C381C258A124D();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_12(uParam0->f_12))
	{
		return 1;
	}
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		iVar1 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		if (func_75(iVar1))
		{
			Var0 = { unk_0x88124E0D60FB8D11(iVar1, 2) };
			if (Var0.f_1 > 45f || Var0.f_1 < -45f)
			{
				return 0;
			}
			iVar2 = iVar1;
		}
	}
	Var0 = { unk_0x90D0E0397D3F7690(iVar2) };
	if (func_11(uParam0->f_12, Var0) > system::cos(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_11(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return ((Param0.f_0 * Param2.f_0) + (Param0.f_1 * Param2.f_1));
}

int func_12(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_13()
{
	var uVar0;
	
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		uVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		return unk_0xE99B9AC112F55D16(uVar0, 1119092736);
	}
	return unk_0xE99B9AC112F55D16(unk_0x4A8C381C258A124D(), 1119092736);
}

int func_14(var uParam0, var uParam1, var uParam2)
{
	if (unk_0xD6F9DEE4765092A9(uParam1))
	{
		return 0;
	}
	if (func_16(uParam0) || !unk_0x4C705AAF75363287())
	{
		unk_0x428C32CC68809A35(1);
		func_15(uParam1, uParam2);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = uParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_15(var uParam0, var uParam1)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

int func_16(var uParam0)
{
	if (unk_0xD6F9DEE4765092A9(uParam0->f_14))
	{
		return 0;
	}
	if (!unk_0x4C705AAF75363287())
	{
		return 0;
	}
	if (unk_0x1B79E937E91F40C3(*uParam0, uParam0->f_14) || unk_0x1B79E937E91F40C3(uParam0->f_2, uParam0->f_14))
	{
		return func_18(uParam0->f_14, uParam0->f_15);
	}
	return func_17(uParam0->f_14);
}

var func_17(var uParam0)
{
	unk_0x39DCBE5519BD783A(uParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

var func_18(var uParam0, var uParam1)
{
	unk_0x39DCBE5519BD783A(uParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

bool func_19(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			return 1;
		}
		if (func_5(unk_0x4A8C381C258A124D(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_22(unk_0x4A8C381C258A124D(), uParam0->f_1, (uParam0->f_10 + 2f), 1);
	}
	Var0 = { func_20(uParam0->f_16, 2f) };
	return !unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}

struct<8> func_20(struct<8> Param0, float fParam1)
{
	struct<8> Var0;
	struct<3> Var1;
	
	Var0 = 2;
	Var1 = { func_21(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam1, fParam1, fParam1) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - Var1 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + Var1 };
	Var0.f_7 = (Param0.f_7 + (fParam1 * 2f));
	return Var0;
}

Vector3 func_21(struct<3> Param0)
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

bool func_22(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	return system::vdist2(unk_0xD1A6A821F5AC81DB(iParam0, iParam3), Param1) <= (fParam2 * fParam2);
}

int func_23(var uParam0, var uParam1)
{
	if (unk_0xD6F9DEE4765092A9(uParam1))
	{
		return 0;
	}
	if (func_16(uParam0) || !unk_0x4C705AAF75363287())
	{
		unk_0x428C32CC68809A35(1);
		func_24(uParam1);
		uParam0->f_14 = uParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_24(var uParam0)
{
	unk_0xAC98CA65AD9A3215(uParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

void func_25(var uParam0)
{
	if (func_16(uParam0))
	{
		unk_0x428C32CC68809A35(1);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_26()
{
	int iVar0;
	
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
	if (unk_0x5B702A5D1F2635BE(iVar0))
	{
		return 1;
	}
	if (func_30(iVar0))
	{
		return 1;
	}
	if (func_27(iVar0, 3))
	{
		return 1;
	}
	return !unk_0xD9F5E1FEFD1329E4(iVar0, 0);
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_28(iParam0))
	{
		iVar0 = 0;
		if (unk_0x548F6F43A7CB6F45(iParam0, 0, 0) && unk_0x548F6F43A7CB6F45(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0x548F6F43A7CB6F45(iParam0, 4, 0) && unk_0x548F6F43A7CB6F45(iParam0, 5, 0))
		{
			return 1;
		}
		if (unk_0x548F6F43A7CB6F45(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (unk_0x548F6F43A7CB6F45(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (unk_0x548F6F43A7CB6F45(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (unk_0x548F6F43A7CB6F45(iParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	if (func_29(iParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_29(int iParam0)
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

int func_30(int iParam0)
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

int func_31()
{
	if (unk_0x76CD105BCAC6EB9F())
	{
		return func_39(unk_0x259BE71D8A81D4FA());
	}
	switch (func_33())
	{
		case 2:
			return func_32(2);
		
		case 0:
			return func_32(0);
		
		case 1:
			return func_32(1);
		
		default:
	}
	return 0;
}

var func_32(int iParam0)
{
	return Global_61340[iParam0];
}

int func_33()
{
	func_34();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_34()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_37(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_36(unk_0x4A8C381C258A124D());
			if (func_35(iVar0) && (!func_7(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_35(Global_113969.f_2366.f_539.f_4321))
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

bool func_35(int iParam0)
{
	return iParam0 < 3;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_37(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_37(int iParam0)
{
	if (func_35(iParam0))
	{
		return func_38(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_38(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

var func_39(int iParam0)
{
	var uVar0;
	
	uVar0 = func_40(iParam0);
	return uVar0;
}

int func_40(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return unk_0x00BDC89742B13CD2(-1);
		}
		else if (func_41(iParam0))
		{
			return Global_1845281[iParam0 /*883*/].f_206.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_41(int iParam0)
{
	if (!func_42(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, iParam0);
}

int func_42(var uParam0)
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

void func_43(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	func_25(uParam0);
}

bool func_44(var uParam0)
{
	func_75(unk_0x4A8C381C258A124D());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_46(0))
	{
		return 0;
	}
	if (func_45())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			return 0;
		}
		if (func_5(unk_0x4A8C381C258A124D(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, 1, 0);
	}
	return func_22(unk_0x4A8C381C258A124D(), uParam0->f_1, uParam0->f_10, 1);
}

bool func_45()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

bool func_46(bool bParam0)
{
	if (bParam0)
	{
		return (Global_23692.f_4 && Global_23692.f_104 == 4);
	}
	return Global_23692.f_4;
}

int func_47(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_53())
		{
			return 0;
		}
	}
	if ((((((unk_0x4D9174D8796EA622() || unk_0xEF37E704F02B50F3()) || func_45()) || Global_64160) || func_46(0)) || func_52(0)) || func_48(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0)
{
	if (func_51(iParam0))
	{
		return 1;
	}
	if (func_49(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_50(iParam0, 9);
	}
	return 0;
}

var func_50(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_51(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

int func_52(int iParam0)
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

int func_53()
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	return 1;
}

void func_54(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_56(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_55(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_55(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	fVar1 = (360f / system::to_float(iParam6));
	Var2 = { Param0 };
	Var3 = { Param0 };
	fVar4 = 0f;
	Var2 = { Param0 };
	Var2.f_0 = (Var2.f_0 + (system::sin((fVar4 - fVar1)) * fParam1));
	Var2.f_1 = (Var2.f_1 + (system::cos((fVar4 - fVar1)) * fParam1));
	iVar0 = 0;
	while (iVar0 <= iParam6)
	{
		Var3 = { Param0 };
		Var3.f_0 = (Var3.f_0 + (system::sin(fVar4) * fParam1));
		Var3.f_1 = (Var3.f_1 + (system::cos(fVar4) * fParam1));
		unk_0x9E36887F0AA9DF6D(Var2, Var3, iParam2, iParam3, iParam4, iParam5);
		Var2 = { Var3 };
		fVar4 = (fVar4 + fVar1);
		iVar0++;
	}
}

void func_56(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_57(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_57(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5[8];
	int iVar6;
	
	if (fParam2 == 0f)
	{
		return;
	}
	Var0 = { func_21(Param1 - Param0) };
	Var1 = { func_58(Var0, 0f, 0f, 1f) };
	fVar2 = (fParam2 / 2f);
	Var3 = { Param0 };
	Var4 = { Param1 };
	Var4.f_2 = Param0.f_2;
	Var5[0 /*3*/] = { Var3 - Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[1 /*3*/] = { Var3 + Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[2 /*3*/] = { Var4 + Var1 * Vector(fVar2, fVar2, fVar2) };
	Var5[3 /*3*/] = { Var4 - Var1 * Vector(fVar2, fVar2, fVar2) };
	unk_0x9E36887F0AA9DF6D(Var5[0 /*3*/], Var5[1 /*3*/], uParam3, uParam4, uParam5, uParam6);
	unk_0x9E36887F0AA9DF6D(Var5[1 /*3*/], Var5[2 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x9E36887F0AA9DF6D(Var5[2 /*3*/], Var5[3 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x9E36887F0AA9DF6D(Var5[3 /*3*/], Var5[0 /*3*/], iParam3, iParam4, iParam5, iParam6);
	iVar6 = 0;
	while (iVar6 <= 3)
	{
		Var5[(4 + iVar6) /*3*/] = { Var5[iVar6 /*3*/] };
		Var5[(4 + iVar6) /*3*/].f_2 = Param1.f_2;
		iVar6++;
	}
	unk_0x9E36887F0AA9DF6D(Var5[4 /*3*/], Var5[5 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x9E36887F0AA9DF6D(Var5[5 /*3*/], Var5[6 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x9E36887F0AA9DF6D(Var5[6 /*3*/], Var5[7 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x9E36887F0AA9DF6D(Var5[7 /*3*/], Var5[4 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x9E36887F0AA9DF6D(Var5[0 /*3*/], Var5[4 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x9E36887F0AA9DF6D(Var5[1 /*3*/], Var5[5 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x9E36887F0AA9DF6D(Var5[2 /*3*/], Var5[6 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x9E36887F0AA9DF6D(Var5[3 /*3*/], Var5[7 /*3*/], iParam3, iParam4, iParam5, iParam6);
}

Vector3 func_58(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}

void func_59(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (!func_44(&(Local_38[iParam0 /*24*/])))
	{
		Local_38[iParam0 /*24*/].f_8 = 0;
		iLocal_59[iParam0] = 0;
		return;
	}
	if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		Local_38[iParam0 /*24*/].f_8 = 0;
		iLocal_59[iParam0] = 0;
		return;
	}
	if (iLocal_59[iParam0] == 0)
	{
		if (unk_0x1DD05E817C89C737() > uLocal_58[iParam0])
		{
			iLocal_59[iParam0] = unk_0x666853720ADE415D(Local_57[iParam0 /*3*/], Local_57[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 4);
		}
	}
	else
	{
		iVar0 = unk_0x0E7DD1EBCA8D2DE3(iLocal_59[iParam0], &iVar4, &uVar2, &uVar3, &uVar1);
		if (iVar0 == 2)
		{
			Local_38[iParam0 /*24*/].f_8 = 0;
			if (iVar4 > 0)
			{
				if (unk_0xFC8BFE4B41177C22(uVar1))
				{
					if (unk_0x55B80B6E7AB61270(iVar1))
					{
						Local_38[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_59[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_59[iParam0] = 0;
		}
		uLocal_58[iParam0] = unk_0x1DD05E817C89C737() + 250;
	}
}

void func_60(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_61(int iParam0)
{
	if (!unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(uParam0)))
	{
		return 1;
	}
	if (unk_0xAD830DCD82C63F31(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xAD830DCD82C63F31(iParam0, 1))
	{
		return 1;
	}
	if (unk_0xAD830DCD82C63F31(iParam0, 2))
	{
		return 1;
	}
	if (unk_0xAD830DCD82C63F31(iParam0, 3))
	{
		return 1;
	}
	if (unk_0x7943BD10E2A03FAC(iParam0, 1))
	{
		if (unk_0x54DA32C15F7A6ABA(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!func_29(uParam0))
	{
		return 0;
	}
	if (!unk_0x9DB4F102351D5D9E(uParam0))
	{
		return 1;
	}
	if (unk_0xA6D8AF5A058A75F0(uParam0))
	{
		return 1;
	}
	if (!unk_0xD3CE8D1E6564B011(unk_0x4B423FAA24E8ABF0(uParam0)))
	{
		return 1;
	}
	if (unk_0x5B702A5D1F2635BE(iParam0))
	{
		return 1;
	}
	if (func_65(iParam0, 1))
	{
		return 1;
	}
	if (func_63(iParam0))
	{
		return 1;
	}
	unk_0xC93BAF616F1C680F(unk_0x4B423FAA24E8ABF0(iParam0), &Var0, &Var1);
	if (unk_0x4B423FAA24E8ABF0(iParam0) != joaat("zeno"))
	{
		if (unk_0x1D5CD3EAAA7422B0((Var1.f_0 - Var0.f_0)) > 3,4f)
		{
			return 1;
		}
	}
	if (unk_0x1D5CD3EAAA7422B0((Var1.f_2 - Var0.f_2)) > 2,9f)
	{
		return 1;
	}
	if (Global_79389)
	{
		if (!unk_0x1B1A446EFA398EB5(iParam0))
		{
			return 0;
		}
	}
	if (unk_0x7943BD10E2A03FAC(iParam0, 1) && !unk_0x9DB4F102351D5D9E(iParam0))
	{
		return 1;
	}
	if (!unk_0x7943BD10E2A03FAC(iParam0, 1) && !unk_0x9DB4F102351D5D9E(iParam0))
	{
		return 1;
	}
	if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("btype") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("btype3"))
	{
		if (((((func_29(unk_0xFD5C5BBD1FE92BB7(iParam0, 3, 0)) || func_29(unk_0xFD5C5BBD1FE92BB7(iParam0, 4, 0))) || func_29(unk_0xFD5C5BBD1FE92BB7(iParam0, 5, 0))) || func_29(unk_0xFD5C5BBD1FE92BB7(iParam0, 6, 0))) || func_29(unk_0xFD5C5BBD1FE92BB7(iParam0, 7, 0))) || func_29(unk_0xFD5C5BBD1FE92BB7(iParam0, 8, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x4B423FAA24E8ABF0(uParam0);
	if (func_64(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (unk_0x5318DF85BEB6B95F(iParam0, 2))
		{
			return 1;
		}
		if (unk_0x5318DF85BEB6B95F(iParam0, 3) && unk_0x5318DF85BEB6B95F(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && unk_0x5318DF85BEB6B95F(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && unk_0x5318DF85BEB6B95F(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !unk_0x9DB4F102351D5D9E(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && unk_0x5318DF85BEB6B95F(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !unk_0x5318DF85BEB6B95F(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && unk_0x5318DF85BEB6B95F(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !unk_0x5318DF85BEB6B95F(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (unk_0x5318DF85BEB6B95F(iParam0, 3) && !unk_0x5318DF85BEB6B95F(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	if (iVar0 == joaat("yosemite3"))
	{
		if (unk_0x94C9CD3D66808551(iParam0, 5) == 4)
		{
			return 1;
		}
	}
	if (iVar0 == joaat("rt3000") && unk_0x94C9CD3D66808551(iParam0, 10) == 3)
	{
		return 1;
	}
	if (iVar0 == joaat("brioso3"))
	{
		switch (unk_0x94C9CD3D66808551(iParam0, 10))
		{
			case 1:
			case 4:
			case 7:
			case 10:
				return 1;
			}
		
		default:
	}
	if ((iVar0 == joaat("zr350") || iVar0 == joaat("driftzr350")) && unk_0x94C9CD3D66808551(iParam0, 0) > 10)
	{
		return 1;
	}
	if (iVar0 == joaat("krieger") && unk_0x94C9CD3D66808551(iParam0, 0) > 0)
	{
		return 1;
	}
	if ((iVar0 == joaat("entity3") && unk_0x94C9CD3D66808551(iParam0, 10) >= 0) && unk_0x94C9CD3D66808551(iParam0, 10) <= 4)
	{
		return 1;
	}
	if (iVar0 == joaat("boor") && unk_0x94C9CD3D66808551(iParam0, 10) == 0)
	{
		return 1;
	}
	if (iVar0 == -1444856003)
	{
		return 1;
	}
	if (iVar0 == -1958428933 && !unk_0x5318DF85BEB6B95F(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0)
{
	if (!unk_0xD3CE8D1E6564B011(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("caddy3"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
		case joaat("raptor"):
		case joaat("ratloader2"):
		case joaat("dune3"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("vigilante"):
		case joaat("deluxo"):
		case joaat("caracara"):
		case joaat("scramjet"):
		case joaat("menacer"):
		case joaat("caracara2"):
		case joaat("locust"):
		case joaat("jugular"):
		case joaat("zorrusso"):
		case joaat("formula"):
		case joaat("everon"):
		case joaat("zhaba"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("peyote3"):
		case joaat("youga3"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("winky"):
		case joaat("slamtruck"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("squaddie"):
		case joaat("comet7"):
		case joaat("sm722"):
		case joaat("draugur"):
		case joaat("ratel"):
		case joaat("l35"):
		case joaat("vigero3"):
		case joaat("terminus"):
			return 1;
			break;
	}
	return 0;
}

int func_65(int iParam0, bool bParam1)
{
	if (Global_79389)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0) && (!bParam1 || unk_0xD9F5E1FEFD1329E4(iParam0, 0)))
		{
			if (unk_0x77B62CAA5DF0922A("TestDrive", 2))
			{
				if (unk_0xD130E7CDEE903624(iParam0, "TestDrive"))
				{
					return unk_0x3F40AE65F056B43D(iParam0, "TestDrive");
				}
			}
		}
	}
	return 0;
}

float func_66(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Param1, iParam2);
}

void func_67()
{
	func_73(&(Local_38[0 /*24*/]), 1, "Carwash1", func_74(156), 15, "", 0, 4f);
	func_73(&(Local_38[1 /*24*/]), 1, "Carwash2", func_74(157), 15, "", 0, 4f);
	func_71(&(Local_38[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_71(&(Local_38[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_68(&uLocal_39, 0);
	Local_57[0 /*3*/] = { 47,6f, -1392f, 29,4f };
	Local_57[1 /*3*/] = { -700f, -925,3f, 19f };
}

void func_68(var uParam0, int iParam1)
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_79389)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (unk_0x0BA1A956D36B210F() || func_70())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (unk_0x1226C55CA7D2269A() || func_69())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

var func_69()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

var func_70()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

void func_71(var uParam0, struct<3> Param1, float fParam2)
{
	uParam0->f_12 = { func_21(Param1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_72(fParam2, 0f, 360f);
}

float func_72(float fParam0, float fParam1, float fParam2)
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

void func_73(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { Param3 };
	uParam0->f_4 = sParam5;
	uParam0->f_9 = iParam4;
	uParam0->f_7 = iParam6;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2,75f;
	}
	else
	{
		uParam0->f_10 = (2,75f * 2f);
	}
	if (fParam7 > 0f)
	{
		uParam0->f_10 = fParam7;
	}
}

Vector3 func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_33328[iVar0 /*23*/][0 /*3*/];
}

bool func_75(int iParam0)
{
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	return !unk_0x1C2F771CDC87A3A5(iParam0, 0);
}

void func_76()
{
	func_77(&Local_38);
	func_25(&uLocal_39);
	unk_0xBBC29EBE6E1A48FA();
}

void func_77(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_78(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_78(var uParam0)
{
	*uParam0 = 0;
}

