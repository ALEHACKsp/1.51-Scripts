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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 3;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 1092616192;
	var uLocal_47 = 1101004800;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 3;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84[2] = { 0, 0 };
	int iLocal_85[2] = { 0, 0 };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89[2] = { 0, 0 };
	int iLocal_90 = 0;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = -1;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 1000;
	var uLocal_104 = 1000;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
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
	iLocal_20 = 0x00000003;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_79 = 0xFFFFFFFF;
	sLocal_91 = "PMDL_OBJ";
	sLocal_92 = "PMDL_LOC";
	sLocal_93 = "PMDL_BCK";
	unk_0x7798376279BB5369(0x00000001);
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_140(0x00000002);
		func_114();
	}
	iLocal_36 = func_112();
	while (0x00000001)
	{
		switch (iLocal_37)
		{
			case 0x00000000:
				if (!iLocal_70)
				{
					func_107();
				}
				else
				{
					func_106();
				}
				if (bLocal_69)
				{
					iLocal_71 = 0x00000001;
					iLocal_37 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (!func_105())
				{
					switch (iLocal_38)
					{
						case 0x00000000:
							func_102();
							break;
						
						case 0x00000001:
							if (iLocal_36 == 0x00000005 || iLocal_36 == 0x00000006)
							{
								func_66();
							}
							else
							{
								func_65();
							}
							break;
						
						case 0x00000002:
							func_9();
							if (iLocal_36 < 0x00000003)
							{
								func_7();
							}
							else if (iLocal_36 > 0x00000006)
							{
								func_7();
								func_2();
							}
							break;
						
						case 0x00000003:
						case 0x00000004:
							func_1();
							break;
					}
				}
				else
				{
					func_1();
				}
				break;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	func_140(0x00000002);
	func_114();
}

void func_2()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iLocal_86))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_86, 0x00000000))
		{
			iVar0 = 0x000000C8;
			iVar1 = (unk_0x7F6DC62EA9922664(iLocal_86) - 0x00000320);
			if (unk_0x377BE9A1BF38C7CE(iLocal_86))
			{
				unk_0xD458AC1C1D29C3B4(iLocal_86, (unk_0x7F6DC62EA9922664(iLocal_86) - 0x00000005), 0x00000000);
			}
			if (iVar1 <= 0x00000000)
			{
				iLocal_38 = 0x00000004;
			}
			else if (iVar1 < 0x0000004B)
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 0x00000006, 0x00000000, 0x00000001, 0x00000002);
			}
			else
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 0x00000001, 0x00000000, 0x00000001, 0x00000002);
			}
		}
		else
		{
			iLocal_38 = 0x00000004;
		}
	}
	else
	{
		iLocal_38 = 0x00000004;
	}
}

void func_3(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0x00000000, iParam5, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xBF800000, 0xBF800000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
}

void func_4(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_6(0x00000000, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_5(0x00000000, iVar0);
		Global_150976.f_46F[iVar0] = uParam0;
		Global_150976.f_46F.f_B[iVar0] = uParam1;
		StringCopy(&(Global_150976.f_46F.f_16[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_46F.f_C2[iVar0] = uParam3;
		Global_150976.f_46F.f_B7[iVar0] = uParam4;
		Global_150976.f_46F.f_D8[iVar0] = uParam5;
		Global_150976.f_46F.f_E3[iVar0 /*3*/] = fParam6;
		Global_150976.f_46F.f_E3[iVar0 /*3*/].f_1 = fParam7;
		Global_150976.f_46F.f_102[iVar0] = iParam8;
		Global_150976.f_46F.f_10D[iVar0] = uParam9;
		Global_150976.f_46F.f_138[iVar0] = iParam10;
		Global_150976.f_46F.f_143[iVar0] = iParam11;
		Global_150976.f_46F.f_14E[iVar0] = iParam12;
		Global_150976.f_46F.f_159[iVar0] = iParam13;
		Global_150976.f_46A = 0x00000001;
		Global_150976.f_46F.f_164[iVar0] = iParam14;
		Global_150976.f_46F.f_16F[iVar0] = iParam15;
		Global_150976.f_46F.f_17A[iVar0] = iParam16;
		Global_150976.f_46F.f_185[iVar0] = iParam17;
		Global_150976.f_46F.f_190[iVar0] = iParam18;
		Global_150976.f_46F.f_19B[iVar0] = iParam19;
		Global_150976.f_46F.f_1A6[iVar0] = iParam20;
		Global_150976.f_46F.f_1B1[iVar0] = iParam21;
		Global_150976.f_46F.f_1BC[iVar0] = iParam22;
		Global_150976.f_46F.f_1C7[iVar0] = iParam23;
		Global_150976.f_46F.f_1D2[iVar0] = iParam24;
		Global_150976.f_46F.f_CD[iVar0] = iParam25;
		Global_150976.f_46F.f_1DD[iVar0] = iParam26;
		Global_150976.f_46F.f_1E8[iVar0] = iParam27;
		Global_150976.f_46F.f_1F3[iVar0] = iParam28;
		Global_150976.f_46F.f_1FE[iVar0] = iParam29;
		Global_150976.f_46F.f_209[iVar0] = iParam30;
		Global_150976.f_46F.f_214[iVar0] = iParam31;
		Global_150976.f_46F.f_21F[iVar0] = iParam32;
		Global_150976.f_46F.f_22A[iVar0] = iParam33;
	}
}

void func_5(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_6(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

void func_7()
{
	int iVar0;
	
	iVar0 = (iLocal_74 - unk_0x1C0640BA9A7327B3());
	if (iVar0 < 0x00000000)
	{
		iVar0 = 0x00000000;
	}
	if (unk_0x1C0640BA9A7327B3() >= iLocal_78)
	{
		func_8(iVar0, "TIMER_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	else
	{
		func_8(iVar0, "TIMER_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
	}
	switch (iLocal_75)
	{
		case 0x00000000:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x00002710))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x00000001:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x00002328))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x00000002:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x00001F40))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x00000003:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x00001B58))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x00000004:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x00001770))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x00000005:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x00001388))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x00000006:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x00001194))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x00000007:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x00000FA0))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x00000008:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x00000DAC))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x00000009:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x00000BB8))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x0000000A:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x000009C4))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x0000000B:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x000007D0))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x0000000C:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x000005DC))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x0000000D:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x000003E8))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x0000000E:
			if (unk_0x1C0640BA9A7327B3() >= (iLocal_74 - 0x000001F4))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x0000000F:
			if (unk_0x1C0640BA9A7327B3() >= iLocal_74)
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 0x00000001);
				iLocal_75++;
			}
			break;
		
		case 0x00000010:
			break;
	}
	if (unk_0x1C0640BA9A7327B3() >= iLocal_74)
	{
		iLocal_38 = 0x00000003;
	}
}

void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_6(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_5(0x00000007, iVar0);
		Global_150976.f_11D2[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_11D2.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_11D2.f_AC[iVar0] = iParam2;
		Global_150976.f_11D2.f_D8[iVar0] = iParam3;
		Global_150976.f_11D2.f_B7[iVar0] = iParam4;
		Global_150976.f_11D2.f_C2[iVar0] = iParam5;
		Global_150976.f_11D2.f_F9[iVar0] = iParam6;
		Global_150976.f_11D2.f_104[iVar0] = iParam7;
		Global_150976.f_11D2.f_CD[iVar0] = iParam8;
		Global_150976.f_11D2.f_13A[iVar0] = iParam9;
		Global_150976.f_11D2.f_145[iVar0] = iParam10;
		Global_150976.f_11D2.f_165[iVar0] = iParam11;
		Global_150976.f_11D2.f_EE[iVar0] = iParam12;
		Global_150976.f_11D2.f_10F[iVar0] = iParam13;
		Global_150976.f_11D2.f_170[iVar0] = iParam14;
		Global_150976.f_11D2.f_17B[iVar0] = iParam15;
		Global_150976.f_11D2.f_186[iVar0] = iParam16;
		Global_150976.f_11D2.f_E3[iVar0] = iParam17;
	}
}

void func_9()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_36 >= 0x00000003 && iLocal_36 <= 0x00000004)
	{
		iVar0 = 0x00000000;
		while (iVar0 < iLocal_85)
		{
			if (!iLocal_72)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_85[iVar0]))
				{
					if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_64, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000))
					{
						unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
						unk_0x0F52891B1CED828B(unk_0xD803B885F5E47A62(), 0f);
						iLocal_72 = 0x00000001;
					}
				}
			}
			else if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_85[iVar0]))
				{
					unk_0xF3268524E9BE6D6E(iLocal_85[iVar0], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0xFADC0A217229F6B5(iLocal_85[iVar0], 0x00000001);
					unk_0x6DAD7906B73F064D(&(iLocal_85[iVar0]));
				}
				if (unk_0xC844350D5D58C99A(iLocal_87))
				{
					unk_0x046C362CF15F1935(&iLocal_87);
				}
			}
			iVar0++;
		}
	}
	if (func_21(&iLocal_39, vLocal_65, Global_16, 0x00000001, iLocal_86, sLocal_92, "", sLocal_93, 0x00000001, 0x00000000, 0x00000001, 0xFFFFFFFF))
	{
		func_19(iLocal_86, 10.5f, 0x00000002, 0x3F000000, 0x00000000, 0x00000001, 0x00000000);
		unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x000007D0, 0x00000000);
		unk_0x05EC10F460C3A4AF(iLocal_86, 0x00000000);
		func_14(&iLocal_39, 0x00000001, 0x00000000);
		func_13();
	}
	iVar1 = 0x00000000;
	while (iVar1 < iLocal_84)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_84[iVar1]))
		{
			if (!unk_0xE4EDC4B0E92C078B(uLocal_89[iVar1]))
			{
				uLocal_89[iVar1] = func_10(iLocal_84[iVar1], 0x00000001, 0x00000091);
				unk_0xDD353D0E9C789D0E(&iLocal_108);
				unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
				unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
				unk_0x75ABDC5F81978924(iLocal_108);
				unk_0x78ADC381772E3D54(iLocal_84[iVar1], iLocal_108);
				unk_0xF82EA857DA10E0CD(&iLocal_108);
				unk_0xFADC0A217229F6B5(iLocal_84[iVar1], 0x00000001);
			}
			if (!unk_0x12DE711B1C681E9E(iLocal_84[iVar1], unk_0x16F2683693E537C9(), 100f, 100f, 100f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0xE4EDC4B0E92C078B(uLocal_89[iVar1]))
				{
					unk_0x142CC44DB769B57E(&(uLocal_89[iVar1]));
				}
				unk_0xF3268524E9BE6D6E(iLocal_84[iVar1], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0xFADC0A217229F6B5(iLocal_84[iVar1], 0x00000001);
				unk_0x6DAD7906B73F064D(&(iLocal_84[iVar1]));
			}
		}
		else if (unk_0xE4EDC4B0E92C078B(uLocal_89[iVar1]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_89[iVar1]));
		}
		iVar1++;
	}
}

int func_10(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_11(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_12(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_12(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_12(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_12(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_13()
{
	func_140(0x00000001);
	func_114();
}

void func_14(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000001E))
	{
		bParam1 = 0x00000001;
	}
	func_18(iParam0);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xE4EDC4B0E92C078B(iParam0->f_1[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(iParam0->f_1[iVar0]));
		}
		func_17(iVar0, iParam0);
		func_16(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000001F)
	{
		if (iVar0 != 0x00000008)
		{
			unk_0x0674E58A79778E99(&(iParam0->f_D), iVar0);
			unk_0x0674E58A79778E99(&(iParam0->f_E), iVar0);
		}
		iVar0++;
	}
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x142CC44DB769B57E(iParam0);
	}
	iParam0->f_6 = 0x00000000;
	iParam0->f_C = 0x00000000;
	iParam0->f_F = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[iVar0]))
		{
			unk_0xA245D14CC59CDD36(iParam0->f_11[iVar0], 0x00000001);
			unk_0x7D732AB707BE9152(iParam0->f_11[iVar0], 0x00000001);
			if (bParam2)
			{
				unk_0x4E885A246A9D983A(iParam0->f_11[iVar0], 0x00000020, 0x00000001);
				unk_0x4E885A246A9D983A(iParam0->f_11[iVar0], 0x00000131, 0x00000000);
			}
			unk_0x4E885A246A9D983A(iParam0->f_11[iVar0], 0x0000010C, 0x00000000);
			if (bParam1)
			{
				if (unk_0xBFDE4EE64C4BF2D6(iParam0->f_11[iVar0], func_15()) && iParam0->f_11[iVar0] != unk_0x16F2683693E537C9())
				{
					unk_0x0A94A109271BE75A(iParam0->f_11[iVar0]);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000001D))
			{
				unk_0xD5EF6A937E06E46F(iParam0->f_11[iVar0], 0x00000000, 0xFFFFFFFF, 0x00000000);
			}
			iParam0->f_11[iVar0] = 0x00000000;
		}
		iVar0++;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0x00000001);
		unk_0x7D732AB707BE9152(unk_0x16F2683693E537C9(), 0x00000001);
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (bParam2)
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000001);
		}
	}
	iParam0->f_15 = 0x00000000;
}

int func_15()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x00000011);
			break;
		
		case 0x00000001:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x00000012);
			break;
		
		case 0x00000002:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x00000013);
			break;
	}
}

void func_17(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x0000000E);
			break;
		
		case 0x00000001:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x0000000F);
			break;
		
		case 0x00000002:
			unk_0x0674E58A79778E99(&(uParam1->f_D), 0x00000010);
			break;
	}
}

void func_18(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_5))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_5));
	}
}

int func_19(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000047, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000048, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000049, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003C, 0x00000001);
	if (bParam5)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
	if (!bParam6)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000045, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000046, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000044, 0x00000001);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004A, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000056, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000051, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000052, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008A, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000088, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000072, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000059, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000059, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000057, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000058, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000071, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000073, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000074, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000075, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000076, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000077, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000160, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000083, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000084, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000007B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000007E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000081, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000082, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000085, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000086, 0x00000001);
	unk_0xCFAE3195DD6AE715();
	func_20(iParam0);
	if ((unk_0x1C0640BA9A7327B3() - Global_1D) > 0x000001F4)
	{
		unk_0xE0C0351D5B931E37(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1D = unk_0x1C0640BA9A7327B3();
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x755FF954DAE327E1(unk_0x9C66D99E63E8E24C(iParam0)) <= fParam3)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_20(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x2668265160B1C0E5(iParam0))
		{
			if (unk_0x08D499BC1F863857(iParam0))
			{
				unk_0xF356D74F6AE75D16(iParam0, 0x00000000);
			}
		}
	}
}

bool func_21(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_22(iParam0, vParam1, vParam2, func_64(), func_64(), bParam3, 0x00000005, 0x00000000, 0x00000000, 0x00000000, iParam4, sParam5, func_63(), func_63(), func_63(), func_63(), sParam6, 0x00000000, bParam8, sParam7, 0x00000000, iParam9, bParam10, iParam11, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x3F800000);
}

int func_22(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_11[0x00000000] = iParam7;
	iParam0->f_11[0x00000001] = iParam8;
	iParam0->f_11[0x00000002] = iParam9;
	iParam0->f_10 = iParam7;
	func_62(iParam0);
	func_61(iParam0);
	func_60();
	if (func_44(iParam0, iParam0->f_11[0x00000000], iParam0->f_11[0x00000001], iParam0->f_11[0x00000002], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0x00000000, 0x00000000, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_43(sParam12);
		func_43(sParam13);
		func_43(sParam14);
		func_43(sParam15);
		if (unk_0x0F1CCD77290EE12F())
		{
			bVar1 = 0x00000000;
			if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0x00000000))
				{
					unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000017))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000017);
					}
					unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000009);
					bVar1 = 0x00000001;
				}
			}
			else if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
			{
				if (func_41(iParam0, iParam21))
				{
					unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
					if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
					{
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
					}
					unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000009);
					bVar1 = 0x00000001;
				}
			}
			else
			{
				bVar1 = 0x00000001;
			}
			if (bVar1)
			{
				func_43(sParam16);
				func_43(sParam19);
				func_43("MORE_SEATS");
				if (bParam18 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
				{
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
					{
						unk_0x142CC44DB769B57E(&(iParam0->f_5));
						func_43(sParam11);
					}
					if (unk_0xE4EDC4B0E92C078B(*iParam0))
					{
						unk_0x142CC44DB769B57E(iParam0);
					}
					if ((!func_37(iParam0, 0x00000001) && !func_36(iParam0)) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
					{
						if (bParam22)
						{
							func_34(iParam0, "LOSE_WANTED", 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_32(iParam0->f_11[0x00000000], "VEHICLE_POLICE_PURSUIT", 0x00000003);
							}
						}
						unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000000);
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000001);
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
					{
						func_43("LOSE_WANTED");
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000000);
						unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000001);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000001))
					{
						if (!func_37(iParam0, 0x00000001))
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_32(iParam0->f_11[0x00000000], "LOSE_WANTED_LEVEL", 0x00000003);
							}
							unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000001);
						}
					}
					if (!unk_0xE4EDC4B0E92C078B(iParam0->f_5))
					{
						if (unk_0xE4EDC4B0E92C078B(*iParam0))
						{
							unk_0x142CC44DB769B57E(iParam0);
						}
						iParam0->f_5 = func_31(vVar3, 0x00000000);
						if (!iParam23 == 0xFFFFFFFF)
						{
							unk_0xBC8E0A7390523199(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_30(iParam0->f_5, iParam0);
						}
					}
					else if (!func_29(vVar3, unk_0xAC14F6E4B17D7835(iParam0->f_5), 0.1f, 0x00000000))
					{
						unk_0x2F9282246F89FFD1(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_30(iParam0->f_5, iParam0);
						}
					}
					if (!func_37(iParam0, 0x00000002))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000002))
						{
							func_34(iParam0, sParam11, 0x00000000);
							unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000002);
						}
					}
					if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
					{
						if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000000D))
						{
							bParam5 = 0x00000000;
						}
					}
					bVar1 = 0x00000000;
					bVar4 = 0x00000000;
					iVar5 = 0x00000000;
					if ((iParam6 == 0x00000001 || iParam6 == 0x00000003) || iParam6 == 0x00000005)
					{
						bVar4 = 0x00000001;
					}
					if (iParam6 == 0x00000002 || iParam6 == 0x00000003)
					{
						iVar5 = 0x00000001;
					}
					else if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
					{
						iVar5 = 0x00000002;
					}
					if (bParam20)
					{
						unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, vParam2, bParam5, bVar4, iVar5);
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vParam3, vParam4, fParam28, 0x00000000, bVar4, iVar5))
						{
							bVar1 = 0x00000001;
						}
					}
					else if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam1, vParam2, bParam5, bVar4, iVar5))
					{
						bVar1 = 0x00000001;
					}
					if (bVar1)
					{
						bVar1 = 0x00000001;
						iVar2 = 0x00000000;
						while (iVar2 < 0x00000003)
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[iVar2]))
							{
								if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
								{
									iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
									if (!unk_0xC42A92762C58E1B9(iParam0->f_11[iVar2], iVar0, 0x00000000))
									{
										bVar1 = 0x00000000;
									}
								}
								else if (iParam10 != 0x00000000)
								{
									if (!unk_0xC42A92762C58E1B9(iParam0->f_11[iVar2], iParam10, 0x00000000))
									{
										bVar1 = 0x00000000;
									}
								}
								else if (!unk_0xBFDE4EE64C4BF2D6(iParam0->f_11[iVar2], func_15()) || !func_27(iParam0->f_11[iVar2], 0x00000001))
								{
									bVar1 = 0x00000000;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_24(iParam0))
							{
								func_43(sParam11);
								func_43(sParam16);
								func_43(sParam12);
								func_43(sParam13);
								func_43(sParam14);
								func_43(sParam15);
								func_43("LOSE_WANTED");
								func_43("MORE_SEATS");
								func_43(sParam19);
								func_14(iParam0, 0x00000001, 0x00000000);
								return 0x00000001;
							}
						}
					}
				}
			}
			else if (unk_0xC844350D5D58C99A(iParam10))
			{
				if ((bParam18 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) && (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000016)))
				{
					func_43(sParam16);
					func_43(sParam19);
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_5) || unk_0xE4EDC4B0E92C078B(*iParam0))
					{
						unk_0x142CC44DB769B57E(&(iParam0->f_5));
						unk_0x142CC44DB769B57E(iParam0);
						func_43(sParam11);
					}
					if ((!func_37(iParam0, 0x00000001) && !func_36(iParam0)) && !unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
					{
						if (bParam22)
						{
							func_34(iParam0, "LOSE_WANTED", 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_32(iParam0->f_11[0x00000000], "VEHICLE_POLICE_PURSUIT", 0x00000003);
							}
						}
						unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000000);
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000001);
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
					{
						func_43("LOSE_WANTED");
						unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000000);
						unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000001);
					}
					if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000001))
					{
						if (!func_37(iParam0, 0x00000001))
						{
							if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
							{
								func_32(iParam0->f_11[0x00000000], "LOSE_WANTED_LEVEL", 0x00000003);
							}
							unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000001);
						}
					}
					if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
					{
						if (!unk_0xE4EDC4B0E92C078B(*iParam0))
						{
							if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
							{
								unk_0x142CC44DB769B57E(&(iParam0->f_5));
								func_43(sParam11);
							}
							*iParam0 = func_23(iParam10, 0x00000000, 0x00000000);
							unk_0x9D7CDDB4B55142AF(*iParam0, 0x00000002);
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
							{
								func_30(*iParam0, iParam0);
							}
						}
						if (!func_37(iParam0, 0x00000002))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000003))
							{
								func_34(iParam0, sParam16, 0x00000000);
								unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
								unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
							}
							else if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
							{
								if (!unk_0x2EBF5002C6B6A06C(sParam19))
								{
									if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
									{
										func_34(iParam0, sParam19, 0x00000000);
										unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
									}
								}
								else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
								{
									func_34(iParam0, sParam16, 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
								}
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000017))
								{
									if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[0x00000000]))
									{
										func_32(iParam0->f_11[0x00000000], "GET_IN_CAR", 0x00000003);
									}
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000017);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
				{
					unk_0x142CC44DB769B57E(&(iParam0->f_5));
					func_43(sParam11);
				}
				if (iParam6 == 0x00000004 || iParam6 == 0x00000005)
				{
					if (iParam21 > 0x00000000)
					{
						if (!func_37(iParam0, 0x00000002))
						{
							if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000000D))
								{
									iVar6 = 0x00000000;
									iVar7 = 0x00000000;
									iVar2 = 0x00000000;
									while (iVar2 < 0x00000003)
									{
										if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = unk_0x09AC81E49EA267F7(0x00000000, iVar6);
									if (!unk_0xEB6A8945D1AC98A1(iParam0->f_11[iVar7]))
									{
										func_32(iParam0->f_11[iVar7], "NEED_A_BIGGER_VEHICLE", 0x00000003);
									}
									func_34(iParam0, "MORE_SEATS", 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x0000000D);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000003))
							{
								func_34(iParam0, sParam16, 0x00000000);
								unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
								unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
							{
								if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
								{
									func_34(iParam0, sParam19, 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
								}
							}
						}
					}
					else if (!func_37(iParam0, 0x00000002))
					{
						if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000003))
						{
							func_34(iParam0, sParam16, 0x00000000);
							unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000003);
							unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000004);
						}
						else if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000009))
						{
							if (!unk_0x2EBF5002C6B6A06C(sParam19))
							{
								if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
								{
									func_34(iParam0, sParam19, 0x00000000);
									unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
								}
							}
							else if (!unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000004))
							{
								func_34(iParam0, sParam16, 0x00000000);
								unk_0x5D96D8530B3D0904(&(iParam0->f_D), 0x00000004);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000000))
		{
			unk_0x0674E58A79778E99(&(iParam0->f_D), 0x00000000);
		}
		func_43(sParam11);
		func_43(sParam16);
		func_43(sParam19);
		func_43(sParam16);
		func_43("LOSE_WANTED");
		if (unk_0xE4EDC4B0E92C078B(iParam0->f_5))
		{
			unk_0x142CC44DB769B57E(&(iParam0->f_5));
		}
		if (unk_0xE4EDC4B0E92C078B(*iParam0))
		{
			unk_0x142CC44DB769B57E(iParam0);
		}
	}
	unk_0x0674E58A79778E99(&(iParam0->f_D), 0x0000000B);
	unk_0x0674E58A79778E99(&(iParam0->f_D), 0x0000000C);
	return 0x00000000;
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_24(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x0000000C))
	{
		if (func_26(unk_0x16F2683693E537C9()))
		{
			if (func_25(0x00000001, 0x00000000, 0x00000001) || unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000007))
			{
				return 0x00000001;
			}
		}
	}
	else if (func_25(0x00000001, 0x00000000, 0x00000001) || unk_0xEAE0D21A50E6C7F4(iParam0->f_D, 0x00000007))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_25(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xC8BC75555A67090D())
	{
		return 0x00000000;
	}
	if (bParam0)
	{
		if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			return 0x00000000;
		}
	}
	iVar0 = 0x00000000;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			return 0x00000000;
		}
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (bParam0)
		{
			if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				return 0x00000000;
			}
		}
		if (bParam2)
		{
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) != unk_0x16F2683693E537C9())
				{
					return 0x00000000;
				}
			}
		}
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x30C0A7C378403357(iVar0) < 0.95f || unk_0x30C0A7C378403357(iVar0) > 1.011f)
			{
				return 0x00000000;
			}
		}
	}
	else if (bParam1)
	{
		return 0x00000000;
	}
	if (!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!unk_0xD79EDC28CA84B527(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_26(int iParam0)
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_27(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) && iParam1)
		{
			if (func_28(unk_0x16F2683693E537C9(), iParam0))
			{
				unk_0x7C27693C5112825F(func_15(), 50f);
				return 0x00000001;
			}
		}
		else if (unk_0xBFDE4EE64C4BF2D6(iParam0, func_15()))
		{
			unk_0x7C27693C5112825F(func_15(), 50f);
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x0E0E6175453415CB(iParam0))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(iParam1))
				{
					if (unk_0x82CCEAB29E9451DD(iParam1, iVar0))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_29(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x755FF954DAE327E1((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 0x00000001;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_30(int iParam0, int iParam1)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		if (unk_0xE4EDC4B0E92C078B(iParam1->f_6))
		{
			unk_0x661342B9651D16E2(iParam1->f_6, 0x00000000);
		}
		unk_0xB8C3D2D6C4AAEF18(0x00000000);
		unk_0x053C926E5E341906();
		iParam1->f_6 = iParam0;
		unk_0x661342B9651D16E2(iParam0, 0x00000001);
	}
}

int func_31(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_12(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

void func_32(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_33(iParam2), 0x00000001);
}

int func_33(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			return "SPEECH_PARAMS_STANDARD";
		
		case 0x00000001:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 0x00000002:
			return "SPEECH_PARAMS_BEAT";
		
		case 0x00000003:
			return "SPEECH_PARAMS_FORCE";
		
		case 0x00000004:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 0x00000005:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 0x00000006:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 0x00000007:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 0x00000008:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 0x00000009:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 0x0000000A:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 0x0000000B:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 0x0000000C:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 0x0000000D:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 0x0000000E:
			return "SPEECH_PARAMS_HELI";
		
		case 0x0000000F:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 0x00000010:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 0x00000011:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 0x00000012:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 0x00000013:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 0x00000014:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 0x00000015:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 0x00000016:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 0x00000017:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 0x00000018:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 0x00000019:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 0x0000001A:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 0x0000001B:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 0x0000001C:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 0x0000001D:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 0x0000001E:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 0x0000001F:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 0x00000020:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 0x00000021:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 0x00000022:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 0x00000023:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 0x00000024:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0x00000000;
	return iVar0;
}

void func_34(int iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x2EBF5002C6B6A06C(sParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(sParam1, ""))
			{
				func_35(sParam1, 0x00001D4C, 0x00000001);
			}
		}
	}
	iParam0->f_A = unk_0x1C0640BA9A7327B3();
}

void func_35(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

int func_36(int iParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0->f_10))
	{
		if (unk_0x65636D4556D82155(iParam0->f_10))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_37(int iParam0, int iParam1)
{
	if (iParam1 != 0x00000001 || unk_0x04E6B3EAA8742BFA())
	{
		if (unk_0xD17F06053799A7CA())
		{
			return 0x00000001;
		}
		if (func_40(iParam0))
		{
			return 0x00000001;
		}
	}
	if (iParam1 != 0x00000002 || unk_0x04E6B3EAA8742BFA())
	{
		if (func_39() && !func_38())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_38()
{
	if (Global_5538 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_39()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x1C0640BA9A7327B3();
	iVar0 = (iVar1 - uParam0->f_A);
	if (iVar0 < 0x00000023)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_41(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (func_42(iVar0, uParam0, iParam1))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_42(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		iVar0 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000003)
		{
			if (unk_0xC844350D5D58C99A(uParam1->f_11[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xD6DF381716822EFE(iParam0);
		if (iParam2 > 0x00000000)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 0x00000001)
				{
					if (!unk_0x4A43A287EB2A2B60(iParam0, 0x00000001))
					{
						return 0x00000001;
					}
				}
				else
				{
					return 0x00000001;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 0x00000001)
			{
				if (!unk_0x4A43A287EB2A2B60(iParam0, 0x00000001))
				{
					return 0x00000001;
				}
			}
			else
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_43(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		unk_0x2F23E8033F1ADDD9(sParam0);
	}
}

int func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0x00000000;
	uParam0->f_11[0x00000000] = uParam1;
	uParam0->f_11[0x00000001] = uParam2;
	uParam0->f_11[0x00000002] = uParam3;
	uParam0->f_10 = uParam1;
	uVar12[0x00000000] = uParam4;
	uVar12[0x00000001] = uParam5;
	uVar12[0x00000002] = uParam6;
	uVar13[0x00000000] = uParam13;
	uVar13[0x00000001] = uParam14;
	uVar13[0x00000002] = uParam15;
	iVar6 = 0x00000001;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	iVar3 = 0x00000000;
	iVar7[0x00000000] = 0x00000000;
	iVar7[0x00000001] = 0x00000000;
	iVar7[0x00000002] = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
		{
			iVar3++;
		}
		if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001D) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001C))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
				{
					unk_0xD5EF6A937E06E46F(uParam0->f_11[iVar0], 0x00000001, 0xFFFFFFFF, 0x00000000);
				}
				if (iVar0 == 0x00000002)
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x0000001C);
				}
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001D) && unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001C))
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
			{
				unk_0xD5EF6A937E06E46F(uParam0->f_11[iVar0], 0x00000000, 0xFFFFFFFF, 0x00000000);
			}
			if (iVar0 == 0x00000002)
			{
				unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000001C);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0x00000000)
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001A))
	{
		bVar14 = 0x00000000;
		if (!unk_0xC844350D5D58C99A(uParam0->f_15))
		{
			iVar16 = 0x00000040;
			iVar16 |= 0x00010000;
			iVar16 |= 0x00000800;
			iVar16 |= 0x00000001;
			iVar16 |= 0x00000002;
			iVar16 |= 0x00000004;
			iVar16 |= 0x00000020;
			iVar16 |= 0x00000010;
			iVar16 |= 0x00000008;
			iVar15 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 50f, 0x00000000, iVar16);
			if (unk_0xDF1306B443CD3D15(iVar15, 0x00000000))
			{
				uParam0->f_15 = iVar15;
			}
		}
		if (unk_0xDF1306B443CD3D15(uParam0->f_15, 0x00000000))
		{
			if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), unk_0x68F4C0EC296D3901(uParam0->f_15, 0x00000001)) < 400f)
			{
				if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000) || !bParam17)
					{
						if (func_42(uParam0->f_15, uParam0, iVar3))
						{
							iVar0 = 0x00000000;
							while (iVar0 < 0x00000003)
							{
								if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
								{
									unk_0xCAF7AE54F764D5AA(uParam0->f_11[iVar0], 1f);
									if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_15()))
									{
										unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
									}
									if (unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492) == 0x00000007 && !func_59(uParam0->f_11[iVar0], uParam0->f_15))
									{
										if (!unk_0x869EFD0BC0868856(uParam0->f_11[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0]))
										{
											unk_0x11AD11297DC58CC7(uParam0->f_11[iVar0], 0x00000001);
											unk_0x5B1D360B9C6F0A09(uParam0->f_11[iVar0], uParam0->f_15, 0x0000EA60, iVar0, 1f, 0x00000001, 0x00000000);
											unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 0x00000001;
						}
						else
						{
							bVar14 = 0x00000001;
						}
					}
					else
					{
						bVar14 = 0x00000001;
					}
				}
				else
				{
					bVar14 = 0x00000001;
				}
			}
			else
			{
				bVar14 = 0x00000001;
			}
		}
		else
		{
			bVar14 = 0x00000001;
		}
		if (bVar14)
		{
			unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000001A);
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000003)
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
				{
					if (!unk_0x81A5359F25512A04(uParam0->f_11[iVar0]) && !uParam0->f_F)
					{
						unk_0xA3BF0AA5A2608191(uParam0->f_11[iVar0]);
					}
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_15()))
					{
						if (func_57(uParam0, uParam0->f_11[iVar0], fParam8, 0x00000001))
						{
							unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001A))
	{
		if ((!func_56(uParam0) && unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9())) && !unk_0xC844350D5D58C99A(iParam10))
		{
			iVar10 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar10, 0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000000D))
				{
					if (iParam16 == 0x00000004 || iParam16 == 0x00000005)
					{
					}
					if (!func_37(uParam0, 0x00000002))
					{
						iVar17 = 0x00000000;
						iVar18 = 0x00000000;
						iVar0 = 0x00000000;
						while (iVar0 < 0x00000003)
						{
							if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = unk_0x09AC81E49EA267F7(0x00000000, iVar17);
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar18]))
						{
							func_32(uParam0->f_11[iVar18], "NEED_A_BIGGER_VEHICLE", 0x00000003);
						}
						func_34(uParam0, "MORE_SEATS", 0x00000000);
						unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x0000000D);
					}
				}
				bVar9 = 0x00000001;
			}
		}
		else
		{
			bVar9 = 0x00000000;
			unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000000D);
			func_43("MORE_SEATS");
		}
		if (!unk_0xC844350D5D58C99A(iParam10))
		{
			if ((!unk_0xEB6A8945D1AC98A1(uParam0->f_11[0x00000000]) || !unk_0xEB6A8945D1AC98A1(uParam0->f_11[0x00000001])) || !unk_0xEB6A8945D1AC98A1(uParam0->f_11[0x00000002]))
			{
				if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001F))
				{
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()) && !func_37(uParam0, 0x00000002))
					{
						iVar10 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						if (func_55(iVar10, uParam0))
						{
							func_34(uParam0, "CMN_VEHSUIT", 0x00000000);
							unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x0000001F);
						}
					}
				}
				else if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000001F);
					func_43("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
		{
			if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iParam10))
			{
				if (unk_0xBFC0798A6E3417F9(0x00000000, 0x0000004B))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x00000015);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000015))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_D), 0x00000015);
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000003)
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_11[iVar0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
				{
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_15()))
					{
						unk_0xFCCF7611216AE801(uParam0->f_11[iVar0], 0x00000001);
					}
					else
					{
						unk_0xFCCF7611216AE801(uParam0->f_11[iVar0], 0x00000000);
					}
					if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
					{
						iVar10 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
						if (unk_0xDF1306B443CD3D15(iVar10, 0x00000000))
						{
							if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_15()))
							{
								if (!func_56(uParam0) && unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
								{
									if (!func_54(uParam0->f_11[iVar0]))
									{
										unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !unk_0x437347B10A200C4B(iVar10, 0x00000000))
						{
							if (unk_0x82CCEAB29E9451DD(uParam0->f_11[iVar0], iVar10))
							{
								if (unk_0x70EED0761B82965E(iVar10) && !unk_0xF79A7BCA9E38BBBC(iVar10))
								{
									vVar19 = { unk_0x68F4C0EC296D3901(iVar10, 0x00000001) };
									if (vVar19.z < -1f)
									{
										unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00000040);
									}
								}
							}
						}
					}
					bVar8 = 0x00000001;
					if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_15()))
					{
						if (unk_0x0E0E6175453415CB(uParam0->f_11[iVar0]))
						{
							iVar10 = unk_0x6937EA2286828455(uParam0->f_11[iVar0], 0x00000000);
							if (!unk_0x437347B10A200C4B(iVar10, 0x00000000))
							{
								if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
								{
									if (iVar10 != iParam10)
									{
										if (!unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iVar10))
										{
											if (unk_0x9C66D99E63E8E24C(iVar10) > 5f)
											{
												unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00001040);
											}
											else
											{
												unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00000040);
											}
											bVar8 = 0x00000000;
										}
									}
								}
								else
								{
									if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
									{
										iVar20 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
									}
									if (unk_0xDF1306B443CD3D15(iVar20, 0x00000000))
									{
										if (iVar10 != iVar20)
										{
											if (unk_0x9C66D99E63E8E24C(iVar10) > 5f)
											{
												unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00001040);
											}
											else
											{
												unk_0x45F014B3D0466974(uParam0->f_11[iVar0], iVar10, 0x00000040);
											}
											bVar8 = 0x00000000;
										}
									}
								}
							}
						}
					}
					if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_15()))
					{
						iVar21 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
						if (unk_0xC844350D5D58C99A(iVar21))
						{
							if (func_42(iVar21, uParam0, 0x00000000))
							{
								if (func_53(iVar0, uParam0) || !unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000001B))
								{
									unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x0000001B);
									}
								}
							}
							else if (!func_53(iVar0, uParam0))
							{
								if (unk_0x134B62B726CEC8E6(iVar21) == joaat("sentinel2"))
								{
									unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], 0x00000004);
								}
								else
								{
									unk_0xBF541ED34EA81209(uParam0->f_11[iVar0], 0x00000002);
								}
								func_52(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_15()) && !func_51(uParam0->f_11[iVar0], iParam10)) && !func_50(uParam0->f_11[iVar0], iParam10))
					{
						if (func_57(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
						{
							if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_15()))
							{
								if (((!unk_0x869EFD0BC0868856(uParam0->f_11[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0])) && !unk_0x7F69A7C512ACACFD(uParam0->f_11[iVar0])) && !unk_0x81A5359F25512A04(uParam0->f_11[iVar0]))
								{
									iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492);
									if (iVar11 == 0x00000007)
									{
										unk_0xA3BF0AA5A2608191(uParam0->f_11[iVar0]);
									}
									unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_15());
									bVar8 = 0x00000000;
								}
							}
						}
						if (bVar8)
						{
							if (!unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
							{
								uParam0->f_B = unk_0x1C0640BA9A7327B3();
								uParam0->f_1[iVar0] = func_23(uParam0->f_11[iVar0], 0x00000000, 0x00000000);
								unk_0x9D7CDDB4B55142AF(uParam0->f_1[iVar0], 0x00000002);
								if (bParam9)
								{
									func_30(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0x00000000;
					}
					else if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
					{
						if (((func_27(uParam0->f_11[iVar0], 0x00000001) || func_51(uParam0->f_11[iVar0], iParam10)) || iParam12) || (unk_0xDF1306B443CD3D15(iParam10, 0x00000000) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0x00000000)))
						{
							if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
							{
								unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
								func_43(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_30(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0x00000000;
						}
					}
					else if (unk_0xDF1306B443CD3D15(iParam10, 0x00000000))
					{
						if (!unk_0x82CCEAB29E9451DD(uParam0->f_11[iVar0], iParam10))
						{
							if ((unk_0x12DE711B1C681E9E(uParam0->f_11[iVar0], iParam10, 20f, 20f, 5f, 0x00000000, 0x00000001, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000000B)) && !((bParam17 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) && !unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0x00000000)))
							{
								if (unk_0x0E0E6175453415CB(uParam0->f_11[iVar0]))
								{
									if (!unk_0xC42A92762C58E1B9(uParam0->f_11[iVar0], iParam10, 0x00000000))
									{
										if (!func_27(uParam0->f_11[iVar0], 0x00000001))
										{
											if (func_26(uParam0->f_11[iVar0]))
											{
												iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x1AE73569);
												if (iVar11 == 0x00000007)
												{
													unk_0x75CDA8644CD3B5F5(uParam0->f_11[iVar0], 0x00000000, 0x00000000);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_15()))
									{
										if ((((!unk_0x7F69A7C512ACACFD(uParam0->f_11[iVar0]) && !unk_0x869EFD0BC0868856(uParam0->f_11[iVar0])) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0])) && !unk_0x81A5359F25512A04(uParam0->f_11[iVar0])) && !unk_0x4E861BC5B1EDA7BD(iParam10))
										{
											unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
										}
									}
									iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492);
									if (iVar11 == 0x00000007 && !func_59(uParam0->f_11[iVar0], iParam10))
									{
										if (((((!unk_0x7F69A7C512ACACFD(uParam0->f_11[iVar0]) && !unk_0x7F69A7C512ACACFD(unk_0x16F2683693E537C9())) && !func_49(uParam0->f_11[iVar0], 2f)) && !unk_0x869EFD0BC0868856(uParam0->f_11[iVar0])) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0])) && !unk_0x4E861BC5B1EDA7BD(iParam10))
										{
											unk_0x11AD11297DC58CC7(uParam0->f_11[iVar0], 0x00000001);
											if (unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x0000000A))
											{
												unk_0xCAF7AE54F764D5AA(uParam0->f_11[iVar0], 1f);
											}
											unk_0x5B1D360B9C6F0A09(uParam0->f_11[iVar0], iParam10, 0x0000EA60, iVar0, 2f, 0x00000001, 0x00000000);
											unk_0x579B0182884711E5(uParam0->f_11[iVar0], 0x00000000);
										}
									}
									else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam10, 0x00000000))
									{
										uParam0->f_1[iVar0] = func_23(uParam0->f_11[iVar0], 0x00000000, 0x00000000);
										unk_0x9D7CDDB4B55142AF(uParam0->f_1[iVar0], 0x00000002);
										iVar6 = 0x00000000;
									}
								}
							}
							else if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_15()))
							{
								if (func_57(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
								{
									if (!unk_0x869EFD0BC0868856(uParam0->f_11[iVar0]) && !unk_0xA48EBBEA418ADC94(uParam0->f_11[iVar0]))
									{
										iVar11 = unk_0xD1960163A3042274(uParam0->f_11[iVar0], 0x950B6492);
										if (iVar11 == 0x00000007)
										{
											unk_0xA3BF0AA5A2608191(uParam0->f_11[iVar0]);
										}
										unk_0x11AD11297DC58CC7(uParam0->f_11[iVar0], 0x00000000);
										unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_15());
									}
								}
							}
						}
						else if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iParam10))
						{
							if (!unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_15()))
							{
								if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000015))
								{
									unk_0xE25C96A9C36BE5D2(uParam0->f_11[iVar0], func_15());
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000015))
							{
								unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
								unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x00000015);
							}
						}
						else if (unk_0xBFDE4EE64C4BF2D6(uParam0->f_11[iVar0], func_15()) && !unk_0x4E861BC5B1EDA7BD(iParam10))
						{
							unk_0x0A94A109271BE75A(uParam0->f_11[iVar0]);
						}
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
					func_43(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000003)
		{
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 0x00000001;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_37(uParam0, 0x00000002))
		{
			if (iVar1 > 0x00000000)
			{
				iVar0 = 0x00000000;
				while (iVar0 < 0x00000003)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
						{
							if (func_54(uParam0->f_11[iVar0]) || unk_0x12DE711B1C681E9E(uParam0->f_11[iVar0], unk_0x16F2683693E537C9(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0x00000000, 0x00000001, 0x00000000))
							{
								iVar1 = (iVar1 - 0x00000001);
								iVar7[iVar0] = 0x00000000;
							}
						}
					}
					else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
					{
						if (!unk_0x12DE711B1C681E9E(uParam0->f_11[iVar0], unk_0x16F2683693E537C9(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0x00000000, 0x00000001, 0x00000000) && !func_54(uParam0->f_11[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x1C0640BA9A7327B3();
			if ((iVar5 - uParam0->f_B) > 0x000005DC || iVar3 == 0x00000001)
			{
				if (iVar1 > 0x00000000)
				{
					if (uParam0->f_C < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 0x00000001)
						{
							if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000005))
							{
								func_34(uParam0, sParam7, 0x00000000);
								unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x00000005);
								uParam0->f_C = iVar1;
							}
							else
							{
								uParam0->f_C = iVar1;
							}
						}
						else
						{
							iVar0 = 0x00000000;
							while (iVar0 < 0x00000003)
							{
								if (iVar7[iVar0])
								{
									if (!func_48(iVar0, uParam0))
									{
										if (!unk_0x2EBF5002C6B6A06C(uVar13[iVar0]))
										{
											if (!unk_0x7F8A39872A07D2CE(uVar13[iVar0], ""))
											{
												func_46(uParam0, uVar12[iVar0], uVar13[iVar0], 0x00000000);
												func_45(iVar0, uParam0);
												uParam0->f_C = iVar1;
											}
										}
										if (!func_48(iVar0, uParam0))
										{
											func_34(uParam0, uVar12[iVar0], 0x00000000);
											func_45(iVar0, uParam0);
											uParam0->f_C = iVar1;
										}
									}
									else
									{
										uParam0->f_C = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_C = 0x00000000;
				}
			}
		}
		unk_0x0674E58A79778E99(&(uParam0->f_D), 0x0000000A);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000003)
			{
				if (unk_0xE4EDC4B0E92C078B(uParam0->f_1[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uParam0->f_1[iVar0]));
					func_43(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_43("MORE_SEATS");
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_45(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x0000000E);
			break;
		
		case 0x00000001:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x0000000F);
			break;
		
		case 0x00000002:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x00000010);
			break;
	}
}

void func_46(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x2EBF5002C6B6A06C(sParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(sParam1, ""))
			{
				func_47(sParam1, sParam2, 0x00001D4C, 0x00000001);
			}
		}
	}
	uParam0->f_A = unk_0x1C0640BA9A7327B3();
}

void func_47(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x12F275EDEEF63A2B(iParam2, 0x00000001);
}

int func_48(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x0000000E);
		
		case 0x00000001:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x0000000F);
		
		case 0x00000002:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x00000010);
		
		default:
	}
	return 0x00000000;
}

int func_49(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 0x00000000);
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x9C66D99E63E8E24C(iVar0) > fParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (!unk_0xBFDE4EE64C4BF2D6(iParam0, func_15()))
		{
			iVar0 = unk_0x8B157DA177FBCF50(iParam0);
			if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
			{
				if (unk_0x12DE711B1C681E9E(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (iVar0 == iParam1)
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_51(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
			{
				if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_52(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x00000011);
			break;
		
		case 0x00000001:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x00000012);
			break;
		
		case 0x00000002:
			unk_0x5D96D8530B3D0904(&(uParam1->f_D), 0x00000013);
			break;
	}
}

int func_53(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x00000011);
		
		case 0x00000001:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x00000012);
		
		case 0x00000002:
			return unk_0xEAE0D21A50E6C7F4(uParam1->f_D, 0x00000013);
		
		default:
	}
	return 0x00000000;
}

int func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(iParam0))
			{
				iVar1 = unk_0x3C66DF04E6EA3587(iParam0);
				if (unk_0xDF1306B443CD3D15(iVar1, 0x00000000))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000) && unk_0x12DE711B1C681E9E(iParam0, iVar1, 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
						{
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_55(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == joaat("bus") || unk_0x134B62B726CEC8E6(iParam0) == joaat("coach"))
		{
			iVar0 = 0x00000000;
			iVar1 = 0x00000000;
			iVar2 = 0x00000000;
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam1->f_11[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xA30B8362589C124A(iParam0, 0x00000000, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar3))
			{
				if ((iVar3 == uParam1->f_11[0x00000000] || iVar3 == uParam1->f_11[0x00000001]) || iVar3 == uParam1->f_11[0x00000002])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0xA30B8362589C124A(iParam0, 0x00000001, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar4))
			{
				if ((iVar4 == uParam1->f_11[0x00000000] || iVar4 == uParam1->f_11[0x00000001]) || iVar4 == uParam1->f_11[0x00000002])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0xA30B8362589C124A(iParam0, 0x00000002, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar5))
			{
				if ((iVar5 == uParam1->f_11[0x00000000] || iVar5 == uParam1->f_11[0x00000001]) || iVar5 == uParam1->f_11[0x00000002])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_56(var uParam0)
{
	int iVar0;
	
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (func_42(iVar0, uParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_57(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		if (unk_0x0E0E6175453415CB(iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam1, 0x00000000);
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
				{
					if (unk_0x82CCEAB29E9451DD(unk_0x16F2683693E537C9(), iVar0))
					{
						if (func_56(uParam0))
						{
							return 0x00000001;
						}
					}
					else if (bParam3)
					{
						return 0x00000001;
					}
				}
				else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam1, fParam2, fParam2, 3f, 0x00000000, 0x00000001, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
		else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam1, fParam2, fParam2, 3f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (func_42(iVar0, uParam0, 0x00000000))
					{
						if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
						{
							if (func_58(iVar0))
							{
								return 0x00000001;
							}
						}
					}
				}
				else
				{
					return 0x00000001;
				}
			}
			else
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_58(int iParam0)
{
	float fVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		fVar0 = unk_0x9C66D99E63E8E24C(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
		{
			iVar0 = unk_0x3C66DF04E6EA3587(iParam0);
			if (iVar0 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_60()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		iVar0 = unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9());
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			iVar1 = unk_0xA30B8362589C124A(iVar0, 0x00000000, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iVar1))
			{
				if (iVar1 != unk_0x16F2683693E537C9())
				{
					if (unk_0xAF6690C489CC6203(iVar1))
					{
						if (!unk_0xE0EC712E4BE1FC42(iVar1, unk_0x16F2683693E537C9()))
						{
							unk_0x0C8C0C840C2D1AD2(iVar1, unk_0x16F2683693E537C9(), 0x000007D0, 0x00000800, 0x00000002);
						}
					}
				}
			}
		}
	}
}

void func_61(var uParam0)
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_D, 0x00000019))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000003)
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_11[iVar0]))
			{
				if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
				{
					unk_0x4E885A246A9D983A(uParam0->f_11[iVar0], 0x00000020, 0x00000000);
					unk_0x4E885A246A9D983A(uParam0->f_11[iVar0], 0x00000131, 0x00000001);
					unk_0x4E885A246A9D983A(uParam0->f_11[iVar0], 0x0000010C, 0x00000001);
					unk_0x579B0182884711E5(uParam0->f_11[iVar0], 0x00000000);
				}
			}
			iVar0++;
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_D), 0x00000019);
	}
}

void func_62(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_11[iVar0]))
		{
			if (!unk_0xEB6A8945D1AC98A1(uParam0->f_11[iVar0]))
			{
				if (unk_0x0E0E6175453415CB(uParam0->f_11[iVar0]))
				{
					unk_0xA245D14CC59CDD36(uParam0->f_11[iVar0], 0x00000000);
					unk_0x7D732AB707BE9152(uParam0->f_11[iVar0], 0x00000000);
				}
			}
		}
		iVar0++;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				unk_0xA245D14CC59CDD36(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x7D732AB707BE9152(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
	}
}

var func_63()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_64()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_65()
{
	int iVar0;
	
	if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_86, 0x00000000))
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_90))
		{
			unk_0x142CC44DB769B57E(&iLocal_90);
		}
		if (iLocal_36 <= 0x00000002)
		{
			iLocal_74 = (unk_0xFBFCAFA958ABA1CE() * ((0x0000003C * iLocal_76) + iLocal_77));
			iLocal_74 = (iLocal_74 + unk_0x1C0640BA9A7327B3());
			iLocal_78 = (iLocal_74 - unk_0xFBFCAFA958ABA1CE() * 30);
		}
		else if (iLocal_36 > 0x00000006)
		{
			iLocal_74 = (unk_0xFBFCAFA958ABA1CE() * ((0x0000003C * iLocal_76) + iLocal_77));
			iLocal_74 = (iLocal_74 + unk_0x1C0640BA9A7327B3());
			iLocal_78 = (iLocal_74 - unk_0xFBFCAFA958ABA1CE() * 30);
		}
		else if (iLocal_36 >= 0x00000003 && iLocal_36 <= 0x00000004)
		{
			iLocal_87 = unk_0x122AAB0B1D6F55AD(iLocal_83, vLocal_66, fLocal_68, 0x00000001, 0x00000001, 0x00000000);
			iLocal_85[0x00000000] = unk_0x852A19533F896693(iLocal_87, 0x00000006, iLocal_81, 0xFFFFFFFF, 0x00000001, 0x00000001);
			iLocal_85[0x00000001] = unk_0x852A19533F896693(iLocal_87, 0x00000006, iLocal_81, 0x00000000, 0x00000001, 0x00000001);
			unk_0xF63400DBE3303D26("rghCop", &iLocal_106);
			unk_0x0E2400AB9174FA81(0x00000004, iLocal_106, 0x6F0783F5);
			unk_0xAFF39FB306F8E232(iLocal_85[0x00000000], 0x00000027, 0x00000001);
			unk_0xAFF39FB306F8E232(iLocal_85[0x00000001], 0x00000027, 0x00000001);
			iVar0 = 0x00000000;
			while (iVar0 < iLocal_85)
			{
				unk_0x262EF6C6306BEA6C(iLocal_85[iVar0], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
				unk_0x9FA191B317572861(iLocal_85[iVar0], 100f);
				unk_0x6DF7BF67E86AAE86(iLocal_85[iVar0], iLocal_106);
				iVar0++;
			}
		}
		iLocal_38 = 0x00000002;
	}
}

void func_66()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(iLocal_86, 0x00000000))
	{
		if (func_101() || unk_0xEB6A8945D1AC98A1(iLocal_84[0x00000000]))
		{
			iVar0 = 0x00000000;
			while (iVar0 < iLocal_84)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_84[iVar0]))
				{
					if (!unk_0xE4EDC4B0E92C078B(uLocal_89[iVar0]))
					{
						uLocal_89[iVar0] = func_10(iLocal_84[iVar0], 0x00000001, 0x00000091);
						unk_0xAFF39FB306F8E232(iLocal_84[iVar0], 0x00000001, 0x00000000);
						unk_0xDD353D0E9C789D0E(&iLocal_108);
						unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
						unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						unk_0x75ABDC5F81978924(iLocal_108);
						unk_0x78ADC381772E3D54(iLocal_84[iVar0], iLocal_108);
						unk_0xF82EA857DA10E0CD(&iLocal_108);
					}
				}
				else if (unk_0xE4EDC4B0E92C078B(uLocal_89[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uLocal_89[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_73)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_84[0x00000000]))
			{
				if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_84[0x00000000], 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0x89258193691A7600(iLocal_84[0x00000000], iLocal_86, unk_0x16F2683693E537C9(), 0x00000008, 25f, 0x000C0025, -1f, -1f, 0x00000001);
					iLocal_73 = 0x00000001;
				}
			}
		}
		if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_86, 0x00000000))
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_90))
			{
				unk_0x142CC44DB769B57E(&iLocal_90);
			}
			func_100(&uLocal_94, 0x00000000, 0x00000000);
			iLocal_38 = 0x00000002;
		}
		else if (unk_0xBBA8A868118C90ED(iLocal_86, 0xFFFFFFFF, 0x00000000) || unk_0xEB6A8945D1AC98A1(iLocal_84[0x00000000]))
		{
			func_100(&uLocal_94, 0x00000000, 0x00000000);
		}
		else
		{
			func_67();
		}
	}
}

void func_67()
{
	if (!unk_0xEB6A8945D1AC98A1(iLocal_84[0x00000000]) && !unk_0x437347B10A200C4B(iLocal_86, 0x00000000))
	{
		if (unk_0xC42A92762C58E1B9(iLocal_84[0x00000000], iLocal_86, 0x00000000))
		{
			func_68(&uLocal_94, iLocal_86, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
		}
	}
}

void func_68(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_69(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_69(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_70(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_70(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		func_100(uParam0, 0x00000000, 0x00000000);
	}
	uParam0->f_6 = 0x00000002;
	func_71(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_71(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0x00000000;
		}
	}
	iVar0 = sParam3;
	if (unk_0x2EBF5002C6B6A06C(iVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_99(iVar0))
	{
		func_98();
	}
	if (func_97(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
	{
		iVar1 = 0x00000000;
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			unk_0x4862370C9F046219(unk_0x940C1429253D3B1B(iParam1));
			unk_0xB9099320B5179E0A(unk_0x940C1429253D3B1B(iParam1), 0x00000001);
			if (unk_0x71313E3D03CEEB37(unk_0x940C1429253D3B1B(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		else if (unk_0xE2F1E99DD161A861(iParam1))
		{
			unk_0x00D1596840E78F77(unk_0x96A5FE5834B81CE7(iParam1));
			if (unk_0xC03F94FBD72F6D02(unk_0x96A5FE5834B81CE7(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam1))
		{
			unk_0xFF7829816FC6D977(unk_0x486F67509A82DB2D(iParam1));
			if (unk_0x660643587812C91B(unk_0x486F67509A82DB2D(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		if (!unk_0x8C74DE122769E1BF())
		{
			if (func_92(uParam0, bParam5, bParam7, 0x00000000))
			{
				func_88(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0x00000000;
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_76(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
						{
							if (!func_99(iVar0))
							{
								func_75(iVar0, 0xFFFFFFFF);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_74(0x00000001);
								}
							}
						}
					}
				}
			}
			else if (func_76(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
					{
						if (!func_99(iVar0))
						{
							func_75(iVar0, 0xFFFFFFFF);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_74(0x00000001);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x2EBF5002C6B6A06C(sParam3))
			{
				if (func_99(sParam3))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000004)
					{
						func_100(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
					{
						func_100(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
					{
						func_100(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
					{
						func_100(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
					{
						func_100(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
				{
					func_100(uParam0, iVar0, 0x00000001);
				}
			}
			if (!func_92(uParam0, bParam5, bParam7, 0x00000000))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_73(uParam0))
				{
					func_72(uParam0);
				}
			}
		}
	}
	else
	{
		func_100(uParam0, iVar0, 0x00000000);
	}
}

void func_72(var uParam0)
{
	if (func_97(unk_0x16F2683693E537C9()))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0xF3039DE1FDB4F6FD(0x00000001);
		unk_0x29D5132FBDCF2B1E(0x00000000);
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		unk_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_B)
		{
			unk_0x82A772610883F395("FocusOut", 0x00000000, 0x00000000);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusOut", "HintCamSounds", 0x00000001);
			uParam0->f_B = 0x00000000;
		}
	}
	uParam0->f_2 = 0xFFFFFFFF;
	*uParam0 = 0x00000001;
}

int func_73(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0x00000000)
	{
		iVar0 = (uParam0->f_A / 0x00000002);
		if (uParam0->f_2 + iVar0) > unk_0x1C0640BA9A7327B3()
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_74(bool bParam0)
{
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (bParam0)
			{
				Global_1B416.f_273C.f_64++;
			}
			return Global_1B416.f_273C.f_64;
			break;
		
		case 0x00000004:
			if (bParam0)
			{
				Global_1B416.f_273C.f_65++;
			}
			return Global_1B416.f_273C.f_65;
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (bParam0)
			{
				Global_1B416.f_273C.f_66++;
			}
			return Global_1B416.f_273C.f_66;
			break;
		
		default:
			break;
	}
	return 0x00000003;
}

void func_75(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_76(char* sParam0)
{
	if (!func_77(0x00000001, 0x00000001, 0x00000000))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_99(sParam0)) || func_99("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		return 0x00000000;
	}
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (func_74(0x00000000) < 0x00000003)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_74(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (func_74(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_77(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (bParam2)
	{
		return 0x00000001;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0x00000000;
	}
	if (func_87(0x00000000))
	{
		return 0x00000000;
	}
	if (func_86())
	{
		return 0x00000000;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return 0x00000000;
	}
	if (Global_12061)
	{
		return 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(joaat("appinternet")) > 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_E545)
	{
		return 0x00000000;
	}
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
		{
			if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
			{
				return 0x00000000;
			}
			if (unk_0xC4E6FF7CA2A185EA())
			{
				return 0x00000000;
			}
		}
	}
	if ((func_85() || func_84(Global_440000.f_38DB3)) || func_83())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = func_82(unk_0x16F2683693E537C9(), 0x00000000);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 0x2189D250 && iVar1 != 0xFFFFFFFF)) || (unk_0x134B62B726CEC8E6(iVar0) == 0x46699F47 && iVar1 != 0xFFFFFFFF)) || (((unk_0x134B62B726CEC8E6(iVar0) == 0x9B16A3B4 && iVar1 == 0x00000000) && func_81(iVar0, 0x0000000A)) && unk_0x0ECB5CA5140957AD(iVar0, 0x0000000A) != 0xFFFFFFFF))
			{
				return 0x00000000;
			}
		}
	}
	if (Global_19BCC2)
	{
		return 0x00000000;
	}
	if (func_78(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_78(int iParam0)
{
	if (iParam0 != func_80())
	{
		if (func_79(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_79(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_79(int iParam0, bool bParam1, bool bParam2)
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

int func_80()
{
	return 0xFFFFFFFF;
}

int func_81(int iParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
		{
			switch (iParam1)
			{
				case 0x00000011:
				case 0x00000012:
				case 0x00000013:
				case 0x00000014:
				case 0x00000015:
				case 0x00000016:
					return 0x00000001;
					break;
				
				default:
					if (unk_0x461CAC843A21E4B6(iParam0, iParam1) > 0x00000000)
					{
						return 0x00000001;
					}
					break;
				}
			}
	}
	return 0x00000000;
}

int func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 0x00000001)
				{
					iVar3 = 0xFFFFFFFF;
					return iVar3;
				}
				iVar2 = 0x00000000;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 0x00000001);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0x00000000))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0x00000000) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_83()
{
	return Global_2564C8.f_11;
}

bool func_84(int iParam0)
{
	return iParam0 == 0x00000033;
}

var func_85()
{
	return Global_2564C8.f_10;
}

bool func_86()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_87(int iParam0)
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

void func_88(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1420CD == 0x00000001)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		func_100(uParam0, 0x00000000, 0x00000000);
	}
	if (func_91(vParam2, 0f, 0f, 0f, 0x00000000))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0x00000000))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_89())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xCED082ADD3739B9F(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xF3039DE1FDB4F6FD(0x00000000);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_A;
	if (iParam3 == 0x66EADDF5)
	{
		if (iVar1 < 0x000005DC)
		{
			iVar1 = 0x000005DC;
		}
		if (iVar2 < 0x000005DC)
		{
			iVar2 = 0x000005DC;
		}
	}
	unk_0xC0B0B9E466C0ED17(iParam1, vParam2, 0x00000001, 0xFFFFFFFF, iVar1, iVar2, iParam3);
	iVar3 = 0x00000800;
	iVar4 = 0x00000003;
	unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iParam1, 0xFFFFFFFF, iVar3, iVar4);
	unk_0x82A772610883F395("FocusIn", 0x00000000, 0x00000000);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusIn", "HintCamSounds", 0x00000001);
	uParam0->f_B = 0x00000001;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 0x00000001;
	*uParam0 = 0x00000000;
}

bool func_89()
{
	return func_90(unk_0xD803B885F5E47A62());
}

int func_90(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_91(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_92(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0x00000000;
		}
	}
	switch (uParam0->f_5)
	{
		case 0x00000000:
			uParam0->f_7 = 0x00000000;
			if (uParam0->f_6 == 0x00000000)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					if (func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000001;
						uParam0->f_7 = 0x00000001;
					}
				}
				else if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			if (func_73(uParam0))
			{
				uParam0->f_7 = 0x00000001;
				uParam0->f_5 = 0x00000004;
			}
			break;
		
		case 0x00000001:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) <= 0x000001F4)
			{
				if (uParam0->f_6 == 0x00000000)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
					{
						if (!func_96(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 0x00000003;
						}
					}
					else if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (!func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
			}
			else
			{
				uParam0->f_5 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (uParam0->f_6 == 0x00000000)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (!func_95(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (!func_95(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 0x00000002))
				{
					uParam0->f_5 = 0x00000000;
				}
				else if (!func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			break;
		
		case 0x00000003:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) > 0x000001F4)
			{
				if (uParam0->f_6 == 0x00000000)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
					{
						if (func_94(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0x00000000;
						}
					}
					else if (func_93(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || func_93(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 0x00000002))
					{
						uParam0->f_5 = 0x00000000;
					}
					else if (func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_73(uParam0))
			{
				uParam0->f_5 = 0x00000000;
			}
			break;
	}
	if (!func_77(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0x00000000;
		uParam0->f_7 = 0x00000000;
	}
	if (uParam0->f_7)
	{
		func_98();
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_93(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			if (unk_0x9A01369A10646AFE(0x00000000, 0x00000050))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_94(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x9A01369A10646AFE(0x00000000, 0x00000050))
			{
				unk_0xF3039DE1FDB4F6FD(0x00000000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_95(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			if (unk_0x7FEE810EE9E768EB(0x00000000, 0x00000050) && unk_0x1C0640BA9A7327B3() > Global_74)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_77(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x7FEE810EE9E768EB(0x00000000, 0x00000050) && unk_0x1C0640BA9A7327B3() > Global_74)
			{
				unk_0xF3039DE1FDB4F6FD(0x00000000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_97(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xE2F1E99DD161A861(iParam0))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam0), 0x00000000))
			{
				return 0x00000001;
			}
		}
		else if (unk_0xEC560E589DF8370E(iParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam0)))
			{
				return 0x00000001;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_98()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

bool func_99(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_100(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001A))
		{
			return;
		}
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(iParam2);
		unk_0x9A1335ECD7BD117F("FocusIn");
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		if (uParam0->f_B)
		{
			unk_0x82A772610883F395("FocusOut", 0x00000000, 0x00000000);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusOut", "HintCamSounds", 0x00000001);
			uParam0->f_B = 0x00000000;
		}
	}
	unk_0xF3039DE1FDB4F6FD(0x00000001);
	uParam0->f_1 = 0x00000000;
	*uParam0 = 0x00000000;
	uParam0->f_2 = 0xFFFFFFFF;
	uParam0->f_8 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	sVar0 = iParam1;
	if (unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(uParam0->f_3))
	{
		if (func_99(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_99(sVar0))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

int func_101()
{
	if (unk_0xC844350D5D58C99A(iLocal_86))
	{
		if (!unk_0x437347B10A200C4B(iLocal_86, 0x00000000))
		{
			if ((((((unk_0x7F6DC62EA9922664(iLocal_86) < 0x0000012C || unk_0x6EE94F60DA2A2273(iLocal_86) < 200f) || unk_0x4E861BC5B1EDA7BD(iLocal_86)) || (unk_0x464B3D84B739AE72(iLocal_86, 0x00000000, 0x00000000) && unk_0x464B3D84B739AE72(iLocal_86, 0x00000001, 0x00000000))) || (unk_0x464B3D84B739AE72(iLocal_86, 0x00000004, 0x00000000) && unk_0x464B3D84B739AE72(iLocal_86, 0x00000005, 0x00000000))) || (unk_0x464B3D84B739AE72(iLocal_86, 0x00000000, 0x00000000) && unk_0x464B3D84B739AE72(iLocal_86, 0x00000004, 0x00000000))) || (unk_0x464B3D84B739AE72(iLocal_86, 0x00000001, 0x00000000) && unk_0x464B3D84B739AE72(iLocal_86, 0x00000005, 0x00000000)))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_102()
{
	int iVar0;
	int iVar1;
	
	iLocal_86 = func_104(0x00000000);
	if (!unk_0xDF1306B443CD3D15(iLocal_86, 0x00000000))
	{
		iLocal_86 = unk_0x122AAB0B1D6F55AD(iLocal_82, vLocal_64, fLocal_67, 0x00000001, 0x00000001, 0x00000000);
		iVar0 = 0x00000001;
		while (iVar0 <= 0x00000008)
		{
			unk_0xD3421E391490133B(iLocal_86, iVar0, 0x00000001);
			iVar0++;
		}
		if (iLocal_79 != 0xFFFFFFFF)
		{
			unk_0xD3421E391490133B(iLocal_86, iLocal_79, 0x00000000);
		}
	}
	unk_0x71A357CDEB34742E(iLocal_86, 0x00000001);
	iLocal_90 = func_103(iLocal_86, 0x00000000, 0x00000000);
	if (iLocal_36 != 0x00000005 && iLocal_36 != 0x00000006)
	{
		if (iLocal_36 > 0x00000006)
		{
			unk_0xAA6B3A4292417750(iLocal_86, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0xCEAA091B490F8407(0xFFFFFFFF, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_86, 0x00000000, 0x00000000, 0x00000000);
		}
		func_35(sLocal_91, 0x00001D4C, 0x00000001);
	}
	else
	{
		iLocal_84[0x00000000] = unk_0x852A19533F896693(iLocal_86, 0x0000001A, iLocal_80, 0xFFFFFFFF, 0x00000001, 0x00000001);
		iLocal_84[0x00000001] = unk_0x852A19533F896693(iLocal_86, 0x0000001A, iLocal_80, 0x00000000, 0x00000001, 0x00000001);
		unk_0xF63400DBE3303D26("rghCriminal", &iLocal_107);
		unk_0x0E2400AB9174FA81(0x00000005, iLocal_107, 0x6F0783F5);
		iVar1 = 0x00000000;
		while (iVar1 < iLocal_84)
		{
			unk_0x11AD11297DC58CC7(iLocal_84[iVar1], 0x00000001);
			unk_0x262EF6C6306BEA6C(iLocal_84[iVar1], joaat("weapon_sawnoffshotgun"), 0xFFFFFFFF, 0x00000000, 0x00000001);
			unk_0x6DF7BF67E86AAE86(iLocal_84[iVar1], iLocal_107);
			iVar1++;
		}
		unk_0xE072601B4380E9DF(iLocal_84[0x00000000], iLocal_86, 25f, 0x000C00A7);
		func_35("PMDL_REC", 0x00001D4C, 0x00000001);
	}
	if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
	{
		iLocal_88 = unk_0x728870EB733D12A1();
	}
	iLocal_38 = 0x00000001;
}

int func_103(int iParam0, bool bParam1, bool bParam2)
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_104(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(Global_1AF0C.f_DE[iParam0], 0x00000000))
	{
		unk_0x73270B3C9CC833FD(Global_1AF0C.f_DE[iParam0], 0x00000001, 0x00000001);
		return Global_1AF0C.f_DE[iParam0];
	}
	return 0x00000000;
}

int func_105()
{
	if (unk_0xC844350D5D58C99A(iLocal_86))
	{
		if (unk_0xDF1306B443CD3D15(iLocal_86, 0x00000000))
		{
			if (!unk_0x12DE711B1C681E9E(iLocal_86, unk_0x16F2683693E537C9(), 300f, 300f, 300f, 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_84[0x00000000]))
	{
		if (unk_0xE4EDC4B0E92C078B(uLocal_89[0x00000000]))
		{
			unk_0x142CC44DB769B57E(&(uLocal_89[0x00000000]));
		}
	}
	return 0x00000000;
}

void func_106()
{
	unk_0x523BCC9DC80CD82F(iLocal_82);
	unk_0xD7992BEF7A9D109E("PMDL", 0x00000000);
	if (iLocal_36 >= 0x00000003 && iLocal_36 <= 0x00000004)
	{
		unk_0x523BCC9DC80CD82F(iLocal_81);
		unk_0x523BCC9DC80CD82F(iLocal_83);
	}
	else if (iLocal_36 == 0x00000005 || iLocal_36 == 0x00000006)
	{
		unk_0x523BCC9DC80CD82F(iLocal_80);
	}
	unk_0xAB8E2DDC7AF955E0(joaat("benson"), 0x00000001);
	unk_0xAB8E2DDC7AF955E0(joaat("pony2"), 0x00000001);
	if (unk_0xB87F6CF6E5628C67(iLocal_82) && unk_0x67C1D9E5B91B2E37(0x00000000))
	{
		if (iLocal_36 >= 0x00000003 && iLocal_36 <= 0x00000004)
		{
			if (unk_0xB87F6CF6E5628C67(iLocal_81) && unk_0xB87F6CF6E5628C67(iLocal_83))
			{
				bLocal_69 = 0x00000001;
			}
		}
		else if (iLocal_36 == 0x00000005 || iLocal_36 == 0x00000006)
		{
			if (unk_0xB87F6CF6E5628C67(iLocal_80))
			{
				bLocal_69 = 0x00000001;
			}
		}
		else if (iLocal_36 > 0x00000006)
		{
			if (unk_0xAE317D00A5A55DF6("Deliveries", 0x00000000, 0xFFFFFFFF))
			{
				bLocal_69 = 0x00000001;
			}
		}
		else
		{
			bLocal_69 = 0x00000001;
		}
	}
}

void func_107()
{
	float fVar0;
	
	vLocal_64 = { func_109(func_111(), iLocal_36) };
	fLocal_67 = func_108(func_111(), iLocal_36);
	if (iLocal_36 > 0x00000006)
	{
		sLocal_91 = "PMDL_TRUCK";
		sLocal_92 = "PMDL_BTIM";
		sLocal_93 = "PMDL_BCKT";
		iLocal_82 = joaat("benson");
		iLocal_79 = 0x00000002;
	}
	if (func_111() == 0x0000000A)
	{
		vLocal_65 = { -1161.213f, -1567.068f, 3.4234f };
		iLocal_82 = joaat("pony2");
		if (iLocal_36 == 0x00000000)
		{
			iLocal_76 = 0x00000002;
			iLocal_77 = 0x0000000F;
			sLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 0x00000001)
		{
			iLocal_76 = 0x00000001;
			iLocal_77 = 0x0000001E;
			sLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 0x00000002)
		{
			iLocal_76 = 0x00000001;
			iLocal_77 = 0x0000001E;
			sLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 0x00000003)
		{
			vLocal_66 = { -3121.261f, 1152.92f, 19.4047f };
			fLocal_68 = 176.4887f;
			iLocal_83 = joaat("police4");
			iLocal_81 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_36 == 0x00000004)
		{
			vLocal_66 = { 1543.145f, 2184.371f, 77.8114f };
			fLocal_68 = 45.3499f;
			iLocal_83 = joaat("police4");
			iLocal_81 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_36 >= 0x00000005)
		{
			iLocal_80 = joaat("g_m_y_salvagoon_02");
		}
	}
	else if (func_111() == 0x0000000E)
	{
		vLocal_65 = { -2169.828f, 4277.365f, 47.9568f };
		fVar0 = unk_0x0EB28750412C3A5A(vLocal_64, vLocal_65, 0x00000001);
		iLocal_77 = SYSTEM::ROUND((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_111() == 0x0000000D)
	{
		vLocal_65 = { -323.356f, 6264.431f, 30.4463f };
		fVar0 = unk_0x0EB28750412C3A5A(vLocal_64, vLocal_65, 0x00000001);
		iLocal_77 = SYSTEM::ROUND((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_111() == 0x0000000C)
	{
		vLocal_65 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = unk_0x0EB28750412C3A5A(vLocal_64, vLocal_65, 0x00000001);
		iLocal_77 = SYSTEM::ROUND((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (func_111() == 0x0000000B)
	{
		vLocal_65 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = unk_0x0EB28750412C3A5A(vLocal_64, vLocal_65, 0x00000001);
		iLocal_77 = SYSTEM::ROUND((((fVar0 / 16.5f) + 15f) / 2f));
	}
	iLocal_75 = 0x00000000;
	iLocal_70 = 0x00000001;
}

float func_108(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x0000000A:
			switch (iParam1)
			{
				case 0x00000000:
					return 0.5801f;
					break;
				
				case 0x00000001:
					return 177.9306f;
					break;
				
				case 0x00000002:
					return 49.6978f;
					break;
				
				case 0x00000003:
					return 336.9449f;
					break;
				
				case 0x00000004:
					return 80.1639f;
					break;
				
				case 0x00000005:
					return 287.983f;
					break;
				
				case 0x00000006:
					return 46.7895f;
					break;
			}
			break;
		
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			switch (iParam1)
			{
				case 0x00000007:
					return 273.1085f;
					break;
				
				case 0x00000008:
					return 256.7899f;
					break;
				
				case 0x00000009:
					return 180.9647f;
					break;
				
				case 0x0000000A:
					return 126.4385f;
					break;
				
				case 0x0000000B:
					return 123.4767f;
					break;
				
				case 0x0000000C:
					return 226.219f;
					break;
				
				case 0x0000000D:
					return 82.6097f;
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_109(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x0000000A:
			switch (iParam1)
			{
				case 0x00000000:
					return -128.1876f, 1934.495f, 194.9075f;
					break;
				
				case 0x00000001:
					return -179.8744f, 586.4468f, 196.6278f;
					break;
				
				case 0x00000002:
					return 1390.089f, -605.923f, 73.3378f;
					break;
				
				case 0x00000003:
					return -3170.048f, 1098.809f, 19.7817f;
					break;
				
				case 0x00000004:
					return 1581.22f, 2194.629f, 78.1062f;
					break;
				
				case 0x00000005:
					return 1475.833f, -113.5801f, 141.794f;
					break;
				
				case 0x00000006:
					return 1603.071f, -1793.915f, 89.0179f;
					break;
			}
			break;
		
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			switch (iParam1)
			{
				case 0x00000007:
					return 642.2169f, 2774.892f, 40.985f;
					break;
				
				case 0x00000008:
					return -1916.122f, 2060.313f, 139.7363f;
					break;
				
				case 0x00000009:
					return 824.8992f, -1064.192f, 26.9851f;
					break;
				
				case 0x0000000A:
					return -669.6013f, -1198.664f, 9.6125f;
					break;
				
				case 0x0000000B:
					return -1465.579f, -390.7494f, 37.5168f;
					break;
				
				case 0x0000000C:
					return 797.7521f, -1793.008f, 28.3164f;
					break;
				
				case 0x0000000D:
					return 806.319f, -2017.451f, 28.2215f;
					break;
			}
			break;
	}
	return func_110(iParam0);
}

Vector3 func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000002:
			return 2147.317f, 4795.208f, 40.08961f;
			break;
		
		case 0x00000009:
			return 1524.329f, -2108.269f, 75.7248f;
			break;
		
		case 0x0000000A:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 0x00000001:
			return 898.3718f, -177.0764f, 72.68348f;
			break;
		
		case 0x00000004:
			return 1191.302f, 2672.064f, 36.73154f;
			break;
		
		case 0x00000003:
			return -1584.333f, 5193.487f, 2.95912f;
			break;
		
		case 0x00000000:
			return 408.3429f, -1623.836f, 28.29278f;
			break;
		
		case 0x00000008:
			return -1339.489f, -21.19435f, 50.34566f;
			break;
		
		case 0x00000005:
			return 336.207f, 172.4251f, 102.2055f;
			break;
		
		case 0x00000006:
			return 394.5495f, -703.3795f, 28.27281f;
			break;
		
		case 0x00000007:
			return -1413.184f, -206.0555f, 46.29474f;
			break;
		
		case 0x0000000B:
			return -560.3809f, 274.5476f, 82.02014f;
			break;
		
		case 0x0000000C:
			return 221.0845f, 340.7849f, 104.5883f;
			break;
		
		case 0x0000000D:
			return -296.7154f, 6259.732f, 30.49339f;
			break;
		
		case 0x0000000E:
			return -2201.402f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_111()
{
	return Global_1AF0C.f_14;
}

int func_112()
{
	return func_113(Global_1AF0C.f_14, Global_1AF0C.f_1D);
}

int func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x0000000A:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x00000001;
					break;
				
				case 0x00000002:
					return 0x00000002;
					break;
				
				case 0x00000003:
					return 0x00000003;
					break;
				
				case 0x00000004:
					return 0x00000004;
					break;
				
				case 0x00000005:
					return 0x00000005;
					break;
				
				case 0x00000006:
					return 0x00000006;
					break;
			}
			break;
		
		case 0x0000000B:
		case 0x0000000C:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000009;
					break;
				
				case 0x00000001:
					return 0x0000000A;
					break;
				
				case 0x00000002:
					return 0x0000000B;
					break;
				
				case 0x00000003:
					return 0x0000000C;
					break;
				
				case 0x00000004:
					return 0x0000000D;
					break;
			}
			break;
		
		case 0x0000000D:
		case 0x0000000E:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000008;
					break;
				
				case 0x00000001:
					return 0x00000007;
					break;
			}
			break;
	}
	return 0x00000000;
}

void func_114()
{
	unk_0xAB8E2DDC7AF955E0(joaat("benson"), 0x00000000);
	unk_0xAB8E2DDC7AF955E0(joaat("pony2"), 0x00000000);
	unk_0x8C26F31DFF77D124();
	if (iLocal_71)
	{
		if (!unk_0x437347B10A200C4B(iLocal_88, 0x00000000))
		{
			func_115(iLocal_88, 0x00000000, 0x00000091);
		}
		unk_0x9EBC57EECAF8C953(unk_0xD803B885F5E47A62());
		func_100(&uLocal_94, 0x00000000, 0x00000000);
	}
	unk_0x10FAF14A60A0DBE1();
}

int func_115(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0x00000000)
	{
		sVar1 = unk_0xA712FAE854841798(iParam0, &uVar0);
		if (!unk_0xEA6BC48857E0AC4C(sVar1))
		{
			if (unk_0x12AB0310C2281427(sVar1) == unk_0x12AB0310C2281427("vehicle_gen_controller"))
			{
				return 0x00000000;
			}
		}
	}
	func_116(iParam0, iParam2);
	return 0x00000001;
}

void func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_122(iParam0))
	{
		return;
	}
	if ((iParam1 != 0x00000000 && iParam1 != 0x00000001) && iParam1 != 0x00000002)
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000);
		if (!unk_0xC844350D5D58C99A(iVar0))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, 0xFFFFFFFF);
		}
		if (unk_0xC844350D5D58C99A(iVar0) && !unk_0xEB6A8945D1AC98A1(iVar0))
		{
			if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0x00000000;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_one"))
			{
				iParam1 = 0x00000001;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_two"))
			{
				iParam1 = 0x00000002;
			}
		}
		if ((iParam1 != 0x00000000 && iParam1 != 0x00000001) && iParam1 != 0x00000002)
		{
			iParam1 = Global_1B416.f_936.f_21B.f_10E1;
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000002)
		{
			if (unk_0x134B62B726CEC8E6(iParam0) == Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
			{
				if (!unk_0xEA6BC48857E0AC4C(&(Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0x00000000;
						Global_1B416.f_7FE8.f_15D8[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_42)
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_1)))
			{
				if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_1)))
				{
					Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_42 = 0x00000000;
				}
			}
		}
		iVar1++;
	}
	Global_1B416.f_7FE8.f_15D6 = iParam1;
	Global_12A3A = iParam0;
	Global_1B416.f_7FE8.f_15D4 = 0x00000001;
	func_117(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

void func_117(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_121(uParam1);
		uParam1->f_42 = unk_0x134B62B726CEC8E6(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x7888A5D2621AAF2D(iParam0), 16);
		*uParam1 = unk_0x4EB64970EC291A00(iParam0);
		unk_0x9412F17E127D9759(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xD00EA977553939A7(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x4D842A28A29F18F6(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = unk_0x214BEAD64D777E8F(iParam0);
		uParam1->f_43 = unk_0xF22DC2D0CA24A151(iParam0);
		uParam1->f_45 = unk_0x8EF9B42D5496EC5A(iParam0);
		uParam1->f_46 = unk_0x9C7B8DC16535B879(iParam0);
		unk_0xCCBAB59EE36FFC71(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xE04A80C505823410(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (unk_0x812A93B166D97C60(iParam0, 0x00000002))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001C);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000003))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001D);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001E);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001F);
		}
		if (uParam1->f_41 == 0xFFFFFFFF && !func_120(uParam1->f_42))
		{
			uParam1->f_41 = 0x00000000;
		}
		if (unk_0x587993B327460A82(iParam0, 0x00000000))
		{
			uParam1->f_44 = unk_0x74A7D92E3874B5C7(iParam0);
		}
		if (unk_0xC41A9202669A24C4(uParam1->f_42))
		{
			if (unk_0x20D5F312838C1136(iParam0))
			{
				switch (unk_0x38E830634323E0D5(iParam0))
				{
					case 0x00000003:
					case 0x00000000:
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000017);
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000016);
						break;
					
					case 0x00000004:
					case 0x00000001:
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000017);
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000016);
						break;
					
					case 0x00000005:
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000017);
						break;
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000017);
			}
		}
		if (!unk_0x616632A7E7824A9A(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000009);
		}
		if (unk_0xF566283DA9533594(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000A);
		}
		if (unk_0xC97B0E5C744424FD(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000D);
			unk_0x3139754D4D5C3AC3(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0xE23BB5249C074C85(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000C);
		}
		func_119(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_118(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x92C2290AA46758D3(iParam0, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000B);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x0000000B);
		}
		if (unk_0x30F813723591D02E(iParam0, "IgnoredByQuickSave") && unk_0xB2C7CF65CF9B897C(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001B);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x0000001B);
		}
	}
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			return 0x00000002;
			break;
		
		case 0x00000004:
			return 0x00000003;
			break;
		
		case 0x00000005:
			return 0x00000004;
			break;
		
		case 0x00000006:
			return 0x00000005;
			break;
		
		case 0x00000007:
			return 0x00000006;
			break;
		
		case 0x00000008:
			return 0x00000007;
			break;
		
		case 0x00000009:
			return 0x00000008;
			break;
		
		case 0x0000000A:
			return 0x00000018;
			break;
		
		case 0x0000000B:
			return 0x00000019;
			break;
		
		case 0x0000000C:
			return 0x0000001A;
			break;
	}
	return 0x00000000;
}

int func_119(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x40B3F576B41FA183(*iParam0) == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 0x00000011 || iVar1 == 0x00000012) || iVar1 == 0x00000013) || iVar1 == 0x00000014) || iVar1 == 0x00000015)
		{
			(*uParam1)[iVar0] = 0x00000000;
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 0x00000001;
			}
		}
		else if (iVar1 == 0x00000016)
		{
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				switch (unk_0x3C076D736FE6B7A6(*iParam0))
				{
					case 0x000000FF:
						(*uParam1)[iVar0] = 0x00000001;
						break;
					
					case 0x00000000:
						(*uParam1)[iVar0] = 0x00000002;
						break;
					
					case 0x00000001:
						(*uParam1)[iVar0] = 0x00000003;
						break;
					
					case 0x00000002:
						(*uParam1)[iVar0] = 0x00000004;
						break;
					
					case 0x00000003:
						(*uParam1)[iVar0] = 0x00000005;
						break;
					
					case 0x00000004:
						(*uParam1)[iVar0] = 0x00000006;
						break;
					
					case 0x00000005:
						(*uParam1)[iVar0] = 0x00000007;
						break;
					
					case 0x00000006:
						(*uParam1)[iVar0] = 0x00000008;
						break;
					
					case 0x00000007:
						(*uParam1)[iVar0] = 0x00000009;
						break;
					
					case 0x00000008:
						(*uParam1)[iVar0] = 0x0000000A;
						break;
					
					case 0x00000009:
						(*uParam1)[iVar0] = 0x0000000B;
						break;
					
					case 0x0000000A:
						(*uParam1)[iVar0] = 0x0000000C;
						break;
					
					case 0x0000000B:
						(*uParam1)[iVar0] = 0x0000000D;
						break;
					
					case 0x0000000C:
						(*uParam1)[iVar0] = 0x0000000E;
						break;
					
					case 0x0000000D:
						(*uParam1)[iVar0] = 0x0000000F;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0x00000000;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x0ECB5CA5140957AD(*iParam0, iVar0) + 1;
			if (iVar0 == 0x00000017)
			{
				(*uParam2)[0x00000000] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
			else if (iVar0 == 0x00000018)
			{
				(*uParam2)[0x00000001] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case 0xC4810400:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_121(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0x00000000;
	uParam0->f_4D = 0x00000000;
	uParam0->f_41 = 0x00000000;
	uParam0->f_3E = 0x00000000;
	uParam0->f_3F = 0x00000000;
	uParam0->f_40 = 0x00000000;
	uParam0->f_4A = 0x00000000;
	uParam0->f_4B = 0x00000000;
	uParam0->f_4C = 0x00000000;
	*uParam0 = 0x00000000;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000031)
	{
		uParam0->f_9[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		uParam0->f_3B[iVar0] = 0x00000000;
		iVar0++;
	}
	uParam0->f_43 = 0x00000000;
	uParam0->f_44 = 0x00000000;
	uParam0->f_45 = 0x00000000;
	uParam0->f_46 = 0x00000001;
	uParam0->f_47 = 0x00000000;
	uParam0->f_48 = 0x00000000;
	uParam0->f_49 = 0x00000000;
}

int func_122(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_138(iParam0, 0x00000000, 0x00000000)) || func_138(iParam0, 0x00000001, 0x00000000)) || func_138(iParam0, 0x00000002, 0x00000000)) || func_137(iParam0) != 0x00000091) || func_136(iParam0)) || func_135(iParam0)) || func_134(iParam0)) || func_133(iParam0)) || !func_123(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_135(iParam0))
		{
		}
		if (func_135(iParam0))
		{
		}
		if (func_138(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_138(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_138(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_137(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_123(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_124(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (((unk_0xA7082C42B8809BF2(iParam0) || unk_0xC41A9202669A24C4(iParam0)) || unk_0xAFB8495D36825275(iParam0)) || unk_0xA7D7011F9888A365(iParam0))
	{
		return 0x00000000;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 0x73920F8E:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

int func_124(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0x4DAC2AD66FE0E696(iParam0))
	{
		return 0x00000000;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x8CD06866876216F2()) || (iParam0 == joaat("buffalo3") && !unk_0x8CD06866876216F2())) || (iParam0 == joaat("gauntlet2") && !unk_0x8CD06866876216F2())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x8CD06866876216F2()))
	{
		if (!func_132())
		{
			return 0x00000000;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < unk_0x6C7B93D0F54679BE())
		{
			if (unk_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x232048AB4B0E0259(Var1))
					{
						return 0x00000000;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_131() && !func_130()) && !func_129()) && !func_128()) && !func_132())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_129())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_127(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_125(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_125(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_126())
	{
		return 0x00000001;
	}
	unk_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 0x00000004)
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 0x00000001;
			break;
	}
	if (!unk_0x437ABF4F514F6471(&cVar2))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_126()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_26596A)
	{
		return 0x00000001;
	}
	iVar0 = 0x00000001;
	iVar1 = unk_0xDD0E7998AE8AD485();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_40001.f_19C7 && !Global_40001.f_327A) && iVar1 < Global_40001.f_327B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_40001.f_378E && iVar1 < Global_40001.f_379A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_40001.f_378A && iVar1 < Global_40001.f_3796)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_40001.f_378B && iVar1 < Global_40001.f_3797)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_40001.f_378C && iVar1 < Global_40001.f_3798)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_40001.f_378D && iVar1 < Global_40001.f_3799)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_40001.f_378F && iVar1 < Global_40001.f_379B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_40001.f_3790 && iVar1 < Global_40001.f_3793)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_40001.f_3791 && iVar1 < Global_40001.f_3794)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_40001.f_3792 && iVar1 < Global_40001.f_3795)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_40001.f_41D5 && iVar1 < Global_40001.f_41B2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_40001.f_41D0 && iVar1 < Global_40001.f_41AD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_40001.f_41D4 && iVar1 < Global_40001.f_41B1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_40001.f_41D3 && iVar1 < Global_40001.f_41B0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_40001.f_41CD && iVar1 < Global_40001.f_41AA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_40001.f_41CE && iVar1 < Global_40001.f_41AB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_40001.f_41D1 && iVar1 < Global_40001.f_41AE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_40001.f_41D2 && iVar1 < Global_40001.f_41AF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_40001.f_41CF && iVar1 < Global_40001.f_41AC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_40001.f_41D7 && iVar1 < Global_40001.f_41B4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_40001.f_41D8 && iVar1 < Global_40001.f_41B5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_40001.f_41CC && iVar1 < Global_40001.f_41A9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_40001.f_41CB && iVar1 < Global_40001.f_41A8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_40001.f_41CA && iVar1 < Global_40001.f_41A7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_40001.f_41D6 && iVar1 < Global_40001.f_41B3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_40001.f_41D9 && iVar1 < Global_40001.f_41B6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_40001.f_41DA && iVar1 < Global_40001.f_41B7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_40001.f_41DB && iVar1 < Global_40001.f_41B8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_40001.f_41DC && iVar1 < Global_40001.f_41B9)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_40001.f_426F && iVar1 < Global_40001.f_4285)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_40001.f_4270 && iVar1 < Global_40001.f_4286)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_40001.f_4271 && iVar1 < Global_40001.f_4287)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_40001.f_4272 && iVar1 < Global_40001.f_4288)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_40001.f_4273 && iVar1 < Global_40001.f_4289)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_40001.f_4274 && iVar1 < Global_40001.f_428A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_40001.f_4276 && iVar1 < Global_40001.f_428B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_40001.f_4277 && iVar1 < Global_40001.f_428C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_40001.f_4278 && iVar1 < Global_40001.f_428D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_40001.f_4279 && iVar1 < Global_40001.f_428E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_40001.f_427A && iVar1 < Global_40001.f_428F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_40001.f_427B && iVar1 < Global_40001.f_4290)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_40001.f_427C && iVar1 < Global_40001.f_4291)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_40001.f_4282 && iVar1 < Global_40001.f_4298)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_40001.f_427F && iVar1 < Global_40001.f_4294)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_40001.f_4280 && iVar1 < Global_40001.f_4295)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_40001.f_4281 && iVar1 < Global_40001.f_4296)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_40001.f_4275 && iVar1 < Global_40001.f_4297)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_40001.f_4283 && iVar1 < Global_40001.f_4299)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_40001.f_427D && iVar1 < Global_40001.f_4292)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_40001.f_427E && iVar1 < Global_40001.f_4293)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_40001.f_4284 && iVar1 < Global_40001.f_429A)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_40001.f_48E3 && iVar1 < Global_40001.f_4944)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_40001.f_48E4 && iVar1 < Global_40001.f_4945)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_40001.f_48E5 && iVar1 < Global_40001.f_4946)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_40001.f_48E6 && iVar1 < Global_40001.f_4947)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_40001.f_48E7 && iVar1 < Global_40001.f_4948)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_40001.f_48E8 && iVar1 < Global_40001.f_4949)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_40001.f_48E9 && iVar1 < Global_40001.f_494A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_40001.f_48EA && iVar1 < Global_40001.f_494B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_40001.f_48EB && iVar1 < Global_40001.f_494C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_40001.f_48EC && iVar1 < Global_40001.f_494D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_40001.f_48ED && iVar1 < Global_40001.f_494E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_40001.f_48EE && iVar1 < Global_40001.f_494F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_40001.f_48EF && iVar1 < Global_40001.f_4950)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_40001.f_48F0 && iVar1 < Global_40001.f_4951)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_40001.f_48F1 && iVar1 < Global_40001.f_4952)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_40001.f_48F2 && iVar1 < Global_40001.f_4953)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_40001.f_48F3 && iVar1 < Global_40001.f_4954)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_40001.f_48F4 && iVar1 < Global_40001.f_4955)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_40001.f_48F5 && iVar1 < Global_40001.f_4956)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_40001.f_48F6 && iVar1 < Global_40001.f_4957)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_40001.f_48F7 && iVar1 < Global_40001.f_4958)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_40001.f_48F8 && iVar1 < Global_40001.f_4959)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_40001.f_48F9 && iVar1 < Global_40001.f_495A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_40001.f_48FA && iVar1 < Global_40001.f_495B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_40001.f_48FB && iVar1 < Global_40001.f_495C)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x4992196C)
	{
		if (!Global_40001.f_4D1C && iVar1 < Global_40001.f_4D18)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAC33179C)
	{
		if (!Global_40001.f_4D1D && iVar1 < Global_40001.f_4D19)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2AE524A8)
	{
		if (!Global_40001.f_4D1E && iVar1 < Global_40001.f_4D1A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC575DF11)
	{
		if (!Global_40001.f_4D1F && iVar1 < Global_40001.f_4D1B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x36B4A8A9)
	{
		if (!Global_40001.f_508B && iVar1 < Global_40001.f_5093)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x0D4E5F4D)
	{
		if (!Global_40001.f_508C && iVar1 < Global_40001.f_5094)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x59A9E570)
	{
		if (!Global_40001.f_508D && iVar1 < Global_40001.f_5095)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7397224C)
	{
		if (!Global_40001.f_508E && iVar1 < Global_40001.f_5096)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x097E5533)
	{
		if (!Global_40001.f_508F && iVar1 < Global_40001.f_5097)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x19DD9ED1)
	{
		if (!Global_40001.f_5090 && iVar1 < Global_40001.f_5098)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x96E24857)
	{
		if (!Global_40001.f_5394 && iVar1 < Global_40001.f_53A8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD35698EF)
	{
		if (!Global_40001.f_53A0 && iVar1 < Global_40001.f_53B4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC5DD6967)
	{
		if (!Global_40001.f_5397 && iVar1 < Global_40001.f_53AB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9A9EB7DE)
	{
		if (!Global_40001.f_53A1 && iVar1 < Global_40001.f_53B5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE8983F9F)
	{
		if (!Global_40001.f_5395 && iVar1 < Global_40001.f_53A9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E2E4F8A)
	{
		if (!Global_40001.f_53A5 && iVar1 < Global_40001.f_53B9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAD6065C0)
	{
		if (!Global_40001.f_53A3 && iVar1 < Global_40001.f_53B7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5D56F01B)
	{
		if (!Global_40001.f_53A4 && iVar1 < Global_40001.f_53B8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3DC92356)
	{
		if (!Global_40001.f_539F && iVar1 < Global_40001.f_53B3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFE0A508C)
	{
		if (!Global_40001.f_53A6 && iVar1 < Global_40001.f_53BA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFD707EDE)
	{
		if (!Global_40001.f_53A2 && iVar1 < Global_40001.f_53B6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x89BA59F5)
	{
		if (!Global_40001.f_539E && iVar1 < Global_40001.f_53B2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC3F25753)
	{
		if (!Global_40001.f_5396 && iVar1 < Global_40001.f_53AA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA52F6866)
	{
		if (!Global_40001.f_5398 && iVar1 < Global_40001.f_53AC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x52FF9437)
	{
		if (!Global_40001.f_5399 && iVar1 < Global_40001.f_53AD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC4810400)
	{
		if (!Global_40001.f_539A && iVar1 < Global_40001.f_53AE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB5EF4C33)
	{
		if (!Global_40001.f_539B && iVar1 < Global_40001.f_53AF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6DBD6C0A)
	{
		if (!Global_40001.f_539C && iVar1 < Global_40001.f_53B0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7A2EF5E4)
	{
		if (!Global_40001.f_539D && iVar1 < Global_40001.f_53B1)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x586765FB)
	{
		if (!Global_40001.f_5755 && iVar1 < Global_40001.f_5771)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x34DBA661)
	{
		if (!Global_40001.f_5756 && iVar1 < Global_40001.f_5772)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9B16A3B4)
	{
		if (!Global_40001.f_5757 && iVar1 < Global_40001.f_5773)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD6BC7523)
	{
		if (!Global_40001.f_5758 && iVar1 < Global_40001.f_5774)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAA6F980A)
	{
		if (!Global_40001.f_5759 && iVar1 < Global_40001.f_5775)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x46699F47)
	{
		if (!Global_40001.f_575A && iVar1 < Global_40001.f_5776)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x58CDAF30)
	{
		if (!Global_40001.f_575B && iVar1 < Global_40001.f_5777)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF34DFB25)
	{
		if (!Global_40001.f_575C && iVar1 < Global_40001.f_5778)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1AAD0DED)
	{
		if (!Global_40001.f_575D && iVar1 < Global_40001.f_5779)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5D1903F9)
	{
		if (!Global_40001.f_575E && iVar1 < Global_40001.f_577A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x91CA96EE)
	{
		if (!Global_40001.f_575F && iVar1 < Global_40001.f_577B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x67D2B389)
	{
		if (!Global_40001.f_5760 && iVar1 < Global_40001.f_577C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x41D149AA)
	{
		if (!Global_40001.f_5761 && iVar1 < Global_40001.f_577D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6F946279)
	{
		if (!Global_40001.f_5762 && iVar1 < Global_40001.f_577E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5097F589)
	{
		if (!Global_40001.f_5763 && iVar1 < Global_40001.f_577F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xED552C74)
	{
		if (!Global_40001.f_5764 && iVar1 < Global_40001.f_5780)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8408F33A)
	{
		if (!Global_40001.f_5765 && iVar1 < Global_40001.f_5781)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x23CA25F2)
	{
		if (!Global_40001.f_5766 && iVar1 < Global_40001.f_5782)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE78CC3D9)
	{
		if (!Global_40001.f_5767 && iVar1 < Global_40001.f_5783)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x33B98FE2)
	{
		if (!Global_40001.f_5768 && iVar1 < Global_40001.f_5784)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA4D99B7D)
	{
		if (!Global_40001.f_5769 && iVar1 < Global_40001.f_5785)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x35DED0DD)
	{
		if (!Global_40001.f_576A && iVar1 < Global_40001.f_5786)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA4A4E453)
	{
		if (!Global_40001.f_576B && iVar1 < Global_40001.f_5787)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x00E83C17)
	{
		if (!Global_40001.f_576C && iVar1 < Global_40001.f_5788)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x276D98A3)
	{
		if (!Global_40001.f_576D && iVar1 < Global_40001.f_5789)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3201DD49)
	{
		if (!Global_40001.f_576E && iVar1 < Global_40001.f_578A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE8A8BA94)
	{
		if (!Global_40001.f_576F && iVar1 < Global_40001.f_578B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF8C2E0E7)
	{
		if (!Global_40001.f_5770 && iVar1 < Global_40001.f_578C)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x71CBEA98)
	{
		if (!Global_40001.f_5C15 && iVar1 < Global_40001.f_5C25)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6068AD86)
	{
		if (!Global_40001.f_5C16 && iVar1 < Global_40001.f_5C26)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB472D2B5)
	{
		if (!Global_40001.f_5C1A && iVar1 < Global_40001.f_5C2A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x378236E1)
	{
		if (!Global_40001.f_5C1D && iVar1 < Global_40001.f_5C2D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E5BD8D9)
	{
		if (!Global_40001.f_5C22 && iVar1 < Global_40001.f_5C32)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB4F32118)
	{
		if (!Global_40001.f_5C1C && iVar1 < Global_40001.f_5C2C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x42836BE5)
	{
		if (!Global_40001.f_5C14 && iVar1 < Global_40001.f_5C24)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3D7C6410)
	{
		if (!Global_40001.f_5C1B && iVar1 < Global_40001.f_5C2B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE99011C2)
	{
		if (!Global_40001.f_5C21 && iVar1 < Global_40001.f_5C31)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC52C6B93)
	{
		if (!Global_40001.f_5C20 && iVar1 < Global_40001.f_5C30)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBC5DC07E)
	{
		if (!Global_40001.f_5C17 && iVar1 < Global_40001.f_5C27)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8198AEDC)
	{
		if (!Global_40001.f_5C19 && iVar1 < Global_40001.f_5C29)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF330CB6A)
	{
		if (!Global_40001.f_5C23 && iVar1 < Global_40001.f_5C33)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC514AAE0)
	{
		if (!Global_40001.f_5C1F && iVar1 < Global_40001.f_5C2F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4ABEBF23)
	{
		if (!Global_40001.f_5C18 && iVar1 < Global_40001.f_5C28)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD4AE63D9)
	{
		if (!Global_40001.f_5C1E && iVar1 < Global_40001.f_5C2E)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x897AFC65)
	{
		if (!Global_40001.f_5C6F && iVar1 < Global_40001.f_5C62)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x149BD32A)
	{
		if (!Global_40001.f_5C70 && iVar1 < Global_40001.f_5C63)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x73F4110E)
	{
		if (!Global_40001.f_5C75 && iVar1 < Global_40001.f_5C68)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6290F15B)
	{
		if (!Global_40001.f_5C74 && iVar1 < Global_40001.f_5C67)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1DD4C0FF)
	{
		if (!Global_40001.f_5C72 && iVar1 < Global_40001.f_5C65)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x79DD18AE)
	{
		if (!Global_40001.f_5C78 && iVar1 < Global_40001.f_5C6B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD9F0503D)
	{
		if (!Global_40001.f_5C7A && iVar1 < Global_40001.f_5C6D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x64DE07A1)
	{
		if (!Global_40001.f_5C7B && iVar1 < Global_40001.f_5C6E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7B54A9D3)
	{
		if (!Global_40001.f_5C79 && iVar1 < Global_40001.f_5C6C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE6E967F8)
	{
		if (!Global_40001.f_5C71 && iVar1 < Global_40001.f_5C64)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1324E960)
	{
		if (!Global_40001.f_5C73 && iVar1 < Global_40001.f_5C66)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFCC2F483)
	{
		if (!Global_40001.f_5C77 && iVar1 < Global_40001.f_5C6A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEDA4ED97)
	{
		if (!Global_40001.f_5C76 && iVar1 < Global_40001.f_5C69)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x669EB40A)
	{
	}
	else if (iParam0 == 0xD039510B)
	{
	}
	else if (iParam0 == 0x287FA449)
	{
	}
	else if (iParam0 == 0x71D3B6F0)
	{
	}
	else if (iParam0 == 0x7F81A829)
	{
	}
	else if (iParam0 == 0x8F49AE28)
	{
	}
	else if (iParam0 == 0x798682A2)
	{
	}
	else if (iParam0 == 0xBBA2A2F7)
	{
	}
	else if (iParam0 == 0x5BEB3CE0)
	{
	}
	else if (iParam0 == 0xDD71BFEB)
	{
	}
	else if (iParam0 == 0x1A861243)
	{
	}
	else if (iParam0 == 0x619C1B82)
	{
	}
	else if (iParam0 == 0xD2F77E37)
	{
	}
	else if (iParam0 == 0x20314B42)
	{
	}
	else if (iParam0 == 0xBE11EFC6)
	{
	}
	else if (iParam0 == 0xA7DCC35C)
	{
	}
	else if (iParam0 == 0x83070B62)
	{
	}
	else if (iParam0 == 0x5EE005DA)
	{
		if (!Global_40001.f_657A && iVar1 < Global_40001.f_657C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBA5334AC)
	{
		if (!Global_40001.f_619F && iVar1 < Global_40001.f_6198)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA29F78B0)
	{
		if (!Global_40001.f_61A0 && iVar1 < Global_40001.f_6199)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEC3E3404)
	{
		if (!Global_40001.f_61A1 && iVar1 < Global_40001.f_619A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4C3FFF49)
	{
		if (!Global_40001.f_61A2 && iVar1 < Global_40001.f_619B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFD128DFD)
	{
		if (!Global_40001.f_657B && iVar1 < Global_40001.f_657D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x56D42971)
	{
		if (!Global_40001.f_61A3 && iVar1 < Global_40001.f_619C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE1C03AB0)
	{
		if (!Global_40001.f_61A4 && iVar1 < Global_40001.f_619D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEEF345EC)
	{
		if (!Global_40001.f_61A5 && iVar1 < Global_40001.f_619E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E3D1F59)
	{
		if (!Global_40001.f_61AA && iVar1 < Global_40001.f_61BF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x28EAB80F)
	{
		if (!Global_40001.f_61AB && iVar1 < Global_40001.f_61C0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC7E55211)
	{
		if (!Global_40001.f_61AC && iVar1 < Global_40001.f_61C1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x92F5024E)
	{
		if (!Global_40001.f_61AD && iVar1 < Global_40001.f_61C2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD757D97D)
	{
		if (!Global_40001.f_61AE && iVar1 < Global_40001.f_61C3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2B0C4DCD)
	{
		if (!Global_40001.f_61AF && iVar1 < Global_40001.f_61C4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6E8DA4F7)
	{
		if (!Global_40001.f_61B0 && iVar1 < Global_40001.f_61C5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6F039A67)
	{
		if (!Global_40001.f_61B1 && iVar1 < Global_40001.f_61C6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCB642637)
	{
		if (!Global_40001.f_61B2 && iVar1 < Global_40001.f_61C7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEA6A047F)
	{
		if (!Global_40001.f_61B3 && iVar1 < Global_40001.f_61C8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x127E90D5)
	{
		if (!Global_40001.f_61B4 && iVar1 < Global_40001.f_61C9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x36A167E0)
	{
		if (!Global_40001.f_61B5 && iVar1 < Global_40001.f_61CA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9472CD24)
	{
		if (!Global_40001.f_61B6 && iVar1 < Global_40001.f_61CB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x734C5E50)
	{
		if (!Global_40001.f_61B7 && iVar1 < Global_40001.f_61CC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAF966F3C)
	{
		if (!Global_40001.f_61B8 && iVar1 < Global_40001.f_61CD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF38C4245)
	{
		if (!Global_40001.f_61B9 && iVar1 < Global_40001.f_61CE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xECA6B6A3)
	{
		if (!Global_40001.f_61BA && iVar1 < Global_40001.f_61CF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD86A0247)
	{
		if (!Global_40001.f_61BB && iVar1 < Global_40001.f_61D0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4EE74355)
	{
		if (!Global_40001.f_61BC && iVar1 < Global_40001.f_61D1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9F6ED5A2)
	{
		if (!Global_40001.f_61BD && iVar1 < Global_40001.f_61D2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE550775B)
	{
		if (!Global_40001.f_61BE && iVar1 < Global_40001.f_61D3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x42ACA95F)
	{
		if (!Global_40001.f_6CAD && iVar1 < Global_40001.f_6CC2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x18619B7E)
	{
		if (!Global_40001.f_6CAE && iVar1 < Global_40001.f_6CC3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x97553C28)
	{
		if (!Global_40001.f_6CAF && iVar1 < Global_40001.f_6CC4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x79178F0A)
	{
		if (!Global_40001.f_6CB0 && iVar1 < Global_40001.f_6CC5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x64F49967)
	{
		if (!Global_40001.f_6CB1 && iVar1 < Global_40001.f_6CC6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3ADB9758)
	{
		if (!Global_40001.f_6CB2 && iVar1 < Global_40001.f_6CC7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3404691C)
	{
		if (!Global_40001.f_6CB3 && iVar1 < Global_40001.f_6CC8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x185E2FF3)
	{
		if (!Global_40001.f_6CB4 && iVar1 < Global_40001.f_6CC9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2C1FEA99)
	{
		if (!Global_40001.f_6CB5 && iVar1 < Global_40001.f_6CCA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCE44C4B9)
	{
		if (!Global_40001.f_6CB6 && iVar1 < Global_40001.f_6CCB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x11F58A5A)
	{
		if (!Global_40001.f_6CB7 && iVar1 < Global_40001.f_6CCC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3944D5A0)
	{
		if (!Global_40001.f_6CB8 && iVar1 < Global_40001.f_6CCD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4C8DBA51)
	{
		if (!Global_40001.f_6CB9 && iVar1 < Global_40001.f_6CCE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x177DA45C)
	{
		if (!Global_40001.f_6CBA && iVar1 < Global_40001.f_6CCF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x73920F8E)
	{
		if (!Global_40001.f_6CBB && iVar1 < Global_40001.f_6CD0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_40001.f_6CBC && iVar1 < Global_40001.f_6CD1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_40001.f_6CBD && iVar1 < Global_40001.f_6CD2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_40001.f_6CBE && iVar1 < Global_40001.f_6CD3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB53C6C52)
	{
		if (!Global_40001.f_6CBF && iVar1 < Global_40001.f_6CD4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_40001.f_6CC0 && iVar1 < Global_40001.f_6CD5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_40001.f_6CC1 && iVar1 < Global_40001.f_6CD6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1446590A)
	{
		if ((!Global_40001.f_6CD8 && iVar1 < Global_40001.f_6CD9) && !Global_40001.f_6CAB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8B213907)
	{
		if ((!Global_40001.f_6CDB && iVar1 < Global_40001.f_6CDC) && !Global_40001.f_6CAC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBC7C0A00)
	{
		if (!Global_40001.f_6CE0 && iVar1 < Global_40001.f_6CE3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x04F48FC4)
	{
		if (!Global_40001.f_6CE1 && iVar1 < Global_40001.f_6CE4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x56CDEE7D)
	{
		if (!Global_40001.f_6CE2 && iVar1 < Global_40001.f_6CE5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x817AFAAD)
	{
		if (!Global_40001.f_70CA && iVar1 < Global_40001.f_6F7B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x82E47E85)
	{
		if (!Global_40001.f_6F6D && iVar1 < Global_40001.f_6F82)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7F3415E3)
	{
		if (!Global_40001.f_6F6E && iVar1 < Global_40001.f_6F74)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x0409D787)
	{
		if (!Global_40001.f_70C8 && iVar1 < Global_40001.f_6F7C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4201A843)
	{
		if (!Global_40001.f_70C9 && iVar1 < Global_40001.f_6F7D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC98BBAD6)
	{
		if (!Global_40001.f_6F67 && iVar1 < Global_40001.f_6F7A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xDA5EC7DA)
	{
		if (!Global_40001.f_6F68 && iVar1 < Global_40001.f_6F83)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCE0B9F22)
	{
		if (!Global_40001.f_6F69 && iVar1 < Global_40001.f_6F79)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x94114926)
	{
		if (!Global_40001.f_6F6A && iVar1 < Global_40001.f_6F77)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAF0B8D48)
	{
		if (!Global_40001.f_70C4 && iVar1 < Global_40001.f_6F7E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x58F77553)
	{
		if (!Global_40001.f_70C5 && iVar1 < Global_40001.f_6F7F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4669D038)
	{
		if (!Global_40001.f_70C6 && iVar1 < Global_40001.f_6F80)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x98F65A5E)
	{
		if (!Global_40001.f_70C7 && iVar1 < Global_40001.f_6F81)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x665F785D)
	{
		if (!Global_40001.f_6F6B && iVar1 < Global_40001.f_6F76)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6B73A9BE)
	{
		if (!Global_40001.f_6F6C && iVar1 < Global_40001.f_6F78)
		{
			iVar0 = 0x00000000;
		}
	}
	return iVar0;
}

int func_128()
{
	return 0x00000000;
}

int func_129()
{
	return 0x00000001;
}

int func_130()
{
	return 0x00000001;
}

int func_131()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_132()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000006);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000002);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000004);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000006);
				unk_0xCDC520E5E48E63D9(joaat("sp_unlock_exclus_content"), iVar0, 0x00000001);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar0 = unk_0x0A4C9A3D51EAE31F(0x00000362);
					unk_0x5D96D8530B3D0904(&iVar0, 0x00000000);
					unk_0x9F2BE984EBF8A0F4(iVar0);
				}
				return 0x00000001;
			}
		}
	}
	if (Global_24BC8 == 0x00000002)
	{
		return 0x00000001;
	}
	else if (Global_24BC8 == 0x00000003)
	{
		return 0x00000000;
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		if (unk_0xEAE0D21A50E6C7F4(unk_0x0A4C9A3D51EAE31F(0x00000362), 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_133(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_124(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(Global_17769[iVar0]))
		{
			if (Global_17769[iVar0] == iParam0)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_135(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000009)
		{
			if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]) && unk_0xDF1306B443CD3D15(Global_1774B[iVar0], 0x00000000))
			{
				if (Global_1774B[iVar0] == iParam0 && unk_0x134B62B726CEC8E6(Global_1774B[iVar0]) == unk_0x134B62B726CEC8E6(iParam0))
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_136(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x00000018]))
	{
		if (iParam0 == Global_126B1.f_1E4[0x00000018])
		{
			return 0x00000000;
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 0x00000018 && iVar0 != 0x00000015) && iVar0 != 0x00000016) && iVar0 != 0x00000017) && iVar0 != 0x0000001B) && iVar0 != 0x0000001E) && iVar0 != 0x00000021) && iVar0 != 0x0000001C) && iVar0 != 0x0000001F) && iVar0 != 0x00000022) && iVar0 != 0x0000001A) && iVar0 != 0x0000001D) && iVar0 != 0x00000020)
			{
				if (iParam0 == Global_126B1.f_1E4[iVar0])
				{
					return 0x00000001;
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000091;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000091;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (Global_1774B[iVar0] == iParam0)
			{
				return Global_17755[iVar0];
			}
		}
		iVar0++;
	}
	return 0x00000091;
}

int func_138(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_139(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iVar2], 0x00000000))
		{
			if (unk_0x5B6BEDD9A86023B7(&sVar1, iParam0))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_139(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0x00000000;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 0x00000001;
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 0x00000005;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 0x00000006;
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 0x00000002;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 0x00000003;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000002)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 0x00000004;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_140(int iParam0)
{
	Global_1AF0C.f_16 = iParam0;
}

