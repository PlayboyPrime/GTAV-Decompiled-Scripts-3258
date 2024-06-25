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
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
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
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_39 = joaat("blimp");
	iLocal_42 = joaat("s_m_m_pilot_02");
	iLocal_44 = joaat("buzzard");
	if (unk_0x15CCE8886267624F())
	{
		unk_0x10B228D2FDB7AF16(500);
	}
	if (unk_0x96CFB880BAC634CE(18))
	{
		func_18();
	}
	unk_0xDAE61414743C8D1D(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		unk_0x5A18938160AE52D0(255, 255, 255, 255);
		unk_0xBFE94E91C83D8794(0,75f, 0,9f);
		unk_0xE05EB1EAE7CCDC59(0f, 1f);
		func_10(0,05f, 0,63f, "PLCHLD_MISS", 0);
		unk_0x5A18938160AE52D0(255, 255, 255, 255);
		unk_0xBFE94E91C83D8794(0,4f, 0,45f);
		unk_0xE05EB1EAE7CCDC59(0f, 1f);
		func_10(0,05f, 0,7f, "PLCHLD_PASS", 0);
		func_1();
		system::wait(0);
	}
}

void func_1()
{
	struct<3> Var0;
	
	if (unk_0xFC8BFE4B41177C22(uLocal_38))
	{
		if ((unk_0x1C2F771CDC87A3A5(uLocal_38, 0) || unk_0x8D91ADE44AC79BC9(uLocal_38) <= 0) || unk_0x4C7724D572378B05(uLocal_38) <= 0f)
		{
			func_9(&uLocal_40);
			if (unk_0x050D073F91C5243C(uLocal_38))
			{
				unk_0x1D2DAF2A41FFC4A0(uLocal_38);
			}
			if (iLocal_45 == 1)
			{
				Var0 = { unk_0xD1A6A821F5AC81DB(uLocal_38, 0) };
				func_8(Var0);
			}
			if (iLocal_45 == 1)
			{
				func_7(&uLocal_41);
				func_4(&uLocal_38);
			}
			else
			{
				func_3(&uLocal_41, 1, 0, 1);
				func_2(&uLocal_38);
			}
		}
		else if (unk_0x050D073F91C5243C(uLocal_38))
		{
			unk_0x206AB1458FD9522F(uLocal_38, 0,25f);
		}
	}
}

void func_2(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		unk_0x1C2F771CDC87A3A5(*uParam0, 0);
		if (unk_0x110821AE6C63DD4F(*uParam0) && unk_0x7C9905528EE2C3AB(*uParam0, 1))
		{
			unk_0x68298CA6191CDFDB(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x4FAFF4BCB7633475(*uParam0))
		{
			unk_0x788F35D395511DFE(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xBEB96F1A510EE9AA(*uParam0);
			}
			unk_0x44FB298D6382876D(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xAAA71DD7E9059338(*uParam0, 0);
			}
		}
		unk_0xF09E30AF1B8FB379(uParam0);
	}
}

void func_4(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x110821AE6C63DD4F(*uParam0))
		{
			unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (unk_0x110821AE6C63DD4F(*uParam0) && unk_0x7C9905528EE2C3AB(*uParam0, 1))
			{
				if (func_5(unk_0x4A8C381C258A124D()))
				{
					if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), *uParam0, 0))
					{
						unk_0x68298CA6191CDFDB(uParam0);
						return;
					}
				}
				unk_0x8C1F7D7A31B2A38E(uParam0);
			}
		}
		else
		{
			if (func_5(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), *uParam0, 0))
				{
					unk_0x68298CA6191CDFDB(uParam0);
					return;
				}
			}
			unk_0x8C1F7D7A31B2A38E(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_6(var uParam0)
{
	if (func_5(uParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		{
			if (!unk_0x5B702A5D1F2635BE(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(*uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(*uParam0, 0))
		{
			unk_0x788F35D395511DFE(*uParam0, 0, 1);
		}
		if (!unk_0x110821AE6C63DD4F(*uParam0))
		{
			unk_0xEE0BCDB1B5E36BCB(*uParam0, 1, 0);
		}
		unk_0x734A9F4537A31459(uParam0);
	}
}

void func_8(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2[12];
	
	iVar1 = 12;
	Var2[0 /*3*/] = { 5f, 0f, 0f };
	Var2[1 /*3*/] = { 0f, 5f, 0f };
	Var2[2 /*3*/] = { 0f, 0f, 5f };
	Var2[3 /*3*/] = { 5f, 5f, 0f };
	Var2[4 /*3*/] = { 5f, 0f, 5f };
	Var2[5 /*3*/] = { 0f, 5f, 5f };
	Var2[6 /*3*/] = { 20f, 0f, 0f };
	Var2[7 /*3*/] = { 0f, 20f, 0f };
	Var2[8 /*3*/] = { 0f, 0f, 20f };
	Var2[9 /*3*/] = { 20f, 20f, 0f };
	Var2[10 /*3*/] = { 20f, 0f, 20f };
	Var2[11 /*3*/] = { 0f, 20f, 20f };
	unk_0xD2FD15A3D9DEE4CC(Param0, 8, 1f, 1, 0, 1065353216, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		unk_0xD2FD15A3D9DEE4CC(Param0 + Var2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216, 0);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xBC64B805EE071A37(*uParam0, 0);
		unk_0xFE54B8568B2ABD12(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_43);
	unk_0xEC9DAA34BBB4658C(iLocal_44);
	while (!unk_0x6252BC0DD8A320DB(iLocal_44))
	{
		system::wait(0);
	}
	if (func_6(uLocal_38))
	{
		uLocal_43 = unk_0x5779387E956077A6(iLocal_44, unk_0x0D1381B6E0F3987D(uLocal_38, 50f, 0f, 15f), 0f, 1, 1, 0);
		unk_0xA9F7300B498DDED7(uLocal_43);
		func_12(uLocal_43, uLocal_38);
		if (func_5(unk_0x4A8C381C258A124D()))
		{
			unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), uLocal_43, -1);
			unk_0xD815D4BD1AE9E85A(0f, 1065353216);
			unk_0x64BB72494B9DF6DC(0f);
			unk_0x2094BC4B6731BA68(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 500f, 1, 0, 0, 0);
		}
	}
	unk_0x55098D9E9AD58806(iLocal_44);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(unk_0xD1A6A821F5AC81DB(uParam0, 1), unk_0xD1A6A821F5AC81DB(uParam1, 1), 1);
	unk_0x5C96CEA06531AB03(uParam0, uVar0);
}

float func_13(struct<2> Param0, Vector3 vParam1, struct<2> Param2, Vector3 vParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2.f_0 - Param0.f_0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x4964D7A2BFD2F9A3(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&uLocal_40);
	if (func_6(uLocal_38))
	{
		uLocal_40 = func_15(uLocal_38, 1, 5);
	}
}

int func_15(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(uParam0))
	{
		iVar0 = unk_0x18E23E031A9B798F(uParam0);
		unk_0x6A52036D51C7E18E(iVar0, iParam1);
		unk_0x1456FD5C0C438B19(iVar0, iParam2);
		unk_0x5D3946F818C6B331(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	unk_0xEC9DAA34BBB4658C(iLocal_42);
	while (!unk_0x6252BC0DD8A320DB(iLocal_42))
	{
		system::wait(0);
	}
	if (func_6(uLocal_38))
	{
		uLocal_41 = unk_0x8728A378EF2B46B2(uLocal_38, 26, iLocal_42, -1, 1, 1);
		if (func_5(uLocal_41))
		{
			unk_0xAAA71DD7E9059338(uLocal_41, 1);
			unk_0x0428AFDCAA63B06E(uLocal_41, 118, 0);
			unk_0x0428AFDCAA63B06E(uLocal_41, 29, 0);
			unk_0x0428AFDCAA63B06E(uLocal_41, 116, 0);
		}
	}
	if (func_6(uLocal_38))
	{
		unk_0x88556DA0593A0748(uLocal_38, 1, "Blimp_City", 1);
	}
	unk_0x55098D9E9AD58806(iLocal_42);
}

void func_17()
{
	struct<3> Var0;
	
	if (func_6(uLocal_38) && unk_0x050D073F91C5243C(uLocal_38))
	{
		unk_0x1D2DAF2A41FFC4A0(uLocal_38);
	}
	func_9(&uLocal_40);
	func_7(&uLocal_41);
	func_4(&uLocal_38);
	unk_0xEC9DAA34BBB4658C(iLocal_39);
	unk_0xD772E6694B8472A6(1, "Blimp_City");
	while (!unk_0x6252BC0DD8A320DB(iLocal_39) || !unk_0x266D9DB5FCE4003B(1, "Blimp_City"))
	{
		system::wait(0);
	}
	Var0 = { unk_0x32D675332B7BEAC5(unk_0x95610E68DFCFC225(1, "Blimp_City"), 0f) };
	uLocal_38 = unk_0x5779387E956077A6(iLocal_39, unk_0x763EEC52E292B5A0(unk_0x95610E68DFCFC225(1, "Blimp_City"), 0f), Var0.f_2, 1, 1, 0);
	unk_0x55098D9E9AD58806(iLocal_39);
}

void func_18()
{
	if (func_6(uLocal_38) && unk_0x050D073F91C5243C(uLocal_38))
	{
		unk_0x1D2DAF2A41FFC4A0(uLocal_38);
	}
	unk_0x7821F942CAEEBEE1(1, "Blimp_city");
	func_9(&uLocal_40);
	func_3(&uLocal_41, 1, 0, 1);
	func_2(&uLocal_38);
	func_2(&uLocal_43);
	unk_0x55098D9E9AD58806(iLocal_42);
	unk_0x55098D9E9AD58806(iLocal_39);
	unk_0x55098D9E9AD58806(iLocal_44);
	unk_0xDAE61414743C8D1D(6);
	unk_0xBBC29EBE6E1A48FA();
}

