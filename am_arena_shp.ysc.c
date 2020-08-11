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
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<67> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	struct<2> Local_41 = { 0, 0 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 1;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	struct<34> Local_87 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_14 = 0xFFFFFFFF;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	if (unk_0x8CD06866876216F2())
	{
		func_52(ScriptParam_87);
	}
	else
	{
		func_50();
	}
	while (0x00000001)
	{
		func_49();
		if (Global_40001.f_5C10)
		{
			func_50();
		}
		if (func_38())
		{
			func_50();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = 0x00000000;
	if (Global_411248)
	{
		if (Global_41213B[iLocal_21 /*12*/].f_B)
		{
			func_35(iLocal_21);
			Global_41213B[iLocal_21 /*12*/].f_B = 0x00000000;
		}
	}
	if (Local_22.f_42.f_8)
	{
		func_17(Local_22.f_42);
	}
	if ((Local_22.f_42.f_2 == 0x00000001 && Global_411249) && func_16(&Local_22))
	{
		bVar0 = 0x00000001;
	}
	if (Global_411012[iLocal_21 /*85*/].f_42 == 0x7FFFFFFF && Local_22.f_42.f_C)
	{
		if (bVar0)
		{
			func_15(0x00000000);
		}
		func_50();
	}
	if (Local_22.f_42.f_12 > 0x00000000 && !func_14())
	{
		iVar2 = (0x000003E8 / SYSTEM::ROUND((unk_0x6117725E0134737F() * 1000f)));
		if ((unk_0xF4CCC8CB6DE7F1AE() - Local_22.f_42.f_12) > iVar2 * 10)
		{
			Local_22.f_42.f_12 = 0xFFFFFFFF;
		}
	}
	if (((func_13() && Local_22.f_42.f_2 == 0x00000001) && Local_22.f_42.f_D) && !Local_22.f_42.f_C)
	{
		if (unk_0xF4CCC8CB6DE7F1AE() - Local_22.f_42.f_E) >= func_12(Local_22.f_42.f_5)
		{
			iVar1 = 0x00000000;
			if (!unk_0x79B28160739BC9E6(func_11()) || unk_0xDD2EE1F5DA6A6AB0())
			{
				iVar1 = 0x00000001;
			}
			else if (Local_22.f_42.f_2 != 0x00000001)
			{
				iVar1 = 0x00000002;
			}
			else if (Local_22.f_42.f_5 != 0x00000001 && !unk_0x98212517C34835B2(&(Local_22.f_42), Local_22.f_42.f_6, Local_22.f_42.f_4, Local_22.f_42.f_7, Local_22.f_42.f_1, Local_22.f_42.f_A))
			{
				iVar1 = 0x00000003;
			}
			else if (!unk_0x80C74F9931DCF063(Local_22.f_42))
			{
				iVar1 = 0x00000004;
			}
			else
			{
				Local_22.f_42.f_C = 0x00000001;
				Global_411012[iLocal_21 /*85*/].f_42.f_C = 0x00000001;
				Global_411012[iLocal_21 /*85*/].f_42 = Local_22.f_42;
			}
			if (iVar1 != 0x00000000)
			{
				func_7(iLocal_21);
				func_50();
			}
		}
	}
	if (!iLocal_86)
	{
		if (bVar0)
		{
			func_5(&Local_41, 0x00000000);
			iLocal_86 = 0x00000001;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_41.f_1), "HUD_TRANSP", 64);
		func_2(&Local_41, func_4(&Local_41));
	}
	else
	{
		iLocal_86 = 0x00000000;
		func_15(0x00000000);
	}
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == 0x00000001)
	{
		*uParam0 = 0x00000000;
		func_3(uParam0);
	}
	if (*uParam0 == 0x00000000)
	{
		if (uParam0->f_24)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x6D99DF8263D35CE5(uParam0->f_21);
			unk_0x6D99DF8263D35CE5(uParam0->f_22);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_25)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x6D99DF8263D35CE5(uParam0->f_21);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_27)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_11));
			unk_0x6D99DF8263D35CE5(uParam0->f_21);
			unk_0x6D99DF8263D35CE5(uParam0->f_22);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_26)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_11));
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_28)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x164431059FF80580(uParam0->f_21, 0x00000046);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		*uParam0 = 0x00000001;
	}
	if (*uParam0 == 0x00000001)
	{
	}
}

void func_3(var uParam0)
{
	uParam0->f_23 = 0x00000000;
}

int func_4(var uParam0)
{
	return uParam0->f_23;
}

void func_5(var uParam0, bool bParam1)
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0x00000000);
	}
	uParam0->f_23 = 0x00000001;
}

void func_6(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_29 = 0x00000001;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_13())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_10(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_411012[iParam0 /*85*/].f_42);
		}
		func_8(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_8(var uParam0)
{
	uParam0->f_42 = 0x00000000;
	uParam0->f_42 = 0x7FFFFFFF;
	uParam0->f_42.f_1 = 0x00000000;
	uParam0->f_42.f_2 = 0x00000000;
	uParam0->f_42.f_3 = 0xA10AED30;
	uParam0->f_42.f_4 = 0x83B4A55B;
	uParam0->f_42.f_5 = 0x00000000;
	uParam0->f_42.f_6 = 0x492B4A93;
	uParam0->f_42.f_7 = 0xBABFD2A5;
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_D = 0x00000000;
	uParam0->f_2 = 0x00000000;
	func_9(&(uParam0->f_E));
	func_9(&(uParam0->f_E.f_D));
	StringCopy(&(uParam0->f_E.f_1A), "", 32);
	StringCopy(&(uParam0->f_E.f_22), "", 24);
	StringCopy(&(uParam0->f_E.f_28), "", 16);
	StringCopy(&(uParam0->f_E.f_2C), "", 32);
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_42.f_8 = 0x00000000;
	uParam0->f_42.f_9 = 0x00000000;
	uParam0->f_42.f_A = 0x00000000;
	uParam0->f_42.f_B = 0x00000000;
	uParam0->f_42.f_D = 0x00000000;
	uParam0->f_42.f_C = 0x00000000;
	uParam0->f_42.f_E = 0x00000000;
	uParam0->f_42.f_F = 0x00000000;
	uParam0->f_42.f_10 = 0x00000000;
	uParam0->f_42.f_12 = 0x00000000;
}

void func_9(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_9 = 0x00000000;
	uParam0->f_A = 0x00000000;
	uParam0->f_B = 0x00000000;
	uParam0->f_C = 0x00000000;
}

int func_10(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

var func_11()
{
	return Global_1407E9;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return Global_41124B;
			break;
		
		case 0x00000001:
			return Global_41124A;
			break;
	}
	return 0x00000000;
}

int func_13()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

bool func_14()
{
	return Global_181EC.f_15A > 0x00000000;
}

void func_15(bool bParam0)
{
	unk_0xBBCE9616B024A2BF();
	if (bParam0)
	{
		unk_0xA3B57116ADBCDF5F();
	}
}

int func_16(var uParam0)
{
	if (uParam0->f_42.f_4 == 0x79D2BE32)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_17(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<67> Var4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar1 = 0x00000000;
	bVar2 = 0x00000000;
	if (!func_13())
	{
		iVar1 = 0x00000001;
		Var0 = iParam0;
		Var0.f_2 = 0x00000000;
	}
	if (iVar1 || unk_0x218F818E64020C17(0x00000001, iParam0, &Var0, 0x00000007))
	{
		Var4.f_42 = 0x7FFFFFFF;
		iVar3 = func_34(Var0, &Var4);
		if (iVar3 != 0xFFFFFFFF)
		{
			Global_411012[iVar3 /*85*/].f_42.f_8 = 0x00000000;
			if (Global_411012[iVar3 /*85*/].f_42.f_12 == 0x00000000)
			{
				Global_411012[iVar3 /*85*/].f_42.f_12 = unk_0xF4CCC8CB6DE7F1AE();
			}
		}
		bVar5 = 0x00000001;
		if (iVar3 != 0xFFFFFFFF)
		{
			Global_411012[iVar3 /*85*/].f_42.f_11 = Var0.f_2;
		}
		else
		{
			Global_41123C.f_4 = Var0.f_2;
			Global_41123C.f_6 = Var0.f_3;
			Global_41123C.f_7 = Var0.f_4;
			Global_41123C.f_8 = Var0.f_5;
			Global_41123C.f_9 = Var0.f_6;
			if (Global_41123C.f_A == 0x00000000)
			{
				Global_41123C.f_A = unk_0xF4CCC8CB6DE7F1AE();
			}
		}
		switch (Var0.f_2)
		{
			case 0x00000000:
				if (iVar3 != 0xFFFFFFFF)
				{
					Global_41213B[iVar3 /*12*/] = Global_411012[iVar3 /*85*/].f_42.f_3;
					Global_41213B[iVar3 /*12*/].f_1 = Global_411012[iVar3 /*85*/].f_42.f_7;
					Global_41213B[iVar3 /*12*/].f_2 = Global_411012[iVar3 /*85*/].f_42.f_4;
					Global_41213B[iVar3 /*12*/].f_3 = Global_411012[iVar3 /*85*/].f_42.f_1;
					Global_41213B[iVar3 /*12*/].f_5 = Var0.f_1;
					Global_41213B[iVar3 /*12*/].f_6 = Var0.f_3;
					Global_41213B[iVar3 /*12*/].f_7 = Var0.f_4;
					Global_41213B[iVar3 /*12*/].f_8 = Var0.f_5;
					Global_41213B[iVar3 /*12*/].f_9 = Var0.f_6;
					Global_41213B[iVar3 /*12*/].f_B = 0x00000001;
					Global_411012[iVar3 /*85*/].f_42.f_2 = 0x00000002;
					if (Global_411012[iVar3 /*85*/].f_42.f_B & 0x00000004 != 0x00000000)
					{
						func_32(iVar3, bVar5);
					}
					else if (func_13())
					{
						if (bVar5)
						{
							unk_0x1D18B90CF9028441(Global_411012[iVar3 /*85*/].f_42, &uVar6);
						}
					}
				}
				break;
			
			default:
				if (iVar3 != 0xFFFFFFFF)
				{
					Global_411012[iVar3 /*85*/].f_42.f_2 = 0x00000003;
					if ((Global_411012[iVar3 /*85*/].f_42.f_B & 0x00000001 != 0x00000000 && Global_411012[iVar3 /*85*/].f_42.f_9 < 0x00000002) && func_31(Var0.f_2))
					{
						if (func_10(iVar3))
						{
							if (func_24())
							{
								Global_411012[iVar3 /*85*/].f_42.f_2 = 0x00000001;
								Global_411012[iVar3 /*85*/].f_42.f_9++;
							}
							else if (Global_411012[iVar3 /*85*/].f_42.f_B & 0x00000002 != 0x00000000)
							{
								Global_41125A = Global_411012[iVar3 /*85*/].f_42.f_4;
								Global_41125C = Global_411012[iVar3 /*85*/].f_42.f_6;
								Global_41125D = Var0.f_2;
								Global_41125B = Global_411012[iVar3 /*85*/].f_42.f_1;
								if (func_23(Global_41125A) && func_13())
								{
									if (!func_22(Global_411012[iVar3 /*85*/].f_42))
									{
										iVar7 = func_21();
										Global_411211[iVar7 /*7*/] = Global_411012[iVar3 /*85*/].f_42;
										Global_411211[iVar7 /*7*/].f_2 = Global_41125A;
										Global_411211[iVar7 /*7*/].f_3 = Global_41125C;
										Global_411211[iVar7 /*7*/].f_1 = Global_41125B;
										Global_411211[iVar7 /*7*/].f_4 = unk_0x2B6E0A53779D29EA();
									}
								}
								else
								{
									Global_411257 = 0x00000001;
								}
							}
						}
						else if (func_20(&iVar3))
						{
							Global_411012[iVar3 /*85*/].f_42.f_2 = 0x00000001;
							Global_411012[iVar3 /*85*/].f_42.f_9++;
						}
						else if (Global_411012[iVar3 /*85*/].f_42.f_B & 0x00000002 != 0x00000000)
						{
							Global_41125A = Global_411012[iVar3 /*85*/].f_42.f_4;
							Global_41125C = Global_411012[iVar3 /*85*/].f_42.f_6;
							Global_41125D = Var0.f_2;
							Global_41125B = Global_411012[iVar3 /*85*/].f_42.f_1;
							if (func_23(Global_41125A) && func_13())
							{
								if (!func_22(Global_411012[iVar3 /*85*/].f_42))
								{
									iVar8 = func_21();
									Global_411211[iVar8 /*7*/] = Global_411012[iVar3 /*85*/].f_42;
									Global_411211[iVar8 /*7*/].f_2 = Global_41125A;
									Global_411211[iVar8 /*7*/].f_3 = Global_41125C;
									Global_411211[iVar8 /*7*/].f_1 = Global_41125B;
									Global_411211[iVar8 /*7*/].f_4 = unk_0x2B6E0A53779D29EA();
								}
							}
							else
							{
								Global_411257 = 0x00000001;
							}
						}
					}
					else if (Global_411012[iVar3 /*85*/].f_42.f_B & 0x00000002 != 0x00000000)
					{
						Global_41125A = Global_411012[iVar3 /*85*/].f_42.f_4;
						Global_41125C = Global_411012[iVar3 /*85*/].f_42.f_6;
						Global_41125D = Var0.f_2;
						Global_41125B = Global_411012[iVar3 /*85*/].f_42.f_1;
						if ((func_23(Global_41125A) && func_13()) && func_31(Var0.f_2))
						{
							if (!func_22(Global_411012[iVar3 /*85*/].f_42))
							{
								iVar9 = func_21();
								Global_411211[iVar9 /*7*/] = Global_411012[iVar3 /*85*/].f_42;
								Global_411211[iVar9 /*7*/].f_2 = Global_41125A;
								Global_411211[iVar9 /*7*/].f_3 = Global_41125C;
								Global_411211[iVar9 /*7*/].f_1 = Global_41125B;
								Global_411211[iVar9 /*7*/].f_4 = unk_0x2B6E0A53779D29EA();
							}
						}
						else
						{
							Global_411257 = 0x00000001;
						}
					}
					if (Global_411012[iVar3 /*85*/].f_42.f_2 == 0x00000003)
					{
						if (bVar2)
						{
							func_19(0x00000001, Global_411012[iVar3 /*85*/].f_42.f_4);
							Global_411257 = 0x00000000;
						}
						if (Global_411012[iVar3 /*85*/].f_42.f_B & 0x00000004 != 0x00000000)
						{
							func_18(iVar3, Global_411012[iVar3 /*85*/].f_42.f_4, Global_411012[iVar3 /*85*/].f_42.f_A, Global_411012[iVar3 /*85*/].f_42.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 0x6597C63C:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0x00000000);
			break;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)
{
	Global_25952B = uParam1;
	Global_25952A = iParam0;
}

int func_20(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = 0x00000000;
	if (!func_13())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	if (*iParam0 == 0xFFFFFFFF || func_10(*iParam0))
	{
		return 0x00000000;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_11()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 0x00000001;
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (Global_411012[*iParam0 /*85*/].f_42.f_6 == 0x3FA29128 || Global_411012[*iParam0 /*85*/].f_42.f_6 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(Global_411012[*iParam0 /*85*/].f_42))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_411012[*iParam0 /*85*/].f_42.f_D = 0x00000001;
		Global_411012[*iParam0 /*85*/].f_42.f_C = 0x00000000;
		Global_411012[*iParam0 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
		if (bVar0)
		{
			if (*iParam0 != 0xFFFFFFFF)
			{
				Global_411012[*iParam0 /*85*/].f_42.f_8 = 0x00000001;
				Global_411012[*iParam0 /*85*/].f_42.f_C = 0x00000001;
			}
		}
		Global_411012[*iParam0 /*85*/].f_42.f_12 = 0x00000000;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_411211;
	iVar0 = 0x00000000;
	while (iVar0 <= (iVar2 - 0x00000001))
	{
		if (Global_411211[iVar0 /*7*/] != 0x00000000 && Global_411211[iVar0 /*7*/] != 0x7FFFFFFF)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0x00000000;
	}
	return iVar1;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_411211;
	if (iParam0 == 0x7FFFFFFF || iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 <= (iVar1 - 0x00000001))
	{
		if (Global_411211[iVar0 /*7*/] == iParam0)
		{
			return 0x00000001;
		}
		if (Global_411211[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_411211[iVar0 /*7*/].f_4 = unk_0x2B6E0A53779D29EA();
			Global_411211[iVar0 /*7*/].f_6 = 0x7FFFFFFF;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_23(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 0x6A22D039 || iParam0 == 0x862FB02E) || iParam0 == 0xA174F633) || iParam0 == 0x176D9D54) || iParam0 == 0xC2C5E339) || iParam0 == 0x3E7AA93E) || iParam0 == 0x21ECDA63) || iParam0 == 0xCCFA5F2D) || iParam0 == 0x328CD5AA) || iParam0 == 0xEE884170) || iParam0 == 0xFD2A7DE7) || iParam0 == 0x1B9AFE05) || iParam0 == 0x5C66709A) || iParam0 == 0xF9F62A7C) || iParam0 == 0x3EBB7442) || iParam0 == 0x8107BB89) || iParam0 == 0xB6D37A76) || iParam0 == 0xCBC91B24) || iParam0 == 0xD4E9820B) || iParam0 == 0x53E15D9D) || iParam0 == 0xA1DC5A42) || iParam0 == 0x46521174) || iParam0 == 0x370A42A5) || iParam0 == 0xED97AFC1) || iParam0 == 0x23F59C7C) || iParam0 == 0xFF3F6FB2) || iParam0 == 0xED74CC1D) || iParam0 == 0x33E1D8F6) || iParam0 == 0xC5ED889C) || iParam0 == 0xFFC0D962) || iParam0 == 0xB99C11F6) || iParam0 == 0x8DACDD38) || iParam0 == 0x32537662) || iParam0 == 0x7353182D) || iParam0 == 0x6E63A5AC) || iParam0 == 0x7D1FD84C) || iParam0 == 0x7462F9E7) || iParam0 == 0xBA16F44B) || iParam0 == 0x87DF725B) || iParam0 == 0xA2228687) || iParam0 == 0xC6B7C57F) || iParam0 == 0x43ADDE78) || iParam0 == 0x4B6A869C) || iParam0 == 0xDA2AD714) || iParam0 == 0x29849CDA) || iParam0 == 0x1A6CF069) || iParam0 == 0x180D054D) || iParam0 == 0xCB511DC2) || iParam0 == 0xC0925945) || iParam0 == 0xAD5032C1) || iParam0 == 0xD54402B0) || iParam0 == 0x43D5DFD2) || iParam0 == 0xDE8FA2AB) || iParam0 == 0x49F3549B) || iParam0 == 0x4A05F619) || iParam0 == 0xE285893D) || iParam0 == 0x314FB8B0) || iParam0 == 0x9145F938) || iParam0 == 0x653BCC2D) || iParam0 == 0x87B8E853) || iParam0 == 0x3F0A835A) || iParam0 == 0x6BEA24A6) || iParam0 == 0x1AE83BEC) || iParam0 == 0x3126BC47) || iParam0 == 0x4ABE30A4) || iParam0 == 0xA20EEA82) || iParam0 == 0x59E889DD) || iParam0 == 0x552534EE) || iParam0 == 0x8D9EE291) || iParam0 == 0x4B318D68) || iParam0 == 0x465B7057) || iParam0 == 0x545237BE) || iParam0 == 0x0F9590A2) || iParam0 == 0x87246378) || iParam0 == 0x6374FB50) || iParam0 == 0x86DA0F67) || iParam0 == 0xB703ED29) || iParam0 == 0xECF7C43F) || iParam0 == 0xE4315BE0) || iParam0 == 0x72CBE556) || iParam0 == 0x234B8864) || iParam0 == 0x7954FD0F) || iParam0 == 0x5D7FD908) || iParam0 == 0x48B92E52) || iParam0 == 0x7A3568F7) || iParam0 == 0x235376A5) || iParam0 == 0x69D9B7DA) || iParam0 == 0xCDCF2380)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_24()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = 0x00000000;
	if (!func_13())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	iVar2 = func_30();
	if (iVar2 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_11()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			if (func_29(Global_411012[iVar2 /*85*/].f_42.f_6, Global_411012[iVar2 /*85*/].f_42.f_4, Global_411012[iVar2 /*85*/].f_42.f_1) == 0x00000001)
			{
				Global_411258 = 0x00000001;
			}
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (Global_411012[iVar2 /*85*/].f_42.f_6 == 0x3FA29128 || Global_411012[iVar2 /*85*/].f_42.f_6 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	iVar3 = func_28(iVar2);
	if (iVar3 != 0x7FFFFFFF)
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar3))
		{
			Global_411012[iVar2 /*85*/].f_42.f_D = 0x00000001;
			Global_411012[iVar2 /*85*/].f_42.f_C = 0x00000000;
			Global_411012[iVar2 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
			if (bVar0)
			{
				Global_411012[iVar2 /*85*/].f_42.f_8 = 0x00000001;
				Global_411012[iVar2 /*85*/].f_42.f_C = 0x00000001;
			}
			Global_411012[iVar2 /*85*/].f_42.f_12 = 0x00000000;
			if (bVar0 || iVar1)
			{
				func_25(Global_411012[iVar2 /*85*/], iVar2);
			}
			Global_411249 = 0x00000001;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_25(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0x00000000)
	{
		return;
	}
	vVar0.f_2 = 0x7FFFFFFF;
	vVar0.x = 0x110AC69F;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_42 };
	vVar0.f_2.f_21 = iParam19;
	iVar1 = func_27(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_26();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_26()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_27(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_28(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42;
	}
	return 0xFFFFFFFF;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0xE62A3AA1 || iParam0 == 0x57DE404E)
	{
		switch (iParam1)
		{
			case 0x73AF3590:
				if (iParam2 >= 0x00002710)
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000000;
				}
				break;
			
			case 0xFE249573:
			case 0xEC745CB2:
			case 0x20D60B56:
			case 0x31D3FC9B:
			case 0x50503398:
			case 0xBE60A029:
				if (iParam2 >= 0x000003E8)
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000002;
				}
				break;
			
			case 0x762D6BF6:
				return 0x00000000;
				break;
			
			case 0x666D4B21:
			case 0xC2C5E339:
			case 0xACA75AAE:
			case 0x628502B3:
			case 0xFC8D0020:
			case 0xB77DD8B4:
			case 0xFD389995:
			case 0xEAFF75BD:
			case 0xC4F96E65:
			case 0x2195C3D1:
			case 0x676706D3:
			case 0x381AE70B:
			case 0xB94DDB9B:
			case 0x89AD02CE:
			case 0xBCD304B8:
			case 0xF97DB87A:
			case 0x129A5B6E:
			case 0xD89979EE:
			case 0x4D8C639E:
			case 0xA174F633:
			case 0x176D9D54:
			case 0x016B1CDE:
			case 0xBFCBE6B6:
			case 0x6A22D039:
			case 0x862FB02E:
			case 0x8D682613:
			case 0x4CBAC3AA:
			case 0x29358006:
			case 0x5841CC24:
			case 0x5A26EAEF:
			case 0x2183C4D7:
			case 0xF6C6F8D3:
			case 0xAEC77375:
			case 0x267CBC1B:
			case 0x2DC5587F:
			case 0x8A91E076:
			case 0x2AD8ED30:
			case 0x8B70731D:
			case 0x3530C574:
			case 0xAAF2EA7A:
			case 0x506A6AF5:
			case 0x60988977:
			case 0x74EC47CE:
			case 0x0C92ECEF:
			case 0xFC71898E:
			case 0x67878154:
			case 0xA87819A3:
			case 0x06A679FE:
			case 0x5AEF7C87:
			case 0x39B3A1A7:
			case 0x5E0B0A1C:
			case 0xC84D30CC:
			case 0xB8D124BE:
			case 0xF353DF93:
			case 0xCF63BF45:
			case 0x3E7AA93E:
			case 0x21ECDA63:
			case 0xCCFA5F2D:
			case 0x328CD5AA:
			case 0xFD2A7DE7:
			case 0xEE884170:
			case 0x1B9AFE05:
			case 0x5C66709A:
			case 0xD8630BC3:
			case 0x23C04B23:
			case 0x3EBB7442:
			case 0x8107BB89:
			case 0xB6D37A76:
			case 0x6F225978:
			case 0x0CD9EBA6:
			case 0xCBC91B24:
			case 0xD4E9820B:
			case 0x53E15D9D:
			case 0xA1DC5A42:
			case 0xFE5D3D39:
			case 0x46521174:
			case 0x370A42A5:
			case 0xED97AFC1:
			case 0x23F59C7C:
			case 0xFF3F6FB2:
			case 0xED74CC1D:
			case 0x33E1D8F6:
			case 0xC5ED889C:
			case 0xFFC0D962:
			case 0xB99C11F6:
			case 0x8DACDD38:
			case 0x32537662:
			case 0x7353182D:
			case 0x6E63A5AC:
			case 0x7D1FD84C:
			case 0x7462F9E7:
			case 0xBA16F44B:
			case 0x87DF725B:
			case 0xA2228687:
			case 0xC6B7C57F:
			case 0x43ADDE78:
			case 0x4B6A869C:
			case 0xDA2AD714:
			case 0x29849CDA:
			case 0x1A6CF069:
			case 0x180D054D:
			case 0xCB511DC2:
			case 0xC0925945:
			case 0xAD5032C1:
			case 0xD54402B0:
			case 0x43D5DFD2:
			case 0xDE8FA2AB:
			case 0x49F3549B:
			case 0x4A05F619:
			case 0xE285893D:
			case 0x314FB8B0:
			case 0x9145F938:
			case 0x653BCC2D:
			case 0x87B8E853:
			case 0x3F0A835A:
			case 0x6BEA24A6:
			case 0x1AE83BEC:
			case 0x3126BC47:
			case 0x4ABE30A4:
			case 0xA20EEA82:
			case 0x59E889DD:
			case 0x552534EE:
			case 0x8D9EE291:
			case 0x4B318D68:
			case 0x465B7057:
			case 0x545237BE:
			case 0x0F9590A2:
			case 0x87246378:
			case 0x6374FB50:
			case 0x86DA0F67:
				return 0x00000001;
				break;
			
			case 0x5A58E3BD:
			case 0x45F48C05:
			case 0xCA5E1B40:
			case 0xD86D0371:
			case 0x48090EBA:
			case 0xDB72FD6E:
			case 0xD80064A4:
			case 0x11611C06:
			case 0xB3E76D2C:
			case 0x2A6B291E:
			case 0xE7BA9A2C:
			case 0xD30E80F5:
			case 0x8F9E64E9:
			case 0x7323DAB3:
			case 0x3F79E8B3:
			case 0xF54343EF:
			case 0x7F096F7D:
			case 0x10E398B4:
			case 0x421452FF:
			case 0xCBBC5D1E:
			case 0x040E0F34:
				return 0x00000002;
				break;
			
			default:
				return 0x00000000;
				break;
		}
		switch (iParam1)
		{
			case 0xECF7C43F:
			case 0xE4315BE0:
			case 0x72CBE556:
			case 0x234B8864:
			case 0x7954FD0F:
			case 0x5D7FD908:
			case 0xB703ED29:
			case 0x48B92E52:
			case 0x7A3568F7:
			case 0x235376A5:
			case 0xCDCF2380:
				return 0x00000001;
			
			case 0x69D9B7DA:
				return 0x00000002;
				break;
		}
	}
	else if ((iParam0 == 0xBC5B83BA || iParam0 == 0x372897DD) || iParam0 == 0xA14400BE)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_28(iVar0) != 0x7FFFFFFF)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_31(int iParam0)
{
	if ((iParam0 >= 0x000001F4 && iParam0 <= 0x00000257) || iParam0 == 0x00000198)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_32(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	unk_0x7A87D9FAFCB10ADC(func_28(iParam0));
	if (Global_411012[iParam0 /*85*/].f_42.f_A == 0x00000001)
	{
	}
	else if (Global_411012[iParam0 /*85*/].f_42.f_A == 0x00000004)
	{
		bVar0 = 0x00000001;
	}
	else if (Global_411012[iParam0 /*85*/].f_42.f_A == 0x00000002)
	{
		bVar1 = 0x00000001;
	}
	switch (Global_411012[iParam0 /*85*/].f_42.f_4)
	{
		case 0x25A6481F:
			unk_0x39CD4F3FBE26D45B(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 0xF54343EF:
			unk_0xAB3CCBD224F88BA8(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E), bVar1, bVar0);
			break;
		
		case 0x040E0F34:
			unk_0xA30EA38144B3C88C(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], &(Global_411012[iParam0 /*85*/].f_E), bVar1, bVar0);
			break;
		
		case 0xC571DB3D:
			unk_0x111D9D61331BF845(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 0x1B14F96B:
			unk_0xB39DD8D66E65AB2A(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, Global_411012[iParam0 /*85*/].f_2, bVar0);
			break;
		
		case 0xA174F633:
			unk_0xF0BDBC17AD7AA68A(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), &(Global_411012[iParam0 /*85*/].f_E.f_22));
			break;
		
		case 0x26C85CA3:
			unk_0x0C123A45910161F5(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 0x62A4B6CC:
			unk_0x720F06601D6A3D91(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E), bVar1, bVar0);
			break;
		
		case 0x467E2916:
			unk_0x9A5DFC6851A069B1(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 0x2195C3D1:
			unk_0x42507720ABD2E3DB(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x73AF3590:
			unk_0xA63FA0129D34AA99(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), bVar1, bVar0);
			break;
		
		case 0xAD32107E:
			unk_0xA63FA0129D34AA99(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), bVar1, bVar0);
			break;
		
		case 0xE13B1F5A:
			unk_0x7CAD30CCC63BF1EB(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 0xACA75AAE:
			unk_0x045C859ACF224811(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_22));
			break;
		
		case 0x79D2BE32:
			unk_0x7FA34B11E2FA5AE3(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 0x108CD6EE:
			unk_0xA10182A479573A30(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 0xBFCBE6B6:
			unk_0x478F5BB792BA9EE0(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_22), 0xFFFFFFFF);
			break;
		
		case 0xFA3E19A3:
			unk_0x82910C1B770BE0D2(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 0x2C41A631:
			unk_0x516FAA390D131925(Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x7A31F111:
			unk_0x2DDA9F27020A3199(Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x978B277B:
			unk_0x89426D1648CBE232(Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x25CFCEFF:
			unk_0x6C2E7021DF2545F7(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 0xC2C5E339:
			unk_0xFDC65A7AB2E4C168(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A));
			break;
		
		case 0xFD2A7DE7:
			unk_0x4D6E04834D849B43(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A));
			break;
		
		case 0x11611C06:
			unk_0xA4F4B39459FDE0FD(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], 0x0000000E, 0x00000001, bVar1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x00000000, 0x00000000, 0x00000000, bVar0);
			break;
		
		case 0x601646D2:
			unk_0x007780E78643FBFA(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 0xC4F96E65:
			unk_0x94E33A9479106442(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E), &(Global_411012[iParam0 /*85*/].f_E.f_D), 0x00000001);
			break;
		
		case 0x506A6AF5:
			unk_0x1A60C32FB1BCE2C8(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0xFE249573:
		case 0xEC745CB2:
		case 0x20D60B56:
		case 0x31D3FC9B:
			unk_0x74342D5B553E1DFB(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0xB94DDB9B:
			unk_0xA2CF14803B9069FC(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x676706D3:
			unk_0xDACD1EB0C24D33AC(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x9DEFCB5B:
			unk_0x57050D488B359913(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 0xDD16A585:
			unk_0x0637A4F2922611B2(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 0x2D80114E:
			unk_0xE1D92C288D286562(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 0x6E53C312:
			unk_0x57050D488B359913(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 0x810E1BBE:
			unk_0xC939BD4F5FD7E665(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], bVar1, bVar0);
			break;
		
		case 0x73BA02A6:
			unk_0x65C09F8D6A9B310C(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], bVar1, bVar0);
			break;
		
		case 0x6F6E2AEA:
			unk_0x776C9C3A04B65D9A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 0xEBECC7F6:
			unk_0x776C9C3A04B65D9A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 0xABCC04E3:
			unk_0x776C9C3A04B65D9A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 0x24D87C9E:
			unk_0x776C9C3A04B65D9A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 0x3A732240:
			unk_0x776C9C3A04B65D9A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 0x4CBAC3AA:
		case 0x29358006:
		case 0x5841CC24:
		case 0x5A26EAEF:
		case 0x2183C4D7:
		case 0xF6C6F8D3:
		case 0xAEC77375:
		case 0x267CBC1B:
		case 0x2DC5587F:
		case 0x8A91E076:
		case 0x2AD8ED30:
		case 0x8B70731D:
		case 0x3530C574:
		case 0xAAF2EA7A:
		case 0xD8630BC3:
		case 0xBE60A029:
			unk_0x70C6C7E43DEB92C4(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_28), &(Global_411012[iParam0 /*85*/].f_E.f_2C), bVar1);
			break;
		
		case 0x129A5B6E:
			unk_0x661D2111769889E2(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x8D682613:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case 0x862FB02E:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case 0x6A22D039:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case 0x61F840EB:
			unk_0x6C5C42DFA8BC6886(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 0x6DA50854:
			unk_0x6BCFB59E6D5AD205(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000000);
			break;
		
		case 0x381AE70B:
			unk_0x530219CFD5D2CF9D(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_3);
			break;
		
		case 0xEAFF75BD:
			unk_0xDF9A19F19D39D17D(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/]);
			break;
		
		case 0x741DADD0:
			unk_0x8A174305CB36B1A5(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 0x92AEAB9C:
			unk_0xD6F9EF2CBF17C39A(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 0x176D9D54:
			unk_0x959E7CBD93B47040(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A));
			break;
		
		case 0xFC8D0020:
			unk_0xCE7D7A810252082C(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_22), Global_411012[iParam0 /*85*/].f_4);
			break;
		
		case 0xBCD304B8:
			unk_0x86F09E9726155438(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x5D40F1F0:
			unk_0xA63FA0129D34AA99(Global_411012[iParam0 /*85*/].f_42.f_1, "RaceToPoint", 0x00000000, 0x00000000);
			break;
		
		case 0xAEF994E9:
			unk_0xD189E5E11FBABB3C(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000000);
			break;
		
		case 0x10E398B4:
			unk_0xA4F4B39459FDE0FD(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_5, 0x00000001, bVar1, &(Global_411012[iParam0 /*85*/].f_E.f_28), 0x00000000, 0x00000000, 0x00000000, bVar0);
			break;
		
		case 0x83B4A55B:
			switch (Global_411012[iParam0 /*85*/].f_42.f_6)
			{
				case 0x3FA29128:
					unk_0xA4F4B39459FDE0FD(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_5, 0x00000001, bVar1, &(Global_411012[iParam0 /*85*/].f_E.f_28), 0x00000000, 0x00000000, 0x00000000, bVar0);
					break;
			}
			break;
		
		case 0x6597C63C:
			unk_0x7CC825DF8865404E(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, &(Global_411012[iParam0 /*85*/].f_E.f_22), 0x00000000, 0x00000000);
			break;
		
		case 0x60988977:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case 0x74EC47CE:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case 0x0C92ECEF:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case 0xFC71898E:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case 0x67878154:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case 0xA87819A3:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case 0x06A679FE:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case 0x5AEF7C87:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case 0x39B3A1A7:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case 0x5E0B0A1C:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case 0xC84D30CC:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case 0xB8D124BE:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case 0xF353DF93:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case 0xCF63BF45:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case 0x3E7AA93E:
			unk_0x9D6EB12A8E6A1B47(Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x21ECDA63:
			unk_0x017FA3B50AA7BBCB(Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0xCCFA5F2D:
			unk_0x0C06D61FE6218C43(Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_8);
			break;
		
		case 0x0C693CC5:
			unk_0x114C796E8DF14FB1(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_9);
			break;
		
		case 0x328CD5AA:
			unk_0xBE795B7771B253F0(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x27A4C3FB:
			unk_0x249B09B41E203013(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], 0x00000000, 0x00000001);
			break;
		
		case 0xB0AE4A42:
			unk_0xC6DCFD38EB6C5D6A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], 0x00000000, 0x00000001);
			break;
		
		case 0x75CD3B70:
			unk_0x9F7862A93AF57E41(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], 0x00000000, 0x00000000);
			break;
		
		case 0x10077806:
			unk_0x01823E47A902289C(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_1, Global_411012[iParam0 /*85*/].f_9);
			break;
		
		case 0xEE884170:
			unk_0x3B7EF88C105FB69A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7);
			break;
		
		case 0x1A108B80:
			unk_0xAEA694ECF02129DB(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001, Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_A, Global_411012[iParam0 /*85*/].f_B, Global_411012[iParam0 /*85*/].f_C);
			break;
		
		case 0xF7E7A848:
			unk_0xC5BC97E47ECB22E9(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001);
			break;
		
		case 0x1B9AFE05:
			unk_0x3CF6953686BFBF61(Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_8);
			break;
		
		case 0x5C66709A:
			unk_0x434FE3A4DF341381(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0xF9F62A7C:
			unk_0xDA90C799534A72C9(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x23C04B23:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case 0x50503398:
			unk_0x50ED0C960093D63C(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x3EBB7442:
			unk_0x3925A46749966B4D(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), &(Global_411012[iParam0 /*85*/].f_E.f_22));
			break;
		
		case 0x8107BB89:
			unk_0x53F58BDC6DFB17E6(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), &(Global_411012[iParam0 /*85*/].f_E.f_22));
			break;
		
		case 0xB6D37A76:
			unk_0xE9C48D19F762914B(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), &(Global_411012[iParam0 /*85*/].f_E.f_22));
			break;
		
		case 0xC88FBB63:
			unk_0x1940B733B2B94AE2(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001, Global_411012[iParam0 /*85*/]);
			break;
		
		case 0x6F225978:
			unk_0xE37616809557C456(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000);
			break;
		
		case 0x0CD9EBA6:
			unk_0xE37616809557C456(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000001);
			break;
		
		case 0xCBC91B24:
			unk_0x59DD36892C82F08B(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/]);
			break;
		
		case 0xD4E9820B:
			unk_0xC55B5E1A710EA4BE(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/]);
			break;
		
		case 0x53E15D9D:
			unk_0x53D560AAF6BF3D4E(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0xA1DC5A42:
		case 0xFE5D3D39:
			unk_0x8A202B38FB66794C(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A));
			break;
		
		case 0x46521174:
			unk_0xDB82D526B3C3DB77(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A));
			break;
		
		case 0x370A42A5:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x00000000);
			break;
		
		case 0xED97AFC1:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x00000001);
			break;
		
		case 0x23F59C7C:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x00000002);
			break;
		
		case 0xFF3F6FB2:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x00000003);
			break;
		
		case 0xED74CC1D:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x00000004);
			break;
		
		case 0x33E1D8F6:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x00000005);
			break;
		
		case 0xC5ED889C:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x00000006);
			break;
		
		case 0xFFC0D962:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x00000007);
			break;
		
		case 0xB99C11F6:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x00000008);
			break;
		
		case 0x8DACDD38:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x00000009);
			break;
		
		case 0x32537662:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x0000000A);
			break;
		
		case 0x7353182D:
			unk_0xF6F512DCB0C25FE1(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x00000000);
			break;
		
		case 0x6E63A5AC:
			unk_0xF6F512DCB0C25FE1(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x00000001);
			break;
		
		case 0x7D1FD84C:
			unk_0xF6F512DCB0C25FE1(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0x00000002);
			break;
		
		case 0x7462F9E7:
			break;
		
		case 0x798D498F:
			break;
		
		case 0xBA16F44B:
			unk_0xDB13FA8DB5E86B00(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_9);
			break;
		
		case 0x98AE71E5:
			unk_0x61F4393459646833(Global_411012[iParam0 /*85*/].f_9, Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001);
			break;
		
		case 0x8F2EC53A:
			unk_0xFEFC69A008980415(Global_411012[iParam0 /*85*/].f_9, Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001);
			break;
		
		case 0x87DF725B:
			unk_0x86CC628276254AC2(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x17FDC07D:
			if (func_33(unk_0x117658E336116132(Global_411012[iParam0 /*85*/]), 0x00000000, 0x00000000))
			{
				unk_0x29F1378957C4338C(unk_0x117658E336116132(Global_411012[iParam0 /*85*/]), Global_411012[iParam0 /*85*/].f_1, Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001);
			}
			break;
		
		case 0x6405F5A6:
			unk_0xF919FABD5349A968(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], 0x00000000, 0x00000001);
			break;
		
		case 0xBBD76B5A:
			unk_0x77BA509759C279CE(Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001);
			break;
		
		case 0xA2228687:
			unk_0x81D2E6A33B59B618(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0xC6B7C57F:
			unk_0xA106C1682C790290(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x43ADDE78:
			unk_0x546613D1293DBF87(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x4B6A869C:
			unk_0x5D421B9474B610E6(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_1, Global_411012[iParam0 /*85*/].f_9);
			break;
		
		case 0xDA2AD714:
			unk_0x163F1C05711ACF77(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x29849CDA:
			unk_0x5ECAFBC8E34D6EFE(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x31F23149:
			unk_0x90FA66AB36899698(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_42.f_F, 0x00000000, 0x00000001);
			break;
		
		case 0x180D054D:
			unk_0xD11BB1F07683633E(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0xCB511DC2:
			unk_0xC7D6090C222E61FA(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_42.f_F);
			break;
		
		case 0xC0925945:
		case 0xAD5032C1:
		case 0xD54402B0:
		case 0x43D5DFD2:
			unk_0x6A2B8A4070C0594A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_42.f_F);
			break;
		
		case 0xA4A86838:
			unk_0xF18D08B59CE9E875(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], 0x00000000, 0x00000001);
			break;
		
		case 0x6C36F5BD:
			unk_0xFCA4582C61D6101E(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000000);
			break;
		
		case 0xDE8FA2AB:
			unk_0xAF721C887699EBE1(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0xB001B7EB:
			unk_0xD2305C2E3F5D8E9C(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001);
			break;
		
		case 0x49F3549B:
			unk_0xCA06E60B6B41CD39(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x4A05F619:
			unk_0xAABADC392B147D80(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_42.f_10, Global_411012[iParam0 /*85*/].f_1);
			break;
		
		case 0xE285893D:
			unk_0xDEB9E7D80C47A76D(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x314FB8B0:
			unk_0xFA7D82562F8AB32D(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x9145F938:
			unk_0x24CC5BC765961690(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x653BCC2D:
			unk_0xA8C1B24657FB32B3(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x87B8E853:
			unk_0xB42761A25890EDEA(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x3F0A835A:
		case 0x6BEA24A6:
		case 0x1AE83BEC:
		case 0x3126BC47:
		case 0x4ABE30A4:
		case 0xA20EEA82:
		case 0x59E889DD:
		case 0x552534EE:
		case 0x8D9EE291:
		case 0x4B318D68:
		case 0x465B7057:
		case 0x545237BE:
		case 0x0F9590A2:
		case 0x87246378:
			unk_0x2DF294D394338472(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/]);
			break;
		
		case 0x9B0E293D:
			unk_0xFB43929E288533F1(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001, &(Global_411012[iParam0 /*85*/].f_E.f_1A), Global_411012[iParam0 /*85*/]);
			break;
		
		case 0x6F581424:
			unk_0x0A920FD5AB632774(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0xD670D38D:
			unk_0x0AE713861459290A(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0xB2C78A3D:
			unk_0x566FF9B925CB8BDA(Global_411012[iParam0 /*85*/].f_9, Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001);
			break;
		
		case 0x367BBE86:
			unk_0xFF90259E892D5F8A(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001, 0x00000001, Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x178D16AE:
			unk_0xFF90259E892D5F8A(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0xEC365EEC:
			unk_0xFF90259E892D5F8A(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000000);
			break;
		
		case 0x63A19A7F:
			unk_0xFF90259E892D5F8A(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x762D6BF6:
			break;
	}
	switch (Global_411012[iParam0 /*85*/].f_42.f_4)
	{
		case 0x6374FB50:
			unk_0xB0E03FD240577D6C(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000000, 0x00000001, Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000000);
			break;
		
		case 0x86DA0F67:
			unk_0xB0E03FD240577D6C(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000001, Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0xB703ED29:
			unk_0xB0E03FD240577D6C(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0xECF7C43F:
		case 0xE4315BE0:
		case 0x72CBE556:
		case 0x234B8864:
		case 0x7954FD0F:
		case 0x5D7FD908:
			unk_0x2BAB01599473BCB8(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000000);
			break;
		
		case 0x48B92E52:
		case 0x7A3568F7:
		case 0x235376A5:
			unk_0x2BAB01599473BCB8(Global_411012[iParam0 /*85*/].f_42.f_1, 0x00000000, 0x00000000, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 0x69D9B7DA:
			unk_0xC0DE18944A7A9044(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/]);
			break;
		
		case 0xCDCF2380:
			unk_0x5C9B198AF5A54FA6(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/]);
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			unk_0x1D18B90CF9028441(Global_411012[iParam0 /*85*/].f_42, &uVar3);
		}
	}
	func_7(iParam0);
}

int func_33(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0x00000000;
				}
			}
			if (bParam2)
			{
				if (!Global_2537E2.f_3[iVar0])
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_34(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42 == iParam0)
		{
			*uParam1 = { Global_411012[iVar0 /*85*/] };
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_35(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_41213B[iParam0 /*12*/].f_1 == Global_41213B[iParam0 /*12*/].f_6)
	{
		if (Global_41213B[iParam0 /*12*/].f_1 != 0x562592BB && Global_41213B[iParam0 /*12*/].f_1 != 0xB1866901)
		{
			return;
		}
	}
	iVar0 = 0x00000000;
	sVar2 = "Wardrobe";
	iVar0 = unk_0x12AB0310C2281427(sVar2);
	iVar0 = (iVar0 || func_37());
	iVar0 = (iVar0 + Global_411933);
	func_36(&uVar1);
	iVar0 = (iVar0 || uVar1);
	unk_0x0674E58A79778E99(&iVar0, 0x0000001C);
	unk_0x0674E58A79778E99(&iVar0, 0x0000001D);
	unk_0x0674E58A79778E99(&iVar0, 0x0000001A);
	iVar3 = (Global_41213B[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_41213B[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_41213B[iParam0 /*12*/].f_7;
	if (iVar5 == 0x00000000)
	{
		iVar5 = 0x83B4A55B;
	}
	if (((Global_41213B[iParam0 /*12*/] != Global_41213B[iParam0 /*12*/].f_5 || Global_41213B[iParam0 /*12*/].f_1 != Global_41213B[iParam0 /*12*/].f_6) || Global_41213B[iParam0 /*12*/].f_2 != iVar5) || Global_41213B[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_1A734 = 0x00000001;
	}
}

int func_36(var uParam0)
{
	*uParam0 = SYSTEM::SHIFT_LEFT(0x00000001, 0x00000002);
	return 0x00528E74;
}

int func_37()
{
	return SYSTEM::SHIFT_LEFT(0x00000001, 0x00000019);
}

int func_38()
{
	var uVar0;
	
	func_46(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_45())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_44())
	{
		return 0x00000001;
	}
	if (func_43(0x0000009F))
	{
		if (!func_42())
		{
			return 0x00000001;
		}
	}
	if (func_43(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_39() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_39()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_39()
{
	switch (func_41())
	{
		case 0x00000000:
			return func_40();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_40()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_41()
{
	return Global_7830;
}

bool func_42()
{
	return Global_2564C8.f_256;
}

int func_43(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_44()
{
	return Global_258C08;
}

bool func_45()
{
	return Global_2564C8.f_251;
}

void func_46(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		if (iVar1 == 0x000000AE)
		{
			unk_0x218F818E64020C17(0x00000001, iVar0, &iVar2, 0x00000002);
			switch (iVar2)
			{
				case 0x918B9E9A:
					func_47(iVar0);
					break;
				
				case 0x231D58EE:
					unk_0x218F818E64020C17(0x00000001, iVar0, &vVar3, 0x00000004);
					if (vVar3.z == 0x26FA13EF)
					{
						*uParam0 = 0x00000001;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_47(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_33(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_48(iVar2, &bVar3))
						{
							unk_0x920D29D81E211607(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_48(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0x00000000, 0x00000001);
					*uParam1 = 0x00000001;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0x00000000))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_49()
{
	SYSTEM::WAIT(0x00000000);
}

void func_50()
{
	func_51();
}

void func_51()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_52(struct<34> Param0)
{
	if (Global_40001.f_5C10)
	{
		func_50();
	}
	Local_22.f_42 = { Param0 };
	Local_22 = { Param0.f_13 };
	Local_22.f_E = { Global_411012[Param0.f_21 /*85*/].f_E };
	iLocal_21 = Param0.f_21;
	if (Param0.f_21 < 0x00000000)
	{
		func_50();
	}
	if (!func_53(Param0, Param0.f_21))
	{
		func_7(Param0.f_21);
		func_50();
	}
	if (Local_22.f_42.f_2 != 0x00000000)
	{
		Local_22.f_42.f_2 = 0x00000001;
	}
}

int func_53(struct<18> Param0, var uParam1, int iParam2)
{
	if (Global_411012[iParam2 /*85*/].f_42.f_1 != Param0.f_1)
	{
		return 0x00000000;
	}
	if (Global_411012[iParam2 /*85*/].f_42.f_3 != Param0.f_3)
	{
		return 0x00000000;
	}
	if (Global_411012[iParam2 /*85*/].f_42.f_4 != Param0.f_4)
	{
		return 0x00000000;
	}
	if (Global_411012[iParam2 /*85*/].f_42.f_5 != Param0.f_5)
	{
		return 0x00000000;
	}
	if (Global_411012[iParam2 /*85*/].f_42.f_6 != Param0.f_6)
	{
		return 0x00000000;
	}
	if (Global_411012[iParam2 /*85*/].f_42.f_7 != Param0.f_7)
	{
		return 0x00000000;
	}
	if (Global_411012[iParam2 /*85*/].f_42.f_E != Param0.f_E)
	{
		return 0x00000000;
	}
	if (Global_411012[iParam2 /*85*/].f_42.f_11 != Param0.f_11)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

