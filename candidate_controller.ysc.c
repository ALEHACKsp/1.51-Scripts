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
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	if (unk_0x2EBF608FFE6CA406(0x00000002))
	{
		func_18();
	}
	iVar0 = Global_A1B0;
	iVar1 = 0x0000000F;
	while (0x00000001)
	{
		if (Global_A1D7 != 0x0000000F)
		{
			if (Global_A1B2 != 0x00000000)
			{
				if (Global_A1B1 != 0xFFFFFFFF)
				{
					if (!unk_0x1727A44C562FBED2(Global_A1B2))
					{
						func_17(&Global_A1B1);
					}
				}
			}
		}
		if (Global_A1B0 > 0x00000000)
		{
			Global_A1B5 = 0x00000001;
			if (Global_A1B0 == iVar0)
			{
				iVar3 = 0x00000000;
				if (Global_A1B0 > 0x00000001)
				{
					iVar4 = 0x00000000;
					iVar4 = 0x00000000;
					while (iVar4 < Global_A1B0)
					{
						if (func_15(Global_A1B6[iVar4 /*4*/].f_2))
						{
							iVar2[iVar4] = 0x00000000;
						}
						else
						{
							iVar2[iVar4] = 0x00000001;
						}
						if (Global_A1B6[iVar4 /*4*/].f_1 == 0x00000007)
						{
							iVar2[iVar4] = 0x00000001;
						}
						iVar4++;
					}
					iVar5 = 0x00000000;
					iVar4 = 0x00000000;
					iVar4 = 0x00000000;
					while (iVar4 < (Global_A1B0 - 0x00000001))
					{
						if (!iVar2[iVar4 + 1])
						{
							if (Global_A1B6[iVar4 + 1 /*4*/].f_1 < Global_A1B6[iVar5 /*4*/].f_1)
							{
								iVar5 = iVar4 + 1;
							}
						}
						iVar4++;
					}
					iVar3 = iVar5;
					if (Global_A1B6[iVar3 /*4*/].f_2 == 0x0000000F)
					{
						iVar3 = 0xFFFFFFFF;
					}
					if (iVar3 != 0xFFFFFFFF)
					{
						if (!func_15(Global_A1B6[iVar3 /*4*/].f_2))
						{
							iVar3 = 0xFFFFFFFF;
						}
					}
				}
				if (iVar3 > 0xFFFFFFFF)
				{
					Global_A1B1 = Global_A1B6[iVar3 /*4*/];
					Global_A1B2 = Global_A1B6[iVar3 /*4*/].f_3;
					Global_A1D7 = Global_A1B6[iVar3 /*4*/].f_2;
					Global_A1B0 = 0x00000000;
					Global_A1B5 = 0x00000000;
				}
				else
				{
					Global_A1B0 = 0x00000000;
					Global_A1B5 = 0x00000000;
				}
			}
		}
		if (iVar1 != Global_A1D7)
		{
			if (iVar1 == 0x0000000F)
			{
				func_14(0x00000000);
			}
			if (Global_A1D7 == 0x0000000F)
			{
				func_14(0x00000001);
			}
			Global_A1B5 = 0x00000000;
			Global_914E = 0x00000001;
			if (Global_A1D7 != 0x00000005 && Global_A1D7 != 0x0000000F)
			{
				unk_0x4C7B0415764B64BA(0x00000008);
			}
			if (Global_A1D7 == 0x0000000F || Global_A1D7 == 0x00000006)
			{
				func_13(0x00000000);
			}
			else
			{
				func_13(0x00000001);
			}
			if (func_12(Global_A1D7))
			{
				if (!iLocal_20)
				{
					unk_0x428D9DCBB4E4492F(0x00000001);
					iLocal_20 = 0x00000001;
				}
			}
			else if (iLocal_20)
			{
				unk_0x428D9DCBB4E4492F(0x00000000);
				iLocal_20 = 0x00000000;
			}
		}
		iVar1 = Global_A1D7;
		iVar0 = Global_A1B0;
		Global_1ADF0 = func_1();
		Global_7943 = unk_0xDDD4A799D5B1FDA5();
		SYSTEM::WAIT(0x00000000);
	}
	Global_A1B5 = 0x00000000;
}

var func_1()
{
	var uVar0;
	
	func_11(&uVar0, unk_0x4460E481B9E33ADA());
	func_10(&uVar0, unk_0x8D199E381D262EEF());
	func_9(&uVar0, unk_0xD8A54335F18763BA());
	func_4(&uVar0, unk_0x972A296334C9D57B());
	func_3(&uVar0, unk_0x118229AD063C3C1D());
	func_2(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 <= 0x00000000)
	{
		return;
	}
	if (iParam1 > 0x000007FB || iParam1 < 0x000007BB)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x7C000000);
	if (iParam1 < 0x000007DB)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((0x000007DB - iParam1), 0x0000001A));
		*uParam0 |= 0x80000000;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 0x000007DB), 0x0000001A));
		*uParam0 = (*uParam0 - *uParam0 & 0x80000000);
	}
}

void func_3(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_4(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_8(*uParam0);
	iVar1 = func_6(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_5(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_5(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000)
	{
		iParam1 = 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000002:
		case 0x00000004:
		case 0x00000006:
		case 0x00000007:
		case 0x00000009:
		case 0x0000000B:
			return 0x0000001F;
			break;
		
		case 0x00000003:
		case 0x00000005:
		case 0x00000008:
		case 0x0000000A:
			return 0x0000001E;
			break;
		
		case 0x00000001:
			if ((iParam1 % 0x00000004) == 0x00000000)
			{
				if ((iParam1 % 0x00000064) != 0x00000000)
				{
					return 0x0000001D;
				}
				else if ((iParam1 % 0x00000190) == 0x00000000)
				{
					return 0x0000001D;
				}
			}
			return 0x0000001C;
			break;
	}
	return 0x0000001E;
}

var func_6(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_7(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_7(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_8(var uParam0)
{
	return uParam0 & 0x0000000F;
}

void func_9(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_10(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_11(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000007:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000D:
		case 0x0000000E:
		case 0x00000011:
		case 0x00000012:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_13(bool bParam0)
{
	if (!bParam0)
	{
		Global_1AEC8 = unk_0x1C0640BA9A7327B3() + 250;
	}
	Global_1AEC5 = bParam0;
}

void func_14(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000B)
		{
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		Global_E546[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F[iVar0];
		Global_E546.f_1F[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_B[iVar0];
		Global_E546.f_3E[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_16[iVar0];
		Global_E546.f_5D[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_21[iVar0];
		Global_E546.f_7C[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_2C[iVar0];
		Global_E546.f_9B[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_37[iVar0];
		Global_E546.f_BA[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_42[iVar0];
		Global_E546.f_D9[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_4D[iVar0];
		Global_E546.f_F8[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_58[iVar0];
		if (!bParam0)
		{
			Global_E546[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F[iVar0];
			Global_E546.f_1F[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_B[iVar0];
			Global_E546.f_3E[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_16[iVar0];
			Global_E546.f_5D[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_21[iVar0];
			Global_E546.f_7C[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_2C[iVar0];
			Global_E546.f_9B[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_37[iVar0];
			Global_E546.f_BA[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_42[iVar0];
			Global_E546.f_D9[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_4D[iVar0];
			Global_E546.f_F8[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_58[iVar0];
		}
		iVar0++;
	}
}

bool func_15(int iParam0)
{
	return func_16(iParam0, Global_A1D7);
}

int func_16(int iParam0, int iParam1)
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

void func_17(var uParam0)
{
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!*uParam0 == Global_A1B1)
	{
		*uParam0 = 0xFFFFFFFF;
		return;
	}
	*uParam0 = 0xFFFFFFFF;
	Global_A1B0 = 0x00000000;
	Global_A1B2 = 0x00000000;
	Global_A1D7 = 0x0000000F;
	Global_F045 = 0x00000000;
	Global_F046 = 0x00000000;
}

void func_18()
{
	func_17(&Global_A1B1);
	Global_A1B5 = 0x00000000;
	unk_0x10FAF14A60A0DBE1();
}

