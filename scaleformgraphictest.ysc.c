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
	if (unk_0x757EF87A33649210())
	{
		unk_0x82E51BCA72537B6C(0x000001F4);
	}
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_2();
	}
	iLocal_18 = unk_0xB01F55A0FD1CFD49("graphic_design");
	while (!unk_0x83D8570832F172A7(iLocal_18))
	{
		SYSTEM::WAIT(0x00000000);
	}
	while (0x00000001)
	{
		unk_0xEF45C43067063F18(iLocal_18, 0.5f, 0.5f, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
		func_1(iLocal_18);
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1(int iParam0)
{
	if (Global_4C09 == 0x00000000)
	{
		if (((((((unk_0x06F8112AA79C53D9(0x00000002, 0x000000BD) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BE)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BC)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BB)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000CD)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000CE)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000CA))
		{
			Global_4C09 = 0x00000001;
			SYSTEM::SETTIMERA(0x00000000);
		}
	}
	else if (SYSTEM::TIMERA() > 0x00000032)
	{
		Global_4C09 = 0x00000000;
	}
	if (Global_4C09 == 0x00000000)
	{
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000BD))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x0000000A);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000BE))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x0000000B);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000CD))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000004);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000CE))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000006);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000BC))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000008);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000BB))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000009);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000010);
			unk_0x7E60D21B163E9D56();
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000CA))
		{
			unk_0x7E60C62A7CE58FC8(iParam0, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000011);
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_2()
{
	func_3(0x00000000);
	unk_0x21387C9EECC2B220(0x00000000);
	unk_0xE17FDF9E3068281B(&iLocal_18);
	unk_0x10FAF14A60A0DBE1();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_9(0x00000000))
		{
			func_4(0x00000000);
		}
	}
	else if (Global_4C1E.f_1 == 0x00000001)
	{
		if (!Global_4C1E.f_1 == 0x00000000)
		{
			Global_4C1E.f_1 = 0x00000003;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_7())
		{
			func_6(0x00000001, 0x00000001);
		}
		else
		{
			func_6(0x00000000, 0x00000000);
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
	if (!func_5())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_5()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0x00000000))
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

bool func_7()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_8()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

