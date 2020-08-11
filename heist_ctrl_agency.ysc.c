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
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[4] = { 0, 0, 0, 0 };
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 4;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 4;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 4;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 4;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 4;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 4;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	struct<485> Local_91 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 0x00000003;
	iLocal_36 = 0x000000CA;
	iLocal_37 = 0x000000C9;
	iLocal_38 = 0x00000018;
	iLocal_39 = 0x000000CA;
	iLocal_40 = 0x00000019;
	iLocal_42 = 0xFFFFFFFF;
	iLocal_43 = 0xFFFFFFFF;
	iLocal_44 = 0xFFFFFFFF;
	iLocal_90 = 0xFFFFFFFF;
	if (unk_0x2EBF608FFE6CA406(0x00000052))
	{
		func_345();
	}
	func_344(0x00000000);
	func_332(&(Local_91.f_1), func_343(Global_17235[0x00000006 /*19*/], Global_17235[0x00000007 /*19*/]));
	func_331(&Local_91, 0x00000003);
	while (!func_330(0x00000002))
	{
		if (!Global_12C5B)
		{
			func_328();
			if (func_327(0x00000003, 0x00000000))
			{
				if (!func_326(0x00000042))
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000008))
					{
						Local_91.f_1.f_8D[0x00000000 /*2*/] = 0x0000012E;
						Local_91.f_1.f_8D[0x00000000 /*2*/].f_1 = 0x000000BF;
						Local_91.f_1.f_8D[0x00000001 /*2*/] = 0x00000135;
						Local_91.f_1.f_8D[0x00000001 /*2*/].f_1 = 0x0000006D;
						Local_91.f_1.f_8D[0x00000002 /*2*/] = 0x000000C4;
						Local_91.f_1.f_8D[0x00000002 /*2*/].f_1 = 0x0000013E;
						Local_91.f_1.f_8D[0x00000003 /*2*/] = 0x000000DC;
						Local_91.f_1.f_8D[0x00000003 /*2*/].f_1 = 0x000000E3;
						unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000008);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000009))
				{
					Local_91.f_1.f_8D[0x00000000 /*2*/] = 0x00000000;
					Local_91.f_1.f_8D[0x00000000 /*2*/].f_1 = 0x00000000;
					Local_91.f_1.f_8D[0x00000001 /*2*/] = 0x00000000;
					Local_91.f_1.f_8D[0x00000001 /*2*/].f_1 = 0x00000000;
					Local_91.f_1.f_8D[0x00000002 /*2*/] = 0x00000000;
					Local_91.f_1.f_8D[0x00000002 /*2*/].f_1 = 0x00000000;
					Local_91.f_1.f_8D[0x00000003 /*2*/] = 0x00000000;
					Local_91.f_1.f_8D[0x00000003 /*2*/].f_1 = 0x00000000;
					unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000009);
				}
			}
			func_327(0x00000003, 0x00000000);
			if (Global_1B416.f_1C58.f_E3[0x00000047] == 0x00000001 && !func_325(0x0000000E))
			{
				func_314(&Local_91, 40f, 50f);
				func_312(&Local_91);
				func_289();
				func_156();
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_91.f_1C1, 0x00000000))
			{
				func_152(&Local_91);
			}
			if (func_150(0x00000000) || unk_0xEAE0D21A50E6C7F4(Local_91.f_1C1, 0x00000002))
			{
				func_68(&Local_91);
				func_6(&Local_91);
				func_5(&Local_91);
			}
		}
		if (unk_0x8A22C4C08282BF26(joaat("agency_heist3a")) > 0x00000000 || unk_0x8A22C4C08282BF26(joaat("agency_heist3b")) > 0x00000000)
		{
			func_4();
		}
		if (func_330(0x0000000C))
		{
			if (!func_3(0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_78[0x00000003], 0x00000008))
				{
					func_2(0x00000003, 0x00000008, 0x00000001);
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_78[0x00000003], 0x00000008))
			{
				func_2(0x00000003, 0x00000008, 0x00000000);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_78[0x00000003], 0x00000008))
		{
			func_2(0x00000003, 0x00000008, 0x00000000);
		}
		SYSTEM::WAIT(0x00000000);
	}
	func_1(0x00000000);
	func_345();
}

int func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 0x0000001F)
	{
		iVar0 = 0x00000009;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 0x0000000A;
		iVar1 = (iParam0 - 0x00000020);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iVar0], iVar1))
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_2378.f_63.f_DB[iVar0]), iVar1);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_2(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_78[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_78[iParam0]), iParam1);
	}
	unk_0x5D96D8530B3D0904(&Global_17220, iParam0);
}

bool func_3(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_4()
{
	int iVar0;
	
	if (Global_12C52)
	{
		return;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((1f + (1000f * SYSTEM::TIMESTEP())));
	Global_172F4.f_8 = (Global_172F4.f_8 + iVar0);
}

void func_5(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_17220, *uParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000F);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000010);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000E);
			unk_0x0674E58A79778E99(&Global_17220, *uParam0);
		}
	}
}

void func_6(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_66(func_67(*uParam0));
	if (iVar0 < 0x00000000 || iVar0 >= 0x00000005)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_1D0 && !(iVar1 == 0x00000002 && uParam0->f_1D0 == 0x00000004)) && !((*uParam0 == 0x00000001 && iVar1 == 0x00000003) && uParam0->f_1D0 == 0x00000004))
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000002))
		{
			func_7(uParam0, iVar1, 0x00000000);
		}
		else
		{
			uParam0->f_1D0 = iVar1;
		}
	}
}

void func_7(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != uParam0->f_1D0)
	{
		if (uParam0->f_2A8 == 0x00000000)
		{
			func_65(uParam0);
			uParam0->f_1D0 = iParam1;
			func_8(uParam0, iParam1, iParam2);
		}
	}
}

void func_8(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0x00000000:
			func_64(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000005);
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000004);
			break;
		
		case 0x00000001:
			func_64(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000005);
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000004);
			uParam0->f_1C4 = 0xFFFFFFFF;
			break;
		
		case 0x00000002:
			func_36(uParam0, uParam0->f_1A1, iParam2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000005);
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000004);
			uParam0->f_1C9 = unk_0x1C0640BA9A7327B3();
			break;
		
		case 0x00000003:
			func_19(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000005);
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000004);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000009);
			uParam0->f_1C9 = unk_0x1C0640BA9A7327B3();
			break;
		
		case 0x00000004:
			func_15(&(uParam0->f_1.f_6C[0x00000000 /*4*/]), 0x00000001);
			func_15(&(uParam0->f_1.f_6C[0x00000001 /*4*/]), 0x00000001);
			Global_1B416.f_1.f_6[*uParam0] = 0x00000001;
			unk_0xA37A90C62806D848(0x00000000);
			func_13(uParam0, 0x00000000);
			func_64(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000005);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000004);
			uParam0->f_1C9 = unk_0x1C0640BA9A7327B3();
			break;
	}
	func_9(uParam0);
}

void func_9(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	
	sVar0 = unk_0xE32F7AC5E6DF304A(0x00000002, 0x0000000D, 0x00000001);
	sVar1 = unk_0xE32F7AC5E6DF304A(0x00000002, 0x0000000B, 0x00000001);
	sVar2 = unk_0xF59058FCB716F903(0x00000000, 0x00000020, 0x00000001);
	sVar3 = unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001);
	sVar4 = unk_0xF59058FCB716F903(0x00000002, 0x000000C9, 0x00000001);
	sVar5 = unk_0xF59058FCB716F903(0x00000002, 0x000000CA, 0x00000001);
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		sVar0 = unk_0xE32F7AC5E6DF304A(0x00000002, 0x00000006, 0x00000001);
		sVar1 = unk_0xE32F7AC5E6DF304A(0x00000002, 0x00000007, 0x00000001);
		sVar2 = unk_0xE32F7AC5E6DF304A(0x00000000, 0x0000001D, 0x00000001);
	}
	bVar6 = func_12(0x00000001, *uParam0);
	unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_MAX_WIDTH");
	unk_0x7C19E5E4784BD7CF(0.6f);
	unk_0x7E60D21B163E9D56();
	switch (uParam0->f_1D0)
	{
		case 0x00000000:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000002))
			{
				if (bVar6)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000001);
					func_11(sVar2);
					func_10("PB_H_ZOOM");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000000);
					func_11(sVar3);
					func_10("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000002);
					func_11(sVar2);
					func_10("PB_H_ZOOM");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000001);
					func_11(sVar3);
					func_10("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000000);
					func_11(sVar5);
					func_10("PB_H_EXIT");
					unk_0x7E60D21B163E9D56();
				}
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000000);
				unk_0x7E60D21B163E9D56();
			}
			break;
		
		case 0x00000001:
			unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x1200CC973A2399C8(0x00000000);
			unk_0x7E60D21B163E9D56();
			break;
		
		case 0x00000002:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000002))
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
				unk_0x7E60D21B163E9D56();
				if (*uParam0 == 0x00000002)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000002);
					func_11(sVar0);
					func_10("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000001);
					func_11(sVar3);
					func_10("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000000);
					func_11(sVar4);
					func_10("PB_H_TRIG");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000003);
					func_11(sVar0);
					func_10("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000002);
					func_11(sVar3);
					func_10("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000001);
					func_11(sVar5);
					func_10("PB_H_UNDO");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000000);
					func_11(sVar4);
					func_10("PB_H_TRIG");
					unk_0x7E60D21B163E9D56();
				}
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000000);
				unk_0x7E60D21B163E9D56();
			}
			break;
		
		case 0x00000003:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000002))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000009))
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000001);
					func_11(sVar1);
					func_10("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000000);
					func_11(sVar3);
					func_10("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000002);
					func_11(sVar1);
					func_10("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000001);
					func_11(sVar3);
					func_10("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0x00000000);
					func_11(sVar4);
					func_10("PB_H_TRIG");
					unk_0x7E60D21B163E9D56();
				}
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000000);
				unk_0x7E60D21B163E9D56();
			}
			break;
		
		case 0x00000004:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000002))
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000003);
				func_11(sVar2);
				func_10("PB_H_ZOOM");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000002);
				func_11(sVar3);
				func_10("PB_H_LOOK");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000001);
				func_11(sVar5);
				func_10("PB_H_UNDO");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0x00000000);
				func_11(sVar4);
				func_10("PB_H_CONF");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000000);
				unk_0x7E60D21B163E9D56();
			}
			break;
	}
}

void func_10(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_11(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_12(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 0x0000000B || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000020)
	{
		return 0x00000000;
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iParam0], iParam1);
	return bVar0;
}

void func_13(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000012);
		if (((!func_14(&(uParam0->f_1.f_14[0x00000000 /*4*/])) && !func_14(&(uParam0->f_1.f_14[0x00000001 /*4*/]))) && !func_14(&(uParam0->f_1.f_6C[0x00000000 /*4*/]))) && !func_14(&(uParam0->f_1.f_6C[0x00000001 /*4*/])))
		{
			unk_0xA37A90C62806D848(0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000012);
	}
}

bool func_14(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_15(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1AEC6 && iParam1)
	{
		if (func_14(sParam0) && !unk_0x79BBCD5833294FD5())
		{
			unk_0xA37A90C62806D848(0x00000000);
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_1B416.f_4FB5[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_1B416.f_4FB5.f_91 - 0x00000002))
			{
				func_18(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_17((Global_1B416.f_4FB5.f_91 - 0x00000001));
			Global_1B416.f_4FB5.f_91 = (Global_1B416.f_4FB5.f_91 - 0x00000001);
			func_16();
			return;
		}
		iVar0++;
	}
}

void func_16()
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

void func_17(int iParam0)
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

void func_18(int iParam0, int iParam1)
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

void func_19(var uParam0)
{
	int iVar0;
	struct<2> Var1;
	
	func_35(uParam0);
	func_33(uParam0);
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_19F);
	unk_0x7E60D21B163E9D56();
	iVar0 = func_66(func_32(*uParam0));
	if (iVar0 != 0x00000000)
	{
		if (iVar0 == func_31(*uParam0, 0x00000000))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000008);
			unk_0x7E60D21B163E9D56();
		}
		else if (iVar0 == func_31(*uParam0, 0x00000001))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000009);
			unk_0x7E60D21B163E9D56();
		}
	}
	Var1 = (uParam0->f_1.f_10 + uParam0->f_1.f_12);
	Var1.f_1 = (uParam0->f_1.f_10.f_1 + uParam0->f_1.f_12.f_1);
	func_27(uParam0, &Var1, uParam0->f_1.f_A);
	func_25(uParam0, 0x00000001, 0x00000001);
	func_13(uParam0, 0x00000000);
	func_20(uParam0);
}

void func_20(var uParam0)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000007))
	{
		if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000012))
		{
			switch (uParam0->f_1D0)
			{
				case 0x00000003:
					if (!Global_1B416.f_1[*uParam0])
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_14[0x00000000 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_14[0x00000000 /*4*/]), 0x00000003, 0x00000000, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
						}
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_14[0x00000001 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_14[0x00000001 /*4*/]), 0x00000003, 0x000003E8, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
						}
						Global_1B416.f_1[*uParam0] = 0x00000001;
					}
					else if (func_22() && !unk_0xFEBC1E4EC9E001F0())
					{
						if (((!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000B) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000A)) && !func_21()) && uParam0->f_1E3 == 0x00000000)
						{
							unk_0xB6A2CAEFEE28197D("PB_H_CHOICE");
							unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
						}
					}
					break;
				
				case 0x00000002:
					if (!Global_1B416.f_1.f_6[*uParam0])
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_6C[0x00000000 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_6C[0x00000000 /*4*/]), 0x00000003, 0x00000000, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
						}
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_6C[0x00000001 /*4*/]), ""))
						{
							func_23(&(uParam0->f_1.f_6C[0x00000001 /*4*/]), 0x00000003, 0x000003E8, 0xFFFFFFFF, 0x00002710, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
						}
						Global_1B416.f_1.f_6[*uParam0] = 0x00000001;
					}
					else if (func_22() && !unk_0xFEBC1E4EC9E001F0())
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000A))
						{
							if ((!func_14("PB_H_GUNM") && !func_14("PB_H_HACK")) && !func_14("PB_H_DRIV"))
							{
								iVar0 = func_66(func_32(*uParam0));
								if (uParam0->f_1A1 < 0x00000005)
								{
									if (((!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000B) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000A)) && !func_21()) && uParam0->f_1E3 == 0x00000000)
									{
										switch (Global_17235[iVar0 /*19*/].f_1[uParam0->f_1A1])
										{
											case 0x00000001:
												unk_0xB6A2CAEFEE28197D("PB_H_GUNM");
												unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
												break;
											
											case 0x00000002:
												unk_0xB6A2CAEFEE28197D("PB_H_HACK");
												unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
												break;
											
											case 0x00000003:
												unk_0xB6A2CAEFEE28197D("PB_H_DRIV");
												unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
												break;
											}
										}
									}
								}
							}
					}
					break;
				}
			}
	}
}

int func_21()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_22()
{
	if (Global_1B416.f_4FB5.f_91 > 0x00000000)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_23(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_24(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_24(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_16();
	}
}

void func_25(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1.f_12F, iParam1))
	{
		if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_118[iParam1 /*2*/]), ""))
		{
			func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_118[iParam1 /*2*/], iParam2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1.f_12F), iParam1);
		}
	}
}

void func_26(var uParam0, struct<2> Param1, struct<2> Param2, int iParam3)
{
	if (uParam0->f_1E3 == 0x00000003)
	{
		return;
	}
	if (!unk_0xEA6BC48857E0AC4C(&Param2))
	{
		uParam0->f_1D3[uParam0->f_1E3 /*5*/] = { Param1 };
		uParam0->f_1D3[uParam0->f_1E3 /*5*/].f_2 = { Param2 };
		uParam0->f_1D3[uParam0->f_1E3 /*5*/].f_4 = iParam3;
		uParam0->f_1E3++;
	}
}

void func_27(var uParam0, var uParam1, float fParam2)
{
	vector3 vVar0;
	
	uParam0->f_19B = *uParam1;
	uParam0->f_19B.f_1 = uParam1->f_1;
	uParam0->f_1C6 = unk_0x1C0640BA9A7327B3() + 1000;
	vVar0 = { func_29(uParam0, &(uParam0->f_19B)) };
	func_28(&(uParam0->f_289), vVar0, fParam2);
}

void func_28(var uParam0, vector3 vParam1, float fParam2)
{
	uParam0->f_B = { vParam1 };
	if (fParam2 != -1f)
	{
		uParam0->f_7 = fParam2;
	}
}

Vector3 func_29(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_30(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_194;
	vVar7 = { uParam0->f_191 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	fVar8 = fVar4;
	fVar9 = unk_0x10FCEF75D66B7A3B((fVar8 / uParam0->f_1.f_8));
	fVar10 = (uParam0->f_191.f_2 - uParam0->f_289.f_1.f_2);
	fVar11 = (vVar7.z - uParam0->f_289.f_1.f_2);
	fVar12 = (fVar11 - fVar10);
	fVar13 = unk_0x10FCEF75D66B7A3B((fVar12 / uParam0->f_1.f_8));
	fVar14 = ((fVar9 * 3f) / 18f);
	return (fVar13 * 0.95f), fVar14, (-fVar9 * 0.85f);
}

void func_30(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0x00000000 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0x00000000 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*uParam2 = (SYSTEM::TO_FLOAT(*uParam1) / SYSTEM::TO_FLOAT(iVar0));
	*uParam3 = (SYSTEM::TO_FLOAT(uParam1->f_1) / SYSTEM::TO_FLOAT(iVar1));
}

int func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000002;
					break;
				
				case 0x00000001:
					return 0x00000001;
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000003;
					break;
				
				case 0x00000001:
					return 0x00000004;
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000005;
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000006;
					break;
				
				case 0x00000001:
					return 0x00000007;
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000000:
					return 0x00000008;
					break;
				
				case 0x00000001:
					return 0x00000009;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0x00000000;
}

int func_32(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x00000007;
			break;
		
		case 0x00000001:
			iVar0 = 0x00000008;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000009;
			break;
		
		case 0x00000003:
			iVar0 = 0x0000000A;
			break;
		
		case 0x00000004:
			iVar0 = 0x0000000B;
			break;
	}
	return iVar0;
}

void func_33(var uParam0)
{
	int iVar0;
	
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "CREATE_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_19F);
	unk_0x3CAEA85DA607305E(0x00000001);
	unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_10));
	unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_10.f_1));
	unk_0x7E60D21B163E9D56();
	func_34(uParam0);
	switch (*uParam0)
	{
		case 0x00000000:
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000002);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(0x00000001);
			unk_0x3CAEA85DA607305E(0x00000001);
			unk_0x7E60D21B163E9D56();
			break;
		
		case 0x00000001:
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000003);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(0x00000001);
			unk_0x3CAEA85DA607305E(0x00000004);
			unk_0x7E60D21B163E9D56();
			break;
		
		case 0x00000003:
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000006);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(0x00000001);
			unk_0x3CAEA85DA607305E(0x00000007);
			unk_0x7E60D21B163E9D56();
			break;
		
		case 0x00000004:
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000008);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(0x00000001);
			unk_0x3CAEA85DA607305E(0x00000009);
			unk_0x7E60D21B163E9D56();
			break;
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "DISPLAY_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_19F);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_19F);
	unk_0x1200CC973A2399C8(func_327(*uParam0, uParam0->f_1.f_1D));
	unk_0x7E60D21B163E9D56();
	iVar0 = func_66(func_32(*uParam0));
	if (iVar0 != 0x00000000)
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
		unk_0x3CAEA85DA607305E(uParam0->f_19F);
		unk_0x7E60D21B163E9D56();
		if (iVar0 == func_31(*uParam0, 0x00000000))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000008);
			unk_0x7E60D21B163E9D56();
		}
		else if (iVar0 == func_31(*uParam0, 0x00000001))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000009);
			unk_0x7E60D21B163E9D56();
		}
		unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
		unk_0x3CAEA85DA607305E(0x00000063);
		unk_0x7E60D21B163E9D56();
	}
}

void func_34(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_LABELS");
	func_10("H_CRW_NAME");
	func_10("H_CRW_TYPE");
	func_10("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0x00000000:
			func_10("H_LBL_JWL");
			break;
		
		case 0x00000001:
			func_10("H_LBL_DOC");
			break;
		
		case 0x00000002:
			func_10("H_LBL_RUR");
			break;
		
		case 0x00000003:
			func_10("H_LBL_AGN");
			break;
		
		case 0x00000004:
			func_10("H_LBL_FA");
			func_10("H_LBL_FB");
			break;
	}
	if (*uParam0 != 0x00000001)
	{
		func_10("H_LBL_CRW");
	}
	func_10("H_LBL_TODO");
	if (*uParam0 != 0x00000002)
	{
		func_10("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0x00000000:
			func_10("H_LBL_J1");
			func_10("H_LBL_J2");
			func_10("H_LBL_J3");
			func_10("H_LBL_J4");
			func_10("HC_J_IMPACT");
			func_10("HC_J_STEALTH");
			break;
		
		case 0x00000001:
			func_10("HC_D_BLOW_UP");
			func_10("HC_D_DEEP_SEA");
			break;
		
		case 0x00000002:
			func_10("H_LBL_R1");
			func_10("H_LBL_R2");
			func_10("H_LBL_R3");
			func_10("H_LBL_R4");
			func_10("H_LBL_R5");
			func_10("H_LBL_R6");
			func_10("H_LBL_R7");
			func_10("H_LBL_R8");
			func_10("H_LBL_R9");
			func_10("H_LBL_R10");
			func_10("H_LBL_R11");
			func_10("H_LBL_R12");
			break;
		
		case 0x00000003:
			func_10("H_LBL_A1");
			func_10("H_LBL_A2");
			func_10("H_LBL_A3");
			func_10("H_LBL_A4");
			func_10("H_LBL_A5");
			func_10("HC_A_FIRETRUCK");
			func_10("HC_A_HELICOPTER");
			break;
		
		case 0x00000004:
			func_10("H_LBL_F1");
			func_10("H_LBL_F2");
			func_10("H_LBL_F3");
			func_10("H_LBL_F4");
			func_10("H_LBL_F5");
			func_10("HC_F_TRAFFCONT");
			func_10("HC_F_HELI");
			break;
	}
	unk_0x7E60D21B163E9D56();
}

void func_35(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(uParam0->f_19F);
	unk_0x7E60D21B163E9D56();
}

void func_36(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0x00000000 || iParam1 >= uParam0->f_1.f_60)
	{
		return;
	}
	func_25(uParam0, 0x00000002, 0x00000001);
	iVar0 = func_66(func_32(*uParam0));
	iVar1 = Global_17235[iVar0 /*19*/].f_1[iParam1];
	switch (iVar1)
	{
		case 0x00000001:
			func_63(uParam0, iVar0, 0x00000001);
			break;
		
		case 0x00000002:
			func_63(uParam0, iVar0, 0x00000003);
			break;
		
		case 0x00000003:
			func_63(uParam0, iVar0, 0x00000002);
			break;
	}
	func_62(uParam0, uParam0->f_1A1);
	func_37(uParam0, uParam0->f_1A1);
	uParam0->f_1C2 = iParam1;
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(0x00000001);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
	func_27(uParam0, &(uParam0->f_1.f_61[iParam1 /*2*/]), uParam0->f_1.f_A);
	if (iParam2 != 0x00000000)
	{
		iVar2 = 0x00000000;
		while (uParam0->f_1A2[iVar2] != iParam2)
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(0x00000009);
			unk_0x7E60D21B163E9D56();
			iVar2++;
			if (iVar2 > 0x00000007)
			{
				return;
			}
		}
	}
	func_13(uParam0, 0x00000000);
	func_20(uParam0);
}

void func_37(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_32(*uParam0);
	iVar1 = func_66(iVar0);
	iVar2 = Global_17235[iVar1 /*19*/].f_1[iParam1];
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "CREATE_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(0x00000000);
	unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_61[iParam1 /*2*/]));
	unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_61[iParam1 /*2*/].f_1));
	unk_0x7E60D21B163E9D56();
	func_34(uParam0);
	iVar3 = 0x00000000;
	if (Global_1B416.f_1.f_C[iVar1 /*6*/][iParam1] != 0x00000000)
	{
		iVar4 = Global_1B416.f_1.f_C[iVar1 /*6*/][iParam1];
		func_42(uParam0->f_19D, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0x00000000;
		while (iVar5 < 0x0000000E)
		{
			iVar6 = iVar5;
			if (func_41(iVar6) == iVar2)
			{
				if (func_40(iVar6))
				{
					if (!func_39(iVar6))
					{
						if (!func_38(uParam0, iVar6))
						{
							if (!(iVar6 == 0x0000000B && *uParam0 == 0x00000003))
							{
								func_42(uParam0->f_19D, iVar6, iParam1, iVar3, iVar5);
								uParam0->f_1A2[iVar3] = iVar6;
								iVar3++;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (Global_1B416.f_1.f_C[iVar1 /*6*/][iParam1] != 0x00000000)
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x1200CC973A2399C8(0x00000001);
		unk_0x7E60D21B163E9D56();
	}
	else
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x1200CC973A2399C8(0x00000000);
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "DISPLAY_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

int func_38(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_66(func_32(*uParam0));
	iVar1 = 0x00000000;
	while (iVar1 < uParam0->f_1A1)
	{
		if (Global_1B416.f_1.f_C[iVar0 /*6*/][iVar1] == iParam1)
		{
			return 0x00000001;
		}
		iVar1++;
	}
	return 0x00000000;
}

bool func_39(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_76, iParam0);
}

bool func_40(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_74, iParam0);
}

int func_41(int iParam0)
{
	return Global_1719B[iParam0 /*5*/];
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(iParam4);
	func_10(func_60(iParam1));
	func_10(func_59(iParam1));
	switch (func_41(iParam1))
	{
		case 0x00000001:
			func_10(func_58(0x00000000));
			unk_0x3CAEA85DA607305E(func_55(iParam1, 0x00000000));
			func_10(func_58(0x00000001));
			unk_0x3CAEA85DA607305E(func_55(iParam1, 0x00000001));
			func_10(func_58(0x00000002));
			unk_0x3CAEA85DA607305E(func_55(iParam1, 0x00000002));
			func_10(func_58(0x00000003));
			unk_0x3CAEA85DA607305E(func_55(iParam1, 0x00000003));
			break;
		
		case 0x00000002:
			func_10(func_54(0x00000000));
			unk_0x3CAEA85DA607305E(func_51(iParam1, 0x00000000));
			func_10(func_54(0x00000001));
			unk_0x3CAEA85DA607305E(func_51(iParam1, 0x00000001));
			func_10(func_54(0x00000002));
			unk_0x3CAEA85DA607305E(func_51(iParam1, 0x00000002));
			break;
		
		case 0x00000003:
			func_10(func_49(0x00000000));
			unk_0x3CAEA85DA607305E(func_44(iParam1, 0x00000000));
			func_10(func_49(0x00000001));
			unk_0x3CAEA85DA607305E(func_44(iParam1, 0x00000001));
			func_10(func_49(0x00000002));
			unk_0x3CAEA85DA607305E(func_44(iParam1, 0x00000002));
			break;
	}
	func_10("H_CRW_CUT");
	unk_0x3CAEA85DA607305E(func_43(iParam1));
	unk_0x7E60D21B163E9D56();
}

var func_43(int iParam0)
{
	return Global_1719B[iParam0 /*5*/].f_1;
}

int func_44(int iParam0, int iParam1)
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_46(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_45(iParam1))) * 100f));
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000064;
			break;
		
		case 0x00000001:
			return 0x00000064;
			break;
		
		case 0x00000002:
			return 0x00000064;
			break;
	}
	return 0x00000000;
}

int func_46(int iParam0, int iParam1)
{
	if (func_41(iParam0) != 0x00000003)
	{
		return 0xFFFFFFFF;
	}
	return func_47(iParam0, iParam1);
}

int func_47(int iParam0, int iParam1)
{
	return func_48(iParam1, Global_1B416.f_1.f_49[iParam0 /*3*/].f_1, Global_1B416.f_1.f_49[iParam0 /*3*/].f_2);
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			return SYSTEM::SHIFT_RIGHT(iParam1, (0x0000000F * iParam0)) & 0x00007FFF;
			break;
		
		case 0x00000002:
		case 0x00000003:
			return SYSTEM::SHIFT_RIGHT(iParam2, (0x0000000F * (iParam0 - 0x00000002))) & 0x00007FFF;
			break;
	}
	return 0xFFFFFFFF;
}

char* func_49(int iParam0)
{
	return func_50(0x00000003, iParam0);
}

char* func_50(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					return "HC_STA_G1";
					break;
				
				case 0x00000001:
					return "HC_STA_G2";
					break;
				
				case 0x00000002:
					return "HC_STA_G3";
					break;
				
				case 0x00000003:
					return "HC_STA_G4";
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					return "HC_STA_H1";
					break;
				
				case 0x00000001:
					return "HC_STA_H2";
					break;
				
				case 0x00000002:
					return "HC_STA_H3";
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					return "HC_STA_D1";
					break;
				
				case 0x00000001:
					return "HC_STA_D2";
					break;
				
				case 0x00000002:
					return "HC_STA_D3";
					break;
			}
			break;
	}
	return "ERROR!";
}

int func_51(int iParam0, int iParam1)
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_53(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_52(iParam1))) * 100f));
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000064;
			break;
		
		case 0x00000001:
			return 0x00000064;
			break;
		
		case 0x00000002:
			return 0x00000064;
			break;
	}
	return 0x00000000;
}

int func_53(int iParam0, int iParam1)
{
	if (func_41(iParam0) != 0x00000002)
	{
		return 0xFFFFFFFF;
	}
	return func_47(iParam0, iParam1);
}

char* func_54(int iParam0)
{
	return func_50(0x00000002, iParam0);
}

int func_55(int iParam0, int iParam1)
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_57(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_56(iParam1))) * 100f));
}

int func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x000003E8;
			break;
		
		case 0x00000001:
			return 0x00000064;
			break;
		
		case 0x00000002:
			return 0x00000064;
			break;
		
		case 0x00000003:
			return 0x00000064;
			break;
	}
	return 0x00000000;
}

int func_57(int iParam0, int iParam1)
{
	if (func_41(iParam0) != 0x00000001)
	{
		return 0xFFFFFFFF;
	}
	return func_47(iParam0, iParam1);
}

char* func_58(int iParam0)
{
	return func_50(0x00000001, iParam0);
}

char* func_59(int iParam0)
{
	switch (Global_1719B[iParam0 /*5*/])
	{
		case 0x00000001:
			return "HC_TYPE_G";
			break;
		
		case 0x00000002:
			return "HC_TYPE_H";
			break;
		
		case 0x00000003:
			return "HC_TYPE_D";
			break;
	}
	return "ERROR!";
}

char* func_60(int iParam0)
{
	return func_61(iParam0);
}

char* func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return "HC_N_GUS";
			break;
		
		case 0x00000002:
			return "HC_N_KAR";
			break;
		
		case 0x0000000A:
			return "HC_N_PAC";
			break;
		
		case 0x0000000B:
			return "HC_N_CHE";
			break;
		
		case 0x00000003:
			return "HC_N_HUG";
			break;
		
		case 0x00000004:
			return "HC_N_NOR";
			break;
		
		case 0x00000005:
			return "HC_N_DAR";
			break;
		
		case 0x00000006:
			return "HC_N_PAI";
			break;
		
		case 0x00000007:
			return "HC_N_CHR";
			break;
		
		case 0x0000000C:
			return "HC_N_RIC";
			break;
		
		case 0x00000008:
			return "HC_N_EDD";
			break;
		
		case 0x0000000D:
			return "HC_N_TAL";
			break;
		
		case 0x00000009:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

void func_62(var uParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

void func_63(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_17235[iParam1 /*19*/].f_12, iParam2))
	{
		if (!unk_0x7F8A39872A07D2CE(&(Global_17235[iParam1 /*19*/].f_7[iParam2 /*2*/]), ""))
		{
			func_26(uParam0, uParam0->f_1.f_114, Global_17235[iParam1 /*19*/].f_7[iParam2 /*2*/], 0x00000001);
			unk_0x5D96D8530B3D0904(&(Global_17235[iParam1 /*19*/].f_12), iParam2);
			iVar0 = 0x00000000;
			while (iVar0 < 0x0000000A)
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_17235[iParam1 /*19*/].f_7[iParam2 /*2*/]), &(Global_17235[iVar0 /*19*/].f_7[iParam2 /*2*/])))
				{
					unk_0x5D96D8530B3D0904(&(Global_17235[iVar0 /*19*/].f_12), iParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_64(var uParam0)
{
	func_27(uParam0, &(uParam0->f_1.f_C), 45f);
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(0x00000063);
	unk_0x7E60D21B163E9D56();
	func_20(uParam0);
}

void func_65(var uParam0)
{
	switch (uParam0->f_1D0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
			unk_0x3CAEA85DA607305E(0x00000063);
			unk_0x7E60D21B163E9D56();
			break;
	}
	unk_0xA37A90C62806D848(0x00000000);
}

int func_66(int iParam0)
{
	if (iParam0 == 0x0000000D || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_CD[iParam0];
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000002;
			break;
		
		case 0x00000001:
			return 0x00000003;
			break;
		
		case 0x00000002:
			return 0x00000004;
			break;
		
		case 0x00000003:
			return 0x00000005;
			break;
		
		case 0x00000004:
			return 0x00000006;
			break;
	}
	return 0xFFFFFFFF;
}

void func_68(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000001))
	{
		func_69(uParam0);
	}
}

void func_69(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	bVar0 = 0x00000000;
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000002))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_149(0x00000000))
			{
				if (func_140(0x00000008))
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), uParam0->f_191) < 4f)
					{
						vVar1 = { uParam0->f_191 - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
						fVar2 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
						fVar3 = unk_0x755FF954DAE327E1((uParam0->f_194 - fVar2));
						if (fVar3 <= 70f)
						{
							bVar0 = 0x00000001;
						}
						else
						{
							fVar4 = uParam0->f_194;
							if (fVar4 > 180f)
							{
								fVar4 = (fVar4 - 360f);
							}
							else if (fVar4 < -180f)
							{
								fVar4 = (fVar4 + 360f);
							}
							if ((fVar4 - fVar2) < fVar3)
							{
								fVar3 = unk_0x755FF954DAE327E1((fVar4 - fVar2));
							}
							if (fVar3 <= 70f)
							{
								bVar0 = 0x00000001;
							}
							else
							{
								if (fVar2 > 180f)
								{
									fVar2 = (fVar2 - 360f);
								}
								else if (fVar2 < -180f)
								{
									fVar2 = (fVar2 + 360f);
								}
								if ((uParam0->f_194 - fVar2) < fVar3)
								{
									fVar3 = unk_0x755FF954DAE327E1((uParam0->f_194 - fVar2));
								}
								if (fVar3 <= 70f)
								{
									bVar0 = 0x00000001;
								}
								else
								{
									if ((fVar4 - fVar2) < fVar3)
									{
										fVar3 = unk_0x755FF954DAE327E1((fVar4 - fVar2));
									}
									if (fVar3 <= 70f)
									{
										bVar0 = 0x00000001;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_1C3 == 0xFFFFFFFF)
			{
				func_139(&(uParam0->f_1C3), 0x00000003, "PB_H_ENT", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (func_138(uParam0->f_1C3, 0x00000001))
			{
				func_136(&(uParam0->f_1C3));
				func_122(uParam0);
			}
		}
		else if (uParam0->f_1C3 != 0xFFFFFFFF)
		{
			func_136(&(uParam0->f_1C3));
		}
	}
	else
	{
		bVar5 = func_12(0x00000001, *uParam0);
		func_80(uParam0);
		if (((!bVar5 && uParam0->f_1C5 > 0x0000000F) && (unk_0xBFC0798A6E3417F9(0x00000002, iLocal_36) || unk_0xBFC0798A6E3417F9(0x00000002, 0x000000EE))) || unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000008))
		{
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000008);
			func_70(uParam0, 0x00000000);
		}
	}
}

void func_70(var uParam0, bool bParam1)
{
	vector3 vVar0;
	int iVar1;
	
	uParam0->f_1C5 = 0x00000000;
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000000);
		if (!bParam1)
		{
			vVar0 = { uParam0->f_191 };
			vVar0 = { vVar0 + Vector(0f, (1f * SYSTEM::COS((180f - uParam0->f_194))), (1f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			unk_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0x00000000, 0x00000000);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), uParam0->f_194);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 0x3F800000);
			unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0x9072A713, 0x00000000, 0x00000000, 0x00000000);
			unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000086);
	}
	unk_0xBFE31971E49FA500(0x00000001);
	func_73(0x00000000);
	func_72();
	unk_0x17D339215F817B98();
	unk_0xA5E3ADAAA4CD5D6C(0x00000011);
	unk_0x911B98CDC647AC76(0x00000000);
	func_71(&(uParam0->f_289), 0x00000000, 0x00000001);
	func_15(&(uParam0->f_1.f_14[0x00000000 /*4*/]), 0x00000001);
	func_15(&(uParam0->f_1.f_14[0x00000001 /*4*/]), 0x00000001);
	func_15(&(uParam0->f_1.f_6C[0x00000000 /*4*/]), 0x00000001);
	func_15(&(uParam0->f_1.f_6C[0x00000001 /*4*/]), 0x00000001);
	unk_0xA37A90C62806D848(0x00000001);
	while (unk_0xFEBC1E4EC9E001F0())
	{
		unk_0xA37A90C62806D848(0x00000001);
		SYSTEM::WAIT(0x00000000);
	}
	iVar1 = unk_0xFBD08BECC9B87937(uParam0->f_191);
	if (iVar1 != 0x00000000)
	{
		unk_0x25BB71BA267FE042(iVar1);
	}
	unk_0x5372553242EA2414();
	func_65(uParam0);
	unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000007);
	unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000002);
	Global_1721F = 0x00000000;
}

void func_71(var uParam0, int iParam1, bool bParam2)
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

void func_72()
{
	Global_56C3.f_5 = 0x00000000;
}

void func_73(bool bParam0)
{
	if (bParam0)
	{
		func_79();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_149(0x00000000))
		{
			func_74(0x00000000);
		}
	}
	else if (Global_4C1E.f_1 == 0x00000001)
	{
		if (!Global_4C1E.f_1 == 0x00000000)
		{
			Global_4C1E.f_1 = 0x00000003;
		}
	}
}

void func_74(int iParam0)
{
	if (func_78())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_77())
		{
			func_76(0x00000001, 0x00000001);
		}
		else
		{
			func_76(0x00000000, 0x00000000);
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
	if (!func_75())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_75()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_76(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_149(0x00000000))
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

bool func_77()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_78()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_79()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

void func_80(var uParam0)
{
	char* sVar0;
	bool bVar1;
	vector3 vVar2;
	
	sVar0 = unk_0xE32F7AC5E6DF304A(0x00000000, 0x00000001, 0x00000001);
	if (!unk_0x7F8A39872A07D2CE(sVar0, uParam0->f_1D2))
	{
		func_9(uParam0);
	}
	uParam0->f_1D2 = sVar0;
	func_120();
	func_110(uParam0);
	func_88(uParam0);
	if (uParam0->f_1D0 == 0x00000001)
	{
		func_85(uParam0);
	}
	if (func_22())
	{
		func_20(uParam0);
	}
	bVar1 = uParam0->f_1C6 > unk_0x1C0640BA9A7327B3();
	func_81(&(uParam0->f_289), unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000004), (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000005) && !bVar1), 0x00000001, 0x00000000, 0x3E4CCCCD, 0x00000001, 0x3F800000, 0x00000000);
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000007))
	{
		if ((!unk_0x22A8E52414415B76() && unk_0x0F1CCD77290EE12F()) && !unk_0x798A3F1296751F46())
		{
			if (uParam0->f_1D0 != 0x00000001)
			{
				if (uParam0->f_1D0 == 0x00000000 || (((!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000B) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000A)) && !func_21()) && uParam0->f_1E3 == 0x00000000))
				{
					if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000012) || uParam0->f_1D0 == 0x00000002)
					{
						unk_0x6567AE843FADBA94(uParam0->f_19E, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
					}
				}
			}
		}
	}
	unk_0xBFE31971E49FA500(0x00000000);
	unk_0x3584F71E5CA29322(0x00000002);
	unk_0x3584F71E5CA29322(0x00000001);
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000003);
	unk_0xB8E3919889462ACD();
	unk_0xD02CE72B4B66DC29(0x00000052, 0x00000042);
	unk_0x744B56EE9DE7B57F(0x00000011, 0.612f, 0.818f);
	unk_0xD59EF13BB60323B9();
	if (!unk_0x22A8E52414415B76())
	{
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000C9);
	}
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000CA);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BC);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BB);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BD);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000BE);
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000007))
	{
		if (!unk_0x22A8E52414415B76())
		{
			vVar2 = { uParam0->f_191 };
			vVar2 = { vVar2 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_194))), (2.9f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			unk_0xE82754C349C7B581(vVar2, &(vVar2.f_2), 0x00000000, 0x00000000);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000086);
			unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar2, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), uParam0->f_194);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000007);
		}
	}
}

void func_81(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
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
	func_84(&(iVar0[0x00000000]), &(iVar0[0x00000001]), &(iVar0[0x00000002]), &(iVar0[0x00000003]), 0x00000000, 0x00000000);
	if (unk_0x89DF0B812BA6383B())
	{
		iVar0[0x00000003] = (iVar0[0x00000003] * 0xFFFFFFFF);
	}
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		fVar1 = unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000EF);
		fVar2 = unk_0x659FAE9DBE6F38F5(0x00000002, 0x000000F0);
		fVar3 = (fVar1 - uParam0->f_1D);
		fVar4 = (fVar2 - uParam0->f_1E);
		uParam0->f_1D = fVar1;
		uParam0->f_1E = fVar2;
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
		iVar0[0x00000002] = func_83((iVar0[0x00000002] + uParam0->f_18), 0xFFFFFF81, 0x0000007F);
		iVar0[0x00000003] = func_83((iVar0[0x00000003] + uParam0->f_19), 0xFFFFFF81, 0x0000007F);
	}
	if (uParam0->f_18 == iVar0[0x00000002] && uParam0->f_19 == iVar0[0x00000003])
	{
		if (uParam0->f_1B < unk_0x1C0640BA9A7327B3())
		{
			uParam0->f_18 = 0x00000000;
			uParam0->f_19 = 0x00000000;
			if (unk_0x91E3F625EF57450D(0x00000002))
			{
				iVar0[0x00000002] = 0x00000000;
				iVar0[0x00000003] = 0x00000000;
				uParam0->f_1C = 0x00000001;
			}
		}
	}
	else
	{
		uParam0->f_18 = iVar0[0x00000002];
		uParam0->f_19 = iVar0[0x00000003];
		uParam0->f_1B = unk_0x1C0640BA9A7327B3() + 4000;
		uParam0->f_1C = 0x00000000;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[0x00000002]) / 127f) * IntToFloat(uParam0->f_14));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_16)) / IntToFloat(uParam0->f_14));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[0x00000003]) / 127f) * IntToFloat(uParam0->f_15));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_18 = 0x00000000;
		uParam0->f_19 = 0x00000000;
	}
	fVar5 = (30f * SYSTEM::TIMESTEP());
	vVar6 = { uParam0->f_8 + uParam0->f_B };
	if ((unk_0x91E3F625EF57450D(0x00000002) && bParam2) && !uParam0->f_1C)
	{
		uParam0->f_E = vVar6.x;
		uParam0->f_E.f_1 = vVar6.y;
		uParam0->f_E.f_2 = vVar6.z;
	}
	else
	{
		uParam0->f_E = (uParam0->f_E + func_82(((((vVar6.x - uParam0->f_E) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_E.f_1 = (uParam0->f_E.f_1 + func_82(((((vVar6.y - uParam0->f_E.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_E.f_2 = (uParam0->f_E.f_2 + func_82(((((vVar6.z - uParam0->f_E.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_1A)
	{
		uParam0->f_E = func_82(uParam0->f_E, SYSTEM::TO_FLOAT(-uParam0->f_15), SYSTEM::TO_FLOAT(uParam0->f_15));
		uParam0->f_E.f_1 = func_82(uParam0->f_E.f_1, SYSTEM::TO_FLOAT(-uParam0->f_16), SYSTEM::TO_FLOAT(uParam0->f_16));
		uParam0->f_E.f_2 = func_82(uParam0->f_E.f_2, SYSTEM::TO_FLOAT(-uParam0->f_14), SYSTEM::TO_FLOAT(uParam0->f_14));
	}
	if (unk_0x91E3F625EF57450D(0x00000000) && bParam1)
	{
		if (uParam0->f_1C)
		{
			uParam0->f_11 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_11 = uParam0->f_7;
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
				uParam0->f_11 = (uParam0->f_11 - 5f);
				uParam0->f_1B = unk_0x1C0640BA9A7327B3() + 4000;
				uParam0->f_1C = 0x00000000;
			}
			else if (unk_0xD245978525608929(0x00000000, iVar8))
			{
				uParam0->f_11 = (uParam0->f_11 + 5f);
				uParam0->f_1B = unk_0x1C0640BA9A7327B3() + 4000;
				uParam0->f_1C = 0x00000000;
			}
			if (bParam3)
			{
				uParam0->f_11 = func_82(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), uParam0->f_7);
			}
			else
			{
				uParam0->f_11 = func_82(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), (uParam0->f_7 + uParam0->f_13));
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
					uParam0->f_11 = (uParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000003]) / 128f) * (uParam0->f_13 / 2f)))));
				}
			}
			else
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000001]) / 128f) * uParam0->f_13))));
				uParam0->f_11 = (uParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000003]) / 128f) * uParam0->f_13))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[0x00000001]) < 0f)
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000001]) / 128f) * uParam0->f_13))));
			}
		}
		else
		{
			uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[0x00000001]) / 128f) * uParam0->f_13))));
		}
	}
	uParam0->f_12 = (uParam0->f_12 + (((uParam0->f_11 - uParam0->f_12) * 0.06f) * fVar5));
	unk_0x86F44313DFA8F00C(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_E, uParam0->f_12, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		if (unk_0xFBB4F23D534EB790(*uParam0))
		{
			if (unk_0x9CF8D5C7090408A2(*uParam0))
			{
				unk_0x9501364A300048C6();
			}
		}
	}
}

float func_82(float fParam0, float fParam1, float fParam2)
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

int func_83(int iParam0, int iParam1, int iParam2)
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

void func_84(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
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

void func_85(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_12(0x00000003, *uParam0))
	{
		if (uParam0->f_1E3 == 0x00000000 && uParam0->f_1C7 > 0x00000003)
		{
			if (uParam0->f_1C4 == 0xFFFFFFFF)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000013))
				{
					uParam0->f_1C4 = unk_0x1C0640BA9A7327B3() + 500;
				}
				else
				{
					uParam0->f_1C4 = unk_0x1C0640BA9A7327B3();
				}
			}
			else if (unk_0x1C0640BA9A7327B3() > uParam0->f_1C4)
			{
				bVar0 = 0x00000000;
				iVar1 = 0x00000000;
				while (iVar1 < uParam0->f_1.f_171)
				{
					if (!bVar0)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1.f_12F, iVar1 + 4))
						{
							func_87(uParam0, iVar1);
							if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1.f_172, iVar1))
							{
								unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000013);
							}
							else
							{
								unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000013);
							}
							bVar0 = 0x00000001;
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_86(0x00000003, *uParam0, 0x00000001);
				}
			}
		}
	}
}

void func_86(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (iParam0 == 0x0000000B || iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000020)
	{
		return;
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_2378.f_63.f_DB[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_2378.f_63.f_DB[iParam0]), iParam1);
	}
}

void func_87(var uParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(0x00000063);
	unk_0x7E60D21B163E9D56();
	func_27(uParam0, &(uParam0->f_1.f_173[iParam1 /*2*/]), uParam0->f_1.f_B);
	func_25(uParam0, iParam1 + 4, 0x00000001);
	uParam0->f_1C4 = 0xFFFFFFFF;
}

void func_88(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if ((!func_21() && unk_0x0F1CCD77290EE12F()) && !unk_0x22A8E52414415B76())
	{
		if (uParam0->f_1E3 > 0x00000000)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000D))
			{
				if (func_89(&(uParam0->f_1E4), &(uParam0->f_1D3[0x00000000 /*5*/]), &(uParam0->f_1D3[0x00000000 /*5*/].f_2), 0x00000004, 0x00000000, 0x00000000, 0x00000000))
				{
					uParam0->f_1C7 = 0x00000000;
					if (uParam0->f_1D3[0x00000000 /*5*/].f_4)
					{
						unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x0000000B);
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000B);
					}
					iVar0 = 0x00000000;
					while (iVar0 < 0x00000002)
					{
						uParam0->f_1D3[iVar0 /*5*/] = { uParam0->f_1D3[iVar0 + 1 /*5*/] };
						uParam0->f_1D3[iVar0 /*5*/].f_2 = { uParam0->f_1D3[iVar0 + 1 /*5*/].f_2 };
						uParam0->f_1D3[iVar0 /*5*/].f_4 = uParam0->f_1D3[iVar0 + 1 /*5*/].f_4;
						iVar0++;
					}
					uParam0->f_1E3 = (uParam0->f_1E3 - 0x00000001);
				}
			}
			else
			{
				iVar1 = 0x00000000;
				while (iVar1 < 0x00000002)
				{
					uParam0->f_1D3[iVar1 /*5*/] = { uParam0->f_1D3[iVar1 + 1 /*5*/] };
					uParam0->f_1D3[iVar1 /*5*/].f_2 = { uParam0->f_1D3[iVar1 + 1 /*5*/].f_2 };
					uParam0->f_1D3[iVar1 /*5*/].f_4 = uParam0->f_1D3[iVar1 + 1 /*5*/].f_4;
					iVar1++;
				}
				uParam0->f_1E3 = (uParam0->f_1E3 - 0x00000001);
				unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x0000000D);
				unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x0000000B);
			}
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000B))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x0000000B);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000D))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x0000000D);
			}
			uParam0->f_1C7++;
		}
	}
}

bool func_89(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_109(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 0x00000007)
	{
		if (iParam3 < 0x0000000C)
		{
			iParam3 = 0x00000007;
		}
	}
	Global_514C = 0x00000000;
	Global_514E = 0x00000000;
	Global_5153 = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	Global_280001 = 0x00000000;
	return func_90(sParam2, iParam3, 0x00000000);
}

int func_90(char* sParam0, int iParam1, bool bParam2)
{
	Global_5146 = 0x00000000;
	if (Global_5145 == 0x00000000 || Global_5147 == 0x00000002)
	{
		if (Global_5145 != 0x00000000)
		{
			if (iParam1 > Global_5147)
			{
				if (Global_514C == 0x00000000)
				{
					unk_0x5CEB4DB888A62073(0x00000000);
					Global_4C1E.f_1 = 0x00000003;
					Global_5145 = 0x00000000;
					Global_5146 = 0x00000001;
					Global_517A = 0x00000000;
					Global_5141 = 0x00000000;
					Global_5142 = 0x00000000;
					Global_5150 = 0x00000000;
					Global_514F = 0x00000000;
					Global_4C1D = 0x00000000;
				}
				else
				{
					func_108();
					return 0x00000000;
				}
			}
			else
			{
				return 0x00000000;
			}
		}
		if (unk_0x25037C66EB32B076())
		{
			return 0x00000000;
		}
		if (func_107(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_106();
		Global_4E7E = { Global_4F23 };
		Global_514B = Global_514C;
		Global_5152 = Global_5153;
		Global_280002 = Global_280001;
		Global_5154 = { Global_5164 };
		Global_514D = Global_514E;
		Global_5523 = Global_5524;
		Global_552B = { Global_5531 };
		Global_5525 = Global_5526;
		Global_5527 = Global_5528;
		Global_5529 = Global_552A;
		Global_4FC8.f_172 = Global_5522;
		Global_4FC8.f_170 = Global_5520;
		Global_4FC8.f_171 = Global_5521;
		Global_5141 = Global_5142;
		if (Global_514B)
		{
			unk_0x0674E58A79778E99(&Global_1CBC, 0x00000014);
			unk_0x0674E58A79778E99(&Global_1CBD, 0x00000011);
			unk_0x0674E58A79778E99(&Global_1CBE, 0x00000000);
			if (bParam2)
			{
				func_99();
				if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
				{
					if (iParam1 == 0x0000000D)
					{
					}
					else
					{
						return 0x00000000;
					}
				}
				if (Global_4C1E.f_1 > 0x00000003)
				{
					return 0x00000000;
				}
			}
			if (Global_4BFC == 0x00000001)
			{
				return 0x00000000;
			}
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (func_98())
				{
					return 0x00000000;
				}
				if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					return 0x00000000;
				}
				if (unk_0x989FD1982F631EA3(unk_0x16F2683693E537C9(), joaat("gadget_parachute")))
				{
					return 0x00000000;
				}
				if (!Global_12B4E)
				{
					if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
					{
						return 0x00000000;
					}
					if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
					{
						return 0x00000000;
					}
					if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
					{
						return 0x00000000;
					}
					if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0x00000000))
					{
						return 0x00000000;
					}
				}
			}
			if (func_75())
			{
				return 0x00000000;
			}
			else
			{
				switch (Global_4C1E.f_1)
				{
					case 0x00000007:
						return 0x00000000;
						break;
					
					case 0x00000008:
						return 0x00000000;
						break;
					
					case 0x00000009:
						break;
					
					case 0x0000000A:
						break;
					
					default:
						break;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x00000009))
				{
					return 0x00000000;
				}
			}
			func_97();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_96();
		func_91();
		return 0x00000001;
	}
	if (Global_5145 == 0x00000005)
	{
		return 0x00000000;
	}
	if (iParam1 < Global_5147 || iParam1 == Global_5147)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000002)
	{
	}
	else
	{
		func_108();
	}
	return 0x00000000;
}

void func_91()
{
	if (!func_92())
	{
		return;
	}
	if (Global_514B)
	{
		MemCopy(&(Global_19FCC4.f_1), {Global_4FC8}, 0x00000004);
		Global_19FCC4 = Global_1A0F;
		Global_19FCC4.f_6 = Global_514F;
	}
}

int func_92()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_95())
	{
		return 0x00000000;
	}
	if (func_93(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 0x00000007))
	{
		return 0x00000000;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_93(int iParam0)
{
	return func_94(iParam0, 0x00000014);
}

bool func_94(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_95()
{
	return 0xFFFFFFFF;
}

void func_96()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000045)
	{
		StringCopy(&(Global_4CD9[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(0x00000000);
	Global_5145 = 0x00000001;
}

void func_97()
{
	Global_517A = Global_5179;
	Global_5174 = Global_5175;
	Global_51A3 = { Global_5197 };
	Global_51A9 = { Global_519D };
	Global_517C = Global_517B;
	Global_51C1 = { Global_51AF };
	Global_51C7 = { Global_51B5 };
	Global_51CD = { Global_51BB };
	Global_51D3 = { Global_51D9 };
	Global_1A0F = Global_1A10;
	Global_1A11 = Global_1A12;
	Global_5150 = Global_5151;
	Global_5152 = Global_5153;
	Global_5154 = { Global_5164 };
	Global_5149 = Global_514A;
	Global_553D = 0x00000000;
	Global_5176 = 0x00000000;
	Global_5177 = 0x00000000;
	unk_0x0674E58A79778E99(&Global_1CBD, 0x00000010);
}

int func_98()
{
	int iVar0;
	int iVar1;
	
	if (Global_12B4E)
	{
		iVar0 = 0x00000000;
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 0x00000001);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 0x00000001;
			}
		}
		if (unk_0x5ED715849883FAFF() && iVar0 == 0x00000001)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 0x0000004E, 0x00000001))
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_99()
{
	if (func_325(0x0000000E))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000000 /*29*/])
			{
				Global_4C1E = 0x00000000;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000001 /*29*/])
			{
				Global_4C1E = 0x00000001;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0x00000002 /*29*/])
			{
				Global_4C1E = 0x00000002;
			}
			else
			{
				Global_4C1E = 0x00000000;
			}
		}
	}
	else
	{
		Global_4C1E = func_100();
		if (Global_4C1E == 0x00000091)
		{
			Global_4C1E = 0x00000003;
		}
		if (Global_12B4E)
		{
			Global_4C1E = 0x00000003;
		}
		if (Global_4C1E > 0x00000003)
		{
			Global_4C1E = 0x00000003;
		}
	}
}

int func_100()
{
	func_101();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_101()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_104(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_103(unk_0x16F2683693E537C9());
			if (func_102(iVar0) && (!func_325(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_102(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_102(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_103(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_104(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_104(int iParam0)
{
	if (func_102(iParam0))
	{
		return func_105(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_105(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_106()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= 0x0000000F)
	{
		Global_4E7E[iVar0 /*10*/] = 0x00000000;
		StringCopy(&(Global_4E7E[iVar0 /*10*/].f_1), "", 24);
		Global_4E7E[iVar0 /*10*/].f_7 = 0x00000000;
		Global_4E7E[iVar0 /*10*/].f_8 = 0x00000000;
		iVar0++;
	}
	Global_4E7E.f_A1 = 0xFFFFFF9D;
	Global_4E7E.f_A2 = { 0f, 0f, 0f };
}

bool func_107(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000005:
			if (iParam1 > 0xFFFFFFFF)
			{
				return Global_150392.f_CB[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_418, iParam0);
}

void func_108()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if ((unk_0x1EE04CEA36EF313B() || Global_4C1E.f_1 == 0x00000009) || Global_4C1D == 0x00000001)
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
		Global_4C1E.f_1 = 0x00000003;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000001);
		Global_5145 = 0x00000006;
		return;
	}
}

void func_109(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = iParam1;
	StringCopy(&Global_518B, sParam2, 24);
	Global_5522 = uParam5;
	if (iParam3 == 0x00000000)
	{
		Global_5520 = 0x00000001;
		Global_551E = 0x00000000;
	}
	else
	{
		Global_5520 = 0x00000000;
		Global_551E = 0x00000001;
	}
	if (iParam4 == 0x00000000)
	{
		Global_5521 = 0x00000001;
		Global_551F = 0x00000000;
	}
	else
	{
		Global_5521 = 0x00000000;
		Global_551F = 0x00000001;
	}
}

void func_110(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
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
	
	uParam0->f_1C5++;
	if (unk_0xB8E3620B82AD47D7(0x00000002))
	{
		func_9(uParam0);
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000B))
	{
		if ((unk_0xBFC0798A6E3417F9(0x00000002, iLocal_37) || unk_0xBFC0798A6E3417F9(0x00000002, iLocal_39)) || (unk_0x91E3F625EF57450D(0x00000002) && (unk_0xBFC0798A6E3417F9(0x00000002, iLocal_38) || unk_0xBFC0798A6E3417F9(0x00000002, iLocal_40))))
		{
			func_118();
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000C))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000D);
				unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x0000000B);
				unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x0000000A);
			}
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x0000000C);
		}
	}
	func_84(&(uParam0->f_1CA[0x00000000]), &(uParam0->f_1CA[0x00000001]), &(uParam0->f_1CA[0x00000002]), &(uParam0->f_1CA[0x00000003]), 0x00000000, 0x00000000);
	if (unk_0x91E3F625EF57450D(0x00000002))
	{
		uParam0->f_1CA[0x00000002] = (uParam0->f_1CA[0x00000002] / 0x0000000A);
		uParam0->f_1CA[0x00000003] = (uParam0->f_1CA[0x00000003] / 0x0000000A);
		uParam0->f_1CA[0x00000002] = func_83((uParam0->f_1CA[0x00000002] + uParam0->f_289.f_18), 0xFFFFFF81, 0x0000007F);
		uParam0->f_1CA[0x00000003] = func_83((uParam0->f_1CA[0x00000003] + uParam0->f_289.f_19), 0xFFFFFF81, 0x0000007F);
	}
	uParam0->f_289.f_18 = uParam0->f_1CA[0x00000002];
	uParam0->f_289.f_19 = uParam0->f_1CA[0x00000003];
	if (unk_0x89DF0B812BA6383B())
	{
		uParam0->f_1CA[0x00000003] = -uParam0->f_1CA[0x00000003];
	}
	if (uParam0->f_1C6 > unk_0x1C0640BA9A7327B3())
	{
		uParam0->f_1CA[0x00000002] = 0x00000000;
		uParam0->f_1CA[0x00000003] = 0x00000000;
	}
	if (uParam0->f_1D0 == 0x00000000 || uParam0->f_1D0 == 0x00000004)
	{
		if (uParam0->f_1C5 > 0x0000000F)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000004);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000004);
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000A))
	{
		if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000B))
		{
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_1C8) > 0x000000C8)
			{
				if ((uParam0->f_1D0 == 0x00000002 || uParam0->f_1D0 == 0x00000003) || uParam0->f_1D0 == 0x00000004)
				{
					if ((unk_0x1C0640BA9A7327B3() - uParam0->f_1C9) > 0x000061A8)
					{
						func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_118[0x00000003 /*2*/], 0x00000001);
						uParam0->f_1C9 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000000, 0x00001F40));
					}
				}
				if (uParam0->f_1D0 == 0x00000002)
				{
					if ((((uParam0->f_1CA[0x00000001] < 0xFFFFFFAB || uParam0->f_1CA[0x00000000] < 0xFFFFFFAB) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BC)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BD)) || (unk_0x91E3F625EF57450D(0x00000002) && unk_0xD245978525608929(0x00000002, 0x000000F1)))
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
						unk_0x3CAEA85DA607305E(0x00000008);
						unk_0x7E60D21B163E9D56();
						unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "GET_CURRENT_SELECTION");
						uParam0->f_2AA = unk_0x7A8BB56B212464AC();
						uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
					else if ((((uParam0->f_1CA[0x00000001] > 0x00000055 || uParam0->f_1CA[0x00000000] > 0x00000055) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BB)) || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BE)) || (unk_0x91E3F625EF57450D(0x00000002) && unk_0xD245978525608929(0x00000000, 0x000000F2)))
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
						unk_0x3CAEA85DA607305E(0x00000009);
						unk_0x7E60D21B163E9D56();
						unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "GET_CURRENT_SELECTION");
						uParam0->f_2AA = unk_0x7A8BB56B212464AC();
						uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
				}
				if (uParam0->f_1D0 == 0x00000003)
				{
					if ((uParam0->f_1CA[0x00000001] < 0xFFFFFFAB || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BC)) || (unk_0x91E3F625EF57450D(0x00000002) && unk_0xD245978525608929(0x00000000, 0x00000028)))
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
						unk_0x3CAEA85DA607305E(0x00000008);
						unk_0x7E60D21B163E9D56();
						if (uParam0->f_1A0 != 0x00000000)
						{
							unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 0x00000001);
						}
						uParam0->f_1A0 = 0x00000000;
						if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000009))
						{
							unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000009);
							func_9(uParam0);
						}
						uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
					else if ((uParam0->f_1CA[0x00000001] > 0x00000055 || unk_0x06F8112AA79C53D9(0x00000002, 0x000000BB)) || (unk_0x91E3F625EF57450D(0x00000002) && unk_0xD245978525608929(0x00000000, 0x00000029)))
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
						unk_0x3CAEA85DA607305E(0x00000009);
						unk_0x7E60D21B163E9D56();
						if (uParam0->f_1A0 != 0x00000001)
						{
							unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", 0x00000001);
						}
						uParam0->f_1A0 = 0x00000001;
						if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000009))
						{
							unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000009);
							func_9(uParam0);
						}
						uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
				}
				if (!func_21() || unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000D))
				{
					if (unk_0xBFC0798A6E3417F9(0x00000002, iLocal_37) || (unk_0x91E3F625EF57450D(0x00000002) && unk_0xBFC0798A6E3417F9(0x00000002, iLocal_38)))
					{
						switch (uParam0->f_1D0)
						{
							case 0x00000003:
								if (!func_21())
								{
									if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000009))
									{
										uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
										iVar0 = func_32(*uParam0);
										if (iVar0 != 0xFFFFFFFF)
										{
											unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "GET_CURRENT_SELECTION");
											uParam0->f_2A8 = unk_0x7A8BB56B212464AC();
											func_13(uParam0, 0x00000001);
											func_15(&(uParam0->f_1.f_14[0x00000000 /*4*/]), 0x00000001);
											func_15(&(uParam0->f_1.f_14[0x00000001 /*4*/]), 0x00000001);
											Global_1B416.f_1[*uParam0] = 0x00000001;
											unk_0xA37A90C62806D848(0x00000000);
										}
									}
								}
								break;
							
							case 0x00000002:
								if (!func_12(0x00000004, *uParam0))
								{
									iVar0 = func_32(*uParam0);
									iVar1 = func_66(iVar0);
									if (uParam0->f_1C2 < Global_17235[iVar1 /*19*/])
									{
										unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "GET_CURRENT_SELECTION");
										uParam0->f_2A9 = unk_0x7A8BB56B212464AC();
										func_13(uParam0, 0x00000001);
									}
								}
								break;
							
							case 0x00000004:
								if (*uParam0 != 0x00000001)
								{
									func_86(0x00000004, *uParam0, 0x00000001);
									if (!func_3(0x00000000))
									{
										func_116(*uParam0);
									}
								}
								else
								{
									func_86(0x00000005, *uParam0, 0x00000001);
								}
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
								iVar0 = func_32(*uParam0);
								iVar1 = func_66(iVar0);
								iVar2 = 0x00000000;
								while (iVar2 < Global_17235[iVar1 /*19*/])
								{
									if (Global_1B416.f_1.f_C[iVar1 /*6*/][iVar2] == 0x00000000 || func_41(Global_1B416.f_1.f_C[iVar1 /*6*/][iVar2]) != Global_17235[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = 0x00000000;
										iVar5 = 0x00000000;
										while (iVar5 < 0x0000000E)
										{
											if (!bVar4)
											{
												bVar4 = 0x00000001;
												iVar3 = iVar5;
												if (iVar3 != 0x00000000)
												{
													if (Global_1719B[iVar3 /*5*/] != Global_17235[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = 0x00000000;
													}
													if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_74, iVar3))
													{
														bVar4 = 0x00000000;
													}
													if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_76, iVar3))
													{
														bVar4 = 0x00000000;
													}
													if (iVar3 == 0x0000000B && *uParam0 == 0x00000003)
													{
														bVar4 = 0x00000000;
													}
													if (func_38(uParam0, iVar3))
													{
														bVar4 = 0x00000000;
													}
												}
												else
												{
													bVar4 = 0x00000000;
												}
											}
											iVar5++;
										}
										Global_1B416.f_1.f_C[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								func_13(uParam0, 0x00000001);
								func_63(uParam0, iVar1, 0x00000004);
								break;
						}
						uParam0->f_1AB = 0x00000000;
					}
					if (unk_0xBFC0798A6E3417F9(0x00000002, iLocal_39) || (unk_0x91E3F625EF57450D(0x00000002) && unk_0xBFC0798A6E3417F9(0x00000002, iLocal_40)))
					{
						switch (uParam0->f_1D0)
						{
							case 0x00000002:
								iVar0 = func_32(*uParam0);
								iVar1 = func_66(iVar0);
								if (uParam0->f_1C2 > 0x00000000)
								{
									func_13(uParam0, 0x00000001);
									uParam0->f_1C2 = (uParam0->f_1C2 - 0x00000001);
									uParam0->f_1A1 = uParam0->f_1C2;
									iVar6 = Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
									Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0x00000000;
									uParam0->f_1D1 = Global_17235[iVar1 /*19*/].f_1[uParam0->f_1C2];
									func_36(uParam0, uParam0->f_1C2, iVar6);
									unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 0x00000001);
									uParam0->f_1AB = 0x00000000;
									uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
								}
								else if (!func_330(0x00000000))
								{
									if (*uParam0 != 0x00000002)
									{
										iVar7 = 0x00000000;
										while (iVar7 < uParam0->f_1.f_60)
										{
											unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
											unk_0x3CAEA85DA607305E(iVar7);
											unk_0x7E60D21B163E9D56();
											unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
											unk_0x3CAEA85DA607305E(iVar7);
											unk_0x1200CC973A2399C8(0x00000001);
											unk_0x7E60D21B163E9D56();
											iVar7++;
										}
										unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 0x00000001);
										iVar7 = 0x00000000;
										while (iVar7 < 0x00000002)
										{
											if (uParam0->f_1.f_1E[iVar7] != 0x0000000D)
											{
												func_2(*uParam0, uParam0->f_1.f_1E[iVar7], 0x00000000);
											}
											iVar7++;
										}
										uParam0->f_1AB = 0x00000000;
										func_13(uParam0, 0x00000001);
										uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
										uParam0->f_1D1 = 0x00000000;
										func_115(0x00000000, 0x00000001);
									}
								}
								break;
							
							case 0x00000004:
								if (*uParam0 != 0x00000001)
								{
									iVar0 = func_32(*uParam0);
									iVar1 = func_66(iVar0);
									uParam0->f_1C2 = (uParam0->f_1C2 - 0x00000001);
									uParam0->f_1A1 = uParam0->f_1C2;
									iVar8 = Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
									Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0x00000000;
									uParam0->f_1D1 = Global_17235[iVar1 /*19*/].f_1[uParam0->f_1C2];
									func_7(uParam0, 0x00000002, iVar8);
								}
								else
								{
									iVar9 = 0x00000000;
									while (iVar9 < 0x00000002)
									{
										if (uParam0->f_1.f_1E[iVar9] != 0x0000000D)
										{
											func_2(*uParam0, uParam0->f_1.f_1E[iVar9], 0x00000000);
										}
										iVar9++;
									}
									func_114(0x00000008, 0x00000000);
									func_86(0x00000005, 0x00000001, 0x00000000);
									uParam0->f_1AB = 0x00000000;
									func_13(uParam0, 0x00000001);
									uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
									func_7(uParam0, 0x00000003, 0x00000000);
								}
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", 0x00000001);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_1C7 > 0x00000005)
	{
		iVar0 = func_32(*uParam0);
		iVar1 = func_66(iVar0);
		if (uParam0->f_1C2 >= Global_17235[iVar1 /*19*/] || (*uParam0 == 0x00000001 && uParam0->f_1C2 > uParam0->f_19F))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
			unk_0x3CAEA85DA607305E(0x00000063);
			unk_0x3CAEA85DA607305E(0xFFFFFFFF);
			unk_0x7E60D21B163E9D56();
			func_25(uParam0, 0x00000000, 0x00000001);
			func_7(uParam0, 0x00000004, 0x00000000);
		}
		else
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000011))
			{
				iVar10 = Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
				Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0x00000000;
				uParam0->f_1D1 = Global_17235[iVar1 /*19*/].f_1[uParam0->f_1C2];
				func_36(uParam0, uParam0->f_1C2, iVar10);
			}
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000011);
		}
		uParam0->f_1C9 = unk_0x1C0640BA9A7327B3();
		unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x0000000A);
	}
	else if (unk_0xFEBC1E4EC9E001F0())
	{
		if (((!func_14(&(uParam0->f_1.f_6C[0x00000000 /*4*/])) && !func_14(&(uParam0->f_1.f_6C[0x00000001 /*4*/]))) && !func_14(&(uParam0->f_1.f_14[0x00000000 /*4*/]))) && !func_14(&(uParam0->f_1.f_14[0x00000001 /*4*/])))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (uParam0->f_2A8 != 0x00000000)
	{
		if (unk_0xC95D7AEEDEF4946B(uParam0->f_2A8))
		{
			iVar11 = unk_0xA52833FE33F41C53(uParam0->f_2A8);
			iVar1 = func_31(*uParam0, iVar11);
			iVar0 = func_32(*uParam0);
			func_114(iVar0, iVar1);
			if (!func_3(0x00000000))
			{
				func_113(*uParam0);
			}
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
			func_63(uParam0, iVar1, 0x00000000);
			if (uParam0->f_1.f_1E[iVar11] != 0x0000000D)
			{
				func_2(*uParam0, uParam0->f_1.f_1E[iVar11], 0x00000001);
			}
			iVar12 = 0x00000000;
			while (iVar12 < uParam0->f_1.f_60)
			{
				func_62(uParam0, iVar12);
				if (iVar12 < Global_17235[iVar1 /*19*/])
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
					unk_0x3CAEA85DA607305E(iVar12);
					unk_0x1200CC973A2399C8(0x00000001);
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
					unk_0x3CAEA85DA607305E(iVar12);
					unk_0x1200CC973A2399C8(0x00000000);
					unk_0x7E60D21B163E9D56();
				}
				iVar12++;
			}
			if (*uParam0 != 0x00000001)
			{
				func_86(0x00000005, *uParam0, 0x00000001);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000A);
				uParam0->f_1C2++;
			}
			unk_0xA37A90C62806D848(0x00000000);
			uParam0->f_2A8 = 0x00000000;
		}
	}
	if (uParam0->f_2A9 != 0x00000000)
	{
		if (unk_0xC95D7AEEDEF4946B(uParam0->f_2A9))
		{
			iVar13 = unk_0xA52833FE33F41C53(uParam0->f_2A9);
			iVar0 = func_32(*uParam0);
			iVar1 = func_66(iVar0);
			Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = uParam0->f_1A2[iVar13];
			iVar14 = Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "UPDATE_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_1C2);
			unk_0x3CAEA85DA607305E(iVar13);
			unk_0x3CAEA85DA607305E(iVar14);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
			unk_0x3CAEA85DA607305E(0x00000063);
			unk_0x7E60D21B163E9D56();
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", 0x00000001);
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000011);
			func_112(uParam0, iVar14);
			uParam0->f_1C2++;
			uParam0->f_1A1 = uParam0->f_1C2;
			uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
			uParam0->f_1C9 = uParam0->f_1C8;
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000A);
			if (!func_14(&(uParam0->f_1.f_6C[0x00000000 /*4*/])) && !func_14(&(uParam0->f_1.f_6C[0x00000001 /*4*/])))
			{
				unk_0xA37A90C62806D848(0x00000000);
			}
			uParam0->f_2A9 = 0x00000000;
		}
	}
	if (uParam0->f_2AA != 0x00000000)
	{
		if (unk_0xC95D7AEEDEF4946B(uParam0->f_2AA))
		{
			iVar15 = unk_0xA52833FE33F41C53(uParam0->f_2AA);
			if (iVar15 != 0xFFFFFFFF)
			{
				iVar16 = uParam0->f_1A2[iVar15];
				if (iVar16 != uParam0->f_1AB)
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", 0x00000001);
				}
				uParam0->f_1AB = iVar16;
			}
			uParam0->f_2AA = 0x00000000;
		}
	}
	if (uParam0->f_1AB != 0x00000000)
	{
		func_111(uParam0, uParam0->f_1AB);
	}
}

void func_111(var uParam0, int iParam1)
{
	if (!func_21())
	{
		if (uParam0->f_1E3 == 0x00000000)
		{
			switch (iParam1)
			{
				case 0x0000000A:
					if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_77, 0x0000000E))
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_130[0x0000000E /*2*/]), ""))
						{
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000A);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000011);
							func_26(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[0x0000000E /*2*/], 0x00000001);
							unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 0x0000000E);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000C);
							return;
						}
					}
					break;
				
				case 0x0000000D:
					if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_77, 0x00000010))
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_130[0x00000010 /*2*/]), ""))
						{
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000A);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000011);
							func_26(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[0x00000010 /*2*/], 0x00000001);
							unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 0x00000010);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000C);
							return;
						}
					}
					break;
				
				case 0x0000000C:
					if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_77, 0x0000000F))
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_130[0x0000000F /*2*/]), ""))
						{
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000A);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000011);
							func_26(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[0x0000000F /*2*/], 0x00000001);
							unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 0x0000000F);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000C);
							return;
						}
					}
					break;
				
				case 0x0000000B:
					if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_77, 0x00000011))
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_130[0x00000011 /*2*/]), ""))
						{
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000A);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000011);
							func_26(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[0x00000011 /*2*/], 0x00000001);
							unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 0x00000011);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000C);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_112(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1CF, iParam1))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_77, iParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_130[iParam1 /*2*/]), ""))
			{
				func_26(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[iParam1 /*2*/], 0x00000001);
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_77), iParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 0x00000002:
					switch (iParam1)
					{
						case 0x00000001:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000000))
							{
								func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000012 /*2*/], 0x00000001);
							}
							break;
						
						case 0x0000000A:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000001))
							{
								func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000012 /*2*/], 0x00000001);
							}
							break;
					}
					break;
				
				case 0x00000003:
					switch (iParam1)
					{
						case 0x0000000C:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000003))
							{
								func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000018 /*2*/], 0x00000001);
							}
							break;
						
						case 0x00000009:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000006))
							{
								func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x0000001A /*2*/], 0x00000001);
							}
							break;
						
						case 0x00000001:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000000))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000007))
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000015 /*2*/], 0x00000001);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000012 /*2*/], 0x00000001);
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000007))
							{
								func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000013 /*2*/], 0x00000001);
							}
							break;
						
						case 0x0000000A:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000001))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000008))
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000015 /*2*/], 0x00000001);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000012 /*2*/], 0x00000001);
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000008))
							{
								func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000013 /*2*/], 0x00000001);
							}
							break;
						
						case 0x00000006:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000004))
							{
								func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000012 /*2*/], 0x00000001);
							}
							break;
						
						case 0x00000007:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000002))
							{
								func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000012 /*2*/], 0x00000001);
							}
							break;
						
						case 0x00000008:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000005))
							{
								func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000012 /*2*/], 0x00000001);
							}
							break;
					}
					break;
				
				case 0x00000004:
					switch (iParam1)
					{
						case 0x0000000C:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x0000000F))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000003))
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000019 /*2*/], 0x00000001);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000018 /*2*/], 0x00000001);
								}
							}
							break;
						
						case 0x00000007:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000002))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x0000000E))
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x0000001E /*2*/], 0x00000001);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x0000001C /*2*/], 0x00000001);
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x0000000E))
							{
								func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x0000001D /*2*/], 0x00000001);
							}
							break;
						
						case 0x00000009:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000012))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000006))
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x0000001B /*2*/], 0x00000001);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x0000001A /*2*/], 0x00000001);
								}
							}
							break;
						
						case 0x00000004:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000011))
							{
								func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x0000001F /*2*/], 0x00000001);
							}
							break;
						
						case 0x00000005:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x0000000C))
							{
								func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x0000001F /*2*/], 0x00000001);
							}
							break;
						
						case 0x00000001:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x0000000A))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000000))
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000007))
									{
										func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000017 /*2*/], 0x00000001);
									}
									else
									{
										func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000016 /*2*/], 0x00000001);
									}
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000014 /*2*/], 0x00000001);
								}
							}
							break;
						
						case 0x0000000A:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x0000000B))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000001))
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000008))
									{
										func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000017 /*2*/], 0x00000001);
									}
									else
									{
										func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000016 /*2*/], 0x00000001);
									}
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000014 /*2*/], 0x00000001);
								}
							}
							break;
						
						case 0x00000003:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x0000000D))
							{
								func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000014 /*2*/], 0x00000001);
							}
							break;
						
						case 0x00000006:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000013))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000004))
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000016 /*2*/], 0x00000001);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000014 /*2*/], 0x00000001);
								}
							}
							break;
						
						case 0x00000008:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000010))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000005))
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000016 /*2*/], 0x00000001);
								}
								else
								{
									func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000014 /*2*/], 0x00000001);
								}
							}
							break;
						
						case 0x0000000D:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0x00000014))
							{
								func_26(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[0x00000014 /*2*/], 0x00000001);
							}
							break;
					}
					break;
				}
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_1CF), iParam1);
	}
}

void func_113(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = Global_1B416.f_2378.f_63.f_CD[0x00000007];
			if (iVar0 == 0x00000001)
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_jewel_stealth"), 0x00000001, 0x00000001);
			}
			else
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_jewel_stealth"), 0x00000000, 0x00000001);
			}
			break;
		
		case 0x00000001:
			iVar0 = Global_1B416.f_2378.f_63.f_CD[0x00000008];
			if (iVar0 == 0x00000003)
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_docks_sink_ship"), 0x00000001, 0x00000001);
			}
			else
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_docks_sink_ship"), 0x00000000, 0x00000001);
			}
			break;
		
		case 0x00000003:
			iVar0 = Global_1B416.f_2378.f_63.f_CD[0x0000000A];
			if (iVar0 == 0x00000006)
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_bureau_firecrew"), 0x00000001, 0x00000001);
			}
			else
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_bureau_firecrew"), 0x00000000, 0x00000001);
			}
			break;
		
		case 0x00000004:
			iVar0 = Global_1B416.f_2378.f_63.f_CD[0x0000000B];
			if (iVar0 == 0x00000008)
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_bigs_traffic"), 0x00000001, 0x00000001);
			}
			else
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_bigs_traffic"), 0x00000000, 0x00000001);
			}
			break;
	}
}

void func_114(int iParam0, int iParam1)
{
	if (iParam0 == 0x0000000D || iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (Global_1B416.f_2378.f_63.f_CD[iParam0] == iParam1)
	{
		return;
	}
	Global_1B416.f_2378.f_63.f_CD[iParam0] = iParam1;
}

void func_115(int iParam0, int iParam1)
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

void func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_117(iParam0);
	switch (iParam0)
	{
		case 0x00000000:
			iVar1 = Global_1B416.f_2378.f_63.f_CD[0x00000007];
			iVar0 = 0x00000000;
			while (iVar0 < Global_17235[iVar1 /*19*/])
			{
				switch (Global_1B416.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 0x00000001:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000000);
						break;
					
					case 0x0000000A:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000001);
						unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 0x0000000E);
						break;
					
					case 0x00000007:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000002);
						break;
					
					case 0x0000000C:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000003);
						unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 0x0000000F);
						break;
					
					case 0x00000006:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000004);
						break;
					
					case 0x00000008:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000005);
						break;
					
					case 0x00000009:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000006);
						break;
				}
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_77), Global_1B416.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 0x00000002:
			iVar1 = Global_1B416.f_2378.f_63.f_CD[0x00000009];
			iVar0 = 0x00000000;
			while (iVar0 < Global_17235[iVar1 /*19*/])
			{
				switch (Global_1B416.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 0x00000001:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000007);
						break;
					
					case 0x0000000A:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000008);
						unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 0x0000000E);
						break;
					
					case 0x0000000B:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000009);
						unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 0x00000011);
						break;
				}
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_77), Global_1B416.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 0x00000003:
			iVar1 = Global_1B416.f_2378.f_63.f_CD[0x0000000A];
			iVar0 = 0x00000000;
			while (iVar0 < Global_17235[iVar1 /*19*/])
			{
				switch (Global_1B416.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 0x00000001:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x0000000A);
						break;
					
					case 0x0000000A:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x0000000B);
						unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 0x0000000E);
						break;
					
					case 0x00000005:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x0000000C);
						break;
					
					case 0x00000003:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x0000000D);
						break;
					
					case 0x00000004:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000011);
						break;
					
					case 0x00000007:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x0000000E);
						break;
					
					case 0x0000000C:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x0000000F);
						unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 0x0000000F);
						break;
					
					case 0x00000006:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000013);
						break;
					
					case 0x00000008:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000010);
						break;
					
					case 0x00000009:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000012);
						break;
					
					case 0x0000000D:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0x00000014);
						unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 0x00000010);
						break;
				}
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_77), Global_1B416.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000000);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000001);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000002);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000003);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000004);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000005);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000006);
			break;
		
		case 0x00000002:
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000007);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000008);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000009);
			break;
		
		case 0x00000003:
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x0000000A);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x0000000B);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x0000000C);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x0000000D);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x0000000E);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x0000000F);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000010);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000011);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000012);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000013);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0x00000014);
			break;
	}
}

void func_118()
{
	Global_4CD7 = 0x00000000;
	func_119();
}

void func_119()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_120()
{
	unk_0xC2127C0F64D6A3B9();
	func_121();
}

void func_121()
{
	Global_56C3.f_86 = 0x00000001;
}

void func_122(var uParam0)
{
	vector3 vVar0;
	int iVar1;
	
	uParam0->f_1C5 = 0x00000000;
	uParam0->f_1CF = 0x00000000;
	unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000009);
	func_13(uParam0, 0x00000000);
	if (!unk_0x22A8E52414415B76())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (Global_A664 == 0x00000001)
			{
				func_127(unk_0x16F2683693E537C9());
			}
			vVar0 = { uParam0->f_191 };
			vVar0 = { vVar0 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_194))), (2.9f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			unk_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0x00000000, 0x00000000);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000086);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), uParam0->f_194);
			unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), 0x00000001);
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000007);
	}
	unk_0xBFE31971E49FA500(0x00000000);
	func_73(0x00000001);
	func_126();
	unk_0x56FCE5C6DA4AA600();
	unk_0x536F1BE96C726C4B(uParam0->f_191, 5f, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
	unk_0xD7AD2803AD9697F7(uParam0->f_191, 5f);
	unk_0x911B98CDC647AC76(0x00000001);
	unk_0xD02CE72B4B66DC29(0x00000052, 0x00000042);
	unk_0x744B56EE9DE7B57F(0x00000011, 0.612f, 0.818f);
	unk_0xD59EF13BB60323B9();
	func_125(&(uParam0->f_289), uParam0->f_195, uParam0->f_198, 45f, 0x00000012, 0x0000000D, 0x00000003, uParam0->f_1.f_9, 0x00000000, 0x00000000, 0xBF800000, 0x00000000);
	iVar1 = unk_0xFBD08BECC9B87937(uParam0->f_191);
	if (iVar1 != 0x00000000)
	{
		unk_0x0007C2367F4F23F3(iVar1);
	}
	unk_0xB8842F7C7761A196(&(Global_171E2[uParam0->f_1.f_1 /*15*/].f_7));
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x445BDC28669C33B9(unk_0xB1C09B89AED111A5(unk_0x16F2683693E537C9()));
	}
	func_124(0x00000000);
	func_123();
	unk_0x9CBC55A05A07FC47(0x00000000);
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(0x00000000);
		unk_0x7E60D21B163E9D56();
	}
	uParam0->f_1D2 = unk_0xE32F7AC5E6DF304A(0x00000002, 0x0000000A, 0x00000001);
	unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000002);
	Global_1721F = 0x00000001;
	func_8(uParam0, uParam0->f_1D0, 0x00000000);
}

void func_123()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		func_17(iVar0);
		iVar0++;
	}
	Global_1B416.f_4FB5.f_91 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		Global_1B416.f_4FB5.f_92[iVar0] = 0x00000000;
		iVar0++;
	}
	if (unk_0xFEBC1E4EC9E001F0())
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
}

void func_124(bool bParam0)
{
	if (!bParam0)
	{
		Global_1AEC8 = unk_0x1C0640BA9A7327B3() + 250;
	}
	Global_1AEC5 = bParam0;
}

void func_125(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, float fParam10, bool bParam11)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = fParam3;
	uParam0->f_12 = fParam3;
	uParam0->f_17 = iParam8;
	uParam0->f_13 = uParam7;
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

void func_126()
{
	Global_56C3.f_5 = 0x00000001;
}

void func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0x00000000)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	iVar0 = func_135(iParam0);
	if (!iVar0 == 0xFFFFFFFF)
	{
		iVar1 = Global_A58F[iVar0 /*5*/];
		func_130(0x00000001, iVar1, 0x00000001);
		return;
	}
	iVar2 = func_129(iParam0);
	if (iVar2 == 0xFFFFFFFF)
	{
		return;
	}
	func_128(iVar2);
}

void func_128(int iParam0)
{
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000005)
	{
		return;
	}
	if (!Global_A575[iParam0 /*5*/].f_1 == 0x00000000)
	{
		if (Global_A575[iParam0 /*5*/].f_1 == unk_0x16F2683693E537C9())
		{
			Global_A662 = 0x00000000;
		}
	}
	Global_A575[iParam0 /*5*/] = 0x0000000D;
	Global_A575[iParam0 /*5*/].f_1 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_2 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_3 = 0x00000000;
	Global_A575[iParam0 /*5*/].f_4 = 0x00000000;
	Global_A573 = (Global_A573 - 0x00000001);
	if (Global_A573 < 0x00000000)
	{
		Global_A573 = 0x00000000;
	}
}

int func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_A575[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_130(int iParam0, int iParam1, int iParam2)
{
	func_131(iParam0, iParam1, iParam2, 0x00000000, 0x00000000, 0x00000001);
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam2 == 0x00000006)
	{
		return;
	}
	if (func_133(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_132();
	if (iVar0 == 0xFFFFFFFF)
	{
		return;
	}
	Global_A5E0[iVar0 /*6*/] = iParam0;
	Global_A5E0[iVar0 /*6*/].f_1 = iParam1;
	Global_A5E0[iVar0 /*6*/].f_2 = iParam2;
	Global_A5E0[iVar0 /*6*/].f_3 = iParam3;
	Global_A5E0[iVar0 /*6*/].f_4 = iParam4;
	Global_A5E0[iVar0 /*6*/].f_5 = iParam5;
}

int func_132()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_A5E0[iVar0 /*6*/].f_2 == 0x00000006)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_133(int iParam0, int iParam1, int iParam2)
{
	if (func_134(iParam0, iParam1, iParam2) == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (iParam2 == Global_A5E0[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_A5E0[iVar0 /*6*/])
			{
				if (iParam1 == Global_A5E0[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_135(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (!Global_A58F[iVar0 /*5*/] == 0xFFFFFFFF)
		{
			if (iParam0 == Global_A58F[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_136(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = func_137(*uParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		*uParam0 = 0xFFFFFFFF;
		return;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000001;
			*uParam0 = 0xFFFFFFFF;
			return;
		}
	}
	*uParam0 = 0xFFFFFFFF;
}

int func_137(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_138(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_137(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0x00000000;
	}
	if (func_149(0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/] == 0x00000001 && Global_A4A7[iVar0 /*32*/].f_4 == 0x00000001)
		{
			if (bParam1)
			{
				if (Global_A4A7[iVar0 /*32*/].f_1D)
				{
					return 0x00000000;
				}
			}
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000001;
			return 0x00000001;
		}
		else
		{
			if (Global_A4A7[iVar0 /*32*/] == 0x00000000)
			{
			}
			if (Global_A4A7[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0x00000000;
}

void func_139(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 0x00000001)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == 0xFFFFFFFF)
		{
			func_136(uParam0);
		}
		return;
	}
	if (!*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (!Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/] = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1 = Global_A570;
			Global_A570++;
			Global_A4A7[iVar0 /*32*/].f_4 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_A4A7[iVar0 /*32*/].f_8), sParam2, 16);
			Global_A4A7[iVar0 /*32*/].f_6 = iParam3;
			Global_A4A7[iVar0 /*32*/].f_1F = unk_0x0D0A574C76D769AC();
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000001;
				StringCopy(&(Global_A4A7[iVar0 /*32*/].f_D), sParam4, 64);
				Global_A4A7[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000000;
				Global_A4A7[iVar0 /*32*/].f_1E = 0x00000000;
			}
			*uParam0 = Global_A4A7[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_140(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_100();
				if (!func_102(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_148()) || Global_1B05D) || Global_7832) || func_147()) || func_107(0x00000008, 0xFFFFFFFF)) || func_146()) || func_145()) || func_144()) || func_143()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_148()) || Global_7832) || func_147()) || func_107(0x00000008, 0xFFFFFFFF)) || func_144()) || func_146()) || func_145()) || func_143()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_148()) || Global_1B05D) || Global_7832) || func_147()) || func_107(0x00000008, 0xFFFFFFFF)) || func_144()) || func_146()) || func_145()) || func_143()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_148()) || Global_1B05D) || Global_7832) || func_147()) || func_107(0x00000008, 0xFFFFFFFF)) || func_146()) || func_145()) || func_143()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_148() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_107(0x00000008, 0xFFFFFFFF)) || func_143()) || func_142()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_107(0x00000008, 0xFFFFFFFF) || func_146()) || func_145()) || func_142()) || func_141())
						{
							return 0x00000000;
						}
						if ((unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 0x00000003) && unk_0x00A15D69BCAA5267() < 0x00000008)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000006:
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
						{
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_148()) || Global_7832) || func_147()) || func_107(0x00000008, 0xFFFFFFFF)) || func_145()) || func_144()) || func_143()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_148()) || func_145()) || Global_1B05D) || Global_7832) || func_147()) || Global_A664) || func_107(0x00000008, 0xFFFFFFFF)) || func_144()) || func_142()) || func_143()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_148()) || Global_1B05D) || Global_7832) || func_147()) || func_107(0x00000008, 0xFFFFFFFF)) || func_144()) || func_142()) || func_146()) || func_145()) || func_143())
						{
							return 0x00000000;
						}
						break;
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
	else
	{
		return 0x00000000;
	}
	return 0x00000001;
}

var func_141()
{
	return Global_181DF.f_1;
}

int func_142()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_143()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_144()
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

bool func_145()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_146()
{
	return Global_181EC.f_159 > 0x00000000;
}

var func_147()
{
	return Global_14086D;
}

int func_148()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_149(int iParam0)
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

bool func_150(int iParam0)
{
	return func_151(iParam0, Global_A1D7);
}

int func_151(int iParam0, int iParam1)
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

int func_152(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000001))
	{
		func_154(uParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000000))
	{
		func_153(uParam0);
	}
	return 0x00000001;
}

void func_153(var uParam0)
{
	unk_0x42740B44BA8D7B43("HEIST_BULLETIN_BOARD");
	unk_0x71199B01895C6202(joaat("prop_ld_planning_pin_01"));
	unk_0x71199B01895C6202(joaat("prop_ld_planning_pin_02"));
	unk_0x71199B01895C6202(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_19D != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_19D));
	}
	if (uParam0->f_19E != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_19E));
	}
	unk_0x11CCD0ACA866C6C5(0x00000005, 0x00000000);
	unk_0x0674E58A79778E99(&Global_17222, *uParam0);
	unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000000);
}

void func_154(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000001))
	{
		if (!unk_0x22A8E52414415B76())
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000002))
			{
				func_70(uParam0, 0x00000000);
			}
		}
		func_155(uParam0);
		unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000001);
		unk_0x0674E58A79778E99(&Global_17221, *uParam0);
	}
}

void func_155(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_1.f_21)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_1AC[iVar0]))
		{
			unk_0xF690C84DADBB3551(&(uParam0->f_1AC[iVar0]));
		}
		iVar0++;
	}
}

void func_156()
{
	int iVar0;
	int iVar1;
	
	if (func_330(0x00000007))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000007))
		{
			unk_0xAE1670DD12E839C3("AH_2_EXT_P4", 0x00000008);
			unk_0x92DCE5C81176D2B4("lesterHandler");
			unk_0x523BCC9DC80CD82F(0x5293CC8D);
			unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000007);
		}
		else if (unk_0x75EECC9B0572F772())
		{
			unk_0xA2888AACD3C45CCA("LESTER", 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		}
	}
	if (func_330(0x00000008))
	{
		if (func_330(0x00000007))
		{
			if ((unk_0xA0F4292EA950943D("AH_2_EXT_P4") && unk_0x1FBF08B001C4788A("lesterHandler")) && unk_0xB87F6CF6E5628C67(0x5293CC8D))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (!func_3(0x00000000) || func_100() == 0x00000000)
					{
						unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, joaat("player_zero"), 0x00000000);
					}
					else
					{
						unk_0x29E8331978B73E7F(iLocal_49[0x00000000], "MICHAEL", 0x00000002, joaat("player_zero"), 0x00000000);
						unk_0x5D96D8530B3D0904(&iLocal_41, 0x0000000C);
					}
				}
				if (func_3(0x00000000))
				{
					if (unk_0xC844350D5D58C99A(iLocal_45))
					{
						unk_0x29E8331978B73E7F(iLocal_45, "FRANKLIN", 0x00000001, joaat("player_one"), 0x00000000);
					}
				}
				unk_0x29E8331978B73E7F(iLocal_46, "LESTER", 0x00000002, joaat("ig_lestercrest"), 0x00000000);
				unk_0x5D96D8530B3D0904(&iLocal_41, 0x0000000A);
				func_288(0x00000000);
				func_124(0x00000001);
				func_280(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				func_73(0x00000001);
				iVar0 = 0x00000000;
				while (iVar0 < func_279(0x00000003))
				{
					if (func_277(0x00000003, iVar0) == 0x0000000C)
					{
						func_263(0x183ED81F);
					}
					iVar0++;
				}
				unk_0x4C902758BEA97C68(0x00000100);
				if (func_3(0x00000000))
				{
					unk_0xFCA2A436FD40C153(0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
				func_115(0x00000007, 0x00000000);
				iLocal_44 = unk_0x1C0640BA9A7327B3();
			}
		}
		else if (unk_0x22A8E52414415B76())
		{
			func_120();
			if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000005))
			{
				if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("MICHAEL", joaat("player_zero"))))
				{
					unk_0x4A4806F9D471E491(unk_0x6450C2A9FBA3C3BF("MICHAEL", joaat("player_zero")), 0x00000001, 0x00000000);
				}
				unk_0x0674E58A79778E99(&iLocal_41, 0x00000005);
			}
			if (func_100() != 0x00000000)
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x0000000C))
				{
					if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("MICHAEL", joaat("player_zero"))))
					{
						iLocal_49[0x00000000] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("MICHAEL", joaat("player_zero")));
						unk_0x0674E58A79778E99(&iLocal_41, 0x0000000C);
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x0000000A))
			{
				if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("LESTER", joaat("ig_lestercrest"))))
				{
					iLocal_46 = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("LESTER", joaat("ig_lestercrest")));
					unk_0x0674E58A79778E99(&iLocal_41, 0x0000000A);
				}
			}
			if (unk_0x3148AE92ED70DC30("MICHAEL", 0x00000000))
			{
				if (func_100() != 0x00000000)
				{
					iLocal_45 = unk_0x16F2683693E537C9();
					func_258(&iLocal_49, 0x00000000);
					func_196(&iLocal_49, 0x00000001, 0x00000000, 0x00000000);
					unk_0x71199B01895C6202(joaat("player_zero"));
				}
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0xD827C3DB, 0x00000000, 0x00000001, 0x00000000);
					unk_0xDEAC6BC509D10068(unk_0x16F2683693E537C9(), 1f);
					if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004)
					{
						unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 1f, 0x000007D0, 0x00000000, 0x00000001, 0x00000000);
					}
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000D0, 0x00000000);
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000076, 0x00000001);
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000D5, 0x00000001);
					unk_0x11AD11297DC58CC7(unk_0x16F2683693E537C9(), 0x00000000);
					iLocal_43 = unk_0x1C0640BA9A7327B3();
				}
			}
			unk_0xDEAC6BC509D10068(unk_0x16F2683693E537C9(), 1f);
			if (unk_0x3148AE92ED70DC30("LESTER", joaat("ig_lestercrest")))
			{
				if (!unk_0x437347B10A200C4B(iLocal_46, 0x00000000))
				{
					iVar1 = iLocal_46;
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS("lesterHandler", &iVar1, 0x00000001, 0x00000590);
					unk_0x5E8C29AE121DF1C7("lesterHandler");
				}
			}
			if (unk_0xEABED1927EFB48CA(0x00000000))
			{
				func_288(0x00000001);
			}
		}
		else
		{
			if (func_3(0x00000000))
			{
				if (unk_0xC844350D5D58C99A(iLocal_45))
				{
					unk_0xEBA53F35D0085654(&iLocal_45);
				}
				if (unk_0xC844350D5D58C99A(iLocal_46))
				{
					unk_0xEBA53F35D0085654(&iLocal_46);
				}
				unk_0x53491B90E4FD0E56(0x00000000);
			}
			else
			{
				Global_F048 = 0x00000000;
				Global_181DF = 0x00000000;
				func_195();
			}
			func_280(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			func_73(0x00000000);
			func_194(0x00004E20);
			func_192(&(Global_1B416.f_936.f_21B), 0x00000043);
			func_164(&(Global_1B416.f_936.f_21B), 0x00000043);
			unk_0x71199B01895C6202(0x5293CC8D);
			func_163(&iLocal_42);
			unk_0x0674E58A79778E99(&iLocal_41, 0x00000002);
			unk_0xDEAC6BC509D10068(unk_0x16F2683693E537C9(), 1f);
			if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004)
			{
				unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0xD827C3DB, 0x00000000, 0x00000000, 0x00000000);
				unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 1f, 0x000007D0, 0x00000000, 0x00000001, 0x00000000);
			}
			unk_0x2952D66A502EA873(iLocal_89, 0x00000000);
			if (iLocal_90 != 0xFFFFFFFF)
			{
				if (unk_0x49083FDB78AC0509(iLocal_90))
				{
					unk_0xDDABC98CFF1A4C60(iLocal_90);
				}
			}
			unk_0xEFED0CD6E25037B9();
			unk_0x17E8C6920A1E386F(Local_91.f_1.f_18A - Local_91.f_1.f_18D, Local_91.f_1.f_18A + Local_91.f_1.f_18D, 0x00000001, 0x00000000);
			unk_0x34D79252800B23FF(0x00000005);
			func_157(0x00000003, 0x00000000);
			func_115(0x00000008, 0x00000000);
		}
	}
	else if (!func_330(0x00000007))
	{
		if (unk_0xA0F4292EA950943D("AH_2_EXT_P4"))
		{
			unk_0x5C8D148FC238F38A();
		}
	}
	if (iLocal_43 != 0xFFFFFFFF)
	{
		if ((unk_0x1C0640BA9A7327B3() - iLocal_43) > 0x000007D0)
		{
			unk_0xDEAC6BC509D10068(unk_0x16F2683693E537C9(), 1f);
			iLocal_43 = 0xFFFFFFFF;
		}
	}
}

void func_157(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000E)
	{
		iVar1 = iVar0;
		if (func_40(iVar1) || func_39(iVar1))
		{
			if (!(iVar1 == 0x0000000B && iParam0 == 0x00000003))
			{
				switch (iVar1)
				{
					case 0x00000001:
						func_160(0x00000004, 0x00000001);
						break;
					
					case 0x00000004:
						func_160(0x00000008, 0x00000001);
						break;
					
					case 0x00000006:
						func_160(0x0000000A, 0x00000001);
						break;
					
					case 0x00000007:
						func_160(0x00000001, 0x00000001);
						break;
					
					case 0x00000008:
						func_160(0x00000003, 0x00000001);
						break;
					
					case 0x00000009:
						func_160(0x00000006, 0x00000001);
						break;
					
					case 0x0000000A:
						func_160(0x00000009, 0x00000001);
						break;
					
					case 0x0000000C:
						func_160(0x0000000B, 0x00000001);
						break;
					
					case 0x0000000D:
						func_160(0x0000000C, 0x00000001);
						break;
					
					case 0x0000000B:
						if (func_326(0x0000005B))
						{
							func_160(0x00000000, 0x00000001);
						}
						break;
					
					case 0x00000005:
						if (func_326(0x0000005B))
						{
							func_160(0x00000002, 0x00000001);
						}
						break;
					
					case 0x00000003:
						if (func_326(0x00000043))
						{
							func_160(0x00000005, 0x00000001);
						}
						break;
					
					case 0x00000002:
						if (func_326(0x0000004D))
						{
							func_160(0x00000007, 0x00000001);
						}
						break;
					}
				}
		}
		iVar0++;
	}
	if (!func_40(0x0000000A) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[0x00000004], 0x00000000))
	{
		func_160(0x00000009, 0x00000001);
	}
	if (!func_40(0x0000000D) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[0x00000010], 0x00000000))
	{
		func_160(0x0000000C, 0x00000001);
	}
	if (!func_40(0x0000000C))
	{
		if (iParam0 == 0x00000004)
		{
			func_160(0x0000000B, 0x00000001);
		}
	}
	if (!bParam1)
	{
		if (!func_159(0x00000045))
		{
			func_23("DI_HLP_HST", 0x00000002, 0x00000000, 0x00004E20, 0x00002710, 0x00000007, 0x00000000, 0x000000D1, 0x00000000);
		}
		func_158("DI_FEED_HST");
	}
}

void func_158(char* sParam0)
{
	unk_0x1E64CE678ED5F61E("");
	unk_0x49E52B24E5A757B3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0x00000000, 0x00000000, "DI_FEED_CHAR", sParam0);
}

int func_159(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0x00000000;
	while (iVar0 > 0x0000001F)
	{
		iVar0 = (iVar0 - 0x00000020);
		iVar1++;
	}
	if (iVar1 < 0x00000003)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5.f_96[iVar1], iVar0);
	}
	return 0x00000000;
}

void func_160(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0x00000000 && iVar0 <= 0x0000001F)
	{
		if (!func_162(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_673D.f_1), iVar0);
			if (!bParam1)
			{
				func_158(func_161(iParam0));
			}
		}
	}
}

char* func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "CM_HSTCHE";
			break;
		
		case 0x00000001:
			return "CM_HSTCHR";
			break;
		
		case 0x00000002:
			return "CM_HSTDAR";
			break;
		
		case 0x00000003:
			return "CM_HSTEDD";
			break;
		
		case 0x00000004:
			return "CM_HSTGUS";
			break;
		
		case 0x00000005:
			return "CM_HSTHUG";
			break;
		
		case 0x00000006:
			return "CM_HSTKRM";
			break;
		
		case 0x00000007:
			return "CM_HSTKAR";
			break;
		
		case 0x00000008:
			return "CM_HSTNOR";
			break;
		
		case 0x00000009:
			return "CM_HSTPAC";
			break;
		
		case 0x0000000A:
			return "CM_HSTPAI";
			break;
		
		case 0x0000000B:
			return "CM_HSTRIC";
			break;
		
		case 0x0000000C:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_162(int iParam0)
{
	if (iParam0 != 0xFFFFFFFF && iParam0 != 0x0000000D)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_673D.f_1, iParam0);
	}
	return 0x00000000;
}

void func_163(int iParam0)
{
	if (*iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!*iParam0 == Global_A1B1)
	{
		*iParam0 = 0xFFFFFFFF;
		return;
	}
	*iParam0 = 0xFFFFFFFF;
	Global_A1B0 = 0x00000000;
	Global_A1B2 = 0x00000000;
	Global_A1D7 = 0x0000000F;
	Global_F045 = 0x00000000;
	Global_F046 = 0x00000000;
}

void func_164(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000011:
			func_165(uParam0, 0x00000000, 0x0000000C);
			break;
		
		case 0x00000013:
			func_165(uParam0, 0x00000001, 0x0000000D);
			break;
		
		case 0x0000001D:
			func_165(uParam0, 0x00000001, 0x0000000E);
			break;
		
		case 0x0000001E:
			func_165(uParam0, 0x00000002, 0x0000000F);
			func_165(uParam0, 0x00000001, 0x0000001D);
			break;
		
		case 0x00000020:
			func_165(uParam0, 0x00000001, 0x00000010);
			func_165(uParam0, 0x00000000, 0x00000011);
			break;
		
		case 0x00000027:
			func_165(uParam0, 0x00000000, 0x00000015);
			func_165(uParam0, 0x00000001, 0x00000014);
			break;
		
		case 0x0000001F:
			func_165(uParam0, 0x00000000, 0x00000012);
			break;
		
		case 0x00000014:
			func_165(uParam0, 0x00000002, 0x00000016);
			break;
		
		case 0x00000042:
			func_165(uParam0, 0x00000001, 0x00000017);
			break;
		
		case 0x00000044:
			func_165(uParam0, 0x00000001, 0x00000018);
			break;
		
		case 0x00000046:
			func_165(uParam0, 0x00000001, 0x00000043);
			break;
		
		case 0x00000008:
			func_165(uParam0, 0x00000001, 0x00000019);
			func_165(uParam0, 0x00000002, 0x0000001A);
			break;
		
		case 0x00000043:
			func_165(uParam0, 0x00000001, 0x0000001B);
			break;
		
		case 0x00000009:
			func_165(uParam0, 0x00000002, 0x0000001C);
			break;
		
		case 0x00000026:
			func_165(uParam0, 0x00000002, 0x0000001E);
			func_165(uParam0, 0x00000001, 0x00000013);
			break;
		
		case 0x00000053:
			func_165(uParam0, 0x00000002, 0x00000021);
			break;
		
		case 0x0000002D:
			func_165(uParam0, 0x00000001, 0x00000023);
			break;
		
		case 0x00000040:
			func_165(uParam0, 0x00000000, 0x00000024);
			func_165(uParam0, 0x00000001, 0x00000025);
			break;
		
		case 0x0000005B:
			func_165(uParam0, 0x00000000, 0x00000029);
			break;
		
		case 0x0000002A:
			func_165(uParam0, 0x00000000, 0x0000003A);
			Global_17F64[0x00000000 /*98*/] = 0x00000000;
			func_165(uParam0, 0x00000002, 0x0000003B);
			Global_17F64[0x00000002 /*98*/] = 0x00000000;
			break;
		
		case 0x00000029:
			func_165(uParam0, 0x00000001, 0x0000002A);
			func_165(uParam0, 0x00000002, 0x0000002A);
			break;
		
		case 0x0000000F:
			func_165(uParam0, 0x00000000, 0x0000002E);
			func_165(uParam0, 0x00000001, 0x0000002F);
			break;
		
		case 0x00000010:
			func_165(uParam0, 0x00000000, 0x00000030);
			break;
		
		case 0x00000030:
			func_165(uParam0, 0x00000001, 0x00000032);
			func_165(uParam0, 0x00000002, 0x00000033);
			break;
		
		case 0x0000004A:
			func_165(uParam0, 0x00000000, 0x00000034);
			func_165(uParam0, 0x00000001, 0x00000042);
			break;
		
		case 0x0000004C:
			func_165(uParam0, 0x00000001, 0x00000035);
			func_165(uParam0, 0x00000002, 0x00000036);
			func_165(uParam0, 0x00000000, 0x0000003E);
			break;
		
		case 0x0000004B:
			func_165(uParam0, 0x00000000, 0x0000003D);
			func_165(uParam0, 0x00000001, 0x0000001F);
			break;
		
		case 0x00000045:
			func_165(uParam0, 0x00000001, 0x0000003F);
			break;
		
		case 0x00000054:
			func_165(uParam0, 0x00000000, 0x00000044);
			func_165(uParam0, 0x00000002, 0x00000045);
			break;
		
		case 0x00000055:
			func_165(uParam0, 0x00000000, 0x00000040);
			func_165(uParam0, 0x00000002, 0x00000041);
			break;
		
		case 0x0000005D:
			func_165(uParam0, 0x00000001, 0x00000026);
			func_165(uParam0, 0x00000002, 0x00000027);
			break;
		
		case 0x0000000B:
			func_165(uParam0, 0x00000002, 0x00000037);
			break;
		
		case 0x0000004D:
			func_165(uParam0, 0x00000001, 0x00000038);
			func_165(uParam0, 0x00000002, 0x00000039);
			break;
		
		default:
			break;
	}
}

int func_165(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[0x00000000], 0x00000009))
	{
		iVar0 = Global_1B416.f_4860[iParam1];
		if (iVar0 == 0x0000000B)
		{
			return 0x00000000;
		}
		if ((iVar0 == 0x00000008 || iVar0 == 0x00000009) || iVar0 == 0x0000000A)
		{
			return 0x00000000;
		}
	}
	Global_1B416.f_4860[iParam1] = iParam2;
	uParam0->f_8F8[iParam1] = func_181();
	if (!func_180(iParam2, &(uParam0->f_8FC[iParam1 /*3*/]), &(uParam0->f_906[iParam1])))
	{
		return 0x00000000;
	}
	if (!func_179(uParam0->f_8FC[iParam1 /*3*/], 0f, 0f, 0f, 0x00000000))
	{
		if (!func_179(Global_17B9F[iParam2 /*3*/], 0f, 0f, 0f, 0x00000000))
		{
			Var1.f_B = 0x0000000C;
			Var1.f_1F = 0x00000031;
			Var1.f_51 = 0x00000002;
			if (func_166(iParam1, iParam2, &Var1, &uVar2, &uVar3, &uVar4, &uVar5))
			{
				Global_17F64[iParam1 /*98*/] = { Var1 };
			}
		}
	}
	uParam0->f_90A[iParam1] = 0x00000000;
	uParam0->f_90E[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_918[iParam1] = 0x00000000;
	return 0x00000001;
}

int func_166(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uParam2->f_3 = 0x000003E8;
	uParam2->f_1 = 0x00000000;
	uParam2->f_54 = 0x000000FF;
	uParam2->f_55 = 0x000000FF;
	uParam2->f_56 = 0x000000FF;
	switch (iParam1)
	{
		case 0x00000005:
			*uParam2 = { Global_17F64[iParam0 /*98*/] };
			if (Global_1808B[iParam0] != 0x00000002)
			{
				if (unk_0x0399732A9EBC368E(Global_18093[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0x00000000, 0x00000001))
				{
					if (Global_1808B[iParam0] == 0x00000001)
					{
						*uParam3 = { Global_18093[iParam0 /*3*/] - Global_1B416.f_936.f_21B.f_8FC[iParam0 /*3*/] };
						*uParam4 = (Global_1809D[iParam0] - Global_1B416.f_936.f_21B.f_906[iParam0]);
						if (SYSTEM::VMAG2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0x00000000;
						}
					}
				}
				*uParam3 = { Global_18093[iParam0 /*3*/] - Global_1B416.f_936.f_21B.f_8FC[iParam0 /*3*/] };
				*uParam4 = (Global_1809D[iParam0] - Global_1B416.f_936.f_21B.f_906[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 0x00000001;
			break;
		
		case 0x00000006:
			*uParam2 = { Global_17F64[iParam0 /*98*/] };
			if (Global_1808B[iParam0] != 0x00000002)
			{
				*uParam3 = { Global_18093[iParam0 /*3*/] - Global_1B416.f_936.f_21B.f_8FC[iParam0 /*3*/] };
				*uParam4 = (Global_1809D[iParam0] - Global_1B416.f_936.f_21B.f_906[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 0x00000001;
			break;
		
		case 0x00000007:
			*uParam2 = { Global_17F64[iParam0 /*98*/] };
			if (Global_1808B[iParam0] != 0x00000002)
			{
				*uParam3 = { Global_18093[iParam0 /*3*/] - Global_1B416.f_936.f_21B.f_8FC[iParam0 /*3*/] };
				*uParam4 = (Global_1809D[iParam0] - Global_1B416.f_936.f_21B.f_906[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 0x00000001;
			break;
		
		case 0x0000000B:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 0x00000001;
			break;
		
		case 0x00000008:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 0x00000001;
			break;
		
		case 0x00000009:
			return func_166(iParam0, 0x00000008, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x0000000A:
			return func_166(iParam0, 0x00000008, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x0000000D:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 0x00000001;
			break;
		
		case 0x0000000E:
			func_168(iParam0, uParam2, 0x00000002);
			uParam2->f_5B = 0x00000001;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 0x00000001;
			break;
		
		case 0x0000000F:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 0x00000022;
			uParam2->f_6 = 0x00000022;
			uParam2->f_7 = 0x00000000;
			uParam2->f_8 = 0x00000000;
			uParam2->f_9 = 0x00000000;
			uParam2->f_B[0x00000000] = 0x00000001;
			uParam2->f_B[0x00000001] = 0x00000001;
			uParam2->f_B[0x00000002] = 0x00000001;
			uParam2->f_B[0x00000003] = 0x00000001;
			uParam2->f_B[0x00000004] = 0x00000001;
			uParam2->f_B[0x00000005] = 0x00000001;
			uParam2->f_B[0x00000006] = 0x00000001;
			uParam2->f_B[0x00000007] = 0x00000001;
			uParam2->f_B[0x00000008] = 0x00000001;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x00000037:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 0x00000001;
			break;
		
		case 0x00000038:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 0x00000001;
			break;
		
		case 0x00000039:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 0x00000001;
			break;
		
		case 0x0000000C:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0x00000000;
			uParam2->f_9 = 0x00000001;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 0x00000001;
			break;
		
		case 0x00000010:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 0x00000001;
			break;
		
		case 0x00000011:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x00000012:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 0x00000001;
			break;
		
		case 0x00000013:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 0x00000001;
			break;
		
		case 0x00000014:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 0x00000001;
			break;
		
		case 0x00000017:
			return func_166(iParam0, 0x000000D0, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x00000018:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 0x00000001;
			break;
		
		case 0x00000043:
			func_168(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 0x00000001;
			break;
		
		case 0x0000003A:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x0000003B:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x0000003C:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x00000016:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 0x00000001;
			break;
		
		case 0x0000004A:
			func_168(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000002;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 0x00000001;
			break;
		
		case 0x00000026:
			func_168(iParam0, uParam2, 0x00000002);
			uParam2->f_5B = 0x00000002;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x00000029:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 0x00000001;
			break;
		
		case 0x00000019:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 0x00000001;
			break;
		
		case 0x0000001B:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 0x00000001;
			break;
		
		case 0x0000001A:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 0x00000001;
			break;
		
		case 0x00000028:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 0x00000001;
			break;
		
		case 0x0000001C:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("polmav");
			uParam2->f_B[0x00000000] = 0x00000001;
			uParam2->f_B[0x00000001] = 0x00000001;
			uParam2->f_B[0x00000002] = 0x00000001;
			uParam2->f_B[0x00000003] = 0x00000001;
			uParam2->f_B[0x00000004] = 0x00000001;
			uParam2->f_B[0x00000005] = 0x00000001;
			uParam2->f_B[0x00000006] = 0x00000001;
			uParam2->f_B[0x00000007] = 0x00000001;
			uParam2->f_B[0x00000008] = 0x00000001;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 0x00000001;
			break;
		
		case 0x000000EA:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 0x00000001;
			break;
		
		case 0x0000004B:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x0000004C:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x0000002A:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 0x00000001;
			break;
		
		case 0x0000002B:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 0x00000001;
			break;
		
		case 0x0000002C:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 0x00000001;
			break;
		
		case 0x0000002D:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 0x00000001;
			break;
		
		case 0x0000002F:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0x00000000;
			uParam2->f_6 = 0x00000000;
			uParam2->f_7 = 0x00000000;
			uParam2->f_8 = 0x00000000;
			uParam2->f_9 = 0x00000000;
			StringCopy(&(uParam2->f_1B), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x00000031:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x00000030:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 0x00000001;
			break;
		
		case 0x00000032:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x00000033:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 0x00000001;
			break;
		
		case 0x00000034:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 0x00000001;
			break;
		
		case 0x00000042:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 0x00000001;
			break;
		
		case 0x0000003D:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 0x00000001;
			break;
		
		case 0x0000003E:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 0x00000001;
			break;
		
		case 0x0000003F:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 0x00000001;
			break;
		
		case 0x00000040:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x00000045:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 0x00000001;
			break;
		
		case 0x00000041:
		case 0x00000036:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 0x00000028;
			uParam2->f_6 = 0x00000000;
			uParam2->f_7 = 0x00000000;
			uParam2->f_8 = 0x00000000;
			uParam2->f_9 = 0x00000000;
			uParam2->f_B[0x00000000] = 0x00000001;
			uParam2->f_B[0x00000001] = 0x00000001;
			uParam2->f_B[0x00000002] = 0x00000001;
			uParam2->f_B[0x00000003] = 0x00000001;
			uParam2->f_B[0x00000004] = 0x00000001;
			uParam2->f_B[0x00000005] = 0x00000001;
			uParam2->f_B[0x00000006] = 0x00000001;
			uParam2->f_B[0x00000007] = 0x00000001;
			uParam2->f_B[0x00000008] = 0x00000001;
			uParam2->f_59 = 0x00000001;
			if (iParam1 == 0x00000036)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 0x00000041)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return 0x00000001;
			break;
		
		case 0x00000070:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 0x00000001;
			break;
		
		case 0x00000071:
			if (func_166(iParam0, 0x00000070, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 0x00000001;
			}
			break;
		
		case 0x00000076:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0x00000000;
			uParam2->f_9 = 0x00000001;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return 0x00000001;
			break;
		
		case 0x00000077:
			if (func_166(iParam0, 0x00000076, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 0x00000001;
			}
			break;
		
		case 0x00000078:
			if (func_166(iParam0, 0x00000076, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 0x00000001;
			}
			break;
		
		case 0x000000AD:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 0x00000001;
			break;
		
		case 0x00000072:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 0x00000001;
			break;
		
		case 0x00000069:
			func_168(iParam0, uParam2, 0x00000001);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 0x00000001;
			break;
		
		case 0x0000006A:
			return func_166(iParam0, 0x00000069, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x0000006B:
			return func_166(iParam0, 0x00000069, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x00000062:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 0x00000001;
			break;
		
		case 0x00000063:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000064:
			return func_166(iParam0, 0x00000063, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x00000065:
			return func_166(iParam0, 0x00000063, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x00000066:
			return func_166(iParam0, 0x00000063, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x0000007B:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 0x00000001;
			break;
		
		case 0x0000007D:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 0x00000001;
			break;
		
		case 0x00000085:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0x00000000;
			uParam2->f_9 = 0x00000001;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_B[0x00000000] = 0x00000000;
			uParam2->f_B[0x00000001] = 0x00000000;
			uParam2->f_B[0x00000002] = 0x00000001;
			uParam2->f_B[0x00000003] = 0x00000000;
			uParam2->f_B[0x00000004] = 0x00000000;
			uParam2->f_B[0x00000005] = 0x00000001;
			uParam2->f_B[0x00000006] = 0x00000001;
			uParam2->f_B[0x00000007] = 0x00000001;
			uParam2->f_B[0x00000008] = 0x00000001;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x00000059:
		case 0x0000005A:
		case 0x0000007F:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 0x00000001;
			break;
		
		case 0x0000005B:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 0x00000001;
			break;
		
		case 0x0000005D:
			if (func_166(iParam0, 0x0000005B, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 0x00000001;
			}
			break;
		
		case 0x00000079:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 0x00000001;
			break;
		
		case 0x00000073:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 0x00000001;
			break;
		
		case 0x00000074:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 0x00000001;
			break;
		
		case 0x00000075:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 0x00000001;
			break;
		
		case 0x0000005E:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 0x00000001;
			break;
		
		case 0x00000060:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 0x00000001;
			break;
		
		case 0x0000006C:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 0x00000001;
			break;
		
		case 0x0000006D:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 0x00000001;
			break;
		
		case 0x00000087:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 0x00000001;
			break;
		
		case 0x00000088:
			if (func_166(iParam0, 0x00000087, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 0x00000001;
			}
			break;
		
		case 0x00000089:
			if (func_166(iParam0, 0x00000087, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 0x00000001;
			}
			break;
		
		case 0x0000008A:
			if (func_166(iParam0, 0x00000087, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 0x00000001;
			}
			break;
		
		case 0x0000008B:
			if (func_166(iParam0, 0x00000087, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 0x00000001;
			}
			break;
		
		case 0x0000008C:
			if (func_166(iParam0, 0x0000008E, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 0x00000001;
			}
			break;
		
		case 0x0000008D:
			if (func_166(iParam0, 0x0000008E, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 0x00000001;
			}
			break;
		
		case 0x0000008E:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 0x00000001;
			break;
		
		case 0x0000008F:
			if (func_166(iParam0, 0x0000008E, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 0x00000001;
			}
			break;
		
		case 0x00000090:
			if (func_166(iParam0, 0x0000008E, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 0x00000001;
			}
			break;
		
		case 0x00000091:
			if (func_166(iParam0, 0x0000008E, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 0x00000001;
			}
			break;
		
		case 0x00000092:
			if (func_166(iParam0, 0x0000008E, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 0x00000001;
			}
			break;
		
		case 0x00000093:
			if (func_166(iParam0, 0x0000008E, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 0x00000001;
			}
			break;
		
		case 0x00000094:
			if (func_166(iParam0, 0x0000008E, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 0x00000001;
			}
			break;
		
		case 0x00000095:
			if (func_166(iParam0, 0x0000008E, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 0x00000001;
			}
			break;
		
		case 0x00000097:
			if (func_166(iParam0, 0x0000005E, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 0x00000001;
			}
			break;
		
		case 0x000000A2:
			if (func_166(iParam0, 0x00000073, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 0x00000001;
			}
			break;
		
		case 0x0000009E:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 0x00000001;
			break;
		
		case 0x000000A6:
			return func_166(iParam0, 0x00000062, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x000000AA:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 0x00000001;
			break;
		
		case 0x000000AB:
			return func_166(iParam0, 0x00000062, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x000000AC:
			return func_166(iParam0, 0x00000062, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x000000D0:
			func_168(iParam0, uParam2, 0x00000001);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 0x00000001;
			break;
		
		case 0x000000D1:
			return func_166(iParam0, 0x000000D0, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x000000D2:
			return func_166(iParam0, 0x000000D0, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x000000D3:
			func_167(iParam0, uParam2, 0x00000002);
			uParam2->f_5B = 0x00000002;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 0x00000001;
			break;
		
		case 0x000000D4:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 0x00000001;
			break;
		
		case 0x000000D5:
			if (func_166(iParam0, 0x000000D3, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 0x00000001;
			}
			break;
		
		case 0x000000D6:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 0x00000001;
			break;
		
		case 0x000000D7:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0x00000000;
			uParam2->f_9 = 0x00000001;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return 0x00000001;
			break;
		
		case 0x000000C4:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0x00000000;
			uParam2->f_9 = 0x00000001;
			*uParam3 = { Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam6 = 10f;
			return 0x00000001;
			break;
		
		case 0x000000DD:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 0x00000001;
			break;
		
		case 0x000000D8:
			if (func_166(iParam0, 0x000000D3, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 0x00000001;
			}
			break;
		
		case 0x000000D9:
			if (func_166(iParam0, 0x000000D3, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 0x00000001;
			}
			break;
		
		case 0x000000E8:
		case 0x000000E9:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return 0x00000001;
			break;
		
		case 0x000000C0:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 0x00000001;
			break;
		
		case 0x000000C1:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 0x00000001;
			break;
		
		case 0x000000C2:
			if (func_166(iParam0, 0x000000C1, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 0x00000001;
			}
			break;
		
		case 0x000000C3:
			if (func_166(iParam0, 0x000000C1, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 0x00000001;
			}
			break;
		
		case 0x000000C8:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 0x00000001;
			break;
		
		case 0x000000C9:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 0x00000001;
			break;
		
		case 0x000000CA:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 0x00000001;
			break;
		
		case 0x000000DE:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 0x00000001;
			break;
		
		case 0x000000DF:
			if (func_166(iParam0, 0x000000DE, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 0x00000001;
			}
			break;
		
		case 0x000000E0:
			return func_166(iParam0, 0x000000DE, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x000000E2:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 0x00000001;
			break;
		
		case 0x000000E3:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 0x00000001;
			break;
		
		case 0x000000E4:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 0x00000001;
			break;
		
		case 0x000000E5:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 0x00000001;
			break;
		
		case 0x000000E6:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 0x00000001;
			break;
		
		case 0x000000EE:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 0x00000001;
			break;
		
		case 0x000000FA:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 0x00000001;
			break;
		
		case 0x000000FB:
			if (func_166(iParam0, 0x000000FA, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 0x00000001;
			}
			break;
		
		case 0x000000FC:
			if (func_166(iParam0, 0x000000FA, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 0x00000001;
			}
			break;
		
		case 0x000000FD:
			if (func_166(iParam0, 0x000000FA, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 0x00000001;
			}
			break;
		
		case 0x00000119:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x0000011A:
			if (func_166(iParam0, 0x00000119, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000011B:
			if (func_166(iParam0, 0x00000119, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 0x00000001;
			}
			break;
		
		case 0x0000011C:
			if (func_166(iParam0, 0x00000119, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_61 = 0x00000000;
				*uParam2 = joaat("faggio2");
				uParam2->f_5B = 0x00000000;
				return 0x00000001;
			}
			break;
		
		case 0x00000113:
			func_167(iParam0, uParam2, 0x00000001);
			uParam2->f_5B = 0x00000001;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 0x00000001;
			break;
		
		case 0x00000114:
			return func_166(iParam0, 0x00000113, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x00000115:
			return func_166(iParam0, 0x00000113, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 0x00000118:
			if (!Global_3)
			{
				uParam2->f_61 = 0x00000000;
				*uParam2 = joaat("tropic");
				uParam2->f_B[0x00000000] = 0x00000000;
				uParam2->f_B[0x00000001] = 0x00000000;
				uParam2->f_B[0x00000002] = 0x00000001;
				uParam2->f_B[0x00000003] = 0x00000000;
				uParam2->f_B[0x00000004] = 0x00000000;
				uParam2->f_B[0x00000005] = 0x00000001;
				uParam2->f_B[0x00000006] = 0x00000001;
				uParam2->f_B[0x00000007] = 0x00000001;
				uParam2->f_B[0x00000008] = 0x00000001;
			}
			else
			{
				uParam2->f_61 = 0x00000000;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return 0x00000001;
			break;
		
		case 0x000000F7:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 0x00000001;
			break;
		
		case 0x00000120:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 0x00000001;
			break;
		
		case 0x00000135:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 0x00000001;
			break;
		
		case 0x00000131:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 0x00000001;
			break;
		
		case 0x00000136:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 0x00000001;
			break;
		
		case 0x000000FF:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 0x00000001;
			break;
		
		case 0x00000109:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 0x00000001;
			break;
		
		case 0x0000011D:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 0x00000001;
			break;
		
		case 0x00000100:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 0x00000001;
			break;
		
		case 0x00000101:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 0x00000001;
			break;
		
		case 0x00000102:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 0x00000001;
			break;
		
		case 0x0000013A:
			uParam2->f_61 = 0x00000000;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 0x00000001;
			break;
	}
	switch (iParam1)
	{
		case 0x0000006E:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 0x00000001;
			break;
		
		case 0x0000006F:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 0x00000001;
			break;
		
		case 0x00000099:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 0x00000001;
			break;
		
		case 0x0000009A:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 0x00000001;
			break;
		
		case 0x000000A5:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 0x00000001;
			break;
		
		case 0x0000009F:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 0x00000001;
			break;
		
		case 0x000000A0:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 0x00000001;
			break;
		
		case 0x000000A7:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 0x00000001;
			break;
		
		case 0x00000098:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 0x00000001;
			break;
		
		case 0x0000009D:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 0x00000001;
			break;
		
		case 0x000000E1:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 0x00000001;
			break;
		
		case 0x000000DA:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 0x00000001;
			break;
		
		case 0x000000DB:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 0x00000001;
			break;
		
		case 0x000000DC:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 0x00000001;
			break;
		
		case 0x000000CE:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 0x00000001;
			break;
		
		case 0x000000CF:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 0x00000001;
			break;
		
		case 0x00000112:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 0x00000001;
			break;
		
		case 0x00000138:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 0x00000001;
			break;
		
		case 0x0000010F:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 0x00000001;
			break;
		
		case 0x000000F8:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 0x00000001;
			break;
		
		case 0x000000F2:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 0x00000001;
			break;
		
		case 0x000000FE:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 0x00000001;
			break;
		
		case 0x0000011F:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 0x00000001;
			break;
		
		case 0x0000011E:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 0x00000001;
			break;
		
		case 0x000000EF:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 0x00000001;
			break;
		
		case 0x000000F3:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 0x00000001;
			break;
		
		case 0x000000F4:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 0x00000001;
			break;
		
		case 0x000000F9:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 0x00000001;
			break;
		
		case 0x00000111:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 0x00000001;
			break;
		
		case 0x0000005C:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 0x00000001;
			break;
		
		case 0x00000067:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 0x00000001;
			break;
		
		case 0x0000006D:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 0x00000001;
			break;
		
		case 0x00000051:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 0x00000001;
			break;
		
		case 0x0000005F:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 0x00000001;
			break;
		
		case 0x00000061:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 0x00000001;
			break;
		
		case 0x00000086:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 0x00000001;
			break;
		
		case 0x00000058:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 0x00000001;
			break;
		
		case 0x00000132:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (296.1685f - unk_0xE7D606C557C86100(7.4998f, -7.4995f));
			return 0x00000001;
			break;
		
		case 0x00000133:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (236.223f - unk_0xE7D606C557C86100(-10.6345f, -0.7246f));
			return 0x00000001;
			break;
		
		case 0x00000134:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (332.7842f - unk_0xE7D606C557C86100(3.4271f, 13.6787f));
			return 0x00000001;
			break;
		
		case 0x00000116:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 0x00000001;
			break;
		
		case 0x00000117:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 0x00000001;
			break;
		
		case 0x000000F0:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 0x00000001;
			break;
		
		case 0x000000F1:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 0x00000001;
			break;
		
		case 0x00000108:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 0x00000001;
			break;
		
		case 0x0000010A:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 0x00000001;
			break;
		
		case 0x0000010B:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 0x00000001;
			break;
		
		case 0x0000010D:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 0x00000001;
			break;
		
		case 0x000000F6:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 0x00000001;
			break;
		
		case 0x00000107:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 0x00000001;
			break;
		
		case 0x00000103:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 0x00000001;
			break;
		
		case 0x00000104:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 0x00000001;
			break;
		
		case 0x00000105:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 0x00000001;
			break;
		
		case 0x0000010E:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 0x00000001;
			break;
		
		case 0x00000121:
			func_168(iParam0, uParam2, 0x00000000);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_167(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_58 = 0x00000001;
	uParam1->f_54 = 0x000000FF;
	uParam1->f_55 = 0x000000FF;
	uParam1->f_56 = 0x000000FF;
	uParam1->f_61 = 0x00000001;
	uParam1->f_3 = 0x000003E8;
	uParam1->f_1 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = joaat("tailgater");
			if (Global_1B416.f_2378.f_63.f_3A[0x00000080] && !Global_1B416.f_2378.f_63.f_3A[0x00000083])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0x00000000;
					uParam1->f_9 = 0x00000001;
					uParam1->f_B[0x00000000] = 0x00000001;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 0x0000002B;
					uParam1->f_6 = 0x0000002B;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_9 = 0x00000000;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 0x00000002:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 0x00000020;
					uParam1->f_6 = 0x00000000;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_1B416.f_2378.f_63.f_3A[0x00000077])
					{
						uParam1->f_B[0x00000001] = 0x00000001;
					}
					break;
			}
			break;
		
		case 0x00000001:
			if (iParam2 == 0x00000001)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 0x00000002)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_1B416.f_2378.f_63.f_3A[0x00000076])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 0x00000035;
					uParam1->f_6 = 0x00000000;
					uParam1->f_7 = 0x0000003B;
					uParam1->f_8 = 0x0000009C;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 0x0000006F;
					uParam1->f_6 = 0x0000006F;
					uParam1->f_7 = 0x00000000;
					uParam1->f_8 = 0x0000009C;
					uParam1->f_A = 0x00000001;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0x00000000] = 0x00000001;
					uParam1->f_B[0x00000001] = 0x00000001;
					uParam1->f_B[0x00000002] = 0x00000001;
					uParam1->f_B[0x00000003] = 0x00000001;
					uParam1->f_B[0x00000004] = 0x00000001;
					uParam1->f_B[0x00000005] = 0x00000001;
					uParam1->f_B[0x00000006] = 0x00000001;
					uParam1->f_B[0x00000007] = 0x00000001;
					uParam1->f_B[0x00000008] = 0x00000001;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_168(int iParam0, var uParam1, int iParam2)
{
	if (Global_17F64[iParam0 /*98*/] == 0x00000000)
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("blimp"))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 0x00000001;
	}
	if (func_178(iParam0))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 0x00000001;
	}
	if (unk_0xA7082C42B8809BF2(Global_17F64[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 0x00000001;
	}
	if (unk_0xC41A9202669A24C4(Global_17F64[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 0x00000001;
	}
	if (unk_0xAFB8495D36825275(Global_17F64[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 0x00000001;
	}
	if (unk_0xA7D7011F9888A365(Global_17F64[iParam0 /*98*/]))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 0x00000001;
	}
	if (iParam2 == 0x00000001)
	{
		if (!unk_0x8E39AC3C76C8AA58(Global_17F64[iParam0 /*98*/]))
		{
			func_167(iParam0, uParam1, iParam2);
			uParam1->f_5B = iParam2;
			return 0x00000001;
		}
	}
	else if (iParam2 == 0x00000002)
	{
		if (!unk_0x7D8B2A8F9EA82DB7(Global_17F64[iParam0 /*98*/]))
		{
			func_167(iParam0, uParam1, iParam2);
			uParam1->f_5B = iParam2;
			return 0x00000001;
		}
	}
	if (!func_169(Global_17F64[iParam0 /*98*/], 0x00000000))
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 0x00000001;
	}
	if (iParam2 != 0x00000000)
	{
		func_167(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		if (Global_17F64[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_17F64[iParam0 /*98*/] };
			uParam1->f_5B = 0x00000000;
			return 0x00000000;
		}
	}
	else
	{
		func_167(iParam0, uParam1, 0x00000001);
		uParam1->f_5B = 0x00000001;
		if (Global_17F64[iParam0 /*98*/] == *uParam1)
		{
			func_167(iParam0, uParam1, 0x00000001);
			uParam1->f_5B = 0x00000001;
			return 0x00000001;
		}
		func_167(iParam0, uParam1, 0x00000002);
		uParam1->f_5B = 0x00000002;
		if (Global_17F64[iParam0 /*98*/] == *uParam1)
		{
			func_167(iParam0, uParam1, 0x00000002);
			uParam1->f_5B = 0x00000002;
			return 0x00000001;
		}
		*uParam1 = { Global_17F64[iParam0 /*98*/] };
		uParam1->f_5B = 0x00000000;
		return 0x00000000;
	}
	func_167(iParam0, uParam1, iParam2);
	uParam1->f_5B = iParam2;
	return 0x00000001;
}

int func_169(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0x4DAC2AD66FE0E696(iParam0))
	{
		return 0x00000000;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x8CD06866876216F2()) || (iParam0 == joaat("buffalo3") && !unk_0x8CD06866876216F2())) || (iParam0 == joaat("gauntlet2") && !unk_0x8CD06866876216F2())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x8CD06866876216F2()))
	{
		if (!func_177())
		{
			return 0x00000000;
		}
	}
	else
	{
		iVar0 = 0x00000000;
		while (iVar0 < unk_0x6C7B93D0F54679BE())
		{
			if (unk_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x232048AB4B0E0259(Var1))
					{
						return 0x00000000;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_176() && !func_175()) && !func_174()) && !func_173()) && !func_177())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_174())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_172(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_170(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_170(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_171())
	{
		return 0x00000001;
	}
	unk_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 0x00000004)
	{
		return 0x00000001;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 0x00000001;
			break;
	}
	if (!unk_0x437ABF4F514F6471(&cVar2))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_171()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_172(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_26596A)
	{
		return 0x00000001;
	}
	iVar0 = 0x00000001;
	iVar1 = unk_0xDD0E7998AE8AD485();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_40001.f_19C7 && !Global_40001.f_327A) && iVar1 < Global_40001.f_327B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_40001.f_378E && iVar1 < Global_40001.f_379A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_40001.f_378A && iVar1 < Global_40001.f_3796)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_40001.f_378B && iVar1 < Global_40001.f_3797)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_40001.f_378C && iVar1 < Global_40001.f_3798)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_40001.f_378D && iVar1 < Global_40001.f_3799)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_40001.f_378F && iVar1 < Global_40001.f_379B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_40001.f_3790 && iVar1 < Global_40001.f_3793)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_40001.f_3791 && iVar1 < Global_40001.f_3794)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_40001.f_3792 && iVar1 < Global_40001.f_3795)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_40001.f_41D5 && iVar1 < Global_40001.f_41B2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_40001.f_41D0 && iVar1 < Global_40001.f_41AD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_40001.f_41D4 && iVar1 < Global_40001.f_41B1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_40001.f_41D3 && iVar1 < Global_40001.f_41B0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_40001.f_41CD && iVar1 < Global_40001.f_41AA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_40001.f_41CE && iVar1 < Global_40001.f_41AB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_40001.f_41D1 && iVar1 < Global_40001.f_41AE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_40001.f_41D2 && iVar1 < Global_40001.f_41AF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_40001.f_41CF && iVar1 < Global_40001.f_41AC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_40001.f_41D7 && iVar1 < Global_40001.f_41B4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_40001.f_41D8 && iVar1 < Global_40001.f_41B5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_40001.f_41CC && iVar1 < Global_40001.f_41A9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_40001.f_41CB && iVar1 < Global_40001.f_41A8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_40001.f_41CA && iVar1 < Global_40001.f_41A7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_40001.f_41D6 && iVar1 < Global_40001.f_41B3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_40001.f_41D9 && iVar1 < Global_40001.f_41B6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_40001.f_41DA && iVar1 < Global_40001.f_41B7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_40001.f_41DB && iVar1 < Global_40001.f_41B8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_40001.f_41DC && iVar1 < Global_40001.f_41B9)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_40001.f_426F && iVar1 < Global_40001.f_4285)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_40001.f_4270 && iVar1 < Global_40001.f_4286)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_40001.f_4271 && iVar1 < Global_40001.f_4287)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_40001.f_4272 && iVar1 < Global_40001.f_4288)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_40001.f_4273 && iVar1 < Global_40001.f_4289)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_40001.f_4274 && iVar1 < Global_40001.f_428A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_40001.f_4276 && iVar1 < Global_40001.f_428B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_40001.f_4277 && iVar1 < Global_40001.f_428C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_40001.f_4278 && iVar1 < Global_40001.f_428D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_40001.f_4279 && iVar1 < Global_40001.f_428E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_40001.f_427A && iVar1 < Global_40001.f_428F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_40001.f_427B && iVar1 < Global_40001.f_4290)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_40001.f_427C && iVar1 < Global_40001.f_4291)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_40001.f_4282 && iVar1 < Global_40001.f_4298)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_40001.f_427F && iVar1 < Global_40001.f_4294)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_40001.f_4280 && iVar1 < Global_40001.f_4295)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_40001.f_4281 && iVar1 < Global_40001.f_4296)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_40001.f_4275 && iVar1 < Global_40001.f_4297)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_40001.f_4283 && iVar1 < Global_40001.f_4299)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_40001.f_427D && iVar1 < Global_40001.f_4292)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_40001.f_427E && iVar1 < Global_40001.f_4293)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_40001.f_4284 && iVar1 < Global_40001.f_429A)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_40001.f_48E3 && iVar1 < Global_40001.f_4944)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_40001.f_48E4 && iVar1 < Global_40001.f_4945)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_40001.f_48E5 && iVar1 < Global_40001.f_4946)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_40001.f_48E6 && iVar1 < Global_40001.f_4947)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_40001.f_48E7 && iVar1 < Global_40001.f_4948)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_40001.f_48E8 && iVar1 < Global_40001.f_4949)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_40001.f_48E9 && iVar1 < Global_40001.f_494A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_40001.f_48EA && iVar1 < Global_40001.f_494B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_40001.f_48EB && iVar1 < Global_40001.f_494C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_40001.f_48EC && iVar1 < Global_40001.f_494D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_40001.f_48ED && iVar1 < Global_40001.f_494E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_40001.f_48EE && iVar1 < Global_40001.f_494F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_40001.f_48EF && iVar1 < Global_40001.f_4950)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_40001.f_48F0 && iVar1 < Global_40001.f_4951)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_40001.f_48F1 && iVar1 < Global_40001.f_4952)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_40001.f_48F2 && iVar1 < Global_40001.f_4953)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_40001.f_48F3 && iVar1 < Global_40001.f_4954)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_40001.f_48F4 && iVar1 < Global_40001.f_4955)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_40001.f_48F5 && iVar1 < Global_40001.f_4956)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_40001.f_48F6 && iVar1 < Global_40001.f_4957)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_40001.f_48F7 && iVar1 < Global_40001.f_4958)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_40001.f_48F8 && iVar1 < Global_40001.f_4959)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_40001.f_48F9 && iVar1 < Global_40001.f_495A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_40001.f_48FA && iVar1 < Global_40001.f_495B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_40001.f_48FB && iVar1 < Global_40001.f_495C)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x4992196C)
	{
		if (!Global_40001.f_4D1C && iVar1 < Global_40001.f_4D18)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAC33179C)
	{
		if (!Global_40001.f_4D1D && iVar1 < Global_40001.f_4D19)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2AE524A8)
	{
		if (!Global_40001.f_4D1E && iVar1 < Global_40001.f_4D1A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC575DF11)
	{
		if (!Global_40001.f_4D1F && iVar1 < Global_40001.f_4D1B)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x36B4A8A9)
	{
		if (!Global_40001.f_508B && iVar1 < Global_40001.f_5093)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x0D4E5F4D)
	{
		if (!Global_40001.f_508C && iVar1 < Global_40001.f_5094)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x59A9E570)
	{
		if (!Global_40001.f_508D && iVar1 < Global_40001.f_5095)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7397224C)
	{
		if (!Global_40001.f_508E && iVar1 < Global_40001.f_5096)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x097E5533)
	{
		if (!Global_40001.f_508F && iVar1 < Global_40001.f_5097)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x19DD9ED1)
	{
		if (!Global_40001.f_5090 && iVar1 < Global_40001.f_5098)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x96E24857)
	{
		if (!Global_40001.f_5394 && iVar1 < Global_40001.f_53A8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD35698EF)
	{
		if (!Global_40001.f_53A0 && iVar1 < Global_40001.f_53B4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC5DD6967)
	{
		if (!Global_40001.f_5397 && iVar1 < Global_40001.f_53AB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9A9EB7DE)
	{
		if (!Global_40001.f_53A1 && iVar1 < Global_40001.f_53B5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE8983F9F)
	{
		if (!Global_40001.f_5395 && iVar1 < Global_40001.f_53A9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E2E4F8A)
	{
		if (!Global_40001.f_53A5 && iVar1 < Global_40001.f_53B9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAD6065C0)
	{
		if (!Global_40001.f_53A3 && iVar1 < Global_40001.f_53B7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5D56F01B)
	{
		if (!Global_40001.f_53A4 && iVar1 < Global_40001.f_53B8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3DC92356)
	{
		if (!Global_40001.f_539F && iVar1 < Global_40001.f_53B3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFE0A508C)
	{
		if (!Global_40001.f_53A6 && iVar1 < Global_40001.f_53BA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFD707EDE)
	{
		if (!Global_40001.f_53A2 && iVar1 < Global_40001.f_53B6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x89BA59F5)
	{
		if (!Global_40001.f_539E && iVar1 < Global_40001.f_53B2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC3F25753)
	{
		if (!Global_40001.f_5396 && iVar1 < Global_40001.f_53AA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA52F6866)
	{
		if (!Global_40001.f_5398 && iVar1 < Global_40001.f_53AC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x52FF9437)
	{
		if (!Global_40001.f_5399 && iVar1 < Global_40001.f_53AD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC4810400)
	{
		if (!Global_40001.f_539A && iVar1 < Global_40001.f_53AE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB5EF4C33)
	{
		if (!Global_40001.f_539B && iVar1 < Global_40001.f_53AF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6DBD6C0A)
	{
		if (!Global_40001.f_539C && iVar1 < Global_40001.f_53B0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7A2EF5E4)
	{
		if (!Global_40001.f_539D && iVar1 < Global_40001.f_53B1)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x586765FB)
	{
		if (!Global_40001.f_5755 && iVar1 < Global_40001.f_5771)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x34DBA661)
	{
		if (!Global_40001.f_5756 && iVar1 < Global_40001.f_5772)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9B16A3B4)
	{
		if (!Global_40001.f_5757 && iVar1 < Global_40001.f_5773)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD6BC7523)
	{
		if (!Global_40001.f_5758 && iVar1 < Global_40001.f_5774)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAA6F980A)
	{
		if (!Global_40001.f_5759 && iVar1 < Global_40001.f_5775)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x46699F47)
	{
		if (!Global_40001.f_575A && iVar1 < Global_40001.f_5776)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x58CDAF30)
	{
		if (!Global_40001.f_575B && iVar1 < Global_40001.f_5777)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF34DFB25)
	{
		if (!Global_40001.f_575C && iVar1 < Global_40001.f_5778)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1AAD0DED)
	{
		if (!Global_40001.f_575D && iVar1 < Global_40001.f_5779)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5D1903F9)
	{
		if (!Global_40001.f_575E && iVar1 < Global_40001.f_577A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x91CA96EE)
	{
		if (!Global_40001.f_575F && iVar1 < Global_40001.f_577B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x67D2B389)
	{
		if (!Global_40001.f_5760 && iVar1 < Global_40001.f_577C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x41D149AA)
	{
		if (!Global_40001.f_5761 && iVar1 < Global_40001.f_577D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6F946279)
	{
		if (!Global_40001.f_5762 && iVar1 < Global_40001.f_577E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x5097F589)
	{
		if (!Global_40001.f_5763 && iVar1 < Global_40001.f_577F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xED552C74)
	{
		if (!Global_40001.f_5764 && iVar1 < Global_40001.f_5780)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8408F33A)
	{
		if (!Global_40001.f_5765 && iVar1 < Global_40001.f_5781)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x23CA25F2)
	{
		if (!Global_40001.f_5766 && iVar1 < Global_40001.f_5782)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE78CC3D9)
	{
		if (!Global_40001.f_5767 && iVar1 < Global_40001.f_5783)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x33B98FE2)
	{
		if (!Global_40001.f_5768 && iVar1 < Global_40001.f_5784)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA4D99B7D)
	{
		if (!Global_40001.f_5769 && iVar1 < Global_40001.f_5785)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x35DED0DD)
	{
		if (!Global_40001.f_576A && iVar1 < Global_40001.f_5786)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA4A4E453)
	{
		if (!Global_40001.f_576B && iVar1 < Global_40001.f_5787)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x00E83C17)
	{
		if (!Global_40001.f_576C && iVar1 < Global_40001.f_5788)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x276D98A3)
	{
		if (!Global_40001.f_576D && iVar1 < Global_40001.f_5789)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3201DD49)
	{
		if (!Global_40001.f_576E && iVar1 < Global_40001.f_578A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE8A8BA94)
	{
		if (!Global_40001.f_576F && iVar1 < Global_40001.f_578B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF8C2E0E7)
	{
		if (!Global_40001.f_5770 && iVar1 < Global_40001.f_578C)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x71CBEA98)
	{
		if (!Global_40001.f_5C15 && iVar1 < Global_40001.f_5C25)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6068AD86)
	{
		if (!Global_40001.f_5C16 && iVar1 < Global_40001.f_5C26)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB472D2B5)
	{
		if (!Global_40001.f_5C1A && iVar1 < Global_40001.f_5C2A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x378236E1)
	{
		if (!Global_40001.f_5C1D && iVar1 < Global_40001.f_5C2D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E5BD8D9)
	{
		if (!Global_40001.f_5C22 && iVar1 < Global_40001.f_5C32)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB4F32118)
	{
		if (!Global_40001.f_5C1C && iVar1 < Global_40001.f_5C2C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x42836BE5)
	{
		if (!Global_40001.f_5C14 && iVar1 < Global_40001.f_5C24)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3D7C6410)
	{
		if (!Global_40001.f_5C1B && iVar1 < Global_40001.f_5C2B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE99011C2)
	{
		if (!Global_40001.f_5C21 && iVar1 < Global_40001.f_5C31)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC52C6B93)
	{
		if (!Global_40001.f_5C20 && iVar1 < Global_40001.f_5C30)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBC5DC07E)
	{
		if (!Global_40001.f_5C17 && iVar1 < Global_40001.f_5C27)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8198AEDC)
	{
		if (!Global_40001.f_5C19 && iVar1 < Global_40001.f_5C29)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF330CB6A)
	{
		if (!Global_40001.f_5C23 && iVar1 < Global_40001.f_5C33)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC514AAE0)
	{
		if (!Global_40001.f_5C1F && iVar1 < Global_40001.f_5C2F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4ABEBF23)
	{
		if (!Global_40001.f_5C18 && iVar1 < Global_40001.f_5C28)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD4AE63D9)
	{
		if (!Global_40001.f_5C1E && iVar1 < Global_40001.f_5C2E)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x897AFC65)
	{
		if (!Global_40001.f_5C6F && iVar1 < Global_40001.f_5C62)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x149BD32A)
	{
		if (!Global_40001.f_5C70 && iVar1 < Global_40001.f_5C63)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x73F4110E)
	{
		if (!Global_40001.f_5C75 && iVar1 < Global_40001.f_5C68)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6290F15B)
	{
		if (!Global_40001.f_5C74 && iVar1 < Global_40001.f_5C67)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1DD4C0FF)
	{
		if (!Global_40001.f_5C72 && iVar1 < Global_40001.f_5C65)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x79DD18AE)
	{
		if (!Global_40001.f_5C78 && iVar1 < Global_40001.f_5C6B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD9F0503D)
	{
		if (!Global_40001.f_5C7A && iVar1 < Global_40001.f_5C6D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x64DE07A1)
	{
		if (!Global_40001.f_5C7B && iVar1 < Global_40001.f_5C6E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7B54A9D3)
	{
		if (!Global_40001.f_5C79 && iVar1 < Global_40001.f_5C6C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE6E967F8)
	{
		if (!Global_40001.f_5C71 && iVar1 < Global_40001.f_5C64)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1324E960)
	{
		if (!Global_40001.f_5C73 && iVar1 < Global_40001.f_5C66)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFCC2F483)
	{
		if (!Global_40001.f_5C77 && iVar1 < Global_40001.f_5C6A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEDA4ED97)
	{
		if (!Global_40001.f_5C76 && iVar1 < Global_40001.f_5C69)
		{
			iVar0 = 0x00000000;
		}
	}
	if (iParam0 == 0x669EB40A)
	{
	}
	else if (iParam0 == 0xD039510B)
	{
	}
	else if (iParam0 == 0x287FA449)
	{
	}
	else if (iParam0 == 0x71D3B6F0)
	{
	}
	else if (iParam0 == 0x7F81A829)
	{
	}
	else if (iParam0 == 0x8F49AE28)
	{
	}
	else if (iParam0 == 0x798682A2)
	{
	}
	else if (iParam0 == 0xBBA2A2F7)
	{
	}
	else if (iParam0 == 0x5BEB3CE0)
	{
	}
	else if (iParam0 == 0xDD71BFEB)
	{
	}
	else if (iParam0 == 0x1A861243)
	{
	}
	else if (iParam0 == 0x619C1B82)
	{
	}
	else if (iParam0 == 0xD2F77E37)
	{
	}
	else if (iParam0 == 0x20314B42)
	{
	}
	else if (iParam0 == 0xBE11EFC6)
	{
	}
	else if (iParam0 == 0xA7DCC35C)
	{
	}
	else if (iParam0 == 0x83070B62)
	{
	}
	else if (iParam0 == 0x5EE005DA)
	{
		if (!Global_40001.f_657A && iVar1 < Global_40001.f_657C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBA5334AC)
	{
		if (!Global_40001.f_619F && iVar1 < Global_40001.f_6198)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xA29F78B0)
	{
		if (!Global_40001.f_61A0 && iVar1 < Global_40001.f_6199)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEC3E3404)
	{
		if (!Global_40001.f_61A1 && iVar1 < Global_40001.f_619A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4C3FFF49)
	{
		if (!Global_40001.f_61A2 && iVar1 < Global_40001.f_619B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xFD128DFD)
	{
		if (!Global_40001.f_657B && iVar1 < Global_40001.f_657D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x56D42971)
	{
		if (!Global_40001.f_61A3 && iVar1 < Global_40001.f_619C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE1C03AB0)
	{
		if (!Global_40001.f_61A4 && iVar1 < Global_40001.f_619D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEEF345EC)
	{
		if (!Global_40001.f_61A5 && iVar1 < Global_40001.f_619E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3E3D1F59)
	{
		if (!Global_40001.f_61AA && iVar1 < Global_40001.f_61BF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x28EAB80F)
	{
		if (!Global_40001.f_61AB && iVar1 < Global_40001.f_61C0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC7E55211)
	{
		if (!Global_40001.f_61AC && iVar1 < Global_40001.f_61C1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x92F5024E)
	{
		if (!Global_40001.f_61AD && iVar1 < Global_40001.f_61C2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD757D97D)
	{
		if (!Global_40001.f_61AE && iVar1 < Global_40001.f_61C3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2B0C4DCD)
	{
		if (!Global_40001.f_61AF && iVar1 < Global_40001.f_61C4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6E8DA4F7)
	{
		if (!Global_40001.f_61B0 && iVar1 < Global_40001.f_61C5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6F039A67)
	{
		if (!Global_40001.f_61B1 && iVar1 < Global_40001.f_61C6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCB642637)
	{
		if (!Global_40001.f_61B2 && iVar1 < Global_40001.f_61C7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xEA6A047F)
	{
		if (!Global_40001.f_61B3 && iVar1 < Global_40001.f_61C8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x127E90D5)
	{
		if (!Global_40001.f_61B4 && iVar1 < Global_40001.f_61C9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x36A167E0)
	{
		if (!Global_40001.f_61B5 && iVar1 < Global_40001.f_61CA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9472CD24)
	{
		if (!Global_40001.f_61B6 && iVar1 < Global_40001.f_61CB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x734C5E50)
	{
		if (!Global_40001.f_61B7 && iVar1 < Global_40001.f_61CC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAF966F3C)
	{
		if (!Global_40001.f_61B8 && iVar1 < Global_40001.f_61CD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xF38C4245)
	{
		if (!Global_40001.f_61B9 && iVar1 < Global_40001.f_61CE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xECA6B6A3)
	{
		if (!Global_40001.f_61BA && iVar1 < Global_40001.f_61CF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xD86A0247)
	{
		if (!Global_40001.f_61BB && iVar1 < Global_40001.f_61D0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4EE74355)
	{
		if (!Global_40001.f_61BC && iVar1 < Global_40001.f_61D1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x9F6ED5A2)
	{
		if (!Global_40001.f_61BD && iVar1 < Global_40001.f_61D2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xE550775B)
	{
		if (!Global_40001.f_61BE && iVar1 < Global_40001.f_61D3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x42ACA95F)
	{
		if (!Global_40001.f_6CAD && iVar1 < Global_40001.f_6CC2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x18619B7E)
	{
		if (!Global_40001.f_6CAE && iVar1 < Global_40001.f_6CC3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x97553C28)
	{
		if (!Global_40001.f_6CAF && iVar1 < Global_40001.f_6CC4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x79178F0A)
	{
		if (!Global_40001.f_6CB0 && iVar1 < Global_40001.f_6CC5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x64F49967)
	{
		if (!Global_40001.f_6CB1 && iVar1 < Global_40001.f_6CC6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3ADB9758)
	{
		if (!Global_40001.f_6CB2 && iVar1 < Global_40001.f_6CC7)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3404691C)
	{
		if (!Global_40001.f_6CB3 && iVar1 < Global_40001.f_6CC8)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x185E2FF3)
	{
		if (!Global_40001.f_6CB4 && iVar1 < Global_40001.f_6CC9)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x2C1FEA99)
	{
		if (!Global_40001.f_6CB5 && iVar1 < Global_40001.f_6CCA)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCE44C4B9)
	{
		if (!Global_40001.f_6CB6 && iVar1 < Global_40001.f_6CCB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x11F58A5A)
	{
		if (!Global_40001.f_6CB7 && iVar1 < Global_40001.f_6CCC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x3944D5A0)
	{
		if (!Global_40001.f_6CB8 && iVar1 < Global_40001.f_6CCD)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4C8DBA51)
	{
		if (!Global_40001.f_6CB9 && iVar1 < Global_40001.f_6CCE)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x177DA45C)
	{
		if (!Global_40001.f_6CBA && iVar1 < Global_40001.f_6CCF)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x73920F8E)
	{
		if (!Global_40001.f_6CBB && iVar1 < Global_40001.f_6CD0)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_40001.f_6CBC && iVar1 < Global_40001.f_6CD1)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_40001.f_6CBD && iVar1 < Global_40001.f_6CD2)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_40001.f_6CBE && iVar1 < Global_40001.f_6CD3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xB53C6C52)
	{
		if (!Global_40001.f_6CBF && iVar1 < Global_40001.f_6CD4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_40001.f_6CC0 && iVar1 < Global_40001.f_6CD5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_40001.f_6CC1 && iVar1 < Global_40001.f_6CD6)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x1446590A)
	{
		if ((!Global_40001.f_6CD8 && iVar1 < Global_40001.f_6CD9) && !Global_40001.f_6CAB)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x8B213907)
	{
		if ((!Global_40001.f_6CDB && iVar1 < Global_40001.f_6CDC) && !Global_40001.f_6CAC)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xBC7C0A00)
	{
		if (!Global_40001.f_6CE0 && iVar1 < Global_40001.f_6CE3)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x04F48FC4)
	{
		if (!Global_40001.f_6CE1 && iVar1 < Global_40001.f_6CE4)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x56CDEE7D)
	{
		if (!Global_40001.f_6CE2 && iVar1 < Global_40001.f_6CE5)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x817AFAAD)
	{
		if (!Global_40001.f_70CA && iVar1 < Global_40001.f_6F7B)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x82E47E85)
	{
		if (!Global_40001.f_6F6D && iVar1 < Global_40001.f_6F82)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x7F3415E3)
	{
		if (!Global_40001.f_6F6E && iVar1 < Global_40001.f_6F74)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x0409D787)
	{
		if (!Global_40001.f_70C8 && iVar1 < Global_40001.f_6F7C)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4201A843)
	{
		if (!Global_40001.f_70C9 && iVar1 < Global_40001.f_6F7D)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xC98BBAD6)
	{
		if (!Global_40001.f_6F67 && iVar1 < Global_40001.f_6F7A)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xDA5EC7DA)
	{
		if (!Global_40001.f_6F68 && iVar1 < Global_40001.f_6F83)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xCE0B9F22)
	{
		if (!Global_40001.f_6F69 && iVar1 < Global_40001.f_6F79)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x94114926)
	{
		if (!Global_40001.f_6F6A && iVar1 < Global_40001.f_6F77)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0xAF0B8D48)
	{
		if (!Global_40001.f_70C4 && iVar1 < Global_40001.f_6F7E)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x58F77553)
	{
		if (!Global_40001.f_70C5 && iVar1 < Global_40001.f_6F7F)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x4669D038)
	{
		if (!Global_40001.f_70C6 && iVar1 < Global_40001.f_6F80)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x98F65A5E)
	{
		if (!Global_40001.f_70C7 && iVar1 < Global_40001.f_6F81)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x665F785D)
	{
		if (!Global_40001.f_6F6B && iVar1 < Global_40001.f_6F76)
		{
			iVar0 = 0x00000000;
		}
	}
	else if (iParam0 == 0x6B73A9BE)
	{
		if (!Global_40001.f_6F6C && iVar1 < Global_40001.f_6F78)
		{
			iVar0 = 0x00000000;
		}
	}
	return iVar0;
}

int func_173()
{
	return 0x00000000;
}

int func_174()
{
	return 0x00000001;
}

int func_175()
{
	return 0x00000001;
}

int func_176()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_177()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, 0xFFFFFFFF);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000002);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000006);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000002);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000004);
				unk_0x5D96D8530B3D0904(&Global_19, 0x00000006);
				unk_0xCDC520E5E48E63D9(joaat("sp_unlock_exclus_content"), iVar0, 0x00000001);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar0 = unk_0x0A4C9A3D51EAE31F(0x00000362);
					unk_0x5D96D8530B3D0904(&iVar0, 0x00000000);
					unk_0x9F2BE984EBF8A0F4(iVar0);
				}
				return 0x00000001;
			}
		}
	}
	if (Global_24BC8 == 0x00000002)
	{
		return 0x00000001;
	}
	else if (Global_24BC8 == 0x00000003)
	{
		return 0x00000000;
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		if (unk_0xEAE0D21A50E6C7F4(unk_0x0A4C9A3D51EAE31F(0x00000362), 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_178(int iParam0)
{
	if (Global_17F64[iParam0 /*98*/] == joaat("blimp") || Global_17F64[iParam0 /*98*/] == joaat("blimp2"))
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("submersible") || Global_17F64[iParam0 /*98*/] == joaat("submersible2"))
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("freight"))
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("packer"))
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("asea2"))
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("burrito2") || Global_17F64[iParam0 /*98*/] == joaat("fbi2"))
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("entityxf") && !Global_1B416.f_2378.f_14A[0x00000008 /*6*/])
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("cheetah") && !Global_1B416.f_2378.f_14A[0x00000008 /*6*/])
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("policeb") && !Global_1B416.f_2378.f_14A[0x00000008 /*6*/])
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("ztype") && !Global_1B416.f_2378.f_14A[0x00000009 /*6*/])
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("polmav") && !Global_1B416.f_2378.f_14A[0x00000009 /*6*/])
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("jb700") && !Global_1B416.f_2378.f_14A[0x0000000A /*6*/])
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("monroe") && !Global_1B416.f_2378.f_14A[0x0000000B /*6*/])
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == 0x73920F8E)
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("handler"))
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("monroe"))
	{
		return 0x00000001;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("phantom"))
	{
		return 0x00000001;
	}
	if (((Global_17F64[iParam0 /*98*/] == joaat("gauntlet") && !Global_1B416.f_2378.f_14A[0x00000050 /*6*/]) && !Global_1B416.f_2378.f_14A[0x00000051 /*6*/]) && !Global_1B416.f_2378.f_14A[0x00000052 /*6*/])
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_179(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_180(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 0x0000000B:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 0x00000001;
			break;
		
		case 0x00000008:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 0x00000001;
			break;
		
		case 0x00000009:
			return func_180(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000A:
			return func_180(0x00000008, uParam1, fParam2);
			break;
		
		case 0x0000000D:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 0x00000001;
			break;
		
		case 0x0000000E:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 0x00000001;
			break;
		
		case 0x0000000F:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 0x00000001;
			break;
		
		case 0x0000000C:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 0x00000001;
			break;
		
		case 0x00000010:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 0x00000001;
			break;
		
		case 0x00000011:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 0x00000001;
			break;
		
		case 0x00000012:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 0x00000001;
			break;
		
		case 0x00000013:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 0x00000001;
			break;
		
		case 0x00000014:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 0x00000001;
			break;
		
		case 0x00000015:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000016:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 0x00000001;
			break;
		
		case 0x0000004A:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 0x00000001;
			break;
		
		case 0x00000017:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 0x00000001;
			break;
		
		case 0x00000018:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 0x00000001;
			break;
		
		case 0x00000043:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 0x00000001;
			break;
		
		case 0x00000019:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 0x00000001;
			break;
		
		case 0x0000001B:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 0x00000001;
			break;
		
		case 0x0000001A:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 0x00000001;
			break;
		
		case 0x0000001C:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 0x00000001;
			break;
		
		case 0x0000001D:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000001E:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000001F:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000020:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000021:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000022:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000023:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000024:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000025:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000003A:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 0x00000001;
			break;
		
		case 0x0000003B:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 0x00000001;
			break;
		
		case 0x0000003C:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 0x00000001;
			break;
		
		case 0x00000026:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 0x00000001;
			break;
		
		case 0x00000027:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 0x00000001;
			break;
		
		case 0x00000028:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 0x00000001;
			break;
		
		case 0x00000029:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 0x00000001;
			break;
		
		case 0x0000002A:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 0x00000001;
			break;
		
		case 0x0000002B:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 0x00000001;
			break;
		
		case 0x0000002C:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 0x00000001;
			break;
		
		case 0x0000002D:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 0x00000001;
			break;
		
		case 0x0000002E:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x0000002F:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 0x00000001;
			break;
		
		case 0x00000031:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 0x00000001;
			break;
		
		case 0x00000030:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 0x00000001;
			break;
		
		case 0x00000032:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 0x00000001;
			break;
		
		case 0x00000033:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 0x00000001;
			break;
		
		case 0x00000034:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 0x00000001;
			break;
		
		case 0x00000042:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 0x00000001;
			break;
		
		case 0x00000035:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000037:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 0x00000001;
			break;
		
		case 0x00000038:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 0x00000001;
			break;
		
		case 0x00000039:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 0x00000001;
			break;
		
		case 0x0000003D:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 0x00000001;
			break;
		
		case 0x0000003E:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 0x00000001;
			break;
		
		case 0x0000003F:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 0x00000001;
			break;
		
		case 0x00000044:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000045:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 0x00000001;
			break;
		
		case 0x00000040:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 0x00000001;
			break;
		
		case 0x00000036:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 0x00000001;
			break;
		
		case 0x00000041:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 0x00000001;
			break;
		
		case 0x00000046:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000047:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000048:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		case 0x00000049:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

var func_181()
{
	var uVar0;
	
	func_191(&uVar0, unk_0x4460E481B9E33ADA());
	func_190(&uVar0, unk_0x8D199E381D262EEF());
	func_189(&uVar0, unk_0xD8A54335F18763BA());
	func_184(&uVar0, unk_0x972A296334C9D57B());
	func_183(&uVar0, unk_0x118229AD063C3C1D());
	func_182(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_182(var uParam0, int iParam1)
{
	if (iParam1 <= 0x00000000)
	{
		return;
	}
	if (iParam1 > 0x000007FB || iParam1 < 0x000007BB)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x7C000000);
	if (iParam1 < 0x000007DB)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((0x000007DB - iParam1), 0x0000001A));
		*uParam0 |= 0x80000000;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 0x000007DB), 0x0000001A));
		*uParam0 = (*uParam0 - *uParam0 & 0x80000000);
	}
}

void func_183(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_184(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_188(*uParam0);
	iVar1 = func_186(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_185(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

int func_185(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000)
	{
		iParam1 = 0x00000000;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000002:
		case 0x00000004:
		case 0x00000006:
		case 0x00000007:
		case 0x00000009:
		case 0x0000000B:
			return 0x0000001F;
			break;
		
		case 0x00000003:
		case 0x00000005:
		case 0x00000008:
		case 0x0000000A:
			return 0x0000001E;
			break;
		
		case 0x00000001:
			if ((iParam1 % 0x00000004) == 0x00000000)
			{
				if ((iParam1 % 0x00000064) != 0x00000000)
				{
					return 0x0000001D;
				}
				else if ((iParam1 % 0x00000190) == 0x00000000)
				{
					return 0x0000001D;
				}
			}
			return 0x0000001C;
			break;
	}
	return 0x0000001E;
}

var func_186(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_187(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_187(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_188(var uParam0)
{
	return uParam0 & 0x0000000F;
}

void func_189(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_190(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_191(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

void func_192(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 0x0000005E)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		iVar1 = Global_1B416.f_4860[iVar0];
		if ((((iVar1 == 0x00000008 || iVar1 == 0x00000009) || iVar1 == 0x0000000A) || (((iVar1 == 0x0000000B || iVar1 == 0x00000022) || iVar1 == 0x00000048) || iVar1 == 0x00000049)) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[0x00000000], 0x00000009))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_180(Global_1B416.f_4860[iVar0], &vVar2, &fVar3))
			{
				Global_1B416.f_4860[iVar0] = 0x0000013E;
				func_193(&(uParam0->f_8F8[iVar0]));
				uParam0->f_8FC[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_906[iVar0] = 0f;
				uParam0->f_90A[iVar0] = 0x00000000;
				uParam0->f_90E[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_918[iVar0] = 0x00000000;
				Global_17786[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_9 = 0f;
				Global_17786[iVar0 /*29*/].f_C = 0f;
				Global_17786[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_A = 0f;
				Global_17786[iVar0 /*29*/].f_D = 0f;
				Global_17786[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_B = 0f;
				Global_17786[iVar0 /*29*/].f_E = 0f;
				Global_17786[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_1A = 0f;
				Global_17786[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_1B = 0f;
				Global_17786[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_193(var uParam0)
{
	*uParam0 = 0xFFFFFFF1;
}

void func_194(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

int func_195()
{
	if (func_3(0x00000000))
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

int func_196(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	
	if (!iParam0->f_27)
	{
		if (iParam0->f_7 == 0x00000004)
		{
			return 0x00000001;
		}
	}
	if ((!unk_0xEB6A8945D1AC98A1((*iParam0)[iParam0->f_7]) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && (*iParam0)[iParam0->f_7] != unk_0x16F2683693E537C9())
	{
		if (!bParam2)
		{
			if ((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) && !unk_0x4E861BC5B1EDA7BD(unk_0x16F2683693E537C9())) && !unk_0x81A5359F25512A04(unk_0x16F2683693E537C9()))
			{
				unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			}
			else
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			}
			if ((unk_0x869EFD0BC0868856((*iParam0)[iParam0->f_7]) && !unk_0x4E861BC5B1EDA7BD((*iParam0)[iParam0->f_7])) && !unk_0x81A5359F25512A04((*iParam0)[iParam0->f_7]))
			{
				unk_0x327AAEE25F323797((*iParam0)[iParam0->f_7]);
			}
			else
			{
				unk_0xA3BF0AA5A2608191((*iParam0)[iParam0->f_7]);
			}
		}
		iVar0 = unk_0x16F2683693E537C9();
		iVar1 = func_100();
		if (!iParam0->f_17)
		{
			func_245(iVar0, 0x00000000);
		}
		func_243(iVar1, &iVar0);
		unk_0x4E885A246A9D983A(iVar0, 0x00000020, 0x00000001);
		unk_0x4E885A246A9D983A(iVar0, 0x000000FA, 0x00000001);
		iVar2 = func_242(iParam0->f_7);
		func_245((*iParam0)[iParam0->f_7], 0x00000000);
		fVar3 = (((SYSTEM::TO_FLOAT(unk_0x7F6DC62EA9922664((*iParam0)[iParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(unk_0x65BC0B7172CA52DD((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
		switch (func_103(unk_0x16F2683693E537C9()))
		{
			case 0x00000000:
				if (unk_0xED4934AFB6EC6451("BulletTime"))
				{
					unk_0x9A1335ECD7BD117F("BulletTime");
				}
				if (unk_0xED4934AFB6EC6451("BulletTimeOut"))
				{
					unk_0x9A1335ECD7BD117F("BulletTimeOut");
				}
				break;
			
			case 0x00000001:
				if (unk_0xED4934AFB6EC6451("DrivingFocus"))
				{
					unk_0x9A1335ECD7BD117F("DrivingFocus");
				}
				if (unk_0xED4934AFB6EC6451("DrivingFocusOut"))
				{
					unk_0x9A1335ECD7BD117F("DrivingFocusOut");
				}
				break;
			
			case 0x00000002:
				if (unk_0xED4934AFB6EC6451("REDMIST"))
				{
					unk_0x9A1335ECD7BD117F("REDMIST");
				}
				if (unk_0xED4934AFB6EC6451("REDMISTOut"))
				{
					unk_0x9A1335ECD7BD117F("REDMISTOut");
				}
				break;
		}
		if (func_102(func_100()))
		{
			if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
			}
		}
		unk_0xA9B99C3482AC0D20(unk_0xD803B885F5E47A62(), (*iParam0)[iParam0->f_7], bParam2, 0x00000000);
		unk_0x3584F71E5CA29322(0x00000003);
		unk_0x3584F71E5CA29322(0x0000000D);
		if (iParam3 & 0x00000001 != 0x00000000)
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000D2, 0x00000000);
		}
		if (func_241(0x00000000) || func_241(0x00000003))
		{
			if (Global_56C3.f_D)
			{
				iVar4 = 0x00000000;
				while (iVar4 < 0x00000007)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_15D98[iVar4 /*5*/].f_1, 0x00000002))
					{
						iVar5 = Global_15D98[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_15DBC[Global_12C5B.f_6D[iVar5 /*4*/] /*34*/]), 64);
						unk_0x9505C13496579D28(unk_0x12AB0310C2281427(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_56C3.f_D = 0x00000000;
		iParam0->f_5 = func_240(iVar1);
		if (iParam0->f_5 == 0x00000004)
		{
			iParam0->f_5 = 0x00000003;
		}
		(*iParam0)[iParam0->f_5] = iVar0;
		(*iParam0)[iParam0->f_7] = 0x00000000;
		iParam0->f_6 = func_240(iVar2);
		iParam0->f_7 = 0x00000004;
		iVar7 = unk_0x16F2683693E537C9();
		unk_0x4A4806F9D471E491(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
		func_239(iVar7);
		unk_0x1160BAA065E2C9E5(iVar7, 0x00000000, 0x00000000);
		if (fVar3 < 25f && !unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
		{
			unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(unk_0x65BC0B7172CA52DD(unk_0x16F2683693E537C9())) - 100f)) + 100f)), 0x00000000);
		}
		if (bParam1)
		{
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				unk_0x4A4806F9D471E491(iVar0, 0x00000001, 0x00000000);
				func_239(iVar0);
				unk_0x1160BAA065E2C9E5(iVar0, 0x00000000, 0x00000000);
				unk_0x6E8BDA9057564534(iVar0, 0x00000000, 0x00000000);
			}
		}
		else if (unk_0xC844350D5D58C99A(iVar0))
		{
			sVar9 = unk_0xA712FAE854841798(iVar0, &uVar8);
			if (!unk_0x2EBF5002C6B6A06C(sVar9))
			{
				if (!unk_0x7F8A39872A07D2CE(sVar9, unk_0xBB0808A181D4745C()))
				{
					unk_0x73270B3C9CC833FD(iVar0, 0x00000000, 0x00000001);
				}
				unk_0xEBA53F35D0085654(&iVar0);
			}
		}
		Global_1771A = 0x00000001;
		func_237(unk_0x16F2683693E537C9());
		func_236();
		func_235(iVar2);
		func_226();
		func_220(iVar2);
		func_203(func_218(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000091, 0x00000000));
		unk_0x324CFDE7809E2EC2(unk_0xD803B885F5E47A62());
		unk_0x7980D72D61BEF4D5(unk_0x16F2683693E537C9(), 0x00000000);
		unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0x00000001);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x27E404AD7AC8083F(unk_0xD803B885F5E47A62(), func_330(0x00000043));
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0xE21702DBF1967A40(unk_0xD803B885F5E47A62(), func_330(0x00000044));
		}
		func_200(iVar2, &iVar7);
		if (((func_325(0x00000000) || func_325(0x00000003)) || func_325(0x00000002)) || func_325(0x00000004))
		{
			unk_0x4E885A246A9D983A(iVar7, 0x00000020, 0x00000000);
			unk_0x4E885A246A9D983A(iVar7, 0x000000FA, 0x00000000);
		}
		else
		{
			unk_0x4E885A246A9D983A(iVar7, 0x00000020, 0x00000001);
			unk_0x4E885A246A9D983A(iVar7, 0x000000FA, 0x00000001);
		}
		if (!func_199())
		{
			func_197();
		}
		Global_175AF = 0x00000000;
		return 0x00000001;
	}
	else
	{
		if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
		}
		if (unk_0xEB6A8945D1AC98A1((*iParam0)[iParam0->f_7]))
		{
		}
		if (unk_0x16F2683693E537C9() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0x00000000;
}

void func_197()
{
	if (Global_17738)
	{
		func_101();
		unk_0x9BF51DDC898CF6FE(func_198(Global_1B416.f_936.f_21B.f_10E1));
	}
	else
	{
		unk_0x9BF51DDC898CF6FE("");
	}
}

char* func_198(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

bool func_199()
{
	return Global_56C1;
}

void func_200(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_201(0x00000004, *iParam1);
			func_201(0x00000007, *iParam1);
			func_201(0x00000008, *iParam1);
			func_201(0x0000000B, *iParam1);
			break;
		
		case 0x00000001:
			if (Global_1B416.f_2378.f_14A[0x00000002 /*6*/])
			{
				func_201(0x00000004, *iParam1);
			}
			func_201(0x00000007, *iParam1);
			func_201(0x00000008, *iParam1);
			func_201(0x0000000B, *iParam1);
			if (Global_1B416.f_2378.f_63.f_3A[0x0000007E])
			{
				func_201(0x0000000C, *iParam1);
			}
			break;
		
		case 0x00000002:
			if (Global_1B416.f_2378.f_14A[0x00000014 /*6*/])
			{
				func_201(0x00000004, *iParam1);
			}
			func_201(0x00000007, *iParam1);
			func_201(0x00000008, *iParam1);
			func_201(0x0000000B, *iParam1);
			break;
	}
}

void func_201(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam1))
	{
		return;
	}
	if (func_202(iParam0, iParam1))
	{
		return;
	}
	if (Global_9E6A[iParam0 /*31*/].f_18 < 0x00000005)
	{
		Global_9E6A[iParam0 /*31*/].f_19[Global_9E6A[iParam0 /*31*/].f_18] = iParam1;
		Global_9E6A[iParam0 /*31*/].f_18++;
	}
	else
	{
		bVar2 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000005)
		{
			iVar1 = Global_9E6A[iParam0 /*31*/].f_19[iVar0];
			if (!unk_0xC844350D5D58C99A(iVar1) || unk_0xEB6A8945D1AC98A1(iVar1))
			{
				Global_9E6A[iParam0 /*31*/].f_19[iVar0] = iParam1;
				bVar2 = 0x00000001;
				iVar0 = 0x00000006;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

int func_202(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Global_9E6A[iParam0 /*31*/].f_18)
	{
		if (iParam1 == Global_9E6A[iParam0 /*31*/].f_19[iVar0])
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_203(int iParam0)
{
	if (iParam0 == 0x0000000A)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x5D96D8530B3D0904(&(Global_9162[(0x00000026 / 0x00000020)]), (0x00000026 % 0x00000020));
			func_204(0x00000026, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_9162[(0x00000029 / 0x00000020)]), (0x00000029 % 0x00000020));
			func_204(0x00000029, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_9162[(0x0000002B / 0x00000020)]), (0x0000002B % 0x00000020));
			func_204(0x0000002B, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_9162[(0x0000002A / 0x00000020)]), (0x0000002A % 0x00000020));
			func_204(0x0000002A, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_9162[(0x0000002C / 0x00000020)]), (0x0000002C % 0x00000020));
			func_204(0x0000002C, 0x00000000);
			break;
		
		case 0x00000001:
			unk_0x5D96D8530B3D0904(&(Global_9162[(0x00000033 / 0x00000020)]), (0x00000033 % 0x00000020));
			func_204(0x00000033, 0x00000000);
			break;
		
		case 0x00000002:
			unk_0x5D96D8530B3D0904(&(Global_9162[(0x00000033 / 0x00000020)]), (0x00000033 % 0x00000020));
			func_204(0x00000033, 0x00000000);
			break;
		
		case 0x00000003:
			unk_0x5D96D8530B3D0904(&(Global_9162[(0x00000035 / 0x00000020)]), (0x00000035 % 0x00000020));
			func_204(0x00000035, 0x00000000);
			break;
		
		case 0x00000004:
			unk_0x5D96D8530B3D0904(&(Global_9162[(0x00000051 / 0x00000020)]), (0x00000051 % 0x00000020));
			func_204(0x00000051, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_9162[(0x00000052 / 0x00000020)]), (0x00000052 % 0x00000020));
			func_204(0x00000052, 0x00000000);
			break;
		
		case 0x00000005:
			unk_0x5D96D8530B3D0904(&(Global_9162[(0x0000002F / 0x00000020)]), (0x0000002F % 0x00000020));
			func_204(0x0000002F, 0x00000000);
			unk_0x5D96D8530B3D0904(&(Global_9162[(0x00000032 / 0x00000020)]), (0x00000032 % 0x00000020));
			func_204(0x00000032, 0x00000000);
			break;
		
		case 0x00000006:
			unk_0x5D96D8530B3D0904(&(Global_9162[(0x00000032 / 0x00000020)]), (0x00000032 % 0x00000020));
			func_204(0x00000032, 0x00000000);
			break;
	}
}

void func_204(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 0x000000E2)
	{
		if (Global_12B4E)
		{
			iVar0 = Global_2537E2.f_4B[iParam0];
		}
		else
		{
			iVar0 = Global_1B416.f_1C58[iParam0];
		}
		if (iVar0 != iParam1 || unk_0xEAE0D21A50E6C7F4(Global_9162[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
		{
			if ((((iParam1 == 0x00000004 || iParam1 == 0x00000003) || iParam1 == 0x00000005) || iParam1 == 0x00000006) || iParam1 == 0x00000002)
			{
				unk_0x5D96D8530B3D0904(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
				Global_933A[iParam0] = iParam1;
			}
			else if (Global_12B4E)
			{
				Global_2537E2.f_4B[iParam0] = iParam1;
			}
			else
			{
				Global_1B416.f_1C58[iParam0] = iParam1;
			}
			unk_0x5D96D8530B3D0904(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
			func_206(iParam0);
			if (unk_0xEAE0D21A50E6C7F4(Global_9162[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
			{
				func_205(iParam0);
			}
		}
	}
}

void func_205(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_9511.f_E4[(iParam0 / 0x00000020)], (iParam0 % 0x00000017)))
	{
		unk_0x5D96D8530B3D0904(&(Global_9511.f_E4[(iParam0 / 0x00000020)]), (iParam0 % 0x00000017));
		Global_9511[Global_9511.f_E3] = iParam0;
		Global_9511.f_E3++;
	}
}

void func_206(int iParam0)
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_215())
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	Var0 = { func_214(iParam0) };
	if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000002))
	{
		func_211(iParam0, &Var0);
	}
	if (!unk_0x76395FF5E8D5E643(Var0.f_5))
	{
		if (unk_0x22A8E52414415B76())
		{
			return;
		}
	}
	bVar1 = 0x00000000;
	bVar2 = 0x00000000;
	fVar4 = unk_0x0EB28750412C3A5A(Var0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000001);
	if ((unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) && Global_933A[iParam0] == 0x00000002) && fVar4 > 210f)
	{
		unk_0x0674E58A79778E99(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		Global_9174[iParam0] = 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(joaat("startup_positioning")) == 0x00000000)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_9257[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
		{
			if (fVar4 < 25f)
			{
				if (Global_181EC.f_157 == 0x00000000)
				{
					if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
					{
						Global_181EC.f_157 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
					}
				}
				iVar5 = Global_181EC.f_157;
				iVar6 = unk_0xFBD08BECC9B87937(Var0);
				if (iVar5 == iVar6 && iVar5 != 0x00000000)
				{
					unk_0x5D96D8530B3D0904(&(Global_916B[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
					Global_933A[iParam0] = 0x00000003;
					unk_0x5D96D8530B3D0904(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
				}
			}
			unk_0x0674E58A79778E99(&(Global_9257[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
	{
		iVar3 = Global_933A[iParam0];
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000000))
	{
		if (Global_1B416.f_2378)
		{
			iVar3 = func_208(iParam0);
		}
		else
		{
			iVar3 = 0x00000000;
		}
		if (func_325(0x0000000E))
		{
			iVar3 = 0x00000000;
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000001) && unk_0x8A22C4C08282BF26(joaat("ambient_solomon")) == 0x00000000)
	{
		if (func_207())
		{
			iVar3 = 0x00000000;
		}
		else
		{
			iVar3 = 0x00000001;
		}
	}
	else
	{
		iVar3 = Global_1B416.f_1C58[iParam0];
	}
	if (Global_941D[iParam0] != iVar3)
	{
		bVar1 = 0x00000001;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_9162[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) || (Global_9174[iParam0] == 0x00000000 && Global_933A[iParam0] != 0x00000002))
		{
			bVar1 = 0x00000001;
		}
	}
	if (bVar1)
	{
		if (!Global_9161)
		{
		}
		else
		{
			if (!unk_0x76395FF5E8D5E643(Var0.f_5))
			{
				unk_0x8010B3127F058F0F(Var0.f_5, Var0.f_3, Var0, 0x00000000, 0x00000000, 0x00000000);
			}
			switch (iVar3)
			{
				case 0x00000001:
					if (unk_0xEAE0D21A50E6C7F4(Var0.f_4, 0x00000003))
					{
						bVar7 = 0x00000001;
					}
					else if (fVar4 > 3f || unk_0x755FF954DAE327E1(unk_0x9CED8DAD53D1A397(Var0.f_5)) <= 0.015f)
					{
						iVar8 = unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9());
						iVar9 = unk_0xFBD08BECC9B87937(Var0);
						if (iVar8 != iVar9 || iVar8 == 0x00000000)
						{
							bVar7 = 0x00000001;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
						}
						unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
						bVar2 = 0x00000001;
					}
					break;
				
				case 0x00000004:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000002:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000000:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000001);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000003:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, 0x00000000, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000005:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				case 0x00000006:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						unk_0xD3356E7C68990256(Var0.f_5, Var0.f_6, 0x00000000, 0x00000000);
					}
					unk_0x1BA7FCEAFCE8D46E(Var0.f_5, iVar3, 0x00000000, 0x00000001);
					bVar2 = 0x00000001;
					break;
				}
		}
		if (bVar2)
		{
			unk_0x0674E58A79778E99(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
			Global_941D[iParam0] = iVar3;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_916B[(iParam0 / 0x00000020)], (iParam0 % 0x00000020)) && Global_933A[iParam0] != 0x00000002)
	{
		unk_0x5D96D8530B3D0904(&(Global_9162[(iParam0 / 0x00000020)]), (iParam0 % 0x00000020));
		func_205(iParam0);
		if (Global_9174[iParam0] < 0x00000002)
		{
			Global_9174[iParam0]++;
		}
	}
}

int func_207()
{
	if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		return 0x00000000;
	}
	switch (func_100())
	{
		case 0x00000000:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000041])
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000042])
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (Global_1B416.f_2378.f_63.f_3A[0x00000041])
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = func_100();
	if (func_209(iParam0))
	{
		return 0x00000001;
	}
	if (iParam0 == 0x00000031)
	{
		if (iVar0 == 0x00000001)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000005], 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000006], 0x00000000))
			{
				return 0x00000000;
			}
		}
		if (func_102(iVar0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000005], iVar0))
			{
				return 0x00000000;
			}
		}
	}
	switch (iParam0)
	{
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			if (iVar0 == 0x00000000)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000000], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_102(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000000], iVar0))
				{
					if (iParam0 != 0x00000028)
					{
						return 0x00000000;
					}
					else
					{
						return 0x00000001;
					}
				}
			}
			break;
		
		case 0x0000002F:
		case 0x00000030:
		case 0x00000031:
			if (iVar0 == 0x00000001)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000005], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_102(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000005], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000032:
			if (iVar0 == 0x00000001)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000006], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_102(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000006], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000033:
		case 0x00000034:
			if (iVar0 == 0x00000002)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000002], 0x00000000))
				{
					return 0x00000000;
				}
				if (func_102(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000002], iVar0))
					{
						return 0x00000000;
					}
				}
			}
			else if (iVar0 == 0x00000000)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000001], 0x00000000))
				{
					return 0x00000000;
				}
				if (func_102(iVar0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000001], iVar0))
					{
						return 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000035:
			if (iVar0 == 0x00000002)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[0x00000003], 0x00000000))
				{
					return 0x00000000;
				}
			}
			if (func_102(iVar0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_16E4B[0x00000003], iVar0))
				{
					return 0x00000000;
				}
			}
			break;
		
		default:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

int func_209(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 0x00000028 || iParam0 == 0x00000031) || iParam0 == 0x00000034)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				iVar0 = unk_0x134B62B726CEC8E6(func_210(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 0x00000001;
						break;
					}
				}
			}
	}
	return 0x00000000;
}

int func_210(int iParam0)
{
	return iParam0;
}

void func_211(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(uParam1->f_4, 0x00000002))
	{
		return;
	}
	iVar0 = func_181();
	iVar1 = func_213(iVar0);
	switch (iParam0)
	{
		case 0x00000085:
		case 0x00000086:
		case 0x000000C9:
		case 0x000000CA:
			if (func_212(iParam0))
			{
				if (iVar1 < 0x00000013)
				{
					if (iVar1 >= 0x00000007)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000013)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000007)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000C7:
		case 0x000000C8:
		case 0x000000CB:
		case 0x000000CC:
			if (func_212(iParam0))
			{
				if (iVar1 < 0x00000012)
				{
					if (iVar1 >= 0x00000007)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000012)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000007)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 12f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x0000008D:
		case 0x0000008E:
			if (func_212(iParam0))
			{
				if ((unk_0x8A22C4C08282BF26(joaat("jewelry_heist")) == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("jewelry_setup1")) == 0x00000000) && !Global_1B416.f_2378.f_63.f_3A[0x00000004])
				{
					if (iVar1 < 0x00000015)
					{
						if (iVar1 >= 0x00000007)
						{
							Global_1B416.f_1C58[iParam0] = 0x00000000;
							unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_1B416.f_2378.f_63.f_3A[0x00000004])
				{
					Global_1B416.f_1C58[iParam0] = 0x00000000;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (Global_1B416.f_2378.f_63.f_3A[0x00000004])
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			else if (unk_0x8A22C4C08282BF26(joaat("jewelry_heist")) == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("jewelry_setup1")) == 0x00000000)
			{
				if (iVar1 >= 0x00000015)
				{
					if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 18f)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000001;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else if (iVar1 < 0x00000007)
				{
					if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 18f)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000001;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
			}
			break;
		
		case 0x00000091:
		case 0x00000092:
		case 0x0000008F:
		case 0x00000090:
			if (func_212(iParam0))
			{
				if (iVar1 < 0x00000014)
				{
					if (iVar1 >= 0x00000009)
					{
						Global_1B416.f_1C58[iParam0] = 0x00000000;
						unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 0x00000014)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 40f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (iVar1 < 0x00000009)
			{
				if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), *uParam1) >= 40f)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000093:
		case 0x00000094:
			if (!func_212(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x00000098:
		case 0x00000099:
		case 0x0000009A:
		case 0x0000009B:
		case 0x0000009C:
		case 0x0000009D:
			if (!func_212(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(joaat("assassin_valet")) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else if (unk_0x8A22C4C08282BF26(joaat("assassin_valet")) > 0x00000000)
			{
				Global_1B416.f_1C58[iParam0] = 0x00000000;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x0000009E:
		case 0x0000009F:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000046 /*34*/].f_6) == 0x00000000)
			{
				if (!func_212(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000A0:
		case 0x000000A1:
			if (unk_0x8A22C4C08282BF26(joaat("omega2")) == 0x00000000)
			{
				if (!func_212(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
			if (!func_212(iParam0) && unk_0x8A22C4C08282BF26(Global_15DBC[0x0000001A /*34*/].f_6) == 0x00000000)
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			else
			{
				return;
			}
			break;
		
		case 0x00000065:
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
			if (!func_212(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000002B /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000BE:
		case 0x000000BF:
			if (!func_212(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000C1:
			if (!func_212(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000005D /*34*/].f_6) > 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000C6:
			if (!func_212(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x00000050:
			if (!func_212(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000008 /*34*/].f_6) == 0x00000000 && unk_0x8A22C4C08282BF26(Global_15DBC[0x0000000A /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000CD:
		case 0x000000CE:
			if (!func_212(iParam0))
			{
				if (unk_0x8A22C4C08282BF26(Global_15DBC[0x0000002F /*34*/].f_6) == 0x00000000)
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 0x000000CF:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000046 /*34*/].f_6) == 0x00000000)
			{
				if (!func_212(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000D0:
		case 0x000000D1:
		case 0x000000D3:
		case 0x000000D2:
		case 0x000000D4:
		case 0x000000D5:
		case 0x000000D6:
		case 0x000000D7:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000030 /*34*/].f_6) == 0x00000000)
			{
				if (!func_212(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000063:
		case 0x00000064:
			if (unk_0x8A22C4C08282BF26(Global_15DBC[0x00000027 /*34*/].f_6) == 0x00000000)
			{
				if (!func_212(iParam0))
				{
					Global_1B416.f_1C58[iParam0] = 0x00000001;
					unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x000000D8:
			if (!func_212(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000D9:
		case 0x000000DA:
			if (!func_212(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000001;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
		
		case 0x000000DB:
		case 0x000000DC:
		case 0x000000DD:
		case 0x000000DE:
			if (func_212(iParam0))
			{
				Global_1B416.f_1C58[iParam0] = 0x00000000;
				unk_0x1BA7FCEAFCE8D46E(uParam1->f_5, Global_1B416.f_1C58[iParam0], 0x00000001, 0x00000001);
			}
			break;
	}
}

bool func_212(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_214(iParam0) };
	iVar1 = unk_0x51D3DB30DC0C68AD(Var0.f_5);
	return ((iVar1 == 0x00000001 || iVar1 == 0x00000004) || iVar1 == 0x00000002);
}

int func_213(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

struct<7> func_214(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 0x6B918EA1;
			break;
		
		case 0x00000001:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 0x53A940AB;
			break;
		
		case 0x00000002:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = 0x86EF4558;
			break;
		
		case 0x00000003:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 0x6B1985F9;
			break;
		
		case 0x00000004:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 0x05BB2ED2;
			break;
		
		case 0x00000005:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = 0xEF3F0B86;
			break;
		
		case 0x00000006:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 0x0AEC2A1A;
			break;
		
		case 0x00000007:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 0x2D336EA8;
			break;
		
		case 0x00000008:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = 0xC04458CF;
			break;
		
		case 0x00000009:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 0x75554302;
			break;
		
		case 0x0000000A:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = 0x8039A343;
			break;
		
		case 0x0000000B:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = 0xAC597B82;
			break;
		
		case 0x0000000C:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = 0x8BC342BA;
			break;
		
		case 0x0000000D:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 0x49173D5F;
			break;
		
		case 0x0000000E:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 0x4104CC95;
			break;
		
		case 0x0000000F:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 0x357C3584;
			break;
		
		case 0x00000010:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 0x4152D190;
			break;
		
		case 0x00000011:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 0x2FCD2E89;
			break;
		
		case 0x00000012:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = 0xF5FC937D;
			break;
		
		case 0x00000013:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = 0x8C9DC0BD;
			break;
		
		case 0x00000014:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 0x70B93241;
			break;
		
		case 0x00000015:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 0x49B4E441;
			break;
		
		case 0x00000016:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 0x7610BDED;
			break;
		
		case 0x00000017:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 0x50A152BD;
			break;
		
		case 0x00000018:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = 0xDE3B10AB;
			break;
		
		case 0x00000019:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 0x4C93B88A;
			break;
		
		case 0x0000001A:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 0x0F9B8B5A;
			break;
		
		case 0x0000001B:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 0x0CF90621;
			break;
		
		case 0x0000001C:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 0x6B5B357A;
			break;
		
		case 0x0000001D:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = 0x817161A6;
			break;
		
		case 0x0000001E:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 0x4E3E0F3D;
			break;
		
		case 0x0000001F:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = 0xDC882BD3;
			break;
		
		case 0x00000020:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = 0xF030709F;
			break;
		
		case 0x00000021:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = 0xB36A7A60;
			break;
		
		case 0x00000022:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 0x1204D709;
			break;
		
		case 0x00000023:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = 0xD75B3EC1;
			break;
		
		case 0x00000024:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = 0x83A1ACAC;
			break;
		
		case 0x00000025:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = 0xA6CEF378;
			break;
		
		case 0x00000026:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x8301B653;
			break;
		
		case 0x00000027:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x813232B0;
			break;
		
		case 0x00000028:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x899722D3;
			Var0.f_6 = 6.5f;
			break;
		
		case 0x00000029:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x2E413ABC;
			break;
		
		case 0x0000002A:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x29A1143B;
			break;
		
		case 0x0000002B:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x1FE49E03;
			break;
		
		case 0x0000002C:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x1C4AF98F;
			break;
		
		case 0x0000002D:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x8A139784;
			break;
		
		case 0x0000002E:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x9AA652E9;
			break;
		
		case 0x0000002F:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x249850A4;
			break;
		
		case 0x00000030:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xEFC0E6F6;
			break;
		
		case 0x00000031:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xC1F88B66;
			break;
		
		case 0x00000032:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x479926FE;
			break;
		
		case 0x00000033:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0x677EC742;
			break;
		
		case 0x00000034:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 0x4265A13E;
			Var0.f_6 = 12f;
			break;
		
		case 0x00000035:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000000);
			Var0.f_5 = 0xAED75F6A;
			break;
	}
	switch (iParam0)
	{
		case 0x00000036:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = 0x90799222;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000037:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 0x459F7C6B;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000038:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 0x47E780FF;
			Var0.f_6 = 25f;
			break;
		
		case 0x00000039:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = 0xC21E9E89;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003A:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 0x478DA961;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003B:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 0x52E90A75;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003C:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = 0xE4A12DDF;
			Var0.f_6 = 25f;
			break;
		
		case 0x000000E1:
			Var0.f_3 = 0xE684E276;
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = 0xEEC9CEC1;
			Var0.f_6 = 25f;
			break;
		
		case 0x0000003D:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = 0xF0F6743C;
			break;
		
		case 0x0000003E:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = 0xCEC320E2;
			break;
		
		case 0x0000003F:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 0x2D865E67;
			break;
		
		case 0x00000040:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = 0xCBDAD417;
			break;
		
		case 0x00000041:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = 0xA7BC7A3B;
			break;
		
		case 0x00000042:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 0x38968F6D;
			break;
		
		case 0x00000043:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 0x0CA5CE57;
			break;
		
		case 0x00000044:
			Var0.f_3 = 0xB7B3D4C7;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = 0xF8762600;
			break;
		
		case 0x00000045:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 0x693E01A8;
			break;
		
		case 0x00000046:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 0x2F397905;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000047:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 0x2192DDB8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000048:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = 0xD4AAF76D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000049:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 0x0A9F8B6B;
			break;
		
		case 0x0000004A:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 0x6E67D2FA;
			break;
		
		case 0x0000004B:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = 0xDE5262E2;
			break;
		
		case 0x0000004C:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 0x621E986A;
			break;
		
		case 0x0000004D:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 0x0C2FEC8E;
			break;
		
		case 0x0000004E:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 0x7A03D0CA;
			break;
		
		case 0x0000004F:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 0x548188CD;
			break;
		
		case 0x00000050:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = 0xF9A7537E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000051:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 0x6DB3F686;
			break;
		
		case 0x00000052:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 0x526C3FF3;
			break;
		
		case 0x00000053:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 0x0DDC38EF;
			break;
		
		case 0x00000054:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 0x4B88A611;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x00000055:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = 0x8EBCAB6D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x00000056:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 0x7BDA4229;
			break;
		
		case 0x00000057:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = 0x82B4D16A;
			break;
		
		case 0x00000058:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = 0x8E67E744;
			break;
		
		case 0x00000059:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = 0x94E375C7;
			break;
		
		case 0x0000005A:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = 0xFC4A5DE1;
			break;
		
		case 0x0000005B:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = 0x990D333D;
			break;
		
		case 0x0000005C:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = 0xDE752237;
			break;
		
		case 0x0000005D:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 0x75CDECBF;
			break;
		
		case 0x0000005E:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 0x4FEEAB87;
			break;
		
		case 0x0000005F:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = 0x9EC1C92C;
			break;
		
		case 0x00000060:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = 0x956610D7;
			break;
		
		case 0x00000061:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = 0x92D8C222;
			break;
		
		case 0x00000062:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 0x39739866;
			break;
		
		case 0x00000063:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 0x69AF302C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000064:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = 0xB099BE68;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000065:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = 0x9402ADFE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000066:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 0x5FDFC5B9;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000067:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = 0xA936772C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000068:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 0x3842153D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000069:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = 0xFAB0F874;
			break;
		
		case 0x0000006A:
			Var0.f_3 = 0x1C8F29BC;
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = 0xC8D61D80;
			break;
		
		case 0x0000006B:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 0x7733A113;
			break;
		
		case 0x0000006C:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 0x7733A113;
			break;
		
		case 0x0000006D:
			Var0.f_3 = 0xB6A8EEEE;
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 0x5BB47EBE;
			break;
		
		case 0x0000006E:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = 0xC6A92236;
			break;
		
		case 0x0000006F:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = 0x965A35F0;
			break;
		
		case 0x00000070:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = 0xFD3C6106;
			break;
		
		case 0x00000071:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = 0xEAA4BBD7;
			break;
		
		case 0x00000072:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = 0xB6369857;
			break;
		
		case 0x00000073:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 0x58A7877F;
			break;
		
		case 0x00000074:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = 0xF42192E5;
			break;
		
		case 0x00000075:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = 0xCA87C509;
			break;
		
		case 0x00000076:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = 0xCC794C91;
			break;
		
		case 0x00000077:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = 0xF3937748;
			break;
		
		case 0x00000078:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = 0xC45498DB;
			break;
		
		case 0x00000079:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 0x2D1D4AFB;
			break;
		
		case 0x0000007A:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 0x1C6E29AD;
			break;
		
		case 0x0000007B:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 0x7C136B13;
			break;
		
		case 0x0000007C:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 0x7C136B13;
			break;
		
		case 0x0000007D:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 0x0A21772D;
			break;
		
		case 0x0000007E:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 0x128D0804;
			break;
		
		case 0x00000080:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = 0xA2D4904F;
			break;
		
		case 0x00000081:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 0x2D3FA523;
			break;
		
		case 0x00000082:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = 0xFAF82BB5;
			break;
		
		case 0x00000083:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = 0xE477FEB5;
			break;
		
		case 0x0000007F:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 0x4B0BD273;
			break;
		
		case 0x00000084:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = 0xCB4E72F0;
			break;
		
		case 0x00000085:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 0x0E87D246;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000086:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 0x2A908A2B;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000087:
			Var0.f_3 = 0xB965B659;
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 0x636D4AE0;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x00000088:
			Var0.f_3 = 0xB965B659;
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 0x5264F117;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x00000089:
			Var0.f_3 = 0x4951D513;
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = 0xC65FF0DC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x0000008A:
			Var0.f_3 = 0x4951D513;
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = 0x84B160CC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000001);
			break;
		
		case 0x0000008B:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = 0x99AFC840;
			break;
		
		case 0x0000008C:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 0x7FF114C7;
			break;
		
		case 0x0000008D:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 0x6FC17308;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000008E:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = 0x8AE0294D;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000091:
			Var0.f_3 = 0x9817FF83;
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 0x74523DE8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000092:
			Var0.f_3 = 0x9817FF83;
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = 0xE649A1DD;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000008F:
			Var0.f_3 = 0x0694BE16;
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = 0xEE7A4B56;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000090:
			Var0.f_3 = 0x0694BE16;
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = 0xD13290C7;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000094:
			Var0.f_3 = 0xF2C06AFF;
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = 0xEA2D16DE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000093:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 0x1A465DD3;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000095:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = 0xDCEC4675;
			break;
		
		case 0x00000096:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 0x6C36650B;
			break;
		
		case 0x00000097:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 0x5029B9A4;
			break;
		
		case 0x00000098:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = 0xECDF96A9;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x00000099:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 0x5A1B7123;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009A:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = 0xA5896609;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009B:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = 0xBED718A0;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009C:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 0x715EF4EC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009D:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = 0xE57D5D27;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009E:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 0x18156DFA;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x0000009F:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = 0xAB8314D3;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A0:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = 0xADFA9E01;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A1:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 0x1B447897;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000A2:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 0x3FE1BF2F;
			break;
		
		case 0x000000A3:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = 0x81B242D3;
			break;
		
		case 0x000000A5:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = 0xA7477017;
			break;
		
		case 0x000000A6:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = 0xE187E49B;
			break;
		
		case 0x000000A7:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = 0xF12F21CD;
			break;
		
		case 0x000000A8:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 0x3AF9B555;
			break;
		
		case 0x000000A9:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 0x78891D35;
			break;
		
		case 0x000000AA:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 0x26BB7997;
			break;
		
		case 0x000000AB:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 0x2008EB12;
			break;
		
		case 0x000000AC:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 0x42D7B0B3;
			break;
		
		case 0x000000AD:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = 0xAA5350AA;
			break;
		
		case 0x000000AE:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = 0xC7980B3B;
			break;
		
		case 0x000000AF:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 0x70D7184A;
			break;
		
		case 0x000000B0:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 0x19FA6A8E;
			break;
		
		case 0x000000B1:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 0x3889169A;
			break;
		
		case 0x000000B2:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = 0x94E84F57;
			break;
		
		case 0x000000B3:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = 0xBB245373;
			break;
		
		case 0x000000B4:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 0x2EA3BAA4;
			break;
		
		case 0x000000B5:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = 0xB8CDD26F;
			break;
		
		case 0x000000B6:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = 0x810F62F3;
			break;
		
		case 0x000000B7:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 0x3FE1BF2F;
			break;
		
		case 0x000000B8:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = 0x81B242D3;
			break;
		
		case 0x000000A4:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 0x58AC90B5;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x000000B9:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 0x5B2F1453;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000003);
			break;
		
		case 0x000000BA:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 0x35E72BCB;
			break;
		
		case 0x000000BB:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = 0xD096E0F4;
			break;
		
		case 0x000000BC:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = 0xA672520A;
			break;
		
		case 0x000000BD:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = 0x89231774;
			break;
		
		case 0x000000BE:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = 0xDAF08A77;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000BF:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 0x3CB64E01;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C0:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 0x19261549;
			break;
		
		case 0x000000C1:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = 0xB0A21F8A;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
	}
	switch (iParam0)
	{
		case 0x000000C4:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = 0xEE8704E3;
			break;
		
		case 0x000000C5:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 0x1E346455;
			break;
		
		case 0x000000C2:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 0x592B3B2A;
			break;
		
		case 0x000000C3:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = 0x90F3AAD6;
			break;
		
		case 0x000000C6:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = 0x87A9D9D8;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C7:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = 0xFA66AD40;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C8:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 0x27CC080E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000C9:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 0x6FDCB756;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CA:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = 0x82105BAD;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CD:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 0x7A01AE56;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CE:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 0x48084A64;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CF:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 0x76668DA5;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D0:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = 0xD4EAF676;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D1:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 0x0C2D650A;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D2:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = 0xECEB0B54;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D3:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 0x03E33904;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D4:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = 0xC9297F46;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D5:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = 0xFC8465FF;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D6:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = 0x8859D53B;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D7:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 0x18F5F685;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D8:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 0x64147F59;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000D9:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 0x1891A5FC;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DA:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = 0xC130F73C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DB:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = 0xFCD07A05;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DC:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 0x4F829F6C;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DD:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = 0xFD826383;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DE:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 0x6850B91E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000DF:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 0x630892AE;
			break;
		
		case 0x000000CB:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = 0x81DEA14E;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000CC:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = 0xFB9594BE;
			unk_0x5D96D8530B3D0904(&(Var0.f_4), 0x00000002);
			break;
		
		case 0x000000E0:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = 0x9C748513;
			break;
	}
	return Var0;
}

int func_215()
{
	if ((func_217() == 0xFFFFFFFF || func_217() == 0x000003E7) && !func_216() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_216()
{
	return Global_7831;
}

int func_217()
{
	return Global_7830;
}

int func_218(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 0x0000000A;
	iVar0 = 0x00000000;
	while (iVar0 <= (0x0000000A - 0x00000001))
	{
		if (Global_16E56[iVar0 /*10*/].f_7 != 0x00000107)
		{
			if (Global_16E56[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 0x00000091)
			{
				if (func_219(iVar0) || iParam2 == 0x00000000)
				{
					fVar1 = unk_0x0EB28750412C3A5A(vParam0, Global_16E56[iVar0 /*10*/].f_3, 0x00000001);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_219(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iParam0], 0x00000000);
}

void func_220(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		func_221(iParam0, iVar0);
		iVar0++;
	}
}

void func_221(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0x00000000 || iParam0 != 0x00000001) || iParam0 != 0x00000002) || iParam0 != 0x00000003)
	{
		return;
	}
	func_225(iParam0, iParam1, &iVar2, &iVar3);
	if (unk_0x8CD06866876216F2())
	{
		iVar0 = func_222(iVar3, 0xFFFFFFFF, 0x00000000);
	}
	else
	{
		unk_0x6FB46C25CCB7E6D5(iVar2, &iVar0, 0xFFFFFFFF);
	}
	switch (iParam1)
	{
		case 0x00000002:
			fVar1 = (0.8f + (0.4f * (SYSTEM::TO_FLOAT(iVar0) / 100f)));
			unk_0xF7599E37AEBF26E7(unk_0xD803B885F5E47A62(), fVar1, 0x00000001);
			break;
		
		case 0x00000007:
			if (unk_0x8A22C4C08282BF26(joaat("armenian3")) != 0x00000000 || unk_0x8A22C4C08282BF26(joaat("trevor3")) != 0x00000000)
			{
				Global_1771B = 0x00000001;
			}
			else
			{
				fVar1 = (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f));
				unk_0x0FFE8B6DB75A4C39(unk_0xD803B885F5E47A62(), fVar1);
				unk_0xE78BAF6C6D97879A(unk_0xD803B885F5E47A62(), fVar1);
				unk_0xEE195B25E889FD63(unk_0xD803B885F5E47A62(), fVar1);
			}
			break;
	}
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_223(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_223(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_224();
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

int func_224()
{
	return Global_1407E9;
}

void func_225(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 0x00000001:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 0x00000003:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 0x00000002:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 0x00000004:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 0x00000005:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 0x00000006:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 0x00000007:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 0x00000001:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 0x00000003:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 0x00000002:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 0x00000004:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 0x00000005:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 0x00000006:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 0x00000007:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 0x00000001:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 0x00000003:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 0x00000002:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 0x00000004:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 0x00000005:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 0x00000006:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 0x00000007:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000000:
					*uParam3 = 0x00000040;
					break;
				
				case 0x00000001:
					*uParam3 = 0x00000041;
					break;
				
				case 0x00000003:
					*uParam3 = 0x00000043;
					break;
				
				case 0x00000002:
					*uParam3 = 0x00000042;
					break;
				
				case 0x00000004:
					*uParam3 = 0x00000044;
					break;
				
				case 0x00000005:
					*uParam3 = 0x00000045;
					break;
				
				case 0x00000006:
					*uParam3 = 0x00000046;
					break;
				
				case 0x00000007:
					*uParam3 = 0x00000047;
					break;
			}
			break;
	}
}

void func_226()
{
	struct<50> Var0;
	
	if ((unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) || !func_102(func_100())) || !func_232())
	{
		return;
	}
	Var0 = 0x0000000C;
	Var0.f_D = 0x0000000C;
	Var0.f_1A = 0x0000000C;
	Var0.f_27 = 0x00000009;
	Var0.f_31 = 0x00000009;
	func_228(unk_0x16F2683693E537C9(), &Var0, 0x00000001, 0xFFFFFFFF);
	func_227(0x0000051A, Var0[0x00000000], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000051B, Var0[0x00000001], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000051C, Var0[0x00000002], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000051D, Var0[0x00000003], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000051E, Var0[0x00000004], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000051F, Var0[0x00000005], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000520, Var0[0x00000006], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000521, Var0[0x00000007], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000522, Var0[0x00000008], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000523, Var0[0x00000009], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000524, Var0[0x0000000A], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000525, Var0[0x0000000B], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000526, Var0.f_D[0x00000000], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000527, Var0.f_D[0x00000001], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000528, Var0.f_D[0x00000002], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000529, Var0.f_D[0x00000003], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000052A, Var0.f_D[0x00000004], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000052B, Var0.f_D[0x00000005], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000052C, Var0.f_D[0x00000006], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000052D, Var0.f_D[0x00000007], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000052E, Var0.f_D[0x00000008], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000052F, Var0.f_D[0x00000009], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000530, Var0.f_D[0x0000000A], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000531, Var0.f_D[0x0000000B], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000532, Var0.f_1A[0x00000000], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000533, Var0.f_1A[0x00000001], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000534, Var0.f_1A[0x00000002], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000535, Var0.f_1A[0x00000003], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000536, Var0.f_1A[0x00000004], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000537, Var0.f_1A[0x00000005], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000538, Var0.f_1A[0x00000006], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000539, Var0.f_1A[0x00000007], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000053A, Var0.f_1A[0x00000008], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000053B, Var0.f_1A[0x00000009], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000053C, Var0.f_1A[0x0000000A], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000053D, Var0.f_1A[0x0000000B], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000053E, Var0.f_27[0x00000000], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000053F, Var0.f_27[0x00000001], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000540, Var0.f_27[0x00000002], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000541, Var0.f_27[0x00000003], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000542, Var0.f_27[0x00000004], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000543, Var0.f_27[0x00000005], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000544, Var0.f_27[0x00000006], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000545, Var0.f_27[0x00000007], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000546, Var0.f_27[0x00000008], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000547, Var0.f_31[0x00000000], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000548, Var0.f_31[0x00000001], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000549, Var0.f_31[0x00000002], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000054A, Var0.f_31[0x00000003], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000054B, Var0.f_31[0x00000004], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000054C, Var0.f_31[0x00000005], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000054D, Var0.f_31[0x00000006], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000054E, Var0.f_31[0x00000007], 0xFFFFFFFF, 0x00000001);
	func_227(0x0000054F, Var0.f_31[0x00000008], 0xFFFFFFFF, 0x00000001);
	func_227(0x00000550, func_100(), 0xFFFFFFFF, 0x00000001);
	unk_0xD8B681091EBE4064(joaat("clo_stored_initial"), 0x00000001, 0x00000001);
	Global_1B416.f_936.f_21B.f_10DB = 0x00000001;
}

var func_227(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		iParam2 = func_224();
	}
	if (iParam1 < 0x00000000)
	{
		iParam1 = 0x000000FF;
	}
	iVar0 = 0x00000000;
	iVar1 = 0x00000000;
	if (iParam0 >= 0x00000180 && iParam0 < 0x000001C9)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000180), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000180) - unk_0x6D63D77257071BC5((iParam0 - 0x00000180)) * 8) * 8;
	}
	else if (iParam0 >= 0x000001C9 && iParam0 < 0x00000201)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x000001C9), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000001C9) - unk_0x6D63D77257071BC5((iParam0 - 0x000001C9)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000501 && iParam0 < 0x00000519)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000501), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000501) - unk_0x6D63D77257071BC5((iParam0 - 0x00000501)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000519 && iParam0 < 0x00000551)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 0x00000519), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000519) - unk_0x6D63D77257071BC5((iParam0 - 0x00000519)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000571 && iParam0 < 0x00000B67)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 0x00000571), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000571) - unk_0x6D63D77257071BC5((iParam0 - 0x00000571)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000551 && iParam0 < 0x00000571)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 0x00000551), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000551) - unk_0x6D63D77257071BC5((iParam0 - 0x00000551)) * 8) * 8;
	}
	else if (iParam0 >= 0x00000F27 && iParam0 < 0x0000102F)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00000F27), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 0x00000F27) - unk_0x6D63D77257071BC5((iParam0 - 0x00000F27)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000102F && iParam0 < 0x0000106F)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000102F), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 0x0000102F) - unk_0x6D63D77257071BC5((iParam0 - 0x0000102F)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000112F && iParam0 < 0x0000178C)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000112F), 0x00000000, 0x00000001, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 0x0000112F) - unk_0x6D63D77257071BC5((iParam0 - 0x0000112F)) * 8) * 8;
	}
	else if (iParam0 >= 0x0000190D && iParam0 < 0x00001C5E)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x0000190D), 0x00000000, 0x00000001, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 0x0000190D) - unk_0x6D63D77257071BC5((iParam0 - 0x0000190D)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001C5E && iParam0 < 0x00001C91)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001C5E), 0x00000000, 0x00000001, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 0x00001C5E) - unk_0x6D63D77257071BC5((iParam0 - 0x00001C5E)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001E01 && iParam0 < 0x00002491)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001E01), 0x00000000, 0x00000001, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 0x00001E01) - unk_0x6D63D77257071BC5((iParam0 - 0x00001E01)) * 8) * 8;
	}
	else if (iParam0 >= 0x00002551 && iParam0 < 0x00003BA1)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00002551), 0x00000000, 0x00000001, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 0x00002551) - unk_0x6D63D77257071BC5((iParam0 - 0x00002551)) * 8) * 8;
	}
	else if (iParam0 >= 0x00003BA1 && iParam0 < 0x00003C09)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00003BA1), 0x00000000, 0x00000001, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 0x00003BA1) - unk_0x6D63D77257071BC5((iParam0 - 0x00003BA1)) * 8) * 8;
	}
	else if (iParam0 >= 0x00003E8A && iParam0 < 0x000046B2)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00003E8A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 0x00003E8A) - unk_0x6D63D77257071BC5((iParam0 - 0x00003E8A)) * 8) * 8;
	}
	else if (iParam0 >= 0x000046F2 && iParam0 < 0x00004A4A)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000046F2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 0x000046F2) - unk_0x6D63D77257071BC5((iParam0 - 0x000046F2)) * 8) * 8;
	}
	else if (iParam0 >= 0x00004A4A && iParam0 < 0x00005632)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00004A4A), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 0x00004A4A) - unk_0x6D63D77257071BC5((iParam0 - 0x00004A4A)) * 8) * 8;
	}
	else if (iParam0 >= 0x000056B2 && iParam0 < 0x00006182)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000056B2), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 0x000056B2) - unk_0x6D63D77257071BC5((iParam0 - 0x000056B2)) * 8) * 8;
	}
	else if (iParam0 >= 0x000063C2 && iParam0 < 0x000068BA)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x000063C2), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 0x000063C2) - unk_0x6D63D77257071BC5((iParam0 - 0x000063C2)) * 8) * 8;
	}
	else if (iParam0 >= 0x00006A7A && iParam0 < 0x00006DC2)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00006A7A), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 0x00006A7A) - unk_0x6D63D77257071BC5((iParam0 - 0x00006A7A)) * 8) * 8;
	}
	else if (iParam0 >= 0x00006F43 && iParam0 < 0x00007613)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00006F43), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 0x00006F43) - unk_0x6D63D77257071BC5((iParam0 - 0x00006F43)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001DD9 && iParam0 < 0x00001E01)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001DD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 0x00001DD9) - unk_0x6D63D77257071BC5((iParam0 - 0x00001DD9)) * 8) * 8;
	}
	else if (iParam0 >= 0x00001C91 && iParam0 < 0x00001C99)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 0x00001C91), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 0x00001C91) - unk_0x6D63D77257071BC5((iParam0 - 0x00001C91)) * 8) * 8;
	}
	uVar2 = unk_0xB8E1F940D68B4FA6(iVar0, iParam1, iVar1, 0x00000008, iParam3);
	return uVar2;
}

void func_228(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_103(iParam0);
		iVar1 = 0x00000000;
		while (iVar1 < 0x0000000C)
		{
			func_231(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000009)
		{
			func_230(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 0x00000091);
			iVar1++;
		}
		if (func_102(iVar0))
		{
			uParam1->f_3B = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3B;
			uParam1->f_3C = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3C;
			uParam1->f_3D = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3D;
			uParam1->f_3E = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3E;
			uParam1->f_3F = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_3F;
			uParam1->f_40 = Global_1B416.f_936.f_21B[iVar0 /*65*/].f_40;
		}
		else if (unk_0x8CD06866876216F2() && unk_0x134B62B726CEC8E6(iParam0) == unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			if (func_229(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_222(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_222(0x000002F0, iParam3, 0x00000000);
			}
			uParam1->f_3C = func_222(0x000002F1, iParam3, 0x00000000);
			uParam1->f_3D = func_222(0x000002F2, iParam3, 0x00000000);
		}
		if (unk_0x8CD06866876216F2() && iParam0 == unk_0x16F2683693E537C9())
		{
			if (func_229(0x000000A1, iParam3))
			{
				uParam1->f_3B = func_222(0x00000803, iParam3, 0x00000000);
			}
			else
			{
				uParam1->f_3B = func_222(0x000002F0, iParam3, 0x00000000);
			}
		}
	}
}

int func_229(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_276C68[iParam0 /*3*/][func_223(uParam1)];
	if (unk_0x89484FAA0691E684(uVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

void func_230(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (iParam0 != 0x00000000)
	{
		*uParam2 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
		*uParam3 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0x00000000)
	{
		return;
	}
	if (iParam1 == 0x00000000)
	{
		if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
		{
			if (iParam0 != 0x00000000)
			{
				if (unk_0xDCCE25EA1C1D1F76(iParam0) && unk_0x6BE6D34EA3F561AC(iParam0) != 0xFFFFFFFF)
				{
					*uParam2 = unk_0x6BE6D34EA3F561AC(iParam0);
					*uParam3 = unk_0x7E1F0AD2CE37D34C(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000007)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000010 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000017)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001C)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 >= 0x0000000E && *uParam2 <= 0x00000014)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			else if (iParam1 == 0x00000001)
			{
				if (*uParam2 == 0x00000001)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000040 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000002)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000004)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000010 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000006)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000011)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000014)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 >= 0x00000008 && *uParam2 <= 0x0000000E)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000000)
			{
				if (*uParam2 == 0x00000009)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000000C)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000015)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x00000017)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if (*uParam2 == 0x0000001B)
				{
					if ((iParam4 & 0x00000001 != 0x00000000 || iParam4 & 0x00000002 != 0x00000000) || iParam4 & 0x00000008 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
				else if ((*uParam2 >= 0x0000000E && *uParam2 <= 0x00000014) || *uParam2 == 0x00000002)
				{
					if (iParam4 & 0x00000002 != 0x00000000 || iParam4 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0xFFFFFFFF;
						*uParam3 = 0xFFFFFFFF;
					}
				}
			}
			break;
	}
}

void func_231(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (iParam0 != 0x00000000)
	{
		*uParam2 = unk_0x36C584991B4C183F(iParam0, iParam1);
		*uParam3 = unk_0xDADA8E1DD0D0D9D9(iParam0, iParam1);
		*uParam4 = unk_0xAA973E78065E07A0(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0x00000000)
	{
		return;
	}
	switch (iVar0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x0000000F)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000040 != 0x00000000)
				{
					if (*uParam2 == 0x00000003 || *uParam2 == 0x00000016)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000005)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
				{
					if (*uParam2 == 0x00000008)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000001 || *uParam2 == 0x0000000A)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000040 != 0x00000000)
				{
					if (*uParam2 == 0x00000013)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
				{
					if (*uParam2 == 0x00000005)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000008)
			{
				if ((iParam5 & 0x00000001 != 0x00000000 || iParam5 & 0x00000002 != 0x00000000) || iParam5 & 0x00000020 != 0x00000000)
				{
					if (*uParam2 == 0x00000003)
					{
						*uParam2 = 0x0000000E;
						*uParam3 = 0x00000000;
					}
				}
			}
			else if (iParam1 == 0x00000009)
			{
				if (*uParam2 >= 0x00000005 && *uParam2 <= 0x00000007)
				{
					if (iParam5 & 0x00000002 != 0x00000000 || iParam5 & 0x00000004 != 0x00000000)
					{
						*uParam2 = 0x00000000;
						*uParam3 = 0x00000000;
					}
				}
			}
			break;
	}
}

int func_232()
{
	if (func_234() && func_233(0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_233(int iParam0)
{
	return Global_140676[iParam0];
}

var func_234()
{
	return func_233(func_224() + 1);
}

void func_235(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x0E2400AB9174FA81(0x000000FF, 0x45897C40, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000002, 0x6F0783F5, 0x90C7DA60);
			unk_0x0E2400AB9174FA81(0x000000FF, 0x90C7DA60, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000001, Global_16E33, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, Global_16E33);
			unk_0x0E2400AB9174FA81(0x00000001, Global_16E34, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, Global_16E34);
			unk_0x0E2400AB9174FA81(0x00000001, Global_16E35, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, Global_16E35);
			break;
		
		case 0x00000001:
			unk_0x0E2400AB9174FA81(0x00000001, 0x45897C40, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000002, 0x6F0783F5, 0x90C7DA60);
			unk_0x0E2400AB9174FA81(0x000000FF, 0x90C7DA60, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000001, Global_16E33, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, Global_16E33);
			unk_0x0E2400AB9174FA81(0x00000001, Global_16E34, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, Global_16E34);
			unk_0x0E2400AB9174FA81(0x00000001, Global_16E35, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, Global_16E35);
			break;
		
		case 0x00000002:
			unk_0x0E2400AB9174FA81(0x000000FF, 0x45897C40, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000005, 0x6F0783F5, 0x90C7DA60);
			unk_0x0E2400AB9174FA81(0x00000005, 0x90C7DA60, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000001, Global_16E33, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, Global_16E33);
			unk_0x0E2400AB9174FA81(0x00000001, Global_16E34, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, Global_16E34);
			unk_0x0E2400AB9174FA81(0x00000001, Global_16E35, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, Global_16E35);
			break;
		
		default:
			break;
	}
}

void func_236()
{
	int iVar0;
	int iVar1;
	
	func_101();
	iVar0 = unk_0x023428EEA3027652();
	if (unk_0xE4EDC4B0E92C078B(iVar0))
	{
		iVar1 = Global_1B416.f_936.f_21B.f_10E1;
		if (func_325(0x0000000E))
		{
			iVar1 = func_103(unk_0x16F2683693E537C9());
		}
		if (iVar1 == 0x00000000)
		{
			unk_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 0x00000001)
		{
			unk_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 0x00000002)
		{
			unk_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_TREV");
		}
		else
		{
			unk_0xDC5B2F9D0CCE3A10(iVar0, "BLIP_PLAYER");
		}
	}
}

void func_237(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000002C)
	{
		iVar2 = func_238(iVar0);
		if (iVar2 != 0x00000000)
		{
			iVar3 = unk_0x3F0B5EEC37A0EDD3(iParam0, iVar2);
			if ((iVar3 != 0x00000000 && iVar3 != joaat("weapon_unarmed")) && iVar3 != joaat("object"))
			{
				if (unk_0xD2AEDBB0268DF71A(iParam0, iVar3) == 0xFFFFFFFF)
				{
					if (unk_0x9AEFFB8166364079(iParam0, iVar3, &uVar1))
					{
						unk_0xDAB3108F02A4255A(iParam0, 0x00000000, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = unk_0x037F36BEA9A47381();
	iVar4 = 0x00000000;
	while (iVar4 < iVar5)
	{
		if (unk_0x6532540B34EE6273(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (unk_0xD2AEDBB0268DF71A(iParam0, iVar3) == 0xFFFFFFFF)
			{
				if (unk_0x9AEFFB8166364079(iParam0, iVar3, &uVar1))
				{
					unk_0xDAB3108F02A4255A(iParam0, 0x00000000, iVar3);
				}
			}
		}
		iVar4++;
	}
}

int func_238(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x76D04710;
			break;
		
		case 0x00000001:
			iVar0 = 0x4C1DA136;
			break;
		
		case 0x00000002:
			iVar0 = 0x378DDAD7;
			break;
		
		case 0x00000003:
			iVar0 = 0xD6D57281;
			break;
		
		case 0x00000004:
			iVar0 = 0xA9066703;
			break;
		
		case 0x00000005:
			iVar0 = 0x0BAB693A;
			break;
		
		case 0x00000006:
			iVar0 = 0xE5D87BED;
			break;
		
		case 0x00000007:
			iVar0 = 0x3573FB94;
			break;
		
		case 0x00000008:
			iVar0 = 0x1D838821;
			break;
		
		case 0x00000009:
			iVar0 = 0xBB200985;
			break;
		
		case 0x0000000A:
			iVar0 = 0xE14402F7;
			break;
		
		case 0x0000000B:
			iVar0 = 0xCC07A8AD;
			break;
		
		case 0x0000000C:
			iVar0 = 0xAF5E8908;
			break;
		
		case 0x0000000D:
			iVar0 = 0xDFA31A8F;
			break;
		
		case 0x0000000E:
			iVar0 = 0x644B237F;
			break;
		
		case 0x0000000F:
			iVar0 = 0xCCC586AE;
			break;
		
		case 0x00000010:
			iVar0 = 0x8150911E;
			break;
		
		case 0x00000011:
			iVar0 = 0x7B37201A;
			break;
		
		case 0x00000012:
			iVar0 = 0xDFEC2248;
			break;
		
		case 0x00000013:
			iVar0 = 0x6A4A26BC;
			break;
		
		case 0x00000014:
			iVar0 = 0x1A378022;
			break;
		
		case 0x00000015:
			iVar0 = 0xFE852271;
			break;
		
		case 0x00000016:
			iVar0 = 0x74300D78;
			break;
		
		case 0x00000017:
			iVar0 = 0x8C4B2ADF;
			break;
		
		case 0x00000018:
			iVar0 = 0xC26535F0;
			break;
		
		case 0x00000019:
			iVar0 = 0x131AA6B3;
			break;
		
		case 0x0000001A:
			iVar0 = 0xD6909BE9;
			break;
		
		case 0x0000001B:
			iVar0 = 0xEF3FD8A1;
			break;
		
		case 0x0000001C:
			iVar0 = 0xD7119454;
			break;
		
		case 0x0000001D:
			iVar0 = 0x14B69421;
			break;
		
		case 0x0000001E:
			iVar0 = 0x697229C1;
			break;
		
		case 0x0000001F:
			iVar0 = 0x0B522FBC;
			break;
		
		case 0x00000021:
			iVar0 = 0x0ED4684E;
			break;
		
		case 0x00000022:
			iVar0 = 0x170AFF96;
			break;
		
		case 0x00000023:
			iVar0 = 0xF6A12136;
			break;
		
		case 0x00000024:
			iVar0 = 0x1A0BDEFC;
			break;
		
		case 0x00000025:
			iVar0 = 0xFD243A87;
			break;
		
		case 0x00000026:
			iVar0 = 0x22541EBE;
			break;
	}
	return iVar0;
}

void func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9() && unk_0x65BC0B7172CA52DD(iParam0) == 0x000000C8)
		{
			unk_0x093A734E5AEA758F(iParam0, SYSTEM::ROUND((IntToFloat(unk_0x65BC0B7172CA52DD(iParam0)) * Global_40001.f_6A)));
		}
		if (Global_1B416.f_936.f_21B.f_122[iVar0] <= 0f)
		{
			Global_1B416.f_936.f_21B.f_122[iVar0] = 100f;
		}
		else if (Global_1B416.f_936.f_21B.f_122[iVar0] <= 10f)
		{
			Global_1B416.f_936.f_21B.f_122[iVar0] = 10f;
		}
		unk_0xD458AC1C1D29C3B4(iParam0, SYSTEM::ROUND((((Global_1B416.f_936.f_21B.f_122[iVar0] / 100f) * (SYSTEM::TO_FLOAT(unk_0x65BC0B7172CA52DD(iParam0)) - 100f)) + 100f)), 0x00000000);
	}
}

int func_240(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	else if (iParam0 == 0x00000002)
	{
		return 0x00000002;
	}
	else if (iParam0 == 0x00000001)
	{
		return 0x00000001;
	}
	else if (iParam0 == 0x00000091)
	{
		return 0x00000003;
	}
	return 0x00000004;
}

int func_241(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_150(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_242(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	else if (iParam0 == 0x00000002)
	{
		return 0x00000002;
	}
	else if (iParam0 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000091;
}

void func_243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_244(0x00000004, *iParam1, 0x00000000);
			func_244(0x00000007, *iParam1, 0x00000000);
			func_244(0x00000008, *iParam1, 0x00000000);
			func_244(0x0000000B, *iParam1, 0x00000000);
			break;
		
		case 0x00000001:
			func_244(0x00000004, *iParam1, 0x00000000);
			func_244(0x00000007, *iParam1, 0x00000000);
			func_244(0x00000008, *iParam1, 0x00000000);
			func_244(0x0000000B, *iParam1, 0x00000000);
			if (Global_1B416.f_2378.f_63.f_3A[0x0000007E])
			{
				func_244(0x0000000C, *iParam1, 0x00000000);
			}
			break;
		
		case 0x00000002:
			func_244(0x00000004, *iParam1, 0x00000000);
			func_244(0x00000007, *iParam1, 0x00000000);
			func_244(0x00000008, *iParam1, 0x00000000);
			func_244(0x0000000B, *iParam1, 0x00000000);
			break;
	}
}

void func_244(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	if (!bParam2)
	{
		if (!unk_0xC844350D5D58C99A(iParam1))
		{
			return;
		}
	}
	if (Global_9E6A[iParam0 /*31*/].f_18 == 0x00000000)
	{
		return;
	}
	bVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_9E6A[iParam0 /*31*/].f_18)
	{
		if (bVar1)
		{
			Global_9E6A[iParam0 /*31*/].f_19[(iVar0 - 0x00000001)] = Global_9E6A[iParam0 /*31*/].f_19[iVar0];
			Global_9E6A[iParam0 /*31*/].f_19[iVar0] = 0x00000000;
		}
		else if (iParam1 == Global_9E6A[iParam0 /*31*/].f_19[iVar0])
		{
			Global_9E6A[iParam0 /*31*/].f_19[iVar0] = 0x00000000;
			bVar1 = 0x00000001;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_9E6A[iParam0 /*31*/].f_18 = (Global_9E6A[iParam0 /*31*/].f_18 - 0x00000001);
	}
}

void func_245(int iParam0, bool bParam1)
{
	func_257(iParam0);
	func_251(iParam0, bParam1);
	func_250(iParam0);
	func_249(iParam0);
	func_248(iParam0);
	func_247(iParam0);
	func_246(iParam0);
}

void func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			Global_1B416.f_936.f_21B.f_918[iVar0] = unk_0x179932739160BA96(unk_0xD803B885F5E47A62());
		}
	}
}

void func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_1B416.f_936.f_21B.f_90E[iVar0 /*3*/] = { unk_0x56E9E0FD5ACCD35D(iParam0) };
	}
}

void func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 0x00000003)
		{
			if (unk_0x00A15D69BCAA5267() == 0x00000008)
			{
				return;
			}
		}
		Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/] = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
		Global_1B416.f_936.f_21B.f_906[iVar0] = unk_0xD9522BA9E27E1349(iParam0);
		Global_1B416.f_936.f_21B.f_90A[iVar0] = unk_0xB0A50BC6EDB99CA9(iParam0);
		if (Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/] >= 8000f)
		{
			Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/] = 7500f;
		}
		else if (Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/] <= -8000f)
		{
			Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/] = -7500f;
		}
		if (Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_1B416.f_936.f_21B.f_8FC[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_249(int iParam0)
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_1B416.f_936.f_21B.f_126[iVar0] = unk_0x34460709B9A5160B(iParam0);
	}
}

void func_250(int iParam0)
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_1B416.f_936.f_21B.f_122[iVar0] = (((SYSTEM::TO_FLOAT(unk_0x7F6DC62EA9922664(iParam0)) - 100f) / (SYSTEM::TO_FLOAT(unk_0x65BC0B7172CA52DD(iParam0)) - 100f)) * 100f);
	}
}

void func_251(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam0 == unk_0x16F2683693E537C9())
		{
			func_252(iParam0, &(Global_1B416.f_936.f_21B.f_12A[iVar0 /*477*/]));
			iVar2 = 0x00000000;
			while (iVar2 <= (0x00000008 - 0x00000001))
			{
				Global_1B416.f_936.f_21B.f_6C2[iVar2 /*4*/][iVar0] = unk_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xFA91242148B28E7D();
					if (Global_1B416.f_936.f_21B.f_6C2[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_1B416.f_936.f_21B.f_6E3 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x812D6591566D640E(unk_0xD803B885F5E47A62(), &iVar3);
			if (iVar0 == 0x00000000)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp0_parachute_current_tint"), iVar3, 0x00000001);
			}
			else if (iVar0 == 0x00000001)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp1_parachute_current_tint"), iVar3, 0x00000001);
			}
			else if (iVar0 == 0x00000002)
			{
				unk_0xCDC520E5E48E63D9(joaat("sp2_parachute_current_tint"), iVar3, 0x00000001);
			}
		}
	}
}

void func_252(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (0x0000002C - 0x00000001))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0x00000000;
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= (0x0000002C - 0x00000001))
		{
			iVar3 = func_238(iVar0);
			if (iVar3 != 0x00000000)
			{
				Var4 = unk_0x3F0B5EEC37A0EDD3(iParam0, func_238(iVar0));
				Var4.f_1 = 0x00000000;
				Var4.f_2 = 0x00000000;
				Var4.f_3 = 0x00000000;
				Var4.f_4 = 0x00000000;
				if (Var4 != 0x00000000 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 0x00000001;
					}
					Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
					Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					if (Var4.f_1 == 0xFFFFFFFF)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0x00000000;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0x00000000;
					iVar2 = func_255(Var4, iVar1);
					while (iVar2 != 0x00000000)
					{
						if (unk_0xAFB8387ED2D7213E(iParam0, Var4, iVar2))
						{
							unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_255(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000032)
		{
			uParam1->f_DD[iVar0 /*5*/].f_1 = 0x00000000;
			iVar0++;
		}
		iVar6 = unk_0x4160B65AE085B5A9();
		iVar5 = 0x00000000;
		while (iVar5 < iVar6)
		{
			if ((unk_0x310836EE7129BA33(iVar5, &Var7) && !func_254(Var7.f_1)) && iVar9 < 0x00000033)
			{
				if (!unk_0x232048AB4B0E0259(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0x00000000;
					Var4.f_2 = 0x00000000;
					Var4.f_3 = 0x00000000;
					Var4.f_4 = 0x00000000;
					Var4.f_1 = unk_0xD2AEDBB0268DF71A(iParam0, Var4);
					if (unk_0x440C646F2F11A2A1(iParam0, Var4, 0x00000000))
					{
						Var4.f_3 = unk_0x7DD9FDEA5DFB355E(iParam0, Var4);
						Var4.f_4 = unk_0x7F1C58A86289ED1A(iParam0, Var4);
					}
					if (Var4.f_1 == 0xFFFFFFFF)
					{
						if (!unk_0x9AEFFB8166364079(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0x00000000;
						}
					}
					uParam1->f_DD[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0x00000000;
					iVar1 = 0x00000000;
					while (iVar1 < unk_0xAD2A7A6DFF55841B(iVar5))
					{
						if (unk_0x31D5E073B6F93CDC(iVar5, iVar1, &Var8))
						{
							if (!func_253(Var8.f_3))
							{
								if (unk_0xAFB8387ED2D7213E(iParam0, Var4, Var8.f_3))
								{
									unk_0x5D96D8530B3D0904(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0x00000000)
				{
					if (!unk_0x440C646F2F11A2A1(iParam0, Var4, 0x00000000))
					{
						Var4 = 0x00000000;
						Var4.f_1 = 0x00000000;
					}
				}
				uParam1->f_DD[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0xB4FC92B0:
		case 0x1A1F1260:
		case 0xE4E00B70:
		case 0x2C298B2B:
		case 0xDFB79725:
		case 0x6BD7228C:
		case 0x9DDBCF8C:
		case 0xB319A52C:
		case 0xC6836E12:
		case 0x43B1B173:
		case 0x4ABDA3FA:
		case 0xE7EE68EA:
		case 0x29366D21:
		case 0x3ADE514B:
		case 0xE64513E9:
		case 0xCD7AEB9A:
		case 0xFA7B27A6:
		case 0xE285CA9A:
		case 0x2B904B19:
		case 0x22C24F9C:
		case 0x8D0D5ECD:
		case 0x1F07150A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_254(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0x00000000;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0x00000000;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0x00000000;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0x00000000;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0x00000000;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0x00000000;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0x00000000;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0x00000000;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0x00000000;
				break;
			
			case 0xC78D71B4:
			case 0xDDE2A27C:
			case 0x176898A6:
			case 0xA52E2957:
			case 0x8210D4D5:
			case 0xD866ACD1:
			case 0x8F796EC9:
			case 0xCE1A1A4D:
			case 0xEB779748:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 0x12E82D3D:
			case 0xBD248B55:
			case 0x0781FE4A:
			case 0xCD274149:
			case 0xBA45E8B8:
			case 0x94117305:
			case 0x19044EE0:
			case 0x97EA20B8:
			case 0x476BF155:
			case 0xB62D1F67:
			case 0xAF3696A1:
			case 0x917F6C8C:
			case 0x2B5EF5EC:
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

int func_255(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000009:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x60BD749C;
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 0x00000004:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 0x00000005:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 0x00000006:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 0x00000007:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 0x00000008:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 0x00000003:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 0x00000001:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 0x00000002:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case 0xBD248B55:
			switch (iParam1)
			{
				case 0x00000000:
					iVar0 = 0x84C8B2D3;
					break;
				
				case 0x00000001:
					iVar0 = 0x937ED0B7;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0x00000000)
			{
				iVar1 = func_256(iParam0, &uVar4);
				if (iVar1 != 0xFFFFFFFF)
				{
					iVar2 = 0x00000000;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var5))
						{
							if (!func_253(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_256(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x037F36BEA9A47381();
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (unk_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_257(int iParam0)
{
	int iVar0;
	
	iVar0 = func_103(iParam0);
	if (func_102(iVar0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		Global_1B416.f_936.f_21B.f_8F8[iVar0] = func_181();
	}
}

int func_258(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (!iParam0->f_27)
	{
		iParam0->f_7 = 0x00000004;
		iParam0->f_27 = 0x00000001;
	}
	if ((iParam1 != 0x00000000 && iParam1 != 0x00000002) && iParam1 != 0x00000001)
	{
	}
	else
	{
		bVar0 = iParam0->f_22[iParam1] == 0x00000002;
		if (func_240(func_100()) != iParam1 || bVar0)
		{
			bVar1 = 0x00000000;
			if ((bVar0 || iParam0->f_18[iParam1] != 0x00000000) || ((func_262(iParam1) && func_259(iParam1)) && !iParam0->f_12[iParam1]))
			{
				if (!iParam0->f_17)
				{
					if (!unk_0xEB6A8945D1AC98A1((*iParam0)[iParam1]) || bVar0)
					{
						if (iParam0->f_22[iParam1] != 0x00000001 && iParam0->f_22[iParam1] != 0x00000003)
						{
							bVar1 = 0x00000001;
						}
					}
				}
				else if ((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && (unk_0x8CD06866876216F2() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Global_177DE.f_2F, iParam1))
				{
					bVar1 = 0x00000001;
				}
			}
			else if (!((unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_2[0x0000001B /*3*/], 0x00000001) && !Global_3) && !func_3(0x00000000)))
			{
				if (iParam0->f_17)
				{
					bVar1 = 0x00000001;
				}
			}
			if (bVar1)
			{
				iParam0->f_7 = iParam1;
				return 0x00000001;
			}
		}
	}
	iParam0->f_27 = 0x00000000;
	return 0x00000000;
}

int func_259(int iParam0)
{
	if (Global_1B416.f_2378 || Global_3)
	{
		if (!Global_12B4E || (Global_12B4E && iParam0 != func_240(func_261())))
		{
			if (!func_260(func_242(iParam0)))
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000001;
}

int func_260(int iParam0)
{
	if (func_102(iParam0))
	{
		if ((Global_1B416.f_2378 || Global_3) || func_3(0x00000000))
		{
			return Global_1B416.f_936.f_21B.f_92C[iParam0];
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_261()
{
	return Global_1B416.f_936.f_21B.f_10E3;
}

int func_262(int iParam0)
{
	if ((Global_1B416.f_2378 || Global_3) || func_3(0x00000000))
	{
		if (!Global_12B4E || (Global_12B4E && iParam0 != func_240(func_261())))
		{
			if (((iParam0 == 0x00000000 && !func_330(0x00000073)) || (iParam0 == 0x00000001 && !func_330(0x00000074))) || (iParam0 == 0x00000002 && !func_330(0x00000075)))
			{
				return 0x00000000;
			}
		}
	}
	return 0x00000001;
}

int func_263(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_88)
	{
		if (Global_1B416.f_1E03[iVar0 /*15*/] == iParam0)
		{
			if (Global_A3FA != iVar0)
			{
				func_276(iVar0);
				func_268(iParam0);
				iVar1 = 0x00000001;
			}
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_C6)
	{
		if (Global_1B416.f_1E03.f_89[iVar0 /*15*/] == iParam0)
		{
			func_268(iParam0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_28A)
	{
		if (Global_1B416.f_1E03.f_C7[iVar0 /*15*/] == iParam0)
		{
			func_267(iParam0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_2FC)
	{
		if (Global_1B416.f_1E03.f_28B[iVar0 /*14*/] == iParam0)
		{
			func_265(iVar0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_362)
	{
		if (Global_1B416.f_1E03.f_2FD[iVar0 /*10*/] == iParam0)
		{
			func_264(iVar0);
			iVar1 = 0x00000001;
		}
		iVar0++;
	}
	return iVar1;
}

void func_264(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0x00000000 || iParam0 >= Global_1B416.f_1E03.f_362)
	{
		return;
	}
	if (Global_1B416.f_1E03.f_362 > 0x00000001)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1B416.f_1E03.f_362 - 0x00000002))
		{
			Global_1B416.f_1E03.f_2FD[iVar0 /*10*/] = { Global_1B416.f_1E03.f_2FD[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_1B416.f_1E03.f_362 > 0x00000000)
	{
		Global_1B416.f_1E03.f_2FD[(Global_1B416.f_1E03.f_362 - 0x00000001) /*10*/] = { Var1 };
		Global_1B416.f_1E03.f_362 = (Global_1B416.f_1E03.f_362 - 0x00000001);
	}
}

void func_265(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0x00000000 || iParam0 >= Global_1B416.f_1E03.f_2FC)
	{
		return;
	}
	if (Global_1B416.f_1E03.f_2FC > 0x00000001)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1B416.f_1E03.f_2FC - 0x00000002))
		{
			Global_1B416.f_1E03.f_28B[iVar0 /*14*/] = { Global_1B416.f_1E03.f_28B[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_1B416.f_1E03.f_2FC > 0x00000000)
	{
		Global_1B416.f_1E03.f_28B[(Global_1B416.f_1E03.f_2FC - 0x00000001) /*14*/] = { Var1 };
		Global_1B416.f_1E03.f_2FC = (Global_1B416.f_1E03.f_2FC - 0x00000001);
	}
	func_266(0x00000000);
	func_266(0x00000001);
	func_266(0x00000002);
}

void func_266(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	if (!func_102(iParam0))
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_1B416.f_1E03.f_88)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_1B416.f_1E03[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_1B416.f_1E03[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0x00000000;
	while (iVar2 < Global_1B416.f_1E03.f_2FC)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1E03.f_28B[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_1B416.f_1E03.f_28B[iVar2 /*14*/].f_3 == 0x00000005)
			{
				iVar1 = 0x00000005;
			}
		}
		iVar2++;
	}
	Global_1B416.f_1E03.f_397[iParam0] = iVar1;
}

void func_267(int iParam0)
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < Global_1B416.f_1E03.f_28A)
	{
		if (Global_1B416.f_1E03.f_C7[iVar1 /*15*/] == iParam0)
		{
			iVar2 = iVar1;
			while (iVar2 <= (Global_1B416.f_1E03.f_28A - 0x00000002))
			{
				Global_1B416.f_1E03.f_C7[iVar2 /*15*/] = { Global_1B416.f_1E03.f_C7[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_1B416.f_1E03.f_C7[(Global_1B416.f_1E03.f_28A - 0x00000001) /*15*/] = { Var0 };
			Global_1B416.f_1E03.f_28A = (Global_1B416.f_1E03.f_28A - 0x00000001);
			return;
		}
		iVar1++;
	}
}

void func_268(int iParam0)
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0x00000000;
	while (iVar1 < Global_1B416.f_1E03.f_C6)
	{
		if (Global_1B416.f_1E03.f_89[iVar1 /*15*/] == iParam0)
		{
			func_269(Global_1B416.f_1E03.f_89[iVar1 /*15*/].f_6);
			iVar2 = iVar1;
			while (iVar2 <= (Global_1B416.f_1E03.f_C6 - 0x00000002))
			{
				Global_1B416.f_1E03.f_89[iVar2 /*15*/] = { Global_1B416.f_1E03.f_89[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_1B416.f_1E03.f_89[(Global_1B416.f_1E03.f_C6 - 0x00000001) /*15*/] = { Var0 };
			Global_1B416.f_1E03.f_C6 = (Global_1B416.f_1E03.f_C6 - 0x00000001);
			return;
		}
		iVar1++;
	}
}

int func_269(int iParam0)
{
	int iVar0;
	
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (func_275(iParam0, Global_4C1E) == 0x00000001)
		{
			func_274(iParam0, Global_4C1E, 0x00000000);
			if (func_273(iParam0, Global_4C1E) == 0x00000000)
			{
				iVar0 = Global_4C1E;
				func_270(iParam0, iVar0);
			}
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

void func_270(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_75[iParam0 /*10*/].f_8 != 0x00000096)
	{
		if (iParam1 > 0x00000003)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_272(iParam0, iVar0, 0x00000000);
			func_271(iParam0, iVar0, 0x00000000);
		}
	}
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_18[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_18[iParam1] = iParam2;
	}
}

void func_272(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_C[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_C[iParam1] = iParam2;
	}
}

int func_273(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

void func_274(int iParam0, int iParam1, int iParam2)
{
	Global_706[iParam0 /*29*/].f_13[iParam1] = iParam2;
	if (iParam0 < 0x000000A2)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_13[iParam1] = iParam2;
	}
}

int func_275(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000004)
	{
		return 0x00000000;
	}
	return Global_706[iParam0 /*29*/].f_13[iParam1];
}

void func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<15> Var2;
	
	if (iParam0 < 0x00000000 || iParam0 >= Global_1B416.f_1E03.f_88)
	{
		return;
	}
	iVar1 = Global_1B416.f_1E03[iParam0 /*15*/].f_2;
	if (Global_1B416.f_1E03.f_88 > 0x00000001)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_1B416.f_1E03.f_88 - 0x00000002))
		{
			Global_1B416.f_1E03[iVar0 /*15*/] = { Global_1B416.f_1E03[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_1B416.f_1E03.f_88 > 0x00000000)
	{
		Global_1B416.f_1E03[(Global_1B416.f_1E03.f_88 - 0x00000001) /*15*/] = { Var2 };
		Global_1B416.f_1E03.f_88 = (Global_1B416.f_1E03.f_88 - 0x00000001);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar1, iVar0))
		{
			func_266(iVar0);
		}
		iVar0++;
	}
}

int func_277(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_66(func_278(iParam0));
	if (iVar0 < 0x00000000)
	{
		return 0x0000000F;
	}
	if (iVar0 >= 0x0000000A)
	{
		return 0x0000000F;
	}
	return Global_1B416.f_1.f_C[iVar0 /*6*/][iParam1];
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000007;
			break;
		
		case 0x00000001:
			return 0x00000008;
			break;
		
		case 0x00000002:
			return 0x00000009;
			break;
		
		case 0x00000003:
			return 0x0000000A;
			break;
		
		case 0x00000004:
			return 0x0000000B;
			break;
	}
	return 0xFFFFFFFF;
}

int func_279(int iParam0)
{
	int iVar0;
	
	iVar0 = func_66(func_278(iParam0));
	return Global_17235[iVar0 /*19*/];
}

void func_280(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_287(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_75())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_286(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_287(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_286(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_284(unk_0xD803B885F5E47A62())) && !func_282(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_281()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_284(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_281()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_282(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_283(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_283(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_224();
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

int func_284(int iParam0)
{
	if (func_282(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_285())
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

bool func_285()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_286(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_287(int iParam0)
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

void func_288(bool bParam0)
{
	if (!bParam0)
	{
		if (unk_0xC844350D5D58C99A(iLocal_48))
		{
			unk_0xF690C84DADBB3551(&iLocal_48);
		}
		unk_0x3124890FDA752DE4(707.3041f, -967.6456f, 30.376f, 1f, 0x5293CC8D, 0x00000000);
	}
	else
	{
		unk_0x77ADAEFF81EAE1E4(707.3041f, -967.6456f, 30.376f, 1f, 0x5293CC8D, 0x00000000);
		if (unk_0xB87F6CF6E5628C67(0x5293CC8D))
		{
			iLocal_48 = unk_0x7707E48765093646(0x5293CC8D, 707.3041f, -967.6456f, 30.376f, 0x00000001, 0x00000001, 0x00000000);
			unk_0xD8F6A53F4799FAFE(iLocal_48, 183.14f);
			unk_0x1E9649458B15960F(iLocal_48, 0x00000001);
		}
	}
}

void func_289()
{
	if (func_330(0x00000006))
	{
		if (!func_3(0x00000000))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000006))
			{
				unk_0xAE1670DD12E839C3("AH_2_EXT_ALT", 0x00000008);
				unk_0x523BCC9DC80CD82F(0x5293CC8D);
				Local_91.f_1.f_8D[0x00000002 /*2*/] = 0x00000000;
				Local_91.f_1.f_8D[0x00000002 /*2*/].f_1 = 0x00000000;
				Local_91.f_1.f_8D[0x00000003 /*2*/] = 0x00000000;
				Local_91.f_1.f_8D[0x00000003 /*2*/].f_1 = 0x00000000;
				Local_91.f_1.f_8D[0x00000007 /*2*/] = 0x00000000;
				Local_91.f_1.f_8D[0x00000007 /*2*/].f_1 = 0x00000000;
				Local_91.f_1.f_8D[0x00000008 /*2*/] = 0x00000000;
				Local_91.f_1.f_8D[0x00000008 /*2*/].f_1 = 0x00000000;
				unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000006);
			}
			else if (unk_0x75EECC9B0572F772())
			{
				unk_0xA2888AACD3C45CCA("LESTER", 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			}
			if (func_326(0x00000043))
			{
				if (!func_241(0x00000000))
				{
					if (func_310(&iLocal_42, 0x00000000, 0x00000000, 0x00000000, 0x00000000) == 0x00000001)
					{
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
						func_309();
						if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
						{
							unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
							unk_0x34D79252800B23FF(0x00000000);
						}
						iLocal_89 = unk_0x7D6CA5F52B3748BF(Local_91.f_1.f_18A - Local_91.f_1.f_18D, Local_91.f_1.f_18A + Local_91.f_1.f_18D, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
						iLocal_90 = unk_0x544B74C043CE9948(Local_91.f_1.f_18A, Local_91.f_1.f_18D * Vector(1.5f, 1.5f, 1.5f), 0f, 0x00000000, 0x00000007);
						unk_0x10F3BFFADF2CE3DA(Local_91.f_1.f_18A - Local_91.f_1.f_18D, Local_91.f_1.f_18A + Local_91.f_1.f_18D);
						unk_0x17E8C6920A1E386F(Local_91.f_1.f_18A - Local_91.f_1.f_18D, Local_91.f_1.f_18A + Local_91.f_1.f_18D, 0x00000000, 0x00000000);
						unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000002);
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000002))
			{
				if (func_308("AH_2_EXT_ALT") && unk_0xB87F6CF6E5628C67(0x5293CC8D))
				{
					if (!unk_0x22A8E52414415B76())
					{
						if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000000]) && !unk_0x437347B10A200C4B(Global_17409.f_9[0x00000000], 0x00000000))
						{
							iLocal_46 = Global_17409.f_9[0x00000000];
							unk_0x73270B3C9CC833FD(iLocal_46, 0x00000000, 0x00000001);
							unk_0x29E8331978B73E7F(iLocal_46, "LESTER", 0x00000001, joaat("ig_lestercrest"), 0x00000000);
						}
						if (unk_0xC844350D5D58C99A(Global_17409.f_1C[0x00000000]) && !unk_0x437347B10A200C4B(Global_17409.f_1C[0x00000000], 0x00000000))
						{
							iLocal_47 = Global_17409.f_1C[0x00000000];
							unk_0x73270B3C9CC833FD(Global_17409.f_1C[0x00000000], 0x00000000, 0x00000001);
							unk_0x29E8331978B73E7F(iLocal_47, "WALKINGSTICK_LESTER", 0x00000001, joaat("prop_cs_walking_stick"), 0x00000000);
						}
						if (unk_0xC844350D5D58C99A(Global_17409.f_9[0x00000001]) && !unk_0x437347B10A200C4B(Global_17409.f_9[0x00000001], 0x00000000))
						{
							iLocal_49[0x00000000] = Global_17409.f_9[0x00000001];
							unk_0x73270B3C9CC833FD(iLocal_49[0x00000000], 0x00000000, 0x00000001);
							unk_0x29E8331978B73E7F(iLocal_49[0x00000000], "MICHAEL", 0x00000000, joaat("player_zero"), 0x00000000);
						}
						else
						{
							unk_0x29E8331978B73E7F(iLocal_49[0x00000000], "MICHAEL", 0x00000002, joaat("player_zero"), 0x00000000);
							unk_0x5D96D8530B3D0904(&iLocal_41, 0x0000000C);
						}
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
						{
							iLocal_45 = unk_0x16F2683693E537C9();
							unk_0x29E8331978B73E7F(iLocal_45, "FRANKLIN", 0x00000001, joaat("player_one"), 0x00000000);
						}
						func_307(&(Local_91.f_1E4), 0x00000000, 0x00000000, "MICHAEL", 0x00000001, 0x00000001);
						func_307(&(Local_91.f_1E4), 0x00000001, 0x00000000, "FRANKLIN", 0x00000001, 0x00000001);
						func_307(&(Local_91.f_1E4), 0x00000003, 0x00000000, "LESTER", 0x00000001, 0x00000001);
						func_73(0x00000001);
						func_280(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
						func_288(0x00000000);
						unk_0x1BA7FCEAFCE8D46E(0x38968F6D, 0x00000003, 0x00000001, 0x00000000);
						unk_0x838CC054A9235BEC(0x38968F6D, 0f, 0x00000001, 0x00000000);
						unk_0x4C902758BEA97C68(0x00000800);
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
						iLocal_44 = unk_0x1C0640BA9A7327B3();
					}
					else
					{
						func_120();
						if (unk_0xC844350D5D58C99A(Global_17409[0x00000000]) && !unk_0x437347B10A200C4B(Global_17409[0x00000000], 0x00000000))
						{
							unk_0x73270B3C9CC833FD(Global_17409[0x00000000], 0x00000000, 0x00000001);
							func_291(Global_17409[0x00000000], 0x00000000, 0x00000001);
							unk_0xA954465BA6FDEFE2(&(Global_17409[0x00000000]));
						}
						if (unk_0xC844350D5D58C99A(unk_0x728870EB733D12A1()))
						{
							Global_17409[0x00000000] = unk_0x728870EB733D12A1();
							unk_0x73270B3C9CC833FD(Global_17409[0x00000000], 0x00000000, 0x00000001);
							func_291(Global_17409[0x00000000], 0x00000000, func_100());
							unk_0xA954465BA6FDEFE2(&(Global_17409[0x00000000]));
						}
						if (unk_0x98F1B512A2CC07C5(unk_0x16F2683693E537C9(), 0x00000000) == 0x00000007)
						{
							unk_0x3BFC3B9ADD2EE7B7(unk_0x16F2683693E537C9(), 0x00000000);
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x0000000D))
						{
							if (!unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
							{
								unk_0x82E51BCA72537B6C(0x00000320);
							}
							unk_0x5D96D8530B3D0904(&iLocal_41, 0x0000000D);
						}
						if (unk_0xEAD40E09B5AA81FC())
						{
							unk_0x5D96D8530B3D0904(&iLocal_41, 0x0000000E);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x0000000E))
						{
							if (unk_0x757EF87A33649210())
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000001))
								{
									func_290();
									unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000001);
								}
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000003))
								{
									func_2(0x00000003, 0x00000003, 0x00000001);
									unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000003);
								}
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x0000000C))
						{
							if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("MICHAEL", joaat("player_zero"))))
							{
								iLocal_49[0x00000000] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("MICHAEL", joaat("player_zero")));
								unk_0x0674E58A79778E99(&iLocal_41, 0x0000000C);
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000003))
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_44) > 0x00003DE8)
							{
								func_2(0x00000003, 0x00000003, 0x00000001);
								unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000003);
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000001))
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_44) > 0x00001388)
							{
								func_290();
								unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000001);
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000004))
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_44) > 0x0001177E)
							{
								if (unk_0xC844350D5D58C99A(unk_0x8D0D3FE7FF5DD3EC("FRANKLIN", 0x00000000)))
								{
									if (!unk_0x437347B10A200C4B(unk_0x8D0D3FE7FF5DD3EC("FRANKLIN", 0x00000000), 0x00000000))
									{
										unk_0x4A4806F9D471E491(unk_0x8D0D3FE7FF5DD3EC("FRANKLIN", 0x00000000), 0x00000000, 0x00000000);
									}
								}
								if (unk_0xC844350D5D58C99A(unk_0x8D0D3FE7FF5DD3EC("LESTER", 0x00000000)))
								{
									if (!unk_0x437347B10A200C4B(unk_0x8D0D3FE7FF5DD3EC("LESTER", 0x00000000), 0x00000000))
									{
										unk_0x4A4806F9D471E491(unk_0x8D0D3FE7FF5DD3EC("LESTER", 0x00000000), 0x00000000, 0x00000000);
									}
								}
								if (unk_0xC844350D5D58C99A(unk_0x8D0D3FE7FF5DD3EC("WALKINGSTICK_LESTER", 0x00000000)))
								{
									if (unk_0xC844350D5D58C99A(unk_0x8D0D3FE7FF5DD3EC("WALKINGSTICK_LESTER", 0x00000000)))
									{
										unk_0x4A4806F9D471E491(unk_0x8D0D3FE7FF5DD3EC("WALKINGSTICK_LESTER", 0x00000000), 0x00000000, 0x00000000);
									}
								}
								unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000004);
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000005))
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_44) > 0x000120AC)
							{
								if (unk_0xC844350D5D58C99A(iLocal_49[0x00000000]))
								{
									unk_0x4A4806F9D471E491(iLocal_49[0x00000000], 0x00000000, 0x00000000);
								}
								unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000005);
							}
						}
						if (unk_0x3148AE92ED70DC30("MICHAEL", joaat("player_zero")))
						{
							if (!unk_0x437347B10A200C4B(iLocal_49[0x00000000], 0x00000000))
							{
								unk_0x4E885A246A9D983A(iLocal_49[0x00000000], 0x000000D0, 0x00000001);
								unk_0x4E885A246A9D983A(iLocal_49[0x00000000], 0x00000076, 0x00000000);
								unk_0x4E885A246A9D983A(iLocal_49[0x00000000], 0x000000D5, 0x00000000);
								unk_0x11AD11297DC58CC7(iLocal_49[0x00000000], 0x00000001);
							}
							if (func_100() != 0x00000000)
							{
								func_258(&iLocal_49, 0x00000000);
								func_196(&iLocal_49, 0x00000000, 0x00000000, 0x00000000);
								unk_0x71199B01895C6202(joaat("player_zero"));
								func_307(&(Local_91.f_1E4), 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000001, 0x00000001);
							}
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000001))
							{
								func_290();
								unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000001);
							}
							func_115(0x00000006, 0x00000000);
						}
						if (unk_0xEABED1927EFB48CA(0x00000000))
						{
							func_288(0x00000001);
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000004))
							{
								if (unk_0xC844350D5D58C99A(unk_0x8D0D3FE7FF5DD3EC("FRANKLIN", 0x00000000)))
								{
									if (!unk_0x437347B10A200C4B(unk_0x8D0D3FE7FF5DD3EC("FRANKLIN", 0x00000000), 0x00000000))
									{
										unk_0x4A4806F9D471E491(unk_0x8D0D3FE7FF5DD3EC("FRANKLIN", 0x00000000), 0x00000000, 0x00000000);
									}
								}
								if (unk_0xC844350D5D58C99A(unk_0x8D0D3FE7FF5DD3EC("LESTER", 0x00000000)))
								{
									if (!unk_0x437347B10A200C4B(unk_0x8D0D3FE7FF5DD3EC("LESTER", 0x00000000), 0x00000000))
									{
										unk_0x4A4806F9D471E491(unk_0x8D0D3FE7FF5DD3EC("LESTER", 0x00000000), 0x00000000, 0x00000000);
									}
								}
								if (unk_0xC844350D5D58C99A(unk_0x8D0D3FE7FF5DD3EC("WALKINGSTICK_LESTER", 0x00000000)))
								{
									if (unk_0xC844350D5D58C99A(unk_0x8D0D3FE7FF5DD3EC("WALKINGSTICK_LESTER", 0x00000000)))
									{
										unk_0x4A4806F9D471E491(unk_0x8D0D3FE7FF5DD3EC("WALKINGSTICK_LESTER", 0x00000000), 0x00000000, 0x00000000);
									}
								}
								unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000004);
							}
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000005))
							{
								if (unk_0xC844350D5D58C99A(iLocal_49[0x00000000]))
								{
									unk_0x4A4806F9D471E491(iLocal_49[0x00000000], 0x00000000, 0x00000000);
								}
								unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000005);
							}
						}
					}
				}
			}
		}
		else
		{
			if (func_150(0x00000000))
			{
				if (func_310(&iLocal_42, 0x00000000, 0x00000000, 0x00000000, 0x00000000) == 0x00000001)
				{
					unk_0x5D96D8530B3D0904(&iLocal_41, 0x00000002);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000002))
			{
				func_307(&(Local_91.f_1E4), 0x00000000, 0x00000000, "MICHAEL", 0x00000001, 0x00000001);
				func_307(&(Local_91.f_1E4), 0x00000001, 0x00000000, "FRANKLIN", 0x00000001, 0x00000001);
				func_307(&(Local_91.f_1E4), 0x00000003, 0x00000000, "LESTER", 0x00000001, 0x00000001);
				func_290();
				func_115(0x00000006, 0x00000000);
			}
		}
	}
	else
	{
		if (unk_0xA0F4292EA950943D("AH_2_EXT_ALT"))
		{
			unk_0x5C8D148FC238F38A();
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 0x00000006))
		{
			unk_0x0674E58A79778E99(&iLocal_41, 0x00000006);
		}
	}
}

void func_290()
{
	func_86(0x00000001, 0x00000003, 0x00000001);
	func_86(0x00000002, 0x00000003, 0x00000001);
	func_312(&Local_91);
	func_68(&Local_91);
}

int func_291(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0x00000000)
	{
		sVar1 = unk_0xA712FAE854841798(iParam0, &uVar0);
		if (!unk_0xEA6BC48857E0AC4C(sVar1))
		{
			if (unk_0x12AB0310C2281427(sVar1) == unk_0x12AB0310C2281427("vehicle_gen_controller"))
			{
				return 0x00000000;
			}
		}
	}
	func_292(iParam0, iParam2);
	return 0x00000001;
}

void func_292(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_298(iParam0))
	{
		return;
	}
	if ((iParam1 != 0x00000000 && iParam1 != 0x00000001) && iParam1 != 0x00000002)
	{
		iVar0 = unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000);
		if (!unk_0xC844350D5D58C99A(iVar0))
		{
			iVar0 = unk_0xB0326EA5AFB4EFA7(iParam0, 0xFFFFFFFF);
		}
		if (unk_0xC844350D5D58C99A(iVar0) && !unk_0xEB6A8945D1AC98A1(iVar0))
		{
			if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0x00000000;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_one"))
			{
				iParam1 = 0x00000001;
			}
			else if (unk_0x134B62B726CEC8E6(iVar0) == joaat("player_two"))
			{
				iParam1 = 0x00000002;
			}
		}
		if ((iParam1 != 0x00000000 && iParam1 != 0x00000001) && iParam1 != 0x00000002)
		{
			iParam1 = Global_1B416.f_936.f_21B.f_10E1;
		}
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000002)
		{
			if (unk_0x134B62B726CEC8E6(iParam0) == Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
			{
				if (!unk_0xEA6BC48857E0AC4C(&(Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_1B416.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0x00000000;
						Global_1B416.f_7FE8.f_15D8[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000003)
	{
		if (unk_0x134B62B726CEC8E6(iParam0) == Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_42)
		{
			if (!unk_0xEA6BC48857E0AC4C(&(Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_1)))
			{
				if (unk_0x7F8A39872A07D2CE(unk_0x7888A5D2621AAF2D(iParam0), &(Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_1)))
				{
					Global_1B416.f_7FE8.f_15E0[iVar1 /*78*/].f_42 = 0x00000000;
				}
			}
		}
		iVar1++;
	}
	Global_1B416.f_7FE8.f_15D6 = iParam1;
	Global_12A3A = iParam0;
	Global_1B416.f_7FE8.f_15D4 = 0x00000001;
	func_293(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

void func_293(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_297(uParam1);
		uParam1->f_42 = unk_0x134B62B726CEC8E6(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x7888A5D2621AAF2D(iParam0), 16);
		*uParam1 = unk_0x4EB64970EC291A00(iParam0);
		unk_0x9412F17E127D9759(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xD00EA977553939A7(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x4D842A28A29F18F6(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = unk_0x214BEAD64D777E8F(iParam0);
		uParam1->f_43 = unk_0xF22DC2D0CA24A151(iParam0);
		uParam1->f_45 = unk_0x8EF9B42D5496EC5A(iParam0);
		uParam1->f_46 = unk_0x9C7B8DC16535B879(iParam0);
		unk_0xCCBAB59EE36FFC71(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xE04A80C505823410(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (unk_0x812A93B166D97C60(iParam0, 0x00000002))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001C);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000003))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001D);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001E);
		}
		if (unk_0x812A93B166D97C60(iParam0, 0x00000001))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001F);
		}
		if (uParam1->f_41 == 0xFFFFFFFF && !func_296(uParam1->f_42))
		{
			uParam1->f_41 = 0x00000000;
		}
		if (unk_0x587993B327460A82(iParam0, 0x00000000))
		{
			uParam1->f_44 = unk_0x74A7D92E3874B5C7(iParam0);
		}
		if (unk_0xC41A9202669A24C4(uParam1->f_42))
		{
			if (unk_0x20D5F312838C1136(iParam0))
			{
				switch (unk_0x38E830634323E0D5(iParam0))
				{
					case 0x00000003:
					case 0x00000000:
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000017);
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000016);
						break;
					
					case 0x00000004:
					case 0x00000001:
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000017);
						unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x00000016);
						break;
					
					case 0x00000005:
						unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000017);
						break;
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000017);
			}
		}
		if (!unk_0x616632A7E7824A9A(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x00000009);
		}
		if (unk_0xF566283DA9533594(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000A);
		}
		if (unk_0xC97B0E5C744424FD(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000D);
			unk_0x3139754D4D5C3AC3(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0xE23BB5249C074C85(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000C);
		}
		func_295(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_294(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x92C2290AA46758D3(iParam0, 0x00000000))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000000B);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x0000000B);
		}
		if (unk_0x30F813723591D02E(iParam0, "IgnoredByQuickSave") && unk_0xB2C7CF65CF9B897C(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x5D96D8530B3D0904(&(uParam1->f_4D), 0x0000001B);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam1->f_4D), 0x0000001B);
		}
	}
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 0x00000000;
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			return 0x00000002;
			break;
		
		case 0x00000004:
			return 0x00000003;
			break;
		
		case 0x00000005:
			return 0x00000004;
			break;
		
		case 0x00000006:
			return 0x00000005;
			break;
		
		case 0x00000007:
			return 0x00000006;
			break;
		
		case 0x00000008:
			return 0x00000007;
			break;
		
		case 0x00000009:
			return 0x00000008;
			break;
		
		case 0x0000000A:
			return 0x00000018;
			break;
		
		case 0x0000000B:
			return 0x00000019;
			break;
		
		case 0x0000000C:
			return 0x0000001A;
			break;
	}
	return 0x00000000;
}

int func_295(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xDF1306B443CD3D15(*iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x40B3F576B41FA183(*iParam0) == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 0x00000011 || iVar1 == 0x00000012) || iVar1 == 0x00000013) || iVar1 == 0x00000014) || iVar1 == 0x00000015)
		{
			(*uParam1)[iVar0] = 0x00000000;
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 0x00000001;
			}
		}
		else if (iVar1 == 0x00000016)
		{
			if (unk_0xB97ED2A4B56844DE(*iParam0, iVar1))
			{
				switch (unk_0x3C076D736FE6B7A6(*iParam0))
				{
					case 0x000000FF:
						(*uParam1)[iVar0] = 0x00000001;
						break;
					
					case 0x00000000:
						(*uParam1)[iVar0] = 0x00000002;
						break;
					
					case 0x00000001:
						(*uParam1)[iVar0] = 0x00000003;
						break;
					
					case 0x00000002:
						(*uParam1)[iVar0] = 0x00000004;
						break;
					
					case 0x00000003:
						(*uParam1)[iVar0] = 0x00000005;
						break;
					
					case 0x00000004:
						(*uParam1)[iVar0] = 0x00000006;
						break;
					
					case 0x00000005:
						(*uParam1)[iVar0] = 0x00000007;
						break;
					
					case 0x00000006:
						(*uParam1)[iVar0] = 0x00000008;
						break;
					
					case 0x00000007:
						(*uParam1)[iVar0] = 0x00000009;
						break;
					
					case 0x00000008:
						(*uParam1)[iVar0] = 0x0000000A;
						break;
					
					case 0x00000009:
						(*uParam1)[iVar0] = 0x0000000B;
						break;
					
					case 0x0000000A:
						(*uParam1)[iVar0] = 0x0000000C;
						break;
					
					case 0x0000000B:
						(*uParam1)[iVar0] = 0x0000000D;
						break;
					
					case 0x0000000C:
						(*uParam1)[iVar0] = 0x0000000E;
						break;
					
					case 0x0000000D:
						(*uParam1)[iVar0] = 0x0000000F;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0x00000000;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x0ECB5CA5140957AD(*iParam0, iVar0) + 1;
			if (iVar0 == 0x00000017)
			{
				(*uParam2)[0x00000000] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
			else if (iVar0 == 0x00000018)
			{
				(*uParam2)[0x00000001] = unk_0x3A5601978F787E51(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

int func_296(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case 0xC4810400:
			return 0x00000001;
		
		default:
	}
	return 0x00000000;
}

void func_297(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0x00000000;
	uParam0->f_4D = 0x00000000;
	uParam0->f_41 = 0x00000000;
	uParam0->f_3E = 0x00000000;
	uParam0->f_3F = 0x00000000;
	uParam0->f_40 = 0x00000000;
	uParam0->f_4A = 0x00000000;
	uParam0->f_4B = 0x00000000;
	uParam0->f_4C = 0x00000000;
	*uParam0 = 0x00000000;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000031)
	{
		uParam0->f_9[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		uParam0->f_3B[iVar0] = 0x00000000;
		iVar0++;
	}
	uParam0->f_43 = 0x00000000;
	uParam0->f_44 = 0x00000000;
	uParam0->f_45 = 0x00000000;
	uParam0->f_46 = 0x00000001;
	uParam0->f_47 = 0x00000000;
	uParam0->f_48 = 0x00000000;
	uParam0->f_49 = 0x00000000;
}

int func_298(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_305(iParam0, 0x00000000, 0x00000000)) || func_305(iParam0, 0x00000001, 0x00000000)) || func_305(iParam0, 0x00000002, 0x00000000)) || func_304(iParam0) != 0x00000091) || func_303(iParam0)) || func_302(iParam0)) || func_301(iParam0)) || func_300(iParam0)) || !func_299(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_302(iParam0))
		{
		}
		if (func_302(iParam0))
		{
		}
		if (func_305(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_305(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_305(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_304(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_299(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_169(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	if (((unk_0xA7082C42B8809BF2(iParam0) || unk_0xC41A9202669A24C4(iParam0)) || unk_0xAFB8495D36825275(iParam0)) || unk_0xA7D7011F9888A365(iParam0))
	{
		return 0x00000000;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 0x73920F8E:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

int func_300(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_169(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_301(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000003)
	{
		if (unk_0xC844350D5D58C99A(Global_17769[iVar0]))
		{
			if (Global_17769[iVar0] == iParam0)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_302(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(iParam0) && unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000009)
		{
			if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]) && unk_0xDF1306B443CD3D15(Global_1774B[iVar0], 0x00000000))
			{
				if (Global_1774B[iVar0] == iParam0 && unk_0x134B62B726CEC8E6(Global_1774B[iVar0]) == unk_0x134B62B726CEC8E6(iParam0))
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

int func_303(int iParam0)
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[0x00000018]))
	{
		if (iParam0 == Global_126B1.f_1E4[0x00000018])
		{
			return 0x00000000;
		}
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000044)
	{
		if (unk_0xC844350D5D58C99A(Global_126B1.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 0x00000018 && iVar0 != 0x00000015) && iVar0 != 0x00000016) && iVar0 != 0x00000017) && iVar0 != 0x0000001B) && iVar0 != 0x0000001E) && iVar0 != 0x00000021) && iVar0 != 0x0000001C) && iVar0 != 0x0000001F) && iVar0 != 0x00000022) && iVar0 != 0x0000001A) && iVar0 != 0x0000001D) && iVar0 != 0x00000020)
			{
				if (iParam0 == Global_126B1.f_1E4[iVar0])
				{
					return 0x00000001;
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_304(int iParam0)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000091;
	}
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000091;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000009)
	{
		if (unk_0xC844350D5D58C99A(Global_1774B[iVar0]))
		{
			if (Global_1774B[iVar0] == iParam0)
			{
				return Global_17755[iVar0];
			}
		}
		iVar0++;
	}
	return 0x00000091;
}

int func_305(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_306(iParam1, iVar0, &sVar1, &iVar2))
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

int func_306(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_307(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 0x00000001;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_12B4E)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0x00000000)
			{
				unk_0xA245D14CC59CDD36(iParam2, 0x00000000);
			}
			else
			{
				unk_0xA245D14CC59CDD36(iParam2, 0x00000001);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0x00000000)
			{
				unk_0x971EF1DE410C56CF(iParam2, 0x00000000);
			}
			else
			{
				unk_0x971EF1DE410C56CF(iParam2, 0x00000001);
			}
		}
	}
}

bool func_308(char* sParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xA0F4292EA950943D(sParam0);
	if (!Global_12B4D)
	{
		if (!bVar0)
		{
			Global_12B4D = 0x00000001;
		}
	}
	return bVar0;
}

void func_309()
{
	Global_181DF = 0x00000001;
}

int func_310(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 0x00000007)
	{
		return 0x00000000;
	}
	if (!bParam3)
	{
		if (Global_177DE.f_2C == 0x00000001)
		{
			return 0x00000002;
		}
	}
	if (iParam1 == 0x00000000)
	{
		if (func_241(0x00000000))
		{
			return 0x00000000;
		}
		Global_A1B3++;
		*iParam0 = Global_A1B3;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0x00000000);
		Global_56C3.f_5 = 0x00000000;
		if (iParam2 != 0x00000005)
		{
			unk_0x4C7B0415764B64BA(0x00000008);
		}
		Global_A1D7 = iParam2;
		Global_A1B1 = *iParam0;
		Global_A1B2 = iParam4;
		Global_A1B0 = 0x00000000;
		return 0x00000001;
	}
	if (*iParam0 != 0xFFFFFFFF)
	{
		if (Global_A1B0 > 0x00000000)
		{
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < Global_A1B0)
			{
				if (Global_A1B6[iVar0 /*4*/] == *iParam0)
				{
					return 0x00000002;
				}
				iVar0++;
			}
		}
		else if (Global_A1B1 == *iParam0)
		{
			return 0x00000001;
		}
		*iParam0 = 0xFFFFFFFF;
	}
	if (*iParam0 == 0xFFFFFFFF)
	{
		if (!func_150(iParam2))
		{
			return 0x00000000;
		}
		if (Global_A1B0 == 0x00000008)
		{
			return 0x00000000;
		}
		Global_A1B3++;
		*iParam0 = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/] = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/].f_1 = iParam1;
		Global_A1B6[Global_A1B0 /*4*/].f_2 = iParam2;
		Global_A1B6[Global_A1B0 /*4*/].f_3 = 0x00000000;
		Global_A1B0++;
		if (iParam4 != 0x00000000)
		{
			func_311(iParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_311(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_A1B0 == 0x00000000)
	{
		return;
	}
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_A1B0)
	{
		if (Global_A1B6[iVar0 /*4*/] == *uParam0)
		{
			Global_A1B6[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = 0xFFFFFFFF;
}

void func_312(var uParam0)
{
	if (func_12(0x00000002, *uParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000002))
			{
				func_70(uParam0, func_313(*uParam0));
				func_86(0x00000002, *uParam0, 0x00000000);
			}
			else
			{
				func_122(uParam0);
				func_86(0x00000002, *uParam0, 0x00000000);
			}
		}
	}
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return func_330(0x00000012);
			break;
		
		case 0x00000001:
			return func_330(0x00000016);
			break;
		
		case 0x00000002:
			return func_330(0x00000028);
			break;
		
		case 0x00000003:
			return func_330(0x00000008);
			break;
		
		case 0x00000004:
			return func_330(0x0000001A);
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

void func_314(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		fVar0 = SYSTEM::VDIST2(uParam0->f_191, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001));
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000001))
		{
			func_322(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || unk_0xEAE0D21A50E6C7F4(Global_17221, *uParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000000))
			{
				if (func_321(uParam0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_17221, *uParam0))
					{
						if (unk_0xEAE0D21A50E6C7F4(Global_17223, *uParam0))
						{
							func_316(uParam0);
						}
					}
					else
					{
						func_316(uParam0);
					}
				}
			}
			else
			{
				func_315(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !unk_0xEAE0D21A50E6C7F4(Global_17221, *uParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000000))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000001))
				{
					func_154(uParam0);
				}
				func_153(uParam0);
			}
		}
	}
}

void func_315(var uParam0)
{
	if (!unk_0x1D6041CB88128065())
	{
		return;
	}
	unk_0xD7992BEF7A9D109E(&(uParam0->f_1.f_110), 0x00000005);
	unk_0xAE317D00A5A55DF6("HEIST_BULLETIN_BOARD", 0x00000000, 0xFFFFFFFF);
	if (*uParam0 != 0x00000001)
	{
		unk_0x523BCC9DC80CD82F(joaat("prop_ld_planning_pin_01"));
		unk_0x523BCC9DC80CD82F(joaat("prop_ld_planning_pin_02"));
		unk_0x523BCC9DC80CD82F(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_19D = unk_0x5275223F099DEF26(&(uParam0->f_1.f_10C));
	uParam0->f_19E = unk_0x5275223F099DEF26("INSTRUCTIONAL_BUTTONS");
	unk_0x5D96D8530B3D0904(&Global_17220, *uParam0);
	unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000000);
}

void func_316(var uParam0)
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000001))
	{
		iVar0 = 0x00000000;
		while (iVar0 < uParam0->f_1.f_60)
		{
			func_37(uParam0, iVar0);
			iVar0++;
		}
		func_34(uParam0);
		func_33(uParam0);
		func_320(uParam0);
		func_319(uParam0);
		func_317(uParam0);
		unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000001);
	}
}

void func_317(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_1.f_21)
	{
		if (func_327(*uParam0, uParam0->f_1.f_4B[iVar0]))
		{
			switch ((iVar0 % 0x00000003))
			{
				case 0x00000000:
					iVar1 = joaat("prop_ld_planning_pin_01");
					break;
				
				case 0x00000001:
					iVar1 = joaat("prop_ld_planning_pin_02");
					break;
				
				case 0x00000002:
					iVar1 = joaat("prop_ld_planning_pin_03");
					break;
			}
			fVar2 = (SYSTEM::TO_FLOAT((unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF) - 0x00007FFF)) / 4000f);
			fVar3 = (SYSTEM::TO_FLOAT((unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF) - 0x00007FFF)) / 4000f);
			vVar4 = { func_318(uParam0, &(uParam0->f_1.f_22[iVar0 /*2*/])) };
			uParam0->f_1AC[iVar0] = unk_0x7707E48765093646(iVar1, vVar4, 0x00000001, 0x00000001, 0x00000000);
			unk_0xC023D1C4BF532815(uParam0->f_1AC[iVar0], fVar2, 0f, (uParam0->f_194 + fVar3), 0x00000002, 0x00000001);
			unk_0x73270B3C9CC833FD(uParam0->f_1AC[iVar0], 0x00000001, 0x00000000);
			unk_0xE121AE1BBF90E186(uParam0->f_1AC[iVar0], 0x00000001);
			unk_0x20641932E5104B25(uParam0->f_1AC[iVar0], 0x00000000, 0x00000000);
			unk_0x08543B8F6DBE0B08(uParam0->f_1AC[iVar0], 0x00000000);
			unk_0x1E9649458B15960F(uParam0->f_1AC[iVar0], 0x00000001);
		}
		iVar0++;
	}
	unk_0x0674E58A79778E99(&Global_17223, *uParam0);
}

Vector3 func_318(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_30(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_194;
	vVar7 = { uParam0->f_191 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	return vVar7;
}

void func_319(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = *uParam0;
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_1.f_75)
	{
		iVar2 = uParam0->f_1.f_BA[iVar0];
		bVar3 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_78[iVar1], iVar2);
		if (uParam0->f_1.f_8D[iVar0 /*2*/] == 0x00000000 && uParam0->f_1.f_8D[iVar0 /*2*/].f_1 == 0x00000000)
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_HEIST_ASSET");
			unk_0x3CAEA85DA607305E(uParam0->f_1.f_76[iVar0]);
			unk_0x1200CC973A2399C8(bVar3);
			unk_0x7E60D21B163E9D56();
		}
		else
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_HEIST_ASSET");
			unk_0x3CAEA85DA607305E(uParam0->f_1.f_76[iVar0]);
			unk_0x1200CC973A2399C8(bVar3);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_8D[iVar0 /*2*/]));
			unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_8D[iVar0 /*2*/].f_1));
			unk_0x7E60D21B163E9D56();
		}
		iVar0++;
	}
}

void func_320(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "CREATE_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_19F + 1);
	unk_0x3CAEA85DA607305E(0x00000002);
	unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_E));
	unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_E.f_1));
	unk_0x7E60D21B163E9D56();
	iVar0 = *uParam0;
	iVar1 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < uParam0->f_1.f_D1)
	{
		if (func_327(iVar0, uParam0->f_1.f_F8[iVar2]))
		{
			iVar3 = 0x00000000;
			if (func_327(iVar0, uParam0->f_1.f_102[iVar2]))
			{
				iVar3 = 0x00000001;
			}
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F + 1);
			unk_0x3CAEA85DA607305E(iVar1);
			unk_0x3CAEA85DA607305E(iVar3);
			func_10(&(uParam0->f_1.f_D3[iVar2 /*4*/]));
			unk_0x7E60D21B163E9D56();
			iVar1++;
		}
		iVar2++;
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "DISPLAY_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_19F + 1);
	unk_0x7E60D21B163E9D56();
	if (func_327(*uParam0, uParam0->f_1.f_D2))
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
		unk_0x3CAEA85DA607305E(uParam0->f_19F + 1);
		unk_0x1200CC973A2399C8(0x00000001);
		unk_0x7E60D21B163E9D56();
	}
	else
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
		unk_0x3CAEA85DA607305E(uParam0->f_19F + 1);
		unk_0x1200CC973A2399C8(0x00000000);
		unk_0x7E60D21B163E9D56();
	}
}

int func_321(var uParam0)
{
	if (!unk_0x83D8570832F172A7(uParam0->f_19D))
	{
		return 0x00000000;
	}
	if (!unk_0x83D8570832F172A7(uParam0->f_19E))
	{
		return 0x00000000;
	}
	if (!unk_0x67C1D9E5B91B2E37(0x00000005))
	{
		return 0x00000000;
	}
	if (unk_0x1D6041CB88128065())
	{
		if (!unk_0xAE317D00A5A55DF6("HEIST_BULLETIN_BOARD", 0x00000000, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
	}
	else
	{
		return 0x00000000;
	}
	if (*uParam0 != 0x00000001)
	{
		if ((!unk_0xB87F6CF6E5628C67(joaat("prop_ld_planning_pin_01")) || !unk_0xB87F6CF6E5628C67(joaat("prop_ld_planning_pin_02"))) || !unk_0xB87F6CF6E5628C67(joaat("prop_ld_planning_pin_03")))
		{
			return 0x00000000;
		}
	}
	unk_0x5D96D8530B3D0904(&Global_17222, *uParam0);
	return 0x00000001;
}

void func_322(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_327(*uParam0, 0x00000000))
	{
		func_323(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		unk_0x0103165890FA9E7F(uParam0->f_19D, uParam0->f_191 + Vector(fVar1, (fVar0 * SYSTEM::COS((90f - uParam0->f_194))), (fVar0 * SYSTEM::SIN((90f - uParam0->f_194)))), 180f, 0f, uParam0->f_194, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 0x00000002);
	}
}

void func_323(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_17220, *uParam0))
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000010);
		unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000F);
		unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x0000000E);
		unk_0x0674E58A79778E99(&Global_17220, *uParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x00000010))
	{
		iVar0 = 0x00000000;
		while (iVar0 < uParam0->f_1.f_75)
		{
			iVar1 = uParam0->f_1.f_BA[iVar0];
			bVar2 = func_327(*uParam0, iVar1);
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_HEIST_ASSET");
			unk_0x3CAEA85DA607305E(uParam0->f_1.f_76[iVar0]);
			unk_0x1200CC973A2399C8(bVar2);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x7E60D21B163E9D56();
			iVar0++;
		}
		unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000010);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000F))
	{
		iVar0 = 0x00000000;
		while (iVar0 < uParam0->f_1.f_21)
		{
			if (func_327(*uParam0, uParam0->f_1.f_4B[iVar0]))
			{
				if (!unk_0xC844350D5D58C99A(uParam0->f_1AC[iVar0]))
				{
					switch ((iVar0 % 0x00000003))
					{
						case 0x00000000:
							iVar3 = joaat("prop_ld_planning_pin_01");
							break;
						
						case 0x00000001:
							iVar3 = joaat("prop_ld_planning_pin_02");
							break;
						
						case 0x00000002:
							iVar3 = joaat("prop_ld_planning_pin_03");
							break;
					}
					fVar4 = (SYSTEM::TO_FLOAT((unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF) - 0x00007FFF)) / 4000f);
					fVar5 = (SYSTEM::TO_FLOAT((unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF) - 0x00007FFF)) / 4000f);
					vVar6 = { func_318(uParam0, &(uParam0->f_1.f_22[iVar0 /*2*/])) };
					uParam0->f_1AC[iVar0] = unk_0x7707E48765093646(iVar3, vVar6, 0x00000001, 0x00000001, 0x00000000);
					unk_0xC023D1C4BF532815(uParam0->f_1AC[iVar0], fVar4, 0f, (uParam0->f_194 + fVar5), 0x00000002, 0x00000001);
					unk_0x73270B3C9CC833FD(uParam0->f_1AC[iVar0], 0x00000001, 0x00000000);
					unk_0xE121AE1BBF90E186(uParam0->f_1AC[iVar0], 0x00000001);
					unk_0x20641932E5104B25(uParam0->f_1AC[iVar0], 0x00000000, 0x00000000);
					unk_0x08543B8F6DBE0B08(uParam0->f_1AC[iVar0], 0x00000000);
					unk_0x1E9649458B15960F(uParam0->f_1AC[iVar0], 0x00000001);
				}
			}
			else if (!unk_0xC844350D5D58C99A(uParam0->f_1AC[iVar0]))
			{
				unk_0xF690C84DADBB3551(&(uParam0->f_1AC[iVar0]));
			}
			iVar0++;
		}
		unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x0000000F);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0x0000000E))
	{
		func_324(uParam0);
		func_34(uParam0);
		func_320(uParam0);
		unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x0000000E);
	}
}

void func_324(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(uParam0->f_19F + 1);
	unk_0x7E60D21B163E9D56();
}

bool func_325(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_326(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

bool func_327(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_78[iParam0], iParam1);
}

void func_328()
{
	int iVar0;
	
	iVar0 = func_100();
	if (func_102(iVar0))
	{
		if (!func_241(0x00000000))
		{
			if (!func_326(0x00000045) && !func_326(0x00000046))
			{
				if (func_329(0x00000045) || func_329(0x00000046))
				{
					if (Global_1B416.f_1C58.f_E3[0x00000046] != 0x00000001)
					{
						Global_1B416.f_1C58.f_E3[0x00000046] = 0x00000001;
						Global_95FE[0x00000046] = 0x00000000;
						Global_96C5[0x00000046] = 0x00000001;
					}
					if (Global_1B416.f_1C58.f_E3[0x00000047] != 0x00000002)
					{
						Global_1B416.f_1C58.f_E3[0x00000047] = 0x00000002;
						Global_95FE[0x00000047] = 0x00000000;
						Global_96C5[0x00000047] = 0x00000001;
					}
					if (Global_1B416.f_1C58.f_E3[0x00000049] != 0x00000001)
					{
						Global_1B416.f_1C58.f_E3[0x00000049] = 0x00000001;
						Global_95FE[0x00000049] = 0x00000000;
						Global_96C5[0x00000049] = 0x00000001;
					}
					if (Global_1B416.f_1C58.f_E3[0x00000048] != 0x00000000)
					{
						Global_1B416.f_1C58.f_E3[0x00000048] = 0x00000000;
						Global_95FE[0x00000048] = 0x00000000;
						Global_96C5[0x00000048] = 0x00000001;
					}
					if (Global_1B416.f_1C58.f_E3[0x0000004A] != 0x00000000)
					{
						Global_1B416.f_1C58.f_E3[0x0000004A] = 0x00000000;
						Global_95FE[0x0000004A] = 0x00000000;
						Global_96C5[0x0000004A] = 0x00000001;
					}
				}
			}
		}
	}
}

int func_329(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (Global_16A39[iParam0 /*2*/])
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Global_15D98)
	{
		if (Global_15D98[iVar0 /*5*/] != 0xFFFFFFFF)
		{
			if (Global_12C5B.f_6D[Global_15D98[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_330(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_331(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar1;
	
	*uParam0 = iParam1;
	vVar0 = { Global_171E2[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar1 = Global_171E2[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_191 = { vVar0 };
	uParam0->f_194 = fVar1;
	uParam0->f_195 = { vVar0 + Vector(0f, (-uParam0->f_1.f_8 * SYSTEM::COS((360f - fVar1))), (-uParam0->f_1.f_8 * SYSTEM::SIN((360f - fVar1)))) };
	uParam0->f_198 = { -0.85f, 0f, fVar1 };
	unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0x00000004);
	uParam0->f_19F = uParam0->f_1.f_60;
	uParam0->f_1A0 = 0xFFFFFFFF;
	unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000000);
	unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000001);
	unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0x00000002);
	uParam0->f_1D0 = 0x00000000;
	uParam0->f_1C3 = 0xFFFFFFFF;
}

void func_332(var uParam0, var uParam1)
{
	func_342(uParam0, 0x00000001, "HEIST_AGENCY", "BOARD5", "AHFAUD", "CRWAUD", 0x00000003, 0x00000000, 0x00000006, 0x0000000D, uParam1, 708.9957f, -965.256f, 31.39533f, 5.5f, 6.25f, 2f);
	func_341(uParam0, 0x000002EE, 0x0000021C, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 0x00000177, 0x000000FA, 0x00000088, 0x0000019B, 0x0000010C, 0x0000019F, 0x00000191, 0x000001A2, 0x000001E2, 0x0000019D, 0x00000000, 0x00000000, 0x0000029E, 0x0000015E, 0x00000000, 0x00000055, 0x000002AC, 0x0000006A);
	func_340(uParam0, 20f, 22f, 28f);
	func_339(uParam0, "", "", "", "", "AHP12", "", "AHP13", "AHLONG");
	func_338(uParam0, 0x00000001, "CRW_GM", "");
	func_338(uParam0, 0x00000003, "CRW_HW", "");
	func_338(uParam0, 0x00000004, "CRW_NR", "");
	func_338(uParam0, 0x00000005, "CRW_DJ", "");
	func_338(uParam0, 0x00000006, "CRW_PH", "");
	func_338(uParam0, 0x00000007, "CRW_CF", "");
	func_338(uParam0, 0x00000008, "CRW_ET", "");
	func_338(uParam0, 0x00000009, "CRW_KD", "");
	func_338(uParam0, 0x0000000A, "CRW_PM", "CRM_PM");
	func_338(uParam0, 0x0000000C, "CRW_RL", "CRM_RL");
	func_338(uParam0, 0x0000000D, "CRW_TM", "CRM_TM");
	func_337(uParam0, 0x00000018, "AHRIC1");
	func_337(uParam0, 0x0000001A, "AHKAR1");
	func_337(uParam0, 0x00000012, "AHJH");
	func_337(uParam0, 0x00000013, "AHPAL");
	func_337(uParam0, 0x00000015, "AHBOTH");
	func_336(uParam0, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
	func_336(uParam0, 0x00000002, 0x00000000, 0x00000000, 0x00000000);
	func_336(uParam0, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
	func_336(uParam0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
	func_336(uParam0, 0x00000005, 0x00000002, 0x00000000, 0x00000000);
	func_336(uParam0, 0x00000006, 0x00000002, 0x00000000, 0x00000000);
	func_336(uParam0, 0x00000004, 0x00000002, 0x00000000, 0x00000000);
	func_336(uParam0, 0x00000009, 0x00000002, 0x00000000, 0x00000000);
	func_336(uParam0, 0x00000000, 0x00000003, 0x00000000, 0x00000000);
	func_336(uParam0, 0x00000001, 0x00000003, 0x00000000, 0x00000000);
	func_335(uParam0, 0x00000000, 0x00000001, "H_TD_JANI");
	func_335(uParam0, 0x00000001, 0x00000003, "H_TD_BLUP");
	func_335(uParam0, 0x00000002, 0x00000004, "H_TD_PLAN");
	func_335(uParam0, 0x00000002, 0x00000005, "H_TD_CREW");
	func_335(uParam0, 0x00000006, 0x00000007, "H_TD_FIRE");
	func_335(uParam0, 0x00000006, 0x00000008, "H_TD_GETA");
	func_334(uParam0, 0x00000002, 0x00000046, 0x00000047);
	func_334(uParam0, 0x00000002, 0x0000002C, 0x000000AE);
	func_334(uParam0, 0x00000002, 0x0000002D, 0x000000D1);
	func_334(uParam0, 0x00000003, 0x000000B2, 0x00000044);
	func_334(uParam0, 0x00000003, 0x00000141, 0x00000041);
	func_334(uParam0, 0x00000002, 0x0000021A, 0x00000034);
	func_334(uParam0, 0x00000002, 0x000001D6, 0x00000052);
	func_334(uParam0, 0x00000002, 0x000001C7, 0x000000CF);
	func_334(uParam0, 0x00000002, 0x00000236, 0x000000CF);
	func_334(uParam0, 0x00000002, 0x000002A1, 0x00000153);
	func_334(uParam0, 0x00000002, 0x000002A7, 0x000001BA);
	func_334(uParam0, 0x00000002, 0x000002B1, 0x0000003F);
	func_333(uParam0, 0x00000002, "AHP8", 0x00000037, 0x000000C5, 0x00000001);
	func_333(uParam0, 0x00000002, "AHP9", 0x000000FC, 0x00000096, 0x00000001);
	func_333(uParam0, 0x00000002, "AHP10", 0x00000046, 0x00000061, 0x00000001);
	func_333(uParam0, 0x00000002, "AHP11", 0x000001F8, 0x0000006A, 0x00000001);
}

void func_333(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	
	if (uParam0->f_171 < 0x00000007)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_182[uParam0->f_171] = iParam1;
		uParam0->f_173[uParam0->f_171 /*2*/] = iParam3;
		uParam0->f_173[uParam0->f_171 /*2*/].f_1 = iParam4;
		uParam0->f_118[uParam0->f_171 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_172), uParam0->f_171);
		}
		uParam0->f_171++;
	}
}

void func_334(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_21 < 0x00000014)
	{
		uParam0->f_4B[uParam0->f_21] = iParam1;
		uParam0->f_22[uParam0->f_21 /*2*/] = iParam2;
		uParam0->f_22[uParam0->f_21 /*2*/].f_1 = iParam3;
		uParam0->f_21++;
	}
}

void func_335(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	struct<8> Var0;
	
	if (uParam0->f_D1 < 0x00000009)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_F8[uParam0->f_D1] = iParam1;
		uParam0->f_102[uParam0->f_D1] = iParam2;
		MemCopy(&(uParam0->f_D3[uParam0->f_D1 /*4*/]), {Var0}, 0x00000004);
		uParam0->f_D1++;
	}
}

void func_336(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (uParam0->f_75 < 0x00000016)
	{
		uParam0->f_76[uParam0->f_75] = iParam1;
		uParam0->f_BA[uParam0->f_75] = iParam2;
		uParam0->f_8D[uParam0->f_75 /*2*/] = iParam3;
		uParam0->f_8D[uParam0->f_75 /*2*/].f_1 = iParam4;
		uParam0->f_75++;
	}
}

void func_337(var uParam0, int iParam1, char* sParam2)
{
	struct<2> Var0;
	
	StringCopy(&Var0, sParam2, 8);
	if (unk_0x7F8A39872A07D2CE(sParam2, ""))
	{
		return;
	}
	uParam0->f_130[iParam1 /*2*/] = { Var0 };
}

void func_338(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var1, sParam3, 8);
	uParam0->f_130[iParam1 /*2*/] = { Var0 };
	if (!unk_0x7F8A39872A07D2CE(sParam3, ""))
	{
		switch (iParam1)
		{
			case 0x0000000A:
				uParam0->f_130[0x0000000E /*2*/] = { Var1 };
				break;
			
			case 0x0000000D:
				uParam0->f_130[0x00000010 /*2*/] = { Var1 };
				break;
			
			case 0x0000000C:
				uParam0->f_130[0x0000000F /*2*/] = { Var1 };
				break;
			
			case 0x0000000B:
				uParam0->f_130[0x00000011 /*2*/] = { Var1 };
				break;
			
			default:
				break;
			}
	}
}

void func_339(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	struct<4> Var0;
	struct<4> Var1;
	struct<4> Var2;
	struct<4> Var3;
	struct<2> Var4;
	struct<2> Var5;
	struct<2> Var6;
	struct<2> Var7;
	
	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var1, sParam2, 16);
	StringCopy(&Var2, sParam3, 16);
	StringCopy(&Var3, sParam4, 16);
	StringCopy(&Var4, sParam5, 8);
	StringCopy(&Var5, sParam6, 8);
	StringCopy(&Var6, sParam7, 8);
	StringCopy(&Var7, sParam8, 8);
	uParam0->f_14[0x00000000 /*4*/] = { Var0 };
	uParam0->f_14[0x00000001 /*4*/] = { Var1 };
	uParam0->f_6C[0x00000000 /*4*/] = { Var2 };
	uParam0->f_6C[0x00000001 /*4*/] = { Var3 };
	uParam0->f_118[0x00000001 /*2*/] = { Var4 };
	uParam0->f_118[0x00000002 /*2*/] = { Var5 };
	uParam0->f_118[0x00000000 /*2*/] = { Var6 };
	uParam0->f_118[0x00000003 /*2*/] = { Var7 };
}

void func_340(var uParam0, float fParam1, float fParam2, float fParam3)
{
	uParam0->f_9 = fParam1;
	uParam0->f_A = fParam2;
	uParam0->f_B = fParam3;
}

void func_341(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_C = iParam8;
	uParam0->f_C.f_1 = iParam9;
	uParam0->f_61[0x00000000 /*2*/] = iParam10;
	uParam0->f_61[0x00000000 /*2*/].f_1 = iParam11;
	uParam0->f_61[0x00000001 /*2*/] = iParam12;
	uParam0->f_61[0x00000001 /*2*/].f_1 = iParam13;
	uParam0->f_61[0x00000002 /*2*/] = iParam14;
	uParam0->f_61[0x00000002 /*2*/].f_1 = iParam15;
	uParam0->f_61[0x00000003 /*2*/] = iParam16;
	uParam0->f_61[0x00000003 /*2*/].f_1 = iParam17;
	uParam0->f_61[0x00000004 /*2*/] = iParam18;
	uParam0->f_61[0x00000004 /*2*/].f_1 = iParam19;
	uParam0->f_10 = iParam20;
	uParam0->f_10.f_1 = iParam21;
	uParam0->f_12 = iParam22;
	uParam0->f_12.f_1 = iParam23;
	uParam0->f_E = iParam24;
	uParam0->f_E.f_1 = iParam25;
}

void func_342(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, vector3 vParam11, vector3 vParam12)
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_10C), sParam2, 16);
	StringCopy(&(uParam0->f_110), sParam3, 16);
	StringCopy(&(uParam0->f_114), sParam4, 8);
	StringCopy(&(uParam0->f_116), sParam5, 8);
	uParam0->f_1D = iParam6;
	uParam0->f_1E[0x00000000] = iParam8;
	uParam0->f_1E[0x00000001] = iParam9;
	uParam0->f_D2 = iParam7;
	uParam0->f_60 = uParam10;
	uParam0->f_18A = { vParam11 };
	uParam0->f_18D = { vParam12 };
}

int func_343(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_344(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 0x0000001F)
	{
		iVar0 = 0x00000009;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 0x0000000A;
		iVar1 = (iParam0 - 0x00000020);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iVar0], iVar1))
	{
		return 0x00000000;
	}
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_2378.f_63.f_DB[iVar0]), iVar1);
	return 0x00000001;
}

void func_345()
{
	while (!func_152(&Local_91))
	{
		SYSTEM::WAIT(0x00000000);
	}
	func_115(0x00000006, 0x00000000);
	func_115(0x00000008, 0x00000000);
	func_115(0x00000007, 0x00000000);
	func_86(0x00000001, 0x00000003, 0x00000000);
	func_86(0x00000002, 0x00000003, 0x00000000);
	unk_0x2952D66A502EA873(iLocal_89, 0x00000000);
	if (iLocal_90 != 0xFFFFFFFF)
	{
		if (unk_0x49083FDB78AC0509(iLocal_90))
		{
			unk_0xDDABC98CFF1A4C60(iLocal_90);
		}
	}
	unk_0xEFED0CD6E25037B9();
	unk_0x17E8C6920A1E386F(Local_91.f_1.f_18A - Local_91.f_1.f_18D, Local_91.f_1.f_18A + Local_91.f_1.f_18D, 0x00000001, 0x00000000);
	unk_0x34D79252800B23FF(0x00000005);
	unk_0x5C8D148FC238F38A();
	if (iLocal_42 != 0xFFFFFFFF)
	{
		func_163(&iLocal_42);
	}
	unk_0x10FAF14A60A0DBE1();
}

