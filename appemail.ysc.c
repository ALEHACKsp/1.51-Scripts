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
	int iLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
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
	vector3 vLocal_47 = { 0f, 0f, 0f };
	vector3 vLocal_48 = { 0f, 0f, 0f };
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 0x00000003;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	iLocal_56 = 0xFFFFFFFF;
	iLocal_57 = 0xFFFFFFFF;
	fLocal_66 = 0f;
	iLocal_67 = 0x00000001;
	if (Global_12B4E)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	unk_0xB57F88F0123F4C38();
	iLocal_51 = func_78();
	unk_0xD7992BEF7A9D109E("email", 0x00000001);
	while (!unk_0x67C1D9E5B91B2E37(0x00000001))
	{
		SYSTEM::WAIT(0x00000000);
	}
	Global_554E = 0x00000000;
	Global_554F = 0x00000000;
	Global_4C1E.f_1 = 0x00000008;
	Global_554F = 0x00000001;
	Global_A66D = 0x00000001;
	if (Global_4C0C)
	{
		func_77(0x00000000);
		func_76(0x00000001);
		func_75(0x00000000);
	}
	SYSTEM::SETTIMERB(0x00000000);
	vLocal_47 = { Global_4BEF[Global_4BE7 /*3*/] };
	vLocal_48 = { vLocal_47 };
	vLocal_48.x = (vLocal_48.x - 10f);
	vLocal_48.y = (vLocal_48.y + 20f);
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (Global_4C1E.f_1 != 0x00000009)
		{
			if (Global_554F && !Global_554E)
			{
				func_73();
			}
			else if (Global_554E)
			{
				func_68();
			}
			if (!iLocal_52)
			{
				iLocal_52 = 0x00000001;
			}
			else if (Global_4C0C)
			{
				if (!iLocal_53)
				{
					iLocal_53 = 0x00000001;
					func_66(Global_4C0B, iLocal_51);
					func_65(Global_4C0B, "SET_HEADER", "EM_INBOX", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_64(Global_4C0B, "DISPLAY_VIEW", 8f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				}
				else
				{
					if (Global_A66E)
					{
						Global_A66E = 0x00000000;
						iLocal_54 = 0x00000001;
					}
					if (iLocal_54)
					{
						SYSTEM::SETTIMERA(0x00000000);
						SYSTEM::SETTIMERB(0x00000000);
						if (iLocal_56 == 0xFFFFFFFF)
						{
							if (iLocal_67)
							{
								iLocal_67 = 0x00000000;
								fLocal_66 = 0f;
							}
							func_64(Global_4C0B, "SET_DATA_SLOT_EMPTY", 8f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
							iVar0 = func_66(Global_4C0B, iLocal_51);
							func_65(Global_4C0B, "SET_HEADER", "EM_INBOX", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_55 = 0x00000000;
							if (iVar0 > 0x00000000)
							{
								func_77(0x00000001);
							}
							else
							{
								func_77(0x00000000);
							}
							func_76(0x00000001);
							func_75(0x00000000);
							func_64(Global_4C0B, "DISPLAY_VIEW", 8f, fLocal_66, 0xBF800000, 0xBF800000, 0xBF800000);
						}
						else
						{
							func_64(Global_4C0B, "SET_DATA_SLOT_EMPTY", 21f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
							SYSTEM::WAIT(0x00000000);
							func_64(Global_4C0B, "DISPLAY_VIEW", 21f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
							SYSTEM::WAIT(0x00000000);
							func_76(0x00000001);
							func_63();
							if (iLocal_57 == 0xFFFFFFFF)
							{
								func_61(iLocal_51, iLocal_56);
								func_56(Global_4C0B, iLocal_51, iLocal_56);
								Global_5569 = 0x00000000;
								iLocal_64 = func_54(iLocal_51, iLocal_56);
								if (iLocal_64)
								{
									sLocal_65 = func_51(iLocal_51, iLocal_56);
									if (!func_50(0x00000025))
									{
										switch (func_48("AM_H_FLINK"))
										{
											case 0x00000002:
												func_45("AM_H_FLINK", 0x00000002, 0x00000000, 0x000003E8, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
												break;
											
											case 0x00000001:
												func_44(0x00000025);
												break;
										}
									}
									else if (unk_0x0EFF6B4415DAF4A1())
									{
										if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000011))
										{
											unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000011);
											func_43("AM_H_FLINK", 0xFFFFFFFF);
										}
									}
									func_75(0x00000001);
								}
								else
								{
									if (!func_50(0x00000026))
									{
										switch (func_48("AM_H_SCROLL"))
										{
											case 0x00000002:
												func_45("AM_H_SCROLL", 0x00000002, 0x00000000, 0x000003E8, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
												break;
											
											case 0x00000001:
												func_44(0x00000026);
												break;
											}
									}
									func_75(0x00000000);
								}
								func_64(Global_4C0B, "DISPLAY_VIEW", 9f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
							}
							else
							{
								func_64(Global_4C0B, "SET_DATA_SLOT_EMPTY", 21f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
								SYSTEM::WAIT(0x00000000);
								func_64(Global_4C0B, "DISPLAY_VIEW", 21f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
								SYSTEM::WAIT(0x00000000);
								func_64(Global_4C0B, "SET_DATA_SLOT_EMPTY", 9f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
								func_40(Global_4C0B, iLocal_51, iLocal_56);
								func_64(Global_4C0B, "DISPLAY_VIEW", 9f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
							}
						}
						iLocal_54 = 0x00000000;
					}
					else
					{
						func_17();
					}
				}
			}
			if (!iLocal_51 == func_78())
			{
				Global_A66D = 0x00000000;
				func_4();
			}
		}
		if (func_3())
		{
			Global_554E = 0x00000000;
			Global_554F = 0x00000000;
			Global_A66D = 0x00000000;
			func_1(0x00000000);
			unk_0x10FAF14A60A0DBE1();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 0x00000001)
		{
			unk_0x6470351B03D8DD60(0x00000001);
		}
		else if (Global_4C1E.f_1 > 0x00000003)
		{
			unk_0x6470351B03D8DD60(0x00000000);
		}
	}
}

int func_2()
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

int func_3()
{
	if (((Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000003) || Global_4C1E.f_1 == 0x00000000) || Global_4BE6 == 0x00000001)
	{
		Global_4C11 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_4()
{
	if (Global_CACA != 0xFFFFFFFF)
	{
		unk_0xF5A41F3D3B38EFE3(func_16(Global_CACA));
		Global_CACA = 0xFFFFFFFF;
	}
	Global_A66D = 0x00000000;
	if (Global_4C1E.f_1 > 0x00000004)
	{
		Global_4C1E.f_1 = 0x00000006;
		func_5();
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_5()
{
	vector3 vVar0[24];
	
	if (Global_4C0D == 0x00000001)
	{
		return;
	}
	if (Global_4C1E.f_1 < 0x00000004)
	{
		return;
	}
	while (!unk_0x83D8570832F172A7(Global_4C0B))
	{
		if (Global_12B4E)
		{
			return;
		}
		SYSTEM::WAIT(0x00000000);
	}
	switch (Global_4C1E.f_1)
	{
		case 0x00000006:
			func_64(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_14(Global_1F19);
			if (Global_1F19 == 0x00000001)
			{
				func_64(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C22), 0xBF800000, 0xBF800000, 0xBF800000);
				Global_4C0A = Global_4C22;
			}
			else
			{
				func_64(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C23), 0xBF800000, 0xBF800000, 0xBF800000);
				Global_4C0A = Global_4C23;
			}
			if (Global_4C12)
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_13(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_13(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (Global_4CD2 == 0x00000000)
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			}
			else if (Global_12B4E)
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			}
			else
			{
				if (Global_4CD1 == 0x00000001)
				{
					if (Global_4C12)
					{
						func_13(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_13(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (Global_4C12)
				{
					func_13(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					func_13(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
			}
			if (Global_12B4E)
			{
				func_11();
				unk_0x0674E58A79778E99(&Global_1CBE, 0x00000009);
				func_64(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C22), 0xBF800000, 0xBF800000, 0xBF800000);
			}
			break;
		
		case 0x00000007:
			break;
		
		case 0x0000000A:
			func_64(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_13(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_13(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				if (Global_4BE5)
				{
					func_13(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			else
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			break;
		
		case 0x00000009:
			if (Global_4C1D == 0x00000001)
			{
				func_10();
				func_64(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				if (Global_5152)
				{
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000004);
					unk_0x3CAEA85DA607305E(0x00000000);
					unk_0x3CAEA85DA607305E(0x00000002);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_5154);
					unk_0x779B34565F4D71B1();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0x7E60D21B163E9D56();
				}
				else if (func_8(Global_1A0F, Global_4C1E) == 0x00000000)
				{
					func_13(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000002), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0x00000000);
				}
				else
				{
					func_13(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000002), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), "CELL_217", &(Global_706[Global_1A0F /*29*/].f_3), 0x00000000);
				}
				func_64(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
			else if (Global_5145 == 0x00000004 || Global_5145 == 0x00000003)
			{
				func_64(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_10();
				if (Global_5152)
				{
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000004);
					unk_0x3CAEA85DA607305E(0x00000000);
					unk_0x3CAEA85DA607305E(0x00000002);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_5154);
					unk_0x779B34565F4D71B1();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					if (Global_5247)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_8(Global_1A0F, Global_4C1E) == 0x00000000)
					{
						func_64(Global_4C0B, "SET_DATA_SLOT_EMPTY", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						func_13(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000003), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0x00000000);
					}
					else
					{
						func_64(Global_4C0B, "SET_DATA_SLOT_EMPTY", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						func_13(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000003), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), &cVar0, &(Global_706[Global_1A0F /*29*/].f_3), 0x00000000);
					}
				}
				func_64(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
			func_6();
			break;
		
		default:
			break;
	}
}

void func_6()
{
	if (unk_0x83D8570832F172A7(Global_4C0B))
	{
		func_7();
		if (Global_4C1D == 0x00000001)
		{
			if (Global_4C12)
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (Global_5174)
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			func_13(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
		}
		else
		{
			func_13(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_13(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				if (Global_4BE5)
				{
					func_13(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			else
			{
				func_13(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
	}
}

void func_7()
{
	if (Global_12B4E)
	{
		func_13(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
	}
}

int func_8(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

void func_9(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_10()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (Global_4C1E == 0x00000000)
		{
			switch (Global_1B416.f_36DE[Global_4C1E /*20*/].f_6)
			{
				case 0x00000001:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000000);
					break;
				
				case 0x00000002:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000001);
					break;
				
				case 0x00000003:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000002);
					break;
				
				case 0x00000004:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000003);
					break;
				
				case 0x00000005:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000004);
					break;
				
				case 0x00000006:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000005);
					break;
				
				case 0x00000007:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000006);
					break;
				
				default:
					break;
				}
		}
		if (Global_4C1E == 0x00000001)
		{
			switch (Global_1B416.f_36DE[Global_4C1E /*20*/].f_6)
			{
				case 0x00000001:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000006);
					break;
				
				case 0x00000002:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000000);
					break;
				
				case 0x00000003:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000001);
					break;
				
				case 0x00000004:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000002);
					break;
				
				case 0x00000005:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000003);
					break;
				
				case 0x00000006:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000004);
					break;
				
				case 0x00000007:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000005);
					break;
				
				default:
					break;
				}
		}
		if (Global_4C1E == 0x00000002)
		{
			switch (Global_1B416.f_36DE[Global_4C1E /*20*/].f_6)
			{
				case 0x00000001:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000005);
					break;
				
				case 0x00000002:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000006);
					break;
				
				case 0x00000003:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000001);
					break;
				
				case 0x00000004:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000000);
					break;
				
				case 0x00000005:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000002);
					break;
				
				case 0x00000006:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000003);
					break;
				
				case 0x00000007:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000004);
					break;
				
				default:
					break;
				}
		}
		if (Global_4C1E == 0x00000003)
		{
			switch (Global_4127D9)
			{
				case 0x00000001:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000000);
					break;
				
				case 0x00000002:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000001);
					break;
				
				case 0x00000003:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000002);
					break;
				
				case 0x00000004:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000003);
					break;
				
				case 0x00000005:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000004);
					break;
				
				case 0x00000006:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000005);
					break;
				
				case 0x00000007:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0x00000006);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11()
{
	if (Global_12B4E)
	{
		if (func_12() == 0x00000000)
		{
			return;
		}
		func_13(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
	}
}

int func_12()
{
	return 0x00000000;
}

void func_13(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
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
		func_9(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_9(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_14(int iParam0)
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
		if (func_15(0x0000000E))
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
								func_9(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 0x0000000E)
								{
									func_13(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
								func_13(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_13(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_13(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							else if (iVar1 == 0x0000000E)
							{
								func_13(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000014)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_9(&(Global_1CC3[iVar1 /*15*/]));
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
								func_9(&(Global_1CC3[iVar1 /*15*/]));
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
								func_9(&(Global_1CC3[iVar1 /*15*/]));
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
								func_9(&(Global_1CC3[iVar1 /*15*/]));
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
								func_9(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 0x00000039 && iVar1 == 0x00000017)
							{
								iVar9 = 0x00000000;
								iVar9 = Global_18D301.f_1;
								func_13(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_13(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0x00000000), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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

bool func_15(int iParam0)
{
	return Global_A1D7 == iParam0;
}

char* func_16(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "Epsilon_Cars";
		
		case 0x00000001:
			return "Epsilon_Cars";
		
		case 0x00000002:
			return "Epsilon_Cars";
		
		case 0x00000003:
			return "Epsilon_Cars";
		
		case 0x00000004:
			return "Epsilon_Cars";
		
		case 0x00000005:
			return "Epsilon_Cars";
		
		case 0x00000006:
			return "Epsilon_Cars";
		
		case 0x0000000C:
			return "Assassinations";
		
		case 0x0000000D:
			return "Assassinations";
		
		case 0x0000000E:
			return "Assassinations";
		
		case 0x0000000F:
			return "Assassinations";
		
		case 0x00000040:
			return "BSPBadHacker";
		
		case 0x00000041:
			return "BPDGoodHacker";
		
		case 0x00000042:
			return "BPSMedHacker";
		
		case 0x0000004B:
			return "email_quarry_bail_bond";
		
		case 0x0000004C:
			return "email_abandonedfarm_bail_bond";
		
		case 0x0000004D:
			return "email_mountain_bail_bond";
		
		case 0x0000004E:
			return "email_hobocamp_bail_bond";
		
		case 0x00000050:
			return "email_quarry_bail_bond";
		
		case 0x00000051:
			return "email_abandonedfarm_bail_bond";
		
		case 0x00000052:
			return "email_mountain_bail_bond";
		
		case 0x00000053:
			return "email_hobocamp_bail_bond";
		
		case 0x000000CD:
			return "hush_foxymama21";
		
		case 0x000000D1:
			return "hush_alterego";
		
		case 0x000000D4:
			return "hush_michael";
		
		case 0x000000EE:
			return "hush_trevor";
		
		default:
	}
	return "NULL";
}

void func_17()
{
	bool bVar0;
	
	if (Global_5569)
	{
		iLocal_56 = 0x00000000;
		fLocal_66 = SYSTEM::TO_FLOAT(iLocal_56);
		if (func_39(iLocal_51) == 0x00000000)
		{
			iLocal_56 = 0xFFFFFFFF;
		}
		if (!iLocal_56 == 0xFFFFFFFF)
		{
			Global_4C1E.f_1 = 0x00000008;
			iLocal_54 = 0x00000001;
			SYSTEM::SETTIMERB(0x00000000);
			func_37();
		}
		return;
	}
	if (func_36())
	{
		return;
	}
	if (Global_554E)
	{
		return;
	}
	if (!iLocal_60)
	{
		if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000AC) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B5))
		{
			iLocal_60 = 0x00000001;
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000001);
			unk_0x7E60D21B163E9D56();
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
			SYSTEM::SETTIMERA(0x00000000);
			iLocal_67 = 0x00000001;
		}
	}
	else if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000AC) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000B5))
	{
		if (SYSTEM::TIMERA() > 0x00000064 && iLocal_56 != 0xFFFFFFFF)
		{
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000001);
			unk_0x7E60D21B163E9D56();
			SYSTEM::SETTIMERA(0x00000000);
			iLocal_67 = 0x00000001;
		}
	}
	else
	{
		iLocal_60 = 0x00000000;
	}
	if (!iLocal_61)
	{
		if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000AD) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B4))
		{
			iLocal_61 = 0x00000001;
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000003);
			unk_0x7E60D21B163E9D56();
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
			SYSTEM::SETTIMERB(0x00000000);
			iLocal_67 = 0x00000001;
		}
	}
	else if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000AD) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000B4))
	{
		if (SYSTEM::TIMERB() > 0x00000064 && iLocal_56 != 0xFFFFFFFF)
		{
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000003);
			unk_0x7E60D21B163E9D56();
			SYSTEM::SETTIMERB(0x00000000);
			iLocal_67 = 0x00000001;
		}
	}
	else
	{
		iLocal_61 = 0x00000000;
	}
	if (!iLocal_62)
	{
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000AE))
		{
			iLocal_62 = 0x00000001;
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000004);
			unk_0x7E60D21B163E9D56();
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
		}
	}
	else if (!unk_0x06F8112AA79C53D9(0x00000002, 0x000000AE))
	{
		iLocal_62 = 0x00000000;
	}
	if (!iLocal_63)
	{
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000AF))
		{
			iLocal_63 = 0x00000001;
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000002);
			unk_0x7E60D21B163E9D56();
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
		}
	}
	else if (!unk_0x06F8112AA79C53D9(0x00000002, 0x000000AF))
	{
		iLocal_63 = 0x00000000;
	}
	if (!iLocal_59)
	{
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000B0) && SYSTEM::TIMERB() > 0x00000064)
		{
			if (iLocal_56 == 0xFFFFFFFF)
			{
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
				uLocal_49 = unk_0x7A8BB56B212464AC();
				while (!unk_0xC95D7AEEDEF4946B(uLocal_49))
				{
					SYSTEM::WAIT(0x00000000);
				}
				iLocal_50 = unk_0xA52833FE33F41C53(uLocal_49);
				iLocal_56 = iLocal_50;
				if (func_39(iLocal_51) == 0x00000000)
				{
					iLocal_56 = 0xFFFFFFFF;
				}
				if (!iLocal_56 == 0xFFFFFFFF)
				{
					if (iLocal_67 == 0x00000001)
					{
						fLocal_66 = SYSTEM::TO_FLOAT(iLocal_56);
						iLocal_67 = 0x00000000;
					}
					Global_4C1E.f_1 = 0x00000008;
					iLocal_54 = 0x00000001;
					SYSTEM::SETTIMERB(0x00000000);
					func_37();
				}
			}
			else if (iLocal_57 == 0xFFFFFFFF)
			{
				if (func_34(iLocal_51, iLocal_56) && !iLocal_55)
				{
					iLocal_57 = 0x00000000;
					iLocal_54 = 0x00000001;
					SYSTEM::SETTIMERB(0x00000000);
					func_37();
				}
			}
			else
			{
				iLocal_57 = 0x00000000;
				func_22(iLocal_51, iLocal_56, iLocal_57);
				iLocal_55 = 0x00000001;
				iLocal_57 = 0xFFFFFFFF;
				iLocal_54 = 0x00000001;
				func_37();
				SYSTEM::SETTIMERB(0x00000000);
			}
			iLocal_59 = 0x00000001;
		}
	}
	else
	{
		iLocal_59 = 0x00000000;
	}
	if (SYSTEM::TIMERB() > 0x00000064)
	{
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000B1))
		{
			bVar0 = 0x00000000;
			if (iLocal_58 == 0x00000000)
			{
				if (!iLocal_56 == 0xFFFFFFFF)
				{
					if (iLocal_57 == 0xFFFFFFFF)
					{
						iLocal_56 = SYSTEM::ROUND(fLocal_66);
						iLocal_64 = 0x00000000;
						SYSTEM::SETTIMERB(0x00000000);
						bVar0 = 0x00000001;
						func_21();
					}
					else
					{
						SYSTEM::SETTIMERB(0x00000000);
						iLocal_57 = 0xFFFFFFFF;
						func_21();
					}
					iLocal_54 = 0x00000001;
				}
				else
				{
					if (func_48("AM_H_FLINK") == 0x00000000)
					{
						func_44(0x00000025);
					}
					if (func_48("AM_H_SCROLL") == 0x00000000)
					{
						func_44(0x00000026);
					}
					if (Global_554F == 0x00000000 && !Global_554E)
					{
						func_21();
						Global_554E = 0x00000001;
						Global_A66D = 0x00000000;
					}
				}
				iLocal_58 = 0x00000001;
			}
			if (bVar0)
			{
				iLocal_56 = 0xFFFFFFFF;
			}
		}
		else
		{
			iLocal_58 = 0x00000000;
		}
	}
	if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000B3))
	{
		if (iLocal_64)
		{
			if (func_48("AM_H_FLINK") == 0x00000000)
			{
				func_44(0x00000025);
			}
			if (func_48("AM_H_SCROLL") == 0x00000000)
			{
				func_44(0x00000026);
			}
			StringCopy(&Global_12051, sLocal_65, 64);
			func_18(0x00000007, 0x00000000, 0x00000000);
			iLocal_64 = 0x00000000;
			func_37();
		}
	}
}

int func_18(int iParam0, bool bParam1, int iParam2)
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
	if (Global_12B4E && func_20())
	{
		return 0x00000000;
	}
	if (!Global_12B4E && func_19())
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

var func_19()
{
	return Global_12062;
}

var func_20()
{
	return Global_195E0C;
}

void func_21()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Back", &Global_4C13, 0x00000001);
	}
}

void func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	if (iVar0 < 0xFFFFFFFF && iVar0 > 0x00000003)
	{
		return;
	}
	iVar1 = ((Global_C961[iVar0 /*120*/] - 0x00000001) - iParam1);
	while (iVar1 >= 0x00000010)
	{
		iVar1 = (iVar1 - 0x00000010);
	}
	iVar2 = iVar1;
	iVar3 = Global_C961[iVar0 /*120*/].f_12[iVar2];
	iVar4 = Global_C961[iVar0 /*120*/].f_1[iVar2];
	if (((iVar4 < 0x00000000 || iVar3 < 0x00000000) || !iVar4 < 0x00000009) || !iVar3 < 0x0000007A)
	{
		return;
	}
	iVar5 = Global_B374[iVar3 /*46*/].f_20[iVar4];
	if (Global_A677[iVar5 /*12*/].f_4 == 0x00000000)
	{
		return;
	}
	Global_C961[iVar0 /*120*/].f_23[iVar2] = 0x00000001;
	Global_C961[iVar0 /*120*/].f_34[iVar2] = iParam2;
	func_23(iVar3, iParam2);
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!Global_B374[iParam0 /*46*/] && !Global_B374[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar0 = (Global_B374[iParam0 /*46*/].f_2A - 0x00000001);
	if (iVar0 < 0x00000000)
	{
		return;
	}
	iVar1 = Global_B374[iParam0 /*46*/].f_20[iVar0];
	if (!iParam1 < Global_A677[iVar1 /*12*/].f_4)
	{
		return;
	}
	iVar2 = Global_A677[iVar1 /*12*/].f_5[iParam1 /*4*/].f_1;
	bVar3 = 0x00000000;
	if (Global_B374[iParam0 /*46*/].f_1F < (Global_B374[iParam0 /*46*/].f_1E - 0x00000001))
	{
		iVar4 = Global_B374[iParam0 /*46*/].f_8[Global_B374[iParam0 /*46*/].f_1F];
		if (iVar2 == iVar4)
		{
			bVar3 = 0x00000001;
		}
	}
	if (!bVar3)
	{
		if (iVar2 > 0xFFFFFFFF)
		{
			func_33(iParam0, iVar2);
			iVar5 = Global_B374[iParam0 /*46*/].f_2;
			iVar6 = 0x00000000;
			iVar7 = Global_A677[iVar2 /*12*/].f_2;
			iVar6 = 0x00000000;
			while (iVar6 < iVar5)
			{
				if (!iVar6 == iVar7)
				{
					func_27(Global_B374[iParam0 /*46*/].f_3[iVar6], iParam0, 0x00000000, 0x00000000, 0x00000000);
				}
				iVar6++;
			}
		}
	}
	if (Global_A677[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3 > 0xFFFFFFFF)
	{
		func_24(Global_A677[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3, 0x00000000);
	}
	if (Global_A677[iVar1 /*12*/].f_5[iParam1 /*4*/].f_2)
	{
		Global_B374[iParam0 /*46*/].f_1 = 0x00000001;
	}
	else if (iVar2 > 0xFFFFFFFF)
	{
		Global_B374[iParam0 /*46*/].f_2D = Global_A677[iVar2 /*12*/].f_A;
		Global_B374[iParam0 /*46*/].f_2B = Global_A677[iVar2 /*12*/].f_B;
	}
	else
	{
		Global_B374[iParam0 /*46*/].f_2D = 0x00000000;
	}
	if (Global_B374[iParam0 /*46*/].f_2B < 0x00007530)
	{
		Global_B374[iParam0 /*46*/].f_2B = 0x00007530;
	}
}

void func_24(int iParam0, bool bParam1)
{
	Global_A66E = 0x00000001;
	if (!Global_B374[iParam0 /*46*/] && !Global_B374[iParam0 /*46*/].f_1)
	{
		Global_B374[iParam0 /*46*/] = 0x00000001;
		func_26(iParam0, bParam1);
	}
	else
	{
		func_25(iParam0);
		func_24(iParam0, bParam1);
	}
}

void func_25(int iParam0)
{
	Global_B374[iParam0 /*46*/] = 0x00000000;
	Global_B374[iParam0 /*46*/].f_1F = 0x00000000;
	Global_B374[iParam0 /*46*/].f_2A = 0x00000000;
	Global_B374[iParam0 /*46*/].f_2D = 0x00000000;
	Global_B374[iParam0 /*46*/].f_2B = 0x00000000;
	Global_B374[iParam0 /*46*/].f_1 = 0x00000000;
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_B374[iParam0 /*46*/] && !Global_B374[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_B374[iParam0 /*46*/].f_1F == Global_B374[iParam0 /*46*/].f_1E)
	{
		iVar0 = (Global_B374[iParam0 /*46*/].f_2A - 0x00000001);
		if (iVar0 < 0x00000000)
		{
			return;
		}
		if (Global_A677[Global_B374[iParam0 /*46*/].f_20[iVar0] /*12*/].f_4 == 0x00000000)
		{
			Global_B374[iParam0 /*46*/].f_1 = 0x00000001;
		}
		return;
	}
	if (Global_B374[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_B374[iParam0 /*46*/].f_8[Global_B374[iParam0 /*46*/].f_1F];
	Global_B374[iParam0 /*46*/].f_1F++;
	func_33(iParam0, iVar1);
	Global_B374[iParam0 /*46*/].f_2D = Global_A677[iVar1 /*12*/].f_A;
	Global_B374[iParam0 /*46*/].f_2B = Global_A677[iVar1 /*12*/].f_B;
	iVar2 = Global_B374[iParam0 /*46*/].f_2;
	func_27(Global_A677[iVar1 /*12*/].f_3, iParam0, 0x00000000, 0x00000000, bParam1);
	iVar3 = 0x00000000;
	while (iVar3 < iVar2)
	{
		if (Global_B374[iParam0 /*46*/].f_3[iVar3] != Global_A677[iVar1 /*12*/].f_2 && Global_B374[iParam0 /*46*/].f_3[iVar3] != Global_A677[iVar1 /*12*/].f_3)
		{
			func_27(Global_B374[iParam0 /*46*/].f_3[iVar3], iParam0, 0x00000000, 0x00000000, bParam1);
		}
		iVar3++;
	}
	if (Global_B374[iParam0 /*46*/].f_1F == Global_B374[iParam0 /*46*/].f_1E)
	{
		if (Global_A677[Global_B374[iParam0 /*46*/].f_20[(Global_B374[iParam0 /*46*/].f_2A - 0x00000001)] /*12*/].f_4 == 0x00000000)
		{
			Global_B374[iParam0 /*46*/].f_1 = 0x00000001;
			return;
		}
	}
}

void func_27(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!iParam0 < 0x00000003)
	{
		return;
	}
	iVar0 = 0xFFFFFFFF;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar4 = (Global_B374[iParam1 /*46*/].f_2A - 0x00000001);
		if (iVar4 < 0x00000000)
		{
			return;
		}
		iVar5 = Global_B374[iParam1 /*46*/].f_20[iVar4];
		iVar2 = iVar5;
		Var3 = { func_32(Global_A677[iVar5 /*12*/].f_1) };
		if (Global_A677[iVar5 /*12*/].f_2 == iParam0 && !Global_A677[iVar5 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_A677[iVar5 /*12*/].f_2;
		iVar0 = Global_C961[iParam0 /*120*/];
		bVar6 = 0x00000000;
		while (iVar0 >= 0x00000010)
		{
			iVar0 = (iVar0 - 0x00000010);
			bVar6 = 0x00000001;
		}
		if (bVar6)
		{
			if (!Global_C961[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0x00000000:
						Global_A66F = (Global_A66F - 0x00000001);
						if (Global_A66F < 0x00000000)
						{
							Global_A66F = 0x00000000;
						}
						break;
					
					case 0x00000001:
						Global_A670 = (Global_A670 - 0x00000001);
						if (Global_A670 < 0x00000000)
						{
							Global_A670 = 0x00000000;
						}
						break;
					
					case 0x00000002:
						Global_A671 = (Global_A671 - 0x00000001);
						if (Global_A671 < 0x00000000)
						{
							Global_A671 = 0x00000000;
						}
						break;
					}
				}
		}
		Global_C961[iParam0 /*120*/].f_12[iVar0] = iParam1;
		Global_C961[iParam0 /*120*/].f_1[iVar0] = iVar4;
		Global_C961[iParam0 /*120*/].f_23[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/].f_56[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/].f_45[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_C961[iParam0 /*120*/];
		bVar7 = 0x00000000;
		while (iVar0 >= 0x00000010)
		{
			iVar0 = (iVar0 - 0x00000010);
			bVar7 = 0x00000001;
		}
		if (bVar7)
		{
			if (!Global_C961[iParam0 /*120*/].f_45[iVar0])
			{
				switch (iParam0)
				{
					case 0x00000000:
						Global_A66F = (Global_A66F - 0x00000001);
						if (Global_A66F < 0x00000000)
						{
							Global_A66F = 0x00000000;
						}
						break;
					
					case 0x00000001:
						Global_A670 = (Global_A670 - 0x00000001);
						if (Global_A670 < 0x00000000)
						{
							Global_A670 = 0x00000000;
						}
						break;
					
					case 0x00000002:
						Global_A671 = (Global_A671 - 0x00000001);
						if (Global_A671 < 0x00000000)
						{
							Global_A671 = 0x00000000;
						}
						break;
					}
				}
		}
		iVar8 = 0xFFFFFFFF;
		iVar9 = 0x00000000;
		iVar9 = 0x00000000;
		while (iVar9 < 0x00000007)
		{
			if (Global_CACB[iVar9 /*203*/].f_1 == iParam1 && Global_CACB[iVar9 /*203*/].f_9 > 0x00000000)
			{
				iVar8 = iVar9;
			}
			iVar9++;
		}
		if (iVar8 == 0xFFFFFFFF)
		{
			return;
		}
		Global_C961[iParam0 /*120*/].f_12[iVar0] = Global_CACB[iVar8 /*203*/].f_1;
		Global_C961[iParam0 /*120*/].f_1[iVar0] = (Global_CACB[iVar8 /*203*/].f_9 - 0x00000001);
		Global_C961[iParam0 /*120*/].f_23[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/].f_56[iVar0] = 0x00000001;
		Global_C961[iParam0 /*120*/].f_45[iVar0] = 0x00000000;
		Global_C961[iParam0 /*120*/]++;
		iVar10 = Global_C961[iParam0 /*120*/].f_1[iVar0];
		iVar11 = Global_CACB[iVar8 /*203*/].f_A[iVar10 /*48*/];
		iVar2 = iVar11;
		iVar1 = Global_A677[iVar11 /*12*/].f_2;
		if (Global_CACB[iVar8 /*203*/].f_A[(Global_CACB[iVar8 /*203*/].f_9 - 0x00000001) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_CACB[iVar8 /*203*/].f_A[(Global_CACB[iVar8 /*203*/].f_9 - 0x00000001) /*48*/].f_2}, 0x00000010);
		}
		else
		{
			Var3 = { func_32(Global_A677[iVar11 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_C961[iParam0 /*120*/].f_45[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0x00000000:
					func_28(0x00000000, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					break;
				
				case 0x00000001:
					if (iVar2 == 0x000000F9)
					{
						func_28(0x00000001, iVar1, iVar2, "PW_FEED_EM_1", 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_28(0x00000001, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					break;
				
				case 0x00000002:
					func_28(0x00000002, iVar1, iVar2, &Var3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					break;
				}
			}
	}
}

void func_28(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x22A8E52414415B76())
	{
		return;
	}
	iVar0 = func_78();
	bVar1 = 0x00000000;
	StringCopy(&cVar2, func_31(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 0x00000048:
				unk_0x1E64CE678ED5F61E("PROPR_INCEMAIL1");
				break;
			
			case 0x00000049:
				unk_0x1E64CE678ED5F61E("PROPR_INCEMAIL3");
				break;
			
			case 0x0000004A:
				unk_0x1E64CE678ED5F61E("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x1E64CE678ED5F61E(sParam3);
				if (!unk_0xEA6BC48857E0AC4C(sParam4))
				{
					unk_0x6B012227B3921E18(sParam4);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam5))
				{
					unk_0x6B012227B3921E18(sParam5);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam6))
				{
					unk_0x6B012227B3921E18(sParam6);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam7))
				{
					unk_0x6B012227B3921E18(sParam7);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam8))
				{
					unk_0x6B012227B3921E18(sParam8);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam9))
				{
					unk_0x6B012227B3921E18(sParam9);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam10))
				{
					unk_0x6B012227B3921E18(sParam10);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam11))
				{
					unk_0x6B012227B3921E18(sParam11);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam12))
				{
					unk_0x6B012227B3921E18(sParam12);
				}
				if (!unk_0xEA6BC48857E0AC4C(sParam13))
				{
					unk_0x6B012227B3921E18(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_29(unk_0x1AEA174B291A9906(&cVar2, &cVar2, 0x00000000, 0x00000002, unk_0x19C9F30A7697B43C(func_30(iParam1)), 0x00000000));
		}
		else
		{
			func_29(unk_0x1AEA174B291A9906("CHAR_DEFAULT", "CHAR_DEFAULT", 0x00000000, 0x00000002, unk_0x19C9F30A7697B43C(func_30(iParam1)), 0x00000000));
		}
		switch (Global_4C1E)
		{
			case 0x00000000:
				StringCopy(&Global_4C13, "Phone_SoundSet_Michael", 24);
				Global_A66F++;
				if (Global_A66F > 0x00000010)
				{
					Global_A66F = 0x00000010;
				}
				break;
			
			case 0x00000002:
				StringCopy(&Global_4C13, "Phone_SoundSet_Trevor", 24);
				Global_A671++;
				if (Global_A671 > 0x00000010)
				{
					Global_A671 = 0x00000010;
				}
				break;
			
			case 0x00000001:
				StringCopy(&Global_4C13, "Phone_SoundSet_Franklin", 24);
				Global_A670++;
				if (Global_A670 > 0x00000010)
				{
					Global_A670 = 0x00000010;
				}
				break;
			
			default:
				StringCopy(&Global_4C13, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Notification", &Global_4C13, 0x00000001);
	}
}

void func_29(var uParam0)
{
	Global_A672[Global_A676] = uParam0;
	Global_5567 = 0x00000001;
	Global_5566 = uParam0;
	Global_A676++;
	if (Global_A676 == 0x00000003)
	{
		Global_A676 = 0x00000000;
	}
}

char* func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "EMSTR_0";
		
		case 0x00000003:
			return "EMSTR_3";
		
		case 0x00000001:
			return "EMSTR_6";
		
		case 0x00000002:
			return "EMSTR_9";
		
		case 0x00000004:
			return "EMSTR_12";
		
		case 0x00000005:
			return "EMSTR_29";
		
		case 0x00000006:
			return "EMSTR_36";
		
		case 0x00000007:
			return "EMSTR_39";
		
		case 0x00000008:
			return "EMSTR_52";
		
		case 0x00000009:
			return "EMSTR_55";
		
		case 0x0000000A:
			return "EMSTR_58";
		
		case 0x0000000B:
			return "EMSTR_78";
		
		case 0x0000000C:
			return "EMSTR_81";
		
		case 0x0000000D:
			return "EMSTR_84";
		
		case 0x0000000E:
			return "EMSTR_87";
		
		case 0x0000000F:
			return "EMSTR_106";
		
		case 0x00000010:
			return "EMSTR_114";
		
		case 0x00000011:
			return "EMSTR_142";
		
		case 0x00000012:
			return "EMSTR_145";
		
		case 0x00000013:
			return "EMSTR_152";
		
		case 0x00000014:
			return "EMSTR_157";
		
		case 0x00000015:
			return "EMSTR_163";
		
		case 0x00000016:
			return "EMSTR_182";
		
		case 0x00000017:
			return "EMSTR_187";
		
		case 0x00000018:
			return "EMSTR_190";
		
		case 0x00000019:
			return "EMSTR_206";
		
		case 0x0000001A:
			return "EMSTR_219";
		
		case 0x0000001B:
			return "EMSTR_226";
		
		case 0x0000001C:
			return "EMSTR_233";
		
		case 0x0000001D:
			return "EMSTR_242";
		
		case 0x0000001E:
			return "EMSTR_249";
		
		case 0x0000001F:
			return "EMSTR_262";
		
		case 0x00000020:
			return "EMSTR_269";
		
		case 0x00000021:
			return "EMSTR_319";
		
		case 0x00000022:
			return "EMSTR_340";
		
		case 0x00000023:
			return "EMSTR_348";
		
		case 0x00000024:
			return "EMSTR_182";
		
		case 0x00000025:
			return "EMSTR_357";
		
		case 0x00000026:
			return "EMSTR_360";
		
		case 0x00000027:
			return "EMSTR_369";
		
		case 0x00000028:
			return "EMSTR_376";
		
		case 0x00000029:
			return "EMSTR_379";
		
		case 0x0000002A:
			return "EMSTR_382";
		
		case 0x0000002B:
			return "EMSTR_384";
		
		case 0x0000002C:
			return "EMSTR_387";
		
		case 0x0000002D:
			return "EMSTR_390";
		
		case 0x0000002E:
			return "EMSTR_393";
		
		case 0x0000002F:
			return "EMSTR_396";
		
		case 0x00000030:
			return "EMSTR_399";
		
		case 0x00000031:
			return "EMSTR_402";
		
		case 0x00000032:
			return "EMSTR_405";
		
		case 0x00000033:
			return "EMSTR_408";
		
		case 0x00000034:
			return "EMSTR_411";
		
		case 0x00000035:
			return "EMSTR_414";
		
		case 0x00000036:
			return "EMSTR_465";
		
		case 0x00000037:
			return "EMSTR_468";
		
		case 0x00000038:
			return "EMSTR_489";
		
		case 0x00000039:
			return "EMSTR_492";
		
		case 0x0000003A:
			return "EMSTR_495";
		
		case 0x0000003B:
			return "EMSTR_498";
		
		case 0x0000003C:
			return "EMSTR_501";
		
		case 0x0000003D:
			return "EMSTR_504";
		
		case 0x0000003E:
			return "EMSTR_507";
		
		case 0x0000003F:
			return "EMSTR_640";
		
		case 0x00000040:
			return "EMSTR_643";
		
		case 0x00000041:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_31(int iParam0, int iParam1)
{
	*iParam1 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000000 /*29*/].f_7));
		
		case 0x00000001:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000001 /*29*/].f_7));
		
		case 0x00000002:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000002 /*29*/].f_7));
		
		case 0x00000007:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000000C /*29*/].f_7));
		
		case 0x00000004:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000003C /*29*/].f_7));
		
		case 0x00000006:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000003E /*29*/].f_7));
		
		case 0x00000003:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000000E /*29*/].f_7));
		
		case 0x00000010:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000061 /*29*/].f_7));
		
		case 0x00000013:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000063 /*29*/].f_7));
		
		case 0x0000000F:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000060 /*29*/].f_7));
		
		case 0x0000003F:
			return "CHAR_CARSITE2";
		
		case 0x00000040:
			return "CHAR_BOATSITE";
		
		case 0x00000008:
			return "CHAR_BANK_MAZE";
		
		case 0x00000009:
			return "CHAR_BANK_FLEECA";
		
		case 0x0000000A:
			return "CHAR_BANK_BOL";
		
		case 0x00000015:
			return "CHAR_MINOTAUR";
		
		case 0x00000019:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000000F /*29*/].f_7));
		
		case 0x0000001A:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000001E /*29*/].f_7));
		
		case 0x0000001B:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000011 /*29*/].f_7));
		
		case 0x0000001D:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000014 /*29*/].f_7));
		
		case 0x0000001E:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000002B /*29*/].f_7));
		
		case 0x0000001F:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000002C /*29*/].f_7));
		
		case 0x00000020:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000013 /*29*/].f_7));
		
		case 0x00000022:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000028 /*29*/].f_7));
		
		case 0x00000024:
			return unk_0x19C9F30A7697B43C("CELL_E_381");
		
		case 0x00000026:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000040 /*29*/].f_7));
		
		case 0x00000005:
			return "CHAR_EPSILON";
		
		case 0x0000000D:
			return "CHAR_MILSITE";
		
		case 0x0000000B:
			return "CHAR_CARSITE";
		
		case 0x0000000E:
			return "CHAR_BOATSITE";
		
		case 0x0000000C:
			return "CHAR_PLANESITE";
		
		case 0x00000018:
			return "CHAR_DR_FRIEDLANDER";
		
		case 0x00000037:
			return "CHAR_CARSITE2";
		
		case 0x00000036:
			return "CHAR_BIKESITE";
		
		case 0x00000027:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007A /*29*/].f_7));
		
		case 0x00000028:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007D /*29*/].f_7));
		
		case 0x00000029:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000071 /*29*/].f_7));
		
		case 0x0000002A:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007E /*29*/].f_7));
		
		case 0x0000002B:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007F /*29*/].f_7));
		
		case 0x0000002C:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007C /*29*/].f_7));
		
		case 0x0000002D:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000072 /*29*/].f_7));
		
		case 0x0000002E:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000073 /*29*/].f_7));
		
		case 0x0000002F:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000074 /*29*/].f_7));
		
		case 0x00000030:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x0000007B /*29*/].f_7));
		
		case 0x00000031:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000075 /*29*/].f_7));
		
		case 0x00000032:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000076 /*29*/].f_7));
		
		case 0x00000033:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000077 /*29*/].f_7));
		
		case 0x00000034:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000078 /*29*/].f_7));
		
		case 0x00000035:
			return unk_0x19C9F30A7697B43C(&(Global_706[0x00000079 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0x00000000;
	return "ERROR!";
}

struct<16> func_32(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	if (iParam0 > 0xFFFFFFFF)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var1, "FAIL", 64);
	return Var1;
}

int func_33(int iParam0, int iParam1)
{
	if (Global_B374[iParam0 /*46*/].f_2A >= 0x00000009)
	{
		return 0x00000000;
	}
	Global_B374[iParam0 /*46*/].f_20[Global_B374[iParam0 /*46*/].f_2A] = iParam1;
	Global_B374[iParam0 /*46*/].f_2A++;
	return 0x00000001;
}

int func_34(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	iVar1 = ((Global_C961[iVar0 /*120*/] - 0x00000001) - iParam1);
	while (iVar1 >= 0x00000010)
	{
		iVar1 = (iVar1 - 0x00000010);
	}
	iVar2 = iVar1;
	if (!Global_C961[iVar0 /*120*/].f_56[iVar2])
	{
		iVar3 = Global_C961[iVar0 /*120*/].f_12[iVar2];
		iVar4 = Global_C961[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_B374[iVar3 /*46*/].f_20[iVar4];
		if (Global_A677[iVar5 /*12*/].f_4 == 0x00000000)
		{
			return 0x00000000;
		}
		if (Global_C961[iVar0 /*120*/].f_23[iVar2] == 0x00000001)
		{
			return 0x00000000;
		}
		if (!func_35(iVar0, iVar2))
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_35(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!iParam0 < 0x00000003)
	{
		return 0x00000000;
	}
	iVar0 = Global_C961[iParam0 /*120*/].f_1[iParam1];
	iVar1 = Global_C961[iParam0 /*120*/].f_12[iParam1];
	if (!(Global_B374[iVar1 /*46*/] && !Global_B374[iVar1 /*46*/].f_1))
	{
		return 0x00000000;
	}
	if (!iVar0 == (Global_B374[iVar1 /*46*/].f_2A - 0x00000001))
	{
		return 0x00000000;
	}
	iVar2 = Global_B374[iVar1 /*46*/].f_20[(Global_B374[iVar1 /*46*/].f_2A - 0x00000001)];
	if (Global_A677[iVar2 /*12*/].f_4 > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_36()
{
	return Global_12061;
}

void func_37()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Accept", &Global_4C13, 0x00000001);
		func_38();
	}
}

void func_38()
{
	if (func_2())
	{
		unk_0x5A963FB0365294C8(0x00000005);
	}
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	return Global_C961[iVar0 /*120*/];
}

void func_40(var uParam0, int iParam1, int iParam2)
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
	struct<16> Var9;
	struct<16> Var10;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam1)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar1 = ((Global_C961[iVar0 /*120*/] - 0x00000001) - iParam2);
	while (iVar1 >= 0x00000010)
	{
		iVar1 = (iVar1 - 0x00000010);
	}
	iVar2 = iVar1;
	if (!Global_C961[iVar0 /*120*/].f_56[iVar2])
	{
		iVar3 = Global_C961[iVar0 /*120*/].f_12[iVar2];
		iVar4 = Global_C961[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_B374[iVar3 /*46*/].f_20[iVar4];
		if (Global_A677[iVar5 /*12*/].f_4 == 0x00000000)
		{
			return;
		}
		iVar6 = 0x00000000;
		iVar7 = Global_A677[iVar5 /*12*/].f_4;
		if (iVar7 > 0x00000001)
		{
			iVar7 = 0x00000001;
		}
		iVar6 = 0x00000000;
		while (iVar6 < iVar7)
		{
			iVar8 = Global_A677[iVar5 /*12*/].f_5[iVar6 /*4*/].f_1;
			Var9 = { func_32(Global_A677[iVar8 /*12*/].f_1) };
			Var10 = { func_32(Global_A677[iVar8 /*12*/].f_1) };
			unk_0x7E60C62A7CE58FC8(uParam0, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000009);
			unk_0x3CAEA85DA607305E(0x00000000);
			func_9("");
			func_9("");
			func_9("EM_RESPONSE_NEW");
			func_9(&Var10);
			func_9(func_42(Global_A677[iVar8 /*12*/].f_2));
			func_41(iVar8, Global_A677[iVar8 /*12*/].f_2);
			unk_0x7E60D21B163E9D56();
			iVar6++;
		}
	}
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0x00000037:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000028:
		case 0x00000029:
		case 0x0000002A:
			unk_0x024BC5F58A72410C("EmailAds_Elitas_Travel");
			unk_0x1200CC973A2399C8(0x00000001);
			return;
		
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
		case 0x0000003C:
		case 0x0000003D:
		case 0x00000038:
			unk_0x024BC5F58A72410C("EmailAds_Dock_Tease");
			unk_0x1200CC973A2399C8(0x00000001);
			return;
		
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
			unk_0x024BC5F58A72410C("EmailAds_Warstock");
			unk_0x1200CC973A2399C8(0x00000001);
			return;
		
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
			unk_0x024BC5F58A72410C("EmailAds_Legendary_Motorsport");
			unk_0x1200CC973A2399C8(0x00000001);
			return;
		
		default:
	}
	switch (iParam1)
	{
		case 0x0000000D:
			unk_0x024BC5F58A72410C("EmailAds_Warstock");
			unk_0x1200CC973A2399C8(0x00000001);
			return;
		
		case 0x0000000F:
			unk_0x024BC5F58A72410C("EmailAds_LS_Customs");
			unk_0x1200CC973A2399C8(0x00000001);
			return;
		
		case 0x00000013:
			unk_0x024BC5F58A72410C("EmailAds_LS_Tourist_Info");
			unk_0x1200CC973A2399C8(0x00000001);
			return;
		
		default:
	}
}

char* func_42(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "EMSTR_2";
		
		case 0x00000003:
			return "EMSTR_5";
		
		case 0x00000001:
			return "EMSTR_8";
		
		case 0x00000002:
			return "EMSTR_11";
		
		case 0x00000004:
			return "EMSTR_14";
		
		case 0x00000005:
			return "EMSTR_31";
		
		case 0x00000006:
			return "EMSTR_38";
		
		case 0x00000007:
			return "EMSTR_41";
		
		case 0x00000008:
			return "EMSTR_54";
		
		case 0x00000009:
			return "EMSTR_57";
		
		case 0x0000000A:
			return "EMSTR_60";
		
		case 0x0000000B:
			return "EMSTR_80";
		
		case 0x0000000C:
			return "EMSTR_83";
		
		case 0x0000000D:
			return "EMSTR_86";
		
		case 0x0000000E:
			return "EMSTR_89";
		
		case 0x0000000F:
			return "EMSTR_106";
		
		case 0x00000010:
			return "EMSTR_116";
		
		case 0x00000011:
			return "EMSTR_144";
		
		case 0x00000012:
			return "EMSTR_147";
		
		case 0x00000013:
			return "EMSTR_154";
		
		case 0x00000014:
			return "EMSTR_159";
		
		case 0x00000015:
			return "EMSTR_165";
		
		case 0x00000016:
			return "EMSTR_184";
		
		case 0x00000017:
			return "EMSTR_189";
		
		case 0x00000018:
			return "EMSTR_192";
		
		case 0x00000019:
			return "EMSTR_208";
		
		case 0x0000001A:
			return "EMSTR_221";
		
		case 0x0000001B:
			return "EMSTR_228";
		
		case 0x0000001C:
			return "EMSTR_235";
		
		case 0x0000001D:
			return "EMSTR_244";
		
		case 0x0000001E:
			return "EMSTR_251";
		
		case 0x0000001F:
			return "EMSTR_264";
		
		case 0x00000020:
			return "EMSTR_271";
		
		case 0x00000021:
			return "EMSTR_321";
		
		case 0x00000022:
			return "EMSTR_342";
		
		case 0x00000023:
			return "EMSTR_350";
		
		case 0x00000024:
			return "EMSTR_354";
		
		case 0x00000025:
			return "EMSTR_359";
		
		case 0x00000026:
			return "EMSTR_362";
		
		case 0x00000027:
			return "EMSTR_371";
		
		case 0x00000028:
			return "EMSTR_378";
		
		case 0x00000029:
			return "EMSTR_381";
		
		case 0x0000002A:
			return "EMSTR_382";
		
		case 0x0000002B:
			return "EMSTR_386";
		
		case 0x0000002C:
			return "EMSTR_389";
		
		case 0x0000002D:
			return "EMSTR_392";
		
		case 0x0000002E:
			return "EMSTR_395";
		
		case 0x0000002F:
			return "EMSTR_398";
		
		case 0x00000030:
			return "EMSTR_401";
		
		case 0x00000031:
			return "EMSTR_404";
		
		case 0x00000032:
			return "EMSTR_407";
		
		case 0x00000033:
			return "EMSTR_410";
		
		case 0x00000034:
			return "EMSTR_413";
		
		case 0x00000035:
			return "EMSTR_416";
		
		case 0x00000036:
			return "EMSTR_467";
		
		case 0x00000037:
			return "EMSTR_470";
		
		case 0x00000038:
			return "EMSTR_491";
		
		case 0x00000039:
			return "EMSTR_494";
		
		case 0x0000003A:
			return "EMSTR_497";
		
		case 0x0000003B:
			return "EMSTR_500";
		
		case 0x0000003C:
			return "EMSTR_503";
		
		case 0x0000003D:
			return "EMSTR_506";
		
		case 0x0000003E:
			return "EMSTR_509";
		
		case 0x0000003F:
			return "EMSTR_642";
		
		case 0x00000040:
			return "EMSTR_645";
		
		case 0x00000041:
			return "EMSTR_654";
		
		default:
	}
	return "NULL";
}

void func_43(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_44(int iParam0)
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

void func_45(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_46(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_46(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_47();
	}
}

void func_47()
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

int func_48(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, &Global_1AEC9))
	{
		return 0x00000001;
	}
	if (func_49(sParam0))
	{
		return 0x00000000;
	}
	return 0x00000002;
}

int func_49(char* sParam0)
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

int func_50(int iParam0)
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

char* func_51(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
		return "";
	}
	iVar4 = func_53(iVar0, iParam1, &iVar2, &iVar3, &uVar1);
	uVar1 = uVar1;
	iVar5 = 0xFFFFFFFF;
	bVar6 = Global_C961[iVar0 /*120*/].f_56[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_B374[iVar2 /*46*/].f_20[iVar3];
	}
	else
	{
		iVar7 = 0xFFFFFFFF;
		iVar8 = 0x00000000;
		iVar8 = 0x00000000;
		while (iVar8 < 0x00000007)
		{
			if (Global_CACB[iVar8 /*203*/].f_1 == iVar2)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_CACB[iVar7 /*203*/].f_A[iVar3 /*48*/];
	}
	return func_52(iVar5);
}

char* func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000007:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 0x00000008:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 0x00000009:
			return "WWW_EPSILONPROGRAM_COM_S_STORE";
		
		case 0x0000000A:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 0x0000000B:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 0x00000010:
			return "WWW_EPSILONPROGRAM_COM";
		
		case 0x00000011:
			return "WWW_MAZE_D_BANK_COM";
		
		case 0x00000012:
			return "WWW_FLEECA_COM";
		
		case 0x00000013:
			return "WWW_MAZE_D_BANK_COM";
		
		case 0x00000014:
			return "WWW_MAZE_D_BANK_COM";
		
		case 0x00000015:
			return "WWW_MAZE_D_BANK_COM";
		
		case 0x00000016:
			return "WWW_MAZE_D_BANK_COM";
		
		case 0x00000017:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 0x00000018:
			return "WWW_FLEECA_COM";
		
		case 0x00000019:
			return "WWW_FLEECA_COM";
		
		case 0x0000001A:
			return "WWW_FLEECA_COM";
		
		case 0x0000001B:
			return "WWW_FLEECA_COM";
		
		case 0x0000001C:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 0x0000001D:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 0x0000001E:
			return "WWW_THEBANKOFLIBERTY_COM";
		
		case 0x0000002B:
			return "WWW_LCN_D_EXCHANGE_COM";
		
		case 0x0000002F:
			return "WWW_AMMUNATION_NET";
		
		case 0x00000030:
			return "WWW_AMMUNATION_NET";
		
		case 0x00000031:
			return "WWW_AMMUNATION_NET";
		
		case 0x00000032:
			return "WWW_AMMUNATION_NET";
		
		case 0x00000033:
			return "WWW_AMMUNATION_NET";
		
		case 0x00000034:
			return "WWW_AMMUNATION_NET";
		
		case 0x00000035:
			return "WWW_AMMUNATION_NET";
		
		case 0x00000036:
			return "WWW_AMMUNATION_NET";
		
		case 0x00000037:
			return "WWW_ELITASTRAVEL_COM";
		
		case 0x00000038:
			return "WWW_DOCKTEASE_COM";
		
		case 0x00000039:
			return "WWW_ELITASTRAVEL_COM";
		
		case 0x0000003A:
			return "WWW_ELITASTRAVEL_COM";
		
		case 0x0000003B:
			return "WWW_ELITASTRAVEL_COM";
		
		case 0x0000003C:
			return "WWW_DOCKTEASE_COM";
		
		case 0x0000003D:
			return "WWW_DOCKTEASE_COM";
		
		case 0x0000003E:
			return "WWW_ELITASTRAVEL_COM";
		
		case 0x0000003F:
			return "WWW_ELITASTRAVEL_COM";
		
		case 0x00000044:
			return "WWW_AMMUNATION_NET";
		
		case 0x00000054:
			return "WWW_EPSILONPROGRAM_COM_S_TRACT";
		
		case 0x0000009B:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 0x0000009C:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 0x0000009D:
			return "WWW_LEGENDARYMOTORSPORT_NET";
		
		case 0x000000B5:
			return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";
		
		case 0x000000C2:
			return "WWW_HUSHSMUSH_COM";
		
		case 0x000000C3:
			return "WWW_HUSHSMUSH_COM";
		
		case 0x000000C4:
			return "WWW_HUSHSMUSH_COM";
		
		case 0x000000C5:
			return "WWW_HUSHSMUSH_COM";
		
		case 0x000000C6:
			return "WWW_HUSHSMUSH_COM";
		
		case 0x000000F4:
			return "WWW_MYDIVINEWITHIN_COM";
		
		case 0x000000F5:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 0x000000F6:
			return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";
		
		case 0x0000010E:
			return "WWW_AMMUNATION_NET";
		
		case 0x0000010F:
			return "WWW_AMMUNATION_NET";
		
		case 0x00000110:
			return "WWW_AMMUNATION_NET";
		
		case 0x00000111:
			return "WWW_AMMUNATION_NET";
		
		case 0x00000112:
			return "WWW_AMMUNATION_NET";
		
		case 0x00000113:
			return "WWW_AMMUNATION_NET";
		
		case 0x00000114:
			return "WWW_AMMUNATION_NET";
		
		default:
	}
	return "NULL";
}

int func_53(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = ((Global_C961[iParam0 /*120*/] - 0x00000001) - iParam1);
	while (iVar0 >= 0x00000010)
	{
		iVar0 = (iVar0 - 0x00000010);
	}
	iVar1 = iVar0;
	*uParam2 = Global_C961[iParam0 /*120*/].f_12[iVar1];
	*uParam3 = Global_C961[iParam0 /*120*/].f_1[iVar1];
	*uParam4 = Global_C961[iParam0 /*120*/].f_23[iVar1];
	return iVar1;
}

int func_54(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	iVar4 = func_53(iVar0, iParam1, &iVar1, &iVar2, &uVar3);
	uVar3 = uVar3;
	iVar5 = 0xFFFFFFFF;
	bVar6 = Global_C961[iVar0 /*120*/].f_56[iVar4];
	if (!bVar6)
	{
		iVar5 = Global_B374[iVar1 /*46*/].f_20[iVar2];
	}
	else
	{
		iVar7 = 0xFFFFFFFF;
		iVar8 = 0x00000000;
		iVar8 = 0x00000000;
		while (iVar8 < 0x00000007)
		{
			if (Global_CACB[iVar8 /*203*/].f_1 == iVar1)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_CACB[iVar7 /*203*/].f_A[iVar2 /*48*/];
	}
	return func_55(iVar5);
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000002B:
		case 0x0000002F:
		case 0x00000030:
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000044:
		case 0x00000054:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
		case 0x000000B5:
		case 0x000000C2:
		case 0x000000C3:
		case 0x000000C4:
		case 0x000000C5:
		case 0x000000C6:
		case 0x000000F4:
		case 0x000000F5:
		case 0x000000F6:
		case 0x0000010E:
		case 0x0000010F:
		case 0x00000110:
		case 0x00000111:
		case 0x00000112:
		case 0x00000113:
		case 0x00000114:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_56(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<16> Var7;
	struct<16> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<16> Var17;
	struct<16> Var18;
	bool bVar19;
	int iVar20;
	
	unk_0x7E60C62A7CE58FC8(uParam0, "SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(0x00000009);
	unk_0x7E60D21B163E9D56();
	iVar0 = 0xFFFFFFFF;
	switch (iParam1)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar4 = func_53(iVar0, iParam2, &iVar2, &iVar3, &bVar1);
	bVar5 = Global_C961[iVar0 /*120*/].f_56[iVar4];
	if (!Global_C961[iVar0 /*120*/].f_45[iVar4])
	{
		func_60(0xFFFFFFFF);
	}
	Global_C961[iVar0 /*120*/].f_45[iVar4] = 0x00000001;
	if (!bVar5)
	{
		iVar6 = Global_B374[iVar2 /*46*/].f_20[iVar3];
		Var7 = { func_32(Global_A677[iVar6 /*12*/]) };
		Var8 = { func_32(Global_A677[iVar6 /*12*/].f_1) };
		unk_0x7E60C62A7CE58FC8(uParam0, "SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0x00000009);
		unk_0x3CAEA85DA607305E(0x00000000);
		func_9(func_59(Global_A677[iVar6 /*12*/].f_3));
		func_9(func_59(Global_A677[iVar6 /*12*/].f_2));
		func_9(&Var7);
		func_9(&Var8);
		func_9(func_42(Global_A677[iVar6 /*12*/].f_2));
		func_41(iVar6, Global_A677[iVar6 /*12*/].f_2);
		unk_0x7E60D21B163E9D56();
		if (Global_A677[iVar6 /*12*/].f_4 == 0x00000000)
		{
			func_77(0x00000000);
		}
		else if (bVar1 || !func_35(iVar0, iVar4))
		{
			func_77(0x00000000);
		}
		else
		{
			func_77(0x00000001);
		}
		if (Global_B374[iVar2 /*46*/].f_2A > 0x00000001)
		{
			iVar9 = iVar3;
			iVar10 = (iVar3 - 0x00000001);
			iVar11 = 0x00000000;
			iVar11 = 0x00000000;
			while (iVar11 < iVar9)
			{
				iVar6 = Global_B374[iVar2 /*46*/].f_20[iVar10];
				Var7 = { func_32(Global_A677[iVar6 /*12*/]) };
				Var8 = { func_32(Global_A677[iVar6 /*12*/].f_1) };
				iVar12 = func_58(iParam1, Global_A677[iVar6 /*12*/].f_3);
				unk_0x7E60C62A7CE58FC8(uParam0, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000009);
				unk_0x3CAEA85DA607305E(iVar11 + 1);
				func_9(func_59(iVar12));
				func_9(func_59(Global_A677[iVar6 /*12*/].f_2));
				func_9(&Var7);
				func_9(&Var8);
				func_9(func_42(Global_A677[iVar6 /*12*/].f_2));
				func_41(iVar6, Global_A677[iVar6 /*12*/].f_2);
				unk_0x7E60D21B163E9D56();
				iVar10 = (iVar10 - 0x00000001);
				iVar11++;
			}
		}
	}
	else
	{
		iVar13 = 0xFFFFFFFF;
		iVar14 = 0x00000000;
		iVar14 = 0x00000000;
		while (iVar14 < 0x00000007)
		{
			if (Global_CACB[iVar14 /*203*/].f_1 == iVar2)
			{
				iVar13 = iVar14;
			}
			iVar14++;
		}
		if (iVar13 == 0xFFFFFFFF)
		{
			return;
		}
		else
		{
			iVar15 = Global_CACB[iVar13 /*203*/].f_A[iVar3 /*48*/];
			iVar16 = Global_CACB[iVar13 /*203*/].f_A[iVar3 /*48*/];
			Var17 = { func_32(Global_A677[iVar15 /*12*/]) };
			Var18 = { func_32(Global_A677[iVar15 /*12*/].f_1) };
			if (Global_CACB[iVar13 /*203*/].f_A[iVar3 /*48*/].f_1)
			{
				MemCopy(&Var18, {Global_CACB[iVar13 /*203*/].f_A[iVar3 /*48*/].f_2}, 0x00000010);
			}
			if (Global_A677[iVar15 /*12*/].f_4 == 0x00000000)
			{
				func_77(0x00000000);
			}
			else if (bVar1)
			{
				func_77(0x00000000);
			}
			else
			{
				func_77(0x00000001);
			}
			bVar19 = 0x00000000;
			bVar19 = func_57(uParam0, Global_CACB[iVar13 /*203*/].f_1, iVar3, iVar16);
			if (!bVar19)
			{
				unk_0x7E60C62A7CE58FC8(uParam0, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000009);
				unk_0x3CAEA85DA607305E(0x00000000);
				func_9(func_59(Global_A677[iVar15 /*12*/].f_3));
				func_9(func_59(Global_A677[iVar15 /*12*/].f_2));
				func_9(&Var17);
				if (Global_CACB[iVar13 /*203*/].f_A[iVar3 /*48*/].f_6 > 0x00000000)
				{
					unk_0x7ACC3006A87F8B39(&Var18);
					iVar20 = 0x00000000;
					iVar20 = 0x00000000;
					while (iVar20 < Global_CACB[iVar13 /*203*/].f_A[iVar3 /*48*/].f_6)
					{
						unk_0x6B012227B3921E18(&(Global_CACB[iVar13 /*203*/].f_A[iVar3 /*48*/].f_7[iVar20 /*4*/]));
						iVar20++;
					}
					unk_0x779B34565F4D71B1();
				}
				else
				{
					func_9(&Var18);
				}
				func_9(func_42(Global_A677[iVar15 /*12*/].f_2));
				func_41(iVar15, Global_A677[iVar15 /*12*/].f_2);
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_57(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<16> Var3;
	struct<8> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	char* sVar8;
	
	iVar0 = 0x00000000;
	uVar1 = uParam1;
	uVar1 = iParam2;
	uVar1 = uVar1;
	iVar2 = 0x00000000;
	unk_0x7E60C62A7CE58FC8(uParam0, "SET_DATA_SLOT_EMPTY");
	unk_0x7E60D21B163E9D56();
	Var3 = { func_32(Global_A677[iParam3 /*12*/]) };
	switch (iParam3)
	{
		case 0x00000048:
			StringCopy(&Var4, "PROPR_INCEMAIL1", 64);
			break;
		
		case 0x00000049:
			StringCopy(&Var4, "PROPR_INCEMAIL3", 64);
			break;
		
		case 0x0000004A:
			StringCopy(&Var4, "PROPR_INCEMAIL2", 64);
			break;
	}
	unk_0x7E60C62A7CE58FC8(uParam0, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(0x00000009);
	unk_0x3CAEA85DA607305E(iVar2);
	func_9(func_59(Global_A677[iParam3 /*12*/].f_3));
	func_9(func_59(Global_A677[iParam3 /*12*/].f_2));
	func_9(&Var3);
	func_9(&Var4);
	func_9(func_42(Global_A677[iParam3 /*12*/].f_2));
	func_9("");
	unk_0x3CAEA85DA607305E(0x00000000);
	unk_0x1200CC973A2399C8(0x00000001);
	unk_0x7E60D21B163E9D56();
	iVar2++;
	iVar5 = 0x00000000;
	while (iVar5 < 0x00000010)
	{
		iVar6 = iVar5;
		bVar7 = 0x00000000;
		switch (iParam3)
		{
			case 0x00000048:
				if (Global_1B416.f_6143[iVar6 /*4*/] == 0x00000000)
				{
					bVar7 = 0x00000001;
				}
				break;
			
			case 0x00000049:
				if (Global_1B416.f_6143[iVar6 /*4*/] == 0x00000001)
				{
					bVar7 = 0x00000001;
				}
				break;
			
			case 0x0000004A:
				if (Global_1B416.f_6143[iVar6 /*4*/] == 0x00000002)
				{
					bVar7 = 0x00000001;
				}
				break;
		}
		if (bVar7)
		{
			switch (iVar6)
			{
				case 0x00000000:
					sVar8 = "ACCNA_TOWING";
					break;
				
				case 0x00000001:
					sVar8 = "ACCNA_TAXI_LOT";
					break;
				
				case 0x00000002:
					sVar8 = "ACCNA_ARMS";
					break;
				
				case 0x00000003:
					sVar8 = "ACCNA_SONAR";
					break;
				
				case 0x00000004:
					sVar8 = "ACCNA_CARMOD";
					break;
				
				case 0x00000005:
					sVar8 = "ACCNA_VCINEMA";
					break;
				
				case 0x00000006:
					sVar8 = "ACCNA_DCINEMA";
					break;
				
				case 0x00000007:
					sVar8 = "ACCNA_MCINEMA";
					break;
				
				case 0x00000008:
					sVar8 = "ACCNA_GOLF";
					break;
				
				case 0x00000009:
					sVar8 = "ACCNA_CSCRAP";
					break;
				
				case 0x0000000A:
					sVar8 = "ACCNA_SMOKE";
					break;
				
				case 0x0000000B:
					sVar8 = "ACCNA_TEQUILA";
					break;
				
				case 0x0000000C:
					sVar8 = "ACCNA_PITCHERS";
					break;
				
				case 0x0000000D:
					sVar8 = "ACCNA_HEN";
					break;
				
				case 0x0000000E:
					sVar8 = "ACCNA_HOOKIES";
					break;
				
				case 0x0000000F:
					sVar8 = "ACCNA_STRP";
					break;
			}
			unk_0x7E60C62A7CE58FC8(uParam0, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000009);
			unk_0x3CAEA85DA607305E(iVar2);
			unk_0x7ACC3006A87F8B39("PROPR_INCEMAIL4");
			unk_0x6B012227B3921E18(sVar8);
			unk_0x6D99DF8263D35CE5(Global_1B416.f_6143[iVar6 /*4*/].f_3);
			unk_0x779B34565F4D71B1();
			unk_0x7E60D21B163E9D56();
			iVar2++;
			iVar0 = 0x00000001;
		}
		iVar5++;
	}
	return iVar0;
}

int func_58(int iParam0, int iParam1)
{
	if (iParam1 == 0x00000000)
	{
		if (iParam0 == 0x00000001)
		{
			return 0x00000001;
		}
		else if (iParam0 == 0x00000002)
		{
			return 0x00000002;
		}
	}
	return iParam1;
}

char* func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "EMSTR_1";
		
		case 0x00000003:
			return "EMSTR_4";
		
		case 0x00000001:
			return "EMSTR_7";
		
		case 0x00000002:
			return "EMSTR_10";
		
		case 0x00000004:
			return "EMSTR_13";
		
		case 0x00000005:
			return "EMSTR_30";
		
		case 0x00000006:
			return "EMSTR_37";
		
		case 0x00000007:
			return "EMSTR_40";
		
		case 0x00000008:
			return "EMSTR_53";
		
		case 0x00000009:
			return "EMSTR_56";
		
		case 0x0000000A:
			return "EMSTR_59";
		
		case 0x0000000B:
			return "EMSTR_79";
		
		case 0x0000000C:
			return "EMSTR_82";
		
		case 0x0000000D:
			return "EMSTR_85";
		
		case 0x0000000E:
			return "EMSTR_88";
		
		case 0x0000000F:
			return "EMSTR_107";
		
		case 0x00000010:
			return "EMSTR_115";
		
		case 0x00000011:
			return "EMSTR_143";
		
		case 0x00000012:
			return "EMSTR_146";
		
		case 0x00000013:
			return "EMSTR_153";
		
		case 0x00000014:
			return "EMSTR_158";
		
		case 0x00000015:
			return "EMSTR_164";
		
		case 0x00000016:
			return "EMSTR_183";
		
		case 0x00000017:
			return "EMSTR_188";
		
		case 0x00000018:
			return "EMSTR_191";
		
		case 0x00000019:
			return "EMSTR_207";
		
		case 0x0000001A:
			return "EMSTR_220";
		
		case 0x0000001B:
			return "EMSTR_227";
		
		case 0x0000001C:
			return "EMSTR_234";
		
		case 0x0000001D:
			return "EMSTR_243";
		
		case 0x0000001E:
			return "EMSTR_250";
		
		case 0x0000001F:
			return "EMSTR_263";
		
		case 0x00000020:
			return "EMSTR_270";
		
		case 0x00000021:
			return "EMSTR_320";
		
		case 0x00000022:
			return "EMSTR_341";
		
		case 0x00000023:
			return "EMSTR_349";
		
		case 0x00000024:
			return "EMSTR_353";
		
		case 0x00000025:
			return "EMSTR_358";
		
		case 0x00000026:
			return "EMSTR_361";
		
		case 0x00000027:
			return "EMSTR_370";
		
		case 0x00000028:
			return "EMSTR_377";
		
		case 0x00000029:
			return "EMSTR_380";
		
		case 0x0000002A:
			return "EMSTR_383";
		
		case 0x0000002B:
			return "EMSTR_385";
		
		case 0x0000002C:
			return "EMSTR_388";
		
		case 0x0000002D:
			return "EMSTR_391";
		
		case 0x0000002E:
			return "EMSTR_394";
		
		case 0x0000002F:
			return "EMSTR_397";
		
		case 0x00000030:
			return "EMSTR_400";
		
		case 0x00000031:
			return "EMSTR_403";
		
		case 0x00000032:
			return "EMSTR_406";
		
		case 0x00000033:
			return "EMSTR_409";
		
		case 0x00000034:
			return "EMSTR_412";
		
		case 0x00000035:
			return "EMSTR_415";
		
		case 0x00000036:
			return "EMSTR_466";
		
		case 0x00000037:
			return "EMSTR_469";
		
		case 0x00000038:
			return "EMSTR_490";
		
		case 0x00000039:
			return "EMSTR_493";
		
		case 0x0000003A:
			return "EMSTR_496";
		
		case 0x0000003B:
			return "EMSTR_499";
		
		case 0x0000003C:
			return "EMSTR_502";
		
		case 0x0000003D:
			return "EMSTR_505";
		
		case 0x0000003E:
			return "EMSTR_508";
		
		case 0x0000003F:
			return "EMSTR_641";
		
		case 0x00000040:
			return "EMSTR_644";
		
		case 0x00000041:
			return "EMSTR_653";
		
		default:
	}
	return "NULL";
}

void func_60(int iParam0)
{
	switch (func_78())
	{
		case 0x00000000:
			Global_A66F = (Global_A66F + iParam0);
			if (Global_A66F < 0x00000000)
			{
				Global_A66F = 0x00000000;
			}
			break;
		
		case 0x00000002:
			Global_A671 = (Global_A671 + iParam0);
			if (Global_A671 < 0x00000000)
			{
				Global_A671 = 0x00000000;
			}
			break;
		
		case 0x00000001:
			Global_A670 = (Global_A670 + iParam0);
			if (Global_A670 < 0x00000000)
			{
				Global_A670 = 0x00000000;
			}
			break;
		
		default:
			break;
	}
}

void func_61(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar1 = ((Global_C961[iVar0 /*120*/] - 0x00000001) - iParam1);
	while (iVar1 >= 0x00000010)
	{
		iVar1 = (iVar1 - 0x00000010);
	}
	iVar2 = iVar1;
	iVar3 = Global_C961[iVar0 /*120*/].f_12[iVar2];
	iVar4 = Global_C961[iVar0 /*120*/].f_1[iVar2];
	iVar5 = 0xFFFFFFFF;
	bVar6 = Global_C961[iVar0 /*120*/].f_56[iVar2];
	if (!bVar6)
	{
		iVar5 = Global_B374[iVar3 /*46*/].f_20[iVar4];
	}
	else
	{
		iVar7 = 0xFFFFFFFF;
		iVar8 = 0x00000000;
		iVar8 = 0x00000000;
		while (iVar8 < 0x00000007)
		{
			if (Global_CACB[iVar8 /*203*/].f_1 == iVar3)
			{
				iVar7 = iVar8;
			}
			iVar8++;
		}
		if (iVar7 == 0xFFFFFFFF)
		{
			return;
		}
		iVar5 = Global_CACB[iVar7 /*203*/].f_A[iVar4 /*48*/];
	}
	if (!func_62(iVar5))
	{
		return;
	}
	if (Global_CACA != 0xFFFFFFFF)
	{
		unk_0xF5A41F3D3B38EFE3(func_16(Global_CACA));
	}
	Global_CACA = iVar5;
	unk_0x0D3BE1DE0262A012(func_16(iVar5), 0x00000000);
	while (!unk_0x27117E2CDD4D67C3(func_16(iVar5)))
	{
		SYSTEM::WAIT(0x00000064);
	}
}

int func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000042:
		case 0x0000004B:
		case 0x0000004C:
		case 0x0000004D:
		case 0x0000004E:
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
		case 0x00000053:
		case 0x000000CD:
		case 0x000000D1:
		case 0x000000D4:
		case 0x000000EE:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_63()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (Global_A672[iVar0] != 0xFFFFFFFF)
		{
			unk_0xD59AE843FA2C6B40(Global_A672[iVar0]);
			Global_A672[iVar0] = 0xFFFFFFFF;
		}
		iVar0++;
	}
	Global_A676 = 0x00000000;
}

void func_64(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
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

void func_65(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_9(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

int func_66(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<16> Var15;
	
	func_67(iParam1);
	iVar0 = 0xFFFFFFFF;
	switch (iParam1)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	unk_0x7E60C62A7CE58FC8(uParam0, "SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(0x00000008);
	unk_0x7E60D21B163E9D56();
	if (Global_C961[iVar0 /*120*/] < 0x00000001)
	{
		return 0x00000000;
	}
	iVar1 = (Global_C961[iVar0 /*120*/] - 0x00000001);
	while (iVar1 >= 0x00000010)
	{
		iVar1 = (iVar1 - 0x00000010);
	}
	iVar2 = Global_C961[iVar0 /*120*/];
	if (iVar2 > 0x00000010)
	{
		iVar2 = 0x00000010;
	}
	if (iVar1 < 0x00000000 || iVar1 > 0x0000000F)
	{
		return 0x00000000;
	}
	iVar3 = 0x00000000;
	iVar3 = 0x00000000;
	while (iVar3 < iVar2)
	{
		if (!Global_C961[iVar0 /*120*/].f_56[iVar1])
		{
			iVar4 = Global_C961[iVar0 /*120*/].f_12[iVar1];
			iVar5 = Global_C961[iVar0 /*120*/].f_1[iVar1];
			iVar6 = Global_B374[iVar4 /*46*/].f_20[iVar5];
			iVar7 = 0x00000000;
			if (Global_C961[iVar0 /*120*/].f_45[iVar1])
			{
				iVar7 = 0x00000001;
			}
			if (iVar7 == 0x00000001)
			{
				if (Global_A677[iVar6 /*12*/].f_4 > 0x00000000)
				{
					if (Global_C961[iVar0 /*120*/].f_23[iVar1] == 0x00000000)
					{
						iVar7 = 0x00000002;
					}
				}
			}
			MemCopy(&sVar8, {func_32(Global_A677[iVar6 /*12*/])}, 0x00000004);
			unk_0x7E60C62A7CE58FC8(uParam0, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000008);
			unk_0x3CAEA85DA607305E(iVar3);
			unk_0x3CAEA85DA607305E(iVar7);
			unk_0x3CAEA85DA607305E(0x00000000);
			func_9(func_59(Global_A677[iVar6 /*12*/].f_2));
			func_9(&sVar8);
			unk_0x7E60D21B163E9D56();
		}
		else
		{
			iVar9 = Global_C961[iVar0 /*120*/].f_12[iVar1];
			iVar10 = 0xFFFFFFFF;
			iVar11 = 0x00000000;
			iVar11 = 0x00000000;
			while (iVar11 < 0x00000007)
			{
				if (Global_CACB[iVar11 /*203*/].f_1 == iVar9)
				{
					iVar10 = iVar11;
				}
				iVar11++;
			}
			if (iVar10 == 0xFFFFFFFF)
			{
				return 0x00000001;
			}
			else
			{
				iVar12 = Global_C961[iVar0 /*120*/].f_1[iVar1];
				iVar13 = 0x00000000;
				if (Global_C961[iVar0 /*120*/].f_45[iVar1])
				{
					iVar13 = 0x00000001;
				}
				iVar14 = Global_CACB[iVar10 /*203*/].f_A[iVar12 /*48*/];
				if (iVar13 == 0x00000001)
				{
					if (Global_A677[iVar14 /*12*/].f_4 > 0x00000000)
					{
						if (Global_C961[iVar0 /*120*/].f_23[iVar1] == 0x00000000)
						{
							iVar13 = 0x00000002;
						}
					}
				}
				Var15 = { func_32(Global_A677[iVar14 /*12*/]) };
				unk_0x7E60C62A7CE58FC8(uParam0, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000008);
				unk_0x3CAEA85DA607305E(iVar3);
				unk_0x3CAEA85DA607305E(iVar13);
				unk_0x3CAEA85DA607305E(0x00000000);
				func_9(func_59(Global_A677[iVar14 /*12*/].f_2));
				func_9(&Var15);
				unk_0x7E60D21B163E9D56();
			}
		}
		iVar1 = (iVar1 - 0x00000001);
		if (iVar1 < 0x00000000)
		{
			iVar1 = 0x0000000F;
		}
		iVar3++;
	}
	return iVar2;
}

void func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<104> Var4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000002;
			break;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_C961[iVar0 /*120*/] < 0x00000001)
	{
		return;
	}
	iVar1 = (Global_C961[iVar0 /*120*/] - 0x00000001);
	while (iVar1 >= 0x00000010)
	{
		iVar1 = (iVar1 - 0x00000010);
	}
	iVar2 = Global_C961[iVar0 /*120*/];
	if (iVar2 > 0x00000010)
	{
		iVar2 = 0x00000010;
	}
	if (iVar1 < 0x00000000 || iVar1 > 0x0000000F)
	{
		return;
	}
	iVar3 = (iVar1 - (iVar2 - 0x00000001));
	if (iVar3 < 0x00000000)
	{
		iVar3 = (0x00000010 + iVar3);
	}
	Var4.f_1 = 0x00000010;
	Var4.f_12 = 0x00000010;
	Var4.f_23 = 0x00000010;
	Var4.f_34 = 0x00000010;
	Var4.f_45 = 0x00000010;
	Var4.f_56 = 0x00000010;
	Var4.f_67 = 0x00000010;
	iVar5 = 0x00000000;
	while (iVar5 < iVar2)
	{
		bVar6 = 0x00000001;
		if (Global_C961[iVar0 /*120*/].f_67[iVar3])
		{
			bVar6 = 0x00000000;
		}
		if (Global_C961[iVar0 /*120*/].f_56[iVar3])
		{
			iVar7 = Global_C961[iVar0 /*120*/].f_12[iVar3];
			iVar8 = 0xFFFFFFFF;
			iVar9 = 0x00000000;
			iVar9 = 0x00000000;
			while (iVar9 < 0x00000007)
			{
				if (Global_CACB[iVar9 /*203*/].f_1 == iVar7)
				{
					iVar8 = iVar9;
				}
				iVar9++;
			}
			if (iVar8 == 0xFFFFFFFF)
			{
				bVar6 = 0x00000000;
			}
		}
		if (bVar6)
		{
			iVar10 = Var4;
			Var4.f_1[iVar10] = Global_C961[iVar0 /*120*/].f_1[iVar3];
			Var4.f_12[iVar10] = Global_C961[iVar0 /*120*/].f_12[iVar3];
			Var4.f_23[iVar10] = Global_C961[iVar0 /*120*/].f_23[iVar3];
			Var4.f_34[iVar10] = Global_C961[iVar0 /*120*/].f_34[iVar3];
			Var4.f_45[iVar10] = Global_C961[iVar0 /*120*/].f_45[iVar3];
			Var4.f_56[iVar10] = Global_C961[iVar0 /*120*/].f_56[iVar3];
			Var4++;
		}
		iVar3++;
		if (iVar3 == 0x00000010)
		{
			iVar3 = 0x00000000;
		}
		iVar5++;
	}
	Global_C961[iVar0 /*120*/] = Var4;
	iVar5 = 0x00000000;
	while (iVar5 < 0x00000010)
	{
		Global_C961[iVar0 /*120*/].f_67[iVar5] = 0x00000000;
		Global_C961[iVar0 /*120*/].f_1[iVar5] = Var4.f_1[iVar5];
		Global_C961[iVar0 /*120*/].f_12[iVar5] = Var4.f_12[iVar5];
		Global_C961[iVar0 /*120*/].f_23[iVar5] = Var4.f_23[iVar5];
		Global_C961[iVar0 /*120*/].f_34[iVar5] = Var4.f_34[iVar5];
		Global_C961[iVar0 /*120*/].f_45[iVar5] = Var4.f_45[iVar5];
		Global_C961[iVar0 /*120*/].f_56[iVar5] = Var4.f_56[iVar5];
		iVar5++;
	}
}

void func_68()
{
	float fVar0;
	
	fVar0 = func_69(vLocal_48, vLocal_47, -90f, 0f, 90f, Global_4BF6, 350f, 0x00000000);
	if (Global_1FE0 == 0x00000000)
	{
		unk_0x2BF9F8AAD637763A((500f + (75f * (1f - fVar0))));
	}
	if (fVar0 >= 1f)
	{
		Global_554E = 0x00000000;
		func_1(0x00000000);
		func_4();
		iLocal_18 = 0x00000000;
	}
}

float func_69(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4127DC == 0x00000000)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000E) && Global_4C1E.f_1 < 0x00000004)
		{
			unk_0x1CFAC524932A967E(&Var0);
			if (Global_4BEF[Global_4BE7 /*3*/].f_1 == Var0.f_1)
			{
				Global_4127DC = 0x00000001;
			}
		}
	}
	if (func_72() && Global_4127DC == 0x00000000)
	{
		return 2f;
	}
	if (iLocal_18 == 0x00000000)
	{
		iLocal_18 = unk_0x1C0640BA9A7327B3();
	}
	fVar1 = func_71((SYSTEM::TO_FLOAT((unk_0x1C0640BA9A7327B3() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = SYSTEM::SIN((fVar1 * 90f));
		}
		Global_4BD6 = { func_70(vParam0, vParam1, fVar2) };
		Global_4BD9 = { func_70(vParam2, vParam3, fVar2) };
	}
	else
	{
		Global_4BD6 = { vParam1 };
		Global_4BD9 = { vParam3 };
	}
	unk_0x39F06A2B18483C68(Global_4BD6);
	unk_0x44FE29702110D5C6(Global_4BD9, 0x00000000);
	return fVar1;
}

Vector3 func_70(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_71(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			if (Global_4BE5 == 0x00000000)
			{
				if (Global_1A0F != 0x00000080)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if (Global_5145 != 0x00000002)
						{
						}
					}
				}
			}
		}
		if (func_15(0x0000000E))
		{
			return 0x00000000;
		}
		if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0x00000000))
		{
			return 0x00000000;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (!unk_0x00295B14470935CE())
			{
				if (unk_0x70EED0761B82965E(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)))
				{
					return 0x00000000;
				}
			}
		}
		if (((unk_0x5EB102898326C705(unk_0x16F2683693E537C9()) || unk_0xBADF5264209B7544(unk_0x16F2683693E537C9())) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4FB00DDF9C0D8114(unk_0x16F2683693E537C9()))
		{
			return 0x00000000;
		}
		if (Global_1B05E)
		{
			return 0x00000000;
		}
	}
	if (Global_12B4E)
	{
		return 0x00000000;
	}
	iVar2 = 0x00000000;
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 0x00000004 && (iVar0 == 0x00000000 || unk_0x00295B14470935CE()))
	{
		iVar2 = 0x00000001;
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iVar3 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				if ((((((((unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar3)) || unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iVar3))) || unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(iVar3))) || unk_0x134B62B726CEC8E6(iVar3) == joaat("seashark")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("seashark2")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("rhino")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("submersible")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("submersible2")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("toro"))
				{
					iVar2 = 0x00000000;
				}
			}
		}
	}
	if (Global_4127DB || iVar2 == 0x00000001)
	{
		if (unk_0x8A22C4C08282BF26(joaat("apptrackify")) > 0x00000000 || Global_1B416.f_36DE.f_59)
		{
			if (unk_0x8A22C4C08282BF26(joaat("michael2")) > 0x00000000)
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
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_73()
{
	float fVar0;
	
	fVar0 = func_69(vLocal_47, vLocal_48, Global_4BF6, -90f, 0f, 90f, 350f, 0x00000000);
	if (Global_1FE0 == 0x00000000)
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (!func_74())
			{
				unk_0x2BF9F8AAD637763A((500f + (75f * fVar0)));
			}
		}
		else
		{
			unk_0x2BF9F8AAD637763A((500f + (75f * fVar0)));
		}
	}
	if (fVar0 >= 1f)
	{
		func_1(0x00000001);
		Global_554F = 0x00000000;
		iLocal_18 = 0x00000000;
	}
}

int func_74()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 0x00000004)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_75(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		unk_0xA402F6C87C08815C(0x00000009, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(0x0000007E, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_SOFT_KEYS");
		unk_0x3CAEA85DA607305E(0x00000001);
		unk_0x1200CC973A2399C8(0x00000001);
		unk_0x3CAEA85DA607305E(0x00000010);
		unk_0x7E60D21B163E9D56();
	}
	else
	{
		unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_SOFT_KEYS");
		unk_0x3CAEA85DA607305E(0x00000001);
		unk_0x1200CC973A2399C8(0x00000000);
		unk_0x3CAEA85DA607305E(0x00000010);
		unk_0x7E60D21B163E9D56();
	}
}

void func_76(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		unk_0xA402F6C87C08815C(0x00000006, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(0x00000006, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_SOFT_KEYS");
		unk_0x3CAEA85DA607305E(0x00000003);
		unk_0x1200CC973A2399C8(0x00000001);
		unk_0x3CAEA85DA607305E(0x00000004);
		unk_0x7E60D21B163E9D56();
	}
	else
	{
		unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_SOFT_KEYS");
		unk_0x3CAEA85DA607305E(0x00000003);
		unk_0x1200CC973A2399C8(0x00000000);
		unk_0x3CAEA85DA607305E(0x00000004);
		unk_0x7E60D21B163E9D56();
	}
}

void func_77(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		unk_0xA402F6C87C08815C(0x00000012, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(0x00000009, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (bParam0)
	{
		unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_SOFT_KEYS");
		unk_0x3CAEA85DA607305E(0x00000002);
		unk_0x1200CC973A2399C8(0x00000001);
		unk_0x3CAEA85DA607305E(0x00000002);
		unk_0x7E60D21B163E9D56();
	}
	else
	{
		unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_SOFT_KEYS");
		unk_0x3CAEA85DA607305E(0x00000002);
		unk_0x1200CC973A2399C8(0x00000000);
		unk_0x3CAEA85DA607305E(0x00000002);
		unk_0x7E60D21B163E9D56();
	}
}

int func_78()
{
	func_79();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_79()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_82(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_81(unk_0x16F2683693E537C9());
			if (func_80(iVar0) && (!func_15(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_80(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_80(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_82(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_82(int iParam0)
{
	if (func_80(iParam0))
	{
		return func_83(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_83(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

