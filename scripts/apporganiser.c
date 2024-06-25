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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
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
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_14();
		unk_0xBBC29EBE6E1A48FA();
	}
	func_8();
	while (true)
	{
		system::wait(0);
		if (Global_20930.f_1 != 9)
		{
			if (!iLocal_16)
			{
				iLocal_16 = 1;
			}
			else if (Global_20912)
			{
				if (!iLocal_17)
				{
					iLocal_17 = 1;
					func_7(Global_20911, "SET_DATA_SLOT_EMPTY", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_4(Global_20911, 1);
					func_7(Global_20911, "DISPLAY_VIEW", 5f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					func_3();
				}
			}
			if (func_2())
			{
				func_14();
			}
		}
		if (func_1())
		{
			func_14();
		}
	}
}

int func_1()
{
	if (((Global_20930.f_1 == 1 || Global_20930.f_1 == 3) || Global_20930.f_1 == 0) || Global_20874 == 1)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_9406 == 1 || Global_20930.f_1 < 7)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

void func_3()
{
	if (!iLocal_18)
	{
		if (unk_0x6D05C5731A838CB3(2, 172))
		{
			iLocal_18 = 1;
			func_7(Global_20911, "SET_INPUT_EVENT", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x6D05C5731A838CB3(2, 172))
	{
		iLocal_18 = 0;
	}
	if (!iLocal_19)
	{
		if (unk_0x6D05C5731A838CB3(2, 173))
		{
			iLocal_19 = 1;
			func_7(Global_20911, "SET_INPUT_EVENT", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x6D05C5731A838CB3(2, 173))
	{
		iLocal_19 = 0;
	}
	if (!iLocal_20)
	{
		if (unk_0x6D05C5731A838CB3(2, 174))
		{
			iLocal_20 = 1;
			func_7(Global_20911, "SET_INPUT_EVENT", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x6D05C5731A838CB3(2, 174))
	{
		iLocal_20 = 0;
	}
	if (!iLocal_21)
	{
		if (unk_0x6D05C5731A838CB3(2, 175))
		{
			iLocal_21 = 1;
			func_7(Global_20911, "SET_INPUT_EVENT", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!unk_0x6D05C5731A838CB3(2, 175))
	{
		iLocal_21 = 0;
	}
}

void func_4(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	
	if (Global_98600 == Global_98601)
	{
		if (!bParam1)
		{
			return;
		}
	}
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xA0C7B98BCF1EEF9E(iParam0))
	{
		return;
	}
	func_8();
	iVar0 = Global_98604;
	iVar1 = Global_98603;
	bVar2 = true;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	while (bVar2)
	{
		iVar4 = iVar3;
		iVar3 = Global_98605[iVar0 /*25*/][iVar1];
		if (!iVar3 == iVar4)
		{
			if (!iVar3 == 0)
			{
				switch (iVar0)
				{
					case 0:
						sVar6 = "fSu";
						break;
					
					case 1:
						sVar6 = "fMo";
						break;
					
					case 2:
						sVar6 = "fTu";
						break;
					
					case 3:
						sVar6 = "fWe";
						break;
					
					case 4:
						sVar6 = "fTh";
						break;
					
					case 5:
						sVar6 = "fFr";
						break;
					
					case 6:
						sVar6 = "fSa";
						break;
				}
				unk_0x88F483FBD433696A(iParam0, "SET_DATA_SLOT_EMPTY");
				unk_0x330108B080A2132F(iVar5);
				unk_0xE6B753D52F4CA222();
				unk_0x88F483FBD433696A(iParam0, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(5);
				unk_0x330108B080A2132F(iVar5);
				unk_0x330108B080A2132F(iVar1);
				unk_0x74BF156C860580D4(0f);
				unk_0x74BF156C860580D4(-1f);
				func_6(sVar6);
				func_6(func_5(iVar3));
				unk_0xE6B753D52F4CA222();
				iVar5++;
			}
		}
		iVar1++;
		if (iVar1 > 23)
		{
			iVar1 = 0;
			iVar0++;
		}
		if (iVar0 > 6)
		{
			iVar0 = 0;
		}
		if (iVar0 == Global_98604 && iVar1 == Global_98603)
		{
			bVar2 = false;
		}
	}
	Global_98601 = Global_98600;
}

char* func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ORG_EV_0";
			break;
		
		case 1:
			return "ORG_EV_1";
			break;
	}
	return "ORG_EV_0";
}

void func_6(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam6));
	}
	unk_0xE6B753D52F4CA222();
}

void func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!Global_98599)
	{
		Global_98783 = unk_0x8825A6E0A30BDCB8();
		Global_98782 = unk_0xB12880C92EA6EE15();
		Global_98781 = unk_0x5295501D0862870D();
		Global_98599 = 1;
		Global_98604 = unk_0xDDA4278694CAA369();
		Global_98603 = unk_0x5295501D0862870D();
		func_12();
		return;
	}
	iVar0 = unk_0x8825A6E0A30BDCB8();
	iVar1 = unk_0xB12880C92EA6EE15();
	iVar2 = unk_0x5295501D0862870D();
	iVar3 = Global_98783;
	iVar4 = Global_98782;
	iVar5 = Global_98781;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 0;
	iVar11 = func_9(iVar4, iVar3, iVar1, iVar0);
	if (iVar11 > 0)
	{
		iVar10 = 0;
		if (iVar11 > 7)
		{
			iVar8 = 0;
			iVar9 = 0;
			iVar8 = 0;
			while (iVar8 < 7)
			{
				iVar9 = 0;
				while (iVar9 < 24)
				{
					if (!Global_98605[iVar6 /*25*/][iVar7] == 0)
					{
						Global_98600++;
						Global_98602 = (Global_98602 - 1);
					}
					Global_98605[iVar6 /*25*/][iVar7] = 0;
					iVar9++;
				}
				iVar8++;
			}
		}
		else if (iVar11 > 1)
		{
			iVar10 = (iVar10 + (iVar11 - 1) * 24);
		}
		iVar10 = (iVar10 + (24 - iVar5));
		iVar10 = (iVar10 + (24 - (24 - iVar2)));
		iVar8 = 0;
		iVar7 = Global_98603;
		iVar6 = Global_98604;
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			if (iVar7 > 23)
			{
				iVar7 = 0;
				iVar6++;
			}
			if (iVar6 > 6)
			{
				iVar6 = 0;
			}
			if (!Global_98605[iVar6 /*25*/][iVar7] == 0)
			{
				Global_98600++;
				Global_98602 = (Global_98602 - 1);
			}
			Global_98605[iVar6 /*25*/][iVar7] = 0;
			iVar7++;
			iVar8++;
		}
		Global_98603 = (iVar7 - 1);
		Global_98604 = iVar6;
	}
	else
	{
		if (iVar5 > iVar2)
		{
			Global_98783 = iVar0;
			Global_98782 = iVar1;
			Global_98781 = iVar2;
			Global_98604 = unk_0xDDA4278694CAA369();
			Global_98603 = unk_0x5295501D0862870D();
			return;
		}
		if (iVar5 == iVar2)
		{
			return;
		}
		else
		{
			iVar10 = (iVar2 - iVar5);
			iVar8 = 0;
			iVar7 = Global_98603;
			iVar6 = Global_98604;
			iVar8 = 0;
			while (iVar8 < iVar10)
			{
				if (!Global_98605[iVar6 /*25*/][iVar7] == 0)
				{
					Global_98600++;
					Global_98602 = (Global_98602 - 1);
				}
				Global_98605[iVar6 /*25*/][iVar7] = 0;
				iVar7++;
				if (iVar7 > 23)
				{
					iVar7 = 0;
					iVar6++;
				}
				if (iVar6 > 6)
				{
					iVar6 = 0;
				}
				iVar8++;
			}
			Global_98603 = iVar7;
			Global_98604 = iVar6;
		}
	}
	if (Global_98600 > Global_98601)
	{
	}
	if ((iVar3 == iVar0 && iVar5 == iVar2) && iVar4 == iVar1)
	{
	}
	else
	{
		Global_98783 = iVar0;
		Global_98782 = iVar1;
		Global_98781 = iVar2;
	}
}

int func_9(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	if (!iParam1 == iParam3)
	{
		if (iParam1 < iParam3)
		{
			iVar1 = (func_10(iParam1) - (func_10(iParam1) - iParam0));
			iVar2 = 0;
			if (iParam3 > iParam1 + 1)
			{
				iVar3 = (iParam3 - iParam1);
				iVar4 = iParam1 + 1;
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iVar3)
				{
					if (iVar4 > 11)
					{
						iVar4 = 0;
					}
					iVar2 = (iVar2 + func_10(iVar4));
					iVar4++;
					iVar0++;
				}
			}
			iVar5 = (func_10(iParam3) - iParam2);
			iVar6 = ((iVar1 + iVar2) + iVar5);
			return iVar6;
		}
	}
	else
	{
		if (iParam2 < iParam0)
		{
			return 0;
		}
		if (iParam2 == iParam0)
		{
			return 0;
		}
		return (iParam2 - iParam0);
	}
	return 0;
}

int func_10(int iParam0)
{
	return func_11(iParam0);
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 30;
		
		case 3:
			return 30;
		
		case 5:
			return 30;
		
		case 10:
			return 30;
		
		case 1:
			return 28;
		
		default:
	}
	return 31;
	return 0;
}

void func_12()
{
	int iVar0;
	int iVar1;
	
	Global_98603 = 0;
	Global_98604 = 0;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = 0;
		while (iVar1 < 24)
		{
			Global_98605[iVar0 /*25*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_13();
}

void func_13()
{
	Global_98603 = 0;
	Global_98604 = 0;
	Global_98781 = unk_0x5295501D0862870D();
	Global_98782 = unk_0xB12880C92EA6EE15();
	Global_98783 = unk_0x8825A6E0A30BDCB8();
}

void func_14()
{
	unk_0xBBC29EBE6E1A48FA();
}

