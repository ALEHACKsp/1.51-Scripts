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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	vector3 vLocal_77 = { 0f, 0f, 0f };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 1132396544;
	var uLocal_95 = 0;
	var uLocal_96 = -1082130432;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 8;
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
	var uLocal_156 = -1;
	var uLocal_157 = 1092616192;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	struct<21> Local_161 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_162[15];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<2> Local_165 = { 0, 16 } ;
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
	struct<411> Local_231 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = -1;
	var uLocal_240 = -1;
	var uLocal_241 = -1;
	var uLocal_242 = -1;
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
	int iLocal_258 = 0;
	vector3 vLocal_259[1] = {{ 0f, 0f, 0f } };
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	vector3 vLocal_262 = { 0f, 0f, 0f };
	vector3 vLocal_263 = { 0f, 0f, 0f };
	vector3 vLocal_264 = { 0f, 0f, 0f };
	vector3 vLocal_265 = { 0f, 0f, 0f };
	vector3 vLocal_266 = { 0f, 0f, 0f };
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	var uLocal_269 = 0;
	int iLocal_270 = 0;
	float fLocal_271 = 0f;
	float fLocal_272 = 0f;
	float fLocal_273 = 0f;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	bool bLocal_277 = 0;
	bool bLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	char* sLocal_281 = NULL;
	char* sLocal_282 = NULL;
	bool bLocal_283 = 0;
	struct<28> Local_284 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 5;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 1097859072;
	var uLocal_331 = 1500;
	var uLocal_332 = 45;
	var uLocal_333 = 1103626240;
	var uLocal_334 = 5;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 0x00000003;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 0x00000001;
	iLocal_40 = 0x00000041;
	iLocal_41 = 0x00000031;
	iLocal_42 = 0x00000040;
	iLocal_71 = unk_0xAD1355DD1E5D2D9B();
	uLocal_72 = unk_0x817B3657F78A517A();
	vLocal_77 = { 500f, 500f, 500f };
	iLocal_260 = joaat("a_m_y_soucent_04");
	vLocal_262 = { -1230.55f, -896.7814f, 11.11059f };
	vLocal_263 = { 58.8213f, 293.848f, 109.6124f };
	vLocal_264 = { 62.7742f, 307.4984f, 109.981f };
	vLocal_265 = { 0f, 0f, 0f };
	vLocal_266 = { 0f, 0f, 0f };
	iLocal_267 = 0x00000001;
	fLocal_271 = 0f;
	fLocal_272 = 12f;
	sLocal_282 = "random@drunk_driver_1";
	if (unk_0x2EBF608FFE6CA406(0x00000043))
	{
		func_440(0x00000002);
		func_439();
	}
	unk_0x7798376279BB5369(0x00000001);
	func_426();
	while (0x00000001)
	{
		if (unk_0xC844350D5D58C99A(Local_231.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_231);
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0x16F2683693E537C9();
	func_7(&(uParam0->f_F4));
	uParam0->f_1AC = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0x16F2683693E537C9());
	if (iVar1 == 0x00000000)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 0x00000002)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 0x00000001)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_4(int iParam0)
{
	if (func_6(iParam0))
	{
		return func_5(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_5(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_6(int iParam0)
{
	return iParam0 < 0x00000003;
}

void func_7(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(unk_0x16F2683693E537C9());
	if (iVar0 == 0x00000000)
	{
		func_8(uParam0, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
	}
	else if (iVar0 == 0x00000002)
	{
		func_8(uParam0, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
	}
	else if (iVar0 == 0x00000001)
	{
		func_8(uParam0, 0x00000000, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
	}
	else
	{
		func_8(uParam0, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_8(uParam0, 0x00000008, 0x00000000, "TaxiDispatch", 0x00000000, 0x00000001);
}

void func_8(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_9()
{
	if (func_425(&Local_231))
	{
		func_424(&Local_231);
		if (Local_231.f_19A > 0x00000000)
		{
			if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
			{
			}
			if (func_423(&Local_231, 0x00000000))
			{
				func_421();
			}
		}
		else if (func_420(&Local_231, 0x0000001F) > 5f)
		{
			func_440(0x00000002);
			func_439();
		}
	}
	else
	{
		func_419(&Local_231);
		func_385(&Local_231, &uLocal_328);
		func_384(&Local_231, &uLocal_269, 0x00000000);
		func_383(&Local_231);
		if (Local_231.f_19A > 0x00000002 && iLocal_258 == 0x00000000)
		{
			if (!func_382(&Local_231))
			{
				func_349();
			}
			else
			{
				func_343(&Local_231, "Taxi Not Driveable", func_348(&Local_231));
			}
		}
		if (Local_231.f_19A == 0x00000009 && iLocal_258 == 0x00000000)
		{
			func_319(&Local_231, 0x00000000, 0x00000000);
			func_317();
			if (bLocal_277)
			{
				if (func_316())
				{
					func_343(&Local_231, "Rider is too damn uncomfortable.", 0x00000009);
				}
			}
		}
		switch (Local_231.f_19A)
		{
			case 0x00000000:
				func_315(&(vLocal_259[0x00000000 /*3*/]), "TAXI_SC_BN_01", 0x00000064);
				func_314(&Local_231, &vLocal_259);
				func_311();
				func_310(&Local_231, 0x00000010, 4f, 0x00000000);
				func_308(&Local_231, vLocal_263, vLocal_264, "TaxiOtis", iLocal_260, 135.3f, 40f);
				func_306(&Local_231);
				func_305(&Local_231, 0x00000001);
				break;
			
			case 0x00000001:
				if (func_303())
				{
					func_302();
					func_282();
					func_281(&Local_231);
					Local_231.f_E = { vLocal_263 };
					func_305(&Local_231, 0x00000003);
				}
				break;
			
			case 0x00000003:
				if (func_276(&Local_231, 0x00000001))
				{
					if (!unk_0x437347B10A200C4B(Local_231.f_3, 0x00000000))
					{
						unk_0x64F9F278AB9DCA2C(Local_231.f_3, 0x00000003, 0x00000001, 0x00000000, 0x00000000);
						unk_0x64F9F278AB9DCA2C(Local_231.f_3, 0x00000004, 0x00000001, 0x00000000, 0x00000000);
						unk_0x64F9F278AB9DCA2C(Local_231.f_3, 0x00000000, 0x00000001, 0x00000000, 0x00000000);
						unk_0xBAFED2F6486F771A(Local_231.f_3, 0x00000400, 0x00000001);
						unk_0xBAFED2F6486F771A(Local_231.f_3, 0x00020000, 0x00000001);
					}
					func_275(&Local_231, 0x00000001, 0x00000000);
					func_305(&Local_231, 0x00000005);
				}
				break;
			
			case 0x00000005:
				if (func_245(&Local_231, 0x00000000, 0x42200000))
				{
					func_305(&Local_231, 0x0000000F);
				}
				break;
			
			case 0x0000000F:
				if (func_244(&Local_231))
				{
					Local_231.f_11 = { vLocal_262 };
					func_241(&Local_231, 0x00000009, 0x00000001, 0x00000000, 0x00000000);
					func_240(&Local_231);
					Local_231.f_2E = unk_0x7F6DC62EA9922664(Local_231.f_4);
					func_239();
					switch (func_238(&Local_231))
					{
						case 0x00000002:
							sLocal_281 = "vomit_van";
							break;
						
						case 0x00000000:
							sLocal_281 = "vomit_low";
							break;
						
						case 0x00000001:
							sLocal_281 = "vomit_outside";
							break;
					}
					func_305(&Local_231, 0x00000009);
				}
				if (unk_0xDF1306B443CD3D15(Local_231.f_4, 0x00000000))
				{
					if (!unk_0xC42A92762C58E1B9(Local_231.f_2, Local_231.f_4, 0x00000000))
					{
						func_236(&Local_231);
						func_305(&Local_231, 0x00000005);
					}
				}
				break;
			
			case 0x00000009:
				if (!iLocal_280)
				{
					if ((func_235(&Local_231, 0x00000000) || func_235(&Local_231, 0x00000002)) || func_234(&Local_231, 0x00000002))
					{
						iLocal_280 = 0x00000001;
					}
				}
				if (func_231(&Local_231, 0x40C00000) && iLocal_258 == 0x00000001)
				{
					if (iLocal_261 != 0x00000000)
					{
						unk_0xF7E25143642732EA(iLocal_261, 0x00000000);
						iLocal_261 = 0x00000000;
					}
					unk_0xA3BF0AA5A2608191(Local_231.f_3);
					bLocal_277 = 0x00000001;
				}
				switch (iLocal_258)
				{
					case 0x00000000:
						if (func_213(&Local_231, 0x40C00000, 0x41700000))
						{
							func_211(&uLocal_287);
							func_210(&Local_284, 0x00000003, 0x00000000);
							unk_0x142CC44DB769B57E(&(Local_231.f_9));
							func_208(&Local_231);
							func_195(&(Local_231.f_F4), Local_231.f_90, "txm1_arrive", 0x00000009, 0x00000000, 0x00000000, 0x00000000);
							func_305(&Local_231, 0x00000016);
						}
						if ((((func_194(&Local_231) >= 0x00000002 && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000001) && !unk_0x377BE9A1BF38C7CE(Local_231.f_4)) && !(unk_0xCE563465D2227DD6(Local_231.f_4) <= -145f || unk_0xCE563465D2227DD6(Local_231.f_4) >= 145f)) && !bLocal_277)
						{
							if (func_193())
							{
								func_191();
								func_241(&Local_231, 0x0000003D, 0x00000001, 0x00000000, 0x00000000);
							}
							Local_231.f_4C = 0x00000000;
							iLocal_258 = 0x00000001;
						}
						if (unk_0x9F4FE516EAACCFC5(Local_231))
						{
							unk_0x9A8DDC7C522F5BF5(Local_231, 0x00000000);
							unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
						}
						break;
					
					case 0x00000001:
						if (!bLocal_277)
						{
							func_189(&(Local_231.f_3));
						}
						if (func_186())
						{
							if (bLocal_278)
							{
								func_241(&Local_231, 0x0000003E, 0x00000001, 0x00000000, 0x00000000);
								iLocal_258 = 0x00000000;
							}
							else
							{
								func_241(&Local_231, 0x0000003F, 0x00000001, 0x00000000, 0x00000000);
								iLocal_258 = 0x00000000;
							}
							unk_0xF3039DE1FDB4F6FD(0x00000001);
						}
						if (!func_181(&Local_231))
						{
							func_169(&Local_231, 0x00000001);
							if (!unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
							{
								unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
							}
						}
						else if (unk_0x5A91F08DF773C39D(Local_231.f_4, Local_231.f_11, 2f, 2f, 20f, 0x00000000, 0x00000001, 0x00000000))
						{
							unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, 0x00000000);
						}
						break;
				}
				break;
			
			case 0x00000016:
				if (!func_193())
				{
					if (bLocal_277)
					{
						func_168(0x00000000);
					}
					else
					{
						func_168(0x00000001);
						func_167(&Local_231, 0x00000000);
					}
					func_305(&Local_231, 0x0000001B);
				}
				break;
			
			case 0x0000001B:
				if (func_157(&Local_231, 0x00000001))
				{
					func_156(&Local_231);
					func_241(&Local_231, 0x00000068, 0x00000001, 0x00000001, 0x00000000);
					func_305(&Local_231, 0x0000001D);
				}
				break;
			
			case 0x0000001C:
				if (func_116(&uLocal_230, &Local_231, &(Local_231.f_3), &uLocal_251, 0x00000001))
				{
					func_241(&Local_231, 0x00000068, 0x00000001, 0x00000001, 0x00000000);
					func_305(&Local_231, 0x0000001D);
				}
				break;
			
			case 0x0000001D:
				if (func_81(&Local_231, &iLocal_335))
				{
					func_11(0x00000001, &Local_231, 0x00000001);
					func_305(&Local_231, 0x0000001E);
				}
				if (!unk_0xEB6A8945D1AC98A1(Local_231.f_3))
				{
					if (func_10(Local_231.f_3, -1226.25f, -902.82f, 11.33f, 0x00000001) < 3f)
					{
						unk_0x9DD8618CA5BF832D(Local_231.f_3, 0x0000003C, 0x00000001);
					}
				}
				break;
			
			case 0x0000001E:
				if (!unk_0xEB6A8945D1AC98A1(Local_231.f_3))
				{
					if (func_10(Local_231.f_3, -1226.25f, -902.82f, 11.33f, 0x00000001) < 3f)
					{
						unk_0x9DD8618CA5BF832D(Local_231.f_3, 0x0000003C, 0x00000001);
					}
					if (func_10(Local_231.f_3, Local_231.f_1D, 0x00000001) < 1f)
					{
						func_439();
					}
				}
				else
				{
					func_439();
				}
				break;
			}
	}
}

float func_10(int iParam0, vector3 vParam1, bool bParam2)
{
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return -1f;
	}
	return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1, bParam2);
}

void func_11(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_55(uParam1);
		if (!unk_0xEB6A8945D1AC98A1(uParam1->f_3))
		{
			unk_0x4E885A246A9D983A(uParam1->f_3, 0x0000013D, 0x00000001);
		}
	}
	else
	{
		func_53(0x00000001, 0x00000000);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)
{
	func_424(uParam0);
	if (func_193())
	{
		func_51();
	}
	func_49();
	unk_0x790015DC92C918E2();
	unk_0xA37A90C62806D848(0x00000001);
	func_44(0x00000000);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		unk_0x44A200C9B6E1CEA6(uParam0->f_4, 0x00000000);
		unk_0x78CCB85A0DC35709(uParam0->f_4);
		unk_0x7AA3AFA47C4179D1(uParam0->f_4);
	}
	func_41(uParam0->f_E, 0x00000001);
	func_39(uParam0->f_E, 0x00000001, 0x42700000);
	func_38(&(uParam0->f_F4), 0x00000003);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000001);
	if (func_35())
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	}
	unk_0x2D23BE319D971F4C(0x00000001);
	func_25(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBFE31971E49FA500(0x00000001);
	unk_0x8BCB70EB440DED83(0x00000001);
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		unk_0x9A8DDC7C522F5BF5(*uParam0, 0x00000000);
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0xF3039DE1FDB4F6FD(0x00000001);
	}
	if (func_24(Global_1B416.f_4A94, 0x00000004))
	{
		func_22(&(Global_1B416.f_4A94), 0x00000004);
		unk_0xAB8E2DDC7AF955E0(func_21(), 0x00000000);
	}
	if (bParam1)
	{
		func_20(uParam0);
	}
	func_19(uParam0);
	unk_0x8D17794CE3273D70("gestures@m@standing@casual");
	unk_0x8D17794CE3273D70("oddjobs@taxi@");
	unk_0x8D17794CE3273D70("oddjobs@towingcome_here");
	if (unk_0x58424C49F8924842())
	{
		func_17(uParam0->f_19B);
	}
	if (!unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
	}
	unk_0x11E0F00830F70E15(SYSTEM::ROUND((func_13(&iLocal_82) * 1000f)), 0x0000000C, 0x00000000);
}

float func_13(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_14(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3()) / 1000f);
}

bool func_15(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

bool func_16(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

void func_17(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0x00000000] != 0x00000000)
	{
		MemCopy(&uVar0, {func_18(iParam0)}, 0x00000006);
		if (!unk_0x2EBF5002C6B6A06C(&uVar0))
		{
		}
	}
}

struct<8> func_18(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 0x00000001:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 0x00000002:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 0x00000003:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 0x00000006:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 0x00000007:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 0x00000008:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 0x00000009:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_19(var uParam0)
{
	unk_0x5A5CC21130AD387A(uParam0->f_33[0x00000000]);
}

void func_20(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
		{
			if (!unk_0x405E212DDE472467(uParam0->f_3, 0x00000000))
			{
				unk_0x61F0DE0226FF7252(uParam0->f_3);
			}
			unk_0x11AD11297DC58CC7(uParam0->f_3, 0x00000000);
			unk_0x0E2400AB9174FA81(0x000000FF, uParam0->f_19D, 0x6F0783F5);
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 0x00000003))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 0xC1000000);
			}
			else if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 0x00000003))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 0xC1000000);
			}
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 0x00000003))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 0xC1000000);
			}
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0x00000003))
			{
				unk_0xFB131B855F2FD560(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0xC1000000);
			}
			unk_0x6DAD7906B73F064D(&(uParam0->f_3));
		}
	}
}

int func_21()
{
	return joaat("taxi");
}

void func_22(var uParam0, int iParam1)
{
	func_23(uParam0, iParam1);
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_24(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_25(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_34(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_33())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_32(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_34(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_32(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_30(unk_0xD803B885F5E47A62())) && !func_27(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_26()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_30(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_26()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_28(0xFFFFFFFF, 0x00000000) == 0x00000008;
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

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_29();
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

int func_29()
{
	return Global_1407E9;
}

int func_30(int iParam0)
{
	if (func_27(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_31())
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

bool func_31()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_32(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_33()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_34(int iParam0)
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

int func_35()
{
	if (!func_37() && !func_36())
	{
		if (!unk_0x04B2EAD6D5301B36(unk_0xA30EC016B12C03E4()))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_36()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcamera")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_37()
{
	if (unk_0x8A22C4C08282BF26(joaat("appinternet")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_38(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

void func_39(vector3 vParam0, bool bParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_40(vParam0, 1f, -fParam2, -fParam2, -fParam2) };
	vVar1 = { func_40(vParam0, 1f, fParam2, fParam2, fParam2) };
	vVar0.z = (vVar0.z - 22f);
	vVar1.z = (vVar1.z + 22f);
	if (!bParam1)
	{
		unk_0xF858EFDE1871B5F2(vVar0, vVar1, 0x00000000, 0x00000001);
	}
	else
	{
		unk_0xF5894FEB702E7E76(vVar0, vVar1, 0x00000001);
		unk_0xEFED0CD6E25037B9();
	}
}

Vector3 func_40(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
	vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
	vVar4 = { vParam0 + vVar0 };
	return vVar4;
}

void func_41(vector3 vParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_42(vParam0, func_43(), 0x00000000))
	{
		vVar0 = { func_40(vParam0, 1f, -30f, -30f, -10f) };
		vVar1 = { func_40(vParam0, 1f, 30f, 30f, 10f) };
		unk_0xE342F209E49C5314(vVar0, vVar1, bParam1, 0x00000001);
	}
}

bool func_42(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_43()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_44(int iParam0)
{
	if (func_48())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_47())
		{
			func_45(0x00000001, 0x00000001);
		}
		else
		{
			func_45(0x00000000, 0x00000000);
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
	if (!func_33())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_45(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_46(0x00000000))
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

int func_46(int iParam0)
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

bool func_47()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_48()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_49()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (Global_175BD[iVar0 /*17*/] && !Global_175BD[iVar0 /*17*/].f_1)
		{
			if (Global_175BD[iVar0 /*17*/].f_3 == 0x00000000)
			{
				if ((Global_175BD[iVar0 /*17*/].f_5 != 0x00000058 && Global_175BD[iVar0 /*17*/].f_5 != 0x00000059) && Global_175BD[iVar0 /*17*/].f_5 != 0x0000005C)
				{
					func_50(Global_175BD[iVar0 /*17*/].f_5, 0x00000001);
				}
			}
		}
		iVar0++;
	}
}

void func_50(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 0x00000058 && iParam0 != 0x00000059) && iParam0 != 0x0000005C)
		{
			Global_16A39[iParam0 /*2*/] = 0x00000001;
		}
	}
	else
	{
		Global_16A39[iParam0 /*2*/] = 0x00000000;
	}
}

void func_51()
{
	Global_4CD7 = 0x00000000;
	func_52();
}

void func_52()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_53(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			Global_1B416.f_4A94.f_16[0x00000000]++;
			func_54("Fares Completed ++ = ", Global_1B416.f_4A94.f_16[0x00000000]);
			break;
		
		case 0x00000001:
			Global_1B416.f_4A94.f_16[0x00000001]++;
			func_54("Fares Failed ++ = ", Global_1B416.f_4A94.f_16[0x00000001]);
			break;
		
		case 0x00000002:
			Global_1B416.f_4A94.f_16[0x00000002]++;
			func_54("Fares Accepted ++ ", Global_1B416.f_4A94.f_16[0x00000002]);
			break;
		
		case 0x00000003:
			Global_1B416.f_4A94.f_16[0x00000003]++;
			func_54("Fares Expired ++ ", Global_1B416.f_4A94.f_16[0x00000003]);
			break;
		
		case 0x0000000D:
			Global_1B416.f_4A94.f_16[0x0000000D]++;
			func_54("Passengers run ++ = ", Global_1B416.f_4A94.f_16[0x0000000D]);
			break;
		
		case 0x0000000E:
			Global_1B416.f_4A94.f_16[0x0000000E]++;
			func_54("Passenger Forced to Pay ++ = ", Global_1B416.f_4A94.f_16[0x0000000E]);
			break;
		
		case 0x00000004:
			if (iParam1 != 0x00000000)
			{
				if (iParam1 > Global_1B416.f_4A94.f_16[0x00000004])
				{
					Global_1B416.f_4A94.f_16[0x00000004] = iParam1;
					func_54("This distance ", iParam1);
					func_54(" is longer than current best", Global_1B416.f_4A94.f_16[0x00000004]);
				}
				else
				{
					func_54("Longest Distance Not Beat ", Global_1B416.f_4A94.f_16[0x00000004]);
				}
			}
			break;
		
		case 0x00000005:
			Global_1B416.f_4A94.f_16[0x00000005] = (Global_1B416.f_4A94.f_16[0x00000005] + iParam1);
			func_54("Total Distance w/ Passenger = ", Global_1B416.f_4A94.f_16[0x00000005]);
			break;
		
		case 0x00000006:
			if (iParam1 == 0x00000000)
			{
				Global_1B416.f_4A94.f_16[0x00000006]++;
			}
			else
			{
				Global_1B416.f_4A94.f_16[0x00000006] = (Global_1B416.f_4A94.f_16[0x00000006] + iParam1);
			}
			func_54("Wanted Levels ++ = ", Global_1B416.f_4A94.f_16[0x00000006]);
			break;
		
		case 0x00000007:
			if (iParam1 > 0x00000000)
			{
				Global_1B416.f_4A94.f_16[0x00000007] = (Global_1B416.f_4A94.f_16[0x00000007] + iParam1);
			}
			else
			{
				Global_1B416.f_4A94.f_16[0x00000007]++;
			}
			func_54("Wanted Levels Lost = ", Global_1B416.f_4A94.f_16[0x00000007]);
			break;
		
		case 0x00000008:
			Global_1B416.f_4A94.f_16[0x00000008]++;
			func_54("Taxis wrecked ++ = ", Global_1B416.f_4A94.f_16[0x00000008]);
			break;
		
		case 0x00000009:
			Global_1B416.f_4A94.f_16[0x00000009]++;
			func_54("Horn Honked ++ = ", Global_1B416.f_4A94.f_16[0x00000009]);
			break;
		
		case 0x0000000A:
			Global_1B416.f_4A94.f_16[0x0000000A] = (Global_1B416.f_4A94.f_16[0x0000000A] + iParam1);
			func_54("Total Money Earned = ", Global_1B416.f_4A94.f_16[0x0000000A]);
			break;
		
		case 0x0000000B:
			Global_1B416.f_4A94.f_16[0x0000000B] = (Global_1B416.f_4A94.f_16[0x0000000B] + iParam1);
			func_54("Total Tips Earned = ", Global_1B416.f_4A94.f_16[0x0000000B]);
			break;
		
		case 0x0000000C:
			if (iParam1 > Global_1B416.f_4A94.f_16[0x0000000C])
			{
				Global_1B416.f_4A94.f_16[0x0000000C] = iParam1;
				func_54("New Highest Tip = ", Global_1B416.f_4A94.f_16[0x0000000C]);
			}
			else
			{
				func_54("Highest Tip Not Reached = ", Global_1B416.f_4A94.f_16[0x0000000C]);
			}
			break;
	}
}

void func_54(char* sParam0, int iParam1)
{
}

void func_55(var uParam0)
{
	func_53(0x00000000, 0x00000000);
	if (uParam0->f_19B != 0x00000009)
	{
		func_440(0x00000001);
		func_67(0x0000000F, 0x00000001);
	}
	func_65(&(Global_1B416.f_4A94), 0x00000400);
	if (!func_24(Global_1B416.f_4A94, 0x00000040))
	{
		func_56(func_63(func_64(uParam0)), 0x00000000, 0x00000000);
	}
}

void func_56(int iParam0, int iParam1, int iParam2)
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
		func_62((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_57();
	}
}

void func_57()
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
		func_61(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_60() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_58();
				}
			}
		}
	}
}

int func_58()
{
	if (func_59(0x00000000))
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

bool func_59(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_60()
{
	return Global_7830;
}

int func_61(int iParam0, int iParam1)
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

int func_62(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_29();
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

int func_63(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x000000C7;
			break;
		
		case 0x00000001:
			iVar0 = 0x000000C8;
			break;
		
		case 0x00000002:
			iVar0 = 0x000000C9;
			break;
		
		case 0x00000003:
			iVar0 = 0x000000CA;
			break;
		
		case 0x00000004:
			iVar0 = 0x000000CB;
			break;
		
		case 0x00000005:
			iVar0 = 0x000000CC;
			break;
		
		case 0x00000006:
			iVar0 = 0x000000CD;
			break;
		
		case 0x00000007:
			iVar0 = 0x000000CE;
			break;
		
		case 0x00000008:
			iVar0 = 0x000000CF;
			break;
		
		case 0x00000009:
			break;
		
		default:
			iVar0 = 0x000000C7;
			break;
	}
	return iVar0;
}

int func_64(var uParam0)
{
	return uParam0->f_19B;
}

void func_65(var uParam0, int iParam1)
{
	func_66(uParam0, iParam1);
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_67(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_68(iParam0, iParam1);
}

int func_68(int iParam0, int iParam1)
{
	if (func_80(0x0000000E) && !func_79(iParam0))
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
	if (func_78(&Global_4127F1))
	{
		if (func_76(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_69(&Global_4127F1, iParam0))
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

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_80(0x0000000E) && !func_79(iParam1))
	{
		return 0x00000000;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0x00000000);
	}
	func_72(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_70(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_70(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_80(0x0000000E) && !func_79(iParam1))
	{
		return 0x00000000;
	}
	if (func_76(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_75(uParam0) < 0f)
	{
		func_74(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_71(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_71(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_72(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_73(uParam0, iVar0);
		iVar0++;
	}
	func_74(uParam0, (Global_4127F0 - 0.5f));
}

void func_73(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_74(var uParam0, float fParam1)
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

float func_75(var uParam0)
{
	return uParam0->f_50;
}

bool func_76(var uParam0, int iParam1)
{
	return func_77(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_77(var uParam0, int iParam1)
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

bool func_78(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_79(int iParam0)
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

bool func_80(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_81(var uParam0, int iParam1)
{
	switch (iLocal_160)
	{
		case 0x00000000:
			if (!func_193() && func_420(uParam0, 0x00000000) > 1f)
			{
				if (func_35())
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				}
				func_115(uParam0);
				func_22(&(Global_1B416.f_4A94), 0x00001000);
				func_112(iParam1, "TAXI_FARE_TITLE", uParam0->f_32, uParam0->f_38, ((uParam0->f_32 + uParam0->f_38) + uParam0->f_69), uParam0->f_69, func_114(uParam0), "TAXI_FARE_MID", 0x00000FA0, 0x00000001);
				iParam1->f_1 = 0x00000FA0;
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0x00000000);
				func_111(0x00000001);
				iLocal_160 = 0x00000006;
			}
			break;
		
		case 0x00000006:
			if (!func_105(iParam1, 0x00000000))
			{
				func_82(uParam0);
				func_310(uParam0, 0x00000000, 0x00000000, 0x00000000);
				func_111(0x00000000);
				iLocal_160 = 0x00000007;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_82(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_32 + uParam0->f_38) + uParam0->f_69);
	if (iVar0 > 0x00000000)
	{
		func_83(func_103(), 0x00000015, iVar0, 0x00000000, 0x00000000);
		func_53(0x0000000A, iVar0);
		iLocal_57[0x00000000] = iVar0;
	}
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_102(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_102(iParam0) == 0x00000004)
	{
		return;
	}
	func_84(func_102(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
	if (bParam3)
	{
		iVar0 = 0x00000000;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0x00000000:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 0x00000001:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 0x00000002:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0x00000000:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 0x00000001:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 0x00000002:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6FB46C25CCB7E6D5(iVar1, &iVar0, 0xFFFFFFFF);
		iVar0 = (iVar0 + iParam2);
		unk_0xCDC520E5E48E63D9(iVar1, iVar0, 0x00000001);
	}
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_101();
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
					func_100(0x00000063, 0x00000001);
					func_99(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_99(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_99(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_98(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_93(0x00000005))
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
							func_99(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_99(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_99(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_93(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_99(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_99(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_99(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_99(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_99(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_99(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_99(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_99(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_99(joaat("sp2_money_spent_property"), iParam3);
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
									func_99(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_99(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_99(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_99(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_99(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_99(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_93(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_99(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_99(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_99(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_99(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_99(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_99(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_92(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_100(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_100(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_100(0x00000060, iParam3);
					break;
			}
			func_100(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_87(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_87(iVar1);
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
					func_99(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_99(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_99(joaat("sp2_total_cash_earned"), iParam3);
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
	func_86(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_85(0x00000000);
	}
	return 0x00000001;
}

void func_85(bool bParam0)
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

void func_86(int iParam0)
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

void func_87(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_62(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_62(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_62(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_62(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_90(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_90(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_90(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_90(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_90(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_90(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_89() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_89() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_88(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_88(int iParam0)
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

int func_89()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_91(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_91(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_29();
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

void func_92(int iParam0)
{
	func_100(0x0000005D, iParam0);
	func_100(0x0000001D, iParam0);
	func_100(0x0000001E, iParam0);
}

bool func_93(int iParam0)
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
		return func_95(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_95(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_95(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_95(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_94(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_94(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_94(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_94(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_94(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_94(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_89() /*10930*/].f_181E.f_A, iParam0);
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_91(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_95(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_29();
	}
	iVar1 = func_97(iParam0, iParam1);
	uVar2 = func_96(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_96(int iParam0)
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

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_29();
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

int func_98(bool bParam0)
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
		func_61(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_67(0x0000001B, 0x00000001);
	return 0x00000001;
}

void func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_100(int iParam0, int iParam1)
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

void func_101()
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

int func_102(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_103()
{
	func_104();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_104()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_4(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_3(unk_0x16F2683693E537C9());
			if (func_6(iVar0) && (!func_80(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_6(Global_1B416.f_936.f_21B.f_10E1))
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

int func_105(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_109(&(uParam0->f_2));
	}
	unk_0x3584F71E5CA29322(0x0000000E);
	unk_0x6567AE843FADBA94(*uParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_109(&(uParam0->f_5));
				func_108(uParam0, 0x3EA8F5C3);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_107(&(uParam0->f_5)) > 0.33f)
			{
				func_106(&(uParam0->f_5));
				return 0x00000000;
			}
		}
	}
	if (uParam0->f_1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (func_107(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_109(&(uParam0->f_5));
			func_108(uParam0, 0x3EA8F5C3);
		}
		else if (func_107(&(uParam0->f_5)) > 0.33f)
		{
			func_106(&(uParam0->f_2));
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_106(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0x00000000;
}

float func_107(var uParam0)
{
	if (func_16(uParam0))
	{
		if (func_15(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_14(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_108(var uParam0, float fParam1)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, "SHARD_ANIM_OUT");
	unk_0x3CAEA85DA607305E(uParam0->f_9);
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7E60D21B163E9D56();
}

void func_109(int iParam0)
{
	func_110(iParam0, 0f);
}

void func_110(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_14(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

void func_111(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

void func_112(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, func_113());
	unk_0x7ACC3006A87F8B39("STRING");
	unk_0x3A820E495A7BA3E5(iParam9);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x779B34565F4D71B1();
	unk_0x7ACC3006A87F8B39(sParam7);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6B012227B3921E18(sParam6);
	unk_0x6D99DF8263D35CE5(iParam5);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0x779B34565F4D71B1();
	unk_0x7E60D21B163E9D56();
	func_109(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 0x00000001;
}

char* func_113()
{
	if (unk_0x8CD06866876216F2())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_114(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 0x00000001:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 0x00000002:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 0x00000003:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 0x00000004:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 0x00000005:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 0x00000006:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 0x00000007:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 0x00000008:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_115(var uParam0)
{
	int iVar0;
	
	Local_161.f_1 = SYSTEM::TO_FLOAT(uParam0->f_32);
	Local_161.f_2 = SYSTEM::TO_FLOAT(uParam0->f_38);
	func_53(0x0000000B, uParam0->f_38);
	func_53(0x0000000C, uParam0->f_38);
	iLocal_57[0x00000001] = uParam0->f_38;
	iLocal_57[0x00000002] = uParam0->f_38;
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_3C)
	{
		Local_161.f_4[iVar0 /*3*/] = { uParam0->f_3C[iVar0 /*3*/] };
		if (unk_0xEAE0D21A50E6C7F4(Local_161.f_4[iVar0 /*3*/], 0x00000002))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(uParam0->f_3C[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161 = uParam0->f_19B;
	Local_161.f_14 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

int func_116(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	int iVar0;
	
	switch (*uParam0)
	{
		case 0x00000000:
			if (!unk_0x437347B10A200C4B(*iParam2, 0x00000000))
			{
				func_154(uParam1, 0x00000140, bParam4);
				unk_0x6D80F1AEBA734886(*iParam2, unk_0x09AC81E49EA267F7(0x00000064, 0x0000012C));
				func_152(uParam1, iParam2, "TAXI_BLIP_PASS", 0x00000001);
				func_53(0x0000000D, 0x00000000);
				*uParam0 = 0x00000001;
			}
			else
			{
				*uParam0 = 0x00000005;
			}
			break;
		
		case 0x00000001:
			if (!unk_0x437347B10A200C4B(*iParam2, 0x00000000))
			{
				if (!unk_0x405E212DDE472467(*iParam2, 0x00000000))
				{
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
					*uParam0 = 0x00000002;
				}
			}
			else
			{
				*uParam0 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (!unk_0x437347B10A200C4B(*iParam2, 0x00000000))
			{
				func_123(&uLocal_45, *iParam2, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
				if (!func_122(uParam1->f_2, *iParam2))
				{
					if (unk_0xDF1306B443CD3D15(uParam1->f_4, 0x00000000))
					{
						if (unk_0xB87D13D0C064E9D1(*iParam2, uParam1->f_4, 0x00000001))
						{
							*uParam0 = 0x00000003;
						}
					}
					if (unk_0xB87D13D0C064E9D1(*iParam2, uParam1->f_2, 0x00000001))
					{
						*uParam0 = 0x00000003;
					}
					if (*uParam0 != 0x00000003)
					{
						if (!unk_0x405E212DDE472467(uParam1->f_2, 0x00000000))
						{
							if (unk_0x12DE711B1C681E9E(uParam1->f_2, *iParam2, 20f, 20f, 10f, 0x00000000, 0x00000001, 0x00000000))
							{
								if (unk_0x168558745A6AC21E(uParam1->f_2))
								{
									*uParam0 = 0x00000003;
								}
								else
								{
									if (unk_0x12DE711B1C681E9E(uParam1->f_2, *iParam2, 2f, 2f, 10f, 0x00000000, 0x00000001, 0x00000000))
									{
										*uParam0 = 0x00000003;
									}
									if (unk_0x03A10A5707B2BB1F(uParam1->f_2, 0x00000006))
									{
										if (unk_0x5ED715849883FAFF())
										{
											*uParam0 = 0x00000003;
										}
									}
								}
							}
							else if (unk_0x12DE711B1C681E9E(uParam1->f_2, *iParam2, 50f, 50f, 10f, 0x00000000, 0x00000001, 0x00000000))
							{
								if (unk_0x168558745A6AC21E(uParam1->f_2))
								{
									*uParam0 = 0x00000003;
								}
							}
						}
						else if (unk_0x12DE711B1C681E9E(uParam1->f_2, *iParam2, 50f, 50f, 25f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (unk_0x168558745A6AC21E(uParam1->f_2))
							{
								*uParam0 = 0x00000003;
							}
						}
					}
				}
				else
				{
					func_120(&uLocal_45, 0x00000000, 0x00000000);
					uParam1->f_6D = 0x00000001;
					*uParam0 = 0x00000005;
				}
			}
			else
			{
				func_120(&uLocal_45, 0x00000000, 0x00000000);
				*uParam0 = 0x00000005;
			}
			break;
		
		case 0x00000003:
			func_120(&uLocal_45, 0x00000000, 0x00000000);
			if (!unk_0x437347B10A200C4B(*iParam2, 0x00000000))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_8))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_8));
				}
				unk_0x11AD11297DC58CC7(*iParam2, 0x00000001);
				unk_0xDD353D0E9C789D0E(&iVar0);
				unk_0x8BE3D040D15AEA1D(0x00000000, 0x00001388);
				unk_0xF3268524E9BE6D6E(0x00000000, uParam1->f_2, 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iVar0);
				unk_0x78ADC381772E3D54(*iParam2, iVar0);
				unk_0xF82EA857DA10E0CD(&iVar0);
				unk_0xFADC0A217229F6B5(*iParam2, 0x00000001);
				func_241(uParam1, 0x0000006D, 0x00000001, 0x00000000, 0x00000000);
				*uParam0 = 0x00000004;
				unk_0x790015DC92C918E2();
			}
			else
			{
				*uParam0 = 0x00000004;
				unk_0x790015DC92C918E2();
			}
			if (unk_0xE4EDC4B0E92C078B(uParam1->f_8))
			{
				unk_0x142CC44DB769B57E(&(uParam1->f_8));
			}
			func_117(*iParam2, uParam3, 0x00000001, 0xFFFFFFFF);
			break;
		
		case 0x00000004:
			if (unk_0xEB751B41BC4080D4(uParam3->f_6))
			{
				if (unk_0xE4EDC4B0E92C078B(uParam3->f_5))
				{
					unk_0x142CC44DB769B57E(&(uParam3->f_5));
				}
				func_208(uParam1);
				func_53(0x0000000E, 0x00000000);
				uParam1->f_38 = 0x00000000;
				*uParam0 = 0x00000005;
			}
			break;
		
		case 0x00000005:
			if (!unk_0x437347B10A200C4B(*iParam2, 0x00000000))
			{
				unk_0x6DAD7906B73F064D(iParam2);
				if (unk_0xE4EDC4B0E92C078B(uParam1->f_8))
				{
					unk_0x142CC44DB769B57E(&(uParam1->f_8));
				}
			}
			else
			{
				unk_0xCB9603FE12CFDEF4(unk_0xA30EC016B12C03E4(), 0x00000002, 0x00000000);
				unk_0x56EA5D248F36A081(unk_0xA30EC016B12C03E4(), 0x00000000);
			}
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_117(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;
	
	uParam1->f_1 = 0x00000000;
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		uParam1->f_2 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
		unk_0x6D80F1AEBA734886(iParam0, 0x00000000);
		*uParam1 = 0x00000000;
	}
	else
	{
		if (iParam3 <= 0x00000000)
		{
			*uParam1 = unk_0x09AC81E49EA267F7(0x00000050, 0x000000C8);
		}
		else
		{
			*uParam1 = iParam3;
		}
		uParam1->f_2 = { unk_0xC6151A4F2BB0AC79(iParam0, 0x3F99999A, 0x3FC00000) };
	}
	unk_0x5D96D8530B3D0904(&(uParam1->f_1), 0x00000003);
	unk_0x5D96D8530B3D0904(&(uParam1->f_1), 0x00000004);
	vVar0 = { unk_0x550B1459B4642A86(uParam1->f_2, 1.2f, 1.5f) };
	uParam1->f_6 = unk_0xA6FF0828D17CF374(joaat("pickup_money_variable"), vVar0, uParam1->f_1, *uParam1, 0x00000001, 0x00000000);
	if (bParam2)
	{
		if (!unk_0xE4EDC4B0E92C078B(uParam1->f_5))
		{
			uParam1->f_5 = func_118(uParam1->f_6);
			unk_0xDC5B2F9D0CCE3A10(uParam1->f_5, "TAXI_BLIP_MONE");
		}
		else
		{
			unk_0xDC5B2F9D0CCE3A10(uParam1->f_5, "TAXI_BLIP_MONE");
		}
	}
}

int func_118(int iParam0)
{
	int iVar0;
	
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0xA0556E31F2661AF4(iParam0);
	unk_0x516E63E474722206(iVar0, func_119(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

float func_119(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_120(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 0x0000001A))
		{
			return;
		}
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(iParam2);
		unk_0x9A1335ECD7BD117F("FocusIn");
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		if (uParam0->f_B)
		{
			unk_0x82A772610883F395("FocusOut", 0x00000000, 0x00000000);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusOut", "HintCamSounds", 0x00000001);
			uParam0->f_B = 0x00000000;
		}
	}
	unk_0xF3039DE1FDB4F6FD(0x00000001);
	uParam0->f_1 = 0x00000000;
	*uParam0 = 0x00000000;
	uParam0->f_2 = 0xFFFFFFFF;
	uParam0->f_8 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	sVar0 = iParam1;
	if (unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(uParam0->f_3))
	{
		if (func_121(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_121(sVar0))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

bool func_121(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_122(int iParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(iParam1))
	{
		if (!unk_0x12DE711B1C681E9E(iParam0, iParam1, 100f, 100f, 50f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (!unk_0x8E28E832BEAC3DCE(unk_0x68F4C0EC296D3901(iParam1, 0x00000001), 15f))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_123(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_124(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_124(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_125(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_125(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		func_120(uParam0, 0x00000000, 0x00000000);
	}
	uParam0->f_6 = 0x00000002;
	func_126(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_126(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0x00000000;
		}
	}
	iVar0 = sParam3;
	if (unk_0x2EBF5002C6B6A06C(iVar0))
	{
		if (!unk_0x8CD06866876216F2())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_121(iVar0))
	{
		func_151();
	}
	if (func_150(iParam1) && unk_0x4FC40AB0ECCE6E18(iParam1))
	{
		iVar1 = 0x00000000;
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			unk_0x4862370C9F046219(unk_0x940C1429253D3B1B(iParam1));
			unk_0xB9099320B5179E0A(unk_0x940C1429253D3B1B(iParam1), 0x00000001);
			if (unk_0x71313E3D03CEEB37(unk_0x940C1429253D3B1B(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		else if (unk_0xE2F1E99DD161A861(iParam1))
		{
			unk_0x00D1596840E78F77(unk_0x96A5FE5834B81CE7(iParam1));
			if (unk_0xC03F94FBD72F6D02(unk_0x96A5FE5834B81CE7(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam1))
		{
			unk_0xFF7829816FC6D977(unk_0x486F67509A82DB2D(iParam1));
			if (unk_0x660643587812C91B(unk_0x486F67509A82DB2D(iParam1)))
			{
				iVar1 = 0x00000001;
			}
		}
		if (!unk_0x8C74DE122769E1BF())
		{
			if (func_145(uParam0, bParam5, bParam7, 0x00000000))
			{
				func_142(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0x00000000;
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_131(iVar0))
				{
					if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if ((iVar1 && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
						{
							if (!func_121(iVar0))
							{
								func_130(iVar0, 0xFFFFFFFF);
								uParam0->f_3 = iVar0;
								if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
								{
									func_129(0x00000001);
								}
							}
						}
					}
				}
			}
			else if (func_131(iVar0))
			{
				if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
				{
					if (((unk_0x0A059E0DB9253280(iParam1) && iVar1) && !unk_0xFEBC1E4EC9E001F0()) && uParam6)
					{
						if (!func_121(iVar0))
						{
							func_130(iVar0, 0xFFFFFFFF);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_129(0x00000001);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x2EBF5002C6B6A06C(sParam3))
			{
				if (func_121(sParam3))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000004)
					{
						func_120(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
					{
						func_120(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
					{
						func_120(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
					{
						func_120(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
					{
						func_120(uParam0, iVar0, 0x00000001);
					}
				}
				else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
				{
					func_120(uParam0, iVar0, 0x00000001);
				}
			}
			if (!func_145(uParam0, bParam5, bParam7, 0x00000000))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_128(uParam0))
				{
					func_127(uParam0);
				}
			}
		}
	}
	else
	{
		func_120(uParam0, iVar0, 0x00000000);
	}
}

void func_127(var uParam0)
{
	if (func_150(unk_0x16F2683693E537C9()))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
	}
	if (unk_0x8C74DE122769E1BF())
	{
		unk_0xF3039DE1FDB4F6FD(0x00000001);
		unk_0x29D5132FBDCF2B1E(0x00000000);
		unk_0x8910D3D58E0132B8("HINT_CAM_SCENE");
		unk_0x9A1335ECD7BD117F("FocusIn");
		if (uParam0->f_B)
		{
			unk_0x82A772610883F395("FocusOut", 0x00000000, 0x00000000);
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusOut", "HintCamSounds", 0x00000001);
			uParam0->f_B = 0x00000000;
		}
	}
	uParam0->f_2 = 0xFFFFFFFF;
	*uParam0 = 0x00000001;
}

int func_128(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0x00000000)
	{
		iVar0 = (uParam0->f_A / 0x00000002);
		if (uParam0->f_2 + iVar0) > unk_0x1C0640BA9A7327B3()
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_129(bool bParam0)
{
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (bParam0)
			{
				Global_1B416.f_273C.f_64++;
			}
			return Global_1B416.f_273C.f_64;
			break;
		
		case 0x00000004:
			if (bParam0)
			{
				Global_1B416.f_273C.f_65++;
			}
			return Global_1B416.f_273C.f_65;
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (bParam0)
			{
				Global_1B416.f_273C.f_66++;
			}
			return Global_1B416.f_273C.f_66;
			break;
		
		default:
			break;
	}
	return 0x00000003;
}

void func_130(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_131(char* sParam0)
{
	if (!func_132(0x00000001, 0x00000001, 0x00000000))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_121(sParam0)) || func_121("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		return 0x00000000;
	}
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (func_129(0x00000000) < 0x00000003)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_129(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (func_129(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

int func_132(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			return 0x00000000;
		}
	}
	if (bParam2)
	{
		return 0x00000001;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0x00000000;
	}
	if (func_46(0x00000000))
	{
		return 0x00000000;
	}
	if (func_141())
	{
		return 0x00000000;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return 0x00000000;
	}
	if (Global_12061)
	{
		return 0x00000000;
	}
	if (unk_0x8A22C4C08282BF26(joaat("appinternet")) > 0x00000000)
	{
		return 0x00000000;
	}
	if (Global_E545)
	{
		return 0x00000000;
	}
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
		{
			if (unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000003) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
				{
					return 0x00000000;
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
			{
				return 0x00000000;
			}
			if (unk_0xC4E6FF7CA2A185EA())
			{
				return 0x00000000;
			}
		}
	}
	if ((func_140() || func_139(Global_440000.f_38DB3)) || func_138())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = func_137(unk_0x16F2683693E537C9(), 0x00000000);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 0x2189D250 && iVar1 != 0xFFFFFFFF)) || (unk_0x134B62B726CEC8E6(iVar0) == 0x46699F47 && iVar1 != 0xFFFFFFFF)) || (((unk_0x134B62B726CEC8E6(iVar0) == 0x9B16A3B4 && iVar1 == 0x00000000) && func_136(iVar0, 0x0000000A)) && unk_0x0ECB5CA5140957AD(iVar0, 0x0000000A) != 0xFFFFFFFF))
			{
				return 0x00000000;
			}
		}
	}
	if (Global_19BCC2)
	{
		return 0x00000000;
	}
	if (func_133(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_133(int iParam0)
{
	if (iParam0 != func_135())
	{
		if (func_134(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_134(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_134(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0x00000000;
				}
			}
			if (bParam2)
			{
				if (!Global_2537E2.f_3[iVar0])
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_135()
{
	return 0xFFFFFFFF;
}

int func_136(int iParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		if (unk_0x40B3F576B41FA183(iParam0) > 0x00000000)
		{
			switch (iParam1)
			{
				case 0x00000011:
				case 0x00000012:
				case 0x00000013:
				case 0x00000014:
				case 0x00000015:
				case 0x00000016:
					return 0x00000001;
					break;
				
				default:
					if (unk_0x461CAC843A21E4B6(iParam0, iParam1) > 0x00000000)
					{
						return 0x00000001;
					}
					break;
				}
			}
	}
	return 0x00000000;
}

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			iVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 0x00000001)
				{
					iVar3 = 0xFFFFFFFF;
					return iVar3;
				}
				iVar2 = 0x00000000;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 0x00000001);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0x00000000))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0x00000000) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_138()
{
	return Global_2564C8.f_11;
}

bool func_139(int iParam0)
{
	return iParam0 == 0x00000033;
}

var func_140()
{
	return Global_2564C8.f_10;
}

bool func_141()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

void func_142(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1420CD == 0x00000001)
	{
		return;
	}
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		func_120(uParam0, 0x00000000, 0x00000000);
	}
	if (func_42(vParam2, 0f, 0f, 0f, 0x00000000))
	{
		if (unk_0xEC560E589DF8370E(iParam1))
		{
			iVar0 = unk_0x940C1429253D3B1B(iParam1);
			if (!unk_0x405E212DDE472467(iVar0, 0x00000000))
			{
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					if (!func_143())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xCED082ADD3739B9F(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xF3039DE1FDB4F6FD(0x00000000);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_A;
	if (iParam3 == 0x66EADDF5)
	{
		if (iVar1 < 0x000005DC)
		{
			iVar1 = 0x000005DC;
		}
		if (iVar2 < 0x000005DC)
		{
			iVar2 = 0x000005DC;
		}
	}
	unk_0xC0B0B9E466C0ED17(iParam1, vParam2, 0x00000001, 0xFFFFFFFF, iVar1, iVar2, iParam3);
	iVar3 = 0x00000800;
	iVar4 = 0x00000003;
	unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iParam1, 0xFFFFFFFF, iVar3, iVar4);
	unk_0x82A772610883F395("FocusIn", 0x00000000, 0x00000000);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusIn", "HintCamSounds", 0x00000001);
	uParam0->f_B = 0x00000001;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 0x00000001;
	*uParam0 = 0x00000000;
}

bool func_143()
{
	return func_144(unk_0xD803B885F5E47A62());
}

int func_144(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_145(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0x00000000;
		}
	}
	switch (uParam0->f_5)
	{
		case 0x00000000:
			uParam0->f_7 = 0x00000000;
			if (uParam0->f_6 == 0x00000000)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					if (func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000001;
						uParam0->f_7 = 0x00000001;
					}
				}
				else if (func_148(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (func_148(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			if (func_128(uParam0))
			{
				uParam0->f_7 = 0x00000001;
				uParam0->f_5 = 0x00000004;
			}
			break;
		
		case 0x00000001:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) <= 0x000001F4)
			{
				if (uParam0->f_6 == 0x00000000)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
					{
						if (!func_149(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 0x00000003;
						}
					}
					else if (!func_148(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (!func_148(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
			}
			else
			{
				uParam0->f_5 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (uParam0->f_6 == 0x00000000)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					if (!func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (!func_148(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (!func_148(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 0x00000002))
				{
					uParam0->f_5 = 0x00000000;
				}
				else if (!func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			break;
		
		case 0x00000003:
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_4) > 0x000001F4)
			{
				if (uParam0->f_6 == 0x00000000)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
					{
						if (func_147(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0x00000000;
						}
					}
					else if (func_146(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || func_146(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || unk_0x8B8AFAD7ED240B7F(unk_0x16F2683693E537C9(), 0x00000002))
					{
						uParam0->f_5 = 0x00000000;
					}
					else if (func_147(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_128(uParam0))
			{
				uParam0->f_5 = 0x00000000;
			}
			break;
	}
	if (!func_132(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0x00000000;
		uParam0->f_7 = 0x00000000;
	}
	if (uParam0->f_7)
	{
		func_151();
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_146(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			if (unk_0x9A01369A10646AFE(0x00000000, 0x00000050))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_147(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x9A01369A10646AFE(0x00000000, 0x00000050))
			{
				unk_0xF3039DE1FDB4F6FD(0x00000000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_148(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62()))
		{
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
			if (unk_0x7FEE810EE9E768EB(0x00000000, 0x00000050) && unk_0x1C0640BA9A7327B3() > Global_74)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_149(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
	{
		return 0x00000000;
	}
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
		if (unk_0x0F01D47446BE1FEB())
		{
			if (unk_0x7FEE810EE9E768EB(0x00000000, 0x00000050) && unk_0x1C0640BA9A7327B3() > Global_74)
			{
				unk_0xF3039DE1FDB4F6FD(0x00000000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_150(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xE2F1E99DD161A861(iParam0))
		{
			if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam0), 0x00000000))
			{
				return 0x00000001;
			}
		}
		else if (unk_0xEC560E589DF8370E(iParam0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam0)))
			{
				return 0x00000001;
			}
		}
		else if (unk_0x6BC06B42AD71CD8B(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_151()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

void func_152(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		func_424(uParam0);
	}
	if (!unk_0xE4EDC4B0E92C078B(uParam0->f_8))
	{
		uParam0->f_8 = func_153(*uParam1, 0x00000000, 0x00000000);
	}
	if (!unk_0x2EBF5002C6B6A06C(sParam2))
	{
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_8, sParam2);
	}
}

int func_153(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_119(unk_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			unk_0x61755AC17D8F538E(iVar0, 0x00000002);
		}
	}
	else if (unk_0xEC560E589DF8370E(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_119(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_119(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_154(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		unk_0x11AD11297DC58CC7(uParam0->f_3, 0x00000000);
		unk_0xE910A68AA670B4AA(uParam0->f_3);
		unk_0xBAFED2F6486F771A(uParam0->f_3, 0x00000003, 0x00000000);
		unk_0xAFF39FB306F8E232(uParam0->f_3, 0x00000011, 0x00000001);
		unk_0xA3BF0AA5A2608191(uParam0->f_3);
		if ((func_10(uParam0->f_3, uParam0->f_1D, 0x00000001) <= 200f && !func_155(uParam0->f_1D)) && !bParam2)
		{
			func_156(uParam0);
		}
		else
		{
			unk_0xBAFED2F6486F771A(uParam0->f_3, 0x00000400, 0x00000001);
			unk_0xBAFED2F6486F771A(uParam0->f_3, 0x00020000, 0x00000001);
			unk_0xDD353D0E9C789D0E(&iVar0);
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, iParam1);
			if (uParam0->f_19F == 0x00000008)
			{
				unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
			}
			else
			{
				unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
			unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(uParam0->f_3, iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
		}
		unk_0xFADC0A217229F6B5(uParam0->f_3, 0x00000001);
	}
}

int func_155(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_156(var uParam0)
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (func_42(func_43(), uParam0->f_1D, 0x00000000))
		{
			if (uParam0->f_19B == 0x00000002)
			{
				unk_0xD8F6A53F4799FAFE(uParam0->f_3, 84.9058f);
				unk_0xFADC0A217229F6B5(uParam0->f_3, 0x00000001);
			}
			else if (uParam0->f_19B == 0x00000004)
			{
				unk_0xD8F6A53F4799FAFE(uParam0->f_3, 68.3138f);
				unk_0xFADC0A217229F6B5(uParam0->f_3, 0x00000001);
			}
			else
			{
				unk_0x01E4BB5190DF7317(uParam0->f_3, 0x471C4000, 0x00000000);
			}
		}
		else
		{
			unk_0xA3BF0AA5A2608191(uParam0->f_3);
			unk_0xF82EA857DA10E0CD(&iVar0);
			unk_0xDD353D0E9C789D0E(&iVar0);
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
			unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
			unk_0x96167B03C5A77156(0x00000000, uParam0->f_1D, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
			if (uParam0->f_19B == 0x00000002)
			{
				unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_AA_SMOKE", 0x00000000, 0x00000000);
			}
			else if (uParam0->f_19B == 0x00000000)
			{
				unk_0x91CF687749AD9691(0x00000000, 0x00000001);
				unk_0x96167B03C5A77156(0x00000000, 813.9421f, 1172.681f, 329.7988f, 1f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
				unk_0xE655C47E46F9A7E4(0x00000000, 151.7794f, 0x00000000);
				unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_SMOKING_POT", 0x00000000, 0x00000000);
			}
			else if (uParam0->f_19B == 0x00000004)
			{
				unk_0x4A35AD9FC803369E(0x00000000, uParam0->f_1D, 15f, 0x00000000);
			}
			else if (uParam0->f_19B == 0x00000001)
			{
				unk_0x4A35AD9FC803369E(0x00000000, uParam0->f_1D, 15f, 0x00004E20);
				unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
			}
			else
			{
				unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@taxi@", "base", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "gestures@m@standing@casual", "gesture_pleased", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			if (unk_0x4742C50E93110B10(uParam0->f_1D, 15f, 0x00000001))
			{
				unk_0x4A35AD9FC803369E(0x00000000, uParam0->f_1D, 15f, 0x00000000);
			}
			else
			{
				unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
			}
			unk_0x75ABDC5F81978924(iVar0);
			unk_0x78ADC381772E3D54(uParam0->f_3, iVar0);
			unk_0xF82EA857DA10E0CD(&iVar0);
		}
		unk_0xFADC0A217229F6B5(uParam0->f_3, 0x00000001);
	}
}

int func_157(var uParam0, bool bParam1)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (func_166(uParam0) && func_162(uParam0, 0x00000001, 0x40A00000))
		{
			if (bParam1)
			{
				if (func_161(uParam0, 0x00200000))
				{
					func_158(uParam0);
				}
			}
			else
			{
				func_158(uParam0);
			}
		}
		else if (!func_166(uParam0))
		{
			if (bParam1)
			{
				if (func_161(uParam0, 0x00200000))
				{
					if (unk_0xD1960163A3042274(uParam0->f_3, 0x1AE73569) == 0x00000007)
					{
						return 0x00000001;
					}
				}
			}
			else if (unk_0xD1960163A3042274(uParam0->f_3, 0x1AE73569) == 0x00000007)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_158(var uParam0)
{
	vector3 vVar0;
	
	if (func_155(uParam0->f_1D))
	{
		vVar0 = { uParam0->f_11 };
	}
	else
	{
		vVar0 = { uParam0->f_1D };
	}
	func_159(uParam0, vVar0);
}

void func_159(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000) && unk_0x82CCEAB29E9451DD(uParam0->f_3, uParam0->f_4))
		{
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_160(uParam0->f_3, uParam0->f_4) == 0x00000000)
			{
				unk_0x45F014B3D0466974(uParam0->f_3, uParam0->f_4, 0x00000200);
			}
			else if (unk_0x0EB28750412C3A5A(vVar0, vParam1, 0x00000000) < unk_0x0EB28750412C3A5A(vVar1, vParam1, 0x00000000) && unk_0x3CAA763EEC01ADF7(uParam0->f_3, uParam0->f_4, 0x00000001, 0x00000000, 0x00000000))
			{
				unk_0x45F014B3D0466974(uParam0->f_3, uParam0->f_4, 0x00020000);
			}
			else if (unk_0x0EB28750412C3A5A(vVar0, vParam1, 0x00000000) >= unk_0x0EB28750412C3A5A(vVar1, vParam1, 0x00000000) && unk_0x3CAA763EEC01ADF7(uParam0->f_3, uParam0->f_4, 0x00000002, 0x00000000, 0x00000000))
			{
				unk_0x45F014B3D0466974(uParam0->f_3, uParam0->f_4, 0x00040000);
			}
			else
			{
				unk_0x45F014B3D0466974(uParam0->f_3, uParam0->f_4, 0x00000000);
			}
		}
	}
}

int func_160(int iParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000) && !unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (unk_0x82CCEAB29E9451DD(iParam0, iParam1))
		{
			if (unk_0xA30B8362589C124A(iParam1, 0xFFFFFFFF, 0x00000000) == iParam0)
			{
				return 0xFFFFFFFF;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0x00000000, 0x00000000) == iParam0)
			{
				return 0x00000000;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0x00000001, 0x00000000) == iParam0)
			{
				return 0x00000001;
			}
			if (unk_0xA30B8362589C124A(iParam1, 0x00000002, 0x00000000) == iParam0)
			{
				return 0x00000002;
			}
		}
	}
	return 0xFFFFFFFE;
}

bool func_161(var uParam0, int iParam1)
{
	if (iParam1 != 0x40000000)
	{
		return (func_24(uParam0->f_51, iParam1) && !func_193());
	}
	return func_193();
}

int func_162(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
		{
			if (func_46(0x00000001))
			{
				func_44(0x00000000);
			}
			if (func_35())
			{
				func_165();
				return 0x00000001;
			}
			else if (func_163(uParam0->f_4, fParam2, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
			{
				if (bParam1)
				{
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, 0x00000100);
				}
				else
				{
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, 0x00000000);
				}
			}
			unk_0xACCB31D58716FE8F(uParam0->f_4, 0x00000001);
		}
	}
	return 0x00000000;
}

int func_163(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000047, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000048, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000049, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003C, 0x00000001);
	if (bParam5)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000050, 0x00000001);
	if (!bParam6)
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000045, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000046, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000044, 0x00000001);
	}
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004A, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000056, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000051, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000052, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008A, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000088, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000072, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000006E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000059, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000059, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000057, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000058, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000071, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000073, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000074, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000075, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000076, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000077, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000160, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000083, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000084, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000007B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000007E, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000081, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000082, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000085, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000086, 0x00000001);
	unk_0xCFAE3195DD6AE715();
	func_164(iParam0);
	if ((unk_0x1C0640BA9A7327B3() - Global_1D) > 0x000001F4)
	{
		unk_0xE0C0351D5B931E37(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1D = unk_0x1C0640BA9A7327B3();
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x755FF954DAE327E1(unk_0x9C66D99E63E8E24C(iParam0)) <= fParam3)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_164(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x2668265160B1C0E5(iParam0))
		{
			if (unk_0x08D499BC1F863857(iParam0))
			{
				unk_0xF356D74F6AE75D16(iParam0, 0x00000000);
			}
		}
	}
}

void func_165()
{
	if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	}
}

int func_166(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_167(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000005)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_3C[iParam1 /*3*/]), 0x00000002);
		uParam0->f_69 = (uParam0->f_69 + uParam0->f_3C[iParam1 /*3*/].f_1);
	}
}

void func_168(bool bParam0)
{
	if (Local_231.f_38 < Local_231.f_3A)
	{
		func_241(&Local_231, 0x00000067, 0x00000001, 0x00000000, 0x00000000);
	}
	else if (Local_231.f_38 >= Local_231.f_3B)
	{
		if (!bParam0)
		{
			func_241(&Local_231, 0x00000065, 0x00000001, 0x00000000, 0x00000000);
		}
		else
		{
			func_65(&(Local_231.f_52), 0x00400000);
			func_241(&Local_231, 0x00000016, 0x00000001, 0x00000000, 0x00000000);
		}
	}
	else if (!bParam0)
	{
		func_241(&Local_231, 0x00000066, 0x00000001, 0x00000000, 0x00000000);
	}
	else
	{
		func_65(&(Local_231.f_52), 0x00200000);
		func_241(&Local_231, 0x00000016, 0x00000001, 0x00000000, 0x00000000);
	}
}

void func_169(var uParam0, bool bParam1)
{
	func_180(uParam0, uParam0->f_3);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
		{
			if (!func_179(uParam0, 0x0000000E))
			{
				if (func_193())
				{
					func_178(0x00000001);
				}
				func_177(uParam0, 0x0000000B, 0x00000001);
				func_172(uParam0, 0x00000001);
				func_310(uParam0, 0x0000000E, 0f, 0x00000001);
				if (uParam0->f_19A < 0x0000000F)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_166(uParam0))
				{
					if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
					{
					}
					if (unk_0x405E212DDE472467(uParam0->f_2, 0x00000000))
					{
						if (func_420(uParam0, 0x0000000F) > 5f)
						{
							func_310(uParam0, 0x0000000F, 0f, 0x00000001);
						}
					}
					if (func_420(uParam0, 0x0000000E) > 20f)
					{
						func_343(uParam0, "Player not in taxi. - YELL RETURN", 0x00000008);
					}
				}
				else if (func_420(uParam0, 0x0000000E) > 20f)
				{
					if (func_170(uParam0->f_4, 0x00000001) > 40f)
					{
						func_343(uParam0, "Player not in taxi.", 0x00000015);
					}
					else
					{
						func_343(uParam0, "Player not in taxi. - YELL RETURN 2", 0x00000008);
					}
				}
			}
		}
	}
}

float func_170(int iParam0, bool bParam1)
{
	return func_171(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

float func_171(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	else
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000000) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, bParam2);
}

void func_172(var uParam0, bool bParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (bParam1)
		{
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_8, 0x00000000);
				unk_0x661342B9651D16E2(uParam0->f_8, 0x00000000);
				func_176(uParam0, &(uParam0->f_62), 0x00000004, 0x00000003);
			}
			else if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x00000000);
				unk_0x661342B9651D16E2(uParam0->f_9, 0x00000000);
				unk_0x790015DC92C918E2();
				if (func_166(uParam0))
				{
					func_241(uParam0, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
				}
				else
				{
					func_176(uParam0, &(uParam0->f_62), 0x00000004, 0x00000003);
				}
			}
			func_173(uParam0, 0x00000000, 0x00000000);
		}
		else if (unk_0xE4EDC4B0E92C078B(uParam0->f_A))
		{
			unk_0x142CC44DB769B57E(&(uParam0->f_A));
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_8, 0x000000FF);
				unk_0x661342B9651D16E2(uParam0->f_8, 0x00000001);
			}
			else if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
			{
				if (uParam0->f_19B == 0x00000005 && uParam0->f_19A == 0x00000011)
				{
					unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x00000000);
					unk_0x661342B9651D16E2(uParam0->f_9, 0x00000000);
				}
				else if (uParam0->f_19B != 0x00000004)
				{
					unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x000000FF);
					unk_0x661342B9651D16E2(uParam0->f_9, 0x00000001);
				}
			}
			unk_0x790015DC92C918E2();
		}
	}
}

void func_173(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_424(uParam0);
	}
	if (!unk_0xE4EDC4B0E92C078B(uParam0->f_A))
	{
		uParam0->f_A = func_153(uParam0->f_4, 0x00000001, 0x00000000);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_A, "TAXI_BLIP_CAR");
		unk_0x661342B9651D16E2(uParam0->f_A, 0x00000001);
		func_174(uParam0);
		if (bParam2)
		{
			unk_0x790015DC92C918E2();
			func_241(uParam0, 0x00000003, 0x00000001, 0x00000000, 0x00000000);
		}
	}
}

void func_174(var uParam0)
{
	func_310(uParam0, 0x0000000E, 0x00000000, 0x00000000);
	func_175();
}

void func_175()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		unk_0xCEAA091B490F8407(0xFFFFFFFF, "Radio_Off", iVar0, "TAXI_SOUNDS", 0x00000000, 0x00000000);
	}
}

void func_176(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_24(*uParam1, iParam2))
	{
		unk_0x790015DC92C918E2();
		func_241(uParam0, iParam3, 0x00000001, 0x00000000, 0x00000000);
		func_65(uParam1, iParam2);
	}
}

void func_177(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_19E = iParam1;
	if (bParam2)
	{
	}
}

void func_178(int iParam0)
{
	Global_5538 = iParam0;
}

bool func_179(var uParam0, int iParam1)
{
	return func_16(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_180(var uParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
			{
				if ((unk_0x0361981EE62202D8(iParam1, joaat("weapon_stungun"), 0x00000000) || unk_0x0361981EE62202D8(iParam1, 0x00000000, 0x00000002)) || unk_0x0361981EE62202D8(iParam1, 0x00000000, 0x00000001))
				{
					func_343(uParam0, "Passenger injured by player with weapon.", 0x0000000E);
				}
				unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
			}
		}
	}
}

int func_181(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, 0xFFFFFFFF, 0x00000000) == uParam0->f_2)
		{
			if (func_179(uParam0, 0x0000000E))
			{
				func_182(uParam0);
			}
			func_172(uParam0, 0x00000000);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_182(var uParam0)
{
	func_185(uParam0, 0x0000000E, 0x00000000);
	func_185(uParam0, 0x0000000F, 0x00000000);
	func_184();
	if (func_183())
	{
		func_178(0x00000000);
	}
}

int func_183()
{
	if (Global_5538 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_184()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		unk_0xCEAA091B490F8407(0xFFFFFFFF, "Radio_On", iVar0, "TAXI_SOUNDS", 0x00000000, 0x00000000);
	}
}

void func_185(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 == 0x0000000E)
	{
	}
	if (iParam1 == 0x00000020)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			func_106(&(uParam0->f_92[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_106(&(uParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_186()
{
	if (unk_0xDF1306B443CD3D15(Local_231.f_4, 0x00000000))
	{
		if (iLocal_274 && unk_0x9C66D99E63E8E24C(Local_231.f_4) < 5f)
		{
			if (!func_179(&Local_231, 0x00000015))
			{
				func_310(&Local_231, 0x00000015, 0x00000000, 0x00000000);
			}
		}
		if (unk_0x9C66D99E63E8E24C(Local_231.f_4) >= 5f && func_179(&Local_231, 0x00000015))
		{
			func_185(&Local_231, 0x00000015, 0x00000000);
		}
	}
	if (bLocal_277)
	{
		func_187(&Local_231, 0x00000015);
		fLocal_273 = func_420(&Local_231, 0x00000015);
		if (fLocal_273 >= fLocal_272)
		{
			bLocal_278 = 0x00000001;
			return 0x00000001;
		}
		else
		{
			bLocal_278 = 0x00000000;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_187(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0x00000020)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			if (!func_15(&(uParam0->f_92[iVar0 /*3*/])))
			{
				func_188(&(uParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_16(&(uParam0->f_92[iParam1 /*3*/])))
	{
		if (!func_15(&(uParam0->f_92[iParam1 /*3*/])))
		{
			func_188(&(uParam0->f_92[iParam1 /*3*/]));
		}
	}
}

void func_188(int iParam0)
{
	if (func_16(iParam0))
	{
		if (!func_15(iParam0))
		{
			iParam0->f_2 = (func_14(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
			unk_0x5D96D8530B3D0904(iParam0, 0x00000002);
		}
	}
}

int func_189(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(*uParam0))
	{
		switch (iLocal_268)
		{
			case 0x00000000:
				if (!func_193())
				{
					if (func_195(&(Local_231.f_F4), "txm1aud", "txm1_Puke1", 0x00000008, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0xC6EB89C59F2AF6B8(*uParam0, sLocal_282, sLocal_281, 8f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						if (!unk_0x437347B10A200C4B(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
						{
							switch (func_137(*uParam0, 0x00000000))
							{
								case 0x00000000:
									unk_0x920D29D81E211607(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000001);
									break;
								
								case 0x00000002:
									unk_0x920D29D81E211607(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000003);
									break;
								
								default:
									unk_0x920D29D81E211607(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000003);
									break;
								}
						}
						if (func_179(&Local_231, 0x0000000A))
						{
							func_185(&Local_231, 0x0000000A, 0x00000000);
						}
						iLocal_268++;
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
				{
				}
				break;
			
			case 0x00000001:
				if (unk_0xB4ECF989E2C1DAC8(*uParam0, sLocal_282, sLocal_281, 0x00000003))
				{
					fVar0 = unk_0x8CA9406E01C7EE58(*uParam0, sLocal_282, sLocal_281);
					if (bLocal_283)
					{
					}
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_274)
						{
							unk_0x97A0DB46CA749F31("scr_puke_in_car", *uParam0, vLocal_265, vLocal_266, 0x0000796E, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_274 = 0x00000001;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_275)
						{
							unk_0x97A0DB46CA749F31("scr_puke_in_car", *uParam0, vLocal_265, vLocal_266, 0x0000796E, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_275 = 0x00000001;
						}
					}
					else if (fVar0 > 0.487857f && fVar0 < 0.55f)
					{
						if (!iLocal_276)
						{
							unk_0x97A0DB46CA749F31("scr_puke_in_car", *uParam0, vLocal_265, vLocal_266, 0x0000796E, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
							iLocal_276 = 0x00000001;
							if (!iLocal_279)
							{
								StringCopy(&vVar1, "txm1_pukeR1", 24);
								func_190(&vVar1);
								func_195(&(Local_231.f_F4), "txm1aud", &vVar1, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
								iLocal_279 = 0x00000001;
							}
						}
					}
					if (unk_0x8CA9406E01C7EE58(*uParam0, sLocal_282, sLocal_281) > 0.9f)
					{
						iLocal_268++;
					}
				}
				break;
			
			case 0x00000002:
				if (!unk_0xB4ECF989E2C1DAC8(*uParam0, sLocal_282, sLocal_281, 0x00000003))
				{
				}
				unk_0xC6EB89C59F2AF6B8(*uParam0, sLocal_282, "drunk_idle", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				iLocal_274 = 0x00000000;
				iLocal_268++;
				break;
			
			case 0x00000003:
				bLocal_277 = 0x00000001;
				if (!func_179(&Local_231, 0x0000000A))
				{
					func_310(&Local_231, 0x0000000A, 0x00000000, 0x00000000);
				}
				return 0x00000001;
				break;
			}
	}
	return 0x00000000;
}

void func_190(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

void func_191()
{
	Global_4CD7 = 0x00000000;
	func_192();
}

void func_192()
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

int func_193()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_194(var uParam0)
{
	return uParam0->f_68;
}

bool func_195(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_207(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_196(sParam2, iParam3, 0x00000000);
}

int func_196(char* sParam0, int iParam1, bool bParam2)
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
					func_192();
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
		if (func_206(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_205();
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
				func_204();
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
				if (func_203())
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
			if (func_33())
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
			func_202();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_201();
		func_197();
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
		func_192();
	}
	return 0x00000000;
}

void func_197()
{
	if (!func_198())
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

int func_198()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_135())
	{
		return 0x00000000;
	}
	if (func_199(unk_0xD803B885F5E47A62()))
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

bool func_199(int iParam0)
{
	return func_200(iParam0, 0x00000014);
}

bool func_200(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

void func_201()
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

void func_202()
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

int func_203()
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

void func_204()
{
	if (func_80(0x0000000E))
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
		Global_4C1E = func_103();
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

void func_205()
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

bool func_206(int iParam0, int iParam1)
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

void func_207(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = iParam1;
	StringCopy(&Global_518B, sParam2, 24);
	Global_5522 = iParam5;
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

void func_208(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_29;
	fVar0 = func_209(fVar0);
	iLocal_57[0x00000004] = SYSTEM::CEIL(fVar0);
	iLocal_57[0x00000005] = SYSTEM::CEIL(fVar0);
	func_53(0x00000004, SYSTEM::CEIL(fVar0));
	func_53(0x00000005, SYSTEM::CEIL(fVar0));
	uParam0->f_32 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_209(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_210(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0x00000000;
	}
	else
	{
		*uParam0 = 0xFFFFFFFF;
	}
	if (iParam1 > 0xFFFFFFFF)
	{
		uParam0->f_1B = iParam1;
	}
}

void func_211(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0x00000000;
		(uParam0[iVar0 /*8*/])->f_7 = 0x00000000;
		StringCopy(uParam0[iVar0 /*8*/], func_212(), 24);
		iVar0++;
	}
	unk_0x790015DC92C918E2();
	func_51();
}

var func_212()
{
	var uVar0;
	
	return uVar0;
}

int func_213(var uParam0, float fParam1, float fParam2)
{
	if ((((unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749()) && !unk_0xD0BB2359EC70FC37()) && !unk_0x757EF87A33649210()) && !uParam0->f_8E)
	{
		if (func_230(uParam0))
		{
			func_229(uParam0, &(uParam0->f_2B));
			func_226(uParam0);
			func_221(uParam0);
			func_217(uParam0, fParam2, 0x42A00000);
			func_216(uParam0);
			func_214(uParam0);
			if ((SYSTEM::ROUND(func_420(uParam0, 0x00000007)) % 0x00000005) == 0x00000000 && !iLocal_85)
			{
				iLocal_85 = 0x00000001;
			}
			if ((SYSTEM::ROUND(func_420(uParam0, 0x00000007)) % 0x00000005) == 0x00000002 && iLocal_85)
			{
				iLocal_85 = 0x00000000;
			}
			return func_231(uParam0, fParam1);
		}
	}
	return 0x00000000;
}

void func_214(var uParam0)
{
	float fVar0;
	
	if ((func_166(uParam0) && func_24(uParam0->f_51, 0x04000000)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
	{
		if ((unk_0x1C0640BA9A7327B3() - iLocal_89) >= 0x00002710)
		{
			fVar0 = func_215(uParam0->f_11, 0x00000001);
			if (fVar0 > fLocal_87)
			{
				iLocal_88++;
			}
			else
			{
				iLocal_88 = 0x00000000;
			}
			fLocal_87 = fVar0;
			iLocal_89 = unk_0x1C0640BA9A7327B3();
		}
		if (iLocal_88 >= 0x00000002 && !func_193())
		{
			func_241(uParam0, 0x00000088, 0x00000001, 0x00000000, 0x00000001);
			iLocal_88 = 0x00000000;
		}
		if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
		{
		}
	}
	else
	{
		if ((unk_0x1C0640BA9A7327B3() % 0x00000FA0) < 0x00000032)
		{
			if (!func_166(uParam0))
			{
			}
			if (!func_24(uParam0->f_51, 0x04000000))
			{
			}
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
		{
			if (iLocal_88 > 0x00000000)
			{
				iLocal_88 = 0x00000000;
			}
		}
	}
}

float func_215(vector3 vParam0, bool bParam1)
{
	return func_10(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), vParam0, bParam1);
}

void func_216(var uParam0)
{
	if (unk_0x1BF376CEB706080F(unk_0xA30EC016B12C03E4()) && !func_24(uParam0->f_2C, 0x00000002))
	{
		func_65(&(uParam0->f_2C), 0x00000002);
	}
	else if (!unk_0x1BF376CEB706080F(unk_0xA30EC016B12C03E4()) && func_24(uParam0->f_2C, 0x00000002))
	{
		func_22(&(uParam0->f_2C), 0x00000002);
		uParam0->f_2F++;
		func_53(0x00000009, 0x00000000);
	}
	if (uParam0->f_2F > 0x0000001E)
	{
		func_241(uParam0, 0x0000002F, 0x00000001, 0x00000000, 0x00000000);
		uParam0->f_2F = 0x00000000;
		uParam0->f_4C = (uParam0->f_4C + SYSTEM::CEIL(5f));
	}
}

void func_217(var uParam0, float fParam1, float fParam2)
{
	if (func_166(uParam0) && func_24(uParam0->f_2C, 0x00000004))
	{
		if ((unk_0x8B38C0DAEEDB5F9C(uParam0->f_4) || unk_0x9C66D99E63E8E24C(uParam0->f_4) < 3f) && func_220(uParam0))
		{
			if (!func_179(uParam0, 0x00000002))
			{
				func_218(uParam0, 0x00000002);
			}
			else if (func_166(uParam0))
			{
				if (func_420(uParam0, 0x00000002) > fParam1 && !func_179(uParam0, 0x0000000E))
				{
					if (func_37())
					{
						func_241(uParam0, 0x00000030, 0x00000001, 0x00000000, 0x00000000);
					}
					else
					{
						func_241(uParam0, 0x00000030, 0x00000001, 0x00000000, 0x00000000);
					}
					func_310(uParam0, 0x00000002, 0x00000000, 0x00000000);
					if (func_179(uParam0, 0x0000000A))
					{
						func_310(uParam0, 0x0000000A, 0x00000000, 0x00000000);
					}
				}
				if (!func_179(uParam0, 0x00000003))
				{
					func_310(uParam0, 0x00000003, 0x00000000, 0x00000000);
				}
				else if (func_420(uParam0, 0x00000003) >= fParam2)
				{
					func_185(uParam0, 0x00000003, 0x00000000);
					func_343(uParam0, "Car not moving", 0x00000014);
				}
			}
		}
		else
		{
			if (func_179(uParam0, 0x00000002))
			{
				func_185(uParam0, 0x00000002, 0x00000000);
			}
			if (func_179(uParam0, 0x00000003))
			{
				func_185(uParam0, 0x00000003, 0x00000000);
			}
		}
	}
}

void func_218(var uParam0, int iParam1)
{
	func_219(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_219(int iParam0)
{
	if (!func_16(iParam0))
	{
		func_109(iParam0);
	}
}

int func_220(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_221(var uParam0)
{
	if (!func_24(uParam0->f_2C, 0x00000001))
	{
		switch (uParam0->f_19C)
		{
			case 0x00000000:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 0x00000001)
				{
					if (func_420(uParam0, 0x00000009) > 1f)
					{
						func_225(uParam0, unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()));
						if (uParam0->f_19A != 0x00000016)
						{
							func_241(uParam0, 0x00000032, 0x00000001, 0x00000001, 0x00000000);
						}
						func_310(uParam0, 0x00000009, 0x00000000, 0x00000000);
						if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
						{
							unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x00000000);
							unk_0x661342B9651D16E2(uParam0->f_9, 0x00000000);
						}
						uParam0->f_8C = 0x00000001;
						uParam0->f_19C = 0x00000001;
					}
				}
				break;
			
			case 0x00000001:
				if (!func_193() && func_420(uParam0, 0x00000009) > 4f)
				{
					func_241(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_19C = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (func_224("TAXI_OBJ_POL", 0x00000000, 0x00000000))
				{
					if (uParam0->f_19A != 0x00000016)
					{
						func_241(uParam0, 0x00000033, 0x00000000, 0x00000000, 0x00000000);
					}
					uParam0->f_19C = 0x00000003;
				}
				else if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001)
				{
					uParam0->f_19C = 0x00000003;
				}
				break;
			
			case 0x00000003:
				if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), func_223(uParam0)))
				{
					func_225(uParam0, unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()));
					func_53(0x00000006, 0x00000000);
				}
				if (!func_222(uParam0))
				{
					if (!unk_0x25037C66EB32B076())
					{
						if (func_420(uParam0, 0x00000010) > 10f)
						{
							if (uParam0->f_19A != 0x00000016)
							{
								func_241(uParam0, 0x00000033, 0x00000001, 0x00000000, 0x00000000);
							}
						}
					}
				}
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001)
				{
					if (func_224("TAXI_OBJ_POL", 0x00000000, 0x00000000))
					{
						unk_0x790015DC92C918E2();
					}
					if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x000000FF);
						unk_0x661342B9651D16E2(uParam0->f_9, 0x00000001);
					}
					uParam0->f_8C = 0x00000000;
					uParam0->f_19C = 0x00000004;
				}
				break;
			
			case 0x00000004:
				if (!func_193())
				{
					if (uParam0->f_19A != 0x00000016)
					{
						func_241(uParam0, 0x00000035, 0x00000001, 0x00000000, 0x00000001);
					}
					func_53(0x00000007, func_223(uParam0));
					func_225(uParam0, 0x00000000);
					uParam0->f_19C = 0x00000005;
				}
				break;
			
			case 0x00000005:
				if (!func_193())
				{
					func_185(uParam0, 0x00000009, 0x00000000);
					func_310(uParam0, 0x0000000B, 0x00000000, 0x00000000);
					uParam0->f_19C = 0x00000000;
				}
				break;
			}
	}
}

bool func_222(var uParam0)
{
	return uParam0->f_6E;
}

int func_223(var uParam0)
{
	return uParam0->f_6A;
}

bool func_224(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 0x00000001)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_225(var uParam0, int iParam1)
{
	if (uParam0->f_6A != iParam1)
	{
		uParam0->f_6A = iParam1;
	}
}

void func_226(var uParam0)
{
	if (func_228(uParam0))
	{
		func_227(uParam0);
	}
}

void func_227(var uParam0)
{
	if (unk_0xEFFB47DC2D8F23F9() && uParam0->f_1A2.f_4 != 0x00000000)
	{
		uParam0->f_1A2.f_4 = 0x00000000;
	}
	switch (uParam0->f_1A2.f_4)
	{
		case 0x00000000:
			uParam0->f_1A2 = unk_0xFC21F7E0F4D92523();
			func_185(uParam0, 0x00000014, 0x00000000);
			uParam0->f_1A2.f_4++;
			break;
		
		case 0x00000001:
			if (uParam0->f_1A2.f_8 && !uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (func_420(uParam0, 0x00000014) > 3f)
				{
					func_241(uParam0, 0x00000057, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_1A2.f_8 = 0x00000000;
					uParam0->f_1A2.f_4++;
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
			{
				if (!func_24(uParam0->f_51, 0x00040000) || !func_24(uParam0->f_51, 0x00100000))
				{
					if (func_420(uParam0, 0x00000014) > 5f)
					{
						uParam0->f_1A2.f_5 = 0x00000001;
						func_241(uParam0, 0x00000054, 0x00000001, 0x00000000, 0x00000000);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (!func_24(uParam0->f_52, 0x04000000))
				{
					if (func_420(uParam0, 0x00000014) > 5f)
					{
						uParam0->f_1A2.f_6 = 0x00000001;
						uParam0->f_1A2.f_8 = 0x00000000;
						func_241(uParam0, 0x00000055, 0x00000001, 0x00000000, 0x00000000);
						func_185(uParam0, 0x00000016, 0x00000000);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2.f_7)
			{
				if (func_420(uParam0, 0x00000014) > 8f)
				{
					func_241(uParam0, 0x00000056, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_1A2.f_4++;
				}
			}
			break;
		
		case 0x00000002:
			if (func_24(uParam0->f_51, 0x00040000) || func_24(uParam0->f_52, 0x04000000))
			{
				if (!func_179(uParam0, 0x00000016))
				{
					func_218(uParam0, 0x00000016);
				}
			}
			if (func_179(uParam0, 0x00000016) && func_420(uParam0, 0x00000016) > 15f)
			{
				if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
				{
					if (!func_24(uParam0->f_51, 0x00100000))
					{
						func_241(uParam0, 0x00000054, 0x00000001, 0x00000000, 0x00000000);
						func_185(uParam0, 0x00000016, 0x00000000);
					}
				}
				else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
				{
					if (!func_24(uParam0->f_52, 0x08000000))
					{
						func_241(uParam0, 0x00000055, 0x00000001, 0x00000000, 0x00000000);
						func_185(uParam0, 0x00000016, 0x00000000);
					}
				}
			}
			break;
	}
}

bool func_228(var uParam0)
{
	return uParam0->f_78;
}

void func_229(var uParam0, var uParam1)
{
	unk_0x893A626C476B583D(uParam0->f_1AC, uParam1, 0xFFFFFFFF);
	uParam0->f_29 = (*uParam1 - uParam0->f_2A);
}

int func_230(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (!unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0x00000001) && !unk_0x81A5359F25512A04(uParam0->f_3))
			{
				func_343(uParam0, "Passenger left car.", 0x00000009);
			}
			else if (func_181(uParam0))
			{
				if (func_224("TAXI_OBJ_PICKUP", 0x00000000, 0x00000000))
				{
					unk_0x2F23E8033F1ADDD9("TAXI_OBJ_PICKUP");
				}
				if (unk_0x0F1CCD77290EE12F())
				{
					return 0x00000001;
				}
			}
			else
			{
				if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
				{
				}
				func_169(uParam0, 0x00000001);
			}
		}
	}
	return 0x00000000;
}

int func_231(var uParam0, float fParam1)
{
	if (func_64(uParam0) == 0x00000002)
	{
		if (unk_0x5A91F08DF773C39D(uParam0->f_4, uParam0->f_11, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_8C, 0x00000001, 0x00000000))
		{
		}
		if (((func_233(uParam0->f_4, uParam0->f_11, 0x00000001) <= (fParam1 + 1f) && unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001) && func_232(0x00000001, 0x00000001, 0x00000001)) && unk_0xF79A7BCA9E38BBBC(uParam0->f_4))
		{
			return func_162(uParam0, 0x00000001, fParam1);
		}
	}
	else if (((unk_0x5A91F08DF773C39D(uParam0->f_4, uParam0->f_11, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_8C, 0x00000001, 0x00000000) && unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001) && func_232(0x00000001, 0x00000001, 0x00000001)) && unk_0xF79A7BCA9E38BBBC(uParam0->f_4))
	{
		return func_162(uParam0, 0x00000001, fParam1);
	}
	return 0x00000000;
}

int func_232(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xC8BC75555A67090D())
	{
		return 0x00000000;
	}
	if (bParam0)
	{
		if (unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			return 0x00000000;
		}
	}
	iVar0 = 0x00000000;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			return 0x00000000;
		}
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (bParam0)
		{
			if (unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				return 0x00000000;
			}
		}
		if (bParam2)
		{
			if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
			{
				if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) != unk_0x16F2683693E537C9())
				{
					return 0x00000000;
				}
			}
		}
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0x30C0A7C378403357(iVar0) < 0.95f || unk_0x30C0A7C378403357(iVar0) > 1.011f)
			{
				return 0x00000000;
			}
		}
	}
	else if (bParam1)
	{
		return 0x00000000;
	}
	if (!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	if (!unk_0xD79EDC28CA84B527(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

float func_233(int iParam0, vector3 vParam1, bool bParam2)
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

int func_234(var uParam0, int iParam1)
{
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		if (unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0x00000000))
		{
			if (unk_0xBBA8A868118C90ED(uParam0->f_4, iParam1, 0x00000000))
			{
				if (unk_0xD1960163A3042274(uParam0->f_3, 0x153011FC) != 0x00000001)
				{
					unk_0x16A6C233289238AA(uParam0->f_3, uParam0->f_4, 0x00000000);
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_235(var uParam0, int iParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0x00000000))
			{
				if (!unk_0xBBA8A868118C90ED(uParam0->f_4, iParam1, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_236(var uParam0)
{
	func_237(uParam0, 0x000003E8);
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x327AAEE25F323797(uParam0->f_3);
		unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0x00000000);
	}
	func_191();
	func_182(uParam0);
}

void func_237(var uParam0, int iParam1)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		unk_0x9A8DDC7C522F5BF5(*uParam0, 0x00000000);
	}
	if (iParam1 > 0x00000000)
	{
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000001, iParam1, 0x00000001, 0x00000000, 0x00000000);
	}
	else
	{
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
	}
}

int func_238(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4) && unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("granger") || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("rebel")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("rebel2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("sandking")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("sandking2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("patriot")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("surfer")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("surfer2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("mesa")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("rancherxl")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("tiptruck2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("mixer")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("mixer2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("rubble")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("scrap")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("tiptruck")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("armytanker")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("barracks")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("barracks2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("pranger")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("ambulance")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == 0x73920F8E) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("policet")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("riot")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("sheriff2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("stockade")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("stockade3")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("biff")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("hauler")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("packer")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("trash")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("benson")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("phantom")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("pounder")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("utillitruck")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("utillitruck2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("utillitruck3")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("dloader")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("flatbed")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("tourbus")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("towtruck")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("towtruck2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("camper")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("taco")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("boxville")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("boxville2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("burrito")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("burrito2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("burrito3")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("burrito4")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("gburrito")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("journey")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("mule")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("mule2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("pony")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("rumpo")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("speedo")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("speedo2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("youga"))
		{
			return 0x00000002;
		}
		else if ((((((((((((((((((((((unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("phoenix") || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("coquette")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("dune")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("cheetah")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("cogcabrio")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("jb700")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("monroe")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("ninef")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("ninef2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("rapidgt")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("rapidgt2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("stinger")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("stingergt")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("ztype")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("banshee")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("bullet")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("carbonizzare")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("comet2")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("entityxf")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("f620")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("infernus")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("surano")) || unk_0x134B62B726CEC8E6(uParam0->f_4) == joaat("voltic"))
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000003;
}

void func_239()
{
	func_65(&(Local_231.f_37), 0x00000002);
	func_65(&(Local_231.f_37), 0x00000004);
	func_65(&(Local_231.f_37), 0x00000010);
	func_65(&(Local_231.f_37), 0x00000040);
	func_65(&(Local_231.f_37), 0x00000100);
	func_65(&(Local_231.f_37), 0x00000200);
	func_65(&(Local_231.f_37), 0x00000400);
	func_65(&(Local_231.f_37), 0x00000800);
	func_65(&(Local_231.f_37), 0x04000000);
	func_65(&(Local_231.f_37), 0x08000000);
	func_65(&(Local_231.f_37), 0x20000000);
	func_65(&(Local_231.f_37), 0x10000000);
	func_65(&(Local_231.f_37), 0x00002000);
	func_65(&(Local_231.f_37), 0x00004000);
	func_65(&(Local_231.f_37), 0x00008000);
	func_65(&(Local_231.f_37), 0x00010000);
	func_65(&(Local_231.f_37), 0x00020000);
	func_65(&(Local_231.f_37), 0x00040000);
	func_65(&(Local_231.f_37), 0x00080000);
	func_65(&(Local_231.f_37), 0x00100000);
	func_65(&(Local_231.f_37), 0x00200000);
	func_65(&(Local_231.f_64), 0x00000040);
	func_65(&(Local_231.f_64), 0x00000800);
	func_65(&(Local_231.f_64), 0x00000080);
	func_65(&(Local_231.f_64), 0x00000020);
	func_65(&(Local_231.f_64), 0x00000100);
	func_65(&(Local_231.f_64), 0x00000008);
	func_65(&(Local_231.f_64), 0x00000001);
	func_65(&(Local_231.f_64), 0x00001000);
	func_65(&(Local_231.f_64), 0x00002000);
	unk_0x0674E58A79778E99(&uLocal_328, 0x00000002);
	func_218(&Local_231, 0x00000007);
}

void func_240(var uParam0)
{
	unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
	func_237(uParam0, 0x000003E8);
}

void func_241(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_1A0 = iParam1;
	if (bParam4)
	{
		func_310(uParam0, 0x00000010, 4f, 0x00000000);
		if (func_242(uParam0))
		{
			func_51();
		}
	}
	func_275(uParam0, iParam2, bParam3);
}

int func_242(var uParam0)
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_8F, 24);
	if (func_193())
	{
		Var1 = { func_243() };
		if (!unk_0xEA6BC48857E0AC4C(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0x7F8A39872A07D2CE(&Var1, &vVar0))
			{
				return 0x00000001;
			}
			StringCopy(&vVar0, uParam0->f_8F, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_190(&vVar0);
			if (unk_0x7F8A39872A07D2CE(&Var1, &vVar0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

struct<6> func_243()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		return Global_4FC8;
	}
	return Var0;
}

int func_244(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if ((unk_0x81A5359F25512A04(uParam0->f_3) && (unk_0x1C0640BA9A7327B3() - iLocal_81) > 0x000001F4) || unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_245(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
		{
			if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
			{
			}
			func_169(uParam0, 0x00000001);
			if (func_35())
			{
				unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
			}
			if (unk_0xD1960163A3042274(uParam0->f_3, 0x7D8F4411) == 0x00000001 || unk_0xD1960163A3042274(uParam0->f_3, 0x7D8F4411) == 0x00000000)
			{
				unk_0x327AAEE25F323797(uParam0->f_3);
				uParam0->f_30 = 0x00000000;
				iLocal_79 = 0x00000000;
				unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0x00000000))
		{
			func_273(uParam0);
			if (uParam0->f_30 > 0x00000001)
			{
				unk_0xF82EA857DA10E0CD(&iVar3);
				unk_0xDD353D0E9C789D0E(&iVar3);
				unk_0x96167B03C5A77156(0x00000000, uParam0->f_B, uParam0->f_6, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
				unk_0xF96A174EE26D7588(0x00000000, uParam0->f_4, 0x00000000);
				unk_0x75ABDC5F81978924(iVar3);
				unk_0x78ADC381772E3D54(uParam0->f_3, iVar3);
				uParam0->f_30 = 0x00000000;
			}
		}
		else
		{
			if (func_179(uParam0, 0x0000000E))
			{
				func_182(uParam0);
				func_172(uParam0, 0x00000000);
			}
			if (func_179(uParam0, 0x00000009))
			{
				func_185(uParam0, 0x00000009, 0x00000000);
				unk_0x790015DC92C918E2();
				if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
				{
					unk_0x7F010F50CE03A8AF(uParam0->f_8, 0x000000FF);
					unk_0x661342B9651D16E2(uParam0->f_8, 0x00000001);
				}
			}
			if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
			{
				fVar4 = ((unk_0x9C66D99E63E8E24C(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_8D && func_272(uParam0, uParam0->f_3) > 300f)
				{
					func_343(uParam0, "Left Passenger", 0x00000008);
				}
				switch (uParam0->f_30)
				{
					case 0x00000000:
						if (unk_0xD1960163A3042274(uParam0->f_3, 0x0E763797) != 0x00000001 || ((func_171(unk_0x16F2683693E537C9(), uParam0->f_3, 0x00000001) < 20f && func_233(uParam0->f_3, uParam0->f_B, 0x00000001) <= 28f) && func_233(uParam0->f_4, uParam0->f_B, 0x00000001) <= 28f))
						{
							if (func_269(uParam0, fParam2))
							{
								uParam0->f_30++;
							}
						}
						break;
					
					case 0x00000001:
						if (func_268(uParam0, 0x00000000, 28f, fVar4, 4f))
						{
							uParam0->f_8A = 0x00000001;
							if (bLocal_86)
							{
								uParam0->f_7 = func_267(uParam0->f_4, uParam0->f_3);
								iVar0 = func_266(uParam0, &iVar1);
								if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 0x00000001)
										{
											iVar2 = 0x00040000;
										}
										else if (uParam0->f_7 == 0x00000002)
										{
											iVar2 = 0x00020000;
										}
										unk_0x75CDA8644CD3B5F5(iVar0, 0x00000000, iVar2);
									}
									else
									{
										unk_0x75CDA8644CD3B5F5(iVar0, 0x00000000, 0x00000000);
									}
								}
								if (uParam0->f_19B == 0x00000000)
								{
									if (unk_0x3CAA763EEC01ADF7(uParam0->f_3, uParam0->f_4, 0x00000000, 0x00000000, 0x00000000))
									{
										if (uParam0->f_7 == 0x00000002)
										{
											uParam0->f_7 = 0x00000000;
											if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
											{
												unk_0x75CDA8644CD3B5F5(iVar0, 0x00000000, 0x00001000);
											}
										}
									}
								}
							}
							unk_0xA3BF0AA5A2608191(uParam0->f_3);
							unk_0x5B1D360B9C6F0A09(uParam0->f_3, uParam0->f_4, 0x00004E20, uParam0->f_7, uParam0->f_6, 0x00000001, 0x00000000);
							uParam0->f_30++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x5F3EEC968FEB7235(unk_0x68F4C0EC296D3901(uParam0->f_3, 0x00000001), fVar4, 0x00000000, 0x00000000, 0x000000FF, 0x00000096);
							}
							if (!func_220(uParam0))
							{
								unk_0xA3BF0AA5A2608191(uParam0->f_3);
							}
							else if (((unk_0xD1960163A3042274(uParam0->f_3, 0x0E763797) != 0x00000001 && unk_0xD1960163A3042274(uParam0->f_3, 0x0E763797) != 0x00000000) && unk_0xD1960163A3042274(uParam0->f_3, 0x0E763797) != 0x00000007) && func_272(uParam0, uParam0->f_3) > 8f)
							{
								unk_0xF82EA857DA10E0CD(&(uParam0->f_F3));
								unk_0xDD353D0E9C789D0E(&(uParam0->f_F3));
								unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
								if (uParam0->f_19B != 0x00000009)
								{
									unk_0xC6EB89C59F2AF6B8(0x00000000, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								else
								{
									unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								unk_0x75ABDC5F81978924(uParam0->f_F3);
								unk_0x78ADC381772E3D54(uParam0->f_3, uParam0->f_F3);
							}
							if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 0x00000003))
							{
								unk_0x8352CA08CF578D18(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 0x00000002:
						if (bLocal_86)
						{
							if (func_171(uParam0->f_4, uParam0->f_3, 0x00000001) < 3f)
							{
								if (!func_265(uParam0, 0x00000001))
								{
									unk_0x327AAEE25F323797(uParam0->f_3);
									func_343(uParam0, "You had a dead body in your back seat.", 0x00000005);
								}
								else if (!func_264(uParam0->f_4))
								{
									unk_0x327AAEE25F323797(uParam0->f_3);
									func_343(uParam0, "You had a dead body in your back seat.", 0x00000000);
								}
							}
						}
						func_262(uParam0);
						if (func_272(uParam0, uParam0->f_3) < fVar4 || func_35())
						{
							if (unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
							{
								if (func_247(uParam0))
								{
									func_246(uParam0);
									iLocal_81 = unk_0x1C0640BA9A7327B3();
									unk_0x4E885A246A9D983A(uParam0->f_3, 0x0000001A, 0x00000001);
									func_185(uParam0, 0x00000005, 0x00000000);
									unk_0x0DC19E268D45C03F();
									unk_0x893A626C476B583D(uParam0->f_1AC, &(uParam0->f_2A), 0xFFFFFFFF);
									unk_0x7D732AB707BE9152(uParam0->f_3, 0x00000000);
									return 0x00000001;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x5F3EEC968FEB7235(unk_0x68F4C0EC296D3901(uParam0->f_3, 0x00000001), fVar4, 0x00000000, 0x00000000, 0x000000FF, 0x00000096);
						}
						break;
					}
				}
			}
	}
	return 0x00000000;
}

void func_246(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
	{
		unk_0x661342B9651D16E2(uParam0->f_8, 0x00000000);
		unk_0x142CC44DB769B57E(&(uParam0->f_8));
	}
}

int func_247(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	
	func_261("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_4E), 0x000003E8);
	iVar6 = 0xFFFFFFFF;
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000) && !unk_0x437347B10A200C4B(uParam0->f_4, 0x00000000))
	{
		func_260();
	}
	if (bLocal_86)
	{
		iLocal_78 = 0x0000000A;
	}
	if ((iLocal_78 < 0x00000007 && iLocal_78 > 0x00000000) && !bLocal_86)
	{
		if (func_258(iLocal_80))
		{
			iLocal_78 = 0x00000007;
		}
	}
	switch (iLocal_78)
	{
		case 0x00000000:
			if (func_162(uParam0, 0x00000000, 0x40A00000) && func_232(0x00000001, 0x00000001, 0x00000001))
			{
				if (func_265(uParam0, 0x00000001))
				{
					iLocal_80 = unk_0x1C0640BA9A7327B3();
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_78 = 0x00000001;
				}
				else
				{
					func_343(uParam0, "You had a dead body in your back seat.", 0x00000005);
				}
			}
			break;
		
		case 0x00000001:
			if (SYSTEM::TIMERA() > 0x000001F4)
			{
				uParam0->f_7 = func_267(uParam0->f_4, uParam0->f_3);
				iVar3 = func_266(uParam0, &iVar4);
				if (!unk_0x437347B10A200C4B(iVar3, 0x00000000))
				{
					if (iVar4 == uParam0->f_7)
					{
						if (uParam0->f_7 == 0x00000001)
						{
							iVar5 = 0x00040000;
						}
						else
						{
							iVar5 = 0x00020000;
						}
						unk_0x75CDA8644CD3B5F5(iVar3, 0x00000000, iVar5);
					}
					else
					{
						unk_0x75CDA8644CD3B5F5(iVar3, 0x00000000, 0x00000000);
					}
				}
				if (uParam0->f_19B == 0x00000000)
				{
					if (unk_0x3CAA763EEC01ADF7(uParam0->f_3, uParam0->f_4, 0x00000000, 0x00000000, 0x00000000))
					{
						uParam0->f_7 = 0x00000000;
						if (!unk_0x437347B10A200C4B(iVar3, 0x00000000))
						{
							unk_0x75CDA8644CD3B5F5(iVar3, 0x00000000, 0x00001000);
						}
					}
				}
				iLocal_78 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (uParam0->f_7 == 0x00000000)
			{
				vVar2 = { 1.5f, 0f, -0.6422f };
				vVar0 = { -1.4309f, 3.958f, 3.5037f };
				vVar1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 0x00000002)
			{
				vVar2 = { 1.5f, -1f, -0.6422f };
				vVar0 = { 1.4309f, 3.958f, 0.5037f };
				vVar1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				vVar2 = { -1.5f, -1f, -0.6422f };
				vVar0 = { -1.4823f, 4.2333f, 0.5939f };
				vVar1 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar6 = func_257(&(uParam0->f_199), unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, vVar0), 0x00000001);
			if (iVar6 == 0x00000001)
			{
				vVar0.z = (vVar0.z + 1.5f);
				if (uParam0->f_7 == 0x00000002)
				{
					vVar1 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar6 != 0xFFFFFFFF)
			{
				func_256(0x00000000, 0x00000000, 0x00000001);
				unk_0x745CE398A4B0A3C6(unk_0x68F4C0EC296D3901(uParam0->f_4, 0x00000001), 3f, 0x00000000);
				unk_0x75CFD6AD66ADFDD1(unk_0x68F4C0EC296D3901(uParam0->f_4, 0x00000001), 25f, 0x00000000);
				unk_0xA37A90C62806D848(0x00000001);
				unk_0x790015DC92C918E2();
				func_254();
				func_275(uParam0, 0x00000000, 0x00000000);
				vVar7 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, vVar2) };
				unk_0xA47B46945FF6DE74(uParam0->f_3, vVar7, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(uParam0->f_3, func_252(uParam0));
				func_251(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 0x42480000);
				unk_0x608A456FDD8A83D8(*uParam0, unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, vVar0));
				unk_0x1305278186D1C53E(*uParam0, uParam0->f_4, vVar1, 0x00000001);
				unk_0xE3BB8E05FCEB3FBE(*uParam0, 0x00000001);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0xF895E10BF4C72645(uParam0->f_3, 0x00000000, 0x00000000);
				unk_0x5B1D360B9C6F0A09(uParam0->f_3, uParam0->f_4, 0x00004E20, uParam0->f_7, uParam0->f_6, 0x00000003, 0x00000000);
				iLocal_78 = 0x00000005;
			}
			break;
		
		case 0x00000005:
			func_261("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_4E), 0x000003E8);
			if (SYSTEM::TIMERA() > 0x00000DAC)
			{
				iLocal_78 = 0x00000009;
			}
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000) && !unk_0x437347B10A200C4B(uParam0->f_4, 0x00000000))
			{
				if (!unk_0x405E212DDE472467(uParam0->f_3, 0x00000000))
				{
					unk_0xF821F915BC24D246(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x152BCACCF710B36E(uParam0->f_4, func_250(uParam0->f_7), 0x00000001);
				}
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0x9A8DDC7C522F5BF5(*uParam0, 0x00000000);
				unk_0x9A8DDC7C522F5BF5(uParam0->f_1, 0x00000000);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				unk_0x82E51BCA72537B6C(0x00000320);
				unk_0xA37A90C62806D848(0x00000001);
				unk_0x790015DC92C918E2();
				func_254();
				func_275(uParam0, 0x00000000, 0x00000000);
				iLocal_78 = 0x00000008;
			}
			break;
		
		case 0x00000008:
			if (unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
			{
				func_248(0x00000001, 0x00000001, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			unk_0x9A8DDC7C522F5BF5(*uParam0, 0x00000000);
			unk_0x9A8DDC7C522F5BF5(uParam0->f_1, 0x00000000);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 0x3F800000);
			func_248(0x00000001, 0x00000001, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x0000000A:
			if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000) && !unk_0x437347B10A200C4B(uParam0->f_4, 0x00000000))
			{
				if (unk_0x81A5359F25512A04(uParam0->f_3) || unk_0x405E212DDE472467(uParam0->f_3, 0x00000001))
				{
					return 0x00000001;
				}
				else if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x950B6492) != 0x00000001 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x950B6492) != 0x00000000)
				{
					unk_0x5B1D360B9C6F0A09(uParam0->f_3, uParam0->f_4, 0x00004E20, uParam0->f_7, uParam0->f_6, 0x00000001, 0x00000000);
				}
			}
			break;
	}
	return 0x00000000;
}

void func_248(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
	}
	unk_0x2D23BE319D971F4C(0x00000001);
	func_25(0x00000000, 0x00000001, iParam2, 0x00000000, 0x00000000, 0x00000000);
	if (bParam1)
	{
		unk_0xBFE31971E49FA500(0x00000001);
		unk_0x8BCB70EB440DED83(0x00000001);
	}
	func_249(0x00000017, 0x00000000);
}

void func_249(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_7927, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7927, iParam0);
	}
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 0x00000002;
		
		case 0x00000002:
			return 0x00000003;
		
		case 0x00000000:
			return 0x00000001;
		
		case 0xFFFFFFFF:
			return 0x00000000;
		
		default:
	}
	return 0x00000002;
}

void func_251(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	if (!unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		*uParam0 = unk_0xAE06CCC36C49929C(0x019286A9, vParam1, vParam2, fParam3, 0x00000000, 0x00000002);
	}
}

float func_252(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = 0f;
	vVar1 = { func_43() };
	if (uParam0->f_7 == 0x00000002)
	{
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_253(unk_0x68F4C0EC296D3901(uParam0->f_3, 0x00000001), vVar1);
	return fVar0;
}

float func_253(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_254()
{
	Global_4CD7 = 0x00000000;
	func_255();
}

void func_255()
{
	if (unk_0x25037C66EB32B076())
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_5538 = 0x00000000;
		unk_0x5CEB4DB888A62073(0x00000001);
		Global_5145 = 0x00000006;
		return;
	}
}

void func_256(int iParam0, int iParam1, int iParam2)
{
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, iParam0);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 15f);
	}
	unk_0x2D23BE319D971F4C(iParam1);
	func_44(0x00000000);
	func_25(0x00000001, 0x00000001, iParam2, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBFE31971E49FA500(0x00000000);
	unk_0x8BCB70EB440DED83(0x00000000);
	func_249(0x00000017, 0x00000001);
}

int func_257(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (*uParam0 == 0x00000000)
	{
		*uParam0 = unk_0xCD02F8660C47B801(vParam1, vParam2, 0x000001FF, 0x00000000, 0x00000007);
		if (bParam3)
		{
		}
	}
	else
	{
		iVar4 = unk_0x1EC301670B54C6DE(*uParam0, &iVar2, &uVar0, &uVar1, &uVar3);
		if (iVar4 == 0x00000002)
		{
			if (bParam3)
			{
			}
			if (iVar2 == 0x00000000)
			{
				*uParam0 = 0x00000000;
				return iVar2;
			}
			else
			{
				if (bParam3)
				{
				}
				*uParam0 = 0x00000000;
				return iVar2;
			}
		}
		else if (iVar4 == 0x00000000)
		{
			if (bParam3)
			{
			}
			*uParam0 = 0x00000000;
		}
	}
	return 0xFFFFFFFF;
}

int func_258(int iParam0)
{
	if (func_259() && unk_0x1C0640BA9A7327B3() >= iParam0 + 1000)
	{
		unk_0x53491B90E4FD0E56(0x000001F4);
		while (!unk_0x757EF87A33649210())
		{
			SYSTEM::WAIT(0x00000000);
		}
		func_44(0x00000000);
		func_191();
		return 0x00000001;
	}
	return 0x00000000;
}

int func_259()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0x00000000;
	}
	if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000012) || unk_0xBFC0798A6E3417F9(0x00000002, 0x00000012))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_260()
{
	if (func_37())
	{
		unk_0xCB0CD9B929EB37B9("appInternet");
	}
	if (func_36())
	{
		unk_0xCB0CD9B929EB37B9("appCamera");
	}
	if (func_46(0x00000001))
	{
		func_44(0x00000000);
	}
}

void func_261(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x1C0640BA9A7327B3() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x1C0640BA9A7327B3();
}

void func_262(var uParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (func_170(uParam0->f_3, 0x00000001) > 30f || func_263(uParam0))
			{
				if (unk_0xD1960163A3042274(uParam0->f_3, 0x950B6492) == 0x00000001 || unk_0xD1960163A3042274(uParam0->f_3, 0x0E763797) == 0x00000001)
				{
					unk_0xF82EA857DA10E0CD(&iVar0);
					unk_0xDD353D0E9C789D0E(&iVar0);
					unk_0xF96A174EE26D7588(0x00000000, uParam0->f_4, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "misscommon@response", "screw_you", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x96167B03C5A77156(0x00000000, uParam0->f_B, uParam0->f_6, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
					unk_0x75ABDC5F81978924(iVar0);
					unk_0x78ADC381772E3D54(uParam0->f_3, iVar0);
					func_343(uParam0, "Player abandoned passenger on pickup.", 0x00000008);
				}
			}
		}
	}
}

int func_263(var uParam0)
{
	if ((unk_0x9C66D99E63E8E24C(uParam0->f_4) > 3f && func_420(uParam0, 0x00000005) > 15f) || unk_0x377BE9A1BF38C7CE(uParam0->f_4))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_264(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	if (!unk_0x464B3D84B739AE72(iParam0, 0x00000000, 0x00000000))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 0x00000001, 0x00000000))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 0x00000004, 0x00000000))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 0x00000005, 0x00000000))
	{
		iVar0++;
	}
	if (iVar0 < 0x00000002)
	{
		return 0x00000000;
	}
	if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iParam0)))
	{
		iVar1 = 0x00000000;
		if (!unk_0x1150BCE24B1630AC(iParam0, 0x00000000))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 0x00000001))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 0x00000002))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 0x00000003))
		{
			iVar1++;
		}
		if (iVar1 < 0x00000002)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_265(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar1;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		iVar0[0x00000000] = unk_0xA30B8362589C124A(uParam0->f_4, 0x00000001, 0x00000000);
		iVar0[0x00000001] = unk_0xA30B8362589C124A(uParam0->f_4, 0x00000002, 0x00000000);
		iVar0[0x00000002] = unk_0xA30B8362589C124A(uParam0->f_4, 0x00000000, 0x00000000);
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000003)
		{
			if (unk_0xC844350D5D58C99A(iVar0[iVar1]))
			{
				if (unk_0x437347B10A200C4B(iVar0[iVar1], 0x00000000))
				{
					if (iVar1 == 0x00000000)
					{
						uParam0->f_7 = 0x00000001;
						if (bParam1)
						{
						}
					}
					else if (iVar1 == 0x00000001)
					{
						uParam0->f_7 = 0x00000002;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0x00000000;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0x00000000;
				}
			}
			iVar1++;
		}
		if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
		{
		}
	}
	return 0x00000001;
}

int func_266(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		iVar0 = unk_0xA30B8362589C124A(uParam0->f_4, 0x00000001, 0x00000000);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			*uParam1 = 0x00000001;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xA30B8362589C124A(uParam0->f_4, 0x00000002, 0x00000000);
			if (unk_0xC844350D5D58C99A(iVar0))
			{
				*uParam1 = 0x00000002;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xA30B8362589C124A(uParam0->f_4, 0x00000000, 0x00000000);
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					*uParam1 = 0x00000000;
					return iVar0;
				}
			}
		}
	}
	return 0x00000000;
}

int func_267(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = unk_0xD6DF381716822EFE(iParam0);
	vVar0 = { unk_0x5293C88BD2F4DE13(iParam0, unk_0x68F4C0EC296D3901(iParam1, 0x00000001)) };
	if (unk_0x134B62B726CEC8E6(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x134B62B726CEC8E6(iParam0) == joaat("sentinel2"))
	{
		iVar2 = 0x00000001;
	}
	if (iVar2 == 0x00000001)
	{
		iVar1 = 0x00000000;
	}
	else if (vVar0.x > 0f)
	{
		if (unk_0x3CAA763EEC01ADF7(iParam1, iParam0, 0x00000002, 0x00000000, 0x00000000))
		{
			iVar1 = 0x00000002;
		}
		else if (unk_0x3CAA763EEC01ADF7(iParam1, iParam0, 0x00000001, 0x00000000, 0x00000000))
		{
			iVar1 = 0x00000001;
		}
		else
		{
			iVar1 = 0xFFFFFFFE;
		}
	}
	else if (unk_0x3CAA763EEC01ADF7(iParam1, iParam0, 0x00000001, 0x00000000, 0x00000000))
	{
		iVar1 = 0x00000001;
	}
	else if (unk_0x3CAA763EEC01ADF7(iParam1, iParam0, 0x00000002, 0x00000000, 0x00000000))
	{
		iVar1 = 0x00000002;
	}
	else
	{
		iVar1 = 0xFFFFFFFE;
	}
	return iVar1;
}

int func_268(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (!unk_0x03068588A1FCED1A(uParam0->f_3) && func_170(uParam0->f_3, 0x00000001) < fParam2)
		{
			if (!func_179(uParam0, 0x00000005))
			{
				func_310(uParam0, 0x00000005, 0x00000000, 0x00000000);
			}
		}
		else if (func_179(uParam0, 0x00000005))
		{
			func_185(uParam0, 0x00000005, 0x00000000);
		}
		if (((func_420(uParam0, 0x00000005) > IntToFloat(iParam1) && unk_0x9C66D99E63E8E24C(uParam0->f_4) < fParam4) && !unk_0x03068588A1FCED1A(uParam0->f_3)) || func_170(uParam0->f_3, 0x00000001) <= fParam3)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_269(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = unk_0xF653B9B22DA806A9(uParam0->f_4, "windscreen");
	if (iVar8 == 0xFFFFFFFF)
	{
		iVar8 = unk_0xF653B9B22DA806A9(uParam0->f_4, "windscreen_f");
	}
	if (iVar8 != 0xFFFFFFFF)
	{
		vVar2 = { unk_0xBF584557291FDD31(uParam0->f_4, iVar8) };
		vVar2 = { unk_0x5293C88BD2F4DE13(uParam0->f_4, vVar2) };
		vVar2.y = (vVar2.y + 1f);
	}
	else
	{
		vVar2 = { 0f, 1f, 1f };
	}
	vVar0 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, vVar2) };
	vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x4ADCCF23C40DC113(vVar0, vVar1, 0x00000000, 0x00000000, 0x000000FF, 0x000000FF);
	switch (iLocal_79)
	{
		case 0x00000000:
			unk_0x11AD11297DC58CC7(uParam0->f_3, 0x00000001);
			iLocal_79 = 0x00000001;
			break;
		
		case 0x00000001:
			if ((func_171(uParam0->f_4, uParam0->f_3, 0x00000000) <= fParam1 && !uParam0->f_8E) && unk_0x755FF954DAE327E1((vVar0.z - vVar1.z)) < 5f)
			{
				if (uParam0->f_199 == 0x00000000)
				{
					uParam0->f_199 = unk_0xCD02F8660C47B801(vVar0, vVar1, 0x000001FF, 0x00000000, 0x00000007);
				}
				else
				{
					iVar7 = unk_0x1EC301670B54C6DE(uParam0->f_199, &iVar5, &uVar3, &uVar4, &uVar6);
					if (iVar7 == 0x00000002)
					{
						if (iVar5 == 0x00000000)
						{
							iLocal_79 = 0x00000002;
						}
						uParam0->f_199 = 0x00000000;
					}
					else if (iVar7 == 0x00000000)
					{
						uParam0->f_199 = 0x00000000;
					}
				}
			}
			else if (unk_0xD1960163A3042274(uParam0->f_3, 0x0E763797) != 0x00000001 && unk_0xD1960163A3042274(uParam0->f_3, 0x0E763797) != 0x00000000)
			{
				unk_0xF82EA857DA10E0CD(&(uParam0->f_F3));
				unk_0xDD353D0E9C789D0E(&(uParam0->f_F3));
				unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@taxi@", "idle_a", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x25644C31B4B6E9F3(uParam0->f_F3, 0x00000001);
				unk_0x75ABDC5F81978924(uParam0->f_F3);
				unk_0x78ADC381772E3D54(uParam0->f_3, uParam0->f_F3);
			}
			break;
		
		case 0x00000002:
			unk_0x790015DC92C918E2();
			if (uParam0->f_19B != 0x00000009)
			{
				if (!func_24(uParam0->f_2C, 0x00000080))
				{
					func_241(uParam0, 0x00000004, 0x00000001, 0x00000000, 0x00000001);
				}
			}
			else
			{
				func_270(uParam0->f_3, "TAXI_HAIL", uParam0->f_91, 0x00000004);
			}
			unk_0xA3BF0AA5A2608191(uParam0->f_3);
			unk_0x0C8C0C840C2D1AD2(uParam0->f_3, uParam0->f_4, 0xFFFFFFFF, 0x00000800, 0x00000004);
			unk_0xF82EA857DA10E0CD(&(uParam0->f_F3));
			unk_0xDD353D0E9C789D0E(&(uParam0->f_F3));
			if (uParam0->f_19B != 0x00000009)
			{
				unk_0xC6EB89C59F2AF6B8(0x00000000, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			else
			{
				unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			}
			unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
			unk_0x75ABDC5F81978924(uParam0->f_F3);
			unk_0x78ADC381772E3D54(uParam0->f_3, uParam0->f_F3);
			unk_0xF82EA857DA10E0CD(&(uParam0->f_F3));
			iLocal_79 = 0x00000003;
			break;
		
		case 0x00000003:
			iLocal_79 = 0x00000000;
			if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0x00000003))
			{
				unk_0x8352CA08CF578D18(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

void func_270(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_271(iParam3), 0x00000000);
}

int func_271(int iParam0)
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

float func_272(var uParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (func_220(uParam0))
		{
			return func_171(uParam0->f_4, iParam1, 0x00000001);
		}
	}
	return 0f;
}

void func_273(var uParam0)
{
	func_180(uParam0, uParam0->f_3);
	if (func_220(uParam0))
	{
		if (func_179(uParam0, 0x0000000E))
		{
			func_182(uParam0);
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_A))
			{
				unk_0x142CC44DB769B57E(&(uParam0->f_A));
			}
		}
	}
	if (!func_179(uParam0, 0x00000009))
	{
		if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
		{
			unk_0x7F010F50CE03A8AF(uParam0->f_8, 0x00000000);
			unk_0x661342B9651D16E2(uParam0->f_8, 0x00000000);
		}
		func_310(uParam0, 0x00000009, 0x00000000, 0x00000000);
		func_274("TAXI_OBJ_POL", 0x00001D4C, 0x00000001);
	}
}

void func_274(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

void func_275(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_6E = iParam1;
	if (bParam2)
	{
		func_51();
		func_310(uParam0, 0x00000010, 4f, 0x00000000);
		unk_0x790015DC92C918E2();
	}
}

int func_276(var uParam0, int iParam1)
{
	if (!unk_0x67C1D9E5B91B2E37(0x00000002))
	{
		return 0x00000000;
	}
	func_280(0x0000000C);
	if (func_24(uParam0->f_2C, 0x00000008))
	{
		if (!func_24(uParam0->f_2C, 0x00000080))
		{
			if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()) && !func_24(uParam0->f_2C, 0x00000100))
			{
				func_65(&(uParam0->f_2C), 0x00000100);
			}
			if (func_24(uParam0->f_2C, 0x00000100) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				func_241(uParam0, 0x00000087, 0x00000001, 0x00000000, 0x00000001);
				func_65(&(uParam0->f_2C), 0x00000080);
			}
		}
	}
	if (!func_279(uParam0, iParam1))
	{
		if (func_170(uParam0->f_3, 0x00000001) < 35f)
		{
			if (!func_24(uParam0->f_2C, 0x00000008))
			{
				unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0x00000000);
				func_241(uParam0, 0x00000085, 0x00000001, 0x00000000, 0x00000001);
				func_65(&(uParam0->f_2C), 0x00000008);
			}
		}
		if ((unk_0xEB6A8945D1AC98A1(uParam0->f_3) || unk_0xE9FDA1035CFEA94F(uParam0->f_3)) || func_170(uParam0->f_3, 0x00000001) > 400f)
		{
			func_343(uParam0, "ped is fleeing or injured", 0x00000005);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x6937EA2286828455(uParam0->f_2, 0x00000000);
		unk_0x44A200C9B6E1CEA6(uParam0->f_4, 0x00000001);
		if (unk_0xA30B8362589C124A(uParam0->f_4, 0xFFFFFFFF, 0x00000000) == uParam0->f_2)
		{
			unk_0x2F625BED8BF7F26A(uParam0->f_4);
			func_277(uParam0);
			func_53(0x00000002, 0x00000000);
			bLocal_86 = 0x00000001;
			func_219(&iLocal_82);
			return 0x00000001;
		}
		else
		{
			func_343(uParam0, "No Taxi", 0x00000015);
			func_130("TAXI_DBG_NTAXI", 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_277(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0x00000000))
	{
		if (func_278())
		{
		}
	}
}

int func_278()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_279(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				iVar1 = unk_0x134B62B726CEC8E6(iVar0);
				bVar2 = func_264(iVar0);
				bVar3 = 0x00000001;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == 0x73920F8E) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = 0x00000000;
				}
				if (uParam0->f_19B == 0x00000007)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = 0x00000000;
					}
				}
				bVar4 = 0x00000000;
				if (unk_0x8E39AC3C76C8AA58(iVar1))
				{
					if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
					{
						bVar4 = 0x00000001;
					}
				}
				bVar5 = 0x00000001;
				if (unk_0xD6DF381716822EFE(iVar0) < iParam1)
				{
					bVar5 = 0x00000000;
				}
				if (!bVar2)
				{
					if (!func_24(uParam0->f_2C, 0x00000040))
					{
						if (unk_0x67C1D9E5B91B2E37(0x00000002))
						{
							func_130("TX_VIP_DMGD", 0xFFFFFFFF);
							if (func_121("TX_VIP_DMGD"))
							{
								func_65(&(uParam0->f_2C), 0x00000040);
							}
						}
					}
					return 0x00000000;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_24(uParam0->f_2C, 0x00000020))
					{
						if (unk_0x67C1D9E5B91B2E37(0x00000002))
						{
							func_130("TX_VIP_CAR", 0xFFFFFFFF);
							if (func_121("TX_VIP_CAR"))
							{
								func_65(&(uParam0->f_2C), 0x00000020);
							}
						}
					}
					return 0x00000000;
				}
				else if (!bVar5)
				{
					if (!func_24(uParam0->f_2C, 0x00000010))
					{
						if (unk_0x67C1D9E5B91B2E37(0x00000002))
						{
							func_130("TX_VIP_SMALL", 0xFFFFFFFF);
							if (func_121("TX_VIP_SMALL"))
							{
								func_65(&(uParam0->f_2C), 0x00000010);
							}
						}
					}
					return 0x00000000;
				}
				return 0x00000001;
			}
		}
		else
		{
			func_22(&(uParam0->f_2C), 0x00000010);
			func_22(&(uParam0->f_2C), 0x00000040);
			func_22(&(uParam0->f_2C), 0x00000020);
		}
	}
	return 0x00000000;
}

void func_280(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		uVar0 = iParam0;
		unk_0x3CFFF3C8EACD8DC1(0x00000008, &uVar0, 0x00000001, 0x00000001);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x8DECFDD6715449E4(0x00000008, &cVar1);
	}
}

void func_281(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		func_23(&(uParam0->f_64), iVar0);
		iVar0++;
	}
}

void func_282()
{
	Local_165 = 0x00000000;
	func_299(0x0000B355/*func_301*/, 0x0000B33C/*func_300*/, 0x00000001);
	func_299(0x0000B24D/*func_297*/, 0x0000B236/*func_296*/, 0x00000001);
	func_299(0x0000B1F8/*func_295*/, 0x0000B1DF/*func_294*/, 0x00000001);
	func_299(0x0000B197/*func_293*/, 0x0000B17F/*func_292*/, 0x00000001);
	func_299(0x0000B111/*func_291*/, 0x0000B0FC/*func_290*/, 0x00000001);
	func_299(0x0000B0C7/*func_288*/, 0x0000B0AE/*func_287*/, 0x00000001);
	func_299(0x0000B020/*func_284*/, 0x0000B009/*func_283*/, 0x00000001);
}

int func_283(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_343(uParam0, "Taxi Not Driveable", 0x00000001);
	return 0x00000001;
}

int func_284(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_286(uParam0->f_4))
		{
			func_285(uParam0, 0x00000001);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_285(var uParam0, int iParam1)
{
	uParam0->f_75 = 0x00000001;
	uParam0->f_76 = iParam1;
}

int func_286(int iParam0)
{
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0x6EE94F60DA2A2273(iParam0) < -100f)
	{
		return 0x00000001;
	}
	else if (unk_0x7B5606C651AB51B5(iParam0, 0x00000000, 0x00009C40) || unk_0x7B5606C651AB51B5(iParam0, 0x00000001, 0x00009C40))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_287(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_343(uParam0, "Didn't lose police in time.", 0x00000009);
	return 0x00000001;
}

int func_288(var uParam0)
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
	{
		if (func_289(uParam0->f_55, 0x00000020))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_289(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_290(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_285(uParam0, 0x0000000B);
	return 0x00000001;
}

int func_291(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (unk_0x70EED0761B82965E(uParam0->f_4) && !unk_0xF79A7BCA9E38BBBC(uParam0->f_4))
		{
			if (!func_179(uParam0, 0x00000019))
			{
				func_310(uParam0, 0x00000019, 0x00000000, 0x00000000);
			}
			else if (func_420(uParam0, 0x00000019) > 2f)
			{
				return 0x00000001;
			}
		}
		else if (func_179(uParam0, 0x00000019))
		{
			func_185(uParam0, 0x00000019, 0x00000000);
		}
	}
	return 0x00000000;
}

int func_292(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_343(uParam0, "Taxi Is Flipped", 0x00000000);
	return 0x00000001;
}

int func_293(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0x00000000))
	{
		if (unk_0x4DA54CAC0D81A673(uParam0->f_4))
		{
			if (unk_0x7B5606C651AB51B5(uParam0->f_4, 0x00000000, 0x00009C40) || unk_0x7B5606C651AB51B5(uParam0->f_4, 0x00000001, 0x00009C40))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_294(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_343(uParam0, "Stayed stopped for too long.", 0x00000009);
	return 0x00000001;
}

int func_295(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0x00000000))
	{
		if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
		{
			if (unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
			{
				if (func_289(uParam0->f_56, 0x00000008))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_296(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_343(uParam0, "Taxi Not Driveable", 0x00000000);
	return 0x00000001;
}

int func_297(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_298(uParam0->f_4))
		{
			func_285(uParam0, 0x00000000);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_298(int iParam0)
{
	if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (unk_0x6EE94F60DA2A2273(iParam0) == 0f)
	{
		if (!unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
		}
		return 0x00000001;
	}
	else if (unk_0x7B5606C651AB51B5(iParam0, 0x00000000, 0x00009C40) || unk_0x7B5606C651AB51B5(iParam0, 0x00000001, 0x00009C40))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_299(int iParam0, int iParam1, bool bParam2)
{
	if (Local_165 >= 0x00000010)
	{
		Local_165 = 0x00000010;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0x00000000;
	func_66(&(Local_165.f_1[Local_165 /*4*/]), 0x00000001);
	if (bParam2)
	{
		func_66(&(Local_165.f_1[Local_165 /*4*/]), 0x00000002);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_300(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_343(uParam0, "Passenger injured.", 0x0000000F);
	return 0x00000001;
}

int func_301(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		if ((unk_0xEB6A8945D1AC98A1(uParam0->f_3) || unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000)) || unk_0x4E861BC5B1EDA7BD(uParam0->f_3))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_302()
{
	Local_162[0x00000005 /*10*/] = 0x00000005;
	Local_162[0x00000005 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000005 /*10*/].f_2 = "TX_SPEED_N";
	Local_162[0x00000005 /*10*/].f_9 = 0x0000004E;
	Local_162[0x00000000 /*10*/] = 0x00000005;
	Local_162[0x00000000 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000000 /*10*/].f_2 = "TX_AIR_N";
	Local_162[0x00000000 /*10*/].f_9 = 0x0000004C;
	Local_162[0x00000002 /*10*/] = 0x00000005;
	Local_162[0x00000002 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000002 /*10*/].f_2 = "TX_QSTOP_N";
	Local_162[0x00000002 /*10*/].f_9 = 0x00000015;
	Local_162[0x00000001 /*10*/] = 0x0000000A;
	Local_162[0x00000001 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000001 /*10*/].f_2 = "TX_DRIFT_N";
	Local_162[0x00000001 /*10*/].f_9 = 0x00000047;
	Local_162[0x00000004 /*10*/] = 0x0000000A;
	Local_162[0x00000004 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000004 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_162[0x00000004 /*10*/].f_9 = 0x0000004F;
	Local_162[0x00000006 /*10*/] = 0x0000000A;
	Local_162[0x00000006 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000006 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_162[0x00000006 /*10*/].f_9 = 0x00000050;
	Local_162[0x00000009 /*10*/] = 0x0000000F;
	Local_162[0x00000009 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000009 /*10*/].f_2 = "TX_HITRUN_N";
	Local_162[0x00000009 /*10*/].f_9 = 0x00000052;
	Local_162[0x00000008 /*10*/] = 0x0000000F;
	Local_162[0x00000008 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000008 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_162[0x00000008 /*10*/].f_9 = 0x00000048;
	Local_162[0x00000007 /*10*/] = 0x0000000F;
	Local_162[0x00000007 /*10*/].f_1 = 0x00000000;
	Local_162[0x00000007 /*10*/].f_2 = "TX_ROLL_N";
	Local_162[0x00000007 /*10*/].f_9 = 0x0000004A;
	Local_162[0x0000000B /*10*/] = 0x00000005;
	Local_162[0x0000000B /*10*/].f_1 = 0x00000000;
	Local_162[0x0000000B /*10*/].f_2 = "TX_SWERVE_N";
	Local_162[0x0000000B /*10*/].f_9 = 0x00000046;
	Local_162[0x0000000C /*10*/] = 0x00000005;
	Local_162[0x0000000C /*10*/].f_1 = 0x00000000;
	Local_162[0x0000000C /*10*/].f_2 = "TX_REVERSE_N";
	Local_162[0x0000000C /*10*/].f_9 = 0x00000045;
	Local_162[0x0000000D /*10*/] = 0x0000000A;
	Local_162[0x0000000D /*10*/].f_1 = 0x00000000;
	Local_162[0x0000000D /*10*/].f_2 = "TX_OFFROAD_N";
	Local_162[0x0000000D /*10*/].f_9 = 0x00000043;
	Local_162[0x0000000E /*10*/] = 0x0000000A;
	Local_162[0x0000000E /*10*/].f_1 = 0x00000000;
	Local_162[0x0000000E /*10*/].f_2 = "TX_NEARMIS_N";
	Local_162[0x0000000E /*10*/].f_9 = 0x0000004B;
}

int func_303()
{
	if (!unk_0xB87F6CF6E5628C67(iLocal_260))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading A_M_Y_SouCent_01", &iLocal_267, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0x83D8570832F172A7(iLocal_335))
	{
		return 0x00000000;
	}
	if (!func_304(&iLocal_267, 0x00000001))
	{
		func_261("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_267, 0x000003E8);
		return 0x00000000;
	}
	return 0x00000001;
}

int func_304(int iParam0, bool bParam1)
{
	if (!unk_0xB87F6CF6E5628C67(func_21()))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (bParam1)
	{
		if (!unk_0xB4AE0788C1587752("gestures@m@standing@casual"))
		{
			func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 0x000003E8);
			return 0x00000000;
		}
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@taxi@"))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@towingcome_here"))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("misscommon@response"))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0x67C1D9E5B91B2E37(0x00000002))
	{
		func_261("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	return 0x00000001;
}

void func_305(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000001:
			uParam0->f_7B = "TRS_STREAMING";
			break;
		
		case 0x00000002:
			uParam0->f_7B = " TRS_FINDING_LOCATION ";
			break;
		
		case 0x00000003:
			uParam0->f_7B = " TRS_SPAWNING ";
			break;
		
		case 0x00000004:
			uParam0->f_7B = " TRS_SPAWN_CAR ";
			break;
		
		case 0x00000005:
			uParam0->f_7B = " TRS_MANAGE_PICKUP ";
			break;
		
		case 0x00000006:
			uParam0->f_7B = " TRS_PASSENGER_ENTER ";
			break;
		
		case 0x00000007:
			uParam0->f_7B = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 0x00000008:
			uParam0->f_7B = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 0x00000009:
			uParam0->f_7B = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 0x0000000A:
			uParam0->f_7B = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 0x00000012:
			uParam0->f_7B = " TRS_PRE_CUTSCENE ";
			break;
		
		case 0x0000000B:
			uParam0->f_7B = " TRS_SWITCH_JOB ";
			break;
		
		case 0x00000013:
			uParam0->f_7B = " TRS_CUTSCENE ";
			break;
		
		case 0x00000014:
			uParam0->f_7B = " TRS_CUTSCENE_02 ";
			break;
		
		case 0x0000000D:
			uParam0->f_7B = " TRS_CHASE_DRIVER ";
			break;
		
		case 0x0000000C:
			uParam0->f_7B = " TRS_SAVE_DAMSEL ";
			break;
		
		case 0x0000000E:
			uParam0->f_7B = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 0x0000000F:
			uParam0->f_7B = " TRS_WAIT_PARK ";
			break;
		
		case 0x00000010:
			uParam0->f_7B = " TRS_SEND_TO_STORE ";
			break;
		
		case 0x00000011:
			uParam0->f_7B = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 0x00000016:
			uParam0->f_7B = " TRS_DROPPING_OFF ";
			break;
		
		case 0x00000019:
			uParam0->f_7B = " TRS_ESCAPE_POLICE ";
			break;
		
		case 0x0000001A:
			uParam0->f_7B = " TRS_POLICE_ESCAPED ";
			break;
		
		case 0x00000018:
			uParam0->f_7B = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 0x0000001B:
			uParam0->f_7B = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 0x00000017:
			uParam0->f_7B = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 0x0000001C:
			uParam0->f_7B = " TRS_SPECIAL_ENDING ";
			break;
		
		case 0x0000001D:
			uParam0->f_7B = " TRS_SCORECARD_GRADE ";
			break;
		
		case 0x0000001E:
			uParam0->f_7B = " TRS_CLEANUP ";
			break;
		
		case 0x00000015:
			uParam0->f_7B = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_7B = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_19A = iParam1;
}

int func_306(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		uParam0->f_8 = func_307(uParam0->f_3, 0x00000000, 0x00000000);
		unk_0x138116A08F9AC5F4(0x00000001, 0x00000000);
		unk_0x661342B9651D16E2(uParam0->f_8, 0x00000001);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x0C8C0C840C2D1AD2(uParam0->f_3, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000004);
	}
	return 0x00000001;
}

int func_307(int iParam0, bool bParam1, bool bParam2)
{
	return func_153(iParam0, !bParam1, bParam2);
}

int func_308(var uParam0, vector3 vParam1, vector3 vParam2, char* sParam3, int iParam4, float fParam5, float fParam6)
{
	if (!unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		func_309(uParam0, uParam0->f_E);
		uParam0->f_B = { vParam1 };
		uParam0->f_E = { vParam2 };
		func_41(uParam0->f_E, 0x00000000);
		unk_0x745CE398A4B0A3C6(uParam0->f_E, 2f, 0x00000000);
		func_39(uParam0->f_E, 0x00000000, fParam6);
		if (iParam4 == 0x00000000)
		{
			uParam0->f_3 = unk_0x852B8A2DB29D2288(uParam0->f_B);
		}
		else if (unk_0xC844350D5D58C99A(Global_1AF0C.f_E1[0x00000000]))
		{
			uParam0->f_3 = Global_1AF0C.f_E1[0x00000000];
			unk_0x73270B3C9CC833FD(uParam0->f_3, 0x00000001, 0x00000001);
		}
		else
		{
			uParam0->f_3 = unk_0x36F2404464202779(0x0000001A, iParam4, uParam0->f_B, fParam5, 0x00000001, 0x00000001);
		}
		func_8(&(uParam0->f_F4), 0x00000003, uParam0->f_3, sParam3, 0x00000000, 0x00000001);
		unk_0x4F39CC3882DD074E(uParam0->f_3, sParam3);
		unk_0x9DD8618CA5BF832D(uParam0->f_3, 0x00000070, 0x00000001);
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			unk_0x25BD67336EA4AECE(uParam0->f_3, 0x000000FA);
			unk_0x4E885A246A9D983A(uParam0->f_3, 0x00000020, 0x00000000);
			unk_0x4E885A246A9D983A(uParam0->f_3, 0x00000068, 0x00000001);
			unk_0x4E885A246A9D983A(uParam0->f_3, 0x000000B1, 0x00000001);
			unk_0x4E885A246A9D983A(uParam0->f_3, 0x00000074, 0x00000000);
			unk_0xF63400DBE3303D26("TAXI_Passenger", &(uParam0->f_19D));
			unk_0x0E2400AB9174FA81(0x00000001, uParam0->f_19D, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000002, uParam0->f_19D, 0xA49E591C);
			unk_0x6DF7BF67E86AAE86(uParam0->f_3, uParam0->f_19D);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_309(var uParam0, vector3 vParam1)
{
	uParam0->f_33[0x00000000] = unk_0xA4B9EE930B45BDFA(vParam1, 20f, 5f, 0x00000000);
}

void func_310(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 0x00000020)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			if (fParam2 > 0f)
			{
				func_110(&(uParam0->f_92[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_109(&(uParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_110(&(uParam0->f_92[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_109(&(uParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_311()
{
	unk_0x523BCC9DC80CD82F(iLocal_260);
	unk_0x3F423BF5B8125A50(sLocal_282);
	unk_0xAE317D00A5A55DF6("Taxi_Vomit", 0x00000000, 0xFFFFFFFF);
	iLocal_335 = func_313();
	unk_0x9E5E60D8C63FD9D1();
	func_312(0x00000001);
}

void func_312(bool bParam0)
{
	unk_0x523BCC9DC80CD82F(func_21());
	if (bParam0)
	{
		unk_0x3F423BF5B8125A50("gestures@m@standing@casual");
	}
	unk_0x3F423BF5B8125A50("oddjobs@taxi@");
	unk_0x3F423BF5B8125A50("oddjobs@towingcome_here");
	unk_0x3F423BF5B8125A50("misscommon@response");
	unk_0xD7992BEF7A9D109E("TAXI", 0x00000002);
	if (!func_24(Global_1B416.f_4A94, 0x00000080))
	{
		func_65(&(Global_1B416.f_4A94), 0x00000080);
	}
}

int func_313()
{
	return unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

void func_314(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 0x00000005)
	{
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000004)
		{
			unk_0x0674E58A79778E99(&(uParam0->f_3C[iVar0 /*3*/]), 0x00000001);
			iVar0++;
		}
		iVar0 = 0x00000000;
		iVar0 = 0x00000000;
		while (iVar0 < *uParam1)
		{
			uParam0->f_3C[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x5D96D8530B3D0904(&(uParam0->f_3C[iVar0 /*3*/]), 0x00000001);
			unk_0x0674E58A79778E99(&(uParam0->f_3C[iVar0 /*3*/]), 0x00000002);
			iVar0++;
		}
	}
}

void func_315(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

int func_316()
{
	float fVar0;
	int iVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3());
	iVar1 = func_194(&Local_231);
	if ((fVar0 - fLocal_271) > 5f)
	{
		fLocal_271 = fVar0;
		if (iLocal_270 == 0x00000000)
		{
			if (func_10(Local_231.f_4, Local_231.f_11, 0x00000001) < 200f)
			{
				iLocal_270++;
			}
			if (iVar1 >= 0x00000005)
			{
				if (!func_193())
				{
					return 0x00000001;
				}
				else
				{
					func_191();
					fLocal_271 = 0f;
				}
			}
		}
		else if (iVar1 >= 0x00000007)
		{
			if (!func_193())
			{
				return 0x00000001;
			}
			else
			{
				func_191();
				fLocal_271 = 0f;
			}
		}
	}
	return 0x00000000;
}

void func_317()
{
	if (func_318(&Local_231, 0x0000001B, 155f))
	{
	}
}

int func_318(var uParam0, int iParam1, float fParam2)
{
	if (uParam0->f_19A < 0x0000001D)
	{
		if (func_179(uParam0, 0x00000007))
		{
			func_218(uParam0, 0x00000017);
			if (func_420(uParam0, 0x00000007) > fParam2 && func_420(uParam0, 0x00000017) > 35f)
			{
				func_310(uParam0, 0x00000017, 0x00000000, 0x00000000);
				func_241(uParam0, iParam1, 0x00000001, 0x00000000, 0x00000000);
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_319(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_19B == 0x00000000)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
		{
			if (bParam2)
			{
				if (func_420(uParam0, 0x0000000A) > (20f + 10f))
				{
					if (uParam0->f_70)
					{
						func_241(uParam0, 0x0000005C, 0x00000001, 0x00000000, 0x00000000);
						uParam0->f_70 = 0x00000000;
					}
					else
					{
						func_241(uParam0, 0x00000053, 0x00000001, 0x00000000, 0x00000000);
					}
					uParam0->f_71 = 0x00000001;
					func_310(uParam0, 0x0000000A, 0f, 0x00000001);
				}
			}
			else if (func_420(uParam0, 0x0000000A) > 20f)
			{
				if (uParam0->f_70)
				{
					func_241(uParam0, 0x0000005C, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_70 = 0x00000000;
				}
				else
				{
					func_241(uParam0, 0x00000053, 0x00000001, 0x00000000, 0x00000000);
				}
				uParam0->f_71 = 0x00000001;
				func_310(uParam0, 0x0000000A, 0f, 0x00000001);
			}
		}
	}
	if (uParam0->f_19B == 0x00000001)
	{
		if (func_420(uParam0, 0x0000000A) > 30f)
		{
			if (!func_193())
			{
				if (uParam0->f_70)
				{
					func_241(uParam0, 0x0000005C, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_70 = 0x00000000;
				}
				else
				{
					func_241(uParam0, 0x00000053, 0x00000001, 0x00000000, 0x00000000);
				}
				uParam0->f_71 = 0x00000001;
				func_310(uParam0, 0x0000000A, 0f, 0x00000001);
			}
		}
	}
	if (func_24(uParam0->f_64, 0x00000040))
	{
		if (!func_16(&(Local_162[0x00000005 /*10*/].f_6)))
		{
			func_219(&(Local_162[0x00000005 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x00000005 /*10*/].f_6)) > 6f)
		{
			if (func_342(uParam0))
			{
				if (uParam0->f_71)
				{
					func_241(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_241(uParam0, Local_162[0x00000005 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_341(uParam0, 0x00000001);
				func_339(0x00000005, uParam0);
				func_338(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 0x00000001))
	{
		if (!func_16(&(Local_162[0x00000000 /*10*/].f_6)))
		{
			func_219(&(Local_162[0x00000000 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x00000000 /*10*/].f_6)) > 5f)
		{
			if (func_337(uParam0))
			{
				func_341(uParam0, 0x00000001);
				func_339(0x00000000, uParam0);
				if (uParam0->f_71)
				{
					func_241(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_241(uParam0, Local_162[0x00000000 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_338(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 0x00000002))
	{
		if (!func_16(&(Local_162[0x00000001 /*10*/].f_6)))
		{
			func_219(&(Local_162[0x00000001 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x00000001 /*10*/].f_6)) > 5f)
		{
			if (func_336(uParam0))
			{
				func_341(uParam0, 0x00000001);
				func_339(0x00000001, uParam0);
				if (uParam0->f_71)
				{
					func_241(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_241(uParam0, Local_162[0x00000001 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_338(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 0x00000800))
	{
		if (!func_16(&(Local_162[0x00000008 /*10*/].f_6)))
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_4))
			{
				uParam0->f_2E = unk_0x7F6DC62EA9922664(uParam0->f_4);
				func_219(&(Local_162[0x00000008 /*10*/].f_6));
			}
		}
		else if (func_107(&(Local_162[0x00000008 /*10*/].f_6)) > 7f || Local_162[0x00000008 /*10*/].f_1 == 0x00000000)
		{
			if (func_335(uParam0))
			{
				func_341(uParam0, 0x00000001);
				func_339(0x00000008, uParam0);
				func_338(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 0x00000080))
	{
		if (!func_16(&(Local_162[0x00000006 /*10*/].f_6)))
		{
			func_219(&(Local_162[0x00000006 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x00000006 /*10*/].f_6)) > 5f)
		{
			if (func_334(uParam0))
			{
				func_341(uParam0, 0x00000001);
				func_339(0x00000006, uParam0);
				if (uParam0->f_71)
				{
					func_241(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_241(uParam0, Local_162[0x00000006 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_338(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 0x00000020))
	{
		if (!func_16(&(Local_162[0x00000004 /*10*/].f_6)))
		{
			func_219(&(Local_162[0x00000004 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x00000004 /*10*/].f_6)) > 4f)
		{
			if (func_333(uParam0))
			{
				func_341(uParam0, 0x00000001);
				func_339(0x00000004, uParam0);
				if (uParam0->f_71)
				{
					func_241(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_241(uParam0, Local_162[0x00000004 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_338(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 0x00000100))
	{
		if (!func_16(&(Local_162[0x00000007 /*10*/].f_6)))
		{
			func_219(&(Local_162[0x00000007 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x00000007 /*10*/].f_6)) > 5f || Local_162[0x00000007 /*10*/].f_1 == 0x00000000)
		{
			if (func_332(uParam0))
			{
				func_339(0x00000007, uParam0);
				func_341(uParam0, 0x00000001);
				if (uParam0->f_71)
				{
					func_241(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_241(uParam0, Local_162[0x00000007 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000001);
				}
				func_338(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 0x00000008))
	{
		if (!func_16(&(Local_162[0x00000009 /*10*/].f_6)))
		{
			func_219(&(Local_162[0x00000009 /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x00000009 /*10*/].f_6)) <= 7f)
		{
			unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
		}
		else if (func_107(&(Local_162[0x00000009 /*10*/].f_6)) > 7f || Local_162[0x00000009 /*10*/].f_1 == 0x00000000)
		{
			if (func_331(uParam0))
			{
				func_341(uParam0, 0x00000001);
				func_339(0x00000009, uParam0);
				if (uParam0->f_71)
				{
					func_241(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_241(uParam0, Local_162[0x00000009 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000001);
				}
				func_338(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 0x00004000))
	{
		if (!func_16(&(Local_162[0x0000000D /*10*/].f_6)))
		{
			func_219(&(Local_162[0x0000000D /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x0000000D /*10*/].f_6)) > 10f)
		{
			if (func_325(uParam0))
			{
				func_341(uParam0, 0x00000001);
				func_339(0x0000000D, uParam0);
				if (uParam0->f_71)
				{
					func_241(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_241(uParam0, Local_162[0x0000000D /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_338(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 0x00008000))
	{
		if (!func_16(&(Local_162[0x0000000E /*10*/].f_6)))
		{
			func_219(&(Local_162[0x0000000E /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x0000000E /*10*/].f_6)) > 7f)
		{
			if (func_324(uParam0))
			{
				func_341(uParam0, 0x00000001);
				func_339(0x0000000E, uParam0);
				if (uParam0->f_71)
				{
					func_241(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_241(uParam0, Local_162[0x0000000E /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_338(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 0x00001000))
	{
		if (!func_16(&(Local_162[0x0000000B /*10*/].f_6)))
		{
			func_219(&(Local_162[0x0000000B /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x0000000B /*10*/].f_6)) > 8f)
		{
			if (func_323(uParam0))
			{
				func_341(uParam0, 0x00000001);
				func_339(0x0000000B, uParam0);
				if (uParam0->f_71)
				{
					func_241(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_241(uParam0, Local_162[0x0000000B /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_338(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 0x00002000))
	{
		if (!func_16(&(Local_162[0x0000000C /*10*/].f_6)))
		{
			func_219(&(Local_162[0x0000000C /*10*/].f_6));
		}
		else if (func_107(&(Local_162[0x0000000C /*10*/].f_6)) > 5f)
		{
			if (func_322(uParam0))
			{
				func_341(uParam0, 0x00000001);
				func_339(0x0000000C, uParam0);
				if (uParam0->f_71)
				{
					func_241(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_241(uParam0, Local_162[0x0000000C /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_338(uParam0);
			}
		}
	}
	if (func_24(uParam0->f_64, 0x00000004))
	{
		if (!func_16(&(Local_162[0x00000002 /*10*/].f_6)))
		{
			func_321(&(Local_162[0x00000002 /*10*/].f_6), 0f);
		}
		else if (func_107(&(Local_162[0x00000002 /*10*/].f_6)) > 5f)
		{
			if (func_320(uParam0))
			{
				if (uParam0->f_71)
				{
					func_241(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_241(uParam0, Local_162[0x00000002 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_341(uParam0, 0x00000001);
				func_339(0x00000002, uParam0);
				func_338(uParam0);
			}
		}
	}
}

int func_320(var uParam0)
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_2))
	{
		if ((!unk_0x4024663A44BC1535(uParam0->f_2) && !func_16(&(Local_162[0x00000000 /*10*/].f_3))) && !func_16(&(Local_162[0x00000001 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[0x00000002 /*10*/].f_3)))
			{
				uParam0->f_25 = unk_0x9C66D99E63E8E24C(uParam0->f_2);
				if (uParam0->f_25 > 10f)
				{
					func_219(&(Local_162[0x00000002 /*10*/].f_3));
				}
			}
			else if (func_107(&(Local_162[0x00000002 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_26 = uParam0->f_25;
				uParam0->f_25 = unk_0x9C66D99E63E8E24C(uParam0->f_2);
				fVar0 = (uParam0->f_26 - uParam0->f_25);
				func_106(&(Local_162[0x00000002 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_25 < 12f)
				{
					return 0x00000001;
				}
			}
		}
		else
		{
			func_106(&(Local_162[0x00000002 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

void func_321(int iParam0, float fParam1)
{
	if (!func_16(iParam0))
	{
		func_110(iParam0, fParam1);
	}
}

int func_322(var uParam0)
{
	vector3 vVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 0x00000001) };
		if (vVar0.y < -10f && !func_16(&(Local_162[0x00000000 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[0x0000000C /*10*/].f_3)))
			{
				func_219(&(Local_162[0x0000000C /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0x0000000C /*10*/].f_3)) > 5f)
			{
				func_106(&(Local_162[0x0000000C /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_106(&(Local_162[0x0000000C /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_323(var uParam0)
{
	vector3 vVar0;
	
	if ((((((unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000) && !func_16(&(Local_162[0x00000000 /*10*/].f_3))) && !func_16(&(Local_162[0x00000001 /*10*/].f_3))) && !func_16(&(Local_162[0x00000005 /*10*/].f_3))) && !func_16(&(Local_162[0x00000009 /*10*/].f_3))) && !func_16(&(Local_162[0x00000007 /*10*/].f_3))) && !func_16(&(Local_162[0x00000008 /*10*/].f_3)))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 0x00000001) };
		if (unk_0x755FF954DAE327E1(vVar0.x) > 2.5f && !func_16(&(Local_162[0x00000000 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[0x0000000B /*10*/].f_3)))
			{
				func_219(&(Local_162[0x0000000B /*10*/].f_3));
				fLocal_164 = vVar0.x;
			}
			else if (func_107(&(Local_162[0x0000000B /*10*/].f_3)) < 1.5f && (unk_0x755FF954DAE327E1(fLocal_164) - unk_0x755FF954DAE327E1(vVar0.x)) < 0f)
			{
				func_106(&(Local_162[0x0000000B /*10*/].f_3));
				return 0x00000001;
			}
			else if (func_107(&(Local_162[0x0000000B /*10*/].f_3)) >= 1.5f)
			{
				func_106(&(Local_162[0x0000000B /*10*/].f_3));
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

int func_324(var uParam0)
{
	if (((((unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000) && !func_16(&(Local_162[0x00000000 /*10*/].f_3))) && !func_16(&(Local_162[0x00000008 /*10*/].f_3))) && !func_16(&(Local_162[0x00000005 /*10*/].f_3))) && !func_16(&(Local_162[0x00000009 /*10*/].f_3))) && !func_16(&(Local_162[0x00000007 /*10*/].f_3)))
	{
		if (!func_16(&(Local_162[0x0000000E /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(uParam0->f_4, 0x00000001), 10f, 0x00000000, 0x00000104);
			if (unk_0xC844350D5D58C99A(uParam0->f_5))
			{
				if ((unk_0x9C66D99E63E8E24C(uParam0->f_4) > 15f && func_171(uParam0->f_5, uParam0->f_4, 0x00000001) < 3f) && (!unk_0x437347B10A200C4B(uParam0->f_5, 0x00000000) && !unk_0xBBA8A868118C90ED(uParam0->f_5, 0xFFFFFFFF, 0x00000000)))
				{
					func_219(&(Local_162[0x0000000E /*10*/].f_3));
				}
			}
		}
		else if ((func_107(&(Local_162[0x0000000E /*10*/].f_3)) < 1.5f && func_171(uParam0->f_5, uParam0->f_4, 0x00000001) > 4.5f) && !unk_0xE147126C9AD09A60(uParam0->f_5))
		{
			func_106(&(Local_162[0x0000000E /*10*/].f_3));
			return 0x00000001;
		}
		else if (func_107(&(Local_162[0x0000000E /*10*/].f_3)) >= 1.5f)
		{
			func_106(&(Local_162[0x0000000E /*10*/].f_3));
			return 0x00000000;
		}
		else if (unk_0xE147126C9AD09A60(uParam0->f_5))
		{
			func_106(&(Local_162[0x0000000E /*10*/].f_3));
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_325(var uParam0)
{
	if (((unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000) && !func_16(&(Local_162[0x00000009 /*10*/].f_3))) && !func_16(&(Local_162[0x00000007 /*10*/].f_3))) && !func_16(&(Local_162[0x00000004 /*10*/].f_3)))
	{
		if (!func_326(uParam0->f_4) && unk_0x9C66D99E63E8E24C(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_162[0x0000000D /*10*/].f_3)))
			{
				func_219(&(Local_162[0x0000000D /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0x0000000D /*10*/].f_3)) > 5f)
			{
				func_106(&(Local_162[0x0000000D /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_106(&(Local_162[0x0000000D /*10*/].f_3));
		}
	}
	return 0x00000000;
}

bool func_326(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	
	unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), 0x00000001, &vVar0, 0x00000001, 0x40400000, 0x00000000);
	unk_0x4490D017C57827E9(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), 0x00000002, &vVar1, 0x00000001, 0x40400000, 0x00000000);
	unk_0x48C17E97DDC41CBC(vVar0, 0xFFFFFFFF, &vVar2);
	fVar9 = SYSTEM::VMAG(vVar2 - vVar0);
	vVar3 = { func_330((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_329(vVar3, 0x00000000) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_327(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vVar5, vVar6, vVar7);
}

int func_327(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	vParam0.z = 0f;
	vParam1.z = 0f;
	vParam2.z = 0f;
	vParam3.z = 0f;
	vVar0 = { func_330(vParam2 - vParam1) };
	vVar1 = { func_330(vParam3 - vParam1) };
	fVar2 = func_328(vParam0, vVar0);
	fVar3 = func_328(vParam1, vVar0);
	fVar4 = func_328(vParam2, vVar0);
	fVar5 = func_328(vParam0, vVar1);
	fVar6 = func_328(vParam1, vVar1);
	fVar7 = func_328(vParam3, vVar1);
	if (fVar3 > fVar4)
	{
		fVar8 = fVar3;
		fVar3 = fVar4;
		fVar4 = fVar8;
	}
	if (fVar2 < fVar3 || fVar2 > fVar4)
	{
		return 0x00000000;
	}
	if (fVar6 > fVar7)
	{
		fVar9 = fVar6;
		fVar6 = fVar7;
		fVar7 = fVar9;
	}
	if (fVar5 < fVar6 || fVar5 > fVar7)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

float func_328(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_329(vector3 vParam0, int iParam1)
{
	vector3 vVar0;
	
	switch (iParam1)
	{
		case 0x00000000:
			vVar0.x = -vParam0.y;
			vVar0.y = vParam0.x;
			break;
		
		case 0x00000001:
			vVar0.x = -vParam0.x;
			vVar0.y = -vParam0.y;
			break;
		
		case 0x00000002:
			vVar0.x = vParam0.y;
			vVar0.y = -vParam0.x;
			break;
	}
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_330(vector3 vParam0)
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

int func_331(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
		{
			if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_332(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
		{
			if (unk_0x377BE9A1BF38C7CE(uParam0->f_4))
			{
				if (!iLocal_163)
				{
					if (unk_0xCE563465D2227DD6(uParam0->f_4) <= -145f || unk_0xCE563465D2227DD6(uParam0->f_4) >= 145f)
					{
						iLocal_163 = 0x00000001;
					}
				}
			}
			else if (iLocal_163)
			{
				if (unk_0xCE563465D2227DD6(uParam0->f_4) <= 35f && unk_0xCE563465D2227DD6(uParam0->f_4) >= -35f)
				{
					iLocal_163 = 0x00000000;
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_333(var uParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		iVar0 = unk_0xB32FE193F79AD48C(unk_0xD803B885F5E47A62());
		if (iVar0 == 0x00000000)
		{
			if (!func_16(&(Local_162[0x00000004 /*10*/].f_3)))
			{
				func_219(&(Local_162[0x00000004 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0x00000004 /*10*/].f_3)) > 2f)
			{
				func_106(&(Local_162[0x00000004 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_106(&(Local_162[0x00000004 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_334(var uParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		iVar0 = unk_0x00AC2C41F7B083B2(unk_0xD803B885F5E47A62());
		if (iVar0 == 0x00000000)
		{
			if (!func_16(&(Local_162[0x00000006 /*10*/].f_3)))
			{
				func_219(&(Local_162[0x00000006 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0x00000006 /*10*/].f_3)) > 3.5f)
			{
				func_106(&(Local_162[0x00000006 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_106(&(Local_162[0x00000006 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_335(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xE608C809F9416F00(uParam0->f_4))
		{
			iVar0 = unk_0x7F6DC62EA9922664(uParam0->f_4);
			iVar1 = (uParam0->f_2E - iVar0);
			uParam0->f_2E = iVar0;
			unk_0xE910A68AA670B4AA(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_71)
				{
					func_241(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_241(uParam0, 0x00000048, 0x00000001, 0x00000000, 0x00000001);
				}
				func_106(&(Local_162[0x00000002 /*10*/].f_6));
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_336(var uParam0)
{
	vector3 vVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 0x00000001) };
		if (unk_0x755FF954DAE327E1(vVar0.x) > 3f && !func_16(&(Local_162[0x00000000 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[0x00000001 /*10*/].f_3)))
			{
				func_219(&(Local_162[0x00000001 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0x00000001 /*10*/].f_3)) > 1.2f)
			{
				func_106(&(Local_162[0x00000001 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_106(&(Local_162[0x00000001 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_337(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xF79A7BCA9E38BBBC(uParam0->f_4) && unk_0xE934758D273C899A(uParam0->f_4))
		{
			if (!func_16(&(Local_162[0x00000000 /*10*/].f_3)))
			{
				func_219(&(Local_162[0x00000000 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0x00000000 /*10*/].f_3)) > 0.7f)
			{
				func_106(&(Local_162[0x00000000 /*10*/].f_3));
				func_109(&(Local_162[0x00000001 /*10*/].f_6));
				return 0x00000001;
			}
		}
		else
		{
			func_106(&(Local_162[0x00000000 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

void func_338(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (func_16(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_109(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_310(uParam0, 0x0000000A, 0f, 0x00000001);
	unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
}

void func_339(int iParam0, var uParam1)
{
	Local_162[iParam0 /*10*/].f_1++;
	func_340(uParam1, iParam0);
	func_106(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_70 = 0x00000001;
}

void func_340(var uParam0, int iParam1)
{
	uParam0->f_4C = (uParam0->f_4C + Local_162[iParam1 /*10*/]);
}

void func_341(var uParam0, int iParam1)
{
	uParam0->f_68 = (uParam0->f_68 + iParam1);
}

int func_342(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0x9C66D99E63E8E24C(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_162[0x00000005 /*10*/].f_3)))
			{
				func_219(&(Local_162[0x00000005 /*10*/].f_3));
			}
			else if (func_107(&(Local_162[0x00000005 /*10*/].f_3)) > 3.5f)
			{
				func_106(&(Local_162[0x00000005 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_106(&(Local_162[0x00000005 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

void func_343(var uParam0, char* sParam1, int iParam2)
{
	vector3 vVar0;
	
	func_191();
	func_440(0x00000002);
	vVar0 = { func_347() };
	if ((!unk_0xEA6BC48857E0AC4C(&vVar0) && func_193()) && !unk_0x7F8A39872A07D2CE(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0x790015DC92C918E2();
		unk_0xA37A90C62806D848(0x00000001);
		StringCopy(&vVar0, uParam0->f_8F, 24);
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
		{
			if (!func_166(uParam0))
			{
				if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 0x00000003))
				{
					unk_0xFB131B855F2FD560(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 0xC1000000);
				}
				else if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 0x00000003))
				{
					unk_0xFB131B855F2FD560(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 0xC1000000);
				}
				else if (unk_0xB4ECF989E2C1DAC8(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 0x00000003))
				{
					unk_0xFB131B855F2FD560(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 0xC1000000);
				}
			}
		}
		uParam0->f_6D = 0x00000001;
		uParam0->f_79 = sParam1;
		uParam0->f_19F = iParam2;
		func_310(uParam0, 0x00000003, 0x00000000, 0x00000000);
		if (iParam2 == 0x00000008 || iParam2 == 0x00000012)
		{
			if (uParam0->f_19B != 0x00000009)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				func_345(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_270(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 0x00000004);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 0x0000000A)
		{
			if (uParam0->f_73)
			{
				StringConCat(&vVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_aggro", 24);
			}
			func_345(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_19F == 0x0000000F)
		{
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 0x00000002)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_345(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 0x00000003)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_345(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x00000004)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_345(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x00000005)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_345(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
			if (func_166(uParam0))
			{
				if (unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
				{
					func_154(uParam0, 0x00001000, 0x00000000);
				}
				else
				{
					func_154(uParam0, 0x00000000, 0x00000000);
				}
			}
		}
		else if (iParam2 == 0x00000006)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_345(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 0x00000007)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_345(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x0000000E)
		{
			if (uParam0->f_19B != 0x00000009)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_shot1", 24);
				}
				func_345(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_270(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_91, 0x00000004);
			}
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 0x0000000C)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_345(uParam0, &vVar0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x0000000D)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_345(uParam0, &vVar0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 0x0000000B)
		{
			func_53(0x00000008, 0x00000000);
			iLocal_57[0x00000003] = 0x00000001;
			if (uParam0->f_19B != 0x00000009)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_345(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_270(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_91, 0x00000004);
			}
			func_154(uParam0, 0x00000000, 0x00000000);
			func_345(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0x00000000)
		{
			func_53(0x00000008, 0x00000000);
			iLocal_57[0x00000003] = 0x00000001;
			if (uParam0->f_19B != 0x00000009)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_345(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_270(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 0x00000004);
			}
			func_345(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 0x00000001)
		{
			func_53(0x00000008, 0x00000000);
			iLocal_57[0x00000003] = 0x00000001;
			if (uParam0->f_19B != 0x00000009)
			{
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_345(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_270(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 0x00000004);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 0x00000013)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_344(&vVar0);
			func_195(&(uParam0->f_F4), "OJTXAUD", &vVar0, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 0x00000014)
		{
			if (uParam0->f_73)
			{
				StringConCat(&vVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_fail1", 24);
			}
			func_345(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_19B != 0x00000009)
			{
				if (iParam2 != 0x00000015)
				{
					StringConCat(&vVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				if (uParam0->f_19A > 0x00000005)
				{
					func_345(uParam0, &vVar0);
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_270(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 0x00000004);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
			func_53(0x00000003, 0x00000000);
		}
		func_310(uParam0, 0x00000003, 0f, 0x00000001);
	}
}

void func_344(char* sParam0)
{
	switch (func_3(unk_0x16F2683693E537C9()))
	{
		case 0x00000000:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 0x00000002:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 0x00000001:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_345(var uParam0, char* sParam1)
{
	if (func_346(uParam0))
	{
		func_195(&(uParam0->f_F4), uParam0->f_90, sParam1, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
	}
}

int func_346(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (func_171(unk_0x16F2683693E537C9(), uParam0->f_3, 0x00000001) < 40f && !unk_0x03068588A1FCED1A(uParam0->f_3))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

struct<6> func_347()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		iVar1 = unk_0x40EFDB96B3112BA7();
		iVar1 = (iVar1 + Global_5537);
		if (iVar1 > 0xFFFFFFFF)
		{
			return Global_4CD9[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_348(var uParam0)
{
	return uParam0->f_76;
}

void func_349()
{
	if (func_381(&Local_231, &Local_284))
	{
		switch (Local_284.f_1B)
		{
			case 0x00000000:
				if (Local_231.f_19A == 0x00000009)
				{
					if (!func_380(&Local_231) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 0x00000001)
					{
						if (func_379("TX_OBJ_TIE_DO") || unk_0xE4EDC4B0E92C078B(Local_231.f_9))
						{
							Local_284.f_1B++;
						}
						else if (func_378(&Local_231) != 0x0000000A)
						{
							func_241(&Local_231, 0x0000000A, 0x00000001, 0x00000000, 0x00000001);
						}
					}
				}
				break;
			
			case 0x00000001:
				if (!bLocal_277)
				{
					if (func_378(&Local_231) > 0x0000000A && func_378(&Local_231) != 0x0000000F)
					{
						func_241(&Local_231, 0x0000000F, 0x00000001, 0x00000000, 0x00000000);
						func_310(&Local_231, 0x0000000A, 0x00000000, 0x00000000);
						if (bLocal_283)
						{
						}
					}
				}
				else
				{
					Local_284.f_1B++;
				}
				break;
			
			case 0x00000002:
				if ((bLocal_277 && iLocal_258 == 0x00000000) && !func_193())
				{
					if (func_378(&Local_231) > 0x0000000A && func_378(&Local_231) != 0x00000010)
					{
						func_241(&Local_231, 0x00000010, 0x00000001, 0x00000000, 0x00000000);
						func_310(&Local_231, 0x0000000A, 0x00000000, 0x00000000);
						if (bLocal_283)
						{
						}
					}
				}
				break;
			
			case 0x00000003:
				break;
			}
	}
	func_350(&Local_231, &uLocal_287, &Local_284, 0x00000004, bLocal_283);
}

int func_350(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	char cVar0[48];
	struct<6> Var1;
	
	func_361(uParam0, uParam1);
	if ((*uParam2 == 0xFFFFFFFF && uParam0->f_19A < 0x0000001D) && !uParam0->f_6D)
	{
		if (func_360(uParam1))
		{
			*uParam2 = 0x00000001;
			if (bParam4)
			{
			}
		}
	}
	if (!uParam0->f_6D)
	{
		switch (*uParam2)
		{
			case 0x00000001:
				if (!func_359(uParam0))
				{
					uParam2->f_7 = { func_358(uParam1) };
					func_195(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_7), 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					*uParam2 = 0x00000002;
					if (bParam4)
					{
					}
				}
				break;
			
			case 0x00000002:
				if (func_193())
				{
					uParam2->f_D = { func_243() };
					if (unk_0x7F8A39872A07D2CE(&(uParam2->f_D), &(uParam2->f_7)))
					{
						*uParam2 = 0x00000003;
						if (bParam4)
						{
						}
					}
					else
					{
						*uParam2 = 0x00000001;
					}
				}
				break;
			
			case 0x00000003:
				if (func_222(uParam0))
				{
					if (func_193())
					{
						if (unk_0x7DECE00E09F41C95(unk_0x16F2683693E537C9()))
						{
							uParam2->f_1D = 0x00000001;
						}
						else
						{
							uParam2->f_1D = 0x00000000;
						}
						func_310(uParam0, 0x00000011, 0f, 0x00000001);
						if (uParam0->f_19B == 0x00000001)
						{
							uParam2->f_1 = { func_347() };
							func_51();
						}
						else
						{
							uParam2->f_1 = { func_357() };
							func_191();
						}
						if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 0x00000001)
						{
							*uParam2 = 0x00000000;
						}
						else if (uParam0->f_19B == 0x00000001)
						{
							*uParam2 = 0x00000004;
						}
						else
						{
							*uParam2 = 0x00000006;
						}
					}
				}
				else if (func_193())
				{
					uParam2->f_13 = { func_357() };
				}
				else
				{
					func_66(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_355(uParam1);
					func_310(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0xFFFFFFFF;
					if (bParam4)
					{
					}
					return 0x00000001;
				}
				break;
			
			case 0x00000004:
				if (((!func_179(uParam0, 0x0000000E) && !func_193()) && !func_222(uParam0)) && func_420(uParam0, 0x00000012) > 1f)
				{
					func_310(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0x00000005;
					if (bParam4)
					{
					}
				}
				break;
			
			case 0x00000005:
				if ((func_420(uParam0, 0x00000012) > 1.5f && !func_193()) && !func_222(uParam0))
				{
					StringCopy(&cVar0, uParam0->f_8F, 24);
					if (func_354(uParam2, &cVar0))
					{
						func_195(&(uParam0->f_F4), uParam0->f_90, &cVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
						func_310(uParam0, 0x00000012, 0x00000000, 0x00000000);
						*uParam2 = 0x00000007;
					}
					else
					{
						if (uParam2->f_1D)
						{
							StringConCat(&cVar0, "_resB", 24);
						}
						else
						{
							StringConCat(&cVar0, "_resA", 24);
						}
						Var1 = { cVar0 };
						func_353(&(uParam2->f_19), iParam3, &cVar0, 0x00000001, 0x00000001, 0x00000000);
						func_352(&(uParam0->f_F4), uParam0->f_90, &Var1, &cVar0, 0x00000008, 0x00000000, 0x00000000);
						func_310(uParam0, 0x00000012, 0x00000000, 0x00000000);
						*uParam2 = 0x00000006;
					}
				}
				break;
			
			case 0x00000006:
				if (!func_193() && func_420(uParam0, 0x00000011) > 1f)
				{
					if (func_420(uParam0, 0x00000012) > 0.5f || uParam0->f_19B == 0x00000000)
					{
						if (unk_0x7F8A39872A07D2CE(&(uParam2->f_13), &(uParam2->f_1)) && uParam0->f_19B != 0x00000000)
						{
							StringCopy(&(uParam2->f_1), uParam0->f_8F, 24);
							StringConCat(&(uParam2->f_1), "_end1", 24);
							func_190(&(uParam2->f_1));
							func_195(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_1), 0x00000008, 0x00000000, 0x00000000, 0x00000000);
							func_185(uParam0, 0x00000011, 0x00000001);
							*uParam2 = 0x00000007;
						}
						else if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1)))
						{
							func_351(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_D), &(uParam2->f_1), 0x00000008, 0x00000000, 0x00000000);
							if (bParam4)
							{
							}
						}
						*uParam2 = 0x00000003;
					}
				}
				break;
			
			case 0x00000007:
				if (!func_193())
				{
					func_66(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_355(uParam1);
					func_310(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0xFFFFFFFF;
				}
				break;
			}
	}
	return 0x00000000;
}

int func_351(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_207(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
	if (iParam4 > 0x00000007)
	{
		if (iParam4 < 0x0000000C)
		{
			iParam4 = 0x00000007;
		}
	}
	Global_514C = 0x00000000;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000000;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000001;
	StringCopy(&Global_5531, sParam3, 24);
	Global_280001 = 0x00000000;
	return func_196(sParam2, iParam4, 0x00000000);
}

int func_352(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_207(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
	if (iParam4 > 0x00000007)
	{
		if (iParam4 < 0x0000000C)
		{
			iParam4 = 0x00000007;
		}
	}
	Global_514C = 0x00000000;
	Global_5153 = 0x00000000;
	Global_514E = 0x00000000;
	Global_5524 = 0x00000001;
	Global_5526 = 0x00000000;
	Global_552A = 0x00000000;
	StringCopy(&Global_5531, sParam3, 24);
	Global_280001 = 0x00000000;
	return func_196(sParam2, iParam4, 0x00000000);
}

void func_353(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0x00000000;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_289(*uParam0, iVar1))
		{
			func_66(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_190(sParam2);
				}
				else
				{
					func_190(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 0x00000001))
				{
					*uParam0 = 0x00000000;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_354(var uParam0, char* sParam1)
{
	if (unk_0x7F8A39872A07D2CE(&(uParam0->f_D), "txm3_bant1") || unk_0x7F8A39872A07D2CE(&(uParam0->f_D), "txm9_bant2"))
	{
		StringConCat(sParam1, "_resBn1", 24);
		return 0x00000001;
	}
	if ((unk_0x7F8A39872A07D2CE(&(uParam0->f_D), "txm6_bant3M") || unk_0x7F8A39872A07D2CE(&(uParam0->f_D), "txm6_bant3T")) || unk_0x7F8A39872A07D2CE(&(uParam0->f_D), "txm6_bant3F"))
	{
		func_65(&(uParam0->f_1C), 0x00000001);
		StringConCat(sParam1, "_resBn1", 24);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_355(var uParam0)
{
	int iVar0;
	
	iVar0 = func_356(uParam0);
	if (iVar0 > 0xFFFFFFFF)
	{
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 0x00000002);
		func_22(&((uParam0[iVar0 /*8*/])->f_7), 0x00000004);
		func_65(&((uParam0[iVar0 /*8*/])->f_7), 0x00000008);
		StringCopy(uParam0[iVar0 /*8*/], func_212(), 24);
	}
}

int func_356(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 0x00000004))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

struct<6> func_357()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		iVar1 = unk_0x40EFDB96B3112BA7();
		iVar1 = (iVar1 + Global_5537);
		iVar2 = iVar1 + 1;
		if (iVar2 > 0xFFFFFFFF && iVar1 > 0xFFFFFFFF)
		{
			if (unk_0xEF07223F00EBE9C9(&(Global_4CD9[iVar2 /*6*/])))
			{
				return Global_4CD9[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 0x00000046)
				{
					if (unk_0xEF07223F00EBE9C9(&(Global_4CD9[iVar3 /*6*/])))
					{
						return Global_4CD9[iVar3 /*6*/];
						iVar3 = 0x00000046;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_4CD9[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_358(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 0x00000002))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_65(&((uParam0[iVar0 /*8*/])->f_7), 0x00000004);
		}
		iVar0++;
	}
	return Var1;
}

int func_359(var uParam0)
{
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			if (func_224("TX_OBJ_NEX_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_224("TX_OBJ_TIE_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (func_224("TX_OBJ_DL_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			if ((func_224("TX_OBJ_GYB_DO", 0x00000000, 0x00000000) || func_224("TAXI_OBJ_GYB", 0x00000000, 0x00000000)) || func_224("TAXI_OBJ_GYB_2", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_224("TX_OBJ_TTB_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
			if ((func_224("TX_OBJ_CYI_DO", 0x00000000, 0x00000000) || func_224("TAXI_OBJ_CYI_01", 0x00000000, 0x00000000)) || func_224("TAXI_OBJ_CYI_02", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000006:
			if (((func_224("TX_OBJ_GYN_DO", 0x00000000, 0x00000000) || func_224("TAXI_OBJ_GYN", 0x00000000, 0x00000000)) || func_224("TAXI_OBJ_GYN_TG", 0x00000000, 0x00000000)) || func_224("TAXI_OBJ_GYN_GF", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000007:
			if ((func_224("TAXI_OBJ_CC1", 0x00000000, 0x00000000) || func_224("TAXI_OBJ_CC2", 0x00000000, 0x00000000)) || func_224("TAXI_OBJ_CC3", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000008:
			if ((func_224("TAXI_OBJ_FTC1", 0x00000000, 0x00000000) || func_224("TAXI_OBJ_FTC2", 0x00000000, 0x00000000)) || func_224("TAXI_OBJ_FTC3", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			if (func_224("TX_OBJ_PRO_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
	}
	return (((((func_224("TAXI_OBJ_GETRUN", 0x00000000, 0x00000000) || func_224("TAXI_OBJ_DRIVE", 0x00000000, 0x00000000)) || func_224("TAXI_OBJ_RETURN", 0x00000000, 0x00000000)) || func_224("TAXI_OBJ_POL", 0x00000000, 0x00000000)) || func_224("TAXI_OBJ_RUNOUT", 0x00000000, 0x00000000)) || func_224("TAXI_OBJ_POL", 0x00000000, 0x00000000));
}

int func_360(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_24((uParam0[iVar0 /*8*/])->f_7, 0x00000002))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_361(var uParam0, var uParam1)
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_359(uParam0))
	{
	}
	else if (!uParam0->f_6E)
	{
	}
	else if (func_179(uParam0, 0x0000000E))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_378(uParam0))
		{
			case 0x00000037:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_353(&(uParam0->f_5D), 0x00000003, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_377(0x00000004, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000002:
				if (!func_193())
				{
					if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_retrn1", 24);
					}
					if (uParam0->f_19B != 0x00000009)
					{
						func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					}
				}
				else
				{
					func_373(uParam0, vVar0, func_375(uParam0, 0x00000002));
				}
				if (func_24(uParam0->f_62, 0x00000004))
				{
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_275(uParam0, 0x00000000, 0x00000000);
				}
				func_176(uParam0, &(uParam0->f_62), 0x00000004, 0x00000003);
				break;
			
			case 0x00000003:
				if (func_420(uParam0, 0x00000010) > 1f)
				{
					func_178(0x00000001);
					if (uParam0->f_19B == 0x00000009)
					{
						func_274("TAXI_OBJ_RETURN", 0x00001D4C, 0x00000001);
					}
					else
					{
						func_274("TAXI_VIP_RETURN", 0x00001D4C, 0x00000001);
					}
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_275(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000041:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aggro", 24);
				}
				uParam0->f_6B++;
				if (uParam0->f_19B != 0x00000009)
				{
					func_376(uParam0, &vVar0, 0x00000000, 0x00000001, 0x00000008);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_270(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_91, 0x00000004);
				}
				break;
		}
	}
	else if ((func_420(uParam0, 0x00000010) > func_119(uParam0->f_19B == 0x00000000, 1f, 4f) && !uParam0->f_8E) && (((uParam0->f_19B == 0x00000000 || uParam0->f_19B == 0x00000001) && !func_193()) || (uParam0->f_19B != 0x00000000 && uParam0->f_19B != 0x00000001)))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_378(uParam0))
		{
			case 0x0000008E:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_376(uParam0, &vVar0, 0x00000001, 0x00000000, 0x00000008);
				break;
			
			case 0x00000038:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_353(&(uParam0->f_5D), 0x00000003, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_377(0x00000004, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000000:
				if (uParam0->f_19B == 0x00000009)
				{
					func_195(&(uParam0->f_F4), "OJTXAUD", "OJTX_PRO_CON", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				func_241(uParam0, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000001:
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_241(uParam0, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				break;
			
			case 0x00000004:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_24(uParam0->f_2C, 0x00000080))
				{
					if ((uParam0->f_19B == 0x00000000 || uParam0->f_19B == 0x00000001) || uParam0->f_19B == 0x00000004)
					{
						func_353(&(uParam0->f_63), 0x00000004, &cVar1, 0x00000000, 0x00000001, 0x00000000);
						func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
					}
					else
					{
						func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					}
				}
				func_310(uParam0, 0x00000010, 4f, 0x00000000);
				uParam0->f_8D = 0x00000001;
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000005:
				if (uParam0->f_19B == 0x00000007)
				{
					func_274("TAXI_OBJ_GPCKUP", 0x00001D4C, 0x00000001);
				}
				else
				{
					func_274("TAXI_OBJ_PICKUP", 0x00001D4C, 0x00000001);
				}
				uParam0->f_8D = 0x00000001;
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000008:
				StringConCat(&vVar0, "_obj1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				if (uParam0->f_19B != 0x00000007 && uParam0->f_19B != 0x00000004)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						uParam0->f_9 = func_372(uParam0->f_11, 0x00000001);
					}
					else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0x00000000)
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x000000FF);
						unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_11);
						unk_0x661342B9651D16E2(uParam0->f_9, 0x00000001);
					}
				}
				func_241(uParam0, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_1A1 = 0x0000000A;
				break;
			
			case 0x00000009:
				if ((uParam0->f_65 == 0x00000001 || uParam0->f_19B == 0x00000002) || uParam0->f_19B == 0x00000000)
				{
					StringConCat(&vVar0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_66)
					{
						case 0x00000001:
							StringConCat(&vVar0, "_gret1", 24);
							break;
						
						case 0x00000000:
							StringConCat(&vVar0, "_gret2", 24);
							break;
						
						case 0x00000002:
							StringConCat(&vVar0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_gret4", 24);
							break;
						}
				}
				func_190(&vVar0);
				if (uParam0->f_19B != 0x00000009)
				{
					func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				else
				{
					func_270(uParam0->f_3, "TAXI_START", uParam0->f_91, 0x00000004);
				}
				if (uParam0->f_19B != 0x00000007 && uParam0->f_19B != 0x00000004)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						uParam0->f_9 = func_372(uParam0->f_11, 0x00000001);
					}
					else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0x00000000)
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x000000FF);
						unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_11);
						unk_0x661342B9651D16E2(uParam0->f_9, 0x00000001);
					}
				}
				func_241(uParam0, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_1A1 = 0x0000000A;
				break;
			
			case 0x00000007:
				StringConCat(&vVar0, "_dest2", 24);
				func_371(uParam0, 0x02000000, vVar0, "", 0x00000001, 0x00000008);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_241(uParam0, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_1A1 = 0x0000000A;
				break;
			
			case 0x0000000A:
				if (!func_193())
				{
					func_370(uParam0, 0x00000000);
					func_65(&(uParam0->f_2C), 0x00000004);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_241(uParam0, 0x0000000D, 0x00000000, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x0000000E:
				switch (uParam0->f_66)
				{
					case 0x00000000:
						StringConCat(&vVar0, "_bant2", 24);
						break;
					
					case 0x00000001:
						StringConCat(&vVar0, "_bant1", 24);
						break;
					
					case 0x00000002:
						StringConCat(&vVar0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_bant1", 24);
						break;
				}
				func_190(&vVar0);
				func_368(vVar0, uParam1);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_310(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000000F:
				if (func_420(uParam0, 0x0000000B) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0x00000000)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_190(&vVar0);
					}
					func_368(vVar0, uParam1);
					func_65(&(uParam0->f_51), 0x04000000);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_310(uParam0, 0x0000000B, 0x00000000, 0x00000000);
					func_275(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000010:
				if (func_420(uParam0, 0x0000000B) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0x00000000)
					{
						StringConCat(&vVar0, "_ban2", 24);
					}
					else if (uParam0->f_19B == 0x00000001)
					{
						StringConCat(&vVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant2", 24);
						if (uParam0->f_19B != 0x00000006)
						{
							func_190(&vVar0);
						}
					}
					func_368(vVar0, uParam1);
					func_310(uParam0, 0x0000000B, 0x00000000, 0x00000000);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_275(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000011:
				if (uParam0->f_19B == 0x00000000)
				{
					StringConCat(&vVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant3", 24);
					func_190(&vVar0);
				}
				func_368(vVar0, uParam1);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000012:
				if (uParam0->f_19B == 0x00000000)
				{
					StringConCat(&vVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant4", 24);
				}
				func_190(&vVar0);
				func_368(vVar0, uParam1);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000013:
				if (uParam0->f_19B == 0x00000000)
				{
					StringConCat(&vVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant5", 24);
				}
				func_190(&vVar0);
				func_368(vVar0, uParam1);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000014:
				StringConCat(&vVar0, "_dest2b", 24);
				func_190(&vVar0);
				func_368(vVar0, uParam1);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_310(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				func_65(&(uParam0->f_52), 0x00040000);
				uParam0->f_24 = 20f;
				break;
			
			case 0x00000017:
				StringConCat(&vVar0, "_seePt1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_241(uParam0, 0x00000018, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000018:
				uParam0->f_1A1 = 0x00000018;
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005A:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 0x00000001, 24);
				func_190(&vVar0);
				func_376(uParam0, &vVar0, 0x00000001, 0x00000000, 0x00000008);
				break;
			
			case 0x00000059:
				switch (uParam0->f_66)
				{
					case 0x00000000:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					case 0x00000001:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_deal1", 24);
						break;
				}
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000005B:
				StringConCat(&vVar0, "_ig1c", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000001B:
				StringConCat(&vVar0, "_bTime", 24);
				if (uParam0->f_19B == 0x00000002)
				{
					iVar3 = 0x00000008;
				}
				else
				{
					iVar3 = 0x00000003;
				}
				iVar2 = 0x00000000;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_19B)
					{
						case 0x00000002:
							switch (iVar2)
							{
								case 0x00000003:
								case 0x00000005:
								case 0x00000006:
								case 0x00000007:
									iVar5[iVar2] = 0x00000000;
									break;
								
								default:
									iVar5[iVar2] = 0x00000001;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 0x00000001;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_19B == 0x00000002)
				{
					func_367(&(uParam0->f_5A), 0x00000008, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				else
				{
					func_367(&(uParam0->f_5A), 0x00000003, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				func_368(vVar0, uParam1);
				func_377(0x00000000, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_310(uParam0, 0x00000006, 0f, 0x00000001);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001A:
				StringConCat(&vVar0, "_gTime", 24);
				iVar2 = 0x00000000;
				while (iVar2 < 0x00000008)
				{
					switch (uParam0->f_19B)
					{
						case 0x00000002:
							switch (iVar2)
							{
								case 0x00000003:
								case 0x00000004:
								case 0x00000005:
								case 0x00000007:
									iVar5[iVar2] = 0x00000000;
									break;
								
								default:
									iVar5[iVar2] = 0x00000001;
									break;
							}
							break;
						
						default:
							iVar5[iVar2] = 0x00000001;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_19B == 0x00000002)
				{
					func_367(&(uParam0->f_59), 0x00000008, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				else
				{
					func_367(&(uParam0->f_59), 0x00000003, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				func_368(vVar0, uParam1);
				func_377(0x00000000, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000001);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_310(uParam0, 0x00000006, 0f, 0x00000001);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000000C:
				func_274("TAXI_OBJ_GYB", 0x00000DAC, 0x00000001);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000000B:
				if (uParam0->f_19A == 0x0000000C || uParam0->f_19A == 0x00000012)
				{
					func_274("TAXI_OBJ_GYN_TG", 0x00001D4C, 0x00000001);
				}
				else if (uParam0->f_19A < 0x00000015)
				{
					func_274("TAXI_OBJ_GYN", 0x00001D4C, 0x00000001);
				}
				else
				{
					func_274("TAXI_OBJ_GYN_GF", 0x00001D4C, 0x00000001);
				}
				uParam0->f_1A1 = 0x0000000B;
				uParam0->f_8D = 0x00000001;
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001C:
				switch (uParam0->f_66)
				{
					case 0x00000000:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
					
					case 0x00000001:
						StringConCat(&vVar0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
				}
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_241(uParam0, 0x0000001D, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001D:
				if (!func_24(uParam0->f_62, 0x10000000))
				{
					func_274("TAXI_OBJ_CYI_01", 0x00001D4C, 0x00000001);
					func_65(&(uParam0->f_62), 0x10000000);
				}
				uParam0->f_1A1 = 0x0000001D;
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001E:
				StringConCat(&vVar0, "_rCar1", 24);
				func_190(&vVar0);
				func_368(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001F:
				StringConCat(&vVar0, "_rCar2", 24);
				func_190(&vVar0);
				func_368(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000020:
				StringConCat(&vVar0, "_rCar3", 24);
				func_190(&vVar0);
				func_368(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000021:
				func_274("TAXI_OBJ_CYI_02", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x00000021;
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000022:
				if (!func_24(uParam0->f_52, 0x00002000))
				{
					if (func_420(uParam0, 0x0000000B) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_190(&vVar0);
						if (uParam0->f_19B == 0x00000005)
						{
							func_368(vVar0, uParam1);
						}
						else
						{
							func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
						}
						func_65(&(uParam0->f_52), 0x00002000);
						func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
						func_310(uParam0, 0x0000000B, 0x00000000, 0x00000000);
						func_275(uParam0, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x00000023:
				if (!func_24(uParam0->f_52, 0x00004000))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_190(&vVar0);
					func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					func_65(&(uParam0->f_52), 0x00004000);
				}
				break;
			
			case 0x00000024:
				if (!func_24(uParam0->f_52, 0x00008000))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_190(&vVar0);
					func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					func_65(&(uParam0->f_52), 0x00008000);
				}
				break;
			
			case 0x00000025:
				StringConCat(&vVar0, "_done1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_241(uParam0, 0x0000002E, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000008A:
				if (uParam0->f_65 == 0x00000001)
				{
					StringConCat(&vVar0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_66)
					{
						case 0x00000001:
							StringConCat(&vVar0, "_ftc1", 24);
							break;
						
						case 0x00000000:
							StringConCat(&vVar0, "_ftc2", 24);
							break;
						
						case 0x00000002:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						}
				}
				func_190(&vVar0);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_241(uParam0, 0x0000008B, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_1A1 = 0x0000008B;
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000008B:
				func_274("TAXI_OBJ_FTC2", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000000D;
				func_241(uParam0, 0x0000000D, 0x00000000, 0x00000000, 0x00000000);
				break;
			
			case 0x00000026:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000078);
				if (!func_24(uParam0->f_52, 0x10000000))
				{
					if (iVar4 > 0x00000050)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 0x00000028)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					func_65(&(uParam0->f_52), 0x10000000);
				}
				else if (iVar4 > 0x00000050)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 0x00000028)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000027:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000064);
				if (!func_24(uParam0->f_52, 0x10000000))
				{
					if (iVar4 < 0x00000032)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_65(&(uParam0->f_52), 0x10000000);
				}
				else if (iVar4 < 0x00000032)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000029:
				StringConCat(&vVar0, "_dr2P", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002A:
				StringConCat(&vVar0, "_dr2N", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000028:
				StringConCat(&vVar0, "_dOff2", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_241(uParam0, 0x0000002C, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002C:
				func_274("TAXI_OBJ_CC2", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000002C;
				func_275(uParam0, 0x00000000, 0x00000000);
				func_241(uParam0, 0x00000061, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002B:
				StringConCat(&vVar0, "_dOff3", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_241(uParam0, 0x0000002D, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002D:
				if (!func_193())
				{
					func_274("TAXI_OBJ_CC3", 0x00001D4C, 0x00000001);
					uParam0->f_1A1 = 0x0000002D;
					func_275(uParam0, 0x00000000, 0x00000000);
					func_241(uParam0, 0x00000062, 0x00000001, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x0000002E:
				func_274("TAXI_OBJ_FTC3", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000002E;
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000015:
				if (!func_24(uParam0->f_51, 0x00000001))
				{
					func_366(uParam0, 0x00000001, vVar0, "_sick1", 0x00000008);
					func_22(&(uParam0->f_51), 0x00000002);
				}
				else if (!func_24(uParam0->f_51, 0x00000002))
				{
					func_366(uParam0, 0x00000002, vVar0, "_sick2", 0x00000008);
					func_22(&(uParam0->f_51), 0x00000001);
				}
				func_377(0x0000000C, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000016:
				if (!func_24(uParam0->f_52, 0x00200000))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_24(uParam0->f_52, 0x00400000))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_65(&(uParam0->f_51), 0x00200000);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_377(0x00000011, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000001);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003D:
				StringConCat(&vVar0, "_Puke1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_377(0x00000012, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				break;
			
			case 0x0000003F:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_377(0x00000014, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003E:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_377(0x00000013, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				break;
			
			case 0x00000040:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_190(&vVar0);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000047:
				if (!func_24(uParam0->f_51, 0x00000004))
				{
					func_366(uParam0, 0x00000004, vVar0, "_turns1", 0x00000008);
				}
				else if (!func_24(uParam0->f_51, 0x00000008))
				{
					func_366(uParam0, 0x00000008, vVar0, "_turns2", 0x00000008);
				}
				else
				{
					func_366(uParam0, 0x00000008, vVar0, "_turns3", 0x00000008);
					func_22(&(uParam0->f_51), 0x00000004);
					func_22(&(uParam0->f_51), 0x00000008);
				}
				func_377(0x0000000D, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000048:
				if (func_365(uParam0))
				{
					func_373(uParam0, vVar0, func_375(uParam0, 0x00000048));
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_270(uParam0->f_3, "CRASH_GENERIC", uParam0->f_91, 0x00000004);
					}
				}
				else if (uParam0->f_19B == 0x00000001)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_353(&(uParam0->f_5F), 0x00000005, &cVar1, 0x00000001, 0x00000000, 0x00000001);
					func_195(&(uParam0->f_F4), uParam0->f_90, &cVar1, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_19B == 0x00000000)
					{
						func_353(&(uParam0->f_5F), 0x00000008, &cVar1, 0x00000001, 0x00000001, 0x00000000);
					}
					else
					{
						func_353(&(uParam0->f_5F), 0x00000005, &cVar1, 0x00000001, 0x00000001, 0x00000000);
					}
					func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				}
				func_377(0x00000002, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000049:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000004B:
				if (!func_24(uParam0->f_53, 0x00000080))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_65(&(uParam0->f_53), 0x00000080);
					func_22(&(uParam0->f_53), 0x00000100);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_24(uParam0->f_53, 0x00000100))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_65(&(uParam0->f_53), 0x00000100);
					func_22(&(uParam0->f_53), 0x00000200);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_24(uParam0->f_53, 0x00000200))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_65(&(uParam0->f_53), 0x00000200);
					func_22(&(uParam0->f_53), 0x00000080);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000004C:
				if (uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000)
				{
					bVar6 = 0x00000001;
				}
				if (!func_24(uParam0->f_53, 0x00000001))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_190(&vVar0);
					}
					func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_65(&(uParam0->f_53), 0x00000001);
					func_22(&(uParam0->f_53), 0x00000002);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_24(uParam0->f_53, 0x00000002))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_190(&vVar0);
					}
					func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_65(&(uParam0->f_53), 0x00000002);
					if (uParam0->f_19B == 0x00000000)
					{
						func_22(&(uParam0->f_53), 0x00000004);
					}
					else
					{
						func_22(&(uParam0->f_53), 0x00000001);
					}
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_24(uParam0->f_53, 0x00000004))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_190(&vVar0);
					}
					func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_65(&(uParam0->f_53), 0x00000004);
					func_22(&(uParam0->f_53), 0x00000001);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				func_377(0x0000000B, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000004F:
				if (uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000)
				{
					bVar6 = 0x00000001;
				}
				if (!func_24(uParam0->f_51, 0x00001000))
				{
					func_371(uParam0, 0x00001000, vVar0, "_sideW1", bVar6, 0x00000008);
				}
				else if (!func_24(uParam0->f_51, 0x00002000))
				{
					func_371(uParam0, 0x00002000, vVar0, "_sideW2", bVar6, 0x00000008);
				}
				func_377(0x0000000F, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000050:
				if (uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000)
				{
					bVar6 = 0x00000001;
				}
				if (!func_24(uParam0->f_51, 0x00004000))
				{
					func_371(uParam0, 0x00004000, vVar0, "_opLne1", bVar6, 0x00000008);
				}
				else if (!func_24(uParam0->f_51, 0x00008000))
				{
					func_371(uParam0, 0x00008000, vVar0, "_opLne2", bVar6, 0x00000008);
				}
				func_377(0x0000000E, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000053:
				if (uParam0->f_19B == 0x00000000)
				{
					if (!func_24(uParam0->f_52, 0x00000008))
					{
						func_364(uParam0, 0x00000008, vVar0, "_bored1", 0x00000008, 0x00000000);
					}
					else if (!func_24(uParam0->f_52, 0x00000010))
					{
						func_364(uParam0, 0x00000010, vVar0, "_bored2", 0x00000008, 0x00000000);
					}
					else if (!func_24(uParam0->f_52, 0x00000020))
					{
						func_364(uParam0, 0x00000020, vVar0, "_bored3", 0x00000008, 0x00000000);
					}
					func_377(0x00000009, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
					func_275(uParam0, 0x00000000, 0x00000000);
				}
				if (uParam0->f_19B == 0x00000001)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_353(&(uParam0->f_5D), 0x00000006, &cVar1, 0x00000000, 0x00000001, 0x00000000);
					func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
					func_377(0x00000009, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_275(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x0000005C:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_353(&(uParam0->f_60), 0x00000002, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_377(0x00000009, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005D:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_353(&(uParam0->f_61), 0x00000002, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_377(0x0000000C, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000051:
				if (!func_24(uParam0->f_51, 0x00010000))
				{
					func_371(uParam0, 0x00010000, vVar0, "_runLit1", 0x00000001, 0x00000008);
				}
				else if (!func_24(uParam0->f_51, 0x00020000))
				{
					func_371(uParam0, 0x00020000, vVar0, "_runLit2", 0x00000001, 0x00000008);
				}
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000052:
				if (func_365(uParam0))
				{
					func_373(uParam0, vVar0, func_375(uParam0, 0x00000052));
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_270(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_91, 0x00000004);
					}
				}
				else if (!func_24(uParam0->f_53, 0x00000008))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_190(&vVar0);
					func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_65(&(uParam0->f_53), 0x00000008);
					func_22(&(uParam0->f_53), 0x00000010);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_24(uParam0->f_53, 0x00000010))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_190(&vVar0);
					func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_65(&(uParam0->f_53), 0x00000010);
					func_22(&(uParam0->f_53), 0x00000020);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_24(uParam0->f_53, 0x00000020))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_190(&vVar0);
					func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_65(&(uParam0->f_53), 0x00000020);
					if (uParam0->f_19B == 0x00000000)
					{
						func_22(&(uParam0->f_53), 0x00000040);
					}
					else
					{
						func_22(&(uParam0->f_53), 0x00000008);
					}
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_24(uParam0->f_53, 0x00000040))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_190(&vVar0);
					func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_65(&(uParam0->f_53), 0x00000040);
					func_22(&(uParam0->f_53), 0x00000008);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				func_377(0x00000001, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000041:
				if (!func_193())
				{
					if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_376(uParam0, &vVar0, 0x00000000, 0x00000001, 0x00000008);
				}
				else
				{
					func_373(uParam0, vVar0, func_375(uParam0, 0x00000041));
					func_275(uParam0, 0x00000000, 0x00000000);
				}
				uParam0->f_6B++;
				break;
			
			case 0x00000042:
				if (!func_193())
				{
					if (uParam0->f_19B == 0x00000004)
					{
						StringCopy(&vVar0, "tm6_shoot", 24);
					}
					else if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&vVar0, "_shoot", 24);
					}
					func_376(uParam0, &vVar0, 0x00000000, 0x00000001, 0x00000008);
				}
				else
				{
					func_373(uParam0, vVar0, func_375(uParam0, 0x00000042));
					func_275(uParam0, 0x00000000, 0x00000000);
				}
				uParam0->f_6B++;
				break;
			
			case 0x0000000D:
				if (uParam0->f_19B == 0x00000008)
				{
					if (!uParam0->f_6D && !func_193())
					{
						switch (uParam0->f_19E)
						{
							case 0x00000003:
								StringConCat(&vVar0, "_warnC1", 24);
								func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
							
							case 0x00000006:
								StringConCat(&vVar0, "_warnF1", 24);
								func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
							
							case 0x00000001:
								StringConCat(&vVar0, "_far1", 24);
								func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								func_377(0x00000015, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
								break;
							
							case 0x00000002:
								StringConCat(&vVar0, "_close1", 24);
								func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								func_377(0x00000016, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
								break;
							
							case 0x0000000A:
								StringConCat(&vVar0, "_hit1", 24);
								func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
							
							case 0x00000008:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_353(&(uParam0->f_5D), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000000);
								func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
								func_377(0x00000017, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0x00000000);
								func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
								func_275(uParam0, 0x00000000, 0x00000000);
								break;
							
							case 0x00000009:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
									func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
									func_310(uParam0, 0x0000000B, 0x00000000, 0x00000000);
									func_275(uParam0, 0x00000000, 0x00000000);
									if (!iLocal_60)
									{
										iLocal_58 = 0x00000001;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&vVar0, "_bant3", 24);
										iLocal_59 = 0x00000001;
									}
									else
									{
										StringConCat(&vVar0, "_bant2", 24);
										iLocal_60 = 0x00000001;
									}
									func_190(&vVar0);
									func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
									func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
									func_310(uParam0, 0x0000000B, 0x00000000, 0x00000000);
									func_275(uParam0, 0x00000000, 0x00000000);
									iLocal_58 = 0x00000000;
								}
								break;
							
							case 0x00000007:
								StringConCat(&vVar0, "_done1", 24);
								func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
						}
						func_241(uParam0, 0x0000008F, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x0000004E:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_353(&(uParam0->f_57), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000000);
				func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_377(0x0000000A, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000019:
				if (!func_24(uParam0->f_52, 0x00000001))
				{
					func_364(uParam0, 0x00000001, vVar0, "_close1", 0x00000008, 0x00000000);
				}
				else if (!func_24(uParam0->f_52, 0x00000002))
				{
					func_364(uParam0, 0x00000002, vVar0, "_close2", 0x00000008, 0x00000000);
				}
				else if (!func_24(uParam0->f_52, 0x00000004))
				{
					func_364(uParam0, 0x00000004, vVar0, "_close3", 0x00000008, 0x00000000);
				}
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000030:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_stop1", 24);
				}
				cVar1 = { vVar0 };
				func_353(&(uParam0->f_56), 0x00000004, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_270(uParam0->f_3, "TAXI_STOPPED", uParam0->f_91, 0x00000004);
				}
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_377(0x00000005, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000004A:
				if (func_365(uParam0))
				{
					func_373(uParam0, vVar0, func_375(uParam0, 0x0000004A));
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_270(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_91, 0x00000004);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_363(uParam0, vVar0, 0x00000008);
				}
				func_377(0x00000003, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000046:
				if (!func_24(uParam0->f_53, 0x00000400))
				{
					func_65(&(uParam0->f_53), 0x00000400);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
					StringConCat(&vVar0, "_swrv1", 24);
					func_190(&vVar0);
					func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (!func_24(uParam0->f_53, 0x00000800))
				{
					func_65(&(uParam0->f_53), 0x00000800);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
					StringConCat(&vVar0, "_swrv2", 24);
					func_190(&vVar0);
					func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (!func_24(uParam0->f_53, 0x00001000))
				{
					func_65(&(uParam0->f_53), 0x00001000);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
					StringConCat(&vVar0, "_swrv3", 24);
					func_190(&vVar0);
					func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000045:
				if (!func_24(uParam0->f_52, 0x00000400))
				{
					func_364(uParam0, 0x00000400, vVar0, "_rvrs1", 0x00000008, 0x00000001);
					func_22(&(uParam0->f_52), 0x00000800);
				}
				else if (!func_24(uParam0->f_52, 0x00000800))
				{
					func_364(uParam0, 0x00000800, vVar0, "_rvrs2", 0x00000008, 0x00000001);
				}
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000043:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_353(&(uParam0->f_58), 0x00000004, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_377(0x00000010, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000044:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000031:
				StringConCat(&vVar0, "_losPol1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_241(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000032:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_lsPo1", 24);
				}
				if (uParam0->f_19B != 0x00000009)
				{
					func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_270(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_91, 0x00000004);
				}
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000033:
				if (func_365(uParam0))
				{
					if (uParam0->f_19B == 0x00000002)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
						func_241(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
						func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
					}
					else
					{
						if (uParam0->f_19B == 0x00000005 && uParam0->f_19A > 0x00000009)
						{
							StringConCat(&vVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&vVar0, "_copBa1", 24);
						}
						cVar1 = { vVar0 };
						func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
						func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_353(&(uParam0->f_55), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000000);
					func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
					func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_275(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000035:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_377(0x00000008, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_310(uParam0, 0x0000000A, 0f, 0x00000001);
				break;
			
			case 0x00000034:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 0x00000001)
				{
					func_274("TAXI_OBJ_POL", 0x00001D4C, 0x00000001);
					uParam0->f_1A1 = 0x00000034;
				}
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000036:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_190(&vVar0);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000054:
				if (!func_24(uParam0->f_51, 0x00040000))
				{
					func_371(uParam0, 0x00040000, vVar0, "_rdCh1", 0x00000001, 0x00000008);
				}
				else if (!func_24(uParam0->f_51, 0x00100000))
				{
					if (uParam0->f_19B == 0x00000000 || uParam0->f_19B == 0x00000001)
					{
						func_371(uParam0, 0x00100000, vVar0, "_rdCh2", 0x00000001, 0x00000008);
					}
					else
					{
						func_371(uParam0, 0x00100000, vVar0, "_rdCh2", 0x00000000, 0x00000008);
					}
				}
				func_377(0x00000007, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000055:
				if (!func_24(uParam0->f_52, 0x04000000))
				{
					if (uParam0->f_1A2.f_6)
					{
						func_362(uParam0, 0x04000000, vVar0, "_rdLk1", 0x00000001, 0x00000007);
					}
				}
				else if (!func_24(uParam0->f_52, 0x08000000))
				{
					func_362(uParam0, 0x08000000, vVar0, "_rdFv1", 0x00000000, 0x00000007);
				}
				func_377(0x00000006, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000056:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000057:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_1A2.f_3, 24);
				func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000064:
				func_274("TAXI_OBJ_GYB_2", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x00000064;
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002F:
				if (uParam0->f_19B == 0x00000001)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				break;
			
			case 0x00000065:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000000)
				{
					func_190(&vVar0);
				}
				func_65(&(uParam0->f_51), 0x00200000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				break;
			
			case 0x00000066:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000000)
				{
					func_190(&vVar0);
				}
				func_65(&(uParam0->f_51), 0x00200000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				break;
			
			case 0x00000067:
				if (uParam0->f_19B == 0x00000004)
				{
					StringConCat(&vVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_thank3", 24);
				}
				if ((uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000000)
				{
					func_190(&vVar0);
				}
				func_65(&(uParam0->f_51), 0x00200000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				break;
			
			case 0x00000061:
				if (!func_24(uParam0->f_52, 0x00010000))
				{
					if (func_420(uParam0, 0x0000000B) > uParam0->f_24)
					{
						switch (uParam0->f_66)
						{
							case 0x00000000:
								StringConCat(&vVar0, "_ccba2", 24);
								break;
							
							case 0x00000001:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
						}
						func_190(&vVar0);
						func_368(vVar0, uParam1);
						func_65(&(uParam0->f_52), 0x00010000);
						func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
						func_310(uParam0, 0x0000000B, 0x00000000, 0x00000000);
						func_275(uParam0, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x00000062:
				if (!func_24(uParam0->f_52, 0x00020000))
				{
					if (func_420(uParam0, 0x0000000B) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_190(&vVar0);
						func_368(vVar0, uParam1);
						func_65(&(uParam0->f_52), 0x00020000);
						func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
						func_310(uParam0, 0x0000000B, 0x00000000, 0x00000000);
						func_275(uParam0, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x00000063:
				if (!func_24(uParam0->f_52, 0x00800000))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_65(&(uParam0->f_52), 0x00800000);
				}
				else if (!func_24(uParam0->f_52, 0x01000000))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_65(&(uParam0->f_52), 0x01000000);
				}
				else if (!func_24(uParam0->f_52, 0x02000000))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_65(&(uParam0->f_52), 0x02000000);
				}
				func_368(vVar0, uParam1);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003A:
				if (uParam0->f_19B == 0x00000006)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_353(&(uParam0->f_5D), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000001);
					func_190(&vVar0);
					func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				}
				else if (uParam0->f_19B == 0x00000008)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005F:
				StringConCat(&vVar0, "_wndw2", 24);
				func_368(vVar0, uParam1);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_310(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005E:
				StringConCat(&vVar0, "_wndw0", 24);
				func_368(vVar0, uParam1);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_310(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000060:
				StringConCat(&vVar0, "_wndw1", 24);
				func_368(vVar0, uParam1);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_310(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000071:
				StringConCat(&vVar0, "_csite1", 24);
				func_190(&vVar0);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000077:
				StringConCat(&vVar0, "_fair1", 24);
				func_190(&vVar0);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000073:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_353(&(uParam0->f_5B), 0x00000005, &cVar1, 0x00000001, 0x00000001, 0x00000000);
				func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000074:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_353(&(uParam0->f_5C), 0x00000005, &cVar1, 0x00000001, 0x00000001, 0x00000000);
				func_352(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000072:
				StringConCat(&vVar0, "_goons1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000003B:
				StringConCat(&vVar0, "_oRun1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000075:
				StringConCat(&vVar0, "_gotG1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000076:
				StringConCat(&vVar0, "_getA1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000078:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000079:
				StringConCat(&vVar0, "_grl1", 24);
				func_190(&vVar0);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007A:
				StringConCat(&vVar0, "_figt1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007B:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007C:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007D:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007E:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007F:
				StringConCat(&vVar0, "_aKill1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000081:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_190(&vVar0);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000082:
				StringConCat(&vVar0, "_gDest1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_241(uParam0, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000080:
				StringConCat(&vVar0, "_gKO1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000084:
				StringConCat(&vVar0, "_gThank1", 24);
				func_65(&(uParam0->f_51), 0x00200000);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000083:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_190(&vVar0);
				func_368(vVar0, uParam1);
				func_65(&(uParam0->f_51), 0x04000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_310(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003C:
				StringConCat(&vVar0, "_cash1", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000069:
				if (!func_24(uParam0->f_51, 0x02000000) && uParam0->f_19B != 0x00000009)
				{
					func_371(uParam0, 0x02000000, vVar0, "_noPay1", 0x00000001, 0x00000008);
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_270(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_91, 0x00000004);
					}
				}
				func_241(uParam0, 0x0000006C, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006A:
				StringConCat(&vVar0, "_foot", 24);
				func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006B:
				if (!func_24(uParam0->f_51, 0x10000000))
				{
					func_371(uParam0, 0x10000000, vVar0, "_kPay1", 0x00000001, 0x00000008);
				}
				func_241(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006C:
				func_274("TAXI_OBJ_RUNOUT", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000006C;
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006D:
				if (!func_24(uParam0->f_51, 0x00400000))
				{
					if (uParam0->f_19B == 0x00000002 || uParam0->f_19B == 0x00000006)
					{
						func_371(uParam0, 0x00400000, vVar0, "_mPay1", 0x00000000, 0x00000008);
					}
					else if (uParam0->f_19B == 0x00000009)
					{
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
						{
							func_270(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_91, 0x00000004);
						}
					}
					else
					{
						func_371(uParam0, 0x00400000, vVar0, "_mPay1", 0x00000001, 0x00000008);
					}
				}
				func_241(uParam0, 0x0000006F, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006F:
				func_274("TAXI_OBJ_GETRUN", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000006F;
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006E:
				StringConCat(&vVar0, "_runoff", 24);
				func_195(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000008D:
				if (!func_24(uParam0->f_51, 0x01000000))
				{
					func_371(uParam0, 0x01000000, vVar0, "_ret1", 0x00000001, 0x00000008);
				}
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000058:
				func_274("TAXI_TIEFLEE", 0x00001D4C, 0x00000001);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000039:
				if (!func_24(uParam0->f_62, 0x20000000))
				{
					func_274("TAXI_OBJ_CYI_1B", 0x00001D4C, 0x00000001);
					func_65(&(uParam0->f_62), 0x20000000);
				}
				uParam0->f_1A1 = 0x00000039;
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000068:
				StringConCat(&vVar0, "_joke1", 24);
				func_190(&vVar0);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000088:
				if (uParam0->f_73)
				{
					StringConCat(&vVar0, "_wronglz", 24);
				}
				else if (uParam0->f_74)
				{
					StringConCat(&vVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_wrong", 24);
				}
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000008C:
				StringConCat(&vVar0, "_shout", 24);
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000087:
				if (uParam0->f_19B == 0x00000004)
				{
					StringCopy(&vVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&vVar0, "_jack", 24);
				}
				func_376(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000085:
				StringConCat(&vVar0, "_getCar", 24);
				func_376(uParam0, &vVar0, 0x00000001, 0x00000000, 0x00000008);
				func_241(uParam0, 0x00000086, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000086:
				func_274("TX_VIP", 0x00001D4C, 0x00000000);
				uParam0->f_1A1 = 0x00000086;
				func_241(uParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_275(uParam0, 0x00000000, 0x00000000);
				break;
			}
	}
}

void func_362(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_65(&(uParam0->f_52), iParam1);
	func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_190(&vParam2);
	}
	func_195(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0x00000000, 0x00000000, 0x00000000);
}

void func_363(var uParam0, struct<6> Param1, int iParam2)
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_24(uParam0->f_52, 0x00000040))
	{
		func_65(&(uParam0->f_52), 0x00000040);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_24(uParam0->f_52, 0x00000080))
	{
		func_65(&(uParam0->f_52), 0x00000080);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x09AC81E49EA267F7(0x00000001, 0x00000003), 24);
	}
	func_352(&(uParam0->f_F4), uParam0->f_90, &Param1, &cVar0, iParam2, 0x00000000, 0x00000000);
	func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
}

void func_364(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)
{
	func_65(&(uParam0->f_52), iParam1);
	func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000) || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000008) || uParam0->f_19B == 0x00000002)
	{
		if (bParam8)
		{
			func_190(&vParam2);
		}
	}
	func_195(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0x00000000, 0x00000000, 0x00000000);
}

int func_365(var uParam0)
{
	if ((((((uParam0->f_19B == 0x00000002 || uParam0->f_19B == 0x00000003) || uParam0->f_19B == 0x00000004) || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000006) || uParam0->f_19B == 0x00000007) || uParam0->f_19B == 0x00000008)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_366(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)
{
	func_65(&(uParam0->f_51), iParam1);
	func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	func_195(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0x00000000, 0x00000000, 0x00000000);
}

void func_367(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0x00000000;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_289(*uParam0, iVar1))
		{
			func_66(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_190(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 0x00000001))
				{
					*uParam0 = 0x00000000;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_368(char[24] cParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_369(uParam1);
	if (iVar0 > 0xFFFFFFFF)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_65(&((uParam1[iVar0 /*8*/])->f_7), 0x00000002);
	}
}

int func_369(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (unk_0xEA6BC48857E0AC4C(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

void func_370(var uParam0, bool bParam1)
{
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			if (bParam1)
			{
				func_274("TX_OBJ_NEX_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_274("TX_OBJ_NEX_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				func_274("TX_OBJ_TIE_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_274("TX_OBJ_TIE_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				func_274("TX_OBJ_DL_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_274("TX_OBJ_DL_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				func_274("TX_OBJ_GYB_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_274("TX_OBJ_GYB_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				func_274("TX_OBJ_TTB_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_274("TX_OBJ_TTB_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				func_274("TX_OBJ_CYI_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_274("TX_OBJ_CYI_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				func_274("TX_OBJ_GYN_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_274("TX_OBJ_GYN_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000007:
			if (bParam1)
			{
				func_274("TX_OBJ_CC_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_274("TAXI_OBJ_CC1", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000008:
			if (bParam1)
			{
				func_274("TX_OBJ_FC_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_274("TAXI_OBJ_FTC1", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000009:
			if (bParam1)
			{
				func_274("TX_OBJ_PRO_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_274("TX_OBJ_PRO_DO", 0x00001D4C, 0x00000001);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_8B = 0x00000001;
	}
}

void func_371(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_65(&(uParam0->f_51), iParam1);
	func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_190(&vParam2);
	}
	func_195(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0x00000000, 0x00000000, 0x00000000);
}

int func_372(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_119(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

void func_373(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)
{
	func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
	func_310(uParam0, 0x00000011, 0f, 0x00000001);
	StringConCat(&cParam1, sParam5, 24);
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		unk_0x9A8EDAF1C0D299FF(uParam0->f_3, &cParam1, func_374(uParam0));
	}
}

char* func_374(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			sVar0 = "TaxiFelipe";
			break;
		
		case 0x00000001:
			sVar0 = "TaxiOtis";
			break;
		
		case 0x00000002:
			sVar0 = "TaxiKwak";
			break;
		
		case 0x00000003:
			sVar0 = "TaxiWalter";
			break;
		
		case 0x00000004:
			sVar0 = "TaxiMiranda";
			break;
		
		case 0x00000005:
			sVar0 = "TaxiDerrick";
			break;
		
		case 0x00000006:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 0x00000007:
			sVar0 = "TaxiDarren";
			break;
		
		case 0x00000008:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_375(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000048:
			switch (uParam0->f_19B)
			{
				case 0x00000000:
					return "_ACRH";
				
				case 0x00000001:
					return "_ACRH";
				
				case 0x00000002:
					return "_ACAA";
				
				case 0x00000003:
					return "_ACRH";
				
				case 0x00000004:
					return "_AEAA";
				
				case 0x00000005:
					return "_DKAA";
				
				case 0x00000006:
					return "_ACAA";
				
				case 0x00000007:
					return "_ACAA";
				
				case 0x00000008:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 0x00000052:
			switch (uParam0->f_19B)
			{
				case 0x00000000:
					return "_AHIT";
				
				case 0x00000001:
					return "_AHIT";
				
				case 0x00000002:
					return "_AEAA";
				
				case 0x00000003:
					return "_ADAA";
				
				case 0x00000004:
					return "_AFAA";
				
				case 0x00000005:
					return "_AFAA";
				
				case 0x00000006:
					return "_AEAA";
				
				case 0x00000007:
					return "_AHAA";
				
				case 0x00000008:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 0x0000004A:
			switch (uParam0->f_19B)
			{
				case 0x00000000:
					return "_AROL";
				
				case 0x00000001:
					return "_AROL";
				
				case 0x00000002:
					return "_AHAA";
				
				case 0x00000003:
					return "_AROL";
				
				case 0x00000004:
					return "_AGAA";
				
				case 0x00000005:
					return "_AROL";
				
				case 0x00000006:
					return "_AROL";
				
				case 0x00000007:
					return "_AROL";
				
				case 0x00000008:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 0x00000041:
			switch (uParam0->f_19B)
			{
				case 0x00000000:
					return "_ABAA";
				
				case 0x00000001:
					return "_FUAA";
				
				case 0x00000002:
					return "_AFAA";
				
				case 0x00000003:
					return "_DBAA";
				
				case 0x00000004:
					return "_DLAA";
				
				case 0x00000005:
					return "_DKAA";
				
				case 0x00000006:
					if (uParam0->f_73)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 0x00000007:
					return "_DBAA";
				
				case 0x00000008:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 0x00000042:
			switch (uParam0->f_19B)
			{
				case 0x00000000:
					return "_AEAA";
				
				case 0x00000001:
					return "_ACAA";
				
				case 0x00000002:
					return "_AJAA";
				
				case 0x00000003:
					return "_AHAA";
				
				case 0x00000004:
					return "_AHAA";
				
				case 0x00000005:
					return "_AIAA";
				
				case 0x00000006:
					if (uParam0->f_73)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 0x00000007:
					return "_AUAA";
				
				case 0x00000008:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 0x00000002:
			switch (uParam0->f_19B)
			{
				case 0x00000000:
					return "_AAAA";
				
				case 0x00000001:
					return "_AAAA";
				
				case 0x00000002:
					return "_ADAA";
				
				case 0x00000003:
					return "_ABAA";
				
				case 0x00000004:
					return "_AAAA";
				
				case 0x00000005:
					return "_ABAA";
				
				case 0x00000006:
					if (uParam0->f_73)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 0x00000007:
					return "_BUAA";
				
				case 0x00000008:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

bool func_376(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_310(uParam0, 0x00000010, 0x00000000, 0x00000000);
	if (bParam3)
	{
		func_310(uParam0, 0x00000011, 0f, 0x00000001);
	}
	func_275(uParam0, iParam2, 0x00000000);
	return func_195(&(uParam0->f_F4), uParam0->f_90, sParam1, iParam4, 0x00000000, 0x00000000, 0x00000000);
}

void func_377(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)
{
	if (iParam0 == 0x00000000)
	{
		if (func_24(*uParam2, 0x00000002))
		{
			if (!bParam5)
			{
				*uParam1 = (*uParam1 - 0x00000002);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000008)
	{
		if (func_24(*uParam2, 0x40000000))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000001)
	{
		if (func_24(*uParam2, 0x00000004))
		{
			if (!func_24(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000001);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 0x00001000);
			}
		}
		else if (func_24(*uParam2, 0x00000008))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000005)
	{
		if (func_24(*uParam2, 0x00000200))
		{
			if (!func_24(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000001);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 0x00001000);
			}
		}
	}
	else if (iParam0 == 0x00000002)
	{
		if (func_24(*uParam2, 0x00000010))
		{
			if (!func_24(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000001);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 0x00001000);
			}
		}
		else if (func_24(*uParam2, 0x00000020))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000003)
	{
		if (func_24(*uParam2, 0x00000040))
		{
			if (!func_24(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_22(uParam2, 0x00001000);
			}
		}
		else if (func_24(*uParam2, 0x00000080))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000004)
	{
		if (func_24(*uParam2, 0x00000100))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000006)
	{
		if (func_24(*uParam2, 0x00000400))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000007)
	{
		if (func_24(*uParam2, 0x00000800))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000009)
	{
		if (func_24(*uParam2, 0x00002000))
		{
			if (func_24(*uParam2, 0x00200000))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 0x00400000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000A)
	{
		if (func_24(*uParam2, 0x00004000))
		{
			if (func_24(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000B)
	{
		if (func_24(*uParam2, 0x00008000))
		{
			if (func_24(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000C)
	{
		if (func_24(*uParam2, 0x00010000))
		{
			if (func_24(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000D)
	{
		if (func_24(*uParam2, 0x00020000))
		{
			if (func_24(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000E)
	{
		if (func_24(*uParam2, 0x00040000))
		{
			if (func_24(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000F)
	{
		if (func_24(*uParam2, 0x00080000))
		{
			if (func_24(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x00000010)
	{
		if (func_24(*uParam2, 0x00100000))
		{
			if (func_24(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_24(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x00000015)
	{
		if (func_24(*uParam2, 0x00800000))
		{
			*uParam1 = (*uParam1 - 0x00000002);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000016)
	{
		if (func_24(*uParam2, 0x01000000))
		{
			*uParam1 = (*uParam1 - 0x00000002);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000017)
	{
		if (func_24(*uParam2, 0x02000000))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000011)
	{
		if (func_24(*uParam2, 0x04000000))
		{
			if (func_24(*uParam2, 0x04000000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x00000012)
	{
		if (func_24(*uParam2, 0x08000000))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000014)
	{
		if (func_24(*uParam2, 0x20000000))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000013)
	{
		if (func_24(*uParam2, 0x10000000))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000019)
	{
		if (func_24(*uParam2, 0x00008000))
		{
			*uParam1 = (*uParam1 - 0x00000002);
			*uParam3 = { cParam4 };
		}
	}
}

int func_378(var uParam0)
{
	return uParam0->f_1A0;
}

int func_379(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (func_224(sParam0, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_380(var uParam0)
{
	if (func_193())
	{
		return 0x00000001;
	}
	if (func_179(uParam0, 0x00000011))
	{
		return 0x00000001;
	}
	if (func_179(uParam0, 0x0000000E))
	{
		return 0x00000001;
	}
	if (func_222(uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_381(var uParam0, var uParam1)
{
	return ((*uParam1 == 0xFFFFFFFF && uParam0->f_19C == 0x00000000) && !func_179(uParam0, 0x00000009));
}

bool func_382(var uParam0)
{
	return uParam0->f_75;
}

void func_383(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_19A >= 0x00000005)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_4))
		{
			if (Local_165 > 0x00000000 && !func_289(Local_165.f_1[0x00000004 /*4*/], 0x00000004))
			{
				iVar0 = 0x00000000;
				iVar0 = 0x00000000;
				while (iVar0 <= (Local_165 - 0x00000001))
				{
					if (func_289(Local_165.f_1[iVar0 /*4*/], 0x00000002))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_289(Local_165.f_1[iVar0 /*4*/], 0x00000004))
							{
								func_66(&(Local_165.f_1[iVar0 /*4*/]), 0x00000004);
								Local_165.f_1[iVar0 /*4*/].f_1 = unk_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							func_23(&(Local_165.f_1[iVar0 /*4*/]), 0x0000000C);
						}
						if (func_289(Local_165.f_1[iVar0 /*4*/], 0x00000004) && !func_289(Local_165.f_1[iVar0 /*4*/], 0x00000008))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_66(&(Local_165.f_1[iVar0 /*4*/]), 0x00000008);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_343(uParam0, "Taxi Garbage Collected", 0x00000012);
		}
	}
}

void func_384(var uParam0, var uParam1, bool bParam2)
{
	if (!func_24(uParam0->f_37, 0x00000001))
	{
		switch (*uParam1)
		{
			case 0x00000000:
				if (!unk_0xEA6BC48857E0AC4C(&(uParam0->f_7C)) && func_193())
				{
					*uParam1++;
				}
				break;
			
			case 0x00000001:
				if (!func_193())
				{
					StringCopy(&(uParam0->f_7C), func_212(), 24);
					uParam0->f_38 = (uParam0->f_38 + uParam0->f_39);
					if (uParam0->f_38 < 0x00000000)
					{
						uParam0->f_38 = 0x00000000;
					}
					uParam0->f_39 = 0x00000000;
					*uParam1 = 0x00000000;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

int func_385(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_179(uParam0, 0x0000001B))
	{
		func_218(uParam0, 0x0000001B);
		uParam1->f_3 = 0x000000FA;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_6D && func_420(uParam0, 0x0000001B) > 5f)
	{
		if (func_412(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001))
		{
			func_310(uParam0, 0x0000001B, 0x00000000, 0x00000000);
			func_310(uParam0, 0x0000000A, 0x00000000, 0x00000000);
			func_410(uParam0, &uVar0, uParam1);
		}
		func_407(uParam0);
	}
	if (uParam0->f_19A >= 0x00000003 && uParam0->f_19A <= 0x00000005)
	{
		func_386(uParam0);
	}
	if ((((!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) && (unk_0x9F4FE516EAACCFC5(*uParam0) && !unk_0xFBB4F23D534EB790(*uParam0))) && (unk_0x9F4FE516EAACCFC5(uParam0->f_1) && !unk_0xFBB4F23D534EB790(uParam0->f_1))) && !unk_0xD17F06053799A7CA()) && !func_193())
	{
		if (func_420(uParam0, 0x0000001A) > 10f)
		{
			func_185(uParam0, 0x0000001A, 0x00000000);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
		}
	}
	else if (func_179(uParam0, 0x0000001A))
	{
		func_185(uParam0, 0x0000001A, 0x00000000);
	}
	return 0x00000000;
}

void func_386(var uParam0)
{
	if (!func_406(uParam0->f_1AD))
	{
		uParam0->f_1AD = func_405();
		func_396(&(uParam0->f_1AD), 0x00000000, 0x00000000, unk_0x09AC81E49EA267F7(0x00000004, 0x00000007), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (func_387(uParam0->f_1AD))
	{
		func_343(uParam0, "Player took too long to make pickup", 0x00000009);
	}
}

bool func_387(int iParam0)
{
	return func_388(func_405(), iParam0);
}

int func_388(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_406(iParam1) || !func_406(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_394(iParam0);
	iVar1 = func_394(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_393(iParam0);
	iVar1 = func_393(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_392(iParam0);
	iVar1 = func_392(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_391(iParam0);
	iVar1 = func_391(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_390(iParam0);
	iVar1 = func_390(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_389(iParam0);
	iVar1 = func_389(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_389(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_390(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_391(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_392(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_393(int iParam0)
{
	return iParam0 & 0x0000000F;
}

var func_394(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_395(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_395(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_396(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_394(*uParam0);
	iVar1 = func_393(*uParam0);
	iVar2 = func_392(*uParam0);
	iVar3 = func_391(*uParam0);
	iVar4 = func_390(*uParam0);
	iVar5 = func_389(*uParam0);
	if (((((iParam6 == 0x00000000 && iParam5 == 0x00000000) && iParam4 == 0x00000000) && iParam3 == 0x00000000) && iParam2 == 0x00000000) && iParam1 == 0x00000000)
	{
		return;
	}
	if (iParam1 < 0x00000000)
	{
		return;
	}
	if (iParam2 < 0x00000000)
	{
		return;
	}
	if (iParam3 < 0x00000000)
	{
		return;
	}
	if (iParam4 < 0x00000000)
	{
		return;
	}
	if (iParam5 < 0x00000000)
	{
		return;
	}
	if (iParam6 < 0x00000000)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 0x0000003C)
	{
		iParam2++;
		iVar5 = (iVar5 - 0x0000003C);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 0x0000003C)
	{
		iParam3++;
		iVar4 = (iVar4 - 0x0000003C);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 0x00000018)
	{
		iParam4++;
		iVar3 = (iVar3 - 0x00000018);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_404(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_404(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_397(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_397(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_403(uParam0, iParam1);
	func_402(uParam0, iParam2);
	func_401(uParam0, iParam3);
	func_400(uParam0, iParam5);
	func_399(uParam0, iParam4);
	func_398(uParam0, iParam6);
}

void func_398(var uParam0, int iParam1)
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

void func_399(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_393(*uParam0);
	iVar1 = func_394(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_404(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_400(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_401(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_402(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_403(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_404(int iParam0, int iParam1)
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

int func_405()
{
	var uVar0;
	
	func_403(&uVar0, unk_0x4460E481B9E33ADA());
	func_402(&uVar0, unk_0x8D199E381D262EEF());
	func_401(&uVar0, unk_0xD8A54335F18763BA());
	func_399(&uVar0, unk_0x972A296334C9D57B());
	func_400(&uVar0, unk_0x118229AD063C3C1D());
	func_398(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_406(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == 0xFFFFFFF1)
	{
		return 0x00000000;
	}
	iVar0 = func_389(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_390(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_391(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_394(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_393(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_392(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_404(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_407(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_19A < 0x00000007 && !uParam0->f_8A)
	{
		if (((uParam0->f_19B == 0x00000009 && func_409()) && !func_220(uParam0)) || ((uParam0->f_19B != 0x00000009 && func_279(uParam0, 0x00000001)) && !func_220(uParam0)))
		{
			uVar0 = func_408(uParam0->f_4);
			unk_0x82692E8F6A0D7A22(&uVar0);
			uParam0->f_4 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			unk_0x73270B3C9CC833FD(uParam0->f_4, 0x00000001, 0x00000000);
			func_182(uParam0);
			func_172(uParam0, 0x00000000);
		}
	}
}

var func_408(var uParam0)
{
	return uParam0;
}

int func_409()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (unk_0xA30B8362589C124A(iVar0, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
				{
					if (unk_0x4906F8A34E9F4814(iVar0, func_21()))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

void func_410(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 0x00000001:
			if (func_411(uParam0, 0x00000000, 0x00000001))
			{
				func_343(uParam0, "Aggro Aiming", 0x00000005);
			}
			break;
		
		case 0x00000004:
			if (func_411(uParam0, 0x00000000, 0x00000004))
			{
				func_343(uParam0, "Aggro Shot Near", 0x00000008);
			}
			break;
		
		case 0x00000008:
			if (func_411(uParam0, 0x00000000, 0x00000008))
			{
				func_343(uParam0, "Aggro Heard Shot", 0x00000008);
			}
			break;
		
		case 0x00000010:
			if (func_411(uParam0, 0x00000001, 0x00000001))
			{
				func_343(uParam0, "Aggro Attacked", 0x0000000E);
			}
			break;
		
		case 0x00000020:
			if (func_411(uParam0, 0x00000000, 0x00000001))
			{
				func_343(uParam0, "Aggro Minor Attacked", 0x00000008);
			}
			break;
		
		case 0x00000002:
			if (!func_24(*uParam2, 0x00000002) && func_166(uParam0))
			{
				func_343(uParam0, "Aggro Went Wanted", 0x00000005);
			}
			break;
	}
}

int func_411(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_6B >= 0x00000002 && uParam0->f_19A < 0x0000001D) || uParam0->f_19A <= 0x00000005) || (iParam1 && !uParam0->f_72))
	{
		return 0x00000001;
	}
	else if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (!unk_0x03068588A1FCED1A(uParam0->f_3))
		{
			if (iParam2 == 0x00000004)
			{
				func_241(uParam0, 0x00000042, 0x00000001, 0x00000000, 0x00000001);
			}
			else
			{
				func_241(uParam0, 0x00000041, 0x00000001, 0x00000000, 0x00000001);
			}
		}
	}
	return 0x00000000;
}

int func_412(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x16F2683693E537C9();
	if (!unk_0x437347B10A200C4B(iVar0, 0x00000000) && !unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (!func_24(*uParam2, 0x00000001))
		{
			if (func_418(iParam0, uParam2))
			{
				*uParam3 = 0x00000001;
				return 0x00000001;
			}
		}
		if (!func_24(*uParam2, 0x00000002))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				*uParam3 = 0x00000002;
				return 0x00000001;
			}
		}
		if (!func_24(*uParam2, 0x00000004))
		{
			if (func_416(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 0x00000004;
				return 0x00000001;
			}
		}
		if (!func_24(*uParam2, 0x00000008))
		{
			if (func_415(iVar0, iParam0, uParam2))
			{
				*uParam3 = 0x00000008;
				return 0x00000001;
			}
		}
		bVar1 = !func_24(*uParam2, 0x00000080);
		if (bParam4)
		{
			if (func_413(iParam0, iParam1, 0x00000001, bParam6, bVar1, 0x00000001))
			{
				*uParam3 = 0x00000020;
				return 0x00000001;
			}
		}
		else if (!func_24(*uParam2, 0x00000010))
		{
			if (func_413(iParam0, iParam1, 0x00000000, bParam6, bVar1, bParam8))
			{
				*uParam3 = 0x00000010;
				return 0x00000001;
			}
		}
	}
	else if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (iParam7 && unk_0xB87D13D0C064E9D1(iParam0, iVar0, 0x00000001))
		{
			*uParam3 = 0x00000010;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_413(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_73)
		{
			iLocal_74 = unk_0x7F6DC62EA9922664(iParam0);
			bLocal_73 = 0x00000001;
		}
		iLocal_75 = unk_0x7F6DC62EA9922664(iParam0);
		iLocal_76 = (iLocal_74 - iLocal_75);
		iVar0 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar0, 0x00000001))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 0x00000001;
				}
			}
		}
		if (bLocal_73)
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (IntToFloat(iLocal_76) > 100f)
				{
					return 0x00000001;
				}
			}
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 0x00000001))
	{
		return 0x00000001;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar1, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar1, 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (unk_0x36646919F20EAFFC(iParam0))
			{
				if (unk_0x710D117BA581D7D2(iParam0) == unk_0x16F2683693E537C9())
				{
					return 0x00000001;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
		{
			if (unk_0x5A91F08DF773C39D(iParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
				{
					return 0x00000001;
				}
			}
		}
	}
	if (unk_0xE9B814896D415EDD(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC021B60D52071374(iParam0))
		{
			return 0x00000001;
		}
	}
	if (func_414(unk_0x16F2683693E537C9(), iParam0))
	{
		return 0x00000001;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_170(iParam0, 0x00000001) < 1.5f)
		{
			return 0x00000001;
		}
		else if (unk_0x405E212DDE472467(iParam0, 0x00000000))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iParam0, 0x00000000)))
			{
				return 0x00000001;
			}
		}
		else if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam0))
		{
			return 0x00000001;
		}
		if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
		{
			if (unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_414(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &iVar0, 0x00000001);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0x68F4C0EC296D3901(iParam1, 0x00000001)) < 2.5f)
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, iParam1, 180f))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_415(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x03A10A5707B2BB1F(iParam0, 0x00000004))
	{
		if (unk_0x168558745A6AC21E(iParam0) && !unk_0x52AE17073D025311(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0x00000000, 0x00000001, 0x00000000))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_416(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam1, 0x00000001) };
	}
	if (unk_0xD3DCEC81D13AAFB1(vVar0, 4f, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0xD15F544473A95FE8(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 0x00000001, 0x00000001))
	{
		return 0x00000001;
	}
	if (unk_0x03A10A5707B2BB1F(iParam0, 0x00000002))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 0x00000011))
				{
					return 0x00000001;
				}
			}
		}
		else
		{
			if (unk_0x405E212DDE472467(unk_0x940C1429253D3B1B(iParam1), 0x00000000))
			{
				iVar1 = unk_0x6937EA2286828455(unk_0x940C1429253D3B1B(iParam1), 0x00000000);
			}
			if (unk_0xFB275CE013F3A38C(iParam0) || func_417(iVar1))
			{
				if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, 0x00000001), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0x00000000, 0x00000001, 0x00000000))
				{
					if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 0x00000011))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_417(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
		{
			if (unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000) != 0x00000000)
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_171(unk_0x16F2683693E537C9(), iParam0, 0x00000001) < 40f)
						{
							if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar1))
							{
								if ((unk_0xE2F1E99DD161A861(iVar1) && unk_0x96A5FE5834B81CE7(iVar1) == iParam0) || (unk_0xEC560E589DF8370E(iVar1) && unk_0x940C1429253D3B1B(iVar1) == unk_0xA30B8362589C124A(iParam0, 0xFFFFFFFF, 0x00000000)))
								{
									if ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && unk_0x06F8112AA79C53D9(0x00000000, 0x00000018)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0x06F8112AA79C53D9(0x00000000, 0x00000045)))
									{
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
	return 0x00000000;
}

int func_418(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_170(iParam0, 0x00000001) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0x00000000)
						{
							uParam1->f_1 = unk_0x1C0640BA9A7327B3();
						}
						else if ((unk_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
						{
							return 0x00000001;
						}
					}
				}
			}
		}
	}
	return 0x00000000;
}

void func_419(var uParam0)
{
	if (!func_24(uParam0->f_62, 0x00000002))
	{
		if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
		{
			if (func_10(uParam0->f_4, uParam0->f_11, 0x00000001) < 180f)
			{
				unk_0x28F5E4DA506AC0CA(uParam0->f_11, 25f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_65(&(uParam0->f_62), 0x00000002);
			}
		}
	}
}

float func_420(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_92[iParam1 /*3*/])))
	{
		func_219(&(uParam0->f_92[iParam1 /*3*/]));
	}
	return func_107(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_421()
{
	func_422(&Local_231);
	func_439();
}

void func_422(var uParam0)
{
	func_11(0x00000000, uParam0, 0x00000001);
	if (uParam0->f_19B != 0x00000009)
	{
		func_440(0x00000002);
	}
}

int func_423(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 0x00000001;
	}
	if ((((!func_193() && func_420(uParam0, 0x00000003) > 1f) || uParam0->f_19F == 0x00000012) || uParam0->f_19F == 0x0000000E) || uParam0->f_19F == 0x0000000F)
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
		{
			if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0x00000000))
				{
					if (func_64(uParam0) == 0x00000000 || func_289(uParam0->f_55, 0x00000020))
					{
						if (!unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
						{
							func_154(uParam0, 0x00001040, 0x00000000);
						}
						else
						{
							func_154(uParam0, 0x00000000, 0x00000000);
						}
						return 0x00000001;
					}
					else
					{
						func_154(uParam0, 0x00000000, 0x00000000);
						return 0x00000001;
					}
				}
				else
				{
					func_154(uParam0, 0x00000000, 0x00000000);
					return 0x00000001;
				}
			}
			else
			{
				func_154(uParam0, 0x00000000, 0x00000000);
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	else if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
	{
	}
	return 0x00000000;
}

void func_424(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_8));
	}
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_9));
	}
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_A))
	{
		unk_0x142CC44DB769B57E(&(uParam0->f_A));
	}
}

int func_425(var uParam0)
{
	if (uParam0->f_6D && uParam0->f_19A < 0x0000001D)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_426()
{
	func_428(&Local_231, 0x00000001);
	Local_231.f_19A = 0x00000000;
	func_427(&Local_231, 0x00000002, 0x00000004);
	Local_231.f_17 = { 31.3927f, 229.9863f, 108.45f };
	Local_231.f_21 = 340.5f;
	Local_231.f_1A = { -1239.992f, -902.0005f, 10.8342f };
	Local_231.f_22 = 305.2155f;
	Local_231.f_1D = { -1224.093f, -907.3411f, 11.3263f };
}

void func_427(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_3A = iParam1;
	uParam0->f_3B = iParam2;
}

void func_428(var uParam0, int iParam1)
{
	func_438(0x00000001);
	func_184();
	func_7(&(uParam0->f_F4));
	func_437(uParam0);
	uParam0->f_19B = iParam1;
	if (!func_24(Global_1B416.f_4A94, 0x00000004))
	{
		func_65(&(Global_1B416.f_4A94), 0x00000004);
	}
	func_432(uParam0);
	func_430(uParam0);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
	uParam0->f_66 = (func_429(uParam0->f_19B) % uParam0->f_65);
	uParam0->f_50 = 0x00000000;
	uParam0->f_1AC = func_2();
	unk_0xD7992BEF7A9D109E("TAXI", 0x00000002);
}

int func_429(int iParam0)
{
	return Global_1B416.f_4A94.f_27[iParam0];
}

void func_430(var uParam0)
{
	switch (func_64(uParam0))
	{
		case 0x00000000:
			func_431(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000001:
			func_431(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000002:
			func_431(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000003:
			func_431(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000004:
			func_431(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000005:
			func_431(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000006:
			func_431(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000007:
			func_431(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000008:
			func_431(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000009:
			func_431(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_65 = 0x00000001;
			break;
	}
}

void func_431(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_7A = sParam1;
	uParam0->f_8F = sParam2;
	uParam0->f_90 = sParam3;
}

void func_432(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			func_436(uParam0, 0x00000003);
			func_435(uParam0, 0x0000000E);
			break;
		
		case 0x00000001:
			func_436(uParam0, 0x0000000E);
			func_435(uParam0, 0x00000008);
			break;
		
		case 0x00000002:
			func_436(uParam0, 0x00000008);
			func_435(uParam0, 0x00000007);
			break;
		
		case 0x00000003:
			func_436(uParam0, 0x0000000F);
			func_435(uParam0, 0x00000006);
			break;
		
		case 0x00000004:
			func_436(uParam0, 0x00000000);
			func_435(uParam0, 0x00000003);
			break;
		
		case 0x00000005:
			func_436(uParam0, 0x00000006);
			func_435(uParam0, 0x00000007);
			break;
		
		case 0x00000006:
			func_436(uParam0, 0x00000008);
			func_435(uParam0, 0x0000000F);
			break;
		
		case 0x00000007:
			func_436(uParam0, 0x00000008);
			func_435(uParam0, 0x0000000E);
			break;
		
		case 0x00000008:
			func_436(uParam0, 0x00000007);
			func_435(uParam0, 0x0000000F);
			break;
		
		case 0x00000009:
			func_436(uParam0, unk_0x09AC81E49EA267F7(0x00000000, 0x00000011));
			iVar0 = func_434((uParam0->f_1A2.f_2 + unk_0x09AC81E49EA267F7(0x00000001, 0x00000011)), 0x00000000, 0x00000010);
			func_435(uParam0, iVar0);
			func_433(uParam0);
			uParam0->f_1A2.f_7 = 0x00000001;
			uParam0->f_1A2.f_8 = 0x00000001;
			break;
	}
}

void func_433(var uParam0)
{
	switch (uParam0->f_1A2.f_2)
	{
		case 0x00000002:
		case 0x00000008:
			uParam0->f_1A2.f_3 = 0x00000001;
			break;
		
		case 0x00000000:
		case 0x00000003:
		case 0x00000005:
		case 0x00000009:
		case 0x0000000F:
			uParam0->f_1A2.f_3 = 0x00000002;
			break;
		
		case 0x00000004:
		case 0x0000000A:
			uParam0->f_1A2.f_3 = 0x00000003;
			break;
		
		case 0x00000001:
		case 0x00000006:
		case 0x0000000D:
			uParam0->f_1A2.f_3 = 0x00000004;
			break;
		
		case 0x0000000B:
			uParam0->f_1A2.f_3 = 0x00000005;
			break;
		
		case 0x0000000C:
		case 0x0000000E:
			uParam0->f_1A2.f_3 = 0x00000006;
			break;
		
		case 0x00000007:
			uParam0->f_1A2.f_3 = 0x00000007;
			break;
	}
}

int func_434(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return 0xFFFFFFFF;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0x00000000;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0x00000000)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0x00000000)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_435(var uParam0, int iParam1)
{
	uParam0->f_1A2.f_1 = iParam1;
}

void func_436(var uParam0, int iParam1)
{
	uParam0->f_1A2.f_2 = iParam1;
}

void func_437(var uParam0)
{
	uParam0->f_2 = unk_0x16F2683693E537C9();
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_E = { func_43() };
	uParam0->f_11 = { func_43() };
	uParam0->f_23 = 0f;
	uParam0->f_4C = 0x00000000;
	uParam0->f_31 = 0x00000000;
	uParam0->f_6D = 0x00000000;
	uParam0->f_24 = 0f;
	uParam0->f_19A = 0x00000002;
	uParam0->f_7B = "TRS_FINDING_LOCATION";
	func_185(uParam0, 0x00000020, 0x00000000);
}

void func_438(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_1B066, unk_0xBB0808A181D4745C(), 24);
		Global_1B060 = 0x00000001;
	}
	else
	{
		StringCopy(&Global_1B066, "NULL", 24);
		Global_1B060 = 0x00000000;
	}
}

void func_439()
{
	if (unk_0xB4AE0788C1587752(sLocal_282))
	{
		unk_0x8D17794CE3273D70(sLocal_282);
	}
	if (iLocal_261 != 0x00000000)
	{
		unk_0xF7E25143642732EA(iLocal_261, 0x00000000);
		iLocal_261 = 0x00000000;
	}
	unk_0x8C26F31DFF77D124();
	unk_0x10FAF14A60A0DBE1();
}

void func_440(int iParam0)
{
	Global_1AF0C.f_16 = iParam0;
}

