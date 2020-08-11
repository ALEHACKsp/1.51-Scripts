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
	var uLocal_85 = 0;
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
	vector3 vLocal_230[1] = {{ 0f, 0f, 0f } };
	struct<418> Local_231 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_232 = -1;
	var uLocal_233 = -1;
	var uLocal_234 = -1;
	var uLocal_235 = -1;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	var uLocal_245 = 0;
	vector3 vLocal_246 = { 0f, 0f, 0f };
	vector3 vLocal_247 = { 0f, 0f, 0f };
	vector3 vLocal_248 = { 0f, 0f, 0f };
	vector3 vLocal_249 = { 0f, 0f, 0f };
	vector3 vLocal_250 = { 0f, 0f, 0f };
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	bool bLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	vector3 vLocal_269[24] = "";
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	vector3 vLocal_273[24] = "";
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	vector3 vLocal_277[24] = "";
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	vector3 vLocal_281[24] = "";
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	vector3 vLocal_285[24] = "";
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	vector3 vLocal_289[24] = "";
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	vector3 vLocal_293[24] = "";
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	vector3 vLocal_297[24] = "";
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	vector3 vLocal_301[24] = "";
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	struct<6> Local_305 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 1097859072;
	var uLocal_309 = 1500;
	var uLocal_310 = 45;
	var uLocal_311 = 1103626240;
	var uLocal_312 = 5;
	int iLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	int iLocal_323[2] = { 0, 0 };
	int iLocal_324 = 0;
	var uLocal_325[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	bool bLocal_329 = 0;
	struct<28> Local_330 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 5;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
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
	vLocal_246 = { 342.6987f, -996.7599f, 28.2438f };
	vLocal_247 = { 321.1089f, -996.4285f, 28.20932f };
	vLocal_248 = { -1042.946f, -2689.55f, 12.7572f };
	vLocal_249 = { -1044.808f, -2694.138f, 12.728f };
	vLocal_250 = { 348.0136f, -993.6165f, 31.9655f };
	iLocal_262 = 0x00000001;
	iLocal_266 = 0xFFFFFFFF;
	StringCopy(&cLocal_269, "txm8_thank1M_2", 24);
	StringCopy(&cLocal_273, "txm8_thank1T_2", 24);
	StringCopy(&cLocal_277, "txm8_thank1F_2", 24);
	StringCopy(&cLocal_281, "txm8_thank2M_2", 24);
	StringCopy(&cLocal_285, "txm8_thank2T_2", 24);
	StringCopy(&cLocal_289, "txm8_thank2F_2", 24);
	StringCopy(&cLocal_293, "txm8_thank3M_2", 24);
	StringCopy(&cLocal_297, "txm8_thank3T_2", 24);
	StringCopy(&cLocal_301, "txm8_thank3F_2", 24);
	if (unk_0x2EBF608FFE6CA406(0x00000043))
	{
		func_444(0x00000002);
		func_441();
	}
	unk_0x7798376279BB5369(0x00000001);
	func_428(0x00000005);
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
	int iVar0;
	int iVar1;
	
	if (func_427(&Local_231))
	{
		if (func_426(&Local_231, bLocal_254))
		{
			func_424();
		}
	}
	else
	{
		func_423(&Local_231);
		func_389(&Local_231, &uLocal_306);
		if (Local_231.f_19A != 0x0000001C && Local_231.f_19A != 0x0000001E)
		{
			func_388(&Local_231);
		}
		func_387(&Local_231, &uLocal_264, 0x00000000);
		if (Local_231.f_19A > 0x00000002)
		{
			if (((Local_231.f_19A == 0x00000015 || Local_231.f_19A == 0x00000019) || Local_231.f_19A == 0x00000009) || Local_231.f_19A == 0x00000016)
			{
				func_386(&Local_231);
			}
			if (!func_385(&Local_231))
			{
				func_355();
			}
			else
			{
				func_335(&Local_231, "Taxi Not Driveable", func_354(&Local_231));
			}
		}
		if (Local_231.f_19A == 0x00000009 || Local_231.f_19A == 0x00000016)
		{
			func_312(&Local_231, 0x00000000, 0x00000001);
		}
		if (Local_231.f_19A == 0x00000011 || Local_231.f_19A == 0x00000015)
		{
			if (func_311(&Local_231) && func_301(0x00000001, 0x00000001, 0x00000000))
			{
				func_288(&uLocal_45, vLocal_250, 0x00000000, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			}
			else
			{
				func_287(&uLocal_45, 0x00000000, 0x00000000);
			}
			if (func_286(&Local_231) && func_301(0x00000001, 0x00000001, 0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_263, 0x00000003))
				{
					func_285("TAXI_HNT_CAM", 0xFFFFFFFF);
					unk_0x5D96D8530B3D0904(&iLocal_263, 0x00000003);
					if (unk_0xEAE0D21A50E6C7F4(iLocal_263, 0x00000004))
					{
						unk_0x0674E58A79778E99(&iLocal_263, 0x00000004);
					}
				}
			}
			else if (!unk_0xEAE0D21A50E6C7F4(iLocal_263, 0x00000004))
			{
				unk_0xA37A90C62806D848(0x00000001);
				unk_0x5D96D8530B3D0904(&iLocal_263, 0x00000004);
			}
		}
		switch (Local_231.f_19A)
		{
			case 0x00000000:
				func_282();
				func_281(&Local_231, 0x00000010, 4f, 0x00000000);
				func_278(&Local_231, vLocal_248, vLocal_249, "TaxiDerrick", func_280(0x00000000), 116.1366f, 10f);
				func_276(&Local_231);
				func_275(&Local_231, 0x00000001);
				break;
			
			case 0x00000001:
				if (func_273())
				{
					unk_0xF63400DBE3303D26("TAXI_Pursuers", &iLocal_328);
					func_272();
					func_252();
					func_251(&(vLocal_230[0x00000000 /*3*/]), "TAXI_SC_BN_07", 0x000003E8);
					func_250(&Local_231, &vLocal_230);
					func_249(&Local_231);
					Local_231.f_E = { vLocal_248 };
					func_275(&Local_231, 0x00000003);
				}
				break;
			
			case 0x00000003:
				if (func_243(&Local_231, 0x00000001))
				{
					if (!unk_0x437347B10A200C4B(Local_231.f_3, 0x00000000))
					{
						unk_0x64F9F278AB9DCA2C(Local_231.f_3, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
						unk_0x6DF7BF67E86AAE86(Local_231.f_3, iLocal_328);
						unk_0xE3A2D2E900FEFBE7(Local_231.f_3, 0x00000001);
					}
					unk_0xB5376EA942202450(-1035.326f, -2703.305f, 12.8004f, -1056.08f, -2568.675f, 12.8181f, 125f, 0x00000001, 0x00000000, 0x00000001);
					unk_0x0E2400AB9174FA81(0x00000000, 0x45897C40, Local_231.f_19D);
					unk_0x0E2400AB9174FA81(0x00000000, 0x90C7DA60, Local_231.f_19D);
					unk_0x0E2400AB9174FA81(0x00000000, 0x11A9A7E3, Local_231.f_19D);
					unk_0x71199B01895C6202(func_280(0x00000000));
					func_242(&Local_231, 0x00000001, 0x00000000);
					func_275(&Local_231, 0x00000005);
				}
				break;
			
			case 0x00000005:
				if (func_218(&Local_231, 0x00000000, 0x42200000))
				{
					Local_231.f_11 = { func_217(0x00000000) };
					iLocal_251 = 0x00000001;
					func_275(&Local_231, 0x0000000F);
				}
				break;
			
			case 0x0000000F:
				if (func_216(&Local_231))
				{
					func_213(&Local_231, 0x00000009, 0x00000001, 0x00000000, 0x00000000);
					func_212(&Local_231);
					func_211();
					func_210(func_217(0xFFFFFFFF), 0x00000000, 0x42700000);
					func_275(&Local_231, 0x00000009);
				}
				if (unk_0xDF1306B443CD3D15(Local_231.f_4, 0x00000000))
				{
					if (!unk_0xC42A92762C58E1B9(Local_231.f_2, Local_231.f_4, 0x00000000))
					{
						func_205(&Local_231);
						func_275(&Local_231, 0x00000005);
					}
				}
				break;
			
			case 0x00000009:
				if (!func_204(Local_231.f_52, 0x00004000) && func_203(&Local_231) != 0x00000023)
				{
					if (func_202(&Local_231))
					{
						if (func_286(&Local_231))
						{
							if (func_201(Local_231.f_4, Local_231.f_11, 0x00000001) <= 80f)
							{
								func_199(&uLocal_333);
								func_198(&Local_330, 0x00000004, 0x00000000);
								func_213(&Local_231, 0x00000023, 0x00000001, 0x00000001, 0x00000000);
								unk_0x060F249A9A3E3F4E(0x00000000);
							}
						}
					}
				}
				if (!iLocal_261)
				{
					if (func_202(&Local_231))
					{
						if (func_286(&Local_231))
						{
							if (func_201(Local_231.f_4, Local_231.f_11, 0x00000001) <= 100f)
							{
								unk_0x0002EE0323037BB6(333.6208f, -955.5027f, 28.4225f, 60f, 0x00000000);
								iLocal_261 = 0x00000001;
							}
						}
					}
				}
				if (func_181(&Local_231, 0x40C00000, 0x41700000, 0x42A00000))
				{
					iLocal_251 = 0x00000000;
					unk_0x7F010F50CE03A8AF(Local_231.f_9, 0x00000000);
					Local_231.f_1A = { -1047.518f, -2722.114f, 19.0823f };
					Local_231.f_22 = 238.52f;
					func_281(&Local_231, 0x00000006, 0x00000000, 0x00000000);
					func_179(&(Local_231.f_51), 0x04000000);
					func_213(&Local_231, 0x0000001C, 0x00000001, 0x00000001, 0x00000000);
					Local_231.f_1A1 = 0x0000001D;
					func_275(&Local_231, 0x00000010);
				}
				break;
			
			case 0x00000010:
				if (!unk_0xEB6A8945D1AC98A1(Local_231.f_3))
				{
					if (func_202(&Local_231))
					{
						func_177(&Local_231, vLocal_246);
					}
					else if (unk_0xD1960163A3042274(Local_231.f_3, 0x1AE73569) == 0x00000007)
					{
						unk_0xF82EA857DA10E0CD(&uLocal_245);
						unk_0xDD353D0E9C789D0E(&uLocal_245);
						unk_0x96167B03C5A77156(0x00000000, vLocal_246, 1.5f, 0x00009C40, 0.25f, 0x00000000, 0x471C4000);
						unk_0x96167B03C5A77156(0x00000000, 337.3356f, -997.7456f, 28.1318f, 3f, 0x00009C40, 0.25f, 0x00000000, 0x471C4000);
						unk_0x96167B03C5A77156(0x00000000, vLocal_247, 3f, 0x00009C40, 0.25f, 0x00000000, 0x471C4000);
						unk_0x75ABDC5F81978924(uLocal_245);
						unk_0x78ADC381772E3D54(Local_231.f_3, uLocal_245);
						unk_0xF82EA857DA10E0CD(&uLocal_245);
						unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
						func_281(&Local_231, 0x00000006, 0x00000000, 0x00000000);
						func_275(&Local_231, 0x00000011);
						iLocal_252 = 0x00000000;
					}
				}
				break;
			
			case 0x00000011:
				if (!unk_0xEB6A8945D1AC98A1(Local_231.f_3))
				{
				}
				if (!iLocal_252)
				{
					func_169();
				}
				if (func_286(&Local_231))
				{
					if (!unk_0x5A91F08DF773C39D(Local_231.f_4, Local_231.f_11, 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (func_201(Local_231.f_4, Local_231.f_11, 0x00000001) > 250f)
						{
							func_335(&Local_231, "Player abandoned his accomplice while he at the jewelry store", 0x00000008);
						}
						if (func_167(Local_231.f_3, 0x00000001) > 10f)
						{
							if (unk_0x4FA921CB56EDB0F8(Local_231.f_9) == 0x00000000 && !bLocal_254)
							{
								func_164(&Local_231, 0x00000001);
								unk_0x2F23E8033F1ADDD9("TAXI_OBJ_CYI_01");
							}
							func_213(&Local_231, 0x00000039, 0x00000001, 0x00000000, 0x00000001);
						}
					}
					else if (unk_0xE4EDC4B0E92C078B(Local_231.f_9) && unk_0x4FA921CB56EDB0F8(Local_231.f_9) > 0x00000000)
					{
						unk_0x7F010F50CE03A8AF(Local_231.f_9, 0x00000000);
						unk_0x661342B9651D16E2(Local_231.f_9, 0x00000000);
						func_213(&Local_231, 0x0000001D, 0x00000001, 0x00000000, 0x00000001);
						unk_0x2F23E8033F1ADDD9("TAXI_OBJ_CYI_1B");
					}
				}
				else
				{
					if (!iLocal_253)
					{
						iLocal_253 = 0x00000001;
					}
					func_153(&Local_231, 0x00000001);
				}
				if (((unk_0x5A91F08DF773C39D(Local_231.f_4, Local_231.f_11, 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000) && unk_0x5A91F08DF773C39D(Local_231.f_3, vLocal_247, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000)) && func_311(&Local_231)) && !iLocal_252)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_231.f_3))
					{
						if (unk_0x03068588A1FCED1A(Local_231.f_3))
						{
							unk_0x5D96D8530B3D0904(&uLocal_306, 0x00000008);
							unk_0x262EF6C6306BEA6C(Local_231.f_3, joaat("weapon_combatpistol"), 0x00000032, 0x00000000, 0x00000001);
							unk_0xD43A968A9357B799(Local_231.f_3, 335.5314f, -992.4785f, 28.38245f, 0x00002710, 0xD6FF6D61);
							unk_0x4A4806F9D471E491(Local_231.f_3, 0x00000000, 0x00000000);
							unk_0x98868AF51859FC75(Local_231.f_3, 0x00000000);
							unk_0xE121AE1BBF90E186(Local_231.f_3, 0x00000001);
							unk_0xA47B46945FF6DE74(Local_231.f_3, 339.9392f, -992.9357f, 28.3731f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
							iLocal_252 = 0x00000001;
							func_281(&Local_231, 0x00000006, 0x00000000, 0x00000000);
						}
					}
				}
				if (iLocal_252)
				{
					if ((func_151(&Local_231, 0x00000006) > 8f && unk_0x5A91F08DF773C39D(Local_231.f_4, Local_231.f_11, 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000)) && func_311(&Local_231))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_231.f_3))
						{
							if (unk_0x03068588A1FCED1A(Local_231.f_3))
							{
								unk_0x0674E58A79778E99(&uLocal_306, 0x00000008);
								unk_0x4A4806F9D471E491(Local_231.f_3, 0x00000001, 0x00000000);
								unk_0x98868AF51859FC75(Local_231.f_3, 0x00000001);
								unk_0xE121AE1BBF90E186(Local_231.f_3, 0x00000000);
								unk_0xA47B46945FF6DE74(Local_231.f_3, vLocal_247, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
								unk_0x64F9F278AB9DCA2C(Local_231.f_3, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
								if (unk_0xDF1306B443CD3D15(Local_231.f_4, 0x00000000))
								{
									unk_0x4E885A246A9D983A(Local_231.f_3, 0x00000076, 0x00000000);
									unk_0x327AAEE25F323797(Local_231.f_3);
									iVar0 = func_150(Local_231.f_4, Local_231.f_3);
									unk_0xF82EA857DA10E0CD(&uLocal_245);
									unk_0xDD353D0E9C789D0E(&uLocal_245);
									unk_0xB87AD42E3FA06BDE(0x00000000, 343.9973f, -998.308f, 28.2314f, 3f, 0x00000000, 0x00000000, 0x000C00AB, 0xBF800000);
									unk_0xD93EE6549113F9E1(0x00000000, 0x00000001);
									unk_0x9294582561BECEE7(0x00000000, 0x00000000);
									unk_0x5B1D360B9C6F0A09(0x00000000, Local_231.f_4, 0x00009C40, iVar0, 2f, 0x00000001, 0x00000000);
									unk_0x75ABDC5F81978924(uLocal_245);
									unk_0x78ADC381772E3D54(Local_231.f_3, uLocal_245);
									unk_0xF82EA857DA10E0CD(&uLocal_245);
									func_281(&Local_231, 0x00000006, 0x00000000, 0x00000000);
									if (unk_0xE4EDC4B0E92C078B(Local_231.f_9))
									{
										unk_0x7F010F50CE03A8AF(Local_231.f_9, 0x00000000);
										unk_0x661342B9651D16E2(Local_231.f_9, 0x00000000);
									}
									unk_0x9237814869823B3E(Local_231.f_3, "MOVE_P_M_ZERO_RUCKSACK");
									func_275(&Local_231, 0x00000015);
								}
							}
						}
					}
				}
				break;
			
			case 0x00000015:
				if (func_151(&Local_231, 0x00000006) > 23f)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_231.f_3))
					{
						unk_0xA3BF0AA5A2608191(Local_231.f_3);
						unk_0x2C4A1A0F54A166E8(Local_231.f_3, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
					}
					func_335(&Local_231, "player didn't let teh Passenger in", 0x00000008);
				}
				else if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
				{
				}
				if ((unk_0x5A91F08DF773C39D(Local_231.f_3, 347.8621f, -983.6118f, 31.30889f, 4f, 3f, 3f, 0x00000000, 0x00000001, 0x00000000) && unk_0x5A91F08DF773C39D(Local_231.f_4, Local_231.f_11, 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000)) && iLocal_252)
				{
					unk_0xDA55CDFB97015579(344.5906f, -996.409f, 28.30219f, 0x00000004, 0x3F000000, 0x00000001, 0x00000000, 0x3F800000, 0x00000000);
					unk_0xEB819BD1E585E9CB(iLocal_266, "Burglar_Bell", 340.8f, -965.4f, 28.4f, "Generic_Alarms", 0x00000000, 0x00000000, 0x00000000);
					iLocal_252 = 0x00000000;
				}
				if (func_202(&Local_231))
				{
					unk_0x060F249A9A3E3F4E(0x00000001);
					unk_0xCB9603FE12CFDEF4(unk_0xA30EC016B12C03E4(), 0x00000002, 0x00000000);
					unk_0x56EA5D248F36A081(unk_0xA30EC016B12C03E4(), 0x00000000);
					unk_0x8BC9595FD2792B5D("TAXI_CUT_U_IN");
					func_210(func_217(0x00000000), 0x00000001, 0x42700000);
					unk_0x0E2400AB9174FA81(0x00000005, Local_231.f_19D, 0xA49E591C);
					func_148(0x00000006, 0x00000002);
					func_213(&Local_231, 0x00000031, 0x00000001, 0x00000000, 0x00000000);
					if (unk_0xE4EDC4B0E92C078B(Local_231.f_9))
					{
						unk_0x661342B9651D16E2(Local_231.f_9, 0x00000000);
						unk_0x142CC44DB769B57E(&(Local_231.f_9));
					}
					func_287(&uLocal_45, 0x00000000, 0x00000000);
					func_281(&Local_231, 0x00000006, 0x00000000, 0x00000000);
					func_281(&Local_231, 0x00000009, 0x00000000, 0x00000000);
					func_281(&Local_231, 0x00000007, 0x00000000, 0x00000000);
					func_275(&Local_231, 0x00000019);
				}
				break;
			
			case 0x00000019:
				func_147(&Local_231, &(Local_231.f_2B));
				if (func_204(Local_231.f_2C, 0x00000004))
				{
					func_145(&(Local_231.f_2C), 0x00000004);
				}
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) > 0x00000000)
				{
					if (!func_144(&Local_231))
					{
						if (!unk_0x25037C66EB32B076())
						{
							if ((func_151(&Local_231, 0x00000010) > unk_0x79833B02DBD2A244(15f, 25f) && iLocal_268 < 0x00000008) || func_151(&Local_231, 0x00000010) > unk_0x79833B02DBD2A244(25f, 35f))
							{
								if (func_203(&Local_231) != 0x00000033)
								{
									func_213(&Local_231, 0x00000033, 0x00000001, 0x00000000, 0x00000000);
									iLocal_268++;
								}
								else
								{
									func_242(&Local_231, 0x00000001, 0x00000000);
								}
							}
						}
					}
				}
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001 && func_151(&Local_231, 0x00000006) > 10f)
				{
					unk_0x8910D3D58E0132B8("TAXI_CUT_U_IN");
					func_275(&Local_231, 0x0000001A);
					func_179(&(Local_231.f_2C), 0x00000001);
				}
				break;
			
			case 0x0000001A:
				func_147(&Local_231, &(Local_231.f_2B));
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) > 0x00000000)
				{
					if (!func_144(&Local_231))
					{
						if (!unk_0x25037C66EB32B076())
						{
							if ((func_151(&Local_231, 0x00000010) > unk_0x79833B02DBD2A244(15f, 25f) && iLocal_268 < 0x00000008) || func_151(&Local_231, 0x00000010) > unk_0x79833B02DBD2A244(25f, 35f))
							{
								if (func_203(&Local_231) != 0x00000033)
								{
									func_213(&Local_231, 0x00000033, 0x00000001, 0x00000000, 0x00000000);
									iLocal_268++;
								}
								else
								{
									func_242(&Local_231, 0x00000001, 0x00000000);
								}
							}
						}
					}
				}
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001 && func_151(&Local_231, 0x00000009) > 2f)
				{
					if (func_151(&Local_231, 0x00000009) <= 180f)
					{
						func_143(&Local_231, 0x00000000);
					}
					unk_0x0E2400AB9174FA81(0x00000000, Local_231.f_19D, 0xA49E591C);
					Local_231.f_11 = { func_217(0x00000005) };
					func_148(0x00000007, 0x00000002);
					func_142(&Local_231);
					func_141(&Local_231, 0x00000009, 0x00000000);
					func_141(&Local_231, 0x00000002, 0x00000000);
					func_141(&Local_231, 0x00000003, 0x00000000);
					if (!func_204(Local_231.f_2C, 0x00000004))
					{
						func_179(&(Local_231.f_2C), 0x00000004);
					}
					Local_231.f_74 = 0x00000001;
					func_275(&Local_231, 0x0000000E);
				}
				break;
			
			case 0x0000000E:
				if (!func_139(&Local_231))
				{
					func_136();
					func_164(&Local_231, 0x00000001);
					func_135();
					func_275(&Local_231, 0x00000016);
				}
				break;
			
			case 0x00000016:
				if (!bLocal_256)
				{
					if (Local_231.f_1A1 == 0x00000021 && unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001)
					{
						bLocal_256 = 0x00000001;
						func_179(&(Local_231.f_2C), 0x00000004);
						func_134(&iLocal_266);
						Local_330.f_1B++;
					}
				}
				if (bLocal_256)
				{
					if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) > 0x00000000)
					{
						if (unk_0xE4EDC4B0E92C078B(Local_231.f_9))
						{
							unk_0x661342B9651D16E2(Local_231.f_9, 0x00000000);
							unk_0x142CC44DB769B57E(&(Local_231.f_9));
						}
					}
					else
					{
						func_164(&Local_231, 0x00000001);
					}
				}
				if (func_204(Local_231.f_2C, 0x00000001) && bLocal_256)
				{
					func_145(&(Local_231.f_2C), 0x00000001);
					if (bLocal_329)
					{
					}
				}
				if (!func_204(Local_231.f_52, 0x00008000) && func_203(&Local_231) != 0x00000024)
				{
					if (func_202(&Local_231))
					{
						if (func_286(&Local_231))
						{
							if (func_201(Local_231.f_4, Local_231.f_11, 0x00000001) <= 300f)
							{
								if (!func_133())
								{
									func_213(&Local_231, 0x00000024, 0x00000001, 0x00000001, 0x00000000);
								}
								else
								{
									func_131();
								}
								if (iLocal_255 && !iLocal_258)
								{
									unk_0x536F1BE96C726C4B(Local_231.f_11, 3f, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									iLocal_326 = unk_0x7D6CA5F52B3748BF(-1033.188f, -2743.18f, 19f, -1047.948f, -2739.18f, 20.20066f, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
									iLocal_323[0x00000000] = unk_0x36F2404464202779(0x00000006, func_280(0x00000003), -1036.502f, -2742.986f, 20.16969f, 0f, 0x00000001, 0x00000001);
									iLocal_323[0x00000001] = unk_0x36F2404464202779(0x00000006, func_280(0x00000003), -1043.706f, -2739.234f, 19.16969f, 0f, 0x00000001, 0x00000001);
									unk_0x262EF6C6306BEA6C(iLocal_323[0x00000000], joaat("weapon_carbinerifle"), 0xFFFFFFFF, 0x00000001, 0x00000001);
									unk_0x262EF6C6306BEA6C(iLocal_323[0x00000001], joaat("weapon_carbinerifle"), 0xFFFFFFFF, 0x00000001, 0x00000001);
									if (unk_0x4742C50E93110B10(-1036.502f, -2742.986f, 20.16969f, 5f, 0x00000001))
									{
										unk_0x4A35AD9FC803369E(iLocal_323[0x00000000], -1036.502f, -2742.986f, 20.16969f, 2.5f, 0x00000000);
									}
									else
									{
										unk_0x509B8296EBA9B408(iLocal_323[0x00000000], "WORLD_HUMAN_GUARD_STAND_ARMY", 0x00000000, 0x00000000);
									}
									if (unk_0x4742C50E93110B10(-1043.706f, -2739.234f, 19.16969f, 5f, 0x00000001))
									{
										unk_0x4A35AD9FC803369E(iLocal_323[0x00000001], -1043.706f, -2739.234f, 19.16969f, 2.5f, 0x00000000);
									}
									else
									{
										unk_0x509B8296EBA9B408(iLocal_323[0x00000001], "WORLD_HUMAN_GUARD_STAND_ARMY", 0x00000000, 0x00000000);
									}
									iLocal_258 = 0x00000001;
								}
							}
						}
					}
				}
				if (func_181(&Local_231, 0x40C00000, 0x41700000, 0x42A00000))
				{
					Local_330 = 0x00000000;
					unk_0x142CC44DB769B57E(&(Local_231.f_9));
					func_129(&Local_231);
					func_125(&Local_231);
					func_124();
					func_275(&Local_231, 0x0000001B);
				}
				break;
			
			case 0x0000001B:
				if (func_122() && !iLocal_257)
				{
					func_121(&Local_231, &iVar1);
					iLocal_244 = unk_0x7707E48765093646(joaat("p_banknote_s"), unk_0x68F4C0EC296D3901(Local_231.f_3, 0x00000001), 0x00000001, 0x00000001, 0x00000000);
					unk_0x9F528B1B53FBC5D9(iLocal_244, Local_231.f_3, 0x0000DEAD, 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
					if (!unk_0xEB6A8945D1AC98A1(Local_231.f_3) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0xC6EB89C59F2AF6B8(Local_231.f_3, "oddjobs@taxi@cyi", func_120(iVar1), 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "oddjobs@taxi@cyi", func_119(iVar1), 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xD65E6E13E145467B(iLocal_244, func_118(iVar1), "oddjobs@taxi@cyi", 1f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					}
					iLocal_257 = 0x00000001;
				}
				if (func_110(&Local_231, 0x00000001))
				{
					unk_0xF82EA857DA10E0CD(&uLocal_245);
					unk_0xDD353D0E9C789D0E(&uLocal_245);
					unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
					unk_0xD93EE6549113F9E1(0x00000000, 0x00000000);
					unk_0xBC43ED9FE28DB191(0x00000000);
					unk_0x96167B03C5A77156(0x00000000, Local_231.f_1D, 1f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
					unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_STAND_MOBILE", 0x00000000, 0x00000001);
					unk_0x75ABDC5F81978924(uLocal_245);
					unk_0x78ADC381772E3D54(Local_231.f_3, uLocal_245);
					unk_0xFADC0A217229F6B5(Local_231.f_3, 0x00000001);
					unk_0x9237814869823B3E(Local_231.f_3, "MOVE_P_M_ZERO_RUCKSACK");
					func_275(&Local_231, 0x0000001D);
				}
				break;
			
			case 0x0000001D:
				if (func_75(&Local_231, &iLocal_313))
				{
					if (iLocal_255 || iLocal_265 == 0xFFFFFFFF)
					{
						func_275(&Local_231, 0x0000001C);
					}
					else
					{
						func_12(0x00000001, &Local_231, 0x00000001);
						func_275(&Local_231, 0x0000001E);
					}
				}
				break;
			
			case 0x0000001C:
				if (func_10())
				{
					func_12(0x00000001, &Local_231, 0x00000001);
					func_275(&Local_231, 0x0000001E);
				}
				break;
			
			case 0x0000001E:
				func_441();
				break;
			}
	}
}

int func_10()
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	
	vVar1 = { vVar1 };
	if (iLocal_265 > 0x00000002)
	{
		unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
	}
	switch (iLocal_265)
	{
		case 0xFFFFFFFF:
			iLocal_265++;
			break;
		
		case 0x00000000:
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			unk_0x060F249A9A3E3F4E(0x00000000);
			unk_0xF82EA857DA10E0CD(&uVar0);
			unk_0xDD353D0E9C789D0E(&uVar0);
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000100);
			unk_0x96167B03C5A77156(0x00000000, -1041.9f, -2745.113f, 20.3644f, 1.25f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
			unk_0x75ABDC5F81978924(uVar0);
			unk_0x78ADC381772E3D54(Local_231.f_3, uVar0);
			unk_0xF82EA857DA10E0CD(&uVar0);
			iLocal_327 = unk_0x122AAB0B1D6F55AD(func_280(0x00000004), -1067.146f, -2579.632f, 19.7762f, 150f, 0x00000001, 0x00000001, 0x00000000);
			iLocal_324 = unk_0x852A19533F896693(iLocal_327, 0x0000001A, func_280(0x00000003), 0xFFFFFFFF, 0x00000001, 0x00000001);
			func_281(&Local_231, 0x00000009, 0x00000000, 0x00000000);
			iLocal_265++;
			break;
		
		case 0x00000001:
			if (func_151(&Local_231, 0x00000009) > 0.5f)
			{
				if (!unk_0x437347B10A200C4B(Local_231.f_3, 0x00000000))
				{
					if (!unk_0x437347B10A200C4B(iLocal_323[0x00000000], 0x00000000))
					{
						unk_0x0C8C0C840C2D1AD2(iLocal_323[0x00000000], Local_231.f_3, 0xFFFFFFFF, 0x00000801, 0x00000003);
						func_8(&(Local_231.f_F4), 0x00000004, iLocal_323[0x00000000], "TaxiOJCop1", 0x00000000, 0x00000001);
						unk_0x4F39CC3882DD074E(iLocal_323[0x00000000], "TaxiOJCop1");
					}
					if (!unk_0x437347B10A200C4B(iLocal_323[0x00000001], 0x00000000))
					{
						unk_0x0C8C0C840C2D1AD2(iLocal_323[0x00000001], Local_231.f_3, 0xFFFFFFFF, 0x00000801, 0x00000003);
					}
				}
				iLocal_265++;
			}
			break;
		
		case 0x00000002:
			if ((!unk_0x437347B10A200C4B(iLocal_323[0x00000000], 0x00000000) && !unk_0x437347B10A200C4B(iLocal_323[0x00000001], 0x00000000)) && !unk_0x437347B10A200C4B(Local_231.f_3, 0x00000000))
			{
				if (unk_0x3D1053F9EB43B7AD(Local_231.f_3, -1032.675f, -2738.775f, 19.16969f, -1041.51f, -2733.615f, 21.54504f, 2f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0xDD353D0E9C789D0E(&uVar0);
					unk_0x161356BF7864C47B(0x00000000, Local_231.f_3, Local_231.f_3, 1f, 0x00000000, 4f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
					unk_0x9BE7E7B6B488CC55(0x00000000, Local_231.f_3, 0xFFFFFFFF, 0x00000000);
					unk_0x75ABDC5F81978924(uVar0);
					unk_0x78ADC381772E3D54(iLocal_323[0x00000000], uVar0);
					unk_0xF82EA857DA10E0CD(&uVar0);
					unk_0xFADC0A217229F6B5(iLocal_323[0x00000000], 0x00000001);
					unk_0xDD353D0E9C789D0E(&uVar0);
					unk_0x93D47DFD0AE94949(0x00000000, 0x000005DC);
					unk_0x9BE7E7B6B488CC55(0x00000000, Local_231.f_3, 0x000007D0, 0x00000000);
					unk_0x161356BF7864C47B(0x00000000, Local_231.f_3, Local_231.f_3, 1f, 0x00000000, 4f, 4f, 0x00000001, 0x00000000, 0xC6EE6B4C);
					unk_0x9BE7E7B6B488CC55(0x00000000, Local_231.f_3, 0xFFFFFFFF, 0x00000000);
					unk_0x75ABDC5F81978924(uVar0);
					unk_0x78ADC381772E3D54(iLocal_323[0x00000001], uVar0);
					unk_0xF82EA857DA10E0CD(&uVar0);
					unk_0xFADC0A217229F6B5(iLocal_323[0x00000001], 0x00000001);
					unk_0xDD353D0E9C789D0E(&uVar0);
					unk_0xF96A174EE26D7588(0x00000000, iLocal_323[0x00000000], 0x00000003);
					unk_0x0C8C0C840C2D1AD2(0x00000000, iLocal_323[0x00000000], 0xFFFFFFFF, 0x00000801, 0x00000003);
					unk_0x93D47DFD0AE94949(0x00000000, 0x000003E8);
					unk_0xF9B5DB58254657F1(0x00000000, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000);
					unk_0x75ABDC5F81978924(uVar0);
					unk_0x78ADC381772E3D54(Local_231.f_3, uVar0);
					unk_0xF82EA857DA10E0CD(&uVar0);
					func_213(&Local_231, 0x00000036, 0x00000001, 0x00000000, 0x00000000);
					iLocal_267 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uLocal_325, 0xFFFFFFFF);
					iVar2 = 0x00000000;
					while (iVar2 < iLocal_267)
					{
						if (((((uLocal_325[iVar2] != unk_0x16F2683693E537C9() && uLocal_325[iVar2] != Local_231.f_3) && uLocal_325[iVar2] != iLocal_323[0x00000001]) && uLocal_325[iVar2] != iLocal_323[0x00000000]) && uLocal_325[iVar2] != iLocal_324) && !unk_0xAF6690C489CC6203(uLocal_325[iVar2]))
						{
							unk_0x73270B3C9CC833FD(uLocal_325[iVar2], 0x00000001, 0x00000001);
							unk_0xF3268524E9BE6D6E(uLocal_325[iVar2], Local_231.f_3, 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						}
						iVar2++;
					}
					func_281(&Local_231, 0x00000009, 0x00000000, 0x00000000);
					iLocal_265++;
				}
			}
			break;
		
		case 0x00000003:
			if (func_151(&Local_231, 0x00000009) > 5f && !func_133())
			{
				unk_0x0E2400AB9174FA81(0x00000005, iLocal_328, 0xA49E591C);
				unk_0x0E2400AB9174FA81(0x00000005, 0xA49E591C, iLocal_328);
				unk_0xCAE036C45E7FC720(Local_231.f_3, &iVar3, 0x00000001);
				if (iVar3 == joaat("weapon_unarmed"))
				{
					unk_0x262EF6C6306BEA6C(Local_231.f_3, joaat("weapon_combatpistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
				}
				unk_0xAFF39FB306F8E232(Local_231.f_3, 0x0000000D, 0x00000001);
				unk_0xAFF39FB306F8E232(Local_231.f_3, 0x00000018, 0x00000001);
				unk_0x3CC33E4E9CE523F4(Local_231.f_3, 0x00000002);
				unk_0xC978532B427F303B(Local_231.f_3, 0x00000001);
				unk_0x298903DD96203C2C(Local_231.f_3, 0x00000050);
				unk_0x7C8478BF70C1E072(Local_231.f_3, 50f, 0x00000000);
				func_281(&Local_231, 0x00000009, 0x00000000, 0x00000000);
				iLocal_265++;
			}
			if ((unk_0xB87D13D0C064E9D1(iLocal_323[0x00000000], unk_0x16F2683693E537C9(), 0x00000001) || unk_0xB87D13D0C064E9D1(iLocal_323[0x00000001], unk_0x16F2683693E537C9(), 0x00000001)) && !unk_0xEB6A8945D1AC98A1(Local_231.f_3))
			{
				unk_0xF3268524E9BE6D6E(Local_231.f_3, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				func_281(&Local_231, 0x00000009, 0x00000000, 0x00000000);
				iLocal_265++;
			}
			break;
		
		case 0x00000004:
			if (unk_0x437347B10A200C4B(Local_231.f_3, 0x00000000))
			{
				if (!unk_0x437347B10A200C4B(iLocal_323[0x00000000], 0x00000000))
				{
					unk_0xA3BF0AA5A2608191(iLocal_323[0x00000000]);
					if (unk_0x4742C50E93110B10(-1036.502f, -2742.986f, 20.16969f, 5f, 0x00000001))
					{
						unk_0x4A35AD9FC803369E(iLocal_323[0x00000000], -1036.502f, -2742.986f, 20.16969f, 1f, 0x00000000);
					}
					else
					{
						unk_0x509B8296EBA9B408(iLocal_323[0x00000000], "WORLD_HUMAN_GUARD_STAND_ARMY", 0x00000000, 0x00000000);
					}
					unk_0xFADC0A217229F6B5(iLocal_323[0x00000000], 0x00000001);
				}
				if (!unk_0x437347B10A200C4B(iLocal_323[0x00000001], 0x00000000))
				{
					unk_0xA3BF0AA5A2608191(iLocal_323[0x00000001]);
					vVar1 = { unk_0x68F4C0EC296D3901(Local_231.f_3, 0x00000000) };
					unk_0xF82EA857DA10E0CD(&uVar0);
					unk_0xDD353D0E9C789D0E(&uVar0);
					unk_0x4AA5B7135D59B3E5(0x00000000, vVar1, vVar1, 1f, 0x00000000, 3f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C);
					unk_0x731C6942D48648D6(0x00000000, vVar1, 0x000001F4, 0x00000000, 0x00000000);
					unk_0xDBE4EC9C88839074(0x00000000, vVar1, 0xFFFFFFFF, 0x00000801, 0x00000003);
					unk_0x75ABDC5F81978924(uVar0);
					unk_0x78ADC381772E3D54(iLocal_323[0x00000001], uVar0);
					unk_0xFADC0A217229F6B5(iLocal_323[0x00000000], 0x00000001);
				}
				return 0x00000001;
			}
			else
			{
				if (func_151(&Local_231, 0x00000009) > 6f)
				{
					func_213(&Local_231, 0x0000008C, 0x00000001, 0x00000000, 0x00000001);
					func_281(&Local_231, 0x00000009, 0x00000000, 0x00000000);
				}
				if (unk_0x437347B10A200C4B(iLocal_323[0x00000000], 0x00000000) && unk_0x437347B10A200C4B(iLocal_323[0x00000001], 0x00000000))
				{
					unk_0xA3BF0AA5A2608191(Local_231.f_3);
					unk_0xF3268524E9BE6D6E(Local_231.f_3, unk_0x16F2683693E537C9(), 300f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
				if (func_167(Local_231.f_3, 0x00000001) > 50f)
				{
					return 0x00000001;
				}
			}
			func_281(&Local_231, 0x00000009, 0x00000000, 0x00000000);
			iLocal_265++;
			break;
		
		case 0x00000005:
			if (func_151(&Local_231, 0x00000009) > 2f)
			{
				func_281(&Local_231, 0x00000009, 0x00000000, 0x00000000);
				iLocal_265++;
			}
			break;
		
		case 0x00000006:
			if (func_151(&Local_231, 0x00000009) > 2f)
			{
				vVar1 = { unk_0x5293C88BD2F4DE13(iLocal_327, func_11(0x00000005)) };
				func_281(&Local_231, 0x00000009, 0x00000000, 0x00000000);
				iLocal_265++;
			}
			break;
		
		case 0x00000007:
			if (func_151(&Local_231, 0x00000009) >= 1f)
			{
				iLocal_265++;
			}
			break;
		
		case 0x00000008:
			iLocal_265++;
			break;
		
		case 0x00000009:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

Vector3 func_11(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			vVar0 = { -1040.486f, -2726.058f, 21.4491f };
			break;
		
		case 0x00000004:
			vVar0 = { -1044.847f, -2726.239f, 20.2197f };
			break;
		
		case 0x00000006:
			vVar0 = { -1045.252f, -2733.154f, 23.9084f };
			break;
		
		case 0x00000005:
			vVar0 = { -1053.653f, -2720.5f, 20.1615f };
			break;
		
		case 0x00000001:
			vVar0 = { -1042.008f, -2729.232f, 21.2022f };
			break;
		
		case 0x00000002:
			vVar0 = { -1049.799f, -2725.069f, 20.7481f };
			break;
		
		case 0x00000003:
			vVar0 = { -1043.888f, -2723.783f, 20.6874f };
			break;
		
		case 0x00000007:
			vVar0 = { -1041.917f, -2746.239f, 22.2494f };
			break;
		
		case 0x00000008:
			vVar0 = { -1041.811f, -2739.353f, 21.2173f };
			break;
	}
	return vVar0;
}

void func_12(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_51(uParam1);
		if (!unk_0xEB6A8945D1AC98A1(uParam1->f_3))
		{
			unk_0x4E885A246A9D983A(uParam1->f_3, 0x0000013D, 0x00000001);
		}
	}
	else
	{
		func_148(0x00000001, 0x00000000);
	}
	func_13(uParam1, bParam2);
}

void func_13(var uParam0, bool bParam1)
{
	func_50(uParam0);
	if (func_133())
	{
		func_48();
	}
	func_46();
	unk_0x790015DC92C918E2();
	unk_0xA37A90C62806D848(0x00000001);
	func_41(0x00000000);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		unk_0x44A200C9B6E1CEA6(uParam0->f_4, 0x00000000);
		unk_0x78CCB85A0DC35709(uParam0->f_4);
		unk_0x7AA3AFA47C4179D1(uParam0->f_4);
	}
	func_37(uParam0->f_E, 0x00000001);
	func_210(uParam0->f_E, 0x00000001, 0x42700000);
	func_36(&(uParam0->f_F4), 0x00000003);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000001);
	if (func_33())
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
	}
	unk_0x2D23BE319D971F4C(0x00000001);
	func_23(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBFE31971E49FA500(0x00000001);
	unk_0x8BCB70EB440DED83(0x00000001);
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		unk_0x9A8DDC7C522F5BF5(*uParam0, 0x00000000);
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0xF3039DE1FDB4F6FD(0x00000001);
	}
	if (func_204(Global_1B416.f_4A94, 0x00000004))
	{
		func_145(&(Global_1B416.f_4A94), 0x00000004);
		unk_0xAB8E2DDC7AF955E0(func_22(), 0x00000000);
	}
	if (bParam1)
	{
		func_21(uParam0);
	}
	func_20(uParam0);
	unk_0x8D17794CE3273D70("gestures@m@standing@casual");
	unk_0x8D17794CE3273D70("oddjobs@taxi@");
	unk_0x8D17794CE3273D70("oddjobs@towingcome_here");
	if (unk_0x58424C49F8924842())
	{
		func_18(uParam0->f_19B);
	}
	if (!unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
	}
	unk_0x11E0F00830F70E15(SYSTEM::ROUND((func_14(&iLocal_82) * 1000f)), 0x0000000C, 0x00000000);
}

float func_14(var uParam0)
{
	if (func_17(uParam0))
	{
		if (func_16(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_15(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_15(bool bParam0)
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

bool func_16(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

bool func_17(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

void func_18(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0x00000000] != 0x00000000)
	{
		MemCopy(&uVar0, {func_19(iParam0)}, 0x00000006);
		if (!unk_0x2EBF5002C6B6A06C(&uVar0))
		{
		}
	}
}

struct<8> func_19(int iParam0)
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

void func_20(var uParam0)
{
	unk_0x5A5CC21130AD387A(uParam0->f_33[0x00000000]);
}

void func_21(var uParam0)
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

int func_22()
{
	return joaat("taxi");
}

void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_32(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_31())
			{
				Global_4C1E.f_1 = 0x00000003;
			}
			Global_5145 = 0x00000005;
		}
		func_30(0x00000001, iParam3, iParam2, 0x00000000);
		Global_F04E = 0x00000001;
		Global_12064 = 0x00000001;
		Global_12B4C = 0x00000001;
	}
	else
	{
		func_32(0x00000000);
		unk_0x17D339215F817B98();
		Global_F04E = 0x00000000;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
		func_30(0x00000000, iParam3, iParam2, 0x00000000);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_28(unk_0xD803B885F5E47A62())) && !func_25(unk_0xD803B885F5E47A62(), 0x00000000)) && !func_24()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_28(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), 0x00000000);
		}
		Global_12B4C = 0x00000000;
	}
}

bool func_24()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0x0000000E);
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

int func_28(int iParam0)
{
	if (func_25(iParam0, 0x00000000))
	{
		return 0x00000001;
	}
	if (func_29())
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

bool func_29()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_30(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_31()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_32(int iParam0)
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

int func_33()
{
	if (!func_35() && !func_34())
	{
		if (!unk_0x04B2EAD6D5301B36(unk_0xA30EC016B12C03E4()))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_34()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcamera")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_35()
{
	if (unk_0x8A22C4C08282BF26(joaat("appinternet")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_36(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

void func_37(vector3 vParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_39(vParam0, func_40(), 0x00000000))
	{
		vVar0 = { func_38(vParam0, 1f, -30f, -30f, -10f) };
		vVar1 = { func_38(vParam0, 1f, 30f, 30f, 10f) };
		unk_0xE342F209E49C5314(vVar0, vVar1, bParam1, 0x00000001);
	}
}

Vector3 func_38(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)
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

bool func_39(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_40()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_44())
		{
			func_42(0x00000001, 0x00000001);
		}
		else
		{
			func_42(0x00000000, 0x00000000);
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
	if (!func_31())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_43(0x00000000))
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

int func_43(int iParam0)
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

bool func_44()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_45()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_46()
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
					func_47(Global_175BD[iVar0 /*17*/].f_5, 0x00000001);
				}
			}
		}
		iVar0++;
	}
}

void func_47(int iParam0, bool bParam1)
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

void func_48()
{
	Global_4CD7 = 0x00000000;
	func_49();
}

void func_49()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_50(var uParam0)
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

void func_51(var uParam0)
{
	func_148(0x00000000, 0x00000000);
	if (uParam0->f_19B != 0x00000009)
	{
		func_444(0x00000001);
		func_61(0x0000000F, 0x00000001);
	}
	func_179(&(Global_1B416.f_4A94), 0x00000400);
	if (!func_204(Global_1B416.f_4A94, 0x00000040))
	{
		func_52(func_59(func_60(uParam0)), 0x00000000, 0x00000000);
	}
}

void func_52(int iParam0, int iParam1, int iParam2)
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
		func_58((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_53();
	}
}

void func_53()
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
		func_57(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_56() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_54();
				}
			}
		}
	}
}

int func_54()
{
	if (func_55(0x00000000))
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

bool func_55(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_56()
{
	return Global_7830;
}

int func_57(int iParam0, int iParam1)
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

int func_58(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_27();
	}
	iVar0 = 0x00000000;
	if (iParam0 >= 0x00000000 && iParam0 < 0x000000C0)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000000), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000000) - unk_0x04D746E8DA20611E((iParam0 - 0x00000000)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000000C0 && iParam0 < 0x00000180)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000000C0), 0x00000001, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x000000C0) - unk_0x04D746E8DA20611E((iParam0 - 0x000000C0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000201 && iParam0 < 0x000002C1)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x00000201), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000201) - unk_0x04D746E8DA20611E((iParam0 - 0x00000201)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000002C1 && iParam0 < 0x00000501)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0x000002C1), 0x00000001, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x000002C1) - unk_0x04D746E8DA20611E((iParam0 - 0x000002C1)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000C27 && iParam0 < 0x00000F27)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000C27), 0x00000000, 0x00000001, iParam2);
		iVar1 = ((iParam0 - 0x00000C27) - unk_0x04D746E8DA20611E((iParam0 - 0x00000C27)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00000B67 && iParam0 < 0x00000C27)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 0x00000B67), 0x00000000, 0x00000000, 0x00000000);
		iVar1 = ((iParam0 - 0x00000B67) - unk_0x04D746E8DA20611E((iParam0 - 0x00000B67)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000106F && iParam0 < 0x000010EF)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 0x0000106F), 0x00000000, 0x00000001, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000106F) - unk_0x04D746E8DA20611E((iParam0 - 0x0000106F)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000010EF && iParam0 < 0x0000112F)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 0x000010EF), 0x00000000, 0x00000000, 0x00000000, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000010EF) - unk_0x04D746E8DA20611E((iParam0 - 0x000010EF)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x0000178D && iParam0 < 0x0000190D)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 0x0000178D), 0x00000000, 0x00000001, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x0000178D) - unk_0x04D746E8DA20611E((iParam0 - 0x0000178D)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001CD9 && iParam0 < 0x00001DD9)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 0x00001CD9), 0x00000000, 0x00000001, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001CD9) - unk_0x04D746E8DA20611E((iParam0 - 0x00001CD9)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00001C99 && iParam0 < 0x00001CD9)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 0x00001C99), 0x00000000, 0x00000000, 0x00000000, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00001C99) - unk_0x04D746E8DA20611E((iParam0 - 0x00001C99)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00002491 && iParam0 < 0x00002551)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 0x00002491), 0x00000000, 0x00000001, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00002491) - unk_0x04D746E8DA20611E((iParam0 - 0x00002491)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003C09 && iParam0 < 0x00003CC9)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 0x00003C09), 0x00000000, 0x00000001, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003C09) - unk_0x04D746E8DA20611E((iParam0 - 0x00003C09)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003CCA && iParam0 < 0x00003E4A)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 0x00003CCA), 0x00000000, 0x00000001, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003CCA) - unk_0x04D746E8DA20611E((iParam0 - 0x00003CCA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00003E4A && iParam0 < 0x00003E8A)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 0x00003E4A), 0x00000000, 0x00000001, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00003E4A) - unk_0x04D746E8DA20611E((iParam0 - 0x00003E4A)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000046B2 && iParam0 < 0x000046F2)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 0x000046B2), 0x00000000, 0x00000001, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000046B2) - unk_0x04D746E8DA20611E((iParam0 - 0x000046B2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00005632 && iParam0 < 0x000056B2)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 0x00005632), 0x00000000, 0x00000001, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00005632) - unk_0x04D746E8DA20611E((iParam0 - 0x00005632)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006182 && iParam0 < 0x000063C2)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 0x00006182), 0x00000000, 0x00000001, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006182) - unk_0x04D746E8DA20611E((iParam0 - 0x00006182)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x000068BA && iParam0 < 0x00006A7A)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 0x000068BA), 0x00000000, 0x00000001, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x000068BA) - unk_0x04D746E8DA20611E((iParam0 - 0x000068BA)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006DC2 && iParam0 < 0x00006EC2)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 0x00006DC2), 0x00000000, 0x00000001, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006DC2) - unk_0x04D746E8DA20611E((iParam0 - 0x00006DC2)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00006EC3 && iParam0 < 0x00006F43)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 0x00006EC3), 0x00000000, 0x00000001, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00006EC3) - unk_0x04D746E8DA20611E((iParam0 - 0x00006EC3)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007613 && iParam0 < 0x00007693)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 0x00007613), 0x00000000, 0x00000001, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007613) - unk_0x04D746E8DA20611E((iParam0 - 0x00007613)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 0x00007693 && iParam0 < 0x00007713)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 0x00007693), 0x00000000, 0x00000001, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 0x00007693) - unk_0x04D746E8DA20611E((iParam0 - 0x00007693)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_59(int iParam0)
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

int func_60(var uParam0)
{
	return uParam0->f_19B;
}

int func_61(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_62(iParam0, iParam1);
}

int func_62(int iParam0, int iParam1)
{
	if (func_74(0x0000000E) && !func_73(iParam0))
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
	if (func_72(&Global_4127F1))
	{
		if (func_70(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_63(&Global_4127F1, iParam0))
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

int func_63(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_74(0x0000000E) && !func_73(iParam1))
	{
		return 0x00000000;
	}
	if (func_70(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_69(uParam0) < 0f)
	{
		func_68(uParam0, 0x00000000);
	}
	func_66(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_64(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_64(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_74(0x0000000E) && !func_73(iParam1))
	{
		return 0x00000000;
	}
	if (func_70(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_69(uParam0) < 0f)
	{
		func_68(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_65(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_65(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_66(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_67(uParam0, iVar0);
		iVar0++;
	}
	func_68(uParam0, (Global_4127F0 - 0.5f));
}

void func_67(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_68(var uParam0, float fParam1)
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

float func_69(var uParam0)
{
	return uParam0->f_50;
}

bool func_70(var uParam0, int iParam1)
{
	return func_71(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_71(var uParam0, int iParam1)
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

bool func_72(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_73(int iParam0)
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

bool func_74(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_75(var uParam0, int iParam1)
{
	switch (iLocal_160)
	{
		case 0x00000000:
			if (!func_133() && func_151(uParam0, 0x00000000) > 1f)
			{
				if (func_33())
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				}
				func_109(uParam0);
				func_145(&(Global_1B416.f_4A94), 0x00001000);
				func_106(iParam1, "TAXI_FARE_TITLE", uParam0->f_32, uParam0->f_38, ((uParam0->f_32 + uParam0->f_38) + uParam0->f_69), uParam0->f_69, func_108(uParam0), "TAXI_FARE_MID", 0x00000FA0, 0x00000001);
				iParam1->f_1 = 0x00000FA0;
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0x00000000);
				func_105(0x00000001);
				iLocal_160 = 0x00000006;
			}
			break;
		
		case 0x00000006:
			if (!func_99(iParam1, 0x00000000))
			{
				func_76(uParam0);
				func_281(uParam0, 0x00000000, 0x00000000, 0x00000000);
				func_105(0x00000000);
				iLocal_160 = 0x00000007;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_76(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_32 + uParam0->f_38) + uParam0->f_69);
	if (iVar0 > 0x00000000)
	{
		func_77(func_97(), 0x00000015, iVar0, 0x00000000, 0x00000000);
		func_148(0x0000000A, iVar0);
		iLocal_57[0x00000000] = iVar0;
	}
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_96(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_96(iParam0) == 0x00000004)
	{
		return;
	}
	func_78(func_96(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
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

int func_78(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_95();
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
					func_94(0x00000063, 0x00000001);
					func_93(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_93(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_93(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_92(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_87(0x00000005))
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
							func_93(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_93(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_93(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_87(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_93(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_93(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_93(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_93(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_93(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_93(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_93(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_93(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_93(joaat("sp2_money_spent_property"), iParam3);
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
									func_93(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_93(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_93(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_93(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_93(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_93(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_87(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_93(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_93(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_93(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_93(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_93(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_93(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_86(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_94(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_94(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_94(0x00000060, iParam3);
					break;
			}
			func_94(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_81(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_81(iVar1);
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
					func_93(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_93(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_93(joaat("sp2_total_cash_earned"), iParam3);
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
	func_80(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_79(0x00000000);
	}
	return 0x00000001;
}

void func_79(bool bParam0)
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

void func_80(int iParam0)
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

void func_81(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_58(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_58(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_58(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_58(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_84(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_84(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_84(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_84(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_84(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_84(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_83() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_83() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_82(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_82(int iParam0)
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

int func_83()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_85(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_85(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_27();
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

void func_86(int iParam0)
{
	func_94(0x0000005D, iParam0);
	func_94(0x0000001D, iParam0);
	func_94(0x0000001E, iParam0);
}

bool func_87(int iParam0)
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
		return func_89(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_89(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_89(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_89(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_88(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_88(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_88(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_88(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_88(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_88(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_83() /*10930*/].f_181E.f_A, iParam0);
}

int func_88(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_85(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_89(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_27();
	}
	iVar1 = func_91(iParam0, iParam1);
	uVar2 = func_90(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_90(int iParam0)
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

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_27();
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

int func_92(bool bParam0)
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
		func_57(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_61(0x0000001B, 0x00000001);
	return 0x00000001;
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_94(int iParam0, int iParam1)
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

void func_95()
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

int func_96(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_97()
{
	func_98();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_98()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_4(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_3(unk_0x16F2683693E537C9());
			if (func_6(iVar0) && (!func_74(0x0000000E) || Global_1AFFD))
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

int func_99(var uParam0, int iParam1)
{
	if (!func_17(&(uParam0->f_2)))
	{
		func_103(&(uParam0->f_2));
	}
	unk_0x3584F71E5CA29322(0x0000000E);
	unk_0x6567AE843FADBA94(*uParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9) || uParam0->f_8)
		{
			if (!func_17(&(uParam0->f_5)))
			{
				func_103(&(uParam0->f_5));
				func_102(uParam0, 0x3EA8F5C3);
			}
		}
		if (func_17(&(uParam0->f_5)))
		{
			if (func_101(&(uParam0->f_5)) > 0.33f)
			{
				func_100(&(uParam0->f_5));
				return 0x00000000;
			}
		}
	}
	if (uParam0->f_1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (func_101(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_17(&(uParam0->f_5)))
		{
			func_103(&(uParam0->f_5));
			func_102(uParam0, 0x3EA8F5C3);
		}
		else if (func_101(&(uParam0->f_5)) > 0.33f)
		{
			func_100(&(uParam0->f_2));
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_100(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0x00000000;
}

float func_101(var uParam0)
{
	if (func_17(uParam0))
	{
		if (func_16(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_15(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_102(var uParam0, float fParam1)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, "SHARD_ANIM_OUT");
	unk_0x3CAEA85DA607305E(uParam0->f_9);
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7E60D21B163E9D56();
}

void func_103(int iParam0)
{
	func_104(iParam0, 0f);
}

void func_104(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_15(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

void func_105(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

void func_106(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, func_107());
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
	func_103(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 0x00000001;
}

char* func_107()
{
	if (unk_0x8CD06866876216F2())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_108(var uParam0)
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

void func_109(var uParam0)
{
	int iVar0;
	
	Local_161.f_1 = SYSTEM::TO_FLOAT(uParam0->f_32);
	Local_161.f_2 = SYSTEM::TO_FLOAT(uParam0->f_38);
	func_148(0x0000000B, uParam0->f_38);
	func_148(0x0000000C, uParam0->f_38);
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

int func_110(var uParam0, bool bParam1)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (func_202(uParam0) && func_114(uParam0, 0x00000001, 0x40A00000))
		{
			if (bParam1)
			{
				if (func_113(uParam0, 0x00200000))
				{
					func_111(uParam0);
				}
			}
			else
			{
				func_111(uParam0);
			}
		}
		else if (!func_202(uParam0))
		{
			if (bParam1)
			{
				if (func_113(uParam0, 0x00200000))
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

void func_111(var uParam0)
{
	vector3 vVar0;
	
	if (func_112(uParam0->f_1D))
	{
		vVar0 = { uParam0->f_11 };
	}
	else
	{
		vVar0 = { uParam0->f_1D };
	}
	func_177(uParam0, vVar0);
}

int func_112(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_113(var uParam0, int iParam1)
{
	if (iParam1 != 0x40000000)
	{
		return (func_204(uParam0->f_51, iParam1) && !func_133());
	}
	return func_133();
}

int func_114(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
		{
			if (func_43(0x00000001))
			{
				func_41(0x00000000);
			}
			if (func_33())
			{
				func_117();
				return 0x00000001;
			}
			else if (func_115(uParam0->f_4, fParam2, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
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

int func_115(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_116(iParam0);
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

void func_116(int iParam0)
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

void func_117()
{
	if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	}
}

char* func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "std_hand_off_ps_money";
		
		case 0x00000002:
			return "std_hand_off_rps_money";
		
		case 0x00000001:
			return "std_hand_off_rds_money";
		
		default:
	}
	return "";
}

char* func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "std_hand_off_ps_driver";
		
		case 0x00000002:
			return "std_hand_off_rps_driver";
		
		case 0x00000001:
			return "std_hand_off_rds_driver";
		
		default:
	}
	return "";
}

char* func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "std_hand_off_ps_passenger";
		
		case 0x00000002:
			return "std_hand_off_rps_passenger";
		
		case 0x00000001:
			return "std_hand_off_rds_passenger";
		
		default:
	}
	return "";
}

int func_121(var uParam0, var uParam1)
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

int func_122()
{
	Local_305 = { func_123() };
	if ((((((((unk_0x7F8A39872A07D2CE(&cLocal_269, &Local_305) || unk_0x7F8A39872A07D2CE(&cLocal_273, &Local_305)) || unk_0x7F8A39872A07D2CE(&cLocal_277, &Local_305)) || unk_0x7F8A39872A07D2CE(&cLocal_281, &Local_305)) || unk_0x7F8A39872A07D2CE(&cLocal_285, &Local_305)) || unk_0x7F8A39872A07D2CE(&cLocal_289, &Local_305)) || unk_0x7F8A39872A07D2CE(&cLocal_293, &Local_305)) || unk_0x7F8A39872A07D2CE(&cLocal_297, &Local_305)) || unk_0x7F8A39872A07D2CE(&cLocal_301, &Local_305))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

struct<6> func_123()
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

void func_124()
{
	if (Local_231.f_38 >= Local_231.f_3B)
	{
		Local_231.f_38 = 0x00002710;
	}
	else if (Local_231.f_38 <= 0x00000000)
	{
		Local_231.f_38 = 0x00000000;
	}
	else
	{
		Local_231.f_38 = 0x00001388;
	}
}

void func_125(var uParam0)
{
	func_127();
	unk_0x790015DC92C918E2();
	if (uParam0->f_38 < uParam0->f_3A)
	{
		if (uParam0->f_19B == 0x00000000)
		{
			func_213(uParam0, 0x00000069, 0x00000001, 0x00000000, 0x00000000);
		}
		else
		{
			func_213(uParam0, 0x00000067, 0x00000001, 0x00000000, 0x00000000);
		}
		func_126(0x00000001);
	}
	else if (uParam0->f_38 >= uParam0->f_3B)
	{
		func_213(uParam0, 0x00000065, 0x00000001, 0x00000000, 0x00000000);
	}
	else
	{
		func_213(uParam0, 0x00000066, 0x00000001, 0x00000000, 0x00000000);
	}
	func_281(uParam0, 0x00000010, 4f, 0x00000000);
}

void func_126(int iParam0)
{
	Global_1AF0C.f_DD = iParam0;
}

void func_127()
{
	Global_4CD7 = 0x00000000;
	func_128();
}

void func_128()
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

void func_129(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_29;
	fVar0 = func_130(fVar0);
	iLocal_57[0x00000004] = SYSTEM::CEIL(fVar0);
	iLocal_57[0x00000005] = SYSTEM::CEIL(fVar0);
	func_148(0x00000004, SYSTEM::CEIL(fVar0));
	func_148(0x00000005, SYSTEM::CEIL(fVar0));
	uParam0->f_32 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_130(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_131()
{
	Global_4CD7 = 0x00000000;
	func_132();
}

void func_132()
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

int func_133()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_134(int iParam0)
{
	if (*iParam0 != 0xFFFFFFFF)
	{
		unk_0x55D0A2DB35045A35(*iParam0);
		unk_0x43A06902454A1172(*iParam0);
		*iParam0 = 0xFFFFFFFF;
	}
}

void func_135()
{
	unk_0x3F423BF5B8125A50("oddjobs@taxi@cyi");
	unk_0x523BCC9DC80CD82F(joaat("p_banknote_s"));
}

void func_136()
{
	if (func_151(&Local_231, 0x00000007) < 75f && !iLocal_255)
	{
		Local_231.f_39 += 12;
		func_213(&Local_231, 0x0000001E, 0x00000001, 0x00000000, 0x00000001);
	}
	else if (func_151(&Local_231, 0x00000007) > 150f || iLocal_255)
	{
		Local_231.f_39 = 0xFFFFFFF6;
		func_213(&Local_231, 0x00000020, 0x00000001, 0x00000000, 0x00000001);
		iLocal_255 = 0x00000001;
		func_137();
	}
	else
	{
		Local_231.f_39 += 5;
		func_213(&Local_231, 0x0000001F, 0x00000001, 0x00000000, 0x00000001);
	}
}

void func_137()
{
	unk_0x523BCC9DC80CD82F(func_280(0x00000003));
	unk_0x523BCC9DC80CD82F(func_280(0x00000004));
	unk_0x36187931D29E5BBE(0x00000000, func_138(0x00000001));
}

char* func_138(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			sVar0 = "txm8_pol1_A";
			break;
	}
	return sVar0;
}

int func_139(var uParam0)
{
	if (func_133())
	{
		return 0x00000001;
	}
	if (func_140(uParam0, 0x00000011))
	{
		return 0x00000001;
	}
	if (func_140(uParam0, 0x0000000E))
	{
		return 0x00000001;
	}
	if (func_144(uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_140(var uParam0, int iParam1)
{
	return func_17(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_141(var uParam0, int iParam1, bool bParam2)
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
			func_100(&(uParam0->f_92[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_100(&(uParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_142(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (func_17(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_103(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_281(uParam0, 0x0000000A, 0f, 0x00000001);
	unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
}

void func_143(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000005)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_3C[iParam1 /*3*/]), 0x00000002);
		uParam0->f_69 = (uParam0->f_69 + uParam0->f_3C[iParam1 /*3*/].f_1);
	}
}

bool func_144(var uParam0)
{
	return uParam0->f_6E;
}

void func_145(var uParam0, int iParam1)
{
	func_146(uParam0, iParam1);
}

void func_146(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_147(var uParam0, var uParam1)
{
	unk_0x893A626C476B583D(uParam0->f_1AC, uParam1, 0xFFFFFFFF);
	uParam0->f_29 = (*uParam1 - uParam0->f_2A);
}

void func_148(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			Global_1B416.f_4A94.f_16[0x00000000]++;
			func_149("Fares Completed ++ = ", Global_1B416.f_4A94.f_16[0x00000000]);
			break;
		
		case 0x00000001:
			Global_1B416.f_4A94.f_16[0x00000001]++;
			func_149("Fares Failed ++ = ", Global_1B416.f_4A94.f_16[0x00000001]);
			break;
		
		case 0x00000002:
			Global_1B416.f_4A94.f_16[0x00000002]++;
			func_149("Fares Accepted ++ ", Global_1B416.f_4A94.f_16[0x00000002]);
			break;
		
		case 0x00000003:
			Global_1B416.f_4A94.f_16[0x00000003]++;
			func_149("Fares Expired ++ ", Global_1B416.f_4A94.f_16[0x00000003]);
			break;
		
		case 0x0000000D:
			Global_1B416.f_4A94.f_16[0x0000000D]++;
			func_149("Passengers run ++ = ", Global_1B416.f_4A94.f_16[0x0000000D]);
			break;
		
		case 0x0000000E:
			Global_1B416.f_4A94.f_16[0x0000000E]++;
			func_149("Passenger Forced to Pay ++ = ", Global_1B416.f_4A94.f_16[0x0000000E]);
			break;
		
		case 0x00000004:
			if (iParam1 != 0x00000000)
			{
				if (iParam1 > Global_1B416.f_4A94.f_16[0x00000004])
				{
					Global_1B416.f_4A94.f_16[0x00000004] = iParam1;
					func_149("This distance ", iParam1);
					func_149(" is longer than current best", Global_1B416.f_4A94.f_16[0x00000004]);
				}
				else
				{
					func_149("Longest Distance Not Beat ", Global_1B416.f_4A94.f_16[0x00000004]);
				}
			}
			break;
		
		case 0x00000005:
			Global_1B416.f_4A94.f_16[0x00000005] = (Global_1B416.f_4A94.f_16[0x00000005] + iParam1);
			func_149("Total Distance w/ Passenger = ", Global_1B416.f_4A94.f_16[0x00000005]);
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
			func_149("Wanted Levels ++ = ", Global_1B416.f_4A94.f_16[0x00000006]);
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
			func_149("Wanted Levels Lost = ", Global_1B416.f_4A94.f_16[0x00000007]);
			break;
		
		case 0x00000008:
			Global_1B416.f_4A94.f_16[0x00000008]++;
			func_149("Taxis wrecked ++ = ", Global_1B416.f_4A94.f_16[0x00000008]);
			break;
		
		case 0x00000009:
			Global_1B416.f_4A94.f_16[0x00000009]++;
			func_149("Horn Honked ++ = ", Global_1B416.f_4A94.f_16[0x00000009]);
			break;
		
		case 0x0000000A:
			Global_1B416.f_4A94.f_16[0x0000000A] = (Global_1B416.f_4A94.f_16[0x0000000A] + iParam1);
			func_149("Total Money Earned = ", Global_1B416.f_4A94.f_16[0x0000000A]);
			break;
		
		case 0x0000000B:
			Global_1B416.f_4A94.f_16[0x0000000B] = (Global_1B416.f_4A94.f_16[0x0000000B] + iParam1);
			func_149("Total Tips Earned = ", Global_1B416.f_4A94.f_16[0x0000000B]);
			break;
		
		case 0x0000000C:
			if (iParam1 > Global_1B416.f_4A94.f_16[0x0000000C])
			{
				Global_1B416.f_4A94.f_16[0x0000000C] = iParam1;
				func_149("New Highest Tip = ", Global_1B416.f_4A94.f_16[0x0000000C]);
			}
			else
			{
				func_149("Highest Tip Not Reached = ", Global_1B416.f_4A94.f_16[0x0000000C]);
			}
			break;
	}
}

void func_149(char* sParam0, int iParam1)
{
}

int func_150(int iParam0, int iParam1)
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

float func_151(var uParam0, int iParam1)
{
	if (!func_17(&(uParam0->f_92[iParam1 /*3*/])))
	{
		func_152(&(uParam0->f_92[iParam1 /*3*/]));
	}
	return func_101(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_152(int iParam0)
{
	if (!func_17(iParam0))
	{
		func_103(iParam0);
	}
}

void func_153(var uParam0, bool bParam1)
{
	func_163(uParam0, uParam0->f_3);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
		{
			if (!func_140(uParam0, 0x0000000E))
			{
				if (func_133())
				{
					func_162(0x00000001);
				}
				func_161(uParam0, 0x0000000B, 0x00000001);
				func_154(uParam0, 0x00000001);
				func_281(uParam0, 0x0000000E, 0f, 0x00000001);
				if (uParam0->f_19A < 0x0000000F)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_202(uParam0))
				{
					if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
					{
					}
					if (unk_0x405E212DDE472467(uParam0->f_2, 0x00000000))
					{
						if (func_151(uParam0, 0x0000000F) > 5f)
						{
							func_281(uParam0, 0x0000000F, 0f, 0x00000001);
						}
					}
					if (func_151(uParam0, 0x0000000E) > 20f)
					{
						func_335(uParam0, "Player not in taxi. - YELL RETURN", 0x00000008);
					}
				}
				else if (func_151(uParam0, 0x0000000E) > 20f)
				{
					if (func_167(uParam0->f_4, 0x00000001) > 40f)
					{
						func_335(uParam0, "Player not in taxi.", 0x00000015);
					}
					else
					{
						func_335(uParam0, "Player not in taxi. - YELL RETURN 2", 0x00000008);
					}
				}
			}
		}
	}
}

void func_154(var uParam0, bool bParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (bParam1)
		{
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_8, 0x00000000);
				unk_0x661342B9651D16E2(uParam0->f_8, 0x00000000);
				func_160(uParam0, &(uParam0->f_62), 0x00000004, 0x00000003);
			}
			else if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x00000000);
				unk_0x661342B9651D16E2(uParam0->f_9, 0x00000000);
				unk_0x790015DC92C918E2();
				if (func_202(uParam0))
				{
					func_213(uParam0, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
				}
				else
				{
					func_160(uParam0, &(uParam0->f_62), 0x00000004, 0x00000003);
				}
			}
			func_155(uParam0, 0x00000000, 0x00000000);
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

void func_155(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_50(uParam0);
	}
	if (!unk_0xE4EDC4B0E92C078B(uParam0->f_A))
	{
		uParam0->f_A = func_158(uParam0->f_4, 0x00000001, 0x00000000);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_A, "TAXI_BLIP_CAR");
		unk_0x661342B9651D16E2(uParam0->f_A, 0x00000001);
		func_156(uParam0);
		if (bParam2)
		{
			unk_0x790015DC92C918E2();
			func_213(uParam0, 0x00000003, 0x00000001, 0x00000000, 0x00000000);
		}
	}
}

void func_156(var uParam0)
{
	func_281(uParam0, 0x0000000E, 0x00000000, 0x00000000);
	func_157();
}

void func_157()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		unk_0xCEAA091B490F8407(0xFFFFFFFF, "Radio_Off", iVar0, "TAXI_SOUNDS", 0x00000000, 0x00000000);
	}
}

int func_158(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_159(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_159(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_159(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_159(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_160(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_204(*uParam1, iParam2))
	{
		unk_0x790015DC92C918E2();
		func_213(uParam0, iParam3, 0x00000001, 0x00000000, 0x00000000);
		func_179(uParam1, iParam2);
	}
}

void func_161(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_19E = iParam1;
	if (bParam2)
	{
	}
}

void func_162(int iParam0)
{
	Global_5538 = iParam0;
}

void func_163(var uParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
			{
				if ((unk_0x0361981EE62202D8(iParam1, joaat("weapon_stungun"), 0x00000000) || unk_0x0361981EE62202D8(iParam1, 0x00000000, 0x00000002)) || unk_0x0361981EE62202D8(iParam1, 0x00000000, 0x00000001))
				{
					func_335(uParam0, "Passenger injured by player with weapon.", 0x0000000E);
				}
				unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
			}
		}
	}
}

void func_164(var uParam0, bool bParam1)
{
	func_166(uParam0);
	if (bParam1)
	{
		if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
		{
			uParam0->f_9 = func_165(uParam0->f_11, 0x00000001);
		}
		else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0x00000000)
		{
			unk_0x138116A08F9AC5F4(0x00000001, 0x00000000);
			unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x000000FF);
			unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_11);
			unk_0x661342B9651D16E2(uParam0->f_9, 0x00000001);
		}
	}
}

int func_165(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_159(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, iParam1);
	return iVar0;
}

void func_166(var uParam0)
{
	if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
	{
		unk_0x661342B9651D16E2(uParam0->f_8, 0x00000000);
		unk_0x142CC44DB769B57E(&(uParam0->f_8));
	}
}

float func_167(int iParam0, bool bParam1)
{
	return func_168(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

float func_168(int iParam0, int iParam1, bool bParam2)
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

void func_169()
{
	if (bLocal_329)
	{
		func_176("TAXI_CYI_HANDLE_PLAYER_NEAR_JEWELRY_STORE", &iLocal_262, 0x000003E8);
	}
	if (!unk_0x437347B10A200C4B(Local_231.f_3, 0x00000000))
	{
		switch (iLocal_374)
		{
			case 0x00000000:
				if (func_201(Local_231.f_3, vLocal_246, 0x00000001) < 16f)
				{
					iLocal_374 = 0x00000001;
				}
				break;
			
			case 0x00000001:
				if (func_167(Local_231.f_3, 0x00000001) < 10f)
				{
					unk_0x262EF6C6306BEA6C(Local_231.f_3, joaat("weapon_combatpistol"), 0x00000032, 0x00000001, 0x00000001);
					unk_0xF82EA857DA10E0CD(&uLocal_245);
					unk_0xDD353D0E9C789D0E(&uLocal_245);
					unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000000);
					unk_0x75ABDC5F81978924(uLocal_245);
					unk_0x78ADC381772E3D54(Local_231.f_3, uLocal_245);
					unk_0xF82EA857DA10E0CD(&uLocal_245);
					func_281(&Local_231, 0x0000000C, 0x00000000, 0x00000000);
					iLocal_374 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (func_151(&Local_231, 0x0000000C) > 1.5f)
				{
					if (iLocal_375 != 0x00000005)
					{
						if (!unk_0x437347B10A200C4B(Local_231.f_2, 0x00000000))
						{
							if (unk_0xDF1306B443CD3D15(Local_231.f_4, 0x00000000))
							{
								if (unk_0xC42A92762C58E1B9(Local_231.f_2, Local_231.f_4, 0x00000000))
								{
									func_213(&Local_231, 0x00000038, 0x00000001, 0x00000000, 0x00000000);
								}
								else
								{
									func_213(&Local_231, 0x00000037, 0x00000001, 0x00000001, 0x00000000);
								}
							}
						}
						iLocal_259 = 0x00000000;
						iLocal_253 = 0x00000001;
						func_281(&Local_231, 0x0000000C, 0x00000000, 0x00000000);
						func_174(&Local_231, 0x00000006);
						iLocal_374 = 0x00000003;
					}
					else
					{
						func_141(&Local_231, 0x0000000C, 0x00000000);
						iLocal_374 = 0x00000009;
					}
				}
				break;
			
			case 0x00000003:
				if (func_167(Local_231.f_3, 0x00000001) >= 10f)
				{
					iLocal_374 = 0x00000005;
				}
				else if (iLocal_260)
				{
					if (!func_133() && !unk_0x25037C66EB32B076())
					{
						if (!iLocal_259)
						{
							func_281(&Local_231, 0x0000000C, 0x00000000, 0x00000000);
							iLocal_259 = 0x00000001;
						}
						else if (func_151(&Local_231, 0x0000000C) > 5f)
						{
							func_141(&Local_231, 0x0000000C, 0x00000000);
							iLocal_374 = 0x00000009;
						}
					}
				}
				else if (!iLocal_260)
				{
					if (func_172("txm8_lvMe1") || func_172("txm8_lvMe2"))
					{
						iLocal_260 = 0x00000001;
					}
				}
				break;
			
			case 0x00000005:
				func_170(&Local_231, 0x00000006);
				if (unk_0xD1960163A3042274(Local_231.f_3, 0x0E763797) != 0x00000007)
				{
					unk_0xF82EA857DA10E0CD(&uLocal_245);
					unk_0xDD353D0E9C789D0E(&uLocal_245);
					unk_0x96167B03C5A77156(0x00000000, vLocal_246, 1f, 0x00009C40, 0.25f, 0x00000000, 0x471C4000);
					unk_0x96167B03C5A77156(0x00000000, 337.3356f, -997.7456f, 28.1318f, 3f, 0x00009C40, 0.25f, 0x00000000, 0x471C4000);
					unk_0x96167B03C5A77156(0x00000000, vLocal_247, 3f, 0x00009C40, 0.25f, 0x00000000, 0x471C4000);
					unk_0x75ABDC5F81978924(uLocal_245);
					unk_0x78ADC381772E3D54(Local_231.f_3, uLocal_245);
					unk_0xF82EA857DA10E0CD(&uLocal_245);
					iLocal_375 = 0x00000005;
					iLocal_374 = 0x00000000;
				}
				break;
			
			case 0x00000009:
				if (func_140(&Local_231, 0x0000000C))
				{
					if (func_151(&Local_231, 0x0000000C) > 2f)
					{
						func_281(&Local_231, 0x00000006, 0x00000000, 0x00000000);
						unk_0xF82EA857DA10E0CD(&uLocal_245);
						unk_0xDD353D0E9C789D0E(&uLocal_245);
						unk_0x2C4A1A0F54A166E8(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0xC6EE6B4C);
						unk_0x75ABDC5F81978924(uLocal_245);
						unk_0x78ADC381772E3D54(Local_231.f_3, uLocal_245);
						unk_0xF82EA857DA10E0CD(&uLocal_245);
						unk_0x0E2400AB9174FA81(0x00000005, Local_231.f_19D, 0x6F0783F5);
						unk_0xFADC0A217229F6B5(Local_231.f_3, 0x00000001);
						bLocal_254 = 0x00000001;
						if (unk_0xE4EDC4B0E92C078B(Local_231.f_9) && unk_0x4FA921CB56EDB0F8(Local_231.f_9) > 0x00000000)
						{
							unk_0x7F010F50CE03A8AF(Local_231.f_9, 0x00000000);
							unk_0x661342B9651D16E2(Local_231.f_9, 0x00000000);
							unk_0x2F23E8033F1ADDD9("TAXI_OBJ_CYI_1B");
						}
						iLocal_374 = 0x0000000A;
					}
				}
				else
				{
					func_281(&Local_231, 0x0000000C, 0x00000000, 0x00000000);
					if (!unk_0x437347B10A200C4B(Local_231.f_2, 0x00000000))
					{
						if (unk_0xDF1306B443CD3D15(Local_231.f_4, 0x00000000))
						{
							if (unk_0xC42A92762C58E1B9(Local_231.f_2, Local_231.f_4, 0x00000000))
							{
								func_213(&Local_231, 0x00000038, 0x00000001, 0x00000000, 0x00000000);
							}
							else
							{
								func_213(&Local_231, 0x00000037, 0x00000001, 0x00000001, 0x00000000);
							}
						}
					}
				}
				break;
			
			case 0x0000000A:
				if (!unk_0x25037C66EB32B076() && func_151(&Local_231, 0x00000006) > 2f)
				{
					func_335(&Local_231, "Passenger shoots player", 0x00000009);
				}
				break;
			}
	}
}

void func_170(var uParam0, int iParam1)
{
	if (func_17(&(uParam0->f_92[iParam1 /*3*/])))
	{
		if (func_16(&(uParam0->f_92[iParam1 /*3*/])))
		{
			func_171(&(uParam0->f_92[iParam1 /*3*/]));
		}
	}
}

void func_171(int iParam0)
{
	if (func_17(iParam0))
	{
		if (func_16(iParam0))
		{
			iParam0->f_1 = (func_15(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			unk_0x0674E58A79778E99(iParam0, 0x00000002);
		}
	}
}

int func_172(char* sParam0)
{
	var uVar0;
	
	if (func_133())
	{
		MemCopy(&uVar0, {func_173()}, 0x00000004);
		if (unk_0x7F8A39872A07D2CE(sParam0, &uVar0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

struct<6> func_173()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		return Global_4FC8;
	}
	return Var0;
}

void func_174(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0x00000020)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			if (!func_16(&(uParam0->f_92[iVar0 /*3*/])))
			{
				func_175(&(uParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (func_17(&(uParam0->f_92[iParam1 /*3*/])))
	{
		if (!func_16(&(uParam0->f_92[iParam1 /*3*/])))
		{
			func_175(&(uParam0->f_92[iParam1 /*3*/]));
		}
	}
}

void func_175(int iParam0)
{
	if (func_17(iParam0))
	{
		if (!func_16(iParam0))
		{
			iParam0->f_2 = (func_15(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
			unk_0x5D96D8530B3D0904(iParam0, 0x00000002);
		}
	}
}

void func_176(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x1C0640BA9A7327B3() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x1C0640BA9A7327B3();
}

void func_177(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000) && unk_0x82CCEAB29E9451DD(uParam0->f_3, uParam0->f_4))
		{
			vVar0 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (func_178(uParam0->f_3, uParam0->f_4) == 0x00000000)
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

int func_178(int iParam0, int iParam1)
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

void func_179(var uParam0, int iParam1)
{
	func_180(uParam0, iParam1);
}

void func_180(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_181(var uParam0, float fParam1, float fParam2, float fParam3)
{
	if ((((unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749()) && !unk_0xD0BB2359EC70FC37()) && !unk_0x757EF87A33649210()) && !uParam0->f_8E)
	{
		if (func_197(uParam0))
		{
			func_147(uParam0, &(uParam0->f_2B));
			func_193(uParam0);
			func_192(uParam0);
			func_189(uParam0);
			func_187(uParam0, fParam2, fParam3);
			func_185(uParam0);
			return func_182(uParam0, fParam1);
		}
	}
	return 0x00000000;
}

int func_182(var uParam0, float fParam1)
{
	if (func_60(uParam0) == 0x00000002)
	{
		if (unk_0x5A91F08DF773C39D(uParam0->f_4, uParam0->f_11, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_8C, 0x00000001, 0x00000000))
		{
		}
		if (((func_184(uParam0->f_4, uParam0->f_11, 0x00000001) <= (fParam1 + 1f) && unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001) && func_183(0x00000001, 0x00000001, 0x00000001)) && unk_0xF79A7BCA9E38BBBC(uParam0->f_4))
		{
			return func_114(uParam0, 0x00000001, fParam1);
		}
	}
	else if (((unk_0x5A91F08DF773C39D(uParam0->f_4, uParam0->f_11, (fParam1 + 1f), (fParam1 + 1f), 2f, !uParam0->f_8C, 0x00000001, 0x00000000) && unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001) && func_183(0x00000001, 0x00000001, 0x00000001)) && unk_0xF79A7BCA9E38BBBC(uParam0->f_4))
	{
		return func_114(uParam0, 0x00000001, fParam1);
	}
	return 0x00000000;
}

int func_183(bool bParam0, bool bParam1, bool bParam2)
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

float func_184(int iParam0, vector3 vParam1, bool bParam2)
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

void func_185(var uParam0)
{
	float fVar0;
	
	if ((func_202(uParam0) && func_204(uParam0->f_51, 0x04000000)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
	{
		if ((unk_0x1C0640BA9A7327B3() - iLocal_89) >= 0x00002710)
		{
			fVar0 = func_186(uParam0->f_11, 0x00000001);
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
		if (iLocal_88 >= 0x00000002 && !func_133())
		{
			func_213(uParam0, 0x00000088, 0x00000001, 0x00000000, 0x00000001);
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
			if (!func_202(uParam0))
			{
			}
			if (!func_204(uParam0->f_51, 0x04000000))
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

float func_186(vector3 vParam0, bool bParam1)
{
	return func_201(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), vParam0, bParam1);
}

void func_187(var uParam0, float fParam1, float fParam2)
{
	if (func_202(uParam0) && func_204(uParam0->f_2C, 0x00000004))
	{
		if ((unk_0x8B38C0DAEEDB5F9C(uParam0->f_4) || unk_0x9C66D99E63E8E24C(uParam0->f_4) < 3f) && func_311(uParam0))
		{
			if (!func_140(uParam0, 0x00000002))
			{
				func_188(uParam0, 0x00000002);
			}
			else if (func_202(uParam0))
			{
				if (func_151(uParam0, 0x00000002) > fParam1 && !func_140(uParam0, 0x0000000E))
				{
					if (func_35())
					{
						func_213(uParam0, 0x00000030, 0x00000001, 0x00000000, 0x00000000);
					}
					else
					{
						func_213(uParam0, 0x00000030, 0x00000001, 0x00000000, 0x00000000);
					}
					func_281(uParam0, 0x00000002, 0x00000000, 0x00000000);
					if (func_140(uParam0, 0x0000000A))
					{
						func_281(uParam0, 0x0000000A, 0x00000000, 0x00000000);
					}
				}
				if (!func_140(uParam0, 0x00000003))
				{
					func_281(uParam0, 0x00000003, 0x00000000, 0x00000000);
				}
				else if (func_151(uParam0, 0x00000003) >= fParam2)
				{
					func_141(uParam0, 0x00000003, 0x00000000);
					func_335(uParam0, "Car not moving", 0x00000014);
				}
			}
		}
		else
		{
			if (func_140(uParam0, 0x00000002))
			{
				func_141(uParam0, 0x00000002, 0x00000000);
			}
			if (func_140(uParam0, 0x00000003))
			{
				func_141(uParam0, 0x00000003, 0x00000000);
			}
		}
	}
}

void func_188(var uParam0, int iParam1)
{
	func_152(&(uParam0->f_92[iParam1 /*3*/]));
}

void func_189(var uParam0)
{
	if (func_191(uParam0))
	{
		func_190(uParam0);
	}
}

void func_190(var uParam0)
{
	if (unk_0xEFFB47DC2D8F23F9() && uParam0->f_1A2.f_4 != 0x00000000)
	{
		uParam0->f_1A2.f_4 = 0x00000000;
	}
	switch (uParam0->f_1A2.f_4)
	{
		case 0x00000000:
			uParam0->f_1A2 = unk_0xFC21F7E0F4D92523();
			func_141(uParam0, 0x00000014, 0x00000000);
			uParam0->f_1A2.f_4++;
			break;
		
		case 0x00000001:
			if (uParam0->f_1A2.f_8 && !uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (func_151(uParam0, 0x00000014) > 3f)
				{
					func_213(uParam0, 0x00000057, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_1A2.f_8 = 0x00000000;
					uParam0->f_1A2.f_4++;
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
			{
				if (!func_204(uParam0->f_51, 0x00040000) || !func_204(uParam0->f_51, 0x00100000))
				{
					if (func_151(uParam0, 0x00000014) > 5f)
					{
						uParam0->f_1A2.f_5 = 0x00000001;
						func_213(uParam0, 0x00000054, 0x00000001, 0x00000000, 0x00000000);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
			{
				if (!func_204(uParam0->f_52, 0x04000000))
				{
					if (func_151(uParam0, 0x00000014) > 5f)
					{
						uParam0->f_1A2.f_6 = 0x00000001;
						uParam0->f_1A2.f_8 = 0x00000000;
						func_213(uParam0, 0x00000055, 0x00000001, 0x00000000, 0x00000000);
						func_141(uParam0, 0x00000016, 0x00000000);
						uParam0->f_1A2.f_4++;
					}
				}
			}
			else if (uParam0->f_1A2.f_7)
			{
				if (func_151(uParam0, 0x00000014) > 8f)
				{
					func_213(uParam0, 0x00000056, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_1A2.f_4++;
				}
			}
			break;
		
		case 0x00000002:
			if (func_204(uParam0->f_51, 0x00040000) || func_204(uParam0->f_52, 0x04000000))
			{
				if (!func_140(uParam0, 0x00000016))
				{
					func_188(uParam0, 0x00000016);
				}
			}
			if (func_140(uParam0, 0x00000016) && func_151(uParam0, 0x00000016) > 15f)
			{
				if (uParam0->f_1A2 == uParam0->f_1A2.f_1)
				{
					if (!func_204(uParam0->f_51, 0x00100000))
					{
						func_213(uParam0, 0x00000054, 0x00000001, 0x00000000, 0x00000000);
						func_141(uParam0, 0x00000016, 0x00000000);
					}
				}
				else if (uParam0->f_1A2 == uParam0->f_1A2.f_2)
				{
					if (!func_204(uParam0->f_52, 0x08000000))
					{
						func_213(uParam0, 0x00000055, 0x00000001, 0x00000000, 0x00000000);
						func_141(uParam0, 0x00000016, 0x00000000);
					}
				}
			}
			break;
	}
}

bool func_191(var uParam0)
{
	return uParam0->f_78;
}

void func_192(var uParam0)
{
	if (unk_0x1BF376CEB706080F(unk_0xA30EC016B12C03E4()) && !func_204(uParam0->f_2C, 0x00000002))
	{
		func_179(&(uParam0->f_2C), 0x00000002);
	}
	else if (!unk_0x1BF376CEB706080F(unk_0xA30EC016B12C03E4()) && func_204(uParam0->f_2C, 0x00000002))
	{
		func_145(&(uParam0->f_2C), 0x00000002);
		uParam0->f_2F++;
		func_148(0x00000009, 0x00000000);
	}
	if (uParam0->f_2F > 0x0000001E)
	{
		func_213(uParam0, 0x0000002F, 0x00000001, 0x00000000, 0x00000000);
		uParam0->f_2F = 0x00000000;
		uParam0->f_4C = (uParam0->f_4C + SYSTEM::CEIL(5f));
	}
}

void func_193(var uParam0)
{
	if (!func_204(uParam0->f_2C, 0x00000001))
	{
		switch (uParam0->f_19C)
		{
			case 0x00000000:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 0x00000001)
				{
					if (func_151(uParam0, 0x00000009) > 1f)
					{
						func_196(uParam0, unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()));
						if (uParam0->f_19A != 0x00000016)
						{
							func_213(uParam0, 0x00000032, 0x00000001, 0x00000001, 0x00000000);
						}
						func_281(uParam0, 0x00000009, 0x00000000, 0x00000000);
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
				if (!func_133() && func_151(uParam0, 0x00000009) > 4f)
				{
					func_213(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_19C = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (func_195("TAXI_OBJ_POL", 0x00000000, 0x00000000))
				{
					if (uParam0->f_19A != 0x00000016)
					{
						func_213(uParam0, 0x00000033, 0x00000000, 0x00000000, 0x00000000);
					}
					uParam0->f_19C = 0x00000003;
				}
				else if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001)
				{
					uParam0->f_19C = 0x00000003;
				}
				break;
			
			case 0x00000003:
				if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), func_194(uParam0)))
				{
					func_196(uParam0, unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()));
					func_148(0x00000006, 0x00000000);
				}
				if (!func_144(uParam0))
				{
					if (!unk_0x25037C66EB32B076())
					{
						if (func_151(uParam0, 0x00000010) > 10f)
						{
							if (uParam0->f_19A != 0x00000016)
							{
								func_213(uParam0, 0x00000033, 0x00000001, 0x00000000, 0x00000000);
							}
						}
					}
				}
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001)
				{
					if (func_195("TAXI_OBJ_POL", 0x00000000, 0x00000000))
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
				if (!func_133())
				{
					if (uParam0->f_19A != 0x00000016)
					{
						func_213(uParam0, 0x00000035, 0x00000001, 0x00000000, 0x00000001);
					}
					func_148(0x00000007, func_194(uParam0));
					func_196(uParam0, 0x00000000);
					uParam0->f_19C = 0x00000005;
				}
				break;
			
			case 0x00000005:
				if (!func_133())
				{
					func_141(uParam0, 0x00000009, 0x00000000);
					func_281(uParam0, 0x0000000B, 0x00000000, 0x00000000);
					uParam0->f_19C = 0x00000000;
				}
				break;
			}
	}
}

int func_194(var uParam0)
{
	return uParam0->f_6A;
}

bool func_195(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 0x00000001)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_196(var uParam0, int iParam1)
{
	if (uParam0->f_6A != iParam1)
	{
		uParam0->f_6A = iParam1;
	}
}

int func_197(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (!unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0x00000001) && !unk_0x81A5359F25512A04(uParam0->f_3))
			{
				func_335(uParam0, "Passenger left car.", 0x00000009);
			}
			else if (func_286(uParam0))
			{
				if (func_195("TAXI_OBJ_PICKUP", 0x00000000, 0x00000000))
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
				func_153(uParam0, 0x00000001);
			}
		}
	}
	return 0x00000000;
}

void func_198(var uParam0, int iParam1, bool bParam2)
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

void func_199(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0x00000000;
		(uParam0[iVar0 /*8*/])->f_7 = 0x00000000;
		StringCopy(uParam0[iVar0 /*8*/], func_200(), 24);
		iVar0++;
	}
	unk_0x790015DC92C918E2();
	func_48();
}

var func_200()
{
	var uVar0;
	
	return uVar0;
}

float func_201(int iParam0, vector3 vParam1, bool bParam2)
{
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return -1f;
	}
	return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1, bParam2);
}

int func_202(var uParam0)
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

int func_203(var uParam0)
{
	return uParam0->f_1A0;
}

bool func_204(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_205(var uParam0)
{
	func_209(uParam0, 0x000003E8);
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x327AAEE25F323797(uParam0->f_3);
		unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0x00000000);
	}
	func_131();
	func_206(uParam0);
}

void func_206(var uParam0)
{
	func_141(uParam0, 0x0000000E, 0x00000000);
	func_141(uParam0, 0x0000000F, 0x00000000);
	func_208();
	if (func_207())
	{
		func_162(0x00000000);
	}
}

int func_207()
{
	if (Global_5538 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_208()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		unk_0xCEAA091B490F8407(0xFFFFFFFF, "Radio_On", iVar0, "TAXI_SOUNDS", 0x00000000, 0x00000000);
	}
}

void func_209(var uParam0, int iParam1)
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

void func_210(vector3 vParam0, bool bParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_38(vParam0, 1f, -fParam2, -fParam2, -fParam2) };
	vVar1 = { func_38(vParam0, 1f, fParam2, fParam2, fParam2) };
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

void func_211()
{
	func_179(&(Local_231.f_37), 0x00000002);
	func_179(&(Local_231.f_37), 0x00000004);
	func_179(&(Local_231.f_37), 0x00000010);
	func_179(&(Local_231.f_37), 0x00000040);
	func_179(&(Local_231.f_37), 0x00000100);
	func_179(&(Local_231.f_37), 0x00000200);
	func_179(&(Local_231.f_37), 0x00000400);
	func_179(&(Local_231.f_37), 0x00000800);
	func_179(&(Local_231.f_37), 0x00001000);
	func_179(&(Local_231.f_64), 0x00000008);
	func_179(&(Local_231.f_64), 0x00000800);
	func_179(&(Local_231.f_64), 0x00000100);
	func_179(&uLocal_306, 0x00000002);
}

void func_212(var uParam0)
{
	unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
	func_209(uParam0, 0x000003E8);
}

void func_213(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_1A0 = iParam1;
	if (bParam4)
	{
		func_281(uParam0, 0x00000010, 4f, 0x00000000);
		if (func_214(uParam0))
		{
			func_48();
		}
	}
	func_242(uParam0, iParam2, bParam3);
}

int func_214(var uParam0)
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_8F, 24);
	if (func_133())
	{
		Var1 = { func_173() };
		if (!unk_0xEA6BC48857E0AC4C(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0x7F8A39872A07D2CE(&Var1, &vVar0))
			{
				return 0x00000001;
			}
			StringCopy(&vVar0, uParam0->f_8F, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_215(&vVar0);
			if (unk_0x7F8A39872A07D2CE(&Var1, &vVar0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_215(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

int func_216(var uParam0)
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

Vector3 func_217(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 335.4227f, -956.4223f, 28.3588f;
			break;
		
		case 0x00000000:
			return 349.926f, -958.3827f, 28.3033f;
			break;
		
		case 0x00000001:
			return -1020.581f, -2743.842f, 18.4049f;
			break;
		
		case 0x00000002:
			return -1043.947f, -2748.683f, 20.3594f;
			break;
		
		case 0x00000003:
			return -1042.391f, -2731.644f, 19.1701f;
			break;
		
		case 0x00000004:
			return -1045.677f, -2730.109f, 19.1701f;
			break;
		
		case 0x00000005:
			return -1032.295f, -2731.449f, 19.0458f;
			break;
		
		case 0x00000006:
			return -1051.045f, -2722.934f, 19.1693f;
			break;
		
		case 0x00000007:
			return -1052.905f, -2723.375f, 19.1693f;
			break;
		
		case 0x00000008:
			return -1042.812f, -2743.095f, 20.362f;
			break;
		
		default:
			return 354.5381f, -947.7332f, 28.359f;
			break;
	}
	return func_40();
}

int func_218(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
		{
			if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
			{
			}
			func_153(uParam0, 0x00000001);
			if (func_33())
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
			func_240(uParam0);
			if (uParam0->f_30 > 0x00000001)
			{
				unk_0xF82EA857DA10E0CD(&uVar3);
				unk_0xDD353D0E9C789D0E(&uVar3);
				unk_0x96167B03C5A77156(0x00000000, uParam0->f_B, uParam0->f_6, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
				unk_0xF96A174EE26D7588(0x00000000, uParam0->f_4, 0x00000000);
				unk_0x75ABDC5F81978924(uVar3);
				unk_0x78ADC381772E3D54(uParam0->f_3, uVar3);
				uParam0->f_30 = 0x00000000;
			}
		}
		else
		{
			if (func_140(uParam0, 0x0000000E))
			{
				func_206(uParam0);
				func_154(uParam0, 0x00000000);
			}
			if (func_140(uParam0, 0x00000009))
			{
				func_141(uParam0, 0x00000009, 0x00000000);
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
				if (uParam0->f_8D && func_239(uParam0, uParam0->f_3) > 300f)
				{
					func_335(uParam0, "Left Passenger", 0x00000008);
				}
				switch (uParam0->f_30)
				{
					case 0x00000000:
						if (unk_0xD1960163A3042274(uParam0->f_3, 0x0E763797) != 0x00000001 || ((func_168(unk_0x16F2683693E537C9(), uParam0->f_3, 0x00000001) < 20f && func_184(uParam0->f_3, uParam0->f_B, 0x00000001) <= 28f) && func_184(uParam0->f_4, uParam0->f_B, 0x00000001) <= 28f))
						{
							if (func_236(uParam0, fParam2))
							{
								uParam0->f_30++;
							}
						}
						break;
					
					case 0x00000001:
						if (func_235(uParam0, 0x00000000, 28f, fVar4, 4f))
						{
							uParam0->f_8A = 0x00000001;
							if (bLocal_86)
							{
								uParam0->f_7 = func_150(uParam0->f_4, uParam0->f_3);
								iVar0 = func_121(uParam0, &iVar1);
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
							if (!func_311(uParam0))
							{
								unk_0xA3BF0AA5A2608191(uParam0->f_3);
							}
							else if (((unk_0xD1960163A3042274(uParam0->f_3, 0x0E763797) != 0x00000001 && unk_0xD1960163A3042274(uParam0->f_3, 0x0E763797) != 0x00000000) && unk_0xD1960163A3042274(uParam0->f_3, 0x0E763797) != 0x00000007) && func_239(uParam0, uParam0->f_3) > 8f)
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
							if (func_168(uParam0->f_4, uParam0->f_3, 0x00000001) < 3f)
							{
								if (!func_234(uParam0, 0x00000001))
								{
									unk_0x327AAEE25F323797(uParam0->f_3);
									func_335(uParam0, "You had a dead body in your back seat.", 0x00000005);
								}
								else if (!func_233(uParam0->f_4))
								{
									unk_0x327AAEE25F323797(uParam0->f_3);
									func_335(uParam0, "You had a dead body in your back seat.", 0x00000000);
								}
							}
						}
						func_231(uParam0);
						if (func_239(uParam0, uParam0->f_3) < fVar4 || func_33())
						{
							if (unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
							{
								if (func_219(uParam0))
								{
									func_166(uParam0);
									iLocal_81 = unk_0x1C0640BA9A7327B3();
									unk_0x4E885A246A9D983A(uParam0->f_3, 0x0000001A, 0x00000001);
									func_141(uParam0, 0x00000005, 0x00000000);
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

int func_219(var uParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	
	func_176("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_4E), 0x000003E8);
	iVar6 = 0xFFFFFFFF;
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000) && !unk_0x437347B10A200C4B(uParam0->f_4, 0x00000000))
	{
		func_230();
	}
	if (bLocal_86)
	{
		iLocal_78 = 0x0000000A;
	}
	if ((iLocal_78 < 0x00000007 && iLocal_78 > 0x00000000) && !bLocal_86)
	{
		if (func_228(iLocal_80))
		{
			iLocal_78 = 0x00000007;
		}
	}
	switch (iLocal_78)
	{
		case 0x00000000:
			if (func_114(uParam0, 0x00000000, 0x40A00000) && func_183(0x00000001, 0x00000001, 0x00000001))
			{
				if (func_234(uParam0, 0x00000001))
				{
					iLocal_80 = unk_0x1C0640BA9A7327B3();
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_78 = 0x00000001;
				}
				else
				{
					func_335(uParam0, "You had a dead body in your back seat.", 0x00000005);
				}
			}
			break;
		
		case 0x00000001:
			if (SYSTEM::TIMERA() > 0x000001F4)
			{
				uParam0->f_7 = func_150(uParam0->f_4, uParam0->f_3);
				iVar3 = func_121(uParam0, &iVar4);
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
			iVar6 = func_227(&(uParam0->f_199), unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, vVar0), 0x00000001);
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
				func_226(0x00000000, 0x00000000, 0x00000001);
				unk_0x745CE398A4B0A3C6(unk_0x68F4C0EC296D3901(uParam0->f_4, 0x00000001), 3f, 0x00000000);
				unk_0x75CFD6AD66ADFDD1(unk_0x68F4C0EC296D3901(uParam0->f_4, 0x00000001), 25f, 0x00000000);
				unk_0xA37A90C62806D848(0x00000001);
				unk_0x790015DC92C918E2();
				func_127();
				func_242(uParam0, 0x00000000, 0x00000000);
				vVar7 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, vVar2) };
				unk_0xA47B46945FF6DE74(uParam0->f_3, vVar7, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(uParam0->f_3, func_224(uParam0));
				func_223(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 0x42480000);
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
			func_176("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_4E), 0x000003E8);
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
					unk_0x152BCACCF710B36E(uParam0->f_4, func_222(uParam0->f_7), 0x00000001);
				}
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0x9A8DDC7C522F5BF5(*uParam0, 0x00000000);
				unk_0x9A8DDC7C522F5BF5(uParam0->f_1, 0x00000000);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				unk_0x82E51BCA72537B6C(0x00000320);
				unk_0xA37A90C62806D848(0x00000001);
				unk_0x790015DC92C918E2();
				func_127();
				func_242(uParam0, 0x00000000, 0x00000000);
				iLocal_78 = 0x00000008;
			}
			break;
		
		case 0x00000008:
			if (unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
			{
				func_220(0x00000001, 0x00000001, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			unk_0x9A8DDC7C522F5BF5(*uParam0, 0x00000000);
			unk_0x9A8DDC7C522F5BF5(uParam0->f_1, 0x00000000);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 0x3F800000);
			func_220(0x00000001, 0x00000001, 0x00000001);
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

void func_220(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
	}
	unk_0x2D23BE319D971F4C(0x00000001);
	func_23(0x00000000, 0x00000001, iParam2, 0x00000000, 0x00000000, 0x00000000);
	if (bParam1)
	{
		unk_0xBFE31971E49FA500(0x00000001);
		unk_0x8BCB70EB440DED83(0x00000001);
	}
	func_221(0x00000017, 0x00000000);
}

void func_221(int iParam0, bool bParam1)
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

int func_222(int iParam0)
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

void func_223(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	if (!unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		*uParam0 = unk_0xAE06CCC36C49929C(0x019286A9, vParam1, vParam2, fParam3, 0x00000000, 0x00000002);
	}
}

float func_224(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = 0f;
	vVar1 = { func_40() };
	if (uParam0->f_7 == 0x00000002)
	{
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_225(unk_0x68F4C0EC296D3901(uParam0->f_3, 0x00000001), vVar1);
	return fVar0;
}

float func_225(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_226(int iParam0, int iParam1, int iParam2)
{
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, iParam0);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 15f);
	}
	unk_0x2D23BE319D971F4C(iParam1);
	func_41(0x00000000);
	func_23(0x00000001, 0x00000001, iParam2, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBFE31971E49FA500(0x00000000);
	unk_0x8BCB70EB440DED83(0x00000000);
	func_221(0x00000017, 0x00000001);
}

int func_227(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)
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

int func_228(int iParam0)
{
	if (func_229() && unk_0x1C0640BA9A7327B3() >= iParam0 + 1000)
	{
		unk_0x53491B90E4FD0E56(0x000001F4);
		while (!unk_0x757EF87A33649210())
		{
			SYSTEM::WAIT(0x00000000);
		}
		func_41(0x00000000);
		func_131();
		return 0x00000001;
	}
	return 0x00000000;
}

int func_229()
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

void func_230()
{
	if (func_35())
	{
		unk_0xCB0CD9B929EB37B9("appInternet");
	}
	if (func_34())
	{
		unk_0xCB0CD9B929EB37B9("appCamera");
	}
	if (func_43(0x00000001))
	{
		func_41(0x00000000);
	}
}

void func_231(var uParam0)
{
	var uVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (func_167(uParam0->f_3, 0x00000001) > 30f || func_232(uParam0))
			{
				if (unk_0xD1960163A3042274(uParam0->f_3, 0x950B6492) == 0x00000001 || unk_0xD1960163A3042274(uParam0->f_3, 0x0E763797) == 0x00000001)
				{
					unk_0xF82EA857DA10E0CD(&uVar0);
					unk_0xDD353D0E9C789D0E(&uVar0);
					unk_0xF96A174EE26D7588(0x00000000, uParam0->f_4, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "misscommon@response", "screw_you", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x96167B03C5A77156(0x00000000, uParam0->f_B, uParam0->f_6, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
					unk_0x75ABDC5F81978924(uVar0);
					unk_0x78ADC381772E3D54(uParam0->f_3, uVar0);
					func_335(uParam0, "Player abandoned passenger on pickup.", 0x00000008);
				}
			}
		}
	}
}

int func_232(var uParam0)
{
	if ((unk_0x9C66D99E63E8E24C(uParam0->f_4) > 3f && func_151(uParam0, 0x00000005) > 15f) || unk_0x377BE9A1BF38C7CE(uParam0->f_4))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_233(int iParam0)
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

int func_234(var uParam0, bool bParam1)
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

int func_235(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (!unk_0x03068588A1FCED1A(uParam0->f_3) && func_167(uParam0->f_3, 0x00000001) < fParam2)
		{
			if (!func_140(uParam0, 0x00000005))
			{
				func_281(uParam0, 0x00000005, 0x00000000, 0x00000000);
			}
		}
		else if (func_140(uParam0, 0x00000005))
		{
			func_141(uParam0, 0x00000005, 0x00000000);
		}
		if (((func_151(uParam0, 0x00000005) > IntToFloat(iParam1) && unk_0x9C66D99E63E8E24C(uParam0->f_4) < fParam4) && !unk_0x03068588A1FCED1A(uParam0->f_3)) || func_167(uParam0->f_3, 0x00000001) <= fParam3)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_236(var uParam0, float fParam1)
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
			if ((func_168(uParam0->f_4, uParam0->f_3, 0x00000000) <= fParam1 && !uParam0->f_8E) && unk_0x755FF954DAE327E1((vVar0.z - vVar1.z)) < 5f)
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
				if (!func_204(uParam0->f_2C, 0x00000080))
				{
					func_213(uParam0, 0x00000004, 0x00000001, 0x00000000, 0x00000001);
				}
			}
			else
			{
				func_237(uParam0->f_3, "TAXI_HAIL", uParam0->f_91, 0x00000004);
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

void func_237(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_238(iParam3), 0x00000000);
}

int func_238(int iParam0)
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

float func_239(var uParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (func_311(uParam0))
		{
			return func_168(uParam0->f_4, iParam1, 0x00000001);
		}
	}
	return 0f;
}

void func_240(var uParam0)
{
	func_163(uParam0, uParam0->f_3);
	if (func_311(uParam0))
	{
		if (func_140(uParam0, 0x0000000E))
		{
			func_206(uParam0);
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_A))
			{
				unk_0x142CC44DB769B57E(&(uParam0->f_A));
			}
		}
	}
	if (!func_140(uParam0, 0x00000009))
	{
		if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
		{
			unk_0x7F010F50CE03A8AF(uParam0->f_8, 0x00000000);
			unk_0x661342B9651D16E2(uParam0->f_8, 0x00000000);
		}
		func_281(uParam0, 0x00000009, 0x00000000, 0x00000000);
		func_241("TAXI_OBJ_POL", 0x00001D4C, 0x00000001);
	}
}

void func_241(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

void func_242(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_6E = iParam1;
	if (bParam2)
	{
		func_48();
		func_281(uParam0, 0x00000010, 4f, 0x00000000);
		unk_0x790015DC92C918E2();
	}
}

int func_243(var uParam0, int iParam1)
{
	if (!unk_0x67C1D9E5B91B2E37(0x00000002))
	{
		return 0x00000000;
	}
	func_248(0x0000000C);
	if (func_204(uParam0->f_2C, 0x00000008))
	{
		if (!func_204(uParam0->f_2C, 0x00000080))
		{
			if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()) && !func_204(uParam0->f_2C, 0x00000100))
			{
				func_179(&(uParam0->f_2C), 0x00000100);
			}
			if (func_204(uParam0->f_2C, 0x00000100) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				func_213(uParam0, 0x00000087, 0x00000001, 0x00000000, 0x00000001);
				func_179(&(uParam0->f_2C), 0x00000080);
			}
		}
	}
	if (!func_246(uParam0, iParam1))
	{
		if (func_167(uParam0->f_3, 0x00000001) < 35f)
		{
			if (!func_204(uParam0->f_2C, 0x00000008))
			{
				unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0x00000000);
				func_213(uParam0, 0x00000085, 0x00000001, 0x00000000, 0x00000001);
				func_179(&(uParam0->f_2C), 0x00000008);
			}
		}
		if ((unk_0xEB6A8945D1AC98A1(uParam0->f_3) || unk_0xE9FDA1035CFEA94F(uParam0->f_3)) || func_167(uParam0->f_3, 0x00000001) > 400f)
		{
			func_335(uParam0, "ped is fleeing or injured", 0x00000005);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x6937EA2286828455(uParam0->f_2, 0x00000000);
		unk_0x44A200C9B6E1CEA6(uParam0->f_4, 0x00000001);
		if (unk_0xA30B8362589C124A(uParam0->f_4, 0xFFFFFFFF, 0x00000000) == uParam0->f_2)
		{
			unk_0x2F625BED8BF7F26A(uParam0->f_4);
			func_244(uParam0);
			func_148(0x00000002, 0x00000000);
			bLocal_86 = 0x00000001;
			func_152(&iLocal_82);
			return 0x00000001;
		}
		else
		{
			func_335(uParam0, "No Taxi", 0x00000015);
			func_285("TAXI_DBG_NTAXI", 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_244(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0x00000000))
	{
		if (func_245())
		{
		}
	}
}

int func_245()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_246(var uParam0, int iParam1)
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
				bVar2 = func_233(iVar0);
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
					if (!func_204(uParam0->f_2C, 0x00000040))
					{
						if (unk_0x67C1D9E5B91B2E37(0x00000002))
						{
							func_285("TX_VIP_DMGD", 0xFFFFFFFF);
							if (func_247("TX_VIP_DMGD"))
							{
								func_179(&(uParam0->f_2C), 0x00000040);
							}
						}
					}
					return 0x00000000;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_204(uParam0->f_2C, 0x00000020))
					{
						if (unk_0x67C1D9E5B91B2E37(0x00000002))
						{
							func_285("TX_VIP_CAR", 0xFFFFFFFF);
							if (func_247("TX_VIP_CAR"))
							{
								func_179(&(uParam0->f_2C), 0x00000020);
							}
						}
					}
					return 0x00000000;
				}
				else if (!bVar5)
				{
					if (!func_204(uParam0->f_2C, 0x00000010))
					{
						if (unk_0x67C1D9E5B91B2E37(0x00000002))
						{
							func_285("TX_VIP_SMALL", 0xFFFFFFFF);
							if (func_247("TX_VIP_SMALL"))
							{
								func_179(&(uParam0->f_2C), 0x00000010);
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
			func_145(&(uParam0->f_2C), 0x00000010);
			func_145(&(uParam0->f_2C), 0x00000040);
			func_145(&(uParam0->f_2C), 0x00000020);
		}
	}
	return 0x00000000;
}

bool func_247(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_248(int iParam0)
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

void func_249(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		func_146(&(uParam0->f_64), iVar0);
		iVar0++;
	}
}

void func_250(var uParam0, var uParam1)
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

void func_251(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_252()
{
	Local_165 = 0x00000000;
	func_269(0x0000A62C/*func_271*/, 0x0000A613/*func_270*/, 0x00000001);
	func_269(0x0000A524/*func_267*/, 0x0000A50D/*func_266*/, 0x00000001);
	func_269(0x0000A4CF/*func_265*/, 0x0000A4B6/*func_264*/, 0x00000001);
	func_269(0x0000A46E/*func_263*/, 0x0000A456/*func_262*/, 0x00000001);
	func_269(0x0000A3E8/*func_261*/, 0x0000A3D3/*func_260*/, 0x00000001);
	func_269(0x0000A39E/*func_258*/, 0x0000A385/*func_257*/, 0x00000001);
	func_269(0x0000A2F7/*func_254*/, 0x0000A2E0/*func_253*/, 0x00000001);
}

int func_253(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_335(uParam0, "Taxi Not Driveable", 0x00000001);
	return 0x00000001;
}

int func_254(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_256(uParam0->f_4))
		{
			func_255(uParam0, 0x00000001);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_255(var uParam0, int iParam1)
{
	uParam0->f_75 = 0x00000001;
	uParam0->f_76 = iParam1;
}

int func_256(int iParam0)
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

int func_257(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_335(uParam0, "Didn't lose police in time.", 0x00000009);
	return 0x00000001;
}

int func_258(var uParam0)
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
	{
		if (func_259(uParam0->f_55, 0x00000020))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_259(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_260(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_255(uParam0, 0x0000000B);
	return 0x00000001;
}

int func_261(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (unk_0x70EED0761B82965E(uParam0->f_4) && !unk_0xF79A7BCA9E38BBBC(uParam0->f_4))
		{
			if (!func_140(uParam0, 0x00000019))
			{
				func_281(uParam0, 0x00000019, 0x00000000, 0x00000000);
			}
			else if (func_151(uParam0, 0x00000019) > 2f)
			{
				return 0x00000001;
			}
		}
		else if (func_140(uParam0, 0x00000019))
		{
			func_141(uParam0, 0x00000019, 0x00000000);
		}
	}
	return 0x00000000;
}

int func_262(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_335(uParam0, "Taxi Is Flipped", 0x00000000);
	return 0x00000001;
}

int func_263(var uParam0)
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

int func_264(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_335(uParam0, "Stayed stopped for too long.", 0x00000009);
	return 0x00000001;
}

int func_265(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0x00000000))
	{
		if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
		{
			if (unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
			{
				if (func_259(uParam0->f_56, 0x00000008))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_266(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_335(uParam0, "Taxi Not Driveable", 0x00000000);
	return 0x00000001;
}

int func_267(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_268(uParam0->f_4))
		{
			func_255(uParam0, 0x00000000);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_268(int iParam0)
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

void func_269(int iParam0, int iParam1, bool bParam2)
{
	if (Local_165 >= 0x00000010)
	{
		Local_165 = 0x00000010;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0x00000000;
	func_180(&(Local_165.f_1[Local_165 /*4*/]), 0x00000001);
	if (bParam2)
	{
		func_180(&(Local_165.f_1[Local_165 /*4*/]), 0x00000002);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_270(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_335(uParam0, "Passenger injured.", 0x0000000F);
	return 0x00000001;
}

int func_271(var uParam0)
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

void func_272()
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

int func_273()
{
	if (!func_274(&iLocal_262, 0x00000001))
	{
		func_176("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_262, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0x83D8570832F172A7(iLocal_313))
	{
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(func_280(0x00000000)))
	{
		func_176("TAXI_ASSETS_STREAMED - Loading U_M_M_JewelThief", &iLocal_262, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("MOVE_P_M_ZERO_RUCKSACK"))
	{
		func_176("TAXI_ASSETS_STREAMED - Loading MOVE_P_M_ZERO_RUCKSACK", &iLocal_262, 0x000003E8);
		return 0x00000000;
	}
	return 0x00000001;
}

int func_274(int iParam0, bool bParam1)
{
	if (!unk_0xB87F6CF6E5628C67(func_22()))
	{
		func_176("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (bParam1)
	{
		if (!unk_0xB4AE0788C1587752("gestures@m@standing@casual"))
		{
			func_176("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 0x000003E8);
			return 0x00000000;
		}
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@taxi@"))
	{
		func_176("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@towingcome_here"))
	{
		func_176("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("misscommon@response"))
	{
		func_176("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0x67C1D9E5B91B2E37(0x00000002))
	{
		func_176("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	return 0x00000001;
}

void func_275(var uParam0, int iParam1)
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

int func_276(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		uParam0->f_8 = func_277(uParam0->f_3, 0x00000000, 0x00000000);
		unk_0x138116A08F9AC5F4(0x00000001, 0x00000000);
		unk_0x661342B9651D16E2(uParam0->f_8, 0x00000001);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x0C8C0C840C2D1AD2(uParam0->f_3, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000004);
	}
	return 0x00000001;
}

int func_277(int iParam0, bool bParam1, bool bParam2)
{
	return func_158(iParam0, !bParam1, bParam2);
}

int func_278(var uParam0, vector3 vParam1, vector3 vParam2, char* sParam3, int iParam4, float fParam5, float fParam6)
{
	if (!unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		func_279(uParam0, uParam0->f_E);
		uParam0->f_B = { vParam1 };
		uParam0->f_E = { vParam2 };
		func_37(uParam0->f_E, 0x00000000);
		unk_0x745CE398A4B0A3C6(uParam0->f_E, 2f, 0x00000000);
		func_210(uParam0->f_E, 0x00000000, fParam6);
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

void func_279(var uParam0, vector3 vParam1)
{
	uParam0->f_33[0x00000000] = unk_0xA4B9EE930B45BDFA(vParam1, 20f, 5f, 0x00000000);
}

int func_280(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = joaat("u_m_m_jewelthief");
			break;
		
		case 0x00000001:
			iVar0 = joaat("manana");
			break;
		
		case 0x00000002:
			iVar0 = joaat("issi2");
			break;
		
		case 0x00000003:
			iVar0 = joaat("s_m_y_cop_01");
			break;
		
		case 0x00000004:
			iVar0 = joaat("police2");
			break;
		
		default:
			iVar0 = joaat("u_m_m_jewelthief");
			break;
	}
	return iVar0;
}

void func_281(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 0x00000020)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			if (fParam2 > 0f)
			{
				func_104(&(uParam0->f_92[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_103(&(uParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_104(&(uParam0->f_92[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_103(&(uParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_282()
{
	func_284(0x00000001);
	unk_0x523BCC9DC80CD82F(func_280(0x00000000));
	iLocal_313 = func_283();
	unk_0xAE317D00A5A55DF6("Alarms", 0x00000000, 0xFFFFFFFF);
	unk_0x3F423BF5B8125A50("MOVE_P_M_ZERO_RUCKSACK");
}

int func_283()
{
	return unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

void func_284(bool bParam0)
{
	unk_0x523BCC9DC80CD82F(func_22());
	if (bParam0)
	{
		unk_0x3F423BF5B8125A50("gestures@m@standing@casual");
	}
	unk_0x3F423BF5B8125A50("oddjobs@taxi@");
	unk_0x3F423BF5B8125A50("oddjobs@towingcome_here");
	unk_0x3F423BF5B8125A50("misscommon@response");
	unk_0xD7992BEF7A9D109E("TAXI", 0x00000002);
	if (!func_204(Global_1B416.f_4A94, 0x00000080))
	{
		func_179(&(Global_1B416.f_4A94), 0x00000080);
	}
}

void func_285(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_286(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, 0xFFFFFFFF, 0x00000000) == uParam0->f_2)
		{
			if (func_140(uParam0, 0x0000000E))
			{
				func_206(uParam0);
			}
			func_154(uParam0, 0x00000000);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_287(var uParam0, int iParam1, int iParam2)
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
		if (func_247(uParam0->f_3))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (!unk_0x2EBF5002C6B6A06C(sVar0))
	{
		if (func_247(sVar0))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

void func_288(var uParam0, vector3 vParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x8C74DE122769E1BF())
	{
		if (unk_0x1C0640BA9A7327B3() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0x00000000;
		}
	}
	iVar0 = iParam2;
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
	if (func_247(iVar0))
	{
		func_300();
	}
	if (!unk_0x8C74DE122769E1BF())
	{
		if (func_295(uParam0, bParam4, bParam6, 0x00000000))
		{
			func_294(uParam0, vParam1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0x00000000;
		}
		else if (uParam0->f_6 == 0x00000002)
		{
			if (func_293(iVar0))
			{
				if ((unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0)) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && iParam5)
					{
						if (!func_247(iVar0))
						{
							func_285(iVar0, 0xFFFFFFFF);
							uParam0->f_3 = iVar0;
							if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
							{
								func_292(0x00000001);
							}
						}
					}
				}
			}
		}
		else if (func_293(iVar0))
		{
			if (unk_0x2EBF5002C6B6A06C(uParam0->f_3) && !unk_0x2EBF5002C6B6A06C(iVar0))
			{
				if ((unk_0x8E28E832BEAC3DCE(vParam1, 1f) && !unk_0xFEBC1E4EC9E001F0()) && iParam5)
				{
					if (!func_247(iVar0))
					{
						func_285(iVar0, 0xFFFFFFFF);
						uParam0->f_3 = iVar0;
						if (unk_0x7F8A39872A07D2CE("CMN_HINT", iVar0))
						{
							func_292(0x00000001);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x2EBF5002C6B6A06C(iVar0))
		{
			if (func_247(iVar0) && unk_0xFEBC1E4EC9E001F0())
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
					func_287(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000006) == 0x00000004)
				{
					func_287(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000004) == 0x00000004)
				{
					func_287(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000005) == 0x00000004)
				{
					func_287(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
			{
				if (unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000003 || unk_0xA4FD7964FEE91ED8(0x00000002) == 0x00000004)
				{
					func_287(uParam0, iVar0, 0x00000001);
				}
			}
			else if (unk_0xF3545351E9CBB11F() == 0x00000003 || unk_0xF3545351E9CBB11F() == 0x00000004)
			{
				func_287(uParam0, iVar0, 0x00000001);
			}
		}
		if (!func_295(uParam0, bParam4, bParam6, 0x00000000))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_291(uParam0))
			{
				func_289(uParam0);
			}
		}
	}
}

void func_289(var uParam0)
{
	if (func_290(unk_0x16F2683693E537C9()))
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

int func_290(int iParam0)
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

int func_291(var uParam0)
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

int func_292(bool bParam0)
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

int func_293(char* sParam0)
{
	if (!func_301(0x00000001, 0x00000001, 0x00000000))
	{
		if ((!unk_0xEA6BC48857E0AC4C(sParam0) && func_247(sParam0)) || func_247("CMN_HINT"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
		return 0x00000000;
	}
	switch (Global_A1D7)
	{
		case 0x00000000:
		case 0x00000003:
			if (func_292(0x00000000) < 0x00000003)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_292(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
		case 0x0000000F:
			if (func_292(0x00000000) < 0x00000001)
			{
				return 0x00000001;
			}
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

void func_294(var uParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xF3039DE1FDB4F6FD(0x00000000);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_A;
	if (iParam2 == 0x66EADDF5)
	{
		if (iVar0 < 0x000005DC)
		{
			iVar0 = 0x000005DC;
		}
		if (iVar1 < 0x000005DC)
		{
			iVar1 = 0x000005DC;
		}
	}
	unk_0x98EF6C2D1F172740(vParam1, 0xFFFFFFFF, iVar0, iVar1, iParam2);
	iVar2 = 0x00000800;
	iVar3 = 0x00000003;
	unk_0xDBE4EC9C88839074(unk_0x16F2683693E537C9(), vParam1, 0xFFFFFFFF, iVar2, iVar3);
	unk_0x82A772610883F395("FocusIn", 0x00000000, 0x00000000);
	unk_0x8BC9595FD2792B5D("HINT_CAM_SCENE");
	unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "FocusIn", "HintCamSounds", 0x00000001);
	uParam0->f_B = 0x00000001;
	uParam0->f_8 = unk_0x1C0640BA9A7327B3();
	uParam0->f_1 = 0x00000001;
	*uParam0 = 0x00000000;
}

int func_295(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_299(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000001;
						uParam0->f_7 = 0x00000001;
					}
				}
				else if (func_298(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (func_298(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			else if (uParam0->f_6 == 0x00000002)
			{
				if (func_299(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x1C0640BA9A7327B3();
					uParam0->f_5 = 0x00000001;
					uParam0->f_7 = 0x00000001;
				}
			}
			if (func_291(uParam0))
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
						if (!func_299(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x1C0640BA9A7327B3();
							uParam0->f_5 = 0x00000003;
						}
					}
					else if (!func_298(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (!func_298(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x1C0640BA9A7327B3();
						uParam0->f_5 = 0x00000003;
					}
				}
				else if (uParam0->f_6 == 0x00000002)
				{
					if (!func_299(bParam1, bParam2, bParam3))
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
					if (!func_299(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (!func_298(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0x00000000;
				}
			}
			else if (uParam0->f_6 == 0x00000001)
			{
				if (!func_298(bParam1, bParam2, bParam3) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
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
				else if (!func_299(bParam1, bParam2, bParam3))
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
						if (func_297(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0x00000000;
						}
					}
					else if (func_296(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
				else if (uParam0->f_6 == 0x00000001)
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001) || func_296(bParam1, bParam2, bParam3))
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
					else if (func_297(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0x00000000;
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_291(uParam0))
			{
				uParam0->f_5 = 0x00000000;
			}
			break;
	}
	if (!func_301(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0x00000000;
		uParam0->f_7 = 0x00000000;
	}
	if (uParam0->f_7)
	{
		func_300();
		return 0x00000001;
	}
	else
	{
		return 0x00000000;
	}
	return 0x00000000;
}

int func_296(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
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

int func_297(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
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

int func_298(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
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

int func_299(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_301(bParam0, bParam1, bParam2))
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

void func_300()
{
	unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000004);
}

int func_301(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_43(0x00000000))
	{
		return 0x00000000;
	}
	if (func_310())
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
	if ((func_309() || func_308(Global_440000.f_38DB3)) || func_307())
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			iVar1 = func_306(unk_0x16F2683693E537C9(), 0x00000000);
			if (((unk_0x137240CA2BADB0D2(iVar0, iVar1) || (unk_0x134B62B726CEC8E6(iVar0) == 0x2189D250 && iVar1 != 0xFFFFFFFF)) || (unk_0x134B62B726CEC8E6(iVar0) == 0x46699F47 && iVar1 != 0xFFFFFFFF)) || (((unk_0x134B62B726CEC8E6(iVar0) == 0x9B16A3B4 && iVar1 == 0x00000000) && func_305(iVar0, 0x0000000A)) && unk_0x0ECB5CA5140957AD(iVar0, 0x0000000A) != 0xFFFFFFFF))
			{
				return 0x00000000;
			}
		}
	}
	if (Global_19BCC2)
	{
		return 0x00000000;
	}
	if (func_302(unk_0xD803B885F5E47A62()))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_302(int iParam0)
{
	if (iParam0 != func_304())
	{
		if (func_303(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
		else if ((Global_14086D && iParam0 == unk_0xD803B885F5E47A62()) && func_303(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

int func_303(int iParam0, bool bParam1, bool bParam2)
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

int func_304()
{
	return 0xFFFFFFFF;
}

int func_305(int iParam0, int iParam1)
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

int func_306(int iParam0, int iParam1)
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

var func_307()
{
	return Global_2564C8.f_11;
}

bool func_308(int iParam0)
{
	return iParam0 == 0x00000033;
}

var func_309()
{
	return Global_2564C8.f_10;
}

bool func_310()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_311(var uParam0)
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

void func_312(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_19B == 0x00000000)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
		{
			if (bParam2)
			{
				if (func_151(uParam0, 0x0000000A) > (20f + 10f))
				{
					if (uParam0->f_70)
					{
						func_213(uParam0, 0x0000005C, 0x00000001, 0x00000000, 0x00000000);
						uParam0->f_70 = 0x00000000;
					}
					else
					{
						func_213(uParam0, 0x00000053, 0x00000001, 0x00000000, 0x00000000);
					}
					uParam0->f_71 = 0x00000001;
					func_281(uParam0, 0x0000000A, 0f, 0x00000001);
				}
			}
			else if (func_151(uParam0, 0x0000000A) > 20f)
			{
				if (uParam0->f_70)
				{
					func_213(uParam0, 0x0000005C, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_70 = 0x00000000;
				}
				else
				{
					func_213(uParam0, 0x00000053, 0x00000001, 0x00000000, 0x00000000);
				}
				uParam0->f_71 = 0x00000001;
				func_281(uParam0, 0x0000000A, 0f, 0x00000001);
			}
		}
	}
	if (uParam0->f_19B == 0x00000001)
	{
		if (func_151(uParam0, 0x0000000A) > 30f)
		{
			if (!func_133())
			{
				if (uParam0->f_70)
				{
					func_213(uParam0, 0x0000005C, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_70 = 0x00000000;
				}
				else
				{
					func_213(uParam0, 0x00000053, 0x00000001, 0x00000000, 0x00000000);
				}
				uParam0->f_71 = 0x00000001;
				func_281(uParam0, 0x0000000A, 0f, 0x00000001);
			}
		}
	}
	if (func_204(uParam0->f_64, 0x00000040))
	{
		if (!func_17(&(Local_162[0x00000005 /*10*/].f_6)))
		{
			func_152(&(Local_162[0x00000005 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[0x00000005 /*10*/].f_6)) > 6f)
		{
			if (func_334(uParam0))
			{
				if (uParam0->f_71)
				{
					func_213(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_213(uParam0, Local_162[0x00000005 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_333(uParam0, 0x00000001);
				func_331(0x00000005, uParam0);
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_64, 0x00000001))
	{
		if (!func_17(&(Local_162[0x00000000 /*10*/].f_6)))
		{
			func_152(&(Local_162[0x00000000 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[0x00000000 /*10*/].f_6)) > 5f)
		{
			if (func_330(uParam0))
			{
				func_333(uParam0, 0x00000001);
				func_331(0x00000000, uParam0);
				if (uParam0->f_71)
				{
					func_213(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_213(uParam0, Local_162[0x00000000 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_64, 0x00000002))
	{
		if (!func_17(&(Local_162[0x00000001 /*10*/].f_6)))
		{
			func_152(&(Local_162[0x00000001 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[0x00000001 /*10*/].f_6)) > 5f)
		{
			if (func_329(uParam0))
			{
				func_333(uParam0, 0x00000001);
				func_331(0x00000001, uParam0);
				if (uParam0->f_71)
				{
					func_213(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_213(uParam0, Local_162[0x00000001 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_64, 0x00000800))
	{
		if (!func_17(&(Local_162[0x00000008 /*10*/].f_6)))
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_4))
			{
				uParam0->f_2E = unk_0x7F6DC62EA9922664(uParam0->f_4);
				func_152(&(Local_162[0x00000008 /*10*/].f_6));
			}
		}
		else if (func_101(&(Local_162[0x00000008 /*10*/].f_6)) > 7f || Local_162[0x00000008 /*10*/].f_1 == 0x00000000)
		{
			if (func_328(uParam0))
			{
				func_333(uParam0, 0x00000001);
				func_331(0x00000008, uParam0);
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_64, 0x00000080))
	{
		if (!func_17(&(Local_162[0x00000006 /*10*/].f_6)))
		{
			func_152(&(Local_162[0x00000006 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[0x00000006 /*10*/].f_6)) > 5f)
		{
			if (func_327(uParam0))
			{
				func_333(uParam0, 0x00000001);
				func_331(0x00000006, uParam0);
				if (uParam0->f_71)
				{
					func_213(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_213(uParam0, Local_162[0x00000006 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_64, 0x00000020))
	{
		if (!func_17(&(Local_162[0x00000004 /*10*/].f_6)))
		{
			func_152(&(Local_162[0x00000004 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[0x00000004 /*10*/].f_6)) > 4f)
		{
			if (func_326(uParam0))
			{
				func_333(uParam0, 0x00000001);
				func_331(0x00000004, uParam0);
				if (uParam0->f_71)
				{
					func_213(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_213(uParam0, Local_162[0x00000004 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_64, 0x00000100))
	{
		if (!func_17(&(Local_162[0x00000007 /*10*/].f_6)))
		{
			func_152(&(Local_162[0x00000007 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[0x00000007 /*10*/].f_6)) > 5f || Local_162[0x00000007 /*10*/].f_1 == 0x00000000)
		{
			if (func_325(uParam0))
			{
				func_331(0x00000007, uParam0);
				func_333(uParam0, 0x00000001);
				if (uParam0->f_71)
				{
					func_213(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_213(uParam0, Local_162[0x00000007 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000001);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_64, 0x00000008))
	{
		if (!func_17(&(Local_162[0x00000009 /*10*/].f_6)))
		{
			func_152(&(Local_162[0x00000009 /*10*/].f_6));
		}
		else if (func_101(&(Local_162[0x00000009 /*10*/].f_6)) <= 7f)
		{
			unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
		}
		else if (func_101(&(Local_162[0x00000009 /*10*/].f_6)) > 7f || Local_162[0x00000009 /*10*/].f_1 == 0x00000000)
		{
			if (func_324(uParam0))
			{
				func_333(uParam0, 0x00000001);
				func_331(0x00000009, uParam0);
				if (uParam0->f_71)
				{
					func_213(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_213(uParam0, Local_162[0x00000009 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000001);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_64, 0x00004000))
	{
		if (!func_17(&(Local_162[0x0000000D /*10*/].f_6)))
		{
			func_152(&(Local_162[0x0000000D /*10*/].f_6));
		}
		else if (func_101(&(Local_162[0x0000000D /*10*/].f_6)) > 10f)
		{
			if (func_318(uParam0))
			{
				func_333(uParam0, 0x00000001);
				func_331(0x0000000D, uParam0);
				if (uParam0->f_71)
				{
					func_213(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_213(uParam0, Local_162[0x0000000D /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_64, 0x00008000))
	{
		if (!func_17(&(Local_162[0x0000000E /*10*/].f_6)))
		{
			func_152(&(Local_162[0x0000000E /*10*/].f_6));
		}
		else if (func_101(&(Local_162[0x0000000E /*10*/].f_6)) > 7f)
		{
			if (func_317(uParam0))
			{
				func_333(uParam0, 0x00000001);
				func_331(0x0000000E, uParam0);
				if (uParam0->f_71)
				{
					func_213(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_213(uParam0, Local_162[0x0000000E /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_64, 0x00001000))
	{
		if (!func_17(&(Local_162[0x0000000B /*10*/].f_6)))
		{
			func_152(&(Local_162[0x0000000B /*10*/].f_6));
		}
		else if (func_101(&(Local_162[0x0000000B /*10*/].f_6)) > 8f)
		{
			if (func_316(uParam0))
			{
				func_333(uParam0, 0x00000001);
				func_331(0x0000000B, uParam0);
				if (uParam0->f_71)
				{
					func_213(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_213(uParam0, Local_162[0x0000000B /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_64, 0x00002000))
	{
		if (!func_17(&(Local_162[0x0000000C /*10*/].f_6)))
		{
			func_152(&(Local_162[0x0000000C /*10*/].f_6));
		}
		else if (func_101(&(Local_162[0x0000000C /*10*/].f_6)) > 5f)
		{
			if (func_315(uParam0))
			{
				func_333(uParam0, 0x00000001);
				func_331(0x0000000C, uParam0);
				if (uParam0->f_71)
				{
					func_213(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_213(uParam0, Local_162[0x0000000C /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_142(uParam0);
			}
		}
	}
	if (func_204(uParam0->f_64, 0x00000004))
	{
		if (!func_17(&(Local_162[0x00000002 /*10*/].f_6)))
		{
			func_314(&(Local_162[0x00000002 /*10*/].f_6), 0f);
		}
		else if (func_101(&(Local_162[0x00000002 /*10*/].f_6)) > 5f)
		{
			if (func_313(uParam0))
			{
				if (uParam0->f_71)
				{
					func_213(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_213(uParam0, Local_162[0x00000002 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_333(uParam0, 0x00000001);
				func_331(0x00000002, uParam0);
				func_142(uParam0);
			}
		}
	}
}

int func_313(var uParam0)
{
	float fVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_2))
	{
		if ((!unk_0x4024663A44BC1535(uParam0->f_2) && !func_17(&(Local_162[0x00000000 /*10*/].f_3))) && !func_17(&(Local_162[0x00000001 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[0x00000002 /*10*/].f_3)))
			{
				uParam0->f_25 = unk_0x9C66D99E63E8E24C(uParam0->f_2);
				if (uParam0->f_25 > 10f)
				{
					func_152(&(Local_162[0x00000002 /*10*/].f_3));
				}
			}
			else if (func_101(&(Local_162[0x00000002 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_26 = uParam0->f_25;
				uParam0->f_25 = unk_0x9C66D99E63E8E24C(uParam0->f_2);
				fVar0 = (uParam0->f_26 - uParam0->f_25);
				func_100(&(Local_162[0x00000002 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_25 < 12f)
				{
					return 0x00000001;
				}
			}
		}
		else
		{
			func_100(&(Local_162[0x00000002 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

void func_314(int iParam0, float fParam1)
{
	if (!func_17(iParam0))
	{
		func_104(iParam0, fParam1);
	}
}

int func_315(var uParam0)
{
	vector3 vVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 0x00000001) };
		if (vVar0.y < -10f && !func_17(&(Local_162[0x00000000 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[0x0000000C /*10*/].f_3)))
			{
				func_152(&(Local_162[0x0000000C /*10*/].f_3));
			}
			else if (func_101(&(Local_162[0x0000000C /*10*/].f_3)) > 5f)
			{
				func_100(&(Local_162[0x0000000C /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_100(&(Local_162[0x0000000C /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_316(var uParam0)
{
	vector3 vVar0;
	
	if ((((((unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000) && !func_17(&(Local_162[0x00000000 /*10*/].f_3))) && !func_17(&(Local_162[0x00000001 /*10*/].f_3))) && !func_17(&(Local_162[0x00000005 /*10*/].f_3))) && !func_17(&(Local_162[0x00000009 /*10*/].f_3))) && !func_17(&(Local_162[0x00000007 /*10*/].f_3))) && !func_17(&(Local_162[0x00000008 /*10*/].f_3)))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 0x00000001) };
		if (unk_0x755FF954DAE327E1(vVar0.x) > 2.5f && !func_17(&(Local_162[0x00000000 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[0x0000000B /*10*/].f_3)))
			{
				func_152(&(Local_162[0x0000000B /*10*/].f_3));
				fLocal_164 = vVar0.x;
			}
			else if (func_101(&(Local_162[0x0000000B /*10*/].f_3)) < 1.5f && (unk_0x755FF954DAE327E1(fLocal_164) - unk_0x755FF954DAE327E1(vVar0.x)) < 0f)
			{
				func_100(&(Local_162[0x0000000B /*10*/].f_3));
				return 0x00000001;
			}
			else if (func_101(&(Local_162[0x0000000B /*10*/].f_3)) >= 1.5f)
			{
				func_100(&(Local_162[0x0000000B /*10*/].f_3));
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

int func_317(var uParam0)
{
	if (((((unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000) && !func_17(&(Local_162[0x00000000 /*10*/].f_3))) && !func_17(&(Local_162[0x00000008 /*10*/].f_3))) && !func_17(&(Local_162[0x00000005 /*10*/].f_3))) && !func_17(&(Local_162[0x00000009 /*10*/].f_3))) && !func_17(&(Local_162[0x00000007 /*10*/].f_3)))
	{
		if (!func_17(&(Local_162[0x0000000E /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(uParam0->f_4, 0x00000001), 10f, 0x00000000, 0x00000104);
			if (unk_0xC844350D5D58C99A(uParam0->f_5))
			{
				if ((unk_0x9C66D99E63E8E24C(uParam0->f_4) > 15f && func_168(uParam0->f_5, uParam0->f_4, 0x00000001) < 3f) && (!unk_0x437347B10A200C4B(uParam0->f_5, 0x00000000) && !unk_0xBBA8A868118C90ED(uParam0->f_5, 0xFFFFFFFF, 0x00000000)))
				{
					func_152(&(Local_162[0x0000000E /*10*/].f_3));
				}
			}
		}
		else if ((func_101(&(Local_162[0x0000000E /*10*/].f_3)) < 1.5f && func_168(uParam0->f_5, uParam0->f_4, 0x00000001) > 4.5f) && !unk_0xE147126C9AD09A60(uParam0->f_5))
		{
			func_100(&(Local_162[0x0000000E /*10*/].f_3));
			return 0x00000001;
		}
		else if (func_101(&(Local_162[0x0000000E /*10*/].f_3)) >= 1.5f)
		{
			func_100(&(Local_162[0x0000000E /*10*/].f_3));
			return 0x00000000;
		}
		else if (unk_0xE147126C9AD09A60(uParam0->f_5))
		{
			func_100(&(Local_162[0x0000000E /*10*/].f_3));
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_318(var uParam0)
{
	if (((unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000) && !func_17(&(Local_162[0x00000009 /*10*/].f_3))) && !func_17(&(Local_162[0x00000007 /*10*/].f_3))) && !func_17(&(Local_162[0x00000004 /*10*/].f_3)))
	{
		if (!func_319(uParam0->f_4) && unk_0x9C66D99E63E8E24C(uParam0->f_4) > 15f)
		{
			if (!func_17(&(Local_162[0x0000000D /*10*/].f_3)))
			{
				func_152(&(Local_162[0x0000000D /*10*/].f_3));
			}
			else if (func_101(&(Local_162[0x0000000D /*10*/].f_3)) > 5f)
			{
				func_100(&(Local_162[0x0000000D /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_100(&(Local_162[0x0000000D /*10*/].f_3));
		}
	}
	return 0x00000000;
}

bool func_319(int iParam0)
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
	vVar3 = { func_323((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_322(vVar3, 0x00000000) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_320(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vVar5, vVar6, vVar7);
}

int func_320(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
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
	vVar0 = { func_323(vParam2 - vParam1) };
	vVar1 = { func_323(vParam3 - vParam1) };
	fVar2 = func_321(vParam0, vVar0);
	fVar3 = func_321(vParam1, vVar0);
	fVar4 = func_321(vParam2, vVar0);
	fVar5 = func_321(vParam0, vVar1);
	fVar6 = func_321(vParam1, vVar1);
	fVar7 = func_321(vParam3, vVar1);
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

float func_321(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_322(vector3 vParam0, int iParam1)
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

Vector3 func_323(vector3 vParam0)
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

int func_324(var uParam0)
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

int func_325(var uParam0)
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

int func_326(var uParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		iVar0 = unk_0xB32FE193F79AD48C(unk_0xD803B885F5E47A62());
		if (iVar0 == 0x00000000)
		{
			if (!func_17(&(Local_162[0x00000004 /*10*/].f_3)))
			{
				func_152(&(Local_162[0x00000004 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[0x00000004 /*10*/].f_3)) > 2f)
			{
				func_100(&(Local_162[0x00000004 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_100(&(Local_162[0x00000004 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_327(var uParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		iVar0 = unk_0x00AC2C41F7B083B2(unk_0xD803B885F5E47A62());
		if (iVar0 == 0x00000000)
		{
			if (!func_17(&(Local_162[0x00000006 /*10*/].f_3)))
			{
				func_152(&(Local_162[0x00000006 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[0x00000006 /*10*/].f_3)) > 3.5f)
			{
				func_100(&(Local_162[0x00000006 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_100(&(Local_162[0x00000006 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_328(var uParam0)
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
					func_213(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_213(uParam0, 0x00000048, 0x00000001, 0x00000000, 0x00000001);
				}
				func_100(&(Local_162[0x00000002 /*10*/].f_6));
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_329(var uParam0)
{
	vector3 vVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 0x00000001) };
		if (unk_0x755FF954DAE327E1(vVar0.x) > 3f && !func_17(&(Local_162[0x00000000 /*10*/].f_3)))
		{
			if (!func_17(&(Local_162[0x00000001 /*10*/].f_3)))
			{
				func_152(&(Local_162[0x00000001 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[0x00000001 /*10*/].f_3)) > 1.2f)
			{
				func_100(&(Local_162[0x00000001 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_100(&(Local_162[0x00000001 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_330(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xF79A7BCA9E38BBBC(uParam0->f_4) && unk_0xE934758D273C899A(uParam0->f_4))
		{
			if (!func_17(&(Local_162[0x00000000 /*10*/].f_3)))
			{
				func_152(&(Local_162[0x00000000 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[0x00000000 /*10*/].f_3)) > 0.7f)
			{
				func_100(&(Local_162[0x00000000 /*10*/].f_3));
				func_103(&(Local_162[0x00000001 /*10*/].f_6));
				return 0x00000001;
			}
		}
		else
		{
			func_100(&(Local_162[0x00000000 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

void func_331(int iParam0, var uParam1)
{
	Local_162[iParam0 /*10*/].f_1++;
	func_332(uParam1, iParam0);
	func_100(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_70 = 0x00000001;
}

void func_332(var uParam0, int iParam1)
{
	uParam0->f_4C = (uParam0->f_4C + Local_162[iParam1 /*10*/]);
}

void func_333(var uParam0, int iParam1)
{
	uParam0->f_68 = (uParam0->f_68 + iParam1);
}

int func_334(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0x9C66D99E63E8E24C(uParam0->f_4) > 25f)
		{
			if (!func_17(&(Local_162[0x00000005 /*10*/].f_3)))
			{
				func_152(&(Local_162[0x00000005 /*10*/].f_3));
			}
			else if (func_101(&(Local_162[0x00000005 /*10*/].f_3)) > 3.5f)
			{
				func_100(&(Local_162[0x00000005 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_100(&(Local_162[0x00000005 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

void func_335(var uParam0, char* sParam1, int iParam2)
{
	vector3 vVar0;
	
	func_131();
	func_444(0x00000002);
	vVar0 = { func_123() };
	if ((!unk_0xEA6BC48857E0AC4C(&vVar0) && func_133()) && !unk_0x7F8A39872A07D2CE(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0x790015DC92C918E2();
		unk_0xA37A90C62806D848(0x00000001);
		StringCopy(&vVar0, uParam0->f_8F, 24);
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
		{
			if (!func_202(uParam0))
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
		func_281(uParam0, 0x00000003, 0x00000000, 0x00000000);
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
				func_352(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 0x00000004);
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
			func_352(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_19F == 0x0000000F)
		{
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 0x00000002)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_352(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 0x00000003)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_352(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x00000004)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_352(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x00000005)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_352(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
			if (func_202(uParam0))
			{
				if (unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
				{
					func_350(uParam0, 0x00001000, 0x00000000);
				}
				else
				{
					func_350(uParam0, 0x00000000, 0x00000000);
				}
			}
		}
		else if (iParam2 == 0x00000006)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_352(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 0x00000007)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_352(uParam0, &vVar0);
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
				func_352(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_237(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_91, 0x00000004);
			}
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 0x0000000C)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_352(uParam0, &vVar0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x0000000D)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_352(uParam0, &vVar0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 0x0000000B)
		{
			func_148(0x00000008, 0x00000000);
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
				func_352(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_237(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_91, 0x00000004);
			}
			func_350(uParam0, 0x00000000, 0x00000000);
			func_352(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0x00000000)
		{
			func_148(0x00000008, 0x00000000);
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
				func_352(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 0x00000004);
			}
			func_352(uParam0, &vVar0);
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 0x00000001)
		{
			func_148(0x00000008, 0x00000000);
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
				func_352(uParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 0x00000004);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 0x00000013)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_349(&vVar0);
			func_336(&(uParam0->f_F4), "OJTXAUD", &vVar0, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
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
			func_352(uParam0, &vVar0);
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
					func_352(uParam0, &vVar0);
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
			{
				func_237(uParam0->f_3, "TAXI_FAIL", uParam0->f_91, 0x00000004);
			}
			StringCopy(&(uParam0->f_82), "TAXI_OBJ_FAIL", 24);
			func_148(0x00000003, 0x00000000);
		}
		func_281(uParam0, 0x00000003, 0f, 0x00000001);
	}
}

int func_336(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_337(sParam2, iParam3, 0x00000000);
}

int func_337(char* sParam0, int iParam1, bool bParam2)
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
					func_132();
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
		if (func_347(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_346();
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
				func_345();
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
				if (func_344())
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
			if (func_31())
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
			func_343();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_342();
		func_338();
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
		func_132();
	}
	return 0x00000000;
}

void func_338()
{
	if (!func_339())
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

int func_339()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_304())
	{
		return 0x00000000;
	}
	if (func_340(unk_0xD803B885F5E47A62()))
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

bool func_340(int iParam0)
{
	return func_341(iParam0, 0x00000014);
}

bool func_341(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

void func_342()
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

void func_343()
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

int func_344()
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

void func_345()
{
	if (func_74(0x0000000E))
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
		Global_4C1E = func_97();
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

void func_346()
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

bool func_347(int iParam0, int iParam1)
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

void func_348(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_349(char* sParam0)
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

void func_350(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		unk_0x11AD11297DC58CC7(uParam0->f_3, 0x00000000);
		unk_0xE910A68AA670B4AA(uParam0->f_3);
		unk_0xBAFED2F6486F771A(uParam0->f_3, 0x00000003, 0x00000000);
		unk_0xAFF39FB306F8E232(uParam0->f_3, 0x00000011, 0x00000001);
		unk_0xA3BF0AA5A2608191(uParam0->f_3);
		if ((func_201(uParam0->f_3, uParam0->f_1D, 0x00000001) <= 200f && !func_112(uParam0->f_1D)) && !bParam2)
		{
			func_351(uParam0);
		}
		else
		{
			unk_0xBAFED2F6486F771A(uParam0->f_3, 0x00000400, 0x00000001);
			unk_0xBAFED2F6486F771A(uParam0->f_3, 0x00020000, 0x00000001);
			unk_0xDD353D0E9C789D0E(&uVar0);
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
			unk_0x75ABDC5F81978924(uVar0);
			unk_0x78ADC381772E3D54(uParam0->f_3, uVar0);
			unk_0xF82EA857DA10E0CD(&uVar0);
		}
		unk_0xFADC0A217229F6B5(uParam0->f_3, 0x00000001);
	}
}

void func_351(var uParam0)
{
	var uVar0;
	
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (func_39(func_40(), uParam0->f_1D, 0x00000000))
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
			unk_0xF82EA857DA10E0CD(&uVar0);
			unk_0xDD353D0E9C789D0E(&uVar0);
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
			unk_0x75ABDC5F81978924(uVar0);
			unk_0x78ADC381772E3D54(uParam0->f_3, uVar0);
			unk_0xF82EA857DA10E0CD(&uVar0);
		}
		unk_0xFADC0A217229F6B5(uParam0->f_3, 0x00000001);
	}
}

void func_352(var uParam0, char* sParam1)
{
	if (func_353(uParam0))
	{
		func_336(&(uParam0->f_F4), uParam0->f_90, sParam1, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
	}
}

int func_353(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (func_168(unk_0x16F2683693E537C9(), uParam0->f_3, 0x00000001) < 40f && !unk_0x03068588A1FCED1A(uParam0->f_3))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_354(var uParam0)
{
	return uParam0->f_76;
}

void func_355()
{
	func_384(&Local_231);
	if (func_383(&Local_231, &Local_330))
	{
		switch (Local_330.f_1B)
		{
			case 0x00000000:
				if (Local_231.f_19A == 0x00000009)
				{
					if (!func_139(&Local_231))
					{
						if (func_382("TX_OBJ_CYI_DO") || unk_0xE4EDC4B0E92C078B(Local_231.f_9))
						{
							Local_330.f_1B++;
						}
						else if (func_203(&Local_231) != 0x0000000A)
						{
							func_213(&Local_231, 0x0000000A, 0x00000001, 0x00000000, 0x00000001);
						}
					}
				}
				break;
			
			case 0x00000001:
				if ((func_203(&Local_231) > 0x0000000A && func_203(&Local_231) != 0x0000000F) && !func_139(&Local_231))
				{
					func_213(&Local_231, 0x0000000F, 0x00000001, 0x00000000, 0x00000000);
					func_188(&Local_231, 0x00000007);
				}
				break;
			
			case 0x00000002:
				if (func_151(&Local_231, 0x00000012) > 2f)
				{
					func_213(&Local_231, 0x00000010, 0x00000001, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000003:
				if (func_151(&Local_231, 0x00000012) > 2f)
				{
					func_213(&Local_231, 0x00000011, 0x00000001, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000005:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001)
				{
					if ((((func_203(&Local_231) != 0x00000021 && !func_381(&Local_231)) && !func_139(&Local_231)) && !bLocal_256) && Local_231.f_19A > 0x00000009)
					{
						if (func_151(&Local_231, 0x00000012) > 2f)
						{
							func_213(&Local_231, 0x00000021, 0x00000001, 0x00000000, 0x00000001);
							func_281(&Local_231, 0x00000010, 4f, 0x00000000);
							if (bLocal_329)
							{
							}
						}
					}
					else
					{
						if (func_203(&Local_231) != 0x00000021)
						{
						}
						if (!func_381(&Local_231))
						{
						}
						if (!func_139(&Local_231))
						{
						}
						if (!bLocal_256)
						{
						}
						if (Local_231.f_19A > 0x00000009)
						{
						}
					}
				}
				break;
			
			case 0x00000006:
				if (((func_151(&Local_231, 0x00000010) > 4f && func_203(&Local_231) != 0x00000022) && !func_139(&Local_231)) && !func_381(&Local_231))
				{
					func_213(&Local_231, 0x00000022, 0x00000001, 0x00000000, 0x00000000);
					if (bLocal_329)
					{
					}
				}
				break;
			
			case 0x00000007:
				Local_330.f_1B++;
				break;
			}
	}
	func_356(&Local_231, &uLocal_333, &Local_330, bLocal_329);
}

int func_356(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_363(uParam0, uParam1);
	if (((*uParam2 == 0xFFFFFFFF && uParam0->f_19A < 0x0000001D) && !uParam0->f_6D) && !func_140(uParam0, 0x00000002))
	{
		if (func_362(uParam1))
		{
			*uParam2 = 0x00000001;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x1C0640BA9A7327B3() % 0x000007D0) < 0x00000032)
		{
		}
	}
	if (!uParam0->f_6D)
	{
		switch (*uParam2)
		{
			case 0x00000001:
				if (!func_381(uParam0))
				{
					uParam2->f_7 = { func_361(uParam1) };
					func_336(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_7), 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					*uParam2 = 0x00000002;
					if (bParam3)
					{
					}
				}
				break;
			
			case 0x00000002:
				if (func_133())
				{
					uParam2->f_D = { func_173() };
					if (unk_0x7F8A39872A07D2CE(&(uParam2->f_D), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_180(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_359(uParam1);
					func_281(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0xFFFFFFFF;
					if (bParam3)
					{
					}
					return 0x00000001;
				}
				break;
			
			case 0x00000003:
				if (func_144(uParam0))
				{
					if (func_133())
					{
						func_281(uParam0, 0x00000011, 0f, 0x00000001);
						uParam2->f_1 = { func_358() };
						if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 0x00000001)
						{
							*uParam2 = 0x00000000;
						}
						else
						{
							*uParam2 = 0x00000004;
						}
					}
				}
				else if (func_133())
				{
					uParam2->f_13 = { func_123() };
				}
				else
				{
					func_180(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_359(uParam1);
					func_281(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0xFFFFFFFF;
					if (bParam3)
					{
					}
					return 0x00000001;
				}
				break;
			
			case 0x00000004:
				if (((!func_140(uParam0, 0x0000000E) && !func_133()) && !func_144(uParam0)) && func_151(uParam0, 0x00000012) > 1f)
				{
					func_281(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0x00000006;
					if (bParam3)
					{
					}
				}
				break;
			
			case 0x00000006:
				if (!func_133())
				{
					if (func_151(uParam0, 0x00000012) > 1f)
					{
						if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1)))
						{
							func_357(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_D), &(uParam2->f_1), 0x00000008, 0x00000000, 0x00000000);
							if (bParam3)
							{
							}
						}
						*uParam2 = 0x00000003;
					}
				}
				break;
			
			case 0x00000007:
				if (!func_133())
				{
					func_180(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_359(uParam1);
					func_281(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0xFFFFFFFF;
				}
				break;
			}
	}
	return 0x00000000;
}

int func_357(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_337(sParam2, iParam4, 0x00000000);
}

struct<6> func_358()
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

void func_359(var uParam0)
{
	int iVar0;
	
	iVar0 = func_360(uParam0);
	if (iVar0 > 0xFFFFFFFF)
	{
		func_145(&((uParam0[iVar0 /*8*/])->f_7), 0x00000002);
		func_145(&((uParam0[iVar0 /*8*/])->f_7), 0x00000004);
		func_179(&((uParam0[iVar0 /*8*/])->f_7), 0x00000008);
		StringCopy(uParam0[iVar0 /*8*/], func_200(), 24);
	}
}

int func_360(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_204((uParam0[iVar0 /*8*/])->f_7, 0x00000004))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

struct<6> func_361(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_204((uParam0[iVar0 /*8*/])->f_7, 0x00000002))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_179(&((uParam0[iVar0 /*8*/])->f_7), 0x00000004);
		}
		iVar0++;
	}
	return Var1;
}

int func_362(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_204((uParam0[iVar0 /*8*/])->f_7, 0x00000002))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_363(var uParam0, var uParam1)
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_381(uParam0))
	{
	}
	else if (!uParam0->f_6E)
	{
	}
	else if (func_140(uParam0, 0x0000000E))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_203(uParam0))
		{
			case 0x00000037:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_380(&(uParam0->f_5D), 0x00000003, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_378(0x00000004, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000002:
				if (!func_133())
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
						func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					}
				}
				else
				{
					func_374(uParam0, vVar0, func_376(uParam0, 0x00000002));
				}
				if (func_204(uParam0->f_62, 0x00000004))
				{
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_242(uParam0, 0x00000000, 0x00000000);
				}
				func_160(uParam0, &(uParam0->f_62), 0x00000004, 0x00000003);
				break;
			
			case 0x00000003:
				if (func_151(uParam0, 0x00000010) > 1f)
				{
					func_162(0x00000001);
					if (uParam0->f_19B == 0x00000009)
					{
						func_241("TAXI_OBJ_RETURN", 0x00001D4C, 0x00000001);
					}
					else
					{
						func_241("TAXI_VIP_RETURN", 0x00001D4C, 0x00000001);
					}
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_242(uParam0, 0x00000000, 0x00000000);
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
					func_377(uParam0, &vVar0, 0x00000000, 0x00000001, 0x00000008);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_237(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_91, 0x00000004);
				}
				break;
		}
	}
	else if ((func_151(uParam0, 0x00000010) > func_159(uParam0->f_19B == 0x00000000, 1f, 4f) && !uParam0->f_8E) && (((uParam0->f_19B == 0x00000000 || uParam0->f_19B == 0x00000001) && !func_133()) || (uParam0->f_19B != 0x00000000 && uParam0->f_19B != 0x00000001)))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_203(uParam0))
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
				func_377(uParam0, &vVar0, 0x00000001, 0x00000000, 0x00000008);
				break;
			
			case 0x00000038:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_380(&(uParam0->f_5D), 0x00000003, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_378(0x00000004, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000000:
				if (uParam0->f_19B == 0x00000009)
				{
					func_336(&(uParam0->f_F4), "OJTXAUD", "OJTX_PRO_CON", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				func_213(uParam0, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000001:
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_213(uParam0, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				break;
			
			case 0x00000004:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_204(uParam0->f_2C, 0x00000080))
				{
					if ((uParam0->f_19B == 0x00000000 || uParam0->f_19B == 0x00000001) || uParam0->f_19B == 0x00000004)
					{
						func_380(&(uParam0->f_63), 0x00000004, &cVar1, 0x00000000, 0x00000001, 0x00000000);
						func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
					}
					else
					{
						func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					}
				}
				func_281(uParam0, 0x00000010, 4f, 0x00000000);
				uParam0->f_8D = 0x00000001;
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000005:
				if (uParam0->f_19B == 0x00000007)
				{
					func_241("TAXI_OBJ_GPCKUP", 0x00001D4C, 0x00000001);
				}
				else
				{
					func_241("TAXI_OBJ_PICKUP", 0x00001D4C, 0x00000001);
				}
				uParam0->f_8D = 0x00000001;
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000008:
				StringConCat(&vVar0, "_obj1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				if (uParam0->f_19B != 0x00000007 && uParam0->f_19B != 0x00000004)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						uParam0->f_9 = func_165(uParam0->f_11, 0x00000001);
					}
					else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0x00000000)
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x000000FF);
						unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_11);
						unk_0x661342B9651D16E2(uParam0->f_9, 0x00000001);
					}
				}
				func_213(uParam0, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
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
				func_215(&vVar0);
				if (uParam0->f_19B != 0x00000009)
				{
					func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				else
				{
					func_237(uParam0->f_3, "TAXI_START", uParam0->f_91, 0x00000004);
				}
				if (uParam0->f_19B != 0x00000007 && uParam0->f_19B != 0x00000004)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						uParam0->f_9 = func_165(uParam0->f_11, 0x00000001);
					}
					else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0x00000000)
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x000000FF);
						unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_11);
						unk_0x661342B9651D16E2(uParam0->f_9, 0x00000001);
					}
				}
				func_213(uParam0, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_1A1 = 0x0000000A;
				break;
			
			case 0x00000007:
				StringConCat(&vVar0, "_dest2", 24);
				func_373(uParam0, 0x02000000, vVar0, "", 0x00000001, 0x00000008);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_213(uParam0, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_1A1 = 0x0000000A;
				break;
			
			case 0x0000000A:
				if (!func_133())
				{
					func_372(uParam0, 0x00000000);
					func_179(&(uParam0->f_2C), 0x00000004);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_213(uParam0, 0x0000000D, 0x00000000, 0x00000000, 0x00000000);
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
				func_215(&vVar0);
				func_370(vVar0, uParam1);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_281(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000000F:
				if (func_151(uParam0, 0x0000000B) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0x00000000)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_215(&vVar0);
					}
					func_370(vVar0, uParam1);
					func_179(&(uParam0->f_51), 0x04000000);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_281(uParam0, 0x0000000B, 0x00000000, 0x00000000);
					func_242(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000010:
				if (func_151(uParam0, 0x0000000B) > uParam0->f_24)
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
							func_215(&vVar0);
						}
					}
					func_370(vVar0, uParam1);
					func_281(uParam0, 0x0000000B, 0x00000000, 0x00000000);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_242(uParam0, 0x00000000, 0x00000000);
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
					func_215(&vVar0);
				}
				func_370(vVar0, uParam1);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
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
				func_215(&vVar0);
				func_370(vVar0, uParam1);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
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
				func_215(&vVar0);
				func_370(vVar0, uParam1);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000014:
				StringConCat(&vVar0, "_dest2b", 24);
				func_215(&vVar0);
				func_370(vVar0, uParam1);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_281(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				func_179(&(uParam0->f_52), 0x00040000);
				uParam0->f_24 = 20f;
				break;
			
			case 0x00000017:
				StringConCat(&vVar0, "_seePt1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_213(uParam0, 0x00000018, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000018:
				uParam0->f_1A1 = 0x00000018;
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005A:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 0x00000001, 24);
				func_215(&vVar0);
				func_377(uParam0, &vVar0, 0x00000001, 0x00000000, 0x00000008);
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
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000005B:
				StringConCat(&vVar0, "_ig1c", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
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
					func_369(&(uParam0->f_5A), 0x00000008, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				else
				{
					func_369(&(uParam0->f_5A), 0x00000003, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				func_370(vVar0, uParam1);
				func_378(0x00000000, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_281(uParam0, 0x00000006, 0f, 0x00000001);
				func_242(uParam0, 0x00000000, 0x00000000);
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
					func_369(&(uParam0->f_59), 0x00000008, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				else
				{
					func_369(&(uParam0->f_59), 0x00000003, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				func_370(vVar0, uParam1);
				func_378(0x00000000, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000001);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_281(uParam0, 0x00000006, 0f, 0x00000001);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000000C:
				func_241("TAXI_OBJ_GYB", 0x00000DAC, 0x00000001);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000000B:
				if (uParam0->f_19A == 0x0000000C || uParam0->f_19A == 0x00000012)
				{
					func_241("TAXI_OBJ_GYN_TG", 0x00001D4C, 0x00000001);
				}
				else if (uParam0->f_19A < 0x00000015)
				{
					func_241("TAXI_OBJ_GYN", 0x00001D4C, 0x00000001);
				}
				else
				{
					func_241("TAXI_OBJ_GYN_GF", 0x00001D4C, 0x00000001);
				}
				uParam0->f_1A1 = 0x0000000B;
				uParam0->f_8D = 0x00000001;
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
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
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_213(uParam0, 0x0000001D, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001D:
				if (!func_204(uParam0->f_62, 0x10000000))
				{
					func_241("TAXI_OBJ_CYI_01", 0x00001D4C, 0x00000001);
					func_179(&(uParam0->f_62), 0x10000000);
				}
				uParam0->f_1A1 = 0x0000001D;
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001E:
				StringConCat(&vVar0, "_rCar1", 24);
				func_215(&vVar0);
				func_370(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001F:
				StringConCat(&vVar0, "_rCar2", 24);
				func_215(&vVar0);
				func_370(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000020:
				StringConCat(&vVar0, "_rCar3", 24);
				func_215(&vVar0);
				func_370(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000021:
				func_241("TAXI_OBJ_CYI_02", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x00000021;
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000022:
				if (!func_204(uParam0->f_52, 0x00002000))
				{
					if (func_151(uParam0, 0x0000000B) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_215(&vVar0);
						if (uParam0->f_19B == 0x00000005)
						{
							func_370(vVar0, uParam1);
						}
						else
						{
							func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
						}
						func_179(&(uParam0->f_52), 0x00002000);
						func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
						func_281(uParam0, 0x0000000B, 0x00000000, 0x00000000);
						func_242(uParam0, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x00000023:
				if (!func_204(uParam0->f_52, 0x00004000))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_215(&vVar0);
					func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					func_179(&(uParam0->f_52), 0x00004000);
				}
				break;
			
			case 0x00000024:
				if (!func_204(uParam0->f_52, 0x00008000))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_215(&vVar0);
					func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					func_179(&(uParam0->f_52), 0x00008000);
				}
				break;
			
			case 0x00000025:
				StringConCat(&vVar0, "_done1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_213(uParam0, 0x0000002E, 0x00000001, 0x00000000, 0x00000000);
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
				func_215(&vVar0);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_213(uParam0, 0x0000008B, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_1A1 = 0x0000008B;
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000008B:
				func_241("TAXI_OBJ_FTC2", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000000D;
				func_213(uParam0, 0x0000000D, 0x00000000, 0x00000000, 0x00000000);
				break;
			
			case 0x00000026:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000078);
				if (!func_204(uParam0->f_52, 0x10000000))
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
					func_179(&(uParam0->f_52), 0x10000000);
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
				func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000027:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000064);
				if (!func_204(uParam0->f_52, 0x10000000))
				{
					if (iVar4 < 0x00000032)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_179(&(uParam0->f_52), 0x10000000);
				}
				else if (iVar4 < 0x00000032)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000029:
				StringConCat(&vVar0, "_dr2P", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002A:
				StringConCat(&vVar0, "_dr2N", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000028:
				StringConCat(&vVar0, "_dOff2", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_213(uParam0, 0x0000002C, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002C:
				func_241("TAXI_OBJ_CC2", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000002C;
				func_242(uParam0, 0x00000000, 0x00000000);
				func_213(uParam0, 0x00000061, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002B:
				StringConCat(&vVar0, "_dOff3", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_213(uParam0, 0x0000002D, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002D:
				if (!func_133())
				{
					func_241("TAXI_OBJ_CC3", 0x00001D4C, 0x00000001);
					uParam0->f_1A1 = 0x0000002D;
					func_242(uParam0, 0x00000000, 0x00000000);
					func_213(uParam0, 0x00000062, 0x00000001, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x0000002E:
				func_241("TAXI_OBJ_FTC3", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000002E;
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000015:
				if (!func_204(uParam0->f_51, 0x00000001))
				{
					func_368(uParam0, 0x00000001, vVar0, "_sick1", 0x00000008);
					func_145(&(uParam0->f_51), 0x00000002);
				}
				else if (!func_204(uParam0->f_51, 0x00000002))
				{
					func_368(uParam0, 0x00000002, vVar0, "_sick2", 0x00000008);
					func_145(&(uParam0->f_51), 0x00000001);
				}
				func_378(0x0000000C, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000016:
				if (!func_204(uParam0->f_52, 0x00200000))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_204(uParam0->f_52, 0x00400000))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_179(&(uParam0->f_51), 0x00200000);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_378(0x00000011, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000001);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003D:
				StringConCat(&vVar0, "_Puke1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_378(0x00000012, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				break;
			
			case 0x0000003F:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_378(0x00000014, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003E:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_378(0x00000013, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				break;
			
			case 0x00000040:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_215(&vVar0);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000047:
				if (!func_204(uParam0->f_51, 0x00000004))
				{
					func_368(uParam0, 0x00000004, vVar0, "_turns1", 0x00000008);
				}
				else if (!func_204(uParam0->f_51, 0x00000008))
				{
					func_368(uParam0, 0x00000008, vVar0, "_turns2", 0x00000008);
				}
				else
				{
					func_368(uParam0, 0x00000008, vVar0, "_turns3", 0x00000008);
					func_145(&(uParam0->f_51), 0x00000004);
					func_145(&(uParam0->f_51), 0x00000008);
				}
				func_378(0x0000000D, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000048:
				if (func_367(uParam0))
				{
					func_374(uParam0, vVar0, func_376(uParam0, 0x00000048));
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_237(uParam0->f_3, "CRASH_GENERIC", uParam0->f_91, 0x00000004);
					}
				}
				else if (uParam0->f_19B == 0x00000001)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_380(&(uParam0->f_5F), 0x00000005, &cVar1, 0x00000001, 0x00000000, 0x00000001);
					func_336(&(uParam0->f_F4), uParam0->f_90, &cVar1, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_19B == 0x00000000)
					{
						func_380(&(uParam0->f_5F), 0x00000008, &cVar1, 0x00000001, 0x00000001, 0x00000000);
					}
					else
					{
						func_380(&(uParam0->f_5F), 0x00000005, &cVar1, 0x00000001, 0x00000001, 0x00000000);
					}
					func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				}
				func_378(0x00000002, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000049:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000004B:
				if (!func_204(uParam0->f_53, 0x00000080))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_179(&(uParam0->f_53), 0x00000080);
					func_145(&(uParam0->f_53), 0x00000100);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_204(uParam0->f_53, 0x00000100))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_179(&(uParam0->f_53), 0x00000100);
					func_145(&(uParam0->f_53), 0x00000200);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_204(uParam0->f_53, 0x00000200))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_179(&(uParam0->f_53), 0x00000200);
					func_145(&(uParam0->f_53), 0x00000080);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000004C:
				if (uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000)
				{
					bVar6 = 0x00000001;
				}
				if (!func_204(uParam0->f_53, 0x00000001))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_215(&vVar0);
					}
					func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_179(&(uParam0->f_53), 0x00000001);
					func_145(&(uParam0->f_53), 0x00000002);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_204(uParam0->f_53, 0x00000002))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_215(&vVar0);
					}
					func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_179(&(uParam0->f_53), 0x00000002);
					if (uParam0->f_19B == 0x00000000)
					{
						func_145(&(uParam0->f_53), 0x00000004);
					}
					else
					{
						func_145(&(uParam0->f_53), 0x00000001);
					}
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_204(uParam0->f_53, 0x00000004))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_215(&vVar0);
					}
					func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_179(&(uParam0->f_53), 0x00000004);
					func_145(&(uParam0->f_53), 0x00000001);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				func_378(0x0000000B, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000004F:
				if (uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000)
				{
					bVar6 = 0x00000001;
				}
				if (!func_204(uParam0->f_51, 0x00001000))
				{
					func_373(uParam0, 0x00001000, vVar0, "_sideW1", bVar6, 0x00000008);
				}
				else if (!func_204(uParam0->f_51, 0x00002000))
				{
					func_373(uParam0, 0x00002000, vVar0, "_sideW2", bVar6, 0x00000008);
				}
				func_378(0x0000000F, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000050:
				if (uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000)
				{
					bVar6 = 0x00000001;
				}
				if (!func_204(uParam0->f_51, 0x00004000))
				{
					func_373(uParam0, 0x00004000, vVar0, "_opLne1", bVar6, 0x00000008);
				}
				else if (!func_204(uParam0->f_51, 0x00008000))
				{
					func_373(uParam0, 0x00008000, vVar0, "_opLne2", bVar6, 0x00000008);
				}
				func_378(0x0000000E, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000053:
				if (uParam0->f_19B == 0x00000000)
				{
					if (!func_204(uParam0->f_52, 0x00000008))
					{
						func_366(uParam0, 0x00000008, vVar0, "_bored1", 0x00000008, 0x00000000);
					}
					else if (!func_204(uParam0->f_52, 0x00000010))
					{
						func_366(uParam0, 0x00000010, vVar0, "_bored2", 0x00000008, 0x00000000);
					}
					else if (!func_204(uParam0->f_52, 0x00000020))
					{
						func_366(uParam0, 0x00000020, vVar0, "_bored3", 0x00000008, 0x00000000);
					}
					func_378(0x00000009, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
					func_242(uParam0, 0x00000000, 0x00000000);
				}
				if (uParam0->f_19B == 0x00000001)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_380(&(uParam0->f_5D), 0x00000006, &cVar1, 0x00000000, 0x00000001, 0x00000000);
					func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
					func_378(0x00000009, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_242(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x0000005C:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_380(&(uParam0->f_60), 0x00000002, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_378(0x00000009, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005D:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_380(&(uParam0->f_61), 0x00000002, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_378(0x0000000C, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000051:
				if (!func_204(uParam0->f_51, 0x00010000))
				{
					func_373(uParam0, 0x00010000, vVar0, "_runLit1", 0x00000001, 0x00000008);
				}
				else if (!func_204(uParam0->f_51, 0x00020000))
				{
					func_373(uParam0, 0x00020000, vVar0, "_runLit2", 0x00000001, 0x00000008);
				}
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000052:
				if (func_367(uParam0))
				{
					func_374(uParam0, vVar0, func_376(uParam0, 0x00000052));
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_237(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_91, 0x00000004);
					}
				}
				else if (!func_204(uParam0->f_53, 0x00000008))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_215(&vVar0);
					func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_179(&(uParam0->f_53), 0x00000008);
					func_145(&(uParam0->f_53), 0x00000010);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_204(uParam0->f_53, 0x00000010))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_215(&vVar0);
					func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_179(&(uParam0->f_53), 0x00000010);
					func_145(&(uParam0->f_53), 0x00000020);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_204(uParam0->f_53, 0x00000020))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_215(&vVar0);
					func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_179(&(uParam0->f_53), 0x00000020);
					if (uParam0->f_19B == 0x00000000)
					{
						func_145(&(uParam0->f_53), 0x00000040);
					}
					else
					{
						func_145(&(uParam0->f_53), 0x00000008);
					}
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_204(uParam0->f_53, 0x00000040))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_215(&vVar0);
					func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_179(&(uParam0->f_53), 0x00000040);
					func_145(&(uParam0->f_53), 0x00000008);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				func_378(0x00000001, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000041:
				if (!func_133())
				{
					if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_377(uParam0, &vVar0, 0x00000000, 0x00000001, 0x00000008);
				}
				else
				{
					func_374(uParam0, vVar0, func_376(uParam0, 0x00000041));
					func_242(uParam0, 0x00000000, 0x00000000);
				}
				uParam0->f_6B++;
				break;
			
			case 0x00000042:
				if (!func_133())
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
					func_377(uParam0, &vVar0, 0x00000000, 0x00000001, 0x00000008);
				}
				else
				{
					func_374(uParam0, vVar0, func_376(uParam0, 0x00000042));
					func_242(uParam0, 0x00000000, 0x00000000);
				}
				uParam0->f_6B++;
				break;
			
			case 0x0000000D:
				if (uParam0->f_19B == 0x00000008)
				{
					if (!uParam0->f_6D && !func_133())
					{
						switch (uParam0->f_19E)
						{
							case 0x00000003:
								StringConCat(&vVar0, "_warnC1", 24);
								func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
							
							case 0x00000006:
								StringConCat(&vVar0, "_warnF1", 24);
								func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
							
							case 0x00000001:
								StringConCat(&vVar0, "_far1", 24);
								func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								func_378(0x00000015, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
								break;
							
							case 0x00000002:
								StringConCat(&vVar0, "_close1", 24);
								func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								func_378(0x00000016, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
								break;
							
							case 0x0000000A:
								StringConCat(&vVar0, "_hit1", 24);
								func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
							
							case 0x00000008:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_380(&(uParam0->f_5D), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000000);
								func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
								func_378(0x00000017, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0x00000000);
								func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
								func_242(uParam0, 0x00000000, 0x00000000);
								break;
							
							case 0x00000009:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
									func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
									func_281(uParam0, 0x0000000B, 0x00000000, 0x00000000);
									func_242(uParam0, 0x00000000, 0x00000000);
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
									func_215(&vVar0);
									func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
									func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
									func_281(uParam0, 0x0000000B, 0x00000000, 0x00000000);
									func_242(uParam0, 0x00000000, 0x00000000);
									iLocal_58 = 0x00000000;
								}
								break;
							
							case 0x00000007:
								StringConCat(&vVar0, "_done1", 24);
								func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
						}
						func_213(uParam0, 0x0000008F, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x0000004E:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_380(&(uParam0->f_57), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000000);
				func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_378(0x0000000A, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000019:
				if (!func_204(uParam0->f_52, 0x00000001))
				{
					func_366(uParam0, 0x00000001, vVar0, "_close1", 0x00000008, 0x00000000);
				}
				else if (!func_204(uParam0->f_52, 0x00000002))
				{
					func_366(uParam0, 0x00000002, vVar0, "_close2", 0x00000008, 0x00000000);
				}
				else if (!func_204(uParam0->f_52, 0x00000004))
				{
					func_366(uParam0, 0x00000004, vVar0, "_close3", 0x00000008, 0x00000000);
				}
				func_242(uParam0, 0x00000000, 0x00000000);
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
				func_380(&(uParam0->f_56), 0x00000004, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_237(uParam0->f_3, "TAXI_STOPPED", uParam0->f_91, 0x00000004);
				}
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_378(0x00000005, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000004A:
				if (func_367(uParam0))
				{
					func_374(uParam0, vVar0, func_376(uParam0, 0x0000004A));
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_237(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_91, 0x00000004);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_365(uParam0, vVar0, 0x00000008);
				}
				func_378(0x00000003, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000046:
				if (!func_204(uParam0->f_53, 0x00000400))
				{
					func_179(&(uParam0->f_53), 0x00000400);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
					StringConCat(&vVar0, "_swrv1", 24);
					func_215(&vVar0);
					func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (!func_204(uParam0->f_53, 0x00000800))
				{
					func_179(&(uParam0->f_53), 0x00000800);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
					StringConCat(&vVar0, "_swrv2", 24);
					func_215(&vVar0);
					func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (!func_204(uParam0->f_53, 0x00001000))
				{
					func_179(&(uParam0->f_53), 0x00001000);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
					StringConCat(&vVar0, "_swrv3", 24);
					func_215(&vVar0);
					func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000045:
				if (!func_204(uParam0->f_52, 0x00000400))
				{
					func_366(uParam0, 0x00000400, vVar0, "_rvrs1", 0x00000008, 0x00000001);
					func_145(&(uParam0->f_52), 0x00000800);
				}
				else if (!func_204(uParam0->f_52, 0x00000800))
				{
					func_366(uParam0, 0x00000800, vVar0, "_rvrs2", 0x00000008, 0x00000001);
				}
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000043:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_380(&(uParam0->f_58), 0x00000004, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_378(0x00000010, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000044:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000031:
				StringConCat(&vVar0, "_losPol1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_213(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
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
					func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_237(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_91, 0x00000004);
				}
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000033:
				if (func_367(uParam0))
				{
					if (uParam0->f_19B == 0x00000002)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
						func_213(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
						func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
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
						func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
						func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_380(&(uParam0->f_55), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000000);
					func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
					func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_242(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000035:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_378(0x00000008, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_281(uParam0, 0x0000000A, 0f, 0x00000001);
				break;
			
			case 0x00000034:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 0x00000001)
				{
					func_241("TAXI_OBJ_POL", 0x00001D4C, 0x00000001);
					uParam0->f_1A1 = 0x00000034;
				}
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000036:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_215(&vVar0);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000054:
				if (!func_204(uParam0->f_51, 0x00040000))
				{
					func_373(uParam0, 0x00040000, vVar0, "_rdCh1", 0x00000001, 0x00000008);
				}
				else if (!func_204(uParam0->f_51, 0x00100000))
				{
					if (uParam0->f_19B == 0x00000000 || uParam0->f_19B == 0x00000001)
					{
						func_373(uParam0, 0x00100000, vVar0, "_rdCh2", 0x00000001, 0x00000008);
					}
					else
					{
						func_373(uParam0, 0x00100000, vVar0, "_rdCh2", 0x00000000, 0x00000008);
					}
				}
				func_378(0x00000007, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000055:
				if (!func_204(uParam0->f_52, 0x04000000))
				{
					if (uParam0->f_1A2.f_6)
					{
						func_364(uParam0, 0x04000000, vVar0, "_rdLk1", 0x00000001, 0x00000007);
					}
				}
				else if (!func_204(uParam0->f_52, 0x08000000))
				{
					func_364(uParam0, 0x08000000, vVar0, "_rdFv1", 0x00000000, 0x00000007);
				}
				func_378(0x00000006, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000056:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000057:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_1A2.f_3, 24);
				func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000064:
				func_241("TAXI_OBJ_GYB_2", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x00000064;
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002F:
				if (uParam0->f_19B == 0x00000001)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				break;
			
			case 0x00000065:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000000)
				{
					func_215(&vVar0);
				}
				func_179(&(uParam0->f_51), 0x00200000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				break;
			
			case 0x00000066:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000000)
				{
					func_215(&vVar0);
				}
				func_179(&(uParam0->f_51), 0x00200000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
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
					func_215(&vVar0);
				}
				func_179(&(uParam0->f_51), 0x00200000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				break;
			
			case 0x00000061:
				if (!func_204(uParam0->f_52, 0x00010000))
				{
					if (func_151(uParam0, 0x0000000B) > uParam0->f_24)
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
						func_215(&vVar0);
						func_370(vVar0, uParam1);
						func_179(&(uParam0->f_52), 0x00010000);
						func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
						func_281(uParam0, 0x0000000B, 0x00000000, 0x00000000);
						func_242(uParam0, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x00000062:
				if (!func_204(uParam0->f_52, 0x00020000))
				{
					if (func_151(uParam0, 0x0000000B) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_215(&vVar0);
						func_370(vVar0, uParam1);
						func_179(&(uParam0->f_52), 0x00020000);
						func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
						func_281(uParam0, 0x0000000B, 0x00000000, 0x00000000);
						func_242(uParam0, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x00000063:
				if (!func_204(uParam0->f_52, 0x00800000))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_179(&(uParam0->f_52), 0x00800000);
				}
				else if (!func_204(uParam0->f_52, 0x01000000))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_179(&(uParam0->f_52), 0x01000000);
				}
				else if (!func_204(uParam0->f_52, 0x02000000))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_179(&(uParam0->f_52), 0x02000000);
				}
				func_370(vVar0, uParam1);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003A:
				if (uParam0->f_19B == 0x00000006)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_380(&(uParam0->f_5D), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000001);
					func_215(&vVar0);
					func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				}
				else if (uParam0->f_19B == 0x00000008)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005F:
				StringConCat(&vVar0, "_wndw2", 24);
				func_370(vVar0, uParam1);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_281(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005E:
				StringConCat(&vVar0, "_wndw0", 24);
				func_370(vVar0, uParam1);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_281(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000060:
				StringConCat(&vVar0, "_wndw1", 24);
				func_370(vVar0, uParam1);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_281(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000071:
				StringConCat(&vVar0, "_csite1", 24);
				func_215(&vVar0);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000077:
				StringConCat(&vVar0, "_fair1", 24);
				func_215(&vVar0);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000073:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_380(&(uParam0->f_5B), 0x00000005, &cVar1, 0x00000001, 0x00000001, 0x00000000);
				func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000074:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_380(&(uParam0->f_5C), 0x00000005, &cVar1, 0x00000001, 0x00000001, 0x00000000);
				func_379(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000072:
				StringConCat(&vVar0, "_goons1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000003B:
				StringConCat(&vVar0, "_oRun1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000075:
				StringConCat(&vVar0, "_gotG1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000076:
				StringConCat(&vVar0, "_getA1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000078:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000079:
				StringConCat(&vVar0, "_grl1", 24);
				func_215(&vVar0);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007A:
				StringConCat(&vVar0, "_figt1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007B:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007C:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007D:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007E:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007F:
				StringConCat(&vVar0, "_aKill1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000081:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_215(&vVar0);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000082:
				StringConCat(&vVar0, "_gDest1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_213(uParam0, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000080:
				StringConCat(&vVar0, "_gKO1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000084:
				StringConCat(&vVar0, "_gThank1", 24);
				func_179(&(uParam0->f_51), 0x00200000);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000083:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_215(&vVar0);
				func_370(vVar0, uParam1);
				func_179(&(uParam0->f_51), 0x04000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_281(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003C:
				StringConCat(&vVar0, "_cash1", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000069:
				if (!func_204(uParam0->f_51, 0x02000000) && uParam0->f_19B != 0x00000009)
				{
					func_373(uParam0, 0x02000000, vVar0, "_noPay1", 0x00000001, 0x00000008);
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_237(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_91, 0x00000004);
					}
				}
				func_213(uParam0, 0x0000006C, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006A:
				StringConCat(&vVar0, "_foot", 24);
				func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006B:
				if (!func_204(uParam0->f_51, 0x10000000))
				{
					func_373(uParam0, 0x10000000, vVar0, "_kPay1", 0x00000001, 0x00000008);
				}
				func_213(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006C:
				func_241("TAXI_OBJ_RUNOUT", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000006C;
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006D:
				if (!func_204(uParam0->f_51, 0x00400000))
				{
					if (uParam0->f_19B == 0x00000002 || uParam0->f_19B == 0x00000006)
					{
						func_373(uParam0, 0x00400000, vVar0, "_mPay1", 0x00000000, 0x00000008);
					}
					else if (uParam0->f_19B == 0x00000009)
					{
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
						{
							func_237(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_91, 0x00000004);
						}
					}
					else
					{
						func_373(uParam0, 0x00400000, vVar0, "_mPay1", 0x00000001, 0x00000008);
					}
				}
				func_213(uParam0, 0x0000006F, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006F:
				func_241("TAXI_OBJ_GETRUN", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000006F;
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006E:
				StringConCat(&vVar0, "_runoff", 24);
				func_336(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000008D:
				if (!func_204(uParam0->f_51, 0x01000000))
				{
					func_373(uParam0, 0x01000000, vVar0, "_ret1", 0x00000001, 0x00000008);
				}
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000058:
				func_241("TAXI_TIEFLEE", 0x00001D4C, 0x00000001);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000039:
				if (!func_204(uParam0->f_62, 0x20000000))
				{
					func_241("TAXI_OBJ_CYI_1B", 0x00001D4C, 0x00000001);
					func_179(&(uParam0->f_62), 0x20000000);
				}
				uParam0->f_1A1 = 0x00000039;
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000068:
				StringConCat(&vVar0, "_joke1", 24);
				func_215(&vVar0);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
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
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000008C:
				StringConCat(&vVar0, "_shout", 24);
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_242(uParam0, 0x00000000, 0x00000000);
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
				func_377(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000085:
				StringConCat(&vVar0, "_getCar", 24);
				func_377(uParam0, &vVar0, 0x00000001, 0x00000000, 0x00000008);
				func_213(uParam0, 0x00000086, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000086:
				func_241("TX_VIP", 0x00001D4C, 0x00000000);
				uParam0->f_1A1 = 0x00000086;
				func_213(uParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_242(uParam0, 0x00000000, 0x00000000);
				break;
			}
	}
}

void func_364(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_179(&(uParam0->f_52), iParam1);
	func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_215(&vParam2);
	}
	func_336(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0x00000000, 0x00000000, 0x00000000);
}

void func_365(var uParam0, struct<6> Param1, int iParam2)
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_204(uParam0->f_52, 0x00000040))
	{
		func_179(&(uParam0->f_52), 0x00000040);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_204(uParam0->f_52, 0x00000080))
	{
		func_179(&(uParam0->f_52), 0x00000080);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x09AC81E49EA267F7(0x00000001, 0x00000003), 24);
	}
	func_379(&(uParam0->f_F4), uParam0->f_90, &Param1, &cVar0, iParam2, 0x00000000, 0x00000000);
	func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
}

void func_366(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)
{
	func_179(&(uParam0->f_52), iParam1);
	func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000) || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000008) || uParam0->f_19B == 0x00000002)
	{
		if (bParam8)
		{
			func_215(&vParam2);
		}
	}
	func_336(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0x00000000, 0x00000000, 0x00000000);
}

int func_367(var uParam0)
{
	if ((((((uParam0->f_19B == 0x00000002 || uParam0->f_19B == 0x00000003) || uParam0->f_19B == 0x00000004) || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000006) || uParam0->f_19B == 0x00000007) || uParam0->f_19B == 0x00000008)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_368(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)
{
	func_179(&(uParam0->f_51), iParam1);
	func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	func_336(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0x00000000, 0x00000000, 0x00000000);
}

void func_369(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0x00000000;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_259(*uParam0, iVar1))
		{
			func_180(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_215(sParam2);
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

void func_370(char[24] cParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_371(uParam1);
	if (iVar0 > 0xFFFFFFFF)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_179(&((uParam1[iVar0 /*8*/])->f_7), 0x00000002);
	}
}

int func_371(var uParam0)
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

void func_372(var uParam0, bool bParam1)
{
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			if (bParam1)
			{
				func_241("TX_OBJ_NEX_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_241("TX_OBJ_NEX_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				func_241("TX_OBJ_TIE_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_241("TX_OBJ_TIE_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				func_241("TX_OBJ_DL_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_241("TX_OBJ_DL_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				func_241("TX_OBJ_GYB_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_241("TX_OBJ_GYB_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				func_241("TX_OBJ_TTB_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_241("TX_OBJ_TTB_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				func_241("TX_OBJ_CYI_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_241("TX_OBJ_CYI_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				func_241("TX_OBJ_GYN_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_241("TX_OBJ_GYN_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000007:
			if (bParam1)
			{
				func_241("TX_OBJ_CC_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_241("TAXI_OBJ_CC1", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000008:
			if (bParam1)
			{
				func_241("TX_OBJ_FC_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_241("TAXI_OBJ_FTC1", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000009:
			if (bParam1)
			{
				func_241("TX_OBJ_PRO_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_241("TX_OBJ_PRO_DO", 0x00001D4C, 0x00000001);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_8B = 0x00000001;
	}
}

void func_373(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_179(&(uParam0->f_51), iParam1);
	func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_215(&vParam2);
	}
	func_336(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0x00000000, 0x00000000, 0x00000000);
}

void func_374(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)
{
	func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
	func_281(uParam0, 0x00000011, 0f, 0x00000001);
	StringConCat(&cParam1, sParam5, 24);
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		unk_0x9A8EDAF1C0D299FF(uParam0->f_3, &cParam1, func_375(uParam0));
	}
}

char* func_375(var uParam0)
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

char* func_376(var uParam0, int iParam1)
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

int func_377(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_281(uParam0, 0x00000010, 0x00000000, 0x00000000);
	if (bParam3)
	{
		func_281(uParam0, 0x00000011, 0f, 0x00000001);
	}
	func_242(uParam0, iParam2, 0x00000000);
	return func_336(&(uParam0->f_F4), uParam0->f_90, sParam1, iParam4, 0x00000000, 0x00000000, 0x00000000);
}

void func_378(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)
{
	if (iParam0 == 0x00000000)
	{
		if (func_204(*uParam2, 0x00000002))
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
		if (func_204(*uParam2, 0x40000000))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000001)
	{
		if (func_204(*uParam2, 0x00000004))
		{
			if (!func_204(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000001);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_145(uParam2, 0x00001000);
			}
		}
		else if (func_204(*uParam2, 0x00000008))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000005)
	{
		if (func_204(*uParam2, 0x00000200))
		{
			if (!func_204(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000001);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_145(uParam2, 0x00001000);
			}
		}
	}
	else if (iParam0 == 0x00000002)
	{
		if (func_204(*uParam2, 0x00000010))
		{
			if (!func_204(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000001);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_145(uParam2, 0x00001000);
			}
		}
		else if (func_204(*uParam2, 0x00000020))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000003)
	{
		if (func_204(*uParam2, 0x00000040))
		{
			if (!func_204(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_145(uParam2, 0x00001000);
			}
		}
		else if (func_204(*uParam2, 0x00000080))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000004)
	{
		if (func_204(*uParam2, 0x00000100))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000006)
	{
		if (func_204(*uParam2, 0x00000400))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000007)
	{
		if (func_204(*uParam2, 0x00000800))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000009)
	{
		if (func_204(*uParam2, 0x00002000))
		{
			if (func_204(*uParam2, 0x00200000))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_204(*uParam2, 0x00400000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000A)
	{
		if (func_204(*uParam2, 0x00004000))
		{
			if (func_204(*uParam2, 0x00400000))
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
		if (func_204(*uParam2, 0x00008000))
		{
			if (func_204(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_204(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000C)
	{
		if (func_204(*uParam2, 0x00010000))
		{
			if (func_204(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000D)
	{
		if (func_204(*uParam2, 0x00020000))
		{
			if (func_204(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_204(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000E)
	{
		if (func_204(*uParam2, 0x00040000))
		{
			if (func_204(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_204(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000F)
	{
		if (func_204(*uParam2, 0x00080000))
		{
			if (func_204(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_204(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x00000010)
	{
		if (func_204(*uParam2, 0x00100000))
		{
			if (func_204(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_204(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x00000015)
	{
		if (func_204(*uParam2, 0x00800000))
		{
			*uParam1 = (*uParam1 - 0x00000002);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000016)
	{
		if (func_204(*uParam2, 0x01000000))
		{
			*uParam1 = (*uParam1 - 0x00000002);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000017)
	{
		if (func_204(*uParam2, 0x02000000))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000011)
	{
		if (func_204(*uParam2, 0x04000000))
		{
			if (func_204(*uParam2, 0x04000000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x00000012)
	{
		if (func_204(*uParam2, 0x08000000))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000014)
	{
		if (func_204(*uParam2, 0x20000000))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000013)
	{
		if (func_204(*uParam2, 0x10000000))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000019)
	{
		if (func_204(*uParam2, 0x00008000))
		{
			*uParam1 = (*uParam1 - 0x00000002);
			*uParam3 = { cParam4 };
		}
	}
}

int func_379(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_337(sParam2, iParam4, 0x00000000);
}

void func_380(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0x00000000;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_259(*uParam0, iVar1))
		{
			func_180(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_215(sParam2);
				}
				else
				{
					func_215(sParam2);
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

int func_381(var uParam0)
{
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			if (func_195("TX_OBJ_NEX_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_195("TX_OBJ_TIE_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (func_195("TX_OBJ_DL_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			if ((func_195("TX_OBJ_GYB_DO", 0x00000000, 0x00000000) || func_195("TAXI_OBJ_GYB", 0x00000000, 0x00000000)) || func_195("TAXI_OBJ_GYB_2", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_195("TX_OBJ_TTB_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
			if ((func_195("TX_OBJ_CYI_DO", 0x00000000, 0x00000000) || func_195("TAXI_OBJ_CYI_01", 0x00000000, 0x00000000)) || func_195("TAXI_OBJ_CYI_02", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000006:
			if (((func_195("TX_OBJ_GYN_DO", 0x00000000, 0x00000000) || func_195("TAXI_OBJ_GYN", 0x00000000, 0x00000000)) || func_195("TAXI_OBJ_GYN_TG", 0x00000000, 0x00000000)) || func_195("TAXI_OBJ_GYN_GF", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000007:
			if ((func_195("TAXI_OBJ_CC1", 0x00000000, 0x00000000) || func_195("TAXI_OBJ_CC2", 0x00000000, 0x00000000)) || func_195("TAXI_OBJ_CC3", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000008:
			if ((func_195("TAXI_OBJ_FTC1", 0x00000000, 0x00000000) || func_195("TAXI_OBJ_FTC2", 0x00000000, 0x00000000)) || func_195("TAXI_OBJ_FTC3", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			if (func_195("TX_OBJ_PRO_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
	}
	return (((((func_195("TAXI_OBJ_GETRUN", 0x00000000, 0x00000000) || func_195("TAXI_OBJ_DRIVE", 0x00000000, 0x00000000)) || func_195("TAXI_OBJ_RETURN", 0x00000000, 0x00000000)) || func_195("TAXI_OBJ_POL", 0x00000000, 0x00000000)) || func_195("TAXI_OBJ_RUNOUT", 0x00000000, 0x00000000)) || func_195("TAXI_OBJ_POL", 0x00000000, 0x00000000));
}

int func_382(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (func_195(sParam0, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_383(var uParam0, var uParam1)
{
	return ((*uParam1 == 0xFFFFFFFF && uParam0->f_19C == 0x00000000) && !func_140(uParam0, 0x00000009));
}

void func_384(var uParam0)
{
	if (func_140(uParam0, 0x00000011))
	{
		if (!func_140(uParam0, 0x0000000E))
		{
			if (!func_144(uParam0))
			{
				if (!func_133())
				{
					func_141(uParam0, 0x00000011, 0x00000001);
				}
			}
		}
	}
}

bool func_385(var uParam0)
{
	return uParam0->f_75;
}

void func_386(var uParam0)
{
	if (!func_311(uParam0))
	{
		if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
		{
		}
		func_153(uParam0, 0x00000001);
	}
	else if (func_140(uParam0, 0x0000000E))
	{
		func_206(uParam0);
		func_154(uParam0, 0x00000000);
	}
}

void func_387(var uParam0, var uParam1, bool bParam2)
{
	if (!func_204(uParam0->f_37, 0x00000001))
	{
		switch (*uParam1)
		{
			case 0x00000000:
				if (!unk_0xEA6BC48857E0AC4C(&(uParam0->f_7C)) && func_133())
				{
					*uParam1++;
				}
				break;
			
			case 0x00000001:
				if (!func_133())
				{
					StringCopy(&(uParam0->f_7C), func_200(), 24);
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

void func_388(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_19A >= 0x00000005)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_4))
		{
			if (Local_165 > 0x00000000 && !func_259(Local_165.f_1[0x00000004 /*4*/], 0x00000004))
			{
				iVar0 = 0x00000000;
				iVar0 = 0x00000000;
				while (iVar0 <= (Local_165 - 0x00000001))
				{
					if (func_259(Local_165.f_1[iVar0 /*4*/], 0x00000002))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_259(Local_165.f_1[iVar0 /*4*/], 0x00000004))
							{
								func_180(&(Local_165.f_1[iVar0 /*4*/]), 0x00000004);
								Local_165.f_1[iVar0 /*4*/].f_1 = unk_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							func_146(&(Local_165.f_1[iVar0 /*4*/]), 0x0000000C);
						}
						if (func_259(Local_165.f_1[iVar0 /*4*/], 0x00000004) && !func_259(Local_165.f_1[iVar0 /*4*/], 0x00000008))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_180(&(Local_165.f_1[iVar0 /*4*/]), 0x00000008);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_335(uParam0, "Taxi Garbage Collected", 0x00000012);
		}
	}
}

int func_389(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_140(uParam0, 0x0000001B))
	{
		func_188(uParam0, 0x0000001B);
		uParam1->f_3 = 0x000000FA;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_6D && func_151(uParam0, 0x0000001B) > 5f)
	{
		if (func_416(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001))
		{
			func_281(uParam0, 0x0000001B, 0x00000000, 0x00000000);
			func_281(uParam0, 0x0000000A, 0x00000000, 0x00000000);
			func_414(uParam0, &uVar0, uParam1);
		}
		func_411(uParam0);
	}
	if (uParam0->f_19A >= 0x00000003 && uParam0->f_19A <= 0x00000005)
	{
		func_390(uParam0);
	}
	if ((((!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) && (unk_0x9F4FE516EAACCFC5(*uParam0) && !unk_0xFBB4F23D534EB790(*uParam0))) && (unk_0x9F4FE516EAACCFC5(uParam0->f_1) && !unk_0xFBB4F23D534EB790(uParam0->f_1))) && !unk_0xD17F06053799A7CA()) && !func_133())
	{
		if (func_151(uParam0, 0x0000001A) > 10f)
		{
			func_141(uParam0, 0x0000001A, 0x00000000);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
		}
	}
	else if (func_140(uParam0, 0x0000001A))
	{
		func_141(uParam0, 0x0000001A, 0x00000000);
	}
	return 0x00000000;
}

void func_390(var uParam0)
{
	if (!func_410(uParam0->f_1AD))
	{
		uParam0->f_1AD = func_409();
		func_400(&(uParam0->f_1AD), 0x00000000, 0x00000000, unk_0x09AC81E49EA267F7(0x00000004, 0x00000007), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (func_391(uParam0->f_1AD))
	{
		func_335(uParam0, "Player took too long to make pickup", 0x00000009);
	}
}

bool func_391(int iParam0)
{
	return func_392(func_409(), iParam0);
}

int func_392(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_410(iParam1) || !func_410(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_398(iParam0);
	iVar1 = func_398(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_397(iParam0);
	iVar1 = func_397(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_396(iParam0);
	iVar1 = func_396(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_395(iParam0);
	iVar1 = func_395(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
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
	return 0x00000000;
}

int func_393(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_394(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_395(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_396(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_397(int iParam0)
{
	return iParam0 & 0x0000000F;
}

var func_398(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_399(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_399(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_400(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_398(*uParam0);
	iVar1 = func_397(*uParam0);
	iVar2 = func_396(*uParam0);
	iVar3 = func_395(*uParam0);
	iVar4 = func_394(*uParam0);
	iVar5 = func_393(*uParam0);
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
	iVar6 = func_408(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_408(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_401(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_401(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_407(uParam0, iParam1);
	func_406(uParam0, iParam2);
	func_405(uParam0, iParam3);
	func_404(uParam0, iParam5);
	func_403(uParam0, iParam4);
	func_402(uParam0, iParam6);
}

void func_402(var uParam0, int iParam1)
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

void func_403(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_397(*uParam0);
	iVar1 = func_398(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_408(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_404(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_405(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_406(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_407(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_408(int iParam0, int iParam1)
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

int func_409()
{
	var uVar0;
	
	func_407(&uVar0, unk_0x4460E481B9E33ADA());
	func_406(&uVar0, unk_0x8D199E381D262EEF());
	func_405(&uVar0, unk_0xD8A54335F18763BA());
	func_403(&uVar0, unk_0x972A296334C9D57B());
	func_404(&uVar0, unk_0x118229AD063C3C1D());
	func_402(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_410(int iParam0)
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
	iVar0 = func_393(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_394(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_395(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_398(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_397(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_396(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_408(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_411(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_19A < 0x00000007 && !uParam0->f_8A)
	{
		if (((uParam0->f_19B == 0x00000009 && func_413()) && !func_311(uParam0)) || ((uParam0->f_19B != 0x00000009 && func_246(uParam0, 0x00000001)) && !func_311(uParam0)))
		{
			uVar0 = func_412(uParam0->f_4);
			unk_0x82692E8F6A0D7A22(&uVar0);
			uParam0->f_4 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			unk_0x73270B3C9CC833FD(uParam0->f_4, 0x00000001, 0x00000000);
			func_206(uParam0);
			func_154(uParam0, 0x00000000);
		}
	}
}

var func_412(var uParam0)
{
	return uParam0;
}

int func_413()
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
					if (unk_0x4906F8A34E9F4814(iVar0, func_22()))
					{
						return 0x00000001;
					}
				}
			}
		}
	}
	return 0x00000000;
}

void func_414(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 0x00000001:
			if (func_415(uParam0, 0x00000000, 0x00000001))
			{
				func_335(uParam0, "Aggro Aiming", 0x00000005);
			}
			break;
		
		case 0x00000004:
			if (func_415(uParam0, 0x00000000, 0x00000004))
			{
				func_335(uParam0, "Aggro Shot Near", 0x00000008);
			}
			break;
		
		case 0x00000008:
			if (func_415(uParam0, 0x00000000, 0x00000008))
			{
				func_335(uParam0, "Aggro Heard Shot", 0x00000008);
			}
			break;
		
		case 0x00000010:
			if (func_415(uParam0, 0x00000001, 0x00000001))
			{
				func_335(uParam0, "Aggro Attacked", 0x0000000E);
			}
			break;
		
		case 0x00000020:
			if (func_415(uParam0, 0x00000000, 0x00000001))
			{
				func_335(uParam0, "Aggro Minor Attacked", 0x00000008);
			}
			break;
		
		case 0x00000002:
			if (!func_204(*uParam2, 0x00000002) && func_202(uParam0))
			{
				func_335(uParam0, "Aggro Went Wanted", 0x00000005);
			}
			break;
	}
}

int func_415(var uParam0, int iParam1, int iParam2)
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
				func_213(uParam0, 0x00000042, 0x00000001, 0x00000000, 0x00000001);
			}
			else
			{
				func_213(uParam0, 0x00000041, 0x00000001, 0x00000000, 0x00000001);
			}
		}
	}
	return 0x00000000;
}

int func_416(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x16F2683693E537C9();
	if (!unk_0x437347B10A200C4B(iVar0, 0x00000000) && !unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (!func_204(*uParam2, 0x00000001))
		{
			if (func_422(iParam0, uParam2))
			{
				*uParam3 = 0x00000001;
				return 0x00000001;
			}
		}
		if (!func_204(*uParam2, 0x00000002))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				*uParam3 = 0x00000002;
				return 0x00000001;
			}
		}
		if (!func_204(*uParam2, 0x00000004))
		{
			if (func_420(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 0x00000004;
				return 0x00000001;
			}
		}
		if (!func_204(*uParam2, 0x00000008))
		{
			if (func_419(iVar0, iParam0, uParam2))
			{
				*uParam3 = 0x00000008;
				return 0x00000001;
			}
		}
		bVar1 = !func_204(*uParam2, 0x00000080);
		if (bParam4)
		{
			if (func_417(iParam0, iParam1, 0x00000001, bParam6, bVar1, 0x00000001))
			{
				*uParam3 = 0x00000020;
				return 0x00000001;
			}
		}
		else if (!func_204(*uParam2, 0x00000010))
		{
			if (func_417(iParam0, iParam1, 0x00000000, bParam6, bVar1, bParam8))
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

int func_417(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (func_418(unk_0x16F2683693E537C9(), iParam0))
	{
		return 0x00000001;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_167(iParam0, 0x00000001) < 1.5f)
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

int func_418(int iParam0, int iParam1)
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

int func_419(int iParam0, int iParam1, var uParam2)
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

int func_420(int iParam0, int iParam1, var uParam2, bool bParam3)
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
			if (unk_0xFB275CE013F3A38C(iParam0) || func_421(iVar1))
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

int func_421(int iParam0)
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
						if (func_168(unk_0x16F2683693E537C9(), iParam0, 0x00000001) < 40f)
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

int func_422(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_167(iParam0, 0x00000001) < uParam1->f_2)
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

void func_423(var uParam0)
{
	if (!func_204(uParam0->f_62, 0x00000002))
	{
		if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
		{
			if (func_201(uParam0->f_4, uParam0->f_11, 0x00000001) < 180f)
			{
				unk_0x28F5E4DA506AC0CA(uParam0->f_11, 25f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_179(&(uParam0->f_62), 0x00000002);
			}
		}
	}
}

void func_424()
{
	func_425(&Local_231);
	func_441();
}

void func_425(var uParam0)
{
	func_12(0x00000000, uParam0, 0x00000001);
	if (uParam0->f_19B != 0x00000009)
	{
		func_444(0x00000002);
	}
}

int func_426(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 0x00000001;
	}
	if ((((!func_133() && func_151(uParam0, 0x00000003) > 1f) || uParam0->f_19F == 0x00000012) || uParam0->f_19F == 0x0000000E) || uParam0->f_19F == 0x0000000F)
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
		{
			if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0x00000000))
				{
					if (func_60(uParam0) == 0x00000000 || func_259(uParam0->f_55, 0x00000020))
					{
						if (!unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
						{
							func_350(uParam0, 0x00001040, 0x00000000);
						}
						else
						{
							func_350(uParam0, 0x00000000, 0x00000000);
						}
						return 0x00000001;
					}
					else
					{
						func_350(uParam0, 0x00000000, 0x00000000);
						return 0x00000001;
					}
				}
				else
				{
					func_350(uParam0, 0x00000000, 0x00000000);
					return 0x00000001;
				}
			}
			else
			{
				func_350(uParam0, 0x00000000, 0x00000000);
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

int func_427(var uParam0)
{
	if (uParam0->f_6D && uParam0->f_19A < 0x0000001D)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_428(int iParam0)
{
	func_430(&Local_231, iParam0);
	Local_231.f_19A = 0x00000000;
	func_429(&Local_231, 0x00000002, 0x00000008);
	Local_231.f_17 = { -1069.277f, -2666.156f, 12.665f };
	Local_231.f_21 = 202.9f;
	Local_231.f_1A = { 323.9376f, -956.7155f, 28.346f };
	Local_231.f_22 = 262.6098f;
	Local_231.f_1D = { -1037.711f, -2748.463f, 20.3642f };
}

void func_429(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_3A = iParam1;
	uParam0->f_3B = iParam2;
}

void func_430(var uParam0, var uParam1)
{
	func_440(0x00000001);
	func_208();
	func_7(&(uParam0->f_F4));
	func_439(uParam0);
	uParam0->f_19B = uParam1;
	if (!func_204(Global_1B416.f_4A94, 0x00000004))
	{
		func_179(&(Global_1B416.f_4A94), 0x00000004);
	}
	func_434(uParam0);
	func_432(uParam0);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
	uParam0->f_66 = (func_431(uParam0->f_19B) % uParam0->f_65);
	uParam0->f_50 = 0x00000000;
	uParam0->f_1AC = func_2();
	unk_0xD7992BEF7A9D109E("TAXI", 0x00000002);
}

int func_431(int iParam0)
{
	return Global_1B416.f_4A94.f_27[iParam0];
}

void func_432(var uParam0)
{
	switch (func_60(uParam0))
	{
		case 0x00000000:
			func_433(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000001:
			func_433(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000002:
			func_433(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000003:
			func_433(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000004:
			func_433(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000005:
			func_433(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000006:
			func_433(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000007:
			func_433(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000008:
			func_433(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000009:
			func_433(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_65 = 0x00000001;
			break;
	}
}

void func_433(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_7A = sParam1;
	uParam0->f_8F = sParam2;
	uParam0->f_90 = sParam3;
}

void func_434(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			func_438(uParam0, 0x00000003);
			func_437(uParam0, 0x0000000E);
			break;
		
		case 0x00000001:
			func_438(uParam0, 0x0000000E);
			func_437(uParam0, 0x00000008);
			break;
		
		case 0x00000002:
			func_438(uParam0, 0x00000008);
			func_437(uParam0, 0x00000007);
			break;
		
		case 0x00000003:
			func_438(uParam0, 0x0000000F);
			func_437(uParam0, 0x00000006);
			break;
		
		case 0x00000004:
			func_438(uParam0, 0x00000000);
			func_437(uParam0, 0x00000003);
			break;
		
		case 0x00000005:
			func_438(uParam0, 0x00000006);
			func_437(uParam0, 0x00000007);
			break;
		
		case 0x00000006:
			func_438(uParam0, 0x00000008);
			func_437(uParam0, 0x0000000F);
			break;
		
		case 0x00000007:
			func_438(uParam0, 0x00000008);
			func_437(uParam0, 0x0000000E);
			break;
		
		case 0x00000008:
			func_438(uParam0, 0x00000007);
			func_437(uParam0, 0x0000000F);
			break;
		
		case 0x00000009:
			func_438(uParam0, unk_0x09AC81E49EA267F7(0x00000000, 0x00000011));
			iVar0 = func_436((uParam0->f_1A2.f_2 + unk_0x09AC81E49EA267F7(0x00000001, 0x00000011)), 0x00000000, 0x00000010);
			func_437(uParam0, iVar0);
			func_435(uParam0);
			uParam0->f_1A2.f_7 = 0x00000001;
			uParam0->f_1A2.f_8 = 0x00000001;
			break;
	}
}

void func_435(var uParam0)
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

int func_436(int iParam0, int iParam1, int iParam2)
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

void func_437(var uParam0, int iParam1)
{
	uParam0->f_1A2.f_1 = iParam1;
}

void func_438(var uParam0, int iParam1)
{
	uParam0->f_1A2.f_2 = iParam1;
}

void func_439(var uParam0)
{
	uParam0->f_2 = unk_0x16F2683693E537C9();
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_E = { func_40() };
	uParam0->f_11 = { func_40() };
	uParam0->f_23 = 0f;
	uParam0->f_4C = 0x00000000;
	uParam0->f_31 = 0x00000000;
	uParam0->f_6D = 0x00000000;
	uParam0->f_24 = 0f;
	uParam0->f_19A = 0x00000002;
	uParam0->f_7B = "TRS_FINDING_LOCATION";
	func_141(uParam0, 0x00000020, 0x00000000);
}

void func_440(bool bParam0)
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

void func_441()
{
	int iVar0;
	
	func_210(func_217(0xFFFFFFFF), 0x00000001, 0x42700000);
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		if (!unk_0x437347B10A200C4B(iLocal_323[iVar0], 0x00000000))
		{
			unk_0x6DAD7906B73F064D(&(iLocal_323[iVar0]));
		}
		iVar0++;
	}
	unk_0x71199B01895C6202(func_280(0x00000000));
	func_134(&iLocal_266);
	unk_0xC98C2F03CE3C0572(0x00000000);
	unk_0x060F249A9A3E3F4E(0x00000001);
	unk_0x8C26F31DFF77D124();
	unk_0x8910D3D58E0132B8("TAXI_CUT_U_IN");
	unk_0x8D17794CE3273D70("MOVE_P_M_ZERO_RUCKSACK");
	func_443();
	func_442();
	func_287(&uLocal_45, 0x00000000, 0x00000000);
	unk_0x2952D66A502EA873(iLocal_326, 0x00000000);
	if (unk_0xC844350D5D58C99A(iLocal_244))
	{
		unk_0xF690C84DADBB3551(&iLocal_244);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_442()
{
	unk_0x71199B01895C6202(func_280(0x00000003));
	unk_0x71199B01895C6202(func_280(0x00000004));
	unk_0xDB8844D4B7C60440(0x00000000, func_138(0x00000001));
}

void func_443()
{
}

void func_444(int iParam0)
{
	Global_1AF0C.f_16 = iParam0;
}

