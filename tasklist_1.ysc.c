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
	var uLocal_18[3] = { 0, 0, 0 };
	int iLocal_19 = 0;
	var uLocal_20[3] = { 0, 0, 0 };
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
	if (unk_0x2EBF608FFE6CA406(0x00000002))
	{
		func_11();
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x000000FA);
		switch (iLocal_21)
		{
			case 0x00000000:
				if (uLocal_18[0x00000000])
				{
					StringCopy(&(Global_55A4[0x00000001 /*42*/]), "CL_C1A", 16);
					StringCopy(&(Global_55A4[0x00000001 /*42*/].f_4), "CL_C1A_BR", 16);
					Global_55A4[0x00000001 /*42*/].f_8 = 0x00000000;
					Global_55A4[0x00000001 /*42*/].f_9 = 0x00000002;
					StringCopy(&(Global_55A4[0x00000001 /*42*/].f_A[0x00000001 /*4*/]), "CL_C1A_J1", 16);
					Global_55A4[0x00000001 /*42*/].f_25[0x00000001] = 0x00000000;
					Global_55A4[0x00000001 /*42*/].f_20[0x00000001] = 0x00000003;
					Global_55A4[0x00000001 /*42*/].f_1B[0x00000001] = 0x00000000;
					StringCopy(&(Global_55A4[0x00000001 /*42*/].f_A[0x00000002 /*4*/]), "CL_C1A_J2", 16);
					Global_55A4[0x00000001 /*42*/].f_25[0x00000002] = 0x00000000;
					Global_55A4[0x00000001 /*42*/].f_20[0x00000002] = 0x00000003;
					Global_55A4[0x00000001 /*42*/].f_1B[0x00000002] = 0x00000000;
					iLocal_19 = 0x00000000;
					while (iLocal_19 < Global_55A4[0x00000001 /*42*/].f_20[0x00000001])
					{
						Global_7866[iLocal_19] = 0x00000000;
						Global_7862[iLocal_19] = 0x00000000;
						iLocal_19++;
					}
					func_4(0x00000001, 0x00000001, 0x00000001, 0x00000001);
					func_3("CL_ADDED", "CL_C1A", 0x00000BB8, 0x00000001);
					iLocal_21 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				iLocal_19 = 0x00000000;
				while (iLocal_19 < Global_55A4[0x00000001 /*42*/].f_20[0x00000001])
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (unk_0xC844350D5D58C99A(uLocal_20[iLocal_19]))
						{
							if (unk_0xEB6A8945D1AC98A1(uLocal_20[iLocal_19]))
							{
								if (unk_0xB87D13D0C064E9D1(uLocal_20[iLocal_19], unk_0x16F2683693E537C9(), 0x00000001))
								{
									if (!Global_7862[iLocal_19])
									{
										Global_55A4[0x00000001 /*42*/].f_1B[0x00000001]++;
										func_2("CL_C1A_J1", Global_55A4[0x00000001 /*42*/].f_1B[0x00000001], Global_55A4[0x00000001 /*42*/].f_20[0x00000001], 0x000007D0, 0x00000001);
										Global_7862[iLocal_19] = 0x00000001;
									}
									if (unk_0x437347B10A200C4B(uLocal_20[iLocal_19], 0x00000000))
									{
										if (!Global_7866[iLocal_19])
										{
											if (unk_0x468DA3FA89B1F574(uLocal_20[iLocal_19]) && func_1())
											{
												Global_55A4[0x00000001 /*42*/].f_1B[0x00000002]++;
												func_2("CL_C1A_J2", Global_55A4[0x00000001 /*42*/].f_1B[0x00000002], Global_55A4[0x00000001 /*42*/].f_20[0x00000002], 0x000007D0, 0x00000001);
												Global_7866[iLocal_19] = 0x00000001;
											}
										}
									}
									if (Global_55A4[0x00000001 /*42*/].f_1B[0x00000001] >= Global_55A4[0x00000001 /*42*/].f_20[0x00000001] && Global_55A4[0x00000001 /*42*/].f_1B[0x00000002] >= Global_55A4[0x00000001 /*42*/].f_20[0x00000002])
									{
										func_3("CL_COMPLETE", "CL_C1A", 0x00000BB8, 0x00000001);
										Global_55A4[0x00000001 /*42*/].f_8 = 0x00000001;
										iLocal_21 = 0x00000002;
									}
								}
							}
						}
					}
					iLocal_19++;
				}
				break;
			
			case 0x00000002:
				break;
		}
		SYSTEM::WAIT(0x000000FA);
		switch (iLocal_22)
		{
			case 0x00000000:
				if (uLocal_18[0x00000001])
				{
					StringCopy(&(Global_55A4[0x00000002 /*42*/]), "CL_C1B", 16);
					StringCopy(&(Global_55A4[0x00000002 /*42*/].f_4), "CL_C1B_BR", 16);
					Global_55A4[0x00000002 /*42*/].f_8 = 0x00000000;
					Global_55A4[0x00000002 /*42*/].f_9 = 0x00000003;
					StringCopy(&(Global_55A4[0x00000002 /*42*/].f_A[0x00000001 /*4*/]), "CL_C1B_J1", 16);
					Global_55A4[0x00000002 /*42*/].f_25[0x00000001] = 0x00000000;
					Global_55A4[0x00000002 /*42*/].f_20[0x00000001] = 0xFFFFFFFF;
					Global_55A4[0x00000002 /*42*/].f_1B[0x00000001] = 0xFFFFFFFF;
					StringCopy(&(Global_55A4[0x00000002 /*42*/].f_A[0x00000002 /*4*/]), "CL_C1B_J2", 16);
					Global_55A4[0x00000002 /*42*/].f_25[0x00000002] = 0x00000000;
					Global_55A4[0x00000002 /*42*/].f_20[0x00000002] = 0xFFFFFFFF;
					Global_55A4[0x00000002 /*42*/].f_1B[0x00000002] = 0xFFFFFFFF;
					StringCopy(&(Global_55A4[0x00000002 /*42*/].f_A[0x00000003 /*4*/]), "CL_C1B_J3", 16);
					Global_55A4[0x00000002 /*42*/].f_25[0x00000003] = 0x00000000;
					Global_55A4[0x00000002 /*42*/].f_20[0x00000003] = 0xFFFFFFFF;
					Global_55A4[0x00000002 /*42*/].f_1B[0x00000003] = 0xFFFFFFFF;
					func_4(0x00000088, 0x00000002, 0x00000001, 0x00000001);
					func_3("CL_ADDED", "CL_C1B", 0x00000BB8, 0x00000001);
					iLocal_22 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (!Global_55A4[0x00000002 /*42*/].f_25[0x00000001])
				{
				}
				if (!Global_55A4[0x00000002 /*42*/].f_25[0x00000002])
				{
				}
				if (!Global_55A4[0x00000002 /*42*/].f_25[0x00000003])
				{
				}
				if ((Global_55A4[0x00000002 /*42*/].f_25[0x00000001] == 0x00000001 && Global_55A4[0x00000002 /*42*/].f_25[0x00000002] == 0x00000001) && Global_55A4[0x00000002 /*42*/].f_25[0x00000003] == 0x00000001)
				{
					func_3("CL_COMPLETE", "CL_C1B", 0x00000BB8, 0x00000001);
					Global_55A4[0x00000002 /*42*/].f_8 = 0x00000001;
					iLocal_22 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				break;
		}
	}
}

int func_1()
{
	if (Global_5551)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0x12F275EDEEF63A2B(iParam3, 0x00000000);
}

void func_3(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x12F275EDEEF63A2B(iParam2, 0x00000000);
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_10())
	{
		return 0x00000000;
	}
	if (func_5(iParam0, iParam1, bParam2, iParam3) == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_5(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (unk_0x8A22C4C08282BF26(joaat("appsidetask")) > 0x00000000)
	{
		return 0x00000000;
	}
	if (func_8() == 0x00000000)
	{
		func_7();
		return 0x00000000;
	}
	func_6(Global_55A3);
	Global_564D[Global_55A3 /*9*/].f_1 = uParam1;
	Global_564D[Global_55A3 /*9*/] = uParam0;
	if (iParam3 == 0x00000000)
	{
	}
	else
	{
		Global_564D[Global_55A3 /*9*/].f_8 = iParam3;
	}
	if (bParam2)
	{
	}
	return 0x00000001;
}

void func_6(int iParam0)
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
	Global_564D[iParam0 /*9*/].f_2 = iVar0;
	Global_564D[iParam0 /*9*/].f_2.f_1 = iVar1;
	Global_564D[iParam0 /*9*/].f_2.f_2 = iVar2;
	Global_564D[iParam0 /*9*/].f_2.f_3 = iVar3;
	Global_564D[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_564D[iParam0 /*9*/].f_2.f_5 = iVar5;
}

void func_7()
{
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (Global_564D[iVar0 /*9*/].f_8 == 0x00000000)
		{
			Global_55A3 = iVar0;
			return 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	Global_55A3 = 0x00000003;
	Global_564D[Global_55A3 /*9*/].f_2 = 0xFFFFFFFF;
	Global_564D[Global_55A3 /*9*/].f_2.f_1 = 0x00000000;
	Global_564D[Global_55A3 /*9*/].f_2.f_2 = 0x00000000;
	Global_564D[Global_55A3 /*9*/].f_2.f_3 = 0x00000000;
	Global_564D[Global_55A3 /*9*/].f_2.f_5 = 0x0001869F;
	while (iVar0 < 0x00000002)
	{
		if (Global_564D[iVar0 /*9*/].f_8 == 0x00000000 || Global_564D[iVar0 /*9*/].f_8 == 0x00000001)
		{
			if (!func_9(Global_564D[iVar0 /*9*/].f_2, Global_564D[Global_55A3 /*9*/].f_2))
			{
				Global_55A3 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_55A3 == 0x00000003)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_9(struct<6> Param0, struct<6> Param1)
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

int func_10()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_11()
{
	unk_0x10FAF14A60A0DBE1();
}

