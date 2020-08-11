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
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	if (unk_0x2EBF608FFE6CA406(0x00000052))
	{
		func_31();
	}
	if (unk_0x8A22C4C08282BF26(joaat("controller_races")) > 0x00000001)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (unk_0x8A22C4C08282BF26(joaat("initial")) > 0x00000000)
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_30();
	while (0x00000001)
	{
		if (func_27(0x00000009) || Global_175B0)
		{
			func_31();
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (func_25())
			{
				func_23();
				func_19();
				if (func_12() == 0x00000001)
				{
					switch (iLocal_28)
					{
						case 0x00000001:
							break;
						
						case 0x00000002:
							func_1();
							break;
						}
					}
				}
		}
		SYSTEM::WAIT(0x000003E8);
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (func_11(0x00000008))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (0x00000005 - 0x00000001))
		{
			iVar1 = func_10(iVar0);
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_1, iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618E.f_3, iVar0))
				{
					fVar2 = SYSTEM::VDIST2(func_9(unk_0xD803B885F5E47A62()), func_8(iVar1, 0x00000000));
					if (fVar2 > 43681f)
					{
						if (!func_7(iVar1))
						{
							if (!Global_1B3FC[iVar0])
							{
								func_3(iVar1);
								func_2(iVar1, 0x00000001, 0x00000001);
								unk_0x0674E58A79778E99(&(Global_1B416.f_618E.f_3), iVar0);
							}
							else if ((unk_0x1C0640BA9A7327B3() - Global_1B402[iVar0]) > 0x0000EA60)
							{
								Global_1B3FC[iVar0] = 0x00000000;
								Global_1B402[iVar0] = unk_0x1C0640BA9A7327B3();
								func_3(iVar1);
								func_2(iVar1, 0x00000001, 0x00000001);
								unk_0x0674E58A79778E99(&(Global_1B416.f_618E.f_3), iVar0);
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&(Global_1B416.f_618E.f_3), iVar0);
						}
					}
					else if (func_7(iVar1))
					{
						func_2(iVar1, 0x00000000, 0x00000001);
					}
				}
				else if (!func_7(iVar1))
				{
					if (!Global_1B3FC[iVar0])
					{
						func_3(iVar1);
						func_2(iVar1, 0x00000001, 0x00000001);
					}
					else if ((unk_0x1C0640BA9A7327B3() - Global_1B402[iVar0]) > 0x0000EA60)
					{
						Global_1B3FC[iVar0] = 0x00000000;
						Global_1B402[iVar0] = unk_0x1C0640BA9A7327B3();
						func_3(iVar1);
						func_2(iVar1, 0x00000001, 0x00000001);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_2(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x0000000F);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000000))
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
		if (Global_79A7 == 0x00000001)
		{
			Global_79A8 = 0x00000001;
		}
		Global_79A7 = 0x00000001;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000000);
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000F);
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000003);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000000);
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000F);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000000))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13))
		{
			unk_0xCD816869CA451988(0x00000001);
			unk_0x142CC44DB769B57E(&(Global_79AA[iVar0 /*23*/].f_13));
			unk_0xCD816869CA451988(0x00000000);
		}
	}
}

void func_3(int iParam0)
{
	func_6(iParam0, 0x00000000, 0x00000000);
	func_5(iParam0, 0x00000001);
	func_4(iParam0, 0x00000001);
}

void func_4(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000004))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000004);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000004);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_5(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000005))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000005);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000005);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000006))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000006);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000006);
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000B);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000B);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

bool func_7(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0x00000000;
	}
	return unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13);
}

Vector3 func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0f, 0f, 0f;
	}
	return Global_79AA[iVar0 /*23*/][iParam1 /*3*/];
}

Vector3 func_9(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000056;
			break;
		
		case 0x00000001:
			return 0x00000057;
			break;
		
		case 0x00000002:
			return 0x00000058;
			break;
		
		case 0x00000003:
			return 0x00000059;
			break;
		
		case 0x00000004:
			return 0x0000005A;
			break;
	}
	return 0x00000056;
}

bool func_11(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[0x00000000], iParam0);
}

int func_12()
{
	func_13();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_13()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_17(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_16(unk_0x16F2683693E537C9());
			if (func_15(iVar0) && (!func_14(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_15(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_14(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_15(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_17(int iParam0)
{
	if (func_15(iParam0))
	{
		return func_18(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_18(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_19()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (func_11(0x00000007))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (0x00000004 - 0x00000001))
		{
			iVar1 = func_22(iVar0);
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_618B.f_2, iVar0))
			{
				fVar2 = SYSTEM::VDIST2(func_9(unk_0xD803B885F5E47A62()), func_8(iVar1, 0x00000000));
				if (fVar2 > 43681f)
				{
					if (!func_7(iVar1))
					{
						if (!Global_1B3F2[iVar0])
						{
							func_3(iVar1);
							func_2(iVar1, 0x00000001, 0x00000001);
							unk_0x0674E58A79778E99(&(Global_1B416.f_618B.f_2), iVar0);
						}
						else if ((unk_0x1C0640BA9A7327B3() - Global_1B3F7[iVar0]) > 0x0000EA60)
						{
							Global_1B3F2[iVar0] = 0x00000000;
							Global_1B3F7[iVar0] = unk_0x1C0640BA9A7327B3();
							func_3(iVar1);
							func_2(iVar1, 0x00000001, 0x00000001);
							unk_0x0674E58A79778E99(&(Global_1B416.f_618B.f_2), iVar0);
						}
					}
				}
				else if (func_7(iVar1))
				{
					func_2(iVar1, 0x00000000, 0x00000001);
				}
			}
			else if (!func_7(iVar1))
			{
				if (!Global_1B3F2[iVar0])
				{
					func_3(iVar1);
					func_2(iVar1, 0x00000001, 0x00000001);
				}
				else if ((unk_0x1C0640BA9A7327B3() - Global_1B3F7[iVar0]) > 0x0000EA60)
				{
					Global_1B3F2[iVar0] = 0x00000000;
					Global_1B3F7[iVar0] = unk_0x1C0640BA9A7327B3();
					func_3(iVar1);
					func_2(iVar1, 0x00000001, 0x00000001);
				}
			}
			else if (!Global_1B416.f_618B)
			{
				if (iVar1 == 0x00000052)
				{
					func_21(0x00000052);
					func_20(0x00000041, 0x000003E8);
					Global_1B416.f_618B = 0x00000001;
				}
			}
			iVar0++;
		}
	}
}

void func_20(int iParam0, int iParam1)
{
	if (iParam0 == 0x000000EB || iParam0 == 0x00000000)
	{
		return;
	}
	Global_1B416.f_21A0[iParam0] = 0x00000001;
	Global_1B416.f_21A0.f_EC[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

void func_21(int iParam0)
{
	func_6(iParam0, 0x00000001, 0x00000000);
	func_5(iParam0, 0x00000001);
	func_4(iParam0, 0x00000001);
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000052;
			break;
		
		case 0x00000001:
			return 0x00000053;
			break;
		
		case 0x00000002:
			return 0x00000054;
			break;
		
		case 0x00000003:
			return 0x00000055;
			break;
	}
	return 0x00000052;
}

void func_23()
{
	switch (iLocal_28)
	{
		case 0x00000000:
			if (unk_0xD8A54335F18763BA() < 0x00000014 && unk_0xD8A54335F18763BA() >= 0x00000005)
			{
				func_24();
				iLocal_28 = 0x00000001;
			}
			else
			{
				iLocal_28 = 0x00000002;
			}
			break;
		
		case 0x00000001:
			if (unk_0xD8A54335F18763BA() >= 0x00000014 || unk_0xD8A54335F18763BA() < 0x00000005)
			{
				iLocal_28 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (unk_0xD8A54335F18763BA() < 0x00000014 && unk_0xD8A54335F18763BA() >= 0x00000005)
			{
				func_24();
				iLocal_28 = 0x00000001;
			}
			break;
	}
}

void func_24()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (0x00000005 - 0x00000001))
	{
		func_2(func_10(iVar0), 0x00000000, 0x00000000);
		iVar0++;
	}
}

int func_25()
{
	if (func_27(0x00000009))
	{
		return 0x00000000;
	}
	if (func_26())
	{
		return 0x00000000;
	}
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
	{
		return 0x00000000;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_26()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_27(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_28(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_28(int iParam0)
{
	return func_29(iParam0, Global_A1D7);
}

int func_29(int iParam0, int iParam1)
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

void func_30()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (0x00000004 - 0x00000001))
	{
		Global_1B3F2[iVar0] = 0x00000000;
		Global_1B3F7[iVar0] = unk_0x1C0640BA9A7327B3();
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= (0x00000005 - 0x00000001))
	{
		Global_1B3FC[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_31()
{
	unk_0x10FAF14A60A0DBE1();
}

