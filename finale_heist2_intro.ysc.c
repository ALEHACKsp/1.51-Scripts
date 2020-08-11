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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_20();
	}
	unk_0x7798376279BB5369(0x00000001);
	func_19(0x00000000);
	func_18();
	unk_0x0B829D8941541846();
	while (!bVar1)
	{
		iVar0 = unk_0xFB4801CB12B6D136();
		if (unk_0x7F8A39872A07D2CE(unk_0x9D0727E40F864DF5(iVar0), "heist_ctrl_finale"))
		{
			bVar1 = 0x00000001;
		}
	}
	unk_0x357FE4830F757FC1(iVar0);
	func_17();
	func_1(96.7f, -1288.1f, 28.1f, 104.5f, -1301f, 30f, 2f, 118.3f, -1309.7f, 29f, 120f, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
	func_20();
}

void func_1(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_2(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_2(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = 0x00000000;
	}
	bVar2 = 0x00000001;
	iVar3 = 0x00000000;
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0xAF6690C489CC6203(iVar0))
		{
			unk_0x73270B3C9CC833FD(iVar0, 0x00000001, 0x00000000);
			iVar3 = 0x00000001;
		}
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			if (bParam10)
			{
				func_16(iVar0);
			}
			if (unk_0x3D1053F9EB43B7AD(iVar0, vParam0, vParam1, fParam2, 0x00000000, 0x00000001, 0x00000000))
			{
				bVar1 = 0x00000001;
			}
			else
			{
				vVar6 = { unk_0x68F4C0EC296D3901(iVar0, 0x00000001) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_13(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = 0x00000001;
					}
				}
			}
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (unk_0x4906F8A34E9F4814(iVar0, joaat("taxi")))
				{
					if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) != unk_0x16F2683693E537C9() && unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) != 0x00000000)
					{
						if (unk_0x0EB28750412C3A5A(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0x68F4C0EC296D3901(iVar0, 0x00000001), 0x00000001) < 20f)
						{
							bVar1 = 0x00000001;
							bVar2 = 0x00000000;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_4(iVar0, func_6(), 0x00000001))
				{
					bVar1 = 0x00000000;
				}
			}
			if (bVar1)
			{
				if (!func_3(vParam5))
				{
					if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
					{
						iVar7 = unk_0x134B62B726CEC8E6(iVar0);
						unk_0x064C1B2FD84B6ED5(iVar0, &vVar4, &vVar5);
						if (unk_0xAFB8495D36825275(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							vParam5 = { vParam5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							vParam5 = { vParam5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = 0x00000000;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = 0x00000000;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = 0x00000000;
						}
					}
				}
				if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
				{
					if (bVar2)
					{
						unk_0x28F5E4DA506AC0CA(vParam3, 5f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xD8F6A53F4799FAFE(iVar0, fParam4);
						unk_0xA47B46945FF6DE74(iVar0, vParam3, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						unk_0xB9FD7450C0DAB575(iVar0, 0x40A00000);
						if (bParam9)
						{
							unk_0x56FDC9ADE35F7DB0(iVar0, 0x00000000, 0x00000001, 0x00000000);
							unk_0x05CA0E7946B27A19(iVar0, 0x00000001);
						}
					}
					else
					{
						if (!unk_0xAF6690C489CC6203(iVar0) || !unk_0x9C77D2D0559097F0(iVar0, 0x00000001))
						{
							unk_0x73270B3C9CC833FD(iVar0, 0x00000001, 0x00000001);
						}
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0x00000000))
						{
							unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iVar0, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
						}
						unk_0xA954465BA6FDEFE2(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0x10F452EDECF82313(vParam0, vParam1, fParam2, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (iVar3 == 0x00000001)
			{
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (unk_0xAF6690C489CC6203(iVar0))
					{
						unk_0x046C362CF15F1935(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xAF6690C489CC6203(iVar0))
			{
				unk_0x73270B3C9CC833FD(iVar0, 0x00000001, 0x00000000);
			}
			iVar8 = unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
			{
				unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			}
			iVar9 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
			if (iVar9 <= 0x00000002)
			{
				iVar8 = unk_0xA30B8362589C124A(iVar0, 0x00000000, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
			}
			if (iVar9 <= 0x00000004)
			{
				iVar8 = unk_0xA30B8362589C124A(iVar0, 0x00000001, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
				iVar8 = unk_0xA30B8362589C124A(iVar0, 0x00000002, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				}
			}
			unk_0xA954465BA6FDEFE2(&iVar0);
		}
	}
}

int func_3(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_4(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_5(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iVar2], 0x00000000))
		{
			if (unk_0x5B6BEDD9A86023B7(&sVar1, iParam0))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_5(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0x00000000;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 0x00000001;
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 0x00000005;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 0x00000006;
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000000)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 0x00000002;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000001)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 0x00000003;
				return 0x00000001;
			}
			else if (iParam1 == 0x00000002)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 0x00000004;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_6()
{
	func_7();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_7()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_11(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_10(unk_0x16F2683693E537C9());
			if (func_9(iVar0) && (!func_8(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_9(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_8(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_9(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return func_12(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_12(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_13(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_15(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &Var7, &Var8);
		vVar6[0x00000000 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[0x00000001 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[0x00000002 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[0x00000003 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_14(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar2, vVar3) || func_14(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar3, vVar5)) || func_14(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar4, vVar5)) || func_14(vVar6[0x00000000 /*3*/], vVar6[0x00000001 /*3*/], vVar2, vVar4)) || func_14(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar2, vVar3)) || func_14(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar3, vVar5)) || func_14(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar4, vVar5)) || func_14(vVar6[0x00000001 /*3*/], vVar6[0x00000003 /*3*/], vVar2, vVar4)) || func_14(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar2, vVar3)) || func_14(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar3, vVar5)) || func_14(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar4, vVar5)) || func_14(vVar6[0x00000003 /*3*/], vVar6[0x00000002 /*3*/], vVar2, vVar4)) || func_14(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar2, vVar3)) || func_14(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar3, vVar5)) || func_14(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar4, vVar5)) || func_14(vVar6[0x00000002 /*3*/], vVar6[0x00000000 /*3*/], vVar2, vVar4))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_14(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_15(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_16(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0x6EE94F60DA2A2273(iParam0) <= 200f)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 500f);
			}
			if (unk_0xD96C5EC6FCB061BA(iParam0) <= 700f)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 900f);
			}
			if (unk_0x7F6DC62EA9922664(iParam0) < 0x000000C8)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 500f);
			}
		}
	}
}

void func_17()
{
	Global_1B046 = 0x00000001;
}

void func_18()
{
	int iVar0;
	
	iVar0 = func_6();
	switch (iVar0)
	{
		case 0x00000000:
			unk_0x8E590B419F1E5182("BS_2A_2B_INT", 0x0000000C, 0x00000008);
			break;
		
		case 0x00000001:
			unk_0x8E590B419F1E5182("BS_2A_2B_INT", 0x0000000E, 0x00000008);
			break;
		
		case 0x00000002:
			unk_0xAE1670DD12E839C3("BS_2A_2B_INT", 0x00000008);
			break;
	}
	while (!unk_0xA0F4292EA950943D("BS_2A_2B_INT"))
	{
		SYSTEM::WAIT(0x00000000);
	}
}

void func_19(int iParam0)
{
	Global_126B1.f_8A = iParam0;
}

void func_20()
{
	func_25(0x00000018, 0x00000001);
	func_21(0x00000001, 0x00000000);
	unk_0x10FAF14A60A0DBE1();
}

void func_21(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_F04A)
	{
		Global_F04A = iParam1;
	}
	if (bParam0)
	{
		if ((func_24(0x00000000) && Global_12C44.f_1 == 0x00000001) && func_23(Global_12C44))
		{
		}
		else
		{
			Global_F048 = 0x00000001;
		}
	}
	if (Global_1B416.f_2378 || func_24(0x00000000))
	{
		iVar0 = func_22();
		iVar1 = Global_15D98[iVar0 /*5*/];
		uVar2 = Global_12C5B.f_6D[iVar1 /*4*/];
		if (iVar0 == 0xFFFFFFFF)
		{
			if (Global_1B416.f_2378)
			{
			}
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iVar0 /*5*/].f_1, 0x00000004))
		{
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iVar0 /*5*/].f_1, 0x00000005))
		{
			return;
		}
		unk_0x5D96D8530B3D0904(&(Global_15D98[iVar0 /*5*/].f_1), 0x00000004);
		unk_0x5D96D8530B3D0904(&Global_12C46, 0x00000001);
		Global_12C56 = uVar2;
		Global_12C57 = unk_0x1C0640BA9A7327B3();
	}
}

int func_22()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000007)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iVar0 /*5*/].f_1, 0x00000002))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000047:
			return 0x00000001;
			break;
		
		case 0x00000056:
			return 0x00000001;
			break;
		
		case 0x0000005B:
			return 0x00000001;
			break;
		
		default:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

bool func_24(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_25(int iParam0, int iParam1)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1B416.f_2378.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_1B416.f_2378.f_63.f_3A[iParam0] = iParam1;
}

