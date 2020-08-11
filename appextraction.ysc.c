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
	if (iLocal_20 == 0x00000000)
	{
		func_11();
		func_10();
		iLocal_20 = 0x00000001;
		SYSTEM::SETTIMERA(0x00000000);
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (Global_4C1E.f_1 != 0x00000009)
		{
			switch (Global_4C1E.f_1)
			{
				case 0x00000007:
					if (iLocal_20 == 0x00000001 && SYSTEM::TIMERA() > 0x000005DC)
					{
						func_6();
						SYSTEM::SETTIMERA(0x00000000);
					}
					break;
				
				case 0x00000008:
					if (func_5(0x00000002, Global_4BFE, 0x00000000))
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

int func_5(int iParam0, int iParam1, int iParam2)
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

void func_6()
{
	func_7();
}

void func_7()
{
	func_9(Global_4C0B, "SET_DATA_SLOT_EMPTY", 24f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000018);
	unk_0x3CAEA85DA607305E(0x00000000);
	if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000017))
	{
		unk_0x1200CC973A2399C8(0x00000000);
		func_8("CELL_EXTBYOU");
		unk_0x3CAEA85DA607305E(Global_4126C6);
		unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4127DE));
		unk_0x3CAEA85DA607305E(Global_4126C7);
		unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4127DE.f_1));
		unk_0x3CAEA85DA607305E(Global_4126C8);
		unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4127DE.f_2));
		func_8("CELL_BODYG");
		unk_0x3CAEA85DA607305E(Global_4126C9);
		unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4127E1));
		unk_0x3CAEA85DA607305E(Global_4126CA);
		unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4127E1.f_1));
		unk_0x3CAEA85DA607305E(Global_4126CB);
		unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4127E1.f_2));
	}
	else
	{
		unk_0x1200CC973A2399C8(0x00000000);
		func_8("CELL_EXTBYOU");
		unk_0x3CAEA85DA607305E(Global_4126C9);
		unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4127E1));
		unk_0x3CAEA85DA607305E(Global_4126CA);
		unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4127E1.f_1));
		unk_0x3CAEA85DA607305E(Global_4126CB);
		unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4127E1.f_2));
		func_8("CELL_EXTBTARG");
		unk_0x3CAEA85DA607305E(Global_4126C6);
		unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4127DE));
		unk_0x3CAEA85DA607305E(Global_4126C7);
		unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4127DE.f_1));
		unk_0x3CAEA85DA607305E(Global_4126C8);
		unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(Global_4127DE.f_2));
	}
	unk_0x7E60D21B163E9D56();
	func_9(Global_4C0B, "DISPLAY_VIEW", 24f, SYSTEM::TO_FLOAT(0x00000001), 0xBF800000, 0xBF800000, 0xBF800000);
}

void func_8(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_10()
{
	func_7();
}

void func_11()
{
	if (Global_4C12)
	{
		func_12(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_12(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		func_12(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_12(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	func_12(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
}

void func_12(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_8(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_8(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_8(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_8(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_8(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

