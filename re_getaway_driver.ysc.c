#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	float fLocal_50 = 0f;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 16;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
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
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
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
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	vector3 vLocal_232 = { 0f, 0f, 0f };
	vector3 vLocal_233 = { 0f, 0f, 0f };
	vector3 vLocal_234 = { 0f, 0f, 0f };
	vector3 vLocal_235 = { 0f, 0f, 0f };
	vector3 vLocal_236 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	vector3 vLocal_238 = { 0f, 0f, 0f };
	vector3 vLocal_239 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	vector3 vLocal_241 = { 0f, 0f, 0f };
	vector3 vLocal_242 = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	vector3 vLocal_244 = { 0f, 0f, 0f };
	vector3 vLocal_245 = { 0f, 0f, 0f };
	bool bLocal_246 = 0;
	bool bLocal_247 = 0;
	bool bLocal_248 = 0;
	bool bLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255[2] = { 0, 0 };
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258[2] = { 0, 0 };
	int iLocal_259[5] = { 0, 0, 0, 0, 0 };
	int iLocal_260[3] = { 0, 0, 0 };
	int iLocal_261[2] = { 0, 0 };
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270 = 8;
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
	var uLocal_417 = 1;
	struct<2> Local_418 = { 0, 5 } ;
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
	var uLocal_434 = 5;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	var uVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iLocal_0 = 0x00000003;
	iLocal_4 = 0x00000001;
	iLocal_5 = 0x00000086;
	iLocal_6 = 0x00000086;
	iLocal_7 = 0x00000001;
	iLocal_8 = 0x00000001;
	iLocal_9 = 0x00000001;
	iLocal_10 = 0x00000086;
	iLocal_11 = 0x00000001;
	iLocal_12 = 0x0000000C;
	iLocal_13 = 0x0000000C;
	fLocal_16 = 0.001f;
	iLocal_19 = 0xFFFFFFFF;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	iLocal_47 = unk_0xAD1355DD1E5D2D9B();
	uLocal_48 = unk_0x817B3657F78A517A();
	fLocal_50 = -1f;
	iLocal_218 = 0x00000001;
	iLocal_227 = 0xFFFFFFFF;
	iLocal_228 = 0xFFFFFFFF;
	vLocal_236 = { 370.2576f, -1597.488f, 35.94954f };
	vLocal_237 = { 824.992f, -1289.267f, 27.24564f };
	vLocal_238 = { 450.1889f, -981.6754f, 42.69174f };
	vLocal_239 = { -1088.37f, -842.2911f, 30.27554f };
	vLocal_240 = { 608.9076f, 0.806411f, 100.2497f };
	vLocal_241 = { -562.0159f, -130.8113f, 37.4369f };
	vLocal_242 = { 1855.237f, 3683.236f, 33.29165f };
	vLocal_243 = { -443.5063f, 6016.231f, 30.71787f };
	vLocal_244 = { -1034.6f, 4918.6f, 205.9f };
	iVar0 = 0x00000000;
	iVar2 = 0x00000000;
	vLocal_232 = { ScriptParam_418.f_1[0x00000000 /*3*/] };
	Var1 = joaat("g_m_y_mexgoon_02");
	Var1.f_1 = joaat("hc_gunman");
	Var1.f_2 = joaat("mp_m_shopkeep_01");
	Var1.f_3 = joaat("a_f_y_soucent_01");
	Var1.f_4 = joaat("a_m_m_soucent_01");
	Var1.f_5 = joaat("s_m_y_cop_01");
	Var1.f_6 = joaat("police3");
	if (unk_0x2EBF608FFE6CA406(0x0000000B))
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]))
		{
			if (unk_0x16102BEDC7435774(iLocal_258[0x00000000]))
			{
				unk_0x0A94A109271BE75A(iLocal_258[0x00000000]);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
		{
			if (unk_0x16102BEDC7435774(iLocal_258[0x00000001]))
			{
				unk_0x0A94A109271BE75A(iLocal_258[0x00000001]);
			}
		}
		func_246(Var1, &iLocal_258, bVar4);
	}
	func_245(&uLocal_270, 0x00000003);
	if (func_214(vLocal_232, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000))
	{
		func_211(0xFFFFFFFF);
	}
	else
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (iVar0 != 0x00000007)
	{
		iVar8 = 0x00000000;
		func_208(&uLocal_270);
		if (!unk_0x338D6FF72D84D90F() && !func_207())
		{
			iVar8 = 0x00000000;
			iVar0 = 0x00000007;
			func_246(Var1, &iLocal_258, bVar4);
		}
		if (!func_207())
		{
			if (func_206() || func_205(0x00000007))
			{
				iVar8 = 0x00000000;
				iVar0 = 0x00000007;
				func_246(Var1, &iLocal_258, bVar4);
			}
		}
		unk_0x1A6DFFFEEC27BF4F("RE_GD", 0x00000000);
		if (func_204())
		{
			if (unk_0xC844350D5D58C99A(iLocal_258[0x00000000]))
			{
				unk_0xEBA53F35D0085654(&(iLocal_258[0x00000000]));
			}
			if (unk_0xC844350D5D58C99A(iLocal_258[0x00000001]))
			{
				unk_0xEBA53F35D0085654(&(iLocal_258[0x00000001]));
			}
			while (!func_203())
			{
				SYSTEM::WAIT(0x00000000);
			}
			func_199(0x00000009, 0x00000000);
			func_190(0xFFFFFFFF, 0x00000000);
			func_187();
			iVar8 = 0x00000000;
			iVar0 = 0x00000007;
			func_246(Var1, &iLocal_258, bVar4);
		}
		if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000) && !unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
		{
			if (unk_0x029064EA9141FCC2(func_186(unk_0xD803B885F5E47A62()) - Vector(10f, 20f, 20f), func_186(unk_0xD803B885F5E47A62()) + Vector(10f, 20f, 20f)) || unk_0x9E9FD30CF64A88A8(func_186(unk_0xD803B885F5E47A62()) - Vector(10f, 20f, 20f), func_186(unk_0xD803B885F5E47A62()) + Vector(10f, 20f, 20f)))
			{
				if ((((!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001])) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x728870EB733D12A1(), 0x00000000)) && unk_0xC42A92762C58E1B9(iLocal_258[0x00000000], unk_0x728870EB733D12A1(), 0x00000000)) && unk_0xC42A92762C58E1B9(iLocal_258[0x00000001], unk_0x728870EB733D12A1(), 0x00000000))
				{
					if (unk_0x9C66D99E63E8E24C(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) < 0.2f)
					{
						if (iLocal_228 == 0xFFFFFFFF)
						{
							iLocal_228 = unk_0x1C0640BA9A7327B3();
						}
					}
					else
					{
						iLocal_228 = 0xFFFFFFFF;
					}
					if (iLocal_228 != 0xFFFFFFFF && unk_0x1C0640BA9A7327B3() > iLocal_228 + 1000)
					{
						if (!func_185())
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_LOSE", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						if (iLocal_228 != 0xFFFFFFFF && unk_0x1C0640BA9A7327B3() > iLocal_228 + 10000)
						{
							func_169();
							SYSTEM::WAIT(0x00000000);
							func_171(&uLocal_53, "REGETAU", "REAWA_COPS", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]))
							{
								unk_0xDD353D0E9C789D0E(&uLocal_265);
								unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
								unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0x75ABDC5F81978924(uLocal_265);
								unk_0x78ADC381772E3D54(iLocal_258[0x00000000], iLocal_265);
								unk_0xF82EA857DA10E0CD(&iLocal_265);
								unk_0xFADC0A217229F6B5(iLocal_258[0x00000000], 0x00000001);
							}
							if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
							{
								unk_0xDD353D0E9C789D0E(&iLocal_265);
								unk_0x75CDA8644CD3B5F5(0x00000000, 0x000001F4, 0x00000000);
								unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
								unk_0x75ABDC5F81978924(iLocal_265);
								unk_0x78ADC381772E3D54(iLocal_258[0x00000001], iLocal_265);
								unk_0xF82EA857DA10E0CD(&iLocal_265);
								unk_0xFADC0A217229F6B5(iLocal_258[0x00000001], 0x00000001);
							}
							iVar8 = 0x00000000;
							iVar0 = 0x00000007;
							func_246(Var1, &iLocal_258, bVar4);
						}
					}
				}
			}
		}
		if (iVar2 > 0x00000001)
		{
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				unk_0x0E2400AB9174FA81(0x000000FF, iLocal_266, 0xC26D562A);
				unk_0x0E2400AB9174FA81(0x000000FF, iLocal_266, 0x45897C40);
				unk_0x0E2400AB9174FA81(0x000000FF, 0xC26D562A, iLocal_266);
				unk_0x0E2400AB9174FA81(0x000000FF, 0x45897C40, iLocal_266);
			}
			else
			{
				unk_0x0E2400AB9174FA81(0x00000001, iLocal_266, 0xC26D562A);
				unk_0x0E2400AB9174FA81(0x00000001, iLocal_266, 0x45897C40);
				unk_0x0E2400AB9174FA81(0x00000001, 0xC26D562A, iLocal_266);
				unk_0x0E2400AB9174FA81(0x00000001, 0x45897C40, iLocal_266);
			}
		}
		if ((iVar2 > 0x00000001 && iVar2 < 0x00000007) && !iLocal_253)
		{
			if (unk_0xC844350D5D58C99A(iLocal_257))
			{
				if (unk_0xB87D13D0C064E9D1(iLocal_257, unk_0x16F2683693E537C9(), 0x00000001))
				{
					func_169();
					SYSTEM::WAIT(0x00000000);
					if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]))
					{
						unk_0xF3268524E9BE6D6E(iLocal_258[0x00000000], unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
					{
						unk_0xF3268524E9BE6D6E(iLocal_258[0x00000001], unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					}
					iVar8 = 0x00000000;
					iVar0 = 0x00000007;
					func_246(Var1, &iLocal_258, bVar4);
				}
			}
		}
		if ((iVar2 > 0x00000007 && iVar2 < 0x00000012) && !iLocal_253)
		{
			if (unk_0xC844350D5D58C99A(iLocal_258[0x00000000]) && unk_0xC844350D5D58C99A(iLocal_258[0x00000001]))
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]) || !unk_0x12DE711B1C681E9E(iLocal_258[0x00000000], unk_0x16F2683693E537C9(), 80f, 80f, 80f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_265);
						unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
						unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_265);
						unk_0x78ADC381772E3D54(iLocal_258[0x00000000], iLocal_265);
						unk_0xF82EA857DA10E0CD(&iLocal_265);
						unk_0xFADC0A217229F6B5(iLocal_258[0x00000000], 0x00000001);
						func_169();
						SYSTEM::WAIT(0x00000000);
						func_171(&uLocal_53, "REGETAU", "REAWA_FKDB", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					iVar8 = 0x00000000;
					iVar0 = 0x00000007;
					func_246(Var1, &iLocal_258, bVar4);
				}
				if (unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]) || !unk_0x12DE711B1C681E9E(iLocal_258[0x00000001], unk_0x16F2683693E537C9(), 80f, 80f, 80f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_265);
						unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00000000);
						unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_265);
						unk_0x78ADC381772E3D54(iLocal_258[0x00000001], iLocal_265);
						unk_0xF82EA857DA10E0CD(&iLocal_265);
						unk_0xFADC0A217229F6B5(iLocal_258[0x00000001], 0x00000001);
						func_169();
						SYSTEM::WAIT(0x00000000);
						func_171(&uLocal_53, "REGETAU", "REAWA_DEAD1", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					iVar8 = 0x00000000;
					iVar0 = 0x00000007;
					func_246(Var1, &iLocal_258, bVar4);
				}
			}
		}
		if (func_168(&iLocal_258, unk_0x728870EB733D12A1(), 180f))
		{
			if (unk_0xB87D13D0C064E9D1(iLocal_258[0x00000000], unk_0x16F2683693E537C9(), 0x00000001) || unk_0xB87D13D0C064E9D1(iLocal_258[0x00000000], unk_0x16F2683693E537C9(), 0x00000001))
			{
				iLocal_253 = 0x00000001;
			}
			if (iLocal_253)
			{
				if (!bLocal_248)
				{
					func_167();
				}
				if (!bLocal_249)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_257))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_265);
						if (unk_0xB4ECF989E2C1DAC8(iLocal_257, "random@getawaydriver", "idle_a", 0x00000003) || unk_0xB4ECF989E2C1DAC8(iLocal_257, "random@getawaydriver", "idle_2_hands_up", 0x00000003))
						{
							unk_0xC6EB89C59F2AF6B8(0x00000000, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00002710, 0x00000804, 0x00000004);
						unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 5f, 3f, 0x40000000, 0x00000000);
						unk_0xC6EB89C59F2AF6B8(0x00000000, "random@getawaydriver", "gesture_nod_yes_soft", 8f, -8f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000BB8);
						unk_0x509B8296EBA9B408(0x00000000, "WORLD_HUMAN_STAND_MOBILE", 0x00000000, 0x00000001);
						unk_0x75ABDC5F81978924(iLocal_265);
						unk_0x78ADC381772E3D54(iLocal_257, iLocal_265);
						unk_0xF82EA857DA10E0CD(&iLocal_265);
						unk_0xFADC0A217229F6B5(iLocal_257, 0x00000001);
						bLocal_249 = 0x00000001;
					}
				}
			}
			else
			{
				iVar8 = 0x00000000;
				iVar0 = 0x00000007;
				func_246(Var1, &iLocal_258, bVar4);
			}
			if (bLocal_248)
			{
				unk_0x51B096AAC60548C1(1f);
				unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_260[0x00000000]))
				{
					if (!unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
					{
						if (unk_0x12DE711B1C681E9E(iLocal_260[0x00000000], unk_0x16F2683693E537C9(), 4f, 4f, 4f, 0x00000000, 0x00000001, 0x00000000))
						{
							if (!func_185())
							{
								unk_0x0C8C0C840C2D1AD2(iLocal_260[0x00000000], unk_0x16F2683693E537C9(), 0x000003E8, 0x00000804, 0x00000004);
								func_171(&uLocal_53, "REGETAU", "REAWA_THX", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
								SYSTEM::SETTIMERB(0x00000000);
							}
							else
							{
								if (!unk_0xEB6A8945D1AC98A1(iLocal_260[0x00000000]))
								{
									unk_0x11AD11297DC58CC7(iLocal_260[0x00000000], 0x00000000);
								}
								if (!unk_0xEB6A8945D1AC98A1(iLocal_260[0x00000001]))
								{
									unk_0x11AD11297DC58CC7(iLocal_260[0x00000001], 0x00000000);
								}
								if (SYSTEM::TIMERB() > 0x00000BB8)
								{
									while (!func_203())
									{
										SYSTEM::WAIT(0x00000000);
									}
									func_199(0x00000009, 0x00000000);
									func_166(0x00000005);
									func_190(0xFFFFFFFF, 0x00000000);
									func_187();
									iVar8 = 0x00000000;
									iVar0 = 0x00000007;
									func_246(Var1, &iLocal_258, bVar4);
								}
							}
						}
						else if (!unk_0x12DE711B1C681E9E(iLocal_260[0x00000000], unk_0x16F2683693E537C9(), 120f, 120f, 120f, 0x00000000, 0x00000001, 0x00000000))
						{
							iVar8 = 0x00000000;
							iVar0 = 0x00000007;
							func_246(Var1, &iLocal_258, bVar4);
						}
					}
					else
					{
						unk_0xA3BF0AA5A2608191(iLocal_260[0x00000000]);
						func_169();
						SYSTEM::WAIT(0x00000000);
						iVar8 = 0x00000000;
						iVar0 = 0x00000007;
						func_246(Var1, &iLocal_258, bVar4);
					}
				}
				else if (unk_0xEB6A8945D1AC98A1(iLocal_257))
				{
					iVar8 = 0x00000000;
					iVar0 = 0x00000007;
					func_246(Var1, &iLocal_258, bVar4);
				}
			}
			if (bLocal_249)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_257))
				{
					if (unk_0x12DE711B1C681E9E(iLocal_257, unk_0x16F2683693E537C9(), 4f, 4f, 4f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (!func_185())
						{
							unk_0x0C8C0C840C2D1AD2(iLocal_257, unk_0x16F2683693E537C9(), 0x00000BB8, 0x00000800, 0x00000002);
							func_171(&uLocal_53, "REGETAU", "REAWA_THANKS", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_257))
							{
								unk_0x25C5402CC10F76CD(iLocal_257, 0x00000001);
							}
							while (func_185())
							{
								SYSTEM::WAIT(0x00000000);
							}
							while (!func_203())
							{
								SYSTEM::WAIT(0x00000000);
							}
							unk_0x68F065432F4692FB(0x00000001);
							func_199(0x00000009, 0x00000000);
							func_166(0x00000005);
							func_190(0xFFFFFFFF, 0x00000000);
							func_187();
							iVar8 = 0x00000000;
							iVar0 = 0x00000007;
							func_246(Var1, &iLocal_258, bVar4);
						}
					}
					else if (!unk_0x12DE711B1C681E9E(iLocal_257, unk_0x16F2683693E537C9(), 120f, 120f, 120f, 0x00000000, 0x00000001, 0x00000000))
					{
						iVar8 = 0x00000000;
						iVar0 = 0x00000007;
						func_246(Var1, &iLocal_258, bVar4);
					}
				}
				else if (unk_0xEB6A8945D1AC98A1(iLocal_260[0x00000000]))
				{
					iVar8 = 0x00000000;
					iVar0 = 0x00000007;
					func_246(Var1, &iLocal_258, bVar4);
				}
			}
		}
		switch (iVar0)
		{
			case 0x00000000:
				if (func_154())
				{
					iVar8 = 0x00000000;
					iVar0 = 0x00000007;
					func_246(Var1, &iLocal_258, bVar4);
				}
				if (func_142(0x00000001, Var1))
				{
					iVar8 = 0x00000000;
					iVar0 = 0x00000002;
				}
				break;
			
			case 0x00000002:
				if (func_130(0x00000003))
				{
					iLocal_269 = 0x00000001;
					func_129(0x00000001);
					iVar7 = unk_0x1C0640BA9A7327B3();
					iVar0 = 0x00000004;
				}
				else
				{
					iVar0 = 0x00000006;
				}
				iVar8 = 0x00000000;
				break;
			
			case 0x00000004:
				iVar8 = 0x00000000;
				unk_0x5D96D8530B3D0904(&uVar3, 0x00000004);
				unk_0x5D96D8530B3D0904(&uVar3, 0x00000001);
				unk_0x5D96D8530B3D0904(&uVar3, 0x00000005);
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
					{
						if (func_128())
						{
							if (unk_0xDF1306B443CD3D15(unk_0x728870EB733D12A1(), 0x00000000))
							{
								if ((unk_0xBBA8A868118C90ED(unk_0x728870EB733D12A1(), 0x00000000, 0x00000000) && unk_0xBBA8A868118C90ED(unk_0x728870EB733D12A1(), 0x00000002, 0x00000000)) && unk_0xBBA8A868118C90ED(unk_0x728870EB733D12A1(), 0x00000001, 0x00000000))
								{
									iVar0 = 0x00000005;
								}
							}
						}
					}
				}
				else
				{
					iVar0 = 0x00000006;
				}
				iVar0 = 0x00000005;
				unk_0xC55B75EFB7DDC5D6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), &uVar5, &uVar6, 0x00000001, 0x40400000, 0x00000000);
				if (func_127(iVar7, 0x00004E20))
				{
					iVar0 = 0x00000006;
				}
				if (iVar0 != 0x00000005)
				{
				}
				break;
			
			case 0x00000005:
				if (iVar2 > 0x00000001)
				{
					if (!func_207())
					{
						if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							iVar8 = 0x00000000;
							iVar0 = 0x00000006;
							break;
						}
						if (!iLocal_252)
						{
							if (unk_0x4A42C22237F5FF76(unk_0x16F2683693E537C9(), Vector(28.4601f, -1565.293f, 61.5891f) - Vector(30f, 30f, 30f), Vector(28.4601f, -1565.293f, 61.5891f) + Vector(30f, 30f, 30f), 0x00000000, 0x00000001))
							{
								iVar9 = 0x00000000;
								while (iVar9 < iLocal_259)
								{
									if (!unk_0xEB6A8945D1AC98A1(iLocal_259[iVar9]))
									{
										unk_0xF3268524E9BE6D6E(iLocal_259[iVar9], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
										unk_0xFADC0A217229F6B5(iLocal_259[iVar9], 0x00000001);
									}
									iVar9++;
								}
								if (!unk_0xEB6A8945D1AC98A1(iLocal_257))
								{
									unk_0xF3268524E9BE6D6E(iLocal_257, unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
									unk_0xFADC0A217229F6B5(iLocal_257, 0x00000001);
								}
								iLocal_252 = 0x00000001;
							}
						}
					}
				}
				else if (func_154())
				{
					iVar8 = 0x00000000;
					iVar0 = 0x00000007;
					func_246(Var1, &iLocal_258, bVar4);
				}
				if (iVar0 != 0x00000006)
				{
					if (func_1(&iVar2, Var1, &iLocal_258, &iVar8, &bVar4))
					{
						iVar0 = 0x00000006;
						break;
					}
				}
				break;
			
			case 0x00000006:
				iVar8 = 0x00000000;
				iVar0 = 0x00000007;
				func_246(Var1, &iLocal_258, bVar4);
				break;
				break;
			
			case 0x00000007:
				iVar8 = 0x00000000;
				break;
		}
		if (iVar0 != 0x00000007)
		{
			SYSTEM::WAIT(iVar8);
		}
	}
	func_246(Var1, &iLocal_258, bVar4);
}

int func_1(int iParam0, struct<5> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, bool bParam8)
{
	int iVar0;
	vector3 vVar1[2];
	float fVar2[2];
	vector3 vVar3;
	float fVar4;
	vector3 vVar5[5];
	float fVar6;
	vector3 vVar7[5];
	int iVar8;
	vector3 vVar9;
	int iVar10[3];
	vector3 vVar11;
	vector3 vVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	vVar5[0x00000000 /*3*/] = { -56.7157f, -1317.766f, 27.9845f };
	vVar5[0x00000001 /*3*/] = { 457.5345f, -813.3361f, 26.511f };
	vVar5[0x00000002 /*3*/] = { 884.047f, -2239.43f, 29.4387f };
	vVar5[0x00000003 /*3*/] = { -1339.328f, -762.4225f, 19.314f };
	vVar5[0x00000004 /*3*/] = { -461.6898f, 283.665f, 82.2492f };
	vVar7[0x00000000 /*3*/] = { -45.2654f, -1290.126f, 28.1977f };
	vVar7[0x00000001 /*3*/] = { 470.193f, -731.1867f, 26.412f };
	vVar7[0x00000002 /*3*/] = { 889.9938f, -2177.638f, 29.5195f };
	vVar7[0x00000003 /*3*/] = { -1334.826f, -792.1527f, 18.8175f };
	vVar7[0x00000004 /*3*/] = { -424.5901f, 288.3558f, 82.2293f };
	switch (*iParam0)
	{
		case 0x00000000:
			if (func_126(vLocal_232, 300f, 0x00000001))
			{
				*iParam0 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			*iParam7 = 0x00000000;
			func_120(0x00000027, 0x00000001);
			func_120(0x00000028, 0x00000001);
			func_120(0x00000029, 0x00000001);
			func_120(0x0000002A, 0x00000001);
			func_120(0x0000002B, 0x00000001);
			func_120(0x0000002C, 0x00000001);
			if (func_119() == 0x00000000)
			{
				func_118(&uLocal_53, 0x00000000, unk_0x16F2683693E537C9(), "MICHAEL", 0x00000000, 0x00000001);
			}
			else if (func_119() == 0x00000001)
			{
				func_118(&uLocal_53, 0x00000000, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
			}
			else if (func_119() == 0x00000002)
			{
				func_118(&uLocal_53, 0x00000000, unk_0x16F2683693E537C9(), "TREVOR", 0x00000000, 0x00000001);
			}
			if (SYSTEM::VDIST(vLocal_232, 933.83f, 3640.22f, 32.36f) < 20f)
			{
				vVar1[0x00000000 /*3*/] = { 943.1853f, 3647.218f, 31.3603f };
				fVar2[0x00000000] = 58.2967f;
				vVar1[0x00000001 /*3*/] = { 941.3207f, 3650.301f, 31.3111f };
				fVar2[0x00000001] = 92.7793f;
				vVar3 = { 939.2422f, 3649.755f, 31.3536f };
				fVar4 = 260.4475f;
			}
			else if (SYSTEM::VDIST(vLocal_232, 57.86f, -1562.4f, 29.47f) < 20f)
			{
				vVar1[0x00000000 /*3*/] = { 66.0644f, -1564.218f, 28.4602f };
				fVar2[0x00000000] = 198.4093f;
				vVar1[0x00000001 /*3*/] = { 63.5055f, -1568.178f, 28.4602f };
				fVar2[0x00000001] = 254.133f;
				vVar3 = { 68.4259f, -1569.067f, 28.6027f };
				fVar4 = 64.1114f;
			}
			iLocal_231 = unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62());
			unk_0xE342F209E49C5314(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), 0x00000000, 0x00000001);
			unk_0x7D6CA5F52B3748BF(vLocal_232 - Vector(50f, 50f, 50f), vLocal_232 + Vector(50f, 50f, 50f), 0x00000000, 0x00000001, 0x00000001, 0x00000001);
			unk_0x17E8C6920A1E386F(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), 0x00000000, 0x00000000);
			unk_0xF858EFDE1871B5F2(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), 0x00000000, 0x00000001);
			unk_0x523BCC9DC80CD82F(joaat("picador"));
			unk_0x523BCC9DC80CD82F(joaat("stanier"));
			unk_0x523BCC9DC80CD82F(joaat("patriot"));
			while ((!unk_0xB87F6CF6E5628C67(joaat("picador")) || !unk_0xB87F6CF6E5628C67(joaat("stanier"))) || !unk_0xB87F6CF6E5628C67(joaat("patriot")))
			{
				SYSTEM::WAIT(0x00000000);
			}
			iVar10[0x00000000] = unk_0x122AAB0B1D6F55AD(joaat("picador"), 59.5209f, -1547.228f, 28.4602f, 49.1762f, 0x00000001, 0x00000001, 0x00000000);
			iVar10[0x00000001] = unk_0x122AAB0B1D6F55AD(joaat("stanier"), 33.3296f, -1577.537f, 28.2826f, 51.8183f, 0x00000001, 0x00000001, 0x00000000);
			iVar10[0x00000002] = unk_0x122AAB0B1D6F55AD(joaat("patriot"), 48.8282f, -1582.706f, 28.4603f, 226.8345f, 0x00000001, 0x00000001, 0x00000000);
			unk_0xB9FD7450C0DAB575(iVar10[0x00000000], 0x40A00000);
			unk_0xB9FD7450C0DAB575(iVar10[0x00000001], 0x40A00000);
			unk_0xB9FD7450C0DAB575(iVar10[0x00000002], 0x40A00000);
			if (iLocal_229 == 0x00000000)
			{
			}
			unk_0xF63400DBE3303D26("reCriminals", &iLocal_266);
			unk_0xF63400DBE3303D26("reShopKeep", &iLocal_267);
			unk_0xF63400DBE3303D26("reCops", &iLocal_268);
			unk_0x0E2400AB9174FA81(0x00000005, iLocal_266, 0xA49E591C);
			unk_0x0E2400AB9174FA81(0x00000005, iLocal_268, iLocal_266);
			unk_0x0E2400AB9174FA81(0x00000005, 0xA49E591C, iLocal_266);
			unk_0x0E2400AB9174FA81(0x00000001, 0xA49E591C, iLocal_268);
			unk_0x0E2400AB9174FA81(0x00000001, iLocal_268, 0xA49E591C);
			(*uParam6)[0x00000000] = unk_0x36F2404464202779(0x00000016, Param1, vVar1[0x00000000 /*3*/], fVar2[0x00000000], 0x00000001, 0x00000001);
			unk_0x11AD11297DC58CC7((*uParam6)[0x00000000], 0x00000001);
			unk_0x71199B01895C6202(Param1);
			unk_0x6DF7BF67E86AAE86((*uParam6)[0x00000000], iLocal_266);
			unk_0x262EF6C6306BEA6C((*uParam6)[0x00000000], joaat("weapon_appistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x6D80F1AEBA734886((*uParam6)[0x00000000], unk_0x09AC81E49EA267F7(0x00000320, 0x000007D0));
			unk_0x4E885A246A9D983A((*uParam6)[0x00000000], 0x000000CE, 0x00000001);
			unk_0xBAFED2F6486F771A((*uParam6)[0x00000000], 0x00000002, 0x00000000);
			unk_0xBAFED2F6486F771A((*uParam6)[0x00000000], 0x00000400, 0x00000001);
			unk_0xBAFED2F6486F771A((*uParam6)[0x00000000], 0x00010000, 0x00000001);
			unk_0x64F9F278AB9DCA2C((*uParam6)[0x00000000], 0x00000009, 0x00000001, 0x00000000, 0x00000000);
			func_118(&uLocal_53, 0x00000002, (*uParam6)[0x00000000], "REGETRobber2", 0x00000000, 0x00000001);
			(*uParam6)[0x00000001] = unk_0x36F2404464202779(0x00000016, Param1.f_1, vVar1[0x00000001 /*3*/], fVar2[0x00000001], 0x00000001, 0x00000001);
			unk_0x11AD11297DC58CC7((*uParam6)[0x00000001], 0x00000001);
			unk_0x71199B01895C6202(Param1.f_1);
			unk_0x6DF7BF67E86AAE86((*uParam6)[0x00000001], iLocal_266);
			unk_0x262EF6C6306BEA6C((*uParam6)[0x00000001], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
			unk_0x6D80F1AEBA734886((*uParam6)[0x00000001], unk_0x09AC81E49EA267F7(0x00000320, 0x000007D0));
			unk_0x4E885A246A9D983A((*uParam6)[0x00000001], 0x000000CE, 0x00000001);
			unk_0xBAFED2F6486F771A((*uParam6)[0x00000001], 0x00000002, 0x00000000);
			unk_0xBAFED2F6486F771A((*uParam6)[0x00000001], 0x00000400, 0x00000001);
			unk_0xBAFED2F6486F771A((*uParam6)[0x00000001], 0x00010000, 0x00000001);
			unk_0x64F9F278AB9DCA2C((*uParam6)[0x00000001], 0x00000000, 0x00000005, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C((*uParam6)[0x00000001], 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C((*uParam6)[0x00000001], 0x00000002, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C((*uParam6)[0x00000001], 0x00000003, 0x00000006, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C((*uParam6)[0x00000001], 0x00000004, 0x00000006, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C((*uParam6)[0x00000001], 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C((*uParam6)[0x00000001], 0x00000008, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C((*uParam6)[0x00000001], 0x00000009, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C((*uParam6)[0x00000001], 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x4F39CC3882DD074E((*uParam6)[0x00000001], "PACKIE_AI_Norm_Part1_Booth");
			func_118(&uLocal_53, 0x00000001, (*uParam6)[0x00000001], "PACKIE", 0x00000000, 0x00000001);
			iLocal_257 = unk_0x36F2404464202779(0x00000004, Param1.f_2, vVar3, fVar4, 0x00000001, 0x00000001);
			unk_0x71199B01895C6202(Param1.f_2);
			unk_0x11AD11297DC58CC7(iLocal_257, 0x00000001);
			unk_0x6DF7BF67E86AAE86(iLocal_257, iLocal_267);
			unk_0x4F39CC3882DD074E(iLocal_257, "A_M_Y_Business_01_CHINESE_MINI_01");
			func_118(&uLocal_53, 0x00000003, iLocal_257, "StoreOwner", 0x00000000, 0x00000001);
			iLocal_259[0x00000000] = unk_0x36F2404464202779(0x00000005, Param1.f_3, 62.8929f, -1575.52f, 28.6027f, 326.1814f, 0x00000001, 0x00000001);
			unk_0x71199B01895C6202(Param1.f_3);
			unk_0xAFF39FB306F8E232(iLocal_259[0x00000000], 0x00000011, 0x00000001);
			unk_0x8BE3D040D15AEA1D(iLocal_259[0x00000000], 0xFFFFFFFF);
			iLocal_259[0x00000002] = unk_0x36F2404464202779(0x00000005, Param1.f_3, 61.6538f, -1555.256f, 28.4601f, 206.7004f, 0x00000001, 0x00000001);
			unk_0x71199B01895C6202(Param1.f_3);
			unk_0xAFF39FB306F8E232(iLocal_259[0x00000002], 0x00000011, 0x00000001);
			unk_0x509B8296EBA9B408(iLocal_259[0x00000002], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0x00000000, 0x00000000);
			iLocal_259[0x00000003] = unk_0x36F2404464202779(0x00000004, Param1.f_4, 75.9343f, -1556.306f, 28.6028f, 147.2908f, 0x00000001, 0x00000001);
			unk_0x71199B01895C6202(Param1.f_4);
			unk_0xAFF39FB306F8E232(iLocal_259[0x00000003], 0x00000011, 0x00000001);
			*iParam0 = 0x00000002;
			break;
		
		case 0x00000002:
			if (((((!unk_0x437347B10A200C4B(iLocal_257, 0x00000000) && !unk_0x437347B10A200C4B(iLocal_259[0x00000000], 0x00000000)) && !unk_0x437347B10A200C4B(iLocal_259[0x00000002], 0x00000000)) && !unk_0x437347B10A200C4B(iLocal_259[0x00000003], 0x00000000)) && !unk_0x437347B10A200C4B((*uParam6)[0x00000000], 0x00000000)) && !unk_0x437347B10A200C4B((*uParam6)[0x00000001], 0x00000000))
			{
				if (((((unk_0x8A83E339B374E53A(iLocal_257) && unk_0x8A83E339B374E53A(iLocal_259[0x00000000])) && unk_0x8A83E339B374E53A(iLocal_259[0x00000002])) && unk_0x8A83E339B374E53A(iLocal_259[0x00000003])) && unk_0x8A83E339B374E53A((*uParam6)[0x00000000])) && unk_0x8A83E339B374E53A((*uParam6)[0x00000001]))
				{
					unk_0x3F423BF5B8125A50("random@getawaydriver@thugs");
					unk_0x3F423BF5B8125A50("combat@gestures@pistol@halt");
					unk_0x3F423BF5B8125A50("misslamar1ig_20");
					unk_0x3F423BF5B8125A50("random@getawaydriver");
					while (((!unk_0xB4AE0788C1587752("random@getawaydriver@thugs") || !unk_0xB4AE0788C1587752("combat@gestures@pistol@halt")) || !unk_0xB4AE0788C1587752("misslamar1ig_20")) || !unk_0xB4AE0788C1587752("random@getawaydriver"))
					{
						SYSTEM::WAIT(0x00000000);
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_257))
					{
						unk_0xF9B5DB58254657F1(iLocal_257, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0x00000000);
						if (!unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000000]))
						{
							unk_0xC6EB89C59F2AF6B8((*uParam6)[0x00000000], "random@getawaydriver@thugs", "base_a", 4f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x0C8C0C840C2D1AD2((*uParam6)[0x00000000], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000004);
						}
						if (!unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000001]))
						{
							unk_0xC6EB89C59F2AF6B8((*uParam6)[0x00000001], "random@getawaydriver@thugs", "base_b", 4f, -2f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x0C8C0C840C2D1AD2((*uParam6)[0x00000001], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000804, 0x00000004);
						}
					}
					SYSTEM::SETTIMERA(0x00000000);
					*iParam0 = 0x00000003;
				}
			}
			break;
		
		case 0x00000003:
			if (SYSTEM::TIMERA() > 0x00000000)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_259[0x00000000]))
				{
					func_116(iLocal_259[0x00000000], "GENERIC_SHOCKED_HIGH", 0x00000018);
				}
			}
			if (SYSTEM::TIMERA() > 0x000003E8)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_259[0x00000002]))
				{
					func_116(iLocal_259[0x00000002], "GENERIC_FRIGHTENED_HIGH", 0x00000018);
				}
			}
			if (SYSTEM::TIMERA() > 0x000007D0)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_259[0x00000003]))
				{
					func_116(iLocal_259[0x00000003], "GENERIC_FRIGHTENED_HIGH", 0x00000018);
					SYSTEM::SETTIMERA(0x00000000);
				}
			}
			if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 81.71976f, -1530.834f, 28.17651f, 26.78526f, -1595.693f, 58.29443f, 32.875f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!iLocal_252)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_259[0x00000000]))
					{
						unk_0xEEB67C3D0A71A47B(iLocal_259[0x00000000], vLocal_232, 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_259[0x00000002]))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_265);
						unk_0x78A77CDD64392938(0x00000000, 0x000000FA);
						unk_0xEEB67C3D0A71A47B(0x00000000, vLocal_232, 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_265);
						unk_0x78ADC381772E3D54(iLocal_259[0x00000002], iLocal_265);
						unk_0xF82EA857DA10E0CD(&iLocal_265);
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_259[0x00000003]))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_265);
						unk_0x78A77CDD64392938(0x00000000, 0x000001F4);
						unk_0xEEB67C3D0A71A47B(0x00000000, vLocal_232, 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_265);
						unk_0x78ADC381772E3D54(iLocal_259[0x00000003], iLocal_265);
						unk_0xF82EA857DA10E0CD(&iLocal_265);
					}
					iLocal_252 = 0x00000001;
				}
			}
			if (func_77(uParam6, unk_0x728870EB733D12A1()))
			{
				*iParam0 = 0x00000004;
			}
			if (func_76())
			{
				*iParam0 = 0x00000012;
			}
			if (unk_0x029064EA9141FCC2(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)) || unk_0x9E9FD30CF64A88A8(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000000]) && !unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000001]))
				{
					unk_0xF3268524E9BE6D6E((*uParam6)[0x00000000], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0xF3268524E9BE6D6E((*uParam6)[0x00000001], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					func_169();
					SYSTEM::WAIT(0x00000000);
					func_171(&uLocal_53, "REGETAU", "REAWA_POLICE", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					*iParam0 = 0x00000014;
				}
			}
			break;
		
		case 0x00000004:
			if (!func_185())
			{
				if ((!unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000000]) && !unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000001])) && !unk_0xEB6A8945D1AC98A1(iLocal_257))
				{
				}
				if (unk_0xC844350D5D58C99A(iLocal_257))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_257))
					{
						func_171(&uLocal_53, "REGETAU", "REAWA_DOWN", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						unk_0x0C8C0C840C2D1AD2((*uParam6)[0x00000000], unk_0x16F2683693E537C9(), 0x00002710, 0x00000804, 0x00000004);
						unk_0xDD353D0E9C789D0E(&iLocal_265);
						unk_0xC6EB89C59F2AF6B8(0x00000000, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0.25f, 0x00000000, 0x00000000, 0x00000000);
						unk_0xC6EB89C59F2AF6B8(0x00000000, "random@getawaydriver", "idle_a", 4f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_265);
						unk_0x78ADC381772E3D54(iLocal_257, iLocal_265);
						unk_0xF82EA857DA10E0CD(&iLocal_265);
					}
					*iParam0 = 0x00000005;
				}
			}
			if (func_76())
			{
				*iParam0 = 0x00000012;
			}
			if (((unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000) || unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9())) || unk_0x029064EA9141FCC2(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f))) || unk_0x9E9FD30CF64A88A8(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000000]) && !unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000001]))
				{
					unk_0xF3268524E9BE6D6E((*uParam6)[0x00000000], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0xF3268524E9BE6D6E((*uParam6)[0x00000001], unk_0x16F2683693E537C9(), 1000f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					func_169();
					SYSTEM::WAIT(0x00000000);
					func_171(&uLocal_53, "REGETAU", "REAWA_POLICE", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					*iParam0 = 0x00000014;
				}
			}
			break;
		
		case 0x00000005:
			if (unk_0xEB6A8945D1AC98A1(iLocal_257))
			{
				if (!unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000000]) && !unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000001]))
				{
					unk_0xF96A174EE26D7588((*uParam6)[0x00000000], unk_0x16F2683693E537C9(), 0xFFFFFFFF);
					unk_0xF96A174EE26D7588((*uParam6)[0x00000001], unk_0x16F2683693E537C9(), 0xFFFFFFFF);
				}
			}
			else if (unk_0xD1960163A3042274(iLocal_257, 0x0E763797) != 0x00000001 && unk_0xD1960163A3042274(iLocal_257, 0x0E763797) != 0x00000000)
			{
				unk_0xDD353D0E9C789D0E(&iLocal_265);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "random@getawaydriver", "idle_2_hands_up", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0.25f, 0x00000000, 0x00000000, 0x00000000);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "random@getawaydriver", "idle_a", 4f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0x75ABDC5F81978924(iLocal_265);
				unk_0x78ADC381772E3D54(iLocal_257, iLocal_265);
				unk_0xF82EA857DA10E0CD(&iLocal_265);
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
				{
					if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
					{
						if (unk_0x9C66D99E63E8E24C(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) < 0.1f)
						{
							if (func_128() && unk_0xF79A7BCA9E38BBBC(unk_0x728870EB733D12A1()))
							{
								unk_0xD4D331DFE794EACD(unk_0x134B62B726CEC8E6(unk_0x728870EB733D12A1()), 0x00000003);
								if (!unk_0xEB6A8945D1AC98A1(iLocal_257))
								{
									vLocal_245 = { unk_0x68F4C0EC296D3901(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000) };
									vVar11 = { unk_0x68E4ADDDDCD7BDDE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), -1.5f, -1.5f, 0f) };
									vVar12 = { unk_0x68E4ADDDDCD7BDDE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 1.5f, 0f, 0f) };
									unk_0xDD353D0E9C789D0E(&iLocal_265);
									unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00002710, 0x00000830, 0x00000004);
									unk_0x9BE7E7B6B488CC55(0x00000000, iLocal_257, 0x000005DC, 0x00000000);
									unk_0xE20F700AC2AFCA92(0x00000000, vVar11, iLocal_257, 3f, 0x00000000, 0.5f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C, 0x00004E20);
									unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00002710, 0x00000830, 0x00000004);
									unk_0x75ABDC5F81978924(iLocal_265);
									unk_0x78ADC381772E3D54(iLocal_258[0x00000000], iLocal_265);
									unk_0xF82EA857DA10E0CD(&iLocal_265);
									unk_0xDD353D0E9C789D0E(&iLocal_265);
									unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00002710, 0x00000830, 0x00000004);
									unk_0x9BE7E7B6B488CC55(0x00000000, iLocal_257, 0x000009C4, 0x00000000);
									unk_0xE20F700AC2AFCA92(0x00000000, vVar12, iLocal_257, 3f, 0x00000000, 0.5f, 4f, 0x00000001, 0x00000000, 0x00000000, 0xC6EE6B4C, 0x00004E20);
									unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00002710, 0x00000830, 0x00000004);
									unk_0x75ABDC5F81978924(iLocal_265);
									unk_0x78ADC381772E3D54(iLocal_258[0x00000001], iLocal_265);
									unk_0xF82EA857DA10E0CD(&iLocal_265);
								}
								else
								{
									unk_0xE25C96A9C36BE5D2(iLocal_258[0x00000000], func_75());
									unk_0xE25C96A9C36BE5D2(iLocal_258[0x00000001], func_75());
									unk_0xBF541ED34EA81209(iLocal_258[0x00000000], 0x00000001);
									unk_0xBF541ED34EA81209(iLocal_258[0x00000001], 0x00000000);
									if (unk_0x134B62B726CEC8E6(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())) == joaat("bus"))
									{
										if (!unk_0xBBA8A868118C90ED(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000001, 0x00000000))
										{
											iVar13 = unk_0xA30B8362589C124A(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000001, 0x00000000);
											if (!unk_0xAF6690C489CC6203(iVar13))
											{
												unk_0x73270B3C9CC833FD(iVar13, 0x00000001, 0x00000000);
												unk_0xEBA53F35D0085654(&iVar13);
											}
										}
										if (!unk_0xBBA8A868118C90ED(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000000, 0x00000000))
										{
											iVar13 = unk_0xA30B8362589C124A(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000000, 0x00000000);
											if (!unk_0xAF6690C489CC6203(iVar13))
											{
												unk_0x73270B3C9CC833FD(iVar13, 0x00000001, 0x00000000);
												unk_0xEBA53F35D0085654(&iVar13);
											}
										}
									}
									unk_0x7BECA8F360B1686D(iLocal_258[0x00000000], 0x00000001);
									unk_0x7BECA8F360B1686D(iLocal_258[0x00000001], 0x00000001);
								}
								*iParam0 = 0x00000006;
							}
							else if (!iLocal_250)
							{
								if (!func_185())
								{
									func_171(&uLocal_53, "REGETAU", "REAWA_CAR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									unk_0x0C8C0C840C2D1AD2(iLocal_258[0x00000001], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000830, 0x00000004);
									iLocal_250 = 0x00000001;
								}
							}
						}
					}
				}
				else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), (*uParam6)[0x00000001], 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (!iLocal_250)
					{
						if (!func_185())
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_NDCAR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							unk_0x0C8C0C840C2D1AD2(iLocal_258[0x00000001], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000830, 0x00000004);
							iLocal_250 = 0x00000001;
						}
					}
				}
			}
			if (iLocal_250 || iLocal_251)
			{
				if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) < 0.2f)
				{
					if (iLocal_228 == 0xFFFFFFFF)
					{
						iLocal_228 = unk_0x1C0640BA9A7327B3();
					}
				}
				else
				{
					iLocal_228 = 0xFFFFFFFF;
				}
				if (iLocal_228 != 0xFFFFFFFF && unk_0x1C0640BA9A7327B3() > iLocal_228 + 10000)
				{
					func_169();
					SYSTEM::WAIT(0x00000000);
					func_171(&uLocal_53, "REGETAU", "REAWA_COPS", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]))
					{
						unk_0xF3268524E9BE6D6E(iLocal_258[0x00000000], unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0xFADC0A217229F6B5(iLocal_258[0x00000000], 0x00000001);
						SYSTEM::WAIT(0x00000000);
						unk_0x6DAD7906B73F064D(&(iLocal_258[0x00000000]));
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
					{
						unk_0xF3268524E9BE6D6E(iLocal_258[0x00000001], unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0xFADC0A217229F6B5(iLocal_258[0x00000001], 0x00000001);
						SYSTEM::WAIT(0x00000000);
						unk_0x6DAD7906B73F064D(&(iLocal_258[0x00000001]));
					}
					*iParam7 = 0x00000000;
					*iParam0 = 0x00000014;
				}
			}
			func_74(uParam6, 120f);
			if (func_76())
			{
				*iParam0 = 0x00000012;
			}
			if (((unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000) || unk_0x838876B8BA050A8A(unk_0x16F2683693E537C9())) || unk_0x029064EA9141FCC2(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f))) || unk_0x9E9FD30CF64A88A8(vLocal_232 - Vector(40f, 40f, 40f), vLocal_232 + Vector(40f, 40f, 40f)))
			{
				if (!unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000000]) && !unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000001]))
				{
					unk_0xF3268524E9BE6D6E((*uParam6)[0x00000000], unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0xF3268524E9BE6D6E((*uParam6)[0x00000001], unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					func_169();
					SYSTEM::WAIT(0x00000000);
					func_171(&uLocal_53, "REGETAU", "REAWA_POLICE", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					*iParam0 = 0x00000014;
				}
			}
			break;
		
		case 0x00000006:
			*iParam0 = 0x00000007;
			break;
		
		case 0x00000007:
			*iParam7 = 0x00000000;
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
			{
				if (!func_73(uParam6, unk_0x728870EB733D12A1(), 120f) || !bLocal_246)
				{
					if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_245, 2f, 2f, 2f, 0x00000000, 0x00000001, 0x00000000))
					{
						if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
						{
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()))
							{
								if (func_128() && unk_0xF79A7BCA9E38BBBC(unk_0x728870EB733D12A1()))
								{
									unk_0xD4D331DFE794EACD(unk_0x134B62B726CEC8E6(unk_0x728870EB733D12A1()), 0x00000003);
									while (!unk_0x1F04E7FA44219580(unk_0x134B62B726CEC8E6(unk_0x728870EB733D12A1())))
									{
										SYSTEM::WAIT(0x00000000);
									}
									if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
									{
										if (!unk_0x16102BEDC7435774(iLocal_258[0x00000000]) && !unk_0x16102BEDC7435774(iLocal_258[0x00000001]))
										{
											unk_0xA3BF0AA5A2608191(iLocal_258[0x00000000]);
											unk_0xA3BF0AA5A2608191(iLocal_258[0x00000001]);
											unk_0x0C8C0C840C2D1AD2(iLocal_258[0x00000001], unk_0x16F2683693E537C9(), 0x00002710, 0x00000804, 0x00000004);
											unk_0xE25C96A9C36BE5D2(iLocal_258[0x00000000], func_75());
											unk_0xE25C96A9C36BE5D2(iLocal_258[0x00000001], func_75());
											unk_0xBF541ED34EA81209(iLocal_258[0x00000000], 0x00000001);
											unk_0xBF541ED34EA81209(iLocal_258[0x00000001], 0x00000000);
											if (unk_0x134B62B726CEC8E6(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())) == joaat("bus"))
											{
												if (!unk_0xBBA8A868118C90ED(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000001, 0x00000000))
												{
													iVar14 = unk_0xA30B8362589C124A(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000001, 0x00000000);
													if (!unk_0xAF6690C489CC6203(iVar14))
													{
														unk_0x73270B3C9CC833FD(iVar14, 0x00000001, 0x00000000);
														unk_0xEBA53F35D0085654(&iVar14);
													}
												}
												if (!unk_0xBBA8A868118C90ED(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000000, 0x00000000))
												{
													iVar14 = unk_0xA30B8362589C124A(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000000, 0x00000000);
													if (!unk_0xAF6690C489CC6203(iVar14))
													{
														unk_0x73270B3C9CC833FD(iVar14, 0x00000001, 0x00000000);
														unk_0xEBA53F35D0085654(&iVar14);
													}
												}
											}
											unk_0x7BECA8F360B1686D(iLocal_258[0x00000000], 0x00000001);
											unk_0x7BECA8F360B1686D(iLocal_258[0x00000001], 0x00000001);
										}
									}
								}
								else if (!iLocal_250)
								{
									if (!func_185())
									{
										func_171(&uLocal_53, "REGETAU", "REAWA_CAR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
										iLocal_250 = 0x00000001;
									}
								}
							}
							else if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), (*uParam6)[0x00000001], 10f, 10f, 10f, 0x00000000, 0x00000001, 0x00000000))
							{
								if (!iLocal_250)
								{
									if (!func_185())
									{
										func_171(&uLocal_53, "REGETAU", "REAWA_NDCAR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
										iLocal_250 = 0x00000001;
									}
								}
							}
						}
					}
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]))
			{
				if (!unk_0x16102BEDC7435774(iLocal_258[0x00000000]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_257))
					{
						if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
						{
							if ((unk_0xD1960163A3042274(iLocal_258[0x00000000], 0x0E763797) != 0x00000001 && unk_0xD1960163A3042274(iLocal_258[0x00000000], 0x0E763797) != 0x00000000) || unk_0xD1960163A3042274(iLocal_258[0x00000000], 0x0E763797) == 0x00000007)
							{
								unk_0xE25C96A9C36BE5D2(iLocal_258[0x00000000], func_75());
								unk_0x7BECA8F360B1686D(iLocal_258[0x00000000], 0x00000001);
							}
						}
					}
					else
					{
						unk_0xE25C96A9C36BE5D2(iLocal_258[0x00000000], func_75());
						unk_0x7BECA8F360B1686D(iLocal_258[0x00000000], 0x00000001);
					}
				}
				else
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if ((!unk_0x81A5359F25512A04(iLocal_258[0x00000000]) && !unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_245, 2f, 2f, 2f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x5A91F08DF773C39D(iLocal_258[0x00000000], unk_0x68F4C0EC296D3901(unk_0x728870EB733D12A1(), 0x00000001), 2.5f, 2.5f, 2.5f, 0x00000000, 0x00000001, 0x00000000))
						{
							unk_0xDEAC6BC509D10068(iLocal_258[0x00000000], 2f);
						}
					}
					if (unk_0xD1960163A3042274(iLocal_258[0x00000000], 0xCBCE4595) == 0x00000001 || unk_0xD1960163A3042274(iLocal_258[0x00000000], 0xCBCE4595) == 0x00000000)
					{
					}
				}
			}
			if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
			{
				if (!unk_0x16102BEDC7435774(iLocal_258[0x00000001]))
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_257))
					{
						if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
						{
							if ((unk_0xD1960163A3042274(iLocal_258[0x00000001], 0x0E763797) != 0x00000001 && unk_0xD1960163A3042274(iLocal_258[0x00000001], 0x0E763797) != 0x00000000) || unk_0xD1960163A3042274(iLocal_258[0x00000001], 0x0E763797) == 0x00000007)
							{
								unk_0xE25C96A9C36BE5D2(iLocal_258[0x00000001], func_75());
								unk_0x7BECA8F360B1686D(iLocal_258[0x00000001], 0x00000001);
							}
						}
					}
					else
					{
						unk_0xE25C96A9C36BE5D2(iLocal_258[0x00000001], func_75());
						unk_0x7BECA8F360B1686D(iLocal_258[0x00000001], 0x00000001);
					}
				}
				else
				{
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
					{
						if ((!unk_0x81A5359F25512A04(iLocal_258[0x00000001]) && !unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_245, 2f, 2f, 2f, 0x00000000, 0x00000001, 0x00000000)) && !unk_0x5A91F08DF773C39D(iLocal_258[0x00000001], unk_0x68F4C0EC296D3901(unk_0x728870EB733D12A1(), 0x00000001), 2.5f, 2.5f, 2.5f, 0x00000000, 0x00000001, 0x00000000))
						{
							unk_0xDEAC6BC509D10068(iLocal_258[0x00000001], 2f);
						}
					}
					if (unk_0xD1960163A3042274(iLocal_258[0x00000001], 0xCBCE4595) == 0x00000001 || unk_0xD1960163A3042274(iLocal_258[0x00000001], 0xCBCE4595) == 0x00000000)
					{
					}
				}
			}
			if (!bLocal_246)
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
				{
					if ((!unk_0x437347B10A200C4B(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000) && !unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000])) && !unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
					{
						if ((unk_0xC42A92762C58E1B9(iLocal_258[0x00000000], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000) && !unk_0xC42A92762C58E1B9(iLocal_258[0x00000001], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000)) && !unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_258[0x00000001], 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
						{
							bLocal_246 = 0x00000001;
						}
						if ((unk_0xC42A92762C58E1B9(iLocal_258[0x00000001], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000) && !unk_0xC42A92762C58E1B9(iLocal_258[0x00000000], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000)) && !unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_258[0x00000000], 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
						{
							bLocal_246 = 0x00000001;
						}
					}
				}
			}
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
			{
				if (func_73(uParam6, unk_0x728870EB733D12A1(), 120f) || bLocal_246)
				{
					if (!unk_0xEB6A8945D1AC98A1(iLocal_257))
					{
						unk_0xDD353D0E9C789D0E(&iLocal_265);
						unk_0xC6EB89C59F2AF6B8(0x00000000, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iLocal_265);
						unk_0x78ADC381772E3D54(iLocal_257, iLocal_265);
						unk_0xF82EA857DA10E0CD(&iLocal_265);
						unk_0xFADC0A217229F6B5(iLocal_257, 0x00000001);
						unk_0x6DAD7906B73F064D(&iLocal_257);
					}
					func_72();
					if (!unk_0x8E28E832BEAC3DCE(7.3162f, -1544.838f, 28.2558f, 3f))
					{
						iLocal_263 = unk_0x122AAB0B1D6F55AD(joaat("police3"), 7.3162f, -1544.838f, 28.2558f, 251.9956f, 0x00000001, 0x00000001, 0x00000000);
						iLocal_261[0x00000000] = unk_0x852A19533F896693(iLocal_263, 0x00000006, joaat("s_m_y_cop_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
						iLocal_261[0x00000001] = unk_0x852A19533F896693(iLocal_263, 0x00000006, joaat("s_m_y_cop_01"), 0x00000000, 0x00000001, 0x00000001);
						unk_0x262EF6C6306BEA6C(iLocal_261[0x00000000], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
						unk_0x262EF6C6306BEA6C(iLocal_261[0x00000001], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
						unk_0x26A6B1686E33113F(iLocal_261[0x00000000], 0x00000000);
					}
					if (!unk_0x8E28E832BEAC3DCE(91.6602f, -1541.899f, 28.3422f, 3f))
					{
						iLocal_263 = unk_0x122AAB0B1D6F55AD(joaat("police3"), 91.6602f, -1541.899f, 28.3422f, 127.3064f, 0x00000001, 0x00000001, 0x00000000);
						iLocal_261[0x00000000] = unk_0x852A19533F896693(iLocal_263, 0x00000006, joaat("s_m_y_cop_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
						iLocal_261[0x00000001] = unk_0x852A19533F896693(iLocal_263, 0x00000006, joaat("s_m_y_cop_01"), 0x00000000, 0x00000001, 0x00000001);
						unk_0x262EF6C6306BEA6C(iLocal_261[0x00000000], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
						unk_0x262EF6C6306BEA6C(iLocal_261[0x00000001], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
						unk_0x26A6B1686E33113F(iLocal_261[0x00000000], 0x00000000);
					}
					if (!unk_0x8E28E832BEAC3DCE(32.8029f, -1594.4f, 28.4262f, 3f))
					{
						iLocal_263 = unk_0x122AAB0B1D6F55AD(joaat("police3"), 32.8029f, -1594.4f, 28.4262f, 337.7429f, 0x00000001, 0x00000001, 0x00000000);
						iLocal_261[0x00000000] = unk_0x852A19533F896693(iLocal_263, 0x00000006, joaat("s_m_y_cop_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
						iLocal_261[0x00000001] = unk_0x852A19533F896693(iLocal_263, 0x00000006, joaat("s_m_y_cop_01"), 0x00000000, 0x00000001, 0x00000001);
						unk_0x262EF6C6306BEA6C(iLocal_261[0x00000000], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
						unk_0x262EF6C6306BEA6C(iLocal_261[0x00000001], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
						unk_0x26A6B1686E33113F(iLocal_261[0x00000000], 0x00000000);
					}
					unk_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_GETAWAY_01", 0f);
					unk_0x71A357CDEB34742E(unk_0x728870EB733D12A1(), 0x00000001);
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0x00000000);
					unk_0x0F52891B1CED828B(unk_0xD803B885F5E47A62(), 0f);
					unk_0x0E2400AB9174FA81(0x00000005, 0xA49E591C, iLocal_266);
					unk_0x0E2400AB9174FA81(0x00000005, iLocal_266, 0xA49E591C);
					SYSTEM::WAIT(0x000003E8);
					if (!bLocal_246)
					{
						func_171(&uLocal_53, "REGETAU", "REAWA_COPS2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					if (!unk_0xEB6A8945D1AC98A1((*uParam6)[iVar8]))
					{
						unk_0xE910A68AA670B4AA((*uParam6)[iVar8]);
					}
					iLocal_222 = unk_0x1C0640BA9A7327B3();
					*iParam0 = 0x00000008;
				}
			}
			if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 95.0746f, -1520.042f, 28.3593f, -5.9698f, -1641.819f, 38.4042f, 98.1875f, 0x00000000, 0x00000001, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000000]) && !unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000001]))
				{
					unk_0xF3268524E9BE6D6E((*uParam6)[0x00000000], unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0xF3268524E9BE6D6E((*uParam6)[0x00000001], unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					func_169();
					SYSTEM::WAIT(0x00000000);
					func_171(&uLocal_53, "REGETAU", "REAWA_COPS", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					*iParam0 = 0x00000014;
				}
			}
			func_74(uParam6, 120f);
			func_71();
			if (func_76())
			{
				*iParam0 = 0x00000012;
			}
			break;
		
		case 0x00000008:
			func_70(iLocal_51);
			if (func_127(iLocal_222, 0x00000BB8))
			{
				*iParam0 = 0x00000009;
			}
			if (func_76())
			{
				*iParam0 = 0x00000012;
			}
			break;
		
		case 0x00000009:
			func_69(uParam6);
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000)
			{
				unk_0x0E2400AB9174FA81(0x00000001, 0xA49E591C, iLocal_266);
				unk_0x0E2400AB9174FA81(0x00000001, iLocal_266, 0xA49E591C);
				if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
				{
					unk_0x71A357CDEB34742E(unk_0x728870EB733D12A1(), 0x00000000);
				}
				if (!unk_0x437347B10A200C4B(iLocal_263, 0x00000000))
				{
					unk_0x046C362CF15F1935(&iLocal_263);
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_261[0x00000000]))
				{
					unk_0x6DAD7906B73F064D(&(iLocal_261[0x00000000]));
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_261[0x00000001]))
				{
					unk_0x6DAD7906B73F064D(&(iLocal_261[0x00000001]));
				}
				func_70(iLocal_51);
				*iParam0 = 0x0000000A;
			}
			iVar8 = 0x00000000;
			while (iVar8 < *uParam6)
			{
				if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000) && !unk_0xEB6A8945D1AC98A1((*uParam6)[iVar8]))
				{
					if (!unk_0x82CCEAB29E9451DD((*uParam6)[iVar8], unk_0x728870EB733D12A1()))
					{
						if (!unk_0xE4EDC4B0E92C078B(uLocal_255[iVar8]))
						{
							uLocal_255[iVar8] = func_67((*uParam6)[iVar8], 0x00000000, 0x00000091);
							func_70(iLocal_51);
						}
					}
				}
				iVar8++;
			}
			func_74(uParam6, 120f);
			func_71();
			if (func_65())
			{
				*iParam0 = 0x0000000C;
			}
			if (func_76())
			{
				*iParam0 = 0x00000012;
			}
			break;
		
		case 0x0000000A:
			if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				unk_0x0E2400AB9174FA81(0x00000005, 0xA49E591C, iLocal_266);
				unk_0x0E2400AB9174FA81(0x00000005, iLocal_266, 0xA49E591C);
				func_70(iLocal_51);
				*iParam0 = 0x00000008;
			}
			else
			{
				unk_0x0E2400AB9174FA81(0x00000001, 0xA49E591C, iLocal_266);
				unk_0x0E2400AB9174FA81(0x00000001, iLocal_266, 0xA49E591C);
				vVar9 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				fVar6 = 9999f;
				iVar15 = 0x00000000;
				while (iVar15 < vVar5.x)
				{
					if (SYSTEM::VDIST(vVar9, vVar5[iVar15 /*3*/]) < fVar6)
					{
						fVar6 = SYSTEM::VDIST(vVar9, vVar5[iVar15 /*3*/]);
						iLocal_221 = iVar15;
					}
					iVar15++;
				}
				if (func_64(vVar5[iLocal_221 /*3*/], 0f, 0f, 0f, 0x00000000))
				{
					iLocal_221 = 0x00000000;
				}
				iLocal_51 = func_62(vVar5[iLocal_221 /*3*/], 0x00000001);
				if (func_119() == 0x00000002 && !func_61())
				{
					if (!unk_0xE4EDC4B0E92C078B(iLocal_256))
					{
						iLocal_256 = func_62(vLocal_244, 0x00000000);
						unk_0xBC8E0A7390523199(iLocal_256, 0x0000010D);
						func_59();
					}
				}
				iLocal_222 = unk_0x1C0640BA9A7327B3();
				if (!iLocal_220)
				{
					func_169();
					SYSTEM::WAIT(0x00000000);
					func_171(&uLocal_53, "REGETAU", "REAWA_HOM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					iLocal_220 = 0x00000001;
				}
				*iParam0 = 0x0000000B;
			}
			if (func_76())
			{
				*iParam0 = 0x00000012;
			}
			break;
		
		case 0x0000000B:
			*iParam7 = 0x00000000;
			func_58(uParam6);
			if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000))
			{
				func_70(iLocal_51);
				*iParam0 = 0x00000008;
			}
			else
			{
				if (func_57(vVar5[iLocal_221 /*3*/]))
				{
					func_171(&uLocal_53, "REGETAU", "REAWA_CULT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				}
				if (func_55())
				{
					func_169();
					SYSTEM::WAIT(0x00000000);
					if (func_54())
					{
						func_171(&uLocal_53, "REGETAU", "REAWA_CULT2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_171(&uLocal_53, "REGETAU", "REAWA_CULT3", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
				{
					if ((unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vVar5[iLocal_221 /*3*/], Global_13, 0x00000001, 0x00000001, 0x00000000) && unk_0x5A91F08DF773C39D(iLocal_258[0x00000000], vVar5[iLocal_221 /*3*/], 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000)) && unk_0x5A91F08DF773C39D(iLocal_258[0x00000001], vVar5[iLocal_221 /*3*/], 20f, 20f, 20f, 0x00000000, 0x00000001, 0x00000000))
					{
						func_70(iLocal_51);
						iVar8 = 0x00000000;
						while (iVar8 <= (*uParam6 - 0x00000001))
						{
							if (iLocal_218)
							{
								unk_0xE0C0351D5B931E37(unk_0x728870EB733D12A1(), 10.5f, 0x00000002, 0x00000000);
								SYSTEM::WAIT(0x000003E8);
								iLocal_218 = 0x00000000;
							}
							if (!unk_0xEB6A8945D1AC98A1((*uParam6)[iVar8]))
							{
								unk_0xE910A68AA670B4AA((*uParam6)[iVar8]);
								unk_0x0A94A109271BE75A((*uParam6)[iVar8]);
								unk_0x4064D48958EACC19(iLocal_231);
							}
							iVar8++;
						}
						*iParam0 = 0x0000000D;
					}
				}
			}
			iVar8 = 0x00000000;
			while (iVar8 < *uParam6)
			{
				if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000) && !unk_0xEB6A8945D1AC98A1((*uParam6)[iVar8]))
				{
					if (!unk_0x82CCEAB29E9451DD((*uParam6)[iVar8], unk_0x728870EB733D12A1()))
					{
						if (!unk_0xE4EDC4B0E92C078B(uLocal_255[iVar8]))
						{
							uLocal_255[iVar8] = func_67((*uParam6)[iVar8], 0x00000000, 0x00000091);
						}
					}
				}
				iVar8++;
			}
			func_74(uParam6, 120f);
			func_71();
			if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) < 0.2f)
			{
				if (iLocal_228 == 0xFFFFFFFF)
				{
					iLocal_228 = unk_0x1C0640BA9A7327B3();
				}
			}
			else
			{
				iLocal_228 = 0xFFFFFFFF;
			}
			if (iLocal_228 != 0xFFFFFFFF && unk_0x1C0640BA9A7327B3() > (iLocal_228 + 0x0000EA60))
			{
				func_169();
				SYSTEM::WAIT(0x00000000);
				func_171(&uLocal_53, "REGETAU", "REAWA_COPS", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]))
				{
					unk_0xF3268524E9BE6D6E(iLocal_258[0x00000000], unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0xFADC0A217229F6B5(iLocal_258[0x00000000], 0x00000001);
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
				{
					unk_0xF3268524E9BE6D6E(iLocal_258[0x00000001], unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0xFADC0A217229F6B5(iLocal_258[0x00000001], 0x00000001);
				}
				*iParam7 = 0x00000000;
				*iParam0 = 0x00000014;
			}
			if (func_65())
			{
				*iParam0 = 0x0000000C;
			}
			if (func_76())
			{
				*iParam0 = 0x00000012;
			}
			break;
		
		case 0x0000000C:
			func_167();
			if (bLocal_248)
			{
				unk_0x0A94A109271BE75A(iLocal_258[0x00000000]);
				unk_0x0A94A109271BE75A(iLocal_258[0x00000001]);
				unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
				func_169();
				SYSTEM::WAIT(0x00000000);
				func_171(&uLocal_53, "REGETAU", "REAWA_COPS3", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000000]))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_265);
					unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00400000);
					unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_265);
					unk_0x78ADC381772E3D54((*uParam6)[0x00000000], iLocal_265);
					unk_0xF82EA857DA10E0CD(&iLocal_265);
					unk_0xFADC0A217229F6B5((*uParam6)[0x00000000], 0x00000001);
				}
				if (!unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000001]))
				{
					unk_0xDD353D0E9C789D0E(&iLocal_265);
					unk_0x75CDA8644CD3B5F5(0x00000000, 0x000001F4, 0x00400000);
					unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_265);
					unk_0x78ADC381772E3D54((*uParam6)[0x00000001], iLocal_265);
					unk_0xF82EA857DA10E0CD(&iLocal_265);
					unk_0xFADC0A217229F6B5((*uParam6)[0x00000001], 0x00000001);
				}
				*iParam0 = 0x00000014;
			}
			break;
		
		case 0x0000000D:
			if (unk_0x9C66D99E63E8E24C(unk_0x16F2683693E537C9()) < 5f)
			{
				iVar8 = 0x00000000;
				while (iVar8 <= (*uParam6 - 0x00000001))
				{
					if (!unk_0xEB6A8945D1AC98A1((*uParam6)[iVar8]))
					{
						if (unk_0xD1960163A3042274((*uParam6)[iVar8], 0x0E763797) != 0x00000001 || unk_0xD1960163A3042274((*uParam6)[iVar8], 0x0E763797) != 0x00000000)
						{
							if (!unk_0xEB6A8945D1AC98A1((*uParam6)[iVar8]))
							{
								iVar0 = 0x00000000;
								iLocal_226 = iVar8;
							}
						}
					}
					iVar8++;
				}
				*iParam0 = 0x0000000E;
			}
			break;
		
		case 0x0000000E:
			iVar8 = 0x00000000;
			while (iVar8 < *uParam6)
			{
				if (!unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000000]))
				{
					unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), (*uParam6)[iVar8], 0x00000FA0, 0x00000800, 0x00000002);
					unk_0xDD353D0E9C789D0E(&iVar0);
					unk_0x75CDA8644CD3B5F5(0x00000000, 0x00000000, 0x00400200);
					unk_0x96167B03C5A77156(0x00000000, vVar7[iLocal_221 /*3*/], 2f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
					unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iVar0);
					unk_0x78ADC381772E3D54((*uParam6)[0x00000000], iVar0);
					unk_0xF82EA857DA10E0CD(&iVar0);
					if (!unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000001]))
					{
						unk_0xDD353D0E9C789D0E(&iVar0);
						unk_0x75CDA8644CD3B5F5(0x00000000, 0x000007D0, 0x00400200);
						unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0x00000BB8, 0x00000804, 0x00000002);
						unk_0x96167B03C5A77156(0x00000000, vVar7[iLocal_221 /*3*/], 2f, 0xFFFFFFFF, 0.25f, 0x00000000, 0x471C4000);
						unk_0xF3268524E9BE6D6E(0x00000000, unk_0x16F2683693E537C9(), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
						unk_0x75ABDC5F81978924(iVar0);
						unk_0x78ADC381772E3D54((*uParam6)[0x00000001], iVar0);
						unk_0xF82EA857DA10E0CD(&iVar0);
					}
					iVar0 = 0x00000000;
					unk_0xFADC0A217229F6B5((*uParam6)[iVar8], 0x00000001);
					unk_0x0C8C0C840C2D1AD2((*uParam6)[iVar8], unk_0x16F2683693E537C9(), 0x00000FA0, 0x00000804, 0x00000002);
					func_169();
					SYSTEM::WAIT(0x00000000);
					if (iLocal_226 > 0x00000000)
					{
						func_171(&uLocal_53, "REGETAU", "REAWA_STOP2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_171(&uLocal_53, "REGETAU", "REAWA_STOP", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
					}
					*iParam0 = 0x0000000F;
				}
				iVar8++;
			}
			break;
		
		case 0x0000000F:
			if (!*bParam8)
			{
				if (!unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000001]))
				{
					if (!iLocal_218)
					{
						unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
						iLocal_218 = 0x00000001;
					}
					func_18(func_119(), 0x00000001, 0x000003E8, 0x00000000, 0x00000001);
					*bParam8 = 0x00000001;
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000000]) && !unk_0xEB6A8945D1AC98A1((*uParam6)[0x00000001]))
			{
				if (!unk_0x405E212DDE472467((*uParam6)[0x00000000], 0x00000000) && !unk_0x405E212DDE472467((*uParam6)[0x00000001], 0x00000000))
				{
					unk_0x790015DC92C918E2();
					unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
					while (!func_203())
					{
						SYSTEM::WAIT(0x00000000);
					}
					func_3(0x0000000A, 0x00000000);
					if (func_2(0x0000004D))
					{
						func_199(0x00000009, 0x00000000);
					}
					func_166(0x00000006);
					func_190(0xFFFFFFFF, 0x00000000);
					func_187();
					*iParam0 = 0x00000014;
				}
			}
			break;
		
		case 0x00000010:
			*bParam8 = 0x00000001;
			*iParam0 = 0x00000014;
			break;
		
		case 0x00000011:
			break;
		
		case 0x00000012:
			iLocal_253 = 0x00000001;
			unk_0x0E2400AB9174FA81(0x00000005, iLocal_266, 0x6F0783F5);
			unk_0x0E2400AB9174FA81(0x00000001, iLocal_266, iLocal_266);
			unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
			unk_0x51B096AAC60548C1(0f);
			unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0x00000001);
			iVar16 = 0x00000000;
			while (iVar16 < iLocal_258)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_258[iVar16]))
				{
					if (unk_0xE4EDC4B0E92C078B(uLocal_255[iVar16]))
					{
						unk_0x142CC44DB769B57E(&(uLocal_255[iVar16]));
						if (unk_0x405E212DDE472467(iLocal_258[iVar16], 0x00000000))
						{
							unk_0x75CDA8644CD3B5F5(iLocal_258[iVar16], 0x00000000, 0x00000000);
						}
						if (unk_0xE4EDC4B0E92C078B(iLocal_51))
						{
							unk_0x142CC44DB769B57E(&iLocal_51);
						}
						unk_0x0A94A109271BE75A(iLocal_258[iVar16]);
						unk_0x6C3AE6E278DB3D0E(iLocal_258[iVar16], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						unk_0xFADC0A217229F6B5(iLocal_258[iVar16], 0x00000001);
					}
				}
				iVar16++;
			}
			func_169();
			SYSTEM::WAIT(0x00000000);
			if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
			{
				func_171(&uLocal_53, "REGETAU", "REAWA_ATTP", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			else if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]))
			{
				func_171(&uLocal_53, "REGETAU", "REAWA_ATTB", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			}
			if (!bLocal_249)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_257))
				{
					unk_0x25C5402CC10F76CD(iLocal_257, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(iLocal_257, "random@getawaydriver", "base", 4f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				}
			}
			iVar16 = 0x00000000;
			while (iVar16 < iLocal_259)
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_259[iVar16]))
				{
					unk_0xF3268524E9BE6D6E(iLocal_259[iVar16], unk_0x16F2683693E537C9(), 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					unk_0xFADC0A217229F6B5(iLocal_259[iVar16], 0x00000001);
				}
				iVar16++;
			}
			*iParam0 = 0x00000013;
			break;
		
		case 0x00000013:
			unk_0x0E2400AB9174FA81(0x00000005, iLocal_266, 0x6F0783F5);
			iVar16 = 0x00000000;
			while (iVar16 < iLocal_258)
			{
				if (unk_0xEB6A8945D1AC98A1(iLocal_258[iVar16]))
				{
					if (unk_0xE4EDC4B0E92C078B(uLocal_255[iVar16]))
					{
						unk_0x142CC44DB769B57E(&(uLocal_255[iVar16]));
					}
				}
				if (!unk_0xEB6A8945D1AC98A1(iLocal_258[iVar16]))
				{
					if (!unk_0xE4EDC4B0E92C078B(uLocal_255[iVar16]))
					{
						uLocal_255[iVar16] = func_67(iLocal_258[iVar16], 0x00000001, 0x00000091);
					}
					if (unk_0x16102BEDC7435774(iLocal_258[iVar16]))
					{
						unk_0x0A94A109271BE75A(iLocal_258[iVar16]);
					}
					if (unk_0x405E212DDE472467(iLocal_258[iVar16], 0x00000000))
					{
						unk_0x75CDA8644CD3B5F5(iLocal_258[iVar16], 0x00000000, 0x00000000);
						unk_0x6C3AE6E278DB3D0E(iLocal_258[iVar16], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						unk_0xFADC0A217229F6B5(iLocal_258[iVar16], 0x00000001);
					}
					else
					{
						unk_0x6C3AE6E278DB3D0E(iLocal_258[iVar16], unk_0x16F2683693E537C9(), 0x00000000, 0x00000010);
						unk_0xFADC0A217229F6B5(iLocal_258[iVar16], 0x00000001);
					}
				}
				iVar16++;
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_51))
			{
				unk_0x142CC44DB769B57E(&iLocal_51);
			}
			break;
		
		case 0x00000014:
			if (!func_185())
			{
				return 0x00000001;
			}
			break;
	}
	return 0x00000000;
}

int func_2(int iParam0)
{
	if (iParam0 == 0x0000005E || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

void func_3(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_74), iParam0);
	switch (iParam0)
	{
		case 0x0000000A:
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_77), 0x0000000E);
			break;
		
		case 0x0000000D:
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_77), 0x00000010);
			break;
		
		case 0x0000000C:
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_77), 0x0000000F);
			break;
		
		case 0x0000000B:
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_77), 0x00000011);
			break;
	}
	if (!bParam1)
	{
		iVar0 = 0x00000000;
		switch (func_17(iParam0))
		{
			case 0x00000001:
				iVar0 = 0x00000006;
				break;
			
			case 0x00000003:
				iVar0 = 0x00000004;
				break;
			
			case 0x00000002:
				iVar0 = 0x00000005;
				break;
		}
		sVar1 = func_15(iParam0);
		unk_0x1E64CE678ED5F61E("FEED_CREW_U");
		unk_0x6B012227B3921E18(func_15(iParam0));
		unk_0x1AEA174B291A9906(sVar1, sVar1, 0x00000000, iVar0, "", 0x00000000);
		if (!func_14(0x0000002D))
		{
			func_4("AM_H_CREWU", 0x00000002, 0x00000000, 0x00004E20, 0x00002710, func_7(), 0x00000000, 0x00000083, 0x00000000);
		}
	}
}

void func_4(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_5(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_5(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_6();
	}
}

void func_6()
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

int func_7()
{
	func_8();
	switch (Global_1B416.f_936.f_21B.f_10E1)
	{
		case 0x00000000:
			return 0x00000001;
			break;
		
		case 0x00000001:
			return 0x00000002;
			break;
		
		case 0x00000002:
			return 0x00000004;
			break;
	}
	return 0x00000000;
}

void func_8()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_12(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_11(unk_0x16F2683693E537C9());
			if (func_10(iVar0) && (!func_9(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_10(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_9(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_10(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return func_13(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_13(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_14(int iParam0)
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

var func_15(int iParam0)
{
	return func_16(iParam0);
}

char* func_16(int iParam0)
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

int func_17(int iParam0)
{
	return Global_1719B[iParam0 /*5*/];
}

void func_18(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_53(iParam0) == 0x00000003)
	{
		return;
	}
	if (func_53(iParam0) == 0x00000004)
	{
		return;
	}
	func_19(func_53(iParam0), 0x00000001, iParam1, iParam2, 0x00000000);
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

int func_19(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_52();
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
					func_51(0x00000063, 0x00000001);
					func_50(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 0x00000001:
					func_50(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 0x00000002:
					func_50(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_35(0x00000000);
			switch (iParam2)
			{
				case 0x0000007F:
				case 0x00000081:
				case 0x0000007D:
				case 0x0000007E:
				case 0x00000080:
					if (func_30(0x00000005))
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
							func_50(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000001:
							func_50(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 0x00000002:
							func_50(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_30(0x00000001))
					{
						fVar0 = 0f;
						iVar1 = 0x00000001;
					}
					break;
				
				case 0x00000015:
					switch (iParam0)
					{
						case 0x00000000:
							func_50(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000001:
							func_50(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 0x00000002:
							func_50(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 0x00000019:
					switch (iParam0)
					{
						case 0x00000000:
							func_50(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000001:
							func_50(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 0x00000002:
							func_50(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_50(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 0x00000001:
							func_50(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 0x00000002:
							func_50(joaat("sp2_money_spent_property"), iParam3);
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
									func_50(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000001:
									func_50(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 0x00000002:
									func_50(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0x00000000:
									func_50(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000001:
									func_50(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 0x00000002:
									func_50(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_30(0x00000000))
							{
								fVar0 = 0f;
								iVar1 = 0x00000000;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_50(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000001:
									func_50(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 0x00000002:
									func_50(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0x00000000:
									func_50(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000001:
									func_50(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 0x00000002:
									func_50(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_29(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (iParam0)
			{
				case 0x00000000:
					func_51(0x0000005F, iParam3);
					break;
				
				case 0x00000001:
					func_51(0x00000061, iParam3);
					break;
				
				case 0x00000002:
					func_51(0x00000060, iParam3);
					break;
			}
			func_51(0x00000062, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0x00000000;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_22(iVar1);
		return 0x00000001;
	}
	else if (fVar0 != 1f)
	{
		func_22(iVar1);
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
					func_50(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 0x00000001:
					func_50(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 0x00000002:
					func_50(joaat("sp2_total_cash_earned"), iParam3);
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
	func_21(iParam0);
	if (Global_A1D7 == 0x0000000F)
	{
		func_20(0x00000000);
	}
	return 0x00000001;
}

void func_20(bool bParam0)
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

void func_21(int iParam0)
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

void func_22(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 0x00000008)
	{
		func_28(0x00000081, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x00000009)
	{
		func_28(0x00000087, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000A)
	{
		func_28(0x00000088, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000B)
	{
		func_28(0x00000089, 0x00000000, 0xFFFFFFFF, 0x00000001);
		return;
	}
	if (iParam0 == 0x0000000C)
	{
		func_25(0x0000204D, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000D)
	{
		func_25(0x0000204E, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000E)
	{
		func_25(0x0000204F, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x0000000F)
	{
		func_25(0x00002050, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000010)
	{
		func_25(0x00002051, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
		return;
	}
	if (iParam0 == 0x00000011)
	{
		func_25(0x00002052, 0x00000000, 0xFFFFFFFF, 0x00000001, 0x00000000);
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
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_24() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = 0x00000001;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_24() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_23(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 0x00000001, 0x00000000, "", 0x00000000);
	}
}

char* func_23(int iParam0)
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

int func_24()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	return iVar0;
}

void func_25(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_26(var uParam0)
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

int func_27()
{
	return Global_1407E9;
}

int func_28(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_29(int iParam0)
{
	func_51(0x0000005D, iParam0);
	func_51(0x0000001D, iParam0);
	func_51(0x0000001E, iParam0);
}

bool func_30(int iParam0)
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
		return func_32(0x00000081, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x00000009)
	{
		return func_32(0x00000087, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000A)
	{
		return func_32(0x00000088, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000B)
	{
		return func_32(0x00000089, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	if (iParam0 == 0x0000000C)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_31(0x0000204D, 0xFFFFFFFF, 0x00000000);
		if (iVar1 == 0x00000000 || iVar0 >= iVar1)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000D)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_31(0x0000204E, 0xFFFFFFFF, 0x00000000);
		if (iVar3 == 0x00000000 || iVar2 >= iVar3)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000E)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_31(0x0000204F, 0xFFFFFFFF, 0x00000000);
		if (iVar5 == 0x00000000 || iVar4 >= iVar5)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x0000000F)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_31(0x00002050, 0xFFFFFFFF, 0x00000000);
		if (iVar7 == 0x00000000 || iVar6 >= iVar7)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000010)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_31(0x00002051, 0xFFFFFFFF, 0x00000000);
		if (iVar9 == 0x00000000 || iVar8 >= iVar9)
		{
			return 0x00000000;
		}
		return 0x00000001;
	}
	if (iParam0 == 0x00000011)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_31(0x00002052, 0xFFFFFFFF, 0x00000000);
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
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_24() /*10930*/].f_181E.f_A, iParam0);
}

int func_31(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_26(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_32(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0x00000000;
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_27();
	}
	iVar1 = func_34(iParam0, iParam1);
	uVar2 = func_33(iParam0);
	if (0x00000000 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_33(int iParam0)
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

int func_34(int iParam0, int iParam1)
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

int func_35(bool bParam0)
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
		func_49(0x0000001B, iVar1);
	}
	if (iVar1 < 0x0BEBC200)
	{
		return 0x00000000;
	}
	func_36(0x0000001B, 0x00000001);
	return 0x00000001;
}

int func_36(int iParam0, int iParam1)
{
	if (iParam0 >= 0x0000004E)
	{
		return 0x00000000;
	}
	return func_37(iParam0, iParam1);
}

int func_37(int iParam0, int iParam1)
{
	if (func_9(0x0000000E) && !func_48(iParam0))
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
	if (func_47(&Global_4127F1))
	{
		if (func_45(&Global_4127F1, iParam0))
		{
			return 0x00000000;
		}
		if (func_38(&Global_4127F1, iParam0))
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

int func_38(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_9(0x0000000E) && !func_48(iParam1))
	{
		return 0x00000000;
	}
	if (func_45(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_44(uParam0) < 0f)
	{
		func_43(uParam0, 0x00000000);
	}
	func_41(&uVar1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < (*uParam0 - 0x00000001))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_39(&uVar1, iParam1);
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 0x00000001;
}

int func_39(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0x00000000;
	}
	if (func_9(0x0000000E) && !func_48(iParam1))
	{
		return 0x00000000;
	}
	if (func_45(uParam0, iParam1))
	{
		return 0x00000000;
	}
	if (func_44(uParam0) < 0f)
	{
		func_43(uParam0, 0x00000000);
	}
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		if (func_40(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 0x00000001;
		}
		iVar0++;
	}
	return 0x00000000;
}

bool func_40(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 0x0000004E;
}

void func_41(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < *uParam0)
	{
		func_42(uParam0, iVar0);
		iVar0++;
	}
	func_43(uParam0, (Global_4127F0 - 0.5f));
}

void func_42(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 0x0000004E;
}

void func_43(var uParam0, float fParam1)
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

float func_44(var uParam0)
{
	return uParam0->f_50;
}

bool func_45(var uParam0, int iParam1)
{
	return func_46(uParam0, iParam1) != 0xFFFFFFFF;
}

int func_46(var uParam0, int iParam1)
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

bool func_47(var uParam0)
{
	return uParam0->f_4F == 0x00000001;
}

int func_48(int iParam0)
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

int func_49(int iParam0, int iParam1)
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

void func_50(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 0xFFFFFFFF);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 0x00000001);
}

void func_51(int iParam0, int iParam1)
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

void func_52()
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

int func_53(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_54()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0x00000000, 0x0000FFFF), 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_55()
{
	if (func_119() == 0x00000002)
	{
		if (func_56())
		{
			if (unk_0x0EB28750412C3A5A(-1014.154f, 4881.411f, 245.0001f, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0x00000000), 0x00000001) < 400f)
			{
				if (!Global_7922)
				{
					unk_0xC92DB9682A650680("AC_EN_ROUTE_CULT");
					Global_7922 = 0x00000001;
					if (!Global_7921)
					{
						Global_7921 = 0x00000001;
						return 0x00000001;
					}
				}
			}
			else if (Global_7922)
			{
				unk_0xC92DB9682A650680("AC_LEFT_AREA");
				Global_7922 = 0x00000000;
			}
		}
	}
	return 0x00000000;
}

bool func_56()
{
	return Global_791D;
}

int func_57(vector3 vParam0)
{
	if (func_119() == 0x00000002)
	{
		if (func_56() && !Global_7920)
		{
			if (fLocal_50 == -1f)
			{
				fLocal_50 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vParam0);
			}
			if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vParam0) > (fLocal_50 + 200f) || unk_0x0EB28750412C3A5A(-1014.154f, 4881.411f, 245.0001f, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), 0x00000000), 0x00000001) < 400f)
			{
				Global_7920 = 0x00000001;
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_58(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1((*uParam0)[0x00000000]) && !unk_0xEB6A8945D1AC98A1((*uParam0)[0x00000001]))
	{
		if (unk_0x12DE711B1C681E9E((*uParam0)[0x00000000], (*uParam0)[0x00000001], 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000) && unk_0x12DE711B1C681E9E((*uParam0)[0x00000000], unk_0x16F2683693E537C9(), 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000))
		{
			switch (iLocal_225)
			{
				case 0x00000000:
					iLocal_224 = unk_0x1C0640BA9A7327B3();
					iLocal_225++;
					break;
				
				case 0x00000001:
					if (func_127(iLocal_224, 0x000007D0))
					{
						if (!func_185())
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_PITCH", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							iLocal_225++;
						}
					}
					break;
				
				case 0x00000002:
					if (!func_185())
					{
						if (func_119() == 0x00000000)
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_SUREM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						if (func_119() == 0x00000001)
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_SUREF", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						if (func_119() == 0x00000002)
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_SURET", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						iLocal_225++;
					}
					break;
				}
			}
	}
}

void func_59()
{
	if (func_119() == 0x00000002)
	{
		if (!Global_791F)
		{
			func_60("CULT_BLIP_HELP", 0xFFFFFFFF);
			Global_791F = 0x00000001;
		}
	}
}

void func_60(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_61()
{
	if (Global_1B416.f_619E.f_5 == 0x000003E8)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_62(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_63(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, iParam1);
	return iVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_64(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_65()
{
	if (func_66())
	{
		if (((((((unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_236, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_237, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_238, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_239, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_240, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_241, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_242, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_243, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000))
		{
			if (unk_0x9C66D99E63E8E24C(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) < 0.2f)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

int func_66()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
		if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
			{
				if (unk_0xC42A92762C58E1B9(iLocal_258[0x00000000], iVar0, 0x00000000) && unk_0xC42A92762C58E1B9(iLocal_258[0x00000001], iVar0, 0x00000000))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_67(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_68(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_68(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_63(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_63(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_63(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_69(var uParam0)
{
	if (!unk_0xEB6A8945D1AC98A1((*uParam0)[0x00000000]) && !unk_0xEB6A8945D1AC98A1((*uParam0)[0x00000001]))
	{
		if (unk_0x12DE711B1C681E9E((*uParam0)[0x00000000], (*uParam0)[0x00000001], 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000) && unk_0x12DE711B1C681E9E((*uParam0)[0x00000000], unk_0x16F2683693E537C9(), 15f, 15f, 15f, 0x00000000, 0x00000001, 0x00000000))
		{
			switch (iLocal_223)
			{
				case 0x00000000:
					iLocal_224 = unk_0x1C0640BA9A7327B3();
					iLocal_223++;
					break;
				
				case 0x00000001:
					if (func_127(iLocal_224, 0x000007D0))
					{
						if (!func_185())
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_HOM2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							iLocal_223++;
						}
					}
					break;
				
				case 0x00000002:
					if (!func_185())
					{
						if (func_119() == 0x00000000)
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_HOM4M", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						if (func_119() == 0x00000001)
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_HOM4F", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						if (func_119() == 0x00000002)
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_HOM4T", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
						}
						iLocal_223++;
					}
					break;
				}
			}
	}
}

void func_70(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		unk_0x142CC44DB769B57E(&iParam0);
	}
}

void func_71()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_258)
	{
		if (!unk_0xEB6A8945D1AC98A1(iLocal_258[iVar0]))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				if (!func_128())
				{
					unk_0x11AD11297DC58CC7(iLocal_258[iVar0], 0x00000001);
					if (unk_0x16102BEDC7435774(iLocal_258[iVar0]))
					{
						unk_0x0A94A109271BE75A(iLocal_258[iVar0]);
					}
					if (unk_0xD1960163A3042274(iLocal_258[iVar0], 0x4924437D) != 0x00000001 && unk_0xD1960163A3042274(iLocal_258[iVar0], 0x4924437D) != 0x00000000)
					{
						unk_0xE185F110925D87DB(iLocal_258[iVar0], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 6f, 0x40000000, 0x40000000, 0x00000000);
					}
					if (unk_0x405E212DDE472467(iLocal_258[iVar0], 0x00000000))
					{
						unk_0x75CDA8644CD3B5F5(iLocal_258[iVar0], 0x00000000, 0x00000000);
					}
					if (!iLocal_251)
					{
						if (!func_185())
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_CAR", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							iLocal_251 = 0x00000001;
						}
					}
				}
				else
				{
					iLocal_251 = 0x00000000;
					unk_0x11AD11297DC58CC7(iLocal_258[iVar0], 0x00000000);
					if (unk_0xD1960163A3042274(iLocal_258[iVar0], 0x4924437D) == 0x00000001 && unk_0xD1960163A3042274(iLocal_258[iVar0], 0x4924437D) == 0x00000000)
					{
						unk_0xA3BF0AA5A2608191(iLocal_258[iVar0]);
					}
					if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
					{
						unk_0xBF541ED34EA81209(iLocal_258[0x00000000], 0x00000001);
						unk_0xBF541ED34EA81209(iLocal_258[0x00000001], 0x00000000);
						if (unk_0x134B62B726CEC8E6(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9())) == joaat("bus"))
						{
							if (!unk_0xBBA8A868118C90ED(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000001, 0x00000000))
							{
								iVar1 = unk_0xA30B8362589C124A(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000001, 0x00000000);
								if (!unk_0xAF6690C489CC6203(iVar1))
								{
									unk_0x73270B3C9CC833FD(iVar1, 0x00000001, 0x00000000);
									unk_0xEBA53F35D0085654(&iVar1);
								}
							}
							if (!unk_0xBBA8A868118C90ED(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000000, 0x00000000))
							{
								iVar2 = unk_0xA30B8362589C124A(unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9()), 0x00000000, 0x00000000);
								if (!unk_0xAF6690C489CC6203(iVar2))
								{
									unk_0x73270B3C9CC833FD(iVar2, 0x00000001, 0x00000000);
									unk_0xEBA53F35D0085654(&iVar2);
								}
							}
						}
					}
				}
			}
			else if (!unk_0x16102BEDC7435774(iLocal_258[iVar0]))
			{
				unk_0xA3BF0AA5A2608191(iLocal_258[iVar0]);
				unk_0xE25C96A9C36BE5D2(iLocal_258[iVar0], func_75());
				unk_0x7BECA8F360B1686D(iLocal_258[iVar0], 0x00000001);
				if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
				{
					unk_0xBF541ED34EA81209(iLocal_258[0x00000000], 0x00000001);
					unk_0xBF541ED34EA81209(iLocal_258[0x00000001], 0x00000000);
				}
			}
		}
		iVar0++;
	}
}

void func_72()
{
	if (!func_61())
	{
		if (func_119() == 0x00000002)
		{
			Global_791D = 0x00000001;
		}
	}
}

int func_73(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (*uParam0 - 0x00000001))
	{
		if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
		{
			if (!unk_0xC42A92762C58E1B9((*uParam0)[iVar0], iParam1, 0x00000000))
			{
				if (fParam2 > 0f)
				{
					if (unk_0x12DE711B1C681E9E((*uParam0)[iVar0], unk_0x16F2683693E537C9(), fParam2, fParam2, fParam2, 0x00000000, 0x00000001, 0x00000000))
					{
						return 0x00000000;
					}
				}
				else
				{
					return 0x00000000;
				}
			}
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_74(var uParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (*uParam0 - 0x00000001))
	{
		if (unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
		{
			if (unk_0xE4EDC4B0E92C078B(uLocal_255[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(uLocal_255[iVar0]));
			}
		}
		else
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
				{
					if (unk_0xC42A92762C58E1B9((*uParam0)[iVar0], unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000) && unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
					{
						if (unk_0xE4EDC4B0E92C078B(uLocal_255[iVar0]))
						{
							unk_0x142CC44DB769B57E(&(uLocal_255[iVar0]));
						}
					}
					else if (!unk_0xE4EDC4B0E92C078B(uLocal_255[iVar0]))
					{
						uLocal_255[iVar0] = func_67((*uParam0)[iVar0], 0x00000000, 0x00000091);
					}
				}
			}
			else if (!unk_0xE4EDC4B0E92C078B(uLocal_255[iVar0]))
			{
				uLocal_255[iVar0] = func_67((*uParam0)[iVar0], 0x00000000, 0x00000091);
			}
			if (!unk_0x12DE711B1C681E9E((*uParam0)[iVar0], unk_0x16F2683693E537C9(), fParam1, fParam1, fParam1, 0x00000000, 0x00000001, 0x00000000))
			{
				if (unk_0xE4EDC4B0E92C078B(uLocal_255[iVar0]))
				{
					unk_0x142CC44DB769B57E(&(uLocal_255[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

int func_75()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

int func_76()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < iLocal_258)
	{
		if (unk_0xC844350D5D58C99A(iLocal_258[iVar0]))
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_258[iVar0]))
			{
				if (!unk_0x16102BEDC7435774(iLocal_258[iVar0]))
				{
					if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 0x00000006))
					{
						if (unk_0x6AB6A474D29FA7D8(iLocal_258[iVar0], unk_0x16F2683693E537C9()))
						{
							if (!unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000000]) && !unk_0xEB6A8945D1AC98A1(iLocal_258[0x00000001]))
							{
								if (((unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_258[0x00000000]) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_258[0x00000000])) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iLocal_258[0x00000001])) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_258[0x00000001]))
								{
									if (iLocal_227 == 0xFFFFFFFF)
									{
										iLocal_227 = unk_0x1C0640BA9A7327B3();
									}
								}
								else
								{
									iLocal_227 = 0xFFFFFFFF;
								}
							}
						}
					}
					if (!iLocal_254)
					{
						if (iLocal_227 != 0xFFFFFFFF && unk_0x1C0640BA9A7327B3() > iLocal_227 + 1000)
						{
							func_169();
							SYSTEM::WAIT(0x00000000);
							func_171(&uLocal_53, "REGETAU", "REAWA_AIM", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							iLocal_254 = 0x00000001;
						}
					}
					if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
					{
						if (unk_0xB87D13D0C064E9D1(iLocal_258[iVar0], unk_0x728870EB733D12A1(), 0x00000001))
						{
							return 0x00000001;
						}
					}
					if ((unk_0xB87D13D0C064E9D1(iLocal_258[iVar0], unk_0x16F2683693E537C9(), 0x00000001) && unk_0x7F6DC62EA9922664(iLocal_258[iVar0]) < 0x000000BE) || (iLocal_227 != 0xFFFFFFFF && unk_0x1C0640BA9A7327B3() > iLocal_227 + 5000))
					{
						return 0x00000001;
					}
				}
			}
			else
			{
				if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0x00000000))
				{
					if (unk_0xB87D13D0C064E9D1(iLocal_258[iVar0], unk_0x728870EB733D12A1(), 0x00000001))
					{
						return 0x00000001;
					}
				}
				if (unk_0xB87D13D0C064E9D1(iLocal_258[iVar0], unk_0x16F2683693E537C9(), 0x00000001))
				{
					return 0x00000001;
				}
			}
		}
		iVar0++;
	}
	return 0x00000000;
}

int func_77(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!iLocal_219)
	{
		iVar0 = 0x00000000;
		while (iVar0 <= (*uParam0 - 0x00000001))
		{
			if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
			{
				if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 121.8366f, -1503.006f, 28.0999f, 0.1367f, -1649.705f, 48.1608f, 125.8125f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x03068588A1FCED1A((*uParam0)[iVar0])) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0x00000000, 0x00000001, 0x00000000))
				{
					if (!unk_0xE4EDC4B0E92C078B(uLocal_255[iVar0]))
					{
						if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
						{
							if (!func_207())
							{
								func_106(0x00000001);
								func_105(0x00000001);
								if (!unk_0x437347B10A200C4B(iLocal_264, 0x00000000))
								{
									if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_264, 0x00000000) && !unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_264, 50f, 50f, 50f, 0x00000000, 0x00000001, 0x00000000))
									{
										func_80(iLocal_264, 0x00000000, 0x00000091);
									}
								}
							}
							uLocal_255[iVar0] = func_67((*uParam0)[iVar0], 0x00000000, 0x00000091);
							unk_0xF2D30B8ACAF12A39(uLocal_255[iVar0], 0x00000000);
							func_70(iLocal_52);
						}
					}
					if (!func_185())
					{
						if (iLocal_230 < unk_0x1C0640BA9A7327B3())
						{
							func_171(&uLocal_53, "REGETAU", "REAWA_SHOUT", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
							iLocal_230 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0x00000DAC, 0x00000FA0));
						}
					}
					if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 75.3661f, -1542.811f, 28.4601f, 43.7035f, -1580.28f, 33.4259f, 26f, 0x00000000, 0x00000001, 0x00000000))
					{
						func_78();
						if (!unk_0x437347B10A200C4B(iParam1, 0x00000000))
						{
							if (!func_185())
							{
								if (func_128() && unk_0xF79A7BCA9E38BBBC(unk_0x728870EB733D12A1()))
								{
									func_171(&uLocal_53, "REGETAU", "REAWA_START", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									iLocal_219 = 0x00000001;
								}
								else
								{
									func_171(&uLocal_53, "REGETAU", "REAWA_START2", 0x00000004, 0x00000000, 0x00000000, 0x00000000);
									iLocal_219 = 0x00000001;
								}
								if (unk_0xE4EDC4B0E92C078B(uLocal_255[0x00000000]))
								{
									unk_0xF2D30B8ACAF12A39(uLocal_255[0x00000000], 0x00000001);
								}
								if (unk_0xE4EDC4B0E92C078B(uLocal_255[0x00000001]))
								{
									unk_0xF2D30B8ACAF12A39(uLocal_255[0x00000001], 0x00000001);
								}
								if (!unk_0xEB6A8945D1AC98A1((*uParam0)[0x00000001]) && !unk_0xEB6A8945D1AC98A1(iLocal_257))
								{
									unk_0x9DD8618CA5BF832D((*uParam0)[0x00000001], 0x0000009C, 0x00000001);
									unk_0xDD353D0E9C789D0E(&iLocal_265);
									unk_0xC6EB89C59F2AF6B8(0x00000000, "misslamar1ig_20", "stretch_call_hurry_a", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									unk_0xC6EB89C59F2AF6B8(0x00000000, "combat@gestures@pistol@halt", "180", 2f, -2f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									unk_0x9BE7E7B6B488CC55(0x00000000, iLocal_257, 0xFFFFFFFF, 0x00000000);
									unk_0x0C8C0C840C2D1AD2(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000830, 0x00000004);
									unk_0x75ABDC5F81978924(iLocal_265);
									unk_0x78ADC381772E3D54((*uParam0)[0x00000001], iLocal_265);
									unk_0xF82EA857DA10E0CD(&iLocal_265);
								}
								unk_0x0C8C0C840C2D1AD2((*uParam0)[iVar0], unk_0x16F2683693E537C9(), 0xFFFFFFFF, 0x00000830, 0x00000004);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_78()
{
	Global_4CD7 = 0x00000000;
	func_79();
}

void func_79()
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

int func_80(int iParam0, int iParam1, int iParam2)
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
	func_81(iParam0, iParam2);
	return 0x00000001;
}

void func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_87(iParam0))
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
	func_82(iParam0, &(Global_1B416.f_7FE8.f_1586));
}

void func_82(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		func_86(uParam1);
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
		if (uParam1->f_41 == 0xFFFFFFFF && !func_85(uParam1->f_42))
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
		func_84(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0x00000000;
		while (iVar0 <= 0x0000000B)
		{
			if (unk_0xDD62D560CFE11A27(iParam0, iVar0 + 1))
			{
				unk_0x5D96D8530B3D0904(&(uParam1->f_4D), func_83(iVar0 + 1));
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

int func_83(int iParam0)
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

int func_84(int iParam0, var uParam1, var uParam2)
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

int func_85(int iParam0)
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

void func_86(var uParam0)
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

int func_87(int iParam0)
{
	if ((((((((((!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000)) || func_103(iParam0, 0x00000000, 0x00000000)) || func_103(iParam0, 0x00000001, 0x00000000)) || func_103(iParam0, 0x00000002, 0x00000000)) || func_102(iParam0) != 0x00000091) || func_101(iParam0)) || func_100(iParam0)) || func_99(iParam0)) || func_98(iParam0)) || !func_88(unk_0x134B62B726CEC8E6(iParam0)))
	{
		if (func_100(iParam0))
		{
		}
		if (func_100(iParam0))
		{
		}
		if (func_103(iParam0, 0x00000000, 0x00000000))
		{
		}
		if (func_103(iParam0, 0x00000001, 0x00000000))
		{
		}
		if (func_103(iParam0, 0x00000002, 0x00000000))
		{
		}
		if (func_102(iParam0) != 0x00000091)
		{
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_88(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!func_89(iParam0, 0x00000000))
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

int func_89(int iParam0, bool bParam1)
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
		if (!func_97())
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
		if ((((!func_96() && !func_95()) && !func_94()) && !func_93()) && !func_97())
		{
			return 0x00000000;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_94())
		{
			return 0x00000000;
		}
	}
	if (bParam1)
	{
		if (!func_92(iParam0))
		{
			return 0x00000000;
		}
	}
	if (!func_90(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_90(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_91())
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

int func_91()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_92(int iParam0)
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

int func_93()
{
	return 0x00000000;
}

int func_94()
{
	return 0x00000001;
}

int func_95()
{
	return 0x00000001;
}

int func_96()
{
	if (unk_0xC146D5FBD23C6954(0xB6DE61E2))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_97()
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

int func_98(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	sVar1 = unk_0x7888A5D2621AAF2D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x7F8A39872A07D2CE(sVar1, "LAMAR G "))
	{
		return 0x00000001;
	}
	if (!func_89(iVar0, 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_99(int iParam0)
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

int func_100(int iParam0)
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

int func_101(int iParam0)
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

int func_102(int iParam0)
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

int func_103(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0x00000000))
	{
		return 0x00000000;
	}
	iVar0 = 0x00000000;
	while (func_104(iParam1, iVar0, &sVar1, &iVar2))
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

int func_104(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_105(bool bParam0)
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

int func_106(int iParam0)
{
	if (func_110())
	{
		Global_1B40C = 0x00000001;
		Global_1B409 = unk_0x1C0640BA9A7327B3();
		if (func_109(Global_1B40B))
		{
			func_107(0x00000000);
		}
		unk_0x974531784BE14213(0x00000001, "RE_TITLE");
		if (iParam0 && func_109(Global_1B40B))
		{
			unk_0x4A51D2E4732BD556();
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (Global_1B416.f_619E.f_2 < 0x00000003)
			{
				if (!unk_0x8FA469D9C5F1A01F())
				{
					func_60(func_108(iParam0), 0xFFFFFFFF);
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
					func_60(func_108(iParam0), 0xFFFFFFFF);
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
					func_60(func_108(iParam0), 0xFFFFFFFF);
					Global_1B416.f_619E.f_4++;
					unk_0x5D96D8530B3D0904(&Global_1B412, 0x00000002);
				}
			}
			break;
	}
}

char* func_108(int iParam0)
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

int func_109(int iParam0)
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

int func_110()
{
	switch (func_111(&Global_786B, 0x00000000, 0x00000005, 0x00000000, unk_0x0D0A574C76D769AC()))
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

int func_111(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_115(0x00000000))
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
		if (!func_113(iParam2))
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
			func_112(uParam0, iParam4);
		}
	}
	return 0x00000002;
}

void func_112(var uParam0, int iParam1)
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

bool func_113(int iParam0)
{
	return func_114(iParam0, Global_A1D7);
}

int func_114(int iParam0, int iParam1)
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

int func_115(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_113(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_116(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_117(iParam2), 0x00000001);
}

int func_117(int iParam0)
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

void func_118(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_119()
{
	func_8();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_120(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_125(iParam0, 0x00000002, 0x00000001))
		{
			func_124(iParam0, 0x00000002, 0x00000001);
		}
	}
	else if (func_125(iParam0, 0x00000002, 0x00000001))
	{
		func_121(iParam0, 0x00000002, 0x00000001);
	}
}

void func_121(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0674E58A79778E99(&(Global_181EC.f_54D[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_123() == 0x00000000)
		{
			iVar0 = func_31(func_122(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_25(func_122(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x0000033B;
			break;
		
		case 0x00000001:
			return 0x0000033C;
			break;
		
		case 0x00000002:
			return 0x0000033D;
			break;
		
		case 0x00000003:
			return 0x0000033E;
			break;
		
		case 0x00000004:
			return 0x0000033F;
			break;
		
		case 0x00000005:
			return 0x00000340;
			break;
		
		case 0x00000006:
			return 0x00000341;
			break;
		
		case 0x00000007:
			return 0x00000342;
			break;
		
		case 0x00000008:
			return 0x00000343;
			break;
		
		case 0x00000009:
			return 0x00000344;
			break;
		
		case 0x0000000A:
			return 0x00000345;
			break;
		
		case 0x0000000B:
			return 0x00000346;
			break;
		
		case 0x0000000C:
			return 0x00000347;
			break;
		
		case 0x0000000D:
			return 0x00000348;
			break;
		
		case 0x0000000E:
			return 0x00000349;
			break;
		
		case 0x0000000F:
			return 0x0000034B;
			break;
		
		case 0x00000010:
			return 0x0000034C;
			break;
		
		case 0x00000011:
			return 0x0000034D;
			break;
		
		case 0x00000012:
			return 0x0000034E;
			break;
		
		case 0x00000013:
			return 0x0000034F;
			break;
		
		case 0x00000014:
			return 0x00000350;
			break;
		
		case 0x00000015:
			return 0x00000351;
			break;
		
		case 0x00000016:
			return 0x00000352;
			break;
		
		case 0x00000017:
			return 0x00000353;
			break;
		
		case 0x00000018:
			return 0x00000354;
			break;
		
		case 0x00000019:
			return 0x00000355;
			break;
		
		case 0x0000001A:
			return 0x00000356;
			break;
		
		case 0x0000001B:
			return 0x00000357;
			break;
		
		case 0x0000001C:
			return 0x00000358;
			break;
		
		case 0x0000001D:
			return 0x00000359;
			break;
		
		case 0x0000001E:
			return 0x0000035A;
			break;
		
		case 0x0000001F:
			return 0x0000035B;
			break;
		
		case 0x00000020:
			return 0x0000035C;
			break;
		
		case 0x00000021:
			return 0x0000035D;
			break;
		
		case 0x00000022:
			return 0x0000035E;
			break;
		
		case 0x00000023:
			return 0x0000035F;
			break;
		
		case 0x00000024:
			return 0x00000360;
			break;
		
		case 0x00000025:
			return 0x00000361;
			break;
		
		case 0x00000026:
			return 0x00000362;
			break;
		
		case 0x00000027:
			return 0x00000363;
			break;
		
		case 0x00000028:
			return 0x00000367;
			break;
		
		case 0x00000029:
			return 0x00000368;
			break;
		
		case 0x0000002A:
			return 0x00000369;
			break;
		
		case 0x0000002B:
			return 0x0000036A;
			break;
		
		case 0x0000002C:
			return 0x000026F9;
			break;
		
		case 0x0000002D:
			return 0x00000EE0;
			break;
		
		case 0x0000002E:
			return 0x00001507;
			break;
		
		case 0x0000002F:
			return 0x0000180B;
			break;
		
		case 0x00000030:
			return 0x00001C40;
			break;
		
		case 0x00000031:
			return 0x00001EC6;
			break;
		
		case 0x00000034:
			return 0x000022D0;
			break;
		
		case 0x00000032:
			return 0x00002049;
			break;
		
		case 0x00000033:
			return 0x0000204B;
			break;
		
		default:
			break;
	}
	return 0x00002CF7;
}

int func_123()
{
	return Global_7830;
}

void func_124(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_181EC.f_54D[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_123() == 0x00000000)
		{
			iVar0 = func_31(func_122(iParam0), 0xFFFFFFFF, 0x00000000);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_25(func_122(iParam0), iVar0, 0xFFFFFFFF, 0x00000001, 0x00000000);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_125(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (bParam2)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_181EC.f_54D[iParam0], iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_123() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_31(func_122(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_126(vector3 vParam0, float fParam1, int iParam2)
{
	if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam0, fParam1, fParam1, fParam1, 0x00000000, 0x00000001, 0x00000000))
	{
		if (iParam2 == 0x00000000)
		{
			if (unk_0x8E28E832BEAC3DCE(vParam0, 5f))
			{
				return 0x00000001;
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x1C0640BA9A7327B3();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_128()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
		{
			if (((((!unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()) && !unk_0xC7BC967711A8A063(unk_0x16F2683693E537C9())) && !unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9())) && !unk_0x90C4D1743A9C3CD9(unk_0x16F2683693E537C9())) && !unk_0xEFAE7FB688EBF2B5(unk_0x16F2683693E537C9())) && !unk_0xF94CCE643440E68B(unk_0x16F2683693E537C9(), joaat("rhino")))
			{
				if (unk_0xD6DF381716822EFE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) >= 0x00000002)
				{
					return 0x00000001;
				}
			}
		}
	}
	else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		if (unk_0xDF1306B443CD3D15(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()), 0x00000000))
		{
			if (((((!unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()))) && !unk_0xAFB8495D36825275(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && !unk_0xC41A9202669A24C4(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && !unk_0xA7082C42B8809BF2(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && !unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())))) && unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())) != joaat("rhino"))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_129(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_130(int iParam0)
{
	if (unk_0x338D6FF72D84D90F())
	{
		if (func_131(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x00000001;
			break;
		
		case 0x00000001:
			if (func_9(0x00000006) || func_9(0x00000007))
			{
				return 0x00000001;
			}
			else
			{
				return func_131(0x00000003);
			}
			break;
		
		case 0x00000002:
			return 0x00000001;
			break;
		
		case 0x00000003:
			if (func_113(0x00000005))
			{
				if (func_132(0x00000004))
				{
					return 0x00000001;
				}
			}
			break;
	}
	return 0x00000000;
}

int func_132(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_119();
				if (!func_10(iVar0))
				{
					return 0x00000000;
				}
				switch (iParam0)
				{
					case 0x00000009:
					case 0x00000000:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_141()) || Global_1B05D) || Global_7832) || func_140()) || func_139(0x00000008, 0xFFFFFFFF)) || func_138()) || func_137()) || func_136()) || func_135()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000001:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001) || func_141()) || Global_7832) || func_140()) || func_139(0x00000008, 0xFFFFFFFF)) || func_136()) || func_138()) || func_137()) || func_135()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000002:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_141()) || Global_1B05D) || Global_7832) || func_140()) || func_139(0x00000008, 0xFFFFFFFF)) || func_136()) || func_138()) || func_137()) || func_135()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005) || Global_A3FA != 0xFFFFFFFF)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000003:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000)) || func_141()) || Global_1B05D) || Global_7832) || func_140()) || func_139(0x00000008, 0xFFFFFFFF)) || func_138()) || func_137()) || func_135()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000004:
						if (((((func_141() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || func_139(0x00000008, 0xFFFFFFFF)) || func_135()) || func_134()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000005:
						if ((((func_139(0x00000008, 0xFFFFFFFF) || func_138()) || func_137()) || func_134()) || func_133())
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
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_141()) || Global_7832) || func_140()) || func_139(0x00000008, 0xFFFFFFFF)) || func_137()) || func_136()) || func_135()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
							{
								return 0x00000000;
							}
						}
						break;
					
					case 0x00000007:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || func_141()) || func_137()) || Global_1B05D) || Global_7832) || func_140()) || Global_A664) || func_139(0x00000008, 0xFFFFFFFF)) || func_136()) || func_134()) || func_135()) || Global_1B416.f_1E03.f_397[iVar0] == 0x00000005)
						{
							return 0x00000000;
						}
						break;
					
					case 0x00000008:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0x00000000) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0x00000000)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 0x00000001)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_141()) || Global_1B05D) || Global_7832) || func_140()) || func_139(0x00000008, 0xFFFFFFFF)) || func_136()) || func_134()) || func_138()) || func_137()) || func_135())
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

var func_133()
{
	return Global_181DF.f_1;
}

int func_134()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x0000000D);
	}
	return 0x00000000;
}

int func_135()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_136()
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

bool func_137()
{
	return Global_181EC.f_15A > 0x00000000;
}

bool func_138()
{
	return Global_181EC.f_159 > 0x00000000;
}

bool func_139(int iParam0, int iParam1)
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

var func_140()
{
	return Global_14086D;
}

int func_141()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 0x00000001;
	}
	return 0x00000000;
}

int func_142(int iParam0, struct<7> Param1, var uParam2, var uParam3)
{
	if (iParam0 == 0x00000001)
	{
		func_152(&uLocal_270, Param1);
		func_152(&uLocal_270, Param1.f_1);
		func_152(&uLocal_270, Param1.f_2);
		func_152(&uLocal_270, Param1.f_3);
		func_152(&uLocal_270, Param1.f_4);
		func_152(&uLocal_270, Param1.f_5);
		func_152(&uLocal_270, Param1.f_6);
		if (func_149(&uLocal_270))
		{
			return 0x00000001;
		}
	}
	else
	{
		func_143(&uLocal_270, 0x00000000);
	}
	return 0x00000000;
}

void func_143(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_145(uParam0);
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		func_144(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_91 = 0x00000000;
	uParam0->f_92 = 0xFFFFFFFF;
}

void func_144(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0xFFFFFFFF;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_145(var uParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			func_146(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_91 = 0x00000001;
}

void func_146(var uParam0)
{
	func_147(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_147(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		switch (func_148(iParam0))
		{
			case 0x00000000:
				unk_0x71199B01895C6202(iParam2);
				break;
			
			case 0x00000001:
				unk_0x8D17794CE3273D70(sParam1);
				break;
			
			case 0x00000002:
				unk_0x413168EF79E35C7B(sParam1);
				break;
			
			case 0x00000003:
				unk_0xF5A41F3D3B38EFE3(sParam1);
				break;
			
			case 0x00000004:
				unk_0xDB8844D4B7C60440(iParam2, sParam1);
				break;
			
			case 0x00000005:
				unk_0x2F3540C2227116A3(sParam1);
				break;
			
			case 0x00000006:
				unk_0x8C26F31DFF77D124();
				break;
			
			case 0x00000007:
				unk_0xB60B60856BF98DCE(iParam2);
				break;
			
			case 0x00000008:
				unk_0x11CCD0ACA866C6C5(iParam2, unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001A));
				break;
			
			case 0x00000009:
				unk_0x29D7581AEF4440C2();
				break;
			
			default:
				break;
		}
	}
}

int func_148(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000A)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_149(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_91)
	{
		return 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001D))
			{
				return 0x00000000;
			}
			if (!func_150(uParam0[iVar0 /*18*/]))
			{
				return 0x00000000;
			}
		}
		iVar0++;
	}
	uParam0->f_91 = 0x00000000;
	return 0x00000001;
}

bool func_150(var uParam0)
{
	return func_151(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_151(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001E))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001D))
		{
			switch (func_148(iParam0))
			{
				case 0x00000000:
					return unk_0xB87F6CF6E5628C67(iParam2);
					break;
				
				case 0x00000001:
					return unk_0xB4AE0788C1587752(sParam1);
					break;
				
				case 0x00000002:
					return unk_0x59F02DA2266A744C(sParam1);
					break;
				
				case 0x00000003:
					return unk_0x27117E2CDD4D67C3(sParam1);
					break;
				
				case 0x00000004:
					return unk_0x3DDA6C6A285628E4(iParam2, sParam1);
					break;
				
				case 0x00000005:
					return unk_0x1C2E18E9C63BEB77(sParam1);
					break;
				
				case 0x00000006:
					return unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001B), 0xFFFFFFFF);
					break;
				
				case 0x00000007:
					return unk_0x64EF15C5E09BAD76(iParam2);
					break;
				
				case 0x00000008:
					return unk_0x67C1D9E5B91B2E37(iParam2);
					break;
				
				case 0x00000009:
					return unk_0x25F7A4D42AF2AB93();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

void func_152(var uParam0, int iParam1)
{
	func_153(uParam0, 0x00000000, iParam1, "NULL", 0x00000000);
}

void func_153(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != 0xFFFFFFFF)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 0x00000004)
				{
					if (!unk_0x7F8A39872A07D2CE(sParam3, "NULL"))
					{
						if (unk_0x7F8A39872A07D2CE(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 0x00000009)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_91)
	{
		uParam0->f_91 = 0x00000001;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000008)
	{
		if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], iParam1);
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*18*/], 0x0000001E);
			return;
		}
		iVar0++;
	}
}

int func_154()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_49) < (75f * 75f))
		{
			return 0x00000001;
		}
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_165())
		{
			return 0x00000000;
		}
	}
	if (func_161())
	{
		return 0x00000001;
	}
	if (func_155(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_155(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = 0xFFFFFFFF;
	fVar3 = fParam0;
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (func_10(func_119()))
		{
			iVar5 = func_7();
			iVar6 = 0x00000000;
			iVar6 = 0x00000000;
			while (iVar6 < 0x0000003F)
			{
				iVar1 = iVar6;
				if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000002) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar1 /*6*/], 0x00000003))
				{
					func_156(iVar1, &Var0);
					fVar4 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), Var0.f_6, 0x00000001);
					if (fVar4 < fVar3)
					{
						bVar7 = 0x00000001;
						if (bParam1)
						{
							if (iVar5 != Var0.f_1A)
							{
								bVar7 = 0x00000000;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_156(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			func_157(uParam1, "Abigail1", func_159(iParam0), 0x00000000, 0x00000000, 0x00000004, -1604.668f, 5239.1f, 3.01f, 0x00000042, "", 0x0000006D, 0x00000000, "ambient_Diving", 0x00000000, 0x00000000, 0x00000001, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000001:
			func_157(uParam1, "Abigail2", func_159(iParam0), 0x00000000, 0x00000000, 0x00000004, -1592.84f, 5214.04f, 3.01f, 0x00000190, "", 0x0000006E, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000002:
			func_157(uParam1, "Barry1", func_159(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000003:
			func_157(uParam1, "Barry2", func_159(iParam0), 0x00000000, 0x00000001, 0x00000004, 190.26f, -956.35f, 29.63f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000004:
			func_157(uParam1, "Barry3", func_159(iParam0), 0x00000000, 0x00000001, 0x00000004, 414f, -761f, 29f, 0x0000017D, "", 0xFFFFFFFF, 0x00000000, "", 0x000000A4, 0x00000001, 0xFFFFFFFF, 0x00000000, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			func_157(uParam1, "Barry3A", func_159(iParam0), 0x00000001, 0x00000001, 0x00000000, 1199.27f, -1255.63f, 34.23f, 0x0000017D, "BARSTASH", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000006:
			func_157(uParam1, "Barry3C", func_159(iParam0), 0x00000003, 0x00000001, 0x00000000, -468.9f, -1713.06f, 18.21f, 0x0000017D, "", 0x00000054, 0x00000000, "", 0x000000A6, 0x00000000, 0x00000007, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000007:
			func_157(uParam1, "Barry4", func_159(iParam0), 0x00000000, 0x00000001, 0x00000004, 237.65f, -385.41f, 44.4f, 0x0000017D, "", 0x00000055, 0x00000000, "postRC_Barry4", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000320, 0x000007D0, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			func_157(uParam1, "Dreyfuss1", func_159(iParam0), 0x00000000, 0x00000002, 0x00000004, -1458.97f, 485.99f, 115.38f, 0x00000042, "LETTERS_HINT", 0x0000006A, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			func_157(uParam1, "Epsilon1", func_159(iParam0), 0x00000000, 0x00000003, 0x00000004, -1622.89f, 4204.87f, 83.3f, 0x00000042, "", 0x00000056, 0x00000000, "", 0x00000000, 0x00000001, 0x0000000A, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			func_157(uParam1, "Epsilon2", func_159(iParam0), 0x00000000, 0x00000003, 0x00000004, 242.7f, 362.7f, 104.74f, 0x000000CE, "", 0x00000057, 0x00000010, "", 0x00000000, 0x00000000, 0x0000000B, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000B:
			func_157(uParam1, "Epsilon3", func_159(iParam0), 0x00000000, 0x00000003, 0x00000004, 1835.53f, 4705.86f, 38.1f, 0x000000CE, "", 0x00000058, 0x00000010, "epsCars", 0x00000000, 0x00000000, 0x0000000C, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			func_157(uParam1, "Epsilon4", func_159(iParam0), 0x00000000, 0x00000003, 0x00000004, 1826.13f, 4698.88f, 38.92f, 0x000000CE, "", 0x0000005A, 0x00000010, "postRC_Epsilon4", 0x00000000, 0x00000000, 0x0000000D, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			func_157(uParam1, "Epsilon5", func_159(iParam0), 0x00000000, 0x00000003, 0x00000004, 637.02f, 119.7093f, 89.5f, 0x000000CE, "", 0x00000059, 0x00000010, "epsRobes", 0x00000000, 0x00000000, 0x0000000E, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000000E:
			func_157(uParam1, "Epsilon6", func_159(iParam0), 0x00000000, 0x00000003, 0x00000004, -2892.93f, 3192.37f, 11.66f, 0x000000CE, "", 0x0000005D, 0x00000000, "", 0x00000000, 0x00000000, 0x0000000F, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000000F:
			func_157(uParam1, "Epsilon7", func_159(iParam0), 0x00000000, 0x00000003, 0x00000004, 524.43f, 3079.82f, 39.48f, 0x000000CE, "", 0xFFFFFFFF, 0x00000010, "epsDesert", 0x00000000, 0x00000000, 0x00000010, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000010:
			func_157(uParam1, "Epsilon8", func_159(iParam0), 0x00000000, 0x00000003, 0x00000004, -697.75f, 45.38f, 43.03f, 0x000000CE, "", 0x0000005E, 0x00000010, "epsilonTract", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000011:
			func_157(uParam1, "Extreme1", func_159(iParam0), 0x00000000, 0x00000004, 0x00000004, -188.22f, 1296.1f, 302.86f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000004, 0x00000001, 0x00000012, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000012:
			func_157(uParam1, "Extreme2", func_159(iParam0), 0x00000000, 0x00000004, 0x00000004, -954.19f, -2760.05f, 14.64f, 0x0000017E, "", 0x00000060, 0x00000000, "", 0x000000AB, 0x00000000, 0x00000013, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000013:
			func_157(uParam1, "Extreme3", func_159(iParam0), 0x00000000, 0x00000004, 0x00000004, -63.8f, -809.5f, 321.8f, 0x0000017E, "", 0x00000061, 0x00000000, "", 0x00000000, 0x00000000, 0x00000014, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000014:
			func_157(uParam1, "Extreme4", func_159(iParam0), 0x00000000, 0x00000004, 0x00000004, 1731.41f, 96.96f, 170.39f, 0x0000017E, "", 0x00000062, 0x00000010, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000015:
			func_157(uParam1, "Fanatic1", func_159(iParam0), 0x00000000, 0x00000005, 0x00000004, -1877.82f, -440.649f, 45.05f, 0x00000195, "", 0x0000004A, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000001, 0x000002BC, 0x000007D0, func_158(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000016:
			func_157(uParam1, "Fanatic2", func_159(iParam0), 0x00000000, 0x00000005, 0x00000004, 809.66f, 1279.76f, 360.49f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_158(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000017:
			func_157(uParam1, "Fanatic3", func_159(iParam0), 0x00000000, 0x00000005, 0x00000004, -915.6f, 6139.2f, 5.5f, 0x00000195, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000002BC, 0x000007D0, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000018:
			func_157(uParam1, "Hao1", func_159(iParam0), 0x00000000, 0x00000006, 0x00000004, -72.29f, -1260.63f, 28.14f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "controller_Races", 0x0000000D, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x000007D0, 0x000001F4, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000019:
			func_157(uParam1, "Hunting1", func_159(iParam0), 0x00000000, 0x00000007, 0x00000004, 1804.32f, 3931.33f, 32.82f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000AE, 0x00000001, 0x0000001A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001A:
			func_157(uParam1, "Hunting2", func_159(iParam0), 0x00000000, 0x00000007, 0x00000004, -684.17f, 5839.16f, 16.09f, 0x00000180, "", 0x00000063, 0x00000000, "", 0x00000007, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000001B:
			func_157(uParam1, "Josh1", func_159(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "forSaleSigns", 0x00000000, 0x00000001, 0x0000001C, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001C:
			func_157(uParam1, "Josh2", func_159(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0x00000069, 0x00000000, "", 0x00000000, 0x00000000, 0x0000001D, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001D:
			func_157(uParam1, "Josh3", func_159(iParam0), 0x00000000, 0x00000008, 0x00000004, 565.39f, -1772.88f, 29.77f, 0x00000181, "", 0xFFFFFFFF, 0x00000010, "", 0x00000000, 0x00000000, 0x0000001E, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000001E:
			func_157(uParam1, "Josh4", func_159(iParam0), 0x00000000, 0x00000008, 0x00000004, -1104.93f, 291.25f, 64.3f, 0x00000181, "", 0xFFFFFFFF, 0x00000024, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x0000001F:
			func_157(uParam1, "Maude1", func_159(iParam0), 0x00000000, 0x00000009, 0x00000004, 2726.1f, 4145f, 44.3f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "BailBond_Launcher", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000020:
			func_157(uParam1, "Minute1", func_159(iParam0), 0x00000000, 0x0000000A, 0x00000004, 327.85f, 3405.7f, 35.73f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000021, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000021:
			func_157(uParam1, "Minute2", func_159(iParam0), 0x00000000, 0x0000000A, 0x00000004, 18f, 4527f, 105f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0x00000022, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000022:
			func_157(uParam1, "Minute3", func_159(iParam0), 0x00000000, 0x0000000A, 0x00000004, -303.82f, 6211.29f, 31.05f, 0x00000182, "", 0xFFFFFFFF, 0x0000000A, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000023:
			func_157(uParam1, "MrsPhilips1", func_159(iParam0), 0x00000000, 0x0000000B, 0x00000004, 1972.59f, 3816.43f, 32.42f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "ambient_MrsPhilips", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000024:
			func_157(uParam1, "MrsPhilips2", func_159(iParam0), 0x00000000, 0x0000000B, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000025:
			func_157(uParam1, "Nigel1", func_159(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1097.16f, 790.01f, 164.52f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x000000B1, 0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000026:
			func_157(uParam1, "Nigel1A", func_159(iParam0), 0x00000000, 0x0000000C, 0x00000001, -558.65f, 284.49f, 90.86f, 0x00000095, "NIGITEMS", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000027:
			func_157(uParam1, "Nigel1B", func_159(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1034.15f, 366.08f, 80.11f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_158(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000028:
			func_157(uParam1, "Nigel1C", func_159(iParam0), 0x00000000, 0x0000000C, 0x00000001, -623.91f, -266.17f, 37.76f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_158(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x00000029:
			func_157(uParam1, "Nigel1D", func_159(iParam0), 0x00000000, 0x0000000C, 0x00000001, -1096.85f, 67.68f, 52.95f, 0x00000095, "", 0x00000064, 0x00000000, "", 0x00000000, 0x00000000, 0x0000002A, 0x00000004, 0x00000004, 0x000002BC, 0x000007D0, func_158(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002A:
			func_157(uParam1, "Nigel2", func_159(iParam0), 0x00000000, 0x0000000C, 0x00000004, -1310.7f, -640.22f, 26.54f, 0x00000095, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x0000002B, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002B:
			func_157(uParam1, "Nigel3", func_159(iParam0), 0x00000000, 0x0000000C, 0x00000004, -44.75f, -1288.67f, 28.21f, 0x00000095, "", 0xFFFFFFFF, 0x00000010, "postRC_Nigel3", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000001);
			break;
		
		case 0x0000002C:
			func_157(uParam1, "Omega1", func_159(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2468.51f, 3437.39f, 49.9f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "spaceshipParts", 0x00000000, 0x00000001, 0x0000002D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002D:
			func_157(uParam1, "Omega2", func_159(iParam0), 0x00000000, 0x0000000D, 0x00000004, 2319.44f, 2583.58f, 46.76f, 0x00000183, "", 0x0000006B, 0x00000000, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x0000002E:
			func_157(uParam1, "Paparazzo1", func_159(iParam0), 0x00000000, 0x0000000E, 0x00000004, -149.75f, 285.81f, 93.67f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x0000002F, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000002F:
			func_157(uParam1, "Paparazzo2", func_159(iParam0), 0x00000000, 0x0000000E, 0x00000004, -70.71f, 301.43f, 106.79f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000000, 0x00000030, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000030:
			func_157(uParam1, "Paparazzo3", func_159(iParam0), 0x00000000, 0x0000000E, 0x00000004, -257.22f, 292.85f, 90.63f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x000000B7, 0x00000001, 0xFFFFFFFF, 0x00000002, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000031:
			func_157(uParam1, "Paparazzo3A", func_159(iParam0), 0x00000000, 0x0000000E, 0x00000002, 305.52f, 157.19f, 102.94f, 0x00000185, "PAPPHOTO", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000032:
			func_157(uParam1, "Paparazzo3B", func_159(iParam0), 0x00000000, 0x0000000E, 0x00000002, 1040.96f, -534.42f, 60.17f, 0x00000185, "", 0x00000066, 0x00000000, "", 0x00000000, 0x00000000, 0x00000033, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x00000033:
			func_157(uParam1, "Paparazzo4", func_159(iParam0), 0x00000000, 0x0000000E, 0x00000004, -484.2f, 229.68f, 82.21f, 0x00000185, "", 0xFFFFFFFF, 0x00000008, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000034:
			func_157(uParam1, "Rampage1", func_159(iParam0), 0x00000000, 0x0000000F, 0x00000004, 908f, 3643.7f, 32.2f, 0x00000042, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000036, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000036:
			func_157(uParam1, "Rampage3", func_159(iParam0), 0x00000000, 0x0000000F, 0x00000004, 465.1f, -1849.3f, 27.8f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000001, 0x00000037, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000037:
			func_157(uParam1, "Rampage4", func_159(iParam0), 0x00000000, 0x0000000F, 0x00000004, -161f, -1669.7f, 33f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000038, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000038:
			func_157(uParam1, "Rampage5", func_159(iParam0), 0x00000000, 0x0000000F, 0x00000004, -1298.2f, 2504.14f, 21.09f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x00000035, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000000);
			break;
		
		case 0x00000035:
			func_157(uParam1, "Rampage2", func_159(iParam0), 0x00000000, 0x0000000F, 0x00000004, 1181.5f, -400.1f, 67.5f, 0x00000054, "", 0xFFFFFFFF, 0x00000000, "rampage_controller", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000004, 0x00000000, 0x00000937, func_158(iParam0), 0x00000001, 0x00000000);
			break;
		
		case 0x00000039:
			func_157(uParam1, "TheLastOne", func_159(iParam0), 0x00000000, 0x00000010, 0x00000004, -1298.98f, 4640.16f, 105.67f, 0x00000042, "", 0x00000085, 0x00000001, "", 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003A:
			func_157(uParam1, "Tonya1", func_159(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000042, "AM_H_RCFS", 0xFFFFFFFF, 0x00000000, "ambient_TonyaCall", 0x00000018, 0x00000001, 0x0000003B, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003B:
			func_157(uParam1, "Tonya2", func_159(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "ambient_Tonya", 0x000000B9, 0x00000000, 0x0000003C, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003C:
			func_157(uParam1, "Tonya3", func_159(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x000000BB, 0x00000000, 0x0000003D, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003D:
			func_157(uParam1, "Tonya4", func_159(iParam0), 0x00000000, 0x00000011, 0x00000004, 0f, 0f, 0f, 0xFFFFFFFF, "", 0xFFFFFFFF, 0x00000000, "", 0x00000000, 0x00000000, 0x0000003E, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		case 0x0000003E:
			func_157(uParam1, "Tonya5", func_159(iParam0), 0x00000000, 0x00000011, 0x00000004, -14.39f, -1472.69f, 29.58f, 0x00000184, "", 0xFFFFFFFF, 0x00000030, "", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000004, 0x00000002, 0x00000000, 0x00000937, func_158(iParam0), 0x00000000, 0x00000001);
			break;
		
		default:
			break;
	}
}

void func_157(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_158(int iParam0)
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
			return 0x00000001;
			break;
		
		case 0x00000003:
			return 0x00000001;
			break;
		
		case 0x00000004:
			return 0x00000000;
			break;
		
		case 0x00000005:
			return 0x00000001;
			break;
		
		case 0x00000006:
			return 0x00000001;
			break;
		
		case 0x00000007:
			return 0x00000000;
			break;
		
		case 0x00000008:
			return 0x00000001;
			break;
		
		case 0x00000009:
			return 0x00000000;
			break;
		
		case 0x0000000A:
			return 0x00000000;
			break;
		
		case 0x0000000B:
			return 0x00000000;
			break;
		
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
			return 0x00000000;
			break;
		
		case 0x0000000E:
			return 0x00000001;
			break;
		
		case 0x0000000F:
			return 0x00000000;
			break;
		
		case 0x00000010:
			return 0x00000001;
			break;
		
		case 0x00000011:
			return 0x00000001;
			break;
		
		case 0x00000012:
			return 0x00000001;
			break;
		
		case 0x00000013:
			return 0x00000001;
			break;
		
		case 0x00000014:
			return 0x00000001;
			break;
		
		case 0x00000015:
			return 0x00000001;
			break;
		
		case 0x00000016:
			return 0x00000001;
			break;
		
		case 0x00000017:
			return 0x00000001;
			break;
		
		case 0x00000018:
			return 0x00000001;
			break;
		
		case 0x00000019:
			return 0x00000001;
			break;
		
		case 0x0000001A:
			return 0x00000001;
			break;
		
		case 0x0000001B:
			return 0x00000000;
			break;
		
		case 0x0000001C:
			return 0x00000001;
			break;
		
		case 0x0000001D:
			return 0x00000001;
			break;
		
		case 0x0000001E:
			return 0x00000001;
			break;
		
		case 0x0000001F:
			return 0x00000000;
			break;
		
		case 0x00000020:
			return 0x00000001;
			break;
		
		case 0x00000021:
			return 0x00000001;
			break;
		
		case 0x00000022:
			return 0x00000001;
			break;
		
		case 0x00000023:
			return 0x00000000;
			break;
		
		case 0x00000024:
			return 0x00000000;
			break;
		
		case 0x00000025:
			return 0x00000000;
			break;
		
		case 0x00000026:
			return 0x00000001;
			break;
		
		case 0x00000027:
			return 0x00000001;
			break;
		
		case 0x00000028:
			return 0x00000001;
			break;
		
		case 0x00000029:
			return 0x00000001;
			break;
		
		case 0x0000002A:
			return 0x00000001;
			break;
		
		case 0x0000002B:
			return 0x00000001;
			break;
		
		case 0x0000002C:
			return 0x00000000;
			break;
		
		case 0x0000002D:
			return 0x00000000;
			break;
		
		case 0x0000002E:
			return 0x00000001;
			break;
		
		case 0x0000002F:
			return 0x00000001;
			break;
		
		case 0x00000030:
			return 0x00000000;
			break;
		
		case 0x00000031:
			return 0x00000001;
			break;
		
		case 0x00000032:
			return 0x00000001;
			break;
		
		case 0x00000033:
			return 0x00000001;
			break;
		
		case 0x00000034:
			return 0x00000001;
			break;
		
		case 0x00000036:
			return 0x00000001;
			break;
		
		case 0x00000037:
			return 0x00000001;
			break;
		
		case 0x00000038:
			return 0x00000001;
			break;
		
		case 0x00000035:
			return 0x00000001;
			break;
		
		case 0x00000039:
			return 0x00000001;
			break;
		
		case 0x0000003A:
			return 0x00000001;
			break;
		
		case 0x0000003B:
			return 0x00000001;
			break;
		
		case 0x0000003C:
			return 0x00000001;
			break;
		
		case 0x0000003D:
			return 0x00000001;
			break;
		
		case 0x0000003E:
			return 0x00000001;
			break;
		
		default:
			break;
	}
	return 0x00000000;
}

struct<2> func_159(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_160(iParam0) };
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_160(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0x00000000:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 0x00000001:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 0x00000002:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 0x00000003:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 0x00000004:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 0x00000005:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 0x00000006:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 0x00000007:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 0x00000008:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 0x00000009:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 0x0000000A:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 0x0000000B:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 0x0000000C:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 0x0000000D:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 0x0000000E:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 0x0000000F:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 0x00000010:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 0x00000011:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 0x00000012:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 0x00000013:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 0x00000014:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 0x00000015:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 0x00000016:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 0x00000017:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 0x00000018:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 0x00000019:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 0x0000001A:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 0x0000001B:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 0x0000001C:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 0x0000001D:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 0x0000001E:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 0x0000001F:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 0x00000020:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 0x00000021:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 0x00000022:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 0x00000023:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 0x00000024:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 0x00000025:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 0x00000026:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 0x00000027:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 0x00000028:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 0x00000029:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 0x0000002A:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 0x0000002B:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 0x0000002C:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 0x0000002D:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 0x0000002E:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 0x0000002F:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 0x00000030:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 0x00000031:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 0x00000032:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 0x00000033:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 0x00000034:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 0x00000035:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 0x00000036:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 0x00000037:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 0x00000038:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 0x00000039:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 0x0000003A:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 0x0000003B:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 0x0000003C:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 0x0000003D:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 0x0000003E:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_161()
{
	if (func_164() && !func_165())
	{
		return 0x00000001;
	}
	if (func_163() && func_162())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_162()
{
	return Global_1B2FC > 0x00000000;
}

int func_163()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_164()
{
	if (Global_175B2 != 0xFFFFFFFF)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 0x00000014);
	}
	return 0x00000000;
}

int func_165()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xBA19B87E031E2390() == 1f)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_166(int iParam0)
{
	Global_1B408 = iParam0;
}

void func_167()
{
	if (!bLocal_248)
	{
		unk_0x4490D017C57827E9(func_186(unk_0xD803B885F5E47A62()) - Vector(0f, 10f, 0f), unk_0x09AC81E49EA267F7(0x00000005, 0x0000000F), &vLocal_235, 0x00000001, 0x40400000, 0x00000000);
		if (!unk_0x8E28E832BEAC3DCE(vLocal_235, 10f))
		{
			vLocal_233 = { vLocal_235 };
			bLocal_247 = 0x00000001;
		}
		else
		{
			unk_0x4490D017C57827E9(func_186(unk_0xD803B885F5E47A62()) + Vector(0f, 10f, 0f), unk_0x09AC81E49EA267F7(0x00000005, 0x0000000F), &vLocal_235, 0x00000001, 0x40400000, 0x00000000);
			if (!unk_0x8E28E832BEAC3DCE(vLocal_235, 10f))
			{
				vLocal_233 = { vLocal_235 };
				bLocal_247 = 0x00000001;
			}
			if (bLocal_247)
			{
				if (!unk_0xC844350D5D58C99A(iLocal_260[0x00000000]))
				{
					iLocal_260[0x00000000] = unk_0x36F2404464202779(0x00000006, joaat("s_m_y_cop_01"), vLocal_233 + Vector(0f, 5f, 0f), 0f, 0x00000001, 0x00000001);
					if (func_65())
					{
						unk_0x262EF6C6306BEA6C(iLocal_260[0x00000000], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
						unk_0x6DF7BF67E86AAE86(iLocal_260[0x00000000], iLocal_268);
						unk_0x11AD11297DC58CC7(iLocal_260[0x00000000], 0x00000001);
						unk_0x7C8478BF70C1E072(iLocal_260[0x00000000], 50f, 0x00000000);
						unk_0xFADC0A217229F6B5(iLocal_260[0x00000000], 0x00000001);
					}
					else
					{
						unk_0x11AD11297DC58CC7(iLocal_260[0x00000000], 0x00000001);
						unk_0xDD353D0E9C789D0E(&iLocal_265);
						unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0xFFFFFFFF, 6f, 3f, 0x40000000, 0x00000000);
						unk_0xC6EB89C59F2AF6B8(0x00000000, "random@getawaydriver", "gesture_nod_yes_hard", 8f, -8f, 0xFFFFFFFF, 0x00000030, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
						unk_0x93D47DFD0AE94949(0x00000000, 0x00000BB8);
						unk_0x75ABDC5F81978924(iLocal_265);
						unk_0x78ADC381772E3D54(iLocal_260[0x00000000], iLocal_265);
						unk_0xF82EA857DA10E0CD(&iLocal_265);
						unk_0xFADC0A217229F6B5(iLocal_260[0x00000000], 0x00000001);
						func_118(&uLocal_53, 0x00000004, iLocal_260[0x00000000], "REGETCop", 0x00000000, 0x00000001);
					}
				}
				if (!unk_0xC844350D5D58C99A(iLocal_260[0x00000001]))
				{
					iLocal_260[0x00000001] = unk_0x36F2404464202779(0x00000006, joaat("s_m_y_cop_01"), vLocal_233 - Vector(0f, 5f, 0f), 0f, 0x00000001, 0x00000001);
					if (func_65())
					{
						unk_0x262EF6C6306BEA6C(iLocal_260[0x00000000], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
						unk_0x6DF7BF67E86AAE86(iLocal_260[0x00000001], iLocal_268);
						unk_0x11AD11297DC58CC7(iLocal_260[0x00000001], 0x00000001);
						unk_0x7C8478BF70C1E072(iLocal_260[0x00000001], 50f, 0x00000000);
						unk_0xFADC0A217229F6B5(iLocal_260[0x00000001], 0x00000001);
					}
					else
					{
						unk_0x11AD11297DC58CC7(iLocal_260[0x00000001], 0x00000001);
						unk_0xB87AD42E3FA06BDE(iLocal_260[0x00000001], 68.7217f, -1569.83f, 28.6027f, 3f, 0x00000000, 0x00000000, 0x000C00AB, 0xBF800000);
						unk_0xFADC0A217229F6B5(iLocal_260[0x00000001], 0x00000001);
					}
				}
				if (!unk_0xC844350D5D58C99A(iLocal_262))
				{
					iLocal_262 = unk_0x122AAB0B1D6F55AD(joaat("police3"), vLocal_233, 0f, 0x00000001, 0x00000001, 0x00000000);
					vLocal_234 = { func_186(unk_0xD803B885F5E47A62()) - unk_0x68F4C0EC296D3901(iLocal_262, 0x00000001) };
					unk_0xD8F6A53F4799FAFE(iLocal_262, unk_0xE7D606C557C86100(vLocal_234.x, vLocal_234.y));
					unk_0xAA280AF45BCCCF21(iLocal_262, 0x00000001);
				}
				if (!unk_0xC844350D5D58C99A(iLocal_260[0x00000002]))
				{
					iLocal_260[0x00000002] = unk_0x852A19533F896693(iLocal_262, 0x00000006, joaat("s_m_y_cop_01"), 0xFFFFFFFF, 0x00000001, 0x00000001);
					if (func_65())
					{
						unk_0x262EF6C6306BEA6C(iLocal_260[0x00000002], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000001, 0x00000001);
						unk_0x6DF7BF67E86AAE86(iLocal_260[0x00000002], iLocal_268);
						unk_0xAFF39FB306F8E232(iLocal_260[0x00000002], 0x00000001, 0x00000001);
						unk_0xAFF39FB306F8E232(iLocal_260[0x00000002], 0x00000003, 0x00000000);
						unk_0x11AD11297DC58CC7(iLocal_260[0x00000002], 0x00000001);
						unk_0x89258193691A7600(iLocal_260[0x00000002], iLocal_262, iLocal_258[0x00000001], 0x00000006, 15f, 0x00000002, -1f, -1f, 0x00000001);
						unk_0xFADC0A217229F6B5(iLocal_260[0x00000002], 0x00000001);
					}
					else
					{
						unk_0x11AD11297DC58CC7(iLocal_260[0x00000002], 0x00000001);
						unk_0xDD353D0E9C789D0E(&iLocal_265);
						unk_0xE9362E4D600DD12A(0x00000000, iLocal_262, 40.2328f, -1555.753f, 28.2128f, 10f, 0x00000000, joaat("police"), 0x000C0025, 1f, -1f);
						unk_0x93D47DFD0AE94949(0x00000000, 0x00001388);
						unk_0x75ABDC5F81978924(iLocal_265);
						unk_0x78ADC381772E3D54(iLocal_260[0x00000002], iLocal_265);
						unk_0xF82EA857DA10E0CD(&iLocal_265);
						unk_0xFADC0A217229F6B5(iLocal_260[0x00000002], 0x00000001);
					}
				}
				bLocal_248 = 0x00000001;
			}
		}
	}
}

int func_168(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 <= (*uParam0 - 0x00000001))
	{
		if (unk_0xC844350D5D58C99A((*uParam0)[iVar0]))
		{
			if (unk_0xC844350D5D58C99A(iParam1))
			{
				if (unk_0xDF1306B443CD3D15(iParam1, 0x00000000))
				{
					if (!unk_0xEB6A8945D1AC98A1((*uParam0)[iVar0]))
					{
						if (unk_0xC42A92762C58E1B9((*uParam0)[iVar0], iParam1, 0x00000000))
						{
							return 0x00000000;
						}
						if (fParam2 > 0f)
						{
							if (unk_0x12DE711B1C681E9E((*uParam0)[iVar0], unk_0x16F2683693E537C9(), fParam2, fParam2, fParam2, 0x00000000, 0x00000001, 0x00000000))
							{
								return 0x00000000;
							}
						}
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
		iVar0++;
	}
	return 0x00000001;
}

void func_169()
{
	Global_4CD7 = 0x00000000;
	func_170();
}

void func_170()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0x00000000;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
		Global_5145 = 0x00000006;
	}
}

int func_171(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_184(uParam0, 0x00000091, sParam1, iParam4, iParam5, iParam6);
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
	return func_172(sParam2, iParam3, 0x00000000);
}

int func_172(char* sParam0, int iParam1, bool bParam2)
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
					func_79();
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
		if (func_139(0x00000008, 0xFFFFFFFF))
		{
			return 0x00000000;
		}
		Global_5191 = { Global_518B };
		func_183();
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
				func_182();
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
				if (func_181())
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
			if (func_180())
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
			func_179();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0x00000000;
		func_178();
		func_173();
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
		func_79();
	}
	return 0x00000000;
}

void func_173()
{
	if (!func_174())
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

int func_174()
{
	if (!Global_40001.f_6DB6)
	{
		return 0x00000000;
	}
	if (!Global_12B4E)
	{
		return 0x00000000;
	}
	if (unk_0xD803B885F5E47A62() == func_177())
	{
		return 0x00000000;
	}
	if (func_175(unk_0xD803B885F5E47A62()))
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

bool func_175(int iParam0)
{
	return func_176(iParam0, 0x00000014);
}

bool func_176(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_177()
{
	return 0xFFFFFFFF;
}

void func_178()
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

void func_179()
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

int func_180()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_181()
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

void func_182()
{
	if (func_9(0x0000000E))
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
		Global_4C1E = func_119();
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

void func_183()
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

void func_184(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_185()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_186(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), 0x00000000);
}

void func_187()
{
	func_188();
}

int func_188()
{
	if (func_189(0x00000000))
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

bool func_189(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

void func_190(int iParam0, int iParam1)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_197();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (iParam1 <= func_196(iParam0))
	{
		func_195(iParam0, iParam1);
		if (!func_14(0x00000033))
		{
			func_4("RE_REWARD", 0x00000001, 0x00000000, 0x00000FA0, 0x00002710, func_7(), 0x00000000, 0x0000008A, 0x00000000);
			func_194(0x00000033);
		}
		if (func_109(iParam0))
		{
			Global_1B416.f_619E.f_2 = 0x00000003;
		}
		if (func_193(iParam0, iParam1) != 0x00000142)
		{
			func_191(func_193(iParam0, iParam1), vLocal_49.x, vLocal_49.y);
		}
		Global_1B40A = iParam1;
		if (Global_1B408 == 0x00000000)
		{
			if (((Global_1B40B == 0x00000001 || Global_1B40B == 0x00000005) || Global_1B40B == 0x0000000B) || Global_1B40B == 0x00000019)
			{
				func_166(0x00000002);
			}
			else if ((Global_1B40B == 0x0000001A || Global_1B40B == 0x00000008) || Global_1B40B == 0x00000011)
			{
				func_166(0x00000007);
			}
			else
			{
				func_166(0x00000001);
			}
		}
	}
}

void func_191(int iParam0, var uParam1, var uParam2)
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
		func_28((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		Global_1B416.f_27CD[iParam0 /*12*/].f_A = uParam1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_B = uParam2;
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
		func_192();
	}
}

void func_192()
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
		func_49(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_123() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_188();
				}
			}
		}
	}
}

int func_193(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x000000FA;
			break;
		
		case 0x00000001:
			return 0x000000E2;
			break;
		
		case 0x00000002:
			return 0x000000F3;
			break;
		
		case 0x00000003:
			return 0x00000100;
			break;
		
		case 0x00000004:
			return 0x00000103;
			break;
		
		case 0x00000005:
			if (iParam1 == 0x00000001)
			{
				return 0x00000119;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x0000011A;
			}
			break;
		
		case 0x00000006:
			return 0x00000109;
			break;
		
		case 0x00000007:
			return 0x000000DA;
			break;
		
		case 0x00000009:
			if (iParam1 == 0x00000001)
			{
				return 0x0000010F;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x00000110;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x00000111;
			}
			if (iParam1 == 0x00000004)
			{
				return 0x00000112;
			}
			if (iParam1 == 0x00000005)
			{
				return 0x00000113;
			}
			if (iParam1 == 0x00000006)
			{
				return 0x00000114;
			}
			if (iParam1 == 0x00000007)
			{
				return 0x00000115;
			}
			if (iParam1 == 0x00000008)
			{
				return 0x00000116;
			}
			if (iParam1 == 0x00000009)
			{
				return 0x00000117;
			}
			if (iParam1 == 0x0000000A)
			{
				return 0x00000118;
			}
			break;
		
		case 0x0000000A:
			return 0x000000DB;
			break;
		
		case 0x0000000B:
			if (iParam1 == 0x00000001)
			{
				return 0x000000F6;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000F7;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x000000F8;
			}
			if (iParam1 == 0x00000004)
			{
				return 0x000000F9;
			}
			break;
		
		case 0x0000000C:
			return 0x000000FE;
			break;
		
		case 0x0000000D:
			if (iParam1 == 0x00000001)
			{
				return 0x00000104;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x00000105;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x00000106;
			}
			if (iParam1 == 0x00000004)
			{
				return 0x00000108;
			}
			break;
		
		case 0x0000000E:
			return 0x0000011B;
			break;
		
		case 0x0000000F:
			if (iParam1 == 0x00000001)
			{
				return 0x000000E0;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000E1;
			}
			break;
		
		case 0x00000010:
			return 0x000000FC;
			break;
		
		case 0x00000011:
			if (iParam1 == 0x00000001)
			{
				return 0x000000F4;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000F5;
			}
			break;
		
		case 0x00000012:
			return 0x000000FD;
			break;
		
		case 0x00000013:
			return 0x000000D7;
			break;
		
		case 0x00000014:
			return 0x000000D8;
			break;
		
		case 0x00000015:
			return 0x000000FB;
			break;
		
		case 0x00000016:
			if (iParam1 == 0x00000001)
			{
				return 0x000000DD;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000DE;
			}
			break;
		
		case 0x00000017:
			if (iParam1 == 0x00000001)
			{
				return 0x000000D5;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000D6;
			}
			break;
		
		case 0x00000018:
			return 0x000000F2;
			break;
		
		case 0x00000019:
			if (iParam1 == 0x00000001)
			{
				return 0x0000010B;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x0000010C;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x0000010D;
			}
			break;
		
		case 0x00000008:
			return 0x000000FF;
			break;
		
		case 0x0000001A:
			if (iParam1 == 0x00000001)
			{
				return 0x000000E3;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000E4;
			}
			break;
		
		case 0x0000001B:
			if (iParam1 == 0x00000001)
			{
				return 0x00000101;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x00000102;
			}
			break;
		
		case 0x0000001C:
			return 0x000000D9;
			break;
		
		case 0x0000001D:
			if (iParam1 == 0x00000001)
			{
				return 0x000000E5;
			}
			if (iParam1 == 0x00000002)
			{
				return 0x000000E6;
			}
			if (iParam1 == 0x00000003)
			{
				return 0x000000E7;
			}
			break;
		
		case 0x0000001E:
			return 0x0000011D;
			break;
		
		case 0x0000001F:
			return 0x0000013E;
			break;
		
		case 0x00000020:
			return 0x0000013F;
			break;
		
		case 0x00000021:
			return 0x00000140;
			break;
	}
	return 0x00000142;
}

void func_194(int iParam0)
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
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_4FB5.f_96[iVar1]), iVar0);
	}
}

void func_195(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_619E.f_8[iParam0]), iParam1);
}

int func_196(int iParam0)
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

int func_197()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0xBB0808A181D4745C(), 64);
	uVar1 = func_198(Var0);
	return uVar1;
}

int func_198(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

void func_199(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0x00000000 && iVar0 <= 0x0000001F)
	{
		if (!func_202(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_673D.f_1), iVar0);
			if (!bParam1)
			{
				func_200(func_201(iParam0));
			}
		}
	}
}

void func_200(char* sParam0)
{
	unk_0x1E64CE678ED5F61E("");
	unk_0x49E52B24E5A757B3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0x00000000, 0x00000000, "DI_FEED_CHAR", sParam0);
}

char* func_201(int iParam0)
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

int func_202(int iParam0)
{
	if (iParam0 != 0xFFFFFFFF && iParam0 != 0x0000000D)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_673D.f_1, iParam0);
	}
	return 0x00000000;
}

int func_203()
{
	return 0x00000001;
}

int func_204()
{
	if (Global_791E)
	{
		func_166(0x00000004);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_205(int iParam0)
{
	return func_125(iParam0, 0x00000005, 0x00000001);
}

int func_206()
{
	if (!func_113(0x00000005))
	{
		return 0x00000001;
	}
	if (func_161())
	{
		return 0x00000001;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_165())
		{
			return 0x00000000;
		}
	}
	if (func_155(100f, 0x00000001) != 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_207()
{
	if ((Global_1B40B == func_197() && unk_0xD4A2BF1975E2C50F()) && Global_1B40C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_208(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_91)
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_92 + uParam0->f_93) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x00000002)) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 0x0000000D))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000008)
			{
				if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001E))
				{
					if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*18*/], 0x0000001D))
					{
						func_209(uParam0[iVar0 /*18*/]);
						uParam0->f_92 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_209(int iParam0)
{
	func_210(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_210(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001E))
	{
		switch (func_148(*iParam0))
		{
			case 0x00000000:
				unk_0x523BCC9DC80CD82F(iParam2);
				break;
			
			case 0x00000001:
				unk_0x3F423BF5B8125A50(sParam1);
				break;
			
			case 0x00000002:
				unk_0x4E09E67A27F104A7(sParam1);
				break;
			
			case 0x00000003:
				unk_0x0D3BE1DE0262A012(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001C));
				break;
			
			case 0x00000004:
				unk_0x36187931D29E5BBE(iParam2, sParam1);
				break;
			
			case 0x00000005:
				unk_0x29398344B9E5B8A7(sParam1);
				break;
			
			case 0x00000006:
				unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 0x0000001B), 0xFFFFFFFF);
				break;
			
			case 0x00000007:
				unk_0x8CFFBE74CB5C864A(iParam2);
				break;
			
			case 0x00000008:
				unk_0xD7992BEF7A9D109E(sParam1, iParam2);
				break;
			
			case 0x00000009:
				unk_0x9E5E60D8C63FD9D1();
				break;
			
			default:
				break;
		}
		unk_0x5D96D8530B3D0904(iParam0, 0x0000001D);
	}
}

void func_211(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_197();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	func_213(iParam0);
	unk_0x24D1A8A556F3252A(0x00000000);
	unk_0xD084C7D80DE4139C(0x00000001);
	Global_1B408 = 0x00000000;
	func_212();
}

void func_212()
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

void func_213(int iParam0)
{
	Global_1B40B = iParam0;
}

int func_214(vector3 vParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (!Global_24AC9)
	{
		return 0x00000000;
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		iParam1 = func_197();
	}
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x0000001F || iParam1 == 0x00000020)
	{
		if (!func_97())
		{
			return 0x00000000;
		}
	}
	vLocal_49 = { vParam0 };
	bVar0 = 0x00000000;
	if (!bVar0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
			if (SYSTEM::VMAG2(unk_0x56E9E0FD5ACCD35D(unk_0x16F2683693E537C9())) > 1369f && !func_165())
			{
				return 0x00000000;
			}
		}
		if (!Global_1B416.f_2378)
		{
			return 0x00000000;
		}
		if (func_189(0x00000000))
		{
			return 0x00000000;
		}
		if (func_161())
		{
			return 0x00000000;
		}
		if (func_244())
		{
			return 0x00000000;
		}
		if (Global_1B40B != 0xFFFFFFFF)
		{
			return 0x00000000;
		}
		if (func_10(func_119()))
		{
			if (func_155(100f, 0x00000001) != 0xFFFFFFFF)
			{
				return 0x00000000;
			}
		}
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !bParam4)
		{
			if ((vVar1.z - vLocal_49.z) > 50f)
			{
				return 0x00000000;
			}
		}
		if (!func_243(iParam1))
		{
			return 0x00000000;
		}
		if (func_10(func_119()))
		{
			if (func_242(func_119()) == 0x00000004 || func_242(func_119()) == 0x00000005)
			{
				return 0x00000000;
			}
		}
		if (func_10(func_119()))
		{
			if (!func_241(iParam1, iParam2, 0x00000091))
			{
				return 0x00000000;
			}
		}
		if (!func_240(Global_1B416.f_619E.f_2B[iParam1]))
		{
			return 0x00000000;
		}
		if ((unk_0x1C0640BA9A7327B3() - Global_1B40D) < 0x000249F0)
		{
			if (iParam1 != 0x0000001E)
			{
				return 0x00000000;
			}
		}
		if (func_239())
		{
			return 0x00000000;
		}
		if (unk_0x2C1AA3A291786CDC())
		{
			return 0x00000000;
		}
		if (unk_0xD4A2BF1975E2C50F())
		{
			return 0x00000000;
		}
		if (!func_132(0x00000004))
		{
			return 0x00000000;
		}
		if (!func_113(0x00000005))
		{
			return 0x00000000;
		}
		if (func_238(iParam1, iParam2) && !bParam3)
		{
			return 0x00000000;
		}
		if (Global_3 && iParam1 != 0x0000000A)
		{
			return 0x00000000;
		}
		if (unk_0x31609A585163CBAC(unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())))
		{
			if ((unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(377.153f, -717.567f, 10.0536f) || unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(320.9934f, 265.2515f, 82.1221f)) || unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(-1425.564f, -244.3f, 15.8053f))
			{
				return 0x00000000;
			}
		}
		if ((iParam1 == 0x00000009 && (iParam2 == 0x00000002 || iParam2 == 0x00000005)) && !func_238(0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		if (Global_78C2)
		{
			return 0x00000000;
		}
		if (func_243(0x0000001E) && !func_238(0x0000001E, 0x00000000))
		{
			if (iParam1 != 0x0000001E)
			{
				if (SYSTEM::VDIST2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0x00000000;
				}
			}
		}
		if (func_10(func_119()))
		{
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000003)
			{
				vVar3 = { Global_1B416.f_936.f_21B.f_8FC[iVar2 /*3*/] };
				iVar4 = Global_1B416.f_936.f_21B.f_8F8[iVar2];
				if (func_237(iVar4))
				{
					if (func_215(iVar2))
					{
						if (!func_64(vVar3, 0f, 0f, 0f, 0x00000000))
						{
							if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000000), vVar3) < (210f * 210f))
							{
								if (func_119() != iVar2)
								{
									return 0x00000000;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 0x00000001;
}

bool func_215(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1B416.f_936.f_21B.f_8F8[iParam0];
	return func_216(iVar0);
}

int func_216(int iParam0)
{
	return func_217(iParam0, 0x00000001);
}

int func_217(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_237(iParam0))
	{
		return 0x00000000;
	}
	func_218(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0x00000000 || iVar4 > 0x00000000) || iVar3 > 0x00000000) || iVar2 >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_218(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_219(func_230(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_219(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_229(iParam0, iParam1))
	{
		iVar0 = func_228(iParam1);
		iVar1 = func_226(iParam0);
		iVar2 = (func_226(iParam0) - func_226(iParam1));
		iVar3 = (func_228(iParam0) - func_228(iParam1));
		iVar4 = (func_225(iParam0) - func_225(iParam1));
		iVar5 = (func_224(iParam0) - func_224(iParam1));
		iVar6 = (func_223(iParam0) - func_223(iParam1));
		iVar7 = (func_222(iParam0) - func_222(iParam1));
	}
	else
	{
		iVar0 = func_228(iParam0);
		iVar1 = func_226(iParam1);
		iVar2 = (func_226(iParam1) - func_226(iParam0));
		iVar3 = (func_228(iParam1) - func_228(iParam0));
		iVar4 = (func_225(iParam1) - func_225(iParam0));
		iVar5 = (func_224(iParam1) - func_224(iParam0));
		iVar6 = (func_223(iParam1) - func_223(iParam0));
		iVar7 = (func_222(iParam1) - func_222(iParam0));
	}
	while (iVar7 < 0x00000000)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 0x00000001);
	}
	while (iVar7 > 0x0000003B)
	{
		iVar7 = (iVar7 - 0x0000003C);
		iVar6++;
	}
	while (iVar6 < 0x00000000)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 0x00000001);
	}
	while (iVar6 > 0x0000003B)
	{
		iVar6 = (iVar6 - 0x0000003C);
		iVar5++;
	}
	while (iVar5 < 0x00000000)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 0x00000001);
	}
	while (iVar5 > 0x00000017)
	{
		iVar5 = (iVar5 - 0x00000018);
		iVar4++;
	}
	while (iVar4 < 0x00000000)
	{
		while (iVar3 < 0x00000000)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 0x00000001);
		}
		iVar4 = (iVar4 + func_221(iVar0, iVar1));
		iVar3 = (iVar3 - 0x00000001);
		iVar0 = SYSTEM::ROUND(func_220(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0x00000000)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 0x00000001);
	}
	while (iVar3 > 0x0000000C)
	{
		iVar3 = (iVar3 - 0x0000000C);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_220(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_221(int iParam0, int iParam1)
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

int func_222(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000014) & 0x0000003F;
}

int func_223(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x0000000E) & 0x0000003F;
}

int func_224(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000009) & 0x0000001F;
}

int func_225(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 0x00000004) & 0x0000001F;
}

int func_226(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 0x0000001A) & 0x0000001F * func_227(unk_0xEAE0D21A50E6C7F4(iParam0, 0x0000001F), 0xFFFFFFFF, 0x00000001)) + 2011;
}

int func_227(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_228(int iParam0)
{
	return iParam0 & 0x0000000F;
}

int func_229(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_237(iParam1) || !func_237(iParam0))
	{
		return 0x00000001;
	}
	iVar0 = func_226(iParam0);
	iVar1 = func_226(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_228(iParam0);
	iVar1 = func_228(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_225(iParam0);
	iVar1 = func_225(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_224(iParam0);
	iVar1 = func_224(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_223(iParam0);
	iVar1 = func_223(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	else if (iVar0 < iVar1)
	{
		return 0x00000000;
	}
	iVar0 = func_222(iParam0);
	iVar1 = func_222(iParam1);
	if (iVar0 > iVar1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_230()
{
	var uVar0;
	
	func_236(&uVar0, unk_0x4460E481B9E33ADA());
	func_235(&uVar0, unk_0x8D199E381D262EEF());
	func_234(&uVar0, unk_0xD8A54335F18763BA());
	func_233(&uVar0, unk_0x972A296334C9D57B());
	func_232(&uVar0, unk_0x118229AD063C3C1D());
	func_231(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_231(var uParam0, int iParam1)
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

void func_232(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x0000000B)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x0000000F);
	*uParam0 = (*uParam0 || iParam1);
}

void func_233(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_228(*uParam0);
	iVar1 = func_226(*uParam0);
	if (iParam1 < 0x00000001 || iParam1 > func_221(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000001F0);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000004));
}

void func_234(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 > 0x00000018)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x00003E00);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000009));
}

void func_235(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x000FC000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x0000000E));
}

void func_236(var uParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x0000003C)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 0x03F00000);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 0x00000014));
}

int func_237(int iParam0)
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
	iVar0 = func_222(iParam0);
	if (iVar0 < 0x00000000 || iVar0 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar1 = func_223(iParam0);
	if (iVar1 < 0x00000000 || iVar1 >= 0x0000003C)
	{
		return 0x00000000;
	}
	iVar2 = func_224(iParam0);
	if (iVar2 < 0x00000000 || iVar2 > 0x00000017)
	{
		return 0x00000000;
	}
	iVar3 = func_226(iParam0);
	if ((iVar3 <= 0x00000000 || iVar3 > 0x000007FB) || iVar3 < 0x000007BB)
	{
		return 0x00000000;
	}
	iVar4 = func_228(iParam0);
	if (iVar4 < 0x00000000 || iVar4 > 0x0000000B)
	{
		return 0x00000000;
	}
	iVar5 = func_225(iParam0);
	if (iVar5 < 0x00000001 || iVar5 > func_221(iVar4, iVar3))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_238(int iParam0, int iParam1)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[iParam0], iParam1))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_239()
{
	func_182();
	if (Global_1FE1[Global_4C1E /*2811*/][0x00000000 /*281*/].f_103 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_240(int iParam0)
{
	return func_229(func_230(), iParam0);
}

int func_241(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	iVar1 = func_119();
	if (iParam2 != 0x00000091 && ((iParam2 == 0x00000000 || iParam2 == 0x00000001) || iParam2 == 0x00000002))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 0x00000012:
			if (iVar1 == 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000013:
			if (iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000014:
			if (iVar1 != 0x00000001)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000001C:
			if (iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000000D:
			if (iVar1 == 0x00000000)
			{
				if (iParam1 == 0x00000002)
				{
					iVar0 = 0x00000000;
				}
				else
				{
					iVar0 = 0x00000001;
				}
			}
			else
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x00000016:
			if (iParam1 == 0x00000002 || iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		case 0x0000001E:
			if (iVar1 != 0x00000002)
			{
				iVar0 = 0x00000001;
			}
			break;
		
		default:
			iVar0 = 0x00000001;
			break;
	}
	return iVar0;
}

int func_242(int iParam0)
{
	if (!func_10(iParam0))
	{
		return 0x00000007;
	}
	return Global_1B416.f_1E03.f_397[iParam0];
}

bool func_243(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 0x0000001F || iParam0 == 0x00000020)
	{
		if (!func_97())
		{
			return 0x00000000;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 0x0000001F)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 0x0000001F);
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_1, iVar0);
	}
	return bVar1;
}

int func_244()
{
	int iVar0;
	
	if (Global_78C6)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
			if (unk_0xDF1306B443CD3D15(iVar0, 0x00000000))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0xA30B8362589C124A(iVar0, 0x00000000, 0x00000000)))
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

void func_245(var uParam0, int iParam1)
{
	if (iParam1 > 0x00000000)
	{
		uParam0->f_93 = iParam1;
	}
}

void func_246(struct<9> Param0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iLocal_269)
	{
		func_259(0x00000000);
		if (Global_7921)
		{
			unk_0xC92DB9682A650680("AC_STOP");
		}
		func_258();
		func_105(0x00000000);
		unk_0xE342F209E49C5314(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), 0x00000001, 0x00000001);
		unk_0xB547E3FFEB27073E();
		unk_0x9FE27D475353EFE9(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), 0x00000000);
		unk_0xF5894FEB702E7E76(vLocal_232 - Vector(20f, 20f, 20f), vLocal_232 + Vector(20f, 20f, 20f), 0x00000001);
		unk_0x9EBC57EECAF8C953(unk_0xD803B885F5E47A62());
		unk_0x51B096AAC60548C1(1f);
		if (!unk_0x437347B10A200C4B(iLocal_264, 0x00000000))
		{
			func_80(iLocal_264, 0x00000000, 0x00000091);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_257))
		{
			if (unk_0xB4ECF989E2C1DAC8(iLocal_257, "random@getawaydriver", "idle_a", 0x00000003) || unk_0xB4ECF989E2C1DAC8(iLocal_257, "random@getawaydriver", "idle_2_hands_up", 0x00000003))
			{
				unk_0xDD353D0E9C789D0E(&iLocal_265);
				unk_0xC6EB89C59F2AF6B8(0x00000000, "random@getawaydriver", "hands_up_2_idle", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				if (!unk_0xEB6A8945D1AC98A1((*iParam1)[0x00000000]))
				{
					unk_0xF3268524E9BE6D6E(0x00000000, (*iParam1)[0x00000000], 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
				else if (!unk_0xEB6A8945D1AC98A1((*iParam1)[0x00000001]))
				{
					unk_0xF3268524E9BE6D6E(0x00000000, (*iParam1)[0x00000001], 150f, 0xFFFFFFFF, 0x00000000, 0x00000000);
				}
				unk_0x75ABDC5F81978924(iLocal_265);
				unk_0x78ADC381772E3D54(iLocal_257, iLocal_265);
				unk_0xF82EA857DA10E0CD(&iLocal_265);
				unk_0xFADC0A217229F6B5(iLocal_257, 0x00000001);
			}
			unk_0x8FB4E06C94958F84(iLocal_257);
			unk_0xAFF39FB306F8E232(iLocal_257, 0x00000011, 0x00000001);
			unk_0x11AD11297DC58CC7(iLocal_257, 0x00000000);
		}
		if (!unk_0xEB6A8945D1AC98A1((*iParam1)[0x00000000]))
		{
			unk_0x4E885A246A9D983A((*iParam1)[0x00000000], 0x0000013D, 0x00000001);
			unk_0xAFF39FB306F8E232((*iParam1)[0x00000000], 0x00000011, 0x00000001);
			unk_0x0A94A109271BE75A((*iParam1)[0x00000000]);
			unk_0x25C5402CC10F76CD((*iParam1)[0x00000000], 0x00000001);
			unk_0x11AD11297DC58CC7((*iParam1)[0x00000000], 0x00000000);
		}
		if (!unk_0xEB6A8945D1AC98A1((*iParam1)[0x00000001]))
		{
			unk_0x4E885A246A9D983A((*iParam1)[0x00000001], 0x0000013D, 0x00000001);
			unk_0xAFF39FB306F8E232((*iParam1)[0x00000001], 0x00000011, 0x00000001);
			unk_0x0A94A109271BE75A((*iParam1)[0x00000001]);
			unk_0x25C5402CC10F76CD((*iParam1)[0x00000001], 0x00000001);
			unk_0x11AD11297DC58CC7((*iParam1)[0x00000001], 0x00000000);
		}
		iVar0 = 0x00000000;
		while (iVar0 < iLocal_259)
		{
			if (!unk_0xEB6A8945D1AC98A1(iLocal_259[iVar0]))
			{
				unk_0x11AD11297DC58CC7(iLocal_259[iVar0], 0x00000000);
			}
			iVar0++;
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_260[0x00000000]))
		{
			unk_0x262EF6C6306BEA6C(iLocal_260[0x00000000], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
			unk_0x11AD11297DC58CC7(iLocal_260[0x00000000], 0x00000000);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_260[0x00000001]))
		{
			unk_0x262EF6C6306BEA6C(iLocal_260[0x00000001], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
			unk_0x11AD11297DC58CC7(iLocal_260[0x00000001], 0x00000000);
		}
		if (!unk_0xEB6A8945D1AC98A1(iLocal_260[0x00000002]))
		{
			unk_0x262EF6C6306BEA6C(iLocal_260[0x00000002], joaat("weapon_pistol"), 0xFFFFFFFF, 0x00000000, 0x00000001);
			unk_0x11AD11297DC58CC7(iLocal_260[0x00000002], 0x00000000);
		}
		if (!bParam2)
		{
			if (!unk_0xEB6A8945D1AC98A1((*iParam1)[0x00000000]))
			{
				unk_0xEEB67C3D0A71A47B((*iParam1)[0x00000000], func_186(unk_0xD803B885F5E47A62()), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
			if (!unk_0xEB6A8945D1AC98A1((*iParam1)[0x00000001]))
			{
				unk_0xEEB67C3D0A71A47B((*iParam1)[0x00000001], func_186(unk_0xD803B885F5E47A62()), 200f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
		}
		if (!iLocal_218)
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000);
			iLocal_218 = 0x00000001;
		}
		func_70(iLocal_51);
		if (unk_0xE4EDC4B0E92C078B(iLocal_256))
		{
			unk_0x142CC44DB769B57E(&iLocal_256);
		}
		func_70(iLocal_52);
		func_129(0x00000000);
		func_142(0x00000000, Param0);
	}
	func_247(0xFFFFFFFF);
	unk_0x10FAF14A60A0DBE1();
}

void func_247(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == 0xFFFFFFFF)
	{
		iParam0 = func_197();
	}
	if (iParam0 == 0xFFFFFFFF)
	{
		return;
	}
	if (func_207())
	{
		func_251(iParam0);
		unk_0x974531784BE14213(0x00000000, 0x00000000);
		Global_1B40D = unk_0x1C0640BA9A7327B3();
		func_250(0x00007530);
		StringCopy(&cVar0, func_249(Global_1B40B, 0x00000001), 64);
		if (func_196(Global_1B40B) > 0x00000000)
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
	func_248(&Global_786B);
	Global_1B40C = 0x00000000;
	func_213(0xFFFFFFFF);
}

void func_248(var uParam0)
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

char* func_249(int iParam0, bool bParam1)
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

void func_250(int iParam0)
{
	Global_A3FE = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_251(int iParam0)
{
	func_252(iParam0, 0x00000000, func_257(iParam0));
}

void func_252(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_230();
	func_255(&uVar0, 0x00000000, 0x00000000, iParam2, iParam1, 0x00000000, 0x00000000);
	func_254(iParam0, &uVar0);
	Var1 = { func_253(&uVar0) };
}

struct<16> func_253(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_224(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_223(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_222(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_225(*uParam0);
	if (iVar1 < 0x0000000A)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_228(*uParam0);
	if (iVar1 < 0x00000009)
	{
		StringIntConCat(&Var0, 0x00000000, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_226(*uParam0), 64);
	return Var0;
}

void func_254(int iParam0, var uParam1)
{
	Global_1B416.f_619E.f_2B[iParam0] = *uParam1;
}

void func_255(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_226(*uParam0);
	iVar1 = func_228(*uParam0);
	iVar2 = func_225(*uParam0);
	iVar3 = func_224(*uParam0);
	iVar4 = func_223(*uParam0);
	iVar5 = func_222(*uParam0);
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
	iVar6 = func_221(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 0x0000000B)
		{
			iVar0++;
			iVar1 = (iVar1 - 0x0000000C);
		}
		iVar6 = func_221(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 0x0000000B)
	{
		iParam6++;
		iVar1 = (iVar1 - 0x0000000C);
	}
	iVar0 = (iVar0 + iParam6);
	func_256(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_256(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_236(uParam0, iParam1);
	func_235(uParam0, iParam2);
	func_234(uParam0, iParam3);
	func_232(uParam0, iParam5);
	func_233(uParam0, iParam4);
	func_231(uParam0, iParam6);
}

int func_257(int iParam0)
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

void func_258()
{
	Global_791D = 0x00000000;
	Global_791E = 0x00000000;
	Global_7920 = 0x00000000;
	Global_7921 = 0x00000000;
	Global_7922 = 0x00000000;
}

void func_259(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000035)
	{
		func_120(iVar0, bParam0);
		iVar0++;
	}
}

