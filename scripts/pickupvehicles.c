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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
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
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	func_4(21);
	if (unk_0x96CFB880BAC634CE(18))
	{
		if (unk_0x36E4BBBE16306470() == 16)
		{
			func_3(21);
		}
		func_2();
	}
	while (true)
	{
		system::wait(0);
		if (unk_0x486FF5D06E9659F1(joaat("docks_setup")) == 0)
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					iLocal_26 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				}
				else
				{
					iLocal_26 = 0;
				}
			}
			if (unk_0xFC8BFE4B41177C22(iLocal_26))
			{
				if (unk_0xD9F5E1FEFD1329E4(iLocal_26, 0))
				{
					if (unk_0x2E6A27037F1DC473(iLocal_26, joaat("handler")))
					{
						unk_0x4CC1CF98851922CE(0, 51);
						if (!unk_0x43F2D662C7522C93(iLocal_26))
						{
							if (iLocal_30 == 0)
							{
								if (!unk_0xFC8BFE4B41177C22(iLocal_27) || (unk_0xFC8BFE4B41177C22(iLocal_27) && unk_0x8366ABB82B1ABC59(unk_0xD1A6A821F5AC81DB(iLocal_26, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1) != iLocal_27))
								{
									iLocal_27 = unk_0x8366ABB82B1ABC59(unk_0xD1A6A821F5AC81DB(iLocal_26, 1), 15f, joaat("prop_contr_03b_ld"), 1, 0, 1);
								}
								if (unk_0xFC8BFE4B41177C22(iLocal_27))
								{
									if (func_1(&uLocal_28, 1000))
									{
										if (unk_0x6A5E9E4AC5B61452(iLocal_26, iLocal_27))
										{
											if (unk_0x875A214D5EBCA509(0, 51))
											{
												unk_0xBD3D97A93EBB67B3(iLocal_26, iLocal_27);
												iLocal_29 = 1;
												iLocal_30 = 1;
											}
										}
									}
								}
							}
						}
						else
						{
							if (iLocal_29 == 1)
							{
								uLocal_28 = unk_0x1DD05E817C89C737();
								iLocal_29 = 0;
								iLocal_30 = 0;
							}
							if (unk_0x875A214D5EBCA509(0, 51))
							{
							}
						}
					}
				}
			}
		}
	}
}

int func_1(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1DD05E817C89C737();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0xBBC29EBE6E1A48FA();
}

int func_3(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113969.f_9088.f_99.f_219[iVar0], bVar1))
	{
		unk_0x8744D2E3FC95740E(&(Global_113969.f_9088.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

int func_4(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113969.f_9088.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Global_113969.f_9088.f_99.f_219[iVar0]), bVar1);
	return 1;
}

