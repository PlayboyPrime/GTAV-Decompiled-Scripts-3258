#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	
	if (unk_0x96CFB880BAC634CE(2))
	{
		func_1();
	}
	while (true)
	{
		system::wait(0);
		if (unk_0xFC8BFE4B41177C22(uScriptParam_5))
		{
			if (unk_0x71C1A46B17126AA4(uScriptParam_5) && unk_0x486FF5D06E9659F1(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							uVar0 = unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D());
							if (unk_0xF8A8852F99E201DD(uVar0))
							{
								if (unk_0xD0B0D1BD29678350(uVar0))
								{
									if (unk_0x4B7DCB210992A9F7())
									{
										unk_0x8003D3C0115A1035();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x6F13318788EDDAD8())
						{
							if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
							{
								if (!unk_0xFC8BFE4B41177C22(uLocal_4))
								{
									uLocal_4 = unk_0x8366ABB82B1ABC59(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x9CFFB7009B578840(uLocal_3))
								{
									if (unk_0xFC8BFE4B41177C22(uLocal_4))
									{
										uVar0 = unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D());
										if (unk_0xF8A8852F99E201DD(uVar0))
										{
											if (unk_0xD0B0D1BD29678350(uVar0))
											{
												if (unk_0x4B7DCB210992A9F7())
												{
													uLocal_3 = unk_0x62750FD2BDD8BD49("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (unk_0x9CFFB7009B578840(uLocal_3))
	{
		unk_0x182120534CCF9023(uLocal_3, 0);
	}
	if (unk_0xFC8BFE4B41177C22(uLocal_4))
	{
		unk_0xB3B56385ECA230B4(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0xBBC29EBE6E1A48FA();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x1B79E937E91F40C3(uParam0, uParam0))
	{
	}
}

