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
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	vector3 vLocal_57 = { 0f, 0f, 0f };
	vector3 vLocal_58 = { 0f, 0f, 0f };
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<49> Local_64[2];
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	struct<22> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 16;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	struct<35> Local_200 = { 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0 } ;
	struct<35> Local_201 = { 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_202 = 0;
	var uLocal_203 = 2;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 2;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 2;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = -1027211264;
	var uLocal_225 = 0;
	int iLocal_226 = 0;
	float fLocal_227 = 0f;
	int iLocal_228 = 0;
	float fLocal_229 = 0f;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	vector3 vLocal_236 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	float fLocal_238 = 0f;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	bool bLocal_241 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar1;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 0x00000003;
	iLocal_43 = 0x00000001;
	iLocal_44 = 0x00000041;
	iLocal_45 = 0x00000031;
	iLocal_46 = 0x00000040;
	iLocal_50 = unk_0xAD1355DD1E5D2D9B();
	uLocal_51 = unk_0x817B3657F78A517A();
	iLocal_53 = 0x00000001;
	vLocal_54 = { -740.3f, 5594.5f, 41.2f };
	vLocal_55 = { 446.8f, 5571.1f, 780.7f };
	vLocal_56 = { 0f, 2.48f, -5.3f };
	vLocal_57 = { 1.3f, 0f, -5.3f };
	vLocal_58 = { -1.3f, 0f, -5.3f };
	fLocal_59 = 1f;
	fLocal_60 = 10f;
	fLocal_61 = 0.65f;
	iLocal_62 = 0x0001D4C0;
	iLocal_63 = 0x000088B8;
	iLocal_65 = joaat("p_cablecar_s");
	iLocal_66 = joaat("p_cablecar_s_door_l");
	iLocal_67 = joaat("p_cablecar_s_door_r");
	fLocal_68 = -15f;
	iLocal_81 = 0x00000001;
	fLocal_227 = 3f;
	fLocal_229 = 0f;
	iLocal_231 = 0x00000015;
	iLocal_235 = 0xFFFFFFFF;
	vVar1 = { unk_0xF1EE614CA05DDE75() };
	if (unk_0x8A22C4C08282BF26(joaat("cablecar")) > 0x00000001)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	if (unk_0x2EBF608FFE6CA406(0x000000E3))
	{
		func_307(0x00000001, 0x00000001, 0x00000001, 0x00000001);
		Global_7835 = 0x00000000;
		func_303(0x00000000);
	}
	func_302(unk_0x16F2683693E537C9());
	func_295();
	func_294(&(Local_64[0x00000000 /*49*/]));
	func_291(&(Local_64[0x00000001 /*49*/]));
	unk_0xE108118042391BB3("AZ_COUNTRYSIDE_CHILEAD_CABLE_CAR_LINE", 0x00000001, 0x00000001);
	func_288(&Local_200, 0x00000000, 0x00000000, 0x00000000, 0x3F800000);
	func_288(&Local_201, 0x00000001, 0x00000000, 0x00000000, 0x3F800000);
	func_287();
	Local_200.f_19 = (unk_0x1C0640BA9A7327B3() + iLocal_63);
	Local_201.f_19 = (unk_0x1C0640BA9A7327B3() + iLocal_63);
	func_286(iLocal_239);
	func_285(fLocal_238);
	func_284(vLocal_237);
	func_284(vLocal_236);
	while (0x00000001)
	{
		if (Global_7833 == 0x00000001)
		{
			func_283(&Local_200);
			func_283(&Local_201);
		}
		if (!func_302(unk_0x16F2683693E537C9()) || Global_7833 == 0x00000001)
		{
			func_307(0x00000001, 0x00000001, 0x00000001, 0x00000001);
			Global_7835 = 0x00000000;
			func_282(&uLocal_225, 0x00000000);
			func_281(&Local_69, 0x00000000, 0x00000001);
			func_303(0x00000000);
		}
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
		if (((vVar0.x <= -900f || vVar0.x >= 740f) || vVar0.y <= 5200f) || vVar0.y >= 5900f)
		{
			func_303(0x00000000);
		}
		func_17(&Local_200);
		func_17(&Local_201);
		func_11(&Local_200);
		func_11(&Local_201);
		if (bLocal_79 == 0x00000001)
		{
			func_7(&Local_69, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x3E4CCCCD, 0x00000000, 0x3F800000, 0x00000000);
		}
		else
		{
			func_5();
		}
		if (func_302(unk_0x16F2683693E537C9()))
		{
			if (unk_0x0F1CCD77290EE12F() && iLocal_80 == 0x00000000)
			{
				if (func_4())
				{
					vVar0 = { unk_0xF1EE614CA05DDE75() };
					if (bLocal_241)
					{
						unk_0xF49D1BC9EF1C3EF4(vVar0, unk_0xF1EE614CA05DDE75() - vVar1);
						vVar1 = { vVar0 };
					}
					if (unk_0x1C0640BA9A7327B3() > iLocal_230)
					{
						vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
						unk_0x33B4EDA2D99D2806(vVar0);
						iLocal_230 = unk_0x1C0640BA9A7327B3() + 5000;
					}
				}
			}
		}
		if ((iLocal_232 == 0x00000000 && unk_0x2C1AA3A291786CDC()) && unk_0x8A22C4C08282BF26(joaat("bailbond3")) == 0x00000000)
		{
			func_283(&Local_200);
			func_283(&Local_201);
			func_3(&(Local_200.f_1C));
			func_3(&(Local_201.f_1C));
			iLocal_232 = 0x00000001;
		}
		if (iLocal_232 == 0x00000001 && !unk_0x2C1AA3A291786CDC())
		{
			func_1(&Local_200);
			func_1(&Local_201);
			iLocal_232 = 0x00000000;
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1(var uParam0)
{
	if (func_302(uParam0->f_2))
	{
		uParam0->f_1F = 0.88f;
		func_2(uParam0, 0.88f);
	}
}

void func_2(var uParam0, float fParam1)
{
	int iVar0;
	
	if (func_302(uParam0->f_2))
	{
		iVar0 = 0x00000000;
		while (iVar0 < uParam0->f_3)
		{
			if (func_302(uParam0->f_3[iVar0]))
			{
				if (unk_0xD59B17D2DFF98E26(uParam0->f_3[iVar0]))
				{
					unk_0x15AFB6CBDE990FB6(uParam0->f_3[iVar0], 0x00000001, 0x00000001);
				}
				if (iVar0 == 0x00000000)
				{
					unk_0x9F528B1B53FBC5D9(uParam0->f_3[iVar0], uParam0->f_2, 0x00000000, 0f, fParam1, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001);
				}
				else
				{
					unk_0x9F528B1B53FBC5D9(uParam0->f_3[iVar0], uParam0->f_2, 0x00000000, 0f, -fParam1, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001);
				}
			}
			if (func_302(uParam0->f_6[iVar0]))
			{
				if (unk_0xD59B17D2DFF98E26(uParam0->f_6[iVar0]))
				{
					unk_0x15AFB6CBDE990FB6(uParam0->f_6[iVar0], 0x00000001, 0x00000001);
				}
				if (iVar0 == 0x00000000)
				{
					unk_0x9F528B1B53FBC5D9(uParam0->f_6[iVar0], uParam0->f_2, 0x00000000, 0f, -fParam1, 0f, 0f, 0f, 180f, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001);
				}
				else
				{
					unk_0x9F528B1B53FBC5D9(uParam0->f_6[iVar0], uParam0->f_2, 0x00000000, 0f, fParam1, 0f, 0f, 0f, 180f, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001);
				}
			}
			iVar0++;
		}
	}
}

void func_3(var uParam0)
{
	if (*uParam0 != 0xFFFFFFFF)
	{
		unk_0x55D0A2DB35045A35(*uParam0);
		unk_0x43A06902454A1172(*uParam0);
		*uParam0 = 0xFFFFFFFF;
	}
}

bool func_4()
{
	return ((Local_200.f_B && Local_200.f_22) || (Local_201.f_B && Local_201.f_22));
}

void func_5()
{
	int iVar0;
	
	if (Local_200.f_B == 0x00000001 || Local_201.f_B == 0x00000001)
	{
		return;
	}
	if (iLocal_233 == 0x00000001)
	{
		return;
	}
	iVar0 = 0x00000000;
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 446.2582f, 5582.625f, 780.1892f, 446.3005f, 5560.008f, 786.9392f, 12.25f, 0x00000000, 0x00000001, 0x00000000))
	{
		if (Local_200.f_9)
		{
			iVar0++;
		}
		if (Local_201.f_9)
		{
			iVar0++;
		}
	}
	else if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -742.3477f, 5587.019f, 40.66549f, -742.1461f, 5602.772f, 49.8471f, 12.25f, 0x00000000, 0x00000001, 0x00000000))
	{
		if (Local_200.f_9)
		{
			iVar0++;
		}
		if (Local_201.f_9)
		{
			iVar0++;
		}
	}
	if (iVar0 == 0x00000002)
	{
		func_6("WAIT_CABLE", 0xFFFFFFFF);
		iLocal_233 = 0x00000001;
	}
}

void func_6(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

void func_7(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	
	unk_0xA2E3EDD0E119882F(0x00000002);
	func_10(&(iVar0[0x00000000]), &(iVar0[0x00000001]), &(iVar0[0x00000002]), &(iVar0[0x00000003]), 0x00000000, 0x00000000);
	if (unk_0x89DF0B812BA6383B())
	{
		iVar0[0x00000003] = (iVar0[0x00000003] * 0xFFFFFFFF);
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		fVar1 = unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000EF);
		fVar2 = unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000F0);
		fVar3 = (fVar1 - iParam0->f_1D);
		fVar4 = (fVar2 - iParam0->f_1E);
		iParam0->f_1D = fVar1;
		iParam0->f_1E = fVar2;
		if (bParam4)
		{
			iVar0[0x00000002] = -SYSTEM::ROUND(((fVar3 * fParam5) * 127f));
			iVar0[0x00000003] = -SYSTEM::ROUND(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[0x00000002] = SYSTEM::ROUND(((unk_0x659FAE9DBE6F38F5(0x00000002, 0x00000122) * fParam5) * 127f));
			iVar0[0x00000003] = SYSTEM::ROUND(((unk_0x659FAE9DBE6F38F5(0x00000002, 0x00000123) * fParam5) * 127f));
		}
		iVar0[0x00000002] = func_9((iVar0[0x00000002] + iParam0->f_18), 0xFFFFFF81, 0x0000007F);
		iVar0[0x00000003] = func_9((iVar0[0x00000003] + iParam0->f_19), 0xFFFFFF81, 0x0000007F);
	}
	if (iParam0->f_18 == iVar0[0x00000002] && iParam0->f_19 == iVar0[0x00000003])
	{
		if (iParam0->f_1B < unk_0x1C0640BA9A7327B3())
		{
			iParam0->f_18 = 0x00000000;
			iParam0->f_19 = 0x00000000;
			if (unk_0x91E3F625EF57450D(0x00000002))
			{
				iVar0[0x00000002] = 0x00000000;
				iVar0[0x00000003] = 0x00000000;
				iParam0->f_1C = 0x00000001;
			}
		}
	}
	else
	{
		iParam0->f_18 = iVar0[0x00000002];
		iParam0->f_19 = iVar0[0x00000003];
		iParam0->f_1B = unk_0x1C0640BA9A7327B3() + 4000;
		iParam0->f_1C = 0x00000000;
	}
	if (bParam2)
	{
		iParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[0x00000002]) / 127f) * IntToFloat(iParam0->f_14));
		iParam0->f_8.f_1 = ((-iParam0->f_8.f_2 * IntToFloat(iParam0->f_16)) / IntToFloat(iParam0->f_14));
		iParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[0x00000003]) / 127f) * IntToFloat(iParam0->f_15));
	}
	else
	{
		iParam0->f_8 = { 0f, 0f, 0f };
		iParam0->f_18 = 0x00000000;
		iParam0->f_19 = 0x00000000;
	}
	fVar5 = (30f * SYSTEM::TIMESTEP());
	vVar6 = { iParam0->f_8 + iParam0->f_B };
	if ((unk_0x91E3F625EF57450D(0x00000002) && bParam2) && !iParam0->f_1C)
	{
		iParam0->f_E = vVar6.x;
		iParam0->f_E.f_1 = vVar6.y;
		iParam0->f_E.f_2 = vVar6.z;
	}
	else
	{
		iParam0->f_E = (iParam0->f_E + func_8(((((vVar6.x - iParam0->f_E) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		iParam0->f_E.f_1 = (iParam0->f_E.f_1 + func_8(((((vVar6.y - iParam0->f_E.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		iParam0->f_E.f_2 = (iParam0->f_E.f_2 + func_8(((((vVar6.z - iParam0->f_E.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (iParam0->f_1A)
	{
		iParam0->f_E = func_8(iParam0->f_E, SYSTEM::TO_FLOAT(-iParam0->f_15), SYSTEM::TO_FLOAT(iParam0->f_15));
		iParam0->f_E.f_1 = func_8(iParam0->f_E.f_1, SYSTEM::TO_FLOAT(-iParam0->f_16), SYSTEM::TO_FLOAT(iParam0->f_16));
		iParam0->f_E.f_2 = func_8(iParam0->f_E.f_2, SYSTEM::TO_FLOAT(-iParam0->f_14), SYSTEM::TO_FLOAT(iParam0->f_14));
	}
	if (unk_0x91E3F625EF57450D(0x00000000) && bParam1)
	{
		if (iParam0->f_1C)
		{
			iParam0->f_11 = iParam0->f_7;
		}
	}
	else
	{
		iParam0->f_11 = iParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x91E3F625EF57450D(0x00000000))
		{
			iVar7 = 0x00000028;
			iVar8 = 0x00000029;
			if (bParam6)
			{
				iVar7 = 0x000000F1;
				iVar8 = 0x000000F2;
			}
			if (unk_0xD245978525608929(0x00000000, iVar7))
			{
				iParam0->f_11 = (iParam0->f_11 - 5f);
				iParam0->f_1B = unk_0x1C0640BA9A7327B3() + 4000;
				iParam0->f_1C = 0x00000000;
			}
			else if (unk_0xD245978525608929(0x00000000, iVar8))
			{
				iParam0->f_11 = (iParam0->f_11 + 5f);
				iParam0->f_1B = unk_0x1C0640BA9A7327B3() + 4000;
				iParam0->f_1C = 0x00000000;
			}
			if (bParam3)
			{
				iParam0->f_11 = func_8(iParam0->f_11, (iParam0->f_7 - iParam0->f_13), iParam0->f_7);
			}
			else
			{
				iParam0->f_11 = func_8(iParam0->f_11, (iParam0->f_7 - iParam0->f_13), (iParam0->f_7 + iParam0->f_13));
			}
		}
		else if (bParam8)
		{
			iVar0[0x00000001] = unk_0x0DED1C1B8250FA57(0x00000002, 0x000000CF);
			iVar0[0x00000003] = unk_0x0DED1C1B8250FA57(0x00000002, 0x000000D0);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[0x00000003]) > 127f)
				{
					iParam0->f_11 = (iParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000003]) / 128f) * (iParam0->f_13 / 2f)))));
				}
			}
			else
			{
				iParam0->f_11 = (iParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000001]) / 128f) * iParam0->f_13))));
				iParam0->f_11 = (iParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000003]) / 128f) * iParam0->f_13))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[0x00000001]) < 0f)
			{
				iParam0->f_11 = (iParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000001]) / 128f) * iParam0->f_13))));
			}
		}
		else
		{
			iParam0->f_11 = (iParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000001]) / 128f) * iParam0->f_13))));
		}
	}
	iParam0->f_12 = (iParam0->f_12 + (((iParam0->f_11 - iParam0->f_12) * 0.06f) * fVar5));
	unk_0x86F44313DFA8F00C(*iParam0, iParam0->f_1, iParam0->f_4 + iParam0->f_E, iParam0->f_12, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
	if (unk_0x9F4FE516EAACCFC5(*iParam0))
	{
		if (unk_0xFBB4F23D534EB790(*iParam0))
		{
			if (unk_0x9CF8D5C7090408A2(*iParam0))
			{
				unk_0x9501364A300048C6();
			}
		}
	}
}

float func_8(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_10(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DA) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DB) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DC) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000DD) * 127f));
	if (bParam4)
	{
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DA))
		{
			*uParam0 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DA) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DB))
		{
			*uParam1 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DB) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DC))
		{
			*uParam2 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DC) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(0x00000002, 0x000000DD))
		{
			*uParam3 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(0x00000002, 0x000000DD) * 127f));
		}
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		if (bParam5)
		{
			if (unk_0x89DF0B812BA6383B())
			{
				*uParam3 = (*uParam3 * 0xFFFFFFFF);
			}
			if (unk_0x8EB1E94243F14479())
			{
				*uParam3 = (*uParam3 * 0xFFFFFFFF);
			}
		}
	}
}

void func_11(var uParam0)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0f;
	if (func_16(uParam0->f_2))
	{
		return;
	}
	if (*uParam0 <= 0x0000000B)
	{
		return;
	}
	if (!unk_0x757EF87A33649210())
	{
		if (unk_0x1C0640BA9A7327B3() < (uParam0->f_1A + iLocal_62))
		{
			return;
		}
		vVar0 = { func_14(&(Local_64[uParam0->f_F /*49*/]), 0x00000000, &iVar1) };
		vVar0 = { vVar0 + Vector(-0.2f, 0f, 0f) };
		if (unk_0x8E28E832BEAC3DCE(vVar0, 30f))
		{
			return;
		}
	}
	func_295();
	func_288(uParam0, uParam0->f_F, 0x00000000, iVar1, 1f);
	func_12(&uLocal_82, 0x00000000);
}

int func_12(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_72, iParam1) || (*uParam0)[iParam1 /*7*/] == 0x00000000)
	{
		return 0x00000001;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 0x00000001:
			if (unk_0xC528DF93B7EC4D04((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xF8018A9AE1B6C5F6((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 0x00000002:
			if (unk_0xB4AE0788C1587752((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0x8D17794CE3273D70((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 0x00000003:
			if (unk_0xDF3FDDA1EADEDD07((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xDD465543E2028AEA((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 0x00000004:
			unk_0x8C26F31DFF77D124();
			break;
		
		case 0x00000005:
			break;
		
		case 0x00000006:
			if (unk_0xB87F6CF6E5628C67((uParam0[iParam1 /*7*/])->f_1))
			{
				unk_0x71199B01895C6202((uParam0[iParam1 /*7*/])->f_1);
			}
			break;
		
		case 0x00000007:
			if (unk_0x25F7A4D42AF2AB93())
			{
				unk_0x29D7581AEF4440C2();
			}
			break;
		
		case 0x00000008:
			if (unk_0x67C1D9E5B91B2E37((uParam0[iParam1 /*7*/])->f_5))
			{
				unk_0x11CCD0ACA866C6C5((uParam0[iParam1 /*7*/])->f_5, 0x00000000);
			}
			break;
		
		case 0x00000009:
			if (unk_0x27117E2CDD4D67C3((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xF5A41F3D3B38EFE3((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 0x0000000A:
			if (unk_0x3DDA6C6A285628E4((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0xDB8844D4B7C60440((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 0x0000000B:
			if (unk_0x1C2E18E9C63BEB77((uParam0[iParam1 /*7*/])->f_3))
			{
				unk_0x2F3540C2227116A3((uParam0[iParam1 /*7*/])->f_3);
			}
			break;
		
		case 0x0000000C:
			if (unk_0x1787731C4D1D6B19((uParam0[iParam1 /*7*/])->f_2))
			{
				unk_0x2914827AC2790D54((uParam0[iParam1 /*7*/])->f_2);
			}
			break;
		
		default:
			return 0x00000000;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 0x00000006:
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x0000000C:
			break;
		
		default:
			break;
	}
	func_13(uParam0[iParam1 /*7*/]);
	return 0x00000001;
}

void func_13(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
}

Vector3 func_14(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 < 0x00000000)
	{
		*fParam2 = 0f;
		return *(uParam0[0x00000000 /*3*/]);
	}
	if (iParam1 >= (uParam0->f_2E - 0x00000001))
	{
		*fParam2 = 0f;
		return *(uParam0[(uParam0->f_2E - 0x00000001) /*3*/]);
	}
	if (*fParam2 < 0f)
	{
		*fParam2 = 0f;
	}
	if (*fParam2 > 1f)
	{
		*fParam2 = 1f;
	}
	return func_15(*(uParam0[iParam1 /*3*/]), *(uParam0[iParam1 + 1 /*3*/]), *fParam2, 0x00000001);
}

Vector3 func_15(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (bParam3)
	{
		fParam2 = func_8(fParam2, 0f, 1f);
	}
	return vParam0 + Vector(fParam2, fParam2, fParam2) * vParam1 - vParam0;
}

int func_16(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_17(var uParam0)
{
	vector3 vVar0;
	
	if (!unk_0xC844350D5D58C99A(uParam0->f_2))
	{
		return;
	}
	uParam0->f_1B = (unk_0x1C0640BA9A7327B3() - uParam0->f_19);
	if (uParam0->f_1B < 0x00000000)
	{
		uParam0->f_1B = 0x00000000;
	}
	if (unk_0x437347B10A200C4B(uParam0->f_2, 0x00000000) && *uParam0 < 0x0000000B)
	{
		func_3(&(uParam0->f_1C));
		*uParam0 = 0x0000000B;
	}
	if (iLocal_228 == 0x00000001)
	{
		fLocal_229 = (fLocal_229 + unk_0x6117725E0134737F());
		unk_0x0AEDBE1D61D150AF(fLocal_229);
	}
	uParam0->f_21 = func_280(unk_0x16F2683693E537C9(), uParam0, 0f, 0x00000000);
	if (uParam0->f_21)
	{
		if (uParam0->f_1C != 0xFFFFFFFF)
		{
			func_3(&(uParam0->f_1C));
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000002)
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
		}
	}
	switch (*uParam0)
	{
		case 0x00000000:
		case 0x00000001:
			if (uParam0->f_1F < 0.88f)
			{
				uParam0->f_1F = (uParam0->f_1F + SYSTEM::TIMESTEP());
				if (uParam0->f_1F > 0.88f)
				{
					uParam0->f_1F = 0.88f;
				}
			}
			func_2(uParam0, uParam0->f_1F);
			func_264(uParam0);
			break;
		
		case 0x00000002:
			unk_0x08543B8F6DBE0B08(uParam0->f_2, 0x00000000);
			uParam0->f_1F = (uParam0->f_1F - SYSTEM::TIMESTEP());
			if (uParam0->f_1F <= 0f)
			{
				uParam0->f_1F = 0f;
				*uParam0 = 0x00000003;
				uParam0->f_14 = 0f;
				uParam0->f_9 = 0x00000001;
				uParam0->f_10 = 0f;
				uParam0->f_19 = unk_0x1C0640BA9A7327B3();
				uParam0->f_1B = 0x00000000;
				unk_0xCEAA091B490F8407(0xFFFFFFFF, "Leave_Station", uParam0->f_2, "CABLE_CAR_SOUNDS", 0x00000000, 0x00000000);
				uParam0->f_1C = unk_0xD68EA767274B7444();
				unk_0xCEAA091B490F8407(uParam0->f_1C, "Running", uParam0->f_2, "CABLE_CAR_SOUNDS", 0x00000000, 0x00000000);
				uParam0->f_1E = unk_0x0EB28750412C3A5A(Local_64[uParam0->f_F /*49*/][uParam0->f_12 /*3*/], Local_64[uParam0->f_F /*49*/][uParam0->f_12 + 1 /*3*/], 0x00000001);
				if (uParam0->f_B == 0x00000001)
				{
					func_6("FGND_SWTCHCAM", 0xFFFFFFFF);
				}
			}
			func_2(uParam0, uParam0->f_1F);
			break;
		
		case 0x00000003:
			if (uParam0->f_B == 0x00000001)
			{
				func_253(uParam0);
			}
			if (!uParam0->f_21)
			{
				uParam0->f_10 = (uParam0->f_10 + ((fLocal_61 * SYSTEM::TIMESTEP()) * fLocal_59));
				if (uParam0->f_10 >= fLocal_60)
				{
					uParam0->f_10 = fLocal_60;
					*uParam0 = 0x00000004;
					uParam0->f_1F = 0f;
					func_2(uParam0, uParam0->f_1F);
				}
			}
			break;
		
		case 0x00000004:
			if (uParam0->f_B == 0x00000001)
			{
				func_253(uParam0);
			}
			if (!uParam0->f_21 && uParam0->f_9)
			{
				if (uParam0->f_1C == 0xFFFFFFFF)
				{
					uParam0->f_1C = unk_0xD68EA767274B7444();
					unk_0xCEAA091B490F8407(uParam0->f_1C, "Running", uParam0->f_2, "CABLE_CAR_SOUNDS", 0x00000000, 0x00000000);
				}
			}
			if (!uParam0->f_20)
			{
				uParam0->f_10 = (uParam0->f_10 + ((fLocal_61 * SYSTEM::TIMESTEP()) * fLocal_59));
				if (uParam0->f_10 >= fLocal_60)
				{
					uParam0->f_10 = fLocal_60;
				}
			}
			if ((Local_64[uParam0->f_F /*49*/].f_30 - uParam0->f_14) < 75f)
			{
				*uParam0 = 0x00000005;
				if (uParam0->f_B == 0x00000001)
				{
					if (bLocal_79 == 0x00000001)
					{
						func_252();
						if (func_251(uParam0) == 0x00000000)
						{
							func_250(&uLocal_202, &uLocal_225, 0x00000000, 0x00000000, 0x00000001, 0x00000001);
						}
						else
						{
							func_249(&uLocal_202, &uLocal_225);
						}
					}
					func_246(uParam0);
				}
			}
			if (!uParam0->f_9 || uParam0->f_14 >= Local_64[uParam0->f_F /*49*/].f_30)
			{
				*uParam0 = 0x00000006;
			}
			if (uParam0->f_20 && uParam0->f_B == 0x00000001)
			{
				uParam0->f_10 = (uParam0->f_10 - (((fLocal_61 * SYSTEM::TIMESTEP()) * fLocal_59) * 2f));
				if (uParam0->f_10 <= 0f)
				{
					uParam0->f_10 = 0f;
					*uParam0 = 0x00000008;
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "DOOR_OPEN", uParam0->f_2, "CABLE_CAR_SOUNDS", 0x00000000, 0x00000000);
				}
			}
			break;
		
		case 0x00000008:
			uParam0->f_1F = (uParam0->f_1F + SYSTEM::TIMESTEP());
			if (uParam0->f_1F > 0.88f)
			{
				uParam0->f_1F = 0.88f;
				uParam0->f_20 = 0x00000001;
				*uParam0 = 0x00000009;
				func_245(uParam0);
			}
			func_2(uParam0, uParam0->f_1F);
			break;
		
		case 0x00000009:
			if (func_238(unk_0x16F2683693E537C9(), uParam0, 0x00000000, 0x00000000))
			{
				if (unk_0xBFC0798A6E3417F9(0x00000002, 0x00000033))
				{
					func_114(0f, 0f, 0f, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001);
					*uParam0 = 0x0000000A;
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "DOOR_CLOSE", uParam0->f_2, "CABLE_CAR_SOUNDS", 0x00000000, 0x00000000);
				}
			}
			else if (!func_238(unk_0x16F2683693E537C9(), uParam0, 1.1f, 0x00000000))
			{
				*uParam0 = 0x0000000A;
				unk_0xCEAA091B490F8407(0xFFFFFFFF, "DOOR_CLOSE", uParam0->f_2, "CABLE_CAR_SOUNDS", 0x00000000, 0x00000000);
				uParam0->f_B = 0x00000000;
			}
			break;
		
		case 0x0000000A:
			uParam0->f_1F = (uParam0->f_1F - SYSTEM::TIMESTEP());
			if (uParam0->f_1F <= 0f)
			{
				uParam0->f_1F = 0f;
				*uParam0 = 0x00000004;
				if (uParam0->f_B == 0x00000001)
				{
					func_111(uParam0);
					func_109(func_251(uParam0));
				}
				uParam0->f_20 = 0x00000000;
			}
			func_2(uParam0, uParam0->f_1F);
			break;
		
		case 0x00000005:
			if (uParam0->f_B == 0x00000001)
			{
				func_253(uParam0);
			}
			if (!uParam0->f_21)
			{
				uParam0->f_10 = (uParam0->f_10 - ((fLocal_61 * SYSTEM::TIMESTEP()) * fLocal_59));
				if (uParam0->f_10 <= 1f)
				{
					uParam0->f_10 = 1f;
				}
				if (!uParam0->f_9)
				{
					*uParam0 = 0x00000006;
					uParam0->f_10 = 0f;
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "Arrive_Station", uParam0->f_2, "CABLE_CAR_SOUNDS", 0x00000000, 0x00000000);
					unk_0xCEAA091B490F8407(0xFFFFFFFF, "DOOR_OPEN", uParam0->f_2, "CABLE_CAR_SOUNDS", 0x00000000, 0x00000000);
					func_3(&(uParam0->f_1C));
				}
			}
			break;
		
		case 0x00000006:
			uParam0->f_1F = (uParam0->f_1F + SYSTEM::TIMESTEP());
			if (uParam0->f_1F > 0.88f)
			{
				uParam0->f_1F = 0.88f;
				func_42(uParam0, 0x00000000);
			}
			func_2(uParam0, uParam0->f_1F);
			break;
		
		case 0x00000007:
			if (!func_238(unk_0x16F2683693E537C9(), uParam0, 1.125f, 0x00000000))
			{
				*uParam0 = 0x00000001;
				uParam0->f_19 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7((iLocal_63 - 0x00001F40), iLocal_63 + 8000));
				uParam0->f_11 = (uParam0->f_11 * -1f);
			}
			break;
		
		case 0x0000000B:
			if (func_238(unk_0x16F2683693E537C9(), uParam0, 0x00000000, 0x00000000))
			{
				uParam0->f_B = 0x00000001;
			}
			if (unk_0x50B5F6F3C29E9380(unk_0x16F2683693E537C9(), uParam0->f_2))
			{
				unk_0x15AFB6CBDE990FB6(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001);
			}
			func_40(uParam0);
			unk_0x08543B8F6DBE0B08(uParam0->f_2, 0x00000001);
			unk_0x1E9649458B15960F(uParam0->f_2, 0x00000000);
			uParam0->f_1A = unk_0x1C0640BA9A7327B3();
			unk_0xA37A90C62806D848(0x00000001);
			if (uParam0->f_B == 0x00000001)
			{
				func_245(uParam0);
				unk_0xA37A90C62806D848(0x00000001);
				func_35(uParam0, 0x00000000);
				return;
			}
			else if (unk_0xBD054C76E6F4158B(uLocal_52))
			{
				unk_0x51F8DBE54C75AE47(uLocal_52);
			}
			*uParam0 = 0x0000000C;
			return;
		
		case 0x0000000C:
			vVar0 = { unk_0x68F4C0EC296D3901(uParam0->f_2, 0x00000000) };
			if (!unk_0x8E28E832BEAC3DCE(vVar0, 10f))
			{
				func_35(uParam0, 0x00000000);
				return;
			}
			break;
	}
	if (uParam0->f_B)
	{
		func_23(uParam0);
	}
	if (uParam0->f_9)
	{
		if (uParam0->f_11 >= 0f)
		{
			func_22(uParam0);
		}
		else
		{
			func_18(uParam0);
		}
	}
}

int func_18(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	
	if (*uParam0 >= 0x00000008)
	{
		return 0x00000000;
	}
	if (!uParam0->f_9)
	{
		return 0x00000001;
	}
	vVar1 = { uParam0->f_C };
	if (uParam0->f_1E != 0f)
	{
		fVar0 = ((uParam0->f_11 * uParam0->f_10) / uParam0->f_1E);
	}
	else
	{
		fVar0 = 0f;
	}
	if (uParam0->f_21)
	{
		fVar0 = 0f;
	}
	if (fVar0 != 0f)
	{
		fVar2 = ((fVar0 * SYSTEM::TIMESTEP()) * fLocal_59);
		if (!func_4())
		{
			if (!func_21(unk_0x16F2683693E537C9(), uParam0->f_C, 50f))
			{
				if (!unk_0x0A059E0DB9253280(uParam0->f_2))
				{
					fVar2 = (fVar2 * fLocal_227);
				}
			}
		}
		uParam0->f_13 = (uParam0->f_13 + fVar2);
		if (uParam0->f_13 < 0f)
		{
			uParam0->f_13 = 1f;
			if (uParam0->f_B == 0x00000001)
			{
				vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				unk_0x33B4EDA2D99D2806(vVar3);
			}
			uParam0->f_12 = (uParam0->f_12 - 0x00000001);
			if (uParam0->f_12 < 0x00000000)
			{
				uParam0->f_12 = 0x00000000;
				uParam0->f_13 = 0f;
				uParam0->f_10 = 0f;
				uParam0->f_9 = 0x00000000;
				uParam0->f_C = { Local_64[uParam0->f_F /*49*/][uParam0->f_12 /*3*/] };
				unk_0xA47B46945FF6DE74(uParam0->f_2, uParam0->f_C + Vector(-0.2f, 0f, 0f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				return 0x00000001;
			}
			func_20(uParam0);
			uParam0->f_1E = unk_0x0EB28750412C3A5A(Local_64[uParam0->f_F /*49*/][uParam0->f_12 /*3*/], Local_64[uParam0->f_F /*49*/][uParam0->f_12 + 1 /*3*/], 0x00000001);
		}
		if (uParam0->f_12 < (Local_64[uParam0->f_F /*49*/].f_2E - 0x00000001))
		{
			uParam0->f_C = { func_15(Local_64[uParam0->f_F /*49*/][uParam0->f_12 /*3*/], Local_64[uParam0->f_F /*49*/][uParam0->f_12 + 1 /*3*/], uParam0->f_13, 0x00000001) };
			func_19(uParam0);
		}
		uParam0->f_14 = (uParam0->f_14 + unk_0x0EB28750412C3A5A(uParam0->f_C, vVar1, 0x00000001));
	}
	return 0x00000000;
}

void func_19(var uParam0)
{
	if (Local_200.f_B || Local_201.f_B)
	{
		unk_0xA47B46945FF6DE74(uParam0->f_2, uParam0->f_C + Vector(-0.2f, 0f, 0f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		return;
	}
	if (unk_0x8E28E832BEAC3DCE(uParam0->f_C + Vector((-0.2f / 2f), 0f, 0f), 15f))
	{
		unk_0xA47B46945FF6DE74(uParam0->f_2, uParam0->f_C + Vector(-0.2f, 0f, 0f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		return;
	}
	if (unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(uParam0->f_2, 0x00000001) + Vector((-0.2f / 2f), 0f, 0f), 15f))
	{
		unk_0xA47B46945FF6DE74(uParam0->f_2, uParam0->f_C + Vector(-0.2f, 0f, 0f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		return;
	}
}

void func_20(var uParam0)
{
	char cVar0[16];
	
	StringCopy(&cVar0, "C", 16);
	StringIntConCat(&cVar0, uParam0->f_F + 1, 16);
	if (func_251(uParam0) == 0x00000000)
	{
		switch (uParam0->f_12)
		{
			case 0x00000000:
				StringConCat(&cVar0, "_up_9", 16);
				break;
			
			case 0x00000001:
				StringConCat(&cVar0, "_up_1", 16);
				break;
			
			case 0x00000003:
				StringConCat(&cVar0, "_up_3", 16);
				break;
			
			case 0x00000005:
				StringConCat(&cVar0, "_up_4", 16);
				break;
			
			case 0x00000007:
				StringConCat(&cVar0, "_up_5", 16);
				break;
			
			case 0x00000009:
				StringConCat(&cVar0, "_up_6", 16);
				break;
			
			case 0x0000000B:
				StringConCat(&cVar0, "_up_8", 16);
				break;
			
			case 0x0000000C:
				StringConCat(&cVar0, "_up_9", 16);
				break;
			
			default:
				return;
		}
	}
	else
	{
		switch (uParam0->f_12)
		{
			case 0x00000000:
				StringConCat(&cVar0, "_down_1", 16);
				break;
			
			case 0x00000001:
				StringConCat(&cVar0, "_down_2", 16);
				break;
			
			case 0x00000003:
				StringConCat(&cVar0, "_down_3", 16);
				break;
			
			case 0x00000005:
				StringConCat(&cVar0, "_down_4", 16);
				break;
			
			case 0x00000007:
				StringConCat(&cVar0, "_down_5", 16);
				break;
			
			case 0x00000009:
				StringConCat(&cVar0, "_down_6", 16);
				break;
			
			case 0x0000000B:
				StringConCat(&cVar0, "_down_8", 16);
				break;
			
			case 0x0000000C:
				StringConCat(&cVar0, "_down_9", 16);
				break;
			
			default:
				return;
			}
	}
	unk_0xD65E6E13E145467B(uParam0->f_2, &cVar0, "p_cablecar_s", 8f, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
}

bool func_21(int iParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	vVar1 = { vParam1 - vVar0 };
	return ((vVar1.x * vVar1.x) + (vVar1.y * vVar1.y)) <= (fParam2 * fParam2);
}

int func_22(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	
	if (*uParam0 >= 0x00000008)
	{
		return 0x00000000;
	}
	if (!uParam0->f_9)
	{
		return 0x00000001;
	}
	if (uParam0->f_12 + 1 >= Local_64[uParam0->f_F /*49*/].f_2E)
	{
		return 0x00000001;
	}
	vVar1 = { uParam0->f_C };
	if (uParam0->f_1E != 0f)
	{
		fVar0 = ((uParam0->f_11 * uParam0->f_10) / uParam0->f_1E);
	}
	else
	{
		fVar0 = 0f;
	}
	if (uParam0->f_21)
	{
		fVar0 = 0f;
	}
	if (fVar0 != 0f)
	{
		fVar2 = ((fVar0 * SYSTEM::TIMESTEP()) * fLocal_59);
		if (!func_4())
		{
			if (!func_21(unk_0x16F2683693E537C9(), uParam0->f_C, 50f))
			{
				if (!unk_0x0A059E0DB9253280(uParam0->f_2))
				{
					fVar2 = (fVar2 * fLocal_227);
				}
			}
		}
		uParam0->f_13 = (uParam0->f_13 + fVar2);
		if (uParam0->f_13 >= 1f)
		{
			uParam0->f_13 = 0f;
			if (uParam0->f_B == 0x00000001)
			{
				vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				unk_0x33B4EDA2D99D2806(vVar3);
			}
			uParam0->f_12++;
			if (uParam0->f_12 >= (Local_64[uParam0->f_F /*49*/].f_2E - 0x00000001))
			{
				uParam0->f_12 = (Local_64[uParam0->f_F /*49*/].f_2E - 0x00000001);
				uParam0->f_10 = 0f;
				uParam0->f_9 = 0x00000000;
				uParam0->f_C = { Local_64[uParam0->f_F /*49*/][uParam0->f_12 /*3*/] };
				unk_0xA47B46945FF6DE74(uParam0->f_2, uParam0->f_C + Vector(-0.2f, 0f, 0f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				return 0x00000001;
			}
			func_20(uParam0);
			uParam0->f_1E = unk_0x0EB28750412C3A5A(Local_64[uParam0->f_F /*49*/][uParam0->f_12 /*3*/], Local_64[uParam0->f_F /*49*/][uParam0->f_12 + 1 /*3*/], 0x00000001);
		}
		if (uParam0->f_12 < (Local_64[uParam0->f_F /*49*/].f_2E - 0x00000001))
		{
			uParam0->f_C = { func_14(&(Local_64[uParam0->f_F /*49*/]), uParam0->f_12, &(uParam0->f_13)) };
			func_19(uParam0);
		}
		uParam0->f_14 = (uParam0->f_14 + unk_0x0EB28750412C3A5A(uParam0->f_C, vVar1, 0x00000001));
	}
	return 0x00000000;
}

void func_23(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (iVar0 < 0x00000003 || iVar0 > 0x00000005)
	{
		return;
	}
	func_28(0x00000000);
	func_27();
	if (iVar0 < 0x00000005)
	{
		if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000EC) && uParam0->f_20 == 0x00000000)
		{
			if (!bLocal_79)
			{
				func_282(&uLocal_225, 0x00000000);
				func_109(func_251(uParam0));
				func_26(uParam0, 0x00000001);
				unk_0x75AFFFF37CDAEC84(uParam0->f_2);
			}
			else
			{
				func_26(uParam0, 0x00000000);
				func_252();
				func_250(&uLocal_202, &uLocal_225, 0x00000000, 0x00000000, 0x00000001, 0x00000001);
			}
		}
	}
	if (bLocal_79 && !func_25())
	{
		if (uParam0->f_1D != 0xFFFFFFFF)
		{
			func_26(uParam0, 0x00000000);
		}
	}
	if (iLocal_80 == 0x00000000)
	{
		if (unk_0xBFC0798A6E3417F9(0x00000002, 0x00000012) || (unk_0xBFC0798A6E3417F9(0x00000002, 0x00000033) && uParam0->f_20 == 0x00000000))
		{
			iLocal_80 = 0x00000001;
			uParam0->f_22 = 0x00000000;
			func_24(0x000001F4, 0x00000000);
		}
	}
	else if (unk_0x757EF87A33649210())
	{
		func_42(uParam0, 0x00000001);
	}
	else if (!unk_0xD0BB2359EC70FC37())
	{
		iLocal_80 = 0x00000000;
		uParam0->f_22 = 0x00000001;
	}
}

void func_24(int iParam0, bool bParam1)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		if (!unk_0xD0BB2359EC70FC37())
		{
			unk_0x53491B90E4FD0E56(iParam0);
			if (bParam1)
			{
				while (!unk_0x757EF87A33649210())
				{
					SYSTEM::WAIT(0x00000000);
				}
			}
		}
	}
}

int func_25()
{
	if (((unk_0x6EFE7FBFFF3E11EF("RAIN") || unk_0x6EFE7FBFFF3E11EF("THUNDER")) || unk_0x6FB9CF1A1C8AC7C8("RAIN")) || unk_0x6FB9CF1A1C8AC7C8("THUNDER"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_26(var uParam0, bool bParam1)
{
	func_3(&(uParam0->f_1D));
	if (bParam1)
	{
		if (func_25())
		{
			uParam0->f_1D = unk_0xD68EA767274B7444();
			unk_0xCEAA091B490F8407(uParam0->f_1D, "Interior_Rain", unk_0x16F2683693E537C9(), "CABLE_CAR_SOUNDS", 0x00000000, 0x00000000);
		}
	}
}

void func_27()
{
	Global_56C3.f_6 = 0x00000001;
}

void func_28(int iParam0)
{
	if (func_34())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_33(0x00000000))
		{
			func_29(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_29(int iParam0)
{
	if (func_34())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_32())
		{
			func_31(0x00000001, 0x00000001);
		}
		else
		{
			func_31(0x00000000, 0x00000000);
		}
	}
	if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
	}
	Global_5145 = 0x00000005;
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000001E);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x0000001E);
	}
	if (!func_30())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_30()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_31(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_33(0x00000000))
		{
			Global_4CD0 = 0x00000001;
			if (bParam1)
			{
				unk_0x1CFAC524932A967E(&Global_4BDF);
			}
			Global_4BD6 = { Global_4BE8[Global_4BE7 /*3*/] };
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
	else if (Global_4CD0 == 0x00000001)
	{
		Global_4CD0 = 0x00000000;
		Global_4BD6 = { Global_4BEF[Global_4BE7 /*3*/] };
		if (bParam1)
		{
			unk_0x39F06A2B18483C68(Global_4BDF);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
}

bool func_32()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_33(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000E))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_34()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_35(var uParam0, int iParam1)
{
	func_38(uParam0);
	if (unk_0xC844350D5D58C99A(uParam0->f_2))
	{
		if (unk_0x757EF87A33649210() || iParam1)
		{
			func_37(&(uParam0->f_3[0x00000000]));
			func_37(&(uParam0->f_3[0x00000001]));
			func_37(&(uParam0->f_6[0x00000000]));
			func_37(&(uParam0->f_6[0x00000001]));
			func_37(&(uParam0->f_2));
		}
		else
		{
			func_36(&(uParam0->f_3[0x00000000]), 0x00000000);
			func_36(&(uParam0->f_3[0x00000001]), 0x00000000);
			func_36(&(uParam0->f_6[0x00000000]), 0x00000000);
			func_36(&(uParam0->f_6[0x00000001]), 0x00000000);
			func_36(&(uParam0->f_2), 0x00000000);
		}
	}
}

void func_36(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
		}
		if (!bParam1)
		{
			unk_0xEEEE2E5FA6F78DF0(iParam0);
		}
		else
		{
			unk_0xAA2AE6161CB0D2DC(*iParam0);
		}
	}
}

void func_37(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 0x00000001, 0x00000001);
		}
		unk_0xF690C84DADBB3551(iParam0);
	}
}

void func_38(var uParam0)
{
	if (unk_0x562F77A7F33D2E46("CABLE_CAR_RIDE_UP_SCENE"))
	{
		unk_0x8910D3D58E0132B8("CABLE_CAR_RIDE_UP_SCENE");
	}
	if (unk_0x562F77A7F33D2E46("CABLE_CAR_RIDE_DOWN_SCENE"))
	{
		unk_0x8910D3D58E0132B8("CABLE_CAR_RIDE_DOWN_SCENE");
	}
	func_26(uParam0, 0x00000000);
	func_3(&(uParam0->f_1C));
	func_39(unk_0x16F2683693E537C9(), uParam0);
	func_40(uParam0);
	uParam0->f_21 = 0x00000000;
}

void func_39(int iParam0, var uParam1)
{
	func_302(uParam1->f_2);
	func_302(iParam0);
	if (unk_0xC844350D5D58C99A(uParam1->f_2) && unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x50B5F6F3C29E9380(iParam0, uParam1->f_2))
		{
			unk_0x15AFB6CBDE990FB6(iParam0, 0x00000001, 0x00000001);
		}
	}
}

void func_40(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_18)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_15[iVar0]))
		{
			func_302(uParam0->f_15[iVar0]);
			if (unk_0xD59B17D2DFF98E26(uParam0->f_15[iVar0]))
			{
				unk_0x15AFB6CBDE990FB6(uParam0->f_15[iVar0], 0x00000000, 0x00000000);
			}
			unk_0x1E9649458B15960F(uParam0->f_15[iVar0], 0x00000000);
			unk_0xB9FD7450C0DAB575(uParam0->f_15[iVar0], 0x40A00000);
			func_41(&(uParam0->f_15[iVar0]));
			uParam0->f_15[iVar0] = 0x00000000;
		}
		iVar0++;
	}
	uParam0->f_18 = 0x00000000;
}

void func_41(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0x437347B10A200C4B(*iParam0, 0x00000000);
		if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 0x00000001))
		{
			unk_0x046C362CF15F1935(iParam0);
		}
	}
}

void func_42(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	func_26(uParam0, 0x00000000);
	func_3(&(uParam0->f_1C));
	if (bParam1 && (uParam0->f_B == 0x00000001 || uParam0->f_22 == 0x00000001))
	{
		bLocal_79 = 0x00000000;
		if (unk_0xBD054C76E6F4158B(uLocal_52))
		{
			unk_0x51F8DBE54C75AE47(uLocal_52);
		}
		func_107(uParam0);
		if (bParam1)
		{
			if (uParam0->f_F != Local_200.f_F)
			{
				func_106(&Local_200);
			}
			if (uParam0->f_F != Local_201.f_F)
			{
				func_106(&Local_201);
			}
		}
		unk_0x066C43E677C08D5C();
		func_28(0x00000000);
		func_27();
		SYSTEM::WAIT(0x00000000);
		func_105(unk_0x68F4C0EC296D3901(uParam0->f_2, 0x00000001), 50f, 0x0000000D, 0x00001388, 0x00000001, 0x00000001);
		func_39(unk_0x16F2683693E537C9(), uParam0);
		unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(uParam0->f_2, 0x00000001) + Vector(0f, 0f, 6f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		if (func_302(uParam0->f_2))
		{
			unk_0xCEAA091B490F8407(0xFFFFFFFF, "Arrive_Station", uParam0->f_2, "CABLE_CAR_SOUNDS", 0x00000000, 0x00000000);
			unk_0xCEAA091B490F8407(0xFFFFFFFF, "DOOR_OPEN", uParam0->f_2, "CABLE_CAR_SOUNDS", 0x00000000, 0x00000000);
		}
		func_246(uParam0);
		iLocal_80 = 0x00000000;
	}
	if (uParam0->f_B == 0x00000001 || uParam0->f_22 == 0x00000001)
	{
		if (bParam1)
		{
			func_1(uParam0);
		}
		unk_0x0674E58A79778E99(&Global_12C46, 0x00000004);
		unk_0x0674E58A79778E99(&Global_12C46, 0x00000005);
		if (uParam0->f_18 == 0x00000000)
		{
			unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 1f, 0x000003E8, 0x00000000, 0x00000001, 0x00000000);
		}
	}
	if (func_302(unk_0x16F2683693E537C9()))
	{
		if (func_238(unk_0x16F2683693E537C9(), uParam0, 0x00000000, 0x00000000))
		{
			if (unk_0x562F77A7F33D2E46("CABLE_CAR_RIDE_UP_SCENE"))
			{
				unk_0x8910D3D58E0132B8("CABLE_CAR_RIDE_UP_SCENE");
			}
			if (unk_0x562F77A7F33D2E46("CABLE_CAR_RIDE_DOWN_SCENE"))
			{
				unk_0x8910D3D58E0132B8("CABLE_CAR_RIDE_DOWN_SCENE");
			}
			func_245(uParam0);
		}
	}
	if (bParam1)
	{
		func_1(uParam0);
	}
	uParam0->f_9 = 0x00000000;
	*uParam0 = 0x00000007;
	uParam0->f_14 = 0f;
	if (uParam0->f_B == 0x00000001 || uParam0->f_22 == 0x00000001)
	{
		unk_0x82E51BCA72537B6C(0x000001F4);
		if (bParam1)
		{
			func_1(uParam0);
		}
		unk_0x2FB9A57162E54BAB(0f);
		unk_0xEF6276132B396452(0f, 0x3F800000);
		func_282(&uLocal_225, 0x00000000);
		func_97(0x0000000A, 0x00000001);
		func_55(func_96(), 0x0000000A, 0x00000001);
		func_55(func_54(), 0x0000000A, 0x00000001);
		uParam0->f_B = 0x00000000;
		func_46(0x0000012D, 0x00000000, 0x00000000);
		unk_0x066C43E677C08D5C();
		if (func_302(func_96()))
		{
			unk_0x585D22FE28143EAA(func_96(), unk_0x16F2683693E537C9(), -1f, 2f, 0f, 1f, 0x00004E20);
			bVar0 = 0x00000001;
		}
		if (func_302(func_54()))
		{
			unk_0x585D22FE28143EAA(func_54(), unk_0x16F2683693E537C9(), 1f, 2f, 0f, 1f, 0x00004E20);
			bVar0 = 0x00000001;
		}
		if (func_45(0x00000006))
		{
			if (bVar0)
			{
				SYSTEM::WAIT(0x000003E8);
			}
			func_44(iLocal_231, 0x00000000);
		}
	}
	if (bParam1)
	{
		func_43(&(Local_64[uParam0->f_F /*49*/]));
	}
	uParam0->f_22 = 0x00000000;
	func_40(uParam0);
}

void func_43(var uParam0)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	
	if (iLocal_81 == 0x00000000)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < (uParam0->f_2E - 0x00000002))
	{
		fVar1 = 0f;
		while (fVar1 < 1f)
		{
			vVar2 = { func_15(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar0 + 1 /*3*/]), fVar1, 0x00000001) };
			unk_0x33B4EDA2D99D2806(vVar2);
			fVar1 = (fVar1 + 0.125f);
		}
		SYSTEM::WAIT(0x00000000);
		iVar0++;
	}
	unk_0x33B4EDA2D99D2806(*(uParam0[(uParam0->f_2E - 0x00000001) /*3*/]));
	iLocal_81 = 0x00000000;
}

void func_44(int iParam0, int iParam1)
{
	if (Global_1716A == iParam0)
	{
		Global_1716B = Global_1716A;
		Global_1716C = iParam1;
		Global_1716A = 0x00000017;
	}
}

bool func_45(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_46(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0x00000000)
	{
	}
	if (iParam0 == 0x00000141 || iParam0 > 0x00000141)
	{
	}
	else
	{
		func_52((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
	}
	bVar0 = 0x00000001;
	if (Global_1B416.f_27CD[iParam0 /*12*/].f_5 == 0x00000001)
	{
		if (Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 0x0000000B || Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 0x0000000C)
		{
			bVar0 = 0x00000000;
		}
	}
	else
	{
		Global_1B416.f_27CD[iParam0 /*12*/].f_5 = 0x00000001;
		Global_1B416.f_27CD[iParam0 /*12*/].f_A = iParam1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 0x0000011F)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_0"), 0x00000032, 0x00000000);
		}
		if (iParam0 == 0x0000011E)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_1"), 0x00000032, 0x00000000);
		}
		if (iParam0 == 0x0000012B)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_3"), 0x00000032, 0x00000000);
		}
	}
	if (bVar0)
	{
		func_47();
	}
}

void func_47()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0x00000000;
	Global_1B30E = 0x00000000;
	Global_1B30F = 0x00000000;
	Global_1B310 = 0x00000000;
	Global_1B311 = 0x00000000;
	Global_1B312 = 0x00000000;
	Global_1B313 = 0x00000000;
	Global_1B314 = 0x00000000;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_1B416.f_27CD.f_F0D;
	Global_1B416.f_27CD.f_F0D = 0f;
	while (iVar0 < 0x00000141)
	{
		if (Global_1B416.f_27CD[iVar0 /*12*/].f_5 == 0x00000001)
		{
			switch (Global_1B416.f_27CD[iVar0 /*12*/].f_6)
			{
				case 0x00000001:
					Global_1B30E++;
					fVar1 = (fVar1 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000003:
					Global_1B30F++;
					fVar2 = (fVar2 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000005:
					Global_1B310++;
					fVar3 = (fVar3 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000007:
					Global_1B311++;
					fVar4 = (fVar4 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x00000009:
					Global_1B312++;
					fVar5 = (fVar5 + (Global_1B416.f_27CD[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 0x0000000B:
					Global_1B313++;
					fVar6 = (fVar6 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 0x0000000D:
					Global_1B314++;
					fVar7 = (fVar7 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_1B2FD > 0x00000000)
	{
		if (Global_1B30E == Global_1B2FD)
		{
			fVar1 = 55f;
		}
	}
	if (Global_1B2FE > 0x00000000)
	{
		if (Global_1B30F == Global_1B2FE)
		{
			fVar2 = 10f;
		}
	}
	if (Global_1B2FF > 0x00000000)
	{
		if (Global_1B310 == Global_1B2FF)
		{
			fVar3 = 0f;
		}
	}
	if (Global_1B300 > 0x00000000)
	{
		if (Global_1B311 == Global_1B300)
		{
			fVar4 = 10f;
		}
	}
	if (Global_1B301 > 0x00000000)
	{
		if (((Global_1B312 == Global_1B301 || (Global_1B301 * 10 / Global_1B312) < 0x00000029) || Global_1B312 > Global_1B304) || Global_1B312 == Global_1B304)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F10, 0x0000000E))
			{
				if (Global_1B312 == Global_1B301)
				{
					unk_0xE7B2B6A56C007908(joaat("num_rndevents_completed"), Global_1B301, 0x00000000);
					unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F10), 0x0000000E);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_1B302 > 0x00000000)
	{
		if (Global_1B313 == Global_1B302)
		{
			fVar6 = 15f;
		}
	}
	if (Global_1B303 > 0x00000000)
	{
		if (Global_1B314 == Global_1B303)
		{
			fVar7 = 5f;
		}
	}
	Global_1B416.f_27CD.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_1B312 > Global_1B304 || Global_1B312 == Global_1B304)
	{
		iVar9 = Global_1B304;
	}
	else
	{
		iVar9 = Global_1B312;
	}
	unk_0xCDC520E5E48E63D9(joaat("num_missions_completed"), Global_1B30E, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_missions_available"), Global_1B2FD, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_completed"), Global_1B30F, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_available"), Global_1B2FE, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_completed"), Global_1B310, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_available"), Global_1B2FF, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_completed"), Global_1B311, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_available"), Global_1B300, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_completed"), iVar9, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_available"), Global_1B304, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_completed"), (Global_1B314 + Global_1B313), 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_available"), (Global_1B303 + Global_1B302), 0x00000001);
	Global_1B315 = (Global_1B30E * 100 / Global_1B2FD);
	Global_1B317 = ((Global_1B310 + Global_1B30F) * 100 / (Global_1B2FF + Global_1B2FE));
	Global_1B316 = ((Global_1B311 + iVar9) * 100 / (Global_1B300 + Global_1B304));
	Global_1B318 = ((Global_1B313 + Global_1B314) * 100 / (Global_1B302 + Global_1B303));
	unk_0x11F69E56D7B5F3C7(joaat("total_progress_made"), Global_1B416.f_27CD.f_F0D, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_story_missions"), Global_1B315, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_ambient_missions"), Global_1B316, 0x00000001);
	unk_0xCDC520E5E48E63D9(joaat("percent_oddjobs"), Global_1B317, 0x00000001);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D))
	{
		func_51(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_50() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_48();
				}
			}
		}
	}
}

int func_48()
{
	if (func_49(0x00000000))
	{
		return 0x00000000;
	}
	if (Global_181DF.f_8)
	{
		if (Global_181DF.f_A > 0x00000000)
		{
			return 0x00000000;
		}
	}
	else if (Global_181DF.f_A > 0x00000001)
	{
		return 0x00000000;
	}
	Global_181DF.f_A++;
	return 0x00000001;
}

bool func_49(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_50()
{
	return Global_7830;
}

int func_51(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0x00000000;
	}
	if (iParam0 > 0x0000004E)
	{
		return 0x00000000;
	}
	if (iParam1 <= 0x00000000 || iParam1 > 0x00000064)
	{
		return 0x00000000;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0x00000000;
}

int func_52(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		iParam2 = func_53();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_53()
{
	return Global_1407E9;
}

int func_54()
{
	return Global_17171;
}

void func_55(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!func_302(iParam0))
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	else
	{
		iVar0 = func_94(iParam0);
		if (iVar0 == 0x00000091)
		{
			iVar0 = func_89(iParam0);
		}
		func_56(iVar0, iParam2, iParam1);
	}
}

int func_56(int iParam0, int iParam1, int iParam2)
{
	if (func_88(iParam0) == 0x00000003)
	{
		return 0x00000000;
	}
	if (func_88(iParam0) == 0x00000004)
	{
		return 0x00000000;
	}
	return func_57(func_88(iParam0), 0x00000000, iParam1, iParam2, 0x00000000);
}

int func_57(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_87();
	if (iParam3 < 0x00000001)
	{
		return 0x00000000;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000000:
					func_86(0x00000063, 0x00000001);
					func_85(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_85(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_85(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_71(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_66(0x00000005))
					{
						fVar0 = 0.9f;
						iVar1 = 0x00000005;
					}
					break;
				
				case 0x0000003F:
				case 0x00000040:
				case 0x00000041:
				case 0x00000042:
				case 0x00000043:
				case 0x00000044:
					switch (iParam0)
					{
						case 0x00000000:
							func_85(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_85(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_85(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_66(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_85(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_85(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_85(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_85(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_85(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_85(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 0x00000063:
				case 0x00000064:
				case 0x00000065:
				case 0x00000066:
				case 0x00000068:
				case 0x00000069:
				case 0x0000006A:
				case 0x0000006B:
				case 0x0000006C:
				case 0x0000006D:
				case 0x0000006E:
				case 0x0000006F:
				case 0x00000070:
				case 0x00000071:
					switch (iParam0)
					{
						case 0x00000000:
							func_85(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_85(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_85(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x7CF4675EC2B8ED0B())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_85(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_85(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_85(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_85(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_85(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_85(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_66(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_85(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_85(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_85(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_85(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_85(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_85(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_65(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_86(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_86(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_86(0x00000060, iParam3);
					break;
			}
			func_86(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_60(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_60(iVar1);
	}
	iVar5 = (Global_E53E[iVar2] + iParam3);
	switch (iParam1)
	{
		case 0x00000001:
			if (Global_E53E[iVar2] >= 0x00000000 && iParam3 > 0x00000000)
			{
				if (iVar5 <= 0x00000000)
				{
					Global_E53E[iVar2] = 0x7FFFFFFF;
				}
				else
				{
					Global_E53E[iVar2] = (Global_E53E[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0x00000000:
					func_85(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_85(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_85(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0x00000000:
			if (!bParam4)
			{
				if ((Global_E53E[iVar2] - iParam3) < 0x00000000)
				{
					return 0x00000000;
				}
			}
			iVar3 = Global_E53E[iVar2];
			Global_E53E[iVar2] = (Global_E53E[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 0x00000001)
	{
		if (iVar4 > 0x00000014)
		{
		}
	}
	else
	{
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/]++;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1++;
		if (Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 > 0x0000000A)
		{
			Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 = 0x00000000;
		}
	}
	func_59(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_58(0x00000000);
	}
	return 0x00000001;
}

void func_58(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000B)
		{
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		Global_E546[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F[iVar0];
		Global_E546.f_1F[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_B[iVar0];
		Global_E546.f_3E[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_16[iVar0];
		Global_E546.f_5D[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_21[iVar0];
		Global_E546.f_7C[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_2C[iVar0];
		Global_E546.f_9B[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_37[iVar0];
		Global_E546.f_BA[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_42[iVar0];
		Global_E546.f_D9[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_4D[iVar0];
		Global_E546.f_F8[iVar0 /*3*/][0x00000000] = Global_1B416.f_504F.f_58[iVar0];
		if (!bParam0)
		{
			Global_E546[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F[iVar0];
			Global_E546.f_1F[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_B[iVar0];
			Global_E546.f_3E[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_16[iVar0];
			Global_E546.f_5D[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_21[iVar0];
			Global_E546.f_7C[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_2C[iVar0];
			Global_E546.f_9B[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_37[iVar0];
			Global_E546.f_BA[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_42[iVar0];
			Global_E546.f_D9[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_4D[iVar0];
			Global_E546.f_F8[iVar0 /*3*/][0x00000001] = Global_1B416.f_504F.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_59(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_E53E[iParam0];
	switch (iParam0)
	{
		case 0x00000000:
			unk_0xCDC520E5E48E63D9(joaat("sp0_total_cash"), iVar0, 0x00000001);
			break;
		
		case 0x00000001:
			unk_0xCDC520E5E48E63D9(joaat("sp1_total_cash"), iVar0, 0x00000001);
			break;
		
		case 0x00000002:
			unk_0xCDC520E5E48E63D9(joaat("sp2_total_cash"), iVar0, 0x00000001);
			break;
	}
}

void func_60(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_52(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_52(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_52(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_52(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_63(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_63(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_63(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_63(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_63(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_63(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	bVar0 = 0x00000000;
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0))
		{
			bVar0 = 0x00000001;
			unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_62() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_62() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_61(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "COUP_HAIRC";
		
		case 0x00000001:
			return "COUP_TATTOO";
		
		case 0x00000002:
			return "COUP_WARSTOCK";
		
		case 0x00000003:
			return "COUP_MOSPORT";
		
		case 0x00000004:
			return "COUP_ELITAS";
		
		case 0x00000005:
			return "COUP_MEDSPENS";
		
		case 0x00000006:
			return "COUP_SPRUNK";
		
		case 0x00000007:
			return "COUP_RESPRAY";
		
		case 0x00000008:
			return "COUP_XMAS2017";
		
		case 0x00000009:
			return "COUP_CAR_XMAS2018";
		
		case 0x0000000A:
			return "COUP_HELI_XMAS2018";
		
		case 0x0000000B:
			return "COUP_CAR2_XMAS2018";
		
		case 0x0000000C:
			return "COUP_CAS_ELITAS";
		
		case 0x0000000D:
			return "COUP_CAS_DOCKTEASE";
		
		case 0x0000000E:
			return "COUP_CAS_MOSPORT";
		
		case 0x0000000F:
			return "COUP_CAS_SSASA";
		
		case 0x00000010:
			return "COUP_CAS_WARSTOCK";
		
		case 0x00000011:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_62()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_63(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_64(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_53();
		if (iVar1 > 0xFFFFFFFF)
		{
			Global_26E1B2 = 0x00000000;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0x00000000;
			Global_26E1B2 = 0x00000001;
		}
	}
	return iVar0;
}

void func_65(int iParam0)
{
	func_86(0x0000005D, iParam0);
	func_86(0x0000001D, iParam0);
	func_86(0x0000001E, iParam0);
}

bool func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 0x00000008)
	{
		return func_68(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_68(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_68(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_68(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_67(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_67(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_67(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_67(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_67(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_67(0x00002052, 0xFFFFFFFF, 0x00000000);
		if (iVar11 == 0x00000000 || iVar10 >= iVar11)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_62() /*10930*/].f_181E.f_A, iParam0);
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_64(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_53();
	}
	iVar1 = func_70(iParam0, iParam1);
	uVar2 = func_69(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
	}
	return iVar0;
}

int func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_53();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam1);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_71(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (unk_0x5E109EC687D2605A(0x0000001B))
	{
		return 0x00000000;
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp0_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp1_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp2_money_total_spent"), &iVar0, 0xFFFFFFFF))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0x00000000;
	unk_0x6FB46C25CCB7E6D5(joaat("num_cash_spent"), &iVar2, 0xFFFFFFFF);
	if (iVar1 > 0x00000000 && (iVar2 / 0x001E8480) != (iVar1 / 0x001E8480))
	{
		unk_0xCDC520E5E48E63D9(joaat("num_cash_spent"), iVar1, 0x00000001);
		func_51(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_72(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_72(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_73(iParam0, iParam1);
}

int func_73(int iParam0, int iParam1)
{
	if (func_45(0x0000000E) && !func_84(iParam0))
	{
		return 0x00000000;
	}
	if (unk_0x5E109EC687D2605A(iParam0) && iParam1 == 0x00000001)
	{
		return 0x00000000;
	}
	if (Global_7929 != 0x00000000 && !Global_12B4E)
	{
		return 0x00000000;
	}
	if (func_83(&Global_4127F1))
	{
		if (func_81(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_74(&Global_4127F1, iParam0))
		{
			return 0x00000001;
		}
	}
	else
	{
		if (!unk_0x5A66449FC9BDF808(iParam0))
		{
			return 0x00000000;
		}
		if (unk_0x5E109EC687D2605A(iParam0))
		{
			return 0x00000001;
		}
		return 0x00000000;
	}
	return 0x00000000;
}

int func_74(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_45(0x0000000E) && !func_84(iParam1))
	{
		return 0x00000000;
	}
	if (func_81(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_80(uParam0) < 0f)
	{
		func_79(uParam0, 0x00000000);
	}
	func_77(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_75(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_75(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_45(0x0000000E) && !func_84(iParam1))
	{
		return 0x00000000;
	}
	if (func_81(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_80(uParam0) < 0f)
	{
		func_79(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_76(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_76(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_77(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
	func_79(uParam0, (Global_4127F0 - 0.5f));
}

void func_78(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_79(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_80(var uParam0)
{
	return uParam0->f_50;
}

bool func_81(var uParam0, int iParam1)
{
	return func_82(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_82(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

bool func_83(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_86(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 0x00000001)
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/])
	{
		unk_0x6FB46C25CCB7E6D5(Global_DFA6[iParam0 /*7*/].f_1, &iVar0, 0xFFFFFFFF);
		iVar0 = (iVar0 + iParam1);
		unk_0xCDC520E5E48E63D9(Global_DFA6[iParam0 /*7*/].f_1, iVar0, 0x00000001);
	}
}

void func_87()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000000] == iVar0)
		{
			Global_E53E[0x00000000] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000001] == iVar0)
		{
			Global_E53E[0x00000001] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &iVar0, 0xFFFFFFFF);
		if (!Global_E53E[0x00000002] == iVar0)
		{
			Global_E53E[0x00000002] = iVar0;
		}
	}
}

int func_88(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar2 = (func_93() - 0x00000001);
		iVar0 = 0x00000003;
		while (iVar0 <= iVar2)
		{
			if (func_90(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_90(int iParam0)
{
	if (!func_92(iParam0))
	{
		return func_91(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_91(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_92(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_93()
{
	if (Global_7830 == 0x00000000 || Global_7830 == 0x00000002)
	{
		return 0x000000A7;
	}
	return 0x000000A1;
}

int func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_95(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_95(int iParam0)
{
	if (func_92(iParam0))
	{
		return func_91(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

int func_96()
{
	return Global_17170;
}

void func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = func_102(unk_0xD803B885F5E47A62());
		if (iVar0 > 0x00000000)
		{
			if (iVar0 >= iParam0)
			{
				func_100(-iParam0, 0x00000001, 0x00000001, 0x00000000);
			}
			else
			{
				func_100(-iVar0, 0x00000001, 0x00000001, 0x00000000);
			}
		}
	}
	else
	{
		func_56(func_98(), iParam1, iParam0);
	}
}

int func_98()
{
	func_99();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_99()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_95(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_94(unk_0x16F2683693E537C9());
			if (func_92(iVar0) && (!func_45(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_92(Global_1B416.f_936.f_21B.f_10E1))
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

void func_100(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 0x00000001)
	{
		iParam1 = 0x00000001;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0x00000000)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_4 = iVar1;
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_3 = (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_3 + iVar1);
	if (iParam2 == 0x00000001)
	{
		func_101(iVar1, 0x00000000);
	}
}

void func_101(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

var func_102(int iParam0)
{
	var uVar0;
	
	uVar0 = func_103(iParam0);
	return uVar0;
}

int func_103(int iParam0)
{
	if (iParam0 > 0xFFFFFFFF)
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return unk_0x62F8C2EDB26F57B3(0xFFFFFFFF);
		}
		else if (func_104(iParam0))
		{
			return Global_184507[iParam0 /*876*/].f_D3.f_3;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_104(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2537E2.f_1, iParam0);
	}
	return 0x00000001;
}

void func_105(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xF0681B7E63456337(vParam0, fParam1, iParam2, 0x0000007F);
	if (unk_0xBD054C76E6F4158B(uVar0))
	{
		iVar1 = (unk_0x1C0640BA9A7327B3() + iParam3);
		while (!unk_0x07441E56330B63E3(uVar0) && unk_0x1C0640BA9A7327B3() < iVar1)
		{
			if (bParam5)
			{
				func_28(0x00000000);
			}
			if (bParam4)
			{
				func_27();
			}
			SYSTEM::WAIT(0x00000000);
		}
		if (unk_0x1C0640BA9A7327B3() < iVar1)
		{
		}
		unk_0x51F8DBE54C75AE47(uVar0);
	}
}

void func_106(var uParam0)
{
	func_107(uParam0);
	func_1(uParam0);
	uParam0->f_9 = 0x00000000;
	*uParam0 = 0x00000007;
	uParam0->f_14 = 0f;
}

void func_107(var uParam0)
{
	int iVar0;
	
	iVar0 = func_251(uParam0);
	if (uParam0->f_F == 0x00000000)
	{
		if (iVar0 == 0x00000001)
		{
			func_108(uParam0, 0x00000000, 0f);
		}
		else
		{
			func_108(uParam0, (Local_64[uParam0->f_F /*49*/].f_2E - 0x00000001), 0f);
		}
	}
	else if (iVar0 == 0x00000000)
	{
		func_108(uParam0, 0x00000000, 0f);
	}
	else
	{
		func_108(uParam0, (Local_64[uParam0->f_F /*49*/].f_2E - 0x00000001), 0f);
	}
}

void func_108(var uParam0, int iParam1, float fParam2)
{
	uParam0->f_C = { func_14(&(Local_64[uParam0->f_F /*49*/]), iParam1, &fParam2) };
	if (func_302(uParam0->f_2))
	{
		unk_0xA47B46945FF6DE74(uParam0->f_2, uParam0->f_C + Vector(-0.2f, 0f, 0f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	}
	uParam0->f_12 = iParam1;
	uParam0->f_13 = fParam2;
}

void func_109(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { unk_0x64430C979F516F7A(unk_0x16F2683693E537C9(), 0x0000796E, 0f, 0f, 0f) };
	Local_69.f_14 = 0x0000003C;
	Local_69.f_15 = 0x00000014;
	unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
	if (iParam0 == 0x00000001)
	{
		func_110(&Local_69, vVar0, unk_0x835730A2D89F6093(unk_0x16F2683693E537C9(), 0x00000002) + Vector(0f, 0f, fLocal_68), 50f, Local_69.f_14, Local_69.f_15, 0x00000003, 0x41A00000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000);
	}
	else
	{
		func_110(&Local_69, vVar0, unk_0x835730A2D89F6093(unk_0x16F2683693E537C9(), 0x00000002), 50f, Local_69.f_14, Local_69.f_15, 0x00000003, 0x41A00000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000);
	}
	unk_0xC5940439E4EB9A33(Local_69, unk_0x16F2683693E537C9(), 0f, 0.2f, 0.5f, 0x00000001);
	iLocal_53 = 0x00000001;
	bLocal_79 = 0x00000001;
}

void func_110(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, bool bParam11)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = fParam3;
	uParam0->f_14 = uParam4;
	uParam0->f_15 = uParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = fParam3;
	uParam0->f_12 = fParam3;
	uParam0->f_17 = iParam8;
	uParam0->f_13 = iParam7;
	*uParam0 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000000);
	unk_0xE3BB8E05FCEB3FBE(*uParam0, 0x00000001);
	unk_0x86F44313DFA8F00C(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
	if (!bParam11)
	{
		unk_0x91F5B0244AAE6222(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	if (fParam10 > 0f)
	{
		unk_0xDC3CC6D1845B0567(*uParam0, fParam10);
	}
	if (uParam0->f_17)
	{
		unk_0x3B05E4399DC8490C(iParam9);
	}
	uParam0->f_18 = 0x00000000;
	uParam0->f_19 = 0x00000000;
	uParam0->f_1D = 0f;
	uParam0->f_1E = 0f;
	uParam0->f_1A = 0x00000000;
	uParam0->f_1C = 0x00000000;
	uParam0->f_1B = 0x00000000;
}

void func_111(var uParam0)
{
	vector3 vVar0;
	
	if (!func_302(unk_0x16F2683693E537C9()) || !func_302(uParam0->f_2))
	{
		return;
	}
	vVar0 = { vLocal_56 };
	unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(uParam0->f_2, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	if (unk_0xD59B17D2DFF98E26(unk_0x16F2683693E537C9()))
	{
		unk_0x15AFB6CBDE990FB6(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001);
	}
	vVar0.y = (vVar0.y * uParam0->f_11);
	if (uParam0->f_11 == -1f)
	{
		unk_0x9F528B1B53FBC5D9(unk_0x16F2683693E537C9(), uParam0->f_2, 0x00000000, vVar0, 0f, 0f, 180f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
	else
	{
		unk_0x9F528B1B53FBC5D9(unk_0x16F2683693E537C9(), uParam0->f_2, 0x00000000, vVar0, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
	func_113(uParam0);
	func_112(uParam0);
}

void func_112(var uParam0)
{
	vector3 vVar0;
	
	if (!func_302(func_54()) || !func_302(uParam0->f_2))
	{
		return;
	}
	vVar0 = { vLocal_56 };
	vVar0.x = 1f;
	unk_0xA47B46945FF6DE74(func_54(), unk_0x68F4C0EC296D3901(uParam0->f_2, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	if (unk_0xD59B17D2DFF98E26(func_54()))
	{
		unk_0x15AFB6CBDE990FB6(func_54(), 0x00000001, 0x00000001);
	}
	vVar0.y = (vVar0.y * uParam0->f_11);
	if (uParam0->f_11 == -1f)
	{
		unk_0x9F528B1B53FBC5D9(func_54(), uParam0->f_2, 0x00000000, vVar0, 0f, 0f, 180f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
	else
	{
		unk_0x9F528B1B53FBC5D9(func_54(), uParam0->f_2, 0x00000000, vVar0, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
}

void func_113(var uParam0)
{
	vector3 vVar0;
	
	if (!func_302(func_96()) || !func_302(uParam0->f_2))
	{
		return;
	}
	vVar0 = { vLocal_56 };
	vVar0.x = -1f;
	unk_0xA47B46945FF6DE74(func_96(), unk_0x68F4C0EC296D3901(uParam0->f_2, 0x00000001), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	if (unk_0xD59B17D2DFF98E26(func_96()))
	{
		unk_0x15AFB6CBDE990FB6(func_96(), 0x00000001, 0x00000001);
	}
	vVar0.y = (vVar0.y * uParam0->f_11);
	if (uParam0->f_11 == -1f)
	{
		unk_0x9F528B1B53FBC5D9(func_96(), uParam0->f_2, 0x00000000, vVar0, 0f, 0f, 180f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
	else
	{
		unk_0x9F528B1B53FBC5D9(func_96(), uParam0->f_2, 0x00000000, vVar0, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
}

void func_114(vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = unk_0xA30EC016B12C03E4();
	if (unk_0xE1DBBD6CE209517C(iVar0))
	{
		func_229(0x00000000);
		if (bParam7)
		{
			unk_0x26E2E2345FB3D358(unk_0xA30EC016B12C03E4(), 0x00000001);
		}
		if (bParam6)
		{
			switch (func_98())
			{
				case 0x00000000:
					if (func_228(unk_0x16F2683693E537C9(), 0x00000008, 0x0000000F))
					{
						func_117(unk_0x16F2683693E537C9(), 0x00000008, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					}
					if (func_228(unk_0x16F2683693E537C9(), 0x00000009, 0x00000006))
					{
						func_117(unk_0x16F2683693E537C9(), 0x00000009, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					}
					break;
				
				case 0x00000001:
					if (func_228(unk_0x16F2683693E537C9(), 0x00000008, 0x00000001) || func_228(unk_0x16F2683693E537C9(), 0x00000008, 0x0000000A))
					{
						func_117(unk_0x16F2683693E537C9(), 0x00000008, 0x0000001A, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					}
					break;
				
				case 0x00000002:
					if (func_228(unk_0x16F2683693E537C9(), 0x00000008, 0x00000004))
					{
						func_117(unk_0x16F2683693E537C9(), 0x00000008, 0x0000000F, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					}
					break;
				}
		}
		if (iParam4 == 0x00000001)
		{
			unk_0x745CE398A4B0A3C6(func_116(unk_0xA30EC016B12C03E4()), 50f, 0x00000000);
		}
		if (iParam5 == 0x00000001)
		{
			unk_0x75CFD6AD66ADFDD1(vParam0, 30f, 0x00000000);
		}
		if (bParam8)
		{
			unk_0x7800CEC090C01D4D(vParam0, 30f);
		}
		unk_0x679C321F8CAA2CFA(vParam0, 30f, 0x00000000);
		unk_0x67F91979413C5D76(iVar0, 0x00000000, 0x00000000);
		unk_0x56EA5D248F36A081(iVar0, 0x00000000);
		unk_0xBC03DF6093E8E71F(iVar0, 0x00000001);
		if (bParam10)
		{
			unk_0xBFE31971E49FA500(0x00000000);
			unk_0x8BCB70EB440DED83(0x00000000);
		}
		unk_0x790015DC92C918E2();
		if (iParam9 == 0x00000001)
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		if (iParam1 == 0x00000001)
		{
			unk_0x5413873D3F67BF93(0x00000001, 0x00000000);
		}
		if (iParam2 == 0x00000001)
		{
			iLocal_39 = 0x00000000;
			if (func_16(unk_0x16F2683693E537C9()))
			{
				iLocal_39 = unk_0x78CE7F4A02231950(unk_0x16F2683693E537C9());
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
			}
		}
		if (iParam3 == 0x00000001)
		{
			func_115(0x000001F4, 0x00000000);
		}
	}
}

void func_115(int iParam0, bool bParam1)
{
	if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
	{
		if (!unk_0x7BCE0E6DD4A1F749())
		{
			unk_0x82E51BCA72537B6C(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x0F1CCD77290EE12F())
		{
			SYSTEM::WAIT(0x00000000);
		}
	}
}

Vector3 func_116(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

int func_117(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	
	if (unk_0xEB6A8945D1AC98A1(iParam0) || iParam2 == 0xFFFFFF9D)
	{
		return 0x00000000;
	}
	Global_12A90++;
	iVar5 = 0xFFFFFF9D;
	iVar6 = 0xFFFFFF9D;
	iVar7 = 0xFFFFFF9D;
	iVar8 = 0xFFFFFF9D;
	iVar9 = 0xFFFFFF9D;
	iVar10 = unk_0x134B62B726CEC8E6(iParam0);
	if (iParam5 == 0x00000000)
	{
		Global_12A92[0x00000001 /*14*/] = { func_164(iVar10, iParam1, iParam2, 0xFFFFFFFF) };
		if (!func_163(iParam3))
		{
			Global_12A90 = (Global_12A90 - 0x00000001);
			return 0x00000000;
		}
		func_159(iParam1);
	}
	if (iParam1 == 0x0000000C)
	{
		if (iParam7 == 0x00000001)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_157(iParam0, 0x00000008);
				if (iVar5 != 0x00000009)
				{
					iVar5 = 0xFFFFFF9D;
				}
			}
			iVar6 = func_157(iParam0, 0x00000009);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 0x00000009 && iVar6 <= 0x0000000E)
				{
				}
				else
				{
					iVar6 = 0xFFFFFF9D;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 0x00000005 && iVar6 <= 0x0000000A)
				{
				}
				else
				{
					iVar6 = 0xFFFFFF9D;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 0x00000009 && iVar6 <= 0x0000000E) || (iVar6 >= 0x0000000F && iVar6 <= 0x00000010))
				{
				}
				else
				{
					iVar6 = 0xFFFFFF9D;
				}
			}
			iVar7 = func_156(iParam0, 0x00000001);
			if (!func_155(iVar10, 0x0000000E, iVar7, 0xFFFFFFFF))
			{
				iVar7 = 0xFFFFFF9D;
			}
			iVar8 = func_156(iParam0, 0x00000000);
			if (!func_154(iVar10, 0x0000000E, iVar8, 0xFFFFFFFF) && !func_153(iVar10, 0x0000000E, iVar8, 0xFFFFFFFF))
			{
				iVar8 = 0xFFFFFF9D;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_156(iParam0, 0x00000002);
			}
		}
		unk_0xFFE16595F5CF81E9(iParam0);
		uVar11 = 0x0000000F;
		if (iParam5 == 0x00000001)
		{
			uVar11 = { Global_12ABD };
		}
		else
		{
			uVar11 = { func_149(iVar10, iParam2) };
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000E)
		{
			if (uVar11[iVar0] != 0xFFFFFF9D)
			{
				Global_12A92[0x00000001 /*14*/] = { func_164(iVar10, iVar0, uVar11[iVar0], 0xFFFFFFFF) };
				if (unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000000))
				{
					if (iVar0 == 0x0000000D)
					{
						uVar12 = 0x00000009;
						if (iParam5 == 0x00000001)
						{
							uVar12 = { Global_12ACE };
						}
						else
						{
							uVar12 = { func_146(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0x00000000;
						while (iVar1 <= 0x00000008)
						{
							Global_12A92[0x00000001 /*14*/] = { func_164(iVar10, 0x0000000E, uVar12[iVar1], 0xFFFFFFFF) };
							func_137(iParam0, Global_12A92[0x00000001 /*14*/].f_C, Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4);
							func_159(0x0000000E);
							if (Global_12A90 == 0x00000001)
							{
								iVar2 = 0x00000000;
								while (iVar2 < 0x0000000F)
								{
									iVar3 = func_129(iParam0, iVar10, 0x0000000E, uVar12[iVar1], iVar2, 0x00000000);
									if (iVar3 != 0xFFFFFF9D)
									{
										func_117(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 0x0000000E && iVar0 != 0x0000000C)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 0x00000002) && uVar11[iVar0] == 0x00000014)
						{
							func_128(iVar10, 0x00000002, 0x00000014, &iVar4);
						}
						if (iParam4 == 0xFFFFFFFF)
						{
							unk_0x64F9F278AB9DCA2C(iParam0, func_127(iVar0), Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4, unk_0xAA973E78065E07A0(iParam0, func_127(iVar0)));
						}
						else
						{
							unk_0x64F9F278AB9DCA2C(iParam0, func_127(iVar0), Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4, iParam4);
						}
						func_159(iVar0);
						if (Global_12A90 == 0x00000001)
						{
							iVar2 = 0x00000000;
							while (iVar2 < 0x0000000F)
							{
								iVar3 = func_129(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0x00000000);
								if (iVar3 != 0xFFFFFF9D)
								{
									func_117(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 0x0000000C && iVar0 != 0x0000000E)
			{
				Global_12A92[0x00000001 /*14*/] = { func_164(iVar10, iVar0, func_126(iParam0, iVar0, 0xFFFFFFFF), 0xFFFFFFFF) };
				if (unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000003))
				{
					if (iVar0 == 0x00000002)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_125(iParam0, iVar10, &iVar4, 0x00000001))
							{
								func_117(iParam0, 0x00000002, iVar4, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
							}
						}
					}
					else
					{
						uVar13 = { func_149(iVar10, 0x00000000) };
						func_117(iParam0, iVar0, uVar13[iVar0], 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 0x00000001)
		{
			Var14 = { func_164(iVar10, 0x00000008, iVar5, 0xFFFFFFFF) };
			if (iVar5 != 0xFFFFFF9D)
			{
				if (func_123(iVar10, iParam2, 0x00000008, iVar5, &uVar11, &Var14))
				{
					func_117(iParam0, 0x00000008, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			Var14 = { func_164(iVar10, 0x00000009, iVar6, 0xFFFFFFFF) };
			if (iVar6 != 0xFFFFFF9D)
			{
				if (func_123(iVar10, iParam2, 0x00000009, iVar6, &uVar11, &Var14))
				{
					func_117(iParam0, 0x00000009, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			Var14 = { func_164(iVar10, 0x0000000E, iVar7, 0xFFFFFFFF) };
			if (iVar7 != 0xFFFFFF9D)
			{
				if (func_123(iVar10, iParam2, 0x0000000E, iVar7, &uVar11, &Var14))
				{
					func_117(iParam0, 0x0000000E, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			Var14 = { func_164(iVar10, 0x0000000E, iVar8, 0xFFFFFFFF) };
			if (iVar8 != 0xFFFFFF9D)
			{
				if (func_123(iVar10, iParam2, 0x0000000E, iVar8, &uVar11, &Var14))
				{
					func_117(iParam0, 0x0000000E, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			Var14 = { func_164(iVar10, 0x0000000E, iVar9, 0xFFFFFFFF) };
			if (iVar9 != 0xFFFFFF9D)
			{
				if (func_123(iVar10, iParam2, 0x0000000E, iVar9, &uVar11, &Var14))
				{
					func_117(iParam0, 0x0000000E, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
			}
		}
	}
	else if (iParam1 == 0x0000000D)
	{
		uVar15 = { func_146(iVar10, iParam2) };
		iVar1 = 0x00000000;
		while (iVar1 <= 0x00000008)
		{
			Global_12A92[0x00000001 /*14*/] = { func_164(iVar10, 0x0000000E, uVar15[iVar1], 0xFFFFFFFF) };
			func_137(iParam0, Global_12A92[0x00000001 /*14*/].f_C, Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4);
			func_159(0x0000000E);
			if (Global_12A90 == 0x00000001)
			{
				iVar2 = 0x00000000;
				while (iVar2 < 0x0000000F)
				{
					iVar3 = func_129(iParam0, iVar10, 0x0000000E, uVar15[iVar1], iVar2, 0x00000000);
					if (iVar3 != 0xFFFFFF9D)
					{
						func_117(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 0x0000000E)
	{
		func_137(iParam0, Global_12A92[0x00000001 /*14*/].f_C, Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4);
		func_159(iParam1);
		if (Global_12A90 == 0x00000001)
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x0000000F)
			{
				iVar3 = func_129(iParam0, iVar10, iParam1, iParam2, iVar2, 0x00000000);
				if (iVar3 != 0xFFFFFF9D)
				{
					func_117(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == 0xFFFFFFFF)
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_127(iParam1), Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4, unk_0xAA973E78065E07A0(iParam0, func_127(iParam1)));
		}
		else
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_127(iParam1), Global_12A92[0x00000001 /*14*/].f_3, Global_12A92[0x00000001 /*14*/].f_4, iParam4);
		}
		if (Global_12A90 == 0x00000001)
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x0000000F)
			{
				iVar3 = func_129(iParam0, iVar10, iParam1, iParam2, iVar2, 0x00000000);
				if (iVar3 != 0xFFFFFF9D)
				{
					func_117(iParam0, iVar2, iVar3, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0x00000000)
		{
			func_120(iVar10, iParam1, iParam2);
		}
	}
	if (Global_12A90 == 0x00000001)
	{
		if (func_125(iParam0, iVar10, &iVar4, 0x00000000))
		{
			func_117(iParam0, 0x00000002, iVar4, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
		}
		if (func_118(iParam0, iVar10, &iVar4))
		{
			func_117(iParam0, 0x00000001, iVar4, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	Global_12A90 = (Global_12A90 - 0x00000001);
	return 0x00000001;
}

int func_118(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_119(iParam1);
	if (Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F != 0xFFFFFF9D)
	{
		if (!func_228(iParam0, Global_1B416.f_936.f_21B[iVar0 /*65*/].f_40, Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F))
		{
			*iParam2 = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3E;
			Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F = 0xFFFFFF9D;
			Global_1B416.f_936.f_21B[iVar0 /*65*/].f_40 = 0x00000001;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0x00000000;
			break;
		
		case joaat("player_one"):
			return 0x00000001;
			break;
		
		case joaat("player_two"):
			return 0x00000002;
			break;
		
		default:
			break;
	}
	return 0x00000091;
}

void func_120(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 0x00000005;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 0x00000002;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 0x00000004;
	}
	if (func_122(iParam0, 0x0000000C, iVar0))
	{
		if (func_121(iParam0, iParam1, iParam2))
		{
			iVar1 = func_119(iParam0);
			if (iParam1 == 0x00000003)
			{
				Global_1B416.f_936.f_21B.f_C4[iVar1] = iParam2;
			}
			else if (iParam1 == 0x00000004)
			{
				Global_1B416.f_936.f_21B.f_C8[iVar1] = iParam2;
			}
		}
	}
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 0x00000004)
		{
			if (iParam2 >= 0x0000002F && iParam2 <= 0x00000036)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000003)
		{
			if (iParam2 >= 0x0000004D && iParam2 <= 0x00000054)
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 0x00000004)
		{
			if (iParam2 >= 0x0000000E && iParam2 <= 0x00000015)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000003)
		{
			if (iParam2 >= 0x00000029 && iParam2 <= 0x00000038)
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 0x00000004)
		{
			if (iParam2 >= 0x00000012 && iParam2 <= 0x0000001D)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000003)
		{
			if (iParam2 >= 0x00000036 && iParam2 <= 0x00000045)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

bool func_122(int iParam0, int iParam1, int iParam2)
{
	Global_12A92[0x00000001 /*14*/] = { func_164(iParam0, iParam1, iParam2, 0xFFFFFFFF) };
	return unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000002);
}

int func_123(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 0x00000001;
	}
	if (((*uParam4)[iParam2] == 0xFFFFFF9D && iParam2 != 0x0000000E) && iParam2 != 0x0000000D)
	{
		return 0x00000001;
	}
	if (iParam2 == 0x0000000D || (iParam2 == 0x0000000E && (*uParam4)[0x0000000D] == 0x0000001F))
	{
		if ((((((((iParam3 == 0x00000000 || iParam3 == 0x00000001) || iParam3 == 0x00000002) || iParam3 == 0x00000003) || iParam3 == 0x00000004) || iParam3 == 0x00000005) || iParam3 == 0x00000006) || iParam3 == 0x00000007) || iParam3 == 0x00000008)
		{
			return 0x00000001;
		}
	}
	if (iParam3 == 0xFFFFFF9D || uParam5->f_1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (iParam2 == 0x0000000E)
	{
		uVar0 = { func_146(iParam0, (*uParam4)[0x0000000D]) };
		iVar1 = 0x00000000;
		while (iVar1 <= 0x00000008)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 0x00000001;
			}
			iVar1++;
		}
	}
	if (func_124(iParam0, iParam2, iParam3))
	{
		return 0x00000001;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_155(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x0000000A) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C) || iParam1 == 0x00000012) || iParam1 == 0x00000032)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (func_154(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000004) || iParam1 == 0x00000005) || iParam1 == 0x0000000A) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C) || iParam1 == 0x0000000E) || iParam1 == 0x00000012) || iParam1 == 0x00000032)
			{
				return 0x00000000;
			}
			if (iParam2 == 0x00000008)
			{
				if ((*uParam4)[0x00000008] != 0x00000000)
				{
					return 0x00000000;
				}
			}
			else if (iParam2 == 0x00000009)
			{
				if ((*uParam4)[0x00000009] != 0x00000000)
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
		else if (func_153(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000004) || iParam1 == 0x00000005) || iParam1 == 0x0000000A) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C) || iParam1 == 0x0000000E) || iParam1 == 0x00000012) || iParam1 == 0x00000032)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_155(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((iParam1 == 0x00000003 || iParam1 == 0x00000005) || iParam1 == 0x00000007)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (func_154(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((((iParam1 == 0x00000003 || iParam1 == 0x00000005) || iParam1 == 0x00000007) || iParam1 == 0x00000008) || iParam1 == 0x00000015)
			{
				if (iParam2 == 0x00000008)
				{
					if (iParam3 == 0x00000009)
					{
						if (iParam1 == 0x00000008 || iParam1 == 0x00000015)
						{
							return 0x00000001;
						}
					}
					else
					{
						return 0x00000000;
					}
				}
				else
				{
					return 0x00000000;
				}
			}
			if (iParam2 == 0x00000008)
			{
				if ((*uParam4)[0x00000008] != 0x0000001A)
				{
					return 0x00000000;
				}
			}
			else if (iParam2 == 0x00000009)
			{
				if ((*uParam4)[0x00000009] != 0x00000000)
				{
					return 0x00000000;
				}
				if (((iParam1 == 0x0000002B || iParam1 == 0x0000002C) || iParam1 == 0x0000002D) || iParam1 == 0x0000002E)
				{
					if (iParam3 >= 0x00000005 && iParam3 <= 0x0000000A)
					{
						return 0x00000000;
					}
				}
			}
			else if (iParam2 == 0x0000000E)
			{
				if (((iParam1 == 0x0000002B || iParam1 == 0x0000002C) || iParam1 == 0x0000002D) || iParam1 == 0x0000002E)
				{
					if (iParam3 >= 0x0000001A && iParam3 <= 0x00000027)
					{
						return 0x00000000;
					}
				}
			}
			return 0x00000001;
		}
		else if (func_153(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((iParam1 == 0x00000003 || iParam1 == 0x00000003) || iParam1 == 0x00000005) || iParam1 == 0x00000007) || iParam1 == 0x00000008) || iParam1 == 0x00000015)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (iParam2 == 0x0000000E)
		{
			if (iParam3 >= 0x0000009F && iParam3 <= 0x000000AE)
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 0x00000002)
		{
			if (iParam2 == 0x0000000E && iParam3 == 0x00000000)
			{
				return 0x00000001;
			}
		}
		if (func_155(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000006) || iParam1 == 0x00000008) || iParam1 == 0x0000002D) || iParam1 == 0x0000000C)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
		else if (func_154(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if (((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000003) || iParam1 == 0x00000006) || iParam1 == 0x00000008) || iParam1 == 0x0000000B) || iParam1 == 0x0000002D) || iParam1 == 0x0000000C)
			{
				return 0x00000000;
			}
			if (iParam2 == 0x00000008)
			{
				if ((*uParam4)[0x00000008] != 0x0000000F)
				{
					return 0x00000000;
				}
			}
			else if (iParam2 == 0x00000009)
			{
				if ((*uParam4)[0x00000009] != 0x00000000)
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
		else if (func_153(iParam0, iParam2, iParam3, 0xFFFFFFFF))
		{
			if ((((((iParam1 == 0x00000001 || iParam1 == 0x00000002) || iParam1 == 0x00000003) || iParam1 == 0x00000006) || iParam1 == 0x00000008) || iParam1 == 0x0000000B) || iParam1 == 0x0000000C)
			{
				return 0x00000000;
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_124(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x0000000F)
					{
						return 0x00000001;
					}
					break;
				
				case 0x00000009:
					if (iParam2 == 0x00000006)
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x00000001 || iParam2 == 0x0000000A)
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x00000004)
					{
						return 0x00000001;
					}
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_125(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_119(iParam1);
	if (Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C != 0xFFFFFF9D)
	{
		if (!func_228(iParam0, Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3D, Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C) || iParam3 == 0x00000001)
		{
			*iParam2 = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3B;
			Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C = 0xFFFFFF9D;
			Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3D = 0x00000002;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam1 == 0x0000000C)
		{
			iVar0 = 0x00000000;
			while (iVar0 <= 0x00000035)
			{
				if (func_228(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 0x0000000D)
		{
			iVar1 = 0x00000000;
			while (iVar1 <= 0x00000013)
			{
				if (func_228(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 0x0000001F;
		}
		else if (iParam1 == 0x0000000E)
		{
			if (iParam2 == 0xFFFFFFFF)
			{
			}
			else
			{
				return func_156(iParam0, iParam2);
			}
		}
		else
		{
			return func_157(iParam0, iParam1);
		}
	}
	return 0xFFFFFF9D;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000003;
			break;
		
		case 0x00000004:
			return 0x00000004;
			break;
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000009;
			break;
		
		case 0x0000000A:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x0000000B:
			return 0x0000000B;
			break;
	}
	return 0x00000000;
}

int func_128(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = 0xFFFFFF9D;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x00000007 || iParam2 == 0x00000017)
					{
						*iParam3 = 0x00000001;
					}
					break;
				
				case 0x00000009:
					if (iParam2 == 0x00000008 || (iParam2 >= 0x00000009 && iParam2 <= 0x0000000E))
					{
						*iParam3 = 0x00000001;
					}
					break;
				
				case 0x0000000A:
					if (iParam2 >= 0x0000002C && iParam2 <= 0x0000002F)
					{
						*iParam3 = 0x00000001;
					}
					break;
				
				case 0x0000000E:
					if ((((((iParam2 >= 0x0000001F && iParam2 <= 0x00000020) || (iParam2 >= 0x00000021 && iParam2 <= 0x00000022)) || (iParam2 >= 0x00000023 && iParam2 <= 0x00000024)) || iParam2 == 0x00000025) || (iParam2 >= 0x00000028 && iParam2 <= 0x00000029)) || iParam2 == 0x0000002E)
					{
						*iParam3 = 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000002:
					if (iParam2 == 0x00000014)
					{
						*iParam3 = 0x00000014;
					}
					break;
				
				case 0x00000008:
					if (iParam2 == 0x00000004)
					{
						*iParam3 = 0x00000013;
					}
					break;
				
				case 0x00000009:
					if (iParam2 >= 0x00000005 && iParam2 <= 0x0000000A)
					{
						*iParam3 = 0x00000013;
					}
					break;
				
				case 0x0000000A:
					if (iParam2 >= 0x0000002F && iParam2 <= 0x00000032)
					{
						*iParam3 = 0x00000013;
					}
					break;
				
				case 0x0000000E:
					if (((((iParam2 >= 0x0000001A && iParam2 <= 0x0000001B) || (iParam2 >= 0x0000001C && iParam2 <= 0x0000001D)) || (iParam2 >= 0x0000001E && iParam2 <= 0x0000001F)) || iParam2 == 0x00000020) || (iParam2 >= 0x00000023 && iParam2 <= 0x00000024))
					{
						*iParam3 = 0x00000013;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000008:
					if (iParam2 == 0x00000007)
					{
						*iParam3 = 0x00000002;
					}
					break;
				
				case 0x00000009:
					if ((iParam2 >= 0x00000009 && iParam2 <= 0x0000000E) || (iParam2 >= 0x0000000F && iParam2 <= 0x00000010))
					{
						*iParam3 = 0x00000002;
					}
					break;
				
				case 0x0000000A:
					if (iParam2 >= 0x0000001D && iParam2 <= 0x00000020)
					{
						*iParam3 = 0x00000002;
					}
					break;
				
				case 0x0000000E:
					if ((((((iParam2 >= 0x0000002F && iParam2 <= 0x00000030) || (iParam2 >= 0x00000031 && iParam2 <= 0x00000032)) || (iParam2 >= 0x00000033 && iParam2 <= 0x00000034)) || iParam2 == 0x00000035) || (iParam2 >= 0x00000038 && iParam2 <= 0x00000039)) || iParam2 == 0x0000003E)
					{
						*iParam3 = 0x00000002;
					}
					break;
			}
			break;
	}
	if (*iParam3 != 0xFFFFFF9D)
	{
		iVar0 = func_119(iParam0);
		Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C = iParam2;
		Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3D = iParam1;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = 0xFFFFFF9D;
	if (iParam4 == 0x00000000)
	{
		switch (iParam2)
		{
			case 0x00000002:
				iVar1 = func_157(iParam0, 0x00000001);
				iVar0 = func_136(iParam1, iParam3, iVar1);
				break;
			
			case 0x00000001:
				iVar2 = func_157(iParam0, 0x00000002);
				iVar0 = func_136(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 0x00000002)
	{
		func_128(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 0x00000001)
	{
		func_135(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 0x00000006)
	{
		if (iParam2 == 0x00000004)
		{
			if (func_134(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 0x00000003:
						switch (iParam2)
						{
							case 0x0000000A:
								switch (iParam3)
								{
									case 0x00000024:
										iVar0 = 0x00000011;
										break;
									
									case 0x00000025:
										iVar0 = 0x00000011;
										break;
									
									case 0x00000026:
										iVar0 = 0x00000012;
										break;
									
									case 0x00000027:
										iVar0 = 0x00000012;
										break;
									
									case 0x00000028:
										iVar0 = 0x00000013;
										break;
									
									case 0x00000029:
										iVar0 = 0x00000013;
										break;
									
									case 0x0000002A:
										iVar0 = 0x00000014;
										break;
									
									case 0x0000002B:
										iVar0 = 0x00000014;
										break;
								}
								break;
							
							case 0x0000000B:
								if (iParam3 >= 0x00000002 && iParam3 <= 0x00000007)
								{
									if (!func_133(iParam0, 0x00000003, 0x0000002C, 0x0000003B))
									{
										iVar0 = 0x0000002C;
									}
								}
								else if (((iParam3 >= 0x00000008 && iParam3 <= 0x00000011) || (iParam3 >= 0x00000012 && iParam3 <= 0x0000001B)) || (iParam3 >= 0x0000001C && iParam3 <= 0x0000002B))
								{
									if (!func_133(iParam0, 0x00000003, 0x00000087, 0x00000096))
									{
										iVar0 = func_132(iParam1, 0x00000003, 0x00000087, 0x00000096);
									}
								}
								break;
						}
						break;
					
					case 0x0000000A:
						switch (iParam2)
						{
							case 0x00000003:
								switch (iParam3)
								{
									case 0x0000003F:
										iVar0 = 0x00000004;
										break;
									
									case 0x0000003D:
										iVar0 = 0x00000003;
										break;
									
									case 0x00000010:
										iVar0 = 0x00000001;
										break;
									
									case 0x00000072:
										iVar0 = 0x0000000F;
										break;
									
									case 0x00000073:
										iVar0 = 0x00000011;
										break;
									
									case 0x00000074:
										iVar0 = 0x00000010;
										break;
									
									case 0x00000075:
										iVar0 = 0x00000012;
										break;
									
									case 0x00000076:
										iVar0 = 0x00000014;
										break;
									
									case 0x00000077:
										iVar0 = 0x00000013;
										break;
									
									case 0x0000007D:
										iVar0 = 0x00000015;
										break;
									
									case 0x00000078:
										iVar0 = 0x00000016;
										break;
									
									case 0x0000007C:
										iVar0 = 0x00000017;
										break;
									
									case 0x0000007E:
										iVar0 = 0x00000018;
										break;
									
									case 0x00000079:
										iVar0 = 0x00000019;
										break;
									
									case 0x0000007F:
										iVar0 = 0x0000001A;
										break;
									
									case 0x00000080:
										iVar0 = 0x0000001B;
										break;
									
									case 0x00000055:
										iVar0 = 0x00000006;
										break;
									
									case 0x0000004D:
										iVar0 = 0x00000007;
										break;
									
									case 0x0000004E:
										iVar0 = 0x00000008;
										break;
									
									case 0x0000004F:
										iVar0 = 0x00000009;
										break;
									
									case 0x00000050:
										iVar0 = 0x0000000A;
										break;
									
									case 0x00000051:
										iVar0 = 0x0000000B;
										break;
									
									case 0x00000052:
										iVar0 = 0x0000000C;
										break;
									
									case 0x00000053:
										iVar0 = 0x0000000D;
										break;
									
									case 0x00000054:
										iVar0 = 0x0000000E;
										break;
									
									case 0x00000015:
										iVar0 = 0x0000001F;
										break;
									
									case 0x00000016:
										iVar0 = 0x0000001E;
										break;
									
									case 0x00000017:
										iVar0 = 0x0000001D;
										break;
									
									case 0x00000018:
										iVar0 = 0x0000001C;
										break;
									
									case 0x00000019:
										iVar0 = 0x00000021;
										break;
									
									case 0x0000001A:
										iVar0 = 0x00000023;
										break;
									
									case 0x0000001B:
										iVar0 = 0x00000022;
										break;
									
									case 0x0000001C:
										iVar0 = 0x00000020;
										break;
									
									default:
										if (iParam3 >= 0x00000011 && iParam3 <= 0x00000014)
										{
										}
										else
										{
											iVar0 = 0x00000000;
										}
										break;
								}
								break;
							
							case 0x0000000B:
								if (iParam3 != 0x00000000)
								{
									iVar0 = 0x00000000;
								}
								break;
						}
						break;
					
					case 0x0000000B:
						if (iParam2 == 0x00000003)
						{
							if ((iParam3 >= 0x0000002C && iParam3 <= 0x0000003B) || (iParam3 >= 0x00000087 && iParam3 <= 0x00000096))
							{
							}
							else
							{
								iVar0 = 0x00000000;
							}
						}
						else if (iParam2 == 0x0000000A)
						{
							if (iParam3 >= 0x00000024 && iParam3 <= 0x0000002B)
							{
								iVar0 = 0x00000000;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 0x0000000A:
						switch (iParam2)
						{
							case 0x00000003:
								switch (iParam3)
								{
									case 0x00000011:
										iVar0 = 0x00000002;
										break;
									
									case 0x0000005A:
										iVar0 = 0x00000001;
										break;
									
									case 0x0000010C:
										iVar0 = 0x00000003;
										break;
									
									case 0x0000010D:
										iVar0 = 0x00000005;
										break;
									
									case 0x0000010E:
										iVar0 = 0x00000004;
										break;
									
									case 0x0000010F:
										iVar0 = 0x00000006;
										break;
									
									case 0x00000110:
										iVar0 = 0x00000008;
										break;
									
									case 0x00000111:
										iVar0 = 0x00000007;
										break;
									
									case 0x00000117:
										iVar0 = 0x00000009;
										break;
									
									case 0x00000112:
										iVar0 = 0x0000000A;
										break;
									
									case 0x00000116:
										iVar0 = 0x0000000B;
										break;
									
									case 0x00000118:
										iVar0 = 0x0000000C;
										break;
									
									case 0x00000113:
										iVar0 = 0x0000000D;
										break;
									
									case 0x00000119:
										iVar0 = 0x0000000E;
										break;
									
									case 0x0000011A:
										iVar0 = 0x0000000F;
										break;
									
									case 0x0000006B:
										iVar0 = 0x00000010;
										break;
									
									case 0x0000006C:
										iVar0 = 0x00000011;
										break;
									
									case 0x0000006D:
										iVar0 = 0x00000012;
										break;
									
									case 0x0000006E:
										iVar0 = 0x00000013;
										break;
									
									case 0x0000006F:
										iVar0 = 0x00000014;
										break;
									
									case 0x00000070:
										iVar0 = 0x00000015;
										break;
									
									case 0x00000071:
										iVar0 = 0x00000016;
										break;
									
									case 0x00000072:
										iVar0 = 0x00000017;
										break;
									
									case 0x00000073:
										iVar0 = 0x00000018;
										break;
									
									case 0x00000074:
										iVar0 = 0x00000019;
										break;
									
									case 0x00000075:
										iVar0 = 0x00000034;
										break;
									
									case 0x00000076:
										iVar0 = 0x0000001B;
										break;
									
									case 0x00000077:
										iVar0 = 0x0000001C;
										break;
									
									case 0x00000078:
										iVar0 = 0x0000001D;
										break;
									
									case 0x00000079:
										iVar0 = 0x0000001E;
										break;
									
									case 0x0000007A:
										iVar0 = 0x0000001F;
										break;
									
									case 0x00000128:
										iVar0 = 0x00000020;
										break;
									
									case 0x00000129:
										iVar0 = 0x00000021;
										break;
									
									case 0x0000012A:
										iVar0 = 0x00000022;
										break;
									
									case 0x0000012B:
										iVar0 = 0x00000023;
										break;
									
									case 0x0000012C:
										iVar0 = 0x00000024;
										break;
									
									case 0x0000012D:
										iVar0 = 0x00000025;
										break;
									
									case 0x0000012E:
										iVar0 = 0x00000026;
										break;
									
									case 0x00000135:
										iVar0 = 0x00000027;
										break;
									
									case 0x00000136:
										iVar0 = 0x00000028;
										break;
									
									case 0x00000137:
										iVar0 = 0x00000029;
										break;
									
									case 0x00000138:
										iVar0 = 0x0000002A;
										break;
									
									case 0x00000139:
										iVar0 = 0x0000002B;
										break;
									
									case 0x0000013A:
										iVar0 = 0x0000002C;
										break;
									
									case 0x0000013B:
										iVar0 = 0x0000002D;
										break;
									
									case 0x0000013C:
										iVar0 = 0x0000002E;
										break;
									
									case 0x0000013D:
										iVar0 = 0x00000033;
										break;
									
									default:
										iVar0 = 0x00000000;
										break;
								}
								break;
							
							case 0x0000000B:
								if (iParam3 != 0x00000000)
								{
									iVar0 = 0x00000000;
								}
								break;
						}
						break;
					
					case 0x00000003:
						switch (iParam2)
						{
							case 0x0000000B:
								if (iParam3 >= 0x0000002F && iParam3 <= 0x0000003E)
								{
									if (!func_133(iParam0, 0x00000003, 0x000000D1, 0x000000DE))
									{
										iVar0 = func_132(iParam1, 0x00000003, 0x000000D1, 0x000000DE);
									}
								}
								else if ((iParam3 >= 0x00000001 && iParam3 <= 0x00000004) || (iParam3 >= 0x00000005 && iParam3 <= 0x00000008))
								{
									if (!func_133(iParam0, 0x00000003, 0x000000F3, 0x00000102))
									{
										if (iParam3 == 0x00000001 || iParam3 == 0x00000005)
										{
											iVar0 = func_132(iParam1, 0x00000003, 0x000000F3, 0x000000F6);
										}
										else if (iParam3 == 0x00000002 || iParam3 == 0x00000006)
										{
											iVar0 = func_132(iParam1, 0x00000003, 0x000000F7, 0x000000FA);
										}
										else if (iParam3 == 0x00000003 || iParam3 == 0x00000007)
										{
											iVar0 = func_132(iParam1, 0x00000003, 0x000000FB, 0x000000FE);
										}
										else if (iParam3 == 0x00000004 || iParam3 == 0x00000008)
										{
											iVar0 = func_132(iParam1, 0x00000003, 0x000000FF, 0x00000102);
										}
									}
								}
								else if (iParam3 == 0x00000029 || iParam3 == 0x0000002A)
								{
									if (!func_133(iParam0, 0x00000003, 0x000000B0, 0x000000BF) && !func_133(iParam0, 0x00000003, 0x000000E3, 0x000000F2))
									{
										iVar0 = func_132(iParam1, 0x00000003, 0x000000B0, 0x000000BF);
									}
								}
								break;
						}
						break;
					
					case 0x00000008:
						if (iParam2 == 0x0000000B || iParam2 == 0x00000003)
						{
							if (iParam2 == 0x0000000B)
							{
								iVar5 = iParam3;
								iVar4 = func_157(iParam0, 0x00000003);
							}
							else if (iParam2 == 0x00000003)
							{
								iVar4 = iParam3;
								iVar5 = func_157(iParam0, 0x0000000B);
								iVar5 = func_131(iParam1, iVar4, iVar5, 0x00000000);
							}
							iVar3 = func_157(iParam0, 0x00000008);
							if (((iVar5 >= 0x00000005 && iVar5 <= 0x00000008) || (iVar5 >= 0x00000019 && iVar5 <= 0x00000028)) || (iVar5 >= 0x0000002A && iVar5 <= 0x0000002B))
							{
								if (!func_130(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != 0xFFFFFF9D)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 0x0000001B && iVar3 <= 0x0000002A) || (iVar3 >= 0x0000002B && iVar3 <= 0x0000003A)) || (iVar3 >= 0x0000003B && iVar3 <= 0x0000004A))
							{
								iVar0 = 0x0000001A;
							}
						}
						break;
					
					case 0x0000000B:
						if (iParam2 == 0x00000003)
						{
							if (iParam3 >= 0x000000D1 && iParam3 <= 0x000000DE)
							{
							}
							else if (((iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF) || (iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2)) || (iParam3 >= 0x000000F3 && iParam3 <= 0x00000102))
							{
								iVar7 = func_157(iParam0, 0x00000008);
								iVar8 = func_157(iParam0, 0x0000000B);
								if (((iVar7 >= 0x0000001B && iVar7 <= 0x0000002A) || (iVar7 >= 0x0000002B && iVar7 <= 0x0000003A)) || (iVar7 >= 0x0000003B && iVar7 <= 0x0000004A))
								{
									iVar0 = func_131(iParam1, iParam3, iVar8, 0x00000000);
								}
								else
								{
									iVar0 = func_131(iParam1, iParam3, iVar8, 0x00000001);
								}
							}
							else if (iParam3 >= 0x00000029 && iParam3 <= 0x00000038)
							{
								iVar0 = 0x0000002D;
							}
							else if (iParam3 >= 0x000000DF && iParam3 <= 0x000000E2)
							{
								iVar0 = 0x0000002C;
							}
							else
							{
								iVar0 = 0x00000000;
							}
						}
						else if (iParam2 == 0x00000008)
						{
							if (((iParam3 >= 0x0000001B && iParam3 <= 0x0000002A) || (iParam3 >= 0x0000002B && iParam3 <= 0x0000003A)) || (iParam3 >= 0x0000003B && iParam3 <= 0x0000004A))
							{
								iVar9 = func_157(iParam0, 0x0000000B);
								iVar0 = func_131(iParam1, 0xFFFFFF9D, iVar9, 0x00000000);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 0x0000000A:
						switch (iParam2)
						{
							case 0x00000003:
								switch (iParam3)
								{
									case 0x00000032:
										iVar0 = 0x00000003;
										break;
									
									case 0x00000051:
										iVar0 = 0x00000005;
										break;
									
									case 0x00000052:
										iVar0 = 0x00000006;
										break;
									
									case 0x00000053:
										iVar0 = 0x00000007;
										break;
									
									case 0x00000054:
										iVar0 = 0x0000000A;
										break;
									
									case 0x00000055:
										iVar0 = 0x00000009;
										break;
									
									case 0x00000056:
										iVar0 = 0x00000008;
										break;
									
									case 0x0000005C:
										iVar0 = 0x00000016;
										break;
									
									case 0x00000057:
										iVar0 = 0x00000017;
										break;
									
									case 0x0000005B:
										iVar0 = 0x00000018;
										break;
									
									case 0x0000005D:
										iVar0 = 0x00000019;
										break;
									
									case 0x00000058:
										iVar0 = 0x0000001A;
										break;
									
									case 0x0000005E:
										iVar0 = 0x0000001B;
										break;
									
									case 0x00000078:
										iVar0 = 0x0000000B;
										break;
									
									case 0x00000079:
										iVar0 = 0x0000000D;
										break;
									
									case 0x0000007A:
										iVar0 = 0x0000000E;
										break;
									
									case 0x0000007C:
										iVar0 = 0x0000000C;
										break;
									
									case 0x0000007E:
										iVar0 = 0x00000012;
										break;
									
									case 0x00000080:
										iVar0 = 0x00000011;
										break;
									
									case 0x00000082:
										iVar0 = 0x00000013;
										break;
									
									case 0x00000083:
										iVar0 = 0x00000010;
										break;
									
									case 0x00000086:
										iVar0 = 0x0000000F;
										break;
									
									case 0x00000087:
										iVar0 = 0x00000014;
										break;
									
									default:
										iVar0 = 0x00000000;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_130(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0x00000000;
			if (iParam1 >= 0x0000001B && iParam1 <= 0x0000002A)
			{
				if (iParam2 != 0xFFFFFF9D)
				{
					if ((iParam2 >= 0x00000005 && iParam2 <= 0x00000008) || (iParam2 >= 0x00000019 && iParam2 <= 0x00000028))
					{
					}
					else
					{
						if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
						{
							if (iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF)
							{
								iVar0 = (iParam1 - 0x0000001B);
								*uParam4 = (0x0000003B + iVar0);
							}
							else if (iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2)
							{
								iVar0 = (iParam1 - 0x0000001B);
								*uParam4 = (0x0000002B + iVar0);
							}
						}
						return 0x00000000;
					}
				}
				if (iParam3 != 0xFFFFFF9D)
				{
					if (((iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2) || (iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF)) || (iParam3 >= 0x000000F3 && iParam3 <= 0x00000102))
					{
					}
					else
					{
						return 0x00000000;
					}
				}
			}
			else if (iParam1 >= 0x0000002B && iParam1 <= 0x0000003A)
			{
				if (iParam2 != 0xFFFFFF9D)
				{
					if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
					{
					}
					else
					{
						if ((iParam2 >= 0x00000005 && iParam2 <= 0x00000008) || (iParam2 >= 0x00000019 && iParam2 <= 0x00000028))
						{
							iVar0 = (iParam1 - 0x0000002B);
							*uParam4 = (0x0000001B + iVar0);
						}
						return 0x00000000;
					}
				}
				if (iParam3 != 0xFFFFFF9D)
				{
					if (iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2)
					{
					}
					else
					{
						if (iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF)
						{
							if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
							{
								iVar0 = (iParam1 - 0x0000002B);
								*uParam4 = (0x0000003B + iVar0);
							}
						}
						return 0x00000000;
					}
				}
			}
			else if (iParam1 >= 0x0000003B && iParam1 <= 0x0000004A)
			{
				if (iParam2 != 0xFFFFFF9D)
				{
					if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
					{
					}
					else
					{
						if ((iParam2 >= 0x00000005 && iParam2 <= 0x00000008) || (iParam2 >= 0x00000019 && iParam2 <= 0x00000028))
						{
							iVar0 = (iParam1 - 0x0000003B);
							*uParam4 = (0x0000001B + iVar0);
						}
						return 0x00000000;
					}
				}
				if (iParam3 != 0xFFFFFF9D)
				{
					if (iParam3 >= 0x000000B0 && iParam3 <= 0x000000BF)
					{
					}
					else
					{
						if (iParam3 >= 0x000000E3 && iParam3 <= 0x000000F2)
						{
							if (iParam2 >= 0x0000002A && iParam2 <= 0x0000002B)
							{
								iVar0 = (iParam1 - 0x0000003B);
								*uParam4 = (0x0000002B + iVar0);
							}
						}
						else if ((iParam2 >= 0x00000005 && iParam2 <= 0x00000008) || (iParam2 >= 0x00000019 && iParam2 <= 0x00000028))
						{
							iVar0 = (iParam1 - 0x0000003B);
							*uParam4 = (0x0000001B + iVar0);
						}
						return 0x00000000;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 0x0000000C)
			{
				if (iParam3 != 0x000000F1)
				{
					return 0x00000000;
				}
			}
			break;
	}
	return 0x00000001;
}

int func_131(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 0x000000F3 && iParam1 <= 0x000000F6)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000005;
		}
	}
	else if (iParam1 >= 0x000000F7 && iParam1 <= 0x000000FA)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000002;
		}
		else
		{
			return 0x00000006;
		}
	}
	else if (iParam1 >= 0x000000FB && iParam1 <= 0x000000FE)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000003;
		}
		else
		{
			return 0x00000007;
		}
	}
	else if (iParam1 >= 0x000000FF && iParam1 <= 0x00000102)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000004;
		}
		else
		{
			return 0x00000008;
		}
	}
	else if (iParam1 >= 0x000000FF && iParam1 <= 0x00000102)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000004;
		}
		else
		{
			return 0x00000008;
		}
	}
	else if ((iParam1 >= 0x000000B0 && iParam1 <= 0x000000BF) || (iParam1 >= 0x000000E3 && iParam1 <= 0x000000F2))
	{
		if (iParam2 >= 0x00000009 && iParam2 <= 0x00000018)
		{
			if (iParam3 == 0x00000001)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 0x00000009);
				iParam2 = (0x00000019 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 0x00000019 && iParam2 <= 0x00000028)
		{
			if (iParam3 == 0x00000001)
			{
				iVar0 = (iParam2 - 0x00000019);
				iParam2 = (0x00000009 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 0x00000029 || iParam2 == 0x0000002A)
		{
			if (iParam3 == 0x00000001)
			{
				return 0x00000029;
			}
			else
			{
				return 0x0000002A;
			}
		}
		else
		{
			if (iParam3 == 0x00000001)
			{
				iParam2 = func_132(iParam0, 0x0000000B, 0x00000009, 0x00000018);
			}
			else
			{
				iParam2 = func_132(iParam0, 0x0000000B, 0x00000019, 0x00000028);
			}
			if (iParam2 == 0xFFFFFF9D)
			{
				if (iParam3 == 0x00000001)
				{
					return 0x00000029;
				}
				else
				{
					return 0x0000002A;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 0x00000001 && iParam2 <= 0x00000004)
	{
		if (iParam3 == 0x00000001)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 0x00000001);
			iParam2 = (0x00000005 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 0x00000005 && iParam2 <= 0x00000008)
	{
		if (iParam3 == 0x00000001)
		{
			iVar0 = (iParam2 - 0x00000005);
			iParam2 = (0x00000001 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 0x00000009 && iParam2 <= 0x00000018)
	{
		if (iParam3 == 0x00000001)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 0x00000009);
			iParam2 = (0x00000019 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 0x00000019 && iParam2 <= 0x00000028)
	{
		if (iParam3 == 0x00000001)
		{
			iVar0 = (iParam2 - 0x00000019);
			iParam2 = (0x00000009 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 0x00000029 || iParam2 == 0x0000002A)
	{
		if (iParam3 == 0x00000001)
		{
			return 0x00000029;
		}
		else
		{
			return 0x0000002A;
		}
	}
	return 0xFFFFFF9D;
}

int func_132(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 0x00000001))
	{
		iVar1 = iVar0;
		if (func_122(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0xFFFFFF9D;
}

int func_133(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_157(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 0xFFFFFF9D;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 0x00000010 || iParam1 == 0x00000011) || iParam1 == 0x00000015) || iParam1 == 0x00000016) || iParam1 == 0x00000020) || (iParam1 >= 0x00000022 && iParam1 <= 0x00000027)) || (iParam1 >= 0x00000029 && iParam1 <= 0x0000002D)) || iParam1 == 0x0000002E) || (iParam1 >= 0x0000002F && iParam1 <= 0x00000036)) || (iParam1 >= 0x00000037 && iParam1 <= 0x00000046)) || (iParam1 >= 0x00000048 && iParam1 <= 0x0000004F)) || iParam1 == 0x00000050) || (iParam1 >= 0x00000051 && iParam1 <= 0x00000053)) || (iParam1 >= 0x00000054 && iParam1 <= 0x00000057)) || iParam1 == 0x00000058) || (iParam1 >= 0x00000059 && iParam1 <= 0x0000005B)) || iParam1 == 0x0000005F) || (iParam1 >= 0x00000060 && iParam1 <= 0x0000006F)) || iParam1 == 0x00000070)
			{
				*iParam2 = 0x00000006;
				return 0x00000001;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 0x0000000C || (iParam1 >= 0x0000000E && iParam1 <= 0x00000015)) || iParam1 == 0x00000020) || iParam1 == 0x00000034) || (iParam1 >= 0x00000045 && iParam1 <= 0x00000046)) || iParam1 == 0x00000047) || (iParam1 >= 0x00000048 && iParam1 <= 0x0000004D))
			{
				*iParam2 = 0x00000011;
				return 0x00000001;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 0x00000004 || iParam1 == 0x00000005) || iParam1 == 0x00000006) || iParam1 == 0x00000007) || iParam1 == 0x0000000E) || (iParam1 >= 0x00000012 && iParam1 <= 0x0000001D)) || iParam1 == 0x0000001F) || iParam1 == 0x00000020) || iParam1 == 0x00000021) || iParam1 == 0x00000022) || (iParam1 >= 0x00000023 && iParam1 <= 0x0000002A)) || (iParam1 >= 0x0000002B && iParam1 <= 0x00000035)) || (iParam1 >= 0x00000036 && iParam1 <= 0x0000003D)) || (iParam1 >= 0x00000047 && iParam1 <= 0x00000050)) || (iParam1 >= 0x00000051 && iParam1 <= 0x0000005A)) || (iParam1 >= 0x0000005E && iParam1 <= 0x00000067))
			{
				*iParam2 = 0x00000008;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_135(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = 0xFFFFFF9D;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x0000000A:
					if (iParam2 >= 0x0000002C && iParam2 <= 0x0000002F)
					{
						*iParam3 = 0x00000000;
					}
					break;
				
				case 0x0000000E:
					if (((((((iParam2 >= 0x0000001F && iParam2 <= 0x00000020) || (iParam2 >= 0x00000021 && iParam2 <= 0x00000022)) || (iParam2 >= 0x00000023 && iParam2 <= 0x00000024)) || iParam2 == 0x00000025) || (iParam2 >= 0x00000026 && iParam2 <= 0x00000027)) || (iParam2 >= 0x00000028 && iParam2 <= 0x00000029)) || (iParam2 >= 0x0000002A && iParam2 <= 0x0000002C))
					{
						*iParam3 = 0x00000000;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x0000000A:
					if (iParam2 >= 0x0000002F && iParam2 <= 0x00000032)
					{
						*iParam3 = 0x00000000;
					}
					break;
				
				case 0x0000000E:
					if (((((iParam2 >= 0x0000001A && iParam2 <= 0x0000001B) || (iParam2 >= 0x0000001C && iParam2 <= 0x0000001D)) || (iParam2 >= 0x0000001E && iParam2 <= 0x0000001F)) || iParam2 == 0x00000020) || (iParam2 >= 0x00000023 && iParam2 <= 0x00000024))
					{
						*iParam3 = 0x00000000;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000009:
					if (iParam2 >= 0x0000000F && iParam2 <= 0x00000010)
					{
						*iParam3 = 0x00000000;
					}
					break;
				
				case 0x0000000A:
					if (iParam2 >= 0x0000001D && iParam2 <= 0x00000020)
					{
						*iParam3 = 0x00000000;
					}
					break;
				
				case 0x0000000E:
					if (((((((iParam2 >= 0x0000002F && iParam2 <= 0x00000030) || (iParam2 >= 0x00000031 && iParam2 <= 0x00000032)) || (iParam2 >= 0x00000033 && iParam2 <= 0x00000034)) || iParam2 == 0x00000035) || (iParam2 >= 0x00000036 && iParam2 <= 0x00000037)) || (iParam2 >= 0x00000038 && iParam2 <= 0x00000039)) || (iParam2 >= 0x0000003A && iParam2 <= 0x0000003C))
					{
						*iParam3 = 0x00000000;
					}
					break;
			}
			break;
	}
	if (*iParam3 != 0xFFFFFF9D)
	{
		iVar0 = func_119(iParam0);
		Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F = iParam2;
		Global_1B416.f_936.f_21B[iVar0 /*65*/].f_40 = iParam1;
		return 0x00000001;
	}
	return 0x00000000;
}

int func_136(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 0x00000001)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000001;
				}
				else if (iParam2 == 0x00000004)
				{
					return 0x00000005;
				}
				else
				{
					return 0x00000003;
				}
			}
			else if (iParam2 == 0x00000000)
			{
				return 0x00000000;
			}
			else if (iParam2 == 0x00000004)
			{
				return 0x00000004;
			}
			else
			{
				return 0x00000002;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0x00000000 && iParam1 <= 0x0000000F)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000000;
				}
				else
				{
					return 0x00000003;
				}
			}
			else if (iParam1 >= 0x00000010 && iParam1 <= 0x00000011)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000002;
				}
				else
				{
					return 0x00000005;
				}
			}
			else if (iParam1 == 0x00000012)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000006;
				}
				else
				{
					return 0x00000007;
				}
			}
			else if (iParam1 == 0x00000013)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000004;
				}
			}
			else if (iParam2 == 0x00000000)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000004;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 0x00000002)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000002;
				}
				else
				{
					return 0x00000003;
				}
			}
			else if (iParam1 == 0x00000003)
			{
				if (iParam2 == 0x00000000)
				{
					return 0x00000004;
				}
				else
				{
					return 0x00000006;
				}
			}
			else if (iParam1 == 0x00000008)
			{
				return 0x00000005;
			}
			else if (iParam2 == 0x00000000)
			{
				return 0x00000000;
			}
			else
			{
				return 0x00000001;
			}
			break;
	}
	return 0xFFFFFF9D;
}

void func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		unk_0x3BFC3B9ADD2EE7B7(iParam0, iParam1);
		if (iParam1 == 0x00000000)
		{
			unk_0x4E885A246A9D983A(iParam0, 0x00000022, 0x00000000);
			unk_0x4E885A246A9D983A(iParam0, 0x00000024, 0x00000000);
		}
	}
	else
	{
		unk_0x9A28E8CB86CD4694(iParam0, iParam1, iParam2, iParam3, unk_0x8CD06866876216F2());
		if (iParam1 == 0x00000000)
		{
			iVar0 = func_142(iParam0, iParam2, iParam3, iParam1);
			if (func_138(unk_0x134B62B726CEC8E6(iParam0), 0x0000000E, iVar0, unk_0xD1BC07002824FE76(iParam0, 0x00000000, iParam2, iParam3)))
			{
				unk_0x4E885A246A9D983A(iParam0, 0x00000022, 0x00000001);
				unk_0x4E885A246A9D983A(iParam0, 0x00000024, 0x00000001);
			}
			else
			{
				unk_0x4E885A246A9D983A(iParam0, 0x00000022, 0x00000000);
				unk_0x4E885A246A9D983A(iParam0, 0x00000024, 0x00000000);
			}
		}
	}
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_139(iParam0, iParam2, 0x0000000E, 0x00000003);
					}
					if ((iParam2 >= 0x00000083 && iParam2 <= 0x0000009A) || (iParam2 >= 0x00000147 && unk_0x1A5A491D253EA7BA(iParam3, 0xC2670CD3, 0x00000001)))
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_139(iParam0, iParam2, 0x0000000E, 0x00000004);
					}
					if ((iParam2 >= 0x00000083 && iParam2 <= 0x0000009A) || (iParam2 >= 0x00000147 && unk_0x1A5A491D253EA7BA(iParam3, 0xC2670CD3, 0x00000001)))
					{
						return 0x00000001;
					}
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_139(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 0x0000000C)
	{
	}
	else if (iParam2 == 0x0000000D)
	{
	}
	else if (iParam2 == 0x0000000E)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar2 = 0x00000000;
		iVar3 = (iParam1 - func_141(iParam0));
		if (iVar3 < 0x00000000)
		{
			return 0xFFFFFFFF;
		}
		iVar4 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		iVar1 = 0x00000000;
		while (iVar1 < iVar4)
		{
			unk_0x4F79808059300187(iVar1, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var5);
		iVar7 = 0x00000000;
		iVar8 = (iParam1 - func_140(iParam0, func_127(iParam2)));
		if (iVar8 < 0x00000000)
		{
			return 0xFFFFFFFF;
		}
		if ((iParam0 == Global_12B0C.f_1A[iParam2] && iParam1 == Global_12B0C[iParam2]) && Global_12B0C.f_D[iParam2] != 0x00000000)
		{
			return Global_12B0C.f_D[iParam2];
		}
		iVar9 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, func_127(iParam2));
		iVar6 = 0x00000000;
		while (iVar6 < iVar9)
		{
			unk_0xC578687D5A643830(iVar6, &Var5);
			if (!unk_0x232048AB4B0E0259(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_12B0C.f_D[iParam2] = Var5.f_1;
					Global_12B0C[iParam2] = iParam1;
					Global_12B0C.f_1A[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return 0xFFFFFFFF;
}

int func_140(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000007;
					break;
				
				case 0x00000001:
					return 0x00000005;
					break;
				
				case 0x00000002:
					return 0x00000006;
					break;
				
				case 0x00000003:
					return 0x000000B5;
					break;
				
				case 0x00000004:
					return 0x00000071;
					break;
				
				case 0x00000005:
					return 0x0000000E;
					break;
				
				case 0x00000006:
					return 0x00000063;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00000018;
					break;
				
				case 0x00000009:
					return 0x00000014;
					break;
				
				case 0x0000000A:
					return 0x00000030;
					break;
				
				case 0x0000000B:
					return 0x0000002D;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x00000005;
					break;
				
				case 0x00000002:
					return 0x00000015;
					break;
				
				case 0x00000003:
					return 0x0000013E;
					break;
				
				case 0x00000004:
					return 0x00000075;
					break;
				
				case 0x00000005:
					return 0x00000007;
					break;
				
				case 0x00000006:
					return 0x00000086;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x0000004D;
					break;
				
				case 0x00000009:
					return 0x0000000C;
					break;
				
				case 0x0000000A:
					return 0x00000035;
					break;
				
				case 0x0000000B:
					return 0x0000003F;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000007;
					break;
				
				case 0x00000001:
					return 0x00000006;
					break;
				
				case 0x00000002:
					return 0x00000009;
					break;
				
				case 0x00000003:
					return 0x000000F2;
					break;
				
				case 0x00000004:
					return 0x00000068;
					break;
				
				case 0x00000005:
					return 0x00000007;
					break;
				
				case 0x00000006:
					return 0x00000054;
					break;
				
				case 0x00000007:
					return 0x00000001;
					break;
				
				case 0x00000008:
					return 0x00000012;
					break;
				
				case 0x00000009:
					return 0x00000011;
					break;
				
				case 0x0000000A:
					return 0x00000021;
					break;
				
				case 0x0000000B:
					return 0x00000001;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x0000001A;
					break;
				
				case 0x00000002:
					return 0x0000005B;
					break;
				
				case 0x00000003:
					return 0x00000010;
					break;
				
				case 0x00000004:
					return 0x00000100;
					break;
				
				case 0x00000005:
					return 0x00000009;
					break;
				
				case 0x00000006:
					return 0x00000100;
					break;
				
				case 0x00000007:
					return 0x0000005C;
					break;
				
				case 0x00000008:
					return 0x000000F1;
					break;
				
				case 0x00000009:
					return 0x0000002E;
					break;
				
				case 0x0000000A:
					return 0x00000007;
					break;
				
				case 0x0000000B:
					return 0x000000ED;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000000;
					break;
				
				case 0x00000001:
					return 0x0000001A;
					break;
				
				case 0x00000002:
					return 0x0000005C;
					break;
				
				case 0x00000003:
					return 0x00000010;
					break;
				
				case 0x00000004:
					return 0x00000100;
					break;
				
				case 0x00000005:
					return 0x00000009;
					break;
				
				case 0x00000006:
					return 0x00000100;
					break;
				
				case 0x00000007:
					return 0x00000037;
					break;
				
				case 0x00000008:
					return 0x00000088;
					break;
				
				case 0x00000009:
					return 0x00000024;
					break;
				
				case 0x0000000A:
					return 0x00000006;
					break;
				
				case 0x0000000B:
					return 0x00000100;
					break;
			}
			break;
	}
	return 0xFFFFFF9D;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0x00000071;
			break;
		
		case joaat("player_one"):
			return 0x000000AF;
			break;
		
		case joaat("player_two"):
			return 0x0000009B;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 0x00000147;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 0x00000147;
			break;
	}
	return 0xFFFFFF9D;
}

int func_142(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		return func_145(iParam3);
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	iVar1 = unk_0xD1BC07002824FE76(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != 0xFFFFFFFF && iVar1 != 0x00000000)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_144(unk_0x134B62B726CEC8E6(iParam0), iVar1, 0x0000000E, 0x00000003);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_144(unk_0x134B62B726CEC8E6(iParam0), iVar1, 0x0000000E, 0x00000004);
		}
	}
	iVar2 = unk_0xB0D40A53430D217C(iParam0, iParam3);
	iVar4 = 0x00000000;
	while (iVar4 <= (iVar2 - 0x00000001))
	{
		iVar6 = unk_0xFEDCD54A497F3495(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0x00000000;
			while (iVar5 <= (iVar6 - 0x00000001))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_143(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_145(iParam3);
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x0000003A;
					break;
				
				case 0x00000002:
					return 0x00000070;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x00000052;
					break;
				
				case 0x00000002:
					return 0x0000009E;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x00000058;
					break;
				
				case 0x00000002:
					return 0x0000009A;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x0000009B;
					break;
				
				case 0x00000006:
					return 0x0000013F;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					return 0x0000000A;
					break;
				
				case 0x00000001:
					return 0x0000009B;
					break;
				
				case 0x00000006:
					return 0x0000013F;
					break;
			}
			break;
	}
	return 0xFFFFFF9D;
}

int func_144(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 0x0000000C)
	{
	}
	else if (iParam2 == 0x0000000D)
	{
	}
	else if (iParam2 == 0x0000000E)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar2 = 0x00000000;
		iVar3 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		iVar1 = 0x00000000;
		while (iVar1 < iVar3)
		{
			unk_0x4F79808059300187(iVar1, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_141(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var4);
		iVar6 = 0x00000000;
		iVar7 = unk_0xF6900DA2D9CD7BC5(iParam3, 0x00000007, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, func_127(iParam2));
		iVar5 = 0x00000000;
		while (iVar5 < iVar7)
		{
			unk_0xC578687D5A643830(iVar5, &Var4);
			if (!unk_0x232048AB4B0E0259(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_140(iParam0, func_127(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return 0xFFFFFF9D;
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000002:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000003;
			break;
		
		case 0x00000004:
			return 0x00000004;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
	}
	return 0x00000000;
}

struct<10> func_146(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 0x00000009;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000008)
	{
		Var1[iVar0] = 0xFFFFFF9D;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_148(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_148(&Var1, 0x0000000A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_148(&Var1, 0x00000013, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_148(&Var1, 0x0000000E, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_148(&Var1, 0x00000012, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_148(&Var1, 0x00000000, 0x0000003B, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_148(&Var1, 0x00000000, 0x0000003C, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_148(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_148(&Var1, 0x00000000, 0x0000003C, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_148(&Var1, 0x00000037, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_148(&Var1, 0x00000000, 0x00000001, 0x00000070, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_147(&Var1, iParam0, iParam1, 0x0000000A);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_148(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_148(&Var1, 0x0000000A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_148(&Var1, 0x00000000, 0x00000052, 0x0000009E, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_148(&Var1, 0x00000000, 0x00000001, 0x0000009E, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_148(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_148(&Var1, 0x00000029, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_148(&Var1, 0x00000028, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_148(&Var1, 0x00000029, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_148(&Var1, 0x00000000, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_148(&Var1, 0x00000045, 0x0000005F, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_147(&Var1, iParam0, iParam1, 0x00000009);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_148(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_148(&Var1, 0x0000000B, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_148(&Var1, 0x00000011, 0x0000005A, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_148(&Var1, 0x0000000F, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_148(&Var1, 0x00000000, 0x00000058, 0x0000009A, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_148(&Var1, 0x00000000, 0x00000001, 0x0000009A, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_148(&Var1, 0x00000010, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_148(&Var1, 0x00000024, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_148(&Var1, 0x00000000, 0x0000007B, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_148(&Var1, 0x00000045, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_147(&Var1, iParam0, iParam1, 0x00000009);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_148(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_148(&Var1, 0x00000081, 0x000000A7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_148(&Var1, 0x0000005A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_148(&Var1, 0x00000017, 0x000000FB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_148(&Var1, 0x00000024, 0x00000106, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_148(&Var1, 0x00000058, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_148(&Var1, 0x0000007D, 0x000000AF, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_148(&Var1, 0x00000023, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_148(&Var1, 0x0000002C, 0x000000D0, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_148(&Var1, 0x00000034, 0x000000BD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_148(&Var1, 0x00000000, 0x00000105, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000A:
					func_148(&Var1, 0x00000000, 0x000000F3, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000B:
					func_148(&Var1, 0x00000000, 0x000000F3, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000C:
					func_148(&Var1, 0x00000000, 0x000000D4, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000D:
					func_148(&Var1, 0x00000040, 0x00000123, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000E:
					func_148(&Var1, 0x0000003D, 0x000000CF, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000F:
					func_148(&Var1, 0x00000000, 0x00000123, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000010:
					func_148(&Var1, 0x00000000, 0x000000D0, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000011:
					func_148(&Var1, 0x00000000, 0x000000E5, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000012:
					func_148(&Var1, 0x00000024, 0x000000F9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000013:
					func_148(&Var1, 0x00000000, 0x00000103, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000014:
					func_148(&Var1, 0x00000000, 0x000000AE, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000015:
					func_148(&Var1, 0x00000023, 0x000000B4, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000016:
					func_148(&Var1, 0x00000024, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000017:
					func_148(&Var1, 0x00000000, 0x00000103, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000018:
					func_148(&Var1, 0x00000023, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_147(&Var1, iParam0, iParam1, 0x00000019);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x0000001F:
					func_148(&Var1, 0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000000:
					func_148(&Var1, 0x00000023, 0x000000E9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000001:
					func_148(&Var1, 0x00000024, 0x000000B2, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000002:
					func_148(&Var1, 0x00000035, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000003:
					func_148(&Var1, 0x00000026, 0x000000AA, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000004:
					func_148(&Var1, 0x00000025, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000005:
					func_148(&Var1, 0x00000071, 0x000000CB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000006:
					func_148(&Var1, 0x00000072, 0x000000B7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000007:
					func_148(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000008:
					func_148(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000009:
					func_148(&Var1, 0x00000000, 0x000000C7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000A:
					func_148(&Var1, 0x00000000, 0x000000B6, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000B:
					func_148(&Var1, 0x00000000, 0x000000E9, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000C:
					func_148(&Var1, 0x0000006B, 0x000000A7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000D:
					func_148(&Var1, 0x0000006D, 0x000000AA, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000143, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000E:
					func_148(&Var1, 0x00000077, 0x000000ED, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x0000000F:
					func_148(&Var1, 0x00000000, 0x000000DD, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000010:
					func_148(&Var1, 0x00000072, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000011:
					func_148(&Var1, 0x00000023, 0x0000010C, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000012:
					func_148(&Var1, 0x00000000, 0x0000010A, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000013:
					func_148(&Var1, 0x0000002A, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000014:
					func_148(&Var1, 0x0000004C, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000015:
					func_148(&Var1, 0x00000027, 0x000000EB, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000016:
					func_148(&Var1, 0x00000029, 0x000000B7, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				case 0x00000017:
					func_148(&Var1, 0x0000006F, 0x000000C2, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007, 0x00000008);
					break;
				
				default:
					func_147(&Var1, iParam0, iParam1, 0x00000019);
					break;
			}
			break;
	}
	return Var1;
}

void func_147(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0x00000000 && iParam2 != 0xFFFFFF9D)
	{
		(*iParam0)[0x00000000] = 0x00000000;
		(*iParam0)[0x00000001] = 0x00000001;
		(*iParam0)[0x00000002] = 0x00000002;
		(*iParam0)[0x00000003] = 0x00000003;
		(*iParam0)[0x00000004] = 0x00000004;
		(*iParam0)[0x00000005] = 0x00000005;
		(*iParam0)[0x00000006] = 0x00000006;
		(*iParam0)[0x00000007] = 0x00000007;
		(*iParam0)[0x00000008] = 0x00000008;
		iVar0 = 0x00000000;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0x00000000;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 0x00000001;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 0x00000002;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 0x00000003;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 0x00000004;
		}
		unk_0xEF5FB5FCF95E0C4D(iParam2, &Var1);
		if (!unk_0x232048AB4B0E0259(Var1))
		{
			iVar3 = 0x00000000;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0x5D149814CB08088A(Var1.f_1, iVar3, &vVar2) && vVar2.z != 0xFFFFFFFF)
				{
					if ((vVar2.x != 0x00000000 && vVar2.x != 0xFFFFFFFF) && vVar2.x != 0x6E3C5C6B)
					{
						(*iParam0)[vVar2.z] = func_144(iParam1, vVar2.x, 0x0000000E, iVar0);
					}
					else if (vVar2.y != 0xFFFFFFFF)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0x00000000] = iParam1;
	(*iParam0)[0x00000001] = iParam2;
	(*iParam0)[0x00000002] = iParam3;
	(*iParam0)[0x00000003] = iParam4;
	(*iParam0)[0x00000004] = iParam5;
	(*iParam0)[0x00000005] = iParam6;
	(*iParam0)[0x00000006] = iParam7;
	(*iParam0)[0x00000007] = iParam8;
	(*iParam0)[0x00000008] = iParam9;
}

struct<17> func_149(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 0x0000000F;
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000E)
	{
		Var1[iVar0] = 0xFFFFFF9D;
		iVar0++;
	}
	Var1.f_10 = 0x00000000;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x00000000:
					if (Global_1B416.f_2378.f_63.f_3A[0x00000078])
					{
						func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					}
					else
					{
						func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					}
					break;
				
				case 0x00000001:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000010, 0x00000010, 0x00000006, 0x00000001, 0x00000001, 0x00000000, 0x00000001, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000);
					break;
				
				case 0x00000002:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000024, 0x00000015, 0x00000006, 0x00000001, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x00000003:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000041, 0x00000024, 0x00000006, 0x00000000, 0x00000002, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000004:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003D, 0x00000020, 0x00000006, 0x00000000, 0x00000000, 0x00000007, 0x00000003, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000005:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000000], Global_1B416.f_936.f_21B.f_C8[0x00000000], 0x00000006, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000006:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005C, 0x00000048, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000007:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x0000005F, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000008:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AA, 0x00000050, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000009:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AB, 0x00000059, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000008, 0x0000000A, 0x00000003, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x0000000B:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000011, 0x0000000A, 0x00000004, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x0000000C:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000017, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000045, 0x00000028, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003E, 0x00000021, 0x00000026, 0x00000000, 0x00000008, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x0000000F:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000003F, 0x00000022, 0x00000006, 0x0000000A, 0x00000000, 0x00000000, 0x00000004, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AE, 0x0000005D, 0x00000012, 0x00000000, 0x00000012, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004C, 0x0000002E, 0x00000006, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000000, 0x00000004, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x00000013:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000040, 0x00000023, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000042, 0x00000025, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000043, 0x00000026, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000016:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000044, 0x00000027, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000017:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000B1, 0x0000005E, 0x00000013, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000018:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000004, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000019:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000061, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000081, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000AA, 0x00000050, 0x00000006, 0x00000000, 0x0000000D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A1, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000003, 0x00000000, 0x0000000C, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000001, 0x0000001F);
					break;
				
				case 0x00000020:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x00000037, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000021:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000056, 0x00000004, 0x00000014, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000022:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002C, 0x00000061, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000002, 0x0000001F);
					break;
				
				case 0x00000023:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000055, 0x00000051, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000024:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000025:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000005, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000026:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000007, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000008, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000A, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000B, 0x0000000B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002C:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000C, 0x0000000C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002D:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000D, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002E:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000E, 0x0000000E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002F:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000F, 0x0000000F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000030:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005B, 0x00000047, 0x0000000E, 0x0000000D, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000031:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000023, 0x00000014, 0x00000009, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000032:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000021, 0x00000012, 0x00000008, 0x0000000A, 0x00000003, 0x00000008, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000009);
					break;
				
				case 0x00000033:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A9, 0x0000005F, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000034:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A9, 0x00000048, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_150(&Var1, iParam0, iParam1, 0x00000035);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x00000000:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000049, 0x00000018, 0x00000012, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000016, 0x0000000A, 0x00000040, 0x00000000, 0x00000018, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002B, 0x0000001F);
					break;
				
				case 0x00000002:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000001], Global_1B416.f_936.f_21B.f_C8[0x00000001], 0x00000011, 0x00000002, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002D, 0x0000001F);
					break;
				
				case 0x00000003:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000017, 0x0000000B, 0x0000000D, 0x00000005, 0x00000002, 0x00000004, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000001);
					break;
				
				case 0x00000004:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000017, 0x0000000B, 0x00000022, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000005:
					func_152(&Var1, 0xFFFFFF9D, 0x00000014, 0x0000009F, 0x00000045, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000006:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000028, 0x0000000D, 0x0000000E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000007:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005A, 0x00000020, 0x00000011, 0x00000001, 0x00000008, 0x00000000, 0x00000001, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000008:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000011, 0x00000005, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000002, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x00000009:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000010, 0x00000004, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000D0, 0x00000047, 0x00000011, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000B:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000103, 0x0000000A, 0x00000023, 0x00000000, 0x00000018, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000002B, 0x0000001F);
					break;
				
				case 0x0000000C:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000012, 0x00000006, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000013, 0x00000007, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000014, 0x00000008, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000F:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000015, 0x00000009, 0x0000000C, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000087, 0x00000028, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004A, 0x00000018, 0x00000034, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000B0, 0x00000035, 0x0000001A, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000029, 0x0000001F);
					break;
				
				case 0x00000013:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007D, 0x00000018, 0x00000012, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A2, 0x00000018, 0x00000024, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004B, 0x00000018, 0x00000024, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x00000016:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E3, 0x00000035, 0x00000019, 0x00000000, 0x0000001B, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000019, 0x0000001F);
					break;
				
				case 0x00000017:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E4, 0x00000036, 0x00000019, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001A, 0x0000001F);
					break;
				
				case 0x00000018:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E5, 0x00000037, 0x00000019, 0x00000000, 0x0000001D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001B, 0x0000001F);
					break;
				
				case 0x00000019:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E6, 0x00000038, 0x00000019, 0x00000000, 0x0000001E, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001C, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E7, 0x00000039, 0x00000019, 0x00000000, 0x0000001F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001D, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E8, 0x0000003A, 0x00000019, 0x00000000, 0x00000020, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001E, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000E9, 0x0000003B, 0x00000019, 0x00000000, 0x00000021, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001F, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EA, 0x0000003C, 0x00000019, 0x00000000, 0x00000022, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000020, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EB, 0x0000003D, 0x00000019, 0x00000000, 0x00000023, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000021, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EC, 0x0000003E, 0x00000019, 0x00000000, 0x00000024, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000022, 0x0000001F);
					break;
				
				case 0x00000020:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000ED, 0x0000003F, 0x00000019, 0x00000000, 0x00000025, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000023, 0x0000001F);
					break;
				
				case 0x00000021:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EE, 0x00000040, 0x00000019, 0x00000000, 0x00000026, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000024, 0x0000001F);
					break;
				
				case 0x00000022:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000EF, 0x00000041, 0x00000019, 0x00000000, 0x00000027, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000025, 0x0000001F);
					break;
				
				case 0x00000023:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F0, 0x00000042, 0x00000019, 0x00000000, 0x00000028, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000026, 0x0000001F);
					break;
				
				case 0x00000024:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F1, 0x00000043, 0x00000019, 0x00000000, 0x00000029, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000027, 0x0000001F);
					break;
				
				case 0x00000025:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F2, 0x00000044, 0x00000019, 0x00000000, 0x0000002A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000028, 0x0000001F);
					break;
				
				case 0x00000026:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000104, 0x00000048, 0x00000011, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007D, 0x00000018, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000007B, 0x00000018, 0x00000000, 0x00000000, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000009F, 0x00000045, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000059, 0x00000016, 0x0000000F, 0x00000006, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000013D, 0x00000045, 0x00000011, 0x00000000, 0x00000000, 0x00000000, 0x00000033, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x0000002C:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000001E, 0x00000017, 0x00000010, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x0000002D:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000006A, 0x00000046, 0x00000011, 0x00000005, 0x0000001A, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x0000002E:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000075, 0x00000018, 0x00000014, 0x00000005, 0x0000001A, 0x00000000, 0x00000034, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_150(&Var1, iParam0, iParam1, 0x0000002F);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x00000000:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000005B, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000011, 0x00000005, 0x00000008, 0x00000002, 0x00000003, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000008);
					break;
				
				case 0x00000002:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002B, 0x00000008, 0x0000000C, 0x00000003, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000001);
					break;
				
				case 0x00000003:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000032, 0x0000000E, 0x00000008, 0x00000000, 0x0000000F, 0x00000006, 0x00000003, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000002);
					break;
				
				case 0x00000004:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, Global_1B416.f_936.f_21B.f_C4[0x00000002], Global_1B416.f_936.f_21B.f_C8[0x00000002], 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000005:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000005F, 0x00000021, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000006);
					break;
				
				case 0x00000006:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000031, 0x0000000D, 0x0000000A, 0x00000004, 0x00000006, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000003);
					break;
				
				case 0x00000007:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000031, 0x0000000D, 0x0000000E, 0x00000004, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000004);
					break;
				
				case 0x00000008:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004F, 0x00000020, 0x00000008, 0x00000005, 0x00000007, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000009:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000035, 0x00000011, 0x0000000B, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000A:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000060, 0x00000051, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000B:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000033, 0x0000000F, 0x00000021, 0x00000000, 0x00000008, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000005);
					break;
				
				case 0x0000000C:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000005D, 0x0000001D, 0x00000000, 0x0000000D, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000D:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000034, 0x00000010, 0x0000001E, 0x00000005, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000F1, 0x0000005C, 0x00000010, 0x00000000, 0x0000000C, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000000F:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000061, 0x00000022, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000010:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002C, 0x00000009, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000011:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002D, 0x0000000A, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000012:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002E, 0x0000000B, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000013:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000002F, 0x0000000C, 0x0000000C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000014:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000A1, 0x00000035, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000015:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x0000002C, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000016:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000062, 0x00000000, 0x0000001C, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000017:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000001B, 0x00000000, 0x0000001F, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000018:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000BE, 0x00000047, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000019:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000BF, 0x00000048, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001A:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C0, 0x00000049, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001B:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C1, 0x0000004A, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001C:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C2, 0x0000004B, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001D:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C3, 0x0000004C, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001E:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C4, 0x0000004D, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000001F:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C5, 0x0000004E, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000020:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C6, 0x0000004F, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000021:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C7, 0x00000050, 0x00000008, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000022:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C8, 0x0000003E, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000023:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000C9, 0x0000003F, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000024:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CA, 0x00000040, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000025:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CB, 0x00000041, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000026:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CC, 0x00000042, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000027:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CD, 0x00000043, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000028:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x000000CE, 0x00000044, 0x00000010, 0x00000000, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000029:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x0000002B, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002A:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000037, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002B:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000034, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002C:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000046, 0x0000001E, 0x00000020, 0x00000006, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002D:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000013, 0x0000005B, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000007);
					break;
				
				case 0x0000002E:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x0000002F:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000004F, 0x00000020, 0x00000008, 0x00000005, 0x0000000F, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				default:
					func_150(&Var1, iParam0, iParam1, 0x00000030);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x0000000A, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000007F, 0x00000026, 0xFFFFFF9D, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003E, 0x00000000);
					break;
				
				case 0x00000002:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x000000F8, 0x0000002D, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000090, 0x00000001);
					break;
				
				case 0x00000003:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000001F, 0x00000019, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000E7, 0x00000002);
					break;
				
				case 0x00000004:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000042, 0x0000000A, 0xFFFFFF9D, 0x00000015, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000007B, 0x00000003);
					break;
				
				case 0x00000005:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000005D, 0x0000008D, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000072, 0x00000004);
					break;
				
				case 0x00000006:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000074, 0x00000071, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000071, 0x00000005);
					break;
				
				case 0x00000007:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000003D, 0x00000088, 0xFFFFFF9D, 0x0000001B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003D, 0x00000006);
					break;
				
				case 0x00000008:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000070, 0x0000000A, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000008, 0x00000007);
					break;
				
				case 0x00000009:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000083, 0x00000018, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000DF, 0x00000008);
					break;
				
				case 0x0000000A:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000D1, 0x000000BC, 0xFFFFFF9D, 0x000000D0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000040, 0x00000009);
					break;
				
				case 0x0000000B:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000D1, 0x000000A0, 0xFFFFFF9D, 0x000000D3, 0x00000000, 0x00000000, 0x00000000, 0x0000002B, 0x0000009D, 0x0000000A);
					break;
				
				case 0x0000000C:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000A2, 0x000000AE, 0xFFFFFF9D, 0x000000C9, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000009E, 0x0000000B);
					break;
				
				case 0x0000000D:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000004, 0x000000F0, 0xFFFFFF9D, 0x00000022, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000061, 0x0000000C);
					break;
				
				case 0x0000000E:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000080, 0x000000E8, 0xFFFFFF9D, 0x0000002B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000066, 0x0000000D);
					break;
				
				case 0x0000000F:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000042, 0x00000041, 0xFFFFFF9D, 0x000000E0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000064, 0x0000000E);
					break;
				
				case 0x00000010:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000041, 0x000000AC, 0xFFFFFF9D, 0x000000CA, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000040, 0x0000000F);
					break;
				
				case 0x00000011:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000040, 0x0000000A, 0xFFFFFF9D, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000042, 0x00000010);
					break;
				
				case 0x00000012:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000062, 0x00000050, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000057, 0x00000011);
					break;
				
				case 0x00000013:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x000000C0, 0x00000060, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000050, 0x00000012);
					break;
				
				case 0x00000014:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000007C, 0x00000060, 0xFFFFFF9D, 0x0000000B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006E, 0x00000013);
					break;
				
				case 0x00000015:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000050, 0x00000072, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000014);
					break;
				
				case 0x00000016:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x0000002B, 0x00000070, 0xFFFFFF9D, 0x00000052, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000030, 0x00000015);
					break;
				
				case 0x00000017:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000074, 0x00000090, 0xFFFFFF9D, 0x00000002, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000006C, 0x00000016);
					break;
				
				case 0x00000018:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000003F, 0x00000026, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000003F, 0x00000017);
					break;
				
				case 0x00000019:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000040, 0x0000000A, 0xFFFFFF9D, 0x000000F0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000029, 0x00000018);
					break;
				
				default:
					func_150(&Var1, iParam0, iParam1, 0x0000001A);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x00000000:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0xFFFFFF9D, 0x00000000, 0x0000001F);
					break;
				
				case 0x00000001:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000088, 0x000000F1, 0xFFFFFF9D, 0x0000002F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000015, 0x0000001F);
					break;
				
				case 0x00000002:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000001, 0x00000060, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000007, 0x000000D7, 0x00000000);
					break;
				
				case 0x00000003:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x00000049, 0x000000F1, 0xFFFFFF9D, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000019, 0x00000001);
					break;
				
				case 0x00000004:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000058, 0x000000D9, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000021, 0x00000002);
					break;
				
				case 0x00000005:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000007, 0x00000062, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000007, 0x00000099, 0x00000003);
					break;
				
				case 0x00000006:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x0000008C, 0x000000F1, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x0000001F, 0x00000010, 0x00000004);
					break;
				
				case 0x00000007:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000008B, 0x00000070, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000031, 0x0000004E, 0x00000005);
					break;
				
				case 0x00000008:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000001, 0x000000C1, 0x00000030, 0xFFFFFF9D, 0x0000006C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000011, 0x00000006);
					break;
				
				case 0x00000009:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000072, 0x00000061, 0xFFFFFF9D, 0x00000067, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000062, 0x00000007);
					break;
				
				case 0x0000000A:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x00000086, 0x000000EF, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000090, 0x00000008);
					break;
				
				case 0x0000000B:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000098, 0x00000060, 0xFFFFFF9D, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x0000001F, 0x00000060, 0x00000009);
					break;
				
				case 0x0000000C:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000081, 0x00000001, 0xFFFFFF9D, 0x00000060, 0x00000000, 0x00000000, 0x00000000, 0x00000005, 0x00000078, 0x0000000A);
					break;
				
				case 0x0000000D:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000000, 0x00000000, 0xFFFFFF9D, 0x0000000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000082, 0x0000001F);
					break;
				
				case 0x0000000E:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000009F, 0x00000060, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000016, 0x000000D6, 0x0000000B);
					break;
				
				case 0x0000000F:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000009, 0x000000E8, 0x000000D5, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000016, 0x00000093, 0x0000000C);
					break;
				
				case 0x00000010:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000002, 0x00000008, 0x00000062, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000021, 0x00000027, 0x0000000D);
					break;
				
				case 0x00000011:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000096, 0x000000EB, 0xFFFFFF9D, 0x0000006A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000080, 0x0000000E);
					break;
				
				case 0x00000012:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000006, 0x00000060, 0x00000061, 0xFFFFFF9D, 0x00000007, 0x00000000, 0x00000000, 0x00000000, 0x00000020, 0x00000072, 0x0000000F);
					break;
				
				case 0x00000013:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000030, 0x00000040, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000059, 0x00000010);
					break;
				
				case 0x00000014:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x0000003E, 0x00000040, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000004E, 0x00000011);
					break;
				
				case 0x00000015:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000031, 0x00000041, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000008, 0x00000050, 0x0000001F);
					break;
				
				case 0x00000016:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000003, 0x00000014, 0x00000010, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000031, 0x00000012);
					break;
				
				case 0x00000017:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000000, 0x00000049, 0x000000B2, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000026, 0x0000000B, 0x00000013);
					break;
				
				case 0x00000018:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000005, 0x00000087, 0x00000035, 0xFFFFFF9D, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x0000001D, 0x0000001B, 0x00000014);
					break;
				
				case 0x00000019:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000007, 0x000000E9, 0x000000B0, 0xFFFFFF9D, 0x00000078, 0x00000000, 0x00000000, 0x00000000, 0x0000000B, 0x000000A0, 0x00000015);
					break;
				
				case 0x0000001A:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x00000004, 0x00000022, 0x000000B3, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0000004D, 0x00000016);
					break;
				
				case 0x0000001B:
					func_152(&Var1, 0xFFFFFF9D, 0xFFFFFF9D, 0x0000000F, 0x00000083, 0x0000005D, 0xFFFFFF9D, 0x00000020, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x000000FA, 0x00000017);
					break;
				
				default:
					func_150(&Var1, iParam0, iParam1, 0x0000001C);
					break;
			}
			break;
	}
	return Var1;
}

void func_150(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0x00000000] = 0x00000000;
	(*uParam0)[0x00000002] = 0xFFFFFF9D;
	(*uParam0)[0x00000003] = 0x00000000;
	(*uParam0)[0x00000004] = 0x00000000;
	(*uParam0)[0x00000006] = 0x00000000;
	(*uParam0)[0x00000005] = 0x00000000;
	(*uParam0)[0x00000008] = 0x00000000;
	(*uParam0)[0x00000009] = 0x00000000;
	(*uParam0)[0x0000000A] = 0x00000000;
	(*uParam0)[0x00000001] = 0x00000000;
	(*uParam0)[0x00000007] = 0x00000000;
	(*uParam0)[0x0000000B] = 0x00000000;
	(*uParam0)[0x0000000D] = 0xFFFFFF9D;
	(*uParam0)[0x0000000E] = 0xFFFFFF9D;
	uParam0->f_10 = 0x00000000;
	iVar0 = 0x00000000;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0x00000000;
		(*uParam0)[0x0000000D] = (0x0000000A + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 0x00000001;
		(*uParam0)[0x0000000D] = (0x00000009 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 0x00000002;
		(*uParam0)[0x0000000D] = (0x00000009 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 0x00000003;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 0x00000004;
	}
	unk_0x84997C8C8A5848DD(iVar0, 0x00000000);
	unk_0xA69F810DF7EA02E6((iParam2 - iParam3), &Var1);
	if (!unk_0x232048AB4B0E0259(Var1))
	{
		iVar4 = 0x00000000;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0xD00B813D5424DD2E(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0x00000000 && vVar2.x != 0xFFFFFFFF) && vVar2.x != 0x6E3C5C6B)
				{
					if (vVar2.z == 0x0000000A)
					{
						unk_0x65C0659496B1CC14(&Var3);
						unk_0xFDEBA3FD0BF0D4AC(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_10 = 0x00000001;
						}
					}
					if (vVar2.z == 0x0000000A && uParam0->f_10)
					{
						(*uParam0)[func_151(vVar2.z)] = vVar2.x;
						uParam0->f_10 = 0x00000001;
					}
					else
					{
						(*uParam0)[func_151(vVar2.z)] = func_144(iParam1, vVar2.x, func_151(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != 0xFFFFFFFF)
				{
					(*uParam0)[func_151(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0x00000000)
		{
			(*uParam0)[0x0000000D] = 0xFFFFFF9D;
		}
		else
		{
			(*uParam0)[0x0000000D] = Var1.f_1;
		}
	}
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000003;
			break;
		
		case 0x00000004:
			return 0x00000004;
			break;
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000009;
			break;
		
		case 0x0000000A:
			return 0x0000000A;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x0000000B:
			return 0x0000000B;
			break;
	}
	return 0x00000000;
}

void func_152(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0x00000000] = iParam1;
	(*uParam0)[0x00000002] = iParam2;
	(*uParam0)[0x00000003] = iParam3;
	(*uParam0)[0x00000004] = iParam4;
	(*uParam0)[0x00000006] = iParam5;
	(*uParam0)[0x00000005] = iParam6;
	(*uParam0)[0x00000008] = iParam7;
	(*uParam0)[0x00000009] = iParam8;
	(*uParam0)[0x0000000A] = iParam9;
	(*uParam0)[0x00000001] = iParam10;
	(*uParam0)[0x00000007] = iParam11;
	(*uParam0)[0x0000000B] = iParam12;
	(*uParam0)[0x0000000D] = iParam13;
	(*uParam0)[0x0000000E] = 0xFFFFFF9D;
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam2 == 0x00000010)
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0x0000000E:
					if ((iParam2 == 0x00000028 || (iParam2 >= 0x00000029 && iParam2 <= 0x00000038)) || (iParam2 >= 0x00000040 && iParam2 <= 0x0000004F))
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0x0000000E:
					if ((iParam2 >= 0x00000011 && iParam2 <= 0x00000012) || (iParam2 >= 0x00000047 && iParam2 <= 0x00000056))
					{
						return 0x00000001;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam2 >= 0x00000012 && iParam2 <= 0x00000082)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x0000000A && iParam2 <= 0x00000011)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x00000147)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_139(iParam0, iParam2, 0x0000000E, 0x00000003);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000001) || unk_0x1A5A491D253EA7BA(func_139(iParam0, iParam2, 0x0000000E, 0x00000003), 0x922AD66F, 0x00000001));
					}
					break;
				
				case 0x00000001:
					if (iParam2 >= 0x0000001A)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_139(iParam0, iParam2, 0x00000001, 0x00000003);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(func_139(iParam0, iParam2, 0x00000001, 0x00000003), 0x922AD66F, 0x00000000));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0x0000000E:
					if (iParam2 >= 0x00000012 && iParam2 <= 0x00000082)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x0000000A && iParam2 <= 0x00000011)
					{
						return 0x00000001;
					}
					else if (iParam2 >= 0x00000147)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_139(iParam0, iParam2, 0x0000000E, 0x00000004);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000001) || unk_0x1A5A491D253EA7BA(func_139(iParam0, iParam2, 0x0000000E, 0x00000004), 0x922AD66F, 0x00000001));
					}
					break;
				
				case 0x00000001:
					if (iParam2 >= 0x0000001A)
					{
						if (iParam3 == 0xFFFFFFFF)
						{
							iParam3 = func_139(iParam0, iParam2, 0x00000001, 0x00000004);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(func_139(iParam0, iParam2, 0x00000001, 0x00000004), 0x922AD66F, 0x00000000));
					}
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_154(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 0x00000006)
		{
			if (iParam2 == 0x0000000A)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000008)
		{
			if ((iParam2 == 0x00000009 || iParam2 == 0x00000007) || iParam2 == 0x00000017)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000009)
		{
			if (iParam2 >= 0x00000009 && iParam2 <= 0x0000000E)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x0000000E)
		{
			if ((((((((((((((((iParam2 == 0x0000000C || iParam2 == 0x0000003B) || iParam2 == 0x0000003C) || iParam2 == 0x0000001F) || iParam2 == 0x00000020) || iParam2 == 0x00000021) || iParam2 == 0x00000022) || iParam2 == 0x00000023) || iParam2 == 0x00000024) || iParam2 == 0x00000025) || iParam2 == 0x00000026) || iParam2 == 0x00000027) || iParam2 == 0x00000028) || iParam2 == 0x00000029) || (iParam2 >= 0x0000002A && iParam2 <= 0x0000002C)) || iParam2 == 0x00000036) || iParam2 == 0x00000037)
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 0x00000002)
		{
			if (iParam2 == 0x00000014)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000008)
		{
			if ((iParam2 == 0x00000003 || iParam2 == 0x00000005) || iParam2 == 0x00000009)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000009)
		{
			if (iParam2 >= 0x00000005 && iParam2 <= 0x0000000A)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x0000000E)
		{
			if (((((((((((((iParam2 == 0x00000052 || iParam2 == 0x0000000A) || iParam2 == 0x0000001A) || iParam2 == 0x0000001B) || iParam2 == 0x0000001C) || iParam2 == 0x0000001D) || iParam2 == 0x0000001E) || iParam2 == 0x0000001F) || iParam2 == 0x00000020) || iParam2 == 0x00000021) || iParam2 == 0x00000022) || iParam2 == 0x00000023) || iParam2 == 0x00000024) || (iParam2 >= 0x00000025 && iParam2 <= 0x00000027))
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 0x00000008)
		{
			if (iParam2 == 0x0000000E || iParam2 == 0x00000007)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x00000009)
		{
			if (((iParam2 == 0x00000008 || (iParam2 >= 0x00000009 && iParam2 <= 0x0000000E)) || iParam2 == 0x0000000F) || iParam2 == 0x00000010)
			{
				return 0x00000001;
			}
		}
		else if (iParam1 == 0x0000000E)
		{
			if (((((((((((((iParam2 == 0x00000058 || iParam2 == 0x0000000C) || iParam2 == 0x0000002F) || iParam2 == 0x00000030) || iParam2 == 0x00000031) || iParam2 == 0x00000032) || iParam2 == 0x00000033) || iParam2 == 0x00000034) || iParam2 == 0x00000035) || iParam2 == 0x00000036) || iParam2 == 0x00000037) || iParam2 == 0x00000038) || iParam2 == 0x00000039) || (iParam2 >= 0x0000003A && iParam2 <= 0x0000003C))
			{
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 0x00000001)
		{
			if (iParam2 > 0x00000000)
			{
				if (iParam2 >= 0x0000001A)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_139(iParam0, iParam2, 0x00000001, 0x00000003);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(iParam3, 0x03F07F4C, 0x00000000))
					{
						return 0x00000000;
					}
				}
				return 0x00000001;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 0x00000001)
		{
			if (iParam2 > 0x00000000)
			{
				if (iParam2 >= 0x0000001A)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_139(iParam0, iParam2, 0x00000001, 0x00000004);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, 0x973DE809, 0x00000000) || unk_0x1A5A491D253EA7BA(iParam3, 0x03F07F4C, 0x00000000))
					{
						return 0x00000000;
					}
				}
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_155(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 0x0000000E)
			{
				if ((((((((iParam2 == 0x0000003A || iParam2 == 0x0000003D) || (iParam2 >= 0x0000003E && iParam2 <= 0x00000045)) || (iParam2 >= 0x00000046 && iParam2 <= 0x0000004F)) || (iParam2 >= 0x00000050 && iParam2 <= 0x00000059)) || iParam2 == 0x0000005A) || (iParam2 >= 0x0000005B && iParam2 <= 0x00000066)) || (iParam2 >= 0x00000067 && iParam2 <= 0x0000006E)) || iParam2 == 0x0000006F)
				{
					return 0x00000001;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 0x0000000E)
			{
				if (((((((((((iParam2 >= 0x00000053 && iParam2 <= 0x0000005C) || iParam2 == 0x0000005D) || iParam2 == 0x0000005E) || (iParam2 >= 0x0000005F && iParam2 <= 0x00000065)) || (iParam2 >= 0x00000066 && iParam2 <= 0x0000006F)) || (iParam2 >= 0x00000070 && iParam2 <= 0x00000079)) || (iParam2 >= 0x0000007A && iParam2 <= 0x00000083)) || (iParam2 >= 0x00000084 && iParam2 <= 0x0000008B)) || (iParam2 >= 0x0000008C && iParam2 <= 0x00000095)) || (iParam2 >= 0x00000096 && iParam2 <= 0x0000009C)) || iParam2 == 0x0000009D)
				{
					return 0x00000001;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 0x0000000E)
			{
				if (((((((((iParam2 == 0x00000059 || (iParam2 >= 0x0000005A && iParam2 <= 0x00000063)) || (iParam2 >= 0x00000064 && iParam2 <= 0x0000006D)) || iParam2 == 0x0000006F) || iParam2 == 0x00000070) || (iParam2 >= 0x00000071 && iParam2 <= 0x0000007A)) || (iParam2 >= 0x0000007B && iParam2 <= 0x00000084)) || (iParam2 >= 0x00000085 && iParam2 <= 0x0000008E)) || (iParam2 >= 0x0000008F && iParam2 <= 0x00000098)) || iParam2 == 0x00000099)
				{
					return 0x00000001;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 0x0000000E)
			{
				if (iParam2 >= 0x0000009B && iParam2 <= 0x0000013E)
				{
					return 0x00000001;
				}
				else if (iParam2 >= 0x00000147)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_139(iParam0, iParam2, 0x0000000E, 0x00000003);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 0x05CB9F45, 0x00000001);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 0x0000000E)
			{
				if (iParam2 >= 0x0000009B && iParam2 <= 0x0000013E)
				{
					return 0x00000001;
				}
				else if (iParam2 >= 0x00000147)
				{
					if (iParam3 == 0xFFFFFFFF)
					{
						iParam3 = func_139(iParam0, iParam2, 0x0000000E, 0x00000004);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 0x05CB9F45, 0x00000001);
				}
			}
			break;
	}
	return 0x00000000;
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0xFFFFFF9D;
	}
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
	if (iVar0 == 0xFFFFFFFF)
	{
		return func_145(iParam1);
	}
	iVar1 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	return func_142(iParam0, iVar0, iVar1, iParam1);
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 0x0000000C || iParam1 == 0x0000000D) || iParam1 == 0x0000000E) || unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0xFFFFFF9D;
	}
	iVar0 = func_127(iParam1);
	iVar1 = unk_0x36C584991B4C183F(iParam0, iVar0);
	iVar2 = unk_0xDADA8E1DD0D0D9D9(iParam0, iVar0);
	return func_158(iParam0, iVar1, iVar2, iParam1);
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_127(iParam3);
	iVar1 = unk_0xD2C792E5A65B6BF1(iParam0, iVar0);
	iVar3 = 0x00000000;
	while (iVar3 <= (iVar1 - 0x00000001))
	{
		iVar5 = unk_0x0F84621831DD8D8A(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0x00000000;
			while (iVar4 <= (iVar5 - 0x00000001))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return 0xFFFFFF9D;
}

void func_159(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000001) && !unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000006))
	{
		func_162(iParam0, Global_12A92[0x00000001 /*14*/].f_5, Global_12A92[0x00000001 /*14*/].f_2, 0x00000002, Global_12A92[0x00000001 /*14*/].f_1, 0x00000001, 0x00000000);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000001) && unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000006))
	{
		if (iParam0 == 0x0000000C)
		{
			func_160(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF);
		}
		else if (iParam0 == 0x0000000D)
		{
		}
		else if (iParam0 == 0x0000000E)
		{
			func_160(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF);
		}
		else
		{
			func_160(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF);
		}
	}
}

void func_160(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_12A8F;
	if (iParam4 != 0xFFFFFFFF)
	{
		iVar0 = iParam4;
	}
	if (func_161(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_67(iVar2, iVar0, 0x00000000);
		unk_0x5D96D8530B3D0904(&iVar3, iVar1);
		func_63(iVar2, iVar3, iVar0, 0x00000001, 0x00000000);
	}
}

bool func_161(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 0x00002CF7;
	if ((bParam4 && Global_411C56) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 0x00000001:
				switch (iParam0)
				{
					case 0x008797C4:
					case 0xC6349B1D:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x6EBBF42F:
					case 0xB896FFDE:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x20EF5893:
					case 0xA0D0D052:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0x1397BDE4:
					case 0x7CC88842:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0x4731251E:
					case 0x6F12ECD7:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0x42051AC6:
					case 0x5999C1E5:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0x6BC2EE41:
					case 0x4B4F2550:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0x56A1C3FF:
					case 0x2C6A6783:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
					
					case 0xC0235F73:
					case 0xAD93CC80:
					case 0x16FF0A8E:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000000;
						return 0x00000001;
						break;
					
					case 0xCE57FBDC:
					case 0x98CDA2F4:
					case 0x2841AD13:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000001;
						return 0x00000001;
						break;
					
					case 0x928E844A:
					case 0x8B23079F:
					case 0xF1CC4021:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000002;
						return 0x00000001;
						break;
					
					case 0xA0BA20A1:
					case 0x08C582E6:
					case 0x0409E49C:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000003;
						return 0x00000001;
						break;
					
					case 0x075EEDE1:
					case 0xFA7AE651:
					case 0xE0079C98:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000004;
						return 0x00000001;
						break;
					
					case 0x13BA0697:
					case 0xF649DDEF:
					case 0xF13E3F05:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000005;
						return 0x00000001;
						break;
					
					case 0xF77E4E20:
					case 0x633F37DC:
					case 0xCD0C76A2:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000007;
						return 0x00000001;
						break;
					
					case 0x4CEE78FF:
					case 0x3C60EA1C:
					case 0xA9142EB2:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x00000008;
						return 0x00000001;
						break;
					
					case 0x7AC28546:
					case 0x379D8CB2:
					case 0xA9497954:
						*uParam2 = 0x000003A7;
						*uParam3 = 0x0000000B;
						return 0x00000001;
						break;
				}
				break;
			
			case 0x00000002:
				switch (iParam0)
				{
					case 0x008797C4:
					case 0xC6349B1D:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x6EBBF42F:
					case 0xB896FFDE:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x20EF5893:
					case 0xA0D0D052:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0x1397BDE4:
					case 0x7CC88842:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0x4731251E:
					case 0x6F12ECD7:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0x42051AC6:
					case 0x5999C1E5:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0x6BC2EE41:
					case 0x4B4F2550:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0x56A1C3FF:
					case 0x2C6A6783:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000001:
				switch (iParam0)
				{
					case 0x94F6A649:
					case 0xE9683434:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x62A6C1AA:
					case 0x1C2A99B8:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x8BAC93B9:
					case 0x08C772F2:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0xA173BF47:
					case 0x3D45DBEE:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0xA8404CE0:
					case 0x2EFB3F59:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0xBD787750:
					case 0x4FC280E7:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0xC2AC01B7:
					case 0x4150E404:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0xD8FD2E59:
					case 0x896EF43F:
						*uParam2 = 0x000003CB;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
			
			case 0x00000002:
				switch (iParam0)
				{
					case 0x94F6A649:
					case 0xE9683434:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000013;
						return 0x00000001;
						break;
					
					case 0x62A6C1AA:
					case 0x1C2A99B8:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000014;
						return 0x00000001;
						break;
					
					case 0x8BAC93B9:
					case 0x08C772F2:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000015;
						return 0x00000001;
						break;
					
					case 0xA173BF47:
					case 0x3D45DBEE:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000016;
						return 0x00000001;
						break;
					
					case 0xA8404CE0:
					case 0x2EFB3F59:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000017;
						return 0x00000001;
						break;
					
					case 0xBD787750:
					case 0x4FC280E7:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000018;
						return 0x00000001;
						break;
					
					case 0xC2AC01B7:
					case 0x4150E404:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x00000019;
						return 0x00000001;
						break;
					
					case 0xD8FD2E59:
					case 0x896EF43F:
						*uParam2 = 0x000003FF;
						*uParam3 = 0x0000001A;
						return 0x00000001;
						break;
				}
				break;
			}
	}
	iVar0 = 0xFFFFFFFF;
	if (bParam4)
	{
		if (Global_411C56)
		{
			iVar0 = unk_0xFAB100617491B764(iParam0);
		}
		else
		{
			iVar0 = unk_0xCE50BA51F0598785(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xFAB100617491B764(iParam0);
	}
	else
	{
		iVar0 = unk_0xCE50BA51F0598785(iParam0);
	}
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	switch (iParam1)
	{
		case 0x00000001:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000000:
					*uParam2 = 0x000006DF;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000006E0;
					break;
				
				case 0x00000002:
					*uParam2 = 0x000006E1;
					break;
				
				case 0x00000003:
					*uParam2 = 0x000006E2;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000006E3;
					break;
				
				case 0x00000005:
					*uParam2 = 0x000006E4;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000006EB;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000006EC;
					break;
				
				case 0x00000008:
					*uParam2 = 0x000006ED;
					break;
				
				case 0x00000009:
					*uParam2 = 0x000006EE;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000006EF;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000006F0;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x000006F1;
					break;
				
				case 0x0000000D:
					*uParam2 = 0x000006F9;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000006FA;
					break;
				
				case 0x0000000F:
					*uParam2 = 0x0000075F;
					break;
				
				case 0x00000010:
					*uParam2 = 0x00000760;
					break;
				
				case 0x00000011:
					*uParam2 = 0x0000077F;
					break;
				
				case 0x00000012:
					*uParam2 = 0x0000078D;
					break;
				
				case 0x00000013:
					*uParam2 = 0x0000078E;
					break;
				
				case 0x00000014:
					*uParam2 = 0x0000078F;
					break;
				
				case 0x00000015:
					*uParam2 = 0x00000790;
					break;
				
				case 0x00000016:
					*uParam2 = 0x00000791;
					break;
				
				case 0x00000017:
					*uParam2 = 0x000007F9;
					break;
				
				case 0x00000018:
					*uParam2 = 0x000007FA;
					break;
				
				case 0x00000019:
					*uParam2 = 0x00000814;
					break;
				
				case 0x0000001A:
					*uParam2 = 0x00000815;
					break;
				
				case 0x0000001B:
					*uParam2 = 0x00000816;
					break;
				
				case 0x0000001C:
					*uParam2 = 0x00000817;
					break;
				
				case 0x0000001D:
					*uParam2 = 0x00000818;
					break;
				
				case 0x0000001E:
					*uParam2 = 0x00000819;
					break;
				
				case 0x0000001F:
					*uParam2 = 0x0000081A;
					break;
				
				case 0x00000020:
					*uParam2 = 0x0000081B;
					break;
				
				case 0x00000021:
					*uParam2 = 0x0000081C;
					break;
				
				case 0x00000022:
					*uParam2 = 0x0000081D;
					break;
				
				case 0x00000023:
					*uParam2 = 0x00000914;
					break;
				
				case 0x00000024:
					*uParam2 = 0x00000915;
					break;
				
				case 0x00000025:
					*uParam2 = 0x00000955;
					break;
				
				case 0x00000026:
					*uParam2 = 0x00000956;
					break;
				
				case 0x00000027:
					*uParam2 = 0x00000957;
					break;
				
				case 0x00000028:
					*uParam2 = 0x00000958;
					break;
				
				case 0x00000029:
					*uParam2 = 0x00000993;
					break;
				
				case 0x0000002A:
					*uParam2 = 0x00000994;
					break;
				
				case 0x0000002B:
					*uParam2 = 0x00000995;
					break;
				
				case 0x0000002C:
					*uParam2 = 0x00000996;
					break;
				
				case 0x0000002D:
					*uParam2 = 0x00000997;
					break;
				
				case 0x0000002E:
					*uParam2 = 0x00000998;
					break;
				
				case 0x0000002F:
					*uParam2 = 0x00000999;
					break;
				
				case 0x00000030:
					*uParam2 = 0x0000099A;
					break;
				
				case 0x00000031:
					*uParam2 = 0x0000099B;
					break;
				
				case 0x00000032:
					*uParam2 = 0x0000099C;
					break;
				
				case 0x00000033:
					*uParam2 = 0x00000A1D;
					break;
				
				case 0x00000034:
					*uParam2 = 0x00000A1E;
					break;
				
				case 0x00000035:
					*uParam2 = 0x00000A1F;
					break;
				
				case 0x00000036:
					*uParam2 = 0x00000A20;
					break;
				
				case 0x00000037:
					*uParam2 = 0x00000A21;
					break;
				
				case 0x00000038:
					*uParam2 = 0x00000A22;
					break;
				
				case 0x00000039:
					*uParam2 = 0x00000A23;
					break;
				
				case 0x0000003A:
					*uParam2 = 0x00000A24;
					break;
				
				case 0x0000003B:
					*uParam2 = 0x00000A25;
					break;
				
				case 0x0000003C:
					*uParam2 = 0x00000A26;
					break;
				
				case 0x0000003D:
					*uParam2 = 0x00000A27;
					break;
				
				case 0x0000003E:
					*uParam2 = 0x00000C7C;
					break;
				
				case 0x0000003F:
					*uParam2 = 0x00000C7D;
					break;
				
				case 0x00000040:
					*uParam2 = 0x00000C7E;
					break;
				
				case 0x00000041:
					*uParam2 = 0x00000C7F;
					break;
				
				case 0x00000042:
					*uParam2 = 0x00000C80;
					break;
				
				case 0x00000043:
					*uParam2 = 0x00000C81;
					break;
				
				case 0x00000044:
					*uParam2 = 0x00000E55;
					break;
				
				case 0x00000045:
					*uParam2 = 0x00000E56;
					break;
				
				case 0x00000046:
					*uParam2 = 0x00000E57;
					break;
				
				case 0x00000047:
					*uParam2 = 0x00000E58;
					break;
				
				case 0x00000048:
					*uParam2 = 0x00000E59;
					break;
				
				case 0x00000049:
					*uParam2 = 0x00000E5A;
					break;
				
				case 0x0000004A:
					*uParam2 = 0x00000E5B;
					break;
				
				case 0x0000004B:
					*uParam2 = 0x00000E5C;
					break;
				
				case 0x0000004C:
					*uParam2 = 0x00000E5D;
					break;
				
				case 0x0000004D:
					*uParam2 = 0x00000E5E;
					break;
				
				case 0x0000004E:
					*uParam2 = 0x00000ED0;
					break;
				
				case 0x0000004F:
					*uParam2 = 0x00000ED1;
					break;
				
				case 0x00000050:
					*uParam2 = 0x00000ED2;
					break;
				
				case 0x00000051:
					*uParam2 = 0x00000ED3;
					break;
				
				case 0x00000052:
					*uParam2 = 0x00000ED4;
					break;
				
				case 0x00000053:
					*uParam2 = 0x00000ED5;
					break;
				
				case 0x00000054:
					*uParam2 = 0x00000ED6;
					break;
				
				case 0x00000055:
					*uParam2 = 0x00000ED7;
					break;
				
				case 0x00000056:
					*uParam2 = 0x00000F3E;
					break;
				
				case 0x00000057:
					*uParam2 = 0x00000F3F;
					break;
				
				case 0x00000058:
					*uParam2 = 0x00000F40;
					break;
				
				case 0x00000059:
					*uParam2 = 0x000014D9;
					break;
				
				case 0x0000005A:
					*uParam2 = 0x000014DA;
					break;
				
				case 0x0000005B:
					*uParam2 = 0x000014DB;
					break;
				
				case 0x0000005C:
					*uParam2 = 0x000014DC;
					break;
				
				case 0x0000005D:
					*uParam2 = 0x000014DD;
					break;
				
				case 0x0000005E:
					*uParam2 = 0x000014DE;
					break;
				
				case 0x0000005F:
					*uParam2 = 0x000014DF;
					break;
				
				case 0x00000060:
					*uParam2 = 0x000014E0;
					break;
				
				case 0x00000061:
					*uParam2 = 0x000014E1;
					break;
				
				case 0x00000062:
					*uParam2 = 0x000014E2;
					break;
				
				case 0x00000063:
					*uParam2 = 0x000014E3;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000064:
					*uParam2 = 0x000014E4;
					break;
				
				case 0x00000065:
					*uParam2 = 0x00001512;
					break;
				
				case 0x00000066:
					*uParam2 = 0x00001513;
					break;
				
				case 0x00000067:
					*uParam2 = 0x00001514;
					break;
				
				case 0x00000068:
					*uParam2 = 0x00001515;
					break;
				
				case 0x00000069:
					*uParam2 = 0x00001516;
					break;
				
				case 0x0000006A:
					*uParam2 = 0x00001517;
					break;
				
				case 0x0000006B:
					*uParam2 = 0x00001518;
					break;
				
				case 0x0000006C:
					*uParam2 = 0x00001519;
					break;
				
				case 0x0000006D:
					*uParam2 = 0x0000151A;
					break;
				
				case 0x0000006E:
					*uParam2 = 0x0000151B;
					break;
				
				case 0x0000006F:
					*uParam2 = 0x0000151C;
					break;
				
				case 0x00000070:
					*uParam2 = 0x0000151D;
					break;
				
				case 0x00000071:
					*uParam2 = 0x0000151E;
					break;
				
				case 0x00000072:
					*uParam2 = 0x0000151F;
					break;
				
				case 0x00000073:
					*uParam2 = 0x00001520;
					break;
				
				case 0x00000074:
					*uParam2 = 0x00001521;
					break;
				
				case 0x00000075:
					*uParam2 = 0x00001522;
					break;
				
				case 0x00000076:
					*uParam2 = 0x00001523;
					break;
				
				case 0x00000077:
					*uParam2 = 0x00001524;
					break;
				
				case 0x00000078:
					*uParam2 = 0x00001525;
					break;
				
				case 0x00000079:
					*uParam2 = 0x00001526;
					break;
				
				case 0x0000007A:
					*uParam2 = 0x00001527;
					break;
				
				case 0x0000007B:
					*uParam2 = 0x00001528;
					break;
				
				case 0x0000007C:
					*uParam2 = 0x000017EA;
					break;
				
				case 0x0000007D:
					*uParam2 = 0x000017EB;
					break;
				
				case 0x0000007E:
					*uParam2 = 0x000017EC;
					break;
				
				case 0x0000007F:
					*uParam2 = 0x000017ED;
					break;
				
				case 0x00000080:
					*uParam2 = 0x000017EE;
					break;
				
				case 0x00000081:
					*uParam2 = 0x000017EF;
					break;
				
				case 0x00000082:
					*uParam2 = 0x000017F0;
					break;
				
				case 0x00000083:
					*uParam2 = 0x000017F1;
					break;
				
				case 0x00000084:
					*uParam2 = 0x000017F2;
					break;
				
				case 0x00000085:
					*uParam2 = 0x000017F3;
					break;
				
				case 0x00000086:
					*uParam2 = 0x000017F4;
					break;
				
				case 0x00000087:
					*uParam2 = 0x000017F5;
					break;
				
				case 0x00000088:
					*uParam2 = 0x000017F6;
					break;
				
				case 0x00000089:
					*uParam2 = 0x000017F7;
					break;
				
				case 0x0000008A:
					*uParam2 = 0x000017F8;
					break;
				
				case 0x0000008B:
					*uParam2 = 0x00001923;
					break;
				
				case 0x0000008C:
					*uParam2 = 0x00001924;
					break;
				
				case 0x0000008D:
					*uParam2 = 0x00001925;
					break;
				
				case 0x0000008E:
					*uParam2 = 0x00001926;
					break;
				
				case 0x0000008F:
					*uParam2 = 0x00001927;
					break;
				
				case 0x00000090:
					*uParam2 = 0x00001928;
					break;
				
				case 0x00000091:
					*uParam2 = 0x00001929;
					break;
				
				case 0x00000092:
					*uParam2 = 0x0000192A;
					break;
				
				case 0x00000093:
					*uParam2 = 0x0000192B;
					break;
				
				case 0x00000094:
					*uParam2 = 0x0000192C;
					break;
				
				case 0x00000095:
					*uParam2 = 0x0000192D;
					break;
				
				case 0x00000096:
					*uParam2 = 0x0000192E;
					break;
				
				case 0x00000097:
					*uParam2 = 0x0000192F;
					break;
				
				case 0x00000098:
					*uParam2 = 0x00001930;
					break;
				
				case 0x00000099:
					*uParam2 = 0x00001931;
					break;
				
				case 0x0000009A:
					*uParam2 = 0x00001C62;
					break;
				
				case 0x0000009B:
					*uParam2 = 0x00001C63;
					break;
				
				case 0x0000009C:
					*uParam2 = 0x00001C64;
					break;
				
				case 0x0000009D:
					*uParam2 = 0x00001C65;
					break;
				
				case 0x0000009E:
					*uParam2 = 0x00001C66;
					break;
				
				case 0x0000009F:
					*uParam2 = 0x00001C67;
					break;
				
				case 0x000000A0:
					*uParam2 = 0x00001C68;
					break;
				
				case 0x000000A1:
					*uParam2 = 0x00001EC7;
					break;
				
				case 0x000000A2:
					*uParam2 = 0x00001EC8;
					break;
				
				case 0x000000A3:
					*uParam2 = 0x00001EC9;
					break;
				
				case 0x000000A4:
					*uParam2 = 0x00001ECA;
					break;
				
				case 0x000000A5:
					*uParam2 = 0x00001ECB;
					break;
				
				case 0x000000A6:
					*uParam2 = 0x00001ECC;
					break;
				
				case 0x000000A7:
					*uParam2 = 0x00001ECD;
					break;
				
				case 0x000000A8:
					*uParam2 = 0x00001ECE;
					break;
				
				case 0x000000A9:
					*uParam2 = 0x00001ECF;
					break;
				
				case 0x000000AA:
					*uParam2 = 0x00001ED0;
					break;
				
				case 0x000000AB:
					*uParam2 = 0x00001ED1;
					break;
				
				case 0x000000AC:
					*uParam2 = 0x00001ED2;
					break;
				
				case 0x000000AD:
					*uParam2 = 0x00001ED3;
					break;
				
				case 0x000000AE:
					*uParam2 = 0x00001ED4;
					break;
				
				case 0x000000AF:
					*uParam2 = 0x00001ED5;
					break;
				
				case 0x000000B0:
					*uParam2 = 0x0000206B;
					break;
				
				case 0x000000B1:
					*uParam2 = 0x0000206C;
					break;
				
				case 0x000000B2:
					*uParam2 = 0x0000206D;
					break;
				
				case 0x000000B3:
					*uParam2 = 0x0000206E;
					break;
				
				case 0x000000B4:
					*uParam2 = 0x0000206F;
					break;
				
				case 0x000000B5:
					*uParam2 = 0x00002070;
					break;
				
				case 0x000000B6:
					*uParam2 = 0x00002071;
					break;
				
				case 0x000000B7:
					*uParam2 = 0x00002072;
					break;
				
				case 0x000000B8:
					*uParam2 = 0x00002073;
					break;
				
				case 0x000000B9:
					*uParam2 = 0x00002074;
					break;
				
				case 0x000000BA:
					*uParam2 = 0x00002075;
					break;
				
				case 0x000000BB:
					*uParam2 = 0x00002076;
					break;
				
				case 0x000000BC:
					*uParam2 = 0x00002077;
					break;
				
				case 0x000000BD:
					*uParam2 = 0x00002078;
					break;
				
				case 0x000000BE:
					*uParam2 = 0x00002079;
					break;
				
				case 0x000000BF:
					*uParam2 = 0x0000207A;
					break;
				
				case 0x000000C0:
					*uParam2 = 0x0000207B;
					break;
				
				case 0x000000C1:
					*uParam2 = 0x0000207C;
					break;
				
				case 0x000000C2:
					*uParam2 = 0x0000207D;
					break;
				
				case 0x000000C3:
					*uParam2 = 0x0000207E;
					break;
				
				case 0x000000C4:
					*uParam2 = 0x0000207F;
					break;
				
				case 0x000000C5:
					*uParam2 = 0x00002080;
					break;
				
				case 0x000000C6:
					*uParam2 = 0x00002081;
					break;
				
				case 0x000000C7:
					*uParam2 = 0x00002082;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x000000C8:
					*uParam2 = 0x00002083;
					break;
				
				case 0x000000C9:
					*uParam2 = 0x000022E8;
					break;
				
				case 0x000000CA:
					*uParam2 = 0x000022E9;
					break;
				
				case 0x000000CB:
					*uParam2 = 0x000022EA;
					break;
				
				case 0x000000CC:
					*uParam2 = 0x000022EB;
					break;
				
				case 0x000000CD:
					*uParam2 = 0x000022EC;
					break;
				
				case 0x000000CE:
					*uParam2 = 0x000024CB;
					break;
				
				case 0x000000CF:
					*uParam2 = 0x000024CC;
					break;
				
				case 0x000000D0:
					*uParam2 = 0x000024CD;
					break;
				
				case 0x000000D1:
					*uParam2 = 0x000024CE;
					break;
				
				case 0x000000D2:
					*uParam2 = 0x000024CF;
					break;
				
				case 0x000000D3:
					*uParam2 = 0x000024D0;
					break;
				
				case 0x000000D4:
					*uParam2 = 0x000024D1;
					break;
				
				case 0x000000D5:
					*uParam2 = 0x000024D2;
					break;
				
				case 0x000000D6:
					*uParam2 = 0x000024D3;
					break;
				
				case 0x000000D7:
					*uParam2 = 0x000024D4;
					break;
				
				case 0x000000D8:
					*uParam2 = 0x000024D5;
					break;
				
				case 0x000000D9:
					*uParam2 = 0x000024D6;
					break;
				
				case 0x000000DA:
					*uParam2 = 0x000024D7;
					break;
				
				case 0x000000DB:
					*uParam2 = 0x000024D8;
					break;
				
				case 0x000000DC:
					*uParam2 = 0x000024D9;
					break;
				
				case 0x000000DD:
					*uParam2 = 0x000024DA;
					break;
				
				case 0x000000DE:
					*uParam2 = 0x000024DB;
					break;
				
				case 0x000000DF:
					*uParam2 = 0x000024DC;
					break;
				
				case 0x000000E0:
					*uParam2 = 0x000024DD;
					break;
				
				case 0x000000E1:
					*uParam2 = 0x000024DE;
					break;
				
				case 0x000000E2:
					*uParam2 = 0x000024DF;
					break;
				
				case 0x000000E3:
					*uParam2 = 0x000024E0;
					break;
				
				case 0x000000E4:
					*uParam2 = 0x000024E1;
					break;
				
				case 0x000000E5:
					*uParam2 = 0x000024E2;
					break;
				
				case 0x000000E6:
					*uParam2 = 0x000024E3;
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000002:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000000:
					*uParam2 = 0x000006E5;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000006E6;
					break;
				
				case 0x00000002:
					*uParam2 = 0x000006E7;
					break;
				
				case 0x00000003:
					*uParam2 = 0x000006E8;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000006E9;
					break;
				
				case 0x00000005:
					*uParam2 = 0x000006EA;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000006F2;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000006F3;
					break;
				
				case 0x00000008:
					*uParam2 = 0x000006F4;
					break;
				
				case 0x00000009:
					*uParam2 = 0x000006F5;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000006F6;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000006F7;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x000006F8;
					break;
				
				case 0x0000000D:
					*uParam2 = 0x000006FB;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000006FC;
					break;
				
				case 0x0000000F:
					*uParam2 = 0x00000761;
					break;
				
				case 0x00000010:
					*uParam2 = 0x00000762;
					break;
				
				case 0x00000011:
					*uParam2 = 0x00000780;
					break;
				
				case 0x00000012:
					*uParam2 = 0x00000792;
					break;
				
				case 0x00000013:
					*uParam2 = 0x00000793;
					break;
				
				case 0x00000014:
					*uParam2 = 0x00000794;
					break;
				
				case 0x00000015:
					*uParam2 = 0x00000795;
					break;
				
				case 0x00000016:
					*uParam2 = 0x00000796;
					break;
				
				case 0x00000017:
					*uParam2 = 0x000007FB;
					break;
				
				case 0x00000018:
					*uParam2 = 0x000007FC;
					break;
				
				case 0x00000019:
					*uParam2 = 0x0000081E;
					break;
				
				case 0x0000001A:
					*uParam2 = 0x0000081F;
					break;
				
				case 0x0000001B:
					*uParam2 = 0x00000820;
					break;
				
				case 0x0000001C:
					*uParam2 = 0x00000821;
					break;
				
				case 0x0000001D:
					*uParam2 = 0x00000822;
					break;
				
				case 0x0000001E:
					*uParam2 = 0x00000823;
					break;
				
				case 0x0000001F:
					*uParam2 = 0x00000824;
					break;
				
				case 0x00000020:
					*uParam2 = 0x00000825;
					break;
				
				case 0x00000021:
					*uParam2 = 0x00000826;
					break;
				
				case 0x00000022:
					*uParam2 = 0x00000827;
					break;
				
				case 0x00000023:
					*uParam2 = 0x00000916;
					break;
				
				case 0x00000024:
					*uParam2 = 0x00000917;
					break;
				
				case 0x00000025:
					*uParam2 = 0x00000959;
					break;
				
				case 0x00000026:
					*uParam2 = 0x0000095A;
					break;
				
				case 0x00000027:
					*uParam2 = 0x0000095B;
					break;
				
				case 0x00000028:
					*uParam2 = 0x0000095C;
					break;
				
				case 0x00000029:
					*uParam2 = 0x0000099D;
					break;
				
				case 0x0000002A:
					*uParam2 = 0x0000099E;
					break;
				
				case 0x0000002B:
					*uParam2 = 0x0000099F;
					break;
				
				case 0x0000002C:
					*uParam2 = 0x000009A0;
					break;
				
				case 0x0000002D:
					*uParam2 = 0x000009A1;
					break;
				
				case 0x0000002E:
					*uParam2 = 0x000009A2;
					break;
				
				case 0x0000002F:
					*uParam2 = 0x000009A3;
					break;
				
				case 0x00000030:
					*uParam2 = 0x000009A4;
					break;
				
				case 0x00000031:
					*uParam2 = 0x000009A5;
					break;
				
				case 0x00000032:
					*uParam2 = 0x000009A6;
					break;
				
				case 0x00000033:
					*uParam2 = 0x00000A28;
					break;
				
				case 0x00000034:
					*uParam2 = 0x00000A29;
					break;
				
				case 0x00000035:
					*uParam2 = 0x00000A2A;
					break;
				
				case 0x00000036:
					*uParam2 = 0x00000A2B;
					break;
				
				case 0x00000037:
					*uParam2 = 0x00000A2C;
					break;
				
				case 0x00000038:
					*uParam2 = 0x00000A2D;
					break;
				
				case 0x00000039:
					*uParam2 = 0x00000A2E;
					break;
				
				case 0x0000003A:
					*uParam2 = 0x00000A2F;
					break;
				
				case 0x0000003B:
					*uParam2 = 0x00000A30;
					break;
				
				case 0x0000003C:
					*uParam2 = 0x00000A31;
					break;
				
				case 0x0000003D:
					*uParam2 = 0x00000A32;
					break;
				
				case 0x0000003E:
					*uParam2 = 0x00000C82;
					break;
				
				case 0x0000003F:
					*uParam2 = 0x00000C83;
					break;
				
				case 0x00000040:
					*uParam2 = 0x00000C84;
					break;
				
				case 0x00000041:
					*uParam2 = 0x00000C85;
					break;
				
				case 0x00000042:
					*uParam2 = 0x00000C86;
					break;
				
				case 0x00000043:
					*uParam2 = 0x00000C87;
					break;
				
				case 0x00000044:
					*uParam2 = 0x00000E5F;
					break;
				
				case 0x00000045:
					*uParam2 = 0x00000E60;
					break;
				
				case 0x00000046:
					*uParam2 = 0x00000E61;
					break;
				
				case 0x00000047:
					*uParam2 = 0x00000E62;
					break;
				
				case 0x00000048:
					*uParam2 = 0x00000E63;
					break;
				
				case 0x00000049:
					*uParam2 = 0x00000E64;
					break;
				
				case 0x0000004A:
					*uParam2 = 0x00000E65;
					break;
				
				case 0x0000004B:
					*uParam2 = 0x00000E66;
					break;
				
				case 0x0000004C:
					*uParam2 = 0x00000E67;
					break;
				
				case 0x0000004D:
					*uParam2 = 0x00000E68;
					break;
				
				case 0x0000004E:
					*uParam2 = 0x00000ED8;
					break;
				
				case 0x0000004F:
					*uParam2 = 0x00000ED9;
					break;
				
				case 0x00000050:
					*uParam2 = 0x00000EDA;
					break;
				
				case 0x00000051:
					*uParam2 = 0x00000EDB;
					break;
				
				case 0x00000052:
					*uParam2 = 0x00000EDC;
					break;
				
				case 0x00000053:
					*uParam2 = 0x00000EDD;
					break;
				
				case 0x00000054:
					*uParam2 = 0x00000EDE;
					break;
				
				case 0x00000055:
					*uParam2 = 0x00000EDF;
					break;
				
				case 0x00000056:
					*uParam2 = 0x00000F41;
					break;
				
				case 0x00000057:
					*uParam2 = 0x00000F42;
					break;
				
				case 0x00000058:
					*uParam2 = 0x00000F43;
					break;
				
				case 0x00000059:
					*uParam2 = 0x000014E5;
					break;
				
				case 0x0000005A:
					*uParam2 = 0x000014E6;
					break;
				
				case 0x0000005B:
					*uParam2 = 0x000014E7;
					break;
				
				case 0x0000005C:
					*uParam2 = 0x000014E8;
					break;
				
				case 0x0000005D:
					*uParam2 = 0x000014E9;
					break;
				
				case 0x0000005E:
					*uParam2 = 0x000014EA;
					break;
				
				case 0x0000005F:
					*uParam2 = 0x000014EB;
					break;
				
				case 0x00000060:
					*uParam2 = 0x000014EC;
					break;
				
				case 0x00000061:
					*uParam2 = 0x000014ED;
					break;
				
				case 0x00000062:
					*uParam2 = 0x000014EE;
					break;
				
				case 0x00000063:
					*uParam2 = 0x000014EF;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x00000064:
					*uParam2 = 0x000014F0;
					break;
				
				case 0x00000065:
					*uParam2 = 0x00001529;
					break;
				
				case 0x00000066:
					*uParam2 = 0x0000152A;
					break;
				
				case 0x00000067:
					*uParam2 = 0x0000152B;
					break;
				
				case 0x00000068:
					*uParam2 = 0x0000152C;
					break;
				
				case 0x00000069:
					*uParam2 = 0x0000152D;
					break;
				
				case 0x0000006A:
					*uParam2 = 0x0000152E;
					break;
				
				case 0x0000006B:
					*uParam2 = 0x0000152F;
					break;
				
				case 0x0000006C:
					*uParam2 = 0x00001530;
					break;
				
				case 0x0000006D:
					*uParam2 = 0x00001531;
					break;
				
				case 0x0000006E:
					*uParam2 = 0x00001532;
					break;
				
				case 0x0000006F:
					*uParam2 = 0x00001533;
					break;
				
				case 0x00000070:
					*uParam2 = 0x00001534;
					break;
				
				case 0x00000071:
					*uParam2 = 0x00001535;
					break;
				
				case 0x00000072:
					*uParam2 = 0x00001536;
					break;
				
				case 0x00000073:
					*uParam2 = 0x00001537;
					break;
				
				case 0x00000074:
					*uParam2 = 0x00001538;
					break;
				
				case 0x00000075:
					*uParam2 = 0x00001539;
					break;
				
				case 0x00000076:
					*uParam2 = 0x0000153A;
					break;
				
				case 0x00000077:
					*uParam2 = 0x0000153B;
					break;
				
				case 0x00000078:
					*uParam2 = 0x0000153C;
					break;
				
				case 0x00000079:
					*uParam2 = 0x0000153D;
					break;
				
				case 0x0000007A:
					*uParam2 = 0x0000153E;
					break;
				
				case 0x0000007B:
					*uParam2 = 0x0000153F;
					break;
				
				case 0x0000007C:
					*uParam2 = 0x000017F9;
					break;
				
				case 0x0000007D:
					*uParam2 = 0x000017FA;
					break;
				
				case 0x0000007E:
					*uParam2 = 0x000017FB;
					break;
				
				case 0x0000007F:
					*uParam2 = 0x000017FC;
					break;
				
				case 0x00000080:
					*uParam2 = 0x000017FD;
					break;
				
				case 0x00000081:
					*uParam2 = 0x000017FE;
					break;
				
				case 0x00000082:
					*uParam2 = 0x000017FF;
					break;
				
				case 0x00000083:
					*uParam2 = 0x00001800;
					break;
				
				case 0x00000084:
					*uParam2 = 0x00001801;
					break;
				
				case 0x00000085:
					*uParam2 = 0x00001802;
					break;
				
				case 0x00000086:
					*uParam2 = 0x00001803;
					break;
				
				case 0x00000087:
					*uParam2 = 0x00001804;
					break;
				
				case 0x00000088:
					*uParam2 = 0x00001805;
					break;
				
				case 0x00000089:
					*uParam2 = 0x00001806;
					break;
				
				case 0x0000008A:
					*uParam2 = 0x00001807;
					break;
				
				case 0x0000008B:
					*uParam2 = 0x00001932;
					break;
				
				case 0x0000008C:
					*uParam2 = 0x00001933;
					break;
				
				case 0x0000008D:
					*uParam2 = 0x00001934;
					break;
				
				case 0x0000008E:
					*uParam2 = 0x00001935;
					break;
				
				case 0x0000008F:
					*uParam2 = 0x00001936;
					break;
				
				case 0x00000090:
					*uParam2 = 0x00001937;
					break;
				
				case 0x00000091:
					*uParam2 = 0x00001938;
					break;
				
				case 0x00000092:
					*uParam2 = 0x00001939;
					break;
				
				case 0x00000093:
					*uParam2 = 0x0000193A;
					break;
				
				case 0x00000094:
					*uParam2 = 0x0000193B;
					break;
				
				case 0x00000095:
					*uParam2 = 0x0000193C;
					break;
				
				case 0x00000096:
					*uParam2 = 0x0000193D;
					break;
				
				case 0x00000097:
					*uParam2 = 0x0000193E;
					break;
				
				case 0x00000098:
					*uParam2 = 0x0000193F;
					break;
				
				case 0x00000099:
					*uParam2 = 0x00001940;
					break;
				
				case 0x0000009A:
					*uParam2 = 0x00001C69;
					break;
				
				case 0x0000009B:
					*uParam2 = 0x00001C6A;
					break;
				
				case 0x0000009C:
					*uParam2 = 0x00001C6B;
					break;
				
				case 0x0000009D:
					*uParam2 = 0x00001C6C;
					break;
				
				case 0x0000009E:
					*uParam2 = 0x00001C6D;
					break;
				
				case 0x0000009F:
					*uParam2 = 0x00001C6E;
					break;
				
				case 0x000000A0:
					*uParam2 = 0x00001C6F;
					break;
				
				case 0x000000A1:
					*uParam2 = 0x00001ED6;
					break;
				
				case 0x000000A2:
					*uParam2 = 0x00001ED7;
					break;
				
				case 0x000000A3:
					*uParam2 = 0x00001ED8;
					break;
				
				case 0x000000A4:
					*uParam2 = 0x00001ED9;
					break;
				
				case 0x000000A5:
					*uParam2 = 0x00001EDA;
					break;
				
				case 0x000000A6:
					*uParam2 = 0x00001EDB;
					break;
				
				case 0x000000A7:
					*uParam2 = 0x00001EDC;
					break;
				
				case 0x000000A8:
					*uParam2 = 0x00001EDD;
					break;
				
				case 0x000000A9:
					*uParam2 = 0x00001EDE;
					break;
				
				case 0x000000AA:
					*uParam2 = 0x00001EDF;
					break;
				
				case 0x000000AB:
					*uParam2 = 0x00001EE0;
					break;
				
				case 0x000000AC:
					*uParam2 = 0x00001EE1;
					break;
				
				case 0x000000AD:
					*uParam2 = 0x00001EE2;
					break;
				
				case 0x000000AE:
					*uParam2 = 0x00001EE3;
					break;
				
				case 0x000000AF:
					*uParam2 = 0x00001EE4;
					break;
				
				case 0x000000B0:
					*uParam2 = 0x00002084;
					break;
				
				case 0x000000B1:
					*uParam2 = 0x00002085;
					break;
				
				case 0x000000B2:
					*uParam2 = 0x00002086;
					break;
				
				case 0x000000B3:
					*uParam2 = 0x00002087;
					break;
				
				case 0x000000B4:
					*uParam2 = 0x00002088;
					break;
				
				case 0x000000B5:
					*uParam2 = 0x00002089;
					break;
				
				case 0x000000B6:
					*uParam2 = 0x0000208A;
					break;
				
				case 0x000000B7:
					*uParam2 = 0x0000208B;
					break;
				
				case 0x000000B8:
					*uParam2 = 0x0000208C;
					break;
				
				case 0x000000B9:
					*uParam2 = 0x0000208D;
					break;
				
				case 0x000000BA:
					*uParam2 = 0x0000208E;
					break;
				
				case 0x000000BB:
					*uParam2 = 0x0000208F;
					break;
				
				case 0x000000BC:
					*uParam2 = 0x00002090;
					break;
				
				case 0x000000BD:
					*uParam2 = 0x00002091;
					break;
				
				case 0x000000BE:
					*uParam2 = 0x00002092;
					break;
				
				case 0x000000BF:
					*uParam2 = 0x00002093;
					break;
				
				case 0x000000C0:
					*uParam2 = 0x00002094;
					break;
				
				case 0x000000C1:
					*uParam2 = 0x00002095;
					break;
				
				case 0x000000C2:
					*uParam2 = 0x00002096;
					break;
				
				case 0x000000C3:
					*uParam2 = 0x00002097;
					break;
				
				case 0x000000C4:
					*uParam2 = 0x00002098;
					break;
				
				case 0x000000C5:
					*uParam2 = 0x00002099;
					break;
				
				case 0x000000C6:
					*uParam2 = 0x0000209A;
					break;
				
				case 0x000000C7:
					*uParam2 = 0x0000209B;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0x000000C8:
					*uParam2 = 0x0000209C;
					break;
				
				case 0x000000C9:
					*uParam2 = 0x000022ED;
					break;
				
				case 0x000000CA:
					*uParam2 = 0x000022EE;
					break;
				
				case 0x000000CB:
					*uParam2 = 0x000022EF;
					break;
				
				case 0x000000CC:
					*uParam2 = 0x000022F0;
					break;
				
				case 0x000000CD:
					*uParam2 = 0x000022F1;
					break;
				
				case 0x000000CE:
					*uParam2 = 0x000024E4;
					break;
				
				case 0x000000CF:
					*uParam2 = 0x000024E5;
					break;
				
				case 0x000000D0:
					*uParam2 = 0x000024E6;
					break;
				
				case 0x000000D1:
					*uParam2 = 0x000024E7;
					break;
				
				case 0x000000D2:
					*uParam2 = 0x000024E8;
					break;
				
				case 0x000000D3:
					*uParam2 = 0x000024E9;
					break;
				
				case 0x000000D4:
					*uParam2 = 0x000024EA;
					break;
				
				case 0x000000D5:
					*uParam2 = 0x000024EB;
					break;
				
				case 0x000000D6:
					*uParam2 = 0x000024EC;
					break;
				
				case 0x000000D7:
					*uParam2 = 0x000024ED;
					break;
				
				case 0x000000D8:
					*uParam2 = 0x000024EE;
					break;
				
				case 0x000000D9:
					*uParam2 = 0x000024EF;
					break;
				
				case 0x000000DA:
					*uParam2 = 0x000024F0;
					break;
				
				case 0x000000DB:
					*uParam2 = 0x000024F1;
					break;
				
				case 0x000000DC:
					*uParam2 = 0x000024F2;
					break;
				
				case 0x000000DD:
					*uParam2 = 0x000024F3;
					break;
				
				case 0x000000DE:
					*uParam2 = 0x000024F4;
					break;
				
				case 0x000000DF:
					*uParam2 = 0x000024F5;
					break;
				
				case 0x000000E0:
					*uParam2 = 0x000024F6;
					break;
				
				case 0x000000E1:
					*uParam2 = 0x000024F7;
					break;
				
				case 0x000000E2:
					*uParam2 = 0x000024F8;
					break;
				
				case 0x000000E3:
					*uParam2 = 0x000024F9;
					break;
				
				case 0x000000E4:
					*uParam2 = 0x000024FA;
					break;
				
				case 0x000000E5:
					*uParam2 = 0x000024FB;
					break;
				
				case 0x000000E6:
					*uParam2 = 0x000024FC;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 0x00000020);
	return *uParam2 != 0x00002CF7;
}

int func_162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0x00000000)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 0x00000001)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000002)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000003)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_10[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_14[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_18[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_1C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000005)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000006)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000007)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000008)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_2C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000009)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_30[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000004)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_34[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_38[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_3C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000005)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_44[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000006)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_4C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_50[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_54[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_58[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000007)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_5C[iParam3], iParam4);
	}
	else if (iParam0 == 0x00000008)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x00000009)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_6C[iParam3], iParam4);
	}
	else if (iParam0 == 0x0000000A)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_70[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_74[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000B)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_78[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_7C[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000C)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
	}
	else if (iParam0 == 0x0000000D)
	{
		if (iParam5 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		if (iParam6 == 0x00000001)
		{
			unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_88[iParam3], iParam4);
	}
	else if (iParam0 == 0x0000000E)
	{
		if (iParam2 == 0x00000000)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_8C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000001)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_90[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000002)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_94[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000003)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_98[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000004)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_9C[iParam3], iParam4);
		}
		else if (iParam2 == 0x00000005)
		{
			if (iParam5 == 0x00000001)
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			if (iParam6 == 0x00000001)
			{
				unk_0x0674E58A79778E99(&(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_936[iParam1 /*164*/].f_A0[iParam3], iParam4);
		}
	}
	return 0x00000000;
}

int func_163(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000000))
	{
		return 0x00000000;
	}
	if (iParam0 == 0x00000001)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000001))
		{
			return 0x00000000;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000002))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

struct<14> func_164(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_227();
	if (iParam0 == joaat("player_zero"))
	{
		func_209(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_190(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_165(iParam1, iParam2);
	}
	return Global_12A92[0x00000000 /*14*/];
}

void func_165(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_189(iParam1);
			break;
		
		case 0x00000002:
			func_188(iParam1);
			break;
		
		case 0x00000003:
			func_185(iParam1);
			break;
		
		case 0x00000004:
			func_184(iParam1);
			break;
		
		case 0x00000006:
			func_183(iParam1);
			break;
		
		case 0x00000005:
			func_182(iParam1);
			break;
		
		case 0x00000008:
			func_181(iParam1);
			break;
		
		case 0x00000009:
			func_180(iParam1);
			break;
		
		case 0x0000000A:
			func_179(iParam1);
			break;
		
		case 0x00000001:
			func_178(iParam1);
			break;
		
		case 0x00000007:
			func_177(iParam1);
			break;
		
		case 0x0000000B:
			func_176(iParam1);
			break;
		
		case 0x0000000C:
			func_175(iParam1);
			break;
		
		case 0x0000000D:
			func_174(iParam1);
			break;
		
		case 0x0000000E:
			func_166(iParam1);
			break;
	}
}

void func_166(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000034;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00000036;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000036;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x000000D7;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x000000A9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000031;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000034;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000A;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000B;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000C;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000F;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			iVar1 = 0x00000018;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000012;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000014;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000018;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x0000009B, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_167(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0x00000000;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 0x00000020);
	uParam0->f_2 = (iParam2 / 0x00000020);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_D = iParam8;
	uParam0->f_C = func_172(iParam8);
	if ((uParam0->f_2 >= 0x0000000A && uParam0->f_5 >= 0x00000000) && uParam0->f_5 < 0x00000003)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0x00000000;
	}
	if (unk_0x12AB0310C2281427(sParam3) != unk_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000003);
	}
	if (bParam10)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		if (uParam0->f_5 >= 0x00000000 && uParam0->f_5 < 0x00000003)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000005);
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000006);
		if (func_45(0x0000000E))
		{
			return;
		}
		if (iParam1 == 0x00000001)
		{
			if (unk_0x1A5A491D253EA7BA(Global_280004, 0x6CE6313B, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000007);
			}
		}
		if (iParam1 == 0x0000000C)
		{
			if (!func_171(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_171(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
		else if (iParam1 == 0x0000000D)
		{
		}
		else if (iParam1 == 0x0000000E)
		{
			if (!func_171(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_171(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
		else
		{
			if (!func_171(Global_280004, 0x00000001, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 0x00000002);
			}
			if (!func_171(Global_280004, 0x00000002, 0x00000001, 0x00000001, 0xFFFFFFFF))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
			}
		}
	}
	else if (uParam0->f_5 >= 0x00000000 && uParam0->f_5 < 0x00000003)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000005);
		if (func_162(iParam1, uParam0->f_5, uParam0->f_2, 0x00000000, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
		}
		if (func_162(iParam1, uParam0->f_5, uParam0->f_2, 0x00000001, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
		if (!func_162(iParam1, uParam0->f_5, uParam0->f_2, 0x00000002, uParam0->f_1, 0x00000000, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000000);
		if ((((((((((iParam1 == 0x0000000B || iParam1 == 0x00000004) || iParam1 == 0x00000006) || iParam1 == 0x00000001) || iParam1 == 0x0000000E) || iParam1 == 0x00000002) || iParam1 == 0x00000008) || iParam1 == 0x00000009) || iParam1 == 0x0000000A) || iParam1 == 0x00000007) || iParam1 == 0x0000000C)
		{
			if (func_45(0x0000000E))
			{
				return;
			}
			iVar0 = func_67(func_170(iParam1, uParam0->f_2), Global_12A8F, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			}
			iVar0 = func_67(func_169(iParam1, uParam0->f_2), Global_12A8F, 0x00000000);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
			}
			if (func_168(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_67(iVar1, Global_12A8F, 0x00000000);
				if (!unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000004);
				}
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
	}
	if (iParam1 == 0x0000000E)
	{
		if (iParam4 == 0xFFFFFFFF)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000001);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0x00000002);
		}
	}
}

bool func_168(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 0x000003D2;
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D3;
					break;
				
				case 0x00000003:
					*uParam2 = 0x00000595;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E3;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EB;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000596;
					break;
				
				case 0x00000009:
					*uParam2 = 0x0000059E;
					break;
				
				case 0x0000000A:
					*uParam2 = 0x000005A0;
					break;
				
				case 0x00000001:
					*uParam2 = 0x000003F3;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A1;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DB;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FB;
					break;
				
				case 0x0000000C:
					*uParam2 = 0x00000406;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D4;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E4;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EC;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000597;
					break;
				
				case 0x00000009:
					*uParam2 = 0x0000059F;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A2;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DC;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FC;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					*uParam2 = 0x000003D5;
					break;
				
				case 0x00000004:
					*uParam2 = 0x000003E5;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003ED;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000598;
					break;
				
				case 0x00000007:
					*uParam2 = 0x000005A3;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DD;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FD;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E6;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EE;
					break;
				
				case 0x00000008:
					*uParam2 = 0x00000599;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DE;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FE;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E7;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003EF;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059A;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003DF;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x000003FF;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E8;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F0;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059B;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E0;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000400;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003E9;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F1;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059C;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E1;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000401;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					*uParam2 = 0x000003EA;
					break;
				
				case 0x00000006:
					*uParam2 = 0x000003F2;
					break;
				
				case 0x00000008:
					*uParam2 = 0x0000059D;
					break;
				
				case 0x0000000B:
					*uParam2 = 0x000003E2;
					break;
				
				case 0x0000000E:
					*uParam2 = 0x00000402;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000403;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000404;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					*uParam2 = 0x00000405;
					break;
			}
			break;
	}
	return *uParam2 != 0x000003D2;
}

int func_169(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000039F;
					break;
				
				case 0x00000003:
					return 0x00000586;
					break;
				
				case 0x00000004:
					return 0x000003AF;
					break;
				
				case 0x00000006:
					return 0x000003B7;
					break;
				
				case 0x00000008:
					return 0x00000587;
					break;
				
				case 0x00000009:
					return 0x0000058F;
					break;
				
				case 0x0000000A:
					return 0x00000591;
					break;
				
				case 0x00000001:
					return 0x000003BF;
					break;
				
				case 0x00000007:
					return 0x00000592;
					break;
				
				case 0x0000000B:
					return 0x000003A7;
					break;
				
				case 0x0000000E:
					return 0x000003C7;
					break;
				
				case 0x0000000C:
					return 0x000003D2;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x000003A0;
					break;
				
				case 0x00000004:
					return 0x000003B0;
					break;
				
				case 0x00000006:
					return 0x000003B8;
					break;
				
				case 0x00000008:
					return 0x00000588;
					break;
				
				case 0x00000009:
					return 0x00000590;
					break;
				
				case 0x00000007:
					return 0x00000593;
					break;
				
				case 0x0000000B:
					return 0x000003A8;
					break;
				
				case 0x0000000E:
					return 0x000003C8;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x000003A1;
					break;
				
				case 0x00000004:
					return 0x000003B1;
					break;
				
				case 0x00000006:
					return 0x000003B9;
					break;
				
				case 0x00000008:
					return 0x00000589;
					break;
				
				case 0x00000007:
					return 0x00000594;
					break;
				
				case 0x0000000B:
					return 0x000003A9;
					break;
				
				case 0x0000000E:
					return 0x000003C9;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B2;
					break;
				
				case 0x00000006:
					return 0x000003BA;
					break;
				
				case 0x00000008:
					return 0x0000058A;
					break;
				
				case 0x0000000B:
					return 0x000003AA;
					break;
				
				case 0x0000000E:
					return 0x000003CA;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B3;
					break;
				
				case 0x00000006:
					return 0x000003BB;
					break;
				
				case 0x00000008:
					return 0x0000058B;
					break;
				
				case 0x0000000B:
					return 0x000003AB;
					break;
				
				case 0x0000000E:
					return 0x000003CB;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B4;
					break;
				
				case 0x00000006:
					return 0x000003BC;
					break;
				
				case 0x00000008:
					return 0x0000058C;
					break;
				
				case 0x0000000B:
					return 0x000003AC;
					break;
				
				case 0x0000000E:
					return 0x000003CC;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B5;
					break;
				
				case 0x00000006:
					return 0x000003BD;
					break;
				
				case 0x00000008:
					return 0x0000058D;
					break;
				
				case 0x0000000B:
					return 0x000003AD;
					break;
				
				case 0x0000000E:
					return 0x000003CD;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x000003B6;
					break;
				
				case 0x00000006:
					return 0x000003BE;
					break;
				
				case 0x00000008:
					return 0x0000058E;
					break;
				
				case 0x0000000B:
					return 0x000003AE;
					break;
				
				case 0x0000000E:
					return 0x000003CE;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003CF;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003D0;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x000003D1;
					break;
			}
			break;
	}
	return 0x000003A7;
}

int func_170(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000000:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036B;
					break;
				
				case 0x00000003:
					return 0x00000577;
					break;
				
				case 0x00000004:
					return 0x0000037B;
					break;
				
				case 0x00000006:
					return 0x00000383;
					break;
				
				case 0x00000008:
					return 0x00000578;
					break;
				
				case 0x00000009:
					return 0x00000580;
					break;
				
				case 0x0000000A:
					return 0x00000582;
					break;
				
				case 0x00000001:
					return 0x0000038B;
					break;
				
				case 0x00000007:
					return 0x00000583;
					break;
				
				case 0x0000000B:
					return 0x00000373;
					break;
				
				case 0x0000000E:
					return 0x00000393;
					break;
				
				case 0x0000000C:
					return 0x0000039E;
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036C;
					break;
				
				case 0x00000004:
					return 0x0000037C;
					break;
				
				case 0x00000006:
					return 0x00000384;
					break;
				
				case 0x00000008:
					return 0x00000579;
					break;
				
				case 0x00000009:
					return 0x00000581;
					break;
				
				case 0x00000007:
					return 0x00000584;
					break;
				
				case 0x0000000B:
					return 0x00000374;
					break;
				
				case 0x0000000E:
					return 0x00000394;
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam0)
			{
				case 0x00000002:
					return 0x0000036D;
					break;
				
				case 0x00000004:
					return 0x0000037D;
					break;
				
				case 0x00000006:
					return 0x00000385;
					break;
				
				case 0x00000008:
					return 0x0000057A;
					break;
				
				case 0x00000007:
					return 0x00000585;
					break;
				
				case 0x0000000B:
					return 0x00000375;
					break;
				
				case 0x0000000E:
					return 0x00000395;
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x0000037E;
					break;
				
				case 0x00000006:
					return 0x00000386;
					break;
				
				case 0x00000008:
					return 0x0000057B;
					break;
				
				case 0x0000000B:
					return 0x00000376;
					break;
				
				case 0x0000000E:
					return 0x00000396;
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x0000037F;
					break;
				
				case 0x00000006:
					return 0x00000387;
					break;
				
				case 0x00000008:
					return 0x0000057C;
					break;
				
				case 0x0000000B:
					return 0x00000377;
					break;
				
				case 0x0000000E:
					return 0x00000397;
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000380;
					break;
				
				case 0x00000006:
					return 0x00000388;
					break;
				
				case 0x00000008:
					return 0x0000057D;
					break;
				
				case 0x0000000B:
					return 0x00000378;
					break;
				
				case 0x0000000E:
					return 0x00000398;
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000381;
					break;
				
				case 0x00000006:
					return 0x00000389;
					break;
				
				case 0x00000008:
					return 0x0000057E;
					break;
				
				case 0x0000000B:
					return 0x00000379;
					break;
				
				case 0x0000000E:
					return 0x00000399;
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam0)
			{
				case 0x00000004:
					return 0x00000382;
					break;
				
				case 0x00000006:
					return 0x0000038A;
					break;
				
				case 0x00000008:
					return 0x0000057F;
					break;
				
				case 0x0000000B:
					return 0x0000037A;
					break;
				
				case 0x0000000E:
					return 0x0000039A;
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039B;
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039C;
					break;
			}
			break;
		
		case 0x0000000A:
			switch (iParam0)
			{
				case 0x0000000E:
					return 0x0000039D;
					break;
			}
			break;
	}
	return 0x00000373;
}

int func_171(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_12A8F;
	if (iParam4 != 0xFFFFFFFF)
	{
		iVar0 = iParam4;
	}
	if (func_161(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_67(iVar2, iVar0, 0x00000000);
		return unk_0xEAE0D21A50E6C7F4(iVar3, iVar1);
	}
	return 0x00000000;
}

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000000;
			break;
		
		case 0x00000000:
			return 0x00000000;
			break;
		
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000002:
			return 0x00000002;
			break;
		
		case 0x00000003:
			return 0x00000003;
			break;
		
		case 0x00000004:
			return 0x00000004;
			break;
		
		case 0x00000005:
			return 0x00000005;
			break;
		
		case 0x00000006:
			return 0x00000006;
			break;
		
		case 0x00000007:
			return 0x00000007;
			break;
		
		case 0x00000008:
			return 0x00000008;
			break;
		
		case 0x00000009:
			return 0x00000000;
			break;
		
		case 0x0000000A:
			return 0x00000001;
			break;
		
		case 0x0000000B:
			return 0x00000000;
			break;
		
		case 0x0000000C:
			return 0x00000000;
			break;
		
		case 0x0000000D:
			return 0x00000000;
			break;
	}
	return 0x00000000;
}

void func_173(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0x00000000)
	{
		return;
	}
	iVar1 = Global_12A92[0x00000000 /*14*/].f_5;
	if (iParam0 == 0x0000000C)
	{
		iVar4 = 0x00000000;
		iVar5 = unk_0x84997C8C8A5848DD(iVar1, 0x00000000);
		iVar3 = 0x00000000;
		while (iVar3 < iVar5)
		{
			unk_0xA69F810DF7EA02E6(iVar3, &Var2);
			if (!unk_0x232048AB4B0E0259(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_280004 = Var2.f_1;
					Global_280005 = Var2;
					func_167(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0x00000000, 0x00000000, Var2.f_2, 0x00000000, 0xFFFFFFFF, 0x00000002, 0x00000001);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 0x0000000D)
	{
		func_167(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, "NO_LABEL", 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000001);
	}
	else if (iParam0 == 0x0000000E)
	{
		unk_0x30BBA34DD235D7FE(&Var6);
		iVar9 = 0x00000000;
		iVar10 = unk_0xF6900DA2D9CD7BC5(iVar1, 0x00000007, 0xFFFFFFFF, 0x00000001, 0xFFFFFFFF, 0xFFFFFFFF);
		iVar8 = 0x00000000;
		while (iVar8 < iVar10)
		{
			unk_0x4F79808059300187(iVar8, &Var6);
			if (!unk_0x232048AB4B0E0259(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0x00000000)
					{
						iVar7 = 0x00000009;
					}
					else if (Var6.f_6 == 0x00000001)
					{
						iVar7 = 0x0000000A;
					}
					else if (Var6.f_6 == 0x00000002)
					{
						iVar7 = 0x00000002;
					}
					else if (Var6.f_6 == 0x00000003)
					{
						iVar7 = 0x00000003;
					}
					else if (Var6.f_6 == 0x00000004)
					{
						iVar7 = 0x00000004;
					}
					else if (Var6.f_6 == 0x00000005)
					{
						iVar7 = 0x00000005;
					}
					else if (Var6.f_6 == 0x00000006)
					{
						iVar7 = 0x00000006;
					}
					else if (Var6.f_6 == 0x00000007)
					{
						iVar7 = 0x00000007;
					}
					else if (Var6.f_6 == 0x00000008)
					{
						iVar7 = 0x00000008;
					}
					else
					{
						iVar7 = 0xFFFFFFFF;
					}
					Global_280004 = Var6.f_1;
					Global_280005 = Var6;
					func_167(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, unk_0x1A5A491D253EA7BA(Var6.f_1, 0x85C5D476, 0x00000000), iVar7, 0x00000002, Var6.f_1 != 0x00000000);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var11);
		if (iParam3 != 0xFFFFFFFF && Global_12B3B)
		{
			unk_0xFDEBA3FD0BF0D4AC(iParam3, &Var11);
			Global_280004 = Var11.f_1;
			Global_280005 = Var11;
			func_167(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x1A5A491D253EA7BA(Var11.f_1, 0x85C5D476, 0x00000000), 0xFFFFFFFF, 0x00000002, Var11.f_1 != 0x00000000);
			return;
		}
		iVar13 = 0x00000000;
		iVar14 = unk_0xF6900DA2D9CD7BC5(iVar1, 0x00000007, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, func_127(iParam0));
		iVar12 = 0x00000000;
		while (iVar12 < iVar14)
		{
			unk_0xC578687D5A643830(iVar12, &Var11);
			if (!unk_0x232048AB4B0E0259(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_280004 = Var11.f_1;
					Global_280005 = Var11;
					func_167(&(Global_12A92[0x00000000 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x1A5A491D253EA7BA(Var11.f_1, 0x85C5D476, 0x00000000), 0xFFFFFFFF, 0x00000002, Var11.f_1 != 0x00000000);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_174(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_175(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000077;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000081;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008B;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000095;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000087;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000030, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_176(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_177(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_178(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000006, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_179(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000021, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_180(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000011, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_181(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000012, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_182(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_183(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000048;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000054, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_184(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x000002B2;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002B2;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003F;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000063;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000258;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000258;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000068, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_185(int iParam0)
{
	if (iParam0 < 0x00000088)
	{
		func_187(iParam0);
	}
	else
	{
		func_186(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_173(0x00000003, iParam0, 0x000000F2, 0xFFFFFFFF);
	}
}

void func_186(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000F6E;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x00000019;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000016;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000013;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000019;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000014;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001C;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar1 = 0x00000023;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000001;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000B5:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000B6:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000004;
			iVar1 = 0x00000031;
			break;
		
		case 0x000000B7:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000005;
			iVar1 = 0x00000334;
			break;
		
		case 0x000000B8:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000006;
			iVar1 = 0x00000316;
			break;
		
		case 0x000000B9:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000007;
			iVar1 = 0x00000334;
			break;
		
		case 0x000000BA:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000008;
			iVar1 = 0x000003A1;
			break;
		
		case 0x000000BB:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000009;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000BC:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000352;
			break;
		
		case 0x000000BD:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000316;
			break;
		
		case 0x000000BE:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000BF:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000001;
			break;
		
		case 0x000000C0:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000002;
			break;
		
		case 0x000000C1:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000003;
			break;
		
		case 0x000000C2:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000004;
			break;
		
		case 0x000000C3:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000005;
			break;
		
		case 0x000000C4:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000006;
			break;
		
		case 0x000000C5:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000007;
			break;
		
		case 0x000000C6:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000008;
			break;
		
		case 0x000000C7:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000009;
			break;
		
		case 0x000000C8:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000C9:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000001;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CA:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000002;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CB:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000CC:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000004;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CD:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000005;
			iVar1 = 0x000009C4;
			break;
		
		case 0x000000CE:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000898;
			break;
		
		case 0x000000CF:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x0000044C;
			break;
		
		case 0x000000D0:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x000004B0;
			break;
		
		case 0x000000D1:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x000004C4;
			break;
		
		case 0x000000D2:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x000004E2;
			break;
		
		case 0x000000D3:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000514;
			break;
		
		case 0x000000D4:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000550;
			break;
		
		case 0x000000D5:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x000000D6:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x000000D7:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000D8:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002A;
			break;
		
		case 0x000000D9:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000DA:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000DB:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002D;
			break;
		
		case 0x000000DC:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002C;
			break;
		
		case 0x000000DD:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002E;
			break;
		
		case 0x000000DE:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000034;
			break;
		
		case 0x000000DF:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C80;
			break;
		
		case 0x000000E0:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000C80;
			break;
		
		case 0x000000E1:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000002;
			iVar1 = 0x000009F6;
			break;
		
		case 0x000000E2:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E3:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000A1E;
			break;
		
		case 0x000000E4:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E5:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000006;
			iVar1 = 0x000009F6;
			break;
		
		case 0x000000E6:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000A1E;
			break;
		
		case 0x000000E7:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000008;
			iVar1 = 0x00000AA0;
			break;
		
		case 0x000000E8:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000ABE;
			break;
		
		case 0x000000E9:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000CB2;
			break;
		
		case 0x000000EA:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000B86;
			break;
		
		case 0x000000EB:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000C1C;
			break;
		
		case 0x000000EC:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C4E;
			break;
		
		case 0x000000ED:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000CA8;
			break;
		
		case 0x000000EE:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000D16;
			break;
		
		case 0x000000EF:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000D48;
			break;
		
		case 0x000000F0:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000007;
			iVar1 = 0x00000CD0;
			break;
		
		case 0x000000F1:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			break;
		
		default:
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_187(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000000F;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000018;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001A;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000230;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000258;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x000001F4;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x000001F4;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000230;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000024E;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000021C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			iVar1 = 0x000001F4;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x0000015E;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000172;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000027;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000031;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000008;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x00000208;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000001C2;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x000001A4;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x000001A4;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004E;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000004E;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000028;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000028;
			break;
		
		default:
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_188(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_189(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000002;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_190(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_208(iParam1);
			break;
		
		case 0x00000002:
			func_207(iParam1);
			break;
		
		case 0x00000003:
			func_203(iParam1);
			break;
		
		case 0x00000004:
			func_202(iParam1);
			break;
		
		case 0x00000006:
			func_201(iParam1);
			break;
		
		case 0x00000005:
			func_200(iParam1);
			break;
		
		case 0x00000008:
			func_199(iParam1);
			break;
		
		case 0x00000009:
			func_198(iParam1);
			break;
		
		case 0x0000000A:
			func_197(iParam1);
			break;
		
		case 0x00000001:
			func_196(iParam1);
			break;
		
		case 0x00000007:
			func_195(iParam1);
			break;
		
		case 0x0000000B:
			func_194(iParam1);
			break;
		
		case 0x0000000C:
			func_193(iParam1);
			break;
		
		case 0x0000000D:
			func_192(iParam1);
			break;
		
		case 0x0000000E:
			func_191(iParam1);
			break;
	}
}

void func_191(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x000011EE;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			iVar1 = 0x00001004;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			iVar1 = 0x00000F0A;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			iVar1 = 0x00001482;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			iVar1 = 0x00000A8C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C1C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000007;
			iVar1 = 0x000013BA;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x000009C4;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x0000079E;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000F3C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000DDE;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00001194;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000A8C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C1C;
			iVar5 = 0x00000002;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000B86;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000007;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000080;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000082;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000087;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000070;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x00000073;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000076;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x00000078;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000007D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000080;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x00000048;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000095;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x0000008B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000095;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000087;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x0000008A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000009F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C6;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000DC;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000BE;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000C8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000D0;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000D2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000BE;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000008;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000009;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000091;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A8;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B2;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x000000A0;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x00000020;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000023;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000026;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x0000002A;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002D;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000030;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000019;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000001C;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001E;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000023;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x000000AF, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_192(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000009, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_193(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000FA0;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000122A;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001388;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000128E;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000128E;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001450;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001450;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000BB8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x0000002F, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_194(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002A;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000031;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x0000003F, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_195(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_196(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000005, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_197(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000035, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_198(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x0000000C, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_199(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x000000C3;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x000000C3;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x0000004D, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_200(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_201(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000059;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000059;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000000B4;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x000000C8;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000000EB;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000004FB;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000004FB;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000018;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001D;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001C;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000009B;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000009B;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A5;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x000000AA;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A5;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x000000AA;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000086, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_202(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002C;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000002B2;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000091;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x0000008C;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000094;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x0000009A;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x0000009E;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000003E;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000D;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000E;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B4;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000080;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x00000080;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x0000008A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000084;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000094;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000081;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000006;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000007;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000008;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000009;
			iVar1 = 0x0000004B;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x0000001C;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000022;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x00000024;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar1 = 0x00000020;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000075, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_203(int iParam0)
{
	if (iParam0 < 0x0000006B)
	{
		func_206(iParam0);
	}
	else if (iParam0 < 0x000000E3)
	{
		func_205(iParam0);
	}
	else
	{
		func_204(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_173(0x00000003, iParam0, 0x0000013E, 0xFFFFFFFF);
	}
}

void func_204(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x000000E3:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E4:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E5:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E6:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E7:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E8:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E9:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EA:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EB:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EC:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000ED:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EE:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000EF:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F0:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000D;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F1:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F2:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F3:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F4:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F5:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F6:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F7:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F8:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000F9:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FA:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FB:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FC:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FD:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FE:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000FF:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000100:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000101:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000102:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000898;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000103:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000104:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000105:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000106:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000107:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000108:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000109:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000010A:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000010B:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000010C:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000010D:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000046;
			break;
		
		case 0x0000010E:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x0000010F:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000110:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000111:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000112:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000113:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000114:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000115:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000116:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000117:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000118:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000119:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000011A:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000011B:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000011C:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000011D:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000118;
			break;
		
		case 0x0000011E:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000113;
			break;
		
		case 0x0000011F:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000120:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000005;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000121:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000006;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000122:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000007;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000123:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000008;
			iVar1 = 0x00000127;
			break;
		
		case 0x00000124:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000125:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000126:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000127:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000128:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x000006D6;
			break;
		
		case 0x00000129:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000780;
			break;
		
		case 0x0000012A:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000762;
			break;
		
		case 0x0000012B:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			break;
		
		case 0x0000012C:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000004;
			iVar1 = 0x000006D6;
			break;
		
		case 0x0000012D:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000005;
			iVar1 = 0x000007C6;
			break;
		
		case 0x0000012E:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000006;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000012F:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000007;
			iVar1 = 0x000007C6;
			break;
		
		case 0x00000130:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000008;
			iVar1 = 0x00000780;
			break;
		
		case 0x00000131:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000009;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000132:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000A;
			iVar1 = 0x000007C6;
			break;
		
		case 0x00000133:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000B;
			iVar1 = 0x000006FE;
			break;
		
		case 0x00000134:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x0000000C;
			iVar1 = 0x000006FE;
			break;
		
		case 0x00000135:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000136:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000001;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000137:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000138:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004F;
			break;
		
		case 0x00000139:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004F;
			break;
		
		case 0x0000013A:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000005;
			iVar1 = 0x00000059;
			break;
		
		case 0x0000013B:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000006;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000013C:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000013D:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000008;
			break;
		
		default:
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_205(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C3;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			iVar1 = 0x000001C2;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000190;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000006;
			iVar1 = 0x0000023A;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000008;
			iVar1 = 0x000001D6;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000009;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000208;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000B;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000C;
			iVar1 = 0x000001EA;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000024E;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000230;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000208;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x0000005A;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000006;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002F;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000009;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000055;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000002F;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000006;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000007;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x000000DC;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x000000F0;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x000000FA;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x00000104;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000037;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x00000028;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000006;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000007;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000008;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000009;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000032;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B5:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B6:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B7:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B8:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000B9:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BA:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BB:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BC:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BD:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BE:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000BF:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C0:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C1:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C2:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C3:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C4:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C5:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C6:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C7:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C8:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000C9:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CA:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CB:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000001E0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CC:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CD:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CE:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000208;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000CF:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000001B8;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000D0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x000000D1:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x000000DC;
			break;
		
		case 0x000000D2:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			break;
		
		case 0x000000D3:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x000000F0;
			break;
		
		case 0x000000D4:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x000000F0;
			break;
		
		case 0x000000D5:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x00000104;
			break;
		
		case 0x000000D6:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000113;
			break;
		
		case 0x000000D7:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000113;
			break;
		
		case 0x000000D8:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000D9:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DA:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DB:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DC:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DD:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DE:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000118;
			break;
		
		case 0x000000DF:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C1C;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E0:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00000AF0;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E1:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x000009C4;
			iVar6 = 0x00000003;
			break;
		
		case 0x000000E2:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000BB8;
			iVar6 = 0x00000003;
			break;
		
		default:
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_206(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar1 = 0x00000013;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000012;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000013;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000001;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000016;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x00000014;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000017;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x0000001C;
			iVar6 = 0x00000002;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001A;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x00000018;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001B;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001C;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000019;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000016;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001B;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001D;
			iVar6 = 0x00000002;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar6 = 0x00000004;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x000004F6;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000442;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x00000442;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000460;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000460;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x0000050A;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x0000050A;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000636;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000528;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000008;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000009;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000081;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000087;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000008B;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x00000021;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000021;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000026;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003B;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000008;
			iVar1 = 0x0000001C;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000009;
			iVar1 = 0x0000001E;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000001D;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000020;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000001E;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000001C;
			break;
		
		default:
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_207(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			iVar6 = 0x00000003;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar6 = 0x00000003;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000015, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_208(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x0000000A, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_209(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_226(iParam1);
			break;
		
		case 0x00000002:
			func_225(iParam1);
			break;
		
		case 0x00000003:
			func_222(iParam1);
			break;
		
		case 0x00000004:
			func_221(iParam1);
			break;
		
		case 0x00000006:
			func_220(iParam1);
			break;
		
		case 0x00000005:
			func_219(iParam1);
			break;
		
		case 0x00000008:
			func_218(iParam1);
			break;
		
		case 0x00000009:
			func_217(iParam1);
			break;
		
		case 0x0000000A:
			func_216(iParam1);
			break;
		
		case 0x00000001:
			func_215(iParam1);
			break;
		
		case 0x00000007:
			func_214(iParam1);
			break;
		
		case 0x0000000B:
			func_213(iParam1);
			break;
		
		case 0x0000000C:
			func_212(iParam1);
			break;
		
		case 0x0000000D:
			func_211(iParam1);
			break;
		
		case 0x0000000E:
			func_210(iParam1);
			break;
	}
}

void func_210(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000E;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0xFFFFFFFF;
			iVar4 = 0x00000000;
			iVar1 = 0x00000000;
			iVar5 = 0x00000008;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000140;
			iVar5 = 0x0000000B;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000006;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000007;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x0000010E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x000000C8;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x0000015E;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			iVar1 = 0x000001C2;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000001F4;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000032;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000063;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar5 = 0x00000000;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000037;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000038;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003C;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x00000041;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x00000048;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x00000046;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x0000004A;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000004E;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000052;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x00000055;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x00000055;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000001;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000002;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000003;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000004;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000005;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000006;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000007;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000008;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000009;
			iVar1 = 0x00000045;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x000000AA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000B4;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000C3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x000000EB;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x000000F5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x000000FA;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000113;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000118;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000127;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			iVar1 = 0x000000B3;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			iVar1 = 0x0000009F;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			iVar1 = 0x000000A5;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			iVar1 = 0x0000009B;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			iVar1 = 0x000000AF;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			iVar1 = 0x000000B9;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			iVar1 = 0x000000BD;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000007;
			iVar1 = 0x000000E1;
			iVar5 = 0x0000000A;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			iVar1 = 0x00000064;
			iVar5 = 0x0000000A;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			iVar5 = 0x00000002;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000071, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_211(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000D;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x0000000A, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_212(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000C;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00002710;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000069;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000F3C;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00000FA0;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x000011F8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001130;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001130;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001324;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000157C;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x00001194;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			iVar1 = 0x0000170C;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000035, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_213(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000B;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			iVar1 = 0x00000186;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			iVar1 = 0x00000186;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			iVar1 = 0x000001A4;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			iVar1 = 0x000001EA;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000005;
			iVar1 = 0x000001EA;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000006;
			iVar1 = 0x0000021C;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000007;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000008;
			iVar1 = 0x00000226;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000009;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000001;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000002;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000004;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000005;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000006;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000007;
			iVar1 = 0x000003D4;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000008;
			iVar1 = 0x0000041A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000009;
			iVar1 = 0x0000044C;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			iVar1 = 0x00000762;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000001;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000002;
			iVar1 = 0x0000071C;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000003;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000004;
			iVar1 = 0x0000073A;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000005;
			iVar1 = 0x0000076C;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000006;
			iVar1 = 0x00000780;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000007;
			iVar1 = 0x000007BC;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000008;
			iVar1 = 0x00000834;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000009;
			iVar1 = 0x00000848;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000A;
			iVar1 = 0x000007D0;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000898;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000C;
			iVar1 = 0x000008E8;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000D;
			iVar1 = 0x000008FC;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000092E;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x0000000F;
			iVar1 = 0x000008E8;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x0000002D, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_214(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000007;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000001, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_215(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000001;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000005, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_216(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x0000000A;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000004;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000005;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000006;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000009;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000A;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000B;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000C;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x0000000F;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000030, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_217(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000009;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000055;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x000000AF;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000014, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_218(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000008;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000018, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_219(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000005;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x0000000E, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_220(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000006;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			iVar1 = 0x00000299;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x0000026C;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			iVar1 = 0x0000021C;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			iVar1 = 0x00000244;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000040;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x00000038;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x00000045;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			iVar1 = 0x0000003B;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x0000004A;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000008;
			iVar1 = 0x00000048;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000009;
			iVar1 = 0x00000046;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x0000004B;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			iVar1 = 0x00000316;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x0000035C;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x000002EE;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x00000316;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x00000320;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000008;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000009;
			iVar1 = 0x00000366;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002E4;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000D;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000302;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000035C;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x00000320;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x0000030C;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x0000037A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000006;
			iVar1 = 0x00000366;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000007;
			iVar1 = 0x000003A2;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000008;
			iVar1 = 0x00000370;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000009;
			iVar1 = 0x00000384;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000398;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000B;
			iVar1 = 0x000003CA;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000C;
			iVar1 = 0x000003DE;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000D;
			iVar1 = 0x000003C0;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000E;
			iVar1 = 0x000003D4;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x0000000F;
			iVar1 = 0x000003B6;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000087;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000091;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000007D;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000082;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x000002A8;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x0000029E;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x000002BC;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x000002A8;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x000002D0;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x000002E4;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x000002F8;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x0000030C;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x000002BC;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000063, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_221(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000004;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000076;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000006;
			iVar1 = 0x00000080;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000007;
			iVar1 = 0x0000007D;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000001;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000002;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000003;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000004;
			iVar1 = 0x00000044;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000226;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000028A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000003;
			iVar1 = 0x0000036B;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000004;
			iVar1 = 0x00000334;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000005;
			iVar1 = 0x000002D0;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000006;
			iVar1 = 0x000002EE;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000007;
			iVar1 = 0x00000352;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000026;
			break;
		
		case 0x0000003C:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002A;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002E;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000008;
			iVar1 = 0x0000002E;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000009;
			iVar1 = 0x0000002E;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000032;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000002A;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000001;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000002;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000003;
			iVar1 = 0x00000122;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000004;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000005;
			iVar1 = 0x0000010E;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000006;
			iVar1 = 0x0000000F;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000007;
			iVar1 = 0x0000000C;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000076;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			iVar1 = 0x0000008C;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000082;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000003;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000004;
			iVar1 = 0x00000034;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000005;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000006;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000007;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000008;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000009;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000003C;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000C;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000041;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000071, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_222(int iParam0)
{
	if (iParam0 < 0x0000003C)
	{
		func_224(iParam0);
	}
	else
	{
		func_223(iParam0);
	}
	if (Global_12A92[0x00000000 /*14*/].f_2 == 0xFFFFFFFF)
	{
		func_173(0x00000003, iParam0, 0x000000B5, 0xFFFFFFFF);
	}
}

void func_223(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x0000003C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000009;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003D:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000A;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003E:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000003F:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000040:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000041:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000002;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000042:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000003;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000043:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000004;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000044:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000C;
			iVar4 = 0x00000005;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000045:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000046:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000047:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000048:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000002;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000049:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000003;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004A:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000004;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004B:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 0x0000000E;
			iVar4 = 0x00000005;
			iVar1 = 0x00000078;
			break;
		
		case 0x0000004C:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000000F;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000004D:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000004E:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000001;
			iVar1 = 0x00000014;
			break;
		
		case 0x0000004F:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000002;
			iVar1 = 0x00000018;
			break;
		
		case 0x00000050:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000003;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000051:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000004;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000052:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000005;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000053:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000054:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 0x00000010;
			iVar4 = 0x00000007;
			iVar1 = 0x0000001B;
			break;
		
		case 0x00000055:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000056:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000057:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000058:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000003;
			iVar1 = 0x00000030;
			break;
		
		case 0x00000059:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000004;
			iVar1 = 0x00000028;
			break;
		
		case 0x0000005A:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 0x00000011;
			iVar4 = 0x00000005;
			iVar1 = 0x0000002D;
			break;
		
		case 0x0000005B:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000012;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x0000005C:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000005D:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000001;
			iVar1 = 0x000000BE;
			break;
		
		case 0x0000005E:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000002;
			iVar1 = 0x000000BE;
			break;
		
		case 0x0000005F:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000003;
			iVar1 = 0x000000BE;
			break;
		
		case 0x00000060:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 0x00000013;
			iVar4 = 0x00000004;
			iVar1 = 0x000000D2;
			break;
		
		case 0x00000061:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000062:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000001;
			iVar1 = 0x00000073;
			break;
		
		case 0x00000063:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000002;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000064:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000003;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000065:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000004;
			iVar1 = 0x00000063;
			break;
		
		case 0x00000066:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000005;
			iVar1 = 0x00000031;
			break;
		
		case 0x00000067:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000006;
			iVar1 = 0x00000078;
			break;
		
		case 0x00000068:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000007;
			iVar1 = 0x0000002D;
			break;
		
		case 0x00000069:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000008;
			iVar1 = 0x00000073;
			break;
		
		case 0x0000006A:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x00000009;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000006B:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000005A;
			break;
		
		case 0x0000006C:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000B;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000006D:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000006E:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000006F:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000023;
			break;
		
		case 0x00000070:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 0x00000014;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000071:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000000;
			iVar1 = 0x00000058;
			break;
		
		case 0x00000072:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000001;
			iVar1 = 0x0000003C;
			break;
		
		case 0x00000073:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000002;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000074:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000003;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000075:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000004;
			iVar1 = 0x0000005A;
			break;
		
		case 0x00000076:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000005;
			iVar1 = 0x00000050;
			break;
		
		case 0x00000077:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000006;
			iVar1 = 0x00000046;
			break;
		
		case 0x00000078:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000007;
			iVar1 = 0x0000005F;
			break;
		
		case 0x00000079:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000008;
			iVar1 = 0x00000069;
			break;
		
		case 0x0000007A:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x00000009;
			iVar1 = 0x0000005F;
			break;
		
		case 0x0000007B:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000A;
			iVar1 = 0x0000006E;
			break;
		
		case 0x0000007C:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000007D:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000058;
			break;
		
		case 0x0000007E:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000062;
			break;
		
		case 0x0000007F:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000006E;
			break;
		
		case 0x00000080:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 0x00000015;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000062;
			break;
		
		case 0x00000081:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000082:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000001;
			iVar1 = 0x00001356;
			break;
		
		case 0x00000083:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000002;
			iVar1 = 0x00001063;
			break;
		
		case 0x00000084:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C7B;
			break;
		
		case 0x00000085:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000004;
			iVar1 = 0x00000B86;
			break;
		
		case 0x00000086:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 0x00000016;
			iVar4 = 0x00000005;
			iVar1 = 0x00000F6E;
			break;
		
		case 0x00000087:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000000;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000088:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000001;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000089:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000002;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008A:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000003;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008B:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000004;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008C:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000005;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008D:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000006;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008E:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000007;
			iVar1 = 0x00000C80;
			break;
		
		case 0x0000008F:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000008;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000090:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x00000009;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000091:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000092:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000093:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000094:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000D;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000095:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000096:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 0x00000017;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000C80;
			break;
		
		case 0x00000097:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000000;
			iVar1 = 0x00000546;
			break;
		
		case 0x00000098:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000001;
			iVar1 = 0x00000578;
			break;
		
		case 0x00000099:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000002;
			iVar1 = 0x000004B0;
			break;
		
		case 0x0000009A:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000003;
			iVar1 = 0x000004E2;
			break;
		
		case 0x0000009B:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000004;
			iVar1 = 0x00000546;
			break;
		
		case 0x0000009C:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000005;
			iVar1 = 0x00000514;
			break;
		
		case 0x0000009D:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000006;
			iVar1 = 0x00000564;
			break;
		
		case 0x0000009E:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000007;
			iVar1 = 0x0000053C;
			break;
		
		case 0x0000009F:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000008;
			iVar1 = 0x00000564;
			break;
		
		case 0x000000A0:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 0x00000018;
			iVar4 = 0x00000009;
			iVar1 = 0x000004E2;
			break;
		
		case 0x000000A1:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000000;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A2:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000001;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A3:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000002;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A4:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000003;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A5:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000004;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A6:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000005;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A7:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000006;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A8:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 0x00000019;
			iVar4 = 0x00000007;
			iVar1 = 0x00000348;
			break;
		
		case 0x000000A9:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 0x0000001A;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000AA:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x0000001B;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x000000AB:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000000;
			break;
		
		case 0x000000AC:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000001;
			iVar1 = 0x00000082;
			break;
		
		case 0x000000AD:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 0x0000001C;
			iVar4 = 0x00000002;
			iVar1 = 0x0000006E;
			break;
		
		case 0x000000AE:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 0x0000001D;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x000000AF:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000000;
			iVar1 = 0x00000122;
			break;
		
		case 0x000000B0:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 0x0000001E;
			iVar4 = 0x00000001;
			iVar1 = 0x00000140;
			break;
		
		case 0x000000B1:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000000;
			iVar1 = 0x0000003B;
			break;
		
		case 0x000000B2:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000001;
			iVar1 = 0x00000037;
			break;
		
		case 0x000000B3:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000002;
			iVar1 = 0x0000003B;
			break;
		
		case 0x000000B4:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 0x0000001F;
			iVar4 = 0x00000003;
			iVar1 = 0x00000031;
			break;
		
		default:
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_224(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000003;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			iVar1 = 0x00000DAC;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		case 0x00000007:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000007;
			break;
		
		case 0x00000008:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000008;
			break;
		
		case 0x00000009:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000009;
			break;
		
		case 0x0000000A:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000A;
			break;
		
		case 0x0000000B:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000B;
			break;
		
		case 0x0000000C:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000C;
			break;
		
		case 0x0000000D:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000D;
			break;
		
		case 0x0000000E:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000E;
			break;
		
		case 0x0000000F:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x0000000F;
			break;
		
		case 0x00000010:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000011:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000012:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000001;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000013:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000002;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000014:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000003;
			iVar1 = 0x00000019;
			break;
		
		case 0x00000015:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000004;
			iVar1 = 0x00000013;
			break;
		
		case 0x00000016:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000005;
			iVar1 = 0x00000014;
			break;
		
		case 0x00000017:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000006;
			iVar1 = 0x00000016;
			break;
		
		case 0x00000018:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000007;
			iVar1 = 0x00000012;
			break;
		
		case 0x00000019:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000008;
			iVar1 = 0x00000027;
			break;
		
		case 0x0000001A:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000009;
			iVar1 = 0x00000020;
			break;
		
		case 0x0000001B:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000001C:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000023;
			break;
		
		case 0x0000001D:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000C;
			iVar1 = 0x000000D2;
			break;
		
		case 0x0000001E:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000D;
			iVar1 = 0x000000FA;
			break;
		
		case 0x0000001F:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000E;
			iVar1 = 0x00000122;
			break;
		
		case 0x00000020:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x0000000F;
			iVar1 = 0x00000136;
			break;
		
		case 0x00000021:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000022:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000001;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000023:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000024:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000025:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000006;
			iVar4 = 0x00000000;
			bVar0 = 0x00000001;
			break;
		
		case 0x00000026:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000000;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000027:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000001;
			iVar1 = 0x000000A0;
			break;
		
		case 0x00000028:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000002;
			iVar1 = 0x00000096;
			break;
		
		case 0x00000029:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000003;
			iVar1 = 0x00000096;
			break;
		
		case 0x0000002A:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000004;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000002B:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 0x00000007;
			iVar4 = 0x00000005;
			iVar1 = 0x000000A0;
			break;
		
		case 0x0000002C:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000000;
			break;
		
		case 0x0000002D:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000001;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002E:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000002;
			iVar1 = 0x00000034;
			break;
		
		case 0x0000002F:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000003;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000030:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000004;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000031:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000005;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000032:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000006;
			iVar1 = 0x0000003A;
			break;
		
		case 0x00000033:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000007;
			iVar1 = 0x0000003E;
			break;
		
		case 0x00000034:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000008;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000035:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x00000009;
			iVar1 = 0x00000041;
			break;
		
		case 0x00000036:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000A;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000037:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000B;
			iVar1 = 0x00000044;
			break;
		
		case 0x00000038:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000C;
			iVar1 = 0x00000037;
			break;
		
		case 0x00000039:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000D;
			iVar1 = 0x0000003E;
			break;
		
		case 0x0000003A:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000E;
			iVar1 = 0x0000003A;
			break;
		
		case 0x0000003B:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 0x00000008;
			iVar4 = 0x0000000F;
			iVar1 = 0x0000003A;
			break;
		
		default:
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_225(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000002;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 0x00000001;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 0x00000002;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 0x00000003;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 0x00000004;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000005;
			iVar4 = 0x00000000;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000006, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_226(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = 0x00000000;
	iVar1 = 0x0000000A;
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	iVar5 = 0xFFFFFFFF;
	iVar6 = 0x00000002;
	iVar7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_5 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			break;
		
		case 0x00000001:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000001;
			break;
		
		case 0x00000002:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000002;
			break;
		
		case 0x00000003:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000003;
			break;
		
		case 0x00000004:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000004;
			break;
		
		case 0x00000005:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000005;
			break;
		
		case 0x00000006:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0x00000000;
			iVar4 = 0x00000006;
			break;
		
		default:
			func_173(iVar7, iParam0, 0x00000007, 0xFFFFFFFF);
			return;
			break;
	}
	func_167(&(Global_12A92[0x00000000 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0x00000000);
}

void func_227()
{
	Global_12A92[0x00000000 /*14*/].f_1 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_2 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_5 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_3 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_4 = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_7 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_6 = 0x00000000;
	Global_12A92[0x00000000 /*14*/].f_D = 0xFFFFFFFF;
	Global_12A92[0x00000000 /*14*/].f_C = 0x00000000;
	Global_12A92[0x00000000 /*14*/] = 0x00000000;
	StringCopy(&(Global_12A92[0x00000000 /*14*/].f_8), "NO_LABEL", 16);
}

int func_228(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	Global_12A92[0x00000001 /*14*/] = { func_164(iVar0, iParam1, iParam2, 0xFFFFFFFF) };
	if (!unk_0xEAE0D21A50E6C7F4(Global_12A92[0x00000001 /*14*/].f_6, 0x00000000))
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000000C)
	{
		uVar5 = { func_149(iVar0, iParam2) };
		iVar2 = 0x00000000;
		while (iVar2 <= 0x0000000E)
		{
			if ((uVar5[iVar2] != 0xFFFFFF9D && iVar2 != 0x0000000C) && iVar2 != 0x0000000E)
			{
				if (!func_228(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 0x0000000D)
					{
						uVar6 = { func_146(iVar0, uVar5[iVar2]) };
						iVar3 = 0x00000000;
						while (iVar3 <= 0x00000008)
						{
							if (!func_228(iParam0, 0x0000000E, uVar6[iVar3]))
							{
								iVar4 = 0x00000000;
								while (iVar4 <= 0x00000013)
								{
									Global_12A92[0x00000002 /*14*/] = { func_164(iVar0, 0x0000000E, iVar4, 0xFFFFFFFF) };
									if (Global_12A92[0x00000002 /*14*/].f_C == iVar3)
									{
										if (func_228(iParam0, 0x0000000E, iVar4))
										{
											if (!func_123(iVar0, iParam2, 0x0000000E, iVar4, &uVar5, &(Global_12A92[0x00000002 /*14*/])))
											{
												return 0x00000000;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_157(iParam0, iVar2);
						Global_12A92[0x00000002 /*14*/] = { func_164(iVar0, iVar2, iVar1, 0xFFFFFFFF) };
						if (!func_123(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_12A92[0x00000002 /*14*/])))
						{
							return 0x00000000;
						}
					}
				}
			}
			iVar2++;
		}
		return 0x00000001;
	}
	else if (iParam1 == 0x0000000D)
	{
		uVar8 = { func_146(iVar0, iParam2) };
		iVar7 = 0x00000000;
		while (iVar7 <= 0x00000008)
		{
			if (!func_228(iParam0, 0x0000000E, uVar8[iVar7]))
			{
				return 0x00000000;
			}
			iVar7++;
		}
		return 0x00000001;
	}
	else if (iParam1 == 0x0000000E)
	{
		if (unk_0x98F1B512A2CC07C5(iParam0, Global_12A92[0x00000001 /*14*/].f_C) == Global_12A92[0x00000001 /*14*/].f_3 && (unk_0x22286A85EDEAEC56(iParam0, Global_12A92[0x00000001 /*14*/].f_C) == Global_12A92[0x00000001 /*14*/].f_4 || Global_12A92[0x00000001 /*14*/].f_3 == 0xFFFFFFFF))
		{
			return 0x00000001;
		}
	}
	else if (Global_12A92[0x00000001 /*14*/].f_3 == unk_0x36C584991B4C183F(iParam0, func_127(iParam1)) && Global_12A92[0x00000001 /*14*/].f_4 == unk_0xDADA8E1DD0D0D9D9(iParam0, func_127(iParam1)))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_229(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA30EC016B12C03E4();
	if (!unk_0x131F22FE6F47A65D(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0x98E4DC66A651C9FA(iVar0, bParam0, 0x00000010);
		unk_0x98E4DC66A651C9FA(iVar0, bParam0, 0x00000020);
	}
	func_230(0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_230(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_237(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_30())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_236(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_237(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_236(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_234(unk_0xD803B885F5E47A62())) && !func_232(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_231()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_234(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_231()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_232(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_233(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_233(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_53();
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

int func_234(int iParam0)
{
	if (func_232(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_235())
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

bool func_235()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_236(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 0x00000001, iParam3);
			iVar0 = 0x00000001;
		}
	}
	return iVar0;
}

void func_237(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000000D);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x0000000D);
	}
}

bool func_238(int iParam0, var uParam1, float fParam2, bool bParam3)
{
	struct<8> Var0;
	struct<8> Var1;
	
	Var0 = 0x00000002;
	if (!func_302(uParam1->f_2))
	{
		return 0x00000000;
	}
	func_244(&Var0, unk_0x68E4ADDDDCD7BDDE(uParam1->f_2, 0f, 2.75f, vLocal_56.z) + Vector(1f, 0f, 0f), unk_0x68E4ADDDDCD7BDDE(uParam1->f_2, 0f, -2.75f, vLocal_56.z) - Vector(1f, 0f, 0f), 3f);
	if (bParam3)
	{
		func_241(&Var0, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
	}
	if (fParam2 > 0f)
	{
		Var1 = { func_239(Var0, fParam2) };
		return unk_0x3D1053F9EB43B7AD(iParam0, Var1[0x00000000 /*3*/], Var1[0x00000001 /*3*/], Var1.f_7, 0x00000000, 0x00000001, 0x00000000);
	}
	return unk_0x3D1053F9EB43B7AD(iParam0, Var0[0x00000000 /*3*/], Var0[0x00000001 /*3*/], Var0.f_7, 0x00000000, 0x00000001, 0x00000000);
}

struct<8> func_239(struct<8> Param0, float fParam1)
{
	struct<8> Var0;
	vector3 vVar1;
	
	Var0 = 0x00000002;
	vVar1 = { func_240(Param0[0x00000001 /*3*/] - Param0[0x00000000 /*3*/]) * Vector(fParam1, fParam1, fParam1) };
	Var0[0x00000000 /*3*/] = { Param0[0x00000000 /*3*/] - vVar1 };
	Var0[0x00000001 /*3*/] = { Param0[0x00000001 /*3*/] + vVar1 };
	Var0.f_7 = (Param0.f_7 + (fParam1 * 2f));
	return Var0;
}

Vector3 func_240(vector3 vParam0)
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

void func_241(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_242(*(uParam0[0x00000000 /*3*/]), *(uParam0[0x00000001 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_242(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5[8];
	int iVar6;
	
	if (fParam2 == 0f)
	{
		return;
	}
	vVar0 = { func_240(vParam1 - vParam0) };
	vVar1 = { func_243(vVar0, 0f, 0f, 1f) };
	fVar2 = (fParam2 / 2f);
	vVar3 = { vParam0 };
	vVar4 = { vParam1 };
	vVar4.z = vParam0.z;
	vVar5[0x00000000 /*3*/] = { vVar3 - vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[0x00000001 /*3*/] = { vVar3 + vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[0x00000002 /*3*/] = { vVar4 + vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[0x00000003 /*3*/] = { vVar4 - vVar1 * Vector(fVar2, fVar2, fVar2) };
	unk_0x4ADCCF23C40DC113(vVar5[0x00000000 /*3*/], vVar5[0x00000001 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000001 /*3*/], vVar5[0x00000002 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000002 /*3*/], vVar5[0x00000003 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000003 /*3*/], vVar5[0x00000000 /*3*/], iParam3, iParam4, iParam5, iParam6);
	iVar6 = 0x00000000;
	while (iVar6 <= 0x00000003)
	{
		vVar5[(0x00000004 + iVar6) /*3*/] = { vVar5[iVar6 /*3*/] };
		vVar5[(0x00000004 + iVar6) /*3*/].f_2 = vParam1.z;
		iVar6++;
	}
	unk_0x4ADCCF23C40DC113(vVar5[0x00000004 /*3*/], vVar5[0x00000005 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000005 /*3*/], vVar5[0x00000006 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000006 /*3*/], vVar5[0x00000007 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000007 /*3*/], vVar5[0x00000004 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000000 /*3*/], vVar5[0x00000004 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000001 /*3*/], vVar5[0x00000005 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000002 /*3*/], vVar5[0x00000006 /*3*/], iParam3, iParam4, iParam5, iParam6);
	unk_0x4ADCCF23C40DC113(vVar5[0x00000003 /*3*/], vVar5[0x00000007 /*3*/], iParam3, iParam4, iParam5, iParam6);
}

Vector3 func_243(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

void func_244(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	*(uParam0[0x00000000 /*3*/]) = { vParam1 };
	*(uParam0[0x00000001 /*3*/]) = { vParam2 };
	uParam0->f_7 = fParam3;
}

void func_245(var uParam0)
{
	unk_0x2FB9A57162E54BAB(0f);
	unk_0xEF6276132B396452(0f, 0x3F800000);
	unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
	func_282(&uLocal_225, 0x00000000);
	if (uParam0->f_B == 0x00000001)
	{
		func_39(unk_0x16F2683693E537C9(), uParam0);
		func_39(func_96(), uParam0);
		func_39(func_54(), uParam0);
	}
	func_281(&Local_69, 0x00000000, 0x00000001);
	func_307(0x00000001, 0x00000001, 0x00000001, 0x00000001);
	if (uParam0->f_B == 0x00000001)
	{
		Global_7835 = 0x00000000;
	}
	if (iLocal_228 == 0x00000001)
	{
		iLocal_228 = 0x00000000;
		unk_0xF59BE6DDBCFD2F1C();
	}
}

void func_246(var uParam0)
{
	vector3 vVar0;
	
	vVar0 = { vLocal_57 };
	if (func_302(unk_0x16F2683693E537C9()) && func_302(uParam0->f_2))
	{
		if (unk_0xD59B17D2DFF98E26(unk_0x16F2683693E537C9()))
		{
			unk_0x15AFB6CBDE990FB6(unk_0x16F2683693E537C9(), 0x00000001, 0x00000001);
		}
		unk_0x9F528B1B53FBC5D9(unk_0x16F2683693E537C9(), uParam0->f_2, 0x00000000, vVar0, 0f, 0f, -90f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
	func_248(uParam0);
	func_247(uParam0);
}

void func_247(var uParam0)
{
	vector3 vVar0;
	
	vVar0 = { vLocal_57 };
	if (func_302(func_54()) && func_302(uParam0->f_2))
	{
		if (unk_0xD59B17D2DFF98E26(func_54()))
		{
			unk_0x15AFB6CBDE990FB6(func_54(), 0x00000001, 0x00000001);
		}
		vVar0.x = (vVar0.x - 0.4f);
		vVar0.y = (vVar0.y - 0.5f);
		unk_0x9F528B1B53FBC5D9(func_54(), uParam0->f_2, 0x00000000, vVar0, 0f, 0f, -90f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
}

void func_248(var uParam0)
{
	vector3 vVar0;
	
	vVar0 = { vLocal_57 };
	if (func_302(func_96()) && func_302(uParam0->f_2))
	{
		if (unk_0xD59B17D2DFF98E26(func_96()))
		{
			unk_0x15AFB6CBDE990FB6(func_96(), 0x00000001, 0x00000001);
		}
		vVar0.x = (vVar0.x + 0.2f);
		vVar0.y = (vVar0.y + 0.5f);
		unk_0x9F528B1B53FBC5D9(func_96(), uParam0->f_2, 0x00000000, vVar0, 0f, 0f, -90f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
}

void func_249(var uParam0, var uParam1)
{
	float fVar0;
	
	fVar0 = uParam0->f_F[0x00000001];
	if (*uParam0 == 0x00000000)
	{
		return;
	}
	if (uParam0->f_14 <= 0x00000000 || func_284(uParam0->f_1[0x00000001 /*3*/]))
	{
		func_250(uParam0, uParam1, 0x00000000, 0x00000000, 0x00000001, 0x00000001);
		return;
	}
	if (fVar0 == 0f)
	{
		fVar0 = uParam0->f_F[0x00000000];
	}
	func_282(uParam1, 0x00000000);
	*uParam1 = unk_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", uParam0->f_1[0x00000001 /*3*/], uParam0->f_8[0x00000001 /*3*/], fVar0, 0x00000001, 0x00000002);
	if (!unk_0x9F4FE516EAACCFC5(*uParam1))
	{
		return;
	}
	uParam0->f_13 = unk_0x1C0640BA9A7327B3();
	unk_0xE3BB8E05FCEB3FBE(*uParam1, 0x00000001);
	unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	unk_0x86F44313DFA8F00C(*uParam1, uParam0->f_1[0x00000000 /*3*/], uParam0->f_8[0x00000000 /*3*/], uParam0->f_F[0x00000000], uParam0->f_14, 0x00000001, 0x00000001, 0x00000002);
	if (func_302(uParam0->f_15))
	{
		unk_0x1305278186D1C53E(*uParam1, uParam0->f_15, 0f, 0f, 0f, 0x00000001);
	}
}

void func_250(var uParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	vector3 vVar0;
	float fVar1;
	
	fVar1 = uParam0->f_F[0x00000001];
	if (*uParam0 == 0x00000000)
	{
		return;
	}
	func_282(uParam1, 0x00000000);
	vVar0 = { uParam0->f_1[0x00000000 /*3*/] };
	if (bParam2)
	{
		vVar0.z = (vVar0.z + uParam0->f_12);
	}
	*uParam1 = unk_0x764D630505EFC040("DEFAULT_SCRIPTED_CAMERA", vVar0, uParam0->f_8[0x00000000 /*3*/], uParam0->f_F[0x00000000], 0x00000001, 0x00000002);
	if (!unk_0x9F4FE516EAACCFC5(*uParam1))
	{
		return;
	}
	uParam0->f_13 = unk_0x1C0640BA9A7327B3();
	unk_0xE3BB8E05FCEB3FBE(*uParam1, 0x00000001);
	unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	if ((!bParam3 && uParam0->f_14 > 0x00000000) && !func_284(uParam0->f_1[0x00000001 /*3*/]))
	{
		vVar0 = { uParam0->f_1[0x00000001 /*3*/] };
		if (bParam2)
		{
			vVar0.z = (vVar0.z + uParam0->f_12);
		}
		if (fVar1 == 0f)
		{
			fVar1 = uParam0->f_F[0x00000000];
		}
		unk_0x86F44313DFA8F00C(*uParam1, vVar0, uParam0->f_8[0x00000001 /*3*/], fVar1, uParam0->f_14, iParam4, iParam5, 0x00000002);
	}
	else if (func_302(uParam0->f_15))
	{
		unk_0x1305278186D1C53E(*uParam1, uParam0->f_15, 0f, 0f, 0f, 0x00000001);
	}
}

int func_251(var uParam0)
{
	if (uParam0->f_F == 0x00000000)
	{
		if (uParam0->f_11 == 1f)
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000001;
		}
	}
	if (uParam0->f_11 == -1f)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_252()
{
	func_281(&Local_69, 0x00000000, 0x00000001);
	unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
	func_250(&uLocal_202, &uLocal_225, 0x00000000, 0x00000000, 0x00000001, 0x00000001);
	iLocal_53 = 0x00000001;
	bLocal_79 = 0x00000000;
}

void func_253(var uParam0)
{
	if (func_251(uParam0) == 0x00000000)
	{
		func_263(uParam0);
	}
	else
	{
		func_255(uParam0);
	}
	func_254();
}

void func_254()
{
	return;
	if (unk_0xEB880D98B5988D0C() && unk_0x68367101660E33F0())
	{
		unk_0x486B4ADE317F0689();
		iLocal_239 = 0x00000001;
		iLocal_234 = 0x00000000;
		return;
	}
	if (iLocal_234 > 0x00000000 && unk_0x1C0640BA9A7327B3() > iLocal_234)
	{
		iLocal_234 = 0x00000000;
		return;
	}
}

void func_255(var uParam0)
{
	int iVar0;
	struct<23> Var1;
	
	iVar0 = 0x00000000;
	Var1.f_1 = 0x00000002;
	Var1.f_8 = 0x00000002;
	Var1.f_F = 0x00000002;
	Var1.f_16 = 0xC2C60000;
	switch (iLocal_226)
	{
		case 0x00000000:
			func_261(&uLocal_202, 461.3928f, 5634.593f, 803.8433f, -21.1986f, 0.0407f, 152.8518f, 0x00000000, 0x00000000);
			func_260(&uLocal_202, 465.1065f, 5631.494f, 803.8177f, -26.0362f, 0.0546f, 133.1987f, 0x000059D8);
			func_259(&uLocal_202, 40f, 0x00000000);
			iLocal_226++;
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			iLocal_226++;
			break;
		
		case 0x00000002:
		case 0x00000003:
			func_258(215.1628f, 5595.83f, 615.1234f, 22.9775f, 0f, -111.6452f, 0x43480000);
			if (uParam0->f_14 > 112f)
			{
				func_261(&uLocal_202, 215.1628f, 5595.83f, 615.1234f, 22.9775f, 0f, -111.6452f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, 221.7997f, 5593.111f, 597.789f, 17.1025f, 0f, -121.5107f, 0x00004650);
				func_259(&uLocal_202, 45f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000004:
			iLocal_226++;
			break;
		
		case 0x00000005:
			func_258(251.0161f, 5575.745f, 617.5678f, -56.0667f, 0f, 89.7301f, 0x43480000);
			if (uParam0->f_14 > 288f)
			{
				func_261(&uLocal_202, 251.0161f, 5575.745f, 617.5678f, -56.0667f, 0f, 89.7301f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, 248.8245f, 5575.748f, 619.0521f, -54.605f, 0f, 89.7301f, 0x00002AF8);
				func_259(&uLocal_202, 45f, 0x00000000);
				func_256(&Var1, 0x00000010);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000006:
			func_258(-69.826f, 5595.765f, 390.4564f, 25.1669f, 0f, -110.119f, 0x43480000);
			if (uParam0->f_14 > 400f)
			{
				func_261(&uLocal_202, -69.826f, 5595.765f, 390.4564f, 25.1669f, 0f, -110.119f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -68.5961f, 5595.183f, 386.8474f, 20.6269f, 0f, -115.1379f, 0x00004650);
				func_259(&uLocal_202, 40.43f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
			func_258(-6.2591f, 5609.318f, 402.8656f, -0.9222f, 0f, 153.9538f, 0x43480000);
			if (uParam0->f_14 > 575f)
			{
				func_261(&uLocal_202, -6.2591f, 5609.318f, 402.8656f, -0.9222f, 0f, 153.9538f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -5.9107f, 5609.613f, 401.1573f, -11.4635f, 0f, 130.2651f, 0x00002710);
				func_259(&uLocal_202, 55f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000000B:
			func_258(-215.7561f, 5606.187f, 282.0778f, 22.8233f, 0f, -118.7368f, 0x43480000);
			if (uParam0->f_14 > 660f)
			{
				func_261(&uLocal_202, -215.7561f, 5606.187f, 282.0778f, 22.8233f, 0f, -118.7368f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -199.8146f, 5615.971f, 284.7165f, 22.8233f, 0f, -138.4323f, 0x00002710);
				func_259(&uLocal_202, 40.026f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000000C:
			func_258(-61.8849f, 5558.974f, 338.9037f, -15.2417f, 0f, 104.1686f, 0x43480000);
			if (uParam0->f_14 > 740f)
			{
				func_261(&uLocal_202, -61.8849f, 5558.974f, 338.9037f, -15.2417f, 0f, 104.1686f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -58.0053f, 5559.955f, 323.449f, -10.6159f, 0f, 104.1686f, 0x00002710);
				func_259(&uLocal_202, 47.9808f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000000D:
			func_258(-291.6088f, 5570.382f, 227.2185f, 26.4681f, 0f, -73.2798f, 0x43480000);
			if (uParam0->f_14 > 840f)
			{
				func_261(&uLocal_202, -291.6088f, 5570.382f, 227.2185f, 26.4681f, 0f, -73.2798f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -292.7007f, 5575.862f, 227.2185f, 24.417f, 0f, -69.0123f, 0x00002710);
				func_259(&uLocal_202, 40.05f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000000E:
			func_258(-509.6508f, 5683.843f, 89.9184f, 21.3193f, 0f, -128.1549f, 0x43480000);
			if (uParam0->f_14 > 920f)
			{
				func_261(&uLocal_202, -509.6508f, 5683.843f, 89.9184f, 21.3193f, 0f, -128.1549f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -511.7916f, 5681.12f, 89.9184f, 21.3193f, 0f, -128.1549f, 0x00004650);
				func_259(&uLocal_202, 40f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000000F:
			iLocal_226++;
			break;
		
		case 0x00000010:
			func_258(-475.9374f, 5375.989f, 94.2374f, 6.8777f, 0f, 6.4845f, 0x43480000);
			if (uParam0->f_14 > 1090f)
			{
				func_261(&uLocal_202, -475.9374f, 5375.989f, 94.2374f, 6.8777f, 0f, 6.4845f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -475.9374f, 5375.989f, 94.2374f, -2.0745f, 0f, 21.1399f, 0x00003E80);
				func_259(&uLocal_202, 30f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000011:
			iLocal_226++;
			break;
		
		case 0x00000012:
			iLocal_226++;
			break;
		
		case 0x00000013:
			iLocal_226++;
			break;
		
		case 0x00000014:
			func_258(-674.5237f, 5574.565f, 41.1581f, 15.6335f, 0f, -77.0593f, 0x43480000);
			if (uParam0->f_14 > 1245f)
			{
				func_261(&uLocal_202, -674.5237f, 5574.565f, 41.1581f, 15.6335f, 0f, -77.0593f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -675.0132f, 5576.074f, 41.1581f, 24.5521f, 0f, -57.769f, 0x000032C8);
				func_259(&uLocal_202, 45f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000015:
			iLocal_226++;
			break;
		
		case 0x00000016:
			func_258(-743.0775f, 5570.776f, 47.8665f, -3.7547f, 0.251f, -46.5015f, 0x43480000);
			if (uParam0->f_14 > 1355f)
			{
				func_261(&uLocal_202, -743.0775f, 5570.776f, 47.8665f, -3.7547f, 0.251f, -46.5015f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -749.04f, 5577.421f, 47.9055f, -9.6095f, 0.251f, -48.8215f, 0x00004E20);
				func_259(&uLocal_202, 45f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
	}
	if (iVar0 == 0x00000001 && bLocal_79 == 0x00000000)
	{
		func_250(&uLocal_202, &uLocal_225, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		iLocal_53 = 0x00000001;
	}
}

void func_256(var uParam0, int iParam1)
{
	vector3 vVar0;
	
	return;
	if (iLocal_235 != iParam1)
	{
		unk_0x486B4ADE317F0689();
		vVar0 = { func_257(uParam0->f_8[0x00000000 /*3*/]) };
		if (unk_0x9E632F16E887F781(uParam0->f_1[0x00000000 /*3*/] + vVar0 * Vector(140f, 140f, 140f), 141f, 0x00000002))
		{
			iLocal_234 = unk_0x1C0640BA9A7327B3() + 10000;
			iLocal_235 = iParam1;
			vLocal_236 = { uParam0->f_1[0x00000000 /*3*/] };
			vLocal_237 = { vVar0 };
			fLocal_238 = 100f;
			iLocal_239 = 0x00000000;
		}
	}
}

Vector3 func_257(vector3 vParam0)
{
	return (-SYSTEM::SIN(vParam0.z) * SYSTEM::COS(vParam0.x)), (SYSTEM::COS(vParam0.z) * SYSTEM::COS(vParam0.x)), SYSTEM::SIN(vParam0.x);
}

void func_258(vector3 vParam0, vector3 vParam1, float fParam2)
{
	if (unk_0xD0BB2359EC70FC37() || unk_0x757EF87A33649210())
	{
		return;
	}
	if (iLocal_240 == 0x00000001)
	{
		return;
	}
	if (iLocal_53)
	{
		if (unk_0xBD054C76E6F4158B(uLocal_52))
		{
			unk_0x51F8DBE54C75AE47(uLocal_52);
		}
		uLocal_52 = unk_0x372C0B8361DDE4D6(vParam0, func_257(vParam1), fParam2, 0x0000000C, 0x0000007F);
		iLocal_53 = 0x00000000;
	}
	else if (unk_0xBD054C76E6F4158B(uLocal_52))
	{
		if (unk_0x8E8B3399C8A28500())
		{
			if (unk_0x07441E56330B63E3(uLocal_52))
			{
				unk_0x51F8DBE54C75AE47(uLocal_52);
			}
		}
	}
}

void func_259(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_F[0x00000000] = fParam1;
	if (fParam2 == 0f)
	{
		uParam0->f_F[0x00000001] = fParam1;
	}
	else
	{
		uParam0->f_F[0x00000001] = fParam2;
	}
}

void func_260(var uParam0, vector3 vParam1, vector3 vParam2, int iParam3)
{
	uParam0->f_1[0x00000001 /*3*/] = { vParam1 };
	uParam0->f_8[0x00000001 /*3*/] = { vParam2 };
	*uParam0 = 0x00000001;
	uParam0->f_14 = iParam3;
}

void func_261(var uParam0, vector3 vParam1, vector3 vParam2, int iParam3, int iParam4)
{
	func_262(uParam0);
	uParam0->f_1[0x00000000 /*3*/] = { vParam1 };
	uParam0->f_8[0x00000000 /*3*/] = { vParam2 };
	*uParam0 = 0x00000001;
	uParam0->f_15 = iParam3;
	uParam0->f_12 = iParam4;
	uParam0->f_14 = 0x00000000;
}

void func_262(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1[0x00000000 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_1[0x00000001 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_8[0x00000000 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_8[0x00000001 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_F[0x00000000] = 50f;
	uParam0->f_F[0x00000001] = 0f;
	uParam0->f_15 = 0x00000000;
	uParam0->f_14 = 0x00000000;
}

void func_263(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	switch (iLocal_226)
	{
		case 0x00000000:
			func_261(&uLocal_202, -733.0331f, 5557.05f, 54.315f, -13.2766f, 0f, 26.2995f, 0x00000000, 0x00000000);
			func_260(&uLocal_202, -733.0331f, 5557.05f, 54.305f, 3.6561f, 0f, -49.3377f, 0x00004E20);
			func_259(&uLocal_202, 50f, 0x00000000);
			iLocal_226++;
			iVar0 = 0x00000001;
			break;
		
		case 0x00000001:
			func_258(-674.4f, 5644f, 40.1f, 7.5f, 0f, 148.3f, 0x43480000);
			if (uParam0->f_14 > 45f)
			{
				func_261(&uLocal_202, -674.4f, 5644f, 40.1f, 7.5f, 0f, 148.3f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -674.4f, 5644f, 40.1f, 7.5f, 0f, -133.2f, 0x00002AF8);
				func_259(&uLocal_202, 55f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000002:
			func_258(-539.4792f, 5522.976f, 65.4f, 4.1853f, 0f, 23.2142f, 0x43480000);
			if (uParam0->f_14 > 136f)
			{
				func_261(&uLocal_202, -539.4792f, 5522.976f, 65.4f, 4.1853f, 0f, 23.2142f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -536.2819f, 5524.217f, 65.4f, 9.7636f, 0f, 14.8368f, 0x00002710);
				func_259(&uLocal_202, 55f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000003:
			func_258(-428.1f, 5383.4f, 102.3f, -6.4381f, 0f, 12.5398f, 0x43480000);
			if (uParam0->f_14 > 220.3f)
			{
				func_261(&uLocal_202, -428.1f, 5383.4f, 102.3f, -6.4381f, 0f, 12.5398f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -428.1f, 5383.4f, 102.3f, 1.7164f, 0f, -8.342f, 0x00002EE0);
				func_259(&uLocal_202, 45f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000004:
			func_258(-443.8493f, 5570.767f, 143.7865f, 24.0363f, 0f, -84.852f, 0x43480000);
			if (uParam0->f_14 > 337.3f)
			{
				func_261(&uLocal_202, -443.8493f, 5570.767f, 143.7865f, 24.0363f, 0f, -84.852f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -446.9265f, 5570.49f, 150.7141f, 24.0363f, 0f, -84.852f, 0x00002EE0);
				func_259(&uLocal_202, 42f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000005:
			iLocal_226++;
			break;
		
		case 0x00000006:
			func_258(-237.0857f, 5571.89f, 262.2075f, -38.2954f, 0.0082f, 79.4291f, 0x43480000);
			if (uParam0->f_14 > 440.5f)
			{
				func_261(&uLocal_202, -237.0857f, 5571.89f, 262.2075f, -38.2954f, 0.0082f, 79.4291f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -234.3823f, 5571.384f, 258.7245f, -23.0862f, 0.0082f, 79.4291f, 0x000034BC);
				func_259(&uLocal_202, 44f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000007:
			func_258(-318.7657f, 5556.838f, 239.9462f, 18.044f, 0.0339f, -85.4425f, 0x43480000);
			if (uParam0->f_14 > 545.5f)
			{
				func_261(&uLocal_202, -318.7657f, 5556.838f, 239.9462f, 18.044f, 0.0339f, -85.4425f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, -311.451f, 5557.42f, 242.3366f, 20.0948f, 0.0339f, -85.4425f, 0x00004E20);
				func_259(&uLocal_202, 50f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000008:
			func_258(46.513f, 5534.116f, 378.619f, -12.2512f, 0.004f, 70.544f, 0x43480000);
			if (uParam0->f_14 > 663.5f)
			{
				func_261(&uLocal_202, 46.513f, 5534.116f, 378.619f, -12.2512f, 0.004f, 70.544f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, 46.513f, 5534.116f, 378.619f, 8.2022f, 0.004f, 56.552f, 0x00004E20);
				func_259(&uLocal_202, 45f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000009:
			iLocal_226++;
			break;
		
		case 0x0000000A:
			func_258(229.948f, 5536.094f, 522.865f, -14.7644f, -0.1333f, 67.2156f, 0x43480000);
			if (uParam0->f_14 > 855.5f)
			{
				func_261(&uLocal_202, 229.948f, 5536.094f, 522.865f, -14.7644f, -0.1333f, 67.2156f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, 227.183f, 5534.888f, 523.006f, -2.897f, -0.133f, 52.652f, 0x00005208);
				func_259(&uLocal_202, 50f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000000B:
			func_258(235.3752f, 5515.366f, 564.9175f, 18.2202f, 0f, 8.5423f, 0x43480000);
			if (uParam0->f_14 > 1060.36f)
			{
				func_261(&uLocal_202, 235.3752f, 5515.366f, 564.9175f, 18.2202f, 0f, 8.5423f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, 234.0372f, 5524.275f, 567.8823f, 18.2202f, 0f, 8.5423f, 0x00002EE0);
				func_259(&uLocal_202, 50f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000000C:
			func_258(262.3502f, 5562.681f, 624.7158f, 33.0263f, 0f, -82.3579f, 0x43480000);
			if (uParam0->f_14 > 1185.504f)
			{
				func_261(&uLocal_202, 262.3502f, 5562.681f, 624.7158f, 33.0263f, 0f, -82.3579f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, 268.5094f, 5563.507f, 628.7556f, 33.0263f, 0f, -82.3579f, 0x00002EE0);
				func_259(&uLocal_202, 50f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000000D:
			func_258(358.3939f, 5507.892f, 702.6762f, 12.1268f, -0.0966f, -6.9744f, 0x43480000);
			if (uParam0->f_14 > 1285f)
			{
				func_261(&uLocal_202, 358.3939f, 5507.892f, 702.6762f, 12.1268f, -0.0966f, -6.9744f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, 351.1451f, 5510.497f, 702.6633f, 28.5814f, -0.0966f, -30.1375f, 0x00002EE0);
				func_259(&uLocal_202, 45f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000000E:
			func_258(419.673f, 5542.148f, 781.969f, 2.839f, 0f, -38.893f, 0x43480000);
			if (uParam0->f_14 > 1380f)
			{
				func_261(&uLocal_202, 419.673f, 5542.148f, 781.969f, 2.839f, 0f, -38.893f, 0x00000000, 0x00000000);
				func_260(&uLocal_202, 426.675f, 5545.488f, 782.306f, 2.839f, 0f, -30.85f, 0x00002EE0);
				func_259(&uLocal_202, 40f, 0x00000000);
				iLocal_226++;
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000000F:
			iLocal_226++;
			break;
	}
	if (iVar0 == 0x00000001 && bLocal_79 == 0x00000000)
	{
		func_250(&uLocal_202, &uLocal_225, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		iLocal_53 = 0x00000001;
	}
}

void func_264(var uParam0)
{
	bool bVar0;
	struct<35> Var1;
	
	if (uParam0->f_9)
	{
		return;
	}
	if (func_45(0x0000000E))
	{
		return;
	}
	Var1.f_3 = 0x00000002;
	Var1.f_6 = 0x00000002;
	Var1.f_11 = 0x3F800000;
	Var1.f_15 = 0x00000002;
	Var1.f_1C = 0xFFFFFFFF;
	Var1.f_1D = 0xFFFFFFFF;
	if (func_238(unk_0x16F2683693E537C9(), uParam0, 1.05f, 0x00000000))
	{
		uParam0->f_19 = (unk_0x1C0640BA9A7327B3() + iLocal_63);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x00000033);
		func_279();
		if (uParam0->f_A == 0x00000001 && func_33(0x00000000))
		{
			unk_0xA37A90C62806D848(0x00000001);
			uParam0->f_A = 0x00000000;
		}
		bVar0 = func_272(uParam0);
		if (bVar0 == 0x00000001)
		{
			func_282(&uLocal_225, 0x00000000);
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
				bVar0 = unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000);
				while (bVar0 == 0x00000001)
				{
					if (!func_302(unk_0x16F2683693E537C9()))
					{
						bVar0 = 0x00000000;
					}
					else
					{
						bVar0 = unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000);
					}
					SYSTEM::WAIT(0x00000000);
					func_279();
					func_27();
				}
			}
			uParam0->f_B = 0x00000001;
			iLocal_226 = 0x00000000;
			*uParam0 = 0x00000002;
			iLocal_235 = 0xFFFFFFFF;
			iLocal_234 = unk_0x1C0640BA9A7327B3();
			if (func_45(0x00000006))
			{
				func_270(iLocal_231, 0x00000001);
			}
			func_253(uParam0);
			func_267(uParam0);
			func_111(uParam0);
			if (func_251(uParam0) == 0x00000000)
			{
			}
			unk_0xCEAA091B490F8407(0xFFFFFFFF, "DOOR_CLOSE", uParam0->f_2, "CABLE_CAR_SOUNDS", 0x00000000, 0x00000000);
			func_266(uParam0);
			unk_0x679C321F8CAA2CFA(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 10f, 0x00000000);
			unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 10f);
			if (func_251(uParam0) == 0x00000000)
			{
				if (!unk_0x562F77A7F33D2E46("CABLE_CAR_RIDE_UP_SCENE"))
				{
					unk_0x8BC9595FD2792B5D("CABLE_CAR_RIDE_UP_SCENE");
				}
			}
			else if (!unk_0x562F77A7F33D2E46("CABLE_CAR_RIDE_DOWN_SCENE"))
			{
				unk_0x8BC9595FD2792B5D("CABLE_CAR_RIDE_DOWN_SCENE");
			}
			unk_0xA37A90C62806D848(0x00000001);
			return;
		}
	}
	else if (uParam0->f_A == 0x00000001)
	{
		unk_0xA37A90C62806D848(0x00000001);
		uParam0->f_A = 0x00000000;
	}
	if (unk_0x1C0640BA9A7327B3() > uParam0->f_19)
	{
		if (unk_0xF65264B66E133BD8(unk_0x68E4ADDDDCD7BDDE(uParam0->f_2, vLocal_57), 1f, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
		{
			return;
		}
		if (unk_0xF65264B66E133BD8(unk_0x68E4ADDDDCD7BDDE(uParam0->f_2, vLocal_58), 1f, 0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000))
		{
			return;
		}
		if (func_4())
		{
			if (func_21(unk_0x16F2683693E537C9(), uParam0->f_C, 200f))
			{
				return;
			}
		}
		else
		{
			Var1 = { func_265(uParam0) };
			if (func_302(Var1.f_2) && (Var1.f_14 > 0f || Var1.f_9))
			{
				if (func_21(uParam0->f_2, Var1.f_C, 200f))
				{
					return;
				}
			}
		}
		func_267(uParam0);
		*uParam0 = 0x00000002;
		if (uParam0->f_A == 0x00000001)
		{
			unk_0xA37A90C62806D848(0x00000001);
			uParam0->f_A = 0x00000000;
		}
		uParam0->f_B = 0x00000000;
		unk_0xCEAA091B490F8407(0xFFFFFFFF, "DOOR_CLOSE", uParam0->f_2, "CABLE_CAR_SOUNDS", 0x00000000, 0x00000000);
	}
}

struct<35> func_265(var uParam0)
{
	if (uParam0->f_2 == Local_200.f_2)
	{
		return Local_201;
	}
	return Local_200;
}

void func_266(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	if (iLocal_240 == 0x00000001)
	{
		if (func_251(uParam0) == 0x00000000)
		{
			iVar1 = "cablecar_up";
		}
		else
		{
			iVar1 = "cablecar_down";
		}
	}
	iLocal_228 = 0x00000000;
	Global_7835 = 0x00000001;
	func_114(0f, 0f, 0f, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001);
	unk_0x679C321F8CAA2CFA(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 2f, 0x00000000);
	if (!unk_0xEA6BC48857E0AC4C(iVar1))
	{
		unk_0x0CDF80057190977A(iVar1);
		iVar0 = unk_0x1C0640BA9A7327B3() + 6000;
		while (iVar2 == 0x00000000)
		{
			if (unk_0x23239EF74F22427E())
			{
				iLocal_228 = 0x00000001;
				iVar2 = 0x00000001;
			}
			uParam0->f_1F = (uParam0->f_1F - SYSTEM::TIMESTEP());
			if (uParam0->f_1F <= 0f)
			{
				uParam0->f_1F = 0f;
			}
			func_2(uParam0, uParam0->f_1F);
			if (unk_0x1C0640BA9A7327B3() > iVar0)
			{
				iVar2 = 0x00000001;
				iLocal_228 = 0x00000000;
			}
			SYSTEM::WAIT(0x00000000);
		}
		if (iLocal_228 == 0x00000001)
		{
			fLocal_229 = 0f;
			unk_0x44E5AE27B5A88FC7(0x00000005, 0x00000005, 0x00000005, 0x00000005);
			unk_0x9E020FDB27CA9201();
		}
		else
		{
			unk_0xF59BE6DDBCFD2F1C();
		}
	}
}

void func_267(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	func_302(unk_0x16F2683693E537C9());
	iVar1 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &uVar2);
	if (iVar1 == 0x00000000)
	{
		return;
	}
	func_40(uParam0);
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (uParam0->f_18 < uParam0->f_15)
		{
			if (func_302(uVar2[iVar0]) && func_269(uVar2[iVar0]))
			{
				if (func_238(uVar2[iVar0], uParam0, 0x00000000, 0x00000000))
				{
					uParam0->f_15[uParam0->f_18] = uVar2[iVar0];
					if (!unk_0xAF6690C489CC6203(uParam0->f_15[uParam0->f_18]))
					{
						unk_0x73270B3C9CC833FD(uParam0->f_15[uParam0->f_18], 0x00000001, 0x00000000);
					}
					func_268(uParam0->f_15[uParam0->f_18], uParam0, uParam0->f_18);
					uParam0->f_18++;
				}
			}
		}
		iVar0++;
	}
}

void func_268(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	
	if (unk_0xD59B17D2DFF98E26(iParam0))
	{
		unk_0x15AFB6CBDE990FB6(iParam0, 0x00000001, 0x00000001);
	}
	if (iParam2 == 0x00000000)
	{
		vVar0 = { 0.6f, -1.21756f, -5.854f };
	}
	else
	{
		vVar0 = { -0.6f, -1.21756f, -5.85388f };
	}
	vVar0.y = (vVar0.y * uParam1->f_11);
	if (uParam1->f_11 == -1f)
	{
		unk_0x9F528B1B53FBC5D9(iParam0, uParam1->f_2, 0x00000000, vVar0, 0f, 0f, 180f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
	else
	{
		unk_0x9F528B1B53FBC5D9(iParam0, uParam1->f_2, 0x00000000, vVar0, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
	}
	unk_0xD8F6A53F4799FAFE(iParam0, unk_0xD9522BA9E27E1349(uParam1->f_2));
}

bool func_269(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	if (iVar0 == joaat("cablecar"))
	{
		return 0x00000000;
	}
	return (unk_0x7D8B2A8F9EA82DB7(iVar0) || unk_0xAD09C9A4B56FA133(iVar0));
}

void func_270(int iParam0, bool bParam1)
{
	if (unk_0xEB6A8945D1AC98A1(func_96()))
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0xBFDE4EE64C4BF2D6(func_96(), func_271()))
		{
			return;
		}
		if (!unk_0xEB6A8945D1AC98A1(func_54()))
		{
			if (!unk_0xBFDE4EE64C4BF2D6(func_54(), func_271()))
			{
				return;
			}
		}
	}
	if (Global_1716A == 0x00000017)
	{
		Global_1716C = 0x0000000A;
		Global_1716A = iParam0;
	}
}

int func_271()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

int func_272(var uParam0)
{
	bool bVar0;
	
	bVar0 = func_238(unk_0x16F2683693E537C9(), uParam0, 0x00000000, 0x00000000);
	if (bVar0)
	{
		uParam0->f_19 = (unk_0x1C0640BA9A7327B3() + iLocal_63);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x00000033);
		func_279();
	}
	switch (uParam0->f_1)
	{
		case 0x00000000:
			if (bVar0)
			{
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
				{
					uParam0->f_1 = 0x00000007;
				}
				else if (func_278(uParam0))
				{
					uParam0->f_1 = 0x00000002;
				}
				else
				{
					uParam0->f_1 = 0x00000003;
				}
				if (uParam0->f_A == 0x00000001)
				{
					func_277();
				}
				uParam0->f_A = 0x00000000;
			}
			break;
		
		case 0x00000001:
			if (!uParam0->f_A)
			{
				func_276("PLAY_CABLE_NO_CASH");
				uParam0->f_A = 0x00000001;
			}
			if (!bVar0 || func_274() >= 0x0000000A)
			{
				func_277();
				uParam0->f_1 = 0x00000000;
				return 0x00000000;
			}
			break;
		
		case 0x00000002:
			if (!uParam0->f_A)
			{
				func_276("CAR_IN_CABLECAR");
				uParam0->f_A = 0x00000001;
			}
			if (!bVar0 || !func_278(uParam0))
			{
				func_277();
				uParam0->f_1 = 0x00000000;
				return 0x00000000;
			}
			break;
		
		case 0x00000007:
			if (!uParam0->f_A)
			{
				func_276("CABLE_WANTED");
				uParam0->f_A = 0x00000001;
			}
			if (!bVar0 || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				func_277();
				uParam0->f_1 = 0x00000000;
				return 0x00000000;
			}
			break;
		
		case 0x00000003:
			unk_0x558EC149EB2BC0A2(0x00000002, 0x00000033);
			func_279();
			func_27();
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				func_277();
				uParam0->f_1 = 0x00000000;
				uParam0->f_A = 0x00000000;
				return 0x00000000;
			}
			if (!bVar0)
			{
				func_277();
				uParam0->f_1 = 0x00000000;
				uParam0->f_A = 0x00000000;
				return 0x00000000;
			}
			if (func_273(0x00000000) || unk_0x991B1F0980C62628())
			{
				func_277();
				uParam0->f_1 = 0x00000000;
				return 0x00000000;
			}
			if (func_274() < 0x0000000A)
			{
				func_277();
				uParam0->f_1 = 0x00000001;
				uParam0->f_A = 0x00000000;
				return 0x00000000;
			}
			if (!uParam0->f_A && !func_33(0x00000000))
			{
				func_276("PLAY_CABLE");
				uParam0->f_A = 0x00000000;
			}
			if (unk_0x06F8112AA79C53D9(0x00000002, 0x00000033) && !func_33(0x00000000))
			{
				uParam0->f_1 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			func_279();
			func_27();
			uParam0->f_1 = 0x00000000;
			uParam0->f_A = 0x00000000;
			uParam0->f_22 = 0x00000001;
			if (func_251(uParam0) == 0x00000000)
			{
				unk_0x5D96D8530B3D0904(&Global_12C46, 0x00000004);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&Global_12C46, 0x00000005);
			}
			unk_0xA37A90C62806D848(0x00000001);
			return 0x00000001;
	}
	return 0x00000000;
}

bool func_273(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 0x00000004);
	}
	return Global_56C3.f_4;
}

int func_274()
{
	if (unk_0x8CD06866876216F2())
	{
		return func_102(unk_0xD803B885F5E47A62());
	}
	switch (func_98())
	{
		case 0x00000002:
			return func_275(0x00000002);
		
		case 0x00000000:
			return func_275(0x00000000);
		
		case 0x00000001:
			return func_275(0x00000001);
		
		default:
	}
	return 0x00000000;
}

var func_275(int iParam0)
{
	return Global_E53E[iParam0];
}

void func_276(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

void func_277()
{
	if (unk_0xFEBC1E4EC9E001F0())
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
}

int func_278(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	func_302(unk_0x16F2683693E537C9());
	iVar1 = unk_0xA361D247A75E0128(unk_0x16F2683693E537C9(), &uVar2);
	if (iVar1 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (func_302(uVar2[iVar0]) && !func_269(uVar2[iVar0]))
		{
			if (func_238(uVar2[iVar0], uParam0, 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_279()
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000015, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008D, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000018, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000101, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000016, 0x00000001);
}

bool func_280(int iParam0, var uParam1, float fParam2, bool bParam3)
{
	struct<8> Var0;
	struct<8> Var1;
	
	Var0 = 0x00000002;
	if (!func_302(uParam1->f_2))
	{
		return 0x00000000;
	}
	func_244(&Var0, unk_0x68E4ADDDDCD7BDDE(uParam1->f_2, 0f, 2.75f, (vLocal_56.z + 2.63f)) + Vector(1f, 0f, 0f), unk_0x68E4ADDDDCD7BDDE(uParam1->f_2, 0f, -2.75f, (vLocal_56.z + 2.63f)) - Vector(1f, 0f, 0f), 3f);
	if (bParam3)
	{
		func_241(&Var0, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
	}
	if (fParam2 > 0f)
	{
		Var1 = { func_239(Var0, fParam2) };
		return unk_0x3D1053F9EB43B7AD(iParam0, Var1[0x00000000 /*3*/], Var1[0x00000001 /*3*/], Var1.f_7, 0x00000000, 0x00000001, 0x00000000);
	}
	return unk_0x3D1053F9EB43B7AD(iParam0, Var0[0x00000000 /*3*/], Var0[0x00000001 /*3*/], Var0.f_7, 0x00000000, 0x00000001, 0x00000000);
}

void func_281(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		if (bParam2)
		{
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, iParam1, 0x00000000);
		}
		if (unk_0xFBB4F23D534EB790(*uParam0))
		{
			unk_0xE3BB8E05FCEB3FBE(*uParam0, 0x00000000);
		}
		unk_0x9A8DDC7C522F5BF5(*uParam0, iParam1);
	}
	if (uParam0->f_17)
	{
		unk_0xF737A3AD8873CE16();
		uParam0->f_17 = 0x00000000;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_14 = 0x00000000;
	uParam0->f_15 = 0x00000000;
	uParam0->f_16 = 0x00000000;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
}

void func_282(var uParam0, bool bParam1)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		unk_0xB3A1B75CB59FEB56(0x00000000, bParam1, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0xE3BB8E05FCEB3FBE(*uParam0, 0x00000000);
		unk_0x9A8DDC7C522F5BF5(*uParam0, 0x00000000);
		*uParam0 = 0x00000000;
	}
}

void func_283(var uParam0)
{
	if (func_302(uParam0->f_2))
	{
		uParam0->f_1F = 0f;
		func_2(uParam0, 0f);
	}
}

int func_284(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_285(float fParam0)
{
	if (fParam0 != 0f)
	{
	}
}

void func_286(bool bParam0)
{
	if (bParam0)
	{
	}
}

void func_287()
{
	func_12(&uLocal_82, 0x00000000);
	func_12(&uLocal_82, 0x00000001);
	func_12(&uLocal_82, 0x00000002);
}

void func_288(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	
	func_290(uParam0);
	uParam0->f_F = iParam1;
	uParam0->f_12 = iParam2;
	uParam0->f_C = { func_14(&(Local_64[iParam1 /*49*/]), iParam2, &iParam3) };
	unk_0x75CFD6AD66ADFDD1(uParam0->f_C + Vector(-0.2f, 0f, 0f), 2f, 0x00000000);
	uParam0->f_2 = unk_0x7707E48765093646(iLocal_65, uParam0->f_C + Vector(-0.2f, 0f, 0f), 0x00000001, 0x00000001, 0x00000000);
	uParam0->f_13 = iParam3;
	uParam0->f_11 = iParam4;
	uParam0->f_19 = (unk_0x1C0640BA9A7327B3() + iLocal_63);
	uParam0->f_20 = 0x00000000;
	unk_0x1E9649458B15960F(uParam0->f_2, 0x00000001);
	unk_0xA47B46945FF6DE74(uParam0->f_2, uParam0->f_C + Vector(-0.2f, 0f, 0f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	fVar0 = func_289(Local_64[uParam0->f_F /*49*/][uParam0->f_12 /*3*/], Local_64[uParam0->f_F /*49*/][uParam0->f_12 + 1 /*3*/], 0x00000001);
	unk_0xD8F6A53F4799FAFE(uParam0->f_2, fVar0);
	uParam0->f_3[0x00000000] = unk_0x7707E48765093646(iLocal_66, uParam0->f_C + Vector(-0.2f, 0f, 0f), 0x00000001, 0x00000001, 0x00000000);
	unk_0xD8F6A53F4799FAFE(uParam0->f_3[0x00000000], fVar0);
	uParam0->f_3[0x00000001] = unk_0x7707E48765093646(iLocal_67, uParam0->f_C + Vector(-0.2f, 0f, 0f), 0x00000001, 0x00000001, 0x00000000);
	unk_0xD8F6A53F4799FAFE(uParam0->f_3[0x00000001], fVar0);
	unk_0x9F528B1B53FBC5D9(uParam0->f_3[0x00000000], uParam0->f_2, 0x00000000, 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001);
	unk_0x9F528B1B53FBC5D9(uParam0->f_3[0x00000001], uParam0->f_2, 0x00000000, 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001);
	uParam0->f_6[0x00000000] = unk_0x7707E48765093646(iLocal_66, uParam0->f_C + Vector(-0.2f, 0f, 0f), 0x00000001, 0x00000001, 0x00000000);
	uParam0->f_6[0x00000001] = unk_0x7707E48765093646(iLocal_67, uParam0->f_C + Vector(-0.2f, 0f, 0f), 0x00000001, 0x00000001, 0x00000000);
	unk_0x9F528B1B53FBC5D9(uParam0->f_6[0x00000000], uParam0->f_2, 0x00000000, 0f, 0f, 0f, 0f, 0f, 180f, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001);
	unk_0x9F528B1B53FBC5D9(uParam0->f_6[0x00000001], uParam0->f_2, 0x00000000, 0f, 0f, 0f, 0f, 0f, 180f, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000002, 0x00000001);
	func_20(uParam0);
	func_1(uParam0);
	if (func_302(uParam0->f_2))
	{
		unk_0xCEAA091B490F8407(0xFFFFFFFF, "Arrive_Station", uParam0->f_2, "CABLE_CAR_SOUNDS", 0x00000000, 0x00000000);
	}
}

float func_289(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x5D8ABF6396A76564(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 0x00000001)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_290(var uParam0)
{
	uParam0->f_14 = 0f;
	uParam0->f_9 = 0x00000000;
	uParam0->f_10 = 0f;
	uParam0->f_A = 0x00000000;
	*uParam0 = 0x00000000;
	uParam0->f_20 = 0x00000000;
}

void func_291(var uParam0)
{
	uParam0->f_2E = 0x00000000;
	func_293(uParam0, 446.291f, 5566.377f, 786.75f);
	func_293(uParam0, 444.937f, 5566.383f, 786.551f);
	func_293(uParam0, 417.371f, 5567.001f, 777.708f);
	func_293(uParam0, 412.661f, 5567.085f, 774.439f);
	func_293(uParam0, 241.31f, 5570.594f, 603.137f);
	func_293(uParam0, 236.821f, 5570.663f, 599.561f);
	func_293(uParam0, 11.35f, 5575.298f, 426.629f);
	func_293(uParam0, 6.575f, 5575.391f, 423.57f);
	func_293(uParam0, -268.965f, 5580.996f, 243.386f);
	func_293(uParam0, -273.993f, 5581.124f, 240.808f);
	func_293(uParam0, -575.898f, 5587.286f, 79.251f);
	func_293(uParam0, -581.321f, 5587.4f, 77.348f);
	func_293(uParam0, -739.646f, 5590.614f, 47.006f);
	func_293(uParam0, -740.97f, 5590.617f, 47.306f);
	func_292(uParam0);
}

void func_292(var uParam0)
{
	int iVar0;
	
	uParam0->f_30 = 0f;
	iVar0 = 0x00000000;
	while (iVar0 < (uParam0->f_2E - 0x00000002))
	{
		uParam0->f_30 = (uParam0->f_30 + unk_0x0EB28750412C3A5A(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar0 + 1 /*3*/]), 0x00000001));
		iVar0++;
	}
}

void func_293(var uParam0, float fParam1, float fParam2, float fParam3)
{
	if (uParam0->f_2E >= *uParam0)
	{
		return;
	}
	(*uParam0)[uParam0->f_2E /*3*/] = fParam1;
	(uParam0[uParam0->f_2E /*3*/])->f_1 = fParam2;
	(uParam0[uParam0->f_2E /*3*/])->f_2 = fParam3;
	uParam0->f_2E++;
}

void func_294(var uParam0)
{
	uParam0->f_2E = 0x00000000;
	func_293(uParam0, -740.911f, 5599.341f, 47.25f);
	func_293(uParam0, -739.557f, 5599.346f, 46.997f);
	func_293(uParam0, -581.009f, 5596.517f, 77.379f);
	func_293(uParam0, -575.717f, 5596.388f, 79.22f);
	func_293(uParam0, -273.805f, 5590.844f, 240.795f);
	func_293(uParam0, -268.707f, 5590.744f, 243.395f);
	func_293(uParam0, 6.896f, 5585.668f, 423.614f);
	func_293(uParam0, 11.774f, 5585.591f, 426.711f);
	func_293(uParam0, 236.82f, 5581.445f, 599.642f);
	func_293(uParam0, 241.365f, 5581.369f, 603.183f);
	func_293(uParam0, 412.855f, 5578.216f, 774.401f);
	func_293(uParam0, 417.541f, 5578.124f, 777.688f);
	func_293(uParam0, 444.93f, 5577.589f, 786.535f);
	func_293(uParam0, 446.288f, 5577.59f, 786.75f);
	func_292(uParam0);
}

void func_295()
{
	func_301(&uLocal_82);
	func_300(&uLocal_82, 0x00000000, iLocal_65);
	func_300(&uLocal_82, 0x00000001, iLocal_66);
	func_300(&uLocal_82, 0x00000002, iLocal_67);
	func_299(&uLocal_82, 0x00000003, 0x00000004, "CABLE_CAR", "CABLE_CAR_SOUNDS");
	func_299(&uLocal_82, 0x00000004, 0x00000002, "P_CableCar_S", 0x00000000);
	while (!func_296(&uLocal_82))
	{
		SYSTEM::WAIT(0x00000000);
	}
}

bool func_296(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1C0640BA9A7327B3() > uParam0->f_74 || uParam0->f_74 == 0x00000000)
	{
		if (uParam0->f_73 < *uParam0)
		{
			func_298(uParam0, uParam0->f_73);
			uParam0->f_73++;
		}
		uParam0->f_74 = unk_0x1C0640BA9A7327B3() + 32;
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_297(uParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 == *uParam0;
}

int func_297(var uParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_72, iParam1))
	{
		return 0x00000001;
	}
	if ((*uParam0)[iParam1 /*7*/] == 0x00000000)
	{
		return 0x00000001;
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_71, iParam1))
	{
		return 0x00000000;
	}
	if (unk_0x1C0640BA9A7327B3() > (uParam0[iParam1 /*7*/])->f_6)
	{
		uParam0->f_75 = 0x00000001;
		return 0x00000001;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 0x00000000:
			return 0x00000001;
		
		case 0x00000001:
			if (!unk_0xC528DF93B7EC4D04((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000002:
			if (!unk_0xB4AE0788C1587752((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000003:
			if (!unk_0xDF3FDDA1EADEDD07((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000004:
			if (!unk_0xAE317D00A5A55DF6((uParam0[iParam1 /*7*/])->f_3, 0x00000000, 0xFFFFFFFF))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000005:
			if (!unk_0xE3934829A331AF92((uParam0[iParam1 /*7*/])->f_3, 0x00000000))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000006:
			if (!unk_0xB87F6CF6E5628C67((uParam0[iParam1 /*7*/])->f_1))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000007:
			if (!unk_0x25F7A4D42AF2AB93())
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000008:
			if (!unk_0x67C1D9E5B91B2E37((uParam0[iParam1 /*7*/])->f_5))
			{
				return 0x00000000;
			}
			break;
		
		case 0x00000009:
			if (!unk_0x27117E2CDD4D67C3((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000A:
			if (!unk_0x3DDA6C6A285628E4((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000B:
			if (!unk_0x1C2E18E9C63BEB77((uParam0[iParam1 /*7*/])->f_3))
			{
				return 0x00000000;
			}
			break;
		
		case 0x0000000C:
			if (!unk_0x1787731C4D1D6B19((uParam0[iParam1 /*7*/])->f_2))
			{
				return 0x00000000;
			}
			break;
		
		default:
			return 0x00000000;
	}
	unk_0x5D96D8530B3D0904(&(uParam0->f_72), iParam1);
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 0x00000006:
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x0000000C:
			break;
		
		default:
			break;
	}
	return 0x00000001;
}

int func_298(var uParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_71, iParam1) || unk_0xEAE0D21A50E6C7F4(uParam0->f_72, iParam1))
	{
		return 0x00000001;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 0x00000001:
			unk_0xCBE9833C2148CAFF((uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 0x00000002:
			unk_0x3F423BF5B8125A50((uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 0x00000003:
			unk_0x4942FBD1EF896E39((uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 0x00000004:
			unk_0xAE317D00A5A55DF6((uParam0[iParam1 /*7*/])->f_3, 0x00000000, 0xFFFFFFFF);
			break;
		
		case 0x00000005:
			unk_0xE3934829A331AF92((uParam0[iParam1 /*7*/])->f_3, (uParam0[iParam1 /*7*/])->f_4);
			break;
		
		case 0x00000006:
			unk_0x523BCC9DC80CD82F((uParam0[iParam1 /*7*/])->f_1);
			break;
		
		case 0x00000007:
			unk_0x9E5E60D8C63FD9D1();
			break;
		
		case 0x00000008:
			unk_0xD7992BEF7A9D109E((uParam0[iParam1 /*7*/])->f_3, (uParam0[iParam1 /*7*/])->f_5);
			break;
		
		case 0x00000009:
			unk_0x0D3BE1DE0262A012((uParam0[iParam1 /*7*/])->f_3, 0x00000000);
			break;
		
		case 0x0000000A:
			unk_0x36187931D29E5BBE((uParam0[iParam1 /*7*/])->f_5, (uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 0x0000000B:
			unk_0x29398344B9E5B8A7((uParam0[iParam1 /*7*/])->f_3);
			break;
		
		case 0x0000000C:
			unk_0x6D0C93EE4FBA9307((uParam0[iParam1 /*7*/])->f_2, 0x0000001F, 0x00000000);
			break;
		
		default:
			return 0x00000000;
	}
	switch ((*uParam0)[iParam1 /*7*/])
	{
		case 0x00000006:
			break;
		
		case 0x00000007:
			break;
		
		case 0x00000008:
			break;
		
		case 0x0000000C:
			break;
		
		default:
			break;
	}
	uParam0->f_75 = 0x00000000;
	(uParam0[iParam1 /*7*/])->f_6 = unk_0x1C0640BA9A7327B3() + 10000;
	unk_0x5D96D8530B3D0904(&(uParam0->f_71), iParam1);
	return 0x00000001;
}

int func_299(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_71, iParam1) || unk_0xEAE0D21A50E6C7F4(uParam0->f_72, iParam1))
	{
		return 0x00000001;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam3))
	{
		return 0x00000000;
	}
	switch (iParam2)
	{
		case 0x00000001:
			unk_0xCBE9833C2148CAFF(sParam3);
			break;
		
		case 0x00000002:
			unk_0x3F423BF5B8125A50(sParam3);
			break;
		
		case 0x00000003:
			unk_0x4942FBD1EF896E39(sParam3);
			break;
		
		case 0x00000004:
			unk_0xAE317D00A5A55DF6(sParam3, 0x00000000, 0xFFFFFFFF);
			break;
		
		case 0x00000005:
			unk_0xE3934829A331AF92(sParam3, iParam4);
			break;
		
		case 0x00000009:
			unk_0x0D3BE1DE0262A012(sParam3, 0x00000000);
			break;
		
		case 0x0000000B:
			unk_0x29398344B9E5B8A7(sParam3);
			break;
		
		default:
			return 0x00000000;
	}
	func_13(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = iParam2;
	(uParam0[iParam1 /*7*/])->f_3 = sParam3;
	(uParam0[iParam1 /*7*/])->f_4 = iParam4;
	return 0x00000001;
}

int func_300(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_71, iParam1) || unk_0xEAE0D21A50E6C7F4(uParam0->f_72, iParam1))
	{
		return 0x00000001;
	}
	if (iParam2 == 0x00000000)
	{
		return 0x00000000;
	}
	func_13(uParam0[iParam1 /*7*/]);
	(*uParam0)[iParam1 /*7*/] = 0x00000006;
	(uParam0[iParam1 /*7*/])->f_1 = iParam2;
	return 0x00000001;
}

void func_301(var uParam0)
{
	int iVar0;
	
	uParam0->f_72 = 0x00000000;
	uParam0->f_71 = 0x00000000;
	uParam0->f_73 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_13(uParam0[iVar0 /*7*/]);
		iVar0++;
	}
}

bool func_302(int iParam0)
{
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	return !unk_0x437347B10A200C4B(iParam0, 0x00000000);
}

void func_303(bool bParam0)
{
	vector3 vVar0;
	
	if (func_4())
	{
		unk_0x066C43E677C08D5C();
	}
	if (iLocal_228 == 0x00000001)
	{
		iLocal_228 = 0x00000000;
		unk_0xF59BE6DDBCFD2F1C();
	}
	unk_0xE108118042391BB3("AZ_COUNTRYSIDE_CHILEAD_CABLE_CAR_LINE", 0x00000000, 0x00000001);
	func_307(0x00000001, 0x00000001, 0x00000001, 0x00000001);
	Global_7835 = 0x00000000;
	func_282(&uLocal_225, 0x00000000);
	func_281(&Local_69, 0x00000000, 0x00000001);
	func_302(unk_0x16F2683693E537C9());
	if (unk_0x3E653638C7A26115() == 0x00000002)
	{
		if (func_4())
		{
			func_39(unk_0x16F2683693E537C9(), &Local_200);
			func_39(unk_0x16F2683693E537C9(), &Local_201);
			if (func_306(unk_0x16F2683693E537C9(), vLocal_54, 0x00000001) < 200f)
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_54, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			}
			else if (func_306(unk_0x16F2683693E537C9(), vLocal_55, 0x00000001) < 200f)
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_55, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			}
			else
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) - Vector(5f, 0f, 0f) };
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				vVar0.z = -200f;
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			}
		}
		bParam0 = 0x00000001;
	}
	if (bParam0)
	{
		func_305(&Local_200);
		func_305(&Local_201);
	}
	else
	{
		func_35(&Local_200, 0x00000000);
		func_35(&Local_201, 0x00000000);
	}
	if (!unk_0x4FC40AB0ECCE6E18(unk_0x16F2683693E537C9()))
	{
		unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
	}
	func_304(&uLocal_82);
	while (unk_0xEB880D98B5988D0C())
	{
		SYSTEM::WAIT(0x00000000);
	}
	if (unk_0xBD054C76E6F4158B(uLocal_52))
	{
		unk_0x51F8DBE54C75AE47(uLocal_52);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_304(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_12(uParam0, iVar0);
		iVar0++;
	}
}

void func_305(var uParam0)
{
	func_38(uParam0);
	func_37(&(uParam0->f_3[0x00000000]));
	func_37(&(uParam0->f_3[0x00000001]));
	func_37(&(uParam0->f_6[0x00000000]));
	func_37(&(uParam0->f_6[0x00000001]));
	func_37(&(uParam0->f_2));
}

float func_306(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam2);
}

void func_307(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xA30EC016B12C03E4();
	unk_0xBC03DF6093E8E71F(iVar0, 0x00000000);
	unk_0x98E4DC66A651C9FA(iVar0, bParam3, 0x00000000);
	func_230(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	if (iParam2 == 0x00000001)
	{
		unk_0xBFE31971E49FA500(0x00000001);
		unk_0x8BCB70EB440DED83(0x00000001);
	}
	unk_0xA37A90C62806D848(0x00000001);
	if (iParam0 == 0x00000001)
	{
		unk_0x5413873D3F67BF93(0x00000000, 0x00000000);
	}
	if (iParam1 == 0x00000001)
	{
		if ((iLocal_39 != 0x00000000 && iLocal_39 != joaat("object")) && iLocal_39 != joaat("gadget_parachute"))
		{
			if (func_16(unk_0x16F2683693E537C9()))
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), iLocal_39, 0x00000000))
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iLocal_39, 0x00000000);
				}
			}
		}
	}
	if (func_308(unk_0x16F2683693E537C9()))
	{
		unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
	}
}

int func_308(int iParam0)
{
	if (func_16(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

