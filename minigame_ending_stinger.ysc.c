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
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	
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
	iVar0 = 0xFFFFFFFF;
	bVar1 = 0x00000000;
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_5();
	}
	while (0x00000001)
	{
		if (!bVar1)
		{
			switch (func_1(unk_0x16F2683693E537C9()))
			{
				case 0x00000001:
					if (unk_0xE3934829A331AF92("MISSION_COMPLETE_FRANKLIN_SMALL", 0x00000000))
					{
						unk_0x7B1292B738DF9FAF();
						bVar1 = 0x00000001;
					}
					break;
				
				case 0x00000002:
					if (unk_0xE3934829A331AF92("MISSION_COMPLETE_TREVOR_SMALL", 0x00000000))
					{
						unk_0x7B1292B738DF9FAF();
						bVar1 = 0x00000001;
					}
					break;
				
				default:
					if (unk_0xE3934829A331AF92("MISSION_COMPLETE_MICHAEL_SMALL", 0x00000000))
					{
						unk_0x7B1292B738DF9FAF();
						bVar1 = 0x00000001;
					}
					break;
			}
		}
		else if (iVar0 == 0xFFFFFFFF)
		{
			iVar0 = unk_0x1C0640BA9A7327B3();
		}
		else if (unk_0x1C0640BA9A7327B3() > iVar0 + 8000)
		{
			func_5();
		}
		SYSTEM::WAIT(0x00000000);
	}
}

int func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_2(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_2(int iParam0)
{
	if (func_4(iParam0))
	{
		return func_3(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_3(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_4(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_5()
{
	unk_0xE96F19797E59AB06();
	unk_0x10FAF14A60A0DBE1();
}

