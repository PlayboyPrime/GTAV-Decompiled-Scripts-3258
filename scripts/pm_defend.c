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
	int iLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	struct<91> Local_34 = { 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_35 = 0;
	var uLocal_36 = 3;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 3;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<122> Local_51[5];
	var uLocal_52 = 3;
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
	iLocal_18 = 3;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0,0375f;
	fLocal_25 = 0,17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	unk_0x925970A93719CADE(1);
	if (unk_0x96CFB880BAC634CE(3))
	{
		if (!unk_0xD6F9DEE4765092A9(Local_34.f_88))
		{
			unk_0x86A2BC11844DEEB3(Local_34.f_88);
		}
		func_41(2);
		func_37(&Local_34);
	}
	while (true)
	{
		if (iLocal_50 > unk_0x1DD05E817C89C737())
		{
			unk_0x9D0B099EEAD74270();
		}
		switch (Local_34.f_0)
		{
			case 0:
				func_27();
				break;
			
			case 1:
				func_4();
				break;
			
			case 2:
				func_1();
				break;
		}
		system::wait(0);
	}
}

void func_1()
{
	switch (Local_34.f_1)
	{
		case 1:
			func_3();
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()
{
	if (!unk_0xD6F9DEE4765092A9(Local_34.f_88))
	{
		unk_0x86A2BC11844DEEB3(Local_34.f_88);
	}
	func_41(2);
	func_37(&Local_34);
}

void func_3()
{
	if (!unk_0xD6F9DEE4765092A9(Local_34.f_87))
	{
		unk_0x86A2BC11844DEEB3(Local_34.f_87);
	}
	func_41(1);
	func_37(&Local_34);
}

void func_4()
{
	switch (Local_34.f_3)
	{
		case 9:
			unk_0x693ACD1AA0BDB375(1435f, -2385f, 1690f, -1885f);
			break;
	}
	switch (Local_34.f_83)
	{
		case 0:
			if (func_26(&Local_34))
			{
				Local_34.f_68 = 0;
				Local_34.f_83++;
			}
			break;
		
		case 1:
			if (func_25(&Local_34))
			{
				Local_34.f_68 = 0;
				Local_34.f_83++;
			}
			break;
		
		case 2:
			func_23();
			func_22();
			func_21(&Local_51);
			func_6(&Local_51);
			break;
	}
	if (Local_34.f_70 >= Local_34.f_69)
	{
		Local_34.f_0 = 2;
		Local_34.f_1 = 1;
	}
	if (unk_0xED977E2AE2CB16EE(func_5(Local_34.f_3), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 1) > 300f)
	{
		Local_34.f_0 = 2;
		Local_34.f_1 = 2;
	}
}

Vector3 func_5(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2147,317f, 4795,208f, 40,08961f;
			break;
		
		case 9:
			return 1524,329f, -2108,269f, 75,7248f;
			break;
		
		case 10:
			return -1172,195f, -1577,427f, 3,38152f;
			break;
		
		case 1:
			return 898,3718f, -177,0764f, 72,68348f;
			break;
		
		case 4:
			return 1191,302f, 2672,064f, 36,73154f;
			break;
		
		case 3:
			return -1584,333f, 5193,487f, 2,95912f;
			break;
		
		case 0:
			return 408,3429f, -1623,836f, 28,29278f;
			break;
		
		case 8:
			return -1339,489f, -21,19435f, 50,34566f;
			break;
		
		case 5:
			return 336,207f, 172,4251f, 102,2055f;
			break;
		
		case 6:
			return 394,5495f, -703,3795f, 28,27281f;
			break;
		
		case 7:
			return -1413,184f, -206,0555f, 46,29474f;
			break;
		
		case 11:
			return -560,3809f, 274,5476f, 82,02014f;
			break;
		
		case 12:
			return 221,0845f, 340,7849f, 104,5883f;
			break;
		
		case 13:
			return -296,7154f, 6259,732f, 30,49339f;
			break;
		
		case 14:
			return -2201,402f, 4291f, 47,32429f;
			break;
	}
	return 10f, 10f, 10f;
}

void func_6(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar3;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		switch ((*iParam0)[iVar1 /*122*/])
		{
			case 1:
				switch ((iParam0[iVar1 /*122*/])->f_1)
				{
					case 0:
						if (Local_34.f_70 >= (iParam0[iVar1 /*122*/])->f_116)
						{
							(iParam0[iVar1 /*122*/])->f_1 = 1;
						}
						break;
					
					case 1:
						if (func_18(&Var2, &uVar3))
						{
							(iParam0[iVar1 /*122*/])->f_1 = 2;
							(iParam0[iVar1 /*122*/])->f_118 = { Var2 };
							(iParam0[iVar1 /*122*/])->f_121 = uVar3;
						}
						break;
					
					case 2:
						if (func_16(iParam0, iVar1))
						{
							if (func_13(iParam0, iVar1))
							{
								func_12(iParam0, iVar1);
								(iParam0[iVar1 /*122*/])->f_1 = 3;
							}
						}
						break;
					
					case 3:
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (unk_0xFC8BFE4B41177C22((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/]))
							{
								if (!unk_0x1C2F771CDC87A3A5((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0))
								{
									switch ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9)
									{
										case 1:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 == 0)
											{
												unk_0x1090EAA386FB31A8((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												unk_0xD0764B65C2DFEDCA((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 2);
												unk_0xBE8796DB2B90A437((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1, unk_0x7F420695E3F776FB((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0));
												unk_0xBE8796DB2B90A437((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 3, !unk_0x7F420695E3F776FB((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0));
												if ((iParam0[iVar1 /*122*/])->f_117 == iVar0)
												{
													unk_0xC3AD0E1324FB3465((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 13, 10f);
													unk_0xBE8796DB2B90A437((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 31, true);
												}
												if ((iParam0[iVar1 /*122*/])->f_117 != iVar0)
												{
													unk_0x98EEF9ADA73BD5B2((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], (iParam0[iVar1 /*122*/])->f_2[(iParam0[iVar1 /*122*/])->f_117 /*20*/], 0f, 0f, 0f, 5f, 0);
												}
												unk_0xF6CC23160DD0AAED((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0);
												unk_0xAAA71DD7E9059338((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 = unk_0x1DD05E817C89C737();
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 1;
											}
											if ((iParam0[iVar1 /*122*/])->f_117 != iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 != 0)
												{
													if ((unk_0x1DD05E817C89C737() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17) > 10000)
													{
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 0;
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 3;
													}
												}
											}
											if ((iParam0[iVar1 /*122*/])->f_117 == iVar0)
											{
												if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17 != 0)
												{
													if ((unk_0x1DD05E817C89C737() - (iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_17) > 25000 || unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1), 1) < 25f)
													{
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 0;
														(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 3;
													}
												}
											}
											break;
										
										case 3:
											if ((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 == 0)
											{
												unk_0x805B057FA4E28531((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												unk_0xD0764B65C2DFEDCA((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 2);
												unk_0xBE8796DB2B90A437((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 1, false);
												unk_0xBE8796DB2B90A437((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 3, true);
												unk_0xF6CC23160DD0AAED((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 300f, 0);
												unk_0xAAA71DD7E9059338((iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/], 0);
												(iParam0[iVar1 /*122*/])->f_2[iVar0 /*20*/].f_16 = 1;
											}
											break;
									}
									func_10(iParam0, iVar1, iVar0, Local_34.f_84);
								}
								else
								{
									func_8(iParam0, iVar1, iVar0);
									func_7(&Local_34);
								}
							}
							iVar0++;
						}
						break;
				}
				break;
		}
		iVar1++;
	}
}

void func_7(var uParam0)
{
	uParam0->f_70++;
}

void func_8(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xFC8BFE4B41177C22((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]))
	{
		if (!unk_0x1C2F771CDC87A3A5((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], 0))
		{
			unk_0x44FB298D6382876D((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], 1);
		}
		unk_0xF09E30AF1B8FB379(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/]));
		func_9(&((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1));
	}
}

void func_9(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xC450B06E5AAA0985(*uParam0))
	{
		unk_0xFE54B8568B2ABD12(uParam0);
		bVar0 = true;
	}
	if (unk_0xC450B06E5AAA0985(uParam0->f_1))
	{
		unk_0xFE54B8568B2ABD12(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xFC8BFE4B41177C22(uParam0->f_7))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0->f_7, 0))
		{
			if (unk_0xA23AABF378361F85(uParam0->f_7))
			{
				unk_0x2BF2F8E20C19583C(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

void func_10(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_11((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/], &((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_1), -1, 0, !bParam3, 0, 300f, 0, -1, -1, 1, 0, 0);
}

int func_11(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = unk_0xB6B621402486C3E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x4FAFF4BCB7633475(uParam0))
	{
		if (!unk_0xA23AABF378361F85(uParam0))
		{
			bVar0 = true;
			if (unk_0x1F7A48429F9F64CE(uParam0) && iParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					unk_0x2BF2F8E20C19583C(uParam0, 1);
				}
				else
				{
					unk_0xF42995E2FC0559E0(uParam0, 1, iParam8);
				}
				uParam1->f_7 = uParam0;
				unk_0x8B185FD7C0308117(uParam0, iParam2);
				unk_0x9FFBD1A17AAE3E0D(uParam0, fParam6);
				if (unk_0xC450B06E5AAA0985(*uParam1))
				{
					unk_0x1456FD5C0C438B19(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x12022943BDF6F088(uParam0, iParam9);
		}
		unk_0xB070F32F5FE88A2A(uParam0, bParam4);
		unk_0x2A253D5DC7CA1CEC(uParam0, iParam5);
		*uParam1 = unk_0xA95E5FB2D27EECF2(uParam0);
		if (!iParam9 == -1 || iParam12)
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x61183D6239A9D7B8(*uParam1, iParam8);
				}
				if (!unk_0xD6F9DEE4765092A9(iParam7))
				{
					unk_0xF3D182B81172EAB6("STRING");
					if (bParam10)
					{
						unk_0x60D332F23943B34F(iParam7);
					}
					else
					{
						unk_0xACF853FB3F6EA7D4(iParam7);
					}
					unk_0xFB605529038475D2(*uParam1);
				}
				unk_0x1456FD5C0C438B19(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (unk_0xC450B06E5AAA0985(*uParam1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x7F420695E3F776FB(uParam0, 0))
		{
			uParam1->f_1 = unk_0x294B0261C20A78E0(uParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (unk_0xC450B06E5AAA0985(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x61183D6239A9D7B8(uParam1->f_1, iParam8);
					}
					if (!unk_0xD6F9DEE4765092A9(iParam7))
					{
						unk_0xF3D182B81172EAB6("STRING");
						if (bParam10)
						{
							unk_0x60D332F23943B34F(iParam7);
						}
						else
						{
							unk_0xACF853FB3F6EA7D4(iParam7);
						}
						unk_0xFB605529038475D2(uParam1->f_1);
					}
					unk_0x1456FD5C0C438B19(uParam1->f_1, 7);
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xC450B06E5AAA0985(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x8744D2E3FC95740E(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xC450B06E5AAA0985(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x8744D2E3FC95740E(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (iParam0[iParam1 /*122*/])->f_111)
	{
		(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_9 = 1;
		iVar0++;
	}
}

int func_13(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0[iParam1 /*122*/])->f_113 == (iParam0[iParam1 /*122*/])->f_111)
	{
		return 1;
	}
	else
	{
		iVar0 = (iParam0[iParam1 /*122*/])->f_113;
		if (!unk_0xFC8BFE4B41177C22((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/]))
		{
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_10 = { (iParam0[iParam1 /*122*/])->f_118 };
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_13 = (iParam0[iParam1 /*122*/])->f_121;
			(iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/] = func_15(iParam0, iParam1, iVar0);
			func_14((iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/], Local_34, (iParam0[iParam1 /*122*/])->f_2[iVar0 /*20*/].f_15);
			(iParam0[iParam1 /*122*/])->f_113++;
		}
	}
	return 0;
}

void func_14(var uParam0, struct<61> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, int iParam32)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
		{
			iVar0 = Param1.f_60[unk_0xC5935DFB3F39785A(0, 3)];
			if (iParam32 != 0)
			{
				iVar0 = iParam32;
			}
			unk_0xB41DEC3AAC1AA107(uParam0, iVar0, -1, 1, 1);
			unk_0x3C0F448853B71C92(uParam0, iVar0, 1);
			unk_0xA83DA0A0DF32920C(uParam0, 1, iVar0);
		}
	}
}

var func_15(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xB1DBFEB95C0EFB88(26, Local_34.f_53[0], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_10, (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_13, 1, 1);
	unk_0x9E6CC93E007219AC(uVar0, 1);
	unk_0x4BD214FCF7332FF6(uVar0, 1);
	unk_0x3CEA1FD137ACE2D9(uVar0, Local_34.f_52);
	unk_0x87EDE48547CC8942(uVar0, 1, 0);
	unk_0xBE8796DB2B90A437(uVar0, 5, true);
	unk_0x570AAA413775DFFB(uVar0, 1);
	unk_0x0428AFDCAA63B06E(uVar0, 42, 1);
	unk_0x0428AFDCAA63B06E(uVar0, 132, 1);
	unk_0xC3AD0E1324FB3465(uVar0, 12, 30f);
	unk_0xC652B7E19CE29859(uVar0, 5);
	if ((iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_18 != -1 && (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_19 != -2)
	{
		iVar1 = (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_18;
		if (unk_0xFC8BFE4B41177C22((iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/]))
		{
			if (!unk_0x1C2F771CDC87A3A5((iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/], 0))
			{
				unk_0x73CAFD2038E812B3(uVar0, (iParam0[iParam1 /*122*/])->f_83[iVar1 /*9*/], (iParam0[iParam1 /*122*/])->f_2[iParam2 /*20*/].f_19);
			}
		}
	}
	iLocal_50 = unk_0x1DD05E817C89C737() + 1000;
	return uVar0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0[iParam1 /*122*/])->f_114 == (iParam0[iParam1 /*122*/])->f_112)
	{
		return 1;
	}
	else
	{
		iVar0 = (iParam0[iParam1 /*122*/])->f_114;
		if (!unk_0xFC8BFE4B41177C22((iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/]))
		{
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/].f_1 = { (iParam0[iParam1 /*122*/])->f_118 };
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/].f_7 = (iParam0[iParam1 /*122*/])->f_121;
			(iParam0[iParam1 /*122*/])->f_83[iVar0 /*9*/] = func_17(iParam0, iParam1, iVar0);
			(iParam0[iParam1 /*122*/])->f_114++;
		}
	}
	return 0;
}

var func_17(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = unk_0x5779387E956077A6((iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_8, (iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_1, (iParam0[iParam1 /*122*/])->f_83[iParam2 /*9*/].f_7, 1, 1, 0);
	unk_0xAA588DD56719AE3A(uVar0, 0);
	return uVar0;
}

int func_18(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = unk_0xC5935DFB3F39785A(0, 10);
	Var1 = { Local_34.f_8[iVar0 /*3*/] };
	if (func_19(Var1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1123024896, 1, 1103626240))
	{
		*uParam0 = { Var1 };
		*uParam1 = Local_34.f_39[iVar0];
		return 1;
	}
	return 0;
}

int func_19(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, float fParam8)
{
	if (func_20(Param0))
	{
		return 0;
	}
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
		if (unk_0x80F249EA6DFE8476(Param0, fParam3, 0))
		{
			return 0;
		}
	}
	if (iParam7 == 1)
	{
		if (unk_0xE8D2BD34CCB74431(Param0, 1,5f) > 0)
		{
			return 0;
		}
	}
	if (iParam5 == 1)
	{
		if (fParam4 > 0f)
		{
			if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Param0, 1) <= (fParam6 + fParam4))
			{
				if (unk_0x7B780C491DEC834E(Param0, fParam4))
				{
					return 0;
				}
			}
		}
	}
	if (fParam8 > 0f)
	{
		if (unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Param0, 1) < fParam8)
		{
			return 0;
		}
	}
	return 1;
}

int func_20(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch ((*iParam0)[iVar0 /*122*/])
		{
			case 0:
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0xFC8BFE4B41177C22((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/]))
					{
						if (!unk_0x1C2F771CDC87A3A5((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 0))
						{
							switch ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9)
							{
								case 2:
									if (unk_0x1B32E388988DD296((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 0) || Local_34.f_84 == 1)
									{
										Local_34.f_84 = 1;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 = 0;
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_9 = 3;
									}
									break;
								
								case 3:
									if ((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 == 0)
									{
										unk_0xF6CC23160DD0AAED((iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/], 150f, 0);
										(iParam0[iVar0 /*122*/])->f_2[iVar1 /*20*/].f_16 = 1;
									}
									break;
							}
							func_10(iParam0, iVar0, iVar1, Local_34.f_84);
						}
						else
						{
							func_8(iParam0, iVar0, iVar1);
							func_7(&Local_34);
						}
					}
					iVar1++;
				}
				break;
		}
		iVar0++;
	}
}

void func_22()
{
	if (Local_34.f_89 == 0)
	{
		if (Local_34.f_71 == 1)
		{
			if (!unk_0xD6F9DEE4765092A9(Local_34.f_85))
			{
				if (unk_0x86A2BC11844DEEB3(Local_34.f_85))
				{
					Local_34.f_89 = 1;
				}
			}
		}
	}
	if (Local_34.f_90 == 0)
	{
		if (Local_34.f_84 == 1)
		{
			if (!unk_0xD6F9DEE4765092A9(Local_34.f_86))
			{
				if (unk_0x86A2BC11844DEEB3(Local_34.f_86))
				{
					Local_34.f_90 = 1;
				}
			}
		}
	}
}

void func_23()
{
	int iVar0;
	int iVar1;
	
	if (Local_34.f_71 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar1 == 0)
			{
				if (unk_0xC450B06E5AAA0985(Local_51[0 /*122*/].f_2[iVar0 /*20*/].f_1))
				{
					func_24("PMD_OBJ", 7500, 1);
					iVar1 = 1;
					Local_34.f_71 = 1;
				}
			}
			iVar0++;
		}
	}
}

void func_24(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 0);
}

int func_25(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_66 == uParam0->f_64)
	{
		return 1;
	}
	else if (Local_51[uParam0->f_68 /*122*/] == 0)
	{
		if (Local_51[uParam0->f_68 /*122*/].f_113 == Local_51[uParam0->f_68 /*122*/].f_111)
		{
			uParam0->f_68++;
		}
		else
		{
			iVar0 = Local_51[uParam0->f_68 /*122*/].f_113;
			if (!unk_0xFC8BFE4B41177C22(Local_51[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/]))
			{
				Local_51[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/] = func_15(&Local_51, uParam0->f_68, iVar0);
				func_14(Local_51[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/], Local_34, Local_51[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/].f_15);
				Local_51[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/].f_9 = 2;
				Local_51[uParam0->f_68 /*122*/].f_113++;
				uParam0->f_66++;
			}
		}
	}
	else
	{
		uParam0->f_68++;
	}
	return 0;
}

int func_26(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_67 == uParam0->f_65)
	{
		return 1;
	}
	else if (Local_51[uParam0->f_68 /*122*/] == 0)
	{
		if (Local_51[uParam0->f_68 /*122*/].f_114 == Local_51[uParam0->f_68 /*122*/].f_112)
		{
			uParam0->f_68++;
		}
		else
		{
			iVar0 = Local_51[uParam0->f_68 /*122*/].f_114;
			if (!unk_0xFC8BFE4B41177C22(Local_51[uParam0->f_68 /*122*/].f_83[iVar0 /*9*/]))
			{
				Local_51[uParam0->f_68 /*122*/].f_83[iVar0 /*9*/] = func_17(&Local_51, uParam0->f_68, iVar0);
				Local_51[uParam0->f_68 /*122*/].f_114++;
				uParam0->f_67++;
			}
		}
	}
	else
	{
		uParam0->f_68++;
	}
	return 0;
}

void func_27()
{
	switch (Local_34.f_51)
	{
		case 0:
			func_31(&Local_34, func_36());
			func_30(&Local_34);
			Local_34.f_51++;
			break;
		
		case 1:
			func_29(Local_34);
			Local_34.f_51++;
			break;
		
		case 2:
			if (func_28(Local_34))
			{
				Local_34.f_51++;
			}
			break;
		
		case 3:
			if (unk_0x06CD913C241C765E("PMD_ENEMIES", &(Local_34.f_52)))
			{
				unk_0xD414C47AFF81382A(5, joaat("player"), Local_34.f_52);
				unk_0xD414C47AFF81382A(5, Local_34.f_52, joaat("COP"));
				unk_0xD414C47AFF81382A(5, Local_34.f_52, joaat("player"));
				unk_0xD414C47AFF81382A(1, Local_34.f_52, Local_34.f_52);
			}
			Local_34.f_0 = 1;
			break;
	}
}

int func_28(struct<61> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	if (((((((((((Param0.f_53[0] == 0 || unk_0x6252BC0DD8A320DB(Param0.f_53[0])) && (Param0.f_53[1] == 0 || unk_0x6252BC0DD8A320DB(Param0.f_53[1]))) && (Param0.f_53[2] == 0 || unk_0x6252BC0DD8A320DB(Param0.f_53[2]))) && (Param0.f_57[0] == 0 || unk_0x6252BC0DD8A320DB(Param0.f_57[0]))) && (Param0.f_57[1] == 0 || unk_0x6252BC0DD8A320DB(Param0.f_57[1]))) && (Param0.f_57[0] == 0 || unk_0x16CFE70936BA84C7(Param0.f_57[0]))) && (Param0.f_57[1] == 0 || unk_0x16CFE70936BA84C7(Param0.f_57[1]))) && (Param0.f_60[0] == 0 || unk_0x92A65766A892EFC6(Param0.f_60[0]))) && (Param0.f_60[1] == 0 || unk_0x92A65766A892EFC6(Param0.f_60[1]))) && (Param0.f_60[2] == 0 || unk_0x92A65766A892EFC6(Param0.f_60[2]))) && unk_0xDCB78A15E5F495DC(0))
	{
		return 1;
	}
	return 0;
}

void func_29(struct<61> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_53[iVar0] != 0)
		{
			unk_0xEC9DAA34BBB4658C(Param0.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Param0.f_57[iVar0] != 0)
		{
			unk_0xEC9DAA34BBB4658C(Param0.f_57[iVar0]);
			unk_0x7991957B46F22F47(Param0.f_57[iVar0], 3);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_60[iVar0] != 0)
		{
			unk_0xA10F939489C3BE61(Param0.f_60[iVar0], 31, 0);
		}
		iVar0++;
	}
	unk_0xF2CB0224D3BE0B42("PMD", 0);
}

void func_30(var uParam0)
{
	if (!func_20(uParam0->f_76) && !func_20(uParam0->f_79))
	{
		uParam0->f_82 = unk_0xA7B0B03284E7503C((uParam0->f_76 - uParam0->f_79), (uParam0->f_76.f_1 - uParam0->f_79.f_1), (uParam0->f_76.f_2 - uParam0->f_79.f_2), (uParam0->f_76 + uParam0->f_79), (uParam0->f_76.f_1 + uParam0->f_79.f_1), (uParam0->f_76.f_2 + uParam0->f_79.f_2), 0, 1, 1, 1, 1);
	}
	if (!func_20(uParam0->f_72) && !uParam0->f_75 <= 0f)
	{
		unk_0x2094BC4B6731BA68(uParam0->f_72, uParam0->f_75, 1, 0, 0, 0);
	}
}

void func_31(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 9:
			uParam0->f_3 = 9;
			uParam0->f_4 = func_34();
			uParam0->f_5 = { 1533,77f, -2135,35f, 82,04f };
			uParam0->f_2 = 4;
			uParam0->f_53[0] = joaat("g_m_y_lost_01");
			uParam0->f_53[1] = 0;
			uParam0->f_53[2] = 0;
			uParam0->f_57[0] = joaat("gburrito");
			uParam0->f_57[1] = joaat("hexer");
			uParam0->f_60[0] = joaat("weapon_pistol");
			uParam0->f_60[1] = joaat("weapon_sawnoffshotgun");
			uParam0->f_60[2] = joaat("weapon_assaultrifle");
			uParam0->f_72 = { 1533,77f, -2135,35f, 82,04f };
			uParam0->f_75 = 90f;
			uParam0->f_76 = { 1533,77f, -2135,35f, 82,04f };
			uParam0->f_79 = { 54f, 72f, 8f };
			uParam0->f_50 = 9;
			uParam0->f_8[0 /*3*/] = { 1578,134f, -2317,858f, 86,636f };
			uParam0->f_39[0] = 36,2503f;
			uParam0->f_8[1 /*3*/] = { 1571,414f, -2314,379f, 86,0904f };
			uParam0->f_39[1] = 37,4325f;
			uParam0->f_8[2 /*3*/] = { 1555,674f, -2321,857f, 85,2531f };
			uParam0->f_39[2] = 2,4637f;
			uParam0->f_8[3 /*3*/] = { 1516,694f, -1980,273f, 70,1538f };
			uParam0->f_39[3] = 203,6018f;
			uParam0->f_8[4 /*3*/] = { 1505,077f, -1978,409f, 69,794f };
			uParam0->f_39[4] = 217,0733f;
			uParam0->f_8[5 /*3*/] = { 1498,166f, -1981,469f, 69,5705f };
			uParam0->f_39[5] = 256,7048f;
			uParam0->f_8[6 /*3*/] = { 1670,858f, -2022,844f, 99,5899f };
			uParam0->f_39[6] = 142,5751f;
			uParam0->f_8[7 /*3*/] = { 1677,085f, -2035,785f, 98,5593f };
			uParam0->f_39[7] = 109,2985f;
			uParam0->f_8[8 /*3*/] = { 1659,187f, -2090,027f, 99,2239f };
			uParam0->f_39[8] = 9,0974f;
			Local_51[0 /*122*/] = 0;
			Local_51[0 /*122*/].f_111 = 4;
			Local_51[0 /*122*/].f_112 = 2;
			Local_51[0 /*122*/].f_83[0 /*9*/].f_1 = { 1533,375f, -2087,209f, 76,0832f };
			Local_51[0 /*122*/].f_83[0 /*9*/].f_7 = 152,9678f;
			Local_51[0 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
			Local_51[0 /*122*/].f_83[1 /*9*/].f_1 = { 1547,824f, -2091,365f, 76,1018f };
			Local_51[0 /*122*/].f_83[1 /*9*/].f_7 = 55,5566f;
			Local_51[0 /*122*/].f_83[1 /*9*/].f_8 = joaat("gburrito");
			Local_51[0 /*122*/].f_2[0 /*20*/].f_10 = { 1525,76f, -2092,838f, 76,0174f };
			Local_51[0 /*122*/].f_2[0 /*20*/].f_13 = 232,9176f;
			Local_51[0 /*122*/].f_2[1 /*20*/].f_10 = { 1527,138f, -2091,832f, 76,031f };
			Local_51[0 /*122*/].f_2[1 /*20*/].f_13 = 190,6337f;
			Local_51[0 /*122*/].f_2[2 /*20*/].f_10 = { 1523,108f, -2115,134f, 75,6351f };
			Local_51[0 /*122*/].f_2[2 /*20*/].f_13 = 350,4627f;
			Local_51[0 /*122*/].f_2[3 /*20*/].f_10 = { 1522,629f, -2112,768f, 75,6853f };
			Local_51[0 /*122*/].f_2[3 /*20*/].f_13 = 264,9478f;
			Local_51[1 /*122*/] = 1;
			Local_51[1 /*122*/].f_111 = 4;
			Local_51[1 /*122*/].f_112 = 1;
			Local_51[1 /*122*/].f_116 = 2;
			Local_51[1 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
			Local_51[1 /*122*/].f_2[0 /*20*/].f_18 = 0;
			Local_51[1 /*122*/].f_2[0 /*20*/].f_19 = -1;
			Local_51[1 /*122*/].f_2[0 /*20*/].f_15 = joaat("weapon_pistol");
			Local_51[1 /*122*/].f_2[1 /*20*/].f_18 = 0;
			Local_51[1 /*122*/].f_2[1 /*20*/].f_19 = 0;
			Local_51[1 /*122*/].f_2[1 /*20*/].f_15 = joaat("weapon_pistol");
			Local_51[1 /*122*/].f_2[2 /*20*/].f_18 = 0;
			Local_51[1 /*122*/].f_2[2 /*20*/].f_19 = 1;
			Local_51[1 /*122*/].f_2[2 /*20*/].f_15 = joaat("weapon_assaultrifle");
			Local_51[1 /*122*/].f_2[3 /*20*/].f_18 = 0;
			Local_51[1 /*122*/].f_2[3 /*20*/].f_19 = 2;
			Local_51[1 /*122*/].f_2[3 /*20*/].f_15 = joaat("weapon_assaultrifle");
			Local_51[2 /*122*/] = 1;
			Local_51[2 /*122*/].f_111 = 4;
			Local_51[2 /*122*/].f_112 = 1;
			Local_51[2 /*122*/].f_116 = 3;
			Local_51[2 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
			Local_51[2 /*122*/].f_2[0 /*20*/].f_18 = 0;
			Local_51[2 /*122*/].f_2[0 /*20*/].f_19 = -1;
			Local_51[2 /*122*/].f_2[0 /*20*/].f_15 = joaat("weapon_pistol");
			Local_51[2 /*122*/].f_2[1 /*20*/].f_18 = 0;
			Local_51[2 /*122*/].f_2[1 /*20*/].f_19 = 0;
			Local_51[2 /*122*/].f_2[1 /*20*/].f_15 = joaat("weapon_pistol");
			Local_51[2 /*122*/].f_2[2 /*20*/].f_18 = 0;
			Local_51[2 /*122*/].f_2[2 /*20*/].f_19 = 1;
			Local_51[2 /*122*/].f_2[2 /*20*/].f_15 = joaat("weapon_assaultrifle");
			Local_51[2 /*122*/].f_2[3 /*20*/].f_18 = 0;
			Local_51[2 /*122*/].f_2[3 /*20*/].f_19 = 2;
			Local_51[2 /*122*/].f_2[3 /*20*/].f_15 = joaat("weapon_assaultrifle");
			break;
		
		default:
			uParam0->f_2 = 6;
			uParam0->f_53[0] = joaat("g_m_y_mexgoon_01");
			uParam0->f_53[1] = joaat("g_m_y_mexgoon_02");
			uParam0->f_53[2] = joaat("g_m_y_mexgoon_03");
			uParam0->f_60[0] = joaat("weapon_pistol");
			uParam0->f_60[1] = joaat("weapon_microsmg");
			uParam0->f_60[2] = joaat("weapon_assaultrifle");
			uParam0->f_69 = 10;
			break;
	}
	func_33(uParam0);
	func_32(uParam0);
}

void func_32(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Local_51[iVar0 /*122*/] == 0)
		{
			uParam0->f_64 = (uParam0->f_64 + Local_51[iVar0 /*122*/].f_111);
			uParam0->f_65 = (uParam0->f_65 + Local_51[iVar0 /*122*/].f_112);
		}
		uParam0->f_69 = (uParam0->f_69 + Local_51[iVar0 /*122*/].f_111);
		iVar0++;
	}
}

void func_33(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 9:
			switch (uParam0->f_4)
			{
				case 0:
					uParam0->f_85 = "PM_CV1_START";
					uParam0->f_86 = "PM_CV1_GF";
					uParam0->f_87 = "PM_CV1_STOP";
					uParam0->f_88 = "PM_CV1_FAIL";
					uParam0->f_89 = 0;
					uParam0->f_90 = 0;
					break;
				
				case 1:
					uParam0->f_85 = "PM_CV2_START";
					uParam0->f_86 = "PM_CV2_GF";
					uParam0->f_87 = "PM_CV2_STOP";
					uParam0->f_88 = "PM_CV2_FAIL";
					uParam0->f_89 = 0;
					uParam0->f_90 = 0;
					break;
			}
			break;
	}
}

int func_34()
{
	return func_35(Global_112676.f_20, Global_112676.f_29);
}

int func_35(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_36()
{
	return Global_112676.f_20;
}

void func_37(var uParam0)
{
	func_40(*uParam0);
	func_39(&Local_51);
	func_38(&Local_51);
	if (uParam0->f_82 != 0)
	{
		unk_0xD7B6A43ACC36D868(uParam0->f_82, 0);
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_38(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (unk_0xFC8BFE4B41177C22((uParam0[iVar0 /*122*/])->f_83[iVar1 /*9*/]))
			{
				unk_0x68298CA6191CDFDB(&((uParam0[iVar0 /*122*/])->f_83[iVar1 /*9*/]));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_39(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			func_8(uParam0, iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

void func_40(struct<61> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_53[iVar0] != 0)
		{
			unk_0x55098D9E9AD58806(Param0.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Param0.f_57[iVar0] != 0)
		{
			unk_0x55098D9E9AD58806(Param0.f_57[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Param0.f_60[iVar0] != 0)
		{
			unk_0xCF56BDC3BD787B97(Param0.f_60[iVar0]);
		}
		iVar0++;
	}
}

void func_41(int iParam0)
{
	Global_112676.f_22 = iParam0;
}

