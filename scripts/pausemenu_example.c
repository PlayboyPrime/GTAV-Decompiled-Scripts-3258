#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	switch (ScriptParam_0.f_0)
	{
		case 3:
			while (true)
			{
				system::wait(5000);
			}
			break;
		
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				func_2(1, 0, -1705870862, 25, 1, "PM_PANE_AUD", 0, 0);
				func_2(1, 1, -1705870862, 50, 1, "PM_PANE_DIS", 0, 0);
				func_1(1);
			}
			if (ScriptParam_0.f_1 == -1705871862)
			{
			}
			break;
		
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case -1931845307:
					break;
				
				case -1705871862:
					switch (ScriptParam_0.f_3)
					{
						case 25:
							break;
						
						case 50:
							break;
					}
					break;
			}
			break;
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_1(int iParam0)
{
	if (unk_0xF3F7B05FC4684A7C("DISPLAY_DATA_SLOT"))
	{
		unk_0x330108B080A2132F(iParam0);
		unk_0xE6B753D52F4CA222();
	}
}

void func_2(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6, int iParam7)
{
	if (unk_0xF3F7B05FC4684A7C("SET_DATA_SLOT"))
	{
		unk_0x330108B080A2132F(iParam0);
		unk_0x330108B080A2132F(iParam1);
		unk_0x330108B080A2132F(iParam2);
		unk_0x330108B080A2132F(iParam3);
		unk_0x330108B080A2132F(iParam7);
		unk_0x330108B080A2132F(0);
		if (bParam4)
		{
			unk_0x330108B080A2132F(1);
		}
		else
		{
			unk_0x330108B080A2132F(0);
		}
		if (iParam6 == 0)
		{
			func_3(sParam5);
		}
		else
		{
			unk_0xCE3E870AC37B4253(sParam5);
		}
		unk_0xE6B753D52F4CA222();
	}
}

void func_3(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

