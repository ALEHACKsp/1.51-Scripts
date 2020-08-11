void __EntryFunction__()
{
	unk_0xB57F88F0123F4C38();
	func_1("main_install", 0x00000590);
}

void func_1(char* sParam0, int iParam1)
{
	unk_0x92DCE5C81176D2B4(sParam0);
	while (!unk_0x1FBF08B001C4788A(sParam0))
	{
		SYSTEM::WAIT(0x00000000);
		unk_0x92DCE5C81176D2B4(sParam0);
	}
	SYSTEM::START_NEW_SCRIPT(sParam0, iParam1);
}

