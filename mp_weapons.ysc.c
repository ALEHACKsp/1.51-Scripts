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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66[56] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 0x00000003;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_64 = 0x00000004;
	iLocal_65 = 0x0000000C;
	if (func_159() == 0x00000002)
	{
		while (0x00000001)
		{
			SYSTEM::WAIT(0x00000000);
		}
	}
	unk_0xE1EFAB351350CAAB(0x00000001);
	unk_0xB57F88F0123F4C38();
	Global_1406B4 = 0x00000001;
	iVar0 = 0x00000000;
	Global_14FD9A.f_119 = 0x00000001;
	Global_14F416.f_1 = 0x00000000;
	Global_14F416.f_3 = 0x00000000;
	Global_14F416.f_5 = 0x00000000;
	func_157(&Global_14FD9A);
	func_156(&Global_14FD9A);
	func_155(&Global_14FD9A);
	func_151();
	func_150(0x00000000, &Global_14FD9A);
	unk_0xD9ACBBA59FD5A09E(0x00000007);
	unk_0x8134AB7E30C9809E(0x14211B54);
	unk_0x8134AB7E30C9809E(0x8FADFF36);
	unk_0xDD7BA5AE5BCBFA2A(0x00000000);
	func_149();
	iVar5 = 0x00000001;
	switch (iScriptParam_69)
	{
		case 0x00000003:
			while (iVar0 == 0x00000000)
			{
				SYSTEM::WAIT(0x00000000);
				if (iVar5 == 0x00000001)
				{
					if (iVar6 == 0x00000000)
					{
						if (unk_0xD6BAA6BEEC587BAD())
						{
							unk_0xD0656D22CAAFF59A();
							iVar6 = 0x00000001;
						}
					}
				}
				if (func_148(0x000000C9))
				{
					if (iVar5 == 0x00000000)
					{
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
						Global_14F416.f_1 = 0x00000000;
						Global_14F416.f_3 = 0x00000000;
						iVar5 = 0x00000001;
						func_150(0x00000000, &Global_14FD9A);
						func_156(&Global_14FD9A);
						func_155(&Global_14FD9A);
						func_147(&Global_14FD9A, &Global_14F416);
						unk_0x673DE2AC97BFD28A("MENU_SHIFT_DEPTH");
						unk_0x3CAEA85DA607305E(0x00000001);
						unk_0x7E60D21B163E9D56();
					}
				}
				if (iVar5 == 0x00000000)
				{
					if (func_148(0x000000BD) || func_148(0x000000BE))
					{
						iVar0 = 0x00000001;
					}
				}
				if (func_148(0x000000CA))
				{
					func_145();
					if (iVar5 == 0x00000001)
					{
						unk_0x673DE2AC97BFD28A("MENU_SHIFT_DEPTH");
						unk_0x3CAEA85DA607305E(0xFFFFFFFF);
						unk_0x7E60D21B163E9D56();
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
						unk_0x64366F76B4845277(0x14211B54);
						unk_0xDD7BA5AE5BCBFA2A(0x00000000);
						func_156(&Global_14FD9A);
						func_155(&Global_14FD9A);
						func_150(0xFFFFFFFF, &Global_14FD9A);
						iVar5 = 0x00000000;
					}
					else
					{
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
						iVar0 = 0x00000001;
						unk_0x8081DF53427338B1();
					}
				}
				if (unk_0xA1B5C6D24A46E079())
				{
					unk_0xE5358874AFFB7094(&iVar2, &uVar3);
				}
				if (unk_0xCB0673E2C22B1B2D())
				{
					unk_0x3BD0DFBDFB3F80EC(&uVar1, &iVar2, &uVar3);
					iVar4 = iVar2 + 1000;
					if (iVar4 >= 0x00000000)
					{
						if (iVar4 >= 0x00000009)
						{
							iVar4 = 0x00000008;
						}
						Global_14F416.f_1 = (iVar4 % 0x00000003);
						Global_14F416.f_3 = (iVar4 / 0x00000003);
						func_150(iVar4, &Global_14FD9A);
						func_155(&Global_14FD9A);
					}
				}
				unk_0x0D3BE1DE0262A012("MPWeaponsCommon", 0x00000000);
				unk_0x0D3BE1DE0262A012("MPWeaponsGang0", 0x00000000);
				unk_0x0D3BE1DE0262A012("MPWeaponsGang1", 0x00000000);
				func_9(&Global_14FD9A, &Global_14F416);
				if (iVar5 == 0x00000001)
				{
					func_1(&Global_14FD9A, &Global_14F416, &uLocal_67);
				}
			}
			break;
		
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
	}
	unk_0x8081DF53427338B1();
	unk_0xE1EFAB351350CAAB(0x00000000);
	Global_1406B4 = 0x00000000;
	unk_0xD9ACBBA59FD5A09E(0x00000004);
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_8(uParam2) || (func_8(uParam2) && func_7(uParam2, 0x000000FA, 0x00000000)))
	{
		iVar0 = 0x00000001;
	}
	if ((unk_0x06F8112AA79C53D9(0x00000002, 0x000000BB) || func_6(0x000000BB, &(Global_150392.f_424), 0x00000001)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&(uParam0->f_11D), 0x00000000);
	}
	if ((unk_0x06F8112AA79C53D9(0x00000002, 0x000000BC) || func_6(0x000000BC, &(Global_150392.f_424), 0x00000001)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&(uParam0->f_11D), 0x00000001);
	}
	if (((unk_0x06F8112AA79C53D9(0x00000002, 0x000000BD) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000F1)) || func_6(0x000000BD, &(Global_150392.f_424), 0x00000001)) && iVar0)
	{
		func_5(uParam2);
		func_4(uParam2, 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&(uParam0->f_11D), 0x00000002);
	}
	if (((unk_0x06F8112AA79C53D9(0x00000002, 0x000000BE) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000F2)) || func_6(0x000000BE, &(Global_150392.f_424), 0x00000001)) && iVar0)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_11D), 0x00000003);
		func_5(uParam2);
		func_4(uParam2, 0x00000000, 0x00000000);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_11D, 0x00000001))
	{
		unk_0x0674E58A79778E99(&(uParam0->f_11D), 0x00000001);
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
		uParam1->f_3 = (uParam1->f_3 - 0x00000001);
		if (uParam1->f_3 < 0x00000000)
		{
			uParam1->f_3 = 0x00000002;
		}
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 0x000000BC), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_11D, 0x00000000))
	{
		unk_0x0674E58A79778E99(&(uParam0->f_11D), 0x00000000);
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
		uParam1->f_3++;
		if (uParam1->f_3 > 0x00000002)
		{
			uParam1->f_3 = 0x00000000;
		}
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 0x000000BB), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_11D, 0x00000002))
	{
		unk_0x0674E58A79778E99(&(uParam0->f_11D), 0x00000002);
		uParam1->f_1 = (uParam1->f_1 - 0x00000001);
		if (uParam1->f_1 < 0x00000000)
		{
			if (iLocal_64 > 0x00000001)
			{
				func_157(uParam0);
				*uParam0 = 0x00000000;
				func_2(uParam0);
			}
			if (uParam1->f_5 > 0x00000000)
			{
				uParam1->f_5 = (uParam1->f_5 - 0x00000001);
				uParam1->f_1 = 0x00000002;
			}
			else
			{
				uParam1->f_5 = iLocal_64;
				uParam1->f_1 = 0x00000002;
				iVar1 = (uParam1->f_1 + uParam1->f_3 * 3);
				if (iVar1 >= iLocal_65)
				{
					uParam1->f_1 = ((iLocal_65 - 0x00000001) % 0x00000003);
					uParam1->f_3 = ((iLocal_65 - 0x00000001) / 0x00000003);
				}
			}
		}
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 0x000000BD), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_11D, 0x00000003))
	{
		unk_0x0674E58A79778E99(&(uParam0->f_11D), 0x00000003);
		uParam1->f_1++;
		iVar2 = (uParam1->f_1 + uParam1->f_3 * 3);
		if (uParam1->f_1 > 0x00000002 || (uParam1->f_5 == iLocal_64 && iVar2 >= iLocal_65))
		{
			if (iLocal_64 > 0x00000001)
			{
				func_157(uParam0);
				*uParam0 = 0x00000000;
				func_2(uParam0);
			}
			uParam1->f_1 = 0x00000000;
			uParam1->f_5++;
			if (uParam1->f_5 > iLocal_64)
			{
				uParam1->f_5 = 0x00000000;
			}
		}
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
		func_150(func_3(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 0x000000BE), uParam0);
		func_156(uParam0);
		func_155(uParam0);
		func_147(uParam0, uParam1);
	}
}

void func_2(var uParam0)
{
	uParam0->f_119 = 0x00000000;
}

int func_3(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (*uParam0 + *uParam1 * 3);
	switch (iParam3)
	{
		case 0x000000BC:
			if (iParam2 == iLocal_64)
			{
				if (iVar0 > (iLocal_65 - 0x00000001))
				{
					*uParam1 = 0x00000000;
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 0x000000BB:
			if (iParam2 == iLocal_64)
			{
				if (iVar0 > (iLocal_65 - 0x00000001))
				{
					if (*uParam1 > 0x00000000)
					{
						*uParam1 = (*uParam1 - 0x00000001);
					}
					else
					{
						*uParam1 = 0x00000000;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
		
		case 0x000000BD:
			break;
		
		case 0x000000BE:
			if (iParam2 == iLocal_64)
			{
				if (*uParam0 == 0x00000000)
				{
					iVar1 = 0x00000000;
					while (iVar1 <= 0x00000003)
					{
						if (iVar0 > (iLocal_65 - 0x00000001))
						{
							*uParam1 = (*uParam1 - 0x00000001);
							iVar0 = (*uParam0 + *uParam1 * 3);
						}
						else
						{
							iVar1 = 0x00000003;
						}
						iVar1++;
					}
				}
				else if (iVar0 > (iLocal_65 - 0x00000001))
				{
					if (*uParam0 > 0x00000000)
					{
						*uParam0 = (*uParam0 - 0x00000001);
					}
					else
					{
						*uParam0 = 0x00000000;
					}
					iVar0 = (*uParam0 + *uParam1 * 3);
				}
			}
			break;
	}
	return iVar0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0x00000000)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 0x00000001;
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

int func_6(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (unk_0x0DED1C1B8250FA57(0x00000002, 0x000000C3) - 0x0000007F);
	iVar1 = (unk_0x0DED1C1B8250FA57(0x00000002, 0x000000C4) - 0x0000007F);
	iVar2 = (unk_0x0DED1C1B8250FA57(0x00000002, 0x000000C5) - 0x0000007F);
	switch (iParam0)
	{
		case 0x000000BD:
			if (iVar0 < 0xFFFFFFE2)
			{
				if (*uParam1 < unk_0x1C0640BA9A7327B3() || iParam2 == 0x00000000)
				{
					*uParam1 = unk_0x1C0640BA9A7327B3() + 250;
					return 0x00000001;
				}
			}
			break;
		
		case 0x000000BE:
			if (iVar0 > 0x0000001E)
			{
				if (*uParam1 < unk_0x1C0640BA9A7327B3() || iParam2 == 0x00000000)
				{
					*uParam1 = unk_0x1C0640BA9A7327B3() + 250;
					return 0x00000001;
				}
			}
			break;
		
		case 0x000000BC:
			if (iVar1 < 0xFFFFFFE2)
			{
				if (*uParam1 < unk_0x1C0640BA9A7327B3() || iParam2 == 0x00000000)
				{
					*uParam1 = unk_0x1C0640BA9A7327B3() + 250;
					return 0x00000001;
				}
			}
			break;
		
		case 0x000000BB:
			if (iVar1 > 0x0000001E)
			{
				if (*uParam1 < unk_0x1C0640BA9A7327B3() || iParam2 == 0x00000000)
				{
					*uParam1 = unk_0x1C0640BA9A7327B3() + 250;
					return 0x00000001;
				}
			}
			break;
		
		case 0x000000C2:
			if (iVar2 > 0x0000001E)
			{
				if (*uParam1 < unk_0x1C0640BA9A7327B3() || iParam2 == 0x00000000)
				{
					*uParam1 = unk_0x1C0640BA9A7327B3() + 250;
					return 0x00000001;
				}
			}
			break;
		
		case 0x000000C1:
			if (iVar2 < 0xFFFFFFE2)
			{
				if (*uParam1 < unk_0x1C0640BA9A7327B3() || iParam2 == 0x00000000)
				{
					*uParam1 = unk_0x1C0640BA9A7327B3() + 250;
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_4(uParam0, bParam2, 0x00000000);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 0x00000001;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9(var uParam0, var uParam1)
{
	if ((unk_0x27117E2CDD4D67C3("MPWeaponsCommon") && unk_0x27117E2CDD4D67C3("MPWeaponsGang0")) && unk_0x27117E2CDD4D67C3("MPWeaponsGang1"))
	{
		if (func_144(0x00000008, 0xFFFFFFFF) == 0x00000000)
		{
			*uParam1 = func_143();
		}
		func_149();
		switch (uParam1->f_5)
		{
			case 0x00000000:
				if (!uParam0->f_1[0x00000000])
				{
					func_107(joaat("weapon_pistol"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_combatpistol"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_appistol"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_microsmg"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_smg"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_assaultrifle"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_carbinerifle"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_advancedrifle"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_mg"), uParam0, *uParam1, 0x00000000);
				}
				break;
			
			case 0x00000001:
				if (!uParam0->f_1[0x00000000])
				{
					func_107(joaat("weapon_combatmg"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_assaultsmg"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_pumpshotgun"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_assaultshotgun"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_sniperrifle"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_heavysniper"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_grenadelauncher"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_minigun"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_rpg"), uParam0, *uParam1, 0x00000000);
				}
				break;
			
			case 0x00000002:
				if (!uParam0->f_1[0x00000000])
				{
					func_107(joaat("weapon_knife"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_nightstick"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_bat"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_crowbar"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_golfclub"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_molotov"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_grenade"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_smokegrenade"), uParam0, *uParam1, 0x00000000);
					func_107(joaat("weapon_stickybomb"), uParam0, *uParam1, 0x00000000);
				}
				break;
			
			default:
				if (!uParam0->f_1[0x00000000])
				{
					func_98(uParam0, uParam1);
				}
				break;
		}
		func_10(uParam0, func_97(uParam0));
	}
}

void func_10(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (iParam1 == 0x00000001)
	{
		*uParam0 = 0x00000000;
		func_2(uParam0);
	}
	if (*uParam0 == 0x00000000)
	{
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000008)
		{
			iVar5 = 0x00000000;
			iVar6 = 0x00000000;
			iVar7 = 0x00000000;
			if (uParam0->f_1[iVar0] == 0x00000001)
			{
				if (uParam0->f_55[iVar0] != 0x00000000)
				{
					if (func_96(uParam0->f_55[iVar0]))
					{
						if (func_94(0x60BD749C, func_95(uParam0->f_55[iVar0]), 0xFFFFFFFF))
						{
							bVar2 = 0x00000001;
						}
						else
						{
							bVar2 = 0x00000000;
						}
					}
					else if (func_90(uParam0->f_55[iVar0], uParam0->f_114, 0x00000000))
					{
						bVar2 = 0x00000001;
					}
					else
					{
						bVar2 = 0x00000000;
					}
				}
				bVar3 = func_87(uParam0->f_55[iVar0], uParam0->f_114, 0x00000000);
				iVar1 = 0x00000000;
				while (iVar1 <= 0x00000023)
				{
					iVar4 = func_85(uParam0->f_55[iVar0], iVar1);
					if (!bVar3)
					{
						func_69(iVar4, uParam0->f_55[iVar0], 0x00000000, 0x00000000, 0x00000000);
						func_65(iVar4, uParam0->f_55[iVar0], 0x00000000);
						func_59(iVar4, uParam0->f_55[iVar0], 0x00000000);
					}
					if (unk_0x7F8A39872A07D2CE(func_58(iVar4, uParam0->f_55[iVar0]), "WCT_CLIP1"))
					{
						func_69(iVar4, uParam0->f_55[iVar0], 0x00000001, 0x00000000, 0x00000000);
						if (!bVar3)
						{
							func_65(iVar4, uParam0->f_55[iVar0], 0x00000001);
							func_59(iVar4, uParam0->f_55[iVar0], 0x00000001);
						}
					}
					if (unk_0x7F8A39872A07D2CE(func_58(iVar4, uParam0->f_55[iVar0]), "WCT_SCOPE_LRG"))
					{
						func_69(iVar4, uParam0->f_55[iVar0], 0x00000001, 0x00000000, 0x00000000);
						if (!bVar3)
						{
							func_65(iVar4, uParam0->f_55[iVar0], 0x00000001);
							func_59(iVar4, uParam0->f_55[iVar0], 0x00000001);
						}
					}
					if ((uParam0->f_55[iVar0] == joaat("weapon_bullpupshotgun") || uParam0->f_55[iVar0] == joaat("weapon_pistol50")) || uParam0->f_55[iVar0] == joaat("weapon_snspistol"))
					{
						func_69(iVar4, uParam0->f_55[iVar0], 0x00000001, 0x00000000, 0x00000000);
						func_65(iVar4, uParam0->f_55[iVar0], 0x00000001);
						func_59(iVar4, uParam0->f_55[iVar0], 0x00000001);
					}
					if (bVar3 && func_53(iVar4, uParam0->f_55[iVar0], uParam0->f_114))
					{
						if (bVar2 && func_94(iVar4, uParam0->f_55[iVar0], uParam0->f_114))
						{
							iVar5 = (iVar5 + func_51(iVar4, uParam0->f_55[iVar0], 0x00000008));
							iVar6 = (iVar6 + func_49(iVar4, uParam0->f_55[iVar0], 0x00000008));
							iVar7 = (iVar7 + func_47(iVar4, uParam0->f_55[iVar0], 0x00000008));
						}
					}
					else if (iVar4 != 0x00000000)
					{
						iVar5 = (iVar5 + func_51(iVar4, uParam0->f_55[iVar0], 0x00000004));
						iVar6 = (iVar6 + func_49(iVar4, uParam0->f_55[iVar0], 0x00000004));
						iVar7 = (iVar7 + func_47(iVar4, uParam0->f_55[iVar0], 0x00000004));
					}
					iVar1++;
				}
			}
			iVar8 = 0x00000000;
			if (uParam0->f_55[iVar0] != 0x00000000)
			{
				if (bVar3)
				{
					if (func_96(uParam0->f_55[iVar0]))
					{
						if (func_94(0x60BD749C, func_95(uParam0->f_55[iVar0]), 0xFFFFFFFF))
						{
							bVar2 = 0x00000001;
						}
						else
						{
							bVar2 = 0x00000000;
						}
					}
					else if (func_90(uParam0->f_55[iVar0], uParam0->f_114, 0x00000000))
					{
						bVar2 = 0x00000001;
					}
					else
					{
						bVar2 = 0x00000000;
					}
					if (((bVar2 || (uParam0->f_55[iVar0] == joaat("weapon_pistol") && unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_pistol"), 0x00000000))) || func_45(uParam0->f_55[iVar0])) || func_29(uParam0->f_55[iVar0], uParam0->f_114))
					{
						if (func_96(uParam0->f_55[iVar0]))
						{
							if (bVar2)
							{
								iVar8++;
							}
							else
							{
								iVar8 += 2;
							}
						}
						else
						{
							iVar8++;
						}
					}
					else
					{
						iVar8 += 2;
					}
				}
				else
				{
					iVar8 += 4;
				}
			}
			if (uParam0->f_1[iVar0] == 0x00000000 || unk_0x7F8A39872A07D2CE(func_26(uParam0->f_55[iVar0], 0x00000000), func_26(0x00000000, 0x00000000)))
			{
				iVar8 = 0x00000000;
			}
			unk_0x673DE2AC97BFD28A("SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(iVar0);
			unk_0x3CAEA85DA607305E(iVar0);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(uParam0->f_55[iVar0]);
			unk_0x3CAEA85DA607305E(iVar5);
			unk_0x3CAEA85DA607305E(iVar8);
			unk_0x3CAEA85DA607305E(iVar6);
			unk_0x3CAEA85DA607305E(iVar7);
			unk_0x7E60D21B163E9D56();
			iVar0++;
		}
		unk_0x673DE2AC97BFD28A("DISPLAY_DATA_SLOT");
		unk_0x3CAEA85DA607305E(0x00000000);
		unk_0x7E60D21B163E9D56();
		*uParam0 = 0x00000001;
	}
	func_23(uParam0, func_25(uParam0));
	func_14(uParam0, func_22(uParam0));
	func_11(uParam0, func_13(uParam0));
}

void func_11(var uParam0, int iParam1)
{
	if (iParam1 == 0x00000001)
	{
		uParam0->f_117 = 0x00000000;
		func_12(uParam0);
	}
	if (uParam0->f_117 == 0x00000000)
	{
		unk_0x673DE2AC97BFD28A("SET_COLUMN_HIGHLIGHT");
		unk_0x3CAEA85DA607305E(0x00000000);
		unk_0x3CAEA85DA607305E(uParam0->f_115);
		unk_0x1200CC973A2399C8(0x00000000);
		unk_0x1200CC973A2399C8(0x00000001);
		unk_0x1200CC973A2399C8(0x00000001);
		unk_0x7E60D21B163E9D56();
		uParam0->f_117 = 0x00000001;
	}
}

void func_12(var uParam0)
{
	uParam0->f_11B = 0x00000000;
}

int func_13(var uParam0)
{
	return uParam0->f_11B;
}

void func_14(var uParam0, int iParam1)
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, " ", 16);
	if (iParam1 == 0x00000001)
	{
		uParam0->f_118 = 0x00000000;
		func_21(uParam0);
	}
	if (uParam0->f_118 == 0x00000000)
	{
		if (uParam0->f_115 > 0xFFFFFFFF)
		{
			unk_0x673DE2AC97BFD28A("SET_DESCRIPTION");
			iVar1 = (uParam0->f_D7[uParam0->f_115] - uParam0->f_A5[uParam0->f_115]);
			if (iVar1 < 0x00000000)
			{
				iVar1 = 0x00000000;
			}
			unk_0x3CAEA85DA607305E(0x00000000);
			func_20(&(uParam0->f_B[uParam0->f_115 /*4*/]));
			func_20(&(uParam0->f_30[uParam0->f_115 /*4*/]));
			unk_0x3CAEA85DA607305E(uParam0->f_5F[uParam0->f_115]);
			unk_0x3CAEA85DA607305E(uParam0->f_69[uParam0->f_115]);
			unk_0x7C19E5E4784BD7CF(uParam0->f_87[uParam0->f_115]);
			unk_0x7C19E5E4784BD7CF(uParam0->f_73[uParam0->f_115]);
			unk_0x3CAEA85DA607305E(uParam0->f_91[uParam0->f_115]);
			unk_0x3CAEA85DA607305E(uParam0->f_9B[uParam0->f_115]);
			unk_0x3CAEA85DA607305E(uParam0->f_A5[uParam0->f_115]);
			unk_0x3CAEA85DA607305E(uParam0->f_B9[uParam0->f_115]);
			unk_0x3CAEA85DA607305E(uParam0->f_C3[uParam0->f_115]);
			unk_0x3CAEA85DA607305E(uParam0->f_CD[uParam0->f_115]);
			unk_0x3CAEA85DA607305E(uParam0->f_E1[uParam0->f_115]);
			unk_0x3CAEA85DA607305E(iVar1);
			unk_0x3CAEA85DA607305E(uParam0->f_7D[uParam0->f_115]);
			unk_0x3CAEA85DA607305E(uParam0->f_AF[uParam0->f_115]);
			unk_0x3CAEA85DA607305E(uParam0->f_EB[uParam0->f_115]);
			unk_0x3CAEA85DA607305E(func_16(uParam0->f_55[uParam0->f_115]));
			unk_0x7E60D21B163E9D56();
			if (func_15(uParam0->f_55[uParam0->f_115]))
			{
				unk_0x673DE2AC97BFD28A("SET_COLUMN_TITLE");
				unk_0x3CAEA85DA607305E(0x00000000);
				func_20(&Var0);
				unk_0x3CAEA85DA607305E(0x00000002);
				unk_0x7E60D21B163E9D56();
				unk_0x673DE2AC97BFD28A("SET_COLUMN_TITLE");
				unk_0x3CAEA85DA607305E(0x00000000);
				func_20(&Var0);
				unk_0x3CAEA85DA607305E(0x00000003);
				unk_0x7E60D21B163E9D56();
				unk_0x673DE2AC97BFD28A("SET_COLUMN_TITLE");
				unk_0x3CAEA85DA607305E(0x00000000);
				func_20(&Var0);
				unk_0x3CAEA85DA607305E(0x00000004);
				unk_0x7E60D21B163E9D56();
				unk_0x673DE2AC97BFD28A("SET_COLUMN_TITLE");
				unk_0x3CAEA85DA607305E(0x00000000);
				func_20(&Var0);
				unk_0x3CAEA85DA607305E(0x00000008);
				unk_0x7E60D21B163E9D56();
				unk_0x673DE2AC97BFD28A("SET_COLUMN_TITLE");
				unk_0x3CAEA85DA607305E(0x00000000);
				func_20(&Var0);
				unk_0x3CAEA85DA607305E(0x00000009);
				unk_0x7E60D21B163E9D56();
			}
			else
			{
				unk_0x673DE2AC97BFD28A("SET_COLUMN_TITLE");
				unk_0x3CAEA85DA607305E(0x00000000);
				func_20("PM_ACCURACY");
				unk_0x3CAEA85DA607305E(0x00000002);
				unk_0x7E60D21B163E9D56();
				unk_0x673DE2AC97BFD28A("SET_COLUMN_TITLE");
				unk_0x3CAEA85DA607305E(0x00000000);
				func_20("PM_RANGE");
				unk_0x3CAEA85DA607305E(0x00000003);
				unk_0x7E60D21B163E9D56();
				unk_0x673DE2AC97BFD28A("SET_COLUMN_TITLE");
				unk_0x3CAEA85DA607305E(0x00000000);
				func_20("PM_CLIPSIZE");
				unk_0x3CAEA85DA607305E(0x00000004);
				unk_0x7E60D21B163E9D56();
				unk_0x673DE2AC97BFD28A("SET_COLUMN_TITLE");
				unk_0x3CAEA85DA607305E(0x00000000);
				func_20("PM_KD_RATIO");
				unk_0x3CAEA85DA607305E(0x00000007);
				unk_0x7E60D21B163E9D56();
				unk_0x673DE2AC97BFD28A("SET_COLUMN_TITLE");
				unk_0x3CAEA85DA607305E(0x00000000);
				func_20("PM_HEADSHOTS");
				unk_0x3CAEA85DA607305E(0x00000008);
				unk_0x7E60D21B163E9D56();
				unk_0x673DE2AC97BFD28A("SET_COLUMN_TITLE");
				unk_0x3CAEA85DA607305E(0x00000000);
				func_20("PM_MY_ACCURACY");
				unk_0x3CAEA85DA607305E(0x00000009);
				unk_0x7E60D21B163E9D56();
			}
		}
		uParam0->f_118 = 0x00000001;
	}
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_bat"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_grenade"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_molotov"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_proxmine"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_machete"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_switchblade"):
		case 0xCD274149:
		case 0xBA45E8B8:
		case 0x94117305:
		case 0x19044EE0:
		case 0x3813FC08:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 0x00000000;
			break;
		
		case joaat("weapon_knife"):
			return 0x00000000;
			break;
		
		case joaat("weapon_microsmg"):
			return 0x00000005;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 0x0000001D;
			break;
		
		case joaat("weapon_nightstick"):
			return 0x00000003;
			break;
		
		case joaat("weapon_combatpistol"):
			return 0x00000009;
			break;
		
		case joaat("weapon_smg"):
			return 0x0000000B;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 0x00000018;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 0x00000015;
			break;
		
		case joaat("weapon_stickybomb"):
			return 0x00000013;
			break;
		
		case joaat("weapon_petrolcan"):
			return 0x00000014;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 0x00000011;
			break;
		
		case joaat("weapon_appistol"):
			return 0x00000021;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 0x0000000D;
			break;
		
		case joaat("weapon_grenade"):
			return 0x0000000F;
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_17(0x00000E9D, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				return 0x00000000;
			}
			else
			{
				return 0x0000002A;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 0x00000025;
			break;
		
		case joaat("weapon_molotov"):
			if (func_17(0x00000E9D, 0xFFFFFFFF, 0xFFFFFFFF))
			{
				return 0x00000000;
			}
			else
			{
				return 0x0000001F;
			}
			break;
		
		case joaat("weapon_mg"):
			return 0x00000032;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 0x00000046;
			break;
		
		case joaat("weapon_combatmg"):
			return 0x00000050;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 0x0000003C;
			break;
		
		case joaat("weapon_heavysniper"):
			return 0x0000005A;
			break;
		
		case joaat("weapon_rpg"):
			return 0x00000064;
			break;
		
		case joaat("weapon_minigun"):
			return 0x00000078;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 0x00000000;
			break;
		
		case joaat("weapon_golfclub"):
			return 0x00000000;
			break;
		
		case joaat("weapon_crowbar"):
			return 0x00000000;
			break;
		
		case joaat("weapon_bat"):
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_143();
	}
	iVar1 = func_19(iParam0, iParam1);
	uVar2 = func_18(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
	}
	return iVar0;
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_143();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

void func_20(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_21(var uParam0)
{
	uParam0->f_11C = 0x00000000;
}

int func_22(var uParam0)
{
	return uParam0->f_11C;
}

void func_23(var uParam0, int iParam1)
{
	if (iParam1 == 0x00000001)
	{
		uParam0->f_116 = 0x00000000;
		func_24(uParam0);
	}
	if (uParam0->f_116 == 0x00000000)
	{
		if (uParam0->f_113 != 0x0000270F)
		{
			unk_0x673DE2AC97BFD28A("SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(uParam0->f_113);
			unk_0x7E60D21B163E9D56();
			uParam0->f_113 = 0x0000270F;
			uParam0->f_116 = 0x00000001;
		}
	}
}

void func_24(var uParam0)
{
	uParam0->f_11A = 0x00000000;
}

int func_25(var uParam0)
{
	return uParam0->f_11A;
}

char* func_26(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 0x67DD81F2:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case 0xA81B4220:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 0x1F75106C:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case 0xF624D80A:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case 0xAE2EA48C:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 0x12E82D3D:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case 0xCD274149:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 0x0781FE4A:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case 0xBD248B55:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case 0xBA45E8B8:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case 0x94117305:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 0x19044EE0:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case 0xF6773201:
			return "WT_VEH_WEP";
			break;
		
		case 0xBFE256D4:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 0x78A97CD0:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 0x0A914799:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case 0xDBBD7280:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 0x394F415C:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case 0xFAD1F1C9:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 0x555AF99A:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case 0x969C3D67:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case 0x88374054:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 0x6A6C02E0:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case 0xCB96392F:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case 0x84D6FAFD:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case 0x97EA20B8:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case 0x3813FC08:
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case 0xAF3696A1:
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case 0x476BF155:
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case 0xB62D1F67:
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case 0x917F6C8C:
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case 0x2B5EF5EC:
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		default:
			if (func_28(iParam0, &Var0) != 0xFFFFFFFF)
			{
				if (bParam1)
				{
					return func_27(&(Var0.f_1F));
				}
				else
				{
					return func_27(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_27(var uParam0)
{
	return uParam0;
}

int func_28(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x037F36BEA9A47381();
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (unk_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

bool func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_42() == 0x00000000)
	{
		return 0x00000000;
	}
	if (func_41())
	{
		return 0x00000000;
	}
	iVar0 = func_40(iParam0);
	if (iVar0 != 0x0000019E && func_39(iVar0, 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	iVar1 = func_33(iParam0, iParam1);
	iVar2 = func_31(iParam0);
	return unk_0xEAE0D21A50E6C7F4(iVar1, func_30(iVar2));
}

int func_30(int iParam0)
{
	return (iParam0 % 0x00000020);
}

int func_31(int iParam0)
{
	return func_32(iParam0);
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0x00000000;
			break;
		
		case joaat("weapon_pistol"):
			return 0x00000001;
			break;
		
		case joaat("weapon_combatpistol"):
			return 0x00000002;
			break;
		
		case joaat("weapon_appistol"):
			return 0x00000003;
			break;
		
		case joaat("weapon_pistol50"):
			return 0x00000004;
			break;
		
		case joaat("weapon_smg"):
			return 0x00000005;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 0x00000006;
			break;
		
		case joaat("weapon_microsmg"):
			return 0x00000007;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 0x00000008;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 0x00000009;
			break;
		
		case 0xC78D71B4:
			return 0x0000000A;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 0x0000000B;
			break;
		
		case joaat("weapon_mg"):
			return 0x0000000C;
			break;
		
		case joaat("weapon_combatmg"):
			return 0x0000000D;
			break;
		
		case 0xDDE2A27C:
			return 0x0000000E;
			break;
		
		case joaat("weapon_stickybomb"):
			return 0x0000000F;
			break;
		
		case joaat("weapon_grenade"):
			return 0x00000010;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 0x00000011;
			break;
		
		case joaat("weapon_remotesniper"):
			return 0x00000012;
			break;
		
		case 0x176898A6:
			return 0x00000013;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 0x00000014;
			break;
		
		case joaat("weapon_heavysniper"):
			return 0x00000015;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 0x00000016;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 0x00000017;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 0x00000018;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 0x00000019;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 0x0000001A;
			break;
		
		case joaat("weapon_rpg"):
			return 0x0000001B;
			break;
		
		case joaat("weapon_minigun"):
			return 0x0000001C;
			break;
		
		case 0xEB779748:
			return 0x0000001D;
			break;
		
		case 0x8F796EC9:
			return 0x0000001E;
			break;
		
		case joaat("weapon_stungun"):
			return 0x0000001F;
			break;
		
		case 0xCE1A1A4D:
			return 0x00000020;
			break;
		
		case joaat("gadget_parachute"):
			return 0x00000021;
			break;
		
		case joaat("weapon_knife"):
			return 0x00000022;
			break;
		
		case joaat("weapon_nightstick"):
			return 0x00000023;
			break;
		
		case joaat("weapon_hammer"):
			return 0x00000024;
			break;
		
		case joaat("weapon_bat"):
			return 0x00000025;
			break;
		
		case joaat("weapon_crowbar"):
			return 0x00000026;
			break;
		
		case joaat("weapon_golfclub"):
			return 0x00000027;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 0x00000028;
			break;
		
		case joaat("weapon_molotov"):
			return 0x00000029;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 0x0000002A;
			break;
		
		case joaat("weapon_petrolcan"):
			return 0x0000002B;
			break;
		
		case joaat("weapon_digiscanner"):
			return 0x0000002C;
			break;
		
		case joaat("weapon_bottle"):
			return 0x0000002D;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 0x0000002E;
			break;
		
		case joaat("weapon_snspistol"):
			return 0x0000002F;
			break;
		
		case joaat("weapon_heavypistol"):
			return 0x00000031;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 0x00000030;
			break;
		
		case joaat("weapon_gusenberg"):
			return 0x00000032;
			break;
		
		case joaat("weapon_dagger"):
			return 0x00000033;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 0x00000034;
			break;
		
		case joaat("weapon_flaregun"):
			return 0x00000039;
			break;
		
		case joaat("weapon_musket"):
			return 0x00000035;
			break;
		
		case joaat("weapon_firework"):
			return 0x00000036;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 0x00000038;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 0x00000037;
			break;
		
		case joaat("weapon_proxmine"):
			return 0x0000003C;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 0x0000003D;
			break;
		
		case joaat("weapon_hatchet"):
			return 0x0000003A;
			break;
		
		case joaat("weapon_railgun"):
			return 0x0000003B;
			break;
		
		case joaat("weapon_combatpdw"):
			return 0x00000040;
			break;
		
		case joaat("weapon_knuckle"):
			return 0x0000003E;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 0x0000003F;
			break;
		
		case joaat("weapon_machete"):
			return 0x00000041;
			break;
		
		case joaat("weapon_machinepistol"):
			return 0x00000044;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 0x00000042;
			break;
		
		case joaat("weapon_compactrifle"):
			return 0x00000043;
			break;
		
		case joaat("weapon_flashlight"):
			return 0x00000045;
			break;
		
		case joaat("weapon_revolver"):
			return 0x00000046;
			break;
		
		case joaat("weapon_switchblade"):
			return 0x00000047;
			break;
		
		case 0x12E82D3D:
			return 0x00000048;
			break;
		
		case 0xBD248B55:
			return 0x00000049;
			break;
		
		case 0x0781FE4A:
			return 0x0000004A;
			break;
		
		case 0xCD274149:
			return 0x0000004B;
			break;
		
		case 0xBA45E8B8:
			return 0x0000004C;
			break;
		
		case 0x94117305:
			return 0x0000004D;
			break;
		
		case 0x19044EE0:
			return 0x0000004E;
			break;
		
		case 0x394F415C:
			return 0x00000008;
			break;
		
		case 0xFAD1F1C9:
			return 0x00000009;
			break;
		
		case 0xDBBD7280:
			return 0x0000000D;
			break;
		
		case 0x0A914799:
			return 0x00000015;
			break;
		
		case 0xBFE256D4:
			return 0x00000001;
			break;
		
		case 0x78A97CD0:
			return 0x00000005;
			break;
		
		case 0x555AF99A:
			return 0x00000016;
			break;
		
		case 0x969C3D67:
			return 0x0000002E;
			break;
		
		case 0x88374054:
			return 0x0000002F;
			break;
		
		case 0x6A6C02E0:
			return 0x00000038;
			break;
		
		case 0xCB96392F:
			return 0x00000046;
			break;
		
		case 0x84D6FAFD:
			return 0x00000030;
			break;
		
		case 0x97EA20B8:
			return 0x0000004F;
			break;
		
		case 0x3813FC08:
			return 0x00000050;
			break;
		
		case 0xAF3696A1:
			return 0x00000051;
			break;
		
		case 0x476BF155:
			return 0x00000052;
			break;
		
		case 0xB62D1F67:
			return 0x00000053;
			break;
		
		case 0x917F6C8C:
			return 0x00000054;
			break;
		
		case 0x2B5EF5EC:
			return 0x00000055;
			break;
	}
	return 0x00000000;
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_34(func_36(iParam0), iParam1, 0x00000000);
	return iVar0;
}

int func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_35(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_143();
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

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0x00000000 || func_37() == 0x00000000) || (func_159() == 0x000003E7 && func_37() == 0x000003E7))
	{
		switch (iVar1)
		{
			case 0x00000000:
				return 0x000002AD;
				break;
			
			case 0x00000001:
				return 0x000002AE;
				break;
			
			case 0x00000002:
				return 0x00000973;
				break;
		}
	}
	return 0x00002CF7;
}

int func_37()
{
	return Global_7831;
}

int func_38(int iParam0)
{
	return (iParam0 / 0x00000020);
}

int func_39(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_35(iParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 0x00000011;
			break;
		
		case joaat("weapon_combatpistol"):
			return 0x00000013;
			break;
		
		case joaat("weapon_appistol"):
			return 0x00000017;
			break;
		
		case joaat("weapon_pistol50"):
			return 0x00000015;
			break;
		
		case joaat("weapon_smg"):
			return 0x0000001B;
			break;
		
		case joaat("weapon_microsmg"):
			return 0x00000019;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 0x0000001F;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 0x00000021;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 0x00000023;
			break;
		
		case joaat("weapon_mg"):
			return 0x00000025;
			break;
		
		case joaat("weapon_combatmg"):
			return 0x00000027;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 0x0000002B;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 0x0000002D;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 0x00000031;
			break;
		
		case joaat("weapon_heavysniper"):
			return 0x00000037;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 0x00000035;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 0x0000003B;
			break;
		
		case joaat("weapon_rpg"):
			return 0x0000003D;
			break;
		
		case joaat("weapon_minigun"):
			return 0x0000003F;
			break;
		
		case joaat("weapon_grenade"):
			return 0x00000041;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 0x00000043;
			break;
		
		case joaat("weapon_stickybomb"):
			return 0x00000045;
			break;
		
		case joaat("weapon_molotov"):
			return 0x00000047;
			break;
		
		case joaat("weapon_petrolcan"):
			return 0x0000004A;
			break;
		
		case joaat("gadget_parachute"):
			return 0x00000049;
			break;
		
		case joaat("weapon_knife"):
			return 0x00000001;
			break;
		
		case joaat("weapon_nightstick"):
			return 0x00000003;
			break;
		
		case joaat("weapon_hammer"):
			return 0x0000000B;
			break;
		
		case joaat("weapon_bat"):
			return 0x0000000D;
			break;
		
		case joaat("weapon_crowbar"):
			return 0x00000005;
			break;
		
		case joaat("weapon_golfclub"):
			return 0x0000000F;
			break;
		
		case 0xDDE2A27C:
			return 0x00000029;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 0x0000001D;
			break;
		
		case 0x176898A6:
			return 0x00000039;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 0x0000002F;
			break;
		
		case joaat("weapon_bottle"):
			return 0x0000008E;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 0x0000011A;
			break;
		
		case joaat("weapon_snspistol"):
			return 0x00000090;
			break;
		
		case joaat("weapon_heavypistol"):
			return 0x00000118;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 0x0000011C;
			break;
		
		case joaat("weapon_gusenberg"):
			return 0x0000011E;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 0x00000135;
			break;
		
		case joaat("weapon_dagger"):
			return 0x00000133;
			break;
		
		case joaat("weapon_musket"):
			return 0x00000139;
			break;
		
		case joaat("weapon_firework"):
			return 0x00000137;
			break;
		
		case joaat("weapon_flaregun"):
			return 0x0000012D;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 0x00000145;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 0x00000147;
			break;
		
		case joaat("weapon_proxmine"):
			return 0x0000014B;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 0x0000014D;
			break;
		
		case joaat("weapon_hatchet"):
			return 0x00000149;
			break;
		
		case joaat("weapon_combatpdw"):
			return 0x0000014F;
			break;
		
		case joaat("weapon_knuckle"):
			return 0x00000151;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 0x00000153;
			break;
		
		case joaat("weapon_machete"):
			return 0x00000155;
			break;
		
		case joaat("weapon_machinepistol"):
			return 0x00000157;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 0x0000015C;
			break;
		
		case joaat("weapon_compactrifle"):
			return 0x0000015A;
			break;
		
		case joaat("weapon_flashlight"):
			return 0x0000015E;
			break;
		
		case joaat("weapon_revolver"):
			return 0x00000161;
			break;
		
		case joaat("weapon_switchblade"):
			return 0x00000163;
			break;
		
		case 0x12E82D3D:
			return 0x00000168;
			break;
		
		case 0xBD248B55:
			return 0x0000016E;
			break;
		
		case 0x0781FE4A:
			return 0x0000016C;
			break;
		
		case 0xCD274149:
			return 0x0000016A;
			break;
		
		case 0xBA45E8B8:
			return 0x00000170;
			break;
		
		case 0x94117305:
			return 0x00000172;
			break;
		
		case 0x19044EE0:
			return 0x00000009;
			break;
		
		case 0x394F415C:
			return 0x0000001F;
			break;
		
		case 0xFAD1F1C9:
			return 0x00000021;
			break;
		
		case 0xDBBD7280:
			return 0x00000027;
			break;
		
		case 0x0A914799:
			return 0x00000037;
			break;
		
		case 0xBFE256D4:
			return 0x00000011;
			break;
		
		case 0x78A97CD0:
			return 0x0000001B;
			break;
		
		case 0x84D6FAFD:
			return 0x0000002F;
			break;
		
		case 0x6A6C02E0:
			return 0x00000147;
			break;
		
		case 0x555AF99A:
			return 0x0000002B;
			break;
		
		case 0xCB96392F:
			return 0x00000161;
			break;
		
		case 0x88374054:
			return 0x00000090;
			break;
		
		case 0x969C3D67:
			return 0x0000011A;
			break;
		
		case 0x97EA20B8:
			return 0x0000018A;
			break;
		
		case 0xAF3696A1:
			return 0x00000192;
			break;
		
		case 0x476BF155:
			return 0x00000194;
			break;
		
		case 0xB62D1F67:
			return 0x00000196;
			break;
		
		case 0x3813FC08:
			return 0x00000190;
			break;
		
		case 0x917F6C8C:
			return 0x0000019A;
			break;
		
		case 0x2B5EF5EC:
			return 0x00000198;
			break;
	}
	return 0x0000019E;
}

bool func_41()
{
	return Global_140858;
}

int func_42()
{
	if (func_44() && func_43(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_43(int iParam0)
{
	return Global_140676[iParam0];
}

var func_44()
{
	return func_43(func_143() + 1);
}

int func_45(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
			bVar0 = 0x00000001;
			iVar3 = 0x000001ED;
			break;
		
		case joaat("weapon_golfclub"):
			bVar0 = 0x00000001;
			iVar3 = 0x000000F7;
			break;
		
		case joaat("weapon_bat"):
			bVar0 = 0x00000001;
			iVar3 = 0x000000F0;
			break;
		
		case joaat("weapon_crowbar"):
			bVar0 = 0x00000001;
			iVar3 = 0x000000D4;
			break;
	}
	if (bVar0)
	{
		iVar1 = func_46(unk_0xD803B885F5E47A62());
		iVar2 = func_16(iParam0);
		if (iVar1 >= iVar2)
		{
			if (func_34(iVar3, 0xFFFFFFFF, 0x00000000) > 0x00000000)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

var func_46(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_D3.f_6;
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_48(iParam0, iParam1);
	switch (iVar0)
	{
		case 0x00000001:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00000002;
					break;
				
				case 0x00000001:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00000004;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00000002;
					break;
				
				case 0x00000001:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00000004;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00000010;
					break;
				
				case 0x00000001:
					return 0x00000008;
					break;
				
				case 0x00000008:
					return 0x00000020;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00000080;
					break;
				
				case 0x00000001:
					return 0x00000040;
					break;
				
				case 0x00000008:
					return 0x00000100;
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x78A97CD0:
			switch (iParam0)
			{
				case 0xE502AB6B:
					return 0x00000001;
					break;
				
				case 0x3DECC7DA:
					return 0x00000002;
					break;
				
				case 0xD9103EE1:
					return 0x00000004;
					break;
				
				case 0xA564D78B:
					return 0x00000008;
					break;
			}
			break;
		
		case 0x0A914799:
			switch (iParam0)
			{
				case 0x82C10383:
					return 0x00000002;
					break;
				
				case 0x909630B7:
					return 0x00000004;
					break;
				
				case 0x108AB09E:
					return 0x00000008;
					break;
			}
			break;
		
		case 0xDBBD7280:
			switch (iParam0)
			{
				case 0x3F3C8181:
					return 0x00000001;
					break;
				
				case 0xC66B6542:
					return 0x00000002;
					break;
				
				case 0xC34EF234:
					return 0x00000004;
					break;
				
				case 0xB5E2575B:
					return 0x00000008;
					break;
			}
			break;
		
		case 0x394F415C:
			switch (iParam0)
			{
				case 0x049B2945:
					return 0x00000001;
					break;
				
				case 0xC66B6542:
					return 0x00000002;
					break;
				
				case 0x43A49D26:
					return 0x00000004;
					break;
				
				case 0x5646C26A:
					return 0x00000008;
					break;
			}
			break;
		
		case 0xFAD1F1C9:
			switch (iParam0)
			{
				case 0x049B2945:
					return 0x00000001;
					break;
				
				case 0xC66B6542:
					return 0x00000002;
					break;
				
				case 0x833637FF:
					return 0x00000004;
					break;
				
				case 0x8B3C480B:
					return 0x00000008;
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_50(iParam0, iParam1);
	switch (iVar0)
	{
		case 0x00000001:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00000002;
					break;
				
				case 0x00000001:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00000004;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00000010;
					break;
				
				case 0x00000001:
					return 0x00000008;
					break;
				
				case 0x00000008:
					return 0x00000020;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00000080;
					break;
				
				case 0x00000001:
					return 0x00000040;
					break;
				
				case 0x00000008:
					return 0x00000100;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00000400;
					break;
				
				case 0x00000001:
					return 0x00000200;
					break;
				
				case 0x00000008:
					return 0x00000800;
					break;
			}
			break;
		
		case 0x00000010:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00002000;
					break;
				
				case 0x00000001:
					return 0x00001000;
					break;
				
				case 0x00000008:
					return 0x00004000;
					break;
			}
			break;
		
		case 0x00000020:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00010000;
					break;
				
				case 0x00000001:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00020000;
					break;
			}
			break;
		
		case 0x00000040:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00000002;
					break;
				
				case 0x00000001:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00100000;
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_50(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x78A97CD0:
		case 0x0A914799:
		case 0xFAD1F1C9:
		case 0x394F415C:
		case 0xDBBD7280:
			switch (iParam0)
			{
				case 0xB99402D4:
					return 0x00000001;
					break;
				
				case 0xC867A07B:
					return 0x00000002;
					break;
				
				case 0xDE11CBCF:
					return 0x00000004;
					break;
				
				case 0xEC9068CC:
					return 0x00000007;
					break;
				
				case 0x02E7957A:
					return 0x00000010;
					break;
				
				case 0x347EF8AC:
					return 0x00000020;
					break;
				
				case 0x4DB62ABE:
					return 0x00000040;
					break;
				
				case 0x5F7DCE4D:
					return 0x00000001;
					break;
				
				case 0x6927E1A1:
					return 0x00000002;
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_52(iParam0, iParam1);
	switch (iVar0)
	{
		case 0x00000001:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00000002;
					break;
				
				case 0x00000001:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00000004;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00000010;
					break;
				
				case 0x00000001:
					return 0x00000008;
					break;
				
				case 0x00000008:
					return 0x00000020;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00000080;
					break;
				
				case 0x00000001:
					return 0x00000040;
					break;
				
				case 0x00000008:
					return 0x00000100;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00000400;
					break;
				
				case 0x00000001:
					return 0x00000200;
					break;
				
				case 0x00000008:
					return 0x00000800;
					break;
			}
			break;
		
		case 0x00000010:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00002000;
					break;
				
				case 0x00000001:
					return 0x00001000;
					break;
				
				case 0x00000008:
					return 0x00004000;
					break;
			}
			break;
		
		case 0x00000020:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00010000;
					break;
				
				case 0x00000001:
					return 0x00008000;
					break;
				
				case 0x00000008:
					return 0x00020000;
					break;
			}
			break;
		
		case 0x00000100:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x02000000;
					break;
				
				case 0x00000001:
					return 0x01000000;
					break;
				
				case 0x00000008:
					return 0x04000000;
					break;
			}
			break;
		
		case 0x00000040:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00080000;
					break;
				
				case 0x00000001:
					return 0x00040000;
					break;
				
				case 0x00000008:
					return 0x00100000;
					break;
			}
			break;
		
		case 0x00000080:
			switch (iParam2)
			{
				case 0x00000004:
					return 0x00400000;
					break;
				
				case 0x00000001:
					return 0x00200000;
					break;
				
				case 0x00000008:
					return 0x00800000;
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_52(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 0x00000010;
				
				case joaat("component_pistol_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000002;
				
				case joaat("component_at_pi_supp_02"):
					return 0x00000001;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 0x00000010;
				
				case joaat("component_pistol50_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000002;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000001;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 0x00000010;
				
				case joaat("component_combatpistol_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000002;
				
				case joaat("component_at_pi_supp"):
					return 0x00000001;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 0x00000010;
				
				case joaat("component_appistol_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000002;
				
				case joaat("component_at_pi_supp"):
					return 0x00000001;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 0x00000010;
				
				case joaat("component_microsmg_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000002;
				
				case joaat("component_at_scope_macro"):
					return 0x00000040;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000001;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 0x00000010;
				
				case joaat("component_assaultsmg_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000001;
				
				case joaat("component_at_scope_macro"):
					return 0x00000040;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 0x00000010;
				
				case joaat("component_smg_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
				
				case joaat("component_at_pi_supp"):
					return 0x00000001;
				
				case joaat("component_at_scope_macro_02"):
					return 0x00000040;
				
				case joaat("component_smg_clip_03"):
					return 0x00000100;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 0x00000010;
				
				case joaat("component_assaultrifle_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000080;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
				
				case joaat("component_at_scope_macro"):
					return 0x00000040;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000001;
				
				case joaat("component_assaultrifle_clip_03"):
					return 0x00000100;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 0x00000010;
				
				case joaat("component_carbinerifle_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000080;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
				
				case joaat("component_at_scope_medium"):
					return 0x00000040;
				
				case joaat("component_at_ar_supp"):
					return 0x00000001;
				
				case joaat("component_carbinerifle_clip_03"):
					return 0x00000100;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 0x00000010;
				
				case joaat("component_specialcarbine_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000080;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
				
				case joaat("component_at_scope_medium"):
					return 0x00000040;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000001;
				
				case joaat("component_specialcarbine_clip_03"):
					return 0x00000100;
				
				default:
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 0x00000010;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000080;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
				
				case joaat("component_at_scope_small"):
					return 0x00000040;
				
				case joaat("component_at_ar_supp"):
					return 0x00000001;
				
				default:
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 0x00000010;
				
				case joaat("component_heavypistol_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000002;
				
				case joaat("component_at_pi_supp"):
					return 0x00000001;
				
				default:
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 0x00000010;
				
				case joaat("component_snspistol_clip_02"):
					return 0x00000020;
				
				default:
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 0x00000010;
				
				case joaat("component_advancedrifle_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
				
				case joaat("component_at_scope_small"):
					return 0x00000040;
				
				case joaat("component_at_ar_supp"):
					return 0x00000001;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 0x00000010;
				
				case joaat("component_mg_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_scope_small_02"):
					return 0x00000040;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 0x00000010;
				
				case joaat("component_combatmg_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000080;
				
				case joaat("component_at_scope_medium"):
					return 0x00000040;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 0x00000001;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 0x00000010;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000080;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
				
				case joaat("component_at_ar_supp"):
					return 0x00000001;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 0x00000080;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000001;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_at_scope_max"):
					return 0x00000004;
				
				case joaat("component_at_scope_large"):
					return 0x00000040;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000001;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_at_scope_max"):
					return 0x00000004;
				
				case joaat("component_at_scope_large"):
					return 0x00000040;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 0x00000080;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
				
				case joaat("component_at_scope_small"):
					return 0x00000040;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 0x00000010;
				
				case joaat("component_vintagepistol_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_pi_supp"):
					return 0x00000001;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 0x00000010;
				
				case joaat("component_gusenberg_clip_02"):
					return 0x00000020;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 0x00000010;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000001;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000080;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 0x00000100;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 0x00000010;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 0x00000040;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
				
				case joaat("component_at_ar_supp"):
					return 0x00000001;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000080;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 0x00000010;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 0x00000010;
				
				case joaat("component_combatpdw_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_scope_small"):
					return 0x00000040;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000080;
				
				case joaat("component_combatpdw_clip_03"):
					return 0x00000100;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 0x00000010;
				
				case joaat("component_machinepistol_clip_02"):
					return 0x00000020;
				
				case joaat("component_at_pi_supp"):
					return 0x00000001;
				
				case joaat("component_machinepistol_clip_03"):
					return 0x00000100;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 0x00000010;
				
				case joaat("component_compactrifle_clip_02"):
					return 0x00000020;
				
				case joaat("component_compactrifle_clip_03"):
					return 0x00000100;
					break;
			}
			break;
		
		case 0xBD248B55:
			switch (iParam0)
			{
				case 0x84C8B2D3:
					return 0x00000010;
				
				case 0x937ED0B7:
					return 0x00000020;
					break;
			}
			break;
		
		case 0xBFE256D4:
			switch (iParam0)
			{
				case 0x94F42D62:
					return 0x00000010;
					break;
				
				case 0x5ED6C128:
					return 0x00000020;
					break;
				
				case 0x4F37DF2A:
					return 0x00000100;
					break;
				
				case 0x85FEA109:
					return 0x00000100;
					break;
				
				case 0x2BBD7A3A:
					return 0x00000100;
					break;
				
				case 0x25CAAEAF:
					return 0x00000100;
					break;
				
				case 0x43FD595B:
					return 0x00000002;
					break;
				
				case 0x8ED4BB70:
					return 0x00000080;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 0x00000001;
					break;
				
				case 0x21E34793:
					return 0x00000080;
					break;
			}
			break;
		
		case 0x78A97CD0:
			switch (iParam0)
			{
				case 0x4C24806E:
					return 0x00000010;
					break;
				
				case 0xB9835B2E:
					return 0x00000020;
					break;
				
				case 0x0B5A715F:
					return 0x00000100;
					break;
				
				case 0x3A1BD6FA:
					return 0x00000100;
					break;
				
				case 0xD99222E5:
					return 0x00000100;
					break;
				
				case 0x7FEA36EC:
					return 0x00000100;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
					break;
				
				case 0x9FDB5652:
					return 0x00000040;
					break;
				
				case 0xE502AB6B:
					return 0x00000004;
					break;
				
				case 0x3DECC7DA:
					return 0x00000040;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x00000008;
					break;
			}
			break;
		
		case 0x0A914799:
			switch (iParam0)
			{
				case 0xFA1E1A28:
					return 0x00000010;
					break;
				
				case 0x2CD8FF9D:
					return 0x00000020;
					break;
				
				case 0xF835D6D4:
					return 0x00000100;
					break;
				
				case 0x89EBDAA7:
					return 0x00000100;
					break;
				
				case 0x3BE948F6:
					return 0x00000100;
					break;
				
				case 0x0EC0F617:
					return 0x00000100;
					break;
				
				case joaat("component_at_scope_large"):
					return 0x00000004;
					break;
				
				case joaat("component_at_scope_max"):
					return 0x00000040;
					break;
				
				case 0xB68010B0:
					return 0x00000008;
					break;
				
				case 0x2E43DA41:
					return 0x00000008;
					break;
			}
			break;
		
		case 0xDBBD7280:
			switch (iParam0)
			{
				case 0x492B257C:
					return 0x00000010;
					break;
				
				case 0x17DF42E9:
					return 0x00000020;
					break;
				
				case 0x29882423:
					return 0x00000100;
					break;
				
				case 0x57EF1CC8:
					return 0x00000100;
					break;
				
				case 0xC326BDBA:
					return 0x00000100;
					break;
				
				case 0xF6649745:
					return 0x00000100;
					break;
				
				case 0x9D65907A:
					return 0x00000080;
					break;
				
				case 0x420FD713:
					return 0x00000040;
					break;
			}
			break;
		
		case 0x394F415C:
			switch (iParam0)
			{
				case 0x8610343F:
					return 0x00000010;
					break;
				
				case 0xD12ACA6F:
					return 0x00000020;
					break;
				
				case 0xA7DD1E58:
					return 0x00000100;
					break;
				
				case 0x63E0A098:
					return 0x00000100;
					break;
				
				case 0xFB70D853:
					return 0x00000100;
					break;
				
				case 0xEF2C78C1:
					return 0x00000100;
					break;
				
				case 0x9D65907A:
					return 0x00000080;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
					break;
				
				case 0x420FD713:
					return 0x00000040;
					break;
				
				case 0x049B2945:
					return 0x00000004;
					break;
				
				case 0xC66B6542:
					return 0x00000008;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000001;
					break;
			}
			break;
		
		case 0xFAD1F1C9:
			switch (iParam0)
			{
				case 0x4C7A391E:
					return 0x00000010;
					break;
				
				case 0x5DD5DBD5:
					return 0x00000020;
					break;
				
				case 0x255D5D57:
					return 0x00000100;
					break;
				
				case 0x44032F11:
					return 0x00000100;
					break;
				
				case 0x3D25C2A7:
					return 0x00000100;
					break;
				
				case 0x1757F566:
					return 0x00000100;
					break;
				
				case 0x9D65907A:
					return 0x00000080;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000002;
					break;
				
				case 0x420FD713:
					return 0x00000040;
					break;
				
				case 0x049B2945:
					return 0x00000004;
					break;
				
				case 0xC66B6542:
					return 0x00000008;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000001;
					break;
			}
			break;
	}
	return 0x00000000;
}

bool func_53(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0x00000000;
	}
	iVar0 = func_56(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_30(iVar1));
}

int func_54(int iParam0, int iParam1)
{
	return func_55(iParam0, iParam1);
}

int func_55(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 0x00000001;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 0x00000002;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000003;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 0x00000004;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 0x000000AF;
					break;
				
				case 0x60BD749C:
					return 0x000000D3;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 0x00000005;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 0x00000006;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000007;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x00000008;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 0x000000BA;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 0x0000000B;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 0x0000000C;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x0000000D;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x0000000E;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 0x000000A4;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 0x0000000F;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 0x00000010;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000011;
					break;
				
				case joaat("component_at_scope_macro"):
					return 0x00000012;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000013;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 0x000000AE;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 0x00000016;
					break;
				
				case joaat("component_smg_clip_02"):
					return 0x00000017;
					break;
				
				case joaat("component_smg_clip_03"):
					return 0x000000CF;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000018;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 0x00000019;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x0000001A;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 0x000000B3;
					break;
				
				case 0x60BD749C:
					return 0x000000D4;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 0x0000001B;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 0x0000001C;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 0x000000C9;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x0000001D;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000001E;
					break;
				
				case joaat("component_at_scope_macro"):
					return 0x0000001F;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000020;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 0x000000A5;
					break;
				
				case 0x60BD749C:
					return 0x000000D5;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 0x00000021;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 0x00000022;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 0x000000CA;
					break;
				
				case joaat("component_at_railcover_01"):
					return 0x00000023;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000024;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000025;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x00000026;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000027;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 0x000000A8;
					break;
				
				case 0x60BD749C:
					return 0x000000D6;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 0x0000002C;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 0x0000002D;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000002F;
					break;
				
				case joaat("component_at_scope_small"):
					return 0x00000030;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000031;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 0x000000A3;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 0x00000032;
					break;
				
				case joaat("component_mg_clip_02"):
					return 0x00000033;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 0x00000034;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 0x000000BB;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 0x00000035;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 0x00000036;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000037;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x00000038;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 0x000000BC;
					break;
				
				case 0x60BD749C:
					return 0x000000D7;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 0x0000003B;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000003C;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 0x000000C1;
					break;
				
				case 0x60BD749C:
					return 0x00000185;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 0x00000040;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 0x00000041;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000042;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000043;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000044;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 0x00000045;
					break;
				
				case joaat("component_at_scope_large"):
					return 0x00000046;
					break;
				
				case joaat("component_at_scope_max"):
					return 0x00000047;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000048;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 0x000000B4;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 0x0000004C;
					break;
				
				case joaat("component_at_scope_max"):
					return 0x0000004D;
					break;
				
				case joaat("component_at_scope_large"):
					return 0x00000052;
					break;
				
				case 0x60BD749C:
					return 0x000000D8;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 0x0000004E;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000004F;
					break;
				
				case joaat("component_at_scope_small"):
					return 0x00000050;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 0x00000051;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 0x00000053;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 0x00000054;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000055;
					break;
				
				case joaat("component_at_scope_macro"):
					return 0x00000056;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000057;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 0x000000BD;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 0x00000058;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000059;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x0000005A;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 0x0000005B;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 0x0000005C;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x0000005D;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x0000005E;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 0x000000B0;
					break;
			}
			break;
		
		case 0x176898A6:
			switch (iParam0)
			{
				case 0x0BAAB157:
					return 0x0000005F;
					break;
				
				case joaat("component_at_scope_large"):
					return 0x00000060;
					break;
				
				case joaat("component_at_scope_max"):
					return 0x00000061;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000062;
					break;
			}
			break;
		
		case 0xC78D71B4:
			switch (iParam0)
			{
				case 0x5AF49386:
					return 0x00000063;
					break;
				
				case 0x6CBF371B:
					return 0x00000064;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000065;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000066;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x00000067;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000068;
					break;
			}
			break;
		
		case 0xDDE2A27C:
			switch (iParam0)
			{
				case 0xCAEBD246:
					return 0x00000069;
					break;
				
				case 0xE1C5FFFA:
					return 0x0000006A;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x0000006B;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x0000006C;
					break;
			}
			break;
		
		case 0x8F796EC9:
			switch (iParam0)
			{
				case 0xF8955D89:
					return 0x0000006D;
					break;
				
				case 0x3E7E6956:
					return 0x0000006E;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 0x0000006F;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 0x00000070;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 0x000000D0;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000071;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000072;
					break;
				
				case joaat("component_at_scope_medium"):
					return 0x00000073;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000074;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 0x000000BE;
					break;
				
				case 0x60BD749C:
					return 0x00000186;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 0x00000075;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 0x00000076;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x00000077;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x00000078;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 0x000000BF;
					break;
				
				case 0x60BD749C:
					return 0x00000187;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 0x00000079;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 0x0000007A;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x0000007B;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x0000007C;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 0x000000AB;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 0x00000083;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 0x00000084;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000007F;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000080;
					break;
				
				case joaat("component_at_scope_small"):
					return 0x00000081;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000082;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 0x000000C0;
					break;
				
				case 0x60BD749C:
					return 0x0000018A;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 0x0000007D;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 0x0000007E;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 0x00000085;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 0x00000086;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x00000088;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 0x00000089;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 0x0000008C;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 0x000000CD;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000091;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000092;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000093;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 0x0000008A;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 0x0000008B;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 0x0000008D;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000008E;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x0000008F;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000090;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 0x000000AC;
					break;
				
				case 0x60BD749C:
					return 0x00000188;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 0x00000095;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 0x00000096;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 0x000000CB;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000097;
					break;
				
				case joaat("component_at_scope_small"):
					return 0x00000098;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 0x00000099;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 0x000000B2;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 0x00000094;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 0x0000009A;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 0x0000009B;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 0x0000009C;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 0x0000009D;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 0x0000009E;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 0x0000009F;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 0x000000A0;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 0x000000A1;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 0x000000A2;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 0x000000B8;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 0x000000B9;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 0x000000CE;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x000000B7;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 0x000000C2;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 0x000000C3;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 0x000000C4;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 0x000000C5;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 0x000000C6;
					break;
				
				case 0x60BD749C:
					return 0x00000189;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 0x000000C7;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 0x000000C8;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 0x000000CC;
					break;
			}
			break;
		
		case 0xBD248B55:
			switch (iParam0)
			{
				case 0x84C8B2D3:
					return 0x000000D1;
					break;
				
				case 0x937ED0B7:
					return 0x000000D2;
					break;
			}
			break;
		
		case 0xBFE256D4:
			switch (iParam0)
			{
				case 0x94F42D62:
					return 0x000000D9;
					break;
				
				case 0x5ED6C128:
					return 0x000000DA;
					break;
				
				case 0x4F37DF2A:
					return 0x000000DB;
					break;
				
				case 0x85FEA109:
					return 0x000000DC;
					break;
				
				case 0x2BBD7A3A:
					return 0x000000DD;
					break;
				
				case 0x25CAAEAF:
					return 0x000000DE;
					break;
				
				case 0x43FD595B:
					return 0x000000DF;
					break;
				
				case 0x8ED4BB70:
					return 0x000000E0;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 0x000000E1;
					break;
				
				case 0x21E34793:
					return 0x000000E2;
					break;
				
				case 0x5C6C749C:
					return 0x0000016F;
					break;
				
				case 0x15F7A390:
					return 0x00000170;
					break;
				
				case 0x968E24DB:
					return 0x00000171;
					break;
				
				case 0x017BFA99:
					return 0x00000172;
					break;
				
				case 0xF2685C72:
					return 0x00000173;
					break;
				
				case 0xDD2231E6:
					return 0x00000174;
					break;
				
				case 0xBB43EE76:
					return 0x00000175;
					break;
				
				case 0x4D901310:
					return 0x00000176;
					break;
				
				case 0x5F31B653:
					return 0x00000177;
					break;
				
				case 0x697E19A0:
					return 0x00000178;
					break;
				
				case 0x930CB951:
					return 0x00000179;
					break;
			}
			break;
		
		case 0x78A97CD0:
			switch (iParam0)
			{
				case 0x4C24806E:
					return 0x000000E3;
					break;
				
				case 0xB9835B2E:
					return 0x000000E4;
					break;
				
				case 0x0B5A715F:
					return 0x000000E5;
					break;
				
				case 0x3A1BD6FA:
					return 0x000000E6;
					break;
				
				case 0xD99222E5:
					return 0x000000E7;
					break;
				
				case 0x7FEA36EC:
					return 0x000000E8;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x000000E9;
					break;
				
				case 0x9FDB5652:
					return 0x000000EA;
					break;
				
				case 0xE502AB6B:
					return 0x000000EB;
					break;
				
				case 0x3DECC7DA:
					return 0x000000EC;
					break;
				
				case joaat("component_at_pi_supp"):
					return 0x000000ED;
					break;
				
				case 0xB99402D4:
					return 0x000000EE;
					break;
				
				case 0xC867A07B:
					return 0x000000EF;
					break;
				
				case 0xDE11CBCF:
					return 0x000000F0;
					break;
				
				case 0xEC9068CC:
					return 0x000000F1;
					break;
				
				case 0x02E7957A:
					return 0x000000F2;
					break;
				
				case 0x347EF8AC:
					return 0x000000F3;
					break;
				
				case 0x4DB62ABE:
					return 0x000000F4;
					break;
				
				case 0xD9103EE1:
					return 0x000000F5;
					break;
				
				case 0xA564D78B:
					return 0x000000F6;
					break;
				
				case 0xC4979067:
					return 0x0000017A;
					break;
				
				case 0x3815A945:
					return 0x0000017B;
					break;
				
				case 0x4B4B4FB0:
					return 0x0000017C;
					break;
				
				case 0xEC729200:
					return 0x0000017D;
					break;
				
				case 0x48F64B22:
					return 0x0000017E;
					break;
				
				case 0x35992468:
					return 0x0000017F;
					break;
				
				case 0x24B782A5:
					return 0x00000180;
					break;
				
				case 0xA2E67F01:
					return 0x00000181;
					break;
				
				case 0x2218FD68:
					return 0x00000182;
					break;
				
				case 0x45C5C3C5:
					return 0x00000183;
					break;
				
				case 0x399D558F:
					return 0x00000184;
					break;
			}
			break;
		
		case 0x0A914799:
			switch (iParam0)
			{
				case 0xFA1E1A28:
					return 0x000000F7;
					break;
				
				case 0x2CD8FF9D:
					return 0x000000F8;
					break;
				
				case 0xF835D6D4:
					return 0x000000F9;
					break;
				
				case 0x89EBDAA7:
					return 0x000000FA;
					break;
				
				case 0x3BE948F6:
					return 0x000000FB;
					break;
				
				case 0x0EC0F617:
					return 0x000000FC;
					break;
				
				case 0x82C10383:
					return 0x000000FD;
					break;
				
				case joaat("component_at_scope_max"):
					return 0x000000FE;
					break;
				
				case 0xB68010B0:
					return 0x000000FF;
					break;
				
				case 0x2E43DA41:
					return 0x00000100;
					break;
				
				case 0xAC42DF71:
					return 0x00000101;
					break;
				
				case 0x5F7DCE4D:
					return 0x00000102;
					break;
				
				case 0x6927E1A1:
					return 0x00000103;
					break;
				
				case 0x909630B7:
					return 0x00000104;
					break;
				
				case 0x108AB09E:
					return 0x00000105;
					break;
				
				case 0xF8337D02:
					return 0x00000164;
					break;
				
				case 0xC5BEDD65:
					return 0x00000165;
					break;
				
				case 0xE9712475:
					return 0x00000166;
					break;
				
				case 0x13AA78E7:
					return 0x00000167;
					break;
				
				case 0x26591E50:
					return 0x00000168;
					break;
				
				case 0x302731EC:
					return 0x00000169;
					break;
				
				case 0xAC722A78:
					return 0x0000016A;
					break;
				
				case 0xBEA4CEDD:
					return 0x0000016B;
					break;
				
				case 0xCD776C82:
					return 0x0000016C;
					break;
				
				case 0xABC5ACC7:
					return 0x0000016D;
					break;
				
				case 0x6C32D2EB:
					return 0x0000016E;
					break;
			}
			break;
		
		case 0xDBBD7280:
			switch (iParam0)
			{
				case 0x492B257C:
					return 0x00000106;
					break;
				
				case 0x17DF42E9:
					return 0x00000107;
					break;
				
				case 0x29882423:
					return 0x00000108;
					break;
				
				case 0x57EF1CC8:
					return 0x00000109;
					break;
				
				case 0xC326BDBA:
					return 0x0000010A;
					break;
				
				case 0xF6649745:
					return 0x0000010B;
					break;
				
				case 0x9D65907A:
					return 0x0000010C;
					break;
				
				case 0x420FD713:
					return 0x0000010D;
					break;
				
				case 0x3F3C8181:
					return 0x0000010E;
					break;
				
				case 0xC66B6542:
					return 0x0000010F;
					break;
				
				case 0xB99402D4:
					return 0x00000110;
					break;
				
				case 0xC867A07B:
					return 0x00000111;
					break;
				
				case 0xDE11CBCF:
					return 0x00000112;
					break;
				
				case 0xEC9068CC:
					return 0x00000113;
					break;
				
				case 0x02E7957A:
					return 0x00000114;
					break;
				
				case 0x347EF8AC:
					return 0x00000115;
					break;
				
				case 0x4DB62ABE:
					return 0x00000116;
					break;
				
				case 0xC34EF234:
					return 0x00000117;
					break;
				
				case 0xB5E2575B:
					return 0x00000118;
					break;
				
				case 0x4A768CB5:
					return 0x00000159;
					break;
				
				case 0xCCE06BBD:
					return 0x0000015A;
					break;
				
				case 0xBE94CF26:
					return 0x0000015B;
					break;
				
				case 0x7609BE11:
					return 0x0000015C;
					break;
				
				case 0x48AF6351:
					return 0x0000015D;
					break;
				
				case 0x9186750A:
					return 0x0000015E;
					break;
				
				case 0x84555AA8:
					return 0x0000015F;
					break;
				
				case 0x1B4C088B:
					return 0x00000160;
					break;
				
				case 0x0E046DFC:
					return 0x00000161;
					break;
				
				case 0x028B536E:
					return 0x00000162;
					break;
				
				case 0xD703C94D:
					return 0x00000163;
					break;
			}
			break;
		
		case 0x394F415C:
			switch (iParam0)
			{
				case 0x8610343F:
					return 0x00000119;
					break;
				
				case 0xD12ACA6F:
					return 0x0000011A;
					break;
				
				case 0xA7DD1E58:
					return 0x0000011B;
					break;
				
				case 0x63E0A098:
					return 0x0000011C;
					break;
				
				case 0xFB70D853:
					return 0x0000011D;
					break;
				
				case 0xEF2C78C1:
					return 0x0000011E;
					break;
				
				case 0x9D65907A:
					return 0x0000011F;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000120;
					break;
				
				case 0x420FD713:
					return 0x00000121;
					break;
				
				case 0x049B2945:
					return 0x00000122;
					break;
				
				case 0xC66B6542:
					return 0x00000123;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x00000124;
					break;
				
				case 0xB99402D4:
					return 0x00000125;
					break;
				
				case 0xC867A07B:
					return 0x00000126;
					break;
				
				case 0xDE11CBCF:
					return 0x00000127;
					break;
				
				case 0xEC9068CC:
					return 0x00000128;
					break;
				
				case 0x02E7957A:
					return 0x00000129;
					break;
				
				case 0x347EF8AC:
					return 0x0000012A;
					break;
				
				case 0x4DB62ABE:
					return 0x0000012B;
					break;
				
				case 0x43A49D26:
					return 0x0000012C;
					break;
				
				case 0x5646C26A:
					return 0x0000012D;
					break;
				
				case 0x911B24AF:
					return 0x00000143;
					break;
				
				case 0x37E5444B:
					return 0x00000144;
					break;
				
				case 0x538B7B97:
					return 0x00000145;
					break;
				
				case 0x25789F72:
					return 0x00000146;
					break;
				
				case 0xC5495F2D:
					return 0x00000147;
					break;
				
				case 0xCF8B73B1:
					return 0x00000148;
					break;
				
				case 0xA9BB2811:
					return 0x00000149;
					break;
				
				case 0xFC674D54:
					return 0x0000014A;
					break;
				
				case 0x7C7FCD9B:
					return 0x0000014B;
					break;
				
				case 0xA5C38392:
					return 0x0000014C;
					break;
				
				case 0xB9B15DB0:
					return 0x0000014D;
					break;
			}
			break;
		
		case 0xFAD1F1C9:
			switch (iParam0)
			{
				case 0x4C7A391E:
					return 0x0000012E;
					break;
				
				case 0x5DD5DBD5:
					return 0x0000012F;
					break;
				
				case 0x255D5D57:
					return 0x00000130;
					break;
				
				case 0x44032F11:
					return 0x00000131;
					break;
				
				case 0x3D25C2A7:
					return 0x00000132;
					break;
				
				case 0x1757F566:
					return 0x00000133;
					break;
				
				case 0x9D65907A:
					return 0x00000134;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000135;
					break;
				
				case 0x420FD713:
					return 0x00000136;
					break;
				
				case 0x049B2945:
					return 0x00000137;
					break;
				
				case 0xC66B6542:
					return 0x00000138;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x00000139;
					break;
				
				case 0xB99402D4:
					return 0x0000013A;
					break;
				
				case 0xC867A07B:
					return 0x0000013B;
					break;
				
				case 0xDE11CBCF:
					return 0x0000013C;
					break;
				
				case 0xEC9068CC:
					return 0x0000013D;
					break;
				
				case 0x02E7957A:
					return 0x0000013E;
					break;
				
				case 0x347EF8AC:
					return 0x0000013F;
					break;
				
				case 0x4DB62ABE:
					return 0x00000140;
					break;
				
				case 0x833637FF:
					return 0x00000141;
					break;
				
				case 0x8B3C480B:
					return 0x00000142;
					break;
				
				case 0x4BDD6F16:
					return 0x0000014E;
					break;
				
				case 0x406A7908:
					return 0x0000014F;
					break;
				
				case 0x2F3856A4:
					return 0x00000150;
					break;
				
				case 0xE50C424D:
					return 0x00000151;
					break;
				
				case 0xD37D1F2F:
					return 0x00000152;
					break;
				
				case 0x86268483:
					return 0x00000153;
					break;
				
				case 0xF420E076:
					return 0x00000154;
					break;
				
				case 0xAAE14DF8:
					return 0x00000155;
					break;
				
				case 0x9893A95D:
					return 0x00000156;
					break;
				
				case 0x6B13CD3E:
					return 0x00000157;
					break;
				
				case 0xDA55CD3F:
					return 0x00000158;
					break;
			}
			break;
		
		case 0x555AF99A:
			switch (iParam0)
			{
				case 0xCD940141:
					return 0x0000018B;
					break;
				
				case 0x4E65B425:
					return 0x0000018C;
					break;
				
				case 0x3BE4465D:
					return 0x0000018D;
					break;
				
				case 0xE9582927:
					return 0x0000018E;
					break;
				
				case 0x9F8A1BF5:
					return 0x0000018F;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x00000190;
					break;
				
				case 0x420FD713:
					return 0x00000191;
					break;
				
				case 0x049B2945:
					return 0x00000192;
					break;
				
				case 0x3F3C8181:
					return 0x00000193;
					break;
				
				case 0xAC42DF71:
					return 0x00000194;
					break;
				
				case 0x5F7DCE4D:
					return 0x00000195;
					break;
				
				case 0xE3BD9E44:
					return 0x000001E8;
					break;
				
				case 0x17148F9B:
					return 0x000001E9;
					break;
				
				case 0x24D22B16:
					return 0x000001EA;
					break;
				
				case 0xF2BEC6F0:
					return 0x000001EB;
					break;
				
				case 0x0085627D:
					return 0x000001EC;
					break;
				
				case 0xDC2919C5:
					return 0x000001ED;
					break;
				
				case 0xE184247B:
					return 0x000001EE;
					break;
				
				case 0xD8EF9356:
					return 0x000001EF;
					break;
				
				case 0xEF29BFCA:
					return 0x000001F0;
					break;
				
				case 0x67AEB165:
					return 0x000001F1;
					break;
				
				case 0x46411A1D:
					return 0x000001F2;
					break;
			}
			break;
		
		case 0x969C3D67:
			switch (iParam0)
			{
				case 0x16C69281:
					return 0x00000196;
					break;
				
				case 0xDE1FA12C:
					return 0x00000197;
					break;
				
				case 0x51351635:
					return 0x00000198;
					break;
				
				case 0x503DEA90:
					return 0x00000199;
					break;
				
				case 0xDE011286:
					return 0x0000019A;
					break;
				
				case 0x8765C68A:
					return 0x0000019B;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x0000019C;
					break;
				
				case 0x420FD713:
					return 0x0000019D;
					break;
				
				case 0x049B2945:
					return 0x0000019E;
					break;
				
				case 0xC66B6542:
					return 0x0000019F;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 0x000001A0;
					break;
				
				case 0xB99402D4:
					return 0x000001A1;
					break;
				
				case 0xC867A07B:
					return 0x000001A2;
					break;
				
				case 0xDE11CBCF:
					return 0x000001A3;
					break;
				
				case 0xEC9068CC:
					return 0x000001A4;
					break;
				
				case 0x02E7957A:
					return 0x000001A5;
					break;
				
				case 0x347EF8AC:
					return 0x000001A6;
					break;
				
				case 0x4DB62ABE:
					return 0x000001A7;
					break;
				
				case 0x9D65907A:
					return 0x000001A8;
					break;
				
				case 0xE73653A9:
					return 0x000001A9;
					break;
				
				case 0xF97F783B:
					return 0x000001AA;
					break;
				
				case 0xD40BB53B:
					return 0x00000214;
					break;
				
				case 0x431B238B:
					return 0x00000215;
					break;
				
				case 0x34CF86F4:
					return 0x00000216;
					break;
				
				case 0xB4C306DD:
					return 0x00000217;
					break;
				
				case 0xEE677A25:
					return 0x00000218;
					break;
				
				case 0xDF90DC78:
					return 0x00000219;
					break;
				
				case 0x0A4C31EE:
					return 0x0000021A;
					break;
				
				case 0x89CFB0F7:
					return 0x0000021B;
					break;
				
				case 0x7B82145C:
					return 0x0000021C;
					break;
				
				case 0x899CAF75:
					return 0x0000021D;
					break;
				
				case 0x5218C819:
					return 0x0000021E;
					break;
			}
			break;
		
		case 0x88374054:
			switch (iParam0)
			{
				case 0x01466CE6:
					return 0x000001AB;
					break;
				
				case 0xCE8C0772:
					return 0x000001AC;
					break;
				
				case 0xC111EB26:
					return 0x000001AD;
					break;
				
				case 0x8D107402:
					return 0x000001AE;
					break;
				
				case 0xE6AD5F79:
					return 0x000001AF;
					break;
				
				case 0x902DA26E:
					return 0x000001B0;
					break;
				
				case 0x4A4965F3:
					return 0x000001B1;
					break;
				
				case 0x47DE9258:
					return 0x000001B2;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 0x000001B3;
					break;
				
				case 0xAA8283BF:
					return 0x000001B4;
					break;
				
				case 0x0F7BEEDD:
					return 0x000001FE;
					break;
				
				case 0x8A612EF6:
					return 0x000001FF;
					break;
				
				case 0x76FA8829:
					return 0x00000200;
					break;
				
				case 0xA93C6CAC:
					return 0x00000201;
					break;
				
				case 0x9C905354:
					return 0x00000202;
					break;
				
				case 0x4DFA3621:
					return 0x00000203;
					break;
				
				case 0x42E91FFF:
					return 0x00000204;
					break;
				
				case 0x54A8437D:
					return 0x00000205;
					break;
				
				case 0x068C2746:
					return 0x00000206;
					break;
				
				case 0x2366E467:
					return 0x00000207;
					break;
				
				case 0x441882E6:
					return 0x00000208;
					break;
			}
			break;
		
		case 0x6A6C02E0:
			switch (iParam0)
			{
				case 0x94E12DCE:
					return 0x000001B5;
					break;
				
				case 0xE6CFD1AA:
					return 0x000001B6;
					break;
				
				case 0xF46FD079:
					return 0x000001B7;
					break;
				
				case 0xE14A9ED3:
					return 0x000001B8;
					break;
				
				case 0x6DD7A86E:
					return 0x000001B9;
					break;
				
				case 0xD77A22D2:
					return 0x000001BA;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x000001BB;
					break;
				
				case 0x420FD713:
					return 0x000001BC;
					break;
				
				case 0xC66B6542:
					return 0x000001BD;
					break;
				
				case 0x5B1C713C:
					return 0x000001BE;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x000001BF;
					break;
				
				case 0xB99402D4:
					return 0x000001C0;
					break;
				
				case 0xC867A07B:
					return 0x000001C1;
					break;
				
				case 0xDE11CBCF:
					return 0x000001C2;
					break;
				
				case 0xEC9068CC:
					return 0x000001C3;
					break;
				
				case 0x02E7957A:
					return 0x000001C4;
					break;
				
				case 0x347EF8AC:
					return 0x000001C5;
					break;
				
				case 0x4DB62ABE:
					return 0x000001C6;
					break;
				
				case 0x9D65907A:
					return 0x000001C7;
					break;
				
				case 0x381B5D89:
					return 0x000001C8;
					break;
				
				case 0x68373DDC:
					return 0x000001C9;
					break;
				
				case 0x9094FBA0:
					return 0x00000209;
					break;
				
				case 0x7320F4B2:
					return 0x0000020A;
					break;
				
				case 0x60CF500F:
					return 0x0000020B;
					break;
				
				case 0xFE668B3F:
					return 0x0000020C;
					break;
				
				case 0xF3757559:
					return 0x0000020D;
					break;
				
				case 0x193B40E8:
					return 0x0000020E;
					break;
				
				case 0x107D2F6C:
					return 0x0000020F;
					break;
				
				case 0xC4E91841:
					return 0x00000210;
					break;
				
				case 0x9BB1C5D3:
					return 0x00000211;
					break;
				
				case 0x3B61040B:
					return 0x00000212;
					break;
				
				case 0xB7A316DA:
					return 0x00000213;
					break;
			}
			break;
		
		case 0xCB96392F:
			switch (iParam0)
			{
				case 0xBA23D8BE:
					return 0x000001CA;
					break;
				
				case 0x0DC8BA3F:
					return 0x000001CB;
					break;
				
				case 0x10F42E8F:
					return 0x000001CC;
					break;
				
				case 0x00EFBF25:
					return 0x000001CD;
					break;
				
				case 0xC6D8E476:
					return 0x000001CE;
					break;
				
				case 0x420FD713:
					return 0x000001CF;
					break;
				
				case 0x049B2945:
					return 0x000001D0;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 0x000001D1;
					break;
				
				case 0x27077CCB:
					return 0x000001D2;
					break;
				
				case 0xC03FED9F:
					return 0x000001F3;
					break;
				
				case 0x00B5DE24:
					return 0x000001F4;
					break;
				
				case 0x0A7FF1B8:
					return 0x000001F5;
					break;
				
				case 0xF2E24289:
					return 0x000001F6;
					break;
				
				case 0x11317F27:
					return 0x000001F7;
					break;
				
				case 0x17C30C42:
					return 0x000001F8;
					break;
				
				case 0x257927AE:
					return 0x000001F9;
					break;
				
				case 0x37304B1C:
					return 0x000001FA;
					break;
				
				case 0x48DAEE71:
					return 0x000001FB;
					break;
				
				case 0x20ED9B5B:
					return 0x000001FC;
					break;
				
				case 0xD951E867:
					return 0x000001FD;
					break;
			}
			break;
		
		case 0x84D6FAFD:
			switch (iParam0)
			{
				case 0x018929DA:
					return 0x000001D3;
					break;
				
				case 0xEFB00628:
					return 0x000001D4;
					break;
				
				case 0xFAA7F5ED:
					return 0x000001D5;
					break;
				
				case 0x43621710:
					return 0x000001D6;
					break;
				
				case 0xA99CF95A:
					return 0x000001D7;
					break;
				
				case 0x822060A9:
					return 0x000001D8;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 0x000001D9;
					break;
				
				case 0x420FD713:
					return 0x000001DA;
					break;
				
				case 0xC7ADD105:
					return 0x000001DB;
					break;
				
				case 0x3F3C8181:
					return 0x000001DC;
					break;
				
				case 0x659AC11B:
					return 0x000001DD;
					break;
				
				case 0x3BF26DC7:
					return 0x000001DE;
					break;
				
				case joaat("component_at_ar_supp"):
					return 0x000001DF;
					break;
				
				case 0xB99402D4:
					return 0x000001E0;
					break;
				
				case 0xC867A07B:
					return 0x000001E1;
					break;
				
				case 0xDE11CBCF:
					return 0x000001E2;
					break;
				
				case 0xEC9068CC:
					return 0x000001E3;
					break;
				
				case 0x02E7957A:
					return 0x000001E4;
					break;
				
				case 0x347EF8AC:
					return 0x000001E5;
					break;
				
				case 0x4DB62ABE:
					return 0x000001E6;
					break;
				
				case 0x9D65907A:
					return 0x000001E7;
					break;
				
				case 0xAE4055B7:
					return 0x0000021F;
					break;
				
				case 0xB905ED6B:
					return 0x00000220;
					break;
				
				case 0xA6C448E8:
					return 0x00000221;
					break;
				
				case 0x9486246C:
					return 0x00000222;
					break;
				
				case 0x8A390FD2:
					return 0x00000223;
					break;
				
				case 0x02337FC5:
					return 0x00000224;
					break;
				
				case 0xEFFFDB5E:
					return 0x00000225;
					break;
				
				case 0xDDBDB6DA:
					return 0x00000226;
					break;
				
				case 0xCB631225:
					return 0x00000227;
					break;
				
				case 0xA87D541E:
					return 0x00000228;
					break;
				
				case 0xC5E9AE52:
					return 0x00000229;
					break;
			}
			break;
		
		case 0xAF3696A1:
			switch (iParam0)
			{
				case 0xD7DBF707:
					return 0x0000022A;
					break;
			}
			break;
		
		case 0x2B5EF5EC:
			switch (iParam0)
			{
				case 0x54D41361:
					return 0x0000022B;
					break;
				
				case 0x81786CA9:
					return 0x0000022C;
					break;
				
				case 0x9307D6FA:
					return 0x0000022D;
					break;
			}
			break;
	}
	return 0x00000000;
}

var func_56(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_57(iParam0, iParam1), iParam2, 0x00000000);
	return uVar0;
}

int func_57(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0x00000000 || func_37() == 0x00000000) || (func_159() == 0x000003E7 && func_37() == 0x000003E7))
	{
		switch (iVar1)
		{
			case 0x00000000:
				return 0x000002A9;
				break;
			
			case 0x00000001:
				return 0x000002AA;
				break;
			
			case 0x00000002:
				return 0x000002AB;
				break;
			
			case 0x00000003:
				return 0x000002AC;
				break;
			
			case 0x00000004:
				return 0x000006D6;
				break;
			
			case 0x00000005:
				return 0x00000980;
				break;
			
			case 0x00000006:
				return 0x00000B08;
				break;
			
			case 0x00000007:
				return 0x0000157A;
				break;
			
			case 0x00000008:
				return 0x0000157E;
				break;
			
			case 0x00000009:
				return 0x00001582;
			
			case 0x0000000A:
				return 0x000015F3;
			
			case 0x0000000B:
				return 0x000015F7;
				break;
			
			case 0x0000000C:
				return 0x000015FB;
				break;
			
			case 0x0000000D:
				return 0x000015FF;
				break;
			
			case 0x0000000E:
				return 0x000018E2;
				break;
			
			case 0x0000000F:
				return 0x0000195D;
				break;
			
			case 0x00000010:
				return 0x00001971;
				break;
			
			case 0x00000011:
				return 0x00001977;
				break;
		}
	}
	return 0x000006D6;
}

char* func_58(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var3;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0x00000000:
			return "WCT_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 0x0BAAB157:
			return "WCT_CLIP1";
			break;
		
		case 0x5AF49386:
			return "WCT_CLIP1";
			break;
		
		case 0x6CBF371B:
			return "WCT_CLIP2";
			break;
		
		case 0xCAEBD246:
			return "WCT_CLIP1";
			break;
		
		case 0xE1C5FFFA:
			return "WCT_CLIP2";
			break;
		
		case 0xF8955D89:
			return "WCT_CLIP1";
			break;
		
		case 0x3E7E6956:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case 0x60BD749C:
			return "WCT_VAR_GUN";
			break;
		
		case 0xB7A316DA:
			return "WCT_CAMO_IND";
			break;
		
		case 0x441882E6:
			return "WCT_CAMO_IND";
			break;
		
		case 0xCE8C0772:
			return "WCT_CLIP2";
			break;
		
		case 0xC7ADD105:
			return "WCT_SCOPE_MAC2";
			break;
		
		case 0x3F3C8181:
			return "WCT_SCOPE_SML2";
			break;
		
		case 0xD7DBF707:
			return "WCT_VAR_RAY18";
			break;
		
		case 0x54D41361:
			return "WCT_CLIP1";
			break;
		
		case 0x81786CA9:
			return "WCT_CLIP2";
			break;
		
		case 0x9307D6FA:
			return "WCT_SUPP";
			break;
		
		default:
			if (iParam1 != 0x00000000)
			{
				iVar0 = func_28(iParam1, &uVar2);
				if (iVar0 != 0xFFFFFFFF)
				{
					iVar1 = 0x00000000;
					while (iVar1 < unk_0xA942498EEAA3EEAD(iVar0))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_27(&(Var3.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

void func_59(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_64(iParam0, iParam1, 0xFFFFFFFF))
		{
			func_60(iParam0, iParam1, 0x00000001);
		}
	}
	else if (func_64(iParam0, iParam1, 0xFFFFFFFF))
	{
		func_60(iParam0, iParam1, 0x00000000);
	}
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_63(iParam0, iParam1, 0xFFFFFFFF);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > 0xFFFFFFFF)
	{
		if (bParam2)
		{
			unk_0x5D96D8530B3D0904(&iVar0, func_30(iVar1));
		}
		else
		{
			unk_0x0674E58A79778E99(&iVar0, func_30(iVar1));
		}
		func_61(func_62(iParam0, iParam1), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
	}
}

void func_61(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0x00000000 || func_37() == 0x00000000) || (func_159() == 0x000003E7 && func_37() == 0x000003E7))
	{
		switch (iVar1)
		{
			case 0x00000000:
				return 0x000002AF;
				break;
			
			case 0x00000001:
				return 0x000002B0;
				break;
			
			case 0x00000002:
				return 0x000002B1;
				break;
			
			case 0x00000003:
				return 0x000002B2;
				break;
			
			case 0x00000004:
				return 0x000006D9;
				break;
			
			case 0x00000005:
				return 0x00000983;
				break;
			
			case 0x00000006:
				return 0x00000B0B;
				break;
			
			case 0x00000007:
				return 0x0000157D;
				break;
			
			case 0x00000008:
				return 0x00001581;
				break;
			
			case 0x00000009:
				return 0x00001585;
				break;
			
			case 0x0000000A:
				return 0x000015F6;
				break;
			
			case 0x0000000B:
				return 0x000015FA;
				break;
			
			case 0x0000000C:
				return 0x000015FE;
				break;
			
			case 0x0000000D:
				return 0x00001602;
				break;
			
			case 0x0000000E:
				return 0x000018E5;
				break;
			
			case 0x0000000F:
				return 0x00001960;
				break;
			
			case 0x00000010:
				return 0x00001974;
				break;
			
			case 0x00000011:
				return 0x0000197A;
				break;
		}
	}
	return 0x000006D9;
}

var func_63(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_62(iParam0, iParam1), iParam2, 0x00000000);
	return uVar0;
}

bool func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0x00000000;
	}
	iVar0 = func_63(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_30(iVar1));
}

void func_65(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_94(iParam0, iParam1, 0xFFFFFFFF))
		{
			func_66(iParam0, iParam1, 0x00000001);
		}
	}
	else if (func_94(iParam0, iParam1, 0xFFFFFFFF))
	{
		func_66(iParam0, iParam1, 0x00000000);
	}
}

void func_66(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_68(iParam0, iParam1, 0xFFFFFFFF);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > 0xFFFFFFFF)
	{
		if (bParam2)
		{
			unk_0x5D96D8530B3D0904(&iVar0, func_30(iVar1));
		}
		else
		{
			unk_0x0674E58A79778E99(&iVar0, func_30(iVar1));
		}
		func_61(func_67(iParam0, iParam1), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
	}
}

int func_67(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0x00000000 || func_37() == 0x00000000) || (func_159() == 0x000003E7 && func_37() == 0x000003E7))
	{
		switch (iVar1)
		{
			case 0x00000000:
				return 0x0000032A;
				break;
			
			case 0x00000001:
				return 0x0000032B;
				break;
			
			case 0x00000002:
				return 0x0000032C;
				break;
			
			case 0x00000003:
				return 0x0000032D;
				break;
			
			case 0x00000004:
				return 0x000006D7;
				break;
			
			case 0x00000005:
				return 0x00000981;
				break;
			
			case 0x00000006:
				return 0x00000B09;
				break;
			
			case 0x00000007:
				return 0x0000157B;
				break;
			
			case 0x00000008:
				return 0x0000157F;
				break;
			
			case 0x00000009:
				return 0x00001583;
				break;
			
			case 0x0000000A:
				return 0x000015F4;
				break;
			
			case 0x0000000B:
				return 0x000015F8;
				break;
			
			case 0x0000000C:
				return 0x000015FC;
				break;
			
			case 0x0000000D:
				return 0x00001600;
				break;
			
			case 0x0000000E:
				return 0x000018E3;
				break;
			
			case 0x0000000F:
				return 0x0000195E;
				break;
			
			case 0x00000010:
				return 0x00001972;
				break;
			
			case 0x00000011:
				return 0x00001978;
				break;
			}
	}
	return 0x00002CF7;
}

var func_68(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_67(iParam0, iParam1), iParam2, 0x00000000);
	return uVar0;
}

void func_69(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_53(iParam0, iParam1, 0xFFFFFFFF))
		{
			func_84(iParam0, iParam1, 0x00000001);
		}
		if (bParam3)
		{
			if (func_82(iParam0, iParam1) == 0x00000000)
			{
				func_77(0x00000010, func_58(iParam0, 0x00000000), func_81(iParam0, 0x00000000), func_80(iParam1), func_79(iParam1), 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000);
				func_75(iParam0, iParam1, 0x00000001);
			}
		}
		if (bParam4)
		{
			func_70(iParam0, iParam1, 0x00000001);
		}
	}
	else if (func_53(iParam0, iParam1, 0xFFFFFFFF))
	{
		func_84(iParam0, iParam1, 0x00000000);
	}
}

void func_70(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_74(iParam0, iParam1, 0xFFFFFFFF))
		{
			func_71(iParam0, iParam1, 0x00000001);
		}
	}
	else if (func_74(iParam0, iParam1, 0xFFFFFFFF))
	{
		func_71(iParam0, iParam1, 0x00000000);
	}
}

void func_71(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_73(iParam0, iParam1, 0xFFFFFFFF);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > 0xFFFFFFFF)
	{
		if (bParam2)
		{
			unk_0x5D96D8530B3D0904(&iVar0, func_30(iVar1));
		}
		else
		{
			unk_0x0674E58A79778E99(&iVar0, func_30(iVar1));
		}
		func_61(func_72(iParam0, iParam1), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
	}
}

int func_72(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_54(iParam0, iParam1);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0x00000000 || func_37() == 0x00000000) || (func_159() == 0x000003E7 && func_37() == 0x000003E7))
	{
		switch (iVar1)
		{
			case 0x00000000:
				return 0x0000028E;
				break;
			
			case 0x00000001:
				return 0x0000028F;
				break;
			
			case 0x00000002:
				return 0x00000290;
				break;
			
			case 0x00000003:
				return 0x00000291;
				break;
			
			case 0x00000004:
				return 0x000006D8;
				break;
			
			case 0x00000005:
				return 0x00000982;
				break;
			
			case 0x00000006:
				return 0x00000B0A;
				break;
			
			case 0x00000007:
				return 0x0000157C;
				break;
			
			case 0x00000008:
				return 0x00001580;
				break;
			
			case 0x00000009:
				return 0x00001584;
				break;
			
			case 0x0000000A:
				return 0x000015F5;
				break;
			
			case 0x0000000B:
				return 0x000015F9;
				break;
			
			case 0x0000000C:
				return 0x000015FD;
				break;
			
			case 0x0000000D:
				return 0x00001601;
				break;
			
			case 0x0000000E:
				return 0x000018E4;
				break;
			
			case 0x0000000F:
				return 0x0000195F;
				break;
			
			case 0x00000010:
				return 0x00001973;
				break;
			
			case 0x00000011:
				return 0x00001979;
				break;
		}
	}
	return 0x00002CF7;
}

var func_73(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_34(func_72(iParam0, iParam1), iParam2, 0x00000000);
	return uVar0;
}

bool func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0x00000000;
	}
	iVar0 = func_73(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_30(iVar1));
}

void func_75(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_54(iParam0, iParam1);
	if (iVar0 > 0xFFFFFFFF)
	{
		if (bParam2)
		{
			unk_0x5D96D8530B3D0904(&(Global_26DD74.f_3DF[func_76(iParam0, iParam1)]), func_30(iVar0));
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_26DD74.f_3DF[func_76(iParam0, iParam1)]), func_30(iVar0));
		}
	}
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_54(iParam0, iParam1);
	switch (func_38(iVar0))
	{
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
		
		case 0x00000004:
			return 0x00000004;
		
		case 0x00000005:
			return 0x00000005;
		
		case 0x00000006:
			return 0x00000006;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000009;
		
		case 0x0000000A:
			return 0x0000000A;
		
		case 0x0000000B:
			return 0x0000000B;
			break;
		
		case 0x0000000C:
			return 0x0000000C;
			break;
		
		case 0x0000000D:
			return 0x0000000D;
			break;
		
		case 0x0000000E:
			return 0x0000000E;
			break;
	}
	return 0x00000000;
}

void func_77(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_78(&Global_152245);
	Global_152245[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_152245[iVar0 /*106*/].f_11), sParam3, 64);
	StringCopy(&(Global_152245[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_152245[iVar0 /*106*/].f_21), sParam1, 64);
	StringCopy(&(Global_152245[iVar0 /*106*/].f_31), sParam2, 64);
	Global_152245[iVar0 /*106*/].f_61 = iParam5;
	Global_152245[iVar0 /*106*/].f_68 = iParam9;
	Global_152245[iVar0 /*106*/].f_69 = iParam10;
	if (iParam6 != 0x00000000)
	{
	}
	if (iParam7 != 0x00000000)
	{
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		StringCopy(&(Global_152245[iVar0 /*106*/].f_62), sParam8, 24);
	}
}

int func_78(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0x00000000)
		{
			iVar0 = iVar1;
			iVar1 = 0x0000000A;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_79(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("weapon_stungun"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_pistol"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_appistol"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("gadget_parachute"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_smg"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_specialcarbine"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_snspistol"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_grenade"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_stickybomb"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_combatmg"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_rpg"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_heavysniper"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "MPWeaponsGang0_small";
			break;
		
		case joaat("weapon_microsmg"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_mg"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_minigun"):
			return "MPWeaponsGang1_small";
			break;
		
		case joaat("weapon_combatpistol"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "MPWeaponsCommon_small";
			break;
		
		case 0x1F75106C:
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "MPWeaponsCommon_small";
			break;
		
		case joaat("weapon_molotov"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("weapon_petrolcan"):
			return "MPWeaponsUnusedForNow";
			break;
	}
	return "";
}

char* func_80(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			return "W_ME_KNIFE_01";
			break;
		
		case joaat("weapon_stungun"):
			return "W_PI_Stungun";
			break;
		
		case joaat("weapon_pistol"):
			return "W_PI_Pistol";
			break;
		
		case joaat("gadget_parachute"):
			return "Parachute_Main";
			break;
		
		case joaat("weapon_smg"):
			return "W_SB_SMG";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "W_SR_SniperRifle";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "W_AR_CarbineRifle";
			break;
		
		case joaat("weapon_specialcarbine"):
			return "W_AR_DLC_SpecialCarbine";
			break;
		
		case joaat("weapon_snspistol"):
			return "W_AR_DLC_SNSPISTOL";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "W_SG_PumpShotgun";
			break;
		
		case joaat("weapon_grenade"):
			return "W_Ex_GrenadeFrag";
			break;
		
		case joaat("weapon_stickybomb"):
			return "W_Ex_PE";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "W_R_GrenadeLauncher";
			break;
		
		case joaat("weapon_combatmg"):
			return "W_MG_CombatMG";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "W_SG_AssaultShotgun";
			break;
		
		case joaat("weapon_appistol"):
			return "W_PI_AppPistol";
			break;
		
		case joaat("weapon_rpg"):
			return "W_LR_RPG";
			break;
		
		case joaat("weapon_heavysniper"):
			return "W_SR_HeavySniper";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "W_AR_AdvancedRifle";
			break;
		
		case joaat("weapon_microsmg"):
			return "W_SB_MicroSMG";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "W_AR_AssaultRifle";
			break;
		
		case joaat("weapon_mg"):
			return "W_MG_MG";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "W_SG_SAWNOFF";
			break;
		
		case joaat("weapon_minigun"):
			return "W_MG_Minigun";
			break;
		
		case joaat("weapon_combatpistol"):
			return "W_PI_CombatPistol";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "W_Ex_GrenadeSmoke";
			break;
		
		case joaat("weapon_petrolcan"):
			return "W_AM_Jerrycan";
			break;
		
		case joaat("weapon_molotov"):
			return "W_EX_Molotov";
			break;
		
		case 0x1F75106C:
			return "rocket";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "rocket";
			break;
	}
	return "";
}

char* func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<15> Var3;
	
	switch (iParam0)
	{
		case 0x00000000:
			return "WCD_NONE";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCD_AT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCD_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCD_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCD_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCD_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCD_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCD_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCD_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCD_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCD_PI_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCD_AR_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCD_AR_SUPP2";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCD_SR_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCD_P_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCD_P_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCD_CP_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCD_CP_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCD_AP_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCD_AP_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCDMSMG_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCDMSMG_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCD_SMG_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCD_SMG_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCD_AR_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCD_AR_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCD_CR_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCD_CR_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCD_ADR_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCD_ADR_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCD_MG_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCD_MG_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCDCMG_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCDCMG_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCD_AS_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCD_AS_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCD_SR_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCD_HS_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCD_MIG_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCD_ASMG_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCD_ASMG_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCD_P50_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCD_P50_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCD_VAR_AR";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCD_VAR_ADR";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCD_VAR_CR";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCD_VAR_AP";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCD_VAR_P";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCD_VAR_P50";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCD_VAR_HPST";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCD_VAR_SMG";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCD_VAR_MSMG";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCD_VAR_SOF";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCD_VAR_SNP";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCD_VAR_MKRF";
			break;
		
		case joaat("component_knuckle_varmod_pimp"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_ballas"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_dollar"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_diamond"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_hate"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_love"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_player"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_king"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_knuckle_varmod_vagos"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCD_VAR_ASMG";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCD_VAR_BPR";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCD_VAR_CBMG";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCD_VAR_CBP";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCD_VAR_MG";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCD_VAR_PSHT";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCD_VAR_SNS";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCD_VAR_SCAR";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCD_VAR_DESC";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCD_P_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCD_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCD_REV_VARG";
			break;
		
		case joaat("component_smg_clip_03"):
			return "WCD_CLIP3";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCD_CLIP3";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCD_CLIP3";
			break;
		
		case 0x60BD749C:
			return "WCD_VAR_GUN";
			break;
		
		case 0xCE8C0772:
			return "WCD_CLIP2";
			break;
		
		case 0xC7ADD105:
			return "WCD_SCOPE_MAC";
			break;
		
		case 0x3F3C8181:
			return "WCD_SCOPE_SML";
			break;
		
		case 0xD7DBF707:
			return "WCD_VAR_RAY18";
			break;
		
		case 0x81786CA9:
			return "WCD_CLIP2";
			break;
		
		case 0x9307D6FA:
			return "WCD_PI_SUPP";
			break;
		
		default:
			if (iParam1 != 0x00000000)
			{
				iVar0 = func_28(iParam1, &uVar2);
				if (iVar0 != 0xFFFFFFFF)
				{
					iVar1 = 0x00000000;
					while (iVar1 < unk_0xA942498EEAA3EEAD(iVar0))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return func_27(&(Var3.f_E));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCD_INVALID";
}

bool func_82(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_83(iParam0, iParam1);
	iVar1 = func_54(iParam0, iParam1);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_30(iVar1));
}

var func_83(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_26DD74.f_3DF[func_76(iParam0, iParam1)];
	return uVar0;
}

void func_84(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_56(iParam0, iParam1, 0xFFFFFFFF);
	iVar1 = func_54(iParam0, iParam1);
	if (iVar1 > 0xFFFFFFFF)
	{
		if (bParam2)
		{
			unk_0x5D96D8530B3D0904(&iVar0, func_30(iVar1));
		}
		else
		{
			unk_0x0674E58A79778E99(&iVar0, func_30(iVar1));
		}
		func_61(func_57(iParam0, iParam1), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
	}
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000009:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case 0xBD248B55:
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x84C8B2D3;
					break;
				
				case 0x00000001:
					iVar0 = 0x937ED0B7;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0x00000000)
			{
				iVar1 = func_28(iParam0, &uVar4);
				if (iVar1 != 0xFFFFFFFF)
				{
					iVar2 = 0x00000000;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var5))
						{
							if (!func_86(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0xB4FC92B0:
		case 0x1A1F1260:
		case 0xE4E00B70:
		case 0x2C298B2B:
		case 0xDFB79725:
		case 0x6BD7228C:
		case 0x9DDBCF8C:
		case 0xB319A52C:
		case 0xC6836E12:
		case 0x43B1B173:
		case 0x4ABDA3FA:
		case 0xE7EE68EA:
		case 0x29366D21:
		case 0x3ADE514B:
		case 0xE64513E9:
		case 0xCD7AEB9A:
		case 0xFA7B27A6:
		case 0xE285CA9A:
		case 0x2B904B19:
		case 0x22C24F9C:
		case 0x8D0D5ECD:
		case 0x1F07150A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

bool func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0x00000000)
	{
	}
	if (func_41())
	{
		return 0x00000000;
	}
	iVar0 = func_88(iParam0, iParam1);
	iVar1 = func_31(iParam0);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_30(iVar1));
}

var func_88(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_34(func_89(iParam0), iParam1, 0x00000000);
	return uVar0;
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0x00000000 || func_37() == 0x00000000) || (func_159() == 0x000003E7 && func_37() == 0x000003E7))
	{
		switch (iVar1)
		{
			case 0x00000000:
				return 0x000002A7;
				break;
			
			case 0x00000001:
				return 0x000002A8;
				break;
			
			case 0x00000002:
				return 0x0000097B;
				break;
		}
	}
	return 0x00002CF7;
}

bool func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 0x00000000)
	{
	}
	if (func_41())
	{
		return 0x00000000;
	}
	if (func_42() == 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 != joaat("gadget_parachute") && iParam0 != joaat("weapon_railgun"))
	{
		if (func_39(func_93(iParam0), 0xFFFFFFFF))
		{
			return 0x00000000;
		}
	}
	iVar0 = func_91(iParam0, iParam1);
	iVar1 = func_31(iParam0);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_30(iVar1));
}

var func_91(int iParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_34(func_92(iParam0), uParam1, 0x00000000);
	return uVar0;
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_31(iParam0);
	iVar1 = func_38(iVar0);
	if ((func_159() == 0x00000000 || func_37() == 0x00000000) || (func_159() == 0x000003E7 && func_37() == 0x000003E7))
	{
		switch (iVar1)
		{
			case 0x00000000:
				return 0x0000031F;
				break;
			
			case 0x00000001:
				return 0x00000320;
				break;
			
			case 0x00000002:
				return 0x00000972;
				break;
			}
	}
	return 0x00002CF7;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0x00000012;
			break;
		
		case joaat("weapon_grenade"):
			return 0x00000042;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 0x00000044;
			break;
		
		case joaat("weapon_stickybomb"):
			return 0x00000046;
			break;
		
		case joaat("weapon_molotov"):
			return 0x00000048;
			break;
		
		case joaat("weapon_pistol"):
			return 0x00000012;
			break;
		
		case joaat("weapon_combatpistol"):
			return 0x00000028;
			break;
		
		case joaat("weapon_pistol50"):
			return 0x00000016;
			break;
		
		case joaat("weapon_appistol"):
			return 0x00000018;
			break;
		
		case joaat("weapon_microsmg"):
			return 0x0000001A;
			break;
		
		case joaat("weapon_smg"):
			return 0x0000001C;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 0x0000001E;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 0x00000020;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 0x00000022;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 0x00000024;
			break;
		
		case joaat("weapon_mg"):
			return 0x00000026;
			break;
		
		case 0xDDE2A27C:
			return 0x0000002A;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 0x0000002C;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 0x0000002E;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 0x00000030;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 0x00000032;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 0x00000036;
			break;
		
		case joaat("weapon_heavysniper"):
			return 0x00000038;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 0x0000003C;
			break;
		
		case joaat("weapon_rpg"):
			return 0x0000003E;
			break;
		
		case joaat("weapon_minigun"):
			return 0x00000040;
			break;
		
		case joaat("weapon_stungun"):
			return 0x00000034;
			break;
		
		case joaat("weapon_petrolcan"):
			return 0x0000004B;
			break;
		
		case joaat("weapon_knife"):
			return 0x00000002;
			break;
		
		case joaat("weapon_nightstick"):
			return 0x00000004;
			break;
		
		case joaat("weapon_hammer"):
			return 0x0000000C;
			break;
		
		case joaat("weapon_bat"):
			return 0x0000000E;
			break;
		
		case joaat("weapon_crowbar"):
			return 0x00000006;
			break;
		
		case joaat("weapon_golfclub"):
			return 0x00000010;
			break;
		
		case 0x176898A6:
			return 0x0000003A;
			break;
		
		case joaat("weapon_combatmg"):
			return 0x00000028;
			break;
		
		case joaat("weapon_bottle"):
			return 0x0000008F;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 0x0000011B;
			break;
		
		case joaat("weapon_snspistol"):
			return 0x00000091;
			break;
		
		case joaat("weapon_heavypistol"):
			return 0x00000119;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 0x0000011D;
			break;
		
		case joaat("weapon_gusenberg"):
			return 0x0000011F;
			break;
		
		case joaat("weapon_dagger"):
			return 0x00000134;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 0x00000136;
			break;
		
		case joaat("weapon_firework"):
			return 0x00000138;
			break;
		
		case joaat("weapon_musket"):
			return 0x0000013A;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 0x00000146;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 0x00000148;
			break;
		
		case joaat("weapon_proxmine"):
			return 0x0000014C;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 0x0000014E;
			break;
		
		case joaat("weapon_combatpdw"):
			return 0x00000150;
			break;
		
		case joaat("weapon_knuckle"):
			return 0x00000152;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 0x00000154;
			break;
		
		case joaat("weapon_hatchet"):
			return 0x0000014A;
			break;
		
		case joaat("weapon_machete"):
			return 0x00000156;
			break;
		
		case joaat("weapon_machinepistol"):
			return 0x00000158;
			break;
		
		case joaat("weapon_compactrifle"):
			return 0x0000015B;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 0x0000015D;
			break;
		
		case joaat("weapon_flashlight"):
			return 0x0000015F;
			break;
		
		case joaat("weapon_revolver"):
			return 0x00000162;
			break;
		
		case joaat("weapon_switchblade"):
			return 0x00000164;
			break;
		
		case 0x12E82D3D:
			return 0x00000169;
			break;
		
		case 0xBD248B55:
			return 0x0000016F;
			break;
		
		case 0x0781FE4A:
			return 0x0000016D;
			break;
		
		case 0xCD274149:
			return 0x0000016B;
			break;
		
		case 0xBA45E8B8:
			return 0x00000171;
			break;
		
		case 0x94117305:
			return 0x00000173;
			break;
		
		case 0x19044EE0:
			return 0x0000000A;
			break;
		
		case 0x394F415C:
			return 0x00000020;
			break;
		
		case 0xFAD1F1C9:
			return 0x00000022;
			break;
		
		case 0xDBBD7280:
			return 0x00000028;
			break;
		
		case 0x0A914799:
			return 0x00000038;
			break;
		
		case 0xBFE256D4:
			return 0x00000012;
			break;
		
		case 0x78A97CD0:
			return 0x0000001C;
			break;
		
		case 0x84D6FAFD:
			return 0x00000030;
			break;
		
		case 0x6A6C02E0:
			return 0x00000148;
			break;
		
		case 0x555AF99A:
			return 0x0000002C;
			break;
		
		case 0xCB96392F:
			return 0x00000162;
			break;
		
		case 0x88374054:
			return 0x00000091;
			break;
		
		case 0x969C3D67:
			return 0x0000011B;
			break;
		
		case 0x97EA20B8:
			return 0x0000018B;
			break;
		
		case 0x3813FC08:
			return 0x00000191;
			break;
		
		case 0xAF3696A1:
			return 0x00000193;
			break;
		
		case 0x476BF155:
			return 0x00000193;
			break;
		
		case 0xB62D1F67:
			return 0x00000193;
			break;
		
		case 0x917F6C8C:
			return 0x0000019B;
			break;
		
		case 0x2B5EF5EC:
			return 0x00000199;
			break;
		
		case 0xBA536372:
			return 0x0000019D;
			break;
	}
	return 0x00000002;
}

bool func_94(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_41())
	{
		return 0x00000000;
	}
	iVar0 = func_68(iParam0, iParam1, iParam2);
	iVar1 = func_54(iParam0, iParam1);
	return unk_0xEAE0D21A50E6C7F4(iVar0, func_30(iVar1));
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0xBFE256D4:
			return joaat("weapon_pistol");
		
		case 0x78A97CD0:
			return joaat("weapon_smg");
		
		case 0x394F415C:
			return joaat("weapon_assaultrifle");
		
		case 0xFAD1F1C9:
			return joaat("weapon_carbinerifle");
		
		case 0xDBBD7280:
			return joaat("weapon_combatmg");
		
		case 0x0A914799:
			return joaat("weapon_heavysniper");
		
		case 0x84D6FAFD:
			return joaat("weapon_bullpuprifle");
		
		case 0x6A6C02E0:
			return joaat("weapon_marksmanrifle");
		
		case 0x555AF99A:
			return joaat("weapon_pumpshotgun");
		
		case 0xCB96392F:
			return joaat("weapon_revolver");
		
		case 0x88374054:
			return joaat("weapon_snspistol");
		
		case 0x969C3D67:
			return joaat("weapon_specialcarbine");
		
		default:
	}
	return 0x00000000;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0xBFE256D4:
		case 0x78A97CD0:
		case 0x0A914799:
		case 0xDBBD7280:
		case 0x394F415C:
		case 0xFAD1F1C9:
		case 0x88374054:
		case 0xCB96392F:
		case 0x84D6FAFD:
		case 0x969C3D67:
		case 0x555AF99A:
		case 0x6A6C02E0:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_97(var uParam0)
{
	return uParam0->f_119;
}

void func_98(var uParam0, var uParam1)
{
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_hammer")) && iLocal_66[0x0000000A] == uParam1->f_5)
	{
		func_107(joaat("weapon_hammer"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_pistol50")) && iLocal_66[0x00000000] == uParam1->f_5)
	{
		func_107(joaat("weapon_pistol50"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_bullpupshotgun")) && iLocal_66[0x00000001] == uParam1->f_5)
	{
		func_107(joaat("weapon_bullpupshotgun"), uParam0, *uParam1, 0x00000000);
	}
	if (func_106(0x00000001, 0x00000000))
	{
		if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_sawnoffshotgun")) && iLocal_66[0x00000002] == uParam1->f_5)
		{
			func_107(joaat("weapon_sawnoffshotgun"), uParam0, *uParam1, 0x00000000);
		}
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_bottle")) && iLocal_66[0x00000003] == uParam1->f_5)
	{
		func_107(joaat("weapon_bottle"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_snspistol")) && iLocal_66[0x00000004] == uParam1->f_5)
	{
		func_107(joaat("weapon_snspistol"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_gusenberg")) && iLocal_66[0x0000000B] == uParam1->f_5)
	{
		func_107(joaat("weapon_gusenberg"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_heavypistol")) && iLocal_66[0x00000007] == uParam1->f_5)
	{
		func_107(joaat("weapon_heavypistol"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_specialcarbine")) && iLocal_66[0x00000005] == uParam1->f_5)
	{
		func_107(joaat("weapon_specialcarbine"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_bullpuprifle")) && iLocal_66[0x00000006] == uParam1->f_5)
	{
		func_107(joaat("weapon_bullpuprifle"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_dagger")) && iLocal_66[0x00000008] == uParam1->f_5)
	{
		func_107(joaat("weapon_dagger"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_vintagepistol")) && iLocal_66[0x00000009] == uParam1->f_5)
	{
		func_107(joaat("weapon_vintagepistol"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_firework")) && iLocal_66[0x0000000E] == uParam1->f_5)
	{
		func_107(joaat("weapon_firework"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_musket")) && iLocal_66[0x0000000D] == uParam1->f_5)
	{
		func_107(joaat("weapon_musket"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_flaregun")) && iLocal_66[0x0000000C] == uParam1->f_5)
	{
		func_107(joaat("weapon_flaregun"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_heavyshotgun")) && iLocal_66[0x0000000F] == uParam1->f_5)
	{
		func_107(joaat("weapon_heavyshotgun"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_marksmanrifle")) && iLocal_66[0x00000010] == uParam1->f_5)
	{
		func_107(joaat("weapon_marksmanrifle"), uParam0, *uParam1, 0x00000000);
	}
	if (func_105() || Global_40001.f_4D28)
	{
		if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_hatchet")) && iLocal_66[0x00000016] == uParam1->f_5)
		{
			func_107(joaat("weapon_hatchet"), uParam0, *uParam1, 0x00000000);
		}
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_proxmine")) && iLocal_66[0x00000011] == uParam1->f_5)
	{
		func_107(joaat("weapon_proxmine"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_hominglauncher")) && iLocal_66[0x00000012] == uParam1->f_5)
	{
		func_107(joaat("weapon_hominglauncher"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_combatpdw")) && iLocal_66[0x00000013] == uParam1->f_5)
	{
		func_107(joaat("weapon_combatpdw"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_marksmanpistol")) && iLocal_66[0x00000014] == uParam1->f_5)
	{
		func_107(joaat("weapon_marksmanpistol"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_knuckle")) && iLocal_66[0x00000015] == uParam1->f_5)
	{
		func_107(joaat("weapon_knuckle"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_machete")) && iLocal_66[0x00000017] == uParam1->f_5)
	{
		func_107(joaat("weapon_machete"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_machinepistol")) && iLocal_66[0x00000018] == uParam1->f_5)
	{
		func_107(joaat("weapon_machinepistol"), uParam0, *uParam1, 0x00000000);
	}
	if ((Global_40001.f_2D39 && unk_0x43B59FAC2AA8CE4D(joaat("weapon_flashlight"))) && iLocal_66[0x00000019] == uParam1->f_5)
	{
		func_107(joaat("weapon_flashlight"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_revolver")) && iLocal_66[0x0000001A] == uParam1->f_5)
	{
		func_107(joaat("weapon_revolver"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_switchblade")) && iLocal_66[0x0000001B] == uParam1->f_5)
	{
		func_107(joaat("weapon_switchblade"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_dbshotgun")) && iLocal_66[0x0000001C] == uParam1->f_5)
	{
		func_107(joaat("weapon_dbshotgun"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_compactrifle")) && iLocal_66[0x0000001D] == uParam1->f_5)
	{
		func_107(joaat("weapon_compactrifle"), uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x12E82D3D) && iLocal_66[0x0000001E] == uParam1->f_5)
	{
		func_107(0x12E82D3D, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0xCD274149) && iLocal_66[0x0000001F] == uParam1->f_5)
	{
		func_107(0xCD274149, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x0781FE4A) && iLocal_66[0x00000020] == uParam1->f_5)
	{
		func_107(0x0781FE4A, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0xBD248B55) && iLocal_66[0x00000021] == uParam1->f_5)
	{
		func_107(0xBD248B55, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0xBA45E8B8) && iLocal_66[0x00000022] == uParam1->f_5)
	{
		func_107(0xBA45E8B8, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x94117305) && iLocal_66[0x00000023] == uParam1->f_5)
	{
		func_107(0x94117305, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x19044EE0) && iLocal_66[0x00000024] == uParam1->f_5)
	{
		func_107(0x19044EE0, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x394F415C) && iLocal_66[0x00000025] == uParam1->f_5)
	{
		func_107(0x394F415C, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0xFAD1F1C9) && iLocal_66[0x00000026] == uParam1->f_5)
	{
		func_107(0xFAD1F1C9, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0xDBBD7280) && iLocal_66[0x00000027] == uParam1->f_5)
	{
		func_107(0xDBBD7280, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x0A914799) && iLocal_66[0x00000028] == uParam1->f_5)
	{
		func_107(0x0A914799, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0xBFE256D4) && iLocal_66[0x00000029] == uParam1->f_5)
	{
		func_107(0xBFE256D4, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x78A97CD0) && iLocal_66[0x0000002A] == uParam1->f_5)
	{
		func_107(0x78A97CD0, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x84D6FAFD) && iLocal_66[0x0000002B] == uParam1->f_5)
	{
		func_107(0x84D6FAFD, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x6A6C02E0) && iLocal_66[0x0000002C] == uParam1->f_5)
	{
		func_107(0x6A6C02E0, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x555AF99A) && iLocal_66[0x0000002D] == uParam1->f_5)
	{
		func_107(0x555AF99A, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0xCB96392F) && iLocal_66[0x0000002E] == uParam1->f_5)
	{
		func_107(0xCB96392F, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x88374054) && iLocal_66[0x0000002F] == uParam1->f_5)
	{
		func_107(0x88374054, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x969C3D67) && iLocal_66[0x00000030] == uParam1->f_5)
	{
		func_107(0x969C3D67, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x97EA20B8) && iLocal_66[0x00000031] == uParam1->f_5)
	{
		if (Global_40001.f_5998 && (func_104() || Global_19D9AC))
		{
			func_107(0x97EA20B8, uParam0, *uParam1, 0x00000000);
		}
	}
	if (unk_0x43B59FAC2AA8CE4D(0x3813FC08) && iLocal_66[0x00000032] == uParam1->f_5)
	{
		if (Global_40001.f_5C53 && func_100())
		{
			func_107(0x3813FC08, uParam0, *uParam1, 0x00000000);
		}
	}
	if ((unk_0x43B59FAC2AA8CE4D(0x476BF155) && iLocal_66[0x00000033] == uParam1->f_5) && Global_40001.f_6572)
	{
		func_107(0x476BF155, uParam0, *uParam1, 0x00000000);
	}
	if ((unk_0x43B59FAC2AA8CE4D(0xB62D1F67) && iLocal_66[0x00000034] == uParam1->f_5) && Global_40001.f_6571)
	{
		func_107(0xB62D1F67, uParam0, *uParam1, 0x00000000);
	}
	if ((unk_0x43B59FAC2AA8CE4D(0xAF3696A1) && (((func_17(0x000061AF, 0xFFFFFFFF, 0xFFFFFFFF) || func_17(0x000061AA, 0xFFFFFFFF, 0xFFFFFFFF)) || func_90(0xAF3696A1, 0xFFFFFFFF, 0x00000000)) || Global_40001.f_6192)) && iLocal_66[0x00000035] == uParam1->f_5)
	{
		func_107(0xAF3696A1, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x2B5EF5EC) && iLocal_66[0x00000036] == uParam1->f_5)
	{
		func_107(0x2B5EF5EC, uParam0, *uParam1, 0x00000000);
	}
	if (unk_0x43B59FAC2AA8CE4D(0x917F6C8C) && iLocal_66[0x00000037] == uParam1->f_5)
	{
		if (Global_40001.f_6BC8 && (func_99() || Global_19D9B2))
		{
			func_107(0x917F6C8C, uParam0, *uParam1, 0x00000000);
		}
	}
}

int func_99()
{
	if (func_17(0x00006DFE, 0xFFFFFFFF, 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_100()
{
	if (func_101(0x00001C93, 0xFFFFFFFF, 0xFFFFFFFF) >= 0x00000006)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_101(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_143();
	}
	iVar0 = 0x00000000;
	iVar1 = func_103(iParam0, iParam1);
	iVar2 = func_102(iParam0);
	if (0x00000000 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 0x00000008, iParam2))
		{
			iVar0 = 0x00000000;
		}
	}
	return iVar0;
}

int func_102(int iParam0)
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

int func_103(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_143();
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

int func_104()
{
	if (func_101(0x00004A25, 0xFFFFFFFF, 0xFFFFFFFF) >= 0x00000004)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_105()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000006);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000002);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000004);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000006);
				unk_0xCDC520E5E48E63D9(joaat("sp_unlock_exclus_content"), iVar0, 0x00000001);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar0 = unk_0x0A4C9A3D51EAE31F(0x00000362);
					unk_0x5D96D8530B3D0904(&iVar0, 0x00000000);
					unk_0x9F2BE984EBF8A0F4(iVar0);
				}
				return 0x00000001;
			}
		}
	}
	if (Global_24BC8 == 0x00000002)
	{
		return 0x00000001;
	}
	else if (Global_24BC8 == 0x00000003)
	{
		return 0x00000000;
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		if (unk_0xEAE0D21A50E6C7F4(unk_0x0A4C9A3D51EAE31F(0x00000362), 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_106(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C.f_520, 0x00000002))
		{
			return 0x00000001;
		}
	}
	if (unk_0xC2F420D189FDB329())
	{
		if (!bParam1 || unk_0x58424C49F8924842())
		{
			if (!unk_0xBA301E03A078FA59() && !unk_0x33A494591F2C1975())
			{
				return 0x00000001;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0x9AE561F9BC3F06D8())
		{
			return 0x00000000;
		}
	}
	if (unk_0xC2F420D189FDB329())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_107(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	char cVar1[16];
	float fVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	struct<5> Var7;
	struct<5> Var8;
	struct<5> Var9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	
	iParam3 = iParam3;
	StringCopy(&Var0, func_26(iParam0, 0x00000000), 16);
	if (((iParam0 == 0x97EA20B8 || iParam0 == joaat("weapon_compactrifle")) || iParam0 == 0x0781FE4A) || iParam0 == joaat("weapon_marksmanrifle"))
	{
		StringCopy(&cVar1, func_137(iParam0, 0x00000001), 16);
	}
	else
	{
		StringCopy(&cVar1, func_137(iParam0, 0x00000000), 16);
	}
	fVar2 = func_134(iParam0);
	uVar3 = func_133(iParam0, iParam2);
	uVar4 = func_132(iParam0, iParam2);
	iVar5 = func_131(iParam0, iParam2);
	uVar6 = func_130(iParam0, iParam2);
	unk_0xA9CD770F36C59E60(iParam0, &Var7);
	Var7.f_2 = unk_0x6DCAF294E20A0072(iParam0);
	bVar13 = 0x00000000;
	iVar12 = 0x00000000;
	while (iVar12 <= 0x00000008)
	{
		if (uParam1->f_1[iVar12] == 0x00000000 && unk_0x43B59FAC2AA8CE4D(iParam0))
		{
			if (func_96(iParam0))
			{
				if (func_94(0x60BD749C, func_95(iParam0), 0xFFFFFFFF))
				{
					bVar13 = 0x00000001;
				}
				else
				{
					bVar13 = 0x00000000;
				}
			}
			else if (func_90(iParam0, iParam2, 0x00000000))
			{
				bVar13 = 0x00000001;
				if (bVar13)
				{
				}
			}
			else
			{
				bVar13 = 0x00000000;
			}
			iVar11 = 0x00000000;
			while (iVar11 <= 0x00000023)
			{
				iVar10 = func_85(iParam0, iVar11);
				if (iVar10 != 0x00000000)
				{
					if (func_53(iVar10, iParam0, iParam2) && bVar13)
					{
						if (unk_0xE536D06B1DC8F0F5(iVar10, &Var8))
						{
							Var9 = (Var9 + Var8);
							Var9.f_1 = (Var9.f_1 + Var8.f_1);
							Var9.f_3 = (Var9.f_3 + Var8.f_3);
							Var9.f_4 = (Var9.f_4 + Var8.f_4);
						}
					}
					if (func_64(iVar10, iParam0, iParam2))
					{
						if (func_129(iVar10))
						{
							Var9.f_2 = func_128(iParam0);
						}
						else if (func_127(iVar10))
						{
							Var9.f_2 = func_126(iParam0);
						}
					}
					if (func_94(iVar10, iParam0, iParam2))
					{
					}
				}
				iVar11++;
			}
			if (Var9.f_2 == 0x00000000)
			{
				Var9.f_2 = Var7.f_2;
			}
			func_125(iVar12, &Var0, &cVar1, uParam1);
			func_124(iVar12, Var7, uParam1);
			func_123(iVar12, Var9, uParam1);
			if (func_15(iParam0))
			{
				func_122(iVar12, 0xFFFFFFFF, uParam1);
				func_121(iVar12, Var9.f_3, uParam1);
				func_120(iVar12, 0xFFFFFFFF, uParam1);
				func_119(iVar12, Var9.f_4, uParam1);
				func_118(iVar12, 0xFFFFFFFF, uParam1);
				func_117(iVar12, Var9.f_2, uParam1);
			}
			else
			{
				func_122(iVar12, Var7.f_3, uParam1);
				func_121(iVar12, Var9.f_3, uParam1);
				func_120(iVar12, Var7.f_4, uParam1);
				func_119(iVar12, Var9.f_4, uParam1);
				func_118(iVar12, Var7.f_2, uParam1);
				func_117(iVar12, Var9.f_2, uParam1);
			}
			func_116(iVar12, uVar4, uParam1);
			func_115(iVar12, uVar3, uParam1);
			if (func_15(iParam0))
			{
				func_114(iVar12, -1f, uParam1);
				func_113(iVar12, 0xFFFFFFFF, uParam1);
			}
			else
			{
				func_114(iVar12, fVar2, uParam1);
				func_113(iVar12, iVar5, uParam1);
			}
			func_112(iVar12, uVar6, uParam1);
			func_111(iVar12, Var7.f_1, uParam1);
			func_110(iVar12, Var9.f_1, uParam1);
			func_109(iVar12, iParam0, uParam1);
			func_108(iParam2, uParam1);
			uParam1->f_1[iVar12] = 0x00000001;
			iVar12 = 0x00000009;
		}
		iVar12++;
	}
}

void func_108(int iParam0, var uParam1)
{
	uParam1->f_114 = iParam0;
}

void func_109(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_55[iParam0] = iParam1;
}

void func_110(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_CD[iParam0] = uParam1;
}

void func_111(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_9B[iParam0] = uParam1;
}

void func_112(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_87[iParam0] = uParam1;
}

void func_113(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_7D[iParam0] = iParam1;
}

void func_114(int iParam0, float fParam1, var uParam2)
{
	uParam2->f_73[iParam0] = fParam1;
}

void func_115(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_5F[iParam0] = uParam1;
}

void func_116(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_69[iParam0] = uParam1;
}

void func_117(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_D7[iParam0] = uParam1;
}

void func_118(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_A5[iParam0] = iParam1;
}

void func_119(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_EB[iParam0] = uParam1;
}

void func_120(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_AF[iParam0] = iParam1;
}

void func_121(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_E1[iParam0] = uParam1;
}

void func_122(int iParam0, int iParam1, var uParam2)
{
	uParam2->f_B9[iParam0] = iParam1;
}

void func_123(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_C3[iParam0] = uParam1;
}

void func_124(int iParam0, var uParam1, var uParam2)
{
	uParam2->f_91[iParam0] = uParam1;
}

void func_125(int iParam0, char* sParam1, char* sParam2, var uParam3)
{
	StringCopy(&(uParam3->f_B[iParam0 /*4*/]), sParam1, 16);
	StringCopy(&(uParam3->f_30[iParam0 /*4*/]), sParam2, 16);
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return 0x00000010;
		
		case joaat("weapon_combatpistol"):
			return 0x00000010;
		
		case joaat("weapon_appistol"):
			return 0x00000024;
		
		case 0xBFE256D4:
			return 0x00000010;
		
		case joaat("weapon_microsmg"):
			return 0x0000001E;
		
		case joaat("weapon_smg"):
			return 0x0000003C;
		
		case 0x78A97CD0:
			return 0x0000003C;
		
		case joaat("weapon_assaultrifle"):
			return 0x0000003C;
		
		case joaat("weapon_carbinerifle"):
			return 0x0000003C;
		
		case joaat("weapon_advancedrifle"):
			return 0x0000003C;
		
		case 0x394F415C:
			return 0x0000003C;
		
		case 0xFAD1F1C9:
			return 0x0000003C;
		
		case joaat("weapon_mg"):
			return 0x00000064;
		
		case joaat("weapon_combatmg"):
			return 0x000000C8;
		
		case 0xDBBD7280:
			return 0x000000C8;
		
		case joaat("weapon_assaultshotgun"):
			return 0x00000020;
		
		case joaat("weapon_pistol50"):
			return 0x0000000C;
		
		case joaat("weapon_assaultsmg"):
			return 0x0000003C;
		
		case joaat("weapon_snspistol"):
			return 0x0000000C;
		
		case joaat("weapon_specialcarbine"):
			return 0x0000003C;
		
		case joaat("weapon_bullpuprifle"):
			return 0x0000003C;
		
		case joaat("weapon_heavypistol"):
			return 0x00000024;
		
		case joaat("weapon_vintagepistol"):
			return 0x0000000E;
		
		case joaat("weapon_gusenberg"):
			return 0x00000032;
		
		case joaat("weapon_marksmanrifle"):
			return 0x00000010;
		
		case joaat("weapon_heavyshotgun"):
			return 0x0000000C;
		
		case joaat("weapon_combatpdw"):
			return 0x0000003C;
		
		case joaat("weapon_compactrifle"):
			return 0x0000003C;
		
		case joaat("weapon_machinepistol"):
			return 0x00000014;
		
		case 0xBD248B55:
			return 0x0000001E;
		
		default:
	}
	return 0x00000000;
	return 0x00000000;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_pistol_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_appistol_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_microsmg_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_smg_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_mg_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_combatmg_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_pistol50_clip_02"):
			return 0x00000001;
			break;
		
		case 0xE1C5FFFA:
			return 0x00000001;
			break;
		
		case 0x3E7E6956:
			return 0x00000001;
			break;
		
		case 0x6CBF371B:
			return 0x00000001;
			break;
		
		case joaat("component_specialcarbine_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_bullpuprifle_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_heavypistol_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_snspistol_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_gusenberg_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_compactrifle_clip_02"):
			return 0x00000001;
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return 0x00000001;
			break;
		
		case 0xD12ACA6F:
			return 0x00000001;
			break;
		
		case 0x5DD5DBD5:
			return 0x00000001;
			break;
		
		case 0x17DF42E9:
			return 0x00000001;
			break;
		
		case 0x2CD8FF9D:
			return 0x00000001;
			break;
		
		case 0x5ED6C128:
			return 0x00000001;
			break;
		
		case 0xB9835B2E:
			return 0x00000001;
			break;
		
		case 0x937ED0B7:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_smg"):
			return 0x00000064;
		
		case joaat("weapon_assaultrifle"):
			return 0x00000064;
		
		case joaat("weapon_carbinerifle"):
			return 0x00000064;
		
		case 0x78A97CD0:
			return 0x00000064;
		
		case 0x394F415C:
			return 0x00000064;
		
		case 0xFAD1F1C9:
			return 0x00000064;
		
		case joaat("weapon_specialcarbine"):
			return 0x00000064;
		
		case joaat("weapon_heavyshotgun"):
			return 0x0000001E;
		
		case joaat("weapon_combatpdw"):
			return 0x00000064;
		
		case joaat("weapon_compactrifle"):
			return 0x00000064;
		
		case joaat("weapon_machinepistol"):
			return 0x0000001E;
		
		default:
	}
	return 0x00000000;
	return 0x00000000;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case joaat("component_assaultrifle_clip_03"):
			return 0x00000001;
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return 0x00000001;
			break;
		
		case joaat("component_combatpdw_clip_03"):
			return 0x00000001;
			break;
		
		case joaat("component_compactrifle_clip_03"):
			return 0x00000001;
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return 0x00000001;
			break;
		
		case joaat("component_machinepistol_clip_03"):
			return 0x00000001;
			break;
		
		case joaat("component_smg_clip_03"):
			return 0x00000001;
			break;
		
		case joaat("component_specialcarbine_clip_03"):
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

float func_130(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
		case 0xBFE256D4:
			return (SYSTEM::TO_FLOAT(func_34(0x000000FA, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000000FB, iParam1, 0x00000000)));
		
		case joaat("weapon_combatpistol"):
			return (SYSTEM::TO_FLOAT(func_34(0x00000104, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00000105, iParam1, 0x00000000)));
		
		case joaat("weapon_appistol"):
			return (SYSTEM::TO_FLOAT(func_34(0x00000118, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00000119, iParam1, 0x00000000)));
		
		case joaat("weapon_microsmg"):
			return (SYSTEM::TO_FLOAT(func_34(0x00000122, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00000123, iParam1, 0x00000000)));
		
		case joaat("weapon_smg"):
		case 0x78A97CD0:
			return (SYSTEM::TO_FLOAT(func_34(0x0000012C, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000012D, iParam1, 0x00000000)));
		
		case joaat("weapon_assaultrifle"):
		case 0x394F415C:
			return (SYSTEM::TO_FLOAT(func_34(0x00000140, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00000141, iParam1, 0x00000000)));
		
		case joaat("weapon_carbinerifle"):
		case 0xFAD1F1C9:
			return (SYSTEM::TO_FLOAT(func_34(0x00000149, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000014A, iParam1, 0x00000000)));
		
		case joaat("weapon_advancedrifle"):
			return (SYSTEM::TO_FLOAT(func_34(0x00000152, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00000153, iParam1, 0x00000000)));
		
		case joaat("weapon_mg"):
			return (SYSTEM::TO_FLOAT(func_34(0x0000015B, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000015C, iParam1, 0x00000000)));
		
		case joaat("weapon_combatmg"):
		case 0xDBBD7280:
			return (SYSTEM::TO_FLOAT(func_34(0x00000164, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00000165, iParam1, 0x00000000)));
		
		case joaat("weapon_pumpshotgun"):
			return (SYSTEM::TO_FLOAT(func_34(0x00000176, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00000177, iParam1, 0x00000000)));
		
		case joaat("weapon_sawnoffshotgun"):
			return (SYSTEM::TO_FLOAT(func_34(0x0000017F, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00000180, iParam1, 0x00000000)));
		
		case joaat("weapon_assaultshotgun"):
			return (SYSTEM::TO_FLOAT(func_34(0x00000192, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00000193, iParam1, 0x00000000)));
		
		case joaat("weapon_sniperrifle"):
		case 0x0A914799:
			return (SYSTEM::TO_FLOAT(func_34(0x000001A5, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000001A6, iParam1, 0x00000000)));
		
		case joaat("weapon_heavysniper"):
			return (SYSTEM::TO_FLOAT(func_34(0x000001AE, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000001AF, iParam1, 0x00000000)));
		
		case joaat("weapon_grenadelauncher"):
			return (SYSTEM::TO_FLOAT(func_34(0x000001B9, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000001BA, iParam1, 0x00000000)));
		
		case joaat("weapon_rpg"):
			return (SYSTEM::TO_FLOAT(func_34(0x000001C0, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000001C1, iParam1, 0x00000000)));
		
		case joaat("weapon_minigun"):
			return (SYSTEM::TO_FLOAT(func_34(0x000001C7, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000001C8, iParam1, 0x00000000)));
		
		case joaat("weapon_grenade"):
			return (SYSTEM::TO_FLOAT(func_34(0x000001D0, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000001D1, iParam1, 0x00000000)));
		
		case joaat("weapon_smokegrenade"):
			return (SYSTEM::TO_FLOAT(func_34(0x000001D8, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000001D9, iParam1, 0x00000000)));
		
		case joaat("weapon_stickybomb"):
			return (SYSTEM::TO_FLOAT(func_34(0x000001E1, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000001E2, iParam1, 0x00000000)));
		
		case joaat("weapon_molotov"):
			return (SYSTEM::TO_FLOAT(func_34(0x000001E9, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000001EA, iParam1, 0x00000000)));
		
		case joaat("weapon_stungun"):
			return (SYSTEM::TO_FLOAT(func_34(0x0000019B, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000019C, iParam1, 0x00000000)));
		
		case joaat("weapon_knife"):
			return (SYSTEM::TO_FLOAT(func_34(0x000000C1, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000000C3, iParam1, 0x00000000)));
		
		case joaat("weapon_nightstick"):
			return (SYSTEM::TO_FLOAT(func_34(0x000000C9, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000000CB, iParam1, 0x00000000)));
		
		case joaat("weapon_hammer"):
			return (SYSTEM::TO_FLOAT(func_34(0x000000E5, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000000E7, iParam1, 0x00000000)));
		
		case joaat("weapon_bat"):
			return (SYSTEM::TO_FLOAT(func_34(0x000000EC, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000000EE, iParam1, 0x00000000)));
		
		case joaat("weapon_crowbar"):
			return (SYSTEM::TO_FLOAT(func_34(0x000000D0, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000000D2, iParam1, 0x00000000)));
		
		case joaat("weapon_golfclub"):
			return (SYSTEM::TO_FLOAT(func_34(0x000000F3, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000000F5, iParam1, 0x00000000)));
		
		case joaat("weapon_pistol50"):
			return (SYSTEM::TO_FLOAT(func_34(0x0000010E, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000010F, iParam1, 0x00000000)));
		
		case joaat("weapon_assaultsmg"):
			return (SYSTEM::TO_FLOAT(func_34(0x00000136, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00000137, iParam1, 0x00000000)));
		
		case joaat("weapon_bullpupshotgun"):
			return (SYSTEM::TO_FLOAT(func_34(0x00000189, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000018A, iParam1, 0x00000000)));
		
		case 0xDDE2A27C:
			return (SYSTEM::TO_FLOAT(func_34(0x0000016D, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000016E, iParam1, 0x00000000)));
		
		case 0x176898A6:
			return (SYSTEM::TO_FLOAT(func_34(0x00000140, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00000141, iParam1, 0x00000000)));
		
		case 0xC78D71B4:
			return (SYSTEM::TO_FLOAT(func_34(0x000001AE, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000001AF, iParam1, 0x00000000)));
		
		case 0x8F796EC9:
			return (SYSTEM::TO_FLOAT(func_34(0x00000140, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00000141, iParam1, 0x00000000)));
		
		case joaat("weapon_bottle"):
			return (SYSTEM::TO_FLOAT(func_34(0x000006C1, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000006C2, iParam1, 0x00000000)));
		
		case joaat("weapon_snspistol"):
			return (SYSTEM::TO_FLOAT(func_34(0x000006CB, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000006CC, iParam1, 0x00000000)));
		
		case joaat("weapon_specialcarbine"):
			return (SYSTEM::TO_FLOAT(func_34(0x0000250F, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002510, iParam1, 0x00000000)));
		
		case joaat("weapon_bullpuprifle"):
			return (SYSTEM::TO_FLOAT(func_34(0x00002519, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000251A, iParam1, 0x00000000)));
		
		case joaat("weapon_heavypistol"):
			return (SYSTEM::TO_FLOAT(func_34(0x00002505, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002506, iParam1, 0x00000000)));
		
		case joaat("weapon_dagger"):
			return (SYSTEM::TO_FLOAT(func_34(0x00002634, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002635, iParam1, 0x00000000)));
		
		case joaat("weapon_vintagepistol"):
			return (SYSTEM::TO_FLOAT(func_34(0x0000263E, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000263F, iParam1, 0x00000000)));
		
		case joaat("weapon_gusenberg"):
			return (SYSTEM::TO_FLOAT(func_34(0x00002523, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002524, iParam1, 0x00000000)));
		
		case joaat("weapon_musket"):
			return (SYSTEM::TO_FLOAT(func_34(0x00002652, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002653, iParam1, 0x00000000)));
		
		case joaat("weapon_firework"):
			return (SYSTEM::TO_FLOAT(func_34(0x00002648, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002649, iParam1, 0x00000000)));
		
		case joaat("weapon_heavyshotgun"):
			return (SYSTEM::TO_FLOAT(func_34(0x000026A0, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000026A1, iParam1, 0x00000000)));
		
		case joaat("weapon_marksmanrifle"):
			return (SYSTEM::TO_FLOAT(func_34(0x000026AA, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000026AB, iParam1, 0x00000000)));
		
		case joaat("weapon_hominglauncher"):
			return (SYSTEM::TO_FLOAT(func_34(0x000026C4, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000026C5, iParam1, 0x00000000)));
		
		case joaat("weapon_proxmine"):
			return (SYSTEM::TO_FLOAT(func_34(0x000026BC, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000026BD, iParam1, 0x00000000)));
		
		case joaat("weapon_combatpdw"):
			return (SYSTEM::TO_FLOAT(func_34(0x000026CC, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000026CD, iParam1, 0x00000000)));
		
		case joaat("weapon_marksmanpistol"):
			return (SYSTEM::TO_FLOAT(func_34(0x000026DD, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000026DE, iParam1, 0x00000000)));
		
		case joaat("weapon_knuckle"):
			return (SYSTEM::TO_FLOAT(func_34(0x000026D6, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000026D7, iParam1, 0x00000000)));
		
		case joaat("weapon_machete"):
			return (SYSTEM::TO_FLOAT(func_34(0x000026E7, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000026E8, iParam1, 0x00000000)));
		
		case joaat("weapon_machinepistol"):
			return (SYSTEM::TO_FLOAT(func_34(0x000026EF, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000026F0, iParam1, 0x00000000)));
		
		case joaat("weapon_flashlight"):
			return (SYSTEM::TO_FLOAT(func_34(0x00002715, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002716, iParam1, 0x00000000)));
		
		case joaat("weapon_switchblade"):
			return (SYSTEM::TO_FLOAT(func_34(0x00002731, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002732, iParam1, 0x00000000)));
		
		case joaat("weapon_revolver"):
			return (SYSTEM::TO_FLOAT(func_34(0x00002727, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002728, iParam1, 0x00000000)));
		
		case joaat("weapon_dbshotgun"):
			return (SYSTEM::TO_FLOAT(func_34(0x0000270B, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000270C, iParam1, 0x00000000)));
		
		case joaat("weapon_compactrifle"):
			return (SYSTEM::TO_FLOAT(func_34(0x00002701, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002702, iParam1, 0x00000000)));
		
		case joaat("weapon_hatchet"):
			return (SYSTEM::TO_FLOAT(func_34(0x000026B4, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000026B5, iParam1, 0x00000000)));
		
		case 0x12E82D3D:
			return (SYSTEM::TO_FLOAT(func_34(0x0000275A, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000275B, iParam1, 0x00000000)));
		
		case 0xCD274149:
			return (SYSTEM::TO_FLOAT(func_34(0x00002764, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002765, iParam1, 0x00000000)));
		
		case 0x0781FE4A:
			return (SYSTEM::TO_FLOAT(func_34(0x0000276A, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000276B, iParam1, 0x00000000)));
		
		case 0xBD248B55:
			return (SYSTEM::TO_FLOAT(func_34(0x00002774, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002775, iParam1, 0x00000000)));
		
		case 0xBA45E8B8:
			return (SYSTEM::TO_FLOAT(func_34(0x0000277E, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000277F, iParam1, 0x00000000)));
		
		case 0x94117305:
			return (SYSTEM::TO_FLOAT(func_34(0x00002786, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002787, iParam1, 0x00000000)));
		
		case 0x19044EE0:
			return (SYSTEM::TO_FLOAT(func_34(0x000000DE, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x000000E0, iParam1, 0x00000000)));
		
		case 0x84D6FAFD:
			return (SYSTEM::TO_FLOAT(func_34(0x00002956, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002957, iParam1, 0x00000000)));
		
		case 0x6A6C02E0:
			return (SYSTEM::TO_FLOAT(func_34(0x0000296A, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000296B, iParam1, 0x00000000)));
		
		case 0x555AF99A:
			return (SYSTEM::TO_FLOAT(func_34(0x00002960, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002961, iParam1, 0x00000000)));
		
		case 0xCB96392F:
			return (SYSTEM::TO_FLOAT(func_34(0x00002974, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002975, iParam1, 0x00000000)));
		
		case 0x88374054:
			return (SYSTEM::TO_FLOAT(func_34(0x00002988, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002989, iParam1, 0x00000000)));
		
		case 0x969C3D67:
			return (SYSTEM::TO_FLOAT(func_34(0x00002992, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002993, iParam1, 0x00000000)));
		
		case 0x97EA20B8:
			return (SYSTEM::TO_FLOAT(func_34(0x0000297E, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x0000297F, iParam1, 0x00000000)));
		
		case 0x3813FC08:
			return (SYSTEM::TO_FLOAT(func_34(0x00002A5D, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002A5E, iParam1, 0x00000000)));
		
		case 0xAF3696A1:
			return (SYSTEM::TO_FLOAT(func_34(0x00002AFA, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002AFB, iParam1, 0x00000000)));
		
		case 0x476BF155:
			return (SYSTEM::TO_FLOAT(func_34(0x00002B04, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002B05, iParam1, 0x00000000)));
		
		case 0xB62D1F67:
			return (SYSTEM::TO_FLOAT(func_34(0x00002B0E, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002B0F, iParam1, 0x00000000)));
		
		case 0x917F6C8C:
			return (SYSTEM::TO_FLOAT(func_34(0x00002CBD, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002CBE, iParam1, 0x00000000)));
		
		case 0x2B5EF5EC:
			return (SYSTEM::TO_FLOAT(func_34(0x00002CB3, iParam1, 0x00000000)) / SYSTEM::TO_FLOAT(func_34(0x00002CB4, iParam1, 0x00000000)));
		
		default:
	}
	return 0f;
}

int func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_34(0x000000FE, iParam1, 0x00000000);
		
		case joaat("weapon_combatpistol"):
			return func_34(0x00000108, iParam1, 0x00000000);
		
		case joaat("weapon_appistol"):
			return func_34(0x0000011C, iParam1, 0x00000000);
		
		case joaat("weapon_microsmg"):
			return func_34(0x00000126, iParam1, 0x00000000);
		
		case joaat("weapon_smg"):
			return func_34(0x00000130, iParam1, 0x00000000);
		
		case joaat("weapon_assaultrifle"):
			return func_34(0x00000144, iParam1, 0x00000000);
		
		case joaat("weapon_carbinerifle"):
			return func_34(0x0000014D, iParam1, 0x00000000);
		
		case joaat("weapon_advancedrifle"):
			return func_34(0x00000156, iParam1, 0x00000000);
		
		case joaat("weapon_mg"):
			return func_34(0x0000015F, iParam1, 0x00000000);
		
		case joaat("weapon_combatmg"):
			return func_34(0x00000168, iParam1, 0x00000000);
		
		case joaat("weapon_pumpshotgun"):
			return func_34(0x0000017A, iParam1, 0x00000000);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_34(0x00000183, iParam1, 0x00000000);
		
		case joaat("weapon_assaultshotgun"):
			return func_34(0x00000196, iParam1, 0x00000000);
		
		case joaat("weapon_sniperrifle"):
			return func_34(0x000001A9, iParam1, 0x00000000);
		
		case joaat("weapon_heavysniper"):
			return func_34(0x000001B2, iParam1, 0x00000000);
		
		case joaat("weapon_minigun"):
			return func_34(0x000001CB, iParam1, 0x00000000);
		
		case joaat("weapon_pistol50"):
			return func_34(0x00000112, iParam1, 0x00000000);
		
		case joaat("weapon_assaultsmg"):
			return func_34(0x0000013A, iParam1, 0x00000000);
		
		case 0xC78D71B4:
			return func_34(0x000001B2, iParam1, 0x00000000);
		
		case joaat("weapon_bullpupshotgun"):
			return func_34(0x0000018D, iParam1, 0x00000000);
		
		case 0xDDE2A27C:
			return func_34(0x00000171, iParam1, 0x00000000);
		
		case 0x176898A6:
			return func_34(0x00000144, iParam1, 0x00000000);
		
		case 0x8F796EC9:
			return func_34(0x00000144, iParam1, 0x00000000);
		
		case 0xCE1A1A4D:
			return func_34(0x00000144, iParam1, 0x00000000);
		
		case joaat("weapon_snspistol"):
			return func_34(0x000006CF, iParam1, 0x00000000);
		
		case joaat("weapon_specialcarbine"):
			return func_34(0x00002513, iParam1, 0x00000000);
		
		case joaat("weapon_bullpuprifle"):
			return func_34(0x0000251D, iParam1, 0x00000000);
		
		case joaat("weapon_heavypistol"):
			return func_34(0x00002509, iParam1, 0x00000000);
		
		case joaat("weapon_vintagepistol"):
			return func_34(0x00002642, iParam1, 0x00000000);
		
		case joaat("weapon_gusenberg"):
			return func_34(0x00002527, iParam1, 0x00000000);
		
		case joaat("weapon_musket"):
			return func_34(0x00002656, iParam1, 0x00000000);
		
		case joaat("weapon_firework"):
			return func_34(0x0000264C, iParam1, 0x00000000);
		
		case joaat("weapon_heavyshotgun"):
			return func_34(0x000026A4, iParam1, 0x00000000);
		
		case joaat("weapon_marksmanrifle"):
			return func_34(0x000026AE, iParam1, 0x00000000);
		
		case joaat("weapon_combatpdw"):
			return func_34(0x000026D0, iParam1, 0x00000000);
		
		case joaat("weapon_marksmanpistol"):
			return func_34(0x000026E1, iParam1, 0x00000000);
		
		case joaat("weapon_machinepistol"):
			return func_34(0x000026F3, iParam1, 0x00000000);
		
		case joaat("weapon_revolver"):
			return func_34(0x0000272B, iParam1, 0x00000000);
		
		case joaat("weapon_dbshotgun"):
			return func_34(0x0000270F, iParam1, 0x00000000);
		
		case joaat("weapon_compactrifle"):
			return func_34(0x00002705, iParam1, 0x00000000);
		
		case 0x12E82D3D:
			return func_34(0x0000275E, iParam1, 0x00000000);
		
		case 0xBD248B55:
			return func_34(0x00002778, iParam1, 0x00000000);
		
		case 0xBFE256D4:
			return func_34(0x000000FE, iParam1, 0x00000000);
		
		case 0x78A97CD0:
			return func_34(0x00000130, iParam1, 0x00000000);
		
		case 0x0A914799:
			return func_34(0x000001B2, iParam1, 0x00000000);
		
		case 0xDBBD7280:
			return func_34(0x00000168, iParam1, 0x00000000);
		
		case 0x394F415C:
			return func_34(0x00000144, iParam1, 0x00000000);
		
		case 0xFAD1F1C9:
			return func_34(0x0000014D, iParam1, 0x00000000);
		
		case 0x84D6FAFD:
			return func_34(0x0000295A, iParam1, 0x00000000);
		
		case 0x6A6C02E0:
			return func_34(0x0000296E, iParam1, 0x00000000);
		
		case 0x555AF99A:
			return func_34(0x00002964, iParam1, 0x00000000);
		
		case 0xCB96392F:
			return func_34(0x00002978, iParam1, 0x00000000);
		
		case 0x88374054:
			return func_34(0x0000298C, iParam1, 0x00000000);
		
		case 0x969C3D67:
			return func_34(0x00002996, iParam1, 0x00000000);
		
		case 0x97EA20B8:
			return func_34(0x00002982, iParam1, 0x00000000);
		
		case 0xAF3696A1:
			return func_34(0x00002AFE, iParam1, 0x00000000);
		
		case 0x476BF155:
			return func_34(0x00002B08, iParam1, 0x00000000);
		
		case 0xB62D1F67:
			return func_34(0x00002B12, iParam1, 0x00000000);
		
		default:
	}
	return 0x00000000;
}

int func_132(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_34(0x000000FB, iParam1, 0x00000000);
		
		case joaat("weapon_combatpistol"):
			return func_34(0x00000105, iParam1, 0x00000000);
		
		case joaat("weapon_appistol"):
			return func_34(0x00000119, iParam1, 0x00000000);
		
		case joaat("weapon_microsmg"):
			return func_34(0x00000123, iParam1, 0x00000000);
		
		case joaat("weapon_smg"):
			return func_34(0x0000012D, iParam1, 0x00000000);
		
		case joaat("weapon_assaultrifle"):
			return func_34(0x00000141, iParam1, 0x00000000);
		
		case joaat("weapon_carbinerifle"):
			return func_34(0x0000014A, iParam1, 0x00000000);
		
		case joaat("weapon_advancedrifle"):
			return func_34(0x00000153, iParam1, 0x00000000);
		
		case joaat("weapon_mg"):
			return func_34(0x0000015C, iParam1, 0x00000000);
		
		case joaat("weapon_combatmg"):
			return func_34(0x00000165, iParam1, 0x00000000);
		
		case joaat("weapon_pumpshotgun"):
			return func_34(0x00000177, iParam1, 0x00000000);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_34(0x00000180, iParam1, 0x00000000);
		
		case joaat("weapon_assaultshotgun"):
			return func_34(0x00000193, iParam1, 0x00000000);
		
		case joaat("weapon_sniperrifle"):
			return func_34(0x000001A6, iParam1, 0x00000000);
		
		case joaat("weapon_heavysniper"):
			return func_34(0x000001AF, iParam1, 0x00000000);
		
		case joaat("weapon_grenadelauncher"):
			return func_34(0x000001BA, iParam1, 0x00000000);
		
		case joaat("weapon_rpg"):
			return func_34(0x000001C1, iParam1, 0x00000000);
		
		case joaat("weapon_minigun"):
			return func_34(0x000001C8, iParam1, 0x00000000);
		
		case joaat("weapon_grenade"):
			return func_34(0x000001D1, iParam1, 0x00000000);
		
		case joaat("weapon_smokegrenade"):
			return func_34(0x000001D9, iParam1, 0x00000000);
		
		case joaat("weapon_stickybomb"):
			return func_34(0x000001E2, iParam1, 0x00000000);
		
		case joaat("weapon_molotov"):
			return func_34(0x000001EA, iParam1, 0x00000000);
		
		case joaat("weapon_stungun"):
			return func_34(0x0000019C, iParam1, 0x00000000);
		
		case joaat("weapon_knife"):
			return func_34(0x000000C3, iParam1, 0x00000000);
		
		case joaat("weapon_nightstick"):
			return func_34(0x000000CB, iParam1, 0x00000000);
		
		case joaat("weapon_hammer"):
			return func_34(0x000000E7, iParam1, 0x00000000);
		
		case joaat("weapon_bat"):
			return func_34(0x000000EE, iParam1, 0x00000000);
		
		case joaat("weapon_crowbar"):
			return func_34(0x000000D2, iParam1, 0x00000000);
		
		case joaat("weapon_golfclub"):
			return func_34(0x000000F5, iParam1, 0x00000000);
		
		case joaat("weapon_pistol50"):
			return func_34(0x0000010F, iParam1, 0x00000000);
		
		case joaat("weapon_assaultsmg"):
			return func_34(0x00000137, iParam1, 0x00000000);
		
		case 0xC78D71B4:
			return func_34(0x000001AF, iParam1, 0x00000000);
		
		case joaat("weapon_bullpupshotgun"):
			return func_34(0x0000018A, iParam1, 0x00000000);
		
		case 0xDDE2A27C:
			return func_34(0x0000016E, iParam1, 0x00000000);
		
		case 0x176898A6:
			return func_34(0x00000141, iParam1, 0x00000000);
		
		case 0x8F796EC9:
			return func_34(0x00000141, iParam1, 0x00000000);
		
		case 0xCE1A1A4D:
			return func_34(0x00000141, iParam1, 0x00000000);
		
		case joaat("weapon_bottle"):
			return func_34(0x000006C2, iParam1, 0x00000000);
		
		case joaat("weapon_snspistol"):
			return func_34(0x000006CC, iParam1, 0x00000000);
		
		case joaat("weapon_specialcarbine"):
			return func_34(0x00002510, iParam1, 0x00000000);
		
		case joaat("weapon_bullpuprifle"):
			return func_34(0x0000251A, iParam1, 0x00000000);
		
		case joaat("weapon_heavypistol"):
			return func_34(0x00002506, iParam1, 0x00000000);
		
		case joaat("weapon_dagger"):
			return func_34(0x00002635, iParam1, 0x00000000);
		
		case joaat("weapon_vintagepistol"):
			return func_34(0x0000263F, iParam1, 0x00000000);
		
		case joaat("weapon_gusenberg"):
			return func_34(0x00002524, iParam1, 0x00000000);
		
		case joaat("weapon_musket"):
			return func_34(0x00002653, iParam1, 0x00000000);
		
		case joaat("weapon_firework"):
			return func_34(0x00002649, iParam1, 0x00000000);
		
		case joaat("weapon_heavyshotgun"):
			return func_34(0x000026A1, iParam1, 0x00000000);
		
		case joaat("weapon_marksmanrifle"):
			return func_34(0x000026AB, iParam1, 0x00000000);
		
		case joaat("weapon_proxmine"):
			return func_34(0x000026BD, iParam1, 0x00000000);
		
		case joaat("weapon_hominglauncher"):
			return func_34(0x000026C5, iParam1, 0x00000000);
		
		case joaat("weapon_combatpdw"):
			return func_34(0x000026CD, iParam1, 0x00000000);
		
		case joaat("weapon_marksmanpistol"):
			return func_34(0x000026DE, iParam1, 0x00000000);
		
		case joaat("weapon_knuckle"):
			return func_34(0x000026D7, iParam1, 0x00000000);
		
		case joaat("weapon_machete"):
			return func_34(0x000026E8, iParam1, 0x00000000);
		
		case joaat("weapon_machinepistol"):
			return func_34(0x000026F0, iParam1, 0x00000000);
		
		case joaat("weapon_flashlight"):
			return func_34(0x00002716, iParam1, 0x00000000);
		
		case joaat("weapon_switchblade"):
			return func_34(0x00002732, iParam1, 0x00000000);
		
		case joaat("weapon_revolver"):
			return func_34(0x00002728, iParam1, 0x00000000);
		
		case joaat("weapon_dbshotgun"):
			return func_34(0x0000270C, iParam1, 0x00000000);
		
		case joaat("weapon_compactrifle"):
			return func_34(0x00002702, iParam1, 0x00000000);
		
		case joaat("weapon_hatchet"):
			return func_34(0x000026B5, iParam1, 0x00000000);
		
		case 0x12E82D3D:
			return func_34(0x0000275B, iParam1, 0x00000000);
		
		case 0xCD274149:
			return func_34(0x00002765, iParam1, 0x00000000);
		
		case 0x0781FE4A:
			return func_34(0x0000276B, iParam1, 0x00000000);
		
		case 0xBD248B55:
			return func_34(0x00002775, iParam1, 0x00000000);
		
		case 0xBA45E8B8:
			return func_34(0x0000277F, iParam1, 0x00000000);
		
		case 0x94117305:
			return func_34(0x00002787, iParam1, 0x00000000);
		
		case 0x19044EE0:
			return func_34(0x000000E0, iParam1, 0x00000000);
		
		case 0xBFE256D4:
			return func_34(0x000000FB, iParam1, 0x00000000);
		
		case 0x78A97CD0:
			return func_34(0x0000012D, iParam1, 0x00000000);
		
		case 0x0A914799:
			return func_34(0x000001AF, iParam1, 0x00000000);
		
		case 0xDBBD7280:
			return func_34(0x00000165, iParam1, 0x00000000);
		
		case 0x394F415C:
			return func_34(0x00000141, iParam1, 0x00000000);
		
		case 0xFAD1F1C9:
			return func_34(0x0000014A, iParam1, 0x00000000);
		
		case 0x84D6FAFD:
			return func_34(0x00002957, iParam1, 0x00000000);
		
		case 0x6A6C02E0:
			return func_34(0x0000296B, iParam1, 0x00000000);
		
		case 0x555AF99A:
			return func_34(0x00002961, iParam1, 0x00000000);
		
		case 0xCB96392F:
			return func_34(0x00002975, iParam1, 0x00000000);
		
		case 0x88374054:
			return func_34(0x00002989, iParam1, 0x00000000);
		
		case 0x969C3D67:
			return func_34(0x00002993, iParam1, 0x00000000);
		
		case 0x97EA20B8:
			return func_34(0x0000297F, iParam1, 0x00000000);
		
		case 0x3813FC08:
			return func_34(0x00002A5E, iParam1, 0x00000000);
		
		case 0xAF3696A1:
			return func_34(0x00002AFB, iParam1, 0x00000000);
		
		case 0x476BF155:
			return func_34(0x00002B05, iParam1, 0x00000000);
		
		case 0xB62D1F67:
			return func_34(0x00002B0F, iParam1, 0x00000000);
		
		case 0x917F6C8C:
			return func_34(0x00002CBE, iParam1, 0x00000000);
		
		case 0x2B5EF5EC:
			return func_34(0x00002CB4, iParam1, 0x00000000);
		
		default:
	}
	return 0x00000000;
}

int func_133(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			return func_34(0x000000FA, iParam1, 0x00000000);
		
		case joaat("weapon_combatpistol"):
			return func_34(0x00000104, iParam1, 0x00000000);
		
		case joaat("weapon_appistol"):
			return func_34(0x00000118, iParam1, 0x00000000);
		
		case joaat("weapon_microsmg"):
			return func_34(0x00000122, iParam1, 0x00000000);
		
		case joaat("weapon_smg"):
			return func_34(0x0000012C, iParam1, 0x00000000);
		
		case joaat("weapon_assaultrifle"):
			return func_34(0x00000140, iParam1, 0x00000000);
		
		case joaat("weapon_carbinerifle"):
			return func_34(0x00000149, iParam1, 0x00000000);
		
		case joaat("weapon_advancedrifle"):
			return func_34(0x00000152, iParam1, 0x00000000);
		
		case joaat("weapon_mg"):
			return func_34(0x0000015B, iParam1, 0x00000000);
		
		case joaat("weapon_combatmg"):
			return func_34(0x00000164, iParam1, 0x00000000);
		
		case joaat("weapon_pumpshotgun"):
			return func_34(0x00000176, iParam1, 0x00000000);
		
		case joaat("weapon_sawnoffshotgun"):
			return func_34(0x0000017F, iParam1, 0x00000000);
		
		case joaat("weapon_assaultshotgun"):
			return func_34(0x00000192, iParam1, 0x00000000);
		
		case joaat("weapon_sniperrifle"):
			return func_34(0x000001A5, iParam1, 0x00000000);
		
		case joaat("weapon_heavysniper"):
			return func_34(0x000001AE, iParam1, 0x00000000);
		
		case joaat("weapon_grenadelauncher"):
			return func_34(0x000001B9, iParam1, 0x00000000);
		
		case joaat("weapon_rpg"):
			return func_34(0x000001C0, iParam1, 0x00000000);
		
		case joaat("weapon_minigun"):
			return func_34(0x000001C7, iParam1, 0x00000000);
		
		case joaat("weapon_grenade"):
			return func_34(0x000001D0, iParam1, 0x00000000);
		
		case joaat("weapon_smokegrenade"):
			return func_34(0x000001D8, iParam1, 0x00000000);
		
		case joaat("weapon_stickybomb"):
			return func_34(0x000001E1, iParam1, 0x00000000);
		
		case joaat("weapon_molotov"):
			return func_34(0x000001E9, iParam1, 0x00000000);
		
		case joaat("weapon_stungun"):
			return func_34(0x0000019B, iParam1, 0x00000000);
		
		case joaat("weapon_knife"):
			return func_34(0x000000C1, iParam1, 0x00000000);
		
		case joaat("weapon_nightstick"):
			return func_34(0x000000C9, iParam1, 0x00000000);
		
		case joaat("weapon_hammer"):
			return func_34(0x000000E5, iParam1, 0x00000000);
		
		case joaat("weapon_bat"):
			return func_34(0x000000EC, iParam1, 0x00000000);
		
		case joaat("weapon_crowbar"):
			return func_34(0x000000D0, iParam1, 0x00000000);
		
		case joaat("weapon_golfclub"):
			return func_34(0x000000F3, iParam1, 0x00000000);
		
		case joaat("weapon_pistol50"):
			return func_34(0x0000010E, iParam1, 0x00000000);
		
		case joaat("weapon_assaultsmg"):
			return func_34(0x00000136, iParam1, 0x00000000);
		
		case 0xC78D71B4:
			return func_34(0x000001AE, iParam1, 0x00000000);
		
		case joaat("weapon_bullpupshotgun"):
			return func_34(0x00000189, iParam1, 0x00000000);
		
		case 0xDDE2A27C:
			return func_34(0x0000016D, iParam1, 0x00000000);
		
		case 0x176898A6:
			return func_34(0x00000140, iParam1, 0x00000000);
		
		case 0x8F796EC9:
			return func_34(0x00000140, iParam1, 0x00000000);
		
		case 0xCE1A1A4D:
			return func_34(0x00000140, iParam1, 0x00000000);
		
		case joaat("weapon_bottle"):
			return func_34(0x000006C1, iParam1, 0x00000000);
		
		case joaat("weapon_snspistol"):
			return func_34(0x000006CB, iParam1, 0x00000000);
		
		case joaat("weapon_specialcarbine"):
			return func_34(0x0000250F, iParam1, 0x00000000);
		
		case joaat("weapon_bullpuprifle"):
			return func_34(0x00002519, iParam1, 0x00000000);
		
		case joaat("weapon_heavypistol"):
			return func_34(0x00002505, iParam1, 0x00000000);
		
		case joaat("weapon_dagger"):
			return func_34(0x00002634, iParam1, 0x00000000);
		
		case joaat("weapon_vintagepistol"):
			return func_34(0x0000263E, iParam1, 0x00000000);
		
		case joaat("weapon_gusenberg"):
			return func_34(0x00002523, iParam1, 0x00000000);
		
		case joaat("weapon_musket"):
			return func_34(0x00002652, iParam1, 0x00000000);
		
		case joaat("weapon_firework"):
			return func_34(0x00002648, iParam1, 0x00000000);
		
		case joaat("weapon_heavyshotgun"):
			return func_34(0x000026A0, iParam1, 0x00000000);
		
		case joaat("weapon_marksmanrifle"):
			return func_34(0x000026AA, iParam1, 0x00000000);
		
		case joaat("weapon_proxmine"):
			return func_34(0x000026BC, iParam1, 0x00000000);
		
		case joaat("weapon_hominglauncher"):
			return func_34(0x000026C4, iParam1, 0x00000000);
		
		case joaat("weapon_combatpdw"):
			return func_34(0x000026CC, iParam1, 0x00000000);
		
		case joaat("weapon_marksmanpistol"):
			return func_34(0x000026DD, iParam1, 0x00000000);
		
		case joaat("weapon_knuckle"):
			return func_34(0x000026D6, iParam1, 0x00000000);
		
		case joaat("weapon_machete"):
			return func_34(0x000026E7, iParam1, 0x00000000);
		
		case joaat("weapon_machinepistol"):
			return func_34(0x000026EF, iParam1, 0x00000000);
		
		case joaat("weapon_flashlight"):
			return func_34(0x00002715, iParam1, 0x00000000);
		
		case joaat("weapon_switchblade"):
			return func_34(0x00002731, iParam1, 0x00000000);
		
		case joaat("weapon_revolver"):
			return func_34(0x00002727, iParam1, 0x00000000);
		
		case joaat("weapon_dbshotgun"):
			return func_34(0x0000270B, iParam1, 0x00000000);
		
		case joaat("weapon_compactrifle"):
			return func_34(0x00002701, iParam1, 0x00000000);
		
		case joaat("weapon_hatchet"):
			return func_34(0x000026B4, iParam1, 0x00000000);
		
		case 0x12E82D3D:
			return func_34(0x0000275A, iParam1, 0x00000000);
		
		case 0xCD274149:
			return func_34(0x00002764, iParam1, 0x00000000);
		
		case 0x0781FE4A:
			return func_34(0x0000276A, iParam1, 0x00000000);
		
		case 0xBD248B55:
			return func_34(0x00002774, iParam1, 0x00000000);
		
		case 0xBA45E8B8:
			return func_34(0x0000277E, iParam1, 0x00000000);
		
		case 0x94117305:
			return func_34(0x00002786, iParam1, 0x00000000);
		
		case 0x19044EE0:
			return func_34(0x000000DE, iParam1, 0x00000000);
		
		case 0xBFE256D4:
			return func_34(0x000000FA, iParam1, 0x00000000);
		
		case 0x78A97CD0:
			return func_34(0x0000012C, iParam1, 0x00000000);
		
		case 0x0A914799:
			return func_34(0x000001AE, iParam1, 0x00000000);
		
		case 0xDBBD7280:
			return func_34(0x00000164, iParam1, 0x00000000);
		
		case 0x394F415C:
			return func_34(0x00000140, iParam1, 0x00000000);
		
		case 0xFAD1F1C9:
			return func_34(0x00000149, iParam1, 0x00000000);
		
		case 0x84D6FAFD:
			return func_34(0x00002956, iParam1, 0x00000000);
		
		case 0x6A6C02E0:
			return func_34(0x0000296A, iParam1, 0x00000000);
		
		case 0x555AF99A:
			return func_34(0x00002960, iParam1, 0x00000000);
		
		case 0xCB96392F:
			return func_34(0x00002974, iParam1, 0x00000000);
		
		case 0x88374054:
			return func_34(0x00002988, iParam1, 0x00000000);
		
		case 0x969C3D67:
			return func_34(0x00002992, iParam1, 0x00000000);
		
		case 0x97EA20B8:
			return func_34(0x0000297E, iParam1, 0x00000000);
		
		case 0x3813FC08:
			return func_34(0x00002A5D, iParam1, 0x00000000);
		
		case 0xAF3696A1:
			return func_34(0x00002AFA, iParam1, 0x00000000);
		
		case 0x476BF155:
			return func_34(0x00002B04, iParam1, 0x00000000);
		
		case 0xB62D1F67:
			return func_34(0x00002B0E, iParam1, 0x00000000);
		
		case 0x917F6C8C:
			return func_34(0x00002CBD, iParam1, 0x00000000);
		
		case 0x2B5EF5EC:
			return func_34(0x00002CB3, iParam1, 0x00000000);
		
		default:
	}
	return 0x00000000;
}

float func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			iVar0 = 0x000000FC;
			iVar1 = 0x000000FD;
			break;
		
		case 0xBFE256D4:
			iVar0 = 0x000000FC;
			iVar1 = 0x000000FD;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar0 = 0x00000106;
			iVar1 = 0x00000107;
			break;
		
		case joaat("weapon_appistol"):
			iVar0 = 0x0000011A;
			iVar1 = 0x0000011B;
			break;
		
		case joaat("weapon_microsmg"):
			iVar0 = 0x00000124;
			iVar1 = 0x00000125;
			break;
		
		case joaat("weapon_smg"):
			iVar0 = 0x0000012E;
			iVar1 = 0x0000012F;
			break;
		
		case 0x78A97CD0:
			iVar0 = 0x0000012E;
			iVar1 = 0x0000012F;
			break;
		
		case joaat("weapon_assaultrifle"):
		case 0x394F415C:
			iVar0 = 0x00000142;
			iVar1 = 0x00000143;
			break;
		
		case joaat("weapon_carbinerifle"):
		case 0xFAD1F1C9:
			iVar0 = 0x0000014B;
			iVar1 = 0x0000014C;
			break;
		
		case joaat("weapon_specialcarbine"):
			iVar0 = 0x00002511;
			iVar1 = 0x00002512;
			break;
		
		case joaat("weapon_snspistol"):
			iVar0 = 0x000006CD;
			iVar1 = 0x000006CE;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar0 = 0x00000154;
			iVar1 = 0x00000155;
			break;
		
		case joaat("weapon_mg"):
			iVar0 = 0x0000015D;
			iVar1 = 0x0000015E;
			break;
		
		case joaat("weapon_combatmg"):
		case 0xDBBD7280:
			iVar0 = 0x00000166;
			iVar1 = 0x00000167;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar0 = 0x00000181;
			iVar1 = 0x00000182;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar0 = 0x00000178;
			iVar1 = 0x00000179;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar0 = 0x00000194;
			iVar1 = 0x00000195;
			break;
		
		case joaat("weapon_sniperrifle"):
			iVar0 = 0x000001A7;
			iVar1 = 0x000001A8;
			break;
		
		case joaat("weapon_heavysniper"):
		case 0x0A914799:
			iVar0 = 0x000001B0;
			iVar1 = 0x000001B1;
			break;
		
		case joaat("weapon_grenadelauncher"):
			iVar0 = 0x000001BB;
			iVar1 = 0x000001B9;
			break;
		
		case joaat("weapon_minigun"):
			iVar0 = 0x000001C9;
			iVar1 = 0x000001CA;
			break;
		
		case joaat("weapon_rpg"):
			iVar0 = 0x000001C2;
			iVar1 = 0x000001C0;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			iVar0 = 0x0000018B;
			iVar1 = 0x0000018C;
			break;
		
		case joaat("weapon_assaultsmg"):
			iVar0 = 0x00000138;
			iVar1 = 0x00000139;
			break;
		
		case joaat("weapon_pistol50"):
			iVar0 = 0x00000110;
			iVar1 = 0x00000111;
			break;
		
		case joaat("weapon_heavypistol"):
			iVar0 = 0x00002507;
			iVar1 = 0x00002508;
			break;
		
		case joaat("weapon_bullpuprifle"):
			iVar0 = 0x0000251B;
			iVar1 = 0x0000251C;
			break;
		
		case joaat("weapon_gusenberg"):
			iVar0 = 0x00002525;
			iVar1 = 0x00002526;
			break;
		
		case joaat("weapon_vintagepistol"):
			iVar0 = 0x00002640;
			iVar1 = 0x00002641;
			break;
		
		case joaat("weapon_musket"):
			iVar0 = 0x00002654;
			iVar1 = 0x00002655;
			break;
		
		case joaat("weapon_firework"):
			iVar0 = 0x0000264A;
			iVar1 = 0x0000264B;
			break;
		
		case joaat("weapon_flaregun"):
			iVar0 = 0x00002549;
			iVar1 = 0x0000254A;
			break;
		
		case joaat("weapon_heavyshotgun"):
			iVar0 = 0x000026A2;
			iVar1 = 0x000026A3;
			break;
		
		case joaat("weapon_marksmanrifle"):
			iVar0 = 0x000026AC;
			iVar1 = 0x000026AD;
			break;
		
		case joaat("weapon_hominglauncher"):
			iVar0 = 0x000026C6;
			iVar1 = 0x000026C4;
			break;
		
		case joaat("weapon_proxmine"):
			iVar0 = 0x000026BE;
			iVar1 = 0x000026BC;
			break;
		
		case joaat("weapon_combatpdw"):
			iVar0 = 0x000026CE;
			iVar1 = 0x000026CF;
			break;
		
		case joaat("weapon_marksmanpistol"):
			iVar0 = 0x000026DF;
			iVar1 = 0x000026E0;
			break;
		
		case joaat("weapon_machinepistol"):
			iVar0 = 0x000026F1;
			iVar1 = 0x000026F2;
			break;
		
		case joaat("weapon_compactrifle"):
			iVar0 = 0x00002703;
			iVar1 = 0x00002704;
			break;
		
		case joaat("weapon_dbshotgun"):
			iVar0 = 0x0000270D;
			iVar1 = 0x0000270E;
			break;
		
		case joaat("weapon_revolver"):
			iVar0 = 0x00002729;
			iVar1 = 0x0000272A;
			break;
		
		case 0x12E82D3D:
			iVar0 = 0x0000275C;
			iVar1 = 0x0000275D;
			break;
		
		case 0xBD248B55:
			iVar0 = 0x00002776;
			iVar1 = 0x00002777;
			break;
		
		case 0x0781FE4A:
			iVar0 = 0x0000276C;
			iVar1 = 0x0000276A;
			break;
		
		case 0x97EA20B8:
			iVar0 = 0x00002980;
			iVar1 = 0x00002981;
			break;
		
		case 0x84D6FAFD:
			iVar1 = 0x00002956;
			iVar0 = 0x00002958;
			break;
		
		case 0x6A6C02E0:
			iVar1 = 0x0000296A;
			iVar0 = 0x0000296C;
			break;
		
		case 0x555AF99A:
			iVar1 = 0x00002960;
			iVar0 = 0x00002962;
			break;
		
		case 0xCB96392F:
			iVar1 = 0x00002974;
			iVar0 = 0x00002976;
			break;
		
		case 0x88374054:
			iVar1 = 0x00002988;
			iVar0 = 0x0000298A;
			break;
		
		case 0x969C3D67:
			iVar1 = 0x00002992;
			iVar0 = 0x00002994;
			break;
		
		case 0x476BF155:
			iVar0 = 0x00002B06;
			iVar1 = 0x00002B07;
			break;
		
		case 0xB62D1F67:
			iVar0 = 0x00002B10;
			iVar1 = 0x00002B11;
			break;
		
		case 0xAF3696A1:
			iVar0 = 0x00002AFC;
			iVar1 = 0x00002AFD;
			break;
		
		case 0x917F6C8C:
			iVar0 = 0x00002CBF;
			iVar1 = 0x00002CC0;
			break;
		
		case 0x2B5EF5EC:
			iVar0 = 0x00002CB5;
			iVar1 = 0x00002CB6;
			break;
	}
	if ((func_136(iParam0) || iParam0 == joaat("weapon_flashlight")) || func_135(iParam0))
	{
	}
	else
	{
		fVar2 = SYSTEM::TO_FLOAT(func_34(iVar0, 0xFFFFFFFF, 0x00000000));
		fVar3 = SYSTEM::TO_FLOAT(func_34(iVar1, 0xFFFFFFFF, 0x00000000));
		if (fVar2 > 0f)
		{
			fVar4 = (fVar3 / fVar2);
			if (fVar4 > 1f)
			{
				fVar4 = 1f;
			}
			fVar4 = (fVar4 * 100f);
			iVar5 = SYSTEM::ROUND(fVar4);
			fVar4 = SYSTEM::TO_FLOAT(iVar5);
			return fVar4;
		}
	}
	return 0f;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 0x00000001;
			break;
		
		case 0xBA45E8B8:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
		case 0xCD274149:
		case 0x94117305:
		case 0x19044EE0:
		case 0x3813FC08:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

char* func_137(int iParam0, bool bParam1)
{
	struct<16> Var0;
	struct<16> Var1;
	struct<16> Var2;
	struct<16> Var3;
	
	if (func_139(iParam0) && !bParam1)
	{
		switch (iParam0)
		{
			case joaat("weapon_marksmanrifle"):
				if (unk_0x8CD06866876216F2())
				{
					if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 0x6A6C02E0, 0x00000000))
					{
						return "WCD_MK1_LOCK";
					}
				}
				return "WTDE2_MKRIFLE";
				break;
			
			case joaat("weapon_compactrifle"):
				return "WTDE2_CMPRIFLE";
				break;
			
			case 0x0781FE4A:
				return "WTDE2_CMPGL";
				break;
			
			default:
				break;
			}
	}
	switch (iParam0)
	{
		case 0x00000000:
			return "";
			break;
		
		case joaat("weapon_unarmed"):
			return "";
			break;
		
		case joaat("weapon_pistol"):
			return "WT_PIST_DESC";
			break;
		
		case joaat("weapon_combatpistol"):
			return "WTD_PIST_CBT";
			break;
		
		case joaat("weapon_appistol"):
			return "WTD_PIST_AP";
			break;
		
		case joaat("weapon_smg"):
			return "WTD_SMG";
			break;
		
		case joaat("weapon_microsmg"):
			return "WTD_SMG_MCR";
			break;
		
		case joaat("weapon_assaultrifle"):
			return "WTD_RIFLE_ASL";
			break;
		
		case joaat("weapon_carbinerifle"):
			return "WTD_RIFLE_CBN";
			break;
		
		case joaat("weapon_advancedrifle"):
			return "WTD_RIFLE_ADV";
			break;
		
		case joaat("weapon_mg"):
			return "WTD_MG";
			break;
		
		case joaat("weapon_combatmg"):
			return "WTD_MG_CBT";
			break;
		
		case joaat("weapon_pumpshotgun"):
			return "WTD_SG_PMP";
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "WTD_SG_SOF";
			break;
		
		case joaat("weapon_assaultshotgun"):
			return "WTD_SG_ASL";
			break;
		
		case joaat("weapon_heavysniper"):
			return "WTD_SNIP_HVY";
			break;
		
		case joaat("weapon_remotesniper"):
			return "WTD_SNIP_RMT";
			break;
		
		case joaat("weapon_sniperrifle"):
			return "WTD_SNIP_RIF";
			break;
		
		case joaat("weapon_grenadelauncher"):
			return "WTD_GL";
			break;
		
		case joaat("weapon_rpg"):
			return "WTD_RPG";
			break;
		
		case joaat("weapon_minigun"):
			return "WTD_MINIGUN";
			break;
		
		case joaat("weapon_grenade"):
			return "WTD_GNADE";
			break;
		
		case joaat("weapon_smokegrenade"):
			return "WTD_GNADE_SMK";
			break;
		
		case joaat("weapon_stickybomb"):
			return "WTD_GNADE_STK";
			break;
		
		case joaat("weapon_molotov"):
			return "WTD_MOLOTOV";
			break;
		
		case joaat("weapon_stungun"):
			return "WTD_STUN";
			break;
		
		case joaat("weapon_petrolcan"):
			return "WTD_PETROL";
			break;
		
		case joaat("weapon_digiscanner"):
			return "WTD_DIGI";
			break;
		
		case joaat("weapon_electric_fence"):
			return "WTD_ELCFEN";
			break;
		
		case joaat("vehicle_weapon_tank"):
			return "";
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			return "";
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			return "";
			break;
		
		case joaat("object"):
			return "";
			break;
		
		case joaat("gadget_parachute"):
			return "WTD_PARA";
			break;
		
		case 0x67DD81F2:
			return "";
			break;
		
		case 0xA81B4220:
			return "";
			break;
		
		case 0x1F75106C:
			return "";
			break;
		
		case 0xF624D80A:
			return "";
			break;
		
		case 0xAE2EA48C:
			return "";
			break;
		
		case joaat("weapon_knife"):
			return "WTD_KNIFE";
			break;
		
		case joaat("weapon_nightstick"):
			return "WTD_NGTSTK";
			break;
		
		case joaat("weapon_hammer"):
			return "WTD_HAMMER";
			break;
		
		case joaat("weapon_bat"):
			return "WTD_BAT";
			break;
		
		case joaat("weapon_crowbar"):
			return "WTD_CROWBAR";
			break;
		
		case joaat("weapon_golfclub"):
			return "WTD_GOLFCLUB";
			break;
		
		case joaat("weapon_hatchet"):
			return "WTD_DLC_HATCHET";
			break;
		
		case joaat("weapon_rammed_by_car"):
			return "";
			break;
		
		case joaat("weapon_run_over_by_car"):
			return "";
			break;
		
		case joaat("weapon_assaultsmg"):
			return "WTD_SMG_ASL";
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return "WTD_SG_BLP";
			break;
		
		case joaat("weapon_pistol50"):
			return "WTD_PIST_50";
			break;
		
		case joaat("weapon_vintagepistol"):
			return "WTD_VPISTOL";
			break;
		
		case joaat("weapon_dagger"):
			return "WTD_DAGGER";
			break;
		
		case joaat("weapon_proxmine"):
			return "WTD_PRXMINE";
			break;
		
		case joaat("weapon_hominglauncher"):
			return "WTD_HOMLNCH";
			break;
		
		case joaat("weapon_machete"):
			return "WTD_MACHETE";
			break;
		
		case joaat("weapon_machinepistol"):
			return "WTD_MCHPIST";
			break;
		
		case joaat("weapon_flashlight"):
			return "WTD_FLASHLIGHT";
			break;
		
		case joaat("weapon_dbshotgun"):
			return "WTD_DBSHGN";
			break;
		
		case joaat("weapon_compactrifle"):
			return "WTD_CMPRIFLE";
			break;
		
		case joaat("weapon_switchblade"):
			return "WTD_SWBLADE";
			break;
		
		case joaat("weapon_revolver"):
			return "WTD_REVOLVER";
			break;
		
		case 0x97EA20B8:
			if (func_138(0x7A50C701) || bParam1)
			{
				return "WTD_REV_DA";
			}
			else if (unk_0xC2F420D189FDB329())
			{
				return "WTD_REV_DA_2";
			}
			else
			{
				return "WTD_REV_DA_3";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (unk_0x8CD06866876216F2())
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 0x969C3D67, 0x00000000))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var0) != 0xFFFFFFFF)
			{
				return func_27(&(Var0.f_F));
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (unk_0x8CD06866876216F2())
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 0x6A6C02E0, 0x00000000))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var1) != 0xFFFFFFFF)
			{
				return func_27(&(Var1.f_F));
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (unk_0x8CD06866876216F2())
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), 0x84D6FAFD, 0x00000000))
				{
					return "WCD_MK1_LOCK";
				}
			}
			if (func_28(iParam0, &Var2) != 0xFFFFFFFF)
			{
				return func_27(&(Var2.f_F));
			}
			break;
		
		case 0xAF3696A1:
			return "WTD_RAYPISTOL";
			break;
		
		case 0x476BF155:
			return "WTD_RAYCARBINE";
			break;
		
		case 0xB62D1F67:
			return "WTD_RAYMINIGUN";
			break;
		
		case 0x917F6C8C:
			return "WTD_REV_NV";
			break;
		
		case 0x2B5EF5EC:
			return "WTD_CERPST";
			break;
		
		default:
			if (func_28(iParam0, &Var3) != 0xFFFFFFFF)
			{
				return func_27(&(Var3.f_F));
			}
			break;
	}
	return "WT_INVALID";
}

int func_138(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_139(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_140())
		{
			if ((iParam0 == joaat("weapon_marksmanrifle") || iParam0 == joaat("weapon_compactrifle")) || iParam0 == 0x0781FE4A)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_140()
{
	return (func_142() || func_141());
}

int func_141()
{
	switch (unk_0x38658A8D6418AB75())
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_142()
{
	switch (unk_0x5C2586DA37052EF7())
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

int func_143()
{
	return Global_1407E9;
}

bool func_144(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000005:
			if (iParam1 > 0xFFFFFFFF)
			{
				return Global_150392.f_CB[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_418, iParam0);
}

void func_145()
{
	func_146(0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000);
}

void func_146(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	unk_0x673DE2AC97BFD28A("SET_COLUMN_SCROLL");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(0xFFFFFFFF);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		unk_0x7ACC3006A87F8B39(sParam3);
		unk_0x6D99DF8263D35CE5(iParam1);
		unk_0x6D99DF8263D35CE5(iParam2);
		unk_0x779B34565F4D71B1();
	}
	else
	{
		func_20("");
	}
	unk_0x1200CC973A2399C8(bParam4);
	unk_0x7E60D21B163E9D56();
}

void func_147(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_149();
	iVar0 = 0x00000009;
	iVar1 = uParam0->f_115;
	if (uParam1->f_5 < iLocal_64)
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	else
	{
		iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
	}
	iVar2 = uParam1->f_5 + 1;
	iVar3 = iLocal_64 + 1;
	func_146(0x00000000, iVar2, iVar3, "HUD_PAGE", 0x00000000);
}

int func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = func_38(iVar0);
	iVar2 = func_30(iVar0);
	if ((unk_0xB9132A06AE472728(0x00000002, iParam0) || unk_0x9A01369A10646AFE(0x00000002, iParam0)) || func_6(iParam0, &(Global_150392.f_424), 0x00000001))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_150392.f_419[iVar1], iVar2))
		{
			unk_0x5D96D8530B3D0904(&(Global_150392.f_419[iVar1]), iVar2);
			return 0x00000001;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_150392.f_419[iVar1], iVar2))
	{
		unk_0x0674E58A79778E99(&(Global_150392.f_419[iVar1]), iVar2);
	}
	return 0x00000000;
}

void func_149()
{
	iLocal_65 = 0x00000000;
	iLocal_64 = 0x00000003;
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_hammer")))
	{
		iLocal_66[0x0000000A] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000000A] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_pistol50")))
	{
		iLocal_66[0x00000000] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000000] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_bullpupshotgun")))
	{
		iLocal_66[0x00000001] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000001] = 0xFFFFFFFF;
	}
	if (func_106(0x00000001, 0x00000000))
	{
		if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_sawnoffshotgun")))
		{
			iLocal_66[0x00000002] = ((iLocal_65 / 0x00000009) + iLocal_64);
			iLocal_65++;
		}
		else
		{
			iLocal_66[0x00000002] = 0xFFFFFFFF;
		}
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_bottle")))
	{
		iLocal_66[0x00000003] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000003] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_snspistol")))
	{
		iLocal_66[0x00000004] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000004] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_gusenberg")))
	{
		iLocal_66[0x0000000B] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000000B] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_heavypistol")))
	{
		iLocal_66[0x00000007] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000007] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_specialcarbine")))
	{
		iLocal_66[0x00000005] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000005] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_bullpuprifle")))
	{
		iLocal_66[0x00000006] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000006] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_dagger")))
	{
		iLocal_66[0x00000008] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000008] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_vintagepistol")))
	{
		iLocal_66[0x00000009] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000009] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_firework")))
	{
		iLocal_66[0x0000000E] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000000E] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_musket")))
	{
		iLocal_66[0x0000000D] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000000D] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_heavyshotgun")))
	{
		iLocal_66[0x0000000F] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000000F] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_marksmanrifle")))
	{
		iLocal_66[0x00000010] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000010] = 0xFFFFFFFF;
	}
	if (func_105() || Global_40001.f_4D28)
	{
		if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_hatchet")))
		{
			iLocal_66[0x00000016] = ((iLocal_65 / 0x00000009) + iLocal_64);
			iLocal_65++;
		}
		else
		{
			iLocal_66[0x00000016] = 0xFFFFFFFF;
		}
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_hominglauncher")))
	{
		iLocal_66[0x00000012] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000012] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_proxmine")))
	{
		iLocal_66[0x00000011] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000011] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_flaregun")))
	{
		iLocal_66[0x0000000C] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000000C] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_combatpdw")))
	{
		iLocal_66[0x00000013] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000013] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_marksmanpistol")))
	{
		iLocal_66[0x00000014] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000014] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_knuckle")))
	{
		iLocal_66[0x00000015] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000015] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_machete")))
	{
		iLocal_66[0x00000017] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000017] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_machinepistol")))
	{
		iLocal_66[0x00000018] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000018] = 0xFFFFFFFF;
	}
	if (Global_40001.f_2D39 && unk_0x43B59FAC2AA8CE4D(joaat("weapon_flashlight")))
	{
		iLocal_66[0x00000019] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000019] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_revolver")))
	{
		iLocal_66[0x0000001A] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000001A] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_switchblade")))
	{
		iLocal_66[0x0000001B] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000001B] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_dbshotgun")))
	{
		iLocal_66[0x0000001C] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000001C] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(joaat("weapon_compactrifle")))
	{
		iLocal_66[0x0000001D] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000001D] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0x12E82D3D))
	{
		iLocal_66[0x0000001E] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000001E] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0xCD274149))
	{
		iLocal_66[0x0000001F] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000001F] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0x0781FE4A))
	{
		iLocal_66[0x00000020] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000020] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0xBD248B55))
	{
		iLocal_66[0x00000021] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000021] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0xBA45E8B8))
	{
		iLocal_66[0x00000022] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000022] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0x94117305))
	{
		iLocal_66[0x00000023] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000023] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0x19044EE0))
	{
		iLocal_66[0x00000024] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000024] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0x394F415C))
	{
		iLocal_66[0x00000025] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000025] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0xFAD1F1C9))
	{
		iLocal_66[0x00000026] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000026] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0xDBBD7280))
	{
		iLocal_66[0x00000027] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000027] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0x0A914799))
	{
		iLocal_66[0x00000028] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000028] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0xBFE256D4))
	{
		iLocal_66[0x00000029] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000029] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0x78A97CD0))
	{
		iLocal_66[0x0000002A] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000002A] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0x84D6FAFD))
	{
		iLocal_66[0x0000002B] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000002B] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0x6A6C02E0))
	{
		iLocal_66[0x0000002C] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000002C] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0x555AF99A))
	{
		iLocal_66[0x0000002D] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000002D] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0xCB96392F))
	{
		iLocal_66[0x0000002E] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000002E] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0x88374054))
	{
		iLocal_66[0x0000002F] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x0000002F] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0x969C3D67))
	{
		iLocal_66[0x00000030] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000030] = 0xFFFFFFFF;
	}
	if ((Global_40001.f_5998 && unk_0x43B59FAC2AA8CE4D(0x97EA20B8)) && (func_104() || Global_19D9AC))
	{
		iLocal_66[0x00000031] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000031] = 0xFFFFFFFF;
	}
	if ((Global_40001.f_5C53 && unk_0x43B59FAC2AA8CE4D(0x3813FC08)) && func_100())
	{
		iLocal_66[0x00000032] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000032] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0x476BF155) && Global_40001.f_6572)
	{
		iLocal_66[0x00000033] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000033] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0xB62D1F67) && Global_40001.f_6571)
	{
		iLocal_66[0x00000034] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000034] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0xAF3696A1) && (((func_17(0x000061AF, 0xFFFFFFFF, 0xFFFFFFFF) || func_17(0x000061AA, 0xFFFFFFFF, 0xFFFFFFFF)) || func_90(0xAF3696A1, 0xFFFFFFFF, 0x00000000)) || Global_40001.f_6192))
	{
		iLocal_66[0x00000035] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000035] = 0xFFFFFFFF;
	}
	if (unk_0x43B59FAC2AA8CE4D(0x2B5EF5EC))
	{
		iLocal_66[0x00000036] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000036] = 0xFFFFFFFF;
	}
	if ((Global_40001.f_6BC8 && unk_0x43B59FAC2AA8CE4D(0x917F6C8C)) && (func_99() || Global_19D9B2))
	{
		iLocal_66[0x00000037] = ((iLocal_65 / 0x00000009) + iLocal_64);
		iLocal_65++;
	}
	else
	{
		iLocal_66[0x00000037] = 0xFFFFFFFF;
	}
	if (iLocal_65 == 0x00000000)
	{
		iLocal_64 = 0x00000002;
		iLocal_65 = 0x00000009;
	}
	else
	{
		iLocal_64 = (iLocal_64 + (iLocal_65 / 0x00000009));
		iLocal_65 = (iLocal_65 - (0x00000009 * (iLocal_65 / 0x00000009)));
		if (iLocal_65 == 0x00000000)
		{
			iLocal_64 = (iLocal_64 - 0x00000001);
			iLocal_65 = 0x00000009;
		}
	}
}

void func_150(int iParam0, var uParam1)
{
	uParam1->f_115 = iParam0;
}

void func_151()
{
	func_149();
	func_152();
	func_146(0x00000000, 0x00000001, iLocal_64 + 1, "HUD_PAGE", 0x00000000);
}

void func_152()
{
	func_153(0x00000001);
}

void func_153(bool bParam0)
{
	if (bParam0)
	{
		func_154(0x00000000, 0x00000003, 0x00000000, 0x00000002, 0x00000000, 0x00000000);
	}
	else
	{
		func_154(0x00000000, 0x00000002, 0x00000000, 0x00000002, 0x00000001, 0x00000000);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	unk_0x673DE2AC97BFD28A("INIT_COLUMN_SCROLL");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x1200CC973A2399C8(0x00000000);
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x1200CC973A2399C8(0x00000001);
	unk_0x3CAEA85DA607305E(iParam4);
	unk_0x1200CC973A2399C8(bParam5);
	unk_0x7E60D21B163E9D56();
}

void func_155(var uParam0)
{
	uParam0->f_11C = 0x00000001;
}

void func_156(var uParam0)
{
	uParam0->f_11B = 0x00000001;
}

void func_157(var uParam0)
{
	func_158(uParam0);
	uParam0->f_119 = 0x00000001;
}

void func_158(var uParam0)
{
	*uParam0 = { Global_14FC7C };
}

int func_159()
{
	return Global_7830;
}

