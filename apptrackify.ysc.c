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
	vector3 vLocal_20 = { 0f, 0f, 0f };
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
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
	fLocal_25 = 9.99f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	unk_0xB57F88F0123F4C38();
	func_10();
	func_7();
	SYSTEM::SETTIMERA(0x00000000);
	SYSTEM::SETTIMERB(0x00000000);
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (Global_4C1E.f_1 != 0x00000009)
		{
			switch (Global_4C1E.f_1)
			{
				case 0x00000007:
					if (SYSTEM::TIMERA() > 0x0000007D)
					{
						func_10();
						SYSTEM::SETTIMERA(0x00000000);
					}
					if (SYSTEM::TIMERB() > SYSTEM::FLOOR(fLocal_27) * 30 && SYSTEM::TIMERB() > 0x00000096)
					{
						unk_0x7E60C62A7CE58FC8(Global_4C0B, "APP_FUNCTION");
						unk_0x3CAEA85DA607305E(0x00000001);
						unk_0x7E60D21B163E9D56();
						SYSTEM::SETTIMERB(0x00000000);
					}
					if (SYSTEM::TIMERB() > 0x000007D0)
					{
						unk_0x7E60C62A7CE58FC8(Global_4C0B, "APP_FUNCTION");
						unk_0x3CAEA85DA607305E(0x00000001);
						unk_0x7E60D21B163E9D56();
						SYSTEM::SETTIMERB(0x00000000);
					}
					break;
				
				case 0x00000008:
					if (func_6(0x00000002, Global_4BFE, 0x00000000))
					{
						func_5();
						Global_4C08 = 0x00000001;
						func_10();
						func_7();
						if (Global_4C1E.f_1 > 0x00000003)
						{
							Global_4C1E.f_1 = 0x00000007;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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
	func_3(0x00000000, 0x00000000);
	func_3(0x00000001, 0x00000000);
	func_3(0x00000002, 0x00000000);
	func_3(0x00000003, 0x00000000);
	func_3(0x00000004, 0x00000000);
	unk_0x0674E58A79778E99(&Global_1CBD, 0x00000016);
	unk_0x10FAF14A60A0DBE1();
}

void func_3(int iParam0, int iParam1)
{
	Global_4127C2[iParam0] = iParam1;
}

int func_4()
{
	if (Global_1F1A == 0x00000001 || Global_4C1E.f_1 < 0x00000007)
	{
		Global_4C11 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_5()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Back", &Global_4C13, 0x00000001);
	}
}

int func_6(int iParam0, int iParam1, int iParam2)
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

void func_7()
{
	if (Global_4C12)
	{
		func_8(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_8(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		func_8(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_8(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	func_8(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_9(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_9(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_9(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_10()
{
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0x00000000)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			vLocal_20 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			fLocal_21 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
			func_17();
			func_16();
			func_15();
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0x00000000)
			{
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000017);
				unk_0x3CAEA85DA607305E(0x00000000);
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000001E))
				{
					unk_0x3CAEA85DA607305E(0xFFFFFF9D);
					unk_0x3CAEA85DA607305E(0x00000000);
				}
				else
				{
					unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(fLocal_25));
					unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(fLocal_26));
				}
				unk_0x3CAEA85DA607305E(0x00000064);
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000016))
				{
					unk_0x3CAEA85DA607305E(0x00000001);
				}
				else
				{
					unk_0x3CAEA85DA607305E(0x00000000);
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000001D))
				{
					unk_0x1200CC973A2399C8(0x00000000);
				}
				else
				{
					unk_0x1200CC973A2399C8(0x00000001);
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBE, 0x00000001))
				{
					unk_0x7C19E5E4784BD7CF(fLocal_28);
				}
				unk_0x7E60D21B163E9D56();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_4C0B, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0x00000001), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	else if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		vLocal_20 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		fLocal_21 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
		if (Global_4127D8 > 0x00000015)
		{
		}
		iVar0 = 0x00000000;
		while (iVar0 < Global_4127D8)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0x00000000)
			{
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000017);
				unk_0x3CAEA85DA607305E(iVar0);
				bVar1 = 0x00000000;
				switch (iVar0)
				{
					case 0x00000000:
						if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000005))
						{
							bVar1 = 0x00000001;
						}
						break;
					
					case 0x00000001:
						if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000006))
						{
							bVar1 = 0x00000001;
						}
						break;
					
					case 0x00000002:
						if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000007))
						{
							bVar1 = 0x00000001;
						}
						break;
					
					case 0x00000003:
						if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000008))
						{
							bVar1 = 0x00000001;
						}
						break;
				}
				if (bVar1)
				{
					unk_0x3CAEA85DA607305E(0xFFFFFF9D);
					unk_0x3CAEA85DA607305E(0x00000000);
				}
				else
				{
					unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(fLocal_25));
					unk_0x3CAEA85DA607305E(SYSTEM::FLOOR(fLocal_26));
				}
				unk_0x3CAEA85DA607305E(0x00000064);
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000016))
				{
					unk_0x1200CC973A2399C8(0x00000001);
				}
				else
				{
					unk_0x1200CC973A2399C8(0x00000001);
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000001D))
				{
					unk_0x1200CC973A2399C8(0x00000000);
				}
				else
				{
					unk_0x1200CC973A2399C8(0x00000001);
				}
				unk_0x7C19E5E4784BD7CF(fLocal_28);
				unk_0x3CAEA85DA607305E(Global_4127C2[iVar0]);
				unk_0x7E60D21B163E9D56();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_4C0B, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(0x00000001), 0xBF800000, 0xBF800000, 0xBF800000);
			iVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_23 = (Global_412782[iParam0 /*3*/] - vLocal_20.x);
	fLocal_24 = (SYSTEM::COS(((3.14159f / 180f) * vLocal_20.x)) * (Global_412782[iParam0 /*3*/].f_1 - vLocal_20.y));
	fLocal_25 = unk_0x5D8ABF6396A76564(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_12(int iParam0)
{
	fLocal_27 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_412782[iParam0 /*3*/], vLocal_20));
	fLocal_28 = (Global_412782[iParam0 /*3*/].f_2 - vLocal_20.z);
	return fLocal_27;
}

float func_13(int iParam0)
{
	fLocal_26 = SYSTEM::SQRT((((Global_412782[iParam0 /*3*/] - vLocal_20.x) * (Global_412782[iParam0 /*3*/] - vLocal_20.x)) + ((Global_412782[iParam0 /*3*/].f_1 - vLocal_20.y) * (Global_412782[iParam0 /*3*/].f_1 - vLocal_20.y))));
	return fLocal_26;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_15()
{
	fLocal_23 = (Global_5597 - vLocal_20.x);
	fLocal_24 = (SYSTEM::COS(((3.14159f / 180f) * vLocal_20.x)) * (Global_5597.f_1 - vLocal_20.y));
	fLocal_25 = unk_0x5D8ABF6396A76564(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_16()
{
	fLocal_27 = SYSTEM::SQRT(SYSTEM::VDIST2(Global_5597, vLocal_20));
	fLocal_28 = (Global_5597.f_2 - vLocal_20.z);
	return fLocal_27;
}

float func_17()
{
	fLocal_26 = SYSTEM::SQRT((((Global_5597 - vLocal_20.x) * (Global_5597 - vLocal_20.x)) + ((Global_5597.f_1 - vLocal_20.y) * (Global_5597.f_1 - vLocal_20.y))));
	return fLocal_26;
}

int func_18()
{
	if (Global_12B4E == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

