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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
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
	if (unk_0x2EBF608FFE6CA406(0x00000053))
	{
		func_6();
	}
	if ((!Global_1 && !unk_0x0EFF6B4415DAF4A1()) && unk_0xE7E2C8B4B9C58AE9())
	{
		unk_0x31A33F7BCB08CB80(0x00000001);
		if (!unk_0x757EF87A33649210())
		{
			if (!unk_0xD0BB2359EC70FC37())
			{
				unk_0x53491B90E4FD0E56(0x00000320);
			}
		}
		iLocal_20 = unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0xB01F55A0FD1CFD49("INSTRUCTIONAL_BUTTONS");
		while (!unk_0x83D8570832F172A7(iLocal_20) || !unk_0x83D8570832F172A7(iLocal_21))
		{
			SYSTEM::WAIT(0x00000000);
		}
		unk_0x7E60C62A7CE58FC8(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(iLocal_21, "SET_DATA_SLOT_EMPTY");
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(iLocal_21, "SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0x00000000);
		func_4(unk_0xF59058FCB716F903(0x00000002, 0x000000C9, 0x00000001));
		func_5("HUD_CONTINUE");
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x1200CC973A2399C8(0x00000000);
		unk_0x7E60D21B163E9D56();
		while (!unk_0x757EF87A33649210())
		{
			SYSTEM::WAIT(0x00000000);
		}
		unk_0x9CCCC7CF60F2D30F();
		while (!iLocal_22)
		{
			unk_0xBD706C594F6DCD4A();
			unk_0xD9ACBBA59FD5A09E(0x00000007);
			unk_0x6567AE843FADBA94(iLocal_20, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
			unk_0x6567AE843FADBA94(iLocal_21, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
			if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9))
			{
				iLocal_22 = 0x00000001;
			}
			SYSTEM::WAIT(0x00000000);
		}
		unk_0x31A33F7BCB08CB80(0x00000000);
		func_3(0x00000001, 0x00000001);
		func_1();
	}
	Global_12C5B.f_1 = 0x00000000;
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_271B.f_19), 0x00000000);
	func_6();
}

int func_1()
{
	if (func_2(0x00000000))
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

bool func_2(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_3(int iParam0, int iParam1)
{
	Global_181DF.f_7 = iParam0;
	Global_181DF.f_8 = iParam1;
}

void func_4(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_5(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_6()
{
	if (iLocal_20 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(&iLocal_20);
	}
	if (iLocal_21 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(&iLocal_21);
	}
	unk_0xD9ACBBA59FD5A09E(0x00000004);
	unk_0x31A33F7BCB08CB80(0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

