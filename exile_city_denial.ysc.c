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
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = 0;
	var uLocal_33 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
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
	iLocal_28 = 0xFFFFFFFF;
	bLocal_32 = 0x00000001;
	if (unk_0x8A22C4C08282BF26(joaat("exile_city_denial")) > 0x00000001)
	{
		Global_A1B4 = 0x00000000;
		unk_0x10FAF14A60A0DBE1();
	}
	func_42(0x00000012);
	func_41();
	SYSTEM::SETTIMERA(0x00000000);
	SYSTEM::SETTIMERB(0x00000000);
	iVar0 = 0x00000002;
	iVar1 = 0x00000000;
	while (!iLocal_31)
	{
		iLocal_31 = 0x00000001;
		if (unk_0x2EBF608FFE6CA406(0x00000053))
		{
			Global_A1B4 = 0x00000000;
			if (!func_40(0x00000082))
			{
				func_39(0x00000012);
				func_38();
			}
			else if (func_40(0x00000083))
			{
				func_39(0x00000012);
				func_38();
			}
			switch (unk_0x3E653638C7A26115())
			{
				case 0x00000010:
					func_39(0x00000012);
					func_38();
					break;
				
				case 0x00000002:
					func_38();
					break;
				
				case 0x00000001:
					func_25(0x61105D6A);
					func_25(0x6AC570D4);
					func_25(0xF1A47EBC);
					func_25(0x6BB49F27);
					func_25(0x7A753CA8);
					func_25(0x883FD83D);
					bLocal_29 = 0x00000000;
					while (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						SYSTEM::WAIT(0x000003E8);
					}
					iLocal_31 = 0x00000000;
					break;
				}
		}
	}
	while (0x00000001)
	{
		if (iVar1 > 0x00000000)
		{
			iVar1 = (iVar1 - SYSTEM::TIMERA());
			SYSTEM::SETTIMERA(0x00000000);
			if (iVar1 < 0x00000000)
			{
				iVar1 = 0x00000000;
			}
		}
		vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
		bLocal_29 = func_24(vVar2, &bLocal_32);
		if (Global_12C5B || Global_12C5B.f_1)
		{
			bLocal_29 = 0x00000000;
		}
		bVar3 = 0x00000000;
		bVar4 = 0x00000000;
		if (func_40(0x00000083))
		{
			bVar3 = 0x00000001;
		}
		if (!func_40(0x00000082))
		{
			bVar3 = 0x00000001;
		}
		if (bVar3)
		{
			Global_A1B4 = 0x00000000;
			func_39(0x00000012);
			func_38();
		}
		if (func_22() == 0x00000001)
		{
			bVar4 = 0x00000001;
		}
		Global_A1B4 = bLocal_29;
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()) || unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xE934758D273C899A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
				{
					bLocal_29 = 0x00000000;
				}
			}
		}
		if (bLocal_30 != bLocal_29)
		{
			if (!bLocal_29)
			{
				func_20();
			}
			if (bLocal_29 && !bVar4)
			{
				bVar5 = 0x00000000;
				bVar6 = 0x00000001;
				while (bVar6)
				{
					switch (func_18(&iLocal_28, 0x00000006, 0x0000000C, 0x00000000, 0x00000000))
					{
						case 0x00000000:
							bVar6 = 0x00000000;
							bVar5 = 0x00000000;
							break;
						
						case 0x00000001:
							bVar6 = 0x00000000;
							bVar5 = 0x00000001;
							break;
						
						default:
							SYSTEM::WAIT(0x00000000);
							break;
					}
					if (Global_12B4E)
					{
						unk_0x10FAF14A60A0DBE1();
					}
				}
				if (bVar5)
				{
					unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9());
					if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
					{
						iVar7 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
						while (unk_0x31609A585163CBAC(iVar7))
						{
							SYSTEM::WAIT(0x00001388);
							unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9());
							if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
							{
								iVar7 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
							}
						}
					}
					if (func_15(unk_0x16F2683693E537C9()) == 0x00000000)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_39B, 0x00000000))
						{
							func_10(0x61105D6A, 0x00000007, 0x00000001, 0x0000001F, 0x00000003, 0x00002710, 0x00004E20, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000096, 0xFFFFFFFF, 0x00000400);
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_39B, 0x00000001))
						{
							func_10(0x6AC570D4, 0x00000007, 0x00000001, 0x0000001F, 0x00000003, 0x00002710, 0x00004E20, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000096, 0xFFFFFFFF, 0x00000400);
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_39B, 0x00000002))
						{
							func_10(0xF1A47EBC, 0x00000007, 0x00000001, 0x0000001F, 0x00000003, 0x00002710, 0x00004E20, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000096, 0xFFFFFFFF, 0x00000400);
						}
					}
					else if (func_15(unk_0x16F2683693E537C9()) == 0x00000002)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_39B, 0x00000003))
						{
							func_10(0x6BB49F27, 0x00000007, 0x00000004, 0x0000001F, 0x00000003, 0x00002710, 0x00004E20, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000097, 0xFFFFFFFF, 0x00000400);
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_39B, 0x00000004))
						{
							func_10(0x7A753CA8, 0x00000007, 0x00000004, 0x0000001F, 0x00000003, 0x00002710, 0x00004E20, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000097, 0xFFFFFFFF, 0x00000400);
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_39B, 0x00000004))
						{
							func_10(0x883FD83D, 0x00000007, 0x00000004, 0x0000001F, 0x00000003, 0x00002710, 0x00004E20, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000097, 0xFFFFFFFF, 0x00000400);
						}
					}
					if (iVar1 == 0x00000000 && !bVar4)
					{
						if ((!func_9(0x00000000) && !func_9(0x00000004)) && !func_9(0x00000003))
						{
							if (unk_0xB6B2054BF492068C(0x0000000B) < 0x00000100)
							{
								if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
								{
									if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
									{
										unk_0x67FCD2DB807B4E58(0x0000000B, unk_0x16F2683693E537C9(), iVar0, 0f, &uLocal_33, 0x00000000, 0x00000000);
									}
								}
							}
							if (unk_0x0F1CCD77290EE12F())
							{
								if (bLocal_32)
								{
									func_8("CITDENAL", 0xFFFFFFFF);
								}
								else
								{
									func_8("CITDENAL_R", 0xFFFFFFFF);
								}
								iVar1 = 0x0001D4C0;
							}
						}
					}
				}
				else
				{
					bLocal_29 = 0x00000000;
				}
			}
			else
			{
				func_20();
			}
		}
		if (bLocal_29)
		{
			if (!unk_0xC77B2658E98CC4E5(uLocal_33))
			{
				if (unk_0xB6B2054BF492068C(0x0000000B) < 0x00000100)
				{
					if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x67FCD2DB807B4E58(0x0000000B, unk_0x16F2683693E537C9(), iVar0, 0f, &uLocal_33, 0x00000000, 0x00000000);
						}
					}
				}
			}
		}
		if (bLocal_29 && SYSTEM::TIMERB() > 0x0000EA60)
		{
			SYSTEM::SETTIMERB(0x00000000);
			iVar0 = (iVar0 + unk_0x09AC81E49EA267F7(0x00000001, 0x00000002));
			if (iVar0 < 0x00000008)
			{
				if (unk_0xC77B2658E98CC4E5(uLocal_33))
				{
					unk_0xF05ADA8467553D9B(uLocal_33, 0x0000000B, iVar0);
				}
				else if (unk_0xB6B2054BF492068C(0x0000000B) < 0x00000100)
				{
					if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x67FCD2DB807B4E58(0x0000000B, unk_0x16F2683693E537C9(), iVar0, 0f, &uLocal_33, 0x00000000, 0x00000000);
						}
					}
				}
			}
			else
			{
				iVar0 = 0x00000008;
			}
		}
		bLocal_30 = bLocal_29;
		if (bVar4)
		{
			Global_A1B4 = 0x00000000;
			if (bLocal_29)
			{
				func_20();
			}
			func_4();
			while (func_22() == 0x00000001)
			{
				SYSTEM::WAIT(0x000007D0);
			}
			func_41();
			bVar4 = 0x00000000;
		}
		if (bLocal_29)
		{
			SYSTEM::WAIT(0x00000000);
		}
		else
		{
			SYSTEM::WAIT(0x00002710);
		}
		if (func_1(0x0000000C) && !func_9(0x0000000C))
		{
			if (bLocal_29)
			{
				func_20();
			}
			while (func_9(0x00000000) || func_9(0x00000004))
			{
				SYSTEM::WAIT(0x00001F40);
			}
		}
	}
	func_4();
}

int func_1(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_2(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_2(int iParam0)
{
	return func_3(iParam0, Global_A1D7);
}

int func_3(int iParam0, int iParam1)
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

void func_4()
{
	func_7(0x00000000, 0x00000001);
	func_7(0x00000002, 0x00000001);
	func_7(0x00000001, 0x00000001);
	func_5(0x00000000, 0x00000001);
	func_5(0x00000001, 0x00000001);
	func_5(0x00000003, 0x00000001);
	func_5(0x00000002, 0x00000001);
}

void func_5(int iParam0, bool bParam1)
{
	if (iParam0 == 0x00000007)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_1C38.f_11[iParam0]), 0x00000000);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_1C38.f_11[iParam0]), 0x00000000);
	}
	unk_0xA969FE11F0D97FE3(Global_16EBB[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_16EBB[iParam0 /*9*/].f_7, 0x00000000, 0x00000000);
}

void func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x0000000F);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000000))
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
		if (Global_79A7 == 0x00000001)
		{
			Global_79A8 = 0x00000001;
		}
		Global_79A7 = 0x00000001;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000000);
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000F);
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000003);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000000);
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000F);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000000))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13))
		{
			unk_0xCD816869CA451988(0x00000001);
			unk_0x142CC44DB769B57E(&(Global_79AA[iVar0 /*23*/].f_13));
			unk_0xCD816869CA451988(0x00000000);
		}
	}
}

void func_7(int iParam0, bool bParam1)
{
	if (iParam0 == 0x00000005)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_1C38.f_B[iParam0]), 0x00000000);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_1C38.f_B[iParam0]), 0x00000000);
	}
	unk_0xC01338B5A30F4E2C(Global_16EFB[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_16EFB[iParam0 /*9*/].f_7, 0x00000000, 0x00000000);
}

void func_8(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

bool func_9(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_14(0x00000000))
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
		Var0.f_3 = func_13(iParam1);
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
				func_11(iVar1);
			}
			iVar1++;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (!func_12(iParam0))
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

bool func_12(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_13(int iParam0)
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

bool func_14(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_16(int iParam0)
{
	if (func_12(iParam0))
	{
		return func_17(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_17(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_18(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 0x00000007)
	{
		return 0x00000000;
	}
	if (!bParam3)
	{
		if (Global_177DE.f_2C == 0x00000001)
		{
			return 0x00000002;
		}
	}
	if (iParam1 == 0x00000000)
	{
		if (func_1(0x00000000))
		{
			return 0x00000000;
		}
		Global_A1B3++;
		*iParam0 = Global_A1B3;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0x00000000);
		Global_56C3.f_5 = 0x00000000;
		if (iParam2 != 0x00000005)
		{
			unk_0x4C7B0415764B64BA(0x00000008);
		}
		Global_A1D7 = iParam2;
		Global_A1B1 = *iParam0;
		Global_A1B2 = iParam4;
		Global_A1B0 = 0x00000000;
		return 0x00000001;
	}
	if (*iParam0 != 0xFFFFFFFF)
	{
		if (Global_A1B0 > 0x00000000)
		{
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < Global_A1B0)
			{
				if (Global_A1B6[iVar0 /*4*/] == *iParam0)
				{
					return 0x00000002;
				}
				iVar0++;
			}
		}
		else if (Global_A1B1 == *iParam0)
		{
			return 0x00000001;
		}
		*iParam0 = 0xFFFFFFFF;
	}
	if (*iParam0 == 0xFFFFFFFF)
	{
		if (!func_2(iParam2))
		{
			return 0x00000000;
		}
		if (Global_A1B0 == 0x00000008)
		{
			return 0x00000000;
		}
		Global_A1B3++;
		*iParam0 = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/] = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/].f_1 = iParam1;
		Global_A1B6[Global_A1B0 /*4*/].f_2 = iParam2;
		Global_A1B6[Global_A1B0 /*4*/].f_3 = 0x00000000;
		Global_A1B0++;
		if (iParam4 != 0x00000000)
		{
			func_19(iParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_19(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_A1B0 == 0x00000000)
	{
		return;
	}
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_A1B0)
	{
		if (Global_A1B6[iVar0 /*4*/] == *uParam0)
		{
			Global_A1B6[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = 0xFFFFFFFF;
}

void func_20()
{
	if (iLocal_28 != 0xFFFFFFFF)
	{
		func_21(&iLocal_28);
	}
	func_25(0x61105D6A);
	func_25(0x6AC570D4);
	func_25(0xF1A47EBC);
	func_25(0x6BB49F27);
	func_25(0x7A753CA8);
	func_25(0x883FD83D);
	bLocal_29 = 0x00000000;
	bLocal_30 = 0x00000000;
	Global_A1B4 = 0x00000000;
	unk_0x201044F0E8495AF6(uLocal_33);
}

void func_21(int iParam0)
{
	if (*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!*iParam0 == Global_A1B1)
	{
		*iParam0 = 0xFFFFFFFF;
		return;
	}
	*iParam0 = 0xFFFFFFFF;
	Global_A1B0 = 0x00000000;
	Global_A1B2 = 0x00000000;
	Global_A1D7 = 0x0000000F;
	Global_F045 = 0x00000000;
	Global_F046 = 0x00000000;
}

int func_22()
{
	func_23();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_23()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_16(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_15(unk_0x16F2683693E537C9());
			if (func_12(iVar0) && (!func_9(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_12(Global_1B416.f_936.f_21B.f_10E1))
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

int func_24(struct<2> Param0, var uParam1, int iParam2)
{
	if (!(unk_0x0F1CCD77290EE12F() || unk_0x7BCE0E6DD4A1F749()))
	{
		return 0x00000000;
	}
	if (Param0.f_1 < 400f)
	{
		if (Param0 < 1400f)
		{
			if (Param0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					*iParam2 = 0x00000001;
					return 0x00000001;
				}
			}
		}
	}
	if (Param0 < 1536.35f)
	{
		if (Param0.f_1 > 1016.18f)
		{
			if (Param0.f_1 < 1213.53f)
			{
				if (Param0 > 1278.08f)
				{
					*iParam2 = 0x00000000;
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_25(int iParam0)
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
				func_37(iVar0);
				func_29(iParam0);
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
			func_29(iParam0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_28A)
	{
		if (Global_1B416.f_1E03.f_C7[iVar0 /*15*/] == iParam0)
		{
			func_28(iParam0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_2FC)
	{
		if (Global_1B416.f_1E03.f_28B[iVar0 /*14*/] == iParam0)
		{
			func_27(iVar0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_362)
	{
		if (Global_1B416.f_1E03.f_2FD[iVar0 /*10*/] == iParam0)
		{
			func_26(iVar0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	return iVar1;
}

void func_26(int iParam0)
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

void func_27(int iParam0)
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
	func_11(0x00000000);
	func_11(0x00000001);
	func_11(0x00000002);
}

void func_28(int iParam0)
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

void func_29(int iParam0)
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < Global_1B416.f_1E03.f_C6)
	{
		if (Global_1B416.f_1E03.f_89[iVar1 /*15*/] == iParam0)
		{
			func_30(Global_1B416.f_1E03.f_89[iVar1 /*15*/].f_6);
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

int func_30(int iParam0)
{
	int iVar0;
	
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (func_36(iParam0, Global_4C1E) == 0x00000001)
		{
			func_35(iParam0, Global_4C1E, 0x00000000);
			if (func_34(iParam0, Global_4C1E) == 0x00000000)
			{
				iVar0 = Global_4C1E;
				func_31(iParam0, iVar0);
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

void func_31(int iParam0, int iParam1)
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
			func_33(iParam0, iVar0, 0x00000000);
			func_32(iParam0, iVar0, 0x00000000);
		}
	}
}

void func_32(int iParam0, int iParam1, int iParam2)
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

void func_33(int iParam0, int iParam1, int iParam2)
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

int func_34(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

void func_35(int iParam0, int iParam1, int iParam2)
{
	Global_706[iParam0 /*29*/].f_13[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_13[iParam1] = iParam2;
	}
}

int func_36(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_13[iParam1];
}

void func_37(int iParam0)
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
			func_11(iVar0);
		}
		iVar0++;
	}
}

void func_38()
{
	func_20();
	func_4();
	unk_0x10FAF14A60A0DBE1();
}

int func_39(int iParam0)
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

int func_40(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_41()
{
	func_7(0x00000000, 0x00000000);
	func_7(0x00000002, 0x00000000);
	func_7(0x00000001, 0x00000000);
	func_5(0x00000000, 0x00000000);
	func_5(0x00000001, 0x00000000);
	func_5(0x00000003, 0x00000000);
	func_5(0x00000002, 0x00000000);
}

int func_42(int iParam0)
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

