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
	var uLocal_39 = 0;
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
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	vector3 vLocal_76 = { 0f, 0f, 0f };
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	char* sLocal_80[3] = { NULL, NULL, NULL };
	char* sLocal_81 = NULL;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	vector3 vLocal_84[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_85[4] = { 0f, 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<4> Local_88 = { 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 15;
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
	var uLocal_148 = 16;
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
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317[5] = { 0, 0, 0, 0, 0 };
	float fLocal_318[5] = { 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_319[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_320[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_321 = 0;
	vector3 vLocal_322 = { 0f, 0f, 0f };
	vector3 vLocal_323 = { 0f, 0f, 0f };
	float fLocal_324 = 0f;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	bool bLocal_327 = 0;
	int iLocal_328 = 0;
	vector3 vLocal_329 = { 0f, 0f, 0f };
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	float fLocal_341 = 0f;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	vector3 vLocal_345 = { 0f, 0f, 0f };
	int iLocal_346 = 0;
	vector3 vLocal_347 = { 0f, 0f, 0f };
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	vector3 vLocal_351 = { 0f, 0f, 0f };
	vector3 vLocal_352 = { 0f, 0f, 0f };
	float fLocal_353 = 0f;
	vector3 vLocal_354 = { 0f, 0f, 0f };
	vector3 vLocal_355 = { 0f, 0f, 0f };
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	vector3 vLocal_358[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	char* sLocal_370 = NULL;
	char* sLocal_371 = NULL;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	struct<2> Local_387 = { 0, 5 } ;
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
	var uLocal_403 = 5;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
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
	iLocal_54 = 0xFFFFFFFF;
	sLocal_81 = "null";
	iLocal_82 = 0xFFFFFFFF;
	iLocal_83 = 0xFFFFFFFF;
	iLocal_94 = 0x00000001;
	fLocal_324 = 200f;
	iLocal_343 = unk_0x1C0640BA9A7327B3();
	iLocal_344 = 0x00002710;
	iLocal_360 = 0xFFFFFFFF;
	iLocal_369 = 0x589D7B2F;
	sLocal_370 = "std_ds_open_door_for_chop";
	sLocal_371 = "creatures@rottweiler@in_vehicle@std_car";
	iLocal_379 = unk_0x1C0640BA9A7327B3();
	iLocal_382 = unk_0x1C0640BA9A7327B3();
	iLocal_384 = unk_0xD68EA767274B7444();
	if (unk_0x2EBF608FFE6CA406(0x00000003))
	{
		func_180();
	}
	while (!unk_0x0F1CCD77290EE12F())
	{
		SYSTEM::WAIT(0x00000000);
	}
	iLocal_386 = unk_0x8C74DE122769E1BF();
	vLocal_345 = { ScriptParam_387.f_1[0x00000000 /*3*/] };
	if (unk_0x8A22C4C08282BF26(unk_0x7CF4675EC2B8ED0B()) > 0x00000001)
	{
		func_180();
	}
	if (!func_179(0x0000003F))
	{
		func_180();
	}
	if (!func_178(0x00000005) && !func_178(0x00000006))
	{
		func_180();
	}
	if (func_178(0x00000006) && func_177(vLocal_345, 0x00000001, 0x00000000) == 0x00000005)
	{
		func_180();
	}
	if (!func_170(0x00000001))
	{
		func_180();
	}
	if (Global_78C3 == 0x00000001)
	{
		func_180();
	}
	if (Global_175B0 == 0x00000001)
	{
		func_180();
	}
	if (func_167(0x00000000))
	{
		if (unk_0x8A22C4C08282BF26(joaat("sh_intro_f_hills")) == 0x00000000 && unk_0x8A22C4C08282BF26(joaat("martin1")) == 0x00000000)
		{
			func_180();
		}
	}
	if ((((func_166() == 0x000000CE || func_166() == 0x000000CF) || func_166() == 0x000000CC) || func_166() == 0x000000CD) || func_166() == 0x000000CB)
	{
		iLocal_325 = 0x00000001;
	}
	else if (func_166() == 0x0000002F)
	{
		iLocal_326 = 0x00000001;
	}
	else
	{
		if ((unk_0x0EB28750412C3A5A(vLocal_345, 154.0731f, 765.5721f, 209.6901f, 0x00000001) <= 50f || unk_0x0EB28750412C3A5A(vLocal_345, -268.139f, 415.2881f, 109.7258f, 0x00000001) <= 50f) || unk_0x0EB28750412C3A5A(vLocal_345, 314.4171f, 965.207f, 208.4024f, 0x00000001) <= 50f)
		{
			func_180();
		}
		iLocal_325 = 0x00000000;
		iLocal_326 = 0x00000000;
		if (Global_12B4C == 0x00000001)
		{
			func_180();
		}
	}
	while (0x00000001)
	{
		if (!func_163())
		{
			switch (iLocal_50)
			{
				case 0x00000000:
					func_154();
					break;
				
				case 0x00000001:
					func_1();
					break;
			}
		}
		else
		{
			func_180();
		}
		SYSTEM::WAIT(0x00000000);
	}
}

void func_1()
{
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		return;
	}
	if (unk_0xEB6A8945D1AC98A1(iLocal_69))
	{
		return;
	}
	func_152();
	func_151();
	if (iLocal_51 != 0x0000000B)
	{
		func_150();
		func_149();
		func_129();
		func_128();
		func_126();
	}
	func_2();
}

void func_2()
{
	int iVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	switch (iLocal_51)
	{
		case 0x0000000B:
			if (iLocal_52 == 0x00000000)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@sleep_in_kennel@");
				if (unk_0xB4AE0788C1587752("creatures@rottweiler@amb@sleep_in_kennel@"))
				{
					if (func_125(iLocal_69))
					{
						unk_0xC6EB89C59F2AF6B8(iLocal_69, "creatures@rottweiler@amb@sleep_in_kennel@", "sleep_in_kennel", 1000f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						func_124(iLocal_69, vLocal_329.f_5, vLocal_329.f_8, 0x00000000, 0x00000001);
					}
					iLocal_336 = unk_0x1C0640BA9A7327B3();
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 0x00000001)
			{
				if (func_123())
				{
					unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@sleep_in_kennel@");
					if (unk_0xB4AE0788C1587752("creatures@rottweiler@amb@sleep_in_kennel@") && func_125(iLocal_69))
					{
						unk_0xC6EB89C59F2AF6B8(iLocal_69, "creatures@rottweiler@amb@sleep_in_kennel@", "exit_kennel", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						func_122("WHINE");
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 0x00000002)
			{
				if (unk_0xD1960163A3042274(iLocal_69, 0x87B9A382) == 0x00000007)
				{
					unk_0x8D17794CE3273D70("creatures@rottweiler@amb@sleep_in_kennel@");
					func_122("PLAYFUL");
					func_121(0x00000001, 0x00000001);
				}
			}
			break;
		
		case 0x00000001:
			if (iLocal_338 == 0x00000000 && func_118(unk_0x16F2683693E537C9(), 0x00000001))
			{
				func_121(0x00000012, 0x00000001);
			}
			else
			{
				func_117();
				func_116();
				func_115();
			}
			break;
		
		case 0x00000011:
			func_117();
			func_116();
			if (iLocal_52 == 0x00000000)
			{
				unk_0x3F423BF5B8125A50(sLocal_80[0x00000000]);
				unk_0x3F423BF5B8125A50(sLocal_80[0x00000001]);
				unk_0x3F423BF5B8125A50(sLocal_80[0x00000002]);
				if ((unk_0xB4AE0788C1587752(sLocal_80[0x00000000]) && unk_0xB4AE0788C1587752(sLocal_80[0x00000001])) && unk_0xB4AE0788C1587752(sLocal_80[0x00000002]))
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_80[0x00000000], "enter", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 0x00000001)
			{
				if ((!func_113(iLocal_69, 0x87B9A382) || (unk_0xB4ECF989E2C1DAC8(iLocal_69, sLocal_80[0x00000000], "enter", 0x00000003) && unk_0x8CA9406E01C7EE58(iLocal_69, sLocal_80[0x00000000], "enter") > 0.98f)) || (unk_0xB4ECF989E2C1DAC8(iLocal_69, sLocal_80[0x00000001], sLocal_81, 0x00000003) && unk_0x8CA9406E01C7EE58(iLocal_69, sLocal_80[0x00000001], sLocal_81) > 0.98f))
				{
					if (iLocal_53 == 0x00000000)
					{
						if (iLocal_79 == 0x00000001)
						{
							unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_80[0x00000001], "base", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							sLocal_81 = "base";
							iLocal_52++;
						}
						else
						{
							func_112();
							if (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004) == 0x00000000)
							{
								iLocal_52++;
							}
						}
					}
					else
					{
						if (iLocal_53 != 0x00000005)
						{
							func_108("CHOP_WAIT", 0x00000000);
						}
						unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_80[0x00000002], "exit", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						iLocal_52 = 0x00000003;
					}
				}
			}
			else if (iLocal_52 == 0x00000002)
			{
				if (!func_113(iLocal_69, 0x87B9A382) || (unk_0xB4ECF989E2C1DAC8(iLocal_69, sLocal_80[0x00000001], sLocal_81, 0x00000003) && unk_0x8CA9406E01C7EE58(iLocal_69, sLocal_80[0x00000001], sLocal_81) > 0.98f))
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_80[0x00000002], "exit", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 0x00000003)
			{
				if (!func_113(iLocal_69, 0x87B9A382))
				{
					iLocal_348 = 0x00000000;
					if (iLocal_53 == 0x00000000)
					{
						func_121(0x00000001, 0x00000001);
					}
					else
					{
						func_121(iLocal_53, 0x00000001);
					}
				}
			}
			break;
		
		case 0x00000012:
			func_116();
			if (iLocal_52 == 0x00000000)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@world_dog_barking@enter");
				unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@world_dog_barking@idle_a");
				unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@world_dog_barking@exit");
				unk_0xE185F110925D87DB(iLocal_69, unk_0x16F2683693E537C9(), 0x00004E20, 3f, 1f, 0x40000000, 0x00000000);
				iLocal_52++;
			}
			else if (iLocal_52 == 0x00000001)
			{
				if (iLocal_53 == 0x00000000)
				{
					if (!func_113(iLocal_69, 0x4924437D))
					{
						if ((unk_0xB4AE0788C1587752("creatures@rottweiler@amb@world_dog_barking@enter") && unk_0xB4AE0788C1587752("creatures@rottweiler@amb@world_dog_barking@idle_a")) && unk_0xB4AE0788C1587752("creatures@rottweiler@amb@world_dog_barking@exit"))
						{
							unk_0xDD353D0E9C789D0E(&iLocal_95);
							unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
							unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0x75ABDC5F81978924(iLocal_95);
							unk_0x78ADC381772E3D54(iLocal_69, iLocal_95);
							unk_0xF82EA857DA10E0CD(&iLocal_95);
							iLocal_52++;
						}
					}
				}
				else
				{
					func_121(iLocal_53, 0x00000001);
				}
			}
			else if (iLocal_52 == 0x00000002)
			{
				if (func_107())
				{
					iLocal_338 = 0x00000001;
					if (iLocal_53 == 0x00000000)
					{
						func_121(0x00000001, 0x00000001);
					}
					else
					{
						func_121(iLocal_53, 0x00000001);
					}
				}
			}
			break;
		
		case 0x00000002:
			func_102();
			if (iLocal_52 == 0x00000000)
			{
				if ((func_125(iLocal_69) && !unk_0x405E212DDE472467(iLocal_69, 0x00000000)) && !unk_0x16102BEDC7435774(iLocal_69))
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
				}
				func_100();
				func_99(0x00000000, 0x00000000, 0x00000000);
				func_98(0x00000001);
				iLocal_60 = 0xFFFFFFFF;
				iLocal_316 = unk_0x1C0640BA9A7327B3();
				iLocal_62 = unk_0x1C0640BA9A7327B3();
				iLocal_63 = (unk_0x1C0640BA9A7327B3() - 0x00002710);
				vLocal_76 = { unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001) };
				unk_0x3F423BF5B8125A50("creatures@rottweiler@melee@streamed_taunts@");
				iLocal_52++;
			}
			else if (iLocal_52 == 0x00000001)
			{
				func_83();
				func_54();
				func_53();
				func_45();
				func_44();
				func_41();
				func_117();
			}
			break;
		
		case 0x00000003:
			if (iLocal_52 == 0x00000000)
			{
				func_122("WHINE");
				func_108("CHOP_GOHOME", 0x00000000);
				func_40(0x00000000);
				unk_0x8D17794CE3273D70("creatures@rottweiler@melee@streamed_taunts@");
				if (func_125(unk_0x16F2683693E537C9()) && unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_ball"), 0x00000000))
				{
					unk_0x650567883F5E3136(unk_0x16F2683693E537C9(), joaat("weapon_ball"));
				}
				if (unk_0x16102BEDC7435774(iLocal_69))
				{
					unk_0x0A94A109271BE75A(iLocal_69);
				}
				if (func_118(iLocal_69, 0x00000001))
				{
					func_121(0x00000001, 0x00000001);
				}
				else if (func_39(iLocal_69, vLocal_329, 0x00000001) < 100f)
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					if (func_39(iLocal_69, vLocal_329, 0x00000001) < 20f)
					{
						unk_0x96167B03C5A77156(iLocal_69, vLocal_329, 1f, 0x00004E20, 0.25f, 0x00000020, vLocal_329.f_3);
					}
					else
					{
						unk_0x96167B03C5A77156(iLocal_69, vLocal_329, 3f, 0x0000EA60, 0.25f, 0x00000020, vLocal_329.f_3);
					}
					iLocal_52++;
				}
				else
				{
					func_121(0x00000004, 0x00000001);
				}
			}
			else if (iLocal_52 == 0x00000001)
			{
				if (unk_0xD1960163A3042274(iLocal_69, 0x2A89B8A7) == 0x00000007)
				{
					if (unk_0x5A91F08DF773C39D(iLocal_69, vLocal_329, 2.5f, 2.5f, 4f, 0x00000000, 0x00000001, 0x00000000))
					{
						func_121(0x00000001, 0x00000001);
					}
					else
					{
						func_121(0x00000003, 0x00000001);
					}
				}
			}
			break;
		
		case 0x00000004:
			if (!func_113(iLocal_69, 0x6BA30179))
			{
				unk_0xF3268524E9BE6D6E(iLocal_69, unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
			}
			break;
		
		case 0x00000005:
			if (iLocal_52 == 0x00000000)
			{
				if (func_38())
				{
					if (func_35())
					{
						if (unk_0x16102BEDC7435774(iLocal_69))
						{
							unk_0x0A94A109271BE75A(iLocal_69);
						}
						unk_0xA3BF0AA5A2608191(iLocal_69);
						iLocal_56 = unk_0x1C0640BA9A7327B3();
						iLocal_58 = 0x000003E8;
						iLocal_339 = 0x00000000;
						iLocal_67 = 0xFFFFFFFF;
						func_34();
						iLocal_52++;
					}
					else
					{
						func_32();
					}
				}
			}
			else if (iLocal_52 == 0x00000001)
			{
				if (((!func_24() || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !func_22())) || (iLocal_67 > 0xFFFFFFFF && (unk_0x1C0640BA9A7327B3() - iLocal_67) > 0x00007530)) || unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_322, 1f, 1f, 1f, 0x00000000, 0x00000001, 0x00000000))
				{
					iLocal_52++;
				}
				else if (unk_0x5A91F08DF773C39D(iLocal_69, vLocal_323, 3f, 3f, 4f, 0x00000000, 0x00000001, 0x00000000))
				{
					func_20();
					if (iLocal_67 == 0xFFFFFFFF)
					{
						iLocal_67 = unk_0x1C0640BA9A7327B3();
					}
				}
				else
				{
					func_18();
					if (func_113(iLocal_69, 0x2A89B8A7))
					{
						iVar0 = unk_0xCC2A4E7AEDA758DE(iLocal_69, &uVar2, &uVar1);
						if (iVar0 == 0x00000002)
						{
							iLocal_339++;
						}
						else if (iVar0 == 0x00000003)
						{
							if (iLocal_339 != 0x00000000)
							{
								iLocal_339 = 0x00000000;
							}
						}
						if (iLocal_339 > 0x00000009)
						{
							func_32();
						}
					}
					else
					{
						unk_0x96167B03C5A77156(iLocal_69, vLocal_323, 3f, 0xFFFFFFFF, 3f, 0x00000024, 0x471C4000);
					}
				}
			}
			else if (iLocal_52 == 0x00000002)
			{
				unk_0xA3BF0AA5A2608191(iLocal_69);
				unk_0x8D17794CE3273D70("creatures@rottweiler@indication@");
				func_121(0x00000002, 0x00000001);
			}
			func_102();
			break;
		
		case 0x00000006:
			if (iLocal_52 == 0x00000000)
			{
				if (unk_0x16102BEDC7435774(iLocal_69))
				{
					unk_0x0A94A109271BE75A(iLocal_69);
				}
				unk_0x11AD11297DC58CC7(iLocal_69, 0x00000000);
				iLocal_52++;
			}
			else if (iLocal_52 == 0x00000001)
			{
				if (func_125(unk_0x16F2683693E537C9()))
				{
					if ((!func_113(iLocal_69, 0x2E85A751) && !unk_0x4734A6196B611C3B(iLocal_69, 0x00000000)) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
					{
						iLocal_62 = unk_0x1C0640BA9A7327B3();
						func_121(0x00000002, 0x00000001);
					}
				}
			}
			func_102();
			break;
		
		case 0x00000007:
			if (iLocal_52 == 0x00000000)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@tricks@");
				if (unk_0xB4AE0788C1587752("creatures@rottweiler@tricks@"))
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					unk_0xDD353D0E9C789D0E(&iLocal_95);
					if (!unk_0x7069CC4DE1EA3FAA(iLocal_69, unk_0x16F2683693E537C9(), 10f))
					{
						unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					}
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "beg_enter", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "beg_exit", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_95);
					unk_0x78ADC381772E3D54(iLocal_69, iLocal_95);
					unk_0xF82EA857DA10E0CD(&iLocal_95);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 0x00000001)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0x00000000);
					unk_0x8D17794CE3273D70("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 0x00000008:
			if (iLocal_52 == 0x00000000)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@tricks@");
				if (unk_0xB4AE0788C1587752("creatures@rottweiler@tricks@"))
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					unk_0xDD353D0E9C789D0E(&iLocal_95);
					if (!unk_0x7069CC4DE1EA3FAA(iLocal_69, unk_0x16F2683693E537C9(), 10f))
					{
						unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					}
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_95);
					unk_0x78ADC381772E3D54(iLocal_69, iLocal_95);
					unk_0xF82EA857DA10E0CD(&iLocal_95);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 0x00000001)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0x00000000);
					unk_0x8D17794CE3273D70("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 0x00000009:
			if (iLocal_52 == 0x00000000)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@tricks@");
				if (unk_0xB4AE0788C1587752("creatures@rottweiler@tricks@"))
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					unk_0xDD353D0E9C789D0E(&iLocal_95);
					if (!unk_0x7069CC4DE1EA3FAA(iLocal_69, unk_0x16F2683693E537C9(), 10f))
					{
						unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					}
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "paw_right_enter", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "paw_right_exit", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_95);
					unk_0x78ADC381772E3D54(iLocal_69, iLocal_95);
					unk_0xF82EA857DA10E0CD(&iLocal_95);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 0x00000001)
			{
				if (func_107())
				{
					func_108("CHOP_RETURN1", 0x00000000);
					unk_0x8D17794CE3273D70("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 0x0000000A:
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000020, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000022, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000023, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000021, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000001F, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000001E, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000016, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000024, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008D, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008C, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000107, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000108, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x0000008F, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000018, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000101, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000106, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000105, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
			unk_0x38C3A68D7861DCFD(0x00000000, 0x00000015, 0x00000001);
			if (iLocal_52 == 0x00000000)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@tricks@");
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				unk_0xF96A174EE26D7588(unk_0x16F2683693E537C9(), iLocal_69, 0x00000000);
				iLocal_52++;
			}
			else if (iLocal_52 == 0x00000001)
			{
				if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0xCBCE4595) == 0x00000007)
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					vVar3 = { unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 0f, 1f, 1f) };
					unk_0xE82754C349C7B581(vVar3, &(vVar3.f_2), 0x00000000, 0x00000000);
					if (func_39(iLocal_69, vVar3, 0x00000000) > 0.3f)
					{
						unk_0x96167B03C5A77156(iLocal_69, vVar3, 1f, 0x00001388, 0.25f, 0x00000000, 0x471C4000);
					}
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 0x00000002)
			{
				if (unk_0xD1960163A3042274(iLocal_69, 0x2A89B8A7) == 0x00000007 || func_39(iLocal_69, vVar3, 0x00000000) < 0.3f)
				{
					if (!unk_0x7069CC4DE1EA3FAA(iLocal_69, unk_0x16F2683693E537C9(), 15f))
					{
						unk_0xF96A174EE26D7588(iLocal_69, unk_0x16F2683693E537C9(), 0x00000000);
						iLocal_376 = 0x00000000;
					}
					else
					{
						iLocal_376 = 0x00000001;
					}
					if (!unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), iLocal_69, 15f))
					{
						unk_0xF96A174EE26D7588(unk_0x16F2683693E537C9(), iLocal_69, 0x00000000);
						iLocal_377 = 0x00000000;
					}
					else
					{
						iLocal_377 = 0x00000001;
					}
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 0x00000003)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@tricks@");
				if (((iLocal_376 == 0x00000001 || unk_0xD1960163A3042274(iLocal_69, 0xCBCE4595) == 0x00000007) && (iLocal_377 == 0x00000001 || unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0xCBCE4595) == 0x00000007)) && unk_0xB4AE0788C1587752("creatures@rottweiler@tricks@"))
				{
					unk_0xC6EB89C59F2AF6B8(iLocal_69, "creatures@rottweiler@tricks@", "petting_chop", 8f, -8f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "creatures@rottweiler@tricks@", "petting_franklin", 8f, -8f, 0xFFFFFFFF, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					func_122("PLAYFUL");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 0x00000004)
			{
				if (unk_0xD1960163A3042274(iLocal_69, 0x87B9A382) == 0x00000007)
				{
					func_108("CHOP_RETURN1", 0x00000000);
					unk_0x8D17794CE3273D70("creatures@rottweiler@tricks@");
					func_17();
				}
			}
			break;
		
		case 0x0000000C:
			if (iLocal_52 == 0x00000000)
			{
				if (unk_0x16102BEDC7435774(iLocal_69))
				{
					unk_0x0A94A109271BE75A(iLocal_69);
				}
				unk_0x3F423BF5B8125A50("creatures@rottweiler@tricks@");
				if (unk_0xB4AE0788C1587752("creatures@rottweiler@tricks@"))
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					unk_0xDD353D0E9C789D0E(&iLocal_95);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, 0xFFFFFFFF, 0x00001001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_95);
					unk_0x78ADC381772E3D54(iLocal_69, iLocal_95);
					unk_0xF82EA857DA10E0CD(&iLocal_95);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 0x00000001)
			{
				if (!func_16())
				{
					unk_0x3F423BF5B8125A50("creatures@rottweiler@tricks@");
					if (unk_0xB4AE0788C1587752("creatures@rottweiler@tricks@"))
					{
						unk_0xA3BF0AA5A2608191(iLocal_69);
						unk_0xC6EB89C59F2AF6B8(iLocal_69, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						func_108("CHOP_WALK", 0x00000000);
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 0x00000002)
			{
				if (unk_0xD1960163A3042274(iLocal_69, 0x87B9A382) == 0x00000007)
				{
					unk_0x8D17794CE3273D70("creatures@rottweiler@tricks@");
					iLocal_62 = unk_0x1C0640BA9A7327B3();
					func_121(0x00000002, 0x00000001);
				}
			}
			break;
		
		case 0x0000000D:
			if (iLocal_52 == 0x00000000)
			{
				if (unk_0x16102BEDC7435774(iLocal_69))
				{
					unk_0x0A94A109271BE75A(iLocal_69);
				}
				unk_0x3F423BF5B8125A50("creatures@rottweiler@move");
				unk_0x9E5E60D8C63FD9D1();
				if (unk_0xB4AE0788C1587752("creatures@rottweiler@move") && unk_0x25F7A4D42AF2AB93())
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					unk_0xDD353D0E9C789D0E(&iLocal_95);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@move", "dump_enter", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@move", "dump_loop", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@move", "dump_exit", 8f, -8f, 0xFFFFFFFF, 0x00001000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_95);
					unk_0x78ADC381772E3D54(iLocal_69, iLocal_95);
					unk_0xF82EA857DA10E0CD(&iLocal_95);
					func_122("AGITATED");
					iLocal_64 = unk_0x1C0640BA9A7327B3();
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 0x00000001)
			{
				if (func_107())
				{
					if (unk_0x83A8177D302E1A7E(iLocal_77))
					{
						unk_0xF7E25143642732EA(iLocal_77, 0x00000000);
					}
					if (func_118(iLocal_69, 0x00000000))
					{
						func_121(0x00000001, 0x00000001);
					}
					else
					{
						func_121(0x00000002, 0x00000001);
					}
				}
				else if (!unk_0x83A8177D302E1A7E(iLocal_77))
				{
					if (iLocal_64 > 0xFFFFFFFF && (unk_0x1C0640BA9A7327B3() - iLocal_64) > 0x00000FA0)
					{
						iLocal_77 = unk_0xC1879030EB463216("ent_anim_dog_poo", iLocal_69, 0f, -0.15f, -0.2f, 0f, 0f, 0f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() - iLocal_64) > 0x00002710)
				{
					unk_0xF7E25143642732EA(iLocal_77, 0x00000000);
					iLocal_64 = 0xFFFFFFFF;
				}
			}
			break;
		
		case 0x0000000E:
			if (iLocal_52 == 0x00000000)
			{
				unk_0x9E5E60D8C63FD9D1();
				if (unk_0x25F7A4D42AF2AB93())
				{
					if (unk_0x16102BEDC7435774(iLocal_69))
					{
						unk_0x0A94A109271BE75A(iLocal_69);
					}
					func_122("AGITATED");
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 0x00000001)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@move");
				if (!func_113(iLocal_69, 0x2A89B8A7))
				{
					unk_0x96167B03C5A77156(iLocal_69, unk_0x68F4C0EC296D3901(iLocal_349, 0x00000001), 2f, 0x00004E20, 0.25f, 0x00000024, 0x471C4000);
				}
				if (func_39(iLocal_69, unk_0x68F4C0EC296D3901(iLocal_349, 0x00000001), 0x00000001) < 2f)
				{
					if ((!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_5E, 0x0000000A) && !unk_0xFEBC1E4EC9E001F0()) && !unk_0x991B1F0980C62628())
					{
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_5E), 0x0000000A);
						if (bLocal_327 == 0x00000000)
						{
							func_15("CHOP_H_BEHAVE", 0xFFFFFFFF);
						}
						else
						{
							func_15("CHOP_H_BEHAVA", 0xFFFFFFFF);
						}
					}
					unk_0xA3BF0AA5A2608191(iLocal_69);
					if (unk_0xB4AE0788C1587752("creatures@rottweiler@move") && unk_0x9C66D99E63E8E24C(iLocal_69) < 1f)
					{
						vLocal_351 = { unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001) };
						iLocal_350 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000002);
						fLocal_353 = func_14(vLocal_351, unk_0x68F4C0EC296D3901(iLocal_349, 0x00000001));
						if (iLocal_350 == 0x00000000)
						{
							vLocal_352 = { unk_0x8A5E176FF719A014(vLocal_351, fLocal_353, -0.5f, 1f, 0f) };
						}
						else
						{
							vLocal_352 = { unk_0x8A5E176FF719A014(vLocal_351, fLocal_353, 0.5f, 1f, 0f) };
						}
						unk_0xDD353D0E9C789D0E(&iLocal_95);
						unk_0x796BDF31572BB055(0x00000000, vLocal_352, 0x00000000);
						if (iLocal_350 == 0x00000000)
						{
							unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@move", "pee_right_enter", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@move", "pee_right_idle", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@move", "pee_right_exit", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@move", "pee_left_enter", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@move", "pee_left_idle", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@move", "pee_left_exit", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
						unk_0x75ABDC5F81978924(iLocal_95);
						unk_0x78ADC381772E3D54(iLocal_69, iLocal_95);
						unk_0xF82EA857DA10E0CD(&iLocal_95);
						iLocal_64 = unk_0x1C0640BA9A7327B3();
						iLocal_52++;
					}
				}
			}
			else if (iLocal_52 == 0x00000002)
			{
				if (func_107())
				{
					if (unk_0x83A8177D302E1A7E(iLocal_77))
					{
						unk_0xF7E25143642732EA(iLocal_77, 0x00000000);
					}
					func_122("BARK");
					func_121(0x00000002, 0x00000001);
				}
				else if (!unk_0x83A8177D302E1A7E(iLocal_77))
				{
					if (iLocal_64 > 0xFFFFFFFF && (unk_0x1C0640BA9A7327B3() - iLocal_64) > 0x00001B58)
					{
						if (iLocal_350 == 0x00000000)
						{
							iLocal_77 = unk_0xC1879030EB463216("ent_anim_dog_peeing", iLocal_69, 0.1f, -0.32f, -0.04f, 0f, 0f, 30f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
						}
						else
						{
							iLocal_77 = unk_0xC1879030EB463216("ent_anim_dog_peeing", iLocal_69, -0.1f, -0.32f, -0.04f, 0f, 0f, 150f, 0x3F800000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
				}
				else if ((unk_0x1C0640BA9A7327B3() - iLocal_64) > 0x00003E80)
				{
					unk_0xF7E25143642732EA(iLocal_77, 0x00000000);
					iLocal_64 = 0xFFFFFFFF;
				}
			}
			break;
		
		case 0x0000000F:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				func_40(0x00000000);
				iLocal_62 = unk_0x1C0640BA9A7327B3();
				func_121(0x00000002, 0x00000001);
			}
			else
			{
				if (iLocal_52 == 0x00000000)
				{
					func_40(0x00000001);
					if (unk_0x68E45B0EC23881A7(unk_0x16F2683693E537C9(), iLocal_367, 50f, &uLocal_362, &iLocal_361, 0x00000000))
					{
						func_6(0x00000126, 0x00000000, 0x00000000);
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 0x00000001);
						iLocal_365 = 0x00000000;
						iLocal_366 = 0x00000000;
						iLocal_340 = 0x00000000;
						if (unk_0x16102BEDC7435774(iLocal_69))
						{
							unk_0x0A94A109271BE75A(iLocal_69);
						}
						iLocal_368 = unk_0x1C0640BA9A7327B3();
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 0x00000001)
				{
					if (unk_0xC844350D5D58C99A(iLocal_361))
					{
						if (!unk_0x70EED0761B82965E(iLocal_361))
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_368) > 0x000001F4)
							{
								if (func_5())
								{
									unk_0x3F423BF5B8125A50("creatures@rottweiler@move");
									if (unk_0xB4AE0788C1587752("creatures@rottweiler@move"))
									{
										unk_0xDD353D0E9C789D0E(&iLocal_95);
										if (iLocal_367 == joaat("weapon_ball"))
										{
											unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@move", "fetch_pickup", 8f, -8f, 0xFFFFFFFF, 0x0000C000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
										}
										unk_0xE185F110925D87DB(0x00000000, unk_0x16F2683693E537C9(), 0x00004E20, 4f, 3f, 0x40000000, 0x00000000);
										unk_0x75ABDC5F81978924(iLocal_95);
										unk_0x78ADC381772E3D54(iLocal_69, iLocal_95);
										unk_0xF82EA857DA10E0CD(&iLocal_95);
										if (iLocal_367 == joaat("weapon_ball"))
										{
											iLocal_365 = 0x00000001;
										}
										iLocal_52++;
									}
								}
								else if (!func_113(iLocal_69, 0x4924437D))
								{
									unk_0xE185F110925D87DB(iLocal_69, iLocal_361, 0x00007530, 0.5f, 3f, 0x40000000, 0x00000000);
									iLocal_340++;
									iLocal_339 = 0x00000000;
									if (iLocal_340 > 0x00000003)
									{
										unk_0xE185F110925D87DB(iLocal_69, unk_0x16F2683693E537C9(), 0x00004E20, 5f, 3f, 0x40000000, 0x00000000);
										func_40(0x00000001);
										iLocal_52++;
									}
								}
								else
								{
									iVar0 = unk_0xCC2A4E7AEDA758DE(iLocal_69, &uVar2, &uVar1);
									if (iVar0 == 0x00000002)
									{
										fLocal_341 = unk_0xEE9925602B29903C(iLocal_361);
										if (fLocal_341 < 1f)
										{
											iLocal_339++;
										}
									}
									else if (iVar0 == 0x00000003)
									{
										if (iLocal_366 == 0x00000000)
										{
											func_122("BARK");
											if (iLocal_367 == joaat("weapon_ball"))
											{
												func_108("CHOP_FETCH", 0x00000000);
											}
											iLocal_366 = 0x00000001;
										}
									}
									if (iLocal_339 > 0x00000009)
									{
										unk_0xE185F110925D87DB(iLocal_69, unk_0x16F2683693E537C9(), 0x00004E20, 5f, 3f, 0x40000000, 0x00000000);
										func_40(0x00000001);
										iLocal_52++;
									}
								}
							}
						}
						else
						{
							unk_0xE185F110925D87DB(iLocal_69, unk_0x16F2683693E537C9(), 0x00004E20, 5f, 3f, 0x40000000, 0x00000000);
							iLocal_52++;
						}
					}
					else
					{
						unk_0xE185F110925D87DB(iLocal_69, unk_0x16F2683693E537C9(), 0x00004E20, 5f, 3f, 0x40000000, 0x00000000);
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 0x00000002)
				{
					if (iLocal_365 == 0x00000001)
					{
						if ((unk_0xC844350D5D58C99A(iLocal_361) && unk_0xB4ECF989E2C1DAC8(iLocal_69, "creatures@rottweiler@move", "fetch_pickup", 0x00000003)) && unk_0x8CA9406E01C7EE58(iLocal_69, "creatures@rottweiler@move", "fetch_pickup") > 0.25f)
						{
							unk_0x9F528B1B53FBC5D9(iLocal_361, iLocal_69, 0x0000001C, 0.2042f, 0f, -0.0608f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
							unk_0x7352ACF3368DF65F("DisableBarks", 0x00000001);
							iLocal_52++;
						}
					}
					else
					{
						iLocal_52++;
					}
				}
				else if (iLocal_52 == 0x00000003)
				{
					if (func_4(unk_0x16F2683693E537C9(), iLocal_69, 0x00000001) < 5f)
					{
						if (iLocal_367 == joaat("weapon_ball"))
						{
							if (iLocal_365 == 0x00000001)
							{
								unk_0x3F423BF5B8125A50("creatures@rottweiler@move");
								if (unk_0xB4AE0788C1587752("creatures@rottweiler@move"))
								{
									unk_0xDD353D0E9C789D0E(&iLocal_95);
									unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
									unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@move", "fetch_drop", 8f, -8f, 0xFFFFFFFF, 0x00004000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
									unk_0x75ABDC5F81978924(iLocal_95);
									unk_0x78ADC381772E3D54(iLocal_69, iLocal_95);
									unk_0xF82EA857DA10E0CD(&iLocal_95);
									func_108("CHOP_RETURN1", 0x00000000);
									unk_0x7352ACF3368DF65F("DisableBarks", 0x00000000);
									iLocal_52++;
								}
							}
							else
							{
								func_122("BREATH_AGITATED");
								func_108("CHOP_RETURN2", 0x00000000);
								func_121(0x00000002, 0x00000001);
							}
						}
						else
						{
							func_122("BARK_WHINE");
							func_40(0x00000001);
							func_121(0x00000002, 0x00000001);
						}
					}
				}
				else if (iLocal_52 == 0x00000004)
				{
					if (!func_113(iLocal_69, 0x0E763797) && !unk_0xC844350D5D58C99A(iLocal_361))
					{
						if (func_3(0x00000000))
						{
							func_99(0x00000000, 0x00000001, 0x00000000);
						}
						else if (unk_0x6C3F127AAF415E69() == 0x00000004)
						{
							func_99(0x00000000, 0x00000001, 0x00000001);
						}
						else
						{
							func_99(0x00000001, 0x00000001, 0x00000001);
						}
						iLocal_62 = unk_0x1C0640BA9A7327B3();
						func_121(0x00000002, 0x00000001);
					}
					else if (unk_0xC844350D5D58C99A(iLocal_361))
					{
						if (unk_0xD59B17D2DFF98E26(iLocal_361))
						{
							if (unk_0xB4ECF989E2C1DAC8(iLocal_69, "creatures@rottweiler@move", "fetch_drop", 0x00000003) && unk_0x8CA9406E01C7EE58(iLocal_69, "creatures@rottweiler@move", "fetch_drop") > 0.4f)
							{
								unk_0x15AFB6CBDE990FB6(iLocal_361, 0x00000001, 0x00000001);
							}
						}
						else
						{
							if ((func_4(unk_0x16F2683693E537C9(), iLocal_361, 0x00000001) < 1.5f || func_4(unk_0x16F2683693E537C9(), iLocal_361, 0x00000001) > 20f) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
							{
								func_40(0x00000001);
							}
							if (!func_113(iLocal_69, 0x0E763797))
							{
								func_100();
							}
						}
					}
				}
				func_102();
			}
			break;
		
		case 0x00000010:
			if (iLocal_52 == 0x00000000)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@in_vehicle@std_car");
				if (unk_0xB4AE0788C1587752("creatures@rottweiler@in_vehicle@std_car"))
				{
					if (unk_0x16102BEDC7435774(iLocal_69))
					{
						unk_0x0A94A109271BE75A(iLocal_69);
					}
					unk_0x9F528B1B53FBC5D9(iLocal_69, unk_0x0FF5573D0492BF97(unk_0x16F2683693E537C9()), 0x00000000, 0f, 0f, -6.1f, 0f, 0f, 0f, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000002, 0x00000001);
					unk_0xC6EB89C59F2AF6B8(iLocal_69, "creatures@rottweiler@in_vehicle@std_car", "sit", 1000f, -1000f, 0xFFFFFFFF, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					iLocal_52++;
				}
			}
			else if (iLocal_52 == 0x00000001)
			{
				if (!unk_0xD59B17D2DFF98E26(unk_0x16F2683693E537C9()))
				{
					fVar4 = 99999f;
					iVar6 = 0x00000000;
					while (iVar6 < 0x00000004)
					{
						fVar5 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), vLocal_84[iVar6 /*3*/], 0x00000001);
						if (fVar5 < fVar4)
						{
							fVar4 = fVar5;
							iVar7 = iVar6;
						}
						iVar6++;
					}
					if (unk_0xD59B17D2DFF98E26(iLocal_69))
					{
						unk_0x15AFB6CBDE990FB6(iLocal_69, 0x00000001, 0x00000001);
					}
					func_124(iLocal_69, vLocal_84[iVar7 /*3*/], fLocal_85[iVar7], 0x00000000, 0x00000001);
					unk_0xF895E10BF4C72645(iLocal_69, 0x00000000, 0x00000000);
					iLocal_62 = unk_0x1C0640BA9A7327B3();
					func_121(0x00000002, 0x00000001);
				}
			}
			break;
	}
}

int func_3(int iParam0)
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

float func_4(int iParam0, int iParam1, bool bParam2)
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

int func_5()
{
	vector3 vVar0;
	float fVar1;
	
	if (func_4(iLocal_69, iLocal_361, 0x00000001) < (0.5f + 0.25f))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iLocal_361, 0x00000001) };
		if (unk_0xE82754C349C7B581(vVar0.x, vVar0.y, (vVar0.z + 1f), &fVar1, 0x00000000, 0x00000000))
		{
			if (unk_0x755FF954DAE327E1((vVar0.z - fVar1)) < 0.1f)
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_6(int iParam0, int iParam1, int iParam2)
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
		func_12((0x0000037B + iParam0), 0x00000001, 0xFFFFFFFF, 0x00000001);
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
		func_7();
	}
}

void func_7()
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
		func_11(0x0000000D, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_10() == 0x00000002 == 0x00000000 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0x00000000;
				}
				if (!Global_F048)
				{
					func_8();
				}
			}
		}
	}
}

int func_8()
{
	if (func_9(0x00000000))
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

bool func_9(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0x00000000)
	{
		return 0x00000001;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0x00000000);
}

int func_10()
{
	return Global_7830;
}

int func_11(int iParam0, int iParam1)
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

int func_12(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_13();
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

int func_13()
{
	return Global_1407E9;
}

float func_14(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_15(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

bool func_16()
{
	return Global_181EC.f_159 > 0x00000000;
}

void func_17()
{
	iLocal_62 = unk_0x1C0640BA9A7327B3();
	if (iLocal_75 == 0x00000000)
	{
		func_121(0x00000001, 0x00000001);
	}
	else
	{
		func_121(0x00000002, 0x00000001);
	}
}

void func_18()
{
	float fVar0;
	
	if ((unk_0x1C0640BA9A7327B3() - iLocal_56) > iLocal_58)
	{
		fVar0 = func_39(iLocal_69, vLocal_323, 0x00000001);
		if (fVar0 < 10f)
		{
			func_122("BARK_SEQ");
		}
		else
		{
			func_122("BARK");
		}
		iLocal_56 = unk_0x1C0640BA9A7327B3();
		if (fVar0 < 20f)
		{
			iLocal_58 = unk_0x09AC81E49EA267F7(0x00000FA0, 0x00001388);
		}
		else if (fVar0 < 50f)
		{
			iLocal_58 = unk_0x09AC81E49EA267F7(0x00001388, 0x00001770);
		}
		else
		{
			iLocal_58 = unk_0x09AC81E49EA267F7(0x00001F40, 0x00002EE0);
		}
		if (((!unk_0xFEBC1E4EC9E001F0() && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_5E, 0x00000001)) && !func_19()) && !unk_0x991B1F0980C62628())
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_5E), 0x00000001);
			func_15("CHOP_H_HUNT", 0xFFFFFFFF);
		}
	}
}

int func_19()
{
	int iVar0;
	
	if (unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iLocal_69) || (iLocal_51 == 0x0000000A && unk_0x06F8112AA79C53D9(0x00000002, 0x00000019)))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001);
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_20()
{
	if (!func_113(iLocal_69, 0x0E763797))
	{
		unk_0x3F423BF5B8125A50("creatures@rottweiler@indication@");
		if (unk_0xB4AE0788C1587752("creatures@rottweiler@indication@"))
		{
			unk_0xA3BF0AA5A2608191(iLocal_69);
			unk_0xDD353D0E9C789D0E(&iLocal_95);
			unk_0x796BDF31572BB055(0x00000000, vLocal_322, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@indication@", func_21(), 8f, -4f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(iLocal_95);
			unk_0x78ADC381772E3D54(iLocal_69, iLocal_95);
			unk_0xF82EA857DA10E0CD(&iLocal_95);
		}
	}
}

char* func_21()
{
	char* sVar0;
	vector3 vVar1;
	
	if (func_125(iLocal_69))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001) };
		if ((vVar1.z + 1f) < vLocal_322.z)
		{
			sVar0 = "indicate_high";
		}
		else if ((vVar1.z - 1f) > vLocal_322.z)
		{
			sVar0 = "indicate_low";
		}
		else
		{
			sVar0 = "indicate_ahead";
		}
	}
	return sVar0;
}

int func_22()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000))
	{
		if (unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9()) || func_23())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_23()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		iVar0 = unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001));
		if ((((((((((((((((((iVar0 == joaat("caddy") || iVar0 == joaat("caddy2")) || iVar0 == joaat("dune")) || iVar0 == joaat("airtug")) || iVar0 == joaat("blazer")) || iVar0 == joaat("blazer2")) || iVar0 == joaat("bulldozer")) || iVar0 == joaat("cutter")) || iVar0 == joaat("dump")) || iVar0 == joaat("forklift")) || iVar0 == joaat("handler")) || iVar0 == joaat("mower")) || iVar0 == joaat("rhino")) || iVar0 == joaat("tractor")) || iVar0 == joaat("tractor2")) || iVar0 == joaat("tractor3")) || iVar0 == unk_0x12AB0310C2281427("bifta")) || iVar0 == joaat("blazer3")) || iVar0 == joaat("dune2"))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_24()
{
	switch (iLocal_314)
	{
		case 0x00000002:
			if (!func_27(0x00000002))
			{
				func_108("CHOP_RETURN1", 0x00000001);
				return 0x00000000;
			}
			break;
		
		case 0x00000001:
			if (!func_27(0x00000001))
			{
				func_108("CHOP_RETURN1", 0x00000001);
				return 0x00000000;
			}
			break;
		
		case 0x00000000:
			if (!func_27(0x00000000))
			{
				func_108("CHOP_RETURN1", 0x00000001);
				return 0x00000000;
			}
			break;
		
		case 0x00000003:
			if (func_26(iLocal_321))
			{
				func_108("CHOP_RETURN1", 0x00000001);
				return 0x00000000;
			}
			break;
		
		case 0x00000004:
			if (func_25(iLocal_321))
			{
				func_108("CHOP_RETURN1", 0x00000001);
				return 0x00000000;
			}
			break;
	}
	return 0x00000001;
}

bool func_25(int iParam0)
{
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000032)
	{
		return 0x00000000;
	}
	if (iParam0 <= 0x0000001F)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_7D, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_7D.f_1, (iParam0 - 0x00000020));
}

bool func_26(int iParam0)
{
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000032)
	{
		return 0x00000000;
	}
	if (iParam0 <= 0x0000001F)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_7A, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_7A.f_1, (iParam0 - 0x00000020));
}

int func_27(int iParam0)
{
	if (func_31())
	{
		func_30(iParam0, iLocal_321);
	}
	if (func_29())
	{
		if (func_28())
		{
			func_34();
			return 0x00000000;
		}
		func_34();
	}
	return 0x00000001;
}

bool func_28()
{
	return Global_7926;
}

int func_29()
{
	if (Global_7923 == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_30(int iParam0, int iParam1)
{
	if (Global_7923 == 0x00000000)
	{
		Global_7923 = 0x00000001;
		Global_7924 = iParam0;
		Global_7925 = iParam1;
	}
}

int func_31()
{
	if (Global_7923 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_32()
{
	vector3 vVar0;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001) };
	func_33(vVar0);
	func_122("WHINE");
	func_108("CHOP_NONEAR", 0x00000000);
	func_17();
}

void func_33(vector3 vParam0)
{
	if (SYSTEM::VDIST(vParam0, vParam0) > 1f)
	{
	}
}

void func_34()
{
	Global_7923 = 0x00000003;
}

int func_35()
{
	iLocal_321 = 0xFFFFFFFF;
	vLocal_322 = { 0f, 0f, 0f };
	vLocal_323 = { 0f, 0f, 0f };
	func_36(0x00000000);
	if (iLocal_321 == 0xFFFFFFFF)
	{
		func_36(0x00000001);
	}
	if (iLocal_321 > 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_36(int iParam0)
{
	float fVar0;
	int iVar1;
	
	fVar0 = 9999f;
	iVar1 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000005)
	{
		if ((iLocal_317[iVar1] > 0xFFFFFFFF && fLocal_318[iVar1] < fVar0) && func_37(iParam0, iVar1))
		{
			fVar0 = fLocal_318[iVar1];
			iLocal_321 = iLocal_317[iVar1];
			iLocal_314 = iVar1;
			vLocal_322 = { vLocal_319[iVar1 /*3*/] };
			vLocal_323 = { vLocal_320[iVar1 /*3*/] };
		}
		iVar1++;
	}
}

int func_37(int iParam0, int iParam1)
{
	if (iParam0 == 0x00000001)
	{
		return 0x00000001;
	}
	if (iParam1 == 0x00000001 && unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9()) >= 0x000000C8)
	{
		return 0x00000000;
	}
	if (iParam1 == 0x00000000 && unk_0x34460709B9A5160B(unk_0x16F2683693E537C9()) >= 0x00000064)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_38()
{
	if (iLocal_315 == 0x00000005)
	{
		iLocal_315 = 0x00000000;
	}
	switch (iLocal_315)
	{
		case 0x00000000:
			if (iLocal_317[0x00000000] > 0xFFFFFFFF)
			{
				if (func_31())
				{
					func_30(0x00000000, iLocal_317[0x00000000]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_317[0x00000000] = 0xFFFFFFFF;
					}
					func_34();
					iLocal_315 = 0x00000001;
				}
			}
			else
			{
				iLocal_315 = 0x00000001;
			}
			break;
		
		case 0x00000001:
			if (iLocal_317[0x00000001] > 0xFFFFFFFF)
			{
				if (func_31())
				{
					func_30(0x00000001, iLocal_317[0x00000001]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_317[0x00000001] = 0xFFFFFFFF;
					}
					func_34();
					iLocal_315 = 0x00000002;
				}
			}
			else
			{
				iLocal_315 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (iLocal_317[0x00000002] > 0xFFFFFFFF)
			{
				if (func_31())
				{
					func_30(0x00000002, iLocal_317[0x00000002]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_317[0x00000002] = 0xFFFFFFFF;
					}
					func_34();
					iLocal_315 = 0x00000003;
				}
			}
			else
			{
				iLocal_315 = 0x00000003;
			}
			break;
		
		case 0x00000003:
			if (iLocal_317[0x00000003] > 0xFFFFFFFF)
			{
				if (func_26(iLocal_317[0x00000003]))
				{
					iLocal_317[0x00000003] = 0xFFFFFFFF;
				}
			}
			if (iLocal_317[0x00000004] > 0xFFFFFFFF)
			{
				if (func_25(iLocal_317[0x00000004]))
				{
					iLocal_317[0x00000004] = 0xFFFFFFFF;
				}
			}
			iLocal_315 = 0x00000005;
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

float func_39(int iParam0, vector3 vParam1, bool bParam2)
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

void func_40(int iParam0)
{
	vector3 vVar0;
	
	if (unk_0xC844350D5D58C99A(iLocal_361))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iLocal_361, 0x00000001) };
		if (unk_0xBDEB2DEEF1D23A18(iLocal_361))
		{
			unk_0x15AFB6CBDE990FB6(iLocal_361, 0x00000001, 0x00000001);
		}
		unk_0x82692E8F6A0D7A22(&iLocal_361);
		if (iParam0 == 0x00000001 && iLocal_367 == joaat("weapon_ball"))
		{
			unk_0x679C321F8CAA2CFA(vVar0, 0.1f, 0x00000000);
		}
	}
}

void func_41()
{
	vector3 vVar0;
	
	if ((((((func_43() != 0x00000001 && (unk_0x1C0640BA9A7327B3() - iLocal_62) > 0x00002710) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000)) && iLocal_86 == 0x00000000) && iLocal_367 != joaat("weapon_ball")) && unk_0xFCF127F1F950630C(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 100f) == 0x00000000) && unk_0xFCF127F1F950630C(iLocal_69, unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001), 100f) == 0x00000000)
	{
		unk_0x9E5E60D8C63FD9D1();
		if (unk_0x25F7A4D42AF2AB93())
		{
			vVar0 = { unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001) };
			if (unk_0x0EB28750412C3A5A(vVar0, vLocal_76, 0x00000000) < 1f)
			{
				if (unk_0x0EB28750412C3A5A(vVar0, vLocal_355, 0x00000000) > 20f)
				{
					func_42(&iLocal_349, 0x00000000);
					iLocal_349 = unk_0x4B72871A3BE7B474(vVar0, 10f, 0xC09CB0B8, 0x00000001, 0x00000000, 0x00000001);
					if (unk_0xC844350D5D58C99A(iLocal_349))
					{
						vLocal_355 = { unk_0x68F4C0EC296D3901(iLocal_349, 0x00000001) };
						func_121(0x0000000E, 0x00000001);
					}
				}
				else if (unk_0x0EB28750412C3A5A(vVar0, vLocal_354, 0x00000000) > 20f)
				{
					vLocal_354 = { vVar0 };
					func_121(0x0000000D, 0x00000001);
				}
			}
			vLocal_76 = { unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001) };
			iLocal_62 = unk_0x1C0640BA9A7327B3();
		}
	}
}

void func_42(int iParam0, bool bParam1)
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

int func_43()
{
	if (Global_1B416.f_4E91.f_FE.f_5)
	{
		if (Global_1B416.f_4E91.f_FE > 66f)
		{
			return 0x00000001;
		}
		else if (Global_1B416.f_4E91.f_FE > 33f)
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000002;
		}
	}
	return 0x00000002;
}

void func_44()
{
	if (((!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_5E, 0x00000007) && !unk_0xFEBC1E4EC9E001F0()) && !func_19()) && !unk_0x991B1F0980C62628())
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_5E), 0x00000007);
		func_15("CHOP_H_BALL", 0xFFFFFFFF);
	}
	if (((func_125(unk_0x16F2683693E537C9()) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001)) && func_125(iLocal_69)) && !unk_0x405E212DDE472467(iLocal_69, 0x00000001))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iLocal_367, 0x00000001);
		if (((((iLocal_367 == joaat("weapon_ball") || iLocal_367 == joaat("weapon_grenade")) || iLocal_367 == joaat("weapon_smokegrenade")) || iLocal_367 == joaat("weapon_stickybomb")) || iLocal_367 == joaat("weapon_molotov")) || iLocal_367 == joaat("weapon_flare"))
		{
			if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
			{
				func_121(0x0000000F, 0x00000001);
			}
			else if (((unk_0x1C0640BA9A7327B3() - iLocal_63) > 0x00002710 && unk_0x9C66D99E63E8E24C(iLocal_69) < 1f) && func_4(unk_0x16F2683693E537C9(), iLocal_69, 0x00000001) < 5f)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@world_dog_barking@enter");
				unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@world_dog_barking@idle_a");
				unk_0x3F423BF5B8125A50("creatures@rottweiler@amb@world_dog_barking@exit");
				if ((unk_0xB4AE0788C1587752("creatures@rottweiler@amb@world_dog_barking@enter") && unk_0xB4AE0788C1587752("creatures@rottweiler@amb@world_dog_barking@idle_a")) && unk_0xB4AE0788C1587752("creatures@rottweiler@amb@world_dog_barking@exit"))
				{
					unk_0xA3BF0AA5A2608191(iLocal_69);
					unk_0xDD353D0E9C789D0E(&iLocal_95);
					unk_0xF96A174EE26D7588(0x00000000, unk_0x16F2683693E537C9(), 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0xC6EB89C59F2AF6B8(0x00000000, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					unk_0x75ABDC5F81978924(iLocal_95);
					unk_0x78ADC381772E3D54(iLocal_69, iLocal_95);
					unk_0xF82EA857DA10E0CD(&iLocal_95);
					iLocal_63 = unk_0x1C0640BA9A7327B3();
				}
			}
		}
	}
}

void func_45()
{
	if (func_16() && !func_46(0x00000004))
	{
		if ((func_125(iLocal_69) && iLocal_86 == 0x00000000) && unk_0x16102BEDC7435774(iLocal_69))
		{
			unk_0x0A94A109271BE75A(iLocal_69);
		}
		func_121(0x0000000C, 0x00000001);
	}
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (func_16())
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000035)
		{
			if (func_52(iVar0) == iParam0)
			{
				if (func_47(iVar0))
				{
					return 0x00000001;
				}
			}
			iVar0++;
		}
	}
	return 0x00000000;
}

bool func_47(int iParam0)
{
	return func_48(iParam0, 0x00000005, 0x00000001);
}

int func_48(int iParam0, int iParam1, bool bParam2)
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
		if (func_10() == 0x00000000)
		{
			return unk_0xEAE0D21A50E6C7F4(func_49(func_51(iParam0), 0xFFFFFFFF, 0x00000000), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0x00000000;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_50(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_13();
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

int func_51(int iParam0)
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

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0xFFFFFFFF:
			return 0x00000006;
			break;
		
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
		
		case 0x00000005:
			return 0x00000000;
			break;
		
		case 0x00000006:
			return 0x00000000;
			break;
		
		case 0x00000032:
			return 0x00000000;
			break;
		
		case 0x00000007:
			return 0x00000001;
			break;
		
		case 0x00000008:
			return 0x00000001;
			break;
		
		case 0x00000009:
			return 0x00000001;
			break;
		
		case 0x0000000A:
			return 0x00000001;
			break;
		
		case 0x0000000B:
			return 0x00000001;
			break;
		
		case 0x0000000C:
			return 0x00000001;
			break;
		
		case 0x0000000D:
			return 0x00000001;
			break;
		
		case 0x0000000E:
			return 0x00000001;
			break;
		
		case 0x0000000F:
			return 0x00000001;
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
			return 0x00000002;
			break;
		
		case 0x00000017:
			return 0x00000002;
			break;
		
		case 0x00000018:
			return 0x00000002;
			break;
		
		case 0x00000019:
			return 0x00000002;
			break;
		
		case 0x0000001A:
			return 0x00000002;
			break;
		
		case 0x0000001B:
			return 0x00000002;
			break;
		
		case 0x0000001C:
			return 0x00000003;
			break;
		
		case 0x0000001D:
			return 0x00000003;
			break;
		
		case 0x0000001E:
			return 0x00000003;
			break;
		
		case 0x0000001F:
			return 0x00000003;
			break;
		
		case 0x00000020:
			return 0x00000003;
			break;
		
		case 0x00000021:
			return 0x00000003;
			break;
		
		case 0x00000022:
			return 0x00000003;
			break;
		
		case 0x00000023:
			return 0x00000003;
			break;
		
		case 0x00000024:
			return 0x00000003;
			break;
		
		case 0x00000025:
			return 0x00000003;
			break;
		
		case 0x00000026:
			return 0x00000003;
			break;
		
		case 0x00000027:
			return 0x00000004;
			break;
		
		case 0x00000028:
			return 0x00000004;
			break;
		
		case 0x00000029:
			return 0x00000004;
			break;
		
		case 0x0000002A:
			return 0x00000004;
			break;
		
		case 0x0000002B:
			return 0x00000004;
			break;
		
		case 0x0000002C:
			return 0x00000004;
			break;
		
		case 0x0000002D:
			return 0x00000005;
			break;
		
		case 0x0000002E:
			return 0x00000003;
			break;
		
		case 0x0000002F:
			return 0x00000003;
			break;
		
		case 0x00000030:
			return 0x00000003;
			break;
		
		case 0x00000031:
			return 0x00000003;
			break;
		
		case 0x00000034:
			return 0x00000003;
			break;
		
		case 0x00000033:
			return 0x00000001;
			break;
	}
	return 0x00000006;
}

void func_53()
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0x00000000)
	{
		if (iLocal_60 == 0xFFFFFFFF)
		{
			iLocal_60 = unk_0x1C0640BA9A7327B3();
			iLocal_61 = unk_0x09AC81E49EA267F7(0x00000FA0, 0x00001770);
		}
		if ((unk_0x1C0640BA9A7327B3() - iLocal_60) > iLocal_61)
		{
			func_122("SNARL");
			iLocal_60 = 0xFFFFFFFF;
		}
	}
}

void func_54()
{
	if (func_125(unk_0x16F2683693E537C9()))
	{
		if (iLocal_86 > 0x00000001 && iLocal_86 < 0x00000008)
		{
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x00000135, 0x00000001);
		}
		if (iLocal_93 == 0x00000001 && iLocal_86 == 0x00000001)
		{
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x00000139, 0x00000001);
		}
	}
	switch (iLocal_86)
	{
		case 0x00000000:
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				iLocal_372 = unk_0x1C0640BA9A7327B3();
				iLocal_65 = 0xFFFFFFFF;
				iLocal_66 = 0xFFFFFFFF;
				iLocal_57 = unk_0x1C0640BA9A7327B3();
				func_82();
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000000);
				iLocal_385 = 0x00000001;
				iLocal_86 = 0x00000001;
			}
			else
			{
				if (iLocal_369 != 0x00000000)
				{
					iLocal_369 = 0x00000000;
				}
				iLocal_313 = 0x00000000;
				iLocal_59 = 0xFFFFFFFF;
				if (func_81())
				{
					func_121(0x00000003, 0x00000001);
				}
			}
			break;
		
		case 0x00000001:
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				iLocal_86 = 0x0000000F;
			}
			else if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				if (func_80())
				{
					if (unk_0xA30B8362589C124A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0xFFFFFFFF, 0x00000000) != unk_0x16F2683693E537C9())
					{
						func_121(0x00000003, 0x00000001);
					}
					else
					{
						if (!func_125(iLocal_78))
						{
							iLocal_78 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
							func_79();
							func_78();
						}
						unk_0x3F423BF5B8125A50(sLocal_371);
						if (unk_0xB4AE0788C1587752(sLocal_371) && func_125(iLocal_78))
						{
							if (unk_0x16102BEDC7435774(iLocal_69))
							{
								unk_0x0A94A109271BE75A(iLocal_69);
							}
							if (func_77())
							{
								if (iLocal_65 == 0xFFFFFFFF)
								{
									iLocal_65 = unk_0x1C0640BA9A7327B3();
								}
								if (func_76())
								{
									func_75(0x00000001);
									iLocal_86 = 0x00000006;
								}
								else
								{
									func_74();
								}
							}
							else if (unk_0x3CAA763EEC01ADF7(unk_0x16F2683693E537C9(), iLocal_78, 0x00000000, 0x00000000, 0x00000000))
							{
								if (unk_0x1150BCE24B1630AC(iLocal_78, iLocal_94) || unk_0xF409BCB95E61D4DB(iLocal_78, 0x00000001) > 0.9f)
								{
									iLocal_86 = 0x00000004;
								}
								else
								{
									iLocal_86 = 0x00000002;
								}
							}
							else
							{
								func_75(0x00000001);
								iLocal_86 = 0x00000006;
							}
						}
					}
				}
				else if (func_22())
				{
					iLocal_86 = 0x0000000E;
				}
				else
				{
					if (((!unk_0xFEBC1E4EC9E001F0() && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_5E, 0x00000003)) && !func_19()) && !unk_0x991B1F0980C62628())
					{
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_5E), 0x00000003);
						func_15("CHOP_H_NOVEH", 0xFFFFFFFF);
					}
					func_121(0x00000003, 0x00000001);
				}
			}
			else
			{
				if (func_80())
				{
					unk_0x3F423BF5B8125A50("misschop_vehicleenter_exit");
					func_74();
				}
				if (iLocal_313 == 0x00000000 && unk_0xDF1306B443CD3D15(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()), 0x00000000))
				{
					unk_0x4E885A246A9D983A(iLocal_69, 0x000000B9, 0x00000000);
					if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()))) && !func_23())
					{
						if (unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())) == joaat("taxi"))
						{
						}
						else if (unk_0xD6DF381716822EFE(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9())) >= 0x00000001 && unk_0xBBA8A868118C90ED(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()), 0x00000000, 0x00000000))
						{
							if (!func_73())
							{
								func_108("CHOP_RIDE", 0x00000000);
							}
						}
					}
					else if (unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(unk_0x8B157DA177FBCF50(unk_0x16F2683693E537C9()))) || func_23())
					{
						func_108("CHOP_FOLLOW", 0x00000000);
					}
					iLocal_313 = 0x00000001;
				}
			}
			break;
		
		case 0x00000002:
			func_72();
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				iLocal_86 = 0x0000000F;
			}
			else
			{
				unk_0x3F423BF5B8125A50("misschop_vehicleenter_exit");
				if (unk_0xB4AE0788C1587752("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_86 = 0x00000003;
				}
			}
			break;
		
		case 0x00000003:
			func_72();
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				iLocal_86 = 0x0000000F;
			}
			else if (func_125(iLocal_78) && func_70())
			{
				if (!unk_0x1150BCE24B1630AC(iLocal_78, iLocal_94))
				{
					unk_0x611DFA9294B339CA(iLocal_78, iLocal_94, 0x00000000, 0x00000000);
				}
				iLocal_383 = unk_0x1C0640BA9A7327B3();
				iLocal_65 = unk_0x1C0640BA9A7327B3();
				iLocal_86 = 0x00000004;
			}
			break;
		
		case 0x00000004:
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				iLocal_86 = 0x0000000F;
			}
			else
			{
				unk_0x3F423BF5B8125A50(sLocal_371);
				if (func_125(iLocal_78))
				{
					if (!unk_0x1150BCE24B1630AC(iLocal_78, iLocal_94) && unk_0xF409BCB95E61D4DB(iLocal_78, iLocal_94) < 0.95f)
					{
						unk_0x611DFA9294B339CA(iLocal_78, iLocal_94, 0x00000000, 0x00000000);
						iLocal_383 = unk_0x1C0640BA9A7327B3();
					}
					if (func_76() && unk_0x1C0640BA9A7327B3() >= iLocal_383 + 300)
					{
						if (!func_113(unk_0x16F2683693E537C9(), 0x87B9A382) && unk_0xB4AE0788C1587752(sLocal_371))
						{
							func_72();
							func_69(0x00000001, 0x00000001);
							unk_0x327AAEE25F323797(iLocal_69);
							iLocal_87 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
							unk_0x6BE2EAE992FD7C26(iLocal_87, iLocal_78, unk_0xF653B9B22DA806A9(iLocal_78, "seat_pside_f"));
							unk_0x915804B434753CBD(iLocal_69, iLocal_87, sLocal_371, "get_in", 1000f, -8f, 0x00000004, 0x00000000, 0x447A0000, 0x00000000);
							unk_0xF895E10BF4C72645(iLocal_69, 0x00000000, 0x00000000);
							iLocal_86 = 0x00000005;
						}
					}
					else
					{
						func_74();
					}
				}
			}
			break;
		
		case 0x00000005:
			func_72();
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				func_68(2f, 0f, 0f, 0x00000001);
			}
			else
			{
				if (unk_0x9F4FE516EAACCFC5(iLocal_380))
				{
					unk_0xB44EF5F9FEAB831B();
				}
				unk_0x3F423BF5B8125A50(sLocal_371);
				if (((unk_0xB4AE0788C1587752(sLocal_371) && unk_0x69DF961355195C3C(iLocal_87)) && unk_0xA45992A6CE82FB43(iLocal_87) > 0.99f) && func_125(iLocal_78))
				{
					func_69(0x00000000, 0x00000001);
					func_75(0x00000000);
					iLocal_86 = 0x00000006;
				}
			}
			break;
		
		case 0x00000006:
			func_72();
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				func_68(2f, 0f, 0f, 0x00000001);
			}
			else
			{
				unk_0x3F423BF5B8125A50("misschop_vehicleenter_exit");
				if (unk_0xB4AE0788C1587752("misschop_vehicleenter_exit") && func_125(iLocal_78))
				{
					if ((!unk_0x1150BCE24B1630AC(iLocal_78, iLocal_94) && unk_0xF409BCB95E61D4DB(iLocal_78, 0x00000001) > 0.1f) && !func_77())
					{
						func_71();
					}
					iLocal_86 = 0x00000007;
				}
			}
			break;
		
		case 0x00000007:
			func_72();
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				func_68(2f, 0f, 0f, 0x00000001);
			}
			else if (func_125(iLocal_78) && func_70())
			{
				if (!unk_0x1150BCE24B1630AC(iLocal_78, iLocal_94))
				{
					unk_0x152BCACCF710B36E(iLocal_78, iLocal_94, 0x00000000);
				}
				iLocal_86 = 0x00000008;
			}
			break;
		
		case 0x00000008:
			func_72();
			func_67(&iLocal_70);
			func_40(0x00000001);
			if (iLocal_54 == 0xFFFFFFFF)
			{
				iLocal_54 = unk_0x1C0640BA9A7327B3();
				iLocal_55 = 0x00001B58;
			}
			if (func_125(iLocal_78))
			{
				if (func_66())
				{
					func_68(2f, 0f, 0f, 0x00000001);
				}
				else if (unk_0x4E861BC5B1EDA7BD(iLocal_78))
				{
					func_68(2f, 0f, 0f, 0x00000001);
				}
				else if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
				{
					if (unk_0x9C66D99E63E8E24C(iLocal_78) < 5f)
					{
						if (!unk_0x1150BCE24B1630AC(iLocal_78, iLocal_94))
						{
							unk_0x611DFA9294B339CA(iLocal_78, iLocal_94, 0x00000000, 0x00000000);
						}
						iLocal_86 = 0x0000000C;
					}
				}
				else if (unk_0xD245978525608929(0x00000002, 0x0000004B))
				{
					if (unk_0x377BE9A1BF38C7CE(iLocal_78))
					{
						func_68(2f, 0f, 0f, 0x00000001);
					}
					else if (func_77())
					{
						iLocal_86 = 0x00000009;
					}
					else if (unk_0x3CAA763EEC01ADF7(unk_0x16F2683693E537C9(), iLocal_78, 0x00000000, 0x00000000, 0x00000000))
					{
						unk_0xE0C0351D5B931E37(iLocal_78, 10f, 0x00000001, 0x00000000);
						if (unk_0x1150BCE24B1630AC(iLocal_78, iLocal_94))
						{
							iLocal_86 = 0x0000000C;
						}
						else
						{
							iLocal_86 = 0x0000000A;
						}
					}
					else if (unk_0x3CAA763EEC01ADF7(unk_0x16F2683693E537C9(), iLocal_78, 0xFFFFFFFF, 0x00000000, 0x00000000))
					{
						unk_0xE0C0351D5B931E37(iLocal_78, 10f, 0x00000001, 0x00000000);
						func_68(-2f, 0f, 0f, 0x00000000);
					}
					else
					{
						unk_0xE0C0351D5B931E37(iLocal_78, 10f, 0x00000001, 0x00000000);
						func_68(0f, -4f, 0f, 0x00000000);
					}
				}
				else
				{
					func_65();
					func_63();
					func_62();
					if (((!unk_0xFEBC1E4EC9E001F0() && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_5E, 0x00000002)) && !func_19()) && !unk_0x991B1F0980C62628())
					{
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_5E), 0x00000002);
						func_15("CHOP_H_CAR", 0xFFFFFFFF);
					}
				}
			}
			else
			{
				func_68(2f, 0f, 0f, 0x00000001);
			}
			break;
		
		case 0x00000009:
			func_72();
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !func_113(unk_0x16F2683693E537C9(), 0xCE98FBB3))
			{
				unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
			}
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
			{
				func_68(2f, 0f, 0f, 0x00000001);
			}
			break;
		
		case 0x0000000A:
			func_72();
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				func_68(2f, 0f, 0f, 0x00000001);
			}
			else
			{
				unk_0x3F423BF5B8125A50("misschop_vehicleenter_exit");
				if (unk_0xB4AE0788C1587752("misschop_vehicleenter_exit"))
				{
					func_71();
					iLocal_86 = 0x0000000B;
				}
			}
			break;
		
		case 0x0000000B:
			func_72();
			if (!unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				func_68(2f, 0f, 0f, 0x00000001);
			}
			else if (func_125(iLocal_78) && func_70())
			{
				if (!unk_0x1150BCE24B1630AC(iLocal_78, iLocal_94))
				{
					unk_0x611DFA9294B339CA(iLocal_78, iLocal_94, 0x00000000, 0x00000000);
				}
				iLocal_86 = 0x0000000C;
			}
			break;
		
		case 0x0000000C:
			func_72();
			unk_0x3F423BF5B8125A50(sLocal_371);
			if ((!func_113(unk_0x16F2683693E537C9(), 0x87B9A382) && unk_0xB4AE0788C1587752(sLocal_371)) && func_125(iLocal_78))
			{
				unk_0x327AAEE25F323797(iLocal_69);
				iLocal_87 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
				unk_0x6BE2EAE992FD7C26(iLocal_87, iLocal_78, unk_0xF653B9B22DA806A9(iLocal_78, "seat_pside_f"));
				unk_0x915804B434753CBD(iLocal_69, iLocal_87, sLocal_371, "get_out", 1000f, -8f, 0x0000000A, 0x00000000, 0x447A0000, 0x00000000);
				unk_0xF895E10BF4C72645(iLocal_69, 0x00000000, 0x00000000);
				iLocal_86 = 0x0000000D;
			}
			break;
		
		case 0x0000000D:
			func_72();
			if ((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && (unk_0x1C0640BA9A7327B3() - iLocal_373) > 0x000005DC) && !func_113(unk_0x16F2683693E537C9(), 0xCE98FBB3))
			{
				unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
			}
			if (!unk_0x69DF961355195C3C(iLocal_87) || (unk_0x69DF961355195C3C(iLocal_87) && unk_0xA45992A6CE82FB43(iLocal_87) > 0.99f))
			{
				unk_0x585D22FE28143EAA(iLocal_69, iLocal_69, 0f, 5f, 0f, 1f, 0x00004E20);
				iLocal_86 = 0x0000000F;
			}
			break;
		
		case 0x0000000E:
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iLocal_86 = 0x0000000F;
			}
			else
			{
				func_65();
				if (((!unk_0xFEBC1E4EC9E001F0() && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_5E, 0x00000005)) && !func_19()) && !unk_0x991B1F0980C62628())
				{
					unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_5E), 0x00000005);
					func_15("CHOP_H_BIKE", 0xFFFFFFFF);
				}
			}
			break;
		
		case 0x0000000F:
			func_72();
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				func_57();
				func_99(0x00000000, 0x00000000, 0x00000000);
				unk_0x8D17794CE3273D70("misschop_vehicleenter_exit");
				unk_0x8D17794CE3273D70(sLocal_371);
				iLocal_62 = unk_0x1C0640BA9A7327B3();
				func_56();
				func_55(&iLocal_78);
				iLocal_78 = 0x00000000;
				iLocal_54 = 0xFFFFFFFF;
				unk_0xA3BF0AA5A2608191(iLocal_69);
				unk_0xE121AE1BBF90E186(iLocal_69, 0x00000000);
				unk_0x4E885A246A9D983A(iLocal_69, 0x000000B9, 0x00000001);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000001);
				func_121(0x00000002, 0x00000001);
			}
			else if (!func_113(unk_0x16F2683693E537C9(), 0xCE98FBB3))
			{
				unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
			}
			break;
	}
}

void func_55(int iParam0)
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

void func_56()
{
	if (((iLocal_385 == 0x00000001 && func_125(unk_0x4EF27AB24893425F())) && unk_0xD6DF381716822EFE(unk_0x4EF27AB24893425F()) > 0x00000001) && !unk_0x1150BCE24B1630AC(unk_0x4EF27AB24893425F(), iLocal_94))
	{
		unk_0x2EA10555AEBEA739(unk_0x4EF27AB24893425F(), iLocal_94, 0x00000000, 0x00000001, 0x00000000);
	}
}

void func_57()
{
	if ((!unk_0xE4EDC4B0E92C078B(iLocal_70) && func_125(iLocal_69)) && !unk_0x405E212DDE472467(iLocal_69, 0x00000001))
	{
		if (func_179(0x0000007E))
		{
			func_61(0x0000008B, 0x00000000, 0x00000000);
		}
		else
		{
			func_61(0x0000008A, 0x00000000, 0x00000000);
		}
		iLocal_70 = func_58(iLocal_69, 0x00000000, 0x00000091);
		unk_0xBC8E0A7390523199(iLocal_70, 0x00000111);
	}
}

int func_58(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_59(iParam0, !bParam1, 0x00000000);
	if ((iParam2 != 0x00000091 && unk_0xE4EDC4B0E92C078B(iVar0)) && unk_0xEF07223F00EBE9C9(&(Global_706[iParam2 /*29*/].f_3)))
	{
		unk_0xDC5B2F9D0CCE3A10(iVar0, &(Global_706[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_59(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_60(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_60(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_60(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_60(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_61(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0x00000000 || iVar0 >= 0x00000107) || iParam0 == 0x00000107)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x0000000F);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000000))
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000012);
		if (Global_79A7 == 0x00000001)
		{
			Global_79A8 = 0x00000001;
		}
		Global_79A7 = 0x00000001;
	}
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000000);
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000F);
		unk_0x5D96D8530B3D0904(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000003);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x00000000);
		unk_0x0674E58A79778E99(&(Global_79AA[iVar0 /*23*/].f_B), 0x0000000F);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_79AA[iVar0 /*23*/].f_B, 0x00000000))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_79AA[iVar0 /*23*/].f_13))
		{
			unk_0xCD816869CA451988(0x00000001);
			unk_0x142CC44DB769B57E(&(Global_79AA[iVar0 /*23*/].f_13));
			unk_0xCD816869CA451988(0x00000000);
		}
	}
}

void func_62()
{
	if (func_125(iLocal_69) && func_125(iLocal_78))
	{
		if (iLocal_372 > 0xFFFFFFFF)
		{
			if (((unk_0x1C0640BA9A7327B3() - iLocal_372) > 0x000001F4 && unk_0x9C66D99E63E8E24C(iLocal_78) > 5f) && unk_0xE608C809F9416F00(iLocal_78))
			{
				unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_371, "shunt_from_back", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
				unk_0xF895E10BF4C72645(iLocal_69, 0x00000000, 0x00000000);
				func_122("GROWL");
				iLocal_372 = 0xFFFFFFFF;
				iLocal_57 = unk_0x1C0640BA9A7327B3();
			}
		}
		else if (!unk_0xB4ECF989E2C1DAC8(iLocal_69, sLocal_371, "shunt_from_back", 0x00000003) || (unk_0xB4ECF989E2C1DAC8(iLocal_69, sLocal_371, "shunt_from_back", 0x00000003) && unk_0x8CA9406E01C7EE58(iLocal_69, sLocal_371, "shunt_from_back") > 0.98f))
		{
			unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_371, "sit", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xF895E10BF4C72645(iLocal_69, 0x00000000, 0x00000000);
			iLocal_372 = unk_0x1C0640BA9A7327B3();
			iLocal_57 = unk_0x1C0640BA9A7327B3();
		}
	}
}

void func_63()
{
	if (iLocal_372 > 0xFFFFFFFF && (unk_0x1C0640BA9A7327B3() - iLocal_54) > iLocal_55)
	{
		if (((unk_0x0931E02856C8B6A4() == 0x00000007 || unk_0x0931E02856C8B6A4() == 0x00000008) || unk_0x0931E02856C8B6A4() == 0x00000009) || unk_0x0931E02856C8B6A4() == 0x0000000D)
		{
			func_64();
			iLocal_54 = unk_0x1C0640BA9A7327B3();
			iLocal_55 = unk_0x09AC81E49EA267F7(0x00001770, 0x00001F40);
		}
	}
}

void func_64()
{
	if ((unk_0x1C0640BA9A7327B3() - iLocal_57) > 0x000001F4)
	{
		iLocal_57 = unk_0x1C0640BA9A7327B3();
		if (func_125(iLocal_69) && unk_0x405E212DDE472467(iLocal_69, 0x00000000))
		{
			unk_0xDD353D0E9C789D0E(&iLocal_95);
			unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_371, "bark", 4f, -4f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0xC6EB89C59F2AF6B8(0x00000000, sLocal_371, "sit", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			unk_0x75ABDC5F81978924(iLocal_95);
			unk_0x78ADC381772E3D54(iLocal_69, iLocal_95);
			unk_0xF82EA857DA10E0CD(&iLocal_95);
			unk_0xF895E10BF4C72645(iLocal_69, 0x00000000, 0x00000000);
		}
	}
}

void func_65()
{
	if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0x00000000 && bLocal_327 == 0x00000001)
	{
		if (iLocal_59 == 0xFFFFFFFF)
		{
			iLocal_59 = unk_0x1C0640BA9A7327B3();
		}
		if (((unk_0x1C0640BA9A7327B3() - iLocal_59) > 0x00002710 && iLocal_372 > 0xFFFFFFFF) && func_38())
		{
			if (func_35())
			{
				if (func_125(iLocal_69))
				{
					if (unk_0x405E212DDE472467(iLocal_69, 0x00000000))
					{
						func_64();
					}
					else
					{
						func_122("BARK");
					}
				}
			}
			iLocal_59 = unk_0x1C0640BA9A7327B3();
		}
	}
}

int func_66()
{
	float fVar0;
	vector3 vVar1;
	
	if (func_125(iLocal_78))
	{
		if (unk_0x70EED0761B82965E(iLocal_78))
		{
			vVar1 = { unk_0x68F4C0EC296D3901(iLocal_78, 0x00000001) };
			if (iLocal_68 == 0xFFFFFFFF)
			{
				iLocal_68 = unk_0x1C0640BA9A7327B3();
			}
			if (unk_0x0A829A23AC042EDE(vVar1, &fVar0))
			{
				if ((fVar0 - vVar1.z) > 1f)
				{
					return 0x00000001;
				}
				else if ((unk_0x1C0640BA9A7327B3() - iLocal_68) > 0x00000BB8)
				{
					func_122("AGITATED");
					iLocal_68 = unk_0x1C0640BA9A7327B3();
				}
			}
		}
		else
		{
			iLocal_68 = 0xFFFFFFFF;
		}
	}
	return 0x00000000;
}

void func_67(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, 0x00000000);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

void func_68(vector3 vParam0, int iParam1)
{
	if (func_125(unk_0x16F2683693E537C9()) && func_125(iLocal_69))
	{
		if (func_125(iLocal_78))
		{
			if ((iParam1 == 0x00000001 && !unk_0x1150BCE24B1630AC(iLocal_78, iLocal_94)) && unk_0xF409BCB95E61D4DB(iLocal_78, 0x00000001) < 0.9f)
			{
				unk_0x611DFA9294B339CA(iLocal_78, iLocal_94, 0x00000000, 0x00000000);
			}
			if (unk_0x69DF961355195C3C(iLocal_87))
			{
				unk_0xB46854F2D1C7DFA9(iLocal_87);
			}
			unk_0x327AAEE25F323797(iLocal_69);
			func_124(iLocal_69, unk_0x68E4ADDDDCD7BDDE(iLocal_78, vParam0), unk_0xD9522BA9E27E1349(iLocal_69), 0x00000001, 0x00000000);
			unk_0xF895E10BF4C72645(iLocal_69, 0x00000000, 0x00000000);
			func_69(0x00000000, 0x00000000);
			iLocal_86 = 0x0000000F;
		}
		else
		{
			if (unk_0x69DF961355195C3C(iLocal_87))
			{
				unk_0xB46854F2D1C7DFA9(iLocal_87);
			}
			unk_0x327AAEE25F323797(iLocal_69);
			func_124(iLocal_69, unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), (vParam0.x + 1f), vParam0.y, vParam0.z), unk_0xD9522BA9E27E1349(iLocal_69), 0x00000001, 0x00000000);
			unk_0xF895E10BF4C72645(iLocal_69, 0x00000000, 0x00000000);
			func_69(0x00000000, 0x00000000);
			iLocal_86 = 0x0000000F;
		}
	}
}

void func_69(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (iParam0 == 0x00000001)
	{
		if (!unk_0x9F4FE516EAACCFC5(iLocal_380) && func_125(iLocal_78))
		{
			iVar2 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000004);
			if (iVar2 == 0x00000000)
			{
				vVar0 = { 1.11573f, -1.40338f, 0.555789f };
				vVar1 = { 0.5f, 0f, 0.3f };
			}
			else if (iVar2 == 0x00000001)
			{
				vVar0 = { -1.15872f, 1.75252f, 0.761228f };
				vVar1 = { 0f, 0f, 0.3f };
			}
			else if (iVar2 == 0x00000002)
			{
				vVar0 = { -1.89975f, 0.339287f, 0.661881f };
				vVar1 = { 0f, 0f, 0.3f };
			}
			else
			{
				vVar0 = { 1.38134f, -0.1248f, 0.580783f };
				vVar1 = { 0f, 0f, 0.3f };
			}
			iLocal_380 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", 0x00000001);
			vVar3 = { unk_0xBF584557291FDD31(iLocal_78, unk_0xF653B9B22DA806A9(iLocal_78, "seat_pside_f")) };
			vVar4 = { unk_0x5293C88BD2F4DE13(iLocal_78, vVar3) };
			vVar5 = { vVar0 + vVar4 };
			unk_0xC5940439E4EB9A33(iLocal_380, iLocal_78, vVar5, 0x00000001);
			unk_0x1305278186D1C53E(iLocal_380, iLocal_78, vVar4 + vVar1, 0x00000001);
			unk_0x5818C8D5303DCCF8(iLocal_380, 50f);
			unk_0x91F5B0244AAE6222(iLocal_380, "HAND_SHAKE", 0.3f);
			unk_0xCDF7F7CB6C57CEDE(iLocal_380, 0f, 0f, 100000f, 100000f);
			unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		}
	}
	else if (unk_0x9F4FE516EAACCFC5(iLocal_380))
	{
		if (iParam1 == 0x00000001)
		{
			unk_0xEF6276132B396452(0f, 0x3F800000);
			unk_0x2FB9A57162E54BAB(0f);
		}
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0x5CAFA5DD13658DFE(0x00000000);
	}
}

int func_70()
{
	if (func_125(iLocal_78))
	{
		if (((unk_0x1C0640BA9A7327B3() - iLocal_373) > 0x000001F4 || unk_0x1150BCE24B1630AC(iLocal_78, iLocal_94)) || func_77())
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_71()
{
	unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "misschop_vehicleenter_exit", sLocal_370, 8f, -8f, 0xFFFFFFFF, 0x00000028, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	iLocal_373 = unk_0x1C0640BA9A7327B3();
}

void func_72()
{
	unk_0x38C3A68D7861DCFD(0x00000000, 0x0000004B, 0x00000001);
	unk_0x38C3A68D7861DCFD(0x00000000, 0x00000017, 0x00000001);
}

int func_73()
{
	if (Global_5145 != 0x00000000 || unk_0x25037C66EB32B076())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_74()
{
	if (!func_113(iLocal_69, 0x2A89B8A7) && func_4(unk_0x16F2683693E537C9(), iLocal_69, 0x00000001) > 1f)
	{
		unk_0x96167B03C5A77156(iLocal_69, unk_0x68E4ADDDDCD7BDDE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001), 2f, 0f, 0f), 2f, 0x00004E20, 0.25f, 0x00000000, 0x471C4000);
	}
}

void func_75(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		unk_0xEF6276132B396452(0f, 0x3F800000);
		unk_0x2FB9A57162E54BAB(0f);
	}
	func_67(&iLocal_70);
	unk_0xE121AE1BBF90E186(iLocal_69, 0x00000001);
	unk_0xF821F915BC24D246(iLocal_69, iLocal_78, 0x00000000);
	unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_371, "sit", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xF895E10BF4C72645(iLocal_69, 0x00000000, 0x00000000);
}

int func_76()
{
	float fVar0;
	
	if (func_125(iLocal_78) && func_125(iLocal_69))
	{
		if (iLocal_66 == 0xFFFFFFFF)
		{
			fVar0 = func_4(iLocal_78, iLocal_69, 0x00000001);
			iLocal_66 = SYSTEM::FLOOR((fVar0 * 1000f));
			if (iLocal_66 < 0x00001388)
			{
				iLocal_66 = 0x00001388;
			}
		}
		if (((func_39(iLocal_69, unk_0x68E4ADDDDCD7BDDE(iLocal_78, 2f, 0f, 0f), 0x00000000) < 1f || unk_0x06F8112AA79C53D9(0x00000000, 0x00000047)) || unk_0x06F8112AA79C53D9(0x00000000, 0x00000048)) || (iLocal_65 > 0xFFFFFFFF && (unk_0x1C0640BA9A7327B3() - iLocal_65) > iLocal_66))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_77()
{
	int iVar0;
	
	if (func_125(iLocal_78))
	{
		iVar0 = unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001));
		if (((((((((((((((((((((((iVar0 == joaat("airbus") || iVar0 == joaat("barracks")) || iVar0 == joaat("barracks2")) || iVar0 == joaat("biff")) || iVar0 == joaat("bus")) || iVar0 == joaat("coach")) || iVar0 == joaat("hauler")) || iVar0 == joaat("mixer")) || iVar0 == joaat("mixer2")) || iVar0 == joaat("packer")) || iVar0 == joaat("pbus")) || iVar0 == joaat("phantom")) || iVar0 == joaat("pounder")) || iVar0 == joaat("riot")) || iVar0 == joaat("rubble")) || iVar0 == joaat("scrap")) || iVar0 == joaat("stockade")) || iVar0 == joaat("stockade3")) || iVar0 == joaat("tiptruck")) || iVar0 == joaat("tiptruck2")) || iVar0 == joaat("towtruck")) || iVar0 == joaat("towtruck2")) || iVar0 == unk_0x12AB0310C2281427("monster")) || iVar0 == unk_0x12AB0310C2281427("marshall"))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_78()
{
	int iVar0;
	
	if (func_125(iLocal_78))
	{
		iVar0 = unk_0x134B62B726CEC8E6(iLocal_78);
		if (iVar0 == joaat("coach"))
		{
			iLocal_94 = 0x00000000;
		}
		else
		{
			iLocal_94 = 0x00000001;
		}
	}
}

void func_79()
{
	if (func_125(iLocal_78))
	{
		iLocal_369 = unk_0x1F099C9E2AE4874D(iLocal_78);
		switch (iLocal_369)
		{
			case 0x8ADF98D5:
			case 0x36CE3DC4:
			case 0x9269BEA0:
			case 0x6967F0BC:
			case 0x5DF7414D:
			case 0x375F8F8C:
			case 0xE25535CF:
			case 0x9D0E8E8E:
			case 0xD88A3F4B:
			case 0x73950148:
				sLocal_371 = "creatures@rottweiler@in_vehicle@van";
				sLocal_370 = "van_ds_open_door_for_chop";
				break;
			
			case 0x84D77E93:
			case 0x41E72EC9:
			case 0x205A6F50:
			case 0x04163EC9:
			case 0x8F7B4F4E:
			case 0xD158A20D:
			case 0xBB736A9B:
			case 0x613655C1:
			case 0xE461FA3B:
			case 0x793A200A:
				sLocal_371 = "creatures@rottweiler@in_vehicle@low_car";
				sLocal_370 = "low_ds_open_door_for_chop";
				break;
			
			case 0x19E59D55:
			case 0x6C40A6DC:
			case 0x65FA4F90:
			case 0x632CFD0D:
				sLocal_371 = "creatures@rottweiler@in_vehicle@4x4";
				sLocal_370 = "std_ds_open_door_for_chop";
				break;
			
			default:
				sLocal_371 = "creatures@rottweiler@in_vehicle@std_car";
				sLocal_370 = "std_ds_open_door_for_chop";
				break;
		}
		if (unk_0x134B62B726CEC8E6(iLocal_78) == joaat("brawler"))
		{
			sLocal_371 = "creatures@rottweiler@in_vehicle@4x4";
			sLocal_370 = "std_ds_open_door_for_chop";
		}
	}
}

int func_80()
{
	if ((((((((unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && unk_0xDF1306B443CD3D15(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000)) && !unk_0x7A649D473D0B6339(unk_0x16F2683693E537C9())) && !unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9())) && !unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9())) && !unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9())) && unk_0xD6DF381716822EFE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000)) >= 0x00000001) && unk_0xBBA8A868118C90ED(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000), 0x00000000, 0x00000000)) && !func_23())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_81()
{
	if (unk_0x31609A585163CBAC(unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9())))
	{
		if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(-14.5f, -1437.2f, 31.1f))
		{
			return 0x00000001;
		}
		if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(7.6f, 537.3f, 176f))
		{
			return 0x00000001;
		}
		if (unk_0x4D570FEF9D230CE7(unk_0x16F2683693E537C9()) == unk_0xFBD08BECC9B87937(130.2632f, -1295.035f, 28.2695f))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_82()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
	vVar1 = { unk_0x68E4ADDDDCD7BDDE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001), 2f, 0f, 0f) };
	vVar3 = { vVar1 - vVar0 };
	vVar2 = { unk_0x68E4ADDDDCD7BDDE(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000001), -2f, 0f, 0f) };
	vVar4 = { vVar2 - vVar0 };
	if (SYSTEM::VMAG(vVar3) < SYSTEM::VMAG(vVar4))
	{
		iLocal_93 = 0x00000001;
	}
	else
	{
		iLocal_93 = 0x00000000;
	}
}

void func_83()
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	
	if ((iLocal_315 != 0x00000005 || (unk_0x1C0640BA9A7327B3() - iLocal_316) < 0x000003E8) || bLocal_327 == 0x00000000)
	{
		return;
	}
	func_97();
	iVar2 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000066)
	{
		if (func_96(iVar2))
		{
			vVar0 = { func_95(iVar2, 0x00000001) };
			if (!func_94(vVar0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001), vVar0, 0x00000001);
				if (fVar1 < fLocal_318[0x00000002] && fVar1 < fLocal_324)
				{
					iLocal_317[0x00000002] = iVar2;
					fLocal_318[0x00000002] = fVar1;
					vLocal_319[0x00000002 /*3*/] = { func_95(iVar2, 0x00000000) };
					vLocal_320[0x00000002 /*3*/] = { vVar0 };
				}
			}
		}
		iVar2++;
	}
	iVar2 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x0000004C)
	{
		if (func_93(iVar2))
		{
			vVar0 = { func_92(iVar2, 0x00000001) };
			if (!func_94(vVar0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001), vVar0, 0x00000001);
				if (fVar1 < fLocal_318[0x00000001] && fVar1 < fLocal_324)
				{
					iLocal_317[0x00000001] = iVar2;
					fLocal_318[0x00000001] = fVar1;
					vLocal_319[0x00000001 /*3*/] = { func_92(iVar2, 0x00000000) };
					vLocal_320[0x00000001 /*3*/] = { vVar0 };
				}
			}
		}
		iVar2++;
	}
	iVar2 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x0000002D)
	{
		if (func_91(iVar2))
		{
			vVar0 = { func_90(iVar2, 0x00000001) };
			if (!func_94(vVar0))
			{
				fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001), vVar0, 0x00000001);
				if (fVar1 < fLocal_318[0x00000000] && fVar1 < fLocal_324)
				{
					iLocal_317[0x00000000] = iVar2;
					fLocal_318[0x00000000] = fVar1;
					vLocal_319[0x00000000 /*3*/] = { func_90(iVar2, 0x00000000) };
					vLocal_320[0x00000000 /*3*/] = { vVar0 };
				}
			}
		}
		iVar2++;
	}
	if (func_89())
	{
		iVar2 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000032)
		{
			if (!func_26(iVar2) && func_88(iVar2))
			{
				vVar0 = { func_87(iVar2, 0x00000001) };
				if (!func_94(vVar0))
				{
					fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001), vVar0, 0x00000001);
					if (fVar1 < fLocal_318[0x00000003] && fVar1 < fLocal_324)
					{
						iLocal_317[0x00000003] = iVar2;
						fLocal_318[0x00000003] = fVar1;
						vLocal_319[0x00000003 /*3*/] = { func_87(iVar2, 0x00000000) };
						vLocal_320[0x00000003 /*3*/] = { vVar0 };
					}
				}
			}
			iVar2++;
		}
	}
	if (func_86())
	{
		iVar2 = 0x00000000;
		iVar2 = 0x00000000;
		while (iVar2 < 0x00000032)
		{
			if (!func_25(iVar2) && func_85(iVar2))
			{
				vVar0 = { func_84(iVar2, 0x00000001) };
				if (!func_94(vVar0))
				{
					fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001), vVar0, 0x00000001);
					if (fVar1 < fLocal_318[0x00000004] && fVar1 < fLocal_324)
					{
						iLocal_317[0x00000004] = iVar2;
						fLocal_318[0x00000004] = fVar1;
						vLocal_319[0x00000004 /*3*/] = { func_84(iVar2, 0x00000000) };
						vLocal_320[0x00000004 /*3*/] = { vVar0 };
					}
				}
			}
			iVar2++;
		}
	}
	iLocal_316 = unk_0x1C0640BA9A7327B3();
}

Vector3 func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return -1219f, -3495.9f, 12.9448f;
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000001)
			{
				return 606.8925f, -3250.188f, 5.06951f;
			}
			else
			{
				return 634.5865f, -3232.79f, -16.5774f;
			}
			break;
		
		case 0x00000002:
			return 1590.6f, -2810.174f, 3.4494f;
			break;
		
		case 0x00000003:
			if (iParam1 == 0x00000001)
			{
				return 327.99f, -2757.61f, 4.99f;
			}
			else
			{
				return 338.4039f, -2762.106f, 42.6543f;
			}
			break;
		
		case 0x00000004:
			if (iParam1 == 0x00000001)
			{
				return 1134.422f, -2607.024f, 14.77071f;
			}
			else
			{
				return 1133.688f, -2605.073f, 14.9729f;
			}
			break;
		
		case 0x00000005:
			if (iParam1 == 0x00000001)
			{
				return 368.9316f, -2118.533f, 15.40341f;
			}
			else
			{
				return 369.945f, -2116.756f, 16.1688f;
			}
			break;
		
		case 0x00000006:
			if (iParam1 == 0x00000001)
			{
				return 1741.82f, -1623.85f, 111.41f;
			}
			else
			{
				return 1742.024f, -1618.777f, 111.8313f;
			}
			break;
		
		case 0x00000007:
			return 287.7294f, -1444.4f, 45.5095f;
			break;
		
		case 0x00000008:
			return 17.5926f, -1213.207f, 28.3678f;
			break;
		
		case 0x00000009:
			if (iParam1 == 0x00000001)
			{
				return -910.0172f, -1147.44f, 1.06785f;
			}
			else
			{
				return -900.3597f, -1165.551f, 31.8047f;
			}
			break;
		
		case 0x0000000A:
			if (iParam1 == 0x00000001)
			{
				return 1237.728f, -1099.15f, 37.52579f;
			}
			else
			{
				return 1231.973f, -1102.308f, 34.4289f;
			}
			break;
		
		case 0x0000000B:
			if (iParam1 == 0x00000001)
			{
				return 87.69075f, 810.3736f, 210.1258f;
			}
			else
			{
				return 81.2213f, 814.0283f, 213.2917f;
			}
			break;
		
		case 0x0000000C:
			if (iParam1 == 0x00000001)
			{
				return -1900.951f, 1389.582f, 218.1509f;
			}
			else
			{
				return -1907.515f, 1388.69f, 217.9728f;
			}
			break;
		
		case 0x0000000D:
			if (iParam1 == 0x00000001)
			{
				return 467.369f, -730.7552f, 26.36373f;
			}
			else
			{
				return 469.8529f, -730.8f, 26.3985f;
			}
			break;
		
		case 0x0000000E:
			return 202.1081f, -569.7198f, 128.18f;
			break;
		
		case 0x0000000F:
			if (iParam1 == 0x00000001)
			{
				return 163.0531f, -566.3394f, 21.029f;
			}
			else
			{
				return 159.39f, -563.82f, 21f;
			}
			break;
		
		case 0x00000010:
			if (iParam1 == 0x00000001)
			{
				return -1183.152f, -518.5386f, 38.53018f;
			}
			else
			{
				return -1182.538f, -525.5859f, 39.9114f;
			}
			break;
		
		case 0x00000011:
			return -228.0476f, -236.4184f, 49.1361f;
			break;
		
		case 0x00000012:
			return -407.7026f, -151.7918f, 63.5505f;
			break;
		
		case 0x00000013:
			if (iParam1 == 0x00000001)
			{
				return -1169.397f, -56.76701f, 44.45705f;
			}
			else
			{
				return -1175.488f, -65.4649f, 44.6563f;
			}
			break;
		
		case 0x00000014:
			if (iParam1 == 0x00000001)
			{
				return 1679.056f, 39.44059f, 160.7736f;
			}
			else
			{
				return 1684.664f, 40.7142f, 153.4074f;
			}
			break;
		
		case 0x00000015:
			if (iParam1 == 0x00000001)
			{
				return 1964.25f, 553.68f, 160.72f;
			}
			else
			{
				return 1965.58f, 555.99f, 160.79f;
			}
			break;
		
		case 0x00000016:
			if (iParam1 == 0x00000001)
			{
				return 24.21706f, 637.1212f, 206.3897f;
			}
			else
			{
				return 22.4492f, 638.8155f, 189.6085f;
			}
			break;
		
		case 0x00000017:
			return 2901.204f, 796.1192f, 3.3556f;
			break;
		
		case 0x00000018:
			if (iParam1 == 0x00000001)
			{
				return -1531.895f, 870.3203f, 180.6775f;
			}
			else
			{
				return -1529.722f, 871.4257f, 180.6421f;
			}
			break;
		
		case 0x00000019:
			return -404.3191f, 1100.889f, 331.535f;
			break;
		
		case 0x0000001A:
			return -2809.354f, 1449.643f, 99.928f;
			break;
		
		case 0x0000001B:
			if (iParam1 == 0x00000001)
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			else
			{
				return 3144.045f, 2184.413f, -5.2961f;
			}
			break;
		
		case 0x0000001C:
			return 815.7574f, 1850.879f, 120.1796f;
			break;
		
		case 0x0000001D:
			return -1944.24f, 1941.07f, 162.8f;
			break;
		
		case 0x0000001E:
			if (iParam1 == 0x00000001)
			{
				return -1452.23f, 2127.41f, 42.84f;
			}
			else
			{
				return -1436.87f, 2130.22f, 26.78f;
			}
			break;
		
		case 0x0000001F:
			return 1367.413f, 2180.632f, 96.6914f;
			break;
		
		case 0x00000020:
			if (iParam1 == 0x00000001)
			{
				return 170.1652f, 2217.637f, 89.30811f;
			}
			else
			{
				return 172.1426f, 2220.131f, 89.7842f;
			}
			break;
		
		case 0x00000021:
			return 889.3209f, 2870.052f, 55.2834f;
			break;
		
		case 0x00000022:
			if (iParam1 == 0x00000001)
			{
				return 1980.2f, 2914.79f, 45.48f;
			}
			else
			{
				return 1963.55f, 2922.81f, 57.76f;
			}
			break;
		
		case 0x00000023:
			return -390.384f, 2963.26f, 18.2713f;
			break;
		
		case 0x00000024:
			return 71.6642f, 3279.368f, 30.3918f;
			break;
		
		case 0x00000025:
			return 1924.186f, 3471.256f, 50.3238f;
			break;
		
		case 0x00000026:
			return -583.1569f, 3580.375f, 266.2471f;
			break;
		
		case 0x00000027:
			if (iParam1 == 0x00000001)
			{
				return 2514.302f, 3789.519f, 52.077f;
			}
			else
			{
				return 2516.98f, 3789.35f, 53.79f;
			}
			break;
		
		case 0x00000028:
			if (iParam1 == 0x00000001)
			{
				return 1517.613f, 3803.926f, 30.95605f;
			}
			else
			{
				return 1486.047f, 3857.217f, 22.2905f;
			}
			break;
		
		case 0x00000029:
			if (iParam1 == 0x00000001)
			{
				return -530.2739f, 4474.358f, 59.45993f;
			}
			else
			{
				return -528.8246f, 4440.644f, 31.7384f;
			}
			break;
		
		case 0x0000002A:
			if (iParam1 == 0x00000001)
			{
				return 3815.055f, 4447.343f, 2.06631f;
			}
			else
			{
				return 3820.813f, 4441.683f, 1.8007f;
			}
			break;
		
		case 0x0000002B:
			if (iParam1 == 0x00000001)
			{
				return -1946.95f, 4584.36f, 56.06f;
			}
			else
			{
				return -1943.055f, 4585.194f, 46.6362f;
			}
			break;
		
		case 0x0000002C:
			return 2437.545f, 4779.959f, 33.5101f;
			break;
		
		case 0x0000002D:
			return -1441.495f, 5414.888f, 23.3f;
			break;
		
		case 0x0000002E:
			return 2196.251f, 5599.034f, 52.7129f;
			break;
		
		case 0x0000002F:
			if (iParam1 == 0x00000001)
			{
				return -503.95f, 5673.55f, 51.24f;
			}
			else
			{
				return -503.2193f, 5665.61f, 48.8487f;
			}
			break;
		
		case 0x00000030:
			if (iParam1 == 0x00000001)
			{
				return -378.4192f, 6080.782f, 30.44296f;
			}
			else
			{
				return -381.291f, 6086.949f, 38.6147f;
			}
			break;
		
		case 0x00000031:
			return 440.9546f, 6459.642f, 27.7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x0000000E:
		case 0x00000012:
		case 0x00000019:
			return 0x00000000;
			break;
		
		case 0x00000010:
			if (unk_0xEAE0D21A50E6C7F4(Global_78CE, 0x00000007))
			{
				return 0x00000000;
			}
			break;
	}
	return 0x00000001;
}

bool func_86()
{
	return Global_1B416.f_273C.f_7D.f_2;
}

Vector3 func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (iParam1 == 0x00000001)
			{
				return 1034.274f, -3026.275f, 4.90197f;
			}
			else
			{
				return 1026.705f, -3026.052f, 13.3323f;
			}
			break;
		
		case 0x00000001:
			if (iParam1 == 0x00000001)
			{
				return -1040.979f, -2743.509f, 12.94983f;
			}
			else
			{
				return -1048.604f, -2734.218f, 12.8895f;
			}
			break;
		
		case 0x00000002:
			if (iParam1 == 0x00000001)
			{
				return -93.9012f, -2711.314f, 5.01752f;
			}
			else
			{
				return -81.1199f, -2726.511f, 7.74f;
			}
			break;
		
		case 0x00000003:
			return -917.6909f, -2527.384f, 22.3218f;
			break;
		
		case 0x00000004:
			if (iParam1 == 0x00000001)
			{
				return 746.45f, -2310.32f, 26.03f;
			}
			else
			{
				return 748.922f, -2298.114f, 19.624f;
			}
			break;
		
		case 0x00000005:
			if (iParam1 == 0x00000001)
			{
				return 1509.742f, -2126.038f, 75.21973f;
			}
			else
			{
				return 1509.099f, -2120.551f, 75.61f;
			}
			break;
		
		case 0x00000006:
			return 76.0032f, -1970.475f, 20.1302f;
			break;
		
		case 0x00000007:
			if (iParam1 == 0x00000001)
			{
				return -1.82327f, -1732.614f, 28.29367f;
			}
			else
			{
				return 0.067f, -1734.027f, 30.606f;
			}
			break;
		
		case 0x00000008:
			if (iParam1 == 0x00000001)
			{
				return -1377.766f, -1409.837f, 4.63205f;
			}
			else
			{
				return -1380.491f, -1404.374f, 1.7273f;
			}
			break;
		
		case 0x00000009:
			return 2864.808f, -1372.84f, 1.3151f;
			break;
		
		case 0x0000000A:
			return -1035.812f, -1273.077f, 0.8919f;
			break;
		
		case 0x0000000B:
			return -1821.136f, -1201.36f, 18.1698f;
			break;
		
		case 0x0000000C:
			return 643.0116f, -1035.65f, 35.8891f;
			break;
		
		case 0x0000000D:
			return -119.0616f, -977.2228f, 303.23f;
			break;
		
		case 0x0000000E:
			if (iParam1 == 0x00000001)
			{
				return -1243.104f, -507.8057f, 30.10775f;
			}
			else
			{
				return -1238.766f, -506.7138f, 37.6019f;
			}
			break;
		
		case 0x0000000F:
			if (iParam1 == 0x00000001)
			{
				return 83.79993f, -431.9302f, 36.55315f;
			}
			else
			{
				return 86.4f, -433.9f, 36f;
			}
			break;
		
		case 0x00000010:
			return 1095.953f, -210.4642f, 54.9477f;
			break;
		
		case 0x00000011:
			return -1724.522f, -196f, 57.2387f;
			break;
		
		case 0x00000012:
			return 265.374f, -199.546f, 60.795f;
			break;
		
		case 0x00000013:
			if (iParam1 == 0x00000001)
			{
				return -3020.475f, 36.55431f, 9.11777f;
			}
			else
			{
				return -3021.4f, 38f, 10.2945f;
			}
			break;
		
		case 0x00000014:
			if (iParam1 == 0x00000001)
			{
				return -347.5277f, 53.37161f, 52.97814f;
			}
			else
			{
				return -347.3f, 54.865f, 53.921f;
			}
			break;
		
		case 0x00000015:
			return 1052.248f, 167.611f, 87.7406f;
			break;
		
		case 0x00000016:
			return -2303.798f, 217.4301f, 166.6017f;
			break;
		
		case 0x00000017:
			return -138.9423f, 868.3885f, 231.6956f;
			break;
		
		case 0x00000018:
			if (iParam1 == 0x00000001)
			{
				return 688.1073f, 1204.671f, 323.3438f;
			}
			else
			{
				return 682.4505f, 1204.928f, 344.3322f;
			}
			break;
		
		case 0x00000019:
			return -1548.763f, 1380.173f, 125.3728f;
			break;
		
		case 0x0000001A:
			if (iParam1 == 0x00000001)
			{
				return -432.14f, 1598.46f, 355.73f;
			}
			else
			{
				return -432.0034f, 1597.129f, 356.613f;
			}
			break;
		
		case 0x0000001B:
			return 3081.93f, 1648.29f, 2.42f;
			break;
		
		case 0x0000001C:
			return -594.38f, 2092f, 130.57f;
			break;
		
		case 0x0000001D:
			if (iParam1 == 0x00000001)
			{
				return 3069.213f, 2160.988f, 1.1327f;
			}
			else
			{
				return 3063.583f, 2212.63f, 2.5863f;
			}
			break;
		
		case 0x0000001E:
			return 180.21f, 2263.83f, 91.87f;
			break;
		
		case 0x0000001F:
			if (iParam1 == 0x00000001)
			{
				return 926.96f, 2445.36f, 49.09f;
			}
			else
			{
				return 929.6946f, 2444.115f, 48.43f;
			}
			break;
		
		case 0x00000020:
			if (iParam1 == 0x00000001)
			{
				return -2380.212f, 2655.176f, 0.832f;
			}
			else
			{
				return -2379.948f, 2656.953f, 1.4906f;
			}
			break;
		
		case 0x00000021:
			return -861.38f, 2753.3f, 12.867f;
			break;
		
		case 0x00000022:
			return -289.0195f, 2848.853f, 53.331f;
			break;
		
		case 0x00000023:
			if (iParam1 == 0x00000001)
			{
				return 288.8409f, 2871.912f, 42.6422f;
			}
			else
			{
				return 265.7415f, 2866.416f, 73.19f;
			}
			break;
		
		case 0x00000024:
			if (iParam1 == 0x00000001)
			{
				return 1297.378f, 2988.71f, 40.11787f;
			}
			else
			{
				return 1294.2f, 3001.9f, 57.7f;
			}
			break;
		
		case 0x00000025:
			return 1568.65f, 3572.8f, 32.294f;
			break;
		
		case 0x00000026:
			return -1608.62f, 4274.25f, 102.95f;
			break;
		
		case 0x00000027:
			if (iParam1 == 0x00000001)
			{
				return -3.51812f, 4332.451f, 31.21602f;
			}
			else
			{
				return -1.9585f, 4334.787f, 32.3702f;
			}
			break;
		
		case 0x00000028:
			return 1336.737f, 4307.2f, 37.1325f;
			break;
		
		case 0x00000029:
			if (iParam1 == 0x00000001)
			{
				return -1007.103f, 4836.936f, 268.5488f;
			}
			else
			{
				return -1001.48f, 4851.322f, 273.6112f;
			}
			break;
		
		case 0x0000002A:
			return 1877.09f, 5078.98f, 50.49f;
			break;
		
		case 0x0000002B:
			if (iParam1 == 0x00000001)
			{
				return 3366.099f, 5182.461f, 0.68317f;
			}
			else
			{
				return 3436.453f, 5176.911f, 6.386f;
			}
			break;
		
		case 0x0000002C:
			if (iParam1 == 0x00000001)
			{
				return -576.12f, 5472.24f, 59.28f;
			}
			else
			{
				return -578.8057f, 5470.164f, 59.0295f;
			}
			break;
		
		case 0x0000002D:
			return 444.6518f, 5571.781f, 780.1888f;
			break;
		
		case 0x0000002E:
			return -402.9948f, 6319.279f, 31.2256f;
			break;
		
		case 0x0000002F:
			return 1439.599f, 6335.208f, 22.9485f;
			break;
		
		case 0x00000030:
			if (iParam1 == 0x00000001)
			{
				return 1466.109f, 6552.266f, 12.95773f;
			}
			else
			{
				return 1469.632f, 6552.174f, 13.6854f;
			}
			break;
		
		case 0x00000031:
			if (iParam1 == 0x00000001)
			{
				return 66.19278f, 6668.888f, 30.80633f;
			}
			else
			{
				return 66.7136f, 6663.198f, 30.7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000003:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000D:
		case 0x0000001B:
		case 0x00000026:
			return 0x00000000;
			break;
		
		case 0x0000000E:
			if (unk_0xEAE0D21A50E6C7F4(Global_78CE, 0x00000007))
			{
				return 0x00000000;
			}
			break;
	}
	return 0x00000001;
}

bool func_89()
{
	return Global_1B416.f_273C.f_7A.f_2;
}

Vector3 func_90(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 473.1829f, -2643.184f, 4.7209f;
			break;
		
		case 0x00000001:
			if (bParam1 == 0x00000001)
			{
				return 291.41f, -2090.78f, 16.29f;
			}
			else
			{
				return 289.2062f, -2091.221f, 16.0234f;
			}
			break;
		
		case 0x00000002:
			if (bParam1 == 0x00000001)
			{
				return 1173.839f, -1499.781f, 33.84875f;
			}
			else
			{
				return 1173.566f, -1495.763f, 34.1121f;
			}
			break;
		
		case 0x00000003:
			if (bParam1 == 0x00000001)
			{
				return -461.7139f, -1699.202f, 17.85122f;
			}
			else
			{
				return -462f, -1701f, 18.8f;
			}
			break;
		
		case 0x00000004:
			return -1384.628f, -521.0416f, 30.084f;
			break;
		
		case 0x00000005:
			return -521.5692f, -601.7532f, 29.4482f;
			break;
		
		case 0x00000006:
			return -664.5f, 165.4552f, 58.3821f;
			break;
		
		case 0x00000007:
			return 329.3609f, -190.5986f, 53.2262f;
			break;
		
		case 0x00000008:
			if (bParam1 == 0x00000001)
			{
				return -477.44f, -1052.99f, 39.81f;
			}
			else
			{
				return -478.7744f, -1051.079f, 40.93f;
			}
			break;
		
		case 0x00000009:
			return -1268.071f, -1917.408f, 4.8583f;
			break;
		
		case 0x0000000A:
			return -1221.908f, -2771.762f, 13.0545f;
			break;
		
		case 0x0000000B:
			return -3088.668f, 652.9629f, 0.989f;
			break;
		
		case 0x0000000C:
			if (bParam1 == 0x00000001)
			{
				return -629.3048f, 2036.067f, 157.3307f;
			}
			else
			{
				return -627.2166f, 2035.032f, 157.5585f;
			}
			break;
		
		case 0x0000000D:
			if (bParam1 == 0x00000001)
			{
				return -2071.903f, 3411.504f, 30.36414f;
			}
			else
			{
				return -2048.483f, 3406.162f, 31.1504f;
			}
			break;
		
		case 0x0000000E:
			return -424.0321f, 4012.767f, 80.4744f;
			break;
		
		case 0x0000000F:
			return 1983.1f, 5174.5f, 47.6f;
			break;
		
		case 0x00000010:
			if (bParam1 == 0x00000001)
			{
				return 2341.1f, 2576f, 45.7f;
			}
			else
			{
				return 2340.17f, 2573.89f, 45.77f;
			}
			break;
		
		case 0x00000011:
			if (bParam1 == 0x00000001)
			{
				return 1663.9f, -25.91945f, 172.7747f;
			}
			else
			{
				return 1663.96f, -24.1101f, 172.7747f;
			}
			break;
		
		case 0x00000012:
			if (bParam1 == 0x00000001)
			{
				return 2614.451f, 1695.127f, 26.59907f;
			}
			else
			{
				return 2617.729f, 1693.417f, 30.8743f;
			}
			break;
		
		case 0x00000013:
			if (bParam1 == 0x00000001)
			{
				return -187.31f, 1545.16f, 314.07f;
			}
			else
			{
				return -187.0338f, 1555.677f, 321.2431f;
			}
			break;
		
		case 0x00000014:
			if (bParam1 == 0x00000001)
			{
				return 859.5025f, 2426.04f, 53.18517f;
			}
			else
			{
				return 868.7573f, 2423.536f, 60.8942f;
			}
			break;
		
		case 0x00000015:
			if (bParam1 == 0x00000001)
			{
				return -1822.075f, 805.7814f, 137.7265f;
			}
			else
			{
				return -1822.967f, 803.8147f, 138.2005f;
			}
			break;
		
		case 0x00000016:
			if (bParam1 == 0x00000001)
			{
				return -1852.922f, 2054.42f, 139.9841f;
			}
			else
			{
				return -1851.628f, 2053.836f, 139.9841f;
			}
			break;
		
		case 0x00000017:
			if (bParam1 == 0x00000001)
			{
				return -1075.515f, 4898.497f, 213.2767f;
			}
			else
			{
				return -1070.651f, 4898.934f, 213.2752f;
			}
			break;
		
		case 0x00000018:
			if (bParam1 == 0x00000001)
			{
				return 1301.56f, 4306.6f, 36.39f;
			}
			else
			{
				return 1300.1f, 4308.1f, 37.3f;
			}
			break;
		
		case 0x00000019:
			if (bParam1 == 0x00000001)
			{
				return -436.44f, 5983.5f, 30.49f;
			}
			else
			{
				return -437.94f, 5985.04f, 31.29f;
			}
			break;
		
		case 0x0000001A:
			if (bParam1 == 0x00000001)
			{
				return 1840.569f, 3693.77f, 33.2668f;
			}
			else
			{
				return 1838.577f, 3692.028f, 33.6172f;
			}
			break;
		
		case 0x0000001B:
			return 533.1f, -23.8f, 70.6f;
			break;
		
		case 0x0000001C:
			if (bParam1 == 0x00000001)
			{
				return 445.83f, -986.48f, 29.69f;
			}
			else
			{
				return 446.4f, -988.5f, 29.77f;
			}
			break;
		
		case 0x0000001D:
			return -1119.498f, -847.3371f, 18.6886f;
			break;
		
		case 0x0000001E:
			return 391.2f, -1603.9f, 28.38f;
			break;
		
		case 0x0000001F:
			return -890.8f, -2386.2f, 13.4f;
			break;
		
		case 0x00000020:
			if (bParam1 == 0x00000001)
			{
				return 282.75f, 953.05f, 209.95f;
			}
			else
			{
				return 284.7f, 954.2f, 210.1514f;
			}
			break;
		
		case 0x00000021:
			return -2003.115f, 544.7549f, 114.5077f;
			break;
		
		case 0x00000022:
			if (bParam1 == 0x00000001)
			{
				return -397.5786f, 1127.353f, 321.7291f;
			}
			else
			{
				return -386.8739f, 1142.42f, 321.5892f;
			}
			break;
		
		case 0x00000023:
			return -1521.811f, 1560.201f, 106.9392f;
			break;
		
		case 0x00000024:
			return 1391.945f, 3616.655f, 37.9259f;
			break;
		
		case 0x00000025:
			if (bParam1 == 0x00000001)
			{
				return 45.37f, -1911.45f, 20.79f;
			}
			else
			{
				return 40.5177f, -1910.727f, 20.9706f;
			}
			break;
		
		case 0x00000026:
			if (bParam1 == 0x00000001)
			{
				return 68.14f, 3749.36f, 38.73f;
			}
			else
			{
				return 70.3786f, 3755.605f, 38.7487f;
			}
			break;
		
		case 0x00000027:
			return 119.45f, -755.29f, 258.15f;
			break;
		
		case 0x00000028:
			if (bParam1 == 0x00000001)
			{
				return 156.35f, -1192.1f, 28.37f;
			}
			else
			{
				return 160.4134f, -1191.7f, 28.87f;
			}
			break;
		
		case 0x00000029:
			return 23.9296f, -633.9206f, 6.5084f;
			break;
		
		case 0x0000002A:
			if (bParam1 == 0x00000001)
			{
				return 31.67f, 6542.78f, 30.44f;
			}
			else
			{
				return 30.9162f, 6546.791f, 30.4058f;
			}
			break;
		
		case 0x0000002B:
			if (bParam1)
			{
				return 1333.057f, 4381.278f, 43.3703f;
			}
			else
			{
				return 1331.355f, 4392.887f, 44.012f;
			}
			break;
		
		case 0x0000002C:
			if (bParam1 == 0x00000001)
			{
				return -1147.31f, 4939.27f, 221.27f;
			}
			else
			{
				return -1149.392f, 4938.771f, 221.3682f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000021:
		case 0x00000027:
		case 0x00000029:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

Vector3 func_92(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 131.2f, 6920.1f, 20.8f;
			break;
		
		case 0x00000001:
			if (bParam1 == 0x00000001)
			{
				return -1048.569f, 4917.414f, 208.4216f;
			}
			else
			{
				return -1046.277f, 4918.739f, 211.5379f;
			}
			break;
		
		case 0x00000002:
			return -2358.46f, 3251.397f, 100.5504f;
			break;
		
		case 0x00000003:
			if (bParam1 == 0x00000001)
			{
				return -247.6219f, 6331.341f, 31.42602f;
			}
			else
			{
				return -249.9504f, 6331.219f, 32.7262f;
			}
			break;
		
		case 0x00000004:
			if (bParam1 == 0x00000001)
			{
				return -140.9f, -2491.45f, 43.45f;
			}
			else
			{
				return -141.0976f, -2498.239f, 40.0124f;
			}
			break;
		
		case 0x00000005:
			if (bParam1 == 0x00000001)
			{
				return -2924.697f, 46.50282f, 10.60369f;
			}
			else
			{
				return -2925.7f, 47.4f, 11.6f;
			}
			break;
		
		case 0x00000006:
			return -793.1981f, -726.4421f, 26.28f;
			break;
		
		case 0x00000007:
			if (bParam1 == 0x00000001)
			{
				return 124.0092f, -673.0096f, 41.02729f;
			}
			else
			{
				return 123.5196f, -674.2917f, 41.4945f;
			}
			break;
		
		case 0x00000008:
			if (bParam1 == 0x00000001)
			{
				return 1195.737f, -1481.694f, 33.8595f;
			}
			else
			{
				return 1194.709f, -1482.472f, 33.9594f;
			}
			break;
		
		case 0x00000009:
			if (bParam1 == 0x00000001)
			{
				return -35.88743f, 1945.738f, 189.1868f;
			}
			else
			{
				return -35.5254f, 1947.289f, 189.186f;
			}
			break;
		
		case 0x0000000A:
			if (bParam1)
			{
				return 753.4579f, 4174.996f, 39.8011f;
			}
			else
			{
				return 751.72f, 4175.14f, 40.95f;
			}
			break;
		
		case 0x0000000B:
			if (bParam1 == 0x00000001)
			{
				return 1791.256f, 4592.383f, 36.68283f;
			}
			else
			{
				return 1789.8f, 4592.4f, 36.78f;
			}
			break;
		
		case 0x0000000C:
			return 341.311f, 2618.918f, 43.5124f;
			break;
		
		case 0x0000000D:
			return 442.3755f, -223.602f, 55.0215f;
			break;
		
		case 0x0000000E:
			if (bParam1 == 0x00000001)
			{
				return 1291.02f, -1760.94f, 51.05f;
			}
			else
			{
				return 1286.5f, -1754.4f, 52f;
			}
			break;
		
		case 0x0000000F:
			if (bParam1 == 0x00000001)
			{
				return 1659.438f, 5.4271f, 165.1176f;
			}
			else
			{
				return 1658.621f, 6.7752f, 166.1676f;
			}
			break;
		
		case 0x00000010:
			if (bParam1 == 0x00000001)
			{
				return 1645.91f, 4866.72f, 40.98f;
			}
			else
			{
				return 1647.399f, 4865.839f, 41f;
			}
			break;
		
		case 0x00000011:
			return -1144.589f, -2004.452f, 12.3803f;
			break;
		
		case 0x00000012:
			if (bParam1 == 0x00000001)
			{
				return -1047.3f, -520.6f, 35f;
			}
			else
			{
				return -1048.32f, -521.2f, 35.14f;
			}
			break;
		
		case 0x00000013:
			if (bParam1 == 0x00000001)
			{
				return -1576.046f, -587.8257f, 33.97909f;
			}
			else
			{
				return -1576.817f, -586.3887f, 34.8528f;
			}
			break;
		
		case 0x00000014:
			if (bParam1 == 0x00000001)
			{
				return 953.44f, -123.42f, 73.35f;
			}
			else
			{
				return 954.5f, -121.34f, 74.18f;
			}
			break;
		
		case 0x00000015:
			if (bParam1 == 0x00000001)
			{
				return 1134.201f, -665.9413f, 56.08261f;
			}
			else
			{
				return 1135.401f, -663.7875f, 56.088f;
			}
			break;
		
		case 0x00000016:
			if (bParam1 == 0x00000001)
			{
				return -2196.198f, 248.9123f, 173.612f;
			}
			else
			{
				return -2195.029f, 250.4256f, 173.6017f;
			}
			break;
		
		case 0x00000017:
			return 29.2f, 3635.4f, 39.8f;
			break;
		
		case 0x00000018:
			if (bParam1 == 0x00000001)
			{
				return 1724.429f, 3299.023f, 40.2235f;
			}
			else
			{
				return 1721.96f, 3300.464f, 40.3835f;
			}
			break;
		
		case 0x00000019:
			if (bParam1 == 0x00000001)
			{
				return 2617.321f, 3659.452f, 100.3867f;
			}
			else
			{
				return 2612.712f, 3662.564f, 101.1074f;
			}
			break;
		
		case 0x0000001A:
			return -459.9625f, 1101.076f, 328.0211f;
			break;
		
		case 0x0000001B:
			if (bParam1 == 0x00000001)
			{
				return 2432.607f, 4994.333f, 45.25828f;
			}
			else
			{
				return 2430.906f, 4995.561f, 45.2685f;
			}
			break;
		
		case 0x0000001C:
			if (bParam1 == 0x00000001)
			{
				return 3722.456f, 4521.837f, 20.39456f;
			}
			else
			{
				return 3724.5f, 4524.5f, 21.6f;
			}
			break;
		
		case 0x0000001D:
			if (bParam1 == 0x00000001)
			{
				return -446.9024f, 5997.598f, 30.3407f;
			}
			else
			{
				return -446.045f, 6000.882f, 31.9163f;
			}
			break;
		
		case 0x0000001E:
			return 3291.4f, 5192.5f, 18.4f;
			break;
		
		case 0x0000001F:
			if (bParam1 == 0x00000001)
			{
				return 390.81f, -1436.07f, 28.45f;
			}
			else
			{
				return 388.7f, -1434.3f, 29.8f;
			}
			break;
		
		case 0x00000020:
			return -445.26f, -442.49f, 32.26f;
			break;
		
		case 0x00000021:
			if (bParam1)
			{
				return -1501.46f, 858.17f, 180.59f;
			}
			else
			{
				return -1500.08f, 857.59f, 180.59f;
			}
			break;
		
		case 0x00000022:
			return 2822.2f, -741.4f, 1.8f;
			break;
		
		case 0x00000023:
			if (bParam1 == 0x00000001)
			{
				return -3166.978f, 1102.622f, 19.80827f;
			}
			else
			{
				return -3165.613f, 1102.24f, 19.8928f;
			}
			break;
		
		case 0x00000024:
			if (bParam1 == 0x00000001)
			{
				return 1842.882f, 3670.457f, 32.68f;
			}
			else
			{
				return 1841.114f, 3675.253f, 34.086f;
			}
			break;
		
		case 0x00000025:
			if (bParam1 == 0x00000001)
			{
				return 1828.794f, 2605.504f, 44.61582f;
			}
			else
			{
				return 1830.535f, 2603.828f, 45.7491f;
			}
			break;
		
		case 0x00000026:
			if (bParam1 == 0x00000001)
			{
				return -32.61f, -1089.67f, 25.42f;
			}
			else
			{
				return -40.0528f, -1084.016f, 26.6224f;
			}
			break;
		
		case 0x00000027:
			if (bParam1 == 0x00000001)
			{
				return 1439.012f, 6336.812f, 22.96477f;
			}
			else
			{
				return 1445.544f, 6334.057f, 23.975f;
			}
			break;
		
		case 0x00000028:
			if (bParam1 == 0x00000001)
			{
				return -782.5126f, -1352.245f, 8.0001f;
			}
			else
			{
				return -784.4851f, -1351.364f, 8.1001f;
			}
			break;
		
		case 0x00000029:
			if (bParam1 == 0x00000001)
			{
				return 962.8806f, -1826.419f, 30.07195f;
			}
			else
			{
				return 963.1673f, -1831.149f, 36.2055f;
			}
			break;
		
		case 0x0000002A:
			if (bParam1 == 0x00000001)
			{
				return -1246.155f, -1531.647f, 3.2962f;
			}
			else
			{
				return -1246.494f, -1533.677f, 4.5262f;
			}
			break;
		
		case 0x0000002B:
			if (bParam1 == 0x00000001)
			{
				return -765.5466f, 698.8101f, 143.3693f;
			}
			else
			{
				return -761.1058f, 701.9452f, 145.05f;
			}
			break;
		
		case 0x0000002C:
			if (bParam1 == 0x00000001)
			{
				return -512.1094f, 28.86313f, 43.6153f;
			}
			else
			{
				return -513.4391f, 30.9069f, 43.9018f;
			}
			break;
		
		case 0x0000002D:
			if (bParam1 == 0x00000001)
			{
				return 781.3839f, 1292.073f, 359.2997f;
			}
			else
			{
				return 780.3879f, 1295.705f, 361.6941f;
			}
			break;
		
		case 0x0000002E:
			return 208.69f, 337.76f, 104.64f;
			break;
		
		case 0x0000002F:
			if (bParam1 == 0x00000001)
			{
				return -1889.99f, 2078.38f, 140f;
			}
			else
			{
				return -1890.24f, 2073.26f, 140.11f;
			}
			break;
		
		case 0x00000030:
			return 153.6156f, -3073.998f, 4.8962f;
			break;
		
		case 0x00000031:
			if (bParam1)
			{
				return -306.2449f, -1180.538f, 22.711f;
			}
			else
			{
				return -304.0894f, -1180.886f, 23.9493f;
			}
			break;
		
		case 0x00000032:
			return -2006.987f, -556.4998f, 11.8813f;
			break;
		
		case 0x00000033:
			if (bParam1 == 0x00000001)
			{
				return -590.2079f, -289.8196f, 40.68631f;
			}
			else
			{
				return -588.1934f, -290.4782f, 43.7101f;
			}
			break;
		
		case 0x00000034:
			return -1795.826f, -855.7111f, 8.2048f;
			break;
		
		case 0x00000035:
			return -1557.108f, -1155.246f, 2.9158f;
			break;
		
		case 0x00000036:
			if (bParam1 == 0x00000001)
			{
				return -1470.71f, -1389.33f, 1.58f;
			}
			else
			{
				return -1467.483f, -1387.507f, 3.1432f;
			}
			break;
		
		case 0x00000037:
			return -684.8126f, -180.648f, 48.02f;
			break;
		
		case 0x00000038:
			if (bParam1 == 0x00000001)
			{
				return -1311.413f, 640.1154f, 136.9244f;
			}
			else
			{
				return -1307.062f, 641.4211f, 138.0582f;
			}
			break;
		
		case 0x00000039:
			return 2493.686f, 4963.541f, 43.7358f;
			break;
		
		case 0x0000003A:
			if (bParam1 == 0x00000001)
			{
				return 1392.76f, 3602.94f, 33.98f;
			}
			else
			{
				return 1392.609f, 3605.799f, 34.9939f;
			}
			break;
		
		case 0x0000003B:
			if (bParam1 == 0x00000001)
			{
				return -527.33f, 5295.7f, 73.17f;
			}
			else
			{
				return -535.4436f, 5297.496f, 76.3891f;
			}
			break;
		
		case 0x0000003C:
			if (bParam1 == 0x00000001)
			{
				return -564.26f, 5353.13f, 69.23f;
			}
			else
			{
				return -551.5837f, 5349.404f, 75.253f;
			}
			break;
		
		case 0x0000003D:
			if (bParam1 == 0x00000001)
			{
				return 3.18f, -1827.1f, 24.22f;
			}
			else
			{
				return 0.1911f, -1825.905f, 24.3295f;
			}
			break;
		
		case 0x0000003E:
			if (bParam1 == 0x00000001)
			{
				return 62.25f, 3681.06f, 38.84f;
			}
			else
			{
				return 63.8867f, 3683.49f, 39.1543f;
			}
			break;
		
		case 0x0000003F:
			return 155.384f, -741.179f, 258.6519f;
			break;
		
		case 0x00000040:
			if (bParam1 == 0x00000001)
			{
				return 126.61f, -1206.29f, 28.3f;
			}
			else
			{
				return 124.265f, -1205.882f, 28.2951f;
			}
			break;
		
		case 0x00000041:
			return 27.449f, -625.31f, 15.462f;
			break;
		
		case 0x00000042:
			if (bParam1 == 0x00000001)
			{
				return -129.04f, -662.04f, 39.51f;
			}
			else
			{
				return -129.0374f, -659.2689f, 41.0016f;
			}
			break;
		
		case 0x00000043:
			if (bParam1)
			{
				return 1138.62f, -1598.56f, 33.69f;
			}
			else
			{
				return 1138.63f, -1596.61f, 35.07f;
			}
			break;
		
		case 0x00000044:
			if (bParam1)
			{
				return 1149.68f, -1525.56f, 33.84f;
			}
			else
			{
				return 1147.55f, -1527.83f, 36.01f;
			}
			break;
		
		case 0x00000045:
			if (bParam1)
			{
				return 297.48f, -1448.79f, 28.97f;
			}
			else
			{
				return 296.44f, -1450.75f, 30.4f;
			}
			break;
		
		case 0x00000046:
			if (bParam1)
			{
				return 324.21f, -1392.68f, 31.51f;
			}
			else
			{
				return 322.27f, -1393.75f, 32.79f;
			}
			break;
		
		case 0x00000047:
			if (bParam1)
			{
				return 293.2f, -597.92f, 42.28f;
			}
			else
			{
				return 294.3f, -598.1f, 43.73f;
			}
			break;
		
		case 0x00000048:
			if (bParam1)
			{
				return 358f, -592.66f, 27.79f;
			}
			else
			{
				return 357.07f, -590.63f, 29.08f;
			}
			break;
		
		case 0x00000049:
			if (bParam1)
			{
				return -495.45f, -326.18f, 33.5f;
			}
			else
			{
				return -496.4f, -324.7f, 34.75f;
			}
			break;
		
		case 0x0000004A:
			if (bParam1)
			{
				return -450.91f, -351.93f, 33.5f;
			}
			else
			{
				return -449.82f, -353.49f, 34.75f;
			}
			break;
		
		case 0x0000004B:
			return -2258.833f, 323.9413f, 184.9015f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x00000011:
		case 0x00000037:
		case 0x0000003F:
		case 0x00000041:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

int func_94(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

Vector3 func_95(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			if (bParam1 == 0x00000001)
			{
				return -1760.36f, 428.6f, 126.31f;
			}
			else
			{
				return -1756.974f, 427.531f, 126.7f;
			}
			break;
		
		case 0x00000001:
			return -1595.742f, 2799.371f, 16.0205f;
			break;
		
		case 0x00000002:
			if (bParam1 == 0x00000001)
			{
				return -197.1486f, 1482.685f, 288.253f;
			}
			else
			{
				return -200.0114f, 1481.697f, 289.4303f;
			}
			break;
		
		case 0x00000003:
			return 256.77f, 2841.047f, 42.6599f;
			break;
		
		case 0x00000004:
			return -1360.223f, 4435.751f, 27.7754f;
			break;
		
		case 0x00000005:
			return 64.63f, 7051.253f, 15.8272f;
			break;
		
		case 0x00000006:
			return -456.2838f, 1593.799f, 358.0119f;
			break;
		
		case 0x00000007:
			if (bParam1 == 0x00000001)
			{
				return -3114.617f, 749.8445f, 11.59352f;
			}
			else
			{
				return -3111.614f, 749.2816f, 12.6285f;
			}
			break;
		
		case 0x00000008:
			return 713.6797f, 4095.969f, 33.765f;
			break;
		
		case 0x00000009:
			return 255.2671f, 2586.281f, 43.9619f;
			break;
		
		case 0x0000000A:
			return -1292.64f, -3345.82f, 23.27f;
			break;
		
		case 0x0000000B:
			return 3111.531f, 2214.848f, -8.6457f;
			break;
		
		case 0x0000000C:
			if (bParam1 == 0x00000001)
			{
				return 555.82f, -839.05f, 39.84f;
			}
			else
			{
				return 555f, -837.81f, 55.08f;
			}
			break;
		
		case 0x0000000D:
			return -2360f, 3245f, 91.9f;
			break;
		
		case 0x0000000E:
			return 1691.152f, 2640.859f, 54.0693f;
			break;
		
		case 0x0000000F:
			return 1982.37f, 6203.64f, 41.15f;
			break;
		
		case 0x00000010:
			return -2979f, 1588f, 23.3f;
			break;
		
		case 0x00000011:
			return 963.5308f, -1824.04f, 30.0708f;
			break;
		
		case 0x00000012:
			return -295.4187f, 6188.786f, 30.48932f;
			break;
		
		case 0x00000013:
			return -1778f, 124f, 67.9f;
			break;
		
		case 0x00000014:
			if (bParam1 == 0x00000001)
			{
				return 157.5759f, 3133.994f, 42.45733f;
			}
			else
			{
				return 161.2925f, 3131.854f, 42.5892f;
			}
			break;
		
		case 0x00000015:
			return -888f, 5406f, 30.5f;
			break;
		
		case 0x00000016:
			return -1840f, 793f, 138.7f;
			break;
		
		case 0x00000017:
			if (bParam1 == 0x00000001)
			{
				return -495.8039f, -1750.207f, 17.42509f;
			}
			else
			{
				return -495.9968f, -1747.231f, 18.5194f;
			}
			break;
		
		case 0x00000018:
			if (bParam1 == 0x00000001)
			{
				return -1764.695f, -265.5809f, 47.6187f;
			}
			else
			{
				return -1763.359f, -263.2062f, 47.1481f;
			}
			break;
		
		case 0x00000019:
			if (bParam1 == 0x00000001)
			{
				return 548.0715f, -1642.451f, 27.2033f;
			}
			else
			{
				return 548.5943f, -1642.603f, 27.4425f;
			}
			break;
		
		case 0x0000001A:
			return 736.0563f, 2595.556f, 72.9165f;
			break;
		
		case 0x0000001B:
			if (bParam1 == 0x00000001)
			{
				return 701.0009f, -1179.702f, 23.28737f;
			}
			else
			{
				return 699.2748f, -1181.671f, 33.2608f;
			}
			break;
		
		case 0x0000001C:
			if (bParam1 == 0x00000001)
			{
				return -1146.74f, 4938.93f, 221.27f;
			}
			else
			{
				return -1149.437f, 4940.362f, 221.3282f;
			}
			break;
		
		case 0x0000001D:
			if (bParam1 == 0x00000001)
			{
				return 2543.91f, -432.76f, 93.12f;
			}
			else
			{
				return 2513.535f, -442.8484f, 113.0888f;
			}
			break;
		
		case 0x0000001E:
			return -553.1764f, -2239.877f, 121.3704f;
			break;
		
		case 0x0000001F:
			if (bParam1 == 0x00000001)
			{
				return 987.16f, -108.02f, 73.3f;
			}
			else
			{
				return 987.15f, -105.88f, 74.13f;
			}
			break;
		
		case 0x00000020:
			return -1048f, -836f, 10.5f;
			break;
		
		case 0x00000021:
			return 312.6026f, 6606.896f, 27.8835f;
			break;
		
		case 0x00000022:
			return -37.21f, 2871.26f, 58.61f;
			break;
		
		case 0x00000023:
			if (bParam1 == 0x00000001)
			{
				return 61.91f, 3690.51f, 38.83f;
			}
			else
			{
				return 59f, 3692f, 38.92f;
			}
			break;
		
		case 0x00000024:
			if (bParam1 == 0x00000001)
			{
				return 2933.33f, 4617.07f, 47.72f;
			}
			else
			{
				return 2934.499f, 4617.067f, 47.736f;
			}
			break;
		
		case 0x00000025:
			return 57.8219f, -1932.121f, 20.4939f;
			break;
		
		case 0x00000026:
			return 378.26f, -334.3f, 45.63f;
			break;
		
		case 0x00000027:
			if (bParam1 == 0x00000001)
			{
				return 2673.662f, 2793.702f, 31.8124f;
			}
			else
			{
				return 2676.045f, 2793.249f, 39.5934f;
			}
			break;
		
		case 0x00000028:
			return -1582.278f, 770.3486f, 188.1942f;
			break;
		
		case 0x00000029:
			if (bParam1 == 0x00000001)
			{
				return -1641.139f, -1032.815f, 4.63165f;
			}
			else
			{
				return -1640.546f, -1034.129f, 4.6074f;
			}
			break;
		
		case 0x0000002A:
			if (bParam1 == 0x00000001)
			{
				return -151.09f, -214.36f, 44.73f;
			}
			else
			{
				return -159.7137f, -209.1721f, 48.938f;
			}
			break;
		
		case 0x0000002B:
			return -1276.986f, -2451.886f, 72.0481f;
			break;
		
		case 0x0000002C:
			if (bParam1 == 0x00000001)
			{
				return -403.5827f, 1056.212f, 322.8414f;
			}
			else
			{
				return -402f, 1053f, 323f;
			}
			break;
		
		case 0x0000002D:
			return 2728.987f, 1576.382f, 65.5818f;
			break;
		
		case 0x0000002E:
			if (bParam1 == 0x00000001)
			{
				return -221.27f, 6133.62f, 30.48f;
			}
			else
			{
				return -215.9002f, 6125.27f, 56.278f;
			}
			break;
		
		case 0x0000002F:
			return 2092.225f, 2492.302f, 89.4046f;
			break;
		
		case 0x00000030:
			return -1124.666f, -967.1614f, 5.6319f;
			break;
		
		case 0x00000031:
			if (bParam1 == 0x00000001)
			{
				return -405.5299f, 323.4063f, 107.7227f;
			}
			else
			{
				return -405f, 325f, 108.7f;
			}
			break;
		
		case 0x00000032:
			return -1087.31f, -2429.3f, 13f;
			break;
		
		case 0x00000033:
			return -1042.645f, 879.7763f, 160.2144f;
			break;
		
		case 0x00000034:
			if (bParam1 == 0x00000001)
			{
				return -1081.229f, 678.9454f, 141.8056f;
			}
			else
			{
				return -1078.35f, 682.2944f, 144.904f;
			}
			break;
		
		case 0x00000035:
			return -402.0679f, 1355.062f, 329.8384f;
			break;
		
		case 0x00000036:
			return 153.3876f, 713.6584f, 207.2551f;
			break;
		
		case 0x00000037:
			return 186.9f, 243.0269f, 140.55f;
			break;
		
		case 0x00000038:
			if (bParam1 == 0x00000001)
			{
				return 302.01f, -3254.45f, 4.8f;
			}
			else
			{
				return 304f, -3259f, 5f;
			}
			break;
		
		case 0x00000039:
			if (bParam1 == 0x00000001)
			{
				return -398.57f, -1883.96f, 20.54f;
			}
			else
			{
				return -397f, -1885f, 21.5f;
			}
			break;
		
		case 0x0000003A:
			return 780.7208f, -211.0616f, 65.1143f;
			break;
		
		case 0x0000003B:
			return -1755.011f, 184.3929f, 63.3711f;
			break;
		
		case 0x0000003C:
			if (bParam1 == 0x00000001)
			{
				return 788.84f, 2164.06f, 52.1f;
			}
			else
			{
				return 786.0139f, 2164.951f, 52.0981f;
			}
			break;
		
		case 0x0000003D:
			return 1707.228f, 4920.156f, 41.0637f;
			break;
		
		case 0x0000003E:
			return -684.9417f, 5793.045f, 16.331f;
			break;
		
		case 0x0000003F:
			return -2188f, 4251f, 48f;
			break;
		
		case 0x00000040:
			if (bParam1 == 0x00000001)
			{
				return -1099.08f, 2711.35f, 18.11f;
			}
			else
			{
				return -1103f, 2715f, 19f;
			}
			break;
		
		case 0x00000041:
			return 581f, -2805f, 5.5f;
			break;
		
		case 0x00000042:
			if (bParam1 == 0x00000001)
			{
				return -663.95f, -1998.85f, 6.1f;
			}
			else
			{
				return -665.4316f, -2002.04f, 7.5968f;
			}
			break;
		
		case 0x00000043:
			return 1442.905f, -1479.759f, 62.2245f;
			break;
		
		case 0x00000044:
			if (bParam1 == 0x00000001)
			{
				return -361.92f, -141.76f, 37.58f;
			}
			else
			{
				return -356.5324f, -145.0359f, 41.7413f;
			}
			break;
		
		case 0x00000045:
			return 624.0116f, 558.6531f, 129.2455f;
			break;
		
		case 0x00000046:
			return 2833f, 2807f, 56.3785f;
			break;
		
		case 0x00000047:
			if (bParam1 == 0x00000001)
			{
				return 92.14449f, 6360.182f, 30.37612f;
			}
			else
			{
				return 94.0769f, 6356.961f, 30.3761f;
			}
			break;
		
		case 0x00000048:
			return -2231.514f, 3477.792f, 29.3291f;
			break;
		
		case 0x00000049:
			return 377f, 3582f, 32.5f;
			break;
		
		case 0x0000004A:
			if (bParam1 == 0x00000001)
			{
				return -2947.47f, 445.6f, 14.29f;
			}
			else
			{
				return -2948f, 441f, 15f;
			}
			break;
		
		case 0x0000004B:
			if (bParam1 == 0x00000001)
			{
				return 1292.88f, -3341.78f, 4.9f;
			}
			else
			{
				return 1296f, -3348f, 5.2f;
			}
			break;
		
		case 0x0000004C:
			if (bParam1 == 0x00000001)
			{
				return -1165.46f, -2054.09f, 13.2f;
			}
			else
			{
				return -1165.883f, -2051.026f, 13.2268f;
			}
			break;
		
		case 0x0000004D:
			if (bParam1 == 0x00000001)
			{
				return 1235.57f, -452.01f, 65.7f;
			}
			else
			{
				return 1235f, -450f, 66.5f;
			}
			break;
		
		case 0x0000004E:
			return -467.0458f, -934.8019f, 46.9844f;
			break;
		
		case 0x0000004F:
			return 226.7f, -1761f, 28.5f;
			break;
		
		case 0x00000050:
			if (bParam1 == 0x00000001)
			{
				return 1218.07f, 1898.69f, 76.87f;
			}
			else
			{
				return 1221f, 1898f, 77.4f;
			}
			break;
		
		case 0x00000051:
			if (bParam1 == 0x00000001)
			{
				return 1545.99f, 3802.7f, 32.42f;
			}
			else
			{
				return 1535.829f, 3798.217f, 33.4563f;
			}
			break;
		
		case 0x00000052:
			return 756.8601f, 6462.329f, 30.4229f;
			break;
		
		case 0x00000053:
			return -2319f, 4124f, 26f;
			break;
		
		case 0x00000054:
			return -3185f, 1053f, 20.2f;
			break;
		
		case 0x00000055:
			return 818.9215f, -3188.167f, 4.9007f;
			break;
		
		case 0x00000056:
			if (bParam1 == 0x00000001)
			{
				return -451.05f, -2264.24f, 6.61f;
			}
			else
			{
				return -457.3656f, -2262.646f, 7.5212f;
			}
			break;
		
		case 0x00000057:
			if (bParam1 == 0x00000001)
			{
				return 1409.86f, -757.22f, 65.8f;
			}
			else
			{
				return 1410.091f, -752.1061f, 66.2362f;
			}
			break;
		
		case 0x00000058:
			return 8.4875f, -441.2103f, 44.5639f;
			break;
		
		case 0x00000059:
			if (bParam1 == 0x00000001)
			{
				return -935.04f, 387.39f, 76.62f;
			}
			else
			{
				return -937.0176f, 391.544f, 80.2377f;
			}
			break;
		
		case 0x0000005A:
			if (bParam1 == 0x00000001)
			{
				return 2748.49f, 3463.02f, 54.77f;
			}
			else
			{
				return 2746.554f, 3463.525f, 54.7144f;
			}
			break;
		
		case 0x0000005B:
			return 1898.896f, 4921.975f, 47.8088f;
			break;
		
		case 0x0000005C:
			if (bParam1 == 0x00000001)
			{
				return -315.51f, 6310.89f, 31.37f;
			}
			else
			{
				return -315.9772f, 6307.385f, 31.4906f;
			}
			break;
		
		case 0x0000005D:
			return -1171f, 4927f, 224f;
			break;
		
		case 0x0000005E:
			return -281.1712f, 2528.012f, 73.6376f;
			break;
		
		case 0x0000005F:
			if (bParam1 == 0x00000001)
			{
				return 68.45f, 3756.27f, 38.74f;
			}
			else
			{
				return 68.453f, 3758.967f, 38.7395f;
			}
			break;
		
		case 0x00000060:
			return 25.2888f, -634.2637f, 6.5084f;
			break;
		
		case 0x00000061:
			if (bParam1 == 0x00000001)
			{
				return -1146.67f, 4939.11f, 221.27f;
			}
			else
			{
				return -1145.283f, 4940.286f, 221.3038f;
			}
			break;
		
		case 0x00000062:
			return 441.64f, 5570.38f, 780.45f;
			break;
		
		case 0x00000063:
			if (bParam1)
			{
				return 1353.152f, 4377.223f, 43.3416f;
			}
			else
			{
				return 1357.209f, 4388.445f, 43.872f;
			}
			break;
		
		case 0x00000064:
			return -102.0671f, -968.1538f, 295.5635f;
			break;
		
		case 0x00000065:
			return 2492.69f, 4963.014f, 43.6478f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000001E:
		case 0x00000022:
		case 0x0000002B:
		case 0x0000002D:
		case 0x00000032:
		case 0x00000037:
		case 0x00000058:
		case 0x00000060:
		case 0x00000062:
		case 0x00000064:
			return 0x00000000;
			break;
	}
	return 0x00000001;
}

void func_97()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		iLocal_317[iVar0] = 0xFFFFFFFF;
		fLocal_318[iVar0] = 999999f;
		vLocal_319[iVar0 /*3*/] = { 0f, 0f, 0f };
		vLocal_320[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

void func_98(bool bParam0)
{
	unk_0xC05DBA7D4F88D5E5(joaat("a_c_retriever"), bParam0);
	unk_0xC05DBA7D4F88D5E5(joaat("a_c_rottweiler"), bParam0);
	unk_0xC05DBA7D4F88D5E5(joaat("a_c_boar"), bParam0);
	unk_0xC05DBA7D4F88D5E5(joaat("a_c_coyote"), bParam0);
	unk_0xC05DBA7D4F88D5E5(joaat("a_c_deer"), bParam0);
	unk_0xC05DBA7D4F88D5E5(joaat("a_c_mtlion"), bParam0);
	unk_0xC05DBA7D4F88D5E5(joaat("a_c_pig"), bParam0);
}

void func_99(bool bParam0, int iParam1, bool bParam2)
{
	if (!unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_ball"), 0x00000000) || unk_0xD2AEDBB0268DF71A(unk_0x16F2683693E537C9(), joaat("weapon_ball")) == 0x00000000)
	{
		unk_0x262EF6C6306BEA6C(unk_0x16F2683693E537C9(), joaat("weapon_ball"), 0x00000001, bParam0, bParam2);
		unk_0xB875234DD8BEBA66(joaat("weapon_ball"));
		if (iParam1 == 0x00000001)
		{
			unk_0x4D7F4CC43D4D0DE3(iLocal_384, "PICKUP_WEAPON_BALL", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", 0x00000001);
		}
	}
}

void func_100()
{
	if (!unk_0x16102BEDC7435774(iLocal_69))
	{
		unk_0xE25C96A9C36BE5D2(iLocal_69, unk_0x047216F1869A66EC(unk_0x16F2683693E537C9()));
	}
	if (unk_0x16102BEDC7435774(iLocal_69))
	{
		unk_0x7BECA8F360B1686D(iLocal_69, 0x00000001);
		unk_0x18E279963C2FCEF4(func_101(), 1f, 0.9f, 3f);
		unk_0x2A82338A0A086F1E(iLocal_69, unk_0x047216F1869A66EC(unk_0x16F2683693E537C9()), 0x00000001);
	}
}

int func_101()
{
	return unk_0x5D08BBCCCC2F43A4(unk_0xA30EC016B12C03E4());
}

void func_102()
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000) && !unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
	{
		if (func_106(unk_0x16F2683693E537C9(), iLocal_69) > 10f || func_105("CHOP_H_WHIS"))
		{
			if ((unk_0x1C0640BA9A7327B3() - iLocal_342) > 0x00000FA0 && unk_0xBFC0798A6E3417F9(0x00000002, 0x0000002F))
			{
				iLocal_342 = unk_0x1C0640BA9A7327B3();
				func_103(unk_0x16F2683693E537C9(), "CALL_CHOP", 0x00000003);
				if (func_105("CHOP_H_WHIS"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				if (iLocal_51 == 0x0000000F && iLocal_52 > 0x00000001)
				{
				}
				else
				{
					func_40(0x00000000);
					if (iLocal_51 == 0x00000002)
					{
						func_121(0x00000002, 0x00000000);
					}
					else
					{
						func_121(0x00000002, 0x00000001);
					}
				}
			}
			if (((!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_5E, 0x00000008) && !unk_0xFEBC1E4EC9E001F0()) && !func_19()) && !unk_0x991B1F0980C62628())
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_5E), 0x00000008);
				func_15("CHOP_H_WHIS", 0xFFFFFFFF);
			}
		}
	}
}

void func_103(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_104(iParam2), 0x00000001);
}

int func_104(int iParam0)
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

bool func_105(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

float func_106(int iParam0, int iParam1)
{
	return func_4(iParam0, iParam1, 0x00000001);
}

int func_107()
{
	if ((unk_0xD1960163A3042274(iLocal_69, 0x0E763797) == 0x00000007 || unk_0x869EFD0BC0868856(iLocal_69)) || unk_0x688A90832774AB83(iLocal_69))
	{
		unk_0xD0E45B74EA5CF129(iLocal_69);
		return 0x00000001;
	}
	return 0x00000000;
}

void func_108(char* sParam0, int iParam1)
{
	func_111(&uLocal_148, 0x00000001, unk_0x16F2683693E537C9(), "FRANKLIN", 0x00000000, 0x00000001);
	func_109(&uLocal_148, "CHOP_AU", sParam0, 0x00000003, iParam1, 0x00000000);
}

void func_109(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_110(uParam0, 0x00000091, sParam1, iParam4, iParam5, 0x00000000);
	if (iParam3 > 0x00000007)
	{
		if (iParam3 < 0x0000000C)
		{
			iParam3 = 0x00000007;
		}
	}
	unk_0x5D96D8530B3D0904(&Global_4CD7, 0x00000000);
	Global_5148 = iParam3;
	StringCopy(&Global_513B, sParam2, 24);
}

void func_110(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_111(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_112()
{
	int iVar0;
	
	iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000006);
	if (iVar0 == 0x00000000)
	{
		unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_80[0x00000001], "idle_a", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		sLocal_81 = "idle_a";
	}
	else if (iVar0 == 0x00000001)
	{
		unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_80[0x00000001], "idle_c", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		sLocal_81 = "idle_c";
	}
	else
	{
		unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_80[0x00000001], "idle_b", 8f, -8f, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		sLocal_81 = "idle_b";
	}
}

int func_113(int iParam0, int iParam1)
{
	if (func_114(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000001 || unk_0xD1960163A3042274(iParam0, iParam1) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_114(int iParam0)
{
	if (func_125(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_359 == 0x00000000)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000008);
		if (!unk_0x5A91F08DF773C39D(iLocal_69, vLocal_358[iVar0 /*3*/], 2f, 2f, 4f, 0x00000000, 0x00000001, 0x00000000) && !unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_358[iVar0 /*3*/], 2f, 2f, 4f, 0x00000000, 0x00000001, 0x00000000))
		{
			unk_0x96167B03C5A77156(iLocal_69, vLocal_358[iVar0 /*3*/], 1f, 0x00004E20, 0.25f, 0x00002000, 0x471C4000);
			iLocal_359 = 0x00000001;
		}
	}
	else if (!func_113(iLocal_69, 0x2A89B8A7))
	{
		if (func_43() == 0x00000002)
		{
			iVar1 = 0x0000000F;
		}
		else if (func_43() == 0x00000000)
		{
			iVar1 = 0x0000000A;
		}
		else
		{
			iVar1 = 0xFFFFFFFF;
		}
		iVar2 = unk_0x09AC81E49EA267F7(0x00000000, 0x00000064);
		if (iVar2 < iVar1 && iLocal_348 == 0x00000000)
		{
			iLocal_348 = 0x00000001;
			func_121(0x0000000D, 0x00000001);
		}
		else if (iVar2 < 0x00000032)
		{
			iLocal_79 = 0x00000001;
			sLocal_80[0x00000000] = "creatures@rottweiler@amb@world_dog_barking@enter";
			sLocal_80[0x00000001] = "creatures@rottweiler@amb@world_dog_barking@base";
			sLocal_80[0x00000002] = "creatures@rottweiler@amb@world_dog_barking@exit";
			func_121(0x00000011, 0x00000001);
		}
		else
		{
			iLocal_79 = 0x00000000;
			sLocal_80[0x00000000] = "creatures@rottweiler@amb@world_dog_sitting@enter";
			sLocal_80[0x00000001] = "creatures@rottweiler@amb@world_dog_sitting@idle_a";
			sLocal_80[0x00000002] = "creatures@rottweiler@amb@world_dog_sitting@exit";
			func_121(0x00000011, 0x00000001);
		}
	}
}

void func_116()
{
	if (((unk_0x1C0640BA9A7327B3() - iLocal_378) > 0x000007D0 && func_125(iLocal_69)) && unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001), 5f, 0x00000001))
	{
		func_122("WHINE");
		iLocal_378 = unk_0x1C0640BA9A7327B3();
	}
}

void func_117()
{
	if (func_43() == 0x00000002 && (unk_0x1C0640BA9A7327B3() - iLocal_343) > iLocal_344)
	{
		iLocal_343 = unk_0x1C0640BA9A7327B3();
		iLocal_344 = unk_0x09AC81E49EA267F7(0x00002710, 0x00003A98);
		func_122("WHINE");
	}
}

int func_118(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if ((func_125(iLocal_69) && func_125(unk_0x16F2683693E537C9())) && func_120(iParam0, vLocal_329, 30f))
	{
		if (iParam1 == 0x00000001)
		{
			if (func_119(&uLocal_96, unk_0x68F4C0EC296D3901(iParam0, 0x00000001)))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001) };
				vVar1 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001) };
				if (unk_0x755FF954DAE327E1((vVar0.z - vVar1.z)) < 2.5f)
				{
					return 0x00000001;
				}
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_119(var uParam0, struct<2> Param1, float fParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_2E < 0x00000003)
	{
	}
	bVar0 = 0x00000000;
	iVar1 = 0x00000000;
	iVar2 = (uParam0->f_2E - 0x00000001);
	while (iVar1 < uParam0->f_2E)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

bool func_120(int iParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	vVar1 = { vParam1 - vVar0 };
	return ((vVar1.x * vVar1.x) + (vVar1.y * vVar1.y)) <= (fParam2 * fParam2);
}

void func_121(int iParam0, int iParam1)
{
	iLocal_86 = 0x00000000;
	if (func_125(iLocal_69))
	{
		unk_0x11AD11297DC58CC7(iLocal_69, 0x00000001);
		unk_0xD0E45B74EA5CF129(iLocal_69);
		if (!unk_0x405E212DDE472467(iLocal_69, 0x00000000))
		{
			if (iParam1 == 0x00000001)
			{
				unk_0xA3BF0AA5A2608191(iLocal_69);
			}
			unk_0xE121AE1BBF90E186(iLocal_69, 0x00000000);
		}
	}
	iLocal_51 = iParam0;
	iLocal_53 = 0x00000000;
	iLocal_52 = 0x00000000;
	iLocal_321 = 0xFFFFFFFF;
	vLocal_322 = { 0f, 0f, 0f };
	vLocal_323 = { 0f, 0f, 0f };
	iLocal_315 = 0x00000005;
	func_34();
	iLocal_359 = 0x00000000;
	iLocal_357 = 0x00000000;
	iLocal_378 = unk_0x1C0640BA9A7327B3();
	unk_0x7352ACF3368DF65F("DisableBarks", 0x00000000);
}

void func_122(char* sParam0)
{
	unk_0x39590DF49057F935(iLocal_69, 0x00000003, sParam0);
}

int func_123()
{
	if (func_118(unk_0x16F2683693E537C9(), 0x00000001))
	{
		if ((unk_0x1C0640BA9A7327B3() - iLocal_336) > iLocal_337)
		{
			return 0x00000001;
		}
		if (func_39(unk_0x16F2683693E537C9(), vLocal_329.f_5, 0x00000001) < 8f)
		{
			func_108("CHOP_KENNEL", 0x00000000);
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_124(int iParam0, vector3 vParam1, float fParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = 0x00000000;
	if (func_125(iParam0))
	{
		if (bParam3 == 0x00000001)
		{
			fVar1 = 0f;
			bVar0 = unk_0xE82754C349C7B581(vParam1, &fVar1, 0x00000000, 0x00000000);
			if (bVar0)
			{
				vParam1.z = fVar1;
			}
		}
		unk_0xA47B46945FF6DE74(iParam0, vParam1, 0x00000001, 0x00000000, 0x00000000, iParam4);
		unk_0xD8F6A53F4799FAFE(iParam0, fParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_125(int iParam0)
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

void func_126()
{
	if ((unk_0x1C0640BA9A7327B3() - iLocal_382) > 0x0000EA60)
	{
		iLocal_382 = unk_0x1C0640BA9A7327B3();
		if ((iLocal_51 == 0x00000002 || iLocal_51 == 0x00000005) || iLocal_51 == 0x0000000F)
		{
			if (func_43() == 0x00000001)
			{
				func_127(0x00000073, 0x00000001);
			}
			else
			{
				func_127(0x00000074, 0x00000001);
			}
		}
	}
}

void func_127(int iParam0, int iParam1)
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

void func_128()
{
	if ((unk_0x1C0640BA9A7327B3() - iLocal_379) > 0x000001F4)
	{
		iLocal_379 = unk_0x1C0640BA9A7327B3();
		if (iLocal_51 != 0x0000000F && unk_0x68E45B0EC23881A7(unk_0x16F2683693E537C9(), joaat("weapon_ball"), 1.5f, &uLocal_362, &iLocal_361, 0x00000000))
		{
			func_40(0x00000001);
		}
	}
}

void func_129()
{
	int iVar0;
	
	if (((((((((((func_144() && func_143()) && !func_142()) && iLocal_53 == 0x00000000) && iLocal_51 != 0x00000006) && func_19()) && !unk_0x991B1F0980C62628()) && !unk_0x4734A6196B611C3B(iLocal_69, 0x00000000)) && !func_81()) && !func_16()) && !func_3(0x00000000)) && !func_141())
	{
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000013, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x0000002C, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000106, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000105, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000000, 0x00000025, 0x00000001);
		if (iLocal_328 == 0x00000000)
		{
			func_138(SYSTEM::FLOOR(Global_1B416.f_4E91.f_FE), 0x00000064, "CHOP_H_HAPPY", 0x00000001, 0xFFFFFFFF, 0x00000002, -1f, -1f, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xBF800000, 0xBF800000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
		else
		{
			func_138(0x00000064, 0x00000064, "CHOP_H_HAPPY", 0x00000001, 0xFFFFFFFF, 0x00000002, -1f, -1f, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF, 0xBF800000, 0xBF800000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF);
		}
		if (func_137())
		{
			if (Global_78C2 == 0x00000000)
			{
				Global_78C2 = 0x00000001;
			}
			if (unk_0x8C74DE122769E1BF())
			{
				unk_0x308C55E6C40CF474(0x00000001);
			}
			else
			{
				unk_0xC0B0B9E466C0ED17(iLocal_69, 0f, 0f, 0f, 0x00000001, 0xFFFFFFFF, 0x000003E8, 0x000003E8, 0x0B833D00);
				iLocal_386 = 0x00000000;
			}
			unk_0x558EC149EB2BC0A2(func_136(), func_135(0x00000000));
			unk_0x558EC149EB2BC0A2(func_136(), func_135(0x00000001));
			unk_0x558EC149EB2BC0A2(func_136(), func_135(0x00000002));
			unk_0x558EC149EB2BC0A2(func_136(), func_135(0x00000003));
			unk_0x558EC149EB2BC0A2(func_136(), func_135(0x00000004));
			unk_0x558EC149EB2BC0A2(func_136(), func_135(0x00000005));
			if (unk_0x91E3F625EF57450D(0x00000000))
			{
				unk_0x38C3A68D7861DCFD(func_136(), func_135(0x00000000), 0x00000001);
				unk_0x38C3A68D7861DCFD(func_136(), func_135(0x00000001), 0x00000001);
				unk_0x38C3A68D7861DCFD(func_136(), func_135(0x00000002), 0x00000001);
				unk_0x38C3A68D7861DCFD(func_136(), func_135(0x00000003), 0x00000001);
				unk_0x38C3A68D7861DCFD(func_136(), func_135(0x00000004), 0x00000001);
				unk_0x38C3A68D7861DCFD(func_136(), func_135(0x00000005), 0x00000001);
			}
			unk_0xEAB026E686C0D991(0x00000000, 0x00000019, 0x00000001);
			if (unk_0x9A01369A10646AFE(func_136(), func_135(0x00000000)) && func_134())
			{
				switch (iLocal_51)
				{
					case 0x00000001:
					case 0x00000003:
					case 0x00000004:
						iLocal_75 = 0x00000001;
						func_133(0x00000000);
						func_122("PLAYFUL");
						func_108("CHOP_WALK", 0x00000000);
						func_121(0x00000002, 0x00000001);
						break;
					
					case 0x00000002:
					case 0x00000005:
					case 0x0000000F:
						iLocal_75 = 0x00000000;
						func_133(0x00000000);
						func_121(0x00000003, 0x00000001);
						break;
					
					case 0x00000011:
					case 0x00000012:
						iLocal_75 = 0x00000001;
						func_133(0x00000000);
						func_108("CHOP_WALK", 0x00000000);
						iLocal_53 = 0x00000002;
						break;
				}
				if (iLocal_75 == 0x00000001 && unk_0x6FB46C25CCB7E6D5(joaat("sp_chop_walk_done"), &iLocal_381, 0xFFFFFFFF))
				{
					iLocal_381++;
					unk_0xCDC520E5E48E63D9(joaat("sp_chop_walk_done"), iLocal_381, 0x00000001);
				}
			}
			if (bLocal_327 == 0x00000001)
			{
				if (unk_0xD245978525608929(func_136(), func_135(0x00000001)) && func_134())
				{
					if (iLocal_51 == 0x00000011 || iLocal_51 == 0x00000012)
					{
						iLocal_53 = 0x00000005;
					}
					else
					{
						func_121(0x00000005, 0x00000001);
					}
				}
				if (func_43() == 0x00000002 && iLocal_328 == 0x00000000)
				{
					if (func_132() >= 0x00000001)
					{
						if (unk_0xD245978525608929(func_136(), func_135(0x00000002)))
						{
							func_108("CHOP_CANT", 0x00000000);
						}
					}
					if (func_132() >= 0x00000002)
					{
						if (unk_0xD245978525608929(func_136(), func_135(0x00000003)))
						{
							func_108("CHOP_CANT", 0x00000000);
						}
					}
					if (func_132() >= 0x00000003)
					{
						if (unk_0xD245978525608929(func_136(), func_135(0x00000004)))
						{
							func_108("CHOP_CANT", 0x00000000);
						}
					}
					if (func_132() >= 0x00000004)
					{
						if (unk_0xD245978525608929(func_136(), func_135(0x00000005)))
						{
							func_108("CHOP_CANT", 0x00000000);
						}
					}
				}
				else
				{
					if (func_132() >= 0x00000001)
					{
						if (unk_0xD245978525608929(func_136(), func_135(0x00000002)) && func_134())
						{
							func_108("CHOP_SIT", 0x00000000);
							if (iLocal_51 == 0x00000011 || iLocal_51 == 0x00000012)
							{
								iLocal_53 = 0x00000008;
							}
							else
							{
								func_121(0x00000008, 0x00000001);
							}
						}
					}
					if (func_132() >= 0x00000002)
					{
						if (unk_0xD245978525608929(func_136(), func_135(0x00000003)) && func_134())
						{
							func_108("CHOP_PAW", 0x00000000);
							if (iLocal_51 == 0x00000011 || iLocal_51 == 0x00000012)
							{
								iLocal_53 = 0x00000009;
							}
							else
							{
								func_121(0x00000009, 0x00000001);
							}
						}
					}
					if (func_132() >= 0x00000003)
					{
						if (unk_0xD245978525608929(func_136(), func_135(0x00000004)) && func_134())
						{
							func_108("CHOP_BEG", 0x00000000);
							if (iLocal_51 == 0x00000011 || iLocal_51 == 0x00000012)
							{
								iLocal_53 = 0x00000007;
							}
							else
							{
								func_121(0x00000007, 0x00000001);
							}
						}
					}
					if (func_132() >= 0x00000004)
					{
						if (unk_0xD245978525608929(func_136(), func_135(0x00000005)) && func_134())
						{
							func_108("CHOP_PET", 0x00000000);
							if (iLocal_51 == 0x00000011 || iLocal_51 == 0x00000012)
							{
								iLocal_53 = 0x0000000A;
							}
							else
							{
								func_121(0x0000000A, 0x00000001);
							}
						}
					}
				}
			}
		}
		else
		{
			unk_0xA37A90C62806D848(0x00000001);
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_5E, 0x00000000))
			{
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_5E), 0x00000000);
			}
			if (bLocal_327 == 0x00000000)
			{
				bLocal_327 = func_131();
			}
			if (bLocal_327 == 0x00000001)
			{
				iVar0 = func_132();
				if (iVar0 > 0x00000004)
				{
					iVar0 = 0x00000004;
				}
				if ((((iLocal_51 == 0x00000001 || iLocal_51 == 0x00000011) || iLocal_51 == 0x00000012) || iLocal_51 == 0x00000003) || iLocal_51 == 0x00000004)
				{
					if ((func_43() == 0x00000002 && iLocal_328 == 0x00000000) && iVar0 > 0x00000000)
					{
						StringCopy(&Local_88, "CHOP_H_WAIT_H", 32);
					}
					else
					{
						StringCopy(&Local_88, "CHOP_H_WAIT_", 32);
					}
					StringIntConCat(&Local_88, iVar0, 32);
					if (unk_0x91E3F625EF57450D(0x00000000))
					{
						StringConCat(&Local_88, "_KM", 32);
					}
				}
				else if (iLocal_51 == 0x00000002 || iLocal_51 == 0x0000000F)
				{
					if ((func_43() == 0x00000002 && iLocal_328 == 0x00000000) && iVar0 > 0x00000000)
					{
						StringCopy(&Local_88, "CHOP_H_WALK_H", 32);
					}
					else
					{
						StringCopy(&Local_88, "CHOP_H_WALK_", 32);
					}
					StringIntConCat(&Local_88, iVar0, 32);
					if (unk_0x91E3F625EF57450D(0x00000000))
					{
						StringConCat(&Local_88, "_KM", 32);
					}
				}
				func_130(&Local_88);
			}
			else if (iLocal_51 == 0x00000002 || iLocal_51 == 0x0000000F)
			{
				if (unk_0x91E3F625EF57450D(0x00000000))
				{
					func_130("CHOP_H_HOME_KM");
				}
				else
				{
					func_130("CHOP_H_HOME");
				}
			}
			else if (unk_0x91E3F625EF57450D(0x00000000))
			{
				func_130("CHOP_H_NOAPP_KM");
			}
			else
			{
				func_130("CHOP_H_NOAPP");
			}
		}
	}
	else
	{
		func_133(0x00000001);
	}
}

void func_130(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

int func_131()
{
	if (Global_1B416.f_4E91.f_107)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_132()
{
	return Global_1B416.f_4E91.f_FE.f_3;
}

void func_133(int iParam0)
{
	if (func_137())
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	if (iParam0 == 0x00000001 && unk_0x8C74DE122769E1BF())
	{
		unk_0x29D5132FBDCF2B1E(0x00000000);
	}
}

int func_134()
{
	if (((iLocal_51 == 0x00000008 || iLocal_51 == 0x00000007) || iLocal_51 == 0x00000009) || iLocal_51 == 0x0000000A)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_135(int iParam0)
{
	if (unk_0x91E3F625EF57450D(0x00000000))
	{
		switch (iParam0)
		{
			case 0x00000000:
				return 0x00000018;
			
			case 0x00000001:
				return 0x00000016;
			
			case 0x00000002:
				return 0x0000002C;
			
			case 0x00000003:
				return 0x0000002D;
			
			case 0x00000004:
				return 0x00000033;
			
			case 0x00000005:
				return 0x00000017;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0x00000000:
				return 0x000000E3;
			
			case 0x00000001:
				return 0x000000E5;
			
			case 0x00000002:
				return 0x000000E0;
			
			case 0x00000003:
				return 0x000000E1;
			
			case 0x00000004:
				return 0x000000DF;
			
			case 0x00000005:
				return 0x000000DE;
			}
		
		default:
	}
	return 0x00000000;
}

int func_136()
{
	if (unk_0x91E3F625EF57450D(0x00000000))
	{
		return 0x00000000;
	}
	return 0x00000002;
}

int func_137()
{
	if (unk_0xFEBC1E4EC9E001F0())
	{
		if (((((((((((((((((((func_105("CHOP_H_WAIT_0") || func_105("CHOP_H_WAIT_1")) || func_105("CHOP_H_WAIT_2")) || func_105("CHOP_H_WAIT_3")) || func_105("CHOP_H_WAIT_4")) || func_105("CHOP_H_WAIT_H1")) || func_105("CHOP_H_WAIT_H2")) || func_105("CHOP_H_WAIT_H3")) || func_105("CHOP_H_WAIT_H4")) || func_105("CHOP_H_HOME")) || func_105("CHOP_H_WALK_0")) || func_105("CHOP_H_WALK_1")) || func_105("CHOP_H_WALK_2")) || func_105("CHOP_H_WALK_3")) || func_105("CHOP_H_WALK_4")) || func_105("CHOP_H_WALK_H1")) || func_105("CHOP_H_WALK_H2")) || func_105("CHOP_H_WALK_H3")) || func_105("CHOP_H_WALK_H4")) || func_105("CHOP_H_NOAPP"))
		{
			return 0x00000001;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			if (((((((((((((((((((func_105("CHOP_H_WAIT_0_KM") || func_105("CHOP_H_WAIT_1_KM")) || func_105("CHOP_H_WAIT_2_KM")) || func_105("CHOP_H_WAIT_3_KM")) || func_105("CHOP_H_WAIT_4_KM")) || func_105("CHOP_H_WAIT_H1_KM")) || func_105("CHOP_H_WAIT_H2_KM")) || func_105("CHOP_H_WAIT_H3_KM")) || func_105("CHOP_H_WAIT_H4_KM")) || func_105("CHOP_H_HOME_KM")) || func_105("CHOP_H_WALK_0_KM")) || func_105("CHOP_H_WALK_1_KM")) || func_105("CHOP_H_WALK_2_KM")) || func_105("CHOP_H_WALK_3_KM")) || func_105("CHOP_H_WALK_4_KM")) || func_105("CHOP_H_WALK_H1_KM")) || func_105("CHOP_H_WALK_H2_KM")) || func_105("CHOP_H_WALK_H3_KM")) || func_105("CHOP_H_WALK_H4_KM")) || func_105("CHOP_H_NOAPP_KM"))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_138(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_140(0x00000000, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_139(0x00000000, iVar0);
		Global_150976.f_46F[iVar0] = iParam0;
		Global_150976.f_46F.f_B[iVar0] = iParam1;
		StringCopy(&(Global_150976.f_46F.f_16[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_46F.f_C2[iVar0] = iParam3;
		Global_150976.f_46F.f_B7[iVar0] = iParam4;
		Global_150976.f_46F.f_D8[iVar0] = iParam5;
		Global_150976.f_46F.f_E3[iVar0 /*3*/] = fParam6;
		Global_150976.f_46F.f_E3[iVar0 /*3*/].f_1 = fParam7;
		Global_150976.f_46F.f_102[iVar0] = iParam8;
		Global_150976.f_46F.f_10D[iVar0] = iParam9;
		Global_150976.f_46F.f_138[iVar0] = iParam10;
		Global_150976.f_46F.f_143[iVar0] = iParam11;
		Global_150976.f_46F.f_14E[iVar0] = iParam12;
		Global_150976.f_46F.f_159[iVar0] = iParam13;
		Global_150976.f_46A = 0x00000001;
		Global_150976.f_46F.f_164[iVar0] = iParam14;
		Global_150976.f_46F.f_16F[iVar0] = iParam15;
		Global_150976.f_46F.f_17A[iVar0] = iParam16;
		Global_150976.f_46F.f_185[iVar0] = iParam17;
		Global_150976.f_46F.f_190[iVar0] = iParam18;
		Global_150976.f_46F.f_19B[iVar0] = iParam19;
		Global_150976.f_46F.f_1A6[iVar0] = iParam20;
		Global_150976.f_46F.f_1B1[iVar0] = iParam21;
		Global_150976.f_46F.f_1BC[iVar0] = iParam22;
		Global_150976.f_46F.f_1C7[iVar0] = iParam23;
		Global_150976.f_46F.f_1D2[iVar0] = iParam24;
		Global_150976.f_46F.f_CD[iVar0] = iParam25;
		Global_150976.f_46F.f_1DD[iVar0] = iParam26;
		Global_150976.f_46F.f_1E8[iVar0] = iParam27;
		Global_150976.f_46F.f_1F3[iVar0] = iParam28;
		Global_150976.f_46F.f_1FE[iVar0] = iParam29;
		Global_150976.f_46F.f_209[iVar0] = iParam30;
		Global_150976.f_46F.f_214[iVar0] = iParam31;
		Global_150976.f_46F.f_21F[iVar0] = iParam32;
		Global_150976.f_46F.f_22A[iVar0] = iParam33;
	}
}

void func_139(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_140(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

bool func_141()
{
	return Global_12061;
}

bool func_142()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_143()
{
	if (iLocal_51 == 0x0000000C)
	{
		return 0x00000000;
	}
	if (iLocal_51 == 0x0000000D || (iLocal_51 == 0x0000000E && func_113(iLocal_69, 0x0E763797)))
	{
		if (iLocal_357 == 0x00000000 && unk_0x06F8112AA79C53D9(0x00000002, 0x000000E4))
		{
			func_108("CHOP_BUSY", 0x00000000);
			iLocal_357 = 0x00000001;
		}
		return 0x00000000;
	}
	return 0x00000001;
}

int func_144()
{
	if (func_106(unk_0x16F2683693E537C9(), iLocal_69) < 10f)
	{
		if (iLocal_51 == 0x0000000F && iLocal_52 < 0x00000004)
		{
		}
		else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
		{
			func_148(0x00000000);
			func_147(0x00000000);
			return 0x00000000;
		}
		else
		{
			func_145();
			func_148(0x00000001);
			func_147(0x00000001);
			return 0x00000001;
		}
	}
	func_148(0x00000000);
	func_147(0x00000000);
	if (func_105("CHOP_H_INTRO") || (unk_0x0EFF6B4415DAF4A1() && func_105("CHOP_H_INTRO_KM")))
	{
		unk_0xA37A90C62806D848(0x00000001);
	}
	return 0x00000000;
}

void func_145()
{
	if ((((((((!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_5E, 0x00000000) && !(func_105("CHOP_H_INTRO") || (unk_0x0EFF6B4415DAF4A1() && func_105("CHOP_H_INTRO_KM")))) && !func_105("PW_HELP_1")) && !func_105("PW_HELP_2")) && !func_146()) && !unk_0x991B1F0980C62628()) && !func_3(0x00000000)) && !func_142()) && !func_141())
	{
		if ((iLocal_51 == 0x00000001 || iLocal_51 == 0x00000011) || iLocal_51 == 0x00000012)
		{
			if (func_118(unk_0x16F2683693E537C9(), 0x00000001))
			{
				unk_0xA37A90C62806D848(0x00000001);
				if (unk_0x91E3F625EF57450D(0x00000000))
				{
					func_130("CHOP_H_INTRO_KM");
				}
				else
				{
					func_130("CHOP_H_INTRO");
				}
			}
		}
	}
	if ((unk_0x0EFF6B4415DAF4A1() && func_105("CHOP_H_INTRO_KM")) || func_105("CHOP_H_INTRO"))
	{
		if ((((func_146() || unk_0x991B1F0980C62628()) || func_3(0x00000000)) || func_142()) || func_141())
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
}

int func_146()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_147(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		if (func_125(iLocal_69))
		{
			unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_69, 0xFFFFFFFF, 0x00000030, 0x00000002);
			iLocal_73 = 0x00000001;
		}
	}
	else if (iLocal_73 == 0x00000001 && func_125(unk_0x16F2683693E537C9()))
	{
		unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
		iLocal_73 = 0x00000000;
	}
}

void func_148(int iParam0)
{
	int iVar0;
	
	unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 0x00000001);
	if (iLocal_74 == 0x00000001 && iVar0 != joaat("weapon_unarmed"))
	{
		iParam0 = 0x00000000;
	}
	if (iParam0 == 0x00000001)
	{
		if (iLocal_74 == 0x00000000 && iVar0 == joaat("weapon_unarmed"))
		{
			unk_0x25C5402CC10F76CD(iLocal_69, 0x00000001);
			unk_0xE2F0767314863BD8(iLocal_69, 0x00000001, 0x00000000);
			unk_0x9EF94AF4D2306535(iLocal_69, 0x00000001);
			unk_0x072E4FEB1DF47301(iLocal_69, 0x00000001);
			iLocal_74 = 0x00000001;
		}
	}
	else if (iLocal_74 == 0x00000001)
	{
		unk_0x25C5402CC10F76CD(iLocal_69, 0x00000000);
		unk_0xE2F0767314863BD8(iLocal_69, 0x00000000, 0x00000000);
		unk_0x9EF94AF4D2306535(iLocal_69, 0x00000000);
		iLocal_74 = 0x00000000;
	}
}

void func_149()
{
	int iVar0;
	var uVar1[5];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if ((iLocal_51 != 0x00000006 && iLocal_86 == 0x00000000) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000001))
	{
		if (((iLocal_51 == 0x00000002 || iLocal_51 == 0x00000005) || iLocal_51 == 0x0000000F) || (iLocal_51 == 0x0000000E && !func_113(iLocal_69, 0x0E763797)))
		{
			if (unk_0xFCF127F1F950630C(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 100f) > 0x00000000 || unk_0xFCF127F1F950630C(iLocal_69, unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001), 100f) > 0x00000000)
			{
				unk_0x3F423BF5B8125A50("creatures@rottweiler@melee@streamed_taunts@");
				iVar0 = 0x00000000;
				while (iVar0 < unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar1, 0xFFFFFFFF))
				{
					if ((((!func_125(iVar2) && func_125(uVar1[iVar0])) && (unk_0x4734A6196B611C3B(uVar1[iVar0], unk_0x16F2683693E537C9()) || unk_0x4734A6196B611C3B(uVar1[iVar0], iLocal_69))) && !unk_0x405E212DDE472467(uVar1[iVar0], 0x00000000)) && uVar1[iVar0] != iLocal_69)
					{
						iVar2 = uVar1[iVar0];
					}
					iVar0++;
				}
				if (func_125(iVar2))
				{
					unk_0x6C3AE6E278DB3D0E(iLocal_69, iVar2, 0x00000000, 0x00000010);
					func_108("CHOP_ATTACK2", 0x00000000);
					if (((!unk_0xFEBC1E4EC9E001F0() && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_5E, 0x00000006)) && !func_19()) && !unk_0x991B1F0980C62628())
					{
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_5E), 0x00000006);
						func_15("CHOP_H_ATTACK", 0xFFFFFFFF);
					}
					func_40(0x00000000);
					func_121(0x00000006, 0x00000000);
				}
			}
			else
			{
				unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar3, 0x00000001);
				if (iVar3 != joaat("weapon_ball") && !(iLocal_51 == 0x0000000F && iLocal_52 == 0x00000001))
				{
					if (unk_0xE632DC0701489D5A(unk_0xD803B885F5E47A62(), &iVar4) || unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar4))
					{
						if (unk_0xEC560E589DF8370E(iVar4))
						{
							iVar5 = unk_0x940C1429253D3B1B(iVar4);
							if (((!unk_0xEB6A8945D1AC98A1(iVar5) && iVar5 != iLocal_69) && !unk_0x405E212DDE472467(iVar5, 0x00000000)) && func_4(unk_0x16F2683693E537C9(), iVar5, 0x00000001) < 50f)
							{
								unk_0x6C3AE6E278DB3D0E(iLocal_69, iVar5, 0x00000000, 0x00000010);
								iLocal_374++;
								if (iLocal_374 >= 0x00000003)
								{
									unk_0x0F52891B1CED828B(unk_0xD803B885F5E47A62(), 0f);
									unk_0xCB9603FE12CFDEF4(unk_0xD803B885F5E47A62(), 0x00000002, 0x00000000);
								}
								func_108("CHOP_ATTACK1", 0x00000000);
								if (((!unk_0xFEBC1E4EC9E001F0() && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_5E, 0x0000000B)) && !func_19()) && !unk_0x991B1F0980C62628())
								{
									unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_5E), 0x0000000B);
									func_15("CHOP_H_AIM", 0xFFFFFFFF);
								}
								func_40(0x00000000);
								func_121(0x00000006, 0x00000000);
							}
						}
					}
				}
			}
		}
	}
	if ((unk_0x1C0640BA9A7327B3() - iLocal_375) > 0x0000EA60)
	{
		iLocal_375 = unk_0x1C0640BA9A7327B3();
		if (iLocal_374 > 0x00000000)
		{
			iLocal_374 = (iLocal_374 - 0x00000001);
		}
	}
}

void func_150()
{
	if ((iLocal_51 != 0x00000010 && Global_7835 == 0x00000001) && unk_0x3A0342D9BFBD378D(unk_0x16F2683693E537C9()))
	{
		func_121(0x00000010, 0x00000001);
	}
}

void func_151()
{
	if (iLocal_356 == 0x00000000)
	{
		if (func_118(unk_0x16F2683693E537C9(), 0x00000001))
		{
			func_108("CHOP_DUMP", 0x00000000);
			iLocal_356 = 0x00000001;
		}
	}
}

void func_152()
{
	if (iLocal_360 != func_153() && func_125(iLocal_69))
	{
		if (func_131())
		{
			iLocal_360 = func_153();
			unk_0x64F9F278AB9DCA2C(iLocal_69, 0x00000003, 0x00000000, iLocal_360, 0x00000000);
		}
		else if (iLocal_360 != 0x00000004)
		{
			iLocal_360 = 0x00000004;
			unk_0x64F9F278AB9DCA2C(iLocal_69, 0x00000003, 0x00000000, iLocal_360, 0x00000000);
		}
	}
}

int func_153()
{
	return Global_1B416.f_4E91.f_FE.f_4;
}

void func_154()
{
	int iVar0;
	
	Global_78C2 = 0x00000000;
	unk_0x523BCC9DC80CD82F(func_162());
	if (!unk_0xB87F6CF6E5628C67(func_162()))
	{
		return;
	}
	if (func_178(0x00000006))
	{
		vLocal_329.f_4 = 0x00000006;
		vLocal_329 = { 18.1531f, 535.2469f, 169.6324f };
		vLocal_329.f_3 = 204.8112f;
		vLocal_329.f_5 = { 19.52771f, 537.436f, 170.143f };
		vLocal_329.f_8 = 151.3064f;
		vLocal_347 = { 19.45963f, 535.7817f, 169.6277f };
		vLocal_358[0x00000000 /*3*/] = { 17.36033f, 528.8973f, 169.6277f };
		vLocal_358[0x00000001 /*3*/] = { 19.46877f, 529.1785f, 169.6277f };
		vLocal_358[0x00000002 /*3*/] = { 20.82979f, 531.5168f, 169.6277f };
		vLocal_358[0x00000003 /*3*/] = { 22.83555f, 532.3281f, 169.6277f };
		vLocal_358[0x00000004 /*3*/] = { 20.79285f, 535.001f, 169.6277f };
		vLocal_358[0x00000005 /*3*/] = { 18.05178f, 535.6321f, 169.6277f };
		vLocal_358[0x00000006 /*3*/] = { 18.92047f, 534.0938f, 169.6277f };
		vLocal_358[0x00000007 /*3*/] = { 17.51333f, 533.4775f, 169.6277f };
		func_161(&uLocal_96);
		func_160(&uLocal_96, 12.41124f, 535.5469f, 169.6277f);
		func_160(&uLocal_96, 19.04497f, 538.5729f, 169.6277f);
		func_160(&uLocal_96, 25.00015f, 534.4414f, 169.6277f);
		func_160(&uLocal_96, 28.0998f, 527.7639f, 169.4277f);
		func_160(&uLocal_96, 17.75896f, 523.3129f, 169.2277f);
		func_159(&uLocal_96);
	}
	else
	{
		vLocal_329.f_4 = 0x00000005;
		vLocal_329 = { -10.25168f, -1422.907f, 29.67775f };
		vLocal_329.f_3 = 157.9037f;
		vLocal_329.f_5 = { -9.73f, -1421.55f, 30.1f };
		vLocal_329.f_8 = 148.26f;
		vLocal_347 = { -10.6379f, -1424.561f, 29.67365f };
		vLocal_358[0x00000000 /*3*/] = { -10.03643f, -1423.529f, 29.67602f };
		vLocal_358[0x00000001 /*3*/] = { -10.78779f, -1425.306f, 29.70937f };
		vLocal_358[0x00000002 /*3*/] = { -12.7048f, -1424.748f, 29.72222f };
		vLocal_358[0x00000003 /*3*/] = { -12.47465f, -1422.485f, 29.74699f };
		vLocal_358[0x00000004 /*3*/] = { -14.26666f, -1424.855f, 29.71964f };
		vLocal_358[0x00000005 /*3*/] = { -14.55816f, -1423.048f, 29.78372f };
		vLocal_358[0x00000006 /*3*/] = { -16.13293f, -1424.489f, 29.76139f };
		vLocal_358[0x00000007 /*3*/] = { -16.25662f, -1423.325f, 29.81294f };
		func_161(&uLocal_96);
		func_160(&uLocal_96, -7.26821f, -1427.065f, 29.67468f);
		func_160(&uLocal_96, -7.39631f, -1418.851f, 29.5858f);
		func_160(&uLocal_96, -14.27201f, -1421.59f, 29.76819f);
		func_160(&uLocal_96, -22.85347f, -1423.173f, 29.74042f);
		func_160(&uLocal_96, -22.77974f, -1427.168f, 29.65953f);
		func_159(&uLocal_96);
	}
	bLocal_327 = func_131();
	func_156();
	if (func_43() == 0x00000002)
	{
		unk_0x75CFD6AD66ADFDD1(vLocal_347, 2f, 0x00000002);
		unk_0x523BCC9DC80CD82F(joaat("prop_big_shit_02"));
		while (!unk_0xB87F6CF6E5628C67(joaat("prop_big_shit_02")))
		{
			SYSTEM::WAIT(0x00000000);
		}
		iLocal_346 = unk_0x7707E48765093646(joaat("prop_big_shit_02"), vLocal_347, 0x00000001, 0x00000001, 0x00000000);
		unk_0x71199B01895C6202(joaat("prop_big_shit_02"));
		iLocal_356 = 0x00000000;
	}
	else
	{
		iLocal_356 = 0x00000001;
	}
	iLocal_348 = 0x00000000;
	if (unk_0x09AC81E49EA267F7(0x00000000, 0x00000002) == 0x00000000)
	{
		iLocal_337 = 0xFFFFFFFF;
	}
	else
	{
		iLocal_337 = unk_0x09AC81E49EA267F7(0x00004E20, 0x00007530);
	}
	if (iLocal_325 == 0x00000001)
	{
		iLocal_51 = 0x00000007;
		iLocal_75 = 0x00000001;
	}
	else if (iLocal_326 == 0x00000001)
	{
		iLocal_51 = 0x00000002;
	}
	else if (iLocal_337 > 0xFFFFFFFF)
	{
		iLocal_51 = 0x0000000B;
		iLocal_75 = 0x00000000;
	}
	else
	{
		iLocal_51 = 0x00000001;
		iLocal_75 = 0x00000000;
	}
	iLocal_82 = unk_0x544B74C043CE9948(11.23f, 515.4f, 168f, 9f, 21f, 4f, func_155(113f), 0x00000000, 0x00000007);
	iLocal_83 = unk_0x544B74C043CE9948(24f, 528f, 168f, 5f, 5f, 4f, func_155(113f), 0x00000000, 0x00000007);
	vLocal_84[0x00000000 /*3*/] = { 444.1685f, 5569.016f, 780.1895f };
	vLocal_84[0x00000001 /*3*/] = { 443.8968f, 5574.931f, 780.1895f };
	vLocal_84[0x00000002 /*3*/] = { -739.1624f, 5596.784f, 40.6594f };
	vLocal_84[0x00000003 /*3*/] = { -738.8002f, 5593.269f, 40.6594f };
	fLocal_85[0x00000000] = 270f;
	fLocal_85[0x00000001] = 270f;
	fLocal_85[0x00000002] = 95f;
	fLocal_85[0x00000003] = 95f;
	func_97();
	iLocal_73 = 0x00000000;
	iLocal_338 = 0x00000000;
	iLocal_342 = unk_0x1C0640BA9A7327B3();
	iVar0 = func_132();
	if (iVar0 > 0x00000004)
	{
		iVar0 = 0x00000004;
	}
	StringCopy(&Local_88, "CHOP_H_WAIT_", 32);
	StringIntConCat(&Local_88, iVar0, 32);
	if (unk_0x91E3F625EF57450D(0x00000000))
	{
		StringConCat(&Local_88, "_KM", 32);
	}
	Global_78C4 = 0x00000000;
	iLocal_50 = 0x00000001;
}

float func_155(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

void func_156()
{
	if (iLocal_325 == 0x00000001)
	{
		if (func_158())
		{
			unk_0x73270B3C9CC833FD(iLocal_69, 0x00000001, 0x00000001);
			unk_0xA3BF0AA5A2608191(iLocal_69);
			func_152();
			while (func_146())
			{
				SYSTEM::WAIT(0x00000000);
			}
		}
	}
	else if (iLocal_326 == 0x00000001)
	{
		if (func_125(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0x00000000))
			{
				iLocal_78 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0x00000000);
				func_79();
				func_78();
				func_157(&iLocal_69, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 0x00000000, 0x00000001);
				if (func_125(iLocal_69))
				{
					unk_0x11AD11297DC58CC7(iLocal_69, 0x00000001);
					unk_0x5D634F03BA026EC8(iLocal_69, 0x00000001);
					unk_0xA245D14CC59CDD36(iLocal_69, 0x00000000);
					unk_0x7D732AB707BE9152(iLocal_69, 0x00000000);
					func_100();
					unk_0xE121AE1BBF90E186(iLocal_69, 0x00000001);
					unk_0xF821F915BC24D246(iLocal_69, iLocal_78, 0x00000000);
					iLocal_86 = 0x00000008;
					func_152();
					unk_0xF895E10BF4C72645(iLocal_69, 0x00000000, 0x00000000);
				}
				while (func_146())
				{
					if (func_125(iLocal_69) && !func_113(iLocal_69, 0x87B9A382))
					{
						unk_0x3F423BF5B8125A50(sLocal_371);
						if (unk_0xB4AE0788C1587752(sLocal_371))
						{
							unk_0xC6EB89C59F2AF6B8(iLocal_69, sLocal_371, "sit", 8f, -8f, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					SYSTEM::WAIT(0x00000000);
				}
			}
		}
	}
	if (!unk_0xC844350D5D58C99A(iLocal_69))
	{
		func_157(&iLocal_69, vLocal_329, vLocal_329.f_3, 0x00000001);
	}
	if (func_125(iLocal_69))
	{
		unk_0xF63400DBE3303D26("rel_group_chop", &iLocal_71);
		iLocal_72 = 0x00000001;
		unk_0x0E2400AB9174FA81(0x00000001, 0x6F0783F5, iLocal_71);
		unk_0x0E2400AB9174FA81(0x00000001, iLocal_71, 0x6F0783F5);
		unk_0x0E2400AB9174FA81(0x00000003, 0x4503A9A9, iLocal_71);
		unk_0x0E2400AB9174FA81(0x00000003, iLocal_71, 0x4503A9A9);
		unk_0x6DF7BF67E86AAE86(iLocal_69, iLocal_71);
		unk_0x11AD11297DC58CC7(iLocal_69, 0x00000001);
		unk_0x5D634F03BA026EC8(iLocal_69, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_69, 0x000000B9, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_69, 0x0000001A, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_69, 0x00000020, 0x00000000);
		unk_0x4E885A246A9D983A(iLocal_69, 0x0000001D, 0x00000000);
		unk_0x4E885A246A9D983A(iLocal_69, 0x00000074, 0x00000000);
		unk_0x4E885A246A9D983A(iLocal_69, 0x00000076, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_69, 0x00000084, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_69, 0x0000010C, 0x00000000);
		unk_0x4E885A246A9D983A(iLocal_69, 0x0000006B, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_69, 0x00000119, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_69, 0x00000089, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_69, 0x00000092, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_69, 0x0000009D, 0x00000000);
		unk_0x4E885A246A9D983A(iLocal_69, 0x0000002D, 0x00000001);
		unk_0x4E885A246A9D983A(iLocal_69, 0x000000A7, 0x00000001);
		unk_0xA245D14CC59CDD36(iLocal_69, 0x00000000);
		unk_0x7D732AB707BE9152(iLocal_69, 0x00000000);
		unk_0x262EF6C6306BEA6C(iLocal_69, joaat("weapon_animal"), 0x00000001, 0x00000001, 0x00000001);
		unk_0xAFF39FB306F8E232(iLocal_69, 0x00000005, 0x00000001);
		unk_0xAFF39FB306F8E232(iLocal_69, 0x00000000, 0x00000000);
		unk_0xAFF39FB306F8E232(iLocal_69, 0x0000002E, 0x00000001);
		unk_0x967762C930C0C5FD(iLocal_69, 100f);
		unk_0x9FA191B317572861(iLocal_69, 100f);
		unk_0xBAFED2F6486F771A(iLocal_69, 0x00000200, 0x00000001);
		unk_0x00A6D36F507FD6EA(iLocal_69, 0x00000000);
		unk_0x093A734E5AEA758F(iLocal_69, 0x00000320);
		unk_0xD458AC1C1D29C3B4(iLocal_69, 0x00000320, 0x00000000);
		unk_0x25BD67336EA4AECE(iLocal_69, 0x000000C8);
		if (!unk_0x405E212DDE472467(iLocal_69, 0x00000000))
		{
			func_57();
		}
		func_111(&uLocal_148, 0x00000003, iLocal_69, "CHOP", 0x00000000, 0x00000001);
		unk_0x25C5402CC10F76CD(iLocal_69, 0x00000000);
		unk_0xE2F0767314863BD8(iLocal_69, 0x00000000, 0x00000000);
		unk_0x9EF94AF4D2306535(iLocal_69, 0x00000000);
		iLocal_74 = 0x00000000;
		Global_78C1 = 0x00000000;
		iLocal_374 = 0x00000000;
		iLocal_375 = unk_0x1C0640BA9A7327B3();
	}
}

int func_157(int iParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_162();
	unk_0x523BCC9DC80CD82F(iVar0);
	if (unk_0xB87F6CF6E5628C67(iVar0))
	{
		if (unk_0xC844350D5D58C99A(*iParam0))
		{
			unk_0xEBA53F35D0085654(iParam0);
		}
		*iParam0 = unk_0x36F2404464202779(0x0000001A, iVar0, vParam1, fParam2, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(*iParam0, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(*iParam0, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(*iParam0, 0x00000002, 0x00000000, 0x00000000, 0x00000000);
		if (Global_1B416.f_4E91.f_107)
		{
			unk_0x64F9F278AB9DCA2C(*iParam0, 0x00000003, 0x00000000, Global_1B416.f_4E91.f_FE.f_4, 0x00000000);
		}
		else
		{
			unk_0x64F9F278AB9DCA2C(*iParam0, 0x00000003, 0x00000000, 0x00000004, 0x00000000);
		}
		unk_0x64F9F278AB9DCA2C(*iParam0, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(*iParam0, 0x00000005, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(*iParam0, 0x00000006, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(*iParam0, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(*iParam0, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(*iParam0, 0x00000009, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(*iParam0, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
		unk_0x64F9F278AB9DCA2C(*iParam0, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
		unk_0xFFE16595F5CF81E9(*iParam0);
		if (bParam3)
		{
			unk_0x71199B01895C6202(iVar0);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_158()
{
	var uVar0[10];
	int iVar1;
	int iVar2;
	
	if (func_125(Global_180A1) && unk_0x61C907EA8258B04D(Global_180A1, func_162()))
	{
		iLocal_69 = Global_180A1;
		return 0x00000001;
	}
	iVar1 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, 0xFFFFFFFF);
	iVar2 = 0x00000000;
	while (iVar2 < iVar1)
	{
		if ((uVar0[iVar2] != 0x00000000 && func_125(uVar0[iVar2])) && unk_0x134B62B726CEC8E6(uVar0[iVar2]) == func_162())
		{
			iLocal_69 = uVar0[iVar2];
			return 0x00000001;
		}
		iVar2++;
	}
	return 0x00000000;
}

void func_159(var uParam0)
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_33 == 0x00000000)
	{
	}
	if (uParam0->f_2E < 0x00000003)
	{
	}
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_2E)
	{
		uParam0->f_2F = { uParam0->f_2F + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_2F = { uParam0->f_2F / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
	iVar0 = 0x00000000;
	while (iVar0 < uParam0->f_2E)
	{
		fVar1 = SYSTEM::VDIST2(uParam0->f_2F, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_32)
		{
			uParam0->f_32 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_32 = SYSTEM::SQRT(uParam0->f_32);
	uParam0->f_33 = 0x00000000;
}

void func_160(var uParam0, vector3 vParam1)
{
	if (uParam0->f_33 == 0x00000000)
	{
	}
	if (uParam0->f_2E >= 0x0000000F)
	{
	}
	*(uParam0[uParam0->f_2E /*3*/]) = { vParam1 };
	uParam0->f_2E++;
}

void func_161(var uParam0)
{
	if (uParam0->f_33)
	{
	}
	uParam0->f_2E = 0x00000000;
	uParam0->f_2F = { 0f, 0f, 0f };
	uParam0->f_32 = 0f;
	uParam0->f_33 = 0x00000001;
}

int func_162()
{
	return joaat("a_c_chop");
}

int func_163()
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	
	if (iLocal_50 > 0x00000000)
	{
		if (unk_0xC844350D5D58C99A(iLocal_69))
		{
			if (func_167(0x00000000) && Global_7835 == 0x00000000)
			{
				return 0x00000001;
			}
			if (!func_170(0x00000001))
			{
				return 0x00000001;
			}
			if (Global_1B40C == 0x00000001)
			{
				return 0x00000001;
			}
			if (((((((((((Global_12B4C == 0x00000001 && Global_7835 == 0x00000000) && Global_1CC0 == 0x00000000) && Global_792E == 0x00000000) && Global_792F == 0x00000000) && Global_7930 == 0x00000000) && Global_E545 == 0x00000000) && !func_146()) && !func_16()) && Global_189E0 == 0x00000000) && func_125(unk_0x16F2683693E537C9())) && !func_165())
			{
				return 0x00000001;
			}
			if (Global_175B0 == 0x00000001)
			{
				return 0x00000001;
			}
			if (unk_0x437347B10A200C4B(iLocal_69, 0x00000000))
			{
				if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && unk_0xB87D13D0C064E9D1(iLocal_69, unk_0x16F2683693E537C9(), 0x00000001))
				{
					Global_78C1 = 0x00000001;
					if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_5E, 0x00000009) && !unk_0x991B1F0980C62628())
					{
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_5E), 0x00000009);
						func_15("CHOP_H_DEAD", 0xFFFFFFFF);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_5E, 0x0000000C) && !unk_0x991B1F0980C62628())
				{
					unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_5E), 0x0000000C);
					func_15("CHOP_H_DEAD2", 0xFFFFFFFF);
				}
				return 0x00000001;
			}
			else
			{
				if (unk_0x991B1F0980C62628())
				{
					func_164();
				}
				else
				{
					if ((iLocal_51 == 0x00000002 || iLocal_51 == 0x00000005) || iLocal_51 == 0x0000000F)
					{
						fVar0 = 200f;
					}
					else
					{
						fVar0 = 100f;
					}
					if (func_4(unk_0x16F2683693E537C9(), iLocal_69, 0x00000001) > fVar0)
					{
						if ((!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_273C.f_5E, 0x00000004) && unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62())) && !unk_0x991B1F0980C62628())
						{
							if (((((iLocal_51 == 0x00000001 || iLocal_51 == 0x00000011) || iLocal_51 == 0x0000000B) || iLocal_51 == 0x00000004) || iLocal_51 == 0x00000003) || iLocal_51 == 0x0000000D)
							{
							}
							else
							{
								unk_0x5D96D8530B3D0904(&(Global_1B416.f_273C.f_5E), 0x00000004);
								func_15("CHOP_H_RANGE", 0xFFFFFFFF);
							}
						}
						return 0x00000001;
					}
				}
				if (!unk_0x405E212DDE472467(iLocal_69, 0x00000000) && unk_0x7F6DC62EA9922664(iLocal_69) > 0x00000000)
				{
					if (unk_0x70EED0761B82965E(iLocal_69))
					{
						vVar1 = { unk_0x68F4C0EC296D3901(iLocal_69, 0x00000001) };
						if (unk_0x0A829A23AC042EDE(vVar1, &fVar2))
						{
							if ((fVar2 - vVar1.z) > 0.1f)
							{
								unk_0xD458AC1C1D29C3B4(iLocal_69, 0x00000000, 0x00000000);
							}
						}
					}
					if (unk_0x4E861BC5B1EDA7BD(iLocal_69))
					{
						unk_0xD458AC1C1D29C3B4(iLocal_69, 0x00000000, 0x00000000);
					}
				}
			}
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_164()
{
	if (unk_0xFEBC1E4EC9E001F0())
	{
		if ((((((((((((((((((((((((((((((func_105("CHOP_H_INTRO") || func_105("CHOP_H_WAIT_0")) || func_105("CHOP_H_WAIT_1")) || func_105("CHOP_H_WAIT_2")) || func_105("CHOP_H_WAIT_3")) || func_105("CHOP_H_WAIT_4")) || func_105("CHOP_H_WAIT_H1")) || func_105("CHOP_H_WAIT_H2")) || func_105("CHOP_H_WAIT_H3")) || func_105("CHOP_H_WAIT_H4")) || func_105("CHOP_H_HOME")) || func_105("CHOP_H_WALK_0")) || func_105("CHOP_H_WALK_1")) || func_105("CHOP_H_WALK_2")) || func_105("CHOP_H_WALK_3")) || func_105("CHOP_H_WALK_4")) || func_105("CHOP_H_WALK_H1")) || func_105("CHOP_H_WALK_H2")) || func_105("CHOP_H_WALK_H3")) || func_105("CHOP_H_WALK_H4")) || func_105("CHOP_H_HUNT")) || func_105("CHOP_H_NOVEH")) || func_105("CHOP_H_CAR")) || func_105("CHOP_H_BIKE")) || func_105("CHOP_H_ATTACK")) || func_105("CHOP_H_BALL")) || func_105("CHOP_H_WHIS")) || func_105("CHOP_H_NOAPP")) || func_105("CHOP_H_BEHAVE")) || func_105("CHOP_H_BEHAVA")) || func_105("CHOP_H_AIM"))
		{
			unk_0xA37A90C62806D848(0x00000001);
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			if ((((((((((((((((((((func_105("CHOP_H_INTRO_KM") || func_105("CHOP_H_WAIT_0_KM")) || func_105("CHOP_H_WAIT_1_KM")) || func_105("CHOP_H_WAIT_2_KM")) || func_105("CHOP_H_WAIT_3_KM")) || func_105("CHOP_H_WAIT_4_KM")) || func_105("CHOP_H_WAIT_H1_KM")) || func_105("CHOP_H_WAIT_H2_KM")) || func_105("CHOP_H_WAIT_H3_KM")) || func_105("CHOP_H_WAIT_H4_KM")) || func_105("CHOP_H_HOME_KM")) || func_105("CHOP_H_WALK_0_KM")) || func_105("CHOP_H_WALK_1_KM")) || func_105("CHOP_H_WALK_2_KM")) || func_105("CHOP_H_WALK_3_KM")) || func_105("CHOP_H_WALK_4_KM")) || func_105("CHOP_H_WALK_H1_KM")) || func_105("CHOP_H_WALK_H2_KM")) || func_105("CHOP_H_WALK_H3_KM")) || func_105("CHOP_H_WALK_H4_KM")) || func_105("CHOP_H_NOAPP_KM"))
			{
				unk_0xA37A90C62806D848(0x00000001);
			}
		}
	}
}

bool func_165()
{
	return Global_17735;
}

int func_166()
{
	if (unk_0x991B1F0980C62628())
	{
		return Global_17A56;
	}
	if (func_146())
	{
		return Global_17A56;
	}
	return 0x0000013E;
}

int func_167(int iParam0)
{
	if (Global_A1D7 == 0x0000000F)
	{
		return 0x00000000;
	}
	if (func_168(iParam0))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

bool func_168(int iParam0)
{
	return func_169(iParam0, Global_A1D7);
}

int func_169(int iParam0, int iParam1)
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

bool func_170(int iParam0)
{
	func_171();
	return iParam0 == Global_1B416.f_936.f_21B.f_10E1;
}

void func_171()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_175(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_174(unk_0x16F2683693E537C9());
			if (func_173(iVar0) && (!func_172(0x0000000E) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_173(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_172(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_173(int iParam0)
{
	return iParam0 < 0x00000003;
}

int func_174(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0x00000000;
		while (iVar0 <= 0x00000002)
		{
			if (func_175(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 0x00000091;
}

int func_175(int iParam0)
{
	if (func_173(iParam0))
	{
		return func_176(iParam0);
	}
	else if (iParam0 != 0x00000091)
	{
	}
	return 0x00000000;
}

var func_176(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

int func_177(vector3 vParam0, int iParam1, int iParam2)
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
				if (func_178(iVar0) || iParam2 == 0x00000000)
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

bool func_178(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1C38[iParam0], 0x00000000);
}

int func_179(int iParam0)
{
	if (iParam0 == 0x00000092 || iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_180()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0x8A22C4C08282BF26(unk_0x7CF4675EC2B8ED0B()) > 0x00000001)
	{
	}
	else
	{
		Global_78C2 = 0x00000000;
		func_147(0x00000000);
		if (unk_0x8C74DE122769E1BF() && !iLocal_386)
		{
			unk_0x29D5132FBDCF2B1E(0x00000000);
		}
		func_67(&iLocal_70);
		if (func_179(0x0000003F))
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (func_179(0x0000007E))
				{
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), 19.3f, 528.24f, 169.63f, 0x00000001) > 50f)
					{
						func_61(0x0000008B, 0x00000001, 0x00000000);
					}
				}
				else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), -11.15f, -1425.56f, 29.67f, 0x00000001) > 50f)
				{
					func_61(0x0000008A, 0x00000001, 0x00000000);
				}
			}
		}
		func_40(0x00000001);
		func_42(&iLocal_346, 0x00000000);
		func_42(&iLocal_349, 0x00000000);
		if (unk_0x83A8177D302E1A7E(iLocal_77))
		{
			unk_0xF7E25143642732EA(iLocal_77, 0x00000000);
		}
		unk_0x29D7581AEF4440C2();
		if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), joaat("weapon_ball"), 0x00000000))
		{
			unk_0x650567883F5E3136(unk_0x16F2683693E537C9(), joaat("weapon_ball"));
		}
		if (func_125(unk_0x16F2683693E537C9()) && !func_172(0x00000000))
		{
			unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x00000020, 0x00000001);
		}
		if (unk_0xC844350D5D58C99A(iLocal_69))
		{
			if (func_188())
			{
				func_187(&iLocal_69);
			}
			else
			{
				if (!unk_0x437347B10A200C4B(iLocal_69, 0x00000000) && func_125(unk_0x16F2683693E537C9()))
				{
					if (unk_0x16102BEDC7435774(iLocal_69))
					{
						unk_0x0A94A109271BE75A(iLocal_69);
					}
					if (unk_0x69DF961355195C3C(iLocal_87) || unk_0x405E212DDE472467(iLocal_69, 0x00000000))
					{
						if (func_125(iLocal_78))
						{
							bVar0 = 0x00000000;
							while (!bVar0)
							{
								SYSTEM::WAIT(0x00000000);
								if (!func_186() || func_184(iLocal_78, 0x41280000, 0x00000001, 0x3F000000, 0x00000000, 0x00000001, 0x00000000))
								{
									bVar0 = 0x00000001;
								}
							}
							if (func_186())
							{
								if (!unk_0x1150BCE24B1630AC(iLocal_78, iLocal_94))
								{
									unk_0x611DFA9294B339CA(iLocal_78, iLocal_94, 0x00000000, 0x00000000);
								}
								unk_0x3F423BF5B8125A50(sLocal_371);
								while (!unk_0xB4AE0788C1587752(sLocal_371))
								{
									SYSTEM::WAIT(0x00000000);
								}
							}
							if (func_186())
							{
								iLocal_87 = unk_0xE9744DB7B8CA6965(0f, 0f, 0f, 0f, 0f, 0f, 0x00000002);
								unk_0x6BE2EAE992FD7C26(iLocal_87, iLocal_78, unk_0xF653B9B22DA806A9(iLocal_78, "seat_pside_f"));
								unk_0x327AAEE25F323797(iLocal_69);
								unk_0x915804B434753CBD(iLocal_69, iLocal_87, sLocal_371, "get_out", 1000f, -8f, 0x0000000A, 0x00000000, 0x447A0000, 0x00000000);
								unk_0xF895E10BF4C72645(iLocal_69, 0x00000000, 0x00000000);
								bVar1 = 0x00000000;
								while (!bVar1)
								{
									SYSTEM::WAIT(0x00000000);
									if (!func_186() || (unk_0x69DF961355195C3C(iLocal_87) && unk_0xA45992A6CE82FB43(iLocal_87) > 0.99f))
									{
										bVar1 = 0x00000001;
									}
								}
								SYSTEM::WAIT(0x00000000);
								if (func_186() && !unk_0x1150BCE24B1630AC(iLocal_78, iLocal_94))
								{
									unk_0x152BCACCF710B36E(iLocal_78, iLocal_94, 0x00000000);
								}
							}
						}
						else if (func_183() == 0x00000001)
						{
							if (iLocal_51 == 0x00000002 || iLocal_51 == 0x0000000F)
							{
								unk_0x327AAEE25F323797(iLocal_69);
								func_124(iLocal_69, unk_0x68E4ADDDDCD7BDDE(unk_0x16F2683693E537C9(), 1.75f, 0f, 0f), unk_0xD9522BA9E27E1349(iLocal_69), 0x00000001, 0x00000001);
								unk_0xF895E10BF4C72645(iLocal_69, 0x00000000, 0x00000000);
							}
						}
					}
					if (func_125(iLocal_69))
					{
						unk_0xFADC0A217229F6B5(iLocal_69, 0x00000001);
						unk_0xF3268524E9BE6D6E(iLocal_69, unk_0x16F2683693E537C9(), 100f, 0xFFFFFFFF, 0x00000000, 0x00000000);
					}
				}
				func_182(&iLocal_69, 0x00000001, 0x00000000, 0x00000001);
			}
		}
		func_56();
		func_55(&iLocal_78);
		func_98(0x00000000);
		unk_0x8D17794CE3273D70("creatures@rottweiler@move");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@world_dog_barking@enter");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@world_dog_barking@base");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@world_dog_barking@idle_a");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@world_dog_barking@exit");
		unk_0x8D17794CE3273D70("creatures@rottweiler@in_vehicle@4x4");
		unk_0x8D17794CE3273D70("creatures@rottweiler@in_vehicle@low_car");
		unk_0x8D17794CE3273D70("creatures@rottweiler@in_vehicle@std_car");
		unk_0x8D17794CE3273D70("creatures@rottweiler@in_vehicle@van");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@world_dog_sitting@enter");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@world_dog_sitting@idle_a");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@world_dog_sitting@exit");
		unk_0x8D17794CE3273D70("creatures@rottweiler@tricks@");
		unk_0x8D17794CE3273D70("creatures@rottweiler@amb@sleep_in_kennel@");
		unk_0x8D17794CE3273D70("creatures@rottweiler@indication@");
		unk_0x8D17794CE3273D70("misschop_vehicleenter_exit");
		unk_0x8D17794CE3273D70("creatures@rottweiler@melee@streamed_taunts@");
		func_181(&uLocal_148, 0x00000001);
		func_181(&uLocal_148, 0x00000003);
		func_164();
		unk_0x5CAFA5DD13658DFE(0x00000000);
		if (iLocal_82 > 0xFFFFFFFF)
		{
			unk_0xDDABC98CFF1A4C60(iLocal_82);
		}
		if (iLocal_83 > 0xFFFFFFFF)
		{
			unk_0xDDABC98CFF1A4C60(iLocal_83);
		}
		if (iLocal_72 == 0x00000001)
		{
			unk_0x51732B934211201A(iLocal_71);
		}
		unk_0x55D0A2DB35045A35(iLocal_384);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_181(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 0x00000001)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0x00000000;
	}
}

void func_182(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0x00000000, 0x00000001);
			if (iParam3 == 0x00000000)
			{
				unk_0x8FB4E06C94958F84(*iParam0);
			}
			unk_0xFADC0A217229F6B5(*iParam0, bParam1);
			if (iParam2 == 0x00000001)
			{
				unk_0x11AD11297DC58CC7(*iParam0, 0x00000000);
			}
		}
		unk_0x6DAD7906B73F064D(iParam0);
	}
}

int func_183()
{
	func_171();
	return Global_1B416.f_936.f_21B.f_10E1;
}

int func_184(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_185(iParam0);
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

void func_185(int iParam0)
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

int func_186()
{
	if ((func_125(unk_0x16F2683693E537C9()) && func_125(iLocal_78)) && func_125(iLocal_69))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_187(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0x00000000))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0x00000000, 0x00000001);
		}
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, 0x00000001, 0x00000000);
		}
		unk_0xEBA53F35D0085654(iParam0);
	}
}

int func_188()
{
	if (unk_0x991B1F0980C62628() && func_125(iLocal_69))
	{
		if (unk_0x69DF961355195C3C(iLocal_87) || unk_0x405E212DDE472467(iLocal_69, 0x00000000))
		{
			return 0x00000001;
		}
	}
	if (Global_78C3 == 0x00000001)
	{
		return 0x00000001;
	}
	if (Global_78C4 == 0x00000001)
	{
		Global_78C4 = 0x00000000;
		return 0x00000001;
	}
	if (func_125(iLocal_69))
	{
		if (iLocal_51 == 0x0000000B && unk_0x03068588A1FCED1A(iLocal_69))
		{
			return 0x00000001;
		}
		if (func_189(unk_0x68F4C0EC296D3901(iLocal_69, 0x00000000), 1f, 0x42C80000))
		{
			return 0x00000000;
		}
	}
	if (!func_167(0x00000000))
	{
		return 0x00000000;
	}
	if (func_172(0x00000006) || func_172(0x00000002))
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_189(vector3 vParam0, float fParam1, float fParam2)
{
	if (unk_0x8E28E832BEAC3DCE(vParam0, fParam1))
	{
		if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vParam0, fParam2, fParam2, fParam2, 0x00000000, 0x00000000, 0x00000000))
		{
			return 0x00000000;
		}
		else if (unk_0x757EF87A33649210())
		{
			return 0x00000000;
		}
		else
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

