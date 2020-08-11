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
	int iLocal_28 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	iLocal_28 = 0x00000001;
	if (unk_0x2EBF608FFE6CA406(0x00000012))
	{
		func_42();
	}
	func_41(0x00000014);
	func_40();
	func_39(0x00000001);
	func_39(0x00000000);
	func_39(0x00000002);
	func_39(0x0000000D);
	func_39(0x0000000C);
	Global_1CC1 = 0x00000001;
	func_38();
	if (!func_37(0x9FBBBDFC))
	{
		func_36(0x9FBBBDFC, 0x00000002, 0x00000002, 0x00000002, 0x00000001, 0xFFFFFFFF, 0x00000005);
	}
	if (!func_37(0x8A861085))
	{
		func_36(0x8A861085, 0x00000002, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000005);
	}
	if (!func_37(0x93AB6DCF))
	{
		func_36(0x93AB6DCF, 0x00000002, 0x0000000C, 0x00000003, 0x00000001, 0xFFFFFFFF, 0x00000005);
	}
	bVar0 = 0x00000000;
	while (func_35(0x00000017) && !func_34(0x00000086))
	{
		if (func_29() == 0x00000001)
		{
			if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if ((!unk_0x92444005288A72ED(unk_0x16F2683693E537C9()) && !unk_0x70EED0761B82965E(unk_0x16F2683693E537C9())) && !unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9()))
					{
						if (!bVar0)
						{
							if (!((func_28() || unk_0x991B1F0980C62628()) || func_27()))
							{
								if (func_13())
								{
									bVar0 = 0x00000001;
								}
							}
						}
						else
						{
							if (iLocal_28)
							{
								unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000180);
								unk_0xCAF7AE54F764D5AA(unk_0x16F2683693E537C9(), 0f);
								unk_0xEAB026E686C0D991(0x00000000, 0x000000AD, 0x00000001);
								unk_0xEAB026E686C0D991(0x00000000, 0x000000AC, 0x00000001);
								unk_0xEAB026E686C0D991(0x00000000, 0x000000AE, 0x00000001);
								unk_0xEAB026E686C0D991(0x00000000, 0x000000AF, 0x00000001);
								unk_0xEAB026E686C0D991(0x00000000, 0x000000B0, 0x00000001);
								unk_0xEAB026E686C0D991(0x00000000, 0x000000B1, 0x00000001);
								unk_0xEAB026E686C0D991(0x00000000, 0x000000B2, 0x00000001);
								unk_0xEAB026E686C0D991(0x00000000, 0x000000B3, 0x00000001);
								unk_0xEAB026E686C0D991(0x00000000, 0x000000B4, 0x00000001);
								unk_0xEAB026E686C0D991(0x00000000, 0x000000B5, 0x00000001);
							}
							else
							{
								unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
							}
							switch (func_12())
							{
								case 0x9FBBBDFC:
									if (!func_37(0x896D9160))
									{
										func_8(0x896D9160, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00001770, 0x00001770, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000044);
									}
									break;
								
								case 0x896D9160:
									func_7(0x0000000C, 0x00000000);
									func_6(0x00000086, 0x00000001);
									unk_0xCDC520E5E48E63D9(joaat("sp_final_decision"), 0x00000002, 0x00000001);
									break;
								
								case 0x8A861085:
									if (!func_37(0xC0C37CFF))
									{
										func_8(0xC0C37CFF, 0x00000000, 0x00000001, 0x00000002, 0x00000002, 0x00001770, 0x00001770, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000044);
									}
									break;
								
								case 0xC0C37CFF:
									func_7(0x0000000C, 0x00000001);
									func_6(0x00000086, 0x00000001);
									unk_0xCDC520E5E48E63D9(joaat("sp_final_decision"), 0x00000001, 0x00000001);
									break;
								
								case 0x93AB6DCF:
									func_7(0x0000000C, 0x00000002);
									func_6(0x00000086, 0x00000001);
									unk_0xCDC520E5E48E63D9(joaat("sp_final_decision"), 0x00000003, 0x00000001);
									break;
								
								default:
									if (!func_5(0x00000000))
									{
										bVar0 = 0x00000000;
									}
									else if (iLocal_28)
									{
										if (func_4())
										{
											iLocal_28 = 0x00000000;
										}
									}
									break;
								}
							}
						}
					}
				}
		}
		SYSTEM::WAIT(0x00000000);
	}
	func_3(0x00000014);
	Global_181DF = 0x00000000;
	func_1();
	func_42();
}

int func_1()
{
	if (func_2(0x00000000))
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

bool func_2(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_3(int iParam0)
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

int func_4()
{
	if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_5(int iParam0)
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

void func_6(int iParam0, int iParam1)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1B416.f_2378.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_1B416.f_2378.f_63.f_3A[iParam0] = iParam1;
}

void func_7(int iParam0, int iParam1)
{
	if (iParam0 == 0x0000000D || iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1B416.f_2378.f_63.f_CD[iParam0] == iParam1)
	{
		return;
	}
	Global_1B416.f_2378.f_63.f_CD[iParam0] = iParam1;
}

int func_8(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_2(0x00000000))
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
	if (iParam7 == 0x0000004C)
	{
		return 0x00000000;
	}
	if (iParam8 == 0x000000EB)
	{
		return 0x00000000;
	}
	if (iParam3 == iParam2)
	{
		return 0x00000000;
	}
	if (((iParam2 != 0x00000090 && iParam2 != 0x00000000) && iParam2 != 0x00000001) && iParam2 != 0x00000002)
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
		Var0.f_3 = func_11(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0x00000000;
		unk_0x5D96D8530B3D0904(&iVar1, iParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_E = iParam4;
		Var0.f_A = 0xFFFFFFFF;
		Var0.f_B = 0xFFFFFFFF;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x00000000);
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000001);
		if (iParam1 == 0x00000000)
		{
			unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x0000000A);
		}
		Global_1B416.f_1E03[Global_1B416.f_1E03.f_88 /*15*/] = { Var0 };
		Global_1B416.f_1E03.f_88++;
		func_9(iParam2);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (!func_10(iParam0))
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

bool func_10(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_11(int iParam0)
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

int func_12()
{
	return Global_1B416.f_1E03.f_38F;
}

int func_13()
{
	if (Global_4C1E.f_1 > 0x00000003)
	{
		unk_0x0674E58A79778E99(&Global_1CBD, 0x00000000);
		func_22(0x00000000);
		return 0x00000000;
	}
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000000);
	if (func_14(0x00000000, 0x00000000, 0x00000001, 0x00000001))
	{
		return 0x00000001;
	}
	unk_0x0674E58A79778E99(&Global_1CBD, 0x00000000);
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
			func_20();
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
	func_19();
	if (Global_4C1E.f_1 == 0x00000009)
	{
		return 0x00000000;
	}
	if (iParam2 == 0x00000000)
	{
		if (func_5(0x00000000) == 0x00000001)
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
	func_20();
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

void func_19()
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
		Global_4C1E = func_29();
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

void func_20()
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
			if (func_21(iVar2, Global_4C1E) == 0x00000001)
			{
				iVar1 = 0x00000001;
			}
			iVar2++;
		}
		func_16(0x00000007, "CELL_5", 0x00000000, "appEmail", 0x00000004, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000001, "CELL_1", 0x00000001, "appTextMessage", 0x00000002, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_16(0x00000004, "CELL_23", 0x00000002, "appChecklist", 0x00000027, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		if ((Global_A1D7 == 0x0000000F && func_2(0x00000000) == 0x00000000) && Global_1CC1 == 0x00000000)
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

int func_21(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_13[iParam1];
}

void func_22(int iParam0)
{
	if (func_26())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_25())
		{
			func_24(0x00000001, 0x00000001);
		}
		else
		{
			func_24(0x00000000, 0x00000000);
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
	if (!func_23())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_23()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_24(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_5(0x00000000))
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

bool func_25()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_26()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_27()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_28()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_29()
{
	func_30();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_30()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_32(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_31(unk_0x16F2683693E537C9());
			if (func_10(iVar0) && (!func_17(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_10(Global_1B416.f_936.f_21B.f_10E1))
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

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_32(int iParam0)
{
	if (func_10(iParam0))
	{
		return func_33(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_33(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_34(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

int func_35(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<15> Var0;
	
	if (func_2(0x00000000))
	{
		return 0x00000000;
	}
	if (iParam2 < 0x00000003)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam1, iParam2))
		{
			return 0x00000000;
		}
	}
	if (iParam1 < 0x00000001 || iParam1 > 0x00000007)
	{
		return 0x00000000;
	}
	if (iParam4 <= 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_1B416.f_1E03.f_28A < 0x0000001E)
	{
		Var0 = iParam0;
		if (Global_1B416.f_1E03.f_38F == Var0)
		{
			Global_1B416.f_1E03.f_38F = 0xFFFFFFFF;
		}
		Var0.f_1 = 0x00000000;
		Var0.f_6 = iParam2;
		Var0.f_2 = iParam1;
		Var0.f_E = iParam3;
		Var0.f_3 = iParam6;
		Var0.f_7 = 0xFFFFFFFF;
		Var0.f_8 = 0x00000000;
		Var0.f_9 = 0xFFFFFFFF;
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam4);
		Var0.f_9 = iParam5;
		Var0.f_A = 0xFFFFFFFF;
		Var0.f_B = 0xFFFFFFFF;
		unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x00000000);
		unk_0x5D96D8530B3D0904(&(Var0.f_1), 0x00000006);
		Global_1B416.f_1E03.f_C7[Global_1B416.f_1E03.f_28A /*15*/] = { Var0 };
		Global_1B416.f_1E03.f_28A++;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_88)
	{
		if (Global_1B416.f_1E03[iVar0 /*15*/] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_28A)
	{
		if (Global_1B416.f_1E03.f_C7[iVar0 /*15*/] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_C6)
	{
		if (Global_1B416.f_1E03.f_89[iVar0 /*15*/] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_2FC)
	{
		if (Global_1B416.f_1E03.f_28B[iVar0 /*14*/] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_362)
	{
		if (Global_1B416.f_1E03.f_2FD[iVar0 /*10*/] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_38()
{
	Global_181DF = 0x00000001;
}

void func_39(int iParam0)
{
	if (((((iParam0 == 0x00000090 || iParam0 == 0x00000091) || iParam0 == 0x000000A1) || iParam0 == 0x000000A8) || iParam0 == 0x000000A7) || iParam0 == 0x000000A2)
	{
		return;
	}
	Global_A3FF[iParam0] = unk_0x1C0640BA9A7327B3();
}

void func_40()
{
	Global_A3FE = unk_0x1C0640BA9A7327B3();
}

int func_41(int iParam0)
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

void func_42()
{
	func_43(0x9FBBBDFC);
	func_43(0x896D9160);
	func_43(0x8A861085);
	func_43(0xC0C37CFF);
	func_43(0x93AB6DCF);
	Global_1CC1 = 0x00000000;
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_88)
	{
		if (Global_1B416.f_1E03[iVar0 /*15*/] == iParam0)
		{
			if (Global_A3FA != iVar0)
			{
				func_54(iVar0);
				func_47(iParam0);
				iVar1 = 0x00000001;
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_C6)
	{
		if (Global_1B416.f_1E03.f_89[iVar0 /*15*/] == iParam0)
		{
			func_47(iParam0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_28A)
	{
		if (Global_1B416.f_1E03.f_C7[iVar0 /*15*/] == iParam0)
		{
			func_46(iParam0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_2FC)
	{
		if (Global_1B416.f_1E03.f_28B[iVar0 /*14*/] == iParam0)
		{
			func_45(iVar0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_362)
	{
		if (Global_1B416.f_1E03.f_2FD[iVar0 /*10*/] == iParam0)
		{
			func_44(iVar0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	return iVar1;
}

void func_44(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0x00000000 || iParam0 >= Global_1B416.f_1E03.f_362)
	{
		return;
	}
	if (Global_1B416.f_1E03.f_362 > 0x00000001)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1B416.f_1E03.f_362 - 0x00000002))
		{
			Global_1B416.f_1E03.f_2FD[iVar0 /*10*/] = { Global_1B416.f_1E03.f_2FD[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_1B416.f_1E03.f_362 > 0x00000000)
	{
		Global_1B416.f_1E03.f_2FD[(Global_1B416.f_1E03.f_362 - 0x00000001) /*10*/] = { Var1 };
		Global_1B416.f_1E03.f_362 = (Global_1B416.f_1E03.f_362 - 0x00000001);
	}
}

void func_45(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0x00000000 || iParam0 >= Global_1B416.f_1E03.f_2FC)
	{
		return;
	}
	if (Global_1B416.f_1E03.f_2FC > 0x00000001)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1B416.f_1E03.f_2FC - 0x00000002))
		{
			Global_1B416.f_1E03.f_28B[iVar0 /*14*/] = { Global_1B416.f_1E03.f_28B[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_1B416.f_1E03.f_2FC > 0x00000000)
	{
		Global_1B416.f_1E03.f_28B[(Global_1B416.f_1E03.f_2FC - 0x00000001) /*14*/] = { Var1 };
		Global_1B416.f_1E03.f_2FC = (Global_1B416.f_1E03.f_2FC - 0x00000001);
	}
	func_9(0x00000000);
	func_9(0x00000001);
	func_9(0x00000002);
}

void func_46(int iParam0)
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < Global_1B416.f_1E03.f_28A)
	{
		if (Global_1B416.f_1E03.f_C7[iVar1 /*15*/] == iParam0)
		{
			iVar2 = iVar1;
			while (iVar2 <= (Global_1B416.f_1E03.f_28A - 0x00000002))
			{
				Global_1B416.f_1E03.f_C7[iVar2 /*15*/] = { Global_1B416.f_1E03.f_C7[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_1B416.f_1E03.f_C7[(Global_1B416.f_1E03.f_28A - 0x00000001) /*15*/] = { Var0 };
			Global_1B416.f_1E03.f_28A = (Global_1B416.f_1E03.f_28A - 0x00000001);
			return;
		}
		iVar1++;
	}
}

void func_47(int iParam0)
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < Global_1B416.f_1E03.f_C6)
	{
		if (Global_1B416.f_1E03.f_89[iVar1 /*15*/] == iParam0)
		{
			func_48(Global_1B416.f_1E03.f_89[iVar1 /*15*/].f_6);
			iVar2 = iVar1;
			while (iVar2 <= (Global_1B416.f_1E03.f_C6 - 0x00000002))
			{
				Global_1B416.f_1E03.f_89[iVar2 /*15*/] = { Global_1B416.f_1E03.f_89[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_1B416.f_1E03.f_89[(Global_1B416.f_1E03.f_C6 - 0x00000001) /*15*/] = { Var0 };
			Global_1B416.f_1E03.f_C6 = (Global_1B416.f_1E03.f_C6 - 0x00000001);
			return;
		}
		iVar1++;
	}
}

int func_48(int iParam0)
{
	int iVar0;
	
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (func_21(iParam0, Global_4C1E) == 0x00000001)
		{
			func_53(iParam0, Global_4C1E, 0x00000000);
			if (func_52(iParam0, Global_4C1E) == 0x00000000)
			{
				iVar0 = Global_4C1E;
				func_49(iParam0, iVar0);
			}
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

void func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (iParam1 > 0x00000003)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_51(iParam0, iVar0, 0x00000000);
			func_50(iParam0, iVar0, 0x00000000);
		}
	}
}

void func_50(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_18[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_18[iParam1] = iParam2;
	}
}

void func_51(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_C[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_C[iParam1] = iParam2;
	}
}

int func_52(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

void func_53(int iParam0, int iParam1, int iParam2)
{
	Global_706[iParam0 /*29*/].f_13[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_13[iParam1] = iParam2;
	}
}

void func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	
	if (iParam0 < 0x00000000 || iParam0 >= Global_1B416.f_1E03.f_88)
	{
		return;
	}
	iVar1 = Global_1B416.f_1E03[iParam0 /*15*/].f_2;
	if (Global_1B416.f_1E03.f_88 > 0x00000001)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1B416.f_1E03.f_88 - 0x00000002))
		{
			Global_1B416.f_1E03[iVar0 /*15*/] = { Global_1B416.f_1E03[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_1B416.f_1E03.f_88 > 0x00000000)
	{
		Global_1B416.f_1E03[(Global_1B416.f_1E03.f_88 - 0x00000001) /*15*/] = { Var2 };
		Global_1B416.f_1E03.f_88 = (Global_1B416.f_1E03.f_88 - 0x00000001);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar1, iVar0))
		{
			func_9(iVar0);
		}
		iVar0++;
	}
}

