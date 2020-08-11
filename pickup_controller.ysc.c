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
	int iLocal_20[45] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_21[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_22[76] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_23[102] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_24[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_25 = 0;
	bool bLocal_26 = 0;
	int iLocal_27[1] = { 0 };
	int iLocal_28 = 0;
	int iLocal_29[1] = { 0 };
	int iLocal_30 = 0;
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
	if (unk_0x2EBF608FFE6CA406(0x00000022))
	{
		func_40();
	}
	func_24();
	while (0x00000001)
	{
		if (func_23(0x0000000D) || func_23(0x0000000E))
		{
			if (bLocal_26)
			{
				func_15();
			}
		}
		else if (!bLocal_26)
		{
			func_24();
		}
		func_14();
		func_1();
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	if (!iLocal_25)
	{
		if (func_13(0x0000004B))
		{
			func_10();
			iLocal_25 = 0x00000001;
		}
	}
	if (!iLocal_28)
	{
		if (func_13(0x0000004B))
		{
			if (func_9())
			{
				func_6();
				iLocal_28 = 0x00000001;
			}
		}
	}
	if (!iLocal_30)
	{
		if (func_5(0x0000003E))
		{
			if (func_9())
			{
				func_2();
				iLocal_30 = 0x00000001;
			}
		}
	}
}

void func_2()
{
	if (func_9())
	{
		func_3(0x00000000, 0x4E301CD0, 156.24f, 0f, 71.2f, 0x00000001, 0x00000001);
	}
}

void func_3(int iParam0, int iParam1, vector3 vParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
	if (bParam4)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
	}
	if (bParam3)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
	}
	iLocal_29[iParam0] = unk_0x2D7B5CDDF12654D2(iParam1, func_4(iParam0), vParam2, iVar0, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
	unk_0x920814FE8940D940(iLocal_29[iParam0], 0x000927C0);
}

Vector3 func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -35.64201f, 2871.744f, 58.61521f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_5(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

void func_6()
{
	if (func_9())
	{
		func_7(0x00000000, 0xE46E11B4, 156.24f, 0f, 166.2f, 0x00000001, 0x00000001);
	}
}

void func_7(int iParam0, int iParam1, vector3 vParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
	if (bParam4)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
	}
	if (bParam3)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
	}
	iLocal_27[iParam0] = unk_0x2D7B5CDDF12654D2(iParam1, func_8(iParam0), vParam2, iVar0, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
	unk_0x920814FE8940D940(iLocal_27[iParam0], 0x000927C0);
}

Vector3 func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 299.4179f, 3942.443f, -3.18848f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_9()
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

void func_10()
{
	func_11(0x00000000, joaat("pickup_weapon_grenadelauncher"), 156.24f, 0f, 25.2f, 0x00000001, 0x00000001);
	func_11(0x00000001, joaat("pickup_weapon_rpg"), -92.68f, 62.64f, -264.24f, 0x00000001, 0x00000001);
	func_11(0x00000002, joaat("pickup_weapon_combatmg"), -70f, 0f, -40f, 0x00000001, 0x00000001);
	func_11(0x00000003, joaat("pickup_armour_standard"), -71f, 0f, 168.48f, 0x00000001, 0x00000001);
	func_11(0x00000004, joaat("pickup_weapon_appistol"), -100.8f, 92.8f, 0f, 0x00000001, 0x00000001);
	func_11(0x00000005, joaat("pickup_weapon_pumpshotgun"), 77.76f, 10.08f, -17.28f, 0x00000001, 0x00000001);
	func_11(0x00000006, joaat("pickup_weapon_sniperrifle"), 97.92f, 0f, 100.8f, 0x00000001, 0x00000001);
	func_11(0x00000007, joaat("pickup_weapon_stickybomb"), 0f, 0f, 0f, 0x00000001, 0x00000001);
	func_11(0x00000008, joaat("pickup_weapon_stickybomb"), 0f, 0f, 0f, 0x00000001, 0x00000001);
}

void func_11(int iParam0, int iParam1, vector3 vParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam1 == joaat("pickup_armour_standard"))
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
		if (bParam3)
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
		if (bParam4)
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
		}
		if (bParam3)
		{
			unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
		}
	}
	iLocal_24[iParam0] = unk_0x2D7B5CDDF12654D2(iParam1, func_12(iParam0), vParam2, iVar0, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
	unk_0x920814FE8940D940(iLocal_24[iParam0], 0x000927C0);
}

Vector3 func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 346.89f, 3999.51f, -6.4f;
			break;
		
		case 0x00000001:
			return 303.8f, 3949.8f, -5.19f;
			break;
		
		case 0x00000002:
			return 308.5f, 3972.7f, -8.16f;
			break;
		
		case 0x00000003:
			return 295.2f, 3961f, -7.74f;
			break;
		
		case 0x00000004:
			return 293f, 3969.6f, -9.21f;
			break;
		
		case 0x00000005:
			return 289.23f, 3955.22f, -6.54f;
			break;
		
		case 0x00000006:
			return 302.19f, 3983.12f, -11.02f;
			break;
		
		case 0x00000007:
			return 282.4f, 3966.9f, -7.63f;
			break;
		
		case 0x00000008:
			return 317.8f, 3968.13f, -10.11f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_13(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_14()
{
	switch (Global_7923)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			switch (Global_7924)
			{
				case 0x00000000:
					if (unk_0x762119754C50557A(iLocal_20[Global_7925]) && unk_0x797C48AACDB248B0(iLocal_20[Global_7925]))
					{
						Global_7926 = 0x00000000;
					}
					else
					{
						Global_7926 = 0x00000001;
					}
					break;
				
				case 0x00000001:
					if (unk_0x762119754C50557A(iLocal_22[Global_7925]) && unk_0x797C48AACDB248B0(iLocal_22[Global_7925]))
					{
						Global_7926 = 0x00000000;
					}
					else
					{
						Global_7926 = 0x00000001;
					}
					break;
				
				case 0x00000002:
					if (unk_0x762119754C50557A(iLocal_23[Global_7925]) && unk_0x797C48AACDB248B0(iLocal_23[Global_7925]))
					{
						Global_7926 = 0x00000000;
					}
					else
					{
						Global_7926 = 0x00000001;
					}
					break;
				
				case 0x00000003:
					Global_7923 = 0x00000003;
					break;
			}
			Global_7923 = 0x00000002;
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			Global_7925 = 0x00000000;
			Global_7926 = 0x00000000;
			Global_7923 = 0x00000000;
			break;
	}
}

void func_15()
{
	func_22();
	func_21();
	func_20();
	func_19();
	if (iLocal_25)
	{
		func_18();
	}
	if (iLocal_28)
	{
		func_17();
	}
	if (iLocal_30)
	{
		func_16();
	}
	bLocal_26 = 0x00000000;
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		if (unk_0x762119754C50557A(iLocal_29[iVar0]))
		{
			unk_0x40B7230FD4C59AA2(iLocal_29[iVar0]);
		}
		iVar0++;
	}
	iLocal_30 = 0x00000000;
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000001)
	{
		if (unk_0x762119754C50557A(iLocal_27[iVar0]))
		{
			unk_0x40B7230FD4C59AA2(iLocal_27[iVar0]);
		}
		iVar0++;
	}
	iLocal_28 = 0x00000000;
}

void func_18()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0x762119754C50557A(iLocal_24[iVar0]))
		{
			unk_0x40B7230FD4C59AA2(iLocal_24[iVar0]);
		}
		iVar0++;
	}
	iLocal_25 = 0x00000000;
}

void func_19()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000066)
	{
		if (unk_0x762119754C50557A(iLocal_23[iVar0]))
		{
			unk_0x40B7230FD4C59AA2(iLocal_23[iVar0]);
		}
		iVar0++;
	}
}

void func_20()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000004C)
	{
		if (unk_0x762119754C50557A(iLocal_22[iVar0]))
		{
			unk_0x40B7230FD4C59AA2(iLocal_22[iVar0]);
		}
		iVar0++;
	}
}

void func_21()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000013)
	{
		if (unk_0x762119754C50557A(iLocal_21[iVar0]))
		{
			unk_0x40B7230FD4C59AA2(iLocal_21[iVar0]);
		}
		iVar0++;
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000002D)
	{
		if (unk_0x762119754C50557A(iLocal_20[iVar0]))
		{
			unk_0x40B7230FD4C59AA2(iLocal_20[iVar0]);
		}
		iVar0++;
	}
}

bool func_23(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_24()
{
	func_36();
	func_33();
	func_29();
	func_25();
	bLocal_26 = 0x00000001;
}

void func_25()
{
	func_26(0x00000000, joaat("pickup_weapon_assaultrifle"), 90f, 0f, 70f, 0x00000000, 0x00000000, 0x00000001);
	func_26(0x00000001, joaat("pickup_weapon_assaultrifle"), 90f, 0f, 0f, 0x00000000, 0x00000000, 0x00000001);
	func_26(0x00000002, joaat("pickup_weapon_assaultrifle"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000003, joaat("pickup_weapon_assaultrifle"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000004, joaat("pickup_weapon_assaultrifle"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000005, joaat("pickup_weapon_assaultrifle"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000006, joaat("pickup_weapon_grenade"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000007, joaat("pickup_weapon_grenade"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000008, joaat("pickup_weapon_grenade"), 95f, 0f, 0f, 0x00000000, 0x00000000, 0x00000001);
	func_26(0x00000009, joaat("pickup_weapon_grenade"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000000A, joaat("pickup_weapon_grenadelauncher"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000000B, joaat("pickup_weapon_grenadelauncher"), 118f, 0f, 92f, 0x00000000, 0x00000000, 0x00000000);
	func_26(0x0000000C, joaat("pickup_weapon_grenadelauncher"), 82f, -60f, 0f, 0x00000000, 0x00000000, 0x00000000);
	func_26(0x0000000D, joaat("pickup_weapon_minigun"), 0f, 0f, 0f, 0x00000001, 0x00000001, 0x00000001);
	func_26(0x0000000E, joaat("pickup_weapon_mg"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000000F, joaat("pickup_weapon_mg"), 97.92f, 60.48f, 0f, 0x00000000, 0x00000000, 0x00000001);
	func_26(0x00000010, joaat("pickup_weapon_mg"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000011, joaat("pickup_weapon_mg"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000012, joaat("pickup_weapon_pistol"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000013, joaat("pickup_weapon_pistol"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000014, joaat("pickup_weapon_pistol"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000015, joaat("pickup_weapon_pistol"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000016, joaat("pickup_weapon_pistol"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000017, joaat("pickup_weapon_pistol"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000018, joaat("pickup_weapon_pistol"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000019, joaat("pickup_weapon_pistol"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000001A, joaat("pickup_weapon_pistol"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000001B, joaat("pickup_weapon_pistol"), 0f, 0f, 36f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000001C, joaat("pickup_weapon_rpg"), 86f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000001D, joaat("pickup_weapon_rpg"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000001E, joaat("pickup_weapon_rpg"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000001F, joaat("pickup_weapon_sawnoffshotgun"), -82f, 0f, 0f, 0x00000000, 0x00000000, 0x00000001);
	func_26(0x00000020, joaat("pickup_weapon_sawnoffshotgun"), 0f, 0f, 24f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000021, joaat("pickup_weapon_sawnoffshotgun"), 0f, 0f, 12f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000022, joaat("pickup_weapon_sawnoffshotgun"), 0f, 0f, 98f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000023, joaat("pickup_weapon_sawnoffshotgun"), 90f, 0f, 140f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000024, joaat("pickup_weapon_sawnoffshotgun"), 90f, 0f, 120f, 0x00000000, 0x00000000, 0x00000001);
	func_26(0x00000025, joaat("pickup_weapon_smg"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000026, joaat("pickup_weapon_smg"), 85.68f, -92.88f, 0f, 0x00000000, 0x00000000, 0x00000001);
	func_26(0x00000027, joaat("pickup_weapon_smg"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000028, joaat("pickup_weapon_smg"), 0f, 0f, 20f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000029, joaat("pickup_weapon_smg"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000002A, joaat("pickup_weapon_smg"), 0f, 0f, 0f, 0x00000001, 0x00000001, 0x00000001);
	func_26(0x0000002B, joaat("pickup_weapon_sniperrifle"), 0f, 0f, 42f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000002C, joaat("pickup_weapon_sniperrifle"), 0f, 0f, 52f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000002D, joaat("pickup_weapon_sniperrifle"), 90f, 0f, 87f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000002E, joaat("pickup_weapon_sniperrifle"), 0f, 0f, 98f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000002F, joaat("pickup_weapon_sniperrifle"), 0f, 0f, 20f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000030, joaat("pickup_weapon_stickybomb"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000031, joaat("pickup_weapon_stickybomb"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000032, joaat("pickup_weapon_rpg"), 63f, 0f, 0f, 0x00000000, 0x00000000, 0x00000001);
	func_26(0x00000033, joaat("pickup_weapon_pistol"), 0f, 0f, 4f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000034, joaat("pickup_weapon_pistol"), 90f, 90f, 90f, 0x00000000, 0x00000000, 0x00000000);
	func_26(0x00000035, joaat("pickup_weapon_sniperrifle"), 0f, 0f, 2f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000036, joaat("pickup_weapon_sawnoffshotgun"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000037, joaat("pickup_weapon_bat"), 90f, 0f, 4f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000038, joaat("pickup_weapon_bat"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000039, joaat("pickup_weapon_bat"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000003A, joaat("pickup_weapon_bat"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000003B, joaat("pickup_weapon_bat"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000003C, joaat("pickup_weapon_bat"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000003D, joaat("pickup_weapon_bat"), 0f, 0f, 0f, 0x00000001, 0x00000001, 0x00000001);
	func_26(0x0000003E, joaat("pickup_weapon_bat"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000003F, joaat("pickup_weapon_bat"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000040, joaat("pickup_weapon_bat"), 0f, 0f, 0f, 0x00000001, 0x00000001, 0x00000001);
	func_26(0x00000041, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000042, joaat("pickup_weapon_crowbar"), 90f, 0f, 45f, 0x00000000, 0x00000000, 0x00000001);
	func_26(0x00000043, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000044, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000045, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000046, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000047, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000048, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000049, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000004A, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000004B, joaat("pickup_weapon_molotov"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000004C, joaat("pickup_weapon_molotov"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000004D, joaat("pickup_weapon_molotov"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000004E, joaat("pickup_weapon_molotov"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000004F, joaat("pickup_weapon_molotov"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000050, joaat("pickup_weapon_molotov"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000051, joaat("pickup_weapon_molotov"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000052, joaat("pickup_weapon_molotov"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000053, joaat("pickup_weapon_molotov"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000054, joaat("pickup_weapon_molotov"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000055, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000056, joaat("pickup_weapon_bat"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000057, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000058, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000059, joaat("pickup_weapon_bat"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000005A, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000005B, joaat("pickup_weapon_bat"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000005C, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000005D, joaat("pickup_weapon_bat"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000005E, joaat("pickup_weapon_crowbar"), 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x0000005F, joaat("pickup_weapon_carbinerifle"), 0f, 0f, 87f, 0x00000001, 0x00000000, 0x00000001);
	func_26(0x00000060, joaat("pickup_weapon_assaultshotgun"), 0f, 0f, 0f, 0x00000001, 0x00000001, 0x00000001);
	func_26(0x00000061, joaat("pickup_weapon_assaultshotgun"), 85.7f, 0f, 136f, 0x00000000, 0x00000000, 0x00000000);
	func_26(0x00000062, joaat("pickup_parachute"), 10f, 0f, -90f, 0x00000000, 0x00000000, 0x00000000);
	func_26(0x00000063, joaat("pickup_weapon_pumpshotgun"), -88f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000);
	func_26(0x00000064, joaat("pickup_parachute"), 11f, 0f, 28.16f, 0x00000000, 0x00000000, 0x00000000);
	func_26(0x00000065, joaat("pickup_weapon_sawnoffshotgun"), 92.8f, 0f, 50.4f, 0x00000000, 0x00000000, 0x00000000);
}

void func_26(int iParam0, int iParam1, vector3 vParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
	if (bParam5)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
	}
	if (bParam3)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
	}
	iLocal_23[iParam0] = unk_0x2D7B5CDDF12654D2(iParam1, func_28(iParam0, 0x00000000), vParam2, iVar0, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
	unk_0x920814FE8940D940(iLocal_23[iParam0], 0x000927C0);
	if (bParam4)
	{
		unk_0x201D37E7F281A9D1(iLocal_23[iParam0], func_27(iParam0));
	}
}

char* func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000000D:
			return "V_25_ObsvDckRm";
			break;
		
		case 0x0000002A:
			return "GtaMloRoom002";
			break;
		
		case 0x0000001F:
			return "V_70_GamesRm";
			break;
		
		case 0x0000003D:
			return "V_68_BackRm";
			break;
		
		case 0x00000040:
			return "V_51_StoreRm";
			break;
		
		case 0x00000060:
			return "GtaMloRoomTun2";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

Vector3 func_28(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1 == 0x00000001)
			{
				return -1760.36f, 428.6f, 126.31f;
			}
			else
			{
				return -1756.974f, 427.531f, 126.7f;
			}
			break;
		
		case 0x00000001:
			return -1595.742f, 2799.371f, 16.0205f;
			break;
		
		case 0x00000002:
			if (bParam1 == 0x00000001)
			{
				return -197.1486f, 1482.685f, 288.253f;
			}
			else
			{
				return -200.0114f, 1481.697f, 289.4303f;
			}
			break;
		
		case 0x00000003:
			return 256.77f, 2841.047f, 42.6599f;
			break;
		
		case 0x00000004:
			return -1360.223f, 4435.751f, 27.7754f;
			break;
		
		case 0x00000005:
			return 64.63f, 7051.253f, 15.8272f;
			break;
		
		case 0x00000006:
			return -456.2838f, 1593.799f, 358.0119f;
			break;
		
		case 0x00000007:
			if (bParam1 == 0x00000001)
			{
				return -3114.617f, 749.8445f, 11.59352f;
			}
			else
			{
				return -3111.614f, 749.2816f, 12.6285f;
			}
			break;
		
		case 0x00000008:
			return 713.6797f, 4095.969f, 33.765f;
			break;
		
		case 0x00000009:
			return 255.2671f, 2586.281f, 43.9619f;
			break;
		
		case 0x0000000A:
			return -1292.64f, -3345.82f, 23.27f;
			break;
		
		case 0x0000000B:
			return 3111.531f, 2214.848f, -8.6457f;
			break;
		
		case 0x0000000C:
			if (bParam1 == 0x00000001)
			{
				return 555.82f, -839.05f, 39.84f;
			}
			else
			{
				return 555f, -837.81f, 55.08f;
			}
			break;
		
		case 0x0000000D:
			return -2360f, 3245f, 91.9f;
			break;
		
		case 0x0000000E:
			return 1691.152f, 2640.859f, 54.0693f;
			break;
		
		case 0x0000000F:
			return 1982.37f, 6203.64f, 41.15f;
			break;
		
		case 0x00000010:
			return -2979f, 1588f, 23.3f;
			break;
		
		case 0x00000011:
			return 963.5308f, -1824.04f, 30.0708f;
			break;
		
		case 0x00000012:
			return -295.4187f, 6188.786f, 30.48932f;
			break;
		
		case 0x00000013:
			return -1778f, 124f, 67.9f;
			break;
		
		case 0x00000014:
			if (bParam1 == 0x00000001)
			{
				return 157.5759f, 3133.994f, 42.45733f;
			}
			else
			{
				return 161.2925f, 3131.854f, 42.5892f;
			}
			break;
		
		case 0x00000015:
			return -888f, 5406f, 30.5f;
			break;
		
		case 0x00000016:
			return -1840f, 793f, 138.7f;
			break;
		
		case 0x00000017:
			if (bParam1 == 0x00000001)
			{
				return -495.8039f, -1750.207f, 17.42509f;
			}
			else
			{
				return -495.9968f, -1747.231f, 18.5194f;
			}
			break;
		
		case 0x00000018:
			if (bParam1 == 0x00000001)
			{
				return -1764.695f, -265.5809f, 47.6187f;
			}
			else
			{
				return -1763.359f, -263.2062f, 47.1481f;
			}
			break;
		
		case 0x00000019:
			if (bParam1 == 0x00000001)
			{
				return 548.0715f, -1642.451f, 27.2033f;
			}
			else
			{
				return 548.5943f, -1642.603f, 27.4425f;
			}
			break;
		
		case 0x0000001A:
			return 736.0563f, 2595.556f, 72.9165f;
			break;
		
		case 0x0000001B:
			if (bParam1 == 0x00000001)
			{
				return 701.0009f, -1179.702f, 23.28737f;
			}
			else
			{
				return 699.2748f, -1181.671f, 33.2608f;
			}
			break;
		
		case 0x0000001C:
			if (bParam1 == 0x00000001)
			{
				return -1146.74f, 4938.93f, 221.27f;
			}
			else
			{
				return -1149.437f, 4940.362f, 221.3282f;
			}
			break;
		
		case 0x0000001D:
			if (bParam1 == 0x00000001)
			{
				return 2543.91f, -432.76f, 93.12f;
			}
			else
			{
				return 2513.535f, -442.8484f, 113.0888f;
			}
			break;
		
		case 0x0000001E:
			return -553.1764f, -2239.877f, 121.3704f;
			break;
		
		case 0x0000001F:
			if (bParam1 == 0x00000001)
			{
				return 987.16f, -108.02f, 73.3f;
			}
			else
			{
				return 987.15f, -105.88f, 74.13f;
			}
			break;
		
		case 0x00000020:
			return -1048f, -836f, 10.5f;
			break;
		
		case 0x00000021:
			return 312.6026f, 6606.896f, 27.8835f;
			break;
		
		case 0x00000022:
			return -37.21f, 2871.26f, 58.61f;
			break;
		
		case 0x00000023:
			if (bParam1 == 0x00000001)
			{
				return 61.91f, 3690.51f, 38.83f;
			}
			else
			{
				return 59f, 3692f, 38.92f;
			}
			break;
		
		case 0x00000024:
			if (bParam1 == 0x00000001)
			{
				return 2933.33f, 4617.07f, 47.72f;
			}
			else
			{
				return 2934.499f, 4617.067f, 47.736f;
			}
			break;
		
		case 0x00000025:
			return 57.8219f, -1932.121f, 20.4939f;
			break;
		
		case 0x00000026:
			return 378.26f, -334.3f, 45.63f;
			break;
		
		case 0x00000027:
			if (bParam1 == 0x00000001)
			{
				return 2673.662f, 2793.702f, 31.8124f;
			}
			else
			{
				return 2676.045f, 2793.249f, 39.5934f;
			}
			break;
		
		case 0x00000028:
			return -1582.278f, 770.3486f, 188.1942f;
			break;
		
		case 0x00000029:
			if (bParam1 == 0x00000001)
			{
				return -1641.139f, -1032.815f, 4.63165f;
			}
			else
			{
				return -1640.546f, -1034.129f, 4.6074f;
			}
			break;
		
		case 0x0000002A:
			if (bParam1 == 0x00000001)
			{
				return -151.09f, -214.36f, 44.73f;
			}
			else
			{
				return -159.7137f, -209.1721f, 48.938f;
			}
			break;
		
		case 0x0000002B:
			return -1276.986f, -2451.886f, 72.0481f;
			break;
		
		case 0x0000002C:
			if (bParam1 == 0x00000001)
			{
				return -403.5827f, 1056.212f, 322.8414f;
			}
			else
			{
				return -402f, 1053f, 323f;
			}
			break;
		
		case 0x0000002D:
			return 2728.987f, 1576.382f, 65.5818f;
			break;
		
		case 0x0000002E:
			if (bParam1 == 0x00000001)
			{
				return -221.27f, 6133.62f, 30.48f;
			}
			else
			{
				return -215.9002f, 6125.27f, 56.278f;
			}
			break;
		
		case 0x0000002F:
			return 2092.225f, 2492.302f, 89.4046f;
			break;
		
		case 0x00000030:
			return -1124.666f, -967.1614f, 5.6319f;
			break;
		
		case 0x00000031:
			if (bParam1 == 0x00000001)
			{
				return -405.5299f, 323.4063f, 107.7227f;
			}
			else
			{
				return -405f, 325f, 108.7f;
			}
			break;
		
		case 0x00000032:
			return -1087.31f, -2429.3f, 13f;
			break;
		
		case 0x00000033:
			return -1042.645f, 879.7763f, 160.2144f;
			break;
		
		case 0x00000034:
			if (bParam1 == 0x00000001)
			{
				return -1081.229f, 678.9454f, 141.8056f;
			}
			else
			{
				return -1078.35f, 682.2944f, 144.904f;
			}
			break;
		
		case 0x00000035:
			return -402.0679f, 1355.062f, 329.8384f;
			break;
		
		case 0x00000036:
			return 153.3876f, 713.6584f, 207.2551f;
			break;
		
		case 0x00000037:
			return 186.9f, 243.0269f, 140.55f;
			break;
		
		case 0x00000038:
			if (bParam1 == 0x00000001)
			{
				return 302.01f, -3254.45f, 4.8f;
			}
			else
			{
				return 304f, -3259f, 5f;
			}
			break;
		
		case 0x00000039:
			if (bParam1 == 0x00000001)
			{
				return -398.57f, -1883.96f, 20.54f;
			}
			else
			{
				return -397f, -1885f, 21.5f;
			}
			break;
		
		case 0x0000003A:
			return 780.7208f, -211.0616f, 65.1143f;
			break;
		
		case 0x0000003B:
			return -1755.011f, 184.3929f, 63.3711f;
			break;
		
		case 0x0000003C:
			if (bParam1 == 0x00000001)
			{
				return 788.84f, 2164.06f, 52.1f;
			}
			else
			{
				return 786.0139f, 2164.951f, 52.0981f;
			}
			break;
		
		case 0x0000003D:
			return 1707.228f, 4920.156f, 41.0637f;
			break;
		
		case 0x0000003E:
			return -684.9417f, 5793.045f, 16.331f;
			break;
		
		case 0x0000003F:
			return -2188f, 4251f, 48f;
			break;
		
		case 0x00000040:
			if (bParam1 == 0x00000001)
			{
				return -1099.08f, 2711.35f, 18.11f;
			}
			else
			{
				return -1103f, 2715f, 19f;
			}
			break;
		
		case 0x00000041:
			return 581f, -2805f, 5.5f;
			break;
		
		case 0x00000042:
			if (bParam1 == 0x00000001)
			{
				return -663.95f, -1998.85f, 6.1f;
			}
			else
			{
				return -665.4316f, -2002.04f, 7.5968f;
			}
			break;
		
		case 0x00000043:
			return 1442.905f, -1479.759f, 62.2245f;
			break;
		
		case 0x00000044:
			if (bParam1 == 0x00000001)
			{
				return -361.92f, -141.76f, 37.58f;
			}
			else
			{
				return -356.5324f, -145.0359f, 41.7413f;
			}
			break;
		
		case 0x00000045:
			return 624.0116f, 558.6531f, 129.2455f;
			break;
		
		case 0x00000046:
			return 2833f, 2807f, 56.3785f;
			break;
		
		case 0x00000047:
			if (bParam1 == 0x00000001)
			{
				return 92.14449f, 6360.182f, 30.37612f;
			}
			else
			{
				return 94.0769f, 6356.961f, 30.3761f;
			}
			break;
		
		case 0x00000048:
			return -2231.514f, 3477.792f, 29.3291f;
			break;
		
		case 0x00000049:
			return 377f, 3582f, 32.5f;
			break;
		
		case 0x0000004A:
			if (bParam1 == 0x00000001)
			{
				return -2947.47f, 445.6f, 14.29f;
			}
			else
			{
				return -2948f, 441f, 15f;
			}
			break;
		
		case 0x0000004B:
			if (bParam1 == 0x00000001)
			{
				return 1292.88f, -3341.78f, 4.9f;
			}
			else
			{
				return 1296f, -3348f, 5.2f;
			}
			break;
		
		case 0x0000004C:
			if (bParam1 == 0x00000001)
			{
				return -1165.46f, -2054.09f, 13.2f;
			}
			else
			{
				return -1165.883f, -2051.026f, 13.2268f;
			}
			break;
		
		case 0x0000004D:
			if (bParam1 == 0x00000001)
			{
				return 1235.57f, -452.01f, 65.7f;
			}
			else
			{
				return 1235f, -450f, 66.5f;
			}
			break;
		
		case 0x0000004E:
			return -467.0458f, -934.8019f, 46.9844f;
			break;
		
		case 0x0000004F:
			return 226.7f, -1761f, 28.5f;
			break;
		
		case 0x00000050:
			if (bParam1 == 0x00000001)
			{
				return 1218.07f, 1898.69f, 76.87f;
			}
			else
			{
				return 1221f, 1898f, 77.4f;
			}
			break;
		
		case 0x00000051:
			if (bParam1 == 0x00000001)
			{
				return 1545.99f, 3802.7f, 32.42f;
			}
			else
			{
				return 1535.829f, 3798.217f, 33.4563f;
			}
			break;
		
		case 0x00000052:
			return 756.8601f, 6462.329f, 30.4229f;
			break;
		
		case 0x00000053:
			return -2319f, 4124f, 26f;
			break;
		
		case 0x00000054:
			return -3185f, 1053f, 20.2f;
			break;
		
		case 0x00000055:
			return 818.9215f, -3188.167f, 4.9007f;
			break;
		
		case 0x00000056:
			if (bParam1 == 0x00000001)
			{
				return -451.05f, -2264.24f, 6.61f;
			}
			else
			{
				return -457.3656f, -2262.646f, 7.5212f;
			}
			break;
		
		case 0x00000057:
			if (bParam1 == 0x00000001)
			{
				return 1409.86f, -757.22f, 65.8f;
			}
			else
			{
				return 1410.091f, -752.1061f, 66.2362f;
			}
			break;
		
		case 0x00000058:
			return 8.4875f, -441.2103f, 44.5639f;
			break;
		
		case 0x00000059:
			if (bParam1 == 0x00000001)
			{
				return -935.04f, 387.39f, 76.62f;
			}
			else
			{
				return -937.0176f, 391.544f, 80.2377f;
			}
			break;
		
		case 0x0000005A:
			if (bParam1 == 0x00000001)
			{
				return 2748.49f, 3463.02f, 54.77f;
			}
			else
			{
				return 2746.554f, 3463.525f, 54.7144f;
			}
			break;
		
		case 0x0000005B:
			return 1898.896f, 4921.975f, 47.8088f;
			break;
		
		case 0x0000005C:
			if (bParam1 == 0x00000001)
			{
				return -315.51f, 6310.89f, 31.37f;
			}
			else
			{
				return -315.9772f, 6307.385f, 31.4906f;
			}
			break;
		
		case 0x0000005D:
			return -1171f, 4927f, 224f;
			break;
		
		case 0x0000005E:
			return -281.1712f, 2528.012f, 73.6376f;
			break;
		
		case 0x0000005F:
			if (bParam1 == 0x00000001)
			{
				return 68.45f, 3756.27f, 38.74f;
			}
			else
			{
				return 68.453f, 3758.967f, 38.7395f;
			}
			break;
		
		case 0x00000060:
			return 25.2888f, -634.2637f, 6.5084f;
			break;
		
		case 0x00000061:
			if (bParam1 == 0x00000001)
			{
				return -1146.67f, 4939.11f, 221.27f;
			}
			else
			{
				return -1145.283f, 4940.286f, 221.3038f;
			}
			break;
		
		case 0x00000062:
			return 441.64f, 5570.38f, 780.45f;
			break;
		
		case 0x00000063:
			if (bParam1)
			{
				return 1353.152f, 4377.223f, 43.3416f;
			}
			else
			{
				return 1357.209f, 4388.445f, 43.872f;
			}
			break;
		
		case 0x00000064:
			return -102.0671f, -968.1538f, 295.5635f;
			break;
		
		case 0x00000065:
			return 2492.69f, 4963.014f, 43.6478f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_29()
{
	func_30(0x00000000, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x00000001, 0f, 0f, 24f, 0x00000000, 0x00000000);
	func_30(0x00000002, 0f, 0f, 60f, 0x00000001, 0x00000001);
	func_30(0x00000003, 0f, 0f, 45f, 0x00000000, 0x00000000);
	func_30(0x00000004, 0f, 0f, 55f, 0x00000001, 0x00000000);
	func_30(0x00000005, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x00000006, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x00000007, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x00000008, 0f, 0f, 90f, 0x00000001, 0x00000001);
	func_30(0x00000009, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x0000000A, 0f, 0f, -112f, 0x00000000, 0x00000000);
	func_30(0x0000000B, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x0000000C, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x0000000D, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x0000000E, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x0000000F, 0f, 0f, 35f, 0x00000000, 0x00000000);
	func_30(0x00000010, 0f, 0f, 13f, 0x00000000, 0x00000000);
	func_30(0x00000011, 0f, 0f, 0f, 0x00000000, 0x00000001);
	func_30(0x00000012, 0f, 0f, -64f, 0x00000001, 0x00000000);
	func_30(0x00000013, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x00000014, 0f, 0f, -62.4f, 0x00000001, 0x00000000);
	func_30(0x00000015, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x00000016, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x00000017, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x00000018, 0f, 0f, 95f, 0x00000000, 0x00000000);
	func_30(0x00000019, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x0000001A, 0f, 0f, -15f, 0x00000001, 0x00000000);
	func_30(0x0000001B, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x0000001C, 0f, 0f, -5f, 0x00000000, 0x00000000);
	func_30(0x0000001D, 5f, 0f, -45f, 0x00000000, 0x00000000);
	func_30(0x0000001E, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x0000001F, 6f, 0f, 51f, 0x00000000, 0x00000000);
	func_30(0x00000020, 0f, 0f, -28f, 0x00000000, 0x00000000);
	func_30(0x00000021, 0f, 0f, 33f, 0x00000000, 0x00000000);
	func_30(0x00000022, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x00000023, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x00000024, 5f, 0f, 30.2f, 0x00000001, 0x00000000);
	func_30(0x00000025, 0f, 0f, 0f, 0x00000001, 0x00000000);
	func_30(0x00000026, 0f, 0f, 70.5f, 0x00000001, 0x00000001);
	func_30(0x00000027, 0f, 0f, 70f, 0x00000001, 0x00000000);
	func_30(0x00000028, 0f, 0f, 45f, 0x00000000, 0x00000000);
	func_30(0x00000029, 0f, 0f, -7f, 0x00000001, 0x00000000);
	func_30(0x0000002A, 0f, 0f, -13f, 0x00000001, 0x00000000);
	func_30(0x0000002B, 0f, 0f, 44.4f, 0x00000001, 0x00000000);
	func_30(0x0000002C, 0f, 0f, 35f, 0x00000000, 0x00000000);
	func_30(0x0000002D, 0f, 0f, 89.8f, 0x00000001, 0x00000000);
	func_30(0x0000002E, 0f, 0f, -166f, 0x00000000, 0x00000000);
	func_30(0x0000002F, 0f, 0f, 0f, 0x00000000, 0x00000000);
	func_30(0x00000030, 0f, 0f, 0f, 0x00000000, 0x00000001);
	func_30(0x00000031, 0f, 2f, 90f, 0x00000001, 0x00000000);
	func_30(0x00000032, 0f, 0f, 34f, 0x00000000, 0x00000000);
	func_30(0x00000033, 0f, 0f, 59f, 0x00000001, 0x00000001);
	func_30(0x00000034, 0f, 0f, 5f, 0x00000000, 0x00000000);
	func_30(0x00000035, 0f, 0f, 70f, 0x00000000, 0x00000000);
	func_30(0x00000036, 0f, 0f, 104f, 0x00000000, 0x00000000);
	func_30(0x00000037, 0f, 0f, -85f, 0x00000000, 0x00000000);
	func_30(0x00000038, 0f, 0f, 32f, 0x00000000, 0x00000000);
	func_30(0x00000039, 0f, 0f, 38f, 0x00000001, 0x00000000);
	func_30(0x0000003A, 0f, 0f, 100f, 0x00000000, 0x00000001);
	func_30(0x0000003B, 0f, 0f, 70f, 0x00000001, 0x00000000);
	func_30(0x0000003C, 0f, 0f, 69.7f, 0x00000001, 0x00000000);
	func_30(0x0000003D, 0f, 0f, 100f, 0x00000000, 0x00000000);
	func_30(0x0000003E, 0f, 20.1f, 52.5f, 0x00000001, 0x00000000);
	func_30(0x0000003F, 0f, 0f, 339f, 0x00000001, 0x00000001);
	func_30(0x00000040, 0f, 0f, 61f, 0x00000000, 0x00000000);
	func_30(0x00000041, 0f, 0f, 284f, 0x00000001, 0x00000001);
	func_30(0x00000042, 0f, 0f, -20f, 0x00000001, 0x00000000);
	func_30(0x00000043, 6f, 0f, 0f, 0x00000001, 0x00000000);
	func_30(0x00000044, 6f, 0f, -215f, 0x00000001, 0x00000000);
	func_30(0x00000045, -6f, 0f, -40f, 0x00000001, 0x00000000);
	func_30(0x00000046, 6f, 0f, 140f, 0x00000001, 0x00000000);
	func_30(0x00000047, 6f, 0f, -110f, 0x00000001, 0x00000000);
	func_30(0x00000048, -6f, 0f, -110f, 0x00000001, 0x00000000);
	func_30(0x00000049, 6f, 0f, -7f, 0x00000001, 0x00000000);
	func_30(0x0000004A, 6f, 0f, 173f, 0x00000001, 0x00000000);
	func_30(0x0000004B, 0f, 0f, 23.3f, 0x00000001, 0x00000000);
}

void func_30(int iParam0, vector3 vParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000008);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
	if (!bParam2)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
	}
	iLocal_22[iParam0] = unk_0x2D7B5CDDF12654D2(joaat("pickup_health_standard"), func_32(iParam0, 0x00000000), vParam1, iVar0, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
	unk_0x920814FE8940D940(iLocal_22[iParam0], 0x000927C0);
	if (bParam3)
	{
		unk_0x201D37E7F281A9D1(iLocal_22[iParam0], func_31(iParam0));
	}
}

char* func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000002:
			return "V_25_ControlRm";
			break;
		
		case 0x00000008:
			return "FireDeptRoom";
			break;
		
		case 0x0000000F:
			return "Inside Dam";
			break;
		
		case 0x00000011:
			return "V_CarModRoom";
			break;
		
		case 0x00000014:
			return "V_70_Toilet";
			break;
		
		case 0x00000026:
			return "rm_garage";
			break;
		
		case 0x00000030:
			return "GtaMloRoom001";
			break;
		
		case 0x00000033:
			return "v_refit";
			break;
		
		case 0x0000003A:
			return "V_39_ShopRm";
			break;
		
		case 0x0000003F:
			return "V_FIB03_atr_off1";
			break;
		
		case 0x00000041:
			return "GtaMloRoomTun2";
			break;
		
		case 0x00000043:
			return "V_34_ProcessRm";
			break;
		
		case 0x00000044:
			return "V_34_Ent_office";
			break;
		
		case 0x00000045:
			return "V_34_WareRm";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

Vector3 func_32(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 131.2f, 6920.1f, 20.8f;
			break;
		
		case 0x00000001:
			if (bParam1 == 0x00000001)
			{
				return -1048.569f, 4917.414f, 208.4216f;
			}
			else
			{
				return -1046.277f, 4918.739f, 211.5379f;
			}
			break;
		
		case 0x00000002:
			return -2358.46f, 3251.397f, 100.5504f;
			break;
		
		case 0x00000003:
			if (bParam1 == 0x00000001)
			{
				return -247.6219f, 6331.341f, 31.42602f;
			}
			else
			{
				return -249.9504f, 6331.219f, 32.7262f;
			}
			break;
		
		case 0x00000004:
			if (bParam1 == 0x00000001)
			{
				return -140.9f, -2491.45f, 43.45f;
			}
			else
			{
				return -141.0976f, -2498.239f, 40.0124f;
			}
			break;
		
		case 0x00000005:
			if (bParam1 == 0x00000001)
			{
				return -2924.697f, 46.50282f, 10.60369f;
			}
			else
			{
				return -2925.7f, 47.4f, 11.6f;
			}
			break;
		
		case 0x00000006:
			return -793.1981f, -726.4421f, 26.28f;
			break;
		
		case 0x00000007:
			if (bParam1 == 0x00000001)
			{
				return 124.0092f, -673.0096f, 41.02729f;
			}
			else
			{
				return 123.5196f, -674.2917f, 41.4945f;
			}
			break;
		
		case 0x00000008:
			if (bParam1 == 0x00000001)
			{
				return 1195.737f, -1481.694f, 33.8595f;
			}
			else
			{
				return 1194.709f, -1482.472f, 33.9594f;
			}
			break;
		
		case 0x00000009:
			if (bParam1 == 0x00000001)
			{
				return -35.88743f, 1945.738f, 189.1868f;
			}
			else
			{
				return -35.5254f, 1947.289f, 189.186f;
			}
			break;
		
		case 0x0000000A:
			if (bParam1)
			{
				return 753.4579f, 4174.996f, 39.8011f;
			}
			else
			{
				return 751.72f, 4175.14f, 40.95f;
			}
			break;
		
		case 0x0000000B:
			if (bParam1 == 0x00000001)
			{
				return 1791.256f, 4592.383f, 36.68283f;
			}
			else
			{
				return 1789.8f, 4592.4f, 36.78f;
			}
			break;
		
		case 0x0000000C:
			return 341.311f, 2618.918f, 43.5124f;
			break;
		
		case 0x0000000D:
			return 442.3755f, -223.602f, 55.0215f;
			break;
		
		case 0x0000000E:
			if (bParam1 == 0x00000001)
			{
				return 1291.02f, -1760.94f, 51.05f;
			}
			else
			{
				return 1286.5f, -1754.4f, 52f;
			}
			break;
		
		case 0x0000000F:
			if (bParam1 == 0x00000001)
			{
				return 1659.438f, 5.4271f, 165.1176f;
			}
			else
			{
				return 1658.621f, 6.7752f, 166.1676f;
			}
			break;
		
		case 0x00000010:
			if (bParam1 == 0x00000001)
			{
				return 1645.91f, 4866.72f, 40.98f;
			}
			else
			{
				return 1647.399f, 4865.839f, 41f;
			}
			break;
		
		case 0x00000011:
			return -1144.589f, -2004.452f, 12.3803f;
			break;
		
		case 0x00000012:
			if (bParam1 == 0x00000001)
			{
				return -1047.3f, -520.6f, 35f;
			}
			else
			{
				return -1048.32f, -521.2f, 35.14f;
			}
			break;
		
		case 0x00000013:
			if (bParam1 == 0x00000001)
			{
				return -1576.046f, -587.8257f, 33.97909f;
			}
			else
			{
				return -1576.817f, -586.3887f, 34.8528f;
			}
			break;
		
		case 0x00000014:
			if (bParam1 == 0x00000001)
			{
				return 953.44f, -123.42f, 73.35f;
			}
			else
			{
				return 954.5f, -121.34f, 74.18f;
			}
			break;
		
		case 0x00000015:
			if (bParam1 == 0x00000001)
			{
				return 1134.201f, -665.9413f, 56.08261f;
			}
			else
			{
				return 1135.401f, -663.7875f, 56.088f;
			}
			break;
		
		case 0x00000016:
			if (bParam1 == 0x00000001)
			{
				return -2196.198f, 248.9123f, 173.612f;
			}
			else
			{
				return -2195.029f, 250.4256f, 173.6017f;
			}
			break;
		
		case 0x00000017:
			return 29.2f, 3635.4f, 39.8f;
			break;
		
		case 0x00000018:
			if (bParam1 == 0x00000001)
			{
				return 1724.429f, 3299.023f, 40.2235f;
			}
			else
			{
				return 1721.96f, 3300.464f, 40.3835f;
			}
			break;
		
		case 0x00000019:
			if (bParam1 == 0x00000001)
			{
				return 2617.321f, 3659.452f, 100.3867f;
			}
			else
			{
				return 2612.712f, 3662.564f, 101.1074f;
			}
			break;
		
		case 0x0000001A:
			return -459.9625f, 1101.076f, 328.0211f;
			break;
		
		case 0x0000001B:
			if (bParam1 == 0x00000001)
			{
				return 2432.607f, 4994.333f, 45.25828f;
			}
			else
			{
				return 2430.906f, 4995.561f, 45.2685f;
			}
			break;
		
		case 0x0000001C:
			if (bParam1 == 0x00000001)
			{
				return 3722.456f, 4521.837f, 20.39456f;
			}
			else
			{
				return 3724.5f, 4524.5f, 21.6f;
			}
			break;
		
		case 0x0000001D:
			if (bParam1 == 0x00000001)
			{
				return -446.9024f, 5997.598f, 30.3407f;
			}
			else
			{
				return -446.045f, 6000.882f, 31.9163f;
			}
			break;
		
		case 0x0000001E:
			return 3291.4f, 5192.5f, 18.4f;
			break;
		
		case 0x0000001F:
			if (bParam1 == 0x00000001)
			{
				return 390.81f, -1436.07f, 28.45f;
			}
			else
			{
				return 388.7f, -1434.3f, 29.8f;
			}
			break;
		
		case 0x00000020:
			return -445.26f, -442.49f, 32.26f;
			break;
		
		case 0x00000021:
			if (bParam1)
			{
				return -1501.46f, 858.17f, 180.59f;
			}
			else
			{
				return -1500.08f, 857.59f, 180.59f;
			}
			break;
		
		case 0x00000022:
			return 2822.2f, -741.4f, 1.8f;
			break;
		
		case 0x00000023:
			if (bParam1 == 0x00000001)
			{
				return -3166.978f, 1102.622f, 19.80827f;
			}
			else
			{
				return -3165.613f, 1102.24f, 19.8928f;
			}
			break;
		
		case 0x00000024:
			if (bParam1 == 0x00000001)
			{
				return 1842.882f, 3670.457f, 32.68f;
			}
			else
			{
				return 1841.114f, 3675.253f, 34.086f;
			}
			break;
		
		case 0x00000025:
			if (bParam1 == 0x00000001)
			{
				return 1828.794f, 2605.504f, 44.61582f;
			}
			else
			{
				return 1830.535f, 2603.828f, 45.7491f;
			}
			break;
		
		case 0x00000026:
			if (bParam1 == 0x00000001)
			{
				return -32.61f, -1089.67f, 25.42f;
			}
			else
			{
				return -40.0528f, -1084.016f, 26.6224f;
			}
			break;
		
		case 0x00000027:
			if (bParam1 == 0x00000001)
			{
				return 1439.012f, 6336.812f, 22.96477f;
			}
			else
			{
				return 1445.544f, 6334.057f, 23.975f;
			}
			break;
		
		case 0x00000028:
			if (bParam1 == 0x00000001)
			{
				return -782.5126f, -1352.245f, 8.0001f;
			}
			else
			{
				return -784.4851f, -1351.364f, 8.1001f;
			}
			break;
		
		case 0x00000029:
			if (bParam1 == 0x00000001)
			{
				return 962.8806f, -1826.419f, 30.07195f;
			}
			else
			{
				return 963.1673f, -1831.149f, 36.2055f;
			}
			break;
		
		case 0x0000002A:
			if (bParam1 == 0x00000001)
			{
				return -1246.155f, -1531.647f, 3.2962f;
			}
			else
			{
				return -1246.494f, -1533.677f, 4.5262f;
			}
			break;
		
		case 0x0000002B:
			if (bParam1 == 0x00000001)
			{
				return -765.5466f, 698.8101f, 143.3693f;
			}
			else
			{
				return -761.1058f, 701.9452f, 145.05f;
			}
			break;
		
		case 0x0000002C:
			if (bParam1 == 0x00000001)
			{
				return -512.1094f, 28.86313f, 43.6153f;
			}
			else
			{
				return -513.4391f, 30.9069f, 43.9018f;
			}
			break;
		
		case 0x0000002D:
			if (bParam1 == 0x00000001)
			{
				return 781.3839f, 1292.073f, 359.2997f;
			}
			else
			{
				return 780.3879f, 1295.705f, 361.6941f;
			}
			break;
		
		case 0x0000002E:
			return 208.69f, 337.76f, 104.64f;
			break;
		
		case 0x0000002F:
			if (bParam1 == 0x00000001)
			{
				return -1889.99f, 2078.38f, 140f;
			}
			else
			{
				return -1890.24f, 2073.26f, 140.11f;
			}
			break;
		
		case 0x00000030:
			return 153.6156f, -3073.998f, 4.8962f;
			break;
		
		case 0x00000031:
			if (bParam1)
			{
				return -306.2449f, -1180.538f, 22.711f;
			}
			else
			{
				return -304.0894f, -1180.886f, 23.9493f;
			}
			break;
		
		case 0x00000032:
			return -2006.987f, -556.4998f, 11.8813f;
			break;
		
		case 0x00000033:
			if (bParam1 == 0x00000001)
			{
				return -590.2079f, -289.8196f, 40.68631f;
			}
			else
			{
				return -588.1934f, -290.4782f, 43.7101f;
			}
			break;
		
		case 0x00000034:
			return -1795.826f, -855.7111f, 8.2048f;
			break;
		
		case 0x00000035:
			return -1557.108f, -1155.246f, 2.9158f;
			break;
		
		case 0x00000036:
			if (bParam1 == 0x00000001)
			{
				return -1470.71f, -1389.33f, 1.58f;
			}
			else
			{
				return -1467.483f, -1387.507f, 3.1432f;
			}
			break;
		
		case 0x00000037:
			return -684.8126f, -180.648f, 48.02f;
			break;
		
		case 0x00000038:
			if (bParam1 == 0x00000001)
			{
				return -1311.413f, 640.1154f, 136.9244f;
			}
			else
			{
				return -1307.062f, 641.4211f, 138.0582f;
			}
			break;
		
		case 0x00000039:
			return 2493.686f, 4963.541f, 43.7358f;
			break;
		
		case 0x0000003A:
			if (bParam1 == 0x00000001)
			{
				return 1392.76f, 3602.94f, 33.98f;
			}
			else
			{
				return 1392.609f, 3605.799f, 34.9939f;
			}
			break;
		
		case 0x0000003B:
			if (bParam1 == 0x00000001)
			{
				return -527.33f, 5295.7f, 73.17f;
			}
			else
			{
				return -535.4436f, 5297.496f, 76.3891f;
			}
			break;
		
		case 0x0000003C:
			if (bParam1 == 0x00000001)
			{
				return -564.26f, 5353.13f, 69.23f;
			}
			else
			{
				return -551.5837f, 5349.404f, 75.253f;
			}
			break;
		
		case 0x0000003D:
			if (bParam1 == 0x00000001)
			{
				return 3.18f, -1827.1f, 24.22f;
			}
			else
			{
				return 0.1911f, -1825.905f, 24.3295f;
			}
			break;
		
		case 0x0000003E:
			if (bParam1 == 0x00000001)
			{
				return 62.25f, 3681.06f, 38.84f;
			}
			else
			{
				return 63.8867f, 3683.49f, 39.1543f;
			}
			break;
		
		case 0x0000003F:
			return 155.384f, -741.179f, 258.6519f;
			break;
		
		case 0x00000040:
			if (bParam1 == 0x00000001)
			{
				return 126.61f, -1206.29f, 28.3f;
			}
			else
			{
				return 124.265f, -1205.882f, 28.2951f;
			}
			break;
		
		case 0x00000041:
			return 27.449f, -625.31f, 15.462f;
			break;
		
		case 0x00000042:
			if (bParam1 == 0x00000001)
			{
				return -129.04f, -662.04f, 39.51f;
			}
			else
			{
				return -129.0374f, -659.2689f, 41.0016f;
			}
			break;
		
		case 0x00000043:
			if (bParam1)
			{
				return 1138.62f, -1598.56f, 33.69f;
			}
			else
			{
				return 1138.63f, -1596.61f, 35.07f;
			}
			break;
		
		case 0x00000044:
			if (bParam1)
			{
				return 1149.68f, -1525.56f, 33.84f;
			}
			else
			{
				return 1147.55f, -1527.83f, 36.01f;
			}
			break;
		
		case 0x00000045:
			if (bParam1)
			{
				return 297.48f, -1448.79f, 28.97f;
			}
			else
			{
				return 296.44f, -1450.75f, 30.4f;
			}
			break;
		
		case 0x00000046:
			if (bParam1)
			{
				return 324.21f, -1392.68f, 31.51f;
			}
			else
			{
				return 322.27f, -1393.75f, 32.79f;
			}
			break;
		
		case 0x00000047:
			if (bParam1)
			{
				return 293.2f, -597.92f, 42.28f;
			}
			else
			{
				return 294.3f, -598.1f, 43.73f;
			}
			break;
		
		case 0x00000048:
			if (bParam1)
			{
				return 358f, -592.66f, 27.79f;
			}
			else
			{
				return 357.07f, -590.63f, 29.08f;
			}
			break;
		
		case 0x00000049:
			if (bParam1)
			{
				return -495.45f, -326.18f, 33.5f;
			}
			else
			{
				return -496.4f, -324.7f, 34.75f;
			}
			break;
		
		case 0x0000004A:
			if (bParam1)
			{
				return -450.91f, -351.93f, 33.5f;
			}
			else
			{
				return -449.82f, -353.49f, 34.75f;
			}
			break;
		
		case 0x0000004B:
			return -2258.833f, 323.9413f, 184.9015f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_33()
{
	func_34(0x00000000, 0f, 0f, 0f, 0x00000001);
	func_34(0x00000001, 0f, 0f, 0f, 0x00000001);
	func_34(0x00000002, 0f, 0f, 0f, 0x00000001);
	func_34(0x00000003, 0f, 0f, 0f, 0x00000001);
	func_34(0x00000004, 0f, 0f, 0f, 0x00000001);
	func_34(0x00000005, 0f, 0f, 0f, 0x00000001);
	func_34(0x00000006, 0f, 0f, 0f, 0x00000001);
	func_34(0x00000007, 0f, 0f, 0f, 0x00000001);
	func_34(0x00000008, 0f, 0f, 0f, 0x00000001);
	func_34(0x00000009, 0f, 0f, 0f, 0x00000001);
	func_34(0x0000000A, 0f, 0f, 0f, 0x00000001);
	func_34(0x0000000B, 0f, 0f, 0f, 0x00000001);
	func_34(0x0000000C, 0f, 0f, 0f, 0x00000001);
	func_34(0x0000000D, 0f, 0f, 0f, 0x00000001);
	func_34(0x0000000E, 0f, 0f, 0f, 0x00000001);
	func_34(0x0000000F, 0f, 0f, 0f, 0x00000001);
	func_34(0x00000010, 0f, 0f, 0f, 0x00000001);
	func_34(0x00000011, 0f, 0f, 0f, 0x00000001);
	func_34(0x00000012, 0f, 0f, 0f, 0x00000001);
}

void func_34(int iParam0, vector3 vParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000008);
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
	}
	iLocal_21[iParam0] = unk_0x2D7B5CDDF12654D2(joaat("pickup_weapon_petrolcan"), func_35(iParam0), vParam1, iVar0, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
	unk_0x920814FE8940D940(iLocal_21[iParam0], 0x000927C0);
}

Vector3 func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 818.7551f, -1027.429f, 25.4043f;
			break;
		
		case 0x00000001:
			return -1804.566f, 794.3649f, 137.6856f;
			break;
		
		case 0x00000002:
			return 264.9156f, 2606.013f, 43.8688f;
			break;
		
		case 0x00000003:
			return 1183.304f, -330.2197f, 68.1744f;
			break;
		
		case 0x00000004:
			return 289.336f, -1272.139f, 28.4408f;
			break;
		
		case 0x00000005:
			return -723.6323f, -936.4893f, 18.2141f;
			break;
		
		case 0x00000006:
			return -70.3154f, -1760.289f, 28.539f;
			break;
		
		case 0x00000007:
			return 157.897f, -1562.516f, 28.2619f;
			break;
		
		case 0x00000008:
			return 172.5852f, 6601.821f, 30.8682f;
			break;
		
		case 0x00000009:
			return 1195.646f, -1396.04f, 34.2207f;
			break;
		
		case 0x0000000A:
			return -1437.595f, -282.2951f, 45.3922f;
			break;
		
		case 0x0000000B:
			return -2073.707f, -322.7324f, 12.3162f;
			break;
		
		case 0x0000000C:
			return -2558.856f, 2333.536f, 32.2575f;
			break;
		
		case 0x0000000D:
			return 1691.234f, 4928.919f, 41.2317f;
			break;
		
		case 0x0000000E:
			return 43.4899f, 2773.512f, 56.8786f;
			break;
		
		case 0x0000000F:
			return 1042.862f, 2667.426f, 38.7f;
			break;
		
		case 0x00000010:
			return 2668.929f, 3260.676f, 54.2403f;
			break;
		
		case 0x00000011:
			return 2002.737f, 3772.756f, 31.4059f;
			break;
		
		case 0x00000012:
			return 1703.254f, 6415.81f, 31.7642f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_36()
{
	func_37(0x00000000, 0f, 0f, 6f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000001, 0f, 0f, 78f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000002, 90f, 0f, 2f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000003, 0f, 0f, 330f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000004, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000005, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000006, 0f, 0f, 6f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000007, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000008, 90f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000);
	func_37(0x00000009, 0f, 0f, 46f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x0000000A, 90f, 0f, 9f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x0000000B, -83.56f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000);
	func_37(0x0000000C, -102.96f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000);
	func_37(0x0000000D, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x0000000E, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x0000000F, 0f, 0f, 78f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000010, -90f, 0f, 145.4f, 0x00000000, 0x00000000, 0x00000000);
	func_37(0x00000011, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000012, 0f, 0f, 42f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000013, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000014, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000015, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000016, 0f, 0f, 3f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000017, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000018, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000019, 5f, 0f, -146f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x0000001A, 0f, 0f, 108f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x0000001B, 0f, 0f, 130f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x0000001C, -90f, 0f, -180f, 0x00000000, 0x00000001, 0x00000000);
	func_37(0x0000001D, 0f, 0f, 14f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x0000001E, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x0000001F, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000020, 0f, 0f, 5f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000021, 0f, 0f, 72f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000022, 0f, 0f, 27f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000023, 0f, 0f, 7f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000024, 0f, 0f, 7f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000025, 0f, 0f, 7f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000026, 0f, 0f, 7f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x00000027, -90f, 0f, -20f, 0x00000000, 0x00000001, 0x00000000);
	func_37(0x00000028, -90f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000);
	func_37(0x00000029, 0f, 0f, 7f, 0x00000001, 0x00000001, 0x00000000);
	func_37(0x0000002A, 0f, 0f, 7f, 0x00000001, 0x00000000, 0x00000000);
	func_37(0x0000002B, -92f, 0f, -18f, 0x00000000, 0x00000000, 0x00000000);
	func_37(0x0000002C, 90f, 0f, -108f, 0x00000000, 0x00000000, 0x00000000);
}

void func_37(int iParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
	unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
	if (bParam4)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000008);
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
	}
	iLocal_20[iParam0] = unk_0x2D7B5CDDF12654D2(joaat("pickup_armour_standard"), func_39(iParam0, 0x00000000), vParam1, iVar0, 0xFFFFFFFF, 0x00000002, 0x00000001, 0x00000000);
	unk_0x920814FE8940D940(iLocal_20[iParam0], 0x000927C0);
	if (bParam3)
	{
		unk_0x201D37E7F281A9D1(iLocal_20[iParam0], func_38(iParam0));
	}
}

char* func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000001C:
			return "PH_LOBBY_ROOM";
			break;
		
		case 0x00000027:
			return "V_FIB03_atr_off2";
			break;
		
		case 0x00000029:
			return "GtaMloRoomTun2";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

Vector3 func_39(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 473.1829f, -2643.184f, 4.7209f;
			break;
		
		case 0x00000001:
			if (bParam1 == 0x00000001)
			{
				return 291.41f, -2090.78f, 16.29f;
			}
			else
			{
				return 289.2062f, -2091.221f, 16.0234f;
			}
			break;
		
		case 0x00000002:
			if (bParam1 == 0x00000001)
			{
				return 1173.839f, -1499.781f, 33.84875f;
			}
			else
			{
				return 1173.566f, -1495.763f, 34.1121f;
			}
			break;
		
		case 0x00000003:
			if (bParam1 == 0x00000001)
			{
				return -461.7139f, -1699.202f, 17.85122f;
			}
			else
			{
				return -462f, -1701f, 18.8f;
			}
			break;
		
		case 0x00000004:
			return -1384.628f, -521.0416f, 30.084f;
			break;
		
		case 0x00000005:
			return -521.5692f, -601.7532f, 29.4482f;
			break;
		
		case 0x00000006:
			return -664.5f, 165.4552f, 58.3821f;
			break;
		
		case 0x00000007:
			return 329.3609f, -190.5986f, 53.2262f;
			break;
		
		case 0x00000008:
			if (bParam1 == 0x00000001)
			{
				return -477.44f, -1052.99f, 39.81f;
			}
			else
			{
				return -478.7744f, -1051.079f, 40.93f;
			}
			break;
		
		case 0x00000009:
			return -1268.071f, -1917.408f, 4.8583f;
			break;
		
		case 0x0000000A:
			return -1221.908f, -2771.762f, 13.0545f;
			break;
		
		case 0x0000000B:
			return -3088.668f, 652.9629f, 0.989f;
			break;
		
		case 0x0000000C:
			if (bParam1 == 0x00000001)
			{
				return -629.3048f, 2036.067f, 157.3307f;
			}
			else
			{
				return -627.2166f, 2035.032f, 157.5585f;
			}
			break;
		
		case 0x0000000D:
			if (bParam1 == 0x00000001)
			{
				return -2071.903f, 3411.504f, 30.36414f;
			}
			else
			{
				return -2048.483f, 3406.162f, 31.1504f;
			}
			break;
		
		case 0x0000000E:
			return -424.0321f, 4012.767f, 80.4744f;
			break;
		
		case 0x0000000F:
			return 1983.1f, 5174.5f, 47.6f;
			break;
		
		case 0x00000010:
			if (bParam1 == 0x00000001)
			{
				return 2341.1f, 2576f, 45.7f;
			}
			else
			{
				return 2340.17f, 2573.89f, 45.77f;
			}
			break;
		
		case 0x00000011:
			if (bParam1 == 0x00000001)
			{
				return 1663.9f, -25.91945f, 172.7747f;
			}
			else
			{
				return 1663.96f, -24.1101f, 172.7747f;
			}
			break;
		
		case 0x00000012:
			if (bParam1 == 0x00000001)
			{
				return 2614.451f, 1695.127f, 26.59907f;
			}
			else
			{
				return 2617.729f, 1693.417f, 30.8743f;
			}
			break;
		
		case 0x00000013:
			if (bParam1 == 0x00000001)
			{
				return -187.31f, 1545.16f, 314.07f;
			}
			else
			{
				return -187.0338f, 1555.677f, 321.2431f;
			}
			break;
		
		case 0x00000014:
			if (bParam1 == 0x00000001)
			{
				return 859.5025f, 2426.04f, 53.18517f;
			}
			else
			{
				return 868.7573f, 2423.536f, 60.8942f;
			}
			break;
		
		case 0x00000015:
			if (bParam1 == 0x00000001)
			{
				return -1822.075f, 805.7814f, 137.7265f;
			}
			else
			{
				return -1822.967f, 803.8147f, 138.2005f;
			}
			break;
		
		case 0x00000016:
			if (bParam1 == 0x00000001)
			{
				return -1852.922f, 2054.42f, 139.9841f;
			}
			else
			{
				return -1851.628f, 2053.836f, 139.9841f;
			}
			break;
		
		case 0x00000017:
			if (bParam1 == 0x00000001)
			{
				return -1075.515f, 4898.497f, 213.2767f;
			}
			else
			{
				return -1070.651f, 4898.934f, 213.2752f;
			}
			break;
		
		case 0x00000018:
			if (bParam1 == 0x00000001)
			{
				return 1301.56f, 4306.6f, 36.39f;
			}
			else
			{
				return 1300.1f, 4308.1f, 37.3f;
			}
			break;
		
		case 0x00000019:
			if (bParam1 == 0x00000001)
			{
				return -436.44f, 5983.5f, 30.49f;
			}
			else
			{
				return -437.94f, 5985.04f, 31.29f;
			}
			break;
		
		case 0x0000001A:
			if (bParam1 == 0x00000001)
			{
				return 1840.569f, 3693.77f, 33.2668f;
			}
			else
			{
				return 1838.577f, 3692.028f, 33.6172f;
			}
			break;
		
		case 0x0000001B:
			return 533.1f, -23.8f, 70.6f;
			break;
		
		case 0x0000001C:
			if (bParam1 == 0x00000001)
			{
				return 445.83f, -986.48f, 29.69f;
			}
			else
			{
				return 446.4f, -988.5f, 29.77f;
			}
			break;
		
		case 0x0000001D:
			return -1119.498f, -847.3371f, 18.6886f;
			break;
		
		case 0x0000001E:
			return 391.2f, -1603.9f, 28.38f;
			break;
		
		case 0x0000001F:
			return -890.8f, -2386.2f, 13.4f;
			break;
		
		case 0x00000020:
			if (bParam1 == 0x00000001)
			{
				return 282.75f, 953.05f, 209.95f;
			}
			else
			{
				return 284.7f, 954.2f, 210.1514f;
			}
			break;
		
		case 0x00000021:
			return -2003.115f, 544.7549f, 114.5077f;
			break;
		
		case 0x00000022:
			if (bParam1 == 0x00000001)
			{
				return -397.5786f, 1127.353f, 321.7291f;
			}
			else
			{
				return -386.8739f, 1142.42f, 321.5892f;
			}
			break;
		
		case 0x00000023:
			return -1521.811f, 1560.201f, 106.9392f;
			break;
		
		case 0x00000024:
			return 1391.945f, 3616.655f, 37.9259f;
			break;
		
		case 0x00000025:
			if (bParam1 == 0x00000001)
			{
				return 45.37f, -1911.45f, 20.79f;
			}
			else
			{
				return 40.5177f, -1910.727f, 20.9706f;
			}
			break;
		
		case 0x00000026:
			if (bParam1 == 0x00000001)
			{
				return 68.14f, 3749.36f, 38.73f;
			}
			else
			{
				return 70.3786f, 3755.605f, 38.7487f;
			}
			break;
		
		case 0x00000027:
			return 119.45f, -755.29f, 258.15f;
			break;
		
		case 0x00000028:
			if (bParam1 == 0x00000001)
			{
				return 156.35f, -1192.1f, 28.37f;
			}
			else
			{
				return 160.4134f, -1191.7f, 28.87f;
			}
			break;
		
		case 0x00000029:
			return 23.9296f, -633.9206f, 6.5084f;
			break;
		
		case 0x0000002A:
			if (bParam1 == 0x00000001)
			{
				return 31.67f, 6542.78f, 30.44f;
			}
			else
			{
				return 30.9162f, 6546.791f, 30.4058f;
			}
			break;
		
		case 0x0000002B:
			if (bParam1)
			{
				return 1333.057f, 4381.278f, 43.3703f;
			}
			else
			{
				return 1331.355f, 4392.887f, 44.012f;
			}
			break;
		
		case 0x0000002C:
			if (bParam1 == 0x00000001)
			{
				return -1147.31f, 4939.27f, 221.27f;
			}
			else
			{
				return -1149.392f, 4938.771f, 221.3682f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_40()
{
	func_22();
	func_21();
	func_20();
	func_19();
	if (iLocal_25)
	{
		func_18();
	}
	if (iLocal_28)
	{
		func_17();
	}
	if (iLocal_30)
	{
		func_16();
	}
	unk_0x10FAF14A60A0DBE1();
}

