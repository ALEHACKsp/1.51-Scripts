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
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_54[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	iLocal_47 = unk_0xAD1355DD1E5D2D9B();
	uLocal_48 = unk_0x817B3657F78A517A();
	iLocal_56 = 0xFFFFFFF1;
	if (unk_0x2EBF608FFE6CA406(0x00000022))
	{
		func_137();
	}
	func_136();
	func_134();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (func_131(0x00000004) || Global_175B0)
		{
			func_137();
		}
		if (func_130())
		{
			bLocal_55 = 0x00000000;
			iLocal_49 = (iLocal_49 + 1 % 0x0000003C);
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000003F)
			{
				if ((iVar0 % 0x0000003C) == iLocal_49 || Global_1B085[iVar0 /*10*/].f_2)
				{
					func_83(iVar0);
				}
				iVar0++;
			}
			func_76();
			func_54();
			func_49();
			func_46();
			func_4();
		}
		else if (!bLocal_55)
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000014)
	{
		func_3(iLocal_54[iVar1], 0x00000000, 0x00000000);
		iLocal_53[iVar1] = 0x00000000;
		iVar1++;
	}
	iVar2 = 0x00000000;
	while (iVar2 < 0x0000003F)
	{
		iVar0 = iVar2;
		if (Global_1B085[iVar0 /*10*/].f_8 != 0xFFFFFFFF)
		{
			func_3(iLocal_54[Global_1B085[iVar0 /*10*/].f_8], 0x00000000, 0x00000000);
			func_2(&(Global_1B085[iVar0 /*10*/].f_8));
		}
		Global_1B085[iVar0 /*10*/].f_7 = 0x00000000;
		iVar2++;
	}
	bLocal_55 = 0x00000001;
}

void func_2(var uParam0)
{
	if (*uParam0 > 0xFFFFFFFF && *uParam0 < 0x00000014)
	{
		iLocal_53[*uParam0] = 0x00000000;
	}
	*uParam0 = 0xFFFFFFFF;
}

void func_3(int iParam0, bool bParam1, bool bParam2)
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

void func_4()
{
	bool bVar0;
	int iVar1;
	struct<7> Var2;
	int iVar3;
	
	if (!func_45(0x0000003A))
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (func_44(0x00000011))
			{
				if (!func_43(0x0000004A))
				{
					if (iLocal_56 == 0xFFFFFFF1)
					{
						iLocal_56 = func_42();
						func_34(&iLocal_56, 0x00000000, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else if (func_23(iLocal_56))
					{
						bVar0 = 0x00000000;
						iVar1 = 0x000000F3;
						while (iVar1 <= 0x00000106)
						{
							iVar3 = iVar1;
							func_18(0x0000003A, &Var2);
							if (func_16(Var2.f_6, func_17(iVar3, 0x00000000), 0x00000000))
							{
								if (unk_0xE4EDC4B0E92C078B(Global_79AA[iVar3 /*23*/].f_13))
								{
									unk_0xF412DD40DE84CE72(Global_79AA[iVar3 /*23*/].f_13, 0x00000001);
									unk_0x0EC848EFF66DF45A(Global_79AA[iVar3 /*23*/].f_13, 0x00002710);
									switch (func_9())
									{
										case 0x00000001:
											func_6("AM_H_RCFS", 0x00000002, 0x00000000, 0x000003E8, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
											break;
										
										case 0x00000000:
											func_6("AM_H_RCFS_M", 0x00000002, 0x00000000, 0x000003E8, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
											break;
									}
									iLocal_56 = func_42();
									func_34(&iLocal_56, 0x00000000, 0x00000000, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
									bVar0 = 0x00000001;
								}
							}
							iVar1++;
						}
						if (!bVar0)
						{
							iLocal_56 = func_42();
							func_34(&iLocal_56, 0x00000000, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
				}
				else
				{
					func_5(0x0000003A);
				}
			}
		}
	}
}

void func_5(int iParam0)
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

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_7(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_7(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_8();
	}
}

void func_8()
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

int func_9()
{
	func_10();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_10()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_14(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_13(unk_0x16F2683693E537C9());
			if (func_12(iVar0) && (!func_11(0x0000000E) || Global_1AFFD))
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

bool func_11(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_12(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_14(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_14(int iParam0)
{
	if (func_12(iParam0))
	{
		return func_15(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_15(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_16(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_17(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0f, 0f, 0f;
	}
	return Global_79AA[iVar0 /*23*/][iParam1 /*3*/];
}

void func_18(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_19(uParam1, "Abigail1", func_21(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_19(uParam1, "Abigail2", func_21(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_19(uParam1, "Barry1", func_21(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_19(uParam1, "Barry2", func_21(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_19(uParam1, "Barry3", func_21(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_19(uParam1, "Barry3A", func_21(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_19(uParam1, "Barry3C", func_21(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_19(uParam1, "Barry4", func_21(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_19(uParam1, "Dreyfuss1", func_21(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_19(uParam1, "Epsilon1", func_21(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_19(uParam1, "Epsilon2", func_21(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_19(uParam1, "Epsilon3", func_21(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_19(uParam1, "Epsilon4", func_21(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_19(uParam1, "Epsilon5", func_21(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_19(uParam1, "Epsilon6", func_21(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_19(uParam1, "Epsilon7", func_21(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_19(uParam1, "Epsilon8", func_21(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_19(uParam1, "Extreme1", func_21(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_19(uParam1, "Extreme2", func_21(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_19(uParam1, "Extreme3", func_21(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_19(uParam1, "Extreme4", func_21(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_19(uParam1, "Fanatic1", func_21(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_20(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_19(uParam1, "Fanatic2", func_21(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_20(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_19(uParam1, "Fanatic3", func_21(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_19(uParam1, "Hao1", func_21(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_19(uParam1, "Hunting1", func_21(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_19(uParam1, "Hunting2", func_21(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_19(uParam1, "Josh1", func_21(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_19(uParam1, "Josh2", func_21(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_19(uParam1, "Josh3", func_21(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_19(uParam1, "Josh4", func_21(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_19(uParam1, "Maude1", func_21(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_19(uParam1, "Minute1", func_21(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_19(uParam1, "Minute2", func_21(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_19(uParam1, "Minute3", func_21(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_19(uParam1, "MrsPhilips1", func_21(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_19(uParam1, "MrsPhilips2", func_21(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_19(uParam1, "Nigel1", func_21(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_19(uParam1, "Nigel1A", func_21(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_19(uParam1, "Nigel1B", func_21(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_20(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_19(uParam1, "Nigel1C", func_21(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_20(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_19(uParam1, "Nigel1D", func_21(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_20(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_19(uParam1, "Nigel2", func_21(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_19(uParam1, "Nigel3", func_21(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_19(uParam1, "Omega1", func_21(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_19(uParam1, "Omega2", func_21(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_19(uParam1, "Paparazzo1", func_21(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_19(uParam1, "Paparazzo2", func_21(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_19(uParam1, "Paparazzo3", func_21(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_19(uParam1, "Paparazzo3A", func_21(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_19(uParam1, "Paparazzo3B", func_21(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_19(uParam1, "Paparazzo4", func_21(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_19(uParam1, "Rampage1", func_21(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_19(uParam1, "Rampage3", func_21(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_19(uParam1, "Rampage4", func_21(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_19(uParam1, "Rampage5", func_21(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_19(uParam1, "Rampage2", func_21(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_20(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_19(uParam1, "TheLastOne", func_21(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_19(uParam1, "Tonya1", func_21(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_19(uParam1, "Tonya2", func_21(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_19(uParam1, "Tonya3", func_21(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_19(uParam1, "Tonya4", func_21(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_19(uParam1, "Tonya5", func_21(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_20(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_19(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_20(int iParam0)
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

struct<2> func_21(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_22(iParam0) };
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

struct<2> func_22(int iParam0)
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

bool func_23(int iParam0)
{
	return func_24(func_42(), iParam0);
}

int func_24(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_32(iParam1) || !func_32(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_30(iParam0);
	iVar1 = func_30(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_29(iParam0);
	iVar1 = func_29(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_28(iParam0);
	iVar1 = func_28(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_27(iParam0);
	iVar1 = func_27(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_26(iParam0);
	iVar1 = func_26(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_25(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_26(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_27(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_28(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_29(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_30(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_31(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_31(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_32(int iParam0)
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
	iVar0 = func_25(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_26(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_27(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_30(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_29(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_28(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_33(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_33(int iParam0, int iParam1)
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

void func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_30(*iParam0);
	iVar1 = func_29(*iParam0);
	iVar2 = func_28(*iParam0);
	iVar3 = func_27(*iParam0);
	iVar4 = func_26(*iParam0);
	iVar5 = func_25(*iParam0);
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
	iVar6 = func_33(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_33(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_35(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_35(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_41(uParam0, iParam1);
	func_40(uParam0, iParam2);
	func_39(uParam0, iParam3);
	func_38(uParam0, iParam5);
	func_37(uParam0, iParam4);
	func_36(uParam0, iParam6);
}

void func_36(var uParam0, int iParam1)
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

void func_37(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(*uParam0);
	iVar1 = func_30(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_33(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_38(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_39(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_40(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_41(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_42()
{
	var uVar0;
	
	func_41(&uVar0, unk_0x4460E481B9E33ADA());
	func_40(&uVar0, unk_0x8D199E381D262EEF());
	func_39(&uVar0, unk_0xD8A54335F18763BA());
	func_37(&uVar0, unk_0x972A296334C9D57B());
	func_38(&uVar0, unk_0x118229AD063C3C1D());
	func_36(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_43(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

int func_44(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

int func_45(int iParam0)
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

void func_46()
{
	if (!func_45(0x00000027))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x0000001B /*6*/], 0x00000003))
		{
			if (func_47("FS_HELP1") == 0x00000002)
			{
				func_6("FS_HELP1", 0x00000001, 0x00000000, 0x000007D0, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (func_47("FS_HELP1") == 0x00000001)
			{
				func_5(0x00000027);
			}
		}
	}
}

int func_47(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, &Global_1AEC9))
	{
		return 0x00000001;
	}
	if (func_48(sParam0))
	{
		return 0x00000000;
	}
	return 0x00000002;
}

int func_48(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_1B416.f_4FB5[iVar0 /*16*/])))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_49()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!func_45(0x00000037))
		{
			if ((func_53(0x00000005) && func_51(unk_0x16F2683693E537C9(), func_52(0x00000005), 0x00000001) < func_50(0x00000005)) || (func_53(0x00000006) && func_51(unk_0x16F2683693E537C9(), func_52(0x00000006), 0x00000001) < func_50(0x00000006)))
			{
				if (func_47("BARSTASH2") == 0x00000002)
				{
					func_6("BARSTASH2", 0x00000001, 0x00000000, 0x000007D0, 0x00002710, 0x00000002, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (func_47("BARSTASH2") == 0x00000001)
				{
					func_5(0x00000037);
				}
			}
		}
	}
}

float func_50(int iParam0)
{
	if (iParam0 == 0x00000005 || iParam0 == 0x00000006)
	{
		return 250f;
	}
	else if (iParam0 == 0x00000026)
	{
		return 35f;
	}
	else if (iParam0 == 0x00000027)
	{
		return 37.5f;
	}
	else if (iParam0 == 0x00000028)
	{
		return 45f;
	}
	else if (iParam0 == 0x00000029)
	{
		return 150f;
	}
	else if (iParam0 == 0x00000031 || iParam0 == 0x00000032)
	{
		return 90f;
	}
	return 250f;
}

float func_51(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam2);
}

Vector3 func_52(int iParam0)
{
	if (iParam0 == 0x00000005)
	{
		return 1161.31f, -1326.52f, 34.23f;
	}
	else if (iParam0 == 0x00000006)
	{
		return -533.15f, -1691.25f, 18.21f;
	}
	else if (iParam0 == 0x00000026)
	{
		return -565.8f, 293.14f, 90.8f;
	}
	else if (iParam0 == 0x00000027)
	{
		return -1036.65f, 363.59f, 79.82f;
	}
	else if (iParam0 == 0x00000028)
	{
		return -620.37f, -264.39f, 37.81f;
	}
	else if (iParam0 == 0x00000029)
	{
		return -1115.96f, 31.42f, 53.8f;
	}
	else if (iParam0 == 0x00000031)
	{
		return 305.52f, 157.19f, 102.94f;
	}
	else if (iParam0 == 0x00000032)
	{
		return 1040.96f, -534.42f, 60.17f;
	}
	return 0f, 0f, 0f;
}

var func_53(int iParam0)
{
	return Global_1B085[iParam0 /*10*/].f_1;
}

void func_54()
{
	if (func_75())
	{
		if (!func_43(0x00000072))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x0000002E /*6*/], 0x00000003))
			{
				func_72(0x20F23520, 0x00000006, 0x00000002, 0x00000032, 0x0000EA60, 0x00002710, 0xFFFFFFFF, 0x000000B5, 0xFFFFFFFF, 0x00000000, 0x00000001);
				func_71(0x00000072, 0x00000001);
			}
		}
		else if (!func_43(0x00000053))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x00000033 /*6*/], 0x00000003))
			{
				if (func_70(0x20F23520))
				{
					func_56(0x20F23520);
					func_55(0x000000B5, 0x00000000);
				}
			}
		}
	}
}

void func_55(int iParam0, int iParam1)
{
	if (iParam0 == 0x000000EB || iParam0 == 0x00000000)
	{
		return;
	}
	Global_1B416.f_21A0[iParam0] = 0x00000001;
	Global_1B416.f_21A0.f_EC[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

int func_56(int iParam0)
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
				func_69(iVar0);
				func_61(iParam0);
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
			func_61(iParam0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_28A)
	{
		if (Global_1B416.f_1E03.f_C7[iVar0 /*15*/] == iParam0)
		{
			func_60(iParam0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_2FC)
	{
		if (Global_1B416.f_1E03.f_28B[iVar0 /*14*/] == iParam0)
		{
			func_58(iVar0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_362)
	{
		if (Global_1B416.f_1E03.f_2FD[iVar0 /*10*/] == iParam0)
		{
			func_57(iVar0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	return iVar1;
}

void func_57(int iParam0)
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

void func_58(int iParam0)
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
	func_59(0x00000000);
	func_59(0x00000001);
	func_59(0x00000002);
}

void func_59(int iParam0)
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

void func_60(int iParam0)
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

void func_61(int iParam0)
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < Global_1B416.f_1E03.f_C6)
	{
		if (Global_1B416.f_1E03.f_89[iVar1 /*15*/] == iParam0)
		{
			func_62(Global_1B416.f_1E03.f_89[iVar1 /*15*/].f_6);
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

int func_62(int iParam0)
{
	int iVar0;
	
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (func_68(iParam0, Global_4C1E) == 0x00000001)
		{
			func_67(iParam0, Global_4C1E, 0x00000000);
			if (func_66(iParam0, Global_4C1E) == 0x00000000)
			{
				iVar0 = Global_4C1E;
				func_63(iParam0, iVar0);
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

void func_63(int iParam0, int iParam1)
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
			func_65(iParam0, iVar0, 0x00000000);
			func_64(iParam0, iVar0, 0x00000000);
		}
	}
}

void func_64(int iParam0, int iParam1, int iParam2)
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

void func_65(int iParam0, int iParam1, int iParam2)
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

int func_66(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	Global_706[iParam0 /*29*/].f_13[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_13[iParam1] = iParam2;
	}
}

int func_68(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_13[iParam1];
}

void func_69(int iParam0)
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
			func_59(iVar0);
		}
		iVar0++;
	}
}

int func_70(int iParam0)
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

void func_71(int iParam0, int iParam1)
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

int func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<14> Var0;
	
	if (func_74(0x00000000))
	{
		return 0x00000000;
	}
	if (iParam4 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam5 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam6 == 0x0000004C)
	{
		return 0x00000000;
	}
	if (iParam7 == 0x000000EB)
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
	if (iParam2 < 0x00000001 || iParam2 > 0x00000007)
	{
		return 0x00000000;
	}
	if (Global_1B416.f_1E03.f_2FC < 0x00000008)
	{
		Var0 = iParam0;
		Var0.f_3 = func_73(iParam1);
		Var0.f_4 = (unk_0x1C0640BA9A7327B3() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_A = 0xFFFFFFFF;
		Var0.f_B = 0xFFFFFFFF;
		Var0.f_D = iParam10;
		unk_0x0674E58A79778E99(&(Var0.f_1), 0x00000000);
		Global_1B416.f_1E03.f_28B[Global_1B416.f_1E03.f_2FC /*14*/] = { Var0 };
		Global_1B416.f_1E03.f_2FC++;
		func_59(0x00000000);
		func_59(0x00000001);
		func_59(0x00000002);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_73(int iParam0)
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

bool func_74(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_75()
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

void func_76()
{
	int iVar0;
	struct<7> Var1;
	
	iLocal_50++;
	iLocal_51++;
	if (iLocal_50 >= 0x0000003F)
	{
		iLocal_50 = 0x00000000;
		iLocal_51 = 0x00000000;
		iLocal_52 = 0x00000000;
	}
	else if (iLocal_51 > 0x0000001F)
	{
		iLocal_51 = 0x00000000;
		iLocal_52++;
	}
	iVar0 = iLocal_50;
	if (!func_82(iVar0) || iVar0 == 0x00000034)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889.f_186[iLocal_52], iLocal_51))
		{
			func_18(iVar0, &Var1);
			if (iVar0 == 0x0000003A)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_4889.f_186[iLocal_52]), iLocal_51);
			}
			else if (unk_0x24EDB6A19624D7FB(Var1.f_6))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_4889.f_186[iLocal_52]), iLocal_51);
			}
			else if (Global_1B085[iVar0 /*10*/].f_8 != 0xFFFFFFFF)
			{
				if (iLocal_53[Global_1B085[iVar0 /*10*/].f_8])
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iLocal_54[Global_1B085[iVar0 /*10*/].f_8] /*23*/].f_B, 0x00000006))
					{
						func_81(iLocal_54[Global_1B085[iVar0 /*10*/].f_8]);
					}
				}
			}
		}
		else if (Global_1B085[iVar0 /*10*/].f_8 != 0xFFFFFFFF)
		{
			if (iLocal_53[Global_1B085[iVar0 /*10*/].f_8])
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_79AA[iLocal_54[Global_1B085[iVar0 /*10*/].f_8] /*23*/].f_B, 0x00000006))
				{
					func_77(iLocal_54[Global_1B085[iVar0 /*10*/].f_8]);
				}
			}
		}
	}
}

void func_77(int iParam0)
{
	func_80(iParam0, 0x00000001, 0x00000000);
	func_79(iParam0, 0x00000001);
	func_78(iParam0, 0x00000001);
}

void func_78(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000004))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000004);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000004);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_79(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000005))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000005);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000005);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_80(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000006))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000006);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000006);
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000B);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000B);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_81(int iParam0)
{
	func_80(iParam0, 0x00000000, 0x00000000);
	func_79(iParam0, 0x00000001);
	func_78(iParam0, 0x00000001);
}

int func_82(int iParam0)
{
	if ((((iParam0 == 0x00000034 || iParam0 == 0x00000035) || iParam0 == 0x00000036) || iParam0 == 0x00000037) || iParam0 == 0x00000038)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_83(int iParam0)
{
	struct<31> Var0;
	var uVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<2> Var10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	int iVar15;
	char* sVar16;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_18(iParam0, &Var0);
	Global_1B085[iParam0 /*10*/].f_2 = 0x00000000;
	if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000001))
	{
		if (!Var0.f_17)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_4889[iParam0 /*6*/]), 0x00000001);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000003))
	{
		if (!Global_1B416.f_4889[iParam0 /*6*/].f_1)
		{
			uVar1 = func_42();
			func_34(&uVar1, 0x00000000, 0x00000000, Var0.f_F, 0x00000000, 0x00000000, 0x00000000);
			if (iParam0 == 0x00000039)
			{
				iVar2 = unk_0x09AC81E49EA267F7(0x00000003, 0x0000000B);
				iVar2 *= 30;
				func_34(&uVar1, 0x00000000, 0x00000000, iVar2, 0x00000000, 0x00000000, 0x00000000);
			}
			Global_1B416.f_4889[iParam0 /*6*/].f_2 = uVar1;
			Global_1B416.f_4889[iParam0 /*6*/].f_1 = 0x00000001;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000001))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000002))
			{
				bVar3 = 0x00000001;
				if (Var0.f_E != 0xFFFFFFFF)
				{
					if (!func_43(Var0.f_E))
					{
						bVar3 = 0x00000000;
					}
				}
				if (func_128(iParam0))
				{
					bVar3 = 0x00000000;
				}
				if (func_126(iParam0))
				{
					bVar3 = 0x00000000;
				}
				if (func_125(Var0.f_1E))
				{
					bVar3 = 0x00000000;
				}
				if (Var0.f_F > 0x00000000 && bVar3)
				{
					if (!func_23(Global_1B416.f_4889[iParam0 /*6*/].f_2))
					{
						func_122(Global_1B416.f_4889[iParam0 /*6*/].f_2, &uVar4, &uVar5, &uVar6, &iVar7, &iVar8, &iVar9);
						if ((iVar9 > 0x00000000 || iVar8 > 0x00000000) || iVar7 > 0x0000000A)
						{
							Var10 = { func_21(iParam0) };
							Global_1B416.f_4889[iParam0 /*6*/].f_2 = func_42();
							func_34(&(Global_1B416.f_4889[iParam0 /*6*/].f_2), 0x00000000, 0x00000000, Var0.f_F, 0x00000000, 0x00000000, 0x00000000);
						}
						bVar3 = 0x00000000;
					}
				}
				if (!func_121(Var0.f_1B, Var0.f_1C))
				{
					bVar3 = 0x00000000;
				}
				if (bVar3)
				{
					unk_0x5D96D8530B3D0904(&(Global_1B416.f_4889[iParam0 /*6*/]), 0x00000002);
					Global_1B085[iParam0 /*10*/].f_4 = 0x00000000;
					Global_1B085[iParam0 /*10*/].f_6 = 0x00000000;
					Global_1B085[iParam0 /*10*/].f_5 = 0x00000000;
					if (iParam0 == 0x00000023)
					{
						Global_1B085[iParam0 /*10*/].f_3 = 0x00000000;
						unk_0xB38702A5025BB490("launcher_MrsPhilips");
					}
					else if (iParam0 == 0x0000003A)
					{
						Global_1B085[iParam0 /*10*/].f_3 = 0x00000000;
						unk_0xB38702A5025BB490("launcher_Tonya");
					}
					else
					{
						Global_1B085[iParam0 /*10*/].f_3 = 0x00000001;
					}
				}
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000003))
	{
		bVar11 = 0x00000001;
		if (func_128(iParam0))
		{
			bVar11 = 0x00000000;
		}
		if (func_126(iParam0))
		{
			bVar11 = 0x00000000;
		}
		if (func_125(Var0.f_1E))
		{
			bVar11 = 0x00000000;
		}
		if (bVar11)
		{
			if (!func_121(Var0.f_1B, Var0.f_1C))
			{
				bVar11 = 0x00000000;
			}
		}
		if (!bVar11)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_4889[iParam0 /*6*/]), 0x00000002);
		}
	}
	iVar12 = 0x00000001;
	if (Global_1B085[iParam0 /*10*/].f_1)
	{
		Global_1B085[iParam0 /*10*/].f_2 = 0x00000001;
		Global_1B085[iParam0 /*10*/].f_1 = 0x00000000;
		Global_1B085[iParam0 /*10*/].f_3 = 0x00000001;
	}
	else if (Global_1B085[iParam0 /*10*/].f_3)
	{
		if (((((Var0.f_4 == 0x00000000 || Var0.f_4 == 0x00000002) || Var0.f_4 == 0x00000003) || Var0.f_4 == 0x0000000B) || Var0.f_4 == 0x00000010) || Var0.f_4 == 0x00000011)
		{
			fVar13 = 100f;
		}
		else
		{
			fVar13 = 209f;
		}
		if (!func_120() && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Var0.f_6, 0x00000000) > fVar13)
		{
			Global_1B085[iParam0 /*10*/].f_3 = 0x00000000;
		}
		else
		{
			if (iParam0 == 0x0000000A && Global_1B416.f_1C58[0x0000006D] != 0x00000001)
			{
				func_107(0x0000006D, 0x00000001);
			}
			iVar12 = 0x00000000;
		}
	}
	iVar14 = 0x00000000;
	if ((((iVar12 && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000003)) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000000)) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000001)) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000002))
	{
		if (iParam0 == 0x0000003A && func_106())
		{
		}
		else
		{
			iVar14 = 0x00000002;
		}
	}
	if (Global_1B085[iParam0 /*10*/].f_7 != iVar14)
	{
		if (func_105(&(Global_1B085[iParam0 /*10*/].f_8)))
		{
			if (func_16(Var0.f_6, 0f, 0f, 0f, 0x00000000))
			{
			}
			else
			{
				iVar15 = iLocal_54[Global_1B085[iParam0 /*10*/].f_8];
				if (iVar14 == 0x00000000)
				{
					func_3(iVar15, 0x00000000, 0x00000000);
					func_104(iVar15, 0x00000000);
					func_2(&(Global_1B085[iParam0 /*10*/].f_8));
				}
				else if (iVar14 == 0x00000002)
				{
					if (func_103(iParam0))
					{
						func_102(iVar15, 0x00000001);
						func_101(iVar15, func_52(iParam0));
						func_100(iVar15, func_50(iParam0));
					}
					else
					{
						func_102(iVar15, 0x00000000);
						func_99(iVar15, Var0.f_9);
						func_101(iVar15, Var0.f_6);
					}
					func_96(iVar15, iParam0);
					func_95(iVar15);
					if (func_94(Var0.f_1A, 0x00000001))
					{
						func_93(iVar15, 0x00000001, 0x00000001, 0x00000000);
					}
					if (func_94(Var0.f_1A, 0x00000000))
					{
						func_93(iVar15, 0x00000001, 0x00000000, 0x00000000);
					}
					if (func_94(Var0.f_1A, 0x00000002))
					{
						func_93(iVar15, 0x00000001, 0x00000002, 0x00000000);
					}
					if (func_82(iParam0) && iParam0 != 0x00000034)
					{
						func_81(iVar15);
					}
					if (func_82(iParam0))
					{
						if (func_91(iParam0))
						{
							func_104(iVar15, 0x00000001);
						}
					}
					if (iParam0 == 0x0000003A)
					{
						func_90(iVar15, 0x00000004);
					}
					else
					{
						func_90(iVar15, 0x00000008);
					}
					func_3(iVar15, 0x00000001, 0x00000000);
				}
			}
			Global_1B085[iParam0 /*10*/].f_7 = iVar14;
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000004))
	{
		if (unk_0x12AB0310C2281427(&(Var0.f_A)) == unk_0x12AB0310C2281427(""))
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_4889[iParam0 /*6*/]), 0x00000004);
		}
		else if (iVar14 == 0x00000002)
		{
			if (func_94(Var0.f_1A, func_9()))
			{
				if (!func_89() && !unk_0x991B1F0980C62628())
				{
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						if (iParam0 == 0x0000003A)
						{
							if (func_88(0x000000F3))
							{
								if (func_87(0x000000F3))
								{
									func_6(&(Var0.f_A), 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00002710, Var0.f_1A, 0x00000000, 0x00000000, 0x00000000);
									func_55(0x0000003F, 0x000003E8);
									unk_0x5D96D8530B3D0904(&(Global_1B416.f_4889[iParam0 /*6*/]), 0x00000004);
								}
							}
						}
						else if ((iParam0 == 0x00000005 || iParam0 == 0x00000026) || iParam0 == 0x00000031)
						{
							func_6(&(Var0.f_A), 0x00000001, 0x00001388, 0xFFFFFFFF, 0x00002710, Var0.f_1A, 0x00000000, 0x00000000, 0x00000000);
							unk_0x5D96D8530B3D0904(&(Global_1B416.f_4889[iParam0 /*6*/]), 0x00000004);
						}
						else
						{
							func_6(&(Var0.f_A), 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00002710, Var0.f_1A, 0x00000000, 0x00000000, 0x00000000);
							unk_0x5D96D8530B3D0904(&(Global_1B416.f_4889[iParam0 /*6*/]), 0x00000004);
						}
					}
				}
			}
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (!func_45(0x00000023))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000003))
			{
				if (((((!func_94(Var0.f_1A, func_9()) && !func_103(iParam0)) && !func_82(iParam0)) && !func_86(iParam0)) && !func_85(iParam0)) && !Global_1B085[iParam0 /*10*/].f_3)
				{
					if (SYSTEM::VDIST2(Var0.f_6, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001)) < 81f)
					{
						sVar16 = "";
						if (unk_0xEAE0D21A50E6C7F4(Var0.f_1A, 0x00000001))
						{
							sVar16 = "TRIG_RC_F";
						}
						else if (unk_0xEAE0D21A50E6C7F4(Var0.f_1A, 0x00000000))
						{
							sVar16 = "TRIG_RC_M";
						}
						else
						{
							sVar16 = "TRIG_RC_T";
						}
						if (!unk_0xEA6BC48857E0AC4C(sVar16))
						{
							switch (func_47(sVar16))
							{
								case 0x00000002:
									func_6(sVar16, 0x00000001, 0x00000000, 0x000003E8, 0x00002710, func_84(), 0x00000000, 0x00000000, 0x00000000);
									break;
								
								case 0x00000001:
									func_5(0x00000023);
									StringCopy(&Global_1AEC9, "", 16);
									break;
								}
							}
						}
					}
				}
			}
	}
}

int func_84()
{
	func_10();
	switch (Global_1B416.f_936.f_21B.f_10E1)
	{
		case 0x00000000:
			return 0x00000001;
			break;
		
		case 0x00000001:
			return 0x00000002;
			break;
		
		case 0x00000002:
			return 0x00000004;
			break;
	}
	return 0x00000000;
}

int func_85(int iParam0)
{
	if (iParam0 == 0x00000002)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x00000003 /*6*/], 0x00000003) && Global_1B085[0x00000003 /*10*/].f_3 == 0x00000001)
		{
			return 0x00000001;
		}
	}
	else if (iParam0 == 0x00000003)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x00000002 /*6*/], 0x00000003) && Global_1B085[0x00000002 /*10*/].f_3 == 0x00000001)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_86(int iParam0)
{
	if (iParam0 == 0x00000002 || iParam0 == 0x00000003)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x00000002 /*6*/], 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x00000003 /*6*/], 0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x00000002 /*6*/], 0x00000003) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x00000003 /*6*/], 0x00000003))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0x00000000;
	}
	return unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13);
}

int func_88(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0x00000000;
	}
	bVar1 = unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000000);
	bVar2 = unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x0000000F);
	if (bVar1 && bVar2)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_89()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (Global_79AA[iVar0 /*23*/].f_10 == iParam1)
	{
		return;
	}
	Global_79AA[iVar0 /*23*/].f_10 = iParam1;
	switch (iParam1)
	{
		case 0x00000001:
			Global_79AA[iVar0 /*23*/].f_C[0x00000000] = 0x00000028;
			break;
		
		case 0x00000003:
			Global_79AA[iVar0 /*23*/].f_C[0x00000000] = 0x0000003C;
			break;
	}
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_82(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = 0x000000C2;
	iVar1 = (iParam0 - 0x00000034);
	if (func_43(0x0000006C) == 0x00000001)
	{
		return 0x00000001;
	}
	if (Global_1B416.f_92B[iVar1 /*2*/] >= 0x00000001)
	{
		return 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iParam0 /*6*/], 0x00000003))
	{
		return 0x00000001;
	}
	return func_92((iVar0 + iVar1), 0x00000000);
}

int func_92(int iParam0, int iParam1)
{
	if (Global_1B416.f_27CD[iParam0 /*12*/].f_5 == 0x00000001)
	{
		if (iParam1 == 0x00000001)
		{
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_93(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1)
	{
		if (!bParam3)
		{
			Global_79AA[iVar0 /*23*/].f_11 = iParam2;
			if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000008))
			{
				unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
			}
			unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000008);
		}
		else
		{
			Global_79AA[iVar0 /*23*/].f_12 = iParam2;
			if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x0000000A))
			{
				unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
			}
			unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000A);
		}
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
	}
	else
	{
		func_95(iParam0);
	}
}

int func_94(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
			return unk_0xEAE0D21A50E6C7F4(iParam0, iParam1);
		
		default:
	}
	return 0x00000000;
}

void func_95(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000008) || unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x0000000A))
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
	}
	unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000008);
	unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000A);
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_96(int iParam0, int iParam1)
{
	func_98(iParam0, 0x00000000);
	if (iParam1 == 0x00000001)
	{
		func_97(iParam0, "B_ABI");
	}
	else if (((iParam1 == 0x00000002 || iParam1 == 0x00000003) || iParam1 == 0x00000004) || iParam1 == 0x00000007)
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x00000002 /*6*/], 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x00000003 /*6*/], 0x00000003)) || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x00000004 /*6*/], 0x00000003))
		{
			func_97(iParam0, "B_BAR");
		}
		else
		{
			func_97(iParam0, "BLIP_66");
			func_99(iParam0, 0x00000042);
		}
	}
	else if (iParam1 == 0x00000005 || iParam1 == 0x00000006)
	{
		func_97(iParam0, "B_STA");
	}
	else if (iParam1 == 0x00000008)
	{
		func_97(iParam0, "B_DRE");
	}
	else if ((((((iParam1 == 0x0000000A || iParam1 == 0x0000000B) || iParam1 == 0x0000000C) || iParam1 == 0x0000000D) || iParam1 == 0x0000000E) || iParam1 == 0x0000000F) || iParam1 == 0x00000010)
	{
		func_97(iParam0, "B_EPS");
	}
	else if ((iParam1 == 0x00000012 || iParam1 == 0x00000013) || iParam1 == 0x00000014)
	{
		func_97(iParam0, "B_EXT");
	}
	else if ((iParam1 == 0x00000015 || iParam1 == 0x00000016) || iParam1 == 0x00000017)
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x00000015 /*6*/], 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x00000016 /*6*/], 0x00000003)) || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[0x00000017 /*6*/], 0x00000003))
		{
			func_97(iParam0, "B_FAN");
		}
		else
		{
			func_97(iParam0, "BLIP_66");
			func_99(iParam0, 0x00000042);
		}
	}
	else if (iParam1 == 0x0000001A)
	{
		func_97(iParam0, "B_HUN");
	}
	else if ((iParam1 == 0x0000001C || iParam1 == 0x0000001D) || iParam1 == 0x0000001E)
	{
		func_97(iParam0, "B_JOS");
	}
	else if (iParam1 == 0x00000021 || iParam1 == 0x00000022)
	{
		func_97(iParam0, "B_MIN");
	}
	else if (((iParam1 == 0x00000026 || iParam1 == 0x00000027) || iParam1 == 0x00000028) || iParam1 == 0x00000029)
	{
		func_97(iParam0, "B_CEL");
	}
	else if (iParam1 == 0x0000002A || iParam1 == 0x0000002B)
	{
		func_97(iParam0, "B_NIG");
	}
	else if (iParam1 == 0x0000002D)
	{
		func_97(iParam0, "B_OME");
	}
	else if ((iParam1 == 0x0000002F || iParam1 == 0x00000030) || iParam1 == 0x00000033)
	{
		func_97(iParam0, "B_PAP");
	}
	else if (iParam1 == 0x00000031 || iParam1 == 0x00000032)
	{
		func_97(iParam0, "B_PHO");
	}
	else if (iParam1 == 0x00000034)
	{
		func_97(iParam0, "BLIP_66");
	}
	else if (((iParam1 == 0x00000035 || iParam1 == 0x00000036) || iParam1 == 0x00000037) || iParam1 == 0x00000038)
	{
		func_97(iParam0, "BLIP_84");
	}
	else if (((iParam1 == 0x0000003B || iParam1 == 0x0000003C) || iParam1 == 0x0000003D) || iParam1 == 0x0000003E)
	{
		func_97(iParam0, "B_TON");
	}
	else
	{
		func_97(iParam0, "BLIP_66");
	}
}

void func_97(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	StringCopy(&(Global_79AA[iVar0 /*23*/].f_14), sParam1, 8);
	if (unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13))
	{
		unk_0xDC5B2F9D0CCE3A10(Global_79AA[iVar0 /*23*/].f_13, sParam1);
	}
}

void func_98(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	unk_0xCA42B3469E060D13(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000015, 0x0000001A, iParam1);
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (Global_79AA[iVar0 /*23*/].f_C[0x00000000] == iParam1)
	{
		return;
	}
	Global_79AA[iVar0 /*23*/].f_C[0x00000000] = iParam1;
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_100(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	Global_79A7 = 0x00000001;
	Global_79AA[iVar0 /*23*/].f_A = uParam1;
	Global_914C = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_101(int iParam0, vector3 vParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if ((vParam1.x == Global_79AA[iVar0 /*23*/][0x00000000 /*3*/] && vParam1.y == Global_79AA[iVar0 /*23*/][0x00000000 /*3*/].f_1) && vParam1.z == Global_79AA[iVar0 /*23*/][0x00000000 /*3*/].f_2)
	{
		return;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
	Global_79AA[iVar0 /*23*/][0x00000000 /*3*/] = { vParam1 };
	Global_914C = 0x00000001;
}

void func_102(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000001C);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000001C);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

int func_103(int iParam0)
{
	if (((((((iParam0 == 0x00000005 || iParam0 == 0x00000006) || iParam0 == 0x00000026) || iParam0 == 0x00000027) || iParam0 == 0x00000028) || iParam0 == 0x00000029) || iParam0 == 0x00000031) || iParam0 == 0x00000032)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_104(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000014))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000014);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000014);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000014);
}

int func_105(var uParam0)
{
	int iVar0;
	
	if (*uParam0 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000014)
	{
		if (!iLocal_53[iVar0])
		{
			*uParam0 = iVar0;
			iLocal_53[iVar0] = 0x00000001;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_106()
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

void func_107(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 0x000000E2)
	{
		if (Global_12B4E)
		{
			iVar0 = Global_2537E2.f_4B[iParam0];
		}
		else
		{
			iVar0 = Global_1B416.f_1C58[iParam0];
		}
		if (iVar0 != iParam1 || unk_0xEAE0D21A50E6C7F4(Global_9162[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
		{
			if ((((iParam1 == 0x00000004 || iParam1 == 0x00000003) || iParam1 == 0x00000005) || iParam1 == 0x00000006) || iParam1 == 0x00000002)
			{
				unk_0x5D96D8530B3D0904(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
				Global_933A[iParam0] = iParam1;
			}
			else if (Global_12B4E)
			{
				Global_2537E2.f_4B[iParam0] = iParam1;
			}
			else
			{
				Global_1B416.f_1C58[iParam0] = iParam1;
			}
			unk_0x5D96D8530B3D0904(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
			func_109(iParam0);
			if (unk_0xEAE0D21A50E6C7F4(Global_9162[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
			{
				func_108(iParam0);
			}
		}
	}
}

void func_108(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_9511.f_E4[(iParam0 / 0x00000020)], (iParam0 % 0x00000017)))
	{
		unk_0x5D96D8530B3D0904(&(Global_9511.f_E4[(iParam0 / 0x00000020)]), (iParam0 % 0x00000017));
		Global_9511[Global_9511.f_E3] = iParam0;
		Global_9511.f_E3++;
	}
}

void func_109(int iParam0)
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_117())
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_116(iParam0) };
	if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000002))
	{
		func_114(iParam0, &Var0);
	}
	if (!unk_0x76395FF5E8D5E643(Var0.f_5))
	{
		if (unk_0x22A8E52414415B76())
		{
			return;
		}
	}
	bVar1 = 0x00000000;
	bVar2 = 0x00000000;
	fVar4 = unk_0x0EB28750412C3A5A(Var0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001);
	if ((unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) && Global_933A[iParam0] == 0x00000002) && fVar4 > 210f)
	{
		unk_0x0674E58A79778E99(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		Global_9174[iParam0] = 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(joaat("startup_positioning")) == 0x00000000)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_9257[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
		{
			if (fVar4 < 25f)
			{
				if (Global_181EC.f_157 == 0x00000000)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						Global_181EC.f_157 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
					}
				}
				iVar5 = Global_181EC.f_157;
				iVar6 = unk_0xFBD08BECC9B87937(Var0);
				if (iVar5 == iVar6 && iVar5 != 0x00000000)
				{
					unk_0x5D96D8530B3D0904(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					Global_933A[iParam0] = 0x00000003;
					unk_0x5D96D8530B3D0904(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
				}
			}
			unk_0x0674E58A79778E99(&(Global_9257[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
	{
		iVar3 = Global_933A[iParam0];
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000000))
	{
		if (Global_1B416.f_2378)
		{
			iVar3 = func_111(iParam0);
		}
		else
		{
			iVar3 = 0x00000000;
		}
		if (func_11(0x0000000E))
		{
			iVar3 = 0x00000000;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000001) && unk_0x8A22C4C08282BF26(joaat("ambient_solomon")) == 0x00000000)
	{
		if (func_110())
		{
			iVar3 = 0x00000000;
		}
		else
		{
			iVar3 = 0x00000001;
		}
	}
	else
	{
		iVar3 = Global_1B416.f_1C58[iParam0];
	}
	if (Global_941D[iParam0] != iVar3)
	{
		bVar1 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_9162[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) || (Global_9174[iParam0] == 0x00000000 && Global_933A[iParam0] != 0x00000002))
		{
			bVar1 = 0x00000001;
		}
	}
	if (bVar1)
	{
		if (!Global_9161)
		{
		}
		else
		{
			if (!unk_0x76395FF5E8D5E643(Var0.f_5))
			{
				unk_0x8010B3127F058F0F(Var0.f_5, Var0.f_3, Var0, 0x00000000, 0x00000000, 0x00000000);
			}
			switch (iVar3)
			{
				case 0x00000001:
					if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000003))
					{
						bVar7 = 0x00000001;
					}
					else if (fVar4 > 3f || unk_0x755FF954DAE327E1(unk_0x9CED8DAD53D1A397(Var0.f_5)) <= 0.015f)
					{
						iVar8 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
						iVar9 = unk_0xFBD08BECC9B87937(Var0);
						if (iVar8 != iVar9 || iVar8 == 0x00000000)
						{
							bVar7 = 0x00000001;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
						}
						unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
						bVar2 = 0x00000001;
					}
					break;
				
				case 0x00000004:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000002:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000000:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000001);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000003:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, 0x00000000, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000005:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000006:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				}
		}
		if (bVar2)
		{
			unk_0x0674E58A79778E99(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
			Global_941D[iParam0] = iVar3;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) && Global_933A[iParam0] != 0x00000002)
	{
		unk_0x5D96D8530B3D0904(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		func_108(iParam0);
		if (Global_9174[iParam0] < 0x00000002)
		{
			Global_9174[iParam0]++;
		}
	}
}

int func_110()
{
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return 0x00000000;
	}
	switch (func_9())
	{
		case 0x00000000:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000041])
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000042])
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000041])
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = func_9();
	if (func_112(iParam0))
	{
		return 0x00000001;
	}
	if (iParam0 == 0x00000031)
	{
		if (iVar0 == 0x00000001)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000005], 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000006], 0x00000000))
			{
				return 0x00000000;
			}
		}
		if (func_12(iVar0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000005], iVar0))
			{
				return 0x00000000;
			}
		}
	}
	switch (iParam0)
	{
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			if (iVar0 == 0x00000000)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000000], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_12(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000000], iVar0))
				{
					if (iParam0 != 0x00000028)
					{
						return 0x00000000;
					}
					else
					{
						return 0x00000001;
					}
				}
			}
			break;
		
		case 0x0000002F:
		case 0x00000030:
		case 0x00000031:
			if (iVar0 == 0x00000001)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000005], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_12(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000005], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000032:
			if (iVar0 == 0x00000001)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000006], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_12(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000006], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000033:
		case 0x00000034:
			if (iVar0 == 0x00000002)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000002], 0x00000000))
				{
					return 0x00000000;
				}
				if (func_12(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000002], iVar0))
					{
						return 0x00000000;
					}
				}
			}
			else if (iVar0 == 0x00000000)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000001], 0x00000000))
				{
					return 0x00000000;
				}
				if (func_12(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000001], iVar0))
					{
						return 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000035:
			if (iVar0 == 0x00000002)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000003], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_12(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000003], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		default:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

int func_112(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 0x00000028 || iParam0 == 0x00000031) || iParam0 == 0x00000034)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				iVar0 = unk_0x134B62B726CEC8E6(func_113(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 0x00000001;
						break;
					}
				}
			}
	}
	return 0x00000000;
}

int func_113(int iParam0)
{
	return iParam0;
}

void func_114(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4, 0x00000002))
	{
		return;
	}
	iVar0 = func_42();
	iVar1 = func_27(iVar0);
	switch (iParam0)
	{
		case 0x00000085:
		case 0x00000086:
		case 0x000000C9:
		case 0x000000CA:
			if (func_115(iParam0))
			{
				if (iVar1 < 0x00000013)
				{
					if (iVar1 >= 0x00000007)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000013)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000007)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000C7:
		case 0x000000C8:
		case 0x000000CB:
		case 0x000000CC:
			if (func_115(iParam0))
			{
				if (iVar1 < 0x00000012)
				{
					if (iVar1 >= 0x00000007)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000012)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000007)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x0000008D:
		case 0x0000008E:
			if (func_115(iParam0))
			{
				if ((unk_0x8A22C4C08282BF26(joaat("jewelry_heist")) == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("jewelry_setup1")) == 0x00000000) && !Global_1B416.f_2378.f_63.f_3A[0x00000004])
				{
					if (iVar1 < 0x00000015)
					{
						if (iVar1 >= 0x00000007)
						{
							Global_1B416.f_1C58[iParam0] = 0x00000000;
							unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_1B416.f_2378.f_63.f_3A[0x00000004])
				{
					Global_1B416.f_1C58[iParam0] = 0x00000000;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (Global_1B416.f_2378.f_63.f_3A[0x00000004])
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			else if (unk_0x8A22C4C08282BF26(joaat("jewelry_heist")) == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("jewelry_setup1")) == 0x00000000)
			{
				if (iVar1 >= 0x00000015)
				{
					if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 18f)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000001;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else if (iVar1 < 0x00000007)
				{
					if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 18f)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000001;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
			}
			break;
		
		case 0x00000091:
		case 0x00000092:
		case 0x0000008F:
		case 0x00000090:
			if (func_115(iParam0))
			{
				if (iVar1 < 0x00000014)
				{
					if (iVar1 >= 0x00000009)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000014)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 40f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000009)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 40f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000093:
		case 0x00000094:
			if (!func_115(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x00000098:
		case 0x00000099:
		case 0x0000009A:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
			if (!func_115(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(joaat("assassin_valet")) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (unk_0x8A22C4C08282BF26(joaat("assassin_valet")) > 0x00000000)
			{
				Global_1B416.f_1C58[iParam0] = 0x00000000;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x0000009E:
		case 0x0000009F:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000046 /*34*/].f_6) == 0x00000000)
			{
				if (!func_115(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000A0:
		case 0x000000A1:
			if (unk_0x8A22C4C08282BF26(joaat("omega2")) == 0x00000000)
			{
				if (!func_115(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
			if (!func_115(iParam0) && unk_0x8A22C4C08282BF26(Global_15DBC[0x0000001A /*34*/].f_6) == 0x00000000)
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			else
			{
				return;
			}
			break;
		
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
			if (!func_115(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000002B /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000BE:
		case 0x000000BF:
			if (!func_115(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000C1:
			if (!func_115(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000005D /*34*/].f_6) > 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000C6:
			if (!func_115(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x00000050:
			if (!func_115(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000008 /*34*/].f_6) == 0x00000000 && unk_0x8A22C4C08282BF26(Global_15DBC[0x0000000A /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000CD:
		case 0x000000CE:
			if (!func_115(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000002F /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000CF:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000046 /*34*/].f_6) == 0x00000000)
			{
				if (!func_115(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D3:
		case 0x000000D2:
		case 0x000000D4:
		case 0x000000D5:
		case 0x000000D6:
		case 0x000000D7:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000030 /*34*/].f_6) == 0x00000000)
			{
				if (!func_115(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000063:
		case 0x00000064:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000027 /*34*/].f_6) == 0x00000000)
			{
				if (!func_115(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000D8:
			if (!func_115(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000D9:
		case 0x000000DA:
			if (!func_115(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000DB:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000DE:
			if (func_115(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000000;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
	}
}

bool func_115(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_116(iParam0) };
	iVar1 = unk_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar1 == 0x00000001 || iVar1 == 0x00000004) || iVar1 == 0x00000002);
}

struct<7> func_116(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 0x6B918EA1;
			break;
		
		case 0x00000001:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 0x53A940AB;
			break;
		
		case 0x00000002:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = 0x86EF4558;
			break;
		
		case 0x00000003:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 0x6B1985F9;
			break;
		
		case 0x00000004:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 0x05BB2ED2;
			break;
		
		case 0x00000005:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = 0xEF3F0B86;
			break;
		
		case 0x00000006:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 0x0AEC2A1A;
			break;
		
		case 0x00000007:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 0x2D336EA8;
			break;
		
		case 0x00000008:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = 0xC04458CF;
			break;
		
		case 0x00000009:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 0x75554302;
			break;
		
		case 0x0000000A:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = 0x8039A343;
			break;
		
		case 0x0000000B:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = 0xAC597B82;
			break;
		
		case 0x0000000C:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = 0x8BC342BA;
			break;
		
		case 0x0000000D:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 0x49173D5F;
			break;
		
		case 0x0000000E:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 0x4104CC95;
			break;
		
		case 0x0000000F:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 0x357C3584;
			break;
		
		case 0x00000010:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 0x4152D190;
			break;
		
		case 0x00000011:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 0x2FCD2E89;
			break;
		
		case 0x00000012:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = 0xF5FC937D;
			break;
		
		case 0x00000013:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = 0x8C9DC0BD;
			break;
		
		case 0x00000014:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 0x70B93241;
			break;
		
		case 0x00000015:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 0x49B4E441;
			break;
		
		case 0x00000016:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 0x7610BDED;
			break;
		
		case 0x00000017:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 0x50A152BD;
			break;
		
		case 0x00000018:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = 0xDE3B10AB;
			break;
		
		case 0x00000019:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 0x4C93B88A;
			break;
		
		case 0x0000001A:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 0x0F9B8B5A;
			break;
		
		case 0x0000001B:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 0x0CF90621;
			break;
		
		case 0x0000001C:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 0x6B5B357A;
			break;
		
		case 0x0000001D:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = 0x817161A6;
			break;
		
		case 0x0000001E:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 0x4E3E0F3D;
			break;
		
		case 0x0000001F:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = 0xDC882BD3;
			break;
		
		case 0x00000020:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = 0xF030709F;
			break;
		
		case 0x00000021:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = 0xB36A7A60;
			break;
		
		case 0x00000022:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 0x1204D709;
			break;
		
		case 0x00000023:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = 0xD75B3EC1;
			break;
		
		case 0x00000024:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = 0x83A1ACAC;
			break;
		
		case 0x00000025:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = 0xA6CEF378;
			break;
		
		case 0x00000026:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x8301B653;
			break;
		
		case 0x00000027:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x813232B0;
			break;
		
		case 0x00000028:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x899722D3;
			Var0.f_6 = 6.5f;
			break;
		
		case 0x00000029:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x2E413ABC;
			break;
		
		case 0x0000002A:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x29A1143B;
			break;
		
		case 0x0000002B:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x1FE49E03;
			break;
		
		case 0x0000002C:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x1C4AF98F;
			break;
		
		case 0x0000002D:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x8A139784;
			break;
		
		case 0x0000002E:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x9AA652E9;
			break;
		
		case 0x0000002F:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x249850A4;
			break;
		
		case 0x00000030:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xEFC0E6F6;
			break;
		
		case 0x00000031:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xC1F88B66;
			break;
		
		case 0x00000032:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x479926FE;
			break;
		
		case 0x00000033:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x677EC742;
			break;
		
		case 0x00000034:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 0x4265A13E;
			Var0.f_6 = 12f;
			break;
		
		case 0x00000035:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xAED75F6A;
			break;
	}
	switch (iParam0)
	{
		case 0x00000036:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = 0x90799222;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000037:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 0x459F7C6B;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000038:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 0x47E780FF;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000039:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = 0xC21E9E89;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003A:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 0x478DA961;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003B:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 0x52E90A75;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003C:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = 0xE4A12DDF;
			Var0.f_6 = 25f;
			break;
		
		case 0x000000E1:
			Var0.f_3 = 0xE684E276;
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = 0xEEC9CEC1;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003D:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = 0xF0F6743C;
			break;
		
		case 0x0000003E:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = 0xCEC320E2;
			break;
		
		case 0x0000003F:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 0x2D865E67;
			break;
		
		case 0x00000040:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = 0xCBDAD417;
			break;
		
		case 0x00000041:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = 0xA7BC7A3B;
			break;
		
		case 0x00000042:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 0x38968F6D;
			break;
		
		case 0x00000043:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 0x0CA5CE57;
			break;
		
		case 0x00000044:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = 0xF8762600;
			break;
		
		case 0x00000045:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 0x693E01A8;
			break;
		
		case 0x00000046:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 0x2F397905;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000047:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 0x2192DDB8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000048:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = 0xD4AAF76D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000049:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 0x0A9F8B6B;
			break;
		
		case 0x0000004A:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 0x6E67D2FA;
			break;
		
		case 0x0000004B:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = 0xDE5262E2;
			break;
		
		case 0x0000004C:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 0x621E986A;
			break;
		
		case 0x0000004D:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 0x0C2FEC8E;
			break;
		
		case 0x0000004E:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 0x7A03D0CA;
			break;
		
		case 0x0000004F:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 0x548188CD;
			break;
		
		case 0x00000050:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = 0xF9A7537E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000051:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 0x6DB3F686;
			break;
		
		case 0x00000052:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 0x526C3FF3;
			break;
		
		case 0x00000053:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 0x0DDC38EF;
			break;
		
		case 0x00000054:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 0x4B88A611;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x00000055:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = 0x8EBCAB6D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x00000056:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 0x7BDA4229;
			break;
		
		case 0x00000057:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = 0x82B4D16A;
			break;
		
		case 0x00000058:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = 0x8E67E744;
			break;
		
		case 0x00000059:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = 0x94E375C7;
			break;
		
		case 0x0000005A:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = 0xFC4A5DE1;
			break;
		
		case 0x0000005B:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = 0x990D333D;
			break;
		
		case 0x0000005C:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = 0xDE752237;
			break;
		
		case 0x0000005D:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 0x75CDECBF;
			break;
		
		case 0x0000005E:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 0x4FEEAB87;
			break;
		
		case 0x0000005F:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = 0x9EC1C92C;
			break;
		
		case 0x00000060:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = 0x956610D7;
			break;
		
		case 0x00000061:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = 0x92D8C222;
			break;
		
		case 0x00000062:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 0x39739866;
			break;
		
		case 0x00000063:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 0x69AF302C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000064:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = 0xB099BE68;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000065:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = 0x9402ADFE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000066:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 0x5FDFC5B9;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000067:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = 0xA936772C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000068:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 0x3842153D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000069:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = 0xFAB0F874;
			break;
		
		case 0x0000006A:
			Var0.f_3 = 0x1C8F29BC;
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = 0xC8D61D80;
			break;
		
		case 0x0000006B:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 0x7733A113;
			break;
		
		case 0x0000006C:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 0x7733A113;
			break;
		
		case 0x0000006D:
			Var0.f_3 = 0xB6A8EEEE;
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 0x5BB47EBE;
			break;
		
		case 0x0000006E:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = 0xC6A92236;
			break;
		
		case 0x0000006F:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = 0x965A35F0;
			break;
		
		case 0x00000070:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = 0xFD3C6106;
			break;
		
		case 0x00000071:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = 0xEAA4BBD7;
			break;
		
		case 0x00000072:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = 0xB6369857;
			break;
		
		case 0x00000073:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 0x58A7877F;
			break;
		
		case 0x00000074:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = 0xF42192E5;
			break;
		
		case 0x00000075:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = 0xCA87C509;
			break;
		
		case 0x00000076:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = 0xCC794C91;
			break;
		
		case 0x00000077:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = 0xF3937748;
			break;
		
		case 0x00000078:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = 0xC45498DB;
			break;
		
		case 0x00000079:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 0x2D1D4AFB;
			break;
		
		case 0x0000007A:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 0x1C6E29AD;
			break;
		
		case 0x0000007B:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 0x7C136B13;
			break;
		
		case 0x0000007C:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 0x7C136B13;
			break;
		
		case 0x0000007D:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 0x0A21772D;
			break;
		
		case 0x0000007E:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 0x128D0804;
			break;
		
		case 0x00000080:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = 0xA2D4904F;
			break;
		
		case 0x00000081:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 0x2D3FA523;
			break;
		
		case 0x00000082:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = 0xFAF82BB5;
			break;
		
		case 0x00000083:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = 0xE477FEB5;
			break;
		
		case 0x0000007F:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 0x4B0BD273;
			break;
		
		case 0x00000084:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = 0xCB4E72F0;
			break;
		
		case 0x00000085:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 0x0E87D246;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000086:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 0x2A908A2B;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000087:
			Var0.f_3 = 0xB965B659;
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 0x636D4AE0;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x00000088:
			Var0.f_3 = 0xB965B659;
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 0x5264F117;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x00000089:
			Var0.f_3 = 0x4951D513;
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = 0xC65FF0DC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x0000008A:
			Var0.f_3 = 0x4951D513;
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = 0x84B160CC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x0000008B:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = 0x99AFC840;
			break;
		
		case 0x0000008C:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 0x7FF114C7;
			break;
		
		case 0x0000008D:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 0x6FC17308;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000008E:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = 0x8AE0294D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000091:
			Var0.f_3 = 0x9817FF83;
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 0x74523DE8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000092:
			Var0.f_3 = 0x9817FF83;
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = 0xE649A1DD;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000008F:
			Var0.f_3 = 0x0694BE16;
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = 0xEE7A4B56;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000090:
			Var0.f_3 = 0x0694BE16;
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = 0xD13290C7;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000094:
			Var0.f_3 = 0xF2C06AFF;
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = 0xEA2D16DE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000093:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 0x1A465DD3;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000095:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = 0xDCEC4675;
			break;
		
		case 0x00000096:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 0x6C36650B;
			break;
		
		case 0x00000097:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 0x5029B9A4;
			break;
		
		case 0x00000098:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = 0xECDF96A9;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000099:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 0x5A1B7123;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009A:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = 0xA5896609;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009B:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = 0xBED718A0;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009C:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 0x715EF4EC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009D:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = 0xE57D5D27;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009E:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 0x18156DFA;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009F:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = 0xAB8314D3;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A0:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = 0xADFA9E01;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A1:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 0x1B447897;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A2:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 0x3FE1BF2F;
			break;
		
		case 0x000000A3:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = 0x81B242D3;
			break;
		
		case 0x000000A5:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = 0xA7477017;
			break;
		
		case 0x000000A6:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = 0xE187E49B;
			break;
		
		case 0x000000A7:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = 0xF12F21CD;
			break;
		
		case 0x000000A8:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 0x3AF9B555;
			break;
		
		case 0x000000A9:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 0x78891D35;
			break;
		
		case 0x000000AA:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 0x26BB7997;
			break;
		
		case 0x000000AB:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 0x2008EB12;
			break;
		
		case 0x000000AC:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 0x42D7B0B3;
			break;
		
		case 0x000000AD:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = 0xAA5350AA;
			break;
		
		case 0x000000AE:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = 0xC7980B3B;
			break;
		
		case 0x000000AF:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 0x70D7184A;
			break;
		
		case 0x000000B0:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 0x19FA6A8E;
			break;
		
		case 0x000000B1:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 0x3889169A;
			break;
		
		case 0x000000B2:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = 0x94E84F57;
			break;
		
		case 0x000000B3:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = 0xBB245373;
			break;
		
		case 0x000000B4:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 0x2EA3BAA4;
			break;
		
		case 0x000000B5:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = 0xB8CDD26F;
			break;
		
		case 0x000000B6:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = 0x810F62F3;
			break;
		
		case 0x000000B7:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 0x3FE1BF2F;
			break;
		
		case 0x000000B8:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = 0x81B242D3;
			break;
		
		case 0x000000A4:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 0x58AC90B5;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x000000B9:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 0x5B2F1453;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x000000BA:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 0x35E72BCB;
			break;
		
		case 0x000000BB:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = 0xD096E0F4;
			break;
		
		case 0x000000BC:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = 0xA672520A;
			break;
		
		case 0x000000BD:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = 0x89231774;
			break;
		
		case 0x000000BE:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = 0xDAF08A77;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000BF:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 0x3CB64E01;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C0:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 0x19261549;
			break;
		
		case 0x000000C1:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = 0xB0A21F8A;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
	}
	switch (iParam0)
	{
		case 0x000000C4:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = 0xEE8704E3;
			break;
		
		case 0x000000C5:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 0x1E346455;
			break;
		
		case 0x000000C2:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 0x592B3B2A;
			break;
		
		case 0x000000C3:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = 0x90F3AAD6;
			break;
		
		case 0x000000C6:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = 0x87A9D9D8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C7:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = 0xFA66AD40;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C8:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 0x27CC080E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C9:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 0x6FDCB756;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CA:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = 0x82105BAD;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CD:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 0x7A01AE56;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CE:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 0x48084A64;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CF:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 0x76668DA5;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D0:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = 0xD4EAF676;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D1:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 0x0C2D650A;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D2:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = 0xECEB0B54;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D3:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 0x03E33904;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D4:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = 0xC9297F46;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D5:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = 0xFC8465FF;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D6:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = 0x8859D53B;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D7:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 0x18F5F685;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D8:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 0x64147F59;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D9:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 0x1891A5FC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DA:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = 0xC130F73C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DB:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = 0xFCD07A05;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DC:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 0x4F829F6C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DD:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = 0xFD826383;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DE:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 0x6850B91E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DF:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 0x630892AE;
			break;
		
		case 0x000000CB:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = 0x81DEA14E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CC:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = 0xFB9594BE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000E0:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = 0x9C748513;
			break;
	}
	return Var0;
}

int func_117()
{
	if ((func_119() == 0xFFFFFFFF || func_119() == 0x000003E7) && !func_118() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_118()
{
	return Global_7831;
}

int func_119()
{
	return Global_7830;
}

int func_120()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_27(func_42()) * 100 + func_26(func_42()));
	if (iParam1 > iParam0)
	{
		if (iVar0 < iParam0 || iVar0 > iParam1)
		{
			return 0x00000000;
		}
	}
	else if (iVar0 < iParam0 && iVar0 > iParam1)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_122(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_123(func_42(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_123(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_24(iParam0, iParam1))
	{
		iVar0 = func_29(iParam1);
		iVar1 = func_30(iParam0);
		iVar2 = (func_30(iParam0) - func_30(iParam1));
		iVar3 = (func_29(iParam0) - func_29(iParam1));
		iVar4 = (func_28(iParam0) - func_28(iParam1));
		iVar5 = (func_27(iParam0) - func_27(iParam1));
		iVar6 = (func_26(iParam0) - func_26(iParam1));
		iVar7 = (func_25(iParam0) - func_25(iParam1));
	}
	else
	{
		iVar0 = func_29(iParam0);
		iVar1 = func_30(iParam1);
		iVar2 = (func_30(iParam1) - func_30(iParam0));
		iVar3 = (func_29(iParam1) - func_29(iParam0));
		iVar4 = (func_28(iParam1) - func_28(iParam0));
		iVar5 = (func_27(iParam1) - func_27(iParam0));
		iVar6 = (func_26(iParam1) - func_26(iParam0));
		iVar7 = (func_25(iParam1) - func_25(iParam0));
	}
	while (iVar7 < 0x00000000)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 0x00000001);
	}
	while (iVar7 > 0x0000003B)
	{
		iVar7 = (iVar7 - 0x0000003C);
		iVar6++;
	}
	while (iVar6 < 0x00000000)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 0x00000001);
	}
	while (iVar6 > 0x0000003B)
	{
		iVar6 = (iVar6 - 0x0000003C);
		iVar5++;
	}
	while (iVar5 < 0x00000000)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 0x00000001);
	}
	while (iVar5 > 0x00000017)
	{
		iVar5 = (iVar5 - 0x00000018);
		iVar4++;
	}
	while (iVar4 < 0x00000000)
	{
		while (iVar3 < 0x00000000)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 0x00000001);
		}
		iVar4 = (iVar4 + func_33(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_124(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0x00000000)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 0x00000001);
	}
	while (iVar3 > 0x0000000C)
	{
		iVar3 = (iVar3 - 0x0000000C);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_124(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_125(bool bParam0)
{
	if (bParam0)
	{
		if (func_43(0x00000082) && !func_43(0x00000083))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_126(int iParam0)
{
	if (func_127(iParam0))
	{
		return 0x00000000;
	}
	else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_127(int iParam0)
{
	if ((((iParam0 == 0x00000005 || iParam0 == 0x00000006) || iParam0 == 0x00000029) || iParam0 == 0x0000003C) || iParam0 == 0x0000003D)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_128(int iParam0)
{
	if ((iParam0 == 0x0000003A || iParam0 == 0x0000003B) || iParam0 == 0x0000003E)
	{
		if (((func_129(0x00000028) || func_129(0x00000029)) || func_129(0x0000002B)) || func_129(0x0000002F))
		{
			return 0x00000001;
		}
	}
	if (iParam0 == 0x00000018)
	{
		if (func_129(0x00000029))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_129(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (Global_16A39[iParam0 /*2*/])
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_15D98)
	{
		if (Global_15D98[iVar0 /*5*/] != 0xFFFFFFFF)
		{
			if (Global_12C5B.f_6D[Global_15D98[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_130()
{
	return 0x00000001;
}

int func_131(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_132(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_132(int iParam0)
{
	return func_133(iParam0, Global_A1D7);
}

int func_133(int iParam0, int iParam1)
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

void func_134()
{
	int iVar0;
	
	iLocal_54[0x00000000] = 0x000000F3;
	iLocal_54[0x00000001] = 0x000000F4;
	iLocal_54[0x00000002] = 0x000000F5;
	iLocal_54[0x00000003] = 0x000000F6;
	iLocal_54[0x00000004] = 0x000000F7;
	iLocal_54[0x00000005] = 0x000000F8;
	iLocal_54[0x00000006] = 0x000000F9;
	iLocal_54[0x00000007] = 0x000000FA;
	iLocal_54[0x00000008] = 0x000000FB;
	iLocal_54[0x00000009] = 0x000000FC;
	iLocal_54[0x0000000A] = 0x000000FD;
	iLocal_54[0x0000000B] = 0x000000FE;
	iLocal_54[0x0000000C] = 0x000000FF;
	iLocal_54[0x0000000D] = 0x00000100;
	iLocal_54[0x0000000E] = 0x00000101;
	iLocal_54[0x0000000F] = 0x00000102;
	iLocal_54[0x00000010] = 0x00000103;
	iLocal_54[0x00000011] = 0x00000104;
	iLocal_54[0x00000012] = 0x00000105;
	iLocal_54[0x00000013] = 0x00000106;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000014)
	{
		iLocal_53[iVar0] = 0x00000000;
		func_3(iLocal_54[iVar0], 0x00000000, 0x00000000);
		func_135(iLocal_54[iVar0], 0x00000004);
		func_90(iLocal_54[iVar0], 0x00000008);
		func_77(iLocal_54[iVar0]);
		func_98(iLocal_54[iVar0], 0x00000000);
		func_99(iLocal_54[iVar0], 0x00000042);
		func_95(iLocal_54[iVar0]);
		iVar0++;
	}
}

void func_135(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000010);
	Global_79AA[iVar0 /*23*/].f_16 = iParam1;
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_136()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000003F)
	{
		Global_1B085[iVar0 /*10*/].f_5 = 0x00000000;
		Global_1B085[iVar0 /*10*/].f_6 = 0x00000000;
		Global_1B085[iVar0 /*10*/].f_4 = 0x00000000;
		Global_1B085[iVar0 /*10*/].f_7 = 0x00000000;
		Global_1B085[iVar0 /*10*/].f_8 = 0xFFFFFFFF;
		Global_1B085[iVar0 /*10*/].f_9 = 0xFFFFFFFF;
		iVar0++;
	}
}

void func_137()
{
	func_1();
	unk_0x10FAF14A60A0DBE1();
}

