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
	int iLocal_19 = 0;
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
		func_5();
	}
	iLocal_19 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
	while (!unk_0x83D8570832F172A7(iLocal_19))
	{
		SYSTEM::WAIT(0x00000000);
	}
	while (0x00000001)
	{
		unk_0x6567AE843FADBA94(iLocal_19, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
		func_4();
		func_1(iLocal_18, iLocal_19);
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x7E60C62A7CE58FC8(iParam1, "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_CLEAR_SPACE");
			unk_0x3CAEA85DA607305E(0x000000C8);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000000);
			func_3(unk_0xF59058FCB716F903(0x00000002, 0x000000BF, 0x00000001));
			func_2("PRESS A");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000001);
			func_3(unk_0xF59058FCB716F903(0x00000002, 0x000000C2, 0x00000001));
			func_2("PRESS B");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000002);
			func_3(unk_0xF59058FCB716F903(0x00000002, 0x000000C1, 0x00000001));
			func_2("PRESS X");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000003);
			func_3(unk_0xF59058FCB716F903(0x00000002, 0x000000C0, 0x00000001));
			func_2("PRESS Y");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000050);
			unk_0x7E60D21B163E9D56();
			iLocal_18 = 0xFFFFFFFF;
			break;
		
		case 0x00000001:
			unk_0x7E60C62A7CE58FC8(iParam1, "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_CLEAR_SPACE");
			unk_0x3CAEA85DA607305E(0x000000C8);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000000);
			func_3(unk_0xF59058FCB716F903(0x00000002, 0x000000BB, 0x00000001));
			func_2("DOWN");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000001);
			func_3(unk_0xF59058FCB716F903(0x00000002, 0x000000BC, 0x00000001));
			func_2("UP");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000002);
			func_3(unk_0xF59058FCB716F903(0x00000002, 0x000000BE, 0x00000001));
			func_2("LEFT");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000003);
			func_3(unk_0xF59058FCB716F903(0x00000002, 0x000000BD, 0x00000001));
			func_2("RIGHT");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000050);
			unk_0x7E60D21B163E9D56();
			iLocal_18 = 0xFFFFFFFF;
			break;
		
		case 0x00000002:
			unk_0x7E60C62A7CE58FC8(iParam1, "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_CLEAR_SPACE");
			unk_0x3CAEA85DA607305E(0x000000C8);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000000);
			func_3(unk_0xF59058FCB716F903(0x00000002, 0x000000CA, 0x00000001));
			func_2("BACK");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(iParam1, "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000050);
			unk_0x7E60D21B163E9D56();
			iLocal_18 = 0xFFFFFFFF;
			break;
		
		default:
			break;
	}
}

void func_2(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_3(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_4()
{
	if (Global_4C09 == 0x00000000)
	{
		if (((((((((unk_0x06F8112AA79C53D9(0x00000002, 0x000000BD) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BE)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BC)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BB)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000CD)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000CE)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000CF)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000D0)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000CA))
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
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000D9))
		{
			iLocal_18 = 0x00000001;
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000BD))
		{
			iLocal_18 = 0x00000002;
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000BE))
		{
			iLocal_18 = 0x00000002;
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000CD))
		{
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000CE))
		{
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000CF))
		{
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000D0))
		{
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000BC))
		{
			iLocal_18 = 0x00000002;
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000BB))
		{
			iLocal_18 = 0x00000002;
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9))
		{
			iLocal_18 = 0x00000001;
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000CA))
		{
			iLocal_18 = 0x00000000;
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000CB))
		{
			iLocal_18 = 0x00000001;
		}
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000CC))
		{
			iLocal_18 = 0x00000001;
		}
	}
}

void func_5()
{
	func_6(0x00000000);
	unk_0x21387C9EECC2B220(0x00000000);
	unk_0xE17FDF9E3068281B(&iLocal_19);
	unk_0x10FAF14A60A0DBE1();
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		func_13();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_12(0x00000000))
		{
			func_7(0x00000000);
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

void func_7(int iParam0)
{
	if (func_11())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_10())
		{
			func_9(0x00000001, 0x00000001);
		}
		else
		{
			func_9(0x00000000, 0x00000000);
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
	if (!func_8())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_8()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_12(0x00000000))
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

bool func_10()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_11()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_12(int iParam0)
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

void func_13()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

