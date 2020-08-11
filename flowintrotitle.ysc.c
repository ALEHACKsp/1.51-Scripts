#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
#endregion

void __EntryFunction__()
{
	if (unk_0x2EBF608FFE6CA406(0x00000053))
	{
		func_10();
	}
	unk_0x98AB0CC3E937A146(0x00000000);
	unk_0x0674E58A79778E99(&(Global_1B416.f_271B.f_19), 0x00000001);
	func_7();
	unk_0x31A33F7BCB08CB80(0x00000001);
	if (!unk_0x757EF87A33649210())
	{
		unk_0x53491B90E4FD0E56(0x00000000);
	}
	iLocal_0 = unk_0xB01F55A0FD1CFD49("OPENING_CREDITS");
	while (!unk_0x83D8570832F172A7(iLocal_0))
	{
		func_7();
		SYSTEM::WAIT(0x00000000);
	}
	while (!unk_0x757EF87A33649210())
	{
		func_7();
		SYSTEM::WAIT(0x00000000);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (unk_0x1C0640BA9A7327B3() + 8000 + SYSTEM::ROUND((2f * 1000f)));
	while (!unk_0x22A8E52414415B76())
	{
		func_7();
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_271B.f_19, 0x00000001))
		{
			unk_0x6567AE843FADBA94(iLocal_0, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
			if (!iLocal_2)
			{
				if (unk_0x1C0640BA9A7327B3() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 0x00000001;
					iLocal_1 = (unk_0x1C0640BA9A7327B3() + SYSTEM::ROUND((2f * 1000f)));
				}
			}
			else if (unk_0x1C0640BA9A7327B3() > iLocal_1)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_271B.f_19), 0x00000001);
				if (unk_0xE7E2C8B4B9C58AE9() || unk_0x0EFF6B4415DAF4A1())
				{
					func_4(0x00000001, 0x00000001);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		SYSTEM::WAIT(0x00000000);
	}
	func_10();
}

void func_1()
{
	Global_181DF = 0x00000001;
}

int func_2()
{
	if (func_3(0x00000000))
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

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_4(int iParam0, int iParam1)
{
	Global_181DF.f_7 = iParam0;
	Global_181DF.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	unk_0x7E60C62A7CE58FC8(iLocal_0, "HIDE_LOGO");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	unk_0x7E60C62A7CE58FC8(iLocal_0, "SHOW_LOGO");
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0xD06AC7C87A34A6AD(sParam0);
	unk_0x779B34565F4D71B1();
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7C19E5E4784BD7CF(fParam2);
	unk_0x7C19E5E4784BD7CF(fParam3);
	unk_0x7C19E5E4784BD7CF(fParam4);
	unk_0x7C19E5E4784BD7CF(fParam5);
	unk_0x7C19E5E4784BD7CF(fParam6);
	unk_0x7C19E5E4784BD7CF(fParam7);
	unk_0x7E60D21B163E9D56();
}

void func_7()
{
	unk_0xBD706C594F6DCD4A();
	unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C7, 0x00000001);
	unk_0xD9ACBBA59FD5A09E(0x00000007);
	func_8();
}

void func_8()
{
	unk_0xC2127C0F64D6A3B9();
	func_9();
}

void func_9()
{
	Global_56C3.f_86 = 0x00000001;
}

void func_10()
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_271B.f_19), 0x00000001);
	if (iLocal_0 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(&iLocal_0);
	}
	unk_0xD9ACBBA59FD5A09E(0x00000004);
	unk_0x31A33F7BCB08CB80(0x00000000);
	unk_0x98AB0CC3E937A146(0x00000001);
	unk_0x10FAF14A60A0DBE1();
}

