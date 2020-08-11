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
	float fLocal_47 = 0f;
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
	var uLocal_62 = 0;
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
	int iLocal_73 = 0;
	struct<2> Local_74 = { 0, 0 } ;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	struct<2> Local_77 = { 0, 0 } ;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	struct<2> Local_80 = { 0, 0 } ;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<2> Local_83 = { 0, 0 } ;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	struct<2> Local_86 = { 0, 0 } ;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<2> Local_89 = { 0, 0 } ;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 0;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	StringCopy(&Local_74, "CELL_206", 16);
	StringCopy(&Local_77, "CELL_214", 16);
	StringCopy(&Local_80, "CELL_243", 16);
	StringCopy(&Local_83, "CELL_244", 16);
	StringCopy(&Local_86, "CELL_265", 16);
	StringCopy(&Local_89, "CELL_300", 16);
	unk_0xB57F88F0123F4C38();
	func_97(&iLocal_95);
	iLocal_92 = 0x00000000;
	func_95();
	func_94(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(0x00000005), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_84(0x00000000);
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_83();
		func_82();
		if (!Global_4C1E.f_1 == 0x00000009 && Global_4C1E.f_1 > 0x00000003)
		{
			switch (iLocal_73)
			{
				case 0x00000000:
					func_47();
					break;
				
				case 0x00000001:
					func_31();
					break;
				
				case 0x00000003:
					func_5();
					break;
				
				case 0x00000002:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_4C1E.f_1 != 0x00000008)
			{
				if (func_3())
				{
					func_2();
				}
			}
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
	Global_18D301.f_6 = 0x00000000;
	unk_0x10FAF14A60A0DBE1();
}

int func_3()
{
	if (Global_1F1A == 0x00000001 || Global_4C1E.f_1 < 0x00000007)
	{
		Global_4C11 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_4()
{
}

void func_5()
{
	int iVar0;
	
	Global_18D301.f_6 = 0x00000001;
	if (iLocal_94)
	{
		if (unk_0xB9132A06AE472728(0x00000002, Global_4BFF))
		{
			iLocal_94 = 0x00000000;
		}
		return;
	}
	if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9))
	{
		iLocal_73 = 0x00000001;
		iVar0 = func_29(iLocal_92, 0x00000000);
		func_6(iVar0);
		return;
	}
	if (unk_0xB9132A06AE472728(0x00000002, 0x000000CA))
	{
		iLocal_73 = 0x00000001;
		return;
	}
	UI::_SET_WARNING_MESSAGE_2("HUD_INPUT23", "BA_APP_PASS_W", 0x00000024, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_18D301.f_7[iParam0 /*8*/].f_2;
	if (Global_18D301.f_7[iParam0 /*8*/].f_1 == 0x00000001 && iLocal_93 == iVar0)
	{
		func_26(iVar0, Global_18D301.f_7[iParam0 /*8*/].f_6);
		func_13(iParam0);
	}
	Global_18D301.f_6 = 0x00000000;
	func_7(0x00000000);
}

void func_7(int iParam0)
{
	if (func_12())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_11())
		{
			func_9(0x00000001, 0x00000001);
		}
		else
		{
			func_9(0x00000000, 0x00000000);
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
	if (!func_8())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_8()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0x00000000))
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

int func_10(int iParam0)
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

bool func_11()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_12()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_13(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		if (Global_18D301.f_7[iParam0 /*8*/].f_1 == 0x00000001)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_18D301.f_7[iParam0 /*8*/].f_5, 0x00000000))
			{
				func_25();
				if (Global_18D301.f_7[iParam0 /*8*/].f_7 == 0x00000000)
				{
					func_25();
				}
				else
				{
					Global_18D301.f_4 = (Global_18D301.f_4 - 0x00000001);
					if (Global_18D301.f_4 < 0x00000000)
					{
						Global_18D301.f_4 = 0x00000000;
					}
					func_18();
				}
			}
			unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_16), Global_18D301.f_7[iParam0 /*8*/].f_2);
			unk_0xD59AE843FA2C6B40(Global_18D301.f_7[iParam0 /*8*/].f_4);
			func_17();
			func_15(0x00000000);
		}
		iVar0 = iParam0;
		while (iVar0 <= 0x00000008)
		{
			Global_18D301.f_7[iVar0 /*8*/] = { Global_18D301.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_18D301.f_7[0x00000009 /*8*/].f_1 = 0x00000000;
		Global_18D301.f_7[0x00000009 /*8*/].f_2 = func_14();
	}
}

int func_14()
{
	return 0xFFFFFFFF;
}

void func_15(int iParam0)
{
	if (!func_16(iParam0))
	{
		unk_0x5D96D8530B3D0904(&(Global_18D301.f_3), iParam0);
	}
}

bool func_16(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D301.f_3, iParam0);
}

void func_17()
{
	Global_18D301 = (Global_18D301 - 0x00000001);
}

void func_18()
{
	Global_556C = (Global_556C - 0x00000001);
	if (Global_556C < 0x00000000)
	{
		func_24("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_19();
}

void func_19()
{
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_94(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_20(0x00000001);
			func_94(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
}

void func_20(int iParam0)
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
	
	Global_5571 = 0x00000000;
	Global_1F19 = iParam0;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		Global_1EF5[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		iVar1 = 0x00000000;
		if (func_23(0x0000000E))
		{
			while (iVar1 < 0x00000022)
			{
				if (iParam0 == Global_1CC3[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_1CC3[iVar1 /*15*/].f_4)
					{
						if (Global_1EF5[iVar0] == 0x00000000)
						{
							Global_1ED1[iVar0] = iVar1;
							if (iVar1 == 0x00000003)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000003))
								{
									iVar2 = 0x0000002A;
									Global_4CD4 = 0x00000001;
								}
								else
								{
									iVar2 = 0x000000FF;
									Global_4CD4 = 0x00000000;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_22(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 0x0000000E)
								{
									func_21(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							Global_1EF5[iVar0] = 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 0x00000022)
			{
				if (iParam0 == Global_1CC3[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_1CC3[iVar1 /*15*/].f_4)
					{
						if (Global_1EF5[iVar0] == 0x00000000)
						{
							Global_1ED1[iVar0] = iVar1;
							if (iVar1 == 0x00000001)
							{
								iVar3 = 0x00000000;
								while (iVar3 < 0x00000023)
								{
									if (Global_1B416.f_3738[iVar3 /*104*/].f_18 != 0x00000000)
									{
										if (Global_1B416.f_3738[iVar3 /*104*/].f_1C == 0x00000000)
										{
											if (Global_1B416.f_3738[iVar3 /*104*/].f_63[Global_4C1E] == 0x00000001)
											{
												Global_5571++;
											}
										}
									}
									iVar3++;
								}
								func_21(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000007)
							{
								if (Global_12B4E)
								{
									iVar4 = 0x00000000;
									iVar4 = Global_4121D3;
									iVar5 = 0x00000000;
									while (iVar5 < 0x0000000C)
									{
										if (Global_4121D4[iVar5 /*104*/].f_18 != 0x00000000)
										{
											if (Global_4121D4[iVar5 /*104*/].f_1C == 0x00000000)
											{
												if (Global_4121D4[iVar5 /*104*/].f_63[Global_4C1E] == 0x00000001)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_21(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								else
								{
									switch (Global_4C1E)
									{
										case 0x00000000:
											iVar6 = Global_A66F;
											break;
										
										case 0x00000001:
											iVar6 = Global_A670;
											break;
										
										case 0x00000002:
											iVar6 = Global_A671;
											break;
										
										default:
											break;
									}
									func_21(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							else if (iVar1 == 0x0000000E)
							{
								func_21(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000014)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_22(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(Global_1CC2);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000002)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000006))
								{
									iVar7 = 0x0000002A;
								}
								else
								{
									iVar7 = 0x000000FF;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_22(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar7);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000003)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000003))
								{
									iVar8 = 0x0000002A;
									Global_4CD4 = 0x00000001;
								}
								else
								{
									iVar8 = 0x000000FF;
									Global_4CD4 = 0x00000000;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_22(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar8);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 0x00000008)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_22(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 0x00000017 && unk_0x7F8A39872A07D2CE(&(Global_1CC3[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000006))
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_22(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 0x00000039 && iVar1 == 0x00000017)
							{
								iVar9 = 0x00000000;
								iVar9 = Global_18D301.f_1;
								func_21(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_21(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0x00000000), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							Global_1EF5[iVar0] = 0x00000001;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_21(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_22(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_22(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_22(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_22(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_22(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_22(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_23(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_24(char* sParam0)
{
	if (Global_556C != 0x00000000)
	{
		if (!unk_0xEA6BC48857E0AC4C(sParam0))
		{
		}
		Global_556C = 0x00000000;
	}
}

void func_25()
{
	Global_18D301.f_1 = (Global_18D301.f_1 - 0x00000001);
	if (Global_18D301.f_1 < 0x00000000)
	{
		Global_18D301.f_1 = 0x00000000;
	}
}

void func_26(int iParam0, var uParam1)
{
	if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1A == func_14())
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1A = iParam0;
			Global_26B66F.f_1404.f_DD = uParam1;
			func_27(func_28(iParam0));
		}
	}
}

void func_27(int iParam0)
{
	struct<2> Var0;
	
	Var0 = 0xB9590ABC;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam0 == 0x00000000)
	{
		unk_0xFB061A86A7AC749F(0x00000001, &Var0, 0x00000002, iParam0);
	}
}

int func_28(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_29(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < func_30())
	{
		if (Global_18D301.f_7[iVar0 /*8*/].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 0x00000001);
			if (iParam0 < 0x00000000)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_30()
{
	return Global_18D301;
}

void func_31()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(iLocal_92, 0x00000000);
	if (iLocal_92 == 0xFFFFFFFF)
	{
		func_84(0x00000001);
		return;
	}
	iVar1 = Global_18D301.f_7[iVar0 /*8*/].f_2;
	if (!func_46(iVar1, 0x00000000, 0x00000001) || iLocal_93 != iVar1)
	{
		func_84(0x00000001);
		return;
	}
	func_41(&iLocal_95);
	if (func_39(&iLocal_95))
	{
		func_84(0x00000001);
		return;
	}
	if (func_38(&iLocal_95))
	{
		func_13(iVar0);
		func_84(0x00000001);
		return;
	}
	if (func_34(&iLocal_95))
	{
		if (func_33())
		{
			iLocal_94 = 0x00000001;
			iLocal_73 = 0x00000003;
		}
		else if (Global_18D301.f_7[iVar0 /*8*/] == 0x00000000)
		{
			func_6(iVar0);
		}
		else if (Global_18D301.f_7[iVar0 /*8*/] == 0x00000001)
		{
			func_32(iVar0);
		}
		else
		{
			func_7(0x00000000);
		}
	}
}

void func_32(int iParam0)
{
	unk_0x5D96D8530B3D0904(&Global_18040E, 0x0000000F);
	func_13(iParam0);
	Global_18D301.f_6 = 0x00000000;
	func_7(0x00000000);
}

bool func_33()
{
	return Global_1406A2;
}

int func_34(int iParam0)
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
	func_35();
	Global_4C08 = 0x00000001;
	return 0x00000001;
}

void func_35()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Accept", &Global_4C13, 0x00000001);
		func_36();
	}
}

void func_36()
{
	if (func_37())
	{
		unk_0x5A963FB0365294C8(0x00000005);
	}
}

int func_37()
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

int func_38(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000001))
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
	if (!unk_0xBFC0798A6E3417F9(0x00000002, Global_4C02))
	{
		return 0x00000000;
	}
	func_35();
	Global_4C08 = 0x00000001;
	return 0x00000001;
}

int func_39(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000002))
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
	if (!unk_0xBFC0798A6E3417F9(0x00000002, Global_4C00))
	{
		return 0x00000000;
	}
	func_40();
	Global_4C08 = 0x00000001;
	return 0x00000001;
}

void func_40()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Back", &Global_4C13, 0x00000001);
	}
}

void func_41(int iParam0)
{
	if (unk_0x1C0640BA9A7327B3() < iParam0->f_1)
	{
		return;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return;
	}
	if (unk_0xBFC0798A6E3417F9(0x00000002, Global_4C06) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B5))
	{
		func_44();
		iParam0->f_1 = unk_0x1C0640BA9A7327B3() + 50;
	}
	if (unk_0xBFC0798A6E3417F9(0x00000002, Global_4C07) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B4))
	{
		func_42();
		iParam0->f_1 = unk_0x1C0640BA9A7327B3() + 50;
	}
}

void func_42()
{
	func_94(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(0x00000003), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
	func_43();
}

void func_43()
{
	if (func_37())
	{
		if (Global_4CD5 == 0x00000000)
		{
			unk_0x5A963FB0365294C8(0x00000002);
		}
		else
		{
			unk_0x5A963FB0365294C8(0x00000001);
		}
	}
}

void func_44()
{
	func_94(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(0x00000001), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
	func_45();
}

void func_45()
{
	if (func_37())
	{
		if (Global_4CD5 == 0x00000000)
		{
			unk_0x5A963FB0365294C8(0x00000001);
		}
		else
		{
			unk_0x5A963FB0365294C8(0x00000002);
		}
	}
}

int func_46(int iParam0, bool bParam1, bool bParam2)
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

void func_47()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_30() > 0x00000001)
	{
		func_41(&iLocal_95);
	}
	if (func_34(&iLocal_95))
	{
		unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
		iVar0 = unk_0x7A8BB56B212464AC();
		while (!unk_0xC95D7AEEDEF4946B(iVar0))
		{
			SYSTEM::WAIT(0x00000000);
		}
		iLocal_92 = unk_0xA52833FE33F41C53(iVar0);
		iVar1 = func_29(iLocal_92, 0x00000000);
		switch (Global_18D301.f_7[iVar1 /*8*/].f_1)
		{
			case 0x00000000:
				return;
			
			case 0x00000001:
				func_49();
				break;
			
			default:
				return;
		}
		Global_4C1E.f_1 = 0x00000008;
		return;
	}
	if (func_38(&iLocal_95))
	{
		unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
		iVar2 = unk_0x7A8BB56B212464AC();
		while (!unk_0xC95D7AEEDEF4946B(iVar2))
		{
			SYSTEM::WAIT(0x00000000);
		}
		iLocal_92 = unk_0xA52833FE33F41C53(iVar2);
		iVar3 = func_29(iLocal_92, 0x00000000);
		switch (Global_18D301.f_7[iVar3 /*8*/].f_1)
		{
			case 0x00000000:
				return;
			
			case 0x00000001:
				func_13(iVar3);
				func_84(0x00000000);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_16(0x00000000))
	{
		func_48(0x00000000);
		func_84(0x00000000);
	}
}

void func_48(int iParam0)
{
	if (func_16(iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_18D301.f_3), iParam0);
	}
}

void func_49()
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	var uVar6[3];
	bool bVar7;
	int iVar8;
	int iVar9;
	char cVar10[16];
	struct<16> Var11;
	char cVar12[16];
	
	if (Global_4C1E.f_1 != 0x00000008)
	{
		Global_4C1E.f_1 = 0x00000008;
	}
	func_94(Global_4C0B, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(0x0000001A), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	bVar0 = 0x00000000;
	iVar3 = func_29(iLocal_92, 0x00000000);
	iLocal_93 = Global_18D301.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_18D301.f_7[iVar3 /*8*/].f_2;
	unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x0000001A);
	unk_0x3CAEA85DA607305E(0x00000000);
	if (func_46(iVar4, 0x00000000, 0x00000001))
	{
		Var5 = { func_81(iVar4) };
		unk_0x7ACC3006A87F8B39("STRING");
		unk_0x3A820E495A7BA3E5(func_75(iVar4));
		unk_0xD06AC7C87A34A6AD(&Var5);
		unk_0x779B34565F4D71B1();
		bVar0 = 0x00000001;
	}
	else
	{
		func_22("");
	}
	if (Global_18D301.f_7[iVar3 /*8*/] == 0x00000000)
	{
		if (Global_40001.f_3A70)
		{
			bVar7 = func_74(iVar4);
			iVar8 = 0x00000000;
			while (iVar8 < 0x00000003)
			{
				if (iVar9 < 0x00000003)
				{
					if (Global_18D84D[iVar4 /*615*/].f_B.f_B[iVar8] != func_14())
					{
						if (func_46(Global_18D84D[iVar4 /*615*/].f_B.f_B[iVar8], 0x00000000, 0x00000001))
						{
							uVar6[iVar9] = Global_18D84D[iVar4 /*615*/].f_B.f_B[iVar8];
							iVar9++;
						}
					}
				}
				iVar8++;
			}
			if (iVar9 == 0x00000000)
			{
				if (bVar7)
				{
					func_22("BA_APP_BODYCTA");
				}
				else
				{
					func_22("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar10, "BA_APP_BODY_T4", 16);
				if (bVar7)
				{
					StringCopy(&cVar10, "BA_APP_BODYCT4", 16);
				}
				if (iVar9 == 0x00000002)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar9 > 0x00000002)
				{
					if (bVar7)
					{
						StringCopy(&cVar10, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar10, "BA_APP_BODY_T6", 16);
					}
				}
				unk_0x7ACC3006A87F8B39(&cVar10);
				iVar8 = 0x00000000;
				while (iVar8 < iVar9)
				{
					Var11 = { func_81(uVar6[iVar8]) };
					unk_0xD06AC7C87A34A6AD(&Var11);
					iVar8++;
				}
				unk_0x779B34565F4D71B1();
			}
		}
		else
		{
			if (Global_18D301.f_58[iVar3 /*5*/].f_1)
			{
				if (Global_18D301.f_58[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar12, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar12, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_18D301.f_58[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar12, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar12, "BA_APP_BODY_T10", 16);
			}
			unk_0x7ACC3006A87F8B39(&cVar12);
			unk_0x6D99DF8263D35CE5(Global_18D301.f_58[iVar3 /*5*/]);
			unk_0x6D99DF8263D35CE5(func_73(iVar4));
			unk_0x6D99DF8263D35CE5(Global_18D301.f_58[iVar3 /*5*/].f_3);
			unk_0x6D99DF8263D35CE5(Global_18D301.f_58[iVar3 /*5*/].f_4);
			unk_0x779B34565F4D71B1();
		}
	}
	else if (Global_18D301.f_7[iVar3 /*8*/] == 0x00000001)
	{
		unk_0x7ACC3006A87F8B39("BA_APP_BODY_DM2");
		unk_0x3A820E495A7BA3E5(func_75(Global_18D301.f_7[iVar3 /*8*/].f_2));
		unk_0xD06AC7C87A34A6AD(func_61(Global_18D301.f_7[iVar3 /*8*/].f_2));
		unk_0x779B34565F4D71B1();
	}
	if (bVar0)
	{
		iVar2 = func_55(Global_18D301.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0x00000000)
		{
			bVar0 = 0x00000000;
		}
		else
		{
			sVar1 = unk_0x5283D58F79627134(iVar2);
		}
	}
	if (bVar0)
	{
		unk_0x024BC5F58A72410C(sVar1);
	}
	else
	{
		func_22(&Local_89);
	}
	unk_0x7E60D21B163E9D56();
	func_94(Global_4C0B, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(0x0000001A), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_53(&Local_86);
	func_50(0x0000000D, &Local_80, 0x0000000C, &Local_83, 0x00000004, &Local_74, &iLocal_95);
	iLocal_73 = 0x00000001;
}

void func_50(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6)
{
	func_51(0x00000002, iParam0, sParam1, 0x00000000, iParam6, 0xFFFFFFFF);
	func_51(0x00000001, iParam2, sParam3, 0x00000001, iParam6, 0x00000011);
	func_51(0x00000003, iParam4, sParam5, 0x00000002, iParam6, 0xFFFFFFFF);
}

void func_51(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam1 == 0x00000001)
	{
		func_21(Global_4C0B, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x0674E58A79778E99(iParam4, iParam3);
		func_52(iParam5, 0x00000000);
		return;
	}
	if (Global_4C12)
	{
		func_21(Global_4C0B, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(iParam4, iParam3);
		func_52(iParam5, 0x00000001);
		return;
	}
	func_21(Global_4C0B, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0x5D96D8530B3D0904(iParam4, iParam3);
	func_52(iParam5, 0x00000001);
}

void func_52(int iParam0, bool bParam1)
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

void func_53(char* sParam0)
{
	func_54(Global_4C0B, "SET_HEADER", sParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_54(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_22(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_22(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_22(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_22(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_22(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		func_56(iParam0, 0x00000001);
		return 0x00000000;
	}
	Global_153216[iVar0 /*5*/].f_4 = 0x00000001;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_56(int iParam0, bool bParam1)
{
	if (!func_46(iParam0, 0x00000000, 0x00000001))
	{
		return;
	}
	if (func_58(iParam0) != 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1532B9)
	{
		if (iParam0 == Global_1532B9.f_1)
		{
			return;
		}
	}
	if (func_57(iParam0))
	{
		return;
	}
	if (Global_1532DF >= 0x00000020)
	{
		return;
	}
	Global_1532BE[Global_1532DF] = iParam0;
	Global_1532DF++;
	if (bParam1)
	{
	}
}

int func_57(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532DF)
	{
		if (Global_1532BE[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_58(int iParam0)
{
	int iVar0;
	
	if (!func_46(iParam0, 0x00000000, 0x00000001))
	{
		return 0xFFFFFFFF;
	}
	if (Global_1532B7 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1532B7)
	{
		if (Global_153216[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_153216[iVar0 /*5*/].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_153216[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_59(iVar0);
			return 0xFFFFFFFF;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_59(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1532B7)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_153216[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_153216[iParam0 /*5*/].f_2 != 0x00000000)
		{
			StringCopy(&cVar1, unk_0x5283D58F79627134(Global_153216[iParam0 /*5*/].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_153216[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1532B7)
	{
		Global_153216[iVar2 /*5*/] = { Global_153216[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_60(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 0x00000001);
}

void func_60(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = func_14();
	uParam0->f_2 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

char* func_61(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		sVar0 = func_72(&(Global_18D84D[iParam0 /*615*/].f_B.f_68));
		return sVar0;
	}
	if (Global_18D84D[iParam0 /*615*/].f_B.f_78 != Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_78)
	{
		sVar0 = func_67(iParam0, 0x00000000);
		return sVar0;
	}
	if (((func_66(iParam0, 0x0000001C) || func_66(unk_0xD803B885F5E47A62(), 0x0000001C)) || func_65(iParam0)) && !func_63(iParam0))
	{
		return func_67(iParam0, 0x00000000);
	}
	iVar1 = func_62(iParam0);
	if (iVar1 != func_14())
	{
		if (iVar1 != unk_0xD803B885F5E47A62())
		{
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0x00000000, 0xFFFFFFFF, 0x00000001))
			{
				return func_67(iVar1, 0x00000000);
			}
		}
	}
	if (iVar1 != func_14())
	{
		sVar0 = func_72(&(Global_18D84D[iVar1 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar0))
		{
			return func_67(iVar1, 0x00000000);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_62(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_14();
}

int func_63(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_64(iParam0) };
	if (unk_0xDC30EF462887322E())
	{
		if (unk_0x4DEB7B48DD0AABA4(0x00000000))
		{
			if (unk_0x5B9BB2932920F9CD(&Var0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

struct<13> func_64(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_65(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_14())
	{
		Var0 = { func_64(iParam0) };
		if (unk_0x33A494591F2C1975() || unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0x4DEB7B48DD0AABA4(0x00000000))
			{
				return 0x00000000;
			}
		}
		else if (unk_0xDC30EF462887322E())
		{
			if (unk_0x4DEB7B48DD0AABA4(0x00000000))
			{
				if (unk_0x5B9BB2932920F9CD(&Var0))
				{
					return 0x00000000;
				}
			}
		}
	}
	return 0x00000001;
}

bool func_66(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

char* func_67(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_69(iParam0, 0x00000001))
		{
			return func_68();
		}
	}
	return unk_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_68()
{
	return unk_0x19C9F30A7697B43C("GB_REST_ACCM");
}

bool func_69(int iParam0, bool bParam1)
{
	return func_70(iParam0, bParam1, 0x00000001);
}

int func_70(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_14())
	{
		return 0x00000000;
	}
	if (!bParam1)
	{
		if (func_71(iParam0, iParam2))
		{
			return 0x00000000;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_14() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 != func_14())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_14())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

var func_72(var uParam0)
{
	return uParam0;
}

int func_73(int iParam0)
{
	if (func_62(iParam0) == func_14())
	{
		return 0x00000000;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_13;
}

bool func_74(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000001A);
}

int func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = func_78(iParam0);
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_76(iVar0);
	}
	return 0x00000001;
}

int func_76(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		iVar0 = func_77(iParam0);
		switch (iVar0)
		{
			case 0x00000000:
				return 0x000000C0;
			
			case 0x00000001:
				return 0x000000C1;
			
			case 0x00000002:
				return 0x000000C2;
			
			case 0x00000003:
				return 0x000000C3;
			
			case 0x00000004:
				return 0x000000C4;
			
			case 0x00000005:
				return 0x000000C5;
			
			case 0x00000006:
				return 0x000000C6;
			
			case 0x00000007:
				return 0x000000C7;
			
			case 0x00000008:
				return 0x000000C8;
			
			case 0x00000009:
				return 0x000000C9;
			
			case 0x0000000A:
				return 0x000000CA;
			
			case 0x0000000B:
				return 0x000000CB;
			
			case 0x0000000C:
				return 0x000000CC;
			
			case 0x0000000D:
				return 0x000000CD;
			
			case 0x0000000E:
				return 0x000000CE;
			}
		
		default:
	}
	return 0x00000001;
}

var func_77(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_78(int iParam0)
{
	if (!iParam0 == func_14())
	{
		if (func_79(iParam0, 0x00000001))
		{
			return Global_24E4E9.f_332.f_B[func_62(iParam0)];
		}
	}
	return 0xFFFFFFFF;
}

bool func_79(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_80(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_14();
}

int func_80(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_14())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

struct<16> func_81(int iParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, unk_0x6E524813889AECF8(iParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_82()
{
	if (Global_18D301.f_6)
	{
		if (iLocal_73 != 0x00000003)
		{
			if (!unk_0xE57E602827E07C9D())
			{
				Global_18D301.f_6 = 0x00000000;
			}
		}
	}
}

void func_83()
{
	unk_0x558EC149EB2BC0A2(0x00000000, 0x000000B0);
	unk_0x558EC149EB2BC0A2(0x00000000, 0x000000B1);
}

void func_84(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_93 = func_14();
	if (!Global_4C1E.f_1 == 0x00000007)
	{
		Global_4C1E.f_1 = 0x00000007;
	}
	iVar0 = 0x00000000;
	if (bParam0)
	{
		iVar0 = iLocal_92;
	}
	if (iVar0 >= Global_152CBE)
	{
		iVar0 = 0x00000000;
	}
	if (Global_5569)
	{
		func_49();
		Global_5569 = 0x00000000;
		return;
	}
	iVar1 = func_30();
	iVar1 = (iVar1 - func_93());
	if ((func_79(unk_0xD803B885F5E47A62(), 0x00000000) && !func_92(0x00000001)) && iVar1 <= 0x00000000)
	{
		func_90();
		return;
	}
	func_85();
	func_94(Global_4C0B, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(0x00000019), SYSTEM::TO_FLOAT(iVar0), 0xBF800000, 0xBF800000, 0xBF800000);
	func_53("CELL_BOSSAGE");
	bVar2 = 0x00000000;
	if (iVar1 > 0x00000000)
	{
		bVar2 = 0x00000001;
	}
	if (bVar2)
	{
		func_50(0x0000000D, &Local_77, 0x0000000C, &Local_83, 0x00000004, &Local_74, &iLocal_95);
	}
	else
	{
		func_50(0x00000001, "", 0x00000001, "", 0x00000004, &Local_74, &iLocal_95);
	}
	iLocal_73 = 0x00000000;
}

void func_85()
{
	int iVar0;
	int iVar1;
	
	func_94(Global_4C0B, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(0x00000019), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	iVar0 = 0x00000000;
	while (iVar0 < func_30())
	{
		if (Global_18D301.f_7[iVar0 /*8*/].f_1 == 0x00000001 && Global_18D301.f_7[iVar0 /*8*/].f_7 == 0x00000000)
		{
			switch (Global_18D301.f_7[iVar0 /*8*/])
			{
				case 0x00000000:
					if (func_89(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 0x00000001:
					if (func_87(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0x00000000)
	{
		return;
	}
	func_86();
}

void func_86()
{
	bool bVar0;
	
	unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000019);
	unk_0x3CAEA85DA607305E(0x00000000);
	if (func_80(unk_0xD803B885F5E47A62()))
	{
		func_22("BA_APP_NONEB");
	}
	else
	{
		func_22("BA_APP_NONE");
	}
	func_22("");
	unk_0x3CAEA85DA607305E(0xFFFFFFFF);
	unk_0x3CAEA85DA607305E(0x00000001);
	bVar0 = unk_0x8CD06866876216F2();
	unk_0x1200CC973A2399C8(bVar0);
	unk_0x7E60D21B163E9D56();
}

int func_87(int iParam0, int iParam1)
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	
	if (Global_18D301.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_18D301.f_7[iParam0 /*8*/].f_2, 0x00000000, 0x00000001))
	{
		return 0x00000000;
	}
	unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000019);
	unk_0x3CAEA85DA607305E(iParam1);
	Var0 = { func_81(Global_18D301.f_7[iParam0 /*8*/].f_2) };
	func_88(&Var0);
	unk_0x7ACC3006A87F8B39("BA_APP_BODY_DM1");
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(0xFFFFFFFF);
	iVar1 = 0x00000001;
	iVar2 = func_78(Global_18D301.f_7[iParam0 /*8*/].f_2);
	if (iVar2 != 0xFFFFFFFF)
	{
		iVar1 = func_76(iVar2);
	}
	unk_0x3CAEA85DA607305E(iVar1);
	unk_0x1200CC973A2399C8(0x00000001);
	unk_0x7E60D21B163E9D56();
	return 0x00000001;
}

void func_88(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_89(int iParam0, int iParam1)
{
	struct<16> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_18D301.f_7[iParam0 /*8*/].f_2 == func_14() || !func_46(Global_18D301.f_7[iParam0 /*8*/].f_2, 0x00000000, 0x00000001))
	{
		return 0x00000000;
	}
	unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000019);
	unk_0x3CAEA85DA607305E(iParam1);
	Var0 = { func_81(Global_18D301.f_7[iParam0 /*8*/].f_2) };
	func_88(&Var0);
	bVar1 = func_74(Global_18D301.f_7[iParam0 /*8*/].f_2);
	iVar2 = func_73(Global_18D301.f_7[iParam0 /*8*/].f_2);
	if (iVar2 == 0x00000000)
	{
		if (bVar1)
		{
			func_22("BA_APP_BODYCT");
		}
		else
		{
			func_22("BA_APP_BODY_T");
		}
	}
	else if (iVar2 == 0x00000001)
	{
		if (bVar1)
		{
			unk_0x7ACC3006A87F8B39("BA_APP_BODYCT3");
		}
		else
		{
			unk_0x7ACC3006A87F8B39("BA_APP_BODY_T3");
		}
		unk_0x6D99DF8263D35CE5(iVar2);
		unk_0x779B34565F4D71B1();
	}
	else
	{
		if (bVar1)
		{
			unk_0x7ACC3006A87F8B39("BA_APP_BODYCT2");
		}
		else
		{
			unk_0x7ACC3006A87F8B39("BA_APP_BODY_T2");
		}
		unk_0x6D99DF8263D35CE5(iVar2);
		unk_0x779B34565F4D71B1();
	}
	unk_0x3CAEA85DA607305E(0xFFFFFFFF);
	iVar3 = 0x00000001;
	iVar4 = func_78(Global_18D301.f_7[iParam0 /*8*/].f_2);
	if (iVar4 != 0xFFFFFFFF)
	{
		iVar3 = func_76(iVar4);
	}
	unk_0x3CAEA85DA607305E(iVar3);
	unk_0x1200CC973A2399C8(0x00000001);
	unk_0x7E60D21B163E9D56();
	return 0x00000001;
}

void func_90()
{
	func_94(Global_4C0B, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(0x0000001A), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x0000001A);
	unk_0x3CAEA85DA607305E(0x00000000);
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0x3A820E495A7BA3E5(func_75(unk_0xD803B885F5E47A62()));
	unk_0xD06AC7C87A34A6AD(func_91());
	unk_0x779B34565F4D71B1();
	func_22("BA_APP_NONEG");
	func_22("CELL_AGBOSSPIC");
	unk_0x7E60D21B163E9D56();
	func_94(Global_4C0B, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(0x0000001A), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_53("CELL_BOSSAGE");
	func_50(0x00000001, "", 0x00000001, "", 0x00000004, &Local_74, &iLocal_95);
	iLocal_73 = 0x00000002;
}

char* func_91()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_62(unk_0xD803B885F5E47A62());
	if (iVar0 != func_14())
	{
		if (iVar0 != unk_0xD803B885F5E47A62())
		{
			if (((func_66(iVar0, 0x0000001C) || func_66(unk_0xD803B885F5E47A62(), 0x0000001C)) || func_65(iVar0)) && !func_63(iVar0))
			{
				return func_67(iVar0, 0x00000000);
			}
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0x00000000, 0xFFFFFFFF, 0x00000001))
			{
				return func_67(iVar0, 0x00000000);
			}
		}
		sVar1 = func_72(&(Global_18D84D[iVar0 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar1))
		{
			return func_67(iVar0, 0x00000000);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

bool func_92(bool bParam0)
{
	return func_69(unk_0xD803B885F5E47A62(), bParam0);
}

int func_93()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < func_30())
	{
		if (Global_18D301.f_7[iVar0 /*8*/].f_7 == 0x00000001)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_94(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_95()
{
	Global_18D301.f_1 = 0x00000000;
	func_96();
}

void func_96()
{
	Global_18D301.f_5 = 0x00000000;
}

void func_97(var uParam0)
{
	*uParam0 = 0x00000000;
}

