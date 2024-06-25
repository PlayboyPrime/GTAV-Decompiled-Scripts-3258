#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x96CFB880BAC634CE(2))
	{
		func_1();
	}
	if (unk_0xFC8BFE4B41177C22(uScriptParam_3))
	{
		unk_0x5D7CD709B34C90F0(uScriptParam_3, 1);
	}
	while (true)
	{
		system::wait(0);
		if (unk_0xFC8BFE4B41177C22(uScriptParam_3))
		{
			if (unk_0x71C1A46B17126AA4(uScriptParam_3) && unk_0x486FF5D06E9659F1(joaat("michael2")) > 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (unk_0xF98CC1C0E657B6CB(uScriptParam_3))
						{
							unk_0x80813AC549A1E8AE("MISSMIC2");
							if (unk_0xE100DD4F82A51BDE("MISSMIC2"))
							{
								unk_0x5ED9595F4AC7D134(uScriptParam_3, "beefsplitter_loop", "MISSMIC2", 1f, 1, 0, 0, 0, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
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
	func_2("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x268BE77F77533D03("MISSMIC2");
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

