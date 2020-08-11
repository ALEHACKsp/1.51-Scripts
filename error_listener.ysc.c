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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	func_12();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (func_11())
		{
			return;
		}
		func_1();
	}
}

void func_1()
{
	func_2();
}

void func_2()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	var uVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000002))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000002, iVar0);
		if (func_10(iVar1))
		{
			func_9(&Var2);
			func_8(0x00000002, iVar0, iVar1, &Var2);
			Var2.f_1 = (unk_0xF4CCC8CB6DE7F1AE() - 0x00000001);
			Var2 = iVar1;
			if (!func_7(&Var2, &uVar3))
			{
				func_6(&Var2);
			}
			func_3(&Var2);
		}
		iVar0++;
	}
}

void func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = *iParam0;
	if (((func_5() && func_4(iVar0)) && iVar0 != 0x000000F4) && unk_0x37A36997770AEFC3())
	{
		unk_0xDA303319A57C6FF5(0x00000000, 0x00000001, 0x00000000);
	}
}

bool func_4(int iParam0)
{
	return (((iParam0 == 0x000000F5 || iParam0 == 0x000000F6) || iParam0 == 0x000000F7) || iParam0 == 0x000000F4);
}

bool func_5()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0x00000000;
}

int func_6(int iParam0)
{
	if (Global_7945.f_3D < 0x00000014)
	{
		Global_7945[Global_7945.f_3D /*3*/] = { *iParam0 };
		Global_7945.f_3D++;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_7(int iParam0, var uParam1)
{
	*uParam1 = 0x00000000;
	*uParam1 = 0x00000000;
	while (*uParam1 < Global_7945.f_3D)
	{
		if (Global_7945[*uParam1 /*3*/] == *iParam0 && Global_7945[*uParam1 /*3*/].f_2 == iParam0->f_2)
		{
			return 0x00000001;
		}
		*uParam1++;
	}
	return 0x00000000;
}

void func_8(int iParam0, int iParam1, int iParam2, var uParam3)
{
	var uVar0;
	
	if (((iParam2 == 0x000000F4 || iParam2 == 0x000000F5) || iParam2 == 0x000000F6) || iParam2 == 0x000000F7)
	{
		if (unk_0x218F818E64020C17(iParam0, iParam1, &uVar0, 0x00000001))
		{
			uParam3->f_2 = uVar0;
		}
	}
}

void func_9(var uParam0)
{
	*uParam0 = 0xFFFFFFFF;
	uParam0->f_1 = 0xFFFFFFFF;
	uParam0->f_2 = 0xFFFFFFFF;
}

bool func_10(int iParam0)
{
	return func_4(iParam0);
}

int func_11()
{
	return 0x00000000;
}

void func_12()
{
	unk_0xB57F88F0123F4C38();
}

