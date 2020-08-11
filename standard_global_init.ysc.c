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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	char* sLocal_47 = NULL;
	char* sLocal_48 = NULL;
	char* sLocal_49 = NULL;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_51 = { 0f, 0f, 0f };
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
	iLocal_28 = 0x00000003;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	sLocal_47 = "CHECKPOINT_NORMAL";
	sLocal_48 = "CHECKPOINT_MISSED";
	sLocal_49 = "CHECKPOINT_PERFECT";
	vLocal_50 = { 1694.74f, 3276.502f, 41.2796f };
	vLocal_51 = { 8.79494f, 0.59893f, 154.8464f };
	Global_0 = 0f;
	Global_13 = { 6f, 6f, 2f };
	Global_16 = { 4f, 4f, 2f };
	Global_1CC2 = 0x000000FF;
	Global_1F1D = 0x0000012C;
	Global_4BCE = 0.1f;
	Global_4BCF = 0.179f;
	Global_4BD0 = 0.2f;
	Global_4BD1 = 0.356f;
	Global_4BD2 = 0.1f;
	Global_4BD3 = 0.325f;
	Global_4BD4 = 0.19f;
	Global_4BD5 = 0.06f;
	Global_4BD6 = { -30f, 3f, -90f };
	Global_4BD9 = { 0f, 0f, 0f };
	Global_4BDC = { -89.8f, -14.7f, 0f };
	Global_4BF6 = { -90f, 0f, 0f };
	Global_4BF9 = { -90f, -100.4f, 0f };
	Global_4BFD = 0x0000001B;
	Global_4BFE = 0x000000B1;
	Global_4BFF = 0x000000B0;
	Global_4C00 = 0x000000B1;
	Global_4C01 = 0x000000B3;
	Global_4C02 = 0x000000B3;
	Global_4C03 = 0x000000B2;
	Global_4C04 = 0x000000AE;
	Global_4C05 = 0x000000AF;
	Global_4C06 = 0x000000AC;
	Global_4C07 = 0x000000AD;
	Global_4C10 = 0x00000001;
	Global_4CCD = 0x00000091;
	Global_4CD6 = 0x00000001;
	Global_5540 = 0x000005F1;
	Global_5541 = 0x00002328;
	Global_5542 = 0x00001388;
	StringCopy(&Global_5544, "ANAUD", 32);
	StringCopy(&Global_5556, "NO_HYPERLINK", 64);
	Global_574B = 0.05f;
	Global_574C = 0.05f;
	Global_574D = 0.225f;
	Global_7830 = 0x000003E7;
	Global_7831 = 0x000003E7;
	Global_785E = 0.6f;
	Global_786B = 0xFFFFFFFF;
	StringCopy(&Global_78BA, "NULL", 24);
	StringCopy(&Global_7911, "NULL", 32);
	Global_7924 = 0x00000003;
	Global_792D = 0x00000001;
	Global_7937 = 0xFFFFD8F0;
	Global_7938 = 0xFFFFFFFF;
	Global_7939 = 0xFFFFFFFF;
	Global_79A7 = 0x00000001;
	Global_79A9 = 0x00000001;
	StringCopy(&Global_9509, "", 32);
	Global_A1B1 = 0xFFFFFFFE;
	Global_A1D7 = 0x0000000F;
	Global_A3FA = 0xFFFFFFFF;
	Global_A3FB = 0xFFFFFFFF;
	Global_A570 = 0x00000001;
	Global_A571 = 0xFFFFFFFF;
	Global_A572 = 0x00000064;
	Global_A641 = 1f;
	Global_A645 = 0x00007530;
	Global_A646 = 0f;
	Global_A647 = 0f;
	Global_A648 = 0f;
	Global_A649 = 0f;
	StringCopy(&Global_A64A, "", 16);
	StringCopy(&Global_A64E, "", 64);
	StringCopy(&Global_A65E, "", 16);
	Global_CACA = 0xFFFFFFFF;
	Global_E53D = 0xFFFFFFFF;
	Global_E65F = 0x00000001;
	Global_F038 = 0x00000001;
	Global_F039 = 0x00000001;
	Global_F03A = 0x00000001;
	Global_F04C = 0xFFFFFFFF;
	Global_F054 = 0xFFFFFFFF;
	Global_F056 = 0xFFFFFFFF;
	Global_1201E = 0xFFFFFFFF;
	Global_1204C = 0x4FCAD2E0;
	Global_1204D = 0xC4B4255B;
	Global_1204E = 0x34D19B31;
	Global_1204F = 0xB5EE0614;
	Global_12050 = 0xE51AD788;
	Global_12063 = 0x00000001;
	Global_120D1 = 0xFFFFFFFF;
	Global_120D4 = 0xFFFFFFFF;
	Global_120D6 = 0xFFFFFFFF;
	Global_120D7 = 0xFFFFFFFF;
	Global_120D8 = 0xFFFFFFFF;
	Global_120D9 = 0xFFFFFFFF;
	Global_120DA = 0xFFFFFFFF;
	Global_120DB = 0x00000001;
	Global_120DC = 0x0000000B;
	Global_120DE = 0x00000001;
	Global_120DF = 0xFFFFFFFF;
	Global_120E0 = 0xFFFFFFFF;
	Global_120E4 = 0f;
	Global_120E5 = 0f;
	Global_120E6 = 0f;
	Global_120E9 = 10f;
	Global_120FB = 0f;
	Global_120FC = 0f;
	Global_120FF = 0f;
	Global_12100 = 0f;
	Global_12101 = 0f;
	Global_12109 = 0xFFFFFFFF;
	Global_1210A = 0xFFFFFFFF;
	Global_1254A = 0xFFFFFFFF;
	Global_1254B = 0xFFFFFFFF;
	Global_126A8 = 0xFFFFFFFF;
	Global_126AB = 0x00000001;
	Global_12A3C = 0xFFFFFFFF;
	Global_12B34 = 0xFFFFFFFF;
	Global_12B35 = 0xFFFFFFFF;
	Global_12B36 = 0xFFFFFFFF;
	Global_12B37 = 0xFFFFFFFF;
	Global_12B38 = 0xFFFFFFFF;
	Global_12B39 = 0x00000001;
	Global_12B3A = 0x00000001;
	Global_12B3B = 0x00000001;
	Global_12B4A = 0xFFFFFFFF;
	Global_12B4B = 0xFFFFFFFF;
	Global_12B53 = 0xFFFFFFFF;
	StringCopy(&Global_12B54, "NONE", 24);
	Global_12B5E = 0xFFFFFFFF;
	Global_12C42 = 0xFFFFFFFF;
	Global_12C4C = 0x00000006;
	Global_12C4D = 0xFFFFFFFF;
	Global_12C4E = 0xFFFFFFFF;
	Global_12C54 = 0xFFFFFFFF;
	Global_12C55 = 0xFFFFFFFF;
	Global_12C56 = 0xFFFFFFFF;
	Global_12C57 = 0xFFFFFFFF;
	Global_12C58 = 0xFFFFFFFF;
	Global_16AF7 = 0xFFFFFFFF;
	Global_16E32 = 0xFFFFFFFF;
	Global_16E46 = 0x0000008D;
	Global_16E47 = 0x00000008;
	Global_16E48 = 0xFFFFFFFF;
	Global_1716A = 0x00000017;
	Global_1716B = Global_1716A;
	Global_1716C = 0x0000000A;
	Global_1716D = 0x00000001;
	Global_1716E = 0x00000001;
	Global_1716F = 0x00000091;
	Global_1717F = 0xFFFFFFFF;
	Global_17181 = 0xFFFFFFFF;
	Global_173C1 = 0x000003E8;
	Global_173C4 = 0x00001B58;
	Global_173DC = 0x00000004;
	Global_173DE = 0x00000001;
	Global_173DF = 0x00000001;
	Global_173E2 = 0x00000001;
	Global_17403 = 0xFFFFFFFF;
	Global_17404 = 0xFFFFFFFF;
	Global_17408 = 0xFFFFFFFF;
	Global_17575 = 0xFFFFFFF1;
	StringCopy(&Global_17576, "", 64);
	Global_17586 = 0xFFFFFFF1;
	StringCopy(&Global_17588, "", 64);
	Global_17598 = 0xFFFFFFF1;
	StringCopy(&Global_1759A, "", 64);
	Global_175AA = 0xFFFFFFF1;
	Global_175AD = 0x00000001;
	Global_175AE = 0xFFFFFFF1;
	Global_175B1 = 0xFFFFFFFF;
	Global_175B2 = 0xFFFFFFFF;
	Global_175B3 = 0xFFFFFFFF;
	Global_175B4 = 0xFFFFFFFF;
	Global_175B5 = 0xFFFFFFFF;
	Global_175BB = 0xFFFFFFFF;
	Global_1770F = 0x00000001;
	Global_17732 = 0x00000001;
	Global_17733 = 0x00000001;
	Global_17734 = 0x00000001;
	Global_17749 = 0xFFFFFFFF;
	Global_1774A = 0xFFFFFFFF;
	Global_17A56 = 0x0000013E;
	Global_17F57 = 0xFFFFFFFF;
	Global_17F63 = 0x0000013E;
	Global_180A4 = 0xFFFFFFFF;
	Global_181DE = 0xFFFFFFFF;
	Global_181EB = 0x00000001;
	Global_189DA = 0xFFFFFFFF;
	Global_189DB = -1f;
	Global_189DC = -1f;
	Global_189DD = -1f;
	Global_189DE = -360f;
	Global_189DF = 360f;
	Global_18B61 = 0x00000001;
	Global_18B62 = 0x00000001;
	Global_18B64 = 0x00000001;
	Global_18B65 = 0x00000001;
	Global_18C6D = 0x00002710;
	Global_18C6E = 0xFFFFFFFE;
	Global_18C73 = 0xFFFFFF9D;
	StringCopy(&Global_1AEC9, "", 16);
	Global_1AECD = 0xFFFFFFFF;
	Global_1AFFF = 0xFFFFFFFF;
	Global_1B05F = 0x00000001;
	StringCopy(&Global_1B066, "NULL", 24);
	Global_1B319 = 0x000493E0;
	Global_1B40B = 0xFFFFFFFF;
	Global_1B415 = 0xFFFFFFFF;
	Global_24ACA = 0x00000001;
	Global_24BC1 = 0xFFFFFFFF;
	Global_24BC2 = 0xFFFFFFFF;
	func_88();
	func_85();
	func_71();
	func_63();
	func_55();
	func_37();
	func_36();
	func_35();
	func_23();
	func_18();
	func_14();
	func_2();
	func_1();
}

void func_1()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (0x0000000A - 0x00000001))
	{
		Global_16E56[iVar0 /*10*/] = { 0f, 0f, 0f };
		Global_16E56[iVar0 /*10*/].f_3 = { 0f, 0f, 0f };
		Global_16E56[iVar0 /*10*/].f_6 = 0f;
		Global_16E56[iVar0 /*10*/].f_7 = 0x00000107;
		Global_16E56[iVar0 /*10*/].f_8 = 0x00000000;
		iVar0++;
	}
}

void func_2()
{
	func_13();
	func_4(-449.7836f, -341.3995f, 33.5024f, -449.7836f, -341.3995f, 33.5024f, 83.1352f, 0x00000000, 0x0000000E);
	func_4(341.4144f, -1396.291f, 31.5098f, 341.4144f, -1396.291f, 31.5098f, 47.53f, 0x00000001, 0x0000000F);
	func_4(360.7675f, -583.4315f, 27.8269f, 360.7675f, -583.4315f, 27.8269f, 276.9074f, 0x00000002, 0x00000010);
	func_4(1838.495f, 3672.222f, 33.2783f, 1838.495f, 3672.222f, 33.2783f, 206.5448f, 0x00000003, 0x00000011);
	func_4(-242.2981f, 6325.233f, 31.4271f, -242.2981f, 6325.233f, 31.4271f, 335.2387f, 0x00000004, 0x00000012);
	func_3();
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (0x00000005 - 0x00000001))
	{
		if ((Global_16EFB[iVar0 /*9*/].f_3 == 0f && Global_16EFB[iVar0 /*9*/].f_3.f_1 == 0f) && Global_16EFB[iVar0 /*9*/].f_3.f_2 == 0f)
		{
		}
		iVar0++;
	}
}

void func_4(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam3 == 0x00000005)
	{
		return;
	}
	Global_16EFB[iParam3 /*9*/].f_8 = unk_0x59CF831278982FA9(vParam1, fParam2, 0x00000000);
	unk_0xC01338B5A30F4E2C(Global_16EFB[iParam3 /*9*/].f_8, 0x00000000);
	Global_16EFB[iParam3 /*9*/] = { vParam0 };
	Global_16EFB[iParam3 /*9*/].f_3 = { vParam1 };
	Global_16EFB[iParam3 /*9*/].f_6 = fParam2;
	Global_16EFB[iParam3 /*9*/].f_7 = iParam4;
	func_12(iParam4, 0x00000000, 0x00000000);
	func_11(iParam4, 0x00000000);
	func_10(iParam4, 0x00000001);
	func_9(iParam4, 0x00000000, 0x00000000);
	func_8(iParam4, 0x00000001);
	func_7(iParam4, Global_16EFB[iParam3 /*9*/]);
	func_6(iParam4, 0x00000002);
	func_5(iParam4, 0x0000003D);
}

void func_5(int iParam0, int iParam1)
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

void func_6(int iParam0, int iParam1)
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

void func_7(int iParam0, vector3 vParam1)
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

void func_8(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000007))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000007);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000007);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_9(int iParam0, bool bParam1, bool bParam2)
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

void func_10(int iParam0, bool bParam1)
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

void func_11(int iParam0, bool bParam1)
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

void func_12(int iParam0, bool bParam1, bool bParam2)
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

void func_13()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (0x00000005 - 0x00000001))
	{
		Global_16EFB[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_16EFB[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_16EFB[iVar0 /*9*/].f_6 = 0f;
		Global_16EFB[iVar0 /*9*/].f_7 = 0x00000107;
		Global_16EFB[iVar0 /*9*/].f_8 = 0x00000000;
		iVar0++;
	}
}

void func_14()
{
	func_17();
	func_16(-1093.89f, -807.0834f, 18.2612f, -1093.89f, -807.0834f, 18.2612f, 42.24f, 0x00000000, 0x00000007);
	func_16(360.8818f, -1581.608f, 28.2931f, 360.8818f, -1581.608f, 28.2931f, 23.6148f, 0x00000001, 0x00000008);
	func_16(-560.755f, -133.9789f, 37.0586f, -560.5718f, -132.7783f, 37.0586f, 210.6082f, 0x00000003, 0x0000000A);
	func_16(1856.352f, 3682.061f, 33.2672f, 1856.352f, 3682.061f, 33.2672f, 210.2006f, 0x00000004, 0x0000000B);
	func_16(-440.7429f, 6019.889f, 30.4903f, -440.7429f, 6019.889f, 30.4903f, 314.9315f, 0x00000005, 0x0000000C);
	func_16(639.1819f, 1.765f, 81.7865f, 639.1819f, 1.765f, 81.7865f, 238.0365f, 0x00000006, 0x0000000D);
	func_16(479.6391f, -976.6794f, 26.9839f, 479.6391f, -976.6794f, 26.9839f, 331.7253f, 0x00000002, 0x00000009);
	func_15();
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (0x00000007 - 0x00000001))
	{
		if ((Global_16EBB[iVar0 /*9*/].f_3 == 0f && Global_16EBB[iVar0 /*9*/].f_3.f_1 == 0f) && Global_16EBB[iVar0 /*9*/].f_3.f_2 == 0f)
		{
		}
		iVar0++;
	}
}

void func_16(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam3 == 0x00000007)
	{
		return;
	}
	Global_16EBB[iParam3 /*9*/].f_8 = unk_0x83223E433D18F8D9(vParam1, fParam2, 0x00000000);
	unk_0xA969FE11F0D97FE3(Global_16EBB[iParam3 /*9*/].f_8, 0x00000000);
	Global_16EBB[iParam3 /*9*/] = { vParam0 };
	Global_16EBB[iParam3 /*9*/].f_3 = { vParam1 };
	Global_16EBB[iParam3 /*9*/].f_6 = fParam2;
	Global_16EBB[iParam3 /*9*/].f_7 = iParam4;
	func_12(iParam4, 0x00000000, 0x00000000);
	func_11(iParam4, 0x00000000);
	func_10(iParam4, 0x00000001);
	func_9(iParam4, 0x00000000, 0x00000000);
	func_8(iParam4, 0x00000001);
	func_7(iParam4, Global_16EBB[iParam3 /*9*/]);
	func_6(iParam4, 0x00000003);
	func_5(iParam4, 0x0000003C);
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (0x00000007 - 0x00000001))
	{
		Global_16EBB[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_16EBB[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_16EBB[iVar0 /*9*/].f_6 = 0f;
		Global_16EBB[iVar0 /*9*/].f_7 = 0x00000107;
		Global_16EBB[iVar0 /*9*/].f_8 = 0x00000000;
		iVar0++;
	}
}

void func_18()
{
	func_22(0x00000000, -14.704f, -1434.696f, 30.1015f, 8f, 0xFFFFFFFF);
	func_22(0x00000001, -14.704f, -1434.696f, 30.1015f, 50f, 0xFFFFFFFF);
	func_22(0x00000002, -14.704f, -1434.696f, 30.1015f, 200f, 0xFFFFFFFF);
	func_22(0x00000003, -0.5478f, 524.7891f, 173.6276f, 200f, 0xFFFFFFFF);
	func_22(0x00000004, 488.3106f, -1313.856f, 28.2581f, 10f, 0xFFFFFFFF);
	func_22(0x00000005, -2288.718f, 360.4793f, 189.6015f, 250f, 0xFFFFFFFF);
	func_22(0x00000006, 144.9711f, -2201.784f, 3.6866f, 250f, 0x00000007);
	func_22(0x00000007, -3091.162f, 346.4283f, 6.497835f, 68.5f, 0x00000010);
	func_22(0x00000008, -1167.347f, -696.0207f, 39.3576f, 250f, 0xFFFFFFFF);
	func_22(0x00000009, -11.1495f, -1425.564f, 29.6737f, 250f, 0xFFFFFFFF);
	func_22(0x0000000A, func_21(0x000000D6, 0x00000000), 180f, 0xFFFFFFFF);
	func_22(0x0000000B, func_21(0x000000D6, 0x00000000), 500f, 0xFFFFFFFF);
	func_22(0x0000000C, -802.8486f, 182.2674f, 71.6056f, 150f, 0xFFFFFFFF);
	func_22(0x0000000D, -802.8486f, 182.2674f, 71.6056f, 250f, 0xFFFFFFFF);
	func_22(0x0000000E, -2892.93f, 3192.37f, 11.66f, 410f, 0xFFFFFFFF);
	func_22(0x0000000F, -429.5719f, 1109.416f, 326.6815f, 200f, 0xFFFFFFFF);
	func_22(0x00000010, 446.7f, 5571.8f, 781.2f, 350f, 0x00000011);
	func_22(0x00000011, -355.9662f, 5587.149f, 121.4823f, 350f, 0x00000012);
	func_22(0x00000012, 39.4849f, 5578.194f, 397.3495f, 350f, 0x00000013);
	func_22(0x00000013, -741.4f, 5595.1f, 41.7f, 350f, 0xFFFFFFFF);
	func_22(0x00000014, Global_171E2[0x00000000 /*15*/], 130f, 0xFFFFFFFF);
	func_22(0x00000015, Global_171E2[0x00000001 /*15*/], 250f, 0xFFFFFFFF);
	func_22(0x00000016, Global_171E2[0x00000001 /*15*/], 130f, 0xFFFFFFFF);
	func_22(0x00000017, 714.2042f, -964.4249f, 29.3953f, 14f, 0xFFFFFFFF);
	func_22(0x00000018, Global_171E2[0x00000003 /*15*/], 130f, 0xFFFFFFFF);
	func_22(0x00000019, 2133.353f, 4784.458f, 40.0637f, 100f, 0x0000001A);
	func_22(0x0000001A, 2116.401f, 4790.865f, 40.2022f, 100f, 0xFFFFFFFF);
	func_22(0x0000001B, func_21(0x00000044, 0x00000000), 100f, 0xFFFFFFFF);
	func_22(0x0000001C, func_21(0x00000045, 0x00000000), 100f, 0xFFFFFFFF);
	func_22(0x0000001F, func_20(0x00000000), 100f, 0x00000020);
	func_22(0x00000020, func_20(0x00000001), 100f, 0x00000021);
	func_22(0x00000021, func_20(0x00000004), 100f, 0x00000022);
	func_22(0x00000022, func_20(0x00000004), 100f, 0x00000023);
	func_22(0x00000023, func_20(0x00000005), 100f, 0x00000024);
	func_22(0x00000024, func_20(0x00000002), 100f, 0x00000025);
	func_22(0x00000025, func_20(0x00000006), 100f, 0xFFFFFFFF);
	func_22(0x00000026, func_21(0x0000004C, 0x00000000), 100f, 0xFFFFFFFF);
	func_22(0x00000027, func_21(0x0000005B, 0x00000000), 100f, 0xFFFFFFFF);
	func_22(0x00000028, func_21(0x0000005C, 0x00000000), 100f, 0xFFFFFFFF);
	func_22(0x00000029, func_21(0x0000005D, 0x00000000), 100f, 0xFFFFFFFF);
	func_22(0x0000002A, func_21(0x0000005F, 0x00000000), 100f, 0xFFFFFFFF);
	func_22(0x0000002B, func_21(0x0000005E, 0x00000000), 100f, 0xFFFFFFFF);
	func_22(0x0000002C, func_21(0x00000060, 0x00000000), 100f, 0x0000002D);
	func_22(0x0000002D, func_21(0x00000061, 0x00000000), 100f, 0xFFFFFFFF);
	func_22(0x0000002E, func_21(0x0000006B, 0x00000000), 100f, 0x0000002F);
	func_22(0x0000002F, func_21(0x0000006C, 0x00000000), 100f, 0x00000030);
	func_22(0x00000030, func_21(0x0000006D, 0x00000000), 100f, 0xFFFFFFFF);
	func_22(0x00000031, func_21(0x0000006E, 0x00000000), 100f, 0xFFFFFFFF);
	func_22(0x00000032, func_21(0x0000006F, 0x00000000), 100f, 0xFFFFFFFF);
	func_22(0x00000033, func_19(0x00000000), 100f, 0x00000034);
	func_22(0x00000034, func_19(0x00000001), 100f, 0x00000035);
	func_22(0x00000035, func_19(0x00000002), 100f, 0x00000036);
	func_22(0x00000036, func_19(0x00000003), 100f, 0x00000037);
	func_22(0x00000037, func_19(0x00000004), 100f, 0x00000038);
	func_22(0x00000038, func_19(0x00000005), 100f, 0x00000039);
	func_22(0x00000039, func_19(0x00000006), 100f, 0x0000003A);
	func_22(0x0000003A, func_19(0x00000007), 100f, 0x0000003B);
	func_22(0x0000003B, func_19(0x00000008), 100f, 0x0000003C);
	func_22(0x0000003C, func_19(0x00000009), 100f, 0x0000003D);
	func_22(0x0000003D, func_19(0x0000000A), 100f, 0x0000003E);
	func_22(0x0000003E, func_19(0x0000000B), 100f, 0x0000003F);
	func_22(0x0000003F, func_19(0x0000000C), 100f, 0xFFFFFFFF);
	func_22(0x00000040, -897f, -2708f, 13f, 100f, 0xFFFFFFFF);
	func_22(0x00000041, -1114.4f, 306.75f, 63.94f, 45f, 0xFFFFFFFF);
	func_22(0x00000042, 408.56f, -1625.22f, 28.29f, 100f, 0xFFFFFFFF);
	func_22(0x00000043, func_21(0x000000E4, 0x00000000), 100f, 0xFFFFFFFF);
	func_22(0x00000044, -837.5345f, -161.5902f, 36.7688f, 410f, 0x00000010);
	func_22(0x00000045, 237.6055f, -36.664f, 68.7304f, 410f, 0x00000010);
	func_22(0x00000046, -2194.134f, 1046.291f, 192.1094f, 410f, 0x00000010);
	func_22(0x00000047, func_21(0x000000A4, 0x00000000), 100f, 0xFFFFFFFF);
	func_22(0x00000048, -60.9565f, -1098.41f, 25.4024f, 260f, 0xFFFFFFFF);
	func_22(0x00000049, 1391.912f, -2070.792f, 50.9982f, 260f, 0xFFFFFFFF);
	func_22(0x0000004A, -45.2546f, -1097.55f, 25.4223f, 175f, 0x00000000);
	func_22(0x0000004B, 0f, 0f, 0f, 0f, 0xFFFFFFFF);
}

Vector3 func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 0x00000001:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 0x00000002:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 0x00000003:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 0x00000004:
			return -92.35f, -854.3f, 39.571f;
		
		case 0x00000005:
			return -120.92f, -976.05f, 295.49f;
		
		case 0x00000006:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 0x00000007:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 0x00000008:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 0x00000009:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 0x0000000A:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 0x0000000B:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 0x0000000C:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_20(int iParam0)
{
	if (iParam0 >= 0x00000007 || iParam0 <= 0xFFFFFFFF)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return -1939.483f, 4443.953f, 37.3474f;
		
		case 0x00000001:
			return -516.9256f, 2008.014f, 204.0998f;
		
		case 0x00000003:
			return -223.6755f, 4224.644f, 43.7304f;
		
		case 0x00000004:
			return 1606.578f, 3841.188f, 33.2931f;
		
		case 0x00000005:
			return 2037.664f, 2137.386f, 92.7095f;
		
		case 0x00000002:
			return 2996.776f, 2774.085f, 43.26f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_21(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0f, 0f, 0f;
	}
	return Global_79AA[iVar0 /*23*/][iParam1 /*3*/];
}

void func_22(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (iParam0 == iParam3)
	{
		return;
	}
	if (iParam0 == 0x0000004C)
	{
		return;
	}
	if (iParam3 == 0x0000004C)
	{
		return;
	}
	Global_A1D8[iParam0 /*5*/] = { vParam1 };
	Global_A1D8[iParam0 /*5*/].f_3 = fParam2;
	Global_A1D8[iParam0 /*5*/].f_4 = iParam3;
}

void func_23()
{
	func_33();
	func_30();
	func_24();
}

void func_24()
{
	func_29(0x00000001, 0x00000001, 0x0000000E, 0x00000001);
	func_29(0x0000000A, 0x00000001, 0x0000000C, 0x00000000);
	func_29(0x0000000B, 0x00000001, 0x0000000C, 0x00000000);
	func_29(0x00000003, 0x00000001, 0x00000007, 0x00000000);
	func_29(0x00000002, 0x00000001, 0x00000008, 0x00000000);
	func_29(0x00000004, 0x00000001, 0x00000007, 0x00000001);
	func_29(0x00000005, 0x00000001, 0x00000006, 0x00000000);
	func_29(0x00000006, 0x00000002, 0x0000000F, 0x00000001);
	func_29(0x00000007, 0x00000002, 0x0000000A, 0x00000001);
	func_29(0x0000000C, 0x00000002, 0x00000004, 0x00000000);
	func_29(0x00000008, 0x00000003, 0x0000000E, 0x00000001);
	func_29(0x0000000D, 0x00000003, 0x00000005, 0x00000000);
	func_29(0x00000009, 0x00000003, 0x00000008, 0x00000001);
	func_28(0x00000001, joaat("hc_gunman"), 0x00000004, 0x00000001);
	func_28(0x0000000A, joaat("hc_gunman"), 0x00000005, 0x00000002);
	func_28(0x0000000B, joaat("hc_gunman"), 0x00000006, 0x00000001);
	func_28(0x00000002, joaat("hc_gunman"), 0x00000001, 0x00000001);
	func_28(0x00000003, joaat("hc_gunman"), 0x00000003, 0x00000000);
	func_28(0x00000004, joaat("hc_gunman"), 0x00000000, 0x00000000);
	func_28(0x00000005, joaat("hc_gunman"), 0x00000002, 0x00000002);
	func_28(0x00000006, joaat("hc_hacker"), 0x00000001, 0x00000001);
	func_28(0x00000007, joaat("hc_hacker"), 0x00000000, 0x00000000);
	func_28(0x0000000C, joaat("hc_hacker"), 0x00000002, 0x00000003);
	func_28(0x00000008, joaat("hc_driver"), 0x00000000, 0x00000001);
	func_28(0x0000000D, joaat("hc_driver"), 0x00000002, 0x00000004);
	func_28(0x00000009, joaat("hc_driver"), 0x00000001, 0x00000000);
	func_25(0x00000001, 0x00000002, 0x000002BC, 0x0000004F, 0x00000053, 0x0000004D);
	func_25(0x0000000A, 0x00000002, 0x00000320, 0x0000005B, 0x00000059, 0x00000047);
	func_25(0x0000000B, 0x00000002, 0x000002A3, 0x00000056, 0x0000004E, 0x0000005A);
	func_25(0x00000002, 0x00000000, 0x00000113, 0x00000028, 0x0000001C, 0x00000034);
	func_25(0x00000003, 0x00000000, 0x0000012C, 0x00000023, 0x00000020, 0x00000030);
	func_25(0x00000004, 0x00000000, 0x000000FA, 0x00000027, 0x00000028, 0x0000002C);
	func_25(0x00000005, 0x00000000, 0x000000C8, 0x0000002A, 0x00000023, 0x0000002E);
	func_25(0x00000006, 0x00000002, 0x00000055, 0x0000004D, 0x0000005D, 0x00000000);
	func_25(0x00000007, 0x00000001, 0x0000003B, 0x0000003B, 0x0000002B, 0x00000000);
	func_25(0x0000000C, 0x00000000, 0x00000024, 0x0000002D, 0x00000027, 0x00000000);
	func_25(0x00000008, 0x00000002, 0x00000048, 0x0000005B, 0x00000056, 0x00000000);
	func_25(0x0000000D, 0x00000002, 0x0000005E, 0x00000053, 0x00000044, 0x00000000);
	func_25(0x00000009, 0x00000000, 0x0000003C, 0x00000036, 0x00000018, 0x00000000);
}

void func_25(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Global_1B416.f_1.f_49[iParam0 /*3*/] = iParam1;
	func_26(iParam0, 0x00000000, iParam2);
	func_26(iParam0, 0x00000001, iParam3);
	func_26(iParam0, 0x00000002, iParam4);
	func_26(iParam0, 0x00000003, iParam5);
}

void func_26(int iParam0, int iParam1, int iParam2)
{
	func_27(iParam1, iParam2, &(Global_1B416.f_1.f_49[iParam0 /*3*/].f_1), &(Global_1B416.f_1.f_49[iParam0 /*3*/].f_2));
}

void func_27(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam2 = (*uParam2 - *uParam2 & 0x00007FFF);
			*uParam2 = (*uParam2 || iParam1);
			return;
			break;
		
		case 0x00000001:
			*uParam2 = (*uParam2 - *uParam2 & 0x3FFF8000);
			*uParam2 = (*uParam2 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000F));
			return;
			break;
		
		case 0x00000002:
			*uParam3 = (*uParam3 - *uParam3 & 0x00007FFF);
			*uParam3 = (*uParam3 || iParam1);
			return;
			break;
		
		case 0x00000003:
			*uParam3 = (*uParam3 - *uParam3 & 0x3FFF8000);
			*uParam3 = (*uParam3 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000F));
			return;
			break;
	}
}

void func_28(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_1719B[iParam0 /*5*/].f_4 = iParam1;
	Global_1719B[iParam0 /*5*/].f_2 = iParam2;
	Global_1719B[iParam0 /*5*/].f_3 = iParam3;
}

void func_29(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1719B[iParam0 /*5*/] = iParam1;
	Global_1719B[iParam0 /*5*/].f_1 = iParam2;
	if (bParam3)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_74), iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_74), iParam0);
	}
	unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_76), iParam0);
}

void func_30()
{
	func_32(0x00000001, 0x00000003, 0x00000001, 0x00000002, 0x00000000, 0x00000000);
	func_32(0x00000002, 0x00000003, 0x00000001, 0x00000002, 0x00000000, 0x00000000);
	func_32(0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	func_32(0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	func_32(0x00000005, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	func_32(0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	func_32(0x00000007, 0x00000002, 0x00000001, 0x00000003, 0x00000000, 0x00000000);
	func_32(0x00000008, 0x00000001, 0x00000001, 0x00000003, 0x00000003, 0x00000002);
	func_32(0x00000009, 0x00000003, 0x00000003, 0x00000001, 0x00000001, 0x00000000);
	func_31(0x00000001, "JHFP2", "JHFP5", "JHFP7", "JHFP8", "JHFP9a");
	func_31(0x00000002, "JHFP3", "JHFP6", "JHFP7", "JHFP8", "JHFP9b");
	func_31(0x00000003, "DHP2", "", "", "", "DHP8A");
	func_31(0x00000004, "DHP3", "", "", "", "DHP8A");
	func_31(0x00000005, "", "", "", "", "");
	func_31(0x00000006, "AHP1", "", "", "", "");
	func_31(0x00000007, "AHP2", "AHP4", "AHP6", "AHP5", "");
	func_31(0x00000008, "FHP1", "FHP6", "FHP7A", "FHP7B", "FHP2");
	func_31(0x00000009, "FHP3", "FHP8A", "FHP8B", "", "FHP4");
}

void func_31(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	struct<2> Var4;
	
	StringCopy(&Var0, sParam1, 8);
	StringCopy(&Var1, sParam2, 8);
	StringCopy(&Var2, sParam3, 8);
	StringCopy(&Var3, sParam4, 8);
	StringCopy(&Var4, sParam5, 8);
	Global_17235[iParam0 /*19*/].f_7[0x00000000 /*2*/] = { Var0 };
	Global_17235[iParam0 /*19*/].f_7[0x00000001 /*2*/] = { Var1 };
	Global_17235[iParam0 /*19*/].f_7[0x00000002 /*2*/] = { Var2 };
	Global_17235[iParam0 /*19*/].f_7[0x00000003 /*2*/] = { Var3 };
	Global_17235[iParam0 /*19*/].f_7[0x00000004 /*2*/] = { Var4 };
}

void func_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Global_17235[iParam0 /*19*/].f_1[0x00000000] = iParam1;
	Global_17235[iParam0 /*19*/].f_1[0x00000001] = iParam2;
	Global_17235[iParam0 /*19*/].f_1[0x00000002] = iParam3;
	Global_17235[iParam0 /*19*/].f_1[0x00000003] = iParam4;
	Global_17235[iParam0 /*19*/].f_1[0x00000004] = iParam5;
	if (iParam1 == 0x00000000)
	{
		Global_17235[iParam0 /*19*/] = 0x00000000;
	}
	else if (iParam2 == 0x00000000)
	{
		Global_17235[iParam0 /*19*/] = 0x00000001;
	}
	else if (iParam3 == 0x00000000)
	{
		Global_17235[iParam0 /*19*/] = 0x00000002;
	}
	else if (iParam4 == 0x00000000)
	{
		Global_17235[iParam0 /*19*/] = 0x00000003;
	}
	else if (iParam5 == 0x00000000)
	{
		Global_17235[iParam0 /*19*/] = 0x00000004;
	}
	else
	{
		Global_17235[iParam0 /*19*/] = 0x00000005;
	}
}

void func_33()
{
	func_34(0x00000000, 97.6772f, -1290.739f, 28.2688f, 99.083f, -1290.025f, 29.829f, 300f, "strp3off");
	func_34(0x00000001, 706.4884f, -964.5811f, 29.4334f, 705.301f, -963.586f, 30.562f, 45f, "V_35_OfficeRm");
	func_34(0x00000002, 1398.795f, 3603.776f, 37.9419f, 1399.308f, 3602.098f, 39.472f, 200.13f, "V_39_UpperRm2");
	func_34(0x00000003, -1157.068f, -1524.04f, 9.6346f, -1156.341f, -1525.126f, 11.275f, 215f, "rm_Lounge");
}

void func_34(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3, char* sParam4)
{
	Global_171E2[iParam0 /*15*/] = { vParam1 };
	Global_171E2[iParam0 /*15*/].f_3 = { vParam2 };
	Global_171E2[iParam0 /*15*/].f_6 = fParam3;
	StringCopy(&(Global_171E2[iParam0 /*15*/].f_7), sParam4, 32);
}

void func_35()
{
	Global_24B71.f_1 = 0x00000000;
	Global_24B71.f_2 = 0x00000000;
	Global_24B71.f_3 = 0x00000002;
	Global_24B71.f_4 = 0x00000049;
	Global_24B71.f_5 = 0x00000000;
	Global_24B71.f_6 = 0x00000006;
	Global_24B71.f_7 = joaat("mp_m_freemode_01");
	Global_24B71.f_8 = joaat("mp_f_freemode_01");
	Global_24B71.f_9 = joaat("sentinel2");
	Global_24B71.f_A = joaat("u_m_m_filmdirector");
	StringCopy(&(Global_24B71.f_C), "CNC_TN_S_01", 16);
	StringCopy(&(Global_24B71.f_10), "CNC_TN_S_01_CAP", 16);
	StringCopy(&(Global_24B71.f_14), "CNC_TN_S_02", 16);
	StringCopy(&(Global_24B71.f_18), "CNC_TN_S_02_CAP", 16);
	StringCopy(&(Global_24B71.f_1C), "CNC_TN_S_05", 16);
	StringCopy(&(Global_24B71.f_20), "CNC_TN_S_05_CAP", 16);
	StringCopy(&(Global_24B71.f_24), "CNC_TN_S_03", 16);
	StringCopy(&(Global_24B71.f_28), "CNC_TN_S_03_CAP", 16);
	StringCopy(&(Global_24B71.f_2C), "CNC_TN_S_06", 16);
	StringCopy(&(Global_24B71.f_30), "CNC_TN_S_06_CAP", 16);
	StringCopy(&(Global_24B71.f_34), "CNC_TN_S_04", 16);
	StringCopy(&(Global_24B71.f_38), "CNC_TN_S_04_CAP", 16);
	StringCopy(&(Global_24B71.f_3C), "", 16);
	StringCopy(&(Global_24B71.f_40), "img_radar_gang_families", 32);
	StringCopy(&(Global_24B71.f_48), "", 16);
	StringCopy(&(Global_24B71.f_4C), "nothing", 16);
	Global_24B21.f_1 = 0x00000001;
	Global_24B21.f_2 = 0x00000000;
	Global_24B21.f_3 = 0x00000002;
	Global_24B21.f_4 = 0x00000049;
	Global_24B21.f_5 = 0x00000000;
	Global_24B21.f_6 = 0x00000006;
	Global_24B21.f_7 = joaat("mp_m_freemode_01");
	Global_24B21.f_8 = joaat("mp_f_freemode_01");
	Global_24B21.f_9 = joaat("sentinel2");
	Global_24B21.f_A = joaat("u_m_m_filmdirector");
	StringCopy(&(Global_24B21.f_C), "CNC_TN_F_01", 16);
	StringCopy(&(Global_24B21.f_10), "CNC_TN_F_01_CAP", 16);
	StringCopy(&(Global_24B21.f_14), "CNC_TN_F_02", 16);
	StringCopy(&(Global_24B21.f_18), "CNC_TN_F_02_CAP", 16);
	StringCopy(&(Global_24B21.f_1C), "CNC_TN_F_05", 16);
	StringCopy(&(Global_24B21.f_20), "CNC_TN_F_05_CAP", 16);
	StringCopy(&(Global_24B21.f_24), "CNC_TN_F_03", 16);
	StringCopy(&(Global_24B21.f_28), "CNC_TN_F_03_CAP", 16);
	StringCopy(&(Global_24B21.f_2C), "CNC_TN_F_06", 16);
	StringCopy(&(Global_24B21.f_30), "CNC_TN_F_06_CAP", 16);
	StringCopy(&(Global_24B21.f_34), "CNC_TN_F_04", 16);
	StringCopy(&(Global_24B21.f_38), "CNC_TN_F_04_CAP", 16);
	StringCopy(&(Global_24B21.f_3C), "", 16);
	StringCopy(&(Global_24B21.f_40), "img_radar_gang_families", 32);
	StringCopy(&(Global_24B21.f_48), "", 16);
	StringCopy(&(Global_24B21.f_4C), "nothing", 16);
}

void func_36()
{
	Global_24B20 = unk_0xFBD08BECC9B87937(114.64f, -1290.34f, 29.68f);
}

void func_37()
{
	func_54();
	func_46();
	func_42();
	func_41();
	func_40();
	func_39();
	Global_181DD = 0x00000000;
	Global_16AF7 = 0xFFFFFFFF;
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000011);
	Global_181DB = 0x00000000;
	unk_0x65C5EBCA17A891FC(0x00000000);
	unk_0x4DB69487E1A9EE2A(0x00000000);
	unk_0x67E5ECB8FD7F5018(0x00000001);
	unk_0xD99B71B9E48EB0E6(0x00000001);
	unk_0x2C84016B4A95F6BA(0x00000001);
	func_38(0x00000000);
}

void func_38(int iParam0)
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

void func_39()
{
	Global_12C3E = { 0f, 0f, 0f };
	Global_12C41 = 0f;
	Global_181B8.f_15 = 0x00000091;
}

void func_40()
{
	StringCopy(&Global_12C36, "", 16);
	StringCopy(&Global_12C3A, "", 16);
}

void func_41()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000006)
	{
		Global_181B8.f_16[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_42()
{
	Global_181B8 = 0x0000000D;
	Global_181B8.f_1 = 0xFFFFFFFF;
	Global_181B8.f_2 = 0x00000000;
	Global_181B8.f_1E = 0f;
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000019);
	Global_181DA = 0x00000000;
	func_45(0x00000000);
	func_44();
	func_43();
	Global_181B8.f_12 = 0xFFFFFFFF;
	Global_181B8.f_13 = 0xFFFFFFFF;
}

void func_43()
{
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000016);
	unk_0x0674E58A79778E99(&(Global_181B8.f_14), 0x00000008);
}

void func_44()
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

void func_45(int iParam0)
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

void func_46()
{
	func_47(&Global_19AE3);
}

void func_47(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 0x00000091;
	func_53(&(uParam0->f_1));
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
		func_52(&(uParam0->f_19[0x00000000 /*295*/][iVar1 /*98*/]));
		func_52(&(uParam0->f_19[0x00000001 /*295*/][iVar1 /*98*/]));
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
	func_51(&(uParam0->f_B44));
	func_49(&(uParam0->f_B4A));
	func_48(&(uParam0->f_BA4));
}

void func_48(var uParam0)
{
	*uParam0 = 0xFFFFFFFF;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
}

void func_49(var uParam0)
{
	func_50(&(uParam0->f_C));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0x00000000;
	uParam0->f_9 = 0x00000000;
}

void func_50(var uParam0)
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

void func_51(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0xFFFFFFFF;
}

void func_52(var uParam0)
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

void func_53(var uParam0)
{
	*uParam0 = 0xFFFFFFF1;
}

void func_54()
{
	StringCopy(&Global_18F33, "", 32);
	func_47(&Global_18F3B);
}

void func_55()
{
	func_61();
	func_59();
	func_57();
	func_56();
	Global_A663 = 0x00000000;
	Global_A662 = 0x00000000;
	Global_A573 = 0x00000000;
	unk_0xCB0CD9B929EB37B9("drunk");
}

void func_56()
{
	Global_A642 = 0x00000000;
	Global_A643 = 0x00000000;
	Global_A644 = 0x00000000;
	Global_A645 = 0x00007530;
	Global_A646 = 0f;
	Global_A648 = 0f;
	Global_A647 = 0f;
	Global_A649 = 0f;
	StringCopy(&Global_A64A, "", 16);
}

void func_57()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		func_58(iVar0);
		iVar0++;
	}
}

void func_58(int iParam0)
{
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000010)
	{
		return;
	}
	Global_A5E0[iParam0 /*6*/] = 0xFFFFFFFF;
	Global_A5E0[iParam0 /*6*/].f_1 = 0xFFFFFFFF;
	Global_A5E0[iParam0 /*6*/].f_2 = 0x00000006;
	Global_A5E0[iParam0 /*6*/].f_3 = 0x00000000;
	Global_A5E0[iParam0 /*6*/].f_4 = 0x00000000;
}

void func_59()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		func_60(iVar0);
		iVar0++;
	}
}

void func_60(int iParam0)
{
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000010)
	{
		return;
	}
	Global_A58F[iParam0 /*5*/] = 0xFFFFFFFF;
	Global_A58F[iParam0 /*5*/].f_1 = 0x00000000;
	Global_A58F[iParam0 /*5*/].f_2 = 0xFFFFFFFF;
	Global_A58F[iParam0 /*5*/].f_3 = 0x00000000;
	Global_A58F[iParam0 /*5*/].f_4 = 0x00000000;
}

void func_61()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		func_62(iVar0);
		iVar0++;
	}
}

void func_62(int iParam0)
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

void func_63()
{
	func_66();
	func_65(0x00000042, "agency_heist1", "AH1", 0x000000E6, 0x00000001, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x00002000);
	func_65(0x00000043, "agency_heist2", "AH2", 0x000000E6, 0x00000002, 0x00000002, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000008);
	func_65(0x00000044, "agency_prep1", "AHP1", 0x000000E7, 0x00000003, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x0001A840);
	func_65(0x00000045, "agency_heist3A", "AH3a", 0x000000E8, 0x00000001, 0x00000001, 0x00000014, 0x00000015, 0x08006100);
	func_65(0x00000046, "agency_heist3B", "AH3b", 0x000000E9, 0x00000003, 0x00000001, 0x00000000, 0x00000003, 0x08006000);
	func_65(0x00000000, "armenian1", "ARM1", 0x000000A2, 0x00000002, 0x0000000A, 0xFFFFFFFF, 0xFFFFFFFF, 0x000E0000);
	func_65(0x00000001, "armenian2", "ARM2", 0x000000A2, 0x00000002, 0x0000000A, 0xFFFFFFFF, 0xFFFFFFFF, 0x00002000);
	func_65(0x00000002, "armenian3", "ARM3", 0x000000A3, 0x00000002, 0x00000032, 0x00000008, 0x00000012, 0x00902000);
	func_65(0x00000003, "Assassin_Valet", "ASS1", 0x000000A4, 0x00000002, 0x00000002, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
	func_65(0x00000004, "Assassin_Multi", "ASS2", 0x000000A5, 0x00000002, 0x00000002, 0x0000000A, 0x00000013, 0x00000000);
	func_65(0x00000005, "Assassin_Hooker", "ASS3", 0x000000A6, 0x00000002, 0x00000002, 0x00000013, 0x00000006, 0x00000000);
	func_65(0x00000006, "Assassin_Bus", "ASS4", 0x000000A7, 0x00000002, 0x00000002, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
	func_65(0x00000007, "Assassin_Construction", "ASS5", 0x000000A8, 0x00000002, 0x00000002, 0x00000007, 0x00000014, 0x00000000);
	func_65(0x00000008, "carsteal1", "CAR1", 0x000000AB, 0x00000007, 0x00000007, 0x00000007, 0x00000014, 0x00002000);
	func_65(0x00000009, "carsteal2", "CAR2", 0x000000AC, 0x00000006, 0x00000006, 0x00000013, 0x00000004, 0x00002000);
	func_65(0x0000000A, "carsteal3", "CAR3", 0x000000AD, 0x00000002, 0x00000002, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
	func_65(0x0000000B, "carsteal4", "CAR4", 0x000000AE, 0x00000006, 0x0000000E, 0xFFFFFFFF, 0xFFFFFFFF, 0x01000000);
	func_65(0x0000000C, "chinese1", "CHN1", 0x000000AF, 0x00000004, 0x00000004, 0xFFFFFFFF, 0xFFFFFFFF, 0x00102000);
	func_65(0x0000000D, "chinese2", "CHN2", 0x000000B0, 0x00000004, 0x00000004, 0xFFFFFFFF, 0xFFFFFFFF, 0x20002000);
	func_64(0x0000000D, 0x00000004);
	func_65(0x00000047, "docks_setup", "DH1", 0x000000DE, 0x00000004, 0x00000004, 0x00000005, 0x00000006, 0x00102000);
	func_65(0x00000048, "docks_prep1", "DHP1", 0x000000DF, 0x00000004, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x0000A000);
	func_65(0x00000049, "docks_prep2B", "DHP2B", 0x000000E0, 0x00000004, 0x00000004, 0xFFFFFFFF, 0xFFFFFFFF, 0x0000A040);
	func_65(0x0000004A, "docks_heistA", "DH2A", 0x000000E1, 0x00000007, 0x00000007, 0x00000014, 0x00000003, 0x00106000);
	func_65(0x0000004B, "docks_heistB", "DH2B", 0x000000E2, 0x00000007, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x00106000);
	func_65(0x0000000E, "exile1", "EXL1", 0x000000B1, 0x00000002, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
	func_65(0x0000000F, "exile2", "EXL2", 0x000000B2, 0x00000005, 0x00000003, 0x00000014, 0x00000004, 0x00000000);
	func_65(0x00000010, "exile3", "EXL3", 0x000000B3, 0x00000001, 0x00000005, 0x00000009, 0x0000000A, 0x00000000);
	func_65(0x00000011, "family1", "FAM1", 0x000000B4, 0x00000003, 0x00000031, 0x00000009, 0x00000011, 0x00000000);
	func_65(0x00000012, "family2", "FAM2", 0x000000B5, 0x00000001, 0x00000011, 0x00000007, 0x00000011, 0x00002000);
	func_65(0x00000013, "family3", "FAM3", 0x000000B6, 0x00000003, 0x00000023, 0xFFFFFFFF, 0xFFFFFFFF, 0x10002000);
	func_65(0x00000014, "family4", "FAM4", 0x000000B7, 0x00000005, 0x00000035, 0x00000007, 0x00000012, 0x01000000);
	func_65(0x00000015, "family5", "FAM5", 0x000000B8, 0x00000001, 0x00000031, 0x0000000A, 0x00000012, 0x00000000);
	func_65(0x00000016, "family6", "FAM6", 0x000000B9, 0x00000001, 0x00000031, 0x00000007, 0x00000012, 0x00000000);
	func_65(0x00000017, "finale_intro", "FINI", 0x000000C5, 0x00000002, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x000000F9);
	func_65(0x00000018, "finaleA", "FINA", 0x000000C6, 0x00000002, 0x00000007, 0x00000016, 0x00000017, 0x00000001);
	func_65(0x00000019, "finaleB", "FINB", 0x000000C7, 0x00000002, 0x00000007, 0x00000000, 0x00000001, 0x00000001);
	func_65(0x0000001A, "finaleC1", "FINC1", 0x000000C8, 0x00000002, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x000020C1);
	func_65(0x0000001B, "finaleC2", "FINC2", 0x000000C8, 0x00000002, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x000C0029);
	func_65(0x0000001C, "finale_credits", "FINC", 0x000000C5, 0x00000007, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x000C00EF);
	func_65(0x0000004C, "finale_heist1", "FH1", 0x000000EA, 0x00000007, 0x00000001, 0x00000008, 0x00000011, 0x00002000);
	func_65(0x0000004D, "finale_heist2_intro", "FH2I", 0x000000F1, 0x00000007, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x00002037);
	func_65(0x0000004E, "finale_heist_prepA", "FHPRA", 0x000000EB, 0x00000007, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x0001A000);
	func_65(0x0000004F, "finale_heist_prepB", "FHPRB", 0x000000EC, 0x00000007, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x0000A000);
	func_65(0x00000050, "finale_heist_prepC", "FHPC1", 0x000000ED, 0x00000007, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x0001A800);
	func_65(0x00000051, "finale_heist_prepC", "FHPC2", 0x000000EE, 0x00000007, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x0001A800);
	func_65(0x00000052, "finale_heist_prepC", "FHPC3", 0x000000EF, 0x00000007, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x0001A800);
	func_65(0x00000053, "finale_heist_prepD", "FHPD", 0x000000F0, 0x00000007, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x0000A000);
	func_65(0x00000054, "finale_heist2A", "FH2A", 0x000000F2, 0x00000007, 0x00000001, 0x00000007, 0x00000008, 0x00106000);
	func_65(0x00000055, "finale_heist2B", "FH2B", 0x000000F2, 0x00000007, 0x00000001, 0x00000007, 0x0000000E, 0x00106000);
	func_65(0x0000001D, "fbi1", "FIB1", 0x000000BA, 0x00000001, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x00002000);
	func_65(0x0000001E, "fbi2", "FIB2", 0x000000BB, 0x00000001, 0x00000003, 0x00000009, 0x00000012, 0x00000000);
	func_65(0x0000001F, "fbi3", "FIB3", 0x000000BC, 0x00000005, 0x00000004, 0xFFFFFFFF, 0xFFFFFFFF, 0x00200000);
	func_65(0x00000020, "fbi4_intro", "FIB4I", 0x000000BD, 0x00000007, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x000120F0);
	func_65(0x00000021, "fbi4_prep1", "FB4P1", 0x000000BE, 0x00000007, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x0000A000);
	func_65(0x00000022, "fbi4_prep2", "FB4P2", 0x000000BF, 0x00000007, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x0001A000);
	func_65(0x00000023, "fbi4_prep3", "FB4P3", 0x000000C0, 0x00000007, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x0000A0E0);
	func_65(0x00000024, "fbi4_prep4", "FB4P4", 0x000000C1, 0x00000007, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x0001A000);
	func_65(0x00000025, "fbi4_prep5", "FB4P5", 0x000000C2, 0x00000007, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x0001A000);
	func_65(0x00000026, "fbi4", "FIB4", 0x000000C3, 0x00000007, 0x00000007, 0xFFFFFFFF, 0xFFFFFFFF, 0x00002000);
	func_65(0x00000027, "fbi5A", "FIB5", 0x000000C4, 0x00000007, 0x00000007, 0x00000015, 0x00000017, 0x00002000);
	func_65(0x00000028, "franklin0", "FRA0", 0x000000C9, 0x00000002, 0x0000000A, 0x00000009, 0x00000014, 0x00000000);
	func_65(0x00000029, "franklin1", "FRA1", 0x000000CA, 0x00000006, 0x0000000E, 0xFFFFFFFF, 0xFFFFFFFF, 0x00102000);
	func_65(0x0000002A, "franklin2", "FRA2", 0x000000CB, 0x00000002, 0x0000000F, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000);
	func_65(0x00000056, "jewelry_setup1", "JH1", 0x000000D9, 0x00000001, 0x00000001, 0x00000009, 0x00000011, 0x00002100);
	func_65(0x00000057, "jewelry_prep1A", "JHP1A", 0x000000DA, 0x00000001, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x0000A000);
	func_65(0x00000058, "jewelry_prep2A", "JHP2A", 0x000000DB, 0x00000001, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x0000A040);
	func_65(0x00000059, "jewelry_prep1B", "JHP1B", 0x000000DC, 0x00000001, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x0000A000);
	func_65(0x0000005A, "jewelry_heist", "JH2", 0x000000DD, 0x00000003, 0x00000001, 0x00000009, 0x00000013, 0x000E4000);
	func_65(0x0000002B, "lamar1", "LM1", 0x000000CD, 0x00000002, 0x0000000A, 0x00000013, 0x00000015, 0x00000000);
	func_65(0x0000002C, "lester1", "LS1", 0x000000CE, 0x00000001, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x00002000);
	func_65(0x0000002D, "martin1", "MAR1", 0x000000CF, 0x00000005, 0x00000005, 0x00000008, 0x00000014, 0x40402000);
	func_65(0x0000002E, "michael1", "MIC1", 0x000000D0, 0x00000005, 0x00000005, 0xFFFFFFFF, 0xFFFFFFFF, 0x10002000);
	func_65(0x0000002F, "michael2", "MIC2", 0x000000D1, 0x00000006, 0x00000002, 0xFFFFFFFF, 0xFFFFFFFF, 0x00002000);
	func_65(0x00000030, "michael3", "MIC3", 0x000000D2, 0x00000001, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x03002000);
	func_65(0x00000031, "michael4", "MIC4", 0x000000D3, 0x00000001, 0x00000031, 0x00000015, 0x00000003, 0x00000001);
	func_65(0x00000032, "me_amanda1", "MEA1", 0x000000D2, 0x00000001, 0x00000021, 0xFFFFFFFF, 0xFFFFFFFF, 0x00200040);
	func_65(0x00000033, "me_jimmy1", "MEJ1", 0x000000D2, 0x00000001, 0x00000011, 0xFFFFFFFF, 0xFFFFFFFF, 0x00200040);
	func_65(0x00000034, "me_tracey1", "MET1", 0x000000D2, 0x00000001, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x00200040);
	func_65(0x00000035, "prologue1", "PRO1", 0x00000107, 0x00000005, 0x00000005, 0xFFFFFFFF, 0xFFFFFFFF, 0x000E0009);
	func_65(0x0000005B, "rural_bank_setup", "RH1", 0x000000E4, 0x00000005, 0x00000005, 0x00000007, 0x00000011, 0x00002000);
	func_65(0x0000005C, "rural_bank_prep1", "RHP1", 0x000000E5, 0x00000005, 0x00000005, 0xFFFFFFFF, 0xFFFFFFFF, 0x0001A000);
	func_65(0x0000005D, "rural_bank_heist", "RH2", 0x000000E3, 0x00000007, 0x00000007, 0x00000007, 0x00000011, 0x08004000);
	func_65(0x00000036, "drf1", "DRF1", 0x0000005D, 0x00000001, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x00001076);
	func_65(0x00000037, "drf2", "DRF2", 0x0000005D, 0x00000001, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x00001076);
	func_65(0x00000038, "drf3", "DRF3", 0x0000005D, 0x00000001, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x0028107E);
	func_65(0x00000039, "drf4", "DRF4", 0x0000005D, 0x00000001, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x0028107E);
	func_65(0x0000003A, "drf5", "DRF5", 0x0000005D, 0x00000001, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x00001076);
	func_65(0x0000003B, "solomon1", "SOL1", 0x000000D4, 0x00000001, 0x00000003, 0xFFFFFFFF, 0xFFFFFFFF, 0x10002000);
	func_65(0x0000003C, "solomon2", "SOL2", 0x000000D5, 0x00000001, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF, 0x00002000);
	func_65(0x0000003D, "solomon3", "SOL3", 0x000000D4, 0x00000001, 0x00000004, 0x00000007, 0x00000012, 0x10002000);
	func_65(0x0000003E, "trevor1", "TRV1", 0x000000D7, 0x00000003, 0x00000004, 0x0000000D, 0x0000000F, 0x00022000);
	func_65(0x0000003F, "trevor2", "TRV2", 0x000000D6, 0x00000004, 0x00000004, 0x00000000, 0x00000002, 0x40002000);
	func_65(0x00000040, "trevor3", "TRV3", 0x000000D6, 0x00000004, 0x00000004, 0xFFFFFFFF, 0xFFFFFFFF, 0x00002000);
	func_65(0x00000041, "trevor4", "TRV4", 0x000000D8, 0x00000004, 0x00000004, 0xFFFFFFFF, 0xFFFFFFFF, 0x00012000);
}

void func_64(int iParam0, int iParam1)
{
	Global_280007[iParam0] = iParam1;
}

void func_65(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_15DBC[iParam0 /*34*/]), sParam1, 24);
	Global_15DBC[iParam0 /*34*/].f_6 = unk_0x12AB0310C2281427(sParam1);
	StringCopy(&(Global_15DBC[iParam0 /*34*/].f_8), sParam2, 8);
	Global_15DBC[iParam0 /*34*/].f_B = iParam4;
	Global_15DBC[iParam0 /*34*/].f_C = iParam5;
	Global_15DBC[iParam0 /*34*/].f_A = iParam3;
	Global_15DBC[iParam0 /*34*/].f_D = iParam6;
	Global_15DBC[iParam0 /*34*/].f_E = iParam7;
	Global_15DBC[iParam0 /*34*/].f_F = iParam8;
}

void func_66()
{
	func_70(0x000000A2, -34.0914f, -1095.22f, 25.4223f, "B_SIM", 0x00000125);
	func_70(0x000000A3, -42.2568f, -1110.583f, 25.4374f, "B_SIM", 0x00000125);
	func_70(0x000000A4, -1508.814f, -937.4672f, 8.5421f, "", 0x0000004D);
	func_70(0x000000A5, -700.1855f, -917.9558f, 18.2143f, "B_ASSA", 0x0000004D);
	func_70(0x000000A6, 213.7994f, -853.9389f, 29.3929f, "B_ASSA", 0x0000004D);
	func_70(0x000000A7, -26.1203f, -109.7468f, 56.0799f, "B_ASSA", 0x0000004D);
	func_70(0x000000A8, 809.2905f, -1076.219f, 27.6448f, "B_ASSA", 0x0000004D);
	func_70(0x000000A9, -829f, 171f, 70f, "", 0x00000124);
	func_70(0x000000AA, 1370.906f, 1148.005f, 112.7591f, "", 0x00000124);
	func_70(0x000000AB, 117.5264f, -400.6035f, 40.26341f, "", 0x00000163);
	func_70(0x000000AD, -1085.673f, -428.6646f, 35.6269f, "", 0x00000163);
	func_70(0x000000AE, -63.2434f, -1457.603f, 31.1162f, "", 0x00000163);
	func_70(0x000000AF, 1985.307f, 3052.952f, 46.2151f, "", 0x00000059);
	func_70(0x000000B0, 1989.176f, 3053.001f, 46.2153f, "", 0x00000059);
	func_70(0x000000B1, -817.3581f, 177.8541f, 71.2278f, "", 0x0000004E);
	func_70(0x000000B5, -823.213f, 180.6198f, 70.62778f, "", 0x0000004E);
	func_70(0x000000B8, -824.2567f, 181.3005f, 70.6578f, "", 0x0000004E);
	func_70(0x000000B9, -824.2567f, 181.3005f, 70.6578f, "", 0x0000004E);
	func_70(0x000000BA, -436.8515f, 1059.04f, 326.6815f, "B_FIB", 0x0000006A);
	func_70(0x000000BB, 58.88337f, -752.702f, 43.22002f, "B_FIB", 0x0000006A);
	func_70(0x000000BC, 133.159f, -2198.151f, 5.1702f, "B_FIB", 0x0000006A);
	func_70(0x000000BD, 1391.912f, -2070.792f, 50.9982f, "B_FIB", 0x0000006A);
	func_70(0x000000BE, 1244.338f, -339.3197f, 68.0823f, "B_FIB", 0x0000016B);
	func_70(0x000000BF, -413.2349f, -2182.086f, 9.3184f, "B_FIB", 0x0000016B);
	func_70(0x000000C0, 1115.422f, -1235.797f, 19.8746f, "B_FIB", 0x0000016B);
	func_70(0x000000C1, -1335.314f, -1277.943f, 3.8649f, "B_FIB", 0x0000016B);
	func_70(0x000000C2, 16.6176f, -1116.313f, 28.7968f, "B_FIB", 0x0000016B);
	func_70(0x000000C5, -1.9234f, 532.0394f, 174.3424f, "", 0x00000058);
	func_70(0x000000C6, 1330.411f, -2553.661f, 45.7824f, "B_FINA", 0x0000004F);
	func_70(0x000000C7, 2388.9f, 2607.2f, 45.6f, "B_FINB", 0x0000004E);
	func_70(0x000000C8, 1274.927f, -1710.594f, 53.7715f, "", 0x0000004D);
	func_70(0x000000C9, -14.0834f, -1449.673f, 29.6204f, "", 0x00000058);
	func_70(0x000000CB, 10.5183f, 528.8248f, 173.6514f, "", 0x00000058);
	func_70(0x000000CD, -13.6819f, -1438.248f, 30.1015f, "", 0x00000058);
	func_70(0x000000CF, 1392.33f, 1141.611f, 113.4431f, "", 0x00000160);
	func_70(0x000000CE, 1275.775f, -1710.36f, 54.3856f, "", 0x0000004D);
	func_70(0x000000D2, -2308.247f, 424.402f, 173.4666f, "B_FIB", 0x0000006A);
	func_70(0x000000D3, -717.7167f, -157.3691f, 35.9883f, "", 0x0000004E);
	func_70(0x000000D4, -1011.8f, -480.2f, 39f, "", 0x00000078);
	func_70(0x000000D5, -1032.245f, -543.0952f, 34.3316f, "", 0x00000078);
	func_70(0x000000D6, 1973.539f, 3815.58f, 32.4367f, "", 0x0000004F);
	func_70(0x000000D8, -1148.786f, -1523.266f, 9.633f, "", 0x0000004F);
	func_70(0x000000D9, 710.1261f, -964.1225f, 29.3953f, "", 0x0000004D);
	func_70(0x000000DA, 139.6386f, -3093.046f, 4.8962f, "", 0x0000016B);
	func_70(0x000000DB, -1135.238f, 7370.382f, 1019.718f, "", 0x0000016B);
	func_70(0x000000DC, 497.2134f, -2022.972f, 25.9375f, "", 0x0000016B);
	func_70(0x000000DD, 711.7089f, -964.4872f, 29.3956f, "", 0x00000050);
	func_70(0x000000DE, -1158.687f, -1520.819f, 9.6336f, "", 0x0000004F);
	func_70(0x000000DF, 1279.01f, -3033.8f, 24.36f, "B_DHP1", 0x0000016B);
	func_70(0x000000E0, -2145.486f, 3018.294f, 31.81f, "B_DP2B", 0x0000016B);
	func_70(0x000000E1, -1158.687f, -1520.819f, 9.6336f, "B_DH", 0x00000068);
	func_70(0x000000E2, -1158.687f, -1520.819f, 9.6336f, "B_DH", 0x00000068);
	func_70(0x000000E3, 1391.233f, 3614.206f, 37.9419f, "", 0x00000076);
	func_70(0x000000E5, -89.9141f, 4302.092f, 45.5607f, "B_RHP1", 0x0000016B);
	func_70(0x000000E6, 717.5974f, -965.4876f, 29.3953f, "", 0x0000004D);
	func_70(0x000000E7, 209.0284f, -1647.332f, 28.8031f, "", 0x0000016B);
	func_70(0x000000E8, 707.5697f, -964.8843f, 29.4135f, "", 0x00000069);
	func_70(0x000000E9, 707.9211f, -964.528f, 29.4181f, "", 0x00000069);
	func_70(0x000000EB, 372.6381f, -1624.789f, 28.2929f, "", 0x0000016B);
	func_70(0x000000EC, 919.5082f, -1546.935f, 29.7786f, "", 0x0000016B);
	func_70(0x000000ED, -311.1739f, -771.6993f, 52.2467f, "", 0x0000016B);
	func_70(0x000000EE, -657.8753f, -272.2921f, 34.7628f, "", 0x0000016B);
	func_70(0x000000EF, 307.123f, -1084.801f, 28.3597f, "", 0x0000016B);
	func_70(0x000000F0, 2627.087f, 2933.467f, 39.428f, "", 0x0000016B);
	func_67(0x000000EA, 97.01886f, -1290.793f, 28.26876f, 0x0000004F, 97.01886f, -1290.793f, 28.26876f, 0x0000004F, 94.30816f, -1290.895f, 28.26875f, 0x0000004F, "");
	func_67(0x000000B4, -821.6226f, 176.9706f, 70.4633f, 0x0000004E, -789.9583f, 165.4399f, 70.3266f, 0x0000004E, -827.6172f, 174.8205f, 69.7301f, 0x0000004E, "");
	func_67(0x000000B6, -816.8233f, 178.1711f, 71.2273f, 0x0000004E, -818.2696f, 177.519f, 71.2278f, 0x0000004E, -818.2696f, 177.519f, 71.2278f, 0x0000004E, "");
	func_67(0x000000B7, -798.0831f, 186.8086f, 71.6055f, 0x0000004E, -798.0831f, 186.8086f, 71.6055f, 0x0000004E, -868.3934f, 152.2284f, 62.5499f, 0x0000004E, "");
	func_67(0x000000C3, 1377.184f, -2082.273f, 50.9983f, 0x00000069, 1374.71f, -2078.899f, 50.9983f, 0x00000069, 1372.145f, -2074.475f, 50.9983f, 0x00000069, "B_FIB");
	func_67(0x000000C4, 3830.426f, 4463.453f, 1.7318f, 0x0000006A, 3825.129f, 4463.318f, 2.2567f, 0x0000006A, 3825.129f, 4463.318f, 2.2567f, 0x0000006A, "B_FIB");
	func_67(0x000000CA, -14.1184f, -1449.518f, 29.6215f, 0x00000058, -14.1184f, -1449.518f, 29.6215f, 0x00000058, -13.735f, -1453.031f, 29.5478f, 0x00000058, "");
	func_67(0x000000AC, 1381.19f, -2065.85f, 50.9987f, 0x00000163, 1381.19f, -2065.85f, 50.9987f, 0x00000163, 409.7202f, -975.1798f, 28.4193f, 0x00000163, "");
	func_67(0x000000CF, 1381.004f, 1147.408f, 113.3342f, 0x00000160, 1376.442f, 1147.247f, 113.0501f, 0x00000160, 1392.33f, 1141.611f, 113.4431f, 0x00000160, "");
	func_67(0x000000D0, -802.8231f, 177.0514f, 71.8347f, 0x0000004E, -802.8231f, 177.0514f, 71.8347f, 0x0000004E, -808.7419f, 178.2126f, 71.1531f, 0x0000004E, "");
	func_67(0x000000D1, -14.1709f, -1445.289f, 29.6473f, 0x00000058, -14.1709f, -1445.289f, 29.6473f, 0x00000058, -14.1709f, -1445.289f, 29.6473f, 0x00000058, "");
	func_67(0x000000B2, 1973.802f, 3814.958f, 32.4241f, 0x0000004F, 1974.339f, 3819.099f, 32.4363f, 0x0000004F, 1974.339f, 3819.099f, 32.4363f, 0x0000004F, "");
	func_67(0x000000B3, 1979.554f, 3816.256f, 31.27402f, 0x0000004F, 1979.554f, 3816.256f, 31.27402f, 0x0000004F, 1979.554f, 3816.256f, 31.27402f, 0x0000004F, "");
	func_67(0x000000D7, -817.3229f, 177.9939f, 71.2278f, 0x0000004E, -804.5707f, 174.1529f, 71.8447f, 0x0000004E, 1984.582f, 3815.731f, 31.3515f, 0x0000004E, "");
	func_67(0x000000E4, 1391.931f, 3602.615f, 37.9419f, 0x0000006A, 1391.931f, 3602.615f, 37.9419f, 0x0000006A, 1393.655f, 3602.685f, 37.9419f, 0x0000006A, "B_FIB");
	func_67(0x000000F1, 99.0898f, -1292.378f, 28.2688f, 0x0000006B, 99.0898f, -1292.378f, 28.2688f, 0x0000006B, 99.8142f, -1293.774f, 28.2679f, 0x0000006B, "");
	func_67(0x000000F2, 115.3514f, -1296.098f, 28.2692f, 0x0000006B, 115.3514f, -1296.098f, 28.2692f, 0x0000006B, 117.5668f, -1294.581f, 28.2771f, 0x0000006B, "");
}

void func_67(int iParam0, vector3 vParam1, int iParam2, vector3 vParam3, int iParam4, vector3 vParam5, int iParam6, char* sParam7)
{
	func_12(iParam0, 0x00000000, 0x00000000);
	func_11(iParam0, 0x00000001);
	func_10(iParam0, 0x00000001);
	func_9(iParam0, 0x00000001, 0x00000000);
	func_6(iParam0, 0x00000004);
	func_69(iParam0, vParam1, iParam2, vParam3, iParam4, vParam5, iParam6);
	if (!unk_0x7F8A39872A07D2CE(sParam7, ""))
	{
		func_68(iParam0, sParam7);
	}
}

void func_68(int iParam0, char* sParam1)
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

void func_69(int iParam0, vector3 vParam1, var uParam2, vector3 vParam3, var uParam4, vector3 vParam5, var uParam6)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000013);
	Global_79AA[iVar0 /*23*/][0x00000000 /*3*/] = { vParam1 };
	Global_79AA[iVar0 /*23*/].f_C[0x00000000] = uParam2;
	Global_79AA[iVar0 /*23*/][0x00000001 /*3*/] = { vParam3 };
	Global_79AA[iVar0 /*23*/].f_C[0x00000001] = uParam4;
	Global_79AA[iVar0 /*23*/][0x00000002 /*3*/] = { vParam5 };
	Global_79AA[iVar0 /*23*/].f_C[0x00000002] = uParam6;
	Global_914C = 0x00000001;
}

void func_70(int iParam0, vector3 vParam1, char* sParam2, int iParam3)
{
	func_12(iParam0, 0x00000000, 0x00000000);
	func_11(iParam0, 0x00000001);
	func_10(iParam0, 0x00000001);
	func_9(iParam0, 0x00000001, 0x00000000);
	func_7(iParam0, vParam1);
	func_6(iParam0, 0x00000004);
	if (!unk_0x7F8A39872A07D2CE(sParam2, ""))
	{
		func_68(iParam0, sParam2);
	}
	if (iParam3 != 0x00000020)
	{
		func_5(iParam0, iParam3);
	}
}

void func_71()
{
	func_84(0x00000041, 1967.042f, 3116.005f, 45.8901f, "B_CRCE", 0x0000013B, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000042, -572.041f, 294.196f, 79.9374f, "", 0x00000067, 0x00000001, 0x00000007, 0x00000001);
	func_84(0x00000043, 1992.27f, 3050.6f, 47.89f, "", 0x00000067, 0x00000001, 0x00000007, 0x00000000);
	func_84(0x00000044, -1370.625f, 56.1227f, 52.70337f, "", 0x0000006D, 0x00000001, 0x00000007, 0x00000001);
	func_84(0x00000045, -1702.46f, 4666.36f, 22.1255f, "", 0x0000008D, 0x00000000, 0x00000004, 0x00000001);
	func_84(0x0000004C, -1154.11f, -2715.203f, 18.8824f, "B_FSCH", 0x0000005A, 0x00000000, 0x00000007, 0x00000001);
	func_80(0x0000004D, 908f, 3643.7f, 32.2f, "", 0x00000054, 0x00000000, 0x00000004);
	func_80(0x0000004E, 454.2f, -1851.3f, 27.6f, "", 0x00000054, 0x00000000, 0x00000004);
	func_80(0x0000004F, -161f, -1669.7f, 33f, "", 0x00000054, 0x00000000, 0x00000004);
	func_80(0x00000050, -1298.2f, 2504.14f, 21.09f, "", 0x00000054, 0x00000000, 0x00000004);
	func_80(0x00000051, 1181.5f, -400.1f, 67.5f, "", 0x00000054, 0x00000000, 0x00000004);
	func_84(0x00000052, 3063.114f, 639.855f, 0f, "", 0x0000013C, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000053, 3447.747f, 5192.996f, 0f, "", 0x0000013C, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000054, 198.1108f, 3620.397f, 27.34877f, "", 0x0000013C, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000055, 621.7491f, -2136.798f, 0f, "", 0x0000013C, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000005B, 5.7734f, -1099.782f, 29.8447f, "", 0x00000077, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000005C, 827.518f, -2158.57f, 29.423f, "", 0x00000077, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000005D, -1904.336f, -559.3759f, 10.7953f, "", 0x000000CD, 0x00000000, 0x00000001, 0x00000001);
	func_84(0x00000056, -155.8476f, -1566.98f, 34.00011f, "", 0x0000013B, 0x00000000, 0x00000002, 0x00000000);
	func_84(0x00000057, 369.29f, 312.41f, 103.24f, "", 0x0000013B, 0x00000000, 0x00000002, 0x00000001);
	func_84(0x00000058, -813.0546f, -2546.738f, 12.7888f, "", 0x0000013B, 0x00000000, 0x00000002, 0x00000000);
	func_84(0x00000059, 791.59f, -1160.85f, 27.89f, "", 0x0000013B, 0x00000000, 0x00000002, 0x00000000);
	func_84(0x0000005A, -1062.986f, -1153.365f, 1.129525f, "", 0x0000013B, 0x00000000, 0x00000002, 0x00000000);
	func_84(0x0000005E, 130.1238f, -1300.266f, 28.2811f, "", 0x00000079, 0x00000001, 0x00000007, 0x00000001);
	func_84(0x0000005F, vLocal_50, "B_SPTT", 0x0000013A, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000060, -1166.557f, -1614.499f, 3.1734f, "", 0x0000007A, 0x00000001, 0x00000005, 0x00000001);
	func_84(0x00000061, -773.0469f, 162.0946f, 66.475f, "", 0x0000007A, 0x00000001, 0x00000005, 0x00000001);
	func_84(0x00000062, 487.5186f, -217.7697f, 52.7864f, "", 0x0000007A, 0x00000001, 0x00000005, 0x00000001);
	func_84(0x00000063, -1223.908f, 338.3685f, 78.9859f, "", 0x0000007A, 0x00000001, 0x00000005, 0x00000001);
	func_84(0x00000064, -1618.488f, 266.4701f, 58.5552f, "", 0x0000007A, 0x00000001, 0x00000005, 0x00000001);
	func_84(0x00000065, -936.0361f, -1261.967f, 6.9773f, "", 0x0000007A, 0x00000001, 0x00000005, 0x00000001);
	func_84(0x00000066, -1371.275f, -107.9437f, 49.7046f, "", 0x0000007A, 0x00000001, 0x00000005, 0x00000001);
	func_84(0x00000067, -2869.991f, 9.2297f, 10.6083f, "", 0x0000007A, 0x00000001, 0x00000005, 0x00000001);
	func_84(0x00000069, 2133.353f, 4784.458f, 40.0637f, "", 0x000000FB, 0x00000000, 0x00000004, 0x00000001);
	func_84(0x0000006A, 2151.193f, 4797.441f, 40.1541f, "", 0x00000093, 0x00000000, 0x00000004, 0x00000001);
	func_84(0x0000006B, func_79(0x00000000), "", 0x0000007E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000006C, func_79(0x00000001), "", 0x0000007E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000006D, func_79(0x00000002), "", 0x0000007E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000006E, -790.906f, 186.293f, 71.8351f, "", 0x000000C5, 0x00000000, 0x00000001, 0x00000001);
	func_84(0x0000006F, 2862.152f, 5945.49f, 357.119f, "", 0x000000C5, 0x00000000, 0x00000001, 0x00000001);
	func_84(0x0000008A, -11.1495f, -1425.564f, 29.6737f, "", 0x00000111, 0x00000000, 0x00000002, 0x00000001);
	func_84(0x0000008B, 18.1531f, 535.2469f, 170.6324f, "", 0x00000111, 0x00000000, 0x00000002, 0x00000001);
	func_84(0x00000046, func_20(0x00000000), "B_OFFM", 0x0000007F, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000047, func_20(0x00000001), "B_OFFT", 0x0000007F, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000049, func_20(0x00000003), "B_OFFM", 0x0000007F, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000004A, func_20(0x00000004), "B_OFFM", 0x0000007F, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000004B, func_20(0x00000005), "B_OFFT", 0x0000007F, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000048, func_20(0x00000002), "B_OFFM", 0x0000007F, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000007D, func_19(0x00000000), "B_BJMP", 0x0000005E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000007E, func_19(0x00000001), "B_BJMP", 0x0000005E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000007F, func_19(0x00000002), "B_BJMP", 0x0000005E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000080, func_19(0x00000003), "B_BJMP", 0x0000005E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000081, func_19(0x00000004), "B_BJMP", 0x0000005E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000082, func_19(0x00000005), "B_BJMP", 0x0000005E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000083, func_19(0x00000006), "B_BJMP", 0x0000005E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000084, func_19(0x00000007), "B_BJMP", 0x0000005E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000085, func_19(0x00000008), "B_BJMP", 0x0000005E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000086, func_19(0x00000009), "B_BJMP", 0x0000005E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000087, func_19(0x0000000A), "B_BJMP", 0x0000005E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000088, func_19(0x0000000B), "B_BJMP", 0x0000005E, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000089, func_19(0x0000000C), "B_BJMP", 0x0000005E, 0x00000000, 0x00000007, 0x00000001);
	func_72(0x0000008C, func_78(0x00000000), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_72(0x0000008D, func_78(0x00000001), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_72(0x0000008E, func_78(0x00000002), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_72(0x0000008F, func_78(0x00000003), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_72(0x00000090, func_78(0x00000004), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_72(0x00000091, func_78(0x00000005), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_72(0x00000092, func_78(0x00000006), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_72(0x00000093, func_78(0x00000007), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_72(0x00000094, func_78(0x00000008), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_72(0x00000095, func_78(0x00000009), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_72(0x00000097, func_78(0x0000000A), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_72(0x00000098, func_78(0x0000000B), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_72(0x00000099, func_78(0x0000000C), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_72(0x0000009A, func_78(0x0000000D), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_72(0x0000009B, func_78(0x0000000E), "", 0x00000009, 0x00000000, 0x00000177, 0x00000007);
	func_84(0x00000075, -1390.432f, -583.671f, 29.2231f, "", 0x0000005D, 0x00000001, 0x00000007, 0x00000001);
	func_84(0x00000076, -259.5521f, 6288.336f, 30.4584f, "", 0x0000005D, 0x00000001, 0x00000007, 0x00000001);
	func_84(0x00000077, 984.4781f, -109.0157f, 73.333f, "", 0x0000005D, 0x00000001, 0x00000007, 0x00000001);
	func_84(0x00000078, 250.3522f, -1011.406f, 28.2686f, "", 0x0000005D, 0x00000001, 0x00000007, 0x00000001);
	func_84(0x00000079, 496.759f, -1543.728f, 28.2452f, "", 0x0000005D, 0x00000001, 0x00000007, 0x00000001);
	func_84(0x0000007A, -136.5119f, 6380.434f, 30.5182f, "", 0x0000005D, 0x00000001, 0x00000007, 0x00000001);
	func_84(0x0000007B, 225.0345f, 302.9392f, 104.5327f, "", 0x0000005D, 0x00000001, 0x00000007, 0x00000001);
	func_84(0x0000007C, 2002.523f, 3052.922f, 46.2141f, "", 0x0000005D, 0x00000001, 0x00000007, 0x00000001);
	func_84(0x00000070, 283.7833f, 200.428f, 103.3739f, "", 0x00000087, 0x00000001, 0x00000007, 0x00000001);
	func_84(0x00000071, 394.368f, -711.8287f, 28.2877f, "", 0x00000087, 0x00000001, 0x00000007, 0x00000001);
	func_84(0x00000072, -1422.673f, -214.3225f, 45.9932f, "", 0x00000087, 0x00000001, 0x00000007, 0x00000001);
	func_84(0x00000073, -420.127f, 266.5842f, 82.1946f, "", 0x00000066, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x00000074, -564.9687f, 274.1781f, 82.0197f, "", 0x00000088, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000009C, 50.8179f, -1392.019f, 28.4059f, "", 0x00000064, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000009D, -699.7f, -922.9f, 18.5f, "", 0x00000064, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000009E, -1664.4f, -1127f, 12f, "B_RIDE", 0x0000010A, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x0000009F, -1651.5f, -1131.5f, 18.3f, "B_RIDE", 0x0000010A, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x000000A0, 446.5f, 5571.2f, 781.2f, "", 0x00000024, 0x00000000, 0x00000007, 0x00000001);
	func_84(0x000000A1, -742.1f, 5594.8f, 41.7f, "", 0x00000024, 0x00000000, 0x00000007, 0x00000001);
}

void func_72(int iParam0, vector3 vParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_7(iParam0, vParam1);
	func_6(iParam0, iParam3);
	func_12(iParam0, 0x00000000, 0x00000000);
	func_77(iParam0);
	func_76(iParam0, iParam4);
	func_75(iParam0, 0x00000001);
	if (!unk_0xEA6BC48857E0AC4C(sParam2))
	{
		func_68(iParam0, sParam2);
	}
	if (iParam5 != 0x00000020)
	{
		func_5(iParam0, iParam5);
	}
	if (iParam6 != 0x00000007)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam6, 0x00000000))
		{
			func_73(iParam0, 0x00000001, 0x00000000, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iParam6, 0x00000001))
			{
				func_73(iParam0, 0x00000001, 0x00000001, 0x00000001);
			}
			else if (unk_0xEAE0D21A50E6C7F4(iParam6, 0x00000002))
			{
				func_73(iParam0, 0x00000001, 0x00000002, 0x00000001);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iParam6, 0x00000001))
		{
			func_73(iParam0, 0x00000001, 0x00000001, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iParam6, 0x00000002))
			{
				func_73(iParam0, 0x00000001, 0x00000002, 0x00000001);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iParam6, 0x00000002))
		{
			func_73(iParam0, 0x00000001, 0x00000002, 0x00000000);
		}
	}
}

void func_73(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
		func_74(iParam0);
	}
}

void func_74(int iParam0)
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

void func_75(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x0000000D))
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000D);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000D);
	}
}

void func_76(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000010);
	Global_79AA[iVar0 /*23*/].f_16 = uParam1;
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_77(int iParam0)
{
	func_9(iParam0, 0x00000000, 0x00000000);
	func_10(iParam0, 0x00000001);
	func_11(iParam0, 0x00000001);
}

Vector3 func_78(int iParam0)
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

Vector3 func_79(int iParam0)
{
	if (iParam0 >= 0x00000003 || iParam0 <= 0xFFFFFFFF)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0x00000001:
			return 2434.415f, 4284.25f, 35.5059f;
		
		case 0x00000000:
			return -1230.622f, -2049.97f, 12.8882f;
		
		case 0x00000002:
			return 1591.686f, 3813.401f, 33.3371f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_80(int iParam0, vector3 vParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x000000C2;
	iVar1 = 0x00000034;
	iVar2 = (iParam0 - 0x0000004D);
	if (iVar2 >= 0x00000005)
	{
	}
	func_84(iParam0, vParam1, sParam2, iParam3, bParam4, iParam5, 0x00000001);
	if (((Global_1B416.f_92B[iVar2 /*2*/] >= 0x00000001 || func_83(0x0000006C) == 0x00000001) || func_82((iVar0 + iVar2), 0x00000000)) || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[(iVar1 + iVar2) /*6*/], 0x00000003))
	{
		func_81(iParam0, 0x00000001);
	}
}

void func_81(int iParam0, bool bParam1)
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

int func_82(int iParam0, int iParam1)
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

int func_83(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_84(int iParam0, vector3 vParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	var uVar0;
	
	uVar0 = iParam6;
	uVar0 = uVar0;
	if (bParam4)
	{
		func_72(iParam0, vParam1, sParam2, 0x00000006, 0x0000000A, iParam3, iParam5);
	}
	else
	{
		func_72(iParam0, vParam1, sParam2, 0x00000006, 0x00000009, iParam3, iParam5);
	}
}

void func_85()
{
	func_87();
	func_86();
	unk_0x695436633F106F38();
}

void func_86()
{
	unk_0xD4700B9520933B54("Player_Vehicle", 0x00000003);
	unk_0xD4700B9520933B54("PV_Slot", 0x00000003);
	unk_0xD4700B9520933B54("Previous_Owner", 0x00000003);
	unk_0xD4700B9520933B54("Sprayed_Vehicle_Decorator", 0x00000002);
	unk_0xD4700B9520933B54("Sprayed_Vehicle_Timer_Dec", 0x00000005);
	unk_0xD4700B9520933B54("Vehicle_Reward", 0x00000003);
	unk_0xD4700B9520933B54("Vehicle_Reward_Teams", 0x00000003);
	unk_0xD4700B9520933B54("Skill_Blocker", 0x00000002);
	unk_0xD4700B9520933B54("TargetPlayerForTeam", 0x00000003);
	unk_0xD4700B9520933B54("XP_Blocker", 0x00000002);
	unk_0xD4700B9520933B54("CrowdControlSetUp", 0x00000003);
	unk_0xD4700B9520933B54("Bought_Drugs", 0x00000002);
	unk_0xD4700B9520933B54("HeroinInPossession", 0x00000001);
	unk_0xD4700B9520933B54("CokeInPossession", 0x00000001);
	unk_0xD4700B9520933B54("WeedInPossession", 0x00000001);
	unk_0xD4700B9520933B54("MethInPossession", 0x00000001);
	unk_0xD4700B9520933B54("bombdec", 0x00000003);
	unk_0xD4700B9520933B54("bombdec1", 0x00000003);
	unk_0xD4700B9520933B54("bombowner", 0x00000003);
	unk_0xD4700B9520933B54("noPlateScan", 0x00000002);
	unk_0xD4700B9520933B54("prisonBreakBoss", 0x00000002);
	unk_0xD4700B9520933B54("cashondeadbody", 0x00000003);
	unk_0xD4700B9520933B54("MissionType", 0x00000003);
	unk_0xD4700B9520933B54("MatchId", 0x00000003);
	unk_0xD4700B9520933B54("TeamId", 0x00000003);
	unk_0xD4700B9520933B54("Not_Allow_As_Saved_Veh", 0x00000003);
	unk_0xD4700B9520933B54("Veh_Modded_By_Player", 0x00000003);
	unk_0xD4700B9520933B54("MPBitset", 0x00000003);
	unk_0xD4700B9520933B54("MC_EntityID", 0x00000003);
	unk_0xD4700B9520933B54("MC_ChasePedID", 0x00000003);
	unk_0xD4700B9520933B54("MC_Team0_VehDeliveredRules", 0x00000003);
	unk_0xD4700B9520933B54("MC_Team1_VehDeliveredRules", 0x00000003);
	unk_0xD4700B9520933B54("MC_Team2_VehDeliveredRules", 0x00000003);
	unk_0xD4700B9520933B54("MC_Team3_VehDeliveredRules", 0x00000003);
	unk_0xD4700B9520933B54("AttributeDamage", 0x00000003);
	unk_0xD4700B9520933B54("GangBackup", 0x00000003);
	unk_0xD4700B9520933B54("CreatedByPegasus", 0x00000002);
	unk_0xD4700B9520933B54("BeforeCorona", 0x00000003);
	unk_0xD4700B9520933B54("Heist_Veh_ID", 0x00000003);
	unk_0xD4700B9520933B54("CC_iState", 0x00000003);
	unk_0xD4700B9520933B54("CC_iStatePrev", 0x00000003);
	unk_0xD4700B9520933B54("CC_iBitSet", 0x00000003);
	unk_0xD4700B9520933B54("CC_fInfluenceDirectThreat", 0x00000001);
	unk_0xD4700B9520933B54("CC_fInfluenceShouting", 0x00000001);
	unk_0xD4700B9520933B54("CC_iBeatdownHitsRemaining", 0x00000003);
	unk_0xD4700B9520933B54("CC_iBeatdownRounds", 0x00000003);
	unk_0xD4700B9520933B54("LUXE_MINIGAME_ACT_PROPS", 0x00000003);
	unk_0xD4700B9520933B54("LUXE_VEH_INSTANCE_ID", 0x00000003);
	unk_0xD4700B9520933B54("UsingForTimeTrial", 0x00000002);
	unk_0xD4700B9520933B54("EnableVehLuxeActs", 0x00000003);
	unk_0xD4700B9520933B54("Player_Goon", 0x00000003);
	unk_0xD4700B9520933B54("Player_Boss", 0x00000003);
	unk_0xD4700B9520933B54("Previous_Boss", 0x00000003);
	unk_0xD4700B9520933B54("PYV_Owner", 0x00000003);
	unk_0xD4700B9520933B54("PYV_Vehicle", 0x00000003);
	unk_0xD4700B9520933B54("PYV_Yacht", 0x00000003);
	unk_0xD4700B9520933B54("PYV_WarpFrom", 0x00000003);
	unk_0xD4700B9520933B54("ContrabandOwner", 0x00000003);
	unk_0xD4700B9520933B54("HeliTaxi", 0x00000002);
	unk_0xD4700B9520933B54("ContrabandDeliveryType", 0x00000003);
	unk_0xD4700B9520933B54("RandomID", 0x00000003);
	unk_0xD4700B9520933B54("ExportVehicle", 0x00000003);
	unk_0xD4700B9520933B54("RespawnVeh", 0x00000003);
	unk_0xD4700B9520933B54("Player_Truck", 0x00000003);
	unk_0xD4700B9520933B54("Creator_Trailer", 0x00000003);
	unk_0xD4700B9520933B54("FMDeliverableID", 0x00000003);
	unk_0xD4700B9520933B54("Player_Avenger", 0x00000003);
	unk_0xD4700B9520933B54("Player_Hacker_Truck", 0x00000003);
	unk_0xD4700B9520933B54("BBCarrier", 0x00000002);
	unk_0xD4700B9520933B54("GBMissionFire", 0x00000003);
	unk_0xD4700B9520933B54("GBCVehicle", 0x00000002);
	unk_0xD4700B9520933B54("CSHVehicle", 0x00000002);
	unk_0xD4700B9520933B54("AllowModSprayRepair", 0x00000002);
	unk_0xD4700B9520933B54("FMCVehicle", 0x00000002);
}

void func_87()
{
	unk_0xD4700B9520933B54("PHOTO_TAKEN", 0x00000002);
	unk_0xD4700B9520933B54("doe_elk", 0x00000002);
	unk_0xD4700B9520933B54("hunt_score", 0x00000003);
	unk_0xD4700B9520933B54("hunt_weapon", 0x00000003);
	unk_0xD4700B9520933B54("hunt_undetected", 0x00000002);
	unk_0xD4700B9520933B54("hunt_nocall", 0x00000002);
	unk_0xD4700B9520933B54("hunt_chal_weapon", 0x00000003);
	unk_0xD4700B9520933B54("hunt_kill_time", 0x00000003);
	unk_0xD4700B9520933B54("DismissedBy", 0x00000003);
	unk_0xD4700B9520933B54("Darts_name", 0x00000003);
	unk_0xD4700B9520933B54("Getaway_Winched", 0x00000002);
	unk_0xD4700B9520933B54("MapGauntlet", 0x00000003);
	unk_0xD4700B9520933B54("IgnoredByQuickSave", 0x00000002);
	unk_0xD4700B9520933B54("GetawayVehicleValid", 0x00000002);
	unk_0xD4700B9520933B54("RampageCarExploded", 0x00000002);
	unk_0xD4700B9520933B54("Carwash_Vehicle_Decorator", 0x00000002);
	unk_0xD4700B9520933B54("Casino_Game_Info_Decorator", 0x00000003);
}

void func_88()
{
	if (unk_0x89DE52DB50601487() == 0x00000001)
	{
		unk_0x45E8F3A134BB0930("ob_tv", joaat("prop_trev_tv_01"), 0x00000064, 15f, 0xFFFFFFFF, 0x00000001);
		unk_0x45E8F3A134BB0930("ob_tv", joaat("v_ilev_mm_scre_off"), 0x00000064, 20f, 0xFFFFFFFF, 0x00000001);
		unk_0x8A1E6918E3AC2223("gpb_Mime", 150f, 0x00000001);
		unk_0x8A1E6918E3AC2223("gpb_Jesse", 150f, 0x00000001);
		unk_0x8A1E6918E3AC2223("re_SecurityVan", 209f, 0x00000001);
		unk_0x8A1E6918E3AC2223("gpb_Superhero", 150f, 0x00000001);
		unk_0x8A1E6918E3AC2223("gpb_PamelaDrake", 150f, 0x00000001);
		unk_0x8A1E6918E3AC2223("re_paparazzi", 150f, 0x00000001);
		if (!Global_3)
		{
			unk_0x45E8F3A134BB0930("ob_tv", 0x4FECBC89, 0x00000064, 15f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("ob_tv", joaat("prop_tv_flat_01"), 0x00000064, 25f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("ob_tv", 0xCA7FAFEB, 0x00000064, 10f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("ob_tv", joaat("des_tvsmash_start"), 0x00000064, 20f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("ob_vend1", 0x3B21C5E7, 0x00000064, 10f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("ob_vend2", 0x426A547C, 0x00000064, 10f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("ob_telescope", joaat("prop_telescope_01"), 0x00000064, 4f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("ob_telescope", joaat("prop_telescope"), 0x00000064, 4f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("ob_telescope", joaat("prop_t_telescope_01b"), 0x00000064, 4f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("ob_airdancer", 0x8F2D17AA, 0x00000064, 100f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("ob_cashregister", 0x1213B24D, 0x00000064, 100f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("ob_telescope", 0x730A3FCB, 0x00000064, 4f, 0xFFFFFFFF, 0x00000008);
			unk_0x45E8F3A134BB0930("ob_mp_shower_med", 0xDEFE9667, 0x00000064, 4f, 0xFFFFFFFF, 0x00000008);
			unk_0x45E8F3A134BB0930("ob_bong", joaat("prop_bong_01"), 0x00000064, 4f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("ob_franklin_wine", 0xFDDF9429, 0x00000064, 10f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("ob_wheatgrass", 0x1BFD7275, 0x00000064, 4f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("ob_drinking_shots", joaat("p_tumbler_cs2_s"), 0x00000064, 4f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("ob_franklin_beer", joaat("prop_cs_beer_bot_01"), 0x00000064, 4f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("ob_drinking_shots", joaat("p_tumbler_02_s1"), 0x00000064, 4f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("ob_drinking_shots", 0x7A9EBC92, 0x00000064, 4f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("ob_huffing_gas", joaat("prop_rolled_sock_02"), 0x00000064, 4f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("ob_mr_raspberry_jam", joaat("prop_mr_raspberry_01"), 0x00000064, 4f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("ob_mp_bed_high", 0x12BED5BC, 0x00000064, 4f, 0xFFFFFFFF, 0x00000008);
			unk_0x45E8F3A134BB0930("ob_mp_bed_high", 0x9C3C909F, 0x00000064, 4f, 0xFFFFFFFF, 0x00000008);
			unk_0x45E8F3A134BB0930("ob_mp_bed_high", 0x939E5026, 0x00000064, 4f, 0xFFFFFFFF, 0x00000008);
			unk_0x45E8F3A134BB0930("ob_mp_bed_high", joaat("v_ilev_mp_bedsidebook"), 0x00000064, 4f, 0xFFFFFFFF, 0x00000008);
			unk_0x45E8F3A134BB0930("ob_mp_shower_med", 0xD2FA593B, 0x00000064, 4f, 0xFFFFFFFF, 0x00000008);
			unk_0x8A1E6918E3AC2223("ob_sofa_michael", 3f, 0x00000001);
			unk_0x8A1E6918E3AC2223("ob_sofa_franklin", 3f, 0x00000001);
			unk_0x8A1E6918E3AC2223("ob_franklin_tv", 3f, 0x00000001);
			unk_0x8A1E6918E3AC2223("ob_mp_bed_low", 0.5f, 0x00000008);
			unk_0x8A1E6918E3AC2223("ob_mp_bed_med", 0.5f, 0x00000008);
			unk_0x45E8F3A134BB0930("ob_foundry_cauldron", joaat("v_ilev_found_cranebucket"), 0x00000064, 100f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("atm_trigger", 0xCC179926, 0x00000064, 4f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("atm_trigger", joaat("prop_atm_02"), 0x00000064, 4f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("atm_trigger", 0x35EA27BA, 0x00000064, 4f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("atm_trigger", joaat("prop_atm_03"), 0x00000064, 4f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("atm_trigger", 0xF5CE8E71, 0x00000064, 4f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("atm_trigger", joaat("prop_fleeca_atm"), 0x00000064, 4f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("atm_trigger", 0x30201E58, 0x00000064, 4f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("atm_trigger", 0xD9E728E7, 0x00000064, 4f, 0xFFFFFFFF, 0x00000008);
			unk_0x45E8F3A134BB0930("laptop_trigger", 0x5293CC8D, 0x00000064, 80f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("laptop_trigger", 0x4F7C79BA, 0x00000064, 4f, 0xFFFFFFFF, 0x00000009);
			unk_0x45E8F3A134BB0930("laptop_trigger", 0x131BD1AA, 0x00000064, 4f, 0xFFFFFFFF, 0x00000008);
			unk_0x45E8F3A134BB0930("laptop_trigger", 0x16F21C62, 0x00000064, 4f, 0xFFFFFFFF, 0x00000008);
			unk_0x45E8F3A134BB0930("laptop_trigger", 0x04F27827, 0x00000064, 4f, 0xFFFFFFFF, 0x00000008);
			unk_0x8A1E6918E3AC2223("savegame_bed", 40f, 0x00000001);
			unk_0x8A1E6918E3AC2223("gpb_AndyMoon", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("gpb_Baygor", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("gpb_BillBinder", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("gpb_Clinton", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("gpb_Jane", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("gpb_Jerome", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("gpb_Zombie", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("gpb_Griff", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("gpb_Mani", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("gpb_Tonya", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_atmrobbery", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_rescuehostage", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_arrests", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_border", 100f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_burials", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_muggings", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_domestic", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_drunkdriver", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_gang_Intimidation", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_getaway_driver", 180f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_shoprobbery", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_lured", 180f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_carTheft", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_prisonerlift", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_accident", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_bus_tours", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_prisonvanbreak", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_DealGoneWrong", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_hitch_lift", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_stag_do", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_mountdance", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_Duel", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_SeaPlane", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("murderMystery", 118f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_monkey", 100f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_chasethieves", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_cultshootout", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_crashrescue", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_bikethief", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_Homeland_Security", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_abandonedcar", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_snatched", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_gangfight", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("ShopRobberies", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("altruist_cult", 200f, 0x00000001);
			unk_0x8A1E6918E3AC2223("re_yetarian", 150f, 0x00000001);
			unk_0x8A1E6918E3AC2223("flyUnderBridges", 200f, 0x00000001);
			unk_0x41B844F6A8EB4C78("pb_prostitute", joaat("s_f_y_hooker_01"), 0x00000064, 0x00000000);
			unk_0x41B844F6A8EB4C78("pb_prostitute", joaat("s_f_y_hooker_02"), 0x00000064, 0x00000000);
			unk_0x41B844F6A8EB4C78("pb_prostitute", joaat("s_f_y_hooker_03"), 0x00000064, 0x00000000);
			unk_0x8A1E6918E3AC2223("launcher_BasejumpHeli", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_BasejumpPack", 100f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_golf", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Hunting_Ambient", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_OffroadRacing", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Racing", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_rampage", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_pilotschool", 100f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_range", 18f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_stunts", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_tennis", 100f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Triathlon", 100f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Yoga", 20f, 0x00000001);
			unk_0x45E8F3A134BB0930("launcher_Darts", joaat("prop_dart_bd_cab_01"), 0x00000064, 50f, 0xFFFFFFFF, 0x00000001);
			unk_0x45E8F3A134BB0930("launcher_Darts", joaat("prop_dart_bd_01"), 0x00000064, 50f, 0xFFFFFFFF, 0x00000001);
			unk_0x8A1E6918E3AC2223("act_cinema", 100f, 0x00000009);
			unk_0x8A1E6918E3AC2223("launcher_Abigail", 100f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Barry", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Dreyfuss", 100f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Epsilon", 100f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Extreme", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Fanatic", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Hao", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Hunting", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Josh", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Maude", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_MrsPhilips", 100f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Minute", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Nigel", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Omega", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Paparazzo", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_TheLastOne", 100f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_Tonya", 100f, 0x00000001);
			unk_0x8A1E6918E3AC2223("chop", 50f, 0x00000001);
			unk_0x8A1E6918E3AC2223("launcher_CarWash", 100f, 0x00000001);
			unk_0x8A1E6918E3AC2223("fairgroundHub", 100f, 0x00000001);
			unk_0x8A1E6918E3AC2223("underwaterPickups", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("UFO", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("wp_PartyBoomBox", 209f, 0x00000001);
			unk_0x8A1E6918E3AC2223("AM_MP_GARAGE_CONTROL", 100f, 0x00000008);
			unk_0x8A1E6918E3AC2223("AM_MP_CARWASH_LAUNCH", 80f, 0x00000008);
			unk_0x8A1E6918E3AC2223("AM_MP_PROPERTY_EXT", 120f, 0x00000008);
		}
		unk_0xD1B93C49F653142F(0x00000002);
		unk_0xD1B93C49F653142F(0x00000004);
		unk_0xD1B93C49F653142F(0x00000008);
		unk_0xD1B93C49F653142F(0x00000001);
	}
}

