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
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	struct<4> Local_83 = { 0, 0, 0, 0 } ;
	struct<16> Local_84 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
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
	iLocal_88 = 0xFFFFFFFF;
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) > 0x00000001)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	unk_0xB57F88F0123F4C38();
	iVar0 = 0x00000000;
	iVar1 = iVar0;
	SYSTEM::SETTIMERA(0x00000000);
	Global_A569 = 0x00000000;
	func_39();
	StringCopy(&Global_A56A, "CC_SUBSTR", 16);
	iVar2 = 0xFFFFFFFF;
	iVar3 = 0xFFFFFFFF;
	bVar4 = 0x00000000;
	bVar5 = 0x00000000;
	iVar6 = 0x00000000;
	iVar7 = 0xFFFFFFFF;
	iVar8 = Global_12B4E;
	while (0x00000001)
	{
		if (Global_12B4E)
		{
			func_35();
		}
		else
		{
			func_33();
		}
		func_26();
		if (Global_12B4E != iVar8)
		{
			func_25();
			func_39();
			iVar2 = 0xFFFFFFFF;
			iVar8 = Global_12B4E;
			while (unk_0x991B1F0980C62628())
			{
				SYSTEM::WAIT(0x000007D0);
			}
		}
		if (Global_A56F)
		{
			if (Global_A571 > 0xFFFFFFFF)
			{
				if (!Global_A4A7[Global_A571 /*32*/].f_6)
				{
					if (!func_23(Global_A571, 0x00000001))
					{
						Global_A571 = 0xFFFFFFFF;
					}
				}
			}
		}
		if (func_19())
		{
			iVar2 = 0xFFFFFFFF;
			func_25();
		}
		if (iVar2 > 0xFFFFFFFF)
		{
			if (!Global_A56F)
			{
				if (Global_A571 != iVar2)
				{
					if (func_18(Global_A571))
					{
						func_25();
						if (!Global_A4A7[iVar2 /*32*/].f_5 && Global_A4A7[iVar2 /*32*/])
						{
							if (!func_19())
							{
								if (!Global_A4A7[iVar2 /*32*/].f_7)
								{
									if (!Global_A4A7[iVar2 /*32*/].f_6)
									{
										if (!Global_A4A7[iVar2 /*32*/].f_C)
										{
											func_17(Global_A4A7[iVar2 /*32*/].f_8, Global_A4A7[iVar2 /*32*/].f_3);
										}
										else
										{
											func_16(Global_A4A7[iVar2 /*32*/].f_8, Global_A4A7[iVar2 /*32*/].f_D, Global_A4A7[iVar2 /*32*/].f_3, Global_A4A7[iVar2 /*32*/].f_1E);
										}
										Global_A571 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
		switch (iVar0)
		{
			case 0x00000000:
				iVar2 = func_15();
				if (unk_0x6957460DC85EB2CC(0x00000002, 0x00000033))
				{
					iVar6 = 0x00000001;
				}
				if (!func_19())
				{
					if (iVar2 > 0xFFFFFFFF && iVar6)
					{
						if (unk_0xBFC0798A6E3417F9(0x00000002, 0x00000033))
						{
							Global_A4A7[iVar2 /*32*/].f_4 = 0x00000001;
							Global_A4A7[iVar2 /*32*/].f_1D = 0x00000000;
							iVar7 = Global_A4A7[iVar2 /*32*/].f_1;
							iVar0 = 0x00000001;
							Global_A568 = 0x00000000;
						}
					}
				}
				else
				{
					iVar2 = 0xFFFFFFFF;
				}
				if (iVar3 != iVar2)
				{
					if (iVar2 != 0xFFFFFFFF)
					{
						if (!unk_0x28072FDD60CE3A6E(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0x00000001))
						{
							if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0x00000000))
							{
								if (unk_0x718E6F84AA2510BB(0x00000000, 0x00000065))
								{
									bVar5 = 0x00000001;
									unk_0x38C3A68D7861DCFD(0x00000000, 0x00000065, 0x00000001);
								}
								if (unk_0x718E6F84AA2510BB(0x00000000, 0x0000004A))
								{
									bVar4 = 0x00000001;
									unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004A, 0x00000001);
								}
							}
						}
					}
					else
					{
						if (bVar5)
						{
							unk_0xEAB026E686C0D991(0x00000000, 0x00000065, 0x00000001);
							bVar5 = 0x00000000;
						}
						if (bVar4)
						{
							unk_0xEAB026E686C0D991(0x00000000, 0x0000004A, 0x00000001);
							bVar4 = 0x00000000;
						}
					}
					iVar3 = iVar2;
				}
				break;
			
			case 0x00000001:
				if (iVar2 < 0x00000000 || func_14() == 0x00000000)
				{
					iVar0 = 0x00000000;
				}
				else
				{
					if (SYSTEM::TIMERA() > 0x00001388)
					{
						Global_A4A7[iVar2 /*32*/].f_7 = 0x00000001;
						iVar0 = 0x00000000;
					}
					else if (func_13(iVar2))
					{
						iVar0 = 0x00000002;
					}
					if (!iVar7 == Global_A4A7[iVar2 /*32*/].f_1)
					{
						iVar0 = 0x00000000;
					}
					if (Global_A4A7[iVar2 /*32*/].f_7 || Global_A4A7[iVar2 /*32*/] == 0x00000000)
					{
						iVar0 = 0x00000000;
					}
				}
				break;
			
			case 0x00000002:
				if (Global_A568)
				{
					func_25();
				}
				if (unk_0xBFC0798A6E3417F9(0x00000002, 0x00000033))
				{
					if (iVar2 > 0xFFFFFFFF)
					{
						Global_A4A7[iVar2 /*32*/].f_1D = 0x00000000;
					}
				}
				if (Global_A569)
				{
					Global_A569 = 0x00000000;
					iVar0 = 0x00000000;
				}
				else if (iVar2 > 0xFFFFFFFF)
				{
					if (!(Global_A4A7[iVar2 /*32*/].f_4 || Global_A4A7[iVar2 /*32*/].f_7))
					{
						Global_A569 = 0x00000000;
						iVar2 = 0xFFFFFFFF;
					}
				}
				if (iVar2 > 0xFFFFFFFF)
				{
					if (Global_A4A7[iVar2 /*32*/].f_7 || Global_A4A7[iVar2 /*32*/] == 0x00000000)
					{
						iVar2 = 0xFFFFFFFF;
					}
				}
				if (iVar2 == 0xFFFFFFFF)
				{
					iVar0 = 0x00000000;
					iVar6 = 0x00000000;
				}
				break;
		}
		if (iVar2 > 0xFFFFFFFF)
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002E, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000036, 0x00000001);
		}
		if (iVar0 != iVar1)
		{
			iVar1 = iVar0;
			SYSTEM::SETTIMERA(0x00000000);
			iVar6 = 0x00000000;
		}
		func_12();
		func_10(&iVar2);
		Global_A56E = 0x00000000;
		Global_A56F = 0x00000000;
		func_1();
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	int iVar0;
	
	if (!bLocal_80)
	{
		return;
	}
	iVar0 = 0x00000001;
	if (iLocal_85 == 0x00000001)
	{
		iVar0 = 0x00000000;
	}
	if (bLocal_81)
	{
		if (bLocal_82)
		{
			unk_0x1E3A202C24F57DA6(0x00000000);
		}
		unk_0xB6A2CAEFEE28197D(&Local_83);
		if (bLocal_82)
		{
			unk_0xD06AC7C87A34A6AD(&Local_84);
		}
		else
		{
			unk_0x6B012227B3921E18(&Global_A56A);
			unk_0x6B012227B3921E18(&Local_84);
		}
		unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, iVar0, 0x00000032);
	}
	else
	{
		unk_0xB6A2CAEFEE28197D(&Local_83);
		unk_0x6B012227B3921E18(&Global_A56A);
		unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, iVar0, 0x00000032);
	}
	switch (iLocal_85)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			func_9(0x00000000);
			break;
		
		case 0x00000002:
			func_2(0x00000000);
			break;
	}
}

void func_2(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_4(0x00000001))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_3())
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Boss_Message_Orange", sVar0, 0x00000000);
	}
}

bool func_3()
{
	return Global_2537E2.f_AA3[0x00000000 /*80*/].f_1 != 0x00000000;
}

bool func_4(bool bParam0)
{
	return func_5(unk_0xD803B885F5E47A62(), bParam0);
}

int func_5(int iParam0, bool bParam1)
{
	return func_6(iParam0, bParam1, 0x00000001);
}

int func_6(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (func_7(iParam0, iParam2))
		{
			return 0x00000000;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_8() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_7(int iParam0, int iParam1)
{
	if (iParam0 != func_8())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_8())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_8()
{
	return 0xFFFFFFFF;
}

void func_9(int iParam0)
{
	unk_0x2D03DF47CD5D6E35(0x00000003, 0x00000015, 0x000000C8, 0x00000000, 0x00000000);
	if (iParam0 && !func_3())
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0x00000000);
	}
}

void func_10(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/] && Global_A4A7[iVar0 /*32*/].f_4)
		{
			if (Global_A4A7[iVar0 /*32*/].f_1F != 0x00000000)
			{
				if (!unk_0x1727A44C562FBED2(Global_A4A7[iVar0 /*32*/].f_1F))
				{
					if (*iParam0 > 0xFFFFFFFF)
					{
						func_11();
					}
					Global_A4A7[iVar0 /*32*/] = 0x00000000;
					Global_A4A7[iVar0 /*32*/].f_1F = 0x00000000;
					Global_A4A7[iVar0 /*32*/] = 0x00000000;
					Global_A4A7[iVar0 /*32*/].f_4 = 0x00000000;
					Global_A4A7[iVar0 /*32*/].f_5 = 0x00000000;
					Global_A4A7[iVar0 /*32*/].f_2 = 0x00000000;
					Global_A4A7[iVar0 /*32*/].f_7 = 0x00000000;
					Global_A4A7[iVar0 /*32*/].f_6 = 0x00000000;
					Global_A4A7[iVar0 /*32*/].f_3 = 0x00000000;
					*iParam0 = 0xFFFFFFFF;
				}
			}
		}
		iVar0++;
	}
}

void func_11()
{
	if (Global_A571 != 0xFFFFFFFF || bLocal_80)
	{
		bLocal_80 = 0x00000000;
		Global_A571 = 0xFFFFFFFF;
	}
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/].f_7)
		{
			if (iVar0 == Global_A571)
			{
				func_25();
			}
			Global_A4A7[iVar0 /*32*/].f_1F = 0x00000000;
			Global_A4A7[iVar0 /*32*/] = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_4 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_2 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_6 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_1 = 0xFFFFFFFF;
			Global_A4A7[iVar0 /*32*/].f_3 = 0x00000000;
		}
		iVar0++;
	}
}

int func_13(int iParam0)
{
	if (iParam0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_A4A7[iParam0 /*32*/].f_5)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_14()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/] == 0x00000001)
		{
			if (Global_A4A7[iVar0 /*32*/].f_4 == 0x00000000)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0x00000000)
	{
		func_25();
	}
	return iVar1;
}

int func_15()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0xFFFFFFFF;
	iVar2 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/])
		{
			if (Global_A4A7[iVar0 /*32*/].f_2 > iVar1)
			{
				iVar2 = iVar0;
				iVar1 = Global_A4A7[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_16(struct<4> Param0, struct<16> Param1, var uParam2, var uParam3)
{
	Local_83 = { Param0 };
	Local_84 = { Param1 };
	bLocal_80 = 0x00000001;
	bLocal_81 = 0x00000001;
	iLocal_85 = uParam2;
	bLocal_82 = uParam3;
}

void func_17(struct<4> Param0, var uParam1)
{
	Local_83 = { Param0 };
	bLocal_80 = 0x00000001;
	bLocal_81 = 0x00000000;
	iLocal_85 = uParam1;
}

int func_18(int iParam0)
{
	int iVar0;
	
	if (Global_175B9 && Global_175B8)
	{
		return 0x00000000;
	}
	if (iParam0 > 0x00000000)
	{
		if (func_23(iParam0, 0x00000001) || bLocal_80)
		{
			return 0x00000001;
		}
	}
	if (unk_0xFEBC1E4EC9E001F0() && !unk_0x22EA6735D72412D2())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000006)
		{
			if (func_23(iVar0, 0x00000001))
			{
				return 0x00000001;
			}
			iVar0++;
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_19()
{
	if (Global_12061)
	{
		return 0x00000001;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0x00000001;
	}
	if (func_22(0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000001;
	}
	if (Global_A56E)
	{
		return 0x00000001;
	}
	if (unk_0x2F1FB0453B36C270(0x00000013))
	{
		return 0x00000001;
	}
	if (func_21(0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0x00000001;
	}
	if (func_20(0x00000008, 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000005:
			if (iParam1 > 0xFFFFFFFF)
			{
				return Global_150392.f_CB[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_418, iParam0);
}

bool func_21(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

int func_22(int iParam0)
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

bool func_23(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_24(iParam0);
	if (iParam1 == 0x00000000)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			return 0x00000000;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_A4A7[iVar0 /*32*/].f_6)
	{
		return 0x00000000;
	}
	bVar1 = 0x00000000;
	if (!Global_A4A7[iVar0 /*32*/].f_C)
	{
		unk_0xCECE25C7ECD44603(&(Global_A4A7[iVar0 /*32*/].f_8));
		unk_0x6B012227B3921E18(&Global_A56A);
		bVar1 = unk_0xE3789B9938DCEAE8(0x00000000);
	}
	else
	{
		unk_0xCECE25C7ECD44603(&(Global_A4A7[iVar0 /*32*/].f_8));
		unk_0x6B012227B3921E18(&Global_A56A);
		if (Global_A4A7[iVar0 /*32*/].f_1E)
		{
			unk_0xD06AC7C87A34A6AD(&(Global_A4A7[iVar0 /*32*/].f_D));
		}
		else
		{
			unk_0x6B012227B3921E18(&(Global_A4A7[iVar0 /*32*/].f_D));
		}
		bVar1 = unk_0xE3789B9938DCEAE8(0x00000000);
	}
	return bVar1;
}

int func_24(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_25()
{
	func_11();
	Global_A571 = 0xFFFFFFFF;
}

void func_26()
{
	if (!unk_0x991B1F0980C62628() && !func_32())
	{
		if (func_31(0x00000000))
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_2564C8.f_2AC.f_C)))
			{
				func_30();
				func_27(0x00000006, 0x00000000, 0x00000000);
			}
		}
	}
}

int func_27(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_120D2 = iParam0;
	bVar0 = iParam2 == 0x00000001;
	bVar1 = iParam2 == 0x00000002;
	bVar2 = iParam2 == 0x00000003;
	switch (Global_120D2)
	{
		case 0x00000003:
			Global_120D0 = 0x00000000;
			break;
		
		case 0x00000004:
			Global_120D0 = 0x00000003;
			break;
	}
	if (unk_0x8A22C4C08282BF26(joaat("appsecuroserv")) > 0x00000000)
	{
		if (bVar0)
		{
		}
		return 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(0x57FAD435) > 0x00000000)
	{
		if (bVar1)
		{
		}
		return 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(0x114E0BF4) > 0x00000000)
	{
		if (bVar2)
		{
		}
		return 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(joaat("appinternet")) > 0x00000000)
	{
		if ((bVar0 || bVar1) || bVar2)
		{
		}
		return 0x00000000;
	}
	if (Global_12B4E && func_29())
	{
		return 0x00000000;
	}
	if (!Global_12B4E && func_28())
	{
		return 0x00000000;
	}
	if (bVar0)
	{
		if (!unk_0x1FBF08B001C4788A("appSecuroServ"))
		{
			unk_0x92DCE5C81176D2B4("appSecuroServ");
			if (bParam1)
			{
				return 0x00000000;
			}
		}
		while (!unk_0x1FBF08B001C4788A("appSecuroServ"))
		{
			SYSTEM::WAIT(0x00000000);
		}
		SYSTEM::START_NEW_SCRIPT("appSecuroServ", 0x000011F0);
		unk_0x5E8C29AE121DF1C7("appSecuroServ");
		return 0x00000001;
	}
	if (bVar1)
	{
		if (!unk_0x1FBF08B001C4788A("appBikerBusiness"))
		{
			unk_0x92DCE5C81176D2B4("appBikerBusiness");
			if (bParam1)
			{
				return 0x00000000;
			}
		}
		while (!unk_0x1FBF08B001C4788A("appBikerBusiness"))
		{
			SYSTEM::WAIT(0x00000000);
		}
		SYSTEM::START_NEW_SCRIPT("appBikerBusiness", 0x000011F0);
		unk_0x5E8C29AE121DF1C7("appBikerBusiness");
		return 0x00000001;
	}
	if (bVar2)
	{
		if (!unk_0x1FBF08B001C4788A("appImportExport"))
		{
			unk_0x92DCE5C81176D2B4("appImportExport");
			if (bParam1)
			{
				return 0x00000000;
			}
		}
		while (!unk_0x1FBF08B001C4788A("appImportExport"))
		{
			SYSTEM::WAIT(0x00000000);
		}
		SYSTEM::START_NEW_SCRIPT("appImportExport", 0x000011F0);
		unk_0x5E8C29AE121DF1C7("appImportExport");
		return 0x00000001;
	}
	if (!unk_0x1FBF08B001C4788A("appInternet"))
	{
		unk_0x92DCE5C81176D2B4("appInternet");
		if (bParam1)
		{
			return 0x00000000;
		}
	}
	while (!unk_0x1FBF08B001C4788A("appInternet"))
	{
		SYSTEM::WAIT(0x00000000);
	}
	SYSTEM::START_NEW_SCRIPT("appInternet", 0x000011F0);
	unk_0x5E8C29AE121DF1C7("appInternet");
	return 0x00000001;
}

var func_28()
{
	return Global_12062;
}

var func_29()
{
	return Global_195E0C;
}

void func_30()
{
	Global_2564C8.f_2AC.f_1C = 0x00000000;
}

bool func_31(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2564C8.f_2AC.f_1C && unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_2564C8.f_2AC.f_1F);
	}
	return Global_2564C8.f_2AC.f_1C;
}

bool func_32()
{
	return Global_12061;
}

void func_33()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		if (Global_E53E[iVar1] < 0x00000000)
		{
			Global_E53E[iVar1] = 0x00000000;
			bVar0 = 0x00000001;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_34(0x00000000);
		func_34(0x00000001);
		func_34(0x00000002);
	}
}

void func_34(int iParam0)
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

void func_35()
{
	struct<13> Var0[1];
	struct<16> Var1[1];
	int iVar2;
	
	if (Global_1801BA != 0xFFFFFFFF)
	{
		Var0[0x00000000 /*13*/] = Global_1801BB[0x00000000];
		Var0[0x00000000 /*13*/].f_1 = Global_1801BB[0x00000001];
		Var0[0x00000000 /*13*/].f_2 = Global_1801BB[0x00000002];
		Var0[0x00000000 /*13*/].f_3 = Global_1801BB[0x00000003];
		Var0[0x00000000 /*13*/].f_4 = Global_1801BB[0x00000004];
		Var0[0x00000000 /*13*/].f_5 = Global_1801BB[0x00000005];
		Var0[0x00000000 /*13*/].f_6 = Global_1801BB[0x00000006];
		Var0[0x00000000 /*13*/].f_7 = Global_1801BB[0x00000007];
		Var0[0x00000000 /*13*/].f_8 = Global_1801BB[0x00000008];
		Var0[0x00000000 /*13*/].f_9 = Global_1801BB[0x00000009];
		Var0[0x00000000 /*13*/].f_A = Global_1801BB[0x0000000A];
		Var0[0x00000000 /*13*/].f_B = Global_1801BB[0x0000000B];
		Var0[0x00000000 /*13*/].f_C = Global_1801BB[0x0000000C];
		if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
		{
			if (!iLocal_86)
			{
				if (unk_0x341C9B6377CAD883(&(Var0[0x00000000 /*13*/])))
				{
					iLocal_86 = 0x00000001;
				}
			}
			if (iLocal_86)
			{
				if (unk_0xE13B4B9D87E527E9())
				{
				}
				else
				{
					if (unk_0xD0FC7E8A7D86B46C())
					{
						StringCopy(&(Global_200000[func_38() /*10930*/].f_2A01.f_12[Global_1801BA /*6*/]), unk_0xD7926DA4168DF7E1(&(Var0[0x00000000 /*13*/])), 24);
					}
					func_37();
				}
			}
		}
		else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
		{
			if (func_36(Var0[0x00000000 /*13*/]))
			{
				switch (iLocal_87)
				{
					case 0x00000000:
						iLocal_88 = unk_0x3F4BBF0887AB451C(&Var0, 0x00000001);
						if (iLocal_88 >= 0x00000000)
						{
							iLocal_87++;
						}
						break;
					
					case 0x00000001:
						iVar2 = unk_0x1C71EF085035D439(iLocal_88, &Var1, 0x00000001);
						switch (iVar2)
						{
							case 0xFFFFFFFF:
								func_37();
								break;
							
							case 0x00000000:
								MemCopy(&(Global_200000[func_38() /*10930*/].f_2A01.f_12[Global_1801BA /*6*/]), {Var1[0x00000000 /*16*/]}, 0x00000006);
								func_37();
								break;
							
							case 0x00000001:
								break;
						}
						break;
				}
			}
			else
			{
				func_37();
			}
		}
		else
		{
			if (func_36(Var0[0x00000000 /*13*/]))
			{
				StringCopy(&(Global_200000[func_38() /*10930*/].f_2A01.f_12[Global_1801BA /*6*/]), unk_0x8F1B0D2ECDA568E2(&(Var0[0x00000000 /*13*/])), 24);
			}
			func_37();
		}
	}
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 0x0000000D);
}

void func_37()
{
	Global_1801BA = 0xFFFFFFFF;
	iLocal_86 = 0x00000000;
	iLocal_88 = 0xFFFFFFFF;
	iLocal_87 = 0x00000000;
}

int func_38()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_39()
{
	int iVar0;
	
	Global_A568 = 0x00000000;
	Global_A56E = 0x00000000;
	Global_A56F = 0x00000000;
	Global_A570 = 0x00000001;
	Global_A571 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		Global_A4A7[iVar0 /*32*/] = 0x00000000;
		iVar0++;
	}
}

