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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	var uLocal_23[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	unk_0x51CC1333A10C4E09();
	while (true)
	{
		system::wait(0);
		func_1();
	}
}

void func_1()
{
	if (Global_1836583 == 0 || Global_1836583 == 2)
	{
		iLocal_18 = 3;
	}
	switch (iLocal_18)
	{
		case 0:
			func_106();
			break;
		
		case 1:
			func_12();
			break;
		
		case 2:
			func_6();
			break;
		
		case 3:
			func_2();
			break;
	}
}

void func_2()
{
	int iVar0;
	
	unk_0xBBB7593C7244A846("LPOP_STATE_CLEANUP", func_5(), 0, 0, 255, 255);
	if (iLocal_22 > unk_0x8034325BF6D6E41F())
	{
		return;
	}
	iLocal_22 = unk_0x8034325BF6D6E41F() + 1;
	iVar0 = (iLocal_20 - 1);
	while (iVar0 >= 0)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_23[iVar0]))
		{
			unk_0x81A7F3CD719DD53B(&(uLocal_23[iVar0]));
		}
		iLocal_20 = (iLocal_20 - 1);
		if (iLocal_20 == 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	if (iLocal_20 > 0)
	{
		return;
	}
	switch (iLocal_19)
	{
		case 1:
			func_3();
			break;
	}
	Global_1836583 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1836579[iVar0] = 0;
		iVar0++;
	}
	Global_1836578 = 0;
	unk_0xBBC29EBE6E1A48FA();
}

void func_3()
{
	func_4(0);
	unk_0x48FA483FE4F18CFE("DLC_TUNER/DLC_Tuner_Car_Meet_Test_Area");
}

void func_4(bool bParam0)
{
	unk_0xCFBD89D2F1F18961("AllowScoreAndRadio", bParam0);
	unk_0xCA3C8048CFD52E02("RADIO_36_AUDIOPLAYER", bParam0);
	unk_0xC897319696131088("SE_tr_tuner_car_meet_Meet_rm_Music_01", bParam0);
	unk_0xC897319696131088("SE_tr_tuner_car_meet_Meet_rm_Music_02", bParam0);
	unk_0xC897319696131088("SE_tr_tuner_car_meet_Meet_rm_Music_03", bParam0);
	unk_0xC897319696131088("SE_tr_tuner_car_meet_Meet_rm_Music_04", bParam0);
	unk_0xC897319696131088("SE_tr_tuner_car_meet_Meet_rm_Music_05", bParam0);
	unk_0xC897319696131088("SE_tr_tuner_car_meet_Main_rm_Vehicle_Noise_01", bParam0);
	unk_0xC897319696131088("SE_tr_tuner_car_meet_Main_rm_Vehicle_Noise_02", bParam0);
	unk_0xC897319696131088("SE_tr_tuner_car_meet_Meet_rm_Music_Takeover", bParam0);
	unk_0x57FF2FF5DA6DCB15("AZ_tr_tuner_car_meet_Meet_BG", bParam0, 1);
	unk_0x57FF2FF5DA6DCB15("AZ_tr_tuner_car_meet_Meet_BG_2", bParam0, 1);
	if (bParam0)
	{
		unk_0x166878629B365828("RADIO_36_AUDIOPLAYER");
		unk_0x7C236591DA4F980B("RADIO_36_AUDIOPLAYER", "TUNER_AP_MIX3_PARTC");
		unk_0xB43467C43086A6A1("MP_POSITIONED_RADIO_MUTE_SCENE");
		unk_0x07B35A877A492E93("RADIO_36_AUDIOPLAYER", "TUNER_AP_MIX3_PARTC", 0);
		unk_0x74378390011ACDA4("SE_tr_tuner_car_meet_Meet_rm_Music_01", "RADIO_36_AUDIOPLAYER", 0);
		unk_0x74378390011ACDA4("SE_tr_tuner_car_meet_Meet_rm_Music_02", "RADIO_36_AUDIOPLAYER", 0);
		unk_0x74378390011ACDA4("SE_tr_tuner_car_meet_Meet_rm_Music_03", "RADIO_36_AUDIOPLAYER", 0);
		unk_0x74378390011ACDA4("SE_tr_tuner_car_meet_Meet_rm_Music_04", "RADIO_36_AUDIOPLAYER", 0);
		unk_0x74378390011ACDA4("SE_tr_tuner_car_meet_Meet_rm_Music_05", "RADIO_36_AUDIOPLAYER", 0);
	}
	else
	{
		unk_0x166878629B365828("OFF");
	}
}

Vector3 func_5()
{
	return 0f, 0f, 0f;
}

void func_6()
{
	int iVar0;
	
	if (unk_0x486FF5D06E9659F1(joaat("fm_mission_creator")) == 0 && unk_0x486FF5D06E9659F1(joaat("fm_mission_controller_2020")) == 0)
	{
		iLocal_18 = 3;
	}
	if (BitTest(Global_1836578, 1))
	{
		return;
	}
	switch (iLocal_19)
	{
		case 0:
			iLocal_18 = 3;
			break;
		
		case 1:
			iVar0 = 806;
			break;
	}
	if (unk_0x15CCE8886267624F() || unk_0x78ABC1D11B34F324())
	{
		while (!BitTest(Global_1836578, 1))
		{
			Stack.Push(&uLocal_23);
			Stack.Push(&iLocal_21);
			Call_Loc(iVar0);
			system::wait(0);
		}
		return;
	}
	if (iLocal_22 > unk_0x8034325BF6D6E41F())
	{
		return;
	}
	iLocal_22 = unk_0x8034325BF6D6E41F() + 1;
	if (func_7(&Global_1836579, iLocal_21))
	{
		iLocal_21++;
		return;
	}
	Stack.Push(&uLocal_23);
	Stack.Push(&iLocal_21);
	Call_Loc(iVar0);
}

bool func_7(var uParam0, int iParam1)
{
	return BitTest((*uParam0)[(iParam1 / 32)], iParam1 & 31);
}

void func_8(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	if (*uParam1 > 74)
	{
		return;
	}
	if (*uParam1 == 0 && !unk_0xD7E1DF759CD0FFF2("DLC_TUNER/DLC_Tuner_Car_Meet_Test_Area", 0, -1))
	{
		return;
	}
	if (!unk_0xFC8BFE4B41177C22((*uParam0)[*uParam1]) || unk_0x1C2F771CDC87A3A5((*uParam0)[*uParam1], 0))
	{
		*uParam1++;
		return;
	}
	if (unk_0x55B80B6E7AB61270((*uParam0)[*uParam1]))
	{
		uVar0 = unk_0xE93EDE86BBB66532((*uParam0)[*uParam1]);
		if (((((((((((((((*uParam1 == 10 || *uParam1 == 11) || *uParam1 == 12) || *uParam1 == 14) || *uParam1 == 15) || *uParam1 == 16) || *uParam1 == 17) || *uParam1 == 18) || *uParam1 == 19) || *uParam1 == 20) || *uParam1 == 21) || *uParam1 == 22) || *uParam1 == 23) || *uParam1 == 24) || *uParam1 == 26) || *uParam1 == 27)
		{
			unk_0xC229299217554C78(uVar0, 1, 1, 0);
		}
		if (*uParam1 == 22)
		{
			unk_0x5D7CD709B34C90F0((*uParam0)[*uParam1], 1);
		}
	}
	else if (unk_0x0101C509A6E67F99((*uParam0)[*uParam1]))
	{
		uVar1 = unk_0xBD545F8729E9F413((*uParam0)[*uParam1]);
		if (*uParam1 == 28)
		{
			func_11(uVar1, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 29)
		{
			if (!func_10(uVar1, "anim@amb@carmeet@checkout_car@female_b@idles", "idle_a", *uParam1))
			{
				return;
			}
		}
		else if (*uParam1 == 44)
		{
			if (!func_10(uVar1, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
			{
				return;
			}
		}
		else if (*uParam1 == 42)
		{
			if (!func_10(uVar1, "anim@heists@prison_heiststation@cop_reactions", "drunk_idle", *uParam1))
			{
				return;
			}
		}
		else if (*uParam1 == 31)
		{
			if (!func_10(uVar1, "anim@amb@carmeet@take_photos@female_b@idles", "idle_b", *uParam1))
			{
				return;
			}
			else if (unk_0xFC8BFE4B41177C22((*uParam0)[74]))
			{
				unk_0x4D306DD94DD6FDBA((*uParam0)[74], uVar1, unk_0x72F7E39FB49FC0BA(uVar1, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
			}
		}
		else if (*uParam1 == 49)
		{
			func_11(uVar1, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 53)
		{
			unk_0x80813AC549A1E8AE("anim@amb@carmeet@checkout_engine@male_a@idles");
			if (unk_0xE100DD4F82A51BDE("anim@amb@carmeet@checkout_engine@male_a@idles"))
			{
				unk_0x10425721983AE158(uVar1, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
			}
			else
			{
				return;
			}
		}
		else if (*uParam1 == 55)
		{
			if (!func_10(uVar1, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
			{
				return;
			}
		}
		else if (*uParam1 == 60)
		{
			func_11(uVar1, "WORLD_HUMAN_STAND_MOBILE", *uParam1);
		}
		else if (*uParam1 == 36)
		{
			unk_0x80813AC549A1E8AE("anim@amb@carmeet@checkout_engine@male_a@idles");
			if (unk_0xE100DD4F82A51BDE("anim@amb@carmeet@checkout_engine@male_a@idles"))
			{
				unk_0x10425721983AE158(uVar1, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
			}
			else
			{
				return;
			}
		}
		else if (*uParam1 == 37)
		{
			if (!func_10(uVar1, "amb@world_human_hang_out_street@male_b@idle_a", "idle_a", *uParam1))
			{
				return;
			}
		}
		else if (*uParam1 == 38)
		{
			if (!func_10(uVar1, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
			{
				return;
			}
		}
		else if (*uParam1 == 63)
		{
			func_11(uVar1, "WORLD_HUMAN_INSPECT_STAND", *uParam1);
		}
		else if (*uParam1 == 40)
		{
			func_11(uVar1, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 41)
		{
			func_11(uVar1, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 67)
		{
			func_11(uVar1, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 43)
		{
			func_11(uVar1, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 45)
		{
			func_11(uVar1, "WORLD_HUMAN_INSPECT_STAND", *uParam1);
		}
		else if (*uParam1 == 46)
		{
			if (!func_10(uVar1, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
			{
				return;
			}
		}
		else if (*uParam1 == 47)
		{
			func_11(uVar1, "WORLD_HUMAN_STAND_MOBILE", *uParam1);
		}
		else if (*uParam1 == 48)
		{
			func_11(uVar1, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 30)
		{
			func_11(uVar1, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 50)
		{
			func_11(uVar1, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 51)
		{
			func_11(uVar1, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 52)
		{
			if (!func_10(uVar1, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
			{
				return;
			}
		}
		else if (*uParam1 == 32)
		{
			unk_0x80813AC549A1E8AE("anim@amb@carmeet@checkout_engine@male_a@idles");
			if (unk_0xE100DD4F82A51BDE("anim@amb@carmeet@checkout_engine@male_a@idles"))
			{
				unk_0x10425721983AE158(uVar1, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
			}
			else
			{
				return;
			}
		}
		else if (*uParam1 == 54)
		{
			func_11(uVar1, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 33)
		{
			func_11(uVar1, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 56)
		{
			func_11(uVar1, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 57)
		{
			unk_0x80813AC549A1E8AE("anim@amb@carmeet@checkout_engine@male_a@idles");
			if (unk_0xE100DD4F82A51BDE("anim@amb@carmeet@checkout_engine@male_a@idles"))
			{
				unk_0x10425721983AE158(uVar1, "anim@amb@carmeet@checkout_engine@male_a@idles", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
			}
			else
			{
				return;
			}
		}
		else if (*uParam1 == 58)
		{
			func_11(uVar1, "WORLD_HUMAN_SMOKING", *uParam1);
		}
		else if (*uParam1 == 59)
		{
			func_11(uVar1, "WORLD_HUMAN_AA_COFFEE", *uParam1);
		}
		else if (*uParam1 == 34)
		{
			if (unk_0xFC8BFE4B41177C22((*uParam0)[9]))
			{
				unk_0x015E1BBD4DB33542((*uParam0)[9], uVar1, 0);
				if (!func_10(uVar1, "amb@world_human_seat_wall@male@hands_by_sides@idle_a", "idle_a", *uParam1))
				{
					return;
				}
			}
			else
			{
				func_9(uVar1, *uParam1);
			}
		}
		else if (*uParam1 == 66)
		{
			func_11(uVar1, "WORLD_HUMAN_HANG_OUT_STREET", *uParam1);
		}
		else if (*uParam1 == 39)
		{
			if (!func_10(uVar1, "amb@world_human_window_shop@male@idle_a", "browse_a", *uParam1))
			{
				return;
			}
		}
		else if (*uParam1 == 68)
		{
			func_11(uVar1, "WORLD_HUMAN_SMOKING_POT", *uParam1);
		}
		else
		{
			func_9(uVar1, *uParam1);
		}
	}
	else if (unk_0xBE79A96C521F4432((*uParam0)[*uParam1]))
	{
		if (*uParam1 == 69)
		{
			unk_0xACF36914BA191DCB("SE_tr_tuner_car_meet_Meet_rm_Music_01", (*uParam0)[*uParam1]);
		}
		else if (*uParam1 == 70)
		{
			unk_0xACF36914BA191DCB("SE_tr_tuner_car_meet_Meet_rm_Music_02", (*uParam0)[*uParam1]);
		}
		else if (*uParam1 == 71)
		{
			unk_0xACF36914BA191DCB("SE_tr_tuner_car_meet_Meet_rm_Music_03", (*uParam0)[*uParam1]);
		}
		else if (*uParam1 == 72)
		{
			unk_0xACF36914BA191DCB("SE_tr_tuner_car_meet_Meet_rm_Music_04", (*uParam0)[*uParam1]);
		}
		else if (*uParam1 == 73)
		{
			unk_0xACF36914BA191DCB("SE_tr_tuner_car_meet_Meet_rm_Music_05", (*uParam0)[*uParam1]);
		}
		if (*uParam1 > 68 && *uParam1 < 74)
		{
			unk_0x44C48AC14D3C09ED((*uParam0)[*uParam1], 0, 0);
			unk_0xC1DAC4DA85BB166D((*uParam0)[*uParam1], 0, 0);
		}
	}
	*uParam1++;
	if (*uParam1 >= 74)
	{
		func_4(1);
		unk_0x0B0C9A0F9AAEB7F0(&Global_1836578, true);
	}
}

void func_9(var uParam0, var uParam1)
{
	switch (unk_0xC5935DFB3F39785A(1, 9))
	{
		case 1:
			func_11(uParam0, "WORLD_HUMAN_AA_COFFEE", uParam1);
			break;
		
		case 2:
			func_11(uParam0, "WORLD_HUMAN_AA_SMOKE", uParam1);
			break;
		
		case 3:
			func_11(uParam0, "WORLD_HUMAN_DRINKING", uParam1);
			break;
		
		case 4:
			func_11(uParam0, "WORLD_HUMAN_DRINKING_FACILITY", uParam1);
			break;
		
		case 5:
			func_11(uParam0, "WORLD_HUMAN_SMOKING", uParam1);
			break;
		
		case 6:
			func_11(uParam0, "WORLD_HUMAN_SMOKING_CLUBHOUSE", uParam1);
			break;
		
		case 7:
			func_11(uParam0, "WORLD_HUMAN_SMOKING_POT", uParam1);
			break;
		
		case 8:
			func_11(uParam0, "WORLD_HUMAN_STAND_IMPATIENT", uParam1);
			break;
	}
}

int func_10(var uParam0, char* sParam1, char* sParam2, var uParam3)
{
	if (unk_0x13CCB1AD131C1082(uParam0, sParam1, sParam2, 1))
	{
		return 1;
	}
	unk_0x80813AC549A1E8AE(sParam1);
	if (unk_0xE100DD4F82A51BDE(sParam1))
	{
		unk_0x10425721983AE158(uParam0, sParam1, sParam2, 8f, -8f, -1, 9, 0, 0, 0, 0);
		return 1;
	}
	return 0;
}

bool func_11(var uParam0, char* sParam1, var uParam2)
{
	bool bVar0;
	
	bVar0 = unk_0x282B0289FBD3C119(uParam0, sParam1);
	if (!bVar0)
	{
		unk_0x21B9EFA4B4AA3A5B(uParam0, sParam1, 0, 1);
	}
	return bVar0;
}

void func_12()
{
	struct<8> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	switch (iLocal_19)
	{
		case 1:
			iVar1 = 53927;
			iVar2 = 3628;
			break;
	}
	iLocal_22 = unk_0x8034325BF6D6E41F();
	bVar3 = false;
	while (iLocal_20 < 80)
	{
		if (func_7(&Global_1836579, iLocal_20))
		{
			iLocal_20++;
		}
		else if (iLocal_22 > unk_0x8034325BF6D6E41F())
		{
			system::wait(0);
		}
		else
		{
			if (iVar5 == 0)
			{
				iVar5 = unk_0x7E3F74F641EE6B27();
			}
			Stack.Push(&Var0);
			Stack.Push(iLocal_20);
			Call_Loc(iVar1);
			if (!StackVal)
			{
			}
			else
			{
				iVar4 = iLocal_20;
				bVar3 = func_14(&Var0);
				if (!bVar3)
				{
					system::wait(0);
				}
				else
				{
					func_13(&Var0);
					if (iVar2 != 0)
					{
						Stack.Push(iVar4);
						Stack.Push(&(uLocal_23[iVar4]));
						Call_Loc(iVar2);
					}
					if (unk_0x9390801B06EE998F() || unk_0xDDED2C93E8FD5B69())
					{
						if ((iLocal_20 != 0 && iVar5 != 0) && (iLocal_20 % 2) == 0)
						{
							iLocal_22 = unk_0x8034325BF6D6E41F() + 1;
						}
					}
					iVar5 = 0;
				}
			}
			unk_0x0B0C9A0F9AAEB7F0(&Global_1836578, false);
			iLocal_21 = 0;
			iLocal_18 = 2;
		}

void func_13(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = { 0f, 0f, 0f };
	uParam0->f_5 = 0f;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
}

int func_14(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	unk_0xEC9DAA34BBB4658C(uParam0->f_1);
	if (!unk_0x6252BC0DD8A320DB(uParam0->f_1))
	{
		return 0;
	}
	if (*uParam0 == 1)
	{
		if ((uParam0->f_6 != -1 && unk_0xFC8BFE4B41177C22(uLocal_23[uParam0->f_6])) && unk_0x55B80B6E7AB61270(uLocal_23[uParam0->f_6]))
		{
			uVar0 = unk_0x8728A378EF2B46B2(unk_0xE93EDE86BBB66532(uLocal_23[uParam0->f_6]), 26, uParam0->f_1, uParam0->f_7, 0, 0);
		}
		else
		{
			uVar0 = unk_0xB1DBFEB95C0EFB88(26, uParam0->f_1, uParam0->f_2, uParam0->f_5, 0, 0);
		}
		unk_0x3B3AC5F69E21EAB7(uVar0, 1, 1);
		unk_0x0428AFDCAA63B06E(uVar0, 150, 1);
		unk_0x1CA08719184AFC6F(uVar0, 512, 1);
		unk_0x1CA08719184AFC6F(uVar0, 1024, 0);
		unk_0x1CA08719184AFC6F(uVar0, 32768, 1);
		uLocal_23[iLocal_20] = uVar0;
	}
	if (*uParam0 == 2)
	{
		uVar1 = unk_0x5779387E956077A6(uParam0->f_1, uParam0->f_2, uParam0->f_5, 0, 0, 1);
		unk_0x0B74F181ADFC39BF(uVar1, 3);
		uLocal_23[iLocal_20] = uVar1;
	}
	if (*uParam0 == 3)
	{
		uVar2 = unk_0x4E55EAB577C13329(uParam0->f_1, uParam0->f_2, 0, 0, 0);
		uLocal_23[iLocal_20] = uVar2;
	}
	if (!unk_0xFC8BFE4B41177C22(uLocal_23[iLocal_20]))
	{
		return 0;
	}
	unk_0x935364B4448CD584(uLocal_23[iLocal_20], 1);
	if (uParam0->f_6 == -1)
	{
		unk_0x62C438C53BB57AFD(uLocal_23[iLocal_20], uParam0->f_2, 0, 0, 1);
		unk_0x5D7CD709B34C90F0(uLocal_23[iLocal_20], 1);
	}
	if (uParam0->f_8)
	{
		unk_0x55098D9E9AD58806(uParam0->f_1);
	}
	iLocal_20++;
	return 1;
}

void func_15(int iParam0, var uParam1)
{
	var uVar0;
	struct<101> Var1;
	var uVar2;
	
	if (unk_0x55B80B6E7AB61270(*uParam1))
	{
		uVar0 = unk_0xE93EDE86BBB66532(*uParam1);
		Var1.f_9 = 49;
		Var1.f_59 = 2;
		Var1.f_78 = -1;
		Var1.f_79 = -1;
		Var1.f_96 = -1;
		Var1.f_97 = 1;
		Var1.f_99 = 132;
		Var1.f_100 = -1;
		if (iParam0 == 0)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			unk_0xBFE60A5CC0C835D8(uVar0, 4, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 4, 0, 1f);
			StringCopy(&(Var1.f_1), "43MLR467", 16);
			Var1.f_5 = 135;
			Var1.f_6 = 135;
			Var1.f_7 = 135;
			Var1.f_8 = 135;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 1;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 171;
			Var1.f_75 = 63;
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 29);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 31);
			Var1.f_9[22] = 1;
			Var1.f_9[48] = 12;
		}
		else if (iParam0 == 1)
		{
			StringCopy(&(Var1.f_1), "42OTM958", 16);
			Var1.f_5 = 92;
			Var1.f_6 = 92;
			Var1.f_7 = 0;
			Var1.f_8 = 0;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 1;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_9[0] = 1;
			Var1.f_9[4] = 1;
			Var1.f_9[5] = 1;
			Var1.f_9[6] = 2;
			Var1.f_9[10] = 2;
			Var1.f_9[23] = 8;
			Var1.f_9[48] = 13;
		}
		else if (iParam0 == 2)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			StringCopy(&(Var1.f_1), "42PHO918", 16);
			Var1.f_5 = 128;
			Var1.f_6 = 111;
			Var1.f_7 = 128;
			Var1.f_8 = 128;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 1;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 255;
			Var1.f_76 = 255;
			Var1.f_9[48] = 15;
		}
		else if (iParam0 == 3)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			StringCopy(&(Var1.f_1), "63ADH761", 16);
			Var1.f_5 = 27;
			Var1.f_6 = 27;
			Var1.f_7 = 0;
			Var1.f_8 = 0;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 1;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_9[1] = 2;
			Var1.f_9[4] = 3;
			Var1.f_9[5] = 1;
			Var1.f_9[7] = 5;
			Var1.f_9[15] = 4;
			Var1.f_9[23] = 6;
			Var1.f_9[24] = 1;
		}
		else if (iParam0 == 4)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			StringCopy(&(Var1.f_1), "47RNO136", 16);
			Var1.f_5 = 15;
			Var1.f_6 = 15;
			Var1.f_7 = 0;
			Var1.f_8 = 0;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 1;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_9[0] = 1;
			Var1.f_9[1] = 2;
			Var1.f_9[2] = 1;
			Var1.f_9[5] = 1;
			Var1.f_9[7] = 4;
			Var1.f_9[15] = 2;
			Var1.f_9[23] = 8;
			Var1.f_9[24] = 1;
			Var1.f_9[48] = 3;
		}
		else if (iParam0 == 5)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			unk_0xBFE60A5CC0C835D8(uVar0, 0, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 0, 0, 1f);
			StringCopy(&(Var1.f_1), "56RAF112", 16);
			Var1.f_5 = 12;
			Var1.f_6 = 12;
			Var1.f_7 = 12;
			Var1.f_8 = 12;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 1;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 255;
			Var1.f_76 = 255;
			Var1.f_9[48] = 2;
		}
		else if (iParam0 == 6)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			unk_0xBFE60A5CC0C835D8(uVar0, 4, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 4, 0, 1f);
			StringCopy(&(Var1.f_1), "66PJT141", 16);
			Var1.f_5 = 34;
			Var1.f_6 = 34;
			Var1.f_7 = 0;
			Var1.f_8 = 0;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 1;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_9[1] = 3;
			Var1.f_9[4] = 1;
			Var1.f_9[6] = 1;
			Var1.f_9[23] = 3;
			Var1.f_9[24] = 1;
			Var1.f_9[27] = 14;
			Var1.f_9[33] = 1;
			Var1.f_9[37] = 3;
			Var1.f_9[48] = 7;
		}
		else if (iParam0 == 7)
		{
			StringCopy(&(Var1.f_1), "40AJF699", 16);
			Var1.f_5 = 15;
			Var1.f_6 = 15;
			Var1.f_7 = 15;
			Var1.f_8 = 15;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 255;
			Var1.f_76 = 255;
			Var1.f_9[48] = 14;
		}
		else if (iParam0 == 8)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			unk_0xBFE60A5CC0C835D8(uVar0, 4, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 4, 0, 1f);
			StringCopy(&(Var1.f_1), "82YLM383", 16);
			Var1.f_5 = 12;
			Var1.f_6 = 12;
			Var1.f_7 = 12;
			Var1.f_8 = 12;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 255;
			Var1.f_76 = 255;
			Var1.f_9[48] = 13;
		}
		else if (iParam0 == 9)
		{
			StringCopy(&(Var1.f_1), "69TJS608", 16);
			Var1.f_5 = 88;
			Var1.f_6 = 19;
			Var1.f_7 = 88;
			Var1.f_8 = 88;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 255;
			Var1.f_76 = 255;
			Var1.f_9[48] = 12;
		}
		else if (iParam0 == 10)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			StringCopy(&(Var1.f_1), "03QMA772", 16);
			Var1.f_5 = 15;
			Var1.f_6 = 27;
			Var1.f_7 = 0;
			Var1.f_8 = 0;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 2;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_9[1] = 2;
			Var1.f_9[23] = 8;
			Var1.f_9[24] = 1;
			Var1.f_9[48] = 3;
		}
		else if (iParam0 == 11)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			StringCopy(&(Var1.f_1), "45MCA163", 16);
			Var1.f_0 = 3;
			Var1.f_5 = 12;
			Var1.f_6 = 12;
			Var1.f_7 = 12;
			Var1.f_8 = 12;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 2;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 255;
			Var1.f_76 = 255;
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), true);
			Var1.f_9[48] = 5;
		}
		else if (iParam0 == 12)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			unk_0xBFE60A5CC0C835D8(uVar0, 4, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 4, 0, 1f);
			StringCopy(&(Var1.f_1), "43QZA094", 16);
			Var1.f_0 = 3;
			Var1.f_5 = 88;
			Var1.f_6 = 88;
			Var1.f_7 = 88;
			Var1.f_8 = 88;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 2;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 217;
			Var1.f_75 = 166;
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 29);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 31);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 2);
			Var1.f_9[22] = 1;
			Var1.f_9[48] = 7;
		}
		else if (iParam0 == 13)
		{
			unk_0xBFE60A5CC0C835D8(uVar0, 5, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 5, 0, 1f);
			StringCopy(&(Var1.f_1), "82BPG904", 16);
			Var1.f_5 = 34;
			Var1.f_6 = 34;
			Var1.f_7 = 0;
			Var1.f_8 = 0;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 2;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_9[1] = 3;
			Var1.f_9[4] = 1;
			Var1.f_9[6] = 1;
			Var1.f_9[8] = 1;
			Var1.f_9[23] = 3;
			Var1.f_9[24] = 1;
			Var1.f_9[27] = 14;
			Var1.f_9[33] = 1;
			Var1.f_9[37] = 3;
			Var1.f_9[48] = 7;
		}
		else if (iParam0 == 14)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			unk_0xBFE60A5CC0C835D8(uVar0, 4, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 4, 0, 1f);
			StringCopy(&(Var1.f_1), "61OEN493", 16);
			Var1.f_5 = 15;
			Var1.f_6 = 15;
			Var1.f_7 = 0;
			Var1.f_8 = 0;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 7;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_9[0] = 1;
			Var1.f_9[4] = 1;
			Var1.f_9[5] = 1;
			Var1.f_9[6] = 2;
			Var1.f_9[10] = 2;
			Var1.f_9[23] = 8;
			Var1.f_9[48] = 13;
		}
		else if (iParam0 == 15)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			StringCopy(&(Var1.f_1), "00BUC112", 16);
			Var1.f_5 = 145;
			Var1.f_6 = 145;
			Var1.f_7 = 145;
			Var1.f_8 = 145;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 7;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 176;
			Var1.f_75 = 18;
			Var1.f_76 = 89;
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 29);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 31);
			Var1.f_9[22] = 1;
			Var1.f_9[48] = 16;
		}
		else if (iParam0 == 16)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			StringCopy(&(Var1.f_1), "42YAG396", 16);
			Var1.f_5 = 148;
			Var1.f_6 = 148;
			Var1.f_7 = 148;
			Var1.f_8 = 148;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 7;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 255;
			Var1.f_76 = 255;
			Var1.f_9[48] = 15;
		}
		else if (iParam0 == 17)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			StringCopy(&(Var1.f_1), "80QDM423", 16);
			Var1.f_5 = 18;
			Var1.f_6 = 18;
			Var1.f_7 = 18;
			Var1.f_8 = 18;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 7;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 255;
			Var1.f_76 = 255;
			Var1.f_9[48] = 14;
		}
		else if (iParam0 == 18)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			StringCopy(&(Var1.f_1), "89AXX718", 16);
			Var1.f_5 = 111;
			Var1.f_6 = 111;
			Var1.f_7 = 111;
			Var1.f_8 = 111;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 7;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 87;
			Var1.f_75 = 89;
			Var1.f_76 = 97;
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 29);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 31);
			Var1.f_9[22] = 1;
			Var1.f_9[48] = 10;
		}
		else if (iParam0 == 19)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			unk_0xBFE60A5CC0C835D8(uVar0, 2, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 2, 0, 1f);
			unk_0xBFE60A5CC0C835D8(uVar0, 3, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 3, 0, 1f);
			StringCopy(&(Var1.f_1), "46ODB296", 16);
			Var1.f_5 = 62;
			Var1.f_6 = 62;
			Var1.f_7 = 0;
			Var1.f_8 = 0;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 1;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_9[4] = 1;
			Var1.f_9[6] = 1;
			Var1.f_9[23] = 3;
			Var1.f_9[24] = 1;
			Var1.f_9[33] = 1;
			Var1.f_9[37] = 3;
			Var1.f_9[48] = 7;
		}
		else if (iParam0 == 20)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			unk_0xBFE60A5CC0C835D8(uVar0, 2, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 2, 0, 1f);
			unk_0xBFE60A5CC0C835D8(uVar0, 3, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 3, 0, 1f);
			StringCopy(&(Var1.f_1), "01OWK692", 16);
			Var1.f_5 = 62;
			Var1.f_6 = 62;
			Var1.f_7 = 0;
			Var1.f_8 = 0;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 1;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_9[4] = 1;
			Var1.f_9[6] = 1;
			Var1.f_9[23] = 3;
			Var1.f_9[24] = 1;
			Var1.f_9[33] = 1;
			Var1.f_9[37] = 3;
			Var1.f_9[48] = 7;
		}
		else if (iParam0 == 21)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			unk_0xBFE60A5CC0C835D8(uVar0, 2, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 2, 0, 1f);
			unk_0xBFE60A5CC0C835D8(uVar0, 3, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 3, 0, 1f);
			StringCopy(&(Var1.f_1), "83NGU235", 16);
			Var1.f_5 = 62;
			Var1.f_6 = 62;
			Var1.f_7 = 0;
			Var1.f_8 = 0;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 1;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_9[0] = 1;
			Var1.f_9[5] = 1;
			Var1.f_9[23] = 8;
			Var1.f_9[24] = 1;
			Var1.f_9[48] = 3;
		}
		else if (iParam0 == 22)
		{
			unk_0x5D7CD709B34C90F0(uVar0, 0);
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			unk_0xBFE60A5CC0C835D8(uVar0, 2, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 2, 0, 1f);
			StringCopy(&(Var1.f_1), "02HJE974", 16);
			Var1.f_5 = 137;
			Var1.f_6 = 137;
			Var1.f_7 = 137;
			Var1.f_8 = 137;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 1;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 143;
			Var1.f_75 = 47;
			Var1.f_76 = 85;
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 29);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 31);
			Var1.f_9[22] = 1;
			Var1.f_9[48] = 9;
		}
		else if (iParam0 == 23)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			unk_0xBFE60A5CC0C835D8(uVar0, 4, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 4, 0, 1f);
			StringCopy(&(Var1.f_1), "61KDG752", 16);
			Var1.f_5 = 111;
			Var1.f_6 = 111;
			Var1.f_7 = 111;
			Var1.f_8 = 111;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 240;
			Var1.f_75 = 240;
			Var1.f_76 = 240;
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 28);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 29);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 30);
			unk_0x0B0C9A0F9AAEB7F0(&(Var1.f_77), 31);
			Var1.f_9[22] = 1;
			Var1.f_9[48] = 14;
		}
		else if (iParam0 == 24)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			StringCopy(&(Var1.f_1), "65TLM709", 16);
			Var1.f_5 = 135;
			Var1.f_6 = 135;
			Var1.f_7 = 135;
			Var1.f_8 = 135;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 255;
			Var1.f_76 = 255;
			Var1.f_9[48] = 10;
		}
		else if (iParam0 == 25)
		{
			StringCopy(&(Var1.f_1), "03SVZ064", 16);
			Var1.f_5 = 31;
			Var1.f_6 = 31;
			Var1.f_7 = 31;
			Var1.f_8 = 31;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 255;
			Var1.f_76 = 255;
			Var1.f_9[48] = 15;
		}
		else if (iParam0 == 26)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			StringCopy(&(Var1.f_1), "01PMT053", 16);
			Var1.f_5 = 67;
			Var1.f_6 = 67;
			Var1.f_7 = 67;
			Var1.f_8 = 67;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_74 = 255;
			Var1.f_76 = 255;
			Var1.f_9[48] = 12;
		}
		else if (iParam0 == 27)
		{
			unk_0xBA3C1A9AA7FD9616(uVar0, 2);
			unk_0xBFE60A5CC0C835D8(uVar0, 4, 0, 1);
			unk_0x3E13A302AA0F06BF(uVar0, 4, 0, 1f);
			StringCopy(&(Var1.f_1), "81QBV287", 16);
			Var1.f_5 = 15;
			Var1.f_6 = 15;
			Var1.f_7 = 0;
			Var1.f_8 = 0;
			Var1.f_97 = 1;
			Var1.f_99 = 132;
			Var1.f_98 = 0;
			Var1.f_69 = 1;
			Var1.f_62 = 255;
			Var1.f_63 = 255;
			Var1.f_64 = 255;
			Var1.f_9[1] = 3;
			Var1.f_9[4] = 1;
			Var1.f_9[6] = 1;
			Var1.f_9[8] = 1;
			Var1.f_9[23] = 3;
			Var1.f_9[48] = 7;
		}
		func_16(uVar0, &Var1, 0, 1, 0);
	}
	else if (unk_0x0101C509A6E67F99(*uParam1))
	{
		uVar2 = unk_0xBD545F8729E9F413(*uParam1);
		if (iParam0 == 28)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 5, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 2, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 29)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 5, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 3, 6, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 1, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 1, 2, 0, 0, 1);
		}
		else if (iParam0 == 30)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 4, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 5, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 5, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 1, 2, 0, 0, 1);
		}
		else if (iParam0 == 31)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 4, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 5, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 5, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 1, 2, 0, 0, 1);
		}
		else if (iParam0 == 32)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 2, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 0, 8, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 1, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 33)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 5, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 5, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 5, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 2, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 34)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 4, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 5, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 0, 2, 0, 0, 1);
		}
		else if (iParam0 == 35)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 2, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 0, 8, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 1, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 36)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 3, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 2, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 1, 9, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 1, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 37)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 3, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 2, 5, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 3, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 38)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 5, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 3, 6, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 1, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 1, 2, 0, 0, 1);
		}
		else if (iParam0 == 39)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 2, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 2, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 40)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 3, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 2, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 3, 7, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 41)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 4, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 5, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 5, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 0, 8, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 5, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 42)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 2, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 4, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 4, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 2, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 4, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 43)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 4, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 4, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 3, 8, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 1, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 1, 0, 1, 0, 1);
		}
		else if (iParam0 == 44)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 3, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 4, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 3, 6, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 3, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 2, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 0, 0, 0, 0, 1);
			unk_0x7F08C4791E6D6969(uVar2, 1, 0, 1, 0, 1);
		}
		else if (iParam0 == 45)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 6, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 5, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 46)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 6, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 5, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 47)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 5, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 3, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 5, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 3, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 48)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 4, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 4, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 3, 8, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 1, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 1, 0, 1, 0, 1);
		}
		else if (iParam0 == 49)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 6, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 3, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 3, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 1, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 0, 1, 0, 0, 1);
		}
		else if (iParam0 == 50)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 3, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 2, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 1, 0, 0, 0, 1);
		}
		else if (iParam0 == 51)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 5, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 3, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 3, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 52)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 5, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 3, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 4, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 1, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 53)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 0, 1, 0, 0, 1);
			unk_0x7F08C4791E6D6969(uVar2, 1, 0, 0, 0, 1);
		}
		else if (iParam0 == 54)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 4, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 55)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 4, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 56)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 6, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 3, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 3, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 1, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 0, 1, 0, 0, 1);
		}
		else if (iParam0 == 57)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 4, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 4, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 3, 8, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 1, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 1, 0, 1, 0, 1);
		}
		else if (iParam0 == 58)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 5, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 3, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 5, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 3, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 59)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 5, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 3, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 3, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 60)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 5, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 3, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 3, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 61)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 3, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 2, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 1, 0, 0, 0, 1);
		}
		else if (iParam0 == 62)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 6, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 3, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 3, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 1, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 0, 1, 0, 0, 1);
		}
		else if (iParam0 == 63)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 3, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 2, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 1, 0, 0, 0, 1);
		}
		else if (iParam0 == 64)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 3, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 4, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 3, 6, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 3, 2, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 2, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(uVar2, 0, 0, 0, 0, 1);
			unk_0x7F08C4791E6D6969(uVar2, 1, 0, 1, 0, 1);
		}
		else if (iParam0 == 65)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 66)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 1, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 2, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 2, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 67)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 4, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 2, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 1, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 3, 9, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 0, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
		else if (iParam0 == 68)
		{
			unk_0xD1C578C204015E1F(uVar2, 0, 6, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 2, 5, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 3, 4, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 4, 2, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 5, 0, 3, 0);
			unk_0xD1C578C204015E1F(uVar2, 6, 2, 1, 0);
			unk_0xD1C578C204015E1F(uVar2, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 9, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(uVar2, 11, 0, 0, 0);
		}
	}
}

void func_16(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0) && unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		if ((unk_0x76CD105BCAC6EB9F() && unk_0x1B1A446EFA398EB5(uParam0)) || !unk_0x76CD105BCAC6EB9F())
		{
			iVar0 = unk_0x4B423FAA24E8ABF0(uParam0);
			if (unk_0x259BE71D8A81D4FA() != func_104())
			{
				uParam1->f_100 = unk_0x259BE71D8A81D4FA();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_78(uParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					unk_0x439C904840715871(uParam0, 1);
					unk_0x519F76A38952BBD0(uParam0, 0);
				}
				else if (uParam1->f_102 == 1)
				{
					unk_0x439C904840715871(uParam0, 0);
					unk_0x519F76A38952BBD0(uParam0, 0);
				}
				else if (uParam1->f_102 == 3)
				{
					unk_0x439C904840715871(uParam0, 1);
					unk_0x519F76A38952BBD0(uParam0, 1);
				}
			}
			if (func_77(unk_0x4B423FAA24E8ABF0(uParam0)))
			{
				if (uParam1->f_9[44] == 2)
				{
					unk_0xF5706A3E4A060916(uParam0, 0, 1);
				}
				else
				{
					unk_0xF5706A3E4A060916(uParam0, 1, 1);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				unk_0x7BEAE55022AB21EB(uParam0, 1, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				unk_0x315A149C242011DE(uParam0, uParam1->f_79);
			}
			if (func_76(uParam1->f_66, &fVar1) && uParam1->f_80 != fVar1)
			{
				uParam1->f_80 = fVar1;
			}
			unk_0x4DC7FAAC148F9B2F(uParam0, uParam1->f_80);
			if (uParam1->f_97 >= 0)
			{
				unk_0xC0C8E6AAA00F1A58(uParam0, uParam1->f_97);
			}
			if (uParam1->f_99 >= 0)
			{
				unk_0x77B012A683295B6E(uParam0, uParam1->f_99);
			}
			if (func_75(uParam0))
			{
				func_69(uParam0, func_72(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (unk_0xCB19A1CF94809167(uParam0) > 1 && uParam1->f_98 >= 0)
			{
				unk_0x5081B6C697A334D4(uParam0, uParam1->f_98);
			}
			if (BitTest(uParam1->f_95, 0))
			{
				func_39(uParam0, &(uParam1->f_81));
			}
			if ((!func_29(4) && !bParam4) && !unk_0x834C960822A4683F())
			{
				func_21(uParam0);
			}
			if (func_20(iVar0))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						unk_0xC87E4FAD00AEDD4B(uParam0, 16);
						break;
					
					case 1:
						unk_0xC87E4FAD00AEDD4B(uParam0, 16);
						if ((unk_0x2E6A27037F1DC473(uParam0, joaat("scarab")) || unk_0x2E6A27037F1DC473(uParam0, joaat("scarab2"))) || unk_0x2E6A27037F1DC473(uParam0, joaat("scarab3")))
						{
							unk_0x8450270DC5896D39(uParam0, 16, 0, false);
						}
						else
						{
							unk_0x8450270DC5896D39(uParam0, 16, 2, false);
						}
						break;
					
					case 2:
						unk_0xC87E4FAD00AEDD4B(uParam0, 16);
						if ((unk_0x2E6A27037F1DC473(uParam0, joaat("scarab")) || unk_0x2E6A27037F1DC473(uParam0, joaat("scarab2"))) || unk_0x2E6A27037F1DC473(uParam0, joaat("scarab3")))
						{
							unk_0x8450270DC5896D39(uParam0, 16, 1, false);
						}
						else
						{
							unk_0x8450270DC5896D39(uParam0, 16, 3, false);
						}
						break;
					
					case 3:
						unk_0xC87E4FAD00AEDD4B(uParam0, 16);
						if ((unk_0x2E6A27037F1DC473(uParam0, joaat("scarab")) || unk_0x2E6A27037F1DC473(uParam0, joaat("scarab2"))) || unk_0x2E6A27037F1DC473(uParam0, joaat("scarab3")))
						{
							unk_0x8450270DC5896D39(uParam0, 16, 2, false);
						}
						else
						{
							unk_0x8450270DC5896D39(uParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							unk_0xC87E4FAD00AEDD4B(uParam0, 16);
							if ((unk_0x2E6A27037F1DC473(uParam0, joaat("scarab")) || unk_0x2E6A27037F1DC473(uParam0, joaat("scarab2"))) || unk_0x2E6A27037F1DC473(uParam0, joaat("scarab3")))
							{
								unk_0x8450270DC5896D39(uParam0, 16, 2, false);
							}
							else
							{
								unk_0x8450270DC5896D39(uParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			if (func_18(unk_0x4B423FAA24E8ABF0(uParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						unk_0xB57A96BF24464D21(uParam0, 0);
						unk_0xD05AF216D970F274(uParam0, 1);
						if (uParam1->f_9[16] == 5)
						{
							unk_0x271D0AA5ADF266EA(uParam0, (Global_262145.f_21454 + 0,05f));
						}
						else
						{
							unk_0x271D0AA5ADF266EA(uParam0, Global_262145.f_21454);
						}
						unk_0xA964B154E331B3E9(uParam0, 1);
						break;
					
					default:
						unk_0xB57A96BF24464D21(uParam0, 0);
						unk_0x271D0AA5ADF266EA(uParam0, 1f);
						unk_0xA964B154E331B3E9(uParam0, 1);
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (BitTest(uParam1->f_95, 3))
						{
						}
					}
					else if (unk_0x77B62CAA5DF0922A("Player_Vehicle", 3))
					{
						unk_0xEE8559BBFC27701B(uParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (unk_0x77B62CAA5DF0922A("Veh_Modded_By_Player", 3))
						{
							unk_0xEE8559BBFC27701B(uParam0, "Veh_Modded_By_Player", unk_0x3351FEF40EC734DB(unk_0x259BE71D8A81D4FA()));
						}
					}
					else if (unk_0x77B62CAA5DF0922A("Veh_Modded_By_Player", 3))
					{
						if (func_17(uParam1->f_81) && unk_0xBE0146369C46314B(&(uParam1->f_81)))
						{
							unk_0xEE8559BBFC27701B(uParam0, "Veh_Modded_By_Player", unk_0x3351FEF40EC734DB(unk_0xA34132DD5D4FE383(&(uParam1->f_81))));
						}
						else
						{
							unk_0xEE8559BBFC27701B(uParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

var func_17(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

bool func_18(int iParam0)
{
	return (func_77(iParam0) && !func_19(iParam0));
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case joaat("coureur"):
		case joaat("monstrociti"):
		case joaat("turismo3"):
		case joaat("baller8"):
		case 1121330119:
			return 1;
			break;
	}
	return 0;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("speedo5"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return 1;
			break;
	}
	return 0;
}

void func_21(var uParam0)
{
	struct<3> Var0;
	
	if (Global_262145.f_19899)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0))
		{
			if (unk_0xC8D49539708A80B4(uParam0))
			{
				Var0.f_0 = unk_0x4B423FAA24E8ABF0(uParam0);
				Var0.f_1 = unk_0x70E57E9927B6BA58(unk_0xCA7159F2C5FF745A(uParam0));
				if (unk_0x77B62CAA5DF0922A("RandomID", 3))
				{
					if (!unk_0xD130E7CDEE903624(uParam0, "RandomID"))
					{
						Var0.f_2 = unk_0xC5935DFB3F39785A(0, 65535);
						unk_0xEE8559BBFC27701B(uParam0, "RandomID", Var0.f_2);
					}
					else
					{
						Var0.f_2 = unk_0xE2F6FE9B61232165(uParam0, "RandomID");
					}
				}
				func_22(Var0);
			}
		}
	}
}

void func_22(struct<3> Param0)
{
	struct<4> Var0;
	
	Var0.f_0 = -1251853784;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = Param0.f_0;
	Var0.f_3.f_1 = Param0.f_1;
	Var0.f_3.f_2 = Param0.f_2;
	unk_0x71A6F836422FDD2B(1, &Var0, 6, func_23(1, 1), Var0.f_0);
}

var func_23(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_28(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
				else if (!func_24(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_27(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_25(-1, 0) == 8;
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

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
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

int func_26()
{
	return Global_1574926;
}

int func_27(var uParam0)
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

int func_28(int iParam0, bool bParam1, bool bParam2)
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

int func_29(int iParam0)
{
	int iVar0;
	
	if (func_38())
	{
		iVar0 = 0;
		while (iVar0 < 61)
		{
			if (func_37(iVar0) == iParam0)
			{
				if (func_30(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_30(int iParam0)
{
	return func_31(iParam0, 6, 1);
}

int func_31(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_36() == 0)
		{
			return BitTest(func_32(func_35(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_32(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_33(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_33(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_34(uParam1));
}

int func_34(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_36()
{
	return Global_32948;
}

int func_37(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

bool func_38()
{
	return Global_101585.f_394 > 0;
}

int func_39(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	if (!func_49(uParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		iVar0 = unk_0xCF9D3F0358793BA8(uParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_47(uParam0))
		{
			uVar1 = unk_0xA34132DD5D4FE383(uParam1);
			if (func_42(&uParam0, uVar1))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_40(uParam0))
	{
	}
	return 0;
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		iVar0 = unk_0xCF9D3F0358793BA8(uParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				iVar1 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				iVar1 = unk_0x1DD05E817C89C737();
			}
			iVar2 = unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(iVar1, Global_1577952));
			iVar3 = 20000;
			if (Global_1836681)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				unk_0x932EFF1079425E72(uParam0);
				func_41(uParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_41(var uParam0)
{
	var uVar0;
	
	if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
	{
		if (unk_0xFC8BFE4B41177C22(uParam0) && unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		{
			if (unk_0xD130E7CDEE903624(uParam0, "MPBitset"))
			{
				uVar0 = unk_0xE2F6FE9B61232165(uParam0, "MPBitset");
			}
		}
	}
	if (!BitTest(uVar0, 16))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, 16);
		unk_0xEE8559BBFC27701B(uParam0, "MPBitset", uVar0);
	}
}

int func_42(var uParam0, var uParam1)
{
	func_46();
	if (Global_1574633.f_18 != 0 || unk_0x38779AA6147A1831(*uParam0))
	{
		Global_1943409.f_11 = unk_0xF7553BA24C0AB0B2(*uParam0);
		if (Global_1943409.f_11 < 0f)
		{
			Global_1943409.f_11 = 0f;
		}
	}
	func_44(*uParam0, &Global_1943409, &(Global_1943409.f_1), &(Global_1943409.f_4), &(Global_1943409.f_7), &(Global_1943409.f_10));
	Global_1943409.f_1.f_2 = (Global_1943409.f_1.f_2 - Global_1943409.f_11);
	if (Global_1943409.f_4.f_2 < 0f)
	{
		Global_1943409.f_12 = 1;
	}
	Global_1943409.f_13 = 200;
	if (unk_0x4B423FAA24E8ABF0(*uParam0) == joaat("windsor") || unk_0x4B423FAA24E8ABF0(*uParam0) == joaat("comet4"))
	{
		Global_1943409.f_13 = 255;
	}
	if (Global_1943409.f_12)
	{
		if (func_43(uParam0, uParam1, Global_1943409, Global_1943409.f_1, Global_1943409.f_4, Global_1943409.f_7, Global_1943409.f_10, 0, Global_1943409.f_13))
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				Global_1577952 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				Global_1577952 = unk_0x1DD05E817C89C737();
			}
			return 1;
		}
	}
	else
	{
		Global_1943409.f_14 = { Global_1943409.f_1 };
		Global_1943409.f_14 = (Global_1943409.f_14 * -1f);
		Global_1943409.f_17 = { Global_1943409.f_4 };
		Global_1943409.f_17 = (Global_1943409.f_17 * -1f);
		Global_1943409.f_20 = { Global_1943409.f_7 };
		Global_1943409.f_20.f_1 = (Global_1943409.f_20.f_1 * -1f);
		Global_1943409.f_20.f_2 = (Global_1943409.f_20.f_2 * -1f);
		if (!unk_0x0BCE48C8677F9824(*uParam0, 0))
		{
			Global_1943409.f_23 = unk_0xCF9D3F0358793BA8(*uParam0, 0);
		}
		else
		{
			Global_1943409.f_23 = 3;
		}
		Global_1943409.f_24 = unk_0xCF9D3F0358793BA8(*uParam0, 1);
		if (!unk_0x0BCE48C8677F9824(*uParam0, 1))
		{
			Global_1943409.f_24 = unk_0xCF9D3F0358793BA8(*uParam0, 1);
		}
		else
		{
			Global_1943409.f_24 = 3;
		}
		if (((Global_1943409.f_23 == 0 && func_43(uParam0, uParam1, Global_1943409, Global_1943409.f_1, Global_1943409.f_4, Global_1943409.f_7, Global_1943409.f_10, 0, Global_1943409.f_13)) || Global_1943409.f_23 != 0) && ((Global_1943409.f_24 == 0 && func_43(uParam0, uParam1, Global_1943409, Global_1943409.f_14, Global_1943409.f_17, Global_1943409.f_20, Global_1943409.f_10, 1, Global_1943409.f_13)) || Global_1943409.f_24 != 0))
		{
			if (unk_0x76CD105BCAC6EB9F())
			{
				Global_1577952 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				Global_1577952 = unk_0x1DD05E817C89C737();
			}
			return 1;
		}
	}
	return 0;
}

bool func_43(var uParam0, var uParam1, var uParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, var uParam6, int iParam7, var uParam8)
{
	return unk_0x6A808266C74B0678(*uParam0, unk_0x56E414973C2A8C0E(uParam1), uParam2, Param3, Param4, Param5, uParam6, iParam7, uParam8);
}

int func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xFC8BFE4B41177C22(uParam0) || !unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		return 0;
	}
	*uParam1 = unk_0x365DC1E8054AF31A(uParam0, "chassis_dummy");
	if (((!func_45(Global_1943435, 0f, 0f, 0f, 0) && !func_45(Global_1943438, 0f, 0f, 0f, 0)) && !func_45(Global_1943441, 0f, 0f, 0f, 0)) && !Global_1943444 == 0f)
	{
		*uParam2 = { Global_1943435 };
		*uParam3 = { Global_1943438 };
		*uParam4 = { Global_1943441 };
		*uParam5 = Global_1943444;
		return 1;
	}
	switch (unk_0x4B423FAA24E8ABF0(uParam0))
	{
		case joaat("dominator"):
			*uParam1 = unk_0x365DC1E8054AF31A(uParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = unk_0x365DC1E8054AF31A(uParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("adder"):
			*uParam2 = { 0f, 1,54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("akuma"):
			*uParam2 = { 0f, 0,06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("asea"):
			*uParam2 = { 0f, 1,5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bagger"):
			*uParam2 = { -1f, 0,16f, 0,283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("baller"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller2"):
			*uParam2 = { 0f, 1,55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("banshee"):
			*uParam2 = { 0f, 0,94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("bati"):
			*uParam2 = { 0f, 0,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("bati2"):
			*uParam2 = { 0f, 0,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0,08f, 0,19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bison"):
			*uParam2 = { 0f, 1,99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bjxl"):
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("blista"):
			*uParam2 = { 0f, 1,49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1,68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,65f;
			break;
		
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2,01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("buffalo"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("bullet"):
			*uParam2 = { -1,57f, 0,07f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0,09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1,45f, 1f };
			*uParam3 = { 0f, -0,11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1,51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1,59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cheetah"):
			*uParam2 = { -1,61f, 0,26f, 0,17f };
			*uParam3 = { 0,9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1,42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("comet2"):
			*uParam2 = { 0f, 1,35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("coquette"):
			*uParam2 = { 0f, 0,96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case joaat("daemon"):
			*uParam2 = { 0f, 0,06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = { 0f, 1,59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dloader"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("double"):
			*uParam2 = { 0f, 0,08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("dubsta"):
			*uParam2 = { -1,71f, 0,31f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,75f;
			break;
		
		case joaat("elegy2"):
			*uParam2 = { 0f, 1,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("emperor"):
			*uParam2 = { 0f, 1,31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("emperor2"):
			*uParam2 = { 0f, 1,31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("entityxf"):
			*uParam2 = { -1,52f, 0,41f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("exemplar"):
			*uParam2 = { 0f, 1,32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("f620"):
			*uParam2 = { 0f, 1,28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = { -1f, -0,48f, -0,11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("felon"):
			*uParam2 = { 0f, 1,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("felon2"):
			*uParam2 = { 0f, 1,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fq2"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("fugitive"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("fusilade"):
			*uParam2 = { 0f, 0,98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("futo"):
			*uParam2 = { 0f, 1,28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1,735f, 1,05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("granger"):
			*uParam2 = { 0f, 2,07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("gresley"):
			*uParam2 = { 0f, 1,75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("habanero"):
			*uParam2 = { 0f, 1,69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("hexer"):
			*uParam2 = { 0f, -0,46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,14f;
			break;
		
		case joaat("hotknife"):
			*uParam2 = { -1,43f, -0,14f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("infernus"):
			*uParam2 = { -1f, 0,33f, 0,08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,06f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("ingot"):
			*uParam2 = { 0f, 1,58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("intruder"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("issi2"):
			*uParam2 = { 0f, 1,21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jackal"):
			*uParam2 = { 0f, 1,36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("jb700"):
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = { 0f, 1,46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,475f;
			break;
		
		case joaat("landstalker"):
			*uParam2 = { 0f, 1,83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("manana"):
			*uParam2 = { 0f, 0,86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("mesa"):
			*uParam2 = { 0f, 1,47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("mesa3"):
			*uParam2 = { 0f, 1,47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("minivan"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("monroe"):
			*uParam2 = { 0f, 1,23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case joaat("nemesis"):
			*uParam2 = { 0f, 0,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("ninef"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ninef2"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("oracle"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("oracle2"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("patriot"):
			*uParam2 = { 0f, 1,75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("pcj"):
			*uParam2 = { 0f, 0,02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("penumbra"):
			*uParam2 = { 0f, 1,46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("peyote"):
			*uParam2 = { -1f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("phoenix"):
			*uParam2 = { 0f, 1,833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,44f;
			break;
		
		case joaat("picador"):
			*uParam2 = { 0f, 1,43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,425f;
			break;
		
		case joaat("prairie"):
			*uParam2 = { 0f, 1,41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,31f;
			break;
		
		case joaat("premier"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("primo"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("radi"):
			*uParam2 = { 0f, 1,74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1,54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1,263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1,263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = { -1,78f, 0,52f, 0,52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("rebel"):
			*uParam2 = { -1,22f, 0,6f, 0,44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rebel2"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("regina"):
			*uParam2 = { 0f, 1,473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rocoto"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("romero"):
			*uParam2 = { 0f, 1,83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ruffian"):
			*uParam2 = { 0f, -0,02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,19f;
			break;
		
		case joaat("ruiner"):
			*uParam2 = { 0f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,015f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("sadler"):
			*uParam2 = { 0f, 2,26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sandking"):
			*uParam2 = { 0f, 2,496f, 1,55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = { 0f, 2,286f, 1,55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("schafter2"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1,43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("seminole"):
			*uParam2 = { 0f, 1,45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sentinel"):
			*uParam2 = { 0f, 1,18f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("serrano"):
			*uParam2 = { 0f, 1,68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,49f;
			break;
		
		case joaat("stanier"):
			*uParam2 = { 0f, 1,55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("stinger"):
			*uParam2 = { 0f, 1,3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = { -1f, -0,17f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("stratum"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sultan"):
			*uParam2 = { 0f, 1,77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("superd"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("surano"):
			*uParam2 = { 0f, 1,38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("surfer"):
			*uParam2 = { 0f, 2,48f, 0,26f };
			*uParam3 = { 0f, -1f, -0,212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,32f;
			break;
		
		case joaat("surfer2"):
			*uParam2 = { 0f, 2,48f, 0,26f };
			*uParam3 = { 0f, -1f, -0,212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,32f;
			break;
		
		case joaat("surge"):
			*uParam2 = { 0f, 1,69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tailgater"):
			*uParam2 = { 0f, 1,783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tornado"):
			*uParam2 = { -1,23f, 0,11f, -0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tornado2"):
			*uParam2 = { 0f, 1,44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tornado3"):
			*uParam2 = { 0f, 1,44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("vacca"):
			*uParam2 = { 0f, 1,76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("vader"):
			*uParam2 = { 0f, 0,08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("vigero"):
			*uParam2 = { -1f, 0,11f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("voltic"):
			*uParam2 = { 0f, 1,763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("washington"):
			*uParam2 = { 0f, 1,61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("youga"):
			*uParam2 = { 0f, 2,352f, 1,003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("zion"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zion2"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("ztype"):
			*uParam2 = { -0,96f, -0,69f, 0,35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0,5f;
			break;
	}
	switch (unk_0x4B423FAA24E8ABF0(uParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0,18f, 0,1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("paradise"):
			*uParam2 = { 0f, 2,23f, 1f };
			*uParam3 = { 0f, -0,22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("alpha"):
			*uParam2 = { -1f, 0,18f, -0,05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("huntley"):
			*uParam2 = { 0f, 1,52f, 0,99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("zentorno"):
			*uParam2 = { -1,24f, 0,3f, -0,07f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jester"):
			*uParam2 = { -1f, 0,17f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,05f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("massacro"):
			*uParam2 = { 0f, 1,37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("turismor"):
			*uParam2 = { -1f, 0,3f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("thrust"):
			*uParam2 = { -1f, 0,405f, 0,4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1625f;
			break;
		
		case joaat("btype"):
			*uParam2 = { 0f, 1,143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,7125f;
			break;
		
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0,47f, -0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2625f;
			break;
		
		case joaat("glendale"):
			*uParam2 = { 0f, 1,683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("warrener"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("blade"):
			*uParam2 = { -1f, 0,445f, 0,2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,325f;
			break;
		
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0,335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0,34f, 0,2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("pigalle"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("coquette2"):
			*uParam2 = { -1f, -0,1775f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("innovation"):
			*uParam2 = { 0f, 0,15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0,27f, 0,845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0,2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = { -1,78f, 0,52f, 0,52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("slamvan"):
			*uParam2 = { -1f, 0,275f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0,0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3875f;
			break;
		
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0,0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4375f;
			break;
		
		case joaat("blista2"):
			*uParam2 = { -1f, 0,5325f, 0,245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2875f;
			break;
		
		case joaat("casco"):
			*uParam2 = { 0f, 0,94f, 1,03f };
			*uParam3 = { 0f, -0,03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("enduro"):
			*uParam2 = { 0f, -0,17f, 1f };
			*uParam3 = { 0f, 0,34f, -0,786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2,32f, 0,94f };
			*uParam3 = { 0f, -0,182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("guardian"):
			*uParam2 = { -1,94f, 1,07f, 0,38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0,2475f, -0,175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,435f;
			break;
		
		case joaat("lectro"):
			*uParam2 = { 0f, 0,3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("feltzer3"):
			*uParam1 = unk_0x365DC1E8054AF31A(uParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,597f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("osiris"):
			*uParam2 = { -1f, 0,27f, -0,03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("virgo"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("windsor"):
			*uParam2 = { -1,2f, -0,39f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("brawler"):
			*uParam2 = { -1f, -0,21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("chino"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("coquette3"):
			*uParam2 = { -1f, -0,1775f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("t20"):
			*uParam2 = { -1f, 0,4f, -0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("vindicator"):
			*uParam2 = { -1f, 0,21f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2,01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("chino2"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1,713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1,713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("primo2"):
			*uParam2 = { -1f, 0,42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("voodoo"):
			*uParam2 = { -1,12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0,5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,015f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("tornado5"):
			*uParam2 = { -1f, 0,15f, -0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0,1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0,1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("minivan2"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0,275f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("btype2"):
			*uParam2 = { -1f, -0,1f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0,3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("baller3"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller4"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller5"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller6"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cog55"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cog552"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("mamba"):
			*uParam2 = { -1f, -0,18f, 0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("nightshade"):
			*uParam2 = { -1f, -0,2f, 0,17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("schafter3"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter4"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter5"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter6"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0,21f, 0,03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("banshee2"):
			*uParam2 = { -1f, -0,4f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1,77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("btype3"):
			*uParam2 = { -1f, -0,1f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0,06f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("seven70"):
			*uParam2 = { -1f, -0,21f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fmj"):
			*uParam2 = { -1f, -0,06f, 0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("pfister811"):
			*uParam2 = { -1f, 0,06f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("prototipo"):
			*uParam2 = { -1f, 0,3f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("reaper"):
			*uParam2 = { -1f, 0,48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2,103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("windsor2"):
			*uParam2 = { -1,2f, 0,03f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("xls"):
			*uParam2 = { -1f, 0,36f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("xls2"):
			*uParam2 = { -1f, 0,36f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("brioso"):
			*uParam2 = { -1f, -0,06f, 0,565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("contender"):
			*uParam2 = { 0f, 2,33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("le7b"):
			*uParam2 = { -1f, -0,12f, 0,235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("omnis"):
			*uParam2 = { -1f, 0,03f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("avarus"):
			*uParam2 = { -1f, 0,27f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("daemon2"):
			*uParam2 = { -1f, 0,27f, 0,29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0,34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,125f;
			break;
		
		case joaat("esskey"):
			*uParam2 = { -1f, 0,335f, 0,31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0,27f, 0,845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("nightblade"):
			*uParam2 = { 0f, -0,133f, 0,61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,125f;
			break;
		
		case joaat("ratbike"):
			*uParam2 = { -1f, 0,31f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("shotaro"):
			*uParam2 = { -1f, 0,06f, 0,325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("zombiea"):
			*uParam2 = { -1f, 0,3f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("zombieb"):
			*uParam2 = { -1f, 0,2f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("vortex"):
			*uParam2 = { -1f, 0,18f, 0,37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,095f;
			break;
		
		case joaat("tornado6"):
			*uParam2 = { -1f, -0,03f, -0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("youga2"):
			*uParam2 = { 0f, 2,352f, 0,253f };
			*uParam3 = { 0f, -1f, -0,256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0,33f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("faggio3"):
			*uParam2 = { -1f, -0,54f, -0,11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("faggio"):
			*uParam2 = { -0,9875f, -0,0175f, -0,01f };
			*uParam3 = { 0,8975f, -0,26f, -0,0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1625f;
			break;
		
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("diablous"):
			*uParam2 = { -1f, 0,006f, 0,382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("diablous2"):
			*uParam2 = { -1f, 0,225f, 0,541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("elegy"):
			*uParam2 = { 0f, 1,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fcr"):
			*uParam2 = { -1f, 0,234f, 0,376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("fcr2"):
			*uParam2 = { -1f, 0,234f, 0,376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("italigtb"):
			*uParam2 = { -1f, -0,024f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0,024f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("nero"):
			*uParam2 = { -1f, 0,237f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("nero2"):
			*uParam2 = { -1f, 0,237f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("penetrator"):
			*uParam2 = { -1f, 0,153f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("ruiner2"):
			*uParam2 = { 0,363f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("ruiner3"):
			*uParam2 = { 0,363f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("specter"):
			*uParam2 = { -1f, -0,273f, -0,02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("specter2"):
			*uParam2 = { -1f, -0,273f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("technical2"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("voltic2"):
			*uParam2 = { 0f, 1,763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("infernus2"):
			*uParam2 = { -1f, 0,33f, 0,06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,06f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("ruston"):
			*uParam2 = { -1f, -0,273f, 0,084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("turismo2"):
			*uParam2 = { -1f, 0,159f, -0,193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("ardent"):
			*uParam2 = { -1f, 0,309f, 0,276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("cheetah2"):
			*uParam2 = { -1f, 0,159f, -0,127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("halftrack"):
			*uParam2 = { -1f, 0,501f, 0,531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("nightshark"):
			*uParam2 = { -1,5f, 0,42f, 0,584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("oppressor"):
			*uParam2 = { -1f, 0,306f, 0,355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,08f;
			break;
		
		case joaat("tampa3"):
			*uParam2 = { 0f, 1,515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,275f;
			break;
		
		case joaat("technical3"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case joaat("torero"):
			*uParam2 = { -1f, 0,201f, 0,114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("vagner"):
			*uParam2 = { -1,5f, 0,906f, 0,071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("xa21"):
			*uParam2 = { -1f, 0,441f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("phantom3"):
			*uParam2 = { -1,3f, 2,045f, 0,802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("hauler2"):
			*uParam2 = { -1,627f, 2,456f, 0,745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cyclone"):
			*uParam2 = { -1f, 0,186f, 0,382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("visione"):
			*uParam2 = { -1f, 0,432f, 0,031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("vigilante"):
			*uParam2 = { -1f, 0,232f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("retinue"):
			*uParam2 = { -1f, -0,018f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("rapidgt3"):
			*uParam2 = { 0f, 1,972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("avenger"):
		case joaat("avenger3"):
			*uParam2 = { -2,02f, 6,45f, -0,716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("deluxo"):
			*uParam2 = { -1f, -0,291f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("stromberg"):
			*uParam2 = { -1f, 0,23f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("riot2"):
			*uParam2 = { -1,891f, 2,144f, 0,657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("chernobog"):
			*uParam2 = { -2,127f, 5,413f, 1,132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,34f;
			break;
		
		case joaat("khanjali"):
			*uParam2 = { -0,897f, 1,391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("barrage"):
			*uParam2 = { -1,51f, 0,71f, 0,451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("comet4"):
			*uParam2 = { -1f, 0,298f, 0,257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,36f;
			break;
		
		case joaat("neon"):
			*uParam2 = { -1f, 0,181f, -0,066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("streiter"):
			*uParam2 = { -1f, 0,301f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sentinel3"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("yosemite"):
			*uParam2 = { -1f, 0,252f, 0,201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("sc1"):
			*uParam2 = { -1f, 0,616f, -0,131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("autarch"):
			*uParam2 = { -1f, 0f, 0,116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("gt500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("hustler"):
			*uParam2 = { -1f, -0,228f, 0,321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("revolter"):
			*uParam2 = { -1f, 0,203f, 0,126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("pariah"):
			*uParam2 = { -1f, -0,126f, 0,208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("raiden"):
			*uParam2 = { -1f, 0,252f, -0,095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("savestra"):
			*uParam2 = { -1f, 0f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("riata"):
			*uParam2 = { -1,3f, 0,18f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("hermes"):
			*uParam2 = { -1f, -0,134f, 0,158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("comet5"):
			*uParam2 = { -1f, 0,002f, 0,031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("z190"):
			*uParam2 = { -1f, -0,175f, 0,242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("viseris"):
			*uParam2 = { -1f, 0f, 0,244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,275f;
			break;
		
		case joaat("kamacho"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
	}
	switch (unk_0x4B423FAA24E8ABF0(uParam0))
	{
		case joaat("gb200"):
			*uParam2 = { -1f, 0f, 0,407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,225f;
			break;
		
		case joaat("fagaloa"):
			*uParam2 = { -1f, 0f, 0,225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("ellie"):
			*uParam2 = { -1f, 0,441f, -0,128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("issi3"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("michelli"):
			*uParam2 = { -1f, 0f, 0,0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("flashgt"):
			*uParam2 = { 0f, 1,592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("hotring"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tezeract"):
			*uParam2 = { -1f, 0,679f, 0,514f };
			*uParam3 = { 1f, 0f, -0,75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("tyrant"):
			*uParam2 = { -1,588f, 0,315f, 0,337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("dominator3"):
			*uParam2 = { -1f, 0f, 0,221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("taipan"):
			*uParam2 = { -1f, 0f, 0,219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("entity2"):
			*uParam2 = { -1,52f, 0,41f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0,297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("cheburek"):
			*uParam2 = { -1f, 0,393f, 0,162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("caracara"):
			*uParam2 = { -1f, 1,266f, 0,4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("speedo4"):
		case joaat("speedo5"):
			*uParam2 = { -1,5f, 0,833f, 0,391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("mule4"):
			*uParam2 = { -1,125f, 2,691f, 0,318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("pounder2"):
			*uParam2 = { -1,5f, 1,853f, 0,779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,38f;
			break;
		
		case joaat("swinger"):
			*uParam2 = { -1f, 0,195f, 0,105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("menacer"):
			*uParam2 = { -1,73f, 0,159f, 0,61f };
			*uParam3 = { 1f, 0,12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("scramjet"):
			*uParam2 = { -1f, -0,188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("patriot2"):
			*uParam2 = { -1,213f, 1,546f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("stafford"):
			*uParam2 = { -1f, 0,036f, 0,096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("freecrawler"):
			*uParam2 = { -1f, 0,249f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("oppressor2"):
			*uParam2 = { -1f, 0,306f, 0,355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,08f;
			break;
		
		case joaat("terbyte"):
			*uParam2 = { -1,73f, 3,397f, 0,724f };
			*uParam3 = { 1f, 0,12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("bruiser"):
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("bruiser2"):
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("bruiser3"):
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("brutus"):
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("brutus2"):
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("brutus3"):
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("cerberus"):
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cerberus2"):
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cerberus3"):
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("clique"):
			*uParam2 = { -1f, 0,167f, 0,159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("deveste"):
			*uParam2 = { -1,5f, 1,066f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("deviant"):
			*uParam2 = { -1f, 0,111f, 0,123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("dominator4"):
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("dominator5"):
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("dominator6"):
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("impaler"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("impaler2"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("impaler3"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("impaler4"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("imperator"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("imperator2"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("imperator3"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("issi4"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("issi5"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("issi6"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("italigto"):
			*uParam2 = { -1f, -0,091f, 0,207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("monster3"):
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("monster4"):
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("monster5"):
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("schlagen"):
			*uParam2 = { -1f, -0,105f, 0,262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("slamvan4"):
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("slamvan5"):
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("slamvan6"):
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("toros"):
			*uParam2 = { -1f, 0,415f, 0,394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tulip"):
			*uParam2 = { -1f, 0,171f, 0,223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("vamos"):
			*uParam2 = { -1f, 0f, 0,163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("zr380"):
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zr3802"):
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zr3803"):
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("caracara2"):
			*uParam2 = { -1f, 0,687f, 0,4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("drafter"):
			*uParam2 = { -1,045f, 0,15f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("dynasty"):
			*uParam2 = { -1f, 0,12f, 0,334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("emerus"):
			*uParam2 = { -1f, 0,372f, 0,439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("gauntlet3"):
			*uParam2 = { -1f, 0f, 0,222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("gauntlet4"):
			*uParam2 = { -1f, 0f, 0,222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("hellion"):
			*uParam2 = { -1f, 0,27f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("issi7"):
			*uParam2 = { -1f, 0,195f, -0,063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("jugular"):
			*uParam2 = { -1f, 0,213f, 0,213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("krieger"):
			*uParam2 = { -1f, 0,576f, -0,123f };
			*uParam3 = { 0,997f, -0,105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("locust"):
			*uParam2 = { -1f, -0,207f, 0,042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("nebula"):
		case 1690421418:
			*uParam2 = { -1f, 0,012f, 0,147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("neo"):
			*uParam2 = { -1f, 0,216f, 0,216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("novak"):
			*uParam2 = { -1f, 0,24f, 0,255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("paragon"):
			*uParam2 = { -1f, 0f, 0,156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("paragon2"):
			*uParam2 = { -1f, 0f, 0,156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("peyote2"):
			*uParam2 = { -1f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("s80"):
			*uParam2 = { -1f, 0,357f, 0,256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("thrax"):
			*uParam2 = { -1f, 0,426f, 0,339f };
			*uParam3 = { 1f, 0,06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("zion3"):
			*uParam2 = { -1f, 0,108f, 0,234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("zorrusso"):
			*uParam2 = { -1f, 0,273f, -0,06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("slamvan2"):
			*uParam2 = { -1f, 0,35f, 0,456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("rebla"):
			*uParam2 = { 0f, 1,9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("asbo"):
			*uParam2 = { -1f, 0,104f, 0,339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("sugoi"):
			*uParam2 = { -1f, 0,104f, 0,223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("komoda"):
			*uParam2 = { -1f, 0,104f, 0,155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("vstr"):
			*uParam2 = { -1f, 0,104f, 0,155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sultan2"):
			*uParam2 = { -1f, 0,313f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("kanjo"):
			*uParam2 = { -1f, 0,313f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("jb7002"):
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("yosemite2"):
			*uParam2 = { -1f, 0,252f, 0,201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("retinue2"):
			*uParam2 = { -1f, -0,018f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("furia"):
			*uParam2 = { -1f, 0,0965f, 0,149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("everon"):
			*uParam2 = { 0f, 2,019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("imorgon"):
			*uParam2 = { -1,5f, 0,42f, -0,2f };
			*uParam3 = { 1f, -0,0997f, 0,0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zhaba"):
			*uParam2 = { -1,202f, 0,034f, 0,6635f };
			*uParam3 = { 1f, -0,002f, 0f };
			*uParam4 = { 0f, -0,7398f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("gauntlet5"):
			*uParam2 = { -1,5f, 0,379f, 0,297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,24f;
			break;
		
		case joaat("dukes3"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("manana2"):
			*uParam2 = { -1,76f, 0,105f, 0,009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case joaat("club"):
			*uParam2 = { 0f, 1,252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,31f;
			break;
		
		case joaat("glendale2"):
			*uParam2 = { 0f, 2,135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,205f;
			break;
		
		case joaat("youga3"):
			*uParam2 = { 0f, 2,352f, 0,3f };
			*uParam3 = { 0f, -1f, -0,256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,135f;
			break;
		
		case joaat("yosemite3"):
			*uParam2 = { -1f, 0,252f, 0,203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,21f;
			break;
		
		case joaat("seminole2"):
			*uParam2 = { 0f, 1,654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("penumbra2"):
			*uParam2 = { -1,08f, 0,28f, -0,093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("landstalker2"):
			*uParam2 = { -1,64f, 0,7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("coquette4"):
			*uParam2 = { -1f, -0,021f, 0,273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("tigon"):
			*uParam2 = { -1f, 0,156f, 0,099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("peyote3"):
			*uParam2 = { -1,5f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("brioso2"):
			*uParam2 = { -1f, 0,275f, 0,215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("slamtruck"):
			*uParam2 = { -1f, 1,454f, 0,485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("italirsx"):
			*uParam2 = { -1f, 0,109f, 0,129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("toreador"):
			*uParam2 = { -1f, 0,194f, 0,342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("weevil"):
			*uParam2 = { -1f, 0,111f, 0,168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("zr350"):
			*uParam2 = { 0f, 1,632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,19f;
			break;
		
		case joaat("calico"):
			*uParam2 = { -1f, 0,497f, 0,212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jester4"):
			*uParam2 = { -1f, 0f, 0,181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("comet6"):
			*uParam2 = { -1f, 0,205f, 0,074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("warrener2"):
			*uParam2 = { -1f, 0,408f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("remus"):
			*uParam2 = { -1f, 0,204f, 0,357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("vectre"):
			*uParam2 = { -1f, 0,249f, 0,164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("dominator7"):
			*uParam2 = { -1f, 0,253f, 0,142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("cypher"):
		case 258105345:
			*uParam2 = { -1f, 0,223f, 0,185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("rt3000"):
			*uParam2 = { -1f, 0f, 0,189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("sultan3"):
			*uParam2 = { -1f, 0,42f, 0,309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,23f;
			break;
		
		case joaat("tailgater2"):
			*uParam2 = { -1f, 0,337f, 0,283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("previon"):
			*uParam2 = { -1f, 0,14f, -0,155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("dominator8"):
			*uParam2 = { -1f, 0,153f, -0,006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("futo2"):
			*uParam2 = { -1f, 0,318f, -0,013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("euros"):
			*uParam2 = { -1f, 0,101f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("growler"):
			*uParam2 = { -1f, 0,151f, 0,149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("cinquemila"):
			*uParam2 = { -1f, 0,533f, 0,197f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("champion"):
			*uParam2 = { -1f, 0,076f, 0,122f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("granger2"):
			*uParam2 = { -1f, 0,461f, 0,264f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("deity"):
			*uParam2 = { -1f, 0,279f, 0,235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("buffalo4"):
			*uParam2 = { -1f, 0,251f, 0,149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("baller7"):
			*uParam2 = { -1,194f, 0,182f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("zeno"):
			*uParam2 = { -1,194f, 0,409f, 0,199f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case joaat("comet7"):
			*uParam2 = { -1f, 0,05f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("astron"):
			*uParam2 = { -1f, 0,249f, 0,39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("patriot3"):
			*uParam2 = { -1,2f, 0,474f, 0,335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,23f;
			break;
		
		case joaat("jubilee"):
			*uParam2 = { -1,037f, 0,438f, 0,31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("shinobi"):
			*uParam2 = { 0f, 0,306f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,045f;
			break;
		
		case joaat("reever"):
			*uParam2 = { -1f, 0,292f, 0,29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("iwagen"):
			*uParam2 = { -1f, 0,387f, 0,209f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("brioso3"):
			*uParam2 = { -1f, 0,15f, 0,2f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("corsita"):
			*uParam2 = { -1f, 0,1f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("greenwood"):
			*uParam2 = { -1f, 0,2f, 0,138f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("kanjosj"):
			*uParam2 = { -1f, 0,1f, 0,26f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("postlude"):
			*uParam2 = { -1f, 0f, 0,28f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("rhinehart"):
			*uParam2 = { 0f, 1,317f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("tenf"):
			*uParam2 = { -1f, 0,74f, 0,19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("tenf2"):
			*uParam2 = { -1f, 0,74f, 0,19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("torero2"):
			*uParam2 = { -1f, 0f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("vigero2"):
			*uParam2 = { -1f, -0,07f, 0,3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("weevil2"):
			*uParam2 = { -1f, 0,07f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("draugur"):
			*uParam2 = { -1f, 0,5f, 0,48f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("ruiner4"):
			*uParam2 = { -1f, 0,5f, 0,182f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("sentinel4"):
		case -986656474:
			*uParam2 = { -1f, 0,147f, 0,239f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sm722"):
			*uParam2 = { -1f, -0,4f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("omnisegt"):
			*uParam2 = { 0f, 1,462f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("powersurge"):
			*uParam2 = { -1f, 0,3f, 0,37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("entity3"):
			*uParam2 = { -1f, 0,5f, 0,225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("manchez3"):
			*uParam2 = { -1f, 0,066f, 0,329f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("surfer3"):
			*uParam2 = { -1f, 1,19f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("boor"):
			*uParam2 = { -1f, 0,25f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("eudora"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,7f;
			break;
		
		case joaat("tulip2"):
			*uParam2 = { -1f, 0f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("r300"):
			*uParam2 = { -1f, 0f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("virtue"):
			*uParam2 = { -1f, 0f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("issi8"):
			*uParam2 = { -1f, 0,3f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("broadway"):
			*uParam2 = { -1f, -0,4f, 0,375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("panthere"):
			*uParam2 = { -1f, 0,069f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("tahoma"):
			*uParam2 = { -1f, -0,253f, 0,39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("everon2"):
			*uParam2 = { -1f, 0,101f, 0,227f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,6f;
			break;
	}
	switch (unk_0x4B423FAA24E8ABF0(uParam0))
	{
		case joaat("l35"):
			*uParam2 = { -1f, 0,2f, 0,43f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("brigham"):
			*uParam2 = { -0,003f, 2,764f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("gauntlet6"):
			*uParam2 = { -1,5f, 0,4f, 0,1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,24f;
			break;
		
		case joaat("stingertt"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("buffalo5"):
			*uParam2 = { 0f, 1,5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("ratel"):
			*uParam2 = { -1f, 0,128f, 0,212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,42f;
			break;
		
		case joaat("clique2"):
			*uParam2 = { -1f, 0,088f, 0,438f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("coureur"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("monstrociti"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("driftfr36"):
			*uParam2 = { -1f, 0,1f, 0,026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,44f;
			break;
		
		case joaat("driftyosemite"):
			*uParam2 = { -1f, 0,252f, 0,201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("driftremus"):
			*uParam2 = { -1f, 0,204f, 0,357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("drifteuros"):
			*uParam2 = { -1f, 0,101f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("driftfuto"):
			*uParam2 = { -1f, 0,318f, -0,013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("driftjester"):
			*uParam2 = { -1f, 0f, 0,181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("driftzr350"):
			*uParam2 = { 0f, 1,632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,19f;
			break;
		
		case joaat("aleutian"):
			*uParam2 = { 0f, 2,1f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("dominator9"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("fr36"):
			*uParam2 = { -1f, 0,1f, 0,026f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,44f;
			break;
		
		case joaat("cavalcade3"):
			*uParam2 = { -1,6f, 0,585f, 0,3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("impaler5"):
			*uParam2 = { -1f, 0,16f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case joaat("asterope2"):
			*uParam2 = { -1f, 0,15f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,46f;
			break;
		
		case joaat("dorado"):
			*uParam2 = { -1f, 0,229f, 0,37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,36f;
			break;
		
		case joaat("impaler6"):
			*uParam2 = { -1f, 0,216f, 0,124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,41f;
			break;
		
		case joaat("vivanite"):
			*uParam2 = { -1f, 0,475f, 0,05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1240172147:
		case -143587026:
			*uParam2 = { 0f, 1,141f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 1249425552:
			*uParam2 = { -1f, 0,16f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case 1307736079:
			*uParam2 = { -1f, 0,315f, 0,1587f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,0455f };
			*uParam5 = 0,4f;
			break;
		
		case 1452003510:
			*uParam2 = { -1f, 0,216f, 0,124f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,41f;
			break;
		
		case -223461503:
			*uParam2 = { -1f, -0,0897f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2375f;
			break;
		
		case 1121330119:
			*uParam2 = { -1f, 0f, 0,2702f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case 1579902654:
			*uParam2 = { -1f, 0f, 0,0653f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1896488056:
			*uParam2 = { -1,229f, 0,6f, 0,361f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -999594302:
			*uParam2 = { 0f, 1,71f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 1881415402:
			*uParam2 = { -1f, 0,175f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1958428933:
			*uParam2 = { -1f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -946047670:
			*uParam2 = { -1f, 0f, 0,175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1968807591:
			*uParam2 = { 0f, 1,0569f, 1f };
			*uParam3 = { 0f, -0,5995f, -1f };
			*uParam4 = { -0,4071f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
	}
	return 1;
}

bool func_45(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_46()
{
	Global_1943409 = 0;
	Global_1943409.f_1 = { 0f, 0f, 0f };
	Global_1943409.f_4 = { 0f, 0f, 0f };
	Global_1943409.f_7 = { 0f, 0f, 0f };
	Global_1943409.f_10 = 0f;
	Global_1943409.f_11 = 0f;
	Global_1943409.f_12 = 0;
	Global_1943409.f_13 = 0;
	Global_1943409.f_14 = { 0f, 0f, 0f };
	Global_1943409.f_17 = { 0f, 0f, 0f };
	Global_1943409.f_20 = { 0f, 0f, 0f };
	Global_1943409.f_23 = 0;
	Global_1943409.f_24 = 0;
}

int func_47(var uParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0) && unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		if (unk_0x0BCE48C8677F9824(uParam0, 0) || func_48(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_48(var uParam0)
{
	var uVar0;
	
	if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
	{
		if (unk_0xFC8BFE4B41177C22(uParam0) && unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		{
			if (unk_0xD130E7CDEE903624(uParam0, "MPBitset"))
			{
				uVar0 = unk_0xE2F6FE9B61232165(uParam0, "MPBitset");
				return BitTest(uVar0, 16);
			}
		}
	}
	return 0;
}

int func_49(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (unk_0xA8F635A578C0CE07(uParam1, 13) && unk_0xBE0146369C46314B(uParam1))
	{
		iVar0 = unk_0xA34132DD5D4FE383(uParam1);
	}
	else
	{
		iVar0 = func_104();
	}
	bVar1 = false;
	if (iVar0 == unk_0x259BE71D8A81D4FA())
	{
		if (func_61(15, 0))
		{
			bVar1 = true;
		}
		else if (func_57(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((!bVar1 && unk_0xFC8BFE4B41177C22(uParam0)) && !unk_0x1C2F771CDC87A3A5(uParam0, 0)) && ((unk_0xA8F635A578C0CE07(uParam1, 13) && unk_0x7260716F2E4D7661()) && unk_0xE582BF3EDDBB1A68(uParam1)))
	{
		iVar2 = Global_2359296[func_56() /*5570*/].f_681.f_2;
		if (iVar2 > -1 && iVar2 < 517)
		{
			if (BitTest(Global_1586521[iVar2 /*142*/].f_103, 8))
			{
				bVar1 = true;
			}
		}
	}
	if (((((((!(unk_0xFC8BFE4B41177C22(uParam0) && !unk_0x1C2F771CDC87A3A5(uParam0, 0)) || !unk_0x1B1A446EFA398EB5(uParam0)) || !unk_0x8FF2665359043205(0, -1, 1)) || !((unk_0xA8F635A578C0CE07(uParam1, 13) && unk_0x7260716F2E4D7661()) && unk_0xE582BF3EDDBB1A68(uParam1))) || iVar0 == func_104()) || !func_28(iVar0, 0, 0)) || !bVar1) || func_50(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_50(var uParam0)
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return 1;
	}
	if (func_52(unk_0x259BE71D8A81D4FA()) == 3)
	{
		if (func_51(uParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1943434)
	{
		return 1;
	}
	switch (unk_0x4B423FAA24E8ABF0(uParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
		case joaat("stryder"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("squaddie"):
		case joaat("winky"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("verus"):
		case joaat("lm87"):
		case joaat("gp1"):
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("thruster"):
		case joaat("terbyte"):
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
		case joaat("blazer2"):
		case joaat("burrito2"):
		case joaat("ignus"):
		case joaat("draugur"):
		case joaat("brickade2"):
		case joaat("journey2"):
		case joaat("stingertt"):
		case joaat("drifttampa"):
		case joaat("turismo3"):
		case joaat("polgauntlet"):
		case joaat("police5"):
		case joaat("police4"):
		case joaat("baller8"):
		case joaat("vigero3"):
		case joaat("terminus"):
		case 1249425552:
		case 1452003510:
		case 1737348074:
		case -1628000569:
		case -773802025:
			return 1;
			break;
		
		case joaat("youga"):
		case joaat("youga2"):
			if (unk_0x94C9CD3D66808551(uParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
			if (unk_0x94C9CD3D66808551(uParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case joaat("club"):
			if ((unk_0x94C9CD3D66808551(uParam0, 7) == 0 || unk_0x94C9CD3D66808551(uParam0, 7) == 1) || unk_0x94C9CD3D66808551(uParam0, 7) == 7)
			{
				return 1;
			}
			break;
		
		case joaat("yosemite3"):
			if ((unk_0x94C9CD3D66808551(uParam0, 45) == 4 || unk_0x94C9CD3D66808551(uParam0, 45) == 5) || unk_0x94C9CD3D66808551(uParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_51(var uParam0)
{
	if (unk_0x77B62CAA5DF0922A("FMDeliverableID", 3))
	{
		if (unk_0xD130E7CDEE903624(uParam0, "FMDeliverableID"))
		{
			return unk_0xE2F6FE9B61232165(uParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_52(int iParam0)
{
	if (func_55(iParam0) == 233)
	{
		return func_53(iParam0);
	}
	return -1;
}

int func_53(int iParam0)
{
	if (func_54(iParam0, 0))
	{
		return Global_1887305[iParam0 /*610*/].f_10.f_182;
	}
	return -1;
}

int func_54(int iParam0, int iParam1)
{
	if (func_27(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_55(int iParam0)
{
	if (func_27(iParam0))
	{
		if (func_54(iParam0, 0))
		{
			return Global_1887305[iParam0 /*610*/].f_10.f_33;
		}
	}
	return -1;
}

int func_56()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_57(bool bParam0)
{
	return func_58(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_58(int iParam0, bool bParam1)
{
	return func_59(iParam0, bParam1, 1);
}

int func_59(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_27(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_60(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1887305[iParam0 /*610*/].f_10;
	if (func_27(iVar0) && Global_1887305[iVar0 /*610*/].f_10.f_430 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	if (func_27(iParam0))
	{
		if (func_27(Global_1887305[iParam0 /*610*/].f_10))
		{
			if (Global_1887305[iParam0 /*610*/].f_10 == iParam0 && Global_1887305[iParam0 /*610*/].f_10.f_430 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	if (func_66(unk_0x259BE71D8A81D4FA()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return 1;
				break;
			}
	}
	uVar0 = func_63(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_62(iVar1));
}

int func_62(int iParam0)
{
	return (iParam0 % 32);
}

var func_63(int iParam0)
{
	var uVar0;
	
	uVar0 = func_32(func_64(iParam0), -1);
	return uVar0;
}

int func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_65(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1291;
			break;
	}
	return 1291;
}

int func_65(int iParam0)
{
	return (iParam0 / 32);
}

int func_66(int iParam0)
{
	if (iParam0 != func_104())
	{
		if (func_67(iParam0) && Global_2657971[iParam0 /*465*/].f_322.f_11 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_67(int iParam0)
{
	if (iParam0 != func_104())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_68(Global_2657971[iParam0 /*465*/].f_322.f_8) == 22;
			}
		}
	}
	return 0;
}

int func_68(int iParam0)
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

void func_69(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_71(iParam1);
	func_70(iVar1, &uVar0);
	unk_0x77B012A683295B6E(uParam0, uVar0);
}

bool func_70(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		
		case 1:
			*uParam1 = 5;
			break;
		
		case 2:
			*uParam1 = 6;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 111;
			break;
		
		case 5:
			*uParam1 = 112;
			break;
		
		case 6:
			*uParam1 = 107;
			break;
		
		case 7:
			*uParam1 = 104;
			break;
		
		case 8:
			*uParam1 = 98;
			break;
		
		case 9:
			*uParam1 = 100;
			break;
		
		case 10:
			*uParam1 = 102;
			break;
		
		case 11:
			*uParam1 = 99;
			break;
		
		case 12:
			*uParam1 = 105;
			break;
		
		case 13:
			*uParam1 = 106;
			break;
		
		case 14:
			*uParam1 = 37;
			break;
		
		case 15:
			*uParam1 = 90;
			break;
		
		case 16:
			*uParam1 = 88;
			break;
		
		case 17:
			*uParam1 = 89;
			break;
		
		case 18:
			*uParam1 = 91;
			break;
		
		case 19:
			*uParam1 = 38;
			break;
		
		case 20:
			*uParam1 = 138;
			break;
		
		case 21:
			*uParam1 = 36;
			break;
		
		case 22:
			*uParam1 = 27;
			break;
		
		case 23:
			*uParam1 = 28;
			break;
		
		case 24:
			*uParam1 = 29;
			break;
		
		case 25:
			*uParam1 = 150;
			break;
		
		case 26:
			*uParam1 = 30;
			break;
		
		case 27:
			*uParam1 = 31;
			break;
		
		case 28:
			*uParam1 = 32;
			break;
		
		case 29:
			*uParam1 = 35;
			break;
		
		case 30:
			*uParam1 = 135;
			break;
		
		case 31:
			*uParam1 = 137;
			break;
		
		case 32:
			*uParam1 = 136;
			break;
		
		case 33:
			*uParam1 = 71;
			break;
		
		case 34:
			*uParam1 = 145;
			break;
		
		case 35:
			*uParam1 = 63;
			break;
		
		case 36:
			*uParam1 = 64;
			break;
		
		case 37:
			*uParam1 = 65;
			break;
		
		case 38:
			*uParam1 = 66;
			break;
		
		case 39:
			*uParam1 = 67;
			break;
		
		case 40:
			*uParam1 = 68;
			break;
		
		case 41:
			*uParam1 = 69;
			break;
		
		case 42:
			*uParam1 = 73;
			break;
		
		case 43:
			*uParam1 = 70;
			break;
		
		case 44:
			*uParam1 = 74;
			break;
		
		case 45:
			*uParam1 = 51;
			break;
		
		case 46:
			*uParam1 = 53;
			break;
		
		case 47:
			*uParam1 = 54;
			break;
		
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((unk_0x76CD105BCAC6EB9F() && func_73()) && Global_1576239)
	{
		if ((iParam0 == Global_1576240 && iParam1 == Global_1576241) && iParam2 == Global_1576242)
		{
			return 13;
		}
	}
	return 0;
}

int func_73()
{
	struct<13> Var0;
	
	if (unk_0x99DFE4CAC19D527F())
	{
		if ((unk_0x261E3728EE56B3AC() && unk_0x5F9F81C08516558E()) && unk_0xFE087BC8EB584AA2())
		{
			Var0 = { func_74() };
			if (unk_0x7260716F2E4D7661() && unk_0xE582BF3EDDBB1A68(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_74()
{
	struct<13> Var0;
	
	unk_0x677540FE33795D26(&Var0, 13);
	return Var0;
}

int func_75(var uParam0)
{
	switch (unk_0x4B423FAA24E8ABF0(uParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_76(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case joaat("alphaz1"):
			*uParam1 = 0,2f;
			break;
		
		case joaat("bombushka"):
			*uParam1 = 0,15f;
			break;
		
		case joaat("howard"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("hunter"):
			*uParam1 = 0,5f;
			break;
		
		case joaat("microlight"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("mogul"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("molotok"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("nokota"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("pyro"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("rogue"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("seabreeze"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("starling"):
			*uParam1 = 0,5f;
			break;
		
		case joaat("tula"):
			*uParam1 = 0,15f;
			break;
		
		case joaat("khanjali"):
			*uParam1 = 0,6f;
			break;
		
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("greenwood"):
		case joaat("omnisegt"):
		case joaat("virtue"):
		case joaat("r300"):
		case joaat("stingertt"):
		case joaat("buffalo5"):
		case joaat("coureur"):
		case joaat("monstrociti"):
		case joaat("aleutian"):
		case joaat("turismo3"):
		case joaat("baller8"):
		case joaat("terminus"):
		case 1121330119:
		case -946047670:
			return 1;
			break;
	}
	return 0;
}

void func_78(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_102(uParam0))
		{
			if (unk_0x70E57E9927B6BA58(&(uParam1->f_1)) != 0)
			{
				unk_0x3FEAE59CDE6D3946(uParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x20DE4C1439E0FC92())
			{
				unk_0x05D3F682DDA06C20(uParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_101(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_101(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_101(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_101(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_101(iVar2)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_101(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_101(iVar3)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_101(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_101(iVar4)))
					{
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_101(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("surfer3"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_101(iVar5)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_101(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_101(4)))
			{
			}
			else
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_101(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x94C9CD3D66808551(uParam0, 10) != 0)
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), false);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_101(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_101(iVar6)))
				{
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(uParam1->f_77), func_101(iVar6));
				}
				iVar6++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xE0ACB5BC9D603F02(uParam0, 0);
			if (unk_0x94C9CD3D66808551(uParam0, 5) != -1)
			{
				unk_0xE0ACB5BC9D603F02(uParam0, 1);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			unk_0x84F5FD9CD27457EE(uParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x963D9A7202C06F65(uParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			unk_0x593A3115B8AE759B(uParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x588D8FDC61F7CFAD(uParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_99(uParam1->f_5) || func_99(uParam1->f_6))
			{
			}
			else
			{
				unk_0xD133EF7430EDCD09(uParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xBB361D7264AC4FD8(uParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_98(uParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_97())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x5DA0536AEAD1FF31(uParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_96(uParam1->f_66))
		{
			unk_0xFE620ED8E0A3C209(uParam0, 0);
		}
		else
		{
			unk_0xFE620ED8E0A3C209(uParam0, 0);
			unk_0xFE620ED8E0A3C209(uParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			unk_0x439C904840715871(uParam0, 0);
			unk_0x519F76A38952BBD0(uParam0, 0);
		}
		if (bParam2)
		{
			unk_0x0B74F181ADFC39BF(uParam0, uParam1->f_70);
		}
		unk_0xEAB8A43F6621850F(uParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xE62930EC6FAABCA5(uParam0, 2, BitTest(uParam1->f_77, 28));
		unk_0xE62930EC6FAABCA5(iParam0, 3, BitTest(uParam1->f_77, 29));
		unk_0xE62930EC6FAABCA5(iParam0, 0, BitTest(uParam1->f_77, 30));
		unk_0xE62930EC6FAABCA5(iParam0, 1, BitTest(uParam1->f_77, 31));
		unk_0xD37CA6D6F8993BB9(iParam0, BitTest(uParam1->f_77, 10));
		if (unk_0xBA3ECE95D3094B0F(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xA1C03303EC67320B(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(iParam0)))
			{
				if (unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_95(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_95(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x7943BD10E2A03FAC(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xD6B15DF382A594C7(iParam0, 1);
			}
			else
			{
				unk_0x232B023FE4D977E2(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_87(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xBA16CD57E37AC32A(uParam1->f_66) && !unk_0xEA4F815FDC353FEF(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_101(iVar7 + 1)))
				{
					if (!unk_0x5318DF85BEB6B95F(iParam0, iVar7 + 1))
					{
						unk_0xD772F6AA66750D2B(iParam0, iVar7 + 1, 0);
					}
				}
				else if (unk_0x5318DF85BEB6B95F(iParam0, iVar7 + 1))
				{
					unk_0xD772F6AA66750D2B(iParam0, iVar7 + 1, 1);
				}
				iVar7++;
			}
		}
		if ((unk_0x4B423FAA24E8ABF0(iParam0) == joaat("sheava") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("omnis")) || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("le7b"))
		{
			if (unk_0x94C9CD3D66808551(iParam0, 0) == -1)
			{
				unk_0xD772F6AA66750D2B(iParam0, 1, 0);
			}
		}
		if ((((func_81() && unk_0x00C6FDED3EB75117(uParam1->f_66)) && unk_0x8EC15ED9ECD1E9D0(iParam0)) && !unk_0x2E6A27037F1DC473(iParam0, joaat("avenger"))) && !unk_0x2E6A27037F1DC473(iParam0, func_80(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (!BitTest(uParam1->f_77, 22) && func_79(iParam0, 5f))
				{
					unk_0xC2A036647DD761E4(iParam0, 3);
				}
				else
				{
					unk_0xC2A036647DD761E4(iParam0, 2);
				}
			}
			else
			{
				unk_0xC2A036647DD761E4(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			unk_0xF46ECFD5526E8FF7(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xF46ECFD5526E8FF7(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_79(var uParam0, float fParam1)
{
	struct<3> Var0;
	float fVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(uParam0, 0) };
		if (unk_0xB1EAADCB692D69CE(Var0, &fVar1, 0, 0))
		{
			if (unk_0x1D5CD3EAAA7422B0((Var0.f_2 - fVar1)) > fParam1)
			{
				return 1;
			}
		}
		else if (Var0.f_2 > (unk_0xFAF53F2F65D5EE26(Var0.f_0, Var0.f_1) + fParam1))
		{
			return 1;
		}
		else if (Var0.f_2 > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_80(bool bParam0)
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

int func_81()
{
	if ((((Global_4718592.f_117195 == 6 || Global_4718592.f_117195 == 7) || Global_4718592.f_117195 == 18) || Global_4718592.f_117195 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_85(7))
	{
		if (func_83(Global_2672855.f_4.f_16) || func_82(Global_2672855.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_82(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1882632[iVar0 /*146*/].f_82.f_63 != 0;
	}
	return 0;
}

int func_83(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_84(iParam0, 9);
	}
	return 0;
}

var func_84(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

bool func_85(int iParam0)
{
	return func_86(&(Global_2672855.f_194), iParam0);
}

var func_86(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_87(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD9F5E1FEFD1329E4(*uParam0, 0))
	{
		return 0;
	}
	if (unk_0x90E3EAFF8AAA1A42(*uParam0) == 0)
	{
		return 0;
	}
	unk_0xB5AD06DDA85E2E8F(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0xF5501FF9869DAC7C(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0xF5501FF9869DAC7C(*uParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x89D1FDCA3735A1E0(*uParam0, 255);
				}
				else
				{
					unk_0x89D1FDCA3735A1E0(*uParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0xF5501FF9869DAC7C(*uParam0, iVar1, false);
			}
		}
		else if (unk_0x94C9CD3D66808551(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xC87E4FAD00AEDD4B(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					unk_0x8450270DC5896D39(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					unk_0x8450270DC5896D39(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_93(*uParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					unk_0x8450270DC5896D39(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_92(unk_0x4B423FAA24E8ABF0(*uParam0), 1) && unk_0x94C9CD3D66808551(*uParam0, 24) != func_90(*uParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x8450270DC5896D39(*uParam0, 24, func_90(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_89(uParam0);
	if (func_88(*uParam0))
	{
		unk_0xD05AF216D970F274(*uParam0, 1);
		unk_0x5FE0938FDE9B0958(*uParam0, 1);
	}
	return 1;
}

int func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xFC8BFE4B41177C22(uParam0) && unk_0xD9F5E1FEFD1329E4(uParam0, 0)) && unk_0x90E3EAFF8AAA1A42(uParam0) > 0)
	{
		unk_0xB5AD06DDA85E2E8F(uParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x94C9CD3D66808551(uParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x1340575A0EEE0622(iParam0, iVar1, unk_0x94C9CD3D66808551(iParam0, iVar1)), 32);
				iVar2 = unk_0x70E57E9927B6BA58(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x70E57E9927B6BA58("MNU_CAGE") || iVar2 == unk_0x70E57E9927B6BA58("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_89(var uParam0)
{
	switch (unk_0x4B423FAA24E8ABF0(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x94C9CD3D66808551(*uParam0, 4) == 0)
			{
				unk_0x8450270DC5896D39(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xC87E4FAD00AEDD4B(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x8450270DC5896D39(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xFC8BFE4B41177C22(uParam0) && unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		switch (unk_0x4B423FAA24E8ABF0(uParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = func_91(iParam0, 38) + 1;
		iVar1 = func_91(iParam0, 24) + 1;
		fVar2 = (system::to_float(iParam1 + 1) / system::to_float(iVar0));
		iVar3 = (system::floor((system::to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((unk_0x441B9C85D0FFA9ED(Global_152860) && unk_0x2E6A27037F1DC473(uParam0, Global_152860)) && Global_152861 == iParam1)
	{
		return Global_152862;
	}
	iVar0 = (unk_0x5B59C12A02157D00(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_93(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_92(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14701)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14702)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14700)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14703)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14705)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14704)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18948)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18950)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18954)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18951)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18958)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18956)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18961)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20834)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20835)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_93(var uParam0, int iParam1, int iParam2)
{
	if (!func_94() && unk_0xAF82FE1B3E949337(uParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	return 0;
}

void func_95(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x90E3EAFF8AAA1A42(uParam0) > 0)
	{
		unk_0xB5AD06DDA85E2E8F(uParam0, 0);
		iVar0 = unk_0x94C9CD3D66808551(uParam0, 24);
		iVar1 = unk_0xEFDD8C5443F6C9E4(iParam0, 24);
		unk_0xE33678A9AE50A01B(iParam0, uParam1);
		if (unk_0x4B423FAA24E8ABF0(iParam0) == joaat("tornado6") || unk_0x4B423FAA24E8ABF0(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xC87E4FAD00AEDD4B(iParam0, 24);
		}
		else
		{
			unk_0x8450270DC5896D39(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

var func_97()
{
	return unk_0x087611B922B50F13(joaat("mpindependence"));
}

int func_98(var uParam0)
{
	var uVar0;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		{
			if (unk_0x77B62CAA5DF0922A("MPBitset", 3))
			{
				if (unk_0xD130E7CDEE903624(uParam0, "MPBitset"))
				{
					uVar0 = unk_0xE2F6FE9B61232165(uParam0, "MPBitset");
				}
				return BitTest(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_99(int iParam0)
{
	if (!func_94() && func_100(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_102(var uParam0)
{
	if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
	{
		if (!func_103(unk_0x259BE71D8A81D4FA(), -1))
		{
			uParam0 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
		}
	}
	if (!unk_0xFC8BFE4B41177C22(uParam0))
	{
		return 0;
	}
	if (unk_0x1C2F771CDC87A3A5(uParam0, 0))
	{
		return 0;
	}
	if (!unk_0xD9F5E1FEFD1329E4(uParam0, 0))
	{
		return 0;
	}
	if (func_52(unk_0x259BE71D8A81D4FA()) == 3)
	{
		if (unk_0xFC8BFE4B41177C22(uParam0) && unk_0xD9F5E1FEFD1329E4(uParam0, 0))
		{
			if (func_51(uParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_103(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_28(iParam0, 1, 1))
	{
		if (unk_0x7F420695E3F776FB(unk_0x56E414973C2A8C0E(iParam0), 0))
		{
			uVar0 = unk_0x6EF03BE64E058E2F(unk_0x56E414973C2A8C0E(iParam0), 0);
			if (unk_0xD9F5E1FEFD1329E4(uVar0, 0))
			{
				if (unk_0x4A8C381C258A124D() == unk_0xFD5C5BBD1FE92BB7(uVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_104()
{
	return -1;
}

bool func_105(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("jester4");
		uParam0->f_2 = { -2186,969f, 1133,193f, 29,14f };
		uParam0->f_5 = 104,776f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 1)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("jester4");
		uParam0->f_2 = { -2165,045f, 1086,494f, 28,037f };
		uParam0->f_5 = 84,029f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 2)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("jester4");
		uParam0->f_2 = { -2158,909f, 1122,865f, 28,029f };
		uParam0->f_5 = 275,171f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 3)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("sabregt2");
		uParam0->f_2 = { -2203,007f, 1125,796f, 29,203f };
		uParam0->f_5 = 104,647f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 4)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("sabregt2");
		uParam0->f_2 = { -2178,267f, 1095,497f, 28,097f };
		uParam0->f_5 = 272,49f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 5)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("sabregt2");
		uParam0->f_2 = { -2146,942f, 1084,26f, 28,097f };
		uParam0->f_5 = 64,843f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 6)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("sabregt2");
		uParam0->f_2 = { -2202,77f, 1084,578f, 29,203f };
		uParam0->f_5 = 264,647f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 7)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("dominator8");
		uParam0->f_2 = { -2186,986f, 1086,496f, 29,312f };
		uParam0->f_5 = 102,525f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 8)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("dominator8");
		uParam0->f_2 = { -2177,141f, 1126,924f, 28,199f };
		uParam0->f_5 = 282,22f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 9)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("dominator8");
		uParam0->f_2 = { -2187,171f, 1123,06f, 29,311f };
		uParam0->f_5 = 98,927f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 10)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("manana2");
		uParam0->f_2 = { -2185,955f, 1109,241f, 29,236f };
		uParam0->f_5 = 86,364f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 11)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("manana2");
		uParam0->f_2 = { -2164,252f, 1097,661f, 28,131f };
		uParam0->f_5 = 99,416f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 12)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("manana2");
		uParam0->f_2 = { -2198,294f, 1148,431f, 29,217f };
		uParam0->f_5 = 94,89f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 13)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("manana2");
		uParam0->f_2 = { -2186,849f, 1129,136f, 29,225f };
		uParam0->f_5 = 274,523f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 14)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("fr36");
		uParam0->f_2 = { -2204,765f, 1116,982f, 29,323f };
		uParam0->f_5 = 309,354f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 15)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("fr36");
		uParam0->f_2 = { -2177,001f, 1133,992f, 28,21f };
		uParam0->f_5 = 285,879f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 16)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("fr36");
		uParam0->f_2 = { -2145,605f, 1093,173f, 28,217f };
		uParam0->f_5 = 104,282f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 17)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("fr36");
		uParam0->f_2 = { -2158,942f, 1094,775f, 28,218f };
		uParam0->f_5 = 254,94f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 18)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("fr36");
		uParam0->f_2 = { -2176,339f, 1117,263f, 28,211f };
		uParam0->f_5 = 259,999f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 19)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("moonbeam2");
		uParam0->f_2 = { -2201,448f, 1088,407f, 29,227f };
		uParam0->f_5 = 65,053f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 20)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("moonbeam2");
		uParam0->f_2 = { -2177,569f, 1107,335f, 28,116f };
		uParam0->f_5 = 122,728f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 21)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("moonbeam2");
		uParam0->f_2 = { -2164,509f, 1119,274f, 28,114f };
		uParam0->f_5 = 96,929f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 22)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("moonbeam2");
		uParam0->f_2 = { -2177,436f, 1084,843f, 28,132f };
		uParam0->f_5 = 275,551f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 23)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("remus");
		uParam0->f_2 = { -2164,164f, 1093,637f, 27,969f };
		uParam0->f_5 = 81,181f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 24)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("remus");
		uParam0->f_2 = { -2164,076f, 1126,173f, 27,967f };
		uParam0->f_5 = 82,019f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 25)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("remus");
		uParam0->f_2 = { -2186,993f, 1089,684f, 29,079f };
		uParam0->f_5 = 78,939f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 26)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("remus");
		uParam0->f_2 = { -2158,688f, 1086,626f, 27,975f };
		uParam0->f_5 = 262,371f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 27)
	{
		*uParam0 = 2;
		uParam0->f_1 = joaat("dukes3");
		uParam0->f_2 = { -2164,622f, 1113,476f, 28,228f };
		uParam0->f_5 = 82,948f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 28)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -2185,534f, 1135,436f, 29,771f };
		uParam0->f_5 = 121,266f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 29)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -2189,618f, 1133,607f, 29,771f };
		uParam0->f_5 = 248,176f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 30)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -2155,376f, 1123,575f, 28,659f };
		uParam0->f_5 = 40,814f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 31)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -2190,006f, 1132,5f, 29,771f };
		uParam0->f_5 = 299,343f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 32)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -2202,929f, 1119,595f, 29,771f };
		uParam0->f_5 = 174,043f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 33)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -2199,087f, 1084,818f, 29,772f };
		uParam0->f_5 = 40,426f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 34)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -2165,921f, 1126,391f, 28,359f };
		uParam0->f_5 = 85,228f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 35)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -2067,447f, 984,539f, 28,668f };
		uParam0->f_5 = 4,602f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 36)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -2061,541f, 984,165f, 28,668f };
		uParam0->f_5 = 4,602f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 37)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -2053,578f, 984,469f, 28,668f };
		uParam0->f_5 = 4,602f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 38)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -1972,939f, 1237,736f, 28,668f };
		uParam0->f_5 = 192,002f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 39)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -2167,451f, 1093,677f, 28,666f };
		uParam0->f_5 = 74,105f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 40)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -2189,986f, 1109,881f, 29,771f };
		uParam0->f_5 = 262,922f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 41)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -2176,759f, 1105,552f, 28,662f };
		uParam0->f_5 = 291,142f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 42)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_f_y_carclub_01");
		uParam0->f_2 = { -2146,979f, 1083,111f, 28,686f };
		uParam0->f_5 = 2,5f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 43)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2186,592f, 1135,125f, 29,771f };
		uParam0->f_5 = 302,826f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 44)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2166,739f, 1076,728f, 28,668f };
		uParam0->f_5 = 195,814f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 45)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2161,535f, 1078,041f, 28,668f };
		uParam0->f_5 = 190,814f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 46)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2173,829f, 1134,234f, 28,658f };
		uParam0->f_5 = 81,91f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 47)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2173,818f, 1127,106f, 28,659f };
		uParam0->f_5 = 81,708f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 48)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2155,852f, 1124,458f, 28,659f };
		uParam0->f_5 = 204,001f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 49)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2204,262f, 1123,472f, 29,771f };
		uParam0->f_5 = 243,383f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 50)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2203,077f, 1121,944f, 29,771f };
		uParam0->f_5 = 356,754f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 51)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2202,377f, 1123,428f, 29,771f };
		uParam0->f_5 = 108,708f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 52)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2201,697f, 1118,357f, 29,771f };
		uParam0->f_5 = 116,051f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 53)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2173,74f, 1128,388f, 28,659f };
		uParam0->f_5 = 123,225f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 54)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2199,776f, 1085,704f, 29,772f };
		uParam0->f_5 = 230,454f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 55)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2174,801f, 1095,769f, 28,665f };
		uParam0->f_5 = 109,413f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 56)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2188,647f, 1109,457f, 29,771f };
		uParam0->f_5 = 95,778f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 57)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2167,494f, 1113,8f, 28,659f };
		uParam0->f_5 = 276,041f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 58)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2202,1f, 1148,97f, 29,771f };
		uParam0->f_5 = 192,541f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 59)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2201,614f, 1147,849f, 29,771f };
		uParam0->f_5 = 17,325f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 60)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2063,803f, 984,474f, 28,668f };
		uParam0->f_5 = 351,802f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 61)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2062,927f, 984,191f, 28,668f };
		uParam0->f_5 = 357,402f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 62)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2052,328f, 984,154f, 28,668f };
		uParam0->f_5 = 7,602f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 63)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -1962,712f, 1237,788f, 28,668f };
		uParam0->f_5 = 192,001f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 64)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -1971,941f, 1238,135f, 28,668f };
		uParam0->f_5 = 147,341f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 65)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2167,429f, 1096,591f, 28,666f };
		uParam0->f_5 = 279,722f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 66)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2168,691f, 1094,195f, 28,666f };
		uParam0->f_5 = 263,663f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 67)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2175,549f, 1105,981f, 28,662f };
		uParam0->f_5 = 106,49f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 68)
	{
		*uParam0 = 1;
		uParam0->f_1 = joaat("a_m_y_carclub_01");
		uParam0->f_2 = { -2146,711f, 1080,604f, 28,667f };
		uParam0->f_5 = 44,585f;
		uParam0->f_8 = 1;
	}
	else if (iParam1 == 69)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("prop_amb_phone");
		uParam0->f_2 = { -2188,066f, 1133,218f, 29,6579f };
		uParam0->f_5 = 196,052f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 70)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("prop_amb_phone");
		uParam0->f_2 = { -2164,229f, 1097,166f, 29,24f };
		uParam0->f_5 = 196,052f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 71)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("prop_amb_phone");
		uParam0->f_2 = { -2187,425f, 1119,407f, 30,001f };
		uParam0->f_5 = 196,052f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 72)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("prop_amb_phone");
		uParam0->f_2 = { -2186,842f, 1086,662f, 30,177f };
		uParam0->f_5 = 196,052f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 73)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("prop_amb_phone");
		uParam0->f_2 = { -2185,955f, 1109,241f, 30,236f };
		uParam0->f_5 = 196,052f;
		uParam0->f_8 = 0;
	}
	else if (iParam1 == 74)
	{
		*uParam0 = 3;
		uParam0->f_1 = joaat("prop_amb_phone");
		uParam0->f_2 = { -2190,006f, 1132,5f, 35f };
		uParam0->f_5 = 196,052f;
		uParam0->f_8 = 1;
	}
	return *uParam0 != 0;
}

void func_106()
{
	if (unk_0x486FF5D06E9659F1(joaat("fm_mission_creator")) == 0 || Global_1836583 == 0)
	{
		iLocal_18 = 3;
	}
	if (iLocal_19 != 0)
	{
		iLocal_18 = 3;
	}
	if (iLocal_19 == 0)
	{
		iLocal_19 = Global_1836583;
	}
	Global_1836578 = 0;
	iLocal_18 = 1;
}

