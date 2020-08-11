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
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	vector3 vLocal_51[16] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_52[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	vector3 vLocal_58 = { 0f, 0f, 0f };
	vector3 vLocal_59 = { 0f, 0f, 0f };
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	float fLocal_63 = 0f;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	float fLocal_66 = 0f;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	vector3 vLocal_70 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	vector3 vLocal_73 = { 0f, 0f, 0f };
	vector3 vLocal_74 = { 0f, 0f, 0f };
	float fLocal_75 = 0f;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97[2] = { 0, 0 };
	int iLocal_98[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102[4] = { 0, 0, 0, 0 };
	int iLocal_103[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_104 = 0;
	var uLocal_105[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
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
	var uLocal_132 = 8;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 4;
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
	var uLocal_151 = 4;
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
	var uLocal_166 = 4;
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
	var uLocal_181 = 4;
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
	var uLocal_196 = 4;
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
	var uLocal_211 = 4;
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
	var uLocal_226 = 4;
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
	var uLocal_241 = 4;
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
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	char[] cLocal_261[8] = 0;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	int iLocal_270 = 0;
	var uLocal_271 = 16;
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
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
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
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	int iLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 5;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 5;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	
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
	fLocal_46 = -1f;
	vLocal_53 = { -1109.213f, 4914.744f, 216.101f };
	vLocal_54 = { -1034.6f, 4918.6f, 205.9f };
	vLocal_55 = { -1066.963f, 4873.13f, 207.3281f };
	vLocal_56 = { -1112.946f, 4986.957f, 241.133f };
	fLocal_57 = 72.3125f;
	vLocal_58 = { -1138.386f, 4872.04f, 207.5488f };
	vLocal_59 = { -1091.959f, 4983.27f, 241.1698f };
	fLocal_60 = 57.8125f;
	vLocal_61 = { -1171.648f, 4888.658f, 211.0756f };
	vLocal_62 = { -1137.907f, 4926.572f, 240.999f };
	fLocal_63 = 17.9375f;
	vLocal_64 = { -1177.981f, 4903.231f, 212.477f };
	vLocal_65 = { -1153.398f, 4902.631f, 241.155f };
	fLocal_66 = 17.9375f;
	vLocal_67 = { -1175.693f, 4904.839f, 207.5207f };
	vLocal_68 = { -1142.08f, 4985.32f, 241.2887f };
	fLocal_69 = 36.375f;
	vLocal_70 = { -1106.212f, 4860.086f, 206.1207f };
	vLocal_71 = { -1105.016f, 4873.854f, 241.1453f };
	fLocal_72 = 11.5625f;
	vLocal_73 = { -1044.268f, 4916.587f, 209.8365f };
	vLocal_74 = { -1063.605f, 4972.88f, 241.1299f };
	fLocal_75 = 12.875f;
	iLocal_96 = 0x00000004;
	cLocal_261 = "REPLAY_TMG";
	sLocal_262 = "CMN_TDIED";
	if (unk_0x2EBF608FFE6CA406(0x0000001A))
	{
		func_196();
	}
	if (unk_0x8F7DE34FFB67592B())
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (unk_0x338D6FF72D84D90F() || iLocal_77)
		{
			unk_0x51B096AAC60548C1(0f);
			switch (iLocal_50)
			{
				case 0x00000000:
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (Global_1B416.f_619E.f_5 >= iLocal_96 && !func_195())
						{
							iLocal_50 = 0x00000002;
						}
						func_192();
						func_189();
					}
					break;
				
				case 0x00000001:
					unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						if (SYSTEM::TIMERA() > 0x000007D0)
						{
							if (iLocal_91 == 0x00000001)
							{
								func_188();
							}
							else if (iLocal_91 == 0x00000002)
							{
								func_159();
							}
						}
						if (SYSTEM::TIMERA() > 0x00000514)
						{
							if (iLocal_93 < 0x00000003)
							{
								func_158();
							}
							else
							{
								func_157();
							}
						}
						if (iLocal_78)
						{
							func_144(0x0000001A, 0x00000001);
							iLocal_78 = 0x00000000;
							iLocal_50 = 0x00000000;
						}
					}
					break;
				
				case 0x00000002:
					unk_0x34FABD75496259E4(unk_0xD803B885F5E47A62());
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						func_116();
					}
					unk_0x1BA7FCEAFCE8D46E(Global_9E6A[0x00000009 /*31*/], 0x00000000, 0x00000000, 0x00000001);
					unk_0x1BA7FCEAFCE8D46E(Global_9E6A[0x0000000A /*31*/], 0x00000000, 0x00000000, 0x00000001);
					break;
				
				case 0x00000004:
					if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
					{
						iLocal_50 = 0x00000003;
						break;
					}
					bLocal_79 = 0x00000000;
					unk_0x51B096AAC60548C1(0f);
					iVar0 = 0x00000000;
					while (iVar0 < iLocal_98)
					{
						if (unk_0xEB6A8945D1AC98A1(iLocal_98[iVar0]))
						{
							if (unk_0xE4EDC4B0E92C078B(uLocal_105[iVar0]))
							{
								unk_0x142CC44DB769B57E(&(uLocal_105[iVar0]));
							}
						}
						else
						{
							if (unk_0x46BC6F5F089F3AFF(iLocal_98[iVar0]))
							{
								if (unk_0xE4EDC4B0E92C078B(uLocal_105[iVar0]))
								{
									unk_0x142CC44DB769B57E(&(uLocal_105[iVar0]));
								}
							}
							else if (unk_0x12DE711B1C681E9E(iLocal_98[iVar0], unk_0x16F2683693E537C9(), 30f, 30f, 30f, 0x00000000, 0x00000001, 0x00000000))
							{
								if (!func_115())
								{
									if (iLocal_95 < unk_0x1C0640BA9A7327B3())
									{
										iVar1 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000003);
										if (iVar1 == 0x00000000)
										{
											func_100(&uLocal_271, "ACULTAU", "ACULT_SHOUT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
										}
										else if (iVar1 == 0x00000001)
										{
											func_99(&uLocal_271, 0x00000001, iLocal_98[iVar0], "ACULTMember1", 0x00000000, 0x00000001);
											func_100(&uLocal_271, "ACULTAU", "ACULT_FIGHT1", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
										}
										else if (iVar1 == 0x00000002)
										{
											func_99(&uLocal_271, 0x00000002, iLocal_98[iVar0], "ACULTMember2", 0x00000000, 0x00000001);
											func_100(&uLocal_271, "ACULTAU", "ACULT_FIGHT2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
										}
										iLocal_95 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00001194, 0x00001770));
									}
								}
							}
							bLocal_79 = 0x00000001;
						}
						iVar0++;
					}
					if (!bLocal_79)
					{
						func_63();
					}
					break;
				
				case 0x00000003:
					if (!iLocal_77)
					{
						iLocal_109 = func_62();
						if (!unk_0x83D8570832F172A7(iLocal_109))
						{
							break;
						}
						func_61(&uLocal_114, 0x00000000);
						iLocal_77 = 0x00000001;
					}
					if (func_32(&uLocal_114, &uLocal_120, &iLocal_109, cLocal_261, sLocal_262, &bLocal_76, 0x0000004E))
					{
						iLocal_94 = 0x00000000;
						unk_0x51732B934211201A(iLocal_270);
						unk_0x5C47E2DDD9F51FC0(iLocal_108);
						iVar0 = 0x00000000;
						while (iVar0 < iLocal_98)
						{
							if (unk_0xC844350D5D58C99A(iLocal_98[iVar0]))
							{
								unk_0xEBA53F35D0085654(&(iLocal_98[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0x00000000;
						while (iVar0 < iLocal_103)
						{
							if (unk_0xC844350D5D58C99A(iLocal_103[iVar0]))
							{
								unk_0xF690C84DADBB3551(&(iLocal_103[iVar0]));
							}
							iVar0++;
						}
						if (unk_0x9F4FE516EAACCFC5(iLocal_106))
						{
							unk_0xE3BB8E05FCEB3FBE(iLocal_106, 0x00000000);
						}
						if (unk_0xC844350D5D58C99A(iLocal_101))
						{
							unk_0xF690C84DADBB3551(&iLocal_101);
						}
						if (unk_0xC844350D5D58C99A(iLocal_101))
						{
							unk_0xF690C84DADBB3551(&iLocal_101);
						}
						if (bLocal_76)
						{
							func_11();
							func_3(0x00000000);
							func_1(0x00000001);
							iLocal_77 = 0x00000000;
							iLocal_50 = 0x00000002;
						}
						else
						{
							iLocal_77 = 0x00000000;
							func_196();
						}
					}
					break;
			}
		}
		else if (bLocal_81)
		{
		}
		else
		{
			func_196();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		unk_0x67E5ECB8FD7F5018(0x00000000);
		unk_0x65C5EBCA17A891FC(0x00000001);
		unk_0x2C84016B4A95F6BA(0x00000000);
		func_2(0x00000001);
		Global_16F32 = 0x00000001;
	}
	else
	{
		unk_0x67E5ECB8FD7F5018(0x00000001);
		unk_0x65C5EBCA17A891FC(0x00000000);
		unk_0x2C84016B4A95F6BA(0x00000001);
		func_2(0x00000000);
		Global_16F32 = 0x00000000;
	}
}

void func_2(bool bParam0)
{
	if ((Global_A1D7 == 0x00000009 || Global_A1D7 == 0x0000000A) || Global_A1D7 == 0x00000005)
	{
		Global_1AECF = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_1AECF = 0x00000000;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
		}
		Global_4C1E.f_1 = 0x00000001;
		if (func_9(0x00000000))
		{
			func_4(0x00000000);
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

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_7())
		{
			func_6(0x00000001, 0x00000001);
		}
		else
		{
			func_6(0x00000000, 0x00000000);
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
	if (!func_5())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_5()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0x00000000))
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

bool func_7()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

bool func_8()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_4C1E.f_1 == 0x00000009 || Global_4C1E.f_1 == 0x0000000A)
	{
		Global_517A = 0x00000000;
		Global_5176 = 0x00000001;
	}
}

void func_11()
{
	func_22();
	func_14(0x00000000, 0x00000001);
	func_12(0x00000000, 0x00000001);
}

void func_12(int iParam0, int iParam1)
{
	if (iParam0 == 0x00000001)
	{
		func_14(0x00000000, 0x00000000);
		unk_0x82A772610883F395("DeathFailOut", 0x00000000, 0x00000000);
		unk_0x5D96D8530B3D0904(&iLocal_48, 0x00000001);
		func_13(0x00000001, 0x00000002, 0x00000000);
		unk_0x4AED3E7834924DC8(0x00000002);
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_48, 0x00000001) || iParam1)
		{
			unk_0x9A1335ECD7BD117F("DeathFailOut");
			func_13(0x00000000, 0x00000002, 0x00000001);
			unk_0x4AED3E7834924DC8(0x00000000);
		}
		unk_0x0674E58A79778E99(&iLocal_48, 0x00000001);
	}
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&iLocal_48, 0x00000002);
		if (!unk_0x8CD06866876216F2())
		{
			if (iParam1 == 0x00000001)
			{
				unk_0x9A82EEAF6CA12AEE(0.2f);
			}
			else
			{
				unk_0x9A82EEAF6CA12AEE(0.075f);
			}
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_48, 0x00000002) || iParam2)
		{
			if (!unk_0x8CD06866876216F2())
			{
				unk_0x9A82EEAF6CA12AEE(1f);
			}
		}
		unk_0x0674E58A79778E99(&iLocal_48, 0x00000002);
	}
}

void func_14(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_15())
	{
		case 0x00000000:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 0x00000001:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 0x00000002:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 0x00000001)
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_48, 0x00000000) || iParam1)
		{
			unk_0x82A772610883F395(sVar0, 0x00000000, 0x00000000);
			unk_0x5D96D8530B3D0904(&iLocal_48, 0x00000000);
			func_13(0x00000001, 0x00000001, 0x00000000);
			unk_0x4AED3E7834924DC8(0x00000001);
		}
	}
	else
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_48, 0x00000000) || iParam1)
		{
			unk_0x9A1335ECD7BD117F(sVar0);
			func_13(0x00000000, 0x00000001, 0x00000001);
			unk_0x4AED3E7834924DC8(0x00000000);
		}
		unk_0x0674E58A79778E99(&iLocal_48, 0x00000000);
	}
}

int func_15()
{
	func_16();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_16()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_20(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_19(unk_0x16F2683693E537C9());
			if (func_18(iVar0) && (!func_17(0x0000000E) || Global_1AFFD))
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

bool func_17(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_18(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_21(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_22()
{
	iLocal_48 = 0x00000000;
	iLocal_49 = 0x00000000;
	func_23(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
	func_3(0x00000001);
}

void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0x00000000);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0x00000001);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
		func_31(0x00000001);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(0x00000000);
			}
			if (!func_5())
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
		func_31(0x00000000);
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

void func_31(int iParam0)
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

int func_32(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0x00000000:
			*uParam0 = 0x00000001;
			unk_0x8BC9595FD2792B5D("DEATH_SCENE");
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ScreenFlash", "WastedSounds", 0x00000001);
			func_60(&(uParam0->f_1));
			func_22();
			func_59(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0x31A33F7BCB08CB80(0x00000001);
			break;
		
		case 0x00000001:
			if (func_57() || unk_0x757EF87A33649210())
			{
				*uParam0 = 0x00000002;
			}
			if (!func_56(uParam0->f_4, 0x00000004))
			{
				if (unk_0xAE317D00A5A55DF6("OFFMISSION_WASTED", 0x00000000, 0xFFFFFFFF))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "Bed", "WastedSounds", 0x00000001);
					func_54(&(uParam0->f_4), 0x00000004);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_56(uParam0->f_4, 0x00000002))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "TextHit", "WastedSounds", 0x00000001);
					func_54(&(uParam0->f_4), 0x00000002);
				}
				func_33(iParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 0x00000004 & iParam6) - 0x00000002 & iParam6) | 0x00000010, 0x00000007, 0x00000001, 0x41700000, 0x00000000);
			}
			break;
		
		case 0x00000002:
			if (func_33(iParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 0x00000008 & iParam6) - 0x00000004 & iParam6) - 0x00000002 & iParam6), 0x00000007, 0x00000001, 0x41700000, 0x00000001))
			{
				func_14(0x00000000, 0x00000001);
				func_12(0x00000000, 0x00000001);
				func_22();
				if (*iParam5)
				{
					unk_0x4DB69487E1A9EE2A(0x00000001);
				}
				else if (!uParam0->f_5)
				{
					func_2(0x00000000);
				}
				unk_0x31A33F7BCB08CB80(0x00000000);
				unk_0x65C5EBCA17A891FC(0x00000000);
				*uParam0 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				unk_0x67E5ECB8FD7F5018(0x00000001);
				func_14(0x00000000, 0x00000001);
				func_12(0x00000000, 0x00000001);
				unk_0x8910D3D58E0132B8("DEATH_SCENE");
				unk_0x31A33F7BCB08CB80(0x00000000);
				return 0x00000001;
			}
			break;
		
		case 0x00000004:
			unk_0x31A33F7BCB08CB80(0x00000000);
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_33(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0x00000000:
			if (!unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
			{
				unk_0x53491B90E4FD0E56(0x000009C4);
				unk_0xC2127C0F64D6A3B9();
			}
			if (bParam9)
			{
				unk_0x31A33F7BCB08CB80(0x00000001);
			}
			unk_0x9A82EEAF6CA12AEE(0.2f);
			if (func_53(iParam5, 0x00000004))
			{
				if (unk_0xAE317D00A5A55DF6("generic_failed", 0x00000000, 0xFFFFFFFF))
				{
					*uParam1 = 0x00000001;
				}
			}
			else
			{
				*uParam1 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			unk_0x7E60C62A7CE58FC8(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0x7ACC3006A87F8B39("STRING");
			unk_0x3A820E495A7BA3E5(0x00000006);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
			func_52(sParam3);
			unk_0x3CAEA85DA607305E(0x00000064);
			unk_0x1200CC973A2399C8(0x00000001);
			unk_0x7A8BB56B212464AC();
			if (func_53(iParam5, 0x00000020))
			{
				if (!uParam1->f_88)
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "TRANSITION_UP");
					unk_0x7C19E5E4784BD7CF(uParam1->f_86);
					unk_0x7E60D21B163E9D56();
					uParam1->f_88 = 0x00000001;
				}
			}
			if (!func_53(iParam5, 0x00000001))
			{
				unk_0x5EEBDFEE72949D59(0x00000000);
			}
			func_51(&(uParam1->f_A), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			func_50(&(uParam1->f_A), "IB_RETRY", 0x00000002, 0x000000C9, 0x00000001, 0x00000001, 0x00000000);
			func_50(&(uParam1->f_A), "FE_HLP16", 0x00000002, 0x000000CA, 0x00000001, 0x00000001, 0x00000000);
			if (func_53(iParam5, 0x00000004))
			{
				unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "ScreenFlash", "MissionFailedSounds", 0x00000001);
			}
			if (func_53(iParam5, 0x00000008))
			{
				switch (func_15())
				{
					case 0x00000000:
						unk_0x82A772610883F395("MinigameEndMichael", 0x000001F4, 0x00000000);
						break;
					
					case 0x00000001:
						unk_0x82A772610883F395("MinigameEndFranklin", 0x000001F4, 0x00000000);
						break;
					
					case 0x00000002:
						unk_0x82A772610883F395("MinigameEndTrevor", 0x000001F4, 0x00000000);
						break;
					}
			}
			if (!func_49(&(uParam1->f_1)))
			{
				func_48(&(uParam1->f_1));
			}
			if (func_53(iParam5, 0x00000002))
			{
				if (!func_49(&(uParam1->f_4)))
				{
					func_48(&(uParam1->f_4));
				}
			}
			*uParam1 = 0x00000002;
			break;
		
		case 0x00000002:
			unk_0xBD706C594F6DCD4A();
			if (func_53(iParam5, 0x00000020))
			{
				if (!uParam1->f_88)
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "TRANSITION_UP");
					unk_0x7C19E5E4784BD7CF(uParam1->f_86);
					unk_0x7E60D21B163E9D56();
					uParam1->f_88 = 0x00000001;
				}
			}
			unk_0xD9ACBBA59FD5A09E(iParam6);
			func_46(uParam0, 0x00000000, 0x00000000);
			if (!func_53(iParam5, 0x00000010) && (func_44(&(uParam1->f_1)) >= uParam1->f_87 || unk_0x757EF87A33649210()))
			{
				func_38(&(uParam1->f_A), 0x43480000, iParam6, bParam7, 0x00000001, 0x3F800000);
				unk_0x5D80F91A16C40CDE();
				if (unk_0xB9132A06AE472728(0x00000002, 0x000000C9))
				{
					uParam1->f_8A = 0x00000001;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_53(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_37(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
				else if (unk_0xB9132A06AE472728(0x00000002, 0x000000CA))
				{
					uParam1->f_8A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_53(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_37(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
			}
			if (func_53(iParam5, 0x00000002))
			{
				if (func_44(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_8A = 0x00000000;
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0x00000001);
					if (!func_53(iParam5, 0x00000001))
					{
						unk_0x18B28213EC89540F(0x00000000);
					}
					func_37(&(uParam1->f_A));
					*uParam1 = 0x00000003;
					return 0x00000000;
				}
			}
			break;
		
		case 0x00000003:
			func_46(uParam0, 0x00000000, 0x00000000);
			unk_0x9A82EEAF6CA12AEE(1f);
			if (uParam1->f_8A || !((unk_0x7F8A39872A07D2CE("stunt_plane_races", unk_0xBB0808A181D4745C()) || unk_0x7F8A39872A07D2CE("pilot_school", unk_0xBB0808A181D4745C())) || (unk_0x7F8A39872A07D2CE("bj", unk_0xBB0808A181D4745C()) && unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))))
			{
				unk_0x82E51BCA72537B6C(0x000009C4);
			}
			if (func_53(iParam5, 0x00000040) && uParam1->f_8A)
			{
				unk_0x53491B90E4FD0E56(0x000001F4);
			}
			func_34(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0x31A33F7BCB08CB80(0x00000000);
			}
			*uParam1 = 0x00000004;
			break;
		
		case 0x00000004:
			if (func_44(&(uParam1->f_4)) <= 0.1f)
			{
				func_46(uParam0, 0x00000000, 0x00000000);
			}
			else
			{
				*uParam4 = uParam1->f_8A;
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

void func_34(int iParam0)
{
	func_35(iParam0, 0f);
}

void func_35(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_36(unk_0xEAE0D21A50E6C7F4(*iParam0, 0x00000004)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 0x00000001);
	unk_0x0674E58A79778E99(iParam0, 0x00000002);
	iParam0->f_2 = 0f;
}

float func_36(bool bParam0)
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

void func_37(int iParam0)
{
	if (*iParam0 != 0x00000000)
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0x00000000;
	}
	iParam0->f_1 = 0x00000000;
	iParam0->f_7B = 0x00000000;
}

void func_38(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749()) || unk_0x757EF87A33649210()) || unk_0x06980BB66EBA4D95())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_43(uParam0))
	{
		return;
	}
	unk_0xBD706C594F6DCD4A();
	unk_0xD9ACBBA59FD5A09E(iParam2);
	if (!func_53(uParam0->f_1, 0x00000100) || (func_53(uParam0->f_1, 0x00002000) && unk_0xB8E3620B82AD47D7(0x00000002)))
	{
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_CLEAR_SPACE");
		unk_0x7C19E5E4784BD7CF(fParam1);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
		unk_0x7C19E5E4784BD7CF(fParam5);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7E60D21B163E9D56();
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(func_53(uParam0->f_1, 0x00001000));
			unk_0x7E60D21B163E9D56();
		}
		iVar5 = 0x00000000;
		iVar6 = 0x00000000;
		while (iVar6 < uParam0->f_7B)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0x00000000:
					bVar4 = 0x00000001;
					break;
				
				case 0x00000001:
					bVar4 = unk_0x91E3F625EF57450D(0x00000002);
					break;
				
				case 0x00000002:
					bVar4 = !unk_0x91E3F625EF57450D(0x00000002);
					break;
				
				default:
					bVar4 = 0x00000000;
					break;
			}
			if (bVar4)
			{
				if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0x3CAEA85DA607305E(iVar5);
					iVar5++;
					iVar7 = 0x00000000;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_E)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6 /*15*/].f_D, iVar7);
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_2[iVar6 /*15*/].f_C, iVar7))
						{
							sVar3 = unk_0xF59058FCB716F903(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0xE32F7AC5E6DF304A(iVar0, iVar1, bVar2);
						}
						if (!unk_0xEA6BC48857E0AC4C(sVar3))
						{
							func_42(sVar3);
						}
						iVar7++;
					}
					if (!unk_0xEA6BC48857E0AC4C(uParam0->f_2[iVar6 /*15*/]))
					{
						func_52(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (func_53(uParam0->f_1, 0x00001000))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0x1200CC973A2399C8(0x00000001);
								unk_0x3CAEA85DA607305E(uParam0->f_2[iVar6 /*15*/].f_3[0x00000000 /*2*/].f_1);
							}
							else
							{
								unk_0x1200CC973A2399C8(0x00000000);
								unk_0x3CAEA85DA607305E(0xFFFFFFFF);
							}
						}
					}
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar6++;
		}
		fVar8 = func_41(bParam4, func_41(func_53(uParam0->f_1, 0x00000020), 1f, 0f), -1f);
		unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x7C19E5E4784BD7CF(fVar8);
		unk_0x7E60D21B163E9D56();
		unk_0x7E60C62A7CE58FC8(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(0f);
		unk_0x7C19E5E4784BD7CF(80f);
		unk_0x7E60D21B163E9D56();
		func_40(&(uParam0->f_1), 0x00000100);
		func_39(&(uParam0->f_1), 0x00000080);
	}
	unk_0x6567AE843FADBA94(*uParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000, 0x00000000);
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_41(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_42(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_43(var uParam0)
{
	if (*uParam0 != 0x00000000)
	{
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			func_40(&(uParam0->f_1), 0x00000001);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

float func_44(var uParam0)
{
	if (func_49(uParam0))
	{
		if (func_45(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_36(unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000004)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_45(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000002);
}

int func_46(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_49(&(uParam0->f_2)))
	{
		func_34(&(uParam0->f_2));
	}
	unk_0x3584F71E5CA29322(0x0000000E);
	if (!bParam2)
	{
		unk_0x6567AE843FADBA94(*uParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	}
	else if (bParam2)
	{
		unk_0x6567AE843FADBA94(*uParam0, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	}
	if (bParam1)
	{
		if (unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9))
		{
			return 0x00000000;
		}
	}
	if (uParam0->f_1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	if (func_44(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_47(&(uParam0->f_2));
		return 0x00000000;
	}
	return 0x00000001;
}

void func_47(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0x00000000;
}

void func_48(int iParam0)
{
	if (!func_49(iParam0))
	{
		func_34(iParam0);
	}
}

bool func_49(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0x00000001);
}

int func_50(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	if (iParam5 == 0x00000001)
	{
		iVar0 = 0x00000001;
	}
	iVar1 = uParam0->f_7B;
	if (iVar1 < 0x00000008)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_C = 0x00000000;
		uParam0->f_2[iVar1 /*15*/].f_D = 0x00000000;
		uParam0->f_2[iVar1 /*15*/].f_E = 0x00000000;
		uParam0->f_2[iVar1 /*15*/].f_3[0x00000000 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0x00000000 /*2*/].f_1 = iParam3;
		if (iParam4 == 0x00000001)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_2[iVar1 /*15*/].f_D), 0x00000000);
		}
		uParam0->f_2[iVar1 /*15*/].f_E++;
		uParam0->f_7B++;
		return 0x00000001;
	}
	return 0x00000000;
}

void func_51(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0x00000000)
	{
		*uParam0 = unk_0x5275223F099DEF26("instructional_buttons");
	}
	uParam0->f_1 = 0x00000000;
	uParam0->f_7B = 0x00000000;
	if (bParam1)
	{
		func_40(&(uParam0->f_1), 0x00000020);
	}
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		func_40(&(uParam0->f_1), 0x00000001);
		if (bParam2)
		{
			unk_0x5461A9D388F592B4(*uParam0, 0x00000001);
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (bParam3)
		{
			func_40(&(uParam0->f_1), 0x00001000);
		}
	}
	if (bParam4)
	{
		func_40(&(uParam0->f_1), 0x00002000);
	}
}

void func_52(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

void func_54(var uParam0, int iParam1)
{
	func_55(uParam0, iParam1);
}

void func_55(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_56(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0x00000000;
}

int func_57()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_48, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(iLocal_48, 0x00000001))
	{
		SYSTEM::SETTIMERA(0x00000000);
		func_14(0x00000001, 0x00000000);
	}
	if (!unk_0x22A8E52414415B76())
	{
		unk_0x790015DC92C918E2();
	}
	unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C7, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000003C, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000019, 0x00000001);
	unk_0x95235C19032FCE7D();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_48, 0x00000001))
		{
			func_12(0x00000001, 0x00000000);
			SYSTEM::SETTIMERB(0x00000000);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || unk_0x757EF87A33649210())
		{
			if (!unk_0x757EF87A33649210())
			{
				if (!unk_0xD0BB2359EC70FC37())
				{
					unk_0x53491B90E4FD0E56(0x000005DC);
				}
			}
			else if (iLocal_49 == 0x00000000)
			{
				iLocal_49 = unk_0x1C0640BA9A7327B3() + 1000;
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				}
				func_13(0x00000000, 0x00000002, 0x00000001);
				func_23(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				func_3(0x00000001);
				unk_0x7BBABEC524CBF883(0x00000000);
				unk_0x86E4B20DE8E91A57(0x00000000);
				unk_0xA37A90C62806D848(0x00000001);
				unk_0x790015DC92C918E2();
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				}
				func_14(0x00000000, 0x00000000);
				func_58(0x00000000);
			}
			else if (unk_0x1C0640BA9A7327B3() < iLocal_49)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	if (iVar0 == 0x00000000)
	{
		if (iParam0 == 0x00000001)
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_48, 0x00000003))
			{
				unk_0x21387C9EECC2B220(0x00000001);
				unk_0x5D96D8530B3D0904(&iLocal_48, 0x00000003);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_48, 0x00000003))
		{
			unk_0x21387C9EECC2B220(0x00000000);
			unk_0x0674E58A79778E99(&iLocal_48, 0x00000003);
		}
	}
}

void func_59(var uParam0, float fParam1, float fParam2)
{
	if (func_49(&(uParam0->f_1)))
	{
		func_47(&(uParam0->f_1));
	}
	if (func_49(&(uParam0->f_4)))
	{
		func_47(&(uParam0->f_4));
	}
	func_37(&(uParam0->f_A));
	uParam0->f_86 = fParam1;
	uParam0->f_87 = fParam2;
	uParam0->f_89 = 0x00000001;
	uParam0->f_88 = 0x00000000;
	*uParam0 = 0x00000000;
}

void func_60(int iParam0)
{
	if (!func_49(iParam0))
	{
		func_48(iParam0);
	}
	else
	{
		func_34(iParam0);
	}
}

void func_61(var uParam0, int iParam1)
{
	*uParam0 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = iParam1;
	unk_0xAE317D00A5A55DF6("OFFMISSION_WASTED", 0x00000000, 0xFFFFFFFF);
}

int func_62()
{
	return unk_0xB01F55A0FD1CFD49("MP_BIG_MESSAGE_FREEMODE");
}

void func_63()
{
	if (!iLocal_80)
	{
		unk_0x837C600ECEE8ABA2("COUNTRYSIDE_ALTRUIST_CULT_01", 0x00000000);
		Global_1B416.f_619E.f_5 = 0x000003E8;
		unk_0x63D66B3917B1F596(0x00000040);
		Global_1B416.f_504F.f_1D8 = 0x00000036;
		iLocal_259 = unk_0xB01F55A0FD1CFD49("MIDSIZED_MESSAGE");
		func_98(0x00000001);
		while (!unk_0x83D8570832F172A7(iLocal_259))
		{
			SYSTEM::WAIT(0x00000000);
		}
		unk_0x7E60C62A7CE58FC8(iLocal_259, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_52("CULT_PASS");
		unk_0x7A8BB56B212464AC();
		while (!func_97())
		{
			SYSTEM::WAIT(0x00000000);
		}
		func_96();
		SYSTEM::SETTIMERA(0x00000000);
		unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "PROPERTY_PURCHASE", "HUD_AWARDS", 0x00000001);
		iLocal_80 = 0x00000001;
	}
	unk_0x6567AE843FADBA94(iLocal_259, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
	if (!iLocal_82)
	{
		if (SYSTEM::TIMERA() > 0x0000251C)
		{
			unk_0x7E60C62A7CE58FC8(iLocal_259, "SHARD_ANIM_OUT");
			unk_0x3CAEA85DA607305E(0x00000001);
			unk_0x7C19E5E4784BD7CF(0.33f);
			unk_0x7E60D21B163E9D56();
			iLocal_82 = 0x00000001;
		}
	}
	if (SYSTEM::TIMERA() > 0x00002710)
	{
		if (unk_0x83D8570832F172A7(iLocal_259))
		{
			unk_0xE17FDF9E3068281B(&iLocal_259);
			func_98(0x00000000);
		}
		while (unk_0x0EB28750412C3A5A(func_95(unk_0xD803B885F5E47A62()), vLocal_53, 0x00000001) < 209f && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			SYSTEM::WAIT(0x00000000);
		}
		func_64(0x00000012);
		func_196();
	}
}

void func_64(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_93();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_92())
	{
		func_70(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_69(0x00007530);
		StringCopy(&cVar0, func_68(Global_1B40B, 0x00000001), 64);
		if (func_67(Global_1B40B) > 0x00000000)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_1B40A, 64);
		}
		unk_0xCDD9EADCF57830A9(&cVar0, Global_1B408, (unk_0x1C0640BA9A7327B3() - Global_1B409), 0x00000000);
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B412, 0x00000000) && Global_1B416.f_619E.f_2 < 0x00000003)
	{
		unk_0x0674E58A79778E99(&Global_1B412, 0x00000000);
	}
	func_66(&Global_786B);
	Global_1B40C = 0x00000000;
	func_65(0xFFFFFFFF);
}

void func_65(int iParam0)
{
	Global_1B40B = iParam0;
}

void func_66(var uParam0)
{
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (!*uParam0 == Global_A1B1)
	{
		*uParam0 = 0xFFFFFFFF;
		return;
	}
	*uParam0 = 0xFFFFFFFF;
	Global_A1B0 = 0x00000000;
	Global_A1B2 = 0x00000000;
	Global_A1D7 = 0x0000000F;
	Global_F045 = 0x00000000;
	Global_F046 = 0x00000000;
}

int func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000001;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 0x00000005;
			break;
		
		case 0x00000005:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000009:
			iVar0 = 0x0000000A;
			break;
		
		case 0x0000000B:
			iVar0 = 0x00000004;
			break;
		
		case 0x0000000D:
			iVar0 = 0x00000004;
			break;
		
		case 0x0000000F:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000011:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000016:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000017:
			iVar0 = 0x00000002;
			break;
		
		case 0x00000019:
			iVar0 = 0x00000003;
			break;
		
		case 0x0000001A:
			iVar0 = 0x00000002;
			break;
		
		case 0x0000001B:
			iVar0 = 0x00000002;
			break;
		
		case 0x0000001D:
			iVar0 = 0x00000003;
			break;
	}
	return iVar0;
}

char* func_68(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "RE_ACCIDENT";
			break;
		
		case 0x00000001:
			return "RE_ATMROBBERY";
			break;
		
		case 0x00000002:
			return "RE_BUSTOUR";
			break;
		
		case 0x00000003:
			return "RE_DOMESTIC";
			break;
		
		case 0x00000004:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 0x00000005:
			return "RE_SHOPROBBERY";
			break;
		
		case 0x00000006:
			return "RE_SNATCHED";
			break;
		
		case 0x00000007:
			return "RE_LURED";
			break;
		
		case 0x00000008:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 0x00000009:
			return "RE_SECURITYVAN";
			break;
		
		case 0x0000000A:
			return "RE_PAPARAZZI";
			break;
		
		case 0x0000000B:
			return "RE_CHASETHIEVES";
			break;
		
		case 0x0000000C:
			return "RE_DEALGONEWRONG";
			break;
		
		case 0x0000000D:
			return "RE_HITCHLIFT";
			break;
		
		case 0x0000000E:
			return "RE_STAG";
			break;
		
		case 0x0000000F:
			return "RE_ARREST";
			break;
		
		case 0x00000010:
			return "RE_CRASHRESCUE";
			break;
		
		case 0x00000011:
			return "RE_CARTHEFT";
			break;
		
		case 0x00000012:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 0x00000013:
			return "RE_GANGFIGHT";
			break;
		
		case 0x00000014:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 0x00000015:
			return "RE_PRISONVANBREAK";
			break;
		
		case 0x00000016:
			return "RE_PRISONERLIFT";
			break;
		
		case 0x00000017:
			return "RE_ABANDONEDCAR";
			break;
		
		case 0x00000018:
			return "RE_BURIAL";
			break;
		
		case 0x00000019:
			return "RE_MUGGING";
			break;
		
		case 0x0000001A:
			return "RE_BIKETHIEF";
			break;
		
		case 0x0000001B:
			return "RE_DRUNKDRIVER";
			break;
		
		case 0x0000001C:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 0x0000001D:
			return "RE_BORDERPATROL";
			break;
		
		case 0x0000001E:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 0x0000001F:
			return "RE_DUEL";
			break;
		
		case 0x00000020:
			return "RE_SEAPLANE";
			break;
		
		case 0x00000021:
			return "RE_MONKEYPHOTO";
			break;
		
		case 0xFFFFFFFF:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_69(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_70(int iParam0)
{
	func_71(iParam0, 0x00000000, func_91(iParam0));
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_90();
	func_81(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_80(iParam0, &uVar0);
	Var1 = { func_72(&uVar0) };
}

struct<16> func_72(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_79(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_78(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_77(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_76(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_75(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_73(*uParam0), 64);
	return Var0;
}

int func_73(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_74(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_74(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_75(var uParam0)
{
	return uParam0 & 0x0000000F;
}

int func_76(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_77(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_78(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_79(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

void func_80(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_81(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_73(*uParam0);
	iVar1 = func_75(*uParam0);
	iVar2 = func_76(*uParam0);
	iVar3 = func_79(*uParam0);
	iVar4 = func_78(*uParam0);
	iVar5 = func_77(*uParam0);
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
	iVar6 = func_89(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_89(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_82(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, iParam1);
	func_87(uParam0, iParam2);
	func_86(uParam0, iParam3);
	func_85(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_83(uParam0, iParam6);
}

void func_83(var uParam0, int iParam1)
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

void func_84(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(*uParam0);
	iVar1 = func_73(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_89(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_85(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_87(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_89(int iParam0, int iParam1)
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

var func_90()
{
	var uVar0;
	
	func_88(&uVar0, unk_0x4460E481B9E33ADA());
	func_87(&uVar0, unk_0x8D199E381D262EEF());
	func_86(&uVar0, unk_0xD8A54335F18763BA());
	func_84(&uVar0, unk_0x972A296334C9D57B());
	func_85(&uVar0, unk_0x118229AD063C3C1D());
	func_83(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

int func_91(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000017:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000000:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000F:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000001:
			iVar0 = 0x000000C8;
			break;
		
		case 0x0000001A:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000008:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000001D:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000018:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000002:
			iVar0 = 0x00000000;
			break;
		
		case 0x00000011:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000B:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000010:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000012:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000C:
			iVar0 = 0x00000078;
			break;
		
		case 0x00000003:
			iVar0 = 0x0000003C;
			break;
		
		case 0x0000001B:
			iVar0 = 0x0000003C;
			break;
		
		case 0x00000013:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000014:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000004:
			iVar0 = 0x0000003C;
			break;
		
		case 0x0000001C:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000000D:
			iVar0 = 0x00000023;
			break;
		
		case 0x00000007:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000019:
			iVar0 = 0x00000028;
			break;
		
		case 0x0000000A:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000016:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000015:
			iVar0 = 0x0000001E;
			break;
		
		case 0x00000005:
			iVar0 = 0x0000001E;
			break;
		
		case 0x0000001E:
			iVar0 = 0x0000003C;
			break;
		
		case 0x00000009:
			iVar0 = 0x0000003C;
			break;
		
		case 0x00000006:
			iVar0 = 0x00000028;
			break;
		
		case 0x0000000E:
			iVar0 = 0x00000028;
			break;
	}
	return iVar0;
}

int func_92()
{
	if ((Global_1B40B == func_93() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_93()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_94(Var0);
	return uVar1;
}

int func_94(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x12AB0310C2281427(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 0x00000017;
			break;
		
		case joaat("re_accident"):
			return 0x00000000;
			break;
		
		case joaat("re_arrests"):
			return 0x0000000F;
			break;
		
		case joaat("re_atmrobbery"):
			return 0x00000001;
			break;
		
		case joaat("re_bikethief"):
			return 0x0000001A;
			break;
		
		case joaat("re_border"):
			return 0x0000001D;
			break;
		
		case joaat("re_burials"):
			return 0x00000018;
			break;
		
		case joaat("re_bus_tours"):
			return 0x00000002;
			break;
		
		case joaat("re_cartheft"):
			return 0x00000011;
			break;
		
		case joaat("re_chasethieves"):
			return 0x0000000B;
			break;
		
		case joaat("re_crashrescue"):
			return 0x00000010;
			break;
		
		case joaat("re_cultshootout"):
			return 0x00000012;
			break;
		
		case joaat("re_dealgonewrong"):
			return 0x0000000C;
			break;
		
		case joaat("re_domestic"):
			return 0x00000003;
			break;
		
		case joaat("re_drunkdriver"):
			return 0x0000001B;
			break;
		
		case joaat("re_gang_intimidation"):
			return 0x00000014;
			break;
		
		case joaat("re_gangfight"):
			return 0x00000013;
			break;
		
		case joaat("re_getaway_driver"):
			return 0x00000004;
			break;
		
		case joaat("re_hitch_lift"):
			return 0x0000000D;
			break;
		
		case joaat("re_homeland_security"):
			return 0x0000001C;
			break;
		
		case joaat("re_lured"):
			return 0x00000007;
			break;
		
		case joaat("re_muggings"):
			return 0x00000019;
			break;
		
		case joaat("re_paparazzi"):
			return 0x0000000A;
			break;
		
		case joaat("re_prisonerlift"):
			return 0x00000016;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 0x00000015;
			break;
		
		case joaat("re_securityvan"):
			return 0x00000009;
			break;
		
		case joaat("re_shoprobbery"):
			return 0x00000005;
			break;
		
		case joaat("re_snatched"):
			return 0x00000006;
			break;
		
		case joaat("re_stag_do"):
			return 0x0000000E;
			break;
		
		case joaat("re_yetarian"):
			return 0x0000001E;
			break;
		
		case joaat("re_duel"):
			return 0x0000001F;
			break;
		
		case joaat("re_seaplane"):
			return 0x00000020;
			break;
		
		case joaat("re_monkey"):
			return 0x00000021;
			break;
	}
	return 0xFFFFFFFF;
}

Vector3 func_95(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

void func_96()
{
	Global_791D = 0x00000000;
	Global_791E = 0x00000000;
	Global_7920 = 0x00000000;
	Global_7921 = 0x00000000;
	Global_7922 = 0x00000000;
}

int func_97()
{
	return 0x00000001;
}

void func_98(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

void func_99(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_100(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_114(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_101(sParam2, iParam3, 0x00000000);
}

int func_101(char* sParam0, int iParam1, bool bParam2)
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
					func_113();
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
		if (func_112(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_111();
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
				func_110();
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
				if (func_109())
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
			if (func_5())
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
			func_108();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_107();
		func_102();
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
		func_113();
	}
	return 0x00000000;
}

void func_102()
{
	if (!func_103())
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

int func_103()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_106())
	{
		return 0x00000000;
	}
	if (func_104(unk_0xD803B885F5E47A62()))
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

bool func_104(int iParam0)
{
	return func_105(iParam0, 0x00000014);
}

bool func_105(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_106()
{
	return 0xFFFFFFFF;
}

void func_107()
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

void func_108()
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

int func_109()
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

void func_110()
{
	if (func_17(0x0000000E))
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
		Global_4C1E = func_15();
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

void func_111()
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

bool func_112(int iParam0, int iParam1)
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

void func_113()
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

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_115()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_116()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	switch (iLocal_94)
	{
		case 0x00000000:
			unk_0x8225571BCEE038F8("THUNDER", 20f);
			if (!unk_0x39B7A3CCD2467CAB())
			{
				unk_0xAE1670DD12E839C3("ac_ig_3_p3_b", 0x00000008);
			}
			unk_0x523BCC9DC80CD82F(joaat("a_m_o_acult_02"));
			unk_0x523BCC9DC80CD82F(joaat("a_m_y_acult_02"));
			unk_0x523BCC9DC80CD82F(0x876CBCD2);
			unk_0x523BCC9DC80CD82F(0xB131133A);
			unk_0x523BCC9DC80CD82F(joaat("prop_box_wood05a"));
			unk_0x523BCC9DC80CD82F(joaat("prop_security_case_01"));
			while ((((((!func_143() || !unk_0xB87F6CF6E5628C67(joaat("a_m_o_acult_02"))) || !unk_0xB87F6CF6E5628C67(joaat("a_m_y_acult_02"))) || !unk_0xB87F6CF6E5628C67(0x876CBCD2)) || !unk_0xB87F6CF6E5628C67(0xB131133A)) || !unk_0xB87F6CF6E5628C67(joaat("prop_box_wood05a"))) || !unk_0xB87F6CF6E5628C67(joaat("prop_security_case_01")))
			{
				SYSTEM::WAIT(0x00000000);
			}
			iLocal_436 = func_136(unk_0x16F2683693E537C9(), joaat("weapon_assaultrifle"), 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			if (unk_0xC844350D5D58C99A(iLocal_436))
			{
				unk_0x29E8331978B73E7F(iLocal_436, "Trevors_weapon", 0x00000000, 0x00000000, 0x00000000);
			}
			unk_0x29E8331978B73E7F(0x00000000, "Rifle_Mag1^1", 0x00000003, unk_0xE8213142E3A84F79(joaat("component_assaultrifle_clip_01")), 0x00000000);
			if (func_143() && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000000, 0x00000000);
				unk_0x29E8331978B73E7F(iLocal_98[0x0000000B], "Cult_Master", 0x00000002, joaat("a_m_o_acult_02"), 0x00000000);
				unk_0x29E8331978B73E7F(iLocal_98[0x0000000C], "Rear_Cult", 0x00000002, joaat("a_m_o_acult_02"), 0x00000000);
				unk_0x29E8331978B73E7F(iLocal_98[0x0000000D], "Left_Old_Cult", 0x00000002, joaat("a_m_o_acult_02"), 0x00000000);
				unk_0x29E8331978B73E7F(iLocal_98[0x0000000E], "Carbine_Cult", 0x00000002, joaat("a_m_y_acult_02"), 0x00000000);
				unk_0x29E8331978B73E7F(iLocal_98[0x0000000F], "Shotgun_Cult", 0x00000002, joaat("a_m_y_acult_02"), 0x00000000);
				unk_0x4C902758BEA97C68(0x00000000);
			}
			SYSTEM::WAIT(0x00000000);
			if (!bLocal_76 && Global_1B416.f_619E.f_5 != 0x000003E8)
			{
				func_135();
			}
			if (unk_0xC844350D5D58C99A(iLocal_98[0x00000000]))
			{
				unk_0xEBA53F35D0085654(&(iLocal_98[0x00000000]));
			}
			if (unk_0xC844350D5D58C99A(iLocal_98[0x00000001]))
			{
				unk_0xEBA53F35D0085654(&(iLocal_98[0x00000001]));
			}
			if (unk_0x9F4FE516EAACCFC5(iLocal_106))
			{
				unk_0xE3BB8E05FCEB3FBE(iLocal_106, 0x00000000);
			}
			if (unk_0xC844350D5D58C99A(iLocal_101))
			{
				unk_0xF690C84DADBB3551(&iLocal_101);
			}
			if (unk_0xC844350D5D58C99A(iLocal_101))
			{
				unk_0xF690C84DADBB3551(&iLocal_101);
			}
			unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			if (unk_0xE4EDC4B0E92C078B(iLocal_104))
			{
				unk_0x142CC44DB769B57E(&iLocal_104);
			}
			func_23(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
			unk_0xA37A90C62806D848(0x00000001);
			unk_0x8BCB70EB440DED83(0x00000000);
			unk_0xBFE31971E49FA500(0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0x00000001);
			}
			unk_0x536F1BE96C726C4B(vLocal_53, 100f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x7D6CA5F52B3748BF(vLocal_53 - Vector(100f, 60f, 80f), vLocal_53 + Vector(100f, 60f, 80f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			unk_0x51B096AAC60548C1(0f);
			unk_0x15EA7F4313456B1D(0x00000003, 0x00000000);
			unk_0x15EA7F4313456B1D(0x00000005, 0x00000000);
			iLocal_108 = unk_0x6D4BB7C3AA077590(-1173.509f, 4924.365f, 222.21f, 277.2293f, 0x00000002, 0x00000000, 0x00000002, 0x00000001);
			unk_0x523BCC9DC80CD82F(joaat("a_m_o_acult_01"));
			while (!unk_0xB87F6CF6E5628C67(joaat("a_m_o_acult_01")))
			{
				SYSTEM::WAIT(0x00000000);
			}
			iLocal_94 = 0x00000006;
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (unk_0xEABED1927EFB48CA(0x00000000))
			{
				if (unk_0x3148AE92ED70DC30("CULT_MASTER", 0x00000000))
				{
					if (!unk_0xC844350D5D58C99A(iLocal_98[0x0000000B]))
					{
						iLocal_98[0x0000000B] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("CULT_MASTER", 0x00000000));
					}
				}
				if (unk_0x3148AE92ED70DC30("REAR_CULT", 0x00000000))
				{
					if (!unk_0xC844350D5D58C99A(iLocal_98[0x0000000C]))
					{
						iLocal_98[0x0000000C] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("REAR_CULT", 0x00000000));
					}
				}
				if (unk_0x3148AE92ED70DC30("LEFT_OLD_CULT", 0x00000000))
				{
					if (!unk_0xC844350D5D58C99A(iLocal_98[0x0000000D]))
					{
						iLocal_98[0x0000000D] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("LEFT_OLD_CULT", 0x00000000));
					}
				}
				if (unk_0x3148AE92ED70DC30("CARBINE_CULT", 0x00000000))
				{
					if (!unk_0xC844350D5D58C99A(iLocal_98[0x0000000E]))
					{
						iLocal_98[0x0000000E] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("CARBINE_CULT", 0x00000000));
					}
				}
				if (unk_0x3148AE92ED70DC30("SHOTGUN_CULT", 0x00000000))
				{
					if (!unk_0xC844350D5D58C99A(iLocal_98[0x0000000F]))
					{
						iLocal_98[0x0000000F] = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("SHOTGUN_CULT", 0x00000000));
					}
				}
				if (unk_0x3148AE92ED70DC30("TREVOR", 0x00000000))
				{
					unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0x00000000);
					unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1173.531f, 4924.357f, 222.2101f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
					unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 188.9369f);
					unk_0xA1B2E0ACC3ED5113(unk_0x16F2683693E537C9(), -1173.509f, 4924.365f, 222.21f, 0xFFFFFFFF, 0x00000000, 0f, 0x00000001, 0x00000000, iLocal_108, 0x00000000);
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000001, 0x00000000);
				}
				if (unk_0x3148AE92ED70DC30("Trevors_weapon", 0x00000000))
				{
					unk_0x96C150704BF4D0C6(iLocal_436, unk_0x16F2683693E537C9());
				}
				unk_0x2FB9A57162E54BAB(91.3878f);
				unk_0xEF6276132B396452(4.4337f, 0x3F800000);
				func_23(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				unk_0x8BCB70EB440DED83(0x00000001);
				unk_0xBFE31971E49FA500(0x00000001);
				vLocal_51[0x00000000 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_52[0x00000000] = 254.8275f;
				vLocal_51[0x00000001 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_52[0x00000001] = 270.2025f;
				vLocal_51[0x00000002 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_52[0x00000002] = 299.8404f;
				vLocal_51[0x00000003 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_52[0x00000003] = 298.4257f;
				vLocal_51[0x00000004 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_52[0x00000004] = 283.5311f;
				vLocal_51[0x00000005 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_52[0x00000005] = 87.5233f;
				vLocal_51[0x00000006 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_52[0x00000006] = 109.6546f;
				vLocal_51[0x00000007 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_52[0x00000007] = 210.2433f;
				vLocal_51[0x00000008 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_52[0x00000008] = 203.732f;
				vLocal_51[0x00000009 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_52[0x00000009] = 39.1109f;
				vLocal_51[0x0000000A /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_52[0x0000000A] = 25.8472f;
				unk_0xF63400DBE3303D26("rghCult", &iLocal_270);
				iVar1 = 0x00000000;
				while (iVar1 < iLocal_98)
				{
					if (((iVar1 == 0x00000000 || iVar1 == 0x00000005) || iVar1 == 0x00000006) || iVar1 == 0x0000000A)
					{
						iLocal_98[iVar1] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_o_acult_01"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 0x00000001, 0x00000001);
						unk_0xC743BD39A24D0583(iLocal_98[iVar1], 0x00000000);
						unk_0x262EF6C6306BEA6C(iLocal_98[iVar1], joaat("weapon_assaultrifle"), 0xFFFFFFFF, 0x00000001, 0x00000001);
						unk_0x3CC33E4E9CE523F4(iLocal_98[iVar1], 0x00000000);
						unk_0x083F03A847B640E9(iLocal_98[iVar1], 0x00000002);
						unk_0x23CBFFA16CA5CF45(iLocal_98[iVar1], 50f, 0x00000014);
						unk_0x298903DD96203C2C(iLocal_98[iVar1], 0x00000005);
						unk_0x967762C930C0C5FD(iLocal_98[iVar1], 100f);
						unk_0x9FA191B317572861(iLocal_98[iVar1], 100f);
						unk_0xD458AC1C1D29C3B4(iLocal_98[iVar1], 0x00000096, 0x00000000);
						unk_0x29CD9554726C7577(iLocal_98[iVar1], unk_0x09AC81E49EA267F7(0x00000028, 0x0000003C));
						unk_0x6C3AE6E278DB3D0E(iLocal_98[iVar1], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					}
					else if (iVar1 == 0x00000002)
					{
						iLocal_98[iVar1] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 0x00000001, 0x00000001);
						unk_0xC743BD39A24D0583(iLocal_98[iVar1], 0x00000000);
						unk_0x262EF6C6306BEA6C(iLocal_98[iVar1], joaat("weapon_sawnoffshotgun"), 0xFFFFFFFF, 0x00000001, 0x00000001);
						unk_0xAFF39FB306F8E232(iLocal_98[iVar1], 0x00000032, 0x00000001);
						unk_0x3CC33E4E9CE523F4(iLocal_98[iVar1], 0x00000002);
						unk_0x083F03A847B640E9(iLocal_98[iVar1], 0x00000001);
						unk_0x23CBFFA16CA5CF45(iLocal_98[iVar1], 50f, 0x00000014);
						unk_0x298903DD96203C2C(iLocal_98[iVar1], 0x00000005);
						unk_0x967762C930C0C5FD(iLocal_98[iVar1], 100f);
						unk_0x9FA191B317572861(iLocal_98[iVar1], 100f);
						unk_0x29CD9554726C7577(iLocal_98[iVar1], unk_0x09AC81E49EA267F7(0x00000028, 0x0000003C));
						unk_0x6C3AE6E278DB3D0E(iLocal_98[iVar1], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					}
					else if (iVar1 > 0x0000000A && iVar1 < 0x00000014)
					{
						if (((((!unk_0xEB6A8945D1AC98A1(iLocal_98[iVar1]) && !unk_0xEB6A8945D1AC98A1(iLocal_98[0x0000000B])) && !unk_0xEB6A8945D1AC98A1(iLocal_98[0x0000000C])) && !unk_0xEB6A8945D1AC98A1(iLocal_98[0x0000000D])) && !unk_0xEB6A8945D1AC98A1(iLocal_98[0x0000000E])) && !unk_0xEB6A8945D1AC98A1(iLocal_98[0x0000000F]))
						{
							unk_0x262EF6C6306BEA6C(iLocal_98[0x0000000B], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
							unk_0x262EF6C6306BEA6C(iLocal_98[0x0000000C], joaat("weapon_assaultrifle"), 0xFFFFFFFF, 0x00000001, 0x00000001);
							unk_0x262EF6C6306BEA6C(iLocal_98[0x0000000D], joaat("weapon_assaultrifle"), 0xFFFFFFFF, 0x00000001, 0x00000001);
							unk_0x262EF6C6306BEA6C(iLocal_98[0x0000000E], joaat("weapon_carbinerifle"), 0xFFFFFFFF, 0x00000001, 0x00000001);
							unk_0x262EF6C6306BEA6C(iLocal_98[0x0000000F], joaat("weapon_pumpshotgun"), 0xFFFFFFFF, 0x00000001, 0x00000001);
							unk_0xAFF39FB306F8E232(iLocal_98[iVar1], 0x00000000, 0x00000001);
							unk_0x3CC33E4E9CE523F4(iLocal_98[iVar1], 0x00000003);
							unk_0x083F03A847B640E9(iLocal_98[iVar1], 0x00000000);
							unk_0x298903DD96203C2C(iLocal_98[iVar1], 0x00000000);
							unk_0x9FC2699ACD081EC0(iLocal_98[iVar1], 1f, 1f);
							unk_0xDD353D0E9C789D0E(&iLocal_107);
							unk_0xE20F700AC2AFCA92(0x00000000, -1159.33f, 4924.412f, 221.6576f, unk_0x16F2683693E537C9(), 2f, 0x00000001, 0.5f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C, 0x00004E20);
							unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x00001770, 0x00000000);
							unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x00001194, 0x00000000);
							unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							unk_0x75ABDC5F81978924(iLocal_107);
							unk_0x78ADC381772E3D54(iLocal_98[0x0000000F], iLocal_107);
							unk_0xF82EA857DA10E0CD(&iLocal_107);
							unk_0xDD353D0E9C789D0E(&iLocal_107);
							unk_0xE20F700AC2AFCA92(0x00000000, -1163.279f, 4932.933f, 222.541f, unk_0x16F2683693E537C9(), 1f, 0x00000001, 0.5f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C, 0x00004E20);
							unk_0x5DA3F35E3BFDEE66(0x00000000, unk_0x16F2683693E537C9(), 0x00001388, 0x00000000);
							unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x00001D4C, 0x00000000);
							unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x00001194, 0x00000000);
							unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							unk_0x75ABDC5F81978924(iLocal_107);
							unk_0x78ADC381772E3D54(iLocal_98[0x0000000E], iLocal_107);
							unk_0xF82EA857DA10E0CD(&iLocal_107);
							unk_0xDD353D0E9C789D0E(&iLocal_107);
							unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x000009C4, 0x00000000);
							unk_0x5DA3F35E3BFDEE66(0x00000000, unk_0x16F2683693E537C9(), 0x00001388, 0x00000000);
							unk_0xE20F700AC2AFCA92(0x00000000, -1156.175f, 4926.073f, 221.3447f, unk_0x16F2683693E537C9(), 2f, 0x00000001, 0.5f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C, 0x00004E20);
							unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x00001964, 0x00000000);
							unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x00001194, 0x00000000);
							unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							unk_0x75ABDC5F81978924(iLocal_107);
							unk_0x78ADC381772E3D54(iLocal_98[0x0000000D], iLocal_107);
							unk_0xF82EA857DA10E0CD(&iLocal_107);
							unk_0xDD353D0E9C789D0E(&iLocal_107);
							unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x00000BB8, 0x00000000);
							unk_0xE20F700AC2AFCA92(0x00000000, -1157.962f, 4922.196f, 221.309f, unk_0x16F2683693E537C9(), 2f, 0x00000001, 0.5f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C, 0x00004E20);
							unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x0000157C, 0x00000000);
							unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x00001194, 0x00000000);
							unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							unk_0x75ABDC5F81978924(iLocal_107);
							unk_0x78ADC381772E3D54(iLocal_98[0x0000000C], iLocal_107);
							unk_0xF82EA857DA10E0CD(&iLocal_107);
							unk_0xDD353D0E9C789D0E(&iLocal_107);
							unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x00001194, 0x00000000);
							unk_0x5DA3F35E3BFDEE66(0x00000000, unk_0x16F2683693E537C9(), 0x00002710, 0x00000000);
							unk_0xE20F700AC2AFCA92(0x00000000, -1161.475f, 4916.061f, 220.5658f, unk_0x16F2683693E537C9(), 2f, 0x00000001, 0.5f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C, 0x00004E20);
							unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x00001194, 0x00000000);
							unk_0x9BE7E7B6B488CC55(0x00000000, unk_0x16F2683693E537C9(), 0x00001194, 0x00000000);
							unk_0x6C3AE6E278DB3D0E(0x00000000, unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
							unk_0x75ABDC5F81978924(iLocal_107);
							unk_0x78ADC381772E3D54(iLocal_98[0x0000000B], iLocal_107);
							unk_0xF82EA857DA10E0CD(&iLocal_107);
							unk_0xFADC0A217229F6B5(iLocal_98[iVar1], 0x00000001);
							unk_0x9DD8618CA5BF832D(iLocal_98[iVar1], 0x0000009C, 0x00000001);
						}
					}
					else
					{
						iLocal_98[iVar1] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 0x00000001, 0x00000001);
						unk_0xC743BD39A24D0583(iLocal_98[iVar1], 0x00000000);
						unk_0x262EF6C6306BEA6C(iLocal_98[iVar1], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
						unk_0xAFF39FB306F8E232(iLocal_98[iVar1], 0x00000032, 0x00000001);
						unk_0x3CC33E4E9CE523F4(iLocal_98[iVar1], 0x00000002);
						unk_0x083F03A847B640E9(iLocal_98[iVar1], 0x00000000);
						unk_0x23CBFFA16CA5CF45(iLocal_98[iVar1], 50f, 0x00000014);
						unk_0xB35CCEC0D4946813(iLocal_98[iVar1], 0x00000001);
						unk_0x298903DD96203C2C(iLocal_98[iVar1], 0x00000005);
						unk_0x967762C930C0C5FD(iLocal_98[iVar1], 100f);
						unk_0x9FA191B317572861(iLocal_98[iVar1], 100f);
						unk_0x29CD9554726C7577(iLocal_98[iVar1], unk_0x09AC81E49EA267F7(0x00000028, 0x0000003C));
						unk_0x6C3AE6E278DB3D0E(iLocal_98[iVar1], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
					}
					unk_0x6DF7BF67E86AAE86(iLocal_98[iVar1], iLocal_270);
					unk_0xD8F6A53F4799FAFE(iLocal_98[iVar1], func_134(unk_0x68F4C0EC296D3901(iLocal_98[iVar1], 0x00000001), func_95(unk_0xD803B885F5E47A62())));
					unk_0x11AD11297DC58CC7(iLocal_98[iVar1], 0x00000001);
					unk_0x4E885A246A9D983A(iLocal_98[iVar1], 0x0000002A, 0x00000001);
					uLocal_105[iVar1] = func_132(iLocal_98[iVar1], 0x00000001, 0x00000091);
					iVar1++;
				}
				func_99(&uLocal_271, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
				func_99(&uLocal_271, 0x00000003, iLocal_98[0x0000000B], "ACULTMaster", 0x00000000, 0x00000001);
				func_99(&uLocal_271, 0x00000004, 0x00000000, "ACULTGroup", 0x00000000, 0x00000001);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000001);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000003);
				unk_0x5D96D8530B3D0904(&iVar0, 0x00000004);
				if (!bLocal_76)
				{
					iLocal_102[0x00000000] = unk_0x2D7B5CDDF12654D2(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 0x000061A8, 0x00000002, 0x00000001, joaat("prop_security_case_01"));
					iLocal_102[0x00000001] = unk_0x2D7B5CDDF12654D2(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 0x000061A8, 0x00000002, 0x00000001, joaat("prop_security_case_01"));
					iLocal_102[0x00000002] = unk_0x2D7B5CDDF12654D2(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 0x000061A8, 0x00000002, 0x00000001, joaat("prop_security_case_01"));
					iLocal_102[0x00000003] = unk_0x2D7B5CDDF12654D2(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 0x000061A8, 0x00000002, 0x00000001, joaat("prop_security_case_01"));
				}
				iLocal_102[0x00000000] = iLocal_102[0x00000000];
				iLocal_102[0x00000001] = iLocal_102[0x00000001];
				iLocal_102[0x00000002] = iLocal_102[0x00000002];
				iLocal_102[0x00000003] = iLocal_102[0x00000003];
				iLocal_103[0x00000000] = unk_0x7707E48765093646(0xB131133A, -1158.69f, 4915.709f, 220.2644f, 0x00000001, 0x00000001, 0x00000000);
				iLocal_103[0x00000001] = unk_0x7707E48765093646(0x876CBCD2, -1156.246f, 4918.6f, 220.5432f, 0x00000001, 0x00000001, 0x00000000);
				iLocal_103[0x00000002] = unk_0x7707E48765093646(0xB131133A, -1145.802f, 4931.816f, 219.9683f, 0x00000001, 0x00000001, 0x00000000);
				iLocal_103[0x00000003] = unk_0x7707E48765093646(0xB131133A, -1133.369f, 4919.067f, 218.8385f, 0x00000001, 0x00000001, 0x00000000);
				iLocal_103[0x00000004] = unk_0x7707E48765093646(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 0x00000001, 0x00000001, 0x00000000);
				iLocal_103[0x00000005] = unk_0x7707E48765093646(0x876CBCD2, -1112.66f, 4929.268f, 217.1752f, 0x00000001, 0x00000001, 0x00000000);
				unk_0xC023D1C4BF532815(iLocal_103[0x00000000], 12.24288f, -0.014582f, 27.06056f, 0x00000002, 0x00000001);
				unk_0xC023D1C4BF532815(iLocal_103[0x00000001], 7.733739f, 9.432779f, -2.865618f, 0x00000002, 0x00000001);
				unk_0xC023D1C4BF532815(iLocal_103[0x00000002], 3.735082f, 4.551246f, 86.30917f, 0x00000002, 0x00000001);
				unk_0xC023D1C4BF532815(iLocal_103[0x00000003], 0.240341f, 1.095195f, 36.59031f, 0x00000002, 0x00000001);
				unk_0xC023D1C4BF532815(iLocal_103[0x00000004], 7.6772f, 1.232743f, 93.27483f, 0x00000002, 0x00000001);
				unk_0xC023D1C4BF532815(iLocal_103[0x00000005], 3.367802f, -5.14387f, 97.30567f, 0x00000002, 0x00000001);
				if (func_131() < 0x00000032)
				{
					unk_0x2D35FFDA547292C4(unk_0xD803B885F5E47A62(), 0.5f, 0x00000001, 0x00000000);
				}
				if (func_130() != 0x00000012)
				{
					func_128(0x00000012);
				}
				if (!func_92())
				{
					func_117(0x00000000);
				}
				func_1(0x00000001);
				bLocal_76 = 0x00000000;
				iLocal_50 = 0x00000004;
			}
			break;
	}
}

int func_117(int iParam0)
{
	if (func_122())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_121(Global_1B40B))
		{
			func_118(0x00000000);
		}
		unk_0x974531784BE14213(0x00000001, "RE_TITLE");
		if (iParam0 && func_121(Global_1B40B))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_119(func_120(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_2++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000000);
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B412, 0x00000001))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_119(func_120(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_3++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000001);
				}
			}
			break;
		
		case 0x00000002:
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B412, 0x00000002))
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_119(func_120(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

void func_119(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

char* func_120(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0x00000000:
			sVar0 = "AM_H_REFS";
			break;
		
		case 0x00000001:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 0x00000002:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000001D:
		case 0x0000001E:
		case 0x00000002:
		case 0x00000012:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

int func_122()
{
	switch (func_123(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
	{
		case 0x00000001:
			return 0x00000001;
			break;
		
		case 0x00000000:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_123(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_127(0x00000000))
		{
			return 0x00000000;
		}
		Global_A1B3++;
		*uParam0 = Global_A1B3;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0x00000000);
		Global_56C3.f_5 = 0x00000000;
		if (iParam2 != 0x00000005)
		{
			unk_0x4C7B0415764B64BA(0x00000008);
		}
		Global_A1D7 = iParam2;
		Global_A1B1 = *uParam0;
		Global_A1B2 = iParam4;
		Global_A1B0 = 0x00000000;
		return 0x00000001;
	}
	if (*uParam0 != 0xFFFFFFFF)
	{
		if (Global_A1B0 > 0x00000000)
		{
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < Global_A1B0)
			{
				if (Global_A1B6[iVar0 /*4*/] == *uParam0)
				{
					return 0x00000002;
				}
				iVar0++;
			}
		}
		else if (Global_A1B1 == *uParam0)
		{
			return 0x00000001;
		}
		*uParam0 = 0xFFFFFFFF;
	}
	if (*uParam0 == 0xFFFFFFFF)
	{
		if (!func_125(iParam2))
		{
			return 0x00000000;
		}
		if (Global_A1B0 == 0x00000008)
		{
			return 0x00000000;
		}
		Global_A1B3++;
		*uParam0 = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/] = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/].f_1 = iParam1;
		Global_A1B6[Global_A1B0 /*4*/].f_2 = iParam2;
		Global_A1B6[Global_A1B0 /*4*/].f_3 = 0x00000000;
		Global_A1B0++;
		if (iParam4 != 0x00000000)
		{
			func_124(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_124(var uParam0, int iParam1)
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

bool func_125(int iParam0)
{
	return func_126(iParam0, Global_A1D7);
}

int func_126(int iParam0, int iParam1)
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

int func_127(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_125(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_128(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_93();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_65(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_129();
}

void func_129()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			unk_0xAB8E2DDC7AF955E0(unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)), 0x00000001);
		}
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
	}
}

int func_130()
{
	return Global_1B40B;
}

int func_131()
{
	var uVar0;
	
	switch (func_15())
	{
		case 0x00000000:
			unk_0x6FB46C25CCB7E6D5(joaat("sp0_special_ability"), &uVar0, 0xFFFFFFFF);
			break;
		
		case 0x00000001:
			unk_0x6FB46C25CCB7E6D5(joaat("sp1_special_ability"), &uVar0, 0xFFFFFFFF);
			break;
		
		case 0x00000002:
			unk_0x6FB46C25CCB7E6D5(joaat("sp2_special_ability"), &uVar0, 0xFFFFFFFF);
			break;
	}
	return uVar0;
}

int func_132(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_133(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
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
		unk_0x516E63E474722206(iVar0, func_41(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_41(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_41(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_134(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_135()
{
	Global_791E = 0x00000001;
}

int func_136(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = 0x00000000;
	iVar2 = iParam1;
	if (!unk_0x440C646F2F11A2A1(iParam0, iParam1, 0x00000000))
	{
		iVar0 = 0x00000001;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0x00000000;
	}
	iVar3 = 0x00000000;
	if (iParam2 == 0x00000001)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			iVar3 = unk_0xD2AEDBB0268DF71A(iParam0, iVar2);
		}
		if (iVar3 == 0xFFFFFFFF)
		{
			iVar4 = unk_0x6DCAF294E20A0072(iVar2);
			if (iVar4 > 0x00000000)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0x9AEFFB8166364079(iParam0, iVar2, &iVar3);
			}
		}
	}
	vVar5 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		vVar5 = { iParam4, iParam5, iParam6 };
	}
	while (func_140(iVar2, iVar6) != 0x00000000)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (unk_0xAFB8387ED2D7213E(iParam0, iVar2, func_140(iVar2, iVar6)))
			{
				if (func_139(func_140(iVar2, iVar6)))
				{
					iVar7 = unk_0xE8213142E3A84F79(func_140(iVar2, iVar6));
				}
			}
		}
		iVar6++;
	}
	iVar1 = unk_0x5ACD4E66C7BF0F49(iVar2, iVar3, vVar5, iVar0, 0x3F800000, iVar7, iParam7, iParam8);
	while (func_140(iVar2, iVar6) != 0x00000000)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			if (unk_0xAFB8387ED2D7213E(iParam0, iVar2, func_140(iVar2, iVar6)))
			{
				unk_0x3599C729CF725E87(iVar1, func_140(iVar2, iVar6));
				func_137(iVar1, func_140(iVar2, iVar6));
			}
		}
		iVar6++;
	}
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		if (unk_0x440C646F2F11A2A1(iParam0, iVar2, 0x00000000))
		{
			unk_0x8E9786E049F1EAD7(iVar1, unk_0x7DD9FDEA5DFB355E(iParam0, iVar2));
		}
	}
	return iVar1;
}

void func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_138(iParam1);
	if (iVar0 != 0x00000000)
	{
		unk_0x3599C729CF725E87(iParam0, iVar0);
	}
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0x5C6C749C:
			return 0xB4FC92B0;
			break;
		
		case 0x15F7A390:
			return 0x1A1F1260;
			break;
		
		case 0x968E24DB:
			return 0xE4E00B70;
			break;
		
		case 0x017BFA99:
			return 0x2C298B2B;
			break;
		
		case 0xF2685C72:
			return 0xDFB79725;
			break;
		
		case 0xDD2231E6:
			return 0x6BD7228C;
			break;
		
		case 0xBB43EE76:
			return 0x9DDBCF8C;
			break;
		
		case 0x4D901310:
			return 0xB319A52C;
			break;
		
		case 0x5F31B653:
			return 0xC6836E12;
			break;
		
		case 0x697E19A0:
			return 0x43B1B173;
			break;
		
		case 0x930CB951:
			return 0x4ABDA3FA;
			break;
		
		case 0x0F7BEEDD:
			return 0xE7EE68EA;
			break;
		
		case 0x8A612EF6:
			return 0x29366D21;
			break;
		
		case 0x76FA8829:
			return 0x3ADE514B;
			break;
		
		case 0xA93C6CAC:
			return 0xE64513E9;
			break;
		
		case 0x9C905354:
			return 0xCD7AEB9A;
			break;
		
		case 0x4DFA3621:
			return 0xFA7B27A6;
			break;
		
		case 0x42E91FFF:
			return 0xE285CA9A;
			break;
		
		case 0x54A8437D:
			return 0x2B904B19;
			break;
		
		case 0x068C2746:
			return 0x22C24F9C;
			break;
		
		case 0x2366E467:
			return 0x8D0D5ECD;
			break;
		
		case 0x441882E6:
			return 0x1F07150A;
			break;
	}
	return 0x00000000;
}

int func_139(int iParam0)
{
	if ((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == 0x60BD749C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_140(int iParam0, int iParam1)
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
				iVar1 = func_142(iParam0, &uVar4);
				if (iVar1 != 0xFFFFFFFF)
				{
					iVar2 = 0x00000000;
					while (iVar2 < unk_0xA942498EEAA3EEAD(iVar1))
					{
						if (unk_0x8B27EE8DAA2A39B3(iVar1, iVar2, &Var5))
						{
							if (!func_141(Var5.f_3))
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

int func_141(int iParam0)
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

int func_142(int iParam0, var uParam1)
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

bool func_143()
{
	bool bVar0;
	
	bVar0 = unk_0x62A1F4500E8F07E0();
	if (!Global_12B4D)
	{
		if (!bVar0)
		{
			Global_12B4D = 0x00000001;
		}
	}
	return bVar0;
}

int func_144(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_145(iParam0, iParam1);
}

int func_145(int iParam0, int iParam1)
{
	if (func_17(0x0000000E) && !func_156(iParam0))
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
	if (func_155(&Global_4127F1))
	{
		if (func_153(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_146(&Global_4127F1, iParam0))
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

int func_146(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_17(0x0000000E) && !func_156(iParam1))
	{
		return 0x00000000;
	}
	if (func_153(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_152(uParam0) < 0f)
	{
		func_151(uParam0, 0x00000000);
	}
	func_149(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_147(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_147(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_17(0x0000000E) && !func_156(iParam1))
	{
		return 0x00000000;
	}
	if (func_153(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_152(uParam0) < 0f)
	{
		func_151(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_148(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_148(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_149(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_150(uParam0, iVar0);
		iVar0++;
	}
	func_151(uParam0, (Global_4127F0 - 0.5f));
}

void func_150(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_151(var uParam0, float fParam1)
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

float func_152(var uParam0)
{
	return uParam0->f_50;
}

bool func_153(var uParam0, int iParam1)
{
	return func_154(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_154(var uParam0, int iParam1)
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

bool func_155(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_156(int iParam0)
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

void func_157()
{
	if (fLocal_87 > 0f)
	{
		fLocal_87 = (fLocal_87 - (0.6f / (1f / unk_0x6117725E0134737F())));
	}
	else
	{
		fLocal_87 = 0f;
	}
	if (fLocal_87 >= 0f)
	{
		unk_0x838CC054A9235BEC(Global_9E6A[0x0000000A /*31*/], fLocal_87, 0x00000000, 0x00000001);
		unk_0x1BA7FCEAFCE8D46E(Global_9E6A[0x0000000A /*31*/], 0x00000004, 0x00000000, 0x00000001);
	}
	if (fLocal_86 < 0f)
	{
		fLocal_86 = (fLocal_86 + (0.6f / (1f / unk_0x6117725E0134737F())));
	}
	else
	{
		fLocal_86 = 0f;
	}
	if (fLocal_86 <= 0f)
	{
		unk_0x838CC054A9235BEC(Global_9E6A[0x00000009 /*31*/], fLocal_86, 0x00000000, 0x00000001);
		unk_0x1BA7FCEAFCE8D46E(Global_9E6A[0x00000009 /*31*/], 0x00000004, 0x00000000, 0x00000001);
	}
}

void func_158()
{
	if (fLocal_87 < 1f)
	{
		fLocal_87 = (fLocal_87 + (0.6f / (1f / unk_0x6117725E0134737F())));
	}
	else
	{
		fLocal_87 = 1f;
	}
	if (fLocal_87 <= 1f)
	{
		unk_0x838CC054A9235BEC(Global_9E6A[0x0000000A /*31*/], fLocal_87, 0x00000000, 0x00000001);
		unk_0x1BA7FCEAFCE8D46E(Global_9E6A[0x0000000A /*31*/], 0x00000004, 0x00000000, 0x00000001);
	}
	if (fLocal_86 > -1f)
	{
		fLocal_86 = (fLocal_86 - (0.6f / (1f / unk_0x6117725E0134737F())));
	}
	else
	{
		fLocal_86 = -1f;
	}
	if (fLocal_86 >= -1f)
	{
		unk_0x838CC054A9235BEC(Global_9E6A[0x00000009 /*31*/], fLocal_86, 0x00000000, 0x00000001);
		unk_0x1BA7FCEAFCE8D46E(Global_9E6A[0x00000009 /*31*/], 0x00000004, 0x00000000, 0x00000001);
	}
}

void func_159()
{
	switch (iLocal_93)
	{
		case 0x00000000:
			unk_0x523BCC9DC80CD82F(joaat("a_m_o_acult_02"));
			unk_0x523BCC9DC80CD82F(joaat("prop_anim_cash_pile_02"));
			unk_0x3F423BF5B8125A50("random@altruist_cult");
			unk_0x13896FDECC859926("AC_DELIVERED");
			unk_0x6D0C93EE4FBA9307(joaat("weapon_assaultrifle"), 0x0000001F, 0x00000000);
			if ((((unk_0xB87F6CF6E5628C67(joaat("a_m_o_acult_02")) && unk_0xB87F6CF6E5628C67(joaat("prop_anim_cash_pile_02"))) && unk_0xB4AE0788C1587752("random@altruist_cult")) && unk_0x13896FDECC859926("AC_DELIVERED")) && unk_0x1787731C4D1D6B19(joaat("weapon_assaultrifle")))
			{
				if (Global_1B416.f_619E.f_5 < 0x00000002)
				{
					if (Global_1B416.f_619E.f_5 == 0x00000000)
					{
						sLocal_269 = "ACULT_HI";
					}
					else
					{
						sLocal_269 = "ACULT_LEAVE5";
					}
					sLocal_263 = "cult_p5_guard";
					sLocal_265 = "cult_p5_trv";
					sLocal_266 = "cult_p5_victim_01";
					sLocal_267 = "cult_p5_victim_02";
					sLocal_268 = "cult_p5_cam";
					fLocal_89 = 0.75f;
					fLocal_88 = 0.999f;
				}
				else if (Global_1B416.f_619E.f_5 >= 0x00000002)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_267 = "cult_p7_victim_02";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					unk_0x523BCC9DC80CD82F(0x876CBCD2);
					unk_0x523BCC9DC80CD82F(0xB131133A);
					unk_0x523BCC9DC80CD82F(joaat("prop_box_wood05a"));
					unk_0x523BCC9DC80CD82F(joaat("prop_security_case_01"));
					if (!unk_0x39B7A3CCD2467CAB())
					{
						unk_0xAE1670DD12E839C3("ac_ig_3_p3_b", 0x00000008);
					}
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_104))
				{
					unk_0x142CC44DB769B57E(&iLocal_104);
				}
				func_23(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				unk_0xA37A90C62806D848(0x00000001);
				unk_0x8BCB70EB440DED83(0x00000000);
				unk_0xBFE31971E49FA500(0x00000000);
				unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0x00000001);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
				unk_0xC92DB9682A650680("AC_DELIVERED");
				if (func_187())
				{
					func_186(0x00000000);
				}
				func_184();
				SYSTEM::WAIT(0x00000000);
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_99 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xDF1306B443CD3D15(iLocal_99, 0x00000000))
					{
						if (unk_0x8B38C0DAEEDB5F9C(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = unk_0x728870EB733D12A1();
					if (!unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000000]) && !unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000001]))
					{
						unk_0xA3BF0AA5A2608191(uLocal_97[0x00000000]);
						unk_0x0A94A109271BE75A(uLocal_97[0x00000000]);
						unk_0xA3BF0AA5A2608191(uLocal_97[0x00000001]);
						unk_0x0A94A109271BE75A(uLocal_97[0x00000001]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 0x00000001:
			if (unk_0xC844350D5D58C99A(iLocal_99))
			{
				if (!unk_0xAF6690C489CC6203(iLocal_99))
				{
					unk_0x73270B3C9CC833FD(iLocal_99, 0x00000001, 0x00000000);
				}
				if (unk_0x5A91F08DF773C39D(iLocal_99, vLocal_54, 13f, 13f, 13f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0xA47B46945FF6DE74(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
					if (!unk_0x437347B10A200C4B(iLocal_99, 0x00000000))
					{
						unk_0xD8F6A53F4799FAFE(iLocal_99, 149.8882f);
						unk_0xB9FD7450C0DAB575(iLocal_99, 0x40A00000);
					}
				}
			}
			unk_0x536F1BE96C726C4B(vLocal_54, 12f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1035.625f, 4915.152f, 205.5761f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 128.2065f);
			if (!unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000000]) && !unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000001]))
			{
				unk_0xA47B46945FF6DE74(uLocal_97[0x00000000], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(uLocal_97[0x00000000], 128.2065f);
				unk_0xA47B46945FF6DE74(uLocal_97[0x00000001], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(uLocal_97[0x00000001], 128.2065f);
			}
			iLocal_98[0x00000000] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 0x00000001, 0x00000001);
			func_99(&uLocal_271, 0x00000001, iLocal_98[0x00000000], "ACULTMember1", 0x00000000, 0x00000001);
			if (Global_1B416.f_619E.f_5 >= 0x00000002)
			{
				iLocal_98[0x00000001] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 0x00000001, 0x00000001);
				func_99(&uLocal_271, 0x00000002, iLocal_98[0x00000001], "ACULTMember2", 0x00000000, 0x00000001);
			}
			func_99(&uLocal_271, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
			func_99(&uLocal_271, 0x00000003, 0x00000000, "ACULTMaster", 0x00000000, 0x00000001);
			func_99(&uLocal_271, 0x00000004, 0x00000000, "ACULTGroup", 0x00000000, 0x00000001);
			func_100(&uLocal_271, "ACULTAU", sLocal_269, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x11AD11297DC58CC7(iLocal_98[0x00000000], 0x00000001);
			iLocal_101 = unk_0x5ACD4E66C7BF0F49(joaat("weapon_assaultrifle"), 0xFFFFFFFF, unk_0x68F4C0EC296D3901(iLocal_98[0x00000000], 0x00000001), 0x00000001, 0x3F800000, 0x00000000, 0x00000000, 0x00000001);
			unk_0x9F528B1B53FBC5D9(iLocal_101, iLocal_98[0x00000000], unk_0x4A089F2B762B8D33(iLocal_98[0x00000000], 0x0000EB95), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
			if (Global_1B416.f_619E.f_5 < 0x00000002)
			{
				iLocal_100 = unk_0x7707E48765093646(joaat("prop_anim_cash_pile_02"), vLocal_53, 0x00000001, 0x00000001, 0x00000000);
				unk_0x9F528B1B53FBC5D9(iLocal_100, unk_0x16F2683693E537C9(), unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
			}
			else if (Global_1B416.f_619E.f_5 >= 0x00000002)
			{
				unk_0x262EF6C6306BEA6C(iLocal_98[0x00000001], joaat("weapon_assaultrifle"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			}
			iLocal_106 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", 0x00000001);
			iLocal_92 = unk_0xE9744DB7B8CA6965(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 0x00000002);
			unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 0x00000004, 0x00000000, 0x447A0000, 0x00000000);
			unk_0x915804B434753CBD(iLocal_98[0x00000000], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 0x00000004, 0x00000000, 0x447A0000, 0x00000000);
			if (Global_1B416.f_619E.f_5 >= 0x00000002)
			{
				unk_0x915804B434753CBD(iLocal_98[0x00000001], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 0x00000004, 0x00000000, 0x447A0000, 0x00000000);
			}
			unk_0x93E9ED66DAB9FBE3(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000000]) && !unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000001]))
			{
				unk_0x915804B434753CBD(uLocal_97[0x00000000], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 0x00000004, 0x00000000, 0x447A0000, 0x00000000);
				unk_0x915804B434753CBD(uLocal_97[0x00000001], iLocal_92, "random@altruist_cult", sLocal_267, 1000f, -2f, 0x00000004, 0x00000000, 0x447A0000, 0x00000000);
			}
			iLocal_93++;
			break;
		
		case 0x00000002:
			if (!unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000000]))
			{
				if (unk_0xCED082ADD3739B9F(uLocal_97[0x00000000]))
				{
					func_182(uLocal_97[0x00000000], "WHIMPER", "WAVELOAD_PAIN_MALE", 0x00000003);
				}
				else
				{
					func_182(uLocal_97[0x00000000], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 0x00000003);
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000001]))
			{
				if (unk_0xCED082ADD3739B9F(uLocal_97[0x00000001]))
				{
					func_182(uLocal_97[0x00000001], "WHIMPER", "WAVELOAD_PAIN_MALE", 0x00000003);
				}
				else
				{
					func_182(uLocal_97[0x00000001], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 0x00000003);
				}
			}
			if (unk_0xA45992A6CE82FB43(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000000]))
			{
				if (unk_0xCED082ADD3739B9F(uLocal_97[0x00000000]))
				{
					func_182(uLocal_97[0x00000000], "WHIMPER", "WAVELOAD_PAIN_MALE", 0x00000003);
				}
				else
				{
					func_182(uLocal_97[0x00000000], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 0x00000003);
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000001]))
			{
				if (unk_0xCED082ADD3739B9F(uLocal_97[0x00000001]))
				{
					func_182(uLocal_97[0x00000001], "WHIMPER", "WAVELOAD_PAIN_MALE", 0x00000003);
				}
				else
				{
					func_182(uLocal_97[0x00000001], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 0x00000003);
				}
			}
			if (unk_0xA45992A6CE82FB43(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 0x00000004:
			if (Global_1B416.f_619E.f_5 < 0x00000002)
			{
				func_135();
				if (unk_0xC844350D5D58C99A(iLocal_98[0x00000000]))
				{
					unk_0xEBA53F35D0085654(&(iLocal_98[0x00000000]));
				}
				if (unk_0xC844350D5D58C99A(iLocal_98[0x00000001]))
				{
					unk_0xEBA53F35D0085654(&(iLocal_98[0x00000001]));
				}
				if (unk_0xC844350D5D58C99A(iLocal_100))
				{
					unk_0xF690C84DADBB3551(&iLocal_100);
				}
				if (unk_0xC844350D5D58C99A(iLocal_101))
				{
					unk_0xF690C84DADBB3551(&iLocal_101);
				}
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
				unk_0xE3BB8E05FCEB3FBE(iLocal_106, 0x00000000);
				func_23(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				unk_0x8BCB70EB440DED83(0x00000001);
				unk_0xBFE31971E49FA500(0x00000001);
				unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x2FB9A57162E54BAB(0f);
				func_160(func_15(), 0x00000001, 0x000007D0, 0x00000000, 0x00000000);
			}
			unk_0xC92DB9682A650680("AC_DONE");
			Global_1B416.f_619E.f_5 += 2;
			iLocal_78 = 0x00000001;
			break;
	}
}

void func_160(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_181(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_181(iParam0) == 0x00000004)
	{
		return;
	}
	func_161(func_181(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
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

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_180();
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
					func_179(0x00000063, 0x00000001);
					func_178(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_178(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_178(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_176(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_171(0x00000005))
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
							func_178(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_178(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_178(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_171(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_178(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_178(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_178(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_178(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_178(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_178(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_178(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_178(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_178(joaat("sp2_money_spent_property"), iParam3);
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
									func_178(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_178(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_178(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_178(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_178(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_178(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_171(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_178(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_178(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_178(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_178(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_178(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_178(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_170(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_179(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_179(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_179(0x00000060, iParam3);
					break;
			}
			func_179(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_164(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_164(iVar1);
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
					func_178(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_178(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_178(joaat("sp2_total_cash_earned"), iParam3);
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
	func_163(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_162(0x00000000);
	}
	return 0x00000001;
}

void func_162(bool bParam0)
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

void func_163(int iParam0)
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

void func_164(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_169(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_169(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_169(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_169(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_167(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_167(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_167(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_167(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_167(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_167(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_166() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_166() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_165(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_165(int iParam0)
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

int func_166()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_167(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_168(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_168(var uParam0)
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

int func_169(int iParam0, bool bParam1, int iParam2, int iParam3)
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

void func_170(int iParam0)
{
	func_179(0x0000005D, iParam0);
	func_179(0x0000001D, iParam0);
	func_179(0x0000001E, iParam0);
}

bool func_171(int iParam0)
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
		return func_173(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_173(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_173(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_173(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_172(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_172(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_172(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_172(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_172(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_172(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_166() /*10930*/].f_181E.f_A, iParam0);
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_168(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_173(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_27();
	}
	iVar1 = func_175(iParam0, iParam1);
	uVar2 = func_174(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_174(int iParam0)
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

int func_175(int iParam0, int iParam1)
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

int func_176(bool bParam0)
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
		func_177(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_144(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_177(int iParam0, int iParam1)
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

void func_178(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_179(int iParam0, int iParam1)
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

void func_180()
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

int func_181(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

void func_182(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_183(iParam3), 0x00000000);
}

int func_183(int iParam0)
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

void func_184()
{
	Global_4CD7 = 0x00000000;
	func_185();
}

void func_185()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

void func_186(int iParam0)
{
	Global_5538 = iParam0;
}

int func_187()
{
	if (Global_5538 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_188()
{
	switch (iLocal_93)
	{
		case 0x00000000:
			unk_0x523BCC9DC80CD82F(joaat("a_m_o_acult_02"));
			unk_0x523BCC9DC80CD82F(joaat("prop_anim_cash_pile_02"));
			unk_0x3F423BF5B8125A50("random@altruist_cult");
			unk_0x13896FDECC859926("AC_DELIVERED");
			unk_0x6D0C93EE4FBA9307(joaat("weapon_assaultrifle"), 0x0000001F, 0x00000000);
			if ((((unk_0xB87F6CF6E5628C67(joaat("a_m_o_acult_02")) && unk_0xB87F6CF6E5628C67(joaat("prop_anim_cash_pile_02"))) && unk_0xB4AE0788C1587752("random@altruist_cult")) && unk_0x13896FDECC859926("AC_DELIVERED")) && unk_0x1787731C4D1D6B19(joaat("weapon_assaultrifle")))
			{
				if (Global_1B416.f_619E.f_5 == 0x00000000)
				{
					sLocal_269 = "ACULT_HI";
					sLocal_263 = "cult_p2_guard";
					sLocal_265 = "cult_p2_trv";
					sLocal_266 = "cult_p2_victim";
					sLocal_268 = "cult_p2_cam";
					fLocal_89 = 0.8f;
					fLocal_88 = 0.968f;
				}
				else if (Global_1B416.f_619E.f_5 == 0x00000001)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_1B416.f_619E.f_5 == 0x00000002)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_1B416.f_619E.f_5 >= 0x00000003)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					unk_0x523BCC9DC80CD82F(0x876CBCD2);
					unk_0x523BCC9DC80CD82F(0xB131133A);
					unk_0x523BCC9DC80CD82F(joaat("prop_box_wood05a"));
					unk_0x523BCC9DC80CD82F(joaat("prop_security_case_01"));
					if (!unk_0x39B7A3CCD2467CAB())
					{
						unk_0xAE1670DD12E839C3("ac_ig_3_p3_b", 0x00000008);
					}
				}
				if (unk_0xE4EDC4B0E92C078B(iLocal_104))
				{
					unk_0x142CC44DB769B57E(&iLocal_104);
				}
				func_23(0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000);
				unk_0xA37A90C62806D848(0x00000001);
				unk_0x8BCB70EB440DED83(0x00000000);
				unk_0xBFE31971E49FA500(0x00000000);
				unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0x00000001);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
				unk_0xC92DB9682A650680("AC_DELIVERED");
				if (func_187())
				{
					func_186(0x00000000);
				}
				func_184();
				SYSTEM::WAIT(0x00000000);
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					iLocal_99 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
					if (unk_0xDF1306B443CD3D15(iLocal_99, 0x00000000))
					{
						if (unk_0x8B38C0DAEEDB5F9C(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = unk_0x728870EB733D12A1();
					if (!unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000000]))
					{
						unk_0xA3BF0AA5A2608191(uLocal_97[0x00000000]);
						unk_0x0A94A109271BE75A(uLocal_97[0x00000000]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 0x00000001:
			if (unk_0xC844350D5D58C99A(iLocal_99))
			{
				if (!unk_0xAF6690C489CC6203(iLocal_99))
				{
					unk_0x73270B3C9CC833FD(iLocal_99, 0x00000001, 0x00000000);
				}
				if (unk_0x5A91F08DF773C39D(iLocal_99, vLocal_54, 13f, 13f, 13f, 0x00000000, 0x00000001, 0x00000000))
				{
					unk_0xA47B46945FF6DE74(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
					if (!unk_0x437347B10A200C4B(iLocal_99, 0x00000000))
					{
						unk_0xD8F6A53F4799FAFE(iLocal_99, 149.8882f);
						unk_0xB9FD7450C0DAB575(iLocal_99, 0x40A00000);
					}
				}
			}
			unk_0x536F1BE96C726C4B(vLocal_54, 12f, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1035.625f, 4915.152f, 205.5761f, 0x00000001, 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 128.2065f);
			if (!unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000000]))
			{
				unk_0xA47B46945FF6DE74(uLocal_97[0x00000000], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 0x00000001, 0x00000000, 0x00000000, 0x00000001);
				unk_0xD8F6A53F4799FAFE(uLocal_97[0x00000000], 128.2065f);
			}
			iLocal_98[0x00000000] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 0x00000001, 0x00000001);
			func_99(&uLocal_271, 0x00000001, iLocal_98[0x00000000], "ACULTMember1", 0x00000000, 0x00000001);
			if (Global_1B416.f_619E.f_5 >= 0x00000003)
			{
				iLocal_98[0x00000001] = unk_0x36F2404464202779(0x0000001A, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 0x00000001, 0x00000001);
				func_99(&uLocal_271, 0x00000002, iLocal_98[0x00000001], "ACULTMember2", 0x00000000, 0x00000001);
			}
			func_99(&uLocal_271, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
			func_99(&uLocal_271, 0x00000003, 0x00000000, "ACULTMaster", 0x00000000, 0x00000001);
			func_99(&uLocal_271, 0x00000004, 0x00000000, "ACULTGroup", 0x00000000, 0x00000001);
			if (Global_1B416.f_619E.f_5 != 0x00000001 && Global_1B416.f_619E.f_5 != 0x00000002)
			{
				func_100(&uLocal_271, "ACULTAU", sLocal_269, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			SYSTEM::SETTIMERB(0x00000000);
			unk_0x11AD11297DC58CC7(iLocal_98[0x00000000], 0x00000001);
			iLocal_100 = unk_0x7707E48765093646(joaat("prop_anim_cash_pile_02"), vLocal_53, 0x00000001, 0x00000001, 0x00000000);
			iLocal_101 = unk_0x5ACD4E66C7BF0F49(joaat("weapon_assaultrifle"), 0xFFFFFFFF, unk_0x68F4C0EC296D3901(iLocal_98[0x00000000], 0x00000001), 0x00000001, 0x3F800000, 0x00000000, 0x00000000, 0x00000001);
			unk_0x9F528B1B53FBC5D9(iLocal_101, iLocal_98[0x00000000], unk_0x4A089F2B762B8D33(iLocal_98[0x00000000], 0x0000EB95), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
			if (Global_1B416.f_619E.f_5 < 0x00000003)
			{
				if (Global_1B416.f_619E.f_5 == 0x00000000)
				{
					unk_0x9F528B1B53FBC5D9(iLocal_100, unk_0x16F2683693E537C9(), unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), 0x0000EB95), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
				}
				else
				{
					unk_0x9F528B1B53FBC5D9(iLocal_100, unk_0x16F2683693E537C9(), unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), 0x00006F06), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
				}
			}
			else if (Global_1B416.f_619E.f_5 >= 0x00000003)
			{
				unk_0x262EF6C6306BEA6C(iLocal_98[0x00000001], joaat("weapon_assaultrifle"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			}
			iLocal_106 = unk_0x0D032838710EE57D("DEFAULT_ANIMATED_CAMERA", 0x00000001);
			iLocal_92 = unk_0xE9744DB7B8CA6965(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 0x00000002);
			unk_0x915804B434753CBD(unk_0x16F2683693E537C9(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 0x00000004, 0x00000000, 0x447A0000, 0x00000000);
			unk_0x915804B434753CBD(iLocal_98[0x00000000], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 0x00000004, 0x00000000, 0x447A0000, 0x00000000);
			if (Global_1B416.f_619E.f_5 >= 0x00000003)
			{
				unk_0x915804B434753CBD(iLocal_98[0x00000001], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 0x00000004, 0x00000000, 0x447A0000, 0x00000000);
			}
			unk_0x93E9ED66DAB9FBE3(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000000]))
			{
				unk_0x915804B434753CBD(uLocal_97[0x00000000], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 0x00000004, 0x00000000, 0x447A0000, 0x00000000);
			}
			iLocal_93++;
			break;
		
		case 0x00000002:
			if (!unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000000]))
			{
				if (unk_0xCED082ADD3739B9F(uLocal_97[0x00000000]))
				{
					func_182(uLocal_97[0x00000000], "WHIMPER", "WAVELOAD_PAIN_MALE", 0x00000003);
				}
				else
				{
					func_182(uLocal_97[0x00000000], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 0x00000003);
				}
			}
			if (SYSTEM::TIMERB() > 0x000007D0 && SYSTEM::TIMERB() < 0x00000834)
			{
				if (Global_1B416.f_619E.f_5 == 0x00000001 || Global_1B416.f_619E.f_5 == 0x00000002)
				{
					if (!func_115())
					{
						func_100(&uLocal_271, "ACULTAU", sLocal_269, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
			}
			if (unk_0xA45992A6CE82FB43(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 0x00000003:
			if (!unk_0xEB6A8945D1AC98A1(uLocal_97[0x00000000]))
			{
				if (unk_0xCED082ADD3739B9F(uLocal_97[0x00000000]))
				{
					func_182(uLocal_97[0x00000000], "WHIMPER", "WAVELOAD_PAIN_MALE", 0x00000003);
				}
				else
				{
					func_182(uLocal_97[0x00000000], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 0x00000003);
				}
			}
			if (Global_1B416.f_619E.f_5 == 0x00000001 || Global_1B416.f_619E.f_5 == 0x00000002)
			{
				if ((unk_0xA45992A6CE82FB43(iLocal_92) > 0.9742857f && !iLocal_85) && unk_0x6C3F127AAF415E69() == 0x00000004)
				{
					unk_0x82A772610883F395("CamPushInNeutral", 0x00000000, 0x00000000);
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0x00000001);
					iLocal_85 = 0x00000001;
				}
			}
			if (unk_0xA45992A6CE82FB43(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 0x00000004:
			if (Global_1B416.f_619E.f_5 < 0x00000003)
			{
				if (Global_1B416.f_619E.f_5 != 0x00000001 && Global_1B416.f_619E.f_5 != 0x00000002)
				{
					func_135();
					if (unk_0xC844350D5D58C99A(iLocal_98[0x00000000]))
					{
						unk_0xEBA53F35D0085654(&(iLocal_98[0x00000000]));
					}
					if (unk_0xC844350D5D58C99A(iLocal_98[0x00000001]))
					{
						unk_0xEBA53F35D0085654(&(iLocal_98[0x00000001]));
					}
				}
				else
				{
					SYSTEM::SETTIMERB(0x00000000);
					if (unk_0xC844350D5D58C99A(iLocal_98[0x00000000]))
					{
						unk_0x4A4806F9D471E491(iLocal_98[0x00000000], 0x00000000, 0x00000000);
					}
					if (unk_0xC844350D5D58C99A(iLocal_98[0x00000001]))
					{
						unk_0x4A4806F9D471E491(iLocal_98[0x00000001], 0x00000000, 0x00000000);
					}
					if (unk_0xC844350D5D58C99A(uLocal_97[0x00000000]))
					{
						unk_0x4A4806F9D471E491(uLocal_97[0x00000000], 0x00000000, 0x00000000);
					}
					iLocal_93++;
				}
				if (unk_0xC844350D5D58C99A(iLocal_100))
				{
					unk_0xF690C84DADBB3551(&iLocal_100);
				}
				if (unk_0xC844350D5D58C99A(iLocal_101))
				{
					unk_0xF690C84DADBB3551(&iLocal_101);
				}
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				if (Global_1B416.f_619E.f_5 == 0x00000000)
				{
					unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 0xD827C3DB, 0x00000000, 0x00000000, 0x00000000);
					unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 1f, 0x000002EE, 0x00000000, 0x00000001, 0x00000000);
				}
				if (unk_0x7F8A39872A07D2CE(sLocal_268, "cult_p4_cam"))
				{
					unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				}
				else
				{
					unk_0x04B065D07D2FB5B9(0x00000000, 0x00000000, 0x00000003, 0x00000000);
				}
				unk_0xE3BB8E05FCEB3FBE(iLocal_106, 0x00000000);
				func_23(0x00000000, 0x00000001, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
				unk_0x8BCB70EB440DED83(0x00000001);
				unk_0xBFE31971E49FA500(0x00000001);
				unk_0x6C5B8C4234CEA349(unk_0x16F2683693E537C9(), 0x00000000);
				unk_0x2FB9A57162E54BAB(0f);
				func_160(func_15(), 0x00000001, 0x000003E8, 0x00000000, 0x00000000);
			}
			if (Global_1B416.f_619E.f_5 != 0x00000001 && Global_1B416.f_619E.f_5 != 0x00000002)
			{
				unk_0xC92DB9682A650680("AC_DONE");
				Global_1B416.f_619E.f_5++;
				iLocal_78 = 0x00000001;
			}
			break;
		
		case 0x00000005:
			if (!func_115() || SYSTEM::TIMERB() > 0x00001B58)
			{
				func_135();
				if (unk_0xC844350D5D58C99A(iLocal_98[0x00000000]))
				{
					unk_0xEBA53F35D0085654(&(iLocal_98[0x00000000]));
				}
				if (unk_0xC844350D5D58C99A(iLocal_98[0x00000001]))
				{
					unk_0xEBA53F35D0085654(&(iLocal_98[0x00000001]));
				}
				unk_0xC92DB9682A650680("AC_DONE");
				Global_1B416.f_619E.f_5++;
				iLocal_78 = 0x00000001;
			}
			break;
	}
}

void func_189()
{
	if (func_191())
	{
		if (func_15() == 0x00000002)
		{
			if (unk_0x7AEFFBD77F2CF1EC(func_190()))
			{
				unk_0xF5BDC0FED0F08D25(func_190(), &uLocal_90, &iLocal_91);
				if (iLocal_91 == 0x00000001)
				{
					uLocal_97[0x00000000] = unk_0x9B50A0F7FCCD175C(func_190(), 0x00000000);
					if (unk_0x5A91F08DF773C39D(uLocal_97[0x00000000], vLocal_54, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
							{
								unk_0xE0C0351D5B931E37(unk_0x728870EB733D12A1(), 10.5f, 0x00000005, 0x00000000);
							}
						}
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_50 = 0x00000001;
					}
				}
				else if (iLocal_91 == 0x00000002)
				{
					uLocal_97[0x00000000] = unk_0x9B50A0F7FCCD175C(func_190(), 0x00000000);
					uLocal_97[0x00000001] = unk_0x9B50A0F7FCCD175C(func_190(), 0x00000001);
					if (unk_0x5A91F08DF773C39D(uLocal_97[0x00000000], vLocal_54, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000) && unk_0x5A91F08DF773C39D(uLocal_97[0x00000001], vLocal_54, 5f, 5f, 5f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
						{
							if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
							{
								unk_0xE0C0351D5B931E37(unk_0x728870EB733D12A1(), 10.5f, 0x00000005, 0x00000000);
							}
						}
						SYSTEM::SETTIMERA(0x00000000);
						iLocal_50 = 0x00000001;
					}
				}
			}
		}
	}
}

int func_190()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

bool func_191()
{
	return Global_791D;
}

void func_192()
{
	if (func_195())
	{
		if (iLocal_260 == 0x00000000)
		{
			iLocal_260 = unk_0x7D6CA5F52B3748BF(vLocal_53 - Vector(100f, 60f, 80f), vLocal_53 + Vector(100f, 60f, 80f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
		}
		while (unk_0x0EB28750412C3A5A(func_95(unk_0xD803B885F5E47A62()), vLocal_53, 0x00000001) < 209f)
		{
			SYSTEM::WAIT(0x00000000);
		}
	}
	if (func_15() == 0x00000000 || func_15() == 0x00000001)
	{
		if (unk_0x256517DE1B6755D4(0x783E3868, 0x6F0783F5) != 0x00000005)
		{
			if (func_194())
			{
				unk_0x0E2400AB9174FA81(0x00000005, 0x783E3868, 0x6F0783F5);
			}
			else if (func_193())
			{
				unk_0x0E2400AB9174FA81(0x00000005, 0x783E3868, 0x6F0783F5);
			}
		}
	}
	else if (func_15() == 0x00000002)
	{
		if (unk_0x256517DE1B6755D4(0x783E3868, 0x6F0783F5) != 0x00000005)
		{
			if (func_194())
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()) || (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()) && unk_0xBBFFD1937ED16008(unk_0xD803B885F5E47A62())))
				{
					unk_0x0E2400AB9174FA81(0x00000005, 0x783E3868, 0x6F0783F5);
				}
			}
			else if (func_193())
			{
				unk_0x0E2400AB9174FA81(0x00000005, 0x783E3868, 0x6F0783F5);
			}
			else if (unk_0x256517DE1B6755D4(0x783E3868, 0x6F0783F5) != 0x00000001)
			{
				unk_0x0E2400AB9174FA81(0x00000001, 0x783E3868, 0x6F0783F5);
			}
		}
	}
	if (func_194())
	{
		if (iLocal_83)
		{
			if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000003))
			{
				unk_0xC92DB9682A650680("AC_START");
			}
			unk_0x51B096AAC60548C1(0f);
			unk_0x837C600ECEE8ABA2("COUNTRYSIDE_ALTRUIST_CULT_01", 0x00000001);
			if (unk_0xBF75E4DF4C367CD9(Global_9E6A[0x00000009 /*31*/].f_2, 6f, Global_9E6A[0x00000009 /*31*/].f_5, 0x00000000))
			{
				unk_0x6DA3AC47D5DB9EED(Global_9E6A[0x00000009 /*31*/].f_5, Global_9E6A[0x00000009 /*31*/].f_2, 0x00000000, 0f, 0x00000000);
			}
			if (unk_0xBF75E4DF4C367CD9(Global_9E6A[0x0000000A /*31*/].f_2, 6f, Global_9E6A[0x0000000A /*31*/].f_5, 0x00000000))
			{
				unk_0x6DA3AC47D5DB9EED(Global_9E6A[0x0000000A /*31*/].f_5, Global_9E6A[0x0000000A /*31*/].f_2, 0x00000000, 0f, 0x00000000);
			}
			bLocal_84 = 0x00000001;
			iLocal_83 = 0x00000000;
		}
	}
	else if (!iLocal_83)
	{
		if (unk_0x7E369B13C7215476())
		{
			unk_0xC92DB9682A650680("AC_END");
		}
		unk_0x51B096AAC60548C1(1f);
		unk_0x837C600ECEE8ABA2("COUNTRYSIDE_ALTRUIST_CULT_01", 0x00000000);
		if (!bLocal_84)
		{
			func_157();
		}
		iLocal_83 = 0x00000001;
	}
}

int func_193()
{
	if ((((((unk_0x53129655DBEDC6EA(vLocal_55, vLocal_56, fLocal_57, 0x00000001) || unk_0x53129655DBEDC6EA(vLocal_58, vLocal_59, fLocal_60, 0x00000001)) || unk_0x53129655DBEDC6EA(vLocal_61, vLocal_62, fLocal_63, 0x00000001)) || unk_0x53129655DBEDC6EA(vLocal_64, vLocal_65, fLocal_66, 0x00000001)) || unk_0x53129655DBEDC6EA(vLocal_67, vLocal_68, fLocal_69, 0x00000001)) || unk_0x53129655DBEDC6EA(vLocal_70, vLocal_71, fLocal_72, 0x00000001)) || unk_0x53129655DBEDC6EA(vLocal_73, vLocal_74, fLocal_75, 0x00000001))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_194()
{
	if ((((((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_55, vLocal_56, fLocal_57, 0x00000000, 0x00000001, 0x00000000) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_58, vLocal_59, fLocal_60, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_61, vLocal_62, fLocal_63, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_64, vLocal_65, fLocal_66, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_67, vLocal_68, fLocal_69, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_70, vLocal_71, fLocal_72, 0x00000000, 0x00000001, 0x00000000)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vLocal_73, vLocal_74, fLocal_75, 0x00000000, 0x00000001, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_195()
{
	if (Global_1B416.f_619E.f_5 == 0x000003E8)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_196()
{
	unk_0x0E2400AB9174FA81(0x000000FF, 0x783E3868, 0x6F0783F5);
	if (Global_1B416.f_619E.f_5 >= iLocal_96 && Global_1B416.f_619E.f_5 != 0x000003E8)
	{
		if (bLocal_76)
		{
			func_1(0x00000001);
			func_11();
			func_3(0x00000000);
			iLocal_50 = 0x00000003;
		}
		else
		{
			func_197(&iLocal_109);
			Global_16F31 = 0x00000000;
			Global_16F32 = 0x00000000;
			Global_16F33 = 0x00000000;
			func_14(0x00000000, 0x00000001);
			func_12(0x00000000, 0x00000001);
			func_2(0x00000000);
			unk_0x2C84016B4A95F6BA(0x00000001);
			unk_0x65C5EBCA17A891FC(0x00000000);
			unk_0x4DB69487E1A9EE2A(0x00000000);
			func_3(0x00000000);
			unk_0x51B096AAC60548C1(1f);
			unk_0x15EA7F4313456B1D(0x00000003, 0x00000001);
			unk_0x15EA7F4313456B1D(0x00000005, 0x00000001);
			unk_0x96D521DDDB9AD218();
			iLocal_83 = 0x00000000;
			func_96();
			Global_1B416.f_619E.f_5 = (iLocal_96 - 0x00000001);
			unk_0x10FAF14A60A0DBE1();
		}
	}
	else
	{
		unk_0xB547E3FFEB27073E();
		func_197(&iLocal_109);
		Global_16F31 = 0x00000000;
		Global_16F32 = 0x00000000;
		Global_16F33 = 0x00000000;
		func_14(0x00000000, 0x00000001);
		func_12(0x00000000, 0x00000001);
		func_2(0x00000000);
		unk_0x2C84016B4A95F6BA(0x00000001);
		unk_0x65C5EBCA17A891FC(0x00000000);
		unk_0x4DB69487E1A9EE2A(0x00000000);
		func_3(0x00000000);
		if (unk_0x83D8570832F172A7(iLocal_259))
		{
			unk_0xE17FDF9E3068281B(&iLocal_259);
			func_98(0x00000000);
		}
		unk_0x51B096AAC60548C1(1f);
		unk_0x15EA7F4313456B1D(0x00000003, 0x00000001);
		unk_0x15EA7F4313456B1D(0x00000005, 0x00000001);
		unk_0x96D521DDDB9AD218();
		iLocal_83 = 0x00000000;
		unk_0x10FAF14A60A0DBE1();
	}
}

void func_197(int iParam0)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0xE17FDF9E3068281B(iParam0);
		*iParam0 = 0x00000000;
	}
}

