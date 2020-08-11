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
	struct<17> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_21 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	if (unk_0x2EBF608FFE6CA406(0x00000032))
	{
		func_23();
	}
	while (0x00000001)
	{
		if (Global_1B416.f_4FB5.f_91 > 0x00000000 || Global_1AEC6)
		{
			if (!Global_1AEC6)
			{
				if ((Global_A1D7 != 0x00000006 && Global_A1D7 != 0x0000000F) && !Global_1721F)
				{
					func_23();
				}
				if (!Global_1AEC5)
				{
					if (Global_1B416.f_4FB5.f_91 > 0x00000000)
					{
						if (func_20(&(Global_1B416.f_4FB5[iLocal_21 /*16*/])))
						{
							if (func_18(func_19()))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iLocal_21 /*16*/].f_B, func_12()))
								{
									if (Global_1B416.f_4FB5[iLocal_21 /*16*/].f_C == Global_1B416.f_4FB5.f_92[func_12()])
									{
										if (unk_0x1C0640BA9A7327B3() > Global_1AEC8)
										{
											if (unk_0x1C0640BA9A7327B3() > Global_1B416.f_4FB5[iLocal_21 /*16*/].f_8)
											{
												if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_4FB5[iLocal_21 /*16*/].f_4), ""))
												{
													unk_0x1E3A202C24F57DA6(0x00000001);
													func_11(&(Global_1B416.f_4FB5[iLocal_21 /*16*/]));
												}
												else
												{
													unk_0x1E3A202C24F57DA6(0x00000001);
													func_10(&(Global_1B416.f_4FB5[iLocal_21 /*16*/]), &(Global_1B416.f_4FB5[iLocal_21 /*16*/].f_4));
												}
												if (Global_1B416.f_4FB5[iLocal_21 /*16*/].f_D != 0x00000000)
												{
													func_9(Global_1B416.f_4FB5[iLocal_21 /*16*/].f_D, 0x00000000);
												}
												Local_20 = { Global_1B416.f_4FB5[iLocal_21 /*16*/] };
												Local_20.f_4 = { Global_1B416.f_4FB5[iLocal_21 /*16*/].f_4 };
												Local_20.f_8 = Global_1B416.f_4FB5[iLocal_21 /*16*/].f_8;
												Local_20.f_A = Global_1B416.f_4FB5[iLocal_21 /*16*/].f_A;
												Local_20.f_9 = Global_1B416.f_4FB5[iLocal_21 /*16*/].f_9;
												Local_20.f_B = Global_1B416.f_4FB5[iLocal_21 /*16*/].f_B;
												Local_20.f_C = Global_1B416.f_4FB5[iLocal_21 /*16*/].f_C;
												Local_20.f_D = Global_1B416.f_4FB5[iLocal_21 /*16*/].f_D;
												Local_20.f_E = Global_1B416.f_4FB5[iLocal_21 /*16*/].f_E;
												Local_20.f_F = Global_1B416.f_4FB5[iLocal_21 /*16*/].f_F;
												Local_20.f_10 = 0x00000000;
												Global_1AEC9 = { Global_1B416.f_4FB5[iLocal_21 /*16*/] };
												Global_1AEC7 = unk_0x1C0640BA9A7327B3();
												iVar0 = iLocal_21;
												while (iVar0 <= (Global_1B416.f_4FB5.f_91 - 0x00000002))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_1B416.f_4FB5.f_91 - 0x00000001));
												Global_1B416.f_4FB5.f_91 = (Global_1B416.f_4FB5.f_91 - 0x00000001);
												func_6();
												Global_1AEC6 = 0x00000001;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (unk_0x7F8A39872A07D2CE(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						unk_0xA37A90C62806D848(0x00000000);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					unk_0xA37A90C62806D848(0x00000000);
				}
				if ((unk_0x1C0640BA9A7327B3() - Global_1AEC7) > 0x00000FA0 || Local_20.f_10)
				{
					if (Local_20.f_E != 0x00000000)
					{
						func_9(Local_20.f_E, 0x00000000);
					}
					Global_1AEC8 = unk_0x1C0640BA9A7327B3() + 250;
				}
				else
				{
					if (Local_20.f_A != 0xFFFFFFFF)
					{
						iVar1 = 0x00004E20;
					}
					else
					{
						iVar1 = 0xFFFFFFFF;
					}
					func_1(&Local_20, &(Local_20.f_4), Local_20.f_C, 0x000003E8, iVar1, Local_20.f_9, Local_20.f_B, Local_20.f_D, Local_20.f_E, Local_20.f_F);
				}
				StringCopy(&Local_20, "", 16);
				StringCopy(&(Local_20.f_4), "", 16);
				Local_20.f_8 = 0x00000000;
				Local_20.f_9 = 0x00000000;
				Local_20.f_A = 0xFFFFFFFF;
				Local_20.f_B = 0x00000000;
				Local_20.f_C = 0x00000000;
				Local_20.f_D = 0x00000000;
				Local_20.f_E = 0x00000000;
				Local_20.f_F = 0x00000000;
				Local_20.f_10 = 0x00000000;
				Global_1AEC7 = 0x00000000;
				Global_1AEC6 = 0x00000000;
			}
			if (!unk_0x7F8A39872A07D2CE(&(Global_1B416.f_4FB5[iLocal_21 /*16*/]), &Local_20) && !unk_0x7F8A39872A07D2CE(&(Global_1B416.f_4FB5[iLocal_21 /*16*/]), ""))
			{
				if (Global_1B416.f_4FB5[iLocal_21 /*16*/].f_A != 0xFFFFFFFF)
				{
					if (unk_0x1C0640BA9A7327B3() > Global_1B416.f_4FB5[iLocal_21 /*16*/].f_A)
					{
						iVar2 = iLocal_21;
						while (iVar2 <= (Global_1B416.f_4FB5.f_91 - 0x00000002))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_1B416.f_4FB5.f_91 - 0x00000001));
						Global_1B416.f_4FB5.f_91 = (Global_1B416.f_4FB5.f_91 - 0x00000001);
						func_6();
					}
				}
			}
			iLocal_21++;
			if (iLocal_21 >= Global_1B416.f_4FB5.f_91)
			{
				iLocal_21 = 0x00000000;
			}
		}
		else if ((Global_A1D7 != 0x00000006 && Global_A1D7 != 0x0000000F) && !Global_1721F)
		{
			func_23();
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0x00000000)
	{
		return;
	}
	if (iParam5 < 0x000001F4 && iParam5 != 0xFFFFFFFF)
	{
		return;
	}
	if (iParam4 < 0x00000000 && iParam4 != 0xFFFFFFFF)
	{
		return;
	}
	if (iParam6 < 0x00000001 || iParam6 > 0x00000007)
	{
		return;
	}
	if (iParam7 == 0x000000EB)
	{
		return;
	}
	if (iParam8 == 0x000000EB)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_4FB5[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_1B416.f_4FB5.f_91 < 0x00000009)
	{
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_4), sParam1, 16);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_9 = iParam5;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_B = iParam6;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_C = uParam2;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_D = iParam7;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_E = iParam8;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 0xFFFFFFFF)
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = 0xFFFFFFFF;
		}
		Global_1B416.f_4FB5.f_91++;
		func_6();
	}
}

bool func_2(char* sParam0, char* sParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

bool func_3(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_4()
{
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (func_5())
	{
		return 0x00000000;
	}
	if (Local_20.f_9 != 0xFFFFFFFF && (unk_0x1C0640BA9A7327B3() - Global_1AEC7) > Local_20.f_9)
	{
		return 0x00000000;
	}
	if (Global_1AEC5)
	{
		return 0x00000000;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (unk_0x7F8A39872A07D2CE(&(Local_20.f_4), ""))
	{
		if (!func_3(&Local_20))
		{
			Local_20.f_10 = 0x00000001;
			return 0x00000000;
		}
	}
	else if (!func_2(&Local_20, &(Local_20.f_4)))
	{
		Local_20.f_10 = 0x00000001;
		return 0x00000000;
	}
	return 0x00000001;
}

int func_5()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		Global_1B416.f_4FB5.f_92[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000000))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000000])
			{
				Global_1B416.f_4FB5.f_92[0x00000000] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000001))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000001])
			{
				Global_1B416.f_4FB5.f_92[0x00000001] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0x00000002))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0x00000002])
			{
				Global_1B416.f_4FB5.f_92[0x00000002] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_1B416.f_4FB5[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_1B416.f_4FB5[iParam0 /*16*/].f_4), "", 16);
	Global_1B416.f_4FB5[iParam0 /*16*/].f_8 = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_9 = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_B = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_A = 0xFFFFFFFF;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_C = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_D = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_E = 0x00000000;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_F = 0x00000000;
}

void func_8(int iParam0, int iParam1)
{
	Global_1B416.f_4FB5[iParam0 /*16*/] = { Global_1B416.f_4FB5[iParam1 /*16*/] };
	Global_1B416.f_4FB5[iParam0 /*16*/].f_4 = { Global_1B416.f_4FB5[iParam1 /*16*/].f_4 };
	Global_1B416.f_4FB5[iParam0 /*16*/].f_8 = Global_1B416.f_4FB5[iParam1 /*16*/].f_8;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_A = Global_1B416.f_4FB5[iParam1 /*16*/].f_A;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_9 = Global_1B416.f_4FB5[iParam1 /*16*/].f_9;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_B = Global_1B416.f_4FB5[iParam1 /*16*/].f_B;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_C = Global_1B416.f_4FB5[iParam1 /*16*/].f_C;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_D = Global_1B416.f_4FB5[iParam1 /*16*/].f_D;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_E = Global_1B416.f_4FB5[iParam1 /*16*/].f_E;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_F = Global_1B416.f_4FB5[iParam1 /*16*/].f_F;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0 == 0x000000EB || iParam0 == 0x00000000)
	{
		return;
	}
	Global_1B416.f_21A0[iParam0] = 0x00000001;
	Global_1B416.f_21A0.f_EC[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

void func_10(char* sParam0, char* sParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

void func_11(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
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
		if (func_16(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_15(unk_0x16F2683693E537C9());
			if (func_18(iVar0) && (!func_14(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_18(Global_1B416.f_936.f_21B.f_10E1))
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

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_16(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_17(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_17(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_18(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_19()
{
	func_13();
	return Global_1B416.f_936.f_21B.f_10E1;
}

int func_20(var uParam0)
{
	if (unk_0xFEBC1E4EC9E001F0())
	{
		return 0x00000000;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (!unk_0x0F1CCD77290EE12F())
	{
		return 0x00000000;
	}
	if (unk_0xE57E602827E07C9D())
	{
		return 0x00000000;
	}
	if (func_22())
	{
		return 0x00000000;
	}
	if (func_5())
	{
		return 0x00000000;
	}
	if (uParam0->f_C < 0x00000003)
	{
		if (func_21())
		{
			return 0x00000000;
		}
		if (Global_12B4C)
		{
			return 0x00000000;
		}
		if (Global_175B0)
		{
			return 0x00000000;
		}
		if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_F, 0x00000001))
		{
			if (Global_175B8)
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000001;
}

int func_21()
{
	if (Global_12C52)
	{
		return 0x00000001;
	}
	else if (Global_F042 && !Global_F048)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_22()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

void func_23()
{
	if (Global_1AEC6)
	{
		if (unk_0x7F8A39872A07D2CE(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	Global_1AEC7 = 0x00000000;
	Global_1AEC6 = 0x00000000;
	unk_0x10FAF14A60A0DBE1();
}

