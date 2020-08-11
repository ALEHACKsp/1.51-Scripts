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
	int iLocal_20 = 0;
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
	if (unk_0x2EBF608FFE6CA406(0x00000002) || unk_0x28CDCD4EC82F21C0())
	{
		unk_0x10FAF14A60A0DBE1();
	}
	func_1();
}

void func_1()
{
	vector3 vVar0;
	var uVar1;
	
	while (!func_9(&iLocal_20))
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (!unk_0xEB6A8945D1AC98A1(iLocal_20))
	{
		if (!Global_17407)
		{
			unk_0x73270B3C9CC833FD(iLocal_20, 0x00000001, 0x00000001);
			if (unk_0xD1960163A3042274(iLocal_20, 0x55966344) != 0x00000007)
			{
				unk_0xA3BF0AA5A2608191(iLocal_20);
			}
			vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000) };
			unk_0x11AD11297DC58CC7(iLocal_20, 0x00000001);
			unk_0xDD353D0E9C789D0E(&uVar1);
			if (!unk_0x405E212DDE472467(iLocal_20, 0x00000000))
			{
				if (!unk_0x4734A6196B611C3B(iLocal_20, 0x00000000) && !unk_0x405E212DDE472467(iLocal_20, 0x00000000))
				{
					unk_0x796BDF31572BB055(0x00000000, vVar0, 0x00001770);
				}
			}
			unk_0xDBE4EC9C88839074(0x00000000, vVar0, 0x00001770, 0x00000000, 0x00000002);
			unk_0x75ABDC5F81978924(uVar1);
			unk_0x78ADC381772E3D54(iLocal_20, uVar1);
		}
		func_2(iLocal_20);
	}
	while (!unk_0x757EF87A33649210())
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (unk_0xC844350D5D58C99A(iLocal_20))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_20))
		{
			unk_0xFADC0A217229F6B5(iLocal_20, 0x00000001);
		}
		unk_0x6DAD7906B73F064D(&iLocal_20);
	}
	Global_17407 = 0x00000000;
	unk_0x10FAF14A60A0DBE1();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1C0640BA9A7327B3() + 1000;
	while (unk_0x1C0640BA9A7327B3() < iVar0 && !unk_0x757EF87A33649210())
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iLocal_19 == 0x00000001)
		{
			switch (func_5(unk_0x16F2683693E537C9()))
			{
				case 0x00000002:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 0x00000003);
					break;
				
				case 0x00000000:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 0x00000003);
					break;
			}
		}
		else if (iLocal_19 == 0x00000002)
		{
			switch (func_5(unk_0x16F2683693E537C9()))
			{
				case 0x00000001:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 0x00000003);
					break;
				
				case 0x00000000:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 0x00000003);
					break;
			}
		}
		else if (iLocal_19 == 0x00000000)
		{
			switch (func_5(unk_0x16F2683693E537C9()))
			{
				case 0x00000002:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 0x00000003);
					break;
				
				case 0x00000001:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 0x00000003);
					break;
				}
			}
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_4(iParam3), 0x00000000);
}

int func_4(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			return "SPEECH_PARAMS_STANDARD";
		
		case 0x00000001:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 0x00000002:
			return "SPEECH_PARAMS_BEAT";
		
		case 0x00000003:
			return "SPEECH_PARAMS_FORCE";
		
		case 0x00000004:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 0x00000005:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 0x00000006:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 0x00000007:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 0x00000008:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 0x00000009:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 0x0000000A:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 0x0000000B:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 0x0000000C:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 0x0000000D:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 0x0000000E:
			return "SPEECH_PARAMS_HELI";
		
		case 0x0000000F:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 0x00000010:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 0x00000011:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 0x00000012:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 0x00000013:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 0x00000014:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 0x00000015:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 0x00000016:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 0x00000017:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 0x00000018:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 0x00000019:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 0x0000001A:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 0x0000001B:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 0x0000001C:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 0x0000001D:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 0x0000001E:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 0x0000001F:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 0x00000020:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 0x00000021:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 0x00000022:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 0x00000023:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 0x00000024:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0x00000000;
	return iVar0;
}

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_6(int iParam0)
{
	if (func_8(iParam0))
	{
		return func_7(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_7(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_8(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_9(var uParam0)
{
	int iVar0;
	
	iLocal_18 = 0x00000000;
	while (iLocal_18 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_17771[iLocal_18]) && !unk_0xEB6A8945D1AC98A1(Global_17771[iLocal_18]))
		{
			if (Global_17771[iLocal_18] != unk_0x16F2683693E537C9())
			{
				if (!unk_0xAF6690C489CC6203(Global_17771[iLocal_18]))
				{
					if (unk_0x405E212DDE472467(Global_17771[iLocal_18], 0x00000000) || !unk_0xD59B17D2DFF98E26(Global_17771[iLocal_18]))
					{
						if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(Global_17771[iLocal_18], 0x00000001), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001) < 10f)
						{
							iLocal_19 = func_5(Global_17771[iLocal_18]);
							if ((iLocal_19 == 0x00000000 || iLocal_19 == 0x00000002) || iLocal_19 == 0x00000001)
							{
								if (iLocal_19 != func_10())
								{
									if (unk_0xF649DD3BF44195C7(Global_17771[iLocal_18], unk_0x16F2683693E537C9(), 0x00000011))
									{
										if (unk_0x405E212DDE472467(Global_17771[iLocal_18], 0x00000000))
										{
											iVar0 = unk_0x6937EA2286828455(Global_17771[iLocal_18], 0x00000000);
										}
										if ((unk_0xC844350D5D58C99A(iVar0) && unk_0xDF1306B443CD3D15(iVar0, 0x00000000)) || !unk_0xC844350D5D58C99A(iVar0))
										{
											*uParam0 = Global_17771[iLocal_18];
											return 0x00000001;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (unk_0x757EF87A33649210())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_10()
{
	func_11();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_6(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_5(unk_0x16F2683693E537C9());
			if (func_8(iVar0) && (!func_12(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_8(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_12(int iParam0)
{
	return Global_A1D7 == iParam0;
}

