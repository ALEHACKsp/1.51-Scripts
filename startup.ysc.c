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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	char* sLocal_47 = NULL;
	char* sLocal_48 = NULL;
	char* sLocal_49 = NULL;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_51 = { 0f, 0f, 0f };
	int iLocal_52 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	sLocal_47 = "CHECKPOINT_NORMAL";
	sLocal_48 = "CHECKPOINT_MISSED";
	sLocal_49 = "CHECKPOINT_PERFECT";
	vLocal_50 = { 1694.74f, 3276.502f, 41.2796f };
	vLocal_51 = { 8.79494f, 0.59893f, 154.8464f };
	unk_0xB57F88F0123F4C38();
	unk_0xF2AB6A0C1D20580A(0x00000000);
	unk_0xE4890938121C8523(0x00000000);
	unk_0x81CF20E10AAD5FD5("prologue_DistantLights");
	unk_0x81CF20E10AAD5FD5("prologue_LODLights");
	iLocal_52 = 0x00000000;
	bVar0 = func_40();
	if (unk_0x2177B4E966225E9C() || unk_0x7C00BB1751A3B24A())
	{
		bVar0 = 0x00000000;
	}
	if (bVar0)
	{
		unk_0x1F47A7881AF72C38();
	}
	unk_0xFBEB71734BE56B66(0x00000000);
	func_39(joaat("mp_registration"), 0x00000590);
	unk_0xB60B60856BF98DCE(joaat("mp_registration"));
	func_39(joaat("mp_fm_registration"), 0x00000590);
	unk_0xB60B60856BF98DCE(joaat("mp_fm_registration"));
	func_39(joaat("tunables_registration"), 0x00000590);
	unk_0xB60B60856BF98DCE(joaat("tunables_registration"));
	func_39(joaat("sc_lb_global_block"), 0x00000590);
	unk_0xB60B60856BF98DCE(joaat("sc_lb_global_block"));
	func_39(joaat("mp_save_game_global_block"), 0x00000590);
	unk_0xB60B60856BF98DCE(joaat("mp_save_game_global_block"));
	func_39(joaat("mp_prop_global_block"), 0x00000590);
	unk_0xB60B60856BF98DCE(joaat("mp_prop_global_block"));
	func_39(joaat("mp_prop_special_global_block"), 0x00000590);
	unk_0xB60B60856BF98DCE(joaat("mp_prop_special_global_block"));
	func_39(joaat("title_update_registration"), 0x00000590);
	unk_0xB60B60856BF98DCE(joaat("title_update_registration"));
	func_39(0xDED062EC, 0x00000590);
	unk_0xB60B60856BF98DCE(0xDED062EC);
	func_39(0xAF7C6885, 0x00000590);
	unk_0xB60B60856BF98DCE(0xAF7C6885);
	Global_412A1F = 0x00000000;
	func_39(joaat("sp_dlc_registration"), 0x00000590);
	unk_0xB60B60856BF98DCE(joaat("sp_dlc_registration"));
	func_39(joaat("sp_pilotschool_reg"), 0x00000590);
	unk_0xB60B60856BF98DCE(joaat("sp_pilotschool_reg"));
	func_38();
	switch (iLocal_52)
	{
		case 0x00000000:
			func_39(joaat("standard_global_init"), 0x00000590);
			unk_0xB60B60856BF98DCE(joaat("standard_global_init"));
			break;
	}
	SYSTEM::WAIT(0x00000000);
	Global_12B50 = 0x00000001;
	Global_2 = bVar0;
	unk_0x2FB9A57162E54BAB(0f);
	switch (iLocal_52)
	{
		case 0x00000000:
			Global_28006E = 0x00000000;
			Global_28006D = 0x00000000;
			func_39(joaat("standard_global_reg"), 0x00000590);
			unk_0x5E8C29AE121DF1C7("standard_global_reg");
			while ((!unk_0xEAE0D21A50E6C7F4(Global_412A1F, 0x00000000) || !unk_0xEAE0D21A50E6C7F4(Global_412A1F, 0x00000001)) || !unk_0xEAE0D21A50E6C7F4(Global_412A1F, 0x00000002))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_412A1F, 0x00000000))
				{
				}
				if (!unk_0xEAE0D21A50E6C7F4(Global_412A1F, 0x00000001))
				{
				}
				if (!unk_0xEAE0D21A50E6C7F4(Global_412A1F, 0x00000002))
				{
				}
				SYSTEM::WAIT(0x00000000);
			}
			unk_0x2D5B34B4E4496334(&Global_1B416, 0x00000001, 0x00000001);
			unk_0xCADE461BBB25EE16(&Global_1B416, "fSaveVersion");
			unk_0xB5C21415AE6F2DC6();
			if (Global_1)
			{
				Global_0 = Global_1B416;
			}
			Global_1B416 = 1.7f;
			if (Global_1)
			{
				if (Global_0 != 1.7f)
				{
					func_27(Global_0);
				}
			}
			break;
	}
	unk_0x2D5B34B4E4496334(&Global_200000, 0x00002AB3, 0x00000000);
	unk_0x9C22F8DCFE1B7911(&Global_200000, 0x00002AB3, "g_savedMPGlobals");
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000001)
	{
		func_21(&(Global_200000[iVar1 /*10930*/]), iVar1);
		func_19(&(Global_200000[iVar1 /*10930*/]), iVar1);
		func_17(&(Global_200000[iVar1 /*10930*/]), iVar1);
		func_14(&(Global_200000[iVar1 /*10930*/]), iVar1);
		func_12(&(Global_200000[iVar1 /*10930*/]), iVar1);
		func_11(&(Global_200000[iVar1 /*10930*/]), iVar1);
		func_10(&(Global_200000[iVar1 /*10930*/]), iVar1);
		func_3(&(Global_200000[iVar1 /*10930*/]), iVar1);
		iVar1++;
	}
	unk_0x1FF5A446D37587EA();
	unk_0xB5C21415AE6F2DC6();
	iVar2 = 0x00002AB3;
	iVar3 = unk_0x34D03390532A3D17(0x00000000);
	if (iVar2 != iVar3)
	{
	}
	if (!unk_0x3A270F6180B6DC86() && !unk_0xEA08AA022C698245())
	{
		unk_0xE318A8D017F47028(0x00000000);
	}
	unk_0x8C854F449041FA25(0x00000000);
	unk_0xE4890938121C8523(0x00000000);
	func_2();
	func_1();
	unk_0x10FAF14A60A0DBE1();
}

void func_1()
{
	Global_1E[0x00000000] = unk_0x0D1736C2E221BCEA(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_1E[0x00000001] = unk_0x0D1736C2E221BCEA(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_1E[0x00000002] = unk_0x0D1736C2E221BCEA(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_1E[0x00000003] = unk_0x0D1736C2E221BCEA(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_1E[0x00000004] = unk_0x0D1736C2E221BCEA(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_1E[0x00000005] = unk_0x0D1736C2E221BCEA(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_1E[0x00000006] = unk_0x0D1736C2E221BCEA(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_1E[0x00000007] = unk_0x0D1736C2E221BCEA(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_1E[0x00000008] = unk_0x0D1736C2E221BCEA(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_1E[0x00000009] = unk_0x0D1736C2E221BCEA(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_1E[0x00000000] = unk_0x0D1736C2E221BCEA(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_1E[0x0000000B] = unk_0x0D1736C2E221BCEA(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_1E[0x0000000C] = unk_0x0D1736C2E221BCEA(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_1E[0x0000000D] = unk_0x0D1736C2E221BCEA(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_1E[0x0000000E] = unk_0x0D1736C2E221BCEA(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_1E[0x0000000F] = unk_0x0D1736C2E221BCEA(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_1E[0x00000010] = unk_0x0D1736C2E221BCEA(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_1E[0x00000011] = unk_0x0D1736C2E221BCEA(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_1E[0x00000012] = unk_0x0D1736C2E221BCEA(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_1E[0x00000013] = unk_0x0D1736C2E221BCEA(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_1E[0x00000014] = unk_0x0D1736C2E221BCEA(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_1E[0x00000015] = unk_0x0D1736C2E221BCEA(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_1E[0x00000016] = unk_0x0D1736C2E221BCEA(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_1E[0x00000017] = unk_0x0D1736C2E221BCEA(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_1E[0x00000018] = unk_0x0D1736C2E221BCEA(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_1E[0x00000019] = unk_0x0D1736C2E221BCEA(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_1E[0x0000001A] = unk_0x0D1736C2E221BCEA(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_1E[0x0000001B] = unk_0x0D1736C2E221BCEA(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_1E[0x0000001C] = unk_0x0D1736C2E221BCEA(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_1E[0x0000001D] = unk_0x0D1736C2E221BCEA(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_1E[0x0000001E] = unk_0x0D1736C2E221BCEA(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_1E[0x0000001F] = unk_0x0D1736C2E221BCEA(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_1E[0x00000020] = unk_0x0D1736C2E221BCEA(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_1E[0x00000021] = unk_0x0D1736C2E221BCEA(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_1E[0x00000022] = unk_0x0D1736C2E221BCEA(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_1E[0x00000023] = unk_0x0D1736C2E221BCEA(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_1E[0x00000024] = unk_0x0D1736C2E221BCEA(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_1E[0x00000025] = unk_0x0D1736C2E221BCEA(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_1E[0x00000026] = unk_0x0D1736C2E221BCEA(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_1E[0x00000027] = unk_0x0D1736C2E221BCEA(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_1E[0x00000028] = unk_0x0D1736C2E221BCEA(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_1E[0x00000029] = unk_0x0D1736C2E221BCEA(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_1E[0x0000002A] = unk_0x0D1736C2E221BCEA(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_1E[0x0000002B] = unk_0x0D1736C2E221BCEA(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_1E[0x0000002C] = unk_0x0D1736C2E221BCEA(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_1E[0x0000002D] = unk_0x0D1736C2E221BCEA(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_1E[0x0000002E] = unk_0x0D1736C2E221BCEA(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_1E[0x0000002F] = unk_0x0D1736C2E221BCEA(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_1E[0x00000030] = unk_0x0D1736C2E221BCEA(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_1E[0x00000031] = unk_0x0D1736C2E221BCEA(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_1E[0x00000032] = unk_0x0D1736C2E221BCEA(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_1E[0x00000033] = unk_0x0D1736C2E221BCEA(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_1E[0x00000034] = unk_0x0D1736C2E221BCEA(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_1E[0x00000035] = unk_0x0D1736C2E221BCEA(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_1E[0x00000036] = unk_0x0D1736C2E221BCEA(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_1E[0x00000037] = unk_0x0D1736C2E221BCEA(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_1E[0x00000038] = unk_0x0D1736C2E221BCEA(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_1E[0x00000039] = unk_0x0D1736C2E221BCEA(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_1E[0x0000003A] = unk_0x0D1736C2E221BCEA(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_1E[0x0000003B] = unk_0x0D1736C2E221BCEA(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_1E[0x0000003C] = unk_0x0D1736C2E221BCEA(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

void func_2()
{
	Global_24BC4 = 0x00000001;
	Global_24BC5 = 0x00000001;
}

void func_3(var uParam0, int iParam1)
{
	func_9(uParam0, iParam1);
	func_8(uParam0, iParam1);
	func_7(uParam0, iParam1);
	func_6(uParam0, iParam1);
	func_5(uParam0, iParam1);
	func_4(uParam0, iParam1);
}

void func_4(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_DATE_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2A97.f_13), 0x00000008, &cVar0);
	unk_0x5F1695B3F13A00D3(&(uParam0->f_2A97.f_13[0x00000000 /*7*/]), 0x00000007, "TEMPSTAT_DATE");
	unk_0x7DA5C9436776820A(&(uParam0->f_2A97.f_13[0x00000000 /*7*/]), "TEMPSTAT_DATE.year");
	unk_0x7DA5C9436776820A(&(uParam0->f_2A97.f_13[0x00000000 /*7*/].f_1), "TEMPSTAT_DATE.month");
	unk_0x7DA5C9436776820A(&(uParam0->f_2A97.f_13[0x00000000 /*7*/].f_2), "TEMPSTAT_DATE.day");
	unk_0x7DA5C9436776820A(&(uParam0->f_2A97.f_13[0x00000000 /*7*/].f_3), "TEMPSTAT_DATE.hour");
	unk_0x7DA5C9436776820A(&(uParam0->f_2A97.f_13[0x00000000 /*7*/].f_4), "TEMPSTAT_DATE.minute");
	unk_0x7DA5C9436776820A(&(uParam0->f_2A97.f_13[0x00000000 /*7*/].f_5), "TEMPSTAT_DATE.seconds");
	unk_0x7DA5C9436776820A(&(uParam0->f_2A97.f_13[0x00000000 /*7*/].f_6), "TEMPSTAT_DATE.Milliseconds");
	unk_0x1FF5A446D37587EA();
	unk_0xE58124D274DF27EF();
}

void func_5(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2A97.f_F), 0x00000004, &cVar0);
	unk_0x5F1695B3F13A00D3(&(uParam0->f_2A97.f_F[0x00000000 /*3*/]), 0x00000003, "TEMPSTAT_VEC");
	unk_0xCADE461BBB25EE16(&(uParam0->f_2A97.f_F[0x00000000 /*3*/]), "TEMPSTAT_VEC.x");
	unk_0xCADE461BBB25EE16(&(uParam0->f_2A97.f_F[0x00000000 /*3*/].f_1), "TEMPSTAT_VEC.y");
	unk_0xCADE461BBB25EE16(&(uParam0->f_2A97.f_F[0x00000000 /*3*/].f_2), "TEMPSTAT_VEC.z");
	unk_0x1FF5A446D37587EA();
	unk_0xE58124D274DF27EF();
}

void func_6(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2A97.f_6), 0x00000009, &cVar0);
	unk_0x3F474BE835ABC04B(&(uParam0->f_2A97.f_6[0x00000000 /*8*/]), "TEMPSTAT_LABEL");
	unk_0xE58124D274DF27EF();
}

void func_7(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2A97.f_4), 0x00000002, &cVar0);
	unk_0xB736AD3F7362C880(&(uParam0->f_2A97.f_4[0x00000000]), "TEMPSTAT_BOOL");
	unk_0xE58124D274DF27EF();
}

void func_8(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2A97.f_2), 0x00000002, &cVar0);
	unk_0xCADE461BBB25EE16(&(uParam0->f_2A97.f_2[0x00000000]), "TEMPSTAT_FLOAT");
	unk_0xE58124D274DF27EF();
}

void func_9(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2A97), 0x00000002, &cVar0);
	unk_0x7DA5C9436776820A(&(uParam0->f_2A97[0x00000000]), "TEMPSTAT_INT1");
	unk_0xE58124D274DF27EF();
}

void func_10(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	int iVar1;
	struct<4> Var2;
	char cVar3[16];
	char cVar4[16];
	char cVar5[16];
	char cVar6[16];
	
	StringCopy(&cVar0, "MP_ATM_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	unk_0x5F1695B3F13A00D3(&(uParam0->f_2A01), 0x00000096, &cVar0);
	unk_0x7DA5C9436776820A(&(uParam0->f_2A01), "MPATM_CARET_");
	iVar1 = 0x00000000;
	StringCopy(&Var2, "MPATMLOGVAL", 16);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2A01.f_1), 0x00000011, &Var2);
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000010)
	{
		cVar3 = { Var2 };
		StringIntConCat(&cVar3, iVar1, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_2A01.f_1[iVar1]), &cVar3);
		iVar1++;
	}
	unk_0xE58124D274DF27EF();
	StringCopy(&Var2, "MPATMLOGSCRS", 16);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2A01.f_12), 0x00000061, &Var2);
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000010)
	{
		cVar4 = { Var2 };
		StringIntConCat(&cVar4, iVar1, 16);
		unk_0x2C8B66756F8D326F(&(uParam0->f_2A01.f_12[iVar1 /*6*/]), &cVar4);
		iVar1++;
	}
	unk_0xE58124D274DF27EF();
	StringCopy(&Var2, "MPATMLOGACT", 16);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2A01.f_73), 0x00000011, &Var2);
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000010)
	{
		cVar5 = { Var2 };
		StringIntConCat(&cVar5, iVar1, 16);
		unk_0xAC53D61F7455A6D0(&(uParam0->f_2A01.f_73[iVar1]), &cVar5);
		iVar1++;
	}
	unk_0xE58124D274DF27EF();
	StringCopy(&Var2, "MPATMLOGDAT", 16);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2A01.f_84), 0x00000011, &Var2);
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000010)
	{
		cVar6 = { Var2 };
		StringIntConCat(&cVar6, iVar1, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_2A01.f_84[iVar1]), &cVar6);
		iVar1++;
	}
	unk_0xE58124D274DF27EF();
	unk_0xB736AD3F7362C880(&(uParam0->f_2A01.f_95), "mpAnyVecBought");
	unk_0x1FF5A446D37587EA();
}

void func_11(var uParam0, int iParam1)
{
	struct<6> Var0;
	char cVar1[32];
	int iVar2;
	
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	unk_0x5F1695B3F13A00D3(&(uParam0->f_2910), 0x000000F1, &Var0);
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910), "BOUNTY_GAMERH64_1");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_1), "BOUNTY_GAMERH64_2");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_2), "BOUNTY_GAMERH64_3");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_3), "BOUNTY_GAMERH64_4");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_4), "BOUNTY_GAMERH64_5");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_5), "BOUNTY_GAMERH64_6");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_6), "BOUNTY_GAMERH64_7");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_7), "BOUNTY_GAMERH64_8");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_8), "BOUNTY_GAMERH64_9");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_9), "BOUNTY_GAMERH64_10");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_A), "BOUNTY_GAMERH64_11");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_B), "BOUNTY_GAMERH64_12");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_C), "BOUNTY_GAMERH64_13");
	unk_0x7DA5C9436776820A(&(uParam0->f_2910.f_D), "BOUNTY_TIME");
	unk_0x7DA5C9436776820A(&(uParam0->f_2910.f_E), "BOUNTY_VALUE");
	StringConCat(&Var0, "_GH", 24);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2910.f_F), 0x000000D1, &Var0);
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000010)
	{
		MemCopy(&cVar1, {Var0}, 0x00000008);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_1", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_F[iVar2 /*13*/]), &cVar1);
		MemCopy(&cVar1, {Var0}, 0x00000008);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_2", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_F[iVar2 /*13*/].f_1), &cVar1);
		MemCopy(&cVar1, {Var0}, 0x00000008);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_3", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_F[iVar2 /*13*/].f_2), &cVar1);
		MemCopy(&cVar1, {Var0}, 0x00000008);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_4", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_F[iVar2 /*13*/].f_3), &cVar1);
		MemCopy(&cVar1, {Var0}, 0x00000008);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_5", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_F[iVar2 /*13*/].f_4), &cVar1);
		MemCopy(&cVar1, {Var0}, 0x00000008);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_6", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_F[iVar2 /*13*/].f_5), &cVar1);
		MemCopy(&cVar1, {Var0}, 0x00000008);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_7", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_F[iVar2 /*13*/].f_6), &cVar1);
		MemCopy(&cVar1, {Var0}, 0x00000008);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_8", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_F[iVar2 /*13*/].f_7), &cVar1);
		MemCopy(&cVar1, {Var0}, 0x00000008);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_9", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_F[iVar2 /*13*/].f_8), &cVar1);
		MemCopy(&cVar1, {Var0}, 0x00000008);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_10", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_F[iVar2 /*13*/].f_9), &cVar1);
		MemCopy(&cVar1, {Var0}, 0x00000008);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_11", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_F[iVar2 /*13*/].f_A), &cVar1);
		MemCopy(&cVar1, {Var0}, 0x00000008);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_12", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_F[iVar2 /*13*/].f_B), &cVar1);
		MemCopy(&cVar1, {Var0}, 0x00000008);
		StringConCat(&cVar1, "64_", 32);
		StringIntConCat(&cVar1, iVar2, 32);
		StringConCat(&cVar1, "_13", 32);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2910.f_F[iVar2 /*13*/].f_C), &cVar1);
		iVar2++;
	}
	unk_0xE58124D274DF27EF();
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	StringConCat(&Var0, "_TIM", 24);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2910.f_E0), 0x00000011, &Var0);
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000010)
	{
		MemCopy(&cVar1, {Var0}, 0x00000008);
		StringIntConCat(&cVar1, iVar2, 32);
		unk_0x7DA5C9436776820A(&(uParam0->f_2910.f_E0[iVar2]), &cVar1);
		iVar2++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x1FF5A446D37587EA();
}

void func_12(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_GENERAL_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_13(&(uParam0->f_181E), &cVar0);
}

void func_13(var uParam0, char* sParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	char cVar3[64];
	int iVar4;
	int iVar5;
	char cVar6[16];
	char cVar7[16];
	char cVar8[16];
	char cVar9[16];
	char cVar10[16];
	
	unk_0x5F1695B3F13A00D3(uParam0, 0x000010F2, sParam1);
	unk_0x7DA5C9436776820A(uParam0, "CASH_GIVEN_TOTAL");
	unk_0x7DA5C9436776820A(&(uParam0->f_1), "CASH_GIVEN_TIME");
	unk_0x7DA5C9436776820A(&(uParam0->f_2), "LAST_SAVED_CAR");
	unk_0x7DA5C9436776820A(&(uParam0->f_3), "CURRENT_PROP_VALUE");
	unk_0x7DA5C9436776820A(&(uParam0->f_B), "iNewVehPurchased");
	unk_0x7DA5C9436776820A(&(uParam0->f_4), "WHEELIE_TIMER");
	unk_0x7DA5C9436776820A(&(uParam0->f_5), "WHEELIE_UPDATES");
	unk_0x7DA5C9436776820A(&(uParam0->f_6), "WHEELIE_TIME");
	unk_0xB736AD3F7362C880(&(uParam0->f_7), "GRAB_TIME");
	unk_0x7DA5C9436776820A(&(uParam0->f_8), "iLastSoldVehicleTime");
	unk_0x7DA5C9436776820A(&(uParam0->f_9), "ilasttimeplayed");
	unk_0x7DA5C9436776820A(&(uParam0->f_A), "iSaveCoupons");
	unk_0x7DA5C9436776820A(&(uParam0->f_C), "iLastBruciePillReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_D), "iLastSecVanReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_E), "iLastBountyReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_F), "iLastParaReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_10), "iLastCrateDropReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_11), "iLastGangAttackReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_12), "iLastImpExpReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_13), "iLastInsuranceReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_14), "iLastSurvivalReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_15), "iLastBikerBackupReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_16), "iLastVagosBackupReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_17), "iLastLesterVehReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_18), "iLastPersonalVehDeliveryReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_19), "iLastPegasusVehicleReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_1A), "iLastMerryweatherReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_1B), "iLastLesterHelpReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_1C), "iLastLesterReqJobReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_1D), "iLastGeraldReqJobReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_1E), "iLastSimeonReqJobReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_1F), "iLastMartinReqJobReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_20), "iLastRonReqJobReminder");
	unk_0x7DA5C9436776820A(&(uParam0->f_21), "iRecentlyPassedMissionBitset");
	unk_0x7DA5C9436776820A(&(uParam0->f_22), "iRecentlyPassedMissionTime");
	unk_0x7DA5C9436776820A(&(uParam0->f_23), "iLastImportExportDelTime");
	unk_0x7DA5C9436776820A(&(uParam0->f_24), "iLastImportExportListTime");
	unk_0x7DA5C9436776820A(&(uParam0->f_25), "iMyLastImportExportListDay");
	unk_0x7DA5C9436776820A(&(uParam0->f_26), "iVehicleWebsiteReminderTime");
	unk_0xB736AD3F7362C880(&(uParam0->f_27), "bDefaultClothesSet");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_28), 0x00000006, "CLOTHES");
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_28)
	{
		StringCopy(&Var1, "CLOTHES", 16);
		StringIntConCat(&Var1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_28[iVar0]), &Var1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_2E), 0x000004C9, "CARMODS");
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_2E)
	{
		StringCopy(&Var1, "CARMODS", 16);
		StringIntConCat(&Var1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_2E[iVar0]), &Var1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x7DA5C9436776820A(&(uParam0->f_4F7), "iLastCrewCharWasIn");
	unk_0x7DA5C9436776820A(&(uParam0->f_4F8), "iStripperUnlockedBS");
	unk_0x7DA5C9436776820A(&(uParam0->f_4F9), "iGeneralBS");
	unk_0x7DA5C9436776820A(&(uParam0->f_4FA), "iCarsModifiedTimeStamp");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_4FB), 0x0000000A, "GOLF_fLongestDriveHole");
	iVar2 = 0x00000000;
	while (iVar2 < uParam0->f_4FB)
	{
		StringCopy(&cVar3, "fLongestDriveHole_", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		unk_0xCADE461BBB25EE16(&(uParam0->f_4FB[iVar2]), &cVar3);
		iVar2++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_505), 0x0000000A, "GOLF_fLongestPuttHole");
	iVar2 = 0x00000000;
	while (iVar2 < uParam0->f_505)
	{
		StringCopy(&cVar3, "fLongestPuttHole_", 64);
		StringIntConCat(&cVar3, iVar2, 64);
		unk_0xCADE461BBB25EE16(&(uParam0->f_505[iVar2]), &cVar3);
		iVar2++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x7DA5C9436776820A(&(uParam0->f_50F), "GOLF_iBestRound");
	unk_0xCADE461BBB25EE16(&(uParam0->f_510), "GOLF_fLongestDrive");
	unk_0xCADE461BBB25EE16(&(uParam0->f_511), "GOLF_fLongestPutt");
	unk_0x7DA5C9436776820A(&(uParam0->f_512), "iShareLJCashTotal");
	unk_0x7DA5C9436776820A(&(uParam0->f_513), "iShareLJCashTime");
	unk_0x7DA5C9436776820A(&(uParam0->f_514), "iReceiveLJCashTotal");
	unk_0x7DA5C9436776820A(&(uParam0->f_515), "iReceiveLJCashTime");
	unk_0x7DA5C9436776820A(&(uParam0->f_516), "LAST_ACC_PROP");
	unk_0x7DA5C9436776820A(&(uParam0->f_517), "MULTI1_PROP_VAL");
	unk_0x7DA5C9436776820A(&(uParam0->f_530), "LAST_ACC_SMPLINT");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_518), 0x00000018, "PROP_ARY_VAL");
	iVar4 = 0x00000000;
	while (iVar4 < uParam0->f_518)
	{
		StringCopy(&Var1, "PROP_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_518[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x7DA5C9436776820A(&(uParam0->f_531), "KR_PATCH_UPDATE");
	iVar4 = 0x00000000;
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_A7D), 0x00000397, "DLC_MODS");
	iVar4 = 0x00000000;
	while (iVar4 < uParam0->f_A7D)
	{
		StringCopy(&Var1, "DLC_MODS_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_A7D[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	iVar4 = 0x00000000;
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_E14), 0x000001F6, "DLC_SUPERMODS");
	iVar4 = 0x00000000;
	while (iVar4 < uParam0->f_E14)
	{
		StringCopy(&Var1, "DLC_SMODS_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_E14[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_532), 0x00000112, "OUTFIT_CompDraw");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000015)
	{
		StringCopy(&Var1, "CompDraw", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x9C22F8DCFE1B7911(&(uParam0->f_532[iVar4 /*13*/]), 0x0000000D, &Var1);
		iVar5 = 0x00000000;
		while (iVar5 < 0x0000000C)
		{
			StringCopy(&Var1, "CompDraw", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			unk_0x7DA5C9436776820A(&(uParam0->f_532[iVar4 /*13*/][iVar5]), &Var1);
			iVar5++;
		}
		unk_0xE58124D274DF27EF();
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_644), 0x00000112, "OUTFIT_CompTex");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000015)
	{
		StringCopy(&Var1, "CompTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x9C22F8DCFE1B7911(&(uParam0->f_644[iVar4 /*13*/]), 0x0000000D, &Var1);
		iVar5 = 0x00000000;
		while (iVar5 < 0x0000000C)
		{
			StringCopy(&Var1, "CompTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			unk_0x7DA5C9436776820A(&(uParam0->f_644[iVar4 /*13*/][iVar5]), &Var1);
			iVar5++;
		}
		unk_0xE58124D274DF27EF();
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_756), 0x000000D3, "OUTFIT_PropID");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000015)
	{
		StringCopy(&Var1, "PropID", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x9C22F8DCFE1B7911(&(uParam0->f_756[iVar4 /*10*/]), 0x0000000A, &Var1);
		iVar5 = 0x00000000;
		while (iVar5 < 0x00000009)
		{
			StringCopy(&Var1, "PropID", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			unk_0x7DA5C9436776820A(&(uParam0->f_756[iVar4 /*10*/][iVar5]), &Var1);
			iVar5++;
		}
		unk_0xE58124D274DF27EF();
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_829), 0x000000D3, "OUTFIT_PropTex");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000015)
	{
		StringCopy(&Var1, "PropTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x9C22F8DCFE1B7911(&(uParam0->f_829[iVar4 /*10*/]), 0x0000000A, &Var1);
		iVar5 = 0x00000000;
		while (iVar5 < 0x00000009)
		{
			StringCopy(&Var1, "PropTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar4, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar5, 16);
			unk_0x7DA5C9436776820A(&(uParam0->f_829[iVar4 /*10*/][iVar5]), &Var1);
			iVar5++;
		}
		unk_0xE58124D274DF27EF();
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_8FC), 0x00000016, "OUTFIT_Stored");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000015)
	{
		StringCopy(&Var1, "Stored", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_8FC[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_912), 0x00000016, "OUTFIT_CrewTatA");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000015)
	{
		StringCopy(&Var1, "CrewDecalA", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_912[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_928), 0x00000016, "OUTFIT_CrewTatB");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000015)
	{
		StringCopy(&Var1, "CrewDecalB", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_928[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_93E), 0x00000016, "OUTFIT_CrewTatC");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000015)
	{
		StringCopy(&Var1, "CrewDecalC", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_93E[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_954), 0x00000016, "OUTFIT_CrewTatD");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000015)
	{
		StringCopy(&Var1, "CrewDecalD", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_954[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_96A), 0x00000016, "OUTFIT_CrewTatE");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000015)
	{
		StringCopy(&Var1, "CrewDecalE", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_96A[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_980), 0x00000016, "OUTFIT_CrewTatF");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000015)
	{
		StringCopy(&Var1, "CrewDecalF", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_980[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_A3F), 0x00000016, "OUTFIT_Shirt");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000015)
	{
		StringCopy(&Var1, "ShirtDecal", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_A3F[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_996), 0x000000A9, "OUTFIT_Name");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000015)
	{
		StringCopy(&Var1, "Name", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x3F474BE835ABC04B(&(uParam0->f_996[iVar4 /*8*/]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_A55), 0x00000028, "LAST_JobGamer");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000003)
	{
		StringCopy(&Var1, "LastJobG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_1", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_A55[iVar4 /*13*/]), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_2", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_A55[iVar4 /*13*/].f_1), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_3", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_A55[iVar4 /*13*/].f_2), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_4", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_A55[iVar4 /*13*/].f_3), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_5", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_A55[iVar4 /*13*/].f_4), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_6", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_A55[iVar4 /*13*/].f_5), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_7", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_A55[iVar4 /*13*/].f_6), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_8", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_A55[iVar4 /*13*/].f_7), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_9", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_A55[iVar4 /*13*/].f_8), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_10", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_A55[iVar4 /*13*/].f_9), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_11", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_A55[iVar4 /*13*/].f_A), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_12", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_A55[iVar4 /*13*/].f_B), &cVar6);
		cVar6 = { Var1 };
		StringConCat(&cVar6, "_13", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_A55[iVar4 /*13*/].f_C), &cVar6);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0xB736AD3F7362C880(&(uParam0->f_100A), "DO_CompletedObjectives");
	unk_0xB736AD3F7362C880(&(uParam0->f_100B), "DO_LoggedInToday");
	unk_0x7DA5C9436776820A(&(uParam0->f_100C), "DO_xValue");
	unk_0x7DA5C9436776820A(&(uParam0->f_100D), "DO_LastHistoryLength");
	unk_0x7DA5C9436776820A(&(uParam0->f_100E), "DO_LastResetTime");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_100F), 0x0000000A, "DO_Objectives");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000003)
	{
		StringCopy(&Var1, "Objective", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_100F[iVar4 /*3*/]), &Var1);
		StringCopy(&Var1, "Completed", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_100F[iVar4 /*3*/].f_1), &Var1);
		StringCopy(&Var1, "Initial", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_100F[iVar4 /*3*/].f_2), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_1019), 0x00000019, "DO_History");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000018)
	{
		StringCopy(&Var1, "History", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_1019[iVar4]), &Var1);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_1032), 0x00000031, "LAST_JobGamer_TL");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000003)
	{
		StringCopy(&Var1, "LastJobTL_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar7 = { Var1 };
		StringConCat(&cVar7, "_1", 16);
		unk_0x9D6C39B9CDAFDE91(&(uParam0->f_1032[iVar4 /*16*/]), &cVar7);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_1063), 0x0000000B, "BGSAVEINT");
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		StringCopy(&Var1, "BGSAVEINT", 16);
		StringIntConCat(&Var1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_1063[iVar0]), &Var1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_106E), 0x00000003, "PROPLIB");
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_106E)
	{
		StringCopy(&Var1, "PROPLIB", 16);
		StringIntConCat(&Var1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_106E[iVar0]), &Var1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_1071), 0x00000028, "LAST_GOGamer");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000003)
	{
		StringCopy(&Var1, "LastGOG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_1", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1071[iVar4 /*13*/]), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_2", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1071[iVar4 /*13*/].f_1), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_3", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1071[iVar4 /*13*/].f_2), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_4", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1071[iVar4 /*13*/].f_3), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_5", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1071[iVar4 /*13*/].f_4), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_6", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1071[iVar4 /*13*/].f_5), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_7", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1071[iVar4 /*13*/].f_6), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_8", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1071[iVar4 /*13*/].f_7), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_9", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1071[iVar4 /*13*/].f_8), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_10", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1071[iVar4 /*13*/].f_9), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_11", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1071[iVar4 /*13*/].f_A), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_12", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1071[iVar4 /*13*/].f_B), &cVar8);
		cVar8 = { Var1 };
		StringConCat(&cVar8, "_13", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1071[iVar4 /*13*/].f_C), &cVar8);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_1099), 0x00000028, "LAST_GOJobGamer");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000003)
	{
		StringCopy(&Var1, "LastGJG64_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_1", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1099[iVar4 /*13*/]), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_2", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1099[iVar4 /*13*/].f_1), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_3", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1099[iVar4 /*13*/].f_2), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_4", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1099[iVar4 /*13*/].f_3), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_5", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1099[iVar4 /*13*/].f_4), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_6", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1099[iVar4 /*13*/].f_5), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_7", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1099[iVar4 /*13*/].f_6), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_8", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1099[iVar4 /*13*/].f_7), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_9", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1099[iVar4 /*13*/].f_8), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_10", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1099[iVar4 /*13*/].f_9), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_11", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1099[iVar4 /*13*/].f_A), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_12", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1099[iVar4 /*13*/].f_B), &cVar9);
		cVar9 = { Var1 };
		StringConCat(&cVar9, "_13", 16);
		unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1099[iVar4 /*13*/].f_C), &cVar9);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_10C1), 0x00000031, "LAST_GOJobGamer_TL");
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000003)
	{
		StringCopy(&Var1, "LastGJTL_", 16);
		StringIntConCat(&Var1, iVar4, 16);
		cVar10 = { Var1 };
		StringConCat(&cVar10, "_1", 16);
		unk_0x9D6C39B9CDAFDE91(&(uParam0->f_10C1[iVar4 /*16*/]), &cVar10);
		iVar4++;
	}
	unk_0xE58124D274DF27EF();
	unk_0xE58124D274DF27EF();
}

void func_14(var uParam0, int iParam1)
{
	func_15(&(uParam0->f_17C6), iParam1);
}

void func_15(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar1;
	
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_29), 0x0000000B, "CAR_HIDDEN");
	iVar1 = 0x00000000;
	while (iVar1 < 0x0000000A)
	{
		StringCopy(&cVar0, "CAR_HIDDEN", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		unk_0xB736AD3F7362C880(&(uParam0->f_29[iVar1]), &cVar0);
		iVar1++;
	}
	unk_0xE58124D274DF27EF();
	func_16(uParam0, "CAR_APP_ORDER");
	StringCopy(&cVar0, "bUpdateMods", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0xB736AD3F7362C880(&(uParam0->f_34), &cVar0);
	StringCopy(&cVar0, "bMultiplayerDataWiped", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0xB736AD3F7362C880(&(uParam0->f_35), &cVar0);
	StringCopy(&cVar0, "bCarAppPlateSet", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0xB736AD3F7362C880(&(uParam0->f_37), &cVar0);
	StringCopy(&cVar0, "bDeleteCarData", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0xB736AD3F7362C880(&(uParam0->f_36), &cVar0);
	StringCopy(&cVar0, "iCarAppPlateBack", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0x7DA5C9436776820A(&(uParam0->f_3C), &cVar0);
	StringCopy(&cVar0, "tlCarAppPlateText", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0xDDECB5D51226D22E(&(uParam0->f_38), &cVar0);
	StringCopy(&cVar0, "iOrderCount", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0x7DA5C9436776820A(&(uParam0->f_3D), &cVar0);
	StringCopy(&cVar0, "iOrderVehicle", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	unk_0x7DA5C9436776820A(&(uParam0->f_3E), &cVar0);
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_3F), 0x0000000B, "SAVED_VEH_SLOT");
	iVar1 = 0x00000000;
	while (iVar1 < 0x0000000A)
	{
		StringCopy(&cVar0, "VEH_SLOT", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		unk_0x7DA5C9436776820A(&(uParam0->f_3F[iVar1]), &cVar0);
		iVar1++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_4A), 0x0000000B, "SAVED_VEH_PRIO");
	iVar1 = 0x00000000;
	while (iVar1 < 0x0000000A)
	{
		StringCopy(&cVar0, "VEH_PRIO", 64);
		StringIntConCat(&cVar0, iVar1, 64);
		unk_0x7DA5C9436776820A(&(uParam0->f_4A[iVar1]), &cVar0);
		iVar1++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x7DA5C9436776820A(&(uParam0->f_55), "LAST_USED");
	unk_0x7DA5C9436776820A(&(uParam0->f_56), "NEW_SAVED");
	unk_0xB736AD3F7362C880(&(uParam0->f_57), "SETUP_INIT");
}

void func_16(var uParam0, char* sParam1)
{
	unk_0x5F1695B3F13A00D3(uParam0, 0x00000029, sParam1);
	unk_0xAC53D61F7455A6D0(uParam0, "Model");
	unk_0x7DA5C9436776820A(&(uParam0->f_1), "iColourID1");
	unk_0x7DA5C9436776820A(&(uParam0->f_2), "iColourID2");
	unk_0x7DA5C9436776820A(&(uParam0->f_3), "iColour1Group");
	unk_0x7DA5C9436776820A(&(uParam0->f_4), "iColour2Group");
	unk_0x7DA5C9436776820A(&(uParam0->f_5), "iWindowTint");
	unk_0x7DA5C9436776820A(&(uParam0->f_6), "iTyreSmokeR");
	unk_0x7DA5C9436776820A(&(uParam0->f_7), "iTyreSmokeG");
	unk_0x7DA5C9436776820A(&(uParam0->f_8), "iTyreSmokeB");
	unk_0x7DA5C9436776820A(&(uParam0->f_9), "iEngine");
	unk_0x7DA5C9436776820A(&(uParam0->f_A), "iBrakes");
	unk_0x7DA5C9436776820A(&(uParam0->f_B), "iWheels");
	unk_0x7DA5C9436776820A(&(uParam0->f_C), "iWheelType");
	unk_0x7DA5C9436776820A(&(uParam0->f_D), "iExhaust");
	unk_0x7DA5C9436776820A(&(uParam0->f_E), "iSuspension");
	unk_0x7DA5C9436776820A(&(uParam0->f_F), "iArmour");
	unk_0x7DA5C9436776820A(&(uParam0->f_10), "iHorn");
	unk_0x7DA5C9436776820A(&(uParam0->f_11), "iLights");
	unk_0xB736AD3F7362C880(&(uParam0->f_12), "bBulletProofTyres");
	unk_0x7DA5C9436776820A(&(uParam0->f_13), "iTurbo");
	unk_0x7DA5C9436776820A(&(uParam0->f_14), "iTyreSmoke");
	unk_0xDDECB5D51226D22E(&(uParam0->f_15), "tlPlateText");
	unk_0x7DA5C9436776820A(&(uParam0->f_19), "iPlateBack");
	unk_0x7DA5C9436776820A(&(uParam0->f_1A), "UID");
	unk_0x7DA5C9436776820A(&(uParam0->f_1B), "Cost");
	unk_0xDDECB5D51226D22E(&(uParam0->f_1C), "tlPlateText_pending");
	unk_0x7DA5C9436776820A(&(uParam0->f_20), "iPlateBack_pending");
	unk_0xB736AD3F7362C880(&(uParam0->f_21), "bProcessOrder");
	unk_0xB736AD3F7362C880(&(uParam0->f_24), "bOrderPending");
	unk_0xB736AD3F7362C880(&(uParam0->f_23), "bOrderReceivedOnBoot");
	unk_0xB736AD3F7362C880(&(uParam0->f_22), "bOrderForPlayerVehicle");
	unk_0xB736AD3F7362C880(&(uParam0->f_25), "bCheckPlateProfanity");
	unk_0xB736AD3F7362C880(&(uParam0->f_28), "bOrderPaidFor");
	unk_0xB736AD3F7362C880(&(uParam0->f_26), "bSCProfanityFailed");
	unk_0xB736AD3F7362C880(&(uParam0->f_27), "bOrderFailedFunds");
	unk_0x1FF5A446D37587EA();
}

void func_17(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_PROPERTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_18(&(uParam0->f_1582), &cVar0);
}

void func_18(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0x5F1695B3F13A00D3(uParam0, 0x00000244, sParam1);
	unk_0xB736AD3F7362C880(uParam0, "TV_ON");
	unk_0x7DA5C9436776820A(&(uParam0->f_1), "TV_CHANNEL_ID");
	unk_0xB736AD3F7362C880(&(uParam0->f_2), "PENTHOUSE_TV_ON");
	unk_0x7DA5C9436776820A(&(uParam0->f_3), "PENTHOUSE_TV_CHANNEL_ID");
	unk_0xB736AD3F7362C880(&(uParam0->f_4), "MEDIA_ROOM_TV_ON");
	unk_0x7DA5C9436776820A(&(uParam0->f_5), "MEDIA_ROOM_TV_CHANNEL_ID");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_6), 0x00000003, "RADIO_ON");
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		StringCopy(&cVar1, "RADIO_ON_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0xB736AD3F7362C880(&(uParam0->f_6[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_9), 0x00000003, "RADIO_STATION");
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		StringCopy(&cVar1, "RDO_STA_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0xB736AD3F7362C880(&(uParam0->f_C), "GARAGE_TV_ON");
	unk_0x7DA5C9436776820A(&(uParam0->f_D), "GARAGE_TV_CHANNEL_ID");
	unk_0xB736AD3F7362C880(&(uParam0->f_E), "GARAGE_RADIO_ON");
	unk_0x7DA5C9436776820A(&(uParam0->f_F), "GARAGE_RADIO_STATION_ID");
	unk_0x7DA5C9436776820A(&(uParam0->f_10), "NUMBERS_TIMES_SMOKED");
	unk_0x7DA5C9436776820A(&(uParam0->f_11), "NUMBER_TIMES_DRANK");
	unk_0x7DA5C9436776820A(&(uParam0->f_12), "NUMBER_TIMES_STRIPPERS");
	unk_0x7DA5C9436776820A(&(uParam0->f_13), "NUMBERS_TIMES_SMOKED_SECOND");
	unk_0x7DA5C9436776820A(&(uParam0->f_14), "NUMBER_TIMES_DRANK_SECOND");
	unk_0x7DA5C9436776820A(&(uParam0->f_15), "NUMBER_TIMES_STRIPPERS_SECOND");
	unk_0x7DA5C9436776820A(&(uParam0->f_16), "NUMBERS_TIMES_SMOKED3");
	unk_0x7DA5C9436776820A(&(uParam0->f_17), "NUMBER_TIMES_DRANK3");
	unk_0x7DA5C9436776820A(&(uParam0->f_18), "NUMBER_TIMES_STRIPPERS3");
	unk_0x7DA5C9436776820A(&(uParam0->f_19), "NUMBERS_TIMES_SMOKED4");
	unk_0x7DA5C9436776820A(&(uParam0->f_1A), "NUMBER_TIMES_DRANK4");
	unk_0x7DA5C9436776820A(&(uParam0->f_1B), "NUMBER_TIMES_STRIPPERS4");
	unk_0x7DA5C9436776820A(&(uParam0->f_1C), "NUMBERS_TIMES_SMOKED5");
	unk_0x7DA5C9436776820A(&(uParam0->f_1D), "NUMBER_TIMES_DRANK5");
	unk_0x7DA5C9436776820A(&(uParam0->f_1E), "NUMBER_TIMES_STRIPPERS5");
	unk_0x7DA5C9436776820A(&(uParam0->f_1F), "NUMBERS_TIMES_SMOKEDYacht");
	unk_0x7DA5C9436776820A(&(uParam0->f_20), "NUMBER_TIMES_DRANKYacht");
	unk_0x7DA5C9436776820A(&(uParam0->f_21), "NUMBER_TIMES_STRIPPERSYacht");
	unk_0xAC53D61F7455A6D0(&(uParam0->f_22), "DATE_LAST_CLEANED_APARTMENT");
	unk_0xAC53D61F7455A6D0(&(uParam0->f_23), "SHOWERS_TAKEN");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_24), 0x00000015, "PROP_DRINKS");
	StringCopy(&cVar1, "DRANK_", 16);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_24[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		StringCopy(&cVar1, "DRANK_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_24[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_39), 0x00000015, "PROP_SMOKES");
	StringCopy(&cVar1, "SMOKED_", 16);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_39[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		StringCopy(&cVar1, "SMOKED_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_39[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_4E), 0x00000015, "PROP_STRIPPERS");
	StringCopy(&cVar1, "STRIPPERS_", 16);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_4E[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		StringCopy(&cVar1, "STRIPPERS_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_4E[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_63), 0x000001E1, "PROP_NAMEDVEHS");
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000001E)
	{
		StringCopy(&cVar1, "NAMEDVEH_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x9D6C39B9CDAFDE91(&(uParam0->f_63[iVar0 /*16*/]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0xE58124D274DF27EF();
}

void func_19(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_BIG_ASS_VEHICLES", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_20(&(uParam0->f_157C), &cVar0);
}

void func_20(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0x5F1695B3F13A00D3(uParam0, 0x00000006, sParam1);
	unk_0x7DA5C9436776820A(uParam0, "BAV_Timestamp");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_1), 0x00000005, "B_A_V_BS_ID");
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		StringCopy(&cVar1, "B_A_V_BS_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_1[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0xE58124D274DF27EF();
}

void func_21(var uParam0, int iParam1)
{
	vector3 vVar0;
	
	StringCopy(&vVar0, "MP_SAVED_VEHICLES", 24);
	StringIntConCat(&vVar0, iParam1, 24);
	func_22(uParam0, &vVar0);
}

void func_22(var uParam0, char* sParam1)
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0x00000000;
	unk_0x9C22F8DCFE1B7911(uParam0, 0x0000157C, sParam1);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000027)
	{
		StringCopy(&Var1, "MP_VEHICLE", 32);
		StringIntConCat(&Var1, iVar0, 32);
		func_23(uParam0[iVar0 /*141*/], &Var1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
}

void func_23(var uParam0, char* sParam1)
{
	unk_0x5F1695B3F13A00D3(uParam0, 0x0000008D, sParam1);
	func_24(uParam0, "VEHICLE_SETUP_STRUCT_MP");
	unk_0x7DA5C9436776820A(&(uParam0->f_66), "VEHICLE_BS");
	unk_0x7DA5C9436776820A(&(uParam0->f_68), "PAID_PREMIUM");
	unk_0x9D6C39B9CDAFDE91(&(uParam0->f_69), "PAID_PLAYER");
	unk_0x9D6C39B9CDAFDE91(&(uParam0->f_79), "RADIO_STATION");
	unk_0x7DA5C9436776820A(&(uParam0->f_67), "IMPOUND_TIME");
	unk_0x7DA5C9436776820A(&(uParam0->f_89), "COLOUR_GROUP1");
	unk_0x7DA5C9436776820A(&(uParam0->f_8A), "COLOUR_GROUP2");
	unk_0x7DA5C9436776820A(&(uParam0->f_8B), "PRICE_PAID");
	unk_0x7DA5C9436776820A(&(uParam0->f_8C), "OBTAIN_TIME");
	unk_0x1FF5A446D37587EA();
}

void func_24(var uParam0, char* sParam1)
{
	func_26(uParam0, "VEHICLE_SETUP_STRUCT");
	unk_0x5F1695B3F13A00D3(uParam0, 0x00000066, sParam1);
	unk_0x7DA5C9436776820A(&(uParam0->f_4E), "iSpawnVehicleHorn");
	unk_0x7DA5C9436776820A(&(uParam0->f_4F), "iHornID");
	unk_0xCADE461BBB25EE16(&(uParam0->f_50), "fEnveffScale");
	unk_0x7DA5C9436776820A(&(uParam0->f_61), "iColour5");
	unk_0x7DA5C9436776820A(&(uParam0->f_62), "iLivery2");
	unk_0x7DA5C9436776820A(&(uParam0->f_63), "iColour6");
	func_25(&(uParam0->f_51), "GamerHandleOfCarOwner");
	unk_0x7DA5C9436776820A(&(uParam0->f_5E), "OwnerStatus");
	unk_0x7DA5C9436776820A(&(uParam0->f_5F), "iFlags");
	unk_0x7DA5C9436776820A(&(uParam0->f_60), "iPVSlot");
	unk_0x7DA5C9436776820A(&(uParam0->f_64), "iPlayerIndex");
	unk_0x7DA5C9436776820A(&(uParam0->f_65), "iIEPlayerVehicle");
	unk_0x1FF5A446D37587EA();
}

void func_25(var uParam0, char* sParam1)
{
	unk_0x5F1695B3F13A00D3(uParam0, 0x0000000D, sParam1);
	unk_0x0F8F6FD83D9F7A89(uParam0, "Data64_1");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_1), "Data64_2");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_2), "Data64_3");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_3), "Data64_4");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_4), "Data64_5");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_5), "Data64_6");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_6), "Data64_7");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_7), "Data64_8");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_8), "Data64_9");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_9), "Data64_10");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_A), "Data64_11");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_B), "Data64_12");
	unk_0x0F8F6FD83D9F7A89(&(uParam0->f_C), "Data64_13");
	unk_0x1FF5A446D37587EA();
}

void func_26(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	unk_0x5F1695B3F13A00D3(uParam0, 0x0000004E, sParam1);
	unk_0x7DA5C9436776820A(uParam0, "iPlateIndex");
	unk_0xDDECB5D51226D22E(&(uParam0->f_1), "tlPlateText");
	unk_0x7DA5C9436776820A(&(uParam0->f_5), "iColour1");
	unk_0x7DA5C9436776820A(&(uParam0->f_6), "iColour2");
	unk_0x7DA5C9436776820A(&(uParam0->f_7), "iColourExtra1");
	unk_0x7DA5C9436776820A(&(uParam0->f_8), "iColourExtra2");
	unk_0x7DA5C9436776820A(&(uParam0->f_3E), "iTyreR");
	unk_0x7DA5C9436776820A(&(uParam0->f_3F), "iTyreG");
	unk_0x7DA5C9436776820A(&(uParam0->f_40), "iTyreB");
	unk_0x7DA5C9436776820A(&(uParam0->f_41), "iWindowTintColour");
	unk_0x7DA5C9436776820A(&(uParam0->f_43), "iLivery");
	unk_0x7DA5C9436776820A(&(uParam0->f_45), "iWheelType");
	unk_0xAC53D61F7455A6D0(&(uParam0->f_44), "eRoofState");
	unk_0x7DA5C9436776820A(&(uParam0->f_4D), "iFlags");
	unk_0x7DA5C9436776820A(&(uParam0->f_47), "iCustomR");
	unk_0x7DA5C9436776820A(&(uParam0->f_48), "iCustomG");
	unk_0x7DA5C9436776820A(&(uParam0->f_49), "iCustomB");
	unk_0x7DA5C9436776820A(&(uParam0->f_4A), "iNeonR");
	unk_0x7DA5C9436776820A(&(uParam0->f_4B), "iNeonG");
	unk_0x7DA5C9436776820A(&(uParam0->f_4C), "iNeonB");
	unk_0xAC53D61F7455A6D0(&(uParam0->f_42), "eModel");
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_9), 0x00000032, "MODS_ID");
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000031)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0x9C22F8DCFE1B7911(&(uParam0->f_3B), 0x00000003, "MODS_VAR");
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		unk_0x7DA5C9436776820A(&(uParam0->f_3B[iVar0]), &cVar1);
		iVar0++;
	}
	unk_0xE58124D274DF27EF();
	unk_0xAC53D61F7455A6D0(&(uParam0->f_46), "eLockState");
	unk_0x1FF5A446D37587EA();
}

void func_27(float fParam0)
{
	func_36();
	if (fParam0 == 1f)
	{
		func_34();
	}
	if (fParam0 <= 1.1f)
	{
		func_33();
	}
	if (fParam0 < 1.5f)
	{
		func_31();
	}
	if (fParam0 <= 1.5f)
	{
		func_30();
	}
	if (fParam0 == 1.5f)
	{
		func_29();
	}
	if (fParam0 < 1.7f)
	{
		func_28();
	}
}

void func_28()
{
	Global_1B416.f_673D.f_4 = 0x00000000;
}

void func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x6FB46C25CCB7E6D5(joaat("content_hanger_veh"), &iVar0, 0xFFFFFFFF);
	unk_0x6FB46C25CCB7E6D5(joaat("content_marina_veh"), &iVar1, 0xFFFFFFFF);
	unk_0x6FB46C25CCB7E6D5(joaat("content_heli_veh"), &iVar2, 0xFFFFFFFF);
	if ((iVar0 >= 0x00000000 && iVar1 >= 0x00000000) && iVar2 >= 0x00000000)
	{
		Global_1B416.f_29C.f_51B = (Global_1B416.f_29C.f_51B - iVar0);
	}
}

void func_30()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = 0x000000AB;
		while (iVar1 <= 0x000000C6)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_6259[iVar1], iVar0))
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_6259[iVar1]), iVar0);
				iVar2 = (iVar1 + (0x000000C6 - 0x000000AB)) + 1;
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_6259[iVar2]), iVar0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_31()
{
	if ((((func_32(0x00000036) || func_32(0x00000037)) || func_32(0x00000038)) || func_32(0x00000039)) || func_32(0x0000003A))
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_271B.f_19), 0x00000006);
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

void func_33()
{
}

void func_34()
{
	if (Global_1B416.f_2378.f_63.f_CD[0x00000007] != 0x00000000)
	{
		if (!Global_1B416.f_2378.f_14A[0x00000056 /*6*/])
		{
			Global_1B416.f_2378.f_14A[0x00000056 /*6*/] = 0x00000001;
		}
	}
	if (Global_1B416.f_2378.f_63.f_CD[0x00000008] != 0x00000000)
	{
		if (!Global_1B416.f_2378.f_14A[0x00000047 /*6*/])
		{
			Global_1B416.f_2378.f_14A[0x00000047 /*6*/] = 0x00000001;
		}
	}
	if (Global_1B416.f_2378.f_63.f_CD[0x00000009] != 0x00000000)
	{
		if (!Global_1B416.f_2378.f_14A[0x0000005B /*6*/])
		{
			Global_1B416.f_2378.f_14A[0x0000005B /*6*/] = 0x00000001;
		}
	}
	if (Global_1B416.f_2378.f_63.f_CD[0x0000000A] != 0x00000000)
	{
		if (!Global_1B416.f_2378.f_14A[0x00000043 /*6*/])
		{
			Global_1B416.f_2378.f_14A[0x00000043 /*6*/] = 0x00000001;
		}
	}
	if (Global_1B416.f_2378.f_63.f_CD[0x0000000B] != 0x00000000)
	{
		if (!Global_1B416.f_2378.f_14A[0x0000004D /*6*/])
		{
			Global_1B416.f_2378.f_14A[0x0000004D /*6*/] = 0x00000001;
		}
	}
	func_35(0x000000C3, 0x000000C6);
	func_35(0x000000C3, 0x000000C5);
	func_35(0x000000C3, 0x000000C4);
}

void func_35(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	
	Var0 = { Global_1B416.f_27CD[iParam0 /*12*/] };
	uVar1 = Global_1B416.f_27CD[iParam0 /*12*/].f_4;
	uVar2 = Global_1B416.f_27CD[iParam0 /*12*/].f_5;
	uVar3 = Global_1B416.f_27CD[iParam0 /*12*/].f_6;
	uVar4 = Global_1B416.f_27CD[iParam0 /*12*/].f_7;
	uVar5 = Global_1B416.f_27CD[iParam0 /*12*/].f_8;
	uVar6 = Global_1B416.f_27CD[iParam0 /*12*/].f_9;
	uVar7 = Global_1B416.f_27CD[iParam0 /*12*/].f_A;
	uVar8 = Global_1B416.f_27CD[iParam0 /*12*/].f_B;
	Global_1B416.f_27CD[iParam0 /*12*/] = { Global_1B416.f_27CD[iParam1 /*12*/] };
	Global_1B416.f_27CD[iParam0 /*12*/].f_4 = Global_1B416.f_27CD[iParam1 /*12*/].f_4;
	Global_1B416.f_27CD[iParam0 /*12*/].f_5 = Global_1B416.f_27CD[iParam1 /*12*/].f_5;
	Global_1B416.f_27CD[iParam0 /*12*/].f_6 = Global_1B416.f_27CD[iParam1 /*12*/].f_6;
	Global_1B416.f_27CD[iParam0 /*12*/].f_7 = Global_1B416.f_27CD[iParam1 /*12*/].f_7;
	Global_1B416.f_27CD[iParam0 /*12*/].f_8 = Global_1B416.f_27CD[iParam1 /*12*/].f_8;
	Global_1B416.f_27CD[iParam0 /*12*/].f_9 = Global_1B416.f_27CD[iParam1 /*12*/].f_9;
	Global_1B416.f_27CD[iParam0 /*12*/].f_A = Global_1B416.f_27CD[iParam1 /*12*/].f_A;
	Global_1B416.f_27CD[iParam0 /*12*/].f_B = Global_1B416.f_27CD[iParam1 /*12*/].f_B;
	Global_1B416.f_27CD[iParam1 /*12*/] = { Var0 };
	Global_1B416.f_27CD[iParam1 /*12*/].f_4 = uVar1;
	Global_1B416.f_27CD[iParam1 /*12*/].f_5 = uVar2;
	Global_1B416.f_27CD[iParam1 /*12*/].f_6 = uVar3;
	Global_1B416.f_27CD[iParam1 /*12*/].f_7 = uVar4;
	Global_1B416.f_27CD[iParam1 /*12*/].f_8 = uVar5;
	Global_1B416.f_27CD[iParam1 /*12*/].f_9 = uVar6;
	Global_1B416.f_27CD[iParam1 /*12*/].f_A = uVar7;
	Global_1B416.f_27CD[iParam1 /*12*/].f_B = uVar8;
}

void func_36()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (!func_37(Global_1B416.f_6143[iVar0 /*4*/]))
		{
			if (Global_1B416.f_6143[iVar0 /*4*/] != 0x00000091)
			{
				Global_1B416.f_6143[iVar0 /*4*/] = 0x00000091;
			}
		}
		iVar0++;
	}
}

bool func_37(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_38()
{
	unk_0xFDC5B11B44C84221("No_Filter", 0x00000001);
	unk_0xFDC5B11B44C84221("phone_cam1", 0x00000001);
	unk_0xFDC5B11B44C84221("phone_cam2", 0x00000001);
	unk_0xFDC5B11B44C84221("phone_cam3", 0x00000001);
	unk_0xFDC5B11B44C84221("phone_cam4", 0x00000001);
	unk_0xFDC5B11B44C84221("phone_cam5", 0x00000001);
	unk_0xFDC5B11B44C84221("phone_cam6", 0x00000001);
	unk_0xFDC5B11B44C84221("phone_cam7", 0x00000001);
	unk_0xFDC5B11B44C84221("phone_cam9", 0x00000001);
	unk_0xFDC5B11B44C84221("phone_cam12", 0x00000000);
}

void func_39(int iParam0, int iParam1)
{
	unk_0x8CFFBE74CB5C864A(iParam0);
	while (!unk_0x64EF15C5E09BAD76(iParam0))
	{
		SYSTEM::WAIT(0x00000000);
		unk_0x8CFFBE74CB5C864A(iParam0);
	}
	SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iParam0, iParam1);
}

int func_40()
{
	if (((unk_0x1F045D4082B1ADB2() || unk_0x82DE105F06629C0B()) || unk_0xE18B5B3CCCFB7FA3()) || unk_0xF024BD99B321A898())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

