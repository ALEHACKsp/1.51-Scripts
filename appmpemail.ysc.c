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
	int iLocal_19[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	struct<16> Local_34 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_35[59];
	struct<16> Local_36[59];
	int iLocal_37 = 0;
	vector3 vLocal_38 = { 0f, 0f, 0f };
	vector3 vLocal_39 = { 0f, 0f, 0f };
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<314> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
		func_61();
	}
	func_60();
	Global_556F = 0x00000000;
	Global_1B416.f_36DE[Global_4C1E /*20*/].f_12 = 0x00000000;
	Global_4CCF = 0x00000000;
	func_59();
	func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 8f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	func_53();
	func_51();
	if (Global_4C1E.f_1 > 0x00000003)
	{
		Global_4C1E.f_1 = 0x00000007;
	}
	iLocal_31 = unk_0x1C0640BA9A7327B3();
	Global_4C22 = 0x00000000;
	unk_0x1CFAC524932A967E(&vLocal_39);
	vLocal_38 = { vLocal_39 };
	vLocal_38.x = (vLocal_38.x - 10f);
	vLocal_38.y = (vLocal_38.y + 20f);
	Global_554E = 0x00000000;
	Global_554F = 0x00000001;
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (Global_554F == 0x00000000 && Global_554E == 0x00000001)
		{
			func_50();
		}
		if (Global_554F == 0x00000001 && Global_554E == 0x00000000)
		{
			func_45();
		}
		if (iLocal_30 == 0x00000000)
		{
			iLocal_32 = unk_0x1C0640BA9A7327B3();
			if ((iLocal_32 - iLocal_31) > 0x000001F4)
			{
				iLocal_30 = 0x00000001;
			}
		}
		if ((Global_4C1E.f_1 != 0x00000009 && Global_554F == 0x00000000) && Global_554E == 0x00000000)
		{
			switch (Global_4C1E.f_1)
			{
				case 0x00000007:
					if (Global_556F == 0x00000000)
					{
						if (Global_26DD73 == 0x00000000)
						{
							func_44();
							func_37();
						}
					}
					break;
				
				case 0x00000008:
					if (Global_556F == 0x00000001)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_556F == 0x00000000)
			{
				if (func_4())
				{
					Global_554E = 0x00000001;
				}
			}
			else if (func_3(0x00000002, Global_4BFE, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000000C))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/]), "CELL_FINV"))
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
						func_61();
					}
					func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 8f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
					func_53();
					func_51();
					if (Global_4121D4[iLocal_24 /*104*/].f_1D > 0x00000000)
					{
						if (Global_4121D4[iLocal_24 /*104*/].f_1F == 0x00000001)
						{
							Global_4121D4[iLocal_24 /*104*/].f_1D = 0x00000004;
							Global_4121D4[iLocal_24 /*104*/].f_18 = 0x00000001;
						}
						else
						{
							Global_4121D4[iLocal_24 /*104*/].f_18 = 0x00000001;
						}
					}
				}
			}
		}
		if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
		{
			func_61();
		}
		if (func_1())
		{
			func_61();
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
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 0x00000032)
		{
			iLocal_27 = 0x00000000;
		}
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (func_3(0x00000002, 0x000000B5, 0x00000000))
		{
			func_9();
		}
		if (func_3(0x00000002, 0x000000B4, 0x00000000))
		{
			func_6();
		}
	}
	if (iLocal_27 == 0x00000000)
	{
		if (func_3(0x00000002, Global_4C06, 0x00000000))
		{
			func_9();
			iLocal_27 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
		if (func_3(0x00000002, Global_4C07, 0x00000000))
		{
			func_6();
			iLocal_27 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
	}
}

void func_6()
{
	func_58(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(0x00000003), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
	func_7();
}

void func_7()
{
	if (func_8())
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

int func_8()
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

void func_9()
{
	func_58(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(0x00000001), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Navigate", &Global_4C13, 0x00000001);
	func_10();
}

void func_10()
{
	if (func_8())
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

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4121D4[iLocal_24 /*104*/].f_18 == 0x00000001)
	{
		if (Global_4C08 == 0x00000000)
		{
			if (unk_0x06F8112AA79C53D9(0x00000002, Global_4C01))
			{
				func_2();
				Global_4C08 = 0x00000001;
				func_30();
				if (Global_4121D4[iLocal_24 /*104*/].f_1B == 0x00000001)
				{
					Global_4121D4[iLocal_24 /*104*/].f_63[0x00000000] = 0x00000000;
					Global_4121D4[iLocal_24 /*104*/].f_63[0x00000001] = 0x00000000;
					Global_4121D4[iLocal_24 /*104*/].f_63[0x00000002] = 0x00000000;
				}
				else
				{
					Global_4121D4[iLocal_24 /*104*/].f_63[Global_4C1E] = 0x00000000;
				}
				if (func_29(iLocal_24))
				{
				}
				else
				{
					Global_4121D4[iLocal_24 /*104*/].f_18 = 0x00000000;
					Global_4121D4[iLocal_24 /*104*/].f_1C = 0x00000000;
				}
				unk_0xD59AE843FA2C6B40(Global_4121D4[iLocal_24 /*104*/].f_10);
				func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 8f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_53();
				if (iLocal_22 > 0x00000000)
				{
					iLocal_22 = (iLocal_22 - 0x00000001);
				}
				func_51();
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
			if (iLocal_26 == 0x00000001)
			{
				if (Global_4C1E.f_1 > 0x00000003)
				{
					StringCopy(&Global_12051, unk_0x19C9F30A7697B43C(&Global_5556), 64);
					if (unk_0x7F8A39872A07D2CE(&Global_12051, "HARDCODED_4207156"))
					{
						Global_4C1E.f_1 = 0x00000003;
						Global_19D9C2 = 0x00000001;
					}
					else
					{
						Global_120D2 = 0x00000007;
						unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000A);
						Global_4C1E.f_1 = 0x00000006;
					}
				}
				func_61();
			}
		}
	}
	if (Global_4121D4[iLocal_24 /*104*/].f_1F == 0x00000001)
	{
		if (Global_4C08 == 0x00000000)
		{
			if (func_3(0x00000002, Global_4C02, 0x00000000))
			{
				func_27();
				Global_4C08 = 0x00000001;
				Global_4121D4[iLocal_24 /*104*/].f_1D = 0x00000002;
				Global_4121D4[iLocal_24 /*104*/].f_18 = 0x00000001;
				Global_4121D4[iLocal_24 /*104*/].f_1F = 0x00000000;
				unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
				Global_556F = 0x00000000;
				if (Global_4C1E.f_1 > 0x00000003)
				{
					Global_4C1E.f_1 = 0x00000007;
				}
				func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 8f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_53();
				func_51();
			}
		}
	}
	if (Global_4C08 == 0x00000000 && iLocal_30 == 0x00000001)
	{
		if (func_3(0x00000002, Global_4BFF, 0x00000000))
		{
			Global_4C08 = 0x00000001;
			if (Global_4121D4[iLocal_24 /*104*/].f_1D > 0x00000000)
			{
				func_27();
				Global_4121D4[iLocal_24 /*104*/].f_1D = 0x00000003;
				Global_4121D4[iLocal_24 /*104*/].f_18 = 0x00000001;
				Global_556F = 0x00000000;
				if (Global_4C1E.f_1 > 0x00000003)
				{
					Global_4C1E.f_1 = 0x00000007;
				}
				func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 8f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_53();
				func_51();
			}
			else if (Global_4121D4[iLocal_24 /*104*/].f_1E == 0x00000001)
			{
				func_27();
				Global_1A0F = 0x00000090;
				if (Global_4C1E.f_1 > 0x00000003)
				{
					Global_4C1E.f_1 = 0x0000000A;
					func_25();
				}
				func_24("appContacts");
				Global_4C1C = SYSTEM::START_NEW_SCRIPT("appContacts", 0x00000FA0);
				unk_0x5E8C29AE121DF1C7("appContacts");
				Global_1A0F = Global_4121D4[iLocal_24 /*104*/].f_11;
				if (func_23(Global_1A0F, Global_4C1E) == 0x00000000)
				{
					func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000003), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0x00000000);
				}
				else
				{
					func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000003), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), "CELL_211", &(Global_706[Global_1A0F /*29*/].f_3), 0x00000000);
				}
				func_13();
				func_61();
			}
		}
	}
}

void func_13()
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
			func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_20(Global_1F19);
			if (Global_1F19 == 0x00000001)
			{
				func_58(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C22), 0xBF800000, 0xBF800000, 0xBF800000);
				Global_4C0A = Global_4C22;
			}
			else
			{
				func_58(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C23), 0xBF800000, 0xBF800000, 0xBF800000);
				Global_4C0A = Global_4C23;
			}
			if (Global_4C12)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (Global_4CD2 == 0x00000000)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			}
			else if (Global_12B4E)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			}
			else
			{
				if (Global_4CD1 == 0x00000001)
				{
					if (Global_4C12)
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (Global_4C12)
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
			}
			if (Global_12B4E)
			{
				func_18();
				unk_0x0674E58A79778E99(&Global_1CBE, 0x00000009);
				func_58(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C22), 0xBF800000, 0xBF800000, 0xBF800000);
			}
			break;
		
		case 0x00000007:
			break;
		
		case 0x0000000A:
			func_58(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				if (Global_4BE5)
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			else
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			break;
		
		case 0x00000009:
			if (Global_4C1D == 0x00000001)
			{
				func_17();
				func_58(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				if (Global_5152)
				{
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000004);
					unk_0x3CAEA85DA607305E(0x00000000);
					unk_0x3CAEA85DA607305E(0x00000002);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_5154);
					unk_0x779B34565F4D71B1();
					func_16("CELL_300");
					func_16("CELL_217");
					func_16("CELL_217");
					unk_0x7E60D21B163E9D56();
				}
				else if (func_23(Global_1A0F, Global_4C1E) == 0x00000000)
				{
					func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000002), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0x00000000);
				}
				else
				{
					func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000002), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), "CELL_217", &(Global_706[Global_1A0F /*29*/].f_3), 0x00000000);
				}
				func_58(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
			else if (Global_5145 == 0x00000004 || Global_5145 == 0x00000003)
			{
				func_58(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_17();
				if (Global_5152)
				{
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000004);
					unk_0x3CAEA85DA607305E(0x00000000);
					unk_0x3CAEA85DA607305E(0x00000002);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_5154);
					unk_0x779B34565F4D71B1();
					func_16("CELL_300");
					func_16("CELL_219");
					func_16("CELL_219");
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
					if (func_23(Global_1A0F, Global_4C1E) == 0x00000000)
					{
						func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000003), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0x00000000);
					}
					else
					{
						func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000003), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), &cVar0, &(Global_706[Global_1A0F /*29*/].f_3), 0x00000000);
					}
				}
				func_58(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (unk_0x83D8570832F172A7(Global_4C0B))
	{
		func_15();
		if (Global_4C1D == 0x00000001)
		{
			if (Global_4C12)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (Global_5174)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
		}
		else
		{
			func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				if (Global_4BE5)
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			else
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
	}
}

void func_15()
{
	if (Global_12B4E)
	{
		func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
	}
}

void func_16(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_17()
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

void func_18()
{
	if (Global_12B4E)
	{
		if (func_19() == 0x00000000)
		{
			return;
		}
		func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
	}
}

int func_19()
{
	return 0x00000000;
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
		if (func_21(0x0000000E))
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
								func_16(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 0x0000000E)
								{
									func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
								func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							else if (iVar1 == 0x0000000E)
							{
								func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000014)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_16(&(Global_1CC3[iVar1 /*15*/]));
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
								func_16(&(Global_1CC3[iVar1 /*15*/]));
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
								func_16(&(Global_1CC3[iVar1 /*15*/]));
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
								func_16(&(Global_1CC3[iVar1 /*15*/]));
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
								func_16(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 0x00000039 && iVar1 == 0x00000017)
							{
								iVar9 = 0x00000000;
								iVar9 = Global_18D301.f_1;
								func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0x00000000), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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

bool func_21(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_22(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_16(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_16(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_16(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_16(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_16(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

int func_23(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

void func_24(char* sParam0)
{
	unk_0x92DCE5C81176D2B4(sParam0);
	while (!unk_0x1FBF08B001C4788A(sParam0))
	{
		SYSTEM::WAIT(0x00000000);
	}
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_26() && unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0x00000000))
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

int func_26()
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

void func_27()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Menu_Accept", &Global_4C13, 0x00000001);
		func_28();
	}
}

void func_28()
{
	if (func_8())
	{
		unk_0x5A963FB0365294C8(0x00000005);
	}
}

int func_29(int iParam0)
{
	if ((Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000000] == 0x00000001 || Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000001] == 0x00000001) || Global_1B416.f_3738[iParam0 /*104*/].f_63[0x00000002] == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_30()
{
	if (func_21(0x0000000E))
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
		Global_4C1E = func_31();
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

var func_31()
{
	func_32();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_32()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_35(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_34(unk_0x16F2683693E537C9());
			if (func_33(iVar0) && (!func_21(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_33(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_33(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_36(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_37()
{
	struct<16> Var0;
	
	if (Global_4C08 == 0x00000000)
	{
		if ((func_3(0x00000002, Global_4BFF, 0x00000000) || Global_4126B6 == 0x00000001) || Global_5569 == 0x00000001)
		{
			if (Global_4126B6 == 0x00000000 && Global_5569 == 0x00000000)
			{
				func_27();
			}
			Global_4C08 = 0x00000001;
			iLocal_30 = 0x00000000;
			func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			iLocal_24 = iLocal_19[iLocal_22];
			if (iLocal_22 == iLocal_21 || iLocal_22 > iLocal_21)
			{
				if (Global_4C1E.f_1 > 0x00000003)
				{
					Global_4C1E.f_1 = 0x00000008;
					Global_556F = 0x00000001;
					iLocal_23 = iLocal_22;
					unk_0x113A2E2F6779EEA3(iLocal_19[iLocal_22], &Local_45);
				}
				SYSTEM::SETTIMERB(0x00000000);
				iLocal_28 = 0x00000000;
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
				uLocal_33 = unk_0x7A8BB56B212464AC();
				while (!unk_0xC95D7AEEDEF4946B(uLocal_33) && iLocal_28 == 0x00000000)
				{
					SYSTEM::WAIT(0x00000000);
					if (SYSTEM::TIMERB() > 0x000007D0)
					{
						iLocal_28 = 0x00000001;
					}
				}
				func_42();
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000009);
				unk_0x3CAEA85DA607305E(0x00000000);
				func_16("CELL_1");
				unk_0x7ACC3006A87F8B39("CELL_TO_FIELD");
				unk_0xD06AC7C87A34A6AD(unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()));
				unk_0x779B34565F4D71B1();
				unk_0x7ACC3006A87F8B39("CELL_FROM_FIELD");
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_2));
				unk_0x779B34565F4D71B1();
				unk_0x7ACC3006A87F8B39("CELL_EMAIL_BCON");
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[0x00000000 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[0x00000001 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[0x00000002 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[0x00000003 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[0x00000004 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[0x00000005 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[0x00000006 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[0x00000007 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[0x00000008 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[0x00000009 /*16*/]));
				unk_0x779B34565F4D71B1();
				unk_0x7ACC3006A87F8B39("CELL_2000");
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_2));
				unk_0x779B34565F4D71B1();
				switch (Local_45.f_139)
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						break;
					
					case 0x00000002:
						unk_0x024BC5F58A72410C("EmailAds_Dock_Tease");
						unk_0x1200CC973A2399C8(0x00000001);
						break;
					
					case 0x00000003:
						unk_0x024BC5F58A72410C("EmailAds_Warstock");
						unk_0x1200CC973A2399C8(0x00000001);
						break;
					
					case 0x00000004:
						unk_0x024BC5F58A72410C("EmailAds_Legendary_Motorsport");
						unk_0x1200CC973A2399C8(0x00000001);
						break;
					
					case 0x00000005:
						unk_0x024BC5F58A72410C("EmailAds_LS_Customs");
						unk_0x1200CC973A2399C8(0x00000001);
						break;
					
					case 0x00000006:
						unk_0x024BC5F58A72410C("EmailAds_Elitas_Travel");
						unk_0x1200CC973A2399C8(0x00000001);
						break;
					
					case 0x00000007:
						unk_0x024BC5F58A72410C("EmailAds_LS_Tourist_Info");
						unk_0x1200CC973A2399C8(0x00000001);
						break;
					
					case 0x00000008:
						unk_0x024BC5F58A72410C("emailads_dynasty8");
						unk_0x1200CC973A2399C8(0x00000001);
						break;
					
					case 0x00000009:
						unk_0x024BC5F58A72410C("emailads_bennys");
						unk_0x1200CC973A2399C8(0x00000001);
						break;
					
					case 0x0000000A:
						unk_0x024BC5F58A72410C("emailads_ammunation");
						unk_0x1200CC973A2399C8(0x00000001);
						break;
					
					case 0x0000000B:
						unk_0x024BC5F58A72410C("emailads_SSSA");
						unk_0x1200CC973A2399C8(0x00000001);
						break;
					
					case 0x0000000C:
						unk_0x024BC5F58A72410C("emailads_maze_bank");
						unk_0x1200CC973A2399C8(0x00000001);
						break;
					
					case 0x0000000D:
						unk_0x024BC5F58A72410C("emailads_shark");
						unk_0x1200CC973A2399C8(0x00000001);
						break;
					
					case 0x0000000E:
						unk_0x024BC5F58A72410C("emailads_RP");
						unk_0x1200CC973A2399C8(0x00000001);
						break;
				}
				unk_0x7E60D21B163E9D56();
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_58(Global_4C0B, "DISPLAY_VIEW", 9f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				if (iLocal_22 == iLocal_21)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000019))
					{
						unk_0x0674E58A79778E99(&Global_4126C5, 0x00000019);
					}
					if (Global_4121D3 > 0x00000000)
					{
						func_39(0x000026FC, iLocal_40, 0xFFFFFFFF, 0x00000001, 0x00000000);
						if (Global_4121D3 > 0x00000000)
						{
							Global_4121D3 = 0x00000000;
						}
					}
				}
				return;
			}
			if (Global_4121D4[iLocal_24 /*104*/].f_18 != 0x00000000)
			{
				if (Global_4C1E.f_1 > 0x00000003)
				{
					Global_4C1E.f_1 = 0x00000008;
				}
				if (Global_4126B6 == 0x00000001 || Global_5569 == 0x00000001)
				{
					iLocal_24 = iLocal_19[0x00000000];
					iLocal_23 = 0x00000000;
					if (Global_4126B6 == 0x00000001)
					{
					}
					Global_5569 = 0x00000000;
				}
				else
				{
					SYSTEM::SETTIMERB(0x00000000);
					iLocal_28 = 0x00000000;
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
					uLocal_33 = unk_0x7A8BB56B212464AC();
					while (!unk_0xC95D7AEEDEF4946B(uLocal_33) && iLocal_28 == 0x00000000)
					{
						SYSTEM::WAIT(0x00000000);
						if (SYSTEM::TIMERB() > 0x000007D0)
						{
							iLocal_28 = 0x00000001;
						}
					}
					if (iLocal_28 == 0x00000001)
					{
						iLocal_29 = 0x00000000;
					}
					else
					{
						iLocal_29 = unk_0xA52833FE33F41C53(uLocal_33);
					}
					if (iLocal_29 < 0x00000000)
					{
						iLocal_29 = 0x00000000;
					}
					iLocal_24 = iLocal_19[iLocal_22];
					iLocal_23 = iLocal_22;
				}
				Global_4121D4[iLocal_24 /*104*/].f_1C = 0x00000001;
				iLocal_26 = 0x00000000;
				StringCopy(&Global_5556, "NO_HYPERLINK", 64);
				Var0 = { Global_4121D4[iLocal_24 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0xEF07223F00EBE9C9(&Var0))
				{
					Global_5556 = { Var0 };
					iLocal_26 = 0x00000001;
					if (Global_4C12)
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
					Global_4121D4[iLocal_24 /*104*/].f_1A = 0x00000001;
					Global_4121D4[iLocal_24 /*104*/].f_18 = 0x00000002;
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_1A == 0x00000000)
				{
					Global_4121D4[iLocal_24 /*104*/].f_18 = 0x00000001;
				}
				func_42();
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000009);
				unk_0x3CAEA85DA607305E(0x00000000);
				func_16("CELL_1");
				unk_0x7ACC3006A87F8B39("CELL_TO_FIELD");
				unk_0xD06AC7C87A34A6AD(unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()));
				unk_0x779B34565F4D71B1();
				if (Global_4121D4[iLocal_24 /*104*/].f_11 == 0x00000091)
				{
					unk_0x7ACC3006A87F8B39("CELL_FROM_FIELD");
					unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_32));
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("CELL_FROM_FIELD");
					unk_0x6B012227B3921E18(&(Global_706[Global_4121D4[iLocal_24 /*104*/].f_11 /*29*/].f_3));
					unk_0x779B34565F4D71B1();
				}
				switch (Global_4121D4[iLocal_24 /*104*/].f_20)
				{
					case 0x00000000:
						func_16(&(Global_4121D4[iLocal_24 /*104*/]));
						break;
					
					case 0x00000001:
						unk_0x7ACC3006A87F8B39(&(Global_4121D4[iLocal_24 /*104*/]));
						unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_21));
						if (Global_4121D4[iLocal_24 /*104*/].f_42 == 0x00000001 && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/].f_43), "NULL"))
						{
							unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_43));
						}
						if ((Global_4121D4[iLocal_24 /*104*/].f_42 == 0x00000002 && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/].f_43), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/].f_53), "NULL"))
						{
							if (unk_0xEF07223F00EBE9C9(&(Global_4121D4[iLocal_24 /*104*/].f_43)))
							{
								unk_0x6B012227B3921E18(&(Global_4121D4[iLocal_24 /*104*/].f_43));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_43));
							}
							if (unk_0xEF07223F00EBE9C9(&(Global_4121D4[iLocal_24 /*104*/].f_53)))
							{
								unk_0x6B012227B3921E18(&(Global_4121D4[iLocal_24 /*104*/].f_53));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_53));
							}
						}
						unk_0x779B34565F4D71B1();
						break;
					
					case 0x00000002:
						unk_0x7ACC3006A87F8B39(&(Global_4121D4[iLocal_24 /*104*/]));
						unk_0x6D99DF8263D35CE5(Global_4121D4[iLocal_24 /*104*/].f_31);
						unk_0x779B34565F4D71B1();
						break;
					
					case 0x00000003:
						unk_0x7ACC3006A87F8B39(&(Global_4121D4[iLocal_24 /*104*/]));
						unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_21));
						unk_0x6D99DF8263D35CE5(Global_4121D4[iLocal_24 /*104*/].f_31);
						if (Global_4121D4[iLocal_24 /*104*/].f_42 == 0x00000001 && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/].f_43), "NULL"))
						{
							unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_43));
						}
						if ((Global_4121D4[iLocal_24 /*104*/].f_42 == 0x00000002 && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/].f_43), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/].f_53), "NULL"))
						{
							if (unk_0xEF07223F00EBE9C9(&(Global_4121D4[iLocal_24 /*104*/].f_43)))
							{
								unk_0x6B012227B3921E18(&(Global_4121D4[iLocal_24 /*104*/].f_43));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_43));
							}
							if (unk_0xEF07223F00EBE9C9(&(Global_4121D4[iLocal_24 /*104*/].f_53)))
							{
								unk_0x6B012227B3921E18(&(Global_4121D4[iLocal_24 /*104*/].f_53));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_53));
							}
						}
						unk_0x779B34565F4D71B1();
						break;
					
					case 0x00000004:
						func_38(iLocal_24);
						break;
					
					case 0x00000005:
						func_38(iLocal_24);
						break;
					
					case 0x00000006:
						func_38(iLocal_24);
						break;
					
					case 0x00000007:
						func_38(iLocal_24);
						break;
					
					case 0x00000008:
						func_38(iLocal_24);
						break;
					
					case 0x00000009:
						func_38(iLocal_24);
						break;
					
					case 0x0000000A:
						func_38(iLocal_24);
						break;
					
					case 0x0000000B:
						func_38(iLocal_24);
						break;
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_11 == 0x00000091)
				{
					unk_0x7ACC3006A87F8B39("CELL_2000");
					unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_32));
					unk_0x779B34565F4D71B1();
				}
				else
				{
					func_16(&(Global_706[Global_4121D4[iLocal_24 /*104*/].f_11 /*29*/].f_3));
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_11 == 0x00000095)
				{
					unk_0x024BC5F58A72410C("emailads_maze_bank");
					unk_0x1200CC973A2399C8(0x00000001);
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_11 == 0x0000008C)
				{
					unk_0x024BC5F58A72410C("EmailAds_Warstock");
					unk_0x1200CC973A2399C8(0x00000001);
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_11 == 0x0000009B)
				{
					unk_0x024BC5F58A72410C("emailads_arena");
					unk_0x1200CC973A2399C8(0x00000001);
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_11 == 0x000000A0)
				{
					unk_0x024BC5F58A72410C("emailads_diamond");
					unk_0x1200CC973A2399C8(0x00000001);
				}
				unk_0x7E60D21B163E9D56();
				Global_556F = 0x00000001;
				func_58(Global_4C0B, "DISPLAY_VIEW", 9f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				unk_0xD59AE843FA2C6B40(Global_4121D4[iLocal_24 /*104*/].f_10);
				if (Global_4121D4[iLocal_24 /*104*/].f_1D > 0x00000000)
				{
					if (Global_4C12)
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (Global_4121D4[iLocal_24 /*104*/].f_1E == 0x00000001)
				{
					if (Global_4C12)
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_1D > 0x00000000)
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/]), "CELL_FINV"))
					{
						if (Global_4C12)
						{
							func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					else if (Global_4C12)
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (Global_4C12)
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_18 == 0x00000002)
				{
					if (Global_4121D4[iLocal_24 /*104*/].f_1F == 0x00000001)
					{
						iLocal_26 = 0x00000000;
						if (Global_4C12)
						{
							func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
					}
					else if (iLocal_26 == 0x00000000)
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
					}
				}
				else if (Global_4C12)
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
				}
				else
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
				}
				Global_1B416.f_36DE[Global_4C1E /*20*/].f_12 = 0x00000000;
				Global_4126B6 = 0x00000000;
			}
			else
			{
				Global_1B416.f_36DE[Global_4C1E /*20*/].f_12 = 0x00000000;
				Global_4126B6 = 0x00000000;
			}
		}
		if (Global_26DD73 == 0x00000000)
		{
			if (Global_12B4E)
			{
			}
		}
	}
}

void func_38(int iParam0)
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

void func_39(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_40(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_41();
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

int func_41()
{
	return Global_1407E9;
}

void func_42()
{
	int iVar0;
	
	if (iLocal_37)
	{
		unk_0xF5A41F3D3B38EFE3(&Local_34);
	}
	iLocal_37 = 0x00000000;
	if (Global_4121D4[iLocal_24 /*104*/].f_18 != 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000003B)
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/]), &(Local_35[iVar0 /*6*/])))
			{
				if (func_43(&(Local_35[iVar0 /*6*/])))
				{
					StringCopy(&Local_34, "BAT_CASE_", 64);
					StringIntConCat(&Local_34, Global_19D9BA, 64);
				}
				else
				{
					Local_34 = { Local_36[iVar0 /*16*/] };
				}
				iLocal_37 = 0x00000001;
				unk_0x0D3BE1DE0262A012(&Local_34, 0x00000000);
				while (!unk_0x27117E2CDD4D67C3(&Local_34))
				{
					SYSTEM::WAIT(0x00000064);
				}
			}
			iVar0++;
		}
	}
}

int func_43(char* sParam0)
{
	switch (unk_0x12AB0310C2281427(sParam0))
	{
		case 0x15FBBA08:
		case 0xF18B2B9B:
		case 0x1183D1CF:
		case 0x4C14948B:
		case 0xD692574A:
		case 0xEFC47F27:
		case 0x4CB1C69B:
		case 0xAB863AC0:
		case 0xE3FD3820:
		case 0xD7068E43:
		case 0x76932864:
		case 0x20C06847:
		case 0x73E50397:
		case 0xC84A80B0:
		case 0xD492FBAB:
		case 0x5ABDB094:
		case 0xB5173BC7:
		case 0xECE5BA47:
		case 0xDFD8D6AE:
		case 0x9498A2A3:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_44()
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 0x00000032)
		{
			iLocal_27 = 0x00000000;
		}
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (func_3(0x00000002, 0x000000B5, 0x00000000))
		{
			if (iLocal_22 > 0x00000000)
			{
				iLocal_22 = (iLocal_22 - 0x00000001);
				func_9();
			}
		}
		if (func_3(0x00000002, 0x000000B4, 0x00000000))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0x00000000;
			}
			func_6();
		}
	}
	if (iLocal_27 == 0x00000000)
	{
		if (func_3(0x00000002, Global_4C06, 0x00000000))
		{
			if (iLocal_22 > 0x00000000)
			{
				iLocal_22 = (iLocal_22 - 0x00000001);
				func_9();
			}
			iLocal_27 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
		if (func_3(0x00000002, Global_4C07, 0x00000000))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0x00000000;
			}
			func_6();
			iLocal_27 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
	}
}

void func_45()
{
	float fVar0;
	
	fVar0 = func_46(vLocal_39, vLocal_38, Global_4BF6, -90f, 0f, 90f, 350f, 0x00000000);
	unk_0x2BF9F8AAD637763A((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_554F = 0x00000000;
		iLocal_18 = 0x00000000;
	}
}

float func_46(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)
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
	if (func_49() && Global_4127DC == 0x00000000)
	{
		return 2f;
	}
	if (iLocal_18 == 0x00000000)
	{
		iLocal_18 = unk_0x1C0640BA9A7327B3();
	}
	fVar1 = func_48((SYSTEM::TO_FLOAT((unk_0x1C0640BA9A7327B3() - iLocal_18)) / fParam4), 0f, 1f);
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
		Global_4BD6 = { func_47(vParam0, vParam1, fVar2) };
		Global_4BD9 = { func_47(vParam2, vParam3, fVar2) };
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

Vector3 func_47(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_48(float fParam0, float fParam1, float fParam2)
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

int func_49()
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
		if (func_21(0x0000000E))
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

void func_50()
{
	float fVar0;
	
	fVar0 = func_46(vLocal_38, vLocal_39, -90f, 0f, 90f, Global_4BF6, 350f, 0x00000000);
	unk_0x2BF9F8AAD637763A((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_554E = 0x00000000;
		func_61();
		iLocal_18 = 0x00000000;
	}
}

void func_51()
{
	if (Global_4126B6 == 0x00000000)
	{
		if (iLocal_23 < 0x00000000)
		{
			iLocal_23 = 0x00000000;
		}
		func_52(Global_4C0B, "SET_HEADER", "CELL_INBOX", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		func_58(Global_4C0B, "DISPLAY_VIEW", 8f, SYSTEM::TO_FLOAT(iLocal_23), 0xBF800000, 0xBF800000, 0xBF800000);
		if (Global_4C12)
		{
			if (iLocal_20 > 0x00000000)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		else
		{
			if (iLocal_20 > 0x00000000)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		}
		if (Global_12B4E)
		{
			func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
		}
		else
		{
			func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
		}
	}
	else
	{
		iLocal_23 = 0x00000000;
	}
}

void func_52(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(uParam0, sParam1);
	func_16(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_16(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_16(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_16(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_16(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_53()
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	int iVar6;
	int iVar7[10];
	int iVar8;
	
	iLocal_20 = 0x00000000;
	iLocal_21 = 0x00000000;
	func_30();
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar1 < 0x0000000B)
	{
		if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
		{
			func_61();
		}
		iVar3 = 0x00000000;
		iVar4 = 0x0000000B;
		Global_4121D4[iVar4 /*104*/].f_12 = 0xFFFFFFFF;
		Global_4121D4[iVar4 /*104*/].f_12.f_1 = 0x00000000;
		Global_4121D4[iVar4 /*104*/].f_12.f_2 = 0x00000000;
		Global_4121D4[iVar4 /*104*/].f_12.f_3 = 0x00000000;
		Global_4121D4[iVar4 /*104*/].f_12.f_5 = 0x00000000;
		while (iVar3 < 0x0000000C)
		{
			if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
			{
				func_61();
			}
			if (iVar0[iVar3] == 0x00000000)
			{
				if (Global_4121D4[iVar3 /*104*/].f_18 != 0x00000000)
				{
					if (Global_4121D4[iVar3 /*104*/].f_63[Global_4C1E] == 0x00000001)
					{
						if (func_57(Global_4121D4[iVar3 /*104*/].f_12, Global_4121D4[iVar4 /*104*/].f_12))
						{
							iVar4 = iVar3;
							if (Global_4121D4[iVar4 /*104*/].f_1C == 0x00000000)
							{
								iLocal_25 = 0x00000000;
							}
							else
							{
								iLocal_25 = 0x00000001;
							}
						}
					}
				}
			}
			iVar3++;
		}
		iLocal_19[iVar1] = iVar4;
		iVar0[iVar4] = 0x00000001;
		if (Global_4121D4[iVar4 /*104*/].f_18 != 0x00000000)
		{
			if (Global_4121D4[iVar4 /*104*/].f_63[Global_4C1E] == 0x00000001)
			{
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000008);
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x3CAEA85DA607305E(iLocal_25);
				unk_0x1200CC973A2399C8(0x00000000);
				if (Global_4121D4[iVar4 /*104*/].f_11 == 0x00000091)
				{
					unk_0x7ACC3006A87F8B39("CELL_2000");
					unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iVar4 /*104*/].f_32));
					unk_0x779B34565F4D71B1();
				}
				else
				{
					func_16(&(Global_706[Global_4121D4[iVar4 /*104*/].f_11 /*29*/].f_3));
				}
				Var5 = { Global_4121D4[iVar4 /*104*/] };
				if (func_43(&(Global_4121D4[iVar4 /*104*/])))
				{
					iVar6 = func_54(0x00001C93, 0xFFFFFFFF, 0xFFFFFFFF);
					switch (iVar6)
					{
						case 0x00000000:
							StringCopy(&Var5, "BONEMAIL_TXT_SUB", 64);
							break;
						
						case 0x00000001:
							StringCopy(&Var5, "BONEMAIL2_TXT_SUB", 64);
							break;
						
						case 0x00000002:
							StringCopy(&Var5, "BONEMAIL3_TXT_SUB", 64);
							break;
						
						case 0x00000003:
							StringCopy(&Var5, "BONEMAIL4_TXT_SUB", 64);
							break;
						
						case 0x00000004:
							StringCopy(&Var5, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else
				{
					StringConCat(&Var5, "_SUB", 64);
				}
				func_16(&Var5);
				unk_0x7E60D21B163E9D56();
				iLocal_20++;
				iLocal_21++;
			}
		}
		iVar1++;
	}
	iVar1 = iLocal_20;
	iVar8 = 0x00000000;
	while (iVar1 < (iLocal_44 + iLocal_20))
	{
		iVar2 = 0x00000000;
		iVar8 = 0x00000000;
		while (iVar2 < iLocal_44 && iVar8 == 0x00000000)
		{
			unk_0x113A2E2F6779EEA3(iVar2, &Local_45);
			if (iVar7[iVar2] == 0x00000000)
			{
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000008);
				unk_0x3CAEA85DA607305E(iVar1);
				if (iVar1 == 0x00000000)
				{
					if (Global_4121D3 == 0x00000000)
					{
						unk_0x3CAEA85DA607305E(0x00000001);
					}
					else
					{
						unk_0x3CAEA85DA607305E(0x00000000);
					}
				}
				else
				{
					unk_0x3CAEA85DA607305E(0x00000001);
				}
				unk_0x1200CC973A2399C8(0x00000000);
				unk_0x7ACC3006A87F8B39("CELL_2000");
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_2));
				unk_0x779B34565F4D71B1();
				unk_0x7ACC3006A87F8B39("CELL_EMAIL_SUBJ");
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_17[0x00000000 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_17[0x00000001 /*16*/]));
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
				iVar7[iVar2] = 0x00000001;
				iLocal_19[iVar1] = iVar2;
				iVar8 = 0x00000001;
				iLocal_20++;
				if (iVar2 == 0x00000000)
				{
					iLocal_40 = Local_45.f_1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_41();
	}
	iVar0 = 0x00000000;
	iVar1 = func_56(iParam0, iParam1);
	uVar2 = func_55(iParam0);
	if (0x00000000 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, uVar2, 0x00000008, iParam2))
		{
			iVar0 = 0x00000000;
		}
	}
	return iVar0;
}

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000180 && iParam0 < 0x000001C9)
	{
		iVar0 = ((iParam0 - 0x00000180) - unk_0x6D63D77257071BC5((iParam0 - 0x00000180)) * 8) * 8;
	}
	else if (iParam0 >= 0x000001C9 && iParam0 < 0x00000201)
	{
		iVar0 = ((iParam0 - 0x000001C9) - unk_0x6D63D77257071BC5((iParam0 - 0x000001C9)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000501 && iParam0 < 0x00000519)
	{
		iVar0 = ((iParam0 - 0x00000501) - unk_0x6D63D77257071BC5((iParam0 - 0x00000501)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000519 && iParam0 < 0x00000551)
	{
		iVar0 = ((iParam0 - 0x00000519) - unk_0x6D63D77257071BC5((iParam0 - 0x00000519)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000551 && iParam0 < 0x00000571)
	{
		iVar0 = ((iParam0 - 0x00000551) - unk_0x6D63D77257071BC5((iParam0 - 0x00000551)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000571 && iParam0 < 0x00000B67)
	{
		iVar0 = ((iParam0 - 0x00000571) - unk_0x6D63D77257071BC5((iParam0 - 0x00000571)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000102F && iParam0 < 0x0000106F)
	{
		iVar0 = ((iParam0 - 0x0000102F) - unk_0x6D63D77257071BC5((iParam0 - 0x0000102F)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000F27 && iParam0 < 0x0000102F)
	{
		iVar0 = ((iParam0 - 0x00000F27) - unk_0x6D63D77257071BC5((iParam0 - 0x00000F27)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000112F && iParam0 < 0x0000178C)
	{
		iVar0 = ((iParam0 - 0x0000112F) - unk_0x6D63D77257071BC5((iParam0 - 0x0000112F)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000190D && iParam0 < 0x00001C5E)
	{
		iVar0 = ((iParam0 - 0x0000190D) - unk_0x6D63D77257071BC5((iParam0 - 0x0000190D)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001C5E && iParam0 < 0x00001C91)
	{
		iVar0 = ((iParam0 - 0x00001C5E) - unk_0x6D63D77257071BC5((iParam0 - 0x00001C5E)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001E01 && iParam0 < 0x00002491)
	{
		iVar0 = ((iParam0 - 0x00001E01) - unk_0x6D63D77257071BC5((iParam0 - 0x00001E01)) * 8) * 8;
	}
	else if (iParam0 >= 0x00002551 && iParam0 < 0x00003BA1)
	{
		iVar0 = ((iParam0 - 0x00002551) - unk_0x6D63D77257071BC5((iParam0 - 0x00002551)) * 8) * 8;
	}
	else if (iParam0 >= 0x00003BA1 && iParam0 < 0x00003C09)
	{
		iVar0 = ((iParam0 - 0x00003BA1) - unk_0x6D63D77257071BC5((iParam0 - 0x00003BA1)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001C91 && iParam0 < 0x00001C99)
	{
		iVar0 = ((iParam0 - 0x00001C91) - unk_0x6D63D77257071BC5((iParam0 - 0x00001C91)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001DD9 && iParam0 < 0x00001E01)
	{
		iVar0 = ((iParam0 - 0x00001DD9) - unk_0x6D63D77257071BC5((iParam0 - 0x00001DD9)) * 8) * 8;
	}
	else if (iParam0 >= 0x00003E8A && iParam0 < 0x000046B2)
	{
		iVar0 = ((iParam0 - 0x00003E8A) - unk_0x6D63D77257071BC5((iParam0 - 0x00003E8A)) * 8) * 8;
	}
	else if (iParam0 >= 0x000046F2 && iParam0 < 0x00004A4A)
	{
		iVar0 = ((iParam0 - 0x000046F2) - unk_0x6D63D77257071BC5((iParam0 - 0x000046F2)) * 8) * 8;
	}
	else if (iParam0 >= 0x00004A4A && iParam0 < 0x00005632)
	{
		iVar0 = ((iParam0 - 0x00004A4A) - unk_0x6D63D77257071BC5((iParam0 - 0x00004A4A)) * 8) * 8;
	}
	else if (iParam0 >= 0x000056B2 && iParam0 < 0x00006182)
	{
		iVar0 = ((iParam0 - 0x000056B2) - unk_0x6D63D77257071BC5((iParam0 - 0x000056B2)) * 8) * 8;
	}
	else if (iParam0 >= 0x000063C2 && iParam0 < 0x000068BA)
	{
		iVar0 = ((iParam0 - 0x000063C2) - unk_0x6D63D77257071BC5((iParam0 - 0x000063C2)) * 8) * 8;
	}
	else if (iParam0 >= 0x00006A7A && iParam0 < 0x00006DC2)
	{
		iVar0 = ((iParam0 - 0x00006A7A) - unk_0x6D63D77257071BC5((iParam0 - 0x00006A7A)) * 8) * 8;
	}
	else if (iParam0 >= 0x00006F43 && iParam0 < 0x00007613)
	{
		iVar0 = ((iParam0 - 0x00006F43) - unk_0x6D63D77257071BC5((iParam0 - 0x00006F43)) * 8) * 8;
	}
	return iVar0;
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_41();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000180 && iParam0 < 0x000001C9)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000180), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000001C9 && iParam0 < 0x00000201)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x000001C9), 0x00000001, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x00000501 && iParam0 < 0x00000519)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000501), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000519 && iParam0 < 0x00000551)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000519), 0x00000001, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000551 && iParam0 < 0x00000571)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 0x00000551), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000571 && iParam0 < 0x00000B67)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 0x00000571), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x0000102F && iParam0 < 0x0000106F)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000102F), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 0x00000F27 && iParam0 < 0x0000102F)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00000F27), 0x00000000, 0x00000001, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 0x0000112F && iParam0 < 0x0000178C)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000112F), 0x00000000, 0x00000001, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 0x0000190D && iParam0 < 0x00001C5E)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000190D), 0x00000000, 0x00000001, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 0x00001C5E && iParam0 < 0x00001C91)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001C5E), 0x00000000, 0x00000001, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 0x00001E01 && iParam0 < 0x00002491)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001E01), 0x00000000, 0x00000001, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 0x00002551 && iParam0 < 0x00003BA1)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00002551), 0x00000000, 0x00000001, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 0x00003BA1 && iParam0 < 0x00003C09)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00003BA1), 0x00000000, 0x00000001, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 0x00001C91 && iParam0 < 0x00001C99)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001C91), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 0x00001DD9 && iParam0 < 0x00001E01)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001DD9), 0x00000000, 0x00000001, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 0x00003E8A && iParam0 < 0x000046B2)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00003E8A), 0x00000000, 0x00000001, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 0x000046F2 && iParam0 < 0x00004A4A)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000046F2), 0x00000000, 0x00000001, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 0x00004A4A && iParam0 < 0x00005632)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00004A4A), 0x00000000, 0x00000001, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 0x000056B2 && iParam0 < 0x00006182)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000056B2), 0x00000000, 0x00000001, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 0x000063C2 && iParam0 < 0x000068BA)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000063C2), 0x00000000, 0x00000001, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 0x00006A7A && iParam0 < 0x00006DC2)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00006A7A), 0x00000000, 0x00000001, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 0x00006F43 && iParam0 < 0x00007613)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00006F43), 0x00000000, 0x00000001, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_57(struct<6> Param0, struct<6> Param1)
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

void func_58(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_59()
{
	switch (unk_0xB3260A60545D3F11())
	{
		case 0xFFFFFFFF:
			unk_0xE22E533456FE806D("gta5mkt_en");
			break;
		
		case 0x00000000:
			unk_0xE22E533456FE806D("gta5mkt_en");
			break;
		
		case 0x00000001:
			unk_0xE22E533456FE806D("gta5mkt_fr");
			break;
		
		case 0x00000002:
			unk_0xE22E533456FE806D("gta5mkt_ge");
			break;
		
		case 0x00000003:
			unk_0xE22E533456FE806D("gta5mkt_it");
			break;
		
		case 0x00000004:
			unk_0xE22E533456FE806D("gta5mkt_sp");
			break;
		
		case 0x00000005:
			unk_0xE22E533456FE806D("gta5mkt_pt");
			break;
		
		case 0x00000006:
			unk_0xE22E533456FE806D("gta5mkt_pl");
			break;
		
		case 0x00000007:
			unk_0xE22E533456FE806D("gta5mkt_ru");
			break;
		
		case 0x00000008:
			unk_0xE22E533456FE806D("gta5mkt_ko");
			break;
		
		case 0x00000009:
			unk_0xE22E533456FE806D("gta5mkt_ch");
			break;
		
		case 0x0000000A:
			unk_0xE22E533456FE806D("gta5mkt_ja");
			break;
		
		case 0x0000000B:
			unk_0xE22E533456FE806D("gta5mkt_me");
			break;
		
		case 0x0000000C:
			unk_0xE22E533456FE806D("gta5mkt_cn");
			break;
	}
	unk_0xF51E39152845129E(0x00000000, 0x00000006);
	SYSTEM::WAIT(0x00000000);
	iLocal_41 = 0x00000001;
	bLocal_42 = 0x00000000;
	while (iLocal_41 && Global_4C1E.f_1 > 0x00000003)
	{
		SYSTEM::WAIT(0x00000000);
		iLocal_43 = unk_0x449444B0F7CC649C();
		if (func_4())
		{
			Global_4C1E.f_1 = 0x00000003;
			iLocal_41 = 0x00000000;
			bLocal_42 = 0x00000000;
		}
		switch (iLocal_43)
		{
			case 0x00000003:
				iLocal_41 = 0x00000000;
				bLocal_42 = 0x00000001;
				break;
			
			case 0x00000000:
				iLocal_41 = 0x00000000;
				bLocal_42 = 0x00000001;
				break;
			
			case 0x00000001:
				break;
			
			case 0x00000004:
				iLocal_41 = 0x00000000;
				bLocal_42 = 0x00000000;
				break;
			
			case 0x00000002:
				iLocal_41 = 0x00000000;
				bLocal_42 = 0x00000000;
				break;
		}
	}
	if (bLocal_42)
	{
		iLocal_44 = unk_0xD86624A40067B84F();
	}
	else
	{
		iLocal_44 = 0x00000000;
	}
}

void func_60()
{
	StringCopy(&(Local_35[0x00000000 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_36[0x00000000 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[0x00000001 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_36[0x00000001 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[0x00000002 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_36[0x00000002 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[0x00000003 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_36[0x00000003 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_35[0x00000004 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_36[0x00000004 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_35[0x00000005 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_36[0x00000005 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_35[0x00000006 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_36[0x00000006 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[0x00000007 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_36[0x00000007 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[0x00000008 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_36[0x00000008 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[0x00000009 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_36[0x00000009 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[0x0000000A /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_36[0x0000000A /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[0x0000000B /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_36[0x0000000B /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[0x0000000C /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_36[0x0000000C /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_35[0x0000000D /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_36[0x0000000D /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_35[0x0000000E /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_36[0x0000000E /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_35[0x0000000F /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_36[0x0000000F /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[0x00000010 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_36[0x00000010 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[0x00000011 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_36[0x00000011 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[0x00000012 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_36[0x00000012 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_35[0x00000013 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_36[0x00000013 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_35[0x00000014 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_36[0x00000014 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_35[0x00000015 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_36[0x00000015 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_35[0x00000016 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_36[0x00000016 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_35[0x00000017 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_36[0x00000017 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_35[0x00000018 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_36[0x00000018 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_35[0x00000019 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_36[0x00000019 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_35[0x0000001A /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_36[0x0000001A /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_35[0x0000001B /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_36[0x0000001B /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_35[0x0000001C /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_36[0x0000001C /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_35[0x0000001D /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_36[0x0000001D /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_35[0x0000001E /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_36[0x0000001E /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_35[0x0000001F /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_36[0x0000001F /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_35[0x00000020 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_36[0x00000020 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_35[0x00000021 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_36[0x00000021 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_35[0x00000022 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_36[0x00000022 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_35[0x00000023 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_36[0x00000023 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_35[0x00000024 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_36[0x00000024 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_35[0x00000025 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_36[0x00000025 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_35[0x00000026 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_36[0x00000026 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_35[0x00000027 /*6*/]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_36[0x00000027 /*16*/]), "", 64);
	StringCopy(&(Local_35[0x00000028 /*6*/]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_36[0x00000028 /*16*/]), "", 64);
	StringCopy(&(Local_35[0x00000029 /*6*/]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_36[0x00000029 /*16*/]), "", 64);
	StringCopy(&(Local_35[0x0000002A /*6*/]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_36[0x0000002A /*16*/]), "", 64);
	StringCopy(&(Local_35[0x0000002B /*6*/]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_36[0x0000002B /*16*/]), "", 64);
	StringCopy(&(Local_35[0x0000002C /*6*/]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_36[0x0000002C /*16*/]), "", 64);
	StringCopy(&(Local_35[0x0000002D /*6*/]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_36[0x0000002D /*16*/]), "", 64);
	StringCopy(&(Local_35[0x0000002E /*6*/]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_36[0x0000002E /*16*/]), "", 64);
	StringCopy(&(Local_35[0x0000002F /*6*/]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_36[0x0000002F /*16*/]), "", 64);
	StringCopy(&(Local_35[0x00000030 /*6*/]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_36[0x00000030 /*16*/]), "", 64);
	StringCopy(&(Local_35[0x00000031 /*6*/]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_36[0x00000031 /*16*/]), "", 64);
	StringCopy(&(Local_35[0x00000032 /*6*/]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_36[0x00000032 /*16*/]), "", 64);
	StringCopy(&(Local_35[0x00000033 /*6*/]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_36[0x00000033 /*16*/]), "", 64);
	StringCopy(&(Local_35[0x00000034 /*6*/]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_36[0x00000034 /*16*/]), "", 64);
	StringCopy(&(Local_35[0x00000035 /*6*/]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_36[0x00000035 /*16*/]), "", 64);
	StringCopy(&(Local_35[0x00000036 /*6*/]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_36[0x00000036 /*16*/]), "", 64);
	StringCopy(&(Local_35[0x00000037 /*6*/]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_36[0x00000037 /*16*/]), "", 64);
	StringCopy(&(Local_35[0x00000038 /*6*/]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_36[0x00000038 /*16*/]), "", 64);
	StringCopy(&(Local_35[0x00000039 /*6*/]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_36[0x00000039 /*16*/]), "", 64);
	StringCopy(&(Local_35[0x0000003A /*6*/]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_36[0x0000003A /*16*/]), "", 64);
}

void func_61()
{
	if (func_49() == 0x00000000)
	{
		unk_0x39F06A2B18483C68(Global_4BEF[Global_4BE7 /*3*/]);
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
	{
		func_62(0x00000000);
	}
	if (iLocal_37)
	{
		unk_0xF5A41F3D3B38EFE3(&Local_34);
	}
	Global_554F = 0x00000000;
	Global_554E = 0x00000000;
	unk_0x10FAF14A60A0DBE1();
}

void func_62(int iParam0)
{
	if (func_67())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_66())
		{
			func_64(0x00000001, 0x00000001);
		}
		else
		{
			func_64(0x00000000, 0x00000000);
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
	if (!func_63())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_63()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_64(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_65(0x00000000))
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

int func_65(int iParam0)
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

bool func_66()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_67()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

