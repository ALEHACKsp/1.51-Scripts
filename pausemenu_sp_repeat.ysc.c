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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	struct<2> Local_28 = { 0, 0 } ;
	struct<2> Local_29[94];
	struct<4> Local_30 = { 0, 0, 0, 0 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	if (Global_28006E)
	{
		if (unk_0x8A22C4C08282BF26(0xFD62720D) == 0x00000000)
		{
			unk_0x8CFFBE74CB5C864A(0xFD62720D);
			while (!unk_0x64EF15C5E09BAD76(0xFD62720D))
			{
				SYSTEM::WAIT(0x00000000);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(0xFD62720D, &ScriptParam_30, 0x00000004, 0x00000590);
		}
		unk_0x10FAF14A60A0DBE1();
	}
	else if (Global_28006D)
	{
		if (unk_0x8A22C4C08282BF26(0x464A63F5) == 0x00000000)
		{
			unk_0x8CFFBE74CB5C864A(0x464A63F5);
			while (!unk_0x64EF15C5E09BAD76(0x464A63F5))
			{
				SYSTEM::WAIT(0x00000000);
			}
			SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(0x464A63F5, &ScriptParam_30, 0x00000004, 0x00000590);
		}
		unk_0x10FAF14A60A0DBE1();
	}
	if (unk_0x2EBF608FFE6CA406(0x00000002))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	switch (ScriptParam_30)
	{
		case 0x00000001:
			switch (ScriptParam_30.f_1)
			{
				case 0x0000004B:
					if (ScriptParam_30.f_2 == 0x00000005)
					{
						func_82(0x00000001, 0x00000000, 0x00000001);
						func_81();
					}
					else if (ScriptParam_30.f_2 == 0x0000004C)
					{
						func_81();
					}
					else
					{
						func_82(0x00000001, 0x00000001, 0x00000000);
					}
					break;
				
				case 0x00000085:
					if (ScriptParam_30.f_2 == 0x0000004C)
					{
						func_81();
					}
					else
					{
						func_82(0x00000007, 0x00000001, 0x00000000);
					}
					break;
				
				case 0x0000004C:
					func_32(ScriptParam_30.f_3, 0x00000000);
					break;
				
				case 0x00000034:
					if (ScriptParam_30.f_2 == 0x00000034)
					{
						unk_0xB2AA17CA14A2DCF1(ScriptParam_30.f_3);
					}
					break;
				
				default:
					func_31(0x00000001);
					if (ScriptParam_30.f_1 == 0x0000001A || ScriptParam_30.f_1 == 0x00000019)
					{
						func_29(0x00000000, 0x00000001);
						func_28(0x00000002, 0x00000000);
						func_81();
						Global_12C47 = 0x00000000;
						func_27(0xFFFFFFFF);
					}
					else if (ScriptParam_30.f_1 == 0x00000005)
					{
						if (ScriptParam_30.f_2 == 0x0000004B || ScriptParam_30.f_2 == 0x00000085)
						{
						}
						else
						{
							func_29(0x00000000, 0x00000001);
						}
					}
					else
					{
						func_29(0x00000000, 0x00000001);
						func_28(0x00000002, 0x00000000);
						if (!ScriptParam_30.f_1 == 0x00000034)
						{
							func_28(0x00000001, 0x00000000);
						}
						Global_12C47 = 0x00000000;
						func_27(0xFFFFFFFF);
					}
					break;
			}
			break;
		
		case 0x00000002:
			switch (ScriptParam_30.f_1)
			{
				case 0x00000005:
					switch (Global_12C47)
					{
						case 0x00000001:
							func_82(0x00000001, 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_82(0x00000007, 0x00000001, 0x00000000);
							break;
					}
					break;
				
				case 0x0000004B:
					func_2(0x00000001, 0x00000000);
					break;
				
				case 0x00000085:
					func_2(0x00000007, 0x00000000);
					break;
				
				case 0x0000004C:
					if (Global_12C58 != 0xFFFFFFFF)
					{
						func_1(Global_12C58, Global_12C47);
						func_27(0xFFFFFFFF);
						unk_0x7BBABEC524CBF883(0x00000000);
						unk_0x53491B90E4FD0E56(0x00000000);
						unk_0x8008C9131FF437FE();
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
							{
								Global_12C49 = { unk_0x56E9E0FD5ACCD35D(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) };
							}
						}
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000001);
						}
					}
					break;
			}
			break;
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_1(int iParam0, int iParam1)
{
	Global_12C44 = iParam0;
	Global_12C44.f_1 = iParam1;
	if (iParam1 == 0x00000007)
	{
		if (iParam0 >= 0x00000000 && iParam0 < 0x0000003F)
		{
			Global_1B085[iParam0 /*10*/].f_3 = 0x00000001;
		}
	}
	unk_0x5D96D8530B3D0904(&Global_12C46, 0x00000000);
}

void func_2(int iParam0, int iParam1)
{
	if (func_8() == 0xFFFFFFFF)
	{
		if (func_5(iParam0))
		{
			func_4(0x00000002);
			func_32(Global_12C58, iParam1);
			func_3(0x00000001);
		}
	}
}

void func_3(bool bParam0)
{
	func_28(0x00000001, bParam0);
	func_28(0x00000002, bParam0);
}

int func_4(int iParam0)
{
	unk_0xD7992BEF7A9D109E("MISHSTA", 0x00000008);
	if (!unk_0x67C1D9E5B91B2E37(0x00000008))
	{
		return 0x00000000;
	}
	iParam0++;
	return 0x00000001;
}

int func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return func_7();
			break;
		
		case 0x00000007:
			return func_6();
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_6()
{
	if (Global_1B416.f_4889.f_17C > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_7()
{
	if (Global_28006E)
	{
		if (Global_300000.f_3A3.f_15 > 0x00000000)
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	else if (Global_28006D)
	{
		if (Global_380000.f_3A3.f_15 > 0x00000000)
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	else if (Global_1B416.f_271B.f_15 > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_8()
{
	if (func_26())
	{
		if (func_25(0x0000000E))
		{
			return 0x00000005;
		}
		return 0x00000000;
	}
	if (Global_12C52 == 0x00000001)
	{
		return 0x00000000;
	}
	if (Global_28006E)
	{
		if (unk_0x8A22C4C08282BF26(0xA5A16DFA) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	else if (Global_28006D)
	{
		if (unk_0x8A22C4C08282BF26(0x7792E586) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	else if (unk_0x8A22C4C08282BF26(joaat("mission_stat_watcher")) > 0x00000000)
	{
		return 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(joaat("creator")) > 0x00000000)
	{
		return 0x00000001;
	}
	if (func_24(0x00000000))
	{
		return 0x00000000;
	}
	if (func_23(Global_1B047, 0x00000100))
	{
		return 0x00000002;
	}
	if (func_22())
	{
		return 0x00000002;
	}
	if (func_21())
	{
		return 0x00000003;
	}
	if (func_20())
	{
		return 0x00000003;
	}
	if (func_19())
	{
		return 0x00000003;
	}
	if (func_10())
	{
		return 0x00000003;
	}
	if (unk_0x991B1F0980C62628() || func_9())
	{
		return 0x00000002;
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0x00000000, 0x00000001, 0x00000000) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				return 0x00000003;
			}
		}
	}
	if (Global_12B4C)
	{
		return 0x00000002;
	}
	if (Global_126B1.f_241)
	{
		return 0x00000004;
	}
	return 0xFFFFFFFF;
}

int func_9()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_10()
{
	int iVar0;
	
	if (func_18())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000035)
		{
			if (func_11(iVar0))
			{
				return 0x00000001;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

bool func_11(int iParam0)
{
	return func_12(iParam0, 0x00000014, 0x00000001);
}

int func_12(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_181EC.f_54D[iParam0], iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_17() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_13(func_16(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_13(int iParam0, int iParam1, int iParam2)
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

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
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

var func_15()
{
	return Global_1407E9;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000033B;
			break;
		
		case 0x00000001:
			return 0x0000033C;
			break;
		
		case 0x00000002:
			return 0x0000033D;
			break;
		
		case 0x00000003:
			return 0x0000033E;
			break;
		
		case 0x00000004:
			return 0x0000033F;
			break;
		
		case 0x00000005:
			return 0x00000340;
			break;
		
		case 0x00000006:
			return 0x00000341;
			break;
		
		case 0x00000007:
			return 0x00000342;
			break;
		
		case 0x00000008:
			return 0x00000343;
			break;
		
		case 0x00000009:
			return 0x00000344;
			break;
		
		case 0x0000000A:
			return 0x00000345;
			break;
		
		case 0x0000000B:
			return 0x00000346;
			break;
		
		case 0x0000000C:
			return 0x00000347;
			break;
		
		case 0x0000000D:
			return 0x00000348;
			break;
		
		case 0x0000000E:
			return 0x00000349;
			break;
		
		case 0x0000000F:
			return 0x0000034B;
			break;
		
		case 0x00000010:
			return 0x0000034C;
			break;
		
		case 0x00000011:
			return 0x0000034D;
			break;
		
		case 0x00000012:
			return 0x0000034E;
			break;
		
		case 0x00000013:
			return 0x0000034F;
			break;
		
		case 0x00000014:
			return 0x00000350;
			break;
		
		case 0x00000015:
			return 0x00000351;
			break;
		
		case 0x00000016:
			return 0x00000352;
			break;
		
		case 0x00000017:
			return 0x00000353;
			break;
		
		case 0x00000018:
			return 0x00000354;
			break;
		
		case 0x00000019:
			return 0x00000355;
			break;
		
		case 0x0000001A:
			return 0x00000356;
			break;
		
		case 0x0000001B:
			return 0x00000357;
			break;
		
		case 0x0000001C:
			return 0x00000358;
			break;
		
		case 0x0000001D:
			return 0x00000359;
			break;
		
		case 0x0000001E:
			return 0x0000035A;
			break;
		
		case 0x0000001F:
			return 0x0000035B;
			break;
		
		case 0x00000020:
			return 0x0000035C;
			break;
		
		case 0x00000021:
			return 0x0000035D;
			break;
		
		case 0x00000022:
			return 0x0000035E;
			break;
		
		case 0x00000023:
			return 0x0000035F;
			break;
		
		case 0x00000024:
			return 0x00000360;
			break;
		
		case 0x00000025:
			return 0x00000361;
			break;
		
		case 0x00000026:
			return 0x00000362;
			break;
		
		case 0x00000027:
			return 0x00000363;
			break;
		
		case 0x00000028:
			return 0x00000367;
			break;
		
		case 0x00000029:
			return 0x00000368;
			break;
		
		case 0x0000002A:
			return 0x00000369;
			break;
		
		case 0x0000002B:
			return 0x0000036A;
			break;
		
		case 0x0000002C:
			return 0x000026F9;
			break;
		
		case 0x0000002D:
			return 0x00000EE0;
			break;
		
		case 0x0000002E:
			return 0x00001507;
			break;
		
		case 0x0000002F:
			return 0x0000180B;
			break;
		
		case 0x00000030:
			return 0x00001C40;
			break;
		
		case 0x00000031:
			return 0x00001EC6;
			break;
		
		case 0x00000034:
			return 0x000022D0;
			break;
		
		case 0x00000032:
			return 0x00002049;
			break;
		
		case 0x00000033:
			return 0x0000204B;
			break;
		
		default:
			break;
	}
	return 0x00002CF7;
}

int func_17()
{
	return Global_7830;
}

bool func_18()
{
	return Global_181EC.f_159 > 0x00000000;
}

bool func_19()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_20()
{
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000009);
}

bool func_21()
{
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000008);
}

int func_22()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (((((((((((((((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_intro", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_base", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_enterchair", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_exitchair", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_idle_a", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_idle_b", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_idle_c", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_idle_d", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_intro", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_base", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_enterchair", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_exitchair", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_idle_a", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_idle_b", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_idle_c", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_idle_d", 0x00000003))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_23(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

bool func_24(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

bool func_25(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_26()
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_27(int iParam0)
{
	Global_12C58 = iParam0;
}

void func_28(int iParam0, bool bParam1)
{
	if (bParam1 == 0x00000001)
	{
		func_29(0x00000000, 0x00000001);
	}
	unk_0x673DE2AC97BFD28A("SHOW_COLUMN");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x1200CC973A2399C8(bParam1);
	unk_0x7E60D21B163E9D56();
}

void func_29(bool bParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	unk_0x673DE2AC97BFD28A("SHOW_WARNING_MESSAGE");
	unk_0x1200CC973A2399C8(bParam0);
	iVar3 = func_8();
	if (iVar3 != 0xFFFFFFFF)
	{
		iVar2 = 0x00000001;
		sVar1 = "PM_RP_HELPT";
		if (iParam1 == 0x00000001)
		{
			switch (iVar3)
			{
				case 0x00000000:
					sVar0 = "PM_RPB_SM_1";
					break;
				
				case 0x00000002:
					sVar0 = "PM_RPB_SM_2";
					break;
				
				case 0x00000003:
					sVar0 = "PM_RPB_SM_3";
					break;
				
				case 0x00000001:
					sVar0 = "PM_RPB_SM_4";
					break;
				
				case 0x00000004:
					sVar0 = "PM_RPB_SM_5";
					break;
				
				case 0x00000005:
					sVar0 = "PM_RPB_SM_6";
					break;
				
				default:
					break;
			}
		}
		else
		{
			switch (iVar3)
			{
				case 0x00000000:
					sVar0 = "PM_RPB_RC_1";
					break;
				
				case 0x00000002:
					sVar0 = "PM_RPB_RC_2";
					break;
				
				case 0x00000003:
					sVar0 = "PM_RPB_RC_3";
					break;
				
				case 0x00000001:
					sVar0 = "PM_RPB_RC_4";
					break;
				
				case 0x00000004:
					sVar0 = "PM_RPB_RC_5";
					break;
				
				case 0x00000005:
					sVar0 = "PM_RPB_RC_6";
					break;
				
				default:
					break;
				}
		}
	}
	else if (func_5(iParam1))
	{
		iVar2 = 0x00000001;
		if (iParam1 == 0x00000001)
		{
			sVar1 = "PM_RP_HELPT";
			sVar0 = "PM_RP_HELP";
		}
		else
		{
			sVar1 = "PM_RP_HELPT3";
			sVar0 = "PM_RP_HELP3";
		}
	}
	else
	{
		iVar2 = 0x00000001;
		if (iParam1 == 0x00000001)
		{
			sVar1 = "PM_RP_HELPT1";
			sVar0 = "PM_RP_HELP1";
		}
		else
		{
			sVar1 = "PM_RP_HELPT3";
			sVar0 = "PM_RP_HELP4";
		}
	}
	unk_0x3CAEA85DA607305E(iVar2);
	unk_0x3CAEA85DA607305E((0x00000003 - iVar2));
	func_30(sVar0);
	func_30(sVar1);
	unk_0x3CAEA85DA607305E(0x00000000);
	func_30("");
	func_30("");
	unk_0x7E60D21B163E9D56();
}

void func_30(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_31(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x64366F76B4845277(0x14211B54);
	}
	else
	{
		unk_0x8134AB7E30C9809E(0x14211B54);
	}
	unk_0xDD7BA5AE5BCBFA2A(0x00000000);
}

void func_32(int iParam0, int iParam1)
{
	if (func_8() == 0xFFFFFFFF)
	{
		if (func_5(Global_12C47))
		{
			func_27(iParam0);
			func_46(iParam0);
			if (Global_12C48 > 0x00000010)
			{
				if (iParam1 == 0x00000000)
				{
					func_35();
				}
				func_33(func_34(iParam0), Global_12C48);
			}
		}
	}
}

void func_33(int iParam0, int iParam1)
{
	unk_0x673DE2AC97BFD28A("SET_COLUMN_SCROLL");
	unk_0x3CAEA85DA607305E(0x00000001);
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(0xFFFFFFFF);
	unk_0x7E60D21B163E9D56();
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (0x0000005E - 0x00000001))
	{
		if (Local_29[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_35()
{
	switch (Global_12C47)
	{
		case 0x00000001:
			Global_12C48 = func_36(&Local_29, 0x00000001, 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			Global_12C48 = func_36(&Local_29, 0x00000000, 0x00000001, 0x00000001);
			break;
		
		default:
			break;
	}
}

int func_36(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0x00000001)
	{
		if (iParam2 == 0x00000001)
		{
			func_37(uParam0, &iVar0, 0x00000001, iParam3, 0x00000000);
			func_37(uParam0, &iVar0, 0x00000007, iParam3, 0x00000000);
		}
		else
		{
			func_37(uParam0, &iVar0, 0x00000001, iParam3, 0x00000001);
		}
	}
	else if (iParam2 == 0x00000001)
	{
		func_37(uParam0, &iVar0, 0x00000007, iParam3, 0x00000001);
	}
	return iVar0;
}

void func_37(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_45(iParam2);
	if (iParam4 == 0x00000000)
	{
		iVar1 = 0x00000000;
		while (iVar1 < iVar0)
		{
			if (func_42(iVar1, iParam2))
			{
				iVar2 = func_41(iVar1, iParam2);
				if (iVar2 == 0xFFFFFFFF)
				{
				}
				else
				{
					if (iParam3 == 0x00000000 || func_39(iVar1, iParam2) == 0x00000001)
					{
						(*uParam0)[iVar2 /*2*/] = iVar1;
						(uParam0[iVar2 /*2*/])->f_1 = iParam2;
					}
					if (func_39(iVar1, iParam2) == 0x00000001)
					{
						*iParam1++;
					}
				}
			}
			iVar1++;
		}
	}
	else
	{
		iVar4 = 0x00000000;
		iVar3 = 0x00000000;
		while (iVar3 <= (iVar0 - 0x00000001))
		{
			iVar5 = func_38(iVar4, iParam3, iParam2);
			if (iVar5 != 0xFFFFFFFF)
			{
				iVar4 = func_41(iVar5, iParam2) + 1;
				(*uParam0)[iVar3 /*2*/] = iVar5;
				(uParam0[iVar3 /*2*/])->f_1 = iParam2;
				if (func_39(iVar5, iParam2))
				{
					*iParam1++;
				}
			}
			else
			{
				iVar3 = iVar0 + 1;
			}
			iVar3++;
		}
	}
}

int func_38(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0x00000000;
	iVar1 = 0xFFFFFFFF;
	iVar2 = 0xFFFFFFFF;
	iVar4 = func_45(iParam2);
	iVar0 = 0x00000000;
	while (iVar0 < iVar4)
	{
		if (func_42(iVar0, iParam2) == 0x00000001)
		{
			if (iParam1 == 0x00000000 || func_39(iVar0, iParam2) == 0x00000001)
			{
				iVar3 = func_41(iVar0, iParam2);
				if (iVar3 >= iParam0)
				{
					if (iVar3 < iVar1 || iVar1 == 0xFFFFFFFF)
					{
						iVar1 = iVar3;
						iVar2 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_39(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000001:
			return !unk_0xEAE0D21A50E6C7F4(Global_15DBC[iParam0 /*34*/].f_F, 0x00000005);
			break;
		
		case 0x00000007:
			return func_40(iParam0);
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
		
		case 0x00000004:
			return 0x00000000;
			break;
		
		case 0x00000005:
			return 0x00000001;
			break;
		
		case 0x00000006:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000000;
			break;
		
		case 0x00000008:
			return 0x00000001;
			break;
		
		case 0x00000009:
			return 0x00000000;
			break;
		
		case 0x0000000A:
			return 0x00000000;
			break;
		
		case 0x0000000B:
			return 0x00000000;
			break;
		
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
			return 0x00000000;
			break;
		
		case 0x0000000E:
			return 0x00000001;
			break;
		
		case 0x0000000F:
			return 0x00000000;
			break;
		
		case 0x00000010:
			return 0x00000001;
			break;
		
		case 0x00000011:
			return 0x00000001;
			break;
		
		case 0x00000012:
			return 0x00000001;
			break;
		
		case 0x00000013:
			return 0x00000001;
			break;
		
		case 0x00000014:
			return 0x00000001;
			break;
		
		case 0x00000015:
			return 0x00000001;
			break;
		
		case 0x00000016:
			return 0x00000001;
			break;
		
		case 0x00000017:
			return 0x00000001;
			break;
		
		case 0x00000018:
			return 0x00000001;
			break;
		
		case 0x00000019:
			return 0x00000001;
			break;
		
		case 0x0000001A:
			return 0x00000001;
			break;
		
		case 0x0000001B:
			return 0x00000000;
			break;
		
		case 0x0000001C:
			return 0x00000001;
			break;
		
		case 0x0000001D:
			return 0x00000001;
			break;
		
		case 0x0000001E:
			return 0x00000001;
			break;
		
		case 0x0000001F:
			return 0x00000000;
			break;
		
		case 0x00000020:
			return 0x00000001;
			break;
		
		case 0x00000021:
			return 0x00000001;
			break;
		
		case 0x00000022:
			return 0x00000001;
			break;
		
		case 0x00000023:
			return 0x00000000;
			break;
		
		case 0x00000024:
			return 0x00000000;
			break;
		
		case 0x00000025:
			return 0x00000000;
			break;
		
		case 0x00000026:
			return 0x00000001;
			break;
		
		case 0x00000027:
			return 0x00000001;
			break;
		
		case 0x00000028:
			return 0x00000001;
			break;
		
		case 0x00000029:
			return 0x00000001;
			break;
		
		case 0x0000002A:
			return 0x00000001;
			break;
		
		case 0x0000002B:
			return 0x00000001;
			break;
		
		case 0x0000002C:
			return 0x00000000;
			break;
		
		case 0x0000002D:
			return 0x00000000;
			break;
		
		case 0x0000002E:
			return 0x00000001;
			break;
		
		case 0x0000002F:
			return 0x00000001;
			break;
		
		case 0x00000030:
			return 0x00000000;
			break;
		
		case 0x00000031:
			return 0x00000001;
			break;
		
		case 0x00000032:
			return 0x00000001;
			break;
		
		case 0x00000033:
			return 0x00000001;
			break;
		
		case 0x00000034:
			return 0x00000001;
			break;
		
		case 0x00000036:
			return 0x00000001;
			break;
		
		case 0x00000037:
			return 0x00000001;
			break;
		
		case 0x00000038:
			return 0x00000001;
			break;
		
		case 0x00000035:
			return 0x00000001;
			break;
		
		case 0x00000039:
			return 0x00000001;
			break;
		
		case 0x0000003A:
			return 0x00000001;
			break;
		
		case 0x0000003B:
			return 0x00000001;
			break;
		
		case 0x0000003C:
			return 0x00000001;
			break;
		
		case 0x0000003D:
			return 0x00000001;
			break;
		
		case 0x0000003E:
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_41(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000001:
			return Global_1B416.f_2378.f_14A[iParam0 /*6*/].f_3;
			break;
		
		case 0x00000007:
			return Global_1B416.f_4889[iParam0 /*6*/].f_3;
			break;
		
		default:
			break;
	}
	return 0xFFFFFFFF;
}

int func_42(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000001:
			if (func_44(iParam0))
			{
				return func_43();
			}
			else
			{
				return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
			}
			break;
		
		case 0x00000007:
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000003);
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_43()
{
	if (((Global_1B416.f_2378.f_14A[0x00000018 /*6*/] == 0x00000001 || Global_1B416.f_2378.f_14A[0x00000019 /*6*/] == 0x00000001) || Global_1B416.f_2378.f_14A[0x0000001A /*6*/] == 0x00000001) || Global_1B416.f_2378.f_14A[0x0000001B /*6*/] == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_44(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (((iVar0 == 0x00000018 || iVar0 == 0x00000019) || iVar0 == 0x0000001A) || iVar0 == 0x0000001B)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 0x0000005E;
			break;
		
		case 0x00000007:
			return 0x0000003F;
			break;
		
		default:
			break;
	}
	return 0xFFFFFFFF;
}

void func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	Local_28 = { func_78(iParam0, Global_12C47) };
	if (!func_4(0x00000002))
	{
		return;
	}
	func_77(0x00000002);
	unk_0x673DE2AC97BFD28A("SET_COLUMN_TITLE");
	unk_0x3CAEA85DA607305E(0x00000002);
	func_30("MISSTA");
	func_30(&Local_28);
	unk_0x7E60D21B163E9D56();
	iVar1 = 0xFFFFFEB3;
	iVar2 = 0xFFFFFEB3;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < func_75(iParam0, Global_12C47))
	{
		iVar5 = func_73(iParam0, Global_12C47, iVar0);
		iVar6 = 0x00000001;
		switch (iVar5)
		{
			case 0x0000002A:
			case 0x00000037:
			case 0x00000055:
			case 0x00000046:
			case 0x00000065:
				iVar6 = 0x00000000;
				iVar2 = func_72(iVar5);
				if (iVar2 >= 0x7FFFFFFF)
				{
					iVar2 = 0x00000001;
				}
				break;
			
			case 0x00000054:
			case 0x00000064:
			case 0x00000045:
			case 0x00000029:
			case 0x00000036:
				iVar6 = 0x00000000;
				iVar1 = func_72(iVar5);
				if (iVar1 >= 0x7FFFFFFF)
				{
					iVar1 = 0x00000032;
				}
				break;
		}
		if (!Global_F129[iVar5 /*13*/].f_7 && iVar6)
		{
			if (func_53(iVar5, iVar3, 0x00000000))
			{
				iVar4++;
			}
			iVar3++;
		}
		iVar0++;
	}
	func_52(iParam0, &iVar2);
	func_48(iVar4, iVar3, 0x00000000, iVar1, iVar2);
	func_47(0x00000002);
}

void func_47(int iParam0)
{
	if (unk_0x673DE2AC97BFD28A("DISPLAY_DATA_SLOT"))
	{
		unk_0x3CAEA85DA607305E(iParam0);
		unk_0x7E60D21B163E9D56();
	}
}

float func_48(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_51(iParam0, iParam1, 0x00000000);
	iVar1 = func_50(fVar0);
	if (bParam2)
	{
		fVar0 = 50f;
		iVar1 = 0x00000001;
	}
	if (iParam4 > 0xFFFFFFFF)
	{
		iVar1 = iParam4;
	}
	if (iParam3 > 0xFFFFFFFF)
	{
		fVar0 = SYSTEM::TO_FLOAT(iParam3);
	}
	if (iVar1 == 0x00000000)
	{
		unk_0x673DE2AC97BFD28A("SET_DESCRIPTION");
		unk_0x3CAEA85DA607305E(0x00000002);
		unk_0x3CAEA85DA607305E(0x00000000);
		unk_0x7C19E5E4784BD7CF(fVar0);
		func_30("MTPHPER");
		unk_0x7E60D21B163E9D56();
	}
	else
	{
		unk_0x673DE2AC97BFD28A("SET_DESCRIPTION");
		unk_0x3CAEA85DA607305E(0x00000002);
		unk_0x3CAEA85DA607305E(func_49(iVar1));
		unk_0x7C19E5E4784BD7CF(fVar0);
		switch (func_49(iVar1))
		{
			case 0x0000006D:
				func_30("MTPHPER_G");
				break;
			
			case 0x0000006C:
				func_30("MTPHPER_S");
				break;
			
			case 0x0000006B:
				func_30("MTPHPER_B");
				break;
		}
		unk_0x7E60D21B163E9D56();
	}
	return fVar0;
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x0000006B;
	switch (iParam0)
	{
		case 0x00000003:
			iVar0 = 0x0000006D;
			break;
		
		case 0x00000002:
			iVar0 = 0x0000006C;
			break;
		
		case 0x00000001:
			iVar0 = 0x0000006B;
			break;
	}
	return iVar0;
}

int func_50(float fParam0)
{
	if (fParam0 == 0f)
	{
		return 0x00000000;
	}
	if (fParam0 == 100f)
	{
		return 0x00000003;
	}
	else if (fParam0 > 50f)
	{
		return 0x00000002;
	}
	return 0x00000001;
}

float func_51(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::CEIL(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

void func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_12C47 == 0x00000007)
	{
		iVar0 = iParam0;
		switch (iVar0)
		{
			case 0x00000034:
				*iParam1 = Global_1B416.f_92B[0x00000000 /*2*/];
				if (*iParam1 == 0x00000000)
				{
					*iParam1 = 0x00000001;
				}
				break;
			
			case 0x00000035:
				*iParam1 = Global_1B416.f_92B[0x00000001 /*2*/];
				if (*iParam1 == 0x00000000)
				{
					*iParam1 = 0x00000001;
				}
				break;
			
			case 0x00000036:
				*iParam1 = Global_1B416.f_92B[0x00000002 /*2*/];
				if (*iParam1 == 0x00000000)
				{
					*iParam1 = 0x00000001;
				}
				break;
			
			case 0x00000037:
				*iParam1 = Global_1B416.f_92B[0x00000003 /*2*/];
				if (*iParam1 == 0x00000000)
				{
					*iParam1 = 0x00000001;
				}
				break;
			
			case 0x00000038:
				*iParam1 = Global_1B416.f_92B[0x00000004 /*2*/];
				if (*iParam1 == 0x00000000)
				{
					*iParam1 = 0x00000001;
				}
				break;
			}
	}
}

int func_53(int iParam0, int iParam1, int iParam2)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	if (iParam2 != 0x00000000)
	{
		if (!unk_0x83D8570832F172A7(iParam2))
		{
			return 0x00000000;
		}
	}
	if (Global_F129[iParam0 /*13*/].f_7)
	{
		return 0x00000001;
	}
	Var0 = { Global_F129[iParam0 /*13*/] };
	iVar1 = func_63(iParam0);
	switch (iParam0)
	{
		case 0x00000026:
		case 0x00000028:
		case 0x00000029:
		case 0x0000002A:
		case 0x00000034:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000042:
		case 0x00000044:
		case 0x00000045:
		case 0x00000046:
		case 0x00000051:
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
		case 0x00000061:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
			iVar1 = 0xFFFFFFFF;
			break;
	}
	iVar2 = func_72(iParam0);
	sVar3 = func_62(iParam0);
	if (iVar2 == 0xFFFFFFFF)
	{
		func_61(iVar2, iParam1, 0x00000000, sVar3, iParam0, iParam2);
		iVar1 = 0x00000000;
	}
	else
	{
		switch (Var0)
		{
			case 0x00000001:
				func_60(iVar2, iParam1, iVar1, "MTTIME", iParam0, iParam2);
				break;
			
			case 0x00000002:
				func_60(iVar2, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			
			case 0x00000003:
				func_59(iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			
			case 0x00000011:
			case 0x00000004:
				func_60(iVar2, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			
			case 0x00000005:
				func_58(iVar2, Var0.f_2, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			
			case 0x00000006:
				func_59(iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			
			case 0x00000007:
				func_57(iVar2, Var0.f_2, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			
			case 0x00000008:
				func_57(iVar2, Var0.f_2, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			
			case 0x00000009:
				func_58(iVar2, 0x00000064, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			
			case 0x00000010:
			case 0x0000000A:
			case 0x0000000E:
			case 0x0000000F:
				func_56(iVar2, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			
			case 0x0000000B:
				func_58(iVar2, 0x00000064, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			
			case 0x0000000C:
			case 0x0000000D:
				func_54(iVar2, iParam1, iVar1, sVar3, iParam0, iParam2);
				break;
			
			case 0x00000000:
				break;
			}
	}
	if (iVar1 == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_54(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (iParam5 != 0x00000000)
	{
		unk_0x7E60C62A7CE58FC8(iParam5, "SET_DATA_SLOT");
	}
	else
	{
		unk_0x673DE2AC97BFD28A("SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0x00000002);
	}
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(0x00000006);
	unk_0x3CAEA85DA607305E(iParam0);
	if (iParam5 == 0x00000000)
	{
		unk_0x7ACC3006A87F8B39("PM_RP_STATD");
		unk_0x6B012227B3921E18(sParam3);
		unk_0x6B012227B3921E18(func_55(iParam4));
		unk_0x779B34565F4D71B1();
	}
	else
	{
		func_30(sParam3);
	}
	unk_0x7E60D21B163E9D56();
}

char* func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MISHSTD0";
		
		case 0x00000009:
			return "MISHSTD1";
		
		case 0x0000000A:
			return "MISHSTD2";
		
		case 0x00000015:
			return "MISHSTD3";
		
		case 0x00000016:
			return "MISHSTD4";
		
		case 0x00000152:
			return "MISHSTD5";
		
		case 0x00000153:
			return "MISHSTD6";
		
		case 0x000000C4:
			return "MISHSTD7";
		
		case 0x000000C5:
			return "MISHSTD8";
		
		case 0x000000CD:
			return "MISHSTD9";
		
		case 0x000000CE:
			return "MISHSTD10";
		
		case 0x000000CF:
			return "MISHSTD11";
		
		case 0x000000DA:
			return "MISHSTD12";
		
		case 0x000000D9:
			return "MISHSTD13";
		
		case 0x00000180:
			return "MISHSTD14";
		
		case 0x00000181:
			return "MISHSTD15";
		
		case 0x00000174:
			return "MISHSTD16";
		
		case 0x00000175:
			return "MISHSTD17";
		
		case 0x00000177:
			return "MISHSTD18";
		
		case 0x00000176:
			return "MISHSTD19";
		
		default:
	}
	switch (iParam0)
	{
		case 0x000001E6:
			return "MISHSTD20";
		
		case 0x000001E7:
			return "MISHSTD21";
		
		case 0x000001E8:
			return "MISHSTD22";
		
		case 0x000001E9:
			return "MISHSTD23";
		
		case 0x000001EA:
			return "MISHSTD24";
		
		case 0x000001F3:
			return "MISHSTD25";
		
		case 0x000001F4:
			return "MISHSTD26";
		
		case 0x000001F5:
			return "MISHSTD27";
		
		case 0x000001F6:
			return "MISHSTD28";
		
		case 0x00000203:
			return "MISHSTD25";
		
		case 0x00000204:
			return "MISHSTD30";
		
		case 0x00000205:
			return "MISHSTD19";
		
		case 0x00000206:
			return "MISHSTD32";
		
		case 0x00000089:
			return "MISHSTD19";
		
		case 0x00000088:
			return "MISHSTD34";
		
		case 0x00000094:
			return "MISHSTD17";
		
		case 0x00000095:
			return "MISHSTD19";
		
		case 0x00000096:
			return "MISHSTD37";
		
		case 0x000000E5:
			return "MISHSTD38";
		
		default:
	}
	switch (iParam0)
	{
		case 0x000000E6:
			return "MISHSTD39";
		
		case 0x00000111:
			return "MISHSTD40";
		
		case 0x00000112:
			return "MISHSTD41";
		
		case 0x00000113:
			return "MISHSTD42";
		
		case 0x00000114:
			return "MISHSTD43";
		
		case 0x00000115:
			return "MISHSTD19";
		
		case 0x0000011B:
			return "MISHSTD45";
		
		case 0x0000011C:
			return "MISHSTD16";
		
		case 0x0000011D:
			return "MISHSTD17";
		
		case 0x0000015A:
			return "MISHSTD48";
		
		case 0x000000EF:
			return "MISHSTD49";
		
		case 0x000000F0:
			return "MISHSTD50";
		
		case 0x000000F1:
			return "MISHSTD51";
		
		case 0x000000F2:
			return "MISHSTD52";
		
		case 0x00000126:
			return "MISHSTD53";
		
		case 0x00000127:
			return "MISHSTD54";
		
		case 0x00000128:
			return "MISHSTD55";
		
		case 0x00000129:
			return "MISHSTD56";
		
		case 0x0000012A:
			return "MISHSTD57";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000134:
			return "MISHSTD58";
		
		case 0x00000066:
			return "MISHSTD59";
		
		case 0x00000073:
			return "MISHSTD60";
		
		case 0x00000072:
			return "MISHSTD22";
		
		case 0x0000006F:
			return "MISHSTD62";
		
		case 0x00000070:
			return "MISHSTD63";
		
		case 0x00000071:
			return "MISHSTD64";
		
		case 0x0000018C:
			return "MISHSTD65";
		
		case 0x00000189:
			return "MISHSTD66";
		
		case 0x0000018A:
			return "MISHSTD67";
		
		case 0x0000018B:
			return "MISHSTD68";
		
		case 0x00000078:
			return "MISHSTD69";
		
		case 0x00000079:
			return "MISHSTD70";
		
		case 0x0000007A:
			return "MISHSTD71";
		
		case 0x0000007B:
			return "MISHSTD72";
		
		case 0x0000007C:
			return "MISHSTD73";
		
		case 0x000000A1:
			return "MISHSTD74";
		
		case 0x000000AC:
			return "MISHSTD40";
		
		case 0x000000AD:
			return "MISHSTD76";
		
		default:
	}
	switch (iParam0)
	{
		case 0x000000AE:
			return "MISHSTD77";
		
		case 0x000000AF:
			return "MISHSTD78";
		
		case 0x000000B9:
			return "MISHSTD79";
		
		case 0x000000BA:
			return "MISHSTD66";
		
		case 0x000000BB:
			return "MISHSTD81";
		
		case 0x00000146:
			return "MISHSTD82";
		
		case 0x00000081:
			return "MISHSTD22";
		
		case 0x00000082:
			return "MISHSTD84";
		
		case 0x000001D2:
			return "MISHSTD85";
		
		case 0x00000190:
			return "MISHSTD86";
		
		case 0x00000191:
			return "MISHSTD87";
		
		case 0x0000019D:
			return "MISHSTD88";
		
		case 0x0000019E:
			return "MISHSTD40";
		
		case 0x0000019F:
			return "MISHSTD17";
		
		case 0x000001A0:
			return "MISHSTD91";
		
		case 0x000001A1:
			return "MISHSTD92";
		
		case 0x000000F9:
			return "MISHSTD18";
		
		case 0x000001DA:
			return "MISHSTD12";
		
		case 0x00000101:
			return "MISHSTD95";
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000020F:
			return "MISHSTD96";
		
		case 0x00000210:
			return "MISHSTD97";
		
		case 0x00000211:
			return "MISHSTD76";
		
		case 0x00000216:
			return "MISHSTD99";
		
		case 0x000002C5:
			return "MISHSTD100";
		
		case 0x00000240:
			return "MISHSTD101";
		
		case 0x00000241:
			return "MISHSTD102";
		
		case 0x00000242:
			return "MISHSTD103";
		
		case 0x00000243:
			return "MISHSTD104";
		
		case 0x000002E6:
			return "MISHSTD105";
		
		case 0x000002E5:
			return "MISHSTD19";
		
		case 0x000002E7:
			return "MISHSTD107";
		
		case 0x000002E9:
			return "MISHSTD108";
		
		case 0x000002EC:
			return "MISHSTD109";
		
		case 0x000002EB:
			return "MISHSTD110";
		
		case 0x000002ED:
			return "MISHSTD111";
		
		case 0x000002EE:
			return "MISHSTD112";
		
		case 0x000002EF:
			return "MISHSTD113";
		
		case 0x000002F2:
			return "MISHSTD114";
		
		default:
	}
	switch (iParam0)
	{
		case 0x000002F1:
			return "MISHSTD115";
		
		case 0x000002F5:
			return "MISHSTD116";
		
		case 0x000002F4:
			return "MISHSTD117";
		
		case 0x000002F3:
			return "MISHSTD118";
		
		case 0x000002F7:
			return "MISHSTD119";
		
		case 0x000002F6:
			return "MISHSTD120";
		
		case 0x000002F9:
			return "MISHSTD121";
		
		case 0x000002F8:
			return "MISHSTD122";
		
		case 0x000002FA:
			return "MISHSTD123";
		
		case 0x000002FB:
			return "MISHSTD124";
		
		case 0x000002FE:
			return "MISHSTD124";
		
		case 0x00000301:
			return "MISHSTD126";
		
		case 0x00000300:
			return "MISHSTD127";
		
		case 0x000002FF:
			return "MISHSTD128";
		
		case 0x00000303:
			return "MISHSTD129";
		
		case 0x00000302:
			return "MISHSTD130";
		
		case 0x00000305:
			return "MISHSTD131";
		
		case 0x00000304:
			return "MISHSTD132";
		
		case 0x00000307:
			return "MISHSTD133";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000306:
			return "MISHSTD134";
		
		case 0x00000309:
			return "MISHSTD135";
		
		case 0x00000308:
			return "MISHSTD136";
		
		case 0x0000030B:
			return "MISHSTD137";
		
		case 0x0000030A:
			return "MISHSTD138";
		
		case 0x0000030E:
			return "MISHSTD139";
		
		case 0x0000030C:
			return "MISHSTD140";
		
		case 0x0000030D:
			return "MISHSTD141";
		
		case 0x00000310:
			return "MISHSTD142";
		
		case 0x0000030F:
			return "MISHSTD143";
		
		case 0x00000312:
			return "MISHSTD144";
		
		case 0x00000311:
			return "MISHSTD145";
		
		case 0x00000314:
			return "MISHSTD146";
		
		case 0x00000313:
			return "MISHSTD147";
		
		case 0x00000315:
			return "MISHSTD148";
		
		case 0x00000318:
			return "MISHSTD149";
		
		case 0x00000317:
			return "MISHSTD150";
		
		case 0x00000316:
			return "MISHSTD151";
		
		case 0x00000319:
			return "MISHSTD152";
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000031A:
			return "MISHSTD153";
		
		case 0x0000031B:
			return "MISHSTD154";
		
		case 0x0000031C:
			return "MISHSTD155";
		
		case 0x0000031D:
			return "MISHSTD156";
		
		case 0x0000031E:
			return "MISHSTD157";
		
		case 0x0000031F:
			return "MISHSTD158";
		
		case 0x00000320:
			return "MISHSTD159";
		
		case 0x00000321:
			return "MISHSTD160";
		
		case 0x00000322:
			return "MISHSTD161";
		
		case 0x00000323:
			return "MISHSTD162";
		
		case 0x00000324:
			return "MISHSTD163";
		
		case 0x00000325:
			return "MISHSTD164";
		
		case 0x00000326:
			return "MISHSTD165";
		
		case 0x00000327:
			return "MISHSTD166";
		
		case 0x00000328:
			return "MISHSTD167";
		
		case 0x00000329:
			return "MISHSTD168";
		
		case 0x000001AD:
			return "MISHSTD48";
		
		case 0x000001B9:
			return "MISHSTD1";
		
		case 0x00000004:
			return "MISHSTD171";
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000000D:
			return "MISHSTD172";
		
		case 0x00000155:
			return "MISHSTD173";
		
		case 0x00000005:
			return "MISHSTD174";
		
		case 0x00000006:
			return "MISHSTD175";
		
		case 0x00000014:
			return "MISHSTD40";
		
		case 0x000000A9:
			return "MISHSTD177";
		
		case 0x000002DB:
			return "MISHSTD178";
		
		case 0x000002E1:
			return "MISHSTD179";
		
		case 0x00000091:
			return "MISHSTD180";
		
		case 0x0000009F:
			return "MISHSTD74";
		
		case 0x00000161:
			return "MISHSTD40";
		
		case 0x00000165:
			return "MISHSTD21";
		
		case 0x0000025D:
			return "MISHSTD21";
		
		case 0x0000025E:
			return "MISHSTD74";
		
		case 0x00000265:
			return "MISHSTD186";
		
		case 0x00000268:
			return "MISHSTD187";
		
		case 0x00000274:
			return "MISHSTD188";
		
		case 0x00000135:
			return "MISHSTD21";
		
		case 0x00000136:
			return "MISHSTD16";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000139:
			return "MISHSTD191";
		
		case 0x000001DD:
			return "MISHSTD192";
		
		case 0x000001E2:
			return "MISHSTD193";
		
		case 0x000001E4:
			return "MISHSTD194";
		
		case 0x000002CB:
			return "MISHSTD195";
		
		case 0x0000023A:
			return "MISHSTD40";
		
		case 0x00000236:
			return "MISHSTD87";
		
		case 0x00000235:
			return "MISHSTD198";
		
		case 0x0000023C:
			return "MISHSTD199";
		
		case 0x0000023E:
			return "MISHSTD200";
		
		case 0x000001AF:
			return "MISHSTD201";
		
		case 0x000001BB:
			return "MISHSTD202";
		
		case 0x000001BE:
			return "MISHSTD21";
		
		case 0x000001C4:
			return "MISHSTD204";
		
		case 0x0000016C:
			return "MISHSTD201";
		
		case 0x0000016D:
			return "MISHSTD40";
		
		case 0x00000171:
			return "MISHSTD207";
		
		case 0x0000029C:
			return "MISHSTD87";
		
		case 0x0000029E:
			return "MISHSTD209";
		
		default:
	}
	switch (iParam0)
	{
		case 0x000002A6:
			return "MISHSTD87";
		
		case 0x00000109:
			return "MISHSTD87";
		
		case 0x0000010A:
			return "MISHSTD40";
		
		case 0x0000010E:
			return "MISHSTD213";
		
		case 0x0000010F:
			return "MISHSTD214";
		
		case 0x00000110:
			return "MISHSTD215";
		
		case 0x000002FD:
			return "MISHSTD216";
		
		case 0x000002FC:
			return "MISHSTD217";
		
		case 0x0000014A:
			return "MISHSTD218";
		
		case 0x0000014B:
			return "MISHSTD40";
		
		case 0x00000283:
			return "MISHSTD220";
		
		case 0x00000284:
			return "MISHSTD221";
		
		case 0x00000285:
			return "MISHSTD222";
		
		case 0x00000286:
			return "MISHSTD223";
		
		case 0x00000194:
			return "MISHSTD74";
		
		case 0x000002D1:
			return "MISHSTD25";
		
		case 0x000002F0:
			return "MISHSTD226";
		
		case 0x00000093:
			return "MISHSTD227";
		
		case 0x00000150:
			return "MISHSTD228";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000173:
			return "MISHSTD228";
		
		case 0x0000022D:
			return "MISHSTD230";
		
		case 0x0000023F:
			return "MISHSTD231";
		
		case 0x00000275:
			return "MISHSTD232";
		
		case 0x00000287:
			return "MISHSTD86";
		
		case 0x000002AD:
			return "MISHSTD234";
		
		case 0x000002B5:
			return "MISHSTD235";
		
		case 0x000002E2:
			return "MISHSTD234";
		
		case 0x0000028A:
			return "MISHSTD237";
		
		case 0x00000289:
			return "MISHSTD238";
		
		case 0x00000339:
			return "MISHSTD239";
		
		case 0x00000338:
			return "MISHSTD240";
		
		case 0x00000335:
			return "MISHSTD241";
		
		case 0x00000334:
			return "MISHSTD242";
		
		case 0x0000013F:
			return "MISHSTD243";
		
		case 0x0000013E:
			return "MISHSTD244";
		
		case 0x0000013D:
			return "MISHSTD3";
		
		case 0x00000142:
			return "MISHSTD85";
		
		case 0x00000143:
			return "MISHSTD247";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000144:
			return "MISHSTD248";
		
		case 0x00000330:
			return "MISHSTD249";
		
		case 0x0000032F:
			return "MISHSTD250";
		
		case 0x0000032E:
			return "MISHSTD251";
		
		case 0x000002EA:
			return "MISHSTD252";
		
		case 0x00000202:
			return "MISHSTD253";
		
		case 0x000002E8:
			return "MISHSTD254";
		
		case 0x00000349:
			return "MISHSTD255";
		
		case 0x00000348:
			return "MISHSTD3";
		
		case 0x00000346:
			return "MISHSTD255";
		
		case 0x0000033C:
			return "MISHSTD3";
		
		case 0x0000033D:
			return "MISHSTD255";
		
		case 0x0000033F:
			return "MISHSTD12";
		
		case 0x00000340:
			return "MISHSTD255";
		
		case 0x00000342:
			return "MISHSTD48";
		
		case 0x00000343:
			return "MISHSTD255";
		
		case 0x00000345:
			return "MISHSTD264";
		
		case 0x000002E3:
			return "MISHSTD265";
		
		case 0x0000026B:
			return "MISHSTD266";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000230:
			return "MISHSTD267";
		
		case 0x0000022F:
			return "MISHSTD268";
		
		case 0x0000022E:
			return "MISHSTD269";
		
		case 0x000002A1:
			return "MISHSTD16";
		
		case 0x000002B0:
			return "MISHSTD16";
		
		case 0x000002AF:
			return "MISHSTD272";
		
		case 0x0000034C:
			return "MISHSTD273";
		
		case 0x0000034D:
			return "MISHSTD274";
		
		case 0x0000034B:
			return "MISHSTD275";
		
		case 0x000000EC:
			return "MISHSTD276";
		
		case 0x0000001D:
			return "MISHSTD277";
		
		case 0x0000006D:
			return "MISHSTD278";
		
		case 0x0000006C:
			return "MISHSTD279";
		
		case 0x00000087:
			return "MISHSTD280";
		
		case 0x000000E3:
			return "MISHSTD281";
		
		case 0x00000354:
			return "MISHSTD282";
		
		case 0x0000034E:
			return "MISHSTD283";
		
		case 0x000001B8:
			return "MISHSTD284";
		
		case 0x00000360:
			return "MISHSTD285";
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000035F:
			return "MISHSTD286";
		
		case 0x0000035D:
			return "MISHSTD287";
		
		case 0x0000035E:
			return "MISHSTD288";
		
		case 0x00000366:
			return "MISHSTD289";
		
		case 0x00000220:
			return "MISHSTD290";
		
		case 0x0000021F:
			return "MISHSTD291";
		
		case 0x00000251:
			return "MISHSTD292";
		
		case 0x00000250:
			return "MISHSTD14";
		
		case 0x0000025B:
			return "MISHSTD12";
		
		case 0x00000383:
			return "MISHSTD295";
		
		case 0x00000384:
			return "MISHSTD296";
		
		case 0x00000373:
			return "MISHSTD297";
		
		case 0x0000037B:
			return "MISHSTD297";
		
		case 0x00000291:
			return "MISHSTD299";
		
		case 0x0000036B:
			return "MISHSTD297";
		
		case 0x0000038A:
			return "MISHSTD193";
		
		case 0x000002C2:
			return "MISHSTD302";
		
		case 0x000002BB:
			return "MISHSTD303";
		
		case 0x000002D6:
			return "MISHSTD304";
		
		default:
	}
	switch (iParam0)
	{
		case 0x000000ED:
			return "MISHSTD305";
		
		case 0x00000292:
			return "MISHSTD3";
		
		case 0x0000036D:
			return "MISHSTD307";
		
		case 0x00000375:
			return "MISHSTD307";
		
		case 0x0000037D:
			return "MISHSTD307";
		
		case 0x000002B6:
			return "MISHSTD310";
		
		case 0x00000371:
			return "MISHSTD311";
		
		case 0x00000379:
			return "MISHSTD312";
		
		case 0x00000381:
			return "MISHSTD311";
		
		case 0x00000279:
			return "MISHSTD314";
		
		case 0x00000278:
			return "MISHSTD315";
		
		case 0x00000026:
			return "MISHSTD316";
		
		case 0x00000029:
			return "MISHSTD317";
		
		case 0x00000027:
			return "MISHSTD318";
		
		case 0x00000028:
			return "MISHSTD319";
		
		case 0x0000002A:
			return "MISHSTD320";
		
		case 0x00000038:
			return "MISHSTD319";
		
		case 0x00000034:
			return "MISHSTD316";
		
		case 0x00000035:
			return "MISHSTD323";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000036:
			return "MISHSTD317";
		
		case 0x00000037:
			return "MISHSTD320";
		
		case 0x00000046:
			return "MISHSTD320";
		
		case 0x00000045:
			return "MISHSTD317";
		
		case 0x00000043:
			return "MISHSTD328";
		
		case 0x00000044:
			return "MISHSTD319";
		
		case 0x00000042:
			return "MISHSTD316";
		
		case 0x00000051:
			return "MISHSTD316";
		
		case 0x00000052:
			return "MISHSTD332";
		
		case 0x00000054:
			return "MISHSTD317";
		
		case 0x00000053:
			return "MISHSTD319";
		
		case 0x00000055:
			return "MISHSTD320";
		
		case 0x00000061:
			return "MISHSTD316";
		
		case 0x00000062:
			return "MISHSTD337";
		
		case 0x00000064:
			return "MISHSTD317";
		
		case 0x00000063:
			return "MISHSTD319";
		
		case 0x00000065:
			return "MISHSTD320";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

void func_56(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (iParam5 != 0x00000000)
	{
		unk_0x7E60C62A7CE58FC8(iParam5, "SET_DATA_SLOT");
	}
	else
	{
		unk_0x673DE2AC97BFD28A("SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0x00000002);
	}
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(0x00000001);
	unk_0x3CAEA85DA607305E(iParam0);
	if (iParam5 == 0x00000000)
	{
		unk_0x7ACC3006A87F8B39("PM_RP_STATD");
		unk_0x6B012227B3921E18(sParam3);
		unk_0x6B012227B3921E18(func_55(iParam4));
		unk_0x779B34565F4D71B1();
	}
	else
	{
		func_30(sParam3);
	}
	unk_0x7E60D21B163E9D56();
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (iParam6 != 0x00000000)
	{
		unk_0x7E60C62A7CE58FC8(iParam6, "SET_DATA_SLOT");
	}
	else
	{
		unk_0x673DE2AC97BFD28A("SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0x00000002);
	}
	iVar0 = iParam0;
	if (iVar0 > iParam1)
	{
		iVar0 = iParam1;
	}
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(0x00000005);
	unk_0x3CAEA85DA607305E(iVar0);
	unk_0x3CAEA85DA607305E(iParam1);
	if (iParam6 == 0x00000000)
	{
		unk_0x7ACC3006A87F8B39("PM_RP_STATD");
		unk_0x6B012227B3921E18(sParam4);
		unk_0x6B012227B3921E18(func_55(iParam5));
		unk_0x779B34565F4D71B1();
	}
	else
	{
		func_30(sParam4);
	}
	unk_0x7E60D21B163E9D56();
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	float fVar0;
	
	fVar0 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
	if (iParam6 != 0x00000000)
	{
		unk_0x7E60C62A7CE58FC8(iParam6, "SET_DATA_SLOT");
	}
	else
	{
		unk_0x673DE2AC97BFD28A("SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0x00000002);
	}
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(0x00000003);
	unk_0x3CAEA85DA607305E(SYSTEM::CEIL(fVar0));
	if (iParam6 == 0x00000000)
	{
		unk_0x7ACC3006A87F8B39("PM_RP_STATD");
		unk_0x6B012227B3921E18(sParam4);
		unk_0x6B012227B3921E18(func_55(iParam5));
		unk_0x779B34565F4D71B1();
	}
	else
	{
		func_30(sParam4);
	}
	unk_0x7E60D21B163E9D56();
}

void func_59(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (iParam4 != 0x00000000)
	{
		unk_0x7E60C62A7CE58FC8(iParam4, "SET_DATA_SLOT");
	}
	else
	{
		unk_0x673DE2AC97BFD28A("SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0x00000002);
	}
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x3CAEA85DA607305E(iParam1);
	if (iParam4 == 0x00000000)
	{
		unk_0x7ACC3006A87F8B39("PM_RP_STATD");
		unk_0x6B012227B3921E18(sParam2);
		unk_0x6B012227B3921E18(func_55(iParam3));
		unk_0x779B34565F4D71B1();
	}
	else
	{
		func_30(sParam2);
	}
	unk_0x7E60D21B163E9D56();
}

void func_60(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 60000f));
	iVar1 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 1000f)) - iVar0 * 60);
	if (iParam5 != 0x00000000)
	{
		unk_0x7E60C62A7CE58FC8(iParam5, "SET_DATA_SLOT");
	}
	else
	{
		unk_0x673DE2AC97BFD28A("SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0x00000002);
	}
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(0x00000004);
	unk_0x3CAEA85DA607305E(iVar0);
	unk_0x3CAEA85DA607305E(iVar1);
	if (iParam5 == 0x00000000)
	{
		unk_0x7ACC3006A87F8B39("PM_RP_STATD");
		unk_0x6B012227B3921E18(sParam3);
		unk_0x6B012227B3921E18(func_55(iParam4));
		unk_0x779B34565F4D71B1();
	}
	else
	{
		func_30(sParam3);
	}
	unk_0x7E60D21B163E9D56();
}

void func_61(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (iParam5 != 0x00000000)
	{
		unk_0x7E60C62A7CE58FC8(iParam5, "SET_DATA_SLOT");
	}
	else
	{
		unk_0x673DE2AC97BFD28A("SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0x00000002);
	}
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(0x00000000);
	unk_0x3CAEA85DA607305E(iParam0);
	if (iParam5 == 0x00000000)
	{
		unk_0x7ACC3006A87F8B39("PM_RP_STATD");
		unk_0x6B012227B3921E18(sParam3);
		unk_0x6B012227B3921E18(func_55(iParam4));
		unk_0x779B34565F4D71B1();
	}
	else
	{
		func_30(sParam3);
	}
	unk_0x7E60D21B163E9D56();
}

char* func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MISHSTA_0";
		
		case 0x00000009:
			return "MISHSTA_1";
		
		case 0x0000000A:
			return "MISHSTA_2";
		
		case 0x00000015:
			return "MISHSTA_1";
		
		case 0x00000016:
			return "MISHSTA_3";
		
		case 0x00000152:
			return "MISHSTA_0";
		
		case 0x00000153:
			return "MISHSTA_4";
		
		case 0x000000C4:
			return "MISHSTA_5";
		
		case 0x000000C5:
			return "MISHSTA_0";
		
		case 0x000000CD:
			return "MISHSTA_6";
		
		case 0x000000CE:
			return "MISHSTA_7";
		
		case 0x000000CF:
			return "MISHSTA_8";
		
		case 0x000000DA:
			return "MISHSTA_1";
		
		case 0x000000D9:
			return "MISHSTA_0";
		
		case 0x00000180:
			return "MISHSTA_1";
		
		case 0x00000181:
			return "MISHSTA_9";
		
		case 0x00000174:
			return "MISHSTA_10";
		
		case 0x00000175:
			return "MISHSTA_11";
		
		case 0x00000177:
			return "MISHSTA_1";
		
		case 0x00000176:
			return "MISHSTA_12";
		
		case 0x000001E6:
			return "MISHSTA_13";
		
		case 0x000001E7:
			return "MISHSTA_11";
		
		case 0x000001E8:
			return "MISHSTA_1";
		
		case 0x000001E9:
			return "MISHSTA_14";
		
		case 0x000001EA:
			return "MISHSTA_15";
		
		case 0x000001F3:
			return "MISHSTA_11";
		
		case 0x000001F4:
			return "MISHSTA_1";
		
		case 0x000001F5:
			return "MISHSTA_16";
		
		case 0x000001F6:
			return "MISHSTA_17";
		
		case 0x00000203:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000204:
			return "MISHSTA_18";
		
		case 0x00000205:
			return "MISHSTA_12";
		
		case 0x00000206:
			return "MISHSTA_19";
		
		case 0x00000089:
			return "MISHSTA_12";
		
		case 0x00000088:
			return "MISHSTA_20";
		
		case 0x00000094:
			return "MISHSTA_11";
		
		case 0x00000095:
			return "MISHSTA_12";
		
		case 0x00000096:
			return "MISHSTA_21";
		
		case 0x000000E5:
			return "MISHSTA_6";
		
		case 0x000000E6:
			return "MISHSTA_22";
		
		case 0x00000111:
			return "MISHSTA_10";
		
		case 0x00000112:
			return "MISHSTA_11";
		
		case 0x00000113:
			return "MISHSTA_1";
		
		case 0x00000114:
			return "MISHSTA_23";
		
		case 0x00000115:
			return "MISHSTA_12";
		
		case 0x0000011B:
			return "MISHSTA_1";
		
		case 0x0000011C:
			return "MISHSTA_10";
		
		case 0x0000011D:
			return "MISHSTA_11";
		
		case 0x0000015A:
			return "MISHSTA_1";
		
		case 0x000000EF:
			return "MISHSTA_1";
		
		case 0x000000F0:
			return "MISHSTA_24";
		
		case 0x000000F1:
			return "MISHSTA_25";
		
		case 0x000000F2:
			return "MISHSTA_26";
		
		case 0x00000126:
			return "MISHSTA_27";
		
		case 0x00000127:
			return "MISHSTA_28";
		
		case 0x00000128:
			return "MISHSTA_29";
		
		case 0x00000129:
			return "MISHSTA_30";
		
		case 0x0000012A:
			return "MISHSTA_31";
		
		case 0x00000134:
			return "MISHSTA_32";
		
		case 0x00000066:
			return "MISHSTA_0";
		
		case 0x00000073:
			return "MISHSTA_33";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000072:
			return "MISHSTA_1";
		
		case 0x0000006F:
			return "MISHSTA_34";
		
		case 0x00000070:
			return "MISHSTA_35";
		
		case 0x00000071:
			return "MISHSTA_36";
		
		case 0x0000018C:
			return "MISHSTA_1";
		
		case 0x00000189:
			return "MISHSTA_37";
		
		case 0x0000018A:
			return "MISHSTA_38";
		
		case 0x0000018B:
			return "MISHSTA_39";
		
		case 0x00000078:
			return "MISHSTA_0";
		
		case 0x00000079:
			return "MISHSTA_6";
		
		case 0x0000007A:
			return "MISHSTA_40";
		
		case 0x0000007B:
			return "MISHSTA_41";
		
		case 0x0000007C:
			return "MISHSTA_42";
		
		case 0x000000A1:
			return "MISHSTA_43";
		
		case 0x000000AC:
			return "MISHSTA_43";
		
		case 0x000000AD:
			return "MISHSTA_1";
		
		case 0x000000AE:
			return "MISHSTA_11";
		
		case 0x000000AF:
			return "MISHSTA_44";
		
		case 0x000000B9:
			return "MISHSTA_1";
		
		case 0x000000BA:
			return "MISHSTA_6";
		
		case 0x000000BB:
			return "MISHSTA_45";
		
		case 0x00000146:
			return "MISHSTA_46";
		
		case 0x00000081:
			return "MISHSTA_1";
		
		case 0x00000082:
			return "MISHSTA_0";
		
		case 0x000001D2:
			return "MISHSTA_1";
		
		case 0x00000190:
			return "MISHSTA_1";
		
		case 0x00000191:
			return "MISHSTA_47";
		
		case 0x0000019D:
			return "MISHSTA_48";
		
		case 0x0000019E:
			return "MISHSTA_10";
		
		case 0x0000019F:
			return "MISHSTA_11";
		
		case 0x000001A0:
			return "MISHSTA_49";
		
		default:
	}
	switch (iParam0)
	{
		case 0x000001A1:
			return "MISHSTA_50";
		
		case 0x000000F9:
			return "MISHSTA_1";
		
		case 0x000001DA:
			return "MISHSTA_1";
		
		case 0x00000101:
			return "MISHSTA_1";
		
		case 0x0000020F:
			return "MISHSTA_51";
		
		case 0x00000210:
			return "MISHSTA_52";
		
		case 0x00000211:
			return "MISHSTA_53";
		
		case 0x00000216:
			return "MISHSTA_54";
		
		case 0x000002C5:
			return "MISHSTA_55";
		
		case 0x00000240:
			return "MISHSTA_1";
		
		case 0x00000241:
			return "MISHSTA_56";
		
		case 0x00000242:
			return "MISHSTA_57";
		
		case 0x00000243:
			return "MISHSTA_58";
		
		case 0x000002E6:
			return "MISHSTA_59";
		
		case 0x000002E5:
			return "MISHSTA_60";
		
		case 0x000002E7:
			return "MISHSTA_61";
		
		case 0x000002E9:
			return "MISHSTA_62";
		
		case 0x000002EC:
			return "MISHSTA_62";
		
		case 0x000002EB:
			return "MISHSTA_63";
		
		case 0x000002ED:
			return "MISHSTA_64";
		
		case 0x000002EE:
			return "MISHSTA_65";
		
		case 0x000002EF:
			return "MISHSTA_66";
		
		case 0x000002F2:
			return "MISHSTA_67";
		
		case 0x000002F1:
			return "MISHSTA_68";
		
		case 0x000002F5:
			return "MISHSTA_69";
		
		case 0x000002F4:
			return "MISHSTA_70";
		
		case 0x000002F3:
			return "MISHSTA_71";
		
		case 0x000002F7:
			return "MISHSTA_72";
		
		case 0x000002F6:
			return "MISHSTA_73";
		
		case 0x000002F9:
			return "MISHSTA_74";
		
		case 0x000002F8:
			return "MISHSTA_75";
		
		default:
	}
	switch (iParam0)
	{
		case 0x000002FA:
			return "MISHSTA_76";
		
		case 0x000002FB:
			return "MISHSTA_77";
		
		case 0x000002FE:
			return "MISHSTA_78";
		
		case 0x00000301:
			return "MISHSTA_79";
		
		case 0x00000300:
			return "MISHSTA_80";
		
		case 0x000002FF:
			return "MISHSTA_81";
		
		case 0x00000303:
			return "MISHSTA_82";
		
		case 0x00000302:
			return "MISHSTA_83";
		
		case 0x00000305:
			return "MISHSTA_84";
		
		case 0x00000304:
			return "MISHSTA_85";
		
		case 0x00000307:
			return "MISHSTA_86";
		
		case 0x00000306:
			return "MISHSTA_87";
		
		case 0x00000309:
			return "MISHSTA_88";
		
		case 0x00000308:
			return "MISHSTA_89";
		
		case 0x0000030B:
			return "MISHSTA_90";
		
		case 0x0000030A:
			return "MISHSTA_91";
		
		case 0x0000030E:
			return "MISHSTA_92";
		
		case 0x0000030C:
			return "MISHSTA_93";
		
		case 0x0000030D:
			return "MISHSTA_94";
		
		case 0x00000310:
			return "MISHSTA_95";
		
		case 0x0000030F:
			return "MISHSTA_96";
		
		case 0x00000312:
			return "MISHSTA_97";
		
		case 0x00000311:
			return "MISHSTA_98";
		
		case 0x00000314:
			return "MISHSTA_99";
		
		case 0x00000313:
			return "MISHSTA_100";
		
		case 0x00000315:
			return "MISHSTA_101";
		
		case 0x00000318:
			return "MISHSTA_102";
		
		case 0x00000317:
			return "MISHSTA_103";
		
		case 0x00000316:
			return "MISHSTA_104";
		
		case 0x00000319:
			return "MISHSTA_105";
		
		case 0x0000031A:
			return "MISHSTA_106";
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000031B:
			return "MISHSTA_0";
		
		case 0x0000031C:
			return "MISHSTA_107";
		
		case 0x0000031D:
			return "MISHSTA_108";
		
		case 0x0000031E:
			return "MISHSTA_109";
		
		case 0x0000031F:
			return "MISHSTA_110";
		
		case 0x00000320:
			return "MISHSTA_111";
		
		case 0x00000321:
			return "MISHSTA_112";
		
		case 0x00000322:
			return "MISHSTA_113";
		
		case 0x00000323:
			return "MISHSTA_114";
		
		case 0x00000324:
			return "MISHSTA_115";
		
		case 0x00000325:
			return "MISHSTA_116";
		
		case 0x00000326:
			return "MISHSTA_117";
		
		case 0x00000327:
			return "MISHSTA_118";
		
		case 0x00000328:
			return "MISHSTA_119";
		
		case 0x00000329:
			return "MISHSTA_120";
		
		case 0x000001AD:
			return "MISHSTA_1";
		
		case 0x000001B9:
			return "MISHSTA_1";
		
		case 0x00000004:
			return "MISHSTA_121";
		
		case 0x0000000D:
			return "MISHSTA_11";
		
		case 0x00000155:
			return "MISHSTA_122";
		
		case 0x00000005:
			return "MISHSTA_123";
		
		case 0x00000006:
			return "MISHSTA_124";
		
		case 0x00000014:
			return "MISHSTA_10";
		
		case 0x000000A9:
			return "MISHSTA_125";
		
		case 0x000002DB:
			return "MISHSTA_126";
		
		case 0x000002E1:
			return "MISHSTA_10";
		
		case 0x00000091:
			return "MISHSTA_127";
		
		case 0x0000009F:
			return "MISHSTA_10";
		
		case 0x00000161:
			return "MISHSTA_10";
		
		case 0x00000165:
			return "MISHSTA_11";
		
		case 0x0000025D:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000025E:
			return "MISHSTA_10";
		
		case 0x00000265:
			return "MISHSTA_128";
		
		case 0x00000268:
			return "MISHSTA_129";
		
		case 0x00000274:
			return "MISHSTA_130";
		
		case 0x00000135:
			return "MISHSTA_11";
		
		case 0x00000136:
			return "MISHSTA_10";
		
		case 0x00000139:
			return "MISHSTA_131";
		
		case 0x000001DD:
			return "MISHSTA_37";
		
		case 0x000001E2:
			return "MISHSTA_132";
		
		case 0x000001E4:
			return "MISHSTA_133";
		
		case 0x000002CB:
			return "MISHSTA_123";
		
		case 0x0000023A:
			return "MISHSTA_10";
		
		case 0x00000236:
			return "MISHSTA_11";
		
		case 0x00000235:
			return "MISHSTA_134";
		
		case 0x0000023C:
			return "MISHSTA_135";
		
		case 0x0000023E:
			return "MISHSTA_136";
		
		case 0x000001AF:
			return "MISHSTA_11";
		
		case 0x000001BB:
			return "MISHSTA_137";
		
		case 0x000001BE:
			return "MISHSTA_138";
		
		case 0x000001C4:
			return "MISHSTA_139";
		
		case 0x0000016C:
			return "MISHSTA_11";
		
		case 0x0000016D:
			return "MISHSTA_10";
		
		case 0x00000171:
			return "MISHSTA_140";
		
		case 0x0000029C:
			return "MISHSTA_11";
		
		case 0x0000029E:
			return "MISHSTA_141";
		
		case 0x000002A6:
			return "MISHSTA_11";
		
		case 0x00000109:
			return "MISHSTA_11";
		
		case 0x0000010A:
			return "MISHSTA_10";
		
		case 0x0000010E:
			return "MISHSTA_142";
		
		case 0x0000010F:
			return "MISHSTA_143";
		
		case 0x00000110:
			return "MISHSTA_144";
		
		default:
	}
	switch (iParam0)
	{
		case 0x000002FD:
			return "MISHSTA_145";
		
		case 0x000002FC:
			return "MISHSTA_146";
		
		case 0x0000014A:
			return "MISHSTA_11";
		
		case 0x0000014B:
			return "MISHSTA_10";
		
		case 0x00000283:
			return "MISHSTA_147";
		
		case 0x00000284:
			return "MISHSTA_148";
		
		case 0x00000285:
			return "MISHSTA_149";
		
		case 0x00000286:
			return "MISHSTA_150";
		
		case 0x00000194:
			return "MISHSTA_10";
		
		case 0x000002D1:
			return "MISHSTA_151";
		
		case 0x000002F0:
			return "MISHSTA_152";
		
		case 0x00000093:
			return "MISHSTA_1";
		
		case 0x00000150:
			return "MISHSTA_1";
		
		case 0x00000173:
			return "MISHSTA_1";
		
		case 0x0000022D:
			return "MISHSTA_1";
		
		case 0x0000023F:
			return "MISHSTA_1";
		
		case 0x00000275:
			return "MISHSTA_1";
		
		case 0x00000287:
			return "MISHSTA_1";
		
		case 0x000002AD:
			return "MISHSTA_1";
		
		case 0x000002B5:
			return "MISHSTA_1";
		
		case 0x000002E2:
			return "MISHSTA_1";
		
		case 0x0000028A:
			return "MISHSTA_0";
		
		case 0x00000289:
			return "MISHSTA_153";
		
		case 0x00000339:
			return "MISHSTA_154";
		
		case 0x00000338:
			return "MISHSTA_155";
		
		case 0x00000335:
			return "MISHSTA_156";
		
		case 0x00000334:
			return "MISHSTA_157";
		
		case 0x0000013F:
			return "MISHSTA_158";
		
		case 0x0000013E:
			return "MISHSTA_159";
		
		case 0x0000013D:
			return "MISHSTA_1";
		
		case 0x00000142:
			return "MISHSTA_1";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000143:
			return "MISHSTA_0";
		
		case 0x00000144:
			return "MISHSTA_160";
		
		case 0x00000330:
			return "MISHSTA_161";
		
		case 0x0000032F:
			return "MISHSTA_162";
		
		case 0x0000032E:
			return "MISHSTA_163";
		
		case 0x000002EA:
			return "MISHSTA_164";
		
		case 0x00000202:
			return "MISHSTA_165";
		
		case 0x000002E8:
			return "MISHSTA_166";
		
		case 0x00000349:
			return "MISHSTA_167";
		
		case 0x00000348:
			return "MISHSTA_1";
		
		case 0x00000346:
			return "MISHSTA_167";
		
		case 0x0000033C:
			return "MISHSTA_1";
		
		case 0x0000033D:
			return "MISHSTA_167";
		
		case 0x0000033F:
			return "MISHSTA_1";
		
		case 0x00000340:
			return "MISHSTA_167";
		
		case 0x00000342:
			return "MISHSTA_1";
		
		case 0x00000343:
			return "MISHSTA_167";
		
		case 0x00000345:
			return "MISHSTA_1";
		
		case 0x000002E3:
			return "MISHSTA_168";
		
		case 0x0000026B:
			return "MISHSTA_169";
		
		case 0x00000230:
			return "MISHSTA_170";
		
		case 0x0000022F:
			return "MISHSTA_171";
		
		case 0x0000022E:
			return "MISHSTA_172";
		
		case 0x000002A1:
			return "MISHSTA_10";
		
		case 0x000002B0:
			return "MISHSTA_10";
		
		case 0x000002AF:
			return "MISHSTA_173";
		
		case 0x0000034C:
			return "MISHSTA_174";
		
		case 0x0000034D:
			return "MISHSTA_175";
		
		case 0x0000034B:
			return "MISHSTA_176";
		
		case 0x000000EC:
			return "MISHSTA_177";
		
		case 0x0000001D:
			return "MISHSTA_178";
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000006D:
			return "MISHSTA_179";
		
		case 0x0000006C:
			return "MISHSTA_180";
		
		case 0x00000087:
			return "MISHSTA_181";
		
		case 0x000000E3:
			return "MISHSTA_182";
		
		case 0x00000354:
			return "MISHSTA_183";
		
		case 0x0000034E:
			return "MISHSTA_184";
		
		case 0x000001B8:
			return "MISHSTA_185";
		
		case 0x00000360:
			return "MISHSTA_186";
		
		case 0x0000035F:
			return "MISHSTA_187";
		
		case 0x0000035D:
			return "MISHSTA_1";
		
		case 0x0000035E:
			return "MISHSTA_188";
		
		case 0x00000366:
			return "MISHSTA_1";
		
		case 0x00000220:
			return "MISHSTA_0";
		
		case 0x0000021F:
			return "MISHSTA_189";
		
		case 0x00000251:
			return "MISHSTA_190";
		
		case 0x00000250:
			return "MISHSTA_1";
		
		case 0x0000025B:
			return "MISHSTA_1";
		
		case 0x00000383:
			return "MISHSTA_1";
		
		case 0x00000384:
			return "MISHSTA_191";
		
		case 0x00000373:
			return "MISHSTA_192";
		
		case 0x0000037B:
			return "MISHSTA_192";
		
		case 0x00000291:
			return "MISHSTA_193";
		
		case 0x0000036B:
			return "MISHSTA_192";
		
		case 0x0000038A:
			return "MISHSTA_194";
		
		case 0x000002C2:
			return "MISHSTA_195";
		
		case 0x000002BB:
			return "MISHSTA_196";
		
		case 0x000002D6:
			return "MISHSTA_197";
		
		case 0x000000ED:
			return "MISHSTA_198";
		
		case 0x00000292:
			return "MISHSTA_1";
		
		case 0x0000036D:
			return "MISHSTA_0";
		
		case 0x00000375:
			return "MISHSTA_0";
		
		default:
	}
	switch (iParam0)
	{
		case 0x0000037D:
			return "MISHSTA_0";
		
		case 0x000002B6:
			return "MISHSTA_110";
		
		case 0x00000371:
			return "MISHSTA_199";
		
		case 0x00000379:
			return "MISHSTA_199";
		
		case 0x00000381:
			return "MISHSTA_199";
		
		case 0x00000279:
			return "MISHSTA_200";
		
		case 0x00000278:
			return "MISHSTA_201";
		
		case 0x00000026:
			return "MISHSTA_202";
		
		case 0x00000029:
			return "MISHSTA_203";
		
		case 0x00000027:
			return "MISHSTA_204";
		
		case 0x00000028:
			return "MISHSTA_205";
		
		case 0x0000002A:
			return "MISHSTA_206";
		
		case 0x00000038:
			return "MISHSTA_205";
		
		case 0x00000034:
			return "MISHSTA_202";
		
		case 0x00000035:
			return "MISHSTA_207";
		
		case 0x00000036:
			return "MISHSTA_203";
		
		case 0x00000037:
			return "MISHSTA_206";
		
		case 0x00000046:
			return "MISHSTA_206";
		
		case 0x00000045:
			return "MISHSTA_203";
		
		case 0x00000043:
			return "MISHSTA_132";
		
		case 0x00000044:
			return "MISHSTA_205";
		
		case 0x00000042:
			return "MISHSTA_202";
		
		case 0x00000051:
			return "MISHSTA_202";
		
		case 0x00000052:
			return "MISHSTA_208";
		
		case 0x00000054:
			return "MISHSTA_203";
		
		case 0x00000053:
			return "MISHSTA_205";
		
		case 0x00000055:
			return "MISHSTA_206";
		
		case 0x00000061:
			return "MISHSTA_202";
		
		case 0x00000062:
			return "MISHSTA_209";
		
		case 0x00000064:
			return "MISHSTA_203";
		
		case 0x00000063:
			return "MISHSTA_205";
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000065:
			return "MISHSTA_206";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

int func_63(int iParam0)
{
	if (func_64(iParam0, func_71(Global_F129[iParam0 /*13*/].f_4)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_64(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000)
	{
		return 0x00000000;
	}
	switch (Global_F129[iParam0 /*13*/])
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000004:
		case 0x00000005:
		case 0x00000011:
			if (iParam1 < 0x00000001)
			{
				return 0x00000000;
			}
			break;
	}
	if (iParam1 == 0x7FFFFFFF)
	{
		return 0x00000000;
	}
	if (((iParam0 == 0x00000371 || iParam0 == 0x00000379) || iParam0 == 0x00000381) && Global_1B416.f_6143[0x00000004 /*4*/] == func_65())
	{
		Global_F129[iParam0 /*13*/].f_2 = 0x00000000;
	}
	if (Global_F129[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_F129[iParam0 /*13*/].f_2)
		{
			return 0x00000001;
		}
	}
	else if (iParam1 >= Global_F129[iParam0 /*13*/].f_2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_65()
{
	func_66();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_66()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_69(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_68(unk_0x16F2683693E537C9());
			if (func_67(iVar0) && (!func_25(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_67(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_67(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_68(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_69(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_69(int iParam0)
{
	if (func_67(iParam0))
	{
		return func_70(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_70(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_71(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	if (unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF))
	{
		return (iVar0 - 0x00000001);
	}
	return 0xFFFFFFFF;
}

int func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = func_71(Global_F129[iParam0 /*13*/].f_4);
	if (iVar0 > 0xFFFFFFFE)
	{
		return iVar0;
	}
	return 0x00000000;
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0x00000001:
			return Global_15DBC[iParam0 /*34*/].f_11[iParam2];
			break;
		
		case 0x00000007:
			return func_74(iParam0, iParam2);
			break;
		
		default:
			break;
	}
	return 0x00000392;
}

int func_74(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002E5;
				
				case 0x00000001:
					return 0x000002E6;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002E7;
				
				case 0x00000001:
					return 0x000002E8;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002E9;
				
				case 0x00000001:
					return 0x000002EA;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002EB;
				
				case 0x00000001:
					return 0x000002EC;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002ED;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000000C:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002EE;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000000E:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002EF;
				
				case 0x00000001:
					return 0x000002F0;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000010:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002F1;
				
				case 0x00000001:
					return 0x000002F2;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000011:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002F3;
				
				case 0x00000001:
					return 0x000002F4;
				
				case 0x00000002:
					return 0x000002F5;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000012:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002F6;
				
				case 0x00000001:
					return 0x000002F7;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000013:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002F8;
				
				case 0x00000001:
					return 0x000002F9;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000014:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002FA;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000015:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002FB;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000016:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002FC;
				
				case 0x00000001:
					return 0x000002FD;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000017:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002FE;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000019:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x000002FF;
				
				case 0x00000001:
					return 0x00000300;
				
				case 0x00000002:
					return 0x00000301;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000001A:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000302;
				
				case 0x00000001:
					return 0x00000303;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000001C:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000304;
				
				case 0x00000001:
					return 0x00000305;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000001D:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000306;
				
				case 0x00000001:
					return 0x00000307;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000001E:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000308;
				
				case 0x00000001:
					return 0x00000309;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000020:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000030A;
				
				case 0x00000001:
					return 0x0000030B;
				
				default:
			}
			return 0xFFFFFFFF;
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000021:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000030C;
				
				case 0x00000001:
					return 0x0000030D;
				
				case 0x00000002:
					return 0x0000030E;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000022:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000030F;
				
				case 0x00000001:
					return 0x00000310;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000026:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000311;
				
				case 0x00000001:
					return 0x00000312;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000027:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000313;
				
				case 0x00000001:
					return 0x00000314;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000028:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000315;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000029:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000316;
				
				case 0x00000001:
					return 0x00000317;
				
				case 0x00000002:
					return 0x00000318;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000002A:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000319;
				
				case 0x00000001:
					return 0x0000031A;
				
				case 0x00000002:
					return 0x0000031B;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000002B:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000031C;
				
				case 0x00000001:
					return 0x0000031D;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000002E:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000031E;
				
				case 0x00000001:
					return 0x0000031F;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000002F:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000320;
				
				case 0x00000001:
					return 0x00000321;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000031:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000322;
				
				case 0x00000001:
					return 0x00000323;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000032:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000324;
				
				case 0x00000001:
					return 0x00000325;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000033:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000326;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000039:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000327;
				
				case 0x00000001:
					return 0x00000328;
				
				case 0x00000002:
					return 0x00000329;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000003A:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000033C;
				
				case 0x00000001:
					return 0x0000033D;
				
				case 0x00000002:
					return 0x0000033E;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000003B:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000033F;
				
				case 0x00000001:
					return 0x00000340;
				
				case 0x00000002:
					return 0x00000341;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000003C:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000342;
				
				case 0x00000001:
					return 0x00000343;
				
				case 0x00000002:
					return 0x00000344;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000003D:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000345;
				
				case 0x00000001:
					return 0x00000346;
				
				case 0x00000002:
					return 0x00000347;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x0000003E:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000348;
				
				case 0x00000001:
					return 0x00000349;
				
				case 0x00000002:
					return 0x0000034A;
				
				default:
			}
			return 0xFFFFFFFF;
		
		case 0x00000018:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000034B;
				
				case 0x00000001:
					return 0x0000034C;
				
				case 0x00000002:
					return 0x0000034D;
				
				default:
			}
			return 0xFFFFFFFF;
		
		default:
	}
	return 0xFFFFFFFF;
}

int func_75(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000001:
			return Global_15DBC[iParam0 /*34*/].f_10;
			break;
		
		case 0x00000007:
			return func_76(iParam0);
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000002:
			return 0x00000002;
		
		case 0x00000003:
			return 0x00000002;
		
		case 0x00000005:
			return 0x00000002;
		
		case 0x00000006:
			return 0x00000002;
		
		case 0x00000008:
			return 0x00000001;
		
		case 0x0000000C:
			return 0x00000001;
		
		case 0x0000000E:
			return 0x00000002;
		
		case 0x00000010:
			return 0x00000002;
		
		case 0x00000011:
			return 0x00000003;
		
		case 0x00000012:
			return 0x00000002;
		
		case 0x00000013:
			return 0x00000002;
		
		case 0x00000014:
			return 0x00000001;
		
		case 0x00000015:
			return 0x00000001;
		
		case 0x00000016:
			return 0x00000002;
		
		case 0x00000017:
			return 0x00000001;
		
		case 0x00000019:
			return 0x00000003;
		
		case 0x0000001A:
			return 0x00000002;
		
		case 0x0000001C:
			return 0x00000002;
		
		case 0x0000001D:
			return 0x00000002;
		
		case 0x0000001E:
			return 0x00000002;
		
		case 0x00000020:
			return 0x00000002;
		
		default:
	}
	switch (iParam0)
	{
		case 0x00000021:
			return 0x00000003;
		
		case 0x00000022:
			return 0x00000002;
		
		case 0x00000026:
			return 0x00000002;
		
		case 0x00000027:
			return 0x00000002;
		
		case 0x00000028:
			return 0x00000001;
		
		case 0x00000029:
			return 0x00000003;
		
		case 0x0000002A:
			return 0x00000003;
		
		case 0x0000002B:
			return 0x00000002;
		
		case 0x0000002E:
			return 0x00000002;
		
		case 0x0000002F:
			return 0x00000002;
		
		case 0x00000031:
			return 0x00000002;
		
		case 0x00000032:
			return 0x00000002;
		
		case 0x00000033:
			return 0x00000001;
		
		case 0x00000039:
			return 0x00000003;
		
		case 0x0000003A:
			return 0x00000003;
		
		case 0x0000003B:
			return 0x00000003;
		
		case 0x0000003C:
			return 0x00000003;
		
		case 0x0000003D:
			return 0x00000003;
		
		case 0x0000003E:
			return 0x00000003;
		
		case 0x00000018:
			return 0x00000003;
		
		default:
	}
	return 0x00000000;
}

void func_77(int iParam0)
{
	unk_0x673DE2AC97BFD28A("SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
	if (iParam0 == 0x00000001)
	{
		func_81();
	}
}

struct<2> func_78(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 0x00000001:
			if ((iParam0 == 0x00000050 || iParam0 == 0x00000051) || iParam0 == 0x00000052)
			{
				StringConCat(&Var0, &(Global_15DBC[iParam0 /*34*/].f_8), 8);
				StringConCat(&Var0, "A", 8);
			}
			else
			{
				StringCopy(&Var0, "M_", 8);
				StringConCat(&Var0, &(Global_15DBC[iParam0 /*34*/].f_8), 8);
				if (iParam0 == 0x0000005A)
				{
					StringConCat(&Var0, "A", 8);
				}
			}
			break;
		
		case 0x00000007:
			Var0 = { func_79(iParam0) };
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<2> func_79(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_80(iParam0) };
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

struct<2> func_80(int iParam0)
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

void func_81()
{
	unk_0x673DE2AC97BFD28A("SET_COLUMN_SCROLL");
	unk_0x3CAEA85DA607305E(0x00000001);
	unk_0x3CAEA85DA607305E(0xFFFFFFFF);
	unk_0x3CAEA85DA607305E(0xFFFFFFFF);
	unk_0x3CAEA85DA607305E(0xFFFFFFFF);
	func_30("");
	unk_0x1200CC973A2399C8(0x00000001);
	unk_0x7E60D21B163E9D56();
}

void func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (Global_12C47 != iParam0 || iParam2 == 0x00000001)
	{
		iVar0 = 0x00000001;
	}
	Global_12C47 = iParam0;
	func_4(0x00000002);
	if (func_8() != 0xFFFFFFFF || !func_5(iParam0))
	{
		if (iParam1 == 0x00000001)
		{
			func_31(0x00000000);
		}
		func_3(0x00000000);
		func_29(0x00000001, iParam0);
	}
	else
	{
		if (iVar0 == 0x00000001)
		{
			func_28(0x00000001, 0x00000000);
			func_28(0x00000002, 0x00000000);
			func_77(0x00000001);
			func_77(0x00000002);
			func_83();
			func_27(Local_29[0x00000000 /*2*/]);
		}
		if (iParam1 == 0x00000001)
		{
			func_31(0x00000001);
		}
		func_2(iParam0, iVar0);
	}
}

void func_83()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	func_35();
	if (Global_12C48 > 0x00000010)
	{
		func_85();
		func_33(0x00000000, Global_12C48);
	}
	else
	{
		func_81();
	}
	iVar2 = 0x00000000;
	iVar3 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_12C48)
	{
		iVar2 = 0x00000000;
		iVar3 = 0x00000000;
		iVar8 = 0xFFFFFFFF;
		iVar1 = Local_29[iVar0 /*2*/];
		Local_28 = { func_78(iVar1, Global_12C47) };
		iVar7 = 0x00000000;
		while (iVar7 < func_75(iVar1, Global_12C47))
		{
			iVar4 = func_73(iVar1, Global_12C47, iVar7);
			if (!Global_F129[iVar4 /*13*/].f_7)
			{
				if (func_63(iVar4) == 0x00000001)
				{
					iVar3++;
				}
				switch (iVar4)
				{
					case 0x0000002A:
					case 0x00000037:
					case 0x00000055:
					case 0x00000046:
					case 0x00000065:
						iVar8 = func_72(iVar4);
						break;
				}
				iVar2++;
			}
			iVar7++;
		}
		func_52(iVar1, &iVar8);
		fVar5 = func_51(iVar3, iVar2, 0x00000000);
		iVar6 = func_50(fVar5);
		if (iVar8 > 0xFFFFFFFF)
		{
			iVar6 = iVar8;
		}
		func_84(0x00000001, iVar0, 0x00000434, iVar1, 0x00000001, &Local_28, func_49(iVar6));
		iVar0++;
	}
	func_47(0x00000001);
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, int iParam6)
{
	if (unk_0x673DE2AC97BFD28A("SET_DATA_SLOT"))
	{
		unk_0x3CAEA85DA607305E(iParam0);
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x3CAEA85DA607305E(iParam3);
		unk_0x3CAEA85DA607305E(0x00000003);
		unk_0x3CAEA85DA607305E(0x00000000);
		if (bParam4)
		{
			unk_0x3CAEA85DA607305E(0x00000001);
		}
		else
		{
			unk_0x3CAEA85DA607305E(0x00000000);
		}
		func_30(sParam5);
		unk_0x3CAEA85DA607305E(iParam6);
		unk_0x7E60D21B163E9D56();
	}
}

void func_85()
{
	unk_0x673DE2AC97BFD28A("INIT_COLUMN_SCROLL");
	unk_0x3CAEA85DA607305E(0x00000001);
	unk_0x1200CC973A2399C8(0x00000000);
	unk_0x3CAEA85DA607305E(0x00000001);
	unk_0x3CAEA85DA607305E(0x00000000);
	unk_0x3CAEA85DA607305E(0x00000002);
	unk_0x1200CC973A2399C8(0x00000001);
	unk_0x3CAEA85DA607305E(0x00000000);
	unk_0x1200CC973A2399C8(0x00000001);
	unk_0x7E60D21B163E9D56();
}

