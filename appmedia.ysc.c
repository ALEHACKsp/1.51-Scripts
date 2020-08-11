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
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<6> Local_27[25];
	int iLocal_28 = 0;
	vector3 vLocal_29 = { 0f, 0f, 0f };
	vector3 vLocal_30 = { 0f, 0f, 0f };
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
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
	func_27();
	func_26();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (iLocal_24 == 0x00000000)
		{
			if (Global_4C1E.f_1 != 0x00000009)
			{
				switch (Global_4C1E.f_1)
				{
					case 0x00000007:
						if ((iLocal_31 == 0x00000000 && iLocal_32 == 0x00000000) && Global_5550 == 0x00000000)
						{
							func_22();
							func_16();
						}
						break;
					
					case 0x00000008:
						if ((func_15(0x00000002, Global_4BFE, 0x00000000) && iLocal_31 == 0x00000000) && iLocal_32 == 0x00000000)
						{
							func_14();
							Global_4C08 = 0x00000001;
							if (Global_4C1E.f_1 > 0x00000003)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000000F))
								{
								}
								func_13();
							}
						}
						break;
					
					default:
						break;
				}
				if (func_12())
				{
					func_11();
				}
				if (iLocal_31)
				{
					func_9();
				}
				if (iLocal_32)
				{
					func_8();
				}
			}
			else
			{
				Global_4C20 = 0x00000006;
				func_11();
			}
		}
		else
		{
			func_2();
		}
		if (func_1())
		{
			func_11();
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
	iLocal_25 = unk_0x57AA1C471AF0568D(0x00000000);
	switch (iLocal_25)
	{
		case 0x00000000:
			iLocal_24 = 0x00000000;
			func_3();
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			Global_4C1E.f_1 = 0x00000003;
			func_11();
			break;
	}
}

void func_3()
{
	int iVar0;
	
	func_7(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	iLocal_21 = unk_0xFD843F9CCC74B536();
	iLocal_22 = 0x00000000;
	iVar0 = 0x00000000;
	while (iLocal_22 < iLocal_21)
	{
		if (unk_0x41CBD5EC291293E0(iLocal_22))
		{
			func_6(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000012), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0x00000000), -1f, -1f, &(Local_27[iLocal_22 /*6*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			iLocal_26[iVar0] = iLocal_22;
			iVar0++;
		}
		iLocal_22++;
	}
	func_7(Global_4C0B, "DISPLAY_VIEW", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_4(Global_4C0B, "SET_HEADER", "CELL_MSMENU_1", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	if (Global_4C12)
	{
		func_6(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_6(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		func_6(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_6(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	func_6(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
}

void func_4(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
	func_5(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_5(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_5(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_5(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_5(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_5(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_5(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_5(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_5(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_5(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_5(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_7(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_8()
{
	if (iLocal_31 == 0x00000000 && iLocal_32 == 0x00000001)
	{
		if (iLocal_36)
		{
			vLocal_30.x = (vLocal_30.x + 1f);
		}
		if (vLocal_30.x > vLocal_29.x || vLocal_30.x == vLocal_29.x)
		{
			vLocal_30.x = vLocal_29.x;
			iLocal_36 = 0x00000000;
		}
		if (iLocal_37)
		{
			vLocal_30.y = (vLocal_30.y - 2f);
		}
		if (vLocal_30.y < vLocal_29.y || vLocal_30.y == vLocal_29.y)
		{
			vLocal_30.y = vLocal_29.y;
			iLocal_37 = 0x00000000;
		}
		if (iLocal_38)
		{
			vLocal_30.z = (vLocal_30.z - 7f);
		}
		if (vLocal_30.z < vLocal_29.z || vLocal_30.z == vLocal_29.z)
		{
			vLocal_30.z = vLocal_29.z;
			iLocal_38 = 0x00000000;
		}
		if ((iLocal_36 == 0x00000000 && iLocal_37 == 0x00000000) && iLocal_38 == 0x00000000)
		{
			iLocal_32 = 0x00000000;
			if (Global_4C1E.f_1 > 0x00000003)
			{
				Global_4C1E.f_1 = 0x00000007;
				unk_0xA37A90C62806D848(0x00000001);
				Global_5552 = 0x00000001;
				func_26();
			}
		}
		unk_0x44FE29702110D5C6(vLocal_30, 0x00000000);
	}
}

void func_9()
{
	if ((iLocal_31 == 0x00000001 && iLocal_32 == 0x00000000) && Global_5550 == 0x00000006)
	{
		if (iLocal_33)
		{
			vLocal_30.x = (vLocal_30.x - 1f);
		}
		if (vLocal_30.x < vLocal_29.x || vLocal_30.x == vLocal_29.x)
		{
			vLocal_30.x = vLocal_29.x;
			iLocal_33 = 0x00000000;
		}
		if (iLocal_34)
		{
			vLocal_30.y = (vLocal_30.y - 0.5f);
		}
		if (vLocal_30.y < vLocal_29.y || vLocal_30.y == vLocal_29.y)
		{
			vLocal_30.y = vLocal_29.y;
			iLocal_34 = 0x00000000;
		}
		if (iLocal_35)
		{
			vLocal_30.z = (vLocal_30.z + 7f);
		}
		if (vLocal_30.z > vLocal_29.z || vLocal_30.z == vLocal_29.z)
		{
			vLocal_30.z = vLocal_29.z;
			iLocal_35 = 0x00000000;
		}
		if ((iLocal_33 == 0x00000000 && iLocal_34 == 0x00000000) && iLocal_35 == 0x00000000)
		{
			iLocal_31 = 0x00000000;
			func_10("CELL_MSHELP_2");
		}
		unk_0x44FE29702110D5C6(vLocal_30, 0x00000000);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000000F))
	{
		iLocal_31 = 0x00000000;
		iLocal_32 = 0x00000000;
		func_7(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		func_6(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000012), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000000), -1f, -1f, "CELL_MSMENU_3", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		if (Global_4C12)
		{
			func_6(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_6(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		else
		{
			func_6(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_6(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		func_6(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
		func_7(Global_4C0B, "DISPLAY_VIEW", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		func_4(Global_4C0B, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
}

void func_10(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

void func_11()
{
	Global_5552 = 0x00000001;
	unk_0xA37A90C62806D848(0x00000001);
	unk_0x10FAF14A60A0DBE1();
}

int func_12()
{
	if (Global_1F1A == 0x00000001 || Global_4C1E.f_1 < 0x00000007)
	{
		Global_4C11 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_13()
{
	if (iLocal_31 == 0x00000000)
	{
		unk_0xED76A908847D23B4(&vLocal_30, 0x00000000);
		vLocal_29 = { Global_4BF6 };
		iLocal_32 = 0x00000001;
		iLocal_36 = 0x00000001;
		iLocal_37 = 0x00000001;
		iLocal_38 = 0x00000001;
	}
}

void func_14()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Back", &Global_4C13, 0x00000001);
	}
}

int func_15(int iParam0, int iParam1, int iParam2)
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

void func_16()
{
	if (iLocal_28)
	{
		if (SYSTEM::TIMERA() > 0x00000032)
		{
			iLocal_28 = 0x00000000;
		}
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (func_15(0x00000002, 0x000000B5, 0x00000000))
		{
			func_20();
		}
		if (func_15(0x00000002, 0x000000B4, 0x00000000))
		{
			func_17();
		}
	}
	if (iLocal_28 == 0x00000000)
	{
		if (func_15(0x00000002, Global_4C06, 0x00000000))
		{
			func_20();
			iLocal_28 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
		if (func_15(0x00000002, Global_4C07, 0x00000000))
		{
			func_17();
			iLocal_28 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
	}
}

void func_17()
{
	func_7(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(0x00000003), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
	func_18();
}

void func_18()
{
	if (func_19())
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

int func_19()
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

void func_20()
{
	func_7(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(0x00000001), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
	func_21();
}

void func_21()
{
	if (func_19())
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

void func_22()
{
	int iVar0;
	
	if (Global_4C08 == 0x00000000)
	{
		if (func_15(0x00000002, Global_4BFF, 0x00000000))
		{
			unk_0x0674E58A79778E99(&Global_1CBD, 0x0000000F);
			func_24();
			Global_4C08 = 0x00000001;
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
			uLocal_20 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(uLocal_20))
			{
				SYSTEM::WAIT(0x00000000);
			}
			iVar0 = unk_0xA52833FE33F41C53(uLocal_20);
			if (iVar0 > 0xFFFFFFFF)
			{
				iLocal_23 = iLocal_26[iVar0];
				if (Global_4C1E.f_1 > 0x00000003)
				{
					if (Global_5550 == 0x00000000)
					{
						func_7(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						func_6(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000012), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000000), -1f, -1f, "CELL_MSMENU_2", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						func_7(Global_4C0B, "DISPLAY_VIEW", 18f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						func_4(Global_4C0B, "SET_HEADER", &(Local_27[iLocal_23 /*6*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						if (Global_4C12)
						{
							func_6(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							func_6(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							func_6(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							func_6(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						func_6(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
						Global_5554 = iLocal_23;
						Global_5550 = 0x0000000C;
						Global_4C1E.f_1 = 0x00000008;
						func_23();
					}
				}
			}
		}
	}
}

void func_23()
{
	if (iLocal_32 == 0x00000000)
	{
		unk_0xED76A908847D23B4(&vLocal_30, 0x00000000);
		vLocal_29 = { -90.3f, -0.8f, 90f };
		iLocal_31 = 0x00000001;
		iLocal_33 = 0x00000001;
		iLocal_34 = 0x00000001;
		iLocal_35 = 0x00000001;
	}
}

void func_24()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Accept", &Global_4C13, 0x00000001);
		func_25();
	}
}

void func_25()
{
	if (func_19())
	{
		unk_0x5A963FB0365294C8(0x00000005);
	}
}

void func_26()
{
	if ((unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E()) || unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x9F830D3499A5773E();
		if (unk_0x1ED2F074FDAB6B19(0x00000000))
		{
			iLocal_24 = 0x00000001;
		}
		else
		{
			Global_5552 = 0x00000001;
			Global_4C1E.f_1 = 0x00000003;
			func_11();
		}
	}
	else
	{
		func_3();
	}
}

void func_27()
{
	StringCopy(&(Local_27[0x00000000 /*6*/]), "CELL_MSSLOT_1", 24);
	StringCopy(&(Local_27[0x00000001 /*6*/]), "CELL_MSSLOT_2", 24);
	StringCopy(&(Local_27[0x00000002 /*6*/]), "CELL_MSSLOT_3", 24);
	StringCopy(&(Local_27[0x00000003 /*6*/]), "CELL_MSSLOT_4", 24);
	StringCopy(&(Local_27[0x00000004 /*6*/]), "CELL_MSSLOT_5", 24);
	StringCopy(&(Local_27[0x00000005 /*6*/]), "CELL_MSSLOT_6", 24);
	StringCopy(&(Local_27[0x00000006 /*6*/]), "CELL_MSSLOT_7", 24);
	StringCopy(&(Local_27[0x00000007 /*6*/]), "CELL_MSSLOT_8", 24);
	StringCopy(&(Local_27[0x00000008 /*6*/]), "CELL_MSSLOT_9", 24);
	StringCopy(&(Local_27[0x00000009 /*6*/]), "CELL_MSSLOT_10", 24);
	StringCopy(&(Local_27[0x0000000A /*6*/]), "CELL_MSSLOT_11", 24);
	StringCopy(&(Local_27[0x0000000B /*6*/]), "CELL_MSSLOT_12", 24);
	StringCopy(&(Local_27[0x0000000C /*6*/]), "CELL_MSSLOT_13", 24);
	StringCopy(&(Local_27[0x0000000D /*6*/]), "CELL_MSSLOT_14", 24);
	StringCopy(&(Local_27[0x0000000E /*6*/]), "CELL_MSSLOT_15", 24);
	StringCopy(&(Local_27[0x0000000F /*6*/]), "CELL_MSSLOT_16", 24);
	StringCopy(&(Local_27[0x00000010 /*6*/]), "CELL_MSSLOT_17", 24);
	StringCopy(&(Local_27[0x00000011 /*6*/]), "CELL_MSSLOT_18", 24);
	StringCopy(&(Local_27[0x00000012 /*6*/]), "CELL_MSSLOT_19", 24);
	StringCopy(&(Local_27[0x00000013 /*6*/]), "CELL_MSSLOT_20", 24);
}

