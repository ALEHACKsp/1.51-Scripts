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
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	Global_3C079F = 0x00000001;
	Global_3C07A0 = 0x00000001;
	Global_3D321D = 0xFFFFFFFF;
	unk_0xB57F88F0123F4C38();
	func_16();
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000025)
	{
		func_1(&(Global_3C07A7[iVar0 /*2012*/]), iVar0);
		iVar0++;
	}
}

int func_1(var uParam0, int iParam1)
{
	func_12(uParam0, iParam1);
	func_8(uParam0, iParam1);
	uParam0->f_1F = 0x00000056;
	uParam0->f_26[0x00000000 /*27*/].f_1A = 0x00000001;
	uParam0->f_22 = 0x00000002;
	func_2(uParam0, iParam1);
	return 0x00000001;
}

void func_2(var uParam0, int iParam1)
{
	vector3 vVar0;
	
	func_3(iParam1, 0x00000162, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000001 /*102*/].f_63 = { vVar0 };
	func_3(iParam1, 0x0000002E, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000001 /*102*/] = { vVar0 };
	uParam0->f_92.f_52[0x00000001 /*102*/].f_3 = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000030, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000001 /*102*/].f_16 = { vVar0 };
	uParam0->f_92.f_52[0x00000001 /*102*/].f_19 = { vVar0.f_3 };
	func_3(iParam1, 0x00000031, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000001 /*102*/].f_3B = { vVar0 };
	uParam0->f_92.f_52[0x00000001 /*102*/].f_3E = { vVar0.f_3 };
	func_3(iParam1, 0x0000002F, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000001 /*102*/].f_7 = { vVar0 };
	uParam0->f_92.f_52[0x00000001 /*102*/].f_A = { vVar0.f_3 };
	func_3(iParam1, 0x00000032, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000001 /*102*/].f_10 = { vVar0 };
	func_3(iParam1, 0x00000033, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000001 /*102*/].f_13 = { vVar0 };
	func_3(iParam1, 0x00000162, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000001 /*102*/].f_63 = { vVar0 };
	func_3(iParam1, 0x00000163, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000A /*102*/].f_63 = { vVar0 };
	func_3(iParam1, 0x00000156, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000A /*102*/] = { vVar0 };
	uParam0->f_92.f_52[0x0000000A /*102*/].f_3 = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000158, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000A /*102*/].f_16 = { vVar0 };
	uParam0->f_92.f_52[0x0000000A /*102*/].f_19 = { vVar0.f_3 };
	func_3(iParam1, 0x00000159, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000A /*102*/].f_3B = { vVar0 };
	uParam0->f_92.f_52[0x0000000A /*102*/].f_3E = { vVar0.f_3 };
	func_3(iParam1, 0x00000157, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000A /*102*/].f_7 = { vVar0 };
	uParam0->f_92.f_52[0x0000000A /*102*/].f_A = { vVar0.f_3 };
	func_3(iParam1, 0x0000015A, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000A /*102*/].f_10 = { vVar0 };
	func_3(iParam1, 0x0000015B, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000A /*102*/].f_13 = { vVar0 };
	func_3(iParam1, 0x00000164, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000B /*102*/].f_63 = { vVar0 };
	func_3(iParam1, 0x0000015C, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000B /*102*/] = { vVar0 };
	uParam0->f_92.f_52[0x0000000B /*102*/].f_3 = vVar0.f_3.f_2;
	func_3(iParam1, 0x0000015E, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000B /*102*/].f_16 = { vVar0 };
	uParam0->f_92.f_52[0x0000000B /*102*/].f_19 = { vVar0.f_3 };
	func_3(iParam1, 0x0000015F, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000B /*102*/].f_3B = { vVar0 };
	uParam0->f_92.f_52[0x0000000B /*102*/].f_3E = { vVar0.f_3 };
	func_3(iParam1, 0x0000015D, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000B /*102*/].f_7 = { vVar0 };
	uParam0->f_92.f_52[0x0000000B /*102*/].f_A = { vVar0.f_3 };
	func_3(iParam1, 0x00000160, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000B /*102*/].f_10 = { vVar0 };
	func_3(iParam1, 0x00000161, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000B /*102*/].f_13 = { vVar0 };
}

void func_3(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<6> Var0[2];
	vector3 vVar1;
	
	if (!bParam3)
	{
		Var0[0x00000000 /*6*/] = { func_7(0xFFFFFFFF) };
	}
	else
	{
		Var0[0x00000000 /*6*/] = { Global_3D2A74[iParam0 /*45*/].f_4 };
		Var0[0x00000000 /*6*/].f_3 = { 0f, 0f, Global_3D2A74[iParam0 /*45*/].f_7 };
	}
	if (!bParam3)
	{
		Var0[0x00000001 /*6*/] = { func_7(iParam0) };
	}
	else
	{
		Var0[0x00000001 /*6*/] = { Global_3D2A74[iParam0 /*45*/].f_4 };
		Var0[0x00000001 /*6*/].f_3 = { 0f, 0f, Global_3D2A74[iParam0 /*45*/].f_7 };
	}
	*uParam2 = { func_5(iParam1, 0x00000056) };
	vVar1 = { *uParam2 - Var0[0x00000000 /*6*/] };
	vVar1 = { func_4(vVar1, -Var0[0x00000000 /*6*/].f_3.f_2) };
	vVar1 = { func_4(vVar1, Var0[0x00000001 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(Var0[0x00000001 /*6*/], 0f, vVar1) };
	switch (iParam1)
	{
		case 0x00000006:
		case 0x00000002:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000230:
		case 0x00000026:
		case 0x00000027:
		case 0x00000078:
		case 0x00000079:
		case 0x0000007D:
		case 0x00000028:
		case 0x00000029:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002A:
		case 0x0000002E:
		case 0x0000002F:
		case 0x00000157:
		case 0x0000015D:
		case 0x00000030:
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000040:
		case 0x00000041:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x0000006D:
		case 0x00000045:
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
		case 0x00000049:
		case 0x0000004A:
		case 0x0000004B:
		case 0x0000004C:
		case 0x0000004D:
		case 0x0000004E:
		case 0x0000004F:
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
		case 0x00000053:
		case 0x00000055:
		case 0x00000054:
		case 0x00000059:
		case 0x0000005A:
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
		case 0x00000062:
		case 0x0000005D:
		case 0x00000063:
		case 0x00000064:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x00000077:
		case 0x0000007A:
		case 0x0000007B:
		case 0x0000007C:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x00000082:
		case 0x00000080:
		case 0x000000C9:
		case 0x0000011C:
		case 0x0000011D:
		case 0x0000011E:
		case 0x0000011F:
		case 0x000000CA:
		case 0x000000CB:
		case 0x000000CC:
		case 0x000000CD:
		case 0x000000CE:
		case 0x000000CF:
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D2:
		case 0x000000D3:
		case 0x000000D4:
		case 0x000000D5:
		case 0x000000D6:
		case 0x000000D8:
		case 0x000000D9:
		case 0x000000B6:
		case 0x000000B7:
		case 0x000000B5:
		case 0x0000009C:
		case 0x000000EC:
		case 0x000000ED:
		case 0x000000EE:
		case 0x000000EF:
		case 0x000000F0:
		case 0x000000F1:
		case 0x000000F2:
		case 0x000000F3:
		case 0x000000F4:
		case 0x000000F5:
		case 0x000000F6:
		case 0x000000F7:
		case 0x000000F8:
		case 0x000000F9:
		case 0x000000FA:
		case 0x000000FB:
		case 0x000000FC:
		case 0x000000FD:
		case 0x000000FE:
		case 0x000000FF:
		case 0x00000100:
		case 0x00000101:
		case 0x00000102:
		case 0x00000103:
		case 0x00000104:
		case 0x00000137:
		case 0x00000154:
		case 0x00000187:
		case 0x00000188:
		case 0x00000189:
		case 0x0000018A:
		case 0x0000018B:
		case 0x0000018C:
		case 0x0000018D:
		case 0x0000018E:
		case 0x0000018F:
		case 0x00000190:
		case 0x00000191:
		case 0x00000192:
		case 0x00000193:
		case 0x00000194:
		case 0x00000195:
		case 0x00000196:
		case 0x00000197:
		case 0x00000198:
		case 0x00000199:
		case 0x0000019A:
		case 0x0000019B:
		case 0x0000019C:
		case 0x0000019D:
		case 0x0000019E:
		case 0x0000019F:
		case 0x000001A0:
		case 0x000001A1:
		case 0x000001A2:
		case 0x000001A3:
		case 0x000001B6:
		case 0x000001B7:
		case 0x000001B8:
		case 0x000001B9:
		case 0x000001BA:
		case 0x000001BB:
		case 0x00000165:
		case 0x00000166:
		case 0x00000167:
		case 0x000001D3:
		case 0x000001D4:
		case 0x000001D5:
		case 0x000001F1:
		case 0x000001F2:
		case 0x000001F3:
		case 0x000001F7:
		case 0x00000256:
			while (Var0[0x00000000 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0x00000000 /*6*/].f_3.f_2 = (Var0[0x00000000 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0x00000000 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0x00000000 /*6*/].f_3.f_2 = (Var0[0x00000000 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[0x00000001 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0x00000001 /*6*/].f_3.f_2 = (Var0[0x00000001 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0x00000001 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0x00000001 /*6*/].f_3.f_2 = (Var0[0x00000001 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[0x00000001 /*6*/].f_3.f_2 - Var0[0x00000000 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 0x0000016A:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x0000016E:
		case 0x0000016F:
		case 0x00000170:
		case 0x00000168:
		case 0x00000169:
		case 0x0000017F:
		case 0x00000182:
		case 0x00000174:
		case 0x00000175:
		case 0x00000176:
		case 0x00000177:
		case 0x00000178:
		case 0x00000179:
		case 0x0000017A:
		case 0x00000172:
		case 0x00000173:
		case 0x00000180:
		case 0x00000183:
		case 0x000001E6:
		case 0x000001E7:
		case 0x000001E8:
		case 0x000001E9:
		case 0x000001EA:
		case 0x000001EB:
		case 0x000001EC:
		case 0x000001E5:
		case 0x00000220:
		case 0x0000021F:
		case 0x00000221:
		case 0x00000204:
		case 0x00000205:
		case 0x00000247:
		case 0x00000248:
		case 0x00000206:
		case 0x00000207:
		case 0x00000208:
		case 0x00000209:
		case 0x0000020A:
		case 0x0000020B:
		case 0x0000020C:
		case 0x0000020D:
		case 0x0000020E:
		case 0x0000020F:
		case 0x00000229:
		case 0x00000228:
		case 0x00000227:
		case 0x00000226:
		case 0x0000022C:
		case 0x0000022B:
		case 0x00000251:
		case 0x00000252:
		case 0x00000253:
		case 0x00000254:
		case 0x0000022A:
		case 0x0000024B:
		case 0x0000024C:
		case 0x0000024D:
		case 0x0000024E:
		case 0x0000024F:
		case 0x00000250:
		case 0x00000255:
		case 0x00000076:
		case 0x00000075:
		case 0x00000257:
		case 0x00000258:
		case 0x00000259:
		case 0x0000025A:
		case 0x0000025B:
		case 0x0000025C:
		case 0x0000025D:
		case 0x0000025E:
		case 0x0000025F:
		case 0x00000260:
		case 0x00000261:
		case 0x00000262:
		case 0x00000264:
		case 0x0000026A:
		case 0x00000270:
			while (Var0[0x00000000 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0x00000000 /*6*/].f_3.f_2 = (Var0[0x00000000 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0x00000000 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0x00000000 /*6*/].f_3.f_2 = (Var0[0x00000000 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[0x00000001 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0x00000001 /*6*/].f_3.f_2 = (Var0[0x00000001 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0x00000001 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0x00000001 /*6*/].f_3.f_2 = (Var0[0x00000001 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[0x00000001 /*6*/].f_3.f_2 - Var0[0x00000000 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_4(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_5(var uParam0, int iParam1)
{
	struct<6> Var0;
	var uVar1;
	int iVar2;
	
	iVar2 = 0x00000000;
	if (func_6(iParam1, &uVar1))
	{
		iVar2 = 0x00000001;
	}
	if (iVar2 && unk_0x7BDFCCD11DDD74D6(&Var0, &(Var0.f_3), uParam0, uVar1))
	{
		return Var0;
	}
	return Var0;
}

int func_6(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
		case 0x00000001:
			*uParam1 = 0x00000000;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam1 = 0x00000001;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 0x00000001;
			break;
		
		case 0x00000049:
			*uParam1 = 0x00000002;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 0x00000001;
			break;
		
		case 0x0000004D:
			*uParam1 = 0x00000003;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 0x00000001;
			break;
		
		case 0x00000053:
			*uParam1 = 0x00000004;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 0x00000001;
			break;
		
		case 0x00000056:
			*uParam1 = 0x00000005;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 0x00000001;
			break;
		
		case 0x00000058:
			*uParam1 = 0x00000006;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 0x00000001;
			break;
		
		case 0x0000005B:
			*uParam1 = 0x00000007;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 0x00000001;
			break;
		
		case 0x00000061:
			*uParam1 = 0x00000008;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 0x00000001;
			break;
		
		case 0x0000006D:
			*uParam1 = 0x00000009;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

struct<6> func_7(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
		case default:
			Var0 = { -1478.436f, -3753.538f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 0x00000000:
			Var0 = { -3555.115f, 1473.013f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 0x00000001:
			Var0 = { -3147.049f, 2827.088f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 0x00000002:
			Var0 = { -3277.473f, 2159.85f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 0x00000003:
			Var0 = { -2822.419f, 4054.84f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 0x00000004:
			Var0 = { -3249.849f, 3704.681f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 0x00000005:
			Var0 = { -2383.193f, 4685.003f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 0x00000006:
			Var0 = { -3224.686f, -215.9825f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 0x00000007:
			Var0 = { -3447.876f, 291.9275f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 97f };
			break;
		
		case 0x00000008:
			Var0 = { -2713.098f, -528.3185f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -33f };
			break;
		
		case 0x00000009:
			Var0 = { -1981.618f, -1537.269f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 142f };
			break;
		
		case 0x0000000A:
			Var0 = { -2100.817f, -2533.233f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -143f };
			break;
		
		case 0x0000000B:
			Var0 = { -1599.642f, -1891.277f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 112f };
			break;
		
		case 0x0000000C:
			Var0 = { -733.6151f, -3916.985f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -168f };
			break;
		
		case 0x0000000D:
			Var0 = { -363.3534f, -3568.56f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 0x0000000E:
			Var0 = { -1478.436f, -3753.538f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 0x0000000F:
			Var0 = { 1535.974f, -3061.877f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 62f };
			break;
		
		case 0x00000010:
			Var0 = { 2471.418f, -2430.93f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 12f };
			break;
		
		case 0x00000011:
			Var0 = { 2067.371f, -2813.01f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 0x00000012:
			Var0 = { 3021.088f, -1513.602f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 0x00000013:
			Var0 = { 3025.956f, -704.3854f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 0x00000014:
			Var0 = { 2961.863f, -2007.631f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 0x00000015:
			Var0 = { 3398.169f, 1958.521f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 77f };
			break;
		
		case 0x00000016:
			Var0 = { 3428.681f, 1202.06f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 0x00000017:
			Var0 = { 3787.83f, 2567.884f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 0x00000018:
			Var0 = { 4235.946f, 4004.252f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -118f };
			break;
		
		case 0x00000019:
			Var0 = { 4245.151f, 4595.375f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -68f };
			break;
		
		case 0x0000001A:
			Var0 = { 4209.057f, 3392.705f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 0x0000001B:
			Var0 = { 3738.81f, 5768.252f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -43f };
			break;
		
		case 0x0000001C:
			Var0 = { 3472.966f, 6315.245f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -23f };
			break;
		
		case 0x0000001D:
			Var0 = { 3693.468f, 5194.659f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 122f };
			break;
		
		case 0x0000001E:
			Var0 = { 572.9806f, 7142.138f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -58f };
			break;
		
		case 0x0000001F:
			Var0 = { 2024.036f, 6907.536f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -173f };
			break;
		
		case 0x00000020:
			Var0 = { 1377.296f, 6863.23f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 0x00000021:
			Var0 = { -1169.36f, 6000.214f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 0x00000022:
			Var0 = { -759.2205f, 6573.955f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -153f };
			break;
		
		case 0x00000023:
			Var0 = { -373.8432f, 6964.86f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -108f };
			break;
		
		case 0x00000024:
			Var0 = { 3634.999f, -4781.017f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -179.95f };
			break;
	}
	return Var0;
}

void func_8(var uParam0, int iParam1)
{
	vector3 vVar0;
	
	func_3(iParam1, 0x00000006, &vVar0, 0x00000000);
	uParam0->f_26[0x00000000 /*27*/].f_8 = { vVar0 };
	uParam0->f_26[0x00000000 /*27*/].f_B = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000001, &vVar0, 0x00000000);
	uParam0->f_92[0x00000000 /*12*/] = { vVar0 };
	func_3(iParam1, 0x00000002, &vVar0, 0x00000000);
	uParam0->f_92[0x00000000 /*12*/].f_3 = { vVar0 };
	uParam0->f_92[0x00000000 /*12*/].f_7 = vVar0.f_3.f_2;
	uParam0->f_92[0x00000000 /*12*/].f_6 = 1.5f;
	func_3(iParam1, 0x00000007, &vVar0, 0x00000000);
	uParam0->f_92.f_25 = { vVar0 };
	func_3(iParam1, 0x00000008, &vVar0, 0x00000000);
	uParam0->f_92.f_28 = { vVar0 };
	uParam0->f_92.f_2B = { vVar0.f_3 };
	uParam0->f_92.f_2E = 62.8385f;
	func_3(iParam1, 0x00000003, &vVar0, 0x00000000);
	uParam0->f_92.f_2F = { vVar0 };
	func_3(iParam1, 0x00000004, &vVar0, 0x00000000);
	uParam0->f_92.f_39[0x00000000 /*8*/] = { vVar0 };
	func_3(iParam1, 0x00000005, &vVar0, 0x00000000);
	uParam0->f_92.f_39[0x00000000 /*8*/].f_3 = { vVar0 };
	uParam0->f_92.f_39[0x00000000 /*8*/].f_6 = 11f;
	func_3(iParam1, 0x00000114, &vVar0, 0x00000000);
	uParam0->f_92.f_39[0x00000001 /*8*/] = { vVar0 };
	func_3(iParam1, 0x00000115, &vVar0, 0x00000000);
	uParam0->f_92.f_39[0x00000001 /*8*/].f_3 = { vVar0 };
	uParam0->f_92.f_39[0x00000001 /*8*/].f_6 = 15f;
	func_3(iParam1, 0x000001E3, &vVar0, 0x00000000);
	uParam0->f_92.f_39[0x00000002 /*8*/] = { vVar0 };
	func_3(iParam1, 0x000001E4, &vVar0, 0x00000000);
	uParam0->f_92.f_39[0x00000002 /*8*/].f_3 = { vVar0 };
	uParam0->f_92.f_39[0x00000002 /*8*/].f_6 = 11f;
	func_3(iParam1, 0x00000155, &vVar0, 0x00000000);
	uParam0->f_92.f_63B = vVar0.f_3.f_2;
	uParam0->f_92.f_638 = { vVar0 };
	func_3(iParam1, 0x0000000F, &vVar0, 0x00000000);
	uParam0->f_92.f_32 = { vVar0 };
	func_9(0x00000056, &(uParam0->f_92.f_35), &(uParam0->f_92.f_38), iParam1);
	func_3(iParam1, 0x0000002E, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000001 /*102*/] = { vVar0 };
	uParam0->f_92.f_52[0x00000001 /*102*/].f_3 = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000030, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000001 /*102*/].f_16 = { vVar0 };
	uParam0->f_92.f_52[0x00000001 /*102*/].f_19 = { vVar0.f_3 };
	func_3(iParam1, 0x00000031, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000001 /*102*/].f_3B = { vVar0 };
	uParam0->f_92.f_52[0x00000001 /*102*/].f_3E = { vVar0.f_3 };
	func_3(iParam1, 0x0000002F, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000001 /*102*/].f_7 = { vVar0 };
	uParam0->f_92.f_52[0x00000001 /*102*/].f_A = { vVar0.f_3 };
	func_3(iParam1, 0x00000032, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000001 /*102*/].f_10 = { vVar0 };
	func_3(iParam1, 0x00000033, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000001 /*102*/].f_13 = { vVar0 };
	func_3(iParam1, 0x00000029, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000000 /*102*/] = { vVar0 };
	uParam0->f_92.f_52[0x00000000 /*102*/].f_3 = vVar0.f_3.f_2;
	uParam0->f_92.f_52[0x00000000 /*102*/].f_55 = 0x00000001;
	func_3(iParam1, 0x0000002A, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000000 /*102*/].f_7 = { vVar0 };
	uParam0->f_92.f_52[0x00000000 /*102*/].f_A = { vVar0.f_3 };
	func_3(iParam1, 0x0000002B, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000000 /*102*/].f_16 = { vVar0 };
	uParam0->f_92.f_52[0x00000000 /*102*/].f_19 = { vVar0.f_3 };
	func_3(iParam1, 0x0000002C, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000000 /*102*/].f_1D = { vVar0 };
	uParam0->f_92.f_52[0x00000000 /*102*/].f_20 = { vVar0.f_3 };
	func_3(iParam1, 0x0000002D, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000000 /*102*/].f_3B = { vVar0 };
	uParam0->f_92.f_52[0x00000000 /*102*/].f_3E = { vVar0.f_3 };
	func_3(iParam1, 0x0000007E, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000000 /*102*/].f_10 = { vVar0 };
	func_3(iParam1, 0x0000007F, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000000 /*102*/].f_13 = { vVar0 };
	func_3(iParam1, 0x00000038, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/] = { vVar0 };
	uParam0->f_92.f_52[0x00000004 /*102*/].f_3 = vVar0.f_3.f_2;
	uParam0->f_92.f_52[0x00000004 /*102*/].f_4 = { 1f, 1f, 1f };
	func_3(iParam1, 0x00000039, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_7 = { vVar0 };
	uParam0->f_92.f_52[0x00000004 /*102*/].f_A = { vVar0.f_3 };
	func_3(iParam1, 0x0000003A, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_16 = { vVar0 };
	uParam0->f_92.f_52[0x00000004 /*102*/].f_19 = { vVar0.f_3 };
	func_3(iParam1, 0x0000003B, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_23 = { vVar0 };
	uParam0->f_92.f_52[0x00000004 /*102*/].f_26 = { vVar0.f_3 };
	func_3(iParam1, 0x0000003C, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_29 = { vVar0 };
	uParam0->f_92.f_52[0x00000004 /*102*/].f_2C = { vVar0.f_3 };
	func_3(iParam1, 0x0000003D, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_2F = { vVar0 };
	uParam0->f_92.f_52[0x00000004 /*102*/].f_32 = { vVar0.f_3 };
	func_3(iParam1, 0x0000003E, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_35 = { vVar0 };
	uParam0->f_92.f_52[0x00000004 /*102*/].f_38 = { vVar0.f_3 };
	func_3(iParam1, 0x0000003F, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_3B = { vVar0 };
	uParam0->f_92.f_52[0x00000004 /*102*/].f_3E = { vVar0.f_3 };
	func_3(iParam1, 0x00000040, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_41 = { vVar0 };
	uParam0->f_92.f_52[0x00000004 /*102*/].f_44 = { vVar0.f_3 };
	func_3(iParam1, 0x00000041, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_47 = { vVar0 };
	uParam0->f_92.f_52[0x00000004 /*102*/].f_4A = { vVar0.f_3 };
	func_3(iParam1, 0x00000042, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_10 = { vVar0 };
	uParam0->f_92.f_52[0x00000004 /*102*/].f_56 = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000043, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_13 = { vVar0 };
	func_3(iParam1, 0x0000006E, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_4D = { vVar0 };
	uParam0->f_92.f_52[0x00000004 /*102*/].f_50 = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000044, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_5D = { vVar0 };
	func_3(iParam1, 0x0000006D, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_57 = { vVar0 };
	uParam0->f_92.f_52[0x00000004 /*102*/].f_5A = { vVar0.f_3 };
	func_3(iParam1, 0x00000181, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000004 /*102*/].f_60 = { vVar0 };
	uParam0->f_92.f_52[0x0000000C /*102*/].f_4 = { 1f, 1f, 1f };
	func_3(iParam1, 0x0000016C, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000C /*102*/].f_16 = { vVar0 };
	uParam0->f_92.f_52[0x0000000C /*102*/].f_19 = { vVar0.f_3 };
	func_3(iParam1, 0x0000016D, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000C /*102*/].f_23 = { vVar0 };
	uParam0->f_92.f_52[0x0000000C /*102*/].f_26 = { vVar0.f_3 };
	func_3(iParam1, 0x0000016E, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000C /*102*/].f_29 = { vVar0 };
	uParam0->f_92.f_52[0x0000000C /*102*/].f_2C = { vVar0.f_3 };
	func_3(iParam1, 0x0000016F, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000C /*102*/].f_2F = { vVar0 };
	uParam0->f_92.f_52[0x0000000C /*102*/].f_32 = { vVar0.f_3 };
	func_3(iParam1, 0x00000170, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000C /*102*/].f_3B = { vVar0 };
	uParam0->f_92.f_52[0x0000000C /*102*/].f_3E = { vVar0.f_3 };
	func_3(iParam1, 0x0000016A, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000C /*102*/].f_41 = { vVar0 };
	uParam0->f_92.f_52[0x0000000C /*102*/].f_44 = { vVar0.f_3 };
	func_3(iParam1, 0x0000016B, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000C /*102*/].f_47 = { vVar0 };
	uParam0->f_92.f_52[0x0000000C /*102*/].f_4A = { vVar0.f_3 };
	func_3(iParam1, 0x00000168, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000C /*102*/].f_10 = { vVar0 };
	uParam0->f_92.f_52[0x0000000C /*102*/].f_56 = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000169, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000C /*102*/].f_13 = { vVar0 };
	func_3(iParam1, 0x00000171, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000C /*102*/].f_4D = { vVar0 };
	uParam0->f_92.f_52[0x0000000C /*102*/].f_50 = vVar0.f_3.f_2;
	func_3(iParam1, 0x0000017F, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000C /*102*/].f_5D = { vVar0 };
	func_3(iParam1, 0x00000182, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000C /*102*/].f_60 = { vVar0 };
	func_3(iParam1, 0x0000006D, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000C /*102*/].f_57 = { vVar0 };
	uParam0->f_92.f_52[0x0000000C /*102*/].f_5A = { vVar0.f_3 };
	uParam0->f_92.f_52[0x0000000D /*102*/].f_4 = { 1f, 1f, 1f };
	func_3(iParam1, 0x00000176, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000D /*102*/].f_16 = { vVar0 };
	uParam0->f_92.f_52[0x0000000D /*102*/].f_19 = { vVar0.f_3 };
	func_3(iParam1, 0x00000177, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000D /*102*/].f_23 = { vVar0 };
	uParam0->f_92.f_52[0x0000000D /*102*/].f_26 = { vVar0.f_3 };
	func_3(iParam1, 0x00000178, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000D /*102*/].f_29 = { vVar0 };
	uParam0->f_92.f_52[0x0000000D /*102*/].f_2C = { vVar0.f_3 };
	func_3(iParam1, 0x00000179, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000D /*102*/].f_2F = { vVar0 };
	uParam0->f_92.f_52[0x0000000D /*102*/].f_32 = { vVar0.f_3 };
	func_3(iParam1, 0x0000017A, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000D /*102*/].f_3B = { vVar0 };
	uParam0->f_92.f_52[0x0000000D /*102*/].f_3E = { vVar0.f_3 };
	func_3(iParam1, 0x00000174, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000D /*102*/].f_41 = { vVar0 };
	uParam0->f_92.f_52[0x0000000D /*102*/].f_44 = { vVar0.f_3 };
	func_3(iParam1, 0x00000175, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000D /*102*/].f_47 = { vVar0 };
	uParam0->f_92.f_52[0x0000000D /*102*/].f_4A = { vVar0.f_3 };
	func_3(iParam1, 0x00000172, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000D /*102*/].f_10 = { vVar0 };
	uParam0->f_92.f_52[0x0000000D /*102*/].f_56 = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000173, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000D /*102*/].f_13 = { vVar0 };
	func_3(iParam1, 0x0000017B, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000D /*102*/].f_4D = { vVar0 };
	uParam0->f_92.f_52[0x0000000D /*102*/].f_50 = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000180, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000D /*102*/].f_5D = { vVar0 };
	func_3(iParam1, 0x00000183, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000D /*102*/].f_60 = { vVar0 };
	func_3(iParam1, 0x0000006D, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x0000000D /*102*/].f_57 = { vVar0 };
	uParam0->f_92.f_52[0x0000000D /*102*/].f_5A = { vVar0.f_3 };
	func_3(iParam1, 0x00000045, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000005 /*102*/] = { vVar0 };
	uParam0->f_92.f_52[0x00000005 /*102*/].f_3 = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000046, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000005 /*102*/].f_7 = { vVar0 };
	uParam0->f_92.f_52[0x00000005 /*102*/].f_A = { vVar0.f_3 };
	func_3(iParam1, 0x00000047, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000005 /*102*/].f_41 = { vVar0 };
	func_3(iParam1, 0x00000048, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000005 /*102*/].f_47 = { vVar0 };
	func_3(iParam1, 0x00000049, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000005 /*102*/].f_57 = { vVar0 };
	func_3(iParam1, 0x0000004A, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000005 /*102*/].f_10 = { vVar0 };
	uParam0->f_92.f_52[0x00000005 /*102*/].f_13 = { vVar0.f_3 };
	func_3(iParam1, 0x0000004B, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000005 /*102*/].f_23 = { vVar0 };
	uParam0->f_92.f_52[0x00000005 /*102*/].f_26 = { vVar0.f_3 };
	func_3(iParam1, 0x0000004C, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000005 /*102*/].f_29 = { vVar0 };
	uParam0->f_92.f_52[0x00000005 /*102*/].f_2C = { vVar0.f_3 };
	func_3(iParam1, 0x0000004D, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000006 /*102*/] = { vVar0 };
	uParam0->f_92.f_52[0x00000006 /*102*/].f_3 = vVar0.f_3.f_2;
	func_3(iParam1, 0x0000004F, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000006 /*102*/].f_16 = { vVar0 };
	uParam0->f_92.f_52[0x00000006 /*102*/].f_19 = { vVar0.f_3 };
	func_3(iParam1, 0x00000050, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000006 /*102*/].f_3B = { vVar0 };
	uParam0->f_92.f_52[0x00000006 /*102*/].f_3E = { vVar0.f_3 };
	func_3(iParam1, 0x0000004E, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000006 /*102*/].f_7 = { vVar0 };
	uParam0->f_92.f_52[0x00000006 /*102*/].f_A = { vVar0.f_3 };
	func_3(iParam1, 0x00000051, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000006 /*102*/].f_10 = { vVar0 };
	func_3(iParam1, 0x00000052, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000006 /*102*/].f_13 = { vVar0 };
	func_3(iParam1, 0x00000080, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000009 /*102*/] = { vVar0 };
	uParam0->f_92.f_52[0x00000009 /*102*/].f_3 = vVar0.f_3.f_2;
	func_3(iParam1, 0x0000012A, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000009 /*102*/].f_51 = { vVar0 };
	func_3(iParam1, 0x0000012A, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000006 /*102*/].f_51 = { vVar0 };
	func_3(iParam1, 0x0000012B, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000007 /*102*/].f_51 = { vVar0 };
	func_3(iParam1, 0x00000083, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000009 /*102*/].f_16 = { vVar0 };
	uParam0->f_92.f_52[0x00000009 /*102*/].f_19 = { vVar0.f_3 };
	func_3(iParam1, 0x00000084, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000009 /*102*/].f_3B = { vVar0 };
	uParam0->f_92.f_52[0x00000009 /*102*/].f_3E = { vVar0.f_3 };
	func_3(iParam1, 0x00000082, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000009 /*102*/].f_7 = { vVar0 };
	uParam0->f_92.f_52[0x00000009 /*102*/].f_A = { vVar0.f_3 };
	func_3(iParam1, 0x00000085, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000009 /*102*/].f_10 = { vVar0 };
	func_3(iParam1, 0x00000086, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000009 /*102*/].f_13 = { vVar0 };
	func_3(iParam1, 0x00000059, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000008 /*102*/] = { vVar0 };
	uParam0->f_92.f_52[0x00000008 /*102*/].f_3 = vVar0.f_3.f_2;
	func_3(iParam1, 0x0000005B, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000008 /*102*/].f_16 = { vVar0 };
	uParam0->f_92.f_52[0x00000008 /*102*/].f_19 = { vVar0.f_3 };
	func_3(iParam1, 0x0000005C, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000008 /*102*/].f_3B = { vVar0 };
	uParam0->f_92.f_52[0x00000008 /*102*/].f_3E = { vVar0.f_3 };
	func_3(iParam1, 0x0000005A, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000008 /*102*/].f_7 = { vVar0 };
	uParam0->f_92.f_52[0x00000008 /*102*/].f_A = { vVar0.f_3 };
	func_3(iParam1, 0x00000087, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000008 /*102*/].f_10 = { vVar0 };
	func_3(iParam1, 0x00000088, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000008 /*102*/].f_13 = { vVar0 };
	func_3(iParam1, 0x00000053, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000007 /*102*/] = { vVar0 };
	uParam0->f_92.f_52[0x00000007 /*102*/].f_3 = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000055, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000007 /*102*/].f_16 = { vVar0 };
	uParam0->f_92.f_52[0x00000007 /*102*/].f_19 = { vVar0.f_3 };
	func_3(iParam1, 0x00000058, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000007 /*102*/].f_3B = { vVar0 };
	uParam0->f_92.f_52[0x00000007 /*102*/].f_3E = { vVar0.f_3 };
	func_3(iParam1, 0x00000054, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000007 /*102*/].f_7 = { vVar0 };
	uParam0->f_92.f_52[0x00000007 /*102*/].f_A = { vVar0.f_3 };
	func_3(iParam1, 0x00000056, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000007 /*102*/].f_10 = { vVar0 };
	func_3(iParam1, 0x00000057, &vVar0, 0x00000000);
	uParam0->f_92.f_52[0x00000007 /*102*/].f_13 = { vVar0 };
	func_3(iParam1, 0x0000005E, &vVar0, 0x00000000);
	uParam0->f_92.f_5ED.f_8 = { vVar0 };
	uParam0->f_92.f_5ED.f_B = { vVar0.f_3 };
	func_3(iParam1, 0x0000005F, &vVar0, 0x00000000);
	uParam0->f_92.f_5ED = { vVar0 };
	uParam0->f_92.f_5ED.f_3 = vVar0.f_3.f_2;
	if (iParam1 == 0x00000041)
	{
	}
	func_3(iParam1, 0x00000060, &vVar0, 0x00000000);
	uParam0->f_92.f_5ED.f_4 = { vVar0 };
	uParam0->f_92.f_5ED.f_7 = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000061, &vVar0, 0x00000000);
	uParam0->f_92.f_5ED.f_E = { vVar0 };
	uParam0->f_92.f_5ED.f_11 = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000062, &vVar0, 0x00000000);
	uParam0->f_92.f_5ED.f_12 = { vVar0 };
	uParam0->f_92.f_5ED.f_15 = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000063, &vVar0, 0x00000000);
	uParam0->f_92.f_607.f_4 = { vVar0 };
	uParam0->f_92.f_607.f_7 = { vVar0.f_3 };
	func_3(iParam1, 0x00000064, &vVar0, 0x00000000);
	uParam0->f_92.f_607 = { vVar0 };
	uParam0->f_92.f_607.f_3 = vVar0.f_3.f_2;
	func_3(iParam1, 0x0000006C, &vVar0, 0x00000000);
	uParam0->f_92.f_611 = { vVar0 };
	uParam0->f_92.f_614 = { vVar0.f_3 };
	func_3(iParam1, 0x00000077, &vVar0, 0x00000000);
	uParam0->f_92.f_5ED.f_16 = { vVar0 };
	uParam0->f_92.f_5ED.f_19 = vVar0.f_3.f_2;
	func_3(iParam1, 0x00000089, &vVar0, 0x00000000);
	uParam0->f_92.f_617 = { vVar0 };
	func_3(iParam1, 0x0000008E, &vVar0, 0x00000000);
	uParam0->f_92.f_61A = { vVar0 };
	func_3(iParam1, 0x0000008F, &vVar0, 0x00000000);
	uParam0->f_92.f_61A.f_6 = { vVar0 };
	func_3(iParam1, 0x00000092, &vVar0, 0x00000000);
	uParam0->f_92.f_61A.f_12 = { vVar0 };
	func_3(iParam1, 0x00000093, &vVar0, 0x00000000);
	uParam0->f_92.f_61A.f_15 = { vVar0 };
	func_3(iParam1, 0x0000009E, &vVar0, 0x00000000);
	uParam0->f_92.f_61A.f_F = { vVar0 };
	func_3(iParam1, 0x00000091, &vVar0, 0x00000000);
	uParam0->f_92.f_61A.f_F = { vVar0 };
	func_3(iParam1, 0x00000090, &vVar0, 0x00000000);
	uParam0->f_92.f_61A.f_C = { vVar0 };
	func_3(iParam1, 0x00000094, &vVar0, 0x00000000);
	uParam0->f_92.f_61A.f_18 = { vVar0 };
}

void func_9(int iParam0, var uParam1, var uParam2, int iParam3)
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
			func_10(iParam0, 0x00000028, &Var0, 0xFFFFFFFF, 0x00000000);
			*uParam1 = { Var0 };
			if (iParam0 == 0x00000001)
			{
				uParam1->f_2 = 200.4294f;
			}
			else if (iParam0 == 0x00000002)
			{
				uParam1->f_2 = 169.6122f;
			}
			else if (iParam0 == 0x00000003)
			{
				uParam1->f_2 = 216.0662f;
			}
			else if (iParam0 == 0x00000004)
			{
				uParam1->f_2 = 152.8101f;
			}
			else if (iParam0 == 0x00000005)
			{
				uParam1->f_2 = 70.0399f;
			}
			else if (iParam0 == 0x00000006)
			{
				uParam1->f_2 = 85.3194f;
			}
			else if (iParam0 == 0x00000007)
			{
				uParam1->f_2 = 62.3652f;
			}
			else if (iParam0 == 0x00000022)
			{
				uParam1->f_2 = 49.7375f;
			}
			else if (iParam0 == 0x00000023)
			{
				uParam1->f_2 = 119.343f;
			}
			else if (iParam0 == 0x00000024)
			{
				uParam1->f_2 = 114.4156f;
			}
			else if (iParam0 == 0x00000025)
			{
				uParam1->f_2 = 88.2696f;
			}
			else if (iParam0 == 0x00000026)
			{
				uParam1->f_2 = 82.9234f;
			}
			else if (iParam0 == 0x00000027)
			{
				uParam1->f_2 = 93.0414f;
			}
			else if (iParam0 == 0x00000028)
			{
				uParam1->f_2 = 78.289f;
			}
			else if (iParam0 == 0x00000029)
			{
				uParam1->f_2 = 102.2488f;
			}
			else if (iParam0 == 0x0000002A)
			{
				uParam1->f_2 = 100.8356f;
			}
			else if (iParam0 == 0x0000002B)
			{
				uParam1->f_2 = 86.4347f;
			}
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
			*uParam1 = { 350.7414f, -993.6222f, -100.202f };
			*uParam2 = 179.6123f;
			break;
		
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
			*uParam1 = { 259.8177f, -1003.794f, -100.0086f };
			*uParam2 = 307.1585f;
			break;
		
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
			func_10(iParam0, 0x00000028, &Var0, 0x0000003D, 0x00000000);
			*uParam1 = { Var0 };
			if (iParam0 == 0x0000003D)
			{
			}
			else if (iParam0 == 0x0000003E)
			{
			}
			else if (iParam0 == 0x0000003F)
			{
			}
			else if (iParam0 == 0x00000040)
			{
			}
			else if (iParam0 == 0x00000041)
			{
			}
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 0x00000049:
		case 0x0000004A:
		case 0x0000004B:
		case 0x0000004C:
			func_10(iParam0, 0x00000028, &Var0, 0x00000049, 0x00000000);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 0x0000004D:
		case 0x0000004E:
		case 0x0000004F:
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
			func_10(iParam0, 0x00000028, &Var0, 0x0000004D, 0x00000000);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
			func_10(iParam0, 0x00000028, &Var0, 0x00000053, 0x00000000);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 0x00000056:
			func_3(iParam3, 0x00000028, &Var0, 0x00000000);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 0x00000057:
		case 0x00000058:
		case 0x00000059:
		case 0x0000005A:
			func_10(iParam0, 0x00000028, &Var0, 0x00000058, 0x00000000);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
			func_10(iParam0, 0x00000028, &Var0, 0x0000005B, 0x00000000);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
		
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
			func_10(iParam0, 0x00000028, &Var0, 0x00000061, 0x00000000);
			*uParam1 = { Var0 };
			*uParam2 = Var0.f_3.f_2;
			break;
	}
}

void func_10(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<6> Var0[2];
	vector3 vVar1;
	
	Var0[0x00000000 /*6*/] = { func_11(iParam3, bParam4) };
	Var0[0x00000001 /*6*/] = { func_11(iParam0, bParam4) };
	*uParam2 = { func_5(iParam1, iParam3) };
	vVar1 = { *uParam2 - Var0[0x00000000 /*6*/] };
	vVar1 = { func_4(vVar1, -Var0[0x00000000 /*6*/].f_3.f_2) };
	vVar1 = { func_4(vVar1, Var0[0x00000001 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0x8A5E176FF719A014(Var0[0x00000001 /*6*/], 0f, vVar1) };
	switch (iParam1)
	{
		case 0x00000006:
		case 0x00000002:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000026:
		case 0x00000027:
		case 0x00000078:
		case 0x00000079:
		case 0x0000007D:
		case 0x00000028:
		case 0x00000029:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002A:
		case 0x0000002E:
		case 0x0000002F:
		case 0x00000030:
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000040:
		case 0x00000041:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x0000006D:
		case 0x00000045:
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
		case 0x00000049:
		case 0x0000004A:
		case 0x0000004B:
		case 0x0000004C:
		case 0x0000004D:
		case 0x0000004E:
		case 0x0000004F:
		case 0x00000050:
		case 0x00000051:
		case 0x00000052:
		case 0x00000053:
		case 0x00000055:
		case 0x00000054:
		case 0x00000059:
		case 0x0000005A:
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
		case 0x00000062:
		case 0x0000005D:
		case 0x00000063:
		case 0x00000064:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x00000077:
		case 0x0000007A:
		case 0x0000007B:
		case 0x0000007C:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x00000082:
		case 0x00000080:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000090:
		case 0x00000091:
		case 0x00000092:
		case 0x00000093:
		case 0x00000094:
		case 0x00000099:
		case 0x0000009A:
		case 0x0000009B:
		case 0x0000009D:
		case 0x000000EA:
		case 0x000000AE:
		case 0x000000AF:
		case 0x000000B0:
		case 0x000000B1:
		case 0x000000B2:
		case 0x000000B3:
		case 0x000000B4:
		case 0x000000EB:
		case 0x00000095:
		case 0x00000096:
		case 0x00000097:
		case 0x00000098:
		case 0x000000AC:
		case 0x000000BB:
		case 0x000000AD:
		case 0x000000C9:
		case 0x000000BC:
		case 0x000000BD:
		case 0x000000BE:
		case 0x000000BF:
		case 0x000000C0:
		case 0x000000C1:
		case 0x000000C2:
		case 0x000000C3:
		case 0x000000C4:
		case 0x000000C5:
		case 0x000000C6:
		case 0x000000C7:
		case 0x000000C8:
		case 0x0000011C:
		case 0x0000011D:
		case 0x0000011E:
		case 0x0000011F:
		case 0x000000CA:
		case 0x000000CB:
		case 0x000000CC:
		case 0x000000CD:
		case 0x000000CE:
		case 0x000000CF:
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D2:
		case 0x000000D3:
		case 0x000000D4:
		case 0x000000D5:
		case 0x000000D6:
		case 0x000000D8:
		case 0x000000D9:
		case 0x000000B6:
		case 0x000000B7:
		case 0x000000B5:
		case 0x0000009C:
		case 0x000000EC:
		case 0x000000ED:
		case 0x000000EE:
		case 0x000000EF:
		case 0x000000F0:
		case 0x000000F1:
		case 0x000000F2:
		case 0x000000F3:
		case 0x000000F4:
		case 0x000000F5:
		case 0x000000F6:
		case 0x000000F7:
		case 0x000000F8:
		case 0x000000F9:
		case 0x000000FA:
		case 0x000000FB:
		case 0x000000FC:
		case 0x000000FD:
		case 0x000000FE:
		case 0x000000FF:
		case 0x00000100:
		case 0x00000101:
		case 0x00000102:
		case 0x00000103:
		case 0x00000104:
		case 0x00000105:
		case 0x00000106:
		case 0x00000107:
		case 0x00000108:
		case 0x00000109:
		case 0x0000010A:
		case 0x0000010B:
		case 0x0000010C:
		case 0x0000010D:
		case 0x0000010E:
		case 0x0000010F:
		case 0x00000110:
		case 0x00000111:
		case 0x00000112:
		case 0x00000113:
			while (Var0[0x00000000 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0x00000000 /*6*/].f_3.f_2 = (Var0[0x00000000 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0x00000000 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0x00000000 /*6*/].f_3.f_2 = (Var0[0x00000000 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[0x00000001 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0x00000001 /*6*/].f_3.f_2 = (Var0[0x00000001 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0x00000001 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0x00000001 /*6*/].f_3.f_2 = (Var0[0x00000001 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[0x00000001 /*6*/].f_3.f_2 - Var0[0x00000000 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 0x00000116:
		case 0x00000117:
		case 0x00000118:
		case 0x00000119:
		case 0x0000011A:
		case 0x0000011B:
		case 0x0000012C:
		case 0x0000012D:
		case 0x0000012E:
		case 0x0000012F:
		case 0x00000130:
		case 0x00000132:
		case 0x00000131:
		case 0x00000134:
		case 0x00000135:
		case 0x00000138:
		case 0x00000139:
		case 0x0000013A:
		case 0x0000013B:
		case 0x0000013C:
		case 0x0000013D:
		case 0x0000013E:
		case 0x0000013F:
		case 0x00000140:
		case 0x00000141:
		case 0x00000142:
		case 0x00000143:
		case 0x00000144:
		case 0x00000145:
		case 0x00000146:
		case 0x00000147:
		case 0x00000148:
		case 0x00000149:
		case 0x00000133:
		case 0x0000014B:
		case 0x0000014C:
		case 0x0000014D:
		case 0x0000014E:
		case 0x00000136:
		case 0x0000014F:
		case 0x00000150:
		case 0x00000151:
		case 0x00000152:
		case 0x00000153:
		case 0x00000137:
		case 0x00000154:
		case 0x000001B3:
		case 0x000001B4:
		case 0x000001B5:
		case 0x000001D6:
		case 0x000001DD:
		case 0x000001F8:
		case 0x000001FB:
		case 0x000001FE:
		case 0x00000201:
		case 0x00000210:
		case 0x00000213:
		case 0x00000216:
		case 0x00000219:
		case 0x0000021C:
		case 0x00000223:
		case 0x000001BD:
		case 0x000001BE:
		case 0x000001BF:
		case 0x000001C0:
		case 0x000001C1:
		case 0x000001C2:
		case 0x000001D7:
		case 0x000001D8:
		case 0x000001DE:
		case 0x000001DF:
		case 0x000001F9:
		case 0x000001FA:
		case 0x000001FC:
		case 0x000001FD:
		case 0x000001FF:
		case 0x00000200:
		case 0x00000202:
		case 0x00000203:
		case 0x00000211:
		case 0x00000212:
		case 0x00000214:
		case 0x00000215:
		case 0x00000217:
		case 0x00000218:
		case 0x0000021A:
		case 0x0000021B:
		case 0x0000021D:
		case 0x0000021E:
		case 0x00000224:
		case 0x00000225:
		case 0x000001B0:
		case 0x000001B1:
		case 0x000001B2:
		case 0x000001C3:
		case 0x000001C4:
		case 0x000001C5:
		case 0x000001C6:
		case 0x000001C7:
		case 0x000001C8:
		case 0x000001CB:
		case 0x000001CC:
		case 0x000001CD:
		case 0x000001CE:
		case 0x000001CF:
		case 0x000001D0:
		case 0x00000230:
		case 0x00000222:
		case 0x0000024B:
		case 0x0000024C:
		case 0x0000024D:
		case 0x0000024E:
		case 0x0000024F:
		case 0x00000250:
		case 0x000001F5:
		case 0x000001F6:
		case 0x000001F4:
		case 0x00000268:
		case 0x00000267:
		case 0x00000264:
		case 0x00000275:
		case 0x00000276:
		case 0x00000277:
		case 0x000002CA:
		case 0x00000279:
		case 0x0000027A:
		case 0x0000027B:
		case 0x0000027C:
		case 0x0000027D:
		case 0x0000027E:
		case 0x0000027F:
		case 0x00000280:
		case 0x00000283:
		case 0x00000284:
		case 0x00000281:
		case 0x00000282:
		case 0x00000286:
		case 0x00000285:
		case 0x00000287:
		case 0x00000288:
		case 0x00000289:
		case 0x0000028A:
		case 0x0000029A:
		case 0x0000029B:
		case 0x0000029C:
		case 0x0000029D:
		case 0x0000029E:
		case 0x0000029F:
		case 0x000002A1:
		case 0x000002A2:
		case 0x000002A3:
		case 0x000002A4:
		case 0x000002A5:
		case 0x000002B1:
		case 0x000002B2:
		case 0x000002B3:
		case 0x000002B4:
		case 0x000002B5:
		case 0x000002B6:
		case 0x000002B7:
		case 0x000002B8:
		case 0x000002B9:
		case 0x000002BA:
		case 0x000002BB:
		case 0x000002BC:
		case 0x000002BD:
		case 0x000002BE:
		case 0x000002BF:
		case 0x000002C0:
		case 0x000002C1:
		case 0x000002C2:
		case 0x000002C3:
		case 0x000002C4:
		case 0x000002C5:
		case 0x000002C6:
		case 0x000002C7:
		case 0x000002C8:
		case 0x000002C9:
		case 0x00000278:
		case 0x000002E2:
		case 0x000002E3:
		case 0x000002E4:
		case 0x000002E5:
		case 0x000002E6:
		case 0x000002E7:
		case 0x000002E8:
		case 0x000002E9:
		case 0x000002EA:
			while (Var0[0x00000000 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0x00000000 /*6*/].f_3.f_2 = (Var0[0x00000000 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0x00000000 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0x00000000 /*6*/].f_3.f_2 = (Var0[0x00000000 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[0x00000001 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0x00000001 /*6*/].f_3.f_2 = (Var0[0x00000001 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0x00000001 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0x00000001 /*6*/].f_3.f_2 = (Var0[0x00000001 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[0x00000001 /*6*/].f_3.f_2 - Var0[0x00000000 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 0x000002CB:
		case 0x000002CC:
		case 0x000002CD:
		case 0x000002CE:
		case 0x000002CF:
		case 0x000002D0:
		case 0x000002D1:
		case 0x000002D2:
		case 0x000002D3:
		case 0x000002D4:
		case 0x000002D5:
		case 0x000002D6:
		case 0x000002D7:
		case 0x000002D8:
		case 0x000002D9:
		case 0x000002DA:
		case 0x000002DB:
		case 0x000002DC:
		case 0x000002DD:
		case 0x000002DE:
		case 0x000002DF:
		case 0x000002E0:
		case 0x000002E1:
		case 0x000002EB:
		case 0x000002EC:
		case 0x000002ED:
		case 0x000002EE:
		case 0x000002EF:
		case 0x000002F0:
		case 0x000002F1:
		case 0x000002F2:
		case 0x000002F3:
		case 0x000002F4:
		case 0x000002F5:
		case 0x000002F6:
		case 0x000002F7:
		case 0x000002F8:
		case 0x000002F9:
		case 0x000002FA:
		case 0x000002FB:
		case 0x000002FC:
		case 0x000002FD:
		case 0x000002FE:
		case 0x000002FF:
		case 0x00000300:
		case 0x00000301:
		case 0x00000302:
		case 0x00000303:
		case 0x00000304:
		case 0x00000305:
		case 0x00000306:
		case 0x00000307:
		case 0x00000308:
		case 0x00000309:
		case 0x0000030A:
		case 0x0000030B:
		case 0x0000030C:
		case 0x0000030D:
		case 0x0000030E:
		case 0x0000030F:
		case 0x00000310:
		case 0x00000311:
		case 0x00000312:
		case 0x00000313:
		case 0x00000314:
		case 0x00000315:
		case 0x00000316:
		case 0x00000317:
		case 0x00000318:
		case 0x00000319:
		case 0x0000031A:
		case 0x0000031B:
		case 0x0000031C:
		case 0x0000031D:
		case 0x0000031E:
		case 0x0000031F:
		case 0x00000320:
		case 0x00000322:
		case 0x00000321:
		case 0x00000323:
		case 0x00000324:
		case 0x00000325:
		case 0x00000326:
		case 0x00000327:
		case 0x00000328:
		case 0x00000329:
		case 0x000002A6:
		case 0x000002A7:
		case 0x000002A8:
		case 0x000002A9:
		case 0x000002AA:
		case 0x000002AB:
		case 0x000002AC:
		case 0x000002AD:
		case 0x0000032A:
		case 0x0000032B:
		case 0x0000032C:
		case 0x0000032D:
		case 0x0000032E:
		case 0x0000032F:
		case 0x00000331:
		case 0x00000330:
		case 0x00000333:
		case 0x00000332:
		case 0x00000334:
		case 0x00000335:
		case 0x00000336:
		case 0x00000337:
		case 0x00000338:
		case 0x00000339:
		case 0x0000033A:
		case 0x0000033B:
		case 0x0000033C:
		case 0x0000033D:
		case 0x0000033E:
		case 0x0000033F:
		case 0x00000340:
		case 0x00000341:
		case 0x00000342:
		case 0x00000343:
		case 0x00000344:
		case 0x00000345:
		case 0x00000346:
		case 0x00000347:
		case 0x00000348:
		case 0x00000349:
		case 0x0000034A:
		case 0x0000034B:
		case 0x0000034C:
		case 0x0000034D:
		case 0x0000034E:
		case 0x0000034F:
		case 0x00000350:
		case 0x00000351:
		case 0x00000352:
		case 0x00000353:
		case 0x00000354:
		case 0x00000355:
		case 0x00000356:
		case 0x00000357:
		case 0x00000358:
		case 0x000002AE:
		case 0x000002AF:
		case 0x000002B0:
			while (Var0[0x00000000 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0x00000000 /*6*/].f_3.f_2 = (Var0[0x00000000 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0x00000000 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0x00000000 /*6*/].f_3.f_2 = (Var0[0x00000000 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[0x00000001 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0x00000001 /*6*/].f_3.f_2 = (Var0[0x00000001 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0x00000001 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0x00000001 /*6*/].f_3.f_2 = (Var0[0x00000001 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[0x00000001 /*6*/].f_3.f_2 - Var0[0x00000000 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 0x00000359:
		case 0x0000035A:
		case 0x0000035B:
		case 0x0000035C:
		case 0x0000035D:
		case 0x0000035E:
		case 0x0000035F:
		case 0x00000360:
		case 0x00000361:
		case 0x00000362:
		case 0x00000363:
		case 0x00000364:
		case 0x00000365:
		case 0x00000366:
		case 0x00000367:
		case 0x00000368:
		case 0x00000369:
		case 0x0000036A:
		case 0x0000036B:
		case 0x0000036C:
		case 0x0000036D:
		case 0x0000036E:
		case 0x0000036F:
		case 0x00000370:
		case 0x00000371:
		case 0x00000372:
		case 0x00000373:
		case 0x00000374:
		case 0x00000378:
		case 0x00000379:
		case 0x0000037A:
		case 0x0000037B:
		case 0x0000028B:
		case 0x0000028C:
		case 0x0000028D:
		case 0x0000028E:
		case 0x0000028F:
		case 0x00000290:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000294:
		case 0x00000295:
		case 0x00000296:
		case 0x00000297:
		case 0x00000298:
		case 0x00000299:
		case 0x00000377:
		case 0x0000037E:
		case 0x0000037F:
		case 0x00000380:
		case 0x00000381:
		case 0x00000382:
		case 0x00000383:
		case 0x00000384:
		case 0x00000385:
		case 0x00000386:
		case 0x00000387:
		case 0x00000388:
		case 0x00000389:
		case 0x0000038A:
		case 0x0000038B:
		case 0x0000038C:
		case 0x0000038F:
		case 0x00000391:
		case 0x00000392:
		case 0x00000393:
		case 0x00000394:
		case 0x00000395:
		case 0x00000396:
		case 0x00000397:
		case 0x00000398:
		case 0x00000399:
		case 0x0000039A:
		case 0x0000039B:
		case 0x0000039C:
		case 0x0000039D:
		case 0x0000039E:
		case 0x0000039F:
		case 0x000003A0:
		case 0x000003A1:
		case 0x000003A2:
		case 0x000003A3:
		case 0x000003A4:
		case 0x000003BA:
		case 0x000003BB:
		case 0x000003BC:
		case 0x000003BD:
		case 0x000003BE:
		case 0x000003BF:
		case 0x000003C8:
		case 0x000003C9:
		case 0x000003CA:
		case 0x000003CD:
		case 0x000003CE:
		case 0x000003CF:
		case 0x000003D0:
		case 0x000003D1:
		case 0x000003D2:
		case 0x000003D3:
		case 0x000003D4:
		case 0x000003D5:
		case 0x000003D6:
		case 0x000003D7:
		case 0x000003D8:
		case 0x000003D9:
		case 0x000003DA:
		case 0x000003DB:
		case 0x000003DC:
		case 0x000003DD:
		case 0x000003DE:
		case 0x000003F0:
		case 0x000003F1:
		case 0x000003F2:
		case 0x000003DF:
		case 0x000003E0:
		case 0x000003E1:
		case 0x000003E2:
		case 0x000003E3:
		case 0x000003E4:
		case 0x000003E5:
		case 0x000003E6:
		case 0x000003E7:
		case 0x000003C0:
		case 0x000003C1:
		case 0x000003C2:
		case 0x000003C3:
		case 0x000003C4:
		case 0x000003C5:
		case 0x000003C6:
		case 0x000003C7:
		case 0x000003E8:
		case 0x000003E9:
		case 0x000003EA:
		case 0x000003EB:
		case 0x000003EC:
		case 0x000003ED:
		case 0x000003EE:
		case 0x000003EF:
		case 0x000003F3:
		case 0x000003F4:
		case 0x000003F5:
			while (Var0[0x00000000 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0x00000000 /*6*/].f_3.f_2 = (Var0[0x00000000 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0x00000000 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0x00000000 /*6*/].f_3.f_2 = (Var0[0x00000000 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[0x00000001 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0x00000001 /*6*/].f_3.f_2 = (Var0[0x00000001 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0x00000001 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0x00000001 /*6*/].f_3.f_2 = (Var0[0x00000001 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[0x00000001 /*6*/].f_3.f_2 - Var0[0x00000000 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

struct<6> func_11(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000001:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000002:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000003:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000004:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x0000003D:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000005:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x00000006:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 0x00000007:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x00000022:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x0000003E:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 0x00000023:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 0x00000024:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 0x00000025:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 0x00000026:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 0x00000027:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x00000041:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 0x00000028:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 0x00000029:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 0x0000003F:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 0x0000002A:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x0000002B:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000040:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000049:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 0x0000004A:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 0x0000004B:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 0x0000004C:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 0x0000004D:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 0x0000004E:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 0x0000004F:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 0x00000050:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 0x00000051:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000052:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 0x00000053:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000054:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 0x00000055:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000056:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000057:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 0x00000058:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 0x00000059:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 0x0000005A:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000061:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000065:
		case 0x00000066:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 0x00000067:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x00000068:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x00000069:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 0x0000006A:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006B:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006C:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 0x0000006D:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x0000006E:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x0000006F:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 0x00000070:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 0x00000071:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 0x00000072:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

void func_12(var uParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0 = { func_7(iParam1) };
	uParam0->f_7D9 = { Var0 };
	uParam0->f_26[0x00000000 /*27*/].f_1A = 0x00000001;
	func_3(iParam1, 0x00000184, &Var0, 0x00000000);
	uParam0->f_26[0x00000000 /*27*/] = { Var0 };
	func_3(iParam1, 0x00000185, &Var0, 0x00000000);
	uParam0->f_26[0x00000000 /*27*/].f_3 = { Var0 };
	uParam0->f_26[0x00000000 /*27*/].f_7 = Var0.f_3.f_2;
	uParam0->f_26[0x00000000 /*27*/].f_6 = 2f;
	func_3(iParam1, 0x00000186, &Var0, 0x00000000);
	uParam0->f_26[0x00000000 /*27*/].f_17 = { Var0 };
	func_3(iParam1, 0x00000186, &Var0, 0x00000000);
	uParam0->f_3[0x00000000 /*3*/] = { Var0 };
	func_3(iParam1, 0x000001A0, &Var0, 0x00000000);
	uParam0->f_26[0x00000000 /*27*/].f_10 = { Var0 };
	uParam0->f_26[0x00000000 /*27*/].f_13 = { Var0.f_3 };
	uParam0->f_26[0x00000000 /*27*/].f_16 = 0x00000002;
	func_13(uParam0->f_26[0x00000000 /*27*/].f_10, uParam0->f_26[0x00000000 /*27*/].f_13, &Var0, uParam0->f_26[0x00000000 /*27*/].f_16);
	uParam0->f_26[0x00000000 /*27*/].f_C = { Var0 };
	uParam0->f_26[0x00000000 /*27*/].f_F = Var0.f_3.f_2;
	func_3(iParam1, 0x00000187, &Var0, 0x00000000);
	uParam0->f_7A7 = { Var0 };
	uParam0->f_7A7.f_3 = { Var0.f_3 };
	uParam0->f_7A7.f_6 = 0x00000037;
	func_3(iParam1, 0x00000188, &Var0, 0x00000000);
	uParam0->f_7AE = { Var0 };
	uParam0->f_7AE.f_3 = { Var0.f_3 };
	func_3(iParam1, 0x00000189, &Var0, 0x00000000);
	uParam0->f_7BB = { Var0 };
	uParam0->f_7BB.f_3 = { Var0.f_3 };
	func_3(iParam1, 0x0000018A, &Var0, 0x00000000);
	uParam0->f_7B4 = { Var0 };
	uParam0->f_7B4.f_3 = { Var0.f_3 };
	uParam0->f_7B4.f_6 = 0x0000002D;
	func_3(iParam1, 0x0000018B, &Var0, 0x00000000);
	uParam0->f_7C7 = { Var0 };
	uParam0->f_7C7.f_3 = { Var0.f_3 };
	func_3(iParam1, 0x0000018C, &Var0, 0x00000000);
	uParam0->f_7CD = { Var0 };
	uParam0->f_7CD.f_3 = { Var0.f_3 };
	func_3(iParam1, 0x0000018D, &Var0, 0x00000000);
	uParam0->f_92[0x00000000 /*12*/].f_8 = { Var0 };
	uParam0->f_92[0x00000000 /*12*/].f_B = Var0.f_3.f_2;
	func_3(iParam1, 0x000001A1, &Var0, 0x00000000);
	uParam0->f_18 = { Var0 };
	uParam0->f_18.f_3 = { Var0.f_3 };
	uParam0->f_18.f_6 = 84f;
	func_3(iParam1, 0x000001A2, &Var0, 0x00000000);
	uParam0->f_7C1 = { Var0 };
	uParam0->f_7C1.f_3 = { Var0.f_3 };
	func_3(iParam1, 0x000001A3, &Var0, 0x00000000);
	uParam0->f_7D3 = { Var0 };
	uParam0->f_7D3.f_3 = { Var0.f_3 };
	uParam0->f_24 = 0x00000001;
	func_3(iParam1, 0x00000231, &Var0, 0x00000000);
	uParam0->f_782[0x00000000 /*9*/] = { Var0 };
	uParam0->f_782[0x00000000 /*9*/].f_3 = { Var0.f_3 };
	uParam0->f_782[0x00000000 /*9*/].f_6 = 48.9991f;
}

void func_13(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3)
{
	struct<6> Var0;
	struct<6> Var1;
	struct<6> Var2;
	
	*uParam2 = { 0f, 0f, 0f };
	uParam2->f_3 = { 0f, 0f, 0f };
	switch (iParam3)
	{
		case 0x00000000:
			Var0 = { 285.8317f, -162.205f, 65.1628f };
			Var0.f_3 = { 0f, 0f, -110f };
			Var1 = { 285.138f, -162.024f, 63.614f };
			Var1.f_3 = { 0f, 0f, 160f };
			break;
		
		case 0x00000001:
			Var0 = { -968.2812f, -1432.925f, 8.1858f };
			Var0.f_3 = { 0f, 0f, 70f };
			Var1 = { -968.944f, -1433.234f, 6.673f };
			Var1.f_3 = { 0f, 0f, -160f };
			break;
		
		case 0x00000002:
			Var0 = { -778.8333f, 313.5024f, 86.1362f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var1 = { -778.727f, 312.728f, 84.693f };
			Var1.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000003:
			Var0 = { -980.7506f, -1447.021f, 4.5223f };
			Var0.f_3 = { 0f, 0f, -70f };
			Var1 = { -980.29f, -1447.934f, 3.723f };
			Var1.f_3 = { 0f, 0f, -70f };
			break;
		
		case 0x00000004:
			Var0 = { 895.5656f, -889.3296f, 27.6491f };
			Var0.f_3 = { 0f, 0f, -90f };
			Var1 = { 894.954f, -889.428f, 26.158f };
			Var1.f_3 = { 0f, 0f, 180f };
			break;
		
		case 0x00000005:
			Var0 = { 726.7885f, -1189.545f, 24.7175f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var1 = { 726.857f, -1190.163f, 23.27f };
			Var1.f_3 = { 0f, 0f, -90f };
			break;
		
		case 0x00000006:
			Var0 = { -833.9494f, -862.6305f, 21.2407f };
			Var0.f_3 = { 0f, 0f, 90f };
			Var1 = { -833.335f, -862.65f, 19.682f };
			Var1.f_3 = { 0f, 0f, 0f };
			break;
	}
	Var2 = { vParam0 };
	Var2.f_3 = { vParam1 };
	func_14(Var0, Var1, Var2, uParam2);
}

void func_14(struct<4> Param0, var uParam1, var uParam2, struct<6> Param3, struct<4> Param4, var uParam5, var uParam6, var uParam7)
{
	vector3 vVar0;
	
	*uParam7 = { Param3 };
	vVar0 = { *uParam7 - Param0 };
	vVar0 = { func_4(vVar0, -Param0.f_3.f_2) };
	vVar0 = { func_4(vVar0, Param4.f_3.f_2) };
	*uParam7 = { unk_0x8A5E176FF719A014(Param4, 0f, vVar0) };
	if (!func_15(Param4.f_3, Param0.f_3, 0x00000000))
	{
		while (Param0.f_3.f_2 > 180f)
		{
			Param0.f_3.f_2 = (Param0.f_3.f_2 - 360f);
		}
		while (Param0.f_3.f_2 < -180f)
		{
			Param0.f_3.f_2 = (Param0.f_3.f_2 + 360f);
		}
		while (Param4.f_3.f_2 > 180f)
		{
			Param4.f_3.f_2 = (Param4.f_3.f_2 - 360f);
		}
		while (Param4.f_3.f_2 < -180f)
		{
			Param4.f_3.f_2 = (Param4.f_3.f_2 + 360f);
		}
		uParam7->f_3.f_2 = (uParam7->f_3.f_2 + (Param4.f_3.f_2 - Param0.f_3.f_2));
		while (uParam7->f_3.f_2 > 180f)
		{
			uParam7->f_3.f_2 = (uParam7->f_3.f_2 - 360f);
		}
		while (uParam7->f_3.f_2 < -180f)
		{
			uParam7->f_3.f_2 = (uParam7->f_3.f_2 + 360f);
		}
	}
}

bool func_15(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_16()
{
	int iVar0;
	struct<4> Var1;
	struct<16> Var2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000025)
	{
		Var1 = { func_7(iVar0) };
		Global_3D2A74[iVar0 /*45*/] = { Var1 };
		Global_3D2A74[iVar0 /*45*/].f_3 = Var1.f_3.f_2;
		func_18(iVar0, &(Global_3D2A74[iVar0 /*45*/].f_8), &(Global_3D2A74[iVar0 /*45*/].f_B));
		iVar0++;
	}
	StringCopy(&(Global_3D2A74[0x00000000 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp01_1", 32);
	StringCopy(&(Global_3D2A74[0x00000001 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp01_2", 32);
	StringCopy(&(Global_3D2A74[0x00000002 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp01_3", 32);
	StringCopy(&(Global_3D2A74[0x00000003 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp02_1", 32);
	StringCopy(&(Global_3D2A74[0x00000004 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp02_2", 32);
	StringCopy(&(Global_3D2A74[0x00000005 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp02_3", 32);
	StringCopy(&(Global_3D2A74[0x00000006 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp03_1", 32);
	StringCopy(&(Global_3D2A74[0x00000007 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp03_2", 32);
	StringCopy(&(Global_3D2A74[0x00000008 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp03_3", 32);
	StringCopy(&(Global_3D2A74[0x00000009 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp04_1", 32);
	StringCopy(&(Global_3D2A74[0x0000000A /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp04_2", 32);
	StringCopy(&(Global_3D2A74[0x0000000B /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp04_3", 32);
	StringCopy(&(Global_3D2A74[0x0000000C /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp05_1", 32);
	StringCopy(&(Global_3D2A74[0x0000000D /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp05_2", 32);
	StringCopy(&(Global_3D2A74[0x0000000E /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp05_3", 32);
	StringCopy(&(Global_3D2A74[0x0000000F /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp06_1", 32);
	StringCopy(&(Global_3D2A74[0x00000010 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp06_2", 32);
	StringCopy(&(Global_3D2A74[0x00000011 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp06_3", 32);
	StringCopy(&(Global_3D2A74[0x00000012 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp07_1", 32);
	StringCopy(&(Global_3D2A74[0x00000013 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp07_2", 32);
	StringCopy(&(Global_3D2A74[0x00000014 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp07_3", 32);
	StringCopy(&(Global_3D2A74[0x00000015 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp08_1", 32);
	StringCopy(&(Global_3D2A74[0x00000016 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp08_2", 32);
	StringCopy(&(Global_3D2A74[0x00000017 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp08_3", 32);
	StringCopy(&(Global_3D2A74[0x00000018 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp09_1", 32);
	StringCopy(&(Global_3D2A74[0x00000019 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp09_2", 32);
	StringCopy(&(Global_3D2A74[0x0000001A /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp09_3", 32);
	StringCopy(&(Global_3D2A74[0x0000001B /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp10_1", 32);
	StringCopy(&(Global_3D2A74[0x0000001C /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp10_2", 32);
	StringCopy(&(Global_3D2A74[0x0000001D /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp10_3", 32);
	StringCopy(&(Global_3D2A74[0x0000001E /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp11_1", 32);
	StringCopy(&(Global_3D2A74[0x0000001F /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp11_2", 32);
	StringCopy(&(Global_3D2A74[0x00000020 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp11_3", 32);
	StringCopy(&(Global_3D2A74[0x00000021 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp12_1", 32);
	StringCopy(&(Global_3D2A74[0x00000022 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp12_2", 32);
	StringCopy(&(Global_3D2A74[0x00000023 /*45*/].f_F[0x00000000 /*8*/]), "apa_yacht_grp12_3", 32);
	StringCopy(&(Global_3D2A74[0x00000024 /*45*/].f_F[0x00000000 /*8*/]), "sum_lost_yacht", 32);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000025)
	{
		MemCopy(&Var2, {Global_3D2A74[iVar0 /*45*/].f_F[0x00000000 /*8*/]}, 0x00000010);
		StringConCat(&Var2, "_int", 64);
		MemCopy(&(Global_3D2A74[iVar0 /*45*/].f_F[0x00000001 /*8*/]), {Var2}, 0x00000008);
		iVar0++;
	}
	Global_3D2A74[0x00000000 /*45*/].f_20[0x00000000 /*4*/] = { -3215.529f, 1337.033f, 1.2217f };
	Global_3D2A74[0x00000000 /*45*/].f_20[0x00000000 /*4*/].f_3 = 233.0511f;
	Global_3D2A74[0x00000000 /*45*/].f_20[0x00000001 /*4*/] = { -3101.011f, 1437.813f, 16.749f };
	Global_3D2A74[0x00000000 /*45*/].f_20[0x00000001 /*4*/].f_3 = 68.4861f;
	Global_3D2A74[0x00000000 /*45*/].f_20[0x00000002 /*4*/] = { -3262.416f, 1343.043f, 0f };
	Global_3D2A74[0x00000000 /*45*/].f_20[0x00000002 /*4*/].f_3 = 64.1521f;
	Global_3D2A74[0x00000001 /*45*/].f_20[0x00000000 /*4*/] = { -2907.311f, 3083.429f, 2.1057f };
	Global_3D2A74[0x00000001 /*45*/].f_20[0x00000000 /*4*/].f_3 = 315.0847f;
	Global_3D2A74[0x00000001 /*45*/].f_20[0x00000001 /*4*/] = { -2917.641f, 3057.153f, 2.3254f };
	Global_3D2A74[0x00000001 /*45*/].f_20[0x00000001 /*4*/].f_3 = 139.554f;
	Global_3D2A74[0x00000001 /*45*/].f_20[0x00000002 /*4*/] = { -2959.761f, 3069.291f, 0f };
	Global_3D2A74[0x00000001 /*45*/].f_20[0x00000002 /*4*/].f_3 = 140.7879f;
	Global_3D2A74[0x00000002 /*45*/].f_20[0x00000000 /*4*/] = { -2781.983f, 2347.446f, 1.4625f };
	Global_3D2A74[0x00000002 /*45*/].f_20[0x00000000 /*4*/].f_3 = 301.6382f;
	Global_3D2A74[0x00000002 /*45*/].f_20[0x00000001 /*4*/] = { -2817.162f, 2320.752f, 1.608f };
	Global_3D2A74[0x00000002 /*45*/].f_20[0x00000001 /*4*/].f_3 = 76.4715f;
	Global_3D2A74[0x00000002 /*45*/].f_20[0x00000002 /*4*/] = { -2846.729f, 2354.843f, 0f };
	Global_3D2A74[0x00000002 /*45*/].f_20[0x00000002 /*4*/].f_3 = 109.8094f;
	Global_3D2A74[0x00000003 /*45*/].f_20[0x00000000 /*4*/] = { -2498.844f, 3752.328f, 14.2509f };
	Global_3D2A74[0x00000003 /*45*/].f_20[0x00000000 /*4*/].f_3 = 217.676f;
	Global_3D2A74[0x00000003 /*45*/].f_20[0x00000001 /*4*/] = { -2502.912f, 3719.516f, 13.1249f };
	Global_3D2A74[0x00000003 /*45*/].f_20[0x00000001 /*4*/].f_3 = 55.3889f;
	Global_3D2A74[0x00000003 /*45*/].f_20[0x00000002 /*4*/] = { -2638.53f, 3864.123f, 0f };
	Global_3D2A74[0x00000003 /*45*/].f_20[0x00000002 /*4*/].f_3 = 59.3129f;
	Global_3D2A74[0x00000004 /*45*/].f_20[0x00000000 /*4*/] = { -3043.023f, 3440.002f, 2.8783f };
	Global_3D2A74[0x00000004 /*45*/].f_20[0x00000000 /*4*/].f_3 = 267.8972f;
	Global_3D2A74[0x00000004 /*45*/].f_20[0x00000001 /*4*/] = { -2972.322f, 3456.31f, 8.8206f };
	Global_3D2A74[0x00000004 /*45*/].f_20[0x00000001 /*4*/].f_3 = 40.0795f;
	Global_3D2A74[0x00000004 /*45*/].f_20[0x00000002 /*4*/] = { -3107.278f, 3475.423f, 0f };
	Global_3D2A74[0x00000004 /*45*/].f_20[0x00000002 /*4*/].f_3 = 33.9091f;
	Global_3D2A74[0x00000005 /*45*/].f_20[0x00000000 /*4*/] = { -2408.221f, 4243.086f, 9.0072f };
	Global_3D2A74[0x00000005 /*45*/].f_20[0x00000000 /*4*/].f_3 = 291.9838f;
	Global_3D2A74[0x00000005 /*45*/].f_20[0x00000001 /*4*/] = { -2418.341f, 4218.906f, 8.7096f };
	Global_3D2A74[0x00000005 /*45*/].f_20[0x00000001 /*4*/].f_3 = 345.1725f;
	Global_3D2A74[0x00000005 /*45*/].f_20[0x00000002 /*4*/] = { -2392.848f, 4424.469f, 0f };
	Global_3D2A74[0x00000005 /*45*/].f_20[0x00000002 /*4*/].f_3 = 24.173f;
	Global_3D2A74[0x00000006 /*45*/].f_20[0x00000000 /*4*/] = { -3093.101f, 192.3021f, 5.8948f };
	Global_3D2A74[0x00000006 /*45*/].f_20[0x00000000 /*4*/].f_3 = 282.932f;
	Global_3D2A74[0x00000006 /*45*/].f_20[0x00000001 /*4*/] = { -3078.07f, 154.1856f, 9.8672f };
	Global_3D2A74[0x00000006 /*45*/].f_20[0x00000001 /*4*/].f_3 = 122.1543f;
	Global_3D2A74[0x00000006 /*45*/].f_20[0x00000002 /*4*/] = { -3135.21f, 65.4845f, 0f };
	Global_3D2A74[0x00000006 /*45*/].f_20[0x00000002 /*4*/].f_3 = 109.4958f;
	Global_3D2A74[0x00000007 /*45*/].f_20[0x00000000 /*4*/] = { -3067.833f, 182.1174f, 10.48f };
	Global_3D2A74[0x00000007 /*45*/].f_20[0x00000000 /*4*/].f_3 = 316.2727f;
	Global_3D2A74[0x00000007 /*45*/].f_20[0x00000001 /*4*/] = { -3092.81f, 432.5182f, 1.3684f };
	Global_3D2A74[0x00000007 /*45*/].f_20[0x00000001 /*4*/].f_3 = 85.3024f;
	Global_3D2A74[0x00000007 /*45*/].f_20[0x00000002 /*4*/] = { -3211.319f, 290.425f, 0f };
	Global_3D2A74[0x00000007 /*45*/].f_20[0x00000002 /*4*/].f_3 = 92.1519f;
	Global_3D2A74[0x00000008 /*45*/].f_20[0x00000000 /*4*/] = { -2702.644f, -104.7734f, 4.2172f };
	Global_3D2A74[0x00000008 /*45*/].f_20[0x00000000 /*4*/].f_3 = 353.8816f;
	Global_3D2A74[0x00000008 /*45*/].f_20[0x00000001 /*4*/] = { -2823.573f, -29.9384f, 3.1771f };
	Global_3D2A74[0x00000008 /*45*/].f_20[0x00000001 /*4*/].f_3 = 178.7297f;
	Global_3D2A74[0x00000008 /*45*/].f_20[0x00000002 /*4*/] = { -2734.093f, -154.0857f, 0f };
	Global_3D2A74[0x00000008 /*45*/].f_20[0x00000002 /*4*/].f_3 = 141.6168f;
	Global_3D2A74[0x00000009 /*45*/].f_20[0x00000000 /*4*/] = { -1463.463f, -1393.569f, 1.5368f };
	Global_3D2A74[0x00000009 /*45*/].f_20[0x00000000 /*4*/].f_3 = 287.3892f;
	Global_3D2A74[0x00000009 /*45*/].f_20[0x00000001 /*4*/] = { -1424.592f, -1404.746f, 3.177f };
	Global_3D2A74[0x00000009 /*45*/].f_20[0x00000001 /*4*/].f_3 = 100.235f;
	Global_3D2A74[0x00000009 /*45*/].f_20[0x00000002 /*4*/] = { -1534.528f, -1438.445f, 0f };
	Global_3D2A74[0x00000009 /*45*/].f_20[0x00000002 /*4*/].f_3 = 121.4151f;
	Global_3D2A74[0x0000000A /*45*/].f_20[0x00000000 /*4*/] = { -1239.736f, -2066f, 13.2375f };
	Global_3D2A74[0x0000000A /*45*/].f_20[0x00000000 /*4*/].f_3 = 297.049f;
	Global_3D2A74[0x0000000A /*45*/].f_20[0x00000001 /*4*/] = { -1332.874f, -2123.406f, 13.1281f };
	Global_3D2A74[0x0000000A /*45*/].f_20[0x00000001 /*4*/].f_3 = 75.73f;
	Global_3D2A74[0x0000000A /*45*/].f_20[0x00000002 /*4*/] = { -1402.575f, -2094.522f, 0f };
	Global_3D2A74[0x0000000A /*45*/].f_20[0x00000002 /*4*/].f_3 = 70.1691f;
	Global_3D2A74[0x0000000B /*45*/].f_20[0x00000000 /*4*/] = { -1224.04f, -1777.919f, 2.2519f };
	Global_3D2A74[0x0000000B /*45*/].f_20[0x00000000 /*4*/].f_3 = 335.8759f;
	Global_3D2A74[0x0000000B /*45*/].f_20[0x00000001 /*4*/] = { -1217.13f, -1833.299f, 1.5737f };
	Global_3D2A74[0x0000000B /*45*/].f_20[0x00000001 /*4*/].f_3 = 123.5309f;
	Global_3D2A74[0x0000000B /*45*/].f_20[0x00000002 /*4*/] = { -1277.278f, -1875.247f, 0f };
	Global_3D2A74[0x0000000B /*45*/].f_20[0x00000002 /*4*/].f_3 = 118.8218f;
	Global_3D2A74[0x0000000C /*45*/].f_20[0x00000000 /*4*/] = { 108.4327f, -3325.779f, 5f };
	Global_3D2A74[0x0000000C /*45*/].f_20[0x00000000 /*4*/].f_3 = 0.552f;
	Global_3D2A74[0x0000000C /*45*/].f_20[0x00000001 /*4*/] = { 134.3913f, -2804.358f, 5.0002f };
	Global_3D2A74[0x0000000C /*45*/].f_20[0x00000001 /*4*/].f_3 = 223.52f;
	Global_3D2A74[0x0000000C /*45*/].f_20[0x00000002 /*4*/] = { 98.6531f, -3324.339f, 0f };
	Global_3D2A74[0x0000000C /*45*/].f_20[0x00000002 /*4*/].f_3 = 167.3062f;
	Global_3D2A74[0x0000000D /*45*/].f_20[0x00000000 /*4*/] = { 108.5783f, -3258.347f, 5f };
	Global_3D2A74[0x0000000D /*45*/].f_20[0x00000000 /*4*/].f_3 = 359.6605f;
	Global_3D2A74[0x0000000D /*45*/].f_20[0x00000001 /*4*/] = { 149.4426f, -2791.039f, 5.0002f };
	Global_3D2A74[0x0000000D /*45*/].f_20[0x00000001 /*4*/].f_3 = 218.7591f;
	Global_3D2A74[0x0000000D /*45*/].f_20[0x00000002 /*4*/] = { 94.8648f, -3249.486f, 0f };
	Global_3D2A74[0x0000000D /*45*/].f_20[0x00000002 /*4*/].f_3 = 164.5406f;
	Global_3D2A74[0x0000000E /*45*/].f_20[0x00000000 /*4*/] = { -406.993f, -2851.122f, 5.0004f };
	Global_3D2A74[0x0000000E /*45*/].f_20[0x00000000 /*4*/].f_3 = 315.8702f;
	Global_3D2A74[0x0000000E /*45*/].f_20[0x00000001 /*4*/] = { -380.5807f, -2820.387f, 5.0003f };
	Global_3D2A74[0x0000000E /*45*/].f_20[0x00000001 /*4*/].f_3 = 160.48f;
	Global_3D2A74[0x0000000E /*45*/].f_20[0x00000002 /*4*/] = { -456.5881f, -2906.157f, 0f };
	Global_3D2A74[0x0000000E /*45*/].f_20[0x00000002 /*4*/].f_3 = 162.6687f;
	Global_3D2A74[0x0000000F /*45*/].f_20[0x00000000 /*4*/] = { 1292.652f, -3088.689f, 4.9066f };
	Global_3D2A74[0x0000000F /*45*/].f_20[0x00000000 /*4*/].f_3 = 60.2816f;
	Global_3D2A74[0x0000000F /*45*/].f_20[0x00000001 /*4*/] = { 1288.942f, -3074.029f, 4.934f };
	Global_3D2A74[0x0000000F /*45*/].f_20[0x00000001 /*4*/].f_3 = 258.5226f;
	Global_3D2A74[0x0000000F /*45*/].f_20[0x00000002 /*4*/] = { 1308.678f, -3083.984f, 0f };
	Global_3D2A74[0x0000000F /*45*/].f_20[0x00000002 /*4*/].f_3 = 343.9506f;
	Global_3D2A74[0x00000010 /*45*/].f_20[0x00000000 /*4*/] = { 1206.367f, -2669.062f, 3.001f };
	Global_3D2A74[0x00000010 /*45*/].f_20[0x00000000 /*4*/].f_3 = 77.4622f;
	Global_3D2A74[0x00000010 /*45*/].f_20[0x00000001 /*4*/] = { 1377.173f, -2710.035f, 2.1007f };
	Global_3D2A74[0x00000010 /*45*/].f_20[0x00000001 /*4*/].f_3 = 178.4367f;
	Global_3D2A74[0x00000010 /*45*/].f_20[0x00000002 /*4*/] = { 1313.231f, -2800.326f, 0f };
	Global_3D2A74[0x00000010 /*45*/].f_20[0x00000002 /*4*/].f_3 = 250.5272f;
	Global_3D2A74[0x00000011 /*45*/].f_20[0x00000000 /*4*/] = { 1288.72f, -3343.127f, 4.9016f };
	Global_3D2A74[0x00000011 /*45*/].f_20[0x00000000 /*4*/].f_3 = 83.766f;
	Global_3D2A74[0x00000011 /*45*/].f_20[0x00000001 /*4*/] = { 1291.003f, -3327.35f, 4.9049f };
	Global_3D2A74[0x00000011 /*45*/].f_20[0x00000001 /*4*/].f_3 = 271.1578f;
	Global_3D2A74[0x00000011 /*45*/].f_20[0x00000002 /*4*/] = { 1301.827f, -3357.499f, 0f };
	Global_3D2A74[0x00000011 /*45*/].f_20[0x00000002 /*4*/].f_3 = 301.3926f;
	Global_3D2A74[0x00000012 /*45*/].f_20[0x00000000 /*4*/] = { 2797.366f, -698.9788f, 2.5743f };
	Global_3D2A74[0x00000012 /*45*/].f_20[0x00000000 /*4*/].f_3 = 119.8324f;
	Global_3D2A74[0x00000012 /*45*/].f_20[0x00000001 /*4*/] = { 2684.635f, -863.2911f, 24.9476f };
	Global_3D2A74[0x00000012 /*45*/].f_20[0x00000001 /*4*/].f_3 = 212.3963f;
	Global_3D2A74[0x00000012 /*45*/].f_20[0x00000002 /*4*/] = { 2871.985f, -733.9852f, 0f };
	Global_3D2A74[0x00000012 /*45*/].f_20[0x00000002 /*4*/].f_3 = 228.3137f;
	Global_3D2A74[0x00000013 /*45*/].f_20[0x00000000 /*4*/] = { 2799.071f, -713.1099f, 3.5076f };
	Global_3D2A74[0x00000013 /*45*/].f_20[0x00000000 /*4*/].f_3 = 92.0258f;
	Global_3D2A74[0x00000013 /*45*/].f_20[0x00000001 /*4*/] = { 2784.094f, -730.8027f, 5.7956f };
	Global_3D2A74[0x00000013 /*45*/].f_20[0x00000001 /*4*/].f_3 = 299.093f;
	Global_3D2A74[0x00000013 /*45*/].f_20[0x00000002 /*4*/] = { 2862.474f, -601.0669f, 0f };
	Global_3D2A74[0x00000013 /*45*/].f_20[0x00000002 /*4*/].f_3 = 267.4701f;
	Global_3D2A74[0x00000014 /*45*/].f_20[0x00000000 /*4*/] = { 2803.415f, -676.9994f, 1.6518f };
	Global_3D2A74[0x00000014 /*45*/].f_20[0x00000000 /*4*/].f_3 = 78.5588f;
	Global_3D2A74[0x00000014 /*45*/].f_20[0x00000001 /*4*/] = { 2696.749f, -828.5058f, 27.1032f };
	Global_3D2A74[0x00000014 /*45*/].f_20[0x00000001 /*4*/].f_3 = 193.2687f;
	Global_3D2A74[0x00000014 /*45*/].f_20[0x00000002 /*4*/] = { 2866.837f, -791.7337f, 0f };
	Global_3D2A74[0x00000014 /*45*/].f_20[0x00000002 /*4*/].f_3 = 232.5099f;
	Global_3D2A74[0x00000015 /*45*/].f_20[0x00000000 /*4*/] = { 2768.212f, 1263.657f, 2.8663f };
	Global_3D2A74[0x00000015 /*45*/].f_20[0x00000000 /*4*/].f_3 = 118.7555f;
	Global_3D2A74[0x00000015 /*45*/].f_20[0x00000001 /*4*/] = { 2566.175f, 1751.526f, 23.7902f };
	Global_3D2A74[0x00000015 /*45*/].f_20[0x00000001 /*4*/].f_3 = 273.4148f;
	Global_3D2A74[0x00000015 /*45*/].f_20[0x00000002 /*4*/] = { 2820.863f, 1272.885f, 0f };
	Global_3D2A74[0x00000015 /*45*/].f_20[0x00000002 /*4*/].f_3 = 275.3719f;
	Global_3D2A74[0x00000016 /*45*/].f_20[0x00000000 /*4*/] = { 2774.699f, 1207.855f, 0.7296f };
	Global_3D2A74[0x00000016 /*45*/].f_20[0x00000000 /*4*/].f_3 = 90.8381f;
	Global_3D2A74[0x00000016 /*45*/].f_20[0x00000001 /*4*/] = { 2567.04f, 931.361f, 82.2892f };
	Global_3D2A74[0x00000016 /*45*/].f_20[0x00000001 /*4*/].f_3 = 294.8305f;
	Global_3D2A74[0x00000016 /*45*/].f_20[0x00000002 /*4*/] = { 2813.253f, 1202.955f, 0f };
	Global_3D2A74[0x00000016 /*45*/].f_20[0x00000002 /*4*/].f_3 = 268.3473f;
	Global_3D2A74[0x00000017 /*45*/].f_20[0x00000000 /*4*/] = { 3866.215f, 4345.182f, 5.5636f };
	Global_3D2A74[0x00000017 /*45*/].f_20[0x00000000 /*4*/].f_3 = 24.0254f;
	Global_3D2A74[0x00000017 /*45*/].f_20[0x00000001 /*4*/] = { 2700.47f, 2979.347f, 35.5843f };
	Global_3D2A74[0x00000017 /*45*/].f_20[0x00000001 /*4*/].f_3 = 211.797f;
	Global_3D2A74[0x00000017 /*45*/].f_20[0x00000002 /*4*/] = { 3892.01f, 4291.369f, 0f };
	Global_3D2A74[0x00000017 /*45*/].f_20[0x00000002 /*4*/].f_3 = 228.3766f;
	Global_3D2A74[0x00000018 /*45*/].f_20[0x00000000 /*4*/] = { 3868.027f, 4327.946f, 5.1203f };
	Global_3D2A74[0x00000018 /*45*/].f_20[0x00000000 /*4*/].f_3 = 5.5954f;
	Global_3D2A74[0x00000018 /*45*/].f_20[0x00000001 /*4*/] = { 3928.766f, 4393.218f, 15.5509f };
	Global_3D2A74[0x00000018 /*45*/].f_20[0x00000001 /*4*/].f_3 = 292.8381f;
	Global_3D2A74[0x00000018 /*45*/].f_20[0x00000002 /*4*/] = { 3907.16f, 4311.723f, 0f };
	Global_3D2A74[0x00000018 /*45*/].f_20[0x00000002 /*4*/].f_3 = 256.1528f;
	Global_3D2A74[0x00000019 /*45*/].f_20[0x00000000 /*4*/] = { 3809.338f, 4456.854f, 3.1726f };
	Global_3D2A74[0x00000019 /*45*/].f_20[0x00000000 /*4*/].f_3 = 74.3336f;
	Global_3D2A74[0x00000019 /*45*/].f_20[0x00000001 /*4*/] = { 3788.623f, 4507.489f, 6.0836f };
	Global_3D2A74[0x00000019 /*45*/].f_20[0x00000001 /*4*/].f_3 = 328.0288f;
	Global_3D2A74[0x00000019 /*45*/].f_20[0x00000002 /*4*/] = { 3854.021f, 4504.268f, 0f };
	Global_3D2A74[0x00000019 /*45*/].f_20[0x00000002 /*4*/].f_3 = 285.2981f;
	Global_3D2A74[0x0000001A /*45*/].f_20[0x00000000 /*4*/] = { 3811.947f, 4469.669f, 2.9054f };
	Global_3D2A74[0x0000001A /*45*/].f_20[0x00000000 /*4*/].f_3 = 120.0346f;
	Global_3D2A74[0x0000001A /*45*/].f_20[0x00000001 /*4*/] = { 3847.531f, 4397.894f, 3.1748f };
	Global_3D2A74[0x0000001A /*45*/].f_20[0x00000001 /*4*/].f_3 = 338.2054f;
	Global_3D2A74[0x0000001A /*45*/].f_20[0x00000002 /*4*/] = { 3868.626f, 4442.403f, 0f };
	Global_3D2A74[0x0000001A /*45*/].f_20[0x00000002 /*4*/].f_3 = 281.4086f;
	Global_3D2A74[0x0000001B /*45*/].f_20[0x00000000 /*4*/] = { 3258.916f, 5217.696f, 18.945f };
	Global_3D2A74[0x0000001B /*45*/].f_20[0x00000000 /*4*/].f_3 = 181.2822f;
	Global_3D2A74[0x0000001B /*45*/].f_20[0x00000001 /*4*/] = { 3275.727f, 5199.218f, 17.9096f };
	Global_3D2A74[0x0000001B /*45*/].f_20[0x00000001 /*4*/].f_3 = 328.593f;
	Global_3D2A74[0x0000001B /*45*/].f_20[0x00000002 /*4*/] = { 3248.643f, 5322.504f, 0f };
	Global_3D2A74[0x0000001B /*45*/].f_20[0x00000002 /*4*/].f_3 = 274.5202f;
	Global_3D2A74[0x0000001C /*45*/].f_20[0x00000000 /*4*/] = { 3338.185f, 5573.443f, 20.3965f };
	Global_3D2A74[0x0000001C /*45*/].f_20[0x00000000 /*4*/].f_3 = 200.2075f;
	Global_3D2A74[0x0000001C /*45*/].f_20[0x00000001 /*4*/] = { 3368.654f, 5570.181f, 13.6552f };
	Global_3D2A74[0x0000001C /*45*/].f_20[0x00000001 /*4*/].f_3 = 359.9985f;
	Global_3D2A74[0x0000001C /*45*/].f_20[0x00000002 /*4*/] = { 3386.887f, 5696.864f, 0f };
	Global_3D2A74[0x0000001C /*45*/].f_20[0x00000002 /*4*/].f_3 = 285.1223f;
	Global_3D2A74[0x0000001D /*45*/].f_20[0x00000000 /*4*/] = { 3780.474f, 4477.698f, 5.2422f };
	Global_3D2A74[0x0000001D /*45*/].f_20[0x00000000 /*4*/].f_3 = 135.4026f;
	Global_3D2A74[0x0000001D /*45*/].f_20[0x00000001 /*4*/] = { 3392.134f, 4993.051f, 30.5221f };
	Global_3D2A74[0x0000001D /*45*/].f_20[0x00000001 /*4*/].f_3 = 300.8156f;
	Global_3D2A74[0x0000001D /*45*/].f_20[0x00000002 /*4*/] = { 3800.573f, 4576.032f, 0f };
	Global_3D2A74[0x0000001D /*45*/].f_20[0x00000002 /*4*/].f_3 = 328.0469f;
	Global_3D2A74[0x0000001E /*45*/].f_20[0x00000000 /*4*/] = { 265.2008f, 6992.325f, 2.9654f };
	Global_3D2A74[0x0000001E /*45*/].f_20[0x00000000 /*4*/].f_3 = 165.6404f;
	Global_3D2A74[0x0000001E /*45*/].f_20[0x00000001 /*4*/] = { 228.2158f, 6992.481f, 1.5349f };
	Global_3D2A74[0x0000001E /*45*/].f_20[0x00000001 /*4*/].f_3 = 338.5522f;
	Global_3D2A74[0x0000001E /*45*/].f_20[0x00000002 /*4*/] = { 309.4163f, 7025.832f, 0f };
	Global_3D2A74[0x0000001E /*45*/].f_20[0x00000002 /*4*/].f_3 = 298.1702f;
	Global_3D2A74[0x0000001F /*45*/].f_20[0x00000000 /*4*/] = { 1459.03f, 6570.599f, 12.3527f };
	Global_3D2A74[0x0000001F /*45*/].f_20[0x00000000 /*4*/].f_3 = 133.2433f;
	Global_3D2A74[0x0000001F /*45*/].f_20[0x00000001 /*4*/] = { 1618.721f, 6659.766f, 22.3415f };
	Global_3D2A74[0x0000001F /*45*/].f_20[0x00000001 /*4*/].f_3 = 342.8323f;
	Global_3D2A74[0x0000001F /*45*/].f_20[0x00000002 /*4*/] = { 1563.629f, 6684.272f, 0f };
	Global_3D2A74[0x0000001F /*45*/].f_20[0x00000002 /*4*/].f_3 = 357.4255f;
	Global_3D2A74[0x00000020 /*45*/].f_20[0x00000000 /*4*/] = { 1390.502f, 6592.286f, 11.5278f };
	Global_3D2A74[0x00000020 /*45*/].f_20[0x00000000 /*4*/].f_3 = 283.1772f;
	Global_3D2A74[0x00000020 /*45*/].f_20[0x00000001 /*4*/] = { 1142.376f, 6535.105f, 17.5983f };
	Global_3D2A74[0x00000020 /*45*/].f_20[0x00000001 /*4*/].f_3 = 342.9795f;
	Global_3D2A74[0x00000020 /*45*/].f_20[0x00000002 /*4*/] = { 1280.147f, 6660.721f, 0f };
	Global_3D2A74[0x00000020 /*45*/].f_20[0x00000002 /*4*/].f_3 = 344.6634f;
	Global_3D2A74[0x00000021 /*45*/].f_20[0x00000000 /*4*/] = { -817.0295f, 5881.543f, 6.2074f };
	Global_3D2A74[0x00000021 /*45*/].f_20[0x00000000 /*4*/].f_3 = 258.9158f;
	Global_3D2A74[0x00000021 /*45*/].f_20[0x00000001 /*4*/] = { -821.1178f, 5935.959f, 19.9904f };
	Global_3D2A74[0x00000021 /*45*/].f_20[0x00000001 /*4*/].f_3 = 129.2778f;
	Global_3D2A74[0x00000021 /*45*/].f_20[0x00000002 /*4*/] = { -915.4951f, 5851.08f, 0f };
	Global_3D2A74[0x00000021 /*45*/].f_20[0x00000002 /*4*/].f_3 = 79.7242f;
	Global_3D2A74[0x00000022 /*45*/].f_20[0x00000000 /*4*/] = { -635.697f, 6156.933f, 1.9706f };
	Global_3D2A74[0x00000022 /*45*/].f_20[0x00000000 /*4*/].f_3 = 272.4947f;
	Global_3D2A74[0x00000022 /*45*/].f_20[0x00000001 /*4*/] = { -560.5052f, 6254.325f, 7.6306f };
	Global_3D2A74[0x00000022 /*45*/].f_20[0x00000001 /*4*/].f_3 = 42.5652f;
	Global_3D2A74[0x00000022 /*45*/].f_20[0x00000002 /*4*/] = { -685.4041f, 6252.036f, 0f };
	Global_3D2A74[0x00000022 /*45*/].f_20[0x00000002 /*4*/].f_3 = 51.8815f;
	Global_3D2A74[0x00000023 /*45*/].f_20[0x00000000 /*4*/] = { -99.1651f, 6722.008f, 0.5012f };
	Global_3D2A74[0x00000023 /*45*/].f_20[0x00000000 /*4*/].f_3 = 268.104f;
	Global_3D2A74[0x00000023 /*45*/].f_20[0x00000001 /*4*/] = { -142.6568f, 6651.685f, 0.9997f };
	Global_3D2A74[0x00000023 /*45*/].f_20[0x00000001 /*4*/].f_3 = 32.9657f;
	Global_3D2A74[0x00000023 /*45*/].f_20[0x00000002 /*4*/] = { -185.4709f, 6733.273f, 0f };
	Global_3D2A74[0x00000023 /*45*/].f_20[0x00000002 /*4*/].f_3 = 14.6319f;
	Global_3D3161[0x00000000 /*4*/] = { 5.8173f, -48.2285f, -5.5287f };
	Global_3D3161[0x00000000 /*4*/].f_3 = 30.0067f;
	Global_3D3161[0x00000001 /*4*/] = { -5.0147f, -46.5139f, -5.5286f };
	Global_3D3161[0x00000001 /*4*/].f_3 = 198.2057f;
	Global_3D3161[0x00000002 /*4*/] = { -0.3064f, -40.6402f, -2.431f };
	Global_3D3161[0x00000002 /*4*/].f_3 = 190.904f;
	Global_3D3161[0x00000003 /*4*/] = { 6.708f, -25.9916f, 0.4969f };
	Global_3D3161[0x00000003 /*4*/].f_3 = 286.8118f;
	Global_3D3161[0x00000004 /*4*/] = { -3.9829f, -25.182f, 0.497f };
	Global_3D3161[0x00000004 /*4*/].f_3 = 187.8127f;
	Global_3D3161[0x00000005 /*4*/] = { 1.187f, -14.8577f, 0.4968f };
	Global_3D3161[0x00000005 /*4*/].f_3 = 223.2354f;
	Global_3D3161[0x00000006 /*4*/] = { 1.9789f, -43.6601f, -5.5216f };
	Global_3D3161[0x00000006 /*4*/].f_3 = 132.0817f;
	Global_3D3161[0x00000007 /*4*/] = { -2.2018f, -43.2581f, -5.5209f };
	Global_3D3161[0x00000007 /*4*/].f_3 = 210.6833f;
	Global_3D3161[0x00000008 /*4*/] = { -3.5979f, -37.4337f, -2.4323f };
	Global_3D3161[0x00000008 /*4*/].f_3 = 232.0388f;
	Global_3D3161[0x00000009 /*4*/] = { 3.5456f, -36.9838f, -2.4323f };
	Global_3D3161[0x00000009 /*4*/].f_3 = 141.3021f;
	Global_3D3161[0x0000000A /*4*/] = { 2.0707f, -34.8316f, -2.4323f };
	Global_3D3161[0x0000000A /*4*/].f_3 = 157.8206f;
	Global_3D3161[0x0000000B /*4*/] = { -1.0928f, -33.9597f, -2.4323f };
	Global_3D3161[0x0000000B /*4*/].f_3 = 175.8183f;
	Global_3D3161[0x0000000C /*4*/] = { -5.842f, -28.0408f, 0.5039f };
	Global_3D3161[0x0000000C /*4*/].f_3 = 215.1446f;
	Global_3D3161[0x0000000D /*4*/] = { -1.4056f, -15.1676f, 0.5038f };
	Global_3D3161[0x0000000D /*4*/].f_3 = 161.5367f;
	Global_3D3161[0x0000000E /*4*/] = { -1.4056f, -15.1676f, 0.5038f };
	Global_3D3161[0x0000000E /*4*/].f_3 = 161.5367f;
	Global_3D3161[0x0000000F /*4*/] = { 5.7803f, -18.6142f, 0.5038f };
	Global_3D3161[0x0000000F /*4*/].f_3 = 232.0092f;
	Global_3D3161[0x00000010 /*4*/] = { 4.8851f, -27.8689f, 0.504f };
	Global_3D3161[0x00000010 /*4*/].f_3 = 159.7201f;
	Global_3D3161[0x00000011 /*4*/] = { 6.4316f, -51.9249f, -5.5218f };
	Global_3D3161[0x00000011 /*4*/].f_3 = 171.7628f;
	Global_3D3161[0x00000012 /*4*/] = { -6.4454f, -51.563f, -5.5221f };
	Global_3D3161[0x00000012 /*4*/].f_3 = 170.0196f;
	Global_3D3161[0x00000013 /*4*/] = { -6.0149f, -38.0291f, -5.5207f };
	Global_3D3161[0x00000013 /*4*/].f_3 = 141.0158f;
	Global_3D3161[0x00000014 /*4*/] = { 5.9235f, -38.2919f, -5.5218f };
	Global_3D3161[0x00000014 /*4*/].f_3 = 251.4813f;
	Global_3D3161[0x00000015 /*4*/] = { 6.8878f, -27.0348f, -5.5218f };
	Global_3D3161[0x00000015 /*4*/].f_3 = 227.1692f;
	Global_3D3161[0x00000016 /*4*/] = { 6.8878f, -27.0348f, -5.5218f };
	Global_3D3161[0x00000016 /*4*/].f_3 = 227.1692f;
	Global_3D3161[0x00000017 /*4*/] = { -6.4161f, -33.4939f, -5.5201f };
	Global_3D3161[0x00000017 /*4*/].f_3 = 129.7836f;
	Global_3D3161[0x00000018 /*4*/] = { -6.4161f, -33.4939f, -5.5201f };
	Global_3D3161[0x00000018 /*4*/].f_3 = 129.7836f;
	Global_3D3161[0x00000019 /*4*/] = { -6.8883f, -28.2909f, -5.5199f };
	Global_3D3161[0x00000019 /*4*/].f_3 = 176.8486f;
	Global_3D3161[0x0000001A /*4*/] = { -6.5118f, -25.1397f, -5.5203f };
	Global_3D3161[0x0000001A /*4*/].f_3 = 113.7529f;
	Global_3D3161[0x0000001B /*4*/] = { -6.2417f, -33.0709f, -0.6002f };
	Global_3D3161[0x0000001B /*4*/].f_3 = 188.1441f;
	Global_3D3161[0x0000001C /*4*/] = { 6.1422f, -32.388f, -0.2794f };
	Global_3D3161[0x0000001C /*4*/].f_3 = 165.495f;
	Global_3D3161[0x0000001D /*4*/] = { -0.7784f, -22.1027f, 0.5038f };
	Global_3D3161[0x0000001D /*4*/].f_3 = 172.0094f;
	Global_3D31DA[0x00000000 /*4*/] = { -0.8319f, 12.3016f, -5.5208f };
	Global_3D31DA[0x00000000 /*4*/].f_3 = 270.5026f;
	Global_3D31DA[0x00000001 /*4*/] = { -4.673f, 24.2213f, -5.521f };
	Global_3D31DA[0x00000001 /*4*/].f_3 = 164.555f;
	Global_3D31DA[0x00000002 /*4*/] = { -2.4334f, 5.4224f, -2.4335f };
	Global_3D31DA[0x00000002 /*4*/].f_3 = 270.4796f;
	func_17();
	Global_3D31E7[0x00000000 /*3*/] = { 0f, 0f, 0f };
	Global_3D31E7[0x00000001 /*3*/] = { Global_3D2A74[0x00000003 /*45*/] + Global_3D2A74[0x00000004 /*45*/] + Global_3D2A74[0x00000005 /*45*/] };
	Global_3D31E7[0x00000002 /*3*/] = { Global_3D2A74[0x00000000 /*45*/] + Global_3D2A74[0x00000001 /*45*/] + Global_3D2A74[0x00000002 /*45*/] };
	Global_3D31E7[0x00000003 /*3*/] = { Global_3D2A74[0x00000006 /*45*/] + Global_3D2A74[0x00000007 /*45*/] + Global_3D2A74[0x00000008 /*45*/] };
	Global_3D31E7[0x00000004 /*3*/] = { Global_3D2A74[0x00000009 /*45*/] + Global_3D2A74[0x0000000A /*45*/] + Global_3D2A74[0x0000000B /*45*/] };
	Global_3D31E7[0x00000005 /*3*/] = { Global_3D2A74[0x0000000C /*45*/] + Global_3D2A74[0x0000000D /*45*/] + Global_3D2A74[0x0000000E /*45*/] };
	Global_3D31E7[0x00000006 /*3*/] = { Global_3D2A74[0x0000000F /*45*/] + Global_3D2A74[0x00000010 /*45*/] + Global_3D2A74[0x00000011 /*45*/] };
	Global_3D31E7[0x00000007 /*3*/] = { Global_3D2A74[0x00000012 /*45*/] + Global_3D2A74[0x00000013 /*45*/] + Global_3D2A74[0x00000014 /*45*/] };
	Global_3D31E7[0x00000008 /*3*/] = { Global_3D2A74[0x00000015 /*45*/] + Global_3D2A74[0x00000016 /*45*/] + Global_3D2A74[0x00000017 /*45*/] };
	Global_3D31E7[0x00000009 /*3*/] = { Global_3D2A74[0x00000018 /*45*/] + Global_3D2A74[0x00000019 /*45*/] + Global_3D2A74[0x0000001A /*45*/] };
	Global_3D31E7[0x0000000A /*3*/] = { Global_3D2A74[0x0000001B /*45*/] + Global_3D2A74[0x0000001C /*45*/] + Global_3D2A74[0x0000001D /*45*/] };
	Global_3D31E7[0x0000000B /*3*/] = { Global_3D2A74[0x0000001E /*45*/] + Global_3D2A74[0x0000001F /*45*/] + Global_3D2A74[0x00000020 /*45*/] };
	Global_3D31E7[0x0000000C /*3*/] = { Global_3D2A74[0x00000021 /*45*/] + Global_3D2A74[0x00000022 /*45*/] + Global_3D2A74[0x00000023 /*45*/] };
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000D)
	{
		Global_3D31E7[iVar0 /*3*/] = { Global_3D31E7[iVar0 /*3*/] * Vector(0.333333f, 0.333333f, 0.333333f) };
		iVar0++;
	}
	Global_3D320F[0x00000000 /*3*/] = { 7.87f, -54.898f, -10.9966f };
	Global_3D320F[0x00000001 /*3*/] = { 2.417f, -60.36f, -10.9442f };
	Global_3D320F[0x00000002 /*3*/] = { -2.4168f, -60.36f, -10.9442f };
	Global_3D320F[0x00000003 /*3*/] = { -7.87f, -54.898f, -10.9966f };
}

void func_17()
{
	Global_3D30F6[0x00000000 /*10*/] = { -0.2508f, -32.3f, 0.8727f };
	Global_3D30F6[0x00000000 /*10*/].f_3 = 0f;
	Global_3D30F6[0x00000000 /*10*/].f_5 = joaat("supervolito2");
	Global_3D30F6[0x00000000 /*10*/].f_4 = 3.5f;
	Global_3D30F6[0x00000000 /*10*/].f_7 = 0x000493E0;
	Global_3D30F6[0x00000000 /*10*/].f_8 = 0xFFFFFFFF;
	Global_3D30F6[0x00000000 /*10*/].f_9 = 400f;
	Global_3D30F6[0x00000000 /*10*/].f_6 = 0x00000040;
	Global_3D30F6[0x00000001 /*10*/] = { 11.25f, -55.8404f, -11f };
	Global_3D30F6[0x00000001 /*10*/].f_3 = 340.8939f;
	Global_3D30F6[0x00000001 /*10*/].f_5 = joaat("dinghy4");
	Global_3D30F6[0x00000001 /*10*/].f_4 = 2.4f;
	Global_3D30F6[0x00000001 /*10*/].f_9 = 300f;
	Global_3D30F6[0x00000001 /*10*/].f_6 = 0x00000001;
	Global_3D30F6[0x00000002 /*10*/] = { 6.75f, -63f, -11f };
	Global_3D30F6[0x00000002 /*10*/].f_3 = 206.26f;
	Global_3D30F6[0x00000002 /*10*/].f_5 = joaat("seashark3");
	Global_3D30F6[0x00000002 /*10*/].f_4 = 1.4f;
	Global_3D30F6[0x00000002 /*10*/].f_9 = 200f;
	Global_3D30F6[0x00000002 /*10*/].f_6 = 0x00000001;
	Global_3D30F6[0x00000003 /*10*/] = { 4.5f, -63f, -11f };
	Global_3D30F6[0x00000003 /*10*/].f_3 = 206.26f;
	Global_3D30F6[0x00000003 /*10*/].f_5 = joaat("seashark3");
	Global_3D30F6[0x00000003 /*10*/].f_4 = 1.4f;
	Global_3D30F6[0x00000003 /*10*/].f_9 = 200f;
	Global_3D30F6[0x00000003 /*10*/].f_6 = 0x00000001;
	Global_3D30F6[0x00000004 /*10*/] = { -11.25f, -55.8404f, -11f };
	Global_3D30F6[0x00000004 /*10*/].f_3 = 20f;
	Global_3D30F6[0x00000004 /*10*/].f_5 = joaat("toro2");
	Global_3D30F6[0x00000004 /*10*/].f_4 = 2.4f;
	Global_3D30F6[0x00000004 /*10*/].f_9 = 300f;
	Global_3D30F6[0x00000004 /*10*/].f_6 = 0x00000001;
	Global_3D30F6[0x00000005 /*10*/] = { -4.5f, -63f, -11f };
	Global_3D30F6[0x00000005 /*10*/].f_3 = 153.7463f;
	Global_3D30F6[0x00000005 /*10*/].f_5 = joaat("seashark3");
	Global_3D30F6[0x00000005 /*10*/].f_4 = 1.4f;
	Global_3D30F6[0x00000005 /*10*/].f_9 = 200f;
	Global_3D30F6[0x00000005 /*10*/].f_6 = 0x00000001;
	Global_3D30F6[0x00000006 /*10*/] = { -6.75f, -63f, -11f };
	Global_3D30F6[0x00000006 /*10*/].f_3 = 153.7463f;
	Global_3D30F6[0x00000006 /*10*/].f_5 = joaat("seashark3");
	Global_3D30F6[0x00000006 /*10*/].f_4 = 1.4f;
	Global_3D30F6[0x00000006 /*10*/].f_9 = 200f;
	Global_3D30F6[0x00000006 /*10*/].f_6 = 0x00000001;
	Global_3D313D[0x00000000 /*5*/] = { Global_3D30F6[0x00000001 /*10*/] };
	Global_3D313D[0x00000000 /*5*/].f_3 = Global_3D30F6[0x00000001 /*10*/].f_3;
	Global_3D313D[0x00000000 /*5*/].f_4 = Global_3D30F6[0x00000001 /*10*/].f_4;
	Global_3D313D[0x00000001 /*5*/] = { Global_3D30F6[0x00000002 /*10*/] };
	Global_3D313D[0x00000001 /*5*/].f_3 = Global_3D30F6[0x00000002 /*10*/].f_3;
	Global_3D313D[0x00000001 /*5*/].f_4 = Global_3D30F6[0x00000002 /*10*/].f_4;
	Global_3D313D[0x00000002 /*5*/] = { Global_3D30F6[0x00000003 /*10*/] };
	Global_3D313D[0x00000002 /*5*/].f_3 = Global_3D30F6[0x00000003 /*10*/].f_3;
	Global_3D313D[0x00000002 /*5*/].f_4 = Global_3D30F6[0x00000003 /*10*/].f_4;
	Global_3D313D[0x00000003 /*5*/] = { Global_3D30F6[0x00000004 /*10*/] };
	Global_3D313D[0x00000003 /*5*/].f_3 = Global_3D30F6[0x00000004 /*10*/].f_3;
	Global_3D313D[0x00000003 /*5*/].f_4 = Global_3D30F6[0x00000004 /*10*/].f_4;
	Global_3D313D[0x00000004 /*5*/] = { Global_3D30F6[0x00000005 /*10*/] };
	Global_3D313D[0x00000004 /*5*/].f_3 = Global_3D30F6[0x00000005 /*10*/].f_3;
	Global_3D313D[0x00000004 /*5*/].f_4 = Global_3D30F6[0x00000005 /*10*/].f_4;
	Global_3D313D[0x00000005 /*5*/] = { Global_3D30F6[0x00000006 /*10*/] };
	Global_3D313D[0x00000005 /*5*/].f_3 = Global_3D30F6[0x00000006 /*10*/].f_3;
	Global_3D313D[0x00000005 /*5*/].f_4 = Global_3D30F6[0x00000006 /*10*/].f_4;
	Global_3D313D[0x00000006 /*5*/] = { 0f, -63f, -11.9254f };
	Global_3D313D[0x00000006 /*5*/].f_3 = 180.2068f;
	Global_3D313D[0x00000006 /*5*/].f_4 = 2.4f;
}

void func_18(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = { -3542.82f, 1488.25f, 5.42995f };
			*uParam2 = -123.045f;
			break;
		
		case 0x00000001:
			*uParam1 = { -3148.38f, 2807.55f, 5.42995f };
			*uParam2 = 91.955f;
			break;
		
		case 0x00000002:
			*uParam1 = { -3280.5f, 2140.51f, 5.42995f };
			*uParam2 = 86.955f;
			break;
		
		case 0x00000003:
			*uParam1 = { -2814.49f, 4072.74f, 5.42995f };
			*uParam2 = -108.045f;
			break;
		
		case 0x00000004:
			*uParam1 = { -3254.55f, 3685.68f, 5.42995f };
			*uParam2 = 81.955f;
			break;
		
		case 0x00000005:
			*uParam1 = { -2368.44f, 4697.87f, 5.42995f };
			*uParam2 = -133.045f;
			break;
		
		case 0x00000006:
			*uParam1 = { -3205.34f, -219.01f, 5.42995f };
			*uParam2 = 176.955f;
			break;
		
		case 0x00000007:
			*uParam1 = { -3448.25f, 311.502f, 5.42995f };
			*uParam2 = -83.045f;
			break;
		
		case 0x00000008:
			*uParam1 = { -2697.86f, -540.612f, 5.42995f };
			*uParam2 = 146.955f;
			break;
		
		case 0x00000009:
			*uParam1 = { -1995.73f, -1523.69f, 5.42997f };
			*uParam2 = -38.045f;
			break;
		
		case 0x0000000A:
			*uParam1 = { -2117.58f, -2543.35f, 5.42995f };
			*uParam2 = 36.955f;
			break;
		
		case 0x0000000B:
			*uParam1 = { -1605.07f, -1872.47f, 5.42995f };
			*uParam2 = -68.045f;
			break;
		
		case 0x0000000C:
			*uParam1 = { -753.082f, -3919.07f, 5.42995f };
			*uParam2 = 11.955f;
			break;
		
		case 0x0000000D:
			*uParam1 = { -351.061f, -3553.32f, 5.42995f };
			*uParam2 = -123.045f;
			break;
		
		case 0x0000000E:
			*uParam1 = { -1460.54f, -3761.47f, 5.42995f };
			*uParam2 = 161.955f;
			break;
		
		case 0x0000000F:
			*uParam1 = { 1546.89f, -3045.63f, 5.42995f };
			*uParam2 = -118.045f;
			break;
		
		case 0x00000010:
			*uParam1 = { 2490.89f, -2428.85f, 5.42995f };
			*uParam2 = -168.045f;
			break;
		
		case 0x00000011:
			*uParam1 = { 2049.79f, -2821.62f, 5.42995f };
			*uParam2 = 31.955f;
			break;
		
		case 0x00000012:
			*uParam1 = { 3029.02f, -1495.7f, 5.42995f };
			*uParam2 = -108.045f;
			break;
		
		case 0x00000013:
			*uParam1 = { 3021.25f, -723.39f, 5.42995f };
			*uParam2 = 81.955f;
			break;
		
		case 0x00000014:
			*uParam1 = { 2976.62f, -1994.76f, 5.42995f };
			*uParam2 = -133.045f;
			break;
		
		case 0x00000015:
			*uParam1 = { 3404.51f, 1977.04f, 5.42995f };
			*uParam2 = -103.045f;
			break;
		
		case 0x00000016:
			*uParam1 = { 3411.1f, 1193.44f, 5.42995f };
			*uParam2 = 31.955f;
			break;
		
		case 0x00000017:
			*uParam1 = { 3784.8f, 2548.54f, 5.42995f };
			*uParam2 = 86.955f;
			break;
		
		case 0x00000018:
			*uParam1 = { 4225.03f, 3988f, 5.42995f };
			*uParam2 = 61.955f;
			break;
		
		case 0x00000019:
			*uParam1 = { 4250.58f, 4576.57f, 5.42995f };
			*uParam2 = 111.955f;
			break;
		
		case 0x0000001A:
			*uParam1 = { 4204.36f, 3373.7f, 5.42995f };
			*uParam2 = 81.955f;
			break;
		
		case 0x0000001B:
			*uParam1 = { 3751.68f, 5753.5f, 5.42995f };
			*uParam2 = 136.955f;
			break;
		
		case 0x0000001C:
			*uParam1 = { 3490.11f, 6305.79f, 5.42995f };
			*uParam2 = 156.955f;
			break;
		
		case 0x0000001D:
			*uParam1 = { 3684.85f, 5212.24f, 5.42995f };
			*uParam2 = -58.045f;
			break;
		
		case 0x0000001E:
			*uParam1 = { 581.595f, 7124.56f, 5.42995f };
			*uParam2 = 121.955f;
			break;
		
		case 0x0000001F:
			*uParam1 = { 2004.46f, 6907.16f, 5.42997f };
			*uParam2 = 6.955f;
			break;
		
		case 0x00000020:
			*uParam1 = { 1396.64f, 6860.2f, 5.42995f };
			*uParam2 = 176.955f;
			break;
		
		case 0x00000021:
			*uParam1 = { -1170.69f, 5980.68f, 5.42995f };
			*uParam2 = 91.955f;
			break;
		
		case 0x00000022:
			*uParam1 = { -777.487f, 6566.91f, 5.42995f };
			*uParam2 = 26.955f;
			break;
		
		case 0x00000023:
			*uParam1 = { -381.774f, 6946.96f, 5.42995f };
			*uParam2 = 71.955f;
			break;
		
		case 0x00000024:
			*uParam1 = { 3615.523f, -4779.021f, 5.4337f };
			*uParam2 = 0f;
			break;
	}
}

