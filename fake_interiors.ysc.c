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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	vector3 vLocal_30 = { 0f, 0f, 0f };
	int iLocal_31 = 0;
	int iLocal_32 = 0;
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
	iLocal_29 = 0xFFFFFFFF;
	vLocal_30 = { 0f, 0f, 0f };
	if (unk_0x2EBF608FFE6CA406(0x00000002))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (!unk_0x8CD06866876216F2())
		{
			unk_0x10FAF14A60A0DBE1();
		}
		if (func_23(unk_0xD803B885F5E47A62()) && unk_0xC844350D5D58C99A(func_22()))
		{
			iLocal_31 = func_22();
		}
		else
		{
			iLocal_31 = unk_0x16F2683693E537C9();
		}
		if (unk_0x437347B10A200C4B(iLocal_31, 0x00000000))
		{
		}
		func_1();
	}
}

void func_1()
{
	vector3 vVar0;
	vector3 vVar1;
	bool bVar2;
	int iVar3;
	
	func_21();
	if (iLocal_29 != 0xFFFFFFFF && func_20(iLocal_29))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iLocal_31, 0x00000000) };
		vVar1 = { func_19(iLocal_29) };
		if (SYSTEM::VDIST2(vVar1, vVar0) < IntToFloat(func_18(iLocal_29)))
		{
			bVar2 = 0x00000000;
			iVar3 = 0x00000000;
			iVar3 = 0x00000000;
			while (iVar3 < func_17(iLocal_29))
			{
				if (!bVar2)
				{
					if (unk_0x3D1053F9EB43B7AD(iLocal_31, func_16(iLocal_29, iVar3), func_15(iLocal_29, iVar3), func_14(iLocal_29, iVar3), 0x00000000, 0x00000001, 0x00000000))
					{
						bVar2 = 0x00000001;
					}
				}
				iVar3++;
			}
			if (bVar2)
			{
				unk_0x3E48C1351341DC99(unk_0x12AB0310C2281427(func_13(iLocal_29)), vVar1.x, vVar1.y, func_12(iLocal_29), func_11(iLocal_29));
				func_10(iLocal_29);
			}
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_2())
		{
			if (unk_0xEAE0D21A50E6C7F4(iLocal_32, 0x00000001))
			{
				unk_0x0674E58A79778E99(&iLocal_32, 0x00000001);
			}
			if (unk_0x798A3F1296751F46())
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_32, 0x00000000))
				{
					unk_0x4A847DA194A5532B(0x0000000F, 0x00000001, 0xFFFFFFFF);
					unk_0x5D96D8530B3D0904(&iLocal_32, 0x00000000);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(iLocal_32, 0x00000000))
			{
				unk_0x4A847DA194A5532B(0x0000000F, 0x00000000, 0xFFFFFFFF);
				unk_0x0674E58A79778E99(&iLocal_32, 0x00000000);
			}
		}
		else if (!unk_0xEAE0D21A50E6C7F4(iLocal_32, 0x00000001))
		{
			unk_0x4A847DA194A5532B(0x0000000F, 0x00000000, 0xFFFFFFFF);
			unk_0x0674E58A79778E99(&iLocal_32, 0x00000000);
			unk_0x5D96D8530B3D0904(&iLocal_32, 0x00000001);
		}
	}
}

int func_2()
{
	int iVar0;
	
	if (func_7(unk_0xD803B885F5E47A62()))
	{
		return 0x00000001;
	}
	if (func_5(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		iVar0 = func_4();
		if (iVar0 != func_3())
		{
			if (func_7(iVar0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_3()
{
	return 0xFFFFFFFF;
}

var func_4()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

bool func_5(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_6(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_3();
}

int func_6(int iParam0)
{
	if (iParam0 != func_3())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_3())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

int func_7(int iParam0)
{
	int iVar0;
	
	if (func_9(iParam0))
	{
		iVar0 = func_8(iParam0);
		if ((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_8(int iParam0)
{
	if (iParam0 != func_3())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_108;
	}
	return 0x00000000;
}

int func_9(int iParam0)
{
	if (iParam0 != func_3())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_108 != 0x00000000;
	}
	return 0x00000000;
}

void func_10(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iLocal_31, 0x00000000) };
	unk_0x6857CFBD47C253B6(vVar0.x, vVar0.y);
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			vVar0 = { unk_0x68F4C0EC296D3901(iLocal_31, 0x00000000) };
			unk_0x6857CFBD47C253B6(vVar0.x, vVar0.y);
			break;
		
		case 0x00000003:
			unk_0x6476077988E40DA0();
			break;
		
		case 0x00000004:
			unk_0x6476077988E40DA0();
			break;
	}
}

int func_11(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			vVar0 = { unk_0x68F4C0EC296D3901(iLocal_31, 0x00000000) };
			if (vVar0.z < 9.7796f)
			{
				return 0x00000000;
			}
			else if (vVar0.z > 9.7796f && vVar0.z < 16f)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000002;
			}
			break;
		
		case 0x00000002:
			vVar0 = { unk_0x68F4C0EC296D3901(iLocal_31, 0x00000000) };
			if (vVar0.z < 178.9f)
			{
				return 0x00000000;
			}
			else if (vVar0.z > 178.9f && vVar0.z < 188.7f)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000002;
			}
			break;
		
		case 0x00000003:
			return 0x00000000;
			break;
		
		case 0x00000004:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000000;
			break;
		
		case 0x00000003:
			return 0x00000000;
			break;
		
		case 0x00000004:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

char* func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "V_FakeBoatPO1SH2A";
			break;
		
		case 0x00000001:
			return "V_FakeWarehousePO103";
			break;
		
		case 0x00000002:
			return "V_FakeKortzCenter";
			break;
		
		case 0x00000003:
			return "V_FakePrison";
			break;
		
		case 0x00000004:
			return "V_FakeMilitaryBase";
			break;
	}
	return "";
}

float func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return 28.125f;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return 32.6875f;
					break;
				
				case 0x00000001:
					return 13.1875f;
					break;
				
				case 0x00000002:
					return 16.25f;
					break;
				
				case 0x00000003:
					return 21.75f;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return 95f;
					break;
				
				case 0x00000001:
					return 78.75f;
					break;
				
				case 0x00000002:
					return 70.6875f;
					break;
				
				case 0x00000003:
					return 64.4375f;
					break;
				
				case 0x00000004:
					return 32.375f;
					break;
				
				case 0x00000005:
					return 19f;
					break;
				
				case 0x00000006:
					return 19f;
					break;
				
				case 0x00000007:
					return 19.78125f;
					break;
				
				case 0x00000008:
					return 32.0625f;
					break;
				
				case 0x00000009:
					return 35.8125f;
					break;
				
				case 0x0000000A:
					return 30.5f;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return 3000f;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000000:
					return 1500f;
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_15(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return 1240.537f, -3057.289f, 40.75164f;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return 34.27837f, -2654.244f, 20.9423f;
					break;
				
				case 0x00000001:
					return 13.93163f, -2654.561f, 14.44239f;
					break;
				
				case 0x00000002:
					return 55.59572f, -2667.499f, 10.82245f;
					break;
				
				case 0x00000003:
					return 34.5866f, -2746.387f, 10.95006f;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return -2169.17f, 256.7264f, 203.4081f;
					break;
				
				case 0x00000001:
					return -2216.394f, 329.4761f, 201.3617f;
					break;
				
				case 0x00000002:
					return -2345.353f, 350.7882f, 189.6522f;
					break;
				
				case 0x00000003:
					return -2288.097f, 388.9909f, 200.9045f;
					break;
				
				case 0x00000004:
					return -2310.263f, 406.638f, 200.9041f;
					break;
				
				case 0x00000005:
					return -2169.221f, 260.5679f, 202.4294f;
					break;
				
				case 0x00000006:
					return -2258.778f, 166.9506f, 202.8318f;
					break;
				
				case 0x00000007:
					return -2236.973f, 285.5958f, 203.0395f;
					break;
				
				case 0x00000008:
					return -2211.362f, 303.6741f, 214.9323f;
					break;
				
				case 0x00000009:
					return -2282.098f, 383.0904f, 201.0395f;
					break;
				
				case 0x0000000A:
					return -2277.93f, 356.4442f, 201.1015f;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return 200f, 2600f, -5f;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000000:
					return -1451.205f, 2689.44f, -37.62654f;
					break;
			}
			break;
	}
	return vLocal_30;
}

Vector3 func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return 1240.535f, -2880.354f, -19.96489f;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return 34.15308f, -2747.067f, 1.137565f;
					break;
				
				case 0x00000001:
					return 13.95777f, -2700.626f, 5.046232f;
					break;
				
				case 0x00000002:
					return 55.61185f, -2687.681f, 5.005801f;
					break;
				
				case 0x00000003:
					return 34.56926f, -2759.479f, -0.030933f;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return -2317.38f, 191.6319f, 165.4037f;
					break;
				
				case 0x00000001:
					return -2357.995f, 264.0297f, 162.7988f;
					break;
				
				case 0x00000002:
					return -2261.433f, 387.3963f, 154.3522f;
					break;
				
				case 0x00000003:
					return -2326.399f, 408.3378f, 140.3182f;
					break;
				
				case 0x00000004:
					return -2304.617f, 460.2127f, 140.2147f;
					break;
				
				case 0x00000005:
					return -2150.825f, 216.4168f, 162.8012f;
					break;
				
				case 0x00000006:
					return -2172.765f, 203.5957f, 167.4135f;
					break;
				
				case 0x00000007:
					return -2191.036f, 305.961f, 159.625f;
					break;
				
				case 0x00000008:
					return -2227.613f, 340.0587f, 165.1357f;
					break;
				
				case 0x00000009:
					return -2244.41f, 399.5764f, 137.5101f;
					break;
				
				case 0x0000000A:
					return -2243.261f, 371.4072f, 137.2722f;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return 3200f, 2600f, 3000f;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000000:
					return -2841.107f, 3506.837f, 1000.474f;
					break;
			}
			break;
	}
	return vLocal_30;
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000001;
			break;
		
		case 0x00000001:
			return 0x00000004;
			break;
		
		case 0x00000002:
			return 0x0000000B;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
		
		case 0x00000004:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00002710;
			break;
		
		case 0x00000001:
			return 0x00002710;
			break;
		
		case 0x00000002:
			return 0x0003D090;
			break;
		
		case 0x00000003:
			return 0x00895440;
			break;
		
		case 0x00000004:
			return 0x00225510;
			break;
	}
	return 0x00000000;
}

Vector3 func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 1240f, -2970f, 12.2f;
			break;
		
		case 0x00000001:
			return 40f, -2720f, 12f;
			break;
		
		case 0x00000002:
			return -2250f, 300f, 182.2f;
			break;
		
		case 0x00000003:
			return 1700f, 2580f, 80f;
			break;
		
		case 0x00000004:
			return -2250f, 3100f, 80f;
			break;
	}
	return vLocal_30;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
	}
	return 0x00000001;
}

void func_21()
{
	vector3 vVar0;
	
	iLocal_28++;
	if (iLocal_28 > 0x00000004)
	{
		iLocal_28 = 0x00000000;
	}
	if (iLocal_28 != iLocal_29)
	{
		if (iLocal_29 == 0xFFFFFFFF)
		{
			iLocal_29 = iLocal_28;
		}
		else
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iLocal_31, 0x00000000) };
			if (SYSTEM::VDIST2(func_19(iLocal_28), vVar0) < SYSTEM::VDIST2(func_19(iLocal_29), vVar0))
			{
				iLocal_29 = iLocal_28;
			}
		}
	}
}

var func_22()
{
	return Global_240006.f_2;
}

int func_23(int iParam0)
{
	if (func_25(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_24())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return 0x00000001;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 0x00000002))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_24()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_26(0xFFFFFFFF, 0x00000000) == 0x00000008;
	}
	else
	{
		bVar0 = Global_184507[iParam0 /*876*/].f_D3 == 0x00000008;
	}
	if (iParam1 == 0x00000001)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 0x00000008;
		}
	}
	return bVar0;
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_27();
	}
	if (Global_140859[iVar1] == 0x00000001)
	{
		if (bParam1)
		{
		}
		iVar0 = 0x00000008;
	}
	else
	{
		iVar0 = Global_1407E3[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_27()
{
	return Global_1407E9;
}

