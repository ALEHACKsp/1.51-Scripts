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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	float fLocal_31 = 0f;
	vector3 vLocal_32 = { 0f, 0f, 0f };
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	bool bLocal_35 = 0;
	int iLocal_36[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_37 = 0;
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	vector3 vLocal_42 = { 0f, 0f, 0f };
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49[5] = { 0, 0, 0, 0, 0 };
	var uLocal_50[5] = { 0, 0, 0, 0, 0 };
	var uLocal_51 = 5;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_31 = 1E+07f;
	vLocal_32 = { 2134.06f, 4780.69f, 41.664f };
	iLocal_33 = 0xFFFFFFFF;
	vLocal_42 = { 2136.133f, 4780.563f, 39.9702f };
	vLocal_45 = { 2149.737f, 4798.472f, 40.1071f };
	fLocal_46 = 55.4847f;
	if (unk_0x2EBF608FFE6CA406(0x00000052))
	{
		func_189();
	}
	func_188(0x00000011);
	func_187();
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	while (0x00000001)
	{
		if (func_186() == 0x00000135)
		{
			bLocal_35 = 0x00000001;
		}
		else
		{
			bLocal_35 = 0x00000000;
		}
		if (func_173())
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				fLocal_31 = SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_32);
			}
			func_171(&iVar1);
			func_31(&iVar2);
			if (iLocal_39 > 0x00000003)
			{
				if (fLocal_31 < 600f)
				{
					if (func_28(0x00000000) == 0x00000000 && (unk_0x1C0640BA9A7327B3() - iLocal_59) > 0x000007D0)
					{
						iLocal_59 = unk_0x1C0640BA9A7327B3();
						func_3();
					}
				}
			}
			iVar0 = 0x00000000;
		}
		else
		{
			if (!bLocal_38)
			{
				if (func_2(0x00000069))
				{
					func_1(0x00000069, 0x00000000, 0x00000000);
					Global_1B416.f_4E0A.f_E = 0x00000000;
				}
			}
			else
			{
				Global_1B416.f_4E0A.f_E = 0x00000000;
			}
			if (!bLocal_38)
			{
				if (func_2(0x0000006A))
				{
					func_1(0x0000006A, 0x00000000, 0x00000000);
					Global_1B416.f_4E0A.f_D = 0x00000000;
				}
			}
			else
			{
				Global_1B416.f_4E0A.f_D = 0x00000000;
			}
			iVar0 = 0x000003E8;
		}
		SYSTEM::WAIT(iVar0);
	}
}

void func_1(int iParam0, bool bParam1, bool bParam2)
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

bool func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0x00000000;
	}
	return unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13);
}

void func_3()
{
	func_4(&(Global_18F3B.f_B4A), &Global_18F3B, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
}

void func_4(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0x00000000)
	{
		iParam2 = unk_0x16F2683693E537C9();
	}
	if (unk_0xC844350D5D58C99A(iParam2))
	{
		uParam1->f_5 = func_27(iParam2);
	}
	if (func_19(iParam2, &iVar0, iParam3, iParam5))
	{
		func_5(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x4906F8A34E9F4814(iVar0, joaat("skylift")) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
			{
				func_5(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_5(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xDF1306B443CD3D15(iParam2, 0x00000000))
	{
		func_7(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_6(iParam2))
		{
			uParam1->f_3 = 0x00000001;
		}
		else
		{
			uParam1->f_3 = 0x00000000;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		if (Global_181B8.f_16[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_7(var uParam0, int iParam1, int iParam2)
{
	func_14(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_10(iParam1, 0x00000091, 0x00000000);
	uParam0->f_B = func_9(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_8(iParam1);
		}
	}
	if (iParam2 == 0x00000001)
	{
		*uParam0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
		uParam0->f_6 = unk_0xD9522BA9E27E1349(iParam1);
		uParam0->f_3 = { unk_0x56E9E0FD5ACCD35D(iParam1) };
		if (unk_0x3D1053F9EB43B7AD(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_12A3A == iParam1)
		{
			uParam0->f_9 = 0x00000001;
		}
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		uParam0->f_8 = 0x00000001;
	}
	else
	{
		uParam0->f_8 = 0x00000000;
	}
}

int func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iVar0]))
		{
			if (iParam0 == Global_126B1.f_1E4[iVar0])
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_9(int iParam0)
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

int func_10(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (Global_1774B[iVar0] == iParam0)
			{
				if (iParam1 == 0x00000091 || iParam1 == Global_17755[iVar0])
				{
					if (iParam2 == 0x00000000 || unk_0x134B62B726CEC8E6(iParam0) == func_11(iParam1, iParam2))
					{
						return 0x00000001;
					}
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_11(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_13(iParam0))
	{
		Var0.f_B = 0x0000000C;
		Var0.f_1F = 0x00000031;
		Var0.f_51 = 0x00000002;
		func_12(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

void func_12(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_58 = 0x00000001;
	uParam1->f_54 = 0x000000FF;
	uParam1->f_55 = 0x000000FF;
	uParam1->f_56 = 0x000000FF;
	uParam1->f_61 = 0x00000001;
	uParam1->f_3 = 0x000003E8;
	uParam1->f_1 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = joaat("tailgater");
			if (Global_1B416.f_2378.f_63.f_3A[0x00000080] && !Global_1B416.f_2378.f_63.f_3A[0x00000083])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0x00000000;
					uParam1->f_9 = 0x00000001;
					uParam1->f_B[0x00000000] = 0x00000001;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 0x0000002B;
					uParam1->f_6 = 0x0000002B;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_9 = 0x00000000;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 0x00000002:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 0x00000020;
					uParam1->f_6 = 0x00000000;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_1B416.f_2378.f_63.f_3A[0x00000077])
					{
						uParam1->f_B[0x00000001] = 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000001:
			if (iParam2 == 0x00000001)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 0x00000002)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_1B416.f_2378.f_63.f_3A[0x00000076])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 0x00000035;
					uParam1->f_6 = 0x00000000;
					uParam1->f_7 = 0x0000003B;
					uParam1->f_8 = 0x0000009C;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 0x0000006F;
					uParam1->f_6 = 0x0000006F;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_A = 0x00000001;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0x00000000] = 0x00000001;
					uParam1->f_B[0x00000001] = 0x00000001;
					uParam1->f_B[0x00000002] = 0x00000001;
					uParam1->f_B[0x00000003] = 0x00000001;
					uParam1->f_B[0x00000004] = 0x00000001;
					uParam1->f_B[0x00000005] = 0x00000001;
					uParam1->f_B[0x00000006] = 0x00000001;
					uParam1->f_B[0x00000007] = 0x00000001;
					uParam1->f_B[0x00000008] = 0x00000001;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_13(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_14(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_18(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_17(uParam1->f_42))
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
		func_16(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_15(iVar0 + 1));
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

int func_15(int iParam0)
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

int func_16(int iParam0, var uParam1, var uParam2)
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

int func_17(int iParam0)
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

void func_18(var uParam0)
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

int func_19(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			if (iParam0 == unk_0x16F2683693E537C9())
			{
				*uParam1 = unk_0x728870EB733D12A1();
			}
			else
			{
				*uParam1 = unk_0x6937EA2286828455(iParam0, 0x00000001);
			}
			if (unk_0xC844350D5D58C99A(*uParam1))
			{
				if (unk_0xDF1306B443CD3D15(*uParam1, 0x00000000))
				{
					if (iParam2 == 0x00000000 || unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(*uParam1, 0x00000001), unk_0x68F4C0EC296D3901(iParam0, 0x00000001), 0x00000001) < 100f)
					{
						if (unk_0x4906F8A34E9F4814(*uParam1, joaat("taxi")))
						{
							if (unk_0xA30B8362589C124A(*uParam1, 0xFFFFFFFF, 0x00000000) != iParam0 && unk_0xA30B8362589C124A(*uParam1, 0xFFFFFFFF, 0x00000000) != 0x00000000)
							{
								return 0x00000000;
							}
						}
						if (func_20(*uParam1, func_22(), 0x00000001))
						{
							sVar0 = unk_0xBB0808A181D4745C();
							if (!unk_0x7F8A39872A07D2CE(sVar0, "save_anywhere"))
							{
								return 0x00000000;
							}
							else if (!unk_0x405E212DDE472467(iParam0, 0x00000001))
							{
								return 0x00000000;
							}
						}
						if (iParam3 == 0x00000001)
						{
							if (unk_0x30F813723591D02E(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xB2C7CF65CF9B897C(*uParam1, "IgnoredByQuickSave"))
								{
									return 0x00000000;
								}
							}
						}
						else if (unk_0x4906F8A34E9F4814(*uParam1, joaat("blimp")))
						{
							return 0x00000000;
						}
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

int func_20(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_21(iParam1, iVar0, &sVar1, &iVar2))
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

int func_21(int iParam0, int iParam1, char* sParam2, var uParam3)
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
		if (func_25(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_27(unk_0x16F2683693E537C9());
			if (func_13(iVar0) && (!func_24(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_13(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_24(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_25(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_26(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_28(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_29(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_29(int iParam0)
{
	return func_30(iParam0, Global_A1D7);
}

int func_30(int iParam0, int iParam1)
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

void func_31(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<91> Var4;
	int iVar5;
	
	bVar0 = 0x00000000;
	if (iLocal_43 != 0x00000009)
	{
		if (!Global_1B416.f_4E0A.f_D)
		{
			if (Global_1B416.f_4E0A.f_1 == 0x00000000 && Global_1B416.f_4E0A.f_2 == 0x00000000)
			{
				if (!func_170(Global_1B416.f_4E0A, 0x00000020))
				{
					func_167("MG_TRAF_AVAIL", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
					func_165(&(Global_1B416.f_4E0A), 0x00000020);
				}
			}
			func_1(0x0000006A, 0x00000001, 0x00000000);
			Global_1B416.f_4E0A.f_D = 0x00000001;
			bVar0 = 0x00000001;
		}
		else
		{
			bVar0 = 0x00000001;
		}
	}
	else
	{
		func_1(0x0000006A, 0x00000000, 0x00000000);
		Global_1B416.f_4E0A.f_D = 0x00000000;
	}
	if (iLocal_43 != 0x00000001 && iLocal_43 != 0x00000008)
	{
		if (func_164() && !*iParam0)
		{
			func_163(0x00000000);
			iLocal_43 = 0x00000001;
		}
	}
	switch (iLocal_43)
	{
		case 0x00000000:
			iLocal_43 = 0x00000001;
			break;
		
		case 0x00000001:
			if (!func_164())
			{
				if (fLocal_31 < 50625f)
				{
					iLocal_43 = 0x00000002;
				}
				else if (bLocal_35)
				{
					iLocal_43 = 0x00000002;
				}
			}
			break;
		
		case 0x00000002:
			unk_0x523BCC9DC80CD82F(joaat("dune"));
			iLocal_43 = 0x00000003;
			break;
		
		case 0x00000003:
			if (unk_0xB87F6CF6E5628C67(joaat("dune")))
			{
				unk_0x28F5E4DA506AC0CA(vLocal_45, 4f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				if (unk_0xC844350D5D58C99A(iLocal_44))
				{
					unk_0xA954465BA6FDEFE2(&iLocal_44);
				}
				iLocal_44 = unk_0x122AAB0B1D6F55AD(func_162(), vLocal_45, fLocal_46, 0x00000001, 0x00000001, 0x00000000);
				unk_0x3E5CE368CD085FFA(iLocal_44, 0x00000000);
				unk_0x71199B01895C6202(func_162());
				if (unk_0xC844350D5D58C99A(iLocal_44))
				{
					if (unk_0x1923A0BC6E2B14D7(iLocal_44, 0x00000001))
					{
						unk_0xD3421E391490133B(iLocal_44, 0x00000001, 0x00000001);
					}
					if (unk_0x1923A0BC6E2B14D7(iLocal_44, 0x00000002))
					{
						unk_0xD3421E391490133B(iLocal_44, 0x00000002, 0x00000000);
					}
					if (unk_0x1923A0BC6E2B14D7(iLocal_44, 0x00000003))
					{
						unk_0xD3421E391490133B(iLocal_44, 0x00000003, 0x00000000);
					}
					unk_0xC002508A277213DE(iLocal_44, 0x00000000, 0x00000000);
				}
				iLocal_43 = 0x00000004;
			}
			break;
		
		case 0x00000005:
			if (fLocal_31 >= 50625f && !*iParam0)
			{
				func_163(0x00000000);
				iLocal_43 = 0x00000001;
				return;
			}
			break;
		
		case 0x00000004:
			func_161();
			if (!bLocal_35)
			{
				if (fLocal_31 >= 50625f && !*iParam0)
				{
					func_163(0x00000000);
					iLocal_43 = 0x00000001;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!bVar0)
				{
				}
				if (!*iParam0)
				{
				}
				if (!iLocal_47)
				{
					if (unk_0x405E212DDE472467(iLocal_28, 0x00000000))
					{
						iVar1 = unk_0x3C66DF04E6EA3587(iLocal_28);
						if (iVar1 == iLocal_44)
						{
							iLocal_47 = 0x00000001;
							unk_0x046C362CF15F1935(&iLocal_44);
							iLocal_43 = 0x00000009;
						}
					}
				}
				return;
			}
			if (*iParam0)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x437347B10A200C4B(iLocal_44, 0x00000000))
				{
					unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iLocal_44, 0xFFFFFFFF);
				}
			}
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x437347B10A200C4B(iLocal_44, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_44, 0x00000001))
				{
					func_160();
				}
			}
			if (!unk_0x437347B10A200C4B(iLocal_44, 0x00000000) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iVar2 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
					if (iVar2 == iLocal_44)
					{
						if (SYSTEM::VDIST2(vLocal_45, unk_0x68F4C0EC296D3901(iLocal_28, 0x00000001)) < 100f)
						{
							unk_0x92DCE5C81176D2B4("Traffick_Ground");
							if (unk_0xC844350D5D58C99A(iLocal_29) && !unk_0x437347B10A200C4B(iLocal_29, 0x00000000))
							{
								if (unk_0x134B62B726CEC8E6(iLocal_29) != joaat("dune") && unk_0x134B62B726CEC8E6(iLocal_29) != joaat("cuban800"))
								{
									func_133(iLocal_29, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 0x00000018, 0x00000000);
								}
								else if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
								{
									unk_0x7EA00EB725DAA91D(iLocal_29);
								}
							}
							iLocal_43 = 0x00000006;
						}
					}
				}
			}
			break;
		
		case 0x00000006:
			if (unk_0x1FBF08B001C4788A("Traffick_Ground"))
			{
				iVar3 = 0x00000000;
				if (*iParam0)
				{
					iVar3 = 0x00000001;
				}
				else
				{
					iVar3 = func_131(&iLocal_33, 0x00000006, 0x00000009, 0x00000000, 0x00000000);
					iLocal_37 = 0x00000001;
				}
				if (iVar3 == 0x00000001)
				{
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
					}
					if (!*iParam0)
					{
						func_82("Traffick_Ground", 0x00000000);
					}
					Var4 = 0xFFFFFFFF;
					Var4.f_8 = 0x00000004;
					Var4.f_D = 0x00000002;
					Var4.f_10 = 0x00000004;
					Var4.f_1D = 0x00000004;
					Var4.f_3D = 0x00000009;
					Var4.f_47 = 0x00000004;
					Var4.f_4C = 0x00000008;
					Var4.f_55 = 0x00000004;
					Var4.f_5A = 0x00000006;
					iLocal_30 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("Traffick_Ground", &Var4, 0x00000061, 0x000088B8);
					func_81(0x00000010);
					unk_0x5E8C29AE121DF1C7("Traffick_Ground");
					unk_0x73270B3C9CC833FD(iLocal_44, 0x00000001, 0x00000000);
					unk_0x046C362CF15F1935(&iLocal_44);
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (Global_A664 == 0x00000001)
						{
							func_72(unk_0x16F2683693E537C9());
						}
					}
					iLocal_47 = 0x00000000;
					iLocal_43 = 0x00000007;
				}
				else if (iVar3 == 0x00000000)
				{
					iLocal_37 = 0x00000000;
					func_163(0x00000000);
					iLocal_43 = 0x00000009;
				}
			}
			break;
		
		case 0x00000007:
			if (!unk_0x1727A44C562FBED2(iLocal_30))
			{
				iLocal_43 = 0x00000009;
				if (func_170(Global_1AED1, 0x00000002))
				{
					iLocal_43 = 0x00000008;
				}
				else
				{
					func_71(&iLocal_33);
					func_54();
					iLocal_34 = 0x00000001;
					iVar5 = func_53();
					func_45(&iVar5, 0x00000000, 0x00000000, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
					Global_1B416.f_4E0A.f_C = iVar5;
					func_1(0x0000006A, 0x00000000, 0x00000000);
					Global_1B416.f_4E0A.f_D = 0x00000000;
				}
				*iParam0 = 0x00000000;
				func_43(&Global_1AED1, 0x00000002);
			}
			break;
		
		case 0x00000008:
			if (Global_181B8 == 0x0000000A)
			{
				if (Global_181DA)
				{
					*iParam0 = 0x00000001;
					unk_0x92DCE5C81176D2B4("Traffick_Ground");
					iLocal_43 = 0x00000002;
				}
				else
				{
					*iParam0 = 0x00000000;
					iLocal_43 = 0x00000002;
				}
			}
			else if (Global_181B8 == 0x0000000D)
			{
				func_71(&iLocal_33);
				func_54();
				*iParam0 = 0x00000000;
				iLocal_43 = 0x00000002;
			}
			break;
		
		case 0x00000009:
			if (fLocal_31 >= 50625f && func_32(Global_1B416.f_4E0A.f_C))
			{
				func_163(0x00000000);
				iLocal_43 = 0x00000001;
			}
			break;
		
		default:
			break;
	}
}

int func_32(int iParam0)
{
	return func_33(func_53(), iParam0);
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_41(iParam1) || !func_41(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_39(iParam0);
	iVar1 = func_39(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_38(iParam0);
	iVar1 = func_38(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_37(iParam0);
	iVar1 = func_37(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_36(iParam0);
	iVar1 = func_36(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
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
	return 0x00000000;
}

int func_34(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_35(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_36(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_37(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_38(int iParam0)
{
	return iParam0 & 0x0000000F;
}

var func_39(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_40(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_40(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_41(int iParam0)
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
	iVar0 = func_34(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_35(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_36(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_39(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_38(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_37(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_42(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_42(int iParam0, int iParam1)
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

void func_43(var uParam0, int iParam1)
{
	func_44(uParam0, iParam1);
}

void func_44(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_45(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_39(*iParam0);
	iVar1 = func_38(*iParam0);
	iVar2 = func_37(*iParam0);
	iVar3 = func_36(*iParam0);
	iVar4 = func_35(*iParam0);
	iVar5 = func_34(*iParam0);
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
	iVar6 = func_42(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_42(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_46(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_46(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_52(uParam0, iParam1);
	func_51(uParam0, iParam2);
	func_50(uParam0, iParam3);
	func_49(uParam0, iParam5);
	func_48(uParam0, iParam4);
	func_47(uParam0, iParam6);
}

void func_47(var uParam0, int iParam1)
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

void func_48(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_38(*uParam0);
	iVar1 = func_39(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_42(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_49(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_50(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_51(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_53()
{
	var uVar0;
	
	func_52(&uVar0, unk_0x4460E481B9E33ADA());
	func_51(&uVar0, unk_0x8D199E381D262EEF());
	func_50(&uVar0, unk_0xD8A54335F18763BA());
	func_48(&uVar0, unk_0x972A296334C9D57B());
	func_49(&uVar0, unk_0x118229AD063C3C1D());
	func_47(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_54()
{
	func_70();
	func_63();
	func_59();
	func_58();
	func_57();
	func_56();
	Global_181DD = 0x00000000;
	Global_16AF7 = 0xFFFFFFFF;
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000011);
	Global_181DB = 0x00000000;
	unk_0x65C5EBCA17A891FC(0x00000000);
	unk_0x4DB69487E1A9EE2A(0x00000000);
	unk_0x67E5ECB8FD7F5018(0x00000001);
	unk_0xD99B71B9E48EB0E6(0x00000001);
	unk_0x2C84016B4A95F6BA(0x00000001);
	func_55(0x00000000);
}

void func_55(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&(Global_181B8.f_14), 0x0000000D);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x0000000D);
	}
}

void func_56()
{
	Global_12C3E = { 0f, 0f, 0f };
	Global_12C41 = 0f;
	Global_181B8.f_15 = 0x00000091;
}

void func_57()
{
	StringCopy(&Global_12C36, "", 16);
	StringCopy(&Global_12C3A, "", 16);
}

void func_58()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		Global_181B8.f_16[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_59()
{
	Global_181B8 = 0x0000000D;
	Global_181B8.f_1 = 0xFFFFFFFF;
	Global_181B8.f_2 = 0x00000000;
	Global_181B8.f_1E = 0f;
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000019);
	Global_181DA = 0x00000000;
	func_62(0x00000000);
	func_61();
	func_60();
	Global_181B8.f_12 = 0xFFFFFFFF;
	Global_181B8.f_13 = 0xFFFFFFFF;
}

void func_60()
{
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000016);
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000008);
}

void func_61()
{
	if (Global_181B8.f_10 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(&(Global_181B8.f_10));
		Global_181B8.f_10 = 0x00000000;
	}
	if (Global_181B8.f_11 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(&(Global_181B8.f_11));
		Global_181B8.f_11 = 0x00000000;
	}
}

void func_62(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		Global_A3FC = 0x00000001;
	}
	else
	{
		Global_A3FC = 0x00000000;
	}
}

void func_63()
{
	func_64(&Global_19AE3);
}

void func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 0x00000091;
	func_69(&(uParam0->f_1));
	uParam0->f_6 = 0xFFFFFFFF;
	uParam0->f_7 = 0xFFFFFFFF;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000091;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		uParam0->f_9[iVar1] = 0xFFFFFFFF;
		uParam0->f_D[iVar1] = 0x00000000;
		uParam0->f_11[iVar1] = 0x00000000;
		uParam0->f_15[iVar1] = 0x00000000;
		func_68(&(uParam0->f_19[0x00000000 /*295*/][iVar1 /*98*/]));
		func_68(&(uParam0->f_19[0x00000001 /*295*/][iVar1 /*98*/]));
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000C)
		{
			uParam0->f_268[iVar1 /*65*/][iVar0] = 0xFFFFFFFF;
			uParam0->f_268[iVar1 /*65*/].f_D[iVar0] = 0xFFFFFFFF;
			uParam0->f_268[iVar1 /*65*/].f_1A[iVar0] = 0xFFFFFFFF;
			iVar0++;
		}
		uParam0->f_268[iVar1 /*65*/].f_3B = 0x00000000;
		uParam0->f_268[iVar1 /*65*/].f_3C = 0xFFFFFF9D;
		uParam0->f_268[iVar1 /*65*/].f_3D = 0x00000002;
		uParam0->f_268[iVar1 /*65*/].f_3E = 0x00000000;
		uParam0->f_268[iVar1 /*65*/].f_3F = 0xFFFFFF9D;
		uParam0->f_268[iVar1 /*65*/].f_40 = 0x00000001;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000009)
		{
			uParam0->f_268[iVar1 /*65*/].f_27[iVar0] = 0xFFFFFFFF;
			uParam0->f_268[iVar1 /*65*/].f_31[iVar0] = 0xFFFFFFFF;
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000002C)
		{
			uParam0->f_32C[iVar1 /*477*/][iVar0 /*5*/].f_1 = 0x00000000;
			uParam0->f_32C[iVar1 /*477*/][iVar0 /*5*/].f_2 = 0x00000000;
			uParam0->f_32C[iVar1 /*477*/][iVar0 /*5*/].f_3 = 0x00000000;
			uParam0->f_32C[iVar1 /*477*/][iVar0 /*5*/].f_4 = 0x00000000;
			uParam0->f_32C[iVar1 /*477*/][iVar0 /*5*/] = 0x00000000;
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000033)
		{
			uParam0->f_32C[iVar1 /*477*/].f_DD[iVar0 /*5*/].f_1 = 0x00000000;
			uParam0->f_32C[iVar1 /*477*/].f_DD[iVar0 /*5*/].f_2 = 0x00000000;
			uParam0->f_32C[iVar1 /*477*/].f_DD[iVar0 /*5*/].f_3 = 0x00000000;
			uParam0->f_32C[iVar1 /*477*/].f_DD[iVar0 /*5*/].f_4 = 0x00000000;
			uParam0->f_32C[iVar1 /*477*/].f_DD[iVar0 /*5*/] = 0x00000000;
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000004)
		{
			uParam0->f_8C4[iVar1 /*32*/][iVar0] = 0x00000000;
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000A)
		{
			uParam0->f_8C4[iVar1 /*32*/].f_5[iVar0] = 0x00000000;
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000F)
		{
			uParam0->f_8C4[iVar1 /*32*/].f_10[iVar0] = 0x00000000;
			iVar0++;
		}
		uParam0->f_925[iVar1] = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000003)
		{
			uParam0->f_B16[iVar1 /*15*/][iVar0] = 0x00000000;
			uParam0->f_B16[iVar1 /*15*/].f_5[iVar0] = 0x00000000;
			uParam0->f_B16[iVar1 /*15*/].f_A[iVar0] = 0x00000000;
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			uParam0->f_929[iVar1 /*164*/][iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_4[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_8[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_C[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_10[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_14[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_18[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_1C[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_20[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_24[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_28[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_2C[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_30[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_34[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_38[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_3C[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_40[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_44[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_48[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_4C[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_50[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_54[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_58[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_5C[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_60[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_64[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_68[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_6C[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_70[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_74[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_78[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_7C[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_80[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_84[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_88[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_8C[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_90[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_94[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_98[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_9C[iVar0] = 0x00000000;
			uParam0->f_929[iVar1 /*164*/].f_A0[iVar0] = 0x00000000;
			iVar0++;
		}
		iVar1++;
	}
	func_67(&(uParam0->f_B44));
	func_66(&(uParam0->f_B4A));
	func_65(&(uParam0->f_BA4));
}

void func_65(var uParam0)
{
	*uParam0 = 0xFFFFFFFF;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
}

void func_66(var uParam0)
{
	func_18(&(uParam0->f_C));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0x00000000;
	uParam0->f_9 = 0x00000000;
}

void func_67(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0xFFFFFFFF;
}

void func_68(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_9 = 0x00000000;
	uParam0->f_A = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000B)
	{
		uParam0->f_B[iVar0] = 0x00000000;
		iVar0++;
	}
	uParam0->f_18 = 0x00000000;
	uParam0->f_19 = 0x00000000;
	StringCopy(&(uParam0->f_1B), "", 16);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000030)
	{
		uParam0->f_1F[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000001)
	{
		uParam0->f_51[iVar0] = 0x00000000;
		iVar0++;
	}
	uParam0->f_54 = 0x00000000;
	uParam0->f_55 = 0x00000000;
	uParam0->f_56 = 0x00000000;
	uParam0->f_57 = 0x00000000;
	uParam0->f_58 = 0x00000000;
	uParam0->f_59 = 0x00000000;
	uParam0->f_5A = 0x00000000;
	uParam0->f_5B = 0x00000000;
	uParam0->f_5D = 0x00000000;
	uParam0->f_5E = 0x00000000;
	uParam0->f_5F = 0x00000000;
	uParam0->f_5C = 0x00000000;
}

void func_69(var uParam0)
{
	*uParam0 = 0xFFFFFFF1;
}

void func_70()
{
	StringCopy(&Global_18F33, "", 32);
	func_64(&Global_18F3B);
}

void func_71(int iParam0)
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

void func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0x00000000)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	iVar0 = func_80(iParam0);
	if (!iVar0 == 0xFFFFFFFF)
	{
		iVar1 = Global_A58F[iVar0 /*5*/];
		func_75(0x00000001, iVar1, 0x00000001);
		return;
	}
	iVar2 = func_74(iParam0);
	if (iVar2 == 0xFFFFFFFF)
	{
		return;
	}
	func_73(iVar2);
}

void func_73(int iParam0)
{
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000005)
	{
		return;
	}
	if (!Global_A575[iParam0 /*5*/].f_1 == 0x00000000)
	{
		if (Global_A575[iParam0 /*5*/].f_1 == unk_0x16F2683693E537C9())
		{
			Global_A662 = 0x00000000;
		}
	}
	Global_A575[iParam0 /*5*/] = 0x0000000D;
	Global_A575[iParam0 /*5*/].f_1 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_2 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_3 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_4 = 0x00000000;
	Global_A573 = (Global_A573 - 0x00000001);
	if (Global_A573 < 0x00000000)
	{
		Global_A573 = 0x00000000;
	}
}

int func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_A575[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_75(int iParam0, int iParam1, int iParam2)
{
	func_76(iParam0, iParam1, iParam2, 0x00000000, 0x00000000, 0x00000001);
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam2 == 0x00000006)
	{
		return;
	}
	if (func_78(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_77();
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	Global_A5E0[iVar0 /*6*/] = iParam0;
	Global_A5E0[iVar0 /*6*/].f_1 = iParam1;
	Global_A5E0[iVar0 /*6*/].f_2 = iParam2;
	Global_A5E0[iVar0 /*6*/].f_3 = iParam3;
	Global_A5E0[iVar0 /*6*/].f_4 = iParam4;
	Global_A5E0[iVar0 /*6*/].f_5 = iParam5;
}

int func_77()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_A5E0[iVar0 /*6*/].f_2 == 0x00000006)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_78(int iParam0, int iParam1, int iParam2)
{
	if (func_79(iParam0, iParam1, iParam2) == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_79(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (iParam2 == Global_A5E0[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_A5E0[iVar0 /*6*/])
			{
				if (iParam1 == Global_A5E0[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_80(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (!Global_A58F[iVar0 /*5*/] == 0xFFFFFFFF)
		{
			if (iParam0 == Global_A58F[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_81(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		uVar0 = iParam0;
		unk_0x3CFFF3C8EACD8DC1(0x00000008, &uVar0, 0x00000001, 0x00000001);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x8DECFDD6715449E4(0x00000008, &cVar1);
	}
}

void func_82(char[4] cParam0, int iParam1)
{
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000011);
	func_83(cParam0, iParam1, 0x00000000);
}

void func_83(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_181B8 != 0x0000000A && Global_181B8 != 0x00000009)
	{
		StringCopy(&Global_18F33, cParam0, 32);
		func_85(&Global_18F3B, cParam0, 0x00000000, "Start", iParam1, iParam2);
		func_84();
		Global_16AFA = 0x00000000;
	}
}

void func_84()
{
	int iVar0;
	int iVar1;
	
	Global_19AE3 = Global_18F3B;
	Global_19AE3.f_1 = Global_18F3B.f_1;
	Global_19AE3.f_6 = Global_18F3B.f_6;
	Global_19AE3.f_7 = Global_18F3B.f_7;
	Global_19AE3.f_8 = Global_18F3B.f_8;
	Global_19AE3.f_2 = Global_18F3B.f_2;
	Global_19AE3.f_3 = Global_18F3B.f_3;
	Global_19AE3.f_4 = Global_18F3B.f_4;
	Global_19AE3.f_5 = Global_18F3B.f_5;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		Global_19AE3.f_9[iVar1] = Global_18F3B.f_9[iVar1];
		Global_19AE3.f_D[iVar1] = Global_18F3B.f_D[iVar1];
		Global_19AE3.f_11[iVar1] = Global_18F3B.f_11[iVar1];
		Global_19AE3.f_15[iVar1] = Global_18F3B.f_15[iVar1];
		Global_19AE3.f_19[0x00000000 /*295*/][iVar1 /*98*/] = { Global_18F3B.f_19[0x00000000 /*295*/][iVar1 /*98*/] };
		Global_19AE3.f_19[0x00000001 /*295*/][iVar1 /*98*/] = { Global_18F3B.f_19[0x00000001 /*295*/][iVar1 /*98*/] };
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000C)
		{
			Global_19AE3.f_268[iVar1 /*65*/][iVar0] = Global_18F3B.f_268[iVar1 /*65*/][iVar0];
			Global_19AE3.f_268[iVar1 /*65*/].f_D[iVar0] = Global_18F3B.f_268[iVar1 /*65*/].f_D[iVar0];
			Global_19AE3.f_268[iVar1 /*65*/].f_1A[iVar0] = Global_18F3B.f_268[iVar1 /*65*/].f_1A[iVar0];
			iVar0++;
		}
		Global_19AE3.f_268[iVar1 /*65*/].f_3B = Global_18F3B.f_268[iVar1 /*65*/].f_3B;
		Global_19AE3.f_268[iVar1 /*65*/].f_3C = Global_18F3B.f_268[iVar1 /*65*/].f_3C;
		Global_19AE3.f_268[iVar1 /*65*/].f_3D = Global_18F3B.f_268[iVar1 /*65*/].f_3D;
		Global_19AE3.f_268[iVar1 /*65*/].f_3E = Global_18F3B.f_268[iVar1 /*65*/].f_3E;
		Global_19AE3.f_268[iVar1 /*65*/].f_3F = Global_18F3B.f_268[iVar1 /*65*/].f_3F;
		Global_19AE3.f_268[iVar1 /*65*/].f_40 = Global_18F3B.f_268[iVar1 /*65*/].f_40;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000009)
		{
			Global_19AE3.f_268[iVar1 /*65*/].f_27[iVar0] = Global_18F3B.f_268[iVar1 /*65*/].f_27[iVar0];
			Global_19AE3.f_268[iVar1 /*65*/].f_31[iVar0] = Global_18F3B.f_268[iVar1 /*65*/].f_31[iVar0];
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000002C)
		{
			Global_19AE3.f_32C[iVar1 /*477*/][iVar0 /*5*/] = { Global_18F3B.f_32C[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000033)
		{
			Global_19AE3.f_32C[iVar1 /*477*/].f_DD[iVar0 /*5*/] = { Global_18F3B.f_32C[iVar1 /*477*/].f_DD[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000004)
		{
			Global_19AE3.f_8C4[iVar1 /*32*/][iVar0] = Global_18F3B.f_8C4[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000A)
		{
			Global_19AE3.f_8C4[iVar1 /*32*/].f_5[iVar0] = Global_18F3B.f_8C4[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000F)
		{
			Global_19AE3.f_8C4[iVar1 /*32*/].f_10[iVar0] = Global_18F3B.f_8C4[iVar1 /*32*/].f_10[iVar0];
			iVar0++;
		}
		Global_19AE3.f_925[iVar1] = Global_18F3B.f_925[iVar1];
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000003)
		{
			Global_19AE3.f_B16[iVar1 /*15*/][iVar0] = Global_18F3B.f_B16[iVar1 /*15*/][iVar0];
			Global_19AE3.f_B16[iVar1 /*15*/].f_5[iVar0] = Global_18F3B.f_B16[iVar1 /*15*/].f_5[iVar0];
			Global_19AE3.f_B16[iVar1 /*15*/].f_A[iVar0] = Global_18F3B.f_B16[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			Global_19AE3.f_929[iVar1 /*164*/][iVar0] = Global_18F3B.f_929[iVar1 /*164*/][iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_4[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_4[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_8[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_8[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_10[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_10[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_14[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_14[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_18[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_18[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_1C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_1C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_20[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_20[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_24[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_24[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_28[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_28[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_2C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_2C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_30[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_30[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_34[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_34[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_38[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_38[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_3C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_3C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_40[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_40[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_44[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_44[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_48[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_48[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_4C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_4C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_50[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_50[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_54[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_54[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_58[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_58[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_5C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_5C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_60[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_60[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_64[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_64[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_68[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_68[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_6C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_6C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_70[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_70[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_74[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_74[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_78[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_78[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_7C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_7C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_80[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_80[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_84[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_84[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_88[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_88[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_8C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_8C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_90[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_90[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_94[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_94[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_98[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_98[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_9C[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_9C[iVar0];
			Global_19AE3.f_929[iVar1 /*164*/].f_A0[iVar0] = Global_18F3B.f_929[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_19AE3.f_B44 = { Global_18F3B.f_B44 };
	Global_19AE3.f_B44.f_3 = Global_18F3B.f_B44.f_3;
	Global_19AE3.f_B4A = { Global_18F3B.f_B4A };
	Global_19AE3.f_B4A.f_3 = { Global_18F3B.f_B4A.f_3 };
	Global_19AE3.f_B4A.f_6 = Global_18F3B.f_B4A.f_6;
	Global_19AE3.f_B4A.f_8 = Global_19AE3.f_B4A.f_8;
	Global_19AE3.f_B4A.f_7 = Global_18F3B.f_B4A.f_7;
	Global_19AE3.f_B4A.f_9 = Global_18F3B.f_B4A.f_9;
	Global_19AE3.f_B4A.f_B = Global_18F3B.f_B4A.f_B;
	Global_19AE3.f_B4A.f_A = Global_18F3B.f_B4A.f_A;
	Global_19AE3.f_B4A.f_C = Global_18F3B.f_B4A.f_C;
	Global_19AE3.f_B4A.f_C.f_1 = { Global_18F3B.f_B4A.f_C.f_1 };
	Global_19AE3.f_B4A.f_C.f_5 = Global_18F3B.f_B4A.f_C.f_5;
	Global_19AE3.f_B4A.f_C.f_6 = Global_18F3B.f_B4A.f_C.f_6;
	Global_19AE3.f_B4A.f_C.f_7 = Global_18F3B.f_B4A.f_C.f_7;
	Global_19AE3.f_B4A.f_C.f_8 = Global_18F3B.f_B4A.f_C.f_8;
	Global_19AE3.f_B4A.f_C.f_9 = { Global_18F3B.f_B4A.f_C.f_9 };
	Global_19AE3.f_B4A.f_C.f_3B = { Global_18F3B.f_B4A.f_C.f_3B };
	Global_19AE3.f_B4A.f_C.f_3E = Global_18F3B.f_B4A.f_C.f_3E;
	Global_19AE3.f_B4A.f_C.f_3F = Global_18F3B.f_B4A.f_C.f_3F;
	Global_19AE3.f_B4A.f_C.f_40 = Global_18F3B.f_B4A.f_C.f_40;
	Global_19AE3.f_B4A.f_C.f_41 = Global_18F3B.f_B4A.f_C.f_41;
	Global_19AE3.f_B4A.f_C.f_4D = Global_18F3B.f_B4A.f_C.f_4D;
	Global_19AE3.f_B4A.f_C.f_42 = Global_18F3B.f_B4A.f_C.f_42;
	Global_19AE3.f_B4A.f_C.f_43 = Global_18F3B.f_B4A.f_C.f_43;
	Global_19AE3.f_B4A.f_C.f_44 = Global_18F3B.f_B4A.f_C.f_44;
	Global_19AE3.f_B4A.f_C.f_45 = Global_18F3B.f_B4A.f_C.f_45;
	Global_19AE3.f_B4A.f_C.f_47 = Global_18F3B.f_B4A.f_C.f_47;
	Global_19AE3.f_B4A.f_C.f_48 = Global_18F3B.f_B4A.f_C.f_48;
	Global_19AE3.f_B4A.f_C.f_49 = Global_18F3B.f_B4A.f_C.f_49;
	Global_19AE3.f_B4A.f_C.f_4A = Global_18F3B.f_B4A.f_C.f_4A;
	Global_19AE3.f_B4A.f_C.f_4B = Global_18F3B.f_B4A.f_C.f_4B;
	Global_19AE3.f_B4A.f_C.f_4C = Global_18F3B.f_B4A.f_C.f_4C;
	Global_19AE3.f_BA4 = Global_18F3B.f_BA4;
	Global_19AE3.f_BA4.f_1 = Global_18F3B.f_BA4.f_1;
	Global_19AE3.f_BA4.f_2 = Global_18F3B.f_BA4.f_2;
	Global_19AE3.f_BA4.f_3 = Global_18F3B.f_BA4.f_3;
}

void func_85(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_22();
	uParam0->f_1 = func_53();
	unk_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_103(&(uParam0->f_B44), 0x00000000);
		func_102(unk_0x16F2683693E537C9());
		func_95(unk_0x16F2683693E537C9(), 0x00000000);
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &(uParam0->f_2), 0x00000001);
		if (uParam0->f_2 == 0x00000000 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		uParam0->f_11[iVar1] = Global_1B416.f_936.f_21B.f_126[iVar1];
		if (iVar1 == func_94())
		{
			func_87(unk_0x16F2683693E537C9(), &(uParam0->f_268[iVar1 /*65*/]), 0x00000001, 0xFFFFFFFF);
		}
		else
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000C)
			{
				uParam0->f_268[iVar1 /*65*/][iVar0] = Global_180A5[iVar1 /*65*/][iVar0];
				uParam0->f_268[iVar1 /*65*/].f_D[iVar0] = Global_180A5[iVar1 /*65*/].f_D[iVar0];
				iVar0++;
			}
			uParam0->f_268[iVar1 /*65*/].f_3B = Global_180A5[iVar1 /*65*/].f_3B;
			uParam0->f_268[iVar1 /*65*/].f_3C = Global_180A5[iVar1 /*65*/].f_3C;
			uParam0->f_268[iVar1 /*65*/].f_3D = Global_180A5[iVar1 /*65*/].f_3D;
			uParam0->f_268[iVar1 /*65*/].f_3E = Global_180A5[iVar1 /*65*/].f_3E;
			uParam0->f_268[iVar1 /*65*/].f_3F = Global_180A5[iVar1 /*65*/].f_3F;
			uParam0->f_268[iVar1 /*65*/].f_40 = Global_180A5[iVar1 /*65*/].f_40;
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000009)
			{
				uParam0->f_268[iVar1 /*65*/].f_27[iVar0] = Global_180A5[iVar1 /*65*/].f_27[iVar0];
				uParam0->f_268[iVar1 /*65*/].f_31[iVar0] = Global_180A5[iVar1 /*65*/].f_31[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000002C)
		{
			uParam0->f_32C[iVar1 /*477*/][iVar0 /*5*/] = { Global_1B416.f_936.f_21B.f_12A[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000033)
		{
			uParam0->f_32C[iVar1 /*477*/].f_DD[iVar0 /*5*/] = { Global_1B416.f_936.f_21B.f_12A[iVar1 /*477*/].f_DD[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0x00000000:
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
			
			case 0x00000001:
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
			
			case 0x00000002:
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/][0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_5[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000000]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000001]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000002]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000003]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000004]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000005]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000006]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000007]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000008]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x00000009]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000A]), 0xFFFFFFFF);
				unk_0x6FB46C25CCB7E6D5(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_8C4[iVar1 /*32*/].f_10[0x0000000B]), 0xFFFFFFFF);
				break;
		}
		uParam0->f_9[iVar1] = Global_1B416.f_504F.f_E9[iVar1 /*69*/].f_1;
		uParam0->f_D[iVar1] = Global_E53E[iVar1];
		uParam0->f_19[0x00000000 /*295*/][iVar1 /*98*/] = { Global_1B416.f_936.f_21B.f_967[0x00000000 /*295*/][iVar1 /*98*/] };
		uParam0->f_19[0x00000001 /*295*/][iVar1 /*98*/] = { Global_1B416.f_936.f_21B.f_967[0x00000001 /*295*/][iVar1 /*98*/] };
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000003)
		{
			uParam0->f_B16[iVar1 /*15*/][iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/][iVar0];
			uParam0->f_B16[iVar1 /*15*/].f_5[iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_B16[iVar1 /*15*/].f_A[iVar0] = Global_1B416.f_936.f_1ED[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			uParam0->f_929[iVar1 /*164*/][iVar0] = Global_1B416.f_936[iVar1 /*164*/][iVar0];
			uParam0->f_929[iVar1 /*164*/].f_4[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_8[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_10[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_10[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_14[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_14[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_18[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_18[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_1C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_1C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_20[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_24[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_28[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_2C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_2C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_30[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_30[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_34[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_34[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_38[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_38[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_3C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_3C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_40[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_44[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_48[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_4C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_4C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_50[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_50[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_54[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_54[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_58[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_58[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_5C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_5C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_60[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_64[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_68[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_6C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_6C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_70[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_70[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_74[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_74[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_78[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_78[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_7C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_7C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_80[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_84[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_88[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_8C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_8C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_90[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_90[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_94[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_94[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_98[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_98[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_9C[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_9C[iVar0];
			uParam0->f_929[iVar1 /*164*/].f_A0[iVar0] = Global_1B416.f_936[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x6FB46C25CCB7E6D5(joaat("sp0_special_ability"), &(uParam0->f_925[0x00000000]), 0xFFFFFFFF);
	unk_0x6FB46C25CCB7E6D5(joaat("sp1_special_ability"), &(uParam0->f_925[0x00000001]), 0xFFFFFFFF);
	unk_0x6FB46C25CCB7E6D5(joaat("sp2_special_ability"), &(uParam0->f_925[0x00000002]), 0xFFFFFFFF);
	uParam0->f_5 = 0x00000091;
	if (iParam4 == 0x00000001)
	{
		func_4(&(uParam0->f_B4A), uParam0, iParam5, 0x00000001, 0x00000001, 0x00000000);
	}
	func_86(&(uParam0->f_BA4));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_86(var uParam0)
{
	*uParam0 = Global_17181;
	uParam0->f_1 = Global_17182;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	return 0x00000001;
}

void func_87(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_27(iParam0);
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000C)
		{
			func_93(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000009)
		{
			func_92(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		if (func_13(iVar0))
		{
			uParam1->f_3B = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3B;
			uParam1->f_3C = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C;
			uParam1->f_3D = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3D;
			uParam1->f_3E = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3E;
			uParam1->f_3F = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F;
			uParam1->f_40 = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_40;
		}
		else if (unk_0x8CD06866876216F2() && unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			if (func_91(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_88(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_88(0x000002F0, iParam3, 0x00000000);
			}
			uParam1->f_3C = func_88(0x000002F1, iParam3, 0x00000000);
			uParam1->f_3D = func_88(0x000002F2, iParam3, 0x00000000);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_91(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_88(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_88(0x000002F0, iParam3, 0x00000000);
			}
		}
	}
}

int func_88(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_89(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_89(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_90();
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

var func_90()
{
	return Global_1407E9;
}

int func_91(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_89(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_92(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (iParam0 != 0x00000000)
	{
		*uParam2 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
		*uParam3 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0x00000000)
	{
		return;
	}
	if (iParam1 == 0x00000000)
	{
		if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
		{
			if (iParam0 != 0x00000000)
			{
				if (unk_0xDCCE25EA1C1D1F76(iParam0) && unk_0x6BE6D34EA3F561AC(iParam0) != 0xFFFFFFFF)
				{
					*uParam2 = unk_0x6BE6D34EA3F561AC(iParam0);
					*uParam3 = unk_0x7E1F0AD2CE37D34C(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000007)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000010 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000017)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001C)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 >= 0x0000000E && *uParam2 <= 0x00000014)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			else if (iParam1 == 0x00000001)
			{
				if (*uParam2 == 0x00000001)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000040 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000002)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000004)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000010 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000006)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000011)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000014)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 >= 0x00000008 && *uParam2 <= 0x0000000E)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000009)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000C)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000017)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if ((*uParam2 >= 0x0000000E && *uParam2 <= 0x00000014) || *uParam2 == 0x00000002)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
	}
}

void func_93(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (iParam0 != 0x00000000)
	{
		*uParam2 = unk_0x36C584991B4C183F(iParam0, iParam1);
		*uParam3 = unk_0xDADA8E1DD0D0D9D9(iParam0, iParam1);
		*uParam4 = unk_0xAA973E78065E07A0(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0x00000000)
	{
		return;
	}
	switch (iVar0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x0000000F)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000040 != 0x00000000)
				{
					if (*uParam2 == 0x00000003 || *uParam2 == 0x00000016)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000005)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
				{
					if (*uParam2 == 0x00000008)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000001 || *uParam2 == 0x0000000A)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000040 != 0x00000000)
				{
					if (*uParam2 == 0x00000013)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
				{
					if (*uParam2 == 0x00000005)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000003)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if (*uParam2 >= 0x00000005 && *uParam2 <= 0x00000007)
				{
					if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
	}
}

int func_94()
{
	func_23();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_27(iParam0);
	if (func_13(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_96(iParam0, &(Global_1B416.f_936.f_21B.f_12A[iVar0 /*477*/]));
			iVar2 = 0x00000000;
			while (iVar2 <= (0x00000008 - 0x00000001))
			{
				Global_1B416.f_936.f_21B.f_6C2[iVar2 /*4*/][iVar0] = unk_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xFA91242148B28E7D();
					if (Global_1B416.f_936.f_21B.f_6C2[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_1B416.f_936.f_21B.f_6E3 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x812D6591566D640E(unk_0xD803B885F5E47A62(), &iVar3);
			if (iVar0 == 0x00000000)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp0_parachute_current_tint"), iVar3, 0x00000001);
			}
			else if (iVar0 == 0x00000001)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp1_parachute_current_tint"), iVar3, 0x00000001);
			}
			else if (iVar0 == 0x00000002)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp2_parachute_current_tint"), iVar3, 0x00000001);
			}
		}
	}
}

void func_96(int iParam0, var uParam1)
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
			iVar3 = func_101(iVar0);
			if (iVar3 != 0x00000000)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_101(iVar0));
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
					iVar2 = func_99(Var4, iVar1);
					while (iVar2 != 0x00000000)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_99(Var4, iVar1);
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
			if ((unk_0x310836EE7129BA33(iVar5, &Var7) && !func_98(Var7.f_1)) && iVar9 < 0x00000033)
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
							if (!func_97(Var8.f_3))
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

int func_97(int iParam0)
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

int func_98(int iParam0)
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

int func_99(int iParam0, int iParam1)
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
				iVar1 = func_100(iParam0, &uVar4);
				if (iVar1 != 0xFFFFFFFF)
				{
					iVar2 = 0x00000000;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var5))
						{
							if (!func_97(Var5.f_3))
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

int func_100(int iParam0, var uParam1)
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

int func_101(int iParam0)
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

void func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = func_27(iParam0);
	if (func_13(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_1B416.f_936.f_21B.f_126[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_103(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	uParam0->f_3 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
	uParam0->f_5 = unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9());
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		uParam0->f_4 = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x8A22C4C08282BF26(joaat("finale_choice")) > 0x00000000)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000004))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000005))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000006))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000007))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0x0D1736C2E221BCEA(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0x00000000, 0x00000001, 0x00000000))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 0x00000001)
	{
		if (func_107(&iVar0))
		{
			if (func_105(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0x00000000, 0x00000001, 0x00000000))
		{
			iVar3 = func_22();
			if (iVar3 == 0x00000000)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 0x00000001)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 0x00000002)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0x00000000, 0x00000001, 0x00000000))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_104(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_104(vector3 vParam0, char* sParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD1BF3090E1F8300E(vParam0))
	{
		iVar0 = unk_0x0D1736C2E221BCEA(vParam2, sParam1);
		if (!unk_0x31609A585163CBAC(iVar0))
		{
			return 0x00000000;
		}
		iVar1 = unk_0x16804749AA17EEA8(vParam0);
		if (iVar1 == iVar0)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_105(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 0x00000001:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 0x00000002:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 0x00000003:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 0x00000004:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 0x00000005:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 0x00000006:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 0x00000007:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 0x00000008:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 0x00000009:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 0x0000000A:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 0x0000000B:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 0x0000000C:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 0x0000000D:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 0x0000000E:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 0x0000000F:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 0x00000010:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 0x00000011:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 0x00000012:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 0x00000013:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 0x00000014:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 0x00000015:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 0x00000016:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 0x00000017:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 0x00000018:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 0x00000019:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 0x0000001A:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 0x0000001B:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 0x0000001C:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 0x0000001D:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 0x0000001E:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 0x0000001F:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 0x00000020:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 0x00000021:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 0x00000022:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 0x00000023:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 0x00000024:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 0x00000025:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 0x00000026:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 0x00000027:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 0x00000028:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 0x00000029:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 0x0000002A:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 0x0000002B:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 0x0000002C:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 0x0000002D:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x0000002E:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x0000002F:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000030:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000031:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000034:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000032:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 0x00000033:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_106(*uParam1, 0f, 0f, 0f, 0x00000000);
}

bool func_106(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_107(var uParam0)
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_130())
		{
			*uParam0 = func_113(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000006, 0xFFFFFFFF, 0x00000000, 0x00000001, 0xFFFFFFFF);
			if (func_112(*uParam0) && !func_108(*uParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_108(int iParam0)
{
	return func_109(iParam0, 0x00000000, 0x00000001);
}

int func_109(int iParam0, int iParam1, bool bParam2)
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
		if (func_111() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_88(func_110(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_110(int iParam0)
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

int func_111()
{
	return Global_7830;
}

int func_112(int iParam0)
{
	return func_109(iParam0, 0x00000005, 0x00000001);
}

int func_113(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000034)
	{
		if (iParam1 == 0x00000006 || iParam1 == func_129(iVar0))
		{
			if (!bParam3 || func_128(iVar0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(vParam0, func_114(iVar0, 0x00000000), 0x00000001);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == 0xFFFFFFFF)) && (iParam4 || iVar0 != 0x00000015)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_114(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0f, 0f, 0f;
			break;
		
		case 0x00000000:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 0x00000001:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 0x00000002:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 0x00000003:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 0x00000004:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 0x00000005:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 0x00000006:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 0x00000007:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 0x00000008:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 0x00000009:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 0x0000000A:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 0x0000000B:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 0x0000000C:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 0x0000000D:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 0x0000000E:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 0x0000000F:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 0x00000010:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 0x00000011:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 0x00000012:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 0x00000013:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 0x00000014:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 0x00000015:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 0x00000016:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 0x00000017:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 0x00000018:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 0x00000019:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 0x0000001A:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 0x0000001B:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 0x0000001C:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 0x0000001D:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 0x0000001E:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 0x0000001F:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 0x00000020:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 0x00000021:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 0x00000022:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 0x00000023:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 0x00000024:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 0x00000025:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 0x00000026:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 0x00000027:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 0x00000028:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 0x00000029:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 0x0000002A:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 0x0000002B:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 0x0000002C:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 0x0000002D:
			return func_125(Global_189E7);
			break;
		
		case 0x0000002E:
			if (Global_184466 != func_124())
			{
				if (func_123(Global_184466))
				{
					return func_116(0x00000002, 0x00000002);
				}
				else if (func_115(Global_184466))
				{
					return func_116(0x0000002D, 0x00000003);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 0x0000002F:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 0x00000030:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 0x00000031:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 0x00000034:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 0x00000032:
			return Global_19E130;
			break;
		
		case 0x00000033:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_115(int iParam0)
{
	if (iParam0 != func_124())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000001)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000002))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_116(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_184466 != func_124())
	{
		if (iParam1 == 0x00000003)
		{
			if (func_117(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 0x00000002)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000004))
			{
				if (func_117(iParam0, 0x00000001, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[Global_184466 /*876*/].f_112.f_103, 0x00000005))
			{
				if (func_117(iParam0, 0x00000002, &vVar0, 0x00000000, 0x00000000))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_117(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_122(iParam3, &Var0))
	{
		return 0x00000000;
	}
	if (!func_122(iParam1, &vVar1))
	{
		return 0x00000000;
	}
	if (!bParam4)
	{
		Var2 = { func_120(iParam0) };
	}
	else
	{
		Var2 = { func_119(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_118(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_118(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 0x00000001;
}

Vector3 func_118(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_119(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 0x00000001:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 0x00000002:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 0x00000003:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 0x00000004:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 0x00000005:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 0x00000006:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 0x00000007:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 0x00000008:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_120(int iParam0)
{
	return func_121(iParam0);
}

struct<6> func_121(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000001:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000013:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000014:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000002:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000003:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000004:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 0x00000005:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 0x00000006:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 0x00000007:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 0x00000008:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 0x00000009:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000A:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 0x0000000B:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000C:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003D:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003E:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000D:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 0x0000000E:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000000F:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003F:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000040:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000010:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 0x00000011:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000012:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000041:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000042:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002C:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000015:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000016:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000017:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 0x00000018:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 0x00000019:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 0x0000001A:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000001B:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000001C:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000001D:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000001E:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 0x0000001F:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 0x00000020:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 0x00000021:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000022:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000023:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000024:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000025:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 0x00000026:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 0x00000027:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 0x00000028:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000029:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x0000002A:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000002B:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x0000002D:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002E:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000002F:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000030:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000031:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000032:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000033:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 0x00000034:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 0x00000035:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 0x00000036:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000037:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000038:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000039:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003A:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003B:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x0000003C:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000043:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000044:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000047:
		case 0x00000045:
		case 0x00000046:
		case 0x00000049:
		case 0x00000048:
		case 0x0000004A:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_122(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		case 0x00000001:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		case 0x00000002:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_123(int iParam0)
{
	if (iParam0 != func_124())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000003) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000004)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0x00000005))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_124()
{
	return 0xFFFFFFFF;
}

Vector3 func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 1060f, -2990f, -35f;
			break;
		
		case 0x00000002:
			return 1060f, -2990f, -35f;
			break;
		
		case 0x00000003:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 0x00000006:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 0x00000007:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 0x00000008:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 0x00000009:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 0x00000004:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 0x00000005:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 0x0000000A:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 0x0000000B:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 0x0000000C:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 0x0000000D:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 0x0000000E:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 0x0000000F:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 0x00000010:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 0x00000011:
			if (func_126() == 0x00000000)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_126()
{
	return func_127(unk_0xD803B885F5E47A62());
}

int func_127(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x0000001C, 0x0000001F);
}

int func_128(int iParam0)
{
	return func_109(iParam0, 0x00000000, 0x00000000);
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000006;
			break;
		
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000000;
			break;
		
		case 0x00000003:
			return 0x00000000;
			break;
		
		case 0x00000004:
			return 0x00000000;
			break;
		
		case 0x00000005:
			return 0x00000000;
			break;
		
		case 0x00000006:
			return 0x00000000;
			break;
		
		case 0x00000032:
			return 0x00000000;
			break;
		
		case 0x00000007:
			return 0x00000001;
			break;
		
		case 0x00000008:
			return 0x00000001;
			break;
		
		case 0x00000009:
			return 0x00000001;
			break;
		
		case 0x0000000A:
			return 0x00000001;
			break;
		
		case 0x0000000B:
			return 0x00000001;
			break;
		
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
			return 0x00000001;
			break;
		
		case 0x0000000E:
			return 0x00000001;
			break;
		
		case 0x0000000F:
			return 0x00000001;
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
			return 0x00000002;
			break;
		
		case 0x00000017:
			return 0x00000002;
			break;
		
		case 0x00000018:
			return 0x00000002;
			break;
		
		case 0x00000019:
			return 0x00000002;
			break;
		
		case 0x0000001A:
			return 0x00000002;
			break;
		
		case 0x0000001B:
			return 0x00000002;
			break;
		
		case 0x0000001C:
			return 0x00000003;
			break;
		
		case 0x0000001D:
			return 0x00000003;
			break;
		
		case 0x0000001E:
			return 0x00000003;
			break;
		
		case 0x0000001F:
			return 0x00000003;
			break;
		
		case 0x00000020:
			return 0x00000003;
			break;
		
		case 0x00000021:
			return 0x00000003;
			break;
		
		case 0x00000022:
			return 0x00000003;
			break;
		
		case 0x00000023:
			return 0x00000003;
			break;
		
		case 0x00000024:
			return 0x00000003;
			break;
		
		case 0x00000025:
			return 0x00000003;
			break;
		
		case 0x00000026:
			return 0x00000003;
			break;
		
		case 0x00000027:
			return 0x00000004;
			break;
		
		case 0x00000028:
			return 0x00000004;
			break;
		
		case 0x00000029:
			return 0x00000004;
			break;
		
		case 0x0000002A:
			return 0x00000004;
			break;
		
		case 0x0000002B:
			return 0x00000004;
			break;
		
		case 0x0000002C:
			return 0x00000004;
			break;
		
		case 0x0000002D:
			return 0x00000005;
			break;
		
		case 0x0000002E:
			return 0x00000003;
			break;
		
		case 0x0000002F:
			return 0x00000003;
			break;
		
		case 0x00000030:
			return 0x00000003;
			break;
		
		case 0x00000031:
			return 0x00000003;
			break;
		
		case 0x00000034:
			return 0x00000003;
			break;
		
		case 0x00000033:
			return 0x00000001;
			break;
	}
	return 0x00000006;
}

bool func_130()
{
	return Global_181EC.f_159 > 0x00000000;
}

int func_131(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_28(0x00000000))
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
		if (!func_29(iParam2))
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
			func_132(iParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_132(var uParam0, int iParam1)
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

void func_133(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (iParam3 != 0x00000018 && iParam3 != 0x00000019)
		{
			return;
		}
		if (iParam3 == 0x00000018)
		{
			if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x00000019]) && unk_0xDF1306B443CD3D15(Global_126B1.f_1E4[0x00000019], 0x00000000))
			{
				if (Global_126B1.f_1E4[0x00000019] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x56E1CD81AE700E98(iParam0) || unk_0x134B62B726CEC8E6(iParam0) == joaat("bus")) || unk_0x134B62B726CEC8E6(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_159(iParam3);
		Var0.f_9 = 0x00000031;
		Var0.f_3B = 0x00000002;
		func_14(iParam0, &Var0);
		if (func_106(vParam1, 0f, 0f, 0f, 0x00000000))
		{
			vParam1 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
			fParam2 = unk_0xD9522BA9E27E1349(iParam0);
		}
		if (iParam3 == 0x00000018)
		{
			if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != joaat("vehicle_gen_controller"))
			{
				Global_12A8D = unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C());
			}
		}
		func_153(iParam3, &Var0, vParam1, fParam2, func_9(iParam0));
		func_134(iParam3, iParam0, 0x00000000);
	}
}

void func_134(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!func_152(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000C) && !unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A))
	{
		if (Global_126B1.f_22B[0x00000000 /*21*/].f_4 != unk_0x134B62B726CEC8E6(iParam1))
		{
			return;
		}
	}
	if (Global_12A3C != 0xFFFFFFFF && Global_12A3C != iParam0)
	{
		return;
	}
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
		{
			if (!unk_0xAF6690C489CC6203(iParam1))
			{
				unk_0x73270B3C9CC833FD(iParam1, 0x00000001, 0x00000001);
			}
			if (iParam0 == 0x00000018)
			{
				Global_1B416.f_7FE8.f_12C1 = func_53();
			}
			if (iParam1 != Global_126B1.f_8B[iParam0])
			{
				if (iParam0 == 0x00000018)
				{
					iVar0 = func_151(iParam0);
					if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0x00000000)) && iParam1 != iVar0)
					{
						func_135(iVar0, 0x00000091);
					}
				}
				Global_12A3B = iParam1;
				Global_12A3C = iParam0;
				Global_12A3D = iParam2;
			}
		}
	}
}

void func_135(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_136(iParam0))
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
	func_14(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

int func_136(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_20(iParam0, 0x00000000, 0x00000000)) || func_20(iParam0, 0x00000001, 0x00000000)) || func_20(iParam0, 0x00000002, 0x00000000)) || func_9(iParam0) != 0x00000091) || func_150(iParam0)) || func_149(iParam0)) || func_148(iParam0)) || func_147(iParam0)) || !func_137(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_149(iParam0))
		{
		}
		if (func_149(iParam0))
		{
		}
		if (func_20(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_20(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_20(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_9(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_137(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_138(iParam0, 0x00000000))
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

int func_138(int iParam0, bool bParam1)
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
		if (!func_146())
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
		if ((((!func_145() && !func_144()) && !func_143()) && !func_142()) && !func_146())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_143())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_141(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_139(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_139(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_140())
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

int func_140()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_141(int iParam0)
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

int func_142()
{
	return 0x00000000;
}

int func_143()
{
	return 0x00000001;
}

int func_144()
{
	return 0x00000001;
}

int func_145()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_146()
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

int func_147(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_138(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_148(int iParam0)
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

int func_149(int iParam0)
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

int func_150(int iParam0)
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

int func_151(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_126B1.f_8B[iParam0];
}

int func_152(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0x00000000;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0x00000000;
	uParam0->f_A = 0x00000000;
	uParam0->f_B = 0x00000000;
	uParam0->f_C = 0x00000091;
	uParam0->f_D = 0xFFFFFFFF;
	uParam0->f_E = 0x00000000;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0x00000000:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_11(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_11(0x00000000, 0x00000001);
			uParam0->f_C = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_11(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_11(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_11(0x00000001, 0x00000001);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_11(0x00000001, 0x00000002);
			uParam0->f_C = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000013);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_11(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_11(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_11(0x00000002, 0x00000001);
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000014);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			break;
		
		case 0x0000000B:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 0x00000001;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			break;
		
		case 0x0000000C:
			uParam0->f_E = 0x00000000;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000167;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			uParam0->f_E = 0x00000001;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000167;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			uParam0->f_E = 0x00000002;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000167;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			uParam0->f_E = 0x00000003;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000164;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			uParam0->f_E = 0x00000004;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000164;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			uParam0->f_E = 0x00000005;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000164;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			uParam0->f_E = 0x00000006;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000168;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			uParam0->f_E = 0x00000007;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000168;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			uParam0->f_E = 0x00000008;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000168;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000015:
			uParam0->f_E = 0x00000009;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = 0x00000000;
			uParam0->f_D = 0x00000165;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000016:
			uParam0->f_E = 0x0000000A;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = 0x00000001;
			uParam0->f_D = 0x00000165;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			uParam0->f_E = 0x0000000B;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = 0x00000002;
			uParam0->f_D = 0x00000165;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
			iVar1 = (iParam1 - 0x0000001A);
			uParam0->f_E = (0x0000000C + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = (0x00000000 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
			iVar1 = (iParam1 - 0x0000001D);
			uParam0->f_E = (0x0000000F + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = (0x00000000 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
			iVar1 = (iParam1 - 0x00000020);
			uParam0->f_E = (0x00000012 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0x00000000;
			uParam0->f_C = (0x00000000 + iVar1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000007);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000018);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000018:
			uParam0->f_E = 0x00000015;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000019:
			uParam0->f_E = 0x00000016;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000B);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000C);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_A = 0x0000007E;
			uParam0->f_B = 0x0000007E;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000009);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000025:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_A = 0x0000009D;
			uParam0->f_B = 0x0000009D;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000009);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000026:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000027:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000029:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000028:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002A:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002B:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 0x73920F8E;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000008);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002C:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002D:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002E:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000030:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000031:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000032:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 0x00000001;
			break;
		
		case 0x00000033:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000034:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000035:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000036:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000037:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000038:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 0x00000002;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001A);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000039:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_D = 0x00000134;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003A:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_D = 0x00000194;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000016);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003B:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_146())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 0x00000191;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_146())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 0x00000191;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000002);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003E:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x0000003F:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_D = 0x00000134;
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000000);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000015);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000040:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000041:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000042:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
		
		case 0x00000043:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x0000001E);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000017);
			unk_0x5D96D8530B3D0904(&(uParam0->f_9), 0x00000006);
			iVar0 = 0x00000001;
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x0000000A))
	{
		uParam0->f_4 = Global_1B416.f_7FE8.f_45[uParam0->f_E /*78*/].f_42;
		if (iParam1 == 0x0000000E)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_106(Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_7FE8.f_748[uParam0->f_E /*3*/] };
		}
		if (Global_1B416.f_7FE8.f_78E[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_1B416.f_7FE8.f_78E[uParam0->f_E];
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000013))
	{
		if (!func_106(Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000001 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000001 /*4*/][uParam0->f_C];
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(uParam0->f_9, 0x00000014))
	{
		if (!func_106(Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			*uParam0 = { Global_1B416.f_936.f_21B.f_E04[0x00000000 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_1B416.f_936.f_21B.f_E19[0x00000000 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

void func_153(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_152(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000A))
		{
			func_158(iParam0);
			func_157(uParam1, &(Global_1B416.f_7FE8.f_45[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*78*/]));
			if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000B))
			{
				Global_1B416.f_7FE8.f_748[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*3*/] = { vParam2 };
				Global_1B416.f_7FE8.f_78E[Global_126B1.f_22B[0x00000000 /*21*/].f_E] = fParam3;
			}
			else
			{
				Global_1B416.f_7FE8.f_748[Global_126B1.f_22B[0x00000000 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_1B416.f_7FE8.f_78E[Global_126B1.f_22B[0x00000000 /*21*/].f_E] = -1f;
			}
			Global_1B416.f_7FE8.f_7A6[Global_126B1.f_22B[0x00000000 /*21*/].f_E] = iParam4 + 1;
			func_154(iParam0, 0x00000001);
		}
	}
}

void func_154(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_156(iParam0, 0x00000000))
		{
			func_155(iParam0, 0x00000001, 0x00000000);
			func_155(iParam0, 0x00000002, 0x00000000);
			func_155(iParam0, 0x00000003, 0x00000000);
			func_155(iParam0, 0x00000004, 0x00000000);
			func_155(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_155(iParam0, 0x00000000, 0x00000000);
	}
}

void func_155(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_7FE8[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_7FE8[iParam0]), iParam1);
	}
}

bool func_156(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

void func_157(var uParam0, var uParam1)
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_3B = { uParam0->f_3B };
	uParam1->f_3E = uParam0->f_3E;
	uParam1->f_3F = uParam0->f_3F;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_4D = uParam0->f_4D;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_4A = uParam0->f_4A;
	uParam1->f_4B = uParam0->f_4B;
	uParam1->f_4C = uParam0->f_4C;
}

void func_158(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_152(&(Global_126B1.f_22B[0x00000000 /*21*/]), iParam0))
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_8B[iParam0]))
		{
			unk_0x73270B3C9CC833FD(Global_126B1.f_8B[iParam0], 0x00000001, 0x00000001);
			unk_0x046C362CF15F1935(&(Global_126B1.f_8B[iParam0]));
			Global_126B1.f_8B[iParam0] = 0x00000000;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_126B1.f_22B[0x00000000 /*21*/].f_9, 0x0000000D))
		{
			func_154(iParam0, 0x00000000);
		}
	}
}

void func_159(int iParam0)
{
	if (iParam0 != 0x00000018 && iParam0 != 0x00000019)
	{
	}
	func_158(iParam0);
	func_154(iParam0, 0x00000000);
}

void func_160()
{
	Global_56C3.f_6 = 0x00000001;
}

void func_161()
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iLocal_29))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_32) < 2500f)
			{
				iLocal_29 = unk_0x728870EB733D12A1();
				if (unk_0xC844350D5D58C99A(iLocal_29))
				{
					iVar0 = unk_0x134B62B726CEC8E6(iLocal_29);
					if (iVar0 == joaat("dune"))
					{
					}
				}
			}
		}
	}
}

int func_162()
{
	return joaat("dune");
}

void func_163(bool bParam0)
{
	unk_0x71199B01895C6202(joaat("dune"));
	if (unk_0xC844350D5D58C99A(iLocal_44))
	{
		if (bParam0)
		{
			unk_0xA954465BA6FDEFE2(&iLocal_44);
		}
		else
		{
			unk_0x046C362CF15F1935(&iLocal_44);
		}
	}
}

int func_164()
{
	if (func_28(0x00000009))
	{
		if (unk_0x8A22C4C08282BF26(joaat("trevor2")) == 0x00000001)
		{
			if (!iLocal_36[0x00000000])
			{
				iLocal_36[0x00000000] = 0x00000001;
			}
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("finale_heist2b")) == 0x00000001)
		{
			if (!iLocal_36[0x00000001])
			{
				iLocal_36[0x00000001] = 0x00000001;
			}
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("traffick_air")) == 0x00000001)
		{
			if (!iLocal_36[0x00000002])
			{
				iLocal_36[0x00000002] = 0x00000001;
			}
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("traffick_ground")) == 0x00000001)
		{
			if (!iLocal_36[0x00000003])
			{
				iLocal_36[0x00000003] = 0x00000001;
			}
			return 0x00000000;
		}
		if (Global_181DA)
		{
			return 0x00000000;
		}
		if (iLocal_33 != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_186() == 0x00000135)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_165(var uParam0, int iParam1)
{
	func_166(uParam0, iParam1);
}

void func_166(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_167(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_168(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_168(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_169();
	}
}

void func_169()
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

bool func_170(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_171(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	bVar0 = 0x00000000;
	if (iLocal_39 != 0x00000009)
	{
		if (!Global_1B416.f_4E0A.f_E)
		{
			func_1(0x00000069, 0x00000001, 0x00000000);
			Global_1B416.f_4E0A.f_E = 0x00000001;
			bVar0 = 0x00000001;
		}
		else
		{
			bVar0 = 0x00000001;
		}
	}
	else
	{
		func_1(0x00000069, 0x00000000, 0x00000000);
		Global_1B416.f_4E0A.f_E = 0x00000000;
	}
	if (iLocal_39 != 0x00000001 && iLocal_39 != 0x00000008)
	{
		if (func_164() && !*iParam0)
		{
			func_172(0x00000000);
			iLocal_39 = 0x00000001;
		}
	}
	switch (iLocal_39)
	{
		case 0x00000000:
			iLocal_39 = 0x00000001;
			break;
		
		case 0x00000001:
			if (!func_164())
			{
				if (fLocal_31 < 50625f)
				{
					iLocal_39 = 0x00000002;
				}
				else if (bLocal_35)
				{
					iLocal_39 = 0x00000002;
				}
			}
			break;
		
		case 0x00000002:
			unk_0x523BCC9DC80CD82F(joaat("cuban800"));
			iLocal_39 = 0x00000003;
			break;
		
		case 0x00000003:
			unk_0x523BCC9DC80CD82F(joaat("cuban800"));
			if (unk_0xB87F6CF6E5628C67(joaat("cuban800")))
			{
				if (!unk_0xC844350D5D58C99A(iLocal_40))
				{
					unk_0x28F5E4DA506AC0CA(vLocal_42, 8f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_40 = unk_0x122AAB0B1D6F55AD(joaat("cuban800"), vLocal_42, 25.29f, 0x00000001, 0x00000001, 0x00000000);
					unk_0x71199B01895C6202(joaat("cuban800"));
					unk_0xC6A6B4DDD6DC073A(iLocal_40, 0x00000002);
					func_165(&(Global_1B416.f_4E0A), 0x00000080);
					iLocal_39 = 0x00000004;
				}
				else
				{
					iLocal_39 = 0x00000004;
				}
			}
			break;
		
		case 0x00000004:
			if (unk_0xC844350D5D58C99A(iLocal_40))
			{
				if (unk_0x437347B10A200C4B(iLocal_40, 0x00000000) || unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_39 = 0x00000009;
					return;
				}
			}
			if (func_28(0x00000009))
			{
				if (unk_0x8A22C4C08282BF26(joaat("traffick_ground")) == 0x00000001)
				{
					if (!unk_0x437347B10A200C4B(iLocal_40, 0x00000000))
					{
						unk_0x71EDC33E5A423750(iLocal_40, 0x00000002);
						return;
					}
				}
			}
			else if (unk_0x8A22C4C08282BF26(joaat("traffick_ground")) == 0x00000000)
			{
				if (!unk_0x437347B10A200C4B(iLocal_40, 0x00000000))
				{
					unk_0x71EDC33E5A423750(iLocal_40, 0x00000001);
				}
			}
			if (!bLocal_35)
			{
				if (fLocal_31 >= 50625f && !*iParam0)
				{
					func_172(0x00000000);
					iLocal_39 = 0x00000001;
					return;
				}
			}
			if (!bVar0 && !*iParam0)
			{
				if (!iLocal_41)
				{
					if (unk_0x405E212DDE472467(iLocal_28, 0x00000000))
					{
						iVar1 = unk_0x3C66DF04E6EA3587(iLocal_28);
						if (iVar1 == iLocal_40)
						{
							iLocal_41 = 0x00000001;
							unk_0x046C362CF15F1935(&iLocal_40);
							iLocal_39 = 0x00000009;
						}
					}
				}
			}
			if (*iParam0)
			{
				unk_0xF821F915BC24D246(iLocal_28, iLocal_40, 0xFFFFFFFF);
			}
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x437347B10A200C4B(iLocal_40, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_40, 0x00000001))
				{
					func_160();
				}
			}
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iVar2 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
					if (iVar2 == iLocal_40)
					{
						unk_0x92DCE5C81176D2B4("Traffick_Air");
						if (unk_0xC844350D5D58C99A(iLocal_29) && !unk_0x437347B10A200C4B(iLocal_29, 0x00000000))
						{
							if (unk_0x134B62B726CEC8E6(iLocal_29) != joaat("dune") && unk_0x134B62B726CEC8E6(iLocal_29) != joaat("cuban800"))
							{
								if (!unk_0x3D1053F9EB43B7AD(iLocal_29, 2137.12f, 4799.97f, 39.67854f, 2116.64f, 4790.417f, 45.45295f, 25f, 0x00000000, 0x00000001, 0x00000000))
								{
									func_133(iLocal_29, 2142.245f, 4823.463f, 40.2769f, 118.4428f, 0x00000018, 0x00000000);
								}
							}
							else if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
							{
								unk_0x7EA00EB725DAA91D(iLocal_29);
							}
						}
						iLocal_39 = 0x00000006;
					}
				}
			}
			break;
		
		case 0x00000006:
			if (unk_0x1FBF08B001C4788A("Traffick_Air"))
			{
				iVar3 = 0x00000000;
				if (*iParam0)
				{
					iVar3 = 0x00000001;
				}
				else
				{
					iVar3 = func_131(&iLocal_33, 0x00000006, 0x00000009, 0x00000000, 0x00000000);
					iLocal_37 = 0x00000001;
				}
				if (iVar3 == 0x00000001)
				{
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
					}
					if (!*iParam0)
					{
						func_82(unk_0xBB0808A181D4745C(), 0x00000000);
					}
					iLocal_30 = SYSTEM::START_NEW_SCRIPT("Traffick_Air", 0x000088B8);
					func_81(0x0000000F);
					unk_0x5E8C29AE121DF1C7("Traffick_Air");
					unk_0x046C362CF15F1935(&iLocal_40);
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (Global_A664 == 0x00000001)
						{
							func_72(unk_0x16F2683693E537C9());
						}
					}
					iLocal_41 = 0x00000000;
					iLocal_39 = 0x00000007;
				}
				else if (iVar3 == 0x00000000)
				{
					iLocal_37 = 0x00000000;
					func_172(0x00000000);
					iLocal_39 = 0x00000009;
				}
			}
			break;
		
		case 0x00000007:
			if (!unk_0x1727A44C562FBED2(iLocal_30))
			{
				if (func_170(Global_1AED1, 0x00000001))
				{
					iLocal_39 = 0x00000008;
				}
				else
				{
					func_71(&iLocal_33);
					func_54();
					uVar4 = func_53();
					func_45(&uVar4, 0x00000000, 0x00000000, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
					Global_1B416.f_4E0A.f_B = uVar4;
					func_1(0x00000069, 0x00000000, 0x00000000);
					Global_1B416.f_4E0A.f_E = 0x00000000;
					iLocal_39 = 0x00000009;
				}
				*iParam0 = 0x00000000;
				func_43(&Global_1AED1, 0x00000001);
			}
			break;
		
		case 0x00000008:
			if (Global_181B8 == 0x0000000A)
			{
				if (Global_181DA)
				{
					*iParam0 = 0x00000001;
					if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), 2136.446f, 4791.483f, 39.9702f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						}
					}
					unk_0x523BCC9DC80CD82F(joaat("cuban800"));
					unk_0x92DCE5C81176D2B4("Traffick_Air");
					if (unk_0xB87F6CF6E5628C67(joaat("cuban800")))
					{
						unk_0x28F5E4DA506AC0CA(vLocal_42, 8f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						iLocal_40 = unk_0x122AAB0B1D6F55AD(joaat("cuban800"), vLocal_42, 25.29f, 0x00000001, 0x00000001, 0x00000000);
						unk_0x71199B01895C6202(joaat("cuban800"));
						iLocal_39 = 0x00000003;
					}
				}
				else
				{
					*iParam0 = 0x00000000;
					iLocal_39 = 0x00000001;
				}
			}
			else if (Global_181B8 == 0x0000000D)
			{
				func_71(&iLocal_33);
				func_54();
				*iParam0 = 0x00000000;
				iLocal_39 = 0x00000001;
			}
			break;
		
		case 0x00000009:
			if (fLocal_31 >= 50625f && func_32(Global_1B416.f_4E0A.f_B))
			{
				func_172(0x00000000);
				iLocal_39 = 0x00000001;
			}
			break;
		
		default:
			break;
	}
}

void func_172(bool bParam0)
{
	unk_0x71199B01895C6202(joaat("cuban800"));
	if (unk_0xC844350D5D58C99A(iLocal_40))
	{
		if (bParam0)
		{
			unk_0xA954465BA6FDEFE2(&iLocal_40);
		}
		else
		{
			unk_0x046C362CF15F1935(&iLocal_40);
		}
	}
	if (func_170(Global_1B416.f_4E0A, 0x00000080))
	{
		func_43(&(Global_1B416.f_4E0A), 0x00000080);
	}
	iLocal_41 = 0x00000000;
}

int func_173()
{
	if (!func_184())
	{
		return 0x00000000;
	}
	if (!iLocal_37)
	{
		if (func_186() == 0x00000135)
		{
			return 0x00000001;
		}
		if (!func_29(0x00000009))
		{
			return 0x00000000;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("traffick_ground")) == 0x00000001 || unk_0x8A22C4C08282BF26(joaat("traffick_air")) == 0x00000001)
	{
		return 0x00000001;
	}
	iLocal_28 = unk_0x16F2683693E537C9();
	if (unk_0x437347B10A200C4B(iLocal_28, 0x00000000))
	{
	}
	if (func_183())
	{
		return 0x00000001;
	}
	if (func_22() != 0x00000002)
	{
		return 0x00000000;
	}
	if (!func_177(0x00000006))
	{
		if (unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
		{
			bLocal_38 = 0x00000001;
		}
		if (!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()))
		{
			bLocal_38 = 0x00000001;
		}
		if (unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000))
		{
		}
		if (!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()))
		{
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
		{
		}
		if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
		{
		}
		if (unk_0xE934758D273C899A(unk_0x16F2683693E537C9()))
		{
		}
		if (unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
		{
		}
		if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
		{
		}
		if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
		{
		}
		if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
		{
		}
		if (Global_1B05D)
		{
		}
		if (Global_7832)
		{
		}
		if (func_176())
		{
		}
		if (func_175(0x00000008, 0xFFFFFFFF))
		{
		}
		if (func_174())
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	else
	{
		bLocal_38 = 0x00000000;
	}
	return 0x00000001;
}

int func_174()
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

bool func_175(int iParam0, int iParam1)
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

bool func_176()
{
	return Global_14086D;
}

int func_177(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_22();
				if (!func_13(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_182()) || Global_1B05D) || Global_7832) || func_176()) || func_175(0x00000008, 0xFFFFFFFF)) || func_130()) || func_181()) || func_174()) || func_180()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_182()) || Global_7832) || func_176()) || func_175(0x00000008, 0xFFFFFFFF)) || func_174()) || func_130()) || func_181()) || func_180()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_182()) || Global_1B05D) || Global_7832) || func_176()) || func_175(0x00000008, 0xFFFFFFFF)) || func_174()) || func_130()) || func_181()) || func_180()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_182()) || Global_1B05D) || Global_7832) || func_176()) || func_175(0x00000008, 0xFFFFFFFF)) || func_130()) || func_181()) || func_180()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_182() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_175(0x00000008, 0xFFFFFFFF)) || func_180()) || func_179()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_175(0x00000008, 0xFFFFFFFF) || func_130()) || func_181()) || func_179()) || func_178())
						{
							return 0x00000000;
						}
						if ((unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 0x00000003) && unk_0x00A15D69BCAA5267() < 0x00000008)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000006:
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
						{
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_182()) || Global_7832) || func_176()) || func_175(0x00000008, 0xFFFFFFFF)) || func_181()) || func_174()) || func_180()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_182()) || func_181()) || Global_1B05D) || Global_7832) || func_176()) || Global_A664) || func_175(0x00000008, 0xFFFFFFFF)) || func_174()) || func_179()) || func_180()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_182()) || Global_1B05D) || Global_7832) || func_176()) || func_175(0x00000008, 0xFFFFFFFF)) || func_174()) || func_179()) || func_130()) || func_181()) || func_180())
						{
							return 0x00000000;
						}
						break;
				}
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
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

var func_178()
{
	return Global_181DF.f_1;
}

int func_179()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_180()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_181()
{
	return Global_181EC.f_15A > 0x00000000;
}

int func_182()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_183()
{
	if (((Global_181B8 == 0x0000000D || Global_181B8 == 0x0000000A) || Global_181B8 == 0x0000000B) || Global_181B8 == 0x0000000C)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_184()
{
	if (Global_1B416.f_2378)
	{
		return (func_185(0x00000000, 0x0000000F) && func_185(0x00000000, 0x00000010));
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_185(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 0x0000000B || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000020)
	{
		return 0x00000000;
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iParam0], iParam1);
	return bVar0;
}

int func_186()
{
	if (unk_0x991B1F0980C62628())
	{
		return Global_17A56;
	}
	if (func_180())
	{
		return Global_17A56;
	}
	return 0x0000013E;
}

void func_187()
{
	if (!iLocal_58)
	{
		iLocal_57 = unk_0x7D6CA5F52B3748BF(Vector(40.073f, 4788.559f, 2157.109f) - Vector(25f, 25f, 25f), Vector(40.073f, 4788.559f, 2157.109f) + Vector(25f, 25f, 25f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
		iLocal_58 = 0x00000001;
	}
}

int func_188(int iParam0)
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

void func_189()
{
	if (iLocal_57 != 0x00000000)
	{
		unk_0x2952D66A502EA873(iLocal_57, 0x00000000);
	}
	func_172(0x00000001);
	func_163(0x00000001);
	func_192();
	func_190();
	unk_0x10FAF14A60A0DBE1();
}

void func_190()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (Global_175BD[iVar0 /*17*/] && !Global_175BD[iVar0 /*17*/].f_1)
		{
			if (Global_175BD[iVar0 /*17*/].f_3 == 0x00000000)
			{
				if ((Global_175BD[iVar0 /*17*/].f_5 != 0x00000058 && Global_175BD[iVar0 /*17*/].f_5 != 0x00000059) && Global_175BD[iVar0 /*17*/].f_5 != 0x0000005C)
				{
					func_191(Global_175BD[iVar0 /*17*/].f_5, 0x00000001);
				}
			}
		}
		iVar0++;
	}
}

void func_191(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 0x00000058 && iParam0 != 0x00000059) && iParam0 != 0x0000005C)
		{
			Global_16A39[iParam0 /*2*/] = 0x00000001;
		}
	}
	else
	{
		Global_16A39[iParam0 /*2*/] = 0x00000000;
	}
}

void func_192()
{
	int iVar0;
	
	iLocal_34 = 0x00000000;
	unk_0x2914827AC2790D54(joaat("weapon_combatpistol"));
	unk_0x2914827AC2790D54(joaat("weapon_smg"));
	unk_0x2914827AC2790D54(joaat("weapon_stickybomb"));
	unk_0x2914827AC2790D54(joaat("weapon_assaultshotgun"));
	unk_0x2914827AC2790D54(joaat("weapon_rpg"));
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (unk_0x762119754C50557A(uLocal_50[iVar0]))
		{
			unk_0x40B7230FD4C59AA2(uLocal_50[iVar0]);
		}
		if (unk_0xC844350D5D58C99A(uLocal_49[iVar0]))
		{
			unk_0xF690C84DADBB3551(&(uLocal_49[iVar0]));
		}
		iVar0++;
	}
}

