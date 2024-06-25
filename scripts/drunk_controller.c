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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_18 = 0f;
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
	fLocal_16 = -99f;
	fLocal_18 = -1f;
	unk_0x51CC1333A10C4E09();
	if (unk_0x96CFB880BAC634CE(32))
	{
		func_32();
	}
	while (true)
	{
		system::wait(0);
		func_31(0);
		func_30();
		func_23();
		func_20();
		func_15();
		func_2();
		iLocal_13++;
		if (iLocal_13 >= 16)
		{
			iLocal_13 = 0;
		}
		iLocal_14++;
		if (iLocal_14 >= 16)
		{
			iLocal_14 = 0;
		}
		iLocal_15++;
		if (iLocal_15 >= 5)
		{
			iLocal_15 = 0;
		}
		if (!func_1())
		{
			func_32();
		}
	}
}

int func_1()
{
	if (Global_45215)
	{
		return 1;
	}
	if (unk_0x78411E34CF90EA8C(Global_45216))
	{
		return 1;
	}
	if (unk_0x486FF5D06E9659F1(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_45003 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	if (!Global_45215)
	{
		return;
	}
	iVar1 = unk_0x1DD05E817C89C737();
	if (Global_45217 > iVar1 || Global_45217 == -1)
	{
		if (unk_0x3555462DB47B7AB1())
		{
			return;
		}
		iVar2 = func_14();
		iVar0 = (fLocal_17 - 1);
		while (iVar0 >= 1)
		{
			fLocal_17[iVar0] = fLocal_17[(iVar0 - 1)];
			iVar0 = (iVar0 + -1);
		}
		fLocal_17[0] = iVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_17)
		{
			fVar3 = (fVar3 + fLocal_17[iVar0]);
			iVar4++;
			iVar0++;
		}
		fVar3 = (fVar3 / IntToFloat(iVar4));
		fVar5 = func_9();
		if (Global_45220 != Global_45221)
		{
			fVar6 = (Global_45221 - Global_45220);
			Global_45220 = (Global_45220 + (fVar6 * 0,1f));
			if (unk_0x1D5CD3EAAA7422B0((Global_45220 - Global_45221)) < 0,01f)
			{
				Global_45220 = Global_45221;
			}
		}
		if (!unk_0x7F2356076C3D052D() && !func_8(unk_0x259BE71D8A81D4FA()))
		{
			unk_0xD5681045964A2975("DRUNK_SHAKE", ((Global_45220 * fVar3) * fVar5));
		}
		if ((unk_0x1DD05E817C89C737() % 100) == 0)
		{
			if (Global_45217 == -1)
			{
			}
			else
			{
				if (fLocal_18 == -1f)
				{
					fLocal_18 = fVar3;
				}
				unk_0xB3CAD109683148E3(((Global_45220 * fVar3) * fVar5));
				unk_0x9B669C0440D2AB57(((Global_45219 * fVar3) * fVar5));
				fLocal_18 = fVar3;
			}
		}
		if (((Global_45219 * fVar3) * fVar5) < 1f)
		{
			unk_0xC30B691CAD767629(((Global_45219 * fVar3) * fVar5));
		}
		else
		{
			unk_0xC30B691CAD767629(1f);
		}
		if (!unk_0x0E9A1CE27A31950D())
		{
			unk_0xE31C735DEE2BF705("DRUNK_SHAKE", (((Global_45220 * Global_45214) * fVar3) * fVar5));
		}
		unk_0xAD0E20104A60B568((((Global_45220 * Global_45214) * fVar3) * fVar5));
		if (unk_0x78411E34CF90EA8C(Global_45216))
		{
			if (unk_0xDD87838D03B64B0A(Global_45216))
			{
				unk_0x17F06E9D89A05855(Global_45216, ((Global_45220 * fVar3) * fVar5));
			}
		}
		if (!unk_0xD6F9DEE4765092A9(&Global_45244) && !unk_0xD6F9DEE4765092A9(&Global_45228))
		{
			unk_0xCAC4020CCF361AC8(&Global_45228);
			StringCopy(&Global_45244, "", 16);
		}
		unk_0x513E63C787EE96A7();
		if (Global_45223 > 0f)
		{
			if (fLocal_16 != Global_45223)
			{
				if (unk_0x765B41E82372AA97() != -1)
				{
				}
				else if (!unk_0x382F60C368A6D416())
				{
					unk_0xDA3EE68EF78AA786(&Global_45224, 15f);
					fLocal_16 = Global_45223;
					if (Global_45222 != 1f)
					{
						unk_0x886C31F5E888F079(Global_45222);
					}
				}
			}
			else
			{
				if (unk_0x765B41E82372AA97() != -1 && unk_0x8960847E5FD7B48F() != -1)
				{
					fLocal_16 = -99f;
				}
				unk_0xC5EE3F8EC7822462(2);
				iVar7 = (Global_45217 - iVar1);
				if (iVar7 <= (Global_45218 / 2) && Global_45217 != -1)
				{
					bVar8 = false;
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
					{
						if (unk_0x75E315E7679F4F24(unk_0x4A8C381C258A124D()))
						{
							bVar8 = true;
						}
					}
					if (func_6(unk_0x4A8C381C258A124D()))
					{
						Global_45217 += 1000;
					}
					else if (bVar8)
					{
						Global_45217 += 1000;
					}
					else if (unk_0x765B41E82372AA97() != -1)
					{
						Global_45217 += 1000;
					}
					else if (func_5())
					{
						Global_45217 += 1000;
					}
					else
					{
						if (unk_0x8960847E5FD7B48F() != -1)
						{
							unk_0x20C160A285F3529C((system::to_float((Global_45218 / 2)) / 1000f));
						}
						fLocal_16 = -99f;
						Global_45223 = 0f;
						StringCopy(&Global_45224, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_17)
	{
		fLocal_17[iVar0] = 0f;
		iVar0++;
	}
	fLocal_18 = -1f;
	fLocal_16 = -99f;
	func_3(1);
	iLocal_12 = 1;
}

void func_3(bool bParam0)
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
	func_4();
}

void func_4()
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

bool func_5()
{
	return Global_2710419;
}

int func_6(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_7(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_7(int iParam0)
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

bool func_8(int iParam0)
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_322.f_3, 13);
}

float func_9()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0,1f;
	iVar1 = func_13(unk_0x4A8C381C258A124D());
	iVar2 = func_10(unk_0x4A8C381C258A124D());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0,1f;
		}
		else
		{
			fVar0 = (system::to_float(iVar1) / system::to_float(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0,1f;
	}
	else
	{
		fVar0 = (system::to_float(iVar2) / system::to_float(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	iVar0 = func_12(iParam0);
	iVar1 = func_11(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_45036[iVar1 /*5*/].f_4;
}

int func_11(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_45036[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_12(int iParam0)
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

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	iVar0 = func_12(iParam0);
	iVar1 = func_11(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_45036[iVar1 /*5*/].f_3;
}

float func_14()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x1DD05E817C89C737();
	fVar1 = 1f;
	iVar2 = (Global_45217 - iVar0);
	if (iVar2 <= Global_45218)
	{
		if (Global_45217 != -1)
		{
			fVar1 = (system::to_float(iVar2) / system::to_float(Global_45218));
		}
	}
	return fVar1;
}

void func_15()
{
	if (Global_45005[iLocal_15 /*6*/] == 0)
	{
		func_16(iLocal_15);
	}
}

void func_16(int iParam0)
{
	int iVar0;
	struct<6> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (unk_0x1C2F771CDC87A3A5(Global_45005[iParam0 /*6*/].f_1, 0))
	{
		func_19(iParam0);
		return;
	}
	if (func_6(Global_45005[iParam0 /*6*/].f_1))
	{
		func_19(iParam0);
		return;
	}
	if (!unk_0xA6E4F7A73ABC4A76("drunk"))
	{
		unk_0x97A5024CE91641F1("drunk");
		return;
	}
	iVar0 = func_18();
	if (iVar0 == -1)
	{
		func_19(iParam0);
		return;
	}
	Global_45036[iVar0 /*5*/] = func_17();
	Global_45036[iVar0 /*5*/].f_1 = Global_45005[iParam0 /*6*/].f_1;
	Global_45036[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_45005[iParam0 /*6*/] };
	system::start_new_script_with_args("drunk", &Var1, 6, 1424);
	unk_0xFD49725F3FE7EE13("drunk");
	func_19(iParam0);
}

var func_17()
{
	var uVar0;
	
	uVar0 = Global_45002;
	Global_45002++;
	return uVar0;
}

int func_18()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_45036[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_19(int iParam0)
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

void func_20()
{
	if (!Global_45117[iLocal_13 /*6*/].f_2 == 6)
	{
		if (Global_45117[iLocal_13 /*6*/].f_1 == 0)
		{
			func_22(iLocal_13);
			func_21(iLocal_13);
		}
	}
}

void func_21(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_45117[iParam0 /*6*/] = -1;
	Global_45117[iParam0 /*6*/].f_1 = -1;
	Global_45117[iParam0 /*6*/].f_2 = 6;
	Global_45117[iParam0 /*6*/].f_3 = 0;
	Global_45117[iParam0 /*6*/].f_4 = 0;
}

void func_22(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_45117[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_23()
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_45036[iLocal_14 /*5*/] == -1)
	{
		iVar0 = func_29(Global_45036[iLocal_14 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_24(Global_45036[iLocal_14 /*5*/]);
		}
		else
		{
			func_21(iVar0);
		}
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	func_27(iParam0);
	iVar0 = func_26(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_25(iVar0);
}

void func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_45036[iParam0 /*5*/] = -1;
	Global_45036[iParam0 /*5*/].f_1 = 0;
	Global_45036[iParam0 /*5*/].f_2 = -1;
	Global_45036[iParam0 /*5*/].f_3 = 0;
	Global_45036[iParam0 /*5*/].f_4 = 0;
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_45036[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27(int iParam0)
{
	func_31(iParam0);
	func_28(iParam0);
}

void func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_45117[iVar0 /*6*/].f_1)
		{
			func_21(iVar0);
		}
		iVar0++;
	}
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_45117[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_45117[iVar0 /*6*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_30()
{
	if (Global_45117[iLocal_13 /*6*/] == 1)
	{
		Global_45117[iLocal_13 /*6*/] = 0;
	}
}

void func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_45117[iVar0 /*6*/])
		{
			func_21(iVar0);
		}
		iVar0++;
	}
}

void func_32()
{
	func_33();
	if (!iLocal_12)
	{
		func_3(1);
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_33()
{
	func_36();
	func_35();
	func_34();
	func_4();
	Global_45249 = 0;
	Global_45248 = 0;
	Global_45003 = 0;
	unk_0xD13237BC328B938E("drunk");
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_21(iVar0);
		iVar0++;
	}
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_25(iVar0);
		iVar0++;
	}
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_19(iVar0);
		iVar0++;
	}
}

