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
	struct<10> Local_59 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_60 = 0;
	struct<3> Local_61[32];
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	struct<21> Local_68 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (!func_234(ScriptParam_68))
		{
			func_228();
		}
		if (ScriptParam_68.f_16 >= 32)
		{
			if (func_227(unk_0x259BE71D8A81D4FA()) != 1 && !BitTest(Global_2738934.f_932.f_7, 0))
			{
				func_228();
			}
		}
	}
	uLocal_63 = ScriptParam_68.f_19;
	while (true)
	{
		func_226();
		if (func_219())
		{
			func_228();
		}
		if (ScriptParam_68.f_16 >= 32)
		{
			if (func_227(unk_0x259BE71D8A81D4FA()) != 1 && Global_1881953 == 0)
			{
				func_228();
			}
		}
		if (unk_0xF859473E4AD09F30() != iLocal_67)
		{
			func_228();
		}
		unk_0x102543889D51BCB6();
		switch (func_218(unk_0xAE032CEDCF23C6D5()))
		{
			case 0:
				if (func_217())
				{
					if (func_216() == 1)
					{
						Local_61[unk_0xAE032CEDCF23C6D5() /*3*/] = 1;
					}
					else if (func_216() == 4)
					{
						Local_61[unk_0xAE032CEDCF23C6D5() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_216() == 1)
				{
					func_191();
				}
				else if (func_216() == 4)
				{
					Local_61[unk_0xAE032CEDCF23C6D5() /*3*/] = 3;
				}
				if (Local_61[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 == 0)
				{
					if ((!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_59.f_3, 500f, 500f, 500f, 0, 1, 0) && func_227(unk_0x259BE71D8A81D4FA()) != 1) && !BitTest(Global_2738934.f_932.f_7, 0))
					{
						Local_61[unk_0xAE032CEDCF23C6D5() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_189(&(Local_59.f_9));
				if (func_188(&(Local_59.f_9)))
				{
					Local_61[unk_0xAE032CEDCF23C6D5() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_61[unk_0xAE032CEDCF23C6D5() /*3*/] = 4;
			
			case 4:
				func_228();
				break;
		}
		if (unk_0x93E08E0F531E2C35())
		{
			switch (func_216())
			{
				case 0:
					if (func_7())
					{
						Local_59.f_0 = 1;
					}
					break;
				
				case 1:
					func_6();
					func_5();
					if (func_1())
					{
						Local_59.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_59.f_7 >= 32 && func_227(unk_0x259BE71D8A81D4FA()) == 1)
	{
		if (func_4(Global_2738934.f_932.f_1))
		{
			return 1;
		}
	}
	if (func_3(unk_0x259BE71D8A81D4FA()))
	{
		return 1;
	}
	if (Local_59.f_8 == 2)
	{
		return 1;
	}
	return 0;
}

int func_3(int iParam0)
{
	var uVar0;
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
		uVar0 = unk_0x56E414973C2A8C0E(iParam0);
		if (unk_0xFC8BFE4B41177C22(uVar0))
		{
			iVar1 = unk_0x4B423FAA24E8ABF0(uVar0);
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

int func_4(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_5()
{
	switch (Local_59.f_8)
	{
		case 0:
			if (!unk_0x2FC2FDC413532977(Local_59.f_2) || Local_59.f_6 != -1)
			{
				Local_59.f_8 = 1;
			}
			break;
		
		case 1:
			Local_59.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x95C7A22DBE7AEF4C())
	{
		if (unk_0x7206AEB20960CCC8(unk_0xF0C9E5565CB32F4B(iVar0)))
		{
			if (Local_59.f_6 == -1)
			{
				if (BitTest(Local_61[iVar0 /*3*/].f_1, 0))
				{
					Local_59.f_6 = iVar0;
				}
			}
			if (!BitTest(Local_59.f_1, 7))
			{
				if (BitTest(Local_61[iVar0 /*3*/].f_1, 1))
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_59.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

int func_7()
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	struct<35> Var7;
	
	if (!unk_0x2FC2FDC413532977(Local_59.f_2))
	{
		if (func_217())
		{
			if (unk_0x78D35ABAF71764AD(1))
			{
				fVar3 = 250f;
				Var4 = { Local_59.f_3 };
				if (BitTest(Local_59.f_1, 8))
				{
					Var0 = { Global_2738934.f_932.f_1 };
					uVar1 = Global_2738934.f_932.f_4;
				}
				if (func_227(unk_0x259BE71D8A81D4FA()) == 7)
				{
					iVar6 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
					if (Global_4718592.f_3592[iVar6 /*25891*/].f_3146[0 /*36*/].f_23 > 0f)
					{
						Var4 = { Global_4718592.f_3592[iVar6 /*25891*/].f_3146[0 /*36*/].f_16 };
						Var5 = { Global_4718592.f_3592[iVar6 /*25891*/].f_3146[0 /*36*/].f_19 };
						fVar3 = Global_4718592.f_3592[iVar6 /*25891*/].f_3146[0 /*36*/].f_23;
						iVar2 = 1;
					}
					else if (Global_4718592.f_3592[iVar6 /*25891*/].f_3146[0 /*36*/].f_22 > 0f)
					{
						Var4 = { Global_4718592.f_3592[iVar6 /*25891*/].f_3146[0 /*36*/].f_13 };
						fVar3 = Global_4718592.f_3592[iVar6 /*25891*/].f_3146[0 /*36*/].f_22;
					}
				}
				Var7.f_5 = 1115815936;
				Var7.f_13 = 2;
				Var7.f_20 = 2;
				Var7.f_32 = -1082130432;
				Var7.f_34 = 1;
				Var7.f_4 = 1;
				Var7.f_5 = 30f;
				Var7.f_10 = 1;
				if (iVar2 == 0)
				{
					if (BitTest(Local_59.f_1, 8) || func_187(Var4, fVar3, &Var0, &uVar1, &Var7))
					{
						if (Local_59.f_7 >= 32 || func_227(unk_0x259BE71D8A81D4FA()) == 1)
						{
							Local_59.f_2 = unk_0x16FE0AE33E462D17(unk_0x29F49A5884D2FD3C(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_59.f_2 = unk_0x16FE0AE33E462D17(unk_0x77573CD394E8C3B1(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
						}
						unk_0x5C96CEA06531AB03(unk_0xAB3646235DE50E93(Local_59.f_2), uVar1);
					}
				}
				else if (BitTest(Local_59.f_1, 8) || func_8(Var4, Var5, fVar3, &Var0, &uVar1, Var7))
				{
					if (Local_59.f_7 >= 32 || func_227(unk_0x259BE71D8A81D4FA()) == 1)
					{
						Local_59.f_2 = unk_0x16FE0AE33E462D17(unk_0x29F49A5884D2FD3C(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_59.f_2 = unk_0x16FE0AE33E462D17(unk_0x77573CD394E8C3B1(joaat("pickup_portable_package"), Var0, 1, joaat("prop_drug_package_02")));
					}
					unk_0x5C96CEA06531AB03(unk_0xAB3646235DE50E93(Local_59.f_2), uVar1);
				}
			}
		}
	}
	if (unk_0x2FC2FDC413532977(Local_59.f_2))
	{
		return 1;
	}
	return 0;
}

int func_8(struct<3> Param0, struct<3> Param1, float fParam2, var uParam3, var uParam4, struct<8> Param5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32)
{
	struct<17> Var0;
	struct<29> Var1;
	
	if (Param5.f_5 < 20f)
	{
		Param5.f_5 = 20f;
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1.f_28 = -1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 2;
	Var1.f_8 = { Param0 };
	Var1.f_11 = { Param1 };
	Var1.f_14 = fParam2;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	Param5.f_7 = 0;
	if (func_9(&Var1, &Param5, &Var0))
	{
		*uParam3 = { Var0[0 /*3*/] };
		*uParam4 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_9(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	struct<61> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2635563.f_2766 == *uParam0 || !Global_2635563.f_2766.f_1 == uParam0->f_1) || !Global_2635563.f_2766.f_2 == uParam0->f_2) || !Global_2635563.f_2769 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2635563.f_2780 == uParam0->f_8 || !Global_2635563.f_2780.f_1 == uParam0->f_8.f_1) || !Global_2635563.f_2780.f_2 == uParam0->f_8.f_2) || !Global_2635563.f_2783 == uParam0->f_11) || !Global_2635563.f_2783.f_1 == uParam0->f_11.f_1) || !Global_2635563.f_2783.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2635563.f_2780 == uParam0->f_8 || !Global_2635563.f_2780.f_1 == uParam0->f_8.f_1) || !Global_2635563.f_2780.f_2 == uParam0->f_8.f_2) || !Global_2635563.f_2783 == uParam0->f_11) || !Global_2635563.f_2783.f_1 == uParam0->f_11.f_1) || !Global_2635563.f_2783.f_2 == uParam0->f_11.f_2) || !Global_2635563.f_2786 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2635563.f_2787 == uParam0->f_7)
		{
			bVar13 = true;
		}
		if (unk_0xF40767E41852FB72(Global_2635563.f_2773) && !Global_2635563.f_2773 == unk_0x8F76B2250AC806FA())
		{
			bVar13 = true;
		}
	}
	if (bVar13)
	{
		if (Global_2635563.f_2764 == 1)
		{
			if (unk_0xF40767E41852FB72(Global_2635563.f_2773))
			{
				if (Global_2635563.f_2773 == unk_0x8F76B2250AC806FA())
				{
					if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2770) < func_186(0))
					{
						return 0;
					}
				}
				else if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2770) < func_186(0))
				{
					return 0;
				}
			}
			unk_0xAE83F6C70E4B78E3();
			unk_0xE07943643E972CC4();
			func_185();
		}
		Global_2635563.f_2764 = 0;
	}
	else if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2770) > func_186(0))
	{
		Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
		func_179();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0,5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0,5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0,5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0,5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0,5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0,5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0,5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0,5f * uParam0->f_14));
			}
			break;
	}
	unk_0x693ACD1AA0BDB375(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_11 * Vector(0,5f, 0,5f, 0,5f) };
	}
	Var7 = { Var6 + Vector(-0,1f, -0,1f, -0,1f) };
	Var8 = { Var6 + Vector(0,1f, 0,1f, 0,1f) };
	if (!Global_2635563.f_2764)
	{
		unk_0xAE83F6C70E4B78E3();
		unk_0xE07943643E972CC4();
		func_185();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (system::vmag(*uParam0) > 0f)
			{
				if (func_178(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!unk_0xBC88293FA9783DEB())
		{
			Global_2635563.f_2787 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2635563.f_2766 = { *uParam0 };
					Global_2635563.f_2769 = uParam0->f_4;
					break;
				
				case 1:
					Global_2635563.f_2780 = { uParam0->f_8 };
					Global_2635563.f_2783 = { uParam0->f_11 };
					Global_2635563.f_2786 = 0f;
					Global_2635563.f_2766 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2635563.f_2780 = { uParam0->f_8 };
					Global_2635563.f_2783 = { uParam0->f_11 };
					Global_2635563.f_2786 = uParam0->f_14;
					Global_2635563.f_2766 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_177(Var6.f_0, Var6.f_1);
			}
			Global_2635563.f_2765 = 1;
			Global_2635563.f_2764 = 1;
			Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
			Global_2635563.f_2770 = unk_0x7E3F74F641EE6B27();
			Global_2635563.f_2773 = unk_0x8F76B2250AC806FA();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2635563.f_2764)
	{
		if (Global_2635563.f_2765 == 1)
		{
			if (unk_0xFFEB5F24B372DFF6(fVar2, fVar3, fVar4, fVar5) || unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2771) > 5000)
			{
				Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_176(Global_4718592.f_185586))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_149(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_148(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2635563.f_2765 = 9;
				}
				else
				{
					Global_2635563.f_2765 = 2;
				}
			}
		}
		if (Global_2635563.f_2765 == 2)
		{
			if ((unk_0x75A7B7B3DF681621(Var7, Var8) || unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2771) > 15000) || unk_0x758F97A0C79EEFBF(Var7, Var8) == 0)
			{
				Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
				if (uParam0->f_5 && !func_145(unk_0x259BE71D8A81D4FA(), 0))
				{
					Global_2635563.f_2765 = 3;
				}
				else
				{
					Global_2635563.f_2765 = 4;
				}
			}
			else if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2775) > 7000)
			{
				func_144(Var6.f_0, Var6.f_1);
			}
		}
		if (Global_2635563.f_2765 == 3)
		{
			if (func_143() || unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2771) > 10000)
			{
				Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
				Global_2635563.f_2765 = 4;
			}
		}
		if (Global_2635563.f_2765 == 4)
		{
			if (unk_0xBC88293FA9783DEB())
			{
				unk_0xAE83F6C70E4B78E3();
				unk_0xE07943643E972CC4();
			}
			else
			{
				iVar0 = 0;
				func_179();
				if (uParam0->f_5)
				{
					if (system::vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (unk_0x4249B4032FDD750E(unk_0x259BE71D8A81D4FA(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
								Global_2635563.f_2765 = 5;
							}
							break;
						
						case 1:
							func_142(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
							if (unk_0x243CFDECC076762E(unk_0x259BE71D8A81D4FA(), Var10, Var11, uVar12, *uParam1, iVar0))
							{
								Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
								Global_2635563.f_2765 = 5;
							}
							break;
						
						case 2:
							if (unk_0x243CFDECC076762E(unk_0x259BE71D8A81D4FA(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
								Global_2635563.f_2765 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
					Global_2635563.f_2765 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							unk_0x965EA50BC3B24F5B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_142(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
							unk_0xC9666089A105E4BD(Var10, Var11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							unk_0xC9666089A105E4BD(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2635563.f_2765 == 5)
		{
			if (func_64(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2635563.f_2791.f_5)
				{
					Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
					Global_2635563.f_2765 = 6;
				}
				else
				{
					Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
					if (!uParam0->f_5)
					{
						if (!system::vmag(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1);
						}
					}
					Global_2635563.f_2765 = 9;
				}
			}
			else if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2771) > 20000)
			{
				unk_0xAE83F6C70E4B78E3();
				unk_0xE07943643E972CC4();
				Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
				Global_2635563.f_2765 = 8;
			}
		}
		if (Global_2635563.f_2765 == 6)
		{
			iVar0 = 0;
			Global_2635563.f_2791.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_63(uParam0->f_4))
				{
					if (unk_0xF8A8852F99E201DD(unk_0x0E171121A3A25363(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_62(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (unk_0xF8A8852F99E201DD(unk_0x0E171121A3A25363(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
			Global_2635563.f_2765 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					unk_0x965EA50BC3B24F5B(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_142(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &uVar12);
					unk_0xC9666089A105E4BD(Var10, Var11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					unk_0xC9666089A105E4BD(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2635563.f_2765 == 7)
		{
			if (func_64(uParam2, uParam0, uParam1, 1))
			{
				if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!system::vmag(Global_2635563.f_2925[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_148(Global_2635563.f_2925[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2635563.f_2925[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_60(Global_2635563.f_2925[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2635563.f_2925[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (unk_0x26715B0ED6702C87(Global_2635563.f_2925[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2635563.f_2925[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (system::vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_12(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
				if (!system::vmag(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1);
						iVar9++;
					}
				}
				Global_2635563.f_2765 = 9;
			}
			else if (unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2635563.f_2771) > 20000)
			{
				Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
				Global_2635563.f_2765 = 8;
			}
		}
		if (Global_2635563.f_2765 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_11(Global_2635563.f_489))
				{
				}
			}
			else if (Global_2635563.f_2791.f_2)
			{
				func_10(uParam2, &(Global_2635563.f_2791.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2635563.f_2766 };
				func_12(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2635563.f_2771 = unk_0x7E3F74F641EE6B27();
			Global_2635563.f_2765 = 9;
		}
		if (Global_2635563.f_2765 == 9)
		{
			Global_2635563.f_2764 = 0;
			unk_0xAE83F6C70E4B78E3();
			unk_0xE07943643E972CC4();
			func_185();
			return 1;
		}
		Global_2635563.f_2770 = unk_0x7E3F74F641EE6B27();
	}
	return 0;
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_11(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_12(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar1;
	struct<61> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var7 = { *uParam5 };
						if (func_63(uParam5->f_4) || !unk_0xF8A8852F99E201DD(unk_0x0E171121A3A25363(Var7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0,5f, 0,5f, 0,5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, 0f) || !unk_0xF8A8852F99E201DD(unk_0x0E171121A3A25363(Var7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0,5f, 0,5f, 0,5f) };
						if (func_62(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !unk_0xF8A8852F99E201DD(unk_0x0E171121A3A25363(Var7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_28(*uParam0, &Var0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (func_24(unk_0x259BE71D8A81D4FA(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_149(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				break;
			
			case 2:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_23(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_28(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!func_23(Var0, uParam5->f_7, Var8, Var9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var8 + Var9 * Vector(0,5f, 0,5f, 0,5f) };
					}
					else
					{
						Var0 = { Var8 };
					}
					if (unk_0xB1EAADCB692D69CE(Var0, &uVar3, 0, 0))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else if (func_13(uParam0, 1, 1, 1, 1))
			{
				func_12(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var8 + Var9 * Vector(0,5f, 0,5f, 0,5f) };
				}
				else
				{
					Var0 = { Var8 };
				}
				if (unk_0xB1EAADCB692D69CE(Var0, &uVar3, 0, 0))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2635563.f_667 = 1;
}

int func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
				if (func_22(*uParam0, &(Global_2640820[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							func_14(&Var1, &(Global_2640820[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_13(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_14(&Var1, &(Global_2640820[iVar0 /*17*/]), 1036831949, 1, 0);
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

void func_14(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_21(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635563.f_3035) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_19(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635563.f_3035) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_18(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_15(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_15(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)
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
	Var2 = { func_17(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(system::vmag(Var2)) };
	fVar3 = (system::vmag(Var1) * system::sin(unk_0x20A3B1C2EC4167BB(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
	if (fVar3 < (fParam3 * 0,5f))
	{
		if (!bParam5)
		{
			if (func_16(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0,5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0,5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_16(Var2, Var1) >= 0f)
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
		Var2 = { func_17(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(system::vmag(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0,5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { func_17(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(system::vmag(Var2)) };
		fVar3 = (system::vmag(Var11) * system::sin(unk_0x20A3B1C2EC4167BB(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
		if (!bParam5)
		{
			if (func_16(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0,5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0,5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_16(Var2, Var11) >= 0f)
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

float func_16(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_17(struct<3> Param0, struct<3> Param1)
{
	return ((Param0.f_1 * Param1.f_2) - (Param0.f_2 * Param1.f_1)), ((Param0.f_2 * Param1.f_0) - (Param0.f_0 * Param1.f_2)), ((Param0.f_0 * Param1.f_1) - (Param0.f_1 * Param1.f_0));
}

void func_18(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
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

void func_19(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)
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
			func_20(&Var0, 0f, 0f, unk_0xD2AA6F822D3A55D2(0f, 360f));
		}
		else
		{
			func_20(&Var0, 0f, 0f, fParam5);
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

void func_20(var uParam0, struct<3> Param1)
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

Vector3 func_21(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam4)
	{
		case 0:
			func_19(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_18(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		
		case 2:
			func_15(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x8B777C12D64DF209(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_148(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_60(Var1, Param1, Param2, 0, 0))
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

int func_22(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_148(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2635563.f_3035) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_60(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
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

int func_23(struct<3> Param0, int iParam1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	switch (iParam1)
	{
		case 0:
			if (system::vdist(Param0, Param2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_60(Param0, Param2, Param3, 0, 0);
			break;
		
		case 2:
			return unk_0x26715B0ED6702C87(Param0, Param2, Param3, fParam4, 0, 1);
			break;
	}
	return 0;
}

int func_24(int iParam0, bool bParam1)
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
	if (iParam0 != func_27())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1 && Global_2657971[iParam0 /*465*/].f_322.f_11 != func_27())
			{
				return func_25(Global_2657971[iParam0 /*465*/].f_322.f_8) == 12;
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
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

int func_27()
{
	return -1;
}

int func_28(struct<3> Param0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_59(Param0, uParam1))
	{
		if (func_29(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (unk_0xC0EEE6A2207F3CB8(Param0, 0, uParam1, iParam2))
	{
		if (func_29(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(struct<3> Param0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = system::vdist(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_45(Global_2635563.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_33(*uParam1, 1056964608))
			{
				if (!func_30(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_30(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { *uParam0 };
	iVar2 = func_32(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2642438[iVar2])
	{
		if (func_31(Var1, &(Global_2641042[iVar2 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&Var1, Global_2641042[iVar2 /*155*/][iVar0 /*7*/], Global_2641042[iVar2 /*155*/][iVar0 /*7*/].f_3, Global_2641042[iVar2 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642438[8])
	{
		if (func_31(Var1, &(Global_2641042[8 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&Var1, Global_2641042[8 /*155*/][iVar0 /*7*/], Global_2641042[8 /*155*/][iVar0 /*7*/].f_3, Global_2641042[8 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_31(struct<3> Param0, var uParam1)
{
	return unk_0x26715B0ED6702C87(Param0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_32(struct<2> Param0, var uParam1)
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

int func_33(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	if (func_42(unk_0x259BE71D8A81D4FA(), 1, 0))
	{
		if (Global_4980736.f_47367 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_47367)
			{
				if (Global_4980736.f_47368[iVar0 /*163*/].f_7 != 0)
				{
					if (func_34(Param0, Global_4980736.f_47368[iVar0 /*163*/], Global_4980736.f_47368[iVar0 /*163*/].f_6, Global_4980736.f_47368[iVar0 /*163*/].f_7, fParam1))
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
					if (func_34(Param0, Global_4980736.f_7002[iVar0 /*609*/], Global_4980736.f_7002[iVar0 /*609*/].f_3, Global_4980736.f_7002[iVar0 /*609*/].f_15, 0,5f))
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
					if (func_34(Param0, Global_4980736.f_98448[iVar0 /*600*/], Global_4980736.f_98448[iVar0 /*600*/].f_3, Global_4980736.f_98448[iVar0 /*600*/].f_12, 0,5f))
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
					if (func_34(Param0, unk_0xD1A6A821F5AC81DB(Global_1058116.f_233[iVar0], 1), unk_0xCFC0C995455A6204(Global_1058116.f_233[iVar0]), unk_0x4B423FAA24E8ABF0(Global_1058116.f_233[iVar0]), 0,5f))
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
					if (func_34(Param0, unk_0xD1A6A821F5AC81DB(Global_1058116.f_119[iVar0], 1), unk_0xCFC0C995455A6204(Global_1058116.f_119[iVar0]), unk_0x4B423FAA24E8ABF0(Global_1058116.f_119[iVar0]), 0,5f))
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

int func_34(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (system::vdist(Param0, Param1) < func_41(iParam3, 1008981770))
	{
		func_35(Param1, fParam2, iParam3, &Var0, &Var1, &fVar2, fParam4);
		if (unk_0x26715B0ED6702C87(Param0, Var0, Var1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_35(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	Var0 = { 0f, 1f, 0f };
	func_20(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(system::vmag(Var0)) };
	func_36(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0,5f * unk_0x1D5CD3EAAA7422B0((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0,5f * unk_0x1D5CD3EAAA7422B0((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = unk_0x1D5CD3EAAA7422B0((Var2.f_0 - Var1.f_0));
}

void func_36(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x441B9C85D0FFA9ED(iParam0))
	{
		unk_0xC93BAF616F1C680F(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_39(iParam0);
		if (iVar0 != 0)
		{
			func_37(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_37(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_38(iParam0, &Global_1578033);
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

void func_38(int iParam0, var uParam1)
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

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_40(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_41(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_36(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (system::sqrt(((((Var2.f_0 * 0,5f) * (Var2.f_0 * 0,5f)) + ((Var2.f_1 * 0,5f) * (Var2.f_1 * 0,5f))) + ((Var2.f_2 * 0,5f) * (Var2.f_2 * 0,5f)))) + fParam1);
	return fVar3;
}

int func_42(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_43(iParam0))
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

bool func_43(int iParam0)
{
	return func_44(iParam0);
}

var func_44(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

int func_45(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_52(Param0))
	{
		if (func_13(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_47(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_46(*uParam1, 1056964608))
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
				func_19(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_46(struct<3> Param0, float fParam1)
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

int func_47(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_49(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_14(&Var2, &(Global_2635563.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_49(Var2, &uVar1) || func_48(Var2))
			{
				Var2 = { *uParam0 };
				func_14(&Var2, &(Global_2635563.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_48(struct<3> Param0)
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

int func_49(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_51())
	{
		return 0;
	}
	iVar1 = func_50();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2635563.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (func_22(Param0, &(Global_2635563.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_50()
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

bool func_51()
{
	return Global_1943520.f_559;
}

int func_52(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2635563.f_515 && !Global_2635563.f_516)
	{
		if (!Global_2635563.f_45.f_317)
		{
			if (!func_56(unk_0x259BE71D8A81D4FA(), 1))
			{
				return 1;
			}
			if (!func_55(Param0, 1008981770))
			{
				if (!func_13(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_13(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_54(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_53(&(Global_2635563.f_45[iVar0 /*12*/])) };
					if (!func_13(&Var1, 0, 0, 0, 1))
					{
						if (!func_13(&Param0, 0, 0, 0, 1))
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

Vector3 func_53(var uParam0)
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

int func_54(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635563.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(Param0, &(Global_2635563.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(struct<3> Param0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635563.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(Param0, &(Global_2635563.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_56(int iParam0, bool bParam1)
{
	if (func_58() != 0)
	{
		return func_57(iParam0) != 0;
	}
	return func_42(iParam0, bParam1, 0);
}

int func_57(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		return Global_2657971[iParam0 /*465*/].f_1;
	}
	return 0;
}

int func_58()
{
	return Global_32948;
}

int func_59(struct<3> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999,9f;
	if (Global_2635563.f_2562 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2635563.f_2562)
		{
			fVar3 = system::vdist(Global_2635563.f_2563[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2635563.f_2563[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_60(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)
{
	func_61(&Param1, &Param2);
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

void func_61(var uParam0, var uParam1)
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

int func_62(struct<3> Param0, struct<3> Param1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (Param0.f_0 > Param1.f_0)
	{
		Var1.f_0 = Param0.f_0;
		Var0.f_0 = Param1.f_0;
	}
	else
	{
		Var1.f_0 = Param1.f_0;
		Var0.f_0 = Param0.f_0;
	}
	if (Param0.f_1 > Param1.f_1)
	{
		Var1.f_1 = Param0.f_1;
		Var0.f_1 = Param1.f_1;
	}
	else
	{
		Var1.f_1 = Param1.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param1.f_2)
	{
		Var1.f_2 = Param0.f_2;
		Var0.f_2 = Param1.f_2;
	}
	else
	{
		Var1.f_2 = Param1.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (system::vmag(Var1 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_63(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_64(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2635563.f_2791.f_1 == 0 && Global_2635563.f_2791 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (unk_0xC86D271C3C15DE36(&(Global_2635563.f_2791.f_1)))
			{
				case 0:
					func_140(uParam1, uParam2);
					if (!Global_2635563.f_2791.f_2)
					{
						if (uParam2->f_7 && Global_2635563.f_555.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2635563.f_2766 };
							}
							if (uParam1->f_5 && func_11(Global_2635563.f_489))
							{
								if (!Global_2635563.f_2791.f_5)
								{
									Global_2635563.f_2791.f_5 = 1;
								}
								else
								{
									func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_12(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = unk_0xD2AA6F822D3A55D2(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_140(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (unk_0xBC88293FA9783DEB())
		{
			if (!unk_0x54CEFF81D65925A1())
			{
				if (unk_0x35705F8A1AB3E367())
				{
					func_140(uParam1, uParam2);
					Global_2635563.f_2791.f_1 = unk_0x53367B4589EB191D();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				unk_0xE07943643E972CC4();
				func_140(uParam1, uParam2);
				if (!Global_2635563.f_2791.f_2)
				{
					Global_2635563.f_2791.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_137(Global_2635563.f_555, &(Global_2635563.f_2791.f_57), &(Global_2635563.f_2791.f_90));
	}
	if (uParam2->f_7 && !Global_2635563.f_2791.f_4)
	{
		Global_2635563.f_2791.f_4 = 1;
		func_72(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2635563.f_2791.f_1 > 0 || Global_2635563.f_2791 > 0)
	{
		if (uParam1->f_5 || unk_0xBC88293FA9783DEB())
		{
			iVar2 = 0;
			while (iVar2 < Global_2635563.f_2791.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2635563.f_2791.f_3)
					{
						iVar2 = Global_2635563.f_2791.f_3 + 1;
					}
					if (iVar2 > (Global_2635563.f_2791.f_1 - 1))
					{
						iVar2 = (Global_2635563.f_2791.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						unk_0x308E9BE8B02DA53E(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57,29578f);
					}
					else
					{
						unk_0x47B485915DC62445(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = unk_0xD47DD48CBAF4A6B5(iVar2);
					}
					else
					{
						unk_0xD0905E590E711B1A(iVar2, &iVar3);
					}
					func_72(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2635563.f_2791.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2635563.f_2791.f_1;
		}
		if (Global_2635563.f_2791.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2635563.f_3198)
			{
				func_66(&(Global_2635563.f_2791.f_6[0 /*10*/]), &(Global_2635563.f_2791.f_6[1 /*10*/]), &(Global_2635563.f_2791.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_11(Global_2635563.f_489))
			{
				if (Global_2635563.f_2791.f_2)
				{
					func_10(uParam0, &(Global_2635563.f_2791.f_6));
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2635563.f_2766 };
					func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xD2AA6F822D3A55D2(0f, 360f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2635563.f_2791.f_2)
			{
				func_10(uParam0, &(Global_2635563.f_2791.f_6));
				func_65(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = unk_0xC5935DFB3F39785A(0, Global_2635563.f_2791.f_1);
				unk_0x308E9BE8B02DA53E(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_30(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57,29578f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2635563.f_2766 };
					func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = unk_0xD2AA6F822D3A55D2(0f, 360f);
					func_65(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2635563.f_2766 };
				func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = unk_0xD2AA6F822D3A55D2(0f, 360f);
				func_65(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2635563.f_2766 };
		if (uParam1->f_5 && func_11(Global_2635563.f_489))
		{
			if (!Global_2635563.f_2791.f_5)
			{
				Global_2635563.f_2791.f_5 = 1;
			}
			else
			{
				func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_12(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = unk_0xD2AA6F822D3A55D2(0f, 360f);
		func_65(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_65(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2635563.f_2925[(3 - iVar0) /*3*/] = { Global_2635563.f_2925[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2635563.f_2925[0 /*3*/] = { Param0 };
}

void func_66(var uParam0, var uParam1, var uParam2)
{
	if (func_11(Global_2635563.f_489) && func_71() < 4096)
	{
		func_70(uParam0, 0f);
		func_70(uParam1, uParam0->f_2);
		func_70(uParam2, uParam1->f_2);
	}
	else
	{
		func_69(uParam0);
		func_68(uParam2, uParam0->f_4);
		func_67(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_67(var uParam0, struct<3> Param1, struct<3> Param2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] > 0)
		{
			fVar2 = system::vdist(Global_2638815[iVar0 /*10*/].f_4, Param1);
			fVar3 = system::vdist(Global_2638815[iVar0 /*10*/].f_4, Param2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2638815[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2638815[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_68(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] > 0)
		{
			fVar2 = system::vdist(Global_2638815[iVar0 /*10*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2638815[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2638815[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_69(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] > 0)
		{
			if (Global_2638815[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2638815[iVar0 /*10*/].f_1;
				Var2 = { Global_2638815[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_70(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999,9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] > 0)
		{
			if (Global_2638815[iVar0 /*10*/].f_2 < fVar1 && Global_2638815[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2638815[iVar0 /*10*/].f_2;
				Var2 = { Global_2638815[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2638815[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_72(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2635563.f_489 == 1)
		{
			if (unk_0x1D5CD3EAAA7422B0((Global_2635563.f_512.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_133(unk_0x259BE71D8A81D4FA()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_132(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!unk_0x830B1CF1020074B8(unk_0x4A8C381C258A124D(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!unk_0x830B1CF1020074B8(unk_0x4A8C381C258A124D(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_131(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (system::vmag(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!system::vdist(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((system::vmag(uParam3->f_23) > 0f && system::vmag(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (unk_0x26715B0ED6702C87(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, 0, 1))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_125(Param0, fParam1, uParam2->f_15, func_130(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2635563.f_3;
		}
	}
	else if (!func_122(Param0, 25f, unk_0x259BE71D8A81D4FA(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3,5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_119(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_119(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2635563.f_701)
		{
			Var12 = { Global_2635563.f_512 };
			if (Global_2635563.f_489 == 26)
			{
				Var12 = { Global_2635563.f_555.f_18 };
			}
			if (!func_46(Param0, 0,5f))
			{
				if (func_52(Var12))
				{
					if (!func_13(&Param0, 0, 0, 0, 1) && !func_118(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_118(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_117(Param0, 2,5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_116(unk_0x259BE71D8A81D4FA()) && func_114(unk_0x259BE71D8A81D4FA())))
		{
			if (!func_113(&Param0, &(Global_2635563.f_2791.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_114(unk_0x259BE71D8A81D4FA()))
		{
			if (!func_112(Param0, &(Global_2635563.f_2791.f_57), &(Global_2635563.f_2791.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_111(Param0))
	{
		if (uParam2->f_5)
		{
			if (func_11(Global_2635563.f_489))
			{
				if (func_55(Param0, 0,01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_110(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2635563.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (unk_0xF8A8852F99E201DD(unk_0x0E171121A3A25363(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (unk_0xF8A8852F99E201DD(unk_0x0E171121A3A25363(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2635563.f_701)
		{
			if (!func_47(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_30(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_54(Param0, 1008981770);
		if (iVar14 > -1)
		{
			func_109(Param0, &Var15, &Var16, &fVar17);
			if (!func_104(&(Global_2635563.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_33(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (unk_0x2DBCF31839B069B4(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0,3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (unk_0x913602ADD2D86A7A(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_103(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2635563.f_3198 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_94(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_94(Param0, Global_2635563.f_2766, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_11(Global_2635563.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = func_92(Param0);
			}
			uVar7 = func_78(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_77(Var19);
			Global_2635563.f_2791.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2635563.f_2791.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_94(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_94(Param0, Global_2635563.f_2766, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_11(Global_2635563.f_489) && iVar8 == Global_2635563.f_2791.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_92(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2635563.f_2791.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19.f_0 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_76(Var19, iVar18);
							Global_2635563.f_2791.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2635563.f_2791.f_6[iVar18 /*10*/] || (iVar8 == Global_2635563.f_2791.f_6[iVar18 /*10*/] && fVar0 > Global_2635563.f_2791.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_1 = fVar0;
						func_76(Var19, iVar18);
						Global_2635563.f_2791.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3,5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_74(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_78(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_73(fVar5, 0f, 80f, 160f, 1f, 1,2f);
						}
						else
						{
							fVar3 = func_73(fVar6, 0f, 80f, 160f, 0f, 0,2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2635563.f_2791.f_6[iVar18 /*10*/] || (iVar8 == Global_2635563.f_2791.f_6[iVar18 /*10*/] && fVar3 > Global_2635563.f_2791.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_3 = fVar3;
						func_76(Var19, iVar18);
						Global_2635563.f_2791.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_73(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0,5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_74(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_26(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				if (unk_0x7B780C491DEC834E(Param0, fParam1))
				{
					fVar4 = system::vdist2(Param0, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_26(iVar1, 1, 1))
		{
			if (!func_145(iVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if (func_75(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x1864096A95E36EBA(iVar1) != unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))) || unk_0x1864096A95E36EBA(iVar1) == -1)
							{
								if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
								{
									fVar4 = system::vdist2(Param0, unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (unk_0x1864096A95E36EBA(iVar1) != iParam5 || unk_0x1864096A95E36EBA(iVar1) == -1)
						{
							if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
							{
								fVar4 = system::vdist2(Param0, unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return system::sqrt(fVar3);
	}
	return -1f;
}

int func_75(int iParam0)
{
	if (unk_0x870372B586EFB3EE(unk_0x56E414973C2A8C0E(iParam0)) || Global_2657971[iParam0 /*465*/].f_256)
	{
		return 1;
	}
	return 0;
}

void func_76(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2635563.f_2791.f_6[iParam1 /*10*/] };
	Global_2635563.f_2791.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_76(Var0, iParam1 + 1);
	}
}

void func_77(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_71();
	if (Param0.f_0 > iVar2)
	{
		iVar2 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] < iVar2)
		{
			Global_2638815[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] == 0)
		{
			Global_2638815[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999,9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638815[iVar0 /*10*/] > 0)
		{
			if (Global_2638815[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_2638815[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2638815[iVar4 /*10*/] = { Param0 };
	}
}

float func_78(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	
	fVar3 = 999999,9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_26(iVar7, 1, 1) || (iParam5 == 1 && func_26(iVar7, 0, 0)))
		{
			if (!iVar7 == unk_0x259BE71D8A81D4FA() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_80(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (unk_0x1864096A95E36EBA(iVar7) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
					{
						if (!unk_0x1864096A95E36EBA(iVar7) == -1 || !func_56(unk_0x259BE71D8A81D4FA(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar7) || !bParam4)
					{
						if (func_75(iVar7))
						{
							Var5 = { func_79(iVar7) };
							if (!iVar7 == unk_0x259BE71D8A81D4FA())
							{
								Var6 = { unk_0x4D867CF71882EEA6(unk_0x56E414973C2A8C0E(iVar7)) };
							}
							else
							{
								Var6 = { Var5 };
							}
							if (!bParam4)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var6.f_2 < -100f)
								{
									Var6.f_2 = Param0.f_2;
								}
							}
							fVar1 = unk_0xED977E2AE2CB16EE(Param0, Var5, 1);
							fVar2 = unk_0xED977E2AE2CB16EE(Param0, Var6, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_79(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

int func_80(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		if (!func_90(iParam0))
		{
			if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iParam0))
			{
				if (!unk_0x1864096A95E36EBA(iParam0) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
				{
					if (func_42(unk_0x259BE71D8A81D4FA(), 1, 0))
					{
						if (!func_87(unk_0x1864096A95E36EBA(iParam0), unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()), 0, -1))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x1864096A95E36EBA(iParam0) == -1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
				{
					if (!func_42(unk_0x259BE71D8A81D4FA(), 1, 0))
					{
						if (!func_81(iParam0))
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

int func_81(int iParam0)
{
	if (func_86(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	Global_2707307 = { func_85(iParam0) };
	if (unk_0xEDD63461767A518C(&Global_2707307))
	{
		return 1;
	}
	if (func_82(unk_0x259BE71D8A81D4FA(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_84(iParam0);
	if (func_83(iVar0))
	{
		if (iVar0 == func_84(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_83(var uParam0)
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

int func_84(int iParam0)
{
	if (func_83(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_27();
}

struct<13> func_85(var uParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(uParam0, &Var0, 13);
	return Var0;
}

int func_86(int iParam0, var uParam1)
{
	if (unk_0x7260716F2E4D7661())
	{
		Global_2707307 = { func_85(iParam0) };
		Global_2707320 = { func_85(uParam1) };
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

int func_87(int iParam0, int iParam1, int iParam2, int iParam3)
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
							if (!func_88(iParam0, bVar0, iParam1, bVar1) || !func_88(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_88(iParam0, bVar0, iParam1, bVar1) || !func_88(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_88(iParam0, bVar0, iParam1, bVar1) || !func_88(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_88(iParam0, bVar0, iParam1, bVar1) || !func_88(iParam1, bVar1, iParam0, bVar0))
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

int func_88(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
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
		iVar1 = iVar5;
		if (((!func_26(iVar1, 1, 1) || func_145(iVar1, 0)) || BitTest(Global_2657971[iVar1 /*465*/].f_200, 2)) || func_89(iVar1))
		{
		}
		else if (unk_0x1864096A95E36EBA(iVar1) != iParam2)
		{
		}
		else
		{
			uVar2 = unk_0x56E414973C2A8C0E(iVar1);
			if (unk_0x4FAFF4BCB7633475(uVar2))
			{
			}
			else
			{
				iVar3 = unk_0x4B423FAA24E8ABF0(uVar2);
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

var func_89(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_36.f_18, 14);
}

int func_90(int iParam0)
{
	if (func_145(iParam0, 0))
	{
		return 1;
	}
	if (func_91())
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

bool func_91()
{
	return BitTest(Global_2621446, 3);
}

float func_92(struct<3> Param0)
{
	var uVar0;
	
	return func_93(Param0, &(Global_2635563.f_45), &uVar0);
}

float func_93(struct<3> Param0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = system::vdist(*(uParam1[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2635563.f_3035) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_94(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (system::to_float(iParam5) / system::to_float(8));
	}
	if (bParam2)
	{
		fVar0 = func_73(system::vdist(Param0, Param1), 0f, 0f, 200f, 1f, 0,1f);
		fVar1 = (fVar1 * (fVar0 * 0,95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_78(Param0, 1, 0, 0, 1, 0);
	fVar0 = func_73(fVar4, 0f, func_102(), func_100(), 0f, 0,3f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_98(Param0);
	fVar0 = func_73(fVar4, 0f, 0f, 60f, 0,5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && !func_56(unk_0x259BE71D8A81D4FA(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_96(Param0, unk_0x259BE71D8A81D4FA(), 0);
	fVar0 = func_73(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0,95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_95(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0,5f)
			{
				fVar3 = 0,5f;
			}
			fVar0 = func_73(fVar2, 0f, 0f, 200f, 1f, 0,1f);
			fVar0 = (fVar0 + func_73(fVar3, 0f, 0f, 6f, 1f, 0,5f));
			fVar0 = (fVar0 * 0,5f);
			fVar1 = (fVar1 * (fVar0 * 0,85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_73(system::vdist(Global_2635563.f_512, Param0), 0f, 100f, 200f, 0,1f, 0,1f);
		fVar1 = (fVar1 * (fVar0 * 0,9f));
	}
	return fVar1;
}

int func_95(struct<3> Param0, var uParam1, var uParam2)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uVar1 = unk_0x990DA6AEDBBBA89A(Param0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (unk_0x2EE1ADDFD32F7C35(uVar1))
	{
		unk_0xAAB540AD076E01F8(uVar1, &Var0);
		*uParam1 = system::vdist(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam2 = unk_0x1D5CD3EAAA7422B0((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_96(struct<3> Param0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999,9f;
	if (func_26(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_26(iVar3, 0, 1))
				{
					if (unk_0x1864096A95E36EBA(iVar3) != unk_0x1864096A95E36EBA(iParam1) || (unk_0x1864096A95E36EBA(iVar3) == -1 && unk_0x1864096A95E36EBA(iParam1) == -1))
					{
						if (!func_97(iVar3, iParam1))
						{
							if (Global_2648938.f_261[iVar2])
							{
								fVar1 = system::vdist(Global_2648938.f_131[iVar2 /*3*/], Param0);
								if (fVar1 < fVar0)
								{
									fVar0 = fVar1;
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_83(iParam0) && func_83(iParam1))
	{
		iVar0 = func_84(iParam0);
		if (iVar0 != func_27())
		{
			return iVar0 == func_84(iParam1);
		}
	}
	return 0;
}

float func_98(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = unk_0xAA3F0A9E20917995(unk_0x4A8C381C258A124D(), &uVar4, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (unk_0xFC8BFE4B41177C22(uVar4[iVar2]))
		{
			if (!unk_0x1C2F771CDC87A3A5(uVar4[iVar2], 0))
			{
				if (func_99(uVar4[iVar2]))
				{
					Var3 = { unk_0xD1A6A821F5AC81DB(uVar4[iVar2], 1) };
					fVar1 = unk_0xED977E2AE2CB16EE(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2635563.f_3243)
	{
		if (Global_1058116.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1058116.f_267)
			{
				if (unk_0xFC8BFE4B41177C22(Global_1058116.f_152[iVar2]))
				{
					if (!unk_0x1C2F771CDC87A3A5(Global_1058116.f_152[iVar2], 0))
					{
						if (func_99(Global_1058116.f_152[iVar2]))
						{
							Var3 = { unk_0xD1A6A821F5AC81DB(Global_1058116.f_152[iVar2], 1) };
							fVar1 = unk_0xED977E2AE2CB16EE(Param0, Var3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_99(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0x2A661A0285B74A27(uParam0);
	switch (unk_0x048553DADAD2512F(uVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0xB2AE1A67479A5AF3(Global_1837276[unk_0x259BE71D8A81D4FA()]))
	{
		switch (unk_0x048553DADAD2512F(uVar0, Global_1837276[unk_0x259BE71D8A81D4FA()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 0)
	{
		iVar1 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0xB2AE1A67479A5AF3(Global_1836986[iVar1]))
			{
				switch (unk_0x048553DADAD2512F(uVar0, Global_1836986[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_100()
{
	if (func_101())
	{
		if ((unk_0x00C6FDED3EB75117(Global_2635563.f_45.f_67) || unk_0xBA16CD57E37AC32A(Global_2635563.f_45.f_67)) || Global_2635563.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_101()
{
	if (Global_2635563.f_45.f_65 && !Global_2635563.f_45.f_304)
	{
		if (!func_90(unk_0x259BE71D8A81D4FA()))
		{
			return 1;
		}
	}
	return 0;
}

float func_102()
{
	if (func_101())
	{
		if ((unk_0x00C6FDED3EB75117(Global_2635563.f_45.f_67) || unk_0xBA16CD57E37AC32A(Global_2635563.f_45.f_67)) || Global_2635563.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_103(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && unk_0x913602ADD2D86A7A(Param0, fParam5)) || (fVar0 > 0f && unk_0x2DBCF31839B069B4(Param0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0x80F249EA6DFE8476(Param0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0x80F249EA6DFE8476(Param0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_104(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_108(*uParam0, uParam0->f_6, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_107(*uParam0, uParam0->f_3, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_105(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_105(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, struct<3> Param4, float fParam5)
{
	struct<3> Var0[8];
	int iVar1;
	
	func_106(Param0, Param1, fParam2, &Var0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x26715B0ED6702C87(Var0[iVar1 /*3*/], Param3, Param4, fParam5, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_106(struct<3> Param0, struct<3> Param1, float fParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_2 == Param1.f_2)
	{
		Param1.f_2 = (Param1.f_2 + 0,01f);
	}
	Var0 = { Param0 - Param1 };
	Var1 = { func_17(Var0, Var0.f_0, Var0.f_1, 0f) };
	Var1 = { Var1 / FtoV(system::vmag(Var1)) };
	Var1 = { Var1 * FtoV((fParam2 * 0,5f)) };
	if (Param0.f_2 > Param1.f_2)
	{
		uVar2 = Param1.f_2;
		uVar3 = Param0.f_2;
	}
	else
	{
		uVar2 = Param0.f_2;
		uVar3 = Param1.f_2;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.f_0) + Var1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.f_0) - Var1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.f_0) - Var1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.f_0) + Var1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.f_0) + Var1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.f_0) - Var1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.f_0) - Var1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.f_0) + Var1 };
}

int func_107(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	struct<3> Var0[8];
	int iVar1;
	
	Var0[0 /*3*/] = { Param0.f_0, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.f_0, Param0.f_1, Param1.f_2 };
	Var0[2 /*3*/] = { Param0.f_0, Param1.f_1, Param1.f_2 };
	Var0[3 /*3*/] = { Param0.f_0, Param1.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param1.f_0, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param1.f_0, Param0.f_1, Param1.f_2 };
	Var0[6 /*3*/] = { Param1.f_0, Param1.f_1, Param1.f_2 };
	Var0[7 /*3*/] = { Param1.f_0, Param1.f_1, Param0.f_2 };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!unk_0x26715B0ED6702C87(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_108(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, float fParam4)
{
	struct<3> Var0[4];
	int iVar1;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam1, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam1), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam1) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!unk_0x26715B0ED6702C87(Var0[iVar1 /*3*/], Param2, Param3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_109(struct<3> Param0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	Var1 = { Param0 };
	iVar2 = func_32(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2642438[iVar2])
	{
		if (func_31(Var1, &(Global_2641042[iVar2 /*155*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2641042[iVar2 /*155*/][iVar0 /*7*/] };
			*uParam2 = { Global_2641042[iVar2 /*155*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2641042[iVar2 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642438[8])
	{
		if (func_31(Var1, &(Global_2641042[8 /*155*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2641042[8 /*155*/][iVar0 /*7*/] };
			*uParam2 = { Global_2641042[8 /*155*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2641042[8 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_110(struct<3> Param0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2635563.f_45.f_55)
	{
		if (unk_0xF8A8852F99E201DD(Global_2635563.f_45.f_56))
		{
			if (!unk_0x7830326EF9D54DBB(Param0))
			{
				uVar0 = unk_0x0E171121A3A25363(Param0);
				if (unk_0xF8A8852F99E201DD(uVar0))
				{
					iVar1 = unk_0x1F6CFCD52206CDB0(uVar0);
					if (!iVar1 == Global_2635563.f_45.f_57)
					{
						return 0;
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
	}
	return 1;
}

int func_111(struct<3> Param0)
{
	switch (Global_2635563.f_2787)
	{
		case 0:
			return func_148(Param0, Global_2635563.f_2766, Global_2635563.f_2769, 0, 0);
			break;
		
		case 1:
			return func_60(Param0, Global_2635563.f_2780, Global_2635563.f_2783, 0, 0);
			break;
		
		case 2:
			return unk_0x26715B0ED6702C87(Param0, Global_2635563.f_2780, Global_2635563.f_2783, Global_2635563.f_2786, 0, 1);
			break;
	}
	return 0;
}

int func_112(struct<3> Param0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (system::vdist(*(uParam1[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		Var2 = { *(uParam2[iVar1 /*10*/]) };
		Var3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (unk_0x26715B0ED6702C87(Param0, Var2, Var3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_113(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (system::vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_19(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_114(int iParam0)
{
	switch (func_58())
	{
		case 0:
			if (!func_115(iParam0))
			{
				if (Global_1845281[iParam0 /*883*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_115(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_193 != 0;
}

int func_116(int iParam0)
{
	if (func_42(iParam0, 1, 0))
	{
		if (Global_1845281[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_117(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (system::vdist2(Global_2635563.f_2925[iVar0 /*3*/], Param0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_118(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	
	if (func_48(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar2 = unk_0xD2AA6F822D3A55D2(0,01f, 360f);
			func_19(&Var1, Global_2635563.f_593, Global_2635563.f_596, 1036831949, 0, fVar2);
			if (func_49(Var1, &uVar0) || func_48(Var1))
			{
				Var1 = { *uParam0 };
				func_19(&Var1, Global_2635563.f_593, Global_2635563.f_596, 1036831949, 1, fVar2);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_119(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_26(unk_0x259BE71D8A81D4FA(), 1, 1))
		{
			if (!unk_0x15CCE8886267624F())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0xED977E2AE2CB16EE(func_120(unk_0x259BE71D8A81D4FA()), Param0, 1) <= (fVar2 + fParam1))
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
		iVar1 = iVar0;
		if (func_26(iVar1, 1, 1))
		{
			if (!func_145(iVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x259BE71D8A81D4FA()))
				{
					if ((func_75(iVar1) || !bParam8) && !Global_2657971[iVar1 /*465*/].f_271)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x1864096A95E36EBA(iVar1) == -1)
							{
								if (unk_0x1864096A95E36EBA(iVar1) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x1864096A95E36EBA(iVar1) != unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))) || unk_0x1864096A95E36EBA(iVar1) == -1)
							{
								if (unk_0xED977E2AE2CB16EE(func_120(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x1864096A95E36EBA(iVar1) != iParam6 || unk_0x1864096A95E36EBA(iVar1) == -1)
						{
							if (unk_0xED977E2AE2CB16EE(func_120(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
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

Vector3 func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_121() && Global_1845281[iVar0 /*883*/].f_860) && !func_4(Global_1845281[iVar0 /*883*/].f_861))
	{
		return Global_1845281[iVar0 /*883*/].f_861;
	}
	return func_79(iParam0);
}

var func_121()
{
	return Global_2684504.f_19;
}

int func_122(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_124(Param0, fParam1, iParam2, iParam3, 0) || func_123(Param0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_123(struct<3> Param0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_34(Param0, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_26(iVar2, 0, 1) && func_26(iParam1, 0, 1))
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

int func_124(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_26(iVar1, 0, 1) && func_26(iParam2, 0, 1))
				{
					if (unk_0x1864096A95E36EBA(iVar1) == unk_0x1864096A95E36EBA(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_26(iVar1, 0, 1) && func_26(iParam2, 0, 1))
				{
					if (Global_2648938.f_261[iVar0])
					{
						if (system::vdist(Global_2648938.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (system::vdist(func_79(iVar1), Param0) < 1f)
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
				else if (func_26(iVar1, 0, 1))
				{
					if (system::vdist(func_79(iVar1), Param0) < 1f)
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

int func_125(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_2635563.f_3 = 0;
	if (!func_122(Param0, 0,5f, unk_0x259BE71D8A81D4FA(), 0, 0))
	{
		Global_2635563.f_3++;
		if (bParam3)
		{
			if (func_178(Param0, 3,65f, 0,5f, 1,5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2635563.f_3 = (Global_2635563.f_3 + Global_2635563.f_2);
				if (!func_129(Param0, fParam10))
				{
					Global_2635563.f_3++;
					if (!func_33(Param0, 1056964608))
					{
						Global_2635563.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2635563.f_3 = (Global_2635563.f_3 + Global_2635563.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_178(Param0, 3,65f, 0,5f, 1,5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2635563.f_3 = (Global_2635563.f_3 + Global_2635563.f_2);
				if (!func_129(Param0, fParam10))
				{
					Global_2635563.f_3++;
					if (!func_126(Param0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2635563.f_3++;
						if (!func_33(Param0, 1056964608))
						{
							Global_2635563.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2635563.f_3 = (Global_2635563.f_3 + Global_2635563.f_2);
			}
		}
		else if (func_178(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2635563.f_3 = (Global_2635563.f_3 + Global_2635563.f_2);
			if (!func_129(Param0, fParam10))
			{
				Global_2635563.f_3++;
				if (!func_126(Param0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2635563.f_3++;
					if (!func_33(Param0, 1056964608))
					{
						Global_2635563.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2635563.f_3 = (Global_2635563.f_3 + Global_2635563.f_2);
		}
	}
	return 0;
}

int func_126(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!unk_0x259BE71D8A81D4FA() == iVar1)
		{
			if ((func_26(iVar1, 1, 1) && func_75(iVar1)) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
			{
				if (!func_128(unk_0x259BE71D8A81D4FA(), iVar1, -2, 0))
				{
					if (func_127(func_79(iVar1), Param0, fParam1, fParam2, fParam3, fParam4))
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

bool func_127(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	struct<3> Var1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	Var0.f_0 = system::sin(fParam2);
	Var0.f_1 = system::cos(fParam2);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(system::vmag(Var0)) };
	Var0 = { Var0 * Vector(fParam3, fParam3, fParam3) };
	Var1 = { Param1 + Var0 };
	Var1.f_2 = Param1.f_2;
	Var1.f_2 = (Var1.f_2 + fParam5);
	Param1.f_2 = (Param1.f_2 + fParam5);
	return unk_0x26715B0ED6702C87(Param0, Param1, Var1, fParam4, 0, 1);
}

bool func_128(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(iParam0) == -1 && unk_0x1864096A95E36EBA(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x1864096A95E36EBA(iParam0) == unk_0x1864096A95E36EBA(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x1864096A95E36EBA(iParam0) == iParam2;
	}
	return unk_0x1864096A95E36EBA(iParam0) == iParam2;
}

int func_129(struct<3> Param0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_26(iVar1, 1, 1) && func_75(iVar1)) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
		{
			if ((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && unk_0x1864096A95E36EBA(iVar1) == -1) && !func_56(unk_0x259BE71D8A81D4FA(), 1))
			{
				return 0;
			}
			else if ((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && !unk_0x259BE71D8A81D4FA() == iVar1) || !func_128(unk_0x259BE71D8A81D4FA(), iVar1, -2, 0))
			{
				if (system::vdist(Param0, func_79(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_130(int iParam0)
{
	if ((Global_2635563.f_489 == 9 || Global_2635563.f_489 == 9) || (Global_2635563.f_489 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_131(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x259BE71D8A81D4FA() != iVar1) || iParam6 == 0)
		{
			if (func_26(iVar1, bParam2, bParam3))
			{
				if (iParam8 || unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
				{
					if (!bParam5 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(iVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && iParam7) && bParam4) && func_81(iVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar1)))
							{
								if (unk_0xED977E2AE2CB16EE(func_79(iVar1), Param0, 1) < fParam1)
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

int func_132(struct<3> Param0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 1, 1))
			{
				if ((!func_145(iVar1, 0) && unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1)) && iVar1 != unk_0x259BE71D8A81D4FA())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!unk_0x1864096A95E36EBA(iVar1) == -1)
						{
							if (unk_0x1864096A95E36EBA(iVar1) == unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (unk_0x1864096A95E36EBA(iVar1) == iVar3)
					{
						if (unk_0xED977E2AE2CB16EE(func_79(iVar1), Param0, 1) <= (fVar2 + fParam1))
						{
							if (unk_0x267FC71D3F0D131A(iVar1, Param0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_133(int iParam0)
{
	if (((func_56(iParam0, 1) || func_136(iParam0)) || func_135(iParam0, 0)) || func_134(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_134(int iParam0)
{
	if (!func_26(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2);
}

int func_135(int iParam0, int iParam1)
{
	if (func_83(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/] != -1;
	}
	return 0;
}

void func_137(struct<3> Param0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	struct<3> Var5;
	struct<3> Var6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!BitTest(Global_4544411[iVar1 /*26*/].f_12, 11))
			{
				if (system::vmag(*(uParam1[iVar0 /*4*/])) == 0f || system::vdist(Global_4544411[iVar1 /*26*/].f_3, Param0) < system::vdist(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_4544411[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_4544411[iVar1 /*26*/].f_6.f_2;
					func_139(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (system::vmag(*(uParam1[iVar0 /*4*/])) == 0f || system::vdist(Global_262145.f_6218[iVar1 /*3*/], Param0) < system::vdist(*(uParam1[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6218[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_139(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (system::vmag(*(uParam1[iVar0 /*4*/])) == 0f || system::vdist(Global_262145.f_6276[iVar1 /*19*/][iVar2 /*3*/], Param0) < system::vdist(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6276[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_139(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var5 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0,5f, 0,5f, 0,5f) };
			Var6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0,5f, 0,5f, 0,5f) };
			if (system::vmag(*(uParam2[iVar0 /*10*/])) == 0f || system::vdist(Var5, Param0) < system::vdist(Var6, Param0))
			{
				Var4 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_4544087[iVar1 /*3*/] };
				func_138(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_138(var uParam0, var uParam1, int iParam2)
{
	Global_2643444 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_138(&Global_2643444, uParam1, iParam2 + 1);
	}
}

void func_139(var uParam0, var uParam1, int iParam2)
{
	Global_2643440 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_139(&Global_2643440, uParam1, iParam2 + 1);
	}
}

void func_140(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	if (Global_2635563.f_2562 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2635563.f_2562)
		{
			if (func_141(Global_2635563.f_2563[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2635563.f_2563[iVar0 /*4*/].f_3;
				if (system::vmag(*uParam1) > 0,01f)
				{
					Var1 = { *uParam1 - Global_2635563.f_2563[iVar0 /*4*/] };
					fVar2 = unk_0x97BC40FFA2FFCCD2(Var1.f_0, Var1.f_1);
				}
				func_72(Global_2635563.f_2563[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2635563.f_2791++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2635563.f_3198)
	{
		func_66(&(Global_2635563.f_2791.f_6[0 /*10*/]), &(Global_2635563.f_2791.f_6[1 /*10*/]), &(Global_2635563.f_2791.f_6[2 /*10*/]));
	}
}

int func_141(struct<3> Param0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_23(Param0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_23(Param0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_142(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_61(&Param0, &Param1);
	fVar0 = (Param1.f_0 - Param0.f_0);
	*uParam2 = (Param0.f_0 + (fVar0 * 0,5f));
	uParam2->f_1 = Param0.f_1;
	uParam2->f_2 = Param0.f_2;
	*uParam3 = *uParam2;
	uParam3->f_1 = Param1.f_1;
	uParam3->f_2 = Param1.f_2;
	*uParam4 = (fVar0 * 0,5f);
}

var func_143()
{
	return Global_1573131.f_4;
}

void func_144(var uParam0, var uParam1)
{
	func_185();
	func_177(uParam0, uParam1);
}

bool func_145(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_83(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_146(-1, 0) == 8;
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

int func_146(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_147();
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

int func_147()
{
	return Global_1574926;
}

bool func_148(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)
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

void func_149(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2635563.f_2054 > 0)
	{
		iVar0 = 0;
		while (func_171(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_150(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_150(var uParam0, var uParam1, var uParam2)
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
		if (func_45(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_170(uParam0, 1))
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
	if (func_39(uParam2->f_34) != 0)
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
					if (!func_118(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_169(Var1))
									{
										Var1 = { func_165(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (system::vmag(Var1) > 0f)
										{
											if (!func_33(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_164(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_170(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_160(Var1, fVar2, uParam2->f_34, unk_0x259BE71D8A81D4FA(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_45(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_159(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_178(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_178(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_157(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = func_156(Var1, uParam2->f_54, &fVar23);
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
																													func_155(Var1, fVar2, iVar14);
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
																									if (func_164(Var1, uParam2))
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
							func_153(0, uParam2);
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
						func_152(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
						if (func_45(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_170(&Var27, bVar29))
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
				func_151(&Global_1574205, uParam0, uParam1, *uParam0);
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

void func_151(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_122(*(uParam0[iVar2 /*4*/]), 5f, unk_0x259BE71D8A81D4FA(), 0, 0))
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

void func_152(int iParam0, struct<3> Param1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
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
				*uParam3 = { func_165(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51, uParam5->f_60) };
				if (!func_169(*uParam3))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_153(int iParam0, var uParam1)
{
	if (!func_164(Global_2643454[iParam0 /*3*/], uParam1))
	{
		Global_2643454.f_162 = (Global_2643454.f_162 - 1);
		func_154(iParam0);
		if (Global_2643454.f_162 > Global_2643454.f_163)
		{
			func_153(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_153(iParam0 + 1, uParam1);
	}
}

void func_154(int iParam0)
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

void func_155(struct<3> Param0, float fParam1, int iParam2)
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
			func_155(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_156(struct<3> Param0, float fParam1, float fParam2)
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999,9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_80(iVar3))
		{
			Var1 = { func_79(iVar3) };
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

int func_157(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && unk_0x259BE71D8A81D4FA() != iVar1) || iParam7 == 0)
		{
			if (func_26(iVar1, bParam3, bParam4))
			{
				if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iVar1))
				{
					if (!bParam6 || (!unk_0x4FAFF4BCB7633475(unk_0x56E414973C2A8C0E(iVar1)) && func_75(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) != unk_0x1864096A95E36EBA(iVar1))) || unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1)
						{
							if (((unk_0x1864096A95E36EBA(unk_0x259BE71D8A81D4FA()) == -1 && iParam8) && bParam5) && func_81(iVar1))
							{
							}
							else if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar1)))
							{
								fVar2 = 0,1f;
								if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iVar1), 0))
								{
									uVar3 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iVar1), 0);
									if (unk_0xFC8BFE4B41177C22(uVar3) && !unk_0x1C2F771CDC87A3A5(uVar3, 0))
									{
										iVar4 = unk_0x4B423FAA24E8ABF0(uVar3);
										Var5 = { unk_0xD1A6A821F5AC81DB(uVar3, 0) };
										fVar6 = unk_0xCFC0C995455A6204(uVar3);
										if (func_158(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_34(func_79(iVar1), Param0, fParam1, iParam2, fVar2))
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

int func_158(struct<3> Param0, float fParam1, int iParam2, struct<3> Param3, float fParam4, int iParam5, int iParam6)
{
	if (func_34(Param0, Param3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_35(Param0, fParam1, iParam2, &Global_1975334, &(Global_1975334.f_3), &(Global_1975334.f_6), 1036831949);
	func_35(Param3, fParam4, iParam5, &(Global_1975334.f_7), &(Global_1975334.f_10), &(Global_1975334.f_13), 1036831949);
	if (unk_0x298E7BBD04F29848(Global_1975334, Global_1975334.f_3, Global_1975334.f_6, Global_1975334.f_7, Global_1975334.f_10, Global_1975334.f_13))
	{
		return 1;
	}
	return 0;
}

int func_159(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	var uVar1;
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
	uVar1 = unk_0xF0CA45A211FFDCD9(Param0, 30f, 0, iVar0);
	if (unk_0xFC8BFE4B41177C22(uVar1) && !unk_0x1C2F771CDC87A3A5(uVar1, 0))
	{
		iVar2 = unk_0x4B423FAA24E8ABF0(uVar1);
		Var3 = { unk_0xD1A6A821F5AC81DB(uVar1, 0) };
		fVar4 = unk_0xCFC0C995455A6204(uVar1);
		if (func_158(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	uVar1 = unk_0xF0CA45A211FFDCD9(Param0, 30f, 0, iVar0);
	if (unk_0xFC8BFE4B41177C22(uVar1) && !unk_0x1C2F771CDC87A3A5(uVar1, 0))
	{
		iVar2 = unk_0x4B423FAA24E8ABF0(uVar1);
		Var3 = { unk_0xD1A6A821F5AC81DB(uVar1, 0) };
		fVar4 = unk_0xCFC0C995455A6204(uVar1);
		if (func_158(Param0, fParam1, iParam2, Var3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_160(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_163(Param0, fParam1, iParam2, iParam3, iParam4) || func_161(Param0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_161(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_162(Param0, iParam2, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_158(Param0, fParam1, iParam2, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_26(iVar2, 0, 1) && func_26(iParam3, 0, 1))
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

int func_162(struct<3> Param0, int iParam1, struct<3> Param2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_41(iParam1, 1008981770);
	fVar1 = func_41(iParam3, 1008981770);
	fVar2 = system::vdist(Param0, Param2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_163(struct<3> Param0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 0, 1) && func_26(iParam3, 0, 1))
			{
				if (Global_2648938.f_261[iVar0])
				{
					if (func_34(Global_2648938.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_34(func_79(iVar1), Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2648938.f_261[iVar0])
			{
				if (func_34(Global_2648938.f_131[iVar0 /*3*/], Param0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_26(iVar1, 0, 0))
			{
				if (unk_0xFC8BFE4B41177C22(unk_0x56E414973C2A8C0E(iVar1)))
				{
					if (func_34(func_79(iVar1), Param0, fParam1, iParam2, 1036831949))
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

int func_164(struct<3> Param0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_148(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_60(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
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

Vector3 func_165(struct<3> Param0, var uParam1, int iParam2, bool bParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, var uParam12)
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
			if (!func_168(Param0, *uParam1, Param4))
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
			if (unk_0xBA16CD57E37AC32A(iParam7) && func_167(Param0))
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
					fVar10 = func_166(iParam7, 3,5f);
				}
				else
				{
					fVar10 = func_166(iParam7, 1,5f);
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
		if (!func_168(Param0, *uParam1, Param4))
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
					fVar10 = func_166(iParam7, 3,5f);
				}
				else
				{
					fVar10 = func_166(iParam7, 1,5f);
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

float func_166(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_36(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_167(struct<3> Param0)
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

int func_168(struct<3> Param0, float fParam1, struct<3> Param2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { 0f, 1f, 0f };
	func_20(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (func_16(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_169(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_32(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2643161[iVar1])
	{
		if (func_31(Param0, &(Global_2642458[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2643161[8])
	{
		if (func_31(Param0, &(Global_2642458[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_170(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2635563.f_26.f_18)
	{
		switch (Global_2635563.f_26.f_17)
		{
			case 0:
				if (func_148(*uParam0, Global_2635563.f_26.f_10, Global_2635563.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_60(*uParam0, Global_2635563.f_26.f_10, Global_2635563.f_26.f_13, 0, 0))
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
				*uParam0 = { func_21(*uParam0, Global_2635563.f_26.f_10, Global_2635563.f_26.f_13, Global_2635563.f_26.f_16, Global_2635563.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_171(var uParam0, var uParam1, var uParam2)
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
			if (func_45(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_170(uParam0, 1))
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
			func_174(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_173();
		}
		else
		{
			func_172();
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
							if ((uParam2->f_12 && !func_160(Var3, fVar4, uParam2->f_34, unk_0x259BE71D8A81D4FA(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_45(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_159(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_178(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (func_178(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_157(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = func_156(Var3, uParam2->f_54, &fVar12);
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
																		func_155(Var3, fVar4, iVar5);
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
					func_153(0, uParam2);
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

void func_172()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2635563.f_2054)
	{
		Global_2635563.f_2460[iVar0] = iVar0;
		iVar0++;
	}
}

void func_173()
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

void func_174(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2635563.f_2054)
	{
		uVar1 = func_175(Param0, fVar0, &fVar0);
		Global_2635563.f_2460[iVar2] = uVar1;
		iVar2++;
	}
}

int func_175(struct<3> Param0, float fParam1, float fParam2)
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

bool func_176(int iParam0)
{
	return iParam0 == 50;
}

void func_177(var uParam0, var uParam1)
{
	unk_0x8998A86E45C5155C(uParam0, uParam1, 0,1f);
	Global_2635563.f_2774 = unk_0x8F76B2250AC806FA();
	Global_2635563.f_2772 = 1;
	Global_2635563.f_2775 = unk_0x7E3F74F641EE6B27();
}

int func_178(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_131(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2635563.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_119(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2635563.f_2++;
	return 1;
}

void func_179()
{
	func_184();
	func_183();
	func_182();
	func_181();
	func_180();
}

void func_180()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2638815[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_181()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2635563.f_2791.f_90[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_182()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2635563.f_2791.f_57[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_183()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2635563.f_2791.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_184()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2635563.f_2791 = { Var0 };
}

void func_185()
{
	if (Global_2635563.f_2772)
	{
		if (unk_0x8F76B2250AC806FA() == Global_2635563.f_2774)
		{
			unk_0x81F9331288182129();
		}
		else
		{
			unk_0x81F9331288182129();
		}
		Global_2635563.f_2772 = 0;
	}
}

int func_186(bool bParam0)
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

int func_187(struct<3> Param0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	struct<3> Var2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1.f_28 = -1;
	Var1 = { Param0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_9(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			Var2 = { Param0 - Var0[0 /*3*/] };
			if (Var2.f_2 > uParam4->f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_188(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_189(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x93E08E0F531E2C35())
		{
			func_190(uParam0, 0, 0);
		}
	}
}

void func_190(var uParam0, bool bParam1, bool bParam2)
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

void func_191()
{
	switch (Local_61[unk_0xAE032CEDCF23C6D5() /*3*/].f_2)
	{
		case 0:
			func_215();
			func_213();
			if (func_202())
			{
				func_195();
				func_194();
				func_192(35);
				Local_61[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 1;
			}
			else if (Local_59.f_8 >= 1)
			{
				func_194();
				Local_61[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_59.f_8 >= 2)
			{
				Local_61[unk_0xAE032CEDCF23C6D5() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_192(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_9090)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_193() /*5570*/].f_681.f_4244[iVar0 /*3*/] == iParam0)
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

int func_193()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_194()
{
	if (unk_0xC450B06E5AAA0985(uLocal_64))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_64);
	}
}

void func_195()
{
	if (!BitTest(Global_2672855.f_3733, 0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2672855.f_3733), 0);
		func_196();
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_2672855.f_3733), 1);
	}
}

void func_196()
{
	func_197(1189, -1);
}

void func_197(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_200(iParam0, func_201(iParam1));
	iVar0++;
	func_198(iParam0, iVar0, iParam1, 1);
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_199(iParam0, iParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

var func_199(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_201(uParam1));
}

int func_200(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_199(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_201(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_147();
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

int func_202()
{
	struct<15> Var0;
	
	if (unk_0x2FC2FDC413532977(Local_59.f_2))
	{
		if (unk_0x93BF17E19A9F0E9B(Local_59.f_2))
		{
			if (unk_0x21478251925DBFD7(unk_0xAB3646235DE50E93(Local_59.f_2), unk_0x4A8C381C258A124D()) && func_212(Local_59.f_2))
			{
				func_211(&(Local_59.f_2));
				if (unk_0xC450B06E5AAA0985(uLocal_64))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_64);
				}
				if (!func_210(1))
				{
					func_205("ABB_BOXCT", 0);
				}
				Var0.f_3 = -274141694;
				Var0.f_11 = unk_0x259BE71D8A81D4FA();
				Var0.f_4 = uLocal_63;
				func_203(Var0, func_204(1));
				unk_0x0B0C9A0F9AAEB7F0(&(Local_61[unk_0xAE032CEDCF23C6D5() /*3*/].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_203(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = -642704387;
	Param0.f_1 = unk_0x259BE71D8A81D4FA();
	if (!iParam14 == 0)
	{
		unk_0x71A6F836422FDD2B(1, &Param0, 15, iParam14, Param0.f_0);
	}
}

int func_204(int iParam0)
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
			if (func_26(iVar2, 0, 0))
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

int func_205(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	unk_0xCCDB0041859B85A6(sParam0);
	iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
	func_206(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_206(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_209() || !unk_0x834C960822A4683F()) || !func_145(unk_0x259BE71D8A81D4FA(), 0))
	{
		return;
	}
	iVar0 = func_207(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1937329.f_5[iVar0 /*53*/] = iParam0;
		Global_1937329.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1937329.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1937329.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1937329.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1937329.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1937329.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1937329 - 1))
	{
		if (iParam0 > Global_1937329.f_5[iVar0 /*53*/].f_1)
		{
			func_208(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1937329++;
	if (Global_1937329 > 5)
	{
		Global_1937329 = 5;
		return Global_1937329;
	}
	return (Global_1937329 - 1);
}

void func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1937329.f_5[iVar0 /*53*/] = { Global_1937329.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_209()
{
	return unk_0x087611B922B50F13(-1762644250);
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1881953 > 0;
		
		case 2:
			return Global_1881953.f_1 > 0;
		
		case 3:
			return Global_1881953.f_2 > 0;
		
		case 4:
			return Global_1881953.f_4 > 0;
		
		case 5:
			return Global_1881953.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_211(var uParam0)
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

int func_212(var uParam0)
{
	if (unk_0x2FC2FDC413532977(uParam0))
	{
		unk_0x460D2A8B2C7DC7D4(uParam0);
		return unk_0xEADBDBE0422CF7E6(uParam0);
	}
	return 0;
}

void func_213()
{
	if (!unk_0xC450B06E5AAA0985(uLocal_64))
	{
		if (unk_0x2FC2FDC413532977(Local_59.f_2))
		{
			uLocal_64 = unk_0x18E23E031A9B798F(unk_0xAB3646235DE50E93(Local_59.f_2));
			if (func_214())
			{
				unk_0x5D3946F818C6B331(uLocal_64, 0,85f);
			}
			else
			{
				unk_0x5D3946F818C6B331(uLocal_64, 1,2f);
			}
			unk_0x4C905FB262965D5D(uLocal_64, 403);
			unk_0x61183D6239A9D7B8(uLocal_64, 2);
			unk_0x594D5D0D7071B0DE(uLocal_64, "ABB_BLIPN");
		}
	}
}

bool func_214()
{
	if (unk_0x834C960822A4683F())
	{
		return BitTest(Global_4718592.f_190336, 0);
	}
	return ((BitTest(Global_4718592.f_190336, 0) || Global_1919908) && unk_0x486FF5D06E9659F1(joaat("fm_deathmatch_creator")) > 0);
}

void func_215()
{
	var uVar0;
	
	if (!unk_0x4C705AAF75363287())
	{
		uVar0 = func_200(1191, -1);
		if (!BitTest(uVar0, 14))
		{
			unk_0x0B0C9A0F9AAEB7F0(&uVar0, 14);
			func_198(1191, uVar0, -1, 1);
		}
	}
}

int func_216()
{
	return Local_59.f_0;
}

int func_217()
{
	unk_0xEC9DAA34BBB4658C(joaat("prop_drug_package_02"));
	if (unk_0x6252BC0DD8A320DB(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)
{
	return Local_61[iParam0 /*3*/];
}

int func_219()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_225())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_224())
	{
		return 1;
	}
	if (func_223(159))
	{
		if (!func_222())
		{
			return 1;
		}
	}
	if (func_223(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_220() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_220()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_220()
{
	switch (func_58())
	{
		case 0:
			return func_221();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_221()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_222()
{
	return Global_2684504.f_700;
}

int func_223(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_224()
{
	return Global_2696172;
}

bool func_225()
{
	return Global_2684504.f_695;
}

void func_226()
{
	system::wait(0);
}

int func_227(int iParam0)
{
	return Global_1845281[iParam0 /*883*/];
}

void func_228()
{
	Global_1680240 = -1;
	if (unk_0xC450B06E5AAA0985(uLocal_64))
	{
		unk_0xFE54B8568B2ABD12(&uLocal_64);
	}
	func_231();
	if (unk_0x76CD105BCAC6EB9F())
	{
		if (unk_0x93E08E0F531E2C35())
		{
			if (unk_0x2FC2FDC413532977(Local_59.f_2) && unk_0xEADBDBE0422CF7E6(Local_59.f_2))
			{
				func_211(&(Local_59.f_2));
			}
			Local_59.f_0 = 4;
		}
	}
	if (BitTest(Local_59.f_1, 8))
	{
		func_230();
	}
	func_229();
}

void func_229()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_230()
{
	Global_2738934.f_932 = 0;
	Global_2738934.f_932.f_1 = { 0f, 0f, 0f };
	Global_2738934.f_932.f_4 = 0f;
	Global_2738934.f_932.f_8 = 0;
	unk_0x8744D2E3FC95740E(&(Global_2738934.f_932.f_7), 0);
}

void func_231()
{
	if (BitTest(uLocal_62, 4))
	{
		unk_0x148193D59AAB6D14(unk_0x259BE71D8A81D4FA(), 0,72f);
		unk_0xA8762533460B016B(unk_0x259BE71D8A81D4FA(), 1f, 1);
		unk_0x43DFCD4B65960E46(unk_0x259BE71D8A81D4FA(), 1f);
		unk_0xECD5F8110C183253(unk_0x259BE71D8A81D4FA(), 1f);
		func_232(1);
		unk_0x8744D2E3FC95740E(&uLocal_62, 5);
		unk_0x8744D2E3FC95740E(&uLocal_62, 7);
		unk_0x8744D2E3FC95740E(&uLocal_62, 4);
	}
}

void func_232(int iParam0)
{
	var uVar0;
	
	uVar0 = func_233(iParam0, 0);
	unk_0x21172E4DF035B893(uVar0);
}

char* func_233(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "BikerFilterOut";
			}
			else
			{
				return "BikerFilter";
			}
			break;
	}
	return "";
}

int func_234(struct<21> Param0)
{
	func_238(func_239(Param0.f_0), Param0);
	unk_0xB7F37A0A1E8A175E(1);
	func_236(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_59, 11, 0);
	unk_0x7B13DC83218D9AF5(&Local_61, 97, 0);
	if (!func_235())
	{
		return 0;
	}
	unk_0xAECC5FA98C879D67(0);
	if (unk_0x93E08E0F531E2C35())
	{
		Local_59.f_7 = Param0.f_16;
		Global_1680240 = Local_59.f_7;
		Local_59.f_3 = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 0) };
		if (!func_4(Global_2738934.f_932.f_1))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Local_59.f_1), 8);
		}
	}
	iLocal_67 = unk_0xF859473E4AD09F30();
	Local_61[unk_0xAE032CEDCF23C6D5() /*3*/] = 0;
	return 1;
}

int func_235()
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
		if (func_225())
		{
			return 0;
		}
		if (func_223(157))
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

int func_236(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_229();
			}
			else
			{
				return 0;
			}
		}
		if (!func_237(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
				if (func_225())
				{
					if (!bParam2)
					{
						func_229();
					}
					else
					{
						return 0;
					}
				}
				if (func_223(157))
				{
					if (!bParam2)
					{
						func_229();
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
					func_229();
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
				func_229();
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
			func_229();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_237(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_238(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		func_229();
	}
	unk_0xDB2434E51017FFCC(uParam0, 0, Param1.f_16);
}

int func_239(int iParam0)
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
	switch (func_240(func_241(iParam0, 1)))
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

int func_240(int iParam0)
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

int func_241(int iParam0, bool bParam1)
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

