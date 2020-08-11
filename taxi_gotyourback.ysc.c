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
	int iLocal_72 = 0;
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
	struct<414> Local_230 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = -1;
	var uLocal_236 = -1;
	var uLocal_237 = -1;
	var uLocal_238 = -1;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	struct<33> Local_247 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 4;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	struct<38> Local_257 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	vector3 vLocal_264[1] = {{ 0f, 0f, 0f } };
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271[3] = { 0, 0, 0 };
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274[2] = { 0, 0 };
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	var uLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	bool bLocal_302 = 0;
	int iLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	vector3 vLocal_309 = { 0f, 0f, 0f };
	vector3 vLocal_310 = { 0f, 0f, 0f };
	vector3 vLocal_311 = { 0f, 0f, 0f };
	vector3 vLocal_312 = { 0f, 0f, 0f };
	vector3 vLocal_313 = { 0f, 0f, 0f };
	vector3 vLocal_314 = { 0f, 0f, 0f };
	vector3 vLocal_315 = { 0f, 0f, 0f };
	vector3 vLocal_316 = { 0f, 0f, 0f };
	vector3 vLocal_317 = { 0f, 0f, 0f };
	vector3 vLocal_318 = { 0f, 0f, 0f };
	char* sLocal_319 = NULL;
	vector3 vLocal_320[24] = "";
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	vector3 vLocal_324[24] = "";
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	struct<6> Local_328 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	bool bLocal_335 = 0;
	struct<28> Local_336 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 5;
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
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 1097859072;
	var uLocal_383 = 1500;
	var uLocal_384 = 45;
	var uLocal_385 = 1103626240;
	var uLocal_386 = 5;
	int iLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
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
	iLocal_72 = unk_0x817B3657F78A517A();
	vLocal_77 = { 500f, 500f, 500f };
	iLocal_265 = joaat("a_m_m_farmer_01");
	iLocal_266 = 0xB131133A;
	iLocal_267 = 0xA5A49677;
	iLocal_268 = 0xAFDD8CBB;
	iLocal_281 = 0x00000001;
	iLocal_285 = 0x00000070;
	vLocal_309 = { 11.8607f, -1123.48f, 27.6801f };
	vLocal_310 = { 11.8607f, -1123.48f, 27.6801f };
	vLocal_311 = { 144.3291f, -3352.773f, 3.6651f };
	vLocal_312 = { 311.9527f, -3305.613f, 10.6651f };
	vLocal_313 = { 206.636f, -3322.673f, 4.6339f };
	vLocal_314 = { 0f, 0f, 24f };
	vLocal_315 = { 208.786f, -3319.823f, 4.6339f };
	vLocal_316 = { 0f, 0f, 47f };
	vLocal_317 = { 199.5188f, -3326.201f, 4.78716f };
	vLocal_318 = { 232.9944f, -3327.825f, 4.79877f };
	sLocal_319 = "oddjobs@taxi@argument";
	StringCopy(&cLocal_320, "txm12_deal1_7", 24);
	StringCopy(&cLocal_324, "txm12_deal1_7", 24);
	if (unk_0x2EBF608FFE6CA406(0x00000043))
	{
		func_435(0x00000002);
		func_433();
	}
	unk_0x7798376279BB5369(0x00000001);
	func_417();
	Local_230.f_66 = 0x00000001;
	while (0x00000001)
	{
		if (unk_0xC844350D5D58C99A(Local_230.f_2))
		{
			func_9();
		}
		else
		{
			func_1(&Local_230);
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1(int iParam0)
{
	iParam0->f_2 = unk_0x16F2683693E537C9();
	func_7(&(iParam0->f_F4));
	iParam0->f_1AC = func_2();
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
	if (func_416(&Local_230))
	{
		func_415(&Local_230);
		if (func_414(&Local_230, 0x00000000))
		{
			func_412();
		}
	}
	else
	{
		func_411(&Local_230);
		if (Local_230.f_19A >= 0x00000009)
		{
			unk_0xF3039DE1FDB4F6FD(0x00000000);
			func_409();
		}
		func_375(&Local_230, &uLocal_380);
		if (Local_230.f_19A < 0x00000016)
		{
			func_374(&Local_230);
		}
		func_373(&Local_230, &uLocal_289, 0x00000000);
		if (Local_230.f_19A > 0x00000005 && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x00000000))
		{
			Local_230.f_11 = { 189.7825f, -3325.684f, 4.6697f };
			unk_0x5D96D8530B3D0904(&iLocal_290, 0x00000000);
		}
		if (Local_230.f_19A > 0x00000002)
		{
			if (!func_372(&Local_230))
			{
				func_339();
			}
			else
			{
				func_330(&Local_230, "Taxi Not Driveable", func_338(&Local_230));
			}
		}
		if (Local_230.f_19A == 0x00000009)
		{
			func_306(&Local_230, 0x00000000, 0x00000001);
		}
		if (unk_0xC844350D5D58C99A(Local_230.f_3))
		{
			if (unk_0x437347B10A200C4B(Local_230.f_3, 0x00000000))
			{
				if (!func_305(&Local_230, 0x00000000))
				{
					func_304(&Local_230, 0x00000000);
				}
				if (Local_230.f_19A >= 0x00000016 || iLocal_269 >= 0x00000001)
				{
					iLocal_299 = 0x00000001;
				}
				func_303(&(Local_247.f_3));
				func_303(&(Local_257.f_3));
				func_302(&iLocal_274);
				func_330(&Local_230, "TX12_GYB - Walter has been killed", 0x0000000F);
			}
		}
		switch (Local_230.f_19A)
		{
			case 0x00000000:
				func_299();
				func_298(&Local_230, 0x00000010, 4f, 0x00000000);
				func_296(&Local_230, vLocal_309, vLocal_310, "TaxiWalter", iLocal_265, 202f, 35f);
				func_294(&Local_230);
				func_293(&Local_230, 0x00000001);
				break;
			
			case 0x00000001:
				if (func_291())
				{
					func_290();
					func_289(&(vLocal_264[0x00000000 /*3*/]), "TAXI_SC_BN_12", 0x000000C8);
					func_288(&Local_230, &vLocal_264);
					func_268();
					func_267(&Local_230);
					func_293(&Local_230, 0x00000002);
				}
				break;
			
			case 0x00000002:
				Local_230.f_E = { vLocal_309 };
				Local_230.f_11 = { Local_247 };
				func_293(&Local_230, 0x00000003);
				break;
			
			case 0x00000003:
				if (func_262(&Local_230, 0x00000001))
				{
					if (!unk_0x437347B10A200C4B(Local_230.f_3, 0x00000000))
					{
						unk_0x64F9F278AB9DCA2C(Local_230.f_3, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
						unk_0x64F9F278AB9DCA2C(Local_230.f_3, 0x00000004, 0x00000000, 0x00000002, 0x00000000);
						unk_0x64F9F278AB9DCA2C(Local_230.f_3, 0x00000000, 0x00000000, 0x00000002, 0x00000000);
					}
					func_261(&Local_230, 0x00000001, 0x00000000);
					unk_0x0E2400AB9174FA81(0x00000001, iLocal_262, Local_230.f_19D);
					unk_0x0E2400AB9174FA81(0x00000001, Local_230.f_19D, iLocal_262);
					unk_0x25C5402CC10F76CD(Local_230.f_3, 0x00000000);
					func_293(&Local_230, 0x00000005);
				}
				break;
			
			case 0x00000005:
				if (func_235(&Local_230, 0x00000000, 0x42200000))
				{
					func_293(&Local_230, 0x0000000F);
				}
				break;
			
			case 0x0000000F:
				if (func_234(&Local_230))
				{
					func_230(&Local_230, 0x00000009, 0x00000001, 0x00000000, 0x00000000);
					func_229(&Local_230);
					func_293(&Local_230, 0x00000007);
				}
				if (unk_0xDF1306B443CD3D15(Local_230.f_4, 0x00000000))
				{
					if (!unk_0xC42A92762C58E1B9(Local_230.f_2, Local_230.f_4, 0x00000000))
					{
						func_227(&Local_230);
						func_293(&Local_230, 0x00000005);
					}
				}
				break;
			
			case 0x00000007:
				if (unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x00000000))
				{
					func_226();
					func_293(&Local_230, 0x00000009);
				}
				break;
			
			case 0x00000009:
				func_210();
				if ((func_209(Local_230.f_4, Local_230.f_11, 0x00000001) < 675f && !Local_230.f_8C) && !iLocal_297)
				{
					unk_0xE342F209E49C5314(vLocal_311, vLocal_312, 0x00000000, 0x00000001);
					unk_0x10F3BFFADF2CE3DA(vLocal_311, vLocal_312);
					iLocal_278 = unk_0x7D6CA5F52B3748BF(vLocal_311, vLocal_312, 0x00000000, 0x00000001, 0x00000001, 0x00000001);
					unk_0x745CE398A4B0A3C6(195.16f, -3282.54f, 4.79f, 25f, 0x00000000);
					func_208(&Local_230);
					func_206(&uLocal_339);
					func_205(&Local_336, 0x00000003, 0x00000000);
					func_230(&Local_230, 0x00000061, 0x00000001, 0x00000000, 0x00000000);
					unk_0x262EF6C6306BEA6C(Local_230.f_2, joaat("weapon_combatpistol"), 0x000000C8, 0x00000001, 0x00000001);
					iLocal_297 = 0x00000001;
				}
				if (func_174(&Local_230, 16f, 0x41700000, 0x42A00000))
				{
					unk_0x142CC44DB769B57E(&(Local_230.f_9));
					func_173(&uLocal_380, 0x00000004);
					func_173(&uLocal_380, 0x00000008);
					unk_0x51B096AAC60548C1(0.1f);
					SYSTEM::SETTIMERA(0x00000000);
					func_293(&Local_230, 0x00000016);
				}
				if (func_209(Local_230.f_4, Local_230.f_11, 0x00000001) < 10f && func_172(Local_230.f_4, Local_247.f_3[0x00000001], 0x00000001) < 10f)
				{
					if (func_168(&Local_230, 0x00000001, 0x40A00000))
					{
						unk_0x142CC44DB769B57E(&(Local_230.f_9));
						func_166(0x00000001, 0x00000000);
						func_166(0x00000002, 0x00000000);
						func_166(0x00000003, 0x00000000);
						func_166(0x00000004, 0x00000000);
						func_166(0x00000005, 0x00000000);
						func_166(0x00000000, 0x00000001);
						unk_0x51B096AAC60548C1(0.1f);
						SYSTEM::SETTIMERA(0x00000000);
						func_293(&Local_230, 0x00000016);
					}
				}
				if (!iLocal_301)
				{
				}
				if (!iLocal_301)
				{
					if (bLocal_302)
					{
						if ((((((((((unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000000]) || unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000001])) || unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000002])) || unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000003])) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000000], 0x00000000) && unk_0xE147126C9AD09A60(Local_247.f_3[0x00000000]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000001], 0x00000000) && unk_0xE147126C9AD09A60(Local_247.f_3[0x00000001]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000002], 0x00000000) && unk_0xE147126C9AD09A60(Local_247.f_3[0x00000002]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000000], 0x00000000) && unk_0x54648B774DB42A3A(Local_247.f_3[0x00000000], 0x00000000, 0x00000002))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000001], 0x00000000) && unk_0x54648B774DB42A3A(Local_247.f_3[0x00000001], 0x00000000, 0x00000002))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000002], 0x00000000) && unk_0x54648B774DB42A3A(Local_247.f_3[0x00000002], 0x00000000, 0x00000002))) || func_172(unk_0x16F2683693E537C9(), Local_247.f_3[0x00000001], 0x00000001) < 6f)
						{
							unk_0x6DF7BF67E86AAE86(Local_247.f_3[0x00000000], iLocal_262);
							func_303(&(Local_247.f_3));
							func_302(&iLocal_274);
							func_330(&Local_230, "Aggro Heard Shot", 0x00000008);
							iLocal_301 = 0x00000001;
						}
					}
				}
				break;
			
			case 0x00000016:
				if (func_165(Local_230.f_3, 0x00000001) < 250f)
				{
					if (func_126())
					{
						func_124(&uLocal_380, 0x00000001);
						func_124(&uLocal_380, 0x00000010);
						func_124(&uLocal_380, 0x00000020);
						func_230(&Local_230, 0x00000064, 0x00000001, 0x00000000, 0x00000000);
						if (!unk_0xEB6A8945D1AC98A1(Local_230.f_3) && !unk_0xEB6A8945D1AC98A1(Local_230.f_2))
						{
							unk_0x327AAEE25F323797(Local_230.f_3);
							unk_0xE185F110925D87DB(Local_230.f_3, Local_230.f_2, 0x00004E20, 6f, 0x40000000, 0x40000000, 0x00000000);
						}
						SYSTEM::SETTIMERA(0x00000000);
						Local_230.f_72 = 0x00000000;
						func_293(&Local_230, 0x00000018);
					}
				}
				else
				{
					func_330(&Local_230, "Player abandoned passenger", 0x00000008);
				}
				break;
			
			case 0x00000018:
				if (func_165(Local_230.f_2, 0x00000001) < 7f && SYSTEM::TIMERA() > 0x00000BB8)
				{
					unk_0x0C8C0C840C2D1AD2(Local_230.f_3, Local_230.f_2, 0xFFFFFFFF, 0x00000800, 0x00000004);
					unk_0xF82EA857DA10E0CD(&iLocal_270);
					unk_0xDD353D0E9C789D0E(&iLocal_270);
					unk_0xF96A174EE26D7588(0x00000000, Local_230.f_2, 0xFFFFFFFF);
					unk_0x75ABDC5F81978924(iLocal_270);
					unk_0x78ADC381772E3D54(Local_230.f_3, iLocal_270);
					Local_230.f_38 = 0x00000032;
					func_122(&Local_230);
					func_118(&Local_230);
					func_117(&Local_230);
					if (iLocal_288 == 0x00000008)
					{
						func_116(&Local_230, 0x00000000);
					}
					func_293(&Local_230, 0x0000001B);
				}
				else if (func_165(Local_230.f_3, 0x00000001) > 100f)
				{
					func_330(&Local_230, "Player abandoned passenger", 0x00000008);
				}
				break;
			
			case 0x0000001B:
				if ((!func_115() && !unk_0x437347B10A200C4B(Local_230.f_3, 0x00000000)) && func_113(&Local_230, 0x00000013) > 2f)
				{
					func_112(&Local_230, 0x00000013, 0x00000000);
					func_293(&Local_230, 0x0000001D);
					if (unk_0x58C79C59A23B279F(0x00000005, vLocal_318, 0x00000001, 0f, &uLocal_279, 0x00000000, 0x00000000))
					{
						unk_0x6D3E3CEAE3946A5A(uLocal_279, 200f);
						bLocal_304 = 0x00000001;
					}
					if (unk_0x58C79C59A23B279F(0x00000007, vLocal_318, 0x00000003, 0f, &uLocal_280, 0x00000000, 0x00000000))
					{
						bLocal_304 = 0x00000001;
					}
				}
				break;
			
			case 0x0000001D:
				if (func_77(&Local_230, &iLocal_387))
				{
					if (unk_0xC844350D5D58C99A(Local_230.f_3))
					{
						if (!unk_0x437347B10A200C4B(Local_230.f_3, 0x00000000))
						{
							unk_0xA3BF0AA5A2608191(Local_230.f_3);
							unk_0xF82EA857DA10E0CD(&iLocal_270);
							unk_0xDD353D0E9C789D0E(&iLocal_270);
							unk_0xEEB67C3D0A71A47B(0x00000000, Local_230.f_11, 500f, 0x00007530, 0x00000000, 0x00000000);
							unk_0x96167B03C5A77156(0x00000000, 261.0916f, -3089.062f, 4.79249f, 2f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
							unk_0x96167B03C5A77156(0x00000000, 304.6327f, -2965.922f, 5.00012f, 2f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
							unk_0x96167B03C5A77156(0x00000000, 309.8907f, -2870.473f, 5.15704f, 2f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
							unk_0x01E4BB5190DF7317(0x00000000, 0x471C4000, 0x00000000);
							unk_0x75ABDC5F81978924(iLocal_270);
							unk_0x78ADC381772E3D54(Local_230.f_3, iLocal_270);
							unk_0xFADC0A217229F6B5(Local_230.f_3, 0x00000001);
						}
					}
					func_11(0x00000001, &Local_230, 0x00000000);
					SYSTEM::SETTIMERA(0x00000000);
					func_293(&Local_230, 0x0000001E);
				}
				break;
			
			case 0x0000001E:
				if (func_10(unk_0x16F2683693E537C9(), 213.4579f, -3329.471f, 4.7971f, 0x00000001) > 40f)
				{
					func_433();
				}
				else if (bLocal_304)
				{
					iLocal_277 = unk_0x6E7D01E16ABEFABB(vLocal_318, 40f, joaat("ambulance"), 0x00000000);
					if (unk_0xDF1306B443CD3D15(iLocal_277, 0x00000000))
					{
						iLocal_305 = 0x00000001;
					}
					iLocal_277 = unk_0x6E7D01E16ABEFABB(vLocal_318, 40f, joaat("police"), 0x00000000);
					if (unk_0xDF1306B443CD3D15(iLocal_277, 0x00000000))
					{
						iLocal_305 = 0x00000001;
					}
					iLocal_275 = unk_0xF187F2EA5437526A(vLocal_318, 10f, 10f, 5f, 0xFFFFFFFF);
					if (!unk_0xEB6A8945D1AC98A1(iLocal_275))
					{
						iLocal_305 = 0x00000001;
					}
					if (iLocal_305 || SYSTEM::TIMERA() > 0x00007530)
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
						func_433();
					}
				}
				else
				{
					func_433();
				}
				break;
			}
	}
}

float func_10(int iParam0, vector3 vParam1, bool bParam2)
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

void func_11(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_53(uParam1);
		if (!unk_0xEB6A8945D1AC98A1(uParam1->f_3))
		{
			unk_0x4E885A246A9D983A(uParam1->f_3, 0x0000013D, 0x00000001);
		}
	}
	else
	{
		func_51(0x00000001, 0x00000000);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)
{
	func_415(uParam0);
	if (func_115())
	{
		func_49();
	}
	func_47();
	unk_0x790015DC92C918E2();
	unk_0xA37A90C62806D848(0x00000001);
	func_42(0x00000000);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		unk_0x44A200C9B6E1CEA6(uParam0->f_4, 0x00000000);
		unk_0x78CCB85A0DC35709(uParam0->f_4);
		unk_0x7AA3AFA47C4179D1(uParam0->f_4);
	}
	func_39(uParam0->f_E, 0x00000001);
	func_37(uParam0->f_E, 0x00000001, 0x42700000);
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
	if (func_22(Global_1B416.f_4A94, 0x00000004))
	{
		func_124(&(Global_1B416.f_4A94), 0x00000004);
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

float func_13(int iParam0)
{
	if (func_16(iParam0))
	{
		if (func_15(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_14(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
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

bool func_22(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
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

void func_37(vector3 vParam0, bool bParam1, float fParam2)
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

void func_39(vector3 vParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_40(vParam0, func_41(), 0x00000000))
	{
		vVar0 = { func_38(vParam0, 1f, -30f, -30f, -10f) };
		vVar1 = { func_38(vParam0, 1f, 30f, 30f, 10f) };
		unk_0xE342F209E49C5314(vVar0, vVar1, bParam1, 0x00000001);
	}
}

bool func_40(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_41()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_42(int iParam0)
{
	if (func_46())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_45())
		{
			func_43(0x00000001, 0x00000001);
		}
		else
		{
			func_43(0x00000000, 0x00000000);
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

void func_43(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0x00000000))
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

int func_44(int iParam0)
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

bool func_45()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_46()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

void func_47()
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
					func_48(Global_175BD[iVar0 /*17*/].f_5, 0x00000001);
				}
			}
		}
		iVar0++;
	}
}

void func_48(int iParam0, bool bParam1)
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

void func_49()
{
	Global_4CD7 = 0x00000000;
	func_50();
}

void func_50()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			Global_1B416.f_4A94.f_16[0x00000000]++;
			func_52("Fares Completed ++ = ", Global_1B416.f_4A94.f_16[0x00000000]);
			break;
		
		case 0x00000001:
			Global_1B416.f_4A94.f_16[0x00000001]++;
			func_52("Fares Failed ++ = ", Global_1B416.f_4A94.f_16[0x00000001]);
			break;
		
		case 0x00000002:
			Global_1B416.f_4A94.f_16[0x00000002]++;
			func_52("Fares Accepted ++ ", Global_1B416.f_4A94.f_16[0x00000002]);
			break;
		
		case 0x00000003:
			Global_1B416.f_4A94.f_16[0x00000003]++;
			func_52("Fares Expired ++ ", Global_1B416.f_4A94.f_16[0x00000003]);
			break;
		
		case 0x0000000D:
			Global_1B416.f_4A94.f_16[0x0000000D]++;
			func_52("Passengers run ++ = ", Global_1B416.f_4A94.f_16[0x0000000D]);
			break;
		
		case 0x0000000E:
			Global_1B416.f_4A94.f_16[0x0000000E]++;
			func_52("Passenger Forced to Pay ++ = ", Global_1B416.f_4A94.f_16[0x0000000E]);
			break;
		
		case 0x00000004:
			if (iParam1 != 0x00000000)
			{
				if (iParam1 > Global_1B416.f_4A94.f_16[0x00000004])
				{
					Global_1B416.f_4A94.f_16[0x00000004] = iParam1;
					func_52("This distance ", iParam1);
					func_52(" is longer than current best", Global_1B416.f_4A94.f_16[0x00000004]);
				}
				else
				{
					func_52("Longest Distance Not Beat ", Global_1B416.f_4A94.f_16[0x00000004]);
				}
			}
			break;
		
		case 0x00000005:
			Global_1B416.f_4A94.f_16[0x00000005] = (Global_1B416.f_4A94.f_16[0x00000005] + iParam1);
			func_52("Total Distance w/ Passenger = ", Global_1B416.f_4A94.f_16[0x00000005]);
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
			func_52("Wanted Levels ++ = ", Global_1B416.f_4A94.f_16[0x00000006]);
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
			func_52("Wanted Levels Lost = ", Global_1B416.f_4A94.f_16[0x00000007]);
			break;
		
		case 0x00000008:
			Global_1B416.f_4A94.f_16[0x00000008]++;
			func_52("Taxis wrecked ++ = ", Global_1B416.f_4A94.f_16[0x00000008]);
			break;
		
		case 0x00000009:
			Global_1B416.f_4A94.f_16[0x00000009]++;
			func_52("Horn Honked ++ = ", Global_1B416.f_4A94.f_16[0x00000009]);
			break;
		
		case 0x0000000A:
			Global_1B416.f_4A94.f_16[0x0000000A] = (Global_1B416.f_4A94.f_16[0x0000000A] + iParam1);
			func_52("Total Money Earned = ", Global_1B416.f_4A94.f_16[0x0000000A]);
			break;
		
		case 0x0000000B:
			Global_1B416.f_4A94.f_16[0x0000000B] = (Global_1B416.f_4A94.f_16[0x0000000B] + iParam1);
			func_52("Total Tips Earned = ", Global_1B416.f_4A94.f_16[0x0000000B]);
			break;
		
		case 0x0000000C:
			if (iParam1 > Global_1B416.f_4A94.f_16[0x0000000C])
			{
				Global_1B416.f_4A94.f_16[0x0000000C] = iParam1;
				func_52("New Highest Tip = ", Global_1B416.f_4A94.f_16[0x0000000C]);
			}
			else
			{
				func_52("Highest Tip Not Reached = ", Global_1B416.f_4A94.f_16[0x0000000C]);
			}
			break;
	}
}

void func_52(char* sParam0, int iParam1)
{
}

void func_53(var uParam0)
{
	func_51(0x00000000, 0x00000000);
	if (uParam0->f_19B != 0x00000009)
	{
		func_435(0x00000001);
		func_63(0x0000000F, 0x00000001);
	}
	func_173(&(Global_1B416.f_4A94), 0x00000400);
	if (!func_22(Global_1B416.f_4A94, 0x00000040))
	{
		func_54(func_61(func_62(uParam0)), 0x00000000, 0x00000000);
	}
}

void func_54(int iParam0, int iParam1, int iParam2)
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
		func_60((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_55();
	}
}

void func_55()
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
		func_59(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_58() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_56();
				}
			}
		}
	}
}

int func_56()
{
	if (func_57(0x00000000))
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

bool func_57(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_58()
{
	return Global_7830;
}

int func_59(int iParam0, int iParam1)
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

int func_60(int iParam0, bool bParam1, int iParam2, int iParam3)
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

int func_61(int iParam0)
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

int func_62(var uParam0)
{
	return uParam0->f_19B;
}

int func_63(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_64(iParam0, iParam1);
}

int func_64(int iParam0, int iParam1)
{
	if (func_76(0x0000000E) && !func_75(iParam0))
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
	if (func_74(&Global_4127F1))
	{
		if (func_72(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_65(&Global_4127F1, iParam0))
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

int func_65(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_76(0x0000000E) && !func_75(iParam1))
	{
		return 0x00000000;
	}
	if (func_72(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_71(uParam0) < 0f)
	{
		func_70(uParam0, 0x00000000);
	}
	func_68(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_66(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_66(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_76(0x0000000E) && !func_75(iParam1))
	{
		return 0x00000000;
	}
	if (func_72(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_71(uParam0) < 0f)
	{
		func_70(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_67(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_67(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_68(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_69(uParam0, iVar0);
		iVar0++;
	}
	func_70(uParam0, (Global_4127F0 - 0.5f));
}

void func_69(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_70(var uParam0, float fParam1)
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

float func_71(var uParam0)
{
	return uParam0->f_50;
}

bool func_72(var uParam0, int iParam1)
{
	return func_73(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_73(var uParam0, int iParam1)
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

bool func_74(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_75(int iParam0)
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

bool func_76(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_77(int iParam0, int iParam1)
{
	switch (iLocal_160)
	{
		case 0x00000000:
			if (!func_115() && func_113(iParam0, 0x00000000) > 1f)
			{
				if (func_33())
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				}
				func_111(iParam0);
				func_124(&(Global_1B416.f_4A94), 0x00001000);
				func_108(iParam1, "TAXI_FARE_TITLE", iParam0->f_32, iParam0->f_38, ((iParam0->f_32 + iParam0->f_38) + iParam0->f_69), iParam0->f_69, func_110(iParam0), "TAXI_FARE_MID", 0x00000FA0, 0x00000001);
				iParam1->f_1 = 0x00000FA0;
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0x00000000);
				func_107(0x00000001);
				iLocal_160 = 0x00000006;
			}
			break;
		
		case 0x00000006:
			if (!func_101(iParam1, 0x00000000))
			{
				func_78(iParam0);
				func_298(iParam0, 0x00000000, 0x00000000, 0x00000000);
				func_107(0x00000000);
				iLocal_160 = 0x00000007;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = ((iParam0->f_32 + iParam0->f_38) + iParam0->f_69);
	if (iVar0 > 0x00000000)
	{
		func_79(func_99(), 0x00000015, iVar0, 0x00000000, 0x00000000);
		func_51(0x0000000A, iVar0);
		iLocal_57[0x00000000] = iVar0;
	}
}

void func_79(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_98(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_98(iParam0) == 0x00000004)
	{
		return;
	}
	func_80(func_98(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
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

int func_80(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_97();
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
					func_96(0x00000063, 0x00000001);
					func_95(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_95(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_95(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_94(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_89(0x00000005))
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
							func_95(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_95(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_95(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_89(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_95(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_95(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_95(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_95(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_95(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_95(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_95(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_95(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_95(joaat("sp2_money_spent_property"), iParam3);
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
									func_95(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_95(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_95(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_95(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_95(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_95(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_89(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_95(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_95(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_95(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_95(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_95(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_95(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_88(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_96(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_96(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_96(0x00000060, iParam3);
					break;
			}
			func_96(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_83(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_83(iVar1);
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
					func_95(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_95(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_95(joaat("sp2_total_cash_earned"), iParam3);
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
	func_82(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_81(0x00000000);
	}
	return 0x00000001;
}

void func_81(bool bParam0)
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

void func_82(int iParam0)
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

void func_83(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_60(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_60(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_60(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_60(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_86(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_86(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_86(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_86(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_86(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_86(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_85() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_85() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_84(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_84(int iParam0)
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

int func_85()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_87(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_87(var uParam0)
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

void func_88(int iParam0)
{
	func_96(0x0000005D, iParam0);
	func_96(0x0000001D, iParam0);
	func_96(0x0000001E, iParam0);
}

bool func_89(int iParam0)
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
		return func_91(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_91(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_91(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_91(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_90(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_90(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_90(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_90(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_90(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_90(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_85() /*10930*/].f_181E.f_A, iParam0);
}

int func_90(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_87(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_91(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_27();
	}
	iVar1 = func_93(iParam0, iParam1);
	uVar2 = func_92(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_92(int iParam0)
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

int func_93(int iParam0, int iParam1)
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

int func_94(bool bParam0)
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
		func_59(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_63(0x0000001B, 0x00000001);
	return 0x00000001;
}

void func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_96(int iParam0, int iParam1)
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

void func_97()
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

int func_98(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_99()
{
	func_100();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_100()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_4(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_3(unk_0x16F2683693E537C9());
			if (func_6(iVar0) && (!func_76(0x0000000E) || Global_1AFFD))
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

int func_101(var uParam0, int iParam1)
{
	if (!func_16(&(uParam0->f_2)))
	{
		func_105(&(uParam0->f_2));
	}
	unk_0x3584F71E5CA29322(0x0000000E);
	unk_0x6567AE843FADBA94(*uParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9) || uParam0->f_8)
		{
			if (!func_16(&(uParam0->f_5)))
			{
				func_105(&(uParam0->f_5));
				func_104(uParam0, 0x3EA8F5C3);
			}
		}
		if (func_16(&(uParam0->f_5)))
		{
			if (func_103(&(uParam0->f_5)) > 0.33f)
			{
				func_102(&(uParam0->f_5));
				return 0x00000000;
			}
		}
	}
	if (uParam0->f_1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (func_103(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_16(&(uParam0->f_5)))
		{
			func_105(&(uParam0->f_5));
			func_104(uParam0, 0x3EA8F5C3);
		}
		else if (func_103(&(uParam0->f_5)) > 0.33f)
		{
			func_102(&(uParam0->f_2));
			return 0x00000000;
		}
	}
	return 0x00000001;
}

void func_102(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0x00000000;
}

float func_103(int iParam0)
{
	if (func_16(iParam0))
	{
		if (func_15(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_14(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

void func_104(var uParam0, float fParam1)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, "SHARD_ANIM_OUT");
	unk_0x3CAEA85DA607305E(uParam0->f_9);
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7E60D21B163E9D56();
}

void func_105(int iParam0)
{
	func_106(iParam0, 0f);
}

void func_106(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_14(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

void func_107(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

void func_108(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0x7E60C62A7CE58FC8(*uParam0, func_109());
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
	func_105(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 0x00000001;
}

char* func_109()
{
	if (unk_0x8CD06866876216F2())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_110(int iParam0)
{
	char* sVar0;
	
	switch (iParam0->f_19B)
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

void func_111(int iParam0)
{
	int iVar0;
	
	Local_161.f_1 = SYSTEM::TO_FLOAT(iParam0->f_32);
	Local_161.f_2 = SYSTEM::TO_FLOAT(iParam0->f_38);
	func_51(0x0000000B, iParam0->f_38);
	func_51(0x0000000C, iParam0->f_38);
	iLocal_57[0x00000001] = iParam0->f_38;
	iLocal_57[0x00000002] = iParam0->f_38;
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < iParam0->f_3C)
	{
		Local_161.f_4[iVar0 /*3*/] = { iParam0->f_3C[iVar0 /*3*/] };
		if (unk_0xEAE0D21A50E6C7F4(Local_161.f_4[iVar0 /*3*/], 0x00000002))
		{
			Local_161.f_3 = (Local_161.f_3 + IntToFloat(iParam0->f_3C[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_161 = iParam0->f_19B;
	Local_161.f_14 = ((Local_161.f_1 + Local_161.f_2) + Local_161.f_3);
}

void func_112(int iParam0, int iParam1, bool bParam2)
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
			func_102(&(iParam0->f_92[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_102(&(iParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

float func_113(int iParam0, int iParam1)
{
	if (!func_16(&(iParam0->f_92[iParam1 /*3*/])))
	{
		func_114(&(iParam0->f_92[iParam1 /*3*/]));
	}
	return func_103(&(iParam0->f_92[iParam1 /*3*/]));
}

void func_114(int iParam0)
{
	if (!func_16(iParam0))
	{
		func_105(iParam0);
	}
}

int func_115()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_116(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000005)
	{
		unk_0x5D96D8530B3D0904(&(iParam0->f_3C[iParam1 /*3*/]), 0x00000002);
		iParam0->f_69 = (iParam0->f_69 + iParam0->f_3C[iParam1 /*3*/].f_1);
	}
}

void func_117(int iParam0)
{
	if (iParam0->f_38 >= iParam0->f_3B)
	{
		iParam0->f_38 = SYSTEM::CEIL((IntToFloat(iParam0->f_32) * 0.4f));
	}
	else if (iParam0->f_38 < iParam0->f_3B && iParam0->f_38 >= iParam0->f_3A)
	{
		iParam0->f_38 = SYSTEM::CEIL((IntToFloat(iParam0->f_32) * 0.15f));
	}
	else
	{
		iParam0->f_38 = 0x00000000;
	}
	if (!func_22(iParam0->f_37, 0x00000001))
	{
		func_173(&(iParam0->f_37), 0x00000001);
	}
}

void func_118(int iParam0)
{
	func_120();
	unk_0x790015DC92C918E2();
	if (iParam0->f_38 < iParam0->f_3A)
	{
		if (iParam0->f_19B == 0x00000000)
		{
			func_230(iParam0, 0x00000069, 0x00000001, 0x00000000, 0x00000000);
		}
		else
		{
			func_230(iParam0, 0x00000067, 0x00000001, 0x00000000, 0x00000000);
		}
		func_119(0x00000001);
	}
	else if (iParam0->f_38 >= iParam0->f_3B)
	{
		func_230(iParam0, 0x00000065, 0x00000001, 0x00000000, 0x00000000);
	}
	else
	{
		func_230(iParam0, 0x00000066, 0x00000001, 0x00000000, 0x00000000);
	}
	func_298(iParam0, 0x00000010, 4f, 0x00000000);
}

void func_119(int iParam0)
{
	Global_1AF0C.f_DD = iParam0;
}

void func_120()
{
	Global_4CD7 = 0x00000000;
	func_121();
}

void func_121()
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

void func_122(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_29;
	fVar0 = func_123(fVar0);
	iLocal_57[0x00000004] = SYSTEM::CEIL(fVar0);
	iLocal_57[0x00000005] = SYSTEM::CEIL(fVar0);
	func_51(0x00000004, SYSTEM::CEIL(fVar0));
	func_51(0x00000005, SYSTEM::CEIL(fVar0));
	uParam0->f_32 = SYSTEM::CEIL((fVar0 * 100f));
}

float func_123(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_124(var uParam0, int iParam1)
{
	func_125(uParam0, iParam1);
}

void func_125(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_126()
{
	int iVar0;
	
	if (iLocal_269 < 0x00000004 && ((((((((((unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000000]) || unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000001])) || unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000002])) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000000], 0x00000000) && unk_0xE147126C9AD09A60(Local_247.f_3[0x00000000]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000001], 0x00000000) && unk_0xE147126C9AD09A60(Local_247.f_3[0x00000001]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000002], 0x00000000) && unk_0xE147126C9AD09A60(Local_247.f_3[0x00000002]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000000], 0x00000000) && unk_0x54648B774DB42A3A(Local_247.f_3[0x00000000], 0x00000000, 0x00000002))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000001], 0x00000000) && unk_0x54648B774DB42A3A(Local_247.f_3[0x00000001], 0x00000000, 0x00000002))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000002], 0x00000000) && unk_0x54648B774DB42A3A(Local_247.f_3[0x00000002], 0x00000000, 0x00000002))) || func_172(unk_0x16F2683693E537C9(), Local_247.f_3[0x00000001], 0x00000001) < 6f) || (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), 204.0783f, -3331.305f, 6.040432f, 7.5f, 7.5f, 1.25f, 0x00000000, 0x00000001, 0x00000000) && ((((((!unk_0x437347B10A200C4B(Local_247.f_3[0x00000000], 0x00000000) && unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), Local_247.f_3[0x00000000])) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000001], 0x00000000) && unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), Local_247.f_3[0x00000001]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000002], 0x00000000) && unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), Local_247.f_3[0x00000002]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000000], 0x00000000) && unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_247.f_3[0x00000000]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000001], 0x00000000) && unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_247.f_3[0x00000001]))) || (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000002], 0x00000000) && unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_247.f_3[0x00000002]))))))
	{
		Local_230.f_72 = 0x00000001;
		iLocal_269 = 0x00000004;
	}
	switch (iLocal_269)
	{
		case 0x00000000:
			func_230(&Local_230, 0x0000005A, 0x00000001, 0x00000000, 0x00000000);
			func_205(&Local_336, 0xFFFFFFFF, 0x00000001);
			func_164();
			unk_0x0674E58A79778E99(&iLocal_290, 0x00000001);
			if (!unk_0x69DF961355195C3C(iLocal_295))
			{
				if ((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000000]) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000001])) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000002]))
				{
					iLocal_295 = unk_0xE9744DB7B8CA6965(vLocal_315, vLocal_316, 0x00000002);
					unk_0xC90224D9E95E5E3A(iLocal_295, 0x00000001);
					unk_0x915804B434753CBD(Local_247.f_3[0x00000000], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
					unk_0x915804B434753CBD(Local_247.f_3[0x00000001], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
					unk_0x915804B434753CBD(Local_247.f_3[0x00000002], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
				}
			}
			iLocal_282 = unk_0x1C0640BA9A7327B3();
			iLocal_269 = 0x00000001;
			break;
		
		case 0x00000001:
			if (!func_115() && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x0000000A))
			{
				func_230(&Local_230, 0x0000005B, 0x00000001, 0x00000000, 0x00000000);
				unk_0x5D96D8530B3D0904(&iLocal_290, 0x0000000A);
				func_114(&iLocal_329);
			}
			if ((unk_0x1C0640BA9A7327B3() - iLocal_282) > 0x00000FA0)
			{
				if (!unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
				{
					if (func_163(&Local_230))
					{
						func_162("TAXI_VIEW", 0xFFFFFFFF);
					}
					iLocal_298 = 0x00000001;
					if ((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000003]) && !unk_0xEB6A8945D1AC98A1(iLocal_274[0x00000000])) && !unk_0xEB6A8945D1AC98A1(iLocal_274[0x00000001]))
					{
						iLocal_292 = unk_0xE9744DB7B8CA6965(vLocal_313, vLocal_314, 0x00000002);
						unk_0x915804B434753CBD(Local_247.f_3[0x00000003], iLocal_292, "oddjobs@taxi@argument", "bridge_biker_d", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
						unk_0x915804B434753CBD(iLocal_274[0x00000000], iLocal_292, "oddjobs@taxi@argument", "bridge_hooker_a", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
						unk_0x915804B434753CBD(iLocal_274[0x00000001], iLocal_292, "oddjobs@taxi@argument", "bridge_hooker_b", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
					}
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
				}
			}
			if (func_161("TAXI_VIEW") && (unk_0x06F8112AA79C53D9(0x00000000, 0x00000050) || !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
			if (!unk_0xEB6A8945D1AC98A1(Local_230.f_3) && (!func_115() || func_13(&iLocal_329) > 9f))
			{
				if ((unk_0x5A91F08DF773C39D(Local_230.f_3, vLocal_317, 1.5f, 1.5f, 2f, 0x00000000, 0x00000001, 0x00000000) && unk_0xD1960163A3042274(Local_230.f_3, 0x0E763797) == 0x00000007) && (unk_0x69DF961355195C3C(iLocal_295) && unk_0xA45992A6CE82FB43(iLocal_295) > 0.995f))
				{
					if ((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000000]) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000001])) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000002]))
					{
						iLocal_296 = unk_0xE9744DB7B8CA6965(vLocal_315, vLocal_316, 0x00000002);
						unk_0x915804B434753CBD(Local_247.f_3[0x00000000], iLocal_296, "oddjobs@taxi@argument", "stand_off_biker_a", 1000f, -4f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
						unk_0x915804B434753CBD(Local_247.f_3[0x00000001], iLocal_296, "oddjobs@taxi@argument", "stand_off_biker_b", 1000f, -4f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
						unk_0x915804B434753CBD(Local_247.f_3[0x00000002], iLocal_296, "oddjobs@taxi@argument", "stand_off_biker_c", 1000f, -4f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
						unk_0xEFC3DF9D33E248D8(iLocal_296, 0x00000001);
					}
					unk_0xC6EB89C59F2AF6B8(Local_230.f_3, "oddjobs@taxi@argument", "stand_off_passenger", 4f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_284 = unk_0x1C0640BA9A7327B3();
					iLocal_282 = unk_0x1C0640BA9A7327B3();
					iLocal_269 = 0x00000002;
				}
			}
			break;
		
		case 0x00000002:
			if ((unk_0x1C0640BA9A7327B3() - iLocal_282) > 0x000009C4 && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x00000001))
			{
				func_230(&Local_230, 0x00000059, 0x00000001, 0x00000001, 0x00000000);
				unk_0x5D96D8530B3D0904(&iLocal_290, 0x00000001);
			}
			if (((unk_0xA45992A6CE82FB43(iLocal_296) >= 0.838f && !unk_0xEB6A8945D1AC98A1(Local_230.f_3)) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000001])) && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x00000006))
			{
				unk_0x262EF6C6306BEA6C(Local_247.f_3[0x00000001], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
				unk_0x262EF6C6306BEA6C(Local_230.f_3, joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
				unk_0x5D96D8530B3D0904(&iLocal_290, 0x00000006);
			}
			if ((unk_0xA45992A6CE82FB43(iLocal_296) >= 0.853f && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000002])) && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x00000007))
			{
				unk_0x262EF6C6306BEA6C(Local_247.f_3[0x00000002], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
				unk_0x5D96D8530B3D0904(&iLocal_290, 0x00000007);
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x00000003))
			{
				if ((unk_0x69DF961355195C3C(iLocal_292) && unk_0xA45992A6CE82FB43(iLocal_292) == 1f) || !unk_0x69DF961355195C3C(iLocal_292))
				{
					if ((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000003]) && !unk_0xEB6A8945D1AC98A1(iLocal_274[0x00000000])) && !unk_0xEB6A8945D1AC98A1(iLocal_274[0x00000001]))
					{
						iLocal_293 = unk_0xE9744DB7B8CA6965(vLocal_313, vLocal_314, 0x00000002);
						unk_0x915804B434753CBD(Local_247.f_3[0x00000003], iLocal_293, "oddjobs@taxi@argument", "hooker_loop_b_biker_d", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
						unk_0x915804B434753CBD(iLocal_274[0x00000000], iLocal_293, "oddjobs@taxi@argument", "hooker_loop_b_hooker_a", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
						unk_0x915804B434753CBD(iLocal_274[0x00000001], iLocal_293, "oddjobs@taxi@argument", "hooker_loop_b_hooker_b", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
						unk_0xC90224D9E95E5E3A(iLocal_293, 0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_290, 0x00000003);
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x00000001))
			{
				Local_328 = { func_160() };
				if (unk_0x7F8A39872A07D2CE(&cLocal_320, &Local_328) || unk_0x7F8A39872A07D2CE(&cLocal_324, &Local_328))
				{
					if ((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000003]) && !unk_0xEB6A8945D1AC98A1(iLocal_274[0x00000000])) && !unk_0xEB6A8945D1AC98A1(iLocal_274[0x00000001]))
					{
						if (unk_0x69DF961355195C3C(iLocal_293))
						{
							iLocal_294 = unk_0xE9744DB7B8CA6965(vLocal_313, vLocal_314, 0x00000002);
							unk_0x915804B434753CBD(Local_247.f_3[0x00000003], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x915804B434753CBD(iLocal_274[0x00000000], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x915804B434753CBD(iLocal_274[0x00000001], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0xEFC3DF9D33E248D8(iLocal_294, 0x00000001);
							iLocal_283 = unk_0x1C0640BA9A7327B3();
							iLocal_269 = 0x00000003;
						}
						else
						{
							iLocal_294 = unk_0xE9744DB7B8CA6965(vLocal_313, vLocal_314, 0x00000002);
							unk_0x915804B434753CBD(Local_247.f_3[0x00000003], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x915804B434753CBD(iLocal_274[0x00000000], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0x915804B434753CBD(iLocal_274[0x00000001], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
							unk_0xEFC3DF9D33E248D8(iLocal_294, 0x00000001);
							iLocal_283 = unk_0x1C0640BA9A7327B3();
							iLocal_269 = 0x00000003;
						}
					}
				}
			}
			break;
		
		case 0x00000003:
			switch (iLocal_286)
			{
				case 0x00000000:
					if (((unk_0x1C0640BA9A7327B3() - iLocal_283) > 0x00000352 && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000003])) && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x00000008))
					{
						unk_0x262EF6C6306BEA6C(Local_247.f_3[0x00000003], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_290, 0x00000008);
					}
					if (((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000000]) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000001])) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000002])) && !unk_0xEB6A8945D1AC98A1(Local_230.f_3))
					{
						unk_0x9DD8618CA5BF832D(Local_247.f_3[0x00000000], 0x0000009C, 0x00000001);
						unk_0x9DD8618CA5BF832D(Local_247.f_3[0x00000001], 0x0000009C, 0x00000001);
						unk_0x9DD8618CA5BF832D(Local_247.f_3[0x00000002], 0x0000009C, 0x00000001);
						unk_0x9DD8618CA5BF832D(Local_230.f_3, 0x0000009C, 0x00000001);
						if (((unk_0x69DF961355195C3C(iLocal_296) && unk_0xA45992A6CE82FB43(iLocal_296) == 1f) || !unk_0x69DF961355195C3C(iLocal_296)) || (unk_0x1C0640BA9A7327B3() - iLocal_284) > 0x00006978)
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_284) > 0x00006978)
							{
							}
							iLocal_307 = 0x00000001;
							unk_0x9BE7E7B6B488CC55(Local_247.f_3[0x00000000], Local_230.f_3, 0xFFFFFFFF, 0x00000000);
							unk_0x9BE7E7B6B488CC55(Local_247.f_3[0x00000001], Local_230.f_3, 0xFFFFFFFF, 0x00000000);
							unk_0x9BE7E7B6B488CC55(Local_247.f_3[0x00000002], Local_230.f_3, 0xFFFFFFFF, 0x00000000);
							unk_0x9BE7E7B6B488CC55(Local_230.f_3, Local_247.f_3[0x00000001], 0xFFFFFFFF, 0x00000000);
							iLocal_282 = 0x00000000;
							iLocal_286++;
						}
					}
					break;
				
				case 0x00000001:
					if (((unk_0x1C0640BA9A7327B3() - iLocal_283) > 0x00000352 && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000003])) && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x00000008))
					{
						unk_0x262EF6C6306BEA6C(Local_247.f_3[0x00000003], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
						unk_0x5D96D8530B3D0904(&iLocal_290, 0x00000008);
					}
					if (!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000003]))
					{
						unk_0x9DD8618CA5BF832D(Local_247.f_3[0x00000003], 0x0000009C, 0x00000001);
					}
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x00000004))
					{
						if (!unk_0x69DF961355195C3C(iLocal_294) || unk_0xA45992A6CE82FB43(iLocal_294) == 1f)
						{
							if (((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000003]) && !unk_0xEB6A8945D1AC98A1(iLocal_274[0x00000000])) && !unk_0xEB6A8945D1AC98A1(iLocal_274[0x00000001])) && !unk_0xEB6A8945D1AC98A1(Local_230.f_3))
							{
								unk_0x96167B03C5A77156(iLocal_274[0x00000000], 299.3585f, -3204.905f, 4.7214f, 3f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
								unk_0x96167B03C5A77156(iLocal_274[0x00000001], 299.3585f, -3204.905f, 4.7214f, 3f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
								unk_0xBD453909DC26A85D(iLocal_274[0x00000000], 0xBD8817DB, 0x00000000, 0x00000000, 0x00000000);
								unk_0xBD453909DC26A85D(iLocal_274[0x00000001], 0xBD8817DB, 0x00000000, 0x00000000, 0x00000000);
								unk_0x9BE7E7B6B488CC55(Local_247.f_3[0x00000003], Local_230.f_3, 0xFFFFFFFF, 0x00000001);
								unk_0x5D96D8530B3D0904(&iLocal_290, 0x00000004);
							}
						}
					}
					Local_328 = { func_160() };
					if (unk_0x7F8A39872A07D2CE("txm12_deal1_7", &Local_328) && iLocal_282 == 0x00000000)
					{
						iLocal_282 = unk_0x1C0640BA9A7327B3();
					}
					else if ((iLocal_282 > 0x00000000 && (unk_0x1C0640BA9A7327B3() - iLocal_282) > 0x000005DC) && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x00000009))
					{
						func_159();
						func_158("TAXI_OBJ_GYB", 0x00000FA0, 0x00000000);
						func_157(&(Local_247.f_3), &(Local_247.f_B));
						iLocal_298 = 0x00000000;
						unk_0x9A8DDC7C522F5BF5(Local_230, 0x00000000);
						unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
						iLocal_282 = unk_0x1C0640BA9A7327B3();
						iLocal_286 = 0x00000002;
						unk_0x5D96D8530B3D0904(&iLocal_290, 0x00000009);
					}
					else if (iLocal_282 > 0x00000000 && (unk_0x1C0640BA9A7327B3() - iLocal_282) > 0x000004B0)
					{
						if (func_156() && unk_0xFBB4F23D534EB790(Local_230))
						{
							if (!iLocal_308)
							{
								unk_0x82A772610883F395("CamPushInNeutral", 0x00000000, 0x00000000);
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
								iLocal_308 = 0x00000001;
							}
						}
					}
					break;
				
				case 0x00000002:
					if ((unk_0x1C0640BA9A7327B3() - iLocal_282) > 0x00000FA0 && unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x00000009))
					{
						func_141(&(Local_230.f_F4), Local_230.f_90, "txm12_deal1", "txm12_deal1_9", 0x00000009, 0x00000000, 0x00000000);
						iLocal_282 = unk_0x1C0640BA9A7327B3();
						unk_0x0674E58A79778E99(&iLocal_290, 0x00000009);
					}
					if ((((!unk_0xEB6A8945D1AC98A1(Local_230.f_3) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000000])) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000002])) && !unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x00000009)) && (unk_0x1C0640BA9A7327B3() - iLocal_282) > 0x000007D0)
					{
						unk_0xD458AC1C1D29C3B4(Local_247.f_3[0x00000000], 0x00000073, 0x00000000);
						unk_0xD458AC1C1D29C3B4(Local_247.f_3[0x00000002], 0x00000073, 0x00000000);
						iLocal_282 = unk_0x1C0640BA9A7327B3();
						iLocal_286 = 0x00000008;
					}
					break;
				
				case 0x00000003:
					if (!func_115())
					{
						func_230(&Local_230, 0x0000000C, 0x00000001, 0x00000000, 0x00000000);
						func_298(&Local_230, 0x00000013, 0x00000000, 0x00000000);
						iLocal_282 = unk_0x1C0640BA9A7327B3();
						iLocal_286++;
					}
					break;
				
				case 0x00000004:
					if (!unk_0xD17F06053799A7CA())
					{
						func_298(&Local_230, 0x00000013, 0x00000000, 0x00000000);
						func_230(&Local_230, 0x00000074, 0x00000001, 0x00000000, 0x00000000);
						iLocal_286++;
					}
					break;
				
				case 0x00000005:
				case 0x00000006:
				case 0x00000007:
					if (func_113(&Local_230, 0x00000013) > 2f)
					{
						func_298(&Local_230, 0x00000013, 0x00000000, 0x00000000);
						func_230(&Local_230, 0x00000074, 0x00000001, 0x00000000, 0x00000000);
						iLocal_286++;
					}
					break;
				
				case 0x00000008:
					if ((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000000]) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000001])) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000002]))
					{
						unk_0x68FCFE10774F5C97(0x00000001, iLocal_262, Local_230.f_19D);
						unk_0x0E2400AB9174FA81(0x00000005, iLocal_262, Local_230.f_19D);
						unk_0x298903DD96203C2C(Local_247.f_3[0x00000000], 0x00000064);
						unk_0x298903DD96203C2C(Local_247.f_3[0x00000002], 0x00000064);
						unk_0x2C4A1A0F54A166E8(Local_247.f_3[0x00000000], Local_230.f_3, 0x00001388, 0xC6EE6B4C);
						unk_0x2C4A1A0F54A166E8(Local_247.f_3[0x00000001], Local_230.f_3, 0x00001388, 0xD6FF6D61);
						unk_0x2C4A1A0F54A166E8(Local_247.f_3[0x00000002], Local_230.f_3, 0x00001388, 0xC6EE6B4C);
						iLocal_282 = unk_0x1C0640BA9A7327B3();
						iLocal_286++;
					}
					break;
				
				case 0x00000009:
					if ((unk_0x1C0640BA9A7327B3() - iLocal_282) > 0x00001388)
					{
						iLocal_269 = 0x00000004;
					}
					break;
			}
			break;
		
		case 0x00000004:
			if (!Local_230.f_72)
			{
				Local_230.f_72 = 0x00000001;
			}
			func_173(&uLocal_380, 0x00000001);
			func_173(&uLocal_380, 0x00000010);
			func_173(&uLocal_380, 0x00000020);
			func_159();
			func_138();
			func_137();
			func_303(&(Local_247.f_3));
			func_157(&(Local_247.f_3), &(Local_247.f_B));
			func_302(&iLocal_274);
			iLocal_282 = unk_0x1C0640BA9A7327B3();
			iLocal_269 = 0x00000005;
			break;
		
		case 0x00000005:
			if (iLocal_287 >= 0x00000002 && !func_305(&Local_230, 0x00000008))
			{
				func_304(&Local_230, 0x00000008);
			}
			else if (func_305(&Local_230, 0x00000008) && func_113(&Local_230, 0x00000008) > 3f)
			{
				func_135();
				func_132();
				iLocal_282 = unk_0x1C0640BA9A7327B3();
				iLocal_269 = 0x00000006;
			}
			else
			{
				iLocal_287 = 0x00000000;
			}
			func_130(&(Local_247.f_3), &(Local_247.f_B), &(Local_257.f_3), &(Local_257.f_B));
			break;
		
		case 0x00000006:
			if ((unk_0xEB6A8945D1AC98A1(Local_257.f_3[0x00000000]) && unk_0xDF1306B443CD3D15(Local_257.f_1B[0x00000000], 0x00000000)) && unk_0x20D6474D5F4B9FC6(Local_257.f_1B[0x00000000]))
			{
				unk_0xC55F2A0377488064(Local_257.f_1B[0x00000000]);
			}
			if ((((unk_0xEB6A8945D1AC98A1(Local_257.f_3[0x00000002]) || unk_0xB87D13D0C064E9D1(Local_257.f_3[0x00000002], unk_0x16F2683693E537C9(), 0x00000001)) || unk_0xB87D13D0C064E9D1(Local_257.f_3[0x00000002], Local_230.f_3, 0x00000001)) && unk_0xDF1306B443CD3D15(Local_257.f_1B[0x00000001], 0x00000000)) && unk_0x20D6474D5F4B9FC6(Local_257.f_1B[0x00000001]))
			{
				unk_0xC55F2A0377488064(Local_257.f_1B[0x00000001]);
			}
			if (unk_0xE4EDC4B0E92C078B(Local_257.f_25[0x00000000]) && !unk_0xDF1306B443CD3D15(Local_257.f_1B[0x00000000], 0x00000000))
			{
				unk_0x142CC44DB769B57E(&(Local_257.f_25[0x00000000]));
			}
			if (unk_0xE4EDC4B0E92C078B(Local_257.f_25[0x00000001]) && !unk_0xDF1306B443CD3D15(Local_257.f_1B[0x00000001], 0x00000000))
			{
				unk_0x142CC44DB769B57E(&(Local_257.f_25[0x00000001]));
			}
			if (!iLocal_303 && ((unk_0xDF1306B443CD3D15(Local_257.f_1B[0x00000000], 0x00000000) && !unk_0x20D6474D5F4B9FC6(Local_257.f_1B[0x00000000])) || (unk_0xDF1306B443CD3D15(Local_257.f_1B[0x00000001], 0x00000000) && !unk_0x20D6474D5F4B9FC6(Local_257.f_1B[0x00000001]))))
			{
				if (func_129(&(Local_257.f_3)))
				{
					func_157(&(Local_257.f_3), &(Local_257.f_B));
					func_128();
					iLocal_303 = 0x00000001;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_290, 0x00000002))
			{
				if ((unk_0x1C0640BA9A7327B3() - iLocal_282) > 0x00001388)
				{
					func_303(&(Local_257.f_3));
					func_127(&(Local_247.f_3));
					unk_0x0E2400AB9174FA81(0x00000005, iLocal_262, Local_230.f_19D);
					unk_0x5D96D8530B3D0904(&iLocal_290, 0x00000002);
				}
			}
			else
			{
				iVar0 = 0x00000000;
				while (iVar0 < Local_257.f_3)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_257.f_3[iVar0]))
					{
						if (unk_0xD1960163A3042274(Local_257.f_3[iVar0], 0xAA05B492) != 0x00000001 && unk_0xD1960163A3042274(Local_257.f_3[iVar0], 0xAA05B492) != 0x00000000)
						{
							unk_0x7C8478BF70C1E072(Local_257.f_3[iVar0], 1000f, 0x00000000);
						}
					}
					iVar0++;
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(Local_230.f_3))
			{
				if (iLocal_306)
				{
					if (!func_115())
					{
						func_230(&Local_230, 0x0000008C, 0x00000001, 0x00000000, 0x00000001);
					}
					iLocal_306 = 0x00000000;
				}
			}
			return func_130(&(Local_247.f_3), &(Local_247.f_B), &(Local_257.f_3), &(Local_257.f_B));
			break;
	}
	return 0x00000000;
}

void func_127(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
		{
			unk_0x298903DD96203C2C((*uParam0)[iVar0], 0x00000001);
		}
		iVar0++;
	}
}

void func_128()
{
	if (unk_0xE4EDC4B0E92C078B(Local_257.f_25[0x00000000]))
	{
		unk_0x142CC44DB769B57E(&(Local_257.f_25[0x00000000]));
	}
	if (unk_0xE4EDC4B0E92C078B(Local_257.f_25[0x00000001]))
	{
		unk_0x142CC44DB769B57E(&(Local_257.f_25[0x00000001]));
	}
}

int func_129(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
		{
			if (!unk_0x405E212DDE472467((*uParam0)[iVar0], 0x00000000))
			{
				return 0x00000001;
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_130(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000001;
	iLocal_288 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0x437347B10A200C4B((*uParam0)[iVar0], 0x00000000))
		{
			if (unk_0xE4EDC4B0E92C078B((*uParam1)[iVar0]))
			{
				unk_0x142CC44DB769B57E(uParam1[iVar0]);
			}
			if (func_131(&Local_230, (*uParam0)[iVar0], 0x00000001))
			{
				iLocal_288++;
			}
			iLocal_287++;
		}
		else
		{
			iLocal_288 = 0x00000000;
			iVar1 = 0x00000000;
		}
		if (unk_0x437347B10A200C4B((*uParam2)[iVar0], 0x00000000))
		{
			if (unk_0xE4EDC4B0E92C078B((*uParam3)[iVar0]))
			{
				unk_0x142CC44DB769B57E(uParam3[iVar0]);
				iLocal_306 = 0x00000001;
			}
			if (func_131(&Local_230, (*uParam2)[iVar0], 0x00000001))
			{
				iLocal_288++;
			}
		}
		else
		{
			iLocal_288 = 0x00000000;
			iVar1 = 0x00000000;
		}
		iVar0++;
	}
	return iVar1;
}

int func_131(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xB87D13D0C064E9D1(iParam1, uParam0->f_4, 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	if (bParam2)
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0xC844350D5D58C99A(iParam1))
			{
				if (unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 0x00000001))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_132()
{
	if (!unk_0xE4EDC4B0E92C078B(Local_257.f_25[0x00000000]) && !unk_0xE4EDC4B0E92C078B(Local_257.f_25[0x00000001]))
	{
		Local_257.f_25[0x00000000] = func_133(Local_257.f_1B[0x00000000], 0x00000000, 0x00000000);
		Local_257.f_25[0x00000001] = func_133(Local_257.f_1B[0x00000001], 0x00000000, 0x00000000);
	}
}

int func_133(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_134(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_134(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_134(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_134(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_135()
{
	if (unk_0xDF1306B443CD3D15(Local_257.f_1B[0x00000000], 0x00000000))
	{
		unk_0x0CB57CDDC76DA8E0(Local_257.f_1B[0x00000000], iLocal_285, func_136(0x00000000), 0x00000006, 0x000003E8, 0x000C00AB);
		unk_0xA9FBE21EB8701B34(Local_257.f_1B[0x00000000], 1f);
	}
	if (unk_0xDF1306B443CD3D15(Local_257.f_1B[0x00000001], 0x00000000))
	{
		unk_0x0CB57CDDC76DA8E0(Local_257.f_1B[0x00000001], iLocal_285, func_136(0x00000001), 0x00000006, 0x000003E8, 0x000C00AB);
		unk_0xA9FBE21EB8701B34(Local_257.f_1B[0x00000001], 1f);
	}
}

char* func_136(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "txm12_s01_a";
			break;
		
		case 0x00000001:
			sVar0 = "txm12_s01_b";
			break;
	}
	return sVar0;
}

void func_137()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(Local_230.f_3))
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_230.f_3))
		{
			if (!unk_0xE4EDC4B0E92C078B(Local_230.f_8))
			{
				Local_230.f_8 = func_133(Local_230.f_3, 0x00000001, 0x00000000);
			}
			unk_0xCAE036C45E7FC720(Local_230.f_3, &iVar0, 0x00000001);
			if (iVar0 == joaat("weapon_unarmed"))
			{
				unk_0x262EF6C6306BEA6C(Local_230.f_3, joaat("weapon_combatpistol"), 0x00000064, 0x00000000, 0x00000001);
			}
			unk_0xAFF39FB306F8E232(Local_230.f_3, 0x00000003, 0x00000001);
			unk_0xAFF39FB306F8E232(Local_230.f_3, 0x0000000D, 0x00000000);
			unk_0xAFF39FB306F8E232(Local_230.f_3, 0x0000000C, 0x00000001);
			unk_0xAFF39FB306F8E232(Local_230.f_3, 0x00000000, 0x00000001);
			unk_0xAFF39FB306F8E232(Local_230.f_3, 0x00000018, 0x00000001);
			unk_0xAFF39FB306F8E232(Local_230.f_3, 0x00000022, 0x00000001);
			unk_0xAFF39FB306F8E232(Local_230.f_3, 0x00000025, 0x00000001);
			unk_0x9FA191B317572861(Local_230.f_3, 300f);
			unk_0x967762C930C0C5FD(Local_230.f_3, 300f);
			unk_0xA656189732A3FF4B(Local_230.f_3, 300f);
			unk_0x3CC33E4E9CE523F4(Local_230.f_3, 0x00000001);
			unk_0xC978532B427F303B(Local_230.f_3, 0x00000001);
			unk_0x298903DD96203C2C(Local_230.f_3, 0x00000050);
			unk_0xB35CCEC0D4946813(Local_230.f_3, 0x00000002);
			unk_0x17EAEF3CBDBACF1B(Local_230.f_3, 203.7838f, -3326.701f, 4.7901f, 204.288f, -3334.846f, 6.883f, 5.5f, 0x00000000, 0x00000000);
			unk_0x0E2400AB9174FA81(0x00000005, iLocal_262, Local_230.f_19D);
			unk_0x0E2400AB9174FA81(0x00000005, Local_230.f_19D, iLocal_262);
			unk_0xF82EA857DA10E0CD(&iLocal_270);
			unk_0xDD353D0E9C789D0E(&iLocal_270);
			unk_0x5A3F3435781E4122(0x00000000, 201.9434f, -3324.029f, 4.7888f, 0x00001388, 0x00000001);
			unk_0x7C8478BF70C1E072(0x00000000, 200f, 0x00000000);
			unk_0x75ABDC5F81978924(iLocal_270);
			unk_0x78ADC381772E3D54(Local_230.f_3, iLocal_270);
			unk_0xFADC0A217229F6B5(Local_230.f_3, 0x00000001);
		}
	}
}

void func_138()
{
	int iVar0;
	
	Local_257.f_1B[0x00000000] = unk_0x122AAB0B1D6F55AD(Local_257.f_20[0x00000000], func_140(0x00000001), func_139(0x00000001), 0x00000001, 0x00000001, 0x00000000);
	Local_257.f_1B[0x00000001] = unk_0x122AAB0B1D6F55AD(Local_257.f_20[0x00000001], func_140(0x00000002), func_139(0x00000002), 0x00000001, 0x00000001, 0x00000000);
	Local_257.f_3[0x00000000] = unk_0x852A19533F896693(Local_257.f_1B[0x00000000], 0x0000001A, Local_257.f_13[0x00000000], 0xFFFFFFFF, 0x00000001, 0x00000001);
	Local_257.f_3[0x00000001] = unk_0x852A19533F896693(Local_257.f_1B[0x00000000], 0x0000001A, Local_257.f_13[0x00000000], 0x00000000, 0x00000001, 0x00000001);
	Local_257.f_3[0x00000002] = unk_0x852A19533F896693(Local_257.f_1B[0x00000001], 0x0000001A, Local_257.f_13[0x00000000], 0xFFFFFFFF, 0x00000001, 0x00000001);
	Local_257.f_3[0x00000003] = unk_0x852A19533F896693(Local_257.f_1B[0x00000001], 0x0000001A, Local_257.f_13[0x00000000], 0x00000000, 0x00000001, 0x00000001);
	unk_0x55A3C4ED4728EA42(Local_257.f_1B[0x00000001], "LuisLopz");
	func_8(&(Local_230.f_F4), 0x00000006, Local_257.f_3[0x00000000], "TaxiBruce", 0x00000000, 0x00000001);
	unk_0x4F39CC3882DD074E(Local_257.f_3[0x00000000], "TaxiBruce");
	unk_0x262EF6C6306BEA6C(Local_257.f_3[0x00000000], joaat("weapon_smg"), 0x00000064, 0x00000000, 0x00000001);
	unk_0x262EF6C6306BEA6C(Local_257.f_3[0x00000001], joaat("weapon_pistol"), 0x00000064, 0x00000000, 0x00000001);
	unk_0x262EF6C6306BEA6C(Local_257.f_3[0x00000002], joaat("weapon_smg"), 0x00000064, 0x00000000, 0x00000001);
	unk_0x262EF6C6306BEA6C(Local_257.f_3[0x00000003], joaat("weapon_pistol"), 0x00000064, 0x00000001, 0x00000001);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000003)
	{
		unk_0x6D80F1AEBA734886(Local_257.f_3[iVar0], unk_0x09AC81E49EA267F7(0x00000032, 0x00000064));
		unk_0xAFF39FB306F8E232(Local_257.f_3[iVar0], 0x00000002, 0x00000001);
		unk_0xAFF39FB306F8E232(Local_257.f_3[iVar0], 0x0000000D, 0x00000001);
		unk_0xAFF39FB306F8E232(Local_257.f_3[iVar0], 0x00000001, 0x00000000);
		unk_0xAFF39FB306F8E232(Local_257.f_3[iVar0], 0x00000003, 0x00000001);
		unk_0xAFF39FB306F8E232(Local_257.f_3[iVar0], 0x00000025, 0x00000001);
		unk_0x4E885A246A9D983A(Local_257.f_3[iVar0], 0x0000002A, 0x00000001);
		unk_0x9FA191B317572861(Local_257.f_3[iVar0], 300f);
		unk_0x967762C930C0C5FD(Local_257.f_3[iVar0], 300f);
		unk_0xA656189732A3FF4B(Local_257.f_3[iVar0], 300f);
		unk_0x11AD11297DC58CC7(Local_257.f_3[iVar0], 0x00000001);
		unk_0x6DF7BF67E86AAE86(Local_257.f_3[iVar0], iLocal_262);
		unk_0x298903DD96203C2C(Local_257.f_3[iVar0], 0x00000032);
		iVar0++;
	}
}

float func_139(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 159.2139f;
			break;
		
		case 0x00000002:
			return 156.7733f;
			break;
	}
	return 0f;
}

Vector3 func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 290.2584f, -3236.66f, 4.8352f;
			break;
		
		case 0x00000002:
			return 299.2215f, -3235.248f, 4.7762f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_141(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_142(sParam2, iParam4, 0x00000000);
}

int func_142(char* sParam0, int iParam1, bool bParam2)
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
					func_154();
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
		if (func_153(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_152();
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
				func_151();
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
				if (func_150())
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
			func_149();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_148();
		func_143();
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
		func_154();
	}
	return 0x00000000;
}

void func_143()
{
	if (!func_144())
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

int func_144()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_147())
	{
		return 0x00000000;
	}
	if (func_145(unk_0xD803B885F5E47A62()))
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

bool func_145(int iParam0)
{
	return func_146(iParam0, 0x00000014);
}

bool func_146(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_147()
{
	return 0xFFFFFFFF;
}

void func_148()
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

void func_149()
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

int func_150()
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

void func_151()
{
	if (func_76(0x0000000E))
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
		Global_4C1E = func_99();
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

void func_152()
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

bool func_153(int iParam0, int iParam1)
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

void func_154()
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

void func_155(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_156()
{
	if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 0x00000004)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_157(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam1)
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
		{
			if (!unk_0xE4EDC4B0E92C078B((*uParam1)[iVar0]))
			{
				(*uParam1)[iVar0] = func_133((*uParam0)[iVar0], 0x00000000, 0x00000000);
			}
		}
		iVar0++;
	}
}

void func_158(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0x00000001);
}

void func_159()
{
	Global_4CD7 = 0x00000000;
	func_154();
}

struct<6> func_160()
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

bool func_161(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_162(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_163(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0->f_4, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(iParam0->f_4, 0xFFFFFFFF, 0x00000000) == unk_0x16F2683693E537C9())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_164()
{
	if (unk_0xC844350D5D58C99A(Local_230.f_3))
	{
		if (!unk_0xEB6A8945D1AC98A1(Local_230.f_3))
		{
			unk_0x6DF7BF67E86AAE86(Local_230.f_3, Local_230.f_19D);
			unk_0x0C8C0C840C2D1AD2(Local_230.f_3, Local_247.f_3[0x00000001], 0xFFFFFFFF, 0x00000800, 0x00000004);
			unk_0xF82EA857DA10E0CD(&iLocal_270);
			unk_0xDD353D0E9C789D0E(&iLocal_270);
			unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00040000);
			unk_0x96167B03C5A77156(0x00000000, vLocal_317, 1f, 0x00007530, 0.25f, 0x00000000, 0x471C4000);
			unk_0xE655C47E46F9A7E4(0x00000000, -30.3f, 0x00000000);
			unk_0xBC43ED9FE28DB191(0x00000000);
			unk_0x75ABDC5F81978924(iLocal_270);
			unk_0x78ADC381772E3D54(Local_230.f_3, iLocal_270);
		}
	}
}

float func_165(int iParam0, bool bParam1)
{
	return func_172(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

void func_166(int iParam0, bool bParam1)
{
	if (iParam0 < Local_165 && iParam0 >= 0x00000000)
	{
		if (bParam1)
		{
			func_167(&(Local_165.f_1[iParam0 /*4*/]), 0x00000002);
		}
		else
		{
			func_125(&(Local_165.f_1[iParam0 /*4*/]), 0x00000002);
		}
	}
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_168(var uParam0, bool bParam1, float fParam2)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
		{
			if (func_44(0x00000001))
			{
				func_42(0x00000000);
			}
			if (func_33())
			{
				func_171();
				return 0x00000001;
			}
			else if (func_169(uParam0->f_4, fParam2, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
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

int func_169(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_170(iParam0);
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

void func_170(int iParam0)
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

void func_171()
{
	if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0x00000000))
	{
		unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0x00000000);
	}
}

float func_172(int iParam0, int iParam1, bool bParam2)
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

void func_173(var uParam0, int iParam1)
{
	func_167(uParam0, iParam1);
}

int func_174(int iParam0, float fParam1, float fParam2, float fParam3)
{
	if ((((unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749()) && !unk_0xD0BB2359EC70FC37()) && !unk_0x757EF87A33649210()) && !iParam0->f_8E)
	{
		if (func_191(iParam0))
		{
			func_190(iParam0, &(iParam0->f_2B));
			func_185(iParam0);
			func_184(iParam0);
			func_181(iParam0);
			func_180(iParam0, fParam2, fParam3);
			func_177(iParam0);
			return func_175(iParam0, fParam1);
		}
	}
	return 0x00000000;
}

int func_175(int iParam0, float fParam1)
{
	if (func_62(iParam0) == 0x00000002)
	{
		if (unk_0x5A91F08DF773C39D(iParam0->f_4, iParam0->f_11, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_8C, 0x00000001, 0x00000000))
		{
		}
		if (((func_10(iParam0->f_4, iParam0->f_11, 0x00000001) <= (fParam1 + 1f) && unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001) && func_176(0x00000001, 0x00000001, 0x00000001)) && unk_0xF79A7BCA9E38BBBC(iParam0->f_4))
		{
			return func_168(iParam0, 0x00000001, fParam1);
		}
	}
	else if (((unk_0x5A91F08DF773C39D(iParam0->f_4, iParam0->f_11, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_8C, 0x00000001, 0x00000000) && unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001) && func_176(0x00000001, 0x00000001, 0x00000001)) && unk_0xF79A7BCA9E38BBBC(iParam0->f_4))
	{
		return func_168(iParam0, 0x00000001, fParam1);
	}
	return 0x00000000;
}

int func_176(bool bParam0, bool bParam1, bool bParam2)
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

void func_177(int iParam0)
{
	float fVar0;
	
	if ((func_179(iParam0) && func_22(iParam0->f_51, 0x04000000)) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
	{
		if ((unk_0x1C0640BA9A7327B3() - iLocal_89) >= 0x00002710)
		{
			fVar0 = func_178(iParam0->f_11, 0x00000001);
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
		if (iLocal_88 >= 0x00000002 && !func_115())
		{
			func_230(iParam0, 0x00000088, 0x00000001, 0x00000000, 0x00000001);
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
			if (!func_179(iParam0))
			{
			}
			if (!func_22(iParam0->f_51, 0x04000000))
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

float func_178(vector3 vParam0, bool bParam1)
{
	return func_209(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), vParam0, bParam1);
}

int func_179(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0->f_4, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
		{
			if (unk_0xC42A92762C58E1B9(iParam0->f_3, iParam0->f_4, 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_180(int iParam0, float fParam1, float fParam2)
{
	if (func_179(iParam0) && func_22(iParam0->f_2C, 0x00000004))
	{
		if ((unk_0x8B38C0DAEEDB5F9C(iParam0->f_4) || unk_0x9C66D99E63E8E24C(iParam0->f_4) < 3f) && func_163(iParam0))
		{
			if (!func_305(iParam0, 0x00000002))
			{
				func_304(iParam0, 0x00000002);
			}
			else if (func_179(iParam0))
			{
				if (func_113(iParam0, 0x00000002) > fParam1 && !func_305(iParam0, 0x0000000E))
				{
					if (func_35())
					{
						func_230(iParam0, 0x00000030, 0x00000001, 0x00000000, 0x00000000);
					}
					else
					{
						func_230(iParam0, 0x00000030, 0x00000001, 0x00000000, 0x00000000);
					}
					func_298(iParam0, 0x00000002, 0x00000000, 0x00000000);
					if (func_305(iParam0, 0x0000000A))
					{
						func_298(iParam0, 0x0000000A, 0x00000000, 0x00000000);
					}
				}
				if (!func_305(iParam0, 0x00000003))
				{
					func_298(iParam0, 0x00000003, 0x00000000, 0x00000000);
				}
				else if (func_113(iParam0, 0x00000003) >= fParam2)
				{
					func_112(iParam0, 0x00000003, 0x00000000);
					func_330(iParam0, "Car not moving", 0x00000014);
				}
			}
		}
		else
		{
			if (func_305(iParam0, 0x00000002))
			{
				func_112(iParam0, 0x00000002, 0x00000000);
			}
			if (func_305(iParam0, 0x00000003))
			{
				func_112(iParam0, 0x00000003, 0x00000000);
			}
		}
	}
}

void func_181(int iParam0)
{
	if (func_183(iParam0))
	{
		func_182(iParam0);
	}
}

void func_182(int iParam0)
{
	if (unk_0xEFFB47DC2D8F23F9() && iParam0->f_1A2.f_4 != 0x00000000)
	{
		iParam0->f_1A2.f_4 = 0x00000000;
	}
	switch (iParam0->f_1A2.f_4)
	{
		case 0x00000000:
			iParam0->f_1A2 = unk_0xFC21F7E0F4D92523();
			func_112(iParam0, 0x00000014, 0x00000000);
			iParam0->f_1A2.f_4++;
			break;
		
		case 0x00000001:
			if (iParam0->f_1A2.f_8 && !iParam0->f_1A2 == iParam0->f_1A2.f_2)
			{
				if (func_113(iParam0, 0x00000014) > 3f)
				{
					func_230(iParam0, 0x00000057, 0x00000001, 0x00000000, 0x00000000);
					iParam0->f_1A2.f_8 = 0x00000000;
					iParam0->f_1A2.f_4++;
				}
			}
			else if (iParam0->f_1A2 == iParam0->f_1A2.f_1)
			{
				if (!func_22(iParam0->f_51, 0x00040000) || !func_22(iParam0->f_51, 0x00100000))
				{
					if (func_113(iParam0, 0x00000014) > 5f)
					{
						iParam0->f_1A2.f_5 = 0x00000001;
						func_230(iParam0, 0x00000054, 0x00000001, 0x00000000, 0x00000000);
						iParam0->f_1A2.f_4++;
					}
				}
			}
			else if (iParam0->f_1A2 == iParam0->f_1A2.f_2)
			{
				if (!func_22(iParam0->f_52, 0x04000000))
				{
					if (func_113(iParam0, 0x00000014) > 5f)
					{
						iParam0->f_1A2.f_6 = 0x00000001;
						iParam0->f_1A2.f_8 = 0x00000000;
						func_230(iParam0, 0x00000055, 0x00000001, 0x00000000, 0x00000000);
						func_112(iParam0, 0x00000016, 0x00000000);
						iParam0->f_1A2.f_4++;
					}
				}
			}
			else if (iParam0->f_1A2.f_7)
			{
				if (func_113(iParam0, 0x00000014) > 8f)
				{
					func_230(iParam0, 0x00000056, 0x00000001, 0x00000000, 0x00000000);
					iParam0->f_1A2.f_4++;
				}
			}
			break;
		
		case 0x00000002:
			if (func_22(iParam0->f_51, 0x00040000) || func_22(iParam0->f_52, 0x04000000))
			{
				if (!func_305(iParam0, 0x00000016))
				{
					func_304(iParam0, 0x00000016);
				}
			}
			if (func_305(iParam0, 0x00000016) && func_113(iParam0, 0x00000016) > 15f)
			{
				if (iParam0->f_1A2 == iParam0->f_1A2.f_1)
				{
					if (!func_22(iParam0->f_51, 0x00100000))
					{
						func_230(iParam0, 0x00000054, 0x00000001, 0x00000000, 0x00000000);
						func_112(iParam0, 0x00000016, 0x00000000);
					}
				}
				else if (iParam0->f_1A2 == iParam0->f_1A2.f_2)
				{
					if (!func_22(iParam0->f_52, 0x08000000))
					{
						func_230(iParam0, 0x00000055, 0x00000001, 0x00000000, 0x00000000);
						func_112(iParam0, 0x00000016, 0x00000000);
					}
				}
			}
			break;
	}
}

bool func_183(var uParam0)
{
	return uParam0->f_78;
}

void func_184(int iParam0)
{
	if (unk_0x1BF376CEB706080F(unk_0xA30EC016B12C03E4()) && !func_22(iParam0->f_2C, 0x00000002))
	{
		func_173(&(iParam0->f_2C), 0x00000002);
	}
	else if (!unk_0x1BF376CEB706080F(unk_0xA30EC016B12C03E4()) && func_22(iParam0->f_2C, 0x00000002))
	{
		func_124(&(iParam0->f_2C), 0x00000002);
		iParam0->f_2F++;
		func_51(0x00000009, 0x00000000);
	}
	if (iParam0->f_2F > 0x0000001E)
	{
		func_230(iParam0, 0x0000002F, 0x00000001, 0x00000000, 0x00000000);
		iParam0->f_2F = 0x00000000;
		iParam0->f_4C = (iParam0->f_4C + SYSTEM::CEIL(5f));
	}
}

void func_185(int iParam0)
{
	if (!func_22(iParam0->f_2C, 0x00000001))
	{
		switch (iParam0->f_19C)
		{
			case 0x00000000:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 0x00000001)
				{
					if (func_113(iParam0, 0x00000009) > 1f)
					{
						func_189(iParam0, unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()));
						if (iParam0->f_19A != 0x00000016)
						{
							func_230(iParam0, 0x00000032, 0x00000001, 0x00000001, 0x00000000);
						}
						func_298(iParam0, 0x00000009, 0x00000000, 0x00000000);
						if (unk_0xE4EDC4B0E92C078B(iParam0->f_9))
						{
							unk_0x7F010F50CE03A8AF(iParam0->f_9, 0x00000000);
							unk_0x661342B9651D16E2(iParam0->f_9, 0x00000000);
						}
						iParam0->f_8C = 0x00000001;
						iParam0->f_19C = 0x00000001;
					}
				}
				break;
			
			case 0x00000001:
				if (!func_115() && func_113(iParam0, 0x00000009) > 4f)
				{
					func_230(iParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
					iParam0->f_19C = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (func_188("TAXI_OBJ_POL", 0x00000000, 0x00000000))
				{
					if (iParam0->f_19A != 0x00000016)
					{
						func_230(iParam0, 0x00000033, 0x00000000, 0x00000000, 0x00000000);
					}
					iParam0->f_19C = 0x00000003;
				}
				else if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001)
				{
					iParam0->f_19C = 0x00000003;
				}
				break;
			
			case 0x00000003:
				if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), func_187(iParam0)))
				{
					func_189(iParam0, unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()));
					func_51(0x00000006, 0x00000000);
				}
				if (!func_186(iParam0))
				{
					if (!unk_0x25037C66EB32B076())
					{
						if (func_113(iParam0, 0x00000010) > 10f)
						{
							if (iParam0->f_19A != 0x00000016)
							{
								func_230(iParam0, 0x00000033, 0x00000001, 0x00000000, 0x00000000);
							}
						}
					}
				}
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < 0x00000001)
				{
					if (func_188("TAXI_OBJ_POL", 0x00000000, 0x00000000))
					{
						unk_0x790015DC92C918E2();
					}
					if (unk_0xE4EDC4B0E92C078B(iParam0->f_9))
					{
						unk_0x7F010F50CE03A8AF(iParam0->f_9, 0x000000FF);
						unk_0x661342B9651D16E2(iParam0->f_9, 0x00000001);
					}
					iParam0->f_8C = 0x00000000;
					iParam0->f_19C = 0x00000004;
				}
				break;
			
			case 0x00000004:
				if (!func_115())
				{
					if (iParam0->f_19A != 0x00000016)
					{
						func_230(iParam0, 0x00000035, 0x00000001, 0x00000000, 0x00000001);
					}
					func_51(0x00000007, func_187(iParam0));
					func_189(iParam0, 0x00000000);
					iParam0->f_19C = 0x00000005;
				}
				break;
			
			case 0x00000005:
				if (!func_115())
				{
					func_112(iParam0, 0x00000009, 0x00000000);
					func_298(iParam0, 0x0000000B, 0x00000000, 0x00000000);
					iParam0->f_19C = 0x00000000;
				}
				break;
			}
	}
}

bool func_186(int iParam0)
{
	return iParam0->f_6E;
}

int func_187(int iParam0)
{
	return iParam0->f_6A;
}

bool func_188(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 0x00000001)
	{
		unk_0x6B012227B3921E18(sParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

void func_189(int iParam0, int iParam1)
{
	if (iParam0->f_6A != iParam1)
	{
		iParam0->f_6A = iParam1;
	}
}

void func_190(var uParam0, var uParam1)
{
	unk_0x893A626C476B583D(uParam0->f_1AC, uParam1, 0xFFFFFFFF);
	uParam0->f_29 = (*uParam1 - uParam0->f_2A);
}

int func_191(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (!unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0x00000001) && !unk_0x81A5359F25512A04(uParam0->f_3))
			{
				func_330(uParam0, "Passenger left car.", 0x00000009);
			}
			else if (func_201(uParam0))
			{
				if (func_188("TAXI_OBJ_PICKUP", 0x00000000, 0x00000000))
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
				func_192(uParam0, 0x00000001);
			}
		}
	}
	return 0x00000000;
}

void func_192(var uParam0, bool bParam1)
{
	func_200(uParam0, uParam0->f_3);
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xC42A92762C58E1B9(uParam0->f_2, uParam0->f_4, 0x00000000))
		{
			if (!func_305(uParam0, 0x0000000E))
			{
				if (func_115())
				{
					func_199(0x00000001);
				}
				func_198(uParam0, 0x0000000B, 0x00000001);
				func_193(uParam0, 0x00000001);
				func_298(uParam0, 0x0000000E, 0f, 0x00000001);
				if (uParam0->f_19A < 0x0000000F)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_179(uParam0))
				{
					if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
					{
					}
					if (unk_0x405E212DDE472467(uParam0->f_2, 0x00000000))
					{
						if (func_113(uParam0, 0x0000000F) > 5f)
						{
							func_298(uParam0, 0x0000000F, 0f, 0x00000001);
						}
					}
					if (func_113(uParam0, 0x0000000E) > 20f)
					{
						func_330(uParam0, "Player not in taxi. - YELL RETURN", 0x00000008);
					}
				}
				else if (func_113(uParam0, 0x0000000E) > 20f)
				{
					if (func_165(uParam0->f_4, 0x00000001) > 40f)
					{
						func_330(uParam0, "Player not in taxi.", 0x00000015);
					}
					else
					{
						func_330(uParam0, "Player not in taxi. - YELL RETURN 2", 0x00000008);
					}
				}
			}
		}
	}
}

void func_193(var uParam0, bool bParam1)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (bParam1)
		{
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_8, 0x00000000);
				unk_0x661342B9651D16E2(uParam0->f_8, 0x00000000);
				func_197(uParam0, &(uParam0->f_62), 0x00000004, 0x00000003);
			}
			else if (unk_0xE4EDC4B0E92C078B(uParam0->f_9))
			{
				unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x00000000);
				unk_0x661342B9651D16E2(uParam0->f_9, 0x00000000);
				unk_0x790015DC92C918E2();
				if (func_179(uParam0))
				{
					func_230(uParam0, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
				}
				else
				{
					func_197(uParam0, &(uParam0->f_62), 0x00000004, 0x00000003);
				}
			}
			func_194(uParam0, 0x00000000, 0x00000000);
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

void func_194(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_415(uParam0);
	}
	if (!unk_0xE4EDC4B0E92C078B(uParam0->f_A))
	{
		uParam0->f_A = func_133(uParam0->f_4, 0x00000001, 0x00000000);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_A, "TAXI_BLIP_CAR");
		unk_0x661342B9651D16E2(uParam0->f_A, 0x00000001);
		func_195(uParam0);
		if (bParam2)
		{
			unk_0x790015DC92C918E2();
			func_230(uParam0, 0x00000003, 0x00000001, 0x00000000, 0x00000000);
		}
	}
}

void func_195(var uParam0)
{
	func_298(uParam0, 0x0000000E, 0x00000000, 0x00000000);
	func_196();
}

void func_196()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		unk_0xCEAA091B490F8407(0xFFFFFFFF, "Radio_Off", iVar0, "TAXI_SOUNDS", 0x00000000, 0x00000000);
	}
}

void func_197(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_22(*uParam1, iParam2))
	{
		unk_0x790015DC92C918E2();
		func_230(uParam0, iParam3, 0x00000001, 0x00000000, 0x00000000);
		func_173(uParam1, iParam2);
	}
}

void func_198(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_19E = iParam1;
	if (bParam2)
	{
	}
}

void func_199(int iParam0)
{
	Global_5538 = iParam0;
}

void func_200(var uParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam1))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam1))
		{
			if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
			{
				if ((unk_0x0361981EE62202D8(iParam1, joaat("weapon_stungun"), 0x00000000) || unk_0x0361981EE62202D8(iParam1, 0x00000000, 0x00000002)) || unk_0x0361981EE62202D8(iParam1, 0x00000000, 0x00000001))
				{
					func_330(uParam0, "Passenger injured by player with weapon.", 0x0000000E);
				}
				unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
			}
		}
	}
}

int func_201(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0xA30B8362589C124A(uParam0->f_4, 0xFFFFFFFF, 0x00000000) == uParam0->f_2)
		{
			if (func_305(uParam0, 0x0000000E))
			{
				func_202(uParam0);
			}
			func_193(uParam0, 0x00000000);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_202(var uParam0)
{
	func_112(uParam0, 0x0000000E, 0x00000000);
	func_112(uParam0, 0x0000000F, 0x00000000);
	func_204();
	if (func_203())
	{
		func_199(0x00000000);
	}
}

int func_203()
{
	if (Global_5538 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_204()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
	{
		unk_0xCEAA091B490F8407(0xFFFFFFFF, "Radio_On", iVar0, "TAXI_SOUNDS", 0x00000000, 0x00000000);
	}
}

void func_205(var uParam0, int iParam1, bool bParam2)
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

void func_206(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0x00000000;
		(uParam0[iVar0 /*8*/])->f_7 = 0x00000000;
		StringCopy(uParam0[iVar0 /*8*/], func_207(), 24);
		iVar0++;
	}
	unk_0x790015DC92C918E2();
	func_49();
}

var func_207()
{
	var uVar0;
	
	return uVar0;
}

void func_208(var uParam0)
{
	uParam0->f_78 = 0x00000000;
}

float func_209(int iParam0, vector3 vParam1, bool bParam2)
{
	if (unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		return -1f;
	}
	return unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1, bParam2);
}

void func_210()
{
	switch (iLocal_263)
	{
		case 0x00000000:
			if (unk_0xDF1306B443CD3D15(Local_230.f_4, 0x00000000) && func_10(Local_230.f_4, Local_230.f_11, 0x00000001) < 300f)
			{
				func_225();
				iLocal_263 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_223())
			{
				iLocal_263 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (!bLocal_302)
			{
				func_220();
				func_219();
				func_215();
				func_214();
				func_213();
				func_212();
				iLocal_263 = 0x00000003;
				bLocal_302 = 0x00000001;
			}
			break;
		
		case 0x00000003:
			if (unk_0xDF1306B443CD3D15(Local_230.f_4, 0x00000000) && func_10(Local_230.f_4, Local_230.f_11, 0x00000001) > 350f)
			{
				func_211();
				iLocal_263 = 0x00000000;
			}
			break;
	}
}

void func_211()
{
	unk_0x71199B01895C6202(iLocal_266);
	unk_0x71199B01895C6202(iLocal_267);
	unk_0x71199B01895C6202(iLocal_268);
	unk_0x71199B01895C6202(Local_247.f_13[0x00000000]);
	unk_0x71199B01895C6202(Local_247.f_13[0x00000001]);
	unk_0x71199B01895C6202(Local_247.f_20[0x00000000]);
	unk_0x71199B01895C6202(Local_247.f_20[0x00000001]);
	unk_0x71199B01895C6202(Local_247.f_20[0x00000002]);
	unk_0x71199B01895C6202(Local_247.f_20[0x00000003]);
	unk_0x71199B01895C6202(Local_257.f_20[0x00000001]);
	unk_0xDB8844D4B7C60440(iLocal_285, func_136(0x00000000));
	unk_0xDB8844D4B7C60440(iLocal_285, func_136(0x00000001));
	unk_0x8D17794CE3273D70("random@countryside_gang_fight");
	unk_0x8D17794CE3273D70(sLocal_319);
}

void func_212()
{
	iLocal_271[0x00000000] = unk_0x7707E48765093646(iLocal_266, 204.8445f, -3333.998f, 4.795367f, 0x00000001, 0x00000001, 0x00000000);
	unk_0xA47B46945FF6DE74(iLocal_271[0x00000000], 204.8445f, -3333.998f, 4.795367f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	unk_0xC023D1C4BF532815(iLocal_271[0x00000000], -0.036243f, -0.00124f, 91.56063f, 0x00000002, 0x00000001);
	iLocal_271[0x00000001] = unk_0x7707E48765093646(iLocal_266, 212.67f, -3328.77f, 4.79f, 0x00000001, 0x00000001, 0x00000000);
	unk_0xA47B46945FF6DE74(iLocal_271[0x00000001], 212.67f, -3328.77f, 4.79f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	unk_0xC023D1C4BF532815(iLocal_271[0x00000001], -0.04f, -0.01f, 86.36f, 0x00000002, 0x00000001);
	iLocal_271[0x00000002] = unk_0x7707E48765093646(iLocal_266, 204.8248f, -3328.631f, 4.7915f, 0x00000001, 0x00000001, 0x00000000);
	unk_0xA47B46945FF6DE74(iLocal_271[0x00000002], 204.8248f, -3328.631f, 4.7915f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	unk_0xC023D1C4BF532815(iLocal_271[0x00000002], -0.0027f, -0.0374f, 0.1414f, 0x00000002, 0x00000001);
	iLocal_273 = unk_0x7707E48765093646(iLocal_267, 214.2505f, -3314.673f, 4.7883f, 0x00000001, 0x00000001, 0x00000000);
	unk_0xA47B46945FF6DE74(iLocal_273, 214.2505f, -3314.673f, 4.7883f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
	unk_0xC023D1C4BF532815(iLocal_273, 0f, 0f, -17.399f, 0x00000002, 0x00000001);
	if (unk_0xB87F6CF6E5628C67(iLocal_268))
	{
		iLocal_272 = unk_0x7707E48765093646(iLocal_268, 220.7266f, -3320.001f, 5.2749f, 0x00000001, 0x00000001, 0x00000000);
		unk_0xA47B46945FF6DE74(iLocal_272, 220.7266f, -3320.001f, 5.2749f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
		unk_0xC023D1C4BF532815(iLocal_272, 0f, 0f, 0f, 0x00000002, 0x00000001);
	}
}

void func_213()
{
	if ((!unk_0xEB6A8945D1AC98A1(iLocal_274[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_274[0x00000000])) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000003]))
	{
		iLocal_291 = unk_0xE9744DB7B8CA6965(vLocal_313, vLocal_314, 0x00000002);
		unk_0xC90224D9E95E5E3A(iLocal_291, 0x00000001);
		unk_0x915804B434753CBD(Local_247.f_3[0x00000003], iLocal_291, sLocal_319, "hooker_loop_a_biker_d", 1000f, -1000f, 0x00000040, 0x00000000, 0x447A0000, 0x00000000);
		unk_0x915804B434753CBD(iLocal_274[0x00000000], iLocal_291, sLocal_319, "hooker_loop_a_hooker_a", 1000f, -1000f, 0x00000040, 0x00000000, 0x447A0000, 0x00000000);
		unk_0x915804B434753CBD(iLocal_274[0x00000001], iLocal_291, sLocal_319, "hooker_loop_a_hooker_b", 1000f, -1000f, 0x00000040, 0x00000000, 0x447A0000, 0x00000000);
	}
	if ((!unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000000]) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000001])) && !unk_0xEB6A8945D1AC98A1(Local_247.f_3[0x00000002]))
	{
		unk_0x262EF6C6306BEA6C(Local_247.f_3[0x00000000], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
		iLocal_295 = unk_0xE9744DB7B8CA6965(vLocal_315, vLocal_316, 0x00000002);
		unk_0xC90224D9E95E5E3A(iLocal_295, 0x00000001);
		unk_0x915804B434753CBD(Local_247.f_3[0x00000000], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
		unk_0x915804B434753CBD(Local_247.f_3[0x00000001], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
		unk_0x915804B434753CBD(Local_247.f_3[0x00000002], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0x00000000, 0x00000000, 0x447A0000, 0x00000000);
	}
}

void func_214()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	func_8(&(Local_230.f_F4), 0x00000004, Local_247.f_3[0x00000001], "TaxiDom", 0x00000000, 0x00000001);
	func_8(&(Local_230.f_F4), 0x00000005, Local_247.f_3[0x00000003], "TaxiGangM", 0x00000000, 0x00000001);
	unk_0x4F39CC3882DD074E(Local_247.f_3[0x00000001], "TaxiDom");
	unk_0x4F39CC3882DD074E(Local_247.f_3[0x00000003], "TaxiGangM");
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000003)
	{
		unk_0x6D80F1AEBA734886(Local_247.f_3[iVar0], unk_0x09AC81E49EA267F7(0x00000014, 0x00000032));
		unk_0xAFF39FB306F8E232(Local_247.f_3[iVar0], 0x00000002, 0x00000001);
		unk_0xAFF39FB306F8E232(Local_247.f_3[iVar0], 0x0000000D, 0x00000001);
		unk_0xAFF39FB306F8E232(Local_247.f_3[iVar0], 0x00000001, 0x00000000);
		unk_0xAFF39FB306F8E232(Local_247.f_3[iVar0], 0x00000003, 0x00000001);
		unk_0xAFF39FB306F8E232(Local_247.f_3[iVar0], 0x00000025, 0x00000001);
		unk_0x4E885A246A9D983A(Local_247.f_3[iVar0], 0x0000002A, 0x00000001);
		unk_0x9FA191B317572861(Local_247.f_3[iVar0], 300f);
		unk_0x967762C930C0C5FD(Local_247.f_3[iVar0], 300f);
		unk_0xA656189732A3FF4B(Local_247.f_3[iVar0], 300f);
		unk_0x11AD11297DC58CC7(Local_247.f_3[iVar0], 0x00000000);
		unk_0x298903DD96203C2C(Local_247.f_3[iVar0], 0x00000001);
		iVar0++;
	}
	unk_0x6DF7BF67E86AAE86(Local_247.f_3[0x00000000], iLocal_262);
	unk_0x6DF7BF67E86AAE86(Local_247.f_3[0x00000001], iLocal_262);
	unk_0x6DF7BF67E86AAE86(Local_247.f_3[0x00000002], iLocal_262);
	unk_0x6DF7BF67E86AAE86(Local_247.f_3[0x00000003], iLocal_262);
	iVar0 = 0x00000000;
	while (iVar0 <= 0x00000001)
	{
		unk_0x4E885A246A9D983A(iLocal_274[iVar0], 0x0000002A, 0x00000001);
		unk_0x9FA191B317572861(iLocal_274[iVar0], 100f);
		unk_0x967762C930C0C5FD(iLocal_274[iVar0], 100f);
		unk_0xA656189732A3FF4B(iLocal_274[iVar0], 100f);
		unk_0x11AD11297DC58CC7(iLocal_274[iVar0], 0x00000001);
		iVar0++;
	}
	func_8(&(Local_230.f_F4), 0x00000007, iLocal_274[0x00000001], "TaxiGangGirl2", 0x00000000, 0x00000001);
	func_8(&(Local_230.f_F4), 0x00000008, iLocal_274[0x00000000], "TaxiGangGirl1", 0x00000000, 0x00000001);
	unk_0x4F39CC3882DD074E(iLocal_274[0x00000001], "TaxiGangGirl2");
	unk_0x4F39CC3882DD074E(iLocal_274[0x00000000], "TaxiGangGirl1");
}

void func_215()
{
	Local_247.f_3[0x00000000] = unk_0x36F2404464202779(0x0000001A, Local_247.f_13[0x00000000], func_218(0x00000001), func_217(0x00000001), 0x00000001, 0x00000001);
	Local_247.f_3[0x00000001] = unk_0x36F2404464202779(0x0000001A, Local_247.f_13[0x00000000], func_216(0x00000002), 0f, 0x00000001, 0x00000001);
	Local_247.f_3[0x00000002] = unk_0x36F2404464202779(0x0000001A, Local_247.f_13[0x00000000], func_218(0x00000003), func_217(0x00000003), 0x00000001, 0x00000001);
	Local_247.f_3[0x00000003] = unk_0x36F2404464202779(0x0000001A, Local_247.f_13[0x00000000], func_218(0x00000004), func_217(0x00000004), 0x00000001, 0x00000001);
	unk_0x4E885A246A9D983A(Local_247.f_3[0x00000001], 0x00000014, 0x00000001);
	iLocal_274[0x00000000] = unk_0x36F2404464202779(0x0000001A, Local_247.f_13[0x00000001], func_218(0x00000005), func_217(0x00000005), 0x00000001, 0x00000001);
	iLocal_274[0x00000001] = unk_0x36F2404464202779(0x0000001A, Local_247.f_13[0x00000001], func_218(0x00000006), func_217(0x00000006), 0x00000001, 0x00000001);
	unk_0x25C5402CC10F76CD(iLocal_274[0x00000000], 0x00000000);
	unk_0x25C5402CC10F76CD(iLocal_274[0x00000001], 0x00000000);
	if (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000000], 0x00000000))
	{
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000000], 0x00000000, 0x00000001, 0x00000001, 0x00000000);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000000], 0x00000003, 0x00000000, 0x00000005, 0x00000000);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000000], 0x00000004, 0x00000000, 0x00000002, 0x00000000);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000000], 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
	}
	if (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000001], 0x00000000))
	{
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000001], 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000001], 0x00000003, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000001], 0x00000004, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000001], 0x0000000A, 0x00000000, 0x00000001, 0x00000000);
	}
	if (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000002], 0x00000000))
	{
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000002], 0x00000000, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000002], 0x00000003, 0x00000001, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000002], 0x00000004, 0x00000001, 0x00000002, 0x00000000);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000002], 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
	}
	if (!unk_0x437347B10A200C4B(Local_247.f_3[0x00000003], 0x00000000))
	{
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000003], 0x00000000, 0x00000000, 0x00000002, 0x00000000);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000003], 0x00000003, 0x00000001, 0x00000001, 0x00000000);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000003], 0x00000004, 0x00000000, 0x00000002, 0x00000000);
		unk_0x64F9F278AB9DCA2C(Local_247.f_3[0x00000003], 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
	}
}

Vector3 func_216(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 202.24f, -3322.48f, 5.79f;
			break;
		
		case 0x00000002:
			return 203.4f, -3323.22f, 5.79f;
			break;
		
		case 0x00000003:
			return 205.66f, -3322.41f, 5.8f;
			break;
	}
	return 0f, 0f, 0f;
}

float func_217(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 251.3766f;
			break;
		
		case 0x00000002:
			return -129.32f;
			break;
		
		case 0x00000003:
			return 39.53f;
			break;
		
		case 0x00000004:
			return -139.98f;
			break;
		
		case 0x00000005:
			return 147.25f;
			break;
		
		case 0x00000006:
			return 68.18f;
			break;
	}
	return 0f;
}

Vector3 func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 202.35f, -3321.76f, 4.79f;
			break;
		
		case 0x00000002:
			return 204.27f, -3321.77f, 5.79f;
			break;
		
		case 0x00000003:
			return 204.93f, -3322.56f, 4.79f;
			break;
		
		case 0x00000004:
			return 218.19f, -3323.58f, 5.8f;
			break;
		
		case 0x00000005:
			return 219.52f, -3324f, 5.8f;
			break;
		
		case 0x00000006:
			return 220.14f, -3325.39f, 5.8f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_219()
{
	unk_0x611DFA9294B339CA(Local_247.f_1B[0x00000002], 0x00000005, 0x00000000, 0x00000000);
	unk_0x611DFA9294B339CA(Local_247.f_1B[0x00000003], 0x00000005, 0x00000000, 0x00000000);
}

void func_220()
{
	Local_247.f_1B[0x00000000] = unk_0x122AAB0B1D6F55AD(Local_247.f_20[0x00000000], func_222(0x00000001), func_221(0x00000001), 0x00000001, 0x00000001, 0x00000000);
	Local_247.f_1B[0x00000001] = unk_0x122AAB0B1D6F55AD(Local_247.f_20[0x00000001], func_222(0x00000002), func_221(0x00000002), 0x00000001, 0x00000001, 0x00000000);
	Local_247.f_1B[0x00000002] = unk_0x122AAB0B1D6F55AD(Local_247.f_20[0x00000003], func_222(0x00000003), func_221(0x00000003), 0x00000001, 0x00000001, 0x00000000);
	Local_247.f_1B[0x00000003] = unk_0x122AAB0B1D6F55AD(Local_247.f_20[0x00000003], func_222(0x00000004), func_221(0x00000004), 0x00000001, 0x00000001, 0x00000000);
	iLocal_276 = unk_0x122AAB0B1D6F55AD(Local_247.f_20[0x00000002], func_222(0x00000005), func_221(0x00000005), 0x00000001, 0x00000001, 0x00000000);
	unk_0x55A3C4ED4728EA42(Local_247.f_1B[0x00000002], "NikoB");
	unk_0x55A3C4ED4728EA42(Local_247.f_1B[0x00000003], "RomanB");
}

float func_221(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 301.96f;
			break;
		
		case 0x00000002:
			return 33.5561f;
			break;
		
		case 0x00000003:
			return 87.9127f;
			break;
		
		case 0x00000004:
			return 195.38f;
			break;
		
		case 0x00000005:
			return 35.3307f;
			break;
	}
	return 0f;
}

Vector3 func_222(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return 208.8206f, -3319.28f, 4.7925f;
			break;
		
		case 0x00000002:
			return 202.0773f, -3320.393f, 4.7657f;
			break;
		
		case 0x00000003:
			return 216.1051f, -3318.837f, 4.7918f;
			break;
		
		case 0x00000004:
			return 221.6868f, -3324.747f, 5.3063f;
			break;
		
		case 0x00000005:
			return 200.1736f, -3320.666f, 4.7361f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_223()
{
	if (!unk_0xB87F6CF6E5628C67(iLocal_266))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading PROP_BOXPILE_02C", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(iLocal_267))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading PROP_CARDBORDBOX_03A", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_247.f_13[0x00000000]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading Baddie driver model", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_247.f_13[0x00000001]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading Gangster girl model", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_247.f_20[0x00000000]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car1 model", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_247.f_20[0x00000001]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car2 model", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_247.f_20[0x00000002]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car3 model", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_247.f_20[0x00000003]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car4 model", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(Local_257.f_20[0x00000001]))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading modelName_Car5 model", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0x3DDA6C6A285628E4(iLocal_285, func_136(0x00000000)))
	{
		func_224("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_A...", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0x3DDA6C6A285628E4(iLocal_285, func_136(0x00000001)))
	{
		func_224("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_B...", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("random@countryside_gang_fight"))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading random@countryside_gang_fight ", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752(sLocal_319))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading sSyncSceneDict ", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB87F6CF6E5628C67(iLocal_268))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading PROP_BARREL_EXP_01A", &iLocal_281, 0x000003E8);
	}
	return 0x00000001;
}

void func_224(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x1C0640BA9A7327B3() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x1C0640BA9A7327B3();
}

void func_225()
{
	unk_0x523BCC9DC80CD82F(iLocal_266);
	unk_0x523BCC9DC80CD82F(iLocal_267);
	unk_0x523BCC9DC80CD82F(iLocal_268);
	unk_0x523BCC9DC80CD82F(Local_247.f_13[0x00000000]);
	unk_0x523BCC9DC80CD82F(Local_247.f_13[0x00000001]);
	unk_0x523BCC9DC80CD82F(Local_247.f_20[0x00000000]);
	unk_0x523BCC9DC80CD82F(Local_247.f_20[0x00000001]);
	unk_0x523BCC9DC80CD82F(Local_247.f_20[0x00000002]);
	unk_0x523BCC9DC80CD82F(Local_247.f_20[0x00000003]);
	unk_0x523BCC9DC80CD82F(Local_257.f_20[0x00000001]);
	unk_0x36187931D29E5BBE(iLocal_285, func_136(0x00000000));
	unk_0x36187931D29E5BBE(iLocal_285, func_136(0x00000001));
	unk_0x3F423BF5B8125A50("random@countryside_gang_fight");
	unk_0x3F423BF5B8125A50(sLocal_319);
}

void func_226()
{
	func_173(&(Local_230.f_37), 0x00000002);
	func_173(&(Local_230.f_37), 0x00000004);
	func_173(&(Local_230.f_37), 0x00000010);
	func_173(&(Local_230.f_37), 0x00000040);
	func_173(&(Local_230.f_37), 0x00000100);
	func_173(&(Local_230.f_37), 0x00000200);
	func_173(&(Local_230.f_37), 0x00000400);
	func_173(&(Local_230.f_37), 0x00000800);
	func_173(&(Local_230.f_37), 0x00001000);
	func_173(&(Local_230.f_37), 0x40000000);
	func_173(&(Local_230.f_64), 0x00000008);
	func_173(&(Local_230.f_64), 0x00000800);
	func_173(&(Local_230.f_64), 0x00000100);
	func_173(&uLocal_380, 0x00000002);
}

void func_227(var uParam0)
{
	func_228(uParam0, 0x000003E8);
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0x00000000))
	{
		unk_0x327AAEE25F323797(uParam0->f_3);
		unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0x00000000);
	}
	func_159();
	func_202(uParam0);
}

void func_228(var uParam0, int iParam1)
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

void func_229(int iParam0)
{
	unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
	func_228(iParam0, 0x000003E8);
}

void func_230(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iParam0->f_1A0 = iParam1;
	if (bParam4)
	{
		func_298(iParam0, 0x00000010, 4f, 0x00000000);
		if (func_231(iParam0))
		{
			func_49();
		}
	}
	func_261(iParam0, iParam2, bParam3);
}

int func_231(var uParam0)
{
	vector3 vVar0;
	struct<6> Var1;
	
	StringCopy(&vVar0, uParam0->f_8F, 24);
	if (func_115())
	{
		Var1 = { func_233() };
		if (!unk_0xEA6BC48857E0AC4C(&Var1))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (unk_0x7F8A39872A07D2CE(&Var1, &vVar0))
			{
				return 0x00000001;
			}
			StringCopy(&vVar0, uParam0->f_8F, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_232(&vVar0);
			if (unk_0x7F8A39872A07D2CE(&Var1, &vVar0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_232(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_233()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_5145 == 0x00000004)
	{
		return Global_4FC8;
	}
	return Var0;
}

int func_234(int iParam0)
{
	if (unk_0xDF1306B443CD3D15(iParam0->f_4, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
		{
			if ((unk_0x81A5359F25512A04(iParam0->f_3) && (unk_0x1C0640BA9A7327B3() - iLocal_81) > 0x000001F4) || unk_0xC42A92762C58E1B9(iParam0->f_3, iParam0->f_4, 0x00000001))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_235(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (unk_0xDF1306B443CD3D15(iParam0->f_4, 0x00000000))
	{
		if (!unk_0xC42A92762C58E1B9(iParam0->f_2, iParam0->f_4, 0x00000000))
		{
			if ((unk_0x1C0640BA9A7327B3() % 0x000003E8) < 0x00000032)
			{
			}
			func_192(iParam0, 0x00000001);
			if (func_33())
			{
				unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000001, 0x00000000);
			}
			if (unk_0xD1960163A3042274(iParam0->f_3, 0x7D8F4411) == 0x00000001 || unk_0xD1960163A3042274(iParam0->f_3, 0x7D8F4411) == 0x00000000)
			{
				unk_0x327AAEE25F323797(iParam0->f_3);
				iParam0->f_30 = 0x00000000;
				iLocal_79 = 0x00000000;
				unk_0xF96A174EE26D7588(iParam0->f_3, unk_0x16F2683693E537C9(), 0x00000000);
			}
		}
		else if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0x00000000))
		{
			func_260(iParam0);
			if (iParam0->f_30 > 0x00000001)
			{
				unk_0xF82EA857DA10E0CD(&iVar3);
				unk_0xDD353D0E9C789D0E(&iVar3);
				unk_0x96167B03C5A77156(0x00000000, iParam0->f_B, iParam0->f_6, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
				unk_0xF96A174EE26D7588(0x00000000, iParam0->f_4, 0x00000000);
				unk_0x75ABDC5F81978924(iVar3);
				unk_0x78ADC381772E3D54(iParam0->f_3, iVar3);
				iParam0->f_30 = 0x00000000;
			}
		}
		else
		{
			if (func_305(iParam0, 0x0000000E))
			{
				func_202(iParam0);
				func_193(iParam0, 0x00000000);
			}
			if (func_305(iParam0, 0x00000009))
			{
				func_112(iParam0, 0x00000009, 0x00000000);
				unk_0x790015DC92C918E2();
				if (unk_0xE4EDC4B0E92C078B(iParam0->f_8))
				{
					unk_0x7F010F50CE03A8AF(iParam0->f_8, 0x000000FF);
					unk_0x661342B9651D16E2(iParam0->f_8, 0x00000001);
				}
			}
			if (!unk_0x437347B10A200C4B(iParam0->f_3, 0x00000000))
			{
				fVar4 = ((unk_0x9C66D99E63E8E24C(iParam0->f_4) / 5f) + 4f);
				if (iParam0->f_8D && func_259(iParam0, iParam0->f_3) > 300f)
				{
					func_330(iParam0, "Left Passenger", 0x00000008);
				}
				switch (iParam0->f_30)
				{
					case 0x00000000:
						if (unk_0xD1960163A3042274(iParam0->f_3, 0x0E763797) != 0x00000001 || ((func_172(unk_0x16F2683693E537C9(), iParam0->f_3, 0x00000001) < 20f && func_10(iParam0->f_3, iParam0->f_B, 0x00000001) <= 28f) && func_10(iParam0->f_4, iParam0->f_B, 0x00000001) <= 28f))
						{
							if (func_256(iParam0, fParam2))
							{
								iParam0->f_30++;
							}
						}
						break;
					
					case 0x00000001:
						if (func_255(iParam0, 0x00000000, 28f, fVar4, 4f))
						{
							iParam0->f_8A = 0x00000001;
							if (bLocal_86)
							{
								iParam0->f_7 = func_254(iParam0->f_4, iParam0->f_3);
								iVar0 = func_253(iParam0, &iVar1);
								if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
								{
									if (iVar1 == iParam0->f_7)
									{
										if (iParam0->f_7 == 0x00000001)
										{
											iVar2 = 0x00040000;
										}
										else if (iParam0->f_7 == 0x00000002)
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
								if (iParam0->f_19B == 0x00000000)
								{
									if (unk_0x3CAA763EEC01ADF7(iParam0->f_3, iParam0->f_4, 0x00000000, 0x00000000, 0x00000000))
									{
										if (iParam0->f_7 == 0x00000002)
										{
											iParam0->f_7 = 0x00000000;
											if (!unk_0x437347B10A200C4B(iVar0, 0x00000000))
											{
												unk_0x75CDA8644CD3B5F5(iVar0, 0x00000000, 0x00001000);
											}
										}
									}
								}
							}
							unk_0xA3BF0AA5A2608191(iParam0->f_3);
							unk_0x5B1D360B9C6F0A09(iParam0->f_3, iParam0->f_4, 0x00004E20, iParam0->f_7, iParam0->f_6, 0x00000001, 0x00000000);
							iParam0->f_30++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x5F3EEC968FEB7235(unk_0x68F4C0EC296D3901(iParam0->f_3, 0x00000001), fVar4, 0x00000000, 0x00000000, 0x000000FF, 0x00000096);
							}
							if (!func_163(iParam0))
							{
								unk_0xA3BF0AA5A2608191(iParam0->f_3);
							}
							else if (((unk_0xD1960163A3042274(iParam0->f_3, 0x0E763797) != 0x00000001 && unk_0xD1960163A3042274(iParam0->f_3, 0x0E763797) != 0x00000000) && unk_0xD1960163A3042274(iParam0->f_3, 0x0E763797) != 0x00000007) && func_259(iParam0, iParam0->f_3) > 8f)
							{
								unk_0xF82EA857DA10E0CD(&(iParam0->f_F3));
								unk_0xDD353D0E9C789D0E(&(iParam0->f_F3));
								unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
								if (iParam0->f_19B != 0x00000009)
								{
									unk_0xC6EB89C59F2AF6B8(0x00000000, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								else
								{
									unk_0xC6EB89C59F2AF6B8(0x00000000, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
								}
								unk_0x75ABDC5F81978924(iParam0->f_F3);
								unk_0x78ADC381772E3D54(iParam0->f_3, iParam0->f_F3);
							}
							if (unk_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 0x00000003))
							{
								unk_0x8352CA08CF578D18(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 0x00000002:
						if (bLocal_86)
						{
							if (func_172(iParam0->f_4, iParam0->f_3, 0x00000001) < 3f)
							{
								if (!func_252(iParam0, 0x00000001))
								{
									unk_0x327AAEE25F323797(iParam0->f_3);
									func_330(iParam0, "You had a dead body in your back seat.", 0x00000005);
								}
								else if (!func_251(iParam0->f_4))
								{
									unk_0x327AAEE25F323797(iParam0->f_3);
									func_330(iParam0, "You had a dead body in your back seat.", 0x00000000);
								}
							}
						}
						func_249(iParam0);
						if (func_259(iParam0, iParam0->f_3) < fVar4 || func_33())
						{
							if (unk_0xC42A92762C58E1B9(iParam0->f_2, iParam0->f_4, 0x00000000))
							{
								if (func_237(iParam0))
								{
									func_236(iParam0);
									iLocal_81 = unk_0x1C0640BA9A7327B3();
									unk_0x4E885A246A9D983A(iParam0->f_3, 0x0000001A, 0x00000001);
									func_112(iParam0, 0x00000005, 0x00000000);
									unk_0x0DC19E268D45C03F();
									unk_0x893A626C476B583D(iParam0->f_1AC, &(iParam0->f_2A), 0xFFFFFFFF);
									unk_0x7D732AB707BE9152(iParam0->f_3, 0x00000000);
									return 0x00000001;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x5F3EEC968FEB7235(unk_0x68F4C0EC296D3901(iParam0->f_3, 0x00000001), fVar4, 0x00000000, 0x00000000, 0x000000FF, 0x00000096);
						}
						break;
					}
				}
			}
	}
	return 0x00000000;
}

void func_236(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0->f_8))
	{
		unk_0x661342B9651D16E2(iParam0->f_8, 0x00000000);
		unk_0x142CC44DB769B57E(&(iParam0->f_8));
	}
}

int func_237(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	
	func_224("UPDATE_PASSENGER_ENTER_CUTSCENE", &(iParam0->f_4E), 0x000003E8);
	iVar6 = 0xFFFFFFFF;
	if (!unk_0x437347B10A200C4B(iParam0->f_3, 0x00000000) && !unk_0x437347B10A200C4B(iParam0->f_4, 0x00000000))
	{
		func_248();
	}
	if (bLocal_86)
	{
		iLocal_78 = 0x0000000A;
	}
	if ((iLocal_78 < 0x00000007 && iLocal_78 > 0x00000000) && !bLocal_86)
	{
		if (func_246(iLocal_80))
		{
			iLocal_78 = 0x00000007;
		}
	}
	switch (iLocal_78)
	{
		case 0x00000000:
			if (func_168(iParam0, 0x00000000, 0x40A00000) && func_176(0x00000001, 0x00000001, 0x00000001))
			{
				if (func_252(iParam0, 0x00000001))
				{
					iLocal_80 = unk_0x1C0640BA9A7327B3();
					SYSTEM::SETTIMERA(0x00000000);
					iLocal_78 = 0x00000001;
				}
				else
				{
					func_330(iParam0, "You had a dead body in your back seat.", 0x00000005);
				}
			}
			break;
		
		case 0x00000001:
			if (SYSTEM::TIMERA() > 0x000001F4)
			{
				iParam0->f_7 = func_254(iParam0->f_4, iParam0->f_3);
				iVar3 = func_253(iParam0, &iVar4);
				if (!unk_0x437347B10A200C4B(iVar3, 0x00000000))
				{
					if (iVar4 == iParam0->f_7)
					{
						if (iParam0->f_7 == 0x00000001)
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
				if (iParam0->f_19B == 0x00000000)
				{
					if (unk_0x3CAA763EEC01ADF7(iParam0->f_3, iParam0->f_4, 0x00000000, 0x00000000, 0x00000000))
					{
						iParam0->f_7 = 0x00000000;
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
			if (iParam0->f_7 == 0x00000000)
			{
				vVar2 = { 1.5f, 0f, -0.6422f };
				vVar0 = { -1.4309f, 3.958f, 3.5037f };
				vVar1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (iParam0->f_7 == 0x00000002)
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
			iVar6 = func_245(&(iParam0->f_199), unk_0x68E4ADDDDCD7BDDE(iParam0->f_4, 0f, 2.2f, 0.275f), unk_0x68E4ADDDDCD7BDDE(iParam0->f_4, vVar0), 0x00000001);
			if (iVar6 == 0x00000001)
			{
				vVar0.z = (vVar0.z + 1.5f);
				if (iParam0->f_7 == 0x00000002)
				{
					vVar1 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar6 != 0xFFFFFFFF)
			{
				func_244(0x00000000, 0x00000000, 0x00000001);
				unk_0x745CE398A4B0A3C6(unk_0x68F4C0EC296D3901(iParam0->f_4, 0x00000001), 3f, 0x00000000);
				unk_0x75CFD6AD66ADFDD1(unk_0x68F4C0EC296D3901(iParam0->f_4, 0x00000001), 25f, 0x00000000);
				unk_0xA37A90C62806D848(0x00000001);
				unk_0x790015DC92C918E2();
				func_120();
				func_261(iParam0, 0x00000000, 0x00000000);
				vVar7 = { unk_0x68E4ADDDDCD7BDDE(iParam0->f_4, vVar2) };
				unk_0xA47B46945FF6DE74(iParam0->f_3, vVar7, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(iParam0->f_3, func_242(iParam0));
				func_241(iParam0, 1f, 1f, 1f, 0f, 0f, 0f, 0x42480000);
				unk_0x608A456FDD8A83D8(*iParam0, unk_0x68E4ADDDDCD7BDDE(iParam0->f_4, vVar0));
				unk_0x1305278186D1C53E(*iParam0, iParam0->f_4, vVar1, 0x00000001);
				unk_0xE3BB8E05FCEB3FBE(*iParam0, 0x00000001);
				unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0xF895E10BF4C72645(iParam0->f_3, 0x00000000, 0x00000000);
				unk_0x5B1D360B9C6F0A09(iParam0->f_3, iParam0->f_4, 0x00004E20, iParam0->f_7, iParam0->f_6, 0x00000003, 0x00000000);
				iLocal_78 = 0x00000005;
			}
			break;
		
		case 0x00000005:
			func_224("TAXI_PED_ENTER_CUT_WAIT", &(iParam0->f_4E), 0x000003E8);
			if (SYSTEM::TIMERA() > 0x00000DAC)
			{
				iLocal_78 = 0x00000009;
			}
			break;
		
		case 0x00000006:
			break;
		
		case 0x00000007:
			if (!unk_0x437347B10A200C4B(iParam0->f_3, 0x00000000) && !unk_0x437347B10A200C4B(iParam0->f_4, 0x00000000))
			{
				if (!unk_0x405E212DDE472467(iParam0->f_3, 0x00000000))
				{
					unk_0xF821F915BC24D246(iParam0->f_3, iParam0->f_4, iParam0->f_7);
					unk_0x152BCACCF710B36E(iParam0->f_4, func_240(iParam0->f_7), 0x00000001);
				}
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0x9A8DDC7C522F5BF5(*iParam0, 0x00000000);
				unk_0x9A8DDC7C522F5BF5(iParam0->f_1, 0x00000000);
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 0x3F800000);
				unk_0x82E51BCA72537B6C(0x00000320);
				unk_0xA37A90C62806D848(0x00000001);
				unk_0x790015DC92C918E2();
				func_120();
				func_261(iParam0, 0x00000000, 0x00000000);
				iLocal_78 = 0x00000008;
			}
			break;
		
		case 0x00000008:
			if (unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
			{
				func_238(0x00000001, 0x00000001, 0x00000001);
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			unk_0x9A8DDC7C522F5BF5(*iParam0, 0x00000000);
			unk_0x9A8DDC7C522F5BF5(iParam0->f_1, 0x00000000);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 0x3F800000);
			func_238(0x00000001, 0x00000001, 0x00000001);
			return 0x00000001;
			break;
		
		case 0x0000000A:
			if (!unk_0x437347B10A200C4B(iParam0->f_3, 0x00000000) && !unk_0x437347B10A200C4B(iParam0->f_4, 0x00000000))
			{
				if (unk_0x81A5359F25512A04(iParam0->f_3) || unk_0x405E212DDE472467(iParam0->f_3, 0x00000001))
				{
					return 0x00000001;
				}
				else if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x950B6492) != 0x00000001 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x950B6492) != 0x00000000)
				{
					unk_0x5B1D360B9C6F0A09(iParam0->f_3, iParam0->f_4, 0x00004E20, iParam0->f_7, iParam0->f_6, 0x00000001, 0x00000000);
				}
			}
			break;
	}
	return 0x00000000;
}

void func_238(bool bParam0, bool bParam1, int iParam2)
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
	func_239(0x00000017, 0x00000000);
}

void func_239(int iParam0, bool bParam1)
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

int func_240(int iParam0)
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

void func_241(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	if (!unk_0x9F4FE516EAACCFC5(*iParam0))
	{
		*iParam0 = unk_0xAE06CCC36C49929C(0x019286A9, vParam1, vParam2, fParam3, 0x00000000, 0x00000002);
	}
}

float func_242(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = 0f;
	vVar1 = { func_41() };
	if (uParam0->f_7 == 0x00000002)
	{
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { unk_0x68E4ADDDDCD7BDDE(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_243(unk_0x68F4C0EC296D3901(uParam0->f_3, 0x00000001), vVar1);
	return fVar0;
}

float func_243(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_244(int iParam0, int iParam1, int iParam2)
{
	unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), 0x00000000, iParam0);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 15f);
	}
	unk_0x2D23BE319D971F4C(iParam1);
	func_42(0x00000000);
	func_23(0x00000001, 0x00000001, iParam2, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBFE31971E49FA500(0x00000000);
	unk_0x8BCB70EB440DED83(0x00000000);
	func_239(0x00000017, 0x00000001);
}

int func_245(var uParam0, vector3 vParam1, vector3 vParam2, bool bParam3)
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

int func_246(int iParam0)
{
	if (func_247() && unk_0x1C0640BA9A7327B3() >= iParam0 + 1000)
	{
		unk_0x53491B90E4FD0E56(0x000001F4);
		while (!unk_0x757EF87A33649210())
		{
			SYSTEM::WAIT(0x00000000);
		}
		func_42(0x00000000);
		func_159();
		return 0x00000001;
	}
	return 0x00000000;
}

int func_247()
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

void func_248()
{
	if (func_35())
	{
		unk_0xCB0CD9B929EB37B9("appInternet");
	}
	if (func_34())
	{
		unk_0xCB0CD9B929EB37B9("appCamera");
	}
	if (func_44(0x00000001))
	{
		func_42(0x00000000);
	}
}

void func_249(var uParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
		{
			if (func_165(uParam0->f_3, 0x00000001) > 30f || func_250(uParam0))
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
					func_330(uParam0, "Player abandoned passenger on pickup.", 0x00000008);
				}
			}
		}
	}
}

int func_250(var uParam0)
{
	if ((unk_0x9C66D99E63E8E24C(uParam0->f_4) > 3f && func_113(uParam0, 0x00000005) > 15f) || unk_0x377BE9A1BF38C7CE(uParam0->f_4))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_251(int iParam0)
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

int func_252(var uParam0, bool bParam1)
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

int func_253(var uParam0, var uParam1)
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

int func_254(int iParam0, int iParam1)
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

int func_255(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (!unk_0x03068588A1FCED1A(uParam0->f_3) && func_165(uParam0->f_3, 0x00000001) < fParam2)
		{
			if (!func_305(uParam0, 0x00000005))
			{
				func_298(uParam0, 0x00000005, 0x00000000, 0x00000000);
			}
		}
		else if (func_305(uParam0, 0x00000005))
		{
			func_112(uParam0, 0x00000005, 0x00000000);
		}
		if (((func_113(uParam0, 0x00000005) > IntToFloat(iParam1) && unk_0x9C66D99E63E8E24C(uParam0->f_4) < fParam4) && !unk_0x03068588A1FCED1A(uParam0->f_3)) || func_165(uParam0->f_3, 0x00000001) <= fParam3)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_256(var uParam0, float fParam1)
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
			if ((func_172(uParam0->f_4, uParam0->f_3, 0x00000000) <= fParam1 && !uParam0->f_8E) && unk_0x755FF954DAE327E1((vVar0.z - vVar1.z)) < 5f)
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
				if (!func_22(uParam0->f_2C, 0x00000080))
				{
					func_230(uParam0, 0x00000004, 0x00000001, 0x00000000, 0x00000001);
				}
			}
			else
			{
				func_257(uParam0->f_3, "TAXI_HAIL", uParam0->f_91, 0x00000004);
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

void func_257(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_258(iParam3), 0x00000000);
}

int func_258(int iParam0)
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

float func_259(var uParam0, int iParam1)
{
	if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
		if (func_163(uParam0))
		{
			return func_172(uParam0->f_4, iParam1, 0x00000001);
		}
	}
	return 0f;
}

void func_260(var uParam0)
{
	func_200(uParam0, uParam0->f_3);
	if (func_163(uParam0))
	{
		if (func_305(uParam0, 0x0000000E))
		{
			func_202(uParam0);
			if (unk_0xE4EDC4B0E92C078B(uParam0->f_A))
			{
				unk_0x142CC44DB769B57E(&(uParam0->f_A));
			}
		}
	}
	if (!func_305(uParam0, 0x00000009))
	{
		if (unk_0xE4EDC4B0E92C078B(uParam0->f_8))
		{
			unk_0x7F010F50CE03A8AF(uParam0->f_8, 0x00000000);
			unk_0x661342B9651D16E2(uParam0->f_8, 0x00000000);
		}
		func_298(uParam0, 0x00000009, 0x00000000, 0x00000000);
		func_158("TAXI_OBJ_POL", 0x00001D4C, 0x00000001);
	}
}

void func_261(int iParam0, int iParam1, bool bParam2)
{
	iParam0->f_6E = iParam1;
	if (bParam2)
	{
		func_49();
		func_298(iParam0, 0x00000010, 4f, 0x00000000);
		unk_0x790015DC92C918E2();
	}
}

int func_262(var uParam0, int iParam1)
{
	if (!unk_0x67C1D9E5B91B2E37(0x00000002))
	{
		return 0x00000000;
	}
	func_266(0x0000000C);
	if (func_22(uParam0->f_2C, 0x00000008))
	{
		if (!func_22(uParam0->f_2C, 0x00000080))
		{
			if (unk_0xE64AC821059A938D(unk_0x16F2683693E537C9()) && !func_22(uParam0->f_2C, 0x00000100))
			{
				func_173(&(uParam0->f_2C), 0x00000100);
			}
			if (func_22(uParam0->f_2C, 0x00000100) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				func_230(uParam0, 0x00000087, 0x00000001, 0x00000000, 0x00000001);
				func_173(&(uParam0->f_2C), 0x00000080);
			}
		}
	}
	if (!func_265(uParam0, iParam1))
	{
		if (func_165(uParam0->f_3, 0x00000001) < 35f)
		{
			if (!func_22(uParam0->f_2C, 0x00000008))
			{
				unk_0xF96A174EE26D7588(uParam0->f_3, unk_0x16F2683693E537C9(), 0x00000000);
				func_230(uParam0, 0x00000085, 0x00000001, 0x00000000, 0x00000001);
				func_173(&(uParam0->f_2C), 0x00000008);
			}
		}
		if ((unk_0xEB6A8945D1AC98A1(uParam0->f_3) || unk_0xE9FDA1035CFEA94F(uParam0->f_3)) || func_165(uParam0->f_3, 0x00000001) > 400f)
		{
			func_330(uParam0, "ped is fleeing or injured", 0x00000005);
		}
	}
	else
	{
		uParam0->f_4 = unk_0x6937EA2286828455(uParam0->f_2, 0x00000000);
		unk_0x44A200C9B6E1CEA6(uParam0->f_4, 0x00000001);
		if (unk_0xA30B8362589C124A(uParam0->f_4, 0xFFFFFFFF, 0x00000000) == uParam0->f_2)
		{
			unk_0x2F625BED8BF7F26A(uParam0->f_4);
			func_263(uParam0);
			func_51(0x00000002, 0x00000000);
			bLocal_86 = 0x00000001;
			func_114(&iLocal_82);
			return 0x00000001;
		}
		else
		{
			func_330(uParam0, "No Taxi", 0x00000015);
			func_162("TAXI_DBG_NTAXI", 0xFFFFFFFF);
		}
	}
	return 0x00000000;
}

void func_263(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0x00000000))
	{
		if (func_264())
		{
		}
	}
}

int func_264()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_265(var uParam0, int iParam1)
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
				bVar2 = func_251(iVar0);
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
					if (!func_22(uParam0->f_2C, 0x00000040))
					{
						if (unk_0x67C1D9E5B91B2E37(0x00000002))
						{
							func_162("TX_VIP_DMGD", 0xFFFFFFFF);
							if (func_161("TX_VIP_DMGD"))
							{
								func_173(&(uParam0->f_2C), 0x00000040);
							}
						}
					}
					return 0x00000000;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_22(uParam0->f_2C, 0x00000020))
					{
						if (unk_0x67C1D9E5B91B2E37(0x00000002))
						{
							func_162("TX_VIP_CAR", 0xFFFFFFFF);
							if (func_161("TX_VIP_CAR"))
							{
								func_173(&(uParam0->f_2C), 0x00000020);
							}
						}
					}
					return 0x00000000;
				}
				else if (!bVar5)
				{
					if (!func_22(uParam0->f_2C, 0x00000010))
					{
						if (unk_0x67C1D9E5B91B2E37(0x00000002))
						{
							func_162("TX_VIP_SMALL", 0xFFFFFFFF);
							if (func_161("TX_VIP_SMALL"))
							{
								func_173(&(uParam0->f_2C), 0x00000010);
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
			func_124(&(uParam0->f_2C), 0x00000010);
			func_124(&(uParam0->f_2C), 0x00000040);
			func_124(&(uParam0->f_2C), 0x00000020);
		}
	}
	return 0x00000000;
}

void func_266(int iParam0)
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

void func_267(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		func_125(&(uParam0->f_64), iVar0);
		iVar0++;
	}
}

void func_268()
{
	Local_165 = 0x00000000;
	func_285(0x0000BB26/*func_287*/, 0x0000BB0D/*func_286*/, 0x00000001);
	func_285(0x0000BA1E/*func_283*/, 0x0000BA07/*func_282*/, 0x00000001);
	func_285(0x0000B9C9/*func_281*/, 0x0000B9B0/*func_280*/, 0x00000001);
	func_285(0x0000B968/*func_279*/, 0x0000B950/*func_278*/, 0x00000001);
	func_285(0x0000B8E2/*func_277*/, 0x0000B8CD/*func_276*/, 0x00000001);
	func_285(0x0000B898/*func_274*/, 0x0000B87F/*func_273*/, 0x00000001);
	func_285(0x0000B7F1/*func_270*/, 0x0000B7DA/*func_269*/, 0x00000001);
}

int func_269(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Not Driveable", 0x00000001);
	return 0x00000001;
}

int func_270(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_272(uParam0->f_4))
		{
			func_271(uParam0, 0x00000001);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_271(var uParam0, int iParam1)
{
	uParam0->f_75 = 0x00000001;
	uParam0->f_76 = iParam1;
}

int func_272(int iParam0)
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

int func_273(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Didn't lose police in time.", 0x00000009);
	return 0x00000001;
}

int func_274(var uParam0)
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
	{
		if (func_275(uParam0->f_55, 0x00000020))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_275(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_276(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_271(uParam0, 0x0000000B);
	return 0x00000001;
}

int func_277(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0->f_4))
	{
		if (unk_0x70EED0761B82965E(iParam0->f_4) && !unk_0xF79A7BCA9E38BBBC(iParam0->f_4))
		{
			if (!func_305(iParam0, 0x00000019))
			{
				func_298(iParam0, 0x00000019, 0x00000000, 0x00000000);
			}
			else if (func_113(iParam0, 0x00000019) > 2f)
			{
				return 0x00000001;
			}
		}
		else if (func_305(iParam0, 0x00000019))
		{
			func_112(iParam0, 0x00000019, 0x00000000);
		}
	}
	return 0x00000000;
}

int func_278(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Is Flipped", 0x00000000);
	return 0x00000001;
}

int func_279(var uParam0)
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

int func_280(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Stayed stopped for too long.", 0x00000009);
	return 0x00000001;
}

int func_281(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_4, 0x00000000))
	{
		if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
		{
			if (unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
			{
				if (func_275(uParam0->f_56, 0x00000008))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_282(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Not Driveable", 0x00000000);
	return 0x00000001;
}

int func_283(var uParam0)
{
	if (unk_0xC844350D5D58C99A(uParam0->f_4))
	{
		if (func_284(uParam0->f_4))
		{
			func_271(uParam0, 0x00000000);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_284(int iParam0)
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

void func_285(int iParam0, int iParam1, bool bParam2)
{
	if (Local_165 >= 0x00000010)
	{
		Local_165 = 0x00000010;
		return;
	}
	Local_165.f_1[Local_165 /*4*/] = 0x00000000;
	func_167(&(Local_165.f_1[Local_165 /*4*/]), 0x00000001);
	if (bParam2)
	{
		func_167(&(Local_165.f_1[Local_165 /*4*/]), 0x00000002);
	}
	Local_165.f_1[Local_165 /*4*/].f_2 = iParam0;
	Local_165.f_1[Local_165 /*4*/].f_3 = iParam1;
	Local_165++;
}

int func_286(int iParam0, var uParam1)
{
	uParam1 = uParam1;
	func_330(iParam0, "Passenger injured.", 0x0000000F);
	return 0x00000001;
}

int func_287(var uParam0)
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

void func_288(var uParam0, var uParam1)
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

void func_289(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_290()
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

int func_291()
{
	if (!unk_0xB87F6CF6E5628C67(iLocal_265))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading A_M_M_Farmer_01", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0x83D8570832F172A7(iLocal_387))
	{
		return 0x00000000;
	}
	if (!func_292(&iLocal_281, 0x00000001))
	{
		func_224("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_281, 0x000003E8);
		return 0x00000000;
	}
	return 0x00000001;
}

int func_292(int iParam0, bool bParam1)
{
	if (!unk_0xB87F6CF6E5628C67(func_21()))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (bParam1)
	{
		if (!unk_0xB4AE0788C1587752("gestures@m@standing@casual"))
		{
			func_224("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 0x000003E8);
			return 0x00000000;
		}
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@taxi@"))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("oddjobs@towingcome_here"))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0xB4AE0788C1587752("misscommon@response"))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	if (!unk_0x67C1D9E5B91B2E37(0x00000002))
	{
		func_224("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 0x000003E8);
		return 0x00000000;
	}
	return 0x00000001;
}

void func_293(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0x00000001:
			iParam0->f_7B = "TRS_STREAMING";
			break;
		
		case 0x00000002:
			iParam0->f_7B = " TRS_FINDING_LOCATION ";
			break;
		
		case 0x00000003:
			iParam0->f_7B = " TRS_SPAWNING ";
			break;
		
		case 0x00000004:
			iParam0->f_7B = " TRS_SPAWN_CAR ";
			break;
		
		case 0x00000005:
			iParam0->f_7B = " TRS_MANAGE_PICKUP ";
			break;
		
		case 0x00000006:
			iParam0->f_7B = " TRS_PASSENGER_ENTER ";
			break;
		
		case 0x00000007:
			iParam0->f_7B = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 0x00000008:
			iParam0->f_7B = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 0x00000009:
			iParam0->f_7B = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 0x0000000A:
			iParam0->f_7B = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 0x00000012:
			iParam0->f_7B = " TRS_PRE_CUTSCENE ";
			break;
		
		case 0x0000000B:
			iParam0->f_7B = " TRS_SWITCH_JOB ";
			break;
		
		case 0x00000013:
			iParam0->f_7B = " TRS_CUTSCENE ";
			break;
		
		case 0x00000014:
			iParam0->f_7B = " TRS_CUTSCENE_02 ";
			break;
		
		case 0x0000000D:
			iParam0->f_7B = " TRS_CHASE_DRIVER ";
			break;
		
		case 0x0000000C:
			iParam0->f_7B = " TRS_SAVE_DAMSEL ";
			break;
		
		case 0x0000000E:
			iParam0->f_7B = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 0x0000000F:
			iParam0->f_7B = " TRS_WAIT_PARK ";
			break;
		
		case 0x00000010:
			iParam0->f_7B = " TRS_SEND_TO_STORE ";
			break;
		
		case 0x00000011:
			iParam0->f_7B = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 0x00000016:
			iParam0->f_7B = " TRS_DROPPING_OFF ";
			break;
		
		case 0x00000019:
			iParam0->f_7B = " TRS_ESCAPE_POLICE ";
			break;
		
		case 0x0000001A:
			iParam0->f_7B = " TRS_POLICE_ESCAPED ";
			break;
		
		case 0x00000018:
			iParam0->f_7B = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 0x0000001B:
			iParam0->f_7B = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 0x00000017:
			iParam0->f_7B = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 0x0000001C:
			iParam0->f_7B = " TRS_SPECIAL_ENDING ";
			break;
		
		case 0x0000001D:
			iParam0->f_7B = " TRS_SCORECARD_GRADE ";
			break;
		
		case 0x0000001E:
			iParam0->f_7B = " TRS_CLEANUP ";
			break;
		
		case 0x00000015:
			iParam0->f_7B = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			iParam0->f_7B = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	iParam0->f_19A = iParam1;
}

int func_294(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		uParam0->f_8 = func_295(uParam0->f_3, 0x00000000, 0x00000000);
		unk_0x138116A08F9AC5F4(0x00000001, 0x00000000);
		unk_0x661342B9651D16E2(uParam0->f_8, 0x00000001);
		unk_0xDC5B2F9D0CCE3A10(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x0C8C0C840C2D1AD2(uParam0->f_3, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000800, 0x00000004);
	}
	return 0x00000001;
}

int func_295(int iParam0, bool bParam1, bool bParam2)
{
	return func_133(iParam0, !bParam1, bParam2);
}

int func_296(var uParam0, vector3 vParam1, vector3 vParam2, char* sParam3, int iParam4, float fParam5, float fParam6)
{
	if (!unk_0xC844350D5D58C99A(uParam0->f_3))
	{
		func_297(uParam0, uParam0->f_E);
		uParam0->f_B = { vParam1 };
		uParam0->f_E = { vParam2 };
		func_39(uParam0->f_E, 0x00000000);
		unk_0x745CE398A4B0A3C6(uParam0->f_E, 2f, 0x00000000);
		func_37(uParam0->f_E, 0x00000000, fParam6);
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

void func_297(var uParam0, vector3 vParam1)
{
	uParam0->f_33[0x00000000] = unk_0xA4B9EE930B45BDFA(vParam1, 20f, 5f, 0x00000000);
}

void func_298(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 0x00000020)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000020)
		{
			if (fParam2 > 0f)
			{
				func_106(&(iParam0->f_92[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_105(&(iParam0->f_92[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_106(&(iParam0->f_92[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_105(&(iParam0->f_92[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_299()
{
	unk_0x523BCC9DC80CD82F(iLocal_265);
	func_301(0x00000001);
	iLocal_387 = func_300();
}

int func_300()
{
	return unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
}

void func_301(bool bParam0)
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
	if (!func_22(Global_1B416.f_4A94, 0x00000080))
	{
		func_173(&(Global_1B416.f_4A94), 0x00000080);
	}
}

void func_302(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *iParam0)
	{
		if (!unk_0xEB6A8945D1AC98A1((*iParam0)[iVar0]))
		{
			unk_0x327AAEE25F323797((*iParam0)[iVar0]);
			unk_0xBAFED2F6486F771A((*iParam0)[iVar0], 0x0000000D, 0x00000001);
			unk_0xF82EA857DA10E0CD(&iLocal_270);
			unk_0xDD353D0E9C789D0E(&iLocal_270);
			unk_0x93D47DFD0AE94949(0x00000000, unk_0x09AC81E49EA267F7(0x00000001, 0x000003E8));
			unk_0xF3268524E9BE6D6E(0x00000000, Local_230.f_3, 4000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(iLocal_270);
			unk_0x78ADC381772E3D54((*iParam0)[iVar0], iLocal_270);
			unk_0xFADC0A217229F6B5((*iParam0)[iVar0], 0x00000001);
		}
		iVar0++;
	}
}

void func_303(var uParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_262, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_262, Local_230.f_19D);
	unk_0x0E2400AB9174FA81(0x00000005, iLocal_262, 0xA49E591C);
	unk_0x0E2400AB9174FA81(0x00000005, 0xA49E591C, iLocal_262);
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
		{
			unk_0xA3BF0AA5A2608191((*uParam0)[iVar0]);
			unk_0xCAE036C45E7FC720((*uParam0)[iVar0], &iVar1, 0x00000001);
			if (iVar1 == joaat("weapon_unarmed"))
			{
				unk_0x262EF6C6306BEA6C((*uParam0)[iVar0], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
			}
			unk_0x298903DD96203C2C((*uParam0)[iVar0], 0x0000001E);
			unk_0x7C8478BF70C1E072((*uParam0)[iVar0], 1000f, 0x00000000);
			unk_0xFADC0A217229F6B5((*uParam0)[iVar0], 0x00000001);
		}
		iVar0++;
	}
}

void func_304(int iParam0, int iParam1)
{
	func_114(&(iParam0->f_92[iParam1 /*3*/]));
}

bool func_305(int iParam0, int iParam1)
{
	return func_16(&(iParam0->f_92[iParam1 /*3*/]));
}

void func_306(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_19B == 0x00000000)
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
		{
			if (bParam2)
			{
				if (func_113(uParam0, 0x0000000A) > (20f + 10f))
				{
					if (uParam0->f_70)
					{
						func_230(uParam0, 0x0000005C, 0x00000001, 0x00000000, 0x00000000);
						uParam0->f_70 = 0x00000000;
					}
					else
					{
						func_230(uParam0, 0x00000053, 0x00000001, 0x00000000, 0x00000000);
					}
					uParam0->f_71 = 0x00000001;
					func_298(uParam0, 0x0000000A, 0f, 0x00000001);
				}
			}
			else if (func_113(uParam0, 0x0000000A) > 20f)
			{
				if (uParam0->f_70)
				{
					func_230(uParam0, 0x0000005C, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_70 = 0x00000000;
				}
				else
				{
					func_230(uParam0, 0x00000053, 0x00000001, 0x00000000, 0x00000000);
				}
				uParam0->f_71 = 0x00000001;
				func_298(uParam0, 0x0000000A, 0f, 0x00000001);
			}
		}
	}
	if (uParam0->f_19B == 0x00000001)
	{
		if (func_113(uParam0, 0x0000000A) > 30f)
		{
			if (!func_115())
			{
				if (uParam0->f_70)
				{
					func_230(uParam0, 0x0000005C, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_70 = 0x00000000;
				}
				else
				{
					func_230(uParam0, 0x00000053, 0x00000001, 0x00000000, 0x00000000);
				}
				uParam0->f_71 = 0x00000001;
				func_298(uParam0, 0x0000000A, 0f, 0x00000001);
			}
		}
	}
	if (func_22(uParam0->f_64, 0x00000040))
	{
		if (!func_16(&(Local_162[0x00000005 /*10*/].f_6)))
		{
			func_114(&(Local_162[0x00000005 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[0x00000005 /*10*/].f_6)) > 6f)
		{
			if (func_329(uParam0))
			{
				if (uParam0->f_71)
				{
					func_230(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_230(uParam0, Local_162[0x00000005 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_328(uParam0, 0x00000001);
				func_326(0x00000005, uParam0);
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_64, 0x00000001))
	{
		if (!func_16(&(Local_162[0x00000000 /*10*/].f_6)))
		{
			func_114(&(Local_162[0x00000000 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[0x00000000 /*10*/].f_6)) > 5f)
		{
			if (func_324(uParam0))
			{
				func_328(uParam0, 0x00000001);
				func_326(0x00000000, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_230(uParam0, Local_162[0x00000000 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_64, 0x00000002))
	{
		if (!func_16(&(Local_162[0x00000001 /*10*/].f_6)))
		{
			func_114(&(Local_162[0x00000001 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[0x00000001 /*10*/].f_6)) > 5f)
		{
			if (func_323(uParam0))
			{
				func_328(uParam0, 0x00000001);
				func_326(0x00000001, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_230(uParam0, Local_162[0x00000001 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_64, 0x00000800))
	{
		if (!func_16(&(Local_162[0x00000008 /*10*/].f_6)))
		{
			if (unk_0xC844350D5D58C99A(uParam0->f_4))
			{
				uParam0->f_2E = unk_0x7F6DC62EA9922664(uParam0->f_4);
				func_114(&(Local_162[0x00000008 /*10*/].f_6));
			}
		}
		else if (func_103(&(Local_162[0x00000008 /*10*/].f_6)) > 7f || Local_162[0x00000008 /*10*/].f_1 == 0x00000000)
		{
			if (func_322(uParam0))
			{
				func_328(uParam0, 0x00000001);
				func_326(0x00000008, uParam0);
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_64, 0x00000080))
	{
		if (!func_16(&(Local_162[0x00000006 /*10*/].f_6)))
		{
			func_114(&(Local_162[0x00000006 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[0x00000006 /*10*/].f_6)) > 5f)
		{
			if (func_321(uParam0))
			{
				func_328(uParam0, 0x00000001);
				func_326(0x00000006, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_230(uParam0, Local_162[0x00000006 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_64, 0x00000020))
	{
		if (!func_16(&(Local_162[0x00000004 /*10*/].f_6)))
		{
			func_114(&(Local_162[0x00000004 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[0x00000004 /*10*/].f_6)) > 4f)
		{
			if (func_320(uParam0))
			{
				func_328(uParam0, 0x00000001);
				func_326(0x00000004, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_230(uParam0, Local_162[0x00000004 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_64, 0x00000100))
	{
		if (!func_16(&(Local_162[0x00000007 /*10*/].f_6)))
		{
			func_114(&(Local_162[0x00000007 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[0x00000007 /*10*/].f_6)) > 5f || Local_162[0x00000007 /*10*/].f_1 == 0x00000000)
		{
			if (func_319(uParam0))
			{
				func_326(0x00000007, uParam0);
				func_328(uParam0, 0x00000001);
				if (uParam0->f_71)
				{
					func_230(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_230(uParam0, Local_162[0x00000007 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000001);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_64, 0x00000008))
	{
		if (!func_16(&(Local_162[0x00000009 /*10*/].f_6)))
		{
			func_114(&(Local_162[0x00000009 /*10*/].f_6));
		}
		else if (func_103(&(Local_162[0x00000009 /*10*/].f_6)) <= 7f)
		{
			unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
		}
		else if (func_103(&(Local_162[0x00000009 /*10*/].f_6)) > 7f || Local_162[0x00000009 /*10*/].f_1 == 0x00000000)
		{
			if (func_318(uParam0))
			{
				func_328(uParam0, 0x00000001);
				func_326(0x00000009, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_230(uParam0, Local_162[0x00000009 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000001);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_64, 0x00004000))
	{
		if (!func_16(&(Local_162[0x0000000D /*10*/].f_6)))
		{
			func_114(&(Local_162[0x0000000D /*10*/].f_6));
		}
		else if (func_103(&(Local_162[0x0000000D /*10*/].f_6)) > 10f)
		{
			if (func_312(uParam0))
			{
				func_328(uParam0, 0x00000001);
				func_326(0x0000000D, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_230(uParam0, Local_162[0x0000000D /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_64, 0x00008000))
	{
		if (!func_16(&(Local_162[0x0000000E /*10*/].f_6)))
		{
			func_114(&(Local_162[0x0000000E /*10*/].f_6));
		}
		else if (func_103(&(Local_162[0x0000000E /*10*/].f_6)) > 7f)
		{
			if (func_311(uParam0))
			{
				func_328(uParam0, 0x00000001);
				func_326(0x0000000E, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_230(uParam0, Local_162[0x0000000E /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_64, 0x00001000))
	{
		if (!func_16(&(Local_162[0x0000000B /*10*/].f_6)))
		{
			func_114(&(Local_162[0x0000000B /*10*/].f_6));
		}
		else if (func_103(&(Local_162[0x0000000B /*10*/].f_6)) > 8f)
		{
			if (func_310(uParam0))
			{
				func_328(uParam0, 0x00000001);
				func_326(0x0000000B, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_230(uParam0, Local_162[0x0000000B /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_64, 0x00002000))
	{
		if (!func_16(&(Local_162[0x0000000C /*10*/].f_6)))
		{
			func_114(&(Local_162[0x0000000C /*10*/].f_6));
		}
		else if (func_103(&(Local_162[0x0000000C /*10*/].f_6)) > 5f)
		{
			if (func_309(uParam0))
			{
				func_328(uParam0, 0x00000001);
				func_326(0x0000000C, uParam0);
				if (uParam0->f_71)
				{
					func_230(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_230(uParam0, Local_162[0x0000000C /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_325(uParam0);
			}
		}
	}
	if (func_22(uParam0->f_64, 0x00000004))
	{
		if (!func_16(&(Local_162[0x00000002 /*10*/].f_6)))
		{
			func_308(&(Local_162[0x00000002 /*10*/].f_6), 0f);
		}
		else if (func_103(&(Local_162[0x00000002 /*10*/].f_6)) > 5f)
		{
			if (func_307(uParam0))
			{
				if (uParam0->f_71)
				{
					func_230(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_230(uParam0, Local_162[0x00000002 /*10*/].f_9, 0x00000001, 0x00000000, 0x00000000);
				}
				func_328(uParam0, 0x00000001);
				func_326(0x00000002, uParam0);
				func_325(uParam0);
			}
		}
	}
}

int func_307(var uParam0)
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
					func_114(&(Local_162[0x00000002 /*10*/].f_3));
				}
			}
			else if (func_103(&(Local_162[0x00000002 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_26 = uParam0->f_25;
				uParam0->f_25 = unk_0x9C66D99E63E8E24C(uParam0->f_2);
				fVar0 = (uParam0->f_26 - uParam0->f_25);
				func_102(&(Local_162[0x00000002 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_25 < 12f)
				{
					return 0x00000001;
				}
			}
		}
		else
		{
			func_102(&(Local_162[0x00000002 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

void func_308(int iParam0, float fParam1)
{
	if (!func_16(iParam0))
	{
		func_106(iParam0, fParam1);
	}
}

int func_309(var uParam0)
{
	vector3 vVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 0x00000001) };
		if (vVar0.y < -10f && !func_16(&(Local_162[0x00000000 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[0x0000000C /*10*/].f_3)))
			{
				func_114(&(Local_162[0x0000000C /*10*/].f_3));
			}
			else if (func_103(&(Local_162[0x0000000C /*10*/].f_3)) > 5f)
			{
				func_102(&(Local_162[0x0000000C /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_102(&(Local_162[0x0000000C /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_310(var uParam0)
{
	vector3 vVar0;
	
	if ((((((unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000) && !func_16(&(Local_162[0x00000000 /*10*/].f_3))) && !func_16(&(Local_162[0x00000001 /*10*/].f_3))) && !func_16(&(Local_162[0x00000005 /*10*/].f_3))) && !func_16(&(Local_162[0x00000009 /*10*/].f_3))) && !func_16(&(Local_162[0x00000007 /*10*/].f_3))) && !func_16(&(Local_162[0x00000008 /*10*/].f_3)))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 0x00000001) };
		if (unk_0x755FF954DAE327E1(vVar0.x) > 2.5f && !func_16(&(Local_162[0x00000000 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[0x0000000B /*10*/].f_3)))
			{
				func_114(&(Local_162[0x0000000B /*10*/].f_3));
				fLocal_164 = vVar0.x;
			}
			else if (func_103(&(Local_162[0x0000000B /*10*/].f_3)) < 1.5f && (unk_0x755FF954DAE327E1(fLocal_164) - unk_0x755FF954DAE327E1(vVar0.x)) < 0f)
			{
				func_102(&(Local_162[0x0000000B /*10*/].f_3));
				return 0x00000001;
			}
			else if (func_103(&(Local_162[0x0000000B /*10*/].f_3)) >= 1.5f)
			{
				func_102(&(Local_162[0x0000000B /*10*/].f_3));
				return 0x00000000;
			}
		}
	}
	return 0x00000000;
}

int func_311(var uParam0)
{
	if (((((unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000) && !func_16(&(Local_162[0x00000000 /*10*/].f_3))) && !func_16(&(Local_162[0x00000008 /*10*/].f_3))) && !func_16(&(Local_162[0x00000005 /*10*/].f_3))) && !func_16(&(Local_162[0x00000009 /*10*/].f_3))) && !func_16(&(Local_162[0x00000007 /*10*/].f_3)))
	{
		if (!func_16(&(Local_162[0x0000000E /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x83C1D4B63BBD91F6(unk_0x68F4C0EC296D3901(uParam0->f_4, 0x00000001), 10f, 0x00000000, 0x00000104);
			if (unk_0xC844350D5D58C99A(uParam0->f_5))
			{
				if ((unk_0x9C66D99E63E8E24C(uParam0->f_4) > 15f && func_172(uParam0->f_5, uParam0->f_4, 0x00000001) < 3f) && (!unk_0x437347B10A200C4B(uParam0->f_5, 0x00000000) && !unk_0xBBA8A868118C90ED(uParam0->f_5, 0xFFFFFFFF, 0x00000000)))
				{
					func_114(&(Local_162[0x0000000E /*10*/].f_3));
				}
			}
		}
		else if ((func_103(&(Local_162[0x0000000E /*10*/].f_3)) < 1.5f && func_172(uParam0->f_5, uParam0->f_4, 0x00000001) > 4.5f) && !unk_0xE147126C9AD09A60(uParam0->f_5))
		{
			func_102(&(Local_162[0x0000000E /*10*/].f_3));
			return 0x00000001;
		}
		else if (func_103(&(Local_162[0x0000000E /*10*/].f_3)) >= 1.5f)
		{
			func_102(&(Local_162[0x0000000E /*10*/].f_3));
			return 0x00000000;
		}
		else if (unk_0xE147126C9AD09A60(uParam0->f_5))
		{
			func_102(&(Local_162[0x0000000E /*10*/].f_3));
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_312(var uParam0)
{
	if (((unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000) && !func_16(&(Local_162[0x00000009 /*10*/].f_3))) && !func_16(&(Local_162[0x00000007 /*10*/].f_3))) && !func_16(&(Local_162[0x00000004 /*10*/].f_3)))
	{
		if (!func_313(uParam0->f_4) && unk_0x9C66D99E63E8E24C(uParam0->f_4) > 15f)
		{
			if (!func_16(&(Local_162[0x0000000D /*10*/].f_3)))
			{
				func_114(&(Local_162[0x0000000D /*10*/].f_3));
			}
			else if (func_103(&(Local_162[0x0000000D /*10*/].f_3)) > 5f)
			{
				func_102(&(Local_162[0x0000000D /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_102(&(Local_162[0x0000000D /*10*/].f_3));
		}
	}
	return 0x00000000;
}

bool func_313(int iParam0)
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
	vVar3 = { func_317((vVar1.x - vVar0.x), (vVar1.y - vVar0.y), 0f) };
	vVar4 = { func_316(vVar3, 0x00000000) * Vector(fVar9, fVar9, fVar9) };
	vVar3 = { vVar3 * Vector(2f, 2f, 2f) };
	vVar5 = { vVar0 - vVar3 + vVar4 };
	vVar6 = { vVar0 - vVar3 - vVar4 };
	vVar7 = { vVar1 + vVar3 + vVar4 };
	vVar8 = { vVar1 + vVar3 - vVar4 };
	vVar8 = { vVar8 };
	return func_314(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vVar5, vVar6, vVar7);
}

int func_314(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
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
	vVar0 = { func_317(vParam2 - vParam1) };
	vVar1 = { func_317(vParam3 - vParam1) };
	fVar2 = func_315(vParam0, vVar0);
	fVar3 = func_315(vParam1, vVar0);
	fVar4 = func_315(vParam2, vVar0);
	fVar5 = func_315(vParam0, vVar1);
	fVar6 = func_315(vParam1, vVar1);
	fVar7 = func_315(vParam3, vVar1);
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

float func_315(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_316(vector3 vParam0, int iParam1)
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

Vector3 func_317(vector3 vParam0)
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

int func_318(var uParam0)
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

int func_319(var uParam0)
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

int func_320(var uParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		iVar0 = unk_0xB32FE193F79AD48C(unk_0xD803B885F5E47A62());
		if (iVar0 == 0x00000000)
		{
			if (!func_16(&(Local_162[0x00000004 /*10*/].f_3)))
			{
				func_114(&(Local_162[0x00000004 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[0x00000004 /*10*/].f_3)) > 2f)
			{
				func_102(&(Local_162[0x00000004 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_102(&(Local_162[0x00000004 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_321(var uParam0)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		iVar0 = unk_0x00AC2C41F7B083B2(unk_0xD803B885F5E47A62());
		if (iVar0 == 0x00000000)
		{
			if (!func_16(&(Local_162[0x00000006 /*10*/].f_3)))
			{
				func_114(&(Local_162[0x00000006 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[0x00000006 /*10*/].f_3)) > 3.5f)
			{
				func_102(&(Local_162[0x00000006 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_102(&(Local_162[0x00000006 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_322(var uParam0)
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
					func_230(uParam0, 0x0000005D, 0x00000001, 0x00000000, 0x00000000);
					uParam0->f_71 = 0x00000000;
				}
				else
				{
					func_230(uParam0, 0x00000048, 0x00000001, 0x00000000, 0x00000001);
				}
				func_102(&(Local_162[0x00000002 /*10*/].f_6));
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_323(var uParam0)
{
	vector3 vVar0;
	
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		vVar0 = { unk_0x698705F356FA8F72(uParam0->f_4, 0x00000001) };
		if (unk_0x755FF954DAE327E1(vVar0.x) > 3f && !func_16(&(Local_162[0x00000000 /*10*/].f_3)))
		{
			if (!func_16(&(Local_162[0x00000001 /*10*/].f_3)))
			{
				func_114(&(Local_162[0x00000001 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[0x00000001 /*10*/].f_3)) > 1.2f)
			{
				func_102(&(Local_162[0x00000001 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_102(&(Local_162[0x00000001 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

int func_324(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (!unk_0xF79A7BCA9E38BBBC(uParam0->f_4) && unk_0xE934758D273C899A(uParam0->f_4))
		{
			if (!func_16(&(Local_162[0x00000000 /*10*/].f_3)))
			{
				func_114(&(Local_162[0x00000000 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[0x00000000 /*10*/].f_3)) > 0.7f)
			{
				func_102(&(Local_162[0x00000000 /*10*/].f_3));
				func_105(&(Local_162[0x00000001 /*10*/].f_6));
				return 0x00000001;
			}
		}
		else
		{
			func_102(&(Local_162[0x00000000 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

void func_325(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000F)
	{
		if (func_16(&(Local_162[iVar0 /*10*/].f_6)))
		{
			func_105(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_298(uParam0, 0x0000000A, 0f, 0x00000001);
	unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
}

void func_326(int iParam0, var uParam1)
{
	Local_162[iParam0 /*10*/].f_1++;
	func_327(uParam1, iParam0);
	func_102(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_70 = 0x00000001;
}

void func_327(var uParam0, int iParam1)
{
	uParam0->f_4C = (uParam0->f_4C + Local_162[iParam1 /*10*/]);
}

void func_328(var uParam0, int iParam1)
{
	uParam0->f_68 = (uParam0->f_68 + iParam1);
}

int func_329(var uParam0)
{
	if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
	{
		if (unk_0x9C66D99E63E8E24C(uParam0->f_4) > 25f)
		{
			if (!func_16(&(Local_162[0x00000005 /*10*/].f_3)))
			{
				func_114(&(Local_162[0x00000005 /*10*/].f_3));
			}
			else if (func_103(&(Local_162[0x00000005 /*10*/].f_3)) > 3.5f)
			{
				func_102(&(Local_162[0x00000005 /*10*/].f_3));
				return 0x00000001;
			}
		}
		else
		{
			func_102(&(Local_162[0x00000005 /*10*/].f_3));
		}
	}
	return 0x00000000;
}

void func_330(int iParam0, char* sParam1, int iParam2)
{
	vector3 vVar0;
	
	func_159();
	func_435(0x00000002);
	vVar0 = { func_160() };
	if ((!unk_0xEA6BC48857E0AC4C(&vVar0) && func_115()) && !unk_0x7F8A39872A07D2CE(&vVar0, "NULL"))
	{
	}
	else
	{
		unk_0x790015DC92C918E2();
		unk_0xA37A90C62806D848(0x00000001);
		StringCopy(&vVar0, iParam0->f_8F, 24);
		if (!unk_0x437347B10A200C4B(iParam0->f_3, 0x00000000))
		{
			if (!func_179(iParam0))
			{
				if (unk_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 0x00000003))
				{
					unk_0xFB131B855F2FD560(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 0xC1000000);
				}
				else if (unk_0xB4ECF989E2C1DAC8(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 0x00000003))
				{
					unk_0xFB131B855F2FD560(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 0xC1000000);
				}
				else if (unk_0xB4ECF989E2C1DAC8(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 0x00000003))
				{
					unk_0xFB131B855F2FD560(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 0xC1000000);
				}
			}
		}
		iParam0->f_6D = 0x00000001;
		iParam0->f_79 = sParam1;
		iParam0->f_19F = iParam2;
		func_298(iParam0, 0x00000003, 0x00000000, 0x00000000);
		if (iParam2 == 0x00000008 || iParam2 == 0x00000012)
		{
			if (iParam0->f_19B != 0x00000009)
			{
				if (iParam0->f_73)
				{
					StringConCat(&vVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				func_336(iParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_257(iParam0->f_3, "TAXI_FAIL", iParam0->f_91, 0x00000004);
			}
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 0x0000000A)
		{
			if (iParam0->f_73)
			{
				StringConCat(&vVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_aggro", 24);
			}
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam0->f_19F == 0x0000000F)
		{
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 0x00000002)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 0x00000003)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x00000004)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x00000005)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SPK", 24);
			if (func_179(iParam0))
			{
				if (unk_0x8B38C0DAEEDB5F9C(iParam0->f_4))
				{
					func_333(iParam0, 0x00001000, 0x00000000);
				}
				else
				{
					func_333(iParam0, 0x00000000, 0x00000000);
				}
			}
		}
		else if (iParam2 == 0x00000006)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 0x00000007)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x0000000E)
		{
			if (iParam0->f_19B != 0x00000009)
			{
				if (iParam0->f_73)
				{
					StringConCat(&vVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_shot1", 24);
				}
				func_336(iParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_257(iParam0->f_3, "CALL_COPS_COMMIT", iParam0->f_91, 0x00000004);
			}
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 0x0000000C)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_336(iParam0, &vVar0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 0x0000000D)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_336(iParam0, &vVar0);
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 0x0000000B)
		{
			func_51(0x00000008, 0x00000000);
			iLocal_57[0x00000003] = 0x00000001;
			if (iParam0->f_19B != 0x00000009)
			{
				if (iParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_336(iParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_257(iParam0->f_3, "GENERIC_INSULT_MED", iParam0->f_91, 0x00000004);
			}
			func_333(iParam0, 0x00000000, 0x00000000);
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0x00000000)
		{
			func_51(0x00000008, 0x00000000);
			iLocal_57[0x00000003] = 0x00000001;
			if (iParam0->f_19B != 0x00000009)
			{
				if (iParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_336(iParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_257(iParam0->f_3, "TAXI_FAIL", iParam0->f_91, 0x00000004);
			}
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 0x00000001)
		{
			func_51(0x00000008, 0x00000000);
			iLocal_57[0x00000003] = 0x00000001;
			if (iParam0->f_19B != 0x00000009)
			{
				if (iParam0->f_73)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_336(iParam0, &vVar0);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_257(iParam0->f_3, "TAXI_FAIL", iParam0->f_91, 0x00000004);
			}
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 0x00000013)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_332(&vVar0);
			func_331(&(iParam0->f_F4), "OJTXAUD", &vVar0, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 0x00000014)
		{
			if (iParam0->f_73)
			{
				StringConCat(&vVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_fail1", 24);
			}
			func_336(iParam0, &vVar0);
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (iParam0->f_19B != 0x00000009)
			{
				if (iParam2 != 0x00000015)
				{
					StringConCat(&vVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				if (iParam0->f_19A > 0x00000005)
				{
					func_336(iParam0, &vVar0);
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(iParam0->f_3))
			{
				func_257(iParam0->f_3, "TAXI_FAIL", iParam0->f_91, 0x00000004);
			}
			StringCopy(&(iParam0->f_82), "TAXI_OBJ_FAIL", 24);
			func_51(0x00000003, 0x00000000);
		}
		func_298(iParam0, 0x00000003, 0f, 0x00000001);
	}
}

int func_331(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_142(sParam2, iParam3, 0x00000000);
}

void func_332(char* sParam0)
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

void func_333(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		unk_0x11AD11297DC58CC7(uParam0->f_3, 0x00000000);
		unk_0xE910A68AA670B4AA(uParam0->f_3);
		unk_0xBAFED2F6486F771A(uParam0->f_3, 0x00000003, 0x00000000);
		unk_0xAFF39FB306F8E232(uParam0->f_3, 0x00000011, 0x00000001);
		unk_0xA3BF0AA5A2608191(uParam0->f_3);
		if ((func_209(uParam0->f_3, uParam0->f_1D, 0x00000001) <= 200f && !func_335(uParam0->f_1D)) && !bParam2)
		{
			func_334(uParam0);
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

void func_334(var uParam0)
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (func_40(func_41(), uParam0->f_1D, 0x00000000))
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

int func_335(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_336(var uParam0, char* sParam1)
{
	if (func_337(uParam0))
	{
		func_331(&(uParam0->f_F4), uParam0->f_90, sParam1, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
	}
}

int func_337(var uParam0)
{
	if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
	{
		if (func_172(unk_0x16F2683693E537C9(), uParam0->f_3, 0x00000001) < 40f && !unk_0x03068588A1FCED1A(uParam0->f_3))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_338(var uParam0)
{
	return uParam0->f_76;
}

void func_339()
{
	func_371(&Local_230);
	if (func_370(&Local_230, &Local_336))
	{
		switch (Local_336.f_1B)
		{
			case 0x00000000:
				if (Local_230.f_19A == 0x00000009)
				{
					if (!func_369(&Local_230))
					{
						if (func_368("TX_OBJ_GYB_DO") || unk_0xE4EDC4B0E92C078B(Local_230.f_9))
						{
							Local_336.f_1B++;
						}
						else if (func_367(&Local_230) != 0x0000000A)
						{
							func_230(&Local_230, 0x0000000A, 0x00000001, 0x00000000, 0x00000001);
						}
					}
				}
				break;
			
			case 0x00000001:
				if ((func_367(&Local_230) > 0x0000000A && func_367(&Local_230) != 0x0000000F) && !func_369(&Local_230))
				{
					func_230(&Local_230, 0x0000000F, 0x00000001, 0x00000000, 0x00000000);
					if (bLocal_335)
					{
					}
					func_304(&Local_230, 0x00000007);
				}
				break;
			
			case 0x00000002:
				if (((func_367(&Local_230) != 0x00000010 && !func_369(&Local_230)) && func_113(&Local_230, 0x00000012) > 2f) && !func_115())
				{
					func_230(&Local_230, 0x00000010, 0x00000001, 0x00000000, 0x00000000);
					if (bLocal_335)
					{
					}
				}
				break;
			
			case 0x00000003:
				if (func_113(&Local_230, 0x00000012) > unk_0x79833B02DBD2A244(2f, 7f))
				{
					if (!func_183(&Local_230))
					{
						func_366(&Local_230, 0x00000000);
						Local_336.f_1B++;
						if (bLocal_335)
						{
						}
					}
				}
				break;
			}
	}
	func_340(&Local_230, &uLocal_339, &Local_336, bLocal_335);
}

int func_340(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_348(uParam0, uParam1);
	if (((*uParam2 == 0xFFFFFFFF && uParam0->f_19A < 0x0000001D) && !uParam0->f_6D) && !func_305(uParam0, 0x00000002))
	{
		if (func_347(uParam1))
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
				if (!func_346(uParam0))
				{
					uParam2->f_7 = { func_345(uParam1) };
					func_331(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_7), 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					*uParam2 = 0x00000002;
					if (bParam3)
					{
					}
				}
				break;
			
			case 0x00000002:
				if (func_115())
				{
					uParam2->f_D = { func_233() };
					if (unk_0x7F8A39872A07D2CE(&(uParam2->f_D), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_167(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_343(uParam1);
					func_298(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0xFFFFFFFF;
					if (bParam3)
					{
					}
					return 0x00000001;
				}
				break;
			
			case 0x00000003:
				if (func_186(uParam0))
				{
					if (func_115())
					{
						func_298(uParam0, 0x00000011, 0f, 0x00000001);
						uParam2->f_1 = { func_342() };
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
				else if (func_115())
				{
					uParam2->f_13 = { func_160() };
				}
				else
				{
					func_167(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_343(uParam1);
					func_298(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0xFFFFFFFF;
					if (bParam3)
					{
					}
					return 0x00000001;
				}
				break;
			
			case 0x00000004:
				if (((!func_305(uParam0, 0x0000000E) && !func_115()) && !func_186(uParam0)) && func_113(uParam0, 0x00000012) > 1f)
				{
					func_298(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0x00000006;
					if (bParam3)
					{
					}
				}
				break;
			
			case 0x00000006:
				if (!func_115())
				{
					if (func_113(uParam0, 0x00000012) > 1f)
					{
						if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1)))
						{
							func_341(&(uParam0->f_F4), uParam0->f_90, &(uParam2->f_D), &(uParam2->f_1), 0x00000008, 0x00000000, 0x00000000);
							if (bParam3)
							{
							}
						}
						*uParam2 = 0x00000003;
					}
				}
				break;
			
			case 0x00000007:
				if (!func_115())
				{
					func_167(&(uParam2->f_1A), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_1B))));
					uParam2->f_1B++;
					func_343(uParam1);
					func_298(uParam0, 0x00000012, 0x00000000, 0x00000000);
					*uParam2 = 0xFFFFFFFF;
				}
				break;
			}
	}
	return 0x00000000;
}

int func_341(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(uParam0, 0x00000091, sParam1, iParam5, iParam6, 0x00000000);
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
	return func_142(sParam2, iParam4, 0x00000000);
}

struct<6> func_342()
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

void func_343(var uParam0)
{
	int iVar0;
	
	iVar0 = func_344(uParam0);
	if (iVar0 > 0xFFFFFFFF)
	{
		func_124(&((uParam0[iVar0 /*8*/])->f_7), 0x00000002);
		func_124(&((uParam0[iVar0 /*8*/])->f_7), 0x00000004);
		func_173(&((uParam0[iVar0 /*8*/])->f_7), 0x00000008);
		StringCopy(uParam0[iVar0 /*8*/], func_207(), 24);
	}
}

int func_344(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 0x00000004))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

struct<6> func_345(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 0x00000002))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_173(&((uParam0[iVar0 /*8*/])->f_7), 0x00000004);
		}
		iVar0++;
	}
	return Var1;
}

int func_346(var uParam0)
{
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			if (func_188("TX_OBJ_NEX_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (func_188("TX_OBJ_TIE_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000002:
			if (func_188("TX_OBJ_DL_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000003:
			if ((func_188("TX_OBJ_GYB_DO", 0x00000000, 0x00000000) || func_188("TAXI_OBJ_GYB", 0x00000000, 0x00000000)) || func_188("TAXI_OBJ_GYB_2", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			if (func_188("TX_OBJ_TTB_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000005:
			if ((func_188("TX_OBJ_CYI_DO", 0x00000000, 0x00000000) || func_188("TAXI_OBJ_CYI_01", 0x00000000, 0x00000000)) || func_188("TAXI_OBJ_CYI_02", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000006:
			if (((func_188("TX_OBJ_GYN_DO", 0x00000000, 0x00000000) || func_188("TAXI_OBJ_GYN", 0x00000000, 0x00000000)) || func_188("TAXI_OBJ_GYN_TG", 0x00000000, 0x00000000)) || func_188("TAXI_OBJ_GYN_GF", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000007:
			if ((func_188("TAXI_OBJ_CC1", 0x00000000, 0x00000000) || func_188("TAXI_OBJ_CC2", 0x00000000, 0x00000000)) || func_188("TAXI_OBJ_CC3", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000008:
			if ((func_188("TAXI_OBJ_FTC1", 0x00000000, 0x00000000) || func_188("TAXI_OBJ_FTC2", 0x00000000, 0x00000000)) || func_188("TAXI_OBJ_FTC3", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
		
		case 0x00000009:
			if (func_188("TX_OBJ_PRO_DO", 0x00000000, 0x00000000))
			{
				return 0x00000001;
			}
			break;
	}
	return (((((func_188("TAXI_OBJ_GETRUN", 0x00000000, 0x00000000) || func_188("TAXI_OBJ_DRIVE", 0x00000000, 0x00000000)) || func_188("TAXI_OBJ_RETURN", 0x00000000, 0x00000000)) || func_188("TAXI_OBJ_POL", 0x00000000, 0x00000000)) || func_188("TAXI_OBJ_RUNOUT", 0x00000000, 0x00000000)) || func_188("TAXI_OBJ_POL", 0x00000000, 0x00000000));
}

int func_347(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_22((uParam0[iVar0 /*8*/])->f_7, 0x00000002))
		{
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

void func_348(var uParam0, var uParam1)
{
	vector3 vVar0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	
	if (func_346(uParam0))
	{
	}
	else if (!uParam0->f_6E)
	{
	}
	else if (func_305(uParam0, 0x0000000E))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_367(uParam0))
		{
			case 0x00000037:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_5D), 0x00000003, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_364(0x00000004, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000002:
				if (!func_115())
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
						func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					}
				}
				else
				{
					func_360(uParam0, vVar0, func_362(uParam0, 0x00000002));
				}
				if (func_22(uParam0->f_62, 0x00000004))
				{
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_261(uParam0, 0x00000000, 0x00000000);
				}
				func_197(uParam0, &(uParam0->f_62), 0x00000004, 0x00000003);
				break;
			
			case 0x00000003:
				if (func_113(uParam0, 0x00000010) > 1f)
				{
					func_199(0x00000001);
					if (uParam0->f_19B == 0x00000009)
					{
						func_158("TAXI_OBJ_RETURN", 0x00001D4C, 0x00000001);
					}
					else
					{
						func_158("TAXI_VIP_RETURN", 0x00001D4C, 0x00000001);
					}
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_261(uParam0, 0x00000000, 0x00000000);
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
					func_363(uParam0, &vVar0, 0x00000000, 0x00000001, 0x00000008);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_257(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_91, 0x00000004);
				}
				break;
		}
	}
	else if ((func_113(uParam0, 0x00000010) > func_134(uParam0->f_19B == 0x00000000, 1f, 4f) && !uParam0->f_8E) && (((uParam0->f_19B == 0x00000000 || uParam0->f_19B == 0x00000001) && !func_115()) || (uParam0->f_19B != 0x00000000 && uParam0->f_19B != 0x00000001)))
	{
		StringCopy(&vVar0, uParam0->f_8F, 24);
		switch (func_367(uParam0))
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
				func_363(uParam0, &vVar0, 0x00000001, 0x00000000, 0x00000008);
				break;
			
			case 0x00000038:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_5D), 0x00000003, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_364(0x00000004, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000000:
				if (uParam0->f_19B == 0x00000009)
				{
					func_331(&(uParam0->f_F4), "OJTXAUD", "OJTX_PRO_CON", 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				func_230(uParam0, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000001:
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_230(uParam0, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				break;
			
			case 0x00000004:
				StringConCat(&vVar0, "_hail1", 24);
				cVar1 = { vVar0 };
				if (!func_22(uParam0->f_2C, 0x00000080))
				{
					if ((uParam0->f_19B == 0x00000000 || uParam0->f_19B == 0x00000001) || uParam0->f_19B == 0x00000004)
					{
						func_365(&(uParam0->f_63), 0x00000004, &cVar1, 0x00000000, 0x00000001, 0x00000000);
						func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
					}
					else
					{
						func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					}
				}
				func_298(uParam0, 0x00000010, 4f, 0x00000000);
				uParam0->f_8D = 0x00000001;
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000005:
				if (uParam0->f_19B == 0x00000007)
				{
					func_158("TAXI_OBJ_GPCKUP", 0x00001D4C, 0x00000001);
				}
				else
				{
					func_158("TAXI_OBJ_PICKUP", 0x00001D4C, 0x00000001);
				}
				uParam0->f_8D = 0x00000001;
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000008:
				StringConCat(&vVar0, "_obj1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				if (uParam0->f_19B != 0x00000007 && uParam0->f_19B != 0x00000004)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						uParam0->f_9 = func_359(uParam0->f_11, 0x00000001);
					}
					else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0x00000000)
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x000000FF);
						unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_11);
						unk_0x661342B9651D16E2(uParam0->f_9, 0x00000001);
					}
				}
				func_230(uParam0, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
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
				func_232(&vVar0);
				if (uParam0->f_19B != 0x00000009)
				{
					func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				else
				{
					func_257(uParam0->f_3, "TAXI_START", uParam0->f_91, 0x00000004);
				}
				if (uParam0->f_19B != 0x00000007 && uParam0->f_19B != 0x00000004)
				{
					if (!unk_0xE4EDC4B0E92C078B(uParam0->f_9))
					{
						uParam0->f_9 = func_359(uParam0->f_11, 0x00000001);
					}
					else if (unk_0x4FA921CB56EDB0F8(uParam0->f_9) == 0x00000000)
					{
						unk_0x7F010F50CE03A8AF(uParam0->f_9, 0x000000FF);
						unk_0x2F9282246F89FFD1(uParam0->f_9, uParam0->f_11);
						unk_0x661342B9651D16E2(uParam0->f_9, 0x00000001);
					}
				}
				func_230(uParam0, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_1A1 = 0x0000000A;
				break;
			
			case 0x00000007:
				StringConCat(&vVar0, "_dest2", 24);
				func_358(uParam0, 0x02000000, vVar0, "", 0x00000001, 0x00000008);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_230(uParam0, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_1A1 = 0x0000000A;
				break;
			
			case 0x0000000A:
				if (!func_115())
				{
					func_357(uParam0, 0x00000000);
					func_173(&(uParam0->f_2C), 0x00000004);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_230(uParam0, 0x0000000D, 0x00000000, 0x00000000, 0x00000000);
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
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_298(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000000F:
				if (func_113(uParam0, 0x0000000B) > uParam0->f_24)
				{
					if (uParam0->f_19B == 0x00000000)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_232(&vVar0);
					}
					func_355(vVar0, uParam1);
					func_173(&(uParam0->f_51), 0x04000000);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_298(uParam0, 0x0000000B, 0x00000000, 0x00000000);
					func_261(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000010:
				if (func_113(uParam0, 0x0000000B) > uParam0->f_24)
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
							func_232(&vVar0);
						}
					}
					func_355(vVar0, uParam1);
					func_298(uParam0, 0x0000000B, 0x00000000, 0x00000000);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_261(uParam0, 0x00000000, 0x00000000);
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
					func_232(&vVar0);
				}
				func_355(vVar0, uParam1);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
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
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
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
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000014:
				StringConCat(&vVar0, "_dest2b", 24);
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_298(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				func_173(&(uParam0->f_52), 0x00040000);
				uParam0->f_24 = 20f;
				break;
			
			case 0x00000017:
				StringConCat(&vVar0, "_seePt1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_230(uParam0, 0x00000018, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000018:
				uParam0->f_1A1 = 0x00000018;
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005A:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 0x00000001, 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0x00000001, 0x00000000, 0x00000008);
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
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000005B:
				StringConCat(&vVar0, "_ig1c", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
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
					func_354(&(uParam0->f_5A), 0x00000008, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				else
				{
					func_354(&(uParam0->f_5A), 0x00000003, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				func_355(vVar0, uParam1);
				func_364(0x00000000, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_298(uParam0, 0x00000006, 0f, 0x00000001);
				func_261(uParam0, 0x00000000, 0x00000000);
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
					func_354(&(uParam0->f_59), 0x00000008, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				else
				{
					func_354(&(uParam0->f_59), 0x00000003, &vVar0, &iVar5, 0x00000001, 0x00000000);
				}
				func_355(vVar0, uParam1);
				func_364(0x00000000, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000001);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_298(uParam0, 0x00000006, 0f, 0x00000001);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000000C:
				func_158("TAXI_OBJ_GYB", 0x00000DAC, 0x00000001);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000000B:
				if (uParam0->f_19A == 0x0000000C || uParam0->f_19A == 0x00000012)
				{
					func_158("TAXI_OBJ_GYN_TG", 0x00001D4C, 0x00000001);
				}
				else if (uParam0->f_19A < 0x00000015)
				{
					func_158("TAXI_OBJ_GYN", 0x00001D4C, 0x00000001);
				}
				else
				{
					func_158("TAXI_OBJ_GYN_GF", 0x00001D4C, 0x00000001);
				}
				uParam0->f_1A1 = 0x0000000B;
				uParam0->f_8D = 0x00000001;
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
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
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_230(uParam0, 0x0000001D, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001D:
				if (!func_22(uParam0->f_62, 0x10000000))
				{
					func_158("TAXI_OBJ_CYI_01", 0x00001D4C, 0x00000001);
					func_173(&(uParam0->f_62), 0x10000000);
				}
				uParam0->f_1A1 = 0x0000001D;
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001E:
				StringConCat(&vVar0, "_rCar1", 24);
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000001F:
				StringConCat(&vVar0, "_rCar2", 24);
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000020:
				StringConCat(&vVar0, "_rCar3", 24);
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				uParam0->f_7C = { vVar0 };
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000021:
				func_158("TAXI_OBJ_CYI_02", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x00000021;
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000022:
				if (!func_22(uParam0->f_52, 0x00002000))
				{
					if (func_113(uParam0, 0x0000000B) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_232(&vVar0);
						if (uParam0->f_19B == 0x00000005)
						{
							func_355(vVar0, uParam1);
						}
						else
						{
							func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
						}
						func_173(&(uParam0->f_52), 0x00002000);
						func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
						func_298(uParam0, 0x0000000B, 0x00000000, 0x00000000);
						func_261(uParam0, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x00000023:
				if (!func_22(uParam0->f_52, 0x00004000))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_232(&vVar0);
					func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					func_173(&(uParam0->f_52), 0x00004000);
				}
				break;
			
			case 0x00000024:
				if (!func_22(uParam0->f_52, 0x00008000))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_232(&vVar0);
					func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
					func_173(&(uParam0->f_52), 0x00008000);
				}
				break;
			
			case 0x00000025:
				StringConCat(&vVar0, "_done1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_230(uParam0, 0x0000002E, 0x00000001, 0x00000000, 0x00000000);
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
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_230(uParam0, 0x0000008B, 0x00000001, 0x00000000, 0x00000000);
				uParam0->f_1A1 = 0x0000008B;
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000008B:
				func_158("TAXI_OBJ_FTC2", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000000D;
				func_230(uParam0, 0x0000000D, 0x00000000, 0x00000000, 0x00000000);
				break;
			
			case 0x00000026:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000078);
				if (!func_22(uParam0->f_52, 0x10000000))
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
					func_173(&(uParam0->f_52), 0x10000000);
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
				func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000027:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar1 = { vVar0 };
				iVar4 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000064);
				if (!func_22(uParam0->f_52, 0x10000000))
				{
					if (iVar4 < 0x00000032)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					func_173(&(uParam0->f_52), 0x10000000);
				}
				else if (iVar4 < 0x00000032)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000029:
				StringConCat(&vVar0, "_dr2P", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002A:
				StringConCat(&vVar0, "_dr2N", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000028:
				StringConCat(&vVar0, "_dOff2", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_230(uParam0, 0x0000002C, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002C:
				func_158("TAXI_OBJ_CC2", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000002C;
				func_261(uParam0, 0x00000000, 0x00000000);
				func_230(uParam0, 0x00000061, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002B:
				StringConCat(&vVar0, "_dOff3", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_230(uParam0, 0x0000002D, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002D:
				if (!func_115())
				{
					func_158("TAXI_OBJ_CC3", 0x00001D4C, 0x00000001);
					uParam0->f_1A1 = 0x0000002D;
					func_261(uParam0, 0x00000000, 0x00000000);
					func_230(uParam0, 0x00000062, 0x00000001, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x0000002E:
				func_158("TAXI_OBJ_FTC3", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000002E;
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000015:
				if (!func_22(uParam0->f_51, 0x00000001))
				{
					func_353(uParam0, 0x00000001, vVar0, "_sick1", 0x00000008);
					func_124(&(uParam0->f_51), 0x00000002);
				}
				else if (!func_22(uParam0->f_51, 0x00000002))
				{
					func_353(uParam0, 0x00000002, vVar0, "_sick2", 0x00000008);
					func_124(&(uParam0->f_51), 0x00000001);
				}
				func_364(0x0000000C, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000016:
				if (!func_22(uParam0->f_52, 0x00200000))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_22(uParam0->f_52, 0x00400000))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_173(&(uParam0->f_51), 0x00200000);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_364(0x00000011, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000001);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003D:
				StringConCat(&vVar0, "_Puke1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_364(0x00000012, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				break;
			
			case 0x0000003F:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_364(0x00000014, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003E:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_364(0x00000013, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				break;
			
			case 0x00000040:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000047:
				if (!func_22(uParam0->f_51, 0x00000004))
				{
					func_353(uParam0, 0x00000004, vVar0, "_turns1", 0x00000008);
				}
				else if (!func_22(uParam0->f_51, 0x00000008))
				{
					func_353(uParam0, 0x00000008, vVar0, "_turns2", 0x00000008);
				}
				else
				{
					func_353(uParam0, 0x00000008, vVar0, "_turns3", 0x00000008);
					func_124(&(uParam0->f_51), 0x00000004);
					func_124(&(uParam0->f_51), 0x00000008);
				}
				func_364(0x0000000D, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000048:
				if (func_352(uParam0))
				{
					func_360(uParam0, vVar0, func_362(uParam0, 0x00000048));
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_257(uParam0->f_3, "CRASH_GENERIC", uParam0->f_91, 0x00000004);
					}
				}
				else if (uParam0->f_19B == 0x00000001)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar1 = { vVar0 };
					func_365(&(uParam0->f_5F), 0x00000005, &cVar1, 0x00000001, 0x00000000, 0x00000001);
					func_331(&(uParam0->f_F4), uParam0->f_90, &cVar1, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar1 = { vVar0 };
					if (uParam0->f_19B == 0x00000000)
					{
						func_365(&(uParam0->f_5F), 0x00000008, &cVar1, 0x00000001, 0x00000001, 0x00000000);
					}
					else
					{
						func_365(&(uParam0->f_5F), 0x00000005, &cVar1, 0x00000001, 0x00000001, 0x00000000);
					}
					func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				}
				func_364(0x00000002, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000049:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000004B:
				if (!func_22(uParam0->f_53, 0x00000080))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_173(&(uParam0->f_53), 0x00000080);
					func_124(&(uParam0->f_53), 0x00000100);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_22(uParam0->f_53, 0x00000100))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_173(&(uParam0->f_53), 0x00000100);
					func_124(&(uParam0->f_53), 0x00000200);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_22(uParam0->f_53, 0x00000200))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_173(&(uParam0->f_53), 0x00000200);
					func_124(&(uParam0->f_53), 0x00000080);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000004C:
				if (uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000)
				{
					bVar6 = 0x00000001;
				}
				if (!func_22(uParam0->f_53, 0x00000001))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar6)
					{
						func_232(&vVar0);
					}
					func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_173(&(uParam0->f_53), 0x00000001);
					func_124(&(uParam0->f_53), 0x00000002);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_22(uParam0->f_53, 0x00000002))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar6)
					{
						func_232(&vVar0);
					}
					func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_173(&(uParam0->f_53), 0x00000002);
					if (uParam0->f_19B == 0x00000000)
					{
						func_124(&(uParam0->f_53), 0x00000004);
					}
					else
					{
						func_124(&(uParam0->f_53), 0x00000001);
					}
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_22(uParam0->f_53, 0x00000004))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar6)
					{
						func_232(&vVar0);
					}
					func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_173(&(uParam0->f_53), 0x00000004);
					func_124(&(uParam0->f_53), 0x00000001);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				func_364(0x0000000B, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000004F:
				if (uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000)
				{
					bVar6 = 0x00000001;
				}
				if (!func_22(uParam0->f_51, 0x00001000))
				{
					func_358(uParam0, 0x00001000, vVar0, "_sideW1", bVar6, 0x00000008);
				}
				else if (!func_22(uParam0->f_51, 0x00002000))
				{
					func_358(uParam0, 0x00002000, vVar0, "_sideW2", bVar6, 0x00000008);
				}
				func_364(0x0000000F, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000050:
				if (uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000)
				{
					bVar6 = 0x00000001;
				}
				if (!func_22(uParam0->f_51, 0x00004000))
				{
					func_358(uParam0, 0x00004000, vVar0, "_opLne1", bVar6, 0x00000008);
				}
				else if (!func_22(uParam0->f_51, 0x00008000))
				{
					func_358(uParam0, 0x00008000, vVar0, "_opLne2", bVar6, 0x00000008);
				}
				func_364(0x0000000E, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000053:
				if (uParam0->f_19B == 0x00000000)
				{
					if (!func_22(uParam0->f_52, 0x00000008))
					{
						func_351(uParam0, 0x00000008, vVar0, "_bored1", 0x00000008, 0x00000000);
					}
					else if (!func_22(uParam0->f_52, 0x00000010))
					{
						func_351(uParam0, 0x00000010, vVar0, "_bored2", 0x00000008, 0x00000000);
					}
					else if (!func_22(uParam0->f_52, 0x00000020))
					{
						func_351(uParam0, 0x00000020, vVar0, "_bored3", 0x00000008, 0x00000000);
					}
					func_364(0x00000009, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
					func_261(uParam0, 0x00000000, 0x00000000);
				}
				if (uParam0->f_19B == 0x00000001)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar1 = { vVar0 };
					func_365(&(uParam0->f_5D), 0x00000006, &cVar1, 0x00000000, 0x00000001, 0x00000000);
					func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
					func_364(0x00000009, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_261(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x0000005C:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_60), 0x00000002, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_364(0x00000009, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005D:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_61), 0x00000002, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_364(0x0000000C, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000051:
				if (!func_22(uParam0->f_51, 0x00010000))
				{
					func_358(uParam0, 0x00010000, vVar0, "_runLit1", 0x00000001, 0x00000008);
				}
				else if (!func_22(uParam0->f_51, 0x00020000))
				{
					func_358(uParam0, 0x00020000, vVar0, "_runLit2", 0x00000001, 0x00000008);
				}
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000052:
				if (func_352(uParam0))
				{
					func_360(uParam0, vVar0, func_362(uParam0, 0x00000052));
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_257(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_91, 0x00000004);
					}
				}
				else if (!func_22(uParam0->f_53, 0x00000008))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_232(&vVar0);
					func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_173(&(uParam0->f_53), 0x00000008);
					func_124(&(uParam0->f_53), 0x00000010);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_22(uParam0->f_53, 0x00000010))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_232(&vVar0);
					func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_173(&(uParam0->f_53), 0x00000010);
					func_124(&(uParam0->f_53), 0x00000020);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_22(uParam0->f_53, 0x00000020))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_232(&vVar0);
					func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_173(&(uParam0->f_53), 0x00000020);
					if (uParam0->f_19B == 0x00000000)
					{
						func_124(&(uParam0->f_53), 0x00000040);
					}
					else
					{
						func_124(&(uParam0->f_53), 0x00000008);
					}
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				else if (!func_22(uParam0->f_53, 0x00000040))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_232(&vVar0);
					func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
					func_173(&(uParam0->f_53), 0x00000040);
					func_124(&(uParam0->f_53), 0x00000008);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				}
				func_364(0x00000001, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000041:
				if (!func_115())
				{
					if (uParam0->f_73)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_363(uParam0, &vVar0, 0x00000000, 0x00000001, 0x00000008);
				}
				else
				{
					func_360(uParam0, vVar0, func_362(uParam0, 0x00000041));
					func_261(uParam0, 0x00000000, 0x00000000);
				}
				uParam0->f_6B++;
				break;
			
			case 0x00000042:
				if (!func_115())
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
					func_363(uParam0, &vVar0, 0x00000000, 0x00000001, 0x00000008);
				}
				else
				{
					func_360(uParam0, vVar0, func_362(uParam0, 0x00000042));
					func_261(uParam0, 0x00000000, 0x00000000);
				}
				uParam0->f_6B++;
				break;
			
			case 0x0000000D:
				if (uParam0->f_19B == 0x00000008)
				{
					if (!uParam0->f_6D && !func_115())
					{
						switch (uParam0->f_19E)
						{
							case 0x00000003:
								StringConCat(&vVar0, "_warnC1", 24);
								func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
							
							case 0x00000006:
								StringConCat(&vVar0, "_warnF1", 24);
								func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
							
							case 0x00000001:
								StringConCat(&vVar0, "_far1", 24);
								func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								func_364(0x00000015, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
								break;
							
							case 0x00000002:
								StringConCat(&vVar0, "_close1", 24);
								func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								func_364(0x00000016, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
								break;
							
							case 0x0000000A:
								StringConCat(&vVar0, "_hit1", 24);
								func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
							
							case 0x00000008:
								StringConCat(&vVar0, "_good1", 24);
								cVar1 = { vVar0 };
								func_365(&(uParam0->f_5D), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000000);
								func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
								func_364(0x00000017, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0x00000000);
								func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
								func_261(uParam0, 0x00000000, 0x00000000);
								break;
							
							case 0x00000009:
								if (!iLocal_58)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar1 = { vVar0 };
									func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
									func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
									func_298(uParam0, 0x0000000B, 0x00000000, 0x00000000);
									func_261(uParam0, 0x00000000, 0x00000000);
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
									func_232(&vVar0);
									func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
									func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
									func_298(uParam0, 0x0000000B, 0x00000000, 0x00000000);
									func_261(uParam0, 0x00000000, 0x00000000);
									iLocal_58 = 0x00000000;
								}
								break;
							
							case 0x00000007:
								StringConCat(&vVar0, "_done1", 24);
								func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
								break;
						}
						func_230(uParam0, 0x0000008F, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x0000004E:
				StringConCat(&vVar0, "_speed1", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_57), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000000);
				func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_364(0x0000000A, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000019:
				if (!func_22(uParam0->f_52, 0x00000001))
				{
					func_351(uParam0, 0x00000001, vVar0, "_close1", 0x00000008, 0x00000000);
				}
				else if (!func_22(uParam0->f_52, 0x00000002))
				{
					func_351(uParam0, 0x00000002, vVar0, "_close2", 0x00000008, 0x00000000);
				}
				else if (!func_22(uParam0->f_52, 0x00000004))
				{
					func_351(uParam0, 0x00000004, vVar0, "_close3", 0x00000008, 0x00000000);
				}
				func_261(uParam0, 0x00000000, 0x00000000);
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
				func_365(&(uParam0->f_56), 0x00000004, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_257(uParam0->f_3, "TAXI_STOPPED", uParam0->f_91, 0x00000004);
				}
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_364(0x00000005, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000004A:
				if (func_352(uParam0))
				{
					func_360(uParam0, vVar0, func_362(uParam0, 0x0000004A));
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_257(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_91, 0x00000004);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_350(uParam0, vVar0, 0x00000008);
				}
				func_364(0x00000003, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000046:
				if (!func_22(uParam0->f_53, 0x00000400))
				{
					func_173(&(uParam0->f_53), 0x00000400);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
					StringConCat(&vVar0, "_swrv1", 24);
					func_232(&vVar0);
					func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (!func_22(uParam0->f_53, 0x00000800))
				{
					func_173(&(uParam0->f_53), 0x00000800);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
					StringConCat(&vVar0, "_swrv2", 24);
					func_232(&vVar0);
					func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				else if (!func_22(uParam0->f_53, 0x00001000))
				{
					func_173(&(uParam0->f_53), 0x00001000);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
					StringConCat(&vVar0, "_swrv3", 24);
					func_232(&vVar0);
					func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
				}
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000045:
				if (!func_22(uParam0->f_52, 0x00000400))
				{
					func_351(uParam0, 0x00000400, vVar0, "_rvrs1", 0x00000008, 0x00000001);
					func_124(&(uParam0->f_52), 0x00000800);
				}
				else if (!func_22(uParam0->f_52, 0x00000800))
				{
					func_351(uParam0, 0x00000800, vVar0, "_rvrs2", 0x00000008, 0x00000001);
				}
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000043:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_58), 0x00000004, &cVar1, 0x00000000, 0x00000001, 0x00000000);
				func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_364(0x00000010, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), cVar1, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000044:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000031:
				StringConCat(&vVar0, "_losPol1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_230(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
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
					func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				else if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
				{
					func_257(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_91, 0x00000004);
				}
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000033:
				if (func_352(uParam0))
				{
					if (uParam0->f_19B == 0x00000002)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar1 = { vVar0 };
						cVar1 = { vVar0 };
						func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
						func_230(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
						func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
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
						func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
						func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar1 = { vVar0 };
					func_365(&(uParam0->f_55), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000000);
					func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
					func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
					func_261(uParam0, 0x00000000, 0x00000000);
				}
				break;
			
			case 0x00000035:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_364(0x00000008, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_298(uParam0, 0x0000000A, 0f, 0x00000001);
				break;
			
			case 0x00000034:
				if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) >= 0x00000001)
				{
					func_158("TAXI_OBJ_POL", 0x00001D4C, 0x00000001);
					uParam0->f_1A1 = 0x00000034;
				}
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000036:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000054:
				if (!func_22(uParam0->f_51, 0x00040000))
				{
					func_358(uParam0, 0x00040000, vVar0, "_rdCh1", 0x00000001, 0x00000008);
				}
				else if (!func_22(uParam0->f_51, 0x00100000))
				{
					if (uParam0->f_19B == 0x00000000 || uParam0->f_19B == 0x00000001)
					{
						func_358(uParam0, 0x00100000, vVar0, "_rdCh2", 0x00000001, 0x00000008);
					}
					else
					{
						func_358(uParam0, 0x00100000, vVar0, "_rdCh2", 0x00000000, 0x00000008);
					}
				}
				func_364(0x00000007, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000055:
				if (!func_22(uParam0->f_52, 0x04000000))
				{
					if (uParam0->f_1A2.f_6)
					{
						func_349(uParam0, 0x04000000, vVar0, "_rdLk1", 0x00000001, 0x00000007);
					}
				}
				else if (!func_22(uParam0->f_52, 0x08000000))
				{
					func_349(uParam0, 0x08000000, vVar0, "_rdFv1", 0x00000000, 0x00000007);
				}
				func_364(0x00000006, &(uParam0->f_39), &(uParam0->f_37), &(uParam0->f_7C), vVar0, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000056:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000057:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar1 = { vVar0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_1A2.f_3, 24);
				func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000064:
				func_158("TAXI_OBJ_GYB_2", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x00000064;
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000002F:
				if (uParam0->f_19B == 0x00000001)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				break;
			
			case 0x00000065:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000000)
				{
					func_232(&vVar0);
				}
				func_173(&(uParam0->f_51), 0x00200000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				break;
			
			case 0x00000066:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000000)
				{
					func_232(&vVar0);
				}
				func_173(&(uParam0->f_51), 0x00200000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
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
					func_232(&vVar0);
				}
				func_173(&(uParam0->f_51), 0x00200000);
				if (uParam0->f_19B != 0x00000009)
				{
					func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				break;
			
			case 0x00000061:
				if (!func_22(uParam0->f_52, 0x00010000))
				{
					if (func_113(uParam0, 0x0000000B) > uParam0->f_24)
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
						func_232(&vVar0);
						func_355(vVar0, uParam1);
						func_173(&(uParam0->f_52), 0x00010000);
						func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
						func_298(uParam0, 0x0000000B, 0x00000000, 0x00000000);
						func_261(uParam0, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x00000062:
				if (!func_22(uParam0->f_52, 0x00020000))
				{
					if (func_113(uParam0, 0x0000000B) > uParam0->f_24)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_232(&vVar0);
						func_355(vVar0, uParam1);
						func_173(&(uParam0->f_52), 0x00020000);
						func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
						func_298(uParam0, 0x0000000B, 0x00000000, 0x00000000);
						func_261(uParam0, 0x00000000, 0x00000000);
					}
				}
				break;
			
			case 0x00000063:
				if (!func_22(uParam0->f_52, 0x00800000))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_173(&(uParam0->f_52), 0x00800000);
				}
				else if (!func_22(uParam0->f_52, 0x01000000))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_173(&(uParam0->f_52), 0x01000000);
				}
				else if (!func_22(uParam0->f_52, 0x02000000))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_173(&(uParam0->f_52), 0x02000000);
				}
				func_355(vVar0, uParam1);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003A:
				if (uParam0->f_19B == 0x00000006)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar1 = { vVar0 };
					func_365(&(uParam0->f_5D), 0x00000006, &cVar1, 0x00000001, 0x00000001, 0x00000001);
					func_232(&vVar0);
					func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				}
				else if (uParam0->f_19B == 0x00000008)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				}
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005F:
				StringConCat(&vVar0, "_wndw2", 24);
				func_355(vVar0, uParam1);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_298(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000005E:
				StringConCat(&vVar0, "_wndw0", 24);
				func_355(vVar0, uParam1);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_298(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000060:
				StringConCat(&vVar0, "_wndw1", 24);
				func_355(vVar0, uParam1);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_298(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000071:
				StringConCat(&vVar0, "_csite1", 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000077:
				StringConCat(&vVar0, "_fair1", 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000073:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_5B), 0x00000005, &cVar1, 0x00000001, 0x00000001, 0x00000000);
				func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000074:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar1 = { vVar0 };
				func_365(&(uParam0->f_5C), 0x00000005, &cVar1, 0x00000001, 0x00000001, 0x00000000);
				func_141(&(uParam0->f_F4), uParam0->f_90, &vVar0, &cVar1, 0x00000008, 0x00000000, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000072:
				StringConCat(&vVar0, "_goons1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000003B:
				StringConCat(&vVar0, "_oRun1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000075:
				StringConCat(&vVar0, "_gotG1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000076:
				StringConCat(&vVar0, "_getA1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000078:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000079:
				StringConCat(&vVar0, "_grl1", 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007A:
				StringConCat(&vVar0, "_figt1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007B:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007C:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007D:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007E:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x0000007F:
				StringConCat(&vVar0, "_aKill1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000081:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000082:
				StringConCat(&vVar0, "_gDest1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_230(uParam0, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000080:
				StringConCat(&vVar0, "_gKO1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000084:
				StringConCat(&vVar0, "_gThank1", 24);
				func_173(&(uParam0->f_51), 0x00200000);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000083:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_232(&vVar0);
				func_355(vVar0, uParam1);
				func_173(&(uParam0->f_51), 0x04000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_298(uParam0, 0x0000000B, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000003C:
				StringConCat(&vVar0, "_cash1", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				break;
			
			case 0x00000069:
				if (!func_22(uParam0->f_51, 0x02000000) && uParam0->f_19B != 0x00000009)
				{
					func_358(uParam0, 0x02000000, vVar0, "_noPay1", 0x00000001, 0x00000008);
				}
				else if (uParam0->f_19B == 0x00000009)
				{
					if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
					{
						func_257(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_91, 0x00000004);
					}
				}
				func_230(uParam0, 0x0000006C, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006A:
				StringConCat(&vVar0, "_foot", 24);
				func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006B:
				if (!func_22(uParam0->f_51, 0x10000000))
				{
					func_358(uParam0, 0x10000000, vVar0, "_kPay1", 0x00000001, 0x00000008);
				}
				func_230(uParam0, 0x00000034, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006C:
				func_158("TAXI_OBJ_RUNOUT", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000006C;
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006D:
				if (!func_22(uParam0->f_51, 0x00400000))
				{
					if (uParam0->f_19B == 0x00000002 || uParam0->f_19B == 0x00000006)
					{
						func_358(uParam0, 0x00400000, vVar0, "_mPay1", 0x00000000, 0x00000008);
					}
					else if (uParam0->f_19B == 0x00000009)
					{
						if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
						{
							func_257(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_91, 0x00000004);
						}
					}
					else
					{
						func_358(uParam0, 0x00400000, vVar0, "_mPay1", 0x00000001, 0x00000008);
					}
				}
				func_230(uParam0, 0x0000006F, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006F:
				func_158("TAXI_OBJ_GETRUN", 0x00001D4C, 0x00000001);
				uParam0->f_1A1 = 0x0000006F;
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000006E:
				StringConCat(&vVar0, "_runoff", 24);
				func_331(&(uParam0->f_F4), uParam0->f_90, &vVar0, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
				func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000008D:
				if (!func_22(uParam0->f_51, 0x01000000))
				{
					func_358(uParam0, 0x01000000, vVar0, "_ret1", 0x00000001, 0x00000008);
				}
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000058:
				func_158("TAXI_TIEFLEE", 0x00001D4C, 0x00000001);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000039:
				if (!func_22(uParam0->f_62, 0x20000000))
				{
					func_158("TAXI_OBJ_CYI_1B", 0x00001D4C, 0x00000001);
					func_173(&(uParam0->f_62), 0x20000000);
				}
				uParam0->f_1A1 = 0x00000039;
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000068:
				StringConCat(&vVar0, "_joke1", 24);
				func_232(&vVar0);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
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
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x0000008C:
				StringConCat(&vVar0, "_shout", 24);
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_261(uParam0, 0x00000000, 0x00000000);
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
				func_363(uParam0, &vVar0, 0x00000000, 0x00000000, 0x00000008);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			
			case 0x00000085:
				StringConCat(&vVar0, "_getCar", 24);
				func_363(uParam0, &vVar0, 0x00000001, 0x00000000, 0x00000008);
				func_230(uParam0, 0x00000086, 0x00000001, 0x00000000, 0x00000000);
				break;
			
			case 0x00000086:
				func_158("TX_VIP", 0x00001D4C, 0x00000000);
				uParam0->f_1A1 = 0x00000086;
				func_230(uParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_261(uParam0, 0x00000000, 0x00000000);
				break;
			}
	}
}

void func_349(var uParam0, int iParam1, vector3 vParam2, var uParam3, var uParam4, var uParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_173(&(uParam0->f_52), iParam1);
	func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_232(&vParam2);
	}
	func_331(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0x00000000, 0x00000000, 0x00000000);
}

void func_350(var uParam0, struct<6> Param1, int iParam2)
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_22(uParam0->f_52, 0x00000040))
	{
		func_173(&(uParam0->f_52), 0x00000040);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_22(uParam0->f_52, 0x00000080))
	{
		func_173(&(uParam0->f_52), 0x00000080);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x09AC81E49EA267F7(0x00000001, 0x00000003), 24);
	}
	func_141(&(uParam0->f_F4), uParam0->f_90, &Param1, &cVar0, iParam2, 0x00000000, 0x00000000);
	func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
}

void func_351(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7, bool bParam8)
{
	func_173(&(uParam0->f_52), iParam1);
	func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	if ((((uParam0->f_19B == 0x00000001 || uParam0->f_19B == 0x00000000) || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000008) || uParam0->f_19B == 0x00000002)
	{
		if (bParam8)
		{
			func_232(&vParam2);
		}
	}
	func_331(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0x00000000, 0x00000000, 0x00000000);
}

int func_352(var uParam0)
{
	if ((((((uParam0->f_19B == 0x00000002 || uParam0->f_19B == 0x00000003) || uParam0->f_19B == 0x00000004) || uParam0->f_19B == 0x00000005) || uParam0->f_19B == 0x00000006) || uParam0->f_19B == 0x00000007) || uParam0->f_19B == 0x00000008)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_353(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, int iParam7)
{
	func_173(&(uParam0->f_51), iParam1);
	func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	func_331(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam7, 0x00000000, 0x00000000, 0x00000000);
}

void func_354(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0x00000000;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_275(*uParam0, iVar1))
		{
			func_167(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_232(sParam2);
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

void func_355(char[24] cParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_356(uParam1);
	if (iVar0 > 0xFFFFFFFF)
	{
		*(uParam1[iVar0 /*8*/]) = { cParam0 };
		func_173(&((uParam1[iVar0 /*8*/])->f_7), 0x00000002);
	}
}

int func_356(var uParam0)
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

void func_357(var uParam0, bool bParam1)
{
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			if (bParam1)
			{
				func_158("TX_OBJ_NEX_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_158("TX_OBJ_NEX_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000001:
			if (bParam1)
			{
				func_158("TX_OBJ_TIE_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_158("TX_OBJ_TIE_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000002:
			if (bParam1)
			{
				func_158("TX_OBJ_DL_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_158("TX_OBJ_DL_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000003:
			if (bParam1)
			{
				func_158("TX_OBJ_GYB_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_158("TX_OBJ_GYB_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000004:
			if (bParam1)
			{
				func_158("TX_OBJ_TTB_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_158("TX_OBJ_TTB_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000005:
			if (bParam1)
			{
				func_158("TX_OBJ_CYI_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_158("TX_OBJ_CYI_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000006:
			if (bParam1)
			{
				func_158("TX_OBJ_GYN_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_158("TX_OBJ_GYN_DO", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000007:
			if (bParam1)
			{
				func_158("TX_OBJ_CC_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_158("TAXI_OBJ_CC1", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000008:
			if (bParam1)
			{
				func_158("TX_OBJ_FC_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_158("TAXI_OBJ_FTC1", 0x00001D4C, 0x00000001);
			}
			break;
		
		case 0x00000009:
			if (bParam1)
			{
				func_158("TX_OBJ_PRO_PU", 0x00001D4C, 0x00000001);
			}
			else
			{
				func_158("TX_OBJ_PRO_DO", 0x00001D4C, 0x00000001);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_8B = 0x00000001;
	}
}

void func_358(var uParam0, int iParam1, vector3 vParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char* sParam6, bool bParam7, int iParam8)
{
	func_173(&(uParam0->f_51), iParam1);
	func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
	StringConCat(&vParam2, sParam6, 24);
	if (bParam7)
	{
		func_232(&vParam2);
	}
	func_331(&(uParam0->f_F4), uParam0->f_90, &vParam2, iParam8, 0x00000000, 0x00000000, 0x00000000);
}

int func_359(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_134(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

void func_360(var uParam0, char[12] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char* sParam5)
{
	func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
	func_298(uParam0, 0x00000011, 0f, 0x00000001);
	StringConCat(&cParam1, sParam5, 24);
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_3))
	{
		unk_0x9A8EDAF1C0D299FF(uParam0->f_3, &cParam1, func_361(uParam0));
	}
}

char* func_361(var uParam0)
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

char* func_362(var uParam0, int iParam1)
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

int func_363(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_298(uParam0, 0x00000010, 0x00000000, 0x00000000);
	if (bParam3)
	{
		func_298(uParam0, 0x00000011, 0f, 0x00000001);
	}
	func_261(uParam0, iParam2, 0x00000000);
	return func_331(&(uParam0->f_F4), uParam0->f_90, sParam1, iParam4, 0x00000000, 0x00000000, 0x00000000);
}

void func_364(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam5)
{
	if (iParam0 == 0x00000000)
	{
		if (func_22(*uParam2, 0x00000002))
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
		if (func_22(*uParam2, 0x40000000))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000001)
	{
		if (func_22(*uParam2, 0x00000004))
		{
			if (!func_22(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000001);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_124(uParam2, 0x00001000);
			}
		}
		else if (func_22(*uParam2, 0x00000008))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000005)
	{
		if (func_22(*uParam2, 0x00000200))
		{
			if (!func_22(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000001);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_124(uParam2, 0x00001000);
			}
		}
	}
	else if (iParam0 == 0x00000002)
	{
		if (func_22(*uParam2, 0x00000010))
		{
			if (!func_22(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000001);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_124(uParam2, 0x00001000);
			}
		}
		else if (func_22(*uParam2, 0x00000020))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000003)
	{
		if (func_22(*uParam2, 0x00000040))
		{
			if (!func_22(*uParam2, 0x00001000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_124(uParam2, 0x00001000);
			}
		}
		else if (func_22(*uParam2, 0x00000080))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000004)
	{
		if (func_22(*uParam2, 0x00000100))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000006)
	{
		if (func_22(*uParam2, 0x00000400))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000007)
	{
		if (func_22(*uParam2, 0x00000800))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000009)
	{
		if (func_22(*uParam2, 0x00002000))
		{
			if (func_22(*uParam2, 0x00200000))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 0x00400000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000A)
	{
		if (func_22(*uParam2, 0x00004000))
		{
			if (func_22(*uParam2, 0x00400000))
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
		if (func_22(*uParam2, 0x00008000))
		{
			if (func_22(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000C)
	{
		if (func_22(*uParam2, 0x00010000))
		{
			if (func_22(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000D)
	{
		if (func_22(*uParam2, 0x00020000))
		{
			if (func_22(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000E)
	{
		if (func_22(*uParam2, 0x00040000))
		{
			if (func_22(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x0000000F)
	{
		if (func_22(*uParam2, 0x00080000))
		{
			if (func_22(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x00000010)
	{
		if (func_22(*uParam2, 0x00100000))
		{
			if (func_22(*uParam2, 0x00200000))
			{
				*uParam1 = (*uParam1 - 0x00000002);
				*uParam3 = { cParam4 };
			}
			else if (func_22(*uParam2, 0x00400000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x00000015)
	{
		if (func_22(*uParam2, 0x00800000))
		{
			*uParam1 = (*uParam1 - 0x00000002);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000016)
	{
		if (func_22(*uParam2, 0x01000000))
		{
			*uParam1 = (*uParam1 - 0x00000002);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000017)
	{
		if (func_22(*uParam2, 0x02000000))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000011)
	{
		if (func_22(*uParam2, 0x04000000))
		{
			if (func_22(*uParam2, 0x04000000))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 0x00000012)
	{
		if (func_22(*uParam2, 0x08000000))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000014)
	{
		if (func_22(*uParam2, 0x20000000))
		{
			*uParam1 = (*uParam1 - 0x00000001);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000013)
	{
		if (func_22(*uParam2, 0x10000000))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 0x00000019)
	{
		if (func_22(*uParam2, 0x00008000))
		{
			*uParam1 = (*uParam1 - 0x00000002);
			*uParam3 = { cParam4 };
		}
	}
}

void func_365(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0x00000000;
	while (iVar2 < iParam1)
	{
		fVar0 = SYSTEM::TO_FLOAT(iVar2);
		iVar1 = SYSTEM::ROUND(SYSTEM::POW(2f, fVar0));
		if (!func_275(*uParam0, iVar1))
		{
			func_167(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_232(sParam2);
				}
				else
				{
					func_232(sParam2);
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

void func_366(var uParam0, bool bParam1)
{
	uParam0->f_78 = 0x00000001;
	if (bParam1)
	{
	}
}

int func_367(var uParam0)
{
	return uParam0->f_1A0;
}

int func_368(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (func_188(sParam0, 0x00000000, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_369(var uParam0)
{
	if (func_115())
	{
		return 0x00000001;
	}
	if (func_305(uParam0, 0x00000011))
	{
		return 0x00000001;
	}
	if (func_305(uParam0, 0x0000000E))
	{
		return 0x00000001;
	}
	if (func_186(uParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_370(var uParam0, var uParam1)
{
	return ((*uParam1 == 0xFFFFFFFF && uParam0->f_19C == 0x00000000) && !func_305(uParam0, 0x00000009));
}

void func_371(var uParam0)
{
	if (func_305(uParam0, 0x00000011))
	{
		if (!func_305(uParam0, 0x0000000E))
		{
			if (!func_186(uParam0))
			{
				if (!func_115())
				{
					func_112(uParam0, 0x00000011, 0x00000001);
				}
			}
		}
	}
}

bool func_372(var uParam0)
{
	return uParam0->f_75;
}

void func_373(var uParam0, var uParam1, bool bParam2)
{
	if (!func_22(uParam0->f_37, 0x00000001))
	{
		switch (*uParam1)
		{
			case 0x00000000:
				if (!unk_0xEA6BC48857E0AC4C(&(uParam0->f_7C)) && func_115())
				{
					*uParam1++;
				}
				break;
			
			case 0x00000001:
				if (!func_115())
				{
					StringCopy(&(uParam0->f_7C), func_207(), 24);
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

void func_374(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_19A >= 0x00000005)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_4))
		{
			if (Local_165 > 0x00000000 && !func_275(Local_165.f_1[0x00000004 /*4*/], 0x00000004))
			{
				iVar0 = 0x00000000;
				iVar0 = 0x00000000;
				while (iVar0 <= (Local_165 - 0x00000001))
				{
					if (func_275(Local_165.f_1[iVar0 /*4*/], 0x00000002))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_275(Local_165.f_1[iVar0 /*4*/], 0x00000004))
							{
								func_167(&(Local_165.f_1[iVar0 /*4*/]), 0x00000004);
								Local_165.f_1[iVar0 /*4*/].f_1 = unk_0x1C0640BA9A7327B3();
							}
						}
						else
						{
							func_125(&(Local_165.f_1[iVar0 /*4*/]), 0x0000000C);
						}
						if (func_275(Local_165.f_1[iVar0 /*4*/], 0x00000004) && !func_275(Local_165.f_1[iVar0 /*4*/], 0x00000008))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_167(&(Local_165.f_1[iVar0 /*4*/]), 0x00000008);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_330(uParam0, "Taxi Garbage Collected", 0x00000012);
		}
	}
}

int func_375(int iParam0, var uParam1)
{
	var uVar0;
	
	if (!func_305(iParam0, 0x0000001B))
	{
		func_304(iParam0, 0x0000001B);
		uParam1->f_3 = 0x000000FA;
		uParam1->f_2 = 40f;
	}
	if (!iParam0->f_6D && func_113(iParam0, 0x0000001B) > 5f)
	{
		if (func_402(iParam0->f_3, iParam0->f_4, uParam1, &uVar0, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000001))
		{
			func_298(iParam0, 0x0000001B, 0x00000000, 0x00000000);
			func_298(iParam0, 0x0000000A, 0x00000000, 0x00000000);
			func_400(iParam0, &uVar0, uParam1);
		}
		func_397(iParam0);
	}
	if (iParam0->f_19A >= 0x00000003 && iParam0->f_19A <= 0x00000005)
	{
		func_376(iParam0);
	}
	if ((((!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) && (unk_0x9F4FE516EAACCFC5(*iParam0) && !unk_0xFBB4F23D534EB790(*iParam0))) && (unk_0x9F4FE516EAACCFC5(iParam0->f_1) && !unk_0xFBB4F23D534EB790(iParam0->f_1))) && !unk_0xD17F06053799A7CA()) && !func_115())
	{
		if (func_113(iParam0, 0x0000001A) > 10f)
		{
			func_112(iParam0, 0x0000001A, 0x00000000);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
		}
	}
	else if (func_305(iParam0, 0x0000001A))
	{
		func_112(iParam0, 0x0000001A, 0x00000000);
	}
	return 0x00000000;
}

void func_376(var uParam0)
{
	if (!func_396(uParam0->f_1AD))
	{
		uParam0->f_1AD = func_395();
		func_386(&(uParam0->f_1AD), 0x00000000, 0x00000000, unk_0x09AC81E49EA267F7(0x00000004, 0x00000007), 0x00000000, 0x00000000, 0x00000000);
	}
	else if (func_377(uParam0->f_1AD))
	{
		func_330(uParam0, "Player took too long to make pickup", 0x00000009);
	}
}

bool func_377(int iParam0)
{
	return func_378(func_395(), iParam0);
}

int func_378(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_396(iParam1) || !func_396(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_384(iParam0);
	iVar1 = func_384(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_383(iParam0);
	iVar1 = func_383(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_382(iParam0);
	iVar1 = func_382(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_381(iParam0);
	iVar1 = func_381(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_380(iParam0);
	iVar1 = func_380(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_379(iParam0);
	iVar1 = func_379(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_379(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_380(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_381(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_382(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_383(int iParam0)
{
	return iParam0 & 0x0000000F;
}

var func_384(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_385(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_385(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_386(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_384(*uParam0);
	iVar1 = func_383(*uParam0);
	iVar2 = func_382(*uParam0);
	iVar3 = func_381(*uParam0);
	iVar4 = func_380(*uParam0);
	iVar5 = func_379(*uParam0);
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
	iVar6 = func_394(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_394(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_387(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_387(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_393(uParam0, iParam1);
	func_392(uParam0, iParam2);
	func_391(uParam0, iParam3);
	func_390(uParam0, iParam5);
	func_389(uParam0, iParam4);
	func_388(uParam0, iParam6);
}

void func_388(var uParam0, int iParam1)
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

void func_389(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_383(*uParam0);
	iVar1 = func_384(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_394(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_390(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_391(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_392(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_393(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_394(int iParam0, int iParam1)
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

int func_395()
{
	var uVar0;
	
	func_393(&uVar0, unk_0x4460E481B9E33ADA());
	func_392(&uVar0, unk_0x8D199E381D262EEF());
	func_391(&uVar0, unk_0xD8A54335F18763BA());
	func_389(&uVar0, unk_0x972A296334C9D57B());
	func_390(&uVar0, unk_0x118229AD063C3C1D());
	func_388(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_396(int iParam0)
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
	iVar0 = func_379(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_380(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_381(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_384(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_383(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_382(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_394(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_397(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_19A < 0x00000007 && !uParam0->f_8A)
	{
		if (((uParam0->f_19B == 0x00000009 && func_399()) && !func_163(uParam0)) || ((uParam0->f_19B != 0x00000009 && func_265(uParam0, 0x00000001)) && !func_163(uParam0)))
		{
			uVar0 = func_398(uParam0->f_4);
			unk_0x82692E8F6A0D7A22(&uVar0);
			uParam0->f_4 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			unk_0x73270B3C9CC833FD(uParam0->f_4, 0x00000001, 0x00000000);
			func_202(uParam0);
			func_193(uParam0, 0x00000000);
		}
	}
}

var func_398(var uParam0)
{
	return uParam0;
}

int func_399()
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

void func_400(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 0x00000001:
			if (func_401(uParam0, 0x00000000, 0x00000001))
			{
				func_330(uParam0, "Aggro Aiming", 0x00000005);
			}
			break;
		
		case 0x00000004:
			if (func_401(uParam0, 0x00000000, 0x00000004))
			{
				func_330(uParam0, "Aggro Shot Near", 0x00000008);
			}
			break;
		
		case 0x00000008:
			if (func_401(uParam0, 0x00000000, 0x00000008))
			{
				func_330(uParam0, "Aggro Heard Shot", 0x00000008);
			}
			break;
		
		case 0x00000010:
			if (func_401(uParam0, 0x00000001, 0x00000001))
			{
				func_330(uParam0, "Aggro Attacked", 0x0000000E);
			}
			break;
		
		case 0x00000020:
			if (func_401(uParam0, 0x00000000, 0x00000001))
			{
				func_330(uParam0, "Aggro Minor Attacked", 0x00000008);
			}
			break;
		
		case 0x00000002:
			if (!func_22(*uParam2, 0x00000002) && func_179(uParam0))
			{
				func_330(uParam0, "Aggro Went Wanted", 0x00000005);
			}
			break;
	}
}

int func_401(var uParam0, int iParam1, int iParam2)
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
				func_230(uParam0, 0x00000042, 0x00000001, 0x00000000, 0x00000001);
			}
			else
			{
				func_230(uParam0, 0x00000041, 0x00000001, 0x00000000, 0x00000001);
			}
		}
	}
	return 0x00000000;
}

int func_402(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x16F2683693E537C9();
	if (!unk_0x437347B10A200C4B(iVar0, 0x00000000) && !unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (!func_22(*uParam2, 0x00000001))
		{
			if (func_408(iParam0, uParam2))
			{
				*uParam3 = 0x00000001;
				return 0x00000001;
			}
		}
		if (!func_22(*uParam2, 0x00000002))
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
			{
				*uParam3 = 0x00000002;
				return 0x00000001;
			}
		}
		if (!func_22(*uParam2, 0x00000004))
		{
			if (func_406(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 0x00000004;
				return 0x00000001;
			}
		}
		if (!func_22(*uParam2, 0x00000008))
		{
			if (func_405(iVar0, iParam0, uParam2))
			{
				*uParam3 = 0x00000008;
				return 0x00000001;
			}
		}
		bVar1 = !func_22(*uParam2, 0x00000080);
		if (bParam4)
		{
			if (func_403(iParam0, iParam1, 0x00000001, bParam6, bVar1, 0x00000001))
			{
				*uParam3 = 0x00000020;
				return 0x00000001;
			}
		}
		else if (!func_22(*uParam2, 0x00000010))
		{
			if (func_403(iParam0, iParam1, 0x00000000, bParam6, bVar1, bParam8))
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

int func_403(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (func_404(unk_0x16F2683693E537C9(), iParam0))
	{
		return 0x00000001;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_165(iParam0, 0x00000001) < 1.5f)
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

int func_404(int iParam0, int iParam1)
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

int func_405(int iParam0, int iParam1, var uParam2)
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

int func_406(int iParam0, int iParam1, var uParam2, bool bParam3)
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
			if (unk_0xFB275CE013F3A38C(iParam0) || func_407(iVar1))
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

int func_407(int iParam0)
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
						if (func_172(unk_0x16F2683693E537C9(), iParam0, 0x00000001) < 40f)
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

int func_408(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_165(iParam0, 0x00000001) < uParam1->f_2)
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

void func_409()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	struct<6> Var3;
	
	Var3 = { func_160() };
	if ((((iLocal_269 < 0x00000004 && func_165(Local_230.f_3, 0x00000001) < 50f) && Local_230.f_19A == 0x00000016) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && !iLocal_307)
	{
		if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000050))
		{
			if (unk_0x9F4FE516EAACCFC5(Local_230))
			{
				if (!unk_0xFBB4F23D534EB790(Local_230))
				{
					iLocal_399 = unk_0x1C0640BA9A7327B3();
					unk_0xE3BB8E05FCEB3FBE(Local_230, 0x00000001);
					unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				}
			}
		}
	}
	if ((((iLocal_269 < 0x00000004 && func_165(Local_230.f_3, 0x00000001) < 50f) && Local_230.f_19A == 0x00000016) && unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && !iLocal_307)
	{
		if (iLocal_298)
		{
			switch (iLocal_397)
			{
				case 0x00000000:
					iLocal_398 = unk_0x1C0640BA9A7327B3();
					vVar0 = { 223.3f, -3326.3f, 6.4f };
					vVar1 = { -4.1f, 0f, 78f };
					fVar2 = 24.3f;
					func_410(vVar0, vVar1, fVar2);
					iLocal_397 = 0x00000001;
					break;
				
				case 0x00000001:
					if (unk_0x7F8A39872A07D2CE("txm12_ig1c_3", &Var3))
					{
						iLocal_398 = unk_0x1C0640BA9A7327B3();
						vVar0 = { 211.1f, -3326.1f, 5.8f };
						vVar1 = { 4.1f, 0f, -81.2f };
						fVar2 = 24.3f;
						func_410(vVar0, vVar1, fVar2);
						iLocal_397 = 0x00000002;
					}
					break;
				
				case 0x00000002:
					if ((unk_0x1C0640BA9A7327B3() - iLocal_398) > 0x00001388)
					{
						iLocal_398 = unk_0x1C0640BA9A7327B3();
						vVar0 = { 202.0472f, -3314.83f, 5.9369f };
						vVar1 = { -1.9358f, -0.0169f, 169.6817f };
						fVar2 = 20.9113f;
						func_410(vVar0, vVar1, fVar2);
						iLocal_397 = 0x00000003;
					}
					break;
				
				case 0x00000003:
					if (unk_0x7F8A39872A07D2CE("txm12_deal1_3", &Var3))
					{
						iLocal_398 = unk_0x1C0640BA9A7327B3();
						vVar0 = { 194.7488f, -3328.101f, 5.9471f };
						vVar1 = { -0.3369f, -0.0169f, -55.7257f };
						fVar2 = 24.5237f;
						func_410(vVar0, vVar1, fVar2);
						iLocal_397 = 0x00000004;
					}
					break;
				
				case 0x00000004:
					if (unk_0x7F8A39872A07D2CE("txm12_deal1_5", &Var3))
					{
						iLocal_398 = unk_0x1C0640BA9A7327B3();
						vVar0 = { 202.0472f, -3314.83f, 5.9369f };
						vVar1 = { -1.9358f, -0.0169f, 169.6817f };
						fVar2 = 20.9113f;
						func_410(vVar0, vVar1, fVar2);
						iLocal_397 = 0x00000005;
					}
					break;
				
				case 0x00000005:
					if (unk_0x7F8A39872A07D2CE("txm12_deal1_7", &Var3))
					{
						iLocal_398 = unk_0x1C0640BA9A7327B3();
						vVar0 = { 194.1f, -3324.9f, 6.2f };
						vVar1 = { -4.6f, 0f, -83.1f };
						fVar2 = 29f;
						func_410(vVar0, vVar1, fVar2);
						iLocal_397 = 0x00000006;
					}
					break;
			}
			if (unk_0xBFC0798A6E3417F9(0x00000000, 0x00000050) && (unk_0x1C0640BA9A7327B3() - iLocal_399) > 0x000001F4)
			{
				if (unk_0x9F4FE516EAACCFC5(Local_230))
				{
					unk_0xE3BB8E05FCEB3FBE(Local_230, 0x00000000);
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				}
			}
		}
	}
	else if (iLocal_298)
	{
		if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			if (unk_0x9F4FE516EAACCFC5(Local_230))
			{
				if (unk_0xFBB4F23D534EB790(Local_230))
				{
					unk_0xEF6276132B396452(0f, 0x3F800000);
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xE3BB8E05FCEB3FBE(Local_230, 0x00000000);
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				}
			}
		}
		if (iLocal_307)
		{
			if (!func_16(&iLocal_332))
			{
				if (func_156() && unk_0xFBB4F23D534EB790(Local_230))
				{
					if (!iLocal_308)
					{
						unk_0x82A772610883F395("CamPushInNeutral", 0x00000000, 0x00000000);
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
						iLocal_308 = 0x00000001;
					}
				}
				func_105(&iLocal_332);
			}
			else if (func_103(&iLocal_332) > 0.3f)
			{
				if (unk_0x9F4FE516EAACCFC5(Local_230))
				{
					if (unk_0xFBB4F23D534EB790(Local_230))
					{
						unk_0xEF6276132B396452(0f, 0x3F800000);
						unk_0x2FB9A57162E54BAB(0f);
						unk_0xE3BB8E05FCEB3FBE(Local_230, 0x00000000);
						unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
					}
				}
			}
		}
	}
	else
	{
		unk_0xF3039DE1FDB4F6FD(0x00000001);
	}
}

void func_410(vector3 vParam0, vector3 vParam1, float fParam2)
{
	if (!unk_0x9F4FE516EAACCFC5(Local_230))
	{
		func_241(&Local_230, 0f, 0f, 0f, 0f, 0f, 0f, fParam2);
	}
	unk_0x608A456FDD8A83D8(Local_230, vParam0);
	unk_0x5F3CBA6EB9341C90(Local_230, vParam1, 0x00000002);
	unk_0x91F5B0244AAE6222(Local_230, "HAND_SHAKE", 0.3f);
}

void func_411(var uParam0)
{
	if (!func_22(uParam0->f_62, 0x00000002))
	{
		if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
		{
			if (func_209(uParam0->f_4, uParam0->f_11, 0x00000001) < 180f)
			{
				unk_0x28F5E4DA506AC0CA(uParam0->f_11, 25f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				func_173(&(uParam0->f_62), 0x00000002);
			}
		}
	}
}

void func_412()
{
	if (!iLocal_300)
	{
		func_413(&Local_230);
		iLocal_300 = 0x00000001;
	}
	func_435(0x00000002);
	if (iLocal_299)
	{
		if (func_10(unk_0x16F2683693E537C9(), Local_230.f_11, 0x00000001) > 50f || func_130(&(Local_247.f_3), &(Local_247.f_B), &(Local_257.f_3), &(Local_257.f_B)))
		{
			func_433();
		}
	}
	else
	{
		func_433();
	}
}

void func_413(var uParam0)
{
	func_11(0x00000000, uParam0, 0x00000001);
	if (uParam0->f_19B != 0x00000009)
	{
		func_435(0x00000002);
	}
}

int func_414(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 0x00000001;
	}
	if ((((!func_115() && func_113(uParam0, 0x00000003) > 1f) || uParam0->f_19F == 0x00000012) || uParam0->f_19F == 0x0000000E) || uParam0->f_19F == 0x0000000F)
	{
		if (!unk_0x437347B10A200C4B(uParam0->f_3, 0x00000000))
		{
			if (unk_0xDF1306B443CD3D15(uParam0->f_4, 0x00000000))
			{
				if (unk_0xC42A92762C58E1B9(uParam0->f_3, uParam0->f_4, 0x00000000))
				{
					if (func_62(uParam0) == 0x00000000 || func_275(uParam0->f_55, 0x00000020))
					{
						if (!unk_0x8B38C0DAEEDB5F9C(uParam0->f_4))
						{
							func_333(uParam0, 0x00001040, 0x00000000);
						}
						else
						{
							func_333(uParam0, 0x00000000, 0x00000000);
						}
						return 0x00000001;
					}
					else
					{
						func_333(uParam0, 0x00000000, 0x00000000);
						return 0x00000001;
					}
				}
				else
				{
					func_333(uParam0, 0x00000000, 0x00000000);
					return 0x00000001;
				}
			}
			else
			{
				func_333(uParam0, 0x00000000, 0x00000000);
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

void func_415(var uParam0)
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

int func_416(var uParam0)
{
	if (uParam0->f_6D && uParam0->f_19A < 0x0000001D)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_417()
{
	Local_230.f_17 = { 107.3107f, -1124.865f, 28.198f };
	Local_230.f_21 = 88.9745f;
	Local_230.f_1A = { 195.7672f, -2981.732f, 4.8916f };
	Local_230.f_22 = 173.6662f;
	unk_0xF63400DBE3303D26("TAXI_Pursuers", &iLocal_262);
	func_432(0x00000001);
	func_421(&Local_230, 0x00000003);
	Local_230.f_19A = 0x00000000;
	func_420(&Local_230, 0x00000003, 0x00000006);
	func_418();
}

void func_418()
{
	func_419();
	Local_247 = { 187.5257f, -3320.163f, 4.6276f };
}

void func_419()
{
	Local_247.f_13[0x00000000] = joaat("g_m_y_lost_01");
	Local_247.f_13[0x00000001] = joaat("s_f_y_hooker_01");
	Local_247.f_20[0x00000000] = joaat("gburrito");
	Local_247.f_20[0x00000001] = joaat("daemon");
	Local_247.f_20[0x00000002] = joaat("hexer");
	Local_247.f_20[0x00000003] = joaat("emperor");
	Local_257.f_13[0x00000000] = joaat("g_m_y_lost_01");
	Local_257.f_20[0x00000000] = joaat("gburrito");
	Local_257.f_20[0x00000001] = joaat("hexer");
}

void func_420(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_3A = iParam1;
	uParam0->f_3B = iParam2;
}

void func_421(var uParam0, int iParam1)
{
	func_431(0x00000001);
	func_204();
	func_7(&(uParam0->f_F4));
	func_430(uParam0);
	uParam0->f_19B = iParam1;
	if (!func_22(Global_1B416.f_4A94, 0x00000004))
	{
		func_173(&(Global_1B416.f_4A94), 0x00000004);
	}
	func_425(uParam0);
	func_423(uParam0);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
	uParam0->f_66 = (func_422(uParam0->f_19B) % uParam0->f_65);
	uParam0->f_50 = 0x00000000;
	uParam0->f_1AC = func_2();
	unk_0xD7992BEF7A9D109E("TAXI", 0x00000002);
}

int func_422(int iParam0)
{
	return Global_1B416.f_4A94.f_27[iParam0];
}

void func_423(var uParam0)
{
	switch (func_62(uParam0))
	{
		case 0x00000000:
			func_424(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000001:
			func_424(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000002:
			func_424(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000003:
			func_424(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000004:
			func_424(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000005:
			func_424(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000006:
			func_424(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000007:
			func_424(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_65 = 0x00000002;
			break;
		
		case 0x00000008:
			func_424(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_65 = 0x00000001;
			break;
		
		case 0x00000009:
			func_424(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_65 = 0x00000001;
			break;
	}
}

void func_424(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_7A = sParam1;
	uParam0->f_8F = sParam2;
	uParam0->f_90 = sParam3;
}

void func_425(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_19B)
	{
		case 0x00000000:
			func_429(uParam0, 0x00000003);
			func_428(uParam0, 0x0000000E);
			break;
		
		case 0x00000001:
			func_429(uParam0, 0x0000000E);
			func_428(uParam0, 0x00000008);
			break;
		
		case 0x00000002:
			func_429(uParam0, 0x00000008);
			func_428(uParam0, 0x00000007);
			break;
		
		case 0x00000003:
			func_429(uParam0, 0x0000000F);
			func_428(uParam0, 0x00000006);
			break;
		
		case 0x00000004:
			func_429(uParam0, 0x00000000);
			func_428(uParam0, 0x00000003);
			break;
		
		case 0x00000005:
			func_429(uParam0, 0x00000006);
			func_428(uParam0, 0x00000007);
			break;
		
		case 0x00000006:
			func_429(uParam0, 0x00000008);
			func_428(uParam0, 0x0000000F);
			break;
		
		case 0x00000007:
			func_429(uParam0, 0x00000008);
			func_428(uParam0, 0x0000000E);
			break;
		
		case 0x00000008:
			func_429(uParam0, 0x00000007);
			func_428(uParam0, 0x0000000F);
			break;
		
		case 0x00000009:
			func_429(uParam0, unk_0x09AC81E49EA267F7(0x00000000, 0x00000011));
			iVar0 = func_427((uParam0->f_1A2.f_2 + unk_0x09AC81E49EA267F7(0x00000001, 0x00000011)), 0x00000000, 0x00000010);
			func_428(uParam0, iVar0);
			func_426(uParam0);
			uParam0->f_1A2.f_7 = 0x00000001;
			uParam0->f_1A2.f_8 = 0x00000001;
			break;
	}
}

void func_426(var uParam0)
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

int func_427(int iParam0, int iParam1, int iParam2)
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

void func_428(var uParam0, int iParam1)
{
	uParam0->f_1A2.f_1 = iParam1;
}

void func_429(var uParam0, int iParam1)
{
	uParam0->f_1A2.f_2 = iParam1;
}

void func_430(var uParam0)
{
	uParam0->f_2 = unk_0x16F2683693E537C9();
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_E = { func_41() };
	uParam0->f_11 = { func_41() };
	uParam0->f_23 = 0f;
	uParam0->f_4C = 0x00000000;
	uParam0->f_31 = 0x00000000;
	uParam0->f_6D = 0x00000000;
	uParam0->f_24 = 0f;
	uParam0->f_19A = 0x00000002;
	uParam0->f_7B = "TRS_FINDING_LOCATION";
	func_112(uParam0, 0x00000020, 0x00000000);
}

void func_431(bool bParam0)
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

void func_432(int iParam0)
{
	unk_0x0E2400AB9174FA81(iParam0, iLocal_262, 0x6F0783F5);
	unk_0x0E2400AB9174FA81(iParam0, iLocal_262, 0xA49E591C);
	unk_0x0E2400AB9174FA81(iParam0, 0xA49E591C, iLocal_262);
}

void func_433()
{
	func_20(&Local_230);
	unk_0x51B096AAC60548C1(1f);
	unk_0xE342F209E49C5314(vLocal_311, vLocal_312, 0x00000001, 0x00000001);
	unk_0xEFED0CD6E25037B9();
	unk_0x2952D66A502EA873(iLocal_278, 0x00000000);
	unk_0x046C362CF15F1935(&iLocal_276);
	func_434();
	func_211();
	if (unk_0x9F4FE516EAACCFC5(Local_230))
	{
		unk_0x9A8DDC7C522F5BF5(Local_230, 0x00000000);
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0xF3039DE1FDB4F6FD(0x00000001);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_434()
{
	unk_0x71199B01895C6202(iLocal_265);
}

void func_435(int iParam0)
{
	Global_1AF0C.f_16 = iParam0;
}

