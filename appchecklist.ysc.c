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
	int iLocal_20[94] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[5] = { 0, 0, 0, 0, 0 };
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = 0;
	struct<6> Local_32[5];
	int iLocal_33[5] = { 0, 0, 0, 0, 0 };
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
	func_33(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_31();
	func_30();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (Global_4C1E.f_1 != 0x00000009)
		{
			switch (Global_4C1E.f_1)
			{
				case 0x00000007:
					func_25();
					if (iLocal_25 == 0x00000000)
					{
						func_15();
					}
					break;
				
				case 0x00000008:
					if (iLocal_25 == 0x00000002)
					{
						func_25();
						if (bLocal_31)
						{
							func_10();
						}
					}
					if (iLocal_25 == 0x00000001)
					{
						func_25();
					}
					if (func_9(0x00000002, Global_4BFE, 0x00000000))
					{
						func_8();
						Global_4C08 = 0x00000001;
						if (iLocal_25 == 0x00000002 || iLocal_25 == 0x00000001)
						{
							func_33(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
							func_30();
							if (Global_4C1E.f_1 > 0x00000003)
							{
								Global_4C1E.f_1 = 0x00000007;
							}
						}
						if (iLocal_25 == 0x00000003)
						{
							func_33(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
							func_4();
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
	int iVar0;
	int iVar1;
	int iVar2;
	
	bLocal_31 = 0x00000000;
	func_31();
	iLocal_21 = 0x00000000;
	func_33(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	iVar0 = 0x00000000;
	if (Global_4C1A == 0x00000000)
	{
		while (iVar0 < 0x00000005)
		{
			func_7(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000012), SYSTEM::TO_FLOAT(iLocal_21), SYSTEM::TO_FLOAT(0x00000000), -1f, -1f, &(Local_32[iVar0 /*6*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			iLocal_26[iLocal_21] = iVar0;
			iLocal_21++;
			iVar0++;
		}
	}
	if (Global_4C1A == 0x00000001)
	{
		iVar1 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000005)
		{
			iLocal_33[iVar2] = 0x00000000;
			iVar2++;
		}
		iVar1 = (0x00000005 - 0x00000001);
		while (iVar0 < 0x00000005)
		{
			if (Local_32[iVar1 /*6*/].f_5 > 0x00000000)
			{
				if (iLocal_33[iVar1] == 0x00000000)
				{
					func_7(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000012), SYSTEM::TO_FLOAT(iLocal_21), SYSTEM::TO_FLOAT(0x00000000), -1f, -1f, &(Local_32[iVar1 /*6*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_26[iLocal_21] = iVar1;
					iLocal_21++;
					iLocal_33[iVar1] = 0x00000001;
				}
			}
			if (iVar1 > 0x00000000)
			{
				iVar1 = (iVar1 - 0x00000001);
			}
			iVar0++;
		}
	}
	if (iLocal_21 == 0x00000000)
	{
		func_7(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000012), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000000), -1f, -1f, "CELL_3092", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		bLocal_31 = 0x00000001;
	}
	func_33(Global_4C0B, "DISPLAY_VIEW", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_5(Global_4C0B, "SET_HEADER", "CELL_23", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	if (Global_4C12)
	{
		func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
	}
	else
	{
		func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
	}
	iLocal_25 = 0x00000002;
}

void func_5(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_6(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_6(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_6(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_6(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_6(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_6(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
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
		func_6(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_6(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_6(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_6(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_6(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_8()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Back", &Global_4C13, 0x00000001);
	}
}

int func_9(int iParam0, int iParam1, int iParam2)
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

void func_10()
{
	int iVar0;
	
	if (Global_4C08 == 0x00000000)
	{
		if (func_9(0x00000002, Global_4BFF, 0x00000000))
		{
			func_12();
			Global_4C08 = 0x00000001;
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
			iLocal_30 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(iLocal_30))
			{
				SYSTEM::WAIT(0x00000000);
			}
			iVar0 = unk_0xA52833FE33F41C53(iLocal_30);
			iLocal_23 = iLocal_26[iVar0];
			if (Global_4C1E.f_1 > 0x00000003)
			{
				Global_4C1E.f_1 = 0x00000008;
			}
			func_33(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			if (iLocal_23 == 0x00000001)
			{
			}
			func_11();
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000012);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x7ACC3006A87F8B39("CELL_3206");
			unk_0x6D99DF8263D35CE5(iLocal_27);
			unk_0x779B34565F4D71B1();
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000012);
			unk_0x3CAEA85DA607305E(0x00000001);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x7ACC3006A87F8B39("CELL_3101");
			unk_0x6D99DF8263D35CE5(iLocal_28);
			unk_0x779B34565F4D71B1();
			unk_0x7E60D21B163E9D56();
			func_33(Global_4C0B, "DISPLAY_VIEW", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_5(Global_4C0B, "SET_HEADER", &(Local_32[iLocal_23 /*6*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			if (Global_4C12)
			{
				func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			iLocal_25 = 0x00000003;
		}
	}
}

void func_11()
{
	switch (iLocal_23)
	{
		case 0x00000000:
			iLocal_27 = Global_1B2FD;
			iLocal_28 = Global_1B30E;
			break;
		
		case 0x00000001:
			iLocal_27 = (Global_1B2FE + Global_1B2FF);
			iLocal_28 = (Global_1B30F + Global_1B310);
			break;
		
		case 0x00000002:
			iLocal_27 = Global_1B300;
			iLocal_28 = Global_1B311;
			break;
		
		case 0x00000003:
			iLocal_27 = Global_1B301;
			iLocal_28 = Global_1B312;
			break;
		
		case 0x00000004:
			iLocal_27 = (Global_1B302 + Global_1B303);
			iLocal_28 = (Global_1B313 + Global_1B314);
			break;
		
		default:
			iLocal_27 = 0x00000000;
			iLocal_28 = 0x00000000;
			break;
	}
}

void func_12()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Accept", &Global_4C13, 0x00000001);
		func_13();
	}
}

void func_13()
{
	if (func_14())
	{
		unk_0x5A963FB0365294C8(0x00000005);
	}
}

int func_14()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		return 0x00000000;
	}
	iVar2 = 0x00000000;
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 0x00000004)
	{
		iVar2 = 0x00000001;
	}
	if (Global_4127DB || iVar2)
	{
		return 0x00000001;
	}
	return 0x00000001;
}

void func_15()
{
	if (Global_4C08 == 0x00000000)
	{
		if (func_9(0x00000002, Global_4BFF, 0x00000000))
		{
			func_12();
			Global_4C08 = 0x00000001;
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
			iLocal_30 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(iLocal_30))
			{
				SYSTEM::WAIT(0x00000000);
			}
			iLocal_29 = unk_0xA52833FE33F41C53(iLocal_30);
			if (Global_4C1E.f_1 > 0x00000003)
			{
				Global_4C1E.f_1 = 0x00000008;
				if (iLocal_29 == 0x00000000)
				{
					iLocal_25 = 0x00000001;
					func_16();
				}
				else
				{
					iLocal_25 = 0x00000002;
					func_4();
				}
			}
		}
	}
}

void func_16()
{
	int iVar0;
	
	iLocal_21 = 0x00000000;
	func_20();
	iVar0 = 0x00000000;
	func_33(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	if (func_17(0x00000000))
	{
		func_7(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000012), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0x00000000), -1f, -1f, "CELL_229", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		while (iVar0 < Global_16E31)
		{
			func_7(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000012), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0x00000000), -1f, -1f, &(Global_16D60[iVar0 /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			iLocal_21++;
			iLocal_20[iVar0] = iVar0;
			iVar0++;
		}
	}
	if (iLocal_20[0x00000001] == 0x00000063)
	{
	}
	func_33(Global_4C0B, "DISPLAY_VIEW", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_5(Global_4C0B, "SET_HEADER", "CELL_3301", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	if (func_17(0x00000000) || Global_16E31 == 0x00000000)
	{
		func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
		if (Global_4C12)
		{
			func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		else
		{
			func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	else if (Global_4C12)
	{
		func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	iLocal_25 = 0x00000001;
}

int func_17(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_18(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_18(int iParam0)
{
	return func_19(iParam0, Global_A1D7);
}

int func_19(int iParam0, int iParam1)
{
	if (iParam1 == 0x0000000F)
	{
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		return 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000010:
			switch (iParam1)
			{
				case 0x00000009:
				case 0x0000000A:
				case 0x00000007:
				case 0x0000000D:
				case 0x0000000E:
					return 0x00000000;
					break;
			}
			return 0x00000001;
			break;
		
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000008:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000004:
			if (iParam1 == 0x00000011)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
		case 0x00000008:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000007:
			if (iParam1 == 0x00000006)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000000A:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000011:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000B:
			if (iParam1 == 0x00000005)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000011:
			switch (iParam1)
			{
				case 0x00000011:
				case 0x0000000C:
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x00000012:
		case 0x0000000C:
			switch (iParam1)
			{
				case 0x00000005:
				case 0x00000006:
				case 0x00000008:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000D:
			switch (iParam1)
			{
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
		
		case 0x0000000E:
			switch (iParam1)
			{
				case 0x00000005:
					return 0x00000001;
					break;
			}
			break;
	}
	return 0x00000000;
}

void func_20()
{
	int iVar0;
	int iVar1;
	
	Global_16E31 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		if (Global_15D98[iVar0 /*5*/] != 0xFFFFFFFF)
		{
			if (Global_16E31 < 0x00000034)
			{
				iVar1 = Global_12C5B.f_6D[Global_15D98[iVar0 /*5*/] /*4*/];
				MemCopy(&(Global_16D60[Global_16E31 /*4*/]), {func_24(iVar1)}, 0x00000004);
				Global_16E31++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000003F)
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar0 /*6*/], 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar0 /*6*/], 0x00000001)) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar0 /*6*/], 0x00000003))
		{
			if (Global_16E31 < 0x00000034)
			{
				MemCopy(&(Global_16D60[Global_16E31 /*4*/]), {func_22(iVar0)}, 0x00000004);
				Global_16E31++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000014)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[0x00000000], iVar0))
		{
			if (Global_16E31 < 0x00000034)
			{
				StringCopy(&(Global_16D60[Global_16E31 /*4*/]), func_21(iVar0), 16);
				Global_16E31++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MG_BJUM";
			break;
		
		case 0x00000001:
			return "MG_DART";
			break;
		
		case 0x00000002:
			return "MG_GOLF";
			break;
		
		case 0x00000003:
			return "MG_HUNT";
			break;
		
		case 0x00000004:
			return "MG_OFFR";
			break;
		
		case 0x00000005:
			return "MG_PILO";
			break;
		
		case 0x00000006:
			return "MG_RMPG";
			break;
		
		case 0x00000007:
			return "MG_SERA";
			break;
		
		case 0x00000008:
			return "MG_SRAC";
			break;
		
		case 0x00000009:
			return "MG_STRP";
			break;
		
		case 0x0000000A:
			return "MG_STNT";
			break;
		
		case 0x0000000B:
			return "MG_SHTR";
			break;
		
		case 0x0000000C:
			return "MG_TAXI";
			break;
		
		case 0x0000000D:
			return "MG_TENN";
			break;
		
		case 0x0000000E:
			return "MG_TOWI";
			break;
		
		case 0x0000000F:
			return "MG_TRFA";
			break;
		
		case 0x00000010:
			return "MG_TRFG";
			break;
		
		case 0x00000011:
			return "MG_TRIA";
			break;
		
		case 0x00000012:
			return "MG_YOGA";
			break;
		
		case 0x00000013:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_22(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_23(iParam0) };
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_23(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 0x00000001:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 0x00000002:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 0x00000003:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 0x00000006:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 0x00000007:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 0x00000008:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 0x00000009:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 0x0000000A:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 0x0000000B:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 0x0000000C:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 0x0000000D:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 0x0000000E:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 0x0000000F:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 0x00000010:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 0x00000011:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 0x00000012:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 0x00000013:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 0x00000014:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 0x00000015:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 0x00000016:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 0x00000017:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 0x00000018:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 0x00000019:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 0x0000001A:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 0x0000001B:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 0x0000001C:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 0x0000001D:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 0x0000001E:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 0x0000001F:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 0x00000020:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 0x00000021:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 0x00000022:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 0x00000023:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 0x00000024:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 0x00000025:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 0x00000026:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 0x00000027:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 0x00000028:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 0x00000029:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 0x0000002A:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 0x0000002B:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 0x0000002C:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 0x0000002D:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 0x0000002E:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 0x0000002F:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 0x00000030:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 0x00000031:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 0x00000032:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 0x00000033:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 0x00000034:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 0x00000035:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 0x00000036:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 0x00000037:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 0x00000038:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 0x00000039:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 0x0000003A:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 0x0000003B:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 0x0000003C:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 0x0000003D:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 0x0000003E:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<2> func_24(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_15DBC[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 0x0000005A)
	{
		switch (Global_1B416.f_2378.f_63.f_CD[0x00000007])
		{
			case 0x00000001:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 0x00000002:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

void func_25()
{
	if (iLocal_24)
	{
		if (SYSTEM::TIMERA() > 0x00000032)
		{
			iLocal_24 = 0x00000000;
		}
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (func_9(0x00000002, 0x000000B5, 0x00000000))
		{
			if (iLocal_22 > 0x00000000)
			{
				iLocal_22 = (iLocal_22 - 0x00000001);
			}
			func_28();
		}
		if (func_9(0x00000002, 0x000000B4, 0x00000000))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_21)
			{
				iLocal_22 = 0x00000000;
			}
			func_26();
		}
	}
	if (iLocal_24 == 0x00000000)
	{
		if (func_9(0x00000002, Global_4C06, 0x00000000))
		{
			if (iLocal_22 > 0x00000000)
			{
				iLocal_22 = (iLocal_22 - 0x00000001);
			}
			func_28();
			iLocal_24 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
		if (func_9(0x00000002, Global_4C07, 0x00000000))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_21)
			{
				iLocal_22 = 0x00000000;
			}
			func_26();
			iLocal_24 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
	}
}

void func_26()
{
	func_33(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(0x00000003), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
	func_27();
}

void func_27()
{
	if (func_14())
	{
		if (Global_4CD5 == 0x00000000)
		{
			unk_0x5A963FB0365294C8(0x00000002);
		}
		else
		{
			unk_0x5A963FB0365294C8(0x00000001);
		}
	}
}

void func_28()
{
	func_33(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(0x00000001), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
	func_29();
}

void func_29()
{
	if (func_14())
	{
		if (Global_4CD5 == 0x00000000)
		{
			unk_0x5A963FB0365294C8(0x00000001);
		}
		else
		{
			unk_0x5A963FB0365294C8(0x00000002);
		}
	}
}

void func_30()
{
	func_33(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_7(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000012), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000000), -1f, -1f, "CELL_3301", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	func_7(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000012), SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(0x00000000), -1f, -1f, "CELL_3302", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	iLocal_21 = 0x00000002;
	func_33(Global_4C0B, "DISPLAY_VIEW", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_5(Global_4C0B, "SET_HEADER", "CELL_23", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	if (Global_4C12)
	{
		func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	iLocal_25 = 0x00000000;
}

void func_31()
{
	func_32(0x00000000, "CELL_3001", 0x00000001, Global_1B30E);
	func_32(0x00000001, "CELL_3008", 0x00000003, Global_1B30E);
	func_32(0x00000002, "CELL_3004", 0x00000007, Global_1B311);
	func_32(0x00000003, "CELL_3005", 0x00000009, Global_1B312);
	func_32(0x00000004, "CELL_3007", 0x0000000B, Global_1B313);
}

void func_32(int iParam0, char* sParam1, int iParam2, var uParam3)
{
	StringCopy(&(Local_32[iParam0 /*6*/]), sParam1, 16);
	Local_32[iParam0 /*6*/].f_4 = iParam2;
	Local_32[iParam0 /*6*/].f_5 = uParam3;
	if (Local_32[0x00000000 /*6*/].f_4 == 0x00000001)
	{
	}
}

void func_33(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

