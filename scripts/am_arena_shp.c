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
	int iLocal_12 = 0;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	struct<67> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	struct<2> Local_39 = { 0, 0 } ;
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
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 1;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	struct<34> Local_85 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_12 = -1;
	fLocal_13 = 0,001f;
	sLocal_16 = "NULL";
	if (unk_0x76CD105BCAC6EB9F())
	{
		func_87(ScriptParam_85);
	}
	else
	{
		func_85();
	}
	while (true)
	{
		func_84();
		if (Global_262145.f_23711)
		{
			func_85();
		}
		if (func_76())
		{
			func_85();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (Global_4537436)
	{
		if (Global_4541519[iLocal_19 /*12*/].f_11)
		{
			func_73(iLocal_19);
			Global_4541519[iLocal_19 /*12*/].f_11 = 0;
		}
	}
	if (Local_20.f_66.f_8)
	{
		func_17(Local_20.f_66);
	}
	if ((Local_20.f_66.f_2 == 1 && Global_4537437) && func_16(&Local_20))
	{
		bVar0 = true;
	}
	if (Global_4535950[iLocal_19 /*85*/].f_66 == 2147483647 && Local_20.f_66.f_12)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_85();
	}
	if (Local_20.f_66.f_18 > 0 && !func_14())
	{
		iVar2 = (1000 / system::round((unk_0x0B852B0BF94A8DC1() * 1000f)));
		if ((unk_0x8034325BF6D6E41F() - Local_20.f_66.f_18) > iVar2 * 10)
		{
			Local_20.f_66.f_18 = -1;
		}
	}
	if (((func_13() && Local_20.f_66.f_2 == 1) && Local_20.f_66.f_13) && !Local_20.f_66.f_12)
	{
		if (unk_0x8034325BF6D6E41F() - Local_20.f_66.f_14) >= func_12(Local_20.f_66.f_5)
		{
			iVar1 = 0;
			if (!unk_0x134EF45B578F4CCF(func_11()) || unk_0x34F31012FED51A0F())
			{
				iVar1 = 1;
			}
			else if (Local_20.f_66.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_20.f_66.f_5 != 1 && !unk_0x54BC5E0B6A29AE8A(&(Local_20.f_66), Local_20.f_66.f_6, Local_20.f_66.f_4, Local_20.f_66.f_7, Local_20.f_66.f_1, Local_20.f_66.f_10))
			{
				iVar1 = 3;
			}
			else if (!unk_0x5F7C6361179DFFC4(Local_20.f_66))
			{
				iVar1 = 4;
			}
			else
			{
				Local_20.f_66.f_12 = 1;
				Global_4535950[iLocal_19 /*85*/].f_66.f_12 = 1;
				Global_4535950[iLocal_19 /*85*/].f_66 = Local_20.f_66;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_19);
				func_85();
			}
		}
	}
	if (!iLocal_84)
	{
		if (bVar0)
		{
			func_5(&Local_39, 0);
			iLocal_84 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_39.f_1), "HUD_TRANSP", 64);
		func_2(&Local_39, func_4(&Local_39));
	}
	else
	{
		iLocal_84 = 0;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x511D14ED2DA887E1(uParam0->f_33);
			unk_0x511D14ED2DA887E1(uParam0->f_34);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x511D14ED2DA887E1(uParam0->f_33);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x60D332F23943B34F(&(uParam0->f_17));
			unk_0x511D14ED2DA887E1(uParam0->f_33);
			unk_0x511D14ED2DA887E1(uParam0->f_34);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x60D332F23943B34F(&(uParam0->f_17));
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0xBD34A69071611974(uParam0->f_33, 70);
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		else
		{
			unk_0xB661D6EC3F065818(&(uParam0->f_1));
			unk_0x654AFEEF256E650F(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_4(var uParam0)
{
	return uParam0->f_35;
}

void func_5(var uParam0, bool bParam1)
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_35 = 1;
}

void func_6(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_10(iParam0))
		{
			if (!bVar0)
			{
				unk_0xD8EB47E09DFC393C();
			}
		}
		else if (!bVar0)
		{
			unk_0x1FDE21A286357401(Global_4535950[iParam0 /*85*/].f_66);
		}
		func_8(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_8(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_9(&(uParam0->f_14));
	func_9(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_9(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_10(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

var func_11()
{
	return Global_1574926;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_4537439;
			break;
		
		case 1:
			return Global_4537438;
			break;
	}
	return 0;
}

int func_13()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

bool func_14()
{
	return Global_101585.f_394 > 0;
}

void func_15(bool bParam0)
{
	unk_0x65662724C6BC4810();
	if (bParam0)
	{
		unk_0x8CBD7E751A3A6A85();
	}
}

int func_16(var uParam0)
{
	if (uParam0->f_66.f_4 == joaat("service_spend_cash_drop"))
	{
		return 0;
	}
	return 1;
}

void func_17(var uParam0)
{
	struct<7> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<67> Var4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar1 = 0;
	bVar2 = false;
	if (!func_13())
	{
		iVar1 = 1;
		Var0.f_0 = uParam0;
		Var0.f_2 = 0;
	}
	if (iVar1 || unk_0xFCEF367B86651ED3(1, uParam0, &Var0, 7))
	{
		Var4.f_66 = 2147483647;
		iVar3 = func_72(Var0.f_0, &Var4);
		if (iVar3 != -1)
		{
			Global_4535950[iVar3 /*85*/].f_66.f_8 = 0;
			if (Global_4535950[iVar3 /*85*/].f_66.f_18 == 0)
			{
				Global_4535950[iVar3 /*85*/].f_66.f_18 = unk_0x8034325BF6D6E41F();
			}
		}
		bVar5 = true;
		if (iVar3 != -1)
		{
			Global_4535950[iVar3 /*85*/].f_66.f_17 = Var0.f_2;
		}
		else
		{
			Global_4537424.f_4 = Var0.f_2;
			Global_4537424.f_6 = Var0.f_3;
			Global_4537424.f_7 = Var0.f_4;
			Global_4537424.f_8 = Var0.f_5;
			Global_4537424.f_9 = Var0.f_6;
			if (Global_4537424.f_10 == 0)
			{
				Global_4537424.f_10 = unk_0x8034325BF6D6E41F();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar3 != -1)
				{
					Global_4541519[iVar3 /*12*/] = Global_4535950[iVar3 /*85*/].f_66.f_3;
					Global_4541519[iVar3 /*12*/].f_1 = Global_4535950[iVar3 /*85*/].f_66.f_7;
					Global_4541519[iVar3 /*12*/].f_2 = Global_4535950[iVar3 /*85*/].f_66.f_4;
					Global_4541519[iVar3 /*12*/].f_3 = Global_4535950[iVar3 /*85*/].f_66.f_1;
					Global_4541519[iVar3 /*12*/].f_5 = Var0.f_1;
					Global_4541519[iVar3 /*12*/].f_6 = Var0.f_3;
					Global_4541519[iVar3 /*12*/].f_7 = Var0.f_4;
					Global_4541519[iVar3 /*12*/].f_8 = Var0.f_5;
					Global_4541519[iVar3 /*12*/].f_9 = Var0.f_6;
					Global_4541519[iVar3 /*12*/].f_11 = 1;
					Global_4535950[iVar3 /*85*/].f_66.f_2 = 2;
					if (Global_4535950[iVar3 /*85*/].f_66.f_11 & 4 != 0)
					{
						func_33(iVar3, bVar5);
					}
					else if (func_13())
					{
						if (bVar5)
						{
							unk_0x11FD21BA1B765FE2(Global_4535950[iVar3 /*85*/].f_66, &uVar6);
						}
					}
				}
				break;
			
			default:
				if (iVar3 != -1)
				{
					Global_4535950[iVar3 /*85*/].f_66.f_2 = 3;
					if ((Global_4535950[iVar3 /*85*/].f_66.f_11 & 1 != 0 && Global_4535950[iVar3 /*85*/].f_66.f_9 < 2) && func_32(Var0.f_2))
					{
						if (func_10(iVar3))
						{
							if (func_24())
							{
								Global_4535950[iVar3 /*85*/].f_66.f_2 = 1;
								Global_4535950[iVar3 /*85*/].f_66.f_9++;
							}
							else if (Global_4535950[iVar3 /*85*/].f_66.f_11 & 2 != 0)
							{
								Global_4537458 = Global_4535950[iVar3 /*85*/].f_66.f_4;
								Global_4537460 = Global_4535950[iVar3 /*85*/].f_66.f_6;
								Global_4537461 = Var0.f_2;
								Global_4537459 = Global_4535950[iVar3 /*85*/].f_66.f_1;
								if (func_23(Global_4537458) && func_13())
								{
									if (!func_22(Global_4535950[iVar3 /*85*/].f_66))
									{
										iVar7 = func_21();
										Global_4537311[iVar7 /*7*/] = Global_4535950[iVar3 /*85*/].f_66;
										Global_4537311[iVar7 /*7*/].f_2 = Global_4537458;
										Global_4537311[iVar7 /*7*/].f_3 = Global_4537460;
										Global_4537311[iVar7 /*7*/].f_1 = Global_4537459;
										Global_4537311[iVar7 /*7*/].f_4 = unk_0x7E3F74F641EE6B27();
									}
								}
								else
								{
									Global_4537455 = 1;
								}
							}
						}
						else if (func_20(&iVar3))
						{
							Global_4535950[iVar3 /*85*/].f_66.f_2 = 1;
							Global_4535950[iVar3 /*85*/].f_66.f_9++;
						}
						else if (Global_4535950[iVar3 /*85*/].f_66.f_11 & 2 != 0)
						{
							Global_4537458 = Global_4535950[iVar3 /*85*/].f_66.f_4;
							Global_4537460 = Global_4535950[iVar3 /*85*/].f_66.f_6;
							Global_4537461 = Var0.f_2;
							Global_4537459 = Global_4535950[iVar3 /*85*/].f_66.f_1;
							if (func_23(Global_4537458) && func_13())
							{
								if (!func_22(Global_4535950[iVar3 /*85*/].f_66))
								{
									iVar8 = func_21();
									Global_4537311[iVar8 /*7*/] = Global_4535950[iVar3 /*85*/].f_66;
									Global_4537311[iVar8 /*7*/].f_2 = Global_4537458;
									Global_4537311[iVar8 /*7*/].f_3 = Global_4537460;
									Global_4537311[iVar8 /*7*/].f_1 = Global_4537459;
									Global_4537311[iVar8 /*7*/].f_4 = unk_0x7E3F74F641EE6B27();
								}
							}
							else
							{
								Global_4537455 = 1;
							}
						}
					}
					else if (Global_4535950[iVar3 /*85*/].f_66.f_11 & 2 != 0)
					{
						Global_4537458 = Global_4535950[iVar3 /*85*/].f_66.f_4;
						Global_4537460 = Global_4535950[iVar3 /*85*/].f_66.f_6;
						Global_4537461 = Var0.f_2;
						Global_4537459 = Global_4535950[iVar3 /*85*/].f_66.f_1;
						if ((func_23(Global_4537458) && func_13()) && func_32(Var0.f_2))
						{
							if (!func_22(Global_4535950[iVar3 /*85*/].f_66))
							{
								iVar9 = func_21();
								Global_4537311[iVar9 /*7*/] = Global_4535950[iVar3 /*85*/].f_66;
								Global_4537311[iVar9 /*7*/].f_2 = Global_4537458;
								Global_4537311[iVar9 /*7*/].f_3 = Global_4537460;
								Global_4537311[iVar9 /*7*/].f_1 = Global_4537459;
								Global_4537311[iVar9 /*7*/].f_4 = unk_0x7E3F74F641EE6B27();
							}
						}
						else
						{
							Global_4537455 = 1;
						}
					}
					if (Global_4535950[iVar3 /*85*/].f_66.f_2 == 3)
					{
						if (bVar2)
						{
							func_19(1, Global_4535950[iVar3 /*85*/].f_66.f_4);
							Global_4537455 = 0;
						}
						if (Global_4535950[iVar3 /*85*/].f_66.f_11 & 4 != 0)
						{
							func_18(iVar3, Global_4535950[iVar3 /*85*/].f_66.f_4, Global_4535950[iVar3 /*85*/].f_66.f_10, Global_4535950[iVar3 /*85*/].f_66.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_127.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)
{
	Global_2698855 = uParam1;
	Global_2698854 = iParam0;
}

int func_20(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (*iParam0 == -1 || func_10(*iParam0))
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_11()) || unk_0x34F31012FED51A0F())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (Global_4535950[*iParam0 /*85*/].f_66.f_6 == 1067618600 || Global_4535950[*iParam0 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	if ((bVar0 || iVar1) || unk_0x5F7C6361179DFFC4(Global_4535950[*iParam0 /*85*/].f_66))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_4535950[*iParam0 /*85*/].f_66.f_13 = 1;
		Global_4535950[*iParam0 /*85*/].f_66.f_12 = 0;
		Global_4535950[*iParam0 /*85*/].f_66.f_14 = unk_0x8034325BF6D6E41F();
		if (bVar0)
		{
			if (*iParam0 != -1)
			{
				Global_4535950[*iParam0 /*85*/].f_66.f_8 = 1;
				Global_4535950[*iParam0 /*85*/].f_66.f_12 = 1;
			}
		}
		Global_4535950[*iParam0 /*85*/].f_66.f_18 = 0;
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_4537311;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_4537311[iVar0 /*7*/] != 0 && Global_4537311[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_4537311;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_4537311[iVar0 /*7*/] == iParam0)
		{
			return 1;
		}
		if (Global_4537311[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_4537311[iVar0 /*7*/].f_4 = unk_0x7E3F74F641EE6B27();
			Global_4537311[iVar0 /*7*/].f_6 = 2147483647;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("service_earn_ambient_job_plane_takedown") || iParam0 == joaat("service_earn_ambient_job_distract_cops")) || iParam0 == joaat("service_earn_job_bonus")) || iParam0 == joaat("service_earn_bend_job")) || iParam0 == joaat("service_earn_jobs")) || iParam0 == joaat("service_earn_boss")) || iParam0 == joaat("service_earn_goon")) || iParam0 == joaat("service_earn_boss_agency")) || iParam0 == joaat("service_earn_from_destroying_contraband")) || iParam0 == joaat("service_earn_from_vehicle_export")) || iParam0 == joaat("service_earn_premium_job")) || iParam0 == joaat("service_earn_smuggler_agency")) || iParam0 == joaat("service_earn_wage_payment_bonus")) || iParam0 == joaat("service_earn_wage_payment")) || iParam0 == joaat("service_earn_job_bonus_criminal_mastermind")) || iParam0 == joaat("service_earn_job_bonus_heist_award")) || iParam0 == joaat("service_earn_job_bonus_first_time_bonus")) || iParam0 == joaat("service_earn_gangops_wages")) || iParam0 == joaat("service_earn_gangops_wages_bonus")) || iParam0 == joaat("service_earn_gangops_prep_participation")) || iParam0 == joaat("service_earn_gangops_setup")) || iParam0 == joaat("service_earn_gangops_finale")) || iParam0 == joaat("service_earn_gangops_award_mastermind_2")) || iParam0 == joaat("service_earn_gangops_award_mastermind_3")) || iParam0 == joaat("service_earn_gangops_award_mastermind_4")) || iParam0 == joaat("service_earn_gangops_award_loyalty_award_2")) || iParam0 == joaat("service_earn_gangops_award_loyalty_award_3")) || iParam0 == joaat("service_earn_gangops_award_loyalty_award_4")) || iParam0 == joaat("service_earn_gangops_award_first_time_xm_base")) || iParam0 == joaat("service_earn_gangops_award_first_time_xm_submarine")) || iParam0 == joaat("service_earn_gangops_award_first_time_xm_silo")) || iParam0 == joaat("service_earn_gangops_award_supporting")) || iParam0 == joaat("service_earn_gangops_award_order")) || iParam0 == joaat("service_earn_gangops_elite_xm_base")) || iParam0 == joaat("service_earn_gangops_elite_xm_submarine")) || iParam0 == joaat("service_earn_gangops_elite_xm_silo")) || iParam0 == joaat("service_earn_gangops_rival_delivery")) || iParam0 == joaat("service_earn_doomsday_finale_bonus")) || iParam0 == joaat("service_earn_bounty_hunter_reward")) || iParam0 == joaat("service_earn_from_business_battle")) || iParam0 == joaat("service_earn_from_club_management_participation")) || iParam0 == joaat("service_earn_from_fmbb_phonecall_mission")) || iParam0 == joaat("service_earn_from_business_hub_sell")) || iParam0 == joaat("service_earn_from_fmbb_boss_work")) || iParam0 == joaat("service_earn_fmbb_wage_bonus")) || iParam0 == joaat("service_earn_nightclub_dancing_award")) || iParam0 == joaat("service_earn_bb_event_bonus")) || iParam0 == joaat("service_earn_arena_skill_lvl_award")) || iParam0 == joaat("service_earn_arena_career_tier_progression_1")) || iParam0 == joaat("service_earn_arena_career_tier_progression_2")) || iParam0 == joaat("service_earn_arena_career_tier_progression_3")) || iParam0 == joaat("service_earn_arena_career_tier_progression_4")) || iParam0 == joaat("service_earn_spin_the_wheel_cash")) || iParam0 == joaat("service_earn_assassinate_target_killed")) || iParam0 == joaat("service_earn_arena_war")) || iParam0 == joaat("service_earn_ambient_job_rc_time_trial")) || iParam0 == joaat("service_earn_daily_objective_event")) || iParam0 == joaat("service_earn_collectables_action_figures")) || iParam0 == joaat("service_earn_casino_mission_reward")) || iParam0 == joaat("service_earn_casino_story_mission_reward")) || iParam0 == joaat("service_earn_casino_award_mission_one_first_time")) || iParam0 == joaat("service_earn_casino_award_mission_two_first_time")) || iParam0 == joaat("service_earn_casino_award_mission_three_first_time")) || iParam0 == joaat("service_earn_casino_award_mission_four_first_time")) || iParam0 == joaat("service_earn_casino_award_mission_five_first_time")) || iParam0 == joaat("service_earn_casino_award_mission_six_first_time")) || iParam0 == joaat("service_earn_casino_award_straight_flush")) || iParam0 == joaat("service_earn_casino_award_top_pair")) || iParam0 == joaat("service_earn_casino_award_full_house")) || iParam0 == joaat("service_earn_casino_award_lucky_lucky")) || iParam0 == joaat("service_earn_casino_award_high_roller_bronze")) || iParam0 == joaat("service_earn_casino_award_high_roller_silver")) || iParam0 == joaat("service_earn_casino_award_high_roller_gold")) || iParam0 == joaat("service_earn_casino_award_high_roller_platinum")) || iParam0 == joaat("service_earn_casino_heist_setup_mission")) || iParam0 == joaat("service_earn_casino_heist_prep_mission")) || iParam0 == joaat("service_earn_casino_heist_finale")) || iParam0 == joaat("service_earn_casino_heist_award_smash_n_grab")) || iParam0 == joaat("service_earn_casino_heist_award_in_plain_sight")) || iParam0 == joaat("service_earn_casino_heist_award_undetected")) || iParam0 == joaat("service_earn_casino_heist_award_all_rounder")) || iParam0 == joaat("service_earn_casino_heist_award_elite_thief")) || iParam0 == joaat("service_earn_casino_heist_award_professional")) || iParam0 == joaat("service_earn_casino_heist_elite_stealth")) || iParam0 == joaat("service_earn_casino_heist_elite_subterfuge")) || iParam0 == joaat("service_earn_casino_heist_elite_direct")) || iParam0 == joaat("service_earn_collectable_item")) || iParam0 == joaat("service_earn_collectable_completed_collection")) || iParam0 == joaat("service_earn_collectables_signal_jammers")) || iParam0 == joaat("service_earn_collectables_signal_jammers_complete")) || iParam0 == joaat("service_earn_island_heist_finale")) || iParam0 == joaat("service_earn_island_heist_elite_challenge")) || iParam0 == joaat("service_earn_island_heist_award_professional")) || iParam0 == joaat("service_earn_island_heist_award_elite_thief")) || iParam0 == joaat("service_earn_island_heist_award_the_island_heist")) || iParam0 == joaat("service_earn_island_heist_award_going_alone")) || iParam0 == joaat("service_earn_island_heist_award_team_work")) || iParam0 == joaat("service_earn_island_heist_award_cat_burglar")) || iParam0 == joaat("service_earn_island_heist_award_pro_thief")) || iParam0 == joaat("service_earn_island_heist_award_mixing_it_up")) || iParam0 == joaat("service_earn_island_heist_prep")) || iParam0 == joaat("service_earn_island_heist_dj_mission")) || iParam0 == joaat("service_earn_tuner_robbery_prep")) || iParam0 == joaat("service_earn_tuner_robbery_finale")) || iParam0 == joaat("service_earn_tuner_car_club_membership")) || iParam0 == joaat("service_earn_tuner_daily_vehicle")) || iParam0 == joaat("service_earn_tuner_daily_vehicle_bonus")) || iParam0 == joaat("service_earn_tuner_award_union_depository")) || iParam0 == joaat("service_earn_tuner_award_military_convoy")) || iParam0 == joaat("service_earn_tuner_award_fleeca_bank")) || iParam0 == joaat("service_earn_tuner_award_freight_train")) || iParam0 == joaat("service_earn_tuner_award_bolingbroke_ass")) || iParam0 == joaat("service_earn_tuner_award_iaa_raid")) || iParam0 == joaat("service_earn_tuner_award_meth_job")) || iParam0 == joaat("service_earn_tuner_award_bunker_raid")) || iParam0 == joaat("service_earn_auto_shop_delivery_award")) || iParam0 == joaat("service_earn_agency_security_contract")) || iParam0 == joaat("service_earn_agency_payphone_hit")) || iParam0 == joaat("service_earn_agency_story_prep")) || iParam0 == joaat("service_earn_agency_story_finale")) || iParam0 == joaat("service_earn_fixer_award_sec_con")) || iParam0 == joaat("service_earn_fixer_award_phone_hit")) || iParam0 == joaat("service_earn_fixer_award_agency_story")) || iParam0 == joaat("service_earn_fixer_award_short_trip")) || iParam0 == joaat("service_earn_fixer_rival_delivery")) || iParam0 == joaat("service_earn_music_studio_short_trip")) || iParam0 == joaat("service_earn_from_contraband")) || iParam0 == joaat("service_earn_nclub_troublemaker")) || iParam0 == joaat("service_earn_sightseeing_reward")) || iParam0 == joaat("service_earn_ambient_job_clubhouse_contract")) || iParam0 == joaat("service_earn_ambient_job_underwater_cargo")) || iParam0 == joaat("service_earn_ambient_job_crime_scene")) || iParam0 == joaat("service_earn_ambient_job_metal_detector")) || iParam0 == joaat("service_earn_ambient_job_smuggler_plane")) || iParam0 == joaat("service_earn_ambient_job_smuggler_trail")) || iParam0 == joaat("service_earn_ambient_job_golden_gun")) || iParam0 == joaat("service_earn_ambient_job_ammunation_delivery")) || iParam0 == joaat("service_earn_ambient_job_source_research")) || iParam0 == joaat("service_earn_yohan_source_goods")) || iParam0 == joaat("service_earn_taxi_job")) || iParam0 == joaat("service_earn_daily_stash_house_participation")) || iParam0 == joaat("service_earn_daily_stash_house_completed")) || iParam0 == joaat("service_earn_ambient_job_gang_convoy")) || iParam0 == joaat("service_earn_ambient_job_shop_robbery")) || iParam0 == joaat("service_earn_ambient_job_xmas_mugger")) || iParam0 == joaat("service_earn_ambient_job_maze_bank")) || iParam0 == joaat("service_earn_juggalo_story_mission")) || iParam0 == joaat("service_earn_juggalo_phone_mission")) || iParam0 == joaat("service_earn_winter_22_award_juggalo_story")) || iParam0 == joaat("service_earn_winter_22_award_acid_lab")) || iParam0 == joaat("service_earn_winter_22_award_daily_stash")) || iParam0 == joaat("service_earn_winter_22_award_dead_drop")) || iParam0 == joaat("service_earn_winter_22_award_random_event")) || iParam0 == joaat("service_earn_winter_22_award_taxi")) || iParam0 == joaat("service_earn_acid_lab_setup_participation")) || iParam0 == joaat("service_earn_acid_lab_source_participation")) || iParam0 == joaat("service_earn_acid_lab_sell_participation")) || iParam0 == joaat("service_earn_smuggler_ops")) || iParam0 == joaat("service_earn_ambient_job_armored_truck")) || iParam0 == joaat("service_earn_ambient_job_bicycle_time_trial")) || iParam0 == joaat("service_earn_cayo_attrition_bonus_objective")) || iParam0 == joaat("service_earn_avenger_operations")) || iParam0 == joaat("service_earn_avenger_ops_bonus")) || iParam0 == joaat("service_earn_ambient_job_drug_vehicle")) || iParam0 == 649031587) || iParam0 == -1539520895) || iParam0 == 560526114) || iParam0 == -256590568) || iParam0 == -470808433) || iParam0 == 1245164680) || iParam0 == 1648751987) || iParam0 == 674719198) || iParam0 == -1433838369) || iParam0 == 1424147761) || iParam0 == 617724895) || iParam0 == 2131157548) || iParam0 == 1237940902) || iParam0 == -1688538833) || iParam0 == 918785029) || iParam0 == -1343182760) || iParam0 == -1725871206) || iParam0 == 1435585629) || iParam0 == 1851118721) || iParam0 == -1961446392) || iParam0 == -1726080156) || iParam0 == 300207193)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_31();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_11()) || unk_0x34F31012FED51A0F())
		{
			if (func_30(Global_4535950[iVar2 /*85*/].f_66.f_6, Global_4535950[iVar2 /*85*/].f_66.f_4, Global_4535950[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4537456 = 1;
			}
			return 0;
		}
		if (Global_2697634)
		{
			if (Global_4535950[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4535950[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_29(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x5F7C6361179DFFC4(iVar3))
		{
			Global_4535950[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4535950[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar2 /*85*/].f_66.f_14 = unk_0x8034325BF6D6E41F();
			if (bVar0)
			{
				Global_4535950[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4535950[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4535950[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_25(Global_4535950[iVar2 /*85*/], iVar2);
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	return 0;
}

void func_25(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<4> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam19;
	iVar1 = func_27(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_26();
		unk_0x71A6F836422FDD2B(1, &Var0, 37, iVar1, Var0.f_0);
	}
}

void func_26()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_27(int iParam0)
{
	var uVar0;
	
	if (func_28(uParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, uParam0);
	}
	return uVar0;
}

int func_28(var uParam0)
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

int func_29(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_30(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case joaat("service_spend_match_entry_fee"):
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("service_earn_pickup"):
			case joaat("service_earn_ambient_mugging"):
			case joaat("service_earn_ambient_pickup"):
			case joaat("service_earn_deathmatch_bounty"):
			case joaat("service_earn_cashing_out"):
			case joaat("service_earn_refund_arena_spec_box_entry"):
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case joaat("service_earn_debug"):
				return 0;
				break;
			
			case joaat("service_earn_initial_cash"):
			case joaat("service_earn_jobs"):
			case joaat("service_earn_betting"):
			case joaat("service_earn_lottery"):
			case joaat("service_earn_challenge_win"):
			case joaat("service_earn_property_sales"):
			case joaat("service_earn_vehicle_sales"):
			case joaat("service_earn_lester_target_kill"):
			case joaat("service_earn_bounty_collected"):
			case joaat("service_earn_crate_drop"):
			case joaat("service_earn_holdups"):
			case joaat("service_earn_import_export"):
			case joaat("service_earn_armored_trucks"):
			case joaat("service_earn_jobshare_cash"):
			case joaat("service_earn_not_badsport"):
			case joaat("service_earn_bank_interest"):
			case joaat("service_earn_cncw"):
			case joaat("service_earn_cncb"):
			case joaat("service_earn_job_bonus"):
			case joaat("service_earn_bend_job"):
			case joaat("service_earn_personal_vehicle"):
			case joaat("service_earn_daily_objectives"):
			case joaat("service_earn_ambient_job_plane_takedown"):
			case joaat("service_earn_ambient_job_distract_cops"):
			case joaat("service_earn_ambient_job_destroy_veh"):
			case joaat("service_earn_refund_backup_vagos"):
			case joaat("service_earn_refund_backup_lost"):
			case joaat("service_earn_refund_backup_families"):
			case joaat("service_earn_refund_hire_mugger"):
			case joaat("service_earn_refund_hire_mercenary"):
			case joaat("service_earn_refund_buy_cardropoff"):
			case joaat("service_earn_refund_heli_pickup"):
			case joaat("service_earn_refund_boat_pickup"):
			case joaat("service_earn_refund_clear_wanted"):
			case joaat("service_earn_refund_head_2_head"):
			case joaat("service_earn_refund_challenge"):
			case joaat("service_earn_refund_share_last_job"):
			case joaat("service_earn_refund_lottery"):
			case -1426920838:
			case joaat("service_earn_gangattack_pickup"):
			case joaat("service_earn_ambient_job_hot_target_deliver"):
			case joaat("service_earn_ambient_job_hot_target_kill"):
			case joaat("service_earn_ambient_job_urban_warfare"):
			case joaat("service_earn_ambient_job_checkpoint_collection"):
			case joaat("service_earn_ambient_job_time_trial"):
			case joaat("service_earn_ambient_job_challenges"):
			case joaat("service_earn_ambient_job_heli_hot_target"):
			case joaat("service_earn_ambient_job_dead_drop"):
			case joaat("service_earn_ambient_job_penned_in"):
			case joaat("service_earn_ambient_job_pass_parcel"):
			case joaat("service_earn_ambient_job_blast"):
			case joaat("service_earn_ambient_job_hot_property"):
			case joaat("service_earn_ambient_job_king"):
			case joaat("service_earn_ambient_job_beast"):
			case joaat("service_earn_boss"):
			case joaat("service_earn_goon"):
			case joaat("service_earn_boss_agency"):
			case joaat("service_earn_from_destroying_contraband"):
			case joaat("service_earn_premium_job"):
			case joaat("service_earn_from_vehicle_export"):
			case joaat("service_earn_smuggler_agency"):
			case joaat("service_earn_wage_payment_bonus"):
			case joaat("service_earn_refundammodrop"):
			case joaat("service_earn_salvage_checkpoint_collection"):
			case joaat("service_earn_job_bonus_criminal_mastermind"):
			case joaat("service_earn_job_bonus_heist_award"):
			case joaat("service_earn_job_bonus_first_time_bonus"):
			case joaat("service_earn_refund_orbital_manual"):
			case joaat("service_earn_refund_orbital_auto"):
			case joaat("service_earn_gangops_wages"):
			case joaat("service_earn_gangops_wages_bonus"):
			case joaat("service_earn_gangops_prep_participation"):
			case joaat("service_earn_gangops_setup"):
			case joaat("service_earn_gangops_setup_fail"):
			case joaat("service_earn_gangops_finale"):
			case joaat("service_earn_gangops_award_mastermind_2"):
			case joaat("service_earn_gangops_award_mastermind_3"):
			case joaat("service_earn_gangops_award_mastermind_4"):
			case joaat("service_earn_gangops_award_loyalty_award_2"):
			case joaat("service_earn_gangops_award_loyalty_award_3"):
			case joaat("service_earn_gangops_award_loyalty_award_4"):
			case joaat("service_earn_gangops_award_first_time_xm_base"):
			case joaat("service_earn_gangops_award_first_time_xm_submarine"):
			case joaat("service_earn_gangops_award_first_time_xm_silo"):
			case joaat("service_earn_gangops_award_supporting"):
			case joaat("service_earn_gangops_award_order"):
			case joaat("service_earn_gangops_elite_xm_base"):
			case joaat("service_earn_gangops_elite_xm_submarine"):
			case joaat("service_earn_gangops_elite_xm_silo"):
			case joaat("service_earn_gangops_rival_delivery"):
			case joaat("service_earn_doomsday_finale_bonus"):
			case joaat("service_earn_bounty_hunter_reward"):
			case joaat("service_earn_from_business_battle"):
			case joaat("service_earn_from_club_management_participation"):
			case joaat("service_earn_from_fmbb_phonecall_mission"):
			case joaat("service_earn_from_business_hub_sell"):
			case joaat("service_earn_from_fmbb_boss_work"):
			case joaat("service_earn_fmbb_wage_bonus"):
			case joaat("service_earn_nightclub_dancing_award"):
			case joaat("service_earn_bb_event_bonus"):
			case joaat("service_earn_arena_skill_lvl_award"):
			case joaat("service_earn_arena_career_tier_progression_1"):
			case joaat("service_earn_arena_career_tier_progression_2"):
			case joaat("service_earn_arena_career_tier_progression_3"):
			case joaat("service_earn_arena_career_tier_progression_4"):
			case joaat("service_earn_spin_the_wheel_cash"):
			case joaat("service_earn_assassinate_target_killed"):
			case joaat("service_earn_arena_war"):
			case joaat("service_earn_ambient_job_rc_time_trial"):
			case joaat("service_earn_daily_objective_event"):
			case joaat("service_earn_collectables_action_figures"):
			case joaat("service_earn_casino_mission_reward"):
			case joaat("service_earn_casino_story_mission_reward"):
			case joaat("service_earn_casino_award_mission_one_first_time"):
			case joaat("service_earn_casino_award_mission_two_first_time"):
			case joaat("service_earn_casino_award_mission_three_first_time"):
			case joaat("service_earn_casino_award_mission_four_first_time"):
			case joaat("service_earn_casino_award_mission_five_first_time"):
			case joaat("service_earn_casino_award_mission_six_first_time"):
			case joaat("service_earn_casino_award_straight_flush"):
			case joaat("service_earn_casino_award_top_pair"):
			case joaat("service_earn_casino_award_full_house"):
			case joaat("service_earn_casino_award_lucky_lucky"):
			case joaat("service_earn_casino_award_high_roller_bronze"):
			case joaat("service_earn_casino_award_high_roller_silver"):
			case joaat("service_earn_casino_award_high_roller_gold"):
			case joaat("service_earn_casino_award_high_roller_platinum"):
			case joaat("service_earn_casino_heist_setup_mission"):
			case joaat("service_earn_casino_heist_prep_mission"):
				return 1;
				break;
			
			case joaat("service_spend_airstrike"):
			case joaat("service_spend_ammo_drop"):
			case joaat("service_spend_backup_gang"):
			case joaat("service_spend_backup_heli"):
			case joaat("service_spend_boat_pickup"):
			case joaat("service_spend_bounty"):
			case joaat("service_spend_bull_shark"):
			case joaat("service_spend_car_impound"):
			case joaat("service_spend_cash_shared"):
			case joaat("service_spend_challenge_wager"):
			case joaat("service_spend_cops_turn_eye"):
			case joaat("service_spend_heli_pickup"):
			case joaat("service_spend_hire_mercenary"):
			case joaat("service_spend_hire_mugger"):
			case joaat("service_spend_locate_vehicle"):
			case joaat("service_spend_lose_wanted_level"):
			case joaat("service_spend_off_the_radar"):
			case joaat("service_spend_pegasus_delivery"):
			case joaat("service_spend_reveal_players"):
			case joaat("service_spend_vehicle_insurance"):
			case joaat("service_spend_vehicle_insurance_premium"):
				return 2;
				break;
		}
		switch (iParam1)
		{
			case joaat("service_earn_casino_heist_award_smash_n_grab"):
			case joaat("service_earn_casino_heist_award_in_plain_sight"):
			case joaat("service_earn_casino_heist_award_undetected"):
			case joaat("service_earn_casino_heist_award_all_rounder"):
			case joaat("service_earn_casino_heist_award_elite_thief"):
			case joaat("service_earn_casino_heist_award_professional"):
			case joaat("service_earn_casino_heist_finale"):
			case joaat("service_earn_casino_heist_elite_stealth"):
			case joaat("service_earn_casino_heist_elite_subterfuge"):
			case joaat("service_earn_casino_heist_elite_direct"):
			case joaat("service_earn_collectable_completed_collection"):
			case joaat("service_earn_collectables_signal_jammers_complete"):
			case joaat("service_earn_island_heist_finale"):
			case joaat("service_earn_island_heist_elite_challenge"):
			case joaat("service_earn_island_heist_award_professional"):
			case joaat("service_earn_island_heist_award_elite_thief"):
			case joaat("service_earn_island_heist_award_the_island_heist"):
			case joaat("service_earn_island_heist_award_going_alone"):
			case joaat("service_earn_island_heist_award_team_work"):
			case joaat("service_earn_island_heist_award_cat_burglar"):
			case joaat("service_earn_island_heist_award_pro_thief"):
			case joaat("service_earn_island_heist_award_mixing_it_up"):
			case joaat("service_earn_island_heist_prep"):
			case joaat("service_earn_island_heist_dj_mission"):
			case joaat("service_earn_tuner_robbery_prep"):
			case joaat("service_earn_tuner_robbery_finale"):
			case joaat("service_earn_tuner_car_club_membership"):
			case joaat("service_earn_tuner_daily_vehicle"):
			case joaat("service_earn_tuner_daily_vehicle_bonus"):
			case joaat("service_earn_tuner_award_union_depository"):
			case joaat("service_earn_tuner_award_military_convoy"):
			case joaat("service_earn_tuner_award_fleeca_bank"):
			case joaat("service_earn_tuner_award_freight_train"):
			case joaat("service_earn_tuner_award_bolingbroke_ass"):
			case joaat("service_earn_tuner_award_iaa_raid"):
			case joaat("service_earn_tuner_award_meth_job"):
			case joaat("service_earn_tuner_award_bunker_raid"):
			case joaat("service_earn_auto_shop_delivery_award"):
			case joaat("service_earn_agency_security_contract"):
			case joaat("service_earn_agency_payphone_hit"):
			case joaat("service_earn_agency_story_prep"):
			case joaat("service_earn_agency_story_finale"):
			case joaat("service_earn_fixer_award_sec_con"):
			case joaat("service_earn_fixer_award_phone_hit"):
			case joaat("service_earn_fixer_award_agency_story"):
			case joaat("service_earn_fixer_award_short_trip"):
			case joaat("service_earn_fixer_rival_delivery"):
			case joaat("service_earn_music_studio_short_trip"):
			case joaat("service_earn_from_contraband"):
			case joaat("service_earn_nclub_troublemaker"):
			case joaat("service_earn_sightseeing_reward"):
			case joaat("service_earn_ambient_job_clubhouse_contract"):
			case joaat("service_earn_ambient_job_underwater_cargo"):
			case joaat("service_earn_ambient_job_crime_scene"):
			case joaat("service_earn_ambient_job_metal_detector"):
			case joaat("service_earn_ambient_job_smuggler_plane"):
			case joaat("service_earn_ambient_job_smuggler_trail"):
			case joaat("service_earn_ambient_job_golden_gun"):
			case joaat("service_earn_ambient_job_ammunation_delivery"):
			case joaat("service_earn_ambient_job_source_research"):
			case joaat("service_earn_yohan_source_goods"):
			case joaat("service_earn_taxi_job"):
			case joaat("service_earn_daily_stash_house_participation"):
			case joaat("service_earn_daily_stash_house_completed"):
			case joaat("service_earn_ambient_job_gang_convoy"):
			case joaat("service_earn_ambient_job_shop_robbery"):
			case joaat("service_earn_ambient_job_xmas_mugger"):
			case joaat("service_earn_ambient_job_maze_bank"):
			case joaat("service_earn_acid_lab_setup_participation"):
			case joaat("service_earn_acid_lab_source_participation"):
			case joaat("service_earn_acid_lab_sell_participation"):
			case joaat("service_earn_smuggler_ops"):
			case joaat("service_earn_ambient_job_armored_truck"):
			case joaat("service_earn_ambient_job_bicycle_time_trial"):
			case joaat("service_earn_cayo_attrition_bonus_objective"):
			case joaat("service_earn_avenger_operations"):
			case joaat("service_earn_avenger_ops_bonus"):
			case joaat("service_earn_ambient_job_drug_vehicle"):
			case 649031587:
			case -1539520895:
			case 560526114:
			case -256590568:
			case -470808433:
			case 1245164680:
			case 1648751987:
			case 674719198:
			case -1433838369:
			case 1424147761:
			case 617724895:
			case 2131157548:
			case 1237940902:
			case -1688538833:
			case 918785029:
			case -1343182760:
			case -1725871206:
			case 1435585629:
			case 1851118721:
			case -1961446392:
			case -1726080156:
			case 300207193:
				if (iParam2 == 0)
				{
					return 0;
				}
				return 1;
				break;
			
			case joaat("service_earn_collectable_item"):
			case joaat("service_earn_collectables_signal_jammers"):
				return 2;
				break;
		}
		return 0;
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_31()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_29(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_32(int iParam0)
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return 1;
	}
	return 0;
}

void func_33(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<10> Var3;
	int iVar4;
	struct<3> Var5;
	var uVar6;
	
	if (iParam0 == -1)
	{
		return;
	}
	unk_0x1F4C0FAC35E805F4(func_29(iParam0));
	if (Global_4535950[iParam0 /*85*/].f_66.f_10 == 1)
	{
	}
	else if (Global_4535950[iParam0 /*85*/].f_66.f_10 == 4)
	{
		iVar0 = 1;
	}
	else if (Global_4535950[iParam0 /*85*/].f_66.f_10 == 2)
	{
		iVar1 = 1;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	Var3.f_9 = -1;
	func_71(&Var3);
	switch (Global_4535950[iParam0 /*85*/].f_66.f_4)
	{
		case joaat("service_spend_move_yacht"):
			unk_0x5ACC4ABDE69D38D4(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case joaat("service_spend_lose_wanted_level"):
			if (func_70(Global_4535950[iParam0 /*85*/].f_14))
			{
				unk_0xA8C662E16DC4030E(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14), iVar1, iVar0, 0);
			}
			break;
		
		case joaat("service_spend_vehicle_insurance_premium"):
			unk_0xC093604219A86052(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], &(Global_4535950[iParam0 /*85*/].f_14), iVar1, iVar0);
			break;
		
		case joaat("service_spend_cinema"):
			unk_0x2896F1C9B1221336(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case joaat("service_spend_strip_club"):
			unk_0x5B01531ADF19BFE7(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, Global_4535950[iParam0 /*85*/].f_2, iVar0);
			break;
		
		case joaat("service_earn_job_bonus"):
			unk_0xFD5431F2DAC6AD75(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), &(Global_4535950[iParam0 /*85*/].f_14.f_34));
			break;
		
		case joaat("service_spend_telescope"):
			unk_0xE7F56AD8A71AC4E6(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case joaat("service_spend_call_player"):
			unk_0x3C433641FBE9B092(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14), iVar1, iVar0);
			break;
		
		case joaat("service_spend_carwash"):
			unk_0xB18702619A0C0E6E(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case joaat("service_earn_crate_drop"):
			unk_0xDB31E3DCD4EC4157(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_spend_match_entry_fee"):
			unk_0x1BF8BBFBF0066C79(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), iVar1, iVar0);
			break;
		
		case joaat("service_spend_race_vehicle_rental"):
			unk_0x1BF8BBFBF0066C79(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), iVar1, iVar0);
			break;
		
		case joaat("service_spend_healthcare"):
			unk_0x872D579FE9A001C0(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case joaat("service_earn_betting"):
			unk_0xEEF9D0725B6BE1E9(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_34));
			break;
		
		case joaat("service_spend_cash_drop"):
			unk_0x93D264A3F6B3EC83(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case joaat("service_spend_arrest_bail"):
			unk_0x5ED8FA0BD19D1554(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case joaat("service_earn_daily_objectives"):
			unk_0xE36D9E1EDE0E76B4(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_34), -1);
			break;
		
		case joaat("service_spend_bounty_dm"):
			unk_0x2A073933B945C84D(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case joaat("service_spend_wager"):
			unk_0x6409DA98EAB29EF9(Global_4535950[iParam0 /*85*/].f_6, Global_4535950[iParam0 /*85*/].f_7, Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_spend_pay_boss"):
			unk_0x773A6B5BEC33A424(Global_4535950[iParam0 /*85*/].f_6, Global_4535950[iParam0 /*85*/].f_7, Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_spend_pay_goon"):
			unk_0x7E8D3E1CB76D4269(Global_4535950[iParam0 /*85*/].f_6, Global_4535950[iParam0 /*85*/].f_7, Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_spend_rename_organization"):
			unk_0x1DC31E2CC59D9BB2(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, &(Global_4535950[iParam0 /*85*/].f_14.f_26));
			break;
		
		case joaat("service_spend_rename_acid_product"):
			unk_0x14DF63D0BB614642(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, func_69(&(Global_1906887[unk_0x259BE71D8A81D4FA() /*304*/].f_272)));
			break;
		
		case joaat("service_spend_rename_acid_lab"):
			unk_0x2416BBA9A9F18EAB(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, func_69(&(Global_1906887[unk_0x259BE71D8A81D4FA() /*304*/].f_288)));
			break;
		
		case joaat("service_earn_jobs"):
			unk_0x429D9B81D13F3456(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26));
			break;
		
		case joaat("service_earn_premium_job"):
			unk_0xCFDC32D2EF467A52(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26));
			break;
		
		case joaat("service_spend_car_impound"):
			unk_0x231BA68A82FF0316(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], 14, 1, iVar1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 0, 0, 0, iVar0);
			break;
		
		case joaat("service_spend_passive"):
			unk_0x3DFB797B5A3B9923(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, 0);
			break;
		
		case joaat("service_earn_bounty_collected"):
			unk_0xFED8EC9FDD58021A(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14), &(Global_4535950[iParam0 /*85*/].f_14.f_13), 1);
			break;
		
		case joaat("service_earn_gangattack_pickup"):
			unk_0xEAC14C370D2B9D5C(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_pickup"):
		case joaat("service_earn_ambient_mugging"):
		case joaat("service_earn_ambient_pickup"):
		case joaat("service_earn_deathmatch_bounty"):
			unk_0x1D8AF8B06B2F7D3A(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_armored_trucks"):
			unk_0xAA3D72C5CCFC8EF3(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_holdups"):
			unk_0xC972841F26BA2800(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_spend_mechanic_wage"):
			unk_0xE2A7BB72F7220C7E(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, iVar0);
			break;
		
		case joaat("service_spend_utility_bills"):
			unk_0xD00BC7FDBE039771(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, &Global_4541731);
			break;
		
		case joaat("service_spend_pa_service_dancer"):
			unk_0xEC8A7DFF32FD54B9(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], iVar1, iVar0);
			break;
		
		case joaat("service_spend_pa_service_heli_pickup"):
			unk_0xD4C7A8B7798F8D76(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], iVar1, iVar0);
			break;
		
		case joaat("service_spend_ba_vp_bounty"):
			unk_0xD0D235D716CBBF3A(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case joaat("service_spend_ba_vp_bullshark"):
			unk_0xD0D235D716CBBF3A(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case joaat("service_spend_ba_sarge_ammo"):
			unk_0xD0D235D716CBBF3A(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case joaat("service_spend_ba_sarge_molotov"):
			unk_0xD0D235D716CBBF3A(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case joaat("service_spend_ba_enforcer_armour"):
			unk_0xD0D235D716CBBF3A(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_1, iVar1, iVar0);
			break;
		
		case joaat("service_earn_refund_backup_vagos"):
		case joaat("service_earn_refund_backup_lost"):
		case joaat("service_earn_refund_backup_families"):
		case joaat("service_earn_refund_hire_mugger"):
		case joaat("service_earn_refund_hire_mercenary"):
		case joaat("service_earn_refund_buy_cardropoff"):
		case joaat("service_earn_refund_heli_pickup"):
		case joaat("service_earn_refund_boat_pickup"):
		case joaat("service_earn_refund_clear_wanted"):
		case joaat("service_earn_refund_head_2_head"):
		case joaat("service_earn_refund_challenge"):
		case joaat("service_earn_refund_share_last_job"):
		case joaat("service_earn_refund_lottery"):
		case -1426920838:
		case joaat("service_earn_refundammodrop"):
		case joaat("service_earn_refund_arena_spec_box_entry"):
			unk_0x9CBD6E7B088910A1(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_40), &(Global_4535950[iParam0 /*85*/].f_14.f_44), iVar1);
			break;
		
		case joaat("service_earn_ambient_job_destroy_veh"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_distract_cops"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_plane_takedown"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case joaat("service_spend_fairground"):
			unk_0xD8F9465B2186C59F(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_1, iVar1, iVar0, 0);
			break;
		
		case joaat("service_spend_robbed_by_mugger"):
			unk_0x47E7DCF167AAD291(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0, 0);
			break;
		
		case joaat("service_earn_import_export"):
			unk_0x4D10D49AEE7C9AEA(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_3);
			break;
		
		case joaat("service_earn_lester_target_kill"):
			unk_0x830CE9F43780AC92(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_spend_request_job"):
			unk_0x473E72253CC49698(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_spend_taxi"):
			if (Global_4535950[iParam0 /*85*/].f_66.f_16 == 1)
			{
				iVar4 = 1;
			}
			unk_0x46B2ECD9DD5C325A(Global_4535950[iParam0 /*85*/].f_66.f_1, iVar1, iVar0, 0, iVar4);
			break;
		
		case joaat("service_earn_bend_job"):
			unk_0x31F0EC70888E1490(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26));
			break;
		
		case joaat("service_earn_challenge_win"):
			unk_0x736F26192289EEBB(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_34), Global_4535950[iParam0 /*85*/].f_4);
			break;
		
		case joaat("service_earn_not_badsport"):
			unk_0x190378368BE7EFF3(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_spend_impromptu_race_fee"):
			unk_0x1BF8BBFBF0066C79(Global_4535950[iParam0 /*85*/].f_66.f_1, "RaceToPoint", 0, 0);
			break;
		
		case joaat("service_spend_prostitutes"):
			unk_0x8D54F66F66BE0AA4(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case joaat("service_spend_pegasus_delivery"):
			unk_0x231BA68A82FF0316(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_5, 1, iVar1, &(Global_4535950[iParam0 /*85*/].f_14.f_40), 0, 0, 0, iVar0);
			break;
		
		case -2085313189:
			switch (Global_4535950[iParam0 /*85*/].f_66.f_6)
			{
				case 1067618600:
					unk_0x231BA68A82FF0316(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_5, 1, iVar1, &(Global_4535950[iParam0 /*85*/].f_14.f_40), 0, 0, 0, iVar0);
					break;
			}
			break;
		
		case joaat("service_spend_betting"):
			unk_0xEFA7F7BEF6727E05(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, &(Global_4535950[iParam0 /*85*/].f_14.f_34), 0, 0);
			break;
		
		case joaat("service_earn_ambient_job_hot_target_deliver"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_hot_target_kill"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_urban_warfare"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_checkpoint_collection"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_time_trial"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_challenges"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_heli_hot_target"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_dead_drop"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_penned_in"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_pass_parcel"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_blast"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_hot_property"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_king"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case joaat("service_earn_ambient_job_beast"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case joaat("service_earn_boss"):
			unk_0x1C3E529B167B0152(Global_4535950[iParam0 /*85*/].f_6, Global_4535950[iParam0 /*85*/].f_7, Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_goon"):
			unk_0x22A4F417AF7EDBB3(Global_4535950[iParam0 /*85*/].f_6, Global_4535950[iParam0 /*85*/].f_7, Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_boss_agency"):
			unk_0xB7FF64F7F3C11C73(Global_4535950[iParam0 /*85*/].f_6, Global_4535950[iParam0 /*85*/].f_7, Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_8);
			break;
		
		case joaat("service_earn_from_contraband"):
			unk_0x183CC5B7D51F8C27(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_9);
			break;
		
		case joaat("service_earn_from_destroying_contraband"):
			unk_0x95508E1DCDC31638(Global_4535950[iParam0 /*85*/].f_66.f_1, -1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_spend_order_bodyguard_vehicle"):
			unk_0x4EF4490FC3B90AD2(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], 0, 1);
			break;
		
		case joaat("service_spend_order_warehouse_vehicle"):
			unk_0xAC68FC3E6CBCE6FC(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], 0, 1);
			break;
		
		case joaat("service_spend_jukebox"):
			unk_0x4EFA5A2F877A4580(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], 0, 0);
			break;
		
		case joaat("service_spend_business"):
			unk_0x2AED47655EBD41F9(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_1, Global_4535950[iParam0 /*85*/].f_9);
			break;
		
		case joaat("service_earn_from_vehicle_export"):
			unk_0x8692D3326B328B82(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_6, Global_4535950[iParam0 /*85*/].f_7);
			break;
		
		case joaat("service_spend_vehicle_export_mods"):
			unk_0x234A1A7A21B287F0(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/].f_6, Global_4535950[iParam0 /*85*/].f_7, Global_4535950[iParam0 /*85*/].f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_10, Global_4535950[iParam0 /*85*/].f_11, Global_4535950[iParam0 /*85*/].f_12);
			break;
		
		case joaat("service_spend_import_export_repair"):
			unk_0x4748E1ADA6271630(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case joaat("service_earn_smuggler_agency"):
			unk_0xE1037BCF8C2FC81D(Global_4535950[iParam0 /*85*/].f_6, Global_4535950[iParam0 /*85*/].f_7, Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_8);
			break;
		
		case joaat("service_earn_wage_payment_bonus"):
			unk_0xF031AD8A21A8C1A0(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_wage_payment"):
			unk_0x19B6E06EEAE42FD9(Global_4535950[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case joaat("service_earn_salvage_checkpoint_collection"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case joaat("service_earn_cashing_out"):
			unk_0xD96CCBEFF9394523(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_job_bonus_criminal_mastermind"):
			unk_0x30EE7ED666906E6A(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), &(Global_4535950[iParam0 /*85*/].f_14.f_34));
			break;
		
		case joaat("service_earn_job_bonus_heist_award"):
			unk_0x2AF3C8E8D2120D10(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), &(Global_4535950[iParam0 /*85*/].f_14.f_34));
			break;
		
		case joaat("service_earn_job_bonus_first_time_bonus"):
			unk_0x4247915DE1F30269(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), &(Global_4535950[iParam0 /*85*/].f_14.f_34));
			break;
		
		case joaat("service_spend_employ_assassins"):
			unk_0xD22ED94E238E6212(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_refund_orbital_manual"):
			unk_0x1B7FCA28E35CDBB0(Global_4535950[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case joaat("service_earn_refund_orbital_auto"):
			unk_0x1B7FCA28E35CDBB0(Global_4535950[iParam0 /*85*/].f_66.f_1, 1);
			break;
		
		case joaat("service_earn_gangops_wages"):
			unk_0xC7791AFBC3D6AAD5(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_gangops_wages_bonus"):
			unk_0xCFCD749D4E341FD7(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_gangops_prep_participation"):
			unk_0x1320A36B594CBEC2(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_gangops_setup"):
		case joaat("service_earn_gangops_setup_fail"):
			unk_0xE31A6007C811856C(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26));
			break;
		
		case joaat("service_earn_gangops_finale"):
			unk_0x177CA8EC3BEBA1EB(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26));
			break;
		
		case joaat("service_earn_gangops_award_mastermind_2"):
			unk_0xA32B695D90B1EA0E(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case joaat("service_earn_gangops_award_mastermind_3"):
			unk_0xA32B695D90B1EA0E(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case joaat("service_earn_gangops_award_mastermind_4"):
			unk_0xA32B695D90B1EA0E(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case joaat("service_earn_gangops_award_loyalty_award_2"):
			unk_0xA32B695D90B1EA0E(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 3);
			break;
		
		case joaat("service_earn_gangops_award_loyalty_award_3"):
			unk_0xA32B695D90B1EA0E(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 4);
			break;
		
		case joaat("service_earn_gangops_award_loyalty_award_4"):
			unk_0xA32B695D90B1EA0E(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 5);
			break;
		
		case joaat("service_earn_gangops_award_first_time_xm_base"):
			unk_0xA32B695D90B1EA0E(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 6);
			break;
		
		case joaat("service_earn_gangops_award_first_time_xm_submarine"):
			unk_0xA32B695D90B1EA0E(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 7);
			break;
		
		case joaat("service_earn_gangops_award_first_time_xm_silo"):
			unk_0xA32B695D90B1EA0E(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 8);
			break;
		
		case joaat("service_earn_gangops_award_supporting"):
			unk_0xA32B695D90B1EA0E(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 9);
			break;
		
		case joaat("service_earn_gangops_award_order"):
			unk_0xA32B695D90B1EA0E(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 10);
			break;
		
		case joaat("service_earn_gangops_elite_xm_base"):
			unk_0x90C7361D0621A3B6(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case joaat("service_earn_gangops_elite_xm_submarine"):
			unk_0x90C7361D0621A3B6(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case joaat("service_earn_gangops_elite_xm_silo"):
			unk_0x90C7361D0621A3B6(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case joaat("service_earn_gangops_rival_delivery"):
			break;
		
		case joaat("service_spend_gangops_repair_cost"):
			break;
		
		case joaat("service_earn_doomsday_finale_bonus"):
			unk_0x80D494C63CA32BD2(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_9);
			break;
		
		case joaat("service_spend_gangops_skip_mission"):
			unk_0xDE737A0063E49970(Global_4535950[iParam0 /*85*/].f_9, Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case joaat("service_spend_gangops_start_strand"):
			unk_0xE01ABEB9E2CF42B9(Global_4535950[iParam0 /*85*/].f_9, Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case joaat("service_earn_bounty_hunter_reward"):
			unk_0xB1C4AF1EA46263A1(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_spend_nightclub_entry_fee"):
			if (func_68(unk_0xB23E0F9B63D009A8(Global_4535950[iParam0 /*85*/]), 0, 0))
			{
				unk_0x75BD55E6AB869CAF(unk_0xB23E0F9B63D009A8(Global_4535950[iParam0 /*85*/]), Global_4535950[iParam0 /*85*/].f_1, Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1);
			}
			break;
		
		case joaat("service_spend_nightclub_dj_rehire"):
			unk_0xC72D28E5EF1107CF(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], 0, 1);
			break;
		
		case joaat("service_spend_nightclub_bar_drink"):
			unk_0x8F5EE908F5AE9BC3(Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case joaat("service_earn_from_business_battle"):
			unk_0x0FB341836D41663F(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_from_club_management_participation"):
			unk_0xE57ED256E47D44C1(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_from_fmbb_phonecall_mission"):
			unk_0x46A6A8998E3D8C20(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_from_business_hub_sell"):
			unk_0xADDD87AAD0952829(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_1, Global_4535950[iParam0 /*85*/].f_9);
			break;
		
		case joaat("service_earn_from_fmbb_boss_work"):
			unk_0x9C94CA5701190287(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_fmbb_wage_bonus"):
			unk_0x69071D15F1FDD00C(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_spend_arena_join_spectator"):
			unk_0x6AE6C5324BD6DEBD(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_15, 0, 1);
			break;
		
		case joaat("service_earn_bb_event_bonus"):
			unk_0x5CD8E37BA3CBA971(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_arena_skill_lvl_award"):
			unk_0x2F7D409DB8FCD57F(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("service_earn_arena_career_tier_progression_1"):
		case joaat("service_earn_arena_career_tier_progression_2"):
		case joaat("service_earn_arena_career_tier_progression_3"):
		case joaat("service_earn_arena_career_tier_progression_4"):
			unk_0xC7D8414269660FC0(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("service_spend_arena_spectator_box"):
			unk_0x5F6D2B7BA40483E7(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], 0, 1);
			break;
		
		case joaat("service_spend_make_it_rain"):
			unk_0xF5BEEB8BA669C558(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case joaat("service_earn_spin_the_wheel_cash"):
			unk_0x6B07E1D996A69ACF(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_spend_spin_the_wheel_payment"):
			unk_0x929557FEA326BBCC(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case joaat("service_earn_assassinate_target_killed"):
			unk_0xC46CA38367F16578(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_arena_war"):
			unk_0x9025AEE080F84A1B(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_16, Global_4535950[iParam0 /*85*/].f_1);
			break;
		
		case joaat("service_earn_ambient_job_rc_time_trial"):
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, "RC_TIME_TRIAL", &uVar2);
			break;
		
		case joaat("service_earn_daily_objective_event"):
			unk_0x4FF0B515E4C83097(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_collectables_action_figures"):
			unk_0xDE5641418FF92887(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_casino_mission_reward"):
			unk_0xE073EC11C22D5CB5(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_casino_story_mission_reward"):
			unk_0xCC4DAB4ED0FA0069(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_casino_award_mission_one_first_time"):
		case joaat("service_earn_casino_award_mission_two_first_time"):
		case joaat("service_earn_casino_award_mission_three_first_time"):
		case joaat("service_earn_casino_award_mission_four_first_time"):
		case joaat("service_earn_casino_award_mission_five_first_time"):
		case joaat("service_earn_casino_award_mission_six_first_time"):
		case joaat("service_earn_casino_award_straight_flush"):
		case joaat("service_earn_casino_award_top_pair"):
		case joaat("service_earn_casino_award_full_house"):
		case joaat("service_earn_casino_award_lucky_lucky"):
		case joaat("service_earn_casino_award_high_roller_bronze"):
		case joaat("service_earn_casino_award_high_roller_silver"):
		case joaat("service_earn_casino_award_high_roller_gold"):
		case joaat("service_earn_casino_award_high_roller_platinum"):
			unk_0x6F19DA0555AFD918(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_spend_casino_generic"):
			unk_0xE4A2A5E5455654BF(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_spend_arcade_game"):
			unk_0xE05D60BF50DB8652(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_spend_arcade_generic"):
			unk_0x4BB8B039E0467D33(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_spend_casino_heist_skip_mission"):
			unk_0x47051CE8E3FBF361(Global_4535950[iParam0 /*85*/].f_9, Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case joaat("service_spend_casino_heist_setup_heist"):
			unk_0x217CC1BF55D59C44(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, 1, Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 0, 0);
			break;
		
		case joaat("service_spend_casino_heist_casino_model"):
			unk_0x217CC1BF55D59C44(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 1, Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case joaat("service_spend_casino_heist_vault_door"):
			unk_0x217CC1BF55D59C44(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 1, Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case joaat("service_spend_casino_heist_door_security"):
			unk_0x217CC1BF55D59C44(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_debug"):
			break;
	}
	switch (Global_4535950[iParam0 /*85*/].f_66.f_4)
	{
		case joaat("service_earn_casino_heist_setup_mission"):
			unk_0x814E3AEA72604174(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0, 1, Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case joaat("service_earn_casino_heist_prep_mission"):
			unk_0x814E3AEA72604174(Global_4535950[iParam0 /*85*/].f_66.f_1, 1, Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case joaat("service_earn_casino_heist_finale"):
			unk_0x814E3AEA72604174(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 1, Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_casino_heist_award_smash_n_grab"):
		case joaat("service_earn_casino_heist_award_in_plain_sight"):
		case joaat("service_earn_casino_heist_award_undetected"):
		case joaat("service_earn_casino_heist_award_all_rounder"):
		case joaat("service_earn_casino_heist_award_elite_thief"):
		case joaat("service_earn_casino_heist_award_professional"):
			unk_0x9ACC96FE8469BF29(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case joaat("service_earn_casino_heist_elite_stealth"):
		case joaat("service_earn_casino_heist_elite_subterfuge"):
		case joaat("service_earn_casino_heist_elite_direct"):
			unk_0x9ACC96FE8469BF29(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_collectable_item"):
			unk_0x2B8A3862BDE6737C(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_collectable_completed_collection"):
			unk_0xD8D4BFD9BC71E9CC(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_spend_island_heist_support_airstrike"):
			Var3.f_0 = Global_4535950[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case joaat("service_spend_island_heist_support_heavy_weapon"):
			Var3.f_1 = Global_4535950[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case joaat("service_spend_island_heist_support_sniper"):
			Var3.f_2 = Global_4535950[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case joaat("service_spend_island_heist_support_air_support"):
			Var3.f_3 = Global_4535950[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case joaat("service_spend_island_heist_support_drone"):
			Var3.f_4 = Global_4535950[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case joaat("service_spend_island_heist_support_weapon_stash"):
			Var3.f_5 = Global_4535950[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case joaat("service_spend_island_heist_suppressors"):
			Var3.f_6 = Global_4535950[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case joaat("service_spend_island_heist_replay"):
			Var3.f_7 = Global_4535950[iParam0 /*85*/].f_66.f_1;
			unk_0xDCA98A271D0CC516(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, &Var3);
			break;
		
		case joaat("service_spend_beach_party_generic"):
			unk_0x1F6D32912DBFCEA7(Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_collectables_signal_jammers"):
		case joaat("service_earn_collectables_signal_jammers_complete"):
			unk_0x22F6103D7DF1811B(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_island_heist_finale"):
		case joaat("service_earn_island_heist_elite_challenge"):
		case joaat("service_earn_island_heist_award_professional"):
		case joaat("service_earn_island_heist_award_elite_thief"):
		case joaat("service_earn_island_heist_award_the_island_heist"):
		case joaat("service_earn_island_heist_award_going_alone"):
		case joaat("service_earn_island_heist_award_team_work"):
		case joaat("service_earn_island_heist_award_cat_burglar"):
		case joaat("service_earn_island_heist_award_pro_thief"):
		case joaat("service_earn_island_heist_award_mixing_it_up"):
			unk_0xB413CA811F506DCF(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_15, Global_4535950[iParam0 /*85*/].f_66.f_16, Global_4535950[iParam0 /*85*/], 0, 0);
			break;
		
		case joaat("service_earn_island_heist_prep"):
			unk_0xB413CA811F506DCF(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0, 0, Global_4535950[iParam0 /*85*/].f_66.f_15, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_earn_island_heist_dj_mission"):
			unk_0x5836433A62D1A6C4(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_spend_submarine_utility_fee"):
			unk_0x0C919F00C1EB6628(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case joaat("service_spend_submarine_boat"):
			unk_0x0C919F00C1EB6628(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, 0, Global_4535950[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case joaat("service_spend_submarine_relocation"):
			unk_0x0C919F00C1EB6628(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_spend_casino_club_generic"):
			unk_0x7295CAE6372986E4(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_10, Global_4535950[iParam0 /*85*/].f_11, Global_4535950[iParam0 /*85*/].f_12, Global_4535950[iParam0 /*85*/].f_6, Global_4535950[iParam0 /*85*/].f_7);
			break;
		
		case joaat("service_earn_tuner_robbery_prep"):
			unk_0xAF64B7223D9E0FEB(Global_4535950[iParam0 /*85*/].f_66.f_1, -1, -1, Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_earn_tuner_robbery_finale"):
			unk_0xAF64B7223D9E0FEB(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_1, unk_0x70E57E9927B6BA58(&(Global_4535950[iParam0 /*85*/].f_14.f_26)), -1, -1);
			break;
		
		case joaat("service_earn_tuner_car_club_membership"):
			unk_0x7A3449D1CF40578C(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_tuner_daily_vehicle"):
			unk_0xD378B386217DBB5E(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_earn_tuner_daily_vehicle_bonus"):
			unk_0x0C9F128BF7D93196(Global_4535950[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("service_earn_tuner_award_union_depository"):
		case joaat("service_earn_tuner_award_military_convoy"):
		case joaat("service_earn_tuner_award_fleeca_bank"):
		case joaat("service_earn_tuner_award_freight_train"):
		case joaat("service_earn_tuner_award_bolingbroke_ass"):
		case joaat("service_earn_tuner_award_iaa_raid"):
		case joaat("service_earn_tuner_award_meth_job"):
		case joaat("service_earn_tuner_award_bunker_raid"):
			unk_0x16FD73B3F4345670(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), &(Global_4535950[iParam0 /*85*/].f_14.f_44));
			break;
		
		case joaat("service_spend_interaction_menu_ability"):
			unk_0xC8EAF995510A953C(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_earn_auto_shop_delivery_award"):
			unk_0xE16238C3C62697D0(Global_4535950[iParam0 /*85*/].f_66.f_1, 277);
			break;
		
		case joaat("service_spend_business_expenses"):
			unk_0xCF0625D5D2A8F298(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, &Global_4541712);
			break;
		
		case joaat("service_earn_agency_security_contract"):
			unk_0xEBDEC0D7E92D20B0(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_earn_agency_payphone_hit"):
			unk_0x87065E48A6ACAF50(Global_4535950[iParam0 /*85*/].f_66.f_15, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_earn_agency_story_prep"):
			unk_0x4B9D927C4A4FB9DC(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_earn_agency_story_finale"):
			unk_0x9E645A15DE54B5EE(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_earn_fixer_award_sec_con"):
			unk_0x50EE547EE5B116FA(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_earn_fixer_award_phone_hit"):
			unk_0x61D4C8F1146AD04D(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_earn_fixer_award_agency_story"):
			unk_0x583714F99BC53894(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_earn_fixer_award_short_trip"):
			unk_0xFC7D9950A581B4F3(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_earn_fixer_rival_delivery"):
			unk_0xF4E49895EADECEB2(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_spend_request_supply"):
			unk_0x2F5233FB30DF57D5(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("service_spend_request_source_motorcycle"):
			unk_0xA19C2545709CF8B5(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("service_spend_request_out_of_sight"):
			unk_0x29F36537BAC3D711(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("service_earn_music_studio_short_trip"):
			unk_0x07729F2302AF3353(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_spend_fixer_hq_concierge"):
			unk_0xE521F8F950FE34C3(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/].f_66.f_16, Global_4535950[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("service_spend_request_company_suv"):
			unk_0x566ADA7FE6D2FFC4(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_nclub_troublemaker"):
			unk_0xE57ED256E47D44C1(Global_4535950[iParam0 /*85*/].f_66.f_1, 1989714117);
			break;
		
		case joaat("service_spend_agent_14_vehicle_request"):
			unk_0x92473EA3E0FD6C3C(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_sightseeing_reward"):
			unk_0x4D488739F6C82163(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_15, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_spend_tony_limo"):
			unk_0x2ED93149B4CC68C1(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("service_spend_heli_pickup"):
			unk_0x5281982126ED6EB1(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_spend_boat_pickup"):
			unk_0x0B191D6DA6D08B82(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_ambient_job_clubhouse_contract"):
		case joaat("service_earn_ambient_job_underwater_cargo"):
		case joaat("service_earn_ambient_job_crime_scene"):
		case joaat("service_earn_ambient_job_metal_detector"):
		case joaat("service_earn_ambient_job_smuggler_plane"):
		case joaat("service_earn_ambient_job_smuggler_trail"):
		case joaat("service_earn_ambient_job_golden_gun"):
		case joaat("service_earn_ambient_job_ammunation_delivery"):
		case joaat("service_earn_ambient_job_source_research"):
		case joaat("service_earn_ambient_job_gang_convoy"):
		case joaat("service_earn_ambient_job_shop_robbery"):
		case joaat("service_earn_ambient_job_xmas_mugger"):
		case joaat("service_earn_ambient_job_maze_bank"):
		case joaat("service_earn_ambient_job_armored_truck"):
		case joaat("service_earn_ambient_job_bicycle_time_trial"):
		case joaat("service_earn_ambient_job_drug_vehicle"):
		case 674719198:
		case 617724895:
			unk_0x237E99388DCA3CEF(Global_4535950[iParam0 /*85*/].f_66.f_1, &(Global_4535950[iParam0 /*85*/].f_14.f_26), &uVar2);
			break;
		
		case joaat("service_earn_yohan_source_goods"):
			unk_0x1D83165BDA8DF7FC(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_1, Global_4535950[iParam0 /*85*/].f_9, Global_4535950[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("service_spend_nightclub_toilet_attendant"):
			unk_0x635D6A4C16C8B427(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 0, 0);
			break;
		
		case joaat("service_spend_jugallo_boss_vehicle_request"):
			unk_0x2ED93149B4CC68C1(Global_4535950[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("service_earn_taxi_job"):
			Var5.f_0 = Global_4535950[iParam0 /*85*/].f_13;
			Var5.f_1 = Global_4535950[iParam0 /*85*/];
			Var5.f_2 = Global_4535950[iParam0 /*85*/].f_66.f_15;
			unk_0x04AA32C25ED6D69D(Global_4535950[iParam0 /*85*/].f_66.f_1, &Var5);
			break;
		
		case joaat("service_earn_daily_stash_house_participation"):
			unk_0xE8C7135747EA3054(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_daily_stash_house_completed"):
			unk_0x5B46189D0DA97DE4(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_juggalo_story_mission"):
			unk_0xF8BBC07B8BA14ECF(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_juggalo_phone_mission"):
			unk_0x00A1243621982D87(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_winter_22_award_juggalo_story"):
			unk_0xCFA8FE5301B9E6CE(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_winter_22_award_acid_lab"):
			unk_0x2656226DE9A2C644(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_winter_22_award_daily_stash"):
			unk_0x0A4457A33AC118B4(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_winter_22_award_dead_drop"):
			unk_0x39D90796902DFED4(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_winter_22_award_random_event"):
			unk_0x9657D8B784593A5E(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_winter_22_award_taxi"):
			unk_0xD755F13556CF7C9D(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_acid_lab_setup_participation"):
			unk_0x8D2A2025E94588A1(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_acid_lab_source_participation"):
			unk_0x733EB09C30E2BC1E(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_acid_lab_sell_participation"):
			unk_0x5E3EE3B0D24ED146(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_smuggler_ops"):
			unk_0xDEA273D5F8A9661A(Global_4535950[iParam0 /*85*/].f_66.f_15, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("service_earn_cayo_attrition_bonus_objective"):
			unk_0xDCEF983C24191997(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("service_earn_avenger_operations"):
			unk_0x55F006B9D4A46C1D(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case joaat("service_earn_avenger_ops_bonus"):
			unk_0x55F006B9D4A46C1D(Global_4535950[iParam0 /*85*/].f_66.f_1, -2);
			break;
		
		case 649031587:
			func_67(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case -1539520895:
			func_66(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case 560526114:
			func_65(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case -256590568:
			func_64(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case 571787049:
			func_63(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_16, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_15, 0, 1);
			break;
		
		case 1989973742:
			func_58(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_15, 0, 1);
			break;
		
		case -470808433:
			func_57(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case 1245164680:
			func_56(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_15, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case 1648751987:
			func_55(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case -1433838369:
			func_52(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_15, func_54(Global_4535950[iParam0 /*85*/].f_66.f_16));
			break;
		
		case 1424147761:
			func_49(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_15, func_54(Global_4535950[iParam0 /*85*/].f_66.f_16));
			break;
		
		case 1851118721:
			func_48(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_15, Global_4535950[iParam0 /*85*/].f_66.f_16);
			break;
		
		case -1961446392:
			func_47(Global_4535950[iParam0 /*85*/].f_66.f_15, Global_4535950[iParam0 /*85*/].f_66.f_16, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_9, Global_4535950[iParam0 /*85*/].f_13);
			break;
		
		case -1726080156:
			func_45(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_4);
			break;
		
		case 300207193:
			func_43(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
		
		case 1237940902:
			func_42(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_15);
			break;
		
		case -1688538833:
			func_41(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/].f_66.f_15);
			break;
		
		case 918785029:
			func_40(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_16, 1);
			break;
		
		case -1343182760:
			func_40(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_16, 0);
			break;
		
		case -1725871206:
			func_34(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_16, 1);
			break;
		
		case 1435585629:
			func_34(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/], Global_4535950[iParam0 /*85*/].f_66.f_16, 0);
			break;
		
		case 2131157548:
			unk_0xFFE3EA612616D334(Global_4535950[iParam0 /*85*/].f_66.f_1, Global_4535950[iParam0 /*85*/]);
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			unk_0x11FD21BA1B765FE2(Global_4535950[iParam0 /*85*/].f_66, &uVar6);
		}
	}
	func_7(iParam0);
}

void func_34(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	func_38(7, uParam1, 1);
	func_38(6, uParam2, 0);
	func_36(iParam0, joaat("money_earn_jobs"), "BAIL", func_37(bParam3, "HV_TARGET", "HV_GOON"));
	func_35();
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1979564[iVar0] = 0;
		StringCopy(&(Global_1979564.f_7[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	Global_1979564.f_32 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		IntToString(&(Global_1979564.f_33[iVar0 /*8*/]), 0, 32);
		StringCopy(&(Global_1979564.f_58[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	Global_1979564.f_71 = 0;
}

void func_36(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	char cVar0[32];
	char cVar1[32];
	
	StringCopy(&cVar0, sParam2, 32);
	StringCopy(&cVar1, sParam3, 32);
	unk_0xBF7B5BB7ED890380(iParam0, iParam1, &cVar0, &cVar1, &Global_1979564);
}

char* func_37(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_38(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		func_35();
	}
	else if (Global_1979564.f_32 == 6)
	{
		return;
	}
	Global_1979564[Global_1979564.f_32] = uParam1;
	StringCopy(&(Global_1979564.f_7[Global_1979564.f_32 /*4*/]), func_39(iParam0), 16);
	Global_1979564.f_32++;
}

char* func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mid";
			break;
		
		case 1:
			return "to";
			break;
		
		case 2:
			return "A";
			break;
		
		case 3:
			return "B";
			break;
		
		case 4:
			return "flags";
			break;
		
		case 5:
			return "vid";
			break;
		
		case 6:
			return "id";
			break;
		
		case 7:
			return "type";
			break;
		
		case 8:
			return "reason";
			break;
		
		case 9:
			return "h2h";
			break;
		
		case 10:
			return "personal";
			break;
		
		case 11:
			return "pedid";
			break;
		
		case 12:
			return "ch";
			break;
		
		case 13:
			return "desc";
			break;
		
		case 14:
			return "obj";
			break;
		
		case 15:
			return "o";
			break;
		
		case 16:
			return "n";
			break;
		
		case 17:
			return "o1";
			break;
		
		case 18:
			return "o2";
			break;
		
		case 19:
			return "hp";
			break;
		
		case 20:
			return "t";
			break;
		
		case 21:
			return "ot";
			break;
		
		case 22:
			return "nt";
			break;
		
		case 23:
			return "uuid";
			break;
		
		case 24:
			return "qtt";
			break;
		
		case 25:
			return "c";
			break;
		
		case 26:
			return "d";
			break;
		
		case 27:
			return "e";
			break;
		
		case 28:
			return "f";
			break;
		
		case 29:
			return "g";
			break;
		
		case 30:
			return "h";
			break;
		
		case 31:
			return "j";
			break;
		
		case 32:
			return "objective";
			break;
		
		case 33:
			return "boost";
			break;
		
		case 34:
			return "p1p";
			break;
		
		case 35:
			return "p2p";
			break;
		
		case 36:
			return "p3p";
			break;
		
		case 37:
			return "p4p";
			break;
		
		case 38:
			return "isstaff";
			break;
		
		case 39:
			return "qt";
			break;
		
		case 40:
			return "stage";
			break;
		
		case 41:
			return "item";
			break;
	}
	return "UNKNOWN";
}

void func_40(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	func_38(7, uParam1, 1);
	func_38(6, uParam2, 0);
	func_36(iParam0, joaat("money_earn_jobs"), "BAIL", func_37(bParam3, "STANDARD_TARGET", "STANDARD_GOON"));
	func_35();
}

void func_41(int iParam0, var uParam1)
{
	func_38(6, uParam1, 1);
	func_36(iParam0, 1194392656, "BAIL", "HIGH_VALUE_PRISONER");
	func_35();
}

void func_42(int iParam0, var uParam1)
{
	func_38(6, uParam1, 1);
	func_36(iParam0, 1194392656, "BAIL", "PRISONER");
	func_35();
}

void func_43(var uParam0, var uParam1)
{
	func_44(uParam0, joaat("money_earn_jobs"), 7, uParam1, "AWARD", "BAIL");
}

void func_44(var uParam0, int iParam1, int iParam2, var uParam3, char* sParam4, char* sParam5)
{
	func_38(iParam2, uParam3, 1);
	func_36(uParam0, iParam1, sParam4, sParam5);
	func_35();
}

void func_45(int iParam0, bool bParam1)
{
	func_46(13, func_37(bParam1, "UFO_ABDUCTION_PRIMARY", "UFO_ABDUCTION_SECONDARY"), 1);
	func_36(iParam0, joaat("money_earn_jobs"), "AMB_JOB", "JOBS");
	func_35();
}

void func_46(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2)
	{
		func_35();
	}
	else if (Global_1979564.f_71 == 3)
	{
		return;
	}
	StringCopy(&(Global_1979564.f_33[Global_1979564.f_71 /*8*/]), sParam1, 32);
	StringCopy(&(Global_1979564.f_58[Global_1979564.f_71 /*4*/]), func_39(iParam0), 16);
	Global_1979564.f_71++;
}

void func_47(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	func_38(7, iParam0, 1);
	func_38(6, iParam1, 0);
	func_38(39, uParam2, 0);
	func_38(24, uParam3, 0);
	func_38(14, iParam4, 0);
	func_36(((iParam0 + iParam1) + iParam4), joaat("money_earn_jobs"), "PIZZA", "MISSION");
	func_35();
}

void func_48(var uParam0, var uParam1, var uParam2)
{
	func_38(7, uParam1, 1);
	func_38(6, uParam2, 0);
	func_36(uParam0, joaat("money_earn_jobs"), "DISPATCH", "MISSION");
	func_35();
}

void func_49(var uParam0, var uParam1, bool bParam2)
{
	func_38(34, uParam1, 1);
	func_36(uParam0, joaat("money_earn_jobs"), "VEH_ROBBERY", "SELL");
	func_35();
	if (func_13() && bParam2)
	{
		func_51(&Global_1836243);
		func_50(&Global_1836243, 0, 0);
		Global_1836245 = 5000;
	}
}

void func_50(var uParam0, bool bParam1, bool bParam2)
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

void func_51(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_52(var uParam0, var uParam1, bool bParam2)
{
	func_38(6, uParam1, 1);
	func_38(7, func_53(bParam2), 0);
	func_36(uParam0, -747899, "VEH_ROBBERY", "SALVAGE");
	func_35();
}

int func_53(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_54(int iParam0)
{
	return iParam0 == 1;
}

void func_55(var uParam0, var uParam1)
{
	func_44(uParam0, 2011621010, 14, uParam1, "WEEKLY_OBJ", "WEEKLY_OBJ");
}

void func_56(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_38(7, uParam1, 1);
	func_38(6, uParam2, 0);
	func_38(32, uParam3, 0);
	func_36(uParam0, joaat("money_earn_jobs"), "VEH_ROBBERY", "FINALE");
	func_35();
}

void func_57(var uParam0, var uParam1)
{
	func_38(7, uParam1, 1);
	func_36(uParam0, joaat("money_earn_jobs"), "VEH_ROBBERY", "PREP");
	func_35();
}

void func_58(var uParam0, var uParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	
	Var0 = { func_60(969911863) };
	func_38(41, uParam1, 1);
	func_59(uParam0, iParam2, iParam3, Var0.f_0, Var0.f_1, "VEH_ROBBERY", "CLAIM_VEHICLE", 1);
	func_35();
}

void func_59(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, char* sParam5, char* sParam6, bool bParam7)
{
	char cVar0[32];
	char cVar1[32];
	
	StringCopy(&cVar0, sParam5, 32);
	StringCopy(&cVar1, sParam6, 32);
	unk_0x2803B027479FB640(uParam0, uParam1, uParam2, uParam3, uParam4, &cVar0, &cVar1, &Global_1979564);
	if (bParam7)
	{
		if (func_13())
		{
			unk_0xE03B9F95556E48E9();
		}
	}
}

struct<2> func_60(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	Var1.f_1 = iParam0;
	switch (iParam0)
	{
		case joaat("money_spent_weapon_armor"):
			iVar0 = 83;
			break;
		
		case joaat("money_spent_veh_maintenance"):
			iVar0 = 84;
			break;
		
		case joaat("money_spent_contact_service"):
			iVar0 = 89;
			break;
		
		case joaat("money_spent_style_ent"):
			iVar0 = 85;
			break;
		
		case joaat("money_spent_property_util"):
			iVar0 = 86;
			break;
		
		case joaat("money_spent_job_activity"):
			iVar0 = 87;
			break;
		
		case joaat("money_spent_betting"):
			iVar0 = 88;
			break;
		
		case joaat("money_spent_healthcare"):
			iVar0 = 93;
			break;
		
		case joaat("money_spent_dropped_stolen"):
			iVar0 = 90;
			break;
		
		case joaat("MONEY_SPENT_ROCKSTAR_AWARD"):
			iVar0 = 1460;
			break;
		
		case -1892938314:
			iVar0 = 2946;
			break;
		
		case -1355716756:
			iVar0 = 95;
			break;
		
		case 1417845550:
			iVar0 = 3974;
			break;
		
		case -1372379005:
			iVar0 = 107;
			break;
		
		case -1225076623:
			iVar0 = 94;
			break;
		
		case 969911863:
			iVar0 = 12221;
			break;
		
		default:
			return Var1;
			break;
	}
	Var1.f_0 = func_61(iVar0, func_11());
	return Var1;
}

var func_61(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_62(uParam1));
}

int func_62(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_11();
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

void func_63(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	struct<2> Var0;
	
	Var0 = { func_60(joaat("money_spent_job_activity")) };
	func_38(6, uParam1, 1);
	func_38(41, uParam2, 0);
	func_38(7, uParam3, 0);
	func_59(uParam0, iParam4, iParam5, Var0.f_0, Var0.f_1, "VEH_ROBBERY", "SETUP_COST", 1);
	func_35();
}

void func_64(var uParam0, var uParam1)
{
	func_44(uParam0, joaat("money_earn_jobs"), 7, uParam1, "AWARD", "SALVAGE");
}

void func_65(var uParam0, var uParam1)
{
	func_44(uParam0, joaat("money_earn_jobs"), 7, uParam1, "AWARD", "CHICKEN");
}

void func_66(var uParam0, var uParam1)
{
	func_44(uParam0, joaat("money_earn_jobs"), 7, uParam1, "CHICKEN", "FINALE");
}

void func_67(var uParam0, var uParam1)
{
	func_44(uParam0, joaat("money_earn_jobs"), 7, uParam1, "CHICKEN", "SETUP");
}

int func_68(var uParam0, bool bParam1, bool bParam2)
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

var func_69(var uParam0)
{
	return uParam0;
}

bool func_70(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

void func_71(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
}

int func_72(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66 == iParam0)
		{
			*uParam1 = { Global_4535950[iVar0 /*85*/] };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_73(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_4541519[iParam0 /*12*/].f_1 == Global_4541519[iParam0 /*12*/].f_6)
	{
		if (Global_4541519[iParam0 /*12*/].f_1 != 1445302971 && Global_4541519[iParam0 /*12*/].f_1 != -1316591359)
		{
			return;
		}
	}
	iVar0 = 0;
	sVar2 = "Wardrobe";
	iVar0 = unk_0x70E57E9927B6BA58(sVar2);
	iVar0 = (iVar0 || func_75());
	iVar0 = (iVar0 + Global_4539467);
	func_74(&uVar1);
	iVar0 = (iVar0 || uVar1);
	unk_0x8744D2E3FC95740E(&iVar0, 28);
	unk_0x8744D2E3FC95740E(&iVar0, 29);
	unk_0x8744D2E3FC95740E(&iVar0, 26);
	iVar3 = (Global_4541519[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_4541519[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_4541519[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = -2085313189;
	}
	if (((Global_4541519[iParam0 /*12*/] != Global_4541519[iParam0 /*12*/].f_5 || Global_4541519[iParam0 /*12*/].f_1 != Global_4541519[iParam0 /*12*/].f_6) || Global_4541519[iParam0 /*12*/].f_2 != iVar5) || Global_4541519[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_110668 = 1;
	}
}

int func_74(var uParam0)
{
	*uParam0 = system::shift_left(1, 2);
	return 5410420;
}

int func_75()
{
	return system::shift_left(1, 25);
}

int func_76()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_83())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_82())
	{
		return 1;
	}
	if (func_81(159))
	{
		if (!func_80())
		{
			return 1;
		}
	}
	if (func_81(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_77() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_77()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_77()
{
	switch (func_79())
	{
		case 0:
			return func_78();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_78()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_79()
{
	return Global_32948;
}

bool func_80()
{
	return Global_2684504.f_700;
}

int func_81(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_82()
{
	return Global_2696172;
}

bool func_83()
{
	return Global_2684504.f_695;
}

void func_84()
{
	system::wait(0);
}

void func_85()
{
	func_86();
}

void func_86()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_87(struct<34> Param0)
{
	if (Global_262145.f_23711)
	{
		func_85();
	}
	Local_20.f_66 = { Param0 };
	Local_20 = { Param0.f_19 };
	Local_20.f_14 = { Global_4535950[Param0.f_33 /*85*/].f_14 };
	iLocal_19 = Param0.f_33;
	if (Param0.f_33 < 0)
	{
		func_85();
	}
	if (!func_88(&Param0, Param0.f_33))
	{
		func_7(Param0.f_33);
		func_85();
	}
	if (Local_20.f_66.f_2 != 0)
	{
		Local_20.f_66.f_2 = 1;
	}
}

int func_88(var uParam0, int iParam1)
{
	if (Global_4535950[iParam1 /*85*/].f_66.f_1 != uParam0->f_1)
	{
		return 0;
	}
	if (Global_4535950[iParam1 /*85*/].f_66.f_3 != uParam0->f_3)
	{
		return 0;
	}
	if (Global_4535950[iParam1 /*85*/].f_66.f_4 != uParam0->f_4)
	{
		return 0;
	}
	if (Global_4535950[iParam1 /*85*/].f_66.f_5 != uParam0->f_5)
	{
		return 0;
	}
	if (Global_4535950[iParam1 /*85*/].f_66.f_6 != uParam0->f_6)
	{
		return 0;
	}
	if (Global_4535950[iParam1 /*85*/].f_66.f_7 != uParam0->f_7)
	{
		return 0;
	}
	if (Global_4535950[iParam1 /*85*/].f_66.f_14 != uParam0->f_14)
	{
		return 0;
	}
	if (Global_4535950[iParam1 /*85*/].f_66.f_17 != uParam0->f_17)
	{
		return 0;
	}
	return 1;
}

