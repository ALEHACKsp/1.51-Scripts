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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_81 = 0x00000032 + 1000;
	iLocal_82 = 0x0000003A + 1000;
	iLocal_91 = 0x00000027;
	unk_0xE1EFAB351350CAAB(0x00000001);
	unk_0xB57F88F0123F4C38();
	unk_0xD9ACBBA59FD5A09E(0x00000001);
	if ((unk_0xDC30EF462887322E() || unk_0x33A494591F2C1975()) || unk_0x0EFF6B4415DAF4A1())
	{
		iLocal_91 = 0x00000028;
	}
	switch (iScriptParam_92)
	{
		case 0x00000003:
			while (iLocal_83 == 0x00000000)
			{
				SYSTEM::WAIT(0x00000000);
				func_53();
				if (func_49(0x000000CA))
				{
					unk_0x8081DF53427338B1();
					iLocal_83 = 0x00000001;
				}
				if (unk_0xCB0673E2C22B1B2D())
				{
					if (iLocal_90 == 0x00000000)
					{
						if (func_48())
						{
							func_45();
						}
					}
					else
					{
						unk_0x3BD0DFBDFB3F80EC(&uVar0, &iVar1, &iVar2);
						if (iVar1 == 0x00000032)
						{
							iLocal_87 = iVar2;
							func_1(&uLocal_89);
						}
					}
				}
			}
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
	}
	unk_0x64366F76B4845277(0x9075C0BE);
	unk_0x64366F76B4845277(0x14211B54);
	unk_0xDD7BA5AE5BCBFA2A(0x00000000);
	unk_0x8081DF53427338B1();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
	}
}

int func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_44(0x00000000, iLocal_87, 0x00000000, 0x00000001);
	func_43(0x00000001);
	iVar0 = 0x00000000;
	switch (iLocal_87)
	{
		case 0x00000000:
			iVar1 = 0x00000000;
			while (iVar1 < 0x0000000D)
			{
				iVar2 = func_42(iVar1);
				iVar3 = func_39(iVar1);
				if (iVar2 > iVar3)
				{
					iVar3 = iVar2;
				}
				func_37(&iVar0, iVar2, iVar3);
				iVar1++;
			}
			break;
		
		case 0x00000001:
			iVar1 = 0x00000000;
			while (iVar1 < 0x00000031)
			{
				func_27(&iVar0, func_28(iVar1));
				iVar1++;
			}
			break;
		
		case 0x00000002:
			func_16(&iVar0, "PM_UCON_T21", func_18(0x0000001F, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T22", func_18(0x00000020, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T0", func_18(0x00000001, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T1", func_18(0x00000002, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T2", func_18(0x00000015, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T3", func_18(0x0000003B, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T4", func_18(0x0000001E, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T6", func_18(0x00000001, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T5", func_18(0x0000005A, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T8", func_18(0x0000000D, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T7", func_18(0x00000016, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T9", func_18(0x0000003C, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T11", func_18(0x00000017, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T10", func_18(0x0000004C, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T15", func_18(0x0000000F, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T14", func_18(0x0000000E, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T13", func_18(0x0000000B, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T38", func_18(0x0000007A, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T16", func_18(0x0000001B, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T12", func_18(0x0000000C, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T43", func_18(0x00000004, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T17", func_18(0x00000013, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T18", func_18(0x0000001D, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T19", func_18(0x00000008, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T20", func_18(0x0000003D, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T42", func_18(0x00000077, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T49", func_18(0x00000060, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T41", func_18(0x0000007F, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T39", func_18(0x0000007E, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T48", func_18(0x0000004E, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T40", func_18(0x0000007C, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T44", func_18(0x00000067, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T23", func_18(0x00000003, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T24", func_18(0x0000004A, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T25", func_18(0x00000006, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T26", func_18(0x00000014, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T27", func_18(0x0000003E, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T28", func_18(0x00000041, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T29", func_18(0x0000003F, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T45", func_18(0x00000068, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T30", func_18(0x0000004D, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T46", func_18(0x00000062, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T31", func_18(0x00000051, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T32", func_18(0x0000004B, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T33", func_18(0x0000005F, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T47", func_18(0x00000069, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T35", func_18(0x00000040, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T34", func_18(0x00000043, 0x00000000, 0x00000000));
			func_16(&iVar0, "PM_UCON_T37", func_9(func_11(unk_0xD803B885F5E47A62(), 0x00000001), 0x00000000) >= 0x00000064);
			func_16(&iVar0, "PM_UCON_T36", func_9(func_11(unk_0xD803B885F5E47A62(), 0x00000001), 0x00000000) >= func_8(0x00000004, 0x000000AA));
			break;
	}
	if (iVar0 > 0x00000010)
	{
		iLocal_88 = 0x00000001;
		func_7(0x00000001, 0x00000002, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_5(0x00000001, 0x00000000, iVar0, 0x00000000, 0x00000000);
		unk_0x8134AB7E30C9809E(0x9075C0BE);
	}
	else
	{
		iLocal_88 = 0x00000000;
		func_5(0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000);
		unk_0x64366F76B4845277(0x9075C0BE);
	}
	unk_0x8134AB7E30C9809E(0x14211B54);
	unk_0xDD7BA5AE5BCBFA2A(0x00000000);
	func_4(0x00000001);
	func_2(0x00000001);
	*uParam0 = 0x00000001;
	return 0x00000001;
}

void func_2(int iParam0)
{
	func_3(iParam0, 0x00000001);
}

void func_3(int iParam0, bool bParam1)
{
	if (unk_0x673DE2AC97BFD28A("SHOW_COLUMN"))
	{
		unk_0x3CAEA85DA607305E(iParam0);
		unk_0x1200CC973A2399C8(bParam1);
		unk_0x7E60D21B163E9D56();
	}
	if (iParam0 == 0x00000002)
	{
		if (bParam1)
		{
			unk_0x0674E58A79778E99(&Global_140800, iParam0);
		}
		else
		{
			unk_0x5D96D8530B3D0904(&Global_140800, iParam0);
		}
	}
}

void func_4(int iParam0)
{
	if (unk_0x673DE2AC97BFD28A("DISPLAY_DATA_SLOT"))
	{
		unk_0x3CAEA85DA607305E(iParam0);
		unk_0x7E60D21B163E9D56();
	}
}

void func_5(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	unk_0x673DE2AC97BFD28A("SET_COLUMN_SCROLL");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(0xFFFFFFFF);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		unk_0x7ACC3006A87F8B39(sParam3);
		unk_0x6D99DF8263D35CE5(iParam1);
		unk_0x6D99DF8263D35CE5(iParam2);
		unk_0x779B34565F4D71B1();
	}
	else
	{
		func_6("");
	}
	unk_0x1200CC973A2399C8(bParam4);
	unk_0x7E60D21B163E9D56();
}

void func_6(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	unk_0x673DE2AC97BFD28A("INIT_COLUMN_SCROLL");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x1200CC973A2399C8(0x00000000);
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x1200CC973A2399C8(0x00000001);
	unk_0x3CAEA85DA607305E(iParam4);
	unk_0x1200CC973A2399C8(bParam5);
	unk_0x7E60D21B163E9D56();
}

int func_8(int iParam0, int iParam1)
{
	if (iParam0 == 0x00000003)
	{
		switch (iParam1)
		{
			case 0x00000086:
				return 0x00000000;
				break;
			
			case 0x00000088:
				return 0x00000001;
				break;
			
			case 0x00000089:
				return 0x00000001;
				break;
			
			case 0x000000A9:
				return 0x00000001;
				break;
		}
	}
	else if (iParam0 == 0x00000001)
	{
		switch (iParam1)
		{
			case 0x00000085:
				return 0x00000000;
				break;
		}
	}
	else if (iParam0 == 0x00000004)
	{
		switch (iParam1)
		{
			case 0x00000087:
				return 0x00000001;
				break;
			
			case 0x000000AA:
				return 0x00000064;
				break;
			}
	}
	switch (iParam1)
	{
		case 0x00000094:
			return 0x00000005;
			break;
		
		case 0x00000095:
			return 0x0000000A;
			break;
		
		case 0x00000096:
			return 0x00000019;
			break;
		
		case 0x00000097:
			return 0x00000032;
			break;
		
		case 0x0000009B:
			return 0x00000005;
			break;
		
		case 0x0000009C:
			return 0x0000000A;
			break;
		
		case 0x0000009D:
			return 0x00000019;
			break;
		
		case 0x0000009E:
			return 0x00000032;
			break;
		
		case 0x00000098:
			return 0x00000005;
			break;
		
		case 0x00000099:
			return 0x0000000A;
			break;
		
		case 0x0000009A:
			return 0x00000019;
			break;
		
		case 0x0000009F:
			return 0x00000019;
			break;
		
		case 0x000000A0:
			return 0x00000032;
			break;
		
		case 0x000000A1:
			return 0x00000064;
			break;
		
		case 0x000000A2:
			return 0x00000005;
			break;
		
		case 0x000000A3:
			return 0x0000000A;
			break;
		
		case 0x000000A4:
			return 0x00000019;
			break;
		
		case 0x000000A5:
			return 0x00000032;
			break;
	}
	if ((iParam0 == 0x00000001 || iParam0 == 0x00000002) || iParam0 == 0x00000000)
	{
		switch (iParam1)
		{
			case 0x0000008A:
				return 0x00000007;
			
			case 0x0000008B:
				return 0x00000009;
			
			case 0x0000008C:
				return 0x0000000B;
			
			case 0x0000008D:
				return 0x0000000D;
			
			case 0x0000008E:
				return 0x0000000F;
			
			case 0x0000008F:
				return 0x00000011;
			
			case 0x00000090:
				return 0x00000013;
			
			case 0x00000091:
				return 0x00000015;
			
			case 0x00000092:
				return 0x00000017;
			
			case 0x00000093:
				return 0x00000019;
			
			case 0x000000A6:
				return 0x00000001;
			
			case 0x000000A7:
				return 0x00000001;
			
			case 0x000000A8:
				return 0x00000001;
			}
		
		default:
	}
	return 0x00000000;
}

int func_9(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_10(iParam0, 0x00000000);
}

int func_10(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0x00000000)
	{
	}
	iVar1 = 0x00001F40;
	iVar2 = 0x00000000;
	iVar3 = ((iVar1 - iVar2) / 0x00000002);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000064)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 0x00001F40;
			if (iVar3 == 0x00000000)
			{
				iVar3 = 0x00000001;
			}
			return iVar3;
		}
		if (Global_4713D[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4713D[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 0x00000001);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 0x00001F40;
}

int func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_12(iParam0);
}

int func_12(int iParam0)
{
	if (Global_1406D3.f_9 == 0x00000000)
	{
		if (iParam0 > 0xFFFFFFFF)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_14(0xFFFFFFFF)];
			}
			else if (func_13(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_14(0xFFFFFFFF)];
	}
	return 0x00000000;
}

int func_13(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2537E2.f_1, iParam0);
	}
	return 0x00000001;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_15();
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

int func_15()
{
	return Global_1407E9;
}

void func_16(int iParam0, char* sParam1, bool bParam2)
{
	func_17(0x00000001, *iParam0, iLocal_82, *iParam0, sParam1, bParam2, 0x00000001);
	*iParam0++;
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (unk_0x673DE2AC97BFD28A("SET_DATA_SLOT"))
	{
		unk_0x3CAEA85DA607305E(iParam0);
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x3CAEA85DA607305E(iParam3);
		unk_0x3CAEA85DA607305E(0x00000000);
		unk_0x3CAEA85DA607305E(0x00000000);
		unk_0x3CAEA85DA607305E(0x00000001);
		func_6(sParam4);
		if (iParam5 == 0x00000001)
		{
			if (iParam6 == 0x00000000)
			{
				func_6("PM_UJOB_YES");
			}
			else
			{
				func_6("PM_UCON_ULK");
			}
		}
		else if (iParam6 == 0x00000000)
		{
			func_6("PM_UJOB_NO");
		}
		else
		{
			func_6("PM_UCON_LCK");
		}
		unk_0x7E60D21B163E9D56();
	}
}

bool func_18(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_40001.f_1E06 == 0x00000001)
	{
		if (iParam0 == 0x00000043)
		{
			return 0x00000001;
		}
		if (iParam0 == 0x0000004A)
		{
			return 0x00000001;
		}
		if (func_22(unk_0xD803B885F5E47A62(), 0x00000055))
		{
			if (((((iParam0 == 0x00000040 || iParam0 == 0x0000004D) || iParam0 == 0x0000003D) || iParam0 == 0x00000051) || iParam0 == 0x0000003F) || iParam0 == 0x0000003E)
			{
				return 0x00000001;
			}
		}
		if ((((((((((iParam0 == 0x00000042 || iParam0 == 0x00000074) || iParam0 == 0x00000067) || iParam0 == 0x00000068) || iParam0 == 0x00000069) || iParam0 == 0x00000077) || iParam0 == 0x00000058) || iParam0 == 0x0000004B) || iParam0 == 0x0000005F) || iParam0 == 0x00000041) || iParam0 == 0x00000062)
		{
			return 0x00000001;
		}
	}
	if (iParam0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x0000001F)
	{
		if (Global_40001.f_126E == 0x00000001)
		{
			return 0x00000001;
		}
	}
	if (func_21() || func_20())
	{
		return 0x00000001;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 0x00000020);
	iVar0 = (iVar0 % 0x00000020);
	if (bParam1)
	{
		if (iParam0 == 0x00000003)
		{
			if (func_19())
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	if (bParam2)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1806ED[iVar1], iVar0);
}

int func_19()
{
	int iVar0;
	
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_6C3, 0x00000017))
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
	iVar0 = Global_152E10[func_14(0xFFFFFFFF)];
	if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000007))
	{
		unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C3), 0x00000017);
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_20()
{
	return Global_140861;
}

bool func_21()
{
	return Global_140863;
}

bool func_22(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_25())
	{
		return 0x00000000;
	}
	if (func_24())
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000056)
	{
		return 0x00000001;
	}
	uVar0 = func_23(iParam1);
	iVar1 = uVar0;
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_2DA, iVar1);
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000056:
			return 0x00000000;
		
		case 0x00000013:
			return 0x00000001;
		
		case 0x0000000C:
			return 0x00000002;
		
		case 0x0000001F:
			return 0x00000003;
		
		case 0x00000014:
			return 0x00000004;
		
		case 0x00000012:
			return 0x00000005;
		
		case 0x00000002:
			return 0x00000006;
		
		case 0x0000004C:
			return 0x00000007;
		
		case 0x00000016:
			return 0x00000008;
		
		case 0x00000035:
			return 0x00000009;
		
		case 0x00000022:
			return 0x0000000A;
		
		case 0x00000098:
			return 0x0000000B;
		
		case 0x00000055:
			return 0x0000000C;
		
		case 0x00000054:
			return 0x0000000D;
		
		case 0x00000000:
			return 0x0000000E;
		
		case 0x00000001:
			return 0x0000000F;
		
		case 0x00000099:
			return 0x00000010;
		
		case 0x00000097:
			return 0x00000011;
		
		case 0x0000000E:
			return 0x00000012;
		
		case 0x0000000F:
			return 0x00000013;
		
		case 0x00000018:
			return 0x00000014;
		
		case 0x0000001E:
			return 0x00000015;
		
		case 0x0000002E:
			return 0x00000016;
		
		case 0x0000002F:
			return 0x00000017;
		
		case 0x00000036:
			return 0x00000018;
		
		case 0x00000033:
			return 0x00000019;
		
		case 0x0000003C:
			return 0x0000001A;
		
		case 0x0000003E:
			return 0x0000001B;
		
		case 0x00000042:
			return 0x0000001C;
		
		case 0x00000045:
			return 0x0000001D;
		
		case 0x0000009A:
			return 0x0000001E;
		
		case 0x00000052:
			return 0x0000001F;
		
		case 0x0000009D:
			return 0x00000020;
		
		default:
	}
	return 0x00000001;
}

bool func_24()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_92, 0x00000003);
}

int func_25()
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
	return func_26(0x00000078, 0xFFFFFFFF);
}

int func_26(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_14(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_27(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "PM_UJOB_T", 16);
	StringIntConCat(&Var0, *iParam0, 16);
	func_17(0x00000001, *iParam0, iLocal_82, *iParam0, &Var0, iParam1, 0x00000000);
	*iParam0++;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return func_26(0x0000004E, 0xFFFFFFFF);
		
		case 0x00000001:
			return func_26(0x0000004F, 0xFFFFFFFF);
		
		case 0x00000002:
			return func_26(0x00000050, 0xFFFFFFFF);
		
		case 0x00000003:
			return func_34(0x0000001E, 0xFFFFFFFF, 0xFFFFFFFF);
		
		case 0x00000004:
			return func_26(0x00000051, 0xFFFFFFFF);
		
		case 0x00000005:
			return func_33(0x000004EA, 0xFFFFFFFF, 0x00000000) > 0x00000000;
		
		case 0x00000006:
			return func_33(0x000004EC, 0xFFFFFFFF, 0x00000000) > 0x00000000;
		
		case 0x00000007:
			return func_26(0x00000053, 0xFFFFFFFF);
		
		case 0x00000008:
			return func_34(0x0000000B, 0xFFFFFFFF, 0xFFFFFFFF);
		
		case 0x00000009:
			return func_26(0x0000005F, 0xFFFFFFFF);
		
		case 0x0000000A:
			return func_26(0x00000060, 0xFFFFFFFF);
		
		case 0x0000000B:
			return func_26(0x00000061, 0xFFFFFFFF);
		
		case 0x0000000C:
			return func_34(0x00000008, 0xFFFFFFFF, 0xFFFFFFFF);
		
		case 0x0000000D:
			return func_34(0x00000009, 0xFFFFFFFF, 0xFFFFFFFF);
		
		case 0x0000000E:
			return func_26(0x00000062, 0xFFFFFFFF);
		
		case 0x0000000F:
			return func_26(0x00000063, 0xFFFFFFFF);
		
		case 0x00000010:
			return func_32(0x0000001B, 0xFFFFFFFF) > 0x00000000;
		
		case 0x00000011:
			return func_34(0x00000003, 0xFFFFFFFF, 0xFFFFFFFF);
		
		case 0x00000012:
			return func_34(0x00000002, 0xFFFFFFFF, 0xFFFFFFFF);
		
		case 0x00000013:
			return func_34(0x00000004, 0xFFFFFFFF, 0xFFFFFFFF);
		
		case 0x00000014:
			return func_26(0x00000064, 0xFFFFFFFF);
		
		case 0x00000015:
			return func_34(0x0000001F, 0xFFFFFFFF, 0xFFFFFFFF);
		
		case 0x00000016:
			return func_26(0x00000066, 0xFFFFFFFF);
		
		case 0x00000017:
			return func_26(0x00000067, 0xFFFFFFFF);
		
		case 0x00000018:
			return func_26(0x00000068, 0xFFFFFFFF);
		
		case 0x00000019:
			return func_26(0x00000069, 0xFFFFFFFF);
		
		case 0x0000001A:
			return func_26(0x0000006B, 0xFFFFFFFF);
		
		case 0x0000001B:
			return func_26(0x00000054, 0xFFFFFFFF);
		
		case 0x0000001C:
			return func_33(0x000004F0, 0xFFFFFFFF, 0x00000000) > 0x00000000;
		
		case 0x0000001D:
			return func_26(0x00000055, 0xFFFFFFFF);
		
		case 0x0000001E:
			return func_33(0x000004EE, 0xFFFFFFFF, 0x00000000) > 0x00000000;
		
		case 0x0000001F:
			return func_33(0x000004F2, 0xFFFFFFFF, 0x00000000) > 0x00000000;
		
		case 0x00000020:
			return func_33(0x000004EB, 0xFFFFFFFF, 0x00000000) > 0x00000000;
		
		case 0x00000021:
			return func_33(0x000004F1, 0xFFFFFFFF, 0x00000000) > 0x00000000;
		
		case 0x00000022:
			return func_33(0x000004E0, 0xFFFFFFFF, 0x00000000) > 0x00000000;
		
		case 0x00000023:
			return func_26(0x00000056, 0xFFFFFFFF);
		
		case 0x00000024:
			if (func_31(joaat("mpply_race_2_point_wins")) > 0x00000000 || func_31(joaat("mpply_race_2_point_lost")) > 0x00000000)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000025:
			return func_34(0x0000001B, 0xFFFFFFFF, 0xFFFFFFFF);
		
		case 0x00000026:
			return func_34(0x0000001A, 0xFFFFFFFF, 0xFFFFFFFF);
		
		case 0x00000027:
			return func_33(0x000004E9, 0xFFFFFFFF, 0x00000000) > 0x00000000;
		
		case 0x00000028:
			return func_33(0x0000048F, 0xFFFFFFFF, 0x00000000) > 0x00000000;
		
		case 0x00000029:
			return func_34(0x00000005, 0xFFFFFFFF, 0xFFFFFFFF);
		
		case 0x0000002A:
			return func_34(0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		
		case 0x0000002B:
			return (func_33(0x0000047B, 0xFFFFFFFF, 0x00000000) > 0x00000000 || func_33(0x0000047C, 0xFFFFFFFF, 0x00000000) > 0x00000000);
		
		case 0x0000002C:
			return func_34(0x0000000A, 0xFFFFFFFF, 0xFFFFFFFF);
		
		case 0x0000002D:
			return func_26(0x0000005A, 0xFFFFFFFF);
		
		case 0x0000002E:
			return func_34(0x00000019, 0xFFFFFFFF, 0xFFFFFFFF);
		
		case 0x0000002F:
			return func_30();
		
		case 0x00000030:
			return func_29();
	}
	return 0x00000000;
}

int func_29()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (func_32(0x00000062, 0xFFFFFFFF) > 0x00000000)
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (func_33(0x00000828, 0xFFFFFFFF, 0x00000000) > 0x00000000)
	{
		iVar0 = 0x00000001;
	}
	return iVar0;
}

int func_31(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2772C0[iParam0 /*3*/][func_14(iParam1)];
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_33(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_14(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_15();
	}
	iVar1 = func_36(iParam0, iParam1);
	uVar2 = func_35(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_35(int iParam0)
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

int func_36(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_15();
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

void func_37(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "PM_UGEN_T", 16);
	StringIntConCat(&Var0, *iParam0, 16);
	func_38(0x00000001, *iParam0, iLocal_82, *iParam0, &Var0, "PM_UGEN_NUM", iParam1, iParam2);
	*iParam0++;
}

void func_38(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	if (unk_0x673DE2AC97BFD28A("SET_DATA_SLOT"))
	{
		unk_0x3CAEA85DA607305E(iParam0);
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x3CAEA85DA607305E(iParam3);
		unk_0x3CAEA85DA607305E(0x00000000);
		unk_0x3CAEA85DA607305E(0x00000000);
		unk_0x3CAEA85DA607305E(0x00000001);
		func_6(sParam4);
		unk_0x7ACC3006A87F8B39(sParam5);
		unk_0x6D99DF8263D35CE5(iParam6);
		unk_0x6D99DF8263D35CE5(iParam7);
		unk_0x779B34565F4D71B1();
		unk_0x7E60D21B163E9D56();
	}
}

int func_39(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			return Global_C2055.f_1E0BD[0x00000002];
		
		case 0x00000001:
			return Global_C2055.f_1E0BD[0x00000001];
		
		case 0x00000002:
			return Global_C2055.f_1E0BD[0x00000008];
		
		case 0x00000003:
			return Global_C2055.f_1E0BD[0x00000003];
		
		case 0x00000004:
			return Global_C2055.f_1E0BD[0x00000000];
		
		case 0x00000005:
			if ((((func_41() || func_40()) || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975()) || unk_0xDC30EF462887322E())
			{
				iVar0 += 2;
				iVar0 += 2;
				iVar0++;
				iVar0 += 7;
				if (Global_40001.f_57D7)
				{
					iVar0++;
				}
				return (0x0000002E + iVar0);
			}
			else
			{
				return 0x0000002C;
			}
			break;
		
		case 0x00000006:
			if ((unk_0xC2F420D189FDB329() || func_41()) || func_40())
			{
				iVar0 = 0x00000000;
				iVar0 += 19;
				iVar0 += 8;
				return (Global_40001.f_5383 + iVar0);
			}
			else
			{
				return Global_40001.f_5383;
			}
			break;
		
		case 0x00000007:
			return 0x000000CD;
		
		case 0x00000008:
			return 0x0000006A;
		
		case 0x00000009:
			return 0x0000003C;
		
		case 0x0000000A:
			return 0x000000B4;
		
		case 0x0000000B:
			return (0x00000059 + iLocal_91);
		
		case 0x0000000C:
			return 0x0000000A;
	}
	return 0xFFFFFFFF;
}

int func_40()
{
	return 0x00000001;
}

int func_41()
{
	return 0x00000001;
}

int func_42(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			return Global_C2055.f_1E0CB[0x00000002];
		
		case 0x00000001:
			return Global_C2055.f_1E0CB[0x00000001];
		
		case 0x00000002:
			return Global_C2055.f_1E0CB[0x00000008];
		
		case 0x00000003:
			return Global_C2055.f_1E0CB[0x00000003];
		
		case 0x00000004:
			return Global_C2055.f_1E0CB[0x00000000];
		
		case 0x00000005:
			return func_33(0x000004D0, 0xFFFFFFFF, 0x00000000);
		
		case 0x00000006:
			return func_33(0x000004D1, 0xFFFFFFFF, 0x00000000);
		
		case 0x00000007:
			return (func_33(0x000004DA, 0xFFFFFFFF, 0x00000000) - 0x00000001);
		
		case 0x00000008:
			return func_33(0x000004D5, 0xFFFFFFFF, 0x00000000);
		
		case 0x00000009:
			return func_33(0x000004DB, 0xFFFFFFFF, 0x00000000);
		
		case 0x0000000A:
			return func_33(0x000004D6, 0xFFFFFFFF, 0x00000000);
		
		case 0x0000000B:
			return func_33(0x000002F3, 0xFFFFFFFF, 0x00000000);
		
		case 0x0000000C:
			if (func_26(0x0000013B, 0xFFFFFFFF))
			{
				iVar0++;
			}
			if (func_26(0x0000013C, 0xFFFFFFFF))
			{
				iVar0++;
			}
			if (func_26(0x0000013D, 0xFFFFFFFF))
			{
				iVar0++;
			}
			if (func_26(0x0000013E, 0xFFFFFFFF))
			{
				iVar0++;
			}
			if (func_26(0x0000013F, 0xFFFFFFFF))
			{
				iVar0++;
			}
			if (func_26(0x00000140, 0xFFFFFFFF))
			{
				iVar0++;
			}
			if (func_26(0x00000141, 0xFFFFFFFF))
			{
				iVar0++;
			}
			if (func_26(0x00000142, 0xFFFFFFFF))
			{
				iVar0++;
			}
			if (func_26(0x00000143, 0xFFFFFFFF))
			{
				iVar0++;
			}
			if (func_26(0x00000144, 0xFFFFFFFF))
			{
				iVar0++;
			}
			return iVar0;
			break;
	}
	return 0xFFFFFFFF;
}

void func_43(int iParam0)
{
	if (unk_0x673DE2AC97BFD28A("SET_DATA_SLOT_EMPTY"))
	{
		unk_0x3CAEA85DA607305E(iParam0);
	}
	unk_0x7E60D21B163E9D56();
}

void func_44(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return;
	}
	if (unk_0x673DE2AC97BFD28A("SET_COLUMN_HIGHLIGHT"))
	{
		unk_0x3CAEA85DA607305E(iParam0);
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x1200CC973A2399C8(bParam2);
		unk_0x1200CC973A2399C8(bParam3);
		unk_0x7E60D21B163E9D56();
	}
}

void func_45()
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	unk_0x3BD0DFBDFB3F80EC(&uVar0, &uVar1, &uVar2);
	func_43(0x00000000);
	iLocal_87 = 0x00000000;
	func_47(0x00000000, 0x00000000, iLocal_81, 0x00000000, 0x00000001, "PM_UL_D0", 0x00000000, 0x00000000, 0x00000000);
	func_47(0x00000000, 0x00000001, iLocal_81, 0x00000001, 0x00000001, "PM_UL_D1", 0x00000000, 0x00000000, 0x00000000);
	func_47(0x00000000, 0x00000002, iLocal_81, 0x00000002, 0x00000001, "PM_UL_D2", 0x00000000, 0x00000000, 0x00000000);
	func_2(0x00000000);
	func_46(0x00000002);
	func_46(0x00000003);
	func_46(0x00000004);
	func_46(0x00000005);
	func_4(0x00000000);
	func_1(&uLocal_89);
	unk_0x64366F76B4845277(0x9075C0BE);
	unk_0x8134AB7E30C9809E(0x14211B54);
	unk_0xDD7BA5AE5BCBFA2A(0x00000000);
	iLocal_90 = 0x00000001;
}

void func_46(int iParam0)
{
	func_3(iParam0, 0x00000000);
}

void func_47(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (unk_0x673DE2AC97BFD28A("SET_DATA_SLOT"))
	{
		unk_0x3CAEA85DA607305E(iParam0);
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x3CAEA85DA607305E(iParam3);
		unk_0x3CAEA85DA607305E(0x00000000);
		unk_0x3CAEA85DA607305E(0x00000000);
		if (bParam4)
		{
			unk_0x3CAEA85DA607305E(0x00000001);
		}
		else
		{
			unk_0x3CAEA85DA607305E(0x00000002);
		}
		func_6(sParam5);
		if (bParam6)
		{
			unk_0x3CAEA85DA607305E(0x00000001);
		}
		else
		{
			unk_0x3CAEA85DA607305E(0x00000000);
		}
		if (bParam8)
		{
			unk_0x3CAEA85DA607305E(0x00000015);
			unk_0x1200CC973A2399C8(bParam8);
		}
		unk_0x3CAEA85DA607305E(iParam7);
		unk_0x7E60D21B163E9D56();
	}
}

int func_48()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000D)
	{
		Global_C2055.f_1E0CB[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x000004B0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[iVar0 /*88*/].f_4C, 0x0000000E))
		{
			if (Global_C2055.f_4[iVar0 /*88*/].f_41 < 0x0000000D && Global_C2055.f_4[iVar0 /*88*/].f_46 <= 0x000003E8)
			{
				Global_C2055.f_1E0CB[Global_C2055.f_4[iVar0 /*88*/].f_41]++;
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = func_52(iVar0);
	iVar2 = func_51(iVar0);
	if ((unk_0xB9132A06AE472728(0x00000002, iParam0) || unk_0x9A01369A10646AFE(0x00000002, iParam0)) || func_50(iParam0, &(Global_150392.f_424), 0x00000001))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_150392.f_419[iVar1], iVar2))
		{
			unk_0x5D96D8530B3D0904(&(Global_150392.f_419[iVar1]), iVar2);
			return 0x00000001;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_150392.f_419[iVar1], iVar2))
	{
		unk_0x0674E58A79778E99(&(Global_150392.f_419[iVar1]), iVar2);
	}
	return 0x00000000;
}

int func_50(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (unk_0x0DED1C1B8250FA57(0x00000002, 0x000000C3) - 0x0000007F);
	iVar1 = (unk_0x0DED1C1B8250FA57(0x00000002, 0x000000C4) - 0x0000007F);
	iVar2 = (unk_0x0DED1C1B8250FA57(0x00000002, 0x000000C5) - 0x0000007F);
	switch (iParam0)
	{
		case 0x000000BD:
			if (iVar0 < 0xFFFFFFE2)
			{
				if (*uParam1 < unk_0x1C0640BA9A7327B3() || iParam2 == 0x00000000)
				{
					*uParam1 = unk_0x1C0640BA9A7327B3() + 250;
					return 0x00000001;
				}
			}
			break;
		
		case 0x000000BE:
			if (iVar0 > 0x0000001E)
			{
				if (*uParam1 < unk_0x1C0640BA9A7327B3() || iParam2 == 0x00000000)
				{
					*uParam1 = unk_0x1C0640BA9A7327B3() + 250;
					return 0x00000001;
				}
			}
			break;
		
		case 0x000000BC:
			if (iVar1 < 0xFFFFFFE2)
			{
				if (*uParam1 < unk_0x1C0640BA9A7327B3() || iParam2 == 0x00000000)
				{
					*uParam1 = unk_0x1C0640BA9A7327B3() + 250;
					return 0x00000001;
				}
			}
			break;
		
		case 0x000000BB:
			if (iVar1 > 0x0000001E)
			{
				if (*uParam1 < unk_0x1C0640BA9A7327B3() || iParam2 == 0x00000000)
				{
					*uParam1 = unk_0x1C0640BA9A7327B3() + 250;
					return 0x00000001;
				}
			}
			break;
		
		case 0x000000C2:
			if (iVar2 > 0x0000001E)
			{
				if (*uParam1 < unk_0x1C0640BA9A7327B3() || iParam2 == 0x00000000)
				{
					*uParam1 = unk_0x1C0640BA9A7327B3() + 250;
					return 0x00000001;
				}
			}
			break;
		
		case 0x000000C1:
			if (iVar2 < 0xFFFFFFE2)
			{
				if (*uParam1 < unk_0x1C0640BA9A7327B3() || iParam2 == 0x00000000)
				{
					*uParam1 = unk_0x1C0640BA9A7327B3() + 250;
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_51(int iParam0)
{
	return (iParam0 % 0x00000020);
}

int func_52(int iParam0)
{
	return (iParam0 / 0x00000020);
}

void func_53()
{
	int iVar0;
	
	if (!unk_0x91E3F625EF57450D(0x00000002))
	{
		iVar0 = unk_0x0DED1C1B8250FA57(0x00000002, 0x000000DD);
		if (iVar0 > 0x000000B4)
		{
			if (func_55(&uLocal_84, iLocal_86, 0x00000000))
			{
				if (iLocal_88)
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (unk_0x673DE2AC97BFD28A("SET_COLUMN_INPUT_EVENT"))
					{
						unk_0x3CAEA85DA607305E(0x00000001);
						unk_0x3CAEA85DA607305E(0x00000009);
						unk_0x7E60D21B163E9D56();
					}
					iLocal_86 = 0x000000FA;
					func_54(&uLocal_84);
				}
			}
		}
		else if (iVar0 < 0x00000050)
		{
			if (func_55(&uLocal_84, iLocal_86, 0x00000000))
			{
				if (iLocal_88)
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (unk_0x673DE2AC97BFD28A("SET_COLUMN_INPUT_EVENT"))
					{
						unk_0x3CAEA85DA607305E(0x00000001);
						unk_0x3CAEA85DA607305E(0x00000008);
						unk_0x7E60D21B163E9D56();
					}
					iLocal_86 = 0x000000FA;
					func_54(&uLocal_84);
				}
			}
		}
		else if (iLocal_86 != 0xFFFFFFFF)
		{
			iLocal_86 = 0xFFFFFFFF;
		}
	}
}

void func_54(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

int func_55(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_56(uParam0, bParam2, 0x00000000);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 0x00000001;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_56(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0x00000000)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 0x00000001;
	}
}

