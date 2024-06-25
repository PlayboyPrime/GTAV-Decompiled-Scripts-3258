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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
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
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	uLocal_44 = unk_0x8CC13B3BF7A9890A();
	uLocal_45 = unk_0x2A3612A4B836469E();
	if (unk_0x96CFB880BAC634CE(18))
	{
		func_10();
	}
	while (!func_9(18))
	{
		func_1();
		system::wait(0);
	}
	func_10();
}

void func_1()
{
	switch (iLocal_46)
	{
		case 0:
			if (((!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x46150A5112561134()) && !func_8()) && !func_7())
			{
				unk_0x97A5024CE91641F1("taxiService");
				iLocal_46 = 1;
			}
			break;
		
		case 1:
			if (unk_0xA6E4F7A73ABC4A76("taxiService"))
			{
				system::start_new_script("taxiService", 1828);
				unk_0xFD49725F3FE7EE13("taxiService");
				iLocal_46 = 2;
			}
			break;
		
		case 2:
			switch (func_5("AM_H_TAXI1"))
			{
				case 2:
					func_2("AM_H_TAXI1", 2, 0, 1000, 10000, 1, 0, 0, 0);
					break;
				
				case 1:
					iLocal_46 = 3;
					break;
			}
			break;
		
		case 3:
			switch (func_5("AM_H_TAXI2"))
			{
				case 2:
					func_2("AM_H_TAXI2", 2, 0, 1000, 10000, 1, 0, 0, 0);
					break;
				
				case 1:
					iLocal_46 = 4;
					break;
			}
			break;
		
		case 4:
			func_10();
			break;
	}
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_3(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_3(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x1B79E937E91F40C3(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (unk_0x1B79E937E91F40C3(&(Global_113969.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113969.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = (unk_0x1DD05E817C89C737() + iParam3);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = ((unk_0x1DD05E817C89C737() + iParam3) + iParam4);
		}
		else
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_113969.f_20413.f_145++;
		func_4();
	}
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113969.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[0])
			{
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[1])
			{
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[2])
			{
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_5(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3(sParam0, &Global_112609))
	{
		return 1;
	}
	if (func_6(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_6(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (unk_0x1B79E937E91F40C3(sParam0, &(Global_113969.f_20413[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_7()
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

bool func_8()
{
	return Global_101572.f_1;
}

int func_9(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

void func_10()
{
	if (func_6("AM_H_TAXI1"))
	{
		func_11("AM_H_TAXI1", 1);
	}
	if (func_6("AM_H_TAXI2"))
	{
		func_11("AM_H_TAXI2", 1);
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_11(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_112606 && iParam1)
	{
		if (func_14(sParam0) && !unk_0xA5DAECD045AA8024())
		{
			unk_0x428C32CC68809A35(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (unk_0x1B79E937E91F40C3(sParam0, &(Global_113969.f_20413[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_113969.f_20413.f_145 - 2))
			{
				func_13(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_12((Global_113969.f_20413.f_145 - 1));
			Global_113969.f_20413.f_145 = (Global_113969.f_20413.f_145 - 1);
			func_4();
			return;
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	StringCopy(&(Global_113969.f_20413[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_113969.f_20413[iParam0 /*16*/].f_4), "", 16);
	Global_113969.f_20413[iParam0 /*16*/].f_8 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = -1;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = 0;
}

void func_13(int iParam0, int iParam1)
{
	Global_113969.f_20413[iParam0 /*16*/] = { Global_113969.f_20413[iParam1 /*16*/] };
	Global_113969.f_20413[iParam0 /*16*/].f_4 = { Global_113969.f_20413[iParam1 /*16*/].f_4 };
	Global_113969.f_20413[iParam0 /*16*/].f_8 = Global_113969.f_20413[iParam1 /*16*/].f_8;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = Global_113969.f_20413[iParam1 /*16*/].f_10;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = Global_113969.f_20413[iParam1 /*16*/].f_9;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = Global_113969.f_20413[iParam1 /*16*/].f_11;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = Global_113969.f_20413[iParam1 /*16*/].f_12;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = Global_113969.f_20413[iParam1 /*16*/].f_13;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = Global_113969.f_20413[iParam1 /*16*/].f_14;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = Global_113969.f_20413[iParam1 /*16*/].f_15;
}

var func_14(var uParam0)
{
	unk_0x39DCBE5519BD783A(uParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

