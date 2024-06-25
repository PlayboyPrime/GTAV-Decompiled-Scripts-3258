void __EntryFunction__()
{
	unk_0x51CC1333A10C4E09();
	func_1("main_install", 1424);
}

void func_1(char* sParam0, int iParam1)
{
	unk_0x97A5024CE91641F1(sParam0);
	while (!unk_0xA6E4F7A73ABC4A76(sParam0))
	{
		system::wait(0);
		unk_0x97A5024CE91641F1(sParam0);
	}
	system::start_new_script(sParam0, iParam1);
}

