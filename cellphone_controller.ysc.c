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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43[4] = { 0, 0, 0, 0 };
	int iLocal_44[4] = { 0, 0, 0, 0 };
	int iLocal_45[4] = { 0, 0, 0, 0 };
	int iLocal_46[4] = { 0, 0, 0, 0 };
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
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
	int iLocal_65 = 0;
	bool bLocal_66 = 0;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
#endregion

void __EntryFunction__()
{
	struct<57> Var0;
	int iVar1;
	
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 0x00000003;
	fLocal_39 = 0f;
	fLocal_40 = 0f;
	fLocal_70 = 0.95f;
	fLocal_71 = 0.07f;
	fLocal_72 = 0.755f;
	iLocal_81 = 0x0000270F;
	unk_0xB57F88F0123F4C38();
	Global_1B3DC = unk_0x1C0640BA9A7327B3();
	func_130();
	func_128();
	func_126();
	Global_4C1E.f_1 = 0x00000003;
	Global_4C12 = 0x00000000;
	Global_4CD2 = 0x00000000;
	Global_5550 = 0x00000000;
	Var0.f_17 = 0x00000002;
	Var0.f_38 = 0x00000010;
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (Global_4C1E.f_1 > 0x00000003)
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000151, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000161, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000162, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000165, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000161, 0x00000001);
		}
		if (iLocal_79 == 0x00000000)
		{
			if (unk_0x8CD06866876216F2())
			{
				iLocal_79 = 0x00000001;
				iLocal_81 = func_123(0x000026FC, 0xFFFFFFFF, 0x00000000);
			}
		}
		else if (unk_0x8CD06866876216F2())
		{
			if (iLocal_79 == 0x00000001)
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
				unk_0xF51E39152845129E(0x00000000, 0x00000001);
				iLocal_79 = 0x00000002;
			}
			if (iLocal_79 == 0x00000002)
			{
				iLocal_80 = unk_0x449444B0F7CC649C();
				switch (iLocal_80)
				{
					case 0x00000003:
						break;
					
					case 0x00000000:
						if (unk_0xD86624A40067B84F() > 0x00000000)
						{
							unk_0x113A2E2F6779EEA3(0x00000000, &Var0);
							if (Var0.f_1 != iLocal_81)
							{
								Global_4121D3 = 0x00000001;
							}
							else
							{
								Global_4121D3 = 0x00000000;
							}
						}
						iLocal_79 = 0x00000003;
						break;
					
					case 0x00000001:
						break;
					
					case 0x00000004:
						Global_4121D3 = 0x00000000;
						iLocal_79 = 0x00000003;
						break;
					}
			}
		}
		else
		{
			Global_4121D3 = 0x00000000;
			iLocal_79 = 0x00000000;
		}
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0x1C53FD812DB1E31C())
			{
				if (Global_4C1E.f_1 == 0x00000006)
				{
					Global_4C1E.f_1 = 0x00000003;
				}
			}
		}
		if (func_122(0x00000092))
		{
			if (Global_12B4E == 0x00000000)
			{
				iVar1 = func_90(0x00000000, 0x00000000, 0x00000077);
				if (iVar1 != 0x00000000)
				{
					func_88(iVar1);
				}
				else
				{
					func_87();
				}
				func_83(0x00000000);
			}
		}
		if (Global_26B66F.f_11BF == 0x00000001)
		{
			if (Global_4C1E.f_1 > 0x00000003)
			{
				Global_4C1E.f_1 = 0x00000003;
			}
		}
		if (Global_12B4E == 0x00000001)
		{
			if (Global_4C1E.f_1 == 0x00000003)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000F))
				{
					unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000000E);
					SYSTEM::WAIT(0x00000000);
					while (!func_81(0x00000003, 0x00000000, 0x00000001, 0x00000000))
					{
						SYSTEM::WAIT(0x00000000);
					}
					unk_0x0674E58A79778E99(&Global_4126C5, 0x0000000E);
					unk_0x0674E58A79778E99(&Global_4126C5, 0x0000000F);
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000010))
				{
					unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000000E);
					SYSTEM::WAIT(0x00000000);
					while (!func_81(0x00000011, 0x00000000, 0x00000001, 0x00000000))
					{
						SYSTEM::WAIT(0x00000000);
					}
					unk_0x0674E58A79778E99(&Global_4126C5, 0x0000000E);
					unk_0x0674E58A79778E99(&Global_4126C5, 0x00000010);
					unk_0x0674E58A79778E99(&Global_4126C5, 0x0000001B);
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000001B))
				{
					unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000000E);
					SYSTEM::WAIT(0x00000000);
					while (!func_81(0x00000017, 0x00000000, 0x00000001, 0x00000000))
					{
						SYSTEM::WAIT(0x00000000);
					}
					unk_0x0674E58A79778E99(&Global_4126C5, 0x0000000E);
					unk_0x0674E58A79778E99(&Global_4126C5, 0x00000010);
					unk_0x0674E58A79778E99(&Global_4126C5, 0x0000001B);
				}
			}
		}
		if (Global_12B4E == 0x00000000)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000B))
			{
				if ((Global_4C1E.f_1 != 0x0000000A && Global_4C1E.f_1 != 0x00000009) || func_80() == 0x00000000)
				{
					unk_0x0674E58A79778E99(&Global_4126C5, 0x0000000B);
					unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000B);
				}
			}
			else if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
			{
				if (func_80())
				{
					unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000000B);
					unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000B);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000C))
			{
				unk_0x0674E58A79778E99(&Global_4126C5, 0x0000000C);
				unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000B);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000C))
		{
			if ((Global_556C == 0x00000000 || Global_556D == 0x00000000) && !Global_556E)
			{
				unk_0x0674E58A79778E99(&Global_4126C5, 0x0000000C);
				unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000B);
			}
		}
		else if (Global_556E || (Global_556C > 0x00000000 && Global_556D == 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&Global_4126C5, 0x0000000C);
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000B);
		}
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0x401DDE1C0632EE3E())
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000013))
				{
					unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000013);
					unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000B);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000013))
			{
				unk_0x0674E58A79778E99(&Global_4126C5, 0x00000013);
				unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000B);
			}
		}
		if (iLocal_77 == 0x00000000)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000019))
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp_cellphone_sleep_time"), &iLocal_76, 0xFFFFFFFF);
				iLocal_74 = unk_0x1C0640BA9A7327B3();
				iLocal_77 = 0x00000001;
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000019))
		{
			unk_0x6FB46C25CCB7E6D5(joaat("sp_cellphone_sleep_time"), &iLocal_76, 0xFFFFFFFF);
			iLocal_75 = unk_0x1C0640BA9A7327B3();
			iLocal_77 = 0x00000000;
			unk_0xCDC520E5E48E63D9(joaat("sp_cellphone_sleep_time"), (iLocal_76 + (iLocal_75 - iLocal_74)), 0x00000001);
		}
		func_79();
		func_78();
		func_77();
		func_75();
		func_58();
		func_57();
		func_56();
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000015))
		{
			if (!unk_0x5F7EAC0C9FFB97C3())
			{
				unk_0x0674E58A79778E99(&Global_1CBD, 0x00000015);
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000007))
		{
			func_52();
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000007);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000000))
		{
			func_51();
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000000))
		{
			func_50();
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000000B))
		{
			Global_1F7C = 0x00000000;
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000019))
			{
				Global_1F7C++;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000B))
			{
				if (Global_12B4E == 0x00000000)
				{
					Global_1F7C++;
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000001C))
			{
				if (Global_12B4E == 0x00000001)
				{
					Global_1F7C++;
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000C))
			{
				if (Global_12B4E && (Global_556D || Global_556E))
				{
					Global_1F7C++;
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000013))
			{
				Global_1F7C++;
			}
			if (Global_1F7C == 0x00000000)
			{
				unk_0x0674E58A79778E99(&Global_1CBD, 0x0000000B);
				iLocal_41 = 0x00000000;
			}
			else
			{
				iLocal_41 = 0x00000001;
			}
		}
		if (!func_49())
		{
			if (!unk_0xE57E602827E07C9D())
			{
				if (Global_4C1E.f_1 == 0x00000003)
				{
					if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) || unk_0x1F878AB5FD18360C())
						{
							if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
							{
								if (Global_12B4E)
								{
									func_36();
								}
								else
								{
									func_36();
								}
							}
						}
					}
				}
			}
			if (Global_4C1E.f_1 == 0x00000004)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000015))
				{
					func_36();
				}
			}
			func_22();
		}
		else if (func_15())
		{
		}
		switch (Global_5550)
		{
			case 0x00000000:
				func_14();
				if (Global_5552 == 0x00000001)
				{
					func_13();
				}
				break;
			
			case 0x00000001:
				func_12();
				break;
			
			case 0x00000002:
				func_11();
				break;
			
			case 0x00000003:
				func_10();
				break;
			
			case 0x00000004:
				func_9();
				break;
			
			case 0x00000005:
				func_8();
				break;
			
			case 0x0000000E:
				func_13();
				break;
			
			case 0x00000006:
				if (Global_5552 == 0x00000001)
				{
					func_13();
				}
				if (Global_5553 == 0x00000001)
				{
					Global_5550 = 0x00000009;
					Global_5553 = 0x00000000;
				}
				break;
			
			case 0x00000008:
				func_7();
				break;
			
			case 0x00000009:
				func_5();
				break;
			
			case 0x0000000A:
				func_4();
				break;
			
			case 0x0000000B:
				func_3();
				break;
			
			case 0x0000000C:
				func_2();
				break;
			
			case 0x0000000D:
				func_1();
				break;
		}
	}
}

void func_1()
{
	iLocal_54 = unk_0x999665F5C5096561(Global_5554);
	switch (iLocal_54)
	{
		case 0x00000000:
			Global_5550 = 0x00000004;
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000F);
			func_13();
			break;
	}
}

void func_2()
{
	if (unk_0xF5EAA7A27BF2EA26(Global_5554))
	{
		Global_5550 = 0x0000000D;
	}
	else
	{
		func_13();
	}
}

void func_3()
{
	if (unk_0x8CD06866876216F2())
	{
		iLocal_52 = unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iLocal_50);
	}
	else
	{
		iLocal_51 = unk_0x1C0640BA9A7327B3();
		iLocal_52 = (iLocal_51 - iLocal_49);
	}
	if (iLocal_52 > 0x00000BB8)
	{
		unk_0xBBCE9616B024A2BF();
	}
	if (iLocal_52 > 0x00000C80)
	{
		Global_5550 = 0x00000006;
	}
}

void func_4()
{
	iLocal_54 = unk_0x1CBC147A54B74BEE();
	switch (iLocal_54)
	{
		case 0x00000000:
			if (unk_0x8CD06866876216F2())
			{
				iLocal_50 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				iLocal_49 = unk_0x1C0640BA9A7327B3();
			}
			Global_5550 = 0x0000000B;
			SYSTEM::SETTIMERB(0x00000000);
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			func_13();
			break;
	}
}

void func_5()
{
	Global_5555 = 0xFFFFFFFF;
	if (Global_12B4E)
	{
		if (func_6())
		{
			unk_0xCE35EEB9AA78063E(Global_440000.f_372EA, Global_440000.f_372EA.f_1);
		}
	}
	if (unk_0xCE2F82FC54F45215(Global_5555))
	{
		Global_5550 = 0x0000000A;
		unk_0xFCC7D1ED80D1900C("CELL_278");
		unk_0x9A681BEC95A1B92E(0x00000001);
	}
	else
	{
		func_13();
	}
}

bool func_6()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 0x0000000C);
}

void func_7()
{
	iLocal_54 = unk_0x57AA1C471AF0568D(0x00000001);
	switch (iLocal_54)
	{
		case 0x00000000:
			Global_5550 = 0x00000009;
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			func_13();
			break;
	}
}

void func_8()
{
	iLocal_54 = unk_0xBD5126B98C370631(iLocal_55);
	switch (iLocal_54)
	{
		case 0x00000000:
			unk_0x918CFFD78ECE297E(0x00000001, 0x00000001);
			Global_5550 = 0x00000006;
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			if (iLocal_55 == 0x00000003)
			{
				unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000E);
				unk_0x918CFFD78ECE297E(0x00000000, 0x00000000);
				unk_0xFBFE41B3E19EA531();
				unk_0xAA23F71817ABF488();
				Global_5550 = 0x00000006;
			}
			if (Global_5550 == 0x00000005)
			{
				if (iLocal_55 == 0x00000000)
				{
					Global_5550 = 0x00000004;
					iLocal_55 = 0x00000001;
					unk_0xAA23F71817ABF488();
					SYSTEM::WAIT(0x00000000);
				}
			}
			if (Global_5550 == 0x00000005)
			{
				if (iLocal_55 == 0x00000001)
				{
					Global_5550 = 0x00000004;
					iLocal_55 = 0x00000002;
					unk_0xAA23F71817ABF488();
					SYSTEM::WAIT(0x00000000);
				}
			}
			if (Global_5550 == 0x00000005)
			{
				if (iLocal_55 == 0x00000002)
				{
					Global_5550 = 0x00000004;
					iLocal_55 = 0x00000003;
					unk_0xAA23F71817ABF488();
					SYSTEM::WAIT(0x00000000);
				}
			}
			break;
	}
}

void func_9()
{
	if (unk_0xC3917178EB977D00(iLocal_55))
	{
		Global_5550 = 0x00000005;
	}
	else
	{
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x0000000F);
		func_13();
	}
}

void func_10()
{
	iLocal_54 = unk_0x4C8A5596D4C298E1();
	switch (iLocal_54)
	{
		case 0x00000000:
			Global_5550 = 0x00000004;
			iLocal_55 = 0x00000002;
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			Global_4C1E.f_1 = 0x00000003;
			func_13();
			break;
	}
}

void func_11()
{
	if (unk_0x56EAFFD9AD82C7DB())
	{
		Global_5550 = 0x00000003;
	}
}

void func_12()
{
	if (SYSTEM::TIMERB() > 0x00000000)
	{
		Global_5550 = 0x00000002;
	}
}

void func_13()
{
	unk_0x918CFFD78ECE297E(0x00000000, 0x00000000);
	unk_0xFBFE41B3E19EA531();
	unk_0xAA23F71817ABF488();
	unk_0xBBCE9616B024A2BF();
	Global_5551 = 0x00000000;
	Global_5552 = 0x00000000;
	Global_5553 = 0x00000000;
	Global_5550 = 0x00000000;
}

void func_14()
{
	if (Global_5551)
	{
		Global_5550 = 0x00000001;
		unk_0x0674E58A79778E99(&Global_1CBD, 0x0000000E);
		SYSTEM::SETTIMERB(0x00000000);
	}
}

int func_15()
{
	char* sVar0;
	
	if ((func_21(0x00000002, Global_4BFD, 0x00000000) && !unk_0x2F1FB0453B36C270(0x00000013)) && !unk_0x1C53FD812DB1E31C())
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0x30F813723591D02E(unk_0x16F2683693E537C9(), "Synched"))
			{
				sVar0 = unk_0x19C9F30A7697B43C("CELL_ANTIH_A");
				unk_0x1E64CE678ED5F61E("CELL_ANTIH");
				unk_0x1AEA174B291A9906("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0x00000000, 0x00000000, sVar0, 0x00000000);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_20(unk_0x16F2683693E537C9()) || unk_0x94F82DAA81C2AAD7(unk_0x16F2683693E537C9()))
			{
				if (unk_0x06F8112AA79C53D9(0x00000000, 0x00000019) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000044))
				{
					return 0x00000000;
				}
			}
		}
		Global_5568 = 0x00000000;
		Global_5569 = 0x00000000;
		if (unk_0xBDD2783AC01021A9() == Global_5566 && unk_0xBDD2783AC01021A9() != 0xFFFFFFFF)
		{
			Global_5568 = Global_5567;
			iLocal_58 = unk_0x1C0640BA9A7327B3();
			iLocal_60 = 0x00000000;
			iLocal_61 = 0x00000000;
			while (((func_19(0x00000002, Global_4BFD) && iLocal_60 < 0x000000FA) && Global_4CD8 == 0x00000000) && !unk_0x2F1FB0453B36C270(0x00000013))
			{
				if (Global_1F7C > 0x00000000)
				{
					func_16();
				}
				SYSTEM::WAIT(0x00000000);
				iLocal_59 = unk_0x1C0640BA9A7327B3();
				iLocal_60 = (iLocal_59 - iLocal_58);
				if (Global_1F7C > 0x00000000)
				{
					func_16();
				}
			}
			if ((func_19(0x00000002, Global_4BFD) && Global_4CD8 == 0x00000000) && !unk_0x2F1FB0453B36C270(0x00000013))
			{
				iLocal_61 = 0x00000001;
			}
			if (Global_4CD8 == 0x00000000)
			{
				if (iLocal_61 == 0x00000001)
				{
					Global_5569 = 0x00000001;
					Global_5568 = Global_5567;
					if (Global_5568 == 0x00000001)
					{
					}
					if (Global_5568 == 0x00000002)
					{
					}
					if (Global_5568 == 0x00000003)
					{
					}
					if (Global_5568 == 0x00000000)
					{
					}
					if (Global_5568 == 0x00000004)
					{
					}
				}
				else
				{
					Global_5568 = 0x00000000;
				}
			}
			else
			{
				Global_5568 = 0x00000000;
			}
		}
		else
		{
			Global_5568 = 0x00000000;
		}
		if (!unk_0x2F1FB0453B36C270(0x00000013))
		{
			return 0x00000001;
		}
		else
		{
			Global_5568 = 0x00000000;
			Global_5569 = 0x00000000;
			return 0x00000000;
		}
	}
	return 0x00000000;
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0x000000FF;
	if (Global_556E)
	{
		fLocal_71 = -0.055f;
		fLocal_72 = 0.745f;
		fLocal_67 = unk_0x57C534E6A9384F53();
		fLocal_73 = ((100f * fLocal_70) - (100f * fLocal_67));
		fLocal_68 = (fLocal_71 + (fLocal_73 * 0.005f));
		fLocal_69 = (fLocal_72 - (fLocal_73 * 0.005f));
		if (!func_18())
		{
			unk_0x5DD950F92F816F03(0x00000001);
			unk_0xD9ACBBA59FD5A09E(0x00000007);
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x5C2F36261860039A();
			}
			unk_0xEF45C43067063F18(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 0x000000FF, 0x000000FF, 0x000000FF, iVar0, 0x00000000);
			unk_0x5DD950F92F816F03(0x00000000);
			unk_0xD9ACBBA59FD5A09E(0x00000004);
		}
	}
	else
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (Global_24DDCF.f_636)
			{
				bLocal_38 = 0x00000000;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000D))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000013))
				{
					bLocal_38 = 0x00000000;
				}
				else
				{
					bLocal_38 = 0x00000001;
				}
			}
			else
			{
				bLocal_38 = 0x00000000;
			}
		}
		else if (Global_24DDCF.f_636 || unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000D))
		{
			bLocal_38 = 0x00000001;
		}
		else
		{
			bLocal_38 = 0x00000000;
		}
		if (func_49())
		{
			bLocal_38 = 0x00000001;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000001C))
		{
			iVar0 = 0x0000007D;
			if (bLocal_38 == 0x00000001)
			{
				bLocal_38 = 0x00000000;
			}
		}
		if (unk_0x354AEB4A9EE525A6())
		{
			if (!unk_0x0178C60FEA5C5A75())
			{
				if (!bLocal_38)
				{
					if (!func_17())
					{
						if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
						{
							if (!unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
							{
								unk_0xD9ACBBA59FD5A09E(0x00000004);
								if (unk_0x0EFF6B4415DAF4A1() && Global_24DDCF.f_636)
								{
									fLocal_71 = 0.165f;
									fLocal_72 = 0.755f;
								}
								else
								{
									fLocal_71 = 0.07f;
									fLocal_72 = 0.755f;
								}
								fLocal_67 = unk_0x57C534E6A9384F53();
								fLocal_73 = ((100f * fLocal_70) - (100f * fLocal_67));
								fLocal_68 = (fLocal_71 + (fLocal_73 * 0.005f));
								fLocal_69 = (fLocal_72 - (fLocal_73 * 0.005f));
								if (!func_18())
								{
									if (unk_0x0EFF6B4415DAF4A1())
									{
										unk_0x5C2F36261860039A();
									}
									if (Global_24DDCF.f_636)
									{
										fLocal_39 = 0.09f;
										fLocal_40 = -0.25f;
										if (unk_0x0EFF6B4415DAF4A1())
										{
											if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000001C))
											{
											}
											else
											{
												unk_0xEF45C43067063F18(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 0x000000FF, 0x000000FF, 0x000000FF, iVar0, 0x00000000);
											}
										}
										else
										{
											unk_0xEF45C43067063F18(iLocal_37, (fLocal_68 + fLocal_39), (fLocal_69 + fLocal_40), 0.27f, 0.45f, 0x000000FF, 0x000000FF, 0x000000FF, iVar0, 0x00000000);
										}
									}
									else
									{
										unk_0xEF45C43067063F18(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 0x000000FF, 0x000000FF, 0x000000FF, iVar0, 0x00000000);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_17()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcamera")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_18()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBE, 0x00000003))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_19(int iParam0, int iParam1)
{
	if (unk_0x06F8112AA79C53D9(iParam0, iParam1))
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0xDAC65F45B0B2D176() == 0x00000000)
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

int func_20(int iParam0)
{
	int iVar0;
	
	if (unk_0x18AF0C72ABD5543B())
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0x00000001);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 0x0A914799)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_21(int iParam0, int iParam1, int iParam2)
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

void func_22()
{
	switch (Global_4C1E.f_1)
	{
		case 0x00000004:
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000015))
			{
			}
			else
			{
				if (unk_0x1727A44C562FBED2(Global_4C1B))
				{
				}
				else
				{
					if (!unk_0x1727A44C562FBED2(Global_4C1B))
					{
						if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
						{
							unk_0x92DCE5C81176D2B4("cellphone_flashhand");
							while (!unk_0x1FBF08B001C4788A("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0x00000000);
								if (Global_1F7C > 0x00000000)
								{
									func_16();
								}
							}
							if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
							{
								Global_4C1B = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 0x00000590);
							}
							unk_0x5E8C29AE121DF1C7("cellphone_flashhand");
						}
					}
					func_35(0x00000000);
				}
				if (Global_514F || Global_5150)
				{
					if (!unk_0x1727A44C562FBED2(Global_4C1B))
					{
						if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
						{
							unk_0x92DCE5C81176D2B4("cellphone_flashhand");
							while (!unk_0x1FBF08B001C4788A("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0x00000000);
								if (Global_1F7C > 0x00000000)
								{
									func_16();
								}
							}
							if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
							{
								Global_4C1B = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 0x00000590);
							}
							unk_0x5E8C29AE121DF1C7("cellphone_flashhand");
						}
					}
					while (!unk_0x83D8570832F172A7(Global_4C0B) && Global_4C0D == 0x00000000)
					{
						SYSTEM::WAIT(0x00000000);
						if (Global_1F7C > 0x00000000)
						{
							func_16();
						}
					}
					if (Global_4C0D == 0x00000000)
					{
						Global_4C1E.f_1 = 0x00000009;
						func_23();
					}
				}
				else
				{
					bLocal_66 = 0x00000000;
					if (Global_12B4E && (Global_556B || Global_18D301.f_5))
					{
						bLocal_66 = 0x00000001;
					}
					if (((Global_1B416.f_36DE[Global_4C1E /*20*/].f_12 == 0x00000001 || Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 == 0x00000001) || bLocal_66 == 0x00000001) || Global_5568 != 0x00000000)
					{
						while (!unk_0x83D8570832F172A7(Global_4C0B) && Global_4C0D == 0x00000000)
						{
							SYSTEM::WAIT(0x00000000);
							if (Global_1F7C > 0x00000000)
							{
								func_16();
							}
						}
						if (Global_4C0D == 0x00000000)
						{
							if (Global_4C1E.f_1 > 0x00000003)
							{
								Global_4C1E.f_1 = 0x00000006;
								if (Global_5568 == 0x00000000)
								{
									if (bLocal_66)
									{
									}
									else if (Global_12B4E == 0x00000000)
									{
										if (Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 == 0x00000001)
										{
											func_81(0x00000001, 0x00000000, 0x00000001, 0x00000000);
										}
									}
								}
								else
								{
									if (Global_5568 == 0x00000003)
									{
									}
									if (Global_5568 == 0x00000001)
									{
									}
									if (Global_5568 == 0x00000002)
									{
									}
									if (Global_5568 == 0x00000004)
									{
									}
								}
							}
						}
					}
					else
					{
						while (!unk_0x83D8570832F172A7(Global_4C0B) && Global_4C0D == 0x00000000)
						{
							SYSTEM::WAIT(0x00000000);
							if (Global_1F7C > 0x00000000)
							{
								func_16();
							}
						}
						if (Global_4C0D == 0x00000000)
						{
							if (Global_4C1E.f_1 > 0x00000003)
							{
								if (Global_514F || Global_5150)
								{
									Global_4C1E.f_1 = 0x00000009;
								}
								else
								{
									Global_4C1E.f_1 = 0x00000006;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_23()
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
			func_34(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_32(Global_1F19);
			if (Global_1F19 == 0x00000001)
			{
				func_34(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C22), 0xBF800000, 0xBF800000, 0xBF800000);
				Global_4C0A = Global_4C22;
			}
			else
			{
				func_34(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C23), 0xBF800000, 0xBF800000, 0xBF800000);
				Global_4C0A = Global_4C23;
			}
			if (Global_4C12)
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_31(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_31(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (Global_4CD2 == 0x00000000)
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			}
			else if (Global_12B4E)
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			}
			else
			{
				if (Global_4CD1 == 0x00000001)
				{
					if (Global_4C12)
					{
						func_31(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_31(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if (Global_4C12)
				{
					func_31(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					func_31(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
			}
			if (Global_12B4E)
			{
				func_29();
				unk_0x0674E58A79778E99(&Global_1CBE, 0x00000009);
				func_34(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C22), 0xBF800000, 0xBF800000, 0xBF800000);
			}
			break;
		
		case 0x00000007:
			break;
		
		case 0x0000000A:
			func_34(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_31(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_31(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				if (Global_4BE5)
				{
					func_31(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			else
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			break;
		
		case 0x00000009:
			if (Global_4C1D == 0x00000001)
			{
				func_28();
				func_34(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				if (Global_5152)
				{
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000004);
					unk_0x3CAEA85DA607305E(0x00000000);
					unk_0x3CAEA85DA607305E(0x00000002);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_5154);
					unk_0x779B34565F4D71B1();
					func_27("CELL_300");
					func_27("CELL_217");
					func_27("CELL_217");
					unk_0x7E60D21B163E9D56();
				}
				else if (func_26(Global_1A0F, Global_4C1E) == 0x00000000)
				{
					func_31(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000002), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0x00000000);
				}
				else
				{
					func_31(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000002), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), "CELL_217", &(Global_706[Global_1A0F /*29*/].f_3), 0x00000000);
				}
				func_34(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
			else if (Global_5145 == 0x00000004 || Global_5145 == 0x00000003)
			{
				func_34(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
				func_28();
				if (Global_5152)
				{
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000004);
					unk_0x3CAEA85DA607305E(0x00000000);
					unk_0x3CAEA85DA607305E(0x00000002);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_5154);
					unk_0x779B34565F4D71B1();
					func_27("CELL_300");
					func_27("CELL_219");
					func_27("CELL_219");
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
					if (func_26(Global_1A0F, Global_4C1E) == 0x00000000)
					{
						func_34(Global_4C0B, "SET_DATA_SLOT_EMPTY", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						func_31(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000003), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0x00000000);
					}
					else
					{
						func_34(Global_4C0B, "SET_DATA_SLOT_EMPTY", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
						func_31(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000004), SYSTEM::TO_FLOAT(0x00000000), SYSTEM::TO_FLOAT(0x00000003), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), &cVar0, &(Global_706[Global_1A0F /*29*/].f_3), 0x00000000);
					}
				}
				func_34(Global_4C0B, "DISPLAY_VIEW", 4f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			}
			func_24();
			break;
		
		default:
			break;
	}
}

void func_24()
{
	if (unk_0x83D8570832F172A7(Global_4C0B))
	{
		func_25();
		if (Global_4C1D == 0x00000001)
		{
			if (Global_4C12)
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (Global_5174)
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			func_31(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
		}
		else
		{
			func_31(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			func_31(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000014))
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (Global_4C12)
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				if (Global_4BE5)
				{
					func_31(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			else
			{
				func_31(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
		}
	}
}

void func_25()
{
	if (Global_12B4E)
	{
		func_31(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000011);
	}
}

int func_26(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

void func_27(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_28()
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

void func_29()
{
	if (Global_12B4E)
	{
		if (func_30() == 0x00000000)
		{
			return;
		}
		func_31(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000011);
	}
}

int func_30()
{
	return 0x00000000;
}

void func_31(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_27(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_27(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_27(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_27(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_27(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_32(int iParam0)
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
		if (func_33(0x0000000E))
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
								func_27(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 0x0000000E)
								{
									func_31(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
								func_31(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_31(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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
									func_31(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
							}
							else if (iVar1 == 0x0000000E)
							{
								func_31(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (iVar1 == 0x00000014)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(0x00000001);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0x00000000);
								func_27(&(Global_1CC3[iVar1 /*15*/]));
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
								func_27(&(Global_1CC3[iVar1 /*15*/]));
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
								func_27(&(Global_1CC3[iVar1 /*15*/]));
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
								func_27(&(Global_1CC3[iVar1 /*15*/]));
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
								func_27(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(0x0000002A);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 0x00000039 && iVar1 == 0x00000017)
							{
								iVar9 = 0x00000000;
								iVar9 = Global_18D301.f_1;
								func_31(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								func_31(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(0x00000001), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0x00000000), -1f, &(Global_1CC3[iVar1 /*15*/]), 0x00000000, 0x00000000, 0x00000000, 0x00000000);
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

bool func_33(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_34(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_35(bool bParam0)
{
	if (bParam0)
	{
		if (Global_4C1E.f_1 == 0x00000009)
		{
			Global_4CD0 = 0x00000001;
		}
	}
	else
	{
		Global_4CD0 = 0x00000000;
	}
}

void func_36()
{
	if (func_15() || unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000008))
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000008);
		func_42();
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (!unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				if (func_41())
				{
				}
				else if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0x00000000)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000015))
					{
						unk_0x0674E58A79778E99(&Global_1CBD, 0x00000015);
					}
					if (Global_4CD8 == 0x00000001)
					{
						Global_4CD8 = 0x00000000;
					}
					switch (Global_4C1E.f_1)
					{
						case 0x00000003:
							Global_4C1E.f_1 = 0x00000004;
							if (iLocal_78 == 0x00000000)
							{
								func_37();
								iLocal_78 = 0x00000001;
							}
							break;
						
						default:
							break;
					}
					Global_4CCE = 0x00000001;
				}
			}
		}
	}
}

void func_37()
{
	if (Global_4121D3 == 0x00000001)
	{
		if (!func_40())
		{
			return;
		}
		if (func_38(unk_0xD803B885F5E47A62()))
		{
			if (unk_0x0A4C9A3D51EAE31F(0x00000323) == 0x00000001)
			{
				unk_0x1E64CE678ED5F61E("CELL_EMAIL_EVENT");
				unk_0x47AFB2993A42BD03(0x00000001, 0x00000001);
			}
			else if (unk_0x0A4C9A3D51EAE31F(0x00000323) != 0x00000001)
			{
			}
		}
	}
}

int func_38(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0xEB6436A75F06F09F() == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0xFFFFFFFF;
	if (iParam0 != unk_0xD803B885F5E47A62())
	{
		iVar0 = iParam0;
		if (iVar0 == 0xFFFFFFFF)
		{
			return 0x00000000;
		}
	}
	if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		if (unk_0xB5E18209CA3E7DE6(0x00000000, iVar0))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 0x00000001;
			}
		}
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			if (unk_0xFB7A8F661F94A3AE(0x00000000, 0xFFFFFFFD, 0x00000001) || unk_0xB5E18209CA3E7DE6(0x00000001, 0xFFFFFFFF))
			{
				return 0x00000001;
			}
		}
		else
		{
			Var1 = { func_39(iParam0) };
			if (unk_0xB5E18209CA3E7DE6(0x00000000, 0xFFFFFFFF) || (unk_0xB5E18209CA3E7DE6(0x00000001, 0xFFFFFFFF) && unk_0x04A104F429E6CBB0(&Var1)))
			{
				return 0x00000001;
			}
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xB5E18209CA3E7DE6(0x00000000, iVar0))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

struct<13> func_39(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

int func_40()
{
	if (unk_0xBA301E03A078FA59() && unk_0x26F0988F7719D17A() == 0x00000003)
	{
		return 0x00000001;
	}
	if (unk_0xA3F916BCE430ED26() && unk_0x26F0988F7719D17A() == 0x00000003)
	{
		return 0x00000001;
	}
	if (unk_0x33A494591F2C1975() && unk_0x9AE561F9BC3F06D8() == 0x00000000)
	{
		return 0x00000001;
	}
	if (unk_0xDC30EF462887322E() && unk_0x9AE561F9BC3F06D8() == 0x00000000)
	{
		return 0x00000001;
	}
	if (unk_0x0EFF6B4415DAF4A1() && unk_0x8BB6DE13A9F3105E())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_41()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if ((((unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 0x0000004E, 0x00000001) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x15D0A3E61766C539(unk_0x16F2683693E537C9(), 0x00000000)) || unk_0x6438374572DE9B51(unk_0x16F2683693E537C9())) || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) == 0x00000001)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_42()
{
	if (func_33(0x0000000E))
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
		Global_4C1E = func_43();
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

var func_43()
{
	func_44();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_44()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_47(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_46(unk_0x16F2683693E537C9());
			if (func_45(iVar0) && (!func_33(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_45(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_45(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return func_48(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_48(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_49()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_50()
{
	char cVar0[64];
	int iVar1;
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	char cVar5[64];
	
	unk_0x0674E58A79778E99(&Global_4126C5, 0x00000000);
	if (Global_556A != 0x00000000)
	{
		if (unk_0x0E66AEE1894BB411(Global_556A))
		{
			if (unk_0x0A53A8B5FA0B3F4D(Global_556A))
			{
				StringCopy(&cVar0, unk_0x5283D58F79627134(Global_556A), 64);
				Global_5572[Global_5570] = Global_556A;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_5572[Global_4126B5] = 0x00000000;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_5572[Global_4126B5] = 0x00000000;
		}
	}
	else
	{
		StringCopy(&cVar0, unk_0x19C9F30A7697B43C(&(Global_706[Global_4121D4[Global_4126B5 /*104*/].f_11 /*29*/].f_7)), 64);
		Global_5572[Global_4126B5] = 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (unk_0x7F8A39872A07D2CE(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_4121D4[Global_4126B5 /*104*/].f_20 == 0x00000004 || Global_4121D4[Global_4126B5 /*104*/].f_20 == 0x00000005) || Global_4121D4[Global_4126B5 /*104*/].f_20 == 0x00000006) || Global_4121D4[Global_4126B5 /*104*/].f_20 == 0x00000007) || Global_4121D4[Global_4126B5 /*104*/].f_20 == 0x00000008) || Global_4121D4[Global_4126B5 /*104*/].f_20 == 0x00000009) || Global_4121D4[Global_4126B5 /*104*/].f_20 == 0x0000000A) || Global_4121D4[Global_4126B5 /*104*/].f_20 == 0x0000000B)
	{
		iVar1 = 0x00000000;
		switch (Global_4121D4[Global_4126B5 /*104*/].f_31)
		{
			case 0x00000001:
				unk_0x1E64CE678ED5F61E("CELL_CL01");
				break;
			
			case 0x00000002:
				unk_0x1E64CE678ED5F61E("CELL_CL02");
				break;
			
			case 0x00000003:
				unk_0x1E64CE678ED5F61E("CELL_CL03");
				break;
			
			case 0x00000004:
				unk_0x1E64CE678ED5F61E("CELL_CL04");
				break;
			
			case 0x00000005:
				unk_0x1E64CE678ED5F61E("CELL_CL05");
				break;
			
			case 0x00000006:
				unk_0x1E64CE678ED5F61E("CELL_CL06");
				break;
			
			case 0x00000007:
				unk_0x1E64CE678ED5F61E("CELL_CL07");
				break;
			
			case 0x00000008:
				unk_0x1E64CE678ED5F61E("CELL_CL08");
				break;
			
			case 0x00000009:
				unk_0x1E64CE678ED5F61E("CELL_CL09");
				break;
		}
		unk_0x6B012227B3921E18(&(Global_4121D4[Global_4126B5 /*104*/]));
		while (iVar1 < Global_4121D4[Global_4126B5 /*104*/].f_31)
		{
			switch (Global_4121D4[Global_4126B5 /*104*/].f_20)
			{
				case 0x00000004:
					unk_0x6B012227B3921E18(&(Global_26B66F.f_67E[iVar1 /*4*/]));
					break;
				
				case 0x00000005:
					unk_0x6B012227B3921E18(&(Global_195C42[iVar1 /*4*/]));
					break;
				
				case 0x00000006:
					unk_0x6B012227B3921E18(&(Global_195C6B[iVar1 /*4*/]));
					break;
				
				case 0x00000007:
					unk_0x6B012227B3921E18(&(Global_195C80[iVar1 /*4*/]));
					break;
				
				case 0x00000008:
					unk_0x6B012227B3921E18(&(Global_195C91[iVar1 /*4*/]));
					break;
				
				case 0x00000009:
					unk_0x6B012227B3921E18(&(Global_195C9E[iVar1 /*4*/]));
					break;
				
				case 0x0000000A:
					unk_0x6B012227B3921E18(&(Global_195CAB[iVar1 /*4*/]));
					break;
				
				case 0x0000000B:
					unk_0x6B012227B3921E18(&(Global_195CB8[iVar1 /*4*/]));
					break;
			}
			iVar1++;
		}
		StringCopy(&cVar2, unk_0x19C9F30A7697B43C(&(Global_706[Global_4121D4[Global_4126B5 /*104*/].f_11 /*29*/].f_3)), 64);
		uLocal_48 = unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000002, &cVar2, 0x00000000);
		unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000001);
		Global_5567 = 0x00000001;
		Global_5566 = uLocal_48;
		Global_556A = 0x00000000;
	}
	else
	{
		unk_0x1E64CE678ED5F61E(&(Global_4121D4[Global_4126B5 /*104*/]));
		switch (Global_4121D4[Global_4126B5 /*104*/].f_20)
		{
			case 0x00000000:
				break;
			
			case 0x00000001:
				unk_0xD06AC7C87A34A6AD(&(Global_4121D4[Global_4126B5 /*104*/].f_21));
				if (Global_4121D4[Global_4126B5 /*104*/].f_42 == 0x00000001 && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[Global_4126B5 /*104*/].f_43), "NULL"))
				{
					unk_0xD06AC7C87A34A6AD(&(Global_4121D4[Global_4126B5 /*104*/].f_43));
				}
				if ((Global_4121D4[Global_4126B5 /*104*/].f_42 == 0x00000002 && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[Global_4126B5 /*104*/].f_43), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[Global_4126B5 /*104*/].f_53), "NULL"))
				{
					if (unk_0xEF07223F00EBE9C9(&(Global_4121D4[Global_4126B5 /*104*/].f_43)))
					{
						unk_0x6B012227B3921E18(&(Global_4121D4[Global_4126B5 /*104*/].f_43));
					}
					else
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4121D4[Global_4126B5 /*104*/].f_43));
					}
					if (unk_0xEF07223F00EBE9C9(&(Global_4121D4[Global_4126B5 /*104*/].f_53)))
					{
						unk_0x6B012227B3921E18(&(Global_4121D4[Global_4126B5 /*104*/].f_53));
					}
					else
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4121D4[Global_4126B5 /*104*/].f_53));
					}
				}
				break;
			
			case 0x00000002:
				unk_0x6D99DF8263D35CE5(Global_4121D4[Global_4126B5 /*104*/].f_31);
				break;
			
			case 0x00000003:
				unk_0xD06AC7C87A34A6AD(&(Global_4121D4[Global_4126B5 /*104*/].f_21));
				unk_0x6D99DF8263D35CE5(Global_4121D4[Global_4126B5 /*104*/].f_31);
				if (Global_4121D4[Global_4126B5 /*104*/].f_42 == 0x00000001 && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[Global_4126B5 /*104*/].f_43), "NULL"))
				{
					unk_0xD06AC7C87A34A6AD(&(Global_4121D4[Global_4126B5 /*104*/].f_43));
				}
				if ((Global_4121D4[Global_4126B5 /*104*/].f_42 == 0x00000002 && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[Global_4126B5 /*104*/].f_43), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[Global_4126B5 /*104*/].f_53), "NULL"))
				{
					if (unk_0xEF07223F00EBE9C9(&(Global_4121D4[Global_4126B5 /*104*/].f_43)))
					{
						unk_0x6B012227B3921E18(&(Global_4121D4[Global_4126B5 /*104*/].f_43));
					}
					else
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4121D4[Global_4126B5 /*104*/].f_43));
					}
					if (unk_0xEF07223F00EBE9C9(&(Global_4121D4[Global_4126B5 /*104*/].f_53)))
					{
						unk_0x6B012227B3921E18(&(Global_4121D4[Global_4126B5 /*104*/].f_53));
					}
					else
					{
						unk_0xD06AC7C87A34A6AD(&(Global_4121D4[Global_4126B5 /*104*/].f_53));
					}
				}
				break;
		}
		if (Global_4121D4[Global_4126B5 /*104*/].f_11 == 0x00000091)
		{
			StringCopy(&cVar3, "<C>", 64);
			StringConCat(&cVar3, &Global_1F6C, 64);
			StringConCat(&cVar3, "</C>", 64);
			uLocal_48 = unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000002, &cVar3, 0x00000000);
			unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000001);
			Global_5567 = 0x00000001;
			Global_5566 = uLocal_48;
		}
		else
		{
			StringCopy(&cVar4, unk_0x19C9F30A7697B43C(&(Global_706[Global_4121D4[Global_4126B5 /*104*/].f_11 /*29*/].f_3)), 64);
			if (Global_4121D4[Global_4126B5 /*104*/].f_11 == 0x00000062)
			{
				StringCopy(&cVar5, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar5, &cVar4, 64);
				uLocal_48 = unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000002, &cVar5, 0x00000000);
			}
			else
			{
				uLocal_48 = unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000002, &cVar4, 0x00000000);
			}
			unk_0x5D96D8530B3D0904(&Global_4126C5, 0x00000001);
			Global_5567 = 0x00000001;
			Global_5566 = uLocal_48;
			Global_556A = 0x00000000;
		}
	}
	Global_4121D4[Global_4126B5 /*104*/].f_10 = uLocal_48;
}

void func_51()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x19C9F30A7697B43C(&(Global_706[Global_1F6A /*29*/].f_7)), 64);
	if (Global_1F7D == 0x00000000)
	{
		unk_0x1E64CE678ED5F61E("");
		StringCopy(&cVar1, unk_0x19C9F30A7697B43C(&(Global_1F1E[0x00000001 /*6*/])), 64);
		sVar2 = unk_0x19C9F30A7697B43C("CELL_253");
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000003, sVar2, &cVar1);
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CELL_255");
		unk_0x6B012227B3921E18(&(Global_1F1E[0x00000001 /*6*/]));
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000003, "", 0x00000000);
	}
	unk_0x0674E58A79778E99(&Global_1CBC, 0x00000000);
}

void func_52()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000001))
	{
		func_55();
		func_53();
		Global_1B416.f_36DE[Global_4C1E /*20*/].f_12 = 0x00000001;
		if (unk_0x8CD06866876216F2())
		{
			iLocal_45[Global_4C1E] = unk_0x2B6E0A53779D29EA();
			iLocal_43[Global_4C1E] = 0x00000001;
		}
		else if (!unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000A))
		{
			iLocal_44[Global_4C1E] = unk_0x1C0640BA9A7327B3();
			iLocal_43[Global_4C1E] = 0x00000001;
		}
		else
		{
			iLocal_44[0x00000000] = unk_0x1C0640BA9A7327B3();
			iLocal_44[0x00000002] = unk_0x1C0640BA9A7327B3();
			iLocal_44[0x00000001] = unk_0x1C0640BA9A7327B3();
			iLocal_43[0x00000000] = 0x00000001;
			iLocal_43[0x00000002] = 0x00000001;
			iLocal_43[0x00000001] = 0x00000001;
		}
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000001);
	}
}

void func_53()
{
	func_42();
	if (Global_12B4E)
	{
		Global_1B416.f_36DE[0x00000003 /*20*/].f_A = func_123(0x000004AD, 0xFFFFFFFF, 0x00000000);
	}
	if (Global_1B416.f_36DE[Global_4C1E /*20*/].f_A == 0x00000001)
	{
		if (!func_54(0x00000000))
		{
			unk_0x5E858A00EAFA5B24(0x00000000, 0x000007D0, 0x00000064);
		}
	}
}

int func_54(int iParam0)
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

void func_55()
{
	char cVar0[64];
	int iVar1;
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	char cVar5[64];
	
	if (Global_556A != 0x00000000)
	{
		if (unk_0x0E66AEE1894BB411(Global_556A))
		{
			if (unk_0x0A53A8B5FA0B3F4D(Global_556A))
			{
				StringCopy(&cVar0, unk_0x5283D58F79627134(Global_556A), 64);
				Global_5572[Global_5570] = Global_556A;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_5572[Global_5570] = 0x00000000;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_5572[Global_5570] = 0x00000000;
		}
	}
	else
	{
		StringCopy(&cVar0, unk_0x19C9F30A7697B43C(&(Global_706[Global_1B416.f_3738[Global_5570 /*104*/].f_11 /*29*/].f_7)), 64);
		if (Global_1B416.f_3738[Global_5570 /*104*/].f_11 == 0x0000009F)
		{
			StringCopy(&cVar0, unk_0x19C9F30A7697B43C("CELL_COMIC_P"), 64);
		}
		Global_5572[Global_5570] = 0x00000000;
	}
	if (unk_0xEA6BC48857E0AC4C(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (unk_0x7F8A39872A07D2CE(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_1B416.f_3738[Global_5570 /*104*/].f_20 == 0x00000004 || Global_1B416.f_3738[Global_5570 /*104*/].f_20 == 0x00000005) || Global_1B416.f_3738[Global_5570 /*104*/].f_20 == 0x00000006) || Global_1B416.f_3738[Global_5570 /*104*/].f_20 == 0x00000007) || Global_1B416.f_3738[Global_5570 /*104*/].f_20 == 0x00000008) || Global_1B416.f_3738[Global_5570 /*104*/].f_20 == 0x00000009) || Global_1B416.f_3738[Global_5570 /*104*/].f_20 == 0x0000000A) || Global_1B416.f_3738[Global_5570 /*104*/].f_20 == 0x0000000B)
	{
		iVar1 = 0x00000000;
		switch (Global_1B416.f_3738[Global_5570 /*104*/].f_31)
		{
			case 0x00000001:
				unk_0x1E64CE678ED5F61E("CELL_CL01");
				break;
			
			case 0x00000002:
				unk_0x1E64CE678ED5F61E("CELL_CL02");
				break;
			
			case 0x00000003:
				unk_0x1E64CE678ED5F61E("CELL_CL03");
				break;
			
			case 0x00000004:
				unk_0x1E64CE678ED5F61E("CELL_CL04");
				break;
			
			case 0x00000005:
				unk_0x1E64CE678ED5F61E("CELL_CL05");
				break;
			
			case 0x00000006:
				unk_0x1E64CE678ED5F61E("CELL_CL06");
				break;
			
			case 0x00000007:
				unk_0x1E64CE678ED5F61E("CELL_CL07");
				break;
			
			case 0x00000008:
				unk_0x1E64CE678ED5F61E("CELL_CL08");
				break;
			
			case 0x00000009:
				unk_0x1E64CE678ED5F61E("CELL_CL09");
				break;
		}
		unk_0x6B012227B3921E18(&(Global_1B416.f_3738[Global_5570 /*104*/]));
		while (iVar1 < Global_1B416.f_3738[Global_5570 /*104*/].f_31)
		{
			switch (Global_1B416.f_3738[Global_5570 /*104*/].f_20)
			{
				case 0x00000004:
					unk_0x6B012227B3921E18(&(Global_26B66F.f_67E[iVar1 /*4*/]));
					break;
				
				case 0x00000005:
					unk_0x6B012227B3921E18(&(Global_195C42[iVar1 /*4*/]));
					break;
				
				case 0x00000006:
					unk_0x6B012227B3921E18(&(Global_195C6B[iVar1 /*4*/]));
					break;
				
				case 0x00000007:
					unk_0x6B012227B3921E18(&(Global_195C80[iVar1 /*4*/]));
					break;
				
				case 0x00000008:
					unk_0x6B012227B3921E18(&(Global_195C91[iVar1 /*4*/]));
					break;
				
				case 0x00000009:
					unk_0x6B012227B3921E18(&(Global_195C9E[iVar1 /*4*/]));
					break;
				
				case 0x0000000A:
					unk_0x6B012227B3921E18(&(Global_195CAB[iVar1 /*4*/]));
					break;
				
				case 0x0000000B:
					unk_0x6B012227B3921E18(&(Global_195CB8[iVar1 /*4*/]));
					break;
			}
			iVar1++;
		}
		StringCopy(&cVar2, unk_0x19C9F30A7697B43C(&(Global_706[Global_1B416.f_3738[Global_5570 /*104*/].f_11 /*29*/].f_3)), 64);
		uLocal_48 = unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000001, &cVar2, 0x00000000);
		Global_5567 = 0x00000003;
		Global_5566 = uLocal_48;
		Global_556A = 0x00000000;
	}
	else
	{
		unk_0x1E64CE678ED5F61E(&(Global_1B416.f_3738[Global_5570 /*104*/]));
		switch (Global_1B416.f_3738[Global_5570 /*104*/].f_20)
		{
			case 0x00000000:
				break;
			
			case 0x00000001:
				unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[Global_5570 /*104*/].f_21));
				if (Global_1B416.f_3738[Global_5570 /*104*/].f_42 == 0x00000001 && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43), "NULL"))
				{
					unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43));
				}
				if ((Global_1B416.f_3738[Global_5570 /*104*/].f_42 == 0x00000002 && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[Global_5570 /*104*/].f_53), "NULL"))
				{
					if (unk_0xEF07223F00EBE9C9(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43)))
					{
						unk_0x6B012227B3921E18(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43));
					}
					else
					{
						unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43));
					}
					if (unk_0xEF07223F00EBE9C9(&(Global_1B416.f_3738[Global_5570 /*104*/].f_53)))
					{
						unk_0x6B012227B3921E18(&(Global_1B416.f_3738[Global_5570 /*104*/].f_53));
					}
					else
					{
						unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[Global_5570 /*104*/].f_53));
					}
				}
				break;
			
			case 0x00000002:
				unk_0x6D99DF8263D35CE5(Global_1B416.f_3738[Global_5570 /*104*/].f_31);
				break;
			
			case 0x00000003:
				unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[Global_5570 /*104*/].f_21));
				unk_0x6D99DF8263D35CE5(Global_1B416.f_3738[Global_5570 /*104*/].f_31);
				if (Global_1B416.f_3738[Global_5570 /*104*/].f_42 == 0x00000001 && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43), "NULL"))
				{
					unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43));
				}
				if ((Global_1B416.f_3738[Global_5570 /*104*/].f_42 == 0x00000002 && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[Global_5570 /*104*/].f_53), "NULL"))
				{
					if (unk_0xEF07223F00EBE9C9(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43)))
					{
						unk_0x6B012227B3921E18(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43));
					}
					else
					{
						unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43));
					}
					if (unk_0xEF07223F00EBE9C9(&(Global_1B416.f_3738[Global_5570 /*104*/].f_53)))
					{
						unk_0x6B012227B3921E18(&(Global_1B416.f_3738[Global_5570 /*104*/].f_53));
					}
					else
					{
						unk_0xD06AC7C87A34A6AD(&(Global_1B416.f_3738[Global_5570 /*104*/].f_53));
					}
				}
				break;
		}
		if (Global_1B416.f_3738[Global_5570 /*104*/].f_11 == 0x00000091)
		{
			StringCopy(&cVar3, "<C>", 64);
			StringConCat(&cVar3, &Global_1F6C, 64);
			StringConCat(&cVar3, "</C>", 64);
			uLocal_48 = unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000001, &cVar3, 0x00000000);
			Global_5567 = 0x00000003;
			Global_5566 = uLocal_48;
		}
		else
		{
			StringCopy(&cVar4, unk_0x19C9F30A7697B43C(&(Global_706[Global_1B416.f_3738[Global_5570 /*104*/].f_11 /*29*/].f_3)), 64);
			if (Global_1B416.f_3738[Global_5570 /*104*/].f_11 == 0x00000062)
			{
				StringCopy(&cVar5, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar5, &cVar4, 64);
				uLocal_48 = unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000001, &cVar5, 0x00000000);
			}
			else
			{
				uLocal_48 = unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0x00000000, 0x00000001, &cVar4, 0x00000000);
			}
			Global_5567 = 0x00000003;
			Global_5566 = uLocal_48;
			Global_556A = 0x00000000;
		}
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_10 = uLocal_48;
}

void func_56()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000013))
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x00000013);
		func_42();
		Global_1B416.f_36DE[0x00000003 /*20*/].f_12 = 0x00000000;
		Global_1B416.f_36DE[0x00000003 /*20*/].f_11 = 0x00000000;
	}
}

void func_57()
{
	if (iLocal_43[Global_4C1E] == 0x00000001)
	{
		if (unk_0x8CD06866876216F2())
		{
			iLocal_47 = unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iLocal_45[Global_4C1E]);
		}
		else
		{
			iLocal_46[Global_4C1E] = unk_0x1C0640BA9A7327B3();
			iLocal_47 = (iLocal_46[Global_4C1E] - iLocal_44[Global_4C1E]);
		}
		if (iLocal_47 > 0x000493E0)
		{
			Global_1B416.f_36DE[Global_4C1E /*20*/].f_12 = 0x00000000;
			Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 = 0x00000000;
			iLocal_43[Global_4C1E] = 0x00000000;
		}
	}
}

void func_58()
{
	int iVar0;
	
	func_42();
	if (Global_12B4E == 0x00000000)
	{
		if (!func_49())
		{
			if (iLocal_53 == 0x00000000)
			{
				if ((Global_1B416.f_3738[0x00000015 /*104*/].f_18 != 0x00000000 || Global_1B416.f_3738[0x00000016 /*104*/].f_18 != 0x00000000) || Global_1B416.f_3738[0x00000017 /*104*/].f_18 != 0x00000000)
				{
					switch (Global_4C1E)
					{
						case 0x00000000:
							if (Global_1B416.f_3738[0x00000015 /*104*/].f_18 != 0x00000000)
							{
								iLocal_42 = 0x00000015;
								iLocal_53 = 0x00000001;
								SYSTEM::SETTIMERA(0x00000000);
							}
							break;
						
						case 0x00000001:
							if (Global_1B416.f_3738[0x00000016 /*104*/].f_18 != 0x00000000)
							{
								iLocal_42 = 0x00000016;
								iLocal_53 = 0x00000001;
								SYSTEM::SETTIMERA(0x00000000);
							}
							break;
						
						case 0x00000002:
							if (Global_1B416.f_3738[0x00000017 /*104*/].f_18 != 0x00000000)
							{
								iLocal_42 = 0x00000017;
								iLocal_53 = 0x00000001;
								SYSTEM::SETTIMERA(0x00000000);
							}
							break;
						
						default:
							break;
						}
				}
			}
			else if (SYSTEM::TIMERA() > 0x00003A98)
			{
				iLocal_53 = 0x00000000;
				iVar0 = 0x00000000;
				func_42();
				if (iLocal_42 == 0x00000015 && Global_4C1E != 0x00000000)
				{
					iVar0 = 0x00000001;
				}
				if (iLocal_42 == 0x00000016 && Global_4C1E != 0x00000001)
				{
					iVar0 = 0x00000001;
				}
				if (iLocal_42 == 0x00000017 && Global_4C1E != 0x00000002)
				{
					iVar0 = 0x00000001;
				}
				if (Global_1B416.f_3738[iLocal_42 /*104*/].f_18 != 0x00000000 && iVar0 == 0x00000000)
				{
					if (!func_33(0x0000000E))
					{
						if (func_61(Global_1B416.f_3738[iLocal_42 /*104*/].f_11, &(Global_1B416.f_3738[iLocal_42 /*104*/]), Global_1B416.f_3738[iLocal_42 /*104*/].f_18, Global_1B416.f_3738[iLocal_42 /*104*/].f_19, Global_1B416.f_3738[iLocal_42 /*104*/].f_1A, Global_1B416.f_3738[iLocal_42 /*104*/].f_1D, 0x00000000, 0x00000001, Global_1B416.f_3738[iLocal_42 /*104*/].f_1F, Global_1B416.f_3738[iLocal_42 /*104*/].f_1E))
						{
							Global_1B416.f_3738[iLocal_42 /*104*/].f_18 = 0x00000000;
						}
					}
				}
			}
			if (iLocal_64 == 0x00000000)
			{
				if (Global_1F60[Global_4C1E])
				{
					iLocal_64 = 0x00000001;
					iLocal_65 = Global_4C1E;
					if (unk_0x8CD06866876216F2())
					{
						iLocal_62 = unk_0x2B6E0A53779D29EA();
					}
					else
					{
						iLocal_56 = unk_0x1C0640BA9A7327B3();
					}
				}
			}
			else
			{
				if (unk_0x8CD06866876216F2())
				{
					iLocal_63 = unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iLocal_62);
				}
				else
				{
					iLocal_57 = unk_0x1C0640BA9A7327B3();
					iLocal_63 = (iLocal_57 - iLocal_56);
				}
				if (iLocal_63 > 0x00001B58)
				{
					if (func_59(0x00000000))
					{
						Global_1F1E[0x00000001 /*6*/] = { Global_1F4F[Global_4C1E /*4*/] };
						Global_1F6A = Global_1F65[Global_4C1E];
						Global_1F60[Global_4C1E] = 0x00000000;
						iLocal_64 = 0x00000000;
					}
				}
				if (iLocal_65 != Global_4C1E)
				{
					iLocal_64 = 0x00000000;
				}
			}
		}
	}
}

bool func_59(int iParam0)
{
	return func_60(iParam0, Global_A1D7);
}

int func_60(int iParam0, int iParam1)
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

int func_61(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, bool bParam7, var uParam8, var uParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000A);
	iVar0 = 0x00000000;
	sVar1 = "NULL";
	iVar2 = 0xFFFFFF9D;
	sVar3 = "NULL";
	iVar4 = 0x00000000;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 0x00000003;
	if (func_63(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, uParam4, uParam5, bParam7, uParam8, uParam9, iVar4, sVar5, sVar6, iVar7) == 0x00000001)
	{
		if (bParam7 == 0x00000001)
		{
			Global_1F7F = iParam6;
			Global_1F1E[0x00000003 /*6*/] = { func_62(iParam0) };
			Global_1F6B = iParam0;
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000001);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

struct<4> func_62(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_3;
}

int func_63(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 0x00000063)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_42();
	iVar0 = 0x00000000;
	switch (iParam16)
	{
		case 0x00000000:
			if (Global_4C1E == 0x00000000)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (Global_4C1E == 0x00000002)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Global_4C1E == 0x00000001)
			{
				iVar0 = 0x00000000;
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		default:
			iVar0 = 0x00000000;
			break;
	}
	if (iVar0 == 0x00000000)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0x00000000;
			}
		}
		if (Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 == 0x00000001)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0x00000000)
		{
			return 0x00000000;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0x00000000)
		{
			return 0x00000000;
		}
	}
	if (func_74() == 0x00000000)
	{
		func_72();
		return 0x00000000;
	}
	func_71(Global_5570);
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/]), sParam1, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_11 = uParam0;
	if (iParam2 == 0x00000000)
	{
	}
	else
	{
		Global_1B416.f_3738[Global_5570 /*104*/].f_18 = iParam2;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_19 = iParam7;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1A = uParam8;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1D = uParam9;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1E = uParam12;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1F = uParam11;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1C = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_21), sParam4, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_32), sParam5, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_53), sParam15, 64);
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000A))
	{
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000001;
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000001;
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000001;
		Global_1F7E = 0x00000004;
		func_70(0x00000000);
		func_70(0x00000002);
		func_70(0x00000001);
	}
	else
	{
		func_42();
		switch (iParam16)
		{
			case 0x00000003:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[Global_4C1E] = 0x00000001;
				break;
			
			case 0x00000000:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000001;
				break;
			
			case 0x00000002:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000001;
				break;
			
			case 0x00000001:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000001;
				break;
		}
		if (iParam16 == 0x00000003)
		{
			switch (Global_4C1E)
			{
				case 0x00000000:
					func_70(0x00000000);
					Global_1F7E = 0x00000000;
					break;
				
				case 0x00000001:
					func_70(0x00000001);
					Global_1F7E = 0x00000001;
					break;
				
				case 0x00000002:
					func_70(0x00000002);
					Global_1F7E = 0x00000002;
					break;
				
				case 0x00000003:
					func_70(0x00000003);
					Global_1F7E = 0x00000003;
					break;
				
				default:
					Global_1F7E = 0x00000004;
					break;
				}
			}
	}
	if (iParam7 == 0x00000001)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000A))
		{
			Global_1B416.f_36DE[0x00000000 /*20*/].f_11 = 0x00000001;
			Global_1B416.f_36DE[0x00000001 /*20*/].f_11 = 0x00000001;
			Global_1B416.f_36DE[0x00000002 /*20*/].f_11 = 0x00000001;
		}
		else
		{
			switch (iParam16)
			{
				case 0x00000003:
					Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000000:
					Global_1B416.f_36DE[0x00000000 /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000002:
					Global_1B416.f_36DE[0x00000002 /*20*/].f_11 = 0x00000001;
					break;
				
				case 0x00000001:
					Global_1B416.f_36DE[0x00000001 /*20*/].f_11 = 0x00000001;
					break;
				}
			}
	}
	Global_5572[Global_5570] = 0x00000000;
	if (bParam10)
	{
		func_42();
		if (Global_4BE5)
		{
			StringCopy(&Global_4C13, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_4C1E)
			{
				case 0x00000000:
					StringCopy(&Global_4C13, "Phone_SoundSet_Michael", 24);
					break;
				
				case 0x00000002:
					StringCopy(&Global_4C13, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 0x00000001:
					StringCopy(&Global_4C13, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_4C13, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000001)
		{
			if (!func_69())
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Text_Arrive_Tone", &Global_4C13, 0x00000001);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 0x00000006)
		{
			func_34(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 0xBF800000, 0xBF800000, 0xBF800000, 0xBF800000);
			func_32(0x00000001);
			func_34(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 0xBF800000, 0xBF800000, 0xBF800000);
		}
	}
	func_64(uParam0, sParam1);
	return 0x00000001;
}

void func_64(var uParam0, char* sParam1)
{
	if (!func_65())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 0x629E0CB1, unk_0x12AB0310C2281427(sParam1), 0x00000000);
}

int func_65()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_68())
	{
		return 0x00000000;
	}
	if (func_66(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
	{
		return 0x00000000;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_66(int iParam0)
{
	return func_67(iParam0, 0x00000014);
}

bool func_67(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_68()
{
	return 0xFFFFFFFF;
}

bool func_69()
{
	return Global_14086D;
}

void func_70(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1B416.f_36DE[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_1B416.f_3738[iParam0 /*104*/].f_12 = iVar0;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000018;
		iVar1 = 0x00000021;
	}
	else
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000014;
	}
	iVar2 = iVar0;
	Global_5570 = 0x00000022;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12 = 0xFFFFFFFF;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_1 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_2 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_3 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (!func_73(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
		{
			Global_5570 = iVar2;
		}
		iVar2++;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_18 = 0x00000001;
}

int func_73(struct<6> Param0, struct<6> Param1)
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

int func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000018;
		iVar1 = 0x00000021;
	}
	else
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000014;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000000)
		{
			Global_5570 = iVar2;
			return 0x00000001;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_5570 = 0x00000022;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12 = 0xFFFFFFFF;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_1 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_2 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_3 = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_5 = 0x0001869F;
	while (iVar2 < iVar1)
	{
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000000 || Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000001)
		{
			if (!func_73(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
			{
				Global_5570 = iVar2;
			}
		}
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0x00000002)
		{
		}
		iVar2++;
	}
	if (Global_5570 == 0x00000022)
	{
		return 0x00000000;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000000] = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000001] = 0x00000000;
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0x00000002] = 0x00000000;
	return 0x00000001;
}

void func_75()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000006))
	{
		if (Global_1F7C > 0x00000000)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x0000000B))
			{
				if (iLocal_41)
				{
					func_76(iLocal_37, "CLEAR_ALL");
					if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000019))
					{
						unk_0x7E60C62A7CE58FC8(iLocal_37, "CREATE_ALERT");
						unk_0x3CAEA85DA607305E(0x0000001A);
						unk_0x7C19E5E4784BD7CF(222f);
						unk_0x7C19E5E4784BD7CF(222f);
						unk_0x7E60D21B163E9D56();
					}
					if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000B))
					{
						unk_0x7E60C62A7CE58FC8(iLocal_37, "CREATE_ALERT");
						unk_0x3CAEA85DA607305E(0x00000035);
						unk_0x7C19E5E4784BD7CF(222f);
						unk_0x7C19E5E4784BD7CF(222f);
						unk_0x7E60D21B163E9D56();
					}
					if (Global_12B4E == 0x00000001)
					{
						if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000C))
						{
							unk_0x7E60C62A7CE58FC8(iLocal_37, "CREATE_ALERT");
							unk_0x3CAEA85DA607305E(0x00000034);
							unk_0x7C19E5E4784BD7CF(222f);
							unk_0x7C19E5E4784BD7CF(222f);
							unk_0x7E60D21B163E9D56();
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000001C))
						{
							unk_0x7E60C62A7CE58FC8(iLocal_37, "CREATE_ALERT");
							unk_0x3CAEA85DA607305E(0x0000003C);
							unk_0x7C19E5E4784BD7CF(222f);
							unk_0x7C19E5E4784BD7CF(148f);
							unk_0x7E60D21B163E9D56();
						}
					}
					if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000013))
					{
						unk_0x7E60C62A7CE58FC8(iLocal_37, "CREATE_ALERT");
						unk_0x3CAEA85DA607305E(0x00000037);
						unk_0x7C19E5E4784BD7CF(222f);
						if ((unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000C) || unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000000B)) || unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000019))
						{
							unk_0x7C19E5E4784BD7CF(192f);
						}
						else
						{
							unk_0x7C19E5E4784BD7CF(222f);
						}
						unk_0x7E60D21B163E9D56();
					}
					unk_0x0674E58A79778E99(&Global_1CBD, 0x0000000B);
					iLocal_41 = 0x00000000;
				}
			}
		}
		if (Global_1F7C < 0x00000001)
		{
			unk_0xE17FDF9E3068281B(&iLocal_37);
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000006);
		}
		else
		{
			func_16();
		}
	}
	else if (Global_1F7C > 0x00000000)
	{
		iLocal_37 = unk_0xB01F55A0FD1CFD49("cellphone_alert_popup");
		while (!unk_0x83D8570832F172A7(iLocal_37))
		{
			SYSTEM::WAIT(0x00000000);
		}
		unk_0xD9ACBBA59FD5A09E(0x00000004);
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x00000006);
	}
}

void func_76(int iParam0, char* sParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x7E60D21B163E9D56();
}

void func_77()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000007))
	{
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000006);
		unk_0x0674E58A79778E99(&Global_1CBD, 0x00000007);
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000007))
	{
		unk_0x0674E58A79778E99(&Global_1CBD, 0x00000006);
		return;
	}
}

void func_78()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000004))
	{
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000003);
		unk_0x0674E58A79778E99(&Global_1CBD, 0x00000004);
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000004))
	{
		unk_0x0674E58A79778E99(&Global_1CBD, 0x00000003);
		return;
	}
}

void func_79()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000002))
	{
		if (!Global_4C1E.f_1 == 0x00000001)
		{
			Global_4C1E.f_1 = 0x00000000;
		}
		unk_0x0674E58A79778E99(&Global_1CBD, 0x00000002);
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_1CBD, 0x00000002))
	{
		if (!Global_4C1E.f_1 == 0x00000001)
		{
			if (Global_4C1E.f_1 < 0x00000004)
			{
				Global_4C1E.f_1 = 0x00000003;
			}
		}
		return;
	}
}

int func_80()
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
		if (func_33(0x0000000E))
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

int func_81(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_42();
	if (Global_12B4E == 0x00000000)
	{
		if (func_33(0x0000000E))
		{
			if (Global_5568 == 0x00000002 || Global_5568 == 0x00000004)
			{
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	if (Global_4C1E.f_1 == 0x00000009)
	{
		return 0x00000000;
	}
	if (iParam2 == 0x00000000)
	{
		if (func_54(0x00000000) == 0x00000001)
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
				func_82("cellphone_flashhand");
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
	func_128();
	func_126();
	if (unk_0x8A22C4C08282BF26(Global_1CC3[iParam0 /*15*/].f_9) == 0x00000000)
	{
		Global_1F1A = 0x00000000;
		Global_4C1E.f_1 = 0x00000007;
		func_82(&(Global_1CC3[iParam0 /*15*/].f_5));
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

void func_82(char* sParam0)
{
	unk_0x92DCE5C81176D2B4(sParam0);
	while (!unk_0x1FBF08B001C4788A(sParam0))
	{
		SYSTEM::WAIT(0x00000000);
	}
}

void func_83(int iParam0)
{
	if (func_86())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_85())
		{
			func_84(0x00000001, 0x00000001);
		}
		else
		{
			func_84(0x00000000, 0x00000000);
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
	if (!func_49())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_84(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_54(0x00000000))
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

bool func_85()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_86()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_87()
{
	float fVar0;
	
	unk_0x21387C9EECC2B220(0x00000001);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000C9);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000CA);
	fVar0 = 0f;
	while ((!unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9) && !unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CA)) || fVar0 < 1f)
	{
		UI::_SET_WARNING_MESSAGE_2("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 0x00000012, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000001, 0x00000000);
		SYSTEM::WAIT(0x00000000);
		fVar0 = (fVar0 + unk_0x6117725E0134737F());
	}
	unk_0x21387C9EECC2B220(0x00000000);
	if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9))
	{
		unk_0x53491B90E4FD0E56(0x00000000);
		Global_1AFF7 = 0x00000001;
	}
}

void func_88(int iParam0)
{
	float fVar0;
	int iVar1;
	
	unk_0x21387C9EECC2B220(0x00000001);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000C9);
	fVar0 = 0f;
	while (!unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9) || fVar0 < 1f)
	{
		iVar1 = func_89(iParam0, 0x00000077);
		UI::SET_WARNING_MESSAGE("FBR_GENERIC", 0x00004000, 0x00000000, 0x00000000, 0xFFFFFFFF, "FBR_DIR_MODE", iVar1, 0x00000001, 0x00000000);
		SYSTEM::WAIT(0x00000000);
		fVar0 = (fVar0 + unk_0x6117725E0134737F());
	}
	unk_0x21387C9EECC2B220(0x00000000);
}

char* func_89(int iParam0, int iParam1)
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 0x00000001:
			return "FBR_BLK_CLEAN";
			break;
		
		case 0x00000002:
			return "FBR_BLK_RNNNG";
			break;
		
		case 0x0000000D:
			return "FBR_BLK_DEAD";
			break;
		
		case 0x00000003:
			return "FBR_BLK_MISS";
			break;
		
		case 0x00000005:
			return "FBR_BLK_SHOP";
			break;
		
		case 0x00000004:
			return "FBR_BLK_CUTS";
			break;
		
		case 0x00000006:
			return "FBR_BLK_WANT";
			break;
		
		case 0x00000007:
			return "FBR_BLK_ONLI";
			break;
		
		case 0x00000008:
			return "FBR_BLK_ACT";
			break;
		
		case 0x00000009:
			return "FBR_BLK_LOC";
			break;
		
		case 0x0000000A:
			return "FBR_BLK_VEH";
			break;
		
		case 0x0000000B:
			return "FBR_BLK_PARA";
			break;
		
		case 0x0000000C:
			return "FBR_BLK_FALL";
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_90(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iParam2 = iParam2;
	if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		return 0x0000000D;
	}
	if (bParam1)
	{
		if (unk_0x8A22C4C08282BF26(unk_0x7CF4675EC2B8ED0B()) > 0x00000001)
		{
			return 0x00000002;
		}
	}
	if (func_121() && !func_33(0x0000000E))
	{
		return 0x00000003;
	}
	if (func_120())
	{
		return 0x00000003;
	}
	if (func_119())
	{
		return 0x00000008;
	}
	if (bParam1)
	{
		if (func_118())
		{
			return 0x00000008;
		}
	}
	if (Global_175B0)
	{
		return 0x00000003;
	}
	if (Global_7930)
	{
		return 0x00000008;
	}
	if (Global_78C4)
	{
		return 0x00000008;
	}
	if (Global_28006E)
	{
		if (unk_0x8A22C4C08282BF26(0xA5A16DFA) > 0x00000000)
		{
			return 0x00000003;
		}
	}
	else if (Global_28006D)
	{
		if (unk_0x8A22C4C08282BF26(0x7792E586) > 0x00000000)
		{
			return 0x00000003;
		}
	}
	else if (unk_0x8A22C4C08282BF26(joaat("mission_stat_watcher")) > 0x00000000)
	{
		return 0x00000003;
	}
	if (unk_0x8A22C4C08282BF26(joaat("finale_choice")) > 0x00000000)
	{
		return 0x00000003;
	}
	if (unk_0x8A22C4C08282BF26(joaat("creator")) > 0x00000000)
	{
		return 0x00000003;
	}
	if (unk_0x8A22C4C08282BF26(joaat("respawn_controller")) > 0x00000000)
	{
		return 0x0000000D;
	}
	if (func_117(bParam1))
	{
		return 0x00000003;
	}
	if (unk_0x92444005288A72ED(unk_0x16F2683693E537C9()) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
	{
		return 0x0000000C;
	}
	if (func_116(Global_1B047, 0x00000100))
	{
		return 0x00000003;
	}
	if (((func_115() || func_114()) || func_109()) || func_108())
	{
		return 0x00000005;
	}
	if (func_108())
	{
		return 0x00000005;
	}
	if (func_107())
	{
		return 0x00000005;
	}
	if (func_106())
	{
		return 0x00000005;
	}
	if (func_114())
	{
		return 0x00000005;
	}
	if (func_105() && !Global_1AFFC)
	{
		return 0x00000008;
	}
	if (func_109())
	{
		return 0x00000005;
	}
	if (unk_0x991B1F0980C62628() || func_104())
	{
		return 0x00000004;
	}
	if (func_69())
	{
		return 0x00000004;
	}
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_94(0x0000003C);
			if (iVar0 != 0x00000000)
			{
				return iVar0;
			}
			if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()) || unk_0x75B806D0A76CB67D(unk_0x16F2683693E537C9()) != 0xFFFFFFFF)
			{
				return 0x0000000B;
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || Global_1B05D)
			{
				return 0x0000000A;
			}
		}
	}
	if (Global_792E)
	{
		return 0x00000008;
	}
	if (Global_12B4C)
	{
		return 0x00000004;
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000 || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
		{
			return 0x00000006;
		}
		if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
		{
			return 0x00000008;
		}
		if (unk_0xA48EBBEA418ADC94(unk_0x16F2683693E537C9()))
		{
			return 0x00000008;
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		return 0x00000007;
	}
	if (func_93())
	{
		return 0x00000008;
	}
	if (Global_7832)
	{
		return 0x00000003;
	}
	if (unk_0x8C74DE122769E1BF())
	{
		return 0x00000004;
	}
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000009;
	}
	if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
	{
		return 0x00000009;
	}
	if (bParam1)
	{
		if (!func_91(0x00000000))
		{
			return 0x00000008;
		}
	}
	if (unk_0x7ED67A9BE53DAC95(unk_0x16F2683693E537C9()))
	{
		return 0x00000009;
	}
	return 0x00000000;
}

int func_91(bool bParam0)
{
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return 0x00000000;
	}
	if ((((((((((!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || unk_0x168558745A6AC21E(unk_0x16F2683693E537C9())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9())) || unk_0x36646919F20EAFFC(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0xA48EBBEA418ADC94(unk_0x16F2683693E537C9())) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		return 0x00000000;
	}
	if ((((((func_69() || Global_56C3.f_4) || func_92()) || unk_0x78E01915ECCE9BC8()) || unk_0x5327615940E385C1()) || func_104()) || func_120())
	{
		return 0x00000000;
	}
	if (!bParam0)
	{
		if (unk_0x2C1AA3A291786CDC())
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_92()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

bool func_93()
{
	return Global_E545;
}

int func_94(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0x00000000, 0x00000001, 0x00000000) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		return 0x00000005;
	}
	vVar0 = { func_103(unk_0xD803B885F5E47A62()) };
	if (Global_1B085[0x0000000A /*10*/].f_1)
	{
		if (SYSTEM::VDIST2(vVar0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 0x00000003;
		}
	}
	if (func_102(0x00000002) && !func_102(0x00000011))
	{
		if (SYSTEM::VDIST2(vVar0, -59.96629f, -1099.005f, 25.52088f) < 8f)
		{
			if (unk_0x0399732A9EBC368E(vVar0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0x00000000, 0x00000001))
			{
				return 0x00000009;
			}
		}
	}
	if (SYSTEM::VDIST2(vVar0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (unk_0x0399732A9EBC368E(vVar0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0x00000000, 0x00000001))
		{
			return 0x00000009;
		}
	}
	if (SYSTEM::VDIST2(vVar0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (unk_0x0399732A9EBC368E(vVar0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0x00000000, 0x00000001))
		{
			return 0x00000009;
		}
	}
	if (SYSTEM::VDIST2(vVar0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (unk_0x0399732A9EBC368E(vVar0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0x00000000, 0x00000001))
		{
			return 0x00000009;
		}
	}
	if (SYSTEM::VDIST2(vVar0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (unk_0x0399732A9EBC368E(vVar0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0x00000000, 0x00000001))
		{
			return 0x00000009;
		}
	}
	if (SYSTEM::VDIST2(vVar0, 128.83f, -1297.98f, 29.3f) < 2f || SYSTEM::VDIST2(vVar0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 0x00000009;
	}
	if (SYSTEM::VDIST2(vVar0, 1081.951f, -1976.762f, 30.47218f) < 6f && func_101(0x0000001A))
	{
		return 0x00000009;
	}
	if (!iLocal_27)
	{
		func_95(iParam0);
	}
	iVar1 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
	if (iVar1 == 0x00000000)
	{
		return 0x00000000;
	}
	else if ((iVar1 == Global_1B009 || iVar1 == Global_1B00A) || iVar1 == Global_1B00B)
	{
		return 0x00000009;
	}
	else if (iVar1 == Global_1B000)
	{
		return 0x00000009;
	}
	else if (iVar1 == Global_1B001)
	{
		return 0x00000009;
	}
	else if (iVar1 == Global_1B004)
	{
		return 0x00000009;
	}
	else if (iVar1 == Global_1B003)
	{
		return 0x00000009;
	}
	else if (iVar1 == Global_1B005)
	{
		return 0x00000009;
	}
	else if (iVar1 == Global_1B006)
	{
		return 0x00000009;
	}
	else if (iVar1 == Global_1B007)
	{
		return 0x00000009;
	}
	else if (iVar1 == Global_1B008)
	{
		return 0x00000009;
	}
	else if (iVar1 == Global_1B00C)
	{
		return 0x00000009;
	}
	else if (iVar1 == Global_1B00D)
	{
		return 0x00000009;
	}
	else if (iVar1 == Global_1B00E)
	{
		return 0x00000009;
	}
	else if (iVar1 == Global_1B00F)
	{
		return 0x00000009;
	}
	else if (iVar1 == Global_1B010)
	{
		return 0x00000009;
	}
	else if ((iVar1 == Global_1B011 || iVar1 == Global_1B012) && func_102(0x00000043))
	{
		return 0x00000009;
	}
	iVar2 = 0x00000000;
	while (iVar2 <= (0x00000013 - 0x00000001))
	{
		if (iVar1 == Global_1B013[iVar2])
		{
			return 0x00000009;
		}
		iVar2++;
	}
	return 0x00000000;
}

void func_95(var uParam0)
{
	int iVar0;
	
	uParam0 = uParam0;
	func_98(0x00000018, &Global_1B000);
	func_98(0x0000002F, &Global_1B001);
	func_98(0x0000000A, &Global_1B009);
	func_98(0x00000009, &Global_1B00A);
	func_98(0x00000008, &Global_1B00B);
	func_98(0x00000015, &Global_1B00C);
	func_98(0x0000000B, &Global_1B00D);
	func_98(0x00000012, &Global_1B011);
	func_98(0x00000013, &Global_1B012);
	Global_1B004 = unk_0x0D1736C2E221BCEA(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_1B003 = unk_0x0D1736C2E221BCEA(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_1B005 = unk_0x0D1736C2E221BCEA(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_1B006 = unk_0x0D1736C2E221BCEA(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_1B007 = unk_0x0D1736C2E221BCEA(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_1B008 = unk_0x0D1736C2E221BCEA(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_1B00E = unk_0x0D1736C2E221BCEA(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_1B00F = unk_0x0D1736C2E221BCEA(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_1B010 = unk_0x0D1736C2E221BCEA(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0x00000000;
	while (iVar0 <= (0x00000013 - 0x00000001))
	{
		Global_1B013[iVar0] = unk_0xFBD08BECC9B87937(func_96(iVar0));
		iVar0++;
	}
	iLocal_27 = 0x00000001;
}

Vector3 func_96(int iParam0)
{
	if (!func_97(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 0x00000001:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 0x00000002:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 0x00000003:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 0x00000004:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 0x00000005:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 0x00000006:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 0x00000007:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 0x00000008:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 0x00000009:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 0x0000000A:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 0x0000000B:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 0x0000000C:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 0x0000000D:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 0x0000000E:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 0x0000000F:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 0x00000010:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 0x00000011:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 0x00000012:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_97(int iParam0)
{
	if (iParam0 >= 0x00000013)
	{
		return 0x00000000;
	}
	else if (iParam0 <= 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

var func_98(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	Var0 = { func_99(iParam0) };
	*uParam1 = unk_0x0D1736C2E221BCEA(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_99(int iParam0)
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000001:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000002:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000003:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000004:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000005:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000006:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000007:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000008:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 0x00000009:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 0x0000000A:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 0x0000000B:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000C:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000D:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000E:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000000F:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000010:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000011:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000012:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000013:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000014:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000016:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000017:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000015:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000018:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000019:
			vVar1 = { func_100(0x00000001, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 0x0000001A:
			vVar1 = { func_100(0x00000002, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 0x0000001B:
			vVar1 = { func_100(0x00000003, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 0x0000001C:
			vVar1 = { func_100(0x00000004, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 0x0000001D:
			vVar1 = { func_100(0x00000005, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 0x0000001E:
			vVar1 = { func_100(0x00000006, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 0x0000001F:
			vVar1 = { func_100(0x00000007, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 0x00000020:
			Var0 = { Global_100542[0x00000022 /*1951*/].f_92.f_5ED + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 0x00000021:
			vVar1 = { func_100(0x00000023, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 0x00000022:
			vVar1 = { func_100(0x00000024, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 0x00000023:
			vVar1 = { func_100(0x00000025, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 0x00000024:
			vVar1 = { func_100(0x00000026, 0x00000000) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 0x00000025:
			vVar1 = { func_100(0x00000027, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 0x00000026:
			vVar1 = { func_100(0x00000028, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 0x00000027:
			vVar1 = { func_100(0x00000029, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 0x00000028:
			vVar1 = { func_100(0x0000002A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 0x00000029:
			vVar1 = { func_100(0x0000002B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 0x0000002A:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 0x0000002B:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 0x0000002C:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 0x00000031:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 0x00000032:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 0x00000033:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 0x00000034:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 0x00000035:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 0x00000036:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 0x00000037:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 0x00000038:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 0x00000039:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 0x0000003A:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 0x0000002D:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 0x0000002E:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 0x0000002F:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000030:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 0x0000003B:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003C:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003D:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003E:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000003F:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000040:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000041:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000042:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000043:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000044:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000045:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000046:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000047:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000048:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000049:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004A:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004B:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004C:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004D:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004E:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000004F:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000050:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000051:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000052:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000053:
			vVar1 = { func_100(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000054:
			vVar1 = { func_100(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000055:
			vVar1 = { func_100(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000056:
			vVar1 = { func_100(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000057:
			vVar1 = { func_100(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000058:
			vVar1 = { func_100(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000059:
			vVar1 = { func_100(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005A:
			vVar1 = { func_100(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005B:
			vVar1 = { func_100(0x00000057, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005C:
			vVar1 = { func_100(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005D:
			vVar1 = { func_100(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005E:
			vVar1 = { func_100(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000005F:
			vVar1 = { func_100(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000060:
			vVar1 = { func_100(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000061:
			vVar1 = { func_100(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000062:
			vVar1 = { func_100(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000063:
			vVar1 = { func_100(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000064:
			vVar1 = { func_100(0x00000058, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000065:
			vVar1 = { func_100(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000066:
			vVar1 = { func_100(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000067:
			vVar1 = { func_100(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000068:
			vVar1 = { func_100(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000069:
			vVar1 = { func_100(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006A:
			vVar1 = { func_100(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006B:
			vVar1 = { func_100(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006C:
			vVar1 = { func_100(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006D:
			vVar1 = { func_100(0x00000059, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006E:
			vVar1 = { func_100(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000006F:
			vVar1 = { func_100(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000070:
			vVar1 = { func_100(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000071:
			vVar1 = { func_100(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000072:
			vVar1 = { func_100(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000073:
			vVar1 = { func_100(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000074:
			vVar1 = { func_100(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000075:
			vVar1 = { func_100(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000076:
			vVar1 = { func_100(0x0000005A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000077:
			vVar1 = { func_100(0x0000005B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000078:
			vVar1 = { func_100(0x00000061, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000079:
			vVar1 = { func_100(0x00000067, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007A:
			vVar1 = { func_100(0x00000068, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007B:
			vVar1 = { func_100(0x00000069, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007C:
			vVar1 = { func_100(0x0000006A, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007D:
			vVar1 = { func_100(0x0000006B, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007E:
			vVar1 = { func_100(0x0000006C, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000007F:
			vVar1 = { func_100(0x0000006D, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000080:
			vVar1 = { func_100(0x0000006E, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000081:
			vVar1 = { func_100(0x0000006F, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000082:
			vVar1 = { func_100(0x00000070, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000083:
			vVar1 = { func_100(0x00000071, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000084:
			vVar1 = { func_100(0x00000072, 0x00000000) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000085:
			vVar1 = { func_100(0x00000067, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000086:
			vVar1 = { func_100(0x0000006A, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000087:
			vVar1 = { func_100(0x0000006D, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000088:
			vVar1 = { func_100(0x00000070, 0x00000001) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000089:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008A:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008B:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008C:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000016:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008D:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008E:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000008F:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000090:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000091:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000092:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000093:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000094:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000095:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000096:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000097:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000098:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x00000099:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009A:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009B:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009C:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009D:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009E:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x0000009F:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A0:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A1:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A2:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A3:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A4:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A5:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A6:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A7:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A8:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000A9:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AA:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AB:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AC:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AD:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AE:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000AF:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B0:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B1:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B2:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B3:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B4:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B5:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B6:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B7:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B8:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000B9:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BA:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BB:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BC:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BD:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BE:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000BF:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C0:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C1:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C2:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C3:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C4:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 0x000000C5:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C6:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C7:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C8:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000C9:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CA:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CB:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CC:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CD:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CE:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000CF:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D0:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D1:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D2:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D3:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D4:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 0x000000D5:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_100(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000001:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000002:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000003:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000004:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x0000003D:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000005:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x00000006:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 0x00000007:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x00000022:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x0000003E:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x00000023:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 0x00000024:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 0x00000025:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 0x00000026:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 0x00000027:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x00000041:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 0x00000028:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 0x00000029:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 0x0000003F:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 0x0000002A:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x0000002B:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000040:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000049:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 0x0000004A:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 0x0000004B:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 0x0000004C:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 0x0000004D:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 0x0000004E:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 0x0000004F:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 0x00000050:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 0x00000051:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000052:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 0x00000053:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000054:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000055:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000056:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000057:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 0x00000058:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 0x00000059:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 0x0000005A:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000067:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x00000068:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x00000069:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x0000006A:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006B:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006C:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006D:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x0000006E:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x0000006F:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x00000070:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 0x00000071:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 0x00000072:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_101(int iParam0)
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

int func_102(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

Vector3 func_103(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_104()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_105()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

bool func_106()
{
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000009);
}

bool func_107()
{
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000008);
}

int func_108()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (((((((((((((((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_intro", 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_base", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_enterchair", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_exitchair", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_idle_a", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_idle_b", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_idle_c", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@barbers", "player_idle_d", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_intro", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_base", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_enterchair", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_exitchair", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_idle_a", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_idle_b", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_idle_c", 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "misshair_shop@hair_dressers", "player_idle_d", 0x00000003))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_109()
{
	int iVar0;
	
	if (func_115())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000035)
		{
			if (func_110(iVar0))
			{
				return 0x00000001;
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

bool func_110(int iParam0)
{
	return func_111(iParam0, 0x00000014, 0x00000001);
}

int func_111(int iParam0, int iParam1, bool bParam2)
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
		if (func_113() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_123(func_112(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_112(int iParam0)
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

int func_113()
{
	return Global_7830;
}

bool func_114()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_115()
{
	return Global_181EC.f_159 > 0x00000000;
}

bool func_116(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

bool func_117(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

bool func_118()
{
	return Global_181DF.f_1;
}

bool func_119()
{
	return Global_12C59;
}

int func_120()
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

int func_121()
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_122(int iParam0)
{
	if ((Global_559F || Global_559E) || Global_55A0)
	{
		if (iParam0 == 0x00000082)
		{
		}
		else
		{
			return 0x00000000;
		}
	}
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (Global_4C1E.f_1 == 0x0000000A)
		{
			if (Global_1A0F == iParam0)
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
	return 0x00000000;
}

int func_123(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_124(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_124(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_125();
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

var func_125()
{
	return Global_1407E9;
}

void func_126()
{
	if (Global_12B4E == 0x00000000)
	{
		Global_1CC3[0x0000000E /*15*/].f_4 = 0xFFFFFF9D;
		Global_1CC3[0x00000004 /*15*/].f_4 = 0xFFFFFF9D;
		if (Global_258C03)
		{
			if (func_33(0x0000000E))
			{
				func_127(0x00000002, "CELL_2", 0x00000002, "appInternet", 0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_127(0x0000000E, "CELL_29", 0x00000007, "appMPJobListNEW", 0x0000000C, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
			else
			{
				func_127(0x0000000E, "CELL_29", 0x00000002, "appMPJobListNEW", 0x0000000C, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
		}
		else
		{
			func_127(0x00000004, "CELL_23", 0x00000002, "appChecklist", 0x00000027, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
	}
}

void func_127(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

void func_128()
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
			if (func_129(iVar2, Global_4C1E) == 0x00000001)
			{
				iVar1 = 0x00000001;
			}
			iVar2++;
		}
		func_127(0x00000007, "CELL_5", 0x00000000, "appEmail", 0x00000004, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000001, "CELL_1", 0x00000001, "appTextMessage", 0x00000002, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000004, "CELL_23", 0x00000002, "appChecklist", 0x00000027, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		if ((Global_A1D7 == 0x0000000F && func_117(0x00000000) == 0x00000000) && Global_1CC1 == 0x00000000)
		{
			func_127(0x00000014, "CELL_32", 0x00000003, "appSettings", 0x0000002B, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			Global_4CD3 = 0x00000000;
			Global_1CC2 = 0x000000FF;
		}
		else
		{
			func_127(0x00000014, "CELL_32", 0x00000003, "appSettings", 0x0000002B, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			Global_4CD3 = 0x00000001;
			Global_1CC2 = 0x0000002A;
		}
		if (iVar1 == 0x00000001)
		{
			func_127(0x00000000, "CELL_0", 0x00000004, "appContacts", 0x0000001B, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
		else
		{
			func_127(0x00000000, "CELL_0", 0x00000004, "appContacts", 0x00000005, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
		func_127(0x0000000A, "CELL_16", 0x00000005, "appSettings", 0x00000018, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000003, "CELL_7", 0x00000006, "appCamera", 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000002, "CELL_2", 0x00000007, "appInternet", 0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		if (Global_1B416.f_36DE.f_59 == 0x00000001)
		{
			func_127(0x00000011, "CELL_28", 0x00000008, "appTrackify", 0x0000002A, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
		if (Global_1B416.f_36DE.f_58 == 0x00000001)
		{
			func_127(0x00000010, "CELL_25", 0x00000000, "appContacts", 0x00000028, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		}
		func_127(0x00000019, "CELL_14", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000009, "CELL_13", 0xFFFFFF9D, "appContacts", 0x0000000D, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000000B, "CELL_14", 0xFFFFFF9D, "appContacts", 0x00000008, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000001B, "CELL_15", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000001C, "CELL_15", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000001D, "CELL_15", 0xFFFFFF9D, "appSettings", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000001E, "CELL_15", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000001F, "CELL_15", 0xFFFFFF9D, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000020, "CELL_15", 0xFFFFFF9D, "appSettings", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
	}
	else
	{
		func_127(0x00000007, "CELL_5", 0x00000000, "appMPEmail", 0x00000004, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000000A, "CELL_16", 0x00000005, "appSettings", 0x00000018, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000001, "CELL_1", 0x00000001, "appTextMessage", 0x00000002, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000003, "CELL_7", 0x00000006, "appCamera", 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000002, "CELL_2", 0x00000007, "appInternet", 0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000000E, "CELL_29", 0x00000004, "appMPJobListNEW", 0x0000000C, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000000, "CELL_0", 0x00000002, "appContacts", 0x00000005, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000015, "JIPMP_QJ", 0x00000003, "AppJIPMP", 0x0000000E, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000004) == 0x00000001)
		{
			func_127(0x00000011, "CELL_28", 0x00000008, "appTrackify", 0x0000002A, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
		func_127(0x0000000D, "CELL_35", 0xFFFFFF9D, "appMPCopBackup", 0x00000027, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000000D, "CELL_20", 0xFFFFFF9D, "appMPCopBackup", 0x00000010, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000000F, "CELL_18", 0xFFFFFF9D, "appContacts", 0x00000008, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000009, "CELL_13", 0xFFFFFF9D, "appContacts", 0x0000000D, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000005, "CELL_4", 0xFFFFFF9D, "appContacts", 0x0000000C, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000017, "CELL_15", 0x00000000, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000018, "CELL_15", 0x00000001, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000019, "CELL_15", 0x00000002, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000001A, "CELL_15", 0x00000003, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000001B, "CELL_15", 0x00000004, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000001C, "CELL_15", 0x00000005, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000001D, "CELL_15", 0x00000006, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000001E, "CELL_15", 0x00000007, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x0000001F, "CELL_15", 0x00000008, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000020, "CELL_15", 0x00000009, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		func_127(0x00000021, "CELL_15", 0x0000000A, "appContacts", 0x00000011, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
		if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000004) == 0x00000001)
		{
			if (Global_180426)
			{
				func_127(0x00000017, "CELL_CIRCBREAK", 0x00000008, "AppVLSI", 0x00000036, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000014) == 0x00000001)
			{
				func_127(0x00000017, "CELL_SIGHTS", 0x00000008, "AppSettings", 0x0000003B, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000016) == 0x00000001)
			{
				func_127(0x00000017, "CELL_EXTRACT", 0x00000008, "AppExtraction", 0x0000003A, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000001A) == 0x00000001)
			{
				func_127(0x00000017, "CELL_SECHACK", 0x00000008, "AppSecuroHack", 0x00000039, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			}
		}
		if ((((unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000004) == 0x00000000 && Global_180426 == 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000014) == 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x00000016) == 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_4126C5, 0x0000001A) == 0x00000000)
		{
			func_127(0x00000017, "CELL_BOSSAGE", 0x00000008, "appMPBossAgency", 0x00000039, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
		}
	}
}

int func_129(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_13[iParam1];
}

void func_130()
{
}

