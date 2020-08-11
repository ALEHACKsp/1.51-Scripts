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
	int iLocal_19[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<6> Local_49[165];
	struct<6> Local_50[165];
	struct<8> Local_51[19];
	int iLocal_52 = 0;
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
	unk_0xB57F88F0123F4C38();
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
	{
		func_53();
	}
	func_46();
	Global_556F = 0x00000000;
	Global_1B416.f_36DE[Global_4C1E /*20*/].f_12 = 0x00000000;
	Global_4CCF = 0x00000000;
	func_45(Global_4C0B, "SET_DATA_SLOT_EMPTY", 6f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_43();
	func_42();
	if (Global_4C1E.f_1 > 0x00000003)
	{
		Global_4C1E.f_1 = 0x00000007;
	}
	iLocal_30 = unk_0x1C0640BA9A7327B3();
	Global_4C22 = 0x00000001;
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (iLocal_29 == 0x00000000)
		{
			iLocal_31 = unk_0x1C0640BA9A7327B3();
			if ((iLocal_31 - iLocal_30) > 0x000001F4)
			{
				iLocal_29 = 0x00000001;
			}
		}
		if (Global_4C1E.f_1 != 0x00000009)
		{
			switch (Global_4C1E.f_1)
			{
				case 0x00000007:
					if (Global_556F == 0x00000000)
					{
						if (Global_26DD73 == 0x00000000)
						{
							func_37();
							func_33();
						}
					}
					break;
				
				case 0x00000008:
					if (Global_556F == 0x00000001)
					{
						func_5();
						func_37();
					}
					break;
				
				default:
					break;
			}
			if (Global_556F == 0x00000000)
			{
				if (func_4())
				{
					func_53();
				}
			}
			else if (func_3(0x00000002, Global_4BFE, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000000C))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iLocal_23 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0x00000000);
					unk_0x0674E58A79778E99(&Global_1CBD, 0x0000000C);
					func_2();
					Global_4C08 = 0x00000001;
					Global_556F = 0x00000000;
					if (Global_4C1E.f_1 > 0x00000003)
					{
						Global_4C1E.f_1 = 0x00000007;
					}
					if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
					{
						func_53();
					}
					func_45(Global_4C0B, "SET_DATA_SLOT_EMPTY", 6f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
					func_43();
					func_42();
					if (Global_1B416.f_3738[iLocal_23 /*104*/].f_1D > 0x00000000)
					{
						if (Global_1B416.f_3738[iLocal_23 /*104*/].f_1F == 0x00000001)
						{
							Global_1B416.f_3738[iLocal_23 /*104*/].f_1D = 0x00000004;
							Global_1B416.f_3738[iLocal_23 /*104*/].f_18 = 0x00000001;
						}
						else
						{
							Global_1B416.f_3738[iLocal_23 /*104*/].f_1D = 0x00000004;
							Global_1B416.f_3738[iLocal_23 /*104*/].f_18 = 0x00000001;
						}
					}
				}
			}
		}
		if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
		{
			func_53();
		}
		if (func_1())
		{
			func_53();
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
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Back", &Global_4C13, 0x00000001);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xBFC0798A6E3417F9(iParam0, iParam1) || (iParam2 == 0x00000001 && unk_0xD245978525608929(iParam0, iParam1)))
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0xDAC65F45B0B2D176() == 0x00000000 || (unk_0x4FD68D5821EE3E19() && unk_0x91E3F625EF57450D(0x00000002)))
			{
				return 0x00000000;
			}
		}
		if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_4()
{
	if (Global_1F1A == 0x00000001 || Global_4C1E.f_1 < 0x00000007)
	{
		Global_4C11 = 0x00000001;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_5()
{
	func_6();
}

void func_6()
{
	if (Global_1B416.f_3738[iLocal_23 /*104*/].f_18 == 0x00000001)
	{
		if (Global_4C08 == 0x00000000)
		{
			if (unk_0xBFC0798A6E3417F9(0x00000002, Global_4C01))
			{
				func_2();
				Global_4C08 = 0x00000001;
				func_26();
				if (Global_1B416.f_3738[iLocal_23 /*104*/].f_1B == 0x00000001)
				{
					Global_1B416.f_3738[iLocal_23 /*104*/].f_63[0x00000000] = 0x00000000;
					Global_1B416.f_3738[iLocal_23 /*104*/].f_63[0x00000001] = 0x00000000;
					Global_1B416.f_3738[iLocal_23 /*104*/].f_63[0x00000002] = 0x00000000;
				}
				else
				{
					Global_1B416.f_3738[iLocal_23 /*104*/].f_63[Global_4C1E] = 0x00000000;
				}
				if (func_25(iLocal_23))
				{
				}
				else
				{
					Global_1B416.f_3738[iLocal_23 /*104*/].f_18 = 0x00000000;
					Global_1B416.f_3738[iLocal_23 /*104*/].f_1C = 0x00000000;
				}
				unk_0xD59AE843FA2C6B40(Global_1B416.f_3738[iLocal_23 /*104*/].f_10);
				func_45(Global_4C0B, "SET_DATA_SLOT_EMPTY", 6f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_43();
				if (iLocal_21 > 0x00000000)
				{
					iLocal_21 = (iLocal_21 - 0x00000001);
				}
				func_42();
				if (Global_4C1E.f_1 > 0x00000003)
				{
					Global_4C1E.f_1 = 0x00000007;
					Global_556F = 0x00000000;
				}
			}
		}
	}
	else if (Global_4C08 == 0x00000000)
	{
		if (unk_0x06F8112AA79C53D9(0x00000002, Global_4C02))
		{
			if (iLocal_25 == 0x00000001)
			{
				if (Global_4C1E.f_1 > 0x00000003)
				{
					StringCopy(&Global_12051, unk_0x19C9F30A7697B43C(&Global_5556), 64);
					Global_120D2 = 0x00000007;
					unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000A);
					Global_4C1E.f_1 = 0x00000006;
				}
				func_53();
			}
		}
	}
	if (Global_1B416.f_3738[iLocal_23 /*104*/].f_1F == 0x00000001)
	{
		if (Global_4C08 == 0x00000000)
		{
			if (func_3(0x00000002, Global_4C02, 0x00000000))
			{
				func_22();
				Global_4C08 = 0x00000001;
				Global_1B416.f_3738[iLocal_23 /*104*/].f_1D = 0x00000002;
				Global_1B416.f_3738[iLocal_23 /*104*/].f_18 = 0x00000001;
				Global_1B416.f_3738[iLocal_23 /*104*/].f_1F = 0x00000000;
				unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
				Global_556F = 0x00000000;
				if (Global_4C1E.f_1 > 0x00000003)
				{
					Global_4C1E.f_1 = 0x00000007;
				}
				func_45(Global_4C0B, "SET_DATA_SLOT_EMPTY", 6f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_43();
				func_42();
			}
		}
	}
	if (Global_4C08 == 0x00000000 && iLocal_29 == 0x00000001)
	{
		if (func_3(0x00000002, Global_4BFF, 0x00000000))
		{
			Global_4C08 = 0x00000001;
			if (Global_1B416.f_3738[iLocal_23 /*104*/].f_1D > 0x00000000)
			{
				func_22();
				Global_1B416.f_3738[iLocal_23 /*104*/].f_1D = 0x00000003;
				Global_1B416.f_3738[iLocal_23 /*104*/].f_18 = 0x00000001;
				Global_556F = 0x00000000;
				if (Global_4C1E.f_1 > 0x00000003)
				{
					Global_4C1E.f_1 = 0x00000007;
				}
				func_45(Global_4C0B, "SET_DATA_SLOT_EMPTY", 6f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_43();
				func_42();
			}
			else if (Global_1B416.f_3738[iLocal_23 /*104*/].f_1E == 0x00000001)
			{
				func_22();
				Global_1A0F = 0x00000090;
				if (Global_4C1E.f_1 > 0x00000003)
				{
					Global_4C1E.f_1 = 0x0000000A;
					if (func_21() == 0x00000000)
					{
						func_19();
					}
				}
				func_18("appContacts");
				Global_4C1C = SYSTEM::START_NEW_SCRIPT("appContacts", 0x00000FA0);
				unk_0x5E8C29AE121DF1C7("appContacts");
				Global_1A0F = Global_1B416.f_3738[iLocal_23 /*104*/].f_11;
				if (func_17(Global_1A0F, Global_4C1E) == 0x00000000)
				{
					func_16(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000003), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0x00000000);
				}
				else
				{
					func_16(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000003), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), "CELL_211", &(Global_706[Global_1A0F /*29*/].f_3), 0x00000000);
				}
				func_7();
				func_53();
			}
		}
	}
}

void func_7()
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
			func_45(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_14(Global_1F19);
			if (Global_1F19 == 0x00000001)
			{
				func_45(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C22), 0xBF800000, 0xBF800000, 0xBF800000);
				Global_4C0A = Global_4C22;
			}
			else
			{
				func_45(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C23), 0xBF800000, 0xBF800000, 0xBF800000);
				Global_4C0A = Global_4C23;
			}
			if (Global_4C12)
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (Global_4CD2 == 0x00000000)
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			}
			else if (Global_12B4E)
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			}
			else
			{
				if (Global_4CD1 == 0x00000001)
				{
					if (Global_4C12)
					{
						func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (Global_4C12)
				{
					func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
			}
			if (Global_12B4E)
			{
				func_12();
				unk_0x0674E58A79778E99(&Global_1CBE, 0x00000009);
				func_45(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C22), 0xBF800000, 0xBF800000, 0xBF800000);
			}
			break;
		
		case 0x00000007:
			break;
		
		case 0x0000000A:
			func_45(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				if (Global_4BE5)
				{
					func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			else
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			break;
		
		case 0x00000009:
			if (Global_4C1D == 0x00000001)
			{
				func_11();
				func_45(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				if (Global_5152)
				{
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000004);
					unk_0x3CAEA85DA607305E(0x00000000);
					unk_0x3CAEA85DA607305E(0x00000002);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_5154);
					unk_0x779B34565F4D71B1();
					func_10("CELL_300");
					func_10("CELL_217");
					func_10("CELL_217");
					unk_0x7E60D21B163E9D56();
				}
				else if (func_17(Global_1A0F, Global_4C1E) == 0x00000000)
				{
					func_16(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000002), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0x00000000);
				}
				else
				{
					func_16(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000002), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), "CELL_217", &(Global_706[Global_1A0F /*29*/].f_3), 0x00000000);
				}
				func_45(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
			else if (Global_5145 == 0x00000004 || Global_5145 == 0x00000003)
			{
				func_45(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_11();
				if (Global_5152)
				{
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000004);
					unk_0x3CAEA85DA607305E(0x00000000);
					unk_0x3CAEA85DA607305E(0x00000002);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_5154);
					unk_0x779B34565F4D71B1();
					func_10("CELL_300");
					func_10("CELL_219");
					func_10("CELL_219");
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
					if (func_17(Global_1A0F, Global_4C1E) == 0x00000000)
					{
						func_45(Global_4C0B, "SET_DATA_SLOT_EMPTY", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						func_16(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000003), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0x00000000);
					}
					else
					{
						func_45(Global_4C0B, "SET_DATA_SLOT_EMPTY", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						func_16(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000003), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), &cVar0, &(Global_706[Global_1A0F /*29*/].f_3), 0x00000000);
					}
				}
				func_45(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
			func_8();
			break;
		
		default:
			break;
	}
}

void func_8()
{
	if (unk_0x83D8570832F172A7(Global_4C0B))
	{
		func_9();
		if (Global_4C1D == 0x00000001)
		{
			if (Global_4C12)
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (Global_5174)
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
		}
		else
		{
			func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				if (Global_4BE5)
				{
					func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			else
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
	}
}

void func_9()
{
	if (Global_12B4E)
	{
		func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
	}
}

void func_10(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_11()
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

void func_12()
{
	if (Global_12B4E)
	{
		if (func_13() == 0x00000000)
		{
			return;
		}
		func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
	}
}

int func_13()
{
	return 0x00000000;
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
								func_10(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 0x0000000E)
								{
									func_16(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
								func_16(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_16(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_16(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							else if (iVar1 == 0x0000000E)
							{
								func_16(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000014)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_10(&(Global_1CC3[iVar1 /*15*/]));
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
								func_10(&(Global_1CC3[iVar1 /*15*/]));
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
								func_10(&(Global_1CC3[iVar1 /*15*/]));
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
								func_10(&(Global_1CC3[iVar1 /*15*/]));
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
								func_10(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 0x00000039 && iVar1 == 0x00000017)
							{
								iVar9 = 0x00000000;
								iVar9 = Global_18D301.f_1;
								func_16(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_16(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0x00000000), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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

void func_16(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_10(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_10(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_10(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_10(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_10(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
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
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_20() && unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar1 = 0x00000001;
		}
	}
	if (!Global_12B4E)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && iVar1 == 0x00000000)
		{
			iVar2 = unk_0x98F1B512A2CC07C5(unk_0x16F2683693E537C9(), 0x00000000);
			if (Global_12B4E)
			{
				if (((((iVar2 == 0x0000000F || iVar2 == 0x00000010) || iVar2 == 0x00000011) || iVar2 == 0x00000012) || iVar2 == 0x00000013) || unk_0xDCCE25EA1C1D1F76(unk_0x16F2683693E537C9()))
				{
					iVar0 = 0x00000001;
				}
			}
			else if (unk_0xDCCE25EA1C1D1F76(unk_0x16F2683693E537C9()))
			{
				iVar0 = 0x00000001;
			}
			if (!Global_4BE5)
			{
				if (Global_1A0F != 0x00000080)
				{
					if (iVar0 == 0x00000000)
					{
						if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
							}
							else
							{
								if (Global_12B4E)
								{
									unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000F4, 0x00000000);
									unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000F3, 0x00000000);
									unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000F2, 0x00000000);
								}
								unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000000B);
								unk_0x8D4C354BB8991817(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001);
							}
						}
					}
				}
			}
		}
	}
}

int func_20()
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

int func_21()
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

void func_22()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Accept", &Global_4C13, 0x00000001);
		func_23();
	}
}

void func_23()
{
	if (func_24())
	{
		unk_0x5A963FB0365294C8(0x00000005);
	}
}

int func_24()
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

int func_25(int iParam0)
{
	if ((Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000000] == 0x00000001 || Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000001] == 0x00000001) || Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000002] == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_26()
{
	if (func_15(0x0000000E))
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
		Global_4C1E = func_27();
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

var func_27()
{
	func_28();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_28()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_31(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_30(unk_0x16F2683693E537C9());
			if (func_29(iVar0) && (!func_15(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_29(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_29(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_31(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_31(int iParam0)
{
	if (func_29(iParam0))
	{
		return func_32(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_32(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_33()
{
	struct<16> Var0;
	char* sVar1;
	int iVar2;
	
	if (Global_4C08 == 0x00000000)
	{
		if ((func_3(0x00000002, Global_4BFF, 0x00000000) || Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 == 0x00000001) || Global_5569 == 0x00000001)
		{
			if (Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 == 0x00000000 && Global_5569 == 0x00000000)
			{
				func_22();
			}
			Global_4C08 = 0x00000001;
			iLocal_29 = 0x00000000;
			iLocal_23 = iLocal_19[iLocal_21];
			if (Global_1B416.f_3738[iLocal_23 /*104*/].f_18 != 0x00000000)
			{
				if (Global_4C1E.f_1 > 0x00000003)
				{
					func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
					Global_4C1E.f_1 = 0x00000008;
				}
				if (Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 == 0x00000001 || Global_5569 == 0x00000001)
				{
					iLocal_23 = iLocal_19[0x00000000];
					iLocal_22 = 0x00000000;
					if (Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 == 0x00000001)
					{
					}
					Global_5569 = 0x00000000;
				}
				else
				{
					SYSTEM::SETTIMERB(0x00000000);
					iLocal_27 = 0x00000000;
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
					uLocal_32 = unk_0x7A8BB56B212464AC();
					while (!unk_0xC95D7AEEDEF4946B(uLocal_32) && iLocal_27 == 0x00000000)
					{
						SYSTEM::WAIT(0x00000000);
						if (SYSTEM::TIMERB() > 0x000007D0)
						{
							iLocal_27 = 0x00000001;
						}
					}
					if (iLocal_27 == 0x00000001)
					{
						iLocal_28 = 0x00000000;
					}
					else
					{
						iLocal_28 = unk_0xA52833FE33F41C53(uLocal_32);
					}
					if (iLocal_28 < 0x00000000)
					{
						iLocal_28 = 0x00000000;
					}
					iLocal_23 = iLocal_19[iLocal_28];
					iLocal_22 = iLocal_28;
				}
				Global_1B416.f_3738[iLocal_23 /*104*/].f_1C = 0x00000001;
				iLocal_25 = 0x00000000;
				StringCopy(&Global_5556, "NO_HYPERLINK", 64);
				Var0 = { Global_1B416.f_3738[iLocal_23 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0xEF07223F00EBE9C9(&Var0))
				{
					Global_5556 = { Var0 };
					iLocal_25 = 0x00000001;
					if (Global_4C12)
					{
						func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
					Global_1B416.f_3738[iLocal_23 /*104*/].f_1A = 0x00000001;
					Global_1B416.f_3738[iLocal_23 /*104*/].f_18 = 0x00000002;
				}
				if (Global_1B416.f_3738[iLocal_23 /*104*/].f_1A == 0x00000000)
				{
					Global_1B416.f_3738[iLocal_23 /*104*/].f_18 = 0x00000001;
				}
				func_36();
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000007);
				unk_0x3CAEA85DA607305E(0x00000000);
				if (Global_1B416.f_3738[iLocal_23 /*104*/].f_11 == 0x00000091)
				{
					unk_0x7ACC3006A87F8B39("CELL_2000");
					unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_32));
					unk_0x779B34565F4D71B1();
				}
				else
				{
					func_10(&(Global_706[Global_1B416.f_3738[iLocal_23 /*104*/].f_11 /*29*/].f_3));
				}
				switch (Global_1B416.f_3738[iLocal_23 /*104*/].f_20)
				{
					case 0x00000000:
						func_10(&(Global_1B416.f_3738[iLocal_23 /*104*/]));
						break;
					
					case 0x00000001:
						unk_0x7ACC3006A87F8B39(&(Global_1B416.f_3738[iLocal_23 /*104*/]));
						unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_21));
						if (Global_1B416.f_3738[iLocal_23 /*104*/].f_42 == 0x00000001 && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_43), "NULL"))
						{
							unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_43));
						}
						if ((Global_1B416.f_3738[iLocal_23 /*104*/].f_42 == 0x00000002 && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_43), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_53), "NULL"))
						{
							if (unk_0xEF07223F00EBE9C9(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_43)))
							{
								unk_0x6B012227B3921E18(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_43));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_43));
							}
							if (unk_0xEF07223F00EBE9C9(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_53)))
							{
								unk_0x6B012227B3921E18(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_53));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_53));
							}
						}
						unk_0x779B34565F4D71B1();
						break;
					
					case 0x00000002:
						unk_0x7ACC3006A87F8B39(&(Global_1B416.f_3738[iLocal_23 /*104*/]));
						unk_0x6D99DF8263D35CE5(Global_1B416.f_3738[iLocal_23 /*104*/].f_31);
						unk_0x779B34565F4D71B1();
						break;
					
					case 0x00000003:
						unk_0x7ACC3006A87F8B39(&(Global_1B416.f_3738[iLocal_23 /*104*/]));
						unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_21));
						unk_0x6D99DF8263D35CE5(Global_1B416.f_3738[iLocal_23 /*104*/].f_31);
						if (Global_1B416.f_3738[iLocal_23 /*104*/].f_42 == 0x00000001 && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_43), "NULL"))
						{
							unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_43));
						}
						if ((Global_1B416.f_3738[iLocal_23 /*104*/].f_42 == 0x00000002 && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_43), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_53), "NULL"))
						{
							if (unk_0xEF07223F00EBE9C9(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_43)))
							{
								unk_0x6B012227B3921E18(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_43));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_43));
							}
							if (unk_0xEF07223F00EBE9C9(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_53)))
							{
								unk_0x6B012227B3921E18(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_53));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iLocal_23 /*104*/].f_53));
							}
						}
						unk_0x779B34565F4D71B1();
						break;
					
					case 0x00000004:
						func_35(iLocal_23);
						break;
					
					case 0x00000005:
						func_35(iLocal_23);
						break;
					
					case 0x00000006:
						func_35(iLocal_23);
						break;
					
					case 0x00000007:
						func_35(iLocal_23);
						break;
					
					case 0x00000008:
						func_35(iLocal_23);
						break;
					
					case 0x00000009:
						func_35(iLocal_23);
						break;
					
					case 0x0000000A:
						func_35(iLocal_23);
						break;
					
					case 0x0000000B:
						func_35(iLocal_23);
						break;
				}
				if (Global_5572[iLocal_23] == 0x00000000)
				{
					if (Global_1B416.f_3738[iLocal_23 /*104*/].f_11 == 0x0000009F)
					{
						func_10("CELL_COMIC_P");
					}
					else
					{
						func_10(&(Global_706[Global_1B416.f_3738[iLocal_23 /*104*/].f_11 /*29*/].f_7));
					}
				}
				else
				{
					if (unk_0x0E66AEE1894BB411(Global_5572[iLocal_23]))
					{
						if (unk_0x0A53A8B5FA0B3F4D(Global_5572[iLocal_23]))
						{
							sVar1 = unk_0x5283D58F79627134(Global_5572[iLocal_23]);
						}
						else
						{
							sVar1 = "CHAR_DEFAULT";
						}
					}
					else
					{
						sVar1 = "CHAR_DEFAULT";
					}
					unk_0x7ACC3006A87F8B39("CELL_2000");
					unk_0xD06AC7C87A34A6AD(sVar1);
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
				Global_556F = 0x00000001;
				func_45(Global_4C0B, "DISPLAY_VIEW", 7f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_34(Global_4C0B, "SET_HEADER", "CELL_1", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xD59AE843FA2C6B40(Global_1B416.f_3738[iLocal_23 /*104*/].f_10);
				if (Global_1B416.f_3738[iLocal_23 /*104*/].f_1D > 0x00000000)
				{
					if (Global_4C12)
					{
						func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (Global_1B416.f_3738[iLocal_23 /*104*/].f_1E == 0x00000001)
				{
					if (Global_4C12)
					{
						func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else
				{
					func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				if (Global_1B416.f_3738[iLocal_23 /*104*/].f_1D > 0x00000000)
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iLocal_23 /*104*/]), "CELL_FINV"))
					{
						if (Global_4C12)
						{
							func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					else if (Global_4C12)
					{
						func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (Global_4C12)
				{
					func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				if (Global_1B416.f_3738[iLocal_23 /*104*/].f_18 == 0x00000002)
				{
					if (Global_1B416.f_3738[iLocal_23 /*104*/].f_1F == 0x00000001)
					{
						iLocal_25 = 0x00000000;
						if (Global_4C12)
						{
							func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
					}
					else if (iLocal_25 == 0x00000000)
					{
						func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
					}
				}
				else if (Global_4C12)
				{
					func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
				}
				else
				{
					func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
				}
				Global_1B416.f_36DE[Global_4C1E /*20*/].f_12 = 0x00000000;
				Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 = 0x00000000;
			}
			else
			{
				iVar2 = 0x00000000;
				if (Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 == 0x00000001 || Global_5569 == 0x00000001)
				{
					if (Global_5569)
					{
					}
					iVar2 = 0x00000001;
				}
				Global_1B416.f_36DE[Global_4C1E /*20*/].f_12 = 0x00000000;
				Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 = 0x00000000;
				if (iVar2 == 0x00000001)
				{
					iVar2 = 0x00000000;
					Global_4C1E.f_1 = 0x00000003;
				}
			}
		}
		if (Global_26DD73 == 0x00000000)
		{
			if (Global_12B4E)
			{
				unk_0x558EC149EB2BC0A2(0x00000000, Global_4C02);
				if (func_3(0x00000002, Global_4C02, 0x00000000))
				{
					Global_4C08 = 0x00000001;
					Global_26DD73 = 0x00000001;
				}
			}
		}
	}
}

void func_34(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_10(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_10(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_10(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_10(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_10(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	switch (Global_1B416.f_3738[iParam0 /*104*/].f_31)
	{
		case 0x00000001:
			unk_0x7ACC3006A87F8B39("CELL_CL01");
			break;
		
		case 0x00000002:
			unk_0x7ACC3006A87F8B39("CELL_CL02");
			break;
		
		case 0x00000003:
			unk_0x7ACC3006A87F8B39("CELL_CL03");
			break;
		
		case 0x00000004:
			unk_0x7ACC3006A87F8B39("CELL_CL04");
			break;
		
		case 0x00000005:
			unk_0x7ACC3006A87F8B39("CELL_CL05");
			break;
		
		case 0x00000006:
			unk_0x7ACC3006A87F8B39("CELL_CL06");
			break;
		
		case 0x00000007:
			unk_0x7ACC3006A87F8B39("CELL_CL07");
			break;
		
		case 0x00000008:
			unk_0x7ACC3006A87F8B39("CELL_CL08");
			break;
		
		case 0x00000009:
			unk_0x7ACC3006A87F8B39("CELL_CL09");
			break;
	}
	unk_0x6B012227B3921E18(&(Global_1B416.f_3738[iParam0 /*104*/]));
	while (iVar0 < Global_1B416.f_3738[iParam0 /*104*/].f_31)
	{
		switch (Global_1B416.f_3738[iParam0 /*104*/].f_20)
		{
			case 0x00000004:
				unk_0x6B012227B3921E18(&(Global_26B66F.f_67E[iVar0 /*4*/]));
				break;
			
			case 0x00000005:
				unk_0x6B012227B3921E18(&(Global_195C42[iVar0 /*4*/]));
				break;
			
			case 0x00000006:
				unk_0x6B012227B3921E18(&(Global_195C6B[iVar0 /*4*/]));
				break;
			
			case 0x00000007:
				unk_0x6B012227B3921E18(&(Global_195C80[iVar0 /*4*/]));
				break;
			
			case 0x00000008:
				unk_0x6B012227B3921E18(&(Global_195C91[iVar0 /*4*/]));
				break;
			
			case 0x00000009:
				unk_0x6B012227B3921E18(&(Global_195C9E[iVar0 /*4*/]));
				break;
			
			case 0x0000000A:
				unk_0x6B012227B3921E18(&(Global_195CAB[iVar0 /*4*/]));
				break;
			
			case 0x0000000B:
				unk_0x6B012227B3921E18(&(Global_195CB8[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x779B34565F4D71B1();
}

void func_36()
{
	int iVar0;
	
	if (iLocal_52)
	{
		unk_0xF5A41F3D3B38EFE3(&uLocal_33);
	}
	iLocal_52 = 0x00000000;
	if (Global_1B416.f_3738[iLocal_23 /*104*/].f_18 != 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x000000A5)
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iLocal_23 /*104*/]), &(Local_49[iVar0 /*6*/])))
			{
				if (iVar0 < 0x00000013)
				{
					MemCopy(&uLocal_33, {Local_51[iVar0 /*8*/]}, 0x00000010);
				}
				else
				{
					MemCopy(&uLocal_33, {Local_50[iVar0 /*6*/]}, 0x00000010);
				}
				iLocal_52 = 0x00000001;
				unk_0x0D3BE1DE0262A012(&uLocal_33, 0x00000000);
				while (!unk_0x27117E2CDD4D67C3(&uLocal_33))
				{
					SYSTEM::WAIT(0x00000064);
				}
			}
			iVar0++;
		}
	}
}

void func_37()
{
	if (iLocal_26)
	{
		if (SYSTEM::TIMERA() > 0x00000032)
		{
			iLocal_26 = 0x00000000;
		}
	}
	if (iLocal_26 == 0x00000000)
	{
		if (func_3(0x00000002, Global_4C06, 0x00000000) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B5))
		{
			if (iLocal_21 > 0x00000000)
			{
				iLocal_21 = (iLocal_21 - 0x00000001);
			}
			func_40();
			iLocal_26 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
		if (func_3(0x00000002, Global_4C07, 0x00000000) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000B4))
		{
			iLocal_21++;
			if (iLocal_21 == iLocal_20)
			{
				iLocal_21 = 0x00000000;
			}
			func_38();
			iLocal_26 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
	}
}

void func_38()
{
	func_45(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(0x00000003), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
	func_39();
}

void func_39()
{
	if (func_24())
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

void func_40()
{
	func_45(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(0x00000001), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
	func_41();
}

void func_41()
{
	if (func_24())
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

void func_42()
{
	if (Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 == 0x00000000)
	{
		if (iLocal_22 < 0x00000000)
		{
			iLocal_22 = 0x00000000;
		}
		func_45(Global_4C0B, "DISPLAY_VIEW", 6f, SYSTEM::TO_FLOAT(iLocal_22), 0xBF800000, 0xBF800000, 0xBF800000);
		func_34(Global_4C0B, "SET_HEADER", "CELL_1", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		if (Global_4C12)
		{
			if (iLocal_20 > 0x00000000)
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		else
		{
			if (iLocal_20 > 0x00000000)
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_16(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			func_16(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		if (Global_12B4E)
		{
			func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
		}
		else
		{
			func_16(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
		}
	}
	else
	{
		iLocal_22 = 0x00000000;
	}
}

void func_43()
{
	int iVar0[35];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_20 = 0x00000000;
	func_26();
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000022)
	{
		if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
		{
			func_53();
		}
		iVar2 = 0x00000000;
		iVar3 = 0x00000022;
		Global_1B416.f_3738[iVar3 /*104*/].f_12 = 0xFFFFFFFF;
		Global_1B416.f_3738[iVar3 /*104*/].f_12.f_1 = 0x00000000;
		Global_1B416.f_3738[iVar3 /*104*/].f_12.f_2 = 0x00000000;
		Global_1B416.f_3738[iVar3 /*104*/].f_12.f_3 = 0x00000000;
		Global_1B416.f_3738[iVar3 /*104*/].f_12.f_5 = 0x00000000;
		while (iVar2 < 0x00000023)
		{
			if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
			{
				func_53();
			}
			if (iVar0[iVar2] == 0x00000000)
			{
				if (Global_1B416.f_3738[iVar2 /*104*/].f_18 != 0x00000000)
				{
					if (Global_1B416.f_3738[iVar2 /*104*/].f_63[Global_4C1E] == 0x00000001)
					{
						if (func_44(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[iVar3 /*104*/].f_12))
						{
							iVar3 = iVar2;
							if (Global_1B416.f_3738[iVar3 /*104*/].f_1C == 0x00000000)
							{
								iLocal_24 = 0x00000021;
							}
							else
							{
								iLocal_24 = 0x00000022;
							}
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_19[iVar1] = iVar3;
		iVar0[iVar3] = 0x00000001;
		if (Global_1B416.f_3738[iVar3 /*104*/].f_18 != 0x00000000)
		{
			if (Global_1B416.f_3738[iVar3 /*104*/].f_63[Global_4C1E] == 0x00000001)
			{
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000006);
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x3CAEA85DA607305E(Global_1B416.f_3738[iVar3 /*104*/].f_12.f_2);
				unk_0x3CAEA85DA607305E(Global_1B416.f_3738[iVar3 /*104*/].f_12.f_1);
				unk_0x3CAEA85DA607305E(iLocal_24);
				if (Global_1B416.f_3738[iVar3 /*104*/].f_11 == 0x00000091)
				{
					unk_0x7ACC3006A87F8B39("CELL_CONDFNH");
					unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iVar3 /*104*/].f_32));
					unk_0x779B34565F4D71B1();
				}
				else
				{
					func_10(&(Global_706[Global_1B416.f_3738[iVar3 /*104*/].f_11 /*29*/].f_3));
				}
				switch (Global_1B416.f_3738[iVar3 /*104*/].f_20)
				{
					case 0x00000000:
						func_10(&(Global_1B416.f_3738[iVar3 /*104*/]));
						break;
					
					case 0x00000001:
						unk_0x7ACC3006A87F8B39(&(Global_1B416.f_3738[iVar3 /*104*/]));
						unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iVar3 /*104*/].f_21));
						if (Global_1B416.f_3738[iVar3 /*104*/].f_42 == 0x00000001 && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iVar3 /*104*/].f_43), "NULL"))
						{
							unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iVar3 /*104*/].f_43));
						}
						if ((Global_1B416.f_3738[iVar3 /*104*/].f_42 == 0x00000002 && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iVar3 /*104*/].f_43), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iVar3 /*104*/].f_53), "NULL"))
						{
							if (unk_0xEF07223F00EBE9C9(&(Global_1B416.f_3738[iVar3 /*104*/].f_43)))
							{
								unk_0x6B012227B3921E18(&(Global_1B416.f_3738[iVar3 /*104*/].f_43));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iVar3 /*104*/].f_43));
							}
							if (unk_0xEF07223F00EBE9C9(&(Global_1B416.f_3738[iVar3 /*104*/].f_53)))
							{
								unk_0x6B012227B3921E18(&(Global_1B416.f_3738[iVar3 /*104*/].f_53));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iVar3 /*104*/].f_53));
							}
						}
						unk_0x779B34565F4D71B1();
						break;
					
					case 0x00000002:
						unk_0x7ACC3006A87F8B39(&(Global_1B416.f_3738[iVar3 /*104*/]));
						unk_0x6D99DF8263D35CE5(Global_1B416.f_3738[iVar3 /*104*/].f_31);
						unk_0x779B34565F4D71B1();
						break;
					
					case 0x00000003:
						unk_0x7ACC3006A87F8B39(&(Global_1B416.f_3738[iVar3 /*104*/]));
						unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iVar3 /*104*/].f_21));
						unk_0x6D99DF8263D35CE5(Global_1B416.f_3738[iVar3 /*104*/].f_31);
						if (Global_1B416.f_3738[iVar3 /*104*/].f_42 == 0x00000001 && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iVar3 /*104*/].f_43), "NULL"))
						{
							unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iVar3 /*104*/].f_43));
						}
						if ((Global_1B416.f_3738[iVar3 /*104*/].f_42 == 0x00000002 && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iVar3 /*104*/].f_43), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iVar3 /*104*/].f_53), "NULL"))
						{
							if (unk_0xEF07223F00EBE9C9(&(Global_1B416.f_3738[iVar3 /*104*/].f_43)))
							{
								unk_0x6B012227B3921E18(&(Global_1B416.f_3738[iVar3 /*104*/].f_43));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iVar3 /*104*/].f_43));
							}
							if (unk_0xEF07223F00EBE9C9(&(Global_1B416.f_3738[iVar3 /*104*/].f_53)))
							{
								unk_0x6B012227B3921E18(&(Global_1B416.f_3738[iVar3 /*104*/].f_53));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[iVar3 /*104*/].f_53));
							}
						}
						unk_0x779B34565F4D71B1();
						break;
					
					case 0x00000004:
						func_35(iVar3);
						break;
					
					case 0x00000005:
						func_35(iVar3);
						break;
					
					case 0x00000006:
						func_35(iVar3);
						break;
					
					case 0x00000007:
						func_35(iVar3);
						break;
					
					case 0x00000008:
						func_35(iVar3);
						break;
					
					case 0x00000009:
						func_35(iVar3);
						break;
					
					case 0x0000000A:
						func_35(iVar3);
						break;
					
					case 0x0000000B:
						func_35(iVar3);
						break;
				}
				unk_0x7E60D21B163E9D56();
			}
		}
		if (Global_1B416.f_3738[iVar1 /*104*/].f_18 != 0x00000000)
		{
			if (Global_1B416.f_3738[iVar1 /*104*/].f_63[Global_4C1E] == 0x00000001)
			{
				iLocal_20++;
			}
		}
		iVar1++;
	}
}

int func_44(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0x00000000;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 0x00000001;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0x00000000;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 0x00000001;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 0x00015180);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 0x00015180);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

void func_45(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_46()
{
	StringCopy(&(Local_49[0x00000000 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_51[0x00000000 /*8*/]), "05_a_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[0x00000001 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_51[0x00000001 /*8*/]), "05_b_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[0x00000002 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_51[0x00000002 /*8*/]), "05_c_sext_stripperJuliet", 32);
	StringCopy(&(Local_49[0x00000003 /*6*/]), "SXT_NIK_1ST", 24);
	StringCopy(&(Local_51[0x00000003 /*8*/]), "06_a_sext_stripperNikki", 32);
	StringCopy(&(Local_49[0x00000004 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_51[0x00000004 /*8*/]), "06_b_sext_stripperNikki", 32);
	StringCopy(&(Local_49[0x00000005 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_51[0x00000005 /*8*/]), "06_c_sext_stripperNikki", 32);
	StringCopy(&(Local_49[0x00000006 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_51[0x00000006 /*8*/]), "08_a_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[0x00000007 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_51[0x00000007 /*8*/]), "08_b_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[0x00000008 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_51[0x00000008 /*8*/]), "08_c_sext_stripperSapphire", 32);
	StringCopy(&(Local_49[0x00000009 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_51[0x00000009 /*8*/]), "04_a_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[0x0000000A /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_51[0x0000000A /*8*/]), "04_b_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[0x0000000B /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_51[0x0000000B /*8*/]), "04_c_sext_stripperInfernus", 32);
	StringCopy(&(Local_49[0x0000000C /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_51[0x0000000C /*8*/]), "11_a_sext_taxiLiz", 32);
	StringCopy(&(Local_49[0x0000000D /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_51[0x0000000D /*8*/]), "11_b_sext_taxiLiz", 32);
	StringCopy(&(Local_49[0x0000000E /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_51[0x0000000E /*8*/]), "11_c_sext_taxiLiz", 32);
	StringCopy(&(Local_49[0x0000000F /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_51[0x0000000F /*8*/]), "10_a_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[0x00000010 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_51[0x00000010 /*8*/]), "10_b_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[0x00000011 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_51[0x00000011 /*8*/]), "10_c_sext_hitcherGirl", 32);
	StringCopy(&(Local_49[0x00000012 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_51[0x00000012 /*8*/]), "executiveproducer", 32);
	StringCopy(&(Local_49[0x00000013 /*6*/]), "LR_PIC_TXT1", 24);
	StringCopy(&(Local_50[0x00000013 /*6*/]), "mt_phone_image_1", 24);
	StringCopy(&(Local_49[0x00000014 /*6*/]), "LR_PIC_TXT2", 24);
	StringCopy(&(Local_50[0x00000014 /*6*/]), "mt_phone_image_2", 24);
	StringCopy(&(Local_49[0x00000015 /*6*/]), "LR_PIC_TXT3", 24);
	StringCopy(&(Local_50[0x00000015 /*6*/]), "mt_phone_image_3", 24);
	StringCopy(&(Local_49[0x00000016 /*6*/]), "LR_PIC_TXT4", 24);
	StringCopy(&(Local_50[0x00000016 /*6*/]), "mt_phone_image_4", 24);
	StringCopy(&(Local_49[0x00000017 /*6*/]), "LR_PIC_TXT5", 24);
	StringCopy(&(Local_50[0x00000017 /*6*/]), "mt_phone_image_5", 24);
	StringCopy(&(Local_49[0x00000018 /*6*/]), "SAD_SMS_0", 24);
	StringCopy(&(Local_50[0x00000018 /*6*/]), "MP_SND_TARGET_01", 24);
	StringCopy(&(Local_49[0x00000019 /*6*/]), "SAD_SMS_1", 24);
	StringCopy(&(Local_50[0x00000019 /*6*/]), "MP_SND_TARGET_02", 24);
	StringCopy(&(Local_49[0x0000001A /*6*/]), "SAD_SMS_2", 24);
	StringCopy(&(Local_50[0x0000001A /*6*/]), "MP_SND_TARGET_03", 24);
	StringCopy(&(Local_49[0x0000001B /*6*/]), "SAD_SMS_3", 24);
	StringCopy(&(Local_50[0x0000001B /*6*/]), "MP_SND_TARGET_04", 24);
	StringCopy(&(Local_49[0x0000001C /*6*/]), "SAD_SMS_4", 24);
	StringCopy(&(Local_50[0x0000001C /*6*/]), "MP_SND_TARGET_05", 24);
	StringCopy(&(Local_49[0x0000001D /*6*/]), "SAD_SMS_5", 24);
	StringCopy(&(Local_50[0x0000001D /*6*/]), "MP_SND_TARGET_06", 24);
	StringCopy(&(Local_49[0x0000001E /*6*/]), "SAD_SMS_6", 24);
	StringCopy(&(Local_50[0x0000001E /*6*/]), "MP_SND_TARGET_07", 24);
	StringCopy(&(Local_49[0x0000001F /*6*/]), "SAD_SMS_7", 24);
	StringCopy(&(Local_50[0x0000001F /*6*/]), "MP_SND_TARGET_08", 24);
	StringCopy(&(Local_49[0x00000020 /*6*/]), "SAD_SMS_8", 24);
	StringCopy(&(Local_50[0x00000020 /*6*/]), "MP_SND_TARGET_09", 24);
	StringCopy(&(Local_49[0x00000021 /*6*/]), "SAD_SMS_9", 24);
	StringCopy(&(Local_50[0x00000021 /*6*/]), "MP_SND_TARGET_10", 24);
	StringCopy(&(Local_49[0x00000022 /*6*/]), "SAD_SMS_10", 24);
	StringCopy(&(Local_50[0x00000022 /*6*/]), "MP_SND_TARGET_11", 24);
	StringCopy(&(Local_49[0x00000023 /*6*/]), "SAD_SMS_11", 24);
	StringCopy(&(Local_50[0x00000023 /*6*/]), "MP_SND_TARGET_12", 24);
	StringCopy(&(Local_49[0x00000024 /*6*/]), "SAD_SMS_12", 24);
	StringCopy(&(Local_50[0x00000024 /*6*/]), "MP_SND_TARGET_13", 24);
	StringCopy(&(Local_49[0x00000025 /*6*/]), "SAD_SMS_13", 24);
	StringCopy(&(Local_50[0x00000025 /*6*/]), "MP_SND_TARGET_14", 24);
	StringCopy(&(Local_49[0x00000026 /*6*/]), "SAD_SMS_14", 24);
	StringCopy(&(Local_50[0x00000026 /*6*/]), "MP_SND_TARGET_15", 24);
	StringCopy(&(Local_49[0x00000027 /*6*/]), "SAD_SMS_15", 24);
	StringCopy(&(Local_50[0x00000027 /*6*/]), "MP_SND_TARGET_16", 24);
	StringCopy(&(Local_49[0x00000028 /*6*/]), "SAD_SMS_16", 24);
	StringCopy(&(Local_50[0x00000028 /*6*/]), "MP_SND_TARGET_17", 24);
	StringCopy(&(Local_49[0x00000029 /*6*/]), "SAD_SMS_17", 24);
	StringCopy(&(Local_50[0x00000029 /*6*/]), "MP_SND_TARGET_18", 24);
	StringCopy(&(Local_49[0x0000002A /*6*/]), "SAD_SMS_18", 24);
	StringCopy(&(Local_50[0x0000002A /*6*/]), "MP_SND_TARGET_19", 24);
	StringCopy(&(Local_49[0x0000002B /*6*/]), "SAD_SMS_19", 24);
	StringCopy(&(Local_50[0x0000002B /*6*/]), "MP_SND_TARGET_20", 24);
	StringCopy(&(Local_49[0x0000002C /*6*/]), "VEX_PM_PHOTO0", 24);
	StringCopy(&(Local_50[0x0000002C /*6*/]), "MP_EX_LOCATION_01", 24);
	StringCopy(&(Local_49[0x0000002D /*6*/]), "VEX_PM_PHOTO1", 24);
	StringCopy(&(Local_50[0x0000002D /*6*/]), "MP_EX_LOCATION_02", 24);
	StringCopy(&(Local_49[0x0000002E /*6*/]), "VEX_PM_PHOTO2", 24);
	StringCopy(&(Local_50[0x0000002E /*6*/]), "MP_EX_LOCATION_03", 24);
	StringCopy(&(Local_49[0x0000002F /*6*/]), "VEX_PM_PHOTO3", 24);
	StringCopy(&(Local_50[0x0000002F /*6*/]), "MP_EX_LOCATION_04", 24);
	StringCopy(&(Local_49[0x00000030 /*6*/]), "VEX_PM_PHOTO4", 24);
	StringCopy(&(Local_50[0x00000030 /*6*/]), "MP_EX_LOCATION_05", 24);
	StringCopy(&(Local_49[0x00000031 /*6*/]), "VEX_PM_PHOTO5", 24);
	StringCopy(&(Local_50[0x00000031 /*6*/]), "MP_EX_LOCATION_06", 24);
	StringCopy(&(Local_49[0x00000032 /*6*/]), "VEX_PM_PHOTO6", 24);
	StringCopy(&(Local_50[0x00000032 /*6*/]), "MP_EX_LOCATION_07", 24);
	StringCopy(&(Local_49[0x00000033 /*6*/]), "VEX_PM_PHOTO7", 24);
	StringCopy(&(Local_50[0x00000033 /*6*/]), "MP_EX_LOCATION_08", 24);
	StringCopy(&(Local_49[0x00000034 /*6*/]), "VEX_PM_PHOTO8", 24);
	StringCopy(&(Local_50[0x00000034 /*6*/]), "MP_EX_LOCATION_09", 24);
	StringCopy(&(Local_49[0x00000035 /*6*/]), "VEX_PM_PHOTO9", 24);
	StringCopy(&(Local_50[0x00000035 /*6*/]), "MP_EX_LOCATION_10", 24);
	StringCopy(&(Local_49[0x00000036 /*6*/]), "VEX_PM_PHOTO10", 24);
	StringCopy(&(Local_50[0x00000036 /*6*/]), "MP_EX_LOCATION_11", 24);
	StringCopy(&(Local_49[0x00000037 /*6*/]), "VEX_PM_PHOTO11", 24);
	StringCopy(&(Local_50[0x00000037 /*6*/]), "MP_EX_LOCATION_12", 24);
	StringCopy(&(Local_49[0x00000038 /*6*/]), "VEX_PM_PHOTO12", 24);
	StringCopy(&(Local_50[0x00000038 /*6*/]), "MP_EX_LOCATION_13", 24);
	StringCopy(&(Local_49[0x00000039 /*6*/]), "VEX_PM_PHOTO13", 24);
	StringCopy(&(Local_50[0x00000039 /*6*/]), "MP_EX_LOCATION_14", 24);
	StringCopy(&(Local_49[0x0000003A /*6*/]), "VEX_1_PROTO", 24);
	StringCopy(&(Local_50[0x0000003A /*6*/]), "IE_TEXTVECH_01", 24);
	StringCopy(&(Local_49[0x0000003B /*6*/]), "VEX_2_PROTO", 24);
	StringCopy(&(Local_50[0x0000003B /*6*/]), "IE_TEXTVECH_02", 24);
	StringCopy(&(Local_49[0x0000003C /*6*/]), "VEX_3_PROTO", 24);
	StringCopy(&(Local_50[0x0000003C /*6*/]), "IE_TEXTVECH_03", 24);
	StringCopy(&(Local_49[0x0000003D /*6*/]), "VEX_4_TYRUS", 24);
	StringCopy(&(Local_50[0x0000003D /*6*/]), "IE_TEXTVECH_04", 24);
	StringCopy(&(Local_49[0x0000003E /*6*/]), "VEX_5_TYRUS", 24);
	StringCopy(&(Local_50[0x0000003E /*6*/]), "IE_TEXTVECH_05", 24);
	StringCopy(&(Local_49[0x0000003F /*6*/]), "VEX_6_TYRUS", 24);
	StringCopy(&(Local_50[0x0000003F /*6*/]), "IE_TEXTVECH_06", 24);
	StringCopy(&(Local_49[0x00000040 /*6*/]), "VEX_7_BESTIA", 24);
	StringCopy(&(Local_50[0x00000040 /*6*/]), "IE_TEXTVECH_07", 24);
	StringCopy(&(Local_49[0x00000041 /*6*/]), "VEX_8_BESTIA", 24);
	StringCopy(&(Local_50[0x00000041 /*6*/]), "IE_TEXTVECH_08", 24);
	StringCopy(&(Local_49[0x00000042 /*6*/]), "VEX_9_BESTIA", 24);
	StringCopy(&(Local_50[0x00000042 /*6*/]), "IE_TEXTVECH_09", 24);
	StringCopy(&(Local_49[0x00000043 /*6*/]), "VEX_10_T20", 24);
	StringCopy(&(Local_50[0x00000043 /*6*/]), "IE_TEXTVECH_10", 24);
	StringCopy(&(Local_49[0x00000044 /*6*/]), "VEX_11_T20", 24);
	StringCopy(&(Local_50[0x00000044 /*6*/]), "IE_TEXTVECH_11", 24);
	StringCopy(&(Local_49[0x00000045 /*6*/]), "VEX_12_T20", 24);
	StringCopy(&(Local_50[0x00000045 /*6*/]), "IE_TEXTVECH_12", 24);
	StringCopy(&(Local_49[0x00000046 /*6*/]), "VEX_13_SHEAVA", 24);
	StringCopy(&(Local_50[0x00000046 /*6*/]), "IE_TEXTVECH_13", 24);
	StringCopy(&(Local_49[0x00000047 /*6*/]), "VEX_14_SHEAVA", 24);
	StringCopy(&(Local_50[0x00000047 /*6*/]), "IE_TEXTVECH_14", 24);
	StringCopy(&(Local_49[0x00000048 /*6*/]), "VEX_15_SHEAVA", 24);
	StringCopy(&(Local_50[0x00000048 /*6*/]), "IE_TEXTVECH_15", 24);
	StringCopy(&(Local_49[0x00000049 /*6*/]), "VEX_16_OSIRIS", 24);
	StringCopy(&(Local_50[0x00000049 /*6*/]), "IE_TEXTVECH_16", 24);
	StringCopy(&(Local_49[0x0000004A /*6*/]), "VEX_17_OSIRIS", 24);
	StringCopy(&(Local_50[0x0000004A /*6*/]), "IE_TEXTVECH_17", 24);
	StringCopy(&(Local_49[0x0000004B /*6*/]), "VEX_18_OSIRIS", 24);
	StringCopy(&(Local_50[0x0000004B /*6*/]), "IE_TEXTVECH_18", 24);
	StringCopy(&(Local_49[0x0000004C /*6*/]), "VEX_19_FMJ", 24);
	StringCopy(&(Local_50[0x0000004C /*6*/]), "IE_TEXTVECH_19", 24);
	StringCopy(&(Local_49[0x0000004D /*6*/]), "VEX_20_FMJ", 24);
	StringCopy(&(Local_50[0x0000004D /*6*/]), "IE_TEXTVECH_20", 24);
	StringCopy(&(Local_49[0x0000004E /*6*/]), "VEX_21_FMJ", 24);
	StringCopy(&(Local_50[0x0000004E /*6*/]), "IE_TEXTVECH_21", 24);
	StringCopy(&(Local_49[0x0000004F /*6*/]), "VEX_22_REAPER", 24);
	StringCopy(&(Local_50[0x0000004F /*6*/]), "IE_TEXTVECH_22", 24);
	StringCopy(&(Local_49[0x00000050 /*6*/]), "VEX_23_REAPER", 24);
	StringCopy(&(Local_50[0x00000050 /*6*/]), "IE_TEXTVECH_23", 24);
	StringCopy(&(Local_49[0x00000051 /*6*/]), "VEX_24_REAPER", 24);
	StringCopy(&(Local_50[0x00000051 /*6*/]), "IE_TEXTVECH_24", 24);
	StringCopy(&(Local_49[0x00000052 /*6*/]), "VEX_25_PFISTER", 24);
	StringCopy(&(Local_50[0x00000052 /*6*/]), "IE_TEXTVECH_25", 24);
	StringCopy(&(Local_49[0x00000053 /*6*/]), "VEX_26_PFISTER", 24);
	StringCopy(&(Local_50[0x00000053 /*6*/]), "IE_TEXTVECH_26", 24);
	StringCopy(&(Local_49[0x00000054 /*6*/]), "VEX_27_PFISTER", 24);
	StringCopy(&(Local_50[0x00000054 /*6*/]), "IE_TEXTVECH_27", 24);
	StringCopy(&(Local_49[0x00000055 /*6*/]), "VEX_28_ALPHA", 24);
	StringCopy(&(Local_50[0x00000055 /*6*/]), "IE_TEXTVECH_28", 24);
	StringCopy(&(Local_49[0x00000056 /*6*/]), "VEX_29_ALPHA", 24);
	StringCopy(&(Local_50[0x00000056 /*6*/]), "IE_TEXTVECH_29", 24);
	StringCopy(&(Local_49[0x00000057 /*6*/]), "VEX_30_ALPHA", 24);
	StringCopy(&(Local_50[0x00000057 /*6*/]), "IE_TEXTVECH_30", 24);
	StringCopy(&(Local_49[0x00000058 /*6*/]), "VEX_31_MAMBA", 24);
	StringCopy(&(Local_50[0x00000058 /*6*/]), "IE_TEXTVECH_31", 24);
	StringCopy(&(Local_49[0x00000059 /*6*/]), "VEX_32_MAMBA", 24);
	StringCopy(&(Local_50[0x00000059 /*6*/]), "IE_TEXTVECH_32", 24);
	StringCopy(&(Local_49[0x0000005A /*6*/]), "VEX_33_MAMBA", 24);
	StringCopy(&(Local_50[0x0000005A /*6*/]), "IE_TEXTVECH_33", 24);
	StringCopy(&(Local_49[0x0000005B /*6*/]), "VEX_34_TAMPA", 24);
	StringCopy(&(Local_50[0x0000005B /*6*/]), "IE_TEXTVECH_34", 24);
	StringCopy(&(Local_49[0x0000005C /*6*/]), "VEX_35_TAMPA", 24);
	StringCopy(&(Local_50[0x0000005C /*6*/]), "IE_TEXTVECH_35", 24);
	StringCopy(&(Local_49[0x0000005D /*6*/]), "VEX_36_TAMPA", 24);
	StringCopy(&(Local_50[0x0000005D /*6*/]), "IE_TEXTVECH_36", 24);
	StringCopy(&(Local_49[0x0000005E /*6*/]), "VEX_37_BTYPE", 24);
	StringCopy(&(Local_50[0x0000005E /*6*/]), "IE_TEXTVECH_37", 24);
	StringCopy(&(Local_49[0x0000005F /*6*/]), "VEX_38_BTYPE", 24);
	StringCopy(&(Local_50[0x0000005F /*6*/]), "IE_TEXTVECH_38", 24);
	StringCopy(&(Local_49[0x00000060 /*6*/]), "VEX_39_BTYPE", 24);
	StringCopy(&(Local_50[0x00000060 /*6*/]), "IE_TEXTVECH_39", 24);
	StringCopy(&(Local_49[0x00000061 /*6*/]), "VEX_40_FELTZ3", 24);
	StringCopy(&(Local_50[0x00000061 /*6*/]), "IE_TEXTVECH_40", 24);
	StringCopy(&(Local_49[0x00000062 /*6*/]), "VEX_41_FELTZ3", 24);
	StringCopy(&(Local_50[0x00000062 /*6*/]), "IE_TEXTVECH_41", 24);
	StringCopy(&(Local_49[0x00000063 /*6*/]), "VEX_42_FELTZ3", 24);
	StringCopy(&(Local_50[0x00000063 /*6*/]), "IE_TEXTVECH_42", 24);
	StringCopy(&(Local_49[0x00000064 /*6*/]), "VEX_43_ZTYPE", 24);
	StringCopy(&(Local_50[0x00000064 /*6*/]), "IE_TEXTVECH_43", 24);
	StringCopy(&(Local_49[0x00000065 /*6*/]), "VEX_44_ZTYPE", 24);
	StringCopy(&(Local_50[0x00000065 /*6*/]), "IE_TEXTVECH_44", 24);
	StringCopy(&(Local_49[0x00000066 /*6*/]), "VEX_45_ZTYPE", 24);
	StringCopy(&(Local_50[0x00000066 /*6*/]), "IE_TEXTVECH_45", 24);
	StringCopy(&(Local_49[0x00000067 /*6*/]), "VEX_46_TROPOS", 24);
	StringCopy(&(Local_50[0x00000067 /*6*/]), "IE_TEXTVECH_46", 24);
	StringCopy(&(Local_49[0x00000068 /*6*/]), "VEX_47_TROPOS", 24);
	StringCopy(&(Local_50[0x00000068 /*6*/]), "IE_TEXTVECH_47", 24);
	StringCopy(&(Local_49[0x00000069 /*6*/]), "VEX_48_TROPOS", 24);
	StringCopy(&(Local_50[0x00000069 /*6*/]), "IE_TEXTVECH_48", 24);
	StringCopy(&(Local_49[0x0000006A /*6*/]), "VEX_49_ENTITYXF", 24);
	StringCopy(&(Local_50[0x0000006A /*6*/]), "IE_TEXTVECH_49", 24);
	StringCopy(&(Local_49[0x0000006B /*6*/]), "VEX_50_ENTITYXF", 24);
	StringCopy(&(Local_50[0x0000006B /*6*/]), "IE_TEXTVECH_50", 24);
	StringCopy(&(Local_49[0x0000006C /*6*/]), "VEX_51_ENTITYXF", 24);
	StringCopy(&(Local_50[0x0000006C /*6*/]), "IE_TEXTVECH_51", 24);
	StringCopy(&(Local_49[0x0000006D /*6*/]), "VEX_52_SULTANRS", 24);
	StringCopy(&(Local_50[0x0000006D /*6*/]), "IE_TEXTVECH_52", 24);
	StringCopy(&(Local_49[0x0000006E /*6*/]), "VEX_53_SULTANRS", 24);
	StringCopy(&(Local_50[0x0000006E /*6*/]), "IE_TEXTVECH_53", 24);
	StringCopy(&(Local_49[0x0000006F /*6*/]), "VEX_54_SULTANRS", 24);
	StringCopy(&(Local_50[0x0000006F /*6*/]), "IE_TEXTVECH_54", 24);
	StringCopy(&(Local_49[0x00000070 /*6*/]), "VEX_55_ZENTORNO", 24);
	StringCopy(&(Local_50[0x00000070 /*6*/]), "IE_TEXTVECH_55", 24);
	StringCopy(&(Local_49[0x00000071 /*6*/]), "VEX_56_ZENTORNO", 24);
	StringCopy(&(Local_50[0x00000071 /*6*/]), "IE_TEXTVECH_56", 24);
	StringCopy(&(Local_49[0x00000072 /*6*/]), "VEX_57_ZENTORNO", 24);
	StringCopy(&(Local_50[0x00000072 /*6*/]), "IE_TEXTVECH_57", 24);
	StringCopy(&(Local_49[0x00000073 /*6*/]), "VEX_58_OMNIS", 24);
	StringCopy(&(Local_50[0x00000073 /*6*/]), "IE_TEXTVECH_58", 24);
	StringCopy(&(Local_49[0x00000074 /*6*/]), "VEX_59_OMNIS", 24);
	StringCopy(&(Local_50[0x00000074 /*6*/]), "IE_TEXTVECH_59", 24);
	StringCopy(&(Local_49[0x00000075 /*6*/]), "VEX_60_OMNIS", 24);
	StringCopy(&(Local_50[0x00000075 /*6*/]), "IE_TEXTVECH_60", 24);
	StringCopy(&(Local_49[0x00000076 /*6*/]), "VEX_61_COQUET3", 24);
	StringCopy(&(Local_50[0x00000076 /*6*/]), "IE_TEXTVECH_61", 24);
	StringCopy(&(Local_49[0x00000077 /*6*/]), "VEX_62_COQUET3", 24);
	StringCopy(&(Local_50[0x00000077 /*6*/]), "IE_TEXTVECH_62", 24);
	StringCopy(&(Local_49[0x00000078 /*6*/]), "VEX_63_COQUET3", 24);
	StringCopy(&(Local_50[0x00000078 /*6*/]), "IE_TEXTVECH_63", 24);
	StringCopy(&(Local_49[0x00000079 /*6*/]), "VEX_64_SEVEN70", 24);
	StringCopy(&(Local_50[0x00000079 /*6*/]), "IE_TEXTVECH_64", 24);
	StringCopy(&(Local_49[0x0000007A /*6*/]), "VEX_65_SEVEN70", 24);
	StringCopy(&(Local_50[0x0000007A /*6*/]), "IE_TEXTVECH_65", 24);
	StringCopy(&(Local_49[0x0000007B /*6*/]), "VEX_66_SEVEN70", 24);
	StringCopy(&(Local_50[0x0000007B /*6*/]), "IE_TEXTVECH_66", 24);
	StringCopy(&(Local_49[0x0000007C /*6*/]), "VEX_67_VERLI", 24);
	StringCopy(&(Local_50[0x0000007C /*6*/]), "IE_TEXTVECH_67", 24);
	StringCopy(&(Local_49[0x0000007D /*6*/]), "VEX_68_VERLI", 24);
	StringCopy(&(Local_50[0x0000007D /*6*/]), "IE_TEXTVECH_68", 24);
	StringCopy(&(Local_49[0x0000007E /*6*/]), "VEX_69_VERLI", 24);
	StringCopy(&(Local_50[0x0000007E /*6*/]), "IE_TEXTVECH_69", 24);
	StringCopy(&(Local_49[0x0000007F /*6*/]), "VEX_70_FELTZ2", 24);
	StringCopy(&(Local_50[0x0000007F /*6*/]), "IE_TEXTVECH_70", 24);
	StringCopy(&(Local_49[0x00000080 /*6*/]), "VEX_71_FELTZ2", 24);
	StringCopy(&(Local_50[0x00000080 /*6*/]), "IE_TEXTVECH_71", 24);
	StringCopy(&(Local_49[0x00000081 /*6*/]), "VEX_72_FELTZ2", 24);
	StringCopy(&(Local_50[0x00000081 /*6*/]), "IE_TEXTVECH_72", 24);
	StringCopy(&(Local_49[0x00000082 /*6*/]), "VEX_73_COQUET2", 24);
	StringCopy(&(Local_50[0x00000082 /*6*/]), "IE_TEXTVECH_73", 24);
	StringCopy(&(Local_49[0x00000083 /*6*/]), "VEX_74_COQUET2", 24);
	StringCopy(&(Local_50[0x00000083 /*6*/]), "IE_TEXTVECH_74", 24);
	StringCopy(&(Local_49[0x00000084 /*6*/]), "VEX_75_COQUET2", 24);
	StringCopy(&(Local_50[0x00000084 /*6*/]), "IE_TEXTVECH_75", 24);
	StringCopy(&(Local_49[0x00000085 /*6*/]), "VEX_76_CHEETAH", 24);
	StringCopy(&(Local_50[0x00000085 /*6*/]), "IE_TEXTVECH_76", 24);
	StringCopy(&(Local_49[0x00000086 /*6*/]), "VEX_77_CHEETAH", 24);
	StringCopy(&(Local_50[0x00000086 /*6*/]), "IE_TEXTVECH_77", 24);
	StringCopy(&(Local_49[0x00000087 /*6*/]), "VEX_78_CHEETAH", 24);
	StringCopy(&(Local_50[0x00000087 /*6*/]), "IE_TEXTVECH_78", 24);
	StringCopy(&(Local_49[0x00000088 /*6*/]), "VEX_79_NSHADE", 24);
	StringCopy(&(Local_50[0x00000088 /*6*/]), "IE_TEXTVECH_79", 24);
	StringCopy(&(Local_49[0x00000089 /*6*/]), "VEX_80_NSHADE", 24);
	StringCopy(&(Local_50[0x00000089 /*6*/]), "IE_TEXTVECH_80", 24);
	StringCopy(&(Local_49[0x0000008A /*6*/]), "VEX_81_NSHADE", 24);
	StringCopy(&(Local_50[0x0000008A /*6*/]), "IE_TEXTVECH_81", 24);
	StringCopy(&(Local_49[0x0000008B /*6*/]), "VEX_82_BANSH2", 24);
	StringCopy(&(Local_50[0x0000008B /*6*/]), "IE_TEXTVECH_82", 24);
	StringCopy(&(Local_49[0x0000008C /*6*/]), "VEX_83_BANSH2", 24);
	StringCopy(&(Local_50[0x0000008C /*6*/]), "IE_TEXTVECH_84", 24);
	StringCopy(&(Local_49[0x0000008D /*6*/]), "VEX_84_BANSH2", 24);
	StringCopy(&(Local_50[0x0000008D /*6*/]), "IE_TEXTVECH_85", 24);
	StringCopy(&(Local_49[0x0000008E /*6*/]), "VEX_82_TURIS", 24);
	StringCopy(&(Local_50[0x0000008E /*6*/]), "IE_TEXTVECH_83", 24);
	StringCopy(&(Local_49[0x0000008F /*6*/]), "VEX_86_TURIS", 24);
	StringCopy(&(Local_50[0x0000008F /*6*/]), "IE_TEXTVECH_86", 24);
	StringCopy(&(Local_49[0x00000090 /*6*/]), "VEX_87_TURIS", 24);
	StringCopy(&(Local_50[0x00000090 /*6*/]), "IE_TEXTVECH_87", 24);
	StringCopy(&(Local_49[0x00000091 /*6*/]), "VEX_88_MASS", 24);
	StringCopy(&(Local_50[0x00000091 /*6*/]), "IE_TEXTVECH_88", 24);
	StringCopy(&(Local_49[0x00000092 /*6*/]), "VEX_89_MASS", 24);
	StringCopy(&(Local_50[0x00000092 /*6*/]), "IE_TEXTVECH_89", 24);
	StringCopy(&(Local_49[0x00000093 /*6*/]), "VEX_90_MASS", 24);
	StringCopy(&(Local_50[0x00000093 /*6*/]), "IE_TEXTVECH_90", 24);
	StringCopy(&(Local_49[0x00000094 /*6*/]), "VEX_91_SABRE2", 24);
	StringCopy(&(Local_50[0x00000094 /*6*/]), "IE_TEXTVECH_91", 24);
	StringCopy(&(Local_49[0x00000095 /*6*/]), "VEX_92_SABRE2", 24);
	StringCopy(&(Local_50[0x00000095 /*6*/]), "IE_TEXTVECH_92", 24);
	StringCopy(&(Local_49[0x00000096 /*6*/]), "VEX_93_SABRE2", 24);
	StringCopy(&(Local_50[0x00000096 /*6*/]), "IE_TEXTVECH_93", 24);
	StringCopy(&(Local_49[0x00000097 /*6*/]), "VEX_94_JESTER", 24);
	StringCopy(&(Local_50[0x00000097 /*6*/]), "IE_TEXTVECH_94", 24);
	StringCopy(&(Local_49[0x00000098 /*6*/]), "VEX_95_JESTER", 24);
	StringCopy(&(Local_50[0x00000098 /*6*/]), "IE_TEXTVECH_95", 24);
	StringCopy(&(Local_49[0x00000099 /*6*/]), "VEX_96_JESTER", 24);
	StringCopy(&(Local_50[0x00000099 /*6*/]), "IE_TEXTVECH_96", 24);
	StringCopy(&(Local_49[0x0000009A /*6*/]), "GO_AS_PICM", 24);
	StringCopy(&(Local_50[0x0000009A /*6*/]), "NHP_prep_autosalvage", 24);
	StringCopy(&(Local_49[0x0000009B /*6*/]), "GO_DR_PICM", 24);
	StringCopy(&(Local_50[0x0000009B /*6*/]), "nhp_prep_daylightrob", 24);
	StringCopy(&(Local_49[0x0000009C /*6*/]), "FHTXT_DDR00M", 24);
	StringCopy(&(Local_50[0x0000009C /*6*/]), "NHP_prep_deaddrop", 24);
	StringCopy(&(Local_49[0x0000009D /*6*/]), "BBTXT_CPS00M", 24);
	StringCopy(&(Local_50[0x0000009D /*6*/]), "BAT_carpark_1", 24);
	StringCopy(&(Local_49[0x0000009E /*6*/]), "BBTXT_CPS10M", 24);
	StringCopy(&(Local_50[0x0000009E /*6*/]), "BAT_carpark_2", 24);
	StringCopy(&(Local_49[0x0000009F /*6*/]), "BBTXT_CPS20M", 24);
	StringCopy(&(Local_50[0x0000009F /*6*/]), "BAT_carpark_3", 24);
	StringCopy(&(Local_49[0x000000A0 /*6*/]), "ICEBR_EMAIL", 24);
	StringCopy(&(Local_50[0x000000A0 /*6*/]), "ib_aircon", 24);
	if (func_52(unk_0xD803B885F5E47A62()) == 0x00000013)
	{
		StringCopy(&(Local_49[0x0000002C /*6*/]), "SNP_IMG_0_0", 24);
		StringCopy(&(Local_50[0x0000002C /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[0x0000002D /*6*/]), "SNP_IMG_0_1", 24);
		StringCopy(&(Local_50[0x0000002D /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[0x0000002E /*6*/]), "SNP_IMG_0_2", 24);
		StringCopy(&(Local_50[0x0000002E /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[0x0000002F /*6*/]), "SNP_IMG_0_3", 24);
		StringCopy(&(Local_50[0x0000002F /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[0x00000030 /*6*/]), "SNP_IMG_0_4", 24);
		StringCopy(&(Local_50[0x00000030 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[0x00000031 /*6*/]), "SNP_IMG_0_5", 24);
		StringCopy(&(Local_50[0x00000031 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[0x00000032 /*6*/]), "SNP_IMG_0_6", 24);
		StringCopy(&(Local_50[0x00000032 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[0x00000033 /*6*/]), "SNP_IMG_0_7", 24);
		StringCopy(&(Local_50[0x00000033 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[0x00000034 /*6*/]), "SNP_IMG_0_8", 24);
		StringCopy(&(Local_50[0x00000034 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[0x00000035 /*6*/]), "SNP_IMG_0_9", 24);
		StringCopy(&(Local_50[0x00000035 /*6*/]), "SCLUB_1", 24);
		StringCopy(&(Local_49[0x00000036 /*6*/]), "SNP_IMG_1_0", 24);
		StringCopy(&(Local_50[0x00000036 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[0x00000037 /*6*/]), "SNP_IMG_1_1", 24);
		StringCopy(&(Local_50[0x00000037 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[0x00000038 /*6*/]), "SNP_IMG_1_2", 24);
		StringCopy(&(Local_50[0x00000038 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[0x00000039 /*6*/]), "SNP_IMG_1_3", 24);
		StringCopy(&(Local_50[0x00000039 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[0x0000003A /*6*/]), "SNP_IMG_1_4", 24);
		StringCopy(&(Local_50[0x0000003A /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[0x0000003B /*6*/]), "SNP_IMG_1_5", 24);
		StringCopy(&(Local_50[0x0000003B /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[0x0000003C /*6*/]), "SNP_IMG_1_6", 24);
		StringCopy(&(Local_50[0x0000003C /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[0x0000003D /*6*/]), "SNP_IMG_1_7", 24);
		StringCopy(&(Local_50[0x0000003D /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[0x0000003E /*6*/]), "SNP_IMG_1_8", 24);
		StringCopy(&(Local_50[0x0000003E /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[0x00000040 /*6*/]), "SNP_IMG_1_9", 24);
		StringCopy(&(Local_50[0x00000040 /*6*/]), "SCLUB_2", 24);
		StringCopy(&(Local_49[0x00000041 /*6*/]), "SNP_IMG_2_0", 24);
		StringCopy(&(Local_50[0x00000041 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[0x00000042 /*6*/]), "SNP_IMG_2_1", 24);
		StringCopy(&(Local_50[0x00000042 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[0x00000043 /*6*/]), "SNP_IMG_2_2", 24);
		StringCopy(&(Local_50[0x00000043 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[0x00000044 /*6*/]), "SNP_IMG_2_3", 24);
		StringCopy(&(Local_50[0x00000044 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[0x00000045 /*6*/]), "SNP_IMG_2_4", 24);
		StringCopy(&(Local_50[0x00000045 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[0x00000046 /*6*/]), "SNP_IMG_2_5", 24);
		StringCopy(&(Local_50[0x00000046 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[0x00000047 /*6*/]), "SNP_IMG_2_6", 24);
		StringCopy(&(Local_50[0x00000047 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[0x00000048 /*6*/]), "SNP_IMG_2_7", 24);
		StringCopy(&(Local_50[0x00000048 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[0x00000049 /*6*/]), "SNP_IMG_2_8", 24);
		StringCopy(&(Local_50[0x00000049 /*6*/]), "SCLUB_3", 24);
		StringCopy(&(Local_49[0x0000004A /*6*/]), "SNP_IMG_2_9", 24);
		StringCopy(&(Local_50[0x0000004A /*6*/]), "SCLUB_3", 24);
	}
	else if (func_51(unk_0xD803B885F5E47A62()) == 0x0000000E)
	{
		StringCopy(&(Local_49[0x0000002C /*6*/]), "GBC_TM_TC100", 24);
		StringCopy(&(Local_50[0x0000002C /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[0x0000002D /*6*/]), "GBC_TM_TC101", 24);
		StringCopy(&(Local_50[0x0000002D /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[0x0000002E /*6*/]), "GBC_TM_TC102", 24);
		StringCopy(&(Local_50[0x0000002E /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[0x0000002F /*6*/]), "GBC_TM_TC103", 24);
		StringCopy(&(Local_50[0x0000002F /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[0x00000030 /*6*/]), "GBC_TM_TC104", 24);
		StringCopy(&(Local_50[0x00000030 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[0x00000031 /*6*/]), "GBC_TM_TC105", 24);
		StringCopy(&(Local_50[0x00000031 /*6*/]), "VC_TC_OBSERVCCTV_0", 24);
		StringCopy(&(Local_49[0x00000032 /*6*/]), "GBC_TM_TC110", 24);
		StringCopy(&(Local_50[0x00000032 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[0x00000033 /*6*/]), "GBC_TM_TC111", 24);
		StringCopy(&(Local_50[0x00000033 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[0x00000034 /*6*/]), "GBC_TM_TC120", 24);
		StringCopy(&(Local_50[0x00000034 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[0x00000035 /*6*/]), "GBC_TM_TC121", 24);
		StringCopy(&(Local_50[0x00000035 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[0x00000036 /*6*/]), "GBC_TM_TC130", 24);
		StringCopy(&(Local_50[0x00000036 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[0x00000037 /*6*/]), "GBC_TM_TC140", 24);
		StringCopy(&(Local_50[0x00000037 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[0x00000038 /*6*/]), "GBC_TM_TC200", 24);
		StringCopy(&(Local_50[0x00000038 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[0x00000039 /*6*/]), "GBC_TM_TC201", 24);
		StringCopy(&(Local_50[0x00000039 /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[0x0000003A /*6*/]), "GBC_TM_TC202", 24);
		StringCopy(&(Local_50[0x0000003A /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[0x0000003B /*6*/]), "GBC_TM_TC203", 24);
		StringCopy(&(Local_50[0x0000003B /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[0x0000003C /*6*/]), "GBC_TM_TC204", 24);
		StringCopy(&(Local_50[0x0000003C /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[0x0000003D /*6*/]), "GBC_TM_TC205", 24);
		StringCopy(&(Local_50[0x0000003D /*6*/]), "VC_TC_UNIVERCCTV", 24);
		StringCopy(&(Local_49[0x0000003E /*6*/]), "GBC_TM_TC210", 24);
		StringCopy(&(Local_50[0x0000003E /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[0x0000003F /*6*/]), "GBC_TM_TC211", 24);
		StringCopy(&(Local_50[0x0000003F /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[0x00000040 /*6*/]), "GBC_TM_TC220", 24);
		StringCopy(&(Local_50[0x00000040 /*6*/]), "VC_TC_VEHICLECCTV", 24);
		StringCopy(&(Local_49[0x00000041 /*6*/]), "GBC_TM_TC221", 24);
		StringCopy(&(Local_50[0x00000041 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[0x00000042 /*6*/]), "GBC_TM_TC230", 24);
		StringCopy(&(Local_50[0x00000042 /*6*/]), "VC_TC_CASINOCCTV", 24);
		StringCopy(&(Local_49[0x00000043 /*6*/]), "GBC_TM_TC240", 24);
		StringCopy(&(Local_50[0x00000043 /*6*/]), "VC_TC_CASINOCCTV", 24);
	}
	else if (func_47(unk_0xD803B885F5E47A62()) == 0x0000001E)
	{
		StringCopy(&(Local_49[0x0000002C /*6*/]), "CSH_TXT_MD_01M", 24);
		StringCopy(&(Local_50[0x0000002C /*6*/]), "heist3_prep_maid01", 24);
		StringCopy(&(Local_49[0x0000002D /*6*/]), "CSH_TXT_MD_02M", 24);
		StringCopy(&(Local_50[0x0000002D /*6*/]), "heist3_prep_maid02", 24);
	}
	else if (func_47(unk_0xD803B885F5E47A62()) == 0x00000020)
	{
		StringCopy(&(Local_49[0x0000002C /*6*/]), "CSHT_IMC_00M", 24);
		StringCopy(&(Local_50[0x0000002C /*6*/]), "heist3_cashier1", 24);
		StringCopy(&(Local_49[0x0000002D /*6*/]), "CSHT_IMC_10M", 24);
		StringCopy(&(Local_50[0x0000002D /*6*/]), "heist3_cashier2", 24);
		StringCopy(&(Local_49[0x0000002E /*6*/]), "CSHT_IMC_20M", 24);
		StringCopy(&(Local_50[0x0000002E /*6*/]), "heist3_cashier3", 24);
		StringCopy(&(Local_49[0x0000002F /*6*/]), "CSHT_IMC_30M", 24);
		StringCopy(&(Local_50[0x0000002F /*6*/]), "heist3_cashier4", 24);
	}
}

int func_47(int iParam0)
{
	if (func_50(iParam0) == 0x0000009E)
	{
		return func_48(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_48(int iParam0)
{
	if (func_49(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 0xFFFFFFFF;
}

int func_49(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_50(int iParam0)
{
	if (func_49(iParam0, 0x00000000))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 0xFFFFFFFF;
}

int func_51(int iParam0)
{
	if (func_50(iParam0) == 0x000000F3)
	{
		return func_48(iParam0);
	}
	return 0xFFFFFFFF;
}

int func_52(int iParam0)
{
	if (func_50(iParam0) == 0x000000ED || func_50(iParam0) == 0x000000FA)
	{
		return func_48(iParam0);
	}
	return 0xFFFFFFFF;
}

void func_53()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
	{
		func_54(0x00000000);
	}
	if (iLocal_52)
	{
		unk_0xF5A41F3D3B38EFE3(&uLocal_33);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_54(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_58())
		{
			func_56(0x00000001, 0x00000001);
		}
		else
		{
			func_56(0x00000000, 0x00000000);
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
	if (!func_55())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_55()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_57(0x00000000))
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

int func_57(int iParam0)
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

bool func_58()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_59()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

