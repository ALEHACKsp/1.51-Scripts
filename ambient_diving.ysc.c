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
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
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
	int iLocal_56[4] = { 0, 0, 0, 0 };
	float fLocal_57[4] = { 0f, 0f, 0f, 0f };
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 0x00000003;
	bLocal_40 = 0x00000001;
	bLocal_41 = 0x00000001;
	iLocal_51 = 0xFFFFFFFF;
	iLocal_61 = 0x00000001;
	iLocal_63 = unk_0xD68EA767274B7444();
	if (unk_0x2EBF608FFE6CA406(0x000000D2))
	{
		func_77(0x00000001);
	}
	if (unk_0x8A22C4C08282BF26(joaat("ambient_diving")) > 0x00000001)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_76(0x0000001B);
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (func_73(0x00000000))
		{
			if (!iLocal_67)
			{
				func_77(0x00000000);
				iLocal_67 = 0x00000001;
			}
		}
		else
		{
			iLocal_67 = 0x00000000;
			func_72(unk_0x16F2683693E537C9());
			switch (iLocal_49)
			{
				case 0x00000000:
					func_67();
					break;
				
				case 0x00000001:
					func_64();
					func_55();
					func_1();
					break;
				
				case 0x00000002:
					func_55();
					break;
				
				case 0x00000003:
					func_77(0x00000001);
					break;
				}
		}
	}
}

void func_1()
{
	if (func_18(&Local_42, &Local_48) || func_17(0x0000006E) == 0x00000001)
	{
		if (func_16())
		{
			func_15(0x00000000);
		}
		func_8(0x0000012A, 0x00000000, 0x00000000);
		if (!func_17(0x0000006E))
		{
			if (!bLocal_62)
			{
				bLocal_62 = func_3(0x4DAF89F6, 0x00000001, 0x00000001, 0x00000010, 0x00000003, 0x000003E8, 0x00002710, 0x4AE4F7CA, 0xFFFFFFFF, 0x000000A3, 0xFFFFFFFF, 0x00000000);
			}
		}
		func_2(0x00000002);
	}
}

void func_2(int iParam0)
{
	iLocal_49 = iParam0;
}

int func_3(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_7(0x00000000))
	{
		return 0x00000000;
	}
	if (iParam5 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam6 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam8 == 0x0000004C)
	{
		return 0x00000000;
	}
	if (iParam9 == 0x000000EB)
	{
		return 0x00000000;
	}
	if (iParam3 < 0x00000003)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam2, iParam3))
		{
			return 0x00000000;
		}
	}
	if (iParam4 < 0x00000003)
	{
		if (iParam4 != iParam3)
		{
			return 0x00000000;
		}
	}
	if (iParam2 < 0x00000001 || iParam2 > 0x00000007)
	{
		return 0x00000000;
	}
	if (Global_1B416.f_1E03.f_88 < 0x00000009)
	{
		Var0 = iParam0;
		if (Global_1B416.f_1E03.f_38F == Var0)
		{
			Global_1B416.f_1E03.f_38F = 0xFFFFFFFF;
		}
		Var0.f_3 = func_6(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_E = iParam4;
		Var0.f_A = iParam7;
		Var0.f_B = 0xFFFFFFFF;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000001);
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000000);
		if (iParam7 != 0xFFFFFFFF)
		{
			unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x0000000B);
		}
		else if (iParam1 == 0x00000000)
		{
			unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x0000000A);
		}
		Global_1B416.f_1E03[Global_1B416.f_1E03.f_88 /*15*/] = { Var0 };
		Global_1B416.f_1E03.f_88++;
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000003)
		{
			if (unk_0xEAE0D21A50E6C7F4(iParam2, iVar1))
			{
				func_4(iVar1);
			}
			iVar1++;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (!func_5(iParam0))
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_88)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_1B416.f_1E03[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_1B416.f_1E03[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0x00000000;
	while (iVar2 < Global_1B416.f_1E03.f_2FC)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_28B[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_1B416.f_1E03.f_28B[iVar2 /*14*/].f_3 == 0x00000005)
			{
				iVar1 = 0x00000005;
			}
		}
		iVar2++;
	}
	Global_1B416.f_1E03.f_397[iParam0] = iVar1;
}

bool func_5(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_6(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000004:
			return 0x00000005;
			break;
		
		case 0x00000007:
			return 0x00000004;
			break;
		
		case 0x00000002:
			return 0x00000003;
			break;
		
		case 0x00000001:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
		
		case 0x00000005:
		case 0x00000006:
			return 0x00000000;
			break;
	}
	return 0x00000007;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_8(int iParam0, int iParam1, int iParam2)
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
		func_13((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_9();
	}
}

void func_9()
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
		func_12(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_11() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_10();
				}
			}
		}
	}
}

int func_10()
{
	if (func_7(0x00000000))
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

int func_11()
{
	return Global_7830;
}

int func_12(int iParam0, int iParam1)
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

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_14();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_14()
{
	return Global_1407E9;
}

void func_15(bool bParam0)
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

int func_16()
{
	if (unk_0x8A22C4C08282BF26(joaat("apptrackify")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_17(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

int func_18(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	
	unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9());
	vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		bVar1 = func_54(&(uParam0->f_1), uParam0->f_A);
		if (!(iParam1[uParam0->f_A /*11*/])->f_A)
		{
			if (!bVar1)
			{
				if (!func_53((iParam1[uParam0->f_A /*11*/])->f_6, 0f, 0f, 0f, 0x00000000))
				{
					func_51(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0x00000000, 0x00000001, 0x00000000);
				}
				else
				{
					func_51(iParam1[uParam0->f_A /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0x00000000, 0x00000000, 0x00000002);
				}
			}
		}
		else if (!bVar1)
		{
			func_36(uParam0, iParam1, vVar2);
		}
		uParam0->f_A++;
		if (uParam0->f_A >= *iParam1)
		{
			uParam0->f_A = 0x00000000;
		}
		iVar0++;
	}
	if (uParam0->f_B)
	{
		if (!Global_12C52)
		{
			func_26(&(uParam0->f_B), &(uParam0->f_C), &(uParam0->f_9), 0x00000005, &iLocal_52, &iLocal_50, "DIVING_TITLE", "DIVING_COLLECT");
		}
		if (!func_25(0x0000002C))
		{
			vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			if (func_24(&Local_42, &Local_48, vVar3, &iVar4))
			{
				if (unk_0x0EB28750412C3A5A(func_23(iVar4), vVar3, 0x00000000) > 200f)
				{
					func_20("DIVING_HELP4", 0x00000001, 0x00001D4C, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
					func_19(0x0000002C);
				}
			}
		}
	}
	if (!bLocal_62)
	{
		if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
		{
			bLocal_62 = func_3(0x4DAF89F6, 0x00000001, 0x00000001, 0x00000010, 0x00000003, 0x000003E8, 0x00002710, 0x4AE4F7CA, 0xFFFFFFFF, 0x000000A3, 0xFFFFFFFF, 0x00000000);
		}
	}
	if (!uParam0->f_C && !uParam0->f_B)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0x00000000;
}

void func_19(int iParam0)
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

void func_20(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_21(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_21(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_22();
	}
}

void func_22()
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

Vector3 func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -1036.73f, 6735.72f, -100.52f;
			break;
		
		case 0x00000001:
			return -908.86f, 6655.98f, -34.35f;
			break;
		
		case 0x00000002:
			return -985.14f, 6697.71f, -41.57f;
			break;
		
		case 0x00000003:
			return 1825.73f, -2920.67f, -36.82f;
			break;
		
		case 0x00000004:
			return 1772.11f, -2967.72f, -46.81f;
			break;
		
		case 0x00000005:
			return 3198.59f, -385.05f, -31.49f;
			break;
		
		case 0x00000006:
			return 3170.43f, -302.21f, -25.99f;
			break;
		
		case 0x00000007:
			return 3157.44f, -268.54f, -28.07f;
			break;
		
		case 0x00000008:
			return -3180.2f, 3010.9f, -37.6f;
			break;
		
		case 0x00000009:
			return -3178.3f, 3044.86f, -39.96f;
			break;
		
		case 0x0000000A:
			return 910.48f, -3471.21f, -17.57f;
			break;
		
		case 0x0000000B:
			return 1338.76f, -3041.59f, -19.23f;
			break;
		
		case 0x0000000C:
			return 1153.38f, -2864.51f, -18.96f;
			break;
		
		case 0x0000000D:
			return 958.56f, -2847.78f, -22.05f;
			break;
		
		case 0x0000000E:
			return 782.28f, -2872.81f, -9.577f;
			break;
		
		case 0x0000000F:
			return 581.28f, -2471.5f, -9.44f;
			break;
		
		case 0x00000010:
			return 636.56f, -2214.49f, -7.87f;
			break;
		
		case 0x00000011:
			return 371.06f, -3226.67f, -19.6f;
			break;
		
		case 0x00000012:
			return 689.69f, -3451.07f, -27.85f;
			break;
		
		case 0x00000013:
			return 180.17f, -2255.91f, -2.54f;
			break;
		
		case 0x00000014:
			return -691.64f, -2836.86f, -15.67f;
			break;
		
		case 0x00000015:
			return -3397.5f, 3717.52f, -86.14f;
			break;
		
		case 0x00000016:
			return -3357.11f, 3710.79f, -96.14f;
			break;
		
		case 0x00000017:
			return -3282.21f, 3682.6f, -82.87f;
			break;
		
		case 0x00000018:
			return -3256.66f, 3672.29f, -35.06f;
			break;
		
		case 0x00000019:
			return -3142.19f, 3625.95f, -26.31f;
			break;
		
		case 0x0000001A:
			return 3271.34f, 6420.78f, -50.78f;
			break;
		
		case 0x0000001B:
			return 3237.83f, 6487.44f, -43.9f;
			break;
		
		case 0x0000001C:
			return 1772.1f, -2997.12f, -50.44f;
			break;
		
		case 0x0000001D:
			return 3207f, -415.17f, -32.01f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_24(var uParam0, int iParam1, vector3 vParam2, int iParam3)
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
		if (!func_54(&(uParam0->f_1), iVar0))
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

int func_25(int iParam0)
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

void func_26(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	
	func_35(0x00000000);
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
				unk_0x6D99DF8263D35CE5(func_28(iParam3));
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
				else if (!func_27())
				{
					if (unk_0x83D8570832F172A7(*iParam5))
					{
						func_35(0x00000001);
						unk_0x6567AE843FADBA94(*iParam5, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
					}
				}
				break;
			
			case 0x00000003:
				if ((unk_0x1C0640BA9A7327B3() - *uParam2) > 0x00001D4C)
				{
					*iParam4++;
				}
				else if (!func_27())
				{
					if (unk_0x83D8570832F172A7(*iParam5))
					{
						func_35(0x00000001);
						unk_0x6567AE843FADBA94(*iParam5, 0x00000064, 0x00000064, 0x00000064, 0x000000FF, 0x00000000);
					}
				}
				break;
			
			case 0x00000004:
				if (unk_0x83D8570832F172A7(*iParam5))
				{
					unk_0xE17FDF9E3068281B(iParam5);
				}
				func_35(0x00000000);
				*uParam1 = 0x00000000;
				*uParam0 = 0x00000000;
				*iParam4 = 0x00000000;
				break;
			}
	}
}

int func_27()
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

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	if (iParam0 == 0x00000002)
	{
		iVar1 = 0x00000000;
		while (iVar1 < func_34(iParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_6C, func_33(func_34(iParam0), iVar1)))
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
		while (iVar1 < func_34(iParam0))
		{
			iVar2 = (func_32(iParam0) + iVar1);
			if (func_29(iVar2, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_14();
	}
	iVar1 = func_31(iParam0, iParam1);
	uVar2 = func_30(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_30(int iParam0)
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

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_14();
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

int func_32(int iParam0)
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

int func_33(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000020)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_34(int iParam0)
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

void func_35(int iParam0)
{
	if (Global_12C59 != iParam0)
	{
		Global_12C59 = iParam0;
	}
}

int func_36(var uParam0, var uParam1, vector3 vParam2)
{
	int iVar0;
	
	iVar0 = uParam0->f_A;
	if ((uParam1[iVar0 /*11*/])->f_A)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0x00000000)
		{
			if (unk_0xEB751B41BC4080D4((uParam1[iVar0 /*11*/])->f_1) || func_49((uParam1[iVar0 /*11*/])->f_1))
			{
				func_39(uParam0, uParam1, iVar0);
				return 0x00000001;
			}
		}
	}
	if (unk_0x762119754C50557A((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((SYSTEM::VDIST2(vParam2, unk_0xE925E52ACABA4CE7((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_38(0x0000000D)) || func_38(0x0000000E))
		{
			func_37(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0x00000000;
			(uParam1[iVar0 /*11*/])->f_A = 0x00000000;
		}
	}
	return 0x00000000;
}

void func_37(var uParam0)
{
	if (unk_0x762119754C50557A(*uParam0))
	{
		unk_0x40B7230FD4C59AA2(*uParam0);
	}
}

bool func_38(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_39(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (func_32(*uParam0) + iParam2);
	func_37(&((uParam1[iParam2 /*11*/])->f_1));
	func_48(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0x00000000;
	(uParam1[iParam2 /*11*/])->f_A = 0x00000000;
	func_47(&(uParam0->f_1), iParam2, 0x00000001);
	if (*uParam0 == 0x00000001 || *uParam0 == 0x00000000)
	{
		func_46(*uParam0, iParam2, 0x00000001);
	}
	unk_0x5E858A00EAFA5B24(0x00000000, 0x000000C8, 0x000000FA);
	unk_0x9505C13496579D28(uParam0->f_6, 1f);
	if (bLocal_41)
	{
		func_45(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_43(&(uParam0->f_1));
	}
	func_41();
	unk_0x9EA96DA1925F0CA2(iVar0);
	func_40(0x00000001, 0x00000000);
	func_10();
	uParam0->f_B = 0x00000001;
}

void func_40(int iParam0, int iParam1)
{
	Global_181DF.f_7 = iParam0;
	Global_181DF.f_8 = iParam1;
}

void func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0x00000000;
	unk_0x6FB46C25CCB7E6D5(func_42(0x00000000), &iVar0, 0xFFFFFFFF);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0x00000000)
	{
		func_12(0x00000012, iVar0);
	}
	unk_0x6FB46C25CCB7E6D5(func_42(0x00000001), &iVar0, 0xFFFFFFFF);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0x00000000)
	{
		func_12(0x00000013, iVar0);
	}
	unk_0x6FB46C25CCB7E6D5(func_42(0x00000003), &iVar0, 0xFFFFFFFF);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0x00000000)
	{
		func_12(0x00000014, iVar0);
	}
	iVar2 = ((func_34(0x00000000) + func_34(0x00000001)) + func_34(0x00000003));
	if (iVar2 > 0x00000000)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0xCDC520E5E48E63D9(joaat("percent_hidden_packages"), iVar3, 0x00000001);
}

int func_42(int iParam0)
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

void func_43(var uParam0)
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
		if (func_54(uParam0, iVar0))
		{
			iVar1++;
			func_13((uParam0->f_2 + iVar0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_44(0x000000A8, 0x00000000);
	}
}

void func_44(int iParam0, int iParam1)
{
	if (iParam0 == 0x000000EB || iParam0 == 0x00000000)
	{
		return;
	}
	Global_1B416.f_21A0[iParam0] = 0x00000001;
	Global_1B416.f_21A0.f_EC[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

void func_45(var uParam0, int iParam1)
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
	if (func_54(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_13((uParam0->f_2 + iParam1), 0x00000001, 0xFFFFFFFF, 0x00000001);
		if (bLocal_40)
		{
		}
	}
	if (bLocal_40)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 0x000002C1)
	{
		func_44(0x000000A8, 0x00000000);
	}
}

void func_46(int iParam0, int iParam1, bool bParam2)
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

void func_47(int iParam0, int iParam1, bool bParam2)
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

void func_48(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, 0x00000000);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

int func_49(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0x00000000;
	}
	if (func_50(unk_0x16F2683693E537C9()))
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

int func_50(int iParam0)
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

void func_51(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (!uParam0->f_A)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_38(0x0000000D) && !func_38(0x0000000E))
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
							func_52(uParam0->f_3);
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

void func_52(vector3 vParam0)
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

bool func_53(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_54(var uParam0, int iParam1)
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

void func_55()
{
	float fVar0;
	
	switch (iLocal_66)
	{
		case 0x00000000:
			if (func_62())
			{
				if (func_50(iLocal_64))
				{
					func_61();
					unk_0xB078AFA7242F1F7B(iLocal_64, 0x00000000);
					iLocal_66 = 0x00000001;
					if (iLocal_49 == 0x00000002)
					{
						func_2(0x00000003);
					}
				}
			}
			else if (func_50(iLocal_64) && func_50(unk_0x16F2683693E537C9()))
			{
				if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
				{
					fVar0 = 500f;
				}
				else
				{
					fVar0 = 250f;
				}
				if (func_60(unk_0x16F2683693E537C9(), iLocal_64, 0x00000000) > fVar0)
				{
					func_59();
					if (iLocal_49 == 0x00000002)
					{
						func_2(0x00000003);
					}
				}
			}
			else
			{
				func_61();
				if (iLocal_49 == 0x00000002)
				{
					func_2(0x00000003);
				}
			}
			break;
		
		case 0x00000001:
			if (iLocal_49 == 0x00000002)
			{
				func_2(0x00000003);
			}
			if (!func_62())
			{
				if (func_50(iLocal_64))
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_65))
					{
						iLocal_65 = func_56(iLocal_64, 0x00000000, 0x00000000);
					}
					unk_0x56FDC9ADE35F7DB0(iLocal_64, 0x00000000, 0x00000001, 0x00000000);
					if (unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iLocal_64)))
					{
						if (!unk_0xE608C809F9416F00(iLocal_64))
						{
							unk_0xB078AFA7242F1F7B(iLocal_64, 0x00000001);
						}
					}
					iLocal_66 = 0x00000000;
				}
			}
			break;
	}
}

int func_56(int iParam0, bool bParam1, bool bParam2)
{
	return func_57(iParam0, !bParam1, bParam2);
}

int func_57(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_58(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_58(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_58(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59()
{
	func_61();
	if (func_50(iLocal_64))
	{
		if (unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(iLocal_64)))
		{
			unk_0xB078AFA7242F1F7B(iLocal_64, 0x00000000);
		}
		unk_0xD0C5FAC38659B26F(iLocal_64, 0x00000000);
		if (unk_0xAF6690C489CC6203(iLocal_64))
		{
			unk_0x046C362CF15F1935(&iLocal_64);
		}
	}
}

float func_60(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	else
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000000) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, bParam2);
}

void func_61()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_65))
	{
		unk_0x142CC44DB769B57E(&iLocal_65);
	}
}

int func_62()
{
	if (func_50(unk_0x16F2683693E537C9()))
	{
		if (func_50(iLocal_64))
		{
			if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_64, 0x00000000))
			{
				return 0x00000001;
			}
		}
		else if (func_63())
		{
			iLocal_64 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xC844350D5D58C99A(iLocal_64))
			{
				unk_0x73270B3C9CC833FD(iLocal_64, 0x00000001, 0x00000001);
				unk_0xD0C5FAC38659B26F(iLocal_64, 0x00000001);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_63()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			if (unk_0x134B62B726CEC8E6(iVar0) == joaat("dinghy") || unk_0x134B62B726CEC8E6(iVar0) == joaat("dinghy2"))
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

void func_64()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	if (func_24(&Local_42, &Local_48, vVar0, &iLocal_51))
	{
		vVar1 = { func_23(iLocal_51) };
		fVar2 = unk_0x0EB28750412C3A5A(vVar1, vVar0, 0x00000000);
		if (fVar2 > 200f)
		{
			func_66();
			if (!iLocal_61)
			{
				iLocal_61 = 0x00000001;
			}
			if (func_63())
			{
				if (!func_25(0x00000029))
				{
					func_20("DIVING_HELP1", 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
					func_19(0x00000029);
				}
				if (iLocal_51 != iLocal_54)
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_53))
					{
						unk_0x142CC44DB769B57E(&iLocal_53);
					}
				}
				if (!unk_0xE4EDC4B0E92C078B(iLocal_53))
				{
					iLocal_53 = unk_0x3F3860E60C44719E(vVar1, 200f);
					unk_0x7F010F50CE03A8AF(iLocal_53, 0x00000080);
					unk_0x61755AC17D8F538E(iLocal_53, 0x00000002);
					unk_0x54B31D18C3F36EB7(iLocal_53, 0x00000000);
					unk_0xDC5B2F9D0CCE3A10(iLocal_53, "B_WRE");
					unk_0xF2D30B8ACAF12A39(iLocal_53, 0x00000000);
					iLocal_54 = iLocal_51;
				}
			}
			else if (unk_0xE4EDC4B0E92C078B(iLocal_53))
			{
				unk_0x142CC44DB769B57E(&iLocal_53);
			}
		}
		else
		{
			if (func_63())
			{
				if (!func_25(0x0000002A))
				{
					func_20("DIVING_HELP2", 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
					func_19(0x0000002A);
				}
			}
			if (func_25(0x0000002A))
			{
				if (!func_25(0x0000002B))
				{
					if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()) && !unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
					{
						func_20("DIVING_HELP3", 0x00000001, 0x000007D0, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
						func_19(0x0000002B);
					}
				}
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_53))
			{
				unk_0x142CC44DB769B57E(&iLocal_53);
			}
			if (iLocal_51 != iLocal_54)
			{
				func_66();
				iLocal_54 = iLocal_51;
				iLocal_61 = 0x00000001;
			}
			if (Local_42.f_1.f_4 < Local_42.f_1.f_3)
			{
				if (iLocal_61)
				{
					fLocal_58 = 0f;
					fLocal_59 = fVar2;
					if (func_63())
					{
						fLocal_59 = func_65(fLocal_59, 20f, 200f);
					}
					else
					{
						fLocal_59 = func_65(fLocal_59, 10f, 200f);
					}
					fLocal_60 = (fLocal_59 * 0.025f);
					iLocal_61 = 0x00000000;
					if (func_63())
					{
						unk_0xEB819BD1E585E9CB(iLocal_63, "SINGLE_BLIP_FROM_BOAT", vVar1, "ABIGAIL_SONAR_SOUNDSET", 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						unk_0xEB819BD1E585E9CB(iLocal_63, "SCRIPT_TRIGGERED_FROM_PROP", vVar0, "ABIGAIL_SONAR_SOUNDSET", 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else
				{
					fLocal_58 = (fLocal_58 + fLocal_60);
					fLocal_58 = func_65(fLocal_58, 0f, fLocal_59);
					if (!unk_0xE4EDC4B0E92C078B(iLocal_55))
					{
						iLocal_55 = unk_0x3F3860E60C44719E(vVar1, fLocal_58);
						unk_0x7F010F50CE03A8AF(iLocal_55, 0x000000FF);
						unk_0x61755AC17D8F538E(iLocal_55, 0x00000004);
						unk_0x6ABCCE651368DB93(iLocal_55, 0x00000001);
						unk_0xBF72CE7FA6B07FFC(iLocal_55, 0x00000001);
						unk_0xF2D30B8ACAF12A39(iLocal_55, 0x00000000);
					}
					else
					{
						unk_0x516E63E474722206(iLocal_55, fLocal_58);
					}
					iVar3 = 0x00000000;
					if (func_63())
					{
						iVar3 = 0x00000000;
						while (iVar3 <= 0x00000003)
						{
							if (!unk_0xE4EDC4B0E92C078B(iLocal_56[iVar3]))
							{
								iLocal_56[iVar3] = unk_0x3F3860E60C44719E(vVar1, (fLocal_58 + fLocal_57[iVar3]));
								unk_0x7F010F50CE03A8AF(iLocal_56[iVar3], 0x000000FF);
								unk_0x61755AC17D8F538E(iLocal_56[iVar3], 0x00000004);
								unk_0x6ABCCE651368DB93(iLocal_56[iVar3], 0x00000001);
								unk_0xBF72CE7FA6B07FFC(iLocal_56[iVar3], 0x00000001);
								unk_0xF2D30B8ACAF12A39(iLocal_56[iVar3], 0x00000000);
							}
							else
							{
								unk_0x516E63E474722206(iLocal_56[iVar3], (fLocal_58 + fLocal_57[iVar3]));
							}
							iVar3++;
						}
					}
					else
					{
						iVar3 = 0x00000000;
						while (iVar3 <= 0x00000003)
						{
							if (unk_0xE4EDC4B0E92C078B(iLocal_56[iVar3]))
							{
								unk_0x516E63E474722206(iLocal_56[iVar3], fLocal_58);
							}
							iVar3++;
						}
					}
					if (fLocal_58 >= fLocal_59)
					{
						iLocal_61 = 0x00000001;
					}
				}
			}
			else
			{
				func_66();
			}
		}
	}
}

float func_65(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_66()
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(iLocal_55))
	{
		unk_0x142CC44DB769B57E(&iLocal_55);
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000003)
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_56[iVar0]))
		{
			unk_0x142CC44DB769B57E(&(iLocal_56[iVar0]));
		}
		iVar0++;
	}
}

void func_67()
{
	iLocal_52 = 0x00000000;
	if (func_62())
	{
		iLocal_66 = 0x00000001;
	}
	else
	{
		iLocal_66 = 0x00000000;
	}
	func_71();
	func_70(&Local_42, 0x00000005, joaat("prop_sub_chunk_01"), "DIVING_COLLECT");
	func_68(&Local_42, joaat("num_hidden_packages_4"), 0x0000034D, 0x0000001E);
	func_2(0x00000001);
	fLocal_57[0x00000000] = 0.25f;
	fLocal_57[0x00000001] = 0.5f;
	fLocal_57[0x00000002] = 0.75f;
	fLocal_57[0x00000003] = 1f;
}

void func_68(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_69(&(uParam0->f_1), iParam2, iParam3);
}

void func_69(int iParam0, var uParam1, var uParam2)
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
		if (func_29((iParam0->f_2 + iVar0), 0xFFFFFFFF, 0xFFFFFFFF))
		{
			iVar1++;
			func_47(iParam0, iVar0, 0x00000001);
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

void func_70(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_A = 0x00000000;
}

void func_71()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000001E)
	{
		Local_48[iVar0 /*11*/].f_3 = { func_23(iVar0) };
		Local_48[iVar0 /*11*/].f_A = 0x00000000;
		iVar0++;
	}
	Local_48[0x00000000 /*11*/].f_6 = { -16.4f, 78.53f, -146.67f };
	Local_48[0x00000001 /*11*/].f_6 = { 0f, 45f, 10f };
	Local_48[0x00000002 /*11*/].f_6 = { 0.72f, 65.2f, -50.26f };
	Local_48[0x00000003 /*11*/].f_6 = { 0f, 15f, -132.16f };
	Local_48[0x00000004 /*11*/].f_6 = { 166.37f, -40f, 168.81f };
	Local_48[0x00000005 /*11*/].f_6 = { 90f, 56.2f, 90f };
	Local_48[0x00000006 /*11*/].f_6 = { -20f, 0f, 89.95f };
	Local_48[0x00000007 /*11*/].f_6 = { 4.08f, 54.9f, -65.35f };
	Local_48[0x00000008 /*11*/].f_6 = { 174.15f, -58.2f, -144.66f };
	Local_48[0x00000009 /*11*/].f_6 = { -28.22f, 36.11f, -90.22f };
	Local_48[0x0000000A /*11*/].f_6 = { -5f, 44f, 65f };
	Local_48[0x0000000B /*11*/].f_6 = { 0f, -108f, 45.36f };
	Local_48[0x0000000C /*11*/].f_6 = { -10.9f, 43.12f, 131.52f };
	Local_48[0x0000000D /*11*/].f_6 = { 12.37f, 49.66f, 126.88f };
	Local_48[0x0000000E /*11*/].f_6 = { 4.35f, 10.22f, 27.51f };
	Local_48[0x0000000F /*11*/].f_6 = { 0f, 10f, 60.73f };
	Local_48[0x00000010 /*11*/].f_6 = { 150.56f, -78.67f, -174.35f };
	Local_48[0x00000011 /*11*/].f_6 = { 0f, 50f, 46.41f };
	Local_48[0x00000012 /*11*/].f_6 = { 6.26f, 44.65f, 8.88f };
	Local_48[0x00000013 /*11*/].f_6 = { 90f, 78.5f, 16.04f };
	Local_48[0x00000014 /*11*/].f_6 = { -1.36f, 6.53f, -70.94f };
	Local_48[0x00000015 /*11*/].f_6 = { -61.86f, 78.61f, 126.5f };
	Local_48[0x00000016 /*11*/].f_6 = { -10f, -80.71f, 69.7f };
	Local_48[0x00000017 /*11*/].f_6 = { -76.43f, -70.02f, 29.74f };
	Local_48[0x00000018 /*11*/].f_6 = { -28f, -70f, 107.53f };
	Local_48[0x00000019 /*11*/].f_6 = { 4.19f, 6.46f, 110.43f };
	Local_48[0x0000001A /*11*/].f_6 = { -3.19f, 60.6f, 25f };
	Local_48[0x0000001B /*11*/].f_6 = { 0f, -81.68f, -20.16f };
	Local_48[0x0000001C /*11*/].f_6 = { 7.39f, 44.52f, 19.65f };
	Local_48[0x0000001D /*11*/].f_6 = { 89.74f, 80.95f, 151.74f };
}

bool func_72(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

int func_73(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_74(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_74(int iParam0)
{
	return func_75(iParam0, Global_A1D7);
}

int func_75(int iParam0, int iParam1)
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

int func_76(int iParam0)
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

void func_77(bool bParam0)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(iLocal_53))
	{
		unk_0x142CC44DB769B57E(&iLocal_53);
	}
	func_66();
	if (!unk_0x8AA6DC470ABA63A2(iLocal_63))
	{
		unk_0x55D0A2DB35045A35(iLocal_63);
	}
	func_59();
	iVar0 = 0x00000000;
	while (iVar0 < Local_48)
	{
		func_48(&(Local_48[iVar0 /*11*/].f_2));
		func_37(&(Local_48[iVar0 /*11*/].f_1));
		Local_48[iVar0 /*11*/].f_1 = 0x00000000;
		iVar0++;
	}
	if (bParam0)
	{
		if (func_79(&(Local_42.f_1)) || func_17(0x0000006E) == 0x00000001)
		{
			func_78(0x0000001B);
		}
		unk_0x71199B01895C6202(Local_42.f_7);
		unk_0x10FAF14A60A0DBE1();
	}
	else
	{
		iLocal_49 = 0x00000000;
	}
}

int func_78(int iParam0)
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

bool func_79(var uParam0)
{
	if (uParam0->f_3 <= 0x00000000)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

