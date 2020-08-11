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
	int iLocal_18[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 0.82f;
	fLocal_26 = 0.42f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	unk_0xB57F88F0123F4C38();
	func_28();
	iLocal_24 = 0x00000001;
	func_27();
	func_26();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (Global_4C1E.f_1 != 0x00000009)
		{
			switch (Global_4C1E.f_1)
			{
				case 0x00000007:
					func_21();
					if (iLocal_24)
					{
						func_18();
					}
					else
					{
						func_12();
					}
					break;
				
				case 0x00000008:
					func_21();
					func_12();
					if (func_11(0x00000002, Global_4BFE, 0x00000000))
					{
						func_10();
						Global_4C08 = 0x00000001;
						func_9(Global_4C0B, "DISPLAY_VIEW", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						func_26();
						if (Global_4C1E.f_1 > 0x00000003)
						{
							Global_4C1E.f_1 = 0x00000007;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
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
	func_7();
	if (func_4(0x00000000))
	{
		func_3();
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_3()
{
	if (Global_1FE1[0x00000000 /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		Global_1FE1[0x00000000 /*2811*/][0x00000000 /*281*/].f_103 = 0x00000000;
	}
	if (Global_1FE1[0x00000001 /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		Global_1FE1[0x00000001 /*2811*/][0x00000000 /*281*/].f_103 = 0x00000000;
	}
	if (Global_1FE1[0x00000002 /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		Global_1FE1[0x00000002 /*2811*/][0x00000000 /*281*/].f_103 = 0x00000000;
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000019);
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000B);
}

int func_4(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_5(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_A1D7);
}

int func_6(int iParam0, int iParam1)
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

void func_7()
{
	func_28();
	Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_7C[0x00000002] = 0x00000001;
}

int func_8()
{
	if (Global_1F1A == 0x00000001 || Global_4C1E.f_1 < 0x00000007)
	{
		Global_4C11 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_9(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
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
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Back", &Global_4C13, 0x00000001);
	}
}

int func_11(int iParam0, int iParam1, int iParam2)
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

void func_12()
{
	if (Global_4C08 == 0x00000000)
	{
		if (func_11(0x00000002, Global_4BFF, 0x00000000))
		{
			func_15();
			Global_4C08 = 0x00000001;
			func_28();
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
			uLocal_21 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(uLocal_21))
			{
				SYSTEM::WAIT(0x00000000);
			}
			Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_103 = iLocal_18[unk_0xA52833FE33F41C53(uLocal_21)];
			func_13(Global_4C0B, "SET_HEADER", &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_103 /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
			{
				func_9(Global_4C0B, "SET_SLEEP_MODE", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
			else
			{
				func_9(Global_4C0B, "SET_SLEEP_MODE", 0f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
			if (func_4(0x00000000))
			{
				func_3();
			}
		}
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
	func_14(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_14(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_14(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_14(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_14(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_14(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_15()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Accept", &Global_4C13, 0x00000001);
		func_16();
	}
}

void func_16()
{
	if (func_17())
	{
		unk_0x5A963FB0365294C8(0x00000005);
	}
}

int func_17()
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

void func_18()
{
	Global_4C08 = 0x00000001;
	iLocal_23 = 0x00000000;
	iLocal_24 = 0x00000000;
	func_19();
}

void func_19()
{
	int iVar0[15];
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_9(Global_4C0B, "DISPLAY_VIEW", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_28();
	iLocal_19 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000009)
	{
		iVar2 = 0x00000000;
		iVar3 = 0x00000009;
		Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_54[iVar3] = 0x00001388;
		while (iVar2 < 0x00000009)
		{
			if (Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7C[iVar2] == 0x00000001)
			{
				if (iVar0[iVar2] == 0x00000000)
				{
					if (Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_54[iVar2] < Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_54[iVar3])
					{
						iVar3 = iVar2;
						func_20(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x0000000D), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_68[iVar3]), -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[iVar3 /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 0x00000001;
		if (Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7C[iVar1] == 0x00000001)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_9(Global_4C0B, "DISPLAY_VIEW", 13f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_13(Global_4C0B, "SET_HEADER", &(Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_7[Global_1FE1[Global_4C1E /*2811*/][iLocal_23 /*281*/].f_103 /*4*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	if (Global_4C12)
	{
		func_20(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_20(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		func_20(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_20(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	func_20(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
}

void func_20(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
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
		func_14(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_14(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_14(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_14(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_14(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_21()
{
	if (iLocal_29)
	{
		if (SYSTEM::TIMERA() > 0x00000032)
		{
			iLocal_29 = 0x00000000;
		}
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (func_11(0x00000002, 0x000000B5, 0x00000000))
		{
			if (iLocal_20 > 0x00000000)
			{
				iLocal_20 = (iLocal_20 - 0x00000001);
			}
			func_24();
		}
		if (func_11(0x00000002, 0x000000B4, 0x00000000))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0x00000000;
			}
			func_22();
		}
	}
	if (iLocal_29 == 0x00000000)
	{
		if (func_11(0x00000002, Global_4C06, 0x00000000))
		{
			if (iLocal_20 > 0x00000000)
			{
				iLocal_20 = (iLocal_20 - 0x00000001);
			}
			func_24();
			iLocal_29 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
		if (func_11(0x00000002, Global_4C07, 0x00000000))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0x00000000;
			}
			func_22();
			iLocal_29 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
	}
}

void func_22()
{
	func_9(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(0x00000003), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
	func_23();
}

void func_23()
{
	if (func_17())
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

void func_24()
{
	func_9(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(0x00000001), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
	func_25();
}

void func_25()
{
	if (func_17())
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

void func_26()
{
	int iVar0[15];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0x00000000;
	iVar1 = 0x00000000;
	func_28();
	while (iVar1 < 0x00000009)
	{
		iVar2 = 0x00000000;
		iVar3 = 0x00000009;
		Global_1FE1[Global_4C1E /*2811*/][iVar3 /*281*/] = 0x00001388;
		while (iVar2 < 0x00000009)
		{
			if (Global_1FE1[Global_4C1E /*2811*/][iVar2 /*281*/].f_118 == 0x00000001)
			{
				if (iVar0[iVar2] == 0x00000000)
				{
					if (iVar2 == 0x00000000)
					{
						if (Global_1FE1[Global_4C1E /*2811*/][iVar2 /*281*/] < Global_1FE1[Global_4C1E /*2811*/][iVar3 /*281*/])
						{
							iVar3 = iVar2;
							func_20(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000002), SYSTEM::TO_FLOAT(iVar1), -1f, -1f, -1f, &(Global_1FE1[Global_4C1E /*2811*/][iVar3 /*281*/].f_2), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 0x00000001;
		if (Global_1FE1[Global_4C1E /*2811*/][iVar1 /*281*/].f_118 == 0x00000001)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_9(Global_4C0B, "DISPLAY_VIEW", 13f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_13(Global_4C0B, "SET_HEADER", "CELL_16", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	if (Global_4C12)
	{
		func_20(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_20(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		func_20(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_20(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	func_20(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
}

void func_27()
{
	if (Global_A1D7 != 0x0000000F)
	{
		func_28();
		Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_7C[0x00000002] = 0x00000000;
	}
}

void func_28()
{
	if (func_35(0x0000000E))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000000 /*29*/])
			{
				Global_4C1E = 0x00000000;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000001 /*29*/])
			{
				Global_4C1E = 0x00000001;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000002 /*29*/])
			{
				Global_4C1E = 0x00000002;
			}
			else
			{
				Global_4C1E = 0x00000000;
			}
		}
	}
	else
	{
		Global_4C1E = func_29();
		if (Global_4C1E == 0x00000091)
		{
			Global_4C1E = 0x00000003;
		}
		if (Global_12B4E)
		{
			Global_4C1E = 0x00000003;
		}
		if (Global_4C1E > 0x00000003)
		{
			Global_4C1E = 0x00000003;
		}
	}
}

var func_29()
{
	func_30();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_30()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_33(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_32(unk_0x16F2683693E537C9());
			if (func_31(iVar0) && (!func_35(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_31(Global_1B416.f_936.f_21B.f_10E1))
				{
					Global_1B416.f_936.f_21B.f_10E2 = Global_1B416.f_936.f_21B.f_10E1;
				}
				Global_1B416.f_936.f_21B.f_10E3 = iVar0;
				Global_1B416.f_936.f_21B.f_10E1 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_1B416.f_936.f_21B.f_10E1 != 0x00000091)
			{
				Global_1B416.f_936.f_21B.f_10E3 = Global_1B416.f_936.f_21B.f_10E1;
			}
			return;
		}
	}
	Global_1B416.f_936.f_21B.f_10E1 = 0x00000091;
}

bool func_31(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_34(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_35(int iParam0)
{
	return Global_A1D7 == iParam0;
}

