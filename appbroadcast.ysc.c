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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	struct<2> Local_30 = { 0, 0 } ;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	struct<2> Local_33 = { 0, 0 } ;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	struct<2> Local_36 = { 0, 0 } ;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	struct<2> Local_39 = { 0, 0 } ;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	struct<2> Local_42 = { 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<2> Local_45 = { 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	StringCopy(&Local_30, "CELL_212", 16);
	StringCopy(&Local_33, "CELL_213", 16);
	StringCopy(&Local_36, "CELL_39", 16);
	StringCopy(&Local_39, "CELL_MP_300", 16);
	StringCopy(&Local_42, "CELL_MP_301", 16);
	StringCopy(&Local_45, "CELL_MP_302", 16);
	unk_0xB57F88F0123F4C38();
	func_44(&iLocal_28);
	func_35();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (!unk_0x8FE4F98FD4BE2689())
		{
			func_33(0x00000001);
			func_32();
		}
		if (!Global_4C1E.f_1 == 0x00000009 && Global_4C1E.f_1 > 0x00000003)
		{
			func_3();
			if (Global_4C1E.f_1 != 0x00000008)
			{
				if (func_2())
				{
					func_32();
				}
			}
		}
		if (func_1())
		{
			func_32();
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

int func_2()
{
	if (Global_1F1A == 0x00000001 || Global_4C1E.f_1 < 0x00000007)
	{
		Global_4C11 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_3()
{
	if (func_28(&iLocal_28))
	{
		if (func_16())
		{
			if (Global_258BBA)
			{
				unk_0x5303496FD72AF7E7(0x00000000);
				func_10(0xCCCF013B, func_11(0x00000001, 0x00000001));
				Global_258BBA = 0x00000000;
			}
			else
			{
				unk_0x5303496FD72AF7E7(0x00000001);
				func_10(0x0EB48F8E, func_11(0x00000001, 0x00000001));
				Global_258BBA = 0x00000001;
			}
			func_4(0x00000000);
			return;
		}
	}
}

void func_4(int iParam0)
{
	if (func_9())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_8())
		{
			func_6(0x00000001, 0x00000001);
		}
		else
		{
			func_6(0x00000000, 0x00000000);
		}
	}
	if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
	}
	Global_5145 = 0x00000005;
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000001E);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x0000001E);
	}
	if (!func_5())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_5()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0x00000000))
		{
			Global_4CD0 = 0x00000001;
			if (bParam1)
			{
				unk_0x1CFAC524932A967E(&Global_4BDF);
			}
			Global_4BD6 = { Global_4BE8[Global_4BE7 /*3*/] };
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
	else if (Global_4CD0 == 0x00000001)
	{
		Global_4CD0 = 0x00000000;
		Global_4BD6 = { Global_4BEF[Global_4BE7 /*3*/] };
		if (bParam1)
		{
			unk_0x39F06A2B18483C68(Global_4BDF);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
}

int func_7(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000E))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_8()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_9()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_10(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0 = 0x231D58EE;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam0;
	Var0.f_3 = unk_0x09AC81E49EA267F7(0x00000000, 0x0000270F);
	if (!iParam1 == 0x00000000)
	{
		if (unk_0x8CD06866876216F2())
		{
			unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000004, iParam1);
		}
	}
}

int func_11(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000020)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_15(iVar2, 0x00000000, 0x00000000))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_12(iVar2, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_12(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_13(0xFFFFFFFF, 0x00000000) == 0x00000008;
	}
	else
	{
		bVar0 = Global_184507[iParam0 /*876*/].f_D3 == 0x00000008;
	}
	if (iParam1 == 0x00000001)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 0x00000008;
		}
	}
	return bVar0;
}

int func_13(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_14();
	}
	if (Global_140859[iVar1] == 0x00000001)
	{
		if (bParam1)
		{
		}
		iVar0 = 0x00000008;
	}
	else
	{
		iVar0 = Global_1407E3[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_14()
{
	return Global_1407E9;
}

int func_15(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0x00000000;
				}
			}
			if (bParam2)
			{
				if (!Global_2537E2.f_3[iVar0])
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_16()
{
	if (!func_22(unk_0xD803B885F5E47A62(), 0x00000001) && func_17())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_17()
{
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_21())
	{
		return 0x00000001;
	}
	if (func_20())
	{
		return 0x00000001;
	}
	return func_18(0x00000078, 0xFFFFFFFF);
}

int func_18(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_19(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_14();
		if (iVar1 > 0xFFFFFFFF)
		{
			Global_26E1B2 = 0x00000000;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0x00000000;
			Global_26E1B2 = 0x00000001;
		}
	}
	return iVar0;
}

bool func_20()
{
	return Global_140861;
}

bool func_21()
{
	return Global_140863;
}

bool func_22(int iParam0, bool bParam1)
{
	if (func_27() != 0x00000000)
	{
		return func_26(iParam0) != 0x00000000;
	}
	return func_23(iParam0, bParam1, 0x00000000);
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_24(iParam0))
		{
			return 0x00000001;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_184507[iParam0 /*876*/] == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_24(int iParam0)
{
	return func_25(iParam0);
}

bool func_25(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0x00000000);
}

int func_26(int iParam0)
{
	if (func_15(iParam0, 0x00000000, 0x00000001))
	{
		return Global_25033E[iParam0 /*421*/].f_1;
	}
	return 0x00000000;
}

int func_27()
{
	return Global_7830;
}

int func_28(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (Global_4C08)
	{
		return 0x00000000;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0x00000000;
	}
	if (!unk_0xBFC0798A6E3417F9(0x00000002, Global_4BFF))
	{
		return 0x00000000;
	}
	func_29();
	Global_4C08 = 0x00000001;
	return 0x00000001;
}

void func_29()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Accept", &Global_4C13, 0x00000001);
		func_30();
	}
}

void func_30()
{
	if (func_31())
	{
		unk_0x5A963FB0365294C8(0x00000005);
	}
}

int func_31()
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

void func_32()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_33(bool bParam0)
{
	if (bParam0)
	{
		func_34();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_7(0x00000000))
		{
			func_4(0x00000000);
		}
	}
	else if (Global_4C1E.f_1 == 0x00000001)
	{
		if (!Global_4C1E.f_1 == 0x00000000)
		{
			Global_4C1E.f_1 = 0x00000003;
		}
	}
}

void func_34()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

void func_35()
{
	if (!Global_4C1E.f_1 == 0x00000007)
	{
		Global_4C1E.f_1 = 0x00000007;
	}
	func_43(Global_4C0B, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(0x0000000D), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	if (func_16())
	{
		if (Global_258BBA)
		{
			func_42(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x0000000D), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x0000000C), -1f, -1f, &Local_42, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		else
		{
			func_42(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x0000000D), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x0000000C), -1f, -1f, &Local_39, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	else
	{
		func_42(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x0000000D), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x0000000C), -1f, -1f, &Local_45, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	}
	func_43(Global_4C0B, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(0x0000000D), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_39(&Local_36);
	if (func_16())
	{
		func_36(0x0000000D, &Local_30, 0x00000001, "", 0x00000004, &Local_33, &iLocal_28);
	}
	else
	{
		func_36(0x00000001, "", 0x00000001, "", 0x00000004, &Local_33, &iLocal_28);
	}
}

void func_36(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6)
{
	func_37(0x00000002, iParam0, sParam1, 0x00000000, iParam6, 0xFFFFFFFF);
	func_37(0x00000001, iParam2, sParam3, 0x00000001, iParam6, 0x00000011);
	func_37(0x00000003, iParam4, sParam5, 0x00000002, iParam6, 0xFFFFFFFF);
}

void func_37(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam1 == 0x00000001)
	{
		func_42(Global_4C0B, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x0674E58A79778E99(iParam4, iParam3);
		func_38(iParam5, 0x00000000);
		return;
	}
	if (Global_4C12)
	{
		func_42(Global_4C0B, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(iParam4, iParam3);
		func_38(iParam5, 0x00000001);
		return;
	}
	func_42(Global_4C0B, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x5D96D8530B3D0904(iParam4, iParam3);
	func_38(iParam5, 0x00000001);
}

void func_38(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, iParam0);
		return;
	}
	unk_0x0674E58A79778E99(&Global_1CBC, iParam0);
}

void func_39(char* sParam0)
{
	func_40(Global_4C0B, "SET_HEADER", sParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_40(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_41(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_41(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_41(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_41(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_41(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_41(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_42(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_41(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_41(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_41(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_41(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_41(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_43(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_44(var uParam0)
{
	*uParam0 = 0x00000000;
}

