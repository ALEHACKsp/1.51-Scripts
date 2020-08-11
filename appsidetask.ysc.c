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
	int iLocal_18[4] = { 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	int iLocal_27 = 0;
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
	fLocal_23 = 0.72f;
	fLocal_24 = 0.42f;
	fLocal_25 = 0f;
	fLocal_26 = 0f;
	unk_0xB57F88F0123F4C38();
	Global_556F = 0x00000000;
	Global_4CCF = 0x00000000;
	func_18();
	Global_4C1E.f_1 = 0x00000007;
	func_17(Global_4C0B, "DISPLAY_VIEW", 14f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_16(Global_4C0B, "SET_HEADER", "CELL_4", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (Global_4C1E.f_1 != 0x00000009)
		{
			switch (Global_4C1E.f_1)
			{
				case 0x00000007:
					if (Global_556F == 0x00000000)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
				
				case 0x00000008:
					if (Global_556F == 0x00000001)
					{
						func_5();
					}
					break;
				
				case 0x00000003:
					unk_0x10FAF14A60A0DBE1();
					break;
				
				default:
					break;
			}
			if (Global_556F == 0x00000000)
			{
				if (func_4())
				{
					func_3();
				}
			}
			else if (func_2(0x00000002, Global_4BFE, 0x00000000))
			{
				Global_4C08 = 0x00000001;
				Global_556F = 0x00000000;
				Global_4C1E.f_1 = 0x00000007;
				func_18();
				func_17(Global_4C0B, "DISPLAY_VIEW", 14f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_16(Global_4C0B, "SET_HEADER", "CELL_4", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
		if (func_1())
		{
			func_3();
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

int func_2(int iParam0, int iParam1, int iParam2)
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

void func_3()
{
	unk_0x10FAF14A60A0DBE1();
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
	unk_0xC1032CAC14DE468A(0.824f, 0.5f, 0.253f, 0.313f, 0x00000000, 0x00000000, 0x00000000, 0x0000009B, 0x00000000);
	func_6();
}

void func_6()
{
	int iVar0;
	
	fLocal_25 = fLocal_23;
	fLocal_26 = fLocal_24;
	func_10(0x000000FF, 0x000000FF, 0x000000FF, 0x000000CD);
	func_9();
	func_8(fLocal_25, fLocal_26, &(Global_706[Global_564D[iLocal_21 /*9*/] /*29*/].f_3), 0x00000000);
	fLocal_25 = (fLocal_25 + 0.07f);
	func_10(0x000000FF, 0x000000FF, 0x000000FF, 0x000000CD);
	if (Global_564D[iLocal_21 /*9*/].f_2.f_1 < 0x0000000A)
	{
		func_7(fLocal_25, fLocal_26, "CELL_506", Global_564D[iLocal_21 /*9*/].f_2.f_2, Global_564D[iLocal_21 /*9*/].f_2.f_1);
	}
	else
	{
		func_7(fLocal_25, fLocal_26, "CELL_503", Global_564D[iLocal_21 /*9*/].f_2.f_2, Global_564D[iLocal_21 /*9*/].f_2.f_1);
	}
	fLocal_25 = (fLocal_25 + 0.07f);
	func_10(0x000000FF, 0x000000FF, 0x000000FF, 0x000000CD);
	func_7(fLocal_25, fLocal_26, "CELL_505", Global_564D[iLocal_21 /*9*/].f_2.f_3, Global_564D[iLocal_21 /*9*/].f_2.f_4);
	fLocal_25 = fLocal_23;
	func_10(0x000000FF, 0x000000FF, 0x000000FF, 0x000000CD);
	fLocal_26 = (fLocal_26 + 0.02f);
	if (Global_55A4[Global_564D[iLocal_21 /*9*/].f_1 /*42*/].f_8 == 0x00000000)
	{
		func_9();
	}
	unk_0xF1F881BAAAFB43B1(0f, 0.93f);
	func_8(fLocal_25, fLocal_26, &(Global_55A4[Global_564D[iLocal_21 /*9*/].f_1 /*42*/].f_4), 0x00000000);
	fLocal_26 = (fLocal_26 + 0.07f);
	iVar0 = 0x00000001;
	while (iVar0 <= Global_55A4[Global_564D[iLocal_21 /*9*/].f_1 /*42*/].f_9)
	{
		func_10(0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF);
		fLocal_26 = (fLocal_26 + 0.04f);
		if (Global_55A4[Global_564D[iLocal_21 /*9*/].f_1 /*42*/].f_20[iVar0] == 0xFFFFFFFF)
		{
			func_8(fLocal_25, fLocal_26, &(Global_55A4[Global_564D[iLocal_21 /*9*/].f_1 /*42*/].f_A[iVar0 /*4*/]), 0x00000000);
		}
		else
		{
			func_7(fLocal_25, fLocal_26, &(Global_55A4[Global_564D[iLocal_21 /*9*/].f_1 /*42*/].f_A[iVar0 /*4*/]), Global_55A4[Global_564D[iLocal_21 /*9*/].f_1 /*42*/].f_1B[iVar0], Global_55A4[Global_564D[iLocal_21 /*9*/].f_1 /*42*/].f_20[iVar0]);
		}
		iVar0++;
	}
}

void func_7(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

void func_8(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

void func_9()
{
	unk_0xD3539A877EC25E86(0.4f, 0.4f);
	unk_0x7178F32F6742C936(0x000000FF, 0x00000080, 0x00000000, 0x000000FF);
	unk_0x7635737DA2E9BC79(0x00000001, 0x00000000, 0x0000004E, 0x000000FF, 0x000000FF);
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xD3539A877EC25E86(0.3f, 0.3f);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x000000CD);
	unk_0x57614350887C2EAD(0x00000001);
	unk_0x7BBAC160090910C3(0x00000000);
	unk_0x7178F32F6742C936(iParam0, iParam1, iParam2, iParam3);
}

void func_11()
{
	if (func_2(0x00000002, Global_4BFF, 0x00000000))
	{
		iLocal_21 = iLocal_18[iLocal_20];
		Global_556F = 0x00000001;
		func_12(Global_4C0B, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287", "CELL_280", "CELL_285", "CELL_284", 0x00000000);
		func_17(Global_4C0B, "DISPLAY_VIEW", 15f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
		func_16(Global_4C0B, "SET_HEADER", "CELL_4", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		Global_4C1E.f_1 = 0x00000008;
		Global_556F = 0x00000001;
	}
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
		func_13(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_13(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_13(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_13(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_13(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_13(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_14()
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 0x00000032)
		{
			iLocal_27 = 0x00000000;
		}
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (func_2(0x00000002, 0x000000B5, 0x00000000))
		{
			if (iLocal_20 > 0x00000000)
			{
				iLocal_20 = (iLocal_20 - 0x00000001);
			}
		}
		if (func_2(0x00000002, 0x000000B4, 0x00000000))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0x00000000;
			}
		}
	}
	if (iLocal_27 == 0x00000000)
	{
		if (func_2(0x00000002, Global_4C06, 0x00000000))
		{
			if (iLocal_20 > 0x00000000)
			{
				iLocal_20 = (iLocal_20 - 0x00000001);
			}
			iLocal_27 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
		if (func_2(0x00000002, Global_4C07, 0x00000000))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0x00000000;
			}
			iLocal_27 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
	}
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	fLocal_25 = fLocal_23;
	fLocal_26 = fLocal_24;
	iLocal_22 = iLocal_19;
	while (iVar0 < iLocal_22)
	{
		func_10(0x000000FF, 0x000000FF, 0x000000FF, 0x000000CD);
		if (iVar0 == iLocal_20)
		{
			func_9();
		}
		func_8(fLocal_25, fLocal_26, &(Global_706[Global_564D[iLocal_18[iVar0] /*9*/] /*29*/].f_3), 0x00000000);
		fLocal_25 = (fLocal_25 + 0.07f);
		func_10(0x000000FF, 0x000000FF, 0x000000FF, 0x000000CD);
		if (Global_564D[iLocal_18[iVar0] /*9*/].f_2.f_1 < 0x0000000A)
		{
			func_7(fLocal_25, fLocal_26, "CELL_506", Global_564D[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_564D[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		else
		{
			func_7(fLocal_25, fLocal_26, "CELL_503", Global_564D[iLocal_18[iVar0] /*9*/].f_2.f_2, Global_564D[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		fLocal_25 = (fLocal_25 + 0.07f);
		func_10(0x000000FF, 0x000000FF, 0x000000FF, 0x000000CD);
		func_7(fLocal_25, fLocal_26, "CELL_505", Global_564D[iLocal_18[iVar0] /*9*/].f_2.f_3, Global_564D[iLocal_18[iVar0] /*9*/].f_2.f_4);
		fLocal_25 = fLocal_23;
		func_10(0x000000FF, 0x000000FF, 0x000000FF, 0x000000CD);
		if (iVar0 == iLocal_20)
		{
			func_9();
		}
		fLocal_26 = (fLocal_26 + 0.02f);
		unk_0xF1F881BAAAFB43B1(0f, 0.93f);
		func_8(fLocal_25, fLocal_26, &(Global_55A4[Global_564D[iLocal_18[iVar0] /*9*/].f_1 /*42*/]), 0x00000000);
		fLocal_26 = (fLocal_26 + 0.05f);
		iVar0++;
	}
}

void func_16(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_13(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_13(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_13(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_13(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_13(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_17(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_18()
{
	int iVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		iVar2 = 0x00000000;
		iVar3 = 0x00000003;
		Global_564D[iVar3 /*9*/].f_2 = 0xFFFFFFFF;
		Global_564D[iVar3 /*9*/].f_2.f_1 = 0x00000000;
		Global_564D[iVar3 /*9*/].f_2.f_2 = 0x00000000;
		Global_564D[iVar3 /*9*/].f_2.f_3 = 0x00000000;
		Global_564D[iVar3 /*9*/].f_2.f_5 = 0x00000000;
		while (iVar2 < 0x00000004)
		{
			if (iVar0[iVar2] == 0x00000000)
			{
				if (Global_564D[iVar2 /*9*/].f_8 != 0x00000000)
				{
					if (func_19(Global_564D[iVar2 /*9*/].f_2, Global_564D[iVar3 /*9*/].f_2))
					{
						iVar3 = iVar2;
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 0x00000001;
		if (Global_564D[iVar1 /*9*/].f_8 != 0x00000000)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_12(Global_4C0B, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287", "CELL_280", 0x00000000, 0x00000000, 0x00000000);
}

int func_19(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0x00000000;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 0x00000001;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0x00000000;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 0x00000001;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 0x00015180);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 0x00015180);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

