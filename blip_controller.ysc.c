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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	char* sLocal_23 = NULL;
	vector3 vLocal_24 = { 0f, 0f, 0f };
	vector3 vLocal_25 = { 0f, 0f, 0f };
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
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
	sLocal_21 = "CHECKPOINT_NORMAL";
	sLocal_22 = "CHECKPOINT_MISSED";
	sLocal_23 = "CHECKPOINT_PERFECT";
	vLocal_24 = { 1694.74f, 3276.502f, 41.2796f };
	vLocal_25 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_26 = 0x00000003;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	fLocal_35 = 80f;
	fLocal_36 = 140f;
	fLocal_37 = 180f;
	bLocal_46 = 0x00000001;
	iLocal_49 = 0xFFFFFFFF;
	if (unk_0x2EBF608FFE6CA406(0x00000002))
	{
		func_51();
	}
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000034)
	{
		iVar1 = func_50(iVar0);
		func_47(iVar1, func_48(iVar0));
		iVar0++;
	}
	func_46(0x0000005B, 0x00000001);
	func_46(0x0000005C, 0x00000001);
	Global_79A7 = 0x00000001;
	while (Global_79A9)
	{
		if ((unk_0x1C0640BA9A7327B3() % 0x000000FA) == 0x00000000)
		{
		}
		SYSTEM::WAIT(0x00000000);
	}
	iVar2 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000007)
	{
		iLocal_51[iVar2] = 0xFFFFFFFF;
		iVar2++;
	}
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar2 /*23*/].f_B), 0x00000012);
	iVar2 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000107)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar2 /*23*/].f_B), 0x00000012);
		iVar2++;
	}
	iLocal_60 = Global_914D;
	bVar3 = 0x00000000;
	func_45();
	func_43();
	while (0x00000001)
	{
		if (!bVar3)
		{
			func_42();
		}
		bVar3 = func_35();
		if (bVar3)
		{
			Global_79A7 = 0x00000001;
		}
		iVar4 = 0x00000000;
		iVar5 = 0x00000000;
		iVar2 = 0x00000000;
		if (Global_79A7)
		{
			func_45();
			func_43();
			iVar6 = 0x00000000;
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000107)
			{
				bVar7 = unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x00000012);
				if (!bVar7)
				{
					if (func_34(iVar2))
					{
						iVar5++;
						bVar7 = 0x00000001;
					}
				}
				iVar4++;
				if (bVar7)
				{
					iVar8 = 0x00000000;
					iVar9 = 0x00000000;
					if (Global_914D)
					{
						iVar8++;
						iVar9++;
					}
					else
					{
						if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x0000000D))
						{
							if (func_33())
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x00000001))
						{
							if (!bLocal_46)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x00000002))
						{
							if (bLocal_46)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x00000007))
						{
							if (!func_32(0x0000000F))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x00000010))
						{
							if (!func_30(Global_79AA[iVar2 /*23*/].f_16))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x0000000E))
						{
							if (func_32(0x00000005))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x00000008))
						{
							if (Global_79AA[iVar2 /*23*/].f_10 != 0x00000004 && Global_79AA[iVar2 /*23*/].f_10 != 0x00000008)
							{
								if (!func_29(iVar2))
								{
									iVar8++;
								}
								iVar9++;
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x00000013))
						{
							switch (iLocal_53)
							{
								case 0x00000001:
								case 0x00000000:
								case 0x00000002:
									break;
								
								default:
									iVar8++;
									break;
							}
							iVar9++;
						}
						if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x0000001B))
						{
							if (bLocal_41)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (Global_79AA[iVar2 /*23*/].f_10 == 0x00000001)
						{
							func_23();
						}
					}
					if (iVar9 > 0x00000000)
					{
						if (iVar8 > 0x00000000)
						{
							unk_0x0674E58A79778E99(&(Global_79AA[iVar2 /*23*/].f_B), 0x00000000);
						}
						else if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x0000000F))
						{
							unk_0x5D96D8530B3D0904(&(Global_79AA[iVar2 /*23*/].f_B), 0x00000000);
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x0000000F))
					{
						unk_0x5D96D8530B3D0904(&(Global_79AA[iVar2 /*23*/].f_B), 0x00000000);
					}
					if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x00000000) && unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x00000003))
					{
						bVar10 = 0x00000000;
						if (!unk_0xE4EDC4B0E92C078B(Global_79AA[iVar2 /*23*/].f_13))
						{
							while (!unk_0xB7B9B7C245ECD0D7() < 0x00000096)
							{
								SYSTEM::WAIT(0x000007D0);
							}
							if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x00000013))
							{
								switch (iLocal_53)
								{
									case 0x00000001:
									case 0x00000000:
									case 0x00000002:
										if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x0000001C))
										{
											Global_79AA[iVar2 /*23*/].f_13 = unk_0x3F3860E60C44719E(Global_79AA[iVar2 /*23*/][0x00000000 /*3*/], Global_79AA[iVar2 /*23*/].f_A);
											unk_0x7F010F50CE03A8AF(Global_79AA[iVar2 /*23*/].f_13, 0x00000080);
											unk_0xF2D30B8ACAF12A39(Global_79AA[iVar2 /*23*/].f_13, 0x00000000);
										}
										else
										{
											Global_79AA[iVar2 /*23*/].f_13 = unk_0x6CC513A908911CF0(Global_79AA[iVar2 /*23*/][iLocal_53 /*3*/]);
											unk_0xBC8E0A7390523199(Global_79AA[iVar2 /*23*/].f_13, Global_79AA[iVar2 /*23*/].f_C[iLocal_53]);
										}
										break;
									
									default:
										Global_79AA[iVar2 /*23*/].f_13 = unk_0x6CC513A908911CF0(1f, 2f, 3f);
										break;
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x0000001C))
							{
								Global_79AA[iVar2 /*23*/].f_13 = unk_0x3F3860E60C44719E(Global_79AA[iVar2 /*23*/][0x00000000 /*3*/], Global_79AA[iVar2 /*23*/].f_A);
								unk_0x7F010F50CE03A8AF(Global_79AA[iVar2 /*23*/].f_13, 0x00000080);
								unk_0xF2D30B8ACAF12A39(Global_79AA[iVar2 /*23*/].f_13, 0x00000000);
							}
							else
							{
								Global_79AA[iVar2 /*23*/].f_13 = unk_0x6CC513A908911CF0(Global_79AA[iVar2 /*23*/][0x00000000 /*3*/]);
								unk_0xBC8E0A7390523199(Global_79AA[iVar2 /*23*/].f_13, Global_79AA[iVar2 /*23*/].f_C[0x00000000]);
							}
							if (Global_79AA[iVar2 /*23*/].f_10 == 0x00000001)
							{
								bVar10 = 0x00000001;
							}
						}
						else
						{
							if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x00000013))
							{
								switch (iLocal_53)
								{
									case 0x00000001:
									case 0x00000000:
									case 0x00000002:
										unk_0x2F9282246F89FFD1(Global_79AA[iVar2 /*23*/].f_13, Global_79AA[iVar2 /*23*/][iLocal_53 /*3*/]);
										break;
									
									default:
										break;
								}
							}
							else
							{
								unk_0x2F9282246F89FFD1(Global_79AA[iVar2 /*23*/].f_13, Global_79AA[iVar2 /*23*/][0x00000000 /*3*/]);
							}
							if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar2 /*23*/].f_B, 0x00000009))
							{
								if (iLocal_43)
								{
									unk_0xF412DD40DE84CE72(Global_79AA[iVar2 /*23*/].f_13, 0x00000001);
									iLocal_43 = 0x00000000;
								}
								else
								{
									unk_0xC96D4E16FF8C8592(Global_79AA[iVar2 /*23*/].f_13, 0x00000001);
									iLocal_43 = 0x00000001;
								}
								unk_0x0EC848EFF66DF45A(Global_79AA[iVar2 /*23*/].f_13, 0x00002710);
								unk_0x0674E58A79778E99(&(Global_79AA[iVar2 /*23*/].f_B), 0x00000009);
							}
							else
							{
								unk_0xF412DD40DE84CE72(Global_79AA[iVar2 /*23*/].f_13, 0x00000000);
							}
						}
						func_20(Global_79AA[iVar2 /*23*/].f_13, iVar2);
						if (bVar10)
						{
							func_19(iVar2);
						}
						iVar5++;
					}
					else
					{
						if (unk_0xE4EDC4B0E92C078B(Global_79AA[iVar2 /*23*/].f_13))
						{
							unk_0x142CC44DB769B57E(&(Global_79AA[iVar2 /*23*/].f_13));
							iVar5++;
							if (Global_79AA[iVar2 /*23*/].f_10 == 0x00000001)
							{
								func_18(iVar2);
							}
						}
						Global_79AA[iVar2 /*23*/].f_13 = 0x00000000;
					}
				}
				unk_0x0674E58A79778E99(&(Global_79AA[iVar2 /*23*/].f_B), 0x00000012);
				iVar11 = 0x0000001E;
				if (unk_0x757EF87A33649210())
				{
					iVar11 = 0x000000FA;
				}
				if (iVar5 > iVar11)
				{
					SYSTEM::WAIT(0x00000000);
					iVar5 = 0x00000000;
				}
				if ((iVar4 / 0x00000014) > iVar6)
				{
					iVar6 = (iVar4 / 0x00000014);
					SYSTEM::WAIT(0x00000000);
				}
				iVar2++;
			}
		}
		Global_79A7 = Global_79A8;
		Global_79A8 = 0x00000000;
		if (iVar4 == 0x00000000)
		{
			func_11();
			func_7();
			SYSTEM::WAIT(0x000001F4);
			iLocal_53 = func_1();
		}
	}
}

int func_1()
{
	func_2();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_2()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_5(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_4(unk_0x16F2683693E537C9());
			if (func_3(iVar0) && (!func_32(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_3(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_3(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_5(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_5(int iParam0)
{
	if (func_3(iParam0))
	{
		return func_6(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_6(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_7()
{
	if (func_1() == 0x00000001)
	{
		if (func_10(0x0000003F))
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (func_10(0x0000007E))
				{
					if (func_9(0x0000008A))
					{
						func_8(0x0000008A, 0x00000000, 0x00000000);
					}
					if (!func_9(0x0000008B))
					{
						if (unk_0x8A22C4C08282BF26(joaat("chop")) == 0x00000000)
						{
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 19.3f, 528.24f, 169.63f, 0x00000001) > 50f)
							{
								func_8(0x0000008B, 0x00000001, 0x00000000);
							}
						}
					}
				}
				else
				{
					if (func_9(0x0000008B))
					{
						func_8(0x0000008B, 0x00000000, 0x00000000);
					}
					if (!func_9(0x0000008A))
					{
						if (unk_0x8A22C4C08282BF26(joaat("chop")) == 0x00000000)
						{
							if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), -11.15f, -1425.56f, 29.67f, 0x00000001) > 50f)
							{
								func_8(0x0000008A, 0x00000001, 0x00000000);
							}
						}
					}
				}
			}
		}
	}
}

void func_8(int iParam0, bool bParam1, bool bParam2)
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

bool func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0x00000000;
	}
	return unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13);
}

int func_10(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_11()
{
	vector3 vVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	
	if (unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
	{
		return;
	}
	vVar0 = { func_17(unk_0xA30EC016B12C03E4()) };
	iVar1 = 0xFFFFFFFF;
	fVar2 = 1000000f;
	iVar3 = 0x00000000;
	iVar3 = 0x00000000;
	while (iVar3 < 0x00000007)
	{
		if (iLocal_51[iVar3] != 0xFFFFFFFF)
		{
			if (unk_0xE4EDC4B0E92C078B(Global_79AA[iLocal_51[iVar3] /*23*/].f_13))
			{
				fVar4 = unk_0x0EB28750412C3A5A(vVar0, unk_0xAC14F6E4B17D7835(Global_79AA[iLocal_51[iVar3] /*23*/].f_13), 0x00000001);
				if (fVar4 < fVar2)
				{
					fVar2 = fVar4;
					iVar1 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (iLocal_49 == iVar1)
	{
		return;
	}
	iLocal_49 = iVar1;
	if (iVar1 == 0xFFFFFFFF)
	{
		return;
	}
	iVar3 = 0x00000000;
	while (iVar3 < 0x00000007)
	{
		if (iLocal_51[iVar3] != 0xFFFFFFFF)
		{
			if (iVar3 == iVar1)
			{
				if (unk_0xE4EDC4B0E92C078B(Global_79AA[iLocal_51[iVar3] /*23*/].f_13))
				{
					func_16(iLocal_51[iVar3]);
				}
			}
			else if (unk_0xE4EDC4B0E92C078B(Global_79AA[iLocal_51[iVar3] /*23*/].f_13))
			{
				func_12(iLocal_51[iVar3]);
			}
		}
		iVar3++;
	}
}

void func_12(int iParam0)
{
	func_15(iParam0, 0x00000000, 0x00000000);
	func_14(iParam0, 0x00000001);
	func_13(iParam0, 0x00000001);
}

void func_13(int iParam0, bool bParam1)
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

void func_14(int iParam0, bool bParam1)
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

void func_15(int iParam0, bool bParam1, bool bParam2)
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

void func_16(int iParam0)
{
	func_15(iParam0, 0x00000001, 0x00000000);
	func_14(iParam0, 0x00000001);
	func_13(iParam0, 0x00000001);
}

Vector3 func_17(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

void func_18(int iParam0)
{
	int iVar0;
	
	if (iLocal_50 < 0x00000001)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		if (iLocal_51[iVar0] == iParam0)
		{
			iLocal_50 = (iLocal_50 - 0x00000001);
			iLocal_51[iVar0] = 0xFFFFFFFF;
			if (iParam0 == iLocal_49)
			{
				iLocal_49 = 0xFFFFFFFF;
			}
			return;
		}
		iVar0++;
	}
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iLocal_50 == 0x00000007)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar1 = 0xFFFFFFFF;
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_50)
	{
		if (iLocal_51[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		if (iLocal_51[iVar0] == 0xFFFFFFFF)
		{
			iVar1 = iVar0;
			iVar0 = 0x00000007;
		}
		iVar0++;
	}
	iLocal_51[iVar1] = iParam0;
	iLocal_50++;
}

void func_20(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = func_1();
	unk_0xA6B0C9C2D8FC9744(iParam0, 0x00000001);
	unk_0x2A065371C9D96655(iParam0, 0x00000002);
	unk_0x61755AC17D8F538E(iParam0, func_22(iParam1));
	if (Global_79AA[iParam1 /*23*/].f_10 == 0x00000004 || Global_79AA[iParam1 /*23*/].f_10 == 0x00000008)
	{
		switch (iVar0)
		{
			case 0x00000000:
				unk_0x61755AC17D8F538E(iParam0, 0x0000002A);
				break;
			
			case 0x00000001:
				unk_0x61755AC17D8F538E(iParam0, 0x0000002B);
				break;
			
			case 0x00000002:
				unk_0x61755AC17D8F538E(iParam0, 0x0000002C);
				break;
			}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam1 /*23*/].f_B, 0x0000001C))
	{
		unk_0x516E63E474722206(iParam0, 1f);
	}
	if (!unk_0xEA6BC48857E0AC4C(&(Global_79AA[iParam1 /*23*/].f_14)))
	{
		if (unk_0xEF07223F00EBE9C9(&(Global_79AA[iParam1 /*23*/].f_14)))
		{
			unk_0xDC5B2F9D0CCE3A10(iParam0, &(Global_79AA[iParam1 /*23*/].f_14));
		}
	}
	bVar1 = unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam1 /*23*/].f_B, 0x00000004);
	bVar2 = unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam1 /*23*/].f_B, 0x00000005);
	bVar3 = unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam1 /*23*/].f_B, 0x00000006);
	bVar4 = 0x00000000;
	if (func_21(0x00000000))
	{
		bVar4 = unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam1 /*23*/].f_B, 0x0000000B);
	}
	if (bVar3 && !bVar4)
	{
		unk_0x6ABCCE651368DB93(iParam0, 0x00000000);
	}
	else
	{
		unk_0x6ABCCE651368DB93(iParam0, 0x00000001);
	}
	if (bVar2 && bVar1)
	{
		unk_0x9D7CDDB4B55142AF(iParam0, 0x00000004);
	}
	else
	{
		if (bVar2)
		{
			unk_0x9D7CDDB4B55142AF(iParam0, 0x00000005);
		}
		if (bVar1)
		{
			unk_0x9D7CDDB4B55142AF(iParam0, 0x00000003);
		}
	}
	switch (Global_79AA[iParam1 /*23*/].f_10)
	{
		case 0x00000007:
			unk_0x2A065371C9D96655(iParam0, 0x00000002);
			unk_0xDBA4FB345B87DECC(iParam0, 0x00000000);
			break;
		
		case 0x00000006:
		case 0x00000005:
			unk_0x2A065371C9D96655(iParam0, 0x00000002);
			unk_0xDBA4FB345B87DECC(iParam0, 0x00000000);
			break;
		
		case 0x00000001:
			unk_0x2A065371C9D96655(iParam0, 0x00000003);
			unk_0xDBA4FB345B87DECC(iParam0, 0x00000001);
			break;
		
		case 0x00000009:
			unk_0x2A065371C9D96655(iParam0, 0x00000001);
			unk_0x5C75F8C0E612F520(iParam0, 0x0000000A);
			unk_0xDBA4FB345B87DECC(iParam0, 0x00000000);
			break;
		
		case 0x00000004:
		case 0x00000008:
			unk_0xDBA4FB345B87DECC(iParam0, 0x00000001);
			if (Global_79AA[iParam1 /*23*/].f_10 == 0x00000004)
			{
				unk_0x2A065371C9D96655(iParam0, 0x00000007);
			}
			else
			{
				unk_0x2A065371C9D96655(iParam0, 0x00000005);
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam1 /*23*/].f_B, 0x00000008))
			{
				if (!func_29(iParam1))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam1 /*23*/].f_B, 0x0000001C))
					{
						unk_0x7F010F50CE03A8AF(iParam0, 0x00000000);
					}
					else
					{
						if (Global_79AA[iParam1 /*23*/].f_11 == 0x00000000)
						{
							unk_0x61755AC17D8F538E(iParam0, 0x0000002A);
						}
						if (Global_79AA[iParam1 /*23*/].f_11 == 0x00000001)
						{
							unk_0x61755AC17D8F538E(iParam0, 0x0000002B);
						}
						if (Global_79AA[iParam1 /*23*/].f_11 == 0x00000002)
						{
							unk_0x61755AC17D8F538E(iParam0, 0x0000002C);
						}
						if (Global_79AA[iParam1 /*23*/].f_10 == 0x00000008)
						{
							unk_0x6ABCCE651368DB93(iParam0, unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam1 /*23*/].f_B, 0x00000005));
							unk_0x2A065371C9D96655(iParam0, 0x00000003);
							unk_0x6ABCCE651368DB93(iParam0, 0x00000001);
							unk_0x54B31D18C3F36EB7(iParam0, 0x00000001);
							unk_0x516E63E474722206(iParam0, 0.77f);
						}
						else
						{
							unk_0x516E63E474722206(iParam0, 0.72f);
						}
					}
				}
				else
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam1 /*23*/].f_B, 0x0000001C))
					{
						unk_0x7F010F50CE03A8AF(iParam0, 0x00000080);
					}
					if (Global_79AA[iParam1 /*23*/].f_10 == 0x00000008)
					{
						unk_0x54B31D18C3F36EB7(iParam0, 0x00000000);
					}
				}
			}
			break;
		
		default:
			unk_0x2A065371C9D96655(iParam0, 0x00000005);
			break;
	}
	switch (iParam1)
	{
		case 0x00000030:
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
			unk_0xDBA4FB345B87DECC(iParam0, 0x00000001);
			break;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam1 /*23*/].f_B, 0x00000013))
	{
		switch (iVar0)
		{
			case 0x00000001:
			case 0x00000000:
			case 0x00000002:
				unk_0x2F9282246F89FFD1(Global_79AA[iParam1 /*23*/].f_13, Global_79AA[iParam1 /*23*/][iVar0 /*3*/]);
				break;
			}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam1 /*23*/].f_B, 0x00000011))
	{
		unk_0x81232862B3277CAA(iParam0, 0x00000001);
	}
	else
	{
		unk_0x81232862B3277CAA(iParam0, 0x00000000);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam1 /*23*/].f_B, 0x00000014))
	{
		unk_0xE20923FF0A82B068(iParam0, 0x00000001);
	}
	else
	{
		unk_0xE20923FF0A82B068(iParam0, 0x00000000);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam1 /*23*/].f_B, 0x0000001D))
	{
		unk_0x61755AC17D8F538E(iParam0, 0x00000027);
	}
}

int func_21(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_30(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0x00000000;
	}
	iVar1 = unk_0xDC4DD3980107166C(Global_79AA[iVar0 /*23*/].f_B, 0x00000015, 0x0000001A);
	return iVar1;
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		func_24(iVar0);
		iVar0++;
	}
}

void func_24(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 0x0000000A)
	{
		return;
	}
	if (Global_16E56[iParam0 /*10*/].f_7 == 0x00000107)
	{
		return;
	}
	bVar0 = 0x00000000;
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iParam0], 0x00000000))
	{
		if (Global_16E56[iParam0 /*10*/].f_9 != func_28())
		{
			bVar0 = 0x00000001;
		}
		else if (!func_26(iParam0))
		{
			bVar0 = 0x00000001;
		}
	}
	if (iParam0 == 0x00000005)
	{
		if (func_25(0x00000006))
		{
			bVar0 = 0x00000000;
		}
	}
	if (func_21(0x0000000E))
	{
		bVar0 = 0x00000000;
	}
	func_8(Global_16E56[iParam0 /*10*/].f_7, bVar0, 0x00000000);
}

bool func_25(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iParam0], 0x00000000);
}

int func_26(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (Global_181EC.f_157 == 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 == 0x0000000A)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x0000000A)
		{
			if (func_26(iVar0))
			{
				return 0x00000001;
			}
			iVar0++;
		}
	}
	else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		func_27(iParam0, &sVar1);
		iVar2 = unk_0x0D1736C2E221BCEA(Global_16E56[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0x00000000 && Global_181EC.f_157 == iVar2)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_27(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 0x00000005:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 0x00000006:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (unk_0xBCFF5481C5F58C19("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0xBCFF5481C5F58C19("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0xBCFF5481C5F58C19("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 0x00000003:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 0x00000004:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 0x00000008:
		case 0x00000007:
		case 0x00000009:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0x7F8A39872A07D2CE(sParam1, "");
}

int func_28()
{
	func_2();
	return Global_1B416.f_936.f_21B.f_10E1;
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return 0x00000000;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000008))
	{
		return 0x00000000;
	}
	if (Global_79AA[iVar0 /*23*/].f_11 == func_1())
	{
		return 0x00000001;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x0000000A))
	{
		return 0x00000000;
	}
	if (Global_79AA[iVar0 /*23*/].f_12 == func_1())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_30(int iParam0)
{
	return func_31(iParam0, Global_A1D7);
}

int func_31(int iParam0, int iParam1)
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

bool func_32(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_33()
{
	if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) != 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_34(int iParam0)
{
	if (iLocal_57 && unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam0 /*23*/].f_B, 0x0000000D))
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iParam0 /*23*/].f_B), 0x00000012);
		return 0x00000001;
	}
	if (iLocal_58 && ((unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam0 /*23*/].f_B, 0x00000007) || unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam0 /*23*/].f_B, 0x0000000B)) || unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam0 /*23*/].f_B, 0x00000010)))
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iParam0 /*23*/].f_B), 0x00000012);
		return 0x00000001;
	}
	if (iLocal_59 && unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam0 /*23*/].f_B, 0x0000000E))
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iParam0 /*23*/].f_B), 0x00000012);
		return 0x00000001;
	}
	if (iLocal_54 && ((unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam0 /*23*/].f_B, 0x0000000A) || unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam0 /*23*/].f_B, 0x00000008)) || unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam0 /*23*/].f_B, 0x00000013)))
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iParam0 /*23*/].f_B), 0x00000012);
		return 0x00000001;
	}
	if (bLocal_55)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iParam0 /*23*/].f_B), 0x00000012);
		return 0x00000001;
	}
	if (iLocal_61 && unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam0 /*23*/].f_B, 0x0000001B))
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iParam0 /*23*/].f_B), 0x00000012);
		return 0x00000001;
	}
	if ((iLocal_62 && (unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam0 /*23*/].f_B, 0x00000001) || unk_0xEAE0D21A50E6C7F4(Global_79AA[iParam0 /*23*/].f_B, 0x00000002))) || Global_79AA[iParam0 /*23*/].f_10 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iParam0 /*23*/].f_B), 0x00000012);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_35()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (func_41())
	{
		if (!iLocal_56)
		{
			iLocal_56 = 0x00000001;
			iVar0 = 0x00000001;
		}
	}
	if (func_40())
	{
		if (!iLocal_57)
		{
			iLocal_57 = 0x00000001;
			iVar0 = 0x00000001;
		}
	}
	if (func_39())
	{
		if (!iLocal_58)
		{
			iLocal_58 = 0x00000001;
			iVar0 = 0x00000001;
		}
	}
	if (func_38())
	{
		if (!iLocal_59)
		{
			iLocal_59 = 0x00000001;
			iVar0 = 0x00000001;
		}
	}
	bLocal_55 = 0x00000000;
	if (Global_914D != iLocal_60)
	{
		iLocal_60 = Global_914D;
		if (!bLocal_55)
		{
			bLocal_55 = 0x00000001;
			iVar0 = 0x00000001;
		}
	}
	if (func_36())
	{
		if (!iLocal_62)
		{
			iLocal_62 = 0x00000001;
			iVar0 = 0x00000001;
		}
	}
	iLocal_53 = func_1();
	if (iLocal_53 != iLocal_52)
	{
		iLocal_52 = iLocal_53;
		iLocal_54 = 0x00000001;
		iVar0 = 0x00000001;
	}
	iLocal_42 = bLocal_41;
	if (func_10(0x00000082))
	{
		bLocal_41 = 0x00000001;
	}
	if (func_10(0x00000083))
	{
		bLocal_41 = 0x00000000;
	}
	if (bLocal_41 != iLocal_42)
	{
		if (!iLocal_61)
		{
			iVar0 = 0x00000001;
		}
		iLocal_61 = 0x00000001;
	}
	return iVar0;
}

int func_36()
{
	int iVar0;
	
	if (unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x4D570FEF9D230CE7(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()));
	if (iLocal_47 != iVar0)
	{
		iLocal_47 = iVar0;
		if (iVar0 == 0x00000000 || func_37(iVar0))
		{
			bLocal_46 = 0x00000001;
		}
		else
		{
			bLocal_46 = 0x00000000;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000003C)
	{
		if (Global_1E[iVar0] == iParam0)
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_38()
{
	if (iLocal_48 != func_21(0x00000000))
	{
		iLocal_48 = func_21(0x00000000);
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_39()
{
	bool bVar0;
	
	bVar0 = Global_914E;
	Global_914E = 0x00000000;
	if (bVar0)
	{
	}
	return bVar0;
}

int func_40()
{
	if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) != iLocal_45)
	{
		iLocal_45 = unk_0x179932739160BA96(unk_0xA30EC016B12C03E4());
		return 0x00000001;
	}
	return 0x00000000;
}

int func_41()
{
	if (Global_A1D7 != 0x0000000F)
	{
		return 0x00000000;
	}
	if (unk_0xD8A54335F18763BA() != iLocal_44)
	{
		iLocal_44 = unk_0xD8A54335F18763BA();
		return 0x00000001;
	}
	return 0x00000000;
}

void func_42()
{
	iLocal_54 = 0x00000000;
	bLocal_55 = 0x00000000;
	iLocal_56 = 0x00000000;
	iLocal_57 = 0x00000000;
	iLocal_58 = 0x00000000;
	iLocal_59 = 0x00000000;
	iLocal_60 = 0x00000000;
	iLocal_61 = 0x00000000;
	iLocal_62 = 0x00000000;
}

void func_43()
{
	if (func_44(0x00000000) == 0x00000001 && !func_32(0x00000006))
	{
		func_8(0x00000070, 0x00000001, 0x00000000);
		func_8(0x00000071, 0x00000001, 0x00000000);
		func_8(0x00000072, 0x00000001, 0x00000000);
	}
}

int func_44(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

void func_45()
{
	if (func_44(0x00000000) == 0x00000001 && !func_32(0x00000006))
	{
		func_8(0x0000009C, 0x00000001, 0x00000000);
		func_8(0x0000009D, 0x00000001, 0x00000000);
		func_8(0x000000A1, 0x00000001, 0x00000000);
		func_8(0x000000A0, 0x00000001, 0x00000000);
		func_8(0x0000009E, 0x00000001, 0x00000000);
		func_12(0x0000009E);
		func_8(0x0000009F, 0x00000001, 0x00000000);
		func_12(0x0000009F);
	}
}

void func_46(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (bParam1 == unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000002))
	{
		return;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000002);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000002);
	}
	if (Global_79A7 == 0x00000001)
	{
		Global_79A8 = 0x00000001;
	}
	Global_79A7 = 0x00000001;
	unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
}

void func_47(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	StringCopy(&(Global_79AA[iVar0 /*23*/].f_14), sParam1, 8);
	if (unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13))
	{
		unk_0xDC5B2F9D0CCE3A10(Global_79AA[iVar0 /*23*/].f_13, sParam1);
	}
}

char* func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "SB_SAL";
			break;
		
		case 0x00000001:
			return "SB_BAR";
			break;
		
		case 0x00000002:
			return "SB_BAR";
			break;
		
		case 0x00000003:
			return "SB_BAR";
			break;
		
		case 0x00000004:
			return "SB_BAR";
			break;
		
		case 0x00000005:
			return "SB_BAR";
			break;
		
		case 0x00000006:
			return "SB_BAR";
			break;
		
		case 0x00000007:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x00000008:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x00000009:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x0000000A:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x0000000B:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x0000000C:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x0000000D:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x0000000E:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x0000000F:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x00000010:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x00000011:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x00000012:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x00000013:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x00000014:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x00000015:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x00000016:
			return "SB_TAT";
			break;
		
		case 0x00000017:
			return "SB_TAT";
			break;
		
		case 0x00000018:
			return "SB_TAT";
			break;
		
		case 0x00000019:
			return "SB_TAT";
			break;
		
		case 0x0000001A:
			return "SB_TAT";
			break;
		
		case 0x0000001B:
			return "SB_TAT";
			break;
		
		case 0x0000001C:
			return "SB_AMU2";
			break;
		
		case 0x0000001D:
			return "SB_AMU";
			break;
		
		case 0x0000001E:
			return "SB_AMU";
			break;
		
		case 0x0000001F:
			return "SB_AMU";
			break;
		
		case 0x00000020:
			return "SB_AMU";
			break;
		
		case 0x00000021:
			return "SB_AMU";
			break;
		
		case 0x00000022:
			return "SB_AMU";
			break;
		
		case 0x00000023:
			return "SB_AMU";
			break;
		
		case 0x00000024:
			return "SB_AMU";
			break;
		
		case 0x00000025:
			return "SB_AMU";
			break;
		
		case 0x00000026:
			return "SB_AMU2";
			break;
		
		case 0x00000027:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x00000028:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x00000029:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x0000002A:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x0000002B:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x0000002C:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x0000002D:
			return func_49(iParam0, 0x00000000);
			break;
		
		case 0x0000002E:
			return "SB_AMU";
			break;
		
		case 0x0000002F:
			return "SB_AMU";
			break;
		
		case 0x00000030:
			return "SB_AMU";
			break;
		
		case 0x00000031:
			return "SB_AMU";
			break;
		
		case 0x00000034:
			return "SB_AMU";
			break;
		
		case 0x00000032:
			return "SB_BAR";
			break;
		
		case 0x00000033:
			return "S_CL_BL";
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return "S_N_EM";
			break;
		
		case 0x00000000:
			return "S_H_01";
			break;
		
		case 0x00000001:
			return "S_H_02";
			break;
		
		case 0x00000002:
			return "S_H_03";
			break;
		
		case 0x00000003:
			return "S_H_04";
			break;
		
		case 0x00000004:
			return "S_H_05";
			break;
		
		case 0x00000005:
			return "S_H_06";
			break;
		
		case 0x00000006:
			return "S_H_07";
			break;
		
		case 0x00000007:
			return "S_CL_01";
			break;
		
		case 0x00000008:
			return "S_CL_02";
			break;
		
		case 0x00000009:
			return "S_CL_03";
			break;
		
		case 0x0000000A:
			return "S_CL_04";
			break;
		
		case 0x0000000B:
			return "S_CL_05";
			break;
		
		case 0x0000000C:
			return "S_CL_06";
			break;
		
		case 0x0000000D:
			return "S_CL_07";
			break;
		
		case 0x0000000E:
			return "S_CM_01";
			break;
		
		case 0x0000000F:
			return "S_CM_03";
			break;
		
		case 0x00000010:
			return "S_CM_04";
			break;
		
		case 0x00000011:
			return "S_CM_05";
			break;
		
		case 0x00000012:
			return "S_CH_01";
			break;
		
		case 0x00000013:
			return "S_CH_02";
			break;
		
		case 0x00000014:
			return "S_CH_03";
			break;
		
		case 0x00000015:
			return "S_CA_01";
			break;
		
		case 0x00000016:
			return "S_T_01";
			break;
		
		case 0x00000017:
			return "S_T_02";
			break;
		
		case 0x00000018:
			return "S_T_03";
			break;
		
		case 0x00000019:
			return "S_T_04";
			break;
		
		case 0x0000001A:
			return "S_T_05";
			break;
		
		case 0x0000001B:
			return "S_T_06";
			break;
		
		case 0x0000001C:
			return "S_G_01";
			break;
		
		case 0x0000001D:
			return "S_G_02";
			break;
		
		case 0x0000001E:
			return "S_G_03";
			break;
		
		case 0x0000001F:
			return "S_G_04";
			break;
		
		case 0x00000020:
			return "S_G_05";
			break;
		
		case 0x00000021:
			return "S_G_06";
			break;
		
		case 0x00000022:
			return "S_G_07";
			break;
		
		case 0x00000023:
			return "S_G_08";
			break;
		
		case 0x00000024:
			return "S_G_09";
			break;
		
		case 0x00000025:
			return "S_G_10";
			break;
		
		case 0x00000026:
			return "S_G_11";
			break;
		
		case 0x00000027:
			return "S_MO_01";
			break;
		
		case 0x00000028:
			return "S_MO_05";
			break;
		
		case 0x00000029:
			return "S_MO_06";
			break;
		
		case 0x0000002A:
			return "S_MO_07";
			break;
		
		case 0x0000002B:
			return "S_MO_08";
			break;
		
		case 0x0000002C:
			return "S_MO_09";
			break;
		
		case 0x0000002D:
			switch (iParam1)
			{
				case 0x00000004:
				case 0x00000005:
					return "S_MO_10";
				
				case 0x0000000B:
					return "S_MO_B";
				
				case 0x0000000A:
					return "S_MO_T";
				
				case 0x0000000C:
					return "S_MO_HA";
				
				case 0x0000000D:
					return "S_MO_AOC";
				
				case 0x0000000E:
					return "S_MO_AOC";
					break;
				
				case 0x0000000F:
					return "S_MO_AOC";
					break;
				
				case 0x00000010:
					return "S_MO_AOC";
					break;
				
				case 0x00000011:
					return "S_MO_AOC";
					break;
			}
			return "S_MO_11";
			break;
		
		case 0x0000002E:
			return "S_G_12";
			break;
		
		case 0x0000002F:
			return "S_G_13";
			break;
		
		case 0x00000030:
			return "S_G_14";
			break;
		
		case 0x00000031:
			return "S_G_15";
			break;
		
		case 0x00000034:
			return "S_G_16";
			break;
		
		case 0x00000032:
			return "S_H_08";
			break;
		
		case 0x00000033:
			return "S_CL_09";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000107;
			break;
		
		case 0x00000000:
			return 0x00000013;
			break;
		
		case 0x00000001:
			return 0x00000014;
			break;
		
		case 0x00000002:
			return 0x00000015;
			break;
		
		case 0x00000003:
			return 0x00000016;
			break;
		
		case 0x00000004:
			return 0x00000017;
			break;
		
		case 0x00000005:
			return 0x00000018;
			break;
		
		case 0x00000006:
			return 0x00000019;
			break;
		
		case 0x00000007:
			return 0x0000001A;
			break;
		
		case 0x00000008:
			return 0x0000001B;
			break;
		
		case 0x00000009:
			return 0x0000001C;
			break;
		
		case 0x0000000A:
			return 0x0000001D;
			break;
		
		case 0x0000000B:
			return 0x0000001E;
			break;
		
		case 0x0000000C:
			return 0x0000001F;
			break;
		
		case 0x0000000D:
			return 0x00000020;
			break;
		
		case 0x0000000E:
			return 0x00000021;
			break;
		
		case 0x0000000F:
			return 0x00000023;
			break;
		
		case 0x00000010:
			return 0x00000024;
			break;
		
		case 0x00000011:
			return 0x00000025;
			break;
		
		case 0x00000012:
			return 0x00000026;
			break;
		
		case 0x00000013:
			return 0x00000027;
			break;
		
		case 0x00000014:
			return 0x00000028;
			break;
		
		case 0x00000015:
			return 0x00000029;
			break;
		
		case 0x00000016:
			return 0x0000002A;
			break;
		
		case 0x00000017:
			return 0x0000002B;
			break;
		
		case 0x00000018:
			return 0x0000002C;
			break;
		
		case 0x00000019:
			return 0x0000002D;
			break;
		
		case 0x0000001A:
			return 0x0000002E;
			break;
		
		case 0x0000001B:
			return 0x0000002F;
			break;
		
		case 0x0000001C:
			return 0x00000030;
			break;
		
		case 0x0000001D:
			return 0x00000031;
			break;
		
		case 0x0000001E:
			return 0x00000032;
			break;
		
		case 0x0000001F:
			return 0x00000033;
			break;
		
		case 0x00000020:
			return 0x00000034;
			break;
		
		case 0x00000021:
			return 0x00000035;
			break;
		
		case 0x00000022:
			return 0x00000036;
			break;
		
		case 0x00000023:
			return 0x00000037;
			break;
		
		case 0x00000024:
			return 0x00000038;
			break;
		
		case 0x00000025:
			return 0x00000039;
			break;
		
		case 0x00000026:
			return 0x0000003A;
			break;
		
		case 0x00000027:
			return 0x0000003B;
			break;
		
		case 0x00000028:
			return 0x0000003C;
			break;
		
		case 0x00000029:
			return 0x0000003D;
			break;
		
		case 0x0000002A:
			return 0x0000003E;
			break;
		
		case 0x0000002B:
			return 0x0000003F;
			break;
		
		case 0x0000002C:
			return 0x00000040;
			break;
		
		case 0x0000002D:
			return 0x00000040;
			break;
		
		case 0x0000002E:
			return 0x00000030;
			break;
		
		case 0x0000002F:
			return 0x00000030;
			break;
		
		case 0x00000030:
			return 0x00000030;
			break;
		
		case 0x00000031:
			return 0x00000030;
			break;
		
		case 0x00000034:
			return 0x00000030;
			break;
		
		case 0x00000032:
			return 0x00000019;
			break;
		
		case 0x00000033:
			return 0x00000028;
			break;
		
		default:
			break;
	}
	return 0x00000107;
}

void func_51()
{
	unk_0x10FAF14A60A0DBE1();
}

