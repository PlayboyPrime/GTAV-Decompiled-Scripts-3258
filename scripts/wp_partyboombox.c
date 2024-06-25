#region Local Var
	int iLocal_0 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x486FF5D06E9659F1(joaat("wp_partyboombox")) > 1)
	{
		unk_0xBBC29EBE6E1A48FA();
	}
	if (unk_0x96CFB880BAC634CE(18))
	{
		func_1();
	}
	while (true)
	{
		system::wait(0);
		if (!unk_0x173751E886F8E9AB())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (unk_0x5295501D0862870D() >= 22 || unk_0x5295501D0862870D() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!unk_0x5AEB336317DC4151("ID2_21_G_Night"))
				{
					unk_0xECFC57F5F11BCD83("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!unk_0x787F8EE1F6FBDC6D() && !unk_0x3555462DB47B7AB1())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (unk_0x5AEB336317DC4151("ID2_21_G_Night"))
	{
		unk_0x5373E9377066509E("ID2_21_G_Night");
	}
	unk_0xBBC29EBE6E1A48FA();
}

