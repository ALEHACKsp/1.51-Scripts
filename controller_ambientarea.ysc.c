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
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	if (unk_0x2EBF608FFE6CA406(0x00000062))
	{
		func_15();
	}
	func_14();
	iVar0 = 0x00000000;
	while (0x00000001)
	{
		SYSTEM::WAIT(0x000001F4);
		iVar1 = 0x00000000;
		vVar2 = { 0f, 0f, 0f };
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		}
		while (iVar1 != 0x00000002)
		{
			if (func_13(&(Global_7983[iVar0 /*7*/])))
			{
				if (func_12(iVar0, vVar2))
				{
					func_11(&(Global_7983[iVar0 /*7*/]), 0x00000002);
					if (Global_7983[iVar0 /*7*/].f_5 != 0x00000000)
					{
						if (unk_0x1727A44C562FBED2(Global_7983[iVar0 /*7*/].f_5))
						{
							unk_0x4000D538E4D54254(Global_7983[iVar0 /*7*/].f_5, 0x00000001);
						}
						Global_7983[iVar0 /*7*/].f_5 = 0x00000000;
					}
				}
			}
			else if (!func_10(Global_7983[iVar0 /*7*/], 0x00000004))
			{
				if (func_5(&(Global_7983[iVar0 /*7*/]), vVar2))
				{
					func_1(iVar0);
				}
			}
			iVar1++;
			iVar0++;
			if (iVar0 == 0x00000005)
			{
				iVar0 = 0x00000000;
			}
		}
	}
}

void func_1(int iParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 0x00000590;
	bVar3 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "re_ArmyBase";
			iVar1 = joaat("re_armybase");
			break;
		
		case 0x00000001:
			iVar2 = 0x00001194;
			sVar0 = "golf_ai_foursome";
			iVar1 = joaat("golf_ai_foursome");
			bVar3 = 0x00000000;
			break;
		
		case 0x00000003:
			sVar0 = "re_Prison";
			iVar1 = joaat("re_prison");
			break;
		
		case 0x00000002:
			iVar2 = 0x00001194;
			sVar0 = "golf_ai_foursome_putting";
			iVar1 = joaat("golf_ai_foursome_putting");
			bVar3 = 0x00000000;
			break;
		
		case 0x00000004:
			iVar2 = 0x00000802;
			sVar0 = "stripclub";
			iVar1 = joaat("stripclub");
			bVar3 = 0x00000000;
			break;
	}
	if (!bVar3 && func_3())
	{
		return;
	}
	if (unk_0x4880526EC51D1C27(sVar0) != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(iVar1) == 0x00000000)
		{
			unk_0x92DCE5C81176D2B4(sVar0);
			while (!unk_0x1FBF08B001C4788A(sVar0))
			{
				SYSTEM::WAIT(0x00000000);
			}
			Global_7983[iParam0 /*7*/].f_5 = SYSTEM::START_NEW_SCRIPT(sVar0, iVar2);
			unk_0x5E8C29AE121DF1C7(sVar0);
			if (Global_7983[iParam0 /*7*/].f_5 != 0x00000000)
			{
				func_2(&(Global_7983[iParam0 /*7*/]), 0x00000002);
			}
		}
	}
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_3()
{
	if (func_4() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_4()
{
	return Global_7830;
}

int func_5(var uParam0, vector3 vParam1)
{
	if (!func_10(*uParam0, 0x00000001))
	{
		if (func_9() && !func_6(0x00000006))
		{
			return 0x00000000;
		}
	}
	if (SYSTEM::VDIST2(vParam1, uParam0->f_2) > uParam0->f_1)
	{
		return 0x00000000;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2080.115f, 3292.193f, -11.667f, -2112.049f, 3224.331f, 11.667f, 115f, 0x00000001, 0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_6(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_7(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_7(int iParam0)
{
	return func_8(iParam0, Global_A1D7);
}

int func_8(int iParam0, int iParam1)
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

int func_9()
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_10(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_11(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_12(int iParam0, vector3 vParam1)
{
	vParam1.z = 0f;
	if (!unk_0x1727A44C562FBED2(Global_7983[iParam0 /*7*/].f_5))
	{
		return 0x00000001;
	}
	if (func_10(Global_7983[iParam0 /*7*/], 0x00000004))
	{
		return 0x00000001;
	}
	if (func_9() && !func_6(0x00000006))
	{
		if (!func_10(Global_7983[iParam0 /*7*/], 0x00000001))
		{
			if (iParam0 == 0x00000001 || iParam0 == 0x00000002)
			{
				if (unk_0x8A22C4C08282BF26(joaat("golf")) == 0x00000000)
				{
					return 0x00000001;
				}
			}
			else
			{
				return 0x00000001;
			}
		}
	}
	if (SYSTEM::VDIST2(Global_7983[iParam0 /*7*/].f_2, vParam1) > (Global_7983[iParam0 /*7*/].f_1 + 400f))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_13(var uParam0)
{
	return func_10(*uParam0, 0x00000002);
}

void func_14()
{
	int iVar0;
	
	Global_7983[0x00000000 /*7*/].f_2 = { -2189.545f, 3129.613f, 0f };
	Global_7983[0x00000000 /*7*/].f_1 = (1000f * 1000f);
	Global_7983[0x00000000 /*7*/] = 0x00000000;
	Global_7983[0x00000000 /*7*/].f_5 = 0x00000000;
	Global_7983[0x00000001 /*7*/].f_2 = { -1172.822f, 66.5235f, 0f };
	Global_7983[0x00000001 /*7*/].f_1 = (300f * 300f);
	Global_7983[0x00000001 /*7*/] = 0x00000000;
	Global_7983[0x00000001 /*7*/].f_5 = 0x00000000;
	Global_7983[0x00000003 /*7*/].f_2 = { 1692.147f, 2562.313f, 0f };
	Global_7983[0x00000003 /*7*/].f_1 = (300f * 300f);
	Global_7983[0x00000003 /*7*/] = 0x00000000;
	Global_7983[0x00000003 /*7*/].f_5 = 0x00000000;
	Global_7983[0x00000002 /*7*/].f_2 = { -1329.68f, 60.3478f, 0f };
	Global_7983[0x00000002 /*7*/].f_1 = (250f * 250f);
	Global_7983[0x00000002 /*7*/] = 0x00000000;
	Global_7983[0x00000002 /*7*/].f_5 = 0x00000000;
	Global_7983[0x00000004 /*7*/].f_2 = { 114.64f, -1290.34f, 0f };
	Global_7983[0x00000004 /*7*/].f_1 = (100f * 100f);
	Global_7983[0x00000004 /*7*/] = 0x00000001;
	Global_7983[0x00000004 /*7*/].f_5 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 <= (0x00000005 - 0x00000001))
	{
		Global_7983[iVar0 /*7*/].f_2.f_2 = 0f;
		iVar0++;
	}
}

void func_15()
{
	unk_0x10FAF14A60A0DBE1();
}

