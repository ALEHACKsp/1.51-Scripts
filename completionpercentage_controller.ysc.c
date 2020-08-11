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
	var uLocal_28[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_29[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_30[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_31[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_32[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_33[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	vector3 vLocal_40 = { 0f, 0f, 0f };
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
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
	if (unk_0x2EBF608FFE6CA406(0x00000022))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_151();
	iLocal_42 = unk_0x1C0640BA9A7327B3();
	iLocal_44 = 0x00000000;
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		func_141();
		if (Global_1B30C)
		{
			if ((iLocal_41 - iLocal_44) > 0x000493E0)
			{
				iLocal_49 = 0x00000001;
				iLocal_44 = unk_0x1C0640BA9A7327B3();
				Global_1B30C = 0x00000000;
			}
			else if (iLocal_44 == 0x00000000)
			{
				iLocal_49 = 0x00000001;
				iLocal_44 = unk_0x1C0640BA9A7327B3();
				Global_1B30C = 0x00000000;
			}
			else
			{
				iLocal_49 = 0x00000000;
				Global_1B30C = 0x00000000;
			}
		}
		if (iLocal_49 == 0x00000001)
		{
			if (!iLocal_46)
			{
				if (!iLocal_47)
				{
					if (unk_0xB45EDD00181AF3F2() != 0x00000000)
					{
						unk_0xEADC638FF742BE01();
					}
					iLocal_34 = 0x00000000;
					iLocal_35 = 0x00000000;
					iLocal_36 = 0x00000000;
					iLocal_37 = 0x00000000;
					iLocal_38 = 0x00000000;
					iLocal_39 = 0x00000000;
					unk_0xC43ACE7DB937E274();
					iLocal_50 = unk_0xB45EDD00181AF3F2();
					unk_0x52B251794E939181(iLocal_50, "tot_pc", Global_1B416.f_27CD.f_F0D);
					uLocal_51 = unk_0x8C4FC3F4C53C5411(iLocal_50, "Sect");
					uLocal_52 = unk_0xE5C596332B81A4D4(uLocal_51, "mgc");
					uLocal_53 = unk_0xE5C596332B81A4D4(uLocal_51, "msnc");
					uLocal_54 = unk_0xE5C596332B81A4D4(uLocal_51, "ojc");
					uLocal_55 = unk_0xE5C596332B81A4D4(uLocal_51, "rcc");
					uLocal_56 = unk_0xE5C596332B81A4D4(uLocal_51, "revc");
					uLocal_57 = unk_0xE5C596332B81A4D4(uLocal_51, "misc");
					iLocal_58 = 0x00000000;
					while (iLocal_58 < 0x00000141)
					{
						if (!Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000000)
						{
							if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000001 || Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000002)
							{
								if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_5 || Global_1B30D == 0x00000001)
								{
									uLocal_28[iLocal_34] = unk_0x0A4390627648FB60(uLocal_53);
									unk_0xA5E4E40E663470ED(uLocal_28[iLocal_34], "nm", &(Global_1B416.f_27CD[iLocal_58 /*12*/]));
									unk_0x831B5C68F1E66F2D(uLocal_28[iLocal_34], "cmp", Global_1B416.f_27CD[iLocal_58 /*12*/].f_5);
									if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000001)
									{
										unk_0x831B5C68F1E66F2D(uLocal_28[iLocal_34], "100", 0x00000001);
									}
									else
									{
										unk_0x831B5C68F1E66F2D(uLocal_28[iLocal_34], "100", 0x00000000);
									}
									vLocal_40 = { func_125(iLocal_58) };
									unk_0x23AFD3CA3C9BE63F(uLocal_28[iLocal_34], "x", SYSTEM::ROUND(vLocal_40.x));
									unk_0x23AFD3CA3C9BE63F(uLocal_28[iLocal_34], "y", SYSTEM::ROUND(vLocal_40.y));
									iLocal_34++;
								}
							}
							if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000003 || Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000004)
							{
								if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_5 || Global_1B30D == 0x00000001)
								{
									uLocal_29[iLocal_35] = unk_0x0A4390627648FB60(uLocal_52);
									unk_0xA5E4E40E663470ED(uLocal_29[iLocal_35], "nm", &(Global_1B416.f_27CD[iLocal_58 /*12*/]));
									unk_0x831B5C68F1E66F2D(uLocal_29[iLocal_35], "cmp", Global_1B416.f_27CD[iLocal_58 /*12*/].f_5);
									if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000003)
									{
										unk_0x831B5C68F1E66F2D(uLocal_29[iLocal_35], "100", 0x00000001);
									}
									else
									{
										unk_0x831B5C68F1E66F2D(uLocal_29[iLocal_35], "100", 0x00000000);
									}
									vLocal_40 = { func_125(iLocal_58) };
									unk_0x23AFD3CA3C9BE63F(uLocal_29[iLocal_35], "x", SYSTEM::ROUND(vLocal_40.x));
									unk_0x23AFD3CA3C9BE63F(uLocal_29[iLocal_35], "y", SYSTEM::ROUND(vLocal_40.y));
									iLocal_35++;
								}
							}
							if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000005 || Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000006)
							{
								if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_5 || Global_1B30D == 0x00000001)
								{
									uLocal_30[iLocal_36] = unk_0x0A4390627648FB60(uLocal_54);
									unk_0xA5E4E40E663470ED(uLocal_30[iLocal_36], "nm", &(Global_1B416.f_27CD[iLocal_58 /*12*/]));
									unk_0x831B5C68F1E66F2D(uLocal_30[iLocal_36], "cmp", Global_1B416.f_27CD[iLocal_58 /*12*/].f_5);
									if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000005)
									{
										unk_0x831B5C68F1E66F2D(uLocal_30[iLocal_36], "100", 0x00000001);
									}
									else
									{
										unk_0x831B5C68F1E66F2D(uLocal_30[iLocal_36], "100", 0x00000000);
									}
									vLocal_40 = { func_125(iLocal_58) };
									unk_0x23AFD3CA3C9BE63F(uLocal_30[iLocal_36], "x", SYSTEM::ROUND(vLocal_40.x));
									unk_0x23AFD3CA3C9BE63F(uLocal_30[iLocal_36], "y", SYSTEM::ROUND(vLocal_40.y));
									iLocal_36++;
								}
							}
							if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000007 || Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000008)
							{
								if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_5 || Global_1B30D == 0x00000001)
								{
									uLocal_32[iLocal_37] = unk_0x0A4390627648FB60(uLocal_55);
									unk_0xA5E4E40E663470ED(uLocal_32[iLocal_37], "nm", &(Global_1B416.f_27CD[iLocal_58 /*12*/]));
									unk_0x831B5C68F1E66F2D(uLocal_32[iLocal_37], "cmp", Global_1B416.f_27CD[iLocal_58 /*12*/].f_5);
									if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000007)
									{
										unk_0x831B5C68F1E66F2D(uLocal_32[iLocal_37], "100", 0x00000001);
									}
									else
									{
										unk_0x831B5C68F1E66F2D(uLocal_32[iLocal_37], "100", 0x00000000);
									}
									vLocal_40 = { func_125(iLocal_58) };
									unk_0x23AFD3CA3C9BE63F(uLocal_32[iLocal_37], "x", SYSTEM::ROUND(vLocal_40.x));
									unk_0x23AFD3CA3C9BE63F(uLocal_32[iLocal_37], "y", SYSTEM::ROUND(vLocal_40.y));
									iLocal_37++;
								}
							}
							if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000009 || Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x0000000A)
							{
								if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_5 || Global_1B30D == 0x00000001)
								{
									uLocal_31[iLocal_38] = unk_0x0A4390627648FB60(uLocal_56);
									unk_0xA5E4E40E663470ED(uLocal_31[iLocal_38], "nm", &(Global_1B416.f_27CD[iLocal_58 /*12*/]));
									unk_0x831B5C68F1E66F2D(uLocal_31[iLocal_38], "cmp", Global_1B416.f_27CD[iLocal_58 /*12*/].f_5);
									if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x00000009)
									{
										unk_0x831B5C68F1E66F2D(uLocal_31[iLocal_38], "100", 0x00000000);
									}
									else
									{
										unk_0x831B5C68F1E66F2D(uLocal_31[iLocal_38], "100", 0x00000000);
									}
									unk_0x23AFD3CA3C9BE63F(uLocal_31[iLocal_38], "x", SYSTEM::ROUND(Global_1B416.f_27CD[iLocal_58 /*12*/].f_A));
									unk_0x23AFD3CA3C9BE63F(uLocal_31[iLocal_38], "y", SYSTEM::ROUND(Global_1B416.f_27CD[iLocal_58 /*12*/].f_B));
									iLocal_38++;
								}
							}
							if (((Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x0000000B || Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x0000000D) || Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x0000000C) || Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x0000000E)
							{
								if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_5 || Global_1B30D == 0x00000001)
								{
									uLocal_33[iLocal_39] = unk_0x0A4390627648FB60(uLocal_57);
									unk_0xA5E4E40E663470ED(uLocal_33[iLocal_39], "nm", &(Global_1B416.f_27CD[iLocal_58 /*12*/]));
									unk_0x831B5C68F1E66F2D(uLocal_33[iLocal_39], "cmp", Global_1B416.f_27CD[iLocal_58 /*12*/].f_5);
									if (Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x0000000B || Global_1B416.f_27CD[iLocal_58 /*12*/].f_6 == 0x0000000D)
									{
										unk_0x831B5C68F1E66F2D(uLocal_33[iLocal_39], "100", 0x00000001);
									}
									else
									{
										unk_0x831B5C68F1E66F2D(uLocal_33[iLocal_39], "100", 0x00000000);
									}
									vLocal_40 = { func_125(iLocal_58) };
									unk_0x23AFD3CA3C9BE63F(uLocal_33[iLocal_39], "x", SYSTEM::ROUND(vLocal_40.x));
									unk_0x23AFD3CA3C9BE63F(uLocal_33[iLocal_39], "y", SYSTEM::ROUND(vLocal_40.y));
									iLocal_39++;
								}
							}
						}
						iLocal_58++;
					}
					if (func_123())
					{
						iLocal_46 = 0x00000001;
						iLocal_47 = 0x00000000;
						Global_1B30C = 0x00000000;
						iLocal_49 = 0x00000000;
					}
					else
					{
						iLocal_46 = 0x00000000;
						iLocal_47 = 0x00000000;
						Global_1B30C = 0x00000000;
						iLocal_49 = 0x00000000;
					}
				}
			}
		}
		if (iLocal_46)
		{
			if (!iLocal_47)
			{
				if (unk_0xF19935DB5591EA13("GTA5/checklist/index.json"))
				{
					iLocal_47 = 0x00000001;
				}
			}
			else if (!unk_0x150F98BB5AE5F9A7(&bLocal_48))
			{
				if (bLocal_48)
				{
				}
				if (unk_0xB45EDD00181AF3F2() != 0x00000000)
				{
					unk_0xEADC638FF742BE01();
				}
				iLocal_46 = 0x00000000;
				iLocal_47 = 0x00000000;
			}
		}
		if (Global_1B416.f_27CD.f_F0E == 0x00000000)
		{
			if (Global_1B416.f_27CD.f_F0D == 100f || Global_1B416.f_27CD.f_F0D > 100f)
			{
				if (func_123())
				{
					unk_0x5EDE1DB7F3CAEEBD(joaat("total_progress_made"), Global_1B416.f_27CD.f_F0D, 0x00000000);
					if (unk_0xFC3BAD626FBF7750())
					{
						unk_0xF4AC3FBAB2697AA4(0x00000000);
						func_121(0x00000000);
					}
				}
				Global_1B416.f_27CD.f_F0E = 0x00000001;
				func_120(0x00000085, 0x00000001);
				func_112(0x000000A3, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
				func_112(0x00000097, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
				func_33(joaat("player_one"), 0x00000003, 0x00000097, 0x00000001, 0x00000001);
				func_28(0x00000039);
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_4889[0x00000039 /*6*/]), 0x00000001);
				func_15(0x0000000D, 0x00000001);
			}
		}
		if (unk_0x76B4C2FC8A367FEA() > Global_1B416.f_273C)
		{
			if (unk_0x76B4C2FC8A367FEA() >= 0x00000032)
			{
				func_15(0x00000016, 0x00000001);
			}
			func_4(func_8(), 0x00000004, (unk_0x76B4C2FC8A367FEA() - Global_1B416.f_273C) * 2);
			Global_1B416.f_273C = unk_0x76B4C2FC8A367FEA();
			if (Global_1B416.f_273C >= 0x00000032)
			{
				unk_0xE7B2B6A56C007908(joaat("sp0_water_cannon_kills"), 0x00000064, 0x00000000);
			}
			else if (Global_1B416.f_273C >= 0x00000026)
			{
				unk_0xE7B2B6A56C007908(joaat("sp0_water_cannon_kills"), 0x0000004B, 0x00000000);
			}
			else if (Global_1B416.f_273C >= 0x00000019)
			{
				func_1(0x00000121, 0x00000000, 0x00000000);
				unk_0xE7B2B6A56C007908(joaat("sp0_water_cannon_kills"), 0x00000032, 0x00000000);
			}
			else if (Global_1B416.f_273C >= 0x0000000D)
			{
				unk_0xE7B2B6A56C007908(joaat("sp0_water_cannon_kills"), 0x00000019, 0x00000000);
			}
		}
	}
}

void func_1(int iParam0, int iParam1, int iParam2)
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
		func_2((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_151();
	}
}

int func_2(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_3();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_3()
{
	return Global_1407E9;
}

void func_4(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
			Global_1B416.f_936.f_21B.f_8C7[iParam1 /*4*/][iParam0] = (Global_1B416.f_936.f_21B.f_8C7[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 0x00000003:
			iVar1 = 0x00002CF7;
			switch (iParam1)
			{
				case 0x00000001:
					iVar1 = 0x00000048;
					break;
				
				case 0x00000003:
					iVar1 = 0x0000004A;
					break;
				
				case 0x00000002:
					iVar1 = 0x00000049;
					break;
				
				case 0x00000004:
					iVar1 = 0x0000004B;
					break;
				
				case 0x00000005:
					iVar1 = 0x0000004C;
					break;
				
				case 0x00000006:
					iVar1 = 0x0000004D;
					break;
				
				case 0x00000007:
					iVar1 = 0x0000004E;
					break;
			}
			if (iVar1 != 0x00002CF7)
			{
				iVar0 = func_7(iVar1, 0xFFFFFFFF, 0x00000000);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 0x00000064)
				{
					iVar0 = 0x00000064;
				}
				func_5(iVar1, iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
			}
			break;
	}
}

void func_5(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_6(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_6(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_3();
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

int func_7(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_6(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_8()
{
	func_9();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_9()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_13(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_12(unk_0x16F2683693E537C9());
			if (func_11(iVar0) && (!func_10(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_11(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_10(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_11(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_13(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_13(int iParam0)
{
	if (func_11(iParam0))
	{
		return func_14(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_14(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_15(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_16(iParam0, iParam1);
}

int func_16(int iParam0, int iParam1)
{
	if (func_10(0x0000000E) && !func_27(iParam0))
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
	if (func_26(&Global_4127F1))
	{
		if (func_24(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_17(&Global_4127F1, iParam0))
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

int func_17(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_10(0x0000000E) && !func_27(iParam1))
	{
		return 0x00000000;
	}
	if (func_24(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_23(uParam0) < 0f)
	{
		func_22(uParam0, 0x00000000);
	}
	func_20(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_18(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_18(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_10(0x0000000E) && !func_27(iParam1))
	{
		return 0x00000000;
	}
	if (func_24(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_23(uParam0) < 0f)
	{
		func_22(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_19(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_19(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_20(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_21(uParam0, iVar0);
		iVar0++;
	}
	func_22(uParam0, (Global_4127F0 - 0.5f));
}

void func_21(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_22(var uParam0, float fParam1)
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

float func_23(var uParam0)
{
	return uParam0->f_50;
}

bool func_24(var uParam0, int iParam1)
{
	return func_25(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_25(var uParam0, int iParam1)
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

bool func_26(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_27(int iParam0)
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

void func_28(int iParam0)
{
	if (iParam0 == 0x0000003F || iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_29(iParam0);
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_4889[iParam0 /*6*/]), 0x00000000);
}

void func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000001E:
			func_112(0x00000016, 0x00000001, 0x00000000, 0x00000001, 0x00000000);
			break;
		
		case 0x0000000F:
			func_30(0x00000025, 0x00000000);
			break;
		
		default:
			break;
	}
}

void func_30(int iParam0, bool bParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_32(iParam0, 0x00000000))
		{
			func_31(iParam0, 0x00000001, 0x00000000);
			func_31(iParam0, 0x00000002, 0x00000000);
			func_31(iParam0, 0x00000003, 0x00000000);
			func_31(iParam0, 0x00000004, 0x00000000);
			func_31(iParam0, 0x00000000, 0x00000001);
			Global_126B1[iParam0] = 0x00000001;
		}
	}
	else
	{
		func_31(iParam0, 0x00000000, 0x00000000);
	}
}

void func_31(int iParam0, int iParam1, bool bParam2)
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

bool func_32(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_7FE8[iParam0], iParam1);
}

int func_33(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	Global_12A92[0x00000001 /*14*/] = { func_47(iParam0, iParam1, iParam2, 0xFFFFFFFF) };
	if (unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000006))
	{
		if (bParam3)
		{
			func_46(iParam1, Global_12A92[0x00000001 /*14*/].f_5, Global_12A92[0x00000001 /*14*/].f_2, 0x00000001, Global_12A92[0x00000001 /*14*/].f_1, 0x00000001, 0x00000000);
			if (iParam1 == 0x0000000C)
			{
				iVar0 = 0x00000001;
				if (iParam0 == joaat("player_zero"))
				{
					if (iParam2 == 0x0000001F)
					{
						iVar0 = 0x00000000;
					}
				}
				if (iVar0 == 0x00000001)
				{
					uVar3 = { func_42(iParam0, iParam2) };
					iVar1 = 0x00000000;
					while (iVar1 <= 0x0000000E)
					{
						if ((uVar3[iVar1] != 0xFFFFFF9D && iVar1 != 0x0000000C) && iVar1 != 0x0000000E)
						{
							if (iVar1 != 0x0000000D)
							{
								func_33(iParam0, iVar1, uVar3[iVar1], 0x00000001, 0x00000001);
								func_41(iParam0, iVar1, uVar3[iVar1], 0x00000001);
							}
							else
							{
								uVar4 = { func_34(iParam0, uVar3[iVar1]) };
								iVar2 = 0x00000000;
								while (iVar2 <= 0x00000008)
								{
									func_33(iParam0, 0x0000000E, uVar4[iVar2], 0x00000001, 0x00000001);
									func_41(iParam0, 0x0000000E, uVar4[iVar2], 0x00000001);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			func_46(iParam1, Global_12A92[0x00000001 /*14*/].f_5, Global_12A92[0x00000001 /*14*/].f_2, 0x00000001, Global_12A92[0x00000001 /*14*/].f_1, 0x00000000, 0x00000001);
		}
		if (iParam4 == 0x00000001 && bParam3 == 0x00000001)
		{
			switch (iParam0)
			{
				case joaat("player_zero"):
					break;
				
				case joaat("player_one"):
					switch (iParam1)
					{
						case 0x00000003:
							if (iParam2 >= 0x000000B0 && iParam2 <= 0x000000BF)
							{
								iVar5 = (0x000000E3 + Global_12A92[0x00000001 /*14*/].f_4);
								func_33(iParam0, 0x00000003, iVar5, 0x00000001, 0x00000000);
							}
							else if (iParam2 >= 0x000000E3 && iParam2 <= 0x000000F2)
							{
								iVar5 = (0x000000B0 + Global_12A92[0x00000001 /*14*/].f_4);
								func_33(iParam0, 0x00000003, iVar5, 0x00000001, 0x00000000);
							}
							break;
						
						case 0x0000000B:
							if (iParam2 >= 0x00000009 && iParam2 <= 0x00000018)
							{
								iVar5 = (0x00000019 + Global_12A92[0x00000001 /*14*/].f_4);
								func_33(iParam0, 0x0000000B, iVar5, 0x00000001, 0x00000000);
							}
							else if (iParam2 >= 0x00000019 && iParam2 <= 0x00000028)
							{
								iVar5 = (0x00000009 + Global_12A92[0x00000001 /*14*/].f_4);
								func_33(iParam0, 0x0000000B, iVar5, 0x00000001, 0x00000000);
							}
							break;
						
						case 0x00000008:
							if (iParam2 >= 0x0000001B && iParam2 <= 0x0000002A)
							{
								iVar5 = (0x0000002B + Global_12A92[0x00000001 /*14*/].f_4);
								func_33(iParam0, 0x00000008, iVar5, 0x00000001, 0x00000000);
								iVar5 = (0x0000003B + Global_12A92[0x00000001 /*14*/].f_4);
								func_33(iParam0, 0x00000008, iVar5, 0x00000001, 0x00000000);
							}
							else if (iParam2 >= 0x0000002B && iParam2 <= 0x0000003A)
							{
								iVar5 = (0x0000001B + Global_12A92[0x00000001 /*14*/].f_4);
								func_33(iParam0, 0x00000008, iVar5, 0x00000001, 0x00000000);
								iVar5 = (0x0000003B + Global_12A92[0x00000001 /*14*/].f_4);
								func_33(iParam0, 0x00000008, iVar5, 0x00000001, 0x00000000);
							}
							else if (iParam2 >= 0x0000003B && iParam2 <= 0x0000004A)
							{
								iVar5 = (0x0000001B + Global_12A92[0x00000001 /*14*/].f_4);
								func_33(iParam0, 0x00000008, iVar5, 0x00000001, 0x00000000);
								iVar5 = (0x0000002B + Global_12A92[0x00000001 /*14*/].f_4);
								func_33(iParam0, 0x00000008, iVar5, 0x00000001, 0x00000000);
							}
							break;
						
						case 0x0000000E:
							if (iParam2 >= 0x00000040 && iParam2 <= 0x0000004F)
							{
								iVar5 = (0x00000029 + Global_12A92[0x00000001 /*14*/].f_4);
								func_33(iParam0, 0x0000000E, iVar5, 0x00000001, 0x00000000);
							}
							break;
					}
					break;
				
				case joaat("player_two"):
					switch (iParam1)
					{
						case 0x00000004:
							if (iParam2 >= 0x00000051 && iParam2 <= 0x0000005A)
							{
								iVar5 = (0x0000005E + Global_12A92[0x00000001 /*14*/].f_4);
								func_33(iParam0, 0x00000004, iVar5, 0x00000001, 0x00000000);
							}
							break;
						
						case 0x0000000C:
							if (iParam2 == 0x00000002)
							{
								func_33(iParam0, 0x0000000E, 0x00000011, 0x00000001, 0x00000000);
							}
							break;
					}
					break;
				}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

struct<10> func_34(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 0x00000009;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000008)
	{
		Var1[iVar0] = 0xFFFFFF9D;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_40(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_40(&Var1, 0x0000000A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_40(&Var1, 0x00000013, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_40(&Var1, 0x0000000E, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_40(&Var1, 0x00000012, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_40(&Var1, 0x00000000, 0x0000003B, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_40(&Var1, 0x00000000, 0x0000003C, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_40(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_40(&Var1, 0x00000000, 0x0000003C, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_40(&Var1, 0x00000037, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_40(&Var1, 0x00000000, 0x00000001, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_35(&Var1, iParam0, iParam1, 0x0000000A);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_40(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_40(&Var1, 0x0000000A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_40(&Var1, 0x00000000, 0x00000052, 0x0000009E, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_40(&Var1, 0x00000000, 0x00000001, 0x0000009E, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_40(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_40(&Var1, 0x00000029, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_40(&Var1, 0x00000028, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_40(&Var1, 0x00000029, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_40(&Var1, 0x00000000, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_40(&Var1, 0x00000045, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_35(&Var1, iParam0, iParam1, 0x00000009);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_40(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_40(&Var1, 0x0000000B, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_40(&Var1, 0x00000011, 0x0000005A, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_40(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_40(&Var1, 0x00000000, 0x00000058, 0x0000009A, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_40(&Var1, 0x00000000, 0x00000001, 0x0000009A, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_40(&Var1, 0x00000010, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_40(&Var1, 0x00000024, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_40(&Var1, 0x00000000, 0x0000007B, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_40(&Var1, 0x00000045, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_35(&Var1, iParam0, iParam1, 0x00000009);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_40(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_40(&Var1, 0x00000081, 0x000000A7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_40(&Var1, 0x0000005A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_40(&Var1, 0x00000017, 0x000000FB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_40(&Var1, 0x00000024, 0x00000106, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_40(&Var1, 0x00000058, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_40(&Var1, 0x0000007D, 0x000000AF, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_40(&Var1, 0x00000023, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_40(&Var1, 0x0000002C, 0x000000D0, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_40(&Var1, 0x00000034, 0x000000BD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_40(&Var1, 0x00000000, 0x00000105, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000A:
					func_40(&Var1, 0x00000000, 0x000000F3, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000B:
					func_40(&Var1, 0x00000000, 0x000000F3, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000C:
					func_40(&Var1, 0x00000000, 0x000000D4, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000D:
					func_40(&Var1, 0x00000040, 0x00000123, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000E:
					func_40(&Var1, 0x0000003D, 0x000000CF, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000F:
					func_40(&Var1, 0x00000000, 0x00000123, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000010:
					func_40(&Var1, 0x00000000, 0x000000D0, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000011:
					func_40(&Var1, 0x00000000, 0x000000E5, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000012:
					func_40(&Var1, 0x00000024, 0x000000F9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000013:
					func_40(&Var1, 0x00000000, 0x00000103, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000014:
					func_40(&Var1, 0x00000000, 0x000000AE, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000015:
					func_40(&Var1, 0x00000023, 0x000000B4, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000016:
					func_40(&Var1, 0x00000024, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000017:
					func_40(&Var1, 0x00000000, 0x00000103, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000018:
					func_40(&Var1, 0x00000023, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_35(&Var1, iParam0, iParam1, 0x00000019);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_40(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_40(&Var1, 0x00000023, 0x000000E9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_40(&Var1, 0x00000024, 0x000000B2, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_40(&Var1, 0x00000035, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_40(&Var1, 0x00000026, 0x000000AA, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_40(&Var1, 0x00000025, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_40(&Var1, 0x00000071, 0x000000CB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_40(&Var1, 0x00000072, 0x000000B7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_40(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_40(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_40(&Var1, 0x00000000, 0x000000C7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000A:
					func_40(&Var1, 0x00000000, 0x000000B6, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000B:
					func_40(&Var1, 0x00000000, 0x000000E9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000C:
					func_40(&Var1, 0x0000006B, 0x000000A7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000D:
					func_40(&Var1, 0x0000006D, 0x000000AA, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000143, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000E:
					func_40(&Var1, 0x00000077, 0x000000ED, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000F:
					func_40(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000010:
					func_40(&Var1, 0x00000072, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000011:
					func_40(&Var1, 0x00000023, 0x0000010C, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000012:
					func_40(&Var1, 0x00000000, 0x0000010A, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000013:
					func_40(&Var1, 0x0000002A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000014:
					func_40(&Var1, 0x0000004C, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000015:
					func_40(&Var1, 0x00000027, 0x000000EB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000016:
					func_40(&Var1, 0x00000029, 0x000000B7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000017:
					func_40(&Var1, 0x0000006F, 0x000000C2, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_35(&Var1, iParam0, iParam1, 0x00000019);
					break;
			}
			break;
	}
	return Var1;
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0x00000000 && iParam2 != 0xFFFFFF9D)
	{
		(*iParam0)[0x00000000] = 0x00000000;
		(*iParam0)[0x00000001] = 0x00000001;
		(*iParam0)[0x00000002] = 0x00000002;
		(*iParam0)[0x00000003] = 0x00000003;
		(*iParam0)[0x00000004] = 0x00000004;
		(*iParam0)[0x00000005] = 0x00000005;
		(*iParam0)[0x00000006] = 0x00000006;
		(*iParam0)[0x00000007] = 0x00000007;
		(*iParam0)[0x00000008] = 0x00000008;
		iVar0 = 0x00000000;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0x00000000;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 0x00000001;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 0x00000002;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 0x00000003;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 0x00000004;
		}
		unk_0xEF5FB5FCF95E0C4D(iParam2, &Var1);
		if (!unk_0x232048AB4B0E0259(Var1))
		{
			iVar3 = 0x00000000;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0x5D149814CB08088A(Var1.f_1, iVar3, &vVar2) && vVar2.z != 0xFFFFFFFF)
				{
					if ((vVar2.x != 0x00000000 && vVar2.x != 0xFFFFFFFF) && vVar2.x != 0x6E3C5C6B)
					{
						(*iParam0)[vVar2.z] = func_36(iParam1, vVar2.x, 0x0000000E, iVar0);
					}
					else if (vVar2.y != 0xFFFFFFFF)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 0x0000000C)
	{
	}
	else if (iParam2 == 0x0000000D)
	{
	}
	else if (iParam2 == 0x0000000E)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar2 = 0x00000000;
		iVar3 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		iVar1 = 0x00000000;
		while (iVar1 < iVar3)
		{
			unk_0x4F79808059300187(iVar1, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_39(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var4);
		iVar6 = 0x00000000;
		iVar7 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, func_38(iParam2));
		iVar5 = 0x00000000;
		while (iVar5 < iVar7)
		{
			unk_0xC578687D5A643830(iVar5, &Var4);
			if (!unk_0x232048AB4B0E0259(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_37(iParam0, func_38(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return 0xFFFFFF9D;
}

int func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000007;
					break;
				
				case 0x00000001:
					return 0x00000005;
					break;
				
				case 0x00000002:
					return 0x00000006;
					break;
				
				case 0x00000003:
					return 0x000000B5;
					break;
				
				case 0x00000004:
					return 0x00000071;
					break;
				
				case 0x00000005:
					return 0x0000000E;
					break;
				
				case 0x00000006:
					return 0x00000063;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00000018;
					break;
				
				case 0x00000009:
					return 0x00000014;
					break;
				
				case 0x0000000A:
					return 0x00000030;
					break;
				
				case 0x0000000B:
					return 0x0000002D;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x00000005;
					break;
				
				case 0x00000002:
					return 0x00000015;
					break;
				
				case 0x00000003:
					return 0x0000013E;
					break;
				
				case 0x00000004:
					return 0x00000075;
					break;
				
				case 0x00000005:
					return 0x00000007;
					break;
				
				case 0x00000006:
					return 0x00000086;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x0000004D;
					break;
				
				case 0x00000009:
					return 0x0000000C;
					break;
				
				case 0x0000000A:
					return 0x00000035;
					break;
				
				case 0x0000000B:
					return 0x0000003F;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000007;
					break;
				
				case 0x00000001:
					return 0x00000006;
					break;
				
				case 0x00000002:
					return 0x00000009;
					break;
				
				case 0x00000003:
					return 0x000000F2;
					break;
				
				case 0x00000004:
					return 0x00000068;
					break;
				
				case 0x00000005:
					return 0x00000007;
					break;
				
				case 0x00000006:
					return 0x00000054;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00000012;
					break;
				
				case 0x00000009:
					return 0x00000011;
					break;
				
				case 0x0000000A:
					return 0x00000021;
					break;
				
				case 0x0000000B:
					return 0x00000001;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x0000001A;
					break;
				
				case 0x00000002:
					return 0x0000005B;
					break;
				
				case 0x00000003:
					return 0x00000010;
					break;
				
				case 0x00000004:
					return 0x00000100;
					break;
				
				case 0x00000005:
					return 0x00000009;
					break;
				
				case 0x00000006:
					return 0x00000100;
					break;
				
				case 0x00000007:
					return 0x0000005C;
					break;
				
				case 0x00000008:
					return 0x000000F1;
					break;
				
				case 0x00000009:
					return 0x0000002E;
					break;
				
				case 0x0000000A:
					return 0x00000007;
					break;
				
				case 0x0000000B:
					return 0x000000ED;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x0000001A;
					break;
				
				case 0x00000002:
					return 0x0000005C;
					break;
				
				case 0x00000003:
					return 0x00000010;
					break;
				
				case 0x00000004:
					return 0x00000100;
					break;
				
				case 0x00000005:
					return 0x00000009;
					break;
				
				case 0x00000006:
					return 0x00000100;
					break;
				
				case 0x00000007:
					return 0x00000037;
					break;
				
				case 0x00000008:
					return 0x00000088;
					break;
				
				case 0x00000009:
					return 0x00000024;
					break;
				
				case 0x0000000A:
					return 0x00000006;
					break;
				
				case 0x0000000B:
					return 0x00000100;
					break;
			}
			break;
	}
	return 0xFFFFFF9D;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000003;
			break;
		
		case 0x00000004:
			return 0x00000004;
			break;
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000009;
			break;
		
		case 0x0000000A:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x0000000B:
			return 0x0000000B;
			break;
	}
	return 0x00000000;
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0x00000071;
			break;
		
		case joaat("player_one"):
			return 0x000000AF;
			break;
		
		case joaat("player_two"):
			return 0x0000009B;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 0x00000147;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 0x00000147;
			break;
	}
	return 0xFFFFFF9D;
}

void func_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0x00000000] = iParam1;
	(*iParam0)[0x00000001] = iParam2;
	(*iParam0)[0x00000002] = iParam3;
	(*iParam0)[0x00000003] = iParam4;
	(*iParam0)[0x00000004] = iParam5;
	(*iParam0)[0x00000005] = iParam6;
	(*iParam0)[0x00000006] = iParam7;
	(*iParam0)[0x00000007] = iParam8;
	(*iParam0)[0x00000008] = iParam9;
}

int func_41(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_12A92[0x00000001 /*14*/] = { func_47(iParam0, iParam1, iParam2, 0xFFFFFFFF) };
	if (unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000006))
	{
		if (bParam3)
		{
			func_46(iParam1, Global_12A92[0x00000001 /*14*/].f_5, Global_12A92[0x00000001 /*14*/].f_2, 0x00000000, Global_12A92[0x00000001 /*14*/].f_1, 0x00000001, 0x00000000);
		}
		else
		{
			func_46(iParam1, Global_12A92[0x00000001 /*14*/].f_5, Global_12A92[0x00000001 /*14*/].f_2, 0x00000000, Global_12A92[0x00000001 /*14*/].f_1, 0x00000000, 0x00000001);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

struct<17> func_42(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 0x0000000F;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000E)
	{
		Var1[iVar0] = 0xFFFFFF9D;
		iVar0++;
	}
	Var1.f_10 = 0x00000000;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000000:
					if (Global_1B416.f_2378.f_63.f_3A[0x00000078])
					{
						func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					}
					else
					{
						func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					}
					break;
				
				case 0x00000001:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000010, 0x00000010, 0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000);
					break;
				
				case 0x00000002:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000024, 0x00000015, 0x00000006, 0x00000001, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x00000003:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000041, 0x00000024, 0x00000006, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000004:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003D, 0x00000020, 0x00000006, 0x00000000, 0x00000000, 0x00000007, 0x00000003, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000005:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000000], Global_1B416.f_936.f_21B.f_C8[0x00000000], 0x00000006, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000006:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005C, 0x00000048, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000007:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x0000005F, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000008:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AA, 0x00000050, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000009:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AB, 0x00000059, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000008, 0x0000000A, 0x00000003, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x0000000B:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000011, 0x0000000A, 0x00000004, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x0000000C:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000017, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000045, 0x00000028, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003E, 0x00000021, 0x00000026, 0x00000000, 0x00000008, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x0000000F:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003F, 0x00000022, 0x00000006, 0x0000000A, 0x00000000, 0x00000000, 0x00000004, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AE, 0x0000005D, 0x00000012, 0x00000000, 0x00000012, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004C, 0x0000002E, 0x00000006, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000000, 0x00000004, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x00000013:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000040, 0x00000023, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000042, 0x00000025, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000043, 0x00000026, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000016:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000044, 0x00000027, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000017:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000B1, 0x0000005E, 0x00000013, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000018:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000004, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000019:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000061, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000081, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AA, 0x00000050, 0x00000006, 0x00000000, 0x0000000D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A1, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000003, 0x00000000, 0x0000000C, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000001, 0x0000001F);
					break;
				
				case 0x00000020:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x00000037, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000021:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000056, 0x00000004, 0x00000014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000022:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002C, 0x00000061, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000002, 0x0000001F);
					break;
				
				case 0x00000023:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000024:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000025:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000026:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000007, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000008, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000A, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000B, 0x0000000B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002C:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000C, 0x0000000C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002D:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000D, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002E:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000E, 0x0000000E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002F:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000F, 0x0000000F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000030:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005B, 0x00000047, 0x0000000E, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000031:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000032:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000008, 0x0000000A, 0x00000003, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000009);
					break;
				
				case 0x00000033:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A9, 0x0000005F, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000034:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A9, 0x00000048, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_43(&Var1, iParam0, iParam1, 0x00000035);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000000:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000049, 0x00000018, 0x00000012, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000016, 0x0000000A, 0x00000040, 0x00000000, 0x00000018, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002B, 0x0000001F);
					break;
				
				case 0x00000002:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000001], Global_1B416.f_936.f_21B.f_C8[0x00000001], 0x00000011, 0x00000002, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002D, 0x0000001F);
					break;
				
				case 0x00000003:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000017, 0x0000000B, 0x0000000D, 0x00000005, 0x00000002, 0x00000004, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000001);
					break;
				
				case 0x00000004:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000017, 0x0000000B, 0x00000022, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000005:
					func_45(&Var1, 0xFFFFFF9D, 0x00000014, 0x0000009F, 0x00000045, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000006:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000028, 0x0000000D, 0x0000000E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000007:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005A, 0x00000020, 0x00000011, 0x00000001, 0x00000008, 0x00000000, 0x00000001, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000008:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000011, 0x00000005, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000002, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x00000009:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000010, 0x00000004, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000D0, 0x00000047, 0x00000011, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000B:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000103, 0x0000000A, 0x00000023, 0x00000000, 0x00000018, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002B, 0x0000001F);
					break;
				
				case 0x0000000C:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000012, 0x00000006, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000013, 0x00000007, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000014, 0x00000008, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000F:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000015, 0x00000009, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000087, 0x00000028, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004A, 0x00000018, 0x00000034, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000B0, 0x00000035, 0x0000001A, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000029, 0x0000001F);
					break;
				
				case 0x00000013:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007D, 0x00000018, 0x00000012, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A2, 0x00000018, 0x00000024, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004B, 0x00000018, 0x00000024, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x00000016:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E3, 0x00000035, 0x00000019, 0x00000000, 0x0000001B, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000019, 0x0000001F);
					break;
				
				case 0x00000017:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E4, 0x00000036, 0x00000019, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001A, 0x0000001F);
					break;
				
				case 0x00000018:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E5, 0x00000037, 0x00000019, 0x00000000, 0x0000001D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001B, 0x0000001F);
					break;
				
				case 0x00000019:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E6, 0x00000038, 0x00000019, 0x00000000, 0x0000001E, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001C, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E7, 0x00000039, 0x00000019, 0x00000000, 0x0000001F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001D, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E8, 0x0000003A, 0x00000019, 0x00000000, 0x00000020, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001E, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E9, 0x0000003B, 0x00000019, 0x00000000, 0x00000021, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001F, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EA, 0x0000003C, 0x00000019, 0x00000000, 0x00000022, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000020, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EB, 0x0000003D, 0x00000019, 0x00000000, 0x00000023, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000021, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EC, 0x0000003E, 0x00000019, 0x00000000, 0x00000024, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000022, 0x0000001F);
					break;
				
				case 0x00000020:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000ED, 0x0000003F, 0x00000019, 0x00000000, 0x00000025, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000023, 0x0000001F);
					break;
				
				case 0x00000021:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EE, 0x00000040, 0x00000019, 0x00000000, 0x00000026, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000024, 0x0000001F);
					break;
				
				case 0x00000022:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EF, 0x00000041, 0x00000019, 0x00000000, 0x00000027, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000025, 0x0000001F);
					break;
				
				case 0x00000023:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F0, 0x00000042, 0x00000019, 0x00000000, 0x00000028, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000026, 0x0000001F);
					break;
				
				case 0x00000024:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F1, 0x00000043, 0x00000019, 0x00000000, 0x00000029, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000027, 0x0000001F);
					break;
				
				case 0x00000025:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F2, 0x00000044, 0x00000019, 0x00000000, 0x0000002A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000028, 0x0000001F);
					break;
				
				case 0x00000026:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000104, 0x00000048, 0x00000011, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007D, 0x00000018, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007B, 0x00000018, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000009F, 0x00000045, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000059, 0x00000016, 0x0000000F, 0x00000006, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000013D, 0x00000045, 0x00000011, 0x00000000, 0x00000000, 0x00000000, 0x00000033, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x0000002C:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000001E, 0x00000017, 0x00000010, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x0000002D:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000006A, 0x00000046, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x0000002E:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000075, 0x00000018, 0x00000014, 0x00000005, 0x0000001A, 0x00000000, 0x00000034, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_43(&Var1, iParam0, iParam1, 0x0000002F);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000000:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000005B, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000011, 0x00000005, 0x00000008, 0x00000002, 0x00000003, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x00000002:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002B, 0x00000008, 0x0000000C, 0x00000003, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000001);
					break;
				
				case 0x00000003:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000032, 0x0000000E, 0x00000008, 0x00000000, 0x0000000F, 0x00000006, 0x00000003, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000004:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000002], Global_1B416.f_936.f_21B.f_C8[0x00000002], 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000005:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005F, 0x00000021, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x00000006:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000031, 0x0000000D, 0x0000000A, 0x00000004, 0x00000006, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000007:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000031, 0x0000000D, 0x0000000E, 0x00000004, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x00000008:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004F, 0x00000020, 0x00000008, 0x00000005, 0x00000007, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000009:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000035, 0x00000011, 0x0000000B, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000060, 0x00000051, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000B:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000033, 0x0000000F, 0x00000021, 0x00000000, 0x00000008, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x0000000C:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000005D, 0x0000001D, 0x00000000, 0x0000000D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000034, 0x00000010, 0x0000001E, 0x00000005, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F1, 0x0000005C, 0x00000010, 0x00000000, 0x0000000C, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000F:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000061, 0x00000022, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002C, 0x00000009, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002D, 0x0000000A, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002E, 0x0000000B, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000013:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002F, 0x0000000C, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A1, 0x00000035, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000002C, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000016:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000062, 0x00000000, 0x0000001C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000017:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000001B, 0x00000000, 0x0000001F, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000018:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000BE, 0x00000047, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000019:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000BF, 0x00000048, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C0, 0x00000049, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C1, 0x0000004A, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C2, 0x0000004B, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C3, 0x0000004C, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C4, 0x0000004D, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C5, 0x0000004E, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000020:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C6, 0x0000004F, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000021:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C7, 0x00000050, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000022:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C8, 0x0000003E, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000023:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C9, 0x0000003F, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000024:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CA, 0x00000040, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000025:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CB, 0x00000041, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000026:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CC, 0x00000042, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CD, 0x00000043, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CE, 0x00000044, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x0000002B, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000037, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000034, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002C:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000046, 0x0000001E, 0x00000020, 0x00000006, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002D:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000013, 0x0000005B, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x0000002E:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002F:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004F, 0x00000020, 0x00000008, 0x00000005, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_43(&Var1, iParam0, iParam1, 0x00000030);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000000A, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000007F, 0x00000026, 0xFFFFFF9D, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003E, 0x00000000);
					break;
				
				case 0x00000002:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x000000F8, 0x0000002D, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000090, 0x00000001);
					break;
				
				case 0x00000003:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000001F, 0x00000019, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000E7, 0x00000002);
					break;
				
				case 0x00000004:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000042, 0x0000000A, 0xFFFFFF9D, 0x00000015, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000007B, 0x00000003);
					break;
				
				case 0x00000005:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000005D, 0x0000008D, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000072, 0x00000004);
					break;
				
				case 0x00000006:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000074, 0x00000071, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000071, 0x00000005);
					break;
				
				case 0x00000007:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000003D, 0x00000088, 0xFFFFFF9D, 0x0000001B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003D, 0x00000006);
					break;
				
				case 0x00000008:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000070, 0x0000000A, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000008, 0x00000007);
					break;
				
				case 0x00000009:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000083, 0x00000018, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000DF, 0x00000008);
					break;
				
				case 0x0000000A:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000D1, 0x000000BC, 0xFFFFFF9D, 0x000000D0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000040, 0x00000009);
					break;
				
				case 0x0000000B:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000D1, 0x000000A0, 0xFFFFFF9D, 0x000000D3, 0x00000000, 0x00000000, 0x00000000, 0x0000002B, 0x0000009D, 0x0000000A);
					break;
				
				case 0x0000000C:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000A2, 0x000000AE, 0xFFFFFF9D, 0x000000C9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000009E, 0x0000000B);
					break;
				
				case 0x0000000D:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000004, 0x000000F0, 0xFFFFFF9D, 0x00000022, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000061, 0x0000000C);
					break;
				
				case 0x0000000E:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000080, 0x000000E8, 0xFFFFFF9D, 0x0000002B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000066, 0x0000000D);
					break;
				
				case 0x0000000F:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000042, 0x00000041, 0xFFFFFF9D, 0x000000E0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000064, 0x0000000E);
					break;
				
				case 0x00000010:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000041, 0x000000AC, 0xFFFFFF9D, 0x000000CA, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000040, 0x0000000F);
					break;
				
				case 0x00000011:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000040, 0x0000000A, 0xFFFFFF9D, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000042, 0x00000010);
					break;
				
				case 0x00000012:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000062, 0x00000050, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000057, 0x00000011);
					break;
				
				case 0x00000013:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x000000C0, 0x00000060, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000050, 0x00000012);
					break;
				
				case 0x00000014:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000007C, 0x00000060, 0xFFFFFF9D, 0x0000000B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006E, 0x00000013);
					break;
				
				case 0x00000015:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000050, 0x00000072, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000014);
					break;
				
				case 0x00000016:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x0000002B, 0x00000070, 0xFFFFFF9D, 0x00000052, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000030, 0x00000015);
					break;
				
				case 0x00000017:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000074, 0x00000090, 0xFFFFFF9D, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006C, 0x00000016);
					break;
				
				case 0x00000018:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000003F, 0x00000026, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003F, 0x00000017);
					break;
				
				case 0x00000019:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000040, 0x0000000A, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000029, 0x00000018);
					break;
				
				default:
					func_43(&Var1, iParam0, iParam1, 0x0000001A);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000088, 0x000000F1, 0xFFFFFF9D, 0x0000002F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000015, 0x0000001F);
					break;
				
				case 0x00000002:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000001, 0x00000060, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000007, 0x000000D7, 0x00000000);
					break;
				
				case 0x00000003:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000049, 0x000000F1, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000019, 0x00000001);
					break;
				
				case 0x00000004:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000058, 0x000000D9, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000021, 0x00000002);
					break;
				
				case 0x00000005:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000007, 0x00000062, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000007, 0x00000099, 0x00000003);
					break;
				
				case 0x00000006:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000008C, 0x000000F1, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x0000001F, 0x00000010, 0x00000004);
					break;
				
				case 0x00000007:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000008B, 0x00000070, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000031, 0x0000004E, 0x00000005);
					break;
				
				case 0x00000008:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000C1, 0x00000030, 0xFFFFFF9D, 0x0000006C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000011, 0x00000006);
					break;
				
				case 0x00000009:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000072, 0x00000061, 0xFFFFFF9D, 0x00000067, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000062, 0x00000007);
					break;
				
				case 0x0000000A:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000086, 0x000000EF, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000090, 0x00000008);
					break;
				
				case 0x0000000B:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000098, 0x00000060, 0xFFFFFF9D, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x0000001F, 0x00000060, 0x00000009);
					break;
				
				case 0x0000000C:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000081, 0x00000001, 0xFFFFFF9D, 0x00000060, 0x00000000, 0x00000000, 0x00000000, 0x00000005, 0x00000078, 0x0000000A);
					break;
				
				case 0x0000000D:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000082, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000009F, 0x00000060, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000016, 0x000000D6, 0x0000000B);
					break;
				
				case 0x0000000F:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x000000E8, 0x000000D5, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000016, 0x00000093, 0x0000000C);
					break;
				
				case 0x00000010:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000008, 0x00000062, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000021, 0x00000027, 0x0000000D);
					break;
				
				case 0x00000011:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000096, 0x000000EB, 0xFFFFFF9D, 0x0000006A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000080, 0x0000000E);
					break;
				
				case 0x00000012:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000060, 0x00000061, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000020, 0x00000072, 0x0000000F);
					break;
				
				case 0x00000013:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000030, 0x00000040, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000059, 0x00000010);
					break;
				
				case 0x00000014:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000003E, 0x00000040, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000004E, 0x00000011);
					break;
				
				case 0x00000015:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000031, 0x00000041, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000008, 0x00000050, 0x0000001F);
					break;
				
				case 0x00000016:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000014, 0x00000010, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000031, 0x00000012);
					break;
				
				case 0x00000017:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000049, 0x000000B2, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000026, 0x0000000B, 0x00000013);
					break;
				
				case 0x00000018:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000087, 0x00000035, 0xFFFFFF9D, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x0000001D, 0x0000001B, 0x00000014);
					break;
				
				case 0x00000019:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000007, 0x000000E9, 0x000000B0, 0xFFFFFF9D, 0x00000078, 0x00000000, 0x00000000, 0x00000000, 0x0000000B, 0x000000A0, 0x00000015);
					break;
				
				case 0x0000001A:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000022, 0x000000B3, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000004D, 0x00000016);
					break;
				
				case 0x0000001B:
					func_45(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000F, 0x00000083, 0x0000005D, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FA, 0x00000017);
					break;
				
				default:
					func_43(&Var1, iParam0, iParam1, 0x0000001C);
					break;
			}
			break;
	}
	return Var1;
}

void func_43(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0x00000000] = 0x00000000;
	(*uParam0)[0x00000002] = 0xFFFFFF9D;
	(*uParam0)[0x00000003] = 0x00000000;
	(*uParam0)[0x00000004] = 0x00000000;
	(*uParam0)[0x00000006] = 0x00000000;
	(*uParam0)[0x00000005] = 0x00000000;
	(*uParam0)[0x00000008] = 0x00000000;
	(*uParam0)[0x00000009] = 0x00000000;
	(*uParam0)[0x0000000A] = 0x00000000;
	(*uParam0)[0x00000001] = 0x00000000;
	(*uParam0)[0x00000007] = 0x00000000;
	(*uParam0)[0x0000000B] = 0x00000000;
	(*uParam0)[0x0000000D] = 0xFFFFFF9D;
	(*uParam0)[0x0000000E] = 0xFFFFFF9D;
	uParam0->f_10 = 0x00000000;
	iVar0 = 0x00000000;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0x00000000;
		(*uParam0)[0x0000000D] = (0x0000000A + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 0x00000001;
		(*uParam0)[0x0000000D] = (0x00000009 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 0x00000002;
		(*uParam0)[0x0000000D] = (0x00000009 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 0x00000003;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 0x00000004;
	}
	unk_0x84997C8C8A5848DD(iVar0, 0x00000000);
	unk_0xA69F810DF7EA02E6((iParam2 - iParam3), &Var1);
	if (!unk_0x232048AB4B0E0259(Var1))
	{
		iVar4 = 0x00000000;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0xD00B813D5424DD2E(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0x00000000 && vVar2.x != 0xFFFFFFFF) && vVar2.x != 0x6E3C5C6B)
				{
					if (vVar2.z == 0x0000000A)
					{
						unk_0x65C0659496B1CC14(&Var3);
						unk_0xFDEBA3FD0BF0D4AC(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_10 = 0x00000001;
						}
					}
					if (vVar2.z == 0x0000000A && uParam0->f_10)
					{
						(*uParam0)[func_44(vVar2.z)] = vVar2.x;
						uParam0->f_10 = 0x00000001;
					}
					else
					{
						(*uParam0)[func_44(vVar2.z)] = func_36(iParam1, vVar2.x, func_44(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != 0xFFFFFFFF)
				{
					(*uParam0)[func_44(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0x00000000)
		{
			(*uParam0)[0x0000000D] = 0xFFFFFF9D;
		}
		else
		{
			(*uParam0)[0x0000000D] = Var1.f_1;
		}
	}
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000003;
			break;
		
		case 0x00000004:
			return 0x00000004;
			break;
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000009;
			break;
		
		case 0x0000000A:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x0000000B:
			return 0x0000000B;
			break;
	}
	return 0x00000000;
}

void func_45(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0x00000000] = iParam1;
	(*uParam0)[0x00000002] = iParam2;
	(*uParam0)[0x00000003] = iParam3;
	(*uParam0)[0x00000004] = iParam4;
	(*uParam0)[0x00000006] = iParam5;
	(*uParam0)[0x00000005] = iParam6;
	(*uParam0)[0x00000008] = iParam7;
	(*uParam0)[0x00000009] = iParam8;
	(*uParam0)[0x0000000A] = iParam9;
	(*uParam0)[0x00000001] = iParam10;
	(*uParam0)[0x00000007] = iParam11;
	(*uParam0)[0x0000000B] = iParam12;
	(*uParam0)[0x0000000D] = iParam13;
	(*uParam0)[0x0000000E] = 0xFFFFFF9D;
}

int func_46(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0x00000000)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 0x00000001)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000002)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000003)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000005)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000006)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000007)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000008)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000009)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000004)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000005)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000006)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000007)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000008)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000009)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3], iParam4);
	}
	else if (iParam0 == 0x0000000A)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000B)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000C)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000D)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3], iParam4);
	}
	else if (iParam0 == 0x0000000E)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000005)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3], iParam4);
		}
	}
	return 0x00000000;
}

struct<14> func_47(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_111();
	if (iParam0 == joaat("player_zero"))
	{
		func_93(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_74(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_48(iParam1, iParam2);
	}
	return Global_12A92[0x00000000 /*14*/];
}

void func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_73(iParam1);
			break;
		
		case 0x00000002:
			func_72(iParam1);
			break;
		
		case 0x00000003:
			func_69(iParam1);
			break;
		
		case 0x00000004:
			func_68(iParam1);
			break;
		
		case 0x00000006:
			func_67(iParam1);
			break;
		
		case 0x00000005:
			func_66(iParam1);
			break;
		
		case 0x00000008:
			func_65(iParam1);
			break;
		
		case 0x00000009:
			func_64(iParam1);
			break;
		
		case 0x0000000A:
			func_63(iParam1);
			break;
		
		case 0x00000001:
			func_62(iParam1);
			break;
		
		case 0x00000007:
			func_61(iParam1);
			break;
		
		case 0x0000000B:
			func_60(iParam1);
			break;
		
		case 0x0000000C:
			func_59(iParam1);
			break;
		
		case 0x0000000D:
			func_58(iParam1);
			break;
		
		case 0x0000000E:
			func_49(iParam1);
			break;
	}
}

void func_49(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000034;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00000036;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000036;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x000000D7;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x000000A9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000031;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000034;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000A;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000B;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000C;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000F;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			iVar1 = 0x00000018;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000012;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000018;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x0000009B, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_50(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0x00000000;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 0x00000020);
	uParam0->f_2 = (iParam2 / 0x00000020);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_D = iParam8;
	uParam0->f_C = func_56(iParam8);
	if ((uParam0->f_2 >= 0x0000000A && uParam0->f_5 >= 0x00000000) && uParam0->f_5 < 0x00000003)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0x00000000;
	}
	if (unk_0x12AB0310C2281427(sParam3) != unk_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000003);
	}
	if (bParam10)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		if (uParam0->f_5 >= 0x00000000 && uParam0->f_5 < 0x00000003)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000005);
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000006);
		if (func_10(0x0000000E))
		{
			return;
		}
		if (iParam1 == 0x00000001)
		{
			if (unk_0x1A5A491D253EA7BA(Global_280004, 0x6CE6313B, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000007);
			}
		}
		if (iParam1 == 0x0000000C)
		{
			if (!func_54(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_54(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
		else if (iParam1 == 0x0000000D)
		{
		}
		else if (iParam1 == 0x0000000E)
		{
			if (!func_54(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_54(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
		else
		{
			if (!func_54(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_54(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
	}
	else if (uParam0->f_5 >= 0x00000000 && uParam0->f_5 < 0x00000003)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000005);
		if (func_46(iParam1, uParam0->f_5, uParam0->f_2, 0x00000000, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
		}
		if (func_46(iParam1, uParam0->f_5, uParam0->f_2, 0x00000001, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
		if (!func_46(iParam1, uParam0->f_5, uParam0->f_2, 0x00000002, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		if ((((((((((iParam1 == 0x0000000B || iParam1 == 0x00000004) || iParam1 == 0x00000006) || iParam1 == 0x00000001) || iParam1 == 0x0000000E) || iParam1 == 0x00000002) || iParam1 == 0x00000008) || iParam1 == 0x00000009) || iParam1 == 0x0000000A) || iParam1 == 0x00000007) || iParam1 == 0x0000000C)
		{
			if (func_10(0x0000000E))
			{
				return;
			}
			iVar0 = func_7(func_53(iParam1, uParam0->f_2), Global_12A8F, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			}
			iVar0 = func_7(func_52(iParam1, uParam0->f_2), Global_12A8F, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
			}
			if (func_51(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_7(iVar1, Global_12A8F, 0x00000000);
				if (!unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
				}
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
	}
	if (iParam1 == 0x0000000E)
	{
		if (iParam4 == 0xFFFFFFFF)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
	}
}

bool func_51(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 0x000003D2;
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D3;
					break;
				
				case 0x00000003:
					*uParam2 = 0x00000595;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E3;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EB;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000596;
					break;
				
				case 0x00000009:
					*uParam2 = 0x0000059E;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000005A0;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000003F3;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A1;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DB;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FB;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x00000406;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D4;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E4;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EC;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000597;
					break;
				
				case 0x00000009:
					*uParam2 = 0x0000059F;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A2;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DC;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FC;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D5;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E5;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003ED;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000598;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A3;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DD;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FD;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E6;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EE;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000599;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DE;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FE;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E7;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EF;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059A;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DF;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FF;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E8;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F0;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059B;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E0;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000400;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E9;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F1;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059C;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E1;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000401;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003EA;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F2;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059D;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E2;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000402;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000403;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000404;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000405;
					break;
			}
			break;
	}
	return *uParam2 != 0x000003D2;
}

int func_52(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000039F;
					break;
				
				case 0x00000003:
					return 0x00000586;
					break;
				
				case 0x00000004:
					return 0x000003AF;
					break;
				
				case 0x00000006:
					return 0x000003B7;
					break;
				
				case 0x00000008:
					return 0x00000587;
					break;
				
				case 0x00000009:
					return 0x0000058F;
					break;
				
				case 0x0000000A:
					return 0x00000591;
					break;
				
				case 0x00000001:
					return 0x000003BF;
					break;
				
				case 0x00000007:
					return 0x00000592;
					break;
				
				case 0x0000000B:
					return 0x000003A7;
					break;
				
				case 0x0000000E:
					return 0x000003C7;
					break;
				
				case 0x0000000C:
					return 0x000003D2;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x000003A0;
					break;
				
				case 0x00000004:
					return 0x000003B0;
					break;
				
				case 0x00000006:
					return 0x000003B8;
					break;
				
				case 0x00000008:
					return 0x00000588;
					break;
				
				case 0x00000009:
					return 0x00000590;
					break;
				
				case 0x00000007:
					return 0x00000593;
					break;
				
				case 0x0000000B:
					return 0x000003A8;
					break;
				
				case 0x0000000E:
					return 0x000003C8;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x000003A1;
					break;
				
				case 0x00000004:
					return 0x000003B1;
					break;
				
				case 0x00000006:
					return 0x000003B9;
					break;
				
				case 0x00000008:
					return 0x00000589;
					break;
				
				case 0x00000007:
					return 0x00000594;
					break;
				
				case 0x0000000B:
					return 0x000003A9;
					break;
				
				case 0x0000000E:
					return 0x000003C9;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B2;
					break;
				
				case 0x00000006:
					return 0x000003BA;
					break;
				
				case 0x00000008:
					return 0x0000058A;
					break;
				
				case 0x0000000B:
					return 0x000003AA;
					break;
				
				case 0x0000000E:
					return 0x000003CA;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B3;
					break;
				
				case 0x00000006:
					return 0x000003BB;
					break;
				
				case 0x00000008:
					return 0x0000058B;
					break;
				
				case 0x0000000B:
					return 0x000003AB;
					break;
				
				case 0x0000000E:
					return 0x000003CB;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B4;
					break;
				
				case 0x00000006:
					return 0x000003BC;
					break;
				
				case 0x00000008:
					return 0x0000058C;
					break;
				
				case 0x0000000B:
					return 0x000003AC;
					break;
				
				case 0x0000000E:
					return 0x000003CC;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B5;
					break;
				
				case 0x00000006:
					return 0x000003BD;
					break;
				
				case 0x00000008:
					return 0x0000058D;
					break;
				
				case 0x0000000B:
					return 0x000003AD;
					break;
				
				case 0x0000000E:
					return 0x000003CD;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B6;
					break;
				
				case 0x00000006:
					return 0x000003BE;
					break;
				
				case 0x00000008:
					return 0x0000058E;
					break;
				
				case 0x0000000B:
					return 0x000003AE;
					break;
				
				case 0x0000000E:
					return 0x000003CE;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003CF;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003D0;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003D1;
					break;
			}
			break;
	}
	return 0x000003A7;
}

int func_53(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036B;
					break;
				
				case 0x00000003:
					return 0x00000577;
					break;
				
				case 0x00000004:
					return 0x0000037B;
					break;
				
				case 0x00000006:
					return 0x00000383;
					break;
				
				case 0x00000008:
					return 0x00000578;
					break;
				
				case 0x00000009:
					return 0x00000580;
					break;
				
				case 0x0000000A:
					return 0x00000582;
					break;
				
				case 0x00000001:
					return 0x0000038B;
					break;
				
				case 0x00000007:
					return 0x00000583;
					break;
				
				case 0x0000000B:
					return 0x00000373;
					break;
				
				case 0x0000000E:
					return 0x00000393;
					break;
				
				case 0x0000000C:
					return 0x0000039E;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036C;
					break;
				
				case 0x00000004:
					return 0x0000037C;
					break;
				
				case 0x00000006:
					return 0x00000384;
					break;
				
				case 0x00000008:
					return 0x00000579;
					break;
				
				case 0x00000009:
					return 0x00000581;
					break;
				
				case 0x00000007:
					return 0x00000584;
					break;
				
				case 0x0000000B:
					return 0x00000374;
					break;
				
				case 0x0000000E:
					return 0x00000394;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036D;
					break;
				
				case 0x00000004:
					return 0x0000037D;
					break;
				
				case 0x00000006:
					return 0x00000385;
					break;
				
				case 0x00000008:
					return 0x0000057A;
					break;
				
				case 0x00000007:
					return 0x00000585;
					break;
				
				case 0x0000000B:
					return 0x00000375;
					break;
				
				case 0x0000000E:
					return 0x00000395;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x0000037E;
					break;
				
				case 0x00000006:
					return 0x00000386;
					break;
				
				case 0x00000008:
					return 0x0000057B;
					break;
				
				case 0x0000000B:
					return 0x00000376;
					break;
				
				case 0x0000000E:
					return 0x00000396;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x0000037F;
					break;
				
				case 0x00000006:
					return 0x00000387;
					break;
				
				case 0x00000008:
					return 0x0000057C;
					break;
				
				case 0x0000000B:
					return 0x00000377;
					break;
				
				case 0x0000000E:
					return 0x00000397;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000380;
					break;
				
				case 0x00000006:
					return 0x00000388;
					break;
				
				case 0x00000008:
					return 0x0000057D;
					break;
				
				case 0x0000000B:
					return 0x00000378;
					break;
				
				case 0x0000000E:
					return 0x00000398;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000381;
					break;
				
				case 0x00000006:
					return 0x00000389;
					break;
				
				case 0x00000008:
					return 0x0000057E;
					break;
				
				case 0x0000000B:
					return 0x00000379;
					break;
				
				case 0x0000000E:
					return 0x00000399;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000382;
					break;
				
				case 0x00000006:
					return 0x0000038A;
					break;
				
				case 0x00000008:
					return 0x0000057F;
					break;
				
				case 0x0000000B:
					return 0x0000037A;
					break;
				
				case 0x0000000E:
					return 0x0000039A;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039B;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039C;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039D;
					break;
			}
			break;
	}
	return 0x00000373;
}

int func_54(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_12A8F;
	if (iParam4 != 0xFFFFFFFF)
	{
		iVar0 = iParam4;
	}
	if (func_55(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_7(iVar2, iVar0, 0x00000000);
		return unk_0xEAE0D21A50E6C7F4(iVar3, iVar1);
	}
	return 0x00000000;
}

bool func_55(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 0x00002CF7;
	if ((bParam4 && Global_411C56) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 0x00000001:
				switch (iParam0)
				{
					case 0x008797C4:
					case 0xC6349B1D:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x6EBBF42F:
					case 0xB896FFDE:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x20EF5893:
					case 0xA0D0D052:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0x1397BDE4:
					case 0x7CC88842:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0x4731251E:
					case 0x6F12ECD7:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0x42051AC6:
					case 0x5999C1E5:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0x6BC2EE41:
					case 0x4B4F2550:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0x56A1C3FF:
					case 0x2C6A6783:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
					
					case 0xC0235F73:
					case 0xAD93CC80:
					case 0x16FF0A8E:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000000;
						return 0x00000001;
						break;
					
					case 0xCE57FBDC:
					case 0x98CDA2F4:
					case 0x2841AD13:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000001;
						return 0x00000001;
						break;
					
					case 0x928E844A:
					case 0x8B23079F:
					case 0xF1CC4021:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000002;
						return 0x00000001;
						break;
					
					case 0xA0BA20A1:
					case 0x08C582E6:
					case 0x0409E49C:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000003;
						return 0x00000001;
						break;
					
					case 0x075EEDE1:
					case 0xFA7AE651:
					case 0xE0079C98:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000004;
						return 0x00000001;
						break;
					
					case 0x13BA0697:
					case 0xF649DDEF:
					case 0xF13E3F05:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000005;
						return 0x00000001;
						break;
					
					case 0xF77E4E20:
					case 0x633F37DC:
					case 0xCD0C76A2:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000007;
						return 0x00000001;
						break;
					
					case 0x4CEE78FF:
					case 0x3C60EA1C:
					case 0xA9142EB2:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000008;
						return 0x00000001;
						break;
					
					case 0x7AC28546:
					case 0x379D8CB2:
					case 0xA9497954:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x0000000B;
						return 0x00000001;
						break;
				}
				break;
			
			case 0x00000002:
				switch (iParam0)
				{
					case 0x008797C4:
					case 0xC6349B1D:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x6EBBF42F:
					case 0xB896FFDE:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x20EF5893:
					case 0xA0D0D052:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0x1397BDE4:
					case 0x7CC88842:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0x4731251E:
					case 0x6F12ECD7:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0x42051AC6:
					case 0x5999C1E5:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0x6BC2EE41:
					case 0x4B4F2550:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0x56A1C3FF:
					case 0x2C6A6783:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000001:
				switch (iParam0)
				{
					case 0x94F6A649:
					case 0xE9683434:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x62A6C1AA:
					case 0x1C2A99B8:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x8BAC93B9:
					case 0x08C772F2:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0xA173BF47:
					case 0x3D45DBEE:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0xA8404CE0:
					case 0x2EFB3F59:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0xBD787750:
					case 0x4FC280E7:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0xC2AC01B7:
					case 0x4150E404:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0xD8FD2E59:
					case 0x896EF43F:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
			
			case 0x00000002:
				switch (iParam0)
				{
					case 0x94F6A649:
					case 0xE9683434:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x62A6C1AA:
					case 0x1C2A99B8:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x8BAC93B9:
					case 0x08C772F2:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0xA173BF47:
					case 0x3D45DBEE:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0xA8404CE0:
					case 0x2EFB3F59:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0xBD787750:
					case 0x4FC280E7:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0xC2AC01B7:
					case 0x4150E404:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0xD8FD2E59:
					case 0x896EF43F:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
			}
	}
	iVar0 = 0xFFFFFFFF;
	if (bParam4)
	{
		if (Global_411C56)
		{
			iVar0 = unk_0xFAB100617491B764(iParam0);
		}
		else
		{
			iVar0 = unk_0xCE50BA51F0598785(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xFAB100617491B764(iParam0);
	}
	else
	{
		iVar0 = unk_0xCE50BA51F0598785(iParam0);
	}
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	switch (iParam1)
	{
		case 0x00000001:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000000:
					*uParam2 = 0x000006DF;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000006E0;
					break;
				
				case 0x00000002:
					*uParam2 = 0x000006E1;
					break;
				
				case 0x00000003:
					*uParam2 = 0x000006E2;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000006E3;
					break;
				
				case 0x00000005:
					*uParam2 = 0x000006E4;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000006EB;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000006EC;
					break;
				
				case 0x00000008:
					*uParam2 = 0x000006ED;
					break;
				
				case 0x00000009:
					*uParam2 = 0x000006EE;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000006EF;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000006F0;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x000006F1;
					break;
				
				case 0x0000000D:
					*uParam2 = 0x000006F9;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000006FA;
					break;
				
				case 0x0000000F:
					*uParam2 = 0x0000075F;
					break;
				
				case 0x00000010:
					*uParam2 = 0x00000760;
					break;
				
				case 0x00000011:
					*uParam2 = 0x0000077F;
					break;
				
				case 0x00000012:
					*uParam2 = 0x0000078D;
					break;
				
				case 0x00000013:
					*uParam2 = 0x0000078E;
					break;
				
				case 0x00000014:
					*uParam2 = 0x0000078F;
					break;
				
				case 0x00000015:
					*uParam2 = 0x00000790;
					break;
				
				case 0x00000016:
					*uParam2 = 0x00000791;
					break;
				
				case 0x00000017:
					*uParam2 = 0x000007F9;
					break;
				
				case 0x00000018:
					*uParam2 = 0x000007FA;
					break;
				
				case 0x00000019:
					*uParam2 = 0x00000814;
					break;
				
				case 0x0000001A:
					*uParam2 = 0x00000815;
					break;
				
				case 0x0000001B:
					*uParam2 = 0x00000816;
					break;
				
				case 0x0000001C:
					*uParam2 = 0x00000817;
					break;
				
				case 0x0000001D:
					*uParam2 = 0x00000818;
					break;
				
				case 0x0000001E:
					*uParam2 = 0x00000819;
					break;
				
				case 0x0000001F:
					*uParam2 = 0x0000081A;
					break;
				
				case 0x00000020:
					*uParam2 = 0x0000081B;
					break;
				
				case 0x00000021:
					*uParam2 = 0x0000081C;
					break;
				
				case 0x00000022:
					*uParam2 = 0x0000081D;
					break;
				
				case 0x00000023:
					*uParam2 = 0x00000914;
					break;
				
				case 0x00000024:
					*uParam2 = 0x00000915;
					break;
				
				case 0x00000025:
					*uParam2 = 0x00000955;
					break;
				
				case 0x00000026:
					*uParam2 = 0x00000956;
					break;
				
				case 0x00000027:
					*uParam2 = 0x00000957;
					break;
				
				case 0x00000028:
					*uParam2 = 0x00000958;
					break;
				
				case 0x00000029:
					*uParam2 = 0x00000993;
					break;
				
				case 0x0000002A:
					*uParam2 = 0x00000994;
					break;
				
				case 0x0000002B:
					*uParam2 = 0x00000995;
					break;
				
				case 0x0000002C:
					*uParam2 = 0x00000996;
					break;
				
				case 0x0000002D:
					*uParam2 = 0x00000997;
					break;
				
				case 0x0000002E:
					*uParam2 = 0x00000998;
					break;
				
				case 0x0000002F:
					*uParam2 = 0x00000999;
					break;
				
				case 0x00000030:
					*uParam2 = 0x0000099A;
					break;
				
				case 0x00000031:
					*uParam2 = 0x0000099B;
					break;
				
				case 0x00000032:
					*uParam2 = 0x0000099C;
					break;
				
				case 0x00000033:
					*uParam2 = 0x00000A1D;
					break;
				
				case 0x00000034:
					*uParam2 = 0x00000A1E;
					break;
				
				case 0x00000035:
					*uParam2 = 0x00000A1F;
					break;
				
				case 0x00000036:
					*uParam2 = 0x00000A20;
					break;
				
				case 0x00000037:
					*uParam2 = 0x00000A21;
					break;
				
				case 0x00000038:
					*uParam2 = 0x00000A22;
					break;
				
				case 0x00000039:
					*uParam2 = 0x00000A23;
					break;
				
				case 0x0000003A:
					*uParam2 = 0x00000A24;
					break;
				
				case 0x0000003B:
					*uParam2 = 0x00000A25;
					break;
				
				case 0x0000003C:
					*uParam2 = 0x00000A26;
					break;
				
				case 0x0000003D:
					*uParam2 = 0x00000A27;
					break;
				
				case 0x0000003E:
					*uParam2 = 0x00000C7C;
					break;
				
				case 0x0000003F:
					*uParam2 = 0x00000C7D;
					break;
				
				case 0x00000040:
					*uParam2 = 0x00000C7E;
					break;
				
				case 0x00000041:
					*uParam2 = 0x00000C7F;
					break;
				
				case 0x00000042:
					*uParam2 = 0x00000C80;
					break;
				
				case 0x00000043:
					*uParam2 = 0x00000C81;
					break;
				
				case 0x00000044:
					*uParam2 = 0x00000E55;
					break;
				
				case 0x00000045:
					*uParam2 = 0x00000E56;
					break;
				
				case 0x00000046:
					*uParam2 = 0x00000E57;
					break;
				
				case 0x00000047:
					*uParam2 = 0x00000E58;
					break;
				
				case 0x00000048:
					*uParam2 = 0x00000E59;
					break;
				
				case 0x00000049:
					*uParam2 = 0x00000E5A;
					break;
				
				case 0x0000004A:
					*uParam2 = 0x00000E5B;
					break;
				
				case 0x0000004B:
					*uParam2 = 0x00000E5C;
					break;
				
				case 0x0000004C:
					*uParam2 = 0x00000E5D;
					break;
				
				case 0x0000004D:
					*uParam2 = 0x00000E5E;
					break;
				
				case 0x0000004E:
					*uParam2 = 0x00000ED0;
					break;
				
				case 0x0000004F:
					*uParam2 = 0x00000ED1;
					break;
				
				case 0x00000050:
					*uParam2 = 0x00000ED2;
					break;
				
				case 0x00000051:
					*uParam2 = 0x00000ED3;
					break;
				
				case 0x00000052:
					*uParam2 = 0x00000ED4;
					break;
				
				case 0x00000053:
					*uParam2 = 0x00000ED5;
					break;
				
				case 0x00000054:
					*uParam2 = 0x00000ED6;
					break;
				
				case 0x00000055:
					*uParam2 = 0x00000ED7;
					break;
				
				case 0x00000056:
					*uParam2 = 0x00000F3E;
					break;
				
				case 0x00000057:
					*uParam2 = 0x00000F3F;
					break;
				
				case 0x00000058:
					*uParam2 = 0x00000F40;
					break;
				
				case 0x00000059:
					*uParam2 = 0x000014D9;
					break;
				
				case 0x0000005A:
					*uParam2 = 0x000014DA;
					break;
				
				case 0x0000005B:
					*uParam2 = 0x000014DB;
					break;
				
				case 0x0000005C:
					*uParam2 = 0x000014DC;
					break;
				
				case 0x0000005D:
					*uParam2 = 0x000014DD;
					break;
				
				case 0x0000005E:
					*uParam2 = 0x000014DE;
					break;
				
				case 0x0000005F:
					*uParam2 = 0x000014DF;
					break;
				
				case 0x00000060:
					*uParam2 = 0x000014E0;
					break;
				
				case 0x00000061:
					*uParam2 = 0x000014E1;
					break;
				
				case 0x00000062:
					*uParam2 = 0x000014E2;
					break;
				
				case 0x00000063:
					*uParam2 = 0x000014E3;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000064:
					*uParam2 = 0x000014E4;
					break;
				
				case 0x00000065:
					*uParam2 = 0x00001512;
					break;
				
				case 0x00000066:
					*uParam2 = 0x00001513;
					break;
				
				case 0x00000067:
					*uParam2 = 0x00001514;
					break;
				
				case 0x00000068:
					*uParam2 = 0x00001515;
					break;
				
				case 0x00000069:
					*uParam2 = 0x00001516;
					break;
				
				case 0x0000006A:
					*uParam2 = 0x00001517;
					break;
				
				case 0x0000006B:
					*uParam2 = 0x00001518;
					break;
				
				case 0x0000006C:
					*uParam2 = 0x00001519;
					break;
				
				case 0x0000006D:
					*uParam2 = 0x0000151A;
					break;
				
				case 0x0000006E:
					*uParam2 = 0x0000151B;
					break;
				
				case 0x0000006F:
					*uParam2 = 0x0000151C;
					break;
				
				case 0x00000070:
					*uParam2 = 0x0000151D;
					break;
				
				case 0x00000071:
					*uParam2 = 0x0000151E;
					break;
				
				case 0x00000072:
					*uParam2 = 0x0000151F;
					break;
				
				case 0x00000073:
					*uParam2 = 0x00001520;
					break;
				
				case 0x00000074:
					*uParam2 = 0x00001521;
					break;
				
				case 0x00000075:
					*uParam2 = 0x00001522;
					break;
				
				case 0x00000076:
					*uParam2 = 0x00001523;
					break;
				
				case 0x00000077:
					*uParam2 = 0x00001524;
					break;
				
				case 0x00000078:
					*uParam2 = 0x00001525;
					break;
				
				case 0x00000079:
					*uParam2 = 0x00001526;
					break;
				
				case 0x0000007A:
					*uParam2 = 0x00001527;
					break;
				
				case 0x0000007B:
					*uParam2 = 0x00001528;
					break;
				
				case 0x0000007C:
					*uParam2 = 0x000017EA;
					break;
				
				case 0x0000007D:
					*uParam2 = 0x000017EB;
					break;
				
				case 0x0000007E:
					*uParam2 = 0x000017EC;
					break;
				
				case 0x0000007F:
					*uParam2 = 0x000017ED;
					break;
				
				case 0x00000080:
					*uParam2 = 0x000017EE;
					break;
				
				case 0x00000081:
					*uParam2 = 0x000017EF;
					break;
				
				case 0x00000082:
					*uParam2 = 0x000017F0;
					break;
				
				case 0x00000083:
					*uParam2 = 0x000017F1;
					break;
				
				case 0x00000084:
					*uParam2 = 0x000017F2;
					break;
				
				case 0x00000085:
					*uParam2 = 0x000017F3;
					break;
				
				case 0x00000086:
					*uParam2 = 0x000017F4;
					break;
				
				case 0x00000087:
					*uParam2 = 0x000017F5;
					break;
				
				case 0x00000088:
					*uParam2 = 0x000017F6;
					break;
				
				case 0x00000089:
					*uParam2 = 0x000017F7;
					break;
				
				case 0x0000008A:
					*uParam2 = 0x000017F8;
					break;
				
				case 0x0000008B:
					*uParam2 = 0x00001923;
					break;
				
				case 0x0000008C:
					*uParam2 = 0x00001924;
					break;
				
				case 0x0000008D:
					*uParam2 = 0x00001925;
					break;
				
				case 0x0000008E:
					*uParam2 = 0x00001926;
					break;
				
				case 0x0000008F:
					*uParam2 = 0x00001927;
					break;
				
				case 0x00000090:
					*uParam2 = 0x00001928;
					break;
				
				case 0x00000091:
					*uParam2 = 0x00001929;
					break;
				
				case 0x00000092:
					*uParam2 = 0x0000192A;
					break;
				
				case 0x00000093:
					*uParam2 = 0x0000192B;
					break;
				
				case 0x00000094:
					*uParam2 = 0x0000192C;
					break;
				
				case 0x00000095:
					*uParam2 = 0x0000192D;
					break;
				
				case 0x00000096:
					*uParam2 = 0x0000192E;
					break;
				
				case 0x00000097:
					*uParam2 = 0x0000192F;
					break;
				
				case 0x00000098:
					*uParam2 = 0x00001930;
					break;
				
				case 0x00000099:
					*uParam2 = 0x00001931;
					break;
				
				case 0x0000009A:
					*uParam2 = 0x00001C62;
					break;
				
				case 0x0000009B:
					*uParam2 = 0x00001C63;
					break;
				
				case 0x0000009C:
					*uParam2 = 0x00001C64;
					break;
				
				case 0x0000009D:
					*uParam2 = 0x00001C65;
					break;
				
				case 0x0000009E:
					*uParam2 = 0x00001C66;
					break;
				
				case 0x0000009F:
					*uParam2 = 0x00001C67;
					break;
				
				case 0x000000A0:
					*uParam2 = 0x00001C68;
					break;
				
				case 0x000000A1:
					*uParam2 = 0x00001EC7;
					break;
				
				case 0x000000A2:
					*uParam2 = 0x00001EC8;
					break;
				
				case 0x000000A3:
					*uParam2 = 0x00001EC9;
					break;
				
				case 0x000000A4:
					*uParam2 = 0x00001ECA;
					break;
				
				case 0x000000A5:
					*uParam2 = 0x00001ECB;
					break;
				
				case 0x000000A6:
					*uParam2 = 0x00001ECC;
					break;
				
				case 0x000000A7:
					*uParam2 = 0x00001ECD;
					break;
				
				case 0x000000A8:
					*uParam2 = 0x00001ECE;
					break;
				
				case 0x000000A9:
					*uParam2 = 0x00001ECF;
					break;
				
				case 0x000000AA:
					*uParam2 = 0x00001ED0;
					break;
				
				case 0x000000AB:
					*uParam2 = 0x00001ED1;
					break;
				
				case 0x000000AC:
					*uParam2 = 0x00001ED2;
					break;
				
				case 0x000000AD:
					*uParam2 = 0x00001ED3;
					break;
				
				case 0x000000AE:
					*uParam2 = 0x00001ED4;
					break;
				
				case 0x000000AF:
					*uParam2 = 0x00001ED5;
					break;
				
				case 0x000000B0:
					*uParam2 = 0x0000206B;
					break;
				
				case 0x000000B1:
					*uParam2 = 0x0000206C;
					break;
				
				case 0x000000B2:
					*uParam2 = 0x0000206D;
					break;
				
				case 0x000000B3:
					*uParam2 = 0x0000206E;
					break;
				
				case 0x000000B4:
					*uParam2 = 0x0000206F;
					break;
				
				case 0x000000B5:
					*uParam2 = 0x00002070;
					break;
				
				case 0x000000B6:
					*uParam2 = 0x00002071;
					break;
				
				case 0x000000B7:
					*uParam2 = 0x00002072;
					break;
				
				case 0x000000B8:
					*uParam2 = 0x00002073;
					break;
				
				case 0x000000B9:
					*uParam2 = 0x00002074;
					break;
				
				case 0x000000BA:
					*uParam2 = 0x00002075;
					break;
				
				case 0x000000BB:
					*uParam2 = 0x00002076;
					break;
				
				case 0x000000BC:
					*uParam2 = 0x00002077;
					break;
				
				case 0x000000BD:
					*uParam2 = 0x00002078;
					break;
				
				case 0x000000BE:
					*uParam2 = 0x00002079;
					break;
				
				case 0x000000BF:
					*uParam2 = 0x0000207A;
					break;
				
				case 0x000000C0:
					*uParam2 = 0x0000207B;
					break;
				
				case 0x000000C1:
					*uParam2 = 0x0000207C;
					break;
				
				case 0x000000C2:
					*uParam2 = 0x0000207D;
					break;
				
				case 0x000000C3:
					*uParam2 = 0x0000207E;
					break;
				
				case 0x000000C4:
					*uParam2 = 0x0000207F;
					break;
				
				case 0x000000C5:
					*uParam2 = 0x00002080;
					break;
				
				case 0x000000C6:
					*uParam2 = 0x00002081;
					break;
				
				case 0x000000C7:
					*uParam2 = 0x00002082;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x000000C8:
					*uParam2 = 0x00002083;
					break;
				
				case 0x000000C9:
					*uParam2 = 0x000022E8;
					break;
				
				case 0x000000CA:
					*uParam2 = 0x000022E9;
					break;
				
				case 0x000000CB:
					*uParam2 = 0x000022EA;
					break;
				
				case 0x000000CC:
					*uParam2 = 0x000022EB;
					break;
				
				case 0x000000CD:
					*uParam2 = 0x000022EC;
					break;
				
				case 0x000000CE:
					*uParam2 = 0x000024CB;
					break;
				
				case 0x000000CF:
					*uParam2 = 0x000024CC;
					break;
				
				case 0x000000D0:
					*uParam2 = 0x000024CD;
					break;
				
				case 0x000000D1:
					*uParam2 = 0x000024CE;
					break;
				
				case 0x000000D2:
					*uParam2 = 0x000024CF;
					break;
				
				case 0x000000D3:
					*uParam2 = 0x000024D0;
					break;
				
				case 0x000000D4:
					*uParam2 = 0x000024D1;
					break;
				
				case 0x000000D5:
					*uParam2 = 0x000024D2;
					break;
				
				case 0x000000D6:
					*uParam2 = 0x000024D3;
					break;
				
				case 0x000000D7:
					*uParam2 = 0x000024D4;
					break;
				
				case 0x000000D8:
					*uParam2 = 0x000024D5;
					break;
				
				case 0x000000D9:
					*uParam2 = 0x000024D6;
					break;
				
				case 0x000000DA:
					*uParam2 = 0x000024D7;
					break;
				
				case 0x000000DB:
					*uParam2 = 0x000024D8;
					break;
				
				case 0x000000DC:
					*uParam2 = 0x000024D9;
					break;
				
				case 0x000000DD:
					*uParam2 = 0x000024DA;
					break;
				
				case 0x000000DE:
					*uParam2 = 0x000024DB;
					break;
				
				case 0x000000DF:
					*uParam2 = 0x000024DC;
					break;
				
				case 0x000000E0:
					*uParam2 = 0x000024DD;
					break;
				
				case 0x000000E1:
					*uParam2 = 0x000024DE;
					break;
				
				case 0x000000E2:
					*uParam2 = 0x000024DF;
					break;
				
				case 0x000000E3:
					*uParam2 = 0x000024E0;
					break;
				
				case 0x000000E4:
					*uParam2 = 0x000024E1;
					break;
				
				case 0x000000E5:
					*uParam2 = 0x000024E2;
					break;
				
				case 0x000000E6:
					*uParam2 = 0x000024E3;
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000002:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000000:
					*uParam2 = 0x000006E5;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000006E6;
					break;
				
				case 0x00000002:
					*uParam2 = 0x000006E7;
					break;
				
				case 0x00000003:
					*uParam2 = 0x000006E8;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000006E9;
					break;
				
				case 0x00000005:
					*uParam2 = 0x000006EA;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000006F2;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000006F3;
					break;
				
				case 0x00000008:
					*uParam2 = 0x000006F4;
					break;
				
				case 0x00000009:
					*uParam2 = 0x000006F5;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000006F6;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000006F7;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x000006F8;
					break;
				
				case 0x0000000D:
					*uParam2 = 0x000006FB;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000006FC;
					break;
				
				case 0x0000000F:
					*uParam2 = 0x00000761;
					break;
				
				case 0x00000010:
					*uParam2 = 0x00000762;
					break;
				
				case 0x00000011:
					*uParam2 = 0x00000780;
					break;
				
				case 0x00000012:
					*uParam2 = 0x00000792;
					break;
				
				case 0x00000013:
					*uParam2 = 0x00000793;
					break;
				
				case 0x00000014:
					*uParam2 = 0x00000794;
					break;
				
				case 0x00000015:
					*uParam2 = 0x00000795;
					break;
				
				case 0x00000016:
					*uParam2 = 0x00000796;
					break;
				
				case 0x00000017:
					*uParam2 = 0x000007FB;
					break;
				
				case 0x00000018:
					*uParam2 = 0x000007FC;
					break;
				
				case 0x00000019:
					*uParam2 = 0x0000081E;
					break;
				
				case 0x0000001A:
					*uParam2 = 0x0000081F;
					break;
				
				case 0x0000001B:
					*uParam2 = 0x00000820;
					break;
				
				case 0x0000001C:
					*uParam2 = 0x00000821;
					break;
				
				case 0x0000001D:
					*uParam2 = 0x00000822;
					break;
				
				case 0x0000001E:
					*uParam2 = 0x00000823;
					break;
				
				case 0x0000001F:
					*uParam2 = 0x00000824;
					break;
				
				case 0x00000020:
					*uParam2 = 0x00000825;
					break;
				
				case 0x00000021:
					*uParam2 = 0x00000826;
					break;
				
				case 0x00000022:
					*uParam2 = 0x00000827;
					break;
				
				case 0x00000023:
					*uParam2 = 0x00000916;
					break;
				
				case 0x00000024:
					*uParam2 = 0x00000917;
					break;
				
				case 0x00000025:
					*uParam2 = 0x00000959;
					break;
				
				case 0x00000026:
					*uParam2 = 0x0000095A;
					break;
				
				case 0x00000027:
					*uParam2 = 0x0000095B;
					break;
				
				case 0x00000028:
					*uParam2 = 0x0000095C;
					break;
				
				case 0x00000029:
					*uParam2 = 0x0000099D;
					break;
				
				case 0x0000002A:
					*uParam2 = 0x0000099E;
					break;
				
				case 0x0000002B:
					*uParam2 = 0x0000099F;
					break;
				
				case 0x0000002C:
					*uParam2 = 0x000009A0;
					break;
				
				case 0x0000002D:
					*uParam2 = 0x000009A1;
					break;
				
				case 0x0000002E:
					*uParam2 = 0x000009A2;
					break;
				
				case 0x0000002F:
					*uParam2 = 0x000009A3;
					break;
				
				case 0x00000030:
					*uParam2 = 0x000009A4;
					break;
				
				case 0x00000031:
					*uParam2 = 0x000009A5;
					break;
				
				case 0x00000032:
					*uParam2 = 0x000009A6;
					break;
				
				case 0x00000033:
					*uParam2 = 0x00000A28;
					break;
				
				case 0x00000034:
					*uParam2 = 0x00000A29;
					break;
				
				case 0x00000035:
					*uParam2 = 0x00000A2A;
					break;
				
				case 0x00000036:
					*uParam2 = 0x00000A2B;
					break;
				
				case 0x00000037:
					*uParam2 = 0x00000A2C;
					break;
				
				case 0x00000038:
					*uParam2 = 0x00000A2D;
					break;
				
				case 0x00000039:
					*uParam2 = 0x00000A2E;
					break;
				
				case 0x0000003A:
					*uParam2 = 0x00000A2F;
					break;
				
				case 0x0000003B:
					*uParam2 = 0x00000A30;
					break;
				
				case 0x0000003C:
					*uParam2 = 0x00000A31;
					break;
				
				case 0x0000003D:
					*uParam2 = 0x00000A32;
					break;
				
				case 0x0000003E:
					*uParam2 = 0x00000C82;
					break;
				
				case 0x0000003F:
					*uParam2 = 0x00000C83;
					break;
				
				case 0x00000040:
					*uParam2 = 0x00000C84;
					break;
				
				case 0x00000041:
					*uParam2 = 0x00000C85;
					break;
				
				case 0x00000042:
					*uParam2 = 0x00000C86;
					break;
				
				case 0x00000043:
					*uParam2 = 0x00000C87;
					break;
				
				case 0x00000044:
					*uParam2 = 0x00000E5F;
					break;
				
				case 0x00000045:
					*uParam2 = 0x00000E60;
					break;
				
				case 0x00000046:
					*uParam2 = 0x00000E61;
					break;
				
				case 0x00000047:
					*uParam2 = 0x00000E62;
					break;
				
				case 0x00000048:
					*uParam2 = 0x00000E63;
					break;
				
				case 0x00000049:
					*uParam2 = 0x00000E64;
					break;
				
				case 0x0000004A:
					*uParam2 = 0x00000E65;
					break;
				
				case 0x0000004B:
					*uParam2 = 0x00000E66;
					break;
				
				case 0x0000004C:
					*uParam2 = 0x00000E67;
					break;
				
				case 0x0000004D:
					*uParam2 = 0x00000E68;
					break;
				
				case 0x0000004E:
					*uParam2 = 0x00000ED8;
					break;
				
				case 0x0000004F:
					*uParam2 = 0x00000ED9;
					break;
				
				case 0x00000050:
					*uParam2 = 0x00000EDA;
					break;
				
				case 0x00000051:
					*uParam2 = 0x00000EDB;
					break;
				
				case 0x00000052:
					*uParam2 = 0x00000EDC;
					break;
				
				case 0x00000053:
					*uParam2 = 0x00000EDD;
					break;
				
				case 0x00000054:
					*uParam2 = 0x00000EDE;
					break;
				
				case 0x00000055:
					*uParam2 = 0x00000EDF;
					break;
				
				case 0x00000056:
					*uParam2 = 0x00000F41;
					break;
				
				case 0x00000057:
					*uParam2 = 0x00000F42;
					break;
				
				case 0x00000058:
					*uParam2 = 0x00000F43;
					break;
				
				case 0x00000059:
					*uParam2 = 0x000014E5;
					break;
				
				case 0x0000005A:
					*uParam2 = 0x000014E6;
					break;
				
				case 0x0000005B:
					*uParam2 = 0x000014E7;
					break;
				
				case 0x0000005C:
					*uParam2 = 0x000014E8;
					break;
				
				case 0x0000005D:
					*uParam2 = 0x000014E9;
					break;
				
				case 0x0000005E:
					*uParam2 = 0x000014EA;
					break;
				
				case 0x0000005F:
					*uParam2 = 0x000014EB;
					break;
				
				case 0x00000060:
					*uParam2 = 0x000014EC;
					break;
				
				case 0x00000061:
					*uParam2 = 0x000014ED;
					break;
				
				case 0x00000062:
					*uParam2 = 0x000014EE;
					break;
				
				case 0x00000063:
					*uParam2 = 0x000014EF;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000064:
					*uParam2 = 0x000014F0;
					break;
				
				case 0x00000065:
					*uParam2 = 0x00001529;
					break;
				
				case 0x00000066:
					*uParam2 = 0x0000152A;
					break;
				
				case 0x00000067:
					*uParam2 = 0x0000152B;
					break;
				
				case 0x00000068:
					*uParam2 = 0x0000152C;
					break;
				
				case 0x00000069:
					*uParam2 = 0x0000152D;
					break;
				
				case 0x0000006A:
					*uParam2 = 0x0000152E;
					break;
				
				case 0x0000006B:
					*uParam2 = 0x0000152F;
					break;
				
				case 0x0000006C:
					*uParam2 = 0x00001530;
					break;
				
				case 0x0000006D:
					*uParam2 = 0x00001531;
					break;
				
				case 0x0000006E:
					*uParam2 = 0x00001532;
					break;
				
				case 0x0000006F:
					*uParam2 = 0x00001533;
					break;
				
				case 0x00000070:
					*uParam2 = 0x00001534;
					break;
				
				case 0x00000071:
					*uParam2 = 0x00001535;
					break;
				
				case 0x00000072:
					*uParam2 = 0x00001536;
					break;
				
				case 0x00000073:
					*uParam2 = 0x00001537;
					break;
				
				case 0x00000074:
					*uParam2 = 0x00001538;
					break;
				
				case 0x00000075:
					*uParam2 = 0x00001539;
					break;
				
				case 0x00000076:
					*uParam2 = 0x0000153A;
					break;
				
				case 0x00000077:
					*uParam2 = 0x0000153B;
					break;
				
				case 0x00000078:
					*uParam2 = 0x0000153C;
					break;
				
				case 0x00000079:
					*uParam2 = 0x0000153D;
					break;
				
				case 0x0000007A:
					*uParam2 = 0x0000153E;
					break;
				
				case 0x0000007B:
					*uParam2 = 0x0000153F;
					break;
				
				case 0x0000007C:
					*uParam2 = 0x000017F9;
					break;
				
				case 0x0000007D:
					*uParam2 = 0x000017FA;
					break;
				
				case 0x0000007E:
					*uParam2 = 0x000017FB;
					break;
				
				case 0x0000007F:
					*uParam2 = 0x000017FC;
					break;
				
				case 0x00000080:
					*uParam2 = 0x000017FD;
					break;
				
				case 0x00000081:
					*uParam2 = 0x000017FE;
					break;
				
				case 0x00000082:
					*uParam2 = 0x000017FF;
					break;
				
				case 0x00000083:
					*uParam2 = 0x00001800;
					break;
				
				case 0x00000084:
					*uParam2 = 0x00001801;
					break;
				
				case 0x00000085:
					*uParam2 = 0x00001802;
					break;
				
				case 0x00000086:
					*uParam2 = 0x00001803;
					break;
				
				case 0x00000087:
					*uParam2 = 0x00001804;
					break;
				
				case 0x00000088:
					*uParam2 = 0x00001805;
					break;
				
				case 0x00000089:
					*uParam2 = 0x00001806;
					break;
				
				case 0x0000008A:
					*uParam2 = 0x00001807;
					break;
				
				case 0x0000008B:
					*uParam2 = 0x00001932;
					break;
				
				case 0x0000008C:
					*uParam2 = 0x00001933;
					break;
				
				case 0x0000008D:
					*uParam2 = 0x00001934;
					break;
				
				case 0x0000008E:
					*uParam2 = 0x00001935;
					break;
				
				case 0x0000008F:
					*uParam2 = 0x00001936;
					break;
				
				case 0x00000090:
					*uParam2 = 0x00001937;
					break;
				
				case 0x00000091:
					*uParam2 = 0x00001938;
					break;
				
				case 0x00000092:
					*uParam2 = 0x00001939;
					break;
				
				case 0x00000093:
					*uParam2 = 0x0000193A;
					break;
				
				case 0x00000094:
					*uParam2 = 0x0000193B;
					break;
				
				case 0x00000095:
					*uParam2 = 0x0000193C;
					break;
				
				case 0x00000096:
					*uParam2 = 0x0000193D;
					break;
				
				case 0x00000097:
					*uParam2 = 0x0000193E;
					break;
				
				case 0x00000098:
					*uParam2 = 0x0000193F;
					break;
				
				case 0x00000099:
					*uParam2 = 0x00001940;
					break;
				
				case 0x0000009A:
					*uParam2 = 0x00001C69;
					break;
				
				case 0x0000009B:
					*uParam2 = 0x00001C6A;
					break;
				
				case 0x0000009C:
					*uParam2 = 0x00001C6B;
					break;
				
				case 0x0000009D:
					*uParam2 = 0x00001C6C;
					break;
				
				case 0x0000009E:
					*uParam2 = 0x00001C6D;
					break;
				
				case 0x0000009F:
					*uParam2 = 0x00001C6E;
					break;
				
				case 0x000000A0:
					*uParam2 = 0x00001C6F;
					break;
				
				case 0x000000A1:
					*uParam2 = 0x00001ED6;
					break;
				
				case 0x000000A2:
					*uParam2 = 0x00001ED7;
					break;
				
				case 0x000000A3:
					*uParam2 = 0x00001ED8;
					break;
				
				case 0x000000A4:
					*uParam2 = 0x00001ED9;
					break;
				
				case 0x000000A5:
					*uParam2 = 0x00001EDA;
					break;
				
				case 0x000000A6:
					*uParam2 = 0x00001EDB;
					break;
				
				case 0x000000A7:
					*uParam2 = 0x00001EDC;
					break;
				
				case 0x000000A8:
					*uParam2 = 0x00001EDD;
					break;
				
				case 0x000000A9:
					*uParam2 = 0x00001EDE;
					break;
				
				case 0x000000AA:
					*uParam2 = 0x00001EDF;
					break;
				
				case 0x000000AB:
					*uParam2 = 0x00001EE0;
					break;
				
				case 0x000000AC:
					*uParam2 = 0x00001EE1;
					break;
				
				case 0x000000AD:
					*uParam2 = 0x00001EE2;
					break;
				
				case 0x000000AE:
					*uParam2 = 0x00001EE3;
					break;
				
				case 0x000000AF:
					*uParam2 = 0x00001EE4;
					break;
				
				case 0x000000B0:
					*uParam2 = 0x00002084;
					break;
				
				case 0x000000B1:
					*uParam2 = 0x00002085;
					break;
				
				case 0x000000B2:
					*uParam2 = 0x00002086;
					break;
				
				case 0x000000B3:
					*uParam2 = 0x00002087;
					break;
				
				case 0x000000B4:
					*uParam2 = 0x00002088;
					break;
				
				case 0x000000B5:
					*uParam2 = 0x00002089;
					break;
				
				case 0x000000B6:
					*uParam2 = 0x0000208A;
					break;
				
				case 0x000000B7:
					*uParam2 = 0x0000208B;
					break;
				
				case 0x000000B8:
					*uParam2 = 0x0000208C;
					break;
				
				case 0x000000B9:
					*uParam2 = 0x0000208D;
					break;
				
				case 0x000000BA:
					*uParam2 = 0x0000208E;
					break;
				
				case 0x000000BB:
					*uParam2 = 0x0000208F;
					break;
				
				case 0x000000BC:
					*uParam2 = 0x00002090;
					break;
				
				case 0x000000BD:
					*uParam2 = 0x00002091;
					break;
				
				case 0x000000BE:
					*uParam2 = 0x00002092;
					break;
				
				case 0x000000BF:
					*uParam2 = 0x00002093;
					break;
				
				case 0x000000C0:
					*uParam2 = 0x00002094;
					break;
				
				case 0x000000C1:
					*uParam2 = 0x00002095;
					break;
				
				case 0x000000C2:
					*uParam2 = 0x00002096;
					break;
				
				case 0x000000C3:
					*uParam2 = 0x00002097;
					break;
				
				case 0x000000C4:
					*uParam2 = 0x00002098;
					break;
				
				case 0x000000C5:
					*uParam2 = 0x00002099;
					break;
				
				case 0x000000C6:
					*uParam2 = 0x0000209A;
					break;
				
				case 0x000000C7:
					*uParam2 = 0x0000209B;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x000000C8:
					*uParam2 = 0x0000209C;
					break;
				
				case 0x000000C9:
					*uParam2 = 0x000022ED;
					break;
				
				case 0x000000CA:
					*uParam2 = 0x000022EE;
					break;
				
				case 0x000000CB:
					*uParam2 = 0x000022EF;
					break;
				
				case 0x000000CC:
					*uParam2 = 0x000022F0;
					break;
				
				case 0x000000CD:
					*uParam2 = 0x000022F1;
					break;
				
				case 0x000000CE:
					*uParam2 = 0x000024E4;
					break;
				
				case 0x000000CF:
					*uParam2 = 0x000024E5;
					break;
				
				case 0x000000D0:
					*uParam2 = 0x000024E6;
					break;
				
				case 0x000000D1:
					*uParam2 = 0x000024E7;
					break;
				
				case 0x000000D2:
					*uParam2 = 0x000024E8;
					break;
				
				case 0x000000D3:
					*uParam2 = 0x000024E9;
					break;
				
				case 0x000000D4:
					*uParam2 = 0x000024EA;
					break;
				
				case 0x000000D5:
					*uParam2 = 0x000024EB;
					break;
				
				case 0x000000D6:
					*uParam2 = 0x000024EC;
					break;
				
				case 0x000000D7:
					*uParam2 = 0x000024ED;
					break;
				
				case 0x000000D8:
					*uParam2 = 0x000024EE;
					break;
				
				case 0x000000D9:
					*uParam2 = 0x000024EF;
					break;
				
				case 0x000000DA:
					*uParam2 = 0x000024F0;
					break;
				
				case 0x000000DB:
					*uParam2 = 0x000024F1;
					break;
				
				case 0x000000DC:
					*uParam2 = 0x000024F2;
					break;
				
				case 0x000000DD:
					*uParam2 = 0x000024F3;
					break;
				
				case 0x000000DE:
					*uParam2 = 0x000024F4;
					break;
				
				case 0x000000DF:
					*uParam2 = 0x000024F5;
					break;
				
				case 0x000000E0:
					*uParam2 = 0x000024F6;
					break;
				
				case 0x000000E1:
					*uParam2 = 0x000024F7;
					break;
				
				case 0x000000E2:
					*uParam2 = 0x000024F8;
					break;
				
				case 0x000000E3:
					*uParam2 = 0x000024F9;
					break;
				
				case 0x000000E4:
					*uParam2 = 0x000024FA;
					break;
				
				case 0x000000E5:
					*uParam2 = 0x000024FB;
					break;
				
				case 0x000000E6:
					*uParam2 = 0x000024FC;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 0x00000020);
	return *uParam2 != 0x00002CF7;
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000000;
			break;
		
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000002:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000003;
			break;
		
		case 0x00000004:
			return 0x00000004;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000000;
			break;
		
		case 0x0000000A:
			return 0x00000001;
			break;
		
		case 0x0000000B:
			return 0x00000000;
			break;
		
		case 0x0000000C:
			return 0x00000000;
			break;
		
		case 0x0000000D:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

void func_57(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0x00000000)
	{
		return;
	}
	iVar1 = Global_12A92[0x00000000 /*14*/].f_5;
	if (iParam0 == 0x0000000C)
	{
		iVar4 = 0x00000000;
		iVar5 = unk_0x84997C8C8A5848DD(iVar1, 0x00000000);
		iVar3 = 0x00000000;
		while (iVar3 < iVar5)
		{
			unk_0xA69F810DF7EA02E6(iVar3, &Var2);
			if (!unk_0x232048AB4B0E0259(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_280004 = Var2.f_1;
					Global_280005 = Var2;
					func_50(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0x00000000, 0x00000000, Var2.f_2, 0x00000000, 0xFFFFFFFF, 0x00000002, 0x00000001);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 0x0000000D)
	{
		func_50(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, "NO_LABEL", 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001);
	}
	else if (iParam0 == 0x0000000E)
	{
		unk_0x30BBA34DD235D7FE(&Var6);
		iVar9 = 0x00000000;
		iVar10 = unk_0xF6900DA2D9CD7BC5(iVar1, 0x00000007, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		iVar8 = 0x00000000;
		while (iVar8 < iVar10)
		{
			unk_0x4F79808059300187(iVar8, &Var6);
			if (!unk_0x232048AB4B0E0259(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0x00000000)
					{
						iVar7 = 0x00000009;
					}
					else if (Var6.f_6 == 0x00000001)
					{
						iVar7 = 0x0000000A;
					}
					else if (Var6.f_6 == 0x00000002)
					{
						iVar7 = 0x00000002;
					}
					else if (Var6.f_6 == 0x00000003)
					{
						iVar7 = 0x00000003;
					}
					else if (Var6.f_6 == 0x00000004)
					{
						iVar7 = 0x00000004;
					}
					else if (Var6.f_6 == 0x00000005)
					{
						iVar7 = 0x00000005;
					}
					else if (Var6.f_6 == 0x00000006)
					{
						iVar7 = 0x00000006;
					}
					else if (Var6.f_6 == 0x00000007)
					{
						iVar7 = 0x00000007;
					}
					else if (Var6.f_6 == 0x00000008)
					{
						iVar7 = 0x00000008;
					}
					else
					{
						iVar7 = 0xFFFFFFFF;
					}
					Global_280004 = Var6.f_1;
					Global_280005 = Var6;
					func_50(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, unk_0x1A5A491D253EA7BA(Var6.f_1, 0x85C5D476, 0x00000000), iVar7, 0x00000002, Var6.f_1 != 0x00000000);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var11);
		if (iParam3 != 0xFFFFFFFF && Global_12B3B)
		{
			unk_0xFDEBA3FD0BF0D4AC(iParam3, &Var11);
			Global_280004 = Var11.f_1;
			Global_280005 = Var11;
			func_50(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x1A5A491D253EA7BA(Var11.f_1, 0x85C5D476, 0x00000000), 0xFFFFFFFF, 0x00000002, Var11.f_1 != 0x00000000);
			return;
		}
		iVar13 = 0x00000000;
		iVar14 = unk_0xF6900DA2D9CD7BC5(iVar1, 0x00000007, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, func_38(iParam0));
		iVar12 = 0x00000000;
		while (iVar12 < iVar14)
		{
			unk_0xC578687D5A643830(iVar12, &Var11);
			if (!unk_0x232048AB4B0E0259(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_280004 = Var11.f_1;
					Global_280005 = Var11;
					func_50(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x1A5A491D253EA7BA(Var11.f_1, 0x85C5D476, 0x00000000), 0xFFFFFFFF, 0x00000002, Var11.f_1 != 0x00000000);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_58(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_59(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000077;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000081;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008B;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000095;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000087;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000030, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_60(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_61(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_62(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000006, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_63(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000021, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_64(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000011, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_65(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000012, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_66(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_67(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000048;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000054, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_68(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x000002B2;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002B2;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003F;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000063;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000258;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000068, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_69(int iParam0)
{
	if (iParam0 < 0x00000088)
	{
		func_71(iParam0);
	}
	else
	{
		func_70(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_57(0x00000003, iParam0, 0x000000F2, 0xFFFFFFFF);
	}
}

void func_70(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000F6E;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x00000019;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000019;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar1 = 0x00000023;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000001;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000B5:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000B6:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000004;
			iVar1 = 0x00000031;
			break;
		
		case 0x000000B7:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000005;
			iVar1 = 0x00000334;
			break;
		
		case 0x000000B8:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000006;
			iVar1 = 0x00000316;
			break;
		
		case 0x000000B9:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000007;
			iVar1 = 0x00000334;
			break;
		
		case 0x000000BA:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000008;
			iVar1 = 0x000003A1;
			break;
		
		case 0x000000BB:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000009;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000BC:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000352;
			break;
		
		case 0x000000BD:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000316;
			break;
		
		case 0x000000BE:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000BF:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			break;
		
		case 0x000000C0:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			break;
		
		case 0x000000C1:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			break;
		
		case 0x000000C2:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			break;
		
		case 0x000000C3:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			break;
		
		case 0x000000C4:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			break;
		
		case 0x000000C5:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			break;
		
		case 0x000000C6:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			break;
		
		case 0x000000C7:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			break;
		
		case 0x000000C8:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000C9:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000001;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CA:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000002;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CB:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000CC:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000004;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CD:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000005;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CE:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000CF:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x0000044C;
			break;
		
		case 0x000000D0:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x000004B0;
			break;
		
		case 0x000000D1:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x000004C4;
			break;
		
		case 0x000000D2:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x000004E2;
			break;
		
		case 0x000000D3:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000514;
			break;
		
		case 0x000000D4:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000550;
			break;
		
		case 0x000000D5:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x000000D6:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x000000D7:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000D8:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002A;
			break;
		
		case 0x000000D9:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000DA:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000DB:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000DC:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002C;
			break;
		
		case 0x000000DD:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002E;
			break;
		
		case 0x000000DE:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000034;
			break;
		
		case 0x000000DF:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C80;
			break;
		
		case 0x000000E0:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000C80;
			break;
		
		case 0x000000E1:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000002;
			iVar1 = 0x000009F6;
			break;
		
		case 0x000000E2:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E3:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000A1E;
			break;
		
		case 0x000000E4:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E5:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000006;
			iVar1 = 0x000009F6;
			break;
		
		case 0x000000E6:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000A1E;
			break;
		
		case 0x000000E7:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000008;
			iVar1 = 0x00000AA0;
			break;
		
		case 0x000000E8:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E9:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000CB2;
			break;
		
		case 0x000000EA:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000B86;
			break;
		
		case 0x000000EB:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000C1C;
			break;
		
		case 0x000000EC:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C4E;
			break;
		
		case 0x000000ED:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000CA8;
			break;
		
		case 0x000000EE:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000D16;
			break;
		
		case 0x000000EF:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000D48;
			break;
		
		case 0x000000F0:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000007;
			iVar1 = 0x00000CD0;
			break;
		
		case 0x000000F1:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			break;
		
		default:
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_71(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000018;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001A;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000230;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000258;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x000001F4;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x000001F4;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000024E;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000021C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			iVar1 = 0x000001F4;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x0000015E;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000172;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000027;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000031;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000008;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x00000208;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000001C2;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x000001A4;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x000001A4;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004E;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000028;
			break;
		
		default:
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_72(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_73(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_74(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_92(iParam1);
			break;
		
		case 0x00000002:
			func_91(iParam1);
			break;
		
		case 0x00000003:
			func_87(iParam1);
			break;
		
		case 0x00000004:
			func_86(iParam1);
			break;
		
		case 0x00000006:
			func_85(iParam1);
			break;
		
		case 0x00000005:
			func_84(iParam1);
			break;
		
		case 0x00000008:
			func_83(iParam1);
			break;
		
		case 0x00000009:
			func_82(iParam1);
			break;
		
		case 0x0000000A:
			func_81(iParam1);
			break;
		
		case 0x00000001:
			func_80(iParam1);
			break;
		
		case 0x00000007:
			func_79(iParam1);
			break;
		
		case 0x0000000B:
			func_78(iParam1);
			break;
		
		case 0x0000000C:
			func_77(iParam1);
			break;
		
		case 0x0000000D:
			func_76(iParam1);
			break;
		
		case 0x0000000E:
			func_75(iParam1);
			break;
	}
}

void func_75(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x000011EE;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			iVar1 = 0x00001004;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			iVar1 = 0x00000F0A;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			iVar1 = 0x00001482;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			iVar1 = 0x00000A8C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C1C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000007;
			iVar1 = 0x000013BA;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x000009C4;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x0000079E;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000F3C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000DDE;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00001194;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000A8C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C1C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000B86;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000007;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000080;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000082;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000087;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000070;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x00000073;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000076;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x00000078;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000007D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000080;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x00000048;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000095;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x0000008B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000095;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000087;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000009F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C6;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000DC;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000BE;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000C8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000D0;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000BE;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x000000A0;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x00000020;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000023;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000026;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x0000002A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000030;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000023;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x000000AF, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_76(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_77(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000FA0;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000122A;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001388;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000128E;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000128E;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001450;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001450;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x0000002F, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_78(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002A;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000031;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x0000003F, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_79(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_80(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000005, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_81(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000035, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_82(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x0000000C, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_83(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x000000C3;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x000000C3;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x0000004D, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_84(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_85(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000059;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000059;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000000B4;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x000000C8;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000000EB;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000018;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001D;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001C;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000009B;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000009B;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A5;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x000000AA;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A5;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AA;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000086, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_86(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002C;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x0000008C;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000094;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x0000009A;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x0000009E;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000003E;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B4;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000080;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000080;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000084;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000094;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000081;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x0000001C;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000022;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x00000024;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar1 = 0x00000020;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000075, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_87(int iParam0)
{
	if (iParam0 < 0x0000006B)
	{
		func_90(iParam0);
	}
	else if (iParam0 < 0x000000E3)
	{
		func_89(iParam0);
	}
	else
	{
		func_88(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_57(0x00000003, iParam0, 0x0000013E, 0xFFFFFFFF);
	}
}

void func_88(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x000000E3:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E4:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E5:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E6:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E7:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E8:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E9:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EA:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EB:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EC:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000ED:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EE:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EF:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F0:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000D;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F1:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F2:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F3:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F4:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F5:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F6:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F7:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F8:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F9:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FA:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FB:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FC:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FD:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FE:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FF:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000100:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000101:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000102:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000103:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000104:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000105:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000106:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000107:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000108:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000109:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000010A:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000010B:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000010C:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000010D:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000046;
			break;
		
		case 0x0000010E:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000010F:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000110:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000111:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000112:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000113:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000114:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000115:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000116:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000117:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000118:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000119:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000011A:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000011B:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000011C:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000011D:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000118;
			break;
		
		case 0x0000011E:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000113;
			break;
		
		case 0x0000011F:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000120:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000121:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000122:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000123:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000008;
			iVar1 = 0x00000127;
			break;
		
		case 0x00000124:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000125:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000126:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000127:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000128:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x000006D6;
			break;
		
		case 0x00000129:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000780;
			break;
		
		case 0x0000012A:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000762;
			break;
		
		case 0x0000012B:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			break;
		
		case 0x0000012C:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000004;
			iVar1 = 0x000006D6;
			break;
		
		case 0x0000012D:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000005;
			iVar1 = 0x000007C6;
			break;
		
		case 0x0000012E:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000006;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000012F:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000007;
			iVar1 = 0x000007C6;
			break;
		
		case 0x00000130:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000008;
			iVar1 = 0x00000780;
			break;
		
		case 0x00000131:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000009;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000132:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000A;
			iVar1 = 0x000007C6;
			break;
		
		case 0x00000133:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000B;
			iVar1 = 0x000006FE;
			break;
		
		case 0x00000134:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000C;
			iVar1 = 0x000006FE;
			break;
		
		case 0x00000135:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000136:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000137:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000138:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004F;
			break;
		
		case 0x00000139:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004F;
			break;
		
		case 0x0000013A:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000005;
			iVar1 = 0x00000059;
			break;
		
		case 0x0000013B:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000006;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000013C:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000013D:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000008;
			break;
		
		default:
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_89(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			iVar1 = 0x000001C2;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000190;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000006;
			iVar1 = 0x0000023A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000008;
			iVar1 = 0x000001D6;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000009;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000208;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000B;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000C;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000024E;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000230;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000208;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x0000005A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002F;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002F;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x000000F0;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x00000104;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000037;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B5:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B6:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B7:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B8:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B9:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BA:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BB:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BC:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BD:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BE:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BF:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C0:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C1:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C2:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C3:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C4:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C5:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C6:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C7:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C8:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C9:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CA:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CB:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CC:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CD:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CE:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CF:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000D0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x000000D1:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x000000DC;
			break;
		
		case 0x000000D2:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			break;
		
		case 0x000000D3:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x000000F0;
			break;
		
		case 0x000000D4:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x000000F0;
			break;
		
		case 0x000000D5:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000104;
			break;
		
		case 0x000000D6:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000113;
			break;
		
		case 0x000000D7:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000113;
			break;
		
		case 0x000000D8:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000D9:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DA:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DB:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DC:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DD:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DE:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DF:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C1C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E0:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000AF0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E1:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x000009C4;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E2:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000BB8;
			iVar6 = 0x00000003;
			break;
		
		default:
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_90(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000013;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000012;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000014;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000017;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001A;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x00000018;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001B;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001C;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001B;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001D;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000442;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x00000442;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000460;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000460;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x0000050A;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x0000050A;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000087;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000008B;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x00000021;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000021;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003B;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001C;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001C;
			break;
		
		default:
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_91(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000015, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_92(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x0000000A, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_93(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_110(iParam1);
			break;
		
		case 0x00000002:
			func_109(iParam1);
			break;
		
		case 0x00000003:
			func_106(iParam1);
			break;
		
		case 0x00000004:
			func_105(iParam1);
			break;
		
		case 0x00000006:
			func_104(iParam1);
			break;
		
		case 0x00000005:
			func_103(iParam1);
			break;
		
		case 0x00000008:
			func_102(iParam1);
			break;
		
		case 0x00000009:
			func_101(iParam1);
			break;
		
		case 0x0000000A:
			func_100(iParam1);
			break;
		
		case 0x00000001:
			func_99(iParam1);
			break;
		
		case 0x00000007:
			func_98(iParam1);
			break;
		
		case 0x0000000B:
			func_97(iParam1);
			break;
		
		case 0x0000000C:
			func_96(iParam1);
			break;
		
		case 0x0000000D:
			func_95(iParam1);
			break;
		
		case 0x0000000E:
			func_94(iParam1);
			break;
	}
}

void func_94(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x0000000B;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000038;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x00000048;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000046;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000052;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x00000055;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x00000055;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000EB;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000F5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000000FA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000113;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000118;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000127;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000B3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x0000009F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000E1;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000071, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_95(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x0000000A, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_96(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000F3C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000FA0;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x000011F8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001130;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001130;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000035, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_97(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x000001EA;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x000001EA;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x0000021C;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x00000226;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x000003D4;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x0000041A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000044C;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x00000762;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000076C;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000780;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x000007BC;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x00000834;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar1 = 0x00000848;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000A;
			iVar1 = 0x000007D0;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000898;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000C;
			iVar1 = 0x000008E8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000D;
			iVar1 = 0x000008FC;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000092E;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000F;
			iVar1 = 0x000008E8;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x0000002D, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_98(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_99(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000005, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_100(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000030, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_101(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000014, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_102(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000018, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_103(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x0000000E, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_104(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000299;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x0000026C;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000244;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000040;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x00000038;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			iVar1 = 0x00000048;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			iVar1 = 0x00000046;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000063, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_105(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000226;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x0000036B;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002E;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002E;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002E;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000002A;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000071, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_106(int iParam0)
{
	if (iParam0 < 0x0000003C)
	{
		func_108(iParam0);
	}
	else
	{
		func_107(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_57(0x00000003, iParam0, 0x000000B5, 0xFFFFFFFF);
	}
}

void func_107(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000018;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x000000BE;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x000000BE;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x000000BE;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x000000D2;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000063;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000031;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000073;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000005A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00001356;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x00001063;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C7B;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000B86;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000F6E;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000007;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000008;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000009;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000546;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000578;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x000004B0;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x000004E2;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000546;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x00000514;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x00000564;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x0000053C;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000564;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x000004E2;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000001;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000002;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000003;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000004;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000006;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000007;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000082;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000122;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000140;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003B;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003B;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000003;
			iVar1 = 0x00000031;
			break;
		
		default:
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_108(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000DAC;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00000013;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000008;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000009;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000C;
			iVar1 = 0x000000D2;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000D;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000136;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003E;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000003A;
			break;
		
		default:
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_109(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000006, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_110(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		default:
			func_57(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_50(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_111()
{
	Global_12A92[0x00000000 /*14*/].f_1 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_2 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_5 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_3 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_4 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_6 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_D = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_C = 0x00000000;
	Global_12A92[0x00000000 /*14*/] = 0x00000000;
	StringCopy(&(Global_12A92[0x00000000 /*14*/].f_8), "NO_LABEL", 16);
}

void func_112(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 0x000000C6)
	{
		if (Global_12B4E)
		{
			Global_2537E2.f_4B.f_E3[iParam0] = iParam1;
		}
		else
		{
			Global_1B416.f_1C58.f_E3[iParam0] = iParam1;
		}
		Global_95FE[iParam0] = iParam2;
		Global_96C5[iParam0] = 0x00000001;
		func_115(iParam0, bParam3, iParam4, 0x00000000);
		func_113(iParam0, iParam1);
	}
}

void func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x0000000C:
			if (iParam1 == 0x00000000)
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0x00000001, 0x00000000);
			}
			break;
		
		case 0x00000047:
			if (iParam1 != 0x00000001)
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 0x00000001, 0x00000000);
			}
			break;
		
		case 0x00000041:
			if (iParam1 == 0x00000001)
			{
				func_114(0x00000000, 0x00000000);
			}
			else
			{
				func_114(0x00000000, 0x00000001);
			}
			break;
		
		case 0x00000006:
			if (iParam1 == 0x00000001)
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0x00000001, 0x00000000);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0x00000000, 0x00000000);
			}
			break;
		
		case 0x000000AE:
			if (iParam1 == 0x00000002)
			{
				unk_0x250BB9A851121D75("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 0x00000025:
			if (iParam1 == 0x00000001)
			{
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0x00000000);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0x00000000);
			}
			break;
	}
}

void func_114(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_1AEC4, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1AEC4, iParam0);
	}
	Global_1AEC3 = 0x00000001;
}

bool func_115(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_193787 = 0x00000001;
	bVar0 = 0x00000000;
	Var3.f_4 = 0x00000003;
	Var3.f_8 = 0x00000003;
	Var3.f_40 = 0x00000003;
	Var3.f_4B = 0x00000003;
	Var3.f_5B = 0x00000003;
	func_119(&Var3, iParam0);
	if (func_116())
	{
		iVar1 = Global_1B416.f_1C58.f_E3[iParam0];
	}
	else
	{
		iVar1 = Global_2537E2.f_4B.f_E3[iParam0];
	}
	iVar2 = Global_978C[iParam0];
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !bParam3)
	{
		Global_193787 = 0x00000001;
	}
	else
	{
		bVar5 = 0x00000001;
		if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != unk_0x12AB0310C2281427("standard_global_reg"))
		{
			if (iParam2 == 0x00000000)
			{
				if (Global_95FE[iParam0] && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Var3, 0x00000001) < 200f)
				{
					bVar5 = 0x00000000;
					Global_193787 = 0x00000001;
				}
				if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || unk_0x946BFA82EB988C81(unk_0x16F2683693E537C9()))
				{
					if (!unk_0x757EF87A33649210())
					{
						bVar5 = 0x00000000;
						Global_193787 = 0x00000001;
					}
				}
			}
		}
		if (unk_0xEB880D98B5988D0C() && (!unk_0x991B1F0980C62628() || unk_0x00A15D69BCAA5267() != 0x00000005))
		{
			bVar5 = 0x00000000;
			Global_193787 = 0x00000001;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0x00000000:
					if (iVar1 == 0x00000002)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0x00000000)
						{
							unk_0x77ADAEFF81EAE1E4(Var3, 10f, Var3.f_4[iVar1], 0x00000000);
						}
						if (Var3.f_4[iVar2] != 0x00000000)
						{
							unk_0x3124890FDA752DE4(Var3, 10f, Var3.f_4[iVar2], 0x00000001);
						}
						Global_9C38[iParam0] = 0x00000001;
					}
					bVar0 = 0x00000001;
					break;
				
				case 0x00000001:
					if (iVar1 == 0x00000000)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000001 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000002 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000000 /*8*/]));
								Global_193787 = 0x00000001;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x2404539258C5376B(&(Var3.f_22));
								Global_193787 = 0x00000001;
							}
						}
					}
					else if (iVar1 == 0x00000001)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_22));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000000 /*8*/]));
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000002 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000001 /*8*/]));
							}
						}
					}
					else if (iVar1 == 0x00000002)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_22)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_22)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_22));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000000 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000000 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000001 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0x00000001 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0x00000002 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0x00000002 /*8*/]));
							}
						}
					}
					Global_9B71[iParam0] = 0x00000001;
					Global_9C38[iParam0] = 0x00000001;
					bVar0 = 0x00000001;
					break;
				
				case 0x00000002:
					iVar6 = unk_0x0D1736C2E221BCEA(Var3, &(Var3.f_2A));
					if (iVar6 != 0x00000000)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_32)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_32)))
							{
								unk_0xFE3926923F5430AD(iVar6, &(Var3.f_32));
							}
						}
						if (iVar1 == 0x00000000)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
						}
						else if (iVar1 == 0x00000001)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
						}
						else if (iVar1 == 0x00000002)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000000 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000000 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000000 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000001 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000001 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0x00000001 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0x00000002 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0x00000002 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0x00000002 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xF1ABF0D4BF2D0A54(iVar6);
						}
					}
					Global_9C38[iParam0] = 0x00000001;
					Global_9B71[iParam0] = 0x00000001;
					bVar0 = 0x00000001;
					break;
				
				case 0x00000003:
					if (unk_0x0EB28750412C3A5A(Var3, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001) < 250f)
					{
						uVar4 = unk_0x57651D42225429CC(Var3, 25f, &(Var3.f_8[0x00000000 /*8*/]));
						if (unk_0xB39672D8C1F6BB48(uVar4))
						{
							if (iVar1 == 0x00000000)
							{
								unk_0xCADC8175C61F28E5(uVar4, 0x00000003);
								Global_9C38[iParam0] = 0x00000001;
								bVar0 = 0x00000001;
							}
							else if (iVar1 == 0x00000001)
							{
								if ((unk_0xD92EF3526CDA283F(uVar4) != 0x00000006 && unk_0xD92EF3526CDA283F(uVar4) != 0x00000007) && unk_0xD92EF3526CDA283F(uVar4) != 0x00000008)
								{
									unk_0xCADC8175C61F28E5(uVar4, 0x0000000A);
									Global_9C38[iParam0] = 0x00000001;
									bVar0 = 0x00000001;
								}
							}
							else if (iVar1 == 0x00000002)
							{
								bVar0 = 0x00000001;
							}
						}
					}
					break;
				
				case 0x00000004:
					if (iVar1 == 0x00000000)
					{
						unk_0x9E5FA221FDB148CD(Var3, 50f, Var3.f_4[0x00000001], Var3.f_4[0x00000000], 0x00000000);
						unk_0x0674E58A79778E99(&(Global_9500[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					}
					else if (iVar1 == 0x00000001)
					{
						unk_0x2192A5725EC5808C(Var3, 50f, Var3.f_4[0x00000000], Var3.f_4[0x00000001], 0x00000001);
						unk_0x5D96D8530B3D0904(&(Global_9500[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					}
					bVar0 = 0x00000001;
					break;
			}
			if (bVar0)
			{
				Global_96C5[iParam0] = 0x00000000;
				Global_978C[iParam0] = iVar1;
				if (!func_116())
				{
					if (!Global_99E1[iParam0])
					{
						Global_99E1[iParam0] = 0x00000001;
						Global_9AA8++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_116()
{
	if ((func_118() == 0xFFFFFFFF || func_118() == 0x000003E7) && !func_117() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_117()
{
	return Global_7831;
}

int func_118()
{
	return Global_7830;
}

int func_119(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		uParam0->f_4[iVar0] = 0x00000000;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_40[iVar0] = 0x00000000;
		uParam0->f_4B[iVar0] = 0x00000000;
		uParam0->f_5B[iVar0] = 0x00000000;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0x00000000;
	uParam0->f_21 = 0x00000000;
	StringCopy(&(uParam0->f_22), "", 32);
	StringCopy(&(uParam0->f_2A), "", 32);
	StringCopy(&(uParam0->f_32), "", 32);
	uParam0->f_3A = { 0f, 0f, 0f };
	uParam0->f_3D = { 0f, 0f, 0f };
	uParam0->f_44 = { 0f, 0f, 0f };
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_4A = 0f;
	uParam0->f_4F = { 0f, 0f, 0f };
	uParam0->f_52 = { 0f, 0f, 0f };
	uParam0->f_55 = { 0f, 0f, 0f };
	uParam0->f_58 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0x00000003:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0x00000004:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0x00000000:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 0x00000001:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 0x00000002:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_3A = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_3D = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_40[0x00000000] = 0x00000001;
			uParam0->f_40[0x00000001] = 0x00000000;
			break;
		
		case 0x00000005:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 0x000000C4:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			break;
		
		case 0x00000006:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 0x00000007:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x00000008:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x00000009:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x0000000A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 0x0000000B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 0x0000000C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "sunkcargoship", 32);
			uParam0->f_44 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_47 = { 190.75f, 31.25f, 21f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			break;
		
		case 0x0000000D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 0x0000000E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "smboat", 32);
			break;
		
		case 0x0000000F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 0x00000010:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000011:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000012:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000013:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 0x00000014:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 0x00000015:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_3A = { 814f, -1750f, 20f };
			uParam0->f_3D = { 790f, -1899f, 35f };
			uParam0->f_40[0x00000000] = 0x00000001;
			uParam0->f_40[0x00000001] = 0x00000000;
			uParam0->f_40[0x00000002] = 0x00000000;
			break;
		
		case 0x00000016:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 0x00000017:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 0x00000018:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 0x00000019:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 0x0000001A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 0x0000001B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x0000001C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x0000001D:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = joaat("dt1_05_build1_h");
			uParam0->f_4[0x00000001] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x0000001E:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = 0xF9526184;
			uParam0->f_4[0x00000001] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x0000001F:
			uParam0->f_3 = 0x00000004;
			uParam0->f_4[0x00000000] = 0xF4E5BC6D;
			uParam0->f_4[0x00000001] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 0x00000020:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x00000021:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 0x00000022:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 0x00000023:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 0x00000024:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 0x00000025:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_4F = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_52 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_55 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_58 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			break;
		
		case 0x00000026:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 0x00000027:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 0x00000028:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 0x00000029:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 0x0000002A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 0x0000002B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 0x0000002C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 0x0000002D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 0x0000002E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 0x0000002F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 0x00000030:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_22), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_44 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_47 = { 13.6f, 20f, 8.9f };
			uParam0->f_4A = 48f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000001;
			break;
		
		case 0x00000031:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 0x00000032:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_4F = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_52 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 0x00000037:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 0x00000033:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "farm_burnt", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 0x00000034:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000035:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000036:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 0x00000038:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x00000039:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 0x0000003C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 0x0000003D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 0x0000003E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 0x0000003F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 0x00000040:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 0x00000041:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 0x00000042:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 0x00000043:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 0x00000044:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 0x00000045:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 0x00000046:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000047:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000048:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x00000049:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x0000004A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 0x0000004B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x0000004C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x00000069:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 0x0000006A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 0x0000006B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 0x0000006C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 0x0000006D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 0x0000006E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 0x0000006F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 0x00000070:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 0x0000004D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_55 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_58 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			uParam0->f_5B[0x00000002] = 0x00000000;
			break;
		
		case 0x0000004E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_21 = 0x00000000;
			break;
		
		case 0x0000004F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 0x00000050:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 0x00000071:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 0x00000072:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 0x00000073:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 0x00000057:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 0x00000058:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_4F = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_52 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 0x00000059:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 0x0000005A:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 0x0000005B:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 0x0000005E:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 0x0000005F:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_3A = { 1206.8f, 1803f, 43.9f };
			uParam0->f_3D = { 1329f, 2060.4f, 143.9f };
			uParam0->f_40[0x00000000] = 0x00000000;
			uParam0->f_40[0x00000001] = 0x00000001;
			uParam0->f_40[0x00000002] = 0x00000000;
			break;
		
		case 0x00000068:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 0x00000067:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 0x00000066:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 0x0000005C:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 0x0000005D:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 0x00000076:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 0x00000074:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 0x00000075:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x00000077:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x00000078:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 0x0000007A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 0x00000079:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x0000007B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x0000007C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x000000AA:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 0x000000AB:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 0x0000007D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 0x000000A4:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A5:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A6:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A7:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A8:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x000000A9:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 0x0000007E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x0000007F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000080:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000081:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000082:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000083:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000084:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000085:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x00000086:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 0x000000B3:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_44 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_47 = { 5.5f, 3f, 2f };
			uParam0->f_4A = -10f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			break;
		
		case 0x000000AE:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_32), "csr_inMission", 32);
			uParam0->f_21 = 0x00000000;
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000AF:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_44 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_47 = { 2.5f, 3f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B0:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_44 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_47 = { 3f, 1f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B1:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_44 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_47 = { 1f, 3f, 2f };
			uParam0->f_4A = -45f;
			uParam0->f_4B[0x00000000] = 0x00000000;
			uParam0->f_4B[0x00000001] = 0x00000001;
			uParam0->f_4B[0x00000002] = 0x00000000;
			break;
		
		case 0x000000B2:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000AD:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "fakeint", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 0x000000B4:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 0x000000B5:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_2A), "v_hospital", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 0x00000087:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000088:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000089:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x0000008F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000090:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000091:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000092:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 0x00000093:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "vb_30_murder", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 0x00000094:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 0x00000095:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 0x00000096:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 0x00000097:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ufo", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 0x00000098:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "ufo_eye", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 0x00000099:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x0000009A:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x0000009B:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 0x000000AC:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_2A), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 0x000000B6:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_4F = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_52 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_55 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_58 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_5B[0x00000000] = 0x00000000;
			uParam0->f_5B[0x00000001] = 0x00000001;
			uParam0->f_5B[0x00000002] = 0x00000001;
			break;
		
		case 0x000000B7:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_4F = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_52 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 0x000000B8:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_4F = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_52 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 0x000000B9:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_4F = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_52 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 0x000000BB:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_4F = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_52 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 0x000000BA:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_4F = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_52 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 0x000000BC:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000001;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_4F = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_52 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 0x00000051:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 0x00000052:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 0x00000053:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 0x00000054:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 0x00000055:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 0x00000056:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 0x000000BD:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 0x000000BE:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_21 = 0x00000000;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 0x000000BF:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C0:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C1:
			uParam0->f_3 = 0x00000001;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0x00000000] = 0x00000001;
			uParam0->f_5B[0x00000001] = 0x00000000;
			break;
		
		case 0x000000C2:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 0x00000061:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 0x00000062:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 0x00000063:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 0x00000064:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 0x00000065:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 0x000000C3:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[0x00000002 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 0x000000C5:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 0x0000009C:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009D:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009E:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A3:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x0000009F:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A1:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A2:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x000000A0:
			uParam0->f_3 = 0x00000002;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 0x00000060:
			uParam0->f_3 = 0x00000001;
			StringCopy(&(uParam0->f_8[0x00000000 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[0x00000001 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 0x00000001;
}

void func_120(int iParam0, int iParam1)
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

void func_121(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "FB_HUND_PERC";
			break;
		
		case 0x00000001:
			sVar0 = "FB_STORY";
			break;
		
		case 0x00000002:
			sVar0 = "FB_VEHICLES";
			break;
		
		case 0x00000003:
			sVar0 = "FB_PROPERTIES";
			break;
		
		case 0x00000004:
			sVar0 = "FB_PSYCH";
			break;
		
		case 0x00000005:
			sVar0 = "FB_MAPREV";
			break;
	}
	func_122(sVar0);
}

void func_122(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		unk_0x1E64CE678ED5F61E("FB_TITLE");
		unk_0x6B012227B3921E18(sParam0);
		unk_0x1AEA174B291A9906("CHAR_FACEBOOK", "CHAR_FACEBOOK", 0x00000001, 0x00000000, "", 0x00000000);
	}
}

int func_123()
{
	if (func_124())
	{
		return 0x00000000;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_124()
{
	return Global_258DFD;
}

Vector3 func_125(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	switch (func_140(iParam0))
	{
		case 0x00000001:
			iVar0 = func_137(iParam0);
			if (iVar0 != 0xFFFFFFFF)
			{
				iVar2 = Global_15DBC[iVar0 /*34*/].f_A;
				if (iVar2 != 0x00000107)
				{
					return func_136(iVar2, 0x00000000);
				}
			}
			break;
		
		case 0x00000003:
		case 0x00000005:
			iVar3 = func_135(iParam0);
			iVar4 = func_133(iVar3, func_134(iParam0));
			if (iVar4 != 0x00000107)
			{
				return func_136(iVar4, 0x00000000);
			}
			break;
		
		case 0x00000007:
			func_126(func_131(iParam0), &Var1);
			return Var1.f_6;
			break;
		
		case 0x00000009:
			break;
		
		case 0x0000000B:
			break;
		
		case 0x0000000D:
			break;
	}
	return 0f, 0f, 0f;
}

void func_126(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_127(uParam1, "Abigail1", func_129(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_127(uParam1, "Abigail2", func_129(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_127(uParam1, "Barry1", func_129(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_127(uParam1, "Barry2", func_129(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_127(uParam1, "Barry3", func_129(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_127(uParam1, "Barry3A", func_129(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_127(uParam1, "Barry3C", func_129(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_127(uParam1, "Barry4", func_129(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_127(uParam1, "Dreyfuss1", func_129(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_127(uParam1, "Epsilon1", func_129(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_127(uParam1, "Epsilon2", func_129(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_127(uParam1, "Epsilon3", func_129(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_127(uParam1, "Epsilon4", func_129(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_127(uParam1, "Epsilon5", func_129(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_127(uParam1, "Epsilon6", func_129(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_127(uParam1, "Epsilon7", func_129(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_127(uParam1, "Epsilon8", func_129(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_127(uParam1, "Extreme1", func_129(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_127(uParam1, "Extreme2", func_129(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_127(uParam1, "Extreme3", func_129(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_127(uParam1, "Extreme4", func_129(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_127(uParam1, "Fanatic1", func_129(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_128(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_127(uParam1, "Fanatic2", func_129(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_128(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_127(uParam1, "Fanatic3", func_129(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_127(uParam1, "Hao1", func_129(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_127(uParam1, "Hunting1", func_129(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_127(uParam1, "Hunting2", func_129(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_127(uParam1, "Josh1", func_129(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_127(uParam1, "Josh2", func_129(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_127(uParam1, "Josh3", func_129(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_127(uParam1, "Josh4", func_129(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_127(uParam1, "Maude1", func_129(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_127(uParam1, "Minute1", func_129(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_127(uParam1, "Minute2", func_129(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_127(uParam1, "Minute3", func_129(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_127(uParam1, "MrsPhilips1", func_129(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_127(uParam1, "MrsPhilips2", func_129(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_127(uParam1, "Nigel1", func_129(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_127(uParam1, "Nigel1A", func_129(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_127(uParam1, "Nigel1B", func_129(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_128(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_127(uParam1, "Nigel1C", func_129(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_128(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_127(uParam1, "Nigel1D", func_129(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_128(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_127(uParam1, "Nigel2", func_129(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_127(uParam1, "Nigel3", func_129(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_127(uParam1, "Omega1", func_129(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_127(uParam1, "Omega2", func_129(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_127(uParam1, "Paparazzo1", func_129(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_127(uParam1, "Paparazzo2", func_129(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_127(uParam1, "Paparazzo3", func_129(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_127(uParam1, "Paparazzo3A", func_129(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_127(uParam1, "Paparazzo3B", func_129(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_127(uParam1, "Paparazzo4", func_129(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_127(uParam1, "Rampage1", func_129(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_127(uParam1, "Rampage3", func_129(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_127(uParam1, "Rampage4", func_129(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_127(uParam1, "Rampage5", func_129(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_127(uParam1, "Rampage2", func_129(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_128(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_127(uParam1, "TheLastOne", func_129(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_127(uParam1, "Tonya1", func_129(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_127(uParam1, "Tonya2", func_129(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_127(uParam1, "Tonya3", func_129(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_127(uParam1, "Tonya4", func_129(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_127(uParam1, "Tonya5", func_129(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_128(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_127(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_128(int iParam0)
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

struct<2> func_129(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_130(iParam0) };
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

struct<2> func_130(int iParam0)
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

int func_131(int iParam0)
{
	int iVar0;
	
	if (func_140(iParam0) != 0x00000007 && func_140(iParam0) != 0x00000008)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = func_132(iParam0);
	if (iVar0 == 0x0000007F)
	{
		return 0xFFFFFFFF;
	}
	return iVar0;
}

int func_132(int iParam0)
{
	return Global_1B416.f_27CD[iParam0 /*12*/].f_8 & 0x0000007F;
}

int func_133(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000007D;
					break;
				
				case 0x00000001:
					return 0x0000007E;
					break;
				
				case 0x00000002:
					return 0x0000007F;
					break;
				
				case 0x00000003:
					return 0x00000080;
					break;
				
				case 0x00000004:
					return 0x00000081;
					break;
				
				case 0x00000005:
					return 0x00000082;
					break;
				
				case 0x00000006:
					return 0x00000083;
					break;
				
				case 0x00000007:
					return 0x00000084;
					break;
				
				case 0x00000008:
					return 0x00000085;
					break;
				
				case 0x00000009:
					return 0x00000086;
					break;
				
				case 0x0000000A:
					return 0x00000087;
					break;
				
				case 0x0000000B:
					return 0x00000088;
					break;
				
				case 0x0000000C:
					return 0x00000089;
					break;
			}
			break;
		
		case 0x00000013:
			return 0x00000041;
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000042;
					break;
				
				case 0x00000001:
					return 0x00000043;
					break;
			}
			break;
		
		case 0x00000002:
			return 0x00000044;
			break;
			break;
		
		case 0x00000003:
			return 0x00000045;
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000046;
					break;
				
				case 0x00000001:
					return 0x00000047;
					break;
				
				case 0x00000002:
					return 0x00000048;
					break;
				
				case 0x00000003:
					return 0x00000049;
					break;
				
				case 0x00000004:
					return 0x0000004A;
					break;
				
				case 0x00000005:
					return 0x0000004B;
					break;
			}
			break;
		
		case 0x00000005:
			return 0x0000004C;
			break;
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000004D;
					break;
				
				case 0x00000001:
					return 0x00000051;
					break;
				
				case 0x00000002:
					return 0x0000004E;
					break;
				
				case 0x00000003:
					return 0x0000004F;
					break;
				
				case 0x00000004:
					return 0x00000050;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000052;
					break;
				
				case 0x00000001:
					return 0x00000053;
					break;
				
				case 0x00000002:
					return 0x00000054;
					break;
				
				case 0x00000003:
					return 0x00000055;
					break;
			}
			break;
		
		case 0x00000009:
			return 0x0000005E;
			break;
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000056;
					break;
				
				case 0x00000001:
					return 0x00000057;
					break;
				
				case 0x00000002:
					return 0x00000058;
					break;
				
				case 0x00000003:
					return 0x00000059;
					break;
				
				case 0x00000004:
					return 0x0000005A;
					break;
			}
			break;
		
		case 0x0000000A:
			return 0x0000005F;
			break;
			break;
		
		case 0x0000000B:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000005B;
					break;
				
				case 0x00000001:
					return 0x0000005C;
					break;
			}
			break;
		
		case 0x0000000D:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000060;
					break;
				
				case 0x00000001:
					return 0x00000061;
					break;
				
				case 0x00000002:
					return 0x00000062;
					break;
				
				case 0x00000003:
					return 0x00000063;
					break;
				
				case 0x00000004:
					return 0x00000064;
					break;
				
				case 0x00000005:
					return 0x00000065;
					break;
				
				case 0x00000006:
					return 0x00000066;
					break;
				
				case 0x00000007:
					return 0x00000067;
					break;
			}
			break;
		
		case 0x0000000E:
			return 0x00000068;
			break;
			break;
		
		case 0x0000000F:
			return 0x00000069;
			break;
			break;
		
		case 0x00000010:
			return 0x0000006A;
			break;
			break;
		
		case 0x00000011:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000006B;
					break;
				
				case 0x00000001:
					return 0x0000006C;
					break;
				
				case 0x00000002:
					return 0x0000006D;
					break;
			}
			break;
		
		case 0x00000012:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000006E;
					break;
				
				case 0x00000001:
					return 0x0000006F;
					break;
			}
			break;
		
		case 0x0000000C:
			return 0x00000107;
			break;
			break;
	}
	return 0x00000107;
}

int func_134(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(Global_1B416.f_27CD[iParam0 /*12*/].f_8, 0x00000007) & 0x0000007F;
}

int func_135(int iParam0)
{
	int iVar0;
	
	if (func_140(iParam0) != 0x00000003 && func_140(iParam0) != 0x00000005)
	{
		if (func_140(iParam0) != 0x00000004 && func_140(iParam0) != 0x00000006)
		{
			return 0xFFFFFFFF;
		}
	}
	iVar0 = func_132(iParam0);
	if (iVar0 == 0x0000007F)
	{
		return 0xFFFFFFFF;
	}
	return iVar0;
}

Vector3 func_136(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0f, 0f, 0f;
	}
	return Global_79AA[iVar0 /*23*/][iParam1 /*3*/];
}

int func_137(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_140(iParam0) != 0x00000001 && func_140(iParam0) != 0x00000002)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = func_132(iParam0);
	if (iVar0 == 0x0000007F)
	{
		return 0xFFFFFFFF;
	}
	iVar1 = iVar0;
	if (Global_1B416.f_27CD[iParam0 /*12*/].f_7 == 0x00000001)
	{
		return func_138(iVar1);
	}
	return iVar1;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000057:
			switch (Global_1B416.f_2378.f_63.f_CD[func_139(0x00000000)])
			{
				case 0x00000001:
					return 0x00000057;
					break;
				
				case 0x00000002:
					return 0x00000059;
					break;
				
				default:
					return 0x00000057;
					break;
			}
			break;
		
		case 0x0000004A:
			switch (Global_1B416.f_2378.f_63.f_CD[func_139(0x00000001)])
			{
				case 0x00000003:
					return 0x0000004A;
					break;
				
				case 0x00000004:
					return 0x0000004B;
					break;
				
				default:
					return 0x0000004A;
					break;
			}
			break;
		
		case 0x00000045:
			switch (Global_1B416.f_2378.f_63.f_CD[func_139(0x00000003)])
			{
				case 0x00000006:
					return 0x00000045;
					break;
				
				case 0x00000007:
					return 0x00000046;
					break;
				
				default:
					return 0x00000045;
					break;
			}
			break;
		
		case 0x00000054:
			switch (Global_1B416.f_2378.f_63.f_CD[func_139(0x00000004)])
			{
				case 0x00000008:
					return 0x00000054;
					break;
				
				case 0x00000009:
					return 0x00000055;
					break;
				
				default:
					return 0x00000054;
					break;
			}
			break;
		
		case 0x0000004E:
			switch (Global_1B416.f_2378.f_63.f_CD[func_139(0x00000004)])
			{
				case 0x00000008:
					return 0x0000004E;
					break;
				
				case 0x00000009:
					return 0x0000004F;
					break;
				
				default:
					return 0x0000004E;
					break;
			}
			break;
		
		case 0x00000050:
			switch (Global_1B416.f_2378.f_63.f_CD[func_139(0x00000004)])
			{
				case 0x00000008:
					return 0x00000050;
					break;
				
				case 0x00000009:
					return 0x00000053;
					break;
				
				default:
					return 0x00000050;
					break;
			}
			break;
		
		case 0x00000018:
			switch (Global_1B416.f_2378.f_63.f_CD[0x0000000C])
			{
				case 0x00000000:
					return 0x00000018;
					break;
				
				case 0x00000001:
					return 0x00000019;
					break;
				
				case 0x00000002:
					return 0x0000001B;
					break;
				
				default:
					return 0x00000018;
					break;
			}
			break;
	}
	return 0xFFFFFFFF;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000007;
			break;
		
		case 0x00000001:
			return 0x00000008;
			break;
		
		case 0x00000002:
			return 0x00000009;
			break;
		
		case 0x00000003:
			return 0x0000000A;
			break;
		
		case 0x00000004:
			return 0x0000000B;
			break;
	}
	return 0xFFFFFFFF;
}

int func_140(int iParam0)
{
	return Global_1B416.f_27CD[iParam0 /*12*/].f_6;
}

void func_141()
{
	int iVar0;
	int iVar1;
	
	iLocal_41 = unk_0x1C0640BA9A7327B3();
	iLocal_43 = (iLocal_41 - iLocal_42);
	if (iLocal_43 > 0x00001388)
	{
		func_150();
		func_149();
		func_148();
		func_147();
		func_146();
		func_145();
		func_144();
		func_143();
		iLocal_42 = unk_0x1C0640BA9A7327B3();
		iVar0 = 0x00000000;
		iVar1 = 0x00000000;
		iVar0 = unk_0x0A4C9A3D51EAE31F(0x00000327);
		switch (iVar0)
		{
			case 0x00000000:
				iVar1 = 0x00000000;
				break;
			
			case 0x00000001:
				iVar1 = 0x0000EA60;
				break;
			
			case 0x00000002:
				iVar1 = 0x0001D4C0;
				break;
			
			case 0x00000003:
				iVar1 = 0x0002BF20;
				break;
			
			case 0x00000004:
				iVar1 = 0x0003A980;
				break;
			
			case 0x00000005:
				iVar1 = 0x000493E0;
				break;
			
			case 0x00000006:
				iVar1 = 0x000927C0;
				break;
			
			case 0x00000007:
				iVar1 = 0x000DBBA0;
				break;
			
			case 0x00000008:
				iVar1 = 0x001B7740;
				break;
			
			case 0x00000009:
				iVar1 = 0x0036EE80;
				break;
			
			default:
				iVar1 = 0x000493E0;
				break;
		}
		if (iVar1 != Global_1B319)
		{
			Global_1B319 = iVar1;
		}
	}
	func_142();
}

void func_142()
{
	if (unk_0x8A22C4C08282BF26(joaat("finale_heist2a")) == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("rural_bank_heist")) == 0x00000000)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (iLocal_45)
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
					{
						SYSTEM::WAIT(0x00000000);
						if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000012))
							{
								unk_0xE7B2B6A56C007908(joaat("sp0_stars_evaded"), 0x00000005, 0x00000000);
								unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000012);
							}
							iLocal_45 = 0x00000000;
						}
						else
						{
							iLocal_45 = 0x00000000;
						}
					}
				}
				else
				{
					iLocal_45 = 0x00000000;
				}
			}
			else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000004)
			{
				iLocal_45 = 0x00000001;
			}
		}
		else
		{
			iLocal_45 = 0x00000000;
		}
	}
	else
	{
		iLocal_45 = 0x00000000;
	}
}

void func_143()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	unk_0x6FB46C25CCB7E6D5(joaat("sp0_shots"), &iVar1, 0xFFFFFFFF);
	iVar0 = (iVar0 + iVar1);
	unk_0x6FB46C25CCB7E6D5(joaat("sp1_shots"), &iVar1, 0xFFFFFFFF);
	iVar0 = (iVar0 + iVar1);
	unk_0x6FB46C25CCB7E6D5(joaat("sp2_shots"), &iVar1, 0xFFFFFFFF);
	iVar0 = (iVar0 + iVar1);
	if (iVar0 > 0x004C4B3F)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000011))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_shots"), 0x004C4B40, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000F);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000010);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000011);
		}
	}
	if (iVar0 > 0x003D08FF)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000010))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_shots"), 0x003D0900, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000F);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000010);
		}
	}
	if (iVar0 > 0x002DC6BF)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x0000000F))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_shots"), 0x002DC6C0, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000E);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000F);
		}
	}
	if (iVar0 > 0x001E847F)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x0000000E))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_shots"), 0x001E8480, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000D);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000E);
		}
	}
	if (iVar0 > 0x000F423F)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x0000000D))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_shots"), 0x000F4240, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000D);
		}
	}
}

void func_144()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	unk_0x6FB46C25CCB7E6D5(joaat("sp0_deaths"), &iVar1, 0xFFFFFFFF);
	iVar0 = (iVar0 + iVar1);
	unk_0x6FB46C25CCB7E6D5(joaat("sp1_deaths"), &iVar1, 0xFFFFFFFF);
	iVar0 = (iVar0 + iVar1);
	unk_0x6FB46C25CCB7E6D5(joaat("sp2_deaths"), &iVar1, 0xFFFFFFFF);
	iVar0 = (iVar0 + iVar1);
	if (iVar0 > 0x000000F9)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x0000000C))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_deaths"), 0x000000FA, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000008);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000009);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000B);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000C);
		}
	}
	if (iVar0 > 0x00000063)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x0000000B))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_deaths"), 0x00000064, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000008);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000009);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000A);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000B);
		}
	}
	if (iVar0 > 0x00000031)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x0000000A))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_deaths"), 0x00000032, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000008);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000009);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000000A);
		}
	}
	if (iVar0 > 0x00000018)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000009))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_deaths"), 0x00000019, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000008);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000009);
		}
	}
	if (iVar0 > 0x00000009)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000008))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_deaths"), 0x0000000A, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000008);
		}
	}
}

void func_145()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	unk_0x6FB46C25CCB7E6D5(joaat("sp0_busted"), &iVar1, 0xFFFFFFFF);
	iVar0 = (iVar0 + iVar1);
	unk_0x6FB46C25CCB7E6D5(joaat("sp1_busted"), &iVar1, 0xFFFFFFFF);
	iVar0 = (iVar0 + iVar1);
	unk_0x6FB46C25CCB7E6D5(joaat("sp2_busted"), &iVar1, 0xFFFFFFFF);
	iVar0 = (iVar0 + iVar1);
	if (iVar0 > 0x000000F9)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000007))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_busted"), 0x000000FA, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000003);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000004);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000005);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000006);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000007);
		}
	}
	if (iVar0 > 0x00000063)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000006))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_busted"), 0x00000064, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000003);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000004);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000005);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000006);
		}
	}
	if (iVar0 > 0x00000031)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000005))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_busted"), 0x00000032, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000003);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000004);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000005);
		}
	}
	if (iVar0 > 0x00000018)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000004))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_busted"), 0x00000019, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000003);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000004);
		}
	}
	if (iVar0 > 0x00000009)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000003))
		{
			unk_0xE7B2B6A56C007908(joaat("sp0_busted"), 0x0000000A, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000003);
		}
	}
}

void func_146()
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0f;
	unk_0x893A626C476B583D(joaat("sp0_dist_swimming"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp1_dist_swimming"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp2_dist_swimming"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	if (fVar0 > (1609.344f * 1000f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x0000001B))
		{
			unk_0x5EDE1DB7F3CAEEBD(joaat("sp0_dist_swimming"), 1000f, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000019);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000001A);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000001B);
		}
	}
	if (fVar0 > (1609.344f * 100f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x0000001A))
		{
			unk_0x5EDE1DB7F3CAEEBD(joaat("sp0_dist_swimming"), 100f, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000019);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x0000001A);
		}
	}
	if (fVar0 > (1609.344f * 50f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000019))
		{
			unk_0x5EDE1DB7F3CAEEBD(joaat("sp0_dist_swimming"), 50f, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000019);
		}
	}
}

void func_147()
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0f;
	unk_0x893A626C476B583D(joaat("sp0_dist_running"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp1_dist_running"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp2_dist_running"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	if (fVar0 > (1609.344f * 1000f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000018))
		{
			unk_0x5EDE1DB7F3CAEEBD(joaat("sp0_dist_running"), 1000f, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000016);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000017);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000018);
		}
	}
	if (fVar0 > (1609.344f * 100f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000017))
		{
			unk_0x5EDE1DB7F3CAEEBD(joaat("sp0_dist_running"), 100f, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000016);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000017);
		}
	}
	if (fVar0 > (1609.344f * 50f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000016))
		{
			unk_0x5EDE1DB7F3CAEEBD(joaat("sp0_dist_running"), 50f, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000016);
		}
	}
}

void func_148()
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0f;
	unk_0x893A626C476B583D(joaat("sp0_dist_driving_plane"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp0_dist_driving_heli"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp1_dist_driving_plane"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp1_dist_driving_heli"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp2_dist_driving_plane"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp2_dist_driving_heli"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	if (fVar0 > (1609.344f * 50000f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000015))
		{
			unk_0x5EDE1DB7F3CAEEBD(joaat("sp0_dist_driving_plane"), 50000f, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000013);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000014);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000015);
		}
	}
	if (fVar0 > (1609.344f * 5000f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000014))
		{
			unk_0x5EDE1DB7F3CAEEBD(joaat("sp0_dist_driving_plane"), 5000f, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000013);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000014);
		}
	}
	if (fVar0 > (1609.344f * 500f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000013))
		{
			unk_0x5EDE1DB7F3CAEEBD(joaat("sp0_dist_driving_plane"), 500f, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000013);
		}
	}
}

void func_149()
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0f;
	unk_0x893A626C476B583D(joaat("sp0_dist_driving_car"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp0_dist_driving_quadbike"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp0_dist_driving_bike"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp0_dist_driving_bicycle"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp1_dist_driving_car"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp1_dist_driving_quadbike"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp1_dist_driving_bike"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp1_dist_driving_bicycle"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp2_dist_driving_car"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp2_dist_driving_quadbike"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp2_dist_driving_bike"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	unk_0x893A626C476B583D(joaat("sp2_dist_driving_bicycle"), &fVar1, 0xFFFFFFFF);
	fVar0 = (fVar0 + fVar1);
	fVar0 = (fVar0 + fVar1);
	if (fVar0 > (1609.344f * 50000f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000002))
		{
			unk_0x5EDE1DB7F3CAEEBD(joaat("sp0_dist_driving_car"), 50000f, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000001);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000002);
		}
	}
	if (fVar0 > (1609.344f * 5000f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000001))
		{
			unk_0x5EDE1DB7F3CAEEBD(joaat("sp0_dist_driving_car"), 5000f, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000001);
		}
	}
	if (fVar0 > (1609.344f * 500f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F0F, 0x00000000))
		{
			unk_0x5EDE1DB7F3CAEEBD(joaat("sp0_dist_driving_car"), 500f, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F0F), 0x00000000);
		}
	}
}

void func_150()
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F10, 0x0000000F))
	{
		if (unk_0xC914548BCA6E6204())
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F10), 0x0000000F);
			unk_0xE7B2B6A56C007908(joaat("sp_vehicle_models_driven"), 0x000000C8, 0x00000000);
		}
	}
}

void func_151()
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
		func_154(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_118() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_152();
				}
			}
		}
	}
}

int func_152()
{
	if (func_153(0x00000000))
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

bool func_153(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_154(int iParam0, int iParam1)
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

