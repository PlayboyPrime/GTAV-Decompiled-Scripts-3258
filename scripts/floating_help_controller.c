void __EntryFunction__()
{
	unk_0x51CC1333A10C4E09();
	while (true)
	{
		system::wait(0);
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112618)
	{
		if (Global_112618[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (unk_0x1DD05E817C89C737() > Global_112618[iVar0 /*28*/].f_21 && Global_112618[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					unk_0x665A7E873A6664BC(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_112618[iVar0 /*28*/].f_21 != -1)
				{
					if (!BitTest(Global_112618[iVar0 /*28*/].f_27, 0))
					{
						Global_112618[iVar0 /*28*/].f_21 = (Global_112618[iVar0 /*28*/].f_21 + system::round((unk_0x0B852B0BF94A8DC1() * 1000f)));
						if (unk_0x00A2121FCB70A45B(iVar1))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Global_112618[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_112618[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_112618[iVar0 /*28*/].f_23 != 0)
					{
						if (!unk_0x1C2F771CDC87A3A5(Global_112618[iVar0 /*28*/].f_23, 0))
						{
							if (!BitTest(Global_112618[iVar0 /*28*/].f_27, 3))
							{
								unk_0xF2095B7705BD9724(iVar1, unk_0x0D1381B6E0F3987D(Global_112618[iVar0 /*28*/].f_23, Global_112618[iVar0 /*28*/].f_24));
							}
							else
							{
								unk_0xC8E9EF71F45A1675(iVar1, Global_112618[iVar0 /*28*/].f_23, Global_112618[iVar0 /*28*/].f_24, Global_112618[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_112618[iVar0 /*28*/].f_24 != 0f || Global_112618[iVar0 /*28*/].f_24.f_1 != 0f) || Global_112618[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						unk_0xF2095B7705BD9724(iVar1, Global_112618[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					unk_0xA0FE5620B9E43942(iVar1, Global_112618[iVar0 /*28*/].f_24, Global_112618[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((unk_0x1DD05E817C89C737() - Global_112618[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_112618[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112618[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112618[iParam0 /*28*/].f_4), "", 64);
	Global_112618[iParam0 /*28*/].f_23 = 0;
	Global_112618[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112618[iParam0 /*28*/].f_27 = 0;
	Global_112618[iParam0 /*28*/].f_20 = 0;
	Global_112618[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!unk_0x1B79E937E91F40C3(&(Global_112618[iParam0 /*28*/]), "") && !unk_0xFF692AB7350A74D7(&(Global_112618[iParam0 /*28*/])))
	{
		if (BitTest(Global_112618[iParam0 /*28*/].f_27, 1))
		{
			if (BitTest(Global_112618[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_112618[iParam0 /*28*/]), &(Global_112618[iParam0 /*28*/].f_4), Global_112618[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_112618[iParam0 /*28*/]), &(Global_112618[iParam0 /*28*/].f_4));
			}
		}
		else if (BitTest(Global_112618[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_112618[iParam0 /*28*/]), Global_112618[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_112618[iParam0 /*28*/]));
		}
	}
	return 0;
}

var func_4(int iParam0, var uParam1)
{
	unk_0x39DCBE5519BD783A(uParam1);
	return unk_0x7EBCD400E7DE179C((1 + iParam0));
}

var func_5(int iParam0, var uParam1, var uParam2)
{
	unk_0x39DCBE5519BD783A(uParam1);
	unk_0x511D14ED2DA887E1(uParam2);
	return unk_0x7EBCD400E7DE179C((1 + iParam0));
}

var func_6(int iParam0, var uParam1, var uParam2)
{
	unk_0x39DCBE5519BD783A(uParam1);
	unk_0xACF853FB3F6EA7D4(uParam2);
	return unk_0x7EBCD400E7DE179C((1 + iParam0));
}

var func_7(int iParam0, var uParam1, var uParam2, var uParam3)
{
	unk_0x39DCBE5519BD783A(uParam1);
	unk_0xACF853FB3F6EA7D4(uParam2);
	unk_0x511D14ED2DA887E1(uParam3);
	return unk_0x7EBCD400E7DE179C((1 + iParam0));
}

