#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_0 = -1;
	unk_0x51CC1333A10C4E09();
	unk_0xECFC57F5F11BCD83("prologue06_int");
	unk_0xECFC57F5F11BCD83("prologue01");
	unk_0xECFC57F5F11BCD83("prologue02");
	unk_0xECFC57F5F11BCD83("prologue03");
	unk_0xECFC57F5F11BCD83("prologue04");
	unk_0xECFC57F5F11BCD83("prologue05");
	unk_0xECFC57F5F11BCD83("prologue06");
	unk_0xECFC57F5F11BCD83("prologuerd");
	unk_0xECFC57F5F11BCD83("Prologue01c");
	unk_0xECFC57F5F11BCD83("Prologue01d");
	unk_0xECFC57F5F11BCD83("Prologue01e");
	unk_0xECFC57F5F11BCD83("Prologue01f");
	unk_0xECFC57F5F11BCD83("Prologue01g");
	unk_0xECFC57F5F11BCD83("prologue01h");
	unk_0xECFC57F5F11BCD83("prologue01i");
	unk_0xECFC57F5F11BCD83("prologue01j");
	unk_0xECFC57F5F11BCD83("prologue01k");
	unk_0xECFC57F5F11BCD83("prologue01z");
	unk_0xECFC57F5F11BCD83("prologue03b");
	unk_0xECFC57F5F11BCD83("prologue04b");
	unk_0xECFC57F5F11BCD83("prologue05b");
	unk_0xECFC57F5F11BCD83("prologue06b");
	unk_0xECFC57F5F11BCD83("prologuerdb");
	unk_0xECFC57F5F11BCD83("prologue_occl");
	unk_0xECFC57F5F11BCD83("DES_ProTree_start");
	unk_0xECFC57F5F11BCD83("DES_ProTree_start_lod");
	unk_0xECFC57F5F11BCD83("prologue04_cover");
	unk_0xECFC57F5F11BCD83("prologue03_grv_fun");
	unk_0x5373E9377066509E("prologue03_grv_dug");
	unk_0x5373E9377066509E("prologue_grv_torch");
	unk_0x8BAB92052AD69AC5("prologue", 1);
	unk_0xEC9DAA34BBB4658C(joaat("csb_prolsec"));
	while (!unk_0x6252BC0DD8A320DB(joaat("csb_prolsec")))
	{
		system::wait(0);
	}
	unk_0x52E0301351FCDEC5(unk_0x259BE71D8A81D4FA(), joaat("csb_prolsec"));
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xB2BD5837A8D3CEDA(unk_0x4A8C381C258A124D(), 5313,8f, -5207,2f, 83,5f, 1, 0, 0, 1);
		unk_0x5C96CEA06531AB03(unk_0x4A8C381C258A124D(), 169,2f);
	}
	unk_0x37B894853929BF1A(0);
	unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
	unk_0x4A3280817398D754(5312,996f, -5208,671f, 83,90526f, 10f, 0);
	iVar0 = unk_0x1DD05E817C89C737() + 10000;
	while (!unk_0x9E2D35FA908F57B4() && unk_0x1DD05E817C89C737() < iVar0)
	{
		system::wait(0);
	}
	unk_0xCD17096A98584C2B();
	unk_0xCAC4020CCF361AC8("MISSION_FAILED_SCENE");
	unk_0x10B228D2FDB7AF16(2500);
	unk_0x6981C3213B841071();
	unk_0xF2CB0224D3BE0B42("NG_INSTALL", 0);
	while (true)
	{
		if (!unk_0x9390801B06EE998F())
		{
			unk_0x10B228D2FDB7AF16(0);
		}
		unk_0x81645EE95A114FAE(0,5f, 0,5f, 1f, 1f, 0, 0, 0, 255, 0);
		unk_0x81645EE95A114FAE(0,5f, 0,5f, 0,8f, 0,8f, 20, 20, 20, 255, 0);
		unk_0xBFE94E91C83D8794(0,5f, 0,5f);
		unk_0xEAF65721ACB2FDFB(1);
		if (system::timera() > 10000 && unk_0xDCB78A15E5F495DC(0))
		{
			iLocal_0 = unk_0xC5935DFB3F39785A(0, 5);
			if ((iLocal_0 - iLocal_1) != 0)
			{
				iLocal_1 = iLocal_0;
				system::settimera(0);
			}
		}
		else
		{
			switch (iLocal_0)
			{
				case 0:
					func_1(0,5f, 0,4f, "NG_INST_TT_1", 0);
					break;
				
				case 1:
					func_1(0,5f, 0,4f, "NG_INST_TT_2", 0);
					break;
				
				case 2:
					func_1(0,5f, 0,4f, "NG_INST_TT_3", 0);
					break;
				
				case 3:
					func_1(0,5f, 0,4f, "NG_INST_TT_4", 0);
					break;
				
				case 4:
					func_1(0,5f, 0,4f, "NG_INST_TT_5", 0);
					break;
				}
		}
		unk_0x6C978B200DAA54DE();
		if (unk_0xD7F2FC1281F868FD())
		{
			unk_0x129E6CC3506106AC();
			return;
		}
		system::wait(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, iParam3);
}

