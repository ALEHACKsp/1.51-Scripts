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
	int iLocal_21 = 0;
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
	var uLocal_36 = 0;
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
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_21 = 0x00000003;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	iLocal_61 = 0x000003E8;
	iLocal_62 = 0x00000D05;
	fLocal_63 = 0f;
	bLocal_70 = 0x00000001;
	unk_0xB57F88F0123F4C38();
	if (unk_0x2EBF608FFE6CA406(0x00000020))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	iLocal_56 = unk_0x1C0640BA9A7327B3();
	iLocal_65 = 0x00000000;
	func_168(iLocal_66);
	func_167();
	func_165(&Global_4127F1);
	func_164(&Global_4127F1, 0x00000001);
	func_162(&iLocal_67);
	while (0x00000001)
	{
		if (Global_7929 != iLocal_65)
		{
			if (iLocal_65 == 0x00000000 && Global_7929 != 0x00000000)
			{
				if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
				{
					func_161("CHEAT_TROPHIE", 0xFFFFFFFF);
				}
				else
				{
					func_161("CHEAT_ACHIEVE", 0xFFFFFFFF);
				}
			}
			if (iLocal_65 != 0x00000000 && Global_7929 == 0x00000000)
			{
			}
		}
		iLocal_65 = Global_7929;
		if (!func_160(0x0000000E))
		{
			if (!unk_0x5E109EC687D2605A(0x00000018))
			{
				func_151();
			}
			if (!unk_0x5E109EC687D2605A(0x00000019))
			{
				func_149();
			}
			if (Global_7839)
			{
				if (!unk_0x5E109EC687D2605A(0x0000000C))
				{
					iVar0 = func_134(0x00000001);
					if (iVar0 > 0x00000000)
					{
						func_133(0x0000000C, iVar0);
						unk_0xCDC520E5E48E63D9(joaat("num_gold_medals_obtained"), iVar0, 0x00000001);
					}
					if (iVar0 >= 0x00000046)
					{
						func_127(0x0000000C, 0x00000001);
					}
				}
				Global_7839 = 0x00000000;
			}
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_66++;
					if (unk_0x1C0640BA9A7327B3() > iLocal_56)
					{
						func_116(0x00000000);
						iLocal_56 = (unk_0x1C0640BA9A7327B3() + iLocal_61);
					}
					if (unk_0x1C0640BA9A7327B3() > iLocal_57)
					{
						if (!unk_0x5E109EC687D2605A(0x0000000E) || iLocal_64 == 0x00000001)
						{
							if (func_115(0x00000035))
							{
								func_114();
							}
						}
						iLocal_57 = (unk_0x1C0640BA9A7327B3() + iLocal_62);
					}
				}
			}
			func_106(&Global_4127F1);
			func_1();
		}
		else
		{
			func_106(&Global_4127F1);
			func_1();
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	var uVar0;
	int iVar1;
	
	if (!func_105(&Global_4127F1))
	{
		return;
	}
	if (!Global_12B4E)
	{
		if (iLocal_72)
		{
			iLocal_72 = 0x00000000;
		}
		return;
	}
	if (!func_102())
	{
		return;
	}
	if (bLocal_70)
	{
		if (!func_100(0x00000003, 0xFFFFFFFF))
		{
			return;
		}
		if (!func_100(0x00000005, 0xFFFFFFFF))
		{
			return;
		}
	}
	if (iLocal_72)
	{
		return;
	}
	uVar0 = unk_0x1EC50DC4988494D6(&iVar1);
	if (iVar1 == 0xFFFFFFFF && iLocal_71 == 0x00000000)
	{
	}
	if (uVar0 && iVar1 == 0x00000000)
	{
		func_99();
		iLocal_72 = 0x00000001;
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	int iVar0;
	
	if (!unk_0x5E109EC687D2605A(0x00000021))
	{
		if (func_96())
		{
			func_127(0x00000021, 0x00000001);
		}
	}
	if (!unk_0x5E109EC687D2605A(0x0000001D))
	{
		if (func_92(&iLocal_67) > 5f)
		{
			func_19(unk_0x16F2683693E537C9());
			func_162(&iLocal_67);
		}
	}
	iVar0 = func_17(func_18(0xFFFFFFFF), 0x00000000);
	if (iVar0 >= 0x00000064)
	{
		if (!unk_0x5E109EC687D2605A(0x00000024))
		{
			func_127(0x00000024, 0x00000001);
		}
	}
	if (iVar0 >= 0x00000032)
	{
		if (!unk_0x5E109EC687D2605A(0x00000023))
		{
			func_127(0x00000023, 0x00000001);
		}
	}
	if (iVar0 >= 0x00000019)
	{
		if (!unk_0x5E109EC687D2605A(0x00000022))
		{
			func_127(0x00000022, 0x00000001);
		}
	}
	if (!unk_0x5E109EC687D2605A(0x00000025))
	{
		func_15(0x00000000);
	}
	if (!unk_0x5E109EC687D2605A(0x00000026))
	{
		if (func_14(joaat("mpply_total_custom_races_won")) >= 0x00000005)
		{
			func_127(0x00000026, 0x00000001);
		}
	}
	if (!unk_0x5E109EC687D2605A(0x00000027))
	{
		if (func_13(0x00000030, 0xFFFFFFFF) >= 0x0000000A)
		{
			func_127(0x00000027, 0x00000001);
		}
	}
	if (!unk_0x5E109EC687D2605A(0x00000028))
	{
		if (func_13(0x00000034, 0xFFFFFFFF) > 0x00000000)
		{
			func_127(0x00000028, 0x00000001);
		}
	}
	if (!unk_0x5E109EC687D2605A(0x00000029))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_8B1.f_12, 0x00000001))
		{
			func_127(0x00000029, 0x00000001);
		}
	}
	if (!unk_0x5E109EC687D2605A(0x0000002B))
	{
		if (func_12(0x000002F3, 0xFFFFFFFF, 0x00000000) >= 0x0000001E)
		{
			func_127(0x0000002B, 0x00000001);
		}
	}
	if (!unk_0x5E109EC687D2605A(0x0000002C))
	{
		if (func_13(0x0000000E, 0xFFFFFFFF) >= 0x00000014)
		{
			func_127(0x0000002C, 0x00000001);
		}
	}
	if (!unk_0x5E109EC687D2605A(0x0000002D))
	{
		func_10(0x00000000);
	}
	if (!unk_0x5E109EC687D2605A(0x00000030))
	{
		if (func_7(0x0000000B, 0xFFFFFFFF, 0xFFFFFFFF))
		{
			func_127(0x00000030, 0x00000001);
		}
	}
	if (!unk_0x5E109EC687D2605A(0x00000031))
	{
		func_3(0x00000000);
	}
}

int func_3(bool bParam0)
{
	if (!func_102())
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0x5E109EC687D2605A(0x00000031))
	{
		return 0x00000000;
	}
	if (bParam0 == 0x00000001)
	{
	}
	if (!func_4(0x00000064, 0xFFFFFFFF))
	{
		if (bParam0 == 0x00000001)
		{
		}
		return 0x00000000;
	}
	if (!func_4(0x00000066, 0xFFFFFFFF))
	{
		if (bParam0 == 0x00000001)
		{
		}
		return 0x00000000;
	}
	if (!func_4(0x00000065, 0xFFFFFFFF))
	{
		if (bParam0 == 0x00000001)
		{
		}
		return 0x00000000;
	}
	func_127(0x00000031, 0x00000001);
	return 0x00000001;
}

int func_4(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_6();
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

int func_6()
{
	return Global_1407E9;
}

int func_7(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_6();
	}
	iVar1 = func_9(iParam0, iParam1);
	uVar2 = func_8(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_8(int iParam0)
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

int func_9(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_6();
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

int func_10(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_102())
	{
		return 0x00000000;
	}
	if (unk_0x5E109EC687D2605A(0x0000002D))
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	iVar2 = func_12(0x000002F4, 0xFFFFFFFF, 0x00000000);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (func_11(iVar2, iVar0, bParam0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0x00000009)
	{
		func_127(0x0000002D, 0x00000001);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_11(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = unk_0xEAE0D21A50E6C7F4(iParam0, iParam1);
	if (!bParam2)
	{
		return bVar0;
	}
	switch (iParam1)
	{
		case 0x00000000:
			return bVar0;
		
		case 0x00000001:
			return bVar0;
		
		case 0x00000002:
			return bVar0;
		
		case 0x00000003:
			return bVar0;
		
		case 0x00000004:
			return bVar0;
		
		case 0x00000005:
			return bVar0;
		
		case 0x00000006:
			return bVar0;
		
		case 0x00000007:
			return bVar0;
		
		case 0x00000008:
			return bVar0;
		
		default:
	}
	return 0x00000000;
}

int func_12(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_5(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_13(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2772C0[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_14(int iParam0)
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

int func_15(bool bParam0)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(0x00000025))
	{
		return 0x00000000;
	}
	if (!func_102())
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (bParam0)
	{
		iVar0 = func_13(0x00000015, 0xFFFFFFFF);
		iVar0 = (iVar0 - func_13(0x0000003A, 0xFFFFFFFF));
		iVar0 = (iVar0 - func_13(0x00000039, 0xFFFFFFFF));
	}
	if (func_16(0x00000008, 0xFFFFFFFF))
	{
		func_127(0x00000025, 0x00000001);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_16(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_27742F[iParam0 /*3*/][func_5(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_17(int iParam0, int iParam1)
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

int func_18(int iParam0)
{
	return Global_152E1C[func_5(iParam0)];
}

void func_19(int iParam0)
{
	int iVar0;
	struct<222> Var1;
	
	Var1 = 0x0000002C;
	Var1.f_DD = 0x00000033;
	if (unk_0x5E109EC687D2605A(0x0000001D))
	{
		return;
	}
	func_88(iParam0, &Var1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Var1)
	{
		if (func_20(iParam0, Var1[iVar0 /*5*/]))
		{
			func_127(0x0000001D, 0x00000001);
			return;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Var1.f_DD)
	{
		if (func_20(iParam0, Var1.f_DD[iVar0 /*5*/]))
		{
			func_127(0x0000001D, 0x00000001);
			return;
		}
		iVar0++;
	}
}

int func_20(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<7> Var7;
	
	if (iParam1 == 0xFC508E33)
	{
		return 0x00000000;
	}
	if (iParam1 == joaat("weapon_knuckle"))
	{
		return 0x00000000;
	}
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0x00000000;
	}
	if (!unk_0x440C646F2F11A2A1(iParam0, iParam1, 0x00000000))
	{
		return 0x00000000;
	}
	iVar1 = func_87(iParam1, &uVar0);
	if ((((((((((((((((((((((iParam1 != joaat("weapon_pistol") && iParam1 != joaat("weapon_appistol")) && iParam1 != joaat("weapon_combatpistol")) && iParam1 != joaat("weapon_microsmg")) && iParam1 != joaat("weapon_smg")) && iParam1 != joaat("weapon_pumpshotgun")) && iParam1 != joaat("weapon_assaultshotgun")) && iParam1 != joaat("weapon_sawnoffshotgun")) && iParam1 != joaat("weapon_assaultrifle")) && iParam1 != joaat("weapon_carbinerifle")) && iParam1 != joaat("weapon_advancedrifle")) && iParam1 != joaat("weapon_sniperrifle")) && iParam1 != joaat("weapon_heavysniper")) && iParam1 != joaat("weapon_mg")) && iParam1 != joaat("weapon_combatmg")) && iParam1 != joaat("weapon_grenadelauncher")) && iParam1 != 0xDDE2A27C) && iParam1 != joaat("weapon_assaultsmg")) && iParam1 != 0x176898A6) && iParam1 != 0xC78D71B4) && iParam1 != joaat("weapon_bullpupshotgun")) && iParam1 != joaat("weapon_pistol50")) && (iVar1 == 0xFFFFFFFF || unk_0xA942498EEAA3EEAD(iVar1) < 0x00000003))
	{
		return 0x00000000;
	}
	iVar2 = 0x00000000;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0x00000000;
	iVar6 = 0x00000000;
	while (func_21(&Var7, iParam1, iVar6, 0x00000000))
	{
		if (Var7.f_4 == joaat("WAPClip"))
		{
			iVar3++;
		}
		if (Var7.f_4 == joaat("WAPScop"))
		{
			iVar2++;
		}
		if (unk_0xAFB8387ED2D7213E(iParam0, iParam1, Var7))
		{
			if (Var7.f_4 == joaat("WAPClip"))
			{
				iVar5 = Var7.f_6;
			}
			else if (Var7.f_4 == joaat("WAPScop"))
			{
				iVar4 = Var7.f_6;
			}
		}
		else if ((((Var7.f_4 == joaat("WAPClip") || Var7.f_4 == joaat("WAPScop")) || Var7.f_4 == joaat("WAPRail")) || Var7.f_4 == joaat("gun_root")) || Var7.f_4 == 0xFE1E3932)
		{
		}
		else
		{
			return 0x00000000;
		}
		iVar6++;
	}
	if (iVar2 > iVar4)
	{
		return 0x00000000;
	}
	if (iVar3 > iVar5)
	{
		return 0x00000000;
	}
	if (unk_0xFF4F1F8A37B1B330(iParam1) > 0x00000000 && unk_0x7DD9FDEA5DFB355E(iParam0, iParam1) == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_21(var uParam0, int iParam1, int iParam2, bool bParam3)
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
	var uVar15;
	struct<4> Var16;
	
	func_86(uParam0, 0x00000000, 0x3AF5BAC2, 0x00000000, 0x00000000);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			if (func_85(iLocal_54))
			{
				if (!func_75(0x60BD749C, joaat("weapon_pistol"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_86(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_86(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_86(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000003:
						func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_86(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			if (func_85(iLocal_54))
			{
				if (!func_75(0x60BD749C, joaat("weapon_smg"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_86(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_86(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_86(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_86(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_86(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
						break;
					
					case 0x00000003:
						func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_86(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000005:
						func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000006:
						func_86(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (func_85(iLocal_54))
			{
				if (!func_75(0x60BD749C, joaat("weapon_assaultrifle"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000008:
							func_86(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_86(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_86(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_86(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
						break;
					
					case 0x00000003:
						func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000005:
						func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000006:
						func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000007:
						func_86(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_85(iLocal_54))
			{
				if (!func_75(0x60BD749C, joaat("weapon_carbinerifle"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000008:
							func_86(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_86(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_86(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_86(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
						break;
					
					case 0x00000003:
						func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000005:
						func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000006:
						func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000007:
						func_86(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (func_85(iLocal_54))
			{
				if (!func_75(0x60BD749C, joaat("weapon_combatmg"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_86(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_86(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_86(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000003:
						func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_86(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000003:
					func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (func_85(iLocal_54))
			{
				if (!func_75(0x60BD749C, joaat("weapon_heavysniper"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 0x00000002, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_86(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_86(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000002:
						func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 0x00000002, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000001:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000001:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case 0x394F415C:
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, 0x8610343F, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, 0xD12ACA6F, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, 0xEF2C78C1, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, 0xFB70D853, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, 0xA7DD1E58, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, 0x63E0A098, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_86(uParam0, 0x00000000, joaat("WAPGrip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_86(uParam0, 0x9D65907A, joaat("WAPGrip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_86(uParam0, 0x00000000, joaat("WAPFlshLasr_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_86(uParam0, 0x00000000, joaat("WAPScop_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000B:
					func_86(uParam0, 0x420FD713, joaat("WAPScop_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000C:
					func_86(uParam0, 0x049B2945, joaat("WAPScop_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000D:
					func_86(uParam0, 0xC66B6542, joaat("WAPScop_2"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000E:
					func_86(uParam0, 0x00000000, joaat("WAPSupp_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000F:
					func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000010:
					func_86(uParam0, 0xB99402D4, joaat("WAPSupp_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000011:
					func_86(uParam0, 0xC867A07B, joaat("WAPSupp_2"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000012:
					func_86(uParam0, 0xDE11CBCF, joaat("WAPSupp_2"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000013:
					func_86(uParam0, 0xEC9068CC, joaat("WAPSupp_2"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000014:
					func_86(uParam0, 0x02E7957A, joaat("WAPSupp_2"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000015:
					func_86(uParam0, 0x347EF8AC, joaat("WAPSupp_2"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000016:
					func_86(uParam0, 0x4DB62ABE, joaat("WAPSupp_2"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000017:
					func_86(uParam0, 0x43A49D26, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x00000018:
					func_86(uParam0, 0x5646C26A, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x00000019:
					func_86(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000001A:
					func_86(uParam0, 0x911B24AF, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000001B:
					func_86(uParam0, 0x37E5444B, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000001C:
					func_86(uParam0, 0x538B7B97, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000001D:
					func_86(uParam0, 0x25789F72, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x0000001E:
					func_86(uParam0, 0xC5495F2D, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x0000001F:
					func_86(uParam0, 0xCF8B73B1, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000020:
					func_86(uParam0, 0xA9BB2811, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000021:
					func_86(uParam0, 0xFC674D54, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000022:
					func_86(uParam0, 0x7C7FCD9B, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000023:
					func_86(uParam0, 0xA5C38392, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000024:
					func_86(uParam0, 0xB9B15DB0, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0xFAD1F1C9:
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, 0x4C7A391E, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, 0x5DD5DBD5, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, 0x1757F566, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, 0x3D25C2A7, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, 0x255D5D57, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, 0x44032F11, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_86(uParam0, 0x00000000, joaat("WAPGrip_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_86(uParam0, 0x9D65907A, joaat("WAPGrip_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_86(uParam0, 0x00000000, joaat("WAPFlshLasr"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_86(uParam0, 0x00000000, joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000B:
					func_86(uParam0, 0x420FD713, joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000C:
					func_86(uParam0, 0x049B2945, joaat("WAPScop"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000D:
					func_86(uParam0, 0xC66B6542, joaat("WAPScop"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000E:
					func_86(uParam0, 0x00000000, joaat("WAPSupp_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000F:
					func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000010:
					func_86(uParam0, 0xB99402D4, joaat("WAPSupp_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000011:
					func_86(uParam0, 0xC867A07B, joaat("WAPSupp_2"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000012:
					func_86(uParam0, 0xDE11CBCF, joaat("WAPSupp_2"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000013:
					func_86(uParam0, 0xEC9068CC, joaat("WAPSupp_2"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000014:
					func_86(uParam0, 0x02E7957A, joaat("WAPSupp_2"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000015:
					func_86(uParam0, 0x347EF8AC, joaat("WAPSupp_2"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000016:
					func_86(uParam0, 0x4DB62ABE, joaat("WAPSupp_2"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000017:
					func_86(uParam0, 0x833637FF, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x00000018:
					func_86(uParam0, 0x8B3C480B, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x00000019:
					func_86(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000001A:
					func_86(uParam0, 0x4BDD6F16, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000001B:
					func_86(uParam0, 0x406A7908, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000001C:
					func_86(uParam0, 0x2F3856A4, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000001D:
					func_86(uParam0, 0xE50C424D, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x0000001E:
					func_86(uParam0, 0xD37D1F2F, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x0000001F:
					func_86(uParam0, 0x86268483, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000020:
					func_86(uParam0, 0xF420E076, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000021:
					func_86(uParam0, 0xAAE14DF8, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000022:
					func_86(uParam0, 0x9893A95D, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000023:
					func_86(uParam0, 0x6B13CD3E, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000024:
					func_86(uParam0, 0xDA55CD3F, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0xDBBD7280:
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, 0x492B257C, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, 0x17DF42E9, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, 0xF6649745, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, 0xC326BDBA, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, 0x29882423, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, 0x57EF1CC8, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_86(uParam0, 0x00000000, joaat("WAPGrip_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_86(uParam0, 0x9D65907A, joaat("WAPGrip_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_86(uParam0, 0x00000000, joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_86(uParam0, 0x420FD713, joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_86(uParam0, 0x3F3C8181, joaat("WAPScop"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000B:
					func_86(uParam0, 0xC66B6542, joaat("WAPScop"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000C:
					func_86(uParam0, 0x00000000, joaat("WAPSupp"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000D:
					func_86(uParam0, 0xB99402D4, joaat("WAPSupp"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000E:
					func_86(uParam0, 0xC867A07B, joaat("WAPSupp"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000F:
					func_86(uParam0, 0xDE11CBCF, joaat("WAPSupp"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000010:
					func_86(uParam0, 0xEC9068CC, joaat("WAPSupp"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000011:
					func_86(uParam0, 0x02E7957A, joaat("WAPSupp"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000012:
					func_86(uParam0, 0x347EF8AC, joaat("WAPSupp"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000013:
					func_86(uParam0, 0x4DB62ABE, joaat("WAPSupp"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000014:
					func_86(uParam0, 0xC34EF234, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x00000015:
					func_86(uParam0, 0xB5E2575B, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x00000016:
					func_86(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000017:
					func_86(uParam0, 0x4A768CB5, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000018:
					func_86(uParam0, 0xCCE06BBD, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000019:
					func_86(uParam0, 0xBE94CF26, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000001A:
					func_86(uParam0, 0x7609BE11, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x0000001B:
					func_86(uParam0, 0x48AF6351, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x0000001C:
					func_86(uParam0, 0x9186750A, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x0000001D:
					func_86(uParam0, 0x84555AA8, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x0000001E:
					func_86(uParam0, 0x1B4C088B, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x0000001F:
					func_86(uParam0, 0x0E046DFC, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000020:
					func_86(uParam0, 0x028B536E, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000021:
					func_86(uParam0, 0xD703C94D, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0x0A914799:
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, 0xFA1E1A28, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, 0x2CD8FF9D, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, 0x0EC0F617, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, 0xF835D6D4, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, 0x3BE948F6, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, 0x89EBDAA7, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_86(uParam0, 0x82C10383, joaat("WAPScop"), 0x00000001, 0x00000000);
					break;
				
				case 0x00000007:
					func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 0x00000002, 0x00000001);
					break;
				
				case 0x00000008:
					func_86(uParam0, 0xB68010B0, joaat("WAPScop"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000009:
					func_86(uParam0, 0x2E43DA41, joaat("WAPScop"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000A:
					func_86(uParam0, 0x00000000, joaat("WAPSupp"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000B:
					func_86(uParam0, 0xAC42DF71, joaat("WAPSupp"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000C:
					func_86(uParam0, 0x5F7DCE4D, joaat("WAPSupp"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000D:
					func_86(uParam0, 0x6927E1A1, joaat("WAPSupp"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000E:
					func_86(uParam0, 0x909630B7, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x0000000F:
					func_86(uParam0, 0x108AB09E, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x00000010:
					func_86(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000011:
					func_86(uParam0, 0xF8337D02, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000012:
					func_86(uParam0, 0xC5BEDD65, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000013:
					func_86(uParam0, 0xE9712475, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000014:
					func_86(uParam0, 0x13AA78E7, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000015:
					func_86(uParam0, 0x26591E50, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000016:
					func_86(uParam0, 0x302731EC, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000017:
					func_86(uParam0, 0xAC722A78, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000018:
					func_86(uParam0, 0xBEA4CEDD, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000019:
					func_86(uParam0, 0xCD776C82, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x0000001A:
					func_86(uParam0, 0xABC5ACC7, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x0000001B:
					func_86(uParam0, 0x6C32D2EB, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0xBFE256D4:
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, 0x94F42D62, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, 0x5ED6C128, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, 0x25CAAEAF, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, 0x2BBD7A3A, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, 0x85FEA109, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, 0x4F37DF2A, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_86(uParam0, 0x00000000, joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_86(uParam0, 0x8ED4BB70, joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_86(uParam0, 0x00000000, joaat("WAPFlshLasr"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_86(uParam0, 0x43FD595B, joaat("WAPFlshLasr"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_86(uParam0, 0x00000000, joaat("WAPSupp"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000B:
					func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000C:
					func_86(uParam0, 0x21E34793, joaat("WAPSupp"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000D:
					func_86(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000E:
					func_86(uParam0, 0x5C6C749C, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000F:
					func_86(uParam0, 0x15F7A390, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000010:
					func_86(uParam0, 0x968E24DB, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000011:
					func_86(uParam0, 0x017BFA99, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000012:
					func_86(uParam0, 0xF2685C72, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000013:
					func_86(uParam0, 0xDD2231E6, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000014:
					func_86(uParam0, 0xBB43EE76, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000015:
					func_86(uParam0, 0x4D901310, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000016:
					func_86(uParam0, 0x5F31B653, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000017:
					func_86(uParam0, 0x697E19A0, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000018:
					func_86(uParam0, 0x930CB951, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0x78A97CD0:
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, 0x4C24806E, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, 0xB9835B2E, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, 0x7FEA36EC, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, 0xD99222E5, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, 0x3A1BD6FA, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, 0x0B5A715F, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_86(uParam0, 0x00000000, joaat("WAPFlshLasr_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_86(uParam0, 0x00000000, joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_86(uParam0, 0x9FDB5652, joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_86(uParam0, 0xE502AB6B, joaat("WAPScop"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000B:
					func_86(uParam0, 0x3DECC7DA, joaat("WAPScop"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000C:
					func_86(uParam0, 0x00000000, joaat("WAPSupp_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000D:
					func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp_2"), 0x00000001, 0x00000000);
					break;
				
				case 0x0000000E:
					func_86(uParam0, 0xB99402D4, joaat("WAPSupp_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000F:
					func_86(uParam0, 0xC867A07B, joaat("WAPSupp_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000010:
					func_86(uParam0, 0xDE11CBCF, joaat("WAPSupp_2"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000011:
					func_86(uParam0, 0xEC9068CC, joaat("WAPSupp_2"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000012:
					func_86(uParam0, 0x02E7957A, joaat("WAPSupp_2"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000013:
					func_86(uParam0, 0x347EF8AC, joaat("WAPSupp_2"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000014:
					func_86(uParam0, 0x4DB62ABE, joaat("WAPSupp_2"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000015:
					func_86(uParam0, 0xD9103EE1, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x00000016:
					func_86(uParam0, 0xA564D78B, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x00000017:
					func_86(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000018:
					func_86(uParam0, 0xC4979067, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000019:
					func_86(uParam0, 0x3815A945, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000001A:
					func_86(uParam0, 0x4B4B4FB0, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000001B:
					func_86(uParam0, 0xEC729200, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x0000001C:
					func_86(uParam0, 0x48F64B22, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x0000001D:
					func_86(uParam0, 0x35992468, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x0000001E:
					func_86(uParam0, 0x24B782A5, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x0000001F:
					func_86(uParam0, 0xA2E67F01, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000020:
					func_86(uParam0, 0x2218FD68, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000021:
					func_86(uParam0, 0x45C5C3C5, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000022:
					func_86(uParam0, 0x399D558F, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (func_85(iLocal_54))
			{
				if (!func_75(0x60BD749C, joaat("weapon_pumpshotgun"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000001:
						func_86(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000002:
						func_86(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (func_85(iLocal_54))
			{
				if (!func_75(0x60BD749C, joaat("weapon_specialcarbine"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000008:
							func_86(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_86(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000008:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_86(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_86(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_86(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 0x00000003, 0x00000000);
						break;
					
					case 0x00000003:
						func_86(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000005:
						func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000006:
						func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000007:
						func_86(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (func_85(iLocal_54))
			{
				if (!func_75(0x60BD749C, joaat("weapon_snspistol"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_86(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_86(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_86(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (func_85(iLocal_54))
			{
				if (!func_75(0x60BD749C, joaat("weapon_marksmanrifle"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000004:
							func_86(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_86(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_86(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_86(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_86(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_86(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000003:
						func_86(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000005:
						func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000006:
						func_86(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_revolver"):
			if (func_85(iLocal_54))
			{
				if (!func_75(0x60BD749C, joaat("weapon_revolver"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 0x00000002, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_86(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_86(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000002:
						func_86(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 0x00000002, 0x00000000);
						break;
					}
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (func_85(iLocal_54))
			{
				if (!func_75(0x60BD749C, joaat("weapon_bullpuprifle"), 0xFFFFFFFF))
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_86(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0x00000000:
							func_86(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
							break;
						
						case 0x00000001:
							func_86(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
							break;
						
						case 0x00000002:
							func_86(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
							break;
						
						case 0x00000003:
							func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000004:
							func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000005:
							func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000006:
							func_86(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 0x00000001, 0x00000000);
							break;
						
						case 0x00000007:
							func_86(uParam0, 0x60BD749C, 0xFE1E3932, 0x00000001, 0x00000000);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0x00000000:
						func_86(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 0x00000001, 0x00000001);
						break;
					
					case 0x00000001:
						func_86(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 0x00000002, 0x00000000);
						break;
					
					case 0x00000002:
						func_86(uParam0, joaat("component_at_ar_flsh"), 0x38D1B563, 0x00000001, 0x00000000);
						break;
					
					case 0x00000003:
						func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000004:
						func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000005:
						func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 0x00000001, 0x00000000);
						break;
					
					case 0x00000006:
						func_86(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 0x00000001, 0x00000000);
						break;
					}
			}
			break;
		
		case 0x555AF99A:
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, 0xCD940141, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, 0x9F8A1BF5, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, 0xE9582927, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, 0x4E65B425, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, 0x3BE4465D, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, 0x00000000, joaat("WAPFlshLasr_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000006:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000007:
					func_86(uParam0, 0x00000000, joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000008:
					func_86(uParam0, 0x420FD713, joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000009:
					func_86(uParam0, 0x049B2945, joaat("WAPScop"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000A:
					func_86(uParam0, 0x3F3C8181, joaat("WAPScop"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000B:
					func_86(uParam0, 0x00000000, joaat("WAPSupp"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000C:
					func_86(uParam0, 0xAC42DF71, joaat("WAPSupp"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000D:
					func_86(uParam0, 0x5F7DCE4D, joaat("WAPSupp"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000E:
					func_86(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000F:
					func_86(uParam0, 0xE3BD9E44, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000010:
					func_86(uParam0, 0x17148F9B, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000011:
					func_86(uParam0, 0x24D22B16, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000012:
					func_86(uParam0, 0xF2BEC6F0, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000013:
					func_86(uParam0, 0x0085627D, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000014:
					func_86(uParam0, 0xDC2919C5, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000015:
					func_86(uParam0, 0xE184247B, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000016:
					func_86(uParam0, 0xD8EF9356, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000017:
					func_86(uParam0, 0xEF29BFCA, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000018:
					func_86(uParam0, 0x67AEB165, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000019:
					func_86(uParam0, 0x46411A1D, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0x969C3D67:
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, 0x16C69281, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, 0xDE1FA12C, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, 0x8765C68A, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, 0xDE011286, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, 0x51351635, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, 0x503DEA90, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_86(uParam0, 0x00000000, joaat("WAPFlshLasr"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_86(uParam0, 0x00000000, joaat("WAPScop_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_86(uParam0, 0x420FD713, joaat("WAPScop_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_86(uParam0, 0x049B2945, joaat("WAPScop_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000B:
					func_86(uParam0, 0xC66B6542, joaat("WAPScop_2"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000C:
					func_86(uParam0, 0x00000000, joaat("WAPSupp"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000D:
					func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000E:
					func_86(uParam0, 0xB99402D4, joaat("WAPSupp"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000F:
					func_86(uParam0, 0xC867A07B, joaat("WAPSupp"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000010:
					func_86(uParam0, 0xDE11CBCF, joaat("WAPSupp"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000011:
					func_86(uParam0, 0xEC9068CC, joaat("WAPSupp"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000012:
					func_86(uParam0, 0x02E7957A, joaat("WAPSupp"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000013:
					func_86(uParam0, 0x347EF8AC, joaat("WAPSupp"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000014:
					func_86(uParam0, 0x4DB62ABE, joaat("WAPSupp"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000015:
					func_86(uParam0, 0x00000000, joaat("WAPGrip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000016:
					func_86(uParam0, 0x9D65907A, joaat("WAPGrip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000017:
					func_86(uParam0, 0xE73653A9, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x00000018:
					func_86(uParam0, 0xF97F783B, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x00000019:
					func_86(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000001A:
					func_86(uParam0, 0xD40BB53B, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000001B:
					func_86(uParam0, 0x431B238B, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000001C:
					func_86(uParam0, 0x34CF86F4, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000001D:
					func_86(uParam0, 0xB4C306DD, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x0000001E:
					func_86(uParam0, 0xEE677A25, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x0000001F:
					func_86(uParam0, 0xDF90DC78, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000020:
					func_86(uParam0, 0x0A4C31EE, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000021:
					func_86(uParam0, 0x89CFB0F7, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000022:
					func_86(uParam0, 0x7B82145C, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000023:
					func_86(uParam0, 0x899CAF75, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000024:
					func_86(uParam0, 0x5218C819, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0x88374054:
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, 0x01466CE6, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, 0xCE8C0772, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, 0x902DA26E, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, 0xE6AD5F79, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, 0x8D107402, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, 0xC111EB26, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_86(uParam0, 0x00000000, joaat("WAPFlshLasr_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_86(uParam0, 0x4A4965F3, joaat("WAPFlshLasr_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_86(uParam0, 0x00000000, joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_86(uParam0, 0x47DE9258, joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_86(uParam0, 0x00000000, joaat("WAPSupp_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000B:
					func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000C:
					func_86(uParam0, 0xAA8283BF, joaat("WAPSupp_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000D:
					func_86(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000E:
					func_86(uParam0, 0x0F7BEEDD, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000F:
					func_86(uParam0, 0x8A612EF6, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000010:
					func_86(uParam0, 0x76FA8829, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000011:
					func_86(uParam0, 0xA93C6CAC, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000012:
					func_86(uParam0, 0x9C905354, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000013:
					func_86(uParam0, 0x4DFA3621, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000014:
					func_86(uParam0, 0x42E91FFF, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000015:
					func_86(uParam0, 0x54A8437D, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000016:
					func_86(uParam0, 0x068C2746, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000017:
					func_86(uParam0, 0x2366E467, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000018:
					func_86(uParam0, 0x441882E6, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0x6A6C02E0:
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, 0x94E12DCE, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, 0xE6CFD1AA, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, 0xD77A22D2, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, 0x6DD7A86E, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, 0xF46FD079, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, 0xE14A9ED3, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_86(uParam0, 0x00000000, joaat("WAPFlshLasr"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_86(uParam0, 0x420FD713, joaat("WAPScop_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000009:
					func_86(uParam0, 0xC66B6542, joaat("WAPScop_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000A:
					func_86(uParam0, 0x5B1C713C, joaat("WAPScop_2"), 0x00000004, 0x00000001);
					break;
				
				case 0x0000000B:
					func_86(uParam0, 0x00000000, joaat("WAPSupp_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000C:
					func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000D:
					func_86(uParam0, 0xB99402D4, joaat("WAPSupp_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000E:
					func_86(uParam0, 0xC867A07B, joaat("WAPSupp_2"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000F:
					func_86(uParam0, 0xDE11CBCF, joaat("WAPSupp_2"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000010:
					func_86(uParam0, 0xEC9068CC, joaat("WAPSupp_2"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000011:
					func_86(uParam0, 0x02E7957A, joaat("WAPSupp_2"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000012:
					func_86(uParam0, 0x347EF8AC, joaat("WAPSupp_2"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000013:
					func_86(uParam0, 0x4DB62ABE, joaat("WAPSupp_2"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000014:
					func_86(uParam0, 0x00000000, joaat("WAPGrip_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000015:
					func_86(uParam0, 0x9D65907A, joaat("WAPGrip_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000016:
					func_86(uParam0, 0x381B5D89, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x00000017:
					func_86(uParam0, 0x68373DDC, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x00000018:
					func_86(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000019:
					func_86(uParam0, 0x9094FBA0, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000001A:
					func_86(uParam0, 0x7320F4B2, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000001B:
					func_86(uParam0, 0x60CF500F, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000001C:
					func_86(uParam0, 0xFE668B3F, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x0000001D:
					func_86(uParam0, 0xF3757559, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x0000001E:
					func_86(uParam0, 0x193B40E8, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x0000001F:
					func_86(uParam0, 0x107D2F6C, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000020:
					func_86(uParam0, 0xC4E91841, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000021:
					func_86(uParam0, 0x9BB1C5D3, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000022:
					func_86(uParam0, 0x3B61040B, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000023:
					func_86(uParam0, 0xB7A316DA, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0xCB96392F:
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, 0xBA23D8BE, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, 0xC6D8E476, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, 0x00EFBF25, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, 0x10F42E8F, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, 0x0DC8BA3F, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, 0x00000000, joaat("WAPScop"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000006:
					func_86(uParam0, 0x420FD713, joaat("WAPScop"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000007:
					func_86(uParam0, 0x049B2945, joaat("WAPScop"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000008:
					func_86(uParam0, 0x00000000, joaat("WAPFlshLasr"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_86(uParam0, 0x00000000, joaat("WAPSupp"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000B:
					func_86(uParam0, 0x27077CCB, joaat("WAPSupp"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000C:
					func_86(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000D:
					func_86(uParam0, 0xC03FED9F, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000E:
					func_86(uParam0, 0x00B5DE24, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000F:
					func_86(uParam0, 0x0A7FF1B8, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000010:
					func_86(uParam0, 0xF2E24289, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000011:
					func_86(uParam0, 0x11317F27, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000012:
					func_86(uParam0, 0x17C30C42, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000013:
					func_86(uParam0, 0x257927AE, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000014:
					func_86(uParam0, 0x37304B1C, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000015:
					func_86(uParam0, 0x48DAEE71, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000016:
					func_86(uParam0, 0x20ED9B5B, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000017:
					func_86(uParam0, 0xD951E867, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0x84D6FAFD:
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, 0x018929DA, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, 0xEFB00628, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, 0x822060A9, joaat("WAPClip"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000003:
					func_86(uParam0, 0xA99CF95A, joaat("WAPClip"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000004:
					func_86(uParam0, 0xFAA7F5ED, joaat("WAPClip"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000005:
					func_86(uParam0, 0x43621710, joaat("WAPClip"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000006:
					func_86(uParam0, 0x00000000, joaat("WAPFlshLasr"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000007:
					func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000008:
					func_86(uParam0, 0x00000000, joaat("WAPScop_2"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000009:
					func_86(uParam0, 0x420FD713, joaat("WAPScop_2"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000000A:
					func_86(uParam0, 0xC7ADD105, joaat("WAPScop_2"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000000B:
					func_86(uParam0, 0x3F3C8181, joaat("WAPScop_2"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000000C:
					func_86(uParam0, 0x659AC11B, 0xB1CB4B19, 0x00000001, 0x00000001);
					break;
				
				case 0x0000000D:
					func_86(uParam0, 0x3BF26DC7, 0xB1CB4B19, 0x00000002, 0x00000000);
					break;
				
				case 0x0000000E:
					func_86(uParam0, 0x00000000, joaat("WAPSupp"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000000F:
					func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000010:
					func_86(uParam0, 0xB99402D4, joaat("WAPSupp"), 0x00000003, 0x00000000);
					break;
				
				case 0x00000011:
					func_86(uParam0, 0xC867A07B, joaat("WAPSupp"), 0x00000004, 0x00000000);
					break;
				
				case 0x00000012:
					func_86(uParam0, 0xDE11CBCF, joaat("WAPSupp"), 0x00000005, 0x00000000);
					break;
				
				case 0x00000013:
					func_86(uParam0, 0xEC9068CC, joaat("WAPSupp"), 0x00000006, 0x00000000);
					break;
				
				case 0x00000014:
					func_86(uParam0, 0x02E7957A, joaat("WAPSupp"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000015:
					func_86(uParam0, 0x347EF8AC, joaat("WAPSupp"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000016:
					func_86(uParam0, 0x4DB62ABE, joaat("WAPSupp"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000017:
					func_86(uParam0, 0x00000000, joaat("WAPGrip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000018:
					func_86(uParam0, 0x9D65907A, joaat("WAPGrip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000019:
					func_86(uParam0, 0x00000000, joaat("gun_root"), 0x00000001, 0x00000001);
					break;
				
				case 0x0000001A:
					func_86(uParam0, 0xAE4055B7, joaat("gun_root"), 0x00000002, 0x00000000);
					break;
				
				case 0x0000001B:
					func_86(uParam0, 0xB905ED6B, joaat("gun_root"), 0x00000003, 0x00000000);
					break;
				
				case 0x0000001C:
					func_86(uParam0, 0xA6C448E8, joaat("gun_root"), 0x00000004, 0x00000000);
					break;
				
				case 0x0000001D:
					func_86(uParam0, 0x9486246C, joaat("gun_root"), 0x00000005, 0x00000000);
					break;
				
				case 0x0000001E:
					func_86(uParam0, 0x8A390FD2, joaat("gun_root"), 0x00000006, 0x00000000);
					break;
				
				case 0x0000001F:
					func_86(uParam0, 0x02337FC5, joaat("gun_root"), 0x00000007, 0x00000000);
					break;
				
				case 0x00000020:
					func_86(uParam0, 0xEFFFDB5E, joaat("gun_root"), 0x00000008, 0x00000000);
					break;
				
				case 0x00000021:
					func_86(uParam0, 0xDDBDB6DA, joaat("gun_root"), 0x00000009, 0x00000000);
					break;
				
				case 0x00000022:
					func_86(uParam0, 0xCB631225, joaat("gun_root"), 0x0000000A, 0x00000000);
					break;
				
				case 0x00000023:
					func_86(uParam0, 0xA87D541E, joaat("gun_root"), 0x0000000B, 0x00000000);
					break;
				
				case 0x00000024:
					func_86(uParam0, 0xC5E9AE52, joaat("gun_root"), 0x0000000C, 0x00000000);
					break;
			}
			break;
		
		case 0xAF3696A1:
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, 0xD7DBF707, joaat("gun_root"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		case 0x2B5EF5EC:
			switch (iParam2)
			{
				case 0x00000000:
					func_86(uParam0, 0x54D41361, joaat("WAPClip"), 0x00000001, 0x00000001);
					break;
				
				case 0x00000001:
					func_86(uParam0, 0x81786CA9, joaat("WAPClip"), 0x00000002, 0x00000000);
					break;
				
				case 0x00000002:
					func_86(uParam0, 0x9307D6FA, joaat("WAPSupp"), 0x00000001, 0x00000000);
					break;
			}
			break;
		
		default:
			iVar12 = func_87(iParam1, &uVar15);
			if (iVar12 != 0xFFFFFFFF)
			{
				iVar13 = 0x00000000;
				while (iVar13 < unk_0xA942498EEAA3EEAD(iVar12))
				{
					if (unk_0x8B27EE8DAA2A39B3(iVar12, iVar13, &Var16))
					{
						if (!func_74(Var16.f_3))
						{
							if (Var16 == joaat("WAPClip") || Var16 == joaat("WAPClip_2"))
							{
								iVar1++;
							}
							else if (Var16 == joaat("WAPFlshLasr") || Var16 == joaat("WAPFlshLasr_2"))
							{
								iVar2++;
							}
							else if (Var16 == joaat("WAPScop") || Var16 == joaat("WAPScop_2"))
							{
								iVar3++;
							}
							else if (Var16 == joaat("WAPRail") || Var16 == joaat("WAPRail_2"))
							{
								iVar4++;
							}
							else if (Var16 == joaat("WAPGrip") || Var16 == joaat("WAPGrip_2"))
							{
								iVar5++;
							}
							else if (Var16 == joaat("WAPSupp") || Var16 == joaat("WAPSupp_2"))
							{
								iVar6++;
							}
							else if (Var16 == 0x67386F9B)
							{
								iVar7++;
							}
							else if (Var16 == joaat("gun_root"))
							{
								iVar8++;
							}
							else if (Var16 == 0xFE1E3932)
							{
								iVar9++;
							}
							else if (Var16 == 0xB1CB4B19)
							{
								iVar10++;
							}
							else
							{
								iVar11++;
							}
							if (iVar14 == iParam2)
							{
								if (Var16 == joaat("WAPClip") || Var16 == joaat("WAPClip_2"))
								{
									iVar0 = iVar1;
								}
								else if (Var16 == joaat("WAPFlshLasr") || Var16 == joaat("WAPFlshLasr_2"))
								{
									iVar0 = iVar2;
								}
								else if (Var16 == joaat("WAPScop") || Var16 == joaat("WAPScop_2"))
								{
									iVar0 = iVar3;
								}
								else if (Var16 == joaat("WAPRail") || Var16 == joaat("WAPRail_2"))
								{
									iVar0 = iVar4;
								}
								else if (Var16 == joaat("WAPGrip") || Var16 == joaat("WAPGrip_2"))
								{
									iVar0 = iVar5;
								}
								else if (Var16 == joaat("WAPSupp") || Var16 == joaat("WAPSupp_2"))
								{
									iVar0 = iVar6;
								}
								else if (Var16 == 0x67386F9B)
								{
									iVar0 = iVar7;
								}
								else if (Var16 == joaat("gun_root"))
								{
									iVar0 = iVar8;
								}
								else if (Var16 == 0xFE1E3932)
								{
									iVar0 = iVar9;
								}
								else if (Var16 == 0xB1CB4B19)
								{
									iVar0 = iVar10;
								}
								else
								{
									iVar0 = iVar11;
								}
								func_86(uParam0, Var16.f_3, Var16, iVar0, Var16.f_1);
							}
							iVar14++;
						}
					}
					iVar13++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_22(iParam1, *uParam0);
	}
	return uParam0->f_4 != 0x3AF5BAC2;
}

int func_22(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<6> Var5;
	int iVar6;
	int iVar7;
	var uVar8;
	struct<6> Var9;
	char* sVar10;
	struct<4> Var11;
	float fVar12;
	
	iVar0 = 0x00000000;
	fVar1 = 2.5f;
	if (!unk_0x8CD06866876216F2())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 0x00000078;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 0x0000009B;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000000BD;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 0x000002D9;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 0x000048A8;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 0x00000088;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 0x0000009F;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000000BD;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 0x000002DF;
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = 0x000038A4;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 0x00000091;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 0x000000A5;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000000B9;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 0x000002DA;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 0x00003DB8;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 0x00000078;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 0x00000089;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000000BE;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 0x00000225;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00000307;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 0x00003AFC;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 0x00000077;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 0x00000086;
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000000D2;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 0x00000225;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 0x0000032F;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 0x00004B64;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 0x00000078;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 0x00000081;
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x0000009F;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000000BD;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 0x00000235;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x0000032A;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 0x00003840;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 0x00000063;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 0x00000069;
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00000084;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x00000096;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 0x000001C2;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 0x0000032F;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 0x000045EC;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 0x0000006E;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 0x0000007C;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x0000009F;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 0x000001C2;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 0x0000032C;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 0x00004074;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 0x00000087;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 0x00000091;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 0x000001C2;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = 0x00003CF0;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 0x00000077;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 0x0000007E;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00000081;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 0x0000022F;
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = 0x000036B0;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000000BD;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 0x000003CF;
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = 0x00004204;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 0x00000081;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 0x0000008B;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00000096;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000000E1;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 0x00000383;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 0x0000022F;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0x000003CF;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00000398;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 0x000032C8;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 0x0000023F;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0x000003E7;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00000080;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000000B9;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 0x0000020D;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = 0xFFFFFFFF;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 0x0000006E;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 0x000025E4;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000008E3;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 0x00002A7B;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00003070;
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = 0x000044C0;
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0x00000000;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00001004;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000008FC;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x000030A2;
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0x00000000;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 0x0000251C;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000007D0;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00002FDA;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 0x00004E20;
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0x00000000;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 0x00003584;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 0x00000E1C;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000003FC;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 0x00001388;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x000006E0;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = 0x00004330;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 0x00000E60;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000002C6;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 0x000012C0;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 0x00002EE0;
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = 0x00001324;
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = 0x000015E0;
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = 0x0000157C;
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = 0x00001450;
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = 0x000011F8;
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = 0x0000125C;
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = 0x000012C0;
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = 0x000010CC;
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = 0x00000FA0;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0x0000006C;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = 0x000026DE;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x00000A0F;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 0x00002C56;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x000030D4;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x000010B3;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = 0x000040D8;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0x0000001D;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = 0x000023BE;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = 0x0000364C;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0x0000006C;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = 0x000026F7;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000009DD;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 0x00002D1E;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x000030D4;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = 0x00004650;
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = 0x00000E60;
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 0x000012E8;
						break;
				}
				break;
			
			default:
				iVar2 = func_87(iParam0, &uVar4);
				if (iVar2 != 0xFFFFFFFF)
				{
					iVar3 = 0x00000000;
					while (iVar3 < unk_0xA942498EEAA3EEAD(iVar2))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar2, iVar3, &Var5))
						{
							if (!func_74(Var5.f_3))
							{
								if (Var5.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_69(iParam1))
									{
										Var5.f_5 = 0xFFFFFFFF;
									}
									if (Var5.f_5 == 0xFFFFFFFF)
									{
										iVar0 = 0xFFFFFFFF;
									}
									else
									{
										iVar0 = Var5.f_5;
									}
									if (iParam0 == joaat("weapon_hammer"))
									{
										if (func_73() && (func_72() || func_71()))
										{
											iVar0 = 0x00000000;
										}
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 0x00000078;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 0x000023D7;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B45));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x0000068B;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F1));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 0x00002F12;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F2));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_40001.f_294C;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113F));
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_50EE;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 0x00000088;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = Global_40001.f_507F;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B46));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x00000721;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F3));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_5080;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F4));
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = Global_40001.f_2EB4;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113A));
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 0x00000091;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 0x000024B8;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B48));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000007B7;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F5));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 0x00002FA8;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F6));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_40001.f_294B;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1134));
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 0x00000078;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 0x0000246D;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B49));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x0000076C;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F9));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 0x00002A30;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FB));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00002F76;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FA));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_40001.f_294F;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113E));
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 0x00000077;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 0x00002503;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4A));
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = Global_40001.f_3EFF;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x00000802;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FC));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 0x00002A49;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FE));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 0x00002FDA;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FD));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_40001.f_294E;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1143));
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_50EF;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 0x00000078;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 0x0000254E;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4C));
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = Global_40001.f_3EFA;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00001068;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1106));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x0000084D;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1103));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 0x00002A62;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1105));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x0000300C;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1104));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_40001.f_2948;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1135));
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_50F1;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 0x00000063;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 0x0000262F;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4D));
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = Global_40001.f_3EF9;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x000010FE;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110E));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x0000092E;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110B));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 0x00002A94;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110D));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 0x000030A2;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110C));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_40001.f_294A;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1138));
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_50F2;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 0x0000006E;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 0x000026C5;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4F));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x00000979;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1110));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 0x00002AC6;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1112));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 0x000030D4;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1111));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_40001.f_2949;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1133));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 0x00000087;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 0x0000267A;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B50));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 0x00002AAD;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1113));
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = Global_40001.f_2EB5;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113D));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 0x00000077;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 0x00002710;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B51));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00001149;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1129));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 0x00002ADF;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_112A));
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = Global_40001.f_2EB6;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1139));
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_50F0;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000006D6;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1117));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 0x0000303E;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1118));
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = Global_40001.f_2EB1;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1141));
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_579D;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 0x00000081;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 0x00002599;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B53));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x000010B3;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111B));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x00000898;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111C));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 0x0000303E;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111D));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 0x00003070;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111E));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0x000030D4;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111F));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00002F12;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1120));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_40001.f_2951;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1144));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = 0xFFFFFFFF;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 0x00000063;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1121));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0x000030D4;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1122));
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_50F3;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00001194;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_112B));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000009C4;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1127));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 0x00002AF8;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1128));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = 0xFFFFFFFF;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 0x0000006E;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 0x000025E4;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4B));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000008E3;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FF));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 0x00002A7B;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1102));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00003070;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1100));
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = Global_40001.f_2EB2;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1101));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_40001.f_19C9;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_40001.f_1C0C;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = Global_40001.f_2EB3;
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_57A2;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_40001.f_1C11;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = Global_40001.f_3EFC;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_1C14;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_40001.f_1C10;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_40001.f_1C0E;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_1C13;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = Global_40001.f_2EB7;
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_579E;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_40001.f_1C12;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_40001.f_1C16;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_1C0F;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_40001.f_1C2A;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_40001.f_1C19;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_1C1C;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_1C17;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_40001.f_1C18;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_1C1A;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = Global_40001.f_2EB8;
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_57A1;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_40001.f_1DF4;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_1DF5;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_40001.f_20C8;
						break;
					
					case joaat("component_heavyshotgun_clip_03"):
						iVar0 = Global_40001.f_3F00;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_20C9;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_40001.f_20CA;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_20CB;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_40001.f_20CE;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_20CF;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_20D1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_20D2;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = Global_40001.f_20D3;
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_579F;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 0x00001004;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_391E));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 0x000008FC;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1119));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x000030A2;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111A));
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0x00000000;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 0x0000251C;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B47));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 0x000007D0;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F7));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 0x00002FDA;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F8));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_40001.f_294D;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1140));
						break;
				}
				if (func_73() && (func_72() || func_71()))
				{
					iVar0 = 0x00000000;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_40001.f_2950;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1142));
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = Global_40001.f_2A8D;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1147));
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = Global_40001.f_2A8E;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1148));
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = Global_40001.f_2A8F;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1149));
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = Global_40001.f_2A90;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114A));
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = Global_40001.f_2A91;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114B));
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = Global_40001.f_2A92;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114C));
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = Global_40001.f_2A93;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114D));
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = Global_40001.f_2A94;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114E));
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = Global_40001.f_2A95;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114F));
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = Global_40001.f_2AA6;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1151));
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = Global_40001.f_3EFE;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_2AA7;
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1152));
						break;
				}
				break;
			
			case joaat("weapon_switchblade"):
				switch (iParam1)
				{
					case joaat("component_switchblade_varmod_base"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_switchblade_varmod_var1"):
						iVar0 = Global_40001.f_3201;
						break;
					
					case joaat("component_switchblade_varmod_var2"):
						iVar0 = Global_40001.f_3202;
						break;
				}
				break;
			
			case joaat("weapon_revolver"):
				switch (iParam1)
				{
					case joaat("component_revolver_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_revolver_varmod_boss"):
						iVar0 = Global_40001.f_323B;
						break;
					
					case joaat("component_revolver_varmod_goon"):
						iVar0 = Global_40001.f_3200;
						break;
					
					case 0x60BD749C:
						iVar0 = Global_40001.f_57A0;
						break;
				}
				break;
			
			case joaat("weapon_compactrifle"):
				switch (iParam1)
				{
					case joaat("component_compactrifle_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_compactrifle_clip_02"):
						iVar0 = Global_40001.f_38D8;
						break;
					
					case joaat("component_compactrifle_clip_03"):
						iVar0 = Global_40001.f_3EFB;
						break;
				}
				break;
			
			case joaat("weapon_dbshotgun"):
				switch (iParam1)
				{
					case joaat("component_dbshotgun_clip_01"):
						iVar0 = 0x00000000;
						break;
				}
				break;
			
			case 0xBD248B55:
				switch (iParam1)
				{
					case 0x84C8B2D3:
						iVar0 = 0x00000000;
						break;
					
					case 0x937ED0B7:
						iVar0 = Global_40001.f_488A;
						break;
				}
				break;
			
			case joaat("weapon_combatpdw"):
				switch (iParam1)
				{
					case joaat("component_combatpdw_clip_01"):
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_combatpdw_clip_02"):
						iVar0 = Global_40001.f_507B;
						break;
					
					case joaat("component_combatpdw_clip_03"):
						iVar0 = Global_40001.f_3EFD;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_507C;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_40001.f_507E;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_40001.f_507D;
						break;
				}
				break;
			
			case 0x394F415C:
				switch (iParam1)
				{
					case 0x8610343F:
						iVar0 = 0x00000000;
						break;
					
					case 0xD12ACA6F:
						iVar0 = Global_40001.f_50F4;
						break;
					
					case 0xA7DD1E58:
						iVar0 = Global_40001.f_50F5;
						break;
					
					case 0x63E0A098:
						iVar0 = Global_40001.f_50F6;
						break;
					
					case 0xFB70D853:
						iVar0 = Global_40001.f_50F7;
						break;
					
					case 0xEF2C78C1:
						iVar0 = Global_40001.f_50F8;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_50F9;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_50FA;
						break;
					
					case 0x049B2945:
						iVar0 = Global_40001.f_50FB;
						break;
					
					case 0x3F3C8181:
						iVar0 = Global_40001.f_50FC;
						break;
					
					case 0xC66B6542:
						iVar0 = Global_40001.f_50FD;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_40001.f_50FE;
						break;
					
					case 0xB99402D4:
						iVar0 = Global_40001.f_50FF;
						break;
					
					case 0xC867A07B:
						iVar0 = Global_40001.f_5100;
						break;
					
					case 0xDE11CBCF:
						iVar0 = Global_40001.f_5101;
						break;
					
					case 0xEC9068CC:
						iVar0 = Global_40001.f_5102;
						break;
					
					case 0x02E7957A:
						iVar0 = Global_40001.f_5103;
						break;
					
					case 0x347EF8AC:
						iVar0 = Global_40001.f_5104;
						break;
					
					case 0x4DB62ABE:
						iVar0 = Global_40001.f_5105;
						break;
					
					case 0x9D65907A:
						iVar0 = Global_40001.f_5106;
						break;
					
					case 0x43A49D26:
						iVar0 = 0x00000000;
						break;
					
					case 0x5646C26A:
						iVar0 = Global_40001.f_5107;
						break;
					
					case 0x911B24AF:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x37E5444B:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x538B7B97:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0x25789F72:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0xC5495F2D:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0xCF8B73B1:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0xA9BB2811:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0xFC674D54:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x7C7FCD9B:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0xA5C38392:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0xB9B15DB0:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0xFAD1F1C9:
				switch (iParam1)
				{
					case 0x4C7A391E:
						iVar0 = 0x00000000;
						break;
					
					case 0x5DD5DBD5:
						iVar0 = Global_40001.f_5108;
						break;
					
					case 0x255D5D57:
						iVar0 = Global_40001.f_5109;
						break;
					
					case 0x44032F11:
						iVar0 = Global_40001.f_510A;
						break;
					
					case 0x3D25C2A7:
						iVar0 = Global_40001.f_510B;
						break;
					
					case 0x1757F566:
						iVar0 = Global_40001.f_510C;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_510D;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_510E;
						break;
					
					case 0x049B2945:
						iVar0 = Global_40001.f_510F;
						break;
					
					case 0x3F3C8181:
						iVar0 = Global_40001.f_5110;
						break;
					
					case 0xC66B6542:
						iVar0 = Global_40001.f_5111;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_5112;
						break;
					
					case 0xB99402D4:
						iVar0 = Global_40001.f_5113;
						break;
					
					case 0xC867A07B:
						iVar0 = Global_40001.f_5114;
						break;
					
					case 0xDE11CBCF:
						iVar0 = Global_40001.f_5115;
						break;
					
					case 0xEC9068CC:
						iVar0 = Global_40001.f_5116;
						break;
					
					case 0x02E7957A:
						iVar0 = Global_40001.f_5117;
						break;
					
					case 0x347EF8AC:
						iVar0 = Global_40001.f_5118;
						break;
					
					case 0x4DB62ABE:
						iVar0 = Global_40001.f_5119;
						break;
					
					case 0x9D65907A:
						iVar0 = Global_40001.f_511A;
						break;
					
					case 0x833637FF:
						iVar0 = 0x00000000;
						break;
					
					case 0x8B3C480B:
						iVar0 = Global_40001.f_511B;
						break;
					
					case 0x4BDD6F16:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x406A7908:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x2F3856A4:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0xE50C424D:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0xD37D1F2F:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x86268483:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0xF420E076:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0xAAE14DF8:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x9893A95D:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x6B13CD3E:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0xDA55CD3F:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0xDBBD7280:
				switch (iParam1)
				{
					case 0x492B257C:
						iVar0 = 0x00000000;
						break;
					
					case 0x17DF42E9:
						iVar0 = Global_40001.f_511C;
						break;
					
					case 0x29882423:
						iVar0 = Global_40001.f_511D;
						break;
					
					case 0x57EF1CC8:
						iVar0 = Global_40001.f_511E;
						break;
					
					case 0xC326BDBA:
						iVar0 = Global_40001.f_511F;
						break;
					
					case 0xF6649745:
						iVar0 = Global_40001.f_5120;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_5121;
						break;
					
					case 0x049B2945:
						iVar0 = Global_40001.f_5122;
						break;
					
					case 0x3F3C8181:
						iVar0 = Global_40001.f_5123;
						break;
					
					case 0xC66B6542:
						iVar0 = Global_40001.f_5124;
						break;
					
					case 0xB99402D4:
						iVar0 = Global_40001.f_5125;
						break;
					
					case 0xC867A07B:
						iVar0 = Global_40001.f_5126;
						break;
					
					case 0xDE11CBCF:
						iVar0 = Global_40001.f_5127;
						break;
					
					case 0xEC9068CC:
						iVar0 = Global_40001.f_5128;
						break;
					
					case 0x02E7957A:
						iVar0 = Global_40001.f_5129;
						break;
					
					case 0x347EF8AC:
						iVar0 = Global_40001.f_512A;
						break;
					
					case 0x4DB62ABE:
						iVar0 = Global_40001.f_512B;
						break;
					
					case 0x9D65907A:
						iVar0 = Global_40001.f_512C;
						break;
					
					case 0xC34EF234:
						iVar0 = 0x00000000;
						break;
					
					case 0xB5E2575B:
						iVar0 = Global_40001.f_512D;
						break;
					
					case 0x4A768CB5:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0xCCE06BBD:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0xBE94CF26:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0x7609BE11:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0x48AF6351:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x9186750A:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0x84555AA8:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0x1B4C088B:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x0E046DFC:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x028B536E:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0xD703C94D:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0x0A914799:
				switch (iParam1)
				{
					case 0xFA1E1A28:
						iVar0 = 0x00000000;
						break;
					
					case 0x2CD8FF9D:
						iVar0 = Global_40001.f_512E;
						break;
					
					case 0xF835D6D4:
						iVar0 = Global_40001.f_512F;
						break;
					
					case 0x3BE948F6:
						iVar0 = Global_40001.f_5131;
						break;
					
					case 0x0EC0F617:
						iVar0 = Global_40001.f_5132;
						break;
					
					case 0x89EBDAA7:
						iVar0 = Global_40001.f_5130;
						break;
					
					case 0x82C10383:
						iVar0 = Global_40001.f_5133;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0x00000000;
						break;
					
					case 0xB68010B0:
						iVar0 = Global_40001.f_5134;
						break;
					
					case 0x2E43DA41:
						iVar0 = Global_40001.f_5135;
						break;
					
					case 0xAC42DF71:
						iVar0 = Global_40001.f_5136;
						break;
					
					case 0x5F7DCE4D:
						iVar0 = Global_40001.f_5137;
						break;
					
					case 0x6927E1A1:
						iVar0 = Global_40001.f_5138;
						break;
					
					case 0x909630B7:
						iVar0 = 0x00000000;
						break;
					
					case 0x108AB09E:
						iVar0 = Global_40001.f_5139;
						break;
					
					case 0xF8337D02:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0xC5BEDD65:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0xE9712475:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0x13AA78E7:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0x26591E50:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x302731EC:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0xAC722A78:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0xBEA4CEDD:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0xCD776C82:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0xABC5ACC7:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0x6C32D2EB:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0xBFE256D4:
				switch (iParam1)
				{
					case 0x94F42D62:
						iVar0 = 0x00000000;
						break;
					
					case 0x5ED6C128:
						iVar0 = Global_40001.f_513A;
						break;
					
					case 0x85FEA109:
						iVar0 = Global_40001.f_513C;
						break;
					
					case 0x4F37DF2A:
						iVar0 = Global_40001.f_513B;
						break;
					
					case 0x2BBD7A3A:
						iVar0 = Global_40001.f_513D;
						break;
					
					case 0x25CAAEAF:
						iVar0 = Global_40001.f_513E;
						break;
					
					case 0x43FD595B:
						iVar0 = Global_40001.f_513F;
						break;
					
					case 0x8ED4BB70:
						iVar0 = Global_40001.f_5140;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_40001.f_5141;
						break;
					
					case 0x21E34793:
						iVar0 = Global_40001.f_5142;
						break;
					
					case 0x5C6C749C:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x15F7A390:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x968E24DB:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0x017BFA99:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0xF2685C72:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0xDD2231E6:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0xBB43EE76:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0x4D901310:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x5F31B653:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x697E19A0:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0x930CB951:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0x78A97CD0:
				switch (iParam1)
				{
					case 0x4C24806E:
						iVar0 = 0x00000000;
						break;
					
					case 0xB9835B2E:
						iVar0 = Global_40001.f_5143;
						break;
					
					case 0x3A1BD6FA:
						iVar0 = Global_40001.f_5145;
						break;
					
					case 0x0B5A715F:
						iVar0 = Global_40001.f_5144;
						break;
					
					case 0xD99222E5:
						iVar0 = Global_40001.f_5146;
						break;
					
					case 0x7FEA36EC:
						iVar0 = Global_40001.f_5147;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_5148;
						break;
					
					case 0x9FDB5652:
						iVar0 = Global_40001.f_5149;
						break;
					
					case 0xE502AB6B:
						iVar0 = Global_40001.f_514A;
						break;
					
					case 0x3DECC7DA:
						iVar0 = Global_40001.f_514B;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_40001.f_514C;
						break;
					
					case 0xB99402D4:
						iVar0 = Global_40001.f_514D;
						break;
					
					case 0xC867A07B:
						iVar0 = Global_40001.f_514E;
						break;
					
					case 0xDE11CBCF:
						iVar0 = Global_40001.f_514F;
						break;
					
					case 0xEC9068CC:
						iVar0 = Global_40001.f_5150;
						break;
					
					case 0x02E7957A:
						iVar0 = Global_40001.f_5151;
						break;
					
					case 0x347EF8AC:
						iVar0 = Global_40001.f_5152;
						break;
					
					case 0x4DB62ABE:
						iVar0 = Global_40001.f_5153;
						break;
					
					case 0xD9103EE1:
						iVar0 = 0x00000000;
						break;
					
					case 0xA564D78B:
						iVar0 = Global_40001.f_5154;
						break;
					
					case 0xC4979067:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x3815A945:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x4B4B4FB0:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0xEC729200:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0x48F64B22:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x35992468:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0x24B782A5:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0xA2E67F01:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x2218FD68:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x45C5C3C5:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0x399D558F:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0x555AF99A:
				switch (iParam1)
				{
					case 0xCD940141:
						iVar0 = 0x00000000;
						break;
					
					case 0x4E65B425:
						iVar0 = Global_40001.f_57BD;
						break;
					
					case 0x3BE4465D:
						iVar0 = Global_40001.f_57BE;
						break;
					
					case 0xE9582927:
						iVar0 = Global_40001.f_57BC;
						break;
					
					case 0x9F8A1BF5:
						iVar0 = Global_40001.f_57BB;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_57D8;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_57D9;
						break;
					
					case 0x049B2945:
						iVar0 = Global_40001.f_57DA;
						break;
					
					case 0x3F3C8181:
						iVar0 = Global_40001.f_57DB;
						break;
					
					case 0xAC42DF71:
						iVar0 = Global_40001.f_57DC;
						break;
					
					case 0x5F7DCE4D:
						iVar0 = Global_40001.f_57DD;
						break;
					
					case 0xE3BD9E44:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x17148F9B:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x24D22B16:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0xF2BEC6F0:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0x0085627D:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0xDC2919C5:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0xE184247B:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0xD8EF9356:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0xEF29BFCA:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x67AEB165:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0x46411A1D:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0x969C3D67:
				switch (iParam1)
				{
					case 0x16C69281:
						iVar0 = 0x00000000;
						break;
					
					case 0xDE1FA12C:
						iVar0 = Global_40001.f_57BF;
						break;
					
					case 0x51351635:
						iVar0 = Global_40001.f_57C3;
						break;
					
					case 0x503DEA90:
						iVar0 = Global_40001.f_57C1;
						break;
					
					case 0xDE011286:
						iVar0 = Global_40001.f_57C2;
						break;
					
					case 0x8765C68A:
						iVar0 = Global_40001.f_57C0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_57DE;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_57DF;
						break;
					
					case 0x049B2945:
						iVar0 = Global_40001.f_57E0;
						break;
					
					case 0xC66B6542:
						iVar0 = Global_40001.f_57E1;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_40001.f_57E2;
						break;
					
					case 0xB99402D4:
						iVar0 = Global_40001.f_57E3;
						break;
					
					case 0xC867A07B:
						iVar0 = Global_40001.f_57E4;
						break;
					
					case 0xDE11CBCF:
						iVar0 = Global_40001.f_57E5;
						break;
					
					case 0xEC9068CC:
						iVar0 = Global_40001.f_57E6;
						break;
					
					case 0x02E7957A:
						iVar0 = Global_40001.f_57E7;
						break;
					
					case 0x347EF8AC:
						iVar0 = Global_40001.f_57E8;
						break;
					
					case 0x4DB62ABE:
						iVar0 = Global_40001.f_57E9;
						break;
					
					case 0x9D65907A:
						iVar0 = Global_40001.f_57EA;
						break;
					
					case 0xE73653A9:
						iVar0 = 0x00000000;
						break;
					
					case 0xF97F783B:
						iVar0 = Global_40001.f_57EB;
						break;
					
					case 0xD40BB53B:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x431B238B:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x34CF86F4:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0xB4C306DD:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0xEE677A25:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0xDF90DC78:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0x0A4C31EE:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0x89CFB0F7:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x7B82145C:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x899CAF75:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0x5218C819:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0x88374054:
				switch (iParam1)
				{
					case 0x01466CE6:
						iVar0 = 0x00000000;
						break;
					
					case 0xCE8C0772:
						iVar0 = Global_40001.f_5B4E;
						break;
					
					case 0xC111EB26:
						iVar0 = Global_40001.f_57D3;
						break;
					
					case 0x8D107402:
						iVar0 = Global_40001.f_57D5;
						break;
					
					case 0xE6AD5F79:
						iVar0 = Global_40001.f_57D4;
						break;
					
					case 0x902DA26E:
						iVar0 = Global_40001.f_57D2;
						break;
					
					case 0x4A4965F3:
						iVar0 = Global_40001.f_580B;
						break;
					
					case 0x47DE9258:
						iVar0 = Global_40001.f_580C;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_40001.f_580D;
						break;
					
					case 0xAA8283BF:
						iVar0 = Global_40001.f_580E;
						break;
					
					case 0x0F7BEEDD:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x8A612EF6:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x76FA8829:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0xA93C6CAC:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0x9C905354:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x4DFA3621:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0x42E91FFF:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0x54A8437D:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x068C2746:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x2366E467:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0x441882E6:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0x6A6C02E0:
				switch (iParam1)
				{
					case 0x94E12DCE:
						iVar0 = 0x00000000;
						break;
					
					case 0xE6CFD1AA:
						iVar0 = Global_40001.f_57C4;
						break;
					
					case 0xF46FD079:
						iVar0 = Global_40001.f_57C8;
						break;
					
					case 0xE14A9ED3:
						iVar0 = Global_40001.f_57C6;
						break;
					
					case 0x6DD7A86E:
						iVar0 = Global_40001.f_57C7;
						break;
					
					case 0xD77A22D2:
						iVar0 = Global_40001.f_57C5;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_57EC;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_57ED;
						break;
					
					case 0xC66B6542:
						iVar0 = Global_40001.f_57EE;
						break;
					
					case 0x5B1C713C:
						iVar0 = 0x00000000;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_57EF;
						break;
					
					case 0xB99402D4:
						iVar0 = Global_40001.f_57F0;
						break;
					
					case 0xC867A07B:
						iVar0 = Global_40001.f_57F1;
						break;
					
					case 0xDE11CBCF:
						iVar0 = Global_40001.f_57F2;
						break;
					
					case 0xEC9068CC:
						iVar0 = Global_40001.f_57F3;
						break;
					
					case 0x02E7957A:
						iVar0 = Global_40001.f_57F4;
						break;
					
					case 0x347EF8AC:
						iVar0 = Global_40001.f_57F5;
						break;
					
					case 0x4DB62ABE:
						iVar0 = Global_40001.f_57F6;
						break;
					
					case 0x9D65907A:
						iVar0 = Global_40001.f_57F7;
						break;
					
					case 0x381B5D89:
						iVar0 = 0x00000000;
						break;
					
					case 0x68373DDC:
						iVar0 = Global_40001.f_57F8;
						break;
					
					case 0x9094FBA0:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x7320F4B2:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x60CF500F:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0xFE668B3F:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0xF3757559:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x193B40E8:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0x107D2F6C:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0xC4E91841:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x9BB1C5D3:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x3B61040B:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0xB7A316DA:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0xCB96392F:
				switch (iParam1)
				{
					case 0xBA23D8BE:
						iVar0 = 0x00000000;
						break;
					
					case 0xC6D8E476:
						iVar0 = Global_40001.f_57C9;
						break;
					
					case 0x0DC8BA3F:
						iVar0 = Global_40001.f_57CA;
						break;
					
					case 0x10F42E8F:
						iVar0 = Global_40001.f_57CC;
						break;
					
					case 0x00EFBF25:
						iVar0 = Global_40001.f_57CB;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_57F9;
						break;
					
					case 0x049B2945:
						iVar0 = Global_40001.f_57FA;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_40001.f_57FB;
						break;
					
					case 0x27077CCB:
						iVar0 = Global_40001.f_57FC;
						break;
					
					case 0xC03FED9F:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0x00B5DE24:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0x0A7FF1B8:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0xF2E24289:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0x11317F27:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x17C30C42:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0x257927AE:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0x37304B1C:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0x48DAEE71:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0x20ED9B5B:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0xD951E867:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0x84D6FAFD:
				switch (iParam1)
				{
					case 0x018929DA:
						iVar0 = 0x00000000;
						break;
					
					case 0xEFB00628:
						iVar0 = Global_40001.f_57CD;
						break;
					
					case 0xFAA7F5ED:
						iVar0 = Global_40001.f_57D1;
						break;
					
					case 0x43621710:
						iVar0 = Global_40001.f_57CF;
						break;
					
					case 0xA99CF95A:
						iVar0 = Global_40001.f_57D0;
						break;
					
					case 0x822060A9:
						iVar0 = Global_40001.f_57CE;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_40001.f_57FD;
						break;
					
					case 0x420FD713:
						iVar0 = Global_40001.f_57FE;
						break;
					
					case 0xC7ADD105:
						iVar0 = Global_40001.f_57FF;
						break;
					
					case 0x3F3C8181:
						iVar0 = Global_40001.f_5800;
						break;
					
					case 0x659AC11B:
						iVar0 = 0x00000000;
						break;
					
					case 0x3BF26DC7:
						iVar0 = Global_40001.f_580A;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_40001.f_5801;
						break;
					
					case 0xB99402D4:
						iVar0 = Global_40001.f_5802;
						break;
					
					case 0xC867A07B:
						iVar0 = Global_40001.f_5803;
						break;
					
					case 0xDE11CBCF:
						iVar0 = Global_40001.f_5804;
						break;
					
					case 0xEC9068CC:
						iVar0 = Global_40001.f_5805;
						break;
					
					case 0x02E7957A:
						iVar0 = Global_40001.f_5806;
						break;
					
					case 0x347EF8AC:
						iVar0 = Global_40001.f_5807;
						break;
					
					case 0x4DB62ABE:
						iVar0 = Global_40001.f_5808;
						break;
					
					case 0x9D65907A:
						iVar0 = Global_40001.f_5809;
						break;
					
					case 0xAE4055B7:
						iVar0 = Global_40001.f_5174;
						break;
					
					case 0xB905ED6B:
						iVar0 = Global_40001.f_5175;
						break;
					
					case 0xA6C448E8:
						iVar0 = Global_40001.f_5176;
						break;
					
					case 0x9486246C:
						iVar0 = Global_40001.f_5177;
						break;
					
					case 0x8A390FD2:
						iVar0 = Global_40001.f_5178;
						break;
					
					case 0x02337FC5:
						iVar0 = Global_40001.f_5179;
						break;
					
					case 0xEFFFDB5E:
						iVar0 = Global_40001.f_517A;
						break;
					
					case 0xDDBDB6DA:
						iVar0 = Global_40001.f_517B;
						break;
					
					case 0xCB631225:
						iVar0 = Global_40001.f_517C;
						break;
					
					case 0xA87D541E:
						iVar0 = Global_40001.f_517D;
						break;
					
					case 0xC5E9AE52:
						iVar0 = Global_40001.f_517E;
						break;
				}
				break;
			
			case 0xAF3696A1:
				switch (iParam1)
				{
					case 0xD7DBF707:
						iVar0 = 0x00000000;
						break;
				}
				break;
			
			case 0x2B5EF5EC:
				switch (iParam1)
				{
					case 0x54D41361:
						iVar0 = 0x00000000;
						break;
					
					case 0x81786CA9:
						iVar0 = Global_40001.f_6D01;
						break;
					
					case 0x9307D6FA:
						iVar0 = Global_40001.f_6D02;
						break;
				}
				break;
			
			default:
				iVar6 = func_87(iParam0, &uVar8);
				if (iVar6 != 0xFFFFFFFF)
				{
					iVar7 = 0x00000000;
					while (iVar7 < unk_0xA942498EEAA3EEAD(iVar6))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar6, iVar7, &Var9))
						{
							if (!func_74(Var9.f_3))
							{
								if (Var9.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (Var9.f_5 == 0xFFFFFFFF)
									{
										iVar0 = 0xFFFFFFFF;
									}
									else
									{
										iVar0 = Var9.f_5;
									}
								}
							}
						}
						iVar7++;
					}
				}
				break;
			}
	}
	if (unk_0x8CD06866876216F2() && func_67())
	{
		StringCopy(&Var11, func_65(iParam1, iParam0), 16);
		func_61(&sVar10, Var11, unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()), 0x00000003, 0x00000001, func_63(iParam0), func_62(iParam0), 0xFFFFFFFF, 0x00000000, 0x00000000);
		if (unk_0x437ABF4F514F6471(&sVar10))
		{
			iVar0 = unk_0xD7F319992681CCB6(unk_0x12AB0310C2281427(&sVar10), 0x63A336E1, 0x00000001);
		}
	}
	if (iVar0 > 0x00000000)
	{
		fVar12 = func_23(iParam0, &iVar0, fVar1);
		if (fVar12 != 1f)
		{
		}
	}
	return iVar0;
}

float func_23(int iParam0, int iParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (unk_0x8CD06866876216F2() && func_67())
	{
		return 1f;
	}
	if (!unk_0x8CD06866876216F2())
	{
		*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
	}
	if (!Global_12B4E)
	{
		if (*iParam1 != 0x00000000)
		{
			iVar2 = func_52(iParam0);
			if (iVar2 == 0x00000003)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 0x00000002)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 0x00000001)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_53 == 0x00000001)
	{
		if (unk_0x8CD06866876216F2())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_40001.f_4D));
			fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_40001.f_7A) / 100f));
		}
	}
	if (iLocal_53 == 0x00000000)
	{
		if (unk_0x8CD06866876216F2())
		{
			*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_40001.f_4D));
			if (func_24())
			{
				fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_40001.f_7A) / 100f));
				iLocal_53 = 0x00000001;
			}
			else
			{
				iLocal_53 = 0xFFFFFFFF;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
	return fVar0;
}

int func_24()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return 0x00000000;
	}
	if (func_102())
	{
		if (func_27())
		{
			iVar0 = func_26();
			iVar1 = func_25();
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_40001.f_79) && iVar0 >= 0x00000008)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_25()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_152D91);
	iVar0 = (iVar0 + Global_152D94);
	return iVar0;
}

int func_26()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_152D92);
	iVar0 = (iVar0 + Global_152D93);
	iVar0 = (iVar0 + Global_152D91);
	iVar0 = (iVar0 + Global_152D94);
	iVar0 = (iVar0 + Global_152D96);
	iVar0 = (iVar0 + Global_152D95);
	iVar0 = (iVar0 + func_14(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_14(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_14(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_14(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_14(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_27()
{
	struct<7> Var0;
	struct<7> Var1;
	
	unk_0xA9A9632F6E019049(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var1 = { func_51(joaat("mpply_started_mp")) };
	if (func_28(Var1, Var0, 0x00000007))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_28(struct<7> Param0, struct<7> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_49(Param1);
	iVar1 = func_39(Param0, iParam2);
	if (iVar1 == 0xFFFFFFF1)
	{
		return 0x00000000;
	}
	if (func_29(iVar0, iVar1) == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_37(iParam1) || !func_37(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_35(iParam0);
	iVar1 = func_35(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_34(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_33(iParam0);
	iVar1 = func_33(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_32(iParam0);
	iVar1 = func_32(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_31(iParam0);
	iVar1 = func_31(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_30(iParam0);
	iVar1 = func_30(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_30(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_31(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_32(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_33(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_34(int iParam0)
{
	return iParam0 & 0x0000000F;
}

var func_35(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_36(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_36(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == 0xFFFFFFF1)
	{
		return 0x00000000;
	}
	iVar0 = func_30(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_31(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_32(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_35(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_34(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_33(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_38(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_38(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000)
	{
		iParam1 = 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000002:
		case 0x00000004:
		case 0x00000006:
		case 0x00000007:
		case 0x00000009:
		case 0x0000000B:
			return 0x0000001F;
			break;
		
		case 0x00000003:
		case 0x00000005:
		case 0x00000008:
		case 0x0000000A:
			return 0x0000001E;
			break;
		
		case 0x00000001:
			if ((iParam1 % 0x00000004) == 0x00000000)
			{
				if ((iParam1 % 0x00000064) != 0x00000000)
				{
					return 0x0000001D;
				}
				else if ((iParam1 % 0x00000190) == 0x00000000)
				{
					return 0x0000001D;
				}
			}
			return 0x0000001C;
			break;
	}
	return 0x0000001E;
}

var func_39(struct<7> Param0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_48(Param0) == 0x00000000)
	{
		uVar0 = func_49(Param0);
		uVar1 = uVar0;
		func_40(&uVar1, 0x00000000, 0x00000000, 0x00000000, iParam1, 0x00000000, 0x00000000);
		if (iParam1 == 0x00000000)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_35(*uParam0);
	iVar1 = func_34(*uParam0);
	iVar2 = func_33(*uParam0);
	iVar3 = func_32(*uParam0);
	iVar4 = func_31(*uParam0);
	iVar5 = func_30(*uParam0);
	if (((((iParam6 == 0x00000000 && iParam5 == 0x00000000) && iParam4 == 0x00000000) && iParam3 == 0x00000000) && iParam2 == 0x00000000) && iParam1 == 0x00000000)
	{
		return;
	}
	if (iParam1 < 0x00000000)
	{
		return;
	}
	if (iParam2 < 0x00000000)
	{
		return;
	}
	if (iParam3 < 0x00000000)
	{
		return;
	}
	if (iParam4 < 0x00000000)
	{
		return;
	}
	if (iParam5 < 0x00000000)
	{
		return;
	}
	if (iParam6 < 0x00000000)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 0x0000003C)
	{
		iParam2++;
		iVar5 = (iVar5 - 0x0000003C);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 0x0000003C)
	{
		iParam3++;
		iVar4 = (iVar4 - 0x0000003C);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 0x00000018)
	{
		iParam4++;
		iVar3 = (iVar3 - 0x00000018);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_38(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_38(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_41(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_47(uParam0, iParam1);
	func_46(uParam0, iParam2);
	func_45(uParam0, iParam3);
	func_44(uParam0, iParam5);
	func_43(uParam0, iParam4);
	func_42(uParam0, iParam6);
}

void func_42(var uParam0, int iParam1)
{
	if (iParam1 <= 0x00000000)
	{
		return;
	}
	if (iParam1 > 0x000007FB || iParam1 < 0x000007BB)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x7C000000);
	if (iParam1 < 0x000007DB)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((0x000007DB - iParam1), 0x0000001A));
		*uParam0 |= 0x80000000;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 0x000007DB), 0x0000001A));
		*uParam0 = (*uParam0 - *uParam0 & 0x80000000);
	}
}

void func_43(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_34(*uParam0);
	iVar1 = func_35(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_38(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_44(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_45(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_46(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_47(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_48(struct<7> Param0)
{
	if ((((((Param0 == 0x00000000 && Param0.f_1 == 0x00000000) && Param0.f_2 == 0x00000000) && Param0.f_3 == 0x00000000) && Param0.f_4 == 0x00000000) && Param0.f_5 == 0x00000000) && Param0.f_6 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_49(struct<6> Param0, var uParam1)
{
	var uVar0;
	
	if (Param0 > 0x00000000)
	{
		func_42(&uVar0, Param0);
	}
	if (Param0.f_1 > 0x00000000)
	{
		func_44(&uVar0, func_50(Param0.f_1));
	}
	if (Param0.f_2 > 0x00000000)
	{
		func_43(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0x00000000)
	{
		func_45(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0x00000000)
	{
		func_46(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0x00000000)
	{
		func_47(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_50(int iParam0)
{
	if (iParam0 < 0x00000001)
	{
		return 0x00000000;
	}
	if (iParam0 > 0x0000000C)
	{
		return 0x00000000;
	}
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
			return 0x00000009;
			break;
		
		case 0x0000000B:
			return 0x0000000A;
			break;
		
		case 0x0000000C:
			return 0x0000000B;
			break;
	}
	return 0x00000000;
}

struct<7> func_51(int iParam0)
{
	var uVar0;
	struct<7> Var1;
	struct<7> Var2;
	
	uVar0 = iParam0;
	if (unk_0x52555DE2F29B7339(uVar0, &Var2, 0x00000007, 0xFFFFFFFF))
	{
		return Var2;
	}
	return Var1;
}

int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar4;
	
	iVar0 = func_56();
	if (iParam0 == 0x00000000 || !func_55(iVar0))
	{
		return 0xFFFFFFFF;
	}
	iVar1 = 0x00000007;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 0x00000001;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 0x00000001;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 0x00000003;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 0x00000003;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 0x00000003;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 0x00000002;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 0x00000002;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 0x00000002;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 0x00000004;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 0x00000004;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 0x00000005;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0x00000000;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0x00000000;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0x00000000;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 0x00000007)
	{
		switch (func_53(iVar1, iVar0))
		{
			case 0x00000001:
				return 0x00000003;
				break;
			
			case 0x00000002:
				return 0x00000002;
				break;
			
			case 0x00000003:
				return 0x00000001;
				break;
		}
	}
	else
	{
		iVar3[0x00000000] = func_53(0x00000001, iVar0);
		iVar3[0x00000001] = func_53(0x00000003, iVar0);
		iVar3[0x00000002] = func_53(0x00000002, iVar0);
		iVar3[0x00000003] = func_53(0x00000004, iVar0);
		iVar3[0x00000004] = func_53(0x00000005, iVar0);
		iVar3[0x00000005] = func_53(0x00000000, iVar0);
		bVar4 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000006)
		{
			if (iVar3[iVar2] < 0x00000003)
			{
				bVar4 = 0x00000001;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 0x00000001;
		}
		bVar4 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000006)
		{
			if (iVar3[iVar2] < 0x00000002)
			{
				bVar4 = 0x00000001;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 0x00000002;
		}
		bVar4 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000006)
		{
			if (iVar3[iVar2] < 0x00000001)
			{
				bVar4 = 0x00000001;
			}
			iVar2++;
		}
		if (!bVar4)
		{
			return 0x00000003;
		}
	}
	return 0xFFFFFFFF;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0x00000000)
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000001;
		iVar2 = 0x00000002;
		iVar3 = 0xFFFFFFFF;
	}
	else if (iParam0 == 0x00000001)
	{
		iVar0 = 0x00000003;
		iVar1 = 0x00000004;
		iVar2 = 0x00000005;
		iVar3 = 0xFFFFFFFF;
	}
	else if (iParam0 == 0x00000002)
	{
		iVar0 = 0x00000009;
		iVar1 = 0x0000000A;
		iVar2 = 0x0000000B;
		iVar3 = 0xFFFFFFFF;
	}
	else if (iParam0 == 0x00000003)
	{
		iVar0 = 0x00000006;
		iVar1 = 0x00000007;
		iVar2 = 0x00000008;
		iVar3 = 0xFFFFFFFF;
	}
	else if (iParam0 == 0x00000004)
	{
		iVar0 = 0x0000000C;
		iVar1 = 0x0000000D;
		iVar2 = 0x0000000E;
		iVar3 = 0xFFFFFFFF;
	}
	else if (iParam0 == 0x00000005)
	{
		iVar0 = 0x0000000F;
		iVar1 = 0x00000010;
		iVar2 = 0x00000011;
		iVar3 = 0xFFFFFFFF;
	}
	else if (iParam0 == 0x00000006)
	{
		iVar0 = 0x00000012;
		iVar1 = 0x00000013;
		iVar2 = 0x00000014;
		iVar3 = 0x00000015;
	}
	else
	{
		return 0x00000000;
	}
	iVar4 = func_54(iVar0, iParam1);
	if (func_54(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_54(iVar1, iParam1);
	}
	if (func_54(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_54(iVar2, iParam1);
	}
	if (iVar3 != 0xFFFFFFFF)
	{
		if (func_54(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_54(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_54(int iParam0, int iParam1)
{
	return Global_1B416.f_4AC6[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

bool func_55(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_56()
{
	func_57();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_57()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_59(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_58(unk_0x16F2683693E537C9());
			if (func_55(iVar0) && (!func_160(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_55(Global_1B416.f_936.f_21B.f_10E1))
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

int func_58(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_59(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_59(int iParam0)
{
	if (func_55(iParam0))
	{
		return func_60(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_60(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_61(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	switch (unk_0x12AB0310C2281427(&cParam1))
	{
		case 0x03DB7A89:
		case 0x87D34DD3:
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case 0xE74AC9C9:
		case 0xB550A881:
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 0x140AFE8F:
		case 0xBD4A6D50:
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 0x1FAC7333:
		case 0xD7EEAB1D:
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 0x3DA36410:
		case 0x23D285CF:
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case 0xF2F4DA8D:
		case 0xCCCBD777:
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 0x6A117E27:
		case 0x04E402CB:
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0x00000000:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 0x00000001:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam6 == 0x0000000C)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam8 != 0xFFFFFFFF)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam9 != 0xFFFFFFFF)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 0x00000002:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 0x00000003:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam8 != 0xFFFFFFFF)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
		
		case 0x00000004:
			if (iParam4 == Global_1204C)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam4 == Global_1204D)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == Global_1204E)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam4 == Global_1204F)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam4 == Global_12050)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == 0x00000000)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam6 == 0x00000018 || iParam6 == 0x00000019)
				{
					if (iParam8 == 0x00000001)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam8 == 0x00000002)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam8 == 0x00000003)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam9 == 0x00000005)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam9 == 0x00000001)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam9 == 0x00000000)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam9 == 0x00000004)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam9 == 0x00000003)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam9 == 0x00000002)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam9 == 0x00000006)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam8 = 0xFFFFFFFF;
				}
				else if (iParam6 == 0x00000026)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam6 == 0x00000041)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam8 != 0xFFFFFFFF)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else if (iParam6 == 0x00000016)
			{
				StringCopy(&cParam1, unk_0x1739BA50603D849C(iParam4), 16);
				if (unk_0xEA6BC48857E0AC4C(&cParam1) || unk_0x12AB0310C2281427(&cParam1) == 0xE149B5E8)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam6 == 0x00000028)
			{
				switch (iParam4)
				{
					case joaat("fcr2"):
						StringCopy(&cParam1, "FCR2", 16);
						break;
					
					case joaat("diablous2"):
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					
					case joaat("comet3"):
						StringCopy(&cParam1, "COMET3", 16);
						break;
					
					default:
						StringCopy(&cParam1, unk_0x1739BA50603D849C(iParam4), 16);
						if (unk_0xEA6BC48857E0AC4C(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam8 != 0xFFFFFFFF)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
				if (iParam9 != 0xFFFFFFFF)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
			}
			break;
	}
	if (bParam11)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0xBFE256D4:
		case 0x78A97CD0:
		case 0x394F415C:
		case 0xFAD1F1C9:
		case 0xDBBD7280:
		case 0x0A914799:
		case 0x555AF99A:
		case 0x969C3D67:
		case 0x88374054:
		case 0x6A6C02E0:
		case 0xCB96392F:
		case 0x84D6FAFD:
			return 0x00000002;
			break;
	}
	return 0xFFFFFFFF;
}

int func_63(int iParam0)
{
	return func_64(iParam0);
}

int func_64(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0x00000000;
			break;
		
		case joaat("weapon_pistol"):
			return 0x00000001;
			break;
		
		case joaat("weapon_combatpistol"):
			return 0x00000002;
			break;
		
		case joaat("weapon_appistol"):
			return 0x00000003;
			break;
		
		case joaat("weapon_pistol50"):
			return 0x00000004;
			break;
		
		case joaat("weapon_smg"):
			return 0x00000005;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 0x00000006;
			break;
		
		case joaat("weapon_microsmg"):
			return 0x00000007;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 0x00000008;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 0x00000009;
			break;
		
		case 0xC78D71B4:
			return 0x0000000A;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 0x0000000B;
			break;
		
		case joaat("weapon_mg"):
			return 0x0000000C;
			break;
		
		case joaat("weapon_combatmg"):
			return 0x0000000D;
			break;
		
		case 0xDDE2A27C:
			return 0x0000000E;
			break;
		
		case joaat("weapon_stickybomb"):
			return 0x0000000F;
			break;
		
		case joaat("weapon_grenade"):
			return 0x00000010;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 0x00000011;
			break;
		
		case joaat("weapon_remotesniper"):
			return 0x00000012;
			break;
		
		case 0x176898A6:
			return 0x00000013;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 0x00000014;
			break;
		
		case joaat("weapon_heavysniper"):
			return 0x00000015;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 0x00000016;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 0x00000017;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 0x00000018;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 0x00000019;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 0x0000001A;
			break;
		
		case joaat("weapon_rpg"):
			return 0x0000001B;
			break;
		
		case joaat("weapon_minigun"):
			return 0x0000001C;
			break;
		
		case 0xEB779748:
			return 0x0000001D;
			break;
		
		case 0x8F796EC9:
			return 0x0000001E;
			break;
		
		case joaat("weapon_stungun"):
			return 0x0000001F;
			break;
		
		case 0xCE1A1A4D:
			return 0x00000020;
			break;
		
		case joaat("gadget_parachute"):
			return 0x00000021;
			break;
		
		case joaat("weapon_knife"):
			return 0x00000022;
			break;
		
		case joaat("weapon_nightstick"):
			return 0x00000023;
			break;
		
		case joaat("weapon_hammer"):
			return 0x00000024;
			break;
		
		case joaat("weapon_bat"):
			return 0x00000025;
			break;
		
		case joaat("weapon_crowbar"):
			return 0x00000026;
			break;
		
		case joaat("weapon_golfclub"):
			return 0x00000027;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 0x00000028;
			break;
		
		case joaat("weapon_molotov"):
			return 0x00000029;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 0x0000002A;
			break;
		
		case joaat("weapon_petrolcan"):
			return 0x0000002B;
			break;
		
		case joaat("weapon_digiscanner"):
			return 0x0000002C;
			break;
		
		case joaat("weapon_bottle"):
			return 0x0000002D;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 0x0000002E;
			break;
		
		case joaat("weapon_snspistol"):
			return 0x0000002F;
			break;
		
		case joaat("weapon_heavypistol"):
			return 0x00000031;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 0x00000030;
			break;
		
		case joaat("weapon_gusenberg"):
			return 0x00000032;
			break;
		
		case joaat("weapon_dagger"):
			return 0x00000033;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 0x00000034;
			break;
		
		case joaat("weapon_flaregun"):
			return 0x00000039;
			break;
		
		case joaat("weapon_musket"):
			return 0x00000035;
			break;
		
		case joaat("weapon_firework"):
			return 0x00000036;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 0x00000038;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 0x00000037;
			break;
		
		case joaat("weapon_proxmine"):
			return 0x0000003C;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 0x0000003D;
			break;
		
		case joaat("weapon_hatchet"):
			return 0x0000003A;
			break;
		
		case joaat("weapon_railgun"):
			return 0x0000003B;
			break;
		
		case joaat("weapon_combatpdw"):
			return 0x00000040;
			break;
		
		case joaat("weapon_knuckle"):
			return 0x0000003E;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 0x0000003F;
			break;
		
		case joaat("weapon_machete"):
			return 0x00000041;
			break;
		
		case joaat("weapon_machinepistol"):
			return 0x00000044;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 0x00000042;
			break;
		
		case joaat("weapon_compactrifle"):
			return 0x00000043;
			break;
		
		case joaat("weapon_flashlight"):
			return 0x00000045;
			break;
		
		case joaat("weapon_revolver"):
			return 0x00000046;
			break;
		
		case joaat("weapon_switchblade"):
			return 0x00000047;
			break;
		
		case 0x12E82D3D:
			return 0x00000048;
			break;
		
		case 0xBD248B55:
			return 0x00000049;
			break;
		
		case 0x0781FE4A:
			return 0x0000004A;
			break;
		
		case 0xCD274149:
			return 0x0000004B;
			break;
		
		case 0xBA45E8B8:
			return 0x0000004C;
			break;
		
		case 0x94117305:
			return 0x0000004D;
			break;
		
		case 0x19044EE0:
			return 0x0000004E;
			break;
		
		case 0x394F415C:
			return 0x00000008;
			break;
		
		case 0xFAD1F1C9:
			return 0x00000009;
			break;
		
		case 0xDBBD7280:
			return 0x0000000D;
			break;
		
		case 0x0A914799:
			return 0x00000015;
			break;
		
		case 0xBFE256D4:
			return 0x00000001;
			break;
		
		case 0x78A97CD0:
			return 0x00000005;
			break;
		
		case 0x555AF99A:
			return 0x00000016;
			break;
		
		case 0x969C3D67:
			return 0x0000002E;
			break;
		
		case 0x88374054:
			return 0x0000002F;
			break;
		
		case 0x6A6C02E0:
			return 0x00000038;
			break;
		
		case 0xCB96392F:
			return 0x00000046;
			break;
		
		case 0x84D6FAFD:
			return 0x00000030;
			break;
		
		case 0x97EA20B8:
			return 0x0000004F;
			break;
		
		case 0x3813FC08:
			return 0x00000050;
			break;
		
		case 0xAF3696A1:
			return 0x00000051;
			break;
		
		case 0x476BF155:
			return 0x00000052;
			break;
		
		case 0xB62D1F67:
			return 0x00000053;
			break;
		
		case 0x917F6C8C:
			return 0x00000054;
			break;
		
		case 0x2B5EF5EC:
			return 0x00000055;
			break;
	}
	return 0x00000000;
}

char* func_65(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var3;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0x00000000:
			return "WCT_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 0x0BAAB157:
			return "WCT_CLIP1";
			break;
		
		case 0x5AF49386:
			return "WCT_CLIP1";
			break;
		
		case 0x6CBF371B:
			return "WCT_CLIP2";
			break;
		
		case 0xCAEBD246:
			return "WCT_CLIP1";
			break;
		
		case 0xE1C5FFFA:
			return "WCT_CLIP2";
			break;
		
		case 0xF8955D89:
			return "WCT_CLIP1";
			break;
		
		case 0x3E7E6956:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case 0x60BD749C:
			return "WCT_VAR_GUN";
			break;
		
		case 0xB7A316DA:
			return "WCT_CAMO_IND";
			break;
		
		case 0x441882E6:
			return "WCT_CAMO_IND";
			break;
		
		case 0xCE8C0772:
			return "WCT_CLIP2";
			break;
		
		case 0xC7ADD105:
			return "WCT_SCOPE_MAC2";
			break;
		
		case 0x3F3C8181:
			return "WCT_SCOPE_SML2";
			break;
		
		case 0xD7DBF707:
			return "WCT_VAR_RAY18";
			break;
		
		case 0x54D41361:
			return "WCT_CLIP1";
			break;
		
		case 0x81786CA9:
			return "WCT_CLIP2";
			break;
		
		case 0x9307D6FA:
			return "WCT_SUPP";
			break;
		
		default:
			if (iParam1 != 0x00000000)
			{
				iVar0 = func_87(iParam1, &uVar2);
				if (iVar0 != 0xFFFFFFFF)
				{
					iVar1 = 0x00000000;
					while (iVar1 < unk_0xA942498EEAA3EEAD(iVar0))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_66(&(Var3.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_66(var uParam0)
{
	return uParam0;
}

int func_67()
{
	if (unk_0x8CD06866876216F2() && func_68())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_68()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_69(int iParam0)
{
	if (!unk_0x8CD06866876216F2())
	{
		switch (iParam0)
		{
			case joaat("component_assaultrifle_clip_03"):
			case joaat("component_carbinerifle_clip_03"):
			case joaat("component_combatpdw_clip_03"):
			case joaat("component_compactrifle_clip_03"):
			case joaat("component_heavyshotgun_clip_03"):
			case joaat("component_machinepistol_clip_03"):
			case joaat("component_smg_clip_03"):
			case joaat("component_specialcarbine_clip_03"):
				return 0x00000000;
			
			default:
		}
	}
	else if (func_70(iParam0))
	{
		return Global_40001.f_50E9;
	}
	return 0x00000001;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0x930CB951:
		case 0x399D558F:
		case 0x6C32D2EB:
		case 0xD703C94D:
		case 0xB9B15DB0:
		case 0xDA55CD3F:
		case 0x46411A1D:
		case 0x5218C819:
		case 0x441882E6:
		case 0xB7A316DA:
		case 0xD951E867:
		case 0xC5E9AE52:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_71()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000006))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000002) || unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000004))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, 0xFFFFFFFF))
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000006))
		{
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000002) || unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000004))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	if (unk_0x0556D13739839AFD(0x00000000))
	{
		if (Global_24BC9.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x6FB46C25CCB7E6D5(iVar2, &iVar1, 0xFFFFFFFF))
			{
				if (unk_0xEAE0D21A50E6C7F4(iVar1, 0x00000008))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		iVar3 = unk_0x0A4C9A3D51EAE31F(0x00000362);
		if (unk_0xEAE0D21A50E6C7F4(iVar3, 0x00000002) || unk_0xEAE0D21A50E6C7F4(iVar3, 0x00000004))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000005))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000001) || unk_0xEAE0D21A50E6C7F4(Global_19, 0x00000003))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, 0xFFFFFFFF))
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000005))
		{
			if (unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000001) || unk_0xEAE0D21A50E6C7F4(iVar0, 0x00000003))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	if (unk_0x0556D13739839AFD(0x00000000))
	{
		if (Global_24BC9.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x6FB46C25CCB7E6D5(iVar2, &iVar1, 0xFFFFFFFF))
			{
				if (unk_0xEAE0D21A50E6C7F4(iVar1, 0x00000005))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		iVar3 = unk_0x0A4C9A3D51EAE31F(0x00000362);
		if (unk_0xEAE0D21A50E6C7F4(iVar3, 0x00000001) || unk_0xEAE0D21A50E6C7F4(iVar3, 0x00000003))
		{
			return 0x00000001;
		}
	}
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0xDA1BF71E2E8A1C89())
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar4, 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&iVar4, 0x00000001);
				unk_0x5D96D8530B3D0904(&iVar4, 0x00000003);
				unk_0x5D96D8530B3D0904(&iVar4, 0x00000005);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000001);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000003);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000005);
				unk_0xCDC520E5E48E63D9(joaat("sp_unlock_exclus_content"), iVar4, 0x00000001);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar4 = unk_0x0A4C9A3D51EAE31F(0x00000362);
					unk_0x5D96D8530B3D0904(&iVar4, 0x00000001);
					unk_0x5D96D8530B3D0904(&iVar4, 0x00000003);
					unk_0x9F2BE984EBF8A0F4(iVar4);
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_73()
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

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0xB4FC92B0:
		case 0x1A1F1260:
		case 0xE4E00B70:
		case 0x2C298B2B:
		case 0xDFB79725:
		case 0x6BD7228C:
		case 0x9DDBCF8C:
		case 0xB319A52C:
		case 0xC6836E12:
		case 0x43B1B173:
		case 0x4ABDA3FA:
		case 0xE7EE68EA:
		case 0x29366D21:
		case 0x3ADE514B:
		case 0xE64513E9:
		case 0xCD7AEB9A:
		case 0xFA7B27A6:
		case 0xE285CA9A:
		case 0x2B904B19:
		case 0x22C24F9C:
		case 0x8D0D5ECD:
		case 0x1F07150A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

bool func_75(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_84())
	{
		return 0x00000000;
	}
	iVar0 = func_79(iParam0, iParam1, iParam2);
	iVar1 = func_77(iParam0, iParam1);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_76(iVar1));
}

int func_76(int iParam0)
{
	return (iParam0 % 0x00000020);
}

int func_77(int iParam0, int iParam1)
{
	return func_78(iParam0, iParam1);
}

int func_78(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 0x00000001;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 0x00000002;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000003;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 0x00000004;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 0x000000AF;
					break;
				
				case 0x60BD749C:
					return 0x000000D3;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 0x00000005;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 0x00000006;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000007;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x00000008;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 0x000000BA;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 0x0000000B;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 0x0000000C;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x0000000D;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x0000000E;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 0x000000A4;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 0x0000000F;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 0x00000010;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000011;
					break;
				
				case joaat("component_at_scope_macro"):
					return 0x00000012;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000013;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 0x000000AE;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 0x00000016;
					break;
				
				case joaat("component_smg_clip_02"):
					return 0x00000017;
					break;
				
				case joaat("component_smg_clip_03"):
					return 0x000000CF;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000018;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 0x00000019;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x0000001A;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 0x000000B3;
					break;
				
				case 0x60BD749C:
					return 0x000000D4;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 0x0000001B;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 0x0000001C;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 0x000000C9;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x0000001D;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000001E;
					break;
				
				case joaat("component_at_scope_macro"):
					return 0x0000001F;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000020;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 0x000000A5;
					break;
				
				case 0x60BD749C:
					return 0x000000D5;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 0x00000021;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 0x00000022;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 0x000000CA;
					break;
				
				case joaat("component_at_railcover_01"):
					return 0x00000023;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000024;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000025;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x00000026;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000027;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 0x000000A8;
					break;
				
				case 0x60BD749C:
					return 0x000000D6;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 0x0000002C;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 0x0000002D;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000002F;
					break;
				
				case joaat("component_at_scope_small"):
					return 0x00000030;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000031;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 0x000000A3;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 0x00000032;
					break;
				
				case joaat("component_mg_clip_02"):
					return 0x00000033;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 0x00000034;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 0x000000BB;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 0x00000035;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 0x00000036;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000037;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x00000038;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 0x000000BC;
					break;
				
				case 0x60BD749C:
					return 0x000000D7;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 0x0000003B;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000003C;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 0x000000C1;
					break;
				
				case 0x60BD749C:
					return 0x00000185;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 0x00000040;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 0x00000041;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000042;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000043;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000044;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 0x00000045;
					break;
				
				case joaat("component_at_scope_large"):
					return 0x00000046;
					break;
				
				case joaat("component_at_scope_max"):
					return 0x00000047;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000048;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 0x000000B4;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 0x0000004C;
					break;
				
				case joaat("component_at_scope_max"):
					return 0x0000004D;
					break;
				
				case joaat("component_at_scope_large"):
					return 0x00000052;
					break;
				
				case 0x60BD749C:
					return 0x000000D8;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 0x0000004E;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000004F;
					break;
				
				case joaat("component_at_scope_small"):
					return 0x00000050;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 0x00000051;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 0x00000053;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 0x00000054;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000055;
					break;
				
				case joaat("component_at_scope_macro"):
					return 0x00000056;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000057;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 0x000000BD;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 0x00000058;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000059;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x0000005A;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 0x0000005B;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 0x0000005C;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x0000005D;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x0000005E;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 0x000000B0;
					break;
			}
			break;
		
		case 0x176898A6:
			switch (iParam0)
			{
				case 0x0BAAB157:
					return 0x0000005F;
					break;
				
				case joaat("component_at_scope_large"):
					return 0x00000060;
					break;
				
				case joaat("component_at_scope_max"):
					return 0x00000061;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000062;
					break;
			}
			break;
		
		case 0xC78D71B4:
			switch (iParam0)
			{
				case 0x5AF49386:
					return 0x00000063;
					break;
				
				case 0x6CBF371B:
					return 0x00000064;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000065;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000066;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x00000067;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000068;
					break;
			}
			break;
		
		case 0xDDE2A27C:
			switch (iParam0)
			{
				case 0xCAEBD246:
					return 0x00000069;
					break;
				
				case 0xE1C5FFFA:
					return 0x0000006A;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x0000006B;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x0000006C;
					break;
			}
			break;
		
		case 0x8F796EC9:
			switch (iParam0)
			{
				case 0xF8955D89:
					return 0x0000006D;
					break;
				
				case 0x3E7E6956:
					return 0x0000006E;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 0x0000006F;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 0x00000070;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 0x000000D0;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000071;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000072;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x00000073;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000074;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 0x000000BE;
					break;
				
				case 0x60BD749C:
					return 0x00000186;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 0x00000075;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 0x00000076;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000077;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x00000078;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 0x000000BF;
					break;
				
				case 0x60BD749C:
					return 0x00000187;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 0x00000079;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 0x0000007A;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x0000007B;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x0000007C;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 0x000000AB;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 0x00000083;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 0x00000084;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000007F;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000080;
					break;
				
				case joaat("component_at_scope_small"):
					return 0x00000081;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000082;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 0x000000C0;
					break;
				
				case 0x60BD749C:
					return 0x0000018A;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 0x0000007D;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 0x0000007E;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 0x00000085;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 0x00000086;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x00000088;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 0x00000089;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 0x0000008C;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 0x000000CD;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000091;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000092;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000093;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 0x0000008A;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 0x0000008B;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 0x0000008D;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000008E;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x0000008F;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000090;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 0x000000AC;
					break;
				
				case 0x60BD749C:
					return 0x00000188;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 0x00000095;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 0x00000096;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 0x000000CB;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000097;
					break;
				
				case joaat("component_at_scope_small"):
					return 0x00000098;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000099;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 0x000000B2;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 0x00000094;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 0x0000009A;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 0x0000009B;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 0x0000009C;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 0x0000009D;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 0x0000009E;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 0x0000009F;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 0x000000A0;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 0x000000A1;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 0x000000A2;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 0x000000B8;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 0x000000B9;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 0x000000CE;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x000000B7;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 0x000000C2;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 0x000000C3;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 0x000000C4;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 0x000000C5;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 0x000000C6;
					break;
				
				case 0x60BD749C:
					return 0x00000189;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 0x000000C7;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 0x000000C8;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 0x000000CC;
					break;
			}
			break;
		
		case 0xBD248B55:
			switch (iParam0)
			{
				case 0x84C8B2D3:
					return 0x000000D1;
					break;
				
				case 0x937ED0B7:
					return 0x000000D2;
					break;
			}
			break;
		
		case 0xBFE256D4:
			switch (iParam0)
			{
				case 0x94F42D62:
					return 0x000000D9;
					break;
				
				case 0x5ED6C128:
					return 0x000000DA;
					break;
				
				case 0x4F37DF2A:
					return 0x000000DB;
					break;
				
				case 0x85FEA109:
					return 0x000000DC;
					break;
				
				case 0x2BBD7A3A:
					return 0x000000DD;
					break;
				
				case 0x25CAAEAF:
					return 0x000000DE;
					break;
				
				case 0x43FD595B:
					return 0x000000DF;
					break;
				
				case 0x8ED4BB70:
					return 0x000000E0;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 0x000000E1;
					break;
				
				case 0x21E34793:
					return 0x000000E2;
					break;
				
				case 0x5C6C749C:
					return 0x0000016F;
					break;
				
				case 0x15F7A390:
					return 0x00000170;
					break;
				
				case 0x968E24DB:
					return 0x00000171;
					break;
				
				case 0x017BFA99:
					return 0x00000172;
					break;
				
				case 0xF2685C72:
					return 0x00000173;
					break;
				
				case 0xDD2231E6:
					return 0x00000174;
					break;
				
				case 0xBB43EE76:
					return 0x00000175;
					break;
				
				case 0x4D901310:
					return 0x00000176;
					break;
				
				case 0x5F31B653:
					return 0x00000177;
					break;
				
				case 0x697E19A0:
					return 0x00000178;
					break;
				
				case 0x930CB951:
					return 0x00000179;
					break;
			}
			break;
		
		case 0x78A97CD0:
			switch (iParam0)
			{
				case 0x4C24806E:
					return 0x000000E3;
					break;
				
				case 0xB9835B2E:
					return 0x000000E4;
					break;
				
				case 0x0B5A715F:
					return 0x000000E5;
					break;
				
				case 0x3A1BD6FA:
					return 0x000000E6;
					break;
				
				case 0xD99222E5:
					return 0x000000E7;
					break;
				
				case 0x7FEA36EC:
					return 0x000000E8;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x000000E9;
					break;
				
				case 0x9FDB5652:
					return 0x000000EA;
					break;
				
				case 0xE502AB6B:
					return 0x000000EB;
					break;
				
				case 0x3DECC7DA:
					return 0x000000EC;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x000000ED;
					break;
				
				case 0xB99402D4:
					return 0x000000EE;
					break;
				
				case 0xC867A07B:
					return 0x000000EF;
					break;
				
				case 0xDE11CBCF:
					return 0x000000F0;
					break;
				
				case 0xEC9068CC:
					return 0x000000F1;
					break;
				
				case 0x02E7957A:
					return 0x000000F2;
					break;
				
				case 0x347EF8AC:
					return 0x000000F3;
					break;
				
				case 0x4DB62ABE:
					return 0x000000F4;
					break;
				
				case 0xD9103EE1:
					return 0x000000F5;
					break;
				
				case 0xA564D78B:
					return 0x000000F6;
					break;
				
				case 0xC4979067:
					return 0x0000017A;
					break;
				
				case 0x3815A945:
					return 0x0000017B;
					break;
				
				case 0x4B4B4FB0:
					return 0x0000017C;
					break;
				
				case 0xEC729200:
					return 0x0000017D;
					break;
				
				case 0x48F64B22:
					return 0x0000017E;
					break;
				
				case 0x35992468:
					return 0x0000017F;
					break;
				
				case 0x24B782A5:
					return 0x00000180;
					break;
				
				case 0xA2E67F01:
					return 0x00000181;
					break;
				
				case 0x2218FD68:
					return 0x00000182;
					break;
				
				case 0x45C5C3C5:
					return 0x00000183;
					break;
				
				case 0x399D558F:
					return 0x00000184;
					break;
			}
			break;
		
		case 0x0A914799:
			switch (iParam0)
			{
				case 0xFA1E1A28:
					return 0x000000F7;
					break;
				
				case 0x2CD8FF9D:
					return 0x000000F8;
					break;
				
				case 0xF835D6D4:
					return 0x000000F9;
					break;
				
				case 0x89EBDAA7:
					return 0x000000FA;
					break;
				
				case 0x3BE948F6:
					return 0x000000FB;
					break;
				
				case 0x0EC0F617:
					return 0x000000FC;
					break;
				
				case 0x82C10383:
					return 0x000000FD;
					break;
				
				case joaat("component_at_scope_max"):
					return 0x000000FE;
					break;
				
				case 0xB68010B0:
					return 0x000000FF;
					break;
				
				case 0x2E43DA41:
					return 0x00000100;
					break;
				
				case 0xAC42DF71:
					return 0x00000101;
					break;
				
				case 0x5F7DCE4D:
					return 0x00000102;
					break;
				
				case 0x6927E1A1:
					return 0x00000103;
					break;
				
				case 0x909630B7:
					return 0x00000104;
					break;
				
				case 0x108AB09E:
					return 0x00000105;
					break;
				
				case 0xF8337D02:
					return 0x00000164;
					break;
				
				case 0xC5BEDD65:
					return 0x00000165;
					break;
				
				case 0xE9712475:
					return 0x00000166;
					break;
				
				case 0x13AA78E7:
					return 0x00000167;
					break;
				
				case 0x26591E50:
					return 0x00000168;
					break;
				
				case 0x302731EC:
					return 0x00000169;
					break;
				
				case 0xAC722A78:
					return 0x0000016A;
					break;
				
				case 0xBEA4CEDD:
					return 0x0000016B;
					break;
				
				case 0xCD776C82:
					return 0x0000016C;
					break;
				
				case 0xABC5ACC7:
					return 0x0000016D;
					break;
				
				case 0x6C32D2EB:
					return 0x0000016E;
					break;
			}
			break;
		
		case 0xDBBD7280:
			switch (iParam0)
			{
				case 0x492B257C:
					return 0x00000106;
					break;
				
				case 0x17DF42E9:
					return 0x00000107;
					break;
				
				case 0x29882423:
					return 0x00000108;
					break;
				
				case 0x57EF1CC8:
					return 0x00000109;
					break;
				
				case 0xC326BDBA:
					return 0x0000010A;
					break;
				
				case 0xF6649745:
					return 0x0000010B;
					break;
				
				case 0x9D65907A:
					return 0x0000010C;
					break;
				
				case 0x420FD713:
					return 0x0000010D;
					break;
				
				case 0x3F3C8181:
					return 0x0000010E;
					break;
				
				case 0xC66B6542:
					return 0x0000010F;
					break;
				
				case 0xB99402D4:
					return 0x00000110;
					break;
				
				case 0xC867A07B:
					return 0x00000111;
					break;
				
				case 0xDE11CBCF:
					return 0x00000112;
					break;
				
				case 0xEC9068CC:
					return 0x00000113;
					break;
				
				case 0x02E7957A:
					return 0x00000114;
					break;
				
				case 0x347EF8AC:
					return 0x00000115;
					break;
				
				case 0x4DB62ABE:
					return 0x00000116;
					break;
				
				case 0xC34EF234:
					return 0x00000117;
					break;
				
				case 0xB5E2575B:
					return 0x00000118;
					break;
				
				case 0x4A768CB5:
					return 0x00000159;
					break;
				
				case 0xCCE06BBD:
					return 0x0000015A;
					break;
				
				case 0xBE94CF26:
					return 0x0000015B;
					break;
				
				case 0x7609BE11:
					return 0x0000015C;
					break;
				
				case 0x48AF6351:
					return 0x0000015D;
					break;
				
				case 0x9186750A:
					return 0x0000015E;
					break;
				
				case 0x84555AA8:
					return 0x0000015F;
					break;
				
				case 0x1B4C088B:
					return 0x00000160;
					break;
				
				case 0x0E046DFC:
					return 0x00000161;
					break;
				
				case 0x028B536E:
					return 0x00000162;
					break;
				
				case 0xD703C94D:
					return 0x00000163;
					break;
			}
			break;
		
		case 0x394F415C:
			switch (iParam0)
			{
				case 0x8610343F:
					return 0x00000119;
					break;
				
				case 0xD12ACA6F:
					return 0x0000011A;
					break;
				
				case 0xA7DD1E58:
					return 0x0000011B;
					break;
				
				case 0x63E0A098:
					return 0x0000011C;
					break;
				
				case 0xFB70D853:
					return 0x0000011D;
					break;
				
				case 0xEF2C78C1:
					return 0x0000011E;
					break;
				
				case 0x9D65907A:
					return 0x0000011F;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000120;
					break;
				
				case 0x420FD713:
					return 0x00000121;
					break;
				
				case 0x049B2945:
					return 0x00000122;
					break;
				
				case 0xC66B6542:
					return 0x00000123;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000124;
					break;
				
				case 0xB99402D4:
					return 0x00000125;
					break;
				
				case 0xC867A07B:
					return 0x00000126;
					break;
				
				case 0xDE11CBCF:
					return 0x00000127;
					break;
				
				case 0xEC9068CC:
					return 0x00000128;
					break;
				
				case 0x02E7957A:
					return 0x00000129;
					break;
				
				case 0x347EF8AC:
					return 0x0000012A;
					break;
				
				case 0x4DB62ABE:
					return 0x0000012B;
					break;
				
				case 0x43A49D26:
					return 0x0000012C;
					break;
				
				case 0x5646C26A:
					return 0x0000012D;
					break;
				
				case 0x911B24AF:
					return 0x00000143;
					break;
				
				case 0x37E5444B:
					return 0x00000144;
					break;
				
				case 0x538B7B97:
					return 0x00000145;
					break;
				
				case 0x25789F72:
					return 0x00000146;
					break;
				
				case 0xC5495F2D:
					return 0x00000147;
					break;
				
				case 0xCF8B73B1:
					return 0x00000148;
					break;
				
				case 0xA9BB2811:
					return 0x00000149;
					break;
				
				case 0xFC674D54:
					return 0x0000014A;
					break;
				
				case 0x7C7FCD9B:
					return 0x0000014B;
					break;
				
				case 0xA5C38392:
					return 0x0000014C;
					break;
				
				case 0xB9B15DB0:
					return 0x0000014D;
					break;
			}
			break;
		
		case 0xFAD1F1C9:
			switch (iParam0)
			{
				case 0x4C7A391E:
					return 0x0000012E;
					break;
				
				case 0x5DD5DBD5:
					return 0x0000012F;
					break;
				
				case 0x255D5D57:
					return 0x00000130;
					break;
				
				case 0x44032F11:
					return 0x00000131;
					break;
				
				case 0x3D25C2A7:
					return 0x00000132;
					break;
				
				case 0x1757F566:
					return 0x00000133;
					break;
				
				case 0x9D65907A:
					return 0x00000134;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000135;
					break;
				
				case 0x420FD713:
					return 0x00000136;
					break;
				
				case 0x049B2945:
					return 0x00000137;
					break;
				
				case 0xC66B6542:
					return 0x00000138;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000139;
					break;
				
				case 0xB99402D4:
					return 0x0000013A;
					break;
				
				case 0xC867A07B:
					return 0x0000013B;
					break;
				
				case 0xDE11CBCF:
					return 0x0000013C;
					break;
				
				case 0xEC9068CC:
					return 0x0000013D;
					break;
				
				case 0x02E7957A:
					return 0x0000013E;
					break;
				
				case 0x347EF8AC:
					return 0x0000013F;
					break;
				
				case 0x4DB62ABE:
					return 0x00000140;
					break;
				
				case 0x833637FF:
					return 0x00000141;
					break;
				
				case 0x8B3C480B:
					return 0x00000142;
					break;
				
				case 0x4BDD6F16:
					return 0x0000014E;
					break;
				
				case 0x406A7908:
					return 0x0000014F;
					break;
				
				case 0x2F3856A4:
					return 0x00000150;
					break;
				
				case 0xE50C424D:
					return 0x00000151;
					break;
				
				case 0xD37D1F2F:
					return 0x00000152;
					break;
				
				case 0x86268483:
					return 0x00000153;
					break;
				
				case 0xF420E076:
					return 0x00000154;
					break;
				
				case 0xAAE14DF8:
					return 0x00000155;
					break;
				
				case 0x9893A95D:
					return 0x00000156;
					break;
				
				case 0x6B13CD3E:
					return 0x00000157;
					break;
				
				case 0xDA55CD3F:
					return 0x00000158;
					break;
			}
			break;
		
		case 0x555AF99A:
			switch (iParam0)
			{
				case 0xCD940141:
					return 0x0000018B;
					break;
				
				case 0x4E65B425:
					return 0x0000018C;
					break;
				
				case 0x3BE4465D:
					return 0x0000018D;
					break;
				
				case 0xE9582927:
					return 0x0000018E;
					break;
				
				case 0x9F8A1BF5:
					return 0x0000018F;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000190;
					break;
				
				case 0x420FD713:
					return 0x00000191;
					break;
				
				case 0x049B2945:
					return 0x00000192;
					break;
				
				case 0x3F3C8181:
					return 0x00000193;
					break;
				
				case 0xAC42DF71:
					return 0x00000194;
					break;
				
				case 0x5F7DCE4D:
					return 0x00000195;
					break;
				
				case 0xE3BD9E44:
					return 0x000001E8;
					break;
				
				case 0x17148F9B:
					return 0x000001E9;
					break;
				
				case 0x24D22B16:
					return 0x000001EA;
					break;
				
				case 0xF2BEC6F0:
					return 0x000001EB;
					break;
				
				case 0x0085627D:
					return 0x000001EC;
					break;
				
				case 0xDC2919C5:
					return 0x000001ED;
					break;
				
				case 0xE184247B:
					return 0x000001EE;
					break;
				
				case 0xD8EF9356:
					return 0x000001EF;
					break;
				
				case 0xEF29BFCA:
					return 0x000001F0;
					break;
				
				case 0x67AEB165:
					return 0x000001F1;
					break;
				
				case 0x46411A1D:
					return 0x000001F2;
					break;
			}
			break;
		
		case 0x969C3D67:
			switch (iParam0)
			{
				case 0x16C69281:
					return 0x00000196;
					break;
				
				case 0xDE1FA12C:
					return 0x00000197;
					break;
				
				case 0x51351635:
					return 0x00000198;
					break;
				
				case 0x503DEA90:
					return 0x00000199;
					break;
				
				case 0xDE011286:
					return 0x0000019A;
					break;
				
				case 0x8765C68A:
					return 0x0000019B;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000019C;
					break;
				
				case 0x420FD713:
					return 0x0000019D;
					break;
				
				case 0x049B2945:
					return 0x0000019E;
					break;
				
				case 0xC66B6542:
					return 0x0000019F;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x000001A0;
					break;
				
				case 0xB99402D4:
					return 0x000001A1;
					break;
				
				case 0xC867A07B:
					return 0x000001A2;
					break;
				
				case 0xDE11CBCF:
					return 0x000001A3;
					break;
				
				case 0xEC9068CC:
					return 0x000001A4;
					break;
				
				case 0x02E7957A:
					return 0x000001A5;
					break;
				
				case 0x347EF8AC:
					return 0x000001A6;
					break;
				
				case 0x4DB62ABE:
					return 0x000001A7;
					break;
				
				case 0x9D65907A:
					return 0x000001A8;
					break;
				
				case 0xE73653A9:
					return 0x000001A9;
					break;
				
				case 0xF97F783B:
					return 0x000001AA;
					break;
				
				case 0xD40BB53B:
					return 0x00000214;
					break;
				
				case 0x431B238B:
					return 0x00000215;
					break;
				
				case 0x34CF86F4:
					return 0x00000216;
					break;
				
				case 0xB4C306DD:
					return 0x00000217;
					break;
				
				case 0xEE677A25:
					return 0x00000218;
					break;
				
				case 0xDF90DC78:
					return 0x00000219;
					break;
				
				case 0x0A4C31EE:
					return 0x0000021A;
					break;
				
				case 0x89CFB0F7:
					return 0x0000021B;
					break;
				
				case 0x7B82145C:
					return 0x0000021C;
					break;
				
				case 0x899CAF75:
					return 0x0000021D;
					break;
				
				case 0x5218C819:
					return 0x0000021E;
					break;
			}
			break;
		
		case 0x88374054:
			switch (iParam0)
			{
				case 0x01466CE6:
					return 0x000001AB;
					break;
				
				case 0xCE8C0772:
					return 0x000001AC;
					break;
				
				case 0xC111EB26:
					return 0x000001AD;
					break;
				
				case 0x8D107402:
					return 0x000001AE;
					break;
				
				case 0xE6AD5F79:
					return 0x000001AF;
					break;
				
				case 0x902DA26E:
					return 0x000001B0;
					break;
				
				case 0x4A4965F3:
					return 0x000001B1;
					break;
				
				case 0x47DE9258:
					return 0x000001B2;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 0x000001B3;
					break;
				
				case 0xAA8283BF:
					return 0x000001B4;
					break;
				
				case 0x0F7BEEDD:
					return 0x000001FE;
					break;
				
				case 0x8A612EF6:
					return 0x000001FF;
					break;
				
				case 0x76FA8829:
					return 0x00000200;
					break;
				
				case 0xA93C6CAC:
					return 0x00000201;
					break;
				
				case 0x9C905354:
					return 0x00000202;
					break;
				
				case 0x4DFA3621:
					return 0x00000203;
					break;
				
				case 0x42E91FFF:
					return 0x00000204;
					break;
				
				case 0x54A8437D:
					return 0x00000205;
					break;
				
				case 0x068C2746:
					return 0x00000206;
					break;
				
				case 0x2366E467:
					return 0x00000207;
					break;
				
				case 0x441882E6:
					return 0x00000208;
					break;
			}
			break;
		
		case 0x6A6C02E0:
			switch (iParam0)
			{
				case 0x94E12DCE:
					return 0x000001B5;
					break;
				
				case 0xE6CFD1AA:
					return 0x000001B6;
					break;
				
				case 0xF46FD079:
					return 0x000001B7;
					break;
				
				case 0xE14A9ED3:
					return 0x000001B8;
					break;
				
				case 0x6DD7A86E:
					return 0x000001B9;
					break;
				
				case 0xD77A22D2:
					return 0x000001BA;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x000001BB;
					break;
				
				case 0x420FD713:
					return 0x000001BC;
					break;
				
				case 0xC66B6542:
					return 0x000001BD;
					break;
				
				case 0x5B1C713C:
					return 0x000001BE;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x000001BF;
					break;
				
				case 0xB99402D4:
					return 0x000001C0;
					break;
				
				case 0xC867A07B:
					return 0x000001C1;
					break;
				
				case 0xDE11CBCF:
					return 0x000001C2;
					break;
				
				case 0xEC9068CC:
					return 0x000001C3;
					break;
				
				case 0x02E7957A:
					return 0x000001C4;
					break;
				
				case 0x347EF8AC:
					return 0x000001C5;
					break;
				
				case 0x4DB62ABE:
					return 0x000001C6;
					break;
				
				case 0x9D65907A:
					return 0x000001C7;
					break;
				
				case 0x381B5D89:
					return 0x000001C8;
					break;
				
				case 0x68373DDC:
					return 0x000001C9;
					break;
				
				case 0x9094FBA0:
					return 0x00000209;
					break;
				
				case 0x7320F4B2:
					return 0x0000020A;
					break;
				
				case 0x60CF500F:
					return 0x0000020B;
					break;
				
				case 0xFE668B3F:
					return 0x0000020C;
					break;
				
				case 0xF3757559:
					return 0x0000020D;
					break;
				
				case 0x193B40E8:
					return 0x0000020E;
					break;
				
				case 0x107D2F6C:
					return 0x0000020F;
					break;
				
				case 0xC4E91841:
					return 0x00000210;
					break;
				
				case 0x9BB1C5D3:
					return 0x00000211;
					break;
				
				case 0x3B61040B:
					return 0x00000212;
					break;
				
				case 0xB7A316DA:
					return 0x00000213;
					break;
			}
			break;
		
		case 0xCB96392F:
			switch (iParam0)
			{
				case 0xBA23D8BE:
					return 0x000001CA;
					break;
				
				case 0x0DC8BA3F:
					return 0x000001CB;
					break;
				
				case 0x10F42E8F:
					return 0x000001CC;
					break;
				
				case 0x00EFBF25:
					return 0x000001CD;
					break;
				
				case 0xC6D8E476:
					return 0x000001CE;
					break;
				
				case 0x420FD713:
					return 0x000001CF;
					break;
				
				case 0x049B2945:
					return 0x000001D0;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x000001D1;
					break;
				
				case 0x27077CCB:
					return 0x000001D2;
					break;
				
				case 0xC03FED9F:
					return 0x000001F3;
					break;
				
				case 0x00B5DE24:
					return 0x000001F4;
					break;
				
				case 0x0A7FF1B8:
					return 0x000001F5;
					break;
				
				case 0xF2E24289:
					return 0x000001F6;
					break;
				
				case 0x11317F27:
					return 0x000001F7;
					break;
				
				case 0x17C30C42:
					return 0x000001F8;
					break;
				
				case 0x257927AE:
					return 0x000001F9;
					break;
				
				case 0x37304B1C:
					return 0x000001FA;
					break;
				
				case 0x48DAEE71:
					return 0x000001FB;
					break;
				
				case 0x20ED9B5B:
					return 0x000001FC;
					break;
				
				case 0xD951E867:
					return 0x000001FD;
					break;
			}
			break;
		
		case 0x84D6FAFD:
			switch (iParam0)
			{
				case 0x018929DA:
					return 0x000001D3;
					break;
				
				case 0xEFB00628:
					return 0x000001D4;
					break;
				
				case 0xFAA7F5ED:
					return 0x000001D5;
					break;
				
				case 0x43621710:
					return 0x000001D6;
					break;
				
				case 0xA99CF95A:
					return 0x000001D7;
					break;
				
				case 0x822060A9:
					return 0x000001D8;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x000001D9;
					break;
				
				case 0x420FD713:
					return 0x000001DA;
					break;
				
				case 0xC7ADD105:
					return 0x000001DB;
					break;
				
				case 0x3F3C8181:
					return 0x000001DC;
					break;
				
				case 0x659AC11B:
					return 0x000001DD;
					break;
				
				case 0x3BF26DC7:
					return 0x000001DE;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x000001DF;
					break;
				
				case 0xB99402D4:
					return 0x000001E0;
					break;
				
				case 0xC867A07B:
					return 0x000001E1;
					break;
				
				case 0xDE11CBCF:
					return 0x000001E2;
					break;
				
				case 0xEC9068CC:
					return 0x000001E3;
					break;
				
				case 0x02E7957A:
					return 0x000001E4;
					break;
				
				case 0x347EF8AC:
					return 0x000001E5;
					break;
				
				case 0x4DB62ABE:
					return 0x000001E6;
					break;
				
				case 0x9D65907A:
					return 0x000001E7;
					break;
				
				case 0xAE4055B7:
					return 0x0000021F;
					break;
				
				case 0xB905ED6B:
					return 0x00000220;
					break;
				
				case 0xA6C448E8:
					return 0x00000221;
					break;
				
				case 0x9486246C:
					return 0x00000222;
					break;
				
				case 0x8A390FD2:
					return 0x00000223;
					break;
				
				case 0x02337FC5:
					return 0x00000224;
					break;
				
				case 0xEFFFDB5E:
					return 0x00000225;
					break;
				
				case 0xDDBDB6DA:
					return 0x00000226;
					break;
				
				case 0xCB631225:
					return 0x00000227;
					break;
				
				case 0xA87D541E:
					return 0x00000228;
					break;
				
				case 0xC5E9AE52:
					return 0x00000229;
					break;
			}
			break;
		
		case 0xAF3696A1:
			switch (iParam0)
			{
				case 0xD7DBF707:
					return 0x0000022A;
					break;
			}
			break;
		
		case 0x2B5EF5EC:
			switch (iParam0)
			{
				case 0x54D41361:
					return 0x0000022B;
					break;
				
				case 0x81786CA9:
					return 0x0000022C;
					break;
				
				case 0x9307D6FA:
					return 0x0000022D;
					break;
			}
			break;
	}
	return 0x00000000;
}

var func_79(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_12(func_80(iParam0, iParam1), iParam2, 0x00000000);
	return uVar0;
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_77(iParam0, iParam1);
	iVar1 = func_83(iVar0);
	if ((func_82() == 0x00000000 || func_81() == 0x00000000) || (func_82() == 0x000003E7 && func_81() == 0x000003E7))
	{
		switch (iVar1)
		{
			case 0x00000000:
				return 0x000002AF;
				break;
			
			case 0x00000001:
				return 0x000002B0;
				break;
			
			case 0x00000002:
				return 0x000002B1;
				break;
			
			case 0x00000003:
				return 0x000002B2;
				break;
			
			case 0x00000004:
				return 0x000006D9;
				break;
			
			case 0x00000005:
				return 0x00000983;
				break;
			
			case 0x00000006:
				return 0x00000B0B;
				break;
			
			case 0x00000007:
				return 0x0000157D;
				break;
			
			case 0x00000008:
				return 0x00001581;
				break;
			
			case 0x00000009:
				return 0x00001585;
				break;
			
			case 0x0000000A:
				return 0x000015F6;
				break;
			
			case 0x0000000B:
				return 0x000015FA;
				break;
			
			case 0x0000000C:
				return 0x000015FE;
				break;
			
			case 0x0000000D:
				return 0x00001602;
				break;
			
			case 0x0000000E:
				return 0x000018E5;
				break;
			
			case 0x0000000F:
				return 0x00001960;
				break;
			
			case 0x00000010:
				return 0x00001974;
				break;
			
			case 0x00000011:
				return 0x0000197A;
				break;
		}
	}
	return 0x000006D9;
}

int func_81()
{
	return Global_7831;
}

int func_82()
{
	return Global_7830;
}

int func_83(int iParam0)
{
	return (iParam0 / 0x00000020);
}

bool func_84()
{
	return Global_140858;
}

int func_85(int iParam0)
{
	if (iParam0 != 0xFFFFFFFF)
	{
		if ((((iParam0 == 0x0000002E || iParam0 == 0x0000002F) || iParam0 == 0x00000030) || iParam0 == 0x00000031) || iParam0 == 0x00000034)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_86(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_87(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x037F36BEA9A47381();
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (unk_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_88(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (0x0000002C - 0x00000001))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0x00000000;
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= (0x0000002C - 0x00000001))
		{
			iVar3 = func_91(iVar0);
			if (iVar3 != 0x00000000)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_91(iVar0));
				Var4.f_1 = 0x00000000;
				Var4.f_2 = 0x00000000;
				Var4.f_3 = 0x00000000;
				Var4.f_4 = 0x00000000;
				if (Var4 != 0x00000000 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 0x00000001;
					}
					Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
					Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					if (Var4.f_1 == 0xFFFFFFFF)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0x00000000;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0x00000000;
					iVar2 = func_90(Var4, iVar1);
					while (iVar2 != 0x00000000)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_90(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000032)
		{
			uParam1->f_DD[iVar0 /*5*/].f_1 = 0x00000000;
			iVar0++;
		}
		iVar6 = unk_0x4160B65AE085B5A9();
		iVar5 = 0x00000000;
		while (iVar5 < iVar6)
		{
			if ((unk_0x310836EE7129BA33(iVar5, &Var7) && !func_89(Var7.f_1)) && iVar9 < 0x00000033)
			{
				if (!unk_0x232048AB4B0E0259(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0x00000000;
					Var4.f_2 = 0x00000000;
					Var4.f_3 = 0x00000000;
					Var4.f_4 = 0x00000000;
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (unk_0x440C646F2F11A2A1(iParam0, Var4, 0x00000000))
					{
						Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
						Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					}
					if (Var4.f_1 == 0xFFFFFFFF)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0x00000000;
						}
					}
					uParam1->f_DD[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0x00000000;
					iVar1 = 0x00000000;
					while (iVar1 < unk_0xAD2A7A6DFF55841B(iVar5))
					{
						if (unk_0x31D5E073B6F93CDC(iVar5, iVar1, &Var8))
						{
							if (!func_74(Var8.f_3))
							{
								if (unk_0xAFB8387ED2D7213E(iParam0, Var4, Var8.f_3))
								{
									unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0x00000000)
				{
					if (!unk_0x440C646F2F11A2A1(iParam0, Var4, 0x00000000))
					{
						Var4 = 0x00000000;
						Var4.f_1 = 0x00000000;
					}
				}
				uParam1->f_DD[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_89(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0x00000000;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0x00000000;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0x00000000;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0x00000000;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0x00000000;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0x00000000;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0x00000000;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0x00000000;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0x00000000;
				break;
			
			case 0xC78D71B4:
			case 0xDDE2A27C:
			case 0x176898A6:
			case 0xA52E2957:
			case 0x8210D4D5:
			case 0xD866ACD1:
			case 0x8F796EC9:
			case 0xCE1A1A4D:
			case 0xEB779748:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 0x12E82D3D:
			case 0xBD248B55:
			case 0x0781FE4A:
			case 0xCD274149:
			case 0xBA45E8B8:
			case 0x94117305:
			case 0x19044EE0:
			case 0x97EA20B8:
			case 0x476BF155:
			case 0xB62D1F67:
			case 0xAF3696A1:
			case 0x917F6C8C:
			case 0x2B5EF5EC:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000009:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case 0xBD248B55:
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x84C8B2D3;
					break;
				
				case 0x00000001:
					iVar0 = 0x937ED0B7;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0x00000000)
			{
				iVar1 = func_87(iParam0, &uVar4);
				if (iVar1 != 0xFFFFFFFF)
				{
					iVar2 = 0x00000000;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var5))
						{
							if (!func_74(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_91(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x76D04710;
			break;
		
		case 0x00000001:
			iVar0 = 0x4C1DA136;
			break;
		
		case 0x00000002:
			iVar0 = 0x378DDAD7;
			break;
		
		case 0x00000003:
			iVar0 = 0xD6D57281;
			break;
		
		case 0x00000004:
			iVar0 = 0xA9066703;
			break;
		
		case 0x00000005:
			iVar0 = 0x0BAB693A;
			break;
		
		case 0x00000006:
			iVar0 = 0xE5D87BED;
			break;
		
		case 0x00000007:
			iVar0 = 0x3573FB94;
			break;
		
		case 0x00000008:
			iVar0 = 0x1D838821;
			break;
		
		case 0x00000009:
			iVar0 = 0xBB200985;
			break;
		
		case 0x0000000A:
			iVar0 = 0xE14402F7;
			break;
		
		case 0x0000000B:
			iVar0 = 0xCC07A8AD;
			break;
		
		case 0x0000000C:
			iVar0 = 0xAF5E8908;
			break;
		
		case 0x0000000D:
			iVar0 = 0xDFA31A8F;
			break;
		
		case 0x0000000E:
			iVar0 = 0x644B237F;
			break;
		
		case 0x0000000F:
			iVar0 = 0xCCC586AE;
			break;
		
		case 0x00000010:
			iVar0 = 0x8150911E;
			break;
		
		case 0x00000011:
			iVar0 = 0x7B37201A;
			break;
		
		case 0x00000012:
			iVar0 = 0xDFEC2248;
			break;
		
		case 0x00000013:
			iVar0 = 0x6A4A26BC;
			break;
		
		case 0x00000014:
			iVar0 = 0x1A378022;
			break;
		
		case 0x00000015:
			iVar0 = 0xFE852271;
			break;
		
		case 0x00000016:
			iVar0 = 0x74300D78;
			break;
		
		case 0x00000017:
			iVar0 = 0x8C4B2ADF;
			break;
		
		case 0x00000018:
			iVar0 = 0xC26535F0;
			break;
		
		case 0x00000019:
			iVar0 = 0x131AA6B3;
			break;
		
		case 0x0000001A:
			iVar0 = 0xD6909BE9;
			break;
		
		case 0x0000001B:
			iVar0 = 0xEF3FD8A1;
			break;
		
		case 0x0000001C:
			iVar0 = 0xD7119454;
			break;
		
		case 0x0000001D:
			iVar0 = 0x14B69421;
			break;
		
		case 0x0000001E:
			iVar0 = 0x697229C1;
			break;
		
		case 0x0000001F:
			iVar0 = 0x0B522FBC;
			break;
		
		case 0x00000021:
			iVar0 = 0x0ED4684E;
			break;
		
		case 0x00000022:
			iVar0 = 0x170AFF96;
			break;
		
		case 0x00000023:
			iVar0 = 0xF6A12136;
			break;
		
		case 0x00000024:
			iVar0 = 0x1A0BDEFC;
			break;
		
		case 0x00000025:
			iVar0 = 0xFD243A87;
			break;
		
		case 0x00000026:
			iVar0 = 0x22541EBE;
			break;
	}
	return iVar0;
}

float func_92(int iParam0)
{
	if (func_95(iParam0))
	{
		if (func_94(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_93(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_93(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3()) / 1000f);
}

bool func_94(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000002);
}

bool func_95(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000001);
}

int func_96()
{
	if (Global_1406C0)
	{
		return 0x00000001;
	}
	if (func_98())
	{
		return 0x00000001;
	}
	if (func_97())
	{
		return 0x00000001;
	}
	return func_4(0x0000007C, 0xFFFFFFFF);
}

bool func_97()
{
	return Global_140861;
}

bool func_98()
{
	return Global_140863;
}

void func_99()
{
	int iVar0;
	
	iVar0 = 0x00000001;
	while (iVar0 <= 0x00000031)
	{
		if (!unk_0x5E109EC687D2605A(iVar0))
		{
			if (unk_0x69886048DD96B246(iVar0))
			{
				func_127(iVar0, 0x00000001);
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000033;
	while (iVar0 <= 0x0000003B)
	{
		if (!unk_0x5E109EC687D2605A(iVar0))
		{
			if (unk_0x69886048DD96B246(iVar0))
			{
				func_127(iVar0, 0x00000001);
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000046;
	while (iVar0 <= 0x0000004D)
	{
		if (!unk_0x5E109EC687D2605A(iVar0))
		{
			if (unk_0x69886048DD96B246(iVar0))
			{
				func_127(iVar0, 0x00000001);
			}
		}
		iVar0++;
	}
}

bool func_100(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_6();
	}
	iVar0 = func_101(iParam1);
	iVar1 = unk_0x0A4C9A3D51EAE31F(iVar0);
	return unk_0xEAE0D21A50E6C7F4(iVar1, iParam0);
}

int func_101(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_6();
	}
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000392;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000393;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000394;
			break;
		
		case 0x00000003:
			iVar0 = 0x00000395;
			break;
		
		case 0x00000004:
			iVar0 = 0x00000396;
			break;
	}
	return iVar0;
}

int func_102()
{
	if (func_104() && func_103(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_103(int iParam0)
{
	return Global_140676[iParam0];
}

var func_104()
{
	return func_103(func_6() + 1);
}

bool func_105(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

void func_106(var uParam0)
{
	float fVar0;
	
	fVar0 = Global_4127F0;
	uParam0->f_50 = (uParam0->f_50 + unk_0x6117725E0134737F());
	if (!func_105(uParam0))
	{
		return;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0x00000000);
		return;
	}
	if (func_160(0x0000000E))
	{
		fVar0 = 10f;
	}
	if (func_113(uParam0) < fVar0)
	{
		return;
	}
	if (func_111(uParam0, 0x00000000))
	{
		return;
	}
	if (func_109((*uParam0)[0x00000000]))
	{
		func_108(uParam0);
		func_107(uParam0);
		func_112(uParam0, 0x00000000);
	}
}

void func_107(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_111(uParam0, iVar0))
		{
			iVar0 = *uParam0 + 100;
		}
		iVar0++;
	}
}

void func_108(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000001;
	if (func_111(uParam0, 0x00000000))
	{
		return;
	}
	while (iVar0 < *uParam0)
	{
		(*uParam0)[(iVar0 - 0x00000001)] = (*uParam0)[iVar0];
		iVar0++;
	}
}

int func_109(int iParam0)
{
	if (unk_0x5E109EC687D2605A(iParam0))
	{
		return 0x00000000;
	}
	if (func_160(0x0000000E) && !func_110(iParam0))
	{
		return 0x00000000;
	}
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

int func_110(int iParam0)
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

bool func_111(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_112(var uParam0, float fParam1)
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

float func_113(var uParam0)
{
	return uParam0->f_50;
}

int func_114()
{
	float fVar0;
	
	if (unk_0x8CD06866876216F2() || Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			fVar0 = unk_0x5B096932B3053142();
			if (fVar0 > 0.01f && unk_0x0EFF6B4415DAF4A1())
			{
				func_133(0x0000000E, SYSTEM::FLOOR((fVar0 * 100f)));
			}
			if (fVar0 >= 0.975f)
			{
				func_127(0x0000000E, 0x00000001);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_115(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

void func_116(bool bParam0)
{
	if (Global_12B4E)
	{
		if (bParam0)
		{
			func_10(bParam0);
		}
		func_3(bParam0);
		func_15(bParam0);
		if (bParam0)
		{
		}
	}
	func_126(bParam0);
	func_119(bParam0);
	func_118();
	func_117();
	if (bParam0)
	{
		if (func_95(&iLocal_58))
		{
		}
	}
}

int func_117()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5E109EC687D2605A(0x00000032))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar0 = (iVar0 + unk_0x959C6922055154B5(joaat("first_person_cam_time")) * 24);
	iVar0 = (iVar0 + unk_0xBD23F6A10B02FA04(joaat("first_person_cam_time")));
	iVar1 = (iVar1 + unk_0x959C6922055154B5(joaat("mp_first_person_cam_time")) * 24);
	iVar1 = (iVar1 + unk_0xBD23F6A10B02FA04(joaat("mp_first_person_cam_time")));
	if ((iVar0 + iVar1) >= 0x0000000F)
	{
		func_127(0x00000032, 0x00000001);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_118()
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(0x00000016))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x76B4C2FC8A367FEA();
	if (iVar0 > 0x00000000)
	{
		if (Global_7938 < iVar0)
		{
			if (Global_7938 >= 0x00000000)
			{
				func_133(0x00000016, iVar0);
			}
			Global_7938 = iVar0;
		}
	}
	if (unk_0x76B4C2FC8A367FEA() >= 0x00000032)
	{
		func_127(0x00000016, 0x00000001);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_119(bool bParam0)
{
	var uVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x5E109EC687D2605A(0x00000011))
	{
		return 0x00000000;
	}
	uVar0[0x00000000] = func_125();
	uVar0[0x00000001] = func_124();
	uVar0[0x00000002] = func_123();
	uVar0[0x00000003] = func_122();
	uVar0[0x00000004] = func_121();
	uVar0[0x00000005] = func_120();
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000006)
	{
		if (uVar0[iVar2])
		{
			iVar1++;
		}
		iVar2++;
	}
	unk_0x6FB46C25CCB7E6D5(joaat("num_discipline_gold_earned"), &iVar3, 0xFFFFFFFF);
	if (iVar1 > iVar3 && iVar1 > 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(joaat("num_discipline_gold_earned"), iVar1, 0x00000001);
		func_133(0x00000011, iVar1);
	}
	if (bParam0)
	{
	}
	if (!uVar0[0x00000000])
	{
		if (bParam0)
		{
		}
		return 0x00000000;
	}
	if (!uVar0[0x00000001])
	{
		if (bParam0)
		{
		}
		return 0x00000000;
	}
	if (!uVar0[0x00000002])
	{
		if (bParam0)
		{
		}
		return 0x00000000;
	}
	if (!uVar0[0x00000003])
	{
		if (bParam0)
		{
		}
		return 0x00000000;
	}
	if (!uVar0[0x00000004])
	{
		if (bParam0)
		{
		}
		return 0x00000000;
	}
	if (!uVar0[0x00000005])
	{
		if (bParam0)
		{
		}
		return 0x00000000;
	}
	func_127(0x00000011, 0x00000001);
	return 0x00000001;
}

int func_120()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		if (Global_1B416.f_7BF[0x00000000 /*121*/][iVar0 /*10*/].f_8 == 0x00000003)
		{
			return 0x00000001;
		}
		else if (Global_1B416.f_7BF[0x00000001 /*121*/][iVar0 /*10*/].f_8 == 0x00000003)
		{
			return 0x00000001;
		}
		else if (Global_1B416.f_7BF[0x00000002 /*121*/][iVar0 /*10*/].f_8 == 0x00000003)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_121()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000016)
	{
		if (Global_1B416.f_4AC6[0x00000000 /*271*/].f_3[iVar0 /*12*/].f_3 == 0x00000003)
		{
			return 0x00000001;
		}
		else if (Global_1B416.f_4AC6[0x00000001 /*271*/].f_3[iVar0 /*12*/].f_3 == 0x00000003)
		{
			return 0x00000001;
		}
		else if (Global_1B416.f_4AC6[0x00000002 /*271*/].f_3[iVar0 /*12*/].f_3 == 0x00000003)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_122()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618B.f_1, iVar0))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_123()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_2, iVar0))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_124()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		if (Global_1B416.f_4A43.f_13[iVar0] == 0x00000001)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_125()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Global_1B416.f_4E26[iVar0] == 0x00000001)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_126(bool bParam0)
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
		func_133(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_127(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_127(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_128(iParam0, iParam1);
}

int func_128(int iParam0, int iParam1)
{
	if (func_160(0x0000000E) && !func_110(iParam0))
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
	if (func_105(&Global_4127F1))
	{
		if (func_131(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_129(&Global_4127F1, iParam0))
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

int func_129(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_160(0x0000000E) && !func_110(iParam1))
	{
		return 0x00000000;
	}
	if (func_131(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0x00000000);
	}
	func_165(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_130(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_130(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_160(0x0000000E) && !func_110(iParam1))
	{
		return 0x00000000;
	}
	if (func_131(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_113(uParam0) < 0f)
	{
		func_112(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_111(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_131(var uParam0, int iParam1)
{
	return func_132(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_132(var uParam0, int iParam1)
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

int func_133(int iParam0, int iParam1)
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

int func_134(bool bParam0)
{
	int iVar0;
	
	iVar0 = (func_147(bParam0) + func_135(bParam0));
	if (bParam0)
	{
	}
	return iVar0;
}

int func_135(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	if (bParam0)
	{
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4889)
	{
		if (Global_1B416.f_4889[iVar0 /*6*/].f_3 != 0xFFFFFFFF && func_145(iVar0, 0x00000007))
		{
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			while (iVar5 < func_143(iVar0, 0x00000007))
			{
				iVar7 = func_141(iVar0, 0x00000007, iVar5);
				if (!Global_F129[iVar7 /*13*/].f_7)
				{
					if (func_138(iVar7) == 0x00000001)
					{
						iVar4++;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_137(iVar4, iVar3, 0x00000000);
			iVar2 = func_136(fVar6);
			if (iVar0 >= 0x00000034 && iVar0 <= 0x00000038)
			{
				if (bParam0)
				{
				}
				iVar2 = Global_1B416.f_92B[(iVar0 - 0x00000034) /*2*/];
				fVar6 = 0f;
			}
			if (fVar6 >= 100f || iVar2 == 0x00000003)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_136(float fParam0)
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

float func_137(int iParam0, int iParam1, bool bParam2)
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

int func_138(int iParam0)
{
	if (func_139(iParam0, func_140(Global_F129[iParam0 /*13*/].f_4)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_139(int iParam0, int iParam1)
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
	if (((iParam0 == 0x00000371 || iParam0 == 0x00000379) || iParam0 == 0x00000381) && Global_1B416.f_6143[0x00000004 /*4*/] == func_56())
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

int func_140(int iParam0)
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

int func_141(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0x00000001:
			return Global_15DBC[iParam0 /*34*/].f_11[iParam2];
			break;
		
		case 0x00000007:
			return func_142(iParam0, iParam2);
			break;
		
		default:
			break;
	}
	return 0x00000392;
}

int func_142(int iParam0, int iParam1)
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

int func_143(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000001:
			return Global_15DBC[iParam0 /*34*/].f_10;
			break;
		
		case 0x00000007:
			return func_144(iParam0);
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_144(int iParam0)
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

int func_145(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000001:
			return !unk_0xEAE0D21A50E6C7F4(Global_15DBC[iParam0 /*34*/].f_F, 0x00000005);
			break;
		
		case 0x00000007:
			return func_146(iParam0);
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_146(int iParam0)
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

int func_147(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	if (bParam0)
	{
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_2378.f_14A)
	{
		if (Global_1B416.f_2378.f_14A[iVar0 /*6*/].f_3 != 0xFFFFFFFF && func_145(iVar0, 0x00000001))
		{
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar8 = 0xFFFFFFFF;
			iVar5 = 0x00000000;
			while (iVar5 < func_143(iVar0, 0x00000001))
			{
				iVar7 = func_141(iVar0, 0x00000001, iVar5);
				if (!Global_F129[iVar7 /*13*/].f_7)
				{
					if (func_138(iVar7) == 0x00000001)
					{
						iVar4++;
					}
					switch (iVar7)
					{
						case 0x0000002A:
						case 0x00000037:
						case 0x00000055:
						case 0x00000046:
						case 0x00000065:
							iVar8 = func_148(iVar7);
							if (iVar8 >= 0x7FFFFFFF)
							{
								iVar8 = 0x00000001;
							}
							break;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_137(iVar4, iVar3, 0x00000000);
			iVar2 = func_136(fVar6);
			if (iVar8 > 0xFFFFFFFF)
			{
				iVar2 = iVar8;
			}
			if (fVar6 >= 100f || iVar2 == 0x00000003)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
	}
	return iVar1;
}

int func_148(int iParam0)
{
	int iVar0;
	
	iVar0 = func_140(Global_F129[iParam0 /*13*/].f_4);
	if (iVar0 > 0xFFFFFFFE)
	{
		return iVar0;
	}
	return 0x00000000;
}

void func_149()
{
	int iVar0;
	int iVar1;
	
	unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000);
	if (!unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "creatures@shark@move", "attack_player", 0x00000003))
	{
		func_127(0x00000019, 0x00000001);
		return;
	}
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0xA390E7DD86EDBEA0(unk_0x16F2683693E537C9());
		if (unk_0xEC560E589DF8370E(iVar0))
		{
			iVar1 = unk_0x940C1429253D3B1B(iVar0);
			if (func_150(iVar1))
			{
				if (unk_0x134B62B726CEC8E6(iVar1) == joaat("a_c_sharktiger"))
				{
					func_127(0x00000019, 0x00000001);
					return;
				}
			}
		}
	}
}

bool func_150(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

void func_151()
{
	switch (iLocal_55)
	{
		case 0x00000000:
			fLocal_63 = 0f;
			if (!unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
			{
				return;
			}
			if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				return;
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) >= 0x00000003 && unk_0x2C1AA3A291786CDC() == 0x00000000)
			{
				if (func_156() == 0x00000002)
				{
					func_162(&iLocal_58);
					iLocal_55++;
				}
			}
			break;
		
		case 0x00000001:
			if (func_155() || unk_0x991B1F0980C62628())
			{
				return;
			}
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000003)
			{
				func_154(&iLocal_58);
				iLocal_55 = 0x00000000;
				return;
			}
			if (unk_0x2C1AA3A291786CDC() == 0x00000001)
			{
				func_154(&iLocal_58);
				iLocal_55 = 0x00000000;
				return;
			}
			if (func_156() < 0x00000002)
			{
				func_154(&iLocal_58);
				iLocal_55 = 0x00000000;
				return;
			}
			if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				func_154(&iLocal_58);
				iLocal_55 = 0x00000000;
				return;
			}
			fLocal_63 = func_153(&iLocal_58);
			if (fLocal_63 >= 180f)
			{
				func_127(0x00000018, 0x00000001);
				func_152(&iLocal_58);
				iLocal_55++;
			}
			break;
		
		case 0x00000002:
			iLocal_55++;
			break;
	}
}

void func_152(int iParam0)
{
	if (func_95(iParam0))
	{
		if (!func_94(iParam0))
		{
			iParam0->f_2 = (func_93(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
			unk_0x5D96D8530B3D0904(iParam0, 0x00000002);
		}
	}
}

float func_153(int iParam0)
{
	if (func_95(iParam0))
	{
		if (func_94(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_93(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_154(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0x00000000;
}

int func_155()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_156()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_158(0x00000002);
	if (func_157(iVar1, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_17183, 0x00000002))
	{
		iVar0++;
	}
	iVar1 = func_158(0x00000001);
	if (func_157(iVar1, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_17183, 0x00000001))
	{
		iVar0++;
	}
	iVar1 = func_158(0x00000000);
	if (func_157(iVar1, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_17183, 0x00000000))
	{
		iVar0++;
	}
	return iVar0;
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_58(iParam0);
		if (iVar0 > 0x00000003)
		{
			return 0x00000000;
		}
		if (func_158(iVar0) != iParam0)
		{
			return 0x00000000;
		}
		if (iParam1 == 0x00000000)
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				return 0x00000000;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_17185, iVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_158(int iParam0)
{
	if (iParam0 > 0x00000003)
	{
		return 0x00000000;
	}
	if (iParam0 == func_56())
	{
		return unk_0x16F2683693E537C9();
	}
	return Global_177DE[func_159(iParam0)];
}

int func_159(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	else if (iParam0 == 0x00000002)
	{
		return 0x00000002;
	}
	else if (iParam0 == 0x00000001)
	{
		return 0x00000001;
	}
	else if (iParam0 == 0x00000091)
	{
		return 0x00000003;
	}
	return 0x00000004;
}

bool func_160(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_161(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_162(int iParam0)
{
	func_163(iParam0, 0f);
}

void func_163(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_93(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

void func_164(var uParam0, int iParam1)
{
	uParam0->f_4F = iParam1;
	if (uParam0->f_4F)
	{
		func_112(uParam0, 0x00000000);
	}
}

void func_165(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_166(uParam0, iVar0);
		iVar0++;
	}
	func_112(uParam0, (Global_4127F0 - 0.5f));
}

void func_166(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_167()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x0000004E;
	iVar0 = 0x00000001;
	while (iVar0 <= (iVar1 - 0x00000001))
	{
		if (unk_0x5E109EC687D2605A(iVar0))
		{
		}
		iVar0++;
	}
}

void func_168(int iParam0)
{
	if (iParam0 > 0x00000000)
	{
	}
}

