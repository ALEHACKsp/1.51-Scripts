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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 0x00000001;
	iLocal_3 = 0x00000086;
	iLocal_4 = 0x00000086;
	iLocal_5 = 0x00000001;
	iLocal_6 = 0x00000001;
	iLocal_7 = 0x00000001;
	iLocal_8 = 0x00000086;
	iLocal_9 = 0x00000001;
	iLocal_10 = 0x0000000C;
	iLocal_11 = 0x0000000C;
	fLocal_14 = 0.001f;
	iLocal_17 = 0xFFFFFFFF;
	unk_0xB57F88F0123F4C38();
	iLocal_21 = 0x00000000;
	if (iLocal_20 == 0x00000000)
	{
		func_10();
		func_9();
		iLocal_20 = 0x00000001;
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (Global_4C1E.f_1 != 0x00000009)
		{
			switch (Global_4C1E.f_1)
			{
				case 0x00000007:
					if (iLocal_21 == 0x00000001)
					{
						if (func_8(0x00000002, Global_4BFF, 0x00000000))
						{
							unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", 0x00000001);
							Global_4C08 = 0x00000001;
							func_10();
							func_5();
							SYSTEM::SETTIMERA(0x00000000);
							SYSTEM::SETTIMERB(0x00000000);
						}
					}
					if (iLocal_21 == 0x00000002)
					{
						if (SYSTEM::TIMERB() > 0x000001F3)
						{
							SYSTEM::SETTIMERB(0x00000000);
						}
						if (SYSTEM::TIMERA() > 0x00000898)
						{
							iLocal_21 = 0x00000003;
						}
					}
					if (iLocal_21 == 0x00000003)
					{
						Global_180427 = 0x00000001;
					}
					break;
				
				case 0x00000008:
					if (func_8(0x00000002, Global_4BFE, 0x00000000))
					{
						func_4();
						Global_4C08 = 0x00000001;
						if (Global_4C1E.f_1 > 0x00000003)
						{
							Global_4C1E.f_1 = 0x00000007;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_4C20 = 0x00000006;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000003) || Global_4C1E.f_1 == 0x00000000) || Global_4BE6 == 0x00000001)
	{
		Global_4C11 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_2()
{
	unk_0x42740B44BA8D7B43("DLC_MPHEIST/HEIST_HACK_SNAKE");
	unk_0x10FAF14A60A0DBE1();
}

int func_3()
{
	if (Global_1F1A == 0x00000001 || Global_4C1E.f_1 < 0x00000007)
	{
		Global_4C11 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_4()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Back", &Global_4C13, 0x00000001);
	}
}

void func_5()
{
	if (Global_4C12)
	{
		func_6(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_6(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		func_6(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_6(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	func_6(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
}

void func_6(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		func_7(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_7(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_7(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_7(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_7(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_7(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_8(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xBFC0798A6E3417F9(iParam0, iParam1) || (iParam2 == 0x00000001 && unk_0xD245978525608929(iParam0, iParam1)))
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0xDAC65F45B0B2D176() == 0x00000000 || (unk_0x4FD68D5821EE3E19() && unk_0x91E3F625EF57450D(0x00000002)))
			{
				return 0x00000000;
			}
		}
		if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_9()
{
	if (Global_4C12)
	{
		func_6(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_6(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		func_6(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_6(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	func_6(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
}

void func_10()
{
	if (iLocal_21 == 0x00000000)
	{
		unk_0xAE317D00A5A55DF6("DLC_MPHEIST/HEIST_HACK_SNAKE", 0x00000000, 0xFFFFFFFF);
		while (unk_0xAE317D00A5A55DF6("DLC_MPHEIST/HEIST_HACK_SNAKE", 0x00000000, 0xFFFFFFFF) == 0x00000000)
		{
			SYSTEM::WAIT(0x00000000);
		}
		func_11(Global_4C0B, "SET_DATA_SLOT_EMPTY", 23f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0x00000017);
		unk_0x3CAEA85DA607305E(0x00000000);
		unk_0x3CAEA85DA607305E(0xFFFFFF9D);
		unk_0x3CAEA85DA607305E(0x00000000);
		unk_0x3CAEA85DA607305E(0x00000064);
		unk_0x3CAEA85DA607305E(0x00000002);
		unk_0x1200CC973A2399C8(0x00000000);
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBE, 0x00000001))
		{
			unk_0x7C19E5E4784BD7CF(0f);
		}
		unk_0x7E60D21B163E9D56();
		func_11(Global_4C0B, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0x00000001), 0xBF800000, 0xBF800000, 0xBF800000);
		iLocal_21 = 0x00000001;
	}
	else if (iLocal_21 == 0x00000001)
	{
		func_11(Global_4C0B, "SET_DATA_SLOT_EMPTY", 23f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0x00000017);
		unk_0x3CAEA85DA607305E(0x00000000);
		unk_0x3CAEA85DA607305E(0xFFFFFF9D);
		unk_0x3CAEA85DA607305E(0x00000000);
		unk_0x3CAEA85DA607305E(0x00000064);
		unk_0x3CAEA85DA607305E(0x00000003);
		unk_0x1200CC973A2399C8(0x00000000);
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBE, 0x00000001))
		{
			unk_0x7C19E5E4784BD7CF(0f);
		}
		unk_0x7E60D21B163E9D56();
		func_11(Global_4C0B, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0x00000001), 0xBF800000, 0xBF800000, 0xBF800000);
		iLocal_21 = 0x00000002;
	}
}

void func_11(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	unk_0x7E60D21B163E9D56();
}

