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
	struct<26> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	char cLocal_27[32] = "";
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
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
	iLocal_26 = 0xFFFFFF9D;
	StringCopy(&cLocal_27, "TRACKID", 32);
	unk_0xB57F88F0123F4C38();
	unk_0xD7992BEF7A9D109E(&cLocal_27, 0x00000001);
	while (!unk_0x67C1D9E5B91B2E37(0x00000001))
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_15();
	func_14();
	func_11();
	SYSTEM::SETTIMERA(0x00000000);
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (iLocal_33)
		{
			if (iLocal_35 < 0x00000065)
			{
				if (SYSTEM::TIMERA() > 0x0000001E)
				{
					iLocal_35++;
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000017);
					unk_0x3CAEA85DA607305E(0x00000000);
					unk_0x3CAEA85DA607305E(0x00000001);
					func_10("CELL_4005");
					unk_0x3CAEA85DA607305E(iLocal_35);
					unk_0x7E60D21B163E9D56();
					func_9(Global_4C0B, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0x00000000), 0xBF800000, 0xBF800000, 0xBF800000);
					SYSTEM::SETTIMERA(0x00000000);
				}
			}
			else
			{
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000017);
				unk_0x3CAEA85DA607305E(0x00000000);
				unk_0x3CAEA85DA607305E(0x00000002);
				func_10("CELL_4006");
				func_10("CELL_4007");
				unk_0x7E60D21B163E9D56();
				func_9(Global_4C0B, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0x00000000), 0xBF800000, 0xBF800000, 0xBF800000);
				iLocal_34 = 0x00000001;
				iLocal_33 = 0x00000000;
			}
		}
		if (Global_4C1E.f_1 != 0x00000009)
		{
			switch (Global_4C1E.f_1)
			{
				case 0x00000007:
					func_8();
					if (iLocal_32 == 0x00000000)
					{
						func_6();
					}
					break;
				
				case 0x00000008:
					if (func_5(0x00000002, Global_4BFE, 0x00000000))
					{
						func_4();
						iLocal_33 = 0x00000000;
						iLocal_34 = 0x00000000;
						Global_4C08 = 0x00000001;
						func_14();
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
	iLocal_33 = 0x00000000;
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
	if (SYSTEM::TIMERA() > 0x00000898)
	{
		if (Global_4C12)
		{
			func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		else
		{
			func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		iLocal_32 = 0x00000001;
	}
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_10(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_10(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_10(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_10(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_10(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_8()
{
	if (Global_4C08 == 0x00000000)
	{
		if (func_5(0x00000002, Global_4BFF, 0x00000000))
		{
			if ((iLocal_32 && iLocal_34 == 0x00000000) && iLocal_33 == 0x00000000)
			{
				iLocal_35 = 0x00000000;
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000017);
				unk_0x3CAEA85DA607305E(0x00000000);
				unk_0x3CAEA85DA607305E(0x00000001);
				func_10("CELL_4005");
				unk_0x3CAEA85DA607305E(iLocal_35);
				unk_0x7E60D21B163E9D56();
				func_9(Global_4C0B, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0x00000000), 0xBF800000, 0xBF800000, 0xBF800000);
				if (Global_4C12)
				{
					func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
				iLocal_33 = 0x00000001;
				SYSTEM::SETTIMERA(0x00000000);
			}
		}
	}
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

void func_10(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_11()
{
	int iVar0;
	
	func_13(0x00000086, 0x00000001);
	iVar0 = unk_0xFC21F7E0F4D92523();
	switch (func_12(iVar0))
	{
		case 0x00000001:
			func_13(0x00000052, 0x00000001);
			break;
		
		case 0x00000002:
			func_13(0x00000051, 0x00000001);
			break;
		
		default:
			func_13(0x00000053, 0x00000001);
			break;
	}
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			return 0x00000003;
			break;
		
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
			return 0x00000004;
			break;
		
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
			return 0x00000002;
			break;
	}
	return 0x00000000;
}

void func_13(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0x00000001)
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/])
	{
		unk_0x6FB46C25CCB7E6D5(Global_DFA6[iParam0 /*7*/].f_1, &iVar0, 0xFFFFFFFF);
		iVar0 = (iVar0 + iParam1);
		unk_0xCDC520E5E48E63D9(Global_DFA6[iParam0 /*7*/].f_1, iVar0, 0x00000001);
	}
}

void func_14()
{
	unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000017);
	unk_0x3CAEA85DA607305E(0x00000000);
	unk_0x3CAEA85DA607305E(0x00000000);
	func_10("CELL_4001");
	func_10(&Local_20);
	func_10(&(Local_20.f_10));
	func_10("CELL_4002");
	unk_0x3CAEA85DA607305E(Local_20.f_18);
	func_10("CELL_4003");
	func_10(&(Local_20.f_19));
	func_10("CELL_4004");
	unk_0x7E60D21B163E9D56();
	func_9(Global_4C0B, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0x00000000), 0xBF800000, 0xBF800000, 0xBF800000);
	if (Global_4C12)
	{
		if (iLocal_32)
		{
			func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		else
		{
			func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		if (iLocal_32)
		{
			func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		else
		{
			func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
}

void func_15()
{
	iLocal_26 = unk_0xBA6FCD725A9D53C5();
	StringCopy(&Local_20, "", 64);
	StringIntConCat(&Local_20, iLocal_26, 64);
	StringConCat(&Local_20, "S", 64);
	StringCopy(&(Local_20.f_10), "", 32);
	StringIntConCat(&(Local_20.f_10), iLocal_26, 32);
	StringConCat(&(Local_20.f_10), "A", 32);
	StringCopy(&(Local_20.f_19), unk_0x04DF2A8CF5EBE3B0(), 24);
	if (!unk_0xEF07223F00EBE9C9(&Local_20))
	{
		StringCopy(&Local_20, "CELL_195", 64);
	}
	if (!unk_0xEF07223F00EBE9C9(&(Local_20.f_10)))
	{
		StringCopy(&(Local_20.f_10), "CELL_195", 32);
		StringCopy(&(Local_20.f_19), "CELL_195", 24);
	}
}

