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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	struct<8> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<11> Local_48[30];
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 0x00000003;
	bLocal_40 = 0x00000001;
	bLocal_41 = 0x00000001;
	iLocal_54 = 0xFFFFFFFF;
	iLocal_55 = 0x00000005;
	if (unk_0x2EBF608FFE6CA406(0x000000D2))
	{
		func_127();
	}
	if (unk_0x8A22C4C08282BF26(joaat("ambient_sonar")) > 0x00000001)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_126(0x0000000D);
	func_125(0x00000000);
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_124(unk_0x16F2683693E537C9());
		switch (iLocal_51)
		{
			case 0x00000000:
				func_118();
				break;
			
			case 0x00000001:
				func_110();
				break;
			
			case 0x00000002:
				func_1();
				break;
			
			case 0x00000003:
				func_127();
				break;
		}
	}
}

void func_1()
{
	iLocal_52 = 0x00000000;
	if (func_109(unk_0x16F2683693E537C9()))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (func_76(&Local_42, &Local_48))
			{
				func_30();
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				iLocal_49 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				func_125(0x00000001);
				func_13(0x00000000);
				if (func_109(unk_0x16F2683693E537C9()))
				{
					if (func_11(&Local_42, &Local_48, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), &iLocal_54))
					{
						func_8();
					}
				}
				unk_0x34D79252800B23FF(0x00000000);
				func_7();
				func_6(0x00000001);
			}
			else if (func_109(iLocal_49))
			{
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(iLocal_49, 0x00000001)) > 62500f)
				{
					func_5();
				}
				else if (!unk_0xE4EDC4B0E92C078B(iLocal_50))
				{
					iLocal_50 = func_2(iLocal_49, 0x00000000, 0x00000000);
					unk_0xBC8E0A7390523199(iLocal_50, 0x00000134);
				}
			}
			else
			{
				func_7();
			}
		}
	}
}

int func_2(int iParam0, bool bParam1, bool bParam2)
{
	return func_3(iParam0, !bParam1, bParam2);
}

int func_3(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_4(unk_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			unk_0x61755AC17D8F538E(iVar0, 0x00000002);
		}
	}
	else if (unk_0xEC560E589DF8370E(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_4(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_4(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_4(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_5()
{
	func_7();
	if (unk_0xC844350D5D58C99A(iLocal_49))
	{
		unk_0x046C362CF15F1935(&iLocal_49);
	}
}

void func_6(int iParam0)
{
	iLocal_51 = iParam0;
}

void func_7()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_50))
	{
		unk_0x142CC44DB769B57E(&iLocal_50);
	}
}

void func_8()
{
	func_9(func_10(iLocal_54), 0x00000001, 0x00000001);
	iLocal_53 = 0x00000001;
}

void func_9(vector3 vParam0, bool bParam1, bool bParam2)
{
	Global_5597 = { vParam0 };
	unk_0x0674E58A79778E99(&Global_1CBD, 0x0000001E);
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000001D);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBD, 0x0000001D);
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBE, 0x00000001);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBE, 0x00000001);
	}
}

Vector3 func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -1435.61f, 5781.12f, -29.87f;
			break;
		
		case 0x00000001:
			return -1956.54f, -1125.07f, -37.21f;
			break;
		
		case 0x00000002:
			return 2752.88f, -1212.78f, -22.41f;
			break;
		
		case 0x00000003:
			return 3188.04f, -1668.19f, -146.88f;
			break;
		
		case 0x00000004:
			return 2555.04f, -2372.47f, -112.01f;
			break;
		
		case 0x00000005:
			return 2945.9f, 6537.41f, -27.36f;
			break;
		
		case 0x00000006:
			return -1266.69f, 6261.75f, -34.17f;
			break;
		
		case 0x00000007:
			return 3034.72f, 6550.42f, -35.2f;
			break;
		
		case 0x00000008:
			return 1694.53f, 6991.69f, -137.62f;
			break;
		
		case 0x00000009:
			return 1233.43f, 7081.15f, -141.72f;
			break;
		
		case 0x0000000A:
			return -3413.73f, 830.23f, -12.95f;
			break;
		
		case 0x0000000B:
			return 1422.5f, 6854.67f, -38.2f;
			break;
		
		case 0x0000000C:
			return -3345.1f, 3547.8f, -59.1f;
			break;
		
		case 0x0000000D:
			return -3437.93f, 3069.57f, -54.85f;
			break;
		
		case 0x0000000E:
			return -2909.28f, 4204.32f, -111.62f;
			break;
		
		case 0x0000000F:
			return -3179.12f, 2151.28f, -31.86f;
			break;
		
		case 0x00000010:
			return 4146.09f, 3825.86f, -40.96f;
			break;
		
		case 0x00000011:
			return 2716.61f, 6956.91f, -157.17f;
			break;
		
		case 0x00000012:
			return 2487.5f, 7001.69f, -143.56f;
			break;
		
		case 0x00000013:
			return -3043.23f, -212.16f, -23.48f;
			break;
		
		case 0x00000014:
			return -2871.1f, 4268.19f, -152.47f;
			break;
		
		case 0x00000015:
			return -777.21f, 6726.71f, -30.89f;
			break;
		
		case 0x00000016:
			return -3008.33f, 2877.73f, -27.76f;
			break;
		
		case 0x00000017:
			return -1843.12f, -1260.67f, -22.17f;
			break;
		
		case 0x00000018:
			return -2591.62f, -470.34f, -30.4f;
			break;
		
		case 0x00000019:
			return 3824.99f, 3729.17f, -16.17f;
			break;
		
		case 0x0000001A:
			return 3885.44f, 3797.19f, -24.26f;
			break;
		
		case 0x0000001B:
			return 2153.9f, -2826.37f, -50.76f;
			break;
		
		case 0x0000001C:
			return 1873.5f, -3012.6f, -47f;
			break;
		
		case 0x0000001D:
			return -2325.06f, -1046.7f, -70.67f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_11(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0x00000000;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0x00000000;
	while (iVar0 < *iParam1)
	{
		if (!func_12(&(uParam0->f_1), iVar0))
		{
			fVar1 = SYSTEM::VDIST2(vParam2, (iParam1[iVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam3 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam3 != 0xFFFFFFFF;
}

bool func_12(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000040)
	{
		return 0x00000000;
	}
	if (iParam1 <= 0x0000001F)
	{
		return unk_0xEAE0D21A50E6C7F4(*uParam0, iParam1);
	}
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_1, (iParam1 - 0x00000020));
}

int func_13(int iParam0)
{
	if (func_14(0x00000011, 0x00000000, 0x00000001, 0x00000000))
	{
		if (iParam0 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000016);
		}
		else
		{
			unk_0x0674E58A79778E99(&Global_1CBD, 0x00000016);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_12B4E)
	{
		if ((iParam0 != 0x00000011 && iParam0 != 0x00000003) && iParam0 != 0x00000017)
		{
			return 0x00000000;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000E))
		{
			if (iParam0 == 0x00000011)
			{
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000000E);
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000010);
			}
			if (iParam0 == 0x00000003)
			{
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000000E);
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000000F);
			}
			if (iParam0 == 0x00000017)
			{
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000000E);
				unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000001B);
			}
		}
		if (Global_1CC3[iParam0 /*15*/].f_9 == 0x00000000)
		{
			func_27();
		}
		if (unk_0x8A22C4C08282BF26(Global_1CC3[iParam0 /*15*/].f_9) > 0x00000000)
		{
			unk_0x0674E58A79778E99(&Global_4126C5, 0x0000000E);
			unk_0x0674E58A79778E99(&Global_4126C5, 0x00000010);
			unk_0x0674E58A79778E99(&Global_4126C5, 0x0000000F);
			unk_0x0674E58A79778E99(&Global_4126C5, 0x0000001B);
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	func_20();
	if (Global_4C1E.f_1 == 0x00000009)
	{
		return 0x00000000;
	}
	if (iParam2 == 0x00000000)
	{
		if (func_19(0x00000000) == 0x00000001)
		{
			return 0x00000000;
		}
	}
	if (Global_4BFC == 0x00000001)
	{
		return 0x00000000;
	}
	if (Global_4C1E.f_1 == 0x00000007)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000001)
	{
	}
	if (!unk_0x1727A44C562FBED2(Global_4C1B))
	{
		if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
		{
			if (Global_4C1E.f_1 < 0x00000004)
			{
				func_18("cellphone_flashhand");
				if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
				{
					Global_4C1B = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 0x00000590);
				}
				unk_0x5E8C29AE121DF1C7("cellphone_flashhand");
			}
		}
	}
	while (!Global_4C0C)
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_27();
	func_15();
	if (unk_0x8A22C4C08282BF26(Global_1CC3[iParam0 /*15*/].f_9) == 0x00000000)
	{
		Global_1F1A = 0x00000000;
		Global_4C1E.f_1 = 0x00000007;
		func_18(&(Global_1CC3[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x8A22C4C08282BF26(Global_1CC3[iParam0 /*15*/].f_9) == 0x00000000)
			{
				Global_4C1C = SYSTEM::START_NEW_SCRIPT(&(Global_1CC3[iParam0 /*15*/].f_5), 0x00000FA0);
			}
		}
		else if (unk_0x8A22C4C08282BF26(Global_1CC3[iParam0 /*15*/].f_9) == 0x00000000)
		{
			Global_4C1C = SYSTEM::START_NEW_SCRIPT(&(Global_1CC3[iParam0 /*15*/].f_5), 0x000009F8);
		}
		unk_0x5E8C29AE121DF1C7(&(Global_1CC3[iParam0 /*15*/].f_5));
		return 0x00000001;
	}
	return 0x00000001;
}

void func_15()
{
	if (Global_12B4E == 0x00000000)
	{
		Global_1CC3[0x0000000E /*15*/].f_4 = 0xFFFFFF9D;
		Global_1CC3[0x00000004 /*15*/].f_4 = 0xFFFFFF9D;
		if (Global_258C03)
		{
			if (func_17(0x0000000E))
			{
				func_16(0x00000002, "CELL_2", 0x00000002, "appInternet", 0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_16(0x0000000E, "CELL_29", 0x00000007, "appMPJobListNEW", 0x0000000C, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
			else
			{
				func_16(0x0000000E, "CELL_29", 0x00000002, "appMPJobListNEW", 0x0000000C, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
		}
		else
		{
			func_16(0x00000004, "CELL_23", 0x00000002, "appChecklist", 0x00000027, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_1CC3[iParam0 /*15*/]), sParam1, 16);
	Global_1CC3[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_1CC3[iParam0 /*15*/].f_5), sParam3, 16);
	Global_1CC3[iParam0 /*15*/].f_9 = unk_0x12AB0310C2281427(sParam3);
	Global_1CC3[iParam0 /*15*/].f_A = iParam4;
	Global_1CC3[iParam0 /*15*/].f_B = iParam5;
	Global_1CC3[iParam0 /*15*/].f_C = iParam6;
	Global_1CC3[iParam0 /*15*/].f_D = iParam7;
	Global_1CC3[iParam0 /*15*/].f_E = iParam8;
	if (Global_1CC3[iParam0 /*15*/].f_C == 0x00000000)
	{
		Global_1CC3[iParam0 /*15*/].f_C = 0x00000000;
	}
	if (Global_1CC3[iParam0 /*15*/].f_D == 0x00000000)
	{
		Global_1CC3[iParam0 /*15*/].f_D = 0x00000000;
	}
	if (Global_1CC3[iParam0 /*15*/].f_E == 0x00000000)
	{
		Global_1CC3[iParam0 /*15*/].f_E = 0x00000000;
	}
}

bool func_17(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_18(char* sParam0)
{
	unk_0x92DCE5C81176D2B4(sParam0);
	while (!unk_0x1FBF08B001C4788A(sParam0))
	{
		SYSTEM::WAIT(0x00000000);
	}
}

int func_19(int iParam0)
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

void func_20()
{
	if (func_17(0x0000000E))
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
		Global_4C1E = func_21();
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

var func_21()
{
	func_22();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_22()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_25(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_24(unk_0x16F2683693E537C9());
			if (func_23(iVar0) && (!func_17(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_23(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_23(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_26(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_27()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000022)
	{
		Global_1CC3[iVar0 /*15*/].f_4 = 0xFFFFFF9D;
		iVar0++;
	}
	if (Global_12B4E == 0x00000000)
	{
		iVar1 = 0x00000000;
		while (iVar2 < 0x000000A1)
		{
			if (func_29(iVar2, Global_4C1E) == 0x00000001)
			{
				iVar1 = 0x00000001;
			}
			iVar2++;
		}
		func_16(0x00000007, "CELL_5", 0x00000000, "appEmail", 0x00000004, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000001, "CELL_1", 0x00000001, "appTextMessage", 0x00000002, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000004, "CELL_23", 0x00000002, "appChecklist", 0x00000027, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		if ((Global_A1D7 == 0x0000000F && func_28(0x00000000) == 0x00000000) && Global_1CC1 == 0x00000000)
		{
			func_16(0x00000014, "CELL_32", 0x00000003, "appSettings", 0x0000002B, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			Global_4CD3 = 0x00000000;
			Global_1CC2 = 0x000000FF;
		}
		else
		{
			func_16(0x00000014, "CELL_32", 0x00000003, "appSettings", 0x0000002B, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			Global_4CD3 = 0x00000001;
			Global_1CC2 = 0x0000002A;
		}
		if (iVar1 == 0x00000001)
		{
			func_16(0x00000000, "CELL_0", 0x00000004, "appContacts", 0x0000001B, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
		else
		{
			func_16(0x00000000, "CELL_0", 0x00000004, "appContacts", 0x00000005, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
		func_16(0x0000000A, "CELL_16", 0x00000005, "appSettings", 0x00000018, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000003, "CELL_7", 0x00000006, "appCamera", 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000002, "CELL_2", 0x00000007, "appInternet", 0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		if (Global_1B416.f_36DE.f_59 == 0x00000001)
		{
			func_16(0x00000011, "CELL_28", 0x00000008, "appTrackify", 0x0000002A, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
		if (Global_1B416.f_36DE.f_58 == 0x00000001)
		{
			func_16(0x00000010, "CELL_25", 0x00000000, "appContacts", 0x00000028, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		}
		func_16(0x00000019, "CELL_14", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000009, "CELL_13", 0xFFFFFF9D, "appContacts", 0x0000000D, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000000B, "CELL_14", 0xFFFFFF9D, "appContacts", 0x00000008, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000001B, "CELL_15", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000001C, "CELL_15", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000001D, "CELL_15", 0xFFFFFF9D, "appSettings", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000001E, "CELL_15", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000001F, "CELL_15", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000020, "CELL_15", 0xFFFFFF9D, "appSettings", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
	}
	else
	{
		func_16(0x00000007, "CELL_5", 0x00000000, "appMPEmail", 0x00000004, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000000A, "CELL_16", 0x00000005, "appSettings", 0x00000018, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000001, "CELL_1", 0x00000001, "appTextMessage", 0x00000002, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000003, "CELL_7", 0x00000006, "appCamera", 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000002, "CELL_2", 0x00000007, "appInternet", 0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000000E, "CELL_29", 0x00000004, "appMPJobListNEW", 0x0000000C, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000000, "CELL_0", 0x00000002, "appContacts", 0x00000005, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000015, "JIPMP_QJ", 0x00000003, "AppJIPMP", 0x0000000E, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000004) == 0x00000001)
		{
			func_16(0x00000011, "CELL_28", 0x00000008, "appTrackify", 0x0000002A, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
		func_16(0x0000000D, "CELL_35", 0xFFFFFF9D, "appMPCopBackup", 0x00000027, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000000D, "CELL_20", 0xFFFFFF9D, "appMPCopBackup", 0x00000010, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000000F, "CELL_18", 0xFFFFFF9D, "appContacts", 0x00000008, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000009, "CELL_13", 0xFFFFFF9D, "appContacts", 0x0000000D, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000005, "CELL_4", 0xFFFFFF9D, "appContacts", 0x0000000C, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000017, "CELL_15", 0x00000000, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000018, "CELL_15", 0x00000001, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000019, "CELL_15", 0x00000002, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000001A, "CELL_15", 0x00000003, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000001B, "CELL_15", 0x00000004, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000001C, "CELL_15", 0x00000005, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000001D, "CELL_15", 0x00000006, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000001E, "CELL_15", 0x00000007, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x0000001F, "CELL_15", 0x00000008, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000020, "CELL_15", 0x00000009, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000021, "CELL_15", 0x0000000A, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000004) == 0x00000001)
		{
			if (Global_180426)
			{
				func_16(0x00000017, "CELL_CIRCBREAK", 0x00000008, "AppVLSI", 0x00000036, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000014) == 0x00000001)
			{
				func_16(0x00000017, "CELL_SIGHTS", 0x00000008, "AppSettings", 0x0000003B, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000016) == 0x00000001)
			{
				func_16(0x00000017, "CELL_EXTRACT", 0x00000008, "AppExtraction", 0x0000003A, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000001A) == 0x00000001)
			{
				func_16(0x00000017, "CELL_SECHACK", 0x00000008, "AppSecuroHack", 0x00000039, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
		}
		if ((((unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000004) == 0x00000000 && Global_180426 == 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000014) == 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000016) == 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000001A) == 0x00000000)
		{
			func_16(0x00000017, "CELL_BOSSAGE", 0x00000008, "appMPBossAgency", 0x00000039, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
	}
}

bool func_28(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_29(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_13[iParam1];
}

void func_30()
{
	func_53(0x00000003, 0x0003D090);
	func_46(0x0000012B, 0x00000000, 0x00000000);
	func_33(0x00000014, 0x00000001);
	func_31();
	func_6(0x00000003);
}

void func_31()
{
	int iVar0;
	
	iVar0 = func_32(0x00000041);
	Global_24D752[iVar0 /*83*/] = 0x00000041;
	StringCopy(&(Global_24D752[iVar0 /*83*/].f_12[0x00000000 /*16*/]), "", 64);
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000013;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000013)
	{
		if (Global_24D752[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 0x00000014;
		}
		else if (Global_24D752[iVar1 /*83*/] == 0x00000000)
		{
			iVar0 = iVar1;
			iVar1 = 0x00000014;
		}
		iVar1++;
	}
	return iVar0;
}

int func_33(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_34(iParam0, iParam1);
}

int func_34(int iParam0, int iParam1)
{
	if (func_17(0x0000000E) && !func_45(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0x5E109EC687D2605A(iParam0) && iParam1 == 0x00000001)
	{
		return 0x00000000;
	}
	if (Global_7929 != 0x00000000 && !Global_12B4E)
	{
		return 0x00000000;
	}
	if (func_44(&Global_4127F1))
	{
		if (func_42(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_35(&Global_4127F1, iParam0))
		{
			return 0x00000001;
		}
	}
	else
	{
		if (!unk_0x5A66449FC9BDF808(iParam0))
		{
			return 0x00000000;
		}
		if (unk_0x5E109EC687D2605A(iParam0))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	return 0x00000000;
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_17(0x0000000E) && !func_45(iParam1))
	{
		return 0x00000000;
	}
	if (func_42(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_41(uParam0) < 0f)
	{
		func_40(uParam0, 0x00000000);
	}
	func_38(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_36(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_17(0x0000000E) && !func_45(iParam1))
	{
		return 0x00000000;
	}
	if (func_42(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_41(uParam0) < 0f)
	{
		func_40(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_37(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_37(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_38(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_39(uParam0, iVar0);
		iVar0++;
	}
	func_40(uParam0, (Global_4127F0 - 0.5f));
}

void func_39(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_40(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_41(var uParam0)
{
	return uParam0->f_50;
}

bool func_42(var uParam0, int iParam1)
{
	return func_43(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_43(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

bool func_44(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_46(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0x00000000)
	{
	}
	if (iParam0 == 0x00000141 || iParam0 > 0x00000141)
	{
	}
	else
	{
		func_51((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
	}
	bVar0 = 0x00000001;
	if (Global_1B416.f_27CD[iParam0 /*12*/].f_5 == 0x00000001)
	{
		if (Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 0x0000000B || Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 0x0000000C)
		{
			bVar0 = 0x00000000;
		}
	}
	else
	{
		Global_1B416.f_27CD[iParam0 /*12*/].f_5 = 0x00000001;
		Global_1B416.f_27CD[iParam0 /*12*/].f_A = iParam1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 0x0000011F)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_0"), 0x00000032, 0x00000000);
		}
		if (iParam0 == 0x0000011E)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_1"), 0x00000032, 0x00000000);
		}
		if (iParam0 == 0x0000012B)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_3"), 0x00000032, 0x00000000);
		}
	}
	if (bVar0)
	{
		func_47();
	}
}

void func_47()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0x00000000;
	Global_1B30E = 0x00000000;
	Global_1B30F = 0x00000000;
	Global_1B310 = 0x00000000;
	Global_1B311 = 0x00000000;
	Global_1B312 = 0x00000000;
	Global_1B313 = 0x00000000;
	Global_1B314 = 0x00000000;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_1B416.f_27CD.f_F0D;
	Global_1B416.f_27CD.f_F0D = 0f;
	while (iVar0 < 0x00000141)
	{
		if (Global_1B416.f_27CD[iVar0 /*12*/].f_5 == 0x00000001)
		{
			switch (Global_1B416.f_27CD[iVar0 /*12*/].f_6)
			{
				case 0x00000001:
					Global_1B30E++;
					fVar1 = (fVar1 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000003:
					Global_1B30F++;
					fVar2 = (fVar2 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000005:
					Global_1B310++;
					fVar3 = (fVar3 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000007:
					Global_1B311++;
					fVar4 = (fVar4 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000009:
					Global_1B312++;
					fVar5 = (fVar5 + (Global_1B416.f_27CD[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 0x0000000B:
					Global_1B313++;
					fVar6 = (fVar6 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x0000000D:
					Global_1B314++;
					fVar7 = (fVar7 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_1B2FD > 0x00000000)
	{
		if (Global_1B30E == Global_1B2FD)
		{
			fVar1 = 55f;
		}
	}
	if (Global_1B2FE > 0x00000000)
	{
		if (Global_1B30F == Global_1B2FE)
		{
			fVar2 = 10f;
		}
	}
	if (Global_1B2FF > 0x00000000)
	{
		if (Global_1B310 == Global_1B2FF)
		{
			fVar3 = 0f;
		}
	}
	if (Global_1B300 > 0x00000000)
	{
		if (Global_1B311 == Global_1B300)
		{
			fVar4 = 10f;
		}
	}
	if (Global_1B301 > 0x00000000)
	{
		if (((Global_1B312 == Global_1B301 || (Global_1B301 * 10 / Global_1B312) < 0x00000029) || Global_1B312 > Global_1B304) || Global_1B312 == Global_1B304)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F10, 0x0000000E))
			{
				if (Global_1B312 == Global_1B301)
				{
					unk_0xE7B2B6A56C007908(joaat("num_rndevents_completed"), Global_1B301, 0x00000000);
					unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F10), 0x0000000E);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_1B302 > 0x00000000)
	{
		if (Global_1B313 == Global_1B302)
		{
			fVar6 = 15f;
		}
	}
	if (Global_1B303 > 0x00000000)
	{
		if (Global_1B314 == Global_1B303)
		{
			fVar7 = 5f;
		}
	}
	Global_1B416.f_27CD.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_1B312 > Global_1B304 || Global_1B312 == Global_1B304)
	{
		iVar9 = Global_1B304;
	}
	else
	{
		iVar9 = Global_1B312;
	}
	unk_0xCDC520E5E48E63D9(joaat("num_missions_completed"), Global_1B30E, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_missions_available"), Global_1B2FD, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_completed"), Global_1B30F, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_available"), Global_1B2FE, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_completed"), Global_1B310, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_available"), Global_1B2FF, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_completed"), Global_1B311, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_available"), Global_1B300, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_completed"), iVar9, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_available"), Global_1B304, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_completed"), (Global_1B314 + Global_1B313), 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_available"), (Global_1B303 + Global_1B302), 0x00000001);
	Global_1B315 = (Global_1B30E * 100 / Global_1B2FD);
	Global_1B317 = ((Global_1B310 + Global_1B30F) * 100 / (Global_1B2FF + Global_1B2FE));
	Global_1B316 = ((Global_1B311 + iVar9) * 100 / (Global_1B300 + Global_1B304));
	Global_1B318 = ((Global_1B313 + Global_1B314) * 100 / (Global_1B302 + Global_1B303));
	unk_0x11F69E56D7B5F3C7(joaat("total_progress_made"), Global_1B416.f_27CD.f_F0D, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_story_missions"), Global_1B315, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_ambient_missions"), Global_1B316, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_oddjobs"), Global_1B317, 0x00000001);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D))
	{
		func_50(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_49() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_48();
				}
			}
		}
	}
}

int func_48()
{
	if (func_28(0x00000000))
	{
		return 0x00000000;
	}
	if (Global_181DF.f_8)
	{
		if (Global_181DF.f_A > 0x00000000)
		{
			return 0x00000000;
		}
	}
	else if (Global_181DF.f_A > 0x00000001)
	{
		return 0x00000000;
	}
	Global_181DF.f_A++;
	return 0x00000001;
}

int func_49()
{
	return Global_7830;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 > 0x0000004E)
	{
		return 0x00000000;
	}
	if (iParam1 <= 0x00000000 || iParam1 > 0x00000064)
	{
		return 0x00000000;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0x00000000;
}

int func_51(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		iParam2 = func_52();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_52()
{
	return Global_1407E9;
}

void func_53(int iParam0, int iParam1)
{
	int iVar0;
	
	func_55(Global_1B416.f_6143[iParam0 /*4*/], func_75(iParam0), iParam1, 0x00000000, 0x00000000);
	switch (iParam0)
	{
		case 0x00000003:
			Global_1B416.f_6143.f_45 = (Global_1B416.f_6143.f_45 + iParam1);
			break;
		
		case 0x00000002:
			Global_1B416.f_6143.f_46 = (Global_1B416.f_6143.f_46 + iParam1);
			break;
		
		case 0x00000000:
			Global_1B416.f_6143.f_47 = (Global_1B416.f_6143.f_47 + iParam1);
			break;
	}
	unk_0x6FB46C25CCB7E6D5(func_54(iParam0, 0x00000001), &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(func_54(iParam0, 0x00000001), iVar0, 0x00000001);
}

int func_54(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_towi");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_towi");
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_taxi");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_taxi");
					break;
				
				case 0x00000002:
					return joaat("prop_missions_taxi");
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_traf");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_traf");
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_soco");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_soco");
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_cmsh");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_cmsh");
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_cinv");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_cinv");
					break;
				
				case 0x00000002:
					return joaat("prop_missions_cinv");
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_cind");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_cind");
					break;
				
				case 0x00000002:
					return joaat("prop_missions_cind");
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_cinm");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_cinm");
					break;
				
				case 0x00000002:
					return joaat("prop_missions_cinm");
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_golf");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_golf");
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_cscr");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_cscr");
					break;
				
				case 0x00000002:
					return joaat("prop_missions_cscr");
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_weed");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_weed");
					break;
				
				case 0x00000002:
					return joaat("prop_missions_weed");
					break;
			}
			break;
		
		case 0x0000000B:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_barte");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_barte");
					break;
				
				case 0x00000002:
					return joaat("prop_missions_barte");
					break;
			}
			break;
		
		case 0x0000000C:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_barpi");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_barpi");
					break;
				
				case 0x00000002:
					return joaat("prop_missions_barpi");
					break;
			}
			break;
		
		case 0x0000000D:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_barhe");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_barhe");
					break;
				
				case 0x00000002:
					return joaat("prop_missions_barhe");
					break;
			}
			break;
		
		case 0x0000000E:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_barho");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_barho");
					break;
				
				case 0x00000002:
					return joaat("prop_missions_barho");
					break;
			}
			break;
		
		case 0x0000000F:
			switch (iParam1)
			{
				case 0x00000000:
					return joaat("prop_bought_strip");
					break;
				
				case 0x00000001:
					return joaat("prop_earned_strip");
					break;
			}
			break;
	}
	return joaat("prop_bought_towi");
}

void func_55(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_74(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_74(iParam0) == 0x00000004)
	{
		return;
	}
	func_56(func_74(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
	if (bParam3)
	{
		iVar0 = 0x00000000;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0x00000000:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 0x00000001:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 0x00000002:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0x00000000:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 0x00000001:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 0x00000002:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6FB46C25CCB7E6D5(iVar1, &iVar0, 0xFFFFFFFF);
		iVar0 = (iVar0 + iParam2);
		unk_0xCDC520E5E48E63D9(iVar1, iVar0, 0x00000001);
	}
}

int func_56(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_73();
	if (iParam3 < 0x00000001)
	{
		return 0x00000000;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000000:
					func_72(0x00000063, 0x00000001);
					func_71(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_71(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_71(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_70(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_65(0x00000005))
					{
						fVar0 = 0.9f;
						iVar1 = 0x00000005;
					}
					break;
				
				case 0x0000003F:
				case 0x00000040:
				case 0x00000041:
				case 0x00000042:
				case 0x00000043:
				case 0x00000044:
					switch (iParam0)
					{
						case 0x00000000:
							func_71(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_71(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_71(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_65(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_71(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_71(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_71(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_71(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_71(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_71(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 0x00000063:
				case 0x00000064:
				case 0x00000065:
				case 0x00000066:
				case 0x00000068:
				case 0x00000069:
				case 0x0000006A:
				case 0x0000006B:
				case 0x0000006C:
				case 0x0000006D:
				case 0x0000006E:
				case 0x0000006F:
				case 0x00000070:
				case 0x00000071:
					switch (iParam0)
					{
						case 0x00000000:
							func_71(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_71(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_71(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x7CF4675EC2B8ED0B())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_71(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_71(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_71(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_71(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_71(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_71(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_65(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_71(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_71(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_71(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_71(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_71(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_71(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_64(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_72(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_72(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_72(0x00000060, iParam3);
					break;
			}
			func_72(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_59(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_59(iVar1);
	}
	iVar5 = (Global_E53E[iVar2] + iParam3);
	switch (iParam1)
	{
		case 0x00000001:
			if (Global_E53E[iVar2] >= 0x00000000 && iParam3 > 0x00000000)
			{
				if (iVar5 <= 0x00000000)
				{
					Global_E53E[iVar2] = 0x7FFFFFFF;
				}
				else
				{
					Global_E53E[iVar2] = (Global_E53E[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0x00000000:
					func_71(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_71(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_71(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0x00000000:
			if (!bParam4)
			{
				if ((Global_E53E[iVar2] - iParam3) < 0x00000000)
				{
					return 0x00000000;
				}
			}
			iVar3 = Global_E53E[iVar2];
			Global_E53E[iVar2] = (Global_E53E[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 0x00000001)
	{
		if (iVar4 > 0x00000014)
		{
		}
	}
	else
	{
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/]++;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1++;
		if (Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 > 0x0000000A)
		{
			Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 = 0x00000000;
		}
	}
	func_58(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_57(0x00000000);
	}
	return 0x00000001;
}

void func_57(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000B)
		{
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		Global_E546[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F[iVar0];
		Global_E546.f_1F[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_B[iVar0];
		Global_E546.f_3E[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_16[iVar0];
		Global_E546.f_5D[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_21[iVar0];
		Global_E546.f_7C[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_2C[iVar0];
		Global_E546.f_9B[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_37[iVar0];
		Global_E546.f_BA[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_42[iVar0];
		Global_E546.f_D9[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_4D[iVar0];
		Global_E546.f_F8[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_58[iVar0];
		if (!bParam0)
		{
			Global_E546[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F[iVar0];
			Global_E546.f_1F[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_B[iVar0];
			Global_E546.f_3E[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_16[iVar0];
			Global_E546.f_5D[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_21[iVar0];
			Global_E546.f_7C[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_2C[iVar0];
			Global_E546.f_9B[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_37[iVar0];
			Global_E546.f_BA[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_42[iVar0];
			Global_E546.f_D9[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_4D[iVar0];
			Global_E546.f_F8[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_E53E[iParam0];
	switch (iParam0)
	{
		case 0x00000000:
			unk_0xCDC520E5E48E63D9(joaat("sp0_total_cash"), iVar0, 0x00000001);
			break;
		
		case 0x00000001:
			unk_0xCDC520E5E48E63D9(joaat("sp1_total_cash"), iVar0, 0x00000001);
			break;
		
		case 0x00000002:
			unk_0xCDC520E5E48E63D9(joaat("sp2_total_cash"), iVar0, 0x00000001);
			break;
	}
}

void func_59(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_51(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_51(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_51(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_51(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_62(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_62(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_62(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_62(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_62(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_62(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	bVar0 = 0x00000000;
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0))
		{
			bVar0 = 0x00000001;
			unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_61() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_61() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_60(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "COUP_HAIRC";
		
		case 0x00000001:
			return "COUP_TATTOO";
		
		case 0x00000002:
			return "COUP_WARSTOCK";
		
		case 0x00000003:
			return "COUP_MOSPORT";
		
		case 0x00000004:
			return "COUP_ELITAS";
		
		case 0x00000005:
			return "COUP_MEDSPENS";
		
		case 0x00000006:
			return "COUP_SPRUNK";
		
		case 0x00000007:
			return "COUP_RESPRAY";
		
		case 0x00000008:
			return "COUP_XMAS2017";
		
		case 0x00000009:
			return "COUP_CAR_XMAS2018";
		
		case 0x0000000A:
			return "COUP_HELI_XMAS2018";
		
		case 0x0000000B:
			return "COUP_CAR2_XMAS2018";
		
		case 0x0000000C:
			return "COUP_CAS_ELITAS";
		
		case 0x0000000D:
			return "COUP_CAS_DOCKTEASE";
		
		case 0x0000000E:
			return "COUP_CAS_MOSPORT";
		
		case 0x0000000F:
			return "COUP_CAS_SSASA";
		
		case 0x00000010:
			return "COUP_CAS_WARSTOCK";
		
		case 0x00000011:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_61()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_62(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_63(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_63(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_52();
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

void func_64(int iParam0)
{
	func_72(0x0000005D, iParam0);
	func_72(0x0000001D, iParam0);
	func_72(0x0000001E, iParam0);
}

bool func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 0x00000008)
	{
		return func_67(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_67(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_67(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_67(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_66(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_66(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_66(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_66(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_66(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_66(0x00002052, 0xFFFFFFFF, 0x00000000);
		if (iVar11 == 0x00000000 || iVar10 >= iVar11)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_61() /*10930*/].f_181E.f_A, iParam0);
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_63(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_52();
	}
	iVar1 = func_69(iParam0, iParam1);
	uVar2 = func_68(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
	}
	return iVar0;
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_52();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_70(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (unk_0x5E109EC687D2605A(0x0000001B))
	{
		return 0x00000000;
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp0_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp1_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp2_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0x00000000;
	unk_0x6FB46C25CCB7E6D5(joaat("num_cash_spent"), &iVar2, 0xFFFFFFFF);
	if (iVar1 > 0x00000000 && (iVar2 / 0x001E8480) != (iVar1 / 0x001E8480))
	{
		unk_0xCDC520E5E48E63D9(joaat("num_cash_spent"), iVar1, 0x00000001);
		func_50(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_33(0x0000001B, 0x00000001);
	return 0x00000001;
}

void func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_72(int iParam0, int iParam1)
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

void func_73()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000000] == iVar0)
		{
			Global_E53E[0x00000000] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000001] == iVar0)
		{
			Global_E53E[0x00000001] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000002] == iVar0)
		{
			Global_E53E[0x00000002] = iVar0;
		}
	}
}

int func_74(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000063;
			break;
		
		case 0x00000001:
			return 0x00000064;
			break;
		
		case 0x00000002:
			return 0x00000065;
			break;
		
		case 0x00000003:
			return 0x00000066;
			break;
		
		case 0x00000004:
			return 0x00000067;
			break;
		
		case 0x00000005:
			return 0x00000068;
			break;
		
		case 0x00000006:
			return 0x00000069;
			break;
		
		case 0x00000007:
			return 0x0000006A;
			break;
		
		case 0x00000008:
			return 0x0000006B;
			break;
		
		case 0x00000009:
			return 0x0000006C;
			break;
		
		case 0x0000000A:
			return 0x0000006D;
			break;
		
		case 0x0000000B:
			return 0x0000006E;
			break;
		
		case 0x0000000C:
			return 0x0000006F;
			break;
		
		case 0x0000000D:
			return 0x00000070;
			break;
		
		case 0x0000000E:
			return 0x00000071;
			break;
		
		case 0x0000000F:
			return 0x00000019;
			break;
	}
	return 0x00000000;
}

int func_76(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	
	unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9());
	vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_55)
	{
		bVar2 = func_12(&(uParam0->f_1), uParam0->f_A);
		if (!(iParam1[uParam0->f_A /*11*/])->f_A)
		{
			if (!bVar2)
			{
				if (!func_108((iParam1[uParam0->f_A /*11*/])->f_6, 0f, 0f, 0f, 0x00000000))
				{
					func_106(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0x00000000, 0x00000001, 0x00000000);
				}
				else
				{
					func_106(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0x00000000, 0x00000000, 0x00000002);
				}
			}
		}
		else if (!bVar2)
		{
			if (func_93(uParam0, iParam1, vVar1))
			{
				if (func_11(uParam0, iParam1, vVar1, &iLocal_54))
				{
					func_53(0x00000003, 0x000059D8);
					func_8();
				}
			}
		}
		func_90(uParam0->f_A, bVar2);
		uParam0->f_A++;
		if (uParam0->f_A >= *iParam1)
		{
			uParam0->f_A = 0x00000000;
		}
		iVar0++;
	}
	if (!Global_12C52)
	{
		func_83(&(uParam0->f_B), &(uParam0->f_C), &(uParam0->f_9), 0x00000003, &iLocal_56, &iLocal_57, "SUBM_TITLE", "SUBM_COLLECT");
	}
	if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
	{
		func_82();
		func_125(0x00000000);
		func_77(0x00000000);
	}
	if (!uParam0->f_C && !uParam0->f_B)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0x00000000;
}

void func_77(int iParam0)
{
	if (func_81())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_80())
		{
			func_79(0x00000001, 0x00000001);
		}
		else
		{
			func_79(0x00000000, 0x00000000);
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
	if (!func_78())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_78()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_79(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_19(0x00000000))
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

bool func_80()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_81()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_82()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000001E);
}

void func_83(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_89(0x00000000);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0x00000000:
				*iParam5 = unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
				if (unk_0x83D8570832F172A7(*iParam5))
				{
					iVar0 = unk_0xD68EA767274B7444();
					if (iParam3 == 0x00000006)
					{
						unk_0x4D7F4CC43D4D0DE3(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 0x00000001);
					}
					else
					{
						unk_0x4D7F4CC43D4D0DE3(iVar0, "COLLECTED", "HUD_AWARDS", 0x00000001);
					}
					*iParam4++;
				}
				break;
			
			case 0x00000001:
				unk_0x7E60C62A7CE58FC8(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x7ACC3006A87F8B39(sParam6);
				unk_0x779B34565F4D71B1();
				unk_0x7ACC3006A87F8B39(sParam7);
				unk_0x6D99DF8263D35CE5(func_85(iParam3));
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
				*uParam2 = unk_0x1C0640BA9A7327B3();
				*iParam4++;
				break;
			
			case 0x00000002:
				if ((unk_0x1C0640BA9A7327B3() - *uParam2) > 0x00001B58)
				{
					unk_0x7E60C62A7CE58FC8(*iParam5, "SHARD_ANIM_OUT");
					unk_0x3CAEA85DA607305E(0x00000001);
					unk_0x7C19E5E4784BD7CF(0.33f);
					unk_0x7E60D21B163E9D56();
					*iParam4++;
				}
				else if (!func_84())
				{
					if (unk_0x83D8570832F172A7(*iParam5))
					{
						func_89(0x00000001);
						unk_0x6567AE843FADBA94(*iParam5, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
					}
				}
				break;
			
			case 0x00000003:
				if ((unk_0x1C0640BA9A7327B3() - *uParam2) > 0x00001D4C)
				{
					*iParam4++;
				}
				else if (!func_84())
				{
					if (unk_0x83D8570832F172A7(*iParam5))
					{
						func_89(0x00000001);
						unk_0x6567AE843FADBA94(*iParam5, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
					}
				}
				break;
			
			case 0x00000004:
				if (unk_0x83D8570832F172A7(*iParam5))
				{
					unk_0xE17FDF9E3068281B(iParam5);
				}
				func_89(0x00000000);
				*uParam1 = 0x00000000;
				*uParam0 = 0x00000000;
				*iParam4 = 0x00000000;
				break;
			}
	}
}

int func_84()
{
	if (Global_12C52)
	{
		return 0x00000001;
	}
	else if (Global_F042 && !Global_F048)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000002)
	{
		iVar1 = 0x00000000;
		while (iVar1 < func_88(iParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_6C, func_87(func_88(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 0x00000006)
	{
		unk_0x6FB46C25CCB7E6D5(joaat("num_hidden_packages_5"), &iVar0, 0xFFFFFFFF);
	}
	else if (iParam0 == 0x00000007)
	{
		unk_0x6FB46C25CCB7E6D5(joaat("num_hidden_packages_7"), &iVar0, 0xFFFFFFFF);
	}
	else if (iParam0 == 0x00000008)
	{
		unk_0x6FB46C25CCB7E6D5(joaat("num_hidden_packages_6"), &iVar0, 0xFFFFFFFF);
	}
	else
	{
		iVar1 = 0x00000000;
		while (iVar1 < func_88(iParam0))
		{
			iVar2 = (func_86(iParam0) + iVar1);
			if (func_67(iVar2, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_86(int iParam0)
{
	if (iParam0 == 0x00000003)
	{
		return 0x0000032F;
	}
	if (iParam0 == 0x00000005)
	{
		return 0x0000034D;
	}
	if (iParam0 == 0x00000001)
	{
		return 0x000002C1;
	}
	if (iParam0 == 0x00000000)
	{
		return 0x000002F3;
	}
	return 0x00000325;
}

int func_87(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000020)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_88(int iParam0)
{
	if (iParam0 == 0x00000003)
	{
		return 0x0000001E;
	}
	if (iParam0 == 0x00000001)
	{
		return 0x00000032;
	}
	if (iParam0 == 0x00000000)
	{
		return 0x00000032;
	}
	if (iParam0 == 0x00000004)
	{
		return 0x0000000A;
	}
	if (iParam0 == 0x00000005)
	{
		return 0x0000001E;
	}
	return 0x0000000F;
}

void func_89(int iParam0)
{
	if (Global_12C59 != iParam0)
	{
		Global_12C59 = iParam0;
	}
}

void func_90(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (func_92(iParam0) == 0x00000000)
	{
		return;
	}
	if (iLocal_58[iParam0] == 0xFFFFFFFF)
	{
		if (!bParam1 && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), Local_48[iParam0 /*11*/].f_3) < (100f * 100f))
			{
				if (func_91(&iVar0))
				{
					unk_0x15FB4EE83E6F534A(iVar0, Local_48[iParam0 /*11*/].f_3, 8f);
					iLocal_58[iParam0] = iVar0;
				}
			}
		}
	}
	else if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), Local_48[iParam0 /*11*/].f_3) > (105f * 105f))
		{
			if (iLocal_58[iParam0] >= 0x00000000 && iLocal_58[iParam0] < 0x00000008)
			{
				unk_0xF8E35187F96B020B(iLocal_58[iParam0]);
				iLocal_58[iParam0] = 0xFFFFFFFF;
			}
		}
	}
}

int func_91(var uParam0)
{
	*uParam0 = 0x00000000;
	*uParam0 = 0x00000000;
	while (*uParam0 < 0x00000008)
	{
		if (!unk_0xBF241E938F480998(*uParam0))
		{
			return 0x00000001;
		}
		*uParam0++;
	}
	*uParam0 = 0xFFFFFFFF;
	return 0x00000000;
}

int func_92(int iParam0)
{
	if (iParam0 == 0x00000017)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_93(var uParam0, var uParam1, vector3 vParam2)
{
	int iVar0;
	
	iVar0 = uParam0->f_A;
	if ((uParam1[iVar0 /*11*/])->f_A)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0x00000000)
		{
			if (unk_0xEB751B41BC4080D4((uParam1[iVar0 /*11*/])->f_1) || func_105((uParam1[iVar0 /*11*/])->f_1))
			{
				func_95(uParam0, uParam1, iVar0);
				return 0x00000001;
			}
		}
	}
	if (unk_0x762119754C50557A((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((SYSTEM::VDIST2(vParam2, unk_0xE925E52ACABA4CE7((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_17(0x0000000D)) || func_17(0x0000000E))
		{
			func_94(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0x00000000;
			(uParam1[iVar0 /*11*/])->f_A = 0x00000000;
		}
	}
	return 0x00000000;
}

void func_94(var uParam0)
{
	if (unk_0x762119754C50557A(*uParam0))
	{
		unk_0x40B7230FD4C59AA2(*uParam0);
	}
}

void func_95(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (func_86(*uParam0) + iParam2);
	func_94(&((uParam1[iParam2 /*11*/])->f_1));
	func_104(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0x00000000;
	(uParam1[iParam2 /*11*/])->f_A = 0x00000000;
	func_103(&(uParam0->f_1), iParam2, 0x00000001);
	if (*uParam0 == 0x00000001 || *uParam0 == 0x00000000)
	{
		func_102(*uParam0, iParam2, 0x00000001);
	}
	unk_0x5E858A00EAFA5B24(0x00000000, 0x000000C8, 0x000000FA);
	unk_0x9505C13496579D28(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_101(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_99(&(uParam0->f_1));
	}
	func_97();
	unk_0x9EA96DA1925F0CA2(iVar0);
	func_96(0x00000001, 0x00000000);
	func_48();
	uParam0->f_B = 0x00000001;
}

void func_96(int iParam0, int iParam1)
{
	Global_181DF.f_7 = iParam0;
	Global_181DF.f_8 = iParam1;
}

void func_97()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0x00000000;
	unk_0x6FB46C25CCB7E6D5(func_98(0x00000000), &iVar0, 0xFFFFFFFF);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0x00000000)
	{
		func_50(0x00000012, iVar0);
	}
	unk_0x6FB46C25CCB7E6D5(func_98(0x00000001), &iVar0, 0xFFFFFFFF);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0x00000000)
	{
		func_50(0x00000013, iVar0);
	}
	unk_0x6FB46C25CCB7E6D5(func_98(0x00000003), &iVar0, 0xFFFFFFFF);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0x00000000)
	{
		func_50(0x00000014, iVar0);
	}
	iVar2 = ((func_88(0x00000000) + func_88(0x00000001)) + func_88(0x00000003));
	if (iVar2 > 0x00000000)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0xCDC520E5E48E63D9(joaat("percent_hidden_packages"), iVar3, 0x00000001);
}

int func_98(int iParam0)
{
	if (iParam0 == 0x00000003)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 0x00000001)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0x00000000)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 0x00000005)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_99(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	if (uParam0->f_3 <= 0x00000000)
	{
	}
	if (uParam0->f_2 <= 0x00000000)
	{
	}
	if (bLocal_40)
	{
	}
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_3)
	{
		if (func_12(uParam0, iVar0))
		{
			iVar1++;
			func_51((uParam0->f_2 + iVar0), 0x00000001, 0xFFFFFFFF, 0x00000001);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 0x000002C1)
	{
		func_100(0x000000A8, 0x00000000);
	}
}

void func_100(int iParam0, int iParam1)
{
	if (iParam0 == 0x000000EB || iParam0 == 0x00000000)
	{
		return;
	}
	Global_1B416.f_21A0[iParam0] = 0x00000001;
	Global_1B416.f_21A0.f_EC[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

void func_101(var uParam0, int iParam1)
{
	if (uParam0->f_3 <= 0x00000000)
	{
	}
	if (uParam0->f_2 <= 0x00000000)
	{
	}
	if (bLocal_40)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_12(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_51((uParam0->f_2 + iParam1), 0x00000001, 0xFFFFFFFF, 0x00000001);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 0x000002C1)
	{
		func_100(0x000000A8, 0x00000000);
	}
}

void func_102(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000040)
	{
		return;
	}
	if (iParam0 == 0x00000001)
	{
		if (iParam1 <= 0x0000001F)
		{
			if (bParam2)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_7A), iParam1);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_273C.f_7A), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_7A.f_1), (iParam1 - 0x00000020));
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_273C.f_7A.f_1), (iParam1 - 0x00000020));
		}
	}
	else if (iParam0 == 0x00000000)
	{
		if (iParam1 <= 0x0000001F)
		{
			if (bParam2)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_7D), iParam1);
			}
			else
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_273C.f_7D), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_7D.f_1), (iParam1 - 0x00000020));
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_273C.f_7D.f_1), (iParam1 - 0x00000020));
		}
	}
}

void func_103(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000040)
	{
		return;
	}
	if (iParam1 <= 0x0000001F)
	{
		if (bParam2)
		{
			unk_0x5D96D8530B3D0904(iParam0, iParam1);
		}
		else
		{
			unk_0x0674E58A79778E99(iParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(iParam0->f_1), (iParam1 - 0x00000020));
	}
	else
	{
		unk_0x0674E58A79778E99(&(iParam0->f_1), (iParam1 - 0x00000020));
	}
}

void func_104(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, 0x00000000);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

int func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0x00000000;
	}
	if (func_109(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0xE925E52ACABA4CE7(iParam0)) < (5f * 5f) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), unk_0x41486C7390D3EBBF(iParam0)))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_106(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (!uParam0->f_A)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_17(0x0000000D) && !func_17(0x0000000E))
			{
				if (!unk_0x762119754C50557A(uParam0->f_1))
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), uParam0->f_3) <= (50f * 50f))
					{
						unk_0x523BCC9DC80CD82F(iParam1);
						while (!unk_0xB87F6CF6E5628C67(iParam1))
						{
							unk_0x523BCC9DC80CD82F(iParam1);
							SYSTEM::WAIT(0x00000000);
						}
						if (bParam3)
						{
							func_107(uParam0->f_3);
						}
						unk_0x536F1BE96C726C4B(uParam0->f_3, 2.5f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						if (bParam4)
						{
							unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
							uParam0->f_1 = unk_0x2D7B5CDDF12654D2(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, iVar0, 0xFFFFFFFF, iParam5, 0x00000001, iParam1);
						}
						else
						{
							unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
							unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
							unk_0x5D96D8530B3D0904(&iVar0, 0x00000008);
							unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
							uParam0->f_1 = unk_0xA6FF0828D17CF374(iParam2, uParam0->f_3, iVar0, 0xFFFFFFFF, 0x00000001, iParam1);
						}
						unk_0x71199B01895C6202(iParam1);
					}
				}
			}
			if (unk_0x762119754C50557A(uParam0->f_1))
			{
				uParam0->f_A = 0x00000001;
			}
		}
	}
}

void func_107(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = unk_0xFBD08BECC9B87937(vParam0);
	if (unk_0x31609A585163CBAC(iVar0))
	{
		unk_0x0007C2367F4F23F3(iVar0);
		while (!unk_0xBD307E66C0669BFC(iVar0))
		{
			SYSTEM::WAIT(0x00000000);
		}
		SYSTEM::WAIT(0x00000000);
		unk_0x25BB71BA267FE042(iVar0);
	}
}

bool func_108(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_109(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_110()
{
	if (func_109(unk_0x16F2683693E537C9()))
	{
		if (!unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
		{
			func_125(0x00000000);
			func_77(0x00000000);
			unk_0x34D79252800B23FF(0x00000005);
			func_6(0x00000002);
		}
		else
		{
			if (!func_117(0x0000000F))
			{
				func_114("SUBM_HELP1", 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
				func_113(0x0000000F);
			}
			if (!func_112())
			{
				func_125(0x00000001);
				if (!iLocal_52 && !Local_42.f_1.f_4 >= Local_42.f_1.f_3)
				{
					func_114("SUBM_TRKHELP", 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
					iLocal_52 = 0x00000001;
				}
			}
			func_111();
			if (func_76(&Local_42, &Local_48))
			{
				func_30();
			}
		}
	}
}

void func_111()
{
	iLocal_53++;
	if ((iLocal_53 % 0x0000001E) == 0x00000000 || iLocal_54 == 0xFFFFFFFF)
	{
		if (func_11(&Local_42, &Local_48, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), &iLocal_54))
		{
			func_8();
		}
	}
}

int func_112()
{
	if (unk_0x8A22C4C08282BF26(joaat("apptrackify")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0x00000000;
	while (iVar0 > 0x0000001F)
	{
		iVar0 = (iVar0 - 0x00000020);
		iVar1++;
	}
	if (iVar1 < 0x00000003)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_4FB5.f_96[iVar1]), iVar0);
	}
}

void func_114(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_115(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_115(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0x00000000)
	{
		return;
	}
	if (iParam5 < 0x000001F4 && iParam5 != 0xFFFFFFFF)
	{
		return;
	}
	if (iParam4 < 0x00000000 && iParam4 != 0xFFFFFFFF)
	{
		return;
	}
	if (iParam6 < 0x00000001 || iParam6 > 0x00000007)
	{
		return;
	}
	if (iParam7 == 0x000000EB)
	{
		return;
	}
	if (iParam8 == 0x000000EB)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_4FB5[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_1B416.f_4FB5.f_91 < 0x00000009)
	{
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_4), sParam1, 16);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_9 = iParam5;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_B = iParam6;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_C = uParam2;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_D = iParam7;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_E = iParam8;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 0xFFFFFFFF)
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = 0xFFFFFFFF;
		}
		Global_1B416.f_4FB5.f_91++;
		func_116();
	}
}

void func_116()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Global_1B416.f_4FB5.f_92[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000000))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000000])
			{
				Global_1B416.f_4FB5.f_92[0x00000000] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000001))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000001])
			{
				Global_1B416.f_4FB5.f_92[0x00000001] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000002))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000002])
			{
				Global_1B416.f_4FB5.f_92[0x00000002] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

int func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0x00000000;
	while (iVar0 > 0x0000001F)
	{
		iVar0 = (iVar0 - 0x00000020);
		iVar1++;
	}
	if (iVar1 < 0x00000003)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5.f_96[iVar1], iVar0);
	}
	return 0x00000000;
}

void func_118()
{
	iLocal_56 = 0x00000000;
	func_122();
	func_121(&Local_42, 0x00000003, joaat("prop_rad_waste_barrel_01"), "SUBM_COLLECT");
	func_119(&Local_42, joaat("num_hidden_packages_3"), 0x0000032F, 0x0000001E);
	if (func_109(unk_0x16F2683693E537C9()))
	{
		if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
		{
			unk_0x34D79252800B23FF(0x00000000);
			func_6(0x00000001);
		}
		else
		{
			unk_0x34D79252800B23FF(0x00000005);
			func_6(0x00000002);
		}
	}
}

void func_119(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_120(&(uParam0->f_1), iParam2, iParam3);
}

void func_120(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	*iParam0 = 0x00000000;
	iParam0->f_1 = 0x00000000;
	iParam0->f_2 = uParam1;
	iParam0->f_3 = uParam2;
	if (bLocal_40)
	{
	}
	iVar0 = 0x00000000;
	while (iVar0 < iParam0->f_3)
	{
		if (func_67((iParam0->f_2 + iVar0), 0xFFFFFFFF, 0xFFFFFFFF))
		{
			iVar1++;
			func_103(iParam0, iVar0, 0x00000001);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	iParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_121(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_A = 0x00000000;
}

void func_122()
{
	int iVar0;
	
	Local_48[0x00000000 /*11*/].f_3 = { func_10(0x00000000) };
	Local_48[0x00000000 /*11*/].f_9 = 179.47f;
	Local_48[0x00000001 /*11*/].f_3 = { func_10(0x00000001) };
	Local_48[0x00000001 /*11*/].f_9 = 104f;
	Local_48[0x00000002 /*11*/].f_3 = { func_10(0x00000002) };
	Local_48[0x00000002 /*11*/].f_9 = 321.5f;
	Local_48[0x00000003 /*11*/].f_3 = { func_10(0x00000003) };
	Local_48[0x00000003 /*11*/].f_9 = -29.79f;
	Local_48[0x00000004 /*11*/].f_3 = { func_10(0x00000004) };
	Local_48[0x00000004 /*11*/].f_9 = -165.6f;
	Local_48[0x00000005 /*11*/].f_3 = { func_10(0x00000005) };
	Local_48[0x00000005 /*11*/].f_9 = 116f;
	Local_48[0x00000006 /*11*/].f_3 = { func_10(0x00000006) };
	Local_48[0x00000006 /*11*/].f_9 = -68.65f;
	Local_48[0x00000007 /*11*/].f_3 = { func_10(0x00000007) };
	Local_48[0x00000007 /*11*/].f_9 = 40f;
	Local_48[0x00000008 /*11*/].f_3 = { func_10(0x00000008) };
	Local_48[0x00000008 /*11*/].f_9 = 40f;
	Local_48[0x00000009 /*11*/].f_3 = { func_10(0x00000009) };
	Local_48[0x00000009 /*11*/].f_9 = 40f;
	Local_48[0x0000000A /*11*/].f_3 = { func_10(0x0000000A) };
	Local_48[0x0000000A /*11*/].f_9 = 40f;
	Local_48[0x0000000B /*11*/].f_3 = { func_10(0x0000000B) };
	Local_48[0x0000000B /*11*/].f_9 = 27.04f;
	Local_48[0x0000000C /*11*/].f_3 = { func_10(0x0000000C) };
	Local_48[0x0000000C /*11*/].f_9 = 40f;
	Local_48[0x0000000D /*11*/].f_3 = { func_10(0x0000000D) };
	Local_48[0x0000000D /*11*/].f_9 = 40f;
	Local_48[0x0000000E /*11*/].f_3 = { func_10(0x0000000E) };
	Local_48[0x0000000E /*11*/].f_9 = 40f;
	Local_48[0x0000000F /*11*/].f_3 = { func_10(0x0000000F) };
	Local_48[0x0000000F /*11*/].f_9 = 40f;
	Local_48[0x00000010 /*11*/].f_3 = { func_10(0x00000010) };
	Local_48[0x00000010 /*11*/].f_6 = { 89.94f, 61.93f, 90.94f };
	Local_48[0x00000011 /*11*/].f_3 = { func_10(0x00000011) };
	Local_48[0x00000011 /*11*/].f_9 = 40f;
	Local_48[0x00000012 /*11*/].f_3 = { func_10(0x00000012) };
	Local_48[0x00000012 /*11*/].f_9 = 40f;
	Local_48[0x00000013 /*11*/].f_3 = { func_10(0x00000013) };
	Local_48[0x00000013 /*11*/].f_9 = 40f;
	Local_48[0x00000014 /*11*/].f_3 = { func_10(0x00000014) };
	Local_48[0x00000014 /*11*/].f_9 = 40f;
	Local_48[0x00000015 /*11*/].f_3 = { func_10(0x00000015) };
	Local_48[0x00000015 /*11*/].f_9 = 40f;
	Local_48[0x00000016 /*11*/].f_3 = { func_10(0x00000016) };
	Local_48[0x00000016 /*11*/].f_9 = 40f;
	Local_48[0x00000017 /*11*/].f_3 = { func_10(0x00000017) };
	Local_48[0x00000017 /*11*/].f_9 = 40f;
	Local_48[0x00000018 /*11*/].f_3 = { func_10(0x00000018) };
	Local_48[0x00000018 /*11*/].f_9 = 40f;
	Local_48[0x00000019 /*11*/].f_3 = { func_10(0x00000019) };
	Local_48[0x00000019 /*11*/].f_9 = 198f;
	Local_48[0x0000001A /*11*/].f_3 = { func_10(0x0000001A) };
	Local_48[0x0000001A /*11*/].f_9 = 198f;
	Local_48[0x0000001B /*11*/].f_3 = { func_10(0x0000001B) };
	Local_48[0x0000001B /*11*/].f_9 = 198f;
	Local_48[0x0000001C /*11*/].f_3 = { func_10(0x0000001C) };
	Local_48[0x0000001C /*11*/].f_9 = 198f;
	Local_48[0x0000001D /*11*/].f_3 = { func_10(0x0000001D) };
	Local_48[0x0000001D /*11*/].f_9 = -109.43f;
	func_123(&Local_48);
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000001E)
	{
		iLocal_58[iVar0] = 0xFFFFFFFF;
		iVar0++;
	}
}

void func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *iParam0)
	{
		(iParam0[iVar0 /*11*/])->f_A = 0x00000000;
		iVar0++;
	}
}

bool func_124(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

void func_125(bool bParam0)
{
	if (bParam0)
	{
		Global_1B416.f_36DE.f_59 = 0x00000001;
	}
	else
	{
		Global_1B416.f_36DE.f_59 = 0x00000000;
	}
}

int func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 0x0000001F)
	{
		iVar0 = 0x00000009;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 0x0000000A;
		iVar1 = (iParam0 - 0x00000020);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iVar0], iVar1))
	{
		return 0x00000000;
	}
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_2378.f_63.f_DB[iVar0]), iVar1);
	return 0x00000001;
}

void func_127()
{
	int iVar0;
	
	unk_0x34D79252800B23FF(0x00000005);
	func_5();
	iVar0 = 0x00000000;
	while (iVar0 < Local_48)
	{
		func_104(&(Local_48[iVar0 /*11*/].f_2));
		func_94(&(Local_48[iVar0 /*11*/].f_1));
		if (iLocal_58[iVar0] >= 0x00000000 && iLocal_58[iVar0] < 0x00000008)
		{
			unk_0xF8E35187F96B020B(iLocal_58[iVar0]);
		}
		iVar0++;
	}
	if (func_129(&(Local_42.f_1)))
	{
		func_128(0x0000000D);
	}
	func_82();
	func_125(0x00000000);
	func_77(0x00000000);
	unk_0x71199B01895C6202(Local_42.f_7);
	unk_0x10FAF14A60A0DBE1();
}

int func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 0x0000001F)
	{
		iVar0 = 0x00000009;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 0x0000000A;
		iVar1 = (iParam0 - 0x00000020);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iVar0], iVar1))
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_2378.f_63.f_DB[iVar0]), iVar1);
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_129(var uParam0)
{
	if (uParam0->f_3 <= 0x00000000)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

